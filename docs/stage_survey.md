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
(The family descriptions follow in later commits of r275.)
