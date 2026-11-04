# Stage survey: what each stage image's own code does (r275, research only)

A stage-by-stage map of the **own code** of every stage image (`src/stg/scNN_NNN.c`, plus the village
`src/stage/sc03_001.c` as the reference), read from the matched C of the decomp-only snapshot (main = a75e323d,
4 Nov 2026). Phase 2 (understanding) work: nothing here is applied. The naming tables are proposals for a later local
card, which applies them to `stg/symbol_addrs_<stage>.txt` and checks that every stage still matches.

Files: `docs/stage_survey.md`, `docs/stage_survey_2.md`, `docs/stage_survey_3.md`.

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

### F002: SC01_005 / SC01_006 room code (2 stages, 47 shapes)
* **Stages:** sc01_005 sc01_006 (the identical-code pair).
* **What it is:** nearly all of the pair's own code (H): the room host (first-visit event D_801BBE98 with progress
  0xA / 2 and script-signal flags 0x125-0x129 driving Musashi's moves; Start skip), the rest point (AddHp / AddBp 999
  with a colour overlay 0x8017FD50), three F001 menu openers, path-walking cast members, and the item display that
  unwraps item n (SetVar(0x63 + n, | 0x20), sound 0xC86, white flash). Details in the SC01_005 entry.
  **Where in the first stage:** sc01_005 0x8017D220-0x801822B0.
| shape (sc01_005) | proposed | evidence | conf |
|---|---|---|---|
| 0x80180010 | HostStartFirstEvent | SetProgress(0xA), flags 0x125-0x128 = 0, StartEvent | H |
| 0x801800C0 | HostRunFirstEvent | signal flags -> player moves, Start skip, SetProgress(2) | H |
| 0x801803AC | HostEventExit | SetProgress(2), RequestMapChange | H |
| 0x80180808 | RestInit | progress < 5 or 0x294: AddHp / AddBp 999 | H |
| 0x8017FD50 | DrawRestOverlay | AllocPrim full-screen colour quads | M |
| 0x8018041C | HostStartSecondEvent | StartEvent(D_801BC348) | H |
| 0x801812B0 | DisplayInit | item model D_801C339C[n], opened bit 0x20 | H |
| 0x8018165C | DisplayTalk | message D_801C37D4[n] | H |
| 0x80181894 | DisplayUnwrap | parts fly off, scale up, sound 0xC86, SetVar bit 0x20 | H |
| 0x80181B00 | DisplayPlaySound | SoundRequest(id) per item | M |
| 0x8017F790 | RoomMusicCheck | GetVar(0x7E), SoundCmd1(1) | M |

### F003: room-event player action phases (3 stages, 8 shapes)
* **Stages:** sc01_005 sc01_006 sc03_006. **What it is:** the PLAYER-ACTION-MAIN phases the F002 host starts (one
  with sound 0xA05) (M). **Where:** sc01_005 0x8017BF00-0x801807D8.

### F004: ground enemy (3 stages, 36 shapes)
* **Stages:** sc01_077 sc02_000 sc02_003.
* **What it is:** one enemy kind's full state set (H for the calls): init 0x80183324 (SetupActor, SpawnShadow,
  SnapToGround), random wander (0x8018281C / 0x80182E7C: rand, SetLocalVelocity, StopWithGravity), push-out from walls
  and the player (0x801809BC: CollidePath, RestorePrevPos; 0x80180AD4 UndoMoveIntoPlayer), chase / attack
  (0x80181BE4: TurnStepToTarget, ActorSegmentDamagesPlayer, SpawnActorFromDef, F010's debris spawn), hurt
  (0x80181F08: StartRumbleScript, TakeDamage, knock-back states 0x80182338-0x801827A4), death (0x801827A4:
  SpawnKind39Trio, sounds 0x47B / 0x478), drop (0x80183AF0 / 0x80183CF4 DropItem), group attack 0x801824D0
  (DamageActorsNear, SpawnHitSpark), call to kind 0x298 (0x80182A24) with sound 0x436 (0x8018301C).
  **Where:** sc01_077 0x8017EF50-0x80183CF4. Names: EnemyInit (0x80183324), EnemyWander (0x8018281C), EnemyChase
  (0x80181BE4), EnemyHurt (0x80181F08), EnemyDie (0x801827A4), EnemyDropItem (0x80183CF4), EnemyPushOut (0x801809BC)
  (M each).

### F005: four-switch mechanism (2 stages, 11 shapes)
* **Stages:** sc01_077 sc01_080. **What it is:** switch actors that, on approach, signal kind 0x161 and then on
  Musashi's action (StartActionTable, sounds 0x49E / 0x4A2) move and count D_801270C8; four sets D_801270CC = 2 (H);
  a draw helper 0x80185BA4 (rsin, RotTransPers x4: a rotating quad) and a spawner of kind 0x24 (0x80186078) (H).
  **Where:** sc01_077 0x80185BA4-0x80186A04. Names: SwitchApproach (sc01_080 0x8017E124), SwitchActivate
  (0x8017DC78), SwitchMove (0x8017E1FC) (H).

### Minor families
* **F006** (16 stages, 4 shapes; sc01_077 0x8017C294-0x8017C908): turns a screen rectangle into four world points at
  screen depth (ReadGeomScreen, transpose of the rotation, ApplyMatrixSV, RotTransPers) (H); name ScreenRectToWorld
  (0x8017C294), helpers UnrotateVector (0x8017C66C), ProjectPoint (0x8017C908) (M).
* **F007** (9 stages, 4 shapes; sc01_077 0x801858AC-0x80185B5C): ambient prop spawner: SpawnProp(4) with heights from
  a table and random size, 10 at a time (0x801859AC), prop update / free (H); SpawnAmbientProp (M).
* **F008** (8 stages, 4 shapes; sc01_077 0x801844AC-0x801846F8): tiny SetScript state helpers, one with
  SpawnKind13 (H); not worth names beyond SetAnimState (L).
* **F009** (33 stages, 3 shapes; sc01_077 0x8017C0BC-0x8017C230): effect-owner actors that free their effect
  (FreeEffect, func_8001CF30) (H); EffectOwnerFree (M).
* **F010** (17 stages, 3 shapes; sc01_077 0x80184ED8-0x8018514C): SpawnActor(0x85) (0x80184ED8) and that debris
  actor's init / update (random rotation, FindGround, bone math) (H); SpawnDebris85, DebrisInit, DebrisUpdate (M).
* **F011** (10 stages, 3 shapes; sc01_077 0x80185428-0x801856F8): a shooter (aims with HeadingPitchTo, sound
  0x43A / 0x6D6, SpawnActor(0xBC)) and its projectile (MoveCollidePassable, ActorSegmentDamagesPlayer, SpawnEffect /
  SpawnPropFrom on impact, timed free) (H); ShooterFire, ProjectileFly, ProjectileFall (M).
* **F012** (4 stages, 3 shapes; sc01_077 0x80183A50-0x80183AA8): squash / recoil helpers (UpdateSquash,
  EaseScaleNormal + RecoilFromBehind, timer + SetScript) (H).
* **F013** (37 stages, 15 shapes; sc01_084 0x8017BEBC-0x8017C910): Musashi warp effect pair: an effect actor that
  hides the player (HidePlayerScene, SetPlayerFlag7E2) and a reverse one that shows him (ShowPlayerScene,
  ClearPlayerFlag7E2), both tracking a bone point (0x8017C218), with PlaySe and SpawnEffect; plus a random particle
  (0x8017C800) and its drawer (0x8017C910) (H) (M: warp-out / warp-in). Names: WarpOutEffect (0x8017C064),
  WarpInEffect (0x8017C610), TrackBonePoint (0x8017C218), WarpSparkle (0x8017C800) (M).

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
  (y kept 0x80-0x100 above Musashi, sound 0x702, state 0xA after 0x78 frames close) (M). Hurt 0x80184768:
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

### Families not in G4's stages, or read only from the digests (L-M, one line each)
* **F046** (sc02_026 sc02_027 sc02_028; 0x8017D434-0x8017F9D4): an enemy with TargetInSight / IsOnScreen alert
  (sound 0x64B or 0x652 by distance), TakeDamage + SetReactionStep, spawns 0x153, props; sounds 0x64A, 0x478,
  0x47B (H for the calls; M an SC02 enemy kind).
* **F049** (sc02_026-028, sc03_092; 0x8017DAB8-0x8017E02C): flag-keyed objects: GetFlag(table[subtype]) picks the
  model, SetFlag(table[subtype], 1) when used, spawns 0x150, a MimeBlend model that bursts into props (H for the
  calls; M a breakable / openable object remembered by flag).
* **F052** (sc02_027 sc02_028; 0x8017E7F8-0x80189CC4): a room set tied to flag 0xAE (GetFlag x3) with its own exit
  steps (sound command 4 0x6CA, 0x6CC) and many sound pairs (0x684 / 0x685, 0x675 / 0xAAE, 0x686, 0x6CB) (H for
  the calls; L a machine room). Note F055 clears flags 0xAE / 0xAF / 0xB0 on warp (H).
* **F056** (sc02_031 sc03_006 sc03_014/015 sc03_117-119 sc05_010; 0x8017DB98-0x8017F52C): an effect / scene set
  built on Obj68 effects (SpawnObj68On x4, StartCameraShake, EndScene, SetPlayerMotion, sound 0x7BC) (H for the
  calls; M a scripted cutscene effect, e.g. a transformation or explosion).
* **F059** (sc02_039 sc03_108; 0x8017D01C-0x8017F050): camera set-ups plus spawners of kinds 0x199 / 0x1A9 and a
  nearest-source panned sound 0x6DA (H for the calls).
* **F060** (sc02_041 sc04_002 sc04_005 sc04_007; 0x8017E654-0x801845F0, 41 shapes): an actor set spawning kind
  0x1EB with timers and a panned sound, scripted states (SetScript x4) (H for the calls; L an SC04 enemy).
* **F061** (sc02_041 sc04_002 sc04_005): a ground enemy (SetupActor + SpawnShadow, TurnStepToTarget chase,
  TraceMap, sounds 0xA9C / 0xB6B, ResetPlayerAfterHit) (H for the calls).
* **F062** (sc02_041 sc04_002 sc04_004 sc04_011): effect set that damages Musashi (DamagePlayerHp, StartRumbleScript,
  sounds 0x7EC / 0x7F4, 18 SpawnEffect) (H for the calls; M a trap blast).
* **F063** (sc02_041 sc04_002 sc04_004): kind with a 0x23F companion, despawns when far (IsActorFar), sounds 0x98A /
  0x98B (H for the calls).
* **F064** (sc02_041 sc04_005 sc04_008): an actor that runs at / around Musashi (HeadingToPlayer, PlayerFlag800),
  spawns 0x244, sounds 0xB41 / 0xB42, dies in SpawnKind205 puffs (H for the calls).
* **F065** (sc02_041 + ten SC04 stages): effect helpers tied to kind 0x245 (FindActorByKind, props, timers) (H for
  the calls).
* **F066** (sc02_041 sc04_002 sc04_007): three MoveCollide movers (minor).

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
* first stage sc02_027 0x80189EB0-0x8018A4A4: timer, when on screen SpawnActorFromDef; a helper plays 0x6D5 and 0x856 / 0x857 panned by
  ProjectPoint (H in sc03_099 0x80182870-0x80182E64). Meaning L (falling things, drips?).

### F054: switch / gate set that sets progress 0x172 (4 stages: sc02_028 sc03_097 sc03_101 sc03_104)
* First stage sc02_028 0x80181EDC-0x8018292C (read in sc03_101 0x80180400-0x80180E50). Set-up reads GetFlag(table[subtype]) (H); touch -> StartEvent + sound 0x700 (H); 0x80180CB8 (sc03_101): event
  done, SetFlag(table[subtype], 1), when all flags in the table are set SetProgress(0x172) (370) (H). M: several
  switches/seals, all done = story step.

### F055: warp disc (8 stages: sc02_028 sc03_089-sc03_092 sc03_097 sc03_101 sc03_104)
* First stage sc02_028 0x801829BC-0x80182F88. Sprite disc (set-up; companion kind 0x1E1; may be closed by GetVar(+0xFC)); grows to full size,
  Musashi standing within 0x30 and level -> StartEvent (position packed), SetFlag(0xAE/0xAF/0xB0, 0), then
  IsEventDone -> RequestMapChange(+0xDC) (H, read in sc03_089 0x801881D0-0x8018879C). Sound 0x701 when it opens.

### F057: flying diver, variant (10 stages: sc02_035 sc03_094 sc03_099 sc03_103 sc03_110 sc03_113 sc03_115 sc03_117 sc05_002 sc05_007; first sc02_035 0x801832D4-0x80183E68)
* Same behaviour as the F089 diver (wander with pitch, dive at Musashi with 0x6FF, off-screen respawn), without the
  companion / bomb (M, from sc03_099 0x8017F66C-0x80180200).

### F058: swinging hazard and platform (5 stages: sc02_035 sc03_098-sc03_101; first sc02_035 0x8017D398-0x8017D85C)
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
| shape (sc03_089) | proposed | evidence | conf |
|---|---|---|---|
| 0x80183CE8 | TrackNearestSources | two nearest of four kinds -> SetSeqPoint 1 / 2 | M |
| 0x8018406C | DiverInit | SetupActor, spawn companion 0x178 | M |
| 0x801841E8 | DiverWander | pitch heading, MoveCollidePassable | M |
| 0x801844C8 | DiverDive | turn, 0x6FF, swoop, return | M |
| 0x80184D7C | BombInit | model + sprite, parent serial | M |
| 0x80184F98 | BombFall | landing -> 0x1AA + 8 x 0x1B0, 0x705 | H |
| 0x801855BC | BlastRingInit | model, script | M |
| 0x80185678 | BlastRingGrow | scale up / hold / shrink, hit test | M |
| 0x801858BC | DebrisInit | random velocity, gravity | M |

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

### F099: SC03_118 / SC03_119 room code (2 stages, 54 shapes)
* **Stages:** sc03_118 sc03_119 (the same image twice).
* **What it is:** the own code of this story room, shared only by its twin (H). Main pieces: an ability gate
  0x80183D68 (events D_8018EBE8 / D_8018EBF8 by boss flag 0x8B; with GetStatsByteC0() == 3 it gives Musashi action
  script D_8018DA14, music off, scripted camera 0x80184430 / 0x801842DC, then SetFlag(0xB8) and SpawnActor(0x249));
  a hit trigger 0x801825EC (8 hit kinds -> prop 0x42, event D_8018E014, 0x74B, func_8001AAA0(0x4D)) and its end
  0x80182DC4 (SetProgress(0x1CC)); 0x801845C8 (SetProgress(0x276) after func_8001AAA0(0x49)); 0x80188FB0 (talk-range
  event D_801D09F4, SetProgress(0x1D1)); a knock-about object 0x80188990 (as sc03_107's, removed from progress 0x1D7)
  (H).
* **Where in the first stage:** 0x80181A64-0x80188FB0.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x80183D68 | AbilityGateEvent | flag 0x8B, stats 3, SetFlag(0xB8), SpawnActor(0x249) | H |
| 0x80184430 | CameraScriptedPath | camera mode set by the gate | M |
| 0x801825EC | HitTriggerEvent | hit kinds -> event D_8018E014 | H |
| 0x80182DC4 | EventEndSetProgress1CC | SetProgress(0x1CC) | H |
| 0x801845C8 | TimedSetProgress276 | SetProgress(0x276), FreeActor | H |
| 0x80188FB0 | NearEventSetProgress1D1 | event D_801D09F4, SetProgress(0x1D1) | H |
| 0x80188990 | RoamObjKnockBack | bounce 0x754 / 0x7DF, progress 0x1D7 gate | M |

### F100: village clock lights and master set-up (5 stages)
* **Stages:** sc03_124 sc04_015 sc04_018 sc04_019 sc05_017 (village versions).
* **What it is:** 0x801832A8 computes the minute of day from the game clock (D_80078EB1 * 60 + D_80078EB0) and, for
  16 slots, calls a per-slot chooser (table D_80190624: 0x80182F8C-0x8018326C) that selects a quad set and a time
  window through 0x80182420 (start / end minute, wraps at 0x5A0 = 24 h, fades over 16 minutes at each end); some
  slots are suppressed in progress bands (0xC8-0x1A3, 0x64-0x257) (H); the chosen set is drawn as textured quads
  (0x801824DC / 0x80182598: RotNclip4, RotTransPers4, AddPrim) (H). M: house windows / lamps lit by time of day.
  0x80183364 is the village master set-up: AllocActorModel and SpawnActor kinds 0x13F, 0x66, 0x65, 0x14C, 0x335,
  0x3D9 (H).
* **Where in the first stage:** 0x8017DB88-0x80183364. Names: UpdateClockLights (0x801832A8), ClockWindowFade
  (0x80182420), DrawClockSlot (0x80182488), DrawLitQuads (0x80182598), VillageMasterInit (0x80183364) (M).

### F101: progress-window NPC with talk zone (3 stages)
* **Stages:** sc03_124 sc04_018 sc04_019
* **What it is:** an NPC present for progress 0xC8-0x275 (0x801808B8) whose talk test 0x8018095C needs g_PlayerFlags &
  0x08000000, Musashi within distance^2 0x6400 of a point (D_8018FC3C), x < 0x281 and z >= -0x380 (H); 0x801807D8 ends
  its event and returns it to its place (H); 0x80180A88 a second model present for 0xC8-0x257 only if flag 0x106 is
  set, and for 0x258-0x275 (H). Names: ZoneTalkerInit (0x801808B8), ZoneTalkerCanTalk (0x8018095C), ZoneTalkerEndTalk
  (0x801807D8), Flag106PropInit (0x80180A88) (M).

### F102: message sequence in a player-action scene (3 stages)
* **Stages:** sc03_126 sc04_021 sc05_019 (one image three times).
* **What it is:** player-action phases (H): 0x8017EA10 opens message D_80183058 with a motion and PlaySe(0x7E7) once the
  camera distance (zoomed in by the F074 helper 0x8017EC2C, floor 0x12C) drops below 0x190; 0x8017EACC / 0x8017EB4C chain the next messages on GetMessageAnswer;
  0x8017EBC8 closes the last one; 0x8017ED0C a fall (AddFallSpeedLimited 0x1A000) until landing, then BeginScene.
  Names: SceneOpenFirstMessage, SceneNextMessage (x2), SceneCloseMessage, SceneFallToGround (M).

### F103: respawning spinning enemy (2 stages)
* **Stages:** sc04_000 sc04_006
* **What it is:** an enemy that waits hidden, grows in (rcos scale) when Musashi is beyond distance^2 0x18FFF,
  approaches (distance^2 <= 0x18000), winds up (0x17 frames), then spins along the ground (model yaw -0x71 a frame,
  sound 0x662 while on screen) turning at walls and other members of its kind, and hits Musashi by box test
  (HitPlayer(1, 0x2001, ...)) (H). Defeat: anim + sound 0x98A on screen, blink, 1-in-4 DropItem, then it resets to
  its spawn point hidden (respawns) unless +0xE4 is set (then DespawnActor) (H). A hit of kind 0x24 spawns kind
  0x35C (H). Uses F077 helpers (scale-in, wait-near) between its own shapes. **Where in the first stage:**
  0x80180FF8-0x80181BA4 (dispatcher A11 0x80180FBC).
| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x80180FF8 | SpinnerInit | SetupActor, hidden variant +0x70 bit 0 | M |
| 0x80181248 | SpinnerWindUp | script, 0x17-frame timer | M |
| 0x801812BC | SpinnerStartSpin | StopWithGravity, heading pick | M |
| 0x80181310 | SpinnerSpin | yaw spin, sound 0x662, contact, move | M |
| 0x801813CC | SpinnerDie | script, sound 0x98A | M |
| 0x801814A8 | SpinnerDeathBlink | blink, DropItem 1/4, reset | M |
| 0x8018155C | SpinnerOnHit24 | kind 0x24 hit -> spawn 0x35C | M |
| 0x8018159C | SpinnerMove | MoveOnGround + bounce rules | M |
| 0x8018175C | SpinnerHitPlayer | box test, HitPlayer | H |
| 0x801818E8 | SpinnerPickHeading | random / target heading | M |
| 0x80181ABC | SpinnerResetOrDespawn | back to spawn point or DespawnActor | H |

### F104: warp flash / sparkle swarm (2 stages; with F105)
* **Stages:** sc04_000 sc04_011
* **What it is:** one actor kind with two variants by +0x70 (H). Variant 0: a swarm of 64 textured quads in a
  stage buffer that fly out from a centre and respawn, drawn by F105 (M: sparkles). Variant 1: a sprite that grows,
  holds 0x78 frames, plays a table sound (by +0xFC), grows to 0x7000, calls func_80016940(4) / waits func_80016978(4)
  (L: a white-out fade), despawns the kind-0x3AF actor, hides (+0xFC == 0) or shows Musashi, shrinks and despawns
  (H). Colour flickers E0E0E0 / FFFFFF on odd frames (0x80182D78, H). Used with SC04_000's player-action handlers that
  wait for kind 0x3AF (M: a warp in or out). **Where in the first stage:** 0x801822F0-0x80182D78.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x801822F0 | WarpFlashMain | two state tables by +0x70 | H |
| 0x80182374 | SparkleInit | 64 particles, timer | M |
| 0x80182460 | SparkleUpdate | per-particle steps | M |
| 0x80182564 | SparkleRespawn | random direction / colour | M |
| 0x8018298C | FlashInit | AllocActorSprite | M |
| 0x80182A38 | FlashGrow | scale to 0x1000 | H |
| 0x80182B20 | FlashGrowLarge | scale to 0x7000, func_80016940(4) | M |
| 0x80182BA8 | FlashHideShowPlayer | despawn 0x3AF, hide / show Musashi | M |
| 0x80182C90 | FlashShrinkY | scale y down | H |
| 0x80182D08 | FlashShrinkOut | scale x down, DespawnActor | H |
| 0x80182D78 | FlashFlicker | colour by frame parity | H |

### F105: sparkle quad helpers (3 stages)
* **Stages:** sc04_000 sc04_011 sc07_010. **What it is:** 0x80182724 integrates a particle's velocity
  (MoveParticle), 0x801827B4 / 0x80182800 build a matrix and draw one textured quad (DrawSparkleQuad) (H).
  **Where:** 0x80182724-0x80182800.

### F106: block-throwing large enemy, kind 0x1FC (3 stages)
* **Stages:** sc04_002 sc04_003 sc04_004
* **What it is:** a large enemy (kind 0x1FC, model scaled 1.5) with wander / turn states, a burst attack firing
  kind-0x20 projectiles (3 shots 4 frames apart, then a 0x20 pause; sound 0x83A), contact damage 20 by segment test
  (H). Below HP 0xB5 it spawns kind 0x22D (a piece flying off with smoke, sound 0x83B; 0x80182D2C / 0x80183548) and
  changes behaviour (+0x86 bit 0) (H). Variant +0x70 != 0 stands and lifts a kind-0x239 block (F107) to its head,
  then throws it when its animation reaches frame 0x18 (H). Hurt: recoil, FinishEnemy on death, sound 0x853,
  func_8002AC00(0x13) (H). A knocked-off fall state frees it below y 0 (H). **Where in the first stage:**
  0x80181C20-0x80183548 (dispatcher A11 0x80182E64).
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x80182EA0 | BlockThrowerInit | SetupActor, scale 0x1800, variant | M |
| 0x80181C20 | BlockThrowerStartRoar | script, state 2 | L |
| 0x80181C7C | BlockThrowerStartWander | state 3 or burst | M |
| 0x80181CE8 | BlockThrowerStartTurn | heading, state 4 | M |
| 0x80181D44 | BlockThrowerKnockedOff | fall, sound 0x7E5 | M |
| 0x80181F40 | BlockThrowerStartBurst | state 5, 3 shots | M |
| 0x801821C4 | BlockThrowerLiftBlock | SpawnActor(0x239) at head | H |
| 0x80182424 | BlockThrowerHurt | TakeDamageAndRecoil | H |
| 0x801828A4 | BlockThrowerBreakPiece | HP < 0xB5 -> kind 0x22D | H |
| 0x80182A6C | BlockThrowerShoot | kind 0x20 projectile, 0x83A | H |
| 0x80182BA4 | BlockThrowerContact | damage 20 | H |
| 0x80182C30 | BlockThrowerDeathSound | 0x853 | H |
| 0x80182D2C | BrokenPieceInit | model, velocity, smoke | M |
| 0x801831B8 | BlockThrowerBurst | burst timing | M |
| 0x80183494 | BlockThrowerThrow | frame 0x18 -> throw | H |
| 0x80183548 | BrokenPieceFly | MoveObject, smoke, free | M |

### F107: thrown block, kind 0x239 (4 stages)
* **Stages:** sc04_002 sc04_003 sc04_004 sc04_005
* **What it is:** a solid block Musashi can stand on (CarryPlayerExact) and is pushed out of (box 0x49) (H); thrown
  by F106 with speed 0xE0000 along the thrower's heading (sound 0xB3F); on landing spawns a ring of 8 dust props and
  plays 0xBCB; landing on Musashi hits him (HitPlayer(1, 0x4002, 0, 0x14)); landing on a kind-0x1FC actor gives it a
  0x1D reaction; frees itself below y 0x80 (H). **Where:** 0x801835E0-0x80183F24.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x80183710 | ThrownBlockMain | table + CarryPlayerExact | H |
| 0x80183648 | ThrownBlockLaunch | velocity, sound 0xB3F | H |
| 0x80183790 | ThrownBlockOverPlayer | box test above Musashi | M |
| 0x80183820 | ThrownBlockFindTarget | kinds 0x1FC / 0x239 | H |
| 0x8018395C | ThrownBlockHitPlayer | HitPlayer | H |
| 0x80183A88 | ThrownBlockPushPlayer | solid box | M |
| 0x80183C54 | ThrownBlockDustRing | 8 props | H |
| 0x80183D94 | ThrownBlockInit | model, shadow | M |
| 0x80183E68 | ThrownBlockFly | landing, 0xBCB | M |
| 0x80183F24 | ThrownBlockRest | on ground, hits | M |

### F108: enemy-clear reward light (3 stages)
* **Stages:** sc04_003 sc04_005 sc04_007
* **What it is:** a flag-indexed object (flag table D_..90C90 by record index - 9) with a sprite (H). Its condition
  (variant +0x108): 0 = no actor of kinds 0x1FC / 0x1DC / 0x210 / 0x219 left and Musashi idle; 1 = a counter
  (GetCounter5210) plus sound 0xB6B; 2 = a timer test (H). Then it sets its flag, starts an event, grows the sprite
  with sounds 0x7F5 / 0x7F6, spawns kind 0x8E from the stage record, and shrinks (H). If the flag is already set at
  load it spawns kind 0x8E at once and frees all those enemies (H). A +0x70 bit-0x8000 child (kind 0x1F9) mirrors its
  sprite (H). Kind 0x8E is likely the reward chest (L). **Where:** 0x8017D698-0x8017E39C; its trigger is an own shape
  in sc04_003 (0x8017DDDC) and F110 in sc04_005.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8017D698 | TalkCheckNear | distance^2 < 0x1001, idle | H |
| 0x8017DC20 | RewardLightInit | flag, sprite, child 0x1F9 | M |
| 0x8017DE58 | RewardLightShow | grow, sounds, spawn reward | M |
| 0x8017E07C | SpawnRewardChest | SpawnActorFromDef kind 0x8E | M |
| 0x8017E108 | RewardLightCheck | three condition variants | M |
| 0x8017E278 | CountRoomEnemies | kinds 0x1FC 0x1DC 0x210 0x219 | H |
| 0x8017E2E8 | FreeRoomEnemies | same kinds | H |
| 0x8017E39C | RewardLightWait | child mirror / trigger | M |

### F109: leaping enemy, kind 0x210 (3 stages)
* **Stages:** sc04_004 sc04_005 sc04_007
* **What it is:** idle until distance^2 <= 0x40000, then approaches with a bobbing sway; at distance^2 <= 0x9000
  lunges (forward velocity, upward 0xA0000, sound 0xA9D) with a damaging segment (g_PlayerHitKind 4); on landing
  recovers; +0xFE set by F110 makes it jump at once (H). Splash sound 0x83C when its feet meet water (TraceMap
  0x6000, 30-frame cooldown) (M). Hit sound 0x98A; death 0xA9E + func_8002AC00(0x14) (H). Kind 0x210 is inferred from
  F110 poking +0xFE of kind 0x210 (M). **Where:** 0x801829BC-0x801831FC.
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x80182B9C | LeaperApproach | bob, head to target | M |
| 0x80182DC4 | LeaperMain | table + invuln timer | M |
| 0x80182ED4 | LeaperSplash | TraceMap, 0x83C | M |
| 0x80182F7C | LeaperDeathSound | 0xA9E | H |
| 0x8018308C | LeaperIdle | distance wake | M |
| 0x80183130 | LeaperLunge | velocity, 0xA9D, damage | M |
| 0x801831FC | LeaperAir | damage until landing | M |

### F110: stomping enemy + reward trigger (2 stages)
* **Stages:** sc04_005 sc04_007
* **What it is:** (a) 0x8018093C: the F108 reward-light trigger (SetFlag from table, StartEvent) (H). (b) An enemy
  (dispatcher A11 0x801831B4, set-up 0x8018323C, big shadow 0x4000): turns to Musashi, when he is within a 0x80 box
  it jumps (state 4), lands with a stomp that damages by segment, plays 0x84B and sets +0xFE of kind-0x210 actors
  near it (waking F109) (H); then turns and walks back to its spawn point (H). Hurt: func_8002AC00(0x16),
  reaction 0x11 (H). (c) 0x80186DCC: a GTE quad drawer (H). **Where:** 0x8018093C-0x80186DCC (scattered).
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8018093C | RewardLightTrigger | SetFlag(table), StartEvent | M |
| 0x80182E54 | StomperLand | wakes kind 0x210, 0x84B, damage | M |
| 0x8018323C | StomperInit | SetupActor, shadow | M |
| 0x801832E4 | StomperTurnToTarget | TurnStepToTarget | H |
| 0x8018334C | StomperWaitNear | 0x80 box -> jump | H |
| 0x801833BC | StomperAir | sway, wakes kind 0x210 | M |
| 0x801834E4 | StomperTurnHome | heading to spawn point | H |
| 0x80183564 | StomperWalkHome | walk to spawn point | H |
| 0x80186DCC | DrawQuadGte | GTE quad to OT | M |

### F111: SC04_018 / SC04_019 village code (2 stages, 52 shapes)
* **Stages:** sc04_018 sc04_019 (identical images in code)
* **What it is:** the own villagers and story hooks of this village version (H): progress-gated villager set-ups
  (>= 0x2A8; one only for 0x2A8-0x2B1), script choice by progress 0x2BC, the event NPC that sets progress 0x2B2,
  helper SetProgress(0x280), the 0x2BC raise with kind 0x22B, flag helpers 0x10C / 0x10D / 0x107, a message window
  routine 0x801877B0 (OpenMessageAt / UpdateMessage0 / CloseMessage0) (H). Range test 0x80184BAC(8, 0x14) gates
  villagers (L: clock hours). **Where:** 0x8017E628-0x801877B0. Names for the key shapes:
| shape | proposed | evidence | conf |
|---|---|---|---|
| 0x8017E8FC | PickVillagerScript2BC | progress < 0x2BC | H |
| 0x8017E950 | RaiseProgress2BC | kind 0x22B, SetProgress(0x2BC) | H |
| 0x8017EAFC | VillagerInitAfter2A8 | progress >= 0x2A8 | M |
| 0x8017F0D8 | SetFlag10COn | 0x10C = 1, 0x10D = 0 | H |
| 0x8017F108 | SetFlag10DOn | 0x10C = 0, 0x10D = 1 | H |
| 0x8017F1A8 | SetProgress280 | SetProgress(0x280) | H |
| 0x8017FA34 | SetFlag107 | SetFlag(0x107) | H |
| 0x8017FF70 | EventNpcWait | StartEvent, SetProgress(0x2B2) | M |
| 0x8018001C | VillagerInit2A8Only | 0x2A8 <= progress < 0x2B2 | M |
| 0x801877B0 | RunMessageWindow | message open / update / close | M |

### F112: village villager steps (3 stages)
* **Stages:** sc04_018 sc04_019 sc05_017
* **What it is:** small villager state steps: show the model, place it at a script point, set its walk / idle
  script, start a move between points (func 0x80184ED4 with speed 0x40 / 0x60), and switch state on the same range
  tests as F111 (0x80184BAC / 0x80184BD0) (H). Also 0x8018C278 / 0x8018C494, a progress-gated (< 0xC8) object (H).
  **Where:** 0x8017E5CC-0x8018C494 (scattered among F111).

Minor: none beyond the above.

### F113: Musashi's knock-down hurt and its green puff effect (4 stages)
* **Stages:** sc05_001 sc05_005 sc05_007 sc05_010
* **What it is:** two small pieces that always come together (H: same 5 shapes in each stage, right after an S11
  player-object step and before S6 DamagePlayerHp helper). (1) A hurt-reaction state chain run on Musashi's object
  (NextEffectState): StartRumbleScript(D_80062BF4), PlaySe(0x451), ApplyQueuedHurt, a front or back knock-down
  motion (D_800D5880 / D_800D58AC) chosen by the angle between his facing and the hit direction (> 0x400), StartFace
  0x16, and five SpawnEffect(0x42) puffs around him (centre and +-0x20 in x / z) (H); when he lands (+0xB8 ==
  0x8000) DamagePlayerHp, ResetPlayerKind, a get-up blend after the back fall, DropTimedAbility (H). (2) An effect
  actor: a 16-bit sprite (AllocSprite16To3E) coloured green (r 0x40, g 0xC0, b 0x40), that rises with growing scale
  and fades by 4 / 8 per frame until its animation ends (H). M: effect 0x42 is this puff; L: a gas / spore cloud hit.
  The SC05_000 "thrown in the air" hurt (A6 there) is a different, own chain using the same 0x451 sound.
* **Where in the first stage:** 0x80180B70-0x80180F50 (sc05_001 blocks A12-A13).

| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x80180B70 | KnockDownHurtStart | rumble, 0x451, ApplyQueuedHurt, front/back motion, 5 x SpawnEffect(0x42) | H |
| 0x80180CC4 | KnockDownHurtLand | on landing: damage, ResetPlayerKind, blend, DropTimedAbility | H |
| 0x80180DB4 | GasPuffInit | AllocSprite16To3E, green colour, StartSpriteAnim | H |
| 0x80180E8C | GasPuffUpdate | rises, grows, fades, FreeEffect at anim end | H |
| 0x80180F50 | GasPuffFollow | ObjLocalToWorld16 to its owner, else func_800D1FC8(o, 5) | M |

### F114: the large walking creature of SC05_003 / SC05_005 (2 stages, 43 shapes)
* **Stages:** sc05_003 sc05_005
* **What it is (from sc05_003):** an enemy actor kind with a per-frame wrapper 0x8017F68C that runs the state table,
  plays footstep sounds 0x7F9 / 0x7F8 on frames 10 / 15 of its walk script D_801A9620 (through the distance / pan
  sound helper 0x80181CDC), damages Musashi on contact (0x80180834: PathHitsModel of his path against its model,
  HitPlayer) and DespawnIfFar (H). States: set-up 0x8017F738 (SetupActor, SnapToGround, shadow); wander / turn
  (0x8017F9B4, 0x8017FB9C with TargetInFront); ground-following pose (0x8017FC3C: FindGround, align to the ground
  normal via 0x80180D70); several jump / fall states that trace the map (0x8017FD08-0x8017FF60, 0x801808E8,
  0x80180B04, 0x80180C44: TraceMap); 0x801801C0 spawns SpawnActor(0x24F) and plays script D_801A96F0; 0x80180230 a
  timed script sequence facing away from Musashi; damage (0x801803B8 TakeDamage, SetReactionStep), knock-back,
  sound 0x84D, death with SpawnPropFrom, DropItem and despawn (0x801805E4, 0x801807F8) (H). A second actor block
  (0x8018105C-0x80181720) is a part / missile thrown by it: follows a model part (GetPartWorldMatrix), flies with
  MoveCollidePassable, trails props, damages by segment or by a sphere test (HitPlayer) (H). A third (0x801818B8-
  0x80181C00) are its props / debris and a spawner by ground distance to Musashi (SpawnActorFromDef) (H).
  L: a big beast that throws things; what it is in the game is not shown.
* **Where in the first stage:** 0x8017F68C-0x80181CDC (sc05_003 blocks A2 tail-A4).

| shape (address in first stage) | proposed | evidence | conf |
|---|---|---|---|
| 0x8017F68C | BeastUpdate | state table, footsteps 0x7F9 / 0x7F8, contact hit, DespawnIfFar | H |
| 0x8017F738 | BeastInit | SetupActor, SnapToGround, SpawnShadowSized | H |
| 0x8017F9B4 | BeastWander | TurnStep, MoveOnGround, random timers | M |
| 0x8017FB9C | BeastTurnToPlayer | TargetInFront, TurnStepToTarget, walk | M |
| 0x8017FC3C | BeastAlignToGround | FindGround, ground-normal pose | H |
| 0x801801C0 | BeastSpawn24F | SpawnActor(0x24F), script D_801A96F0 | H |
| 0x80180230 | BeastScriptSequence | timed scripts facing away | M |
| 0x801803B8 | BeastHurt | TakeDamage, SetReactionStep | H |
| 0x801805E4 | BeastDie | props, DropItem, despawn | M |
| 0x80180834 | BeastContactHit | PathHitsModel + HitPlayer | H |
| 0x80181CDC | PlaySoundPanned | ProjectPoint, distance volume + pan, SoundRequest | H |
| 0x8018105C | BeastMissileInit | AllocActorModel, attach to a part | M |
| 0x801812AC | BeastMissileFly | MoveCollidePassable, trail props, ActorSegmentDamagesPlayer | H |
(the other 30 shapes are small helpers of these states; not proposed one by one.)

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

### SC01_084
* **Place:** an encounter arena (M): Musashi's entry action opens the HUD panel with sound command 0x12 (arg 2) and a
  later one closes it with 0x13 (arg 2) (H; L: battle music on / off); attackers orbit a centre and damage the player;
  a phase counter D_801270D8 runs to 6 (H); the end sequence (0x80180E74) fades the screen through white
  (func_80016450), CloseHudPanel, EndActionTable2, SpawnActorFromDef(D_8018A9D8) (H) (M: a fight that ends in a
  reward or exit object; L: a mini-boss). No progress values. Entry partial (time).
* **Size:** 211 functions (own 130, F013 x15, F010 x3, F011 x3, F012 x3; P01-P03; 21 actor blocks, 3 PLAYER-ACTION-MAIN).
* **Actors:** 0x8017EF28: orbiting attacker: angle +0xDC steps by D_8018A6EC around a centre per index (+0x70),
  bobs (rsin), ActorSegmentDamagesPlayer, sound 0x4B5 at a set time, on hit (+0x5C & 1) TakeDamage + recoil (H).
  0x8017F218 / 0x8017F308 / 0x8017F378: SpawnActor(0x26), sounds 0x4BA / 0x4AA (H). 0x80181310 / 0x801814E8: a
  spawner of kinds 0x26 (x3) and 0x1D, positional sound 0x4BD (H). 0x80182D3C death effects 0x47B / 0x478 (H).
  0x801849E4 SpawnActor(0x17). F010 (SpawnActor 0x85 debris), F011 (shooter, SpawnActor 0xBC), F012 (squash /
  recoil helpers), F013 (Musashi warp-out / warp-in effects) (H).
* **Events / scripted scenes:** entry action 0x8017E1AC: sound 0x1C, func_8001BFD0, SoundCmd1(2), SoundRequest(7,
  0), StartPlayerAction(0x8017E524) (H); messages D_801A3220 / 3288 / 32A4 in Musashi's action phases (H).
* **Exits:** none read in own code beyond the P01 steps.
* **Sound:** commands 0x12 / 0x13 (arg 2), 7; effects 0x4AA-0x4BD, 0x43B, 0x6A9 (H).

#### Names: SC01_084
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017E1AC | func_sc01_084_8017E1AC | RoomEntryAction | sound cmds, StartPlayerAction | H |
| 0x8017E770 | func_sc01_084_8017E770 | ActOpenBattleHud | SoundRequest(0x12, 2), OpenHudPanel | M |
| 0x8017EF28 | func_sc01_084_8017EF28 | OrbiterStep | orbit, bob, damage player, take hits | H |
| 0x80180E74 | func_sc01_084_80180E74 | EncounterEnd | white fade, CloseHudPanel, spawn def | M |
| 0x801814E8 | func_sc01_084_801814E8 | SpawnerStep | kinds 0x1D / 0x26, sound 0x4BD | M |
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
  * Shared: F018 (0x80190144..0x80190408: an effect sprite), F019 (0x8018C2B0, 0x8018CE04, 0x8018CEE0: prop helpers).
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
  * Ambience (0x8017F4A0, 0x8017F4DC): starts loop 0x578, then sets 0x579/0x57A volumes from Musashi's y (H).
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
  * **Hazard** (0x8017D7E0, set-up 0x8017D81C, update 0x8017D980): two bands (tables D_80192CE0, D_80192D04)
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

### SC02_027
* **Place:** a room of the SC02_026-028 set (F045/F046/F048-F053 shared, owned elsewhere) with its own camera zones, a
  **stationary emitter enemy** that is gone for good once destroyed (flag 0xB4) and flag-0xAF-driven start-up
  (H). F023 sets progress 0x5A (90) (H).
* **Size:** 323 functions (own 46; shared: F052 (49), F045 (39), F046 (35), F048 (21), F013 (15), F023 (12),
  F024 (11), F053 (7), F049 (6), F050 (5), F035/F051 (3), 25 lone shared shapes; P01 x10, P02, P03).
* **Actors:**
  * Camera: 7 camera modes 0x8017EE50-0x8017F1E4 and zone updates 0x8017F2B8-0x8017F858 through S75 0x8017F918 (as
    SC02_026's camera code) (H).
  * 0x8017FCAC: a room sequencer (D_801DA9B4 steps) whose step 0 checks **flag 0xAF** and then pre-sets a state
    (func 0x8017FED4(D_801A9564, 0x36)) (H; M: a door or machine already opened).
  * A6 (0x80180058..0x80180770): a machine with a distance-volume loop sound 0x674 (0x801806FC) (H).
  * **Emitter** (set-up 0x8018102C, absent once **flag 0xB4** is set): when Musashi is in front within 0x380 it turns to
    him and spawns up to 10 segments of kind 0x175 (SpawnActorFromDef, table D_8018F298), loop sound 0x68B (H); when
    hit 12 times (+0x5E == 0xC) it bursts: 6 x kind 0x18B, SpawnActorArg(0x1A1) x3, sound 0x68C (0x80181328) (H); its
    death state 0x801812CC stops 0x68B, **SetFlag(0xB4)**, drops (func_8002A04C) (H). M: a flame / steam jet turret.
  * A10 (0x80181B20 / 0x80181D14): a bouncing object (two bounces, sound 0x9C5, then a timer) (H).
  * F052 / F053 / F045-F051 actors (owners describe); 0x80183344 SpawnActorArg(0x156) (H).
* **Exits:** P01 exit 0x8017EB58 also stops loop 0x675 (SoundRequest(4, 0x675)) (H).
* **Sound:** loops 0x674, 0x675, 0x68B (H).

#### Names: SC02_027
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017EB58 | func_sc02_027_8017EB58 | RoomExitStep | P01 exit + stop 0x675 | H |
| 0x8017FCAC | func_sc02_027_8017FCAC | RoomSequencer | step machine, flag 0xAF | M |
| 0x801806FC | func_sc02_027_801806FC | MachineLoopSound | sound 0x674 volume by distance | H |
| 0x8018102C | func_sc02_027_8018102C | EmitterInit | absent once flag 0xB4 set; SetupActor | H |
| 0x801810A0 | func_sc02_027_801810A0 | EmitterFire | TargetInFront 0x380, spawns kind 0x175 x10, sound 0x68B | H |
| 0x801812CC | func_sc02_027_801812CC | EmitterDie | stop 0x68B, SetFlag(0xB4), FreeActor | H |
| 0x80181328 | func_sc02_027_80181328 | EmitterHitCheck | 12 hits -> debris 0x18B x6, 0x1A1 x3 | M |
| 0x80181D14 | func_sc02_027_80181D14 | BouncerUpdate | two bounces with sound 0x9C5 | M |
~38 more own functions not proposed.

### SC02_028
* **Place:** the third room of the SC02_026-028 set (F045/F046/F048-F053 shared with SC02_026/027; F054/F055 with
  SC03_097/101/104), with camera zones and a flag-0xB0 start-up like SC02_027's (H). Shared F054 **sets progress
  0x172 (370)** once all four flags of its table D_801A4EB0 are set (each instance sets its own flag; H, ann line
  ~3415). L: four switches / four captives freed -> the chapter's last step (370 is the top of the brief's range).
* **Size:** 331 functions (own 28; shared: F052 (49), F045 (39), F046 (35), F048 (21), F013/F022 (15), F054 (14),
  F024 (11), F053 (7), F049 (6), F050/F055 (5), F051 (3), 31 lone shared shapes; P01 x12, P02, PLAYER-ACTION x1).
* **Actors:** camera modes 0x8017F054-0x8017F34C and zone updates 0x8017F420-0x8017F8F4 (S75) (H). 0x8017FD30:
  room sequencer, step 0 tests **flag 0xB0** (same shape of code as SC02_027's 0x8017FCAC with flag 0xAF) (H).
  0x8017FFC8: returns 0x39 / 0x3B / 0x45 by D_8012704C (0, 1 with flag 0xAE -> 0x39 else 0x3B, 2) (H; M: picks a
  model / script id by a mode). 0x8018144C SpawnActorArg(0x156). F022 draw helpers wrap own callbacks 0x80183918-
  0x80184018 (H). F054 actors start events D_801A4DF4, D_801A4DFC, D_801A4E80, D_801A4E88 (H; owner describes).
* **Exits:** P01 exits (data destinations).
* **Unknown / notes:** the four F054 flags' ids are data (D_801A4EB0).

#### Names: SC02_028
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017FD30 | func_sc02_028_8017FD30 | RoomSequencer | step machine, flag 0xB0 | M |
| 0x8017FFC8 | func_sc02_028_8017FFC8 | PickModeId | 0x39/0x3B/0x45 by D_8012704C and flag 0xAE | H |
~26 more own functions not proposed (camera modes and callbacks).

### SC02_031
* **Place:** an outdoor forest field (docs/decomp_pilot.md: "Steamwood, the forest"; H for the doc's name) with
  talk NPCs, ambient loops 0x537 / 0x538 stopped at every exit, a scripted collapse/opening set piece (flag 0x9C),
  two **ability spots** whose events depend on boss flags **0x8A** and **0x8D**, and a **lift-off warp** that
  changes map (H). F023 sets progress 0x5A (90); S8 0x8017E39C tests progress < 200 (H).
* **Size:** 195 functions (own 44; shared: F056 (19, owner elsewhere), F013 (15), F023 (12), F024 (11), F025 (10),
  F035/F036 (3), 32 lone shared shapes; P01 x12, P02, 2 player actions; 10 stubs).
* **Actors:**
  * F024 / F025 / S8 talk NPCs (S8: absent once its flag D_80188C14[+0x70] is set, or index 4 before progress 200).
    F023 rescue NPC. F056 (0x8017DB98-0x8017F52C, owner elsewhere). 0x8017F400: sound 0x7BC; 0x8017F5B4 (283 lines):
    a large own routine called from 0x8017F590 / 0x801831B4 (not read).
  * 0x801816C0: an ambient source with distance volume (sound 0x5A8) (H). A8 (0x80181A44): positional sound while
    var 0xCE is set (H). 0x80181BB4 / 0x80181C2C: a loop 0x83E started and stopped (H).
  * **Set piece** (A10, 0x80182078-0x801829A8): absent once **flag 0x9C** is set (0x801820E0); when triggered (+0xFC)
    it takes control, RunScript(D_80188F98), camera shake, sound 0xAC7 (0x80182174); then timed bursts (every 15 / 3
    frames: 0x80182674, 0x80182848; sounds 0x63C, 0x63D, 0x63E), falls, stops 0xAC7, **SetFlag(0x9C)** (0x80182618)
    (H). M: something breaks open; L: a wall / rock destroyed.
  * **Ability spot 1** (A12, 0x80182CF4): unless flag 0x9C, within sqrt(0x400) = 32 units: event D_80189028 before
    **boss flag 0x8A**, D_80189038 after; then waits until GetStatsByteC0() == 2 and Musashi acts (SetPlayer1C4And21C(2,
    D_801888B0)); FindActorByKind(0x13B) (H). **Ability spot 2** (0x80183458): same with flag 0x8D and value 5, events
    D_8018939C / D_801893AC / D_801893BC (H). M: places where a skill obtained after a boss is used.
  * **Warp** (0x80183810): sound 0xC2E, a rising column of 10 props 0x6B, then Musashi's y rises 0x30 per frame until
    he leaves the screen (ProjectPoint beyond 0xC8 / 0xA0) -> **RequestMapChange(D_80188CCC)** (H).
* **Events / scripted scenes:** above. 0x80180D50 sets **flag 0x90** (H); exit 0x8018104C sends SoundCmd1(1) only while
  flag 0x90 is clear (H). Camera 0x8018129C / 0x80181378 (S4 focus math) (H).
* **Exits:** RequestMapChange(D_80188CCC) in the warp; P01 exits 0x80180E54, 0x80180F5C, 0x8018104C, 0x80181170
  (all stop 0x537 / 0x538) (H).
* **Sound:** ambience 0x537 / 0x538, 0x5A8, 0x83E; set piece 0xAC7, 0x63C-0x63E; warp 0xC2E (H).

#### Names: SC02_031
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x80180D50 | func_sc02_031_80180D50 | SetFlag90 | SetFlag(0x90, 1) | H |
| 0x8018104C | func_sc02_031_8018104C | RoomExitStepFlag90 | SoundCmd1(1) only without flag 0x90; stops 0x537/0x538 | H |
| 0x801816C0 | func_sc02_031_801816C0 | AmbientSourceSound | sound 0x5A8 by distance | H |
| 0x801820E0 | func_sc02_031_801820E0 | SetPieceInit | flag 0x9C | H |
| 0x80182174 | func_sc02_031_80182174 | SetPieceStart | TakePlayerControlNoStop, RunScript, shake, 0xAC7 | H |
| 0x801821F4 | func_sc02_031_801821F4 | SetPieceBurst | timed bursts, sounds 0x63C/0x63D | H |
| 0x80182618 | func_sc02_031_80182618 | SetPieceDone | SetFlag(0x9C, 1) | H |
| 0x80182CF4 | func_sc02_031_80182CF4 | AbilitySpot8AUpdate | flag 0x8A events, stats byte 2 | H |
| 0x80183458 | func_sc02_031_80183458 | AbilitySpot8DUpdate | flag 0x8D events, stats byte 5 | H |
| 0x80183810 | func_sc02_031_80183810 | WarpLiftOff | props 0x6B, Musashi rises, RequestMapChange | H |
~30 more own functions not proposed.

### SC02_035
* **Place:** another room of the SC02_026 / SC03_089-104 set: **no own code** (H: 0 own shapes); everything is F045,
  F047, F048, F050, F051, F057, F058 (owners elsewhere) and 20 lone shared shapes. No progress value (H).
* **Size:** 152 functions (own 0; F045 (39), F047 (26), F048 (21), F057 (10), F058 (8), F050 (5), F051 (3); P01 x5,
  P02, P03; 7 stubs). 6 actor blocks.
* **Actors / sound (from the shared code's constants, H):** SpawnActorArg(0x12C, 0x12F, 0x164 x3), SpawnActor(0x1C4);
  sounds 0x6A5, 0x6FE, 0x6FF, 0x702, 0x703, 0xA65, 0xA74, 0xA9B (panned), 0xCB2-0xCBA, 0xBA2, 0x679. See F045-F058.
* **Exits:** P01 exits (one with SoundCmd1(1)) (H).

#### Names: SC02_035
No own functions.

### SC02_037
* **Place:** a room of the same set (F045, F048, F050, F051 shared) with talk NPCs (F024) and two own mechanisms: a
  **weight switch** worked by an actor of kind 300 (0x12C) and a **sinking platform** (H). No own progress value.
* **Size:** 146 functions (own 14; shared: F045 (39), F048 (21), F013 (15), F024 (11), F050 (5), F051 (3), 15 lone
  shared shapes; P01 x6, P02, P03; 7 stubs).
* **Actors:**
  * Camera modes 0x8017EAB4 / 0x8017EB50, focus helpers 0x8017EBC4-0x8017EEC4 (H).
  * **Weight switch** (set-up 0x8017F490): SetupActor(D_801878A8), SnapToGround, two sub-actors SpawnActor(0x1B2) at
    +-0x264 z (H); 0x8017F578: when an actor of kind 300 is within x/z +-0x70 and y -0x30..+0x20 of it, it sets both
    subs' +0xFC = 9 and plays 0x73A (H). M: a block (kind 0x12C, spawned by the shared F045 code) pushed onto it opens
    two gates. 0x8017F684-0x8017F734: its later states (not read).
  * **Sinking platform** (0x8017F798): while Musashi stands on it (+0x74) it carries him (CarryPlayer) and sinks
    0x20000 per frame with loop 0xA08; when he leaves it stops 0xA08 and rises 0x8000 per frame back to +0xDC (H).
* **Exits:** P01 exits (data).

#### Names: SC02_037
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017F490 | func_sc02_037_8017F490 | WeightSwitchInit | SetupActor, two SpawnActor(0x1B2) | H |
| 0x8017F578 | func_sc02_037_8017F578 | WeightSwitchCheck | kind-300 actor on it -> subs +0xFC = 9, sound 0x73A | H |
| 0x8017F798 | func_sc02_037_8017F798 | SinkingPlatformUpdate | CarryPlayer, sink / rise, loop 0xA08 | H |
~10 more own functions not proposed (camera modes, switch states).

### SC02_039
* **Place:** a small room: **no own code** (H); F059 (18, shared with SC03_108; owner elsewhere), F033 (5), 11 lone
  shared shapes. No progress value (H).
* **Size:** 48 functions (own 0; P01 x5, P02, P03; 4 stubs; 3 actor blocks).
* **Actors / sound (shared code, H):** SpawnActorArg(0x199) x3, SpawnActorArg(0x1A9); a loop 0x6DA with volume and
  pan from the nearest source, stopped with SoundRequest(4, 0x6DA); another panned positional sound.
* **Exits:** P01 exits (one with SoundCmd1(1)).

#### Names: SC02_039
No own functions.

### SC02_041
* **Place:** a field built mostly from code shared with SC04_002 / 004 / 005 / 007 (F060-F066, owners elsewhere) plus
  F023 / F041 / F030 / F037: a rescue NPC (F023 **sets progress 0x5A (90)**) and two own callbacks that **switch the
  room's spawn lists** after flag 0xD4 or 0xD5 is set (H). L: an area revisited in SC04 (same code there).
* **Size:** 192 functions (own 4; shared: F060 (41), F061 (13), F062 (12), F023 (12), F063 (11), F041 (11), F030 (6),
  F064 (5), F065 (4), F008 (4), F035/F037/F066 (3), 34 lone shared shapes; P01 x5, P02, P03; 7 stubs).
* **Actors:** shared only (F060-F066 described by their owner): SpawnActorArg(0x1EB x3, 0x23F, 0x244),
  FindActorByKind(0x245), SpawnKind13; sounds 0x7E4, 0x7EB, 0x7EC, 0x7F4, 0x98A, 0x98B, 0xA9C, 0xB41, 0xB42, 0xB6B,
  0xAA0, 0x5BF; F041 Musashi knock-down (0x92F, 0x930, 0x451) (H: digest).
* **Events / scripted scenes:** 0x8017DDEC: D_8011F9C4 = 1, **SetFlag(0xD4)**, func_800291F0(4, 0xD4), sound command 6,
  g_SpawnListA / B = D_80188E98 / D_801890DC, respawn (0x8017E5AC(0)) (H). 0x8017DE5C: the same with **flag 0xD5** and
  lists D_801890F0 / D_801893AC (H). Not called from stage code (script callbacks, M). M: two outcomes of an event that
  repopulate the room.
* **Puzzles / mechanisms:** camera 0x8017E14C (room start: projection 0x190, distance 0x4B0) and 0x8017E2B8 (pad & 3
  toggles distance; wider angle when focus x < -0xC38) (H).
* **Exits:** P01 exits (one with SoundCmd1(1)) (H).
* **Sound:** sound command 6 at the spawn-list switch (H).

#### Names: SC02_041
| address | current | proposed | evidence | conf |
|---|---|---|---|---|
| 0x8017DDEC | func_sc02_041_8017DDEC | EventSwitchSpawnsD4 | SetFlag(0xD4), new spawn lists, respawn | H |
| 0x8017DE5C | func_sc02_041_8017DE5C | EventSwitchSpawnsD5 | SetFlag(0xD5), new spawn lists, respawn | H |
| 0x8017E14C | func_sc02_041_8017E14C | CameraRoomStart | camera targets, SetCameraUpdate, SnapCamera | H |
| 0x8017E2B8 | func_sc02_041_8017E2B8 | CameraZoneUpdate | pad & 3 toggles distance, focus x test | H |
