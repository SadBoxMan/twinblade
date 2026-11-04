# Main EXE: naming proposals (r274, research only)

Proposals for the main EXE's (SLUS_007.26, game code 0x80010178-0x8003A443) still-generic functions and globals, from
the matched C in `src/main.c`, `src/code_800123F0.c`, `src/code_8002C410.c` and `src/code_8002C8BC.c`, and from how the
field / debug / title overlays (`src/ovl3*/`), the stage engine (`src/stage/`), the stage code (`src/stg/`) and the
ability packages (`src/abil/`) call them. Nothing here is applied: a later local card applies the names to
`symbol_addrs.txt` and checks that everything still matches. Snapshot: main = a75e323d (4 Nov 2026).

## How to read this
* **Calls** in the evidence column: call sites outside the EXE (overlays, stage engine, stage code, ability packages),
  `extern` lines excluded, then the number of files with at least one. "no callers" means no reference at all in the
  C (the function may still be reached through a table in data, or be dead code).
* **Evidence** names the EXE file and what the body shows, then what the callers pass or test. File short names:
  "c23F0" = src/code_800123F0.c, "c8BC" = src/code_8002C8BC.c, "main" = src/main.c; stage engine files as in r272
  ("e.c" = src/stage/engine.c, "eC98C" = engine_8013C98C.c, "e58E0" = engine_801458E0.c, "e5F4" = engine_8012F5F4.c);
  `stg/scNN_NNN.c` for the stage code, `ovl36` etc. for the overlays.
* **Confidence.** H: the body says it and the callers agree. M: the behaviour is clear but the name picks one reading
  (or the caller context is thin). L: a guess from a few call sites; check before applying.
* **Style** follows the names already in `symbol_addrs.txt`: CamelCase, verb first, no module prefix (LoadFileStep,
  StreamStep, SetMode, NextGameState, GetPadHeld, StartRumbleScript, AllocPrim, InitSound), `g_` for globals
  (g_PrimNext, g_WorldOtTable, g_FileTable). Families keep one stem (DrawPrimG4 / DrawPrimG4Screen / DrawPrimG4Mtx).
  Names do not reuse PsyQ's (no new `MemCard*`, `Gs*`, `Ss*`, `Spu*`).
* **Work fields.** Work is the 0xA444-byte block at 0x800AF630 (`include/work.h`). Many `D_800Bxxxx` / `D_800AFxxx`
  globals in the C are Work fields reached by address (e.g. D_800B9A02 = Work+0xA3D2 `frame`). They are listed in
  "Found along the way" as fields, not proposed as globals.

## Summary
(Counts at the end of the file, in "Totals".)

## Names that already exist only in a comment
`symbol_addrs.txt` names these in a comment line only ("main program: ..."). They are known, so they are not proposed
again, but they are not applied yet; the local batch can apply them as they are:

| address | current | known name | note |
|---|---|---|---|
| 0x80029178 | func_80029178 | GetFlag | c23F0: bit n of the 64-byte flag array D_800AE648. 662 calls / 88 files. Its setter func_80029124 is proposed below as SetFlag |
| 0x8001D130 | func_8001D130 | PartShow | c23F0: clears bit 24 of a part's draw word (model section) |
| 0x8001D150 | func_8001D150 | PartHide | c23F0: sets bit 24 of a part's draw word (model section) |
| 0x80038698 | func_80038698 | SeqReadHeader | named locally per the r274 brief ("SeqReadHeader is named"), not in this snapshot's symbol files; c8BC OpenSeq calls it before the "MTrk" check (INCLUDE_ASM here) |

## Math, angles and GTE helpers (0x800123F0-0x800140B8)

Angles are 12-bit (0x1000 = a full turn). Matrices are PsyQ MATRIX (`Mtx` in c23F0: 3x3 s16 at 4096 = 1.0, then a
s32 translation). Stage positions are three 16.16 `Fixed` words (`include/game.h`), so a position's integer halves are
the s16 at +2, +6, +0xA; "Pos" in the names below means such a position, "SVec" an s16[3], "Vec" an s32[3].

The easing family: `Ease*(cur, target, div)` returns cur moved by (target - cur) / div, halving div (up to four times)
when the step would round to 0, so it always arrives; `*Frac(cur, target, div, mul)` moves by (target - cur) * mul / div
and at least 1; `Approach*(cur, target, speed)` moves by a fixed speed without overshooting. The `Angle` forms wrap the
difference to -0x800..0x800 and the result to 0..0xFFF. The `*Step` forms return the step instead of the new value; the
`*StepRec` / `*StepImpl` forms are their workers.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800123F0 | func_800123F0 | RotateMatrixZ | m = m * Rz(angle), then NormalizeMatrix | H | c23F0: Rz built from rsin/rcos (c, -s / s, c / 1), multiplied with gte_rtir per column. 34 calls / 16 files (e58E0 builds model matrices with RotateMatrixY then RotateMatrixZ); RotateVectorZ inlines it |
| 0x80012558 | func_80012558 | RotateMatrixY | m = m * Ry(angle), then NormalizeMatrix | H | c23F0: Ry (c, 0, s / 0, 1, 0 / -s, 0, c). 34 calls / 15 files |
| 0x800126C4 | func_800126C4 | RotateMatrixX | m = m * Rx(angle), then NormalizeMatrix | H | c23F0: Rx (1, 0, 0 / 0, c, -s / 0, s, c). 35 calls / 15 files |
| 0x8001282C | func_8001282C | NormalizeMatrix | normalise the three columns of a rotation matrix (not re-orthogonalised) | M | c23F0: GetMatrixColumn0/1/2, NormalizeSVector on each, SetMatrixColumns. Called after every RotateMatrix* to stop drift |
| 0x800128B4 | func_800128B4 | NormalizeSVector | an s16[3] scaled to length 4096 in place | H | c23F0: SVecToVec then VectorNormalSScaled back into it |
| 0x800128EC | func_800128EC | VectorNormalSScaled | VectorNormalS of a VECTOR first shifted down to 18 significant bits | H | c23F0: Lzc of the three parts, shift by 0x12 - min, then VectorNormalS (PsyQ needs small inputs) |
| 0x800129CC | func_800129CC | VectorToAngles | x and z rotation angles (y = 0) that point along a direction vector | M | c23F0: out[0] = ratan2(-y, z) - 0x400, out[2] = ratan2(y, x) + 0x400. 1 call: e58E0 |
| 0x80012A60 | func_80012A60 | AngleDist | absolute angle between a and b, 0..0x800 | H | c23F0: (a - b) & 0xFFF folded at 0x800. 56 calls / 24 files: `d = func_80012A60(a, 0x800)` against the four headings |
| 0x80012AB0 | func_80012AB0 | AngleSub | (a - b) & 0xFFF | H | c23F0; only AngleDist calls it |
| 0x80012ABC | func_80012ABC | EaseAngle | an angle eased toward a target by 1/div, wrapped | H | c23F0: (a + EaseAngleStep(a, b, c)) & 0xFFF. 437 calls / 143 files: `rot.x = func_80012ABC(rot.x, target.x, 4)` on the model rotation (+0x18..+0x1C toward +0x20..+0x24) |
| 0x80012B04 | func_80012B04 | EaseAngleStep | the step of EaseAngle (0 when equal) | H | c23F0. 29 calls / 20 files: `d = func_80012B04(model->rot.y, 0x800, 4)` |
| 0x80012B58 | func_80012B58 | EaseAngleStepRec | EaseAngleStep's worker: wrap the difference, divide, halve div when the step is 0 | H | c23F0: recursive, the counter at *p limits it to four halvings |
| 0x80012C6C | func_80012C6C | EaseValue | a value eased toward a target by 1/div | H | c23F0: a + EaseValueStep(a, b, c). 767 calls / 136 files, the commonest EXE call in stage code: `x = func_80012C6C(x, target, 0x10)` on camera / colour / scale values |
| 0x80012CB8 | func_80012CB8 | EaseValueStep | the step of EaseValue | H | c23F0. 9 calls / 3 files: `x += func_80012CB8(y, target, 0x80)` |
| 0x80012D0C | func_80012D0C | EaseValueStepRec | EaseValueStep's worker (no wrap) | H | c23F0: as EaseAngleStepRec without the wrap |
| 0x80012DBC | func_80012DBC | EaseAngleFrac | an angle moved by (target - a) * mul / div, at least 1, wrapped | H | c23F0: (a + EaseAngleFracStep(...)) & 0xFFF. 35 calls / 18 files: `(rot, target, D_..._8019F062, 1)` |
| 0x80012E0C | func_80012E0C | EaseAngleFracStep | its step | H | c23F0 |
| 0x80012E6C | func_80012E6C | EaseAngleFracStepImpl | its worker: wrapped difference * mul / div, never 0 | H | c23F0 |
| 0x80012F74 | func_80012F74 | EaseValueFrac | a value moved by (target - a) * mul / div, at least 1 | H | c23F0. 109 calls / 32 files: `c->r = func_80012F74(c->r, 0, 0xA, 1)` (colour fades) |
| 0x80012FC8 | func_80012FC8 | EaseValueFracStep | its step | H | c23F0. 5 calls / 3 files |
| 0x80013028 | func_80013028 | EaseValueFracStepImpl | its worker | H | c23F0 |
| 0x800130D0 | func_800130D0 | ApproachValue | a value moved toward a target by a fixed speed, clamped at the target | H | c23F0: a + ApproachStep(a, b, c). 22 calls / 7 files: `(o->x8, o->xC, *speed)` |
| 0x8001311C | func_8001311C | ApproachStep | its step, as s16 | H | c23F0. 3 calls / 2 files |
| 0x80013154 | func_80013154 | ApproachStepImpl | the clamped step: +-speed, or the rest when closer than speed | H | c23F0 |
| 0x80013200 | func_80013200 | VecDist | distance between two VECTORs (s32) | H | c23F0: SquareRoot0(VecDistSq). 5 calls / 4 files: `ratan2(dy, func_80013200(&a, &b))` |
| 0x80013228 | func_80013228 | VecDistSq | squared distance between two VECTORs | H | c23F0: Square0 of the difference, summed |
| 0x80013294 | func_80013294 | SVecDist | distance between two s16[3] | H | c23F0. 28 calls / 17 files |
| 0x800132BC | func_800132BC | SVecDistSq | squared distance between two s16[3] | H | c23F0. 39 calls / 26 files: `if (func_800132BC(&a, &b) < 0x41)` |
| 0x80013328 | func_80013328 | PosDist | distance between two 16.16 positions (their integer halves) | H | c23F0: reads a[1], a[3], a[5]. 81 calls / 49 files: `d = func_80013328(a + 4, &D_80126B5C)` (an actor's position to Musashi's) |
| 0x80013350 | func_80013350 | PosDistSq | squared distance between two 16.16 positions | H | c23F0. 39 calls / 17 files: `if (func_80013350(o + 4, t + 4) < 0x900)` |
| 0x800133BC | func_800133BC | SVecPosDist | distance from an s16[3] to a 16.16 position | H | c23F0: a[0..2] against b[1], b[3], b[5]. 2 calls / 3 files |
| 0x800133E4 | func_800133E4 | SVecPosDistSq | squared distance, s16[3] to a 16.16 position | H | c23F0. 6 calls / 6 files |
| 0x80013450 | func_80013450 | PosSVecDist | distance from a 16.16 position to an s16[3] | H | c23F0. 10 calls / 9 files: `func_80013450(o + 4, &v) < 0x10` |
| 0x80013478 | func_80013478 | PosSVecDistSq | squared distance, 16.16 position to s16[3] (GTE sqr0) | H | c23F0. 34 calls / 22 files; e.c `func_80013478(m->pos, D_80126B58.focus) >= D_801274E0` (r272 IsActorFar) |
| 0x800134FC | func_800134FC | RotateVectorX | rotate a VECTOR about X by an angle | H | c23F0: identity, RotateMatrixX, ApplyMatrixLV. 7 calls / 4 files |
| 0x80013694 | func_80013694 | RotateSVectorX | rotate an SVECTOR about X | H | c23F0: as above with ApplyMatrixSV. 1 call |
| 0x8001382C | func_8001382C | RotateVectorY | rotate a VECTOR about Y | H | c23F0. 32 calls / 17 files: `func_8001382C(model->rot.y, &in, &out)` |
| 0x800139C8 | func_800139C8 | RotateSVectorY | rotate an SVECTOR about Y | H | c23F0. 54 calls / 35 files: `func_800139C8(p->rotY, &v, &v)` |
| 0x80013B64 | func_80013B64 | RotateVectorZ | rotate a VECTOR about Z | H | c23F0. 1 call |
| 0x80013CFC | func_80013CFC | RotateSVectorZ | rotate an SVECTOR about Z | H | c23F0. 3 calls / 2 files |
| 0x80013E94 | func_80013E94 | PackAngles10 | three angles packed 10:10:10 into one word (bits 3-12 of each) | M | c23F0: (a << 19) >> 22 per part. 15 calls / 9 files; e58E0 packs D_80128120[i] and passes the word to the effect spawner func_80146A6C |
| 0x80013ED0 | func_80013ED0 | SetMatrixColumns | write three s16[3] as the columns of a matrix | H | c23F0: m[0], m[3], m[6] from x; m[1].. from y; m[2].. from z |
| 0x80013F3C | func_80013F3C | SetIdentityRot | the 3x3 part of a matrix to identity (translation kept) | H | c23F0. 83 calls / 51 files: `func_80013F3C(&m)` before RotateMatrix* / GsGetLs work |
| 0x80013F68 | func_80013F68 | SetRotYMinus90 | the 3x3 part to (0, 0, -1 / 0, 1, 0 / 1, 0, 0) | M | c23F0. no callers |
| 0x80013F98 | func_80013F98 | GetMatrixColumn0 | column 0 of a matrix into an s16[3] | H | c23F0: m+0, +6, +0xC |
| 0x80013FBC | func_80013FBC | GetMatrixColumn1 | column 1 | H | c23F0: m+2, +8, +0xE |
| 0x80013FE0 | func_80013FE0 | GetMatrixColumn2 | column 2 | H | c23F0: m[2], m[5], m[8] |
| 0x80014004 | func_80014004 | SetMatrixColumn0 | an s16[3] into column 0 | H | c23F0. no callers |
| 0x80014028 | func_80014028 | SetMatrixColumn1 | an s16[3] into column 1 | H | c23F0. no callers |
| 0x8001404C | func_8001404C | SetMatrixColumn2 | an s16[3] into column 2 | H | c23F0. no callers |
| 0x80014070 | func_80014070 | SVecToVec | s16[3] widened to s32[3] | H | c23F0; NormalizeSVector uses it. Duplicate: func_80015A2C |
| 0x80014094 | func_80014094 | VecToSVec | s32[3] narrowed to s16[3] | H | c23F0. no callers. Duplicate: func_80015A50 |
| 0x800140B8 | func_800140B8 | ApplyMatrixSVToFixed | rotate an SVECTOR by a matrix into 16.16 words (result << 16) | M | c23F0: gte rtv0, stlvnl, three shifts. no callers |
| 0x80015AD0 | func_80015AD0 | ATan2Div | angle of (x, y) from catan(x * 4096 / y) with the half-turn fix for y < 0 | M | c23F0: catan, +-0x800. 4 calls / 2 files |
| 0x80017D98 | func_80017D98 | SetIdentityRotAlt | the same as SetIdentityRot (u8 * form) | H | c23F0: byte-identical stores. 12 calls / 9 files |
| 0x80017DC4 | func_80017DC4 | SetScaleMatrix | a diagonal matrix from three scales | H | c23F0: m[0] = a[0], m[4] = a[1], m[8] = a[2], the rest 0. 99 calls / 67 files: before RotateMatrix / MulMatrix on model scale |
| 0x80017DF8 | func_80017DF8 | RotateMatrixBy | m = RotMatrix(angles) * m | H | c23F0: RotMatrix into a temporary, MulMatrix2. 8 calls / 6 files |
| 0x80017E30 | func_80017E30 | RotateMatrixByZYX | m = RotMatrixZYX(angles) * m | H | c23F0. 10 calls / 7 files |
| 0x80017E68 | func_80017E68 | SetMatrixTrans | a matrix's translation from an s16[3] | H | c23F0: writes +0x14, +0x18, +0x1C. 131 calls / 64 files |
| 0x80017E8C | func_80017E8C | SetGteLocalMatrix | load the GTE with world-screen x m (CompMatrix with Work.wsm) | H | c23F0: CompMatrix(&D_800AF648 = Work+0x18, m), SetRotMatrix, SetTransMatrix. 8 calls / 7 files; every DrawPrim* with a matrix calls it |
| 0x80029CD4 | func_80029CD4 | RandRange | rand() % n, 0 when n is 0 | H | c23F0. 12 internal calls (stat formulas) |

## Vector and position copies

Two families of three-part copies; several are byte-identical twins.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80015954 | func_80015954 | SVecToPos | an s16[3] into a 16.16 position's integer halves | H | c23F0: b[1], b[3], b[5] = a[0..2]. 72 calls / 39 files |
| 0x80015978 | func_80015978 | PosToSVec | a 16.16 position's integer halves into an s16[3] | H | c23F0: a+2, +6, +0xA. 264 calls / 88 files: `func_80015978(a + 4, &v)` before distance / effect calls |
| 0x8001599C | func_8001599C | CopyVec | copy three s32 | H | c23F0. 2 calls / 2 files. Twin: func_800159C0 |
| 0x800159C0 | func_800159C0 | CopyVecAlt | the same (u8 * form) | H | c23F0. no callers |
| 0x800159E4 | func_800159E4 | CopyPosInt | copy a position's integer halves to another position | H | c23F0: b[1], b[3], b[5] = a[1], a[3], a[5]. 16 calls / 10 files |
| 0x80015A08 | func_80015A08 | CopyVecLow16 | the low halves of three s32 to another s32[3] | M | c23F0: s16 stores at +0, +4, +8. no callers |
| 0x80015A2C | func_80015A2C | SVecToVecAlt | s16[3] to s32[3] | H | c23F0; same body as SVecToVec. 1 call |
| 0x80015A50 | func_80015A50 | VecToSVecAlt | s32[3] to s16[3] | H | c23F0; same body as VecToSVec. no callers |
| 0x80014564 | func_80014564 | ZeroRect | zero 16 bytes (libc memset) | L | c23F0: memset(a, 0, 0x10). no callers; "16 bytes" fits a RECT pair or an SVECTOR pair |
| 0x800166E8 | func_800166E8 | ZeroBytes | zero n bytes one at a time | H | c23F0. no callers |
| 0x80016714 | func_80016714 | ZeroFill | zero n bytes, word stores between unaligned head and tail | H | c23F0 (its extern already says "zero-fills size bytes"). 273 calls / 86 files plus 22 in the EXE (ResetSystems clears Work with it) |

## Screen primitives, fades and the image queue (0x80015AD0-0x80018450)

Two ordering tables are drawn each frame: the world OT (GsOT headers D_800A6518[2], 0x14 bytes each, `.org` at
D_800A651C, 4096 entries in g_WorldOtTable) and a small front OT (D_800AE7B8[2] / D_800AE7BC). Screen coordinates are
centred (-160..160, -120..120); the screen size is D_800AF7BC / D_800AF7BE (SetScreenMode writes them).

The **DrawPrim** family takes a shape record (vertices as s16 x, y, z, pad at +0, +8, +0x10, +0x18, then colours, UVs,
a flags word and a CLUT byte) and an optional matrix: with a matrix the vertices are transformed (SetGteLocalMatrix,
RotTransPers3/4 or inline RTPT) and the OT depth is the GTE's; without one ("Screen") they are screen x, y with the
depth in the first vertex's z. The flags word: bit 30 semi-transparent, bits 28-29 the blend mode, bits 24-25 the
texture depth. Each core function has thin wrappers; the wrapper names say which arguments they fix.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80015B6C | func_80015B6C | DrawGradientRect | a vertical-gradient POLY_G4 (two colours) at the back of the world OT, with its draw-mode packets | H | c23F0: code 0x38, top two vertices colour 0, bottom two colour 1, OT entry 0xFFF. 4 calls / 1 file (ovl36 sky bands: `(-0xA0, y, 0x140, h, colours...)`) |
| 0x80015D4C | func_80015D4C | DrawRect | a flat POLY_F4 rectangle at OT depth z, semi-transparent with blend mode m when m < 4 | H | c23F0: code 0x28 / 0x2A, then AddDrawModeAbr. 8 calls / 4 files: `(-0xA0, -0x78, 0x140, 0xF0, c, c, c, 0x20, 2)` |
| 0x80015F04 | func_80015F04 | DrawRectOutline | a rectangle outline of four LINE_F2 | H | c23F0: code 0x40 / 0x42, four corners. 2 calls / 1 file (menu frames, with DrawRect) |
| 0x80016110 | func_80016110 | DrawScreenHalfDark | a full-screen black blend-mode-0 quad at OT 0 | M | c23F0. no callers |
| 0x80016224 | func_80016224 | DrawFadeBlack | a full-screen grey quad in subtract mode (abr 2): colour 0xFF is black, 0 no change; z 0 puts it in the front OT | H | c23F0: code 0x2A, abr 2. 19 calls / 8 files; StartFade / FadeStep draw with it |
| 0x80016450 | func_80016450 | DrawFadeWhite | the same in add mode (abr 1): 0xFF is white | H | c23F0: abr 1. 30 calls / 14 files: `func_80016450(0xFF, 0)` (flashes) |
| 0x80016638 | func_80016638 | AddDrawModeAbr | link a draw-mode packet selecting blend mode abr at OT depth z | H | c23F0: an 8-byte packet 0xE1000000 \| abr << 5. 35 calls / 18 files: `func_80016638(&D_800A6518[frame], 0x10, 1)` |
| 0x800167B8 | func_800167B8 | StartFade | start a fade to / from black: kind < 4 starts black (fade in), >= 4 starts clear (fade out) | H | c23F0: level (Work+0x19E, D_800AF7CE) = 0, DrawFadeBlack(kind < 4 ? 0xFF : 0). 222 calls / 147 files (every stage: `func_800167B8(0)` on entry, `(4)` before leaving) |
| 0x800167F0 | func_800167F0 | FadeStep | advance the fade by speed D_80062BA0[kind & 3] (index 0: by Work.vsyncMode) and draw it; 1 when finished | H | c23F0. 197 calls / 147 files: `return (func_800167F0(0) & 0xFFFF) != 0;` |
| 0x800168B4 | func_800168B4 | ResetFade | fade level = 0 | H | c23F0. no callers |
| 0x800168C4 | func_800168C4 | FadeTimerStep | advance the fade level without drawing; 1 when it is full and Work.dispIdx is set | M | c23F0. no callers |
| 0x80016940 | func_80016940 | StartFadeWhite | StartFade toward white (DrawFadeWhite) | H | c23F0. 5 calls / 5 files |
| 0x80016978 | func_80016978 | FadeWhiteStep | FadeStep toward white | H | c23F0. 7 calls / 5 files: `if (func_80016978(4) & 0xFFFF)` |
| 0x80016A7C | func_80016A7C | DrawPrimLineG2 | a gouraud line from a shape record, optional matrix | H | c23F0: SetLineG2, RotTransPers3, AddPrimFlat |
| 0x80016A3C | func_80016A3C | DrawPrimLineG2Screen | DrawPrimLineG2(a, 0) | H | c23F0. 1 call |
| 0x80016A5C | func_80016A5C | DrawPrimLineG2Mtx | DrawPrimLineG2(a, m) (declared `(void)`, passes its registers on) | H | c23F0. 41 calls / 39 files: `func_80016A5C(&line, &m)` |
| 0x80016B60 | func_80016B60 | DrawPrimLineG3Mtx | a three-point gouraud line, transformed | H | c23F0: SetLineG3, RotTransPers3. no callers |
| 0x80016C28 | func_80016C28 | DrawPrimLineG4Mtx | a four-point gouraud line, transformed | H | c23F0: SetLineG4, RTPT + RTPS. no callers |
| 0x80016D78 | func_80016D78 | DrawPrimFT3Mtx | a textured triangle, transformed | H | c23F0: SetPolyFT3, GetTPage / GetClut from the record. no callers |
| 0x80016F18 | func_80016F18 | DrawPrimFT4 | a textured quad from a shape record, optional matrix; direct != 0 uses a 15-bit texture page | H | c23F0: SetPolyFT4, GetTPage(direct ? 2 : 0, ...) |
| 0x80016EB0 | func_80016EB0 | DrawPrimFT4Screen16 | DrawPrimFT4(a, 0, 1) | H | c23F0. no callers |
| 0x80016ED4 | func_80016ED4 | DrawPrimFT4Screen | DrawPrimFT4(a, 0, 0) | H | c23F0. 18 calls / 14 files |
| 0x80016EF8 | func_80016EF8 | DrawPrimFT4Mtx | DrawPrimFT4(a, m, 0) | H | c23F0. 11 calls / 6 files: `func_80016EF8(&q, &m)` |
| 0x80017168 | func_80017168 | DrawPrimF3 | a flat triangle, optional matrix | H | c23F0: SetPolyF3. 16 calls / 4 files (called with two arguments) |
| 0x80017294 | func_80017294 | DrawPrimF4 | a flat quad, optional matrix | H | c23F0: SetPolyF4, RotTransPers4 |
| 0x80017254 | func_80017254 | DrawPrimF4Screen | DrawPrimF4(a, 0) | H | c23F0. 21 calls / 13 files |
| 0x80017274 | func_80017274 | DrawPrimF4Mtx | DrawPrimF4(a, m) | H | c23F0. 12 calls / 11 files |
| 0x800173DC | func_800173DC | DrawPrimG3 | a gouraud triangle, optional matrix | H | c23F0: SetPolyG3 |
| 0x8001739C | func_8001739C | DrawPrimG3Screen | DrawPrimG3(a, 0) | H | c23F0. 18 calls / 6 files |
| 0x800173BC | func_800173BC | DrawPrimG3Mtx | DrawPrimG3(a, m) (declared `(void)`) | H | c23F0. 2 calls / 2 files |
| 0x8001751C | func_8001751C | DrawPrimGT3 | a textured gouraud triangle, optional matrix | H | c23F0: SetPolyGT3, gte_RotTransPers3 |
| 0x800174DC | func_800174DC | DrawPrimGT3Screen | DrawPrimGT3(a, 0) | H | c23F0. 2 calls / 1 file |
| 0x800174FC | func_800174FC | DrawPrimGT3Mtx | DrawPrimGT3(a, m) | H | c23F0. no callers |
| 0x80017778 | func_80017778 | DrawPrimG4 | a gouraud quad, optional matrix; noDither != 0 wraps it in dither-off draw modes | H | c23F0: SetPolyG4, RotTransPers4, AddPrimNoDither or AddPrimFlat |
| 0x800176F0 | func_800176F0 | DrawPrimG4ScreenNoDither | DrawPrimG4(a, 0, 1) | M | c23F0. 44 calls / 13 files |
| 0x80017714 | func_80017714 | DrawPrimG4Screen | DrawPrimG4(a, 0, 0) | H | c23F0. 82 calls / 37 files |
| 0x80017738 | func_80017738 | DrawPrimG4MtxNoDither | DrawPrimG4(a, m, 1) | M | c23F0. 7 calls / 3 files |
| 0x80017758 | func_80017758 | DrawPrimG4Mtx | DrawPrimG4(a, m, 0) | H | c23F0. 244 calls / 66 files: `func_80017758(&quad, &m)` (effects: glows, trails) |
| 0x80017930 | func_80017930 | DrawPrimGT4 | a textured gouraud quad, optional matrix; noDither as DrawPrimG4 | H | c23F0: SetPolyGT4, RTPT + RTPS + AVSZ4 |
| 0x800178C8 | func_800178C8 | DrawPrimGT4ScreenNoDither | DrawPrimGT4(a, 0, 1) | M | c23F0. 2 calls / 1 file |
| 0x800178EC | func_800178EC | DrawPrimGT4Screen | DrawPrimGT4(a, 0, 0) | H | c23F0. 12 calls / 9 files |
| 0x80017910 | func_80017910 | DrawPrimGT4Mtx | DrawPrimGT4(a, m, 0) | H | c23F0. 1 call |
| 0x80017B98 | func_80017B98 | DrawSpriteRec | a SPRT and its draw-mode packet from a sprite record (centre x, y, depth, w, h, u, v, CLUT, flags) | M | c23F0: code 0x64, position minus half the size, depth clamped to 0xFFF. 2 calls / 1 file |
| 0x80017F14 | func_80017F14 | AddPrimNoDither | add an untextured packet at depth z between dither-off / dither-on draw modes (semi-transparent when flag bit 30) | M | c23F0: SetDrawMode(.., dtd 0, ..) before, dtd 1 after, tpage abr from bits 28-29 |
| 0x80018094 | func_80018094 | AddPrimFlat | add an untextured packet at depth z (clamped to 0xFFF); semi-transparent ones get a blend-mode packet | H | c23F0: sets the code's bit 1 and adds a SetDrawMode with GetTPage(2, abr..). 7 internal calls |
| 0x80018194 | func_80018194 | AddPrimTextured | add a textured packet at depth z (its own tpage holds the blend mode); semi-transparent sets the code bit | H | c23F0 |
| 0x8001820C | func_8001820C | AddPrimTexturedNoDither | AddPrimTextured between dither-off / dither-on draw modes | M | c23F0 |
| 0x80018384 | func_80018384 | AddPrimChecked | addPrim, hanging when the OT pointer is past D_800AE610 | H | c23F0: `while (1) {}` guard. no callers |
| 0x800183E0 | func_800183E0 | QueueImage | put an image list into a free slot of the 32-slot upload queue (Work+0xA1A8 = D_800B97D8) for FlushImageQueue; 0 when full | H | c23F0. 263 calls / 104 files: `func_800183E0(&tim_list)` in stage set-up |
| 0x80018450 | func_80018450 | QueueImageAt | QueueImage with the slot's x, y and CLUT row taken from a record (+0x28, +0x2A, +0x27) | M | c23F0. 2 calls / 1 file (ovl36). The "at" fields are only used when the slot's +0xD is set, which this leaves 0 |

## Debug text (0x800152F4-0x80015A74)

64 records of 0x10 bytes at Work+0x9DA8 (D_800B93D8): +0 kind (0 free, 1 a string, 2 a number), +2 x, +4 y, +8 the
string pointer or the value, +0xC flags (0x80 16-pixel font, 0x40 decimal, low nibble the digit count), +0xD a byte.
DrawDebugText (named) draws them.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800152F4 | func_800152F4 | ClearDebugTextLine | free record n | H | c23F0. 1 call (ovl37) |
| 0x80015310 | func_80015310 | ClearDebugText | free all 64 records | H | c23F0: walks D_800B93D8 to D_800B97D8. 17 calls / 8 files; ModeReset calls it |
| 0x8001534C | func_8001534C | SetDebugText | record n = a string at x, y with flags | H | c23F0: via SetDebugTextRec. 43 calls / 6 files: ovl37 `func_8001534C(0xC, menu->name, 0xA4, 0x46, 0x44, 0)` (the CHECK LIST menu) |
| 0x800153A4 | func_800153A4 | SetDebugTextRec | fill a record as a string (kind 1) | H | c23F0 |
| 0x800153CC | func_800153CC | SetDebugNumber | record n = a number at x, y (hex, or decimal with flag 0x40) | H | c23F0. 11 calls / 4 files: `func_800153CC(5, *n, 0xA8, 0x90, 0x40, 0)` |
| 0x80015424 | func_80015424 | SetDebugNumberRec | fill a record as a number (kind 2) | H | c23F0 |
| 0x8001544C | func_8001544C | FindFreeDebugText | the first free record, or 0 | H | c23F0. no callers |
| 0x80015608 | func_80015608 | DrawDebugString | one string record as 8 / 16-pixel SPRTs (codes 0x74 / 0x7C) | H | c23F0: one 4-word packet per character from DebugFontUV |
| 0x80015760 | func_80015760 | DrawDebugNumber | one number record, digit by digit through the digit table D_80062B78 | H | c23F0: nibbles of the value (BcdFromInt first with flag 0x40) |
| 0x80015908 | func_80015908 | DebugFontUV | the UV word of a character (c - 0x20) in the 8- or 16-pixel font table | H | c23F0: D_80062A78 / D_80062AF8 |
| 0x80015A74 | func_80015A74 | BcdFromInt | an unsigned value as 10 packed BCD digits | H | c23F0: divides by 10^9 .. 1, four bits a digit |

## Load queue, BGM packs, XA clips and the boot helpers (0x80014554-0x8001C00C)

One load request is queued at a time (D_800BA1B4: 0 idle, 1 a file read, 2 a BGM pack, 3 done, 4 a header read,
5 an XA clip) and LoadQueueStep (named) pumps it every frame. A **BGM pack** is an entry of D_80063138 (`SoundPack` in
c23F0: {archive entry, BGM id, sound id}): the BGM loader (func_800363CC, LoadBgmStep in the sound section) streams
the archive entry's sequence and samples, then sound request `id` (0x100-0x3FF: a BGM) starts it; D_800A654C holds
the pack now playing, D_800747F8 the archive entry now loaded. An **XA clip** request (kind 3) hands a clip code
(0x4000 | bank << 9 | row << 4 | channel) and one of the XA files g_FileTable[9..20] to PlayXa (func_80036AF8). The
c23F0 comments on func_8001AAD0 / func_8001B0D4 / LoadQueueStep call this "a sound bank"; it is the XA clip (see
"Found along the way").

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80014554 | func_80014554 | InitNop | empty | L | c23F0. no callers |
| 0x8001455C | func_8001455C | Init3DNop | empty; called by Init3DScene | L | c23F0: Init3DScene calls it before the ambient colour |
| 0x80015144 | func_80015144 | SoftReset | stop sound (command 2, waiting for the driver), drop the CD request, set Work.exitLoop so main() restarts | H | c23F0: D_800B9A04 = Work+0xA3D4 exitLoop; then func_8002F67C, ResetLoader. 1 call: eC98C func_80141C50 on pad combo 0x90F (Start + Select + L1 + R1 + L2 + R2) |
| 0x80019398 | func_80019398 | CdFilesReady | 1 once InitCdFiles / InitCdFilesAtLba ran | M | c23F0: D_800747D4, set to 1 at the end of both. no callers |
| 0x800193A8 | func_800193A8 | SetCdFilesReady | set that flag | M | c23F0. no callers |
| 0x8001AAA0 | func_8001AAA0 | RequestBgmPack | load request kind 1: play BGM pack id (at once when its archive entry is already loaded) | H | c23F0: RequestLoad(1, id, 0, 0, 0). 86 calls / 45 files: `func_8001AAA0(0x35)`, `return func_8001AAA0(0x5A) != 0;` |
| 0x8001AAD0 | func_8001AAD0 | RequestXaClip | load request kind 3: XA clip `code` from the XA file g_FileTable[9 + n] | H | c23F0; the code goes to PlayXa (0x4000 \| bank << 9 \| row << 4 \| channel). 5 calls / 3 files: `func_8001AAD0(1, 0x4331)` |
| 0x8001ABB4 | func_8001ABB4 | LoadNop | empty | L | c23F0. no callers |
| 0x8001ABBC | func_8001ABBC | RequestLoad | ask for a load (kind 0 file, 1 BGM pack, 2 header, 3 XA clip); 1 when done, 0 while waiting | H | c23F0 (comment). 48 calls / 15 files: ovl36 `func_8001ABBC(0, 0, g_ArchiveFileLoc[n], dest, table)` |
| 0x8001ACF0 | func_8001ACF0 | QueueLoad | store the request for the pump and set D_800BA1B4 | H | c23F0 (comment) |
| 0x8001AE90 | func_8001AE90 | IsQueuedLoad | the request is the one already queued (same file first word, or same pack id) | H | c23F0: compares with D_800747F4 |
| 0x8001AF04 | func_8001AF04 | GetLoadQueueState | 0 idle, 1 done, 2 busy | H | c23F0. 1 call (ovl36) |
| 0x8001B0D4 | func_8001B0D4 | XaClipStep | the XA clip request: PlayXa (func_80036AF8), then follow the CD-audio ring's state (func_80034B98) to the end | H | c23F0; LoadQueueStep state 5; the sound section names func_80036AF8 PlayXa |
| 0x8001B22C | func_8001B22C | GetXaClipState | D_800747E8: 0 idle, 1 / 2 / 4 the driver's load states | M | c23F0. 3 calls / 1 file (ovl36) |
| 0x8001B23C | func_8001B23C | LoadExtraSoundFile | read archive entry D_800AEC78 with the sound table {8, D_800A2E20}; 1 when done | L | c23F0: func_8001B26C fills D_800C7C60 / 64 as ModeTitleLoad does for bank 0x57. 2 calls / 2 files (stg/sc02_000, sc02_003) |
| 0x8001B26C | func_8001B26C | LoadExtraSoundFileStep | its worker (result in D_800C6D10) | L | c23F0 |
| 0x8001B324 | func_8001B324 | ResetBgmPacks | reset the pack loader's step and forget the loaded pack | M | c23F0: D_800AE7EC = 0, ForgetBgmPack. 3 calls / 1 file (ovl36 field init); ResetGameState |
| 0x8001B34C | func_8001B34C | ForgetBgmPack | no pack playing, no entry loaded, ClearTimeChime | M | c23F0: D_800A654C, D_800747F8 = 0 |
| 0x8001B374 | func_8001B374 | GetBgmPack | the pack playing (D_800A654C) | H | c23F0. no callers |
| 0x8001B384 | func_8001B384 | ResetBgmPackStep | D_800AE7EC = 0 | M | c23F0. 3 calls / 1 file |
| 0x8001B394 | func_8001B394 | BgmPackStep | one step of a pack load (kind 2 of the queue); 1 when playing | H | c23F0: LoadQueueStep state 2 |
| 0x8001B3C4 | func_8001B3C4 | BgmPackStepImpl | its worker: already playing / same entry: just the command; else read the entry (func_800363CC), then the disc check, then the command | H | c23F0 |
| 0x8001B710 | func_8001B710 | PlayProgressSounds | sound commands 0x24 / 0x25 / 0x26 when byte vars 0x44 / 0x56 / 0x5C are >= 2 | L | c23F0; BgmPackStepImpl calls it after pack 0x3D. 5 calls / 3 files. Probably extra music layers for story progress |
| 0x8001B788 | func_8001B788 | GetBgmPackPos | the disc position of a pack's archive entry | H | c23F0: g_ArchiveFileLoc[D_80063138[n].entry].pos |
| 0x8001B7C4 | func_8001B7C4 | ReadHeaderStep | load kind 2: read a file's first sector through the streamer (StreamStep(1)) and keep its first word | M | c23F0; LoadQueueStep state 4 |
| 0x8001B85C | func_8001B85C | ResetScreenWipe | wipe step = 0 | H | c23F0. 4 calls / 1 file: ovl36 func_800CEFD0 / func_800CF104 before their loops |
| 0x8001B86C | func_8001B86C | ScreenWipeStep | the room-change wipe: copy the screen into four sprites, then close 30 bars of 8 lines over it; 1 when done | M | c23F0. 2 calls / 1 file: ovl36 `D_80114E9C = func_8001B86C(0)` / `(1)` while the next room loads |
| 0x8001BA84 | func_8001BA84 | DrawScreenCopy | the four screen-copy sprites (D_800630E8) at brightness 0x80 | M | c23F0 |
| 0x8001BADC | func_8001BADC | SetWipeBars | colour the first n bars from the top and bottom; 1 when n >= 0x2C | M | c23F0: 15 + 15 TILE colours |
| 0x8001BB60 | func_8001BB60 | InitWipeBars | 30 full-width TILEs of 8 lines; bar count 0 | H | c23F0 |
| 0x8001BBBC | func_8001BBBC | AddWipeBar | one 320 x 8 TILE at y | H | c23F0: code 0x62 |
| 0x8001BC6C | func_8001BC6C | AddScreenSprite | a SPRT showing a rectangle of the frame buffer (page 0x100 / 0x102 by x) | M | c23F0: code 0x64 |
| 0x8001BD80 | func_8001BD80 | IsSoundLoading | the driver's load state is busy | M | c23F0: func_80034B98() != 0. 2 calls / 1 file |
| 0x8001BDA0 | func_8001BDA0 | ShutdownSystems | stop sound, the GPU, pads, root counters, CD and callbacks | H | c23F0: func_8002CCD8, ResetGraph(3), PadStopCom, StopRCnt, CdInit, ResetCallback, StopCallback. no callers |
| 0x8001BE20 | func_8001BE20 | ResetXaCancel | step = 0 | M | c23F0. 1 call (ovl36) |
| 0x8001BE30 | func_8001BE30 | CancelXaClipStep | cancel a pending XA clip or BGM load (command 0x16) and wait for the CD-audio ring; 1 when idle | M | c23F0. 1 call: ovl36 `if (func_8001BE30() == 0)` |
| 0x8001BFA0 | func_8001BFA0 | GetTitleMovieIndex | which of the two title movies plays (counter & 1) | M | c23F0: D_80063074. 2 calls: ovl39 `D_800D942C[func_8001BFA0()].name` (CdSearchFile) |
| 0x8001BFB0 | func_8001BFB0 | NextTitleMovie | counter + 1 | M | c23F0. 1 call: ovl39 func_800D1E58 after starting the movie |
| 0x8001BFD0 | func_8001BFD0 | ClearTimeChime | stop the time-of-day chime (kind D_800A2B70 and its timer D_800BA0FC = 0) | M | c23F0. 266 calls / 140 files: `func_8002D4C8(0x1C, 0); func_8001BFD0(); func_8002D4C8(0x1D, 0);`; ovl36 plays sounds 0x517 / 0x518 by D_800A2B70 at set progress times |
| 0x8001BFE8 | func_8001BFE8 | LicenceShown | the licence screen has been shown since boot | M | c23F0: D_800747D8. 1 call: ovl38 skips to step 3 when set |
| 0x8001BFF8 | func_8001BFF8 | SetLicenceShown | set it | M | c23F0. 1 call: ovl38 |
| 0x8002C410 | func_8002C410 | ForceLibraryLink | a never-called function that references ~70 PsyQ functions with zero arguments, so the linker keeps them for the overlays | H | src/code_8002C410.c (its own -O0 file). no callers |

## Game state: flags, variables, options, clock, progress (0x80028D58-0x80029A94)

The game's persistent state: 512 flag bits (D_800AE648, 0x40 bytes), 256 byte variables (D_800BA1B8, also read as
s16 / s32 at byte offsets), the 0x98-byte status block D_80078E78 (`DbgStats` in ovl37, `FieldStats` in ovl36; the
default copy is D_80072C84), 64 item values (D_800A6588, u16) and a 0x60-byte block D_800BA2B8. Two **state slots**
of 0x2DC bytes at D_80078F28 hold a copy of all of it: +0 a 0x24-byte map record, +0x24 the status block, +0xBC the item
values, +0x13C the flags, +0x17C the variables, +0x27C the 0x60 block. Slot 1 is the continue point (the engine
restores it on Continue and halves the money), slot 0 the other restore point.

Status block fields used below (address = D_80078E78 + offset): +4 D_80078E7C the play time (frames, s, min, h bytes),
+8 D_80078E80 the story progress value, +0xC D_80078E84 a count, +0x10 D_80078E88 a second count, +0x14 D_80078E8C the
money (stage code caps it at 99999), +0x18 D_80078E90 the clock (minutes of the day in 16.16; D_80078E92 its integer),
+0x36 D_80078EAE daytime (7:00-19:00), +0x37 the day period 0-4, +0x38 / +0x39 minutes / hours, +0x6C.. the four
stat levels and experience (next section).

Flags 0xB-0x13 are the options block, vars 0x2C / 0x2D the two volumes: the options screen (eC98C func_80140608)
toggles flags 0xB, 0xD, 0xC and steps vars 0x2C / 0x2D through 0-7; ApplySoundOptions sends vars 0x2C / 0x2D as sound
commands 0x21 / 0x22 and flag 0xC as command 0xB / 0xC.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80029124 | func_80029124 | SetFlag | set or clear bit n of the flag array | H | c23F0: D_800AE648[n >> 3] \|= / &= ~(1 << (n & 7)). 640 calls / 87 files: `func_80029124(0x11D, 1)`. GetFlag (0x80029178) is its reader |
| 0x800291A0 | func_800291A0 | SetVar | byte variable i = v | H | c23F0: D_800BA1B8[i] = v. 369 calls / 53 files: `func_800291A0(0x2E, 1)` |
| 0x800291B4 | func_800291B4 | GetVar | byte variable i | H | c23F0. 400 calls / 58 files: `if ((func_800291B4(0x56) & 0xFF) >= 2)` |
| 0x800291C8 | func_800291C8 | SetVar16 | the s16 at byte offset i of the variables | H | c23F0. 45 calls / 9 files |
| 0x800291DC | func_800291DC | GetVar16 | the s16 at byte offset i | H | c23F0. 18 calls / 8 files |
| 0x800291F0 | func_800291F0 | SetVar32 | the s32 at byte offset i | H | c23F0. 20 calls / 12 files |
| 0x80029204 | func_80029204 | GetVar32 | the s32 at byte offset i | H | c23F0. 2 calls / 2 files |
| 0x80029044 | func_80029044 | ClearFlags | all 512 flags off | H | c23F0: 0x40 bytes. ResetGameState, ResetGameProgress |
| 0x8002906C | func_8002906C | ClearVars | all 256 variables 0 | H | c23F0 |
| 0x80029094 | func_80029094 | ClearVarBlock60 | zero the 0x60-byte block D_800BA2B8 (saved with the slots) | L | c23F0. Only stg/sc03_011 writes into it (D_800BA2BE) |
| 0x80028D58 | func_80028D58 | GetVibrationOff | option flag 0xB: vibration off | H | c23F0. PollPad sends the motors only when it is 0; CheckSelectHold sets it; eC98C toggles it and rumbles (StartRumbleScript) when it turns on |
| 0x80028D78 | func_80028D78 | SetVibrationOff | set flag 0xB | H | c23F0. 1 call (eC98C) |
| 0x80028D9C | func_80028D9C | GetSoundMode | option flag 0xC (0: sound command 0xC, 1: command 0xB; stereo / mono) | M | c23F0; ApplySoundOptions and e58E0 send the command from it. Which value is mono needs the driver (sound section) |
| 0x80028DBC | func_80028DBC | SetSoundMode | set flag 0xC | M | c23F0. 1 call (eC98C); ResetGameState clears it |
| 0x80028DE0 | func_80028DE0 | GetOptionD | option flag 0xD (the options screen's second entry) | L | c23F0. 3 calls / 2 files: e58E0 func_8015FDCC spawns effect 0x24 and plays sound 0x989 only while it is 0 (a hint / help option?) |
| 0x80028E00 | func_80028E00 | SetOptionD | set flag 0xD | L | c23F0. 1 call (eC98C) |
| 0x80028E24 | func_80028E24 | GetOptionE | flag 0xE | L | c23F0; part of the 0xB-0x13 getter / setter run. no callers |
| 0x80028E44 | func_80028E44 | SetOptionE | flag 0xE | L | as above |
| 0x80028E68 | func_80028E68 | GetOptionF | flag 0xF | L | as above |
| 0x80028E88 | func_80028E88 | SetOptionF | flag 0xF | L | as above |
| 0x80028EAC | func_80028EAC | GetOption10 | flag 0x10 | L | as above |
| 0x80028ECC | func_80028ECC | SetOption10 | flag 0x10 | L | as above |
| 0x80028EF0 | func_80028EF0 | GetOption11 | flag 0x11 | L | as above |
| 0x80028F10 | func_80028F10 | SetOption11 | flag 0x11 | L | as above |
| 0x80028F34 | func_80028F34 | GetOption12 | flag 0x12 | L | as above |
| 0x80028F54 | func_80028F54 | SetOption12 | flag 0x12 | L | as above |
| 0x80028F78 | func_80028F78 | GetOption13 | flag 0x13 | L | as above |
| 0x80028F98 | func_80028F98 | SetOption13 | flag 0x13 | L | as above |
| 0x80028FBC | func_80028FBC | GetMusicVolume | var 0x2C, 0-7 | M | c23F0; ApplySoundOptions sends it as command 0x21; eC98C steps it 0-7. "Music" is the usual first volume; check against the driver's command 0x21 |
| 0x80028FDC | func_80028FDC | SetMusicVolume | set var 0x2C | M | c23F0. ResetGameState sets 7 |
| 0x80029000 | func_80029000 | GetEffectsVolume | var 0x2D, 0-7 (command 0x22) | M | c23F0, as above |
| 0x80029020 | func_80029020 | SetEffectsVolume | set var 0x2D | M | c23F0 |
| 0x800290BC | func_800290BC | SetFlag7F | flag 0x7F on | L | c23F0. 2 calls / 2 files (stg/sc04_015 sets it, then clears it with func_800290E0) |
| 0x800290E0 | func_800290E0 | ClearFlag7F | flag 0x7F off | L | c23F0. 1 call |
| 0x80029104 | func_80029104 | GetFlag7F | flag 0x7F | L | c23F0. 1 call |
| 0x80029218 | func_80029218 | ClearEntryPoint | zero the 0x3C-byte map-entry record D_800AE6A8 (where Musashi is placed on entry) | M | c23F0; work.h: mapGroup 0x1000 places Musashi from D_800AE6A8. ResetGameState |
| 0x80029240 | func_80029240 | SetEndingPending | D_80075838 = 1 | L | c23F0. 1 call: stg/sc07_002 after FadeWhiteStep(4); ovl36 field init (func_800CEE84) then goes to game state 0x12 when it is set |
| 0x80029254 | func_80029254 | ClearEndingPending | D_80075838 = 0 | L | c23F0. 2 calls (ovl36) |
| 0x80029264 | func_80029264 | GetEndingPending | D_80075838 | L | c23F0. 1 call (ovl36) |
| 0x80029274 | func_80029274 | LoadDefaultStatus | the status block D_80078E78 from its default copy D_80072C84 | H | c23F0 (ResetGameProgress comment: "copy the default stats block"); ModeReset |
| 0x8002931C | func_8002931C | SetClock | set the clock (16.16 minutes) and update the period | H | c23F0: D_80078E90 = a; UpdateClockPeriod. 36 calls / 24 files: `func_8002931C(0x01A40000)` (7:00), `(0x04740000)` (19:00) |
| 0x80029344 | func_80029344 | UpdateClockPeriod | from the clock: daytime flag (7:00-19:00), period 0-4 (5:00, 7:00, 16:00, 19:00, 22:00 bounds), hours and minutes | H | c23F0: 0x12C / 0x1A4 / 0x3C0 / 0x474 / 0x528 minutes, v / 60, v % 60. 6 calls / 4 files; e58E0 advances D_80078E92 and wraps at 0x5A0 (24 h) |
| 0x8002941C | func_8002941C | ClearItemValue0 | zero the first item value | L | c23F0: ZeroFill(D_800A6588, 2). ModeReset; e58E0's load path |
| 0x80029444 | func_80029444 | TickPlayTime | play time + 1 frame (30 a second), capped at 99:59:59 | H | c23F0: D_80078E7C..7F bytes, 0x1E / 0x3C / 0x3C / 0x64, cap 0x633B3B00. 12 calls / 12 files |
| 0x80029504 | func_80029504 | GetProgress | the story progress value D_80078E80 | H | c23F0. 433 calls / 58 files: `r = func_80029504();` then range tests; GetLevelCap and the time chime key on it |
| 0x80029514 | func_80029514 | SetProgress | set it | H | c23F0. 161 calls / 73 files: `func_80029514(0x5A)`, `(0x3AC)` at story events |
| 0x80029524 | func_80029524 | IsProgress200To599 | progress in 200..599 | L | c23F0. 5 calls / 5 files: `!(var 0xCE) && func_80029524() == 0` |
| 0x8002953C | func_8002953C | GetFoundCount | the count D_80078E84 | M | c23F0. 28 calls / 28 files: after setting var 0x3A + n and IncFoundCount, `if (func_8002953C() >= 0x23) GiveItem(0x25)` |
| 0x8002954C | func_8002954C | SetFoundCount | set it | M | c23F0. no callers |
| 0x8002955C | func_8002955C | IncFoundCount | count + 1 | M | c23F0. 27 calls / 27 files (one per room with such a find) |
| 0x8002957C | func_8002957C | GetBonusCount | the count D_80078E88 | L | c23F0. no callers |
| 0x8002958C | func_8002958C | SetBonusCount | set it | L | c23F0. no callers |
| 0x8002959C | func_8002959C | GainBonus | GainStat3(0x32), then D_80078E88 + 1 | L | c23F0. 10 calls / 9 files (stg/sc03_006, sc05_010 ...) |
| 0x800295D4 | func_800295D4 | SetupDemoStatus | the attract demo's status: four values 0xFA (D_80078EB2..EB8), flags 0x1E / 0x80 / 0x82 / 0x83 / 0x85, money 100 | H | c23F0; ModeDemoRun step 0 |
| 0x80029664 | func_80029664 | SetClockNight | clock = 22:00 (0x528) | M | c23F0; ModeDemoRun for demo 0 |
| 0x80029690 | func_80029690 | ClearStateSlots | both state slots zeroed and marked empty | H | c23F0: 2 x 0x2DC (as 0x5B8 each), D_800A5E58[i] = 0. ModeReset |
| 0x800296F8 | func_800296F8 | SaveContinuePoint | copy the game into slot 1 with a 0x24-byte map record | H | c23F0: SaveStateSlot(1), D_80079204 = *rec. 7 calls / 7 files: `func_800296F8(a->messages[0])` (the record hangs off the save object) |
| 0x80029774 | func_80029774 | SaveStateSlot | copy status, item values, flags, variables and the 0x60 block into slot a; mark it used | H | c23F0 |
| 0x800298BC | func_800298BC | LoadContinuePoint | slot 1 back, and its map record out | H | c23F0. 1 call: e58E0 Continue (`func_800298BC(&D_80078E50)`, then money / 2) |
| 0x8002992C | func_8002992C | LoadStateSlot | slot a back into the game | H | c23F0. 1 call: e58E0 (`func_8002992C(0)`) |
| 0x80029A58 | func_80029A58 | HalveSlotMoney | slot i's saved money / 2 | M | c23F0: slot word 0xE = +0x38 = status +0x14 = the money. no callers |
| 0x80029A94 | func_80029A94 | IsStateSlotUsed | slot a holds a state | H | c23F0: D_800A5E58[a]. 4 calls / 1 file (e58E0 picks Continue / restart by it) |

## Stats, experience, items and the save request (0x80029AAC-0x8002AF08)

Musashi has four stats, each with a level (0-30), experience, and a 16-byte-per-level table at D_800638F8 (u16 pairs:
+0 / +2 experience needed and value of stat 0, +4 / +6 stat 1, +8 / +0xA stat 3, +0xC / +0xE stat 2). Gaining
experience is capped by GetLevelCap (by story progress); a level-up shows message k with the gain (stage engine
func_8016E918(k, value - previous)) and plays sound 0xB2C. Stat 0 grows from finished enemies (their init record's
+0x2E), stat 1 from distance walked (D_80078F04 / odometer D_80078F08), stats 3 and 2 from the bytes +0xC8 / +0xC9 of
an enemy Musashi hits. The status screen (eC98C ~line 2220) prints the average level + 1, a rank title, each level + 1
and the stat values. Which in-game stat each is (HP, BP, strength ...) is not settled by the C, so the names are
numbered by the message index k; the local card may rename them once checked in game.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80029AAC | func_80029AAC | CalcStat0Power | stat 0 value x 75 / 100 | M | c23F0. 2 calls / 1 file: e* func_8014C4AC(o, 9 / 0x11, power, ...) (an attack's strength) |
| 0x80029AF4 | func_80029AF4 | CalcPower03Rand40 | CalcPower03 x (200 + rand 40) / 100 | M | c23F0. 1 call: func_8014C4AC(o, 0x1B, ...) |
| 0x80029B4C | func_80029B4C | CalcPower02Rand | CalcPower02 x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029BC8 | func_80029BC8 | CalcPower03Rand | CalcPower03 x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029C44 | func_80029C44 | CalcPowerBothRand | (CalcPower02 + CalcPower03) x (a + rand b) / 100 | M | c23F0. 1 call |
| 0x80029D3C | func_80029D3C | ReduceByStat1 | v - v x (stat 1 value x 60) / 4800, at least 1 | M | c23F0. 3 calls / 2 files: on D_8011DB1A and an actor's +0xF2 (a drain or damage taken) |
| 0x80029DB4 | func_80029DB4 | CalcPower02 | (stat 2 value + stat 0 value) x 125 / 100 (150 with flag 0x81) | M | c23F0: GetStat2Value + GetStat0Value (func_8002A9DC + func_8002A2B0). 8 calls / 4 files: stg/sc04_005 / sc04_007 `(o, &tbl, 7, func_80029DB4())` |
| 0x80029E30 | func_80029E30 | CalcPower03 | (stat 3 value + stat 0 value) x 175 / 100 | M | c23F0. 8 calls / 4 files: `(o, &tbl, 6, func_80029E30())`. The Calc names give the stats added; rename together with the stats |
| 0x80029E94 | func_80029E94 | ScaleByActorInit30 | (an actor's init record +0x30 x k) >> 12 | L | c23F0. no callers |
| 0x80029EC0 | func_80029EC0 | GetActorExp | an actor's init record +0x2E (the experience it gives) | M | c23F0. no callers; GainStat0FromActor reads the same field |
| 0x80029ED4 | func_80029ED4 | AddWalkDistance | add to the step count; every 102 the odometer + 1 (cap 9999999), every 10 odometer units GainStat1 | H | c23F0: D_80078F04 / F08 / F0C, only from progress 10. 1 call: e* `func_80029ED4(SVecDist(&a, &b))` |
| 0x80029FD4 | func_80029FD4 | GetOdometer | D_80078F08 | M | c23F0. 1 call: the status screen |
| 0x80029FE4 | func_80029FE4 | GetAverageLevel | the four stat levels' mean | H | c23F0. 6 calls / 6 files: `if (func_80029FE4() >= 0x1B)`; the status screen prints it + 1 |
| 0x8002A04C | func_8002A04C | GainStat0FromActor | GainStat0 with the actor's init +0x2E | H | c23F0. 166 calls / 61 files; r272 FinishEnemy calls it before FreeActor |
| 0x8002A088 | func_8002A088 | GainStat0 | add stat 0 experience (the argument passes through in a0); on a level-up the message, sound 0xB2C | H | c23F0. 8 calls / 4 files: `func_8002A088(0x64)` |
| 0x8002A108 | func_8002A108 | AddStat0Exp | add experience under the cap; 1 on a level-up | H | c23F0 |
| 0x8002A1B4 | func_8002A1B4 | IsStat0Full | at the cap with full experience | M | c23F0. 2 calls / 2 files |
| 0x8002A200 | func_8002A200 | Stat0ExpReached | experience >= needed | H | c23F0 |
| 0x8002A234 | func_8002A234 | Stat0LevelUp | level + 1 (max 30), experience 0 | H | c23F0 |
| 0x8002A26C | func_8002A26C | GetStat0Level | D_80078EE4 | H | c23F0. status screen |
| 0x8002A27C | func_8002A27C | GetStat0Exp | D_80078EE8 | H | c23F0 |
| 0x8002A28C | func_8002A28C | GetStat0ExpNeeded | table +0 for the level | H | c23F0 |
| 0x8002A2B0 | func_8002A2B0 | GetStat0Value | table +2 for the level | H | c23F0. status screen |
| 0x8002A2D4 | func_8002A2D4 | GainStat1 | as GainStat0 for stat 1 (message 1) | H | c23F0. 7 calls / 3 files |
| 0x8002A354 | func_8002A354 | AddStat1Exp | | H | c23F0 |
| 0x8002A400 | func_8002A400 | IsStat1Full | | M | c23F0. 2 calls / 2 files |
| 0x8002A44C | func_8002A44C | Stat1ExpReached | | H | c23F0 |
| 0x8002A480 | func_8002A480 | Stat1LevelUp | | H | c23F0 |
| 0x8002A4B8 | func_8002A4B8 | GetStat1Level | D_80078EEC | H | c23F0 |
| 0x8002A4C8 | func_8002A4C8 | GetStat1Exp | D_80078EF0 | H | c23F0 |
| 0x8002A4D8 | func_8002A4D8 | GetStat1ExpNeeded | table +4 | H | c23F0 |
| 0x8002A4FC | func_8002A4FC | GetStat1Value | table +6 | H | c23F0. 3 calls / 2 files: r272 ScaleByDifficulty `x - x * func_8002A4FC() * 100 / 7680` (its "meaning not known" is this stat) |
| 0x8002A520 | func_8002A520 | GainStat3FromActor | GainStat3 with the actor's byte +0xC8 | H | c23F0. 52 calls / 17 files; r272 TakeDamageAndRecoil (its "status effects" are these two gains) |
| 0x8002A544 | func_8002A544 | GainStat3 | as GainStat0 for stat 3 (message 3) | H | c23F0. 7 calls / 3 files |
| 0x8002A5C4 | func_8002A5C4 | AddStat3Exp | | H | c23F0 |
| 0x8002A670 | func_8002A670 | IsStat3Full | | M | c23F0 |
| 0x8002A6BC | func_8002A6BC | Stat3ExpReached | | H | c23F0 |
| 0x8002A6F0 | func_8002A6F0 | Stat3LevelUp | | H | c23F0 |
| 0x8002A728 | func_8002A728 | GetStat3Level | D_80078EFC | H | c23F0 |
| 0x8002A738 | func_8002A738 | GetStat3Exp | D_80078F00 | H | c23F0 |
| 0x8002A748 | func_8002A748 | GetStat3ExpNeeded | table +8 | H | c23F0 |
| 0x8002A76C | func_8002A76C | GetStat3Value | table +0xA | H | c23F0 |
| 0x8002A790 | func_8002A790 | GainStat2FromActor | GainStat2 with the actor's byte +0xC9 | H | c23F0. 50 calls / 16 files |
| 0x8002A7B4 | func_8002A7B4 | GainStat2 | as GainStat0 for stat 2 (message 2) | H | c23F0. 7 calls / 3 files |
| 0x8002A834 | func_8002A834 | AddStat2Exp | | H | c23F0 |
| 0x8002A8E0 | func_8002A8E0 | IsStat2Full | | M | c23F0 |
| 0x8002A92C | func_8002A92C | Stat2ExpReached | | H | c23F0 |
| 0x8002A960 | func_8002A960 | Stat2LevelUp | | H | c23F0 |
| 0x8002A998 | func_8002A998 | GetStat2Level | D_80078EF4 | H | c23F0 |
| 0x8002A9A8 | func_8002A9A8 | GetStat2Exp | D_80078EF8 | H | c23F0 |
| 0x8002A9B8 | func_8002A9B8 | GetStat2ExpNeeded | table +0xC | H | c23F0 |
| 0x8002A9DC | func_8002A9DC | GetStat2Value | table +0xE | H | c23F0 |
| 0x8002AA00 | func_8002AA00 | IsLevelCapped | -1 before progress 10 (no gains), else level >= GetLevelCap | H | c23F0 |
| 0x8002AA3C | func_8002AA3C | GetLevelCap | the level cap by progress: 0 / 8 / 16 / 22 / 27 / 99 at 10 / 200 / 600 / 900 / 1200 | H | c23F0 |
| 0x8002AAAC | func_8002AAAC | LevelUpHook | empty, called after each level-up | M | c23F0 |
| 0x8002AAB4 | func_8002AAB4 | GetRankTitle | the rank string for the average level (threshold / string pairs at D_800638A0) | H | c23F0. 1 call: eC98C `strcpy(dst + 0xA, func_8002AAB4())` |
| 0x8002AB64 | func_8002AB64 | IncStartCount | var 0x2E + 1; the first time, items 1-6 and vars 0x3B-0x3F = 3 | L | c23F0. 3 calls / 3 files: e58E0 after restoring the options from a save, stg/sc02_005 |
| 0x8002AC00 | func_8002AC00 | GiveItem | item n: var 0x62 + n = the item table's kind \| 0x80 (owned), its value from the table (D_8010F46C, 8 bytes an item) | M | c23F0. 196 calls / 80 files: `func_8002AC00(0x26)`; ovl37's debug "give all" writes the same vars |
| 0x8002AC98 | func_8002AC98 | AgeItemValues | for each owned item with a kind (var 0x63 + i low nibble), move its value by rand 0-31 - 11 (kind 1 halves it, kind 3 doubles it on the 0 / 11 draws), clamped to 1-4 x the table value | L | c23F0. 1 call. Fits food that spoils or ripens over time |
| 0x8002AE60 | func_8002AE60 | AllItemsMarked | all 43 item vars 0x63-0x8D have bit 0x40 | L | c23F0. 4 calls / 3 files, with flag 0x123 (game cleared) |
| 0x8002AED0 | func_8002AED0 | RequestSave | D_800760C8 = 1 | M | c23F0. 4 calls / 4 files. The field picks game state 0xD (save screen hook) when it is set |
| 0x8002AEE4 | func_8002AEE4 | RequestClearSave | D_800760C8 = 2 | M | c23F0. 3 calls: stg/sc07_007 / sc07_009 after flags 0x11D / 0x123 (the ending) |
| 0x8002AEF8 | func_8002AEF8 | ClearSaveRequest | D_800760C8 = 0 | M | c23F0. 3 calls / 2 files (ovl36 field init) |
| 0x8002AF08 | func_8002AF08 | GetSaveRequest | D_800760C8 | M | c23F0. 2 calls: ovl36 `else if (func_8002AF08() != 0) SetGameState(0xD);` |

## Memory card (0x8002AF18-0x8002C3B0)

None of these has a caller in the C (the save screen is in code not yet split, or reached by pointer). The card file:
a 0x200-byte header (`SC` + icon, title from D_80072E10, icon data from D_80063AEC), a 0x280 directory of four 0x80
slot headers (D_80075A40: +2 checksum of the 0x70 bytes from +0x10, which hold a copy of the status block), and the
0x300-byte saves (D_80075CC0, a state slot) at 0x480 + slot x 0x300.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002AF18 | func_8002AF18 | ResetCardState | the card state machine's step and slot status words to 0 | H | c23F0: D_800760AC, D_8007609C..A8 |
| 0x8002AF48 | func_8002AF48 | GetCardSlotHeader | the 0x80-byte header of save slot i in the directory copy | H | c23F0: D_80075A50 + (i + 1) x 0x80 |
| 0x8002AF60 | func_8002AF60 | GetCardDirWord | the directory's first word (D_80075A40) | L | c23F0 |
| 0x8002AF70 | func_8002AF70 | SetCardSaveData | the 0x300 save buffer from a 0x2DC state slot, plus its tag word | H | c23F0: ZeroFill 0x300, copy, D_80076040 = v |
| 0x8002B00C | func_8002B00C | GetCardSaveData | the save buffer back into a state slot | H | c23F0 |
| 0x8002B064 | func_8002B064 | ChecksumSlotHeader | 16-bit sum of 0x70 bytes | H | c23F0; the save step stores it at header +2 |
| 0x8002B08C | func_8002B08C | ChecksumSaveData | 16-bit sum of 0x300 bytes | H | c23F0; stored at header +4 |
| 0x8002B0B4 | func_8002B0B4 | SaveCardStep | the card state machine (mode & 7: 0 check / read the directory, 1 save (creating the file), 2 load, 3 a further mode), MemCardSync-driven; status per port in D_8007609C | H | c23F0: MemCardExist / Open / CreateFile / ReadData / WriteData / Close, 533 lines |
| 0x8002C320 | func_8002C320 | CheckCardSlots | two bits per used slot header: 1 checksum good, 2 bad | H | c23F0: the 0x70-byte sum against header +2 |
| 0x8002C3B0 | func_8002C3B0 | CountCardBlocks | blocks (0x2000 bytes, rounded up) used by n directory entries | H | c23F0: DIRENTRY stride 0x28, size at +0x18 |

## Models, sprites, polygon builders and lights (0x8001C00C-0x80028C50)

From a helper pass (checked here against the C for the type-1 / type-2 claim). Source: `src/code_800123F0.c` ("c23F0") read in full for this range, callers counted with
`grep` over `src/` (`extern` lines, prototypes and definitions excluded). "stg: N / F" = N call sites in F of the 147
`src/stg/*.c` files; "stage" = `src/stage/*.c` (engine*.c, sc03_001.c); "abil" = `src/abil/*.c`; "ovl" = `src/ovl3*/`.
Style follows symbol_addrs.txt and the r272 engine proposals (AllocActorModel, ShowModel, ...). The r272 words are kept:
**model** = the 0x84-byte object (ModelObj, type 1), **sprite** = the 0x38-byte object (type 2), even though several
sprite kinds draw shapes or primitive lists rather than textured sprites.

Known names used as evidence and not proposed: PartShow = 0x8001D130 and PartHide = 0x8001D150 (**known from the
symbol_addrs.txt comment**, not applied yet; PartShow clears bits 24-30 of a part word, PartHide sets bit 24),
g_PrimNext, g_WorldOtTable, Init3DScene, ResetSystems, TestPadAll, GetPadHeldDir, GetPadPrevHeld, and the PsyQ names.

### Model and sprite object pools, set-up

Both pools live in Work (0x800AF630): **models** at Work+0x2A8 (0x800AF8D8), 0xC0 x 0x84 bytes; **sprites** at
Work+0x65A8 (0x800B5BD8), 0x100 x 0x38 bytes. +0x00 is the type (0 free, 1 model, 2 sprite), +0x02 the kind (the index
into the draw table: models 0-8 through D_80063500, sprites 0-0xA through D_8006351C; sprite kind 0xB is never drawn),
+0x04 the attribute word (bit 31 hides: both draw loops skip `*(s32 *)(o + 4) < 0`). Slot ranges, from the draw loops
and their mask values in Work+0xA3E1 (D_800B9A11): models 0-3 always, 4 (Musashi, 0x02), 5 (0x08), 6-21 (0x10),
22-37 (0x20), 38-133 (actors, 0x40 = AllocActorModel's 0x26-0x85), 134-191 (0x80); sprites 0-3 always, 4-5 (0x04),
6-21 (0x10), 22-61 (0x20), 62-125 (actor sprites, 0x40 = AllocActorSprite's 0x3E-0x7D), 126-255 (0x80). Model
kinds by init: 0 plain TMD (GsSortObject4), 1 preset GsDOBJ5 (Musashi), 2 data at +0x24, 3 sprite frame at +0x20,
4 shape at +0x20, 5 semi-transparent TMD (own sorter), 7 / 8 TMD / preset variants; 6 is drawn by an overlay function
(func_800CAE80) and has no EXE init. A parts word is a TMD pointer with bit 24 = hidden (bits 24-30 masked off).

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8001C00C | func_8001C00C | DrawModelsAndSprites | unless Work+0xA3E1 == 1: draw all models (func_8001F9F8) then all sprites (func_8001D1C4) | H | c23F0; main.c 1 call per frame; docs/mode_dispatcher.md calls it "the sprite / model draw" |
| 0x8001C044 | func_8001C044 | ClearObjectPools | zero all 0x100 sprites and 0xC0 models, Work+0x19C (preset object count) = 0 | H | c23F0: ResetSystems calls it; ovl: 8 calls / 6 files |
| 0x8001C0C8 | func_8001C0C8 | ClearObjectPoolsAlt | the same as func_8001C044 written with do-while loops | H | c23F0; stage engine.c:131 (stage start), ovl: 4 calls / 1 file |
| 0x8001C14C | func_8001C14C | ClearReservedObjects | zero only sprites 0-3 and models 0-3 (loops end at Work+0x6688 / +0x4B8) | M | c23F0; stage engine_80144B9C.c:323 (1 call) |
| 0x8001C1E4 | func_8001C1E4 | SetModelParent | +0x78 (coord.super) = parent + 0x30 (its GsCOORDINATE2), flg = 0, GsGetLw | H | c23F0; game.h already says "links it to a parent". stg: 22 / 11: `func_8001C1E4(o->model, o->parent(+0x64)->model)` |
| 0x8001C214 | func_8001C214 | InitModel | reset (func_8001C9D0), type 1 kind 0, GsInitCoordinate2, parts = p, pose = g_DefaultPose, GsMapModelingData each part | H | c23F0. stg: 757 / 125, stage: 20 / 5, abil: 4 / 4: `func_8001C214(m, data)` after AllocActorModel; SetupActor (r272) uses it |
| 0x8001C2C4 | func_8001C2C4 | InitNullModel | the same, kind 0, no parts (+0x24 = 0): DrawTmdModel only builds its matrix | H | c23F0. stg: 67 / 54, abil: 3 / 3; followed by +0x10 rotation and UpdateModelZYX, or used as a parent |
| 0x8001C320 | func_8001C320 | InitPresetModel | kind 1: each part GsMapModelingData + GsLinkObject5 into the GsDOBJ5 table D_800A5BD0, GsPresetObject into Work+0x198; +0x2E = first object index | H | c23F0; one call, stage engine_801458E0.c:1360 `func_8001C320(&D_800AFAE8 (model slot 4), D_800DE2A4)` = Musashi |
| 0x8001C448 | func_8001C448 | InitNullPresetModel | kind 1, no parts | M | c23F0; no caller in src |
| 0x8001C4A4 | func_8001C4A4 | InitModelKind7 | InitModel with kind 7 (TMD parts mapped) | M | c23F0; no caller; kind 7 is not one of DrawTmdModel's kinds (its table entry is not readable here) |
| 0x8001C558 | func_8001C558 | InitNullModelKind7 | kind 7, no parts | M | c23F0; no caller |
| 0x8001C5B8 | func_8001C5B8 | InitPresetModelKind8 | InitPresetModel with kind 8 (reads Work+0x198 / +0x19C through D_800AF7C8 / D_800AF7CC) | M | c23F0; no caller |
| 0x8001C6E4 | func_8001C6E4 | InitNullModelKind8 | kind 8, no parts | M | c23F0; no caller |
| 0x8001C744 | func_8001C744 | InitModelKind2 | kind 2, +0x24 = data (not mapped as TMD) | M | c23F0; no caller |
| 0x8001C7B0 | func_8001C7B0 | InitNullModelKind2 | kind 2, no data | M | c23F0; no caller |
| 0x8001C810 | func_8001C810 | InitTransModel | InitModel with kind 5: drawn by SortTransObject (per-object blend rate, env-map bits, max-z) | M | c23F0. stg: 127 / 67, stage 5 / 3, abil 5 / 5; within 4 lines callers set +4 \|= 0x40000000 (30), 0x50000000 (21), 0x8040 (32). r272 SetupActorAlt |
| 0x8001C8C4 | func_8001C8C4 | InitNullTransModel | kind 5, no parts | M | c23F0; no caller |
| 0x8001C924 | func_8001C924 | SetModelParts | +0x24 = parts, GsMapModelingData(part + 4) each (no hide mask) | H | c23F0. stg: 110 / 25: `func_8001C924(a->model, &stage_parts)` (swap a model's part table) |
| 0x8001C97C | func_8001C97C | MapPartsTmd | GsMapModelingData(part + 4) for each part of a 0-terminated table | H | c23F0. stg: 24 / 14, stage 5 / 1: `func_8001C97C(D_sc05_005_801A60D8[k])` |
| 0x8001C9D0 | func_8001C9D0 | ResetModelFields | pos / rot 0, scale 0x1000 x3, +4 / +0x20 / +0x80 0, cull box +0x28 / +0x2A = 200 x 200, +0x2C / +0x2E 0 | H | c23F0: first call of every model init (14 calls) |
| 0x8001CA1C | func_8001CA1C | InitSpriteModel | model kind 3 with +0x20 = a sprite frame (no parts): an animation script then feeds frames through the pose slot | M | c23F0. stg: 339 / 66, stage 6 / 1, abil 5 / 4; sc05_004: `func_8001CA1C(t, &D_..AE64)` then SetScript(a, &D_..AE70), 12 bytes on |
| 0x8001CA88 | func_8001CA88 | InitShapeModel | model kind 4, +0x20 = shape record, +0x74 (screen offset) = 0, +0xE / +0x1E 0 | M | c23F0: only writer of +0x74, read by DrawShapeModel (func_800221A8). stg: 8 / 8, stage 1 |
| 0x8001CB00 | func_8001CB00 | InitSpriteKind1 | ResetSprite, kind 1, frames, VRAM x / y (+0x28 / +0x2A), +4 = 0x08000000 (the rotate flag DrawSpriteBillboard tests) | M | c23F0. stg: 19 / 17, abil 4 / 3: `(o, frames, 0x280, 0x100)` |
| 0x8001CB6C | func_8001CB6C | InitSpriteKind2 | ResetSprite, kind 2, frames, VRAM x / y, +4 = 0x0C000040 | M | c23F0. stg: 66 / 55, stage 5 / 3, abil 2, ovl 1: `(o, frames, 0x298, 0x1B0)` |
| 0x8001CBDC | func_8001CBDC | InitSpriteKind0 | ResetSprite, kind 0, frames, VRAM x / y | M | c23F0. stg: 12 / 12, abil 1 |
| 0x8001CC3C | func_8001CC3C | InitSpriteKind3 | ResetSprite, kind 3, frames, VRAM x / y (kind 3 = DrawSpriteBillboard's perspective-scaled case) | M | c23F0. stg: 81 / 52, abil 14 / 11, stage 6 / 4, ovl 1; often `(o, 0, 0, 0)` then StartSpriteAnim |
| 0x8001CCA0 | func_8001CCA0 | InitSpriteKind9 | ResetSprite, kind 9, frames, VRAM x / y | M | c23F0; no caller |
| 0x8001CD04 | func_8001CD04 | InitShapeSpriteKind4 | ResetSprite, kind 4, +0x20 = shape record, +0xE (tube depth) / +0x1E (ring) 0 | M | c23F0. stg: 17 / 9 `(p, e->c)` |
| 0x8001CD50 | func_8001CD50 | InitShapeSpriteKind5 | the same, kind 5 | M | c23F0. stg: 119 / 59, stage 3 / 2, abil 6 / 5 |
| 0x8001CD9C | func_8001CD9C | InitShapeSpriteKind6 | the same, kind 6 | M | c23F0. stg: 97 / 56, stage 6, abil 5, ovl 1; sc03_007: `func_8001CD9C(m, rec)` then SetShapeCircle(rec, 0x10) |
| 0x8001CDE8 | func_8001CDE8 | InitSpriteKind7 | ResetSprite, kind 7, +0x20 = data | M | c23F0; no caller |
| 0x8001CE28 | func_8001CE28 | InitTextSprite | ResetSprite, kind 8, +0x20 = a glyph string (SjisToGlyphs output) | H | c23F0. stg: 22 / 14, stage 6 / 1; engine_801458E0: `func_80024054(&text, &buf); func_8001CE28(q, &buf)`, sc02_005 the same |
| 0x8001CE68 | func_8001CE68 | InitNumberSprite | kind 8 with CLUT row +0x27 = 0xBA and +4 \|= 0x400000: a digit string | H | c23F0. stage 2, stg 2 / 2: `func_800242D0(n, &buf, 0x84); func_8001CE68(q, &buf)` (engine_801458E0, sc03_010, sc03_013) |
| 0x8001CEC0 | func_8001CEC0 | InitSpriteKindA | ResetSprite, kind 0xA, +0x20 = data | M | c23F0. stg: 16 / 11, abil 1 |
| 0x8001CF00 | func_8001CF00 | InitNullSprite | ResetSprite, kind 0xB: DrawSprite only dispatches kinds < 0xB, so it is never drawn | H | c23F0 func_8001D388's `k < 0xB`. stg: 17 / 17, stage 1, abil 1 |
| 0x8001CF30 | func_8001CF30 | SetSpriteNoLight | +4: clear 0x40 (raw texture, code bit 0), set 0x1000; both skip DrawSprite3D's NCCS lighting | M | c23F0, DrawSprite3D tests `attr & 0x1040`. stg: 64 / 32, stage 2 / 1, after the field overlay's sprite maker func_800D222C |
| 0x8001CF48 | func_8001CF48 | ResetSprite | type 2, scale 0x1000 x3, rot / pos / offsets 0, rgb 0x80 x3, CLUT row 0, +0x34 (matrix link) 0 | H | c23F0: first call of every sprite init (13); the 0x38 type game.h wrongly gives to func_8001C2C4 / C448 / C558 |
| 0x8001CFB8 | func_8001CFB8 | AllocReservedModel | AllocModelInRange(0, 4) | M | c23F0; no caller in src |
| 0x8001CFDC | func_8001CFDC | AllocModelInRange | the first free (type 0) model in slots [a, b), b <= 0xC0, else 0 | H | c23F0. stage: 3 / 2 (`(0x26, 0x85)` = AllocActorModel, `(6, 0x16)`, `(0x16, 0x26)`), stg 1 `(0x86, 0xC0)` |
| 0x8001D050 | func_8001D050 | AllocReservedSprite | AllocSpriteInRange(0, 4) | M | c23F0; no caller |
| 0x8001D074 | func_8001D074 | AllocSpriteInRange | the first free sprite in slots [a, b), b <= 0x100, else 0 | H | c23F0. stg: 90 / 46: `func_8001D074(0x7E, 0x100)` (65), `(0x3E, 0x7D)` = AllocActorSprite; stage 5 / 3 |
| 0x8001D0E8 | func_8001D0E8 | SetModelCullBox | +0x28 / +0x2A = half width / height of the on-screen test (0x7FFF / 0x7FFF = always drawn) | H | c23F0; IsPointOnScreen reads them. stg: 168 / 53: `(a->model, 0x7FFF, 0x7FFF)` (57), `(.., 0x280, 0x1E0)`, `(.., 0xC8, 0xB4)` |
| 0x8001D0F4 | func_8001D0F4 | PartShowAll | PartShow on every part of a 0-terminated table | H | c23F0 body (`*p &= 0x80FFFFFF`); no caller in src |
| 0x8001D16C | func_8001D16C | AppendModelChain | follow the tagged word chain from +0x80 to its end, link x there (tag 0x01), *x = 0 | L | c23F0; no caller; +0x80 is the extra-data pointer DrawTmdModel reads |

### Model draw, parts and poses

The model loop (func_8001F9F8) calls the kind's handler from **D_80063500** (9 entries) for each model with type 1, kind
< 9 and +4 >= 0. Kinds 0, 1, 5, 6 are TMD models drawn by func_8001FC08: +0x2C flags bit 0 = the matrix at +0x34 is
already built (func_8001F97C, stage UpdateModelZYX), 0x10 = scale +0x18, 0x20 = the model's own lights in the 0x30-byte
record at +0x80, 0x40 = Musashi's pose form, 0x80 = per-part back colours ({r, g, b, part} records at +0x80 or after the
lights). +0x28 / +0x2A are **not a colour** but the half width / height of the on-screen test. Per-part matrices go to
**D_80074818** (light, 64 x MATRIX) and **D_80075018** (screen), or to the scratchpad (0x1F800000 / 0x1F8000E0) when the
model has fewer than 8 parts. Pose records: 12 bytes (PoseRec12, func_80020248) or 8 bytes (PoseRec8, func_80020A28),
picked by bit 24 of the pose pointer.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8001F974 | func_8001F974 | (skip) | empty function | - | c23F0 |
| 0x8001F97C | func_8001F97C | UpdateModelMatrix | +0x34 = RotMatrixZYXFast(+0x10) (scaled by +0x18 when +0x2C & 0x10), translation from +8, flags \|= 1 (DrawTmdModel then uses it as is) | M | c23F0; no caller in src (the stage engine's UpdateModelZYX does the same job) |
| 0x8001F9F8 | func_8001F9F8 | DrawAllModels | DrawModel over the model slot groups, each group skipped when its bit in Work+0xA3E1 is set | H | c23F0: loops of 4, 1, 1, 16, 16, 96, 58 over 0x800AF8D8.. |
| 0x8001FB8C | func_8001FB8C | DrawModel | type 1, kind < 9, not hidden (+4 >= 0): D_80063500[kind](o), count++ | H | c23F0; 7 calls from DrawAllModels |
| 0x8001FC08 | func_8001FC08 | DrawTmdModel | coord from rot / pos (or the ready +0x34 matrix), GsGetLws, cull (IsPointOnScreen), part matrices, then per visible part GsSortObject4 (kind 0), preset sorters (1), SortTransObject (5), func_800CAE80 (6) | H | c23F0 body; stg: 1 (`func_8001FC08(o->model)`); a D_80063500 handler (no direct EXE caller) |
| 0x80020248 | func_80020248 | CalcPartMatrices | 12-byte pose: per part RotMatrixZYXFast(angles) + translation, times the light matrix (unless no-light) and the screen matrix; returns 1 when the scratchpad was used | H | c23F0; DrawTmdModel, game.h PoseRec12 names it |
| 0x80020598 | func_80020598 | CalcPlayerPartMatrices | Musashi's pose form (+0x2C & 0x40): root turned half a turn (func_80012558(m, 0x800)), parts 25 / 22 / 8 scaled by Player +0xF6 / +0x1B8 / +0x1BA | M | c23F0 (D_80126C4E / D_80126D10 / D_80126D12 = 0x80126B58 + 0xF6 / 0x1B8 / 0x1BA); DrawTmdModel only |
| 0x80020A28 | func_80020A28 | CalcPartMatricesPacked | the 8-byte pose form (PoseRec8: angles in nibbles, signed-byte translation) | H | c23F0; DrawTmdModel when pose bit 24 is set; game.h PoseRec8 |
| 0x80020DA4 | func_80020DA4 | RotMatrixZYXFast | 3x3 rotation from three 12-bit angles via the sin / cos word table D_800636D4 | M | c23F0 NON_MATCHING C and comment; DrawTmdModel calls it where func_800221A8 calls PsyQ RotMatrixZYX(o + 0x10, &coord). stg 7 / 6 |
| 0x80020F34 | func_80020F34 | ScaleMatrixFast | scale a matrix by an SVECTOR (asm) | M | c23F0: `func_80020F34(&coord, o + 0x18)` where func_800221A8 calls PsyQ ScaleMatrix(&coord, &sc). stg 11 / 9, stage 3 / 2, abil 4 / 4 |
| 0x80021008 | func_80021008 | ApplyModelLights | lights 0-2 from a 3 x 0x10 LightDir record (ApplyLight) | H | c23F0; DrawTmdModel with +0x2C & 0x20, record at +0x80 |
| 0x80021050 | func_80021050 | RestoreLights | lights 0-2 back from g_Lights (D_800A5E88) | H | c23F0; DrawTmdModel after ApplyModelLights |
| 0x8002109C | func_8002109C | ApplyPartBackColor | SetBackColor from the next {r, g, b, part} record when its part is this one (part -2 = every part) | M | c23F0; DrawTmdModel per part with +0x2C & 0x80 |
| 0x80021120 | func_80021120 | RestoreAmbientNextPart | GsSetAmbient(g_AmbientColor), part counter++ | M | c23F0; DrawTmdModel after each part with back colours |
| 0x80021174 | func_80021174 | IsPointOnScreen | project a point with D_800AE688; 1 when inside +-w / +-h (from a packed w \| h << 16; 0x7FFF7FFF = always 1), 0 behind | H | c23F0; DrawTmdModel / func_800221A8 pass +0x28. stage 1, stg 1: `if (func_80021174(D_8018F184, &v) == 0)` |

### Sprite draw and shapes

The sprite loop (func_8001D1C4) calls **D_8006351C** (11 entries) for type 2, kinds < 0xB, +4 >= 0, +0x20 != 0. Sprite
fields (0x38): +4 attribute (bits 24-25 texture mode, 28-29 blend rate, 0x40000000 semi-transparent, 0x08000000 rotate,
0x40 raw texture, 0x1000 no lighting, 0x100 back-face cull), +8 position, +0xE tube depth (shapes), +0x10 rotation,
+0x18 scale, +0x1E ring / inner-disk control (shapes), +0x20 frame list (12-byte records, low byte 0xFF ends) or shape
record, +0x24 rgb, +0x27 CLUT row, +0x28 / +0x2A VRAM x / y of the texture, +0x2C OT depth bias (0x4000 add / 0xC000
subtract, low 12 bits), +0x2E / +0x30 / +0x32 offset, +0x34 a MATRIX pointer to follow (a model's matrix). The table's
contents are data (not in the checkout), so which kind each handler serves is only read from the bodies. A **shape**
record (0x40): rgb centre +0, rim +4, inner +8 / +0xC, then 12 points at +0x10.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8001D1C4 | func_8001D1C4 | DrawAllSprites | DrawSprite over the sprite slot groups, gated by Work+0xA3E1 bits | H | c23F0: groups 0x800B5BD8 (4), D_800B5CB8 (2), D_800B5D28 (16), D_800B60A8 (40), D_800B6968 (64), D_800B7768 (130) |
| 0x8001D388 | func_8001D388 | DrawSprite | visible type-2 sprite with data, kind < 0xB: D_8006351C[kind](o, count) | H | c23F0; 6 calls from DrawAllSprites; decomp_recipes "give the callee the real parameter" |
| 0x8001D3FC | func_8001D3FC | (skip) | INCLUDE_ASM sprite drawer, body not in C | - | c23F0; no caller (a table entry) |
| 0x8001D70C | func_8001D70C | SetSpriteMatrix2D | GTE rotation = RotMatrix(+0x10) scaled by +0x18 / +0x1A, translation = +8 (no world-to-screen) | M | c23F0; DrawShape2D uses it then takes rtv0tr results as screen x / y |
| 0x8001D8C4 | func_8001D8C4 | TransformSpriteQuad2D | the 4 corners of a frame (offset + frame x / y, w / h) through rtv0tr into a POLY_FT4's xy | M | c23F0; no caller (likely a helper of the asm func_8001D3FC) |
| 0x8001DA34 | func_8001DA34 | DrawSprite3D | per frame a POLY_FT4 (0x28) in world space, perspective (ProjectSpriteQuad), NCCS-lit colour unless attr & 0x1040, linked at OTZ + bias | M | c23F0 body; table handler. The light matrix comes from D_800A63F0 times the sprite (or +0x34) rotation |
| 0x8001E094 | func_8001E094 | SetSpriteMatrixLinked | GTE = Work.wsm x (the +0x34 matrix scaled by +0x18) | H | c23F0; DrawSprite3D / DrawShape3D when +0x34 != 0. stg: 11 / 11 (`func_8001E094()`, a0 passed through) |
| 0x8001E378 | func_8001E378 | SetSpriteMatrix | GTE = Work.wsm x (RotMatrix(+0x10) scaled, translation +8) | H | c23F0; the else branch of the same two; stg: 11 / 11 `func_8001E378(o)` |
| 0x8001E668 | func_8001E668 | ProjectSpriteQuad | RTPT + RTPS the frame's 4 corners into the packet, flags out, returns the AVSZ4 OTZ | H | c23F0; DrawSprite3D |
| 0x8001E7E0 | func_8001E7E0 | DrawSpriteFast | per frame a GsSPRITE at screen +8 / +0xA (+ offsets), GsSortFastSprite into the world OT at +0x2C priority | H | c23F0 body; table handler |
| 0x8001EA14 | func_8001EA14 | DrawSpriteBillboard | project +8 once, then per frame a screen-aligned POLY_FT4 sized by scale (kind 3: perspective through sz), rotated when attr & 0x08000000 | M | c23F0 body (`if (kind == 3)`, RotateQuadAround); table handler |
| 0x8001EFE0 | func_8001EFE0 | (skip) | INCLUDE_ASM ("a 470-insn object drawer", decomp_recipes) | - | c23F0 |
| 0x8001F730 | func_8001F730 | RotateQuadAround | rotate a POLY_xT4's four screen points about a centre by RotMatrixZYXFast(angles) | H | c23F0; DrawSpriteBillboard; stg 1 / 1 `func_8001F730(p, &s[0], pk)` |
| 0x80021284 | func_80021284 | DrawShape2D | 12-point disk in screen space (SetSpriteMatrix2D): 6 POLY_G4, centre / rim colours, DR_MODE when semi-transparent | M | c23F0 body; table handler (reads +0x2E.. offsets and +0x2C depth of a sprite) |
| 0x800215F4 | func_800215F4 | DrawShape3D | 12-point disk in world space (SetSpriteMatrix / Linked), optional cull (attr 0x100), per-segment OTZ; a tube when +0xE != 0 | M | c23F0 body; calls EmitShapePrims or EmitShapeTubePrims; table handler |
| 0x80021D38 | func_80021D38 | DrawShapeProjected | the disk at a projected point (or at screen +8 when attr & 0x40000), scaled by depth | M | c23F0 body; EmitShapePrims; table handler |
| 0x800221A8 | func_800221A8 | DrawShapeModel | model kind 4: coord from RotMatrixZYX + ScaleMatrix + GsGetLs, cull, the disk at the origin plus the +0x74 offset | M | c23F0 body (model fields +0x34 / +0x54 / +0x78); +0x74 is only written by InitShapeModel |
| 0x800226C0 | func_800226C0 | EmitShapePrims | the disk (6 POLY_G4) or, with +0x1E & 0x1FFF = inner ratio, a ring (12 POLY_G4) plus an inner fill (0x4000); DR_MODE for semi-transparency | H | c23F0 body; 4 calls (DrawShape3D x2, DrawShapeProjected, DrawShapeModel) |
| 0x80023138 | func_80023138 | EmitShapeTubePrims | 12 POLY_G4 between the near and far rings (the side wall), rim / centre colours | M | c23F0 body; DrawShape3D when +0xE (depth) != 0 |
| 0x800233CC | func_800233CC | SetShapeCircle | fill a shape's 12 points (+0x10) with a circle of radius r (30-degree steps, one quadrant mirrored) | H | c23F0 body. stg: 252 / 90, stage 10 / 3, abil 13 / 9: `func_800233CC(p, 0x100)` (28), `(p, 0x38)` (27), after InitShapeSprite* |
| 0x800234E4 | func_800234E4 | SetShapeCircleAt | the same from a start angle a | H | c23F0 body. stg: 2 / 1 `func_800234E4(s, 0x100, a->+0xFE)` |
| 0x80023570 | func_80023570 | DrawTileList | per record {rgb, end, x, y, w, h} a TILE (0x60, 0x62 semi) at the sprite's +8 / +0xA, OT entry +0x2C, a DR_MODE for the blend rate when semi-transparent | H | c23F0 body; table handler |
| 0x8002374C | func_8002374C | DrawPrimList2D | a 0x1C-byte record list of TILE (0x60), POLY_G4 (0x38), POLY_G3 (0x30) moved by +8 - +0x2E, each with a DR_MODE; returns when +4 < 0 | H | c23F0 body; table handler (r272 cites its +4 bit-31 test for ShowModel / HideModel) |
| 0x80023BF0 | func_80023BF0 | (skip) | INCLUDE_ASM ("registers only, switch tree match") | - | c23F0 |

### Glyph strings (used by the kind-8 text sprites)

A glyph string is an s16 list ending in -1: a glyph code per character, with 0x1858 / 0x1850 prefixes for the two
special ranges (bits 15-14 of the table value). D_80063818 / D_800636D8 / D_80063770 map Shift-JIS second bytes to
glyphs (lead bytes 0x81 / 0x82 / 0x83), D_80063870 holds the powers of ten.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80024054 | func_80024054 | SjisToGlyphs | convert a Shift-JIS string (lead 0x81-0x83) into a glyph list; returns minus 4 x the plain glyph count (a width) | M | c23F0 body. stg: 40 / 23, stage 13 / 3: `func_80024054(text, buf)` then func_800D2650 (text draw) or InitTextSprite(o, buf) |
| 0x800241C0 | func_800241C0 | FormatNumberGlyphs | n-digit number, blank glyph (D_80063818[0]) for leading zeros, digits from D_800636D8 | M | c23F0 body; no caller in src |
| 0x800242D0 | func_800242D0 | FormatDigitGlyphs | number to `flags & 0xFFAF` digits from D_80063858 with leading zeros; flags & 0x80: 4 digits with the separator D_8006386C after two (a time) | M | c23F0. stage 4 / 1, stg 4 / 2: `func_800242D0(t / 30, &buf, 2)`, `(time, &buf, 0x84)` then InitNumberSprite |

### Model sorters and polygon packet builders

Model kind 5 is sorted by the game's own GsSortObject4 replacement: func_800243EC(obj (GsDOBJ2), ot (GsOT), shift) keeps
the attribute in **D_80078D88** and its bits 28-30 in **D_800A2B78** (the blend rate), then walks the TMD object
(obj+8: verts +0, normals +8, prims +0x10, count +0x14) and calls one builder per run of primitives by TMD mode byte
(0x20 F3, 0x24 FT3, 0x28 F4, 0x2C FT4, 0x30 G3, 0x34 GT3, 0x38 G4, 0x3C GT4; flag bit 2 = per-vertex colours; mode
bit 0 = no lighting). Every builder has the signature `(prim, verts, norms, pkt, n, shift, ot)` and returns the next
packet address: RTPT, flag test, NCLIP back-face cull, AVSZ3 / AVSZ4 (or the largest SZ when D_80078D88 & 0x8000),
NCCS / NCCT for lit colours, OT link at z >> shift, and for the untextured ones a DR_MODE (0xE1, rate from D_800A2B78)
after a semi-transparent packet. Names: Draw + the GPU packet emitted + the TMD source when it differs (Grad = TMD
per-vertex colours on a flat polygon) + Lit (NCCS / NCCT) or none (TMD colour copied). Textured lit ones load a fixed
colour (D_8006387C FT3, D_80063880 FT4, D_80063884 GT3, D_80063888 GT4). Model kind 1 (Musashi, GsDOBJ5) draws its
first two visible parts through func_80027BF0, which writes G3 / G4 into the double-buffered preset packet area.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800243EC | func_800243EC | SortTransObject | GsSortObject4 replacement: D_80078D88 = attr, D_800A2B78 = rate; attr & 0x40 (GsLOFF): the unlit sorter, else the lit one | M | c23F0; DrawTmdModel kind 5 with the GsSortObject4 arguments `(&obj, ot, 0)`. "Trans" from the per-object blend rate and InitTransModel's callers |
| 0x80024448 | func_80024448 | SortTransObjectLit | the lit dispatch over TMD primitive runs (all 8 modes, plus the env-map G3 / G4 when attr & 0x10000 / 0x20000) | H | c23F0 body; func_800243EC. The C names its arguments (obj, cam, shift), but the second is the GsOT: `*(u32 **)(cam + 4)` is GsOT.org |
| 0x800249F0 | func_800249F0 | DrawPolyF3Lit | POLY_F3 (len 4, 0x14), one NCCS colour; TMD F3 (16 bytes) | H | c23F0: `\| 0x04000000`, pk += 0x14, gte_nccs; SortTransObjectLit mode 0x20 |
| 0x80024BC0 | func_80024BC0 | DrawPolyF4Lit | POLY_F4 (len 5, 0x18); TMD F4 (20 bytes) | H | c23F0: `\| 0x05000000`, avsz4, nccs; mode 0x28 |
| 0x80024DE8 | func_80024DE8 | DrawPolyF3GradLit | POLY_G3 (code 0x30, len 6) from a TMD F3 with three colours (24 bytes), three NCCS | H | c23F0: `pk[7] = .. \| 0x30`, nccs x3; mode 0x20 with flag 4 |
| 0x80025000 | func_80025000 | DrawPolyF4GradLit | POLY_G4 (code 0x38, len 8) from a TMD F4 with four colours (32 bytes) | H | c23F0: `\| 0x38`, nccs x4, `\| 0x08000000`; mode 0x28 with flag 4 |
| 0x8002528C | func_8002528C | DrawPolyG3Lit | POLY_G3 (len 6, 0x1C), NCCT; TMD G3 (20 bytes) | H | c23F0: ncct, `\| 0x06000000`; mode 0x30 |
| 0x80025504 | func_80025504 | DrawPolyG4Lit | POLY_G4 (len 8, 0x24), NCCT + NCCS; TMD G4 (24 bytes) | H | c23F0; mode 0x38 |
| 0x80025818 | func_80025818 | DrawPolyG3GradLit | POLY_G3 from a TMD G3 with three colours (28 bytes), NCCS per vertex | H | c23F0: nccs x3, `\| 0x30`; mode 0x30 with flag 4 |
| 0x80025A30 | func_80025A30 | DrawPolyG4GradLit | POLY_G4 from a TMD G4 with four colours (36 bytes) | H | c23F0: nccs x4, `\| 0x38`; mode 0x38 with flag 4 |
| 0x80025CBC | func_80025CBC | DrawPolyFT3Lit | POLY_FT3 (len 7, 0x20), NCCS of the fixed colour D_8006387C; TMD FT3 (24 bytes) | H | c23F0: `\| 0x07000000`, pk += 0x20; mode 0x24 |
| 0x80025EB8 | func_80025EB8 | DrawPolyFT4Lit | POLY_FT4 (len 9, 0x28); TMD FT4 (32 bytes) | H | c23F0: `\| 0x09000000`, pk += 0x28; mode 0x2C |
| 0x80026128 | func_80026128 | DrawPolyGT3Lit | POLY_GT3 (len 9, 0x28), NCCT; TMD GT3 (28 bytes) | H | c23F0: ncct, `\| 0x09000000`; mode 0x34 |
| 0x800262D8 | func_800262D8 | DrawPolyGT4Lit | POLY_GT4 (len 0xC, 0x34), NCCT + NCCS; TMD GT4 (36 bytes) | H | c23F0: `\| 0x0C000000`, pk += 0x34; mode 0x3C |
| 0x80026514 | func_80026514 | DrawPolyG3EnvMap | TMD G3 drawn as POLY_GT3 with uv = screen xy / 2 + a scroll (Work+0xA3AA), 32 x 32 window of texture D_8006388C[idx], CLUT row D_8006389C[idx] | M | c23F0 body; mode 0x30 when attr & 0x10000 (idx 0, the polygon colour) or 0x20000 (idx 1, D_80063884). "EnvMap" reads the screen-space uv |
| 0x800268D0 | func_800268D0 | DrawPolyG4EnvMap | the same for TMD G4 into POLY_GT4 | M | c23F0; mode 0x38 with the same attr bits |
| 0x80026D64 | func_80026D64 | SortTransObjectUnlit | the unlit dispatch (mode & 0xFD): F3 / F4 (plain and Grad), FT3 / FT4 with mode bit 0; lit textured and G modes skipped | H | c23F0 body; func_800243EC when attr & 0x40 |
| 0x80027058 | func_80027058 | DrawPolyF3 | POLY_F3, the TMD colour word copied (no lighting) | H | c23F0: `*(pkt + 4) = *(p + 4)`, no NC*; mode 0x20 |
| 0x80027200 | func_80027200 | DrawPolyF4 | POLY_F4 unlit | H | c23F0: `\| 0x05000000`, no NC*; mode 0x28 |
| 0x800273F4 | func_800273F4 | DrawPolyF3Grad | POLY_G3 from the TMD F3's three colours, unlit | H | c23F0: `\| 0x30`, `\| 0x06000000`, no NC*; mode 0x20 flag 4 |
| 0x800275BC | func_800275BC | DrawPolyF4Grad | POLY_G4 from the TMD F4's four colours, unlit | H | c23F0: `\| 0x38`, `\| 0x08000000`; mode 0x28 flag 4 |
| 0x800277DC | func_800277DC | DrawPolyFT3 | POLY_FT3 from a TMD FT3 without lighting (mode 0x25, 28 bytes), max-SZ depth when D_80078D88 & 0x8000 | H | c23F0: `\| 0x07000000`, stsz3; SortTransObjectUnlit case 0x25 |
| 0x800279AC | func_800279AC | DrawPolyFT4 | POLY_FT4 from a TMD FT4 without lighting (mode 0x2D, 32 bytes) | H | c23F0: `\| 0x09000000`, stsz4; case 0x2D |
| 0x80027BF0 | func_80027BF0 | SortPresetObjectG | calls func_80027C10 with its own arguments (K&R pass-through) | M | c23F0; DrawTmdModel kind 1 for the first 2 parts `(&obj, ot, 0)`, GsSortObject5 for the rest |
| 0x80027C10 | func_80027C10 | SortPresetObjectGBody | walk a GsDOBJ5's preset packet blocks (tag, count) and rebuild G3 / G4 blocks (other modes left as preset) | M | c23F0 body; code_8002C8BC.c:274 also declares it |
| 0x80027D20 | func_80027D20 | DrawPresetPolyG3Lit | POLY_G3 written in place in the preset area (this frame's half: + g_BufferIndex x 0x1C, stride 0x38), NCCT, depth from the nearest vertex ((min SZ >> 2) - 1) | H | c23F0 body; decomp_recipes r175 "27D20/27F4C with the func_80028200 call and z = (min >> 2) - 1" |
| 0x80027F4C | func_80027F4C | DrawPresetPolyG4Lit | the same for POLY_G4 (+ index x 0x24, stride 0x48) | H | c23F0 body |
| 0x80028200 | func_80028200 | AddPrimAtDepth | link a packet into OT entry z >> shift with the length tag given | H | c23F0: `*prim = (*e & 0xFFFFFF) \| tag; *e = prim & 0xFFFFFF`; the two preset builders |

### Lights, fog and the libgs set-up tables

Three flat lights kept in **D_800A5E88** (3 x LightDir = GsF_LIGHT, 0x10 each: vx, vy, vz, r, g, b), always pushed to
libgs through func_80028620; the ambient colour is kept in **D_800AE7E0 / E2 / E4** (s16 r, g, b) so the per-part back
colour code can restore it. Init3DScene sets ambient 0x800 x3 (func_8002850C) and the default lights (func_8002823C).
Stage code mostly writes D_800A5E88 directly and then calls func_80028620 (177 of its 219 stg calls pass
`&D_800A5E88[..]`).

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80028234 | func_80028234 | (skip) | empty function | - | c23F0 |
| 0x8002823C | func_8002823C | InitLights | lights 0-2 = direction (0x800, 0x800, 0), colour 0x20 x3, each applied | H | c23F0; Init3DScene |
| 0x800282FC | func_800282FC | (skip) | empty function | - | c23F0 |
| 0x80028304 | func_80028304 | SetLight | light id (< 3): direction and colour stored in g_Lights and applied | H | c23F0 body; no caller in src |
| 0x80028394 | func_80028394 | MoveLightDir | light id (< 3): direction += (dx, dy, dz), applied | H | c23F0. stg: 6 / 2 `func_80028394(1, 0, 0xA, 0x14)` |
| 0x80028428 | func_80028428 | SetLightColor | light id (< 3): colour = r, g, b, applied | H | c23F0. stg: 7 / 3 `func_80028428(0, 0x96, 0x96, 0xAA)` |
| 0x80028488 | func_80028488 | ClearLight | light id (< 3): black, direction (0, 0, 0x64) | H | c23F0 body; no caller in src |
| 0x8002850C | func_8002850C | SetAmbientColor | remember r, g, b in D_800AE7E0.. and GsSetAmbient | H | c23F0; Init3DScene `(0x800, 0x800, 0x800)`. stg: 120 / 28, stage 2 / 2 (sc02_000 fades D_800AE7E0[0] += 3 then calls it) |
| 0x80028558 | func_80028558 | SetLightColorUnchecked | SetLightColor without the id < 3 test | M | c23F0. stg: 3 / 3 `func_80028558(0, p->+0x20F, p->+0x211, p->+0x213)` |
| 0x800285AC | func_800285AC | DisableFog | GsSetLightMode(0) | M | c23F0; stage 1 call. Mode 0 = normal lighting, 1 = with fog (libgs) |
| 0x800285CC | func_800285CC | EnableFog | GsSetFogParam(D_800C6D18: dqa -0x106, dqb 0x01F40000, colour 0) and GsSetLightMode(1) | H | c23F0 body; no caller in src |
| 0x80028620 | func_80028620 | ApplyLight | copy a LightDir and GsSetFlatLight(id, it); a zero direction becomes (0x1000, 0, 0) black, so a "no light" entry is legal | H | c23F0 body + PORT NOTE. stg: 219 / 34, stage 10 / 3 (229 external); r272 ApplyDayLights calls it for lights 0-2 |
| 0x80028694 | func_80028694 | DebugMoveScreen | while Work+0xA3E5 == 0: pad 2 moves the display origin (D_80075818 / D_8007581C) with the d-pad, SetDefDispEnv 320 x 240 or 640 x 480; a button combo saves / restores the three display RECTs | M | c23F0 body (TestPadAll(1, ..), GetPadHeldDir(1)); no caller in src |
| 0x80028A30 | func_80028A30 | (skip) | empty function | - | c23F0 |
| 0x80028A38 | func_80028A38 | (skip) | empty function | - | c23F0 |
| 0x80028A40 | func_80028A40 | (skip) | empty function | - | c23F0 |
| 0x80028A48 | func_80028A48 | InitFCall4 | fill libgs' GsSortObject4 function table (D_800A2BC0..) with the GsTMDfast* sorters | H | c23F0 (PS1_FN_ADDR(GsTMDfastF3L).. 32 stores); ResetSystems. The PsyQ jt_init4 job |
| 0x80028C50 | func_80028C50 | InitFCall5 | fill the GsSortObject5 / preset table (D_800A2CF0..) with the GsPrst* functions | H | c23F0 (16 stores); ResetSystems right after InitFCall4 |

### Model, sprite and light globals

Reads counted over all of `src/` (non-extern lines, "N refs / F files"). Three of the most used are **Work fields
reached by absolute address**, not separate globals: they are listed with the field name to use (two exist already in
include/work.h, the others are new field names for work.h).

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800B9A02 | D_800B9A02 | Work.frame (existing field) | the double-buffer index, read as a bare global | H | 0x800AF630 + 0xA3D2 = work.h `frame`; 675 refs / 146 files (`g_WorldOtTable[D_800B9A02]` in every drawer) |
| 0x800A5E88 | D_800A5E88 | g_Lights | the three flat lights (LightDir[3]) | H | c23F0 InitLights, SetLight.., RestoreLights; 482 refs / 36 files (stage code writes it, then ApplyLight) |
| 0x800AF648 | D_800AF648 | Work.wsm (existing field) | world-to-screen matrix, read as a bare global | H | 0x800AF630 + 0x18 = work.h `wsm`; SetSpriteMatrix*, DrawSpriteBillboard; 362 refs / 68 files |
| 0x800A2B78 | D_800A2B78 | g_SortBlendRate | the sorted object's blend rate (attr bits 28-30) for the DR_MODE after semi-transparent packets | H | c23F0 SortTransObject; every builder `((D_800A2B78 & 3) << 5) \| 0xE100000A`; 30 refs / 2 files (also abil ovl28) |
| 0x800B9A11 | D_800B9A11 | Work.drawHideMask (new field at +0xA3E1, now unkA3E1) | bit n hides one slot group of models and sprites; == 1 skips both draws | H | c23F0 DrawModelsAndSprites, DrawAllModels / DrawAllSprites; 27 refs / 16 files |
| 0x800C7C74 | D_800C7C74 | g_BufferIndex | the frame's buffer half, toggled in main and copied to Work.frame | H | main.c:88-89 `D_800C7C74 = !D_800C7C74; w->frame = D_800C7C74`; the preset builders pick their packet half with it (also abil ovl28); 12 / 3 |
| 0x80078D88 | D_80078D88 | g_SortAttr | the attribute of the object being sorted (0x8000 depth from the farthest vertex, 0x10000 / 0x20000 env map) | H | c23F0 SortTransObject stores it, the builders test it; 11 refs / 1 file |
| 0x800AE7E0 | D_800AE7E0 | g_AmbientColor | the ambient r, g, b (s16 x3 to 0x800AE7E4) given to GsSetAmbient | H | c23F0 SetAmbientColor stores, RestoreAmbientNextPart reloads; stg sc02_000 / 003 fade [0]; 10 / 3 (+0x2, +0x4: 4 / 3 each) |
| 0x80063548 | D_80063548 | g_DefaultPose | the pose every model init sets at +0x20 | H | c23F0 InitModel / InitPresetModel / ..; stg 4 files set `model->pose = &D_80063548`; 9 / 5 |
| 0x80074818 | D_80074818 | g_PartLightMatrices | per-part light matrices (64 x MATRIX) | H | c23F0 CalcPartMatrices*: `lm` array, used when a model has 8+ parts; DrawTmdModel GsSetLightMatrix2(lp); 6 / 1 |
| 0x80075018 | D_80075018 | g_PartScreenMatrices | per-part local-screen matrices (64 x MATRIX, right after the light ones) | H | c23F0: `wm` array, GsSetLsMatrix(sp); CalcPlayerPartMatrices writes it as `o[64]`; 5 / 1 |
| 0x800A5BD0 | D_800A5BD0 | g_PresetObjs | GsDOBJ5 table (0x14 each) for the kind 1 / 8 models; Work+0x19C counts them | H | c23F0 InitPresetModel GsLinkObject5(.., D_800A5BD0 + n * 0x14); DrawTmdModel reads +8 / +0xC; 3 / 1 |
| 0x800AF7C8 | D_800AF7C8 | Work.presetPackets (new field at +0x198) | next free address of the preset packet area (GsPresetObject's base) | M | c23F0 InitPresetModel uses Work+0x198, InitPresetModelKind8 the same through D_800AF7C8; 2 / 2 |
| 0x800AF7CC | D_800AF7CC | Work.presetCount (new field at +0x19C) | GsDOBJ5 objects used; ClearObjectPools zeroes it | H | c23F0 (`*(s16 *)(w + 0x19C)` in ClearObjectPools / InitPresetModel) |
| 0x800AF8D8 | D_800AF8D8 | Work.models (new field at +0x2A8, ModelObj[0xC0]) | the model pool | H | c23F0 ClearObjectPools / AllocModelInRange (`w + 0x2A8 + a * 0x84`) |
| 0x800B5BD8 | (none; 0x800B9A11 - 0x3E39) | Work.sprites (new field at +0x65A8, 0x38-byte x 0x100) | the sprite pool | H | c23F0 ClearObjectPools / AllocSpriteInRange (`w + 0x65A8 + a * 0x38`) |
| 0x8006351C | D_8006351C | g_SpriteDrawFuncs | 11 sprite draw handlers by kind | H | c23F0 DrawSprite `D_8006351C[k](a, x)`, k < 0xB |
| 0x80063500 | D_80063500 | g_ModelDrawFuncs | 9 model draw handlers by kind | H | c23F0 DrawModel `D_80063500[kind](o)`, kind < 9 |
| 0x800AE688 | D_800AE688 | g_ViewMatrix | the camera's world-to-screen matrix as libgs keeps it (perhaps libgs GsWSMATRIX) | M | c23F0 IsPointOnScreen sets GTE from it; stage engine.c:992 `w->wsm = D_800AE688`; 3 / 2 |
| 0x800A63F0 | D_800A63F0 | g_LightMatrix | the light-direction matrix multiplied into DrawSprite3D's SetLightMatrix (perhaps libgs GsLIGHTWSMATRIX) | M | c23F0 DrawSprite3D only; 2 / 1 |
| 0x80062BA8 | D_80062BA8 | g_SortScratch | the scratch argument DrawTmdModel gives GsSortObject4 / 5 | M | c23F0 `scratch = D_80062BA8; GsSortObject4(&obj, ot, 0, scratch)`; 1 / 1 |
| 0x800636D4 | D_800636D4 | g_SinCosTable | pointer to the 4096-entry {sin, cos} word table | H | c23F0 RotMatrixZYXFast comment ("low half is sin and high half is cos, 4.12") |
| 0x8006387C | D_8006387C | g_ColorFT3 | fixed colour (with code byte) loaded for lit FT3 (0x80063880 FT4, 0x80063884 GT3, 0x80063888 GT4 the same) | M | c23F0 gte_ldrgb(&D_8006387C) in DrawPolyFT3Lit, 80 in FT4, 84 in GT3 / G3EnvMap idx 1, 88 in GT4 / G4EnvMap; abil ovl28 too |
| 0x8006388C | D_8006388C | g_EnvMapTex | 2 x 8-byte texture records (VRAM u / v) for the env-map builders; 0x8006389C = g_EnvMapClut (their CLUT rows) | M | c23F0 DrawPolyG3EnvMap / G4EnvMap `tp = D_8006388C + idx * 8`, `b = D_8006389C[idx]` |
| 0x800C6D18 | D_800C6D18 | g_FogParam | GsFOGPARAM (dqa s16, dqb s32 at +4, colour at +8 / +0xA) | H | c23F0 EnableFog fills it and calls GsSetFogParam(fp) |
| 0x80063870 | D_80063870 | g_Pow10 | powers of ten indexed by digit position | H | c23F0 FormatNumberGlyphs / FormatDigitGlyphs divide by D_80063870[i] |
| 0x80075818 | D_80075818 | g_ScreenOfsX | display x origin (0x8007581C = g_ScreenOfsY) moved by DebugMoveScreen | M | c23F0 SetDefDispEnv(.., D_80075818, D_8007581C, ..); 5 / 1 each |

## Sound driver, CD audio and the sequencer (0x8002C8BC-0x8003A443)

From a helper pass over src/code_8002C8BC.c (checked here against the C for the key claims: the request routing, PlayXa,
the g_SoundSlot base). "c410" = src/code_8002C410.c. No asm is in the tree, so the
four INCLUDE_ASM functions (func_80032A74, func_8003388C, func_80035270, func_80038698) are named from their callers only.

Overall picture. The driver has three layers:

* **Request API.** `func_8002D4C8(id, arg)` (2855 calls in 158 files) and `func_8002D59C(id, arg, owner)` (79 calls)
  route by id: `< 0x80` is a driver command (`func_8002E138`, a 43-case switch), `0x100..0x3FF` is a BGM (sequence)
  start (`func_8002D904`), `>= 0x400` is a sound effect (`func_8002DC68`). The arg of an SFX is a packed word:
  `0x1000` = volume given in bits 0-6, `0x2000` = pan given in bits 8-11, `0x4000` = update a playing instance only
  (do not start), `0x8000` internal. `owner` becomes the high half of the id so one object's instance can be stopped or
  updated alone (callers pass `AF(o, u16, 0x70)`). During a request `D_800A4F17` is set so the VSync tick defers the
  SFX update (`D_800A4F18` records a deferred tick, which the request runs on exit).
* **SFX engine (own code, not libsnd).** `g_SoundChan[0..7]` are SFX *tracks* (0x54 each; +0 type 1 = plain SFX or
  5 = scripted SFX, +2 priority, +4 id, +6 owner, +8 retrigger lock, +0xC voice count, +0xE..0x15 voice-in-use flags);
  `g_SoundChan[8..15]` are the 8 SFX *voices* (SPU voices 16-23; +0 key-on delay, +0xA SPU voice, +0x14 pitch-envelope
  record, +0x24 pitch, +0x34 volume index, +0x35 pan, +0x37 slide flags, +0x40 end callback, +0x48 volume, +0x4E state).
  `D_800A4C28` (= `&g_SoundChan[16]`) holds one SpuVoiceAttr per SFX voice (0x48 each: +0x40 voice, +0x44 dirty,
  +0x45 fast-release). Key-on/off and reverb on/off are queued as voice bits (`D_80073140[v]` = 1<<v) in
  `D_800C7D20` / `D_800A2B98` / `D_800C7D2C` / `D_800A2BA0` and flushed once per tick.
* **BGM sequencer (own SMF-style player).** Two players at `D_800B9CD8` (0x1FC each: +0 read pointer, +4 start,
  +8 delta wait, +0x10 volume, +0x12 fade layer {cur, step, target, active}, +0x1A 16 MIDI channels of 0x1A,
  +0x1BA 16 channel-mute bytes, +0x1CC/0x1D0/0x1D4 tempo accumulator, +0x1E4 BPM, +0x1F0 id, +0x1F2 song volume,
  +0x1F4 fade active, +0x1F5 loop count, +0x1F7 running status, +0x1F9 end flag, +0x1FA playing, +0x1FB in use) drive
  SPU voices 0-15 through `D_800C6DD0` (16 x 0x60, SpuVoiceAttr at +0x10). Events are MIDI status nibbles 8..F with
  a 1-byte pitch bend, CC 7 / 10 / 6 (data entry) / 0x62 / 0x63 (NRPN) for reverb, loops and song-switch markers,
  and meta 0x51 tempo / 0x2F end.

Side systems in the same file: the sound-bank (VAB) loader feeding SPU RAM slots (`g_SoundSlot`, really based at
0x800A463C, see "Found along the way"), the SPU-transfer owner token (`D_800BA0F8`), the 4-entry CD-audio request
ring (`D_80076118`, run by `func_8003500C` from main) for XA voice clips and CD-DA tracks, and the streamed BGM loader
(`func_800363CC`) that reads a ".sqv" sequence+VAB file sector by sector into `D_800BA320` and SPU RAM.

### Sound requests (public API) and commands

`func_8002D4C8` / `func_8002D59C` are the two entry points; `func_8002E138` is the command switch (ids 1-42, e.g.
main.c ApplySoundOptions sends 0x21 music volume, 0x22 SFX volume, 0xB / 0xC mono / stereo; stages send 0x1C then
0x1D around a map change and 4 = stop SFX). SFX ids index `D_8006451C` (4 bytes per id: type | 0xC0 flags, table
group (0 = global, else the stage table id), table index, entry index); type 6 is an alias resolved through the stage
table set by `func_8002F5C8`.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002D4C8 | func_8002D4C8 | PlaySound | Main sound request: id < 0x80 command, 0x100-0x3FF BGM, >= 0x400 SFX with packed vol/pan arg | H | c8BC: routes to func_8002E138 / func_8002D904 / func_8002DC68; 2855 calls, e.g. main ApplySoundOptions(0x21..), stages (0x472, 0) |
| 0x8002D59C | func_8002D59C | PlaySoundFor | Same as PlaySound with an owner id in the high half (per-object instance) | H | c8BC: func_8002DC68(id \| c<<16, b); stages: (4, 0x609, AF(o,u16,0x70)) stop then (0x609, vol\|0x1000, owner) |
| 0x8002D678 | func_8002D678 | PlaySfxHandle | Start an SFX only, return (track+1) \| id<<16 as a handle | M | c8BC: only id >= 0x400 path; r \|= id<<16; no callers in C |
| 0x8002D6D8 | func_8002D6D8 | StopSfxHandle | Stop the SFX track named by a PlaySfxHandle handle if it still plays that id | M | c8BC: a>>16 = id, a&0xFFFF = track+1; checks g_SoundChan[a].unk4 == id then func_8003324C |
| 0x8002CCB4 | func_8002CCB4 | StopAllSound | PlaySound(2, 0): stop BGM, SFX, timers | H | c8BC: body is func_8002D4C8(2, 0); same call in c23F0 func_80015144 |
| 0x8002E138 | func_8002E138 | DoSoundCommand | Driver command switch for ids 1-42 (fade, stop, mono/stereo, volumes, pause, duck, BGM switch) | H | c8BC: 43-case switch; 0x21/0x22 set D_800A4EF8/D_800A4EFA from D_8006A994; 0xB/0xC CdMix |
| 0x8002DC68 | func_8002DC68 | PlaySfx | Start an SFX by type from D_8006451C (1 single, 7/9 poly, 8 per owner, 5 scripted, 2 special, 11/12/17 merged) | H | c8BC: switch (*p & 0x3F) to func_80032048/800324A4/80032774/80034314/8002F248; returns track+1 |
| 0x8002EED8 | func_8002EED8 | StopSfx | Stop an SFX id (owner in high half) by its type | H | c8BC: command 4; type 5 -> func_800346D0, others -> func_80033398, 17 -> volume 0x1000 |
| 0x8003491C | func_8003491C | ReleaseSfx | Ask a scripted SFX (type 5) to end its loop (sets track[0x16]) | M | c8BC: command 13; type 5 tracks with matching id/owner get c[0x16] = 1 |
| 0x8002D904 | func_8002D904 | PlayBgm | Start BGM id 0x100+: open a sequence on the music VAB, resume a suspended one, unlock 0x134's extra tracks | H | c8BC: D_80068B5C[k*8] slot, func_80038210 open, func_8003834C/80038308 play; called for 0x100-0x3FF and cmd 39 |
| 0x8002DF80 | func_8002DF80 | FlushMergedSfx | Once per frame play the SFX merged during the frame (hit counts -> 0x710-0x712, loudest 0xA75) | M | c8BC: D_8006A980 bits from PlaySfx types 11/12; func_8002DC68(0x710..0x712), (0xA75, vol\|0x1000) |
| 0x8002F248 | func_8002F248 | PlaySpecialSfx | SFX type 2: random variant pick (rand seed D_800A4EEC), 0x95C pitch bend up/down, paired SFX | M | c8BC: switch a[3]: LCG 0x41C64E6D, ids 0x67B/0x67C/0x689, 0xAFD-0xAFF, 0xB06+0xB07 |
| 0x8002F714 | func_8002F714 | SetLoopSfxLevel | SFX type 17: store one of 4 sources' level for the shared loop 0xBEB and arm the frame hook | M | c8BC: D_800760D0..DC = v&0x7F, D_8006A96E bits, D_800A4F24 = func_8002F80C |
| 0x8002F80C | func_8002F80C | UpdateLoopSfx | Frame hook: play 0xBEB at the loudest source level, stop it 16 frames after all sources go | M | c8BC: max of D_800760D0..DC; func_8002DC68(0xBEB, m\|0x1000) / command 4 0xBEB |
| 0x8002F4E4 | func_8002F4E4 | ResolveSfxAlias | Map a type-6 SFX entry to a real id through the stage table (D_800A4EE8) and loaded bank | M | c8BC: reads tbl+2/4/8/0xC/0x10 rows; 0x7F = none; used by PlaySfx/StopSfx/ReleaseSfx |
| 0x8002F5C8 | func_8002F5C8 | SetStageSfxTable | Install the stage's SFX alias / definition table (id in its first halfword) | H | c8BC: D_800A4EF0 = *p, D_800A4EE8 = p; ovl36 calls it with D_800C8514.. per stage |
| 0x8002F620 | func_8002F620 | ClearStageSfxTable | Drop the stage SFX table and release the SFX it started | M | c8BC: D_800A4EF0 = 0; func_80031D70 |
| 0x8002F648 | func_8002F648 | GetStageSfxTableId | Return the stage SFX table id | M | c8BC: return D_800A4EF0; no C callers |
| 0x8002D80C | func_8002D80C | GetSwitchedBgm | Return the BGM id last started at a song-switch marker (0 if no BGM) | M | c8BC: D_8006A990 if D_800A4E8E & 1; sc06_025 compares it to the expected song |
| 0x8002D834 | func_8002D834 | ClearSwitchedBgm | Clear that id | M | c8BC: D_8006A990 = 0; sc06_025 before queueing |
| 0x8002D844 | func_8002D844 | SetCustomBgmData | Set the sequence data used by BGM 0x18E | H | c8BC: D_800760E0 = v; PlayBgm uses D_800760E0 for 0x18E; sc07_007 copies data to 0x801F0000 then PlaySound(0x18E) |
| 0x8002D7FC | func_8002D7FC | SetMusicData | Set the base of the loaded music file (sequence offsets table) | M | c8BC: D_800A4E7C = a; func_800373D0 passes D_800BA320; PlayBgm reads D_800A4E7C + offset |
| 0x8002D7F4 | func_8002D7F4 | SoundNop | Empty function | L | c8BC: empty body; no callers |
| 0x8002D4B8 | func_8002D4B8 | IsCdFadeOut | Return the CD-audio fade-out flag | M | c8BC: return D_800A46BA; set by func_8002E638, cleared by func_8002D29C |

### Commands: music, mixing and pause helpers

`D_800A4E8E` is the BGM state (1 playing, 2, 4 opened, 8 sequencer active, 0x10 paused, 0x20 music file loaded,
0x100 resumable); `D_800A4EA2` / `D_800A4E9A` / `D_800A4EA0` keep a suspended resumable BGM (flags, player, index).
Ducking: `D_800A4EE0` current BGM level (0x4000 full), `D_800A4EE4` target, `D_800A4EE2` step, `D_800A4EE6` flags
(1 moving, 2 duck 75%, 4 dim 50%); the VSync tick moves EE0 toward EE4.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002E638 | func_8002E638 | FadeOutMusic | Command 1: fade the BGM sequence, or if CD audio plays fade its serial volume | H | c8BC: BGM -> func_8002E700; else D_800A46B8 step from D_8006A99C, level 0xFFFF, D_800A46BA = 1 |
| 0x8002E700 | func_8002E700 | FadeOutBgm | Command 8: fade the playing sequence to 0 at speed table[n] and arm the stop timer | H | c8BC: func_8003819C(seq, 0, 0, D_8006A9BC[k]); D_800A4E8A = D_8006A9B0[k] |
| 0x8002D29C | func_8002D29C | StepCdFadeOut | Per-frame CD-audio fade: scale serial volume, stop music at 0 | H | c8BC: SsSetSerialVol(0, v*D_800A4EF4>>16); v -= D_800A46B8; at 0 func_8002EE90 |
| 0x8002EC10 | func_8002EC10 | StopBgm | Stop the BGM sequence (a resumable one is paused and kept as suspended) | H | c8BC: D_80068B66 & 1 -> func_800383A4 + save D_800A4EA2/9A/A0, else func_800384A8 + func_800385C0 |
| 0x8002ED90 | func_8002ED90 | StopBgmAll | Stop the BGM and close the suspended one too | M | c8BC: func_8002EC10 then func_800385C0(D_800A4E9A) if D_800A4EA2 & 4 |
| 0x8002EDE4 | func_8002EDE4 | StopAllMusic | Stop CD audio, all SFX, BGM and suspended BGM; reset ducking | M | c8BC: func_8002EE90, func_80031CC8, func_8002EC10, func_800385C0; D_800A4EE6 &= 0xF9 (command 2) |
| 0x8002EE64 | func_8002EE64 | StopMusicForBgm | Stop a CD-DA track (not an XA clip) and the BGM before a new BGM | M | c8BC: func_80036EB4 + func_8002EC10; first call of PlayBgm |
| 0x8002EE90 | func_8002EE90 | StopMusic | Stop all CD audio and the BGM | H | c8BC: func_80036EE8 + func_8002EC10; command 5; end of StepCdFadeOut |
| 0x8002EEB8 | func_8002EEB8 | StopCdAudioCmd | Command 22: stop all CD audio | M | c8BC: return func_80036EE8(); c23F0 func_8001BE30 sends 0x16 to abort a kind-5 load |
| 0x8002EA10 | func_8002EA10 | PauseBgm | Pause the BGM (stop it instead if a fade is running) | M | c8BC: func_800381E4 fade active -> func_8002EC10 else func_800383A4, flags \|= 0x10 |
| 0x8002EAB0 | func_8002EAB0 | ResumeBgm | Resume a paused BGM | M | c8BC: if flags & 0x10: func_80038308; flags = (f\|9)&~0x10 |
| 0x8002EB10 | func_8002EB10 | PauseMusic | Command 14: pause BGM and CD audio | M | c8BC: PauseBgm body inlined + func_80036F18 |
| 0x8002EBAC | func_8002EBAC | ResumeMusic | Command 15: resume CD track and BGM | M | c8BC: func_80036D58(0) (resume saved track) + ResumeBgm body |
| 0x8002E79C | func_8002E79C | DuckMusic | Command 18: lower BGM level to 0x2FFF at speed table[n] | M | c8BC: D_800A4EE4 = 0x2FFF, D_800A4EE2 = D_8006A9C8[n], flags \|= 3 |
| 0x8002E8DC | func_8002E8DC | UnduckMusic | Command 19: raise BGM level back to 0x4000 | M | c8BC: clears flag 2; D_800A4EE4 = 0x4000, D_8006A9E0[n] |
| 0x8002E818 | func_8002E818 | DimMusic | Command 20: lower BGM to 0x2000 (pausing BGM 0x13E) | M | c8BC: D_800A4EE4 = 0x2000, D_8006A9D4[n]; D_800A4E8C == 0x3E -> PauseBgm |
| 0x8002E94C | func_8002E94C | UndimMusic | Command 21: back to 0x4000 (resume 0x13E) | M | c8BC: D_8006A9EC[n]; 0x3E and paused -> ResumeBgm |
| 0x8002E5BC | func_8002E5BC | SetCdMono | CdMix all 0x5A (mono), stereo flag off | H | c8BC: CdMix {5A,5A,5A,5A}; D_800A4F19 = 0; command 11 (main ApplySoundOptions) |
| 0x8002E5F8 | func_8002E5F8 | SetCdStereo | CdMix {80,0,80,0}, stereo flag on | H | c8BC: CdMix; D_800A4F19 = 1; command 12 |
| 0x8002EFD0 | func_8002EFD0 | FadeOutLoopSfx | Command 28: release scripted SFX and fade flagged voices (sent before map changes) | M | c8BC: func_80034844 + func_80031B7C; stages call PlaySound(0x1C) then 0x1D around func_8001BFD0 |

### Init, per-frame / per-VSync driver, timers, reverb, movie audio

VSyncHandler (main.c) calls `func_8002CDD8` every vblank; main's frame loop calls `func_8003500C` then `func_8002D034`
after DrawOTag. `D_800A64B0` is 8 sound timers of 0xC bytes {countdown, sound id, callback}; `D_800A4F24` is a single
per-frame hook (loop-SFX merger, movie fade). Reverb: `D_800A4ECC` is a SpuReverbAttr (mask, mode, depth L/R);
depth values come from `D_8006ADD8[n]`.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002CDD8 | func_8002CDD8 | SoundVSync | VSync tick: count, start a queued BGM, move the duck level, read key status, tick the sequencer, run SFX unless a request holds the lock | H | main VSyncHandler; c8BC: D_800A4638++, D_800A4F22 -> func_8002D904, SpuRGetAllKeysStatus, func_80037FC4, func_8002CFE4 |
| 0x8002CFE4 | func_8002CFE4 | SfxTick | One SFX tick: mute timer, voices, flush to SPU, tracks | H | c8BC: D_800A4EFC--, func_80030F80, func_8002D320, func_80031BE0; same 4 lines inlined in every request's exit |
| 0x8002D034 | func_8002D034 | UpdateSound | Per-frame update: CD fade, timers, merged SFX, frame hook, delayed and fading reverb depth | H | main/c23F0/ovl39 frame loops; c8BC: D_800A64B0 callbacks, func_8002DF80, D_800A4F24, func_8002D240 |
| 0x8002CCD8 | func_8002CCD8 | ShutdownSound | Fade master volume and reverb out over 15 VSyncs, key off all, SsEnd, SpuQuit | H | c8BC: SpuSetKey(0, 0xFFFFFF), mvol i*0x3FF, SsEnd, SpuQuit; c23F0 func_8001BDA0 before ResetGraph/CdInit |
| 0x8002C8BC | func_8002C8BC | ClearBankMap | Set every bank-id -> slot entry (0x79 pairs at D_800C5328) to -1 | M | c8BC: loop i < 0x1E4 step 4 writes -1 to D_800C5328/D_800C532A; called by func_8002FAE0 |
| 0x8002CC4C | func_8002CC4C | ClearToneTables | Mark every cached tone (12-byte entries per bank slot) invalid | M | c8BC: for 4 slots, D_80065504[i] entries of D_8006A970[i], q[0xA] = 0 (the valid flag func_80030730 sets) |
| 0x8002D1F0 | func_8002D1F0 | SetReverbMode | SpuSetReverbModeParam with mask MODE and the given type, depth 0 | H | c8BC: D_800A4ECC = 1 (mask), D_800A4ED0 = mode; InitSound(4) |
| 0x8002D240 | func_8002D240 | SetReverbDepth | Set reverb depth L/R from table entry n and remember n | H | c8BC: mask 6, D_800A4ED4/6 = D_8006ADD8[n]; D_800A4E74 = n; bank 0x1A sets 0x28 |
| 0x8002D320 | func_8002D320 | FlushSfxVoices | Commit SFX voices to the SPU: fast release RR, key-off, reverb-off, dirty voice attrs, key-on, reverb-on | H | c8BC: SpuSetVoiceRR(v,1), SpuSetKey(0/1, bits & 0xFF0000), SpuNSetVoiceAttr, SpuSetReverbVoice |
| 0x8002EFF8 | func_8002EFF8 | QueueKey | Queue voice bits for key-on (mode 1) or key-off (else) | H | c8BC: mode 1: D_800A2B98 &= ~b, D_800C7D20 \|= b; else the reverse; flushed by FlushSfxVoices |
| 0x8002F064 | func_8002F064 | QueueReverb | Queue voice bits for reverb on (1) or off | H | c8BC: same shape on D_800A2BA0 / D_800C7D2C |
| 0x8002F0D0 | func_8002F0D0 | ClearSoundTimers | Clear the 8 sound timers | M | c8BC: zero D_800A64B0 + 0x54..0 step 0xC; commands 2, 3 |
| 0x8002F0F4 | func_8002F0F4 | AllocSoundTimer | Return a free sound timer or 0 | M | c8BC: first D_800A64B0[i] with unk0 == 0 |
| 0x8002F12C | func_8002F12C | PlayTimerSfx | Timer callback: play the SFX id stored in the timer | M | c8BC: func_8002DC68(*(a+4), 0); fits UpdateSound's call cb(p) |
| 0x8002D858 | func_8002D858 | InitMovieSound | Enable CD audio input at volume 100 for the logo movie / title | M | c8BC: D_800760E4 = 0x64, SsSetSerialAttr(0,1,0), SsSetSerialVol; ovl39 func_800CEF04 |
| 0x8002D8A8 | func_8002D8A8 | FadeOutMovieSound | Start a 16-frame CD-audio fade through the frame hook | M | c8BC: D_800760EC = 6, D_800A4F24 = func_8002FA3C; ovl39 on a pad press while the movie plays |
| 0x8002FA3C | func_8002FA3C | StepMovieFade | Frame hook: lower CD input volume by 6, mute and unhook after 16 frames | M | c8BC: D_800760E8++, SsSetSerialVol(0, v, v); D_800A4F24 = 0 |
| 0x8002D8D4 | func_8002D8D4 | StopMovieSound | Mute CD input and clear the frame hook | M | c8BC: D_800A4F24 = 0, SsSetSerialVol(0,0,0); ovl39 at every movie exit |
| 0x8003A424 | func_8003A424 | SpuInit | PsyQ libspu SpuInit (`_SpuInit(0)`), last function before _SpuInit | H | c8BC: body _SpuInit(0); InitSound calls it before SsInit |
| 0x8003A3D8 | func_8003A3D8 | SwapBytes32 | Byte-swap a 32-bit word | M | c8BC: shifts/masks build the reversed word; no callers |
| 0x8003A404 | func_8003A404 | SwapBytes16 | Byte-swap a 16-bit value | M | c8BC: (lo << 8) + hi; no callers |

### SFX tracks and SFX voices

SFX definitions: `D_80068304[table]` + index * 0x14 (global) or the stage table's +0x14 list (`D_800A4EE8`):
+0 priority, +0xC retrigger lock. Scripted SFX (type 5) use `D_80068A54` + index * 12 (or stage table +0x18):
+0 script, +4 priority, +6 lock, +8 flags; their track keeps three volume layers {cur, step, target, active} at
+0x1C / +0x24 / +0x2C and voice flags at +0x3A..0x41. A voice's pitch envelope record (+0x14) is a list of
u16 commands 0-10 (slide / delayed slide / relative slide / pan sweep) read at key-on and key-off.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80032048 | func_80032048 | PlaySfxSingle | Type 1 (and 13-16, 18): one instance per id/owner; restart or update the playing one | H | c8BC: func_800331D4 find, 0x4000 -> func_800335B8, else func_8003324C + start; func_8003310C alloc |
| 0x800322A8 | func_800322A8 | PlaySfxRestart | Type 10 first half: as PlaySfxSingle without the update path or quiet-priority halving | M | c8BC: same body minus 0x4000 update and prio >>= 1; PlaySfx case 10 then falls into case 8 |
| 0x800324A4 | func_800324A4 | PlaySfxPoly | Types 9 / 7: allow lim+1 instances, steal the quietest one (volume in track[0xB]) | H | c8BC: counts tracks with same id, lim 0 (type 9) or 1 (type 7); keeps lowest c[0xB]; 0x8000 if quieter |
| 0x80032774 | func_80032774 | PlaySfxPerOwner | Type 8: one instance per owner (update it), up to 2 owners, steal the quietest | M | c8BC: same id and owner -> update via func_800335B8 and return; cnt < 2 -> new track |
| 0x80032A74 | func_80032A74 | StartSfxTrack | Start a track's voices from its definition (asm) | M | c8BC: last call of all PlaySfx* after the track header (type, id, owner, prio, lock, c[0xA]=5) is set |
| 0x8003310C | func_8003310C | AllocSfxTrack | Return a free track+1 or steal the lowest-priority one if prio allows, else 0 | H | c8BC: g_SoundChan[0..7] unk0 == 0 free; min of +2; func_8003324C on the victim |
| 0x800331D4 | func_800331D4 | FindSfxTrack | Return track+1 playing a type-1 SFX id (owner in high half, 0 = any) | H | c8BC: (*c & 0x3F) == 1 && c+4 == id && (hi == 0 \|\| c+6 == hi) |
| 0x8003324C | func_8003324C | StopSfxTrack | Stop one track: key off its voices (type 1) or its script (type 5) | H | c8BC: clears voice flags, func_80030D80(v, 0); type 5 -> func_80034650 |
| 0x80033324 | func_80033324 | DetachSfxVoice | Drop voice k from type-1 track i; free the track when its count hits 0 | M | c8BC: (c+k)[0xE] = 0; --c[0xC]; c[0xA] != 5 -> free; likely a voice end callback |
| 0x80033398 | func_80033398 | StopSfxById | Stop every type-1/5 track playing an id (owner optional) | H | c8BC: loop with StopSfxTrack's body inlined; StopSfx for types 1, 7-16, 18 |
| 0x8003350C | func_8003350C | StopSfxTrackVoices | Key off a track's voices with the given mode (1 hard, 0 natural release) and free it | M | c8BC: func_80030D80(v, n) per flagged voice; c->unk0 = 0 |
| 0x800335B8 | func_800335B8 | SetSfxTrackVolPan | Update a playing track: 0x1000 volume to each voice, else 0x2000 pan offset | H | c8BC: q[0x48] = cmd & 0x7F, q[0x4F] = 1; or q[0x53] = cmd & 0x7F when the voice pans |
| 0x80030CA4 | func_80030CA4 | AllocSfxVoice | Return a free SFX voice+1 or steal the lowest-priority one | M | c8BC: g_SoundChan[8..15], free when q[0x46] (+0x4E) == 0; min priority at +8; func_80030D80(ch, 1) |
| 0x80030D80 | func_80030D80 | KeyOffSfxVoice | Stop one SFX voice: cancel a pending key-on, or queue key-off (n=1 fast RR, n=0 release pitch env), run its end callback | H | c8BC: QueueKey(0, bit), D_800A4C28[i].unk45 = 1, func_80031988, cb at +0x40 |
| 0x80030F80 | func_80030F80 | UpdateSfxVoices | Per tick for voices 16-23: key-on delays, end detection from key status, fade-out, pan sweep, volume/pan to attr, pitch | H | c8BC: keys = D_800A4EFE (SpuRGetAllKeysStatus), D_8007319E pan law, D_8006AA30 vol table, func_800314DC |
| 0x800314DC | func_800314DC | UpdateSfxVoicePitch | Advance a voice's pitch slide and write the SPU pitch (note table interpolation) | H | c8BC: +0x24 += +0x2C toward +0x28; D_8006AB30/32 lerp to attr+0x14, mask 0x10 |
| 0x800316F8 | func_800316F8 | StartSfxVoicePitchEnv | At key-on, set up the attack part of the voice's pitch envelope record | M | c8BC: switch p[0] 0-10 sets +0x28/+0x2C/+0x30/+0x3A/+0x3C/+0x12; called after QueueKey(1) in UpdateSfxVoices |
| 0x80031988 | func_80031988 | StartSfxVoiceReleasePitch | At key-off, start the release slide from the same envelope record | M | c8BC: reads the release fields per record type; called from KeyOffSfxVoice and the voice timeout |
| 0x80031A98 | func_80031A98 | StopOrphanSfxVoices | Hard-stop SFX voices whose bank slot was unloaded | M | c8BC: D_800C5328[bank].lo/hi < 0 -> func_80030D80(ch, 1); called after a slot is freed |
| 0x80031B7C | func_80031B7C | FadeOutFlaggedSfxVoices | Start a fade-out on active voices marked as looping (+0x4D) | M | c8BC: p[2] (+0x4C) = 1, +0x4A = 0x7FFF; UpdateSfxVoices lowers +0x4A by 0x220 |
| 0x80031BE0 | func_80031BE0 | UpdateSfxTracks | Per tick for the 8 tracks: count down locks, run scripted SFX | H | c8BC: type 1 c+8--, type 5 func_8003388C(c, i); skipped while D_800A4F17 is set |
| 0x80031CC8 | func_80031CC8 | StopAllSfx | Hard-stop every SFX track | H | c8BC: type 1 func_8003350C(i, 1), type 5 func_80034650(ch, 0); commands 3, 41 |
| 0x80031D70 | func_80031D70 | ReleaseAllSfx | Key off all type-1 tracks with natural release | M | c8BC: func_8003350C(i, 0); called from ClearStageSfxTable |
| 0x80031DEC | func_80031DEC | DimSfx | Commands 24/26: stop plain SFX not flagged 0x40, dim scripted SFX | M | c8BC: type 1 !(t & 0x40) func_8003350C(i,1); type 5 func_80034A54 |
| 0x80031E94 | func_80031E94 | UndimSfx | Commands 25/27: restore scripted SFX volume | M | c8BC: type 5 -> func_80034A9C |
| 0x80031F14 | func_80031F14 | SilenceSfx | Command 20: stop plain SFX, fade scripted SFX to 0 | M | c8BC: type 5 -> func_80034AE0 (layer target 0) |
| 0x80031FC8 | func_80031FC8 | UnsilenceSfx | Command 21: fade scripted SFX back up | M | c8BC: type 5 -> func_80034B0C (target 0x3FFF) |
| 0x8002F150 | func_8002F150 | BendSfxDown | Slide every voice of track a-1 down a semitone | M | c8BC: +0x2C = -0x18, +0x28 = +0x20 - 0x100, flags \|= 1; same code inlined in PlaySpecialSfx case 2 |
| 0x8002F1CC | func_8002F1CC | BendSfxUp | Slide every voice of track n-1 up a semitone | M | c8BC: +0x2C = 0x18, +0x28 = +0x20 + 0x100; PlaySpecialSfx case 3 copy |
| 0x80034314 | func_80034314 | PlayScriptSfx | Type 5: start (or update vol/pan of) a scripted SFX track with 3 volume layers | H | c8BC: D_80068A54 + p[3]*12; func_800348A8 find; 0x1000/0x2000 update; *(s16*)c = 5 |
| 0x8003388C | func_8003388C | RunScriptSfx | Run one tick of a scripted SFX track (asm) | M | c8BC: UpdateSfxTracks calls it for type 5 with (track, index) |
| 0x800336A8 | func_800336A8 | UpdateScriptSfxVolume | Recompute volume/pan of a scripted track's voices from its 3 layers and pan | M | c8BC: voices flagged at s[0x3A+i]; vol *= layers at s+0x1C step 8; D_8007319E pan |
| 0x800342E8 | func_800342E8 | DetachScriptSfxVoice | Clear voice a's flag in scripted track b | M | c8BC: g_SoundChan[b] + a: [0x3A] = 0 |
| 0x80034650 | func_80034650 | StopScriptSfx | Key off a scripted track's voices (mode n) and free it | H | c8BC: func_80030D80(&voice[i], n) for flags at +0x3A; *(s16*)a = 0 |
| 0x800346D0 | func_800346D0 | StopScriptSfxById | Stop scripted tracks playing an id (owner optional) | H | c8BC: type 5 && id match -> KeyOffSfxVoice(.., 0); StopSfx case 5 |
| 0x800347C8 | func_800347C8 | ReleaseScriptSfx | Set the release flag on scripted tracks playing an id | M | c8BC: c[0x16] = 1 on match; ReleaseSfx inlines the same loop |
| 0x80034844 | func_80034844 | ReleaseAllScriptSfx | Release every scripted track not flagged 2, with fade speed 0x220 | M | c8BC: s[0x16] = 1, +0x1A = 0x220 unless s[0x37] & 2; command 28 |
| 0x800348A8 | func_800348A8 | FindScriptSfx | Return scripted track+1 for an id (owner optional) | H | c8BC: *(u16*)c == 5 && id/owner match |
| 0x80034A54 | func_80034A54 | DimScriptSfx | Fade layer 2 of a scripted track to 0xFFF if it allows dimming | M | c8BC: if p[0x37] & 1: p[0x32] = 1, +0x2E = 0x3FF, +0x30 = 0xFFF |
| 0x80034A9C | func_80034A9C | UndimScriptSfx | Fade layer 2 back to 0x3FFF | M | c8BC: target 0x3FFF if not already |
| 0x80034AE0 | func_80034AE0 | SilenceScriptSfx | Fade layer 1 of a scripted track to 0 | M | c8BC: p[0x2A] = 1, +0x26 = 0x3FF, +0x28 = 0 |
| 0x80034B0C | func_80034B0C | UnsilenceScriptSfx | Fade layer 1 back to 0x3FFF | M | c8BC: +0x28 = 0x3FFF |

### Sound banks (VAB) and SPU RAM transfers

Five bank slots, 0x18 bytes each, really based at 0x800A463C: +0 SPU address (0x1010, 0x10000, 0x14000, 0x18000,
0x39F00 from InitSound), +4 bank id, +6 VAB id, +8 sub-bank id, +0xC sub index, +0x10 data address, +0x14 free flag.
Bank ids index `D_80064D48` (12 bytes: +1 slot, +2 sub-bank, +5 slot to free first, +6 output mode; `D_80064D44`
base: +0 (program, tone) list, +4 tone count). Per slot, `D_8006A970[slot]` is a tone cache of 12-byte entries {SPU
addr, center<<8, ADSR1, ADSR2, valid} built from SsUtGetVagAtr / SsUtGetVagAddr, 10 tones per call. `D_800A46CC` is
the loader state (then +2 slot, +4 bank id, +6 VAB id). The SPU DMA has one owner at a time: `D_800BA0F8` holds the
owner's cancel callback, `D_8006AEF4` bit 0 = transfer in flight, bit 1 = owned.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x8002FAE0 | func_8002FAE0 | ResetBankLoader | Reset the bank loader state and clear the bank map | M | c8BC: D_800A46CC = 0; func_8002C8BC; InitSound |
| 0x8002FB08 | func_8002FB08 | BeginBankUpload | Claim the SPU transfer, free the target slot (and its dependent slot), set the SPU write address | M | c8BC: func_80037CD8(func_800301A4); D_800A46C8 = slot SPU addr; SsVabClose; c23F0 loader sub-state 3 per soundTable entry |
| 0x8002FC64 | func_8002FC64 | UploadBankData | Send n bytes of a bank body from a sector buffer to SPU RAM and advance | H | c8BC: SpuSetTransferStartAddr(D_800A46C8), SpuRead(dst, n), += n; c23F0 after each CdGetSector |
| 0x8002FDC8 | func_8002FDC8 | AbortBankUpload | Release the SPU transfer after a failed upload | M | c8BC: func_80037D74(); c23F0 on upload failure / disk error |
| 0x8002FD14 | func_8002FD14 | OpenSoundBank | Poll until the bank's VAB header is opened and its tone cache built; bank 0x1A sets reverb depth 0x28 | M | c8BC: waits SpuIsTransferCompleted, func_8002FF0C; c23F0 LoadFileStep state 7 loops over soundTable pairs |
| 0x8002FF0C | func_8002FF0C | OpenSoundBankStep | Open the VAB head (SsVabFakeHead/FakeBody) for an uploaded bank, then build its tone cache | M | c8BC: SsVabFakeHead(b, -1, spu addr); D_800A46CC 1/2 -> func_80030730 / func_80030A14 |
| 0x80030730 | func_80030730 | BuildToneCache | First step of building a slot's tone cache (records sub-bank, maps bank id to slot) | M | c8BC: SsVabTransCompleted; D_800C5328[bank].lo = slot; SsUtGetVagAtr/Addr 10 per call |
| 0x80030A14 | func_80030A14 | BuildToneCacheNext | Next 10 tones of the tone cache | M | c8BC: same loop from D_800760F0; D_800760F4 remaining |
| 0x800301C8 | func_800301C8 | LoadBankFromRam | Load a whole VAB from main RAM: SsVabOpenHeadSticky, then body in 32 KB parts (state table D_8006AA14) | M | c8BC: SsVabOpenHeadSticky(b, -1, addr); states via D_8006AA14[D_800A46CC]; no C callers |
| 0x80030470 | func_80030470 | BankLoadClaimSpu | RAM-load state: wait to own the SPU transfer | L | c8BC: func_80037CD8(func_800301A4) then state++; shape of a D_8006AA14 entry |
| 0x800304C8 | func_800304C8 | BankLoadWaitSpu | RAM-load state: wait for the in-flight SPU transfer | L | c8BC: SpuIsTransferCompleted clears bit 0, else state++ |
| 0x80030538 | func_80030538 | BankLoadSendBody | RAM-load state: send the first 0x8000-byte body part | L | c8BC: SsVabTransBodyPartly(c0 + c4, 0x8000, vab); -2 more, -1 fail |
| 0x80030634 | func_80030634 | BankLoadSendBodyNext | RAM-load state: send further body parts after each completes | L | c8BC: SsVabTransCompleted(0) then SsVabTransBodyPartly |
| 0x800301A4 | func_800301A4 | CancelBankUpload | SPU-owner cancel callback for bank uploads: reset loader state | M | c8BC: D_800A46CC = 0, D_8006AEF4 &= ~2, return 1; passed to func_80037CD8 |
| 0x8002FDE8 | func_8002FDE8 | OpenMusicVab | Open the music VAB header (slot 4) from the loaded music file | M | c8BC: SsVabFakeHead(b, -1, D_800A469C); D_800A46A0 = a\|0x4000; func_800373D0 passes bank+0x7000 |
| 0x8002F67C | func_8002F67C | FreeStageBanks | Free bank slot 3 and close the music VAB in slot 4 | M | c8BC: D_800C5328 entry -1, SsVabClose(slot[4].vab); c23F0 func_80015144 on game reset |
| 0x8002F658 | func_8002F658 | GetSlot3Bank | Return slot 3's bank id, -1 if the slot is free | L | c8BC: g_SoundSlot+0x58 free flag, +0x48 bank id; no callers |
| 0x80037CC8 | func_80037CC8 | ResetSpuOwner | Clear the SPU-transfer owner | M | c8BC: D_800BA0F8 = 0; InitSound |
| 0x80037CD8 | func_80037CD8 | ClaimSpuTransfer | Become the SPU-transfer owner, asking the current owner to cancel first | H | c8BC: if owned and owner cb() returns 0 -> fail; else D_800BA0F8 = fn; callers pass their cancel cb |
| 0x80037D74 | func_80037D74 | ReleaseSpuTransfer | Give up the SPU-transfer ownership | H | c8BC: D_800BA0F8 = 0, D_8006AEF4 &= ~2 |
| 0x800351E8 | func_800351E8 | SetSpuXferAddr | Set the SPU address for TransferSpu; return it if inside user RAM (0x1010-0x7FFFF) else 0 | M | c8BC: D_80076218 = a; a & -((a - 0x1010) <= 0x7EFF0) |
| 0x80035210 | func_80035210 | TransferSpu | SPU DMA of n bytes at the address set by SetSpuXferAddr, then advance it | M | c8BC: SpuSetTransferStartAddr(D_80076218), SpuRead(dst, n), D_80076218 += n; no C callers |

### CD audio: request ring, XA clips, CD-DA tracks, streamed BGM load

The ring `D_80076118` holds 4 requests of 0x30 bytes (b0 queued, b1 cancelled, b2 busy, b3 step, b4 arg, b7 can move;
w[0] step function returning nonzero when done, w[1] LBA / track, w[2] XA code, w[5] done callback(w[6], b4), w[7]
cancel step, w[8] slot-moved callback(old+1, new+1), w[9] own index). `D_8006AEF8` is the head (running) index,
`D_8006AEFC` the tail, `D_8006AEF5` a lock. Ids of the music requests in flight are kept in `D_80078F10[]` with count
`D_8006AEE8`. CD-DA tracks are played from the TOC read by `CdGetToc(D_800C7D30)` at init (track count
`D_800A5BC8`). The streamed BGM loader (`D_8006AF00` state) seeks to the music file, reads it with CdlReadN and
a ready callback that copies 14 sectors of header + sequence into `D_800BA320` (".sqv" magic 0x7671732E) and sends
the VAB body sectors straight to SPU RAM; `D_8007622C` is its 5-entry queue of things to stream.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80034C24 | func_80034C24 | InitCdAudio | Reset the CD-audio ring, flags and stream state; read the CD TOC | H | c8BC: zeroes D_8006AEF8/FC/F4..., D_800A5BC8 = CdGetToc(D_800C7D30); InitSound |
| 0x80034CF0 | func_80034CF0 | PushCdAudioRequest | Copy a request into the ring tail; return its index+1 or 0 if full | H | c8BC: next = tail+1 mod 4, == head -> 0; b0 = 1, b7 = 1, w[9] = idx |
| 0x80034DFC | func_80034DFC | CancelCdAudioRequest | Cancel request n: mark it, close the gap by moving later requests down (calling their w[8]) | H | c8BC: b0 = 0, b1 = 1; copies entries i -> cur, PS1_FN(w[8])(i+1, cur+1) |
| 0x8003500C | func_8003500C | RunCdAudioRequests | Per frame: run the head request's step, on done call w[5] and advance; run a cancelled one's w[7] | H | main frame loop and c23F0 func_80015144; c8BC: PS1_FN(q->w[0])(q), w[5](w[6], b4), w[7](q) |
| 0x80034B98 | func_80034B98 | GetCdAudioState | Ring state: 0 idle, 1 busy, 2 / 4 busy with status 0x80 / 0x20, 8 = an error happened (reported once) | H | c8BC: head != tail; D_8007620C; D_80076214 -> 8 and cleared; c23F0 GetStreamState wraps it |
| 0x80034B3C | func_80034B3C | PeekCdAudioState | Same without the error report | M | c8BC: GetCdAudioState minus the D_80076214 branch; no callers |
| 0x80036AF8 | func_80036AF8 | PlayXa | Queue an XA clip: code b (0x4000 \| bank<<9 \| row<<4 \| channel) picks file offset and channel from D_8006A69C | H | c8BC: req.w[0] = func_80035270, w[1] = CdPosToInt(file) + ofs[row], w[7] = func_800359B0; c23F0 func_8001B0D4 |
| 0x80035270 | func_80035270 | XaStep | Request step that plays an XA clip (asm) | M | c8BC: w[0] of PlayXa's request |
| 0x800359B0 | func_800359B0 | StopXaStep | Cancel step for XA / CD audio: fade the CD input volume down, CdlPause, wait CdSync (300 tries) | H | c8BC: SsSetSerialVol 3/4, 1/2, 1/4, 0; CdControl(CdlPause); CdSync timeout sets D_80076214 |
| 0x80036D24 | func_80036D24 | OnXaDone | Done callback of PlayXa: clear the request id and the XA flag | M | c8BC: D_80078F10[0] = 0; count < 2 -> D_8006AEE8 = 0, D_800A4F1A = 0 |
| 0x80036D58 | func_80036D58 | PlayCdTrack | Queue a CD-DA track (0 = resume the track saved by PauseCdAudio), cancelling queued music | H | c8BC: w[0] = func_80035C4C, w[1] = n; uses D_800C6D28; c23F0 for D_80063138 entries < 0; command 15 |
| 0x80035C4C | func_80035C4C | CdTrackStep | Request step: CdlSetmode DA, CdlPlay the TOC entry, watch the track number until it changes, then pause | H | c8BC: prm 5 CdlSetmode; CdControlF(3, D_800C7D30 + n*4); func_80036130 ready cb; D_800A63E4 0xC/0xD |
| 0x8003602C | func_8003602C | StopCdTrackStep | Cancel step for CD-DA: flush, CdlPause, restore the ready callback, wait CdSync | M | c8BC: CdFlush, CdControlF(CdlPause), func_8003621C, CdSync |
| 0x80036130 | func_80036130 | OnCdTrackReady | CD ready callback during CD-DA play: after 10 reports, flag the end when the reported track changes | M | c8BC: BCD b[1] != D_800A63E8 -> D_800A63E4 = 0xD |
| 0x800361CC | func_800361CC | SetCdReadyCb | Install a CD ready callback, saving the previous one once | H | c8BC: D_8006AEF0 = CdReadyCallback(..) if D_80076110 == 0; D_80076110 = 1 |
| 0x8003621C | func_8003621C | RestoreCdReadyCb | Put back the saved CD ready callback | H | c8BC: CdReadyCallback(D_8006AEF0); D_80076110 = 0 |
| 0x80036F98 | func_80036F98 | OnCdTrackDone | Done callback of PlayCdTrack: clear the request list | M | c8BC: D_80078F10[0] = 0, D_8006AEE8 = 0 |
| 0x80036FB0 | func_80036FB0 | MoveCdAudioId | Slot-moved callback: rewrite a stored request id after the ring compacts | H | c8BC: D_80078F10[i] == from -> to; w[8] of both requests |
| 0x80036EB4 | func_80036EB4 | StopCdTrack | Stop CD-DA (not an XA clip) and forget the saved track | M | c8BC: if !D_800A4F1A: func_80036F18, D_800C6D28 = 0 |
| 0x80036EE8 | func_80036EE8 | StopCdAudio | Cancel all CD audio, forget the saved track, clear the XA flag | H | c8BC: func_80036F18, D_800C6D28 = 0, D_800A4F1A = 0; StopMusic |
| 0x80036F18 | func_80036F18 | PauseCdAudio | Cancel the CD-audio requests, saving the current track for PlayCdTrack(0) | H | c8BC: D_800C6D28 = D_800A63E8; func_80034DFC on each D_80078F10[i]; PauseMusic |
| 0x800363CC | func_800363CC | LoadBgmStep | Polled loader for BGM id a (0x100+): stop BGM, queue its .sqv, SetMode, seek, ReadN with the sector callback; 1 done, 2 error | H | c8BC: D_8006AF00 states 0-17; func_80037144(D_80068B60[k*8]); CdlSeekL/CdlReadN; c23F0 with g_ArchiveFileLoc |
| 0x80036260 | func_80036260 | CancelBgmLoad | SPU-owner cancel callback of LoadBgmStep: stop the CD read, pause, close slot 4's VAB | M | c8BC: CdFlush / CdlPause by state; SsVabClose(g_SoundSlot[4].unk2); passed to func_80037CD8 |
| 0x80037004 | func_80037004 | ClearBgmLoadQueue | Clear the 5 stream-queue used flags | M | c8BC: D_80076251[0x40..0 step 0x10] = 0; InitSound |
| 0x80037334 | func_80037334 | ClearBgmLoadQueue2 | Same body as func_80037004 (see duplicates) | M | c8BC: identical loop; LoadBgmStep / CancelBgmLoad |
| 0x80037028 | func_80037028 | QueueBankStream | Add a sound bank (id, dest) to the stream queue | M | c8BC: first unused D_8007622C.slot; k = D_80064D49[id*12]; c = bank table SPU addr; no C callers |
| 0x80037144 | func_80037144 | QueueMusicStream | Add the music file (seq + VAB) to the stream queue, dest D_800BA320, VAB to slot 4's SPU address | M | c8BC: id = a \| 0x2000, a = D_800BA320; slot 4 reused if same bank (0x1000) |
| 0x80037358 | func_80037358 | SetStreamSector | Set the next expected sector of the stream | M | c8BC: D_8007623C = a; LoadBgmStep passes CdPosToInt(loc) |
| 0x80037368 | func_80037368 | GetStreamResults | Return the result byte of each used queue entry and their count | M | c8BC: copies D_80076250[i] where D_80076251[i]; LoadBgmStep checks 1 ok / 2 bad |
| 0x800373D0 | func_800373D0 | OpenStreamedMusic | After the stream: set the music data base and open the music VAB | M | c8BC: D_800A4E88 = id, flags \|= 0x20, func_8002D7FC(bank), func_8002FDE8(.., bank + 0x7000) |
| 0x800374CC | func_800374CC | GetStreamPos | Return 0 and the expected sector while streaming, 1 when finished | M | c8BC: D_80076243 not 0/4/5 -> *out = D_8007623C; LoadBgmStep timeout check |
| 0x8003750C | func_8003750C | PrepareStreamSlots | Claim the SPU transfer and free the bank slots the queued banks will overwrite | M | c8BC: D_8007629C states; SsVabClose, D_800C5328 -1, func_80031A98 |
| 0x8003775C | func_8003775C | FinishStream | Wait for the last SPU transfer, then OpenStreamedMusic | M | c8BC: SpuIsTransferCompleted, D_8006AEF4 &= 0xFC, func_800373D0 |
| 0x800377D8 | func_800377D8 | OnStreamSector | CD ready callback: take the next sector into RAM (header/seq) or send it to SPU RAM (VAB body) | H | c8BC: CdGetSector, ".sqv" check 0x7671732E, 14 header sectors, SpuRead(buf, n) at D_80076238 |

### BGM sequencer: players, voices and MIDI events

Player layout in the intro (`D_800B9CD8`, 2 x 0x1FC; `D_800B9CF0` = +0x18 fade active, `D_800B9E92` = +0x1BA
channel mute, `D_800B9ECA` = +0x1F2 song volume, `D_800B9ED2` = +0x1FA playing, `D_800B9ED3` = +0x1FB in use).
MIDI channel record (0x1A, at +0x1A + ch*0x1A): +0 program, +1 volume (CC 7), +2 pitch bend (s16, 0x40 centre),
+4 pan (CC 10), +5..+8 NRPN state, +9..+0x18 voices used. BGM voice record `D_800C6DD0` (16 x 0x60): +0/+2 L/R
volume, +4 note, +6 channel, +8 program, +0xC tone, +0x10 SpuVoiceAttr, +0x50 player, +0x54 tone base pitch,
+0x5A active, +0x5C keyed, +0x5D attr dirty. `D_800762B0` points at the SPU key status (`D_800A4EFE`), `D_800762B4`
are 16 "keyed this tick" flags. The dispatcher `func_80038FFC` is a plain switch on the status nibble.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x80037D98 | func_80037D98 | InitSequencer | Reset the 16 BGM voices and 2 players, point the key-status pointer | M | c8BC: D_800C6DE0 = D_80073140[i]; D_800B9EC8 + i*0x1FC = i; D_800762B0 = &D_800A4EFE; func_8003D424(D_80079A68); InitSound |
| 0x80037FC4 | func_80037FC4 | UpdateBgm | VSync BGM tick: run the sequencer unless locked, set RR on ended voices, flush key-off / attrs / key-on / reverb for voices 0-15 | H | c8BC: func_80038A58 if !D_800A4F1D; SpuSetKey(0/1, low 16 bits); SpuNSetVoiceAttr(i, c+0x10); SoundVSync |
| 0x80037EA0 | func_80037EA0 | SetEndedBgmVoicesRR | Give voices that ended a slow release (RR 8) and clear their marker | M | c8BC: same loop as UpdateBgm's first loop; SpuSetVoiceRR(i, 8); no callers |
| 0x80037F3C | func_80037F3C | FlushBgmVoiceAttrs | Write dirty BGM voice attributes to the SPU | M | c8BC: same loop as in UpdateBgm, SpuNSetVoiceAttr(i, c + 0x10); no callers |
| 0x80038A58 | func_80038A58 | RunSequencers | One sequencer tick: free voices that ended, advance each playing player by tempo, run due events, apply volume fades | H | c8BC: +0x1CC += +0x1D0, / +0x1D4; func_80038FC4 delta, func_80038FFC event; fade at +0x12..0x18 |
| 0x80038210 | func_80038210 | OpenSeq | Take a free player for sequence data a (VAB id b, VAB SPU address c), check its header and reset it; return index or -1 | H | c8BC: f[1] (+0x1FB) == 0; func_80038698, func_800387C0, func_80038838; PlayBgm |
| 0x800387C0 | func_800387C0 | SeqReadTrackHeader | Check the "MTrk" tag and skip the 8-byte chunk header | H | c8BC: v != 0x6B72544D ("MTrk") -> -1; *pp = p + 8 |
| 0x80038838 | func_80038838 | ResetSeq | Reset 16 channels (vol 0x7F, pan/bend 0x40), fade layer 0x4000, tempo 120 | H | c8BC: f1 = 0x7F, f2/f4 = 0x40; +0x12 = 0x4000; +0x1E4 = 0x78; +0x1CC.. = 0xE10 |
| 0x80038308 | func_80038308 | PlaySeq | Set a player playing and compute its volume | H | c8BC: D_800B9ED2[o] = 1; func_80038908; PlayBgm, ResumeBgm |
| 0x800383A4 | func_800383A4 | PauseSeq | Stop a player and key off its voices, keeping the position | H | c8BC: p[0x1FA] = 0; func_8003916C + QueueKey(0); PauseBgm |
| 0x800384A8 | func_800384A8 | StopSeq | Same, and rewind to the start | H | c8BC: PauseSeq body + *(s32 *)s = *(s32 *)(s + 4); StopBgm |
| 0x800385C0 | func_800385C0 | CloseSeq | Free a player and the voices it owns | H | c8BC: voices with player id cleared; D_800B9ED2/ED3 = 0; StopBgm |
| 0x8003836C | func_8003836C | IsSeqPlaying | Return the playing flag of an open player (0 if not open) | H | c8BC: D_800B9ED3 ? D_800B9ED2 : 0; used before every BGM pause/fade |
| 0x8003834C | func_8003834C | SetSeqVolume | Set a player's song volume (+0x1F2, scales note volume) | M | c8BC: D_800B9ECA + i*0x1FC = v; PlayBgm passes D_80068B5E[k*8]; note-on vol *= +0x1F2 >> 7 |
| 0x8003819C | func_8003819C | SetSeqFade | Start a volume fade on a player layer to target b at step c | H | c8BC: q+0x16 = b, +0x14 = c, +0x18 = 1, +0x1F4 = 1; fade-in (0, 0x4000, 0x111), FadeOutBgm (0, 0, speed) |
| 0x800381E4 | func_800381E4 | IsSeqFading | Return a fade layer's active flag | M | c8BC: D_800B9CF0[b*8 + a*0x1FC] (+0x18); PauseBgm stops instead when fading |
| 0x80038908 | func_80038908 | UpdateSeqVolume | Player volume = music volume x duck level x fade layer | H | c8BC: v = D_800A4EF8<<7 * D_800A4EE0 >> 14, * +0x12 >> 14 -> +0x10 |
| 0x800388E8 | func_800388E8 | ScaleBySeqVolume | Scale a value by the player volume | M | c8BC: (b * +0x10 << 2) >> 16; no callers |
| 0x80038638 | func_80038638 | MuteSeqChannel | Set a player channel's mute bit | H | c8BC: D_800B9E92[a*0x1FC + b] \|= 1; note-on returns early on it; PlayBgm for song 0x134 |
| 0x80038668 | func_80038668 | UnmuteSeqChannel | Clear a channel's mute bit | H | c8BC: &= 0xFE; commands 35-38 unlock channels 3-8 of song 0x134 |
| 0x80038958 | func_80038958 | FreeEndedSeqVoices | Drop voices whose key status is off from their channel (copy of RunSequencers' first loop) | M | c8BC: status 0 or 3 and not keyed -> list[idx][0x23+i] = 0, on = 0; no callers |
| 0x80038A00 | func_80038A00 | FindReleasedSeqVoice | Return the first voice in release (key status 2) not keyed this tick, or -1 | M | c8BC: *a == 2 && *b == 0; same loop inlined in the note-on |
| 0x8003916C | func_8003916C | FreeSeqVoice | Unlink BGM voice n from the channel that owns it | H | c8BC: list[idx] + n [0x23] = 0, on = 0; PauseSeq/StopSeq per voice |
| 0x800391D4 | func_800391D4 | NoteOffSeqVoices | Key off voices of channel idx playing note id (same body as the note-off helper) | M | c8BC: q[0x23] && D_800C6DD4 note == id -> free, key-off bits, status 2; no callers |
| 0x80039300 | func_80039300 | SeqNop | Empty | L | c8BC: empty body; no callers |
| 0x80038FC4 | func_80038FC4 | SeqReadVarLen | Read a MIDI variable-length number | H | c8BC: 7 bits per byte while bit 7 set; RunSequencers delta time |
| 0x80038FFC | func_80038FFC | SeqDoEvent | Run one event with running status: status nibble 8-F to its handler; F0/F7 skip, FF meta | H | c8BC: p[0x1F7] running status; switch (c >> 4) cases 8..15 |
| 0x80039B20 | func_80039B20 | SeqNoteOff | 0x8n: key off the channel's voices on that note | H | c8BC: reads 1 byte (note); voices with D_800C6DD4 == note -> key-off bits, status 2 |
| 0x80039308 | func_80039308 | SeqNoteOn | 0x9n: for each tone of the program covering the note, take/steal a voice, set vol/pan/pitch, queue key-on (vel 0 = note off) | H | c8BC: note, vel; skip if muted; tones at +0x1E0 prog*0x200; D_8006ACD8 vol curve, D_8006AF08 pan, D_8006AB30 pitch |
| 0x80039C5C | func_80039C5C | SeqPolyPressure | 0xAn: skip 2 data bytes | H | c8BC: pointer += 2 |
| 0x80039F50 | func_80039F50 | SeqControlChange | 0xBn: CC 6 data entry, 7 volume, 10 pan, 0x62 NRPN LSB, 0x63 NRPN MSB | H | c8BC: switch op 6/7/8/10/0x62/0x63 -> func_80039C70, e[1], e[4], func_80039DEC |
| 0x8003A098 | func_8003A098 | SeqProgramChange | 0xCn: set the channel's program | H | c8BC: ((u8*)p)[0x1A + n*0x1A] = *q |
| 0x8003A0D0 | func_8003A0D0 | SeqChannelPressure | 0xDn: skip 1 data byte | H | c8BC: pointer += 1 |
| 0x8003A0E4 | func_8003A0E4 | SeqPitchBend | 0xEn: 1-byte bend; re-pitch every voice of the channel with its bend ranges | H | c8BC: e[2] = *q & 0x7F; v = note<<8 +/- (bend-0x40)*range*4; attr pitch, mask 0x10 |
| 0x8003A234 | func_8003A234 | SeqMetaEvent | 0xFF: tempo 0x51 sets BPM and rate; text/marker/other metas skipped; end of track / unknown sets the end flag | H | c8BC: 60000000 / len -> +0x1E4; cases 1-7, 0x54, 0x58, 0x59, 0x7F skip; a[0x1F9] = 1 |
| 0x80039DEC | func_80039DEC | SeqNrpnMsb | NRPN MSB: 0x14 loop start, 0x1E loop end (jump back while count lasts), 0x28 song-switch marker | H | c8BC: 0x1E: p[0x1F5]-- and *(s32*)p = +0xC; 0x14 / 0x28 set the param to 0x18 / 0x1A |
| 0x80039C70 | func_80039C70 | SeqDataEntry | CC 6 for the selected NRPN: 0x10 reverb type, 0x11 reverb depth, 0x18 loop count + mark, 0x1A switch to the queued BGM | H | c8BC: SpuSetReverbModeParam; +0x1F5 = c, +0xC = pos; D_800A4F22 = D_800A4F20 |
| 0x80039F14 | func_80039F14 | SeqSetNrpnLsb | Same store as CC 0x62 (param = c + 1, flag 2) | M | c8BC: a + b*0x1A: [0x20] = c, [0x22] = c + 1, [0x21] \|= 2; no callers |

### Sound driver globals (most read first)

Counts are references in c8BC outside extern lines.

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800A4F17 | D_800A4F17 | g_SoundLock | Set while a request runs so the VSync tick defers the SFX update (38 refs) | H | c8BC: every request saves/sets it; SoundVSync runs SfxTick only when 0; also g_SoundChan+0x82F |
| 0x800A4F18 | D_800A4F18 | g_SfxTickPending | A deferred SFX tick to run when the request ends (20) | H | c8BC: SoundVSync sets 1 when locked; requests run CFE4's body if set |
| 0x8006AF00 | D_8006AF00 | g_BgmLoadStep | State of LoadBgmStep (38) | H | c8BC: func_800363CC switch 0-17; CancelBgmLoad by state |
| 0x800A46CC | D_800A46CC | g_BankLoadStep | Bank loader state; +2 slot, +4 bank id, +6 VAB id follow (36) | H | c8BC: func_8002FF0C/800301C8 switch; D_800A46CE/D0/D2 |
| 0x8007622C | D_8007622C | g_StreamQueue | 5-entry queue of files to stream (seq + VAB) (35) | M | c8BC: SndCtl.slot[5] {addr, id, spu, result, used, slot}; func_80037028/80037144/800377D8 |
| 0x8006AEF4 | D_8006AEF4 | g_SpuXferFlags | Bit 0 SPU transfer in flight, bit 1 transfer owned (32) | H | c8BC: \|= 1 after SpuRead; ClaimSpuTransfer/ReleaseSpuTransfer bit 2 |
| 0x800A4E8E | D_800A4E8E | g_BgmFlags | BGM state: 1 playing, 4 open, 8 ticking, 0x10 paused, 0x20 music loaded, 0x100 resumable (31) | H | c8BC: PlayBgm \|= 9, PauseBgm \|= 0x10, func_800373D0 \|= 0x20 |
| 0x800A4E86 | D_800A4E86 | g_BgmSeq | Sequence player index of the current BGM (28) | H | c8BC: = func_80038210(..); used by every Seq call |
| 0x800A4E8C | D_800A4E8C | g_BgmIndex | Current BGM id - 0x100 (11) | H | c8BC: PlayBgm D_800A4E8C = i; 0x134 / 0x13E tests add 0x100 |
| 0x800A4EA2 | D_800A4EA2 | g_SuspendedBgmFlags | Flags of a suspended resumable BGM (D_800A4E9A player, D_800A4EA0 index) (8) | M | c8BC: StopBgm saves; PlayBgm resumes when the same index is asked |
| 0x8006AEE8 | D_8006AEE8 | g_CdAudioReqCount | Number of CD-audio request ids in D_80078F10 (21) | H | c8BC: PlayXa/PlayCdTrack append; PauseCdAudio cancels each |
| 0x80078F10 | D_80078F10 | g_CdAudioReqIds | Ring ids of the queued CD-audio requests; [0] != 0 = CD audio playing (15) | H | c8BC: FadeOutMusic tests [0]; c23F0 also reads it |
| 0x80076118 | D_80076118 | g_CdAudioRing | 4 CD-audio requests of 0x30 bytes | H | c8BC: Req D_80076118[4]; Push/Cancel/Run |
| 0x8006AEF8 | D_8006AEF8 | g_CdAudioHead | Ring head (running request) (14) | H | c8BC: RunCdAudioRequests advances it mod 4 |
| 0x8006AEFC | D_8006AEFC | g_CdAudioTail | Ring tail (12) | H | c8BC: PushCdAudioRequest writes there |
| 0x80076214 | D_80076214 | g_CdAudioError | Set on timeout / shell open; GetCdAudioState reports 8 once (14) | H | c8BC: 300-try CdSync timeouts, CdlStatShellOpen |
| 0x8007620C | D_8007620C | g_CdAudioStatus | Status bits of the running CD audio (0x80 playing) (14) | M | c8BC: CdTrackStep \|= 0x80; GetCdAudioState returns 2/4 on 0x80/0x20 |
| 0x80076243 | D_80076243 | g_StreamPhase | Stream sector phase: 1 seq header, 2 VAB header, 3 VAB body to SPU, 4 done, 5 error (15) | M | c8BC: OnStreamSector switch; GetStreamPos |
| 0x800A4EFC | D_800A4EFC | g_SfxMuteTimer | SFX refused while nonzero; 30 frames after command 2 (18) | H | c8BC: PlaySfx returns 0 if set; SfxTick decrements |
| 0x800A4F1B | D_800A4F1B | g_SfxEnabled | 0 refuses SFX without flag 0x80 (commands 29 / 30) | H | c8BC: PlaySfx: D_800A4F1B == 0 && !(*p & 0x80) -> 0 |
| 0x8006A980 | D_8006A980 | g_MergedSfxFlags | SFX merged within a frame (1/2 hit kinds, 4 count, 8 loudest 0xA75) (18) | M | c8BC: PlaySfx types 11/12 set, FlushMergedSfx plays and clears |
| 0x800C7D20 | D_800C7D20 | g_KeyOnBits | Pending key-on voice bits (15) | H | c8BC: QueueKey(1); SpuSetKey(1, ..) in FlushSfxVoices / UpdateBgm |
| 0x800A2B98 | D_800A2B98 | g_KeyOffBits | Pending key-off voice bits (14) | H | c8BC: QueueKey(0); SpuSetKey(0, ..) |
| 0x800C7D2C | D_800C7D2C | g_ReverbOnBits | Pending reverb-on voice bits (13) | H | c8BC: QueueReverb(1); SpuSetReverbVoice(1, ..) |
| 0x800A2BA0 | D_800A2BA0 | g_ReverbOffBits | Pending reverb-off voice bits (12) | H | c8BC: SpuSetReverbVoice(0, ..) |
| 0x80073140 | D_80073140 | g_VoiceBit | Voice number -> SPU voice bit (20) | H | c8BC: every key / reverb queue indexes it with the voice; D_800C6DE0 = D_80073140[i] |
| 0x800A4EFE | D_800A4EFE | g_VoiceKeyStatus | SPU key status of the 24 voices, read each VSync | H | c8BC: SpuRGetAllKeysStatus(0, 0x17, &D_800A4EFE); g_SoundChan+0x816 |
| 0x800A4C28 | D_800A4C28 | g_SfxVoiceAttr | 8 SpuVoiceAttr (0x48) for SFX voices, +0x40 voice, +0x44 dirty, +0x45 fast release (8) | H | c8BC: FlushSfxVoices SpuNSetVoiceAttr(*(p+0x40), p) |
| 0x800C6DD0 | D_800C6DD0 | g_SeqVoice | 16 BGM voice records of 0x60 (14) | H | c8BC: Ch60 D_800C6DD0[16]; SpuNSetVoiceAttr(i, c + 0x10) |
| 0x800B9CD8 | D_800B9CD8 | g_SeqPlayer | 2 sequence players of 0x1FC | H | c8BC: OpenSeq loop i < 2, s += 0x1FC |
| 0x800762B4 | D_800762B4 | g_SeqVoiceKeyed | 16 flags: voice keyed on this sequencer tick (10) | M | c8BC: cleared at RunSequencers start, set in SeqNoteOn |
| 0x800A4EE0 | D_800A4EE0 | g_MusicDuck | Current BGM duck level, 0x4000 = full (13) | H | c8BC: SoundVSync moves it to D_800A4EE4 by D_800A4EE2; UpdateSeqVolume multiplies by it |
| 0x800A4EF8 | D_800A4EF8 | g_MusicVolume | Music volume option 0-0x7F (BGM and CD input) | H | c8BC: command 0x21 (main ApplySoundOptions); UpdateSeqVolume; CD vol D_800A4EF8*0x61>>7 |
| 0x800A4EFA | D_800A4EFA | g_SfxVolume | SFX volume option 0-0x7F | H | c8BC: command 0x22; voice vol * (g_SoundChan+0x812) >> 7 |
| 0x800A4F19 | D_800A4F19 | g_SoundStereo | 1 stereo, 0 mono (pan ignored) (8) | H | c8BC: SetCdStereo/SetCdMono; pan law used only when set |
| 0x800A4F24 | D_800A4F24 | g_SoundFrameHook | Function run each frame by UpdateSound (12) | H | c8BC: = func_8002F80C / func_8002FA3C; called if nonzero |
| 0x800A64B0 | D_800A64B0 | g_SoundTimer | 8 sound timers {countdown, id, callback} | M | c8BC: UpdateSound decrements and calls; AllocSoundTimer |
| 0x8006A96E | D_8006A96E | g_LoopSfxFlags | Sources of the merged loop SFX 0xBEB (bits 0-3) + playing (0x10) (14) | M | c8BC: SetLoopSfxLevel, UpdateLoopSfx |
| 0x800A4EE8 | D_800A4EE8 | g_StageSfxTable | Stage SFX alias / definition table (12) | H | c8BC: SetStageSfxTable; tbl+0x14 defs, +0x18 script defs |
| 0x800A4EF0 | D_800A4EF0 | g_StageSfxTableId | Id of that table; SFX of group n need it equal (10) | H | c8BC: PlaySfx* return 0 if D_800A4EF0 != p[1] |
| 0x800A4EEC | D_800A4EEC | g_SoundRand | LCG seed for random SFX variants (10) | H | c8BC: *0x41C64E6D + 0x3039 in PlaySpecialSfx |
| 0x800A4F20 | D_800A4F20 | g_NextBgm | BGM to switch to at the next song-switch marker | H | c8BC: command 39 while a BGM plays; SeqDataEntry 0x1A moves it to D_800A4F22 |
| 0x800A4F22 | D_800A4F22 | g_StartBgm | BGM to start on the next VSync | H | c8BC: SoundVSync: func_8002D904(n), D_8006A990 = n |
| 0x800A4F1C | D_800A4F1C | g_BgmExtraParts | Bits unlocking channels 3-8 of song 0x134 (10) | M | c8BC: commands 35-38 set, 42 clears; PlayBgm mutes channels whose bit is clear |
| 0x800C5328 | D_800C5328 | g_BankSlotMap | Bank id -> slot (lo) and sub-bank -> slot (hi), 0x79 pairs (10) | M | c8BC: ClearBankMap; BuildToneCache writes; StopOrphanSfxVoices reads |
| 0x8006451C | D_8006451C | g_SfxTable | 4 bytes per sound id: type\|flags, group, table, entry | H | c8BC: PlaySfx p = &D_8006451C[id*4]; switch (*p & 0x3F) |
| 0x80068B5C | D_80068B5C | g_BgmTable | 16 bytes per BGM: slot, volume, VAB index, data index, flags | M | c8BC: PlayBgm D_80068B5C/5E/60/62/66[i*8] |
| 0x800A4638 | D_800A4638 | g_SoundVSyncCount | VSync counter of the driver | M | c8BC: SoundVSync *q += 1; nothing else reads it in C |
| 0x800BA0F8 | D_800BA0F8 | g_SpuXferOwner | Cancel callback of the SPU-transfer owner | H | c8BC: ClaimSpuTransfer / ReleaseSpuTransfer |
| 0x800A4F1A | D_800A4F1A | g_XaPlaying | An XA clip request is queued / playing | M | c8BC: PlayXa sets 1, OnXaDone / StopCdAudio clear; StopCdTrack skips when set |
| 0x800C6D28 | D_800C6D28 | g_PausedCdTrack | CD-DA track to resume with PlayCdTrack(0) (9) | H | c8BC: PauseCdAudio saves D_800A63E8; CdTrackStep n == 0 uses it |
| 0x800A46BA | D_800A46BA | g_CdFadeOut | CD-audio fade-out running (7) | H | c8BC: FadeOutMusic sets, StepCdFadeOut clears; IsCdFadeOut |
| 0x800A4E74 | D_800A4E74 | g_ReverbDepth | Current reverb depth index (6) | H | c8BC: SetReverbDepth stores n; UpdateSound fades it to D_800A4E76 |

## Globals

The most-read still-generic EXE globals, by area (the model code's and the sound driver's are in their own sections
above). Reads are counted as for functions: "N refs / M files" outside the EXE, then "EXE n" inside it.

### Ordering tables, screen, game state

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800A6518 | D_800A6518 | g_WorldOt | the two GsOT headers (0x14 bytes) of the world ordering table, one per frame buffer | H | c23F0 InitDisplay ("two 4096-entry GsOT headers"); ScreenWipeStep sets `.ot` to g_WorldOtTable[frame] and ClearOTagR's it. 59 refs / 22 files, EXE 15 |
| 0x800A651C | D_800A651C | g_WorldOtOrg | the same headers seen from their `.org` field (an `OtRec` array with stride 0x14) | M | 146 refs / 50 files, EXE 31: `D_800A651C[frame].ot + z * 4`. Better retyped as g_WorldOt[frame].org (see "Found along the way") |
| 0x800AE7B8 | D_800AE7B8 | g_FrontOt | the two GsOT headers of the small front OT drawn after the world | M | DrawFadeBlack / DrawFadeWhite with z = 0 link into it; main's DrawOTag "then the 4-entry front OT". 19 refs / 11 files |
| 0x800AE7BC | D_800AE7BC | g_FrontOtOrg | its `.org` field view | M | 101 refs / 13 files |
| 0x800AE620 | D_800AE620 | GsIDMATRIX | an identity MATRIX (bss, never written by game code), the base for world-space effects | L | 223 refs / 84 files: `m = D_800AE620; func_80017758(&quad, &m);` and `MATRIX at +0x38 = D_800AE620`. If libgs's GsIDMATRIX is not here, name it g_IdentityMatrix |
| 0x800AE610 | D_800AE610 | g_PadLostFrames | frames pad 0 has been missing (> 10 clears g_PadConnected); its address is also used as the end of g_WorldOtTable | M | c23F0 PollPad `if ((u32)D_800AE610++ >= 10)`; AddPrimChecked and 6 stage files compare OT pointers with `&D_800AE610` (g_WorldOtTable 0x800A6610 + 0x8000 = 0x800AE610) |
| 0x800AE648 | D_800AE648 | g_Flags | 512 flag bits | H | SetFlag / GetFlag / ClearFlags; copied into the state slots |
| 0x800BA1B8 | D_800BA1B8 | g_Vars | 256 byte variables (also s16 / s32 at byte offsets) | H | SetVar / GetVar / SetVar16 / SetVar32 |
| 0x800BA2B8 | D_800BA2B8 | g_VarBlock60 | a 0x60-byte block saved with the state | L | ClearVarBlock60; slot +0x27C |
| 0x800A6588 | D_800A6588 | g_ItemValues | 64 u16, one per item (GiveItem sets it from the item table, AgeItemValues moves it) | M | c23F0; slot +0xBC. ovl37's debug set-up writes D_800A6588..92 |
| 0x8010F46C | D_8010F46C | g_ItemTable | the item table, 8 bytes an item (+0 value, +2 kind) | L | c23F0 GiveItem / AgeItemValues. Above the EXE: it belongs to the overlay loaded at that address; name it there |
| 0x80078E78 | D_80078E78 | g_Status | the 0x98-byte status block (play time, progress, money, clock, stats) | H | c23F0 LoadDefaultStatus, SaveStateSlot; ovl36 `FieldStats`, ovl37 `DbgStats`. 128 refs / 43 files |
| 0x80072C84 | D_80072C84 | g_DefaultStatus | its new-game copy | H | c23F0 LoadDefaultStatus |
| 0x80078E7C | D_80078E7C | g_PlayTime | play time: frame, second, minute, hour bytes | H | c23F0 TickPlayTime |
| 0x80078E80 | D_80078E80 | g_Progress | the story progress value | H | c23F0 GetProgress / SetProgress / GetLevelCap |
| 0x80078E8C | D_80078E8C | g_Money | money (stage code caps it at 99999; halved on Continue) | H | stg/sc03_124 func_8018957C (add with cap 99999, fail when negative); e58E0 Continue `D_80078E8C = t / 2`. 22 refs / 7 files |
| 0x80078E90 | D_80078E90 | g_Clock | the time of day, minutes in 16.16 | H | c23F0 SetClock; e58E0 adds to it each frame and wraps D_80078E92 at 0x5A0 |
| 0x80078E92 | D_80078E92 | g_ClockMinutes | its integer half (minutes since midnight) | H | stg `if (D_80078E92 >= 0x438)` (18:00). 11 refs / 9 files |
| 0x80078EAC | D_80078EAC | g_Day | the day count | M | stg: `hours + D_80078EAC * 0x18` (an absolute hour). 29 refs / 14 files |
| 0x80078EAE | D_80078EAE | g_Daytime | 1 from 7:00 to 19:00 | H | c23F0 UpdateClockPeriod; r272 SetupActor's HP x1.5 test. 29 refs / 19 files |
| 0x80078EAF | D_80078EAF | g_DayPeriod | 0 dawn (5-7), 1 day (7-16), 2 evening (16-19), 3 dusk (19-22), 4 night | M | c23F0 UpdateClockPeriod; ovl36 time chime keys on it (`unk37`). 4 refs / 4 files |
| 0x80078EB0 | D_80078EB0 | g_ClockMinute | minutes of the hour | H | c23F0 UpdateClockPeriod. 31 refs / 12 files |
| 0x80078EB1 | D_80078EB1 | g_ClockHour | the hour | H | c23F0 UpdateClockPeriod. 107 refs / 19 files: `if (D_80078EB1 >= 9)` |
| 0x80078F28 | D_80078F28 | g_StateSlots | two 0x2DC-byte state slots | H | SaveStateSlot / LoadStateSlot |
| 0x800A5E58 | D_800A5E58 | g_StateSlotUsed | one word per slot | H | IsStateSlotUsed |
| 0x80079204 | D_80079204 | g_ContinueMapRecord | slot 1's 0x24-byte map record | H | SaveContinuePoint / LoadContinuePoint (it is g_StateSlots + 0x2DC) |
| 0x800AE6A8 | D_800AE6A8 | g_EntryPoint | the 0x3C-byte map-entry record (where and how Musashi enters) | M | work.h mapGroup comment; ClearEntryPoint; main ModeDemoRun `mapState->unk16`. 11 refs / 4 files |
| 0x800638F8 | D_800638F8 | g_StatTable | 31 levels x 16 bytes: needed / value for the four stats | H | c23F0 GetStat*ExpNeeded / GetStat*Value (D_800638FA..906 are its fields) |
| 0x80078EE4 | D_80078EE4 | g_Stat0Level | stat 0 level, followed by its experience and the other stats' level / experience pairs (EEC / EF0, EF4 / EF8, EFC / F00) | H | c23F0 GetStat0Level etc. |
| 0x80078F08 | D_80078F08 | g_Odometer | distance walked (D_80078F04 the step remainder, D_80078F0C the value at the last gain) | H | c23F0 AddWalkDistance |
| 0x800638A0 | D_800638A0 | g_RankTable | (average level, title string) pairs for GetRankTitle; D_800638EC the default title | H | c23F0 |
| 0x80062BA0 | D_80062BA0 | g_FadeSpeeds | fade speed per index (index 0 picked by Work.vsyncMode) | H | c23F0 FadeStep and its kin |
| 0x80062A78 | D_80062A78 | g_DebugFontUV8 | UV words of the 8-pixel debug font from ' ' | H | c23F0 DebugFontUV (D_80062AF8 the 16-pixel one, D_80062B78 the hex digit characters) |
| 0x800A2B70 | D_800A2B70 | g_TimeChime | the chime playing (1 sound 0x518, 2 sound 0x517) | M | ovl36 func_800CF... `D_800A2B70 = k` with the sound; ClearTimeChime |
| 0x800BA0FC | D_800BA0FC | g_TimeChimeTimer | its frame count (0x97 stops it) | M | ovl36 `if (++D_800BA0FC >= 0x97)` |
| 0x800760C8 | D_800760C8 | g_SaveRequest | 0 none, 1 save, 2 clear save | M | RequestSave / RequestClearSave |
| 0x80063074 | D_80063074 | g_TitleMovieCount | which title movie next (& 1) | M | GetTitleMovieIndex; zeroed by InitCdFiles |
| 0x800747D8 | D_800747D8 | g_LicenceShown | the licence screen has run | M | LicenceShown; zeroed by InitCdFiles |

### Load queue, BGM packs and XA clips

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800BA1B4 | D_800BA1B4 | g_LoadQueueState | 0 idle, 1 file, 2 BGM pack, 3 done, 4 header, 5 XA clip | H | c23F0 LoadQueueStep, RequestLoad. EXE 25 |
| 0x800747F0 | D_800747F0 | g_LoadKind | the queued request's kind | H | c23F0 QueueLoad |
| 0x800747F4 | D_800747F4 | g_LoadKey | the queued request's identity (file's first word or pack id) | H | c23F0 QueueLoad / IsQueuedLoad |
| 0x800AE6E4 | D_800AE6E4 | g_LoadFile | the queued file (a CdlFILE / archive location) | H | c23F0 QueueLoad, LoadQueueStep |
| 0x800BA318 | D_800BA318 | g_LoadDest | its destination | H | c23F0 |
| 0x800C6D2C | D_800C6D2C | g_LoadSize | its byte count (0 for a PAC archive) | H | c23F0 (RequestLoad comment) |
| 0x800A6550 | D_800A6550 | g_LoadSoundTable | its (sound id, destination) table | H | c23F0 (extern comment "sound table") |
| 0x80063138 | D_80063138 | g_BgmPacks | the BGM pack table (`SoundPack` 6 bytes: archive entry, BGM id for the loader, sound id) | H | c23F0 RequestLoad / BgmPackStepImpl. EXE 20 |
| 0x800A654C | D_800A654C | g_BgmPackPlaying | the pack id now playing | H | c23F0. 18 refs / 9 files |
| 0x800747F8 | D_800747F8 | g_BgmPackEntry | the archive entry now loaded | H | c23F0 |
| 0x800AE7EC | D_800AE7EC | g_BgmPackStep | BgmPackStepImpl's step | H | c23F0 |
| 0x800AE708 | D_800AE708 | g_BgmPackPos | disc position of the pack being read (0 idle) | M | c23F0; CancelXaClipStep waits for 0 |
| 0x800747E4 | D_800747E4 | g_XaClipStep | XaClipStep's step | H | c23F0 |
| 0x800747E8 | D_800747E8 | g_XaClipState | its reported state | H | c23F0 GetXaClipState |
| 0x800C7C60 | D_800C7C60 | g_SoundLoadTable | a one-entry (sound id, destination) table handed to LoadFileStep | H | main ModeTitleLoad `{0x57, D_800A2E20}`; StreamStep loads each pair with func_8002FD14. 31 refs / 9 files (D_800C7C64 its destination word) |
| 0x800A2E20 | D_800A2E20 | g_SoundLoadBuf | the staging buffer those sound loads read into | M | main, ovl36, ovl38, stg: `D_800C7C64 = D_800A2E20`. 19 refs / 9 files |
| 0x800747FC | D_800747FC | g_WipeStep | ScreenWipeStep's step (D_80074800 / 804 / 808 / 80C its brightness, delay, bar packets, bar count) | H | c23F0 |

### Memory card

| address | current | proposed | purpose | conf | evidence |
|---|---|---|---|---|---|
| 0x800760AC | D_800760AC | g_CardStep | SaveCardStep's step | H | c23F0. EXE 65 |
| 0x800760B0 | D_800760B0 | g_CardPort | the card port (0x00 / 0x10) being worked on | H | c23F0: MemCardOpen(D_800760B0, ...), status index `D_800760B0 >> 4`. EXE 69 |
| 0x8007609C | D_8007609C | g_CardStatus | per port {status, slot bits} (8 bytes each; 2 no card, 3 / 4 errors, 8 ready) | M | c23F0 SaveCardStep. EXE 56 |
| 0x800760C4 | D_800760C4 | g_CardResult | the last MemCardOpen / Sync result | M | c23F0 |
| 0x80075840 | D_80075840 | g_CardFileBuf | the card file image: header (0x200), directory (D_80075A40, 0x280), slot header (D_80075FC0), save (D_80075CC0) | M | c23F0: `D_80075840[0] = 'S'; [1] = 'C'`, MemCardWriteFile(.., D_80075840, 0, 0x200) |
| 0x80075A40 | D_80075A40 | g_CardDir | the 0x280-byte directory read from the card | H | c23F0 MemCardReadData(&D_80075A40, 0x200, 0x280) |
| 0x80075CC0 | D_80075CC0 | g_CardSaveBuf | the 0x300-byte save buffer | H | c23F0 SetCardSaveData / GetCardSaveData |
