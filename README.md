# Hellbender — Static Recompilation

**A from-the-binary static recompilation of _Hellbender_ (1996) — Microsoft &
Terminal Reality's sequel to [Fury³](https://github.com/sp00nznet/fury3) — into native C.**

Hellbender runs the **same voxel-landscape engine** as Fury³ and Terminal Velocity, so
this project reuses the [Fury³ recompiler / pcrecomp toolbox](https://github.com/sp00nznet)
wholesale. It was picked as the next target precisely to prove the toolchain generalises —
and so far it does: the Fury³ lifter recompiled all 5,262 of Hellbender's functions with
**zero changes**.

> Part of the [pcrecomp](https://github.com/sp00nznet) family of PC static-recompilation
> projects (civ · dinopark · elfish · fury3 · gta · recoil · crimsonskies · black & white · …).

---

## Status

🟡 **Early bring-up — it lifts clean and compiles.** The whole binary is recompiled to C
and the import bridge layer is generated; the runtime port + link is next.

| Phase | What | State |
|------:|------|:-----:|
| 0 | Reconnaissance — PE analysis, import map, engine ID | ✅ done |
| 1 | Disassembly — IDA headless function recovery (5,221 funcs) | ✅ done |
| 3 | Lift to C — 5,262 funcs → 513,668 lines, **0 errors**, compiles to objects | ✅ done |
| 4 | Shim layer — 507 import bridges generated; runtime port | 🟡 bridges done, runtime next |
| 5 | Build & link — single exe | ⬜ next |
| 6+ | Bring-up — CRT → WinMain → window → assets → render → flight | ⬜ |

The blow-by-blow Fury³ playbook (the nine lifter fixes, CRT shims, host heap, POD asset
system, WndProc bridge, GDI present path) all lives upstream in pcrecomp and Fury³'s
[`docs/PROGRESS.md`](https://github.com/sp00nznet/fury3/blob/main/docs/PROGRESS.md) — most
of it carries over directly. See [docs/PHASE0.md](docs/PHASE0.md) for the recon writeup.

---

## Why Hellbender

It's the cheapest, highest-confidence reuse of the Fury³ toolchain. Binary evidence
(identical `"Unable to open sky.act"` error string, shared `.vox`/`.raw` asset names like
`blast%d.raw` and `bigex%d.raw`) confirms it's the same Terminal Reality voxel engine —
just one generation evolved and rebuilt with a newer compiler.

| | Hellbender | Fury³ (for comparison) |
|---|---|---|
| Format | PE32, i386, Windows GUI | same |
| Size | 1.68 MB (+ 60 KB overlay) | 645 KB |
| Image base / entry | 0x00400000 / 0x004ADD30 | 0x00400000 |
| Linker | MSVC 3.10 (1996) | MSVC 2.55 (1995) |
| Imports | **507 across 11 DLLs** | 160 / 5 |
| Functions (IDA) | 5,221 | 1,932 |

The bigger OS surface is mostly stub-able: Hellbender probes **DirectDraw / WinG /
DISPDIB** for presentation and falls back to plain **GDI/StretchBlt** — the exact path
Fury³ already drives — so the alternate backends, plus **Smacker** video (smackw32),
**registry** config (ADVAPI32), and the **comctl32** property-sheet settings dialog, are
all stubbed. The hot path (software voxel renderer → 8-bit DIB → StretchBlt, the USER
message loop, KERNEL file/mem, WINMM audio) is the same shape as Fury³.

---

## Building

You provide your own legally-obtained `HELLBEND.EXE` (this repo ships **no** game code or
assets). Generate the C, then build:

```bash
py -3.11 run_lift.py          # IDA bounds → src/recomp/gen/recomp_*.c
py -3.11 gen_imports.py       # → src/runtime/imports_gen.c  (507 bridges)
# (runtime port + CMake build: in progress)
```

---

## License

Tooling and original code in this repo: MIT. _Hellbender_ and all its assets are property
of their respective owners; none are included here. This is a preservation and
interoperability project.

---

*Part of [pcrecomp](https://github.com/sp00nznet) — "everything old is new again."*
