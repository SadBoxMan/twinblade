# Stage survey: what each stage image's own code does (r275, research only)

A stage-by-stage map of the **own code** of every stage image (`src/stg/scNN_NNN.c`, plus the village
`src/stage/sc03_001.c` as the reference), read from the matched C of the decomp-only snapshot (main = a75e323d,
4 Nov 2026). Phase 2 (understanding) work: nothing here is applied. The naming tables are proposals for a later local
card, which applies them to `stg/symbol_addrs_<stage>.txt` and checks that every stage still matches.

Files: `docs/stage_survey.md`, `docs/stage_survey_2.md`.

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
### F001: stage-local multi-page menu (5 stages)
* **Stages:** sc01_004 sc01_005 sc01_006 sc01_008 sc01_009
* **What it is:** a menu run as a stage frame hook (H): open (0x8017D308: g_StageMode = 3, frame hook 0x8017D3AC which
  runs step table D_8018C2BC[D_80115112] plus UpdateHudPanel), close (0x8017D35C: back to StageFrame). Pages are kinds
  1-10 (D_80115138); input 0x8017DC38 (pad 0x40 confirm, 0x10 back, held-repeat cursor 0x1000 / 0x4000, sounds 0x473 /
  0x45A), action 0x8017EB30 (page logic with progress-gated refusal messages, SetFlag(0xE8, 1), result in
  D_80190110), message text 0x8017E5B8, drawing 0x8017DF18 / 0x8017E1D4 / 0x8017E804, list lines 0x8017E3A0 (names
  D_8010F3C4, greyed when var D_801802E4[j] is 0; item names D_8010F468 for items whose var 0x62 + i has bit 0x40) (H).
  What the menu is for in the game: L (a selection screen that leads to a map change in SC01_004). **Where in the first
  stage:** sc01_004 0x8017D308-0x8017EF8C.
| shape (address in sc01_004) | proposed | evidence | conf |
|---|---|---|---|
| 0x8017D308 | OpenStageMenu | g_StageMode 3, frame hook | H |
| 0x8017D35C | CloseStageMenu | frame hook = StageFrame | H |
| 0x8017D41C | MenuPageInit | func_800D24A0(4), page build | M |
| 0x8017D4A4 | MenuBuildPage | page tables, owned-item categories | H |
| 0x8017D758 | MenuFillNames | strcpy item names | H |
| 0x8017D964 | MenuRunPage | input + draw + message | H |
| 0x8017DAB4 | MenuWaitMessage | confirm closes / back | M |
| 0x8017DC38 | MenuInput | pad, cursor repeat, sounds | H |
| 0x8017DF18 | MenuDraw | DrawMessage0, DrawChoiceCursor | H |
| 0x8017E3A0 | MenuLineText | line text + grey colour | H |
| 0x8017E5B8 | MenuHelpText | per-page message pointer | M |
| 0x8017EB30 | MenuSelect | page actions, refusals | H |
| 0x8017EF8C | MenuEntryLocked | var tests | M |

### F014: the boulder-course code of SC02_000 / SC02_003 (2 stages, 158 shapes)
* **Stages:** sc02_000 sc02_003 (identical own code, so all their own code is this family).
* **What it is:** the whole own code of the boulder chase: camera modes, entry / run sequences with messages, the
  rolling boulder, objects it smashes, the HP/BP-refill glow object and its floor switch, sparkle and light actors
  (H/M, see SC02_000 entry). **Where in the first stage:** 0x8017E958-0x801888F4 (interleaved with F004 / F011-F015).
| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x80183FC8 | BoulderInit | AllocActorModel, three starts by D_800B9A0E | H |
| 0x80184BD8 | BoulderRoll | spin, bounce, HitPlayerFatal when it reaches Musashi, rumble 0x4E2 | H |
| 0x8018419C | BoulderShakeWait | periodic StartCameraShake, counter -> next state | H |
| 0x80185C48 | BoulderPathTest | CollidePath along its motion | M |
| 0x8018623C | BoulderSound | SoundRequest(id & 0xFFFF, arg & 0xFFFF) | H |
| 0x80183814 | EventRunToExit | camera modes by z, messages by z, RequestMapChange(D_8018EA48) | H |
| 0x80183A80 | ShowRunMessage | OpenMessage at z marks D_8018EDD0, sounds 0x5A1/0x5F1/0x5F2 | H |
| 0x80183310 | EventDropIn | Musashi placed high and falls (SetEffectAccel), HUD | M |
| 0x80186530 | RestoreOrbUpdate | glows while D_801270C8, starts heal action near Musashi | H |
| 0x80186764 | RestoreOrbInit | two models, script D_8018AF28 | H |
| 0x80182894 | EventRestoreHpBp | WalkToPoint, FillHp, FillBp, SetFlag80 | H |
| 0x80186AE4 | FloorSwitchUpdate | D_801270C8 = 1 while Musashi or kind 0x2F stands on it | H |
| 0x801869CC | FloorSwitchEvent | StartEvent(D_8018F33C) once | H |
| 0x80186D88 | SmashableWaitBoulder | breaks when the boulder passes, sound 0x4DC | H |
| 0x80187988 | FragmentInit | random velocities, three models | M |
| 0x8018825C | FleeingCreatureRun | runs ahead, spawns 0x3F copies, knocked away by the boulder (0x6AA) | M |
| 0x80188F60 | SparkleSoundUpdate | sound 0x4CF volume/pan from Musashi's heading | M |
| 0x80181820 | CameraRoomStart | camera targets, SetCameraUpdate, SnapCamera | H |

### F015: an 8-slot screen sprite chain (3 stages, 8 shapes)
* **Stages:** sc02_000 sc02_003 sc06_000. 0x80188F08, 0x8018A2A0-0x8018A650.
* **What it is:** up to 8 sprites (func_8001D074(0x7E)) placed at a centre offset scaled by a per-slot factor and
  hidden when the centre is off screen; reset / add / colour helpers (H). L: a lens flare (sun glare) in the sky.
  Names: 0x8018A2A0 UpdateFlareSprites (M), 0x8018A3C8 ClearFlareSlots (H), 0x8018A3FC FreeFlareSprites (H),
  0x8018A440 AddFlareSprite (H), 0x8018A550 AddFlareSpriteList (H), 0x8018A640 / 0x8018A650 SetFlareColour A / B (M).

### F016: exit with SoundCmd1(2) + StartFade(4), message answer (3 stages, 3 shapes)
* sc02_000 sc02_003 sc02_005: 0x801822BC exit step (0x1C/0x1D, func_8001BFD0, SoundCmd1(2), StartFade(4) instead
  of StartExitFade) -> RoomExitStepFade (H); 0x80182630 WaitMessageAnswer (GetMessageAnswer, CloseMessage) (H);
  0x80182CB4 small helper.

### F017: boss HP-bar and spawn helpers (11 stages, 8 shapes)
* sc02_005 sc03_014 sc03_015 sc03_028 sc03_105 sc04_011 sc05_010 sc06_016 sc06_029 sc06_030 sc07_002;
  0x8017BE9C-0x8017C41C. 0x8017BF14 SpawnFromDef(kind 0x6B at screen -0x94,-0x68) handing it two value pointers
  (the HP mirror D_801E4398 / max): **SpawnHpGauge** (M). 0x8017BE9C/0x8017BEC0/0x8017BEE8 its three variants (M).
  0x8017C41C a 85-line sprite update (func_800176F0) (L gauge draw). In boss stages: consistent with a boss HP bar (M).

### F018: an effect sprite actor (9 stages, 5 shapes)
* sc02_005 sc03_028 sc03_105 sc04_011 sc05_010 sc06_006 sc06_029 sc07_002 sc07_011; 0x80190144-0x80190408:
  AllocSprite16To3E set-up, update, FreeEffect, SpawnEffectOn / FindEffectByKind helpers (H calls; meaning M: a
  boss-stage screen effect).

### F019: prop helpers (4 stages, 3 shapes)
* sc02_005 sc03_028 sc03_105 sc05_010; 0x8018C2B0, 0x8018CE04, 0x8018CEE0 (func_8001CD50 / func_800233CC prop
  set-up and free) (M).

### F020: Musashi's "obtained" scene and effects (7 stages, 49 shapes)
* sc02_011 sc03_014 sc03_015 sc03_024 sc03_118 sc03_119 sc06_000; 0x8017E3BC-0x801900F0 (scattered).
* Effect states (SetEffectTimer, NextPhase, BeginScene, IsEventDone) and 0x80180328: at the end of a motion,
  by D_80126B3A - 2 (0..4) **SetFlag(0x16..0x1A)**, the first also **SetProgress(0x85)** (H). L: getting one of five
  key items (scrolls / crests). Name 0x80180328 EventGotItemFlags (M).

### F021: an enemy kind (3 stages, 35 shapes)
* sc02_011 sc03_006 sc03_029; 0x8018C734-0x8018E8A0. Chase AI (DistSqToTarget, TurnStepToTarget,
  SetForwardVelocity, TickTimer, SetScript, rsin/rcos) (M).

### F022 / F029: GTE draw helpers (15 / 14 stages, 15 / 7 shapes)
* F022 sc02_011 sc02_028 sc03_014 ... sc07_002 (0x8018A72C-0x8018B2C4); F029 (0x8018A708-0x8018AE08) is nearly
  the same stage set. RotTransPers, ScaleMatrix, RotMatrixZ, rsin/rcos: sprite / particle drawing (M).

### F023: the "rescue" talk NPC (32 stages, 12 shapes)
* sc02_011 ... sc06_025 (list in families.md); 0x8018ECE4-0x8018F390.
* SetupActor + talk marker unless its flag (table D_801E3130[index]) is set; spawns a partner 0x8F; after its
  script, if the flag is **0x54**: **SetProgress(0x5A)** + SetFlag(0xEA) (H); flag 0x1D -> UploadFlagImages;
  counts the flags (0x8018F138) and calls func_8002AC00(0x26) when one is left (H). L: the captured villagers.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8018ECE4 | RescueNpcInit | SetupActor, talk marker by flag, SpawnActorArg(0x8F) | H |
| 0x8018EDE8 | RescueNpcTalk | sets its flag, RunScript | H |
| 0x8018EF34 | RescueNpcTalkEnd | flag 0x54 -> SetProgress(0x5A), SetFlag(0xEA) | H |
| 0x8018F138 | CountRescued | counts set flags of the table | H |

### F024: item-aware villager NPC (27 stages, 11 shapes)
* sc02_011 ... sc05_006; 0x8017C688-0x8017D31C. Reads item vars GetVar(0x3A + i / 0x3B + i), starts event
  D_80194818 when the map id is 0x3028, sets SetVar(0x3A + i, 1) after an event, sounds 0xBFE / 0x62E (H).
  Names: 0x8017C688 NpcPickTalk (M), 0x8017CA14 NpcStartTalk (M), 0x8017D270 NpcMarkVar (H).

### F025: NPC with a flagged one-time event (14 stages, 10 shapes)
* 0x8017D50C-0x8017E318: StartEventKeepPlayer, SpawnActorArg(0x30), SetFlag(table D_80194B58[+0x70]), event
  D_80194B38, SpawnActorArg(0x1F8), sounds 0x828/0x829 (H). Paired with the S4 clock test (day / night set-up) (H).

### Minor families (sc02_011 / 016 / 017 firsts)
* F026 (sc02_011/016/017): wander helpers (HeadingToPoint, DistSqToTarget, SetScript) (M).
* F027 (sc02_011, sc03_029): camera-blend and walk helpers (StartCameraBlend, WalkToPointTurning, StartRumbleScript).
* F028 (sc02_011/017, sc03_006): touch-damage enemy (ActorSegmentDamagesPlayer, SpawnActorArg(0x125), sound 0x43E).
* F030 (15 stages): sprite effect props (StepSpriteAnim, SpawnPropFrom, sound 0xAA0).
* F031 (7 stages): a talk NPC (SpawnTalkMarker, SpawnActorArg(0x1E3), TargetInFront).
* F032 (4), F033 (17), F038 (4), F039 (3): GTE / effect helpers (gte_rtir colour math, SpawnEffect x3).
* F034 (4): reaction with sound 0xAA1 (SetReactionStep). F035 (34 stages, 3 shapes): companion of F023.
* F036 (15): effect spawner (SpawnEffect, RotMatrixYXZ, func_800D22E4). F037 (6): proximity model actor.
* F040 (sc02_015/021): camera (focus clamp) + drip spawner / drop / ripple (sounds 0x572, command 0x1F) (H).
* F041 (13 stages): Musashi knocked down effect (CollidePlayerMove, PlayerObjFallStep, sounds 0x92F/0x930/0x451).
* F042 (sc02_016/017): the 0x6A9/0x6AA creature's states (TargetInSight, ActorSegmentDamagesPlayer, sound 0x660).
* F043 / F044 (sc02_017 + sc03_006 ...): an enemy group (TargetInSight, DropItem, sounds 0x51F-0x521, 0xAA1) (M).

Addresses are in the first stage (families.md `first=`). Actor state = +2, subtype = +0x70 (H, SetState/NextState).

### F045: kind-0x12C foot soldier enemy (16 stages)
* **Stages:** sc02_026 sc02_027 sc02_028 sc02_035 sc02_037 sc03_089 sc03_090 sc03_091 sc03_093 sc03_094 sc03_098 sc03_099 sc03_100 sc03_102 sc03_103 sc03_104
* **What it is:** a ground enemy with variants by +0x70 (set-up 0x80183084: scripts and start states per subtype 0-5;
  subtype 5 spawns five kind-0x12F parts) (H). Patrol 0x801832A8: walks back towards home (+0x88), keeps off ledges
  (TraceMap ahead, revert position), TargetInSight(0x200, 0x40000) -> alert sound 0xA9B panned by screen x, chase
  state 2 (H). Chase 0x8018365C: close and TargetInFront -> attack (1/4 state 5, else state 0xF); beyond 0x40000
  gives up (H). Melee hit states 0x80184A94 / 0x80184C00: ActorSegmentHitsPlayer -> sound 0xCB2 and SetGrabReaction
  (3, 0x18) for subtypes 2-3 else (1, 0x14) (H). 0x80184B6C throws kind 0x19F (sound 0xCB3) or 0x1A7 (subtype 2)
  at script frame 0x17 (H); the thrown model lands with 0xCB4 (0x801851D0, H). 0x80183CAC: a hovering variant
  (y kept 0x80-0x100 above Musashi, sound 0x702, state 0xA after 0x78 frames close) (M). Hurt 0x80184768-ish:
  TakeDamageAndRecoil + 0xA74 (H); death 0x801840FC: puffs (SpawnKind205) and 0xCBA, FreeActor (H). 0x80182F00
  spawns a kind-0x12C copy (subtype 1) on solid ground (H). Kind 0x12C = this actor (M: sc03_089 tests kind 0x12C).
  **Where in the first stage:** 0x80182F00-0x80185398.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x80183084 | SoldierInit | SetupActor by subtype, SpawnShadow | M |
| 0x801832A8 | SoldierPatrol | home walk, TargetInSight, 0xA9B | M |
| 0x8018365C | SoldierChase | TargetInFront -> attack states | M |
| 0x80184A94 | SoldierAttackHit | segment hit, 0xCB2, SetGrabReaction | M |
| 0x80184B6C | SoldierThrow | SpawnActor 0x19F / 0x1A7, 0xCB3 | M |
| 0x801840FC | SoldierDeathPuff | SpawnKind205 puffs, 0xCBA, FreeActor | M |

### F046 (3 stages: sc02_026 sc02_027 sc02_028), F052 (sc02_027 sc02_028), F049 (sc02_026-028, sc03_092)
* Not read in this pass (no time); F049 recurs only in sc03_092 among G4 stages.

### F047: splitting blob (6 stages)
* **Stages:** sc02_026 sc02_035 sc03_090 sc03_091 sc03_094 sc03_098
* **What it is:** set-up 0x801814D8 (subtype & 0xF model; 0x800 = hidden until dropped; 0x8000 = child of a parent)
  (H); crawl 0x80181688: wobbling scale, MoveOnGround with ledge revert, random turns, contact HitPlayer
  (0x80182318) (H); drop-in 0x80181B18: shown when Musashi within 0x10000, falls, squash with sound 0x703 (H);
  burst 0x8018200C: eight props flung out, sound 0xA65 (H); props 0x801827E4.. fall, and after 0x1F frames
  0x80182AF4 respawns kind 0x17F (SpawnActorFromDef) (H): a blob that splits into droplets that become new blobs
  (M). **Where:** 0x8018144C-0x80182E80.

### F048 (+F051): bundle of small actors (21 stages)
* **Stages:** sc02_026 sc02_027 sc02_028 sc02_035 sc02_037 sc03_089-sc03_104 (all but 105)
* **What it is (M):** 0x8017FAC0 a hazard main: three sets of five segments hit Musashi (g_PlayerHitKind 0x4004),
  looped sound 0x609 scaled by distance (H). 0x8017FD58 pushes kind-0x12C soldiers out of a model (H).
  0x8017FEE0 model set-up with six subtypes (0x12F particles, scales) (H). Hopper 0x80180A4C (three kind-0x164
  parts at 0x555/0xAAA/0x1000, spun by F051 0x80180AF0 / 0x80180B90) and 0x80180B0C: wakes within 0x64000
  (0x80180E24), hops toward the target (sound 0xBA2 per bounce), goes home after a timer (0x679) (H).
  Platform 0x80181030 (spawns 0x1C4): moves for a time, reverses (0x80181148), CarryPlayer (H). Particles
  0x801811C4-0x80181374 (random, rsin drift) (H). **Where:** 0x8017FAC0-0x80181374.

### F050: room lights (23 stages)
* 0x80185440: by +0xFC (0-4) sets a back colour (func_8002850C) and three lights (func_80028620) from tables
  (H); states 0x80185634.. pulse one light's colour with rsin each frame (H). Proposed RoomLightInit /
  RoomLightPulse (M). **Where:** 0x80185440-0x8018584C (sc02_026).

### F051: three tiny helpers used with F048 (22 stages): clear hit (+0xC1/+0x5E), spin model by +0xFC, child yaw
  = parent yaw + subtype (H).

### F053: screen-space spawner + sound (8 stages: sc02_027 sc02_028 sc03_099-sc03_103 sc03_105)
* 0x80189EB0..: timer, when on screen SpawnActorFromDef; a helper plays 0x6D5 and 0x856 / 0x857 panned by
  ProjectPoint (H in sc03_099 0x80182870-0x80182E64). Meaning L (falling things, drips?).

### F054: switch / gate set that sets progress 0x172 (4 stages: sc02_028 sc03_097 sc03_101 sc03_104)
* Set-up reads GetFlag(table[subtype]) (H); touch -> StartEvent + sound 0x700 (H); 0x80180CB8 (sc03_101): event
  done, SetFlag(table[subtype], 1), when all flags in the table are set SetProgress(0x172) (370) (H). M: several
  switches/seals, all done = story step.

### F055: warp disc (8 stages: sc02_028 sc03_089-sc03_092 sc03_097 sc03_101 sc03_104)
* Sprite disc (0x801829BC-ish set-up; companion kind 0x1E1; may be closed by GetVar(+0xFC)); grows to full size,
  Musashi standing within 0x30 and level -> StartEvent (position packed), SetFlag(0xAE/0xAF/0xB0, 0), then
  IsEventDone -> RequestMapChange(+0xDC) (H, read in sc03_089 0x801881D0-0x8018879C). Sound 0x701 when it opens.

### F056 (sc02_031 ...), F059 (sc02_039, sc03_108), F060-F066 (sc02_041 + SC04): not in G4's stages; not read.

### F057: flying diver, variant (10 stages: sc02_035 sc03_094 sc03_099 sc03_103 sc03_110 ...)
* Same behaviour as the F089 diver (wander with pitch, dive at Musashi with 0x6FF, off-screen respawn), without the
  companion / bomb (M, from sc03_099 0x8017F66C-0x80180200).

### F058: spinning blade / pendulum and platform (5 stages: sc02_035 sc03_098-sc03_101)
* SetupActorAlt platform spawning 0x1C4 with CarryPlayer; a swinging part (rcos, UpdateModelRot,
  ActorSegmentDamagesPlayer, sound 0x6A5) (H in sc03_099 0x8017F0D0-0x8017F538). M: swinging hazard.

### F089: diver enemy with bomb (4 stages: sc03_089 sc03_090 sc03_091 sc03_104)
* Seq points 0x80183C90 / 0x80183CE8: each frame the two actors nearest Musashi among kinds 0x1E8, 0x19E,
  visible 0x178, 0x1AA get seq points 1 and 2 (SetSeqPoint; L: positional sound sources) (H). Diver set-up
  0x8018406C spawns companion 0x178; wander 0x801841E8 (3D heading with pitch, periodic 0x6FE by distance);
  dive 0x801844C8 (turn to target, 0x6FF, swoop, back to home height); hides off screen and respawns (H).
  Bomb 0x80184D7C-0x80185098 rides the parent's bone until released, on landing spawns 0x1AA + 8 x 0x1B0, 0x705 (H);
  0x1AA blast ring 0x801855BC (grows, HitPlayer within its radius) (H); 0x1B0 debris 0x801858BC (H).
  0x80181474: player-action effect 0x19 (H). **Where:** 0x80181474-0x80185C58.

### F090: drifting 0x19E creature + camera bits (2 stages: sc03_090 sc03_091)
* Kind 0x19E (0x801874BC; first one of the kind is the leader with a path table): drifts, bobs, bounces off walls /
  floor, contact HitPlayer, sprite props every 20 frames (H). Also two camera set-ups and seq-point placement
  0x80181F00 (H). **Where (sc03_090):** 0x80181578-0x8018A9C8.

### F091: glowing 0x1A2 creature (5 stages: sc03_093-sc03_097)
* Set-up 0x80181470 (glow sprite, first of kind = leader); fades in when Musashi within 0x40000, drifts toward the
  target (odd subtypes), contact HitPlayer, props every 24 frames, squash reaction from g_PlayerSquash, fades out
  on death; subtype 0x800 respawns at home (H). **Where (sc03_093):** 0x801813E0-0x8018232C.

### F092: occluder hider (4 stages: sc03_093 sc03_095 sc03_096 sc03_097)
* 0x8017F8D8 spawns kind-0x167 parts at listed positions; 0x8017F398 / 0x8017F570: when Musashi is inside a zone
  (z / y / x bounds by subtype) hide all kind-0x12F actors and the 0x167 parts, ramp a tint (func_80016224) (H).
  M: walls / roofs that vanish when Musashi walks behind them. **Where:** 0x8017F2D8-0x8017FA00.

### F093: chained creature, actor kind 0x1EA (8 stages)
* **Stages:** sc03_107 sc03_111 sc03_112 sc03_113 sc03_117 sc03_118 sc03_119 sc05_004
* **What it is:** one actor kind 0x1EA whose variant (+0x70) selects the part (H): heads (variants 0, 7, 15) each
  spawn a chain of linked body segments (1-6, 8-13, 17-22; each segment spawns the next with SpawnActorArg(0x1EA, n)
  and links through +0x6C) (H); variant 14 is a spat projectile (launched along the head's pitch/heading, lifetime
  0x12C frames, freed on a wall, on hitting Musashi via ActorSegmentDamagesPlayer, or on time-out; leaves prop 0x7C
  trail) (H); variants 16 / 24 are spawners that, while Musashi is within ground distance^2 0x23FFFF, emit a
  variant-15 head every 0x2D-0x4C frames (H); variant 25 keeps at least two heads alive (H). A head has a home
  (+0x88): it returns when far from home, rears up (sinusoid, sound 0x98F), lunges forward, and when the target is
  near and in front spits the projectile (count 6, sound 0xC5D) while dust props 0x7B trace the ground (H). Variant 15
  enters tumbling: bounces off walls (TraceMap probes pick a new heading, sound 0x833 on ground bounces) and after a
  random bounce settles into a normal head; a chain shorter than 7 when its timer runs out is freed whole (H).
  Hurt / death sounds 0x8C6 / 0x8C7 (M). L: a centipede / snake-like enemy.
* **Where in the first stage:** 0x8017EF3C-0x801812F8 (set-up 0x8017EF3C, dispatcher 0x801805BC).
| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x8017EF3C | ChainBugInit | switch over variant: head / segment / projectile / spawner set-ups | H |
| 0x801805BC | ChainBugMain | ACTOR-MAIN | M |
| 0x8017FCF0 | ChainBugHeadChase | turn to target, lunge state 4 when close and in front | H |
| 0x8017FE24 | ChainBugTumble | wall-bounce heading table, 0x833, settles at random | H |
| 0x8018087C | ChainBugReturnHome | walk to +0x88 home, engage when target in sight | H |
| 0x80180968 | ChainBugRearUp | sinusoid rise, 0x98F | H |
| 0x80180A9C | ChainBugLunge | dive forward, re-strike or recover | M |
| 0x80180CD4 | ChainBugSpit | SpawnActorArg(0x1EA, 0xE) + 0xC5D at count 6 | H |
| 0x80180D98 | ChainBugShotFly | projectile move / hit / time-out | H |
| 0x80180E18 | ChainBugSpawnerTick | timed head spawn near Musashi | H |
| 0x80181058 | ChainBugKeepTwo | spawn a head when fewer than two exist | H |
| 0x80180EB8 / 0x80180F88 | ChainBugGrowChain | spawn next segment, then follow | H |
| 0x801804D8 | SpawnGroundDust | prop 0x7B on the ground every 8 frames | H |
| 0x801805F8 | SpawnShotTrail | prop 0x7C at the shot | H |

### F094: ground melee enemy, burst-attack half (5 stages)
* **Stages:** sc03_107 sc03_112 sc03_115 sc05_001 sc05_007 (always together with F044, which carries the enemy's
  dispatcher and remaining states).
* **What it is:** the states and helpers of one enemy (H: called from the F044 states): SetupActor + shadow; idle with
  a random new heading; chase (TargetInSight / TargetInFront, TurnStepToTarget, wall-slide 0x8017ED6C, pushes away
  from other actors 0x8017EB70); attack chosen by 0x8017EB04 (always 0x20 if GetStatsWord94, else at random): either a
  swing (ActorSegmentDamagesPlayer, 0x8017E960) or a ground burst (0x8017E888: 20 dust shadows in a ring + sound
  0x521; 0x8017E9CC: HitPlayer(1, 0x2001) when Musashi is within distance 96) (H); a puff-up attack that grows the
  model scale to 0x1800 (0x8017E328) (H); death: blink, DropItem on 1 frame in 32, free (0x8017E668 / 0x8017E7C0) (H).
* **Where in the first stage:** 0x8017D9B8-0x8017ED6C.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8017D9B8 | BurstEnemyInit | SetupActor, shadow | M |
| 0x8017DCA0 / 0x8017DD78 | BurstEnemyChase | sight / front tests, approach | H |
| 0x8017E888 | SpawnBurstRing | 20 x SpawnShadowBAt + 0x521 | H |
| 0x8017E9CC | BurstHitPlayer | radius test + HitPlayer | H |
| 0x8017E960 | SwingHitPlayer | ActorSegmentDamagesPlayer once per swing | H |
| 0x8017EB04 | ChooseAttackKind | flag 0x20 by GetStatsWord94 / rand | H |
| 0x8017EB70 | MoveAndSeparate | MoveOnGround + push off other actors | H |
| 0x8017E668 / 0x8017E7C0 | BurstEnemyDie | blink, DropItem 1/32, free | H |

### F095: roaming object dispatcher and reaction states (4 stages)
* **Stages:** sc03_107 sc03_118 sc03_119 sc03_124 (village).
* **What it is:** the dispatcher 0x801819C8 (blink countdown +0xFC, hit box chosen by whether Musashi is above it) and
  small states of the invulnerable knock-about object whose set-up (S2, sc03_107 / sc03_124) remembers its map in the
  save halfword D_800BA1B8+10 and sets progress 0x1D6 on map 0x1052 (H): HP floor 0x320 -> 0x384, knock-back start
  (SetLocalVelocity), hit -> mark the saved word with 0x100, sink and respawn at the saved spot (0x80181CC0) (H).
  L: a story object Musashi must knock / carry to the village.
* **Where in the first stage:** 0x801819C8-0x80181CC0. Names: RoamObjMain (0x801819C8), RoamObjKeepHp (0x80181B94),
  RoamObjHitStart (0x80181BB8), RoamObjMarkMoved (0x80181C1C), RoamObjSinkRespawn (0x80181CC0) (M).

### F096: hopping blob enemy (4 stages)
* **Stages:** sc03_108 sc03_110 sc03_112 sc05_001
* **What it is:** one enemy (H): SetupActor + sprite, shadow; it hops with a squash-and-stretch scale pulse (rsin on
  model scale), wanders and turns at walls (0x8017F2E8), approaches when Musashi is in front within distance^2
  0x24000 and at < 0x4001 aims at his chest (HeadingPitchTo) and leaps (0x8017F788 / 0x8017F83C, ActorTouchesPlayer)
  (H). Variant bit 2: hidden until Musashi is within ground distance^2 0x40000, then drops in and lands with sound
  0x832 panned by screen x (0x8017FD08 / 0x8017FD64) (H). Variant bit 1: a free-flying state (MoveObject) that sets
  g_PlayerHitKind 0x11 on touch (0x8017FC3C) (H). Hurt reactions by hit kind +0x5E (1 = damage, 8, 5/29/32, 50:
  different knock-back vectors), 0xA74 on a hit (H); 0x801803E0 damages other actors near it while flying
  (DamageActorsNear) (H); death: blink, 5 x SpawnActorFromDef kind 0x33 puffs, func_8002A04C, despawn (H).
* **Where in the first stage:** 0x8017F0B0-0x80180B7C.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8017F0B0 | HopperMain | dispatcher + IsActorFar despawn | H |
| 0x8017F140 | HopperInit | SetupActor, sprite, variant bits | H |
| 0x8017F2E8 | HopperWander | hop, turn at walls | H |
| 0x8017F640 | HopperApproach | approach, leap at < 0x4001 | H |
| 0x8017F788 | HopperAimLeap | HeadingPitchTo Musashi, fast forward | H |
| 0x8017FD08 | HopperWaitAmbush | show when Musashi near | H |
| 0x8017FD64 | HopperDropIn | land, 0x832 panned | H |
| 0x8017FEE4 | HopperHurt | hit kind switch, TakeDamage | H |
| 0x80180A84 | SpawnDeathPuffs | 5 x kind 0x33 | H |

### F097: spinning platform with four arms (2 stages)
* **Stages:** sc03_109 sc05_004
* **What it is:** a platform model (AllocActorModel) that spawns four arm parts SpawnActorArg(0x191, 0-3) (H), carries
  Musashi and turns him with its spin (CarryPlayer, +0xFC spin speed) (H). Variant 0 cycles: speeds up to 0x100, slows
  (sound 0x721, then sound command 4 with 0x720), stops aligned to a quarter turn, waits 0x40 frames, restarts (0x720)
  (H); other variants wait for flag 0xBA (H). While spinning it pushes Musashi upward (player +0x34 velocity) when he is
  within ~245 units and a height band above it (0x8017D790) (H). M: a fan / turntable lift.
* **Where in the first stage:** 0x8017D2E0-0x8017DC54. Names: SpinPlatformInit (0x8017D8E0), SpinWaitFlag
  (0x8017D988), SpinSlowStop (0x8017D9D8), SpinSpeedUp (0x8017DAA0), SpinLiftPlayer (0x8017D790), SpinUpdateCarry
  (0x8017D694), SpinArmCarry (0x8017DC54), SpawnSpinArms (0x8017D72C) (M).

### F098: particle prop spawner (7 stages)
* **Stages:** sc03_114 sc04_011 sc04_016 sc06_000 sc06_006 sc06_018 sc06_032
* **What it is:** helpers that spawn and move prop 0x55 particles (H): 0x8017E94C SpawnPropAt(0x55) with life +0x1C,
  optional velocity (+0x10..+0x18, +0x34 gravity) and model data; 0x8017E918 the same with +0x32 = 1; 0x8017E78C a box
  emitter (every 2^sh frames a particle at pos +- range); 0x8017E270 / 0x8017E170 the particle's set-up (random spin,
  scale 0x600) and per-frame move (MoveProp, spin, freed at end of life) (H). L: smoke / spark puffs.
* **Where in the first stage:** 0x8017E170-0x8017E94C. Names: ParticleUpdate (0x8017E170), ParticleInit (0x8017E270),
  EmitParticleInBox (0x8017E78C), SpawnParticleFlagged (0x8017E918), SpawnParticle (0x8017E94C) (M).

Written under a shortened deadline: F115 was read in detail; F116-F122 from the digest plus a few functions each.

### F115: sc06 mechanical enemies: rotor flyer and sprayer mech, with their debris (7 stages, 49 shapes)
* **Stages:** sc06_008 sc06_010 sc06_018 sc06_022 sc06_024 sc06_032 sc06_033
* **What it is:** two enemy kinds plus their parts / shots / debris (M). **Where in the first stage:**
  0x8017EC48-0x80183BF4 (sc06_008; ACTOR-MAIN dispatchers 0x8017FAD4, 0x8017FC84, 0x80180A5C sit between, untagged).
  * Enemy 1 (set-up 0x80180000: SetupActor(D_8019C808), shadow, two extra models at +0xCC / +0xD0 that spin
    opposite ways, +0xFC += 0x280 / +0xFE -= 0x280, H). Roam 0x8017F2E8: bobs +-8 around height +0x8A, wanders
    around its home point +0x88 (radius 0x40000 squared-distance), turns away from walls (0x8017EC48 TraceMap
    0x51 ahead), and switches to state 2 when Musashi is within GroundDistSqToPlayer 0x24000 (60-frame cooldown)
    (H). 0x8017EF54: every 10 frames a screen-panned loop sound 0x849 (pan from projected x, H). 0x8017F100 exhaust:
    SpawnActor(0x281) puffs and prop 0x23 toward the camera (H). Hurt 0x8017FDDC (SetReactionStep 6 at HP < 0);
    0x8017FE28 debris SpawnKind205; 0x8017FF74 fall, FinishEnemy below y 0x10; death 0x8017FCC0 frees the parts,
    drop (func_8002A04C), FreeActor (H). 0x8017F9FC: despawns when IsActorFar (variant 0) (H).
  * Its shot 0x801802BC / 0x8018037C: model with parent's rotation, flies forward 0x40 frames, ActorSegmentDamagesPlayer
    damage 0x30 (H). Debris 0x80180450 / 0x8017FB10: two bounces then freed after 90 frames (H).
  * Enemy 2 (set-up 0x80181220: SetupActor(D_8019EE50); variant != 0 loads two CLUT images and another model
    (H: a palette / colour variant); spawns two linked parts SpawnActorArg(0x26F) and (0x270), scripts for all three,
    starts in state 8). Roam 0x801813D0 (same wander as enemy 1). Attack 0x8018165C: for +0x100 frames sprays prop
    0x7F in a sweeping arc ahead (sin-swept heading, upward speed 0x40000), sounds 0x95F at start and 0x960 every 16
    steps; a hit (+0x72 & 0x4000) cancels to state 7 (H; L: a flame / water jet). Hurt 0x801810AC / 0x801821F8
    (ShowDamage, ShowDefeat, StartRumbleScript, status effects, sound 0x9B7, H). Death 0x80180CA8 / 0x801823F0 /
    0x80182A48 (body and two parts): sparks (prop 0x23, sound 0xAF8) for +0xFC frames, then explosion kinds
    SpawnActorArg(0x33, 3) x2 + (0x32, 2), func_8002AC00(0x22), eight 0x281 debris, panned sound 0x961, drop, free
    (H). 0x8018309C: sprite shot with prop-0x22 trail and PointHitsPlayer (H). 0x80183658 / 0x80183924 set-ups and
    0x80183750 / 0x80183A20 / 0x801834E0 / 0x80183BF4: falling / spinning debris pieces that puff 0x281 and free
    (M).
| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x80180000 | RotorFlyerInit | SetupActor + two spinning models | M |
| 0x8017F2E8 | RotorFlyerRoam | home-radius wander, wall check, aggro at 0x24000 | H |
| 0x8017EC48 | ProbeWallAhead | TraceMap ahead, push back | H |
| 0x8017EF54 | PlayPannedHum | RotTransPers -> pan, SoundRequest(0x849) | H |
| 0x8017F100 | RotorFlyerExhaust | 0x281 puffs, prop 0x23 | M |
| 0x8017F9FC | RotorFlyerUpdate | state table + far-despawn | M |
| 0x8017FDDC | RotorFlyerHurt | SetReactionStep(6) at HP < 0 | M |
| 0x8017FF74 | RotorFlyerFall | FinishEnemy below y 0x10 | M |
| 0x8017FCC0 | RotorFlyerDie | free parts, drop, FreeActor | H |
| 0x8018037C | RotorShotFly | ActorSegmentDamagesPlayer 0x30 | H |
| 0x8017FB10 | DebrisBounce | two bounces, 90 frames | M |
| 0x80181220 | SprayMechInit | SetupActor, parts 0x26F / 0x270 | H |
| 0x801813D0 | SprayMechRoam | same wander | M |
| 0x8018165C | SprayMechSpray | prop 0x7F arc, sounds 0x95F / 0x960 | M |
| 0x801810AC | SprayMechHurt | ShowDamage / ShowDefeat, 0x9B7 | H |
| 0x80180CA8 | SprayMechExplode | sparks then 0x33 / 0x32 / 0x281, 0x961 | H |
| 0x8018309C | SprayShotFly | sprite anim, trail 0x22, PointHitsPlayer | M |

### F116: lift / conveyor hub of the small sc06 rooms (6 stages, 13 shapes)
* **Stages:** sc06_011 sc06_013 sc06_014 sc06_015 sc06_016 sc06_030
* **What it is:** 0x8017E9F4: a rotating object (model +0x14 += speed +0xFC) that, while Musashi is below y -0x4E0
  and within 0x900 in z, pushes him along +z at a speed scaled by its spin (doubled under PlayerEvent200), loop sound
  0x978 with volume from the push, stop with cmd 4 (H; M: a conveyor / current / wind). Three SetupActor set-ups
  (0x8017EDA4, 0x8017F114, 0x8017F1BC). A player action script 0x8017F2DC..0x8017F6CC moves Musashi into an object
  (WorldToActorLocal, sounds 0x8B0 / 0x8B1) and 0x8017F510 then does RequestMapChange(+0xDC of the nearest actor
  flagged +0x5C & 0x80) (H): the map-change record is stored in a door/hatch actor's +0xDC, so every exit of these
  rooms is an actor (M). **Where:** sc06_011 0x8017E9F4-0x8017F6CC.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8017E9F4 | PushCurrentUpdate | pushes Musashi +z, sound 0x978 | M |
| 0x8017F510 | ExitViaNearestDoor | RequestMapChange(nearest flagged actor +0xDC) | H |
| 0x8017F5F0 | MovePlayerIntoDoor | WorldToActorLocal, sound 0x8B0 | M |

### F117: big sc06 enemy / hazard set (6 stages, 87 shapes)
* **Stages:** sc06_018 sc06_020 sc06_022 sc06_024 sc06_032 sc06_033
* **What it is (digest level, M):** enemies using SpawnKind13 (0x80183C8C, 0x80184844 with TargetInFront: a shooter),
  a ground enemy with DamageActorsNear / MoveOnGround / reaction steps, a pair actor 0x801880C4 (two SetupActor,
  sized shadows), a chaser 0x801886B0 spawning SpawnActorArg(0x2A8), and random-scattered models 0x801894F0 /
  0x80189A34 (rand x20: debris or rubble). **Where:** sc06_018 0x80183A00-0x8018A0B8. Not read in detail.

### F118: sc06_018 / sc06_032 machine enemy (2 stages, 42 shapes)
* **What it is (digest, M):** set-up 0x8018A28C (SetupActor + SpawnActorArg(0x2E4) part), hurt 0x8018A688
  (ShowDamage, SpawnActorArg(0x304), 0xAAC), smoke EmitProp23 with 0xA9F, a turret-like 0x8018C88C (HeadingToPlayer,
  SpawnActor(0x30E) on a timer), sounds 0xAE4, 0xAD8, 0xAE0, 0xB32; deaths with the 0x33 / 0x32 / 0x281 explosion
  of F115. **Where:** sc06_018 0x8018A28C-0x8018CD04.

### F119: segmented chain machine (3 stages, 33 shapes)
* **Stages:** sc06_018 sc06_032 sc06_033. **What it is (digest, M):** a body made of SpawnActorArg(0x318) segments
  driven by the named helpers Chain_9C / Step_9C / Turn_9C / Boost_9C / Last_9C, sounds 0x9BB / 0x9BC / 0xAD5-0xAD7,
  segment hits by SegmentHitsPlayer / PathHitsModelTwoCells, and the F115-style explosion on death (L: a snake /
  train-like enemy). **Where:** sc06_018 Boost_9C .. line_8018F694.

### F122: sc06_022 / sc06_024 big mechanism (2 stages, 34 shapes)
* **What it is (digest, M):** set-up 0x8017F85C spawns four SpawnActorArg(0x2F4) and one 0x2F9; states with sounds
  0x94F-0x952, StartCameraShake, many FreeActor (a collapse), hurt 0x8018034C (ShowDamage, 0x9D4), a launcher
  0x80180FB4 spawning 0x2FE (sound 0xAE6), 0x80181418 spawning 0x311, 0x80181664 spawning four 0x2F9 (M: a large
  machine with parts that can be broken). **Where:** sc06_022 0x8017D414-0x80181A4C.

### Minor families
* F120 (4 stages: sc06_018/020/032/033, 4 shapes): effect particles (0x8017BEF8 random-direction effect with timer,
  0x8017C0A4, 0x8017C120 sin wobble) (M).
* F121 (3 stages: sc06_018/020/032, 3 shapes): an actor that sways on rsin/rcos and drives two sub-points
  (0x8017D934 / 0x8017D9A4 / 0x8017DB20) (M); 0x8017DC60 [S7] next to it is CarryPlayer (a moving platform).

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

### SC01_004
* **Place:** a menu room, not a shop (H: no price, money or purchase code): on entry an actor takes the player's control
  and opens the F001 multi-page menu; the chosen line picks a RequestMapChange record (H), so it works as a selection
  screen that sends you to another map (M; L: a castle hub / destination or record-viewing menu). Progress: the entry
  actor sets progress 5 if below 5 (H); room code 0x8017CD7C sets 0x488 (1160) when progress is 0x47E-0x491 (H); the
  default exit 0x8017D060 sets progress 10 and flag 0xB5 the first time (H).
* **Size:** 47 functions (own 14, F001 x16, lone shapes S2 S10 x2 S18 S64 S65 S100 S116 S125 S138; P01, P02, P03).
* **Actors:** A1 0x8017EFEC, the room controller: state 0x8017F028 SetProgress(5) if < 5; 0x8017F078 waits until
  GetPlayerAction() == 0, TakePlayerControl, 12 frames; 0x8017F0E0 opens the menu (F001 0x8017D308(0, 0): g_StageMode
  = 3, frame hook = the menu); 0x8017F138 reads the choice (0x8017D2F8) and RequestMapChange(D_8018C2D4[choice]);
  choice 3 with a zero entry closes the menu (F001 0x8017D35C) and reopens it; other zero entries use 0x8017D060 (H).
* **Events / scripted scenes:** none besides the menu. Menu content is in the F001 section: item names (D_8010F468) of
  items whose var 0x62 + i has bit 0x40, a 27-line list (names D_8010F3C4) greyed when its var D_801802E4[j] is 0,
  progress-gated refusal messages (0x294, 0x3B6, 0x44C-0x47E, 0x294-0x384, 0xA0-0xC8), SetFlag(0xE8) on one page (H).
* **Exits:** RequestMapChange(D_8018C2D4[choice]) or 0x8017D060's pick: progress 0x294-0x29D -> D_80182DB4; with flag
  0xB5 or progress >= 10: >= 0x384 D_80182D90, >= 0x258 D_80182D6C, >= 0xC8 D_80182D48, else D_80182D24; first time
  D_80182C74 plus SetFlag(0xB5, 1), SetProgress(10), func_8002931C(0x21C0000) (H). Destinations unknown (data). P01
  has two exit steps (with / without SoundCmd1(1)).
* **Sound:** menu sounds 0x45A, 0x45D, 0x45F, 0x473, 0x474 (F001) (H).
* **Unknown / notes:** camera fixed (0x8017D254 sets eye / target constants; S64 pad toggle). 0x8017D2F0 returns 0x3D.

#### Names: SC01_004
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CD7C | func_sc01_004_8017CD7C | RoomBumpProgress488 | 0x47E <= progress < 0x492 -> SetProgress(0x488) | H |
| 0x8017D060 | func_sc01_004_8017D060 | PickDefaultExit | progress-tiered record; first time flag 0xB5, progress 10 | H |
| 0x8017D1B4 | func_sc01_004_8017D1B4 | RoomCameraInit | proj 0x12C, SetCameraUpdate | H |
| 0x8017D254 | func_sc01_004_8017D254 | CameraFixedView | eye / target constants, pad toggle | M |
| 0x8017EFEC | func_sc01_004_8017EFEC | MenuHostMain | ACTOR-MAIN | M |
| 0x8017F028 | func_sc01_004_8017F028 | MenuHostInit | SetProgress(5) if < 5 | H |
| 0x8017F078 | func_sc01_004_8017F078 | MenuHostTakeControl | waits for no action, TakePlayerControl | H |
| 0x8017F0E0 | func_sc01_004_8017F0E0 | MenuHostOpen | opens the F001 menu | H |
| 0x8017F138 | func_sc01_004_8017F138 | MenuHostChoose | choice -> RequestMapChange or reopen | H |

### SC01_005
* **Place:** an interior room with the F001 menu, a rest point and an item-display actor (H); the earliest story room:
  progress < 5 starts the first event, which sets progress 10 (0xA) when it starts and progress 2 when it ends or is
  skipped (H; M: the order of the two sets is as written, the reading of why is open). Rest at progress < 5 or 0x294
  (660) (H). M: a bedroom-like room (L: Musashi's room in the castle) where items / collectibles are viewed.
* **Size:** 128 functions (own ~5, F001 x16, F002 x47, F003 x8, lone shapes S3 S4 S5 S9 S10 S14 S18 S65 S100 S116 S125
  S138; P01-P03; 4 PLAYER-ACTION-MAIN dispatchers, F003).
* **Actors:** all F002 (see the family): the room host (event, rest), three menu openers (0x801805A8 / CC / F0 open
  F001 with different arguments), a pair of path walkers (0x80180C98 ... 0x80181228: SetScript, SpawnShadowSized), and
  the item display A3 (0x801812B0-0x80181B00): shows item model D_801C339C[n]; an unwrap animation (two parts fly
  apart, model scales to 0x1800, SoundRequest(0xC86), white flash) then SetVar(0x63 + n, | 0x20); item 0x1B also
  SoundCmd1(1); per-item message D_801C37D4[n] (H; L: unboxing a collectible figure).
* **Events / scripted scenes:** 0x80180010: when GetPlayerAction() == 0: SetProgress(0xA), clear flags 0x125-0x128,
  StartEvent(D_801BBE98) (H). 0x801800C0 runs it: the script raises flags read here: 0x125 EndPlayerMotionAction,
  0x129 FacePoint(0x20, 0, -0x80), 0x126 three timed StartPlayerActionB14 turns (0xE00 / 0x180 / 0xFC0), 0x127
  StartPlayerMotionAction599C, 0x128 0x80182324 (StartPlayerMotionAction + ClearActionHandler) (H: the script drives
  Musashi's moves through flags). Start (pad 0x800) skips: SetProgress(2), RequestMapChange(&D_80185E80); the normal
  end: EndEvent, TakePlayerControl, 16 frames later SetProgress(2), RequestMapChange(&D_80185E5C) (H). A second event
  D_801BC348 (0x8018041C) and an S3 StartEvent(D_801BBC4C) (0x80180908) exist (H; triggers by state order, M).
* **Puzzles / mechanisms:** rest (0x80180808 / 0x8017FBCC): AddHp(999), AddBp(999), func_8014B944, func_8014B034 /
  func_8014B00C, func_80029344, with a fading colour overlay (0x8017FD50 draws it) (H; M: a bed that restores HP / BP
  and moves the clock; func_8014B034(0xAC8 - D_80078E92) reads like a time set, L).
* **Exits:** D_80185E80 (skip), D_80185E5C (after the event), D_80185E38 (S3, twice) (H); destinations unknown (data).
* **Sound:** 0xC86 unwrap; menu sounds (F001); SoundCmd1(1) when var 0x7E ... (F002 0x8017F790) (H).
* **Unknown / notes:** the F003 player-action phases (0x8017BEC4 ... 0x8017C2F4, sound 0xA05) are Musashi's scripted
  moves for this room's events (M).

#### Names: SC01_005
(own code is almost all family; see F002 / F003 in G1_families.md)
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017FBCC | func_sc01_005_8017FBCC | RestRestoreFade | timer fades, AddHp / AddBp at 0x30 | H |
| 0x8018048C | func_sc01_005_8018048C | HostEventRunFade | fade overlay + UpdateScript | M |
| 0x80180974 | func_sc01_005_80180974 | HostRestState | calls the rest fade | L |

### SC01_006
Same code as SC01_005; differs only in data (H: identical own code, docs/decomp_census.md).

### SC01_008
* **Place:** an interior room with one talking NPC who opens the F001 menu (page 2) (H); no progress sets; the NPC
  uses another state table while progress < 5 (H). M: an advice / information character (L: a castle tutor).
* **Size:** 58 functions (own ~12, F001 x16, lone shapes S2 S3 x4 S4 S5 S10 x2 S18 S65 S100 S116 x2 S125 S138; P01-P03).
* **Actors:** one NPC kind, dispatcher 0x8017F124 picks state table D_8019F2C4 (progress >= 5) or D_8019F2E4
  (progress < 5, flag +0x70 set by the init 0x8017F380: AllocActorModel(D_8019E198), SetScript, SpawnShadowSized)
  (H).
  * progress < 5 table: S3 StartEvent(D_8019F498), 0x8017F1FC ends it (EndEvent, TakePlayerControl), S3
    RequestMapChange(&D_8018317C) (H: a forced talk then a map change).
  * normal table: S3 StartEvent(D_8019F204), 0x8017F470 branches on the script's answer: 1 RunScript(D_8019F234);
    2 bumps var 0xDF (0-12, wraps) once and RunScript(D_8019F264); 3 RunScript(D_8019F284) (H); 0x8017F560 /
    0x8017F2B8 open the menu (F001 open (2, 2)), 0x8017F2DC turns the menu answer (hi, lo) into message text
    D_8019F144[(hi - 1) * 5 - 1 + lo] (H); 0x8017F61C ends the talk; S3 RequestMapChange(&D_8018317C) (H).
* **Events / scripted scenes:** event scripts D_8019F498 (first visit, progress < 5) and D_8019F204 (later) (H).
* **Exits:** RequestMapChange(&D_8018317C) at the end of both talks (H); destination unknown (data). Two entry steps
  (S116 x2) = two entry walks (H).
* **Sound:** F001 menu sounds only (H).
* **Unknown / notes:** var 0xDF counts a 13-step cycle (M: rotating hint / lesson number).

#### Names: SC01_008
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F124 | func_sc01_008_8017F124 | AdvisorMain | two state tables by +0x70 | H |
| 0x8017F380 | func_sc01_008_8017F380 | AdvisorInit | model, shadow, progress < 5 flag | H |
| 0x8017F1FC | func_sc01_008_8017F1FC | AdvisorFirstTalkEnd | UpdateScript, EndEvent, TakePlayerControl | H |
| 0x8017F470 | func_sc01_008_8017F470 | AdvisorTalkBranch | answer 1 / 2 / 3, var 0xDF cycle | H |
| 0x8017F560 | func_sc01_008_8017F560 | AdvisorOpenMenu | menu (2, 2) after a script | H |
| 0x8017F5D4 | func_sc01_008_8017F5D4 | AdvisorMenuLoop | RunScript D_8019F2A4 | M |
| 0x8017F61C | func_sc01_008_8017F61C | AdvisorTalkEnd | EndEvent, TakePlayerControl | H |
| 0x8017F2DC | func_sc01_008_8017F2DC | AdvisorAnswerText | menu answer -> SetMessageText | H |
| 0x8017F294 | func_sc01_008_8017F294 | AdvisorMenuOpen20 | F001 open (2, 0) | H |
| 0x8017F2B8 | func_sc01_008_8017F2B8 | AdvisorMenuOpen22 | F001 open (2, 2) | H |
| 0x8017D0A4 | func_sc01_008_8017D0A4 | RoomCameraInitA | SetCameraUpdate, SnapCamera | M |
| 0x8017D168 | func_sc01_008_8017D168 | RoomCameraInitB | second camera set-up | M |

### SC01_009
* **Place:** a story hub room with one main character (A1) whose talk advances the story by progress windows and a
  cast of up to ~39 kinds of residents (A2) whose talks give rewards and set flags (H). Progress sets: 0x8C (140),
  0x96 (150), 0x28A (650), 0x294 (660), 0x2E4 (740), 0x2EE (750), 0x3B6 (950) (H). M: the place the hero reports
  back to between chapters (L: the castle's throne room, the residents being rescued castle staff).
* **Size:** 138 functions (own ~80, F001 x16, lone shapes S2 S3 S4 S5 S9 x2 S10 x2 S17 S18 S65 S100 S116 S125 S138;
  P01-P03).
* **Actors:**
  * A1 0x8017F360, the main character: init 0x8017FA14 (model D_801AAEDC, shadow); when progress 0x2DA-0x2ED and var
    0x3B < 9 it runs 0x8017EFC4 at once and PlacePlayer(0, -0x82, -0x1F8, facing 0x800) (H: a forced scene on entry).
    0x8017FAFC StartEvent(D_801E91A8) when the player is free, or StartEvent(D_801E9528) for the forced scene (H).
    0x8017EFC4 picks the talk script (D_801E91D4) by progress and the story counter var 0x3B (H):
    progress 0x87-0xC7: var < 4 -> SetProgress(0x8C), var 4; 0x280-0x293: var 6, then 7; at 7, if the player holds
    item 0x64 (func_800D0F8C searches vars 0x2F-0x3A) it is removed, var 8, SetProgress(0x294); holding 0x63 / 0x65
    / 0x66 gives another line; 0x2DA-0x2ED: SetProgress(0x2E4), var 9; 0x3A2-0x3AB: var 0xA / 0xB; 0x3AC-0x3B5:
    SetProgress(0x3B6), var 0xCE = 1, var 0xC; >= 0x3F2: var 0xD (H). 0x8017F618 SetProgress(0x96), var 0x3B = 5;
    0x8017F658 / 0x8017F67C var 7 / 8 (H: script-answer handlers). 0x8017F4D0-0x8017F7B4 test vars 0x41-0x55 (H).
  * A2 0x80180540, residents: init 0x8017FFD0 (model per kind +0x70, SetScript x6, var D_80183A40[kind] state,
    MoveImage x2); talk text 0x8018057C, a 40-case switch by kind returning the message (H). Examples (H): kind 2
    takes item 0xB or 0xC, sets flag 0x83; others set flags 0x82, 0x85, 0x86, 0x87, 0x89, 0x9B, 0x1B, 0x1C, take
    item 0x28, test flag 0x99, spawn an actor (SpawnActorFromDef). Rewards: 0x801817F4 AddMaxBp + AddBp, 0x80181840
    ClearStatsWords + AddHp + AddBp, 0x80181894 AddBp, all with SoundRequest(0x45C) (H). 0x80181600: when vars
    0x3A + 0xD / 0x12 / 0x1B are all >= 3 and progress < 0x28A, SetProgress(0x28A); 0x80181688: vars 0x3A + 0xC /
    0x18 / 0x1F >= 3 -> SetProgress(0x2EE) (H). 0x80181380 picks a line from flags 0x16-0x1A (H). 0x8018144C moves an
    object (MoveObject, SoundRequest 0xBAE) (H).
* **Events / scripted scenes:** A1's talk scripts D_801E91A8 / D_801E9528 and the D_801E91D4 lines; RunScript branches
  D_801E91F0 / 9220 / 9240 / 9260 / 9178 (H).
* **Exits:** 0x8017FE78: after the talk, progress == 0x294 -> RequestMapChange(&D_80186388), else &D_80186364 (H);
  destinations unknown (data). The F001 menu is opened by A1 (0x8017F440 / 0x8017F464) (H).
* **Sound:** 0x45C rewards, 0xBAE; SoundCmd1 (S9) (H).
* **Unknown / notes:** what items 0xB, 0xC, 0x28, 0x63-0x66 are is data. Var 0x3B is a story counter only this
  stage writes in G1 (H for G1).

#### Names: SC01_009
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EFC4 | func_sc01_009_8017EFC4 | PickStoryTalk | progress x var 0x3B -> script, progress sets | H |
| 0x8017F360 | func_sc01_009_8017F360 | LordMain | ACTOR-MAIN of A1 (name L; "StoryNpcMain" if unsure) | L |
| 0x8017FA14 | func_sc01_009_8017FA14 | LordInit | model, forced scene, PlacePlayer | H |
| 0x8017FAFC | func_sc01_009_8017FAFC | LordStartTalk | StartEvent D_801E91A8 / D_801E9528 | H |
| 0x8017FB98 | func_sc01_009_8017FB98 | LordTalkBranch | UpdateScript -> RunScript x3 | H |
| 0x8017FD08 | func_sc01_009_8017FD08 | LordTalkEnd | EndEvent, TakePlayerControl | H |
| 0x8017FE78 | func_sc01_009_8017FE78 | LordExit | RequestMapChange by progress 0x294 | H |
| 0x8017F618 | func_sc01_009_8017F618 | LordSetProgress96 | SetProgress(0x96), var 0x3B 5 | H |
| 0x80180540 | func_sc01_009_80180540 | ResidentMain | ACTOR-MAIN of A2 | M |
| 0x8017FFD0 | func_sc01_009_8017FFD0 | ResidentInit | model by kind, scripts, var state | H |
| 0x8018057C | func_sc01_009_8018057C | ResidentTalkText | 40-case kind switch, items, flags | H |
| 0x80181600 | func_sc01_009_80181600 | CheckProgress28A | three vars >= 3 -> 0x28A | H |
| 0x80181688 | func_sc01_009_80181688 | CheckProgress2EE | three vars >= 3 -> 0x2EE | H |
| 0x801816FC | func_sc01_009_801816FC | GetResidentVar | GetVar(n + 0x3A) | H |
| 0x80181724 | func_sc01_009_80181724 | SetResidentState | SetVar(D_80183A40[n], v) | H |
| 0x80181380 | func_sc01_009_80181380 | PickFlagLine | flags 0x16-0x1A | M |
| 0x801817F4 | func_sc01_009_801817F4 | RewardMaxBp | AddMaxBp, AddBp, 0x45C | H |
| 0x80181840 | func_sc01_009_80181840 | RewardRestore | ClearStatsWords, AddHp, AddBp | H |
| 0x80181894 | func_sc01_009_80181894 | RewardBp | AddBp, 0x45C | H |
| 0x8018144C | func_sc01_009_8018144C | MoveResidentProp | MoveObject, sound 0xBAE | M |
About 30 more small own handlers not proposed.

### SC01_074
* **Place:** a transit map: Musashi rides along a straight line between two fixed points while a line actor draws
  the cable through his position (H: interpolation t / 800 between D_801821E0 and D_801821D8; A1 draws a segment, or
  two segments through the rider, with ProjectPointOtz) (M: a rope / cable slide; L: the castle's rope way). No
  progress sets; it tests 0x488 (1160), 0x384-0x3F1, 0xC8, 0x258, 10 (H).
* **Size:** 57 functions (own ~25, lone shapes S2 x7 S5 x2 S6 S14 S65 S75 S100 S116 x3 S125 S138; P01-P03; three
  PLAYER-ACTION-MAIN phases).
* **Actors:** A1 0x8017E020: the cable: 0x8017E07C draws from D_8019A8B0 to D_8019A8B8, bent through the rider when
  its +0xFC is set (H). A2 0x8017E4C8: a model prop (AllocActorModel) (H).
* **Events / scripted scenes:** Musashi's action phases (H):
  * ride: 0x8017D80C moves t up by +0x206 per frame to 0x316, 0x8017D98C places Musashi on the line and carries kinds
    0x195 and 0x285 with him, PlaySe(0xC25) at the end, 0x8017D918 clears kind 0x19C's +0xFC (H);
  * reverse: 0x8017D634 t -= 10 down to 0x6F, then RequestMapChange (D_80182074 when progress == 0x488, else
    D_80182008) (H); 0x8017D4D0 / 0x8017D528: SoundRequest 0xBE8 / 0xBE7 (H);
  * lift-off: 0x8017D1D8 EndScene, SetPlayerMotion, SetEffectAccel(0, 0x20000, 0), PlaySe(0xBCA); 0x8017D244 64
    frames later RequestMapChange(&D_8018202C) (H);
  * 0x8017D738 PlaySe(0xC26) at a start; S2 0x8017D8DC RequestMapChange(&D_80182050) (H).
* **Exits:** D_8018202C, D_80182050, D_80182074, D_80182008 (above); 0x8017CFC4 picks a record by progress
  (>= 0x384 / 0x258 / 0xC8 / else) (H). Destinations unknown (data). Three S116 entry walks (H).
* **Sound:** 0xBCA, 0xBE7, 0xBE8, 0xC25, 0xC26 (H).
* **Unknown / notes:** 0x8017E554 maps progress to a small number (10 -> 0x32, 0x488 -> 0x89, 0x384-0x3F1 -> 0x65,
  else 0xF / 0x10 by D_80078EAE) (H; meaning unknown, L: a lighting / sky setting).

#### Names: SC01_074
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017CFC4 | func_sc01_074_8017CFC4 | PickRecordByProgress | progress tiers -> record | H |
| 0x8017D98C | func_sc01_074_8017D98C | PlaceRiderOnCable | lerp t / 800, carry kinds 0x195 / 0x285 | H |
| 0x8017D80C | func_sc01_074_8017D80C | RideCableForward | t += speed to 0x316, PlaySe 0xC25 | H |
| 0x8017D634 | func_sc01_074_8017D634 | RideCableBack | t -= 10, RequestMapChange by progress | H |
| 0x8017D918 | func_sc01_074_8017D918 | RideArrive | kind 0x19C +0xFC = 0, kind 0x29A pos | M |
| 0x8017DB04 | func_sc01_074_8017DB04 | SpawnRideEffect | SpawnEffect at the rider | M |
| 0x8017D1D8 | func_sc01_074_8017D1D8 | LiftOffStart | SetEffectAccel up, PlaySe 0xBCA | H |
| 0x8017D244 | func_sc01_074_8017D244 | LiftOffRise | 64 frames, RequestMapChange | H |
| 0x8017D2F8 | func_sc01_074_8017D2F8 | AttachKind195 | kind 0x195 follows, y - 0x40 | H |
| 0x8017E020 | func_sc01_074_8017E020 | CableMain | ACTOR-MAIN of A1 | M |
| 0x8017E07C | func_sc01_074_8017E07C | DrawCable | one or two segments | H |
| 0x8017E158 | func_sc01_074_8017E158 | DrawCableSegment | ProjectPointOtz x4 | M |
| 0x8017E4C8 | func_sc01_074_8017E4C8 | PropMain | ACTOR-MAIN of A2 | M |
| 0x8017E554 | func_sc01_074_8017E554 | ProgressToSetting | progress -> 0x32 / 0x89 / 0x65 / 0xF / 0x10 | L |

### SC01_077
* **Place:** a large action field with enemies, switches / mechanisms and Musashi's scripted moves (H: 213 functions,
  ~25 actor kinds, F004 enemy family shared with SC02_000 / SC02_003, F010 / F011 projectiles, F005 shared with
  SC01_080). No progress values (H). M: an outdoor / dungeon field of the first chapter; exact place unknown.
  Entry here is partial (read under time limit).
* **Size:** 213 functions (own ~105; F004 x36, F005 x11, F006 x4, F007 x4, F008 x4, F009 x3, F010 x3, F011 x3,
  F012 x3; lone shapes S2-S64; P01-P03; 6 PLAYER-ACTION-MAIN dispatchers).
* **Actors (summary, M unless noted):**
  * A1 / A2 (0x8017BEBC, 0x8017C150): F009 effect owners (FreeEffect) (H).
  * F004 enemies (0x8017EF50-0x80183CF4): a ground enemy with wander / chase / attack (ActorSegmentDamagesPlayer),
    knock-back on TakeDamage, death effects (SpawnKind39Trio, SoundRequest 0x47B / 0x478), item drop (DropItem),
    calls kind 0x298 (FindActorByKind) and SoundRequest 0x436 / 0x6AA (H for the calls; see the F004 section).
  * 0x8018103C (own, 255 lines): the enemy's per-variant state code: variant = +0x70 >> 8 (0-7), SoundRequest 0x6A9
    with SpawnKind13 (H).
  * 0x8017F424 / 0x8017F460: a trigger actor: variant 4 counts hits in D_801270D4 against a per-variant threshold,
    other variants fire when the player's z is within D_8018A8F8; both call 0x8017F5BC and SoundRequest(0x495) (H)
    (M: a switch / sensor).
  * 0x80180258 group (0x80180294-0x801808DC): sound 0x401 / 0x485 / 0x487 / 0x48A and SoundRequest(0xD, 0x401)
    (a sound-driver command with an id, H) (M: a mechanism with a looping sound).
  * 0x80184908 group: SpawnActorArg(0x79), sounds 0x43E-0x440 (H). 0x801853EC: F011 (shooter: SpawnActor(0xBC),
    sound 0x43A / 0x6D6). 0x80185970: F007 (prop spawner). 0x801867E0: F005 (SpawnActor(0x24), sounds 0x49E / 0x4A2).
* **Events / scripted scenes:** six PLAYER-ACTION-MAIN phases with messages D_801B1720 / 17AC / 17F0 / 1848 / 19C0
  (OpenMessage) (H); 0x8017E298 turns Musashi to face 0x800, then if D_80078EC1 == 8 opens D_801B1720, else a camera
  move (0x8017D8DC) (H; M: a refusal line when an item / state is missing).
* **Exits:** one exit step (S3 0x8017DDE8) uses SoundCmd1(2) instead of 1 (H); no RequestMapChange in own code read.
* **Sound:** many effect ids (above); SoundRequest(4, 0x499) / (0x499, v | 0x1000) in 0x8017F114 (H).
* **Unknown / notes:** not all ~25 actor blocks were read; names below cover what was.

#### Names: SC01_077
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8018103C | func_sc01_077_8018103C | EnemyVariantStep | per-variant states, 0x6A9 + SpawnKind13 | M |
| 0x8017F424 | func_sc01_077_8017F424 | SensorMain | ACTOR-MAIN of the trigger | M |
| 0x8017F460 | func_sc01_077_8017F460 | SensorCheck | hit count or distance -> 0x8017F5BC, sound 0x495 | H |
| 0x8017E298 | func_sc01_077_8017E298 | ActTurnAndCheck | turn to 0x800, message or camera move | M |
| 0x8017DDE8 | func_sc01_077_8017DDE8 | RoomExitStepCmd2 | P01 exit with SoundCmd1(2) | H |
Many more own functions not proposed (time).

### SC01_080
* **Place:** a mechanism room: four F005 switch actors; when all four are worked, a large object descends from
  y 0x89F to 0 with the camera following, then the collision map is switched (H) (M: a lift / platform brought down by
  four switches). Shares F005 with SC01_077 (H). No progress values. Entry partial (time).
* **Size:** 144 functions (own 85, F005 x11, F006 x4, lone shapes S2 S3 x3 S5 S9 S10 S13 x3 S15 x2 S125 S138; P01-P03;
  3 PLAYER-ACTION-MAIN phases; ~17 actor blocks).
* **Actors:**
  * F005 switches (0x8017E0A4 ...): on first approach (DistSq < 0x4001) set kind 0x161's +0xFC = 1, +0xFE = 3 -
    index; then when Musashi is free and DistSq < 0x241, start the interaction (SoundRequest 0x49E + 0x4A2,
    StartActionTable); the part accelerates (0x400000), the model changes and D_801270C8 counts up; at 4,
    D_801270CC = 2 (H).
  * 0x8017F500, the descending object: 0x8017F638 waits for D_801270C8 >= 4, OpenHudPanel, SoundCmd1(0),
    SoundRequest(0x404), new model D_801AC738; 0x8017F8C0 lowers it 8 per frame, camera height / distance follow,
    sound 0x102 once, at 0: RelocateSeqBlockB, SelectCollisionMap(0), SoundRequest(4, 0x404) (stop, M) and 0x405,
    D_80127188 = 3 (H). 0x8017FB5C sound 0x102 (H).
  * 0x80181C68 spawner (0x80181D98): every 60 frames while Musashi is free, his y >= -0x500 and g_PlayerFlags bit
    0x8000000, SpawnActor(0x36); also SpawnActorArg(0x2C) (H).
  * 0x801826AC: 0x8018287C on timer: four segments test SegmentHitsPlayer (knock-back direction i << 10), sound
    0x4A7, SpawnActor(0x37), FreeActor (H) (M: a falling / exploding hazard). 0x80182990 SpawnActorArg(0x24).
  * 0x801832C0: 0x8018331C positional sound 0xB1C with volume / pan (H) (M: a looping machine sound).
* **Events / scripted scenes:** Musashi's action phases (OpenHudPanel / CloseHudPanel, EndAbility12, messages
  D_8018A6A8) (H).
* **Exits:** S3 exit step with SoundCmd1(2) (H); no RequestMapChange in own code read.
* **Sound:** 0x49E, 0x4A2, 0x404, 0x405, 0x102, 0x49F, 0x4A7, 0xB1C (H).

#### Names: SC01_080
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F638 | func_sc01_080_8017F638 | LiftWaitSwitches | D_801270C8 >= 4, HUD, sound 0x404 | H |
| 0x8017F8C0 | func_sc01_080_8017F8C0 | LiftDescend | y -= 8, camera, SelectCollisionMap(0) | H |
| 0x80181D98 | func_sc01_080_80181D98 | SpawnerStep | SpawnActor(0x36) every 60 frames | H |
| 0x8018287C | func_sc01_080_8018287C | HazardBurst | SegmentHitsPlayer x4, 0x4A7, SpawnActor(0x37) | H |
| 0x8018331C | func_sc01_080_8018331C | UpdateMachineSound | sound 0xB1C with vol / pan | M |
Many more own functions not proposed (time).

## Chapter 1: archive SC02

Progress about 2 (SC02_005) and 80-370.

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

### SC02_005
* **Place:** a **boss arena** with a long talk scene before the fight (H: SetupActor boss with HP table, ShowDamage,
  three HP phases; a dialogue chain of ~15 OpenMessage calls). Its second exit step **sets progress 2** and loads
  MAIN.CD file 1 (0x8017F194: FadeDone(4) -> SetProgress(2), func_8002AED0, RequestFieldFileLoad(1); H). L: the
  opening boss / demo fight that hands over to the prologue (progress 2 = prologue, brief).
* **Size:** 547 functions (own 402; shared: F017 x8, F018 x5, F019 x3, F016 x3, F006 x4 + S15 mesh, 52 lone shared
  shapes; P01 x2, P02; 10 stubs). 33 actor blocks.
* **Actors:**
  * **Boss** (set-up 0x801816FC, states from 0x80181984, damage/phase 0x80183218): SetupActor(D_80196150), HP at +0x76
    from table D_80195B24[phase] (D_801E4BBC = phase 0..2), mirrored in D_801E4398 for an HP bar (F017 0x8017BEE8 /
    0x8017BFF0) (H). Spawns its parts SpawnActor(0x4E), SpawnActor(0x42), SpawnActorArg(0x49) x2 and sends sound
    command 0x10 at set-up (H; L boss music). At half the phase's HP it changes attack set (states -0x15 / -0x17 via
    0x80186304) (H); at HP 0 it goes to state 8 and 0x8018592C advances the phase, refills HP, phase 1 -> sound
    command 0x11, phase 2 -> 0x8018AB84 (H). Attacks: ground pounds with StartCameraShake (0x801820E4, 0x80182E04),
    hit boxes (ActorSegmentHitsPlayer, HitBoxEdgesHitPlayer, SegmentHitsPlayer), thrown pieces SpawnActorArg(0x51,
    0x54, 0x56, 0x60), SpawnActor(0x5E) when Musashi stands in an x band, SpawnActor(0x75) + StartRumbleScript (H).
    Sounds 0x4EC-0x50F (H).
  * A2-A4 (0x80183D18, 0x8018431C, 0x80184D44): boss parts using MimeBlend / InitMime (soft-body blend) and its arms
    or head: own damage (ShowDamage 0x801853EC, 0x80185A04), PushPlayerOntoBox (stand-on part), sounds 0x4F2-0x50A (M).
  * A5-A7 (0x801889D4-0x801892CC): falling/rolling objects that hit Musashi (HitBoxEdgesHitPlayer, camera shake,
    sounds 0x4FC, 0x4F9, 0xA2D, 0xA2E) (H calls; M reading).
  * 0x8018D4D8-0x8018F2C4: cutscene props (SpawnFromDef, SeqBlock patches 0x8018F414-0x8018F704, debris
    0x8018EA04/0x8018EB60, SpawnActor(0x68), SpawnActorArg(0x63/0x64)) (M). 0x8018F72C-0x80190068: a light /
    colour controller (func_80028620 x3, random flicker) (M). 0x80190538: Musashi thrown and hurt by the boss
    (ApplyQueuedHurt, DamagePlayerHp, sound 0x451) (H).
  * A? F018 (0x80190144..0x80190408: an effect sprite), F019 (0x8018C2B0, 0x8018CE04, 0x8018CEE0: prop helpers).
* **Events / scripted scenes:** entry 0x8017F04C -> action 0x8017F428: unless the map record byte is set
  (func_800CF854), Musashi walks in and a long dialogue runs: OpenMessage D_80196FE8, D_8019718C, D_80197244,
  D_8019727C, D_801972DC, D_80197300, D_801973D8, D_80197540, D_80197570, D_801975AC, D_801975C8 with camera cuts
  (0x8017E0B4-0x8017E348 SelectCamera) and sound 0x510 (params 0x103F/0x107F/0x102F; SoundRequest(4,0x510) stops it,
  M) (H). The shared word D_801270C8 counts the scene's beats (3, 6-0x16) between Musashi's action and the boss;
  0x80180328 sets 0x16 = fight start (H values, M reading). After the fight (D_801270C8 0x1B-0x22) actions
  0x80180A7C / 0x80180C3C / 0x801812B4 run more messages (D_801975FC, D_80197628), sounds 0x10A, 0x10B, 0x50E (H).
* **Boss:** above. Three phases, HP from D_80195B24 (data); ends in state 8 of phase 2 -> D_801270C8 = 0x1F / 0x20 /
  0x22 (func_8002AB64) (H). No flag set in code (H).
* **Exits:** 0x80181570: RequestMapChange(D_80194370) at the end of the after-fight scene (H; destination unknown).
  Second exit sequence 0x8017F0C0: 20 frames, F016 exit (0x1C/0x1D, SoundCmd1(2), StartFade(4)), then progress 2 +
  RequestFieldFileLoad(1) (H). L: the game-over / retry path or the hand-over to the prologue.
* **Sound:** sound commands 0x10 / 0x11 (boss start, phase 2) and 8,2 / 5 in props; 0x510 scene loop (H).
* **Unknown / notes:** who the boss is (L); ~250 own helpers not read.

#### Names: SC02_005
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801816FC | func_sc02_005_801816FC | BossInit | SetupActor, HP table, spawns 0x4E/0x42, sound cmd 0x10 | H |
| 0x80181984 | func_sc02_005_80181984 | BossIdle | timer-driven switch over sub-steps, SpawnActor(0x5E) | M |
| 0x80183218 | func_sc02_005_80183218 | BossTakeDamage | HP -= +0x60, sound 0x4F3, HP 0 -> state 8 | H |
| 0x8018592C | func_sc02_005_8018592C | BossNextPhase | phase++, HP from D_80195B24, sound cmd 0x11 | H |
| 0x801853EC | func_sc02_005_801853EC | BossPartHurt | ShowDamage, sound 0x4F3 | M |
| 0x80186304 | func_sc02_005_80186304 | BossSetAnim | SetParamValues/SetScript pair, called by every state | M |
| 0x8017F194 | func_sc02_005_8017F194 | RoomExitResetProgress | FadeDone(4) -> SetProgress(2), RequestFieldFileLoad(1) | H |
| 0x8017F464 | func_sc02_005_8017F464 | EventIntroStart | skips to 0x80180380 when the record byte is set, else scene | H |
| 0x80180328 | func_sc02_005_80180328 | EventIntroEnd | D_801270C8 = 0x16, EndPlayerActionOf | H |
| 0x80181570 | func_sc02_005_80181570 | EventOutroExit | RequestMapChange(D_80194370) | H |
| 0x80190538 | func_sc02_005_80190538 | PlayerThrownByBoss | ApplyQueuedHurt, DamagePlayerHp, fall | M |
~390 more own functions not proposed.

### SC02_011
* **Place:** a large outdoor field with NPCs, talk events, a day/night-dependent actor and set pieces (H: F023 / F024
  / F025 talk code, S4 0x8017D370 picks one of two set-ups by the game clock D_80078E78+0x1A < 300 or >= 1320).
  Shared code sets **progress 0x5A (90)** (F023, when the talk flag is 0x54, also flag 0xEA) and **0x85 (133)** (F020,
  with flag 0x16; flags 0x17-0x1A on the other four cases) (H). Tests progress < 200 (0xC8) for one actor (H).
* **Size:** 521 functions (own 140; shared: F020 (52), F021 (35), F022 (15), F013 (15), F023 (12), F024 (11),
  F025 (10), F026/F027 (9), F028 (8), F029 (7), F030-F032/F035 (6), F033 (5), F008/F034 (4), F009-F011/F036-F039
  (3); 66 lone shared shapes; P01 x8 steps, P02 x2; 16 stubs). 40 actor blocks.
* **Actors:**
  * A1-A4: F024 / F036 (talk NPCs reading item vars GetVar(0x3A + i), one starts event D_80194818 when the map id is
    0x3028; sounds 0xBFE, 0x62E). A5: F025 + S4 (an NPC with two day/night set-ups, skipped once its flag
    D_80194B58[+0x70] is set; starts events D_80194B38, spawns 0x30 / 0x1F8; sounds 0x828/0x829). A33: F023 (talk NPC
    with a flag per index, talk marker, progress 0x5A). F020: Musashi's "got it" scene (flags 0x16-0x1A).
  * A11 (0x80182714-0x80182DB8): a **camera-steered object** driven by Musashi's pad (GetObjPadPressed, ratan2,
    BlendCameraFramesThen) (H calls; M: a control Musashi takes over, L: a vehicle or cannon).
  * 0x80182E68-0x80184A54: a **scripted set piece**: exists only while var 0xCD is set and flag 0x9E is clear (H);
    when Musashi enters a box (x -0x25D..-0x180, z 0x3C3..0x6E0) it takes control (TakePlayerControlNoStop), wakes
    actor 0xB0/0x881 and runs scripts D_80195198 (H); sounds 0x5CA, 0xB09; SpawnActor(0xBA); ends with SetFlag(0x9E)
    (0x80184858) (H). Flag 0x125 swaps its script (0x801849D4) (H).
  * A14/A15 (0x80184ACC, 0x80185120): helpers of that piece; A15 checks flag 0x9E, plays positional sounds (H).
  * A16 (0x801859E0): a trigger box (table D_801958F0) -> SoundCmd1(1) + StartEvent(D_80195910) (H).
  * A17/A18 (0x80185C40, 0x801863F4): F020-assisted scene actors; A18 starts event D_80195B5C (sounds 0x5EB, 0x426);
    0x80186868: a looping sound 0x646 with distance volume while var 0xCE is set (H).
  * A19 (0x80186AE0): absent once flag 0x16 is set, else SpawnActor(0x110) (H; L: the item the F020 scene gives).
  * A20-A23: SpawnActorArg(0x112); F027 / F039 / F030 effect and camera-blend actors; 0x80187838: FindActorByKind(0x11F)
    + SoundCmd1(1).
  * A25 (0x80189B28): a **tall object that tips over**: unless flag 0x9F is set, it rotates to 90 degrees (+0x10 to
    0x400) while moving, falls, and on landing StartCameraShake + **SetFlag(0x9F)** + sound 0x61C (H). L: a felled
    tree forming a bridge.
  * F021 (35 shapes): an enemy kind (TickTimer, chase DistSqToTarget / TurnStepToTarget, SetForwardVelocity) (M).
    F028: an enemy that hurts by touch (ActorSegmentDamagesPlayer, SpawnActorArg(0x125)). F031: a talk NPC
    (SpawnTalkMarker, SpawnActorArg(0x1E3)).
* **Events / scripted scenes:** above (D_80194818, D_80194B38, D_80195910, D_80195B5C, F020 scenes). 8 P01 steps
  (4 sequences); one exit step uses SoundCmd1(1), another only 0x1C/0x1D (H).
* **Puzzles / mechanisms:** flags 0x9E (set piece done), 0x9F (object felled), 0x125 (H).
* **Exits:** no RequestMapChange in own code (H); exits are the P01 exit steps / data records.
* **Sound:** SoundCmd1(1) at several triggers (L music change); 0x646 loop; 0x61C crash (H).

#### Names: SC02_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80182E68 | func_sc02_011_80182E68 | SetPieceInit | RejectSpawn unless var 0xCD set and flag 0x9E clear | H |
| 0x80183080 | func_sc02_011_80183080 | SetPieceWaitPlayer | position box test, TakePlayerControlNoStop, wakes actor 0xB0 | H |
| 0x80184858 | func_sc02_011_80184858 | SetPieceDone | SetFlag(0x9E, 1) | H |
| 0x801849D4 | func_sc02_011_801849D4 | CheckFlag125Script | flag 0x125 -> SetScript, clear flag | H |
| 0x80185AAC | func_sc02_011_80185AAC | TriggerBoxWait | box test from D_801958F0, then 0x80185BA4 | H |
| 0x80185BA4 | func_sc02_011_80185BA4 | TriggerBoxStartEvent | SoundCmd1(1), StartEvent(D_80195910) | H |
| 0x80186C30 | func_sc02_011_80186C30 | ItemActorInit | absent once flag 0x16 set | M |
| 0x80186868 | func_sc02_011_80186868 | LoopSoundByDistance | sound 0x646 volume from distance, var 0xCE | M |
| 0x80189B64 | func_sc02_011_80189B64 | TopplingInit | GetFlag(0x9F) | M |
| 0x80189E00 | func_sc02_011_80189E00 | TopplingFall | tip to 0x400, fall, SetFlag(0x9F), shake, sound 0x61C | H |
| 0x80182714 | func_sc02_011_80182714 | SteeredObjectControl | pad-driven heading, camera | M |
~125 more own functions not proposed.

### SC02_015
* **Place:** a small room with **dripping water** (drops spawned at random points fall and splash, sound 0x572) and
  a looping ambient sound 0x574 stopped at both exits (H); one NPC/object exists only at **progress 0xE6-0xEF
  (230-239)** (H: 0x8017E148). Shares F040 with SC02_021 (same camera and drip code). L: a cave or well interior.
* **Size:** 45 functions (own 4; shared: F040 (8), F009 (3), 11 lone shared shapes; P01 x3 sequences, P02, P03).
* **Actors:**
  * A1/A2: S27 / F009 effects. A3 (0x8017D7A4): a screen-projected sprite (F040 0x8017D878, ProjectPoint) (M).
  * A4 (0x8017D988, F040 0x8017D9E4): **drip spawner**: on a random timer (0x60-0xDF frames) SpawnPropAt(0x27) at its
    point, scattered by up to +-352 / +-256 when +0xDC is set (H).
  * A5 (0x8017DB0C, F040 0x8017DB60): the drop: falls (+0xC000 per frame), at its floor height spawns splash
    prop 0x28 and sound 0x572, frees itself (H).
  * A6 (0x8017DE44): ripple/prop animation; F040 0x8017DFF8 sends sound command 0x1F (H).
  * A7 (0x8017E060, set-up 0x8017E148): an object placed at D_80181DBC with script D_8018B074, only when progress is
    0xE6..0xEF (H). 0x8017E09C starts its event D_80181DD4 when Musashi's flag 0x08000000 is set and his x < 0x90 (H);
    0x8017E0E8 ends the event and resets it (H). L: an NPC met at that story point.
* **Events / scripted scenes:** event D_80181DD4 (above). Camera: F040 0x8017D468/0x8017D53C, focus clamped to
  y -0x570..-0x3C0, z >= -0x60 (H).
* **Exits:** P01 exits 0x8017D294 (SoundCmd1(1)) and 0x8017D384 (func_800D0C74 instead), both also send
  SoundRequest(4, 0x574) and sound command 0x20 (H); destinations data.
* **Sound:** 0x572 splash, 0x574 ambient loop, commands 0x1F / 0x20 (H).

#### Names: SC02_015
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D294 | func_sc02_015_8017D294 | RoomExitStep | P01 exit + stop 0x574, command 0x20, SoundCmd1(1) | H |
| 0x8017D384 | func_sc02_015_8017D384 | RoomExitStepB | same with func_800D0C74 | H |
| 0x8017E034 | func_sc02_015_8017E034 | EventNpcStart | StartEvent(D_80181DD4), state 2 | H |
| 0x8017E09C | func_sc02_015_8017E09C | NpcWaitPlayer | player flag 0x08000000 and x < 0x90 -> event | H |
| 0x8017E148 | func_sc02_015_8017E148 | NpcInit | only at progress 0xE6..0xEF; PlaceObject, SetScript | H |

### SC02_016
* **Place:** a **vertical area with moving platforms**: two ambient loops 0x579 / 0x57A are cross-faded by Musashi's
  height (y -0x480 .. -0xE0) and lifts move between two heights (H: 0x8017F4DC, 0x8017F78C). Talk NPCs (F024) and a
  rescued-NPC talk (F023: **sets progress 0x5A (90)**, flag 0xEA) (H). L: a climb inside Steamwood.
* **Size:** 175 functions (own 35; shared: F013 (15), F023 (12), F024 (11), F041 (11), F026/F042 (9), F009-F011/F035
  (3), 30 lone shared shapes; P01 x2 dispatch, P02 x2, P03).
* **Actors:**
  * A1-A3: F024 talk NPCs (vars 0x3A+, event D_80187F50 at map 0x3028, sounds 0xBFE/0x62E). A4/A5: F013 effects.
  * **Lift** (set-up 0x8017F6A4, move 0x8017F78C): a platform model with a prop 0x2A rider; it accelerates up to
    height +0xDE and down to +0xDC (speed +-0x80000, step 0x8000), reversing at each end (0x8017F154) (H).
    0x8017F33C: its motor sound 0x6DF with distance volume, stopped with SoundRequest(4, 0x6DF) (H).
  * A ambient (0x8017F4A0, 0x8017F4DC): starts loop 0x578, then sets 0x579/0x57A volumes from Musashi's y (H).
  * Enemy (0x80180154-0x80181FB8, own + F042): sound 0x6A9 + SpawnKind13 on appear, 0x6AA, 0x660 (H); the same
    sound pair as the F004-variant creature of SC02_000 (M: same enemy kind, separate code).
  * F041 (0x80182224-0x80182874): Musashi knocked down / hurt effect (CollidePlayerMove, sounds 0x92F, 0x930, 0x451).
  * F023 NPC (0x801832B8). 0x801837AC: F011 effect (SpawnActor(0xBC), sound 0x5BF). F010 (SpawnActor(0x85)).
* **Events / scripted scenes:** F023 / F024 talks only (H).
* **Exits:** P01 exit 0x8017EC70 also stops loops 0x578, 0x579, 0x57A (SoundRequest(4, id)) (H); data destinations.
* **Sound:** ambient 0x578-0x57A, lift 0x6DF (H).

#### Names: SC02_016
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EC70 | func_sc02_016_8017EC70 | RoomExitStep | P01 exit + stop 0x578/0x579/0x57A | H |
| 0x8017F33C | func_sc02_016_8017F33C | LiftMotorSound | sound 0x6DF, volume from distance | M |
| 0x8017F4DC | func_sc02_016_8017F4DC | AmbienceByHeight | 0x579/0x57A volumes from Musashi's y | H |
| 0x8017F6A4 | func_sc02_016_8017F6A4 | LiftInit | model, SetScriptCopy, rider prop 0x2A | H |
| 0x8017F78C | func_sc02_016_8017F78C | LiftMove | eased travel between +0xDC and +0xDE | H |
| 0x80180BD8 | func_sc02_016_80180BD8 | CreatureAppear | SpawnKind13, sound 0x6A9 | M |
~28 more own functions not proposed.

### SC02_017
* **Place:** a story field with progress-gated NPCs and events: **sets progress 0x50 (80)** (0x801839A8) and
  **0x10E (270)** (0x801833FC); tests progress < 0x50, < 0xC8 (200), >= 0x104 (260), >= 0x10E (H). F023 also sets
  0x5A (90) (H). It is visited at least twice in the story (M). L: the forest entrance / Steamwood outskirts.
* **Size:** 362 functions (own 114; shared: F043 (17), F013 (15), F023 (13), F044 (12), F024 (11), F026/F042 (9),
  F028 (8), F030 (6), F033 (5), F008/F034 (4), F009-F011/F035-F037/F039 (3), 54 lone shared shapes; P01 x13).
* **Actors:**
  * F024 talk NPCs (event D_8018DFA8 at map 0x3028); F023 rescued-NPC talk; F013 effects; F042 + own 0x80186770:
    the creature with sounds 0x6A9 / 0x6AA / 0x660 and SpawnKind13 (as in SC02_016); F043 / F044 (0x80184B18..):
    an enemy group (sounds 0x51F/0x520 by distance, 0x521, 0xAA1) (M); F028 touch-damage enemy (SpawnActorArg(0x125)).
  * NPC A (set-up 0x80183C6C): talk marker, only **before progress 0x50** (H). 0x801839A8 (its scene end):
    SpawnActorArg(0x121, 0..3), func_800D0F4C(0x4E / 0x50 / 0x51 / 0x52), **SetProgress(0x50)** (H). Sound command
    0x12 with script D_8018EE50 (0x80183940), 0x13 (0x80183B9C) (H). 0x80183984 tests flag 0xE8 (H).
  * NPC B (0x80183330): only at **progress >= 0x104**; within 0x190 it starts event D_8018E9E4 (before 0x10E) or
    D_8018EAA0 (after), and the first one **sets progress 0x10E** (H).
  * **Multi-hit object** (0x8017FB60-0x80180610): one var per index (D_8018E204[+0x70 & 0xF]) counts its stage 0->1->2->3
    as Musashi hits it (sounds 0x59D, 0x59E, 0x5C1, 0x5A6, 0x5A7; SpawnActorArg(0xAF), 0x101 x2; scripts D_8018E214,
    D_8018E2E0) (H calls; M reading).
  * **Falling object** (0x80181118-0x80181594): unless flag 0xA0, it drops; on landing StartCameraShake, **SetFlag(0xA0)**,
    sound 0xBA1 (H); event D_8018E410 (0x801811D0); sound 0xBA0. 0x801819B0: SpawnActor(0xB4), SpawnActorArg(0xB5).
  * Flag pair 0x96 / 0x97: 0x80183AD0 sets 0x96 (+SetSkipSe(0x430)); 0x8017F600 sets 0x97; an actor at 0x80182558 reacts
    to a hit (+0x74) only when both are set (sound 0x433, StartActionTable) (H). 0x80182468: an object present before
    progress 0xC8 that spawns 0x118 (H).
  * 0x801842E0: a looping sound 0x5E5 with volume, stopped by SoundRequest(4, 0x5E5) (H). 0x80184474: SpawnActor(0xF3),
    SpawnActorArg(0xFC) x2.
* **Exits:** Musashi's action 0x8017F3B0 walks a step table (D_8018E19A): entry 1 = RequestMapChange(D_8018E0B8),
  with StartRumbleScript (H). P01 exits with SoundCmd1(1) (two) or without (one) (H).
* **Sound:** commands 0x12, 0x13 (L: music cues) (H).

#### Names: SC02_017
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F3B0 | func_sc02_017_8017F3B0 | EventExitWalk | step table, RequestMapChange(D_8018E0B8) | H |
| 0x8017F600 | func_sc02_017_8017F600 | EventSetFlag97 | BeginScene, SetFlag(0x97) | H |
| 0x80183330 | func_sc02_017_80183330 | NpcBInit | only at progress >= 0x104 | H |
| 0x8018337C | func_sc02_017_8018337C | NpcBWaitTalk | distance 0x190, event by progress 0x10E | H |
| 0x801833FC | func_sc02_017_801833FC | NpcBEventEnd | EndEvent, SetProgress(0x10E) | H |
| 0x80183C6C | func_sc02_017_80183C6C | NpcAInit | only before progress 0x50; talk marker | H |
| 0x801839A8 | func_sc02_017_801839A8 | EventSetProgress50 | SpawnActorArg(0x121) x4, SetProgress(0x50) | H |
| 0x80183AD0 | func_sc02_017_80183AD0 | SetFlag96 | SetFlag(0x96), SetSkipSe(0x430) | H |
| 0x80182558 | func_sc02_017_80182558 | GateWaitHit | flags 0x96/0x97 + hit -> sound 0x433 | M |
| 0x80181118 | func_sc02_017_80181118 | DropObjectInit | flag 0xA0 picks fallen / waiting | H |
| 0x80181594 | func_sc02_017_80181594 | DropObjectLand | MoveCollideAt, shake, SetFlag(0xA0), sound 0xBA1 | H |
| 0x8017FCFC | func_sc02_017_8017FCFC | MultiHitStep | var per index, sound 0x59D, SetVar 1 | M |
| 0x80180084 | func_sc02_017_80180084 | MultiHitBreak | SetVar 2, sounds 0x5C1/0x5A6/0x5A7 | M |
~100 more own functions not proposed.

### SC02_021
* **Place:** a sister room of SC02_015 (same F040 drip / camera code, same ambient loop 0x574 and exit steps) with
  **moving hazard bands that hurt Musashi** and an NPC whose scenes follow the story: progress bands 0xF0 / 0xFA /
  0x104 / 0x10E / 0x118 (240-280) (H). **Sets progress 0xFA (250), 0x104 (260), 0x118 (280)** (H, script callbacks).
* **Size:** 69 functions (own 24; shared: F040 (8), F009 (3), 13 lone shared shapes; P01 x3, P02, P03).
* **Actors:**
  * A1/A2: effects (S27, F009). A3: F040 camera sprite; drip spawner / drop / ripple as SC02_015 (sounds 0x572, 0x1F).
  * **Hazard** (A? 0x8017D7E0, set-up 0x8017D81C, update 0x8017D980): two bands (tables D_80192CE0, D_80192D04)
    whose ends advance by 0x20 per frame and wrap (-0x680/-0xF01, -0x708/-0xF89) at fixed x/z; when a band's test
    (0x8017E4DC) hits Musashi: g_PlayerHitDamage = 0x14 and hit kind |= 0x400 (H). Draw 0x8017DC10 (152 lines);
    sound 0x574 loop on / off (H). M: flowing streams or falling sheets; L: hot water / steam.
  * **NPC** (0x8017E8CC, 0x8017EB00 / 0x8017F0C4 set-ups): present only at progress 0xF0..0x117 (H); placement and
    model by band; 0x8017ECFC starts event D_801836A4 (0xF0..), D_801836EC (0xFA..), D_8018371C / D_8018385C
    (0x104..0x117) (H); 0x8017EB00 also tests flag 0xFA (H).
  * Script callbacks (0x8017EDE8 block): 0x8017EE24 RunScript(D_80183884); 0x8017EE68 stores the game clock
    (func_800291F0(0, D_80078EAC*0x5A0 + D_80078EB1*0x3C + D_80078EB0)) and **SetProgress(0x104)**; 0x8017EED8
    **SetProgress(0xFA)**; 0x8017EEF8 **SetProgress(0x118)** + flags 0xF9 = 1, 0xFA = 0, 0x109 = 1; 0x8017EF3C
    SetProgress(0x118) + flags 0xF9 = 0, 0xFA = 1 + a talk marker (H). M: two endings of a choice in the event.
  * 0x8017F1B4: talk trigger within sqrt(0x4000) = 128 units -> ResetScriptVM, CallActionHandler (H).
* **Events / scripted scenes:** above. **Exits:** P01 exits as SC02_015 (stop 0x574, command 0x20) (H).
* **Sound:** 0x574 loop, 0x572 splash, commands 0x1F / 0x20 (H).

#### Names: SC02_021
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D81C | func_sc02_021_8017D81C | HazardBandsInit | sets the two band tables | H |
| 0x8017D980 | func_sc02_021_8017D980 | HazardBandsUpdate | advance/wrap, hit -> damage 0x14 | H |
| 0x8017DC10 | func_sc02_021_8017DC10 | DrawHazardBand | 152-line draw of one band | M |
| 0x8017E4DC | func_sc02_021_8017E4DC | HazardBandHitsPlayer | returns hit for the damage set | M |
| 0x8017EB00 | func_sc02_021_8017EB00 | StoryNpcInit | progress band switch, flag 0xFA | H |
| 0x8017ECFC | func_sc02_021_8017ECFC | StoryNpcStartEvent | event per progress band | H |
| 0x8017EE68 | func_sc02_021_8017EE68 | EventSetProgress104 | stores clock, SetProgress(0x104) | H |
| 0x8017EED8 | func_sc02_021_8017EED8 | EventSetProgressFA | SetProgress(0xFA) | H |
| 0x8017EEF8 | func_sc02_021_8017EEF8 | EventSetProgress118A | SetProgress(0x118), flags 0xF9/0x109 | H |
| 0x8017EF3C | func_sc02_021_8017EF3C | EventSetProgress118B | SetProgress(0x118), flag 0xFA, talk marker | H |
| 0x8017F0C4 | func_sc02_021_8017F0C4 | StoryNpc2Init | present at progress 0xF0..0x117 | H |
| 0x8017F1B4 | func_sc02_021_8017F1B4 | StoryNpcTalkCheck | distance 128 -> CallActionHandler | H |

### SC02_026
* **Place:** a room built almost entirely from the shared SC02_026-028 / SC03_089-104 families (F045-F051, owned by
  another helper; L: the mine / dungeon set), plus zone-based camera code (H). F023 sets progress 0x5A (90) here (H:
  progress.txt; the F023 instance is the rescue NPC).
* **Size:** 204 functions (own 5; shared: F045 (39), F046 (35), F047 (26), F048 (21), F023 (12), F049 (6), F050 (5),
  F035/F036/F051 (3), 17 lone shared shapes; P01 x6 steps, P02, P03; 10 stubs). 11 actor blocks.
* **Actors:** all shared: F045-F051 (see their owner), F023 rescue NPC, F036 effects; flagged objects (S2 0x8017DA5C
  GetFlag / SetFlag table D_801A429C, SpawnActorArg(0x150), SpawnActor(0x153), SpawnActorArg(0x12F, 0x164),
  SpawnActor(0x1C4); sounds 0x64A-0x652, 0xBA2, 0x679, 0x703, 0xA65) (H: digest k-lines; owners describe them).
* **Events / scripted scenes:** none in own code. Camera: 0x8017D508 picks camera distance / angle by which box the
  camera focus is in (three boxes) and the L/R-style buttons (pad & 3) toggle between two distances (table
  D_80189BEC); 0x8017D6D0 the same around a fixed point (0x400, 0xE20) (H). 0x8017D948 / 0x8017D9D8: Musashi's
  distance to a point within a ring (0x10000..0x19000) / beyond 0x8FFFF (H).
* **Exits:** P01 exits (one with SoundCmd1(1), one without); 0x8017D160 waits FadeDone(3) (fade kind 3, H).

#### Names: SC02_026
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D160 | func_sc02_026_8017D160 | FadeDone3 | FadeDone(3) | H |
| 0x8017D508 | func_sc02_026_8017D508 | CameraZoneUpdate | focus boxes set camera params, pad & 3 toggles distance | H |
| 0x8017D6D0 | func_sc02_026_8017D6D0 | CameraFixedPointUpdate | same around (0x400, 0xE20) | H |
| 0x8017D948 | func_sc02_026_8017D948 | PlayerInRing | distance between 0x10000 and 0x19000 | H |
| 0x8017D9D8 | func_sc02_026_8017D9D8 | PlayerFarFrom | distance > 0x8FFFF | H |

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

Engine-side helpers seen in village stages (ovl36, H from its code and comments): func_800D06E8 = per-frame map music /
ambient state (picks the map's track; in village maps 0x1010-0x1011 / 0x1077-0x1078 / 0x1094-0x1095 starts sound
0x517 / 0x518 by the time-of-day period) -> "UpdateMapMusic" (M); func_800D06CC = restart that state; func_800D0CA0(a)
= SoundCmd1(a) + restart; func_800D0CE0 = wait until the progress-chosen track is ready (M).

### SC03_002
* **Place:** a village version (shares 95 shapes with the hub: F068 house doors / villager helpers, F072, F007; H).
  Story placement: the opening village visit. Sets progress 0x14 (20) together with flag 0xE1 and word var 10 = 0x1011
  (func_8017E8B0, only while progress < 0x14, flag 0xDF set and var(10) bit 0x40) (H; 0x1011 looks like a village map id,
  M); sets progress 0x87 (135) at the end of a villager scene (func_80181BCC, H); F068 0x3A2 -> 0x3AC (H). Progress
  0x85-0x86 (133-134) is a special band: music restart (F073 func_8017EAE8), several villagers absent / present only
  then (H). Things freed at progress >= 0x492 (1170) (F073, H): so the image serves the village up to late in the game
  (M).
* **Size:** 260 functions (own 38 + dup 2, stubs 20, 27 dispatchers, S 47; F068 67, F073 29, F025 10, F007 4, F072 4,
  F036 3; P01, P02, three PLAYER-ACTION-MAIN).
* **Actors:**
  * A1-A2: F036 (other group). A3-A4: F068 point-list spawner / props.
  * A5 (0x8017CF30): F025 (other group: item / reward handler with StartEventKeepPlayer, sounds 0x828 / 0x829,
    SpawnActorArg 0x30 / 0x1F8, flag table D_8018926C).
  * Hazard (func_8017E4E4, S2): within 0x200 of Musashi spawns prop 0x22 every other frame, hurts him on segment contact
    (g_PlayerHitDamage = 0xC), plays sound 0x644 with volume by distance, stops it with SoundRequest(4, 0x644) (H).
    L: a fire / steam vent.
  * A6 (0x8017E6CC): model launched forward (velocity 0xC0000), absent once var 0xCD is set (func_8017E7FC, H).
  * Opening-visit walker (func_8017E8B0, own): appears at Musashi's position at heading 0xF00, walks off; its set-up is
    what sets progress 0x14 / flag 0xE1 (H). M: a character met on the first visit.
  * A7-A12: F073 (this group): sky / line effect between two points (func_8017EBD0 / func_8017EC98), debris props
    (func_8017F068 / func_8017F304), a model present for progress >= 0x3B6 except 0x460-0x487 (func_8017F500).
  * A13 (0x8017FAE8) F073: talk NPC absent when flag 0xF0 set; script by var 0x40 (set to 2) (H).
  * A14-A15 villagers (own + F073 + F068): func_801816F0 schedule set-up with two talk markers; A15 talk before / after
    progress 0x82 (130) (func_80181844 / func_80181A64), both loading stage extra file 3 (H). func_80181BCC: loads
    extra file 3, runs script D_80189ADC, waits for flag 0x10A, turns to heading 0x1E0, then sets progress 0x87 and
    SoundCmd1-restart (func_800D0CA0(1)), waits for the track, ends the event (H).
  * A16 (0x80181D3C): scripted walker: waits, walks toward D_80189CEC, idles with random scripts every 180-211 frames,
    reacts when +0x102 is set by script (H). M: a villager in a scene.
  * A17 (0x8018225C): present only at progress 0x85-0x86, spawns kind 0x266 and calls func_8014CB68; helpers track
    kind 0x266; sound 0x525 (H).
  * A18-A19 F073: a spinning model (random spin-up / spin-down, gone at progress >= 0x492) and a model that spawns
    kind 0x3BF (H; L: windmill sails).
  * Trigger actor (func_80182964 / func_801828C0, own): only at progress == 0x14 and flag 0x10B clear; when
    g_PlayerFlags bit 0x08000000 is set starts event D_80189D4C, then sets flag 0x10B and frees itself (H).
  * A20 onwards: F068 doors (sounds 0x514 / 0x515, map 0x3069 test), F072 door texts, F007 particles, S6 kind-0x21
    spawner, A26 S20 talk NPC (script table D_801C2E38), F068 key gate (flag 0xF6, sound 0x7A0).
* **Events / scripted scenes:** a PLAYER-ACTION scene (func_80180290 .. func_80180710): BeginScene, an object moves
  for +0x200 frames, then camera shake, six debris props and six F073 props, sound 0x842 (func_80180378, H; M: a crash
  or explosion). func_801805B0 puts kind 0x19C above it (H). Event D_80189D4C (flag 0x10B) at progress 0x14.
* **Exits:** P01 exit steps as the hub (incl. the var-0xCE SoundCmd1 variant); no RequestMapChange in stage code.
* **Sound:** 0x644 (hazard), 0x842 (scene), 0x525, 0x514 / 0x515 doors, 0x7A0 gate.
* **Unknown / notes:** three own camera set-ups (func_80180770 S8, func_80180834, func_801808F8) and an own camera
  mode func_80180A38 (H: SetCameraUpdate / SnapCamera). Calls into extra files at 0x801CBB54 / 0x801CBBDC (H).

#### Names: SC03_002
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E8B0 | func_sc03_002_8017E8B0 | FirstVisitWalkerInit | progress < 0x14 + flag 0xDF; sets progress 0x14, flag 0xE1 | H |
| 0x8017EA28 | func_sc03_002_8017EA28 | FirstVisitWalkerStep | timer state of the walker | L |
| 0x80180014 | func_sc03_002_80180014 | RoomRestartMusic | func_800D06CC only | M |
| 0x80180290 | func_sc03_002_80180290 | SceneCrashEnd | EndScene, player motion | M |
| 0x801802F4 | func_sc03_002_801802F4 | SceneCrashFall | MoveEffect, effect spawn | M |
| 0x80180378 | func_sc03_002_80180378 | SceneCrashImpact | camera shake, debris, sound 0x842 | H |
| 0x80180570 | func_sc03_002_80180570 | SceneCrashBegin | BeginScene + place | H |
| 0x801805B0 | func_sc03_002_801805B0 | PlaceMarker19C | moves kind 0x19C above the object | H |
| 0x80180710 | func_sc03_002_80180710 | SceneWaitTrack | func_800D0CE0 then next handler | M |
| 0x80180834 | func_sc03_002_80180834 | RoomInitCameraB | SetCameraUpdate + SnapCamera | H |
| 0x801808F8 | func_sc03_002_801808F8 | RoomInitCameraC | same, other parameters | H |
| 0x80180A38 | func_sc03_002_80180A38 | CameraModeScene | camera mode calling S9 transform | M |
| 0x801813E4 | func_sc03_002_801813E4 | Villager14Talk | DistSqToPlayer + ResetScriptVM talk handler | M |
| 0x801815AC | func_sc03_002_801815AC | Villager14Walk | path steps, door open | M |
| 0x801816F0 | func_sc03_002_801816F0 | Villager14Init | progress, two talk markers | M |
| 0x80181844 | func_sc03_002_80181844 | Villager15TalkEarly | script before progress 0x82 | H |
| 0x80181A64 | func_sc03_002_80181A64 | Villager15TalkLate | extra file 3, script after 0x82 | H |
| 0x80181BCC | func_sc03_002_80181BCC | EventSetProgress87 | flag 0x10A wait, SetProgress(0x87) | H |
| 0x80181D78 | func_sc03_002_80181D78 | SceneWalkerUpdate | walk to point, idle scripts | M |
| 0x801821B4 | func_sc03_002_801821B4 | SpawnWalkerDust | SpawnPropFrom at rcos/rsin offset | M |
| 0x8018235C | func_sc03_002_8018235C | Visitor266Init | progress 0x85-0x86, spawns kind 0x266 | H |
| 0x801822F8 | func_sc03_002_801822F8 | PlaySound525 | SoundRequest(0x525) | H |
| 0x80182964 | func_sc03_002_80182964 | FlagEventInit | progress 0x14 and flag 0x10B clear | H |
| 0x801828C0 | func_sc03_002_801828C0 | FlagEventRun | event D_80189D4C, SetFlag(0x10B) | H |

n more own functions not proposed: about 12 (small state glue).

### SC03_003
* **Place:** a small room with a scripted Musashi sequence and a button exit; no progress values (H). F074 is shared
  with sc03_126 / sc04_021 / sc05_019 (the identical-code trio), so it is one of a set of similar small rooms (M).
  L: a well / pit or a lookout reached from the village.
* **Size:** 55 functions (own 5, stubs 5, S 10, 2 dispatchers; F074 19, F006 4; P01, P02, P03, three PLAYER-ACTION-MAIN).
* **Actors:** A1 (0x8017BEBC): F074 effect sprite (AllocSprite16To3E, timer) + S8 effect tick. F006 (other group) and
  an S15 chunked mesh draw (0x8017C6F4) with the P03 renderer. A2 (0x8017F1A0): F074 **exit trigger**: when the pad
  button 0x800 is pressed and func_800CF8B4 allows, sets D_8018FB78 = 1 and RequestMapChange(+0xDC record) (H).
* **Events / scripted scenes:** Musashi action script: falls (AddFallSpeedLimited 0x1A000) until landing, BeginScene
  (func_8017ED44); when within 0x190 of the point (F074 func_8017EC64) opens message D_801830B0 with motion and sound
  0x7E7, then two more messages D_801830D8, D_8018310C on answers, then closes and continues (H). All skipped once the
  exit flag D_8018FB78 is set (H).
* **Exits:** two P01-style exit steps (S100, sound 0x1C/0x1D, SoundCmd1(1)); the button exit RequestMapChange
  (destination data, unknown).
* **Sound:** 0x7E7 at the first message.

#### Names: SC03_003
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EA10 | func_sc03_003_8017EA10 | ActionLookMessage1 | distance < 0x190, OpenMessage, PlaySe 0x7E7 | H |
| 0x8017EADC | func_sc03_003_8017EADC | ActionLookMessage2 | answer -> next message | H |
| 0x8017EB6C | func_sc03_003_8017EB6C | ActionLookMessage3 | answer -> next message | H |
| 0x8017EBF4 | func_sc03_003_8017EBF4 | ActionLookMessageEnd | close, next handler | H |
| 0x8017ED44 | func_sc03_003_8017ED44 | ActionFallLand | fall until ground, BeginScene | H |

### SC03_006
* **Place:** a large field with enemies, treasure-like flag holders and a big moving set-piece; day lighting runs
  (UpdateDayLighting, UpdateMapMusic) so it is an outdoor map (M). Sets progress 0x5A (90) and flag 0xEA when the
  flag-holder whose flag is 0x54 is collected (func_80187060, H). Tests boss flag 0x8B (H), progress 0x20, 0x70, 200,
  0x138, 0x4B0 (H). One function tests map id 0x3028 (H), so this image may serve more than one map (M).
* **Size:** 393 functions (own 58 + dup 4, stubs 13, 24 dispatchers, S 56; families 222: F021 35, F075 30, F043 17,
  F076 16, F013 15, F056 15, F023 12, F044 12, F024 11, F025 10, F003 8, F028 8, F030 6, F032 6, F008 4, F034 4,
  F077 4, F009 3, F035 3, F037 3; P01 x10, P02, five PLAYER-ACTION-MAIN).
* **Actors:**
  * F025 item / reward handler (flag table D_80190450, sounds 0x828 / 0x829) and F021 / F013 / F023 / F024 / F043 /
    F044 / F056 (other groups).
  * Flag holders (0x80186F14 .. 0x80187180, own): pick a script by whether flag 0x1D is set and the holder's +8 bits,
    set a flag from table D_801C9634 / D_801C94EC; flag 0x54 -> progress 0x5A + flag 0xEA; with flag 0x1D calls
    UploadFlagImages(0); a full set calls func_8002AC00(0x26) (H). M: collectibles / chests whose contents are data.
  * Set-piece (A at 0x80182290, func_801822CC / func_801823B8, own): near Musashi starts event D_80190C14 (boss flag
    0x8B clear) or D_80190C24 (set) (H); then, if flag 0x121 is clear and GetStatsByteC0() matches, waits for a
    player action (HUD panel opened, GetPlayerByte1C7 == 3), plays sound 0xB11, sets flag 0x121, SoundCmd1-restart (H).
    The room frame func_80182A44 then draws a large own mesh (func_8017F510, 586 lines) that moves by up to 0x71
    steps with repeated camera shakes; with flag 0x121 already set it is skipped (H). M: something sinks / rises
    after Musashi uses an ability; flag 0x121 records it.
  * Var-0xCC actor (func_80181454 .. func_8018163C, own): a model that reacts to var 0xCC (set to 2, 0x10) and leaves
    (H); flags 0x142 cleared, var 0xCC = 2 (func_80180CAC, H). A6-like launched model gated by var 0xCD (as sc03_002).
  * Hazard func_80181694 (own copy of sc03_002's): sound 0x5A5 by distance, damage on segment contact (H).
  * Flag-0x138 actor (func_80183744 .. func_80183864): finds kind 0x3C9, sets flag 0x138, SoundCmd1-restart, event
    D_80190DC8 on a player action (H); func_80182EA8 restarts music when flag 0x138 is set (H).
  * Enemies: F075 (mime-animated melee enemy, sounds 0x7F / 0x524 / 0xA74), F076 (enemy with DropItem, sound 0x662 /
    0xAA1), own enemy 0x8018A124 .. 0x8018AD7C (patrols random points, TargetInSight, chases, segment damage,
    SpawnKind13, sounds 0x6A9 / 0x660 / 0x6AA, death via func_8002AC00 tally) (H for calls, M for "enemy"); a
    spawner of kind 0x125 / 0x240 / 0x8F (H). func_8018B9F8 sets flag 0xF0 (H).
* **Events / scripted scenes:** events above; five PLAYER-ACTION-MAIN scripts (entry walks and the set-piece).
* **Exits:** P01 exits (ten step functions; one exit step reads progress) (H). No RequestMapChange in own code.
* **Sound:** 0xB11 (set-piece loop, stopped by SoundRequest(4, 0xB11)), 0x5A5 hazard, 0xBFE / 0x62E, 0x51F-0x522.
* **Unknown / notes:** own camera mode func_80181228 reads the pad (GetObjPadPressed) (H: a player-turnable camera).

#### Names: SC03_006
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F510 | func_sc03_006_8017F510 | DrawSetPieceMesh | 586-line GTE mesh draw from the room frame | M |
| 0x80180CAC | func_sc03_006_80180CAC | RoomResetVarCC | flag 0x142 = 0, var 0xCC = 2 | H |
| 0x8018112C | func_sc03_006_8018112C | RoomInitCamera | SetCameraUpdate + SnapCamera | H |
| 0x80181228 | func_sc03_006_80181228 | CameraModePad | pad-driven camera transform | M |
| 0x80181694 | func_sc03_006_80181694 | HazardUpdate | sound 0x5A5 by distance, damage | H |
| 0x801818D8 | func_sc03_006_801818D8 | HazardHitsPlayer | ActorSegmentHitsPlayer x6 | H |
| 0x801822CC | func_sc03_006_801822CC | SetPieceInit | flag 0x121 | M |
| 0x801823B8 | func_sc03_006_801823B8 | SetPieceTrigger | events by flag 0x8B, sets flag 0x121, sound 0xB11 | H |
| 0x80182A44 | func_sc03_006_80182A44 | RoomFrame | set-piece motion + camera shake + lighting | H |
| 0x80183774 | func_sc03_006_80183774 | SetFlag138 | SetFlag(0x138) + music restart | H |
| 0x801837C4 | func_sc03_006_801837C4 | Event138Run | StartEvent D_80190DC8 | H |
| 0x80186F14 | func_sc03_006_80186F14 | FlagHolderTalk | picks script by flag 0x1D | H |
| 0x80187060 | func_sc03_006_80187060 | FlagHolderTake | sets progress 0x5A on flag 0x54 | H |
| 0x8018A1B4 | func_sc03_006_8018A1B4 | Enemy3Chase | TargetInSight, SpawnKind13, sound 0x6A9 | M |
| 0x8018ACD0 | func_sc03_006_8018ACD0 | Enemy3Init | SetupActor, shadow, hidden | M |
| 0x8018B9F8 | func_sc03_006_8018B9F8 | SetFlagF0 | SetFlag(0xF0, 1) | H |

n more own functions not proposed: about 40.

### SC03_007
* **Place:** an outdoor map with a multi-step **chase sequence** driven by byte var 0xCC (H); no progress set; tests
  progress 0x32 (50) and 0x384 (900) (H). M: an early-game area (progress 50) revisited later.
* **Size:** 256 functions (own 125 + dup 30, stubs 8, 14 dispatchers, S 34; F078 8, F030 6, F032 6, F034 5, F006 4,
  F007 4, F008 4; P01, P02).
* **Actors:**
  * Runner (func_80180C74 set-up, func_801810E4 move, own): exists only for var 0xCC = 2/4/6/8/10/12, each step with
    its own start value (+0xE0 = 0xB4 .. 0x14A); at progress 0x32 and on odd steps plays sound 0xC4D (H). It walks
    toward per-step points; on arrival advances var 0xCC to the next odd step (2->3, 4->5 ...) (H).
    func_8017D740 advances odd -> even (3->4 ... 13->14, 14->15) (H), func_80181A44 starts the chase (var 0xCC = 1,
    sets the player's target to the runner) (H). M: a chase / tag game over six legs; var 0xCC 0xF = finished.
  * Talk NPC (func_80181CF8): absent at progress >= 0x384 and, for index 0, while 3 <= var 0xCC < 0xF (H).
  * Reward actor (func_8018471C): appears only when all 13 flags 0x40-0x4C are set and var 0x89 is clear; copies VRAM
    rects (MoveImage) (H). L: a reward for collecting 13 things.
  * Burst spawner (func_8018574C): spawns random kinds from table D_8018C7F0 in a cone, SoundCmd1(1) every 30 frames
    (H; M: fireworks / celebration).
  * Walker func_8017EFD4 (scaled model, set-up gated by func_80180454); F078 debris / particle props (this group);
    F030 / F032 / F034 / F006 / F007 / F008 (other groups); own enemy copy (SpawnKind13, sounds 0x6A9 / 0x660).
* **Events / scripted scenes:** RunScript D_8018C138 (talk); flag 0x142: one-time, sound 0xC4D on repeats
  (func_8017D468) (H).
* **Exits:** P01 exits; one exit step tests flag 0x117 before SoundCmd1 (H).
* **Sound:** 0xC4D (chase cue), 0x525-0x527, 0xB2D.

#### Names: SC03_007
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D468 | func_sc03_007_8017D468 | TouchFlag142 | GetFlag/SetFlag 0x142, sound 0xC4D | H |
| 0x8017D740 | func_sc03_007_8017D740 | ChaseNextLeg | var 0xCC odd -> even | H |
| 0x8017EFD4 | func_sc03_007_8017EFD4 | ScaledWalkerInit | SetupActor, scale from rcos/rsin | M |
| 0x80180C74 | func_sc03_007_80180C74 | ChaseRunnerInit | per-step start, sound 0xC4D | H |
| 0x801810E4 | func_sc03_007_801810E4 | ChaseRunnerRun | points per step, var 0xCC even -> odd | H |
| 0x80181A44 | func_sc03_007_80181A44 | ChaseStart | var 0xCC = 1, player target | H |
| 0x80181CF8 | func_sc03_007_80181CF8 | ChaseNpcInit | progress 0x384, var 0xCC | H |
| 0x8018471C | func_sc03_007_8018471C | RewardInit | flags 0x40-0x4C, var 0x89 | H |
| 0x8018574C | func_sc03_007_8018574C | CelebrationBurst | random kinds, SoundCmd1(1) | M |

n more own functions not proposed: about 110 (many dup16 / small helpers).

### SC03_010
* **Place:** a **timed challenge course** (H for the mechanics: countdown, checkpoints in byte var 0xCE, retry by map
  change). No progress values (H). Var 0xCE is also tested by the village exit step (SoundCmd1 only when var 0xCE is
  set, sc03_001 func_8017E69C), so the challenge is entered from the village (M). L: a trial / race event.
* **Size:** 102 functions (own 10, stubs 4, 4 dispatchers, S 17; F079 38 (shared with sc03_013), F080 10, F033 5,
  F081 3; P01 x8, P02, two PLAYER-ACTION-MAIN).
* **Actors:**
  * F079 course logic (this group): start scene sends sound command 0x1A, the finish scene 0x1B (H); a countdown on
    screen (func_8017ECE8: +0xFC frames, shown as seconds with func_800242D0) that on reaching 0 resets var 0xCE to 1
    and ends the player action (H); checkpoint test func_8017DB84: if var 0xCE is in the checkpoint's range it is
    raised to the checkpoint's value, otherwise var 0xCE = 1 (H); checkpoint markers switch texture when var 0xCE >=
    their index (func_8017EA58, H); a carrier platform (func_8017F7E0, CarryPlayer) with a height-based sound 0x547
    (H). Sounds 0x540-0x544 (H).
  * Indicator kind 0xC7 (own helpers func_8017EDA8 / func_8017EDD8 / func_8017EE30): its +0xFC set from table
    D_80183CF4[var 0xCE] (H). M: a sign / gate showing the current checkpoint.
  * Own hazard func_8017E69C (segment hits player) and launched model func_8017E744 (as sc03_002 A6) (H).
* **Exits:** func_8017DD44 (F079): RequestMapChange(&D_80183A5C) from a Musashi action step (H): a fixed record in
  the stage's data (destination unknown; M: back to the village or a restart).
* **Sound:** sound commands 0x1A / 0x1B (start / end of the challenge music, M), 0x540-0x547.

#### Names: SC03_010
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D9BC | func_sc03_010_8017D9BC | RoomExitWaitTrack | func_8001AAA0 then step | L |
| 0x8017E69C | func_sc03_010_8017E69C | HazardHitsPlayer | ActorSegmentHitsPlayer x2 | H |
| 0x8017E744 | func_sc03_010_8017E744 | LaunchedModelInit | model + local velocity | M |
| 0x8017EDA8 | func_sc03_010_8017EDA8 | FindIndicator | FindActorByKind(0xC7) | H |
| 0x8017EDD8 | func_sc03_010_8017EDD8 | ShowCheckpointOnIndicator | table by var 0xCE | H |
| 0x8017EE30 | func_sc03_010_8017EE30 | ResetIndicator | kind 0xC7 reset | M |
| 0x8017F090 | func_sc03_010_8017F090 | CountdownSpriteInit | AllocActorSprite | M |

### SC03_013
* **Place:** a second **timed challenge course** sharing F079 / F080 / F081 with sc03_010 (H), plus a story part:
  sets progress 0x3D4 (980) at the end of an event (func_8017FAA8, H); an actor present only at progress 0x3D4
  (func_8017FE88) starts event D_80184FB0 (H). Indicator kind is 0x1EF here (H).
* **Size:** 123 functions (own 26, stubs 4, 6 dispatchers, S 19; F079 38, F080 10, F033 5, F081 3; P01 x8, P02,
  three PLAYER-ACTION-MAIN).
* **Actors:**
  * F079 course (see SC03_010), RequestMapChange(&D_80184A94) (H).
  * Item gates (func_8017DB84 / func_8017DC38 / func_8017DD98, own): by type 1/4/8 test a flag or an inventory item
    (FindItemSlot), then set the flag, take the item (TakeItem) and open a message (H). M: doors opened with keys.
  * Hazard pair (func_8017EA08 / func_8017EAB0 / func_8017EE28 / func_8017EEA4): PathHitsModel -> HitPlayer (H).
  * Flag actors (func_8017F0A0 / func_8017F198): present until their flag (table D_80184E90) is set; an event
    (StartEvent from table D_80184E84) sets it and frees the actor (H).
  * Story actor (func_8017FAA8): SpawnKind205 effects with random directions, sounds 0x9E2 / 0x9E3, waits for the
    event, then SetProgress(0x3D4) (H). Sprite checkpoints test flags with sound 0x854 (func_8017F958, H).
* **Exits:** F079 RequestMapChange(&D_80184A94) (destination unknown) and P01 exits.
* **Sound:** 0x1A / 0x1B, 0x540-0x547, 0x854, 0x9E2 / 0x9E3.

#### Names: SC03_013
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DB84 | func_sc03_013_8017DB84 | ItemGateCheckFlag | flag by type 1/4/8, action marks | M |
| 0x8017DC38 | func_sc03_013_8017DC38 | ItemGateCheckItem | FindItemSlot | H |
| 0x8017DD98 | func_sc03_013_8017DD98 | ItemGateOpen | SetFlag, TakeItem, OpenMessage | H |
| 0x8017EE28 | func_sc03_013_8017EE28 | HazardFaceHit | FaceHelper x2 + hit test | M |
| 0x8017EEA4 | func_sc03_013_8017EEA4 | HazardHitPlayer | PathHitsModel -> HitPlayer | H |
| 0x8017F0A0 | func_sc03_013_8017F0A0 | FlagActorInit | flag table D_80184E90 | H |
| 0x8017F198 | func_sc03_013_8017F198 | FlagActorDone | event done, SetFlag, free | H |
| 0x8017ECD0 | func_sc03_013_8017ECD0 | FlagActorTalk | StartEvent from table | H |
| 0x8017F958 | func_sc03_013_8017F958 | CheckpointSpriteFlag | GetFlag, sound 0x854 | M |
| 0x8017FAA8 | func_sc03_013_8017FAA8 | EventSetProgress3D4 | SpawnKind205, SetProgress(0x3D4) | H |
| 0x8017FE88 | func_sc03_013_8017FE88 | StoryActorInit | progress 0x3D4 only | H |
| 0x8017FF28 | func_sc03_013_8017FF28 | StoryActorTalk | StartEvent D_80184FB0 | H |

### SC03_011
* **Place:** an outdoor map (day lighting) tied to the challenge course: shares F080 with sc03_010 / sc03_013, reads
  var 0xCE (=9 suppresses the map music) and flags 0x90 / 0x95 (H). Story: sets progress 0x3CA (970) in a scene
  (func_80180694) and 0x3F2 (1010) with TakeItem(0x6C) (func_80180EA8), in a scene that exists only at progress 0x3E8
  (1000) (func_80180A10: sets the scene clock from D_80078EAC days * 24 + hour) (H). Tests 0x32, 0x82, 0x3B6 (H).
* **Size:** 157 functions (own 90 + dup 5, stubs 10, 12 dispatchers, S 18; F080 10; P01 x8, P02, P03, two
  PLAYER-ACTION-MAIN).
* **Actors:**
  * Exit steps (func_8017D888 / next): set flag 0x90 on leaving (H); room frame func_8017E5B8 runs map music only
    when var 0xCE != 9, flag 0x95 clear and flag 0x90 set (H). M: first-visit silence, then music.
  * Talk sequence (own message chain, D_80185EC8 .. D_80186068): five messages; the second answer sets flag 0xBD (H).
    Sprites present until flag 0xBD (sound 0x854) (H).
  * Course entry (Musashi action): var 0xCE 0 / 1 set and tested; F080 start / end scenes (sound commands 0x1A / 0x1B);
    despawns kind 0x83 (talk marker) at start (H).
  * Story NPCs: one with talk marker absent once flag 0xF2 is set or before progress 0x82; its event D_8018570C sets
    flag 0xF2 (H); progress-0x3E8 scene actor spawns kind 0x374 and runs events D_80185870 / D_80185948 / D_80185BDC
    (H). func_80180E04 / 80180EE0 drive two scene actors through +0xFC (H).
  * Ambient: rotating prop spawner sound 0x67D; hazard sound 0x645 by distance; var-0xCD launched model (as
    sc03_002); a model spawning kind 0xE1; sounds 0x54F / 0x550; 0xB3D (H).
* **Exits:** P01 (with flag 0x90). No RequestMapChange in own code.
* **Sound:** 0x645, 0x67D, 0x54F / 0x550, 0x854, 0xB3D.

#### Names: SC03_011
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D888 | func_sc03_011_8017D888 | RoomExitStepSetFlag90 | SetFlag(0x90) + P01 exit | H |
| 0x8017DC08 | func_sc03_011_8017DC08 | RoomStartScene | TakePlayerControl, BlendCameraThen, progress 0x3E8 | M |
| 0x8017E5B8 | func_sc03_011_8017E5B8 | RoomFrame | lighting + music gate var 0xCE / flags 0x90, 0x95 | H |
| 0x80180694 | func_sc03_011_80180694 | SceneSetProgress3CA | SetProgress(0x3CA) | H |
| 0x80180A10 | func_sc03_011_80180A10 | Scene3E8Init | progress 0x3E8 only, clock copy | H |
| 0x80180E04 | func_sc03_011_80180E04 | SceneActorsSetScript | two SetScript | M |
| 0x80180E4C | func_sc03_011_80180E4C | TurnPlayerToActor | TurnStep on Musashi's model | H |
| 0x80180EA8 | func_sc03_011_80180EA8 | SceneSetProgress3F2 | SetProgress(0x3F2), TakeItem(0x6C) | H |

n more own functions not proposed: about 80.

### SC03_012
* **Place:** a short **collapse / earthquake scene** room (H for the mechanics: repeated camera shakes, falling-piece
  props, a forced map change). Its entry step sets progress: 0x3E8 (1000) if progress >= 0x3D4 (980), else 0x82
  (130) with flag 0xEE; and increments byte var 0xCD on every entry (func_8017D548, H). Var 0xCD is the counter that
  removes the "launched model" actors in sc03_002 / sc03_006 / sc03_011 (H there), so this scene changes those maps (M).
  So the image is used twice in the story: chapter 4 start (130) and late (1000) (H).
* **Size:** 38 functions (own 13 + dup 2, stubs 5, 2 dispatchers, S 7; F006 4; P01 x4, P02).
* **Actors:** A1 (0x8017D890): the scene object: set-up by +0x70 spawns sub-actors from defs, sound 0x556
  (func_8017D8CC); stages: sound 0x555 + camera shake (func_8017DA80), model swap + sound 0x557 + shake
  (func_8017DB28), swaying shake with debris props (func_8017DBE4 / func_8017DCB4), final shake then
  RequestMapChange(&D_80181B58) (func_8017DE18) (H). Two own camera modes (dup2, SetCameraUpdate) (H).
  A2 (0x8017DFCC): sprite props (dust) (H).
* **Exits:** the scripted RequestMapChange(&D_80181B58) (destination unknown); P01 exit (S65: no SoundCmd1) (H).
* **Sound:** 0x555, 0x556, 0x557.

#### Names: SC03_012
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D548 | func_sc03_012_8017D548 | RoomEntrySetProgress | SetProgress 0x3E8 / 0x82, flag 0xEE, var 0xCD++ | H |
| 0x8017D8CC | func_sc03_012_8017D8CC | QuakeSceneInit | sub-actors, sound 0x556 | H |
| 0x8017DA80 | func_sc03_012_8017DA80 | QuakeSceneShake1 | sound 0x555, StartCameraShake | H |
| 0x8017DB28 | func_sc03_012_8017DB28 | QuakeSceneShake2 | model swap, sound 0x557 | H |
| 0x8017DBE4 | func_sc03_012_8017DBE4 | QuakeSceneSway | rsin sway, shake, debris | M |
| 0x8017DCB4 | func_sc03_012_8017DCB4 | SpawnQuakeDebris | SpawnPropFrom | M |
| 0x8017DE18 | func_sc03_012_8017DE18 | QuakeSceneEnd | shake + RequestMapChange | H |
| 0x8017DEF0 | func_sc03_012_8017DEF0 | QuakeCameraUpdate | camera set by state | M |
| 0x8017E008 | func_sc03_012_8017E008 | DustSpriteInit | StartSpriteAnim | M |

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

### SC03_090
* **Place:** same area type as SC03_089 (shares F089, F045, F048, F055, F050 with it) with F047 blobs and F090
  drifting creatures added (M); five room set-ups 0x80180D88-0x80180E88 (spawn lists + seq block 0-4, H). No
  progress values (H).
* **Size:** 257 functions (own 5; F013 15, F045 39, F047 26, F048 21, F051 3, F050 5, F055 5, F089 36, F090 22;
  42 S shapes; 13 ACTOR-MAIN, 2 PLAYER-ACTION-MAIN, P01, P02, 12 stubs).
* **Actors:** A1-A3 F013; F048/F051 hazard + hopper + platform; A6-A9 F089 (diver 0x8018396C.., bomb A7 0x80184A1C,
  ring A8, debris A9); A10 0x80186D04 F047 (blob droplets); A11 0x80187378 F090 (kind 0x19E drifter, set-up
  0x801874BC); F045 soldier; A12 0x8018A8A0 F055 warp disc; A13 0x8018B550 F050 lights.
* **Events / scripted scenes:** only F055 (disc -> StartEvent) (H).
* **Exits:** P01 exit steps (one with SoundCmd1(1)); F055 RequestMapChange(+0xDC), destination unknown (data).
* **Camera:** five camera set-ups (0x80181578 and 0x80181744 F090, three S3) and five own pad-toggled camera modes
  0x801818B0 / 0x80181970 / 0x80181AA0 / 0x80181B50 / 0x80181C80 (pad bits 0-1 toggle the distance; two also
  use func_80012F74) feeding 0x80181D30 (S75) (H). 0x80181F00 (F090) puts seq points 1-2 at fixed table points by
  subtype (H).
* **Sound:** family sounds only (see F089, F045, F047, F048).

#### Names: SC03_090
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801818B0 | func_sc03_090_801818B0 | CameraZoomToggle0 | pad toggles distance | M |
| 0x80181970 | func_sc03_090_80181970 | CameraZoomToggle1 | same, with func_80012F74 | M |
| 0x80181AA0 | func_sc03_090_80181AA0 | CameraZoomToggle2 | same | M |
| 0x80181B50 | func_sc03_090_80181B50 | CameraZoomToggle3 | same, with func_80012F74 | M |
| 0x80181C80 | func_sc03_090_80181C80 | CameraZoomToggle4 | same | M |

### SC03_091
* **Place:** sister room of SC03_090 (the same families F045, F047, F048, F050, F055, F089, F090) plus F024 (an item
  holder that starts an event, AddMaxBp / SetVar 0x3A + n; F024 tests map id 0x3028) (H for the calls).
  No progress values (H).
* **Size:** 272 functions (own 5; F013 15, F024 11, F045 39, F047 26, F048 21, F051 3, F050 5, F055 5, F089 36,
  F090 22; 45 S; 14 ACTOR-MAIN, P01, P02).
* **Actors:** as SC03_090, plus A1 F024 (0x8017BFEC-0x8017CC80).
* **Events:** F024 StartEvent (item / bonus), F055 warp disc.
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** five own pad-toggled camera modes 0x801826C8 / 0x80182788 / 0x801828B8 / 0x80182968 / 0x80182A98,
  same pattern as SC03_090 (H).

#### Names: SC03_091
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801826C8 | func_sc03_091_801826C8 | CameraZoomToggle0 | pad toggles distance | M |
| 0x80182788 | func_sc03_091_80182788 | CameraZoomToggle1 | same | M |
| 0x801828B8 | func_sc03_091_801828B8 | CameraZoomToggle2 | same | M |
| 0x80182968 | func_sc03_091_80182968 | CameraZoomToggle3 | same | M |
| 0x80182A98 | func_sc03_091_80182A98 | CameraZoomToggle4 | same | M |

### SC03_092
* **Place:** a story room of this area (the hub of SC03_089-104, M): own event code keyed on progress bands
  <0x140, 0x140-0x149, 0x14A-0x171, 0x172-0x17B, >=0x17C (H, 0x8017F8D8 / 0x8017FE88). Sets progress 0x14A (330)
  (0x8017FF34) and 0x17C (380) (0x8018010C) (H), so it sits around progress 320-380 (M).
* **Size:** 220 functions (own 57; F009 3, F013 15, F023 12, F031 6, F035 6, F048 21, F049 6, F050 5, F051 3,
  F055 5; 34 S; 20 ACTOR-MAIN, P01, P02, 16 stubs).
* **Actors:**
  * Event controller (0x8017F8D8): progress 0x140-0x149 and Musashi in a state (+0x44 bit 27) at z >= -0x16F ->
    StartEvent D_80188FB8; progress 0x172-0x17B: flag 0x105 clear and Musashi in area x -0x880..-0x680 ->
    StartEvent D_801892E0, else (flag set) area x -0xE60..-0xDA0 -> StartEvent D_80189190 (H). 0x8017FA74 runs
    the cut (ScriptOpCameraCut x4, PlaceObject) (H).
  * A9 (0x8017FE4C) script callbacks: SetProgress(0x14A), SetFlag(0x100, 1), test flags 0x101-0x104 (all four, M),
    SetProgress(0x17C), SetFlag(0x105, 1), find kind 0x1AF (H); 0x8017FE88 RunScript D_8018910C in band 0x14A-0x171.
  * 0x8017FC44: two kind-0x1AF NPCs placed by progress, with talk markers (SpawnTalkMarker), talk by distance
    (0x80180150, ResetScriptVM) (H; L who they are).
  * 0x8017E780: an object whose picture (MoveImage) depends on flag 0xB3 and a per-subtype flag; talk marker;
    0x8017E6A0 sets flag 0xB3 with sound 0x758 (H; M a sign / board that changes once used).
  * A6 0x8017ECFC: talk / touch objects running per-subtype scripts (RunScript D_80188C58[subtype]) (H).
  * A7 0x8017F2F8: model chosen by a flag table, spawns kind 0x188 (H). A8 0x8017F544 (flag 0xB3): StartEvent
    D_80188EB8, sound 0x757, timer (H). A10 0x801801F4: StartEvent D_801893D4 when flag 0x100 clear and close, then
    SetFlag(0x100, 1), ShowModel (H). A11 0x80180584 shows / hides with sound 0x5BF (H).
  * Families: F023 / F031 / F035 / F009 (others'), F048 / F051, F049, F050, F055 warp disc (A19-A20).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** two own set-ups (0x8017DE74, 0x8017DF40) and a mode 0x8017E044 that follows Musashi's action
  (GetPlayerAction) (H). Own renderer 0x8017CE58 (240 lines, GTE, with cam_local) (H).
* **Sound:** 0x739 / 0x73B (event end, 0x8017EAA0), 0x757, 0x758, 0x5BF, 0xB16.
* **Unknown / notes:** event script contents unknown (data); flags 0x100-0x105 and 0xB3 are this room's (H).

#### Names: SC03_092
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F8D8 | func_sc03_092_8017F8D8 | EventByProgressArea | progress bands, IsInArea, StartEvent | M |
| 0x8017FA74 | func_sc03_092_8017FA74 | EventCutScene | ScriptOpCameraCut x4, PlaceObject | M |
| 0x8017FE88 | func_sc03_092_8017FE88 | EventRunBandScript | RunScript in band 0x14A-0x171 | M |
| 0x8017FF34 | func_sc03_092_8017FF34 | EventSetProgress14A | SetProgress(0x14A) | H |
| 0x8018010C | func_sc03_092_8018010C | EventSetProgress17C | SetProgress(0x17C) | H |
| 0x8017FFB4 | func_sc03_092_8017FFB4 | EventSetFlag100 | SetFlag(0x100, 1) | H |
| 0x8018012C | func_sc03_092_8018012C | EventSetFlag105 | SetFlag(0x105, 1) | H |
| 0x8017FFD8 | func_sc03_092_8017FFD8 | EventTestFlags101To104 | GetFlag 0x101-0x104 | M |
| 0x8017FC44 | func_sc03_092_8017FC44 | NpcPairInit | two 0x1AF by progress, talk marker | M |
| 0x80180150 | func_sc03_092_80180150 | NpcTalkWait | distance, ResetScriptVM | M |
| 0x8017E780 | func_sc03_092_8017E780 | FlagBoardInit | MoveImage by flag 0xB3 | M |
| 0x8017E6A0 | func_sc03_092_8017E6A0 | FlagBoardUse | SetFlag(0xB3), 0x758 | M |
| 0x8017E044 | func_sc03_092_8017E044 | CameraFollowAction | GetPlayerAction, camera targets | M |
| 0x8017CE58 | func_sc03_092_8017CE58 | DrawRoomMesh | GTE renderer | M |
| 0x8018074C | func_sc03_092_8018074C | ShowIfInRange | func_80013450, Hide/ShowModel (6 callers) | L |

### SC03_093
* **Place:** a room of the same area with F045 soldiers, F091 glowing creatures and F092 vanishing walls (M);
  three room set-ups 0x8017E778 / 0x8017E7B8 / 0x8017E7F8 (spawn lists + seq block) (H). No progress values (H).
* **Size:** 192 functions (own 6; F013 15, F024 11, F045 39, F048 22, F050 5, F051 3, F091 19, F092 9; 35 S;
  12 ACTOR-MAIN, P01, P02, P03).
* **Actors:**
  * A5 (own, 0x8017F0E8): set-up 0x8017F124 takes a velocity and a time from a table by +0xFC; 0x8017F1E8 moves it
    (MoveOnGround) until the timer ends, then F048's reverse step 0x8017F23C; CarryPlayer (H): a shuttle
    platform (M), a local copy of the F048 platform without the 0x1C4 spawn.
  * A6-A7 F092 (vanishing walls, kind 0x167 parts); F048 / F051; F091 kind-0x1A2 creatures (0x801813E0..);
    F045 soldier; A1 F024 (item holder; StartEvent); A2-A4 F013; A12 F050 lights.
  * 0x80184938-0x8018547C (S2, shared with one other stage): a hazard actor that sprays props (SpawnPropFrom x13),
    hits Musashi with four segments, looped sound by distance (func_8002D59C), sound 0x6F1 (H; L what it is).
  * A11 0x8018575C (S2): set-up spawning 0x1C4, gravity (H).
* **Events:** F024 only (H).
* **Exits:** P01 only (no RequestMapChange in own code) (H).
* **Camera:** own set-ups 0x8017EAF4 / 0x8017EB8C / 0x8017EC24; pad-toggled modes 0x8017ECF8, 0x8017ED98 (S34)
  and own 0x8017EE38 (H).

#### Names: SC03_093
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F124 | func_sc03_093_8017F124 | ShuttlePlatformInit | SetupActor, velocity / time table | M |
| 0x8017F1E8 | func_sc03_093_8017F1E8 | ShuttlePlatformMove | MoveOnGround, timer, CarryPlayer | H |
| 0x8017EAF4 | func_sc03_093_8017EAF4 | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x8017EB8C | func_sc03_093_8017EB8C | RoomCameraInit1 | same | M |
| 0x8017EC24 | func_sc03_093_8017EC24 | RoomCameraInit2 | same | M |
| 0x8017EE38 | func_sc03_093_8017EE38 | CameraZoomToggle | pad toggles distance | M |

### SC03_094
* **Place:** a puzzle room of the same area: push blocks and hittable targets that set per-subtype flags
  (table D_8018B52C) (H); F045 soldiers, F047 blobs, F057 divers, F091 creatures (H). No progress values (H).
* **Size:** 208 functions (own 18; F045 39, F047 26, F048 23, F050 5, F051 3, F057 10, F091 19; 39 S; 9 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:**
  * Push block (kind 0x1BE, set-up 0x8017E890): if its flag is already set it starts at its solved position
    (table D_8018B4EC), else pushable (H). 0x8017DEBC: by Musashi's heading (four quadrants) and a free-path test
    0x8017D898 (TraceMap), the block moves one step and drags Musashi's position along, sound 0x743; no floor ->
    falls (state 6) (H). 0x8017E0FC / 0x8017E254 slide steps with sound 0x744 (H). 0x8017E52C idles, testing the
    four directions (H).
  * Target (0x8017DAC8): takes damage (ShowDamage, HP +0x76), ShowDefeat + StartRumbleScript on a finishing hit;
    at HP < 0: sound 0xCBC and +1 on the counter (+0xFC) of every unsolved 0x1BE block (H), more lines follow
    (0xCBD, props) (H).
  * 0x8017E3B0: a pulsing glow (light colours in D_8018B50C by subtype); when done each unsolved block's counter
    -1, and at zero SetFlag(table[subtype], 1) with sound 0x745 (H). M: blocks lock in place once their target(s)
    are broken.
  * 0x8017E9D4 (SetupActorAlt, flag-gated) / 0x8017EA74 (sounds 0x746, sound command 4 arg 0x745) (H); 0x8017EAEC
    platform set-up for the F048 mover (H).
  * Families: F045, F047, F048 / F051, F057, F091, F050.
* **Puzzles / mechanisms:** push blocks + targets -> flags D_8018B52C[subtype] (H).
* **Exits:** P01 only (H). **Camera:** four set-ups 0x8017D11C-0x8017D2E4, pad modes 0x8017D458, 0x8017D544 (own),
  0x8017D630 (S34) (H).

#### Names: SC03_094
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E890 | func_sc03_094_8017E890 | PushBlockInit | flag set -> solved position | M |
| 0x8017DEBC | func_sc03_094_8017DEBC | PushBlockPush | heading quadrant, moves block and Musashi, 0x743 | M |
| 0x8017D898 | func_sc03_094_8017D898 | PushBlockPathFree | TraceMap test for a direction | M |
| 0x8017E0FC | func_sc03_094_8017E0FC | PushBlockSlideA | rsin, 0x744 | M |
| 0x8017E254 | func_sc03_094_8017E254 | PushBlockSlideB | rsin, 0x744 | M |
| 0x8017E52C | func_sc03_094_8017E52C | PushBlockIdle | four direction tests | M |
| 0x8017DAC8 | func_sc03_094_8017DAC8 | TargetTakeHit | ShowDamage / ShowDefeat, HP < 0 -> block counters | M |
| 0x8017E3B0 | func_sc03_094_8017E3B0 | TargetGlowSolve | glow, counters -1, SetFlag, 0x745 | M |
| 0x8017D11C | func_sc03_094_8017D11C | RoomCameraInit0 | SetCameraUpdate / SnapCamera (also 0x8017D1B4, 0x8017D24C, 0x8017D2E4 = Init1-3) | M |

### SC03_095
* **Place:** a small room of the area: F091 creatures, F092 vanishing walls, F048 movers (H). No progress (H).
* **Size:** 105 functions (own 6, dup2 2; F048 22, F050 5, F051 3, F091 19, F092 9; 20 S; P01, P02, P03).
* **Actors:** own platform set-up 0x8017D618 (SetupActor, script) with two identical movers 0x8017D704 / 0x8017D7B0
  (MoveOnGround, timer, CarryPlayer, dup2) and a carry-only step 0x8017D758 (H): a platform with a pause (M).
  0x8017D558 (6 field writes, unknown). Families as listed.
* **Exits:** P01 only. **Camera:** two set-ups 0x8017D09C / 0x8017D134, pad mode 0x8017D2A8 (H).

#### Names: SC03_095
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D618 | func_sc03_095_8017D618 | PlatformInit | SetupActor, SetScript | M |
| 0x8017D704 | func_sc03_095_8017D704 | PlatformMoveA | MoveOnGround, timer, CarryPlayer | M |
| 0x8017D758 | func_sc03_095_8017D758 | PlatformPause | CarryPlayer only | M |
| 0x8017D7B0 | func_sc03_095_8017D7B0 | PlatformMoveB | same as 0x8017D704 | M |

### SC03_096
* **Place:** a small room of the area (F048, F050, F051, F091, F092) (H). No progress (H).
* **Size:** 96 functions (own 2; F048 21, F050 5, F051 3, F091 19, F092 9; 18 S; P01, P02, P03).
* **Actors:** families only (F091 creatures, F092 vanishing walls, F048 movers / hopper).
* **Exits:** P01 only. **Camera:** one set-up 0x8017D05C (own) and a pad-toggled mode 0x8017D130 (own) (H).

#### Names: SC03_096
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D05C | func_sc03_096_8017D05C | RoomCameraInit | SetCameraUpdate, SnapCamera | M |
| 0x8017D130 | func_sc03_096_8017D130 | CameraZoomToggle | pad, update 0x8017D238 | M |

### SC03_097
* **Place:** a room of the area with the F054 switch set: when all switches' flags (table D_8019AEF4) are set it
  **sets progress 0x172 (370)** (0x8017F9BC-region F054 code, H); also F022/F023 code (another group's) sets
  progress 0x5A (90) and flag 0xEA (H for the call; M that it is a shared pickup / save step).
* **Size:** 232 functions (own 8, dup2 2; F013 15, F022 15, F023 12, F024 11, F029 7, F035 3, F048 21, F050 5,
  F051 3, F054 14, F055 5, F091 19, F092 9; 43 S; 13 ACTOR-MAIN, 3 PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** A6-A7 F054 (switches: touch -> StartEvent D_8019AEC4 + sound 0x700; event done -> SetFlag, all set ->
  SetProgress(0x172)); F055 warp disc; F091 creatures (own wake step 0x80184324: timer and Musashi within 0x40000
  -> state 2, H); F092 vanishing walls; F024 item holder; F022/F029 (helpers used by F054); F048, F050, F013.
* **Events:** F054 switch events, F055 disc event, F024 (H). Player actions: two dup2 handlers 0x8017EE04 /
  0x8017F038 (BumpSub2Copy, SpawnEffectOn, wait) and own 0x8017EF54 (SpawnEffectOn) (H).
* **Exits:** P01 (extra exit / entry step sets, 12 P01 shapes); F055 RequestMapChange (data).
* **Camera:** set-ups 0x8017F0FC / 0x8017F194 (own), 0x8017F230 (S3); pad modes 0x8017F304 / 0x8017F3D4 /
  0x8017F48C (own) (H).

#### Names: SC03_097
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F0FC | func_sc03_097_8017F0FC | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x8017F194 | func_sc03_097_8017F194 | RoomCameraInit1 | same | M |
| 0x8017F304 | func_sc03_097_8017F304 | CameraZoomToggle0 | pad toggle | M |
| 0x8017F3D4 | func_sc03_097_8017F3D4 | CameraZoomToggle1 | pad toggle | M |
| 0x8017F48C | func_sc03_097_8017F48C | CameraZoomToggle2 | pad toggle | M |
| 0x80184324 | func_sc03_097_80184324 | GlowCreatureWake | TickTimer, GroundDistSqToPlayer <= 0x40000 | M |
| 0x8017EF54 | func_sc03_097_8017EF54 | PlayerActionSpawnEffect | SpawnEffectOn, BumpSub2Copy | M |

### SC03_098
* **Place:** a room of the area built only from shared code: F045 soldiers, F047 blobs, F058 swinging hazard and
  platform, F048 movers, F024 item holder (H). No progress values (H).
* **Size:** 173 functions (own 0; F013 15, F024 11, F045 39, F047 26, F048 21, F050 5, F051 3, F058 8; 20 S;
  10 ACTOR-MAIN, P01, P02, P03).
* **Actors:** families only (see G4_families.md). **Events:** F024 StartEvent (item). **Exits:** P01 only (H).
* **Notes:** no own functions to name.

### SC03_099
* **Place:** a room of the area: F045 soldiers, F057 divers, F058 swinging hazard, F053 on-screen spawner with
  sounds 0x6D5 / 0x856 / 0x857 (H). No progress values (H).
* **Size:** 136 functions (own 2; F045 39, F048 21, F050 5, F051 3, F053 7, F057 10, F058 8; 22 S; 5 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:** families only. **Exits:** P01 only (H).
* **Camera:** set-up 0x8017D134 (own; 0x8017D09C shared), pad mode 0x8017D2AC (own) (H).

#### Names: SC03_099
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D134 | func_sc03_099_8017D134 | RoomCameraInit1 | SetCameraUpdate, SnapCamera | M |
| 0x8017D2AC | func_sc03_099_8017D2AC | CameraZoomToggle | pad toggle | M |

### SC03_100
* **Place:** a room of the area: F045, F058, F053, F024 item holder, F022/F023-type pickup code (another group's)
  that sets progress 0x5A (90) and flag 0xEA (H for the calls). No own progress code (H).
* **Size:** 171 functions (own 1; F013 15, F023 12, F024 11, F035 3, F045 39, F048 21, F050 5, F051 3, F053 7,
  F058 8; 20 S; 11 ACTOR-MAIN, P01, P02, P03).
* **Actors:** families only. **Events:** F024 (item), F023 (H). **Exits:** P01 only.
* **Camera:** pad mode 0x8017EC84 (own) (H).

#### Names: SC03_100
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EC84 | func_sc03_100_8017EC84 | CameraZoomToggle | pad toggle, update 0x8017ED90 | M |

### SC03_101
* **Place:** a switch room: F054 set (flags table D_8019A9E8; all set -> **SetProgress(0x172)** (370), H),
  F055 warp disc, F058, F053 (H).
* **Size:** 159 functions (own 2; F013 15, F022 15, F029 7, F048 21, F050 5, F051 3, F053 7, F054 14, F055 5,
  F058 8; 29 S; 10 ACTOR-MAIN, PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** A5-A7 F054 switches (StartEvent D_8019A9B8 + 0x700 on touch, D_8019A9C0 after) ; A8 0x8018118C F055
  disc; F058, F053, F048.
* **Events:** F054, F055 (H). Own player action 0x8017DDEC (BumpSub2Copy, SpawnEffectOn, wait 0x8017DE34) (H).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** pad mode 0x8017E0BC (own) (H).

#### Names: SC03_101
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DDEC | func_sc03_101_8017DDEC | PlayerActionSpawnEffect | SpawnEffectOn, BumpSub2Copy | M |
| 0x8017E0BC | func_sc03_101_8017E0BC | CameraZoomToggle | pad toggle | M |

### SC03_102
* **Place:** a room of the area with a dropping-props hazard and an ambient sound source (own), F045 soldiers,
  F053 (H). No progress values (H).
* **Size:** 124 functions (own 12; F045 39, F048 21, F050 5, F051 3, F053 7; 16 S; 7 ACTOR-MAIN, P01, P02, P03).
* **Actors:**
  * Dropper 0x80180A38: when Musashi is within ground distance^2 0x9C400 (and a height band) it spawns three props
    (0x80181260, SpawnPropAt; at home x, x+0x28, x-0x28) every +0xFC frames, three volleys then a 30-frame rest (H).
    Prop states: 0x80180C38 falls (MoveProp), on hitting the map (TraceMap) lands / splashes, PathHitsModel ->
    HitPlayer (H); 0x80181030 / 0x8018110C move then free (0x801811F0) (H). M: falling drops / rocks.
  * 0x80180810: a room-global timer cycling two 32-entry tables every 3 frames via 0x80180964 (S14) (H; L a
    texture / palette animation).
  * Sound source 0x8018139C: sound 0xA20 once when Musashi is below y -0x7EF; looped sound 0x76E with volume and
    pan from Musashi's y/z distance (func_8002D59C), stopped when out of range (H). M: a waterfall-type ambience.
  * 0x801815D4: ProjectPointOtz + func_80015954 (unknown draw helper) (H for the calls).
* **Exits:** P01 only. **Camera:** set-up 0x80180484, pad mode 0x80180558 (own) (H).

#### Names: SC03_102
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180A38 | func_sc03_102_80180A38 | DropperSpawnVolley | three props every +0xFC frames near Musashi | M |
| 0x80181260 | func_sc03_102_80181260 | DropperSpawnProp | SpawnPropAt, rotated velocity | M |
| 0x80180C38 | func_sc03_102_80180C38 | DropPropFall | MoveProp, TraceMap, HitPlayer | M |
| 0x801811F0 | func_sc03_102_801811F0 | DropPropFree | FreeProp | M |
| 0x80180810 | func_sc03_102_80180810 | RoomAnimTick | two table cycles every 3 frames | L |
| 0x8018139C | func_sc03_102_8018139C | AmbientSoundSource | 0xA20, looped 0x76E by distance | M |
| 0x80180484 | func_sc03_102_80180484 | RoomCameraInit | SetCameraUpdate, SnapCamera | M |
| 0x80180558 | func_sc03_102_80180558 | CameraZoomToggle | pad toggle | M |

### SC03_103
* **Place:** a room of the area: F045 soldiers, F057 divers, F053, F048 (H); three room set-ups, the third
  (0x8017DE58, own) also sets D_8012704C = 1 (H; the S5 helper in SC03_089 etc. returns 0x47 instead of 0x3E when
  it is set, so this is a room-wide mode, L). No progress values (H).
* **Size:** 142 functions (own 6; F009 3, F045 39, F048 21, F050 5, F051 3, F053 7, F057 10; 25 S; 8 ACTOR-MAIN,
  P01, P02, P03).
* **Actors:**
  * A4 (0x8017E80C / 0x8017E830, own): a room animator: every 2 frames applies entry n of an 8-entry table via
    0x8017E8F4 (S14), and every 8 frames calls func_800183E0 with the next of 16 values (D_8018806C) (H; L
    texture scroll / palette cycle).
  * 0x8017E73C / 0x8017E780 (own): RelocateSeqBlock(D_80197F1C), then each frame 0x8017D174 with a step +0xA (H;
    L a scrolling or animated mesh driven by a seq block).
  * Families: F045, F057, F053, F048 / F051, F050.
* **Exits:** P01 only. **Camera:** own camera update 0x8017E5A4 (smoothing plus a fixed offset -0x3CD / -0x182) (H).

#### Names: SC03_103
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DE58 | func_sc03_103_8017DE58 | RoomStart2 | spawn lists, seq block 2, D_8012704C = 1 | M |
| 0x8017E80C | func_sc03_103_8017E80C | RoomAnimInit | counters set, NextState | M |
| 0x8017E830 | func_sc03_103_8017E830 | RoomAnimTick | 8-entry / 16-entry cycles | M |
| 0x8017E73C | func_sc03_103_8017E73C | SeqMeshInit | RelocateSeqBlock | M |
| 0x8017E780 | func_sc03_103_8017E780 | SeqMeshStep | 0x8017D174, step +0xA | L |
| 0x8017E5A4 | func_sc03_103_8017E5A4 | CameraUpdateOffset | smoothing, fixed offset | M |

### SC03_104
* **Place:** a big room of the area combining F089 divers / bombs, F045 soldiers, the F054 switch set (flags table
  D_8019CA20; all set -> **SetProgress(0x172)** (370), H), F055 warp disc and F022/F023 pickup code that sets
  progress 0x5A (90) and flag 0xEA (another group's family; H for the calls).
* **Size:** 247 functions (own 3; F013 15, F022 15, F023 12, F029 7, F035 3, F045 39, F048 21, F050 5, F051 3,
  F054 14, F055 5, F089 36; 34 S; 14 ACTOR-MAIN, PLAYER-ACTION-MAIN, P01, P02).
* **Actors:** families only (F089 A-blocks, F045, F054 switches, F055 disc, F048 / F051, F050, F013).
* **Events:** F054 switch events, F055 disc event, F023 (H).
* **Exits:** P01; F055 RequestMapChange (data).
* **Camera:** set-up 0x801812D8 (own), 0x8018136C (S2); pad modes 0x80181440 / 0x80181528 (own) (H).

#### Names: SC03_104
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801812D8 | func_sc03_104_801812D8 | RoomCameraInit0 | SetCameraUpdate, SnapCamera | M |
| 0x80181440 | func_sc03_104_80181440 | CameraZoomToggle0 | pad toggle | M |
| 0x80181528 | func_sc03_104_80181528 | CameraZoomToggle1 | pad toggle | M |

### SC03_105
* **Place:** a **boss arena** (H: a shared HP pool, TakeDamage, StartCameraShake, intro / outro events), keyed on
  progress 0x258 (600): the controller (0x801860D0) runs the fight when progress < 0x258 and a calm version when
  >= 0x258 (H). The exit step 0x8017DF40 sets flag 0x132 with SoundCmd1(1) when progress == 0x258 and the flag is
  clear (H); A16 0x801893BC also acts only at progress 0x258 with flag 0x132 clear (H). The progress set to 0x258
  is not in this C (M: it is in the event scripts). Mostly own code, unlike the rest of the area.
* **Size:** 227 functions (own 136; F017 8, F018 5, F019 3, F050 5, F053 7, F087 3; 22 S; 19 ACTOR-MAIN, P01,
  2 P02, P03).
* **Actors:**
  * A10 controller 0x80186094 (set-up 0x801860D0): progress < 0x258 -> SelectCollisionMap(0), spawns kind 0x1DE
    (kept at +0x6C) and 0x14D, then 0x801861DC starts intro event D_8018EEB4 (H). Fight-direction states
    0x8018624C / 0x801867D0 / 0x80186B24 / 0x80186DDC: camera shakes, sounds 0x726 / 0x727 / 0x72D / 0x72F / 0x79F /
    0xC05 / 0xBC2 / 0xBC3 / 0xC8F, spawns 0x14B, 0x3BD, 0x222, 0x21E, 0x217, events D_8018EFBC and D_8018F04C
    (the latter with SoundCmd1(1)), a second SelectCollisionMap (H). M: intro, phase change and outro of the fight.
  * A9 boss body (set-up 0x801801F8, states 0x801802B0-0x8018226C): several large attack states (0x801803A0,
    0x801806F8, 0x80180ABC, 0x80180EC0, 0x801813BC, 0x801818E8, 0x80181C84), flying with HeadingPitchTo /
    MoveCollidePassable, contact hits via BoxesOverlap (0x8018388C) and PathHitsModel (0x801839A4) -> HitPlayer,
    sounds 0x725 / 0x729 / 0x7A7 / 0x7A8 / 0xC2D / 0xC06, a panned sound 0x730 (0x80183DA0), camera shake (H).
  * Boss damage 0x8018233C: on a hit (+0x5C bit 0, but not hit kind 0x22) 8 damage to the shared pool
    D_8018EDFC, sound 0xC08, a spark prop; pool <= 0 -> parent's state 4 and own state 0xA (defeat) (H).
  * A3-A8 (0x8017E758-0x8017FF54): boss projectiles / pieces: homing shots (0x8017E7E8, TurnStepToPlayer,
    ActorSegmentDamagesPlayer), a lobbed piece that lands (0x8017EE34, sound 0xC07, HitPlayer), part debris
    (0x8017F234 / 0x8017F55C, GetPartWorldMatrix, sounds 0x770 / 0x72B), sprite effects (H).
  * A11 0x80187788 (sound by subtype, 0x775), A13 0x801884D4 (0x72E / 0x732), A15 0x8018868C (0x773, 0x14C,
    ShowDefeatAlt, 0xBC1, spawns 0x1F3) (H; M more boss parts).
  * Families: F017 / F018 / F019 / F087 (others'), F050 lights, F053 (A19).
* **Boss:** shared HP pool D_8018EDFC (starts from data), 8 per hit (H); phases driven by the controller's states
  (M); defeat -> controller state 4 (H). What follows (progress / flags) is in the event scripts (unknown).
* **Exits:** P01 (exit step sets flag 0x132 at progress 0x258) (H); no RequestMapChange in own code (H).
* **Camera:** set-up 0x8017E08C, mode 0x8017E180 follows kind 0x14B (FindActorByKind) (H); a second camera
  dispatcher at 0x8018774C with update 0x80187554 (H).

#### Names: SC03_105
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x801860D0 | func_sc03_105_801860D0 | BossCtrlInit | progress < 0x258: spawn 0x1DE / 0x14D | M |
| 0x801861DC | func_sc03_105_801861DC | BossCtrlIntro | StartEvent D_8018EEB4 | M |
| 0x8018624C | func_sc03_105_8018624C | BossCtrlPhase1 | shakes, sounds, spawns 0x14B / 0x3BD | L |
| 0x801801F8 | func_sc03_105_801801F8 | BossInit | SetupActor, AllocActorModel | M |
| 0x8018233C | func_sc03_105_8018233C | BossTakeHit | pool -= 8, 0xC08, defeat at 0 | H |
| 0x8018388C | func_sc03_105_8018388C | BossBodyHitPlayer | BoxesOverlap, HitPlayer | M |
| 0x801839A4 | func_sc03_105_801839A4 | BossPartHitPlayer | PathHitsModel, HitPlayer | M |
| 0x80183DA0 | func_sc03_105_80183DA0 | PlayBossSoundPanned | ProjectPoint, 0x730 with pan | M |
| 0x80183EE8 | func_sc03_105_80183EE8 | StopBossSound | sound command 4, 0x730 | M |
| 0x8017DF40 | func_sc03_105_8017DF40 | RoomExitSetFlag132 | flag 0x132 at progress 0x258 | H |
| 0x8017E7E8 | func_sc03_105_8017E7E8 | HomingShotInit | AllocActorModel, HeadingPitchTo | M |
| 0x8017EA24 | func_sc03_105_8017EA24 | HomingShotFly | TurnStepToPlayer, damage segment | M |
| 0x8017EE34 | func_sc03_105_8017EE34 | LobbedPieceFly | 0xC07, HitPlayer | M |
| 0x8017E180 | func_sc03_105_8017E180 | CameraFollow14B | FindActorByKind(0x14B) | M |
| 0x801893BC | func_sc03_105_801893BC | PostBossMarker | progress 0x258, flag 0x132 clear | M |
* About 100 more own boss helper functions (0x801829CC-0x80185810, prop / part math) not proposed.

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

### SC03_110
* **Place:** unknown; a room with a flowing floor / stream zone and an animated texture (M). No progress value set or
  tested (H). Its F024 treasure-type actor tests map 0x3028 (H; this or a twin map, data unknown).
* **Size:** 100 functions (own 4, lone-shared 18, family 62: F096 x26, F013 x15, F024 x11, F057 x10; 4 actor
  dispatchers, 4 stubs; P01, P02, P03).
* **Actors:**
  * A1 (0x8017C8B8) + set-ups 0x8017BFEC / 0x8017C378: F024 (a collectable that checks GetVar(0x3B + i) and starts
    event D_80185818 when Musashi comes within distance ~0x52; AddMaxBp / AddBp on pick-up) (H; owned elsewhere).
  * A2-A4 (0x8017CD10, 0x8017D33C, 0x8017D5DC): F013 effect / scene actors (owned elsewhere).
  * Flow zone 0x8017ED94 (own; dispatcher-less handler, variants 0-4): when Musashi is inside its band (+-0x60 across,
    +-0x1B0 along x or z) and on the ground (TraceMap bit 0x2000), it picks one of 25 8-byte vectors (D_80185988,
    5 sub-bands per variant) and passes it to engine func_8014CB9C, which stores it as Musashi's per-frame push
    vector (player +0x140, flag +0x146 = 1, cleared each frame) (H). Variant 0 also drives a looping sound 0x738:
    full volume inside a zone, otherwise volume by ground distance to the nearest kind-0x1E4 actor, and sound command
    4 with 0x738 (stop, M) beyond it (H). M: a current / conveyor floor; L: flowing water.
  * Static model 0x8017F234 (own): AllocActorModel, model data D_8019BF28, flags 0x60000040 (H).
  * Texture animator 0x8017F2D8 -> 0x8017F2F8 (own): every frame steps a 16-frame cycle of two MoveImage VRAM copies
    (tables D_8019BB90 / D_8019BC50, 0x8017F3D4) (H): an animated texture (M: the flowing surface).
  * Hopping enemy (0x8017F43C, set-up 0x8017F4CC): F096 (M).
  * Creature with main 0x80180FE0 (S11) and F057 states: plays 0x6FE every 16 frames with distance volume
    (0x80181CB4) (H); behaviour in F057 (owned elsewhere).
* **Exits:** P01 only (0x8017E898 with SoundCmd1(1), 0x8017E970 without) (H); destinations unknown (data).
* **Sound:** 0x738 loop (flow), 0x6FE (F057 creature), 0x62E / 0xBFE (F024), 0x832 / 0xA74 (F096) (H).
* **Unknown / notes:** camera 0x8017EA34 (projection 0x190, distance 0x3E8, angle 0xE3); mode 0x8017EB14 clamps focus
  x -0xB40..0x940, y <= -0x300 and toggles two distances (D_80185984) on GetObjPadPressed & 3 (H).

#### Names: SC03_110
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EB14 | func_sc03_110_8017EB14 | CameraClampToggleDist | clamp + pad-toggled distance | H |
| 0x8017ED94 | func_sc03_110_8017ED94 | FlowZoneUpdate | band test, func_8014CB9C push vector, sound 0x738 | H |
| 0x8017F234 | func_sc03_110_8017F234 | StaticModelInit | AllocActorModel + fixed model data | M |
| 0x8017F2D8 | func_sc03_110_8017F2D8 | TexAnimMain | calls 0x8017F2F8 | M |
| 0x8017F2F8 | func_sc03_110_8017F2F8 | StepTexAnim | 16-frame MoveImage cycle | H |
| 0x8017F3D4 | func_sc03_110_8017F3D4 | CopyTexFrame | MoveImage of one 6-halfword entry | H |
| 0x80180FE0 | func_sc03_110_80180FE0 | HummingCreatureMain | dispatcher + 0x6FE every 16 frames | M |
| 0x80181CB4 | func_sc03_110_80181CB4 | PlayDistanceHum | SoundRequest(0x6FE) volume by distance | H |

### SC03_111
* **Place:** unknown outdoor room (M) with a clock-driven object: sets progress 0xE6 (230) (H) and, through the F023
  chest-type actor, progress 0x5A (90) with flag 0xEA (H). F025 walker set-up (S4, 0x8017BEBC) gates on a flag table
  D_801885D0 and progress 200 (H).
* **Size:** 142 functions (own 14, lone-shared 15, family 88: F093 x29, F013 x15, F023 x12, F024 x11, F025 x10, F033,
  F009, F035; 11 actor dispatchers, 7 stubs; P01, P02, P03 plus an own mesh drawer 0x8017FB38).
* **Actors:**
  * Clock object (dispatcher 0x80180FB4, set-up 0x80181090, state 0x80180D4C; all own): a model with a second model at
    +0xCC; while the game hour D_80078EB1 is 3-6 it swells (scale x/z up to +0x280 * rsin, y shrinks) and otherwise
    shrinks back (H). Talk (marker only while progress < 0xE6; callback 0x801812B4: within distance^2 0x14400) runs
    event script D_80188AB8 if fully opened, else D_80188AF8; after the first one ends, SetProgress(0xE6) (H); from
    progress >= 0xE6 it stays opened and hidden-flagged (H). L: something that opens at dawn (a flower / gate).
  * Rotating carrier 0x80181178 / 0x801811E0 (own): SetupActor, SpawnActorArg(0x1C4, 1); turns by +0xFC per frame and
    moves on a circle of radius +0xDC, carrying Musashi and turning him with it (CarryPlayer) (H): a turntable / ride (M).
  * Glow sprite 0x8018151C / 0x8018154C -> 0x80181574 (own): draws four screen quads (clut 0x31, colour 0x406040)
    around its projected position (H). L: a light effect.
  * Texture animation 0x80181324 -> 0x80181344 (MoveImage cycle, as in sc03_110) (H).
  * F025 walker NPC (0x8017C058-0x8017C650: walks, StartEventKeepPlayer when talked to, sound 0x828), F024 collectable
    (event D_801886EC, map 0x3028 test), F013 effects, F093 chained creature, F023 chest / reward actor (A10: flag
    table D_801B61D0, AddMoney, SetProgress(0x5A), SetFlag(0xEA)) and F023 talker A11 (0x5BF) (H; families elsewhere).
* **Events / scripted scenes:** D_80188AB8 / D_80188AF8 (clock object); F025 / F023 / F024 scripts (H).
* **Exits:** P01 only (0x80180850 with SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8018093C / 0x80180A10: focus y >= -0x332, z >= -0x620, camera angle by distance from a
  centre point (0xE3 + d * 683 / 1568, capped 0x38E) and heading ratan2(x, z): a camera orbiting a central point (H);
  pad toggle of two distances (D_80188A54).

#### Names: SC03_111
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8018093C | func_sc03_111_8018093C | RoomInitCamera | SetCameraUpdate(0x801809D4), SnapCamera | H |
| 0x80180A10 | func_sc03_111_80180A10 | CameraOrbitCentre | ratan2 heading, angle by centre distance | H |
| 0x80180D4C | func_sc03_111_80180D4C | ClockObjOpenAndTalk | hour 3-6 swell, scripts, SetProgress(0xE6) | H |
| 0x80180FB4 | func_sc03_111_80180FB4 | ClockObjMain | table dispatch + second model follow | M |
| 0x80181090 | func_sc03_111_80181090 | ClockObjInit | two models, talk marker while progress < 0xE6 | H |
| 0x801812B4 | func_sc03_111_801812B4 | ClockObjCanTalk | distance^2 <= 0x14400, sets +0xFE = 1 | H |
| 0x80181178 | func_sc03_111_80181178 | TurntableInit | SetupActor, SpawnActorArg(0x1C4, 1) | M |
| 0x801811E0 | func_sc03_111_801811E0 | TurntableCarry | circle move + CarryPlayer | H |
| 0x80181344 | func_sc03_111_80181344 | StepTexAnim | MoveImage cycle | H |
| 0x80181574 | func_sc03_111_80181574 | DrawGlowQuads | four screen quads at projected position | M |
| 0x8017FB38 | func_sc03_111_8017FB38 | DrawMeshVariant | own GTE mesh renderer | M |

### SC03_112
* **Place:** unknown; an enemy room built from the same parts as sc02_039 / sc03_108 (an own copy of the F059
  multi-part machine and camera) plus the F093 / F094 / F096 enemies (H). No progress value set or tested (H).
* **Size:** 158 functions (own 12, lone-shared 26, family 100: F093 x29, F096 x26, F094 x19, F044 x12, F030 x6,
  F033 x5, F009 x3; 6 actor dispatchers, 6 stubs; P01, P02, P03).
* **Actors:**
  * A1 / A2 (0x8017BEBC, 0x8017C150): effect actors (S27 / F009) (H).
  * A3 (0x8017EBA8) with set-ups 0x8017EA24 / 0x8017F0F4 and helper 0x8017E9A0 (own): the sc03_108 F059 multi-part
    model rebuilt for kind 0x19B (instead of 0x199): parts spawn SpawnActorArg(0x19B, n) children sharing the model;
    0x8017F1CC runs a MimeBlend shape animation (0x8017EBE4), a motion step (0x8017EE48) and five
    ActorSegmentHitsPlayer tests (0x8017EFAC) (H). L: a large moving machine / creature that hurts on contact.
  * A4 (0x8017F3B8): a talking NPC (S20 set-up, RunScript D_801896F0 (S12), S25 wait, distance-64 talk test S18) (H).
  * Burst enemy (F044 + F094), A5 F093 chained creature (0x80184278), F096 hopper, A6 F030 sprite effect (H).
* **Exits:** two own exit steps 0x8017DEF8 / 0x8017DFBC: only SoundRequest(0x1D) (no 0x1C, no func_8001BFD0), with
  / without SoundCmd1(1), then StartExitFade (H). Destinations unknown (data).
* **Sound:** 0xAA1 (F044), 0x521 / 0xC5D / 0x98F etc. via families (H).
* **Unknown / notes:** camera 0x8017E06C / 0x8017E160 (own copy of the F059 camera: follows Musashi's facing, pad
  toggle of two distances; 0x8017E4B4 adds a third clip test 0x8017E7C4) (H).

#### Names: SC03_112
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DEF8 | func_sc03_112_8017DEF8 | RoomExitStepMusic | 0x1D, SoundCmd1(1), StartExitFade | H |
| 0x8017DFBC | func_sc03_112_8017DFBC | RoomExitStep | 0x1D, StartExitFade | H |
| 0x8017E06C | func_sc03_112_8017E06C | RoomInitCamera | SetCameraUpdate(0x8017E124) | H |
| 0x8017E160 | func_sc03_112_8017E160 | CameraFollowFacing | pad distance toggle, facing offset | H |
| 0x8017E4B4 | func_sc03_112_8017E4B4 | CameraClipAngle | three clip tests + ratan2 | M |
| 0x8017EA24 | func_sc03_112_8017EA24 | MachineInit | AllocActorModel, SpawnActorArg(0x19B) parts | H |
| 0x8017E9A0 | func_sc03_112_8017E9A0 | SpawnMachinePart | SpawnActorArg(0x19B) | H |
| 0x8017EBA8 | func_sc03_112_8017EBA8 | MachineMain | ACTOR-MAIN of A3 | M |
| 0x8017EBE4 | func_sc03_112_8017EBE4 | MachineMimeBlend | MimeBlend between shapes | M |
| 0x8017EFAC | func_sc03_112_8017EFAC | MachineHitPlayer | 5 x ActorSegmentHitsPlayer | H |
| 0x8017F0F4 | func_sc03_112_8017F0F4 | MachinePartInit | two models, NextState | M |
| 0x8017F1CC | func_sc03_112_8017F1CC | MachineUpdate | blend + motion + hit tests | M |
| 0x8017F3B8 | func_sc03_112_8017F3B8 | TalkerMain | ACTOR-MAIN of A4 | M |

### SC03_113
* **Place:** unknown; a room with vertical moving-step columns tied to flag 0xBA (H), the F025 walker NPC (progress
  200 / flag-table gate) and F093 / F057 creatures. No progress value set (H). Its step-column code is shared only
  with sc05_002 (S2) (H).
* **Size:** 100 functions (own 2, lone-shared 25, family 52: F093 x29, F025 x10, F057 x10, F009 x3; 6 actor
  dispatchers, 7 stubs; P01, P02, P03).
* **Actors:**
  * A1 / A2: effect actors (S27, F009). A3 (0x8017E6EC): F025 walker / talker (StartEventKeepPlayer, event D_80186E90,
    SpawnActorArg(0x30 / 0x1F8), sounds 0x828 / 0x829, SetFlag(D_80186EB0[variant])) (H; family elsewhere).
  * Step column, kind 0x1A3 (A5 0x8017F8C8, set-up 0x8017F904, S2): a sprite whose texture offset +0x30 scrolls by a
    per-variant speed (0x8017F394, wrapping every 0x30) and that emits a kind-0x1A4 step every D_8018716C[variant]
    frames; at set-up it fills the column with steps (0x8017F6CC: spacing 0x100 while its 0x8000 variant bit is set
    and flag 0xBA is clear, else 0x180) (H).
  * Step, kind 0x1A4 (set-up 0x8017F9FC, move 0x8017FAD4, S2): a model platform that moves vertically at the column's
    speed, carries Musashi exactly (CarryPlayerExact) and is freed after the column length D_80187154 (H). M: an
    escalator-like chain of rising / falling platforms (L: a waterfall with floating logs).
  * Column variant 0 runs 0x8017F4DC (own): a loop sound 0x704 (or 0xBAA for 0x8000-bit columns) with volume by
    Musashi's x distance to the nearest column, sound command 4 (stop) when far (H).
  * F093 chained creature; F057 creature with distance hum (0x8017FC3C, S11) (H).
* **Puzzles / mechanisms:** flag 0xBA changes the marked columns' step pattern (H): M, a switch elsewhere (sc03_109's
  spinning platform also waits for 0xBA) turns the flow on.
* **Exits:** P01 only (with / without SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8017F07C (own set-up) + mode 0x8017F15C (S34, pad toggle) (H).

#### Names: SC03_113
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F07C | func_sc03_113_8017F07C | RoomInitCamera | SetCameraUpdate(0x8017F120), SnapCamera | H |
| 0x8017F394 | func_sc03_113_8017F394 | StepColumnScrollEmit | texture scroll + timed SpawnActor(0x1A4) | H |
| 0x8017F4DC | func_sc03_113_8017F4DC | StepColumnSound | 0x704 / 0xBAA volume by nearest 0x1A3 | H |
| 0x8017F6CC | func_sc03_113_8017F6CC | StepColumnFill | initial steps, spacing by flag 0xBA | H |
| 0x8017F8C8 | func_sc03_113_8017F8C8 | StepColumnMain | ACTOR-MAIN of A5 | M |
| 0x8017F904 | func_sc03_113_8017F904 | StepColumnInit | AllocActorSprite, flag 0xBA state choice | H |
| 0x8017F9FC | func_sc03_113_8017F9FC | StepInit | AllocActorModel, collision | H |
| 0x8017FAD4 | func_sc03_113_8017FAD4 | StepMoveCarry | vertical move, CarryPlayerExact, free at end | H |

### SC03_114
* **Place:** a cutscene room (M): a director actor plays one event with camera cuts and leaves by RequestMapChange
  (H). No progress value set or tested (H). One alternate exit step loads field file 2 instead (0x8017CF38:
  FadeDone(4) -> RequestFieldFileLoad(2), S2) (H).
* **Size:** 47 functions (own 12, lone-shared 14, family 5: F098; 3 actor dispatchers, 6 stubs; P01, P02, P03).
* **Actors:**
  * Director (A1 0x8017D704; room set-up 0x8017D110 spawns seven cast actors kind 0x336 with SpawnActorFromDef and
    keeps them at +0xCC.. +0xF4) (H). 0x8017D814 waits +0x1C frames, clears flags 0x125-0x12C and 0x130, StartEvent
    D_80183140 (H). 0x8017D518 runs it: each flag 0x125-0x12B the script raises is cleared and turned into an action -
    0x125 / 0x126 camera cuts (ScriptOpCameraCut D_801830F0 / D_80183110), 0x127 a camera move (D_80183120), 0x128 /
    0x129 / 0x12A swap a cast member's motion data (+0xF8), 0x12B func_800183E0(D_8019A6CC) (H). Pad (GetPadPressedDir
    & 0x840) when func_800CF8B4() allows skips ahead (H; M: skip button). When the script ends, 0x8017D8DC
    RequestMapChange(D_80182450) (H). 0x8017D7C8 / 0x8017D7F8 set cast motion data (H).
  * Cast member behaviour 0x8017D928 (own): idles on script D_801824A8 (blinks via +0x98 timer), switches to D_80182640
    when flag 0x12C is set and to D_80182778 when flag 0x130 is set (H); 0x8017DA30 / 0x8017DB74 random-idle helpers
    (func_800183E0, rand) (H); 0x8017DC38 slides +6 by one every third frame for 21 frames after flag 0x130 (H);
    0x8017DCC0 draws a 0x54 x 0x58 shaded quad on the model (H: a shadow / glow card, M).
  * A2 (0x8017DD64, S2): a model that bobs with rsin (H). A3 (0x8017DEA8, S2): a sprite emitter of F098 particles
    (0x8017E070: prop 0x55 with velocity from a curve, func_800139C8 / func_8001382C) (H): smoke or sparks (L).
* **Events / scripted scenes:** event D_80183140 with flag-driven camera and cast changes (H).
* **Exits:** RequestMapChange(D_80182450) after the event (H; destination unknown, data); RequestFieldFileLoad(2)
  exit step (H).
* **Unknown / notes:** camera 0x8017CFC0 (own) with S34 pad-toggle mode and 0x8017D0E4 (H).

#### Names: SC03_114
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D110 | func_sc03_114_8017D110 | RoomSpawnCast | 7 x SpawnActorFromDef(kind 0x336) | H |
| 0x8017D518 | func_sc03_114_8017D518 | EventRunFlagCues | flags 0x125-0x12B -> camera / motion cues, skip | H |
| 0x8017D704 | func_sc03_114_8017D704 | DirectorMain | ACTOR-MAIN of A1 | M |
| 0x8017D814 | func_sc03_114_8017D814 | EventStartScene | clear cue flags, StartEvent(D_80183140) | H |
| 0x8017D8DC | func_sc03_114_8017D8DC | EventExitMap | RequestMapChange(D_80182450) | H |
| 0x8017D7C8 | func_sc03_114_8017D7C8 | CastSetMotionA | +0xF8 = D_80182BD0 | M |
| 0x8017D7F8 | func_sc03_114_8017D7F8 | CastSetMotionB | +0xF8 = D_80182908 | M |
| 0x8017D928 | func_sc03_114_8017D928 | CastPickScript | scripts by flags 0x12C / 0x130 | H |
| 0x8017DC38 | func_sc03_114_8017DC38 | CastSlideOnCue | moves after flag 0x130 | H |
| 0x8017DCC0 | func_sc03_114_8017DCC0 | DrawShadeQuad | fixed quad on model | M |

### SC03_115
* **Place:** unknown room visited around progress 0x280-0x294 (640-660): its pick-one item stand appears only while
  progress < 0x294 and can be talked to from 0x280; scripts change at 0x28A (650) (H). Also the F044 / F094 burst enemy
  and an F057 creature (H).
* **Size:** 102 functions (own 16, lone-shared 22, family 47: F094 x19, F044 x12, F057 x10, F030 x6; 2 actor
  dispatchers, 1 player-action dispatcher, 6 stubs; P01, P02, P03).
* **Actors:**
  * Item stand objects (A1 0x8017D5B8, set-up 0x8017D7CC, own): models whose variant +0x70 names an item; var 0xDE holds
    the variant Musashi has taken (H). Taking one (0x8017D628) puts item 0x62 + variant in a free bag slot (ovl36
    func_800D0EC4 / func_800D0F0C: vars 0x2F-0x3A) and hides the model; taking another (0x8017D684) removes the old
    item from the bag (func_800D0F4C), puts the new one in and swaps the scripts (H). Talk (0x8017D8C8, allowed only for
    a shown object within ground distance 64, 0x8017D9C4) runs D_80183F98 before progress 0x28A, after it D_801840B0
    if something is taken else D_80184010 (H). M: Musashi may carry exactly one of several objects.
  * 0x8017D750 (own): stores Musashi's offset from the actor and plays 0x6A6 (H).
  * Burst enemy (dispatcher 0x8017DA34, own copy of the F044 main; F094 states), F057 creature, A2 F030 effect (H).
* **Events / scripted scenes:** player-action sequence 0x8017D09C (own phases): BeginScene; Musashi turns to the
  active camera's point (ActionHelper_1AB0), EndScene, SetPlayerMotion; a second scene turns him to D_80126B3C,
  ClearActionHandler (H). M: used when he picks an object up.
* **Exits:** P01 only (with / without SoundCmd1(1)) (H); destinations unknown (data).
* **Unknown / notes:** camera 0x8017D2D0 + mode 0x8017D3B0 (own clamp) (H).

#### Names: SC03_115
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017D09C | func_sc03_115_8017D09C | PickUpSceneMain | PLAYER-ACTION-MAIN | M |
| 0x8017D128 | func_sc03_115_8017D128 | PickUpSceneFaceCamera | ActionHelper_1AB0 to camera point, EndScene | H |
| 0x8017D234 | func_sc03_115_8017D234 | PickUpSceneTurnBack | turn to D_80126B3C, ClearActionHandler | H |
| 0x8017D3B0 | func_sc03_115_8017D3B0 | CameraClampFocus | clamp then follow helper | M |
| 0x8017D5B8 | func_sc03_115_8017D5B8 | ItemStandMain | ACTOR-MAIN of A1 | M |
| 0x8017D628 | func_sc03_115_8017D628 | ItemStandTake | item 0x62 + variant to bag, var 0xDE | H |
| 0x8017D684 | func_sc03_115_8017D684 | ItemStandSwap | remove old item, give new | H |
| 0x8017D7CC | func_sc03_115_8017D7CC | ItemStandInit | progress 0x280 / 0x294 gates | H |
| 0x8017D8C8 | func_sc03_115_8017D8C8 | ItemStandTalk | scripts by progress 0x28A / var 0xDE | H |
| 0x8017D948 | func_sc03_115_8017D948 | ItemStandTalkEnd | EndEvent, show / hide model | H |
| 0x8017D9C4 | func_sc03_115_8017D9C4 | ItemStandCanTalk | shown + ground distance 64 | H |
| 0x8017D750 | func_sc03_115_8017D750 | ItemStandNoteOffset | offset to Musashi + 0x6A6 | M |

### SC03_116
* **Place:** unknown room with a barrier removed by destroying a set of objects (M). Exit 0x80180B8C sends SoundCmd1(1)
  only while progress < 0x258 (600) (H), so the room is visited before and after that point (M).
* **Size:** 69 functions (own 35, lone-shared 11, family 5: F050; 4 actor dispatchers, 7 stubs; P01, P02, no P03:
  an own 652-line mesh renderer 0x8017BF14 called from 0x8017BEBC).
* **Actors:**
  * Swelling objects, kind 0x1C0 (set-up 0x80181A5C, update 0x801819F4, own): not spawned once flag 0x11C is set (H).
    Each hit (except hit kind 0x22) shrinks the model by 0x80 per frame for 8 frames, spawns prop 0x22 and plays 0xA26;
    at scale <= 0x2000 it plays 0xA25 and enters its last state 0x80181B88 (shrink to 0, dust shadow, clear sequence
    point +0x70, free) (H). 0x80181E28 runs a loop sound 0xA2C with volume from the on-screen position (H). Touching
    one hurts (HitBoxEdgesHitPlayer, 0x80181B44) (H).
  * Barrier (A3 0x80181F6C, set-up 0x80181FA8, own): not spawned once flag 0x11C is set; when no kind-0x1C0 with arg 2
    remains it dims its colour, and when none at all remain it StartEvent(D_80186500) (0x801820AC) (H). Script cues
    (0x8018213C): 1 = find kind 0x334 and play 0xA27, 2 = animate the model 0x40 frames then 0xA2A, 3 = SetSeqPointN,
    SetFlag(0x11C, 1), hide (H).
  * A1 (0x80180FBC, own): an effect sequence started by cue 1 (sound 4 + 0xA27 stop, 0xA28, timed phases, drawn with
    func_80017758 in 0x801812AC) (H). A2 (0x801814B0, own): a sprite effect with grow / hold / fade phases (H).
  * A4 (0x80182378): F050 (owned elsewhere). 0x801822A0 sets four sequence points at start (SetSeqPointN x4) (H).
* **Puzzles / mechanisms:** destroy every 0x1C0 object to open the barrier; flag 0x11C keeps it open (H).
* **Exits:** P01 + 0x80180B8C (progress-dependent SoundCmd1(1)) (H); destinations unknown (data).
* **Sound:** 0xA25-0xA2C series (H).

#### Names: SC03_116
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017BEBC | func_sc03_116_8017BEBC | DrawRoomMesh | GsGetLs + own renderer 0x8017BF14 | M |
| 0x80180B8C | func_sc03_116_80180B8C | RoomExitStep | SoundCmd1(1) only below progress 0x258 | H |
| 0x80181A5C | func_sc03_116_80181A5C | SwellingInit | flag 0x11C gate, model, script | H |
| 0x801819F4 | func_sc03_116_801819F4 | SwellingUpdate | sound + hit handling | M |
| 0x80181C4C | func_sc03_116_80181C4C | SwellingTakeHit | shrink, prop 0x22, 0xA26 / 0xA25 | H |
| 0x80181E28 | func_sc03_116_80181E28 | SwellingLoopSound | 0xA2C by screen position | H |
| 0x80181B88 | func_sc03_116_80181B88 | SwellingVanish | shrink to 0, ClearSeqPoint, free | H |
| 0x80181F6C | func_sc03_116_80181F6C | BarrierMain | ACTOR-MAIN of A3 | M |
| 0x80181FA8 | func_sc03_116_80181FA8 | BarrierInit | flag 0x11C gate, model | H |
| 0x801820AC | func_sc03_116_801820AC | BarrierWaitCleared | no kind 0x1C0 left -> StartEvent | H |
| 0x8018213C | func_sc03_116_8018213C | BarrierEventCues | cues 1-3, SetFlag(0x11C) | H |
| 0x80180FBC | func_sc03_116_80180FBC | OpenEffectMain | ACTOR-MAIN of A1 | M |
| 0x801814B0 | func_sc03_116_801814B0 | SpriteFxMain | ACTOR-MAIN of A2 | M |
| 0x801822A0 | func_sc03_116_801822A0 | RoomSetSeqPoints | 4 x SetSeqPointN | H |
