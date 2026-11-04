# The game object struct (r273, research only)

Research for tracker area d-structs: what the matched C does with game objects, collected by script and grouped into
draft structs. **Nothing here is applied.** No file in src/ or include/ was changed; a later local card applies the
structs and proves with `make check` / `make check-stage` that the matches still hold. Everything below comes from
the decomp-only snapshot (main = fab5bf5a, 4 Nov 2026): the C, the headers and docs, no asm, no disc, no build.

What already existed in include/game.h and was the starting point: `StageActor` (0x10C, partly named), `Mover` (a
second view of the same memory), `Player` (Musashi at 0x80126B58, a few fields), `ModelObj` (0x84, the drawn model),
`SpawnDef` (0x14) and `AnimEntry`. include/abil.h says the ability packages take "the stage engine's actor (Musashi's
object)", and docs/animation_controller.md names +0x72, +0x90..+0x9C. This document checks those against every use,
adds the rest, and separates what is common to all objects from what only Musashi or only the pool actors have.

## Summary

* There are **two kinds of game object**, not one: the **pool actors** (`StageActor`, 97 slots of 0x10C at
  0x80120194, slot 0 never handed out; enemies, NPCs, props, pickups and effects alike) and **Musashi** (one object
  at 0x80126B58, at least 0x24C bytes, with his own action-handler and phase fields up to +0x24A). They share a
  **common header of 0x38 bytes** (kind/state, sub-state, 16.16 position, velocity, a countdown, the model pointer, a
  sub-state counter, the serial id); after +0x38 the two layouts differ (+0x38 is `prev[3]` in an actor, the
  collision data pointer in Musashi).
* Pool actors: every offset used through an actor pointer lies in 0x000..0x10A, which matches the 0x10C slot. The
  layout splits into an **engine-owned part** (0x000..0x0CB: position, motion, animation script, hit and reaction
  state, flags; the same meaning in every stage) and a **per-kind work area** (0x0CC..0x10B: pointers to extra
  models and scratch halfwords and words whose meaning and even type change from kind to kind).
* "Kind" is the actor's +0x00 (`StageActor.state` in game.h): the spawner writes the spawn definition's kind there and
  calls the kind's set-up handler from the table at 0x8011DB08; 0 marks a free slot. The per-kind state is +0x02
  (`sub`), dispatched through each kind's own handler table. The code shows no kind test that changes the layout:
  a kind is told by its handler, so the per-kind extension is a union of work areas, not a set of subclasses.
* Musashi has the same header (+0x00 is his mode, 0x19/0x1A tested by the engine; +0x02 his sub-state) and a large
  private tail: the hit record (+0x38..+0x42), camera focus points (+0x154..+0x162), the action-handler block
  (+0x1F8 handler, +0x1FC script, +0x200 timer, +0x214..+0x217 phase bytes) and the ability fields (+0x197 the
  button-ability step, +0x234..+0x24A).
* Field counts, by confidence (H / M / L): see the field tables (section 4) and the closing count (section 9).

## 1. Method

The census is a script (`census.py`, kept in full in Appendix C so it can be re-run on a later snapshot:
`python3 census.py <repo> <out>` writes `<out>.json` and `<out>.tsv`, about 15 s). It reads every `src/**/*.c`, all
201 files, and splits them into 28 994 function definitions (ANSI and K&R). In each function it records every
constant-offset access through a pointer variable, in all the forms the C uses:

| form | example | rows |
|---|---|---|
| `AF(p, T, off)` (the offset macro of every engine, stage and ability file) | `AF(o, s16, 0x70)` | 81 079 |
| nested `AF(AF(p, T1, a), T2, b)`: field `b` of the pointer at `p+a` | `AF(AF(a, u8 *, 0x20), s16, 0x12)` | 10 284 |
| a local loaded from a pointer field, then read by offset | `m = AF(o, u8 *, 0x20); AF(m, u16, 0x2C)` | 4 998 |
| Musashi's fields by absolute address (`D_80126B5C` = +0x04 ...) | `D_80126B96` (+0x3E) | 2 964 |
| typed access on `StageActor *`, `Mover *`, `Player *` (offsets from game.h) | `a->pos[1].h.i` | 893 |
| `*(T *)(p + off)`, `*(T *)((u8 *)p + off)`, `p[off]` on a byte pointer | | 6 |

For each access: offset, access type (so size and signedness), read / write / read-modify-write / address taken,
file, function, the pointer variable and why that variable counts as an object.

**Which pointers are objects.** A pointer variable counts when one of these holds, then the property spreads over the
call graph until nothing changes (8 rounds):
* it is declared `StageActor *`, `Mover *` or `Player *`, or is a parameter that a prototype declares so;
* it is passed to a parameter already known to be an object (SetScript, func_8012CAE4, func_8012C354, func_8012C218,
  func_8012BEE8 ... are the big ones), or a function's parameter is an object inside that function;
* it receives the result of a spawn function (`func_8012C890`, `func_8012C658`, `func_8012C588`, ...), is a copy of
  an object, or is the parent pointer (+0x64) of one;
* it indexes a handler table with its own +0x02 (u16 / s16), +0x4E or +0x214 (`D_xxx[AF(o, u16, 2)]()`);
* callers pass objects at that argument in at least 2 of 3 call sites (reverse step).
Of the 28 994 functions, 12 298 touch an object; 100 224 accesses are recorded (84 873 at the first level, 15 349
through a pointer field).

**Musashi or pool actor.** A second pass tracks where a pointer can come from: `P` (Musashi: `&D_80126B58`, a
handler registered with func_8016EDEC / func_8016ED8C / func_8016EE94 / SetActionHandler, a dispatch on +0x214) or
`A` (a pool actor: the spawn functions, the pool `D_80120194` / `D_801202A0`), flowing from callers to callees.
Most stage code is reached only through handler tables whose contents are data (not in this snapshot), so most
pointers get no origin this way. For those the script uses the offsets: a pointer whose accesses, or those of any
function it is handed to, reach 0x10C or beyond cannot be a 0x10C pool slot and is marked `P?`; otherwise `A?`.
Buckets: **musashi** (P, P?) 6 064 first-level accesses, **pool actor** (A, A?) 78 788, **shared** (both reach the
same function) 21. The `A?` bucket is the weak one: a stage function that only touches header fields could be
handling Musashi too; section 7 lists what that can and cannot hide.

**Caveats.**
* Counts are inflated by duplication: the 147 files of src/stg are the stage-specific code of other stage images, and
  the same kind's code recurs in many of them at shifted addresses. "funcs" and "files" in the tables are the better
  measure of how widely a field is used.
* The access type is what the decompiler or the matcher wrote, so `s16` against `u16` on the same field is often only
  which one gave the match (or m2c's guess). Two types count as a conflict below only when size differs or the code
  depends on the sign (section 6).
* Engine functions still in asm (INCLUDE_ASM) are invisible: so, for example, func_8012CC88 (the Mover's move) is
  known only from its callers' types.
## Status of this document

Round 1 (census) is in: method, and the full census in Appendices A and B. The summary above is provisional until the field tables are in. The field tables, draft structs,
conflicts and open questions follow in the next rounds.

## Appendix A. The census, first level

Every offset read or written directly through an object pointer, per bucket. Columns: `n` accesses; `types` as
written (with counts); R / W / RW / & = read, write, read-modify-write, address taken; `funcs` and `files` that use
it; `areas` (engine = src/stage/engine*.c, stage-specific = src/stage/sc03_001.c, stg = src/stg, abil = src/abil,
exe = src/*.c, ovl36..3b); one example function (an engine one when there is one). `?abs` is an access to Musashi by
absolute address, whose type the script does not take from the declaration.

### Shared (functions reached by Musashi and by pool actors)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80157808 |
| 0x006 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_801458E0.c:func_80166244 |
| 0x00A | 3 | u16 2, s16 1 | 3 / 0 / 0 / 0 | 3 | 3 | stg 1, engine 1, abil 1 | engine_801458E0.c:func_80166244 |
| 0x00E | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_801458E0.c:func_80166244 |
| 0x020 | 2 | u8* 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_801458E0.c:func_80160410 |
| 0x034 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801535F4 |
| 0x042 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x044 | 4 | u32 2, s32 2 | 1 / 1 / 2 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:ClearDisplayFlag20 |
| 0x0E0 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x0E2 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x0E4 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80160410 |
| 0x0F2 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801511E0 |

### Musashi (D_80126B58 and pointers that can only be him)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 114 | u16 113, s32 1 | 114 / 0 / 0 / 0 | 56 | 9 | engine 102, stg 12 | engine_801458E0.c:func_8014AA28 |
| 0x002 | 23 | u16 15, s16 8 | 13 / 10 / 0 / 0 | 20 | 4 | engine 15, abil 8 | engine_801458E0.c:func_801516F0 |
| 0x004 | 248 | ?abs 232, s32 6, Fixed[] 5, s16 5 | 151 / 19 / 2 / 76 | 182 | 92 | stg 234, engine 14 | engine.c:func_8012AE00 |
| 0x006 | 495 | ?abs 393, s16 83, u16 19 | 447 / 45 / 2 / 1 | 361 | 113 | stg 449, engine 37, stage-specific 5, abil 4 | engine.c:func_8012A048 |
| 0x008 | 80 | ?abs 67, s32 8, s16 5 | 54 / 20 / 6 / 0 | 60 | 34 | stg 71, engine 9 | engine_801458E0.c:func_80152254 |
| 0x00A | 559 | ?abs 449, s16 80, u16 30 | 511 / 40 / 4 / 4 | 433 | 122 | stg 509, engine 40, abil 6, stage-specific 4 | engine.c:func_8012A048 |
| 0x00C | 98 | ?abs 77, s32 16, s16 5 | 73 / 23 / 2 / 0 | 71 | 49 | stg 89, engine 9 | engine_801458E0.c:func_80152254 |
| 0x00E | 524 | ?abs 423, s16 80, u16 21 | 472 / 43 / 7 / 2 | 388 | 115 | stg 479, engine 36, stage-specific 5, abil 4 | engine.c:func_8012A048 |
| 0x010 | 22 | ?abs 13, s32 9 | 19 / 3 / 0 / 0 | 15 | 7 | stg 17, engine 3, abil 2 | engine_801458E0.c:func_8015AE2C |
| 0x012 | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc01_080.c:func_sc01_080_80181918 |
| 0x014 | 9 | s32 5, u16 2, ?abs 2 | 3 / 6 / 0 / 0 | 5 | 4 | abil 4, engine 3, stg 2 | engine_801458E0.c:func_8015AE2C |
| 0x018 | 22 | ?abs 13, s32 9 | 19 / 3 / 0 / 0 | 15 | 7 | stg 17, engine 3, abil 2 | engine_801458E0.c:func_8015AE2C |
| 0x01A | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc01_080.c:func_sc01_080_80181918 |
| 0x01C | 11 | s32 11 | 6 / 3 / 2 / 0 | 5 | 5 | abil 6, stg 3, engine 2 | engine_801458E0.c:func_80152500 |
| 0x020 | 626 | ?abs 308, void* 216, u8* 79, ModelObj* 13, s32 10 | 625 / 1 / 0 / 0 | 370 | 118 | stg 531, engine 79, abil 16 | engine.c:func_8012AE00 |
| 0x024 | 3 | s32 3 | 3 / 0 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8015B950 |
| 0x028 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc03_002.c:func_sc03_002_801802F4 |
| 0x02C | 48 | s32 44, ?abs 4 | 33 / 15 / 0 / 0 | 16 | 7 | engine 42, stg 6 | engine_801458E0.c:func_801555F4 |
| 0x034 | 41 | s32 32, u16 5, ?abs 3, s16 1 | 29 / 7 / 5 / 0 | 29 | 15 | stg 31, engine 9, abil 1 | engine_801458E0.c:func_80155C64 |
| 0x038 | 65 | ?abs 55, s32 7, void* 2, s32* 1 | 62 / 3 / 0 / 0 | 64 | 33 | stg 60, engine 5 | engine.c:func_8012AE00 |
| 0x03C | 36 | u16 30, ?abs 5, s32 1 | 15 / 14 / 7 / 0 | 18 | 6 | engine 31, stg 5 | engine.c:func_8012F568 |
| 0x03E | 357 | ?abs 331, s16 16, u16 10 | 48 / 222 / 9 / 78 | 253 | 70 | stg 332, engine 25 | engine.c:func_8012F568 |
| 0x040 | 123 | ?abs 103, s16 19, u16 1 | 9 / 114 / 0 / 0 | 111 | 48 | stg 104, engine 19 | engine.c:func_8012D5E4 |
| 0x042 | 55 | ?abs 31, s16 23, u16 1 | 1 / 54 / 0 / 0 | 49 | 24 | stg 37, engine 18 | engine.c:func_8012DEB8 |
| 0x044 | 174 | s32 118, ?abs 55, u32 1 | 98 / 33 / 43 / 0 | 120 | 33 | engine 100, stg 45, abil 28, stage-specific 1 | engine_801458E0.c:func_80146128 |
| 0x048 | 3 | s32 2, ?abs 1 | 0 / 3 / 0 / 0 | 3 | 2 | stg 2, engine 1 | engine_801458E0.c:func_801463A0 |
| 0x04C | 1 | ?abs 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80146360 |
| 0x04D | 22 | u8 22 | 9 / 9 / 4 / 0 | 13 | 3 | stg 22 | sc01_084.c:func_sc01_084_8017E608 |
| 0x04E | 1 | ?abs 1 | 1 / 0 / 0 / 0 | 1 | 1 | ovl36 1 | ovl36.c:func_800D19F0 |
| 0x04F | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80158880 |
| 0x050 | 16 | s32 16 | 8 / 5 / 3 / 0 | 1 | 1 | engine 16 | engine_801458E0.c:func_8015AE2C |
| 0x054 | 17 | s32 16, u8* 1 | 8 / 6 / 3 / 0 | 2 | 2 | engine 16, abil 1 | engine_801458E0.c:func_8015AE2C |
| 0x058 | 17 | s32 16, s16 1 | 9 / 5 / 3 / 0 | 2 | 2 | engine 16, abil 1 | engine_801458E0.c:func_8015AE2C |
| 0x05A | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl2d.c:func_ovl2d_800CB228 |
| 0x05C | 5 | s32 4, s16 1 | 2 / 3 / 0 / 0 | 3 | 2 | engine 4, abil 1 | engine_801458E0.c:func_8015AE2C |
| 0x060 | 53 | u16 37, s16 13, ?abs 3 | 0 / 53 / 0 / 0 | 53 | 38 | stg 37, engine 16 | engine_801458E0.c:func_80151664 |
| 0x062 | 90 | u16 74, s16 13, ?abs 3 | 37 / 53 / 0 / 0 | 53 | 38 | stg 74, engine 16 | engine_801458E0.c:func_80151664 |
| 0x064 | 98 | u16 81, s16 14, ?abs 3 | 42 / 56 / 0 / 0 | 56 | 38 | stg 74, engine 24 | engine_801458E0.c:func_80151664 |
| 0x068 | 2 | s16 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80158AE4 |
| 0x06A | 2 | s16 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80158AE4 |
| 0x06C | 3 | s32 1, s16 1, ?abs 1 | 1 / 2 / 0 / 0 | 3 | 2 | engine 2, stg 1 | engine_801458E0.c:func_80158AE4 |
| 0x070 | 7 | s16 5, ?abs 2 | 0 / 7 / 0 / 0 | 7 | 6 | stg 4, engine 2, abil 1 | engine_801458E0.c:func_80158AE4 |
| 0x072 | 7 | s16 5, ?abs 2 | 0 / 6 / 1 / 0 | 7 | 6 | stg 4, engine 2, abil 1 | engine_801458E0.c:func_80158AE4 |
| 0x074 | 8 | s16 5, ?abs 3 | 1 / 7 / 0 / 0 | 7 | 6 | stg 4, engine 2, abil 2 | engine_801458E0.c:func_80158AE4 |
| 0x088 | 14 | s16 6, ?abs 4, u16 2, SV8 1, SVECTOR 1 | 7 / 6 / 0 / 1 | 13 | 6 | engine 10, stg 4 | engine_801458E0.c:func_801463A0 |
| 0x08A | 11 | s16 7, u16 2, ?abs 2 | 6 / 5 / 0 / 0 | 11 | 4 | engine 8, stg 3 | engine_801458E0.c:func_80152254 |
| 0x08C | 10 | s16 6, u16 2, ?abs 2 | 5 / 5 / 0 / 0 | 10 | 4 | engine 7, stg 3 | engine_801458E0.c:func_80152254 |
| 0x090 | 1 | SVECTOR 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801463A0 |
| 0x094 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80188240 |
| 0x098 | 4 | ?abs 2, s16 1, SVECTOR 1 | 4 / 0 / 0 / 0 | 4 | 4 | stg 3, engine 1 | engine_801458E0.c:func_8014BDE8 |
| 0x09C | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_801857E4 |
| 0x0A8 | 49 | u8 49 | 2 / 46 / 1 / 0 | 46 | 25 | stg 33, engine 16 | engine_801458E0.c:func_8015126C |
| 0x0A9 | 8 | u8 6, ?abs 2 | 8 / 0 / 0 / 0 | 8 | 5 | engine 4, stg 2, abil 2 | engine_801458E0.c:func_80153E00 |
| 0x0AA | 3 | u16 2, ?abs 1 | 2 / 1 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8016FE78 |
| 0x0AC | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80149DD8 |
| 0x0AE | 4 | ?abs 4 | 4 / 0 / 0 / 0 | 1 | 1 | engine 4 | engine_801458E0.c:func_80148D44 |
| 0x0B0 | 4 | s32* 4 | 4 / 0 / 0 / 0 | 4 | 1 | engine 4 | engine_801458E0.c:func_80154150 |
| 0x0B4 | 41 | s32 32, s32* 9 | 35 / 6 / 0 / 0 | 20 | 6 | engine 36, stg 5 | engine_801458E0.c:func_80151AE4 |
| 0x0B8 | 172 | u16 162, s16 9, u8 1 | 120 / 49 / 3 / 0 | 103 | 40 | engine 93, stg 55, abil 24 | engine_801458E0.c:func_80151AE4 |
| 0x0BA | 23 | u16 18, s16 5 | 16 / 7 / 0 / 0 | 18 | 10 | engine 13, stg 10 | engine_801458E0.c:func_80154190 |
| 0x0BC | 44 | u8 44 | 13 / 9 / 22 / 0 | 9 | 1 | engine 44 | engine_801458E0.c:func_80154190 |
| 0x0BD | 22 | u8 22 | 1 / 7 / 14 / 0 | 6 | 1 | engine 22 | engine_801458E0.c:func_80154190 |
| 0x0BE | 14 | u8 13, ?abs 1 | 5 / 7 / 2 / 0 | 10 | 6 | abil 12, engine 2 | engine_801458E0.c:func_8015FCC8 |
| 0x0BF | 10 | u8 10 | 3 / 6 / 1 / 0 | 7 | 4 | abil 8, engine 2 | engine_801458E0.c:func_8015FCC8 |
| 0x0D0 | 2 | s32 2 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80159C84 |
| 0x0D4 | 9 | u16 9 | 5 / 4 / 0 / 0 | 5 | 3 | stg 8, engine 1 | engine_801458E0.c:func_80159C84 |
| 0x0DA | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015B6F4 |
| 0x0DC | 12 | u8 12 | 1 / 8 / 3 / 0 | 6 | 1 | engine 12 | engine_801458E0.c:func_80154190 |
| 0x0DD | 17 | u8 17 | 5 / 12 / 0 / 0 | 14 | 1 | engine 17 | engine_801458E0.c:func_8015126C |
| 0x0DE | 90 | u8 90 | 32 / 54 / 4 / 0 | 51 | 19 | stg 64, engine 26 | engine_801458E0.c:func_801516F0 |
| 0x0DF | 21 | u8 21 | 5 / 16 / 0 / 0 | 16 | 12 | stg 16, engine 5 | engine_801458E0.c:func_80152E4C |
| 0x0E0 | 3 | s32 1, SVECTOR 1, ?abs 1 | 0 / 3 / 0 / 0 | 3 | 3 | stg 2, engine 1 | engine.c:func_8012F568 |
| 0x0E8 | 2 | SVECTOR 1, ?abs 1 | 0 / 2 / 0 / 0 | 2 | 2 | engine 1, stg 1 | engine.c:func_8012F568 |
| 0x0F0 | 2 | u16 2 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015126C |
| 0x0F2 | 63 | s16 62, u16 1 | 58 / 5 / 0 / 0 | 51 | 25 | stg 41, engine 22 | engine_801458E0.c:func_8015126C |
| 0x0F4 | 7 | u16 5, s16 2 | 6 / 1 / 0 / 0 | 7 | 6 | stg 5, engine 2 | engine_801458E0.c:func_8015126C |
| 0x0F6 | 4 | s16 2, ?abs 2 | 1 / 3 / 0 / 0 | 4 | 2 | engine 3, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x10A | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80187660 |
| 0x12E | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80158AE4 |
| 0x130 | 1 | ?abs 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc05_008.c:func_sc05_008_8017E6A4 |
| 0x132 | 4 | u16 3, ?abs 1 | 2 / 2 / 0 / 0 | 2 | 2 | stg 4 | sc03_030.c:func_sc03_030_8017E240 |
| 0x138 | 2 | s16 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D414 |
| 0x13A | 2 | s16 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D414 |
| 0x13C | 2 | s16 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D414 |
| 0x13E | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D414 |
| 0x140 | 1 | ?abs 1 | 0 / 0 / 0 / 1 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014CB9C |
| 0x146 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_801463A0 |
| 0x154 | 33 | ?abs 27, s16 4, s16[] 2 | 31 / 0 / 0 / 2 | 33 | 18 | stg 27, engine 6 | engine.c:func_8012A328 |
| 0x156 | 6 | s16 6 | 6 / 0 / 0 / 0 | 3 | 2 | engine 6 | engine.c:func_8012A328 |
| 0x158 | 24 | ?abs 19, s16 5 | 24 / 0 / 0 / 0 | 22 | 11 | stg 18, engine 6 | engine.c:func_8012A328 |
| 0x15A | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl21.c:func_ovl21_800CB1A0 |
| 0x15C | 35 | ?abs 31, s16[] 3, s16 1 | 26 / 9 / 0 / 0 | 33 | 19 | stg 31, engine 4 | engine.c:func_8012B864 |
| 0x15E | 42 | ?abs 42 | 33 / 9 / 0 / 0 | 42 | 33 | stg 42 | sc01_080.c:func_sc01_080_801824FC |
| 0x160 | 27 | ?abs 26, s16 1 | 18 / 9 / 0 / 0 | 26 | 14 | stg 26, engine 1 | engine.c:func_8012B864 |
| 0x162 | 22 | ?abs 20, s16 2 | 8 / 0 / 0 / 14 | 22 | 16 | stg 20, engine 2 | engine.c:func_8012BCCC |
| 0x16C | 4 | u16 2, ?abs 2 | 3 / 1 / 0 / 0 | 4 | 2 | engine 4 | engine_801458E0.c:func_8016163C |
| 0x16E | 17 | u16 17 | 17 / 0 / 0 / 0 | 11 | 1 | engine 17 | engine_801458E0.c:func_80157A8C |
| 0x170 | 11 | ?abs 7, s32 3, u8* 1 | 10 / 1 / 0 / 0 | 11 | 9 | stg 8, engine 3 | engine_801458E0.c:func_8015C944 |
| 0x178 | 13 | s32 7, u8* 3, void* 2, ?abs 1 | 12 / 1 / 0 / 0 | 11 | 2 | engine 12, abil 1 | engine_801458E0.c:func_80149AD4 |
| 0x17C | 2 | ?abs 2 | 2 / 0 / 0 / 0 | 1 | 1 | stg 2 | sc05_001.c:func_sc05_001_8018098C |
| 0x180 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D01C |
| 0x184 | 21 | s32 12, u8* 5, u32 3, ?abs 1 | 12 / 9 / 0 / 0 | 8 | 1 | engine 21 | engine_801458E0.c:func_8015FAE8 |
| 0x188 | 47 | ?abs 31, s16 16 | 37 / 9 / 1 / 0 | 31 | 22 | stg 26, engine 21 | engine.c:func_8012E364 |
| 0x18A | 6 | s16 3, u16 3 | 1 / 4 / 1 / 0 | 3 | 1 | engine 6 | engine_801458E0.c:func_8016007C |
| 0x18C | 3 | s32 2, u8* 1 | 2 / 1 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_8015E4B0 |
| 0x190 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80149DD8 |
| 0x194 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x196 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015FF20 |
| 0x197 | 86 | u8 86 | 28 / 29 / 29 / 0 | 58 | 26 | abil 79, engine 7 | engine_801458E0.c:func_8015FCC8 |
| 0x198 | 23 | ?abs 12, s32 11 | 6 / 17 / 0 / 0 | 15 | 9 | stg 12, engine 11 | engine_801458E0.c:func_80158638 |
| 0x1A0 | 5 | u8 4, ?abs 1 | 2 / 3 / 0 / 0 | 3 | 1 | engine 5 | engine_801458E0.c:func_8015FCC8 |
| 0x1A8 | 4 | u8 4 | 3 / 0 / 1 / 0 | 3 | 1 | engine 4 | engine_801458E0.c:func_8015444C |
| 0x1A9 | 2 | u8 2 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80155800 |
| 0x1AA | 41 | u8 41 | 21 / 20 / 0 / 0 | 31 | 4 | engine 35, abil 6 | engine_801458E0.c:func_80149AD4 |
| 0x1AB | 3 | u8 3 | 1 / 0 / 2 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_801555F4 |
| 0x1AC | 7 | s32 7 | 2 / 4 / 1 / 0 | 5 | 2 | engine 6, abil 1 | engine_801458E0.c:func_80152714 |
| 0x1B0 | 6 | s32 6 | 4 / 1 / 1 / 0 | 3 | 2 | engine 5, stg 1 | engine_801458E0.c:func_80146128 |
| 0x1B4 | 2 | s32* 1, s32 1 | 1 / 1 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_801458E0.c:func_8015AE2C |
| 0x1B8 | 3 | ?abs 2, s16 1 | 1 / 2 / 0 / 0 | 3 | 2 | engine 2, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x1BA | 3 | ?abs 2, s16 1 | 1 / 2 / 0 / 0 | 3 | 2 | engine 2, exe 1 | engine_801458E0.c:func_80158AE4 |
| 0x1BC | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015CD20 |
| 0x1BD | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D414 |
| 0x1BE | 2 | u8 2 | 0 / 2 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_8015F448 |
| 0x1BF | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8014C6AC |
| 0x1C0 | 5 | u8 5 | 4 / 1 / 0 / 0 | 5 | 1 | engine 5 | engine_801458E0.c:func_80155800 |
| 0x1C2 | 3 | ?abs 3 | 0 / 3 / 0 / 0 | 3 | 1 | engine 3 | engine_801458E0.c:func_8016EE94 |
| 0x1C4 | 1 | ?abs 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014B598 |
| 0x1C5 | 3 | u8 2, ?abs 1 | 1 / 2 / 0 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_80149E94 |
| 0x1C6 | 6 | u8 4, ?abs 2 | 4 / 2 / 0 / 0 | 5 | 1 | engine 6 | engine_801458E0.c:func_8015AE2C |
| 0x1C7 | 1 | ?abs 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014CB2C |
| 0x1C8 | 18 | s16 11, ?abs 6, u16 1 | 3 / 15 / 0 / 0 | 17 | 6 | engine 9, abil 6, stg 3 | engine_801458E0.c:func_8014AA28 |
| 0x1CA | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1CC | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1CE | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D0 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D4 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1D8 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8014AA28 |
| 0x1E8 | 1 | ?abs 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80162B1C |
| 0x1F8 | 47 | ?abs 41, s32 6 | 35 / 12 / 0 / 0 | 35 | 14 | engine 29, stg 18 | engine_801458E0.c:func_8015126C |
| 0x1FC | 13 | ?abs 13 | 10 / 3 / 0 / 0 | 13 | 10 | stg 10, engine 3 | engine_801458E0.c:func_8016EE94 |
| 0x200 | 73 | s32 73 | 36 / 34 / 3 / 0 | 31 | 9 | stg 69, engine 4 | engine_801458E0.c:func_80173CB4 |
| 0x204 | 35 | s32 33, ?abs 2 | 8 / 26 / 1 / 0 | 19 | 9 | stg 33, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x206 | 5 | s16 5 | 5 / 0 / 0 / 0 | 5 | 2 | stg 5 | sc01_074.c:func_sc01_074_8017D5A8 |
| 0x208 | 6 | s32 4, ?abs 2 | 0 / 6 / 0 / 0 | 6 | 5 | stg 4, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x20C | 42 | s16 26, u16 9, u8 5, ?abs 2 | 19 / 23 / 0 / 0 | 32 | 11 | stg 40, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x20D | 3 | u8 3 | 2 / 0 / 1 / 0 | 1 | 1 | stg 3 | sc02_005.c:func_sc02_005_801814B4 |
| 0x20E | 31 | s16 22, u16 7, ?abs 2 | 12 / 19 / 0 / 0 | 18 | 8 | stg 29, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x210 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x212 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x214 | 160 | u8 147, ?abs 13 | 128 / 22 / 10 / 0 | 144 | 32 | stg 136, engine 22, stage-specific 2 | engine_801458E0.c:func_801727D0 |
| 0x215 | 2 | ?abs 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x216 | 8 | u8 6, ?abs 2 | 2 / 6 / 0 / 0 | 7 | 6 | stg 6, engine 2 | engine_801458E0.c:func_8016EE94 |
| 0x218 | 11 | u8 9, ?abs 2 | 9 / 2 / 0 / 0 | 8 | 4 | stg 9, engine 2 | engine_801458E0.c:func_8016ED8C |
| 0x21C | 2 | s32 1, ?abs 1 | 1 / 1 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015EA3C |
| 0x223 | 2 | u8 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8014AA28 |
| 0x234 | 98 | s32 87, s16 8, u16 3 | 38 / 44 / 16 / 0 | 53 | 14 | engine 45, abil 33, stg 20 | engine_801458E0.c:func_80158038 |
| 0x236 | 12 | s16 8, u16 4 | 7 / 5 / 0 / 0 | 5 | 2 | abil 11, engine 1 | engine_801458E0.c:func_8015D1B8 |
| 0x238 | 46 | s32 42, u16 2, s16 2 | 11 / 30 / 5 / 0 | 23 | 5 | abil 26, engine 20 | engine_801458E0.c:func_80158CD8 |
| 0x23A | 6 | u16 4, s16 2 | 4 / 2 / 0 / 0 | 4 | 3 | abil 5, engine 1 | engine_801458E0.c:func_80160C28 |
| 0x23C | 36 | s32 36 | 13 / 20 / 3 / 0 | 16 | 3 | abil 20, engine 16 | engine_801458E0.c:func_8015A2D8 |
| 0x240 | 8 | s32 4, u16 4 | 3 / 4 / 1 / 0 | 4 | 2 | engine 4, abil 4 | engine_801458E0.c:func_8015AE2C |
| 0x244 | 31 | u16 14, s16 9, u8 8 | 12 / 19 / 0 / 0 | 24 | 8 | engine 18, stg 8, abil 5 | engine_801458E0.c:func_80153D7C |
| 0x245 | 6 | u8 6 | 2 / 4 / 0 / 0 | 2 | 1 | engine 6 | engine_801458E0.c:func_8015F380 |
| 0x246 | 18 | u16 13, s16 5 | 9 / 8 / 1 / 0 | 7 | 4 | abil 13, engine 4, stg 1 | engine_801458E0.c:func_80153D7C |
| 0x248 | 8 | u16 5, s16 3 | 3 / 5 / 0 / 0 | 6 | 3 | engine 4, abil 3, stg 1 | engine_801458E0.c:func_80153D7C |
| 0x24A | 4 | s16 3, u16 1 | 1 / 3 / 0 / 0 | 3 | 2 | engine 3, abil 1 | engine_801458E0.c:func_8015F448 |
| 0x258 | 5 | ?abs 5 | 3 / 0 / 0 / 2 | 3 | 2 | engine 5 | engine_80144B9C.c:func_80144B9C |
| 0x25E | 3 | ?abs 3 | 2 / 1 / 0 / 0 | 3 | 2 | engine 3 | engine_80144B9C.c:func_80144B9C |
| 0x260 | 5 | ?abs 5 | 0 / 3 / 0 / 2 | 5 | 1 | engine 5 | engine.c:func_80129C40 |

### Pool actors (StageActor slots, 0x10C)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 428 | u16 428 | 427 / 1 / 0 / 0 | 396 | 98 | stg 403, engine 22, abil 2, stage-specific 1 | engine.c:func_8012A988 |
| 0x002 | 9473 | s16 5584, u16 3889 | 3022 / 6051 / 400 / 0 | 7202 | 178 | stg 9029, stage-specific 256, engine 111, abil 77 | engine.c:func_8012AD44 |
| 0x004 | 509 | s32 498, Fixed[] 8, u16 3 | 125 / 328 / 56 / 0 | 388 | 85 | stg 485, engine 20, stage-specific 4 | engine.c:func_8012AD80 |
| 0x006 | 2402 | s16 1373, u16 1027, volatile s16 2 | 1438 / 809 / 155 / 0 | 1553 | 139 | stg 2306, engine 65, abil 17, stage-specific 14 | engine.c:func_8012AE00 |
| 0x008 | 416 | s32 403, s16 9, u16 3, u32 1 | 105 / 284 / 27 / 0 | 344 | 91 | stg 404, engine 8, stage-specific 4 | engine.c:func_8012AD80 |
| 0x00A | 3225 | s16 1726, u16 1497, volatile s16 2 | 1866 / 1059 / 300 / 0 | 1884 | 146 | stg 3112, engine 82, abil 22, stage-specific 9 | engine.c:func_8012AE00 |
| 0x00C | 488 | s32 485, u16 3 | 109 / 320 / 59 / 0 | 378 | 86 | stg 473, engine 11, stage-specific 4 | engine.c:func_8012AD80 |
| 0x00E | 2447 | s16 1440, u16 1007 | 1465 / 799 / 183 / 0 | 1567 | 140 | stg 2346, engine 66, abil 19, stage-specific 16 | engine.c:func_8012AE00 |
| 0x010 | 613 | s32 602, s16 9, s32[] 2 | 181 / 412 / 20 / 0 | 346 | 84 | stg 576, engine 30, abil 4, stage-specific 3 | engine.c:func_8012AD80 |
| 0x012 | 557 | s16 302, u16 255 | 128 / 425 / 4 / 0 | 252 | 59 | stg 544, engine 10, abil 3 | engine_801458E0.c:func_80167540 |
| 0x014 | 749 | s32 716, s16 33 | 166 / 494 / 89 / 0 | 525 | 107 | stg 728, engine 15, stage-specific 4, abil 2 | engine.c:func_8012AD80 |
| 0x016 | 607 | s16 467, u16 140 | 60 / 531 / 16 / 0 | 391 | 85 | stg 596, engine 6, stage-specific 5 | engine_801458E0.c:func_80168BDC |
| 0x018 | 612 | s32 605, s16 7 | 174 / 424 / 14 / 0 | 347 | 82 | stg 586, engine 22, stage-specific 3, abil 1 | engine.c:func_8012AD80 |
| 0x01A | 497 | s16 292, u16 205 | 98 / 399 / 0 / 0 | 239 | 51 | stg 493, engine 4 | engine_801458E0.c:func_80168BDC |
| 0x01C | 5596 | s32 5588, u8 5, s16 3 | 1472 / 3418 / 706 / 0 | 2737 | 136 | stg 5474, engine 74, stage-specific 27, abil 21 | engine.c:func_8012BEE8 |
| 0x020 | 11519 | u8* 6797, s32 2839, void* 1781, ModelObj* 97, Sub* 2, T20* 2, u32 1 | 10523 / 996 / 0 / 0 | 4004 | 156 | stg 11280, engine 147, stage-specific 56, abil 36 | engine.c:func_8012AAAC |
| 0x024 | 23 | s16 14, s32 8, u16 1 | 8 / 15 / 0 / 0 | 16 | 14 | stg 21, abil 2 | sc01_077.c:func_sc01_077_80183324 |
| 0x026 | 2 | u16 1, s16 1 | 0 / 1 / 1 / 0 | 2 | 1 | stg 2 | sc01_084.c:func_sc01_084_80184090 |
| 0x028 | 11 | s32 9, u16 2 | 2 / 8 / 1 / 0 | 10 | 7 | stg 8, abil 2, engine 1 | engine_801458E0.c:func_8016C49C |
| 0x02A | 4 | s16 4 | 1 / 3 / 0 / 0 | 3 | 3 | stg 2, engine 2 | engine_801458E0.c:func_8016A08C |
| 0x02C | 207 | s32 206, u32 1 | 188 / 18 / 1 / 0 | 51 | 23 | stg 193, abil 8, engine 6 | engine_801458E0.c:func_80163C2C |
| 0x030 | 28 | s32 23, u8* 2, u32 2, u16 1 | 12 / 15 / 1 / 0 | 16 | 11 | stg 13, engine 8, abil 7 | engine_801458E0.c:func_80167540 |
| 0x034 | 4257 | u16 2509, s16 1692, u8* 44, s32 10, void* 1, u16* 1 | 1176 / 2115 / 966 / 0 | 1657 | 122 | stg 4130, stage-specific 107, engine 12, abil 8 | engine.c:func_8012AD44 |
| 0x036 | 162 | u16 99, s16 63 | 161 / 1 / 0 / 0 | 106 | 47 | stg 155, engine 6, abil 1 | engine.c:func_8012C890 |
| 0x038 | 185 | s32 179, MATRIX 3, AMtx 3 | 171 / 14 / 0 / 0 | 131 | 38 | stg 176, engine 6, abil 3 | engine.c:func_8012ADE4 |
| 0x03A | 95 | u16 61, s16 34 | 91 / 4 / 0 / 0 | 91 | 51 | stg 89, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x03C | 128 | s32 128 | 119 / 9 / 0 / 0 | 122 | 34 | stg 125, engine 3 | engine.c:func_8012ADE4 |
| 0x03E | 95 | u16 61, s16 34 | 91 / 4 / 0 / 0 | 91 | 51 | stg 89, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x040 | 179 | s32 179 | 170 / 9 / 0 / 0 | 125 | 34 | stg 176, engine 3 | engine.c:func_8012ADE4 |
| 0x042 | 98 | u16 63, s16 35 | 94 / 4 / 0 / 0 | 94 | 54 | stg 92, engine 5, stage-specific 1 | engine.c:func_8012AE00 |
| 0x044 | 96 | s32 96 | 10 / 82 / 4 / 0 | 65 | 26 | stg 75, engine 20, stage-specific 1 | engine.c:func_8012AD80 |
| 0x048 | 344 | s32 344 | 46 / 296 / 2 / 0 | 247 | 74 | stg 339, engine 4, stage-specific 1 | engine.c:func_8012AD80 |
| 0x04C | 93 | s32 81, void* 7, u8* 5 | 23 / 70 / 0 / 0 | 71 | 32 | stg 67, abil 18, engine 7, stage-specific 1 | engine.c:func_8012AD80 |
| 0x050 | 38 | s16 12, SV8 12, s32 8, u16 4, B8 2 | 17 / 21 / 0 / 0 | 29 | 21 | stg 22, engine 8, abil 8 | engine.c:func_8012B260 |
| 0x052 | 92 | s16 89, u16 3 | 11 / 78 / 3 / 0 | 74 | 36 | stg 82, engine 10 | engine.c:func_8012B260 |
| 0x054 | 23 | s16 16, u16 4, s32 3 | 9 / 14 / 0 / 0 | 21 | 14 | stg 12, engine 8, abil 3 | engine.c:func_8012B260 |
| 0x058 | 655 | s32 488, s32* 55, u32 48, u8* 47, void* 13, s16 2, u32* 1, AVec 1 | 97 / 556 / 2 / 0 | 534 | 112 | stg 628, engine 21, stage-specific 5, abil 1 | engine.c:func_8012AF0C |
| 0x05A | 2 | s16 2 | 2 / 0 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80163EC8 |
| 0x05C | 1471 | u16 860, s16 611 | 101 / 1151 / 219 / 0 | 1113 | 118 | stg 1435, engine 31, stage-specific 5 | engine.c:func_8012BF54 |
| 0x05E | 713 | s16 331, u16 326, u8 56 | 311 / 402 / 0 / 0 | 437 | 94 | stg 701, engine 11, abil 1 | engine.c:func_8012DBD0 |
| 0x060 | 335 | s16 254, u16 81 | 200 / 134 / 1 / 0 | 181 | 77 | stg 319, engine 10, abil 6 | engine.c:func_8012DBD0 |
| 0x062 | 193 | u16 131, s16 62 | 110 / 83 / 0 / 0 | 146 | 71 | stg 183, engine 6, abil 4 | engine.c:func_8012DBD0 |
| 0x064 | 1985 | u8* 1307, void* 389, s32 207, u16 76, StageActor* 3, s16 2, Player* 1 | 1930 / 55 / 0 / 0 | 874 | 112 | stg 1955, engine 27, abil 2, stage-specific 1 | engine.c:func_8012C890 |
| 0x066 | 3 | u16 2, s16 1 | 0 / 2 / 1 / 0 | 2 | 1 | engine 3 | engine_801458E0.c:func_80163C2C |
| 0x067 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x068 | 169 | void* 107, u8* 58, SpawnDef* 4 | 167 / 2 / 0 / 0 | 158 | 41 | stg 149, stage-specific 16, engine 4 | engine.c:func_8012C098 |
| 0x06C | 213 | s32 115, u8* 90, void* 8 | 109 / 104 / 0 / 0 | 137 | 54 | stg 213 | sc01_077.c:func_sc01_077_80184C0C |
| 0x070 | 3132 | s16 1660, u16 1447, u8 25 | 2837 / 240 / 55 / 0 | 1771 | 132 | stg 3098, engine 22, stage-specific 12 | engine.c:func_8012C890 |
| 0x072 | 435 | u16 417, s16 18 | 370 / 42 / 23 / 0 | 300 | 90 | stg 410, engine 23, stage-specific 2 | engine.c:SetScript |
| 0x074 | 62 | u8 62 | 62 / 0 / 0 / 0 | 56 | 32 | stg 61, engine 1 | engine.c:func_8012DFD4 |
| 0x075 | 316 | u8 315, s8 1 | 0 / 316 / 0 / 0 | 275 | 95 | stg 316 | sc01_077.c:func_sc01_077_801803B0 |
| 0x076 | 476 | s16 419, u16 57 | 248 / 151 / 77 / 0 | 286 | 77 | stg 464, engine 12 | engine.c:func_8012C354 |
| 0x078 | 262 | u8* 154, void* 53, s32 30, u16* 11, s16* 9, s32* 5 | 211 / 51 / 0 / 0 | 213 | 72 | stg 254, engine 8 | engine.c:func_8012C354 |
| 0x07C | 77 | s16 72, u16 5 | 14 / 63 / 0 / 0 | 76 | 34 | stg 71, engine 6 | engine.c:func_8012E9C0 |
| 0x07E | 77 | s16 72, u16 5 | 14 / 63 / 0 / 0 | 76 | 34 | stg 71, engine 6 | engine.c:func_8012E9C0 |
| 0x080 | 77 | s16 72, u16 5 | 14 / 63 / 0 / 0 | 76 | 34 | stg 71, engine 6 | engine.c:func_8012E9C0 |
| 0x082 | 85 | u16 47, s16 38 | 44 / 41 / 0 / 0 | 44 | 15 | stg 81, engine 4 | engine.c:func_8012E9C0 |
| 0x084 | 215 | s16 144, u16 71 | 74 / 115 / 26 / 0 | 78 | 43 | stg 213, stage-specific 2 | sc01_077.c:func_sc01_077_8017F714 |
| 0x086 | 123 | u16 116, s16 7 | 68 / 22 / 33 / 0 | 61 | 14 | stg 123 | sc01_077.c:func_sc01_077_80183324 |
| 0x088 | 299 | u16 172, s16 126, SV8 1 | 236 / 63 / 0 / 0 | 246 | 67 | stg 298, engine 1 | engine.c:func_8012C890 |
| 0x08A | 266 | u16 155, s16 111 | 203 / 63 / 0 / 0 | 221 | 75 | stg 264, engine 1, stage-specific 1 | engine.c:func_8012C890 |
| 0x08C | 281 | u16 153, s16 128 | 225 / 56 / 0 / 0 | 233 | 69 | stg 280, engine 1 | engine.c:func_8012C890 |
| 0x090 | 149 | u8* 79, s32 57, AnimEntry* 10, S12** 2, void* 1 | 140 / 8 / 0 / 1 | 100 | 45 | stg 138, engine 11 | engine.c:SetScript |
| 0x094 | 518 | s32 486, u32 32 | 395 / 100 / 23 / 0 | 360 | 69 | stg 500, engine 18 | engine.c:SetScript |
| 0x098 | 585 | s16 585 | 281 / 303 / 1 / 0 | 457 | 102 | stg 562, engine 22, stage-specific 1 | engine.c:func_8012A988 |
| 0x09A | 9 | s16 9 | 1 / 8 / 0 / 0 | 5 | 1 | engine 9 | engine.c:SetScript |
| 0x09C | 11 | AnimEntry* 11 | 3 / 8 / 0 / 0 | 5 | 1 | engine 11 | engine.c:SetScript |
| 0x0A4 | 10 | s32 10 | 4 / 6 / 0 / 0 | 2 | 2 | stg 10 | sc02_000.c:func_sc02_000_80188F60 |
| 0x0A8 | 12 | u16 8, s16 4 | 8 / 4 / 0 / 0 | 2 | 2 | stg 12 | sc02_000.c:func_sc02_000_80188F60 |
| 0x0AA | 56 | s16 56 | 32 / 24 / 0 / 0 | 52 | 21 | stg 53, engine 3 | engine.c:func_8012DF34 |
| 0x0AC | 25 | s16 25 | 4 / 13 / 8 / 0 | 21 | 10 | stg 19, engine 6 | engine_8012F5F4.c:func_8012F968 |
| 0x0AE | 295 | s16 269, u16 25, u8[] 1 | 12 / 276 / 7 / 0 | 265 | 90 | stg 294, engine 1 | engine.c:func_8012DBD0 |
| 0x0B0 | 57 | s32 37, u32 20 | 22 / 35 / 0 / 0 | 35 | 13 | stg 52, stage-specific 4, engine 1 | engine_8012F5F4.c:func_80131E00 |
| 0x0B4 | 340 | s32 304, u32 36 | 38 / 297 / 5 / 0 | 313 | 91 | stg 303, engine 36, stage-specific 1 | engine_8012F5F4.c:func_8012F68C |
| 0x0B8 | 3 | u16 3 | 3 / 0 / 0 / 0 | 3 | 3 | abil 3 | ovl15.c:func_ovl15_800CB140 |
| 0x0BC | 414 | u8* 225, s32* 154, s32 30, void* 5 | 6 / 408 / 0 / 0 | 303 | 85 | stg 408, engine 6 | engine_8012F5F4.c:func_80130D48 |
| 0x0C0 | 413 | u8 413 | 2 / 411 / 0 / 0 | 389 | 104 | stg 409, engine 2, stage-specific 2 | engine_801458E0.c:func_8017849C |
| 0x0C1 | 407 | u8 407 | 50 / 357 / 0 / 0 | 349 | 79 | stg 378, engine 28, stage-specific 1 | engine.c:func_8012A988 |
| 0x0C2 | 264 | u8 264 | 52 / 195 / 17 / 0 | 149 | 52 | stg 244, engine 20 | engine_8012F5F4.c:func_8012F5F4 |
| 0x0C3 | 84 | u8 84 | 28 / 39 / 17 / 0 | 62 | 28 | stg 78, engine 6 | engine_8012F5F4.c:func_801300F4 |
| 0x0C4 | 421 | s32 395, u32 26 | 152 / 154 / 115 / 0 | 275 | 82 | stg 396, engine 24, stage-specific 1 | engine_8012F5F4.c:func_8012F5F4 |
| 0x0C8 | 53 | u8 51, u32 2 | 53 / 0 / 0 / 0 | 52 | 17 | stg 51, engine 2 | engine_8012F5F4.c:func_80131B14 |
| 0x0C9 | 49 | u8 49 | 49 / 0 / 0 / 0 | 49 | 15 | stg 49 | sc02_026.c:func_sc02_026_8017E72C |
| 0x0CC | 1687 | s32 699, u8* 668, void* 246, s32* 27, WMtx* 17, s16* 12, u16* 9, u16 6, u32* 1, B8 1, s16 1 | 1118 / 565 / 4 / 0 | 1100 | 116 | stg 1634, stage-specific 42, engine 11 | engine_8013C98C.c:func_80142B2C |
| 0x0CE | 7 | u16 6, s16 1 | 0 / 7 / 0 / 0 | 7 | 6 | stg 7 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0D0 | 752 | s32 338, u8* 318, void* 55, WMtx* 17, s32* 10, u16 6, s16* 5, s16 3 | 519 / 233 / 0 / 0 | 480 | 91 | stg 745, stage-specific 7 | sc01_005.c:func_sc01_005_80180A38 |
| 0x0D2 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc05_008.c:func_sc05_008_8017E354 |
| 0x0D4 | 261 | s32 185, u8* 65, u16 6, void* 3, s16* 2 | 125 / 136 / 0 / 0 | 182 | 46 | stg 245, stage-specific 14, engine 2 | engine_801458E0.c:func_80178D40 |
| 0x0D6 | 6 | u16 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0D8 | 144 | s32 65, u8* 37, U12x9* 27, u16 6, void* 4, s16* 2, s16 2, B6C* 1 | 60 / 84 / 0 / 0 | 110 | 57 | stg 140, stage-specific 3, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0DC | 1160 | s32 593, s16 233, u8* 128, void* 117, u16 76, s32* 7, u32 3, s16* 3 | 640 / 399 / 121 / 0 | 775 | 120 | stg 1152, stage-specific 5, engine 3 | engine.c:func_8012C890 |
| 0x0DD | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801519C8 |
| 0x0DE | 291 | s16 185, u16 88, u8 18 | 147 / 135 / 9 / 0 | 190 | 66 | stg 277, engine 11, stage-specific 3 | engine_801458E0.c:func_801519C8 |
| 0x0DF | 12 | u8 12 | 0 / 12 / 0 / 0 | 12 | 7 | stg 6, engine 6 | engine_801458E0.c:func_8015220C |
| 0x0E0 | 934 | s32 779, s16 153, u16 2 | 390 / 298 / 246 / 0 | 484 | 87 | stg 927, stage-specific 6, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0E2 | 190 | s16 135, u16 55 | 52 / 136 / 2 / 0 | 78 | 24 | stg 190 | sc01_077.c:func_sc01_077_80180B64 |
| 0x0E4 | 501 | s32 381, s16 111, u16 5, u32 3, u8* 1 | 206 / 240 / 55 / 0 | 276 | 67 | stg 494, stage-specific 7 | sc01_077.c:func_sc01_077_8017F5BC |
| 0x0E6 | 77 | s16 71, u16 6 | 26 / 47 / 4 / 0 | 46 | 23 | stg 77 | sc01_005.c:func_sc01_005_80180BDC |
| 0x0E8 | 585 | s32 404, s16 133, s16* 20, u16* 20, u16 8 | 243 / 276 / 66 / 0 | 293 | 66 | stg 574, stage-specific 11 | sc01_077.c:func_sc01_077_801863B4 |
| 0x0EA | 85 | s16 81, u16 4 | 35 / 48 / 2 / 0 | 35 | 21 | stg 81, stage-specific 4 | sc01_077.c:func_sc01_077_801863B4 |
| 0x0EC | 114 | s32 48, s16 47, S12 10, u8 6, s32* 3 | 49 / 60 / 5 / 0 | 85 | 37 | stg 113, stage-specific 1 | sc02_017.c:func_sc02_017_8017FE78 |
| 0x0ED | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0EE | 29 | s16 23, u8 6 | 6 / 23 / 0 / 0 | 26 | 11 | stg 29 | sc03_089.c:func_sc03_089_801858BC |
| 0x0F0 | 44 | s32 32, s16 6, u8 6 | 13 / 29 / 2 / 0 | 27 | 19 | stg 44 | sc01_080.c:func_sc01_080_8017F53C |
| 0x0F1 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0F2 | 56 | s16 45, u8 7, u16 4 | 21 / 22 / 13 / 0 | 33 | 9 | stg 48, engine 8 | engine_801458E0.c:func_80151238 |
| 0x0F4 | 97 | s32 34, s16 34, u16 16, u8* 7, u8 6 | 39 / 52 / 6 / 0 | 60 | 27 | stg 94, engine 3 | engine_801458E0.c:func_801519C8 |
| 0x0F5 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0F6 | 33 | s16 19, u16 7, u8 7 | 10 / 22 / 1 / 0 | 28 | 15 | stg 31, engine 2 | engine_801458E0.c:func_8015F260 |
| 0x0F8 | 61 | s32 24, s16 14, u16 11, u8* 6, u8 6 | 19 / 42 / 0 / 0 | 38 | 22 | stg 60, engine 1 | engine_801458E0.c:func_80178D40 |
| 0x0F9 | 6 | u8 6 | 0 / 6 / 0 / 0 | 6 | 6 | stg 6 | sc06_018.c:func_sc06_018_80189D64 |
| 0x0FA | 23 | s16 13, u8 6, u16 4 | 7 / 15 / 1 / 0 | 16 | 12 | stg 23 | sc01_005.c:func_sc01_005_80181894 |
| 0x0FC | 2839 | s16 2235, u16 550, u8 35, S12 8, s32 6, SV8 5 | 1464 / 1189 / 186 / 0 | 1479 | 127 | stg 2806, engine 22, stage-specific 11 | engine.c:func_8012C890 |
| 0x0FD | 4 | u8 4 | 0 / 4 / 0 / 0 | 4 | 4 | stg 4 | sc03_089.c:func_sc03_089_801858BC |
| 0x0FE | 2171 | s16 1724, u16 435, u8 12 | 854 / 1185 / 132 / 0 | 1255 | 119 | stg 2154, stage-specific 13, engine 4 | engine_8013C98C.c:func_801424E4 |
| 0x0FF | 5 | u8 5 | 1 / 2 / 2 / 0 | 4 | 2 | stg 5 | sc03_007.c:func_sc03_007_801810E4 |
| 0x100 | 1359 | s16 891, u16 455, u8 9, s32 4 | 563 / 647 / 149 / 0 | 754 | 112 | stg 1338, stage-specific 13, engine 8 | engine_8013C98C.c:func_80142838 |
| 0x102 | 809 | s16 605, u16 177, u8 27 | 297 / 414 / 98 / 0 | 393 | 94 | stg 804, engine 3, stage-specific 2 | engine_8013C98C.c:func_80142C9C |
| 0x104 | 600 | s16 492, u16 104, SV8 4 | 295 / 274 / 31 / 0 | 236 | 77 | stg 597, stage-specific 3 | sc01_005.c:func_sc01_005_8017F790 |
| 0x105 | 9 | u8 9 | 1 / 8 / 0 / 0 | 9 | 5 | stage-specific 5, stg 4 | sc03_002.c:func_sc03_002_80181548 |
| 0x106 | 510 | s16 389, u16 121 | 208 / 220 / 82 / 0 | 227 | 81 | stg 500, stage-specific 10 | sc01_005.c:func_sc01_005_8017F790 |
| 0x108 | 447 | s16 347, u16 60, u8 40 | 174 / 218 / 55 / 0 | 254 | 56 | stg 436, stage-specific 11 | sc01_005.c:func_sc01_005_8017F790 |
| 0x109 | 22 | u8 22 | 10 / 11 / 1 / 0 | 22 | 11 | stg 20, stage-specific 2 | sc03_002.c:func_sc03_002_80183480 |
| 0x10A | 441 | s16 413, u16 28 | 154 / 266 / 21 / 0 | 272 | 78 | stg 434, stage-specific 6, engine 1 | engine_801458E0.c:func_80178D40 |

## Appendix B. The census, through pointer fields

Accesses to what an object's pointer field points to, grouped by that field (fields with at least 15 accesses).
These identify the pointed-to structs: +0x20 is the model (`ModelObj`), +0x64 the parent object, +0x68 the spawn
definition, +0x78 the init record, +0xCC / +0xD0 / +0xDC per-kind pointers.

### Through +0x20 (11202 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 5 | s16 4, u16 1 | 1 / 4 / 0 / 0 | 5 | 5 | stg 4, engine 1 | engine.c:func_8012C890 |
| 0x002 | 3 | s16 3 | 0 / 3 / 0 / 0 | 3 | 3 | stg 3 | sc06_022.c:func_sc06_022_80181664 |
| 0x004 | 1275 | s32 1213, u32 42, TB 20 | 373 / 316 / 586 / 0 | 728 | 116 | stg 1247, abil 19, engine 8, stage-specific 1 | engine.c:func_8012E88C |
| 0x008 | 12 | s16 9, B8 2, SV8 1 | 9 / 3 / 0 / 0 | 12 | 10 | stg 10, engine 2 | engine.c:func_8012C890 |
| 0x00A | 9 | s16 9 | 5 / 4 / 0 / 0 | 9 | 8 | stg 7, engine 2 | engine.c:func_8012C890 |
| 0x00C | 9 | s16 9 | 6 / 3 / 0 / 0 | 9 | 9 | stg 7, engine 2 | engine.c:func_8012C890 |
| 0x010 | 1241 | s16 723, u16 450, SV8 40, B8 19, s32 3, SVECTOR 3, AVec 3 | 278 / 734 / 226 / 3 | 712 | 120 | stg 1182, engine 46, abil 11, stage-specific 2 | engine.c:func_8012B2CC |
| 0x012 | 3781 | s16 2191, u16 1590 | 1519 / 1139 / 1123 / 0 | 1873 | 138 | stg 3673, engine 58, stage-specific 31, abil 19 | engine.c:func_8012B8E4 |
| 0x014 | 544 | s16 339, u16 205 | 120 / 264 / 160 / 0 | 363 | 92 | stg 534, engine 6, abil 4 | engine_8012F5F4.c:func_80131B14 |
| 0x018 | 1175 | s16 810, u16 316, SV8 27, B8 21, SVECTOR 1 | 301 / 773 / 100 / 1 | 678 | 119 | stg 1150, engine 18, abil 7 | engine.c:func_8012E4C8 |
| 0x01A | 1020 | s16 676, u16 344 | 207 / 716 / 97 / 0 | 605 | 117 | stg 995, engine 14, abil 11 | engine.c:func_8012E364 |
| 0x01C | 538 | s16 386, u16 152 | 76 / 440 / 22 / 0 | 371 | 103 | stg 532, engine 4, abil 2 | engine.c:func_8012E4C8 |
| 0x020 | 117 | s32 57, u8* 51, void* 4, u16* 3, s32* 1, s16* 1 | 28 / 89 / 0 / 0 | 93 | 45 | stg 109, engine 7, stage-specific 1 | engine.c:func_8012AAAC |
| 0x024 | 84 | u8* 44, s32 20, s32* 16, void* 3, u8 1 | 51 / 33 / 0 / 0 | 39 | 24 | stg 81, stage-specific 2, abil 1 | sc01_005.c:func_sc01_005_801812B0 |
| 0x025 | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl27.c:func_ovl27_800CB190 |
| 0x026 | 1 | u8 1 | 0 / 1 / 0 / 0 | 1 | 1 | abil 1 | ovl27.c:func_ovl27_800CB190 |
| 0x028 | 31 | s32 29, u16 2 | 0 / 31 / 0 / 0 | 31 | 17 | stg 29, abil 2 | sc02_005.c:func_sc02_005_801816FC |
| 0x02A | 2 | u16 2 | 0 / 2 / 0 / 0 | 2 | 1 | abil 2 | ovl33.c:func_ovl33_800CD0CC |
| 0x02C | 721 | u16 701, s16 20 | 190 / 189 / 342 / 0 | 485 | 108 | stg 718, abil 2, engine 1 | engine_8012F5F4.c:func_801308DC |
| 0x02E | 2 | u16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc03_114.c:func_sc03_114_8017D110 |
| 0x030 | 33 | GameCoord2.coord 23, s16 10 | 23 / 4 / 2 / 4 | 18 | 4 | engine 23, stg 10 | engine.c:func_8012B14C |
| 0x034 | 12 | AMtx 4, V16 3, WMtx 2, MATRIX 2, AMtx* 1 | 6 / 6 / 0 / 0 | 12 | 11 | stg 5, abil 5, engine 2 | engine_801458E0.c:func_80163A94 |
| 0x044 | 3 | V16 3 | 0 / 3 / 0 / 0 | 3 | 3 | stg 3 | sc02_011.c:func_sc02_011_80187654 |
| 0x048 | 154 | s32 154 | 145 / 7 / 2 / 0 | 139 | 33 | stg 153, engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x04C | 154 | s32 154 | 147 / 5 / 2 / 0 | 138 | 31 | stg 153, engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x050 | 154 | s32 154 | 145 / 7 / 2 / 0 | 139 | 33 | stg 153, engine 1 | engine_801458E0.c:func_80163EC8 |
| 0x068 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80181DF8 |
| 0x06C | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80181DF8 |
| 0x070 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_80181DF8 |
| 0x080 | 118 | u8* 69, s32 25, s32* 11, s16* 6, SV8* 4, void* 2, B8* 1 | 3 / 115 / 0 / 0 | 99 | 61 | stg 117, abil 1 | sc01_077.c:func_sc01_077_801865EC |

### Through +0x34 (133 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80167540 |
| 0x006 | 39 | s16 36, u16 3 | 39 / 0 / 0 / 0 | 39 | 37 | stg 32, abil 4, engine 2, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x00A | 39 | s16 37, u16 2 | 39 / 0 / 0 / 0 | 39 | 37 | stg 32, abil 4, engine 2, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x00E | 39 | s16 36, u16 3 | 39 / 0 / 0 / 0 | 39 | 37 | stg 32, abil 4, engine 2, stage-specific 1 | engine_801458E0.c:func_80167540 |
| 0x020 | 9 | u8* 9 | 9 / 0 / 0 / 0 | 5 | 4 | abil 6, engine 3 | engine_801458E0.c:func_80167540 |
| 0x036 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl13.c:func_ovl13_800CB6E4 |
| 0x038 | 1 | MATRIX 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8016DF5C |
| 0x044 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_801678F0 |
| 0x04C | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80167540 |
| 0x058 | 1 | s32 1 | 1 / 0 / 0 / 0 | 1 | 1 | abil 1 | ovl13.c:func_ovl13_800CB6E4 |

### Through +0x4C (26 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x020 | 11 | void* 6, u8* 5 | 11 / 0 / 0 / 0 | 6 | 6 | abil 7, engine 4 | engine_801458E0.c:func_80163A94 |
| 0x044 | 2 | s32 2 | 0 / 0 / 2 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_80163A94 |
| 0x100 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80163A94 |
| 0x102 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163A94 |
| 0x104 | 2 | u16 2 | 2 / 0 / 0 / 0 | 2 | 2 | engine 1, abil 1 | engine_801458E0.c:func_80163A94 |
| 0x184 | 2 | u8* 1, s32 1 | 1 / 1 / 0 / 0 | 1 | 1 | engine 2 | engine_801458E0.c:func_80163C2C |
| 0x188 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x18A | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x194 | 1 | u16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_80163C2C |
| 0x1C8 | 3 | u16 2, s16 1 | 3 / 0 / 0 / 0 | 2 | 1 | abil 3 | ovl33.c:func_ovl33_800CD0CC |

### Through +0x64 (1661 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc07_006.c:func_sc07_006_8017D67C |
| 0x002 | 35 | u16 24, s16 11 | 16 / 10 / 9 / 0 | 21 | 9 | stg 35 | sc02_017.c:func_sc02_017_80184084 |
| 0x004 | 67 | s32 67 | 67 / 0 / 0 / 0 | 67 | 39 | stg 67 | sc01_077.c:func_sc01_077_80184D50 |
| 0x006 | 44 | u16 25, s16 19 | 34 / 0 / 10 / 0 | 34 | 20 | stg 42, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x008 | 68 | s32 68 | 68 / 0 / 0 / 0 | 68 | 40 | stg 68 | sc01_077.c:func_sc01_077_80184D50 |
| 0x00A | 52 | s16 32, u16 20 | 52 / 0 / 0 / 0 | 44 | 23 | stg 49, engine 3 | engine_8013C98C.c:func_801424E4 |
| 0x00C | 69 | s32 69 | 69 / 0 / 0 / 0 | 69 | 41 | stg 68, engine 1 | engine_8013C98C.c:func_801424E4 |
| 0x00E | 52 | s16 33, u16 19 | 48 / 0 / 4 / 0 | 44 | 26 | stg 50, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x010 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x014 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x018 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc04_011.c:func_sc04_011_8018A1B4 |
| 0x01C | 9 | s32 9 | 0 / 0 / 9 / 0 | 3 | 3 | stg 9 | sc06_018.c:func_sc06_018_80191320 |
| 0x020 | 534 | u8* 384, void* 122, s32 28 | 534 / 0 / 0 / 0 | 312 | 77 | stg 532, engine 1, stage-specific 1 | engine_8013C98C.c:func_80144458 |
| 0x034 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 1 | stg 2 | sc02_011.c:func_sc02_011_80184E00 |
| 0x036 | 239 | s16 122, u16 117 | 239 / 0 / 0 / 0 | 239 | 72 | stg 237, engine 2 | engine_8013C98C.c:func_80144364 |
| 0x058 | 2 | s32 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 1, engine 1 | engine_8013C98C.c:func_8014477C |
| 0x05C | 1 | u16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc03_028.c:func_sc03_028_80182F3C |
| 0x05E | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc04_015.c:func_sc04_015_8017F600 |
| 0x064 | 1 | void* 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_000.c:func_sc06_000_801830C4 |
| 0x068 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc02_027.c:func_sc02_027_801815E8 |
| 0x06C | 5 | s32 3, void* 2 | 3 / 2 / 0 / 0 | 5 | 3 | stg 5 | sc03_028.c:func_sc03_028_801879AC |
| 0x070 | 102 | s16 101, u16 1 | 102 / 0 / 0 / 0 | 60 | 35 | stg 102 | sc02_026.c:func_sc02_026_8017FEE0 |
| 0x076 | 4 | s16 4 | 3 / 0 / 1 / 0 | 3 | 2 | stg 4 | sc02_005.c:func_sc02_005_80183D90 |
| 0x090 | 7 | u8* 5, s32 2 | 7 / 0 / 0 / 0 | 7 | 6 | stg 7 | sc01_077.c:func_sc01_077_80184D50 |
| 0x0C1 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc03_028.c:func_sc03_028_80182F3C |
| 0x0CC | 71 | s32 52, u8* 7, s16 6, u16 6 | 57 / 14 / 0 / 0 | 53 | 18 | stg 71 | sc02_005.c:func_sc02_005_801844D4 |
| 0x0CE | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D0 | 28 | s32 16, s16 6, u16 6 | 19 / 9 / 0 / 0 | 28 | 8 | stg 28 | sc06_008.c:func_sc06_008_801823F0 |
| 0x0D4 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D6 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0D8 | 12 | s16 6, u16 6 | 12 / 0 / 0 / 0 | 12 | 6 | stg 12 | sc06_018.c:func_sc06_018_80189A34 |
| 0x0DC | 11 | u8* 4, s32 4, s32* 3 | 11 / 0 / 0 / 0 | 11 | 10 | stg 11 | sc02_026.c:func_sc02_026_8017DDC4 |
| 0x0E0 | 23 | s32 22, s16 1 | 14 / 0 / 9 / 0 | 15 | 13 | stg 23 | sc02_005.c:func_sc02_005_801846CC |
| 0x0E2 | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc03_117.c:func_sc03_117_8017F02C |
| 0x0E4 | 2 | s32 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018B774 |
| 0x0E8 | 6 | s32 6 | 3 / 0 / 3 / 0 | 5 | 1 | stg 6 | sc02_005.c:func_sc02_005_80184358 |
| 0x0F0 | 3 | s32 3 | 3 / 0 / 0 / 0 | 3 | 1 | stg 3 | sc01_080.c:func_sc01_080_8017FFB4 |
| 0x0F4 | 6 | s32 6 | 6 / 0 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80192B60 |
| 0x0F8 | 31 | s32 31 | 3 / 27 / 1 / 0 | 3 | 3 | stg 31 | sc03_014_post.c:func_sc03_014_80187884 |
| 0x0FC | 48 | s16 40, u16 8 | 41 / 6 / 1 / 0 | 42 | 29 | stg 48 | sc02_005.c:func_sc02_005_801898F4 |
| 0x0FE | 35 | s16 33, u16 2 | 33 / 2 / 0 / 0 | 32 | 25 | stg 35 | sc02_026.c:func_sc02_026_8017FEE0 |
| 0x100 | 30 | u16 24, s16 6 | 28 / 2 / 0 / 0 | 29 | 24 | stg 30 | sc02_005.c:func_sc02_005_80188BF0 |
| 0x102 | 2 | u16 1, s16 1 | 1 / 0 / 1 / 0 | 2 | 2 | stg 2 | sc02_005.c:func_sc02_005_8018CB70 |
| 0x104 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc01_005.c:func_sc01_005_8018165C |
| 0x106 | 4 | s16 4 | 2 / 0 / 2 / 0 | 2 | 2 | stg 4 | sc06_022.c:func_sc06_022_8017FEF8 |
| 0x108 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc03_117.c:func_sc03_117_8017FA00 |
| 0x10A | 3 | s16 3 | 3 / 0 / 0 / 0 | 3 | 3 | stg 3 | sc05_010.c:func_sc05_010_8018624C |

### Through +0x68 (179 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x00A | 30 | u16 30 | 14 / 14 / 2 / 0 | 16 | 11 | stg 30 | sc02_011.c:func_sc02_011_8018DBF4 |
| 0x00C | 149 | s16 134, u16 15 | 24 / 125 / 0 / 0 | 140 | 34 | stg 133, stage-specific 16 | sc02_000.c:func_sc02_000_8018694C |

### Through +0x6C (74 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 8 | s16 8 | 0 / 8 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x006 | 10 | s16 8, u16 2 | 3 / 5 / 2 / 0 | 5 | 5 | stg 10 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x00A | 10 | s16 6, u16 4 | 4 / 6 / 0 / 0 | 8 | 6 | stg 10 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x00E | 6 | s16 6 | 2 / 4 / 0 / 0 | 6 | 5 | stg 6 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x020 | 8 | u8* 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x034 | 2 | s16 2 | 0 / 0 / 2 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80187884 |
| 0x06C | 8 | u8* 8 | 8 / 0 / 0 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x070 | 8 | s16 8 | 0 / 0 / 8 / 0 | 8 | 8 | stg 8 | sc03_107.c:func_sc03_107_801806F0 |
| 0x074 | 1 | u8 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc05_010.c:func_sc05_010_80180214 |
| 0x076 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80185380 |
| 0x0CC | 5 | u8* 5 | 5 / 0 / 0 / 0 | 5 | 5 | stg 5 | sc06_018.c:func_sc06_018_80192768 |
| 0x0F4 | 6 | s32 6 | 6 / 0 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80192768 |

### Through +0x78 (154 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 28 | u16 21, s16 7 | 28 / 0 / 0 / 0 | 28 | 24 | stg 28 | sc02_016.c:func_sc02_016_80181AE8 |
| 0x002 | 68 | u16 59, s16 9 | 68 / 0 / 0 / 0 | 67 | 33 | stg 68 | sc01_077.c:func_sc01_077_80184594 |
| 0x008 | 2 | s32 2 | 2 / 0 / 0 / 0 | 2 | 1 | stg 2 | sc07_001.c:func_sc07_001_8017E4DC |
| 0x030 | 56 | s16 56 | 56 / 0 / 0 / 0 | 56 | 17 | stg 56 | sc02_026.c:func_sc02_026_8017E72C |

### Through +0xCC (1108 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 33 | s16 29, u16 4 | 4 / 29 / 0 / 0 | 28 | 18 | stg 33 | sc02_011.c:func_sc02_011_80186070 |
| 0x002 | 31 | s16 31 | 0 / 31 / 0 / 0 | 29 | 17 | stg 31 | sc03_024.c:func_sc03_024_801830A8 |
| 0x004 | 98 | s32 49, s16 48, u32 1 | 42 / 26 / 30 / 0 | 42 | 22 | stg 94, engine 4 | engine_8013C98C.c:func_801439FC |
| 0x006 | 20 | s16 15, u16 5 | 12 / 7 / 1 / 0 | 12 | 12 | stg 19, stage-specific 1 | sc02_005.c:func_sc02_005_80185214 |
| 0x008 | 87 | s16 54, u16 26, s32 4, B8 2, SV8 1 | 0 / 86 / 1 / 0 | 79 | 39 | stg 81, engine 4, stage-specific 2 | engine_8013C98C.c:func_801439FC |
| 0x00A | 99 | s16 73, u16 26 | 3 / 89 / 7 / 0 | 86 | 44 | stg 92, engine 4, stage-specific 3 | engine_8013C98C.c:func_801439FC |
| 0x00C | 80 | s16 56, u16 24 | 0 / 79 / 1 / 0 | 75 | 37 | stg 74, engine 4, stage-specific 2 | engine_8013C98C.c:func_801439FC |
| 0x00E | 12 | s16 11, u16 1 | 3 / 8 / 1 / 0 | 7 | 7 | stg 11, stage-specific 1 | sc02_005.c:func_sc02_005_80185214 |
| 0x010 | 23 | s16 11, u16 6, s32 6 | 0 / 20 / 3 / 0 | 16 | 9 | stg 20, engine 3 | engine_8013C98C.c:func_801439FC |
| 0x012 | 20 | s16 12, u16 8 | 0 / 20 / 0 / 0 | 16 | 11 | stg 17, engine 3 | engine_8013C98C.c:func_801439FC |
| 0x014 | 30 | u16 19, s16 11 | 6 / 21 / 3 / 0 | 21 | 13 | stg 28, engine 2 | engine_8013C98C.c:func_801439FC |
| 0x016 | 6 | s16 6 | 0 / 6 / 0 / 0 | 3 | 3 | stg 6 | sc06_018.c:func_sc06_018_80191320 |
| 0x018 | 167 | s16 148, u16 13, s32 6 | 49 / 69 / 49 / 0 | 90 | 36 | stg 166, engine 1 | engine_8013C98C.c:func_80143EBC |
| 0x01A | 118 | s16 95, u16 23 | 11 / 59 / 48 / 0 | 85 | 34 | stg 117, engine 1 | engine_8013C98C.c:func_80143EBC |
| 0x01C | 11 | s32 7, s16 4 | 0 / 9 / 2 / 0 | 11 | 10 | stg 11 | sc02_000.c:func_sc02_000_80186530 |
| 0x020 | 38 | u8* 23, s32 8, void* 7 | 30 / 8 / 0 / 0 | 21 | 9 | stg 37, stage-specific 1 | sc02_005.c:func_sc02_005_801822EC |
| 0x027 | 24 | u8 24 | 0 / 24 / 0 / 0 | 11 | 9 | stg 24 | sc02_031.c:func_sc02_031_80182CF4 |
| 0x02C | 9 | u16 9 | 0 / 3 / 6 / 0 | 9 | 6 | stg 9 | sc01_077.c:func_sc01_077_80183DE0 |
| 0x036 | 31 | s16 31 | 31 / 0 / 0 / 0 | 25 | 6 | stg 31 | sc06_033.c:func_sc06_033_8017E69C |
| 0x050 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018A7C8 |
| 0x054 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc06_018.c:func_sc06_018_8018A7C8 |
| 0x076 | 2 | s16 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_801809F4 |
| 0x080 | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc03_105.c:func_sc03_105_80188D88 |
| 0x098 | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc06_008.c:func_sc06_008_80181CF0 |
| 0x0B0 | 130 | s32 130 | 0 / 130 / 0 / 0 | 129 | 8 | stg 101, stage-specific 29 | sc03_002.c:func_sc03_002_801815AC |
| 0x0CC | 3 | void* 2, u8* 1 | 3 / 0 / 0 / 0 | 3 | 2 | stg 3 | sc06_024.c:func_sc06_024_8017FA1C |
| 0x0DC | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc02_017.c:func_sc02_017_80181090 |
| 0x0E8 | 4 | s32 4 | 3 / 0 / 1 / 0 | 4 | 1 | stg 4 | sc02_005.c:func_sc02_005_80185060 |
| 0x0FC | 10 | s16 10 | 0 / 10 / 0 / 0 | 10 | 5 | stg 10 | sc03_089.c:func_sc03_089_80184730 |
| 0x0FE | 1 | s16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc02_005.c:func_sc02_005_80185060 |
| 0x108 | 8 | s16 8 | 0 / 8 / 0 / 0 | 7 | 7 | stg 7, stage-specific 1 | sc03_002.c:func_sc03_002_801815AC |

### Through +0xD0 (238 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 31 | s16 31 | 0 / 31 / 0 / 0 | 31 | 31 | stg 31 | sc01_005.c:func_sc01_005_80181894 |
| 0x002 | 8 | s16 7, u16 1 | 0 / 7 / 1 / 0 | 8 | 8 | stg 8 | sc04_000.c:func_sc04_000_80180020 |
| 0x004 | 10 | s32 10 | 10 / 0 / 0 / 0 | 10 | 10 | stg 9, stage-specific 1 | sc03_002.c:func_sc03_002_80182E04 |
| 0x008 | 18 | s32 12, u16 4, s16 2 | 12 / 4 / 2 / 0 | 18 | 15 | stg 17, stage-specific 1 | sc02_000.c:func_sc02_000_80184358 |
| 0x00A | 4 | u16 4 | 0 / 4 / 0 / 0 | 4 | 2 | stg 4 | sc02_000.c:func_sc02_000_80184358 |
| 0x00C | 18 | s32 10, u16 4, s16 4 | 10 / 4 / 4 / 0 | 16 | 14 | stg 17, stage-specific 1 | sc02_000.c:func_sc02_000_80184358 |
| 0x010 | 6 | u16 4, s16 2 | 0 / 4 / 2 / 0 | 6 | 4 | stg 6 | sc02_000.c:func_sc02_000_80184358 |
| 0x012 | 12 | u16 8, s16 4 | 0 / 10 / 2 / 0 | 12 | 10 | stg 12 | sc02_000.c:func_sc02_000_80184358 |
| 0x014 | 4 | u16 4 | 0 / 4 / 0 / 0 | 4 | 2 | stg 4 | sc02_000.c:func_sc02_000_80184358 |
| 0x018 | 30 | u16 29, s16 1 | 1 / 29 / 0 / 0 | 28 | 28 | stg 30 | sc02_011.c:func_sc02_011_8017D204 |
| 0x01A | 56 | u16 55, s16 1 | 27 / 29 / 0 / 0 | 28 | 28 | stg 56 | sc02_011.c:func_sc02_011_8017D204 |
| 0x01C | 7 | s32 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc06_008.c:func_sc06_008_80181B20 |
| 0x020 | 2 | u8* 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_8017FB9C |
| 0x027 | 10 | u8 10 | 0 / 10 / 0 / 0 | 10 | 9 | stg 10 | sc02_031.c:func_sc02_031_80182CF4 |
| 0x02C | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc02_011.c:func_sc02_011_80186070 |
| 0x034 | 2 | u16 2 | 0 / 0 / 2 / 0 | 2 | 1 | stg 2 | sc03_105.c:func_sc03_105_8018624C |
| 0x036 | 1 | s16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_033.c:func_sc06_033_8017E69C |
| 0x054 | 4 | s16 4 | 0 / 4 / 0 / 0 | 2 | 2 | stg 4 | sc06_022.c:func_sc06_022_801809F4 |
| 0x098 | 7 | s16 7 | 0 / 7 / 0 / 0 | 7 | 7 | stg 7 | sc06_008.c:func_sc06_008_80181B20 |
| 0x0DC | 1 | s32 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc02_017.c:func_sc02_017_8018104C |

### Through +0xD8 (16 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x002 | 1 | u16 1 | 0 / 0 / 1 / 0 | 1 | 1 | stg 1 | sc04_000.c:func_sc04_000_80180020 |
| 0x004 | 10 | s32 9, u32 1 | 0 / 0 / 10 / 0 | 9 | 3 | stg 10 | sc01_005.c:func_sc01_005_801812B0 |
| 0x008 | 1 | SV8 1 | 0 / 1 / 0 / 0 | 1 | 1 | stg 1 | sc06_024.c:func_sc06_024_8017EC4C |
| 0x020 | 2 | u8* 2 | 2 / 0 / 0 / 0 | 2 | 2 | stg 2 | sc06_022.c:func_sc06_022_8017FB9C |
| 0x034 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 2 | stg 2 | sc03_014_post.c:func_sc03_014_80185380 |

### Through +0xDC (497 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 72 | s32 72 | 72 / 0 / 0 / 0 | 36 | 33 | stg 72 | sc02_011.c:func_sc02_011_8018EDE8 |
| 0x004 | 71 | s32 71 | 71 / 0 / 0 / 0 | 67 | 44 | stg 71 | sc02_011.c:func_sc02_011_8017D150 |
| 0x006 | 1 | u16 1 | 1 / 0 / 0 / 0 | 1 | 1 | stg 1 | sc06_029.c:func_sc06_029_801891D0 |
| 0x008 | 123 | u16 96, s32 27 | 123 / 0 / 0 / 0 | 91 | 44 | stg 123 | sc02_011.c:func_sc02_011_8017D150 |
| 0x00A | 99 | u16 99 | 99 / 0 / 0 / 0 | 67 | 32 | stg 99 | sc02_011.c:func_sc02_011_8018ECE4 |
| 0x00C | 131 | u16 96, s32 35 | 131 / 0 / 0 / 0 | 63 | 44 | stg 131 | sc02_011.c:func_sc02_011_8017D204 |

### Through +0x178 (18 accesses)

| off | n | types | R / W / RW / & | funcs | files | areas | example |
|---|---|---|---|---|---|---|---|
| 0x000 | 4 | u16 4 | 4 / 0 / 0 / 0 | 2 | 1 | engine 4 | engine_801458E0.c:func_8015D738 |
| 0x006 | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D5E8 |
| 0x00A | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D5E8 |
| 0x00E | 2 | s16 2 | 0 / 2 / 0 / 0 | 2 | 1 | engine 2 | engine_801458E0.c:func_8015D5E8 |
| 0x020 | 1 | u8* 1 | 1 / 0 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D738 |
| 0x078 | 6 | void* 3, u8* 3 | 6 / 0 / 0 / 0 | 2 | 1 | engine 6 | engine_801458E0.c:func_8015D5E8 |
| 0x0FC | 1 | s16 1 | 0 / 1 / 0 / 0 | 1 | 1 | engine 1 | engine_801458E0.c:func_8015D57C |

## Appendix C. The census script

```python
#!/usr/bin/env python3
"""Offset census of object pointers in the matched C (r273).

Parses every src/**/*.c into functions, records every constant-offset access through a pointer variable
(AF(p,T,off), *(T *)(p + off), *(T *)((u8 *)p + off), p[off] on byte pointers, and p->field / G.field on the
typed structs of include/game.h), then decides which pointer variables are game objects by propagation over the
call graph, and writes the census as JSON plus a TSV.
"""
import json, os, re, sys
from collections import defaultdict, Counter

ROOT = sys.argv[1] if len(sys.argv) > 1 else '.'
OUT = sys.argv[2] if len(sys.argv) > 2 else 'census'

SIZES = {'s8': 1, 'u8': 1, 's16': 2, 'u16': 2, 's32': 4, 'u32': 4, 'char': 1, 'short': 2, 'int': 4, 'long': 4,
         'unsigned char': 1, 'unsigned short': 2, 'signed char': 1}
KEYWORDS = set('if while for switch return sizeof AF do else case goto break continue'.split())
OBJ_TYPES = {'StageActor': 'actor', 'Mover': 'mover', 'Player': 'player'}
PLAYER_SYM = 'D_80126B58'
PLAYER_ADDR = 0x80126B58

# ---------------------------------------------------------------- struct layouts from include/game.h
def parse_structs(path):
    txt = open(path).read()
    structs = {}
    for m in re.finditer(r'typedef struct(?: \w+)? \{(.*?)\}\s*(\w+);', txt, re.S):
        body, name = m.group(1), m.group(2)
        fields = {}
        for fm in re.finditer(r'/\* 0x([0-9A-Fa-f]+) \*/\s*([\w ]+?)\s*(\*?)\s*(\w+)(\[(\w+)\])?(\[(\w+)\])?\s*;', body):
            off = int(fm.group(1), 16)
            fields[fm.group(4)] = (off, fm.group(2).strip().replace('struct ', ''), fm.group(3), fm.group(6))
        structs[name] = fields
    return structs

STRUCTS = parse_structs(os.path.join(ROOT, 'include/game.h'))
ELEM = {'Fixed': 4, 's32': 4, 'u32': 4, 's16': 2, 'u16': 2, 'u8': 1, 's8': 1, 'SVECTOR': 8, 'void': 4}
SUB = {('Fixed', 'w'): (0, 's32'), ('Fixed', 'h'): (0, None), ('h', 'i'): (2, 's16'), ('h', 'frac'): (0, 'u16'),
       ('SVECTOR', 'vx'): (0, 's16'), ('SVECTOR', 'vy'): (2, 's16'), ('SVECTOR', 'vz'): (4, 's16'),
       ('SVECTOR', 'pad'): (6, 's16')}

def field_access(sname, chain):
    """chain like 'pos[1].h.i' -> (offset, type) or None"""
    m = re.match(r'(\w+)(?:\[(\w+)\])?(?:\[(\w+)\])?((?:\.\w+)*)$', chain)
    if not m or sname not in STRUCTS or m.group(1) not in STRUCTS[sname]:
        return None
    off, typ, ptr, arr = STRUCTS[sname][m.group(1)]
    if ptr:
        typ = typ + ' *'
    if m.group(2) is not None:
        try:
            idx = int(m.group(2), 0)
        except ValueError:
            return (off, typ + '[i]', True)
        if typ.endswith('*') and not arr:
            return None
        off += idx * ELEM.get(typ, 4)
    cur = typ
    for part in [p for p in m.group(4).split('.') if p]:
        k = (cur, part)
        if k not in SUB:
            return (off, cur + '.' + part, False)
        d, t = SUB[k]
        off += d
        cur = t if t else part
    if arr and m.group(2) is None:
        cur = cur + '[]'
    return (off, cur, False)

# ---------------------------------------------------------------- parsing helpers
def balanced(s, i):
    """s[i] == '('; return index of matching ')'"""
    depth = 0
    for j in range(i, len(s)):
        c = s[j]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                return j
    return -1

def split_args(s):
    out, depth, cur = [], 0, ''
    for c in s:
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
        if c == ',' and depth == 0:
            out.append(cur.strip()); cur = ''
        else:
            cur += c
    if cur.strip():
        out.append(cur.strip())
    return out

CAST = re.compile(r'^\(\s*(?:const\s+)?(?:struct\s+)?[A-Za-z_]\w*(?:\s+\w+)?\s*\**\s*\)\s*')

def strip(e):
    e = e.strip()
    while True:
        old = e
        e = CAST.sub('', e).strip()
        if e.startswith('(') and balanced(e, 0) == len(e) - 1:
            e = e[1:-1].strip()
        if e == old:
            return e

def parse_int(s):
    s = s.strip()
    try:
        return int(s, 0)
    except ValueError:
        m = re.match(r'^(0x[0-9A-Fa-f]+|\d+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', s)
        if m:
            return int(m.group(1), 0) + int(m.group(2), 0)
        return None

def base_of(e):
    """normalise a pointer expression: returns (var, extra_offset) or None. var may be '&D_80126B58'."""
    e = strip(e)
    m = re.match(r'^(&?\s*\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    if m:
        v = m.group(1).replace(' ', '')
        if not re.match(r'^&?[A-Za-z_]\w*$', v):
            return None
        return (v, int(m.group(2), 0))
    m = re.match(r'^\(\s*(?:u8|s8|char)\s*\*\s*\)\s*(&?\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    if m:
        return (m.group(1), int(m.group(2), 0))
    if re.match(r'^&?\s*[A-Za-z_]\w*$', e):
        return (e.replace(' ', ''), 0)
    m = re.match(r'^(\w+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)$', e)
    return None

def rw_of(text, start, end):
    """access occupying text[start:end]; classify"""
    after = text[end:end + 4]
    a = after.lstrip()
    before = text[max(0, start - 3):start].rstrip()
    if before.endswith('++') or before.endswith('--'):
        return 'RW'
    if before.endswith('&') and not before.endswith('&&'):
        pre = text[max(0, start - 40):start].rstrip()[:-1].rstrip()
        if not pre or pre[-1] in '(,=?:{;' or pre.endswith('return'):
            return 'addr'
    if a.startswith('++') or a.startswith('--'):
        return 'RW'
    if re.match(r'^(\+|-|\*|/|&|\||\^|<<|>>|%)=', a):
        return 'RW'
    if a.startswith('=') and not a.startswith('=='):
        return 'W'
    return 'R'

def norm_type(t):
    t = re.sub(r'\s+', ' ', t.strip())
    t = t.replace('struct ', '')
    t = re.sub(r'\s*\*', ' *', t).replace('* *', '**')
    return t

def size_of(t):
    if t.endswith('*'):
        return 4
    return SIZES.get(t, None)

# ---------------------------------------------------------------- function splitting
FUNC_RE = re.compile(r'^(?!extern\b|typedef\b|INCLUDE_ASM|#)(?:static\s+|inline\s+|const\s+)*([A-Za-z_][\w \*]*?)\b([A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*\{\s*(?:/\*.*\*/\s*)?$')
PROTO_RE = re.compile(r'^(?:extern\s+)?(?:static\s+|inline\s+)*([A-Za-z_][\w \*]*?)\b([A-Za-z_]\w*)\s*\(([^;{}()]*)\)\s*;', re.M)

def iter_c_files():
    for d, _, fs in os.walk(os.path.join(ROOT, 'src')):
        for f in sorted(fs):
            if f.endswith('.c'):
                yield os.path.join(d, f)

def area_of(path):
    rel = os.path.relpath(path, ROOT)
    p = rel.split(os.sep)
    if p[1] == 'stage':
        return 'engine' if p[2].startswith('engine') else 'stage-specific'
    if p[1] == 'stg':
        return 'stg'
    if p[1] == 'abil':
        return 'abil'
    if p[1].startswith('ovl'):
        return p[1]
    return 'exe'

def parse_params(ps):
    out = []
    ps = ps.strip()
    if ps in ('', 'void'):
        return out
    for p in split_args(ps):
        m = re.match(r'^(.*?)(\w+)\s*(\[\s*\w*\s*\])?$', p.strip())
        if not m:
            out.append(('?', '?')); continue
        out.append((norm_type(m.group(1)) or 's32', m.group(2)))
    return out

functions = []  # dict(name, file, area, ret, params[(type,name)], body, line)
protos = defaultdict(list)  # name -> list of (ret, params)
comments = re.compile(r'/\*.*?\*/', re.S)
for path in iter_c_files():
    raw = open(path, encoding='latin-1').read()
    for pm in PROTO_RE.finditer(comments.sub(lambda m: ' ' * len(m.group(0)), raw)):
        ret, name = norm_type(pm.group(1)), pm.group(2)
        if name in KEYWORDS:
            continue
        protos[name].append((ret, parse_params(pm.group(3))))
    lines = raw.split('\n')
    i = 0
    while i < len(lines):
        m = FUNC_RE.match(lines[i])
        if not m and re.match(r'^[A-Za-z_][\w \*]*\b\w+\s*\([^;{}]*\)\s*$', lines[i]) and not lines[i].startswith(('extern', 'typedef')):
            k = i + 1
            knr = []
            while k < len(lines) and k < i + 12 and re.match(r'^\s+[\w \*]+;\s*$', lines[k]):
                knr.append(lines[k].strip().rstrip(';')); k += 1
            if k < len(lines) and lines[k].startswith('{'):
                m = FUNC_RE.match(lines[i].rstrip() + ' {')
                if m and knr:
                    tmap = {}
                    for d in knr:
                        mm = re.match(r'^(.*?)(\w+)$', d)
                        if mm: tmap[mm.group(2)] = mm.group(1).strip()
                    names = [a.strip() for a in m.group(3).split(',') if a.strip()]
                    m = (m, ', '.join('%s %s' % (tmap.get(n, 's32'), n) for n in names))
                i = k if m else i
        if m and not isinstance(m, tuple) and m.group(2) in KEYWORDS:
            m = None
        if m:
            if isinstance(m, tuple):
                m, pstr = m
            else:
                pstr = m.group(3)
            j = i + 1
            while j < len(lines) and not lines[j].startswith('}'):
                j += 1
            body = '\n'.join(lines[i + 1:j])
            functions.append(dict(name=m.group(2), file=os.path.relpath(path, ROOT), area=area_of(path),
                                  ret=norm_type(m.group(1)), params=parse_params(pstr),
                                  body=comments.sub(lambda mm: ' ' * len(mm.group(0)), body), line=i + 1))
            i = j
        i += 1

byname = defaultdict(list)
for f in functions:
    byname[f['name']].append(f)

# ---------------------------------------------------------------- per-function extraction
DECL_RE = re.compile(r'^\s*(?:register\s+|static\s+|volatile\s+)*((?:struct\s+)?[A-Za-z_]\w*)\s+([^;=(]*?(?:=[^;]*)?);', re.M)

def local_types(f):
    t = {}
    for typ, name in f['params']:
        t[name] = typ
    for m in DECL_RE.finditer(f['body']):
        base = m.group(1).replace('struct ', '')
        if base in ('return', 'goto', 'case', 'else', 'break', 'continue', 'do'):
            continue
        for part in split_args(m.group(2)):
            part = part.split('=')[0].strip()
            mm = re.match(r'^(\**)\s*(\w+)', part)
            if mm and mm.group(2) not in t:
                t[mm.group(2)] = base + (' ' + mm.group(1) if mm.group(1) else '')
    return t

def scan_af(text, recs, depth_base=None):
    """find AF( ... ) at any nesting; append dicts with var, off, type, rw, parent(off,type) for 2-level"""
    for m in re.finditer(r'\bAF\(', text):
        s = m.start()
        e = balanced(text, m.end() - 1)
        if e < 0:
            continue
        args = split_args(text[m.end():e])
        if len(args) != 3:
            continue
        off = parse_int(args[2])
        typ = norm_type(args[1])
        rw = rw_of(text, s, e + 1)
        b = strip(args[0])
        inner = re.match(r'^AF\(', b)
        if inner and balanced(b, 2) == len(b) - 1:
            ia = split_args(b[3:-1])
            if len(ia) == 3:
                ib = base_of(ia[0])
                ioff = parse_int(ia[2])
                if ib and ioff is not None:
                    recs.append(dict(var=ib[0], off=(None if off is None else off), type=typ, rw=rw, form='AF2',
                                     parent=(ib[1] + ioff, norm_type(ia[1])), pos=s))
            continue
        bb = base_of(args[0])
        if bb is None:
            continue
        recs.append(dict(var=bb[0], off=(None if off is None else bb[1] + off), type=typ, rw=rw, form='AF',
                         parent=None, pos=s, dyn=(args[2] if off is None else None)))

RAW_RE = re.compile(r'\*\s*\(\s*((?:volatile\s+)?\w+(?:\s*\*)*)\s*\*\s*\)\s*\(')

def scan_raw(text, recs):
    for m in RAW_RE.finditer(text):
        ps = m.end() - 1
        e = balanced(text, ps)
        if e < 0:
            continue
        inner = text[ps + 1:e]
        bb = base_of(inner)
        if bb is None or bb[1] == 0 and '+' not in inner:
            continue
        typ = norm_type(m.group(1).replace('volatile', ''))
        recs.append(dict(var=bb[0], off=bb[1], type=typ, rw=rw_of(text, m.start(), e + 1), form='raw',
                         parent=None, pos=m.start()))

def scan_index(text, recs, ltypes):
    for m in re.finditer(r'(?<![\w\].>])([A-Za-z_]\w*)\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]', text):
        v = m.group(1)
        lt = ltypes.get(v, '')
        if lt.replace(' ', '') not in ('u8*', 's8*', 'char*'):
            continue
        recs.append(dict(var=v, off=int(m.group(2), 0), type=lt.split('*')[0].strip(), rw=rw_of(text, m.start(), m.end()),
                         form='idx', parent=None, pos=m.start()))

ARROW_RE = re.compile(r'(?<![\w.>])(\w+)->(\w+(?:\[\w+\])?(?:\[\w+\])?(?:\.\w+)*)((?:->\w+(?:\[\w+\])?(?:\.\w+)*)?)')
DOT_RE = re.compile(r'(?<![\w.>])(D_80126B58)\.(\w+(?:\[\w+\])?(?:\.\w+)*)((?:->\w+(?:\[\w+\])?(?:\.\w+)*)?)')

def scan_typed(text, recs, ltypes):
    for rx, glob in ((ARROW_RE, False), (DOT_RE, True)):
        for m in rx.finditer(text):
            v = m.group(1)
            sname = 'Player' if glob else ltypes.get(v, '').replace('*', '').strip()
            if sname not in OBJ_TYPES:
                continue
            fa = field_access(sname, m.group(2))
            if fa is None:
                continue
            off, typ, dyn = fa
            var = '&' + v if glob else v
            rw = rw_of(text, m.start(), m.end())
            if m.group(3):
                sub = m.group(3)[2:]
                fb = field_access('ModelObj', sub) if typ.startswith('ModelObj') else None
                recs.append(dict(var=var, off=off, type=typ, rw='R', form='typed', parent=None, pos=m.start(), sname=sname))
                if fb:
                    recs.append(dict(var=var, off=fb[0], type=fb[1], rw=rw, form='typed2', parent=(off, typ), pos=m.start(), sname=sname))
                continue
            recs.append(dict(var=var, off=(None if dyn else off), type=typ, rw=rw, form='typed', parent=None, pos=m.start(),
                             sname=sname, base_off=off))

CALL_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*\(')
TABLE_RE = re.compile(r'(\w+)\s*\[')

def scan_calls(text):
    calls = []
    for m in CALL_RE.finditer(text):
        name = m.group(1)
        if name in KEYWORDS or name in SIZES or name in ('AF', 'PARTS', 'DROP'):
            continue
        e = balanced(text, m.end() - 1)
        if e < 0:
            continue
        args = [strip(a) for a in split_args(text[m.end():e])]
        # assignment target: "x = name(...)"
        pre = text[max(0, m.start() - 60):m.start()]
        am = re.search(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?$', pre)
        calls.append(dict(name=name, args=args, assign=(am.group(1) if am and not pre.rstrip().endswith('==') else None)))
    return calls

def scan_dispatch(text):
    out = []
    for m in re.finditer(r'(\w+)\s*\[', text):
        s = m.end() - 1
        depth = 0
        e = -1
        for j in range(s, len(text)):
            if text[j] == '[':
                depth += 1
            elif text[j] == ']':
                depth -= 1
                if depth == 0:
                    e = j; break
        if e < 0:
            continue
        rest = text[e + 1:e + 3].lstrip()
        if not rest.startswith('('):
            continue
        idx = text[s + 1:e]
        recs = []
        scan_af(idx, recs)
        ar = re.match(r'^\s*(\w+)->(\w+)\s*$', idx)
        for r in recs:
            if r['form'] == 'AF' and r['off'] is not None:
                out.append((r['var'], r['off'], r['type'], m.group(1)))
        if ar:
            out.append((ar.group(1), ar.group(2), None, m.group(1)))
    return out

ASSIGN_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?(&?[A-Za-z_]\w*)\s*;')
ASSIGN_AF_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?AF\(\s*(\w+)\s*,\s*[\w \*]+\*\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;')

for f in functions:
    lt = local_types(f)
    f['ltypes'] = lt
    recs = []
    scan_af(f['body'], recs)
    scan_raw(f['body'], recs)
    scan_index(f['body'], recs, lt)
    scan_typed(f['body'], recs, lt)
    f['recs'] = recs
    f['calls'] = scan_calls(f['body'])
    f['dispatch'] = scan_dispatch(f['body'])
    f['assigns'] = ASSIGN_RE.findall(f['body'])
    f['assign_af'] = ASSIGN_AF_RE.findall(f['body'])

# ---------------------------------------------------------------- object classification by propagation
# objparam[name] = {k: (kind, reason)}
objparam = defaultdict(dict)
objret = {}
def typekind(t):
    t = t.replace(' ', '')
    for k, v in OBJ_TYPES.items():
        if t == k + '*':
            return v
    return None

for name, plist in protos.items():
    for ret, params in plist:
        if typekind(ret):
            objret[name] = (typekind(ret), 'prototype returns ' + ret)
        for k, (t, n) in enumerate(params):
            tk = typekind(t)
            if tk:
                objparam[name][k] = (tk, 'prototype %s(%s)' % (name, t))
for f in functions:
    if typekind(f['ret']):
        objret[f['name']] = (typekind(f['ret']), 'returns ' + f['ret'])
    for k, (t, n) in enumerate(f['params']):
        tk = typekind(t)
        if tk:
            objparam[f['name']][k] = (tk, 'parameter type ' + t)

DISPATCH_SEEDS = {}  # filled after a first look; offsets whose dispatch marks an object
SEED_DISPATCH = {(2, 'u16'), (2, 's16'), (0x214, 'u8'), (0x4E, 'u8')}

def classify():
    changed = True
    rounds = 0
    while changed and rounds < 30:
        changed = False
        rounds += 1
        for f in functions:
            obj = f.setdefault('obj', {})
            def mark(v, kind, why):
                nonlocal changed
                if v.startswith('&') or v in ('NULL',) or re.match(r'^\d', v):
                    return
                if v not in obj:
                    obj[v] = (kind, why)
                    changed = True
            for v, t in f['ltypes'].items():
                tk = typekind(t)
                if tk:
                    mark(v, tk, 'declared ' + t)
            for v, off, typ, tab in f['dispatch']:
                if (off, typ) in SEED_DISPATCH:
                    mark(v, 'player' if off == 0x214 else 'object', 'dispatch %s[+0x%X]' % (tab, off))
            for c in f['calls']:
                op = objparam.get(c['name'], {})
                for k, a in enumerate(c['args']):
                    if k in op:
                        mark(a, op[k][0], 'passed to %s arg%d' % (c['name'], k))
                if c['assign'] and c['name'] in objret:
                    mark(c['assign'], objret[c['name']][0], 'result of ' + c['name'])
            for dst, src in f['assigns']:
                if src in obj:
                    mark(dst, obj[src][0], 'copy of ' + src)
                if src == '&' + PLAYER_SYM:
                    mark(dst, 'player', 'address of Musashi')
                if dst in obj and src in f['ltypes'] and src not in obj:
                    pass
            for dst, src, off in f['assign_af']:
                if src in obj and int(off, 0) == 0x64:
                    mark(dst, 'actor', 'parent (+0x64) of ' + src)
            # param -> function property
            for k, (t, n) in enumerate(f['params']):
                if n in obj and k not in objparam[f['name']]:
                    objparam[f['name']][k] = (obj[n][0], 'in %s: %s' % (f['name'], obj[n][1]))
                    changed = True
        # reverse: callers
        callsites = defaultdict(lambda: defaultdict(lambda: [0, 0, None]))
        for f in functions:
            for c in f['calls']:
                if c['name'] not in byname:
                    continue
                for k, a in enumerate(c['args']):
                    if re.match(r'^&?\w+$', a) and not re.match(r'^\d', a):
                        cs = callsites[c['name']][k]
                        cs[1] += 1
                        if a in f.get('obj', {}) or a == '&' + PLAYER_SYM:
                            cs[0] += 1
                            cs[2] = 'player' if a == '&' + PLAYER_SYM else f['obj'][a][0]
        for name, ks in callsites.items():
            for k, (n_obj, n_all, kind) in ks.items():
                if n_obj >= 1 and n_obj * 3 >= n_all * 2 and k not in objparam[name]:
                    for g in byname[name]:
                        if k < len(g['params']):
                            objparam[name][k] = (kind, 'callers pass objects (%d of %d)' % (n_obj, n_all))
                            changed = True
                            break
    return rounds

rounds = classify()

# ---------------------------------------------------------------- origin flow (P = Musashi, A = pool actor)
SPAWN_A = {'func_8012C890', 'func_8012C658', 'func_8012C588', 'func_8012C51C', 'func_8012C750', 'func_8012C820',
           'func_8012C724', 'func_8013E410', 'func_8012C284', 'func_8012C2D0', 'func_8012C31C'}
REGISTER_P = {'func_8016EDEC', 'func_8016ED8C', 'func_8016EE94', 'SetActionHandler'}
porigin = defaultdict(lambda: defaultdict(set))   # func -> param index -> set
for f in functions:
    org = f.setdefault('org', defaultdict(set))
    for c in f['calls']:
        if c['assign'] and c['name'] in SPAWN_A:
            org[c['assign']].add('A')
        if c['name'] in REGISTER_P and c['args']:
            h = re.sub(r'^&', '', c['args'][0])
            if h in byname:
                porigin[h][0].add('P')
    for dst, src in f['assigns']:
        if src == '&' + PLAYER_SYM:
            org[dst].add('P')
    for m in re.finditer(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?&?(?:D_80120194|D_801202A0)\b', f['body']):
        org[m.group(1)].add('A')
    for m in re.finditer(r'(\w+)\s*=\s*(?:\([\w \*]+\)\s*)?&(?:D_80120194|D_801202A0)\[', f['body']):
        org[m.group(1)].add('A')
    for v, off, typ, tab in f['dispatch']:
        if off == 0x214:
            org[v].add('P')
changed = True
rr = 0
while changed and rr < 40:
    changed = False; rr += 1
    for f in functions:
        org = f['org']
        for k, (t, n) in enumerate(f['params']):
            add = porigin[f['name']].get(k, set()) - org[n]
            if add:
                org[n] |= add; changed = True
        for dst, src in f['assigns']:
            if src in org and org[src] - org[dst]:
                org[dst] |= org[src]; changed = True
        for dst, src, off in f['assign_af']:
            if src in org and org[src] and int(off, 0) == 0x64 and not {'A', 'P'} <= org[dst]:
                org[dst] |= {'A', 'P'}; changed = True
        for c in f['calls']:
            if c['name'] not in byname:
                continue
            for k, a in enumerate(c['args']):
                o = {'P'} if a == '&' + PLAYER_SYM else org.get(a, set())
                if o - porigin[c['name']][k]:
                    porigin[c['name']][k] |= o; changed = True
print('origin rounds', rr)

# weak pass: a pointer with no origin from the seeds gets one from its own offsets (>= 0x10C cannot be a 0x10C pool
# actor: 'p', else 'a'), only where nothing flows in (no direct callers); then the union flows down the call graph
called = defaultdict(set)
for f in functions:
    for c in f['calls']:
        if c['name'] in byname:
            for k, a in enumerate(c['args']):
                called[c['name']].add(k)
def own_max(f, v):
    offs = [r['off'] for r in f['recs'] if r['var'] == v and r['parent'] is None and r['off'] is not None]
    return max(offs) if offs else -1
# reach[name][k]: the largest offset used on param k by the function or anything it passes it to
reach = defaultdict(dict)
for f in functions:
    for k, (t, n) in enumerate(f['params']):
        reach[f['name']][k] = own_max(f, n)
ch = True
while ch:
    ch = False
    for f in functions:
        pn = {n: k for k, (t, n) in enumerate(f['params'])}
        for c in f['calls']:
            if c['name'] not in reach:
                continue
            for k, a in enumerate(c['args']):
                if a in pn and k in reach[c['name']] and reach[c['name']][k] > reach[f['name']][pn[a]]:
                    reach[f['name']][pn[a]] = reach[c['name']][k]; ch = True
def var_reach(f, v):
    m = own_max(f, v)
    for c in f['calls']:
        for k, a in enumerate(c['args']):
            if a == v and c['name'] in reach and k in reach[c['name']]:
                m = max(m, reach[c['name']][k])
    return m
def big_on(f, v):
    return var_reach(f, v) >= 0x10C
for f in functions:
    f['worg'] = defaultdict(set)
    pnames = {n: k for k, (t, n) in enumerate(f['params'])}
    objs = set(f.get('obj', {}))
    for v in objs:
        if f['org'].get(v):
            f['worg'][v] |= f['org'][v]
        elif v not in pnames or pnames[v] not in called[f['name']]:
            f['worg'][v].add('p' if big_on(f, v) else 'a')
wpo = defaultdict(lambda: defaultdict(set))
changed = True
rr2 = 0
while changed and rr2 < 40:
    changed = False; rr2 += 1
    for f in functions:
        org = f['worg']
        for k, (t, n) in enumerate(f['params']):
            add = (wpo[f['name']].get(k, set()) | porigin[f['name']].get(k, set())) - org[n]
            if add:
                org[n] |= add; changed = True
        for dst, src in f['assigns']:
            if src in org and org[src] - org[dst]:
                org[dst] |= org[src]; changed = True
        for c in f['calls']:
            if c['name'] not in byname:
                continue
            for k, a in enumerate(c['args']):
                o = {'P'} if a == '&' + PLAYER_SYM else org.get(a, set())
                if o - wpo[c['name']][k]:
                    wpo[c['name']][k] |= o; changed = True
print('weak rounds', rr2)

def origin_of(f, v):
    if v == '&' + PLAYER_SYM or v.startswith('D_'):
        return 'P'
    o = f['worg'].get(v, set())
    if not o:
        return 'p?' if big_on(f, v) else 'a?'
    hasP = 'P' in o or 'p' in o
    hasA = 'A' in o or 'a' in o
    weak = ('p' in o and 'P' not in o) or ('a' in o and 'A' not in o)
    lab = ('P' if hasP else '') + ('A' if hasA else '')
    return lab + ('?' if weak else '')

# ---------------------------------------------------------------- emit census
rows = []
for f in functions:
    obj = f.get('obj', {})
    for r in f['recs']:
        v = r['var']
        if v == '&' + PLAYER_SYM:
            kind, why = 'player', 'Musashi global'
        elif v in obj:
            kind, why = obj[v]
        else:
            continue
        rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var=v, kind=kind, why=why, off=r['off'], origin=origin_of(f, v),
                         type=r['type'], rw=r['rw'], form=r['form'], parent=r['parent'], dyn=r.get('dyn')))
# pointers loaded from an object's pointer field: their accesses are level-2 rows (parent = that field)
DER_RE = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=\s*(?:\([\w \*]+\)\s*)?AF\(\s*(&?\w+)\s*,\s*([\w \*]+\*)\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;')
for f in functions:
    obj = f.get('obj', {})
    der = {}
    for m in DER_RE.finditer(f['body']):
        v, src, t, off = m.groups()
        if (src in obj or src == '&' + PLAYER_SYM) and v not in obj and v not in der:
            der[v] = (src, int(off, 0), norm_type(t))
    for r in f['recs']:
        if r['parent'] is None and r['var'] in der and r['off'] is not None:
            src, poff, pt = der[r['var']]
            rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var=src, kind='derived', why='via ' + r['var'],
                             off=r['off'], origin=origin_of(f, src), type=r['type'], rw=r['rw'], form='via-var',
                             parent=(poff, pt), dyn=None))
# absolute Musashi fields D_80126Bxx..
for f in functions:
    for m in re.finditer(r'\bD_(8012[6-7][0-9A-F]{3})\b', f['body']):
        a = int(m.group(1), 16)
        if PLAYER_ADDR < a < PLAYER_ADDR + 0x308:
            rw = rw_of(f['body'], m.start(), m.end())
            rows.append(dict(file=f['file'], area=f['area'], func=f['name'], var='D_' + m.group(1), kind='player',
                             why='absolute address', off=a - PLAYER_ADDR, origin='P', type='?abs', rw=rw, form='abs', parent=None, dyn=None))

json.dump(dict(rows=rows, objparam={k: {str(kk): vv for kk, vv in v.items()} for k, v in objparam.items()},
               nfunc=len(functions), rounds=rounds), open(OUT + '.json', 'w'), indent=0)
with open(OUT + '.tsv', 'w') as fo:
    for r in rows:
        fo.write('\t'.join(str(r[k]) for k in ('area', 'file', 'func', 'var', 'kind', 'origin', 'off', 'type', 'rw', 'form', 'parent', 'why')) + '\n')
print('functions', len(functions), 'rounds', rounds, 'rows', len(rows))
print('objparam functions', len(objparam))
print(Counter(r['kind'] for r in rows))
print(Counter(r["area"] for r in rows)); print(Counter(r['origin'] for r in rows))
```
