#!/usr/bin/env python3
"""
Fury3 Static Recompilation - Phase 3 lift driver.

Adapts the proven pcrecomp linear-lift pipeline (cf. recoil/run_pipeline.py) to
Fury3: seeds function entries AND exact end addresses from IDA's catalog
(analysis/ida_funcs.json), so each function is disassembled within its true
[start, end) bounds instead of a next-entry guess. Lifts every IDA function via
the shared lift32 Lifter and emits chunked C + a dispatch table for indirect calls.

Usage: py -3 run_lift.py [analysis/FURY3.EXE] [src/recomp/gen]
"""
import sys, os, json, time, re

_here = os.path.dirname(os.path.abspath(__file__))
_pc = os.path.join(_here, '..', 'tools', 'tools')
sys.path.insert(0, os.path.join(_pc, 'pe'))
sys.path.insert(0, os.path.join(_pc, 'lift'))

from pe_analyze import analyze_pe, build_iat_map
from lift32 import Lifter
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_IMM

COND_JUMPS = {'je','jne','jz','jnz','ja','jae','jb','jbe','jg','jge','jl','jle',
              'js','jns','jo','jno','jp','jnp','jcxz','jecxz'}

# CRT functions we replace with hand-written host shims (src/runtime/shims_impl.c)
# instead of lifting. Their gnarly state-machine internals (e.g. _output's format
# parser) are well-understood library code -- shimming to the host CRT is more
# robust than debugging the lift. run_lift emits an extern decl; the body is
# hand-written and the dispatch table still points at it.
# HOST_SHIM: VAs whose bodies are NOT lifted -- the dispatch points at a hand-written
# body in shims_impl.c instead. EMPTY for the Hellbender bring-up: the addresses below
# are Fury3-specific (MSVC link 2.55 layout) and do not apply to Hellbender (link 3.10,
# different VAs). Re-populate with Hellbender's own CRT/intrinsic/asset VAs as bring-up
# discovers them (the Fury3 set -- sprintf/printf/stdio family/malloc/free/calloc/realloc,
# the FDIV test, __CIasin/acos/atan2, the cheat reader -- is the template to rediscover).
HOST_SHIM = set()

# FORCE_RECOVER: entries that overlap an existing body but are reached as their own
# dispatchable tail-call target. EMPTY for Hellbender (Fury3-specific VA). Re-add as needed.
FORCE_RECOVER = set()
FPU_CMP = {'EQ':'==','NE':'!=','B':'<','BE':'<=','A':'>','AE':'>=',
           'L':'<','LE':'<=','G':'>','GE':'>='}


class LinearInstruction:
    __slots__ = ['address','size','mnemonic','op_str','bytes','operands',
                 'is_call','is_ret','is_cond_jump','is_uncond_jump','is_jump']
    def __init__(self, insn):
        self.address=insn.address; self.size=insn.size
        self.mnemonic=insn.mnemonic; self.op_str=insn.op_str
        self.bytes=bytes(insn.bytes)
        self.operands=list(insn.operands) if insn.operands else []
        self.is_call=insn.mnemonic=='call'
        self.is_ret=insn.mnemonic in ('ret','retn','retf')
        self.is_cond_jump=insn.mnemonic in COND_JUMPS
        self.is_uncond_jump=insn.mnemonic=='jmp'
        self.is_jump=self.is_cond_jump or self.is_uncond_jump
    @property
    def end_address(self): return self.address+self.size
    def get_branch_target(self):
        if self.operands and self.operands[0].type==X86_OP_IMM:
            return self.operands[0].imm & 0xFFFFFFFF
        return None


def linear_disassemble_function(md, code_data, code_start, func_start, func_end):
    offset=func_start-code_start; size=func_end-func_start
    if offset<0 or offset+size>len(code_data): return [], set()
    raw=code_data[offset:offset+size]; instructions=[]; leaders={func_start}
    for insn in md.disasm(raw, func_start):
        li=LinearInstruction(insn); instructions.append(li)
        if li.is_jump:
            t=li.get_branch_target()
            if t and func_start<=t<func_end: leaders.add(t)
            leaders.add(li.end_address)
        if li.mnemonic=='int3': break
    return instructions, leaders


def lift_function_linear(lifter, name, instructions, leaders):
    va = name[4:] if name.startswith('sub_') else '0'
    # _st/_fp_top/_fpu_cw are GLOBAL (x87 stack is shared across calls) -- see
    # recomp_types.h. Only per-function scratch is declared here.
    lines=[f'void {name}(void) {{',
           '    uint32_t ebp = 0;',
           '    int _fpu_cmp = 0;','    uint32_t _cf = 0;','    int _df = 1;',
           '    uint32_t _flag_a = 0, _flag_b = 0;',
           '    uint32_t _itail_tgt = 0;',
           f'    RECOMP_ENTER(0x{va}u);','']
    lifter._flag_state=None
    # If the function has an indirect jump (jump table / switch), a computed
    # target can land on ANY instruction in it -- so label every instruction so
    # the local dispatch below can reach it. Otherwise just label block leaders.
    has_indirect = any(i.is_uncond_jump and i.get_branch_target() is None
                       for i in instructions)
    for insn in instructions:
        if has_indirect or insn.address in leaders:
            lines.append(f'L_{insn.address:08X}:')
        for line in lifter.lift_instruction(insn): lines.append(f'    {line}')
    if instructions and not instructions[-1].is_ret:
        lines.append('    return; /* end of function */')

    # Intra-function indirect jumps (jump tables / switch statements) lift to
    # RECOMP_ITAIL(<runtime expr>), but the dispatch table only knows function
    # entries -- it can't resolve a label *inside* this function, so the switch
    # breaks. Route indirect ITAILs through a local label dispatch first: a
    # standard-C switch over every label in this function (goto), falling back to
    # the global RECOMP_ITAIL for genuine cross-function tail calls.
    indirect = [i for i,l in enumerate(lines)
                if 'RECOMP_ITAIL(' in l and 'RECOMP_ITAIL(0x' not in l]
    body = '\n'.join(lines)
    defined = sorted(set(re.findall(r'(?m)^\s*(L_[0-9A-Fa-f]{8})\s*:', body)))
    if indirect and defined:
        for i in indirect:
            m = re.search(r'RECOMP_ITAIL\((.+?)\);\s*return;', lines[i])
            if m:
                lines[i] = (f'    {{ _itail_tgt = (uint32_t)({m.group(1)}); '
                            f'goto _ljump; }}')
        lines.append('  _ljump:')
        lines.append('    switch (_itail_tgt) {')
        for lbl in defined:
            lines.append(f'      case 0x{int(lbl[2:],16):08X}u: goto {lbl};')
        lines.append('      default: RECOMP_ITAIL(_itail_tgt); return;')
        lines.append('    }')

    refed = set(re.findall(r'goto\s+(L_[0-9A-Fa-f]{8})', '\n'.join(lines)))
    for lbl in sorted(refed - set(defined)):
        lines.append(f'    {lbl}: RECOMP_ITAIL(0x{int(lbl[2:],16):08X}u); return;')
    lines.append('}')
    out = '\n'.join(lines)
    out = re.sub(r'CMP_(\w+)\(_fpu_cmp\)',
                 lambda m: f'((_fpu_cmp) {FPU_CMP.get(m.group(1), "==")} 0)', out)
    return out


def write_chunk(out, idx, funcs):
    with open(os.path.join(out, f'recomp_{idx:04d}.c'),'w') as f:
        f.write('/* Fury3 Recompilation - Auto-generated - DO NOT EDIT */\n')
        f.write(f'/* File {idx}: {len(funcs)} functions */\n\n')
        f.write('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n')
        f.write('#include "recomp_funcs.h"\n#include <math.h>\n#include <string.h>\n\n')
        for code,_,_ in funcs: f.write(code+'\n\n')


_COND_J = {'je','jne','jz','jnz','ja','jae','jb','jbe','jg','jge','jl','jle','js','jns',
           'jo','jno','jp','jnp','jcxz','jecxz','loop','loope','loopne'}

def _recover_missing_funcs(code_data, cs, ce, ida_fns):
    """Find functions IDA missed because they're reached only via jmp-thunk
    chains / tail calls. Returns a list of (start, end) not already covered.

    Strategy: (1) scan every known function body for direct jmp/call immediates
    that land outside all known functions -- those are missed entries; (2) decode
    each such seed by recursive descent (following its intra jumps and harvesting
    its own external tail-call/thunk targets) to a fixpoint, computing exact
    [start,end) bounds. code_data is indexed by (va - cs)."""
    import bisect
    md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
    fns = sorted(ida_fns)
    starts = [a for a,_ in fns]; entries = {a for a,_ in fns}
    def covered(a):
        i = bisect.bisect_right(starts, a) - 1
        return i >= 0 and fns[i][0] <= a < fns[i][1]
    def imm_of(ins):
        ops = ins.operands
        if ops and ops[0].type == X86_OP_IMM:
            return ops[0].imm & 0xFFFFFFFF
        return None
    def slice_at(va, n=2048):
        o = va - cs
        return code_data[o:o+n] if 0 <= o < len(code_data) else b''

    # Pass 1: seed set = uncovered direct jmp/call targets from known bodies,
    # PLUS code-address immediates (function pointers assigned via `mov [mem], imm`
    # / `push imm` -- e.g. the span-renderer callbacks stored to dword_4EBD28 like
    # sub_406FDA, which IDA missed and which have no direct call). The recursive
    # decode in Pass 2 validates each seed, so a stray data immediate that happens
    # to look like a code address just decodes to dead (never-called) code.
    seeds = set()
    for ea, end in fns:
        for ins in md.disasm(slice_at(ea, end-ea), ea):
            if ins.mnemonic in ('jmp','call'):
                t = imm_of(ins)
                if t is not None and cs <= t < ce and t not in entries and not covered(t):
                    seeds.add(t)
            for op in (ins.operands or []):
                if op.type == X86_OP_IMM:
                    t = op.imm & 0xFFFFFFFF
                    if cs <= t < ce and t not in entries and not covered(t):
                        seeds.add(t)

    # Pass 2: recursively recover each seed (+ targets it reaches) to a fixpoint.
    recovered = {}
    forced = {s for s in FORCE_RECOVER if cs <= s < ce and s not in entries}
    work = list(seeds) + list(forced)
    while work:
        s = work.pop()
        # Forced entries are allowed to overlap an existing body (covered()); normal
        # seeds are not.
        if s in recovered or (covered(s) and s not in forced):
            continue
        visited = set(); blocks = [s]; maxend = s
        while blocks:
            va = blocks.pop()
            if va in visited:
                continue
            for ins in md.disasm(slice_at(va), va):
                if ins.address in visited:
                    break
                visited.add(ins.address); maxend = max(maxend, ins.address + ins.size)
                m = ins.mnemonic; t = imm_of(ins)
                if m == 'call':
                    if t is not None and cs <= t < ce and t not in entries and not covered(t):
                        work.append(t)
                    continue
                if m == 'jmp':
                    if t is not None:
                        if s <= t < s + 0x4000 and not covered(t):
                            blocks.append(t)                 # intra-function jump
                        elif cs <= t < ce and t not in entries and not covered(t):
                            work.append(t)                    # tail call / thunk target
                    break
                if m in _COND_J:
                    if t is not None and s <= t < s + 0x4000 and not covered(t):
                        blocks.append(t)
                    continue
                if m in ('ret','retn','retf','iret','int3'):
                    break
        recovered[s] = maxend
    return sorted(recovered.items())


def main():
    exe = sys.argv[1] if len(sys.argv)>1 else os.path.join(_here,'analysis','HELLBEND.EXE')
    out = sys.argv[2] if len(sys.argv)>2 else os.path.join(_here,'src','recomp','gen')
    split = int(sys.argv[3]) if len(sys.argv)>3 else 400
    os.makedirs(out, exist_ok=True)

    print('=== Fury3 Static Recompilation (Phase 3 lift) ===', flush=True)
    info=analyze_pe(exe); iat=build_iat_map(info)
    print(f'[*] base=0x{info.image_base:08X} code=0x{info.code_start:08X}-0x{info.code_end:08X} IAT={len(iat)}')
    pe_data=open(exe,'rb').read()
    text=[s for s in info.sections if s.name=='.text'][0]
    code_data=pe_data[text.raw_offset: text.raw_offset+min(text.virtual_size,text.raw_size)]
    cs, ce = info.code_start, info.code_end

    # Seed entries + exact end bounds from IDA's catalog.
    cat=json.load(open(os.path.join(_here,'analysis','ida_funcs.json'),encoding='utf-8'))
    fns=[(f['ea'], f['end']) for f in cat['functions'] if cs <= f['ea'] < ce]
    fns.sort()
    print(f'[*] seeded {len(fns)} functions from IDA catalog (with exact bounds)')

    # IDA's analysis misses functions reached *only* via jmp-thunk chains / tail
    # calls (no direct CALL, no standard prologue) -- e.g. a thunk `jmp X` whose
    # target X starts with `cmp`. At runtime these surface as `ITAIL: unresolved
    # VA ...` and stall the game. Recover them here: scan every IDA function body
    # for direct jmp/call targets that land outside all known functions, then
    # recursively decode each such target (following its own tail calls/thunks)
    # to a fixpoint, computing exact [start,end) bounds. Union the result in.
    missing=_recover_missing_funcs(code_data, cs, ce, fns)
    if missing:
        fns.extend(missing); fns.sort()
        print(f'[*] recovered {len(missing)} functions IDA missed (thunk/tail-call targets): '
              + ', '.join(f'0x{a:08X}' for a,_ in missing[:8]) + (' ...' if len(missing)>8 else ''))

    md=Cs(CS_ARCH_X86, CS_MODE_32); md.detail=True
    lifter=Lifter(iat_map=iat)
    all_entries=[]; errors=0; idx=0; chunk=[]; t0=time.time()
    for addr, end in fns:
        end = min(end, ce)
        if end-addr < 1: continue
        name=f'sub_{addr:08X}'
        if addr in HOST_SHIM:
            # body provided by hand in shims_impl.c; just declare + register it
            chunk.append((f'/* {name}: host-shimmed in shims_impl.c */\n'
                          f'extern void {name}(void);\n', addr, name))
            all_entries.append((addr,name)); continue
        try:
            insns,leaders=linear_disassemble_function(md, code_data, cs, addr, end)
            if not insns:
                chunk.append((f'void {name}(void) {{ }} /* empty */\n',addr,name))
                all_entries.append((addr,name)); continue
            code=lift_function_linear(lifter, name, insns, leaders)
            chunk.append((code,addr,name)); all_entries.append((addr,name))
        except Exception as e:
            chunk.append((f'/* ERROR {name}: {e} */\nvoid {name}(void) {{}}\n',addr,name))
            all_entries.append((addr,name)); errors+=1
        if len(chunk)>=split:
            write_chunk(out, idx, chunk); idx+=1; chunk=[]
            print(f'[*]   {len(all_entries)}/{len(fns)} ({errors} err)', flush=True)
    if chunk: write_chunk(out, idx, chunk); idx+=1

    with open(os.path.join(out,'recomp_funcs.h'),'w') as f:
        f.write('/* Fury3 Recompilation - Auto-generated */\n#pragma once\n#include <stdint.h>\n\n')
        for a,n in all_entries: f.write(f'void {n}(void);  /* 0x{a:08X} */\n')
    with open(os.path.join(out,'recomp_dispatch.c'),'w') as f:
        f.write('/* Fury3 Recompilation - Auto-generated */\n#include "recomp_types.h"\n#include "recomp_funcs.h"\n\n')
        f.write('const recomp_dispatch_entry_t recomp_dispatch_table[] = {\n')
        for a,n in sorted(all_entries): f.write(f'    {{ 0x{a:08X}u, {n} }},\n')
        f.write('};\n\n'+f'const uint32_t recomp_dispatch_count = {len(all_entries)};\n')

    total_lines=total_bytes=0
    for fn in os.listdir(out):
        fp=os.path.join(out,fn)
        if os.path.isfile(fp):
            total_bytes+=os.path.getsize(fp)
            total_lines+=sum(1 for _ in open(fp, encoding='utf-8', errors='replace'))
    json.dump({'functions':len(all_entries),'errors':errors,'files':idx,
               'lines':total_lines,'bytes':total_bytes},
              open(os.path.join(_here,'analysis','phase3_codegen.json'),'w'), indent=1)
    print('='*56)
    print(f'  functions: {len(all_entries):,}  errors: {errors}  files: {idx}')
    print(f'  lines of C: {total_lines:,}  size: {total_bytes/1048576:.1f} MB  time: {time.time()-t0:.1f}s')
    print('='*56)


if __name__=='__main__':
    main()
