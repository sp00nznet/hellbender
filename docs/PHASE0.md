# Hellbender — Phase 0: reconnaissance

Hellbender (1996, Terminal Reality / Microsoft) is the sequel to Fury³ and runs the
**same voxel-landscape engine**. This recomp reuses the Fury³ pipeline
([pcrecomp toolbox](https://github.com/sp00nznet)) wholesale — chosen precisely because
the toolchain should port with minimal changes.

## Binary profile (`analysis/HELLBEND.EXE`)

| | Hellbender | (Fury³ for comparison) |
|---|---|---|
| Format | PE32, i386, Windows GUI | same |
| Size | 1,685,504 bytes (+ 60 KB overlay) | 645,120 |
| Image base | 0x00400000 | same |
| Entry point | 0x004ADD30 | — |
| Linker | **MSVC 3.10** | MSVC 2.55 |
| Built | 1996-09-04 | 1995-08-14 |
| Sections | `.text .rdata .data .idata .rsrc .reloc` (6) | similar |
| Code range | 0x00401000–0x004EAE69 (958 KB) | 383 KB |
| Imports | **507 across 11 DLLs** | 160 / 5 |
| Functions (IDA) | **5,221** (1,754 lib, 617 thunk) | 1,932 |

## Same engine — confirmed by strings

`sky.act`, `.vox` voxel terrain, `.raw` bitmaps, `.act` palettes, `.pod` archives
("Too many .POD files at once!"), and asset names shared verbatim with Fury³
(`blast%d.raw`, `bigex%d.raw`, `billow%d.raw`, …). Same software voxel rasterizer.

## OS surface — bigger, but mostly stub-able

Fury³ was pure GDI/StretchBlt. Hellbender adds backends and services that we **stub**,
forcing the same GDI/StretchBlt fallback Fury³ uses:

- **DDRAW.dll** (DirectDraw), **WING32.DLL** (WinG), **DISPDIB.DLL** — alternate present
  paths; the engine probes and falls back to GDI. Stub the others.
- **smackw32.dll** — RAD Smacker video (intros). Stub (Fury³'s `.avi` intros were absent too).
- **ADVAPI32.dll** — registry config (`SOFTWARE\Microsoft\Games\Hellbender`) alongside
  `hellbend.ini`.
- **COMCTL32.dll** — property-sheet settings dialog. Stub.
- **SHELL32.dll** — drag/drop + `ShellExecute`. Stub.

The hot path (GDI render → 8-bit DIB → StretchBlt, USER window/message loop, KERNEL
file/mem, WINMM audio, comdlg load/save) is the same shape as Fury³.

## Status after Phase 0/1/3

- **Lift is clean:** `run_lift.py` → 5,262 functions, 513,668 lines of C, **0 errors**;
  the generated TUs compile to objects. The Fury³ lifter handled Hellbender unchanged.
- Next: Phase 4 (import bridge arg-counts + runtime port with the stubs above), then
  Phase 5 (extract `Hellbender.iso` PODs, link, bring-up to flight). See the
  [pcrecomp](https://github.com/sp00nznet) Fury³ project for the bring-up playbook.
