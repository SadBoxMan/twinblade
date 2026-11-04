# Stage survey: what each stage image's own code does (r275, research only)

A stage-by-stage map of the **own code** of every stage image (`src/stg/scNN_NNN.c`, plus the village
`src/stage/sc03_001.c` as the reference), read from the matched C of the decomp-only snapshot (main = a75e323d,
4 Nov 2026). Phase 2 (understanding) work: nothing here is applied. The naming tables are proposals for a later local
card, which applies them to `stg/symbol_addrs_<stage>.txt` and checks that every stage still matches.

## How this was made, and what it cannot see
* **Source.** Only the C, headers, splat configs, symbol files and docs. The snapshot has **no game data**: the
  stages' pointer tables (actor kind tables, state tables, step tables), spawn lists, event scripts, text, models and
  the 36-byte entry records are all data, so the survey sees what the code *does* but rarely *which* map, text or
  model it does it with. Exit destinations, NPC lines and what a creature looks like are therefore mostly "unknown".
* **Names.** Engine calls are written with the proposals of research/r272-engine-names
  (`docs/names_stage_engine_proposals.md` and `_2.md` on that branch): StartEvent, SpawnActorArg, PlaySe and so on.
  A few EXE / field-overlay functions that stage code calls get working names here (table below).
* **Method.** A script split every stage's C into functions and recorded, per function, its calls (engine names
  substituted), the constants passed to spawns, sounds, messages, flags, events, progress and map changes, and a
  *shape* (its body with the stage's own addresses masked). Shapes found in several stages make the **shared
  families** (Fnnn below): the same actor or helper code linked into several images. Per-chapter readers then read the
  digest and the functions that mattered.
* **Actor blocks.** An actor kind's per-frame handler is the one-line dispatcher `table[a->state](a)` (1 689 of them
  over the 140 images). The state table is data, so which functions are its states is inferred from address order:
  the state handlers follow their dispatcher, state 0 first (the set-up: SetupActor / AllocActorModel, RejectSpawn
  when no model is free). That grouping is M throughout.
* **Confidence.** Every claim carries H / M / L. H: the code says it (a constant, a call, a test). M: a clear reading
  with one interpretive step. L: a guess from thin evidence (what a creature is in the game, a place name from
  memory). "unknown" is used rather than a guess.

### Working names for EXE / field-overlay calls used below
| address | current | name used here | evidence | conf |
|---|---|---|---|---|
| 0x80029504 | func_80029504 | GetProgress | returns D_80078E80 (src/code_800123F0.c); stages compare it with chapter-sized values | H |
| 0x80029514 | func_80029514 | SetProgress | D_80078E80 = a | H |
| 0x80029178 | func_80029178 | GetFlag | symbol_addrs.txt comment; r272 "Game flags" | H |
| 0x80029124 | func_80029124 | SetFlag | r272 "Game flags" | H |
| 0x800291B4 / 0x800291A0 | func_800291B4 / func_800291A0 | GetVar / SetVar | byte variables (r272); 0x62 + i reads like item counts (shop code) | M |
| 0x8002D4C8 | func_8002D4C8 | SoundRequest | src/code_8002C8BC.c: id < 0x80 a driver command (func_8002E138), 0x100-0x3FF and >= 0x400 effects | H |
| 0x800D0C48 | func_800D0C48 | SoundCmd1 | field overlay: SoundRequest(1, n); called at most room exits with 1 | H (meaning L) |
| 0x800D1724 | func_800D1724 | RequestMapChange | field overlay: D_800AE6B0 = record, the entry record the field puts in force (docs/stage_loader.md) | H |
| 0x800D1734 | func_800D1734 | QueueMapChange | field overlay: D_800AE6A8.next = record, used when the current one is done | M |
| 0x800D1E28 / 0x800D1EBC | func_800D1E28 / func_800D1EBC | StartExitFade / ExitFadeDone | field overlay: fade 4 of one kind or the other, chosen by whether either map is a village house | H |
| 0x800167B8 / 0x800167F0 | func_800167B8 / func_800167F0 | StartFade / FadeDone | EXE; 0 at a room's entry, 4 at its exit | M |
| 0x800CFBCC | func_800CFBCC | RequestFieldFileLoad | field overlay: D_80114E70 = 1, D_80114E74 = n; the field then loads MAIN.CD file D_800D3408[n] (func_800CF990) | M |

## The story timeline from the code
The EXE word D_80078E80 is a story-progress counter: stage code sets it when a story step is done and compares it
to choose scenes and actors. It runs from 2 to 0x6A4 (1700), and the archives follow it closely, so **the archives
are the game's chapters in order** (M), with SC03 (the village and its surroundings) spanning most of the story:

| archive | own progress values set (decimal) | reading |
|---|---|---|
| SC01 | 2, 5, 10 (SC01_004-006, shared F002), 140-950 (SC01_009) | the prologue and small interiors visited all game (M) |
| SC02 | 2 (SC02_005), 80-270 (SC02_017, SC02_021), 370 (F054) | the first chapter (M) |
| SC03 | 20-480 (village variants SC03_002, SC03_124, SC03_125), 160-420 (SC03_031, 092, 111, 121), 700-730 (F082 in SC03_014/015), 970-1120 (SC03_011-013, 024) | the village hub and its surroundings across chapters (M) |
| SC04 | 640-780 (SC04_000, 012, 015, F111 in SC04_018/019) | a middle chapter (M) |
| SC05 | 920-1170 (SC05_011, 017, 018) | the next chapter (M) |
| SC06 | 1210-1590 (SC06_000, 016, 025, 029, 030) | a late chapter (M) |
| SC07 | 1600-1700 (SC07_002 tests 0x640; SC07_007/009/010 set 0x6A4) | the end of the game (M) |

Per stage, sorted by the smallest value its own code sets (shared-family sets in brackets; the 0x5A = 90 set by family
F023 in ~20 stages is left out of the sort):

| first value | stage | own sets | shared-family sets | tests (constants on a line reading the progress) |
|---|---|---|---|---|
| 2 | SC02_005 | 2 | - | - |
| 5 | SC01_004 | 5, 10, 0x488 (1160) | - | 0x47E,0x14; 0x3B6(F001) |
| 20 | SC03_002 | 0x14 (20), 0x87 (135) | 0x3AC(F068) | 0x70,0xFF,0x70,200(S8); 0x14,0x10B,0xFF; 0x85; 0x14,0xDF,10,0x40; 0x82; 0x492(F073); 0xF0,0xFF,0x85(F073); 0x85(F073); 0x3A2(F068) |
| 60 | SC03_023 | 0x3C (60) | - | - |
| 80 | SC02_017 | 0x50 (80), 0x10E (270) | - | 0x104; 0x50,0x20; 0xC8 |
| 100 | SC05_017 | 100, 0x3A2 (930) | 0x3AC(F068) | 0x384,0x1E,0x20; 0x3A2(F068); 600(F069); 0x64,0x1F4(F100); 0xC8,0xDC(F100); 0x181,0x55,0x20(F071); 0xC8(F067) |
| 130 | SC03_012 | 0x82 (130), 0x3E8 (1000) | - | 0x3D4 |
| 140 | SC01_009 | 0x8C (140), 0x96 (150),arg1, 0x28A (650), 0x294 (660), 0x2E4 (740), 0x2EE (750), 0x3B6 (950) | - | 0x3B6(F001); 0x294; 0x1B,0x28A |
| 160 | SC03_031 | 0xA0 (160) | - | 0x96; 0xA0 |
| 210 | SC03_124 | 0xD2 (210), 0xDC (220), 0xF0 (240), 0x136 (310), 0x186 (390), 0x190 (400), 0x19A (410), 0x1AE (430), 0x1E0 (480) | 0x3AC(F068), 100(S4), 0x1D6(S2) | 0x182; 0xC8,0x190,0x20; 0xC8,0x190; 0xC8,0xA; 0x181; 0x190; 0x12C,0xA; 0xC8,0x1AE(F101); 0x64,0x1F4(F100); 0xC8,0xDC(F100); 0x181,0x55,0x20(F071); 0x3A2(F068); 600(F069); 0x1D7(S2) |
| 230 | SC03_111 | 0xE6 (230) | - | 0x70,0xFF,0x70,200(S4); 0xE6 |
| 250 | SC02_021 | 0xFA (250),arg1, 0x104 (260), 0x118 (280),arg1 | - | - |
| 290 | SC03_125 | 0x122 (290), 0x12C (300) | 0x3AC(F068) | 0x70,0xFF,0x70,200(S8); 0xC8,0xA,0xF4,0xFF; 0x118,0xA; 0x492(F073); 0xF0,0xFF,0x85(F073); 0x85(F073); 0x3A2(F068) |
| 330 | SC03_092 | 0x14A (330), 0x17C (380) | - | - |
| 420 | SC03_121 | 0x1A4 (420) | - | - |
| 670 | SC04_015 | 0x29E (670), 0x2A8 (680) | 0x3AC(F068) | 0x3A2(F068); 0x64,0x1F4(F100); 0xC8,0xDC(F100); 0x181,0x55,0x20(F071) |
| 752 | SC04_012 | 0x2F0 (752) | - | 0x2F0; 0x384 |
| 760 | SC04_000 | 0x2F8 (760), 0x302 (770), 0x30C (780) | - | 0x30C; 0x302; 0x2F8; 0x5E,0x24,0x302 |
| 920 | SC05_011 | 0x398 (920) | - | - |
| 920 | SC07_011 | 0x398 (920) | - | - |
| 960 | SC05_018 | 0x3C0 (960), 0x47E (1150), 0x492 (1170) | 0x3AC(F068) | 0x70,0xFF,0x70,200(S2); 0x488; 0x3B6,0xA; 0x492(F073); 0xF0,0xFF,0x85(F073); 0x85(F073); 0x3A2(F068) |
| 970 | SC03_011 | 0x3CA (970), 0x3F2 (1010) | - | 0x3B6,0x32; 0x82,0xF2,0xFF; 0x3E8; 0x3B6,0x32,0xBD,0xFF |
| 980 | SC03_013 | 0x3D4 (980) | - | 0x3D4 |
| 1100 | SC03_024 | 0x44C (1100), 0x460 (1120) | 0x85(F020) | 0x70,0xFF,0x70,200(S8); 0x460 |
| 1210 | SC06_000 | 0x4BA (1210) | 0x85(F020) | - |
| 1300 | SC06_030 | 0x514 (1300) | - | - |
| 1400 | SC06_016 | 0x578 (1400) | - | - |
| 1500 | SC06_025 | 0x5DC (1500) | - | - |
| 1590 | SC06_029 | 0x636 (1590) | - | - |
| 1700 | SC07_007 | 0x6A4 (1700) | - | - |
| - | SC01_005 | - | 0xA(F002), 2(F002) | 0xA(F002); 0x3B6(F001) |
| - | SC01_006 | - | 0xA(F002), 2(F002) | 0xA(F002); 0x3B6(F001) |
| - | SC01_008 | - | - | 0x3B6(F001) |
| - | SC02_011 | - | 0x85(F020) | 0x70,0xFF,0x70,200(S4) |
| - | SC02_015 | - | - | 0xE6,0xA |
| - | SC02_028 | - | 0x172(F054) | - |
| - | SC02_031 | - | - | 0x70,0xFF,0x70,200(S8) |
| - | SC03_001 | - | 0x3AC(F068), 100(S4) | 0x1E; 0x14,0x46,0xE5,0xFF,0x3C; 0x87; 0x64,0x1F4; 0xC8,0xDC; 0x181,0x55,0x20(F071); 0xC8(F067); 0x3A2(F068); 600(F069) |
| - | SC03_006 | - | - | 0x70,0xFF,0x70,200(S8); 0x4B0,0x138,0xFF,0x20 |
| - | SC03_007 | - | - | 0x384,0x70,0xCC,0xFF,0xF; 0x32 |
| - | SC03_014 | - | 0x85(F020), 0x2DA(F082), 0x2D0(F082), 0x2C6(F082) | 0x2DA(F082); 0x2D0(F082); 0x2C6(F082); 0x2DA,0x11F,0xFF(F082); 0x2BC(F082) |
| - | SC03_015 | - | 0x85(F020), 0x2DA(F082), 0x2D0(F082), 0x2C6(F082) | 0x2DA(F082); 0x2D0(F082); 0x2C6(F082); 0x2DA,0x11F,0xFF(F082); 0x2BC(F082) |
| - | SC03_028 | - | - | 0x70,0xFF,0x70,200(S8); 0xC8,0x118,0xFF; 200; 0xC8 |
| - | SC03_029 | - | - | 0x14,0xDF,0xFF; 0x70,0xE7,0xFF,0x46; 0xD2,0x14,0x20 |
| - | SC03_097 | - | 0x172(F054) | - |
| - | SC03_101 | - | 0x172(F054) | - |
| - | SC03_104 | - | 0x172(F054) | - |
| - | SC03_105 | - | - | 0x258,0x132,0xFF; 0x258 |
| - | SC03_107 | - | 0x1D6(S2) | 0x1D7(S2) |
| - | SC03_113 | - | - | 0x70,0xFF,0x70,200(S4) |
| - | SC03_115 | - | - | 0x28A; 0x280; 0x294 |
| - | SC03_117 | - | - | 1000,900,0x20 |
| - | SC03_118 | - | 0x85(F020), 0x1CC(F099), 0x276(F099), 0x1D1(F099) | 0x70,0xFF,0x70,200(S8); 0x1D7(F099); 0x276,0x20(F099) |
| - | SC03_119 | - | 0x85(F020), 0x1CC(F099), 0x276(F099), 0x1D1(F099) | 0x70,0xFF,0x70,200(S8); 0x1D7(F099); 0x276,0x20(F099) |
| - | SC04_010 | - | - | 0x384 |
| - | SC04_018 | - | 0x2B2(F111), 0x280(F111), 0x2BC(F111), 0x3AC(F068), 100(S4) | 0x2A8(F111); 0x2A8,0xA(F111); 0x2BC(F111); 0xC8,0x1AE(F101); 0x3A2(F068); 600(F069); 0x64,0x1F4(F100); 0xC8,0xDC(F100); 0x181,0x55,0x20(F071); 0xC8(F067) |
| - | SC04_019 | - | 0x2B2(F111), 0x280(F111), 0x2BC(F111), 0x3AC(F068), 100(S4) | 0x2A8(F111); 0x2A8,0xA(F111); 0x2BC(F111); 0xC8,0x1AE(F101); 0x3A2(F068); 600(F069); 0x64,0x1F4(F100); 0xC8,0xDC(F100); 0x181,0x55,0x20(F071); 0xC8(F067) |
| - | SC04_020 | - | 0x3AC(F068) | 0x70,0xFF,0x70,200(S2); 0x492(F073); 0xF0,0xFF,0x85(F073); 0x85(F073); 0x3A2(F068) |
| - | SC05_004 | - | - | 0x70,0xFF,0x70,200(S4) |
| - | SC05_007 | - | - | 0x4B0 |
| - | SC07_002 | - | - | 0x640 |
| - | SC07_009 | - | 0x6A4(S2) | - |
| - | SC07_010 | - | 0x6A4(S2) | - |

The village map ids are also fixed in the field overlay (H, ovl36 func_800CFC5C / func_800CFBF8): 0x1010, 0x1052,
0x1077 and 0x1094 are four versions of the village, and 0x2013-0x201A, 0x2055-0x205B, 0x207A-0x2080 and
0x2097-0x209D their house interiors (leaving a house returns to its village version). Which stage image serves which
map id is in the field's table D_800D34AC, which is data (not in the snapshot).

## Shared patterns

### P01: the room skeleton (every image)
Every image has the same set of small step functions the field overlay calls through the entry record's step tables
(docs/stage_loader.md: the record's code pointers): a step dispatcher `table[obj->+0x15](obj)` per sequence (entry,
exit, sometimes more: 423 such dispatchers in 140 images), and the steps:
* **entry**: start Musashi's entry walk (a one-line `StartPlayerActionScript(script, 0x01000000)` wrapper per walk:
  330 of them in 127 images), StartFade(0), advance; then "FadeDone(0)?" (H).
* **entry walk timer**: start another walk script, a 10-frame timer at +0x28, advance (H).
* **exit**: count the timer down, then SoundRequest(0x1C, 0), func_8001BFD0, SoundRequest(0x1D, 0), in most rooms
  SoundCmd1(1), StartExitFade(), advance; then ExitFadeDone() (H). A variant leaves out SoundCmd1 (65 images): those
  exits keep the sound state (M).
* Representative: SC01_004 0x8017CDB4-0x8017D18C (dispatchers 0x8017CDB4, 0x8017CF34, 0x8017CFE4; entry 0x8017CDF0;
  exit 0x8017CE98; exit without SoundCmd1 0x8017CF70; ExitFadeDone 0x8017CF14).
* Stage entries below mention P01 only where a stage adds something (a progress set, an extra step, a special load).

| shape (address in SC01_004) | proposed | evidence | conf |
|---|---|---|---|
| 0x8017CDB4 / 0x8017CF34 / 0x8017CFE4 | RoomEntrySteps / RoomExitSteps / RoomSteps3 | `table[+0x15](obj)`; which table is which sequence is data | M |
| 0x8017CDF0 | RoomEntryStart | entry walk script, StartFade(0), step + 1 | H |
| 0x8017CE34 | RoomFadeDone | FadeDone(0) != 0 | H |
| 0x8017CE58 / 0x8017D020 | RoomEntryWalk / RoomEntryWalk2 | a walk script, timer 10, step + 1 | M |
| 0x8017CE98 | RoomExitStart | timer, sound commands 0x1C / 0x1D, SoundCmd1(1), StartExitFade | H |
| 0x8017CF70 | RoomExitStartKeepSound | the same without SoundCmd1 | M |
| 0x8017CF14 | RoomExitFadeDone | ExitFadeDone() | H |
| 0x8017D13C / 0x8017D164 / 0x8017D18C | StartEntryWalk1 / 2 / 3 | StartPlayerActionScript(D_..., 0x01000000) | M |

### P02: the camera dispatcher (139 images)
`table[cam->+4](cam)` (SC01_004 0x8017D1F8), installed by a one-line room camera set-up with SetCameraUpdate
(SC01_004 0x8017D1B4: projection / distance 0x12C). Camera modes are data; stage-specific camera code (fixed views,
pad-toggled views such as SC01_004 0x8017D254, which flips between two views on GetObjPadPressed & 3) is noted per
stage. Proposed: `CameraMain` (the dispatcher), `RoomCameraSetup` (the set-up) (M).

### P03: DrawChunkedMesh200 (85 images)
The chunked map renderer at the start of the own code (0x8017BE9C or 0x8017BEBC): the village's DrawChunkedMesh with
one constant changed (0x200 for 0x20, docs/decomp_recipes.md r152). Proposed: `DrawChunkedMesh200` (H: same body).

### P04: actor dispatchers and player-action dispatchers
* `table[a->state](a)` (a StageActor's +2): one per actor kind (1 689 in all, 42 at most in one image). Proposed:
  `<Actor>Main` (M).
* `table[player->+0x214 or +0x216](player)`: Musashi's scripted actions in cutscenes (171 in 43 images; their
  phases call NextPhase, StartFace, SetPlayerMotion). Proposed: `Scene<What>Main` / `PlayerAction<n>Main` (M).

### Shared families
(none yet)

## Chapter 0: the prologue and the small interiors (archive SC01)

Progress 2-10 at the start of the game, plus small rooms visited throughout (SC01_009 sets 140-950).

Common notes for this group:
* `RequestFieldFileLoad(n)` (ovl36 func_800CFBCC) sets D_80114E70 = 1, D_80114E74 = n. After the next map change
  ovl36 func_800D1BF8 then picks field game state 19 (func_800CF990): load archive file `D_800D3408[n]`, draw it as one
  256x144 sprite (func_800CFAD0), fade, wait 0x5B frames, then state 6 (H: ovl36). So the next map load shows a
  full-screen picture first (L: a chapter / title card).
* Pad mask 0x840 on `GetPadPressedDir(0)` is the cutscene skip test in SC01_000 / SC01_001 (H: the test); which
  buttons the bits are is L (Start / Cross in the usual PS1 bit order).
* docs/mode_dispatcher.md (mode 6, ModeTitleRun): New Game and Continue both go to map 0x3005, documented there as
  SC01_000 (H by that doc).

### SC01_000
* **Place:** the first map of a New Game: the title's New Game loads map 0x3005, which docs/mode_dispatcher.md gives
  as SC01_000 (H by the doc). The room's own code is a pure 2D/3D opening sequence with no player control (H): a
  full-screen picture zooms in, two coloured lines sweep, a text band unrolls, the camera pans over the map, then a
  map change (M: an opening / title sequence; L: the game's opening logo). No progress values.
* **Size:** 33 functions (own 18, shared 7 lone shapes S2 / S5 / S7 / S34 / S75 / S138; no family; P01, P02, P03, 4 stubs).
* **Actors:** none of its own (H: no ACTOR-MAIN).
* **Events / scripted scenes:** `0x8017D490` is a 16-step sequence (D_801A585C), run each frame (M: caller is data):
  * step 0: camera eye / target set (0x8017D164), picture scale 0x16F8, SoundRequest(0xB5B, 0) (H; L: a jingle);
  * 1: 60-frame wait; 2-4: a 320x32 two-half sprite pair (0x8017E210, tpage 0x4017 / 0x4057) fades in by 8 per frame
    to 0x80, holds 30 frames, fades out (H);
  * 5: the 3x3-grid full-screen textured picture (0x8017DD04: four POLY_FT4 from a 9-point grid scaled about the
    screen centre by 0x8017E1A8) shrinks from scale 0x16F8 to 0x1000 by 0x50 per frame (H);
  * 6-7: two LINE_F2 lines, one red and one blue (0x8017E3A0, `blue` argument), accelerate in opposite vertical
    directions and brighten to 0xFF (H);
  * 8-10: a two-half text band (0x8017E594, 256 wide, tpages 0x4097 / 0x4117) unrolls one line per frame to 16
    lines, holds 60 frames, fades out (H);
  * 11: StartCameraPan(D_801A1E94) while the picture scrolls up 0x18000 per frame for 160 frames (H);
  * 12: a 128x16 sprite (0x8017E4A0) for 60 frames, then StartCameraPan(D_801A2770) (H);
  * 13: when the pan ends or after 44 frames, RequestMapChange(&D_80182618) (H).
  * Any time before step 14, pad mask 0x840 skips: RequestMapChange(&D_8018263C) and step 15 (idle) (H).
* **Exits:** two RequestMapChange records, normal end D_80182618 and skip D_8018263C; destinations unknown (data).
  P01 differs: the exit step 0x8017CEC4 uses the stage's own black-overlay fade (0x8017EB28 / 0x8017EB54:
  func_80016224 full-screen subtractive quad, +4 per frame to 0xFF) instead of StartExitFade; a second step
  0x8017CF9C (S2, also in SC01_001) waits FadeDone(4) then RequestFieldFileLoad(0) (H).
* **Sound:** SoundRequest(0xB5B, 0) at the start (H); P01 exit commands.
* **Unknown / notes:** 0x8017D488 returns 0x80 (a per-stage constant hook, meaning unknown). The two coloured lines
  (red / blue) are L for the game's two-sword motif. 0x8017D1F0 / 0x8017D290 (S34 / S75) are a pad-toggled camera
  helper shared with many stages.

#### Names: SC01_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D490 | func_sc01_000_8017D490 | RoomOpeningSequence | 16-step state machine of picture zoom, sweeps, pans, skip test, RequestMapChange | H |
| 0x8017DD04 | func_sc01_000_8017DD04 | DrawOpeningPicture | four POLY_FT4 (code 0x2C) from a 9-point grid, scaled | H |
| 0x8017E1A8 | func_sc01_000_8017E1A8 | ScaleGridPoints | 9 points about (0xA0, 0x78) times s / 4096 plus offset | H |
| 0x8017E210 | func_sc01_000_8017E210 | DrawCaptionPair | two 160x32 SPRT halves, brightness c | H |
| 0x8017E3A0 | func_sc01_000_8017E3A0 | DrawSweepLine | one LINE_F2 (0x50), red or blue by the last argument | H |
| 0x8017E594 | func_sc01_000_8017E594 | DrawUnrollBand | two sprite halves whose height grows with arg0 | M |
| 0x8017E4A0 | func_sc01_000_8017E4A0 | DrawSmallCaption | one 128x16 SPRT at (-0x40, 0x50) | H |
| 0x8017D164 | func_sc01_000_8017D164 | SetCameraEyeTarget | stores two s16 vectors into the camera globals | M |
| 0x8017D0BC | func_sc01_000_8017D0BC | CameraInitFromStored | copies those vectors to the camera, SetCameraUpdate, SnapCamera | M |
| 0x8017D428 | func_sc01_000_8017D428 | CopyCameraEyeTarget | writes the stored vectors to obj +0x3C..+0x50 | M |
| 0x8017D488 | func_sc01_000_8017D488 | StageConstant80 | returns 0x80 | L |
| 0x8017CEC4 | func_sc01_000_8017CEC4 | RoomExitStep | P01 exit commands with own fade start | H |
| 0x8017EB28 | func_sc01_000_8017EB28 | StartBlackOverlay | D_800AF7CE = 0, func_80016224(0, 0) | H |
| 0x8017EB54 | func_sc01_000_8017EB54 | StepBlackOverlay | +4 per frame to 0xFF, returns done | H |

### SC01_001
* **Place:** a cutscene-only map (H: no player control code; one 124-step scene with 41 messages and 43 camera pans,
  skippable). It follows a scripted cast of five actors plus one actor that appears after a big light effect and white
  flash, its model switched to the EXE-resident model D_800DE2A4 (H) (M: a character materialises; L: the prologue
  scene where Musashi is summoned). No progress values. Shares its exit step (S2 FadeDone(4) + RequestFieldFileLoad(0))
  and entry step (S2) only with SC01_000 (H), so it sits next to it (M).
* **Size:** 96 functions (own ~70, shared lone shapes S2 x3, S3, S7, S10, S34, S75, S138; no family; P01, P02, P03).
* **Actors:** all are cast members driven by "cue" variables that the scene sets through 0x8017EC28 (H): each cast
  actor's cue state reads its own cue word (D_801EDA08 / 0C / 10 / 14 / 18 / 1C), picks an animation script
  (SetScript) and a keyframe path (0x80182B60 sets +0xCC; 0x80182B00 steps x, y, z, rot entries until 0x8000) (H).
  * A0 (states 0x8017F28C-0x8017F830, run through 0x8017F238, which also runs the scene and the blink): cue D_801EDA10,
    18 animation choices (H). Its init AllocActorModel(D_8019BD38) + SpawnShadowSized(0x3000) (H).
  * A1 0x8017F878 (cue D_801EDA14), A2 0x8017FE08 (cue D_801EDA0C), A3 0x8018043C (cue D_801EDA1C), A4 0x801808D8
    (cue D_801EDA18): same pattern, own models / scripts (H). Which characters they are: unknown.
  * The appearing actor (0x80180EEC with states 0x80180F64 / 0x80181000 / 0x801810A4 ...): its model's +0x12 spins by
    8 per frame until the scene sets D_801EDA38; then it is placed at (5, -0x292, -0x15), switches to model
    D_800DE2A4, gets a shadow; cue D_801EDA08 drives it afterwards and can FreeActor it (H). While D_801ED9F0 == 1 it
    computes two world points from a bone (0x801832BC -> 0x801833A0 -> 0x801835C8) (H; M: a blade / trail effect).
  * Small walkers 0x80181584-0x801817BC: follow paths, SpawnShadowB, SoundRequest(0x42E, 0) on arrival, then set a
    10-frame timer that releases the scene (D_801ED9E4 = 1) (H).
  * A5 0x80182F58 (spawned as kind 0x3B8 by 0x80182EB0: 3 at step 2, 7 at step 95, each with a camera shake and
    SoundRequest 0xB0A / 0xB0B) (H): falls under gravity (MoveObject + CollidePath, 0x80183128), bounces once
    (+0x14 = -0xC0000), the first landing plays SoundRequest(0xB98, 0) (H) (M: falling debris).
* **Events / scripted scenes:** 0x8017D2DC, steps D_801F313C 0-124 (H). Pattern per step: StartCameraPan
  (0x8017F1C8), OpenMessage (0x8017EBA4), set cues (0x8017EC28), wait for the message to close (0x8017EBCC closes it
  when GetMessageAnswer is non-zero) or a timer (H). Notable steps:
  * 2: SoundRequest(0xB0A), StartCameraShake, 3 kind-0x3B8 spawns (H);
  * 14-46: SoundRequest(0xB0C); a ring / column effect of up to 12 sprite objects (0x801824EC, 0x80182284,
    0x8018275C, at y -0x2E9) plus a 256-point particle cloud (0x80181E04), lights via ApplyLightPeriod(9); then a
    full-screen white quad (func_80016450(0xFF)), SoundRequest(0xB0D), camera shake, and D_801EDA38 = 1, which makes
    the actor appear (H);
  * 47-48: func_8001AAA0(0x90), ApplyLightPeriod(1), the white fades out by 4 per frame, up to 13 SpawnKind205
    particles (0x801831EC) (H);
  * 95: second shake, SoundRequest(0xB0B), 7 kind-0x3B8 spawns; 106: SoundRequest(0xC8D) (H);
  * 123: RequestMapChange(&D_80187268) (H). Pad mask 0x840 at any step below 123 jumps to 123 (H: skip).
  * Light sets: 0x80183748 loads three lights (colour + direction, func_80028620) from tables at steps 0, 13, 47 (H).
  * Texture swaps: 0x80182C10 / 0x80182BD0 / 0x80182B68 MoveImage a 8-byte rect to VRAM (0x280, 0x188), 0x80182B9C to
    (0x200, 0x100); 0x80182C58 (each frame) swaps two rects every 60 frames for 2 frames unless 0x80182BD0 froze it (H)
    (M: an eye blink / face expression texture of one cast member).
  * 0x80182D04 sets / clears the 0x01000000 bit of six map-object words D_800DE2F8[0..5] by mode 0 / 1 / 2 (H;
    M: shows / hides parts of the room).
* **Exits:** RequestMapChange(&D_80187268) at the end or on skip (H); destination unknown (data). P01 exit variant:
  0x8017CEC4 (S10, StartFade instead of StartExitFade) and 0x8017CF40 (S2: FadeDone(4) then RequestFieldFileLoad(0),
  i.e. a picture card on the next load) (H).
* **Sound:** 0xB0A, 0xB0B, 0xB0C, 0xB0D, 0xC8D, 0xB98, 0x42E; SoundCmd1(1) at step 41 (H).
* **Unknown / notes:** who the five cast members are is not in the code. 0x8017D2D4 returns 0x8F (stage constant
  hook, cf. SC01_000's 0x80).

#### Names: SC01_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D2DC | func_sc01_001_8017D2DC | EventPrologueScene | 124-step message / pan / cue script, skip, RequestMapChange | H |
| 0x8017F238 | func_sc01_001_8017F238 | CastDirectorMain | runs the scene, A0's state table D_80188DD0, the blink | H |
| 0x8017EBA4 | func_sc01_001_8017EBA4 | SceneOpenMessage | OpenMessage, keeps the handle | H |
| 0x8017EBCC | func_sc01_001_8017EBCC | SceneCloseAnswered | CloseMessage when GetMessageAnswer != 0 | H |
| 0x8017EC18 | func_sc01_001_8017EC18 | SceneMessageOpen | returns handle != 0 | H |
| 0x8017EC28 | func_sc01_001_8017EC28 | SetCastCues | writes the six cue words by a cue code | H |
| 0x8017F1C8 | func_sc01_001_8017F1C8 | ScenePan | StartCameraPan and remembers it | H |
| 0x8017F1F8 | func_sc01_001_8017F1F8 | ScenePanDone | CameraPanDone on the remembered pan | H |
| 0x8017F28C | func_sc01_001_8017F28C | Cast0Init | AllocActorModel, SetScript, SpawnShadowSized | H |
| 0x8017F328 | func_sc01_001_8017F328 | Cast0Cue | switch on D_801EDA10: SetScript + path | H |
| 0x8017F878 | func_sc01_001_8017F878 | Cast1Main | ACTOR-MAIN; cue D_801EDA14 in 0x8017F950 | M |
| 0x8017F950 | func_sc01_001_8017F950 | Cast1Cue | switch on D_801EDA14 | H |
| 0x8017FE08 | func_sc01_001_8017FE08 | Cast2Main | ACTOR-MAIN; cue D_801EDA0C | M |
| 0x8017FEE0 | func_sc01_001_8017FEE0 | Cast2Cue | switch on D_801EDA0C | H |
| 0x8018043C | func_sc01_001_8018043C | Cast3Main | ACTOR-MAIN; cue D_801EDA1C | M |
| 0x80180514 | func_sc01_001_80180514 | Cast3Cue | switch on D_801EDA1C | H |
| 0x801808D8 | func_sc01_001_801808D8 | Cast4Main | ACTOR-MAIN; cue D_801EDA18 | M |
| 0x801809B0 | func_sc01_001_801809B0 | Cast4Cue | switch on D_801EDA18 | H |
| 0x80180EEC | func_sc01_001_80180EEC | ArrivalMain | state table D_80188E20, bone points when D_801ED9F0 == 1 | M |
| 0x80180F64 | func_sc01_001_80180F64 | ArrivalInit | model D_80199754, spin speed 8 | H |
| 0x80181000 | func_sc01_001_80181000 | ArrivalWaitAppear | spins until D_801EDA38, then model D_800DE2A4 | H |
| 0x801810A4 | func_sc01_001_801810A4 | ArrivalCue | switch on D_801EDA08, FreeActor | H |
| 0x801816A4 | func_sc01_001_801816A4 | WalkerArrive | path end: SpawnShadowB, sound 0x42E, release timer | H |
| 0x80182B00 | func_sc01_001_80182B00 | StepCastPath | x, y, z, rot keyframes until 0x8000 | H |
| 0x80182B60 | func_sc01_001_80182B60 | SetCastPath | +0xCC = path | H |
| 0x80182C10 | func_sc01_001_80182C10 | ResetBlinkTexture | MoveImage rect 0, restart blink timer | H |
| 0x80182C58 | func_sc01_001_80182C58 | UpdateBlinkTexture | 60 / 2 frame alternate MoveImage | M |
| 0x80182BD0 | func_sc01_001_80182BD0 | SetFaceTexture | MoveImage rect n, blink off | M |
| 0x80182B68 | func_sc01_001_80182B68 | LoadFaceTexture | MoveImage rect n to (0x280, 0x188) | M |
| 0x80182B9C | func_sc01_001_80182B9C | LoadSceneTexture | MoveImage rect n to (0x200, 0x100) | H |
| 0x80182D04 | func_sc01_001_80182D04 | SetRoomPartsShown | 0x01000000 bits of D_800DE2F8[0..5] by mode | M |
| 0x80182EB0 | func_sc01_001_80182EB0 | SpawnDebris | n SpawnActorFromDef of kind 0x3B8 | H |
| 0x80182F58 | func_sc01_001_80182F58 | DebrisMain | ACTOR-MAIN of kind 0x3B8 (M) | M |
| 0x80182F94 | func_sc01_001_80182F94 | DebrisInit | model, StopMotion, velocity | H |
| 0x80183034 | func_sc01_001_80183034 | DebrisFall | lands -> bounce, first landing sound 0xB98 | H |
| 0x80183128 | func_sc01_001_80183128 | MoveDebris | MoveObject + CollidePath | H |
| 0x801831EC | func_sc01_001_801831EC | SpawnSparkle | SpawnKind205, up to 13, from a position table | M |
| 0x80183748 | func_sc01_001_80183748 | SetSceneLights | 3 lights from a table via func_80028620 | H |
| 0x8018183C | func_sc01_001_8018183C | UpdateLightPillar | one 0x38 sprite object at y -0x2E9, colour fades | M |
| 0x801824EC | func_sc01_001_801824EC | SpawnLightRing | sprite object in a free slot of 20 | M |
| 0x80182284 | func_sc01_001_80182284 | UpdateLightRings | dims rings, spawns 12 at 0x40-frame steps | M |
| 0x8018275C | func_sc01_001_8018275C | GrowLightRings | rings grow to 0x180, returns done | M |
| 0x80182A48 | func_sc01_001_80182A48 | ClearLightRings | frees ring objects, clears the particle array | H |
| 0x80181A28 | func_sc01_001_80181A28 | ClearParticles | zeroes 256 x 0x50 records | H |
| 0x80181E04 | func_sc01_001_80181E04 | DrawParticles | 256 records, GTE rtpt, addPrim | H |
| 0x801832BC | func_sc01_001_801832BC | UpdateBladePoints | two bone-relative points via LocalToWorld | M |
| 0x8017D2D4 | func_sc01_001_8017D2D4 | StageConstant8F | returns 0x8F | L |
About 15 more own functions (small state handlers of the walkers / cast) not proposed.

## Chapter 1: archive SC02

Progress about 2 (SC02_005) and 80-370.

## G2 stage entries (sc02_000 .. sc02_041)

### SC02_000
* **Place:** an outdoor run along a long straight course (Musashi's z runs from about +0x3C98 down past -0x1950) with a
  **rolling-boulder chase**: a large rolling, bouncing object follows Musashi down the course and kills him on contact
  (H: 0x80184BD8 calls HitPlayerFatal when its z < Musashi's z + 0x80; M: "boulder"; L: what it is in the game). No
  progress value set or tested (H: progress.txt). Code identical to SC02_003 (H: brief).
* **Size:** 312 functions (own 0: the 165 shared shapes are F014, which only SC02_000/003 have; shared: F004 (37,
  an enemy kind of sc01_077), F013 (15), F015 (8), F006 (4), F009-F012 (3 each), F016 (3), 18 lone shared shapes;
  P01 x4 dispatchers, P02; 11 stubs).
* **Actors:**
  * A1-A3: F013 (effects). A4-A5: F009 / S6 effects. 0x8017CE58-0x8017D538: F006 + S15 (GTE mesh drawing).
  * 0x8017E404-0x8018173C: F004 enemy (owned elsewhere) with two F014 variants: its main AI 0x8017EA84 (sound
    0x6A9, SpawnKind13, sight test, chase) and 0x80180AD4 (FindActorByKind(0x298), sound 0x436) (H calls).
  * **Boulder** (0x80183D80 dispatcher `table[+2]` over 0x80183DD8-0x80185910, set-up 0x80183FC8): the set-up picks
    one of three starts from D_800B9A0E (0 / 1 / 2: field-overlay mode set by ovl36 func_800CF82C/840; H values, M
    meaning "entry variant"), two of them placing it at fixed z (0x3C98, 0x1C59) (H). The roll state 0x80184BD8 spins
    the model (+0x12 += speed), bounces when a path test (0x80185C48 CollidePath) fails, shakes the camera
    (StartCameraShake), throws debris (0x8018762C, 0x80187354 -> prop 0x80188C0C), every 8 frames re-plays a rumble
    sound 0x4E2 with volume from screen depth (H), and from time to time SpawnActor(0x67) (H; kind unknown). Contact
    -> HitPlayerFatal + sounds 4/0x4DF, 4/0x4E2 and D_801E8010 = 1 (H). 0x801857B0 calls StartTimedDusk (H; L: the
    light dims as it passes). Sounds 0x4D7, 0x4D9, 0x4DD, 0x4DF (H).
  * A6/A7 (0x80185B40, 0x801860A8): boulder parts / props (model + script, freed by a timer) (M).
  * A9 (0x801863E8, set-up 0x80186764, two models): a **glowing object** that lights up while D_801270C8 = 1 (sounds
    0x4C6 + 0x4CE on, 0x4C7 off) and, when Musashi comes within sqrt(0x900) = 48 units while lit, starts Musashi's
    action 0x801827C0 and frees itself (H). That action walks him to a point, **refills HP and BP** (FillHp, FillBp),
    SetFlag80, plays a motion and face script with sounds 0x4C8/0x4C9/0x445, SoundCmd1(0) (H). L: a restore point.
  * A11 (0x80186910, set-up 0x8018694C): a **trigger area**: D_801270C8 = 1 while Musashi, or an actor of kind 0x2F
    not in state 4/6, is within sqrt(0xC40) = 56 units (0x80186AE4, H); its counter makes 0x801869CC start event
    script D_8018F33C once (H). Sound 0x402 for 150 frames (0x80186A64/A9C, H). M: a floor switch that powers A9.
  * A12-A16 (0x80186CAC-0x80187F30): **objects in the boulder's path**: each waits until its parent (+0x64, the
    boulder) passes its z, then breaks or flies off (sounds 0x4DC, 0x4D8, 0x4DA; debris spawners 0x80187480,
    0x80187558; A16 0x80187988 = flying fragments with random velocities, three models by +0x70) (H tests, M reading).
  * A17 (0x80187FEC, set-up 0x80188028): a creature that runs ahead (sound 0x6A9, SpawnKind13, spawns SpawnActor(0x3F)
    copies of itself 0x300 behind) and is knocked away when the boulder reaches it (sound 0x6AA) (H calls; M reading;
    0x6A9/0x6AA and SpawnKind13 are also the F004-variant enemy's, so L: the same enemy fleeing).
  * A20 (0x80188754): particle props (SpawnProp, random). A22 (0x80188D18): runs F015 (8 screen sprites, see
    families; L lens flare). A23/A24 (0x80188ECC, 0x80189304, draw 0x80189340): a sparkle with sound 0x4CF whose
    volume and pan follow Musashi's heading and height; quiet while D_801270C8 = 1 (H). 0x801897E8: after 16 counts,
    when D_800B9A0E = 0, SoundRequest(0x106) once (H). 0x80189898: NextState of actor kind 0x338 (H).
  * A25 (0x801898C8): an oscillating (rsin/rcos) light or sprite that grows to 0x2000 then times out (M).
  * A26-A28: F011 / F010 effect actors (SpawnActor(0xBC), SpawnActor(0x85)).
* **Events / scripted scenes:** four room-step dispatchers (P01). Entry 0x80182190 runs Musashi's action
  0x801824E0: unless the map record's byte (func_800CF854, D_800AE6BF) is set, a motion, HidePlayerScene, wait for
  effect 0x1A to end, **OpenMessage + GetMessageAnswer** (a question; text is data), CloseMessage (H). Entries
  0x80182398 / 0x80182450 (action 0x0B000000) start the two **run sequences** 0x80183238 / 0x80183718:
  SetMapRecordAC(D_8018EA6C / D_8018EA90), the camera modes 0x80181A94 / 0x80181C10 / 0x80181D0C, and, at z marks
  from table D_8018EDD0, OpenMessage(D_801A7CB0) with sound 0x5A1, 0x5F1, 0x5F2 (H; L voice shouts). One sequence
  drops Musashi from a height with gravity (SetEffectAccel, 0x80183310) (H).
* **Exits:** 0x80183814: RequestMapChange(D_8018EA48) when Musashi's z < -0x1950 and D_801E8770 != 0 (H;
  destination unknown, data). The exit step 0x801822BC (F016) uses SoundCmd1(2) + StartFade(4) instead of
  StartExitFade (H).
* **Sound:** room exit 0x1C/0x1D + SoundCmd1(2); SoundCmd1(0) in the HP/BP scene; boulder 0x4D7-0x4E2 (H).
* **Unknown / notes:** the boulder is not spawned from code (spawn list is data). D_800B9A0E's three values may be
  "new entry / retry / later start" (L). Camera modes 0x80181820-0x80181D0C are F014 (named there).

#### Names: SC02_000
All its non-trivial code is F014 (named in G2_families.md) or other families; no own functions to propose.

### SC02_003
* Same code as SC02_000 (identical own code, H: brief; same 312 shapes); differs only in data (spawn lists, map
  records, scripts). See SC02_000. L: the second version of the boulder course (a different story state or the
  return direction); nothing in code shows which.

#### Names: SC02_003
Same as SC02_000 (F014).

### SC02_004
* **Place:** a short **transit room**: Musashi is walked through it by script and the room changes map at once (H:
  0x8017D6F0 / 0x8017D7B4); a rumble with dust bursts plays as he passes a point (H). L: a passage between the
  boulder course (SC02_000/003, same F006 mesh code) and the next area. No progress value (H).
* **Size:** 33 functions (own 9; shared: F006 x4 + S15 mesh drawing, 10 lone shared shapes; P01 x2; 4 stubs).
* **Actors:**
  * A1 (0x8017D874) **rumble point**: when Musashi's z falls below its own (D_80126B66 = Musashi's z, M), sets a
    16-count, StartCameraShake(D_801817E0) and sound 0x4E8 (0x8017D8B0); then bursts of dust props (SpawnProp(5)
    at its position, 16+8+4+2+1 extra, 0x8017D910 / 0x8017D9C4); re-arms when Musashi goes back (0x8017D99C) (H).
  * A2 (0x8017DC54, states 0x8017DA30 / 0x8017DB2C): the dust prop: two looks (rand & 3), sprite animation, drifts
    and slows, or falls and bounces off the map (RaycastMap, half rebound) until the animation ends (H).
* **Events / scripted scenes:** room start 0x8017D468: StartCameraPan(D_801919B0), projection 0x1F4 (H). Entry
  0x8017D4D8 is the plain P01 entry. Second sequence (step 0x8017D588 -> action 0x8017D804): Musashi's action
  0x8017D6F0 walks him to a point (D_80194F04), pad forced to 0x40 near D_80194F0C, then waits 0x20 frames (H).
* **Exits:** 0x8017D7B4: RequestMapChange(D_801816EC) at the end of that walk (H; destination unknown, data). The
  P01 exit step 0x8017D5D4 (sound 0x1C/0x1D, SoundCmd1(2), StartExitFade) is the normal exit (H).
* **Sound:** 0x4E8 rumble (H).

#### Names: SC02_004
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D468 | func_sc02_004_8017D468 | RoomStartCameraPan | StartCameraPan(D_801919B0); projection 0x1F4 | M |
| 0x8017D6F0 | func_sc02_004_8017D6F0 | EventWalkToExit | WalkToPoint(D_80194F04), then 0x20-frame wait | M |
| 0x8017D7B4 | func_sc02_004_8017D7B4 | EventChangeMap | timer, RequestMapChange(D_801816EC), EndPlayerActionOf | H |
| 0x8017D8B0 | func_sc02_004_8017D8B0 | RumbleWaitPlayer | Musashi's z < own -> StartCameraShake + sound 0x4E8 | H |
| 0x8017D910 | func_sc02_004_8017D910 | RumbleBurstDust | spawns 0x8017D9C4 count+2 times, halves count | H |
| 0x8017D99C | func_sc02_004_8017D99C | RumbleRearm | back to state 0 when Musashi is behind it again | H |
| 0x8017D9C4 | func_sc02_004_8017D9C4 | SpawnDust | SpawnProp(5) at the actor, random look | H |
| 0x8017DA30 | func_sc02_004_8017DA30 | DustInit | two sprite looks, random spin | M |
| 0x8017DB2C | func_sc02_004_8017DB2C | DustMove | StepSpriteAnim, MoveProp, RaycastMap bounce, FreeProp | H |

## The village and its surroundings (archive SC03)

The village (SC03_001) and its variants, and the maps around it, across the whole story (progress 20-1120).

Common reading used below (all from sc03_001 code, cited once here):
* **Game clock**: byte D_80078EB1 = hour 0-23, D_80078EB0 = minute 0-59 (H: ovl36 func_800D0D7C wraps them at 60 / 24).
  Village code tests "hour in [a,b)" (func_8018766C, F068) and "hh:mm in [t0,t1)" (func_80187690, F068), and builds
  minutes-of-day D_801EEAEC = hour*60+minute (func_80180078) (H).
* **Chapter index**: func_801877C0 (F068) maps progress to 0-4 by thresholds 0x14/0x46/0x64/0x82 (20/70/100/130);
  func_80187904 maps progress to 0-4 by 0x3B6/0x3E8/0x44C/0x4B0 (950/1000/1100/1200) (H). Villager talk scripts are
  picked by these indices (H).
* **Inventory slots**: ovl36 func_800D0F8C(a) finds the inventory slot (vars 0x2F-0x3A) holding item a,
  func_800D0F4C(a) removes item a, func_800D0F0C(i, v) puts item v in slot i (H: ovl36 code). Names below:
  FindItemSlot / TakeItem / PutItem (proposed, M).

### SC03_001
* **Place:** the village (Grillin Village hub, L for the name) in its first version. Code shows a day/night clock world:
  16 house-window lights switched on by clock windows, villagers placed by hour, a positional ambient sound, house
  doors kind 0x61 that open, a shop/inn menu (H for the mechanisms, M for "village"). The brief's village ids are
  0x1010/0x1052/0x1077/0x1094 (which one this image serves is data). Progress: sets 0x3AC (940) when progress is
  exactly 0x3A2 (930) (func_80187960, F068, H); the shop menu sets progress 100 (0x64) and flags 0xEB, 0x91, var 0xCE
  when the bought/used entry is flag-kind item 0x1F (func_8018C000 case 15, F069, H). Tested progress bands: 0x14,
  0x1E, 0x46, 0x55..0x181, 0x64, 0x6E, 0x82, 0x87, 0xC8, 0xDC, 0xE6, 0x1F4, 0x258, 0x276, 0x384, 600, 950, 930 (H)
  — i.e. this image is used across the whole story (M).
* **Size:** 496 functions (own 89 + dup 12, stubs 18, 43 actor dispatchers, S-shapes 58; families 269: F067 112,
  F068 69, F069 39, F070 21, F071 17, F072 4, F007 4, F009 3; P01, P02, PLAYER-ACTION-MAIN x2).
* **Actors:**
  * A1-A3 (0x8017BE9C..): F068 point-list spawner (func_8017BF50 spawns up to 16 SpawnFromDef def 0x158 or SpawnProp(0x11)
    from a list at +0xDC) and F068 small model props.
  * A4-A5 (0x8017C338, 0x8017C5CC): S27 / F009 effect actors (SpawnEffect 0x11 / 0x12, M: dust or splash).
  * Own walker (dispatcher func_8017DA48 over D_80191044, set-up func_8017DB6C): present only for 0x14 <= progress < 0x46
    and not when flag 0xE5 is set (unless progress == 0x3C) (H). Wanders: every 20-30 frames picks a new heading, turns
    back toward home point D_80191010 when far, random turn when near (func_8017D734, H); a second mode follows actor
    kind 0xAD at +0x20/+0x20 offset (func_8017DCE4, freed when 0xAD is gone, H); script-set mode +0xFC 0-3 (H).
    L: a village animal (dog / chicken) that follows a villager.
  * A7 (0x8017DEAC): morning light effect: at hour 7 starts 4 entries in D_801EE888, fades their colours with rsin,
    stops after hour 9 when all are done (func_8017DEE8 / func_8017DF78, H). L: dawn mist / sun shafts.
  * A8 (0x8017EEA8) and A15-A30, A33-A34: the **villagers** (F067 + F068 + F069 + F070 + own glue). Each set-up
    allocates a model, picks a state by progress band and by hour (func_8018766C), places itself at a schedule point
    (func_80187778 = hide + place), spawns a talk marker with a talk handler (SpawnTalkMarker), and walks point paths
    (func_80187994 start path, func_80187A64 step: 8x faster while PlayerFlag80B, M) between its house door (kind 0x61,
    asked to open by func_801886A0) and spots in the village (H for the mechanics). Talking runs a script chosen by
    chapter index / conversation counters: vars 0xD6-0xD9 (pair of villagers kinds 0xA2 / 0xA4, func_80182F3C, who
    only talk as a pair when the other is present), var 0xDA (func_80184968), var 0xDB (func_8018631C, progress 0x87
    split) (H). One-time talk flags: 0x110, 0x113, 0x115, 0x116 (F067 GetFlag/SetFlag pairs, H). Villager
    func_80185B54 (A30): states by progress 0x14/0x1E/0x64/0x6E/0x82; between 0x64 and 0x6E it stands at a fixed spot
    and spawns kind 0x157 and calls func_8014CB68 (H; M: a story scene in chapter 3). A22 func_80181A68 loads stage
    extra file 4 (LoadStageFileA) and runs script D_80191C58 once (H).
  * A31-A32 (0x80185C60, 0x80185CD8): villagers whose per-state code lives in a **stage extra file**: LoadStageFileA(1/2)
    then calls 0x801EF46C / 0x801EF558 / 0x801EF58C / 0x801EF624 / 0x801EF734 / 0x801EF904 (H): that code is not in the
    repo. Their schedule tests clock 10:00-10:30 and 15:00-15:30 (func_80185DC8 / func_80185E44, flag 0xDF, H). A
    follower actor (func_8018617C) sticks to kind 0xAA at a 0x40 offset and changes script on +0xFC (H).
  * A36 (0x8018691C): actor set up for progress < 0x1E or < 0x46 (two states), else gone (func_80186A8C, H).
  * A37 (0x80186F4C) F068: a **two-leaf gate**: leaves +0x70 = 0/1 rotate to +-0x600 (open) once flag 0xF6 is set or
    progress >= 0xE6; while closed, leaf 0 has a talk marker; the script outcome (func_80187004) plays sound 0x7A0,
    sets flag 0xF6, removes item 0x59 from the inventory (TakeItem), and signals actor kind 0x1F2 (H). M: a gate opened
    with a key item 0x59.
  * A38/A39 (0x801875EC, 0x80187C74) F068: **house doors** (kind 0x61, M): door model per index +0x70, swings open with
    sound 0x514 and closed with 0x515 (func_801881A0 / func_8018828C, H); talk handler func_8018872C (own) fires when
    Musashi stands in the door's front area and no villager is there, except on map 0x3069 (H); the script is picked by
    door index and conditions (func_80188830, F072: D_80078EBA = 0/2/3/6, progress 300-600 with flag 0xFA, 100-600,
    chapter indices) (H; M: "closed / nobody home" texts).
  * A40 (0x80188B44) F068: a marker that snaps to the nearest kind-0x61 door to Musashi (func_80188BFC, H).
  * Room manager (set-up func_80180134): spawns kinds 0x13F, 0x66, 0x65, 0x14C, 0x335, 0x3D9 (H); its frame
    (func_80180078) updates the minutes-of-day clock, draws the 16 window lights (func_8017F258 -> func_8017F2AC ->
    func_8017F368: yellow additive quads, fading in/out over 16 minutes at each window's own time, e.g. 19:00-21:00,
    6:00-7:00; some windows also gated by progress 0x64-0x258 or 0xC8-0x1A4) and runs the ambient sound (H).
  * A9 (0x8017F7C8) F071: between hours 7 and 19 spawns kind 0x140 at random offsets every 0x50 frames (H; L: birds).
  * A13 (0x8017F9D4): a swaying model (random angular kicks, S2) (H; L: a weathervane or sign). F071 sprite / prop
    actors (func_80180224 .. func_80180574), one hidden for progress 0x181-0x1D5 (func_801804D0, H).
  * A41-A42 F007 (particle props), func_8018CEA8: spawns kind 0x21 when progress is 100-129 (index 0) or 950-999
    (index 1) (H).
  * A43 (0x8018CF54): generic talk NPC (S20 set-up, script from table D_801EB468 by +0x70) (H).
* **Events / scripted scenes:** all talk: RunScript + IsEventDone / EndEvent in each villager; F067 / F070 handlers
  (func_8018739C: Musashi in an area in front of the villager's door) start house-door conversations (H). Two
  PLAYER-ACTION-MAIN entry walks (P01).
* **Puzzles / mechanisms:** the key gate (flag 0xF6, item 0x59); time-of-day schedules; the shop / inn menu
  (F069, func_80188FDC .. func_8018D0E4): goods lists by shop type D_80115126 (type 3 = 4 entries and extra goods
  unlocked by flags 0x11D, 0x1B-0x21, a count of >= 0x1B, and all 42 collectibles: vars 0x63-0x8C bit 0x40), message
  windows and choice cursor, sounds 0x45A-0x474 / 0x5EE / 0xC62, buy / use writing flags or inventory slots
  (PutItem), and a rest option that calls AddHp, AddBp, ClearStatsWords (H; M: shop + inn).
* **Exits:** P01 exit step (func_8017E578: sound 0x1C/0x1D, SoundCmd1(1), StartExitFade). Extra exit variants:
  func_8017E648 (fade only) and func_8017E69C (SoundCmd1(1) only when var 0xCE is set) (H). No RequestMapChange in
  stage code: house doors / map exits are data (unknown).
* **Sound:** ambient positional sound 0x7E6 from point D_80191968: pan from screen x, volume from distance, stopped by
  SoundRequest(4, 0x7E6) off-screen (func_8017FC00, H; L: river / mill). 0x464 (villager, F067), 0x7A0 gate, 0x7E0.
* **Unknown / notes:** much villager behaviour is in the stage extra files (0x801EF4xx-0x801EF9xx) and in scripts.
  The camera set-up func_8017E91C (dist 0x4B0, angle 0x238, proj 0x1F4) is the village camera. Map id 0x3069 is tested
  by the door talk (H); what it is is unknown.

#### Names: SC03_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D5F0 | func_8017D5F0 | AvoidActorPath | PathHitsModel + RestorePrevPos against kind 0xAD | M |
| 0x8017D734 | func_8017D734 | WalkerWander | turns every 20-30 frames, home point D_80191010 | M |
| 0x8017D8A8 | func_8017D8A8 | WalkerApproach | heads to points, TurnStep, kind 0xAD | M |
| 0x8017DA48 | func_8017DA48 | WalkerMain | own dispatcher D_80191044, mode from +0xFC | H |
| 0x8017DB6C | func_8017DB6C | WalkerInit | SetupActor; progress 0x14-0x46, flag 0xE5 | H |
| 0x8017DCE4 | func_8017DCE4 | WalkerFollow | follows kind 0xAD, freed without it | H |
| 0x8017DEE8 | func_8017DEE8 | DawnLightStart | waits for hour 7, starts 4 entries | H |
| 0x8017DF78 | func_8017DF78 | DawnLightUpdate | rsin colour fade, ends after hour 9 | M |
| 0x8017E1B4 | func_8017E1B4 | DawnLightRestart | re-arms one entry | M |
| 0x8017E3D8 | func_8017E3D8 | RoomFrame | UpdateDayLighting + fog + func_800D06E8 | M |
| 0x8017E494 | func_8017E494 | RoomEntryStep | StartPlayerAction + StartFade(0) | H |
| 0x8017E508 | func_8017E508 | RoomEntryStepB | second entry walk, 10-frame timer | M |
| 0x8017E69C | func_8017E69C | RoomExitStepVar | SoundCmd1(1) gated by var 0xCE | H |
| 0x8017E91C | func_8017E91C | RoomInitCamera | camera distance/angle/projection set, SnapCamera | H |
| 0x8017EA1C | func_8017EA1C | CameraModeVillage | calls F068 pad camera + S9 transform | M |
| 0x8017EDB8 | func_8017EDB8 | Villager1Init | progress bands + hour 10-16 states, talk marker | H |
| 0x8017EFD4 | func_8017EFD4 | Villager1Schedule | hour/progress test then hide | M |
| 0x8017F258 | func_8017F258 | DrawWindowLight | per-window time test D_801918A4[i] | H |
| 0x8017F2AC | func_8017F2AC | DrawWindowLightQuads | colour from fade, loops quads | H |
| 0x8017F368 | func_8017F368 | DrawWindowLightQuad | RotTransPers4, AddPrim | H |
| 0x8017FD90 | func_8017FD90 | WindowLitTime2 | clock window test (one of 16) | M |
| 0x8017FE60 | func_8017FE60 | WindowLitTime6 | 6:00-7:00 or 19:00-21:00, not progress 0xC8-0x1A4 | H |
| 0x8017FF08 | func_8017FF08 | WindowLitTime8 | 2:30-4:00, not progress 0x64-0x258 | H |
| 0x80180078 | func_80180078 | RoomManagerFrame | minutes-of-day, window lights, ambient sound | H |
| 0x80180134 | func_80180134 | RoomManagerInit | spawns six kinds | H |
| 0x8017FC00 | func_8017FC00 | UpdateAmbientSound | pan/volume sound 0x7E6 | H |
| 0x80180A58 | func_80180A58 | VillagerSetScript | SetScript helper | M |
| 0x80180ECC | func_80180ECC | VillagerTalkChoice | UpdateScript answer picks one of two scripts | H |
| 0x80180FF8 | func_80180FF8 | Villager3Init | talk marker set-up | M |
| 0x80181948 | func_80181948 | FindPartnerA2 | FindActorByKind(0xA2) | H |
| 0x80181A68 | func_80181A68 | VillagerLoadExtraScene | LoadStageFileA(4) + script D_80191C58 | H |
| 0x80182F3C | func_80182F3C | PickPairTalkScript | vars 0xD6-0xD9, kinds 0xA2/0xA4 | H |
| 0x80184968 | func_80184968 | PickTalkScriptVarDA | var 0xDA | H |
| 0x80185B54 | func_80185B54 | Villager30Init | progress bands, kind 0x157 | H |
| 0x801856A8 | func_801856A8 | Villager30TalkCheck | four door areas, ResetScriptVM | M |
| 0x801859AC | func_801859AC | Villager30Walk | path steps, door open | M |
| 0x80185DC8 | func_80185DC8 | ExtraVillagerClock1 | 10:00-10:30 / 15:00-15:30 | H |
| 0x80185E44 | func_80185E44 | ExtraVillagerClock2 | same with flag 0xDF | H |
| 0x80186124 | func_80186124 | FollowerInit | model D_801E6640 | M |
| 0x8018617C | func_8018617C | FollowerUpdate | sticks to kind 0xAA | H |
| 0x8018631C | func_8018631C | PickTalkScriptVarDB | var 0xDB, progress 0x87 | H |
| 0x80186A8C | func_80186A8C | Villager36Init | progress < 0x1E / < 0x46 | H |
| 0x80186C54 | func_80186C54 | Villager36Talk | DistSqToPlayer + ResetScriptVM | M |
| 0x8018872C | func_8018872C | DoorTalkCheck | area test, map 0x3069 excluded | H |
| 0x8018CD98 | func_8018CD98 | ParticleTimer | TickTimer then F007 spawn | M |

n more own functions not proposed: about 30 (villager state glue, set-ups with only a model, F068-like wrappers).

Common pieces of this run of stages (described once in G4_families.md): F045 (the kind-0x12C foot soldier enemy),
F048 + F051 (a bundle of small actors: hazard segments, hopper with three spinning parts, shuttling platform,
particles), F050 (room lights with a pulsing light), F055 (warp disc that starts an event and changes map), F089
(flying diver enemy, its thrown bomb, blast ring, debris, and the nearest-two-sources seq points), F090, F091, F092.
F013 (entry / exit door effects) is another group's family.

### SC03_089
* **Place:** an indoor / dungeon area with F045 soldiers and F089 flying divers (M); four room set-ups 0x80180D88,
  0x80180DC8, 0x80180E08, 0x80180E48 each set spawn lists A/B and restart the seq player with block 0-3 (H), so the
  image serves four map variants or rooms (M). No progress values (H).
* **Size:** 214 functions (own 15; shared: F013 15, F045 39, F048 21, F051 3, F050 5, F055 5, F089 36; 37 lone S
  shapes; 14 ACTOR-MAIN, 2 PLAYER-ACTION-MAIN, P01, P02, 11 stubs).
* **Actors:**
  * A1-A3 (0x8017BEF8, 0x8017C524, 0x8017C7C4): F013 (door / entry effects).
  * A4 (own, set-up 0x80181D9C): a fixture that spawns two kind-0x1B8 parts 0x100 either side in z, raised 0x78 and
    offset 0x180 in x towards the room centre (H). State 0x80181F9C: when a kind-0x12C actor (the F045 soldier) is
    inside a box (dy -0x30..0x20, dx/dz +-0x80) it sets both parts' +0xFC = 12 and plays sound 0x6EB, once (H).
    The parts (0x801820A8 set-up, 0x8018210C) then slide 12 frames in x by their +0x12 (+-0x20) while sinking
    4 per frame (H): a gate that opens when a soldier walks into it (M; L what it is).
  * A6 (own, set-up 0x80182150, model by subtype +0x70): a shuttle platform: x +-6 per frame, every 0x43 frames
    it reverses with a 30-frame pause, sound 0x6E9 at the turn and 0x6EA when it moves off again, CarryPlayer (H).
  * A7-A8 and the F048/F051 handlers 0x801822C8-0x80183B7C: F048 (hazard segments, hopper with three 0x164 parts,
    shuttling platform 0x1C4, particles 0x12F).
  * A9-A12 (0x80183C54, 0x80184D40, 0x80185580, 0x80185880): F089 (flying diver kind with companion 0x178, its bomb,
    the 0x1AA blast ring and the 0x1B0 debris).
  * 0x80185CCC-0x80188164: F045 (kind-0x12C soldier: sight, chase, melee, throw) and two S14 thrown-model set-ups.
  * A13 (0x8018847C) with 0x801881D0-0x8018879C: F055 (warp disc, kind 0x1E1 companion).
  * A14 (0x8018912C): F050 (room lights, five set-ups by +0xFC, pulsing light).
* **Events / scripted scenes:** only through F055 (StartEvent on standing on the disc). The player-action
  handlers are the shared ones: 0x80181390 spawns effect 0x1A (arg 0x06E706E8) and 0x801813D4 waits until it is gone;
  0x80181474 (F089) spawns effect 0x19 (arg 0x06920693) and 0x801814BC waits for it, then D_800AE6BD += 1 (H).
* **Puzzles / mechanisms:** the soldier-triggered gate (A4), the shuttle platform (A6), F048 platform.
* **Exits:** P01 (two exit step sets, 0x80180FA8 with SoundCmd1(1), 0x80181080 and 0x80181234 without); F055
  RequestMapChange(+0xDC record): destination unknown (data).
* **Camera:** four camera set-ups 0x80181538 / 0x801815D4 / 0x8018166C / 0x80181708 (targets, SetCameraUpdate,
  SnapCamera) and four camera modes 0x801817E0 / 0x8018188C / 0x80181A68 / 0x80181B14: a button (pad bits 0-1)
  toggles between two camera distances (table D_8018D358...), the focus is clamped to the room (e.g. x +-0x120,
  z -0x6C0..0xC0 in 0x8018188C); common update 0x80181BCC (S75) (H).
* **Sound:** 0x6E9 / 0x6EA (platform), 0x6EB (gate); family sounds (0x6FE / 0x6FF / 0x705 F089, 0xA9B / 0xCB2-0xCBA
  F045, 0xBA2 / 0x679 F048, 0x701 F055).
* **Unknown / notes:** 0x801822A8 (S5) returns 0x3E or 0x47 by D_8012704C (unknown). Two big GTE renderers
  0x8017CA80 (S26) and 0x8017D960 (S5, 870 lines) are chunked-mesh renderer variants (M), not P03.

#### Names: SC03_089
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180D88 | func_sc03_089_80180D88 | RoomStart0 | spawn lists A/B, RestartSeqPlayer(block 0) | M |
| 0x80180DC8 | func_sc03_089_80180DC8 | RoomStart1 | the same with lists 1 and block 1 | M |
| 0x80180E08 | func_sc03_089_80180E08 | RoomStart2 | the same, block 2 | M |
| 0x80180E48 | func_sc03_089_80180E48 | RoomStart3 | the same, block 3 | M |
| 0x80181D6C | func_sc03_089_80181D6C | RestartRoomSeq | RestartSeqPlayer(D_8018D368[n], 0) | H |
| 0x80181538 | func_sc03_089_80181538 | RoomCameraInit0 | camera targets, SetCameraUpdate(0x801817A4), SnapCamera | M |
| 0x801815D4 | func_sc03_089_801815D4 | RoomCameraInit1 | the same | M |
| 0x8018166C | func_sc03_089_8018166C | RoomCameraInit2 | the same | M |
| 0x80181708 | func_sc03_089_80181708 | RoomCameraInit3 | the same | M |
| 0x801817E0 | func_sc03_089_801817E0 | CameraZoomToggleFixed | pad toggles distance, focus x 0, z -0x920 | M |
| 0x8018188C | func_sc03_089_8018188C | CameraZoomToggleClamped | pad toggles distance, focus clamped to the room | M |
| 0x80181A68 | func_sc03_089_80181A68 | CameraZoomToggle2 | same pattern | M |
| 0x80181B14 | func_sc03_089_80181B14 | CameraZoomToggle3 | same pattern | M |
| 0x80181D9C | func_sc03_089_80181D9C | SoldierGateInit | SetupActor, two 0x1B8 parts | M |
| 0x80181F9C | func_sc03_089_80181F9C | SoldierGateWait | kind 0x12C in the box: parts move, 0x6EB | M |
| 0x801820A8 | func_sc03_089_801820A8 | GateLeafInit | SetupActor, state 1 | M |
| 0x8018210C | func_sc03_089_8018210C | GateLeafSlide | 12 frames of x += +0x12, y -= 4 | M |
| 0x80182150 | func_sc03_089_80182150 | ShuttlePlatformInit | SetupActor by subtype | M |
| 0x801821DC | func_sc03_089_801821DC | ShuttlePlatformMove | x +-6, reverse every 0x43 frames, CarryPlayer | H |

## G5 entries (sc03_107 - sc03_126)

### SC03_107
* **Place:** unknown field room with several enemies (M). It tests progress >= 0x1D7 (471) (removes the roaming
  object, below) and its model prop picks data by progress bands >= 0xC8 (200) / >= 0x258 (600) / >= 0x384 (900)
  (H), so the room is visited across the story (M). The roaming object sets progress 0x1D6 (470) only on map 0x1052
  (village version 2), i.e. when the same code runs in the village image (H; that code path is shared with sc03_124).
* **Size:** 128 functions (own 8, lone-shared 28, family 72: F093 x29, F094 x19, F044 x12, F030 x6, F095 x6; 4 actor
  dispatchers, 8 stubs; P01, P02, P03 = own copy 0x8017BEBC).
* **Actors:**
  * A1 (0x8017D540): a model prop; set-up 0x8017D5C4 (S7) AllocActorModel and remaps its +0xDC model key through one of
    three pair tables (helper 0x8017D57C) chosen by progress >= 0x384 / >= 0x258 / >= 0xC8 (H). A second, dispatcher-less
    model set-up 0x8017D698 (S2, also sc03_091) picks its data by variant +0x70 (H). L: scenery that changes with the
    story.
  * A2 (0x8017D730): a talking NPC: SetupActor, SetScript, SpawnTalkMarker with condition 0x8017D878 (talk allowed when
    Musashi is within distance 64, DistSqToPlayer <= 0x1000, and no actor of kind 0x224 is within 64 of the NPC) (H);
    talk runs event script D_80186134 (variant +0x70 != 0) or D_8018611C (H), then IsEventDone / EndEvent (S25).
  * Enemy (main 0x8017D92C, F044 core + F094): a ground melee enemy that wanders, chases, swipes and does a radial
    ground-burst attack; drops an item on 1 frame in 32 when it dies (see F094) (M).
  * A3 (0x801805BC) and the set-up 0x8017EF3C: F093, actor kind 0x1EA, a chained creature (a head with up to six linked
    segments) that rears up, lunges and spits a projectile (see F093) (M).
  * Roaming object (dispatcher 0x801819C8, F095; set-up 0x80181850 and knock-back 0x80181500, S2 with sc03_124): an
    invulnerable object (its HP +0x76 is put back to 0x384 whenever it drops below 0x320, H) that remembers which map it
    is on in the save halfword at D_800BA1B8+10 (func_800291C8 / func_800291DC, H). Set-up frees it when progress >=
    0x1D7, or when the saved word has no 0x100 bit and is not the current map D_800B9A08 (H). When hit it flies off
    (SetLocalVelocity), bounces up to three times (SoundRequest(0x754) and a dust shadow per bounce), and if it lands in
    a pit/water surface (MoveCollide bit 0x1000) plays 0x531 and is put back at its saved spot after a sinking state
    0x80181CC0 (H). On map 0x1052 it starts in a placed pose (PlaceObject D_80198C08, 0x80181A70) (H). 0x80181AB8 (S2)
    keeps an actor within 0x60 of the first actor of kind 0x17E, and frees itself in sub-state 2 (H). L: a carryable /
    kickable story object that Musashi has to bring somewhere.
  * A4 (0x80181D88): F030 (sprite effect actor; its set-up plays 0xAA0) (H); spawned by the F044 state 0x8017E270
    through 0x801823FC SpawnActorFromDef (with 0xAA1) (M).
* **Events / scripted scenes:** the NPC's two talk scripts only (H).
* **Exits:** P01, three exit variants: 0x8017CB70 (with SoundCmd1(1)), 0x8017CC48 (without), 0x8017CCF8 (SoundCmd1(1)
  only when flag 0xB8 is clear) (H). No RequestMapChange in own code; destinations unknown (data).
* **Sound:** effects 0x521 (enemy ground burst), 0x51F / 0x520 (enemy, by distance), 0x531 / 0x754 (roaming object),
  0x833 / 0x8C6 / 0x8C7 / 0x98F / 0xC5D (F093) (H; meanings unknown).
* **Unknown / notes:** camera set-up 0x8017CDD8 (projection 0x190, distance 0x258, angle 0x71) and camera mode
  0x8017CF48: clamps the focus x to -0x740..0xA40 (z > 0x100) or -0x640..0x580, then tests nine x/z boxes
  (D_80185FF0, 16 bytes each, 0x8017D418); the box it is in sets the camera angle targets +0xA0/+0xA2 and +0x14, and
  centres the focus on the box's x (0x8017D474) or z (0x8017D4C8) mid-line or neither (0x8017D51C); eased with
  func_80012DBC / func_80012ABC / func_80012F74 (H).

#### Names: SC03_107
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CDD8 | func_sc03_107_8017CDD8 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017CF0C), SnapCamera | H |
| 0x8017CF48 | func_sc03_107_8017CF48 | CameraZoneFollow | focus clamp + nine zone boxes setting angle targets | H |
| 0x8017D418 | func_sc03_107_8017D418 | PointInZoneXZ | x/z bounds test against a 16-byte zone | H |
| 0x8017D474 | func_sc03_107_8017D474 | ApplyZoneCenterX | zone angles + focus x = zone mid x | H |
| 0x8017D4C8 | func_sc03_107_8017D4C8 | ApplyZoneCenterZ | zone angles + focus z = zone mid z | H |
| 0x8017D51C | func_sc03_107_8017D51C | ApplyZoneAngles | zone angles only | H |
| 0x8017D540 | func_sc03_107_8017D540 | StoryPropMain | ACTOR-MAIN of A1 | M |
| 0x8017D57C | func_sc03_107_8017D57C | LookupPairTable | returns t[i+1] where t[i] == +0xDC | H |
| 0x8017D5C4 | func_sc03_107_8017D5C4 | StoryPropInit | AllocActorModel, progress-band remap | H |
| 0x8017D698 | func_sc03_107_8017D698 | VariantModelInit | AllocActorModel, data by +0x70 | M |
| 0x8017D730 | func_sc03_107_8017D730 | TalkerMain | ACTOR-MAIN of A2 | M |
| 0x8017D76C | func_sc03_107_8017D76C | TalkerInit | SetupActor, SetScript, SpawnTalkMarker | H |
| 0x8017D7D8 | func_sc03_107_8017D7D8 | TalkerStartTalk | RunScript by variant, state 3 | H |
| 0x8017D878 | func_sc03_107_8017D878 | TalkerCanTalk | distance + no kind 0x224 nearby | H |
| 0x80181500 | func_sc03_107_80181500 | RoamObjKnockBack | bounce / pit handling after a hit | H |
| 0x80181850 | func_sc03_107_80181850 | RoamObjInit | progress / saved-map gate, SetProgress(0x1D6) on 0x1052 | H |
| 0x80181A70 | func_sc03_107_80181A70 | RoamObjPlace | PlaceObject(D_80198C08), state 3 | M |
| 0x80181AB8 | func_sc03_107_80181AB8 | FollowKind17E | stays within 0x60 of kind 0x17E | M |
| 0x8018134C | func_sc03_107_8018134C | ProbeBehindWall | TraceMap behind the facing, pushes out on hit | M |

### SC03_108
* **Place:** unknown; no progress value set or tested (H). It shares almost all of its code with sc02_039 (F059) and
  its hopping enemy with sc03_110 / sc03_112 / sc05_001 (F096) (H), so it is likely a room of the same kind as
  sc02_039 (L).
* **Size:** 75 functions (own 0, lone-shared 12, family 49: F096 x26, F059 x18, F033 x5; 3 actor dispatchers, 4 stubs;
  P01, P02, P03).
* **Actors:**
  * A1-A3 (0x8017DAD0, 0x8017E240, 0x8017E984) and set-ups 0x8017D96C / 0x8017DF10 / 0x8017E508 / 0x8017EB38: F059.
    Observation (H from the code here): kind 0x199 is a multi-part model (variant +0x70 & 3: parts 0 / 1 spawn
    SpawnActorArg(0x199, 2 / 3) children that share the parent's model, func_8001C1E4); a timed emitter 0x8017E128
    walks a (flag, delay) table D_801847C8 and SpawnActorArg(0x1A9, flags) while its +0x100 lies within +-0xFF and +0xE0
    < 0x150; kind 0x1A9 moves (MoveCollidePassableAt), hurts Musashi through ActorSegmentHitsPlayer and plays sound
    0x6DA with a volume / pan computed from its screen position (0x8017E27C) (H). L: things that roll or fly out of
    an opening on a timer.
  * Hopping enemy (main 0x8017F0B0, set-up 0x8017F140): F096 (a squash-and-stretch hopper that lunges at Musashi;
    variant bit 2 hides it until Musashi is near) (M).
* **Puzzles / mechanisms:** none in own code.
* **Exits:** P01 only (0x8017CE80 with SoundCmd1(1), 0x8017CF58 without) (H); destinations unknown (data).
* **Sound:** 0x6DA (F059 emitter, positional), 0x832 / 0xA74 (F096) (H).
* **Unknown / notes:** the camera (F059, 0x8017D01C / 0x8017D110) follows Musashi's facing, clamps its angle to
  0x480-0xB80 and the focus to y <= 0, z <= -0x80, and toggles between two distances (D_80184768) when a shoulder-type
  button (GetObjPadPressed & 3) is pressed (H; which buttons M).

#### Names: SC03_108
No own functions (all are P01-P03, F033, F059, F096 or lone shapes named where they first occur).

### SC03_109
* **Place:** unknown; a small room with a spinning platform / fan, two talkers and an effect actor (M). No progress
  value set or tested (H). It shares its spinning-platform code with sc05_004 (F097) (H).
* **Size:** 56 functions (own 2, lone-shared 14, family 23: F097 x11, F031 x6, F035 x3, F036 x3; 4 actor dispatchers,
  6 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017C0E4): F036 effect actor (SpawnEffect / FreeEffect) (H).
  * A2 (0x8017D8A4): F097, a spinning platform with four arm parts (kind 0x191, variants 0-3) that carries Musashi and
    turns him with it; variant != 0 waits for flag 0xBA before it starts; while spinning it lifts Musashi when he is
    close above it (see F097) (M). Own arm set-up 0x8017DB84: AllocActorModel; if the 0x100 bit of the variant is
    clear the arm faces parent facing + arm index * 0x400 (a quarter turn each) and collides (+0x58 = D_80181E74,
    +0x5C 0x4C00); with the bit set it uses D_80181E84 / 0x4800 (H).
  * A3 (0x8017DCE4): a talking NPC (S20 set-up, S11 RunScript(D_80181F10[variant]), S25 event wait); talk allowed
    when Musashi is within distance 64 (0x8017DE18, S18) (H).
  * A4 (0x8017DE74): F031 talker / scripted actor (SetupActor by variant & 0xF, SpawnActorArg(0x1E3, 1), talk marker
    with a facing test, sounds 0x5BF / 0x888) (H).
* **Puzzles / mechanisms:** the spinning platform; flag 0xBA starts the waiting one (H). Who sets 0xBA is not in this
  stage's code (unknown).
* **Exits:** P01 only (0x8017D144 with SoundCmd1(1), 0x8017D21C without) (H); destinations unknown (data).
* **Sound:** 0x720 (platform starts), 0x721 then sound command 4 with 0x720 (spin cycle) (H).
* **Unknown / notes:** camera set-up 0x8017D2E0 (F097: projection 0x190, distance 0x4B0, angle 0x155) and an own camera
  mode 0x8017D3C0 that clamps the focus x to -0x2E0..0x2C0 when focus y < -0x680, else -0x240..0x240 (H): a tall
  room with a wider upper part (M).

#### Names: SC03_109
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D3C0 | func_sc03_109_8017D3C0 | CameraClampByHeight | focus x clamp chosen by focus y | H |
| 0x8017D8A4 | func_sc03_109_8017D8A4 | SpinPlatformMain | ACTOR-MAIN of A2 (F097 states) | M |
| 0x8017DB84 | func_sc03_109_8017DB84 | SpinArmInit | arm model, facing parent + i * 0x400 | H |
| 0x8017DCE4 | func_sc03_109_8017DCE4 | TalkerMain | ACTOR-MAIN of A3 | M |
| 0x8017DE74 | func_sc03_109_8017DE74 | Talker2Main | ACTOR-MAIN of A4 (F031) | M |

## Chapter: archive SC04

Progress about 640-780.

### SC04_000
* **Place:** unknown field map with talkable characters, chests and a respawning enemy (M). Story hub of the
  0x2F8-0x30C stretch: sets progress 0x2F8 (760) at the end of an arrival cutscene, 0x302 (770) after an effect
  sequence, 0x30C (780) after handing over three items (H). The entry step sets flag 0xC7 and calls
  func_800291F0(4, 0xC7), sound command 6 (H).
* **Size:** 176 functions (own ~45; shared: F013, F023, F024, F030, F031, F035, F065, F077, F103, F104, F105, S-shapes;
  P01-P03).
* **Actors:**
  * A1: F024 (pickup of kind 0x128 that raises max BP by 5 and refills BP, sound 0xBFE, guarded by GetVar(+0x3A)).
    A2-A4: F013 (effect actors that hide / show Musashi). A9-A10: F023 (flag-indexed treasure giver). A12: F030
    (sprite effect, sound 0xAA0). A13: F031 (talk NPC, child kind 0x1E3). A11: F103 (respawning spinning enemy, see
    families). 0x801822F0: F104/F105 (warp flash / sparkle swarm, see families).
  * Flag-0xDA object 0x8017F224-0x8017F3F4: set-up frees itself once flag 0xDA is set; talk marker opens when the
    ground distance to Musashi is < 0x2401 (H); talk runs script D_80187040; when its event ends with +0x34 set it sets
    flag 0xDA and frees itself (H); while +0x10A is set it climbs 2 units a frame shaking and stops sound 0xB1D (via
    SoundRequest(4, 0xB1D)) after 0xE1 units (H; what it is: unknown).
  * A5 (0x8017F468) + A6 (0x8017F714): timed random spawner of F065 props that drift and fade (M; ambient effect, L).
  * Cutscene walker 0x8017F98C (own, no dispatcher of its own): turns to a point, walks, waits, turns to Musashi, walks
    off past z < -0x398, SoundCmd1(1), func_8002AC00(0x17), func_8001AAA0(0x55); when its script ends:
    EndEvent, **SetProgress(0x2F8)**, BlendCameraThen(camera set-up 0x8017ECC8) (H).
  * Barrier actor 0x801803BC: its dispatcher clamps Musashi's z (D_80126B66) to <= 0x4FD (H: an invisible wall, M);
    set-up 0x80180418 frees it at progress >= 0x2F8, otherwise after 15 frames starts event D_80199618 (H): the
    arrival cutscene (M).
  * A8 (0x8017FCC8) the item-taker NPC: set-up 0x8017FEBC (freed at progress >= 0x30C; a talk marker 0x801806B8 that
    opens when Musashi is within 0x50 in z and 0x100 in x; child kind 0x246; variant +0x70 != 0 uses another model; at
    >= 0x302 two MoveImage calls swap textures) (H). Talk 0x80180738 runs script D_80199830 before 0x302 and
    D_80199868 after (H). 0x80180604: hit by kind 0x24 before 0x302 starts event D_8019979C (H).
    0x8017FD04 (event helper): spawns 6 SpawnKind205 effects per frame for 0x1F frames, then the two MoveImage swaps
    and **SetProgress(0x302)** (H). 0x80180020: spawns three kind-0x6D props one at a time with red / green / blue
    colour sets (M), raises them, plays sound 0xC1F and stops it; on event end with +0x34 set: **SetProgress(0x30C)**,
    frees itself and its children, removes inventory items 0x60, 0x61, 0x62 (func_800D0F4C, H).
    0x8018066C: true when all three items 0x60-0x62 are held (func_800D0F8C searches vars 0x2F-0x3A, H: ovl36);
    0x8017F204: item 0x60 held. 0x8018050C-0x801805B0: a prop that scales in by rsin, then out and frees (H).
* **Events / scripted scenes:** arrival cutscene (auto, progress < 0x2F8) -> 0x2F8; effect sequence -> 0x302 (H);
  item hand-over (three items 0x60-0x62) -> 0x30C (H). Player-action handlers 0x8017EB98 (hide Musashi, EndScene),
  0x8017EBE8 (NextState on every kind-0x3AF actor), 0x8017EC64 (wait until no kind 0x3AF remains) (H).
  0x8017F450 returns 0x55 at progress >= 0x2F8, else 0x54 (H; use unknown).
* **Puzzles / mechanisms:** the three-item check (M).
* **Exits:** no RequestMapChange in own code; P01 exit steps only (H).
* **Sound:** 0xC1F (props rising), 0xB1D stopped, 0x662 / 0x98A (F103), sound command 6 on entry (H).
* **Unknown / notes:** camera 0x8017EE5C toggles between two preset values with pad bits 0-1 and clamps the focus
  to a box (H). progress.txt's set(0x5A) here comes from F023 (0x80180A68: SetProgress(0x5A) and flag 0xEA when the
  treasure's flag id is 0x54), shared code not specific to this stage (H). A7 (0x8017FC8C) has no handlers here.

#### Names: SC04_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E7B4 | func_sc04_000_8017E7B4 | RoomEntryStart | P01 entry step + SetFlag(0xC7), sound cmd 6 | M |
| 0x8017EBE8 | func_sc04_000_8017EBE8 | AdvanceWarpActors | NextState on every kind 0x3AF | M |
| 0x8017EC64 | func_sc04_000_8017EC64 | WaitWarpActorsGone | NextPlayerActionHandler when no kind 0x3AF | M |
| 0x8017ECC8 | func_sc04_000_8017ECC8 | RoomCameraInit | camera targets + SetCameraUpdate | H |
| 0x8017ED64 | func_sc04_000_8017ED64 | RoomCameraInitNear | same with distance 0x12C | H |
| 0x8017EE5C | func_sc04_000_8017EE5C | RoomCameraToggle | pad toggles preset, clamps focus | M |
| 0x8017F204 | func_sc04_000_8017F204 | HasItem60 | func_800D0F8C(0x60) | M |
| 0x8017F224 | func_sc04_000_8017F224 | FlagDaObjInit | SetupActor, flag 0xDA, talk marker | M |
| 0x8017F324 | func_sc04_000_8017F324 | FlagDaObjWait | sets flag 0xDA on event end, rises | M |
| 0x8017F3F4 | func_sc04_000_8017F3F4 | FlagDaObjTalkCheck | ground distance < 0x2401 | M |
| 0x8017F450 | func_sc04_000_8017F450 | PickByProgress2F8 | 0x55 / 0x54 by progress | H |
| 0x8017F98C | func_sc04_000_8017F98C | ArrivalWalker | walk script, SetProgress(0x2F8) | M |
| 0x8017FD04 | func_sc04_000_8017FD04 | EventSmokeAndSwap | 6 x SpawnKind205, MoveImage, SetProgress(0x302) | M |
| 0x8017FEBC | func_sc04_000_8017FEBC | ItemTakerInit | set-up, progress 0x30C / 0x302 | M |
| 0x80180020 | func_sc04_000_80180020 | ItemTakerReceive | three props, SetProgress(0x30C), takes items | M |
| 0x801803BC | func_sc04_000_801803BC | BarrierMain | clamps player z, dispatcher | M |
| 0x80180418 | func_sc04_000_80180418 | BarrierInit | freed at >= 0x2F8 | M |
| 0x801804B4 | func_sc04_000_801804B4 | BarrierStartEvent | StartEvent after 15 frames | H |
| 0x80180548 | func_sc04_000_80180548 | PropScaleIn | rsin scale up | H |
| 0x801805B0 | func_sc04_000_801805B0 | PropScaleOut | rsin scale down, FreeProp | H |
| 0x80180604 | func_sc04_000_80180604 | ItemTakerOnHit | hit kind 0x24 -> event | M |
| 0x8018066C | func_sc04_000_8018066C | HasThreeItems | items 0x60-0x62 | M |
| 0x801806B8 | func_sc04_000_801806B8 | ItemTakerTalkCheck | box test on player | M |
| 0x80180738 | func_sc04_000_80180738 | ItemTakerTalk | RunScript by progress 0x302 | H |
| 0x80182408 | func_sc04_000_80182408 | WarpFlashWaitSound | TickTimer, table sound | M |
6 more own functions not proposed.

### SC04_002
* **Place:** unknown field map with two entrances (M) and a gate opened by an event (flag 0xDB); no progress
  values (H). Entry steps set flag 0xC8 (one entrance) or 0xC9 (the other), func_800291F0(4, flag), sound command 6
  and install spawn lists D_8018C88C / D_8018C9CC (H).
* **Size:** 266 functions (own ~12; shared: F008, F011, F013, F023, F024, F030, F035, F037, F041, F060, F061, F062,
  F063, F065, F066, F106, F107, S-shapes; P01-P03).
* **Actors:**
  * A1: F024 (max-BP-up pickup). A2-A4: F013. A5-A6: F062. A7-A8: F060 / F065 spawner and drifting props. A9-A10:
    F041. 0x80181368-0x80181B0C: F061 (sounds 0xB6B, 0xA9C, 0x7E4). A12-A14: F011 / F063 / F008 / F037. A15-A16:
    F060 (kind 0x1EB children). A17: F030.
  * A11 (0x80182E64): F106, the large kind-0x1FC enemy (scaled 1.5) that shoots kind-0x20 projectiles in bursts and,
    in the +0x70 variant, lifts and throws F107 blocks (kind 0x239). Two own state handlers in its block:
    0x80182FBC (wait on a timer, then turn: F106 helpers 0x80182618 / 0x80181FE0) and 0x80183008 (two-step: when its
    animation id +0x94 is 0xE and +0x72 bit 0x400 is clear wait 8 frames, else turn toward a heading from 0x80182808)
    (H); both run the contact check 0x80182BA4.
  * Gate 0x80180090 / 0x80180190 (own): freed when flag 0xDB is set; talk marker (S3 0x80180258) opens an event
    (script D_8018C4F0 via S12 0x80180158); when the event ends with +0x34 set it sets flag 0xDB, stops sound 0xB1D
    and frees itself; while +0x10A is set it rises 2 units a frame, shaking, up to 0x120 units (H). Same pattern as
    SC04_000's flag-0xDA object (M: a gate that rises). 0x80180070: inventory item 0x61 held (func_800D0F8C, H),
    probably the gate's key test used by the script (L).
  * Barrier dispatcher 0x8017FFF0 (own): clamps Musashi's x to >= -0x580 and runs table D_8018C560 (H).
* **Events / scripted scenes:** the gate event only (H).
* **Puzzles / mechanisms:** gate needing item 0x61 (L for the link between the two).
* **Exits:** none in own code; P01 exit steps (H).
* **Sound:** 0xB1D stopped (gate), family sounds; sound command 6 on entry (H).
* **Unknown / notes:** two camera set-ups 0x8017FB28 / 0x8017FBC4 (distance 0x4B0, angle 0x155 / 0x1C7); 0x8017FD38
  toggles a preset with pad bits 0-1 and tilts the camera angle with the focus y (H). 0x801802B4 returns 0x55 (H),
  the same constant SC04_000 0x8017F450 returns at progress >= 0x2F8.

#### Names: SC04_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F7C8 | func_sc04_002_8017F7C8 | RoomEntryStartA | SetFlag(0xC8), spawn lists | M |
| 0x8017F838 | func_sc04_002_8017F838 | RoomEntryStartB | SetFlag(0xC9), spawn lists | M |
| 0x8017FB28 | func_sc04_002_8017FB28 | RoomCameraInit | camera targets + SetCameraUpdate | H |
| 0x8017FBC4 | func_sc04_002_8017FBC4 | RoomCameraInitAlt | same, angle 0x1C7 | H |
| 0x8017FD38 | func_sc04_002_8017FD38 | RoomCameraToggle | pad toggle, angle from focus y | M |
| 0x8017FFF0 | func_sc04_002_8017FFF0 | BarrierMain | clamps player x, dispatcher | M |
| 0x80180070 | func_sc04_002_80180070 | HasItem61 | func_800D0F8C(0x61) | M |
| 0x80180090 | func_sc04_002_80180090 | GateInit | flag 0xDB, talk marker | M |
| 0x80180190 | func_sc04_002_80180190 | GateWait | sets flag 0xDB, rises | M |
| 0x80182FBC | func_sc04_002_80182FBC | BlockThrowerWaitTurn | timer then turn (F106 helpers) | M |
| 0x80183008 | func_sc04_002_80183008 | BlockThrowerTurn | two-step turn | M |
1 more own function (0x801802B4) not proposed.

### SC04_003
* **Place:** unknown field map with two entrances (entry steps set flag 0xCA or 0xCB, func_800291F0(4, flag),
  sound command 6; H) and a fight that is rewarded when the enemies are gone (F108, M). No progress values of its
  own (progress.txt's set(0x5A) is F023's shared code, H).
* **Size:** 133 functions (own 3; shared: F011, F013, F023, F035, F065, F106, F107, F108, S-shapes; P01-P02; the map
  renderer at 0x8017BEBC is the S26 variant, not P03).
* **Actors:**
  * A1 (0x8017D578): talk NPC (S20 set-up 0x8017D5B4, talk marker F108 0x8017D698: distance^2 < 0x1001 and Musashi
    idle; talk script D_80185CA4 via S12) (H).
  * A2-A3: F065 spawner + drifting props. A3-A4 (0x8017DC20-0x8017E39C): F108, the enemy-clear reward light: once no
    actor of kinds 0x1FC / 0x1DC / 0x210 / 0x219 remains (its variant 0) it sets its flag, starts an event, grows a
    sprite with sounds 0x7F5 / 0x7F6 and spawns kind 0x8E (see families). Own helper 0x8017DDDC is its trigger:
    SetFlag(D_80190C90[i], 1), copies the event id D_80190CCC[i] into a small script and starts it (H).
  * 0x8017F150-0x80180A78 (A5 dispatcher 0x80180394): F106 (kind-0x1FC block-throwing enemy) with three S2 copies of
    its handlers; 0x80180B10-0x80181454: F107 (thrown kind-0x239 blocks). A6-A7: F011. A8-A9: F023 (treasure).
* **Events / scripted scenes:** the reward event of F108 (H).
* **Puzzles / mechanisms:** clear-the-room reward (F108, M).
* **Exits:** none in own code (H).
* **Sound:** family sounds only (0x7F5, 0x7F6, 0xB6B, 0x83A, 0x83B, 0xB3F, 0xBCB) (H).
* **Unknown / notes:** which F108 variant this room uses is data (+0xDC record) (H).

#### Names: SC04_003
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD9C | func_sc04_003_8017CD9C | RoomEntryStartA | SetFlag(0xCA), sound cmd 6 | M |
| 0x8017CE0C | func_sc04_003_8017CE0C | RoomEntryStartB | SetFlag(0xCB), sound cmd 6 | M |
| 0x8017DDDC | func_sc04_003_8017DDDC | RewardLightTrigger | SetFlag(table), StartEvent | M |

## Chapter: archive SC05

Progress about 920-1170.

## G7 entries (sc05_000 - sc05_019)

### SC05_000
* **Place:** unknown; a small outdoor-looking room with a hazard swarm and one talker (L). The stage neither sets nor
  tests a progress value in a progress line, but its prop actor A2 picks its data by progress bands >= 0xC8 (200),
  >= 0x258 (600), >= 0x384 (900) (H), so the room is visited across the story (M).
* **Size:** 52 functions (own 9, lone-shared 16, family 3: F036; 6 actor dispatchers, 7 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017CFC4): an effect actor built on F036 (SpawnEffect / FreeEffect particle helpers) (M).
  * A2 (0x8017D6D0): a model prop; set-up 0x8017D754 (S7, shared with sc02_031, sc03_029, sc03_092, sc03_107,
    sc03_118/119) does AllocActorModel and then remaps its +0xDC value through one of three key/value tables
    (helper 0x8017D70C, S14) chosen by progress >= 0x384 / >= 0x258 / >= 0xC8 (H). L: an NPC or object whose look or
    behaviour changes with the story.
  * A3 (0x8017D828): a static model; set-up 0x8017D864 SetupActor(D_80181E28), func_8001D0E8(model, 0x7FFF, 0x7FFF),
    model +0x20 = D_80198064 (H); nothing else (8017D8CC stub, 8017D8D4 S8).
  * A4 (0x8017D8DC): a swarm spawner. State 0 (0x8017D918): RejectSpawn if flag 0x137 is set; otherwise 0x30 (48)
    SpawnActor(0x3C0) children, each with a random centre x 0x200-0x37F, z -0x1B0..-0x111, y -0x60, a random phase
    (+0xFC) and angular speed 0x20-0x5F (+0xFE) (H). State 1: when g_PlayerX >= 0x181 it starts event script
    D_80181EC0 (the z test `D_80126B66 > -0x80 || < 0x80` is always true, H: a coding slip); state 2 waits
    IsEventDone, EndEvent (H). 0x8017DB10 is the children's per-frame code (M: it uses the fields the spawner sets):
    each circles its centre with radius 0x100>>8 units (rsin/rcos), and when Musashi is inside a small box around it
    (dy -0xF..0x6F, dx +-0x1F) it is freed if PlayerFlag1000 is set, else, after his collision path crosses it once
    (PathHitsModel), it calls HitPlayer(1, 0x201D, 0x400, 0x10) (H). L: a swarm (bees / bats) that knocks Musashi
    about until flag 0x137 is set by the event.
  * A5 (0x8017DC9C): a talking NPC: set-up 0x8017DCD8 (S20: SetupActor, SetScript, SpawnTalkMarker), RunScript
    D_80181EA8 (S12), event wait (S25). A second set-up 0x8017DDBC (own) loads a model with StopMotion and
    SetScript(D_80181F24), scale 0x4000 (H); 0x8017DE70 is a script callback: when its target (+0x64) is within
    distance 64 of Musashi (DistSqToPlayer < 0x1001) it sets the target's state to 2 and resets the script VM (H).
  * A6 (0x8017DECC): a Musashi hit-reaction sequence (effect-state chain on the player object): 0x8017DF38 starts a
    rumble, ApplyQueuedHurt, turns him, sets a motion, an upward fall speed and PlaySe(0x451); 0x8017DFDC moves him
    through the air spawning effect 3 every other frame, StartCameraShake on hard landing; 0x8017E098 (S3, also
    sc03_028, sc07_002) lands him: DamagePlayerHp by +0xF2 (0x8017E1A0), ResetPlayerKind or SetPlayerKind4,
    SpawnEffect(2), DropTimedAbility (H). M: the "thrown in the air" hurt used by the swarm's HitPlayer kind 0x201D (L).
* **Events / scripted scenes:** event D_80181EC0 when Musashi passes x >= 0x181 while the swarm is up (H); NPC talk
  scripts D_80181EA8 / D_80181F24 (H). Which event sets flag 0x137 is in script data (unknown).
* **Exits:** P01 only; two exit-step variants, one with SoundCmd1(1) (0x8017D180, S100) and one without
  (0x8017D258, S65) (H). Destinations unknown (data).
* **Sound:** PlaySe(0x451) on the hurt launch (H); P01 sound commands 0x1C / 0x1D.
* **Unknown / notes:** camera set-up 0x8017D3C0 (projection 0x190, distance 0x320, angle 0xE3) and a camera mode
  0x8017D4A0 that clamps the focus to y >= -0x4E0, x within +-0x2D0 before following (helper 0x8017D538, S75) (H).

#### Names: SC05_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D3C0 | func_sc05_000_8017D3C0 | RoomInitCamera | sets camera projection / distance / angle targets, SetCameraUpdate(0x8017D464), SnapCamera | H |
| 0x8017D4A0 | func_sc05_000_8017D4A0 | CameraClampFocus | clamps g_CameraFocus y >= -0x4E0, x +-0x2D0, then the follow helper | H |
| 0x8017D6D0 | func_sc05_000_8017D6D0 | StoryPropMain | ACTOR-MAIN of A2 | M |
| 0x8017D754 | func_sc05_000_8017D754 | StoryPropInit | AllocActorModel, progress-band table remap of +0xDC | H |
| 0x8017D70C | func_sc05_000_8017D70C | LookupPairTable | returns t[i+1] where t[i] == a->+0xDC, else the value itself | H |
| 0x8017D828 | func_sc05_000_8017D828 | StaticModelMain | ACTOR-MAIN of A3 | M |
| 0x8017D864 | func_sc05_000_8017D864 | StaticModelInit | SetupActor + fixed model data | M |
| 0x8017D8DC | func_sc05_000_8017D8DC | SwarmMain | ACTOR-MAIN of A4 | M |
| 0x8017D918 | func_sc05_000_8017D918 | SwarmSpawnAndEvent | flag 0x137 gate, 48 x SpawnActor(0x3C0), event at x >= 0x181 | H |
| 0x8017DB10 | func_sc05_000_8017DB10 | SwarmBugCircle | circles a centre, HitPlayer(1, 0x201D, ...) on contact | M |
| 0x8017DC9C | func_sc05_000_8017DC9C | TalkerMain | ACTOR-MAIN of A5 | M |
| 0x8017DDBC | func_sc05_000_8017DDBC | ScriptedModelInit | AllocActorModel, StopMotion, SetScript(D_80181F24) | M |
| 0x8017DE70 | func_sc05_000_8017DE70 | ScriptNearPlayerCallback | DistSqToPlayer < 0x1001: target state 2, ResetScriptVM | M |
| 0x8017DECC | func_sc05_000_8017DECC | ThrownHurtMain | ACTOR-MAIN of A6 | M |
| 0x8017DF38 | func_sc05_000_8017DF38 | ThrownHurtStart | rumble, ApplyQueuedHurt, launch, PlaySe(0x451) | H |
| 0x8017DFDC | func_sc05_000_8017DFDC | ThrownHurtFly | air move, trail effect, camera shake on landing | H |
| 0x8017E1E8 | func_sc05_000_8017E1E8 | SpawnThrownTrail | SpawnEffect(3, ...) below the player | M |

### SC05_001
* **Place:** unknown; a field / dungeon room with counterweight lifts, a shifting block structure and three enemy
  kinds (M). The "set(0x5A)" in progress.txt is F023's shared code (SetProgress(0x5A) and flag 0xEA only when that
  actor's flag is 0x54, H), not a stage-specific set. It also sets flag 0x137 (H), the flag that removes the
  SC05_000 swarm (H there), so this room is visited before the swarm room is cleared (M).
* **Size:** 204 functions (own 34, lone-shared 22, family 114: F013 F023 F024 F030 F033 F035 F044 F094 F096 F113;
  18 actor dispatchers, 9 stubs; P01, P02, P03).
* **Actors:**
  * A1-A2: F013; A3-A4: F024 (GetVar 0x3A/0x3B checks, event D_80189570, map-id 0x3028 test, H); A12-A13: F113
    (Musashi's knock-down hurt + a sprite effect, see G7 families); A14: F044 + F094 + F096 enemy code (sounds
    0xAA1, 0x51F/0x520, 0x521, 0x832, 0xA74, H); A16: F030 (sprite emitter, sound 0xAA0); A17-A18: F023 + F035.
  * Shifting structure (A11 at 0x801803F8, set-up 0x80180434, M on the grouping): a model; unless flag
    D_80189738[a->+0x70] is set it spawns 9 x SpawnActorArg(0x1D3, i) "blocks", and always 14 x
    SpawnActorArg(0x1D0, i) "debris" (H). Its trigger state 0x8017F268: when Musashi is within an x window of 0xFF
    units in front of it and GetPlayerByte1C7() == 2 (L: a particular player mode / technique), StartEvent
    D_80189728, SoundRequest(0xB10), a 0x30-frame timer with StartCameraShake every 16 frames, then EndEvent and
    SetFlag(D_80189738[a->+0x70], 1) (H).
    * blocks (set-up 0x8017F3E4 in block A5, states 0x80180520 / 0x8017F744, M): placed at an offset table and,
      until the trigger, puff random smoke props (SpawnPropFrom 0x49, 0x8017F964); on the trigger each waits its
      own delay (0x8017F6C4) and slides in z to its target spinning, with dust props (0x22) every 8 frames;
      SoundRequest(0xB0F) when block 0 arrives (H). With the flag already set they start at the end positions.
    * debris (set-up 0x80180600: MimeBlend of the parent's model; 0x80180710 / 0x8017FA18 / 0x80180748): on the
      trigger, pieces with a non-zero launch vector fly off with gravity and spin, freed below y -0xFF (H).
    * L: a rock face that rearranges into a passage or steps when Musashi uses the right ability.
  * Counterweight lift (A8 at 0x8017FFF8, set-up 0x80180034; A10 at 0x80180260, set-up 0x80180874; A7 props, M):
    A8 builds a frame model with wheel models, a rope prop (SpawnPropFrom 0x45) and spawns 0x1B3 (counterweight)
    and 0x1B5 (platform) (H). The platform (0x80180874) spawns 0x1B4 with its own rope prop; 0x8018098C starts the
    ride when D_80126CD4 == itself (M: Musashi stands on it): StartEvent D_80189B10, SetPlayerActionFlag02/08,
    SoundRequest(0x8FE); 0x801809B8 raises it 8 units every 2 frames for 0x14 steps (0xA0 in all) carrying Musashi
    (D_80126B62 += 8), lowers the counterweight and turns the wheels; at the end EndEvent, SoundRequest(0x8F9),
    SetFlag(D_80189ACC[a->+0x70], 1) (H). With the flag set it starts raised (0x80180364) (H).
    The rope props (A7 0x8017FBB0 / 0x8017FE0C) draw 9 or 6 segments of 32 units and grow / shrink them as the
    parent moves (H); 0x8017FB04 is a prop that rises and is freed after 0xC0 units (H).
  * Flag setter (0x80180AB4): SetFlag(0x137, 1) then RejectSpawn (H): placed in the room's spawn list (data).
  * Glow sprite (A14 set-up 0x801814E4, update 0x80181574): a sprite at a fixed projected point whose colour
    flickers between two greens every frame (H).
  * Emitter (A15 at 0x80184920): when Musashi is within ground distance 0x400 it spawns SpawnActorArg(0x183, 1) at a
    random point 0x30 from its home at two random periods (H). L: drips / bubbles.
  * 0x80182F68 (own, inside the F096 block): a knock-back state (StopWithGravity, back speed 0x28000, state 2) (H).
* **Events / scripted scenes:** structure trigger D_80189728 and lift ride D_80189B10 (above); F024's D_80189570.
* **Puzzles / mechanisms:** the shifting structure (player mode == 2 near it) and up to two one-time lifts (flags
  D_80189ACC[0..1], data) (H).
* **Exits:** P01 only (exit steps with and without SoundCmd1(1)); destinations unknown (data).
* **Sound:** 0xB10 / 0xB0F structure, 0x8FE / 0x8F9 lift (H).
* **Unknown / notes:** camera mode 0x8017EAEC: the pad buttons (GetObjPadPressed & 3) toggle between two camera
  settings, and the yaw comes from a zone table D_80189680 (0x8017EE08: zone tests 0/1/2, then a rule: face a point,
  face away, or fixed 0x800 / 0x400 / 0xC00), smoothed (H). 0x8017F1E4 is a distance test (> 0x143FFF squared) with
  no caller in the stage (H).

#### Names: SC05_001
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E9F8 | func_sc05_001_8017E9F8 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017EAB0), SnapCamera | H |
| 0x8017EAEC | func_sc05_001_8017EAEC | CameraZoneFollow | pad toggles setting, yaw from zone table, smoothed | H |
| 0x8017EE08 | func_sc05_001_8017EE08 | CameraZoneYaw | walks zone records, returns a yaw rule's angle | H |
| 0x8017F1E4 | func_sc05_001_8017F1E4 | IsPlayerFar | squared xz distance to the focus > 0x143FFF | M |
| 0x8017F268 | func_sc05_001_8017F268 | ShiftWallTrigger | x window + GetPlayerByte1C7()==2: event, shakes, SetFlag | H |
| 0x8017F3A8 | func_sc05_001_8017F3A8 | ShiftBlockMain | ACTOR-MAIN of A5 | M |
| 0x8017F3E4 | func_sc05_001_8017F3E4 | ShiftBlockInit | start / end position by flag | H |
| 0x8017F5A4 | func_sc05_001_8017F5A4 | ShiftBlockAim | heading to target, local velocity, spin rate | H |
| 0x8017F6C4 | func_sc05_001_8017F6C4 | ShiftBlockStart | SetState(2) with a per-block delay | H |
| 0x8017F710 | func_sc05_001_8017F710 | ShiftBlockSetDone | SetState(2), sub-state 3 | H |
| 0x8017F744 | func_sc05_001_8017F744 | ShiftBlockSlide | delay, slide to target, dust, 0xB0F | H |
| 0x8017F88C | func_sc05_001_8017F88C | SpawnBlockDust | SpawnPropFrom(o, 0x22) | H |
| 0x8017F928 | func_sc05_001_8017F928 | ShiftDebrisMain | ACTOR-MAIN of A6 | M |
| 0x8017F964 | func_sc05_001_8017F964 | SpawnBlockSmoke | SpawnPropFrom(o, 0x49) jittered | H |
| 0x8017FA18 | func_sc05_001_8017FA18 | ShiftDebrisLaunch | gravity + launch vector + spin | H |
| 0x8017FAC8 | func_sc05_001_8017FAC8 | RopePropMain | ACTOR-MAIN of A7 | M |
| 0x8017FB04 | func_sc05_001_8017FB04 | RisingPropUpdate | MoveProp, freed after 0xC0 rise | H |
| 0x8017FBB0 | func_sc05_001_8017FBB0 | RopeInit | 9 / 6 segment rope, flag-dependent length | H |
| 0x8017FE0C | func_sc05_001_8017FE0C | RopeUpdate | resizes segments to the parent's height | H |
| 0x8017FFF8 | func_sc05_001_8017FFF8 | LiftFrameMain | ACTOR-MAIN of A8 | M |
| 0x80180034 | func_sc05_001_80180034 | LiftFrameInit | wheel models, rope, SpawnActorArg 0x1B3 / 0x1B5 | H |
| 0x80180260 | func_sc05_001_80180260 | LiftMain | ACTOR-MAIN of A10 | M |
| 0x8018029C | func_sc05_001_8018029C | LiftStartRide | StartEvent D_80189B10, 0x8FE | H |
| 0x80180304 | func_sc05_001_80180304 | LiftEndRide | EndEvent, 0x8F9, SetFlag | H |
| 0x80180364 | func_sc05_001_80180364 | LiftSetRaised | +0xA0 at once | H |
| 0x801803F8 | func_sc05_001_801803F8 | ShiftWallMain | ACTOR-MAIN of A11 | M |
| 0x80180434 | func_sc05_001_80180434 | ShiftWallInit | spawns 9 x 0x1D3, 14 x 0x1D0 | H |
| 0x80180520 | func_sc05_001_80180520 | ShiftBlockWait | smoke until parent triggered | H |
| 0x80180600 | func_sc05_001_80180600 | ShiftDebrisInit | MimeBlend piece of the parent's model | H |
| 0x80180710 | func_sc05_001_80180710 | ShiftDebrisWait | waits parent +0xFE | H |
| 0x80180748 | func_sc05_001_80180748 | ShiftDebrisFall | spins, falls, FreeActor | H |
| 0x801807F8 | func_sc05_001_801807F8 | LiftWeightInit | model + collision data | M |
| 0x80180874 | func_sc05_001_80180874 | LiftInit | SpawnActor(0x1B4), rope, raised if flag | H |
| 0x8018098C | func_sc05_001_8018098C | LiftWaitRider | D_80126CD4 == self | M |
| 0x801809B8 | func_sc05_001_801809B8 | LiftRise | 8 units / 2 frames, carries Musashi | H |
| 0x80180AB4 | func_sc05_001_80180AB4 | SetSwarmGoneFlag | SetFlag(0x137, 1), RejectSpawn | H |
| 0x801814A8 | func_sc05_001_801814A8 | GlowSpriteMain | ACTOR-MAIN of A14 | M |
| 0x801814E4 | func_sc05_001_801814E4 | GlowSpriteInit | AllocActorSprite at a point | H |
| 0x80181574 | func_sc05_001_80181574 | GlowSpriteUpdate | project, flicker colour | H |
| 0x80182F68 | func_sc05_001_80182F68 | StartKnockBack | StopWithGravity, back velocity | M |
| 0x80184920 | func_sc05_001_80184920 | DripEmitterMain | ACTOR-MAIN of A15 | M |
| 0x8018495C | func_sc05_001_8018495C | DripEmitterInit | random phase / period | H |
| 0x801849C4 | func_sc05_001_801849C4 | DripEmitterUpdate | near player: SpawnActorArg(0x183, 1) | H |
| 0x80184AF8 | func_sc05_001_80184AF8 | PickDripPoint | random point radius 0x30 | H |

### SC05_002
* **Place:** unknown; a room with columns of moving platforms and a wandering creature (F057) (M). The "set(0x5A)"
  in progress.txt is F023's shared code (only for its flag 0x54, H), not a stage-specific set. Its moving-column code
  is shared only with sc03_113 (five S2 shapes, H), so the two rooms are built alike (M).
* **Size:** 74 functions (own 2, lone-shared 22, family 28: F009 F023 F035 F057; 6 actor dispatchers, 7 stubs;
  P01, P02, P03).
* **Actors:**
  * A1-A2: F009 (+ S27 set-up); A2 tail: F057 (an enemy that roams, turns and lunges, sound 0x6FF; the S11/S14/S15
    helpers around it play 0x6FE by distance and damage Musashi by segment, H); A5-A6: F023 + F035.
  * Moving column (A3 at 0x8017F30C / A4 at 0x8017F734, S2 = sc03_113): set-up 0x8017F770 makes a sprite with a
    texture that scrolls by a per-column speed (0x8017F200, wraps every 0x30, H) and spawns a row of SpawnActor(0x1A4)
    platforms spaced 0x180 (0x8017F538), then one more every D_8019C7DC[i] frames (H). A column whose +0x70 has bit
    0x8000 is held while flag 0xBA is clear: its platforms are spaced 0x100 and left in state 2 instead of moving (H;
    L: a stopped flow that flag 0xBA starts). Platforms (set-up 0x8017F868: model + collision, update 0x8017F940)
    move up or down by the column's speed, are freed past the column's length and carry Musashi while he stands on
    them (CarryPlayerExact) (H). M: an escalator of blocks (L: rising stones in a waterfall).
  * Column sound (0x8017F348, run by column 0 every frame): finds the nearest kind-0x1A3 actor to Musashi in x,
    and within a combined distance 0x200 plays SoundRequest(0x704, or 0xBAA for the held column) with volume
    0x7F - d/4; out of range it sends sound command 4 once (H). M: a looping positional sound for the columns, and
    0x1A3 is the column's own kind.
* **Events / scripted scenes:** none of its own (F023's talk scripts).
* **Puzzles / mechanisms:** the platform columns and the flag-0xBA hold (above).
* **Exits:** P01 with two S116 entry steps (two entry walks, M) and the two exit variants; destinations unknown.
* **Sound:** 0x704 / 0xBAA column loop, sound command 4 to stop it (H).
* **Unknown / notes:** 0x8017E41C (S4, also sc03_112/113, sc05_003) relocates a sequence block once
  (RelocateSeqBlock D_80196B4C) and then plays it through 0x8017CD9C (S5) with a frame counter stepping 0x14 (H;
  L: an animated texture / model sequence). Camera 0x8017E100 (distance 0x4B0) with a pad-toggled setting
  (0x8017E1DC, S34) (H).

#### Names: SC05_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E100 | func_sc05_002_8017E100 | RoomInitCamera | camera targets, SetCameraUpdate(0x8017E1A0) | H |
| 0x8017F348 | func_sc05_002_8017F348 | UpdateColumnSound | nearest 0x1A3 actor, SoundRequest(0x704 / 0xBAA) by distance | H |
| 0x8017F30C | func_sc05_002_8017F30C | ColumnSoundMain | ACTOR-MAIN of A3 | M |
| 0x8017F734 | func_sc05_002_8017F734 | ColumnMain | ACTOR-MAIN of A4 | M |
| 0x8017F200 | func_sc05_002_8017F200 | ColumnScrollAndSpawn | texture scroll, SpawnActor(0x1A4) on a timer | H |
| 0x8017F538 | func_sc05_002_8017F538 | ColumnSpawnRow | initial row of 0x1A4 platforms, spacing by flag 0xBA | H |
| 0x8017F770 | func_sc05_002_8017F770 | ColumnInit | sprite set-up, held state 2 while flag 0xBA clear | H |
| 0x8017F868 | func_sc05_002_8017F868 | ColumnPlatformInit | model + collision; held like its column | H |
| 0x8017F940 | func_sc05_002_8017F940 | ColumnPlatformMove | moves by column speed, CarryPlayerExact, freed at the end | H |
| 0x8017E41C | func_sc05_002_8017E41C | RoomPlaySeqBlock | RelocateSeqBlock once, then step the sequence | M |

## Chapter: archive SC06

Progress about 1210-1590.

### SC06_000
* **Place:** the opening map of the sc06 block. Its room start 0x80180A50 sets progress 0x4BA (1210) (H), the lowest
  value of the chapter, so this is where the chapter begins (M). A wide room with a liquid-like surface whose level
  (D_sc06_000_801AEAFE) sets the height of floating, rotating platforms that carry Musashi (M); what the surface is
  in the game is unknown (L: water / lava). The F020 code it shares with sc02_011 / sc03_014/015 / sc03_024 /
  sc03_118/119 contains SetProgress(0x85) and SetFlag(0x16..0x1A) after a five-way choice (H, 0x8017DE8C); that is
  family code, and progress 0x85 would be far behind this map, so it is probably not reached here or is data-gated (L).
* **Size:** 314 functions (own 105 + 8 dup + 37 lone-shared; families F020 x52, F022 x15, F013 x15, F015 x8, F029 x7,
  F098 x5, F033 x5, F083 x3, F038 x3, F009 x3; 24 actor kinds; P01, P02).
* **Room start:** 0x80180A50: SetSkipSe(0x42E), ClearStatsWords, sets D_80078EA4 = 0xA00000, clears bit 7 of
  D_80078EC0, func_8002931C(0x1A40000), installs the engine's player-placement hook D_8011DB28 = 0x80180AB8 (H), which
  puts Musashi on top of the platform actor stored in D_sc06_000_801AECB4 (0x80183674: its x/z, y + a per-variant
  height table - 8, H). The engine calls that hook with the player's +0xA0 vector (engine func_8015369C), so a reset /
  re-entry position follows the moving platform (M).
* **Actors:**
  * A1-A10: mostly F020 effects/actors (A1-A5), F009 (A7 start), F013 / F022 / F029 shared code; A6 0x8017DFC0 [S27].
  * A7 (0x8017E218) and helpers 0x8017E35C (202 lines) / 0x8017EF68 (263 lines): two own GTE mesh renderers
    (RotTransPers of triangles/quads into OT, H) used by A11/A12 (0x801823BC, 0x80182464, 0x80182614, 0x8018270C) to
    draw the platforms and two big meshes D_sc06_000_8019FD8C / 80197B60 at the surface level (M).
  * A11 (0x80182348): platform hub. Set-up 0x80182CD8 picks a model by variant +0x70; variants 0-3 rotate (heading =
    variant << 10) and, except variant 2, spawn SpawnActorArg(0x26A, 4, self); variants >= 4 copy the parent's
    heading (H). 0x80182950: y = base + offset +0x100 + surface level - 0x131, UpdateModelZYX, and a distance-scaled
    looping sound 0xB6A (volume 0x7F within 0x40 units of D_sc06_000_8018C60C, fading to 0 by 0x140, H). 0x80182A30
    spawns four 0x26A children, 0x80182B68 spawns 0x26B (H). 0x80182E38 places children on a rotated offset that
    stretches as the parent's +0x100 sinks, and CarryPlayerExact (M: a spoke / arm that carries Musashi).
    0x80182B10 / 0x801829E8: lowering steps ending with sounds 0x929 + cmd 4,0x928 and 0x919 + cmd 4,0x918 (H).
  * A12 (0x80183088): 0x801830C4 spawns kind 0x271 and decrements a grand-parent counter +0x102 (H; M: a piece that
    is knocked off). 0x80183398: two variants bob up and down (+0x100 between 0 and -0x27F / -0x3BF in steps of 4 / 6)
    while D_sc06_000_801AECB0 is set, rotating +-4 per frame (H). 0x80183338 CarryPlayerScaled (H).
  * A13 (0x80183574): 0x801835B0 spawns a chain of 0x268 children from a (kind-arg, offset) list ended by -1; on
    variant 0 the third child becomes the platform Musashi is placed on (D_sc06_000_801AECB4, H).
  * A14 (0x80183638): 0x80183A1C: when Musashi stands on it (+0x74 set and GetPlayerByte1C7()==2) it ticks its
    parent model's +0x1A down by 0x800 per 4 frames; at 0 it bumps the parent's +0x102 counter (H; M: a pressure
    switch / step that sinks under Musashi). 0x80183C9C rides a rotating parent at a table offset and carries Musashi.
  * A15 (0x801836E0): set-ups 0x8018371C (spawns the 0x26A and 0x26B sets), 0x801838FC, 0x80183B20 (two
    RelocateSeqBlock objects + the 0x268 chain), 0x80183BC4, 0x80183DAC (scripted model, sound 0x92B). States
    0x80183790 / 0x8018381C start event scripts D_sc06_000_8018C558 / 8018C5A0 and wait (IsEventDone / EndEvent, H).
  * A16 (0x80183EFC): set-up 0x80183F38: variant 0 = model + sprite (StartSpriteAnim), else a scripted model at
    state 9 (H). 0x801840F8 sways the object and its parent +-3 per frame, calls RefreshDayLighting at timer 0x30,
    waits for func_8001AAA0(0x7B), then a pad/read check (0x8018278C) before 0x80184398: drop (y -0xA0), shadow,
    parent to state 2, sound 0x920 (H). 0x801845CC: free shadow/prop, sound 0x922 (H). M: something that falls when
    triggered.
  * A17 (0x801846BC): 0x801846F8: when its hit-kind +0x5E equals one of 8 values (D_sc06_000_8018CC30) it nudges the
    parent, spawns prop 0x59 on itself, starts event D_sc06_000_8018CB50, sound 0x91F; every call also requests 0x426
    (H). Set-up 0x80184B80 is rejected once flag 0x1A is set and spawns 0x2BB; 0x80184D68 spawns SpawnActorArg(0x2BB,
    1) on a timer (H). L: an object that reacts to a specific attack and is gone after flag 0x1A.
  * A18/A19 (0x80185318 / 0x8018593C): random ambient particles (rand x6 positions, SetTimer, H; M: bubbles/sparks).
  * A20-A24: small sprite / model actors (0x80185BE4 sprite, 0x80185DE0 model); A24 0x80186688 with a 117-line
    GTE sprite draw 0x80187B34 [S2].
* **Events / scripted scenes:** player action script 0x80180D5C (steps 0x80180D98..0x801814DC): camera set-up
  0x801815E8, camera target D_801274E8.y lowered with acceleration to 0x600000 then braked (0x80180DD4 / 0x80180E58),
  a 30-frame wait, then 0x80180F14 despawns kinds 0x2E6, 0x2F6, 0x2F5, 0x310, 0x2F2 if present (H), Musashi hidden /
  shown, a message D_sc06_000_80191F00 opened once effect 0x1A is gone and closed on the answer (0x80181114 /
  0x80181164, H), sounds 0x92A (H). Six camera modes 0x801815E8..0x801819F4 feed P02; 0x80181AB4 is a pad-steered
  camera (GetObjPadPressed + ratan2, H). 0x80182614: the surface level D_801AEAFC drops by 0x12000 per frame with a
  random camera shake every 3-10 frames; 0x8018270C finishes it and SelectCollisionMap(0) (H; M: a drain / sink scene
  that changes the floor).
* **Puzzles / mechanisms:** sinking step A14 counting into the parent (+0x102); A12 decrements the same counter (H);
  what the counter unlocks is in data (unknown).
* **Exits:** 0x80184A28 RequestMapChange(D_sc06_000_8018BFF0) (H); its caller is a table entry (unknown); destination
  unknown (data). P01 exit step 0x80180BF8.
* **Sound:** 0xB6A distance-faded loop (0x80182C10), 0xB39 with a 16x16 texture scroll (0x80181F78: rotates two 16-row
  tables by D_801AE6F0 >> 8 and MoveImage, H; M: animated surface texture), 0x918/0x919/0x928/0x929, 0x920-0x922,
  0x92A, 0x92B, 0x426.
* **Unknown / notes:** the meaning of kinds 0x268/0x26A/0x26B/0x271/0x2BB; the five despawned kinds are probably F020
  actors left from the shared code (L).

#### Names: SC06_000
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180A50 | func_sc06_000_80180A50 | RoomStart | entry->start; SetProgress(0x4BA), installs D_8011DB28 hook | H |
| 0x80180AB8 | func_sc06_000_80180AB8 | PlacePlayerHook | the D_8011DB28 hook, calls 0x80183674 | H |
| 0x80183674 | func_sc06_000_80183674 | GetRidePlatformPos | x/z/y of D_801AECB4 + height table | H |
| 0x80180D5C | func_sc06_000_80180D5C | EventIntroMain | PLAYER-ACTION-MAIN over +0x216 | M |
| 0x80180DD4 | func_sc06_000_80180DD4 | EventIntroCamDrop | lowers D_801274E8.y with acceleration | M |
| 0x80180E58 | func_sc06_000_80180E58 | EventIntroCamBrake | decelerates, sets a 30-frame wait | M |
| 0x80180F14 | func_sc06_000_80180F14 | EventIntroClearActors | despawns kinds 0x2E6/0x2F6/0x2F5/0x310/0x2F2 | H |
| 0x80181114 | func_sc06_000_80181114 | EventIntroOpenMsg | OpenMessage(D_80191F00) when effect 0x1A gone | H |
| 0x801815E8 | func_sc06_000_801815E8 | SetIntroCamera | SetCameraUpdate + SnapCamera | M |
| 0x80181AB4 | func_sc06_000_80181AB4 | CamPadSteer | GetObjPadPressed + ratan2 camera mode | M |
| 0x80181F78 | func_sc06_000_80181F78 | ScrollSurfaceTexture | rotates 16x16 tables, MoveImage, sound 0xB39 | M |
| 0x8017E35C | func_sc06_000_8017E35C | DrawMeshTris | GTE triangle mesh draw | M |
| 0x8017EF68 | func_sc06_000_8017EF68 | DrawMeshQuads | GTE quad/tri mesh draw, 5 callers | M |
| 0x80182348 | func_sc06_000_80182348 | PlatformHubMain | ACTOR-MAIN of A11 | M |
| 0x80182CD8 | func_sc06_000_80182CD8 | PlatformHubInit | AllocActorModel, spawns 0x26A | H |
| 0x80182950 | func_sc06_000_80182950 | PlatformHubFloat | y from surface level, sound 0xB6A | M |
| 0x80182C10 | func_sc06_000_80182C10 | UpdateHumVolume | distance-scaled SoundRequest(0xB6A) | H |
| 0x80182A30 | func_sc06_000_80182A30 | SpawnArms | four SpawnActorArg(0x26A) | H |
| 0x80182B68 | func_sc06_000_80182B68 | SpawnArm26B | SpawnActorArg(0x26B) | H |
| 0x80182E38 | func_sc06_000_80182E38 | ArmFollowHub | rotated offset from parent, CarryPlayerExact | M |
| 0x801825D8 | func_sc06_000_801825D8 | GetSurfaceLevel | returns D_801AEAFE | H |
| 0x80182614 | func_sc06_000_80182614 | SurfaceDrainStep | level drops, camera shakes | M |
| 0x8018270C | func_sc06_000_8018270C | SurfaceDrainDone | final draw, SelectCollisionMap(0) | M |
| 0x80183088 | func_sc06_000_80183088 | BobPlatformMain | ACTOR-MAIN of A12 | M |
| 0x80183398 | func_sc06_000_80183398 | BobPlatformMove | +0x100 oscillation while D_801AECB0 | H |
| 0x801835B0 | func_sc06_000_801835B0 | SpawnPlatformChain | 0x268 list, keeps the ride platform | H |
| 0x80183638 | func_sc06_000_80183638 | SinkStepMain | ACTOR-MAIN of A14 | M |
| 0x80183A1C | func_sc06_000_80183A1C | SinkStepUpdate | sinks while stood on, bumps +0x102 | M |
| 0x801836E0 | func_sc06_000_801836E0 | Actor15Main | ACTOR-MAIN of A15 (several set-ups) | M |
| 0x80183790 | func_sc06_000_80183790 | EventStartA | StartEvent(D_8018C558) | H |
| 0x8018381C | func_sc06_000_8018381C | EventStartB | StartEvent(D_8018C5A0) | H |
| 0x80183EFC | func_sc06_000_80183EFC | DropObjMain | ACTOR-MAIN of A16 | M |
| 0x80183F38 | func_sc06_000_80183F38 | DropObjInit | model + sprite set-up | H |
| 0x801840F8 | func_sc06_000_801840F8 | DropObjSway | sways, waits, then drops | M |
| 0x80184398 | func_sc06_000_80184398 | DropObjFall | shadow, sound 0x920 | M |
| 0x801846BC | func_sc06_000_801846BC | HitTargetMain | ACTOR-MAIN of A17 | M |
| 0x801846F8 | func_sc06_000_801846F8 | HitTargetCheck | hit-kind table, StartEvent(D_8018CB50) | H |
| 0x80184B80 | func_sc06_000_80184B80 | HitTargetInit | rejected when flag 0x1A | H |
| 0x80184A28 | func_sc06_000_80184A28 | RoomExit | RequestMapChange(D_8018BFF0) | H |
| 0x80185318 | func_sc06_000_80185318 | AmbientParticleMain | ACTOR-MAIN of A18, rand | M |

About 40 more own functions (A19-A24 states, small draw helpers) not proposed.

### SC06_006
* **Place:** a non-interactive cutscene map (M): a shot list drives a cast of 27 models, there is no player control,
  a button press skips it and it leaves by itself after the last shot. No progress set or tested (H). Sets flag
  0x143 = 1 and clears flags 0x6F-0x73 when the director spawns (0x801808C0, H). What the scene shows is unknown.
* **Size:** 138 functions (own 88 + 4 dup + 19 lone-shared; F098 x5, F018 x5; 4 actor kinds; P01, P02, P03).
* **Actors:**
  * Director (0x801808C0 set-up; A3 0x8017F594 block): spawns the cast with 0x8017FFA8: 27 x SpawnActorArg(0x34A, i)
    kept in D_sc06_006_801F80AC[], and 25 x 0x389 props in groups (arg 0-4, 0x100-0x106, 0x300-0x302, 0x400-0x409)
    attached to cast members, plus SpawnActor(0x38F) (H).
  * A1 (0x8017DD28): cast member: set-ups 0x8017DB90 / 0x8017EA18 load one of several models by variant +0x70 (H);
    0x8017DD64 animates three parts (M).
  * A2 (0x8017ECE8): particles placed with rand x9 (0x8017ED24), drawn as primitives (0x8017F074 AllocPrim / AddPrim,
    H; M: sparks or dust).
  * A4 (0x80181198): 0x80181658 [S3] GTE sprite drawer.
* **Events / scripted scenes:** shots 0x8017D428 .. 0x8017D9AC (22 tiny steps, each `+2 = next; 0x801800B8(shot)`),
  and 0x80180424 .. 0x80180840 (per-shot updates). 0x801800B8 (the shot starter, H): picks the camera mode
  (0x80180E68 -> SetCameraUpdate), sets D_801F8AEC, UpdateCamera, then runs a command list per cast slot: 0 hide,
  1 show + pose, 2 show + SetScript(arg), 3 store arg at +0xDC. 0x8017D04C switches Musashi's motion between
  D_800D5F14 / D_800D5FD4 (func_80154B7C, H). 0x8017F3E8 runs up to 12 effect slots and a 4-frame camera shake while
  D_801F80A4 (H). 0x8017FA2C draws a shaded quad whose colour turns green-ish when flag 0x81 is set (H).
* **Exits:** RequestMapChange(D_sc06_006_801857BC) either from 0x80180840 at frame 0x168 (360) of the last shot, or
  from 0x8017DA8C when func_800CF8B4() allows and the pad shows 0x800 or 0x40 (skip, H). Destination unknown (data).
  EnableMessageVoice follows both (H).
* **Sound:** 0x406 (volume falling from 0x7F to 0x1F after frame 0x171) and 0x407 on a beat (0x8017D730, H); a
  per-shot table of sound ids (0x8017FECC, D_801863A4 + i*20); 0xB49 (0x80180734).
* **Unknown / notes:** the meaning of flags 0x6F-0x73 (cleared here) and 0x143.

#### Names: SC06_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801808C0 | func_sc06_006_801808C0 | DirectorInit | sets flags, spawns cast | H |
| 0x8017FFA8 | func_sc06_006_8017FFA8 | SpawnCast | 27 x 0x34A, 25 x 0x389, 0x38F | H |
| 0x801800B8 | func_sc06_006_801800B8 | StartShot | camera mode + per-cast commands | H |
| 0x8017DA8C | func_sc06_006_8017DA8C | DirectorUpdate | shot table, counters, pad skip -> RequestMapChange | H |
| 0x80180840 | func_sc06_006_80180840 | ShotLastUpdate | RequestMapChange at frame 0x168 | H |
| 0x8017D04C | func_sc06_006_8017D04C | SetPlayerCutMotion | func_80154B7C with two motion sets | M |
| 0x8017D730 | func_sc06_006_8017D730 | ShotRumbleSounds | 0x406/0x407 on a beat | M |
| 0x8017FECC | func_sc06_006_8017FECC | PlayShotSound | SoundRequest(table[i]) | H |
| 0x8017F3E8 | func_sc06_006_8017F3E8 | UpdateShotEffects | 12 effect slots, camera shake | H |
| 0x8017FA2C | func_sc06_006_8017FA2C | DrawGlowQuad | shaded quad, flag 0x81 tint | M |
| 0x8017DD28 | func_sc06_006_8017DD28 | CastMain | ACTOR-MAIN of A1 | M |
| 0x8017DB90 | func_sc06_006_8017DB90 | CastInit | model by variant | M |
| 0x8017ECE8 | func_sc06_006_8017ECE8 | SparkMain | ACTOR-MAIN of A2 | M |
| 0x8017F074 | func_sc06_006_8017F074 | DrawSpark | AllocPrim / AddPrim | M |
| 0x80180E68 | func_sc06_006_80180E68 | SetShotCamera | SetCameraUpdate | H |
| 0x8017D428 | func_sc06_006_8017D428 | Shot0 | first shot, StartShot(D_8018597C) | M |

The other 21 shot steps (0x8017D460..0x8017D9AC, 0x80180424..0x801807EC) follow the same pattern: `ShotN` /
`ShotNUpdate`; not listed one by one.
