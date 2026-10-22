# Draw code (r11): the chunked mesh renderer

The draw routine scheduled as "~0x8017C354, flag dispatch table 0x801A4374" is a function of the
**stage-specific part** of the stage images, not of the shared engine. It is present in 109 of the 134 stage images
at stage-dependent addresses: SC01_000 (where it was first seen) 0x8017BEBC with its jump table at 0x801A4374;
SC03_001 (the split village image, `src/stage/sc03_001.c`) **0x8017C710, `DrawChunkedMesh`**, jump table
`jtbl_801ECDA8`. 0xEE0 bytes, 952 instructions; splat marks it "handwritten" only because of the GTE instructions:
it is ordinary GCC output (0x210 frame, all saved registers) with PsyQ inline GTE macros (`include/gte.h`).

## What it does (from the m2c draft, `build/work/draw_m2c.c`)
`DrawChunkedMesh(obj)`:
1. `z0 = ReadGeomScreen() + obj->0x64`; `GsGetLs(obj + 0x10, &ls); GsSetLsMatrix(&ls)` (obj+0x10 is a GsCOORDINATE2).
2. Packet buffer from `D_800A5E60`; ordering table `D_800A6610 + frame * 0x4000` (4096 entries per frame, `frame` = Work+0xA3D2).
3. For each of `obj->0x8->0x8` chunks in the list at `obj->0xC` (12 bytes each): build the 8 corners of the chunk's
   bounding box from the packed min/max halfwords, transform them (RTPT, RTPS, RTPT, RTPS) and read SZ/flags to cull
   the whole chunk off screen.
4. For a visible chunk, walk its polygons: RTPT the three (or four) vertices, NCLIP for back-face culling, AVSZ3/AVSZ4
   for the OT depth, and switch on the polygon type (8 cases in pairs):

| cases | packet | size | GPU primitive |
|---|---|---|---|
| 0, 1 | len 5 | 0x18 | POLY_F4 (flat quad) |
| 2, 3 | len 9 | 0x28 | POLY_FT4 (textured quad) |
| 4, 5 | len 4 | 0x14 | POLY_F3 (flat triangle) |
| 6, 7 | len 7 | 0x20 | POLY_FT3 (textured triangle) |

   The odd case of each pair is the same primitive with a flag (likely semi-transparency or double-sided).
   Each packet is linked into the OT with the `addPrim` mask pattern.

## Status
**MATCHED and placed (r159, 22 Oct 2026)**: `src/stage/sc03_001.c` holds it in C, 952 / 952, `make check-stage` OK.
The source is r144's `func_sc01_000_8017BEBC` (the 111-copy renderer) with `+ 0x20` instead of `+ 0x200` in the three
odd-type depth adds (r152 found it). Its five clones (SC03_124; SC04_015, SC04_018, SC04_019, SC05_017) belong to the
stage streams. The notes below are the history of the 15 Oct attempt; where they disagree with the placed C, the C wins.

2026-10-15: a full C version, `build/work/dcm.c` (in the hourly backups), compiles to 950-952 instructions against
952, with the same 0x210 frame, the same spill slots (0xE0, 0xE8, 0x1E0) and the same loop and switch structure.
Parked (Fable, 15 Oct evening) at 8 instructions of structure and about 190 of register choice (`variant_search.py --shape` and a sequence
diff count them separately). Not placed in src.

What the source turned out to be (each confirmed by the structure lining up, not yet by a byte match):
* Locals: a 3-word temporary (`gte_stsxy3c` target), `SVECTOR box[8]`, `SVECTOR scr[8]`, the `MATRIX` for
  GsGetLs, then **one struct** holding the GTE-stored values `{ zbox, flag, z, sz0, sz1, sz2, sz3 }`. As separate
  scalars, gcc 2.7.2 assumes a pointer-plus-constant store (`pkt[1] = ...`, which it treats as in a struct) cannot
  alias a plain local, and moves the load of `z` above the packet stores; as struct members it keeps the order, as
  the original does.
* Chunk record 20 bytes `{ x min/max, y min/max, z min/max (halfword pairs), polygon count, polygon list }`;
  polygon record 12 bytes `{ colour word or texture-record pointer, v0 | v1 << 16, v2 | (v3 | type) << 16 }`: the
  type (0-7) is in the low 3 bits of the fourth vertex offset.
* The polygon pointer is read before the count (that puts gcc's second chunk pointer at +12, as in the original).
* Range tests: the first two values compared as `a > b`, the third as `c > hi`, a fourth (quads) low end first;
  the chunk's two halves merged into separate `s32` variables and tested as `(s16)hi < -160 || (s16)lo > 160`.
* Depths: triangles `m = MAX(sz0, sz1); m = MAX(sz2, m); z = m; if (odd type) z += 32;` with
  `MAX(a, b) = a > b ? a : b`; quads `za = sz2, if (za < sz3) za = sz3; zb = sz0, if (zb < sz1) zb = sz1;
  if (zb < za) zb = za; z = zb;`. The flat quad computes the OT address before storing the colour word.
* The textured quad reads the last texture word once and stores its halves to uv2 and uv3.

* The box corners: with a plain array gcc's scheduler regroups the 16 x/y stores by value whatever their source
  order; declared `volatile` (or something with the same effect) they stay per corner as in the original, and the
  three chunk words are then read before any store.

* The triangle depth is an if/else with the sz2 test in both arms:
  `if (sz0 > sz1) { m = sz0; if (m < sz2) m = sz2; } else { m = sz1; if (m < sz2) m = sz2; }` (the duplicated
  load of sz2 is the two arms' own; cross-jumping merges only the tail). `sz0 > sz1`, not `sz1 < sz0`: the
  condition's direction decides which operand's register holds m.
* The box reads reuse two variables: `x = c[0]; y = c[1]; x0 = x; x1 = x >> 16; y0 = y; y1 = y >> 16;
  x = c[2]; y = x >> 16;` and the corners store x0/x1/y0/y1 then x (z low) and y (z high).

Still different (8 instructions): in the box, the original copies both x and y into fresh registers before the
shifts (the shifts read the originals); this build copies x only and shifts y in place. Orders, s16 copies and
load order tried without effect. Then the register choice throughout (~190).

## Notes for asset work (not acted on)
* This is the map / chunked-model renderer: the per-chunk bounding box (packed min/max halfwords, 12-byte chunk
  records at obj+0xC) is what the map exporter's chunk directories are, and the 8-case type switch is the exact set of
  polygon kinds the map packets hold. The flag in the odd cases is worth checking against the map reader's
  semi-transparent handling.
