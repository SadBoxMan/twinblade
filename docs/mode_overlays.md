# The mode overlays, function by function (r271 round 2, 4-5 Nov 2026)

Phase 2 (understanding) for the six mode overlays: ovl36 (the field), ovl37 (the debug menu), ovl38 (boot /
licence), ovl39 (title), ovl3a (the cut prologue) and ovl3b (the trial version's end screen). Written from the
matched C of the snapshot a75e323 (every function of the six is C), the splat configs (ovlNN.yaml), symbol_addrs*.txt
and the docs (docs/mode_dispatcher.md, docs/overlays.md, docs/stage_loader.md). Nothing was built or run, and the
overlays' data (strings, tables, pictures) is not in the repository, so a table's contents are known only from how
the code uses it. Nothing in src/, include/, the configs or the symbol files was changed; section 4's names are
proposals.

Confidence: **H** the C shows it plainly; **M** a strong inference; **L** a guess with a stated reason; "unknown"
where the code does not say. Companion doc: docs/abil_packages.md (the ability packages the field loads).

Contents: 1. The slot and how each overlay is entered. 2. Shared shapes. 3. Overlay by overlay. 4. Naming
proposals. 5. Open questions.

## 1. The slot and how each overlay is entered

* **One slot.** Every mode overlay is the code block of a MAIN.CD entry, copied whole to **slot 0 at 0x800CEDF8**
  (g_LoadAddr[0]); the first word is the overlay ID (0x36-0x3B), the code follows. Only one is resident at a time,
  so the same address names different functions in different overlays (`func_800CEF04` is in ovl36, ovl38 and ovl39);
  every address below is read in the overlay its section names. (H: docs/overlays.md, the yaml files)
* **Who loads and runs them.** The EXE's ModeDispatch calls `g_ModeTable[Work.mode]` (src/main.c,
  docs/mode_dispatcher.md). A loader mode calls LoadFileStep(g_ArchiveFileLoc[entry], 0x800CEDF8, 0, sound table)
  each frame until it returns 1, then NextMode; the runner mode calls the overlay's entry every frame and watches
  `Work.done`, which the overlay sets when it is finished. (H)

| Overlay | MAIN.CD entry | Loaded by (mode) | Run by (mode) | Entry the EXE calls | Layout (yaml) | After it |
|---|---|---|---|---|---|---|
| ovl38 licence | 1 | ModeLicenceLoad (1) | ModeLicenceRun (2) | 0x800CEDFC | ID, code 0x4-0x5F0, data to 0x5000 | ModeLicenceExit (3) -> ModeTitleLoad (5) |
| ovl39 title | 3 | ModeTitleLoad (5, sound bank 0x57) | ModeTitleRun (6) | 0x800CEEC8 | ID, rodata (movie file names, messages) 0x4-0xD0, code 0xD0-0x4408 in three files (-O2, -O0 0x800D0100-0x800D1E18, -O2), LIBPRESS VLC asm 0x4408-0x47A0, data to 0x1DC1C | by Work.timer: 0 New Game, 1 Continue -> mode 10; 4 (idle) -> the demo, mode 15 |
| ovl36 field | 10 | ModeFieldLoad (10 / 15, NOW LOADING) | ModeFieldRun (11), ModeDemoRun (16) | 0x800CEDFC | ID, code 0x4-0x4610, data to 0x5935C (the text font and more, up to the stage image at 0x80128158) | stays; the stage engine and the field's own states change the mode |
| ovl37 debug menu | 11 | ModeDebugLoad (7) | ModeDebugRun (8) | 0x800CEE74 | ID, rodata (a jump table, strings) 0x4-0x7C, code 0x7C-0x4400 (all -O0), data to 0x5EB0 | mode 10 (the field) |
| ovl3a cut prologue | 7 | nothing (unreachable in the retail game) | - | none wired | ID, rodata (picture pack paths) 0x4-0x34, code 0x34-0xCBC, data to 0x2580 | - |
| ovl3b trial end | 8 | ModeTrialEndLoad (13) | ModeTrialEndRun (14) | 0x800CEDFC | ID, code 0x4-0x304, data to 0x348 | its last step SetMode(12): ModeIdle, the trial halts |

* **The field is different.** ovl36 stays resident while Musashi is in any map; it runs its own game-state machine
  (Work.state, table D_800D3430, 20 states) and hands most frames to the stage engine image at 0x80128158. The EXE also
  calls into it directly: the pause-menu update (func_800D25FC, from main()'s frame loop while Work.pauseMenu is set),
  and the stage engine calls its loaders and helpers (the ability package loaders func_800D02D0 / func_800D0488, the
  camera helpers func_800D1FC8 / func_800D20C0, the sprite helpers func_800D21C4 / func_800D222C / func_800D2294,
  the vector helpers func_800D2318 / func_800D23D0). Section 3 lists them per function. (H)

## 2. Shared shapes

* **The Work record's step machine.** Except for the field, each overlay is one step machine on the MODE record
  (docs/mode_dispatcher.md): its entry switches on `Work.step` (0xA3B4), advances with NextStep / SetStep(n) (which
  clear `done`, `subStep`, `subStepVar` and `stepTimer`), counts frames in `Work.timer` / `stepTimer`, and ends by
  setting `Work.done = 1` for the runner mode to see. The field runs the same shape one level down, on the GAME-STATE
  record (`Work.state`, table D_800D3430, with NextGameState / SetGameState / NextGameStateStep /
  NextGameStateSubStep). (H)
* **Fades.** func_800167B8(k) starts a screen fade (level D_800AF7CE = 0; func_80016224 with 0xFF for k < 4, else 0:
  k < 4 fades in from black, 4 fades out) and func_800167F0(k) steps it (D_800AF7CE += D_80062BA0[k & 3], the default
  speed D_800B9A18) and returns 1 when it is complete, drawing func_80016224(level, ...): one full-screen
  semi-transparent POLY_F4 (code 0x2A) of grey `level`, sized from the display (D_800AF7BC / BE). All six overlays
  use the pair for their fade steps. (H for the code, M for "fade")
* **Leaving.** Before a runner mode changes mode, the EXE clears the sprite and model slots (func_8001C044: 0x100
  sprites of 0x38 bytes at Work + 0x65A8, 0xC0 models of 0x84 at Work + 0x2A8) and the 64 draw-list records
  D_800B93D8 (func_80015310); the overlays call the same two when they tear down. (H)
* **Pads.** GetPadPressedDir(port) (src/code_800123F0.c): the newly pressed buttons, or a direction made from the
  analog stick's movement when none is pressed: the menus' cursor input (five of the overlays). (H)
* **Sprites and text.** func_8001534C(n, str, x, y, attr, d) / func_800153CC(n, value, ...) fill debug-text element n
  (64 records of 16 bytes at Work + 0x9DA8 = D_800B93D8, a string or a number), drawn by DrawDebugText unless
  Work.unkA3E1 is 1; the sprite and model slots are drawn by func_8001C00C; func_800183E0 queues image records for the end-of-frame LoadImage
  (as in the ability packages); the overlays build their own GPU packets with addPrim / setlen (PsyQ macros) into the
  primitive buffer. (H)

### 2a. EXE helpers and state the overlays use (from the reads)

Shared facts used below (all H, from the EXE C unless marked):

* Work (0x800AF630, include/work.h): `step` 0x800B99E4, `done` 0x800B99E6, `timer` 0x800B99E8, `unkA3E1` 0x800B9A11
  (while 1, DrawDebugText and the sprite / model draw draw nothing), `vsyncMode` 0x800B9A18 (0 = 60 Hz, 2 = 30 Hz),
  `frame` (the double-buffer index). Work+0x50 / +0xAC (D_800AF680 / D_800AF6DC) are `draw[0].isbg` / `draw[1].isbg`
  (DRAWENV is 0x5C bytes from Work+0x38). D_800AF7BC / BE / C0 are the screen width, height and flags SetScreenMode
  stores.
* D_800AA60C (as `D_800AA60C[frame]`, stride 0x4000) is `&g_WorldOtTable[frame][0xFFF]` (g_WorldOtTable = 0x800A6610):
  the same OT entry ovl38 names directly. Every sprite in both overlays goes into that one entry.
* Sprite packets are DR_TPAGE + SPRT pairs (`tag; tpage word 0xE1xxxxxx; SPRT code 0x64`), colour = brightness.
* func_800183E0(list): put an image list into one of the 32 upload records at Work+0xA1A8 (0x800B97D8) that
  FlushImageQueue sends with LoadImage at the end of the frame. A list is 16-byte entries `{u16 type; pad; RECT;
  u16 *pix}` ending with type 0xFF; type 9 = a CLUT, 0 = an image, 5 = a TIM.
* func_80015310: clear the 64 debug-text records (Work+0x9DA8 = 0x800B93D8); func_8001534C(n, str, x, y, c, d): set
  debug-text record n (type 1) to draw `str` at (x, y) (DrawDebugText). func_8001C044: clear the sprite / model record
  pools (Work+0x65A8, 0x100 x 0x38; Work+0x2A8, 0xC0 x 0x84).
* Screen fade: func_800167B8(k) resets the fade counter (and draws one full-screen quad, black for k < 4); each call of
  func_800167F0(k) advances it and draws the quad, getting lighter for k < 4 (fade in) or darker for k >= 4 (fade out);
  it returns 1 when the counter reaches 0xFF.
* func_8002D4C8(id, arg): the sound call (an effect id, or a command for ids < 0x80). func_8002D858: CD (serial) audio
  on, volume 0x64; func_8002D8A8: start a CD-audio fade (a callback, counter 6) (M); func_8002D8D4: CD audio volume 0.
  func_8002D034: the sound driver's frame update.
* Pad bits (the inverted PsyQ pad word): 0x0800 Start, 0x0040 Cross, 0x1000 Up, 0x4000 Down (M: the standard layout;
  the mode doc's SELECT 0x0100 and R3 0x0400 fit it). GetPadPressedDir(0) = buttons pressed this frame on pad 0;
  TestPadsAny(0, m) = m pressed this frame on either pad.
* g_ArchiveFileLoc (8 bytes per MAIN.CD entry, base 0x800AE830): D_800AE840 = entry 2, D_800AE858 = entry 5.

---

Pad bits used below: the EXE's pad word has the stick-as-d-pad bits Up 0x1000, Right 0x2000, Down 0x4000, Left 0x8000
(H: GetPadPressedDir / GetPadHeldDir build them from the stick), Select 0x0100, R3 0x0400 (docs) and so the standard
layout Start 0x0800, Triangle 0x10, Circle 0x20, Cross 0x40, Square 0x80 (M: the same byte-swapped PSX layout).

EXE helpers these overlays call (read in src/code_800123F0.c; all generic names):

* func_8001534C(n, str, x, y, attr, d) / func_800153CC(n, value, x, y, attr, d): set debug-text element n (64 records
  of 16 bytes at Work+0x9DA8 = D_800B93D8) to kind 1 (a string) or kind 2 (a number); DrawDebugText draws them every
  frame unless Work.unkA3E1 (D_800B9A11) is 1. For numbers attr's low nibble is the digit count and 0x40 passes the
  value through func_80015A74 first (func_80015760), so 0x44 is "4 digits" and 0x42 "2 digits" (H; 0x40 = decimal is
  M: the user saw "0200" and "09:00"). func_800152F4(n) clears one element, func_80015310 clears all 64. (H)
* func_8001C044: clears the 0x100 records of 0x38 bytes at Work+0x65A8 and the 0xC0 records of 0x84 bytes at
  Work+0x2A8 and the halfword Work+0x19C: the sprite / model lists (M: func_8001C00C draws from them).
* func_800167B8(k) starts a screen fade (k < 4: from black, i.e. a fade-in; 4: a fade-out); func_800167F0(k) advances
  it one frame and returns 1 when it is complete. (H from the C; "fade" M: the level 0xFF / 0 goes to func_80016224)
* func_80029124(bit, on) / func_80029178(bit): set / test a bit of the story flag array D_800AE648 (saved with the
  game). func_800291A0(i, v): store byte v in the counter array D_800BA1B8[i]. (H)
* func_80029504 / func_80029514: read / write the s32 at D_80078E80 (stats block +0x08). (H)
* func_800183E0(desc): queue a VRAM upload descriptor in the first free one of 32 slots at Work+0xA1A8 (D_800B97D8,
  run by FlushImageQueue at the end of the frame). (H)
* LoadPatPicture: empty in the retail EXE ("Development-only picture loader (C:\TIMPACK\*.PAT from the dev PC)"). (H)

The stats block D_80078E78 (0x98 bytes, Blk98; copied from the defaults D_80072C84 by ResetGameProgress and saved
whole at +0x24 of a save slot by func_80029774) as far as the EXE explains it: +0x04..0x07 the play time (frames /
30, seconds, minutes, hours, capped at 99:59:59; func_80029444), +0x08 a progress counter (func_80029504 / 14;
func_80029524 tests 200..599), +0x0C and +0x10 counters with getters, setters and incrementers (func_8002953C /
4C / 5C, func_8002957C / 8C / 9C), +0x14 set to 100 by func_800295D4, +0x1A the clock in minutes (func_80029344
derives +0x36 = daytime (420..1139), +0x37 the time-of-day period 0..4, +0x38 minutes, +0x39 hours), +0x3A / +0x3C /
+0x3E / +0x40 four values func_800295D4 sets to 250. Everything else in it is unknown here.

## 3. Overlay by overlay

### ovl36: the field (MAIN.CD entry 10, slot 0 0x800CEDF8, code 0x4-0x4610 = 17932 B / data 0x4610-0x5935C = 347468 B, 145 functions)

Sources: src/ovl36/ovl36.c (one -O2 file, all 145 functions matched C), ovl36.yaml, symbol_addrs.txt, the docs named
in the task, and the engine / EXE C for the callees (src/stage/*.c, src/stg/*.c, src/main.c, src/code_800123F0.c,
src/code_8002C8BC.c). No asm, disc or build: the overlay's data (tables, records, the picture list) is not readable,
so a table's contents are known only from how the code indexes it. Conf.: H the C shows it, M strong inference,
L guess (reason given). Work field names are include/work.h's; the Work block is D_800AF630, so 0x800B99F0 =
Work.state, 0x800B99F6 = stateStep, 0x800B99FC = stateSubStep, 0x800B9A00 = stateStepTimer, 0x800B9A02 = frame,
0x800B9A08 = mapId, 0x800B9A0A = mapGroup, 0x800B9A0C = unkA3DC, 0x800B9A0E = unkA3DE, 0x800B9A10 = mapLive,
0x800B9A11 = unkA3E1, 0x800B9A13 = pauseMenu.

**What it does.**

ovl36 is the mode overlay that is resident for the whole of play: mode 10 (or 15 for the attract demo) loads it with
NOW LOADING on screen, and mode 11 (ModeFieldRun) / mode 16 (ModeDemoRun) call its entry 0x800CEDFC every frame (H,
src/main.c). It owns the field's **game-state machine** (Work.state, 20 states, table D_800D3430) and the parts of
play that sit outside the stage image: loading the stage image and sub-room files for a map, the map-change
sequence, the two ability-package loaders, the per-map music / ambient sound logic, the inventory helpers and item
effects, the clock arithmetic, a few camera / sprite / vector helpers, and the 2D primitives the stage engine's pause
menu draws with. Most frames are handed to the stage engine (the image at 0x80128158, entry 12's engine code), whose
entries 0x80128158 / 78 / 98 / B8 are game states 7-10. Its data image (0x800D3408-0x80128154) is also where much of
the engine's RAM lives (Musashi's record D_80126B58, the camera pointer D_801151D4, the stage-menu block
D_80115110, the pause-menu update pointer D_8011DB24): those addresses are inside the overlay's range (H by
address; their contents are set at run time).

*The game states* (D_800D3430; 7-10, 12, 14, 17 are stage-engine addresses, H from src/stage/engine.c and
docs/mode_dispatcher.md):

| State | Handler | What it does / waits for | Next | Conf. |
|---|---|---|---|---|
| 0 | func_800CEE40 | steps D_800D3480: func_800CEE84 field init (time-of-day recompute func_80029344, clear the save / picture / state-18 / demo-end requests, `D_80127084 = 1` "full reload" when stateStepTimer is nonzero, sound ids reset, OT depth 0x3E0), func_800CEF04 load slot-3 package 1 (func_800D0488(1)) until done | 1 | H |
| 1 | func_800CEF34 | func_8001B324 (load-system / sound id reset) | 2 | H |
| 2 | func_800CEF5C | Work+0xA3E2 = 1, mapLive = 0, pause-allowed D_800B9A17 = 0, sprite / object records cleared (func_8001C0C8), unkA3DE = 0 | 3 | M (by elimination: the only unassigned handlers) |
| 3 | func_800CEFB0 | nothing | 4 | M (same) |
| 4 | func_800CF370 | DrawNowLoading(0) | 15 | H |
| 5 | func_800CEFD0 | blocking load loop with the EXE's screen transition func_8001B86C(0) | 7 | H |
| 6 | func_800CF104 | the same with func_8001B86C(1) (the EXE ignores the argument) | 7 | H |
| 7 | 0x80128158 (engine) | the stage start: D_8018D7A4 steps (stage init, map music via func_800D0588, ...), last step NextGameState + stateFlag = 1 | 8 | H |
| 8 | 0x80128178 -> func_801285E4 | world update + func_800D18DC (the map-enter steps) until they return 1 | 9 | H |
| 9 | 0x80128198 -> func_80128678 | **play**: play-time tick, world update, func_800D1754 polls the map-change request | 10 | H |
| 10 | 0x801281B8 -> func_80128714 | the map-leave steps func_800D19F0; when they finish, func_800D1BF8 picks the next state | 5 / 13 / 16 / 18 / 19 | H |
| 11, 13 | func_800CF94C | LoadFileStep(g_FileLocStageEngine = MAIN.CD entry 12, 0x80128158) | 12 / 14 | H |
| 12 | 0x80128228 -> func_80128A28 | stage hooks D_8018D4D8 / D_8018D4DC: the Continue / load screen; < 0: state 0 with stateStepTimer = 1, > 0: title | 0 / mode 5 | H (call), M (meaning, docs) |
| 14 | 0x80128248 -> func_80128AF4 | hooks D_8018D4E4 / D_8018D4E8, chosen when func_8002AF08() != 0: probably the save screen; result 1: state 19 if a picture is pending, else 4 (reload the map); else title | 19 / 4 / mode 5 | H (call), L (save screen: docs' guess) |
| 15 | func_800CF398 | nothing | 16 | H |
| 16 | func_800CF3B8 | blocking load loop, no transition drawn | 7 | H |
| 17 | 0x80128268 -> func_801282EC | clear objects, ModeGoTrialEnd (mode 13) | mode 13 | H |
| 18 | func_800CF238 | blocking load loop, then runs the stage start (0x80128158) without drawing until stateFlag is set | 8 | H |
| 19 | func_800CF990 | the picture interlude: load archive entry D_800D3408[index], fade in, draw a 256x144 picture until stateStepTimer reaches 0x5B (91 frames) | 6 | H |

New game: title -> mode 10 -> 11, states 0, 1, 2, 3, 4, 15, 16, 7, 8, 9. Continue: mode 10 + SetGameState(11): 11,
12 (Continue screen) and, on a choice, state 0 with the full-reload flag (H from docs/mode_dispatcher.md and
func_80128A28).

*The frame loops (states 5, 6, 16, 18).* Each one clears D_80114E98 ("load steps finished") and D_80114E9C
("transition finished"), resets the transition (func_8001B85C) and then **does not return to main()** until done: it
runs its own DrawSync / VSync(Work.vsyncMode) / DrawOTag(world OT + 1) / LoadQueueStep loop (H). Each pass runs the
load-step table D_800D3488[stateStep]: step 0 func_800CF47C (when D_80114E78 is set, load archive file D_800AF218 =
LIST.CD global entry 317 by the docs' counts, then clear it), step 1 func_800CF4D4 (the substeps D_800D3490[stateSubStep]):

| Sub | Function | What it does | Conf. |
|---|---|---|---|
| 0 | func_800CF510 | ResetMallocHeap, unkA3E1 = 1 (main() draws no sprites / models), clear object and text records, D_801152BA = 0; full reload -> 1, else -> 3 | H |
| 1 | func_800CF584 | full reload only: reload the current ability's slot-2 package (D_80078EC1) | H |
| 2 | func_800CF5D4 | full reload only: reload the slot-3 package (D_80078EC0 & 0x7F) | H |
| 3 | func_800CF628 | pick what to read. A **sub-room** (func_800CFC5C != 0: ids 0x2013-0x201A, 0x2055-0x205B, 0x207A-0x2080, 0x2097-0x209D) is loaded on top of its base map's stage (func_800CFBF8: 0x1010, 0x1052, 0x1077, 0x1094): Work.mapId is switched to the base map (old id in D_80114E94); if the base stage is resident -> 5 (id restored), else -> 4. A normal map: if its stage image must be read -> 6, else done | H |
| 4 | func_800CF714 | ForgetStageImage, read the base map's stage image (func_800CFE60), mark it resident, restore the sub-room id -> 5 | H |
| 5 | func_800CF764 | read the sub-room's own archive file to the stage's extra-load address (func_80128218() = D_801EBC68) -> done, full-reload flag cleared | H |
| 6 | func_800CF7A4 | ForgetStageImage, wait for the load queue not to be busy (func_8001AF04() != 2), read the stage image, mark it resident -> done | H |

States 5 / 6 also wait for the EXE's transition func_8001B86C (it builds 15 x 2 screen bars and ends after 0x2C
steps; it also calls CdInit / ResetCallback on its third step), state 16 only waits for the steps, and state 18 then
runs the stage start in a VSync loop with nothing drawn (H; what the player sees in 18 is not known).

*Map change.* A map change is requested by storing a 36-byte map record pointer (bit 0x01000000 = "re-enter the
current record", bits 24-30 otherwise masked off) in D_800AE6B0 (func_800D1724, called from 61 stage files, the
engine and main()'s demo end), or queued in D_800AE6A8 (func_800D1734). In state 9, func_800D1754 / func_800D17B8
copy the record to D_80078E50 (func_800D185C, `SetNextMap`), set the scene task's function (record +4, or the
engine's D_80159698 for a re-entry), and go to state 10. The block at D_800AE6A8 acts as a scene task: +0 queued
request, +4 the "return" record (normally &D_80078E50; func_800D1744), +8 the active request, +0xC the task
function, +0x14 its step, +0x15 the function's own sub-step, +0x16 / +0x19 record bytes 2 and 3, +0x17 the re-entry
flag (H from the C; the stage loader func_80144B9C clears the request pointer and sets +0xC to the entry's own
function at state 7). Enter (state 8, D_801141BC = func_800D1938, func_800D1984, func_800D19DC): save HP / BP /
D_80078E8C for a retry (func_800D1F58), let main() draw again (func_801285D4), run the task function until it returns
nonzero, then mapLive = 1. Leave (state 10, D_801141C8 = func_800D1B10, func_800D1B80, func_800D1BD8): wait for any
stream to stop (func_8001BE30) and prefetch the destination's header (func_800CF8E4) unless re-entering or in map
0x3069; flag 0x119 off, sound command 4 on 0x448, 0x449, 0x8ED, mapLive = 0; run the task function (the record's
exit transition) until nonzero; then func_800D1BF8: unkA3DE = 0, the record's +0x1C hook (empty func_800D1E20 by
default), MapStart (func_800D1D24: Work.mapId = record id, previous group saved, group = id & 0xF000, objects cleared,
stage hooks func_80129258 / func_801378F0), and the next state: demo end -> mode 17; save request -> 13; picture
request -> 19; flag D_80075838 -> 18; else by func_800D1DB0: 1 (a different stage image, no sub-room, not from
0x3005) -> 5, 2 (anything else) -> 16 (H). The stage files start and wait for the matching fade with func_800D1E28 /
func_800D1EBC (134 / 133 stage files call them): black fade-out for kind 2, no black fade for kind 1 (H; the fade
direction is M, from func_800167F0's levels).

*Packages.* func_800D02D0(n) maps ability n to the 29-entry slot-2 table D_800D3764 and loads it with
func_8001ABBC to g_LoadAddr[2]; func_800D0488(n) maps n = 1-6 to the slot-3 table D_800D384C and loads it to
g_LoadAddr[4] (D_80072C7C). Both pass the entry's second word as the sound bank id (`{bank, D_800A2E20}` at
D_800C7C60) and clear D_800AE7EC when done (H; docs/abil_packages.md section 1). Callers: the field load substeps 1-2,
field init (n = 1), the engine (func_801554B8, the pause menu when D_80078EC0 changes, the stage item check).

*Music and ambient sound.* The stage loader installs a per-room music picker (func_800D02C0, room record +0xD4);
func_800D0588 (a stage-start step) / func_800D0CE0 ask the loader for the track it returns for the story counter
(func_80029504 = D_80078E80). func_800D06E8, called each frame by 12 stage files and SC03_001, runs two small state
machines: in the four village maps (0x1010/11, 0x1077/78, 0x1094/95) a one-shot sound (0x518 for time phase 1, 0x517
for phases 3-4) when the time-of-day phase changes, stopped after 0x97 frames, and in 0x3014 / 0x301C sound 0x683 at
phase 4 (night); and the track: villages 0x89 / 0x65 / 0x28 by story-counter ranges, else 0xF in daytime
(D_80078EAE) or 0x10 at night; 0x1052 / 0x1053 0x27; 0x3014 / 0x301C / 0x301E / 0x3023 0xA or 0x3C at night;
on a change, sound command (1, 2), 0x3C frames, then the request (func_8001AAA0 for 0xF / 0x10, sequence ids 0x10C /
0x13B for 0xA / 0x3C) (H; the phase table is EXE func_80029344: 0 5:00, 1 7:00, 2 16:00, 3 19:00, 4 22:00).
Stage scripts take the music over with func_800D06CC / func_800D0CA0 (both machines parked in state 3) and
func_800D0C48 (sound command 1, forget the current track; 145 stage files).

*Items.* The inventory is 12 byte slots 0x2F-0x3A of the EXE's variable array D_800BA1B8 (func_800291A0 /
func_800291B4), each with a halfword day stamp at 0x14 + 2i taken from the day counter D_80078EAC (1-365, advanced at
midnight by engine func_8014B084, which then calls func_800D10EC). The item table D_8010EDE8 has 12-byte records
(+0 word, +4 / +6 halfwords, +8 days to change, +9 the item it changes into): func_800D10EC turns each held item into
its successor once it has been held that many days (H for the mechanism; what the items are is not in the C).
func_800D128C(item, days held) applies an item: HP (func_8014BB24), BP (func_8014BD24), HP loss (func_8014BCC0),
D_80078EA4 (func_8014B944), D_80078EB2 (func_8014BC0C), a status call (func_8014B2A8), with sounds 0x45C / 0x463 /
0x464 / 0x465 and 0x45F for "cannot use" (returns 0); item 0x6B grows with age ((min(days, 0x12) + 2) * 25) (H).
The pause menu's item actions are func_800D11F0 (use) and func_800D1658 (removes the item with sound 0x462 when its +4
field is positive, or 0x8000 for any item but 0x27; else 0x45F) (H for the calls, engine func_801416D4).

*Pause menu and 2D drawing.* CheckPauseStart (EXE) calls engine func_801281D8 -> func_8013E67C ->
**func_800D24A0(0)**, which opens the stage menu: rumble off, DrawSync, the world OT descriptor copied from the other
frame (the last world frame stays on screen, M), the menu block D_80115110 reset, its kind stored, Work.pauseMenu =
kind + 1, the frame's prim buffer split in two (D_801151C8 / D_801151CC), sound command 0x14 (H). While pauseMenu is
set main() calls func_800D25FC, which calls the pointer D_8011DB24 the engine sets (func_8013E5E8, func_80141788,
func_80141874, SC03_001's func_80188F6C) (H). func_800D2624 closes it (pauseMenu = 0, command 0x15). The menu draws
with func_800D2650 (a text line of 8x8 glyph sprites), func_800D27DC (rows of textured quads), func_800D29F8
(gouraud bars with a highlighted pair) into front-OT slot 2, and the play-time / counters with func_800D2CA8 (binary
to BCD) and func_800D2D10 (BCD to glyph codes through D_800D38D8) (H, engine_8013C98C.c).

*Picture interlude (state 19).* Stage scripts (8 stage files) call func_800CFBCC(index); at the next map change
state 19 loads archive entry D_800D3408[index], fades in and shows it as one 256x144 8-bit sprite (texture page
0xE1000085, CLUT 0x7800 = (0, 480)) for 91 frames (H). What the pictures are is unknown (chapter or title cards would
fit, L: only the shape is known).

*Transition scripts.* func_800D2DAC-func_800D31FC are step handlers and five dispatchers over D_800D3920,
D_800D3928, D_800D39C4, D_800D39F0, D_800D3A8C, all indexed by the scene task's sub-step (+0x15 of D_800AE6A8): they
are the enter / exit functions of the overlay's own map records (D_800D39FC, D_800D3A20, D_800D3A44, D_800D3A68 and
whatever else the data holds) (M: same object, same calling convention as the task function; the records are data).
Their shapes: fade in, optionally starting Musashi's message event func_800D3238 (show message p+0x198, wait for its
answer); or a 10-frame wait, sound commands 0x1C / 0x1D, music fade (func_800D0C48(1)), and a fade out or the
map-change fade (H for the shapes).

**How it is entered.**

* Loaded by ModeFieldLoad (modes 10 / 15) from MAIN.CD entry 10 to 0x800CEDF8 (ID word 0x36); run by ModeFieldRun
  (mode 11) and ModeDemoRun (mode 16) through **0x800CEDFC** every frame (H, src/main.c). It stays resident; it
  leaves only through mode changes: func_800D1BF8 SetMode(17) (demo end), the engine's ModeGoTitle (states 12 / 14),
  ModeGoTrialEnd (state 17).
* main() calls **func_800D25FC** every frame while Work.pauseMenu is nonzero, and ModeDemoRun calls
  **func_800D1724(D_800D3A68)** at the demo's end (H).
* Function-pointer tables it owns (data, contents not readable except where the C or a doc fixes them): D_800D3430
  (20 game states), D_800D3480 (2, state 0), D_800D3488 (2, load loop), D_800D3490 (7, load substeps), D_800D3920 /
  D_800D3928 / D_800D39C4 / D_800D39F0 / D_800D3A8C (transition steps), D_800D3A98 (3) / D_800D3AA4 (2) (Musashi
  events), D_801141BC (3, map enter) / D_801141C8 (3, map leave) (H for use, M for contents).
* Called directly from outside (grep of src/stage, src/stg, src/*.c; "N stg" = number of per-stage files in
  src/stg): func_800CF804 (engine_801458E0, 2 stg), func_800CF818 (engine_801458E0), func_800CF854 (engine.c,
  engine_80144B9C, 6 stg), func_800CF864 (engine_8012F5F4), func_800CF8B4 (engine_801458E0, 28 stg), func_800CF8CC
  (engine_801458E0), func_800CFBBC / func_800CFBE8 (engine.c), func_800CFBCC (8 stg), func_800D02C0 (engine_80144B9C),
  func_800D02D0 (engine_801458E0), func_800D0488 (engine_8012F5F4, engine_8013C98C), func_800D0588 / func_800D0630
  (engine.c), func_800D0694 (1 stg), func_800D06CC (7 stg), func_800D06E8 (sc03_001, 12 stg), func_800D0C48
  (engine_801458E0, sc03_001, 145 stg), func_800D0C74 (3 stg), func_800D0CA0 (engine, 4 stg), func_800D0CE0 (engine, 9
  stg), func_800D0D7C / func_800D0E30 / func_800D10EC (engine_801458E0), func_800D0EC4 (four engine files, 6 stg),
  func_800D0F0C / D0F4C / D0F8C / D0FE0 / D128C (engine_801458E0, sc03_001, 4-22 stg), func_800D11F0 / func_800D1658
  (engine_8013C98C), func_800D1724 (main.c, engine, 61 stg), func_800D1734 (engine), func_800D1744 (2 stg),
  func_800D1754 / func_800D18DC / func_800D19F0 (engine.c), func_800D185C (engine_801458E0), func_800D1D94 (sc03_001, 9
  stg), func_800D1E28 (134), func_800D1EBC (133), func_800D1F90 (engine), func_800D1FC8 (engine, 5 stg), func_800D20C0
  (75 stg), func_800D21C4 (22), func_800D222C (40), func_800D22E4 (55), func_800D2318 (engine), func_800D23D0 (78),
  func_800D24A0 (three engine files, 9 stg), func_800D25FC (main.c), func_800D2624 (engine, 5 stg), func_800D2650 /
  D27DC / D29F8 (engine_8013C98C, sc03_001, 9 stg), func_800D2CA8 / func_800D2D10 (engine_8013C98C, engine_801458E0).
* No caller in any C (reached only through data, or unused): the state / step handlers above, func_800CF82C,
  func_800CF840, func_800D1000, func_800D1028, func_800D1054, func_800D109C, func_800D1E20 (a map record's +0x1C hook,
  seen in a live dump: docs/stage_loader.md), func_800D2460, func_800D2468, all of func_800D2DAC-func_800D33E0 except
  through their tables.

#### Game states

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | the entry: `D_800D3430[Work.state]()` for state < 20 | H |
| 0x800CEE40 | func_800CEE40 | state 0: `D_800D3480[stateStep]()` for step < 2 | H |
| 0x800CEE84 | func_800CEE84 | state 0 step 0: field init (time phase, requests cleared, full-reload flag from stateStepTimer, sound ids, depth 0x3E0) | H |
| 0x800CEF04 | func_800CEF04 | state 0 step 1: load slot-3 package 1, then NextGameState | H |
| 0x800CEF34 | func_800CEF34 | state 1: func_8001B324, NextGameState | H |
| 0x800CEF5C | func_800CEF5C | state 2: map flags reset (A3E2 = 1, mapLive 0, pause-allowed 0, unkA3DE 0), objects cleared, NextGameState | M (state number by elimination) |
| 0x800CEFB0 | func_800CEFB0 | state 3: NextGameState only | M (same) |
| 0x800CF370 | func_800CF370 | state 4: NOW LOADING, SetGameState(15) | H |
| 0x800CF398 | func_800CF398 | state 15: NextGameState only | H (docs/mode_dispatcher.md) |
| 0x800CF94C | func_800CF94C | states 11 / 13: load MAIN.CD entry 12 (the engine image) to 0x80128158, then NextGameState | H |
| 0x800CF990 | func_800CF990 | state 19: picture interlude (load D_800D3408[i], fade in, show 91 frames, -> 6) | H |

#### Frame loops and load steps

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEFD0 | func_800CEFD0 | state 5: blocking load loop + transition func_8001B86C(0), -> 7 | H |
| 0x800CF104 | func_800CF104 | state 6: the same with func_8001B86C(1), -> 7 | H |
| 0x800CF238 | func_800CF238 | state 18: blocking load loop, then the stage start run undrawn until stateFlag, -> 8 | H |
| 0x800CF3B8 | func_800CF3B8 | state 16: blocking load loop (VSync only), text records cleared, -> 7 | H |
| 0x800CF47C | func_800CF47C | load step 0: the pending extra load (D_80114E78, file D_800AF218), NextGameStateStep | H (role), M (table slot) |
| 0x800CF4D4 | func_800CF4D4 | load step 1: `D_800D3490[stateSubStep]()` | H (role), M (table slot) |
| 0x800CF510 | func_800CF510 | substep 0: heap reset, drawing off, records cleared; full reload -> 1, else -> 3 | H |
| 0x800CF584 | func_800CF584 | substep 1: full reload: reload the slot-2 ability package | H |
| 0x800CF5D4 | func_800CF5D4 | substep 2: full reload: reload the slot-3 package | H |
| 0x800CF628 | func_800CF628 | substep 3: sub-room / stage decision (-> 4, 5, 6 or done) | H |
| 0x800CF714 | func_800CF714 | substep 4: read the sub-room's base stage image, restore the sub-room id | H |
| 0x800CF764 | func_800CF764 | substep 5: read the sub-room file to the stage's extra-load address, done | H |
| 0x800CF7A4 | func_800CF7A4 | substep 6: read the map's stage image once the queue is free, done | H |

#### Field flags and state queries (stage-engine API)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF804 | func_800CF804 | D_80127084 = 1: next map load is a full reload (packages too); the engine's continue / restart paths | H |
| 0x800CF818 | func_800CF818 | D_80114E78 = 1: load file D_800AF218 at the next map load | H |
| 0x800CF82C | func_800CF82C | Work.unkA3DE = 1 (read by func_800CFE60: map 0x300B uses file 0x8A, bank 8) | H (effect), L (callers unknown) |
| 0x800CF840 | func_800CF840 | Work.unkA3DE = 2 | H (effect), L (callers) |
| 0x800CF854 | func_800CF854 | the map was entered by a re-entry request (scene task +0x17, the 0x01000000 bit) | H (flag), M (meaning) |
| 0x800CF864 | func_800CF864 | 1 in map 0x3069 or while Musashi's kind is 0x1A, else state == 9 | H |
| 0x800CF8B4 | func_800CF8B4 | Work.state == 9 (playing) | H |
| 0x800CF8CC | func_800CF8CC | Work.state == 10 (leaving the map) | H |

#### Stage loading and the map table

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF8E4 | func_800CF8E4 | prefetch the destination map's header when neither map is a sub-room and its stage must be read | H |
| 0x800CFBF8 | func_800CFBF8 | a sub-room's base map: kind 1-4 -> 0x1010, 0x1052, 0x1077, 0x1094 (default 0x1010) | H |
| 0x800CFC5C | func_800CFC5C | sub-room kind of a map id: 1 0x2013-0x201A (not 0x2014), 2 0x2055-0x205B, 3 0x207A-0x2080, 4 0x2097-0x209D, else 0 | H |
| 0x800CFD68 | func_800CFD68 | StageImageNeedsLoad for a map id's table entry | H |
| 0x800CFDA4 | func_800CFDA4 | SetStageImage for the current map's entry | H |
| 0x800CFDE8 | func_800CFDE8 | queue a header read (func_8001ABBC kind 2) of a map's archive file | H |
| 0x800CFE60 | func_800CFE60 | read the current map's stage image to 0x80128158 with its sound bank, with per-map overrides (0x300B, 0x3001, 0x304E, 0x1077, 0x3021 by flag / story counter); installs the map's sound record afterwards | H |
| 0x800D00E4 | func_800D00E4 | install sound record 1-15 (EXE data D_800C8058-D_800CADE8) with func_8002F5C8 | H (call), L (what the record is) |
| 0x800D0214 | func_800D0214 | read the current map's archive file to a given address with its sound bank | H |

#### Picture interlude

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CFAD0 | func_800CFAD0 | build the 256x144 picture SPRT (D_80114E7C, tpage 0xE1000085, CLUT 0x7800) and link it into the world OT | H |
| 0x800CFBBC | func_800CFBBC | clear the picture request (D_80114E70 = 0) | H |
| 0x800CFBCC | func_800CFBCC | request picture `a` for the next map change (D_80114E70 = 1, D_80114E74 = a) | H |
| 0x800CFBE8 | func_800CFBE8 | the picture request flag | H |

#### Package loading

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D02D0 | func_800D02D0 | load the slot-2 package of ability n (1-30, D_800D3764); 1 when done or nothing to load | H |
| 0x800D0488 | func_800D0488 | load slot-3 package n (1-6, D_800D384C) | H |

#### Music and ambient sound

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D02C0 | func_800D02C0 | set the room's music picker D_800D375C (stage loader, room +0xD4) | H |
| 0x800D0588 | func_800D0588 | stage-start step: request the picker's track (func_8001ABBC kind 1), D_8012704C = 0 when done | H |
| 0x800D05E8 | func_800D05E8 | the picker's track for the story counter (0 without a picker) | H |
| 0x800D0630 | func_800D0630 | reset the sound states and D_8011529C = -1 (stage init) | H |
| 0x800D065C | func_800D065C | clear the six sound-state words | H |
| 0x800D0694 | func_800D0694 | the same (a second copy; one stage file calls it) | H |
| 0x800D06CC | func_800D06CC | park both sound machines (state 3) | H |
| 0x800D06E8 | func_800D06E8 | per-frame time-of-day jingles and per-map track selection | H |
| 0x800D0C48 | func_800D0C48 | sound command (1, a), forget the current track (D_800A654C = 0) | H (calls), M (command 1 = music fade / stop) |
| 0x800D0C74 | func_800D0C74 | sound command (1, a), func_8001B34C (sound ids reset) | H |
| 0x800D0CA0 | func_800D0CA0 | sound command (1, a), forget the track, park both machines | H |
| 0x800D0CE0 | func_800D0CE0 | start the picker's track now (func_8001AAA0); on success reset the states, 1 | H |

#### Clock

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D0D7C | func_800D0D7C | the clock (D_80078EB1 hour : D_80078EB0 minute) minus h:m, wrapping at 60 / 24, packed hour << 8 \| minute | H |
| 0x800D0E30 | func_800D0E30 | a packed time minus the clock, same wrapping | H |

#### Items

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D0EC4 | func_800D0EC4 | first empty inventory slot (0x2F-0x3A), 0 when full | H |
| 0x800D0F0C | func_800D0F0C | put item v in slot i and stamp the day | H |
| 0x800D0F4C | func_800D0F4C | find item a and remove it; its slot or 0 | H |
| 0x800D0F8C | func_800D0F8C | the slot holding item a, or 0 | H |
| 0x800D0FE0 | func_800D0FE0 | empty slot i | H |
| 0x800D1000 | func_800D1000 | the day stamp of slot i | H |
| 0x800D1028 | func_800D1028 | item record +4 of the item in variable a0 (a0 passed through unprototyped) | H |
| 0x800D1054 | func_800D1054 | item record +0 of item a | H |
| 0x800D1078 | func_800D1078 | item record +4 of item a | H |
| 0x800D109C | func_800D109C | item record +6 of the item in variable a0 | H |
| 0x800D10C8 | func_800D10C8 | item record +6 of item a | H |
| 0x800D10EC | func_800D10EC | day change: each held item older than its record's +8 days becomes item +9, restamped | H |
| 0x800D11F0 | func_800D11F0 | use the item in slot a (effect by days held); empties the slot on success | H |
| 0x800D128C | func_800D128C | an item's effect (HP / BP / other stats, sound); 0 = cannot use | H |
| 0x800D1658 | func_800D1658 | the pause menu's second item action: remove the slot's item if its +4 allows (sound 0x462), else sound 0x45F | H (behaviour), M (discard) |

#### Map change

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D1714 | func_800D1714 | the destination map id (D_80078E50) | H |
| 0x800D1724 | func_800D1724 | request a map change (D_800AE6B0 = record \| flags) | H |
| 0x800D1734 | func_800D1734 | queue a second request (D_800AE6A8) | H |
| 0x800D1744 | func_800D1744 | set the return record (D_800AE6AC) used by re-entry requests | H (store), M (role) |
| 0x800D1754 | func_800D1754 | state 9 poll: start the active request, else promote the queued one | H |
| 0x800D17B8 | func_800D17B8 | start a request: copy the record, set the task function, NextGameState; 1 if there was one | H |
| 0x800D185C | func_800D185C | SetNextMap: copy the 36-byte record to D_80078E50, record bytes 2 / 3 and the pointer into the task | H |
| 0x800D18DC | func_800D18DC | state 8: run enter step D_801141BC[step] | H |
| 0x800D1938 | func_800D1938 | enter step 0: save vitals, drawing back on, run step 1 at once | H (body), M (slot) |
| 0x800D1984 | func_800D1984 | enter step 1: run the task function until nonzero | H (body), M (slot) |
| 0x800D19DC | func_800D19DC | enter step 2: mapLive = 1, return 1 | H (body), M (slot) |
| 0x800D19F0 | func_800D19F0 | state 10: stop streams and prefetch once, then leave step D_801141C8[step]; waits while Musashi +0x4E is set | H |
| 0x800D1B10 | func_800D1B10 | leave step 0: flag 0x119 off, sounds 0x448 / 0x449 / 0x8ED command 4, mapLive = 0 | H (body), M (slot) |
| 0x800D1B80 | func_800D1B80 | leave step 1: run the task function until nonzero | H (body), M (slot) |
| 0x800D1BD8 | func_800D1BD8 | leave step 2: func_800D1BF8, return 1 | H (body), M (slot) |
| 0x800D1BF8 | func_800D1BF8 | finish the change: record +0x1C hook, MapStart, choose mode 17 / state 13 / 19 / 18 / 5 / 16 | H |
| 0x800D1D24 | func_800D1D24 | MapStart: map id / group / previous group, drawing off, objects cleared, stage hooks | H |
| 0x800D1D94 | func_800D1D94 | the destination's group (id & 0xF000) | H |
| 0x800D1DB0 | func_800D1DB0 | map-change kind: 1 (another stage image, no sub-room) or 2 | H |
| 0x800D1E20 | func_800D1E20 | empty: the default record +0x1C hook | H (empty), M (role, live dump) |
| 0x800D1E28 | func_800D1E28 | start the map-change fade for that kind (kind 2: func_800167B8(4), else func_800168B4) | H |
| 0x800D1EBC | func_800D1EBC | step that fade; 1 when finished | H |
| 0x800D1F58 | func_800D1F58 | save HP, BP and D_80078E8C for a retry | H |
| 0x800D1F90 | func_800D1F90 | restore them (engine continue paths) | H |

#### Camera, sprite and vector helpers

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D1FC8 | func_800D1FC8 | move a position toward the frame's camera (D_801151D4 +0x5C) by the unit vector >> sh | H |
| 0x800D20C0 | func_800D20C0 | the same on an SVECTOR, returning the direction | H |
| 0x800D21C4 | func_800D21C4 | allocate a sprite record (func_801465C0) as draw type 3 with data b, byte +0x27 = c | H |
| 0x800D222C | func_800D222C | the same as draw type 2 (func_8001CB6C) | H |
| 0x800D2294 | func_800D2294 | the same as draw type 6 (func_8001CD9C) | H |
| 0x800D22E4 | func_800D22E4 | position (+4) += velocity (+0x10) | H |
| 0x800D2318 | func_800D2318 | pitch / yaw at +0x12 / +0x16 from the packed 10-bit direction at +0x2C | H |
| 0x800D23D0 | func_800D23D0 | an SVECTOR direction turned into (pitch, yaw, 0) in place | H |

#### Pause menu and 2D drawing

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D2460 | func_800D2460 | empty, no caller | H |
| 0x800D2468 | func_800D2468 | clear the stage-menu block (0xC4 bytes) and two words; no caller in the C | H (body) |
| 0x800D24A0 | func_800D24A0 | open the stage menu of a kind (pauseMenu = kind + 1) | H |
| 0x800D25FC | func_800D25FC | the pause-menu update main() calls: `D_8011DB24()` | H |
| 0x800D2624 | func_800D2624 | close the menu (pauseMenu = 0, sound command 0x15) | H |
| 0x800D2650 | func_800D2650 | draw a text line as 8x8 glyph sprites | H |
| 0x800D27DC | func_800D27DC | draw a row of textured quads from a u16 list | H |
| 0x800D29F8 | func_800D29F8 | draw a list of gouraud bars with a selected pair | H |
| 0x800D2CA8 | func_800D2CA8 | binary to BCD, shifted | H |
| 0x800D2D10 | func_800D2D10 | BCD digits to glyph codes (leading blanks optional) | H |

#### Transition scripts and Musashi events

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D2DAC | func_800D2DAC | start event func_800D3238, fade in, sub-step++ | H |
| 0x800D2DFC | func_800D2DFC | step the fade in; 1 when done | H |
| 0x800D2E20 | func_800D2E20 | start event func_800D3348, wait 10, sub-step++ | H |
| 0x800D2E6C | func_800D2E6C | after the wait: commands 0x1C / 0x1D, music fade, fade out | H |
| 0x800D2EE8 | func_800D2EE8 | step the fade out; 1 when done | H |
| 0x800D2F0C | func_800D2F0C | dispatcher over D_800D39C4 | H (which handlers: L) |
| 0x800D2F48 | func_800D2F48 | start Musashi's script D_800D3AAC (func_800D33B8), fade in, sub-step++ | H |
| 0x800D2F8C | func_800D2F8C | step the fade in; 1 when done | H |
| 0x800D2FB0 | func_800D2FB0 | dispatcher over D_800D39F0 | H (which handlers: L) |
| 0x800D2FEC | func_800D2FEC | start event D_800D3AB0 (func_800D33E0), wait 10 (+0x28) | H |
| 0x800D302C | func_800D302C | after the wait: commands, music fade, the map-change fade | H |
| 0x800D30A8 | func_800D30A8 | step the map-change fade (returns func_800D1EBC's answer by tail call) | H |
| 0x800D30C8 | func_800D30C8 | dispatcher over D_800D3A8C | H (which handlers: L) |
| 0x800D3104 | func_800D3104 | wait 10, sub-step++ | H |
| 0x800D3120 | func_800D3120 | after the wait: commands, music fade, fade out | H |
| 0x800D319C | func_800D319C | step the fade out; 1 when done | H |
| 0x800D31C0 | func_800D31C0 | dispatcher over D_800D3920 (2 entries) | H (which handlers: L) |
| 0x800D31FC | func_800D31FC | dispatcher over D_800D3928 | H (which handlers: L) |
| 0x800D3238 | func_800D3238 | message event: `D_800D3A98[p->step]` (step at +0x214) | H |
| 0x800D3274 | func_800D3274 | open message window p+0x198 (an id, replaced by the window), or skip two steps | H |
| 0x800D32D4 | func_800D32D4 | wait for the window's answer, close it | H |
| 0x800D3328 | func_800D3328 | end the event (func_8016F0E4) | H |
| 0x800D3348 | func_800D3348 | null event: `D_800D3AA4[p->step]` | H |
| 0x800D3384 | func_800D3384 | step++ | H |
| 0x800D3398 | func_800D3398 | end the event (func_8016F0E4) | H |
| 0x800D33B8 | func_800D33B8 | start Musashi's script D_800D3AAC (func_8016EE40, flag 0x01000000) | H |
| 0x800D33E0 | func_800D33E0 | start Musashi's script D_800D3AB0 | H |

**Data.**

| Symbol | Role | Conf. |
|---|---|---|
| D_800D3408 | the first data word: s16[20], archive entry per picture index (state 19) | H (use), contents unknown |
| D_800D3430 | the 20 game-state handlers (0x800D3430-0x800D347F) | H |
| D_800D3480, D_800D3488, D_800D3490 | state 0 steps (2), load-loop steps (2), load substeps (7, ends at 0x800D34AC) | H (use), M (contents by elimination) |
| D_800D34AC | the map table (MapIdTable), 172 words to 0x800D375C: archive entry (bits 0-11), sound record 1-15 (12-15), sound bank id (16-31), indexed by id & 0xFFF | H |
| D_800D375C | the room's music picker pointer | H |
| D_800D3764 | the slot-2 package table, 29 x {archive entry, sound bank} | H |
| D_800D384C | the slot-3 package table, 6 x {archive entry, sound bank} | H |
| D_800D387C, D_800D3888 | sprite / animation data the engine hands to func_800D21C4 and func_80128EA8 | M |
| D_800D38D8 | 11 glyph pointers: digits 0-9, 10 = blank | H |
| D_800D3918 | an SVECTOR the engine reads (D_800D391C its z) | H (use), meaning unknown |
| D_800D3920, D_800D3928, D_800D39C4, D_800D39F0, D_800D3A8C | transition step tables (D_800D3920 2 entries, D_800D3A8C 3 by spacing) | H (use), contents unknown |
| D_800D39FC, D_800D3A20, D_800D3A44, D_800D3A68 | four 36-byte map records, 0x24 apart: the engine's restart / continue outcomes use the first three (func_801594E8), the demo end the fourth | H (use), M (all four are records) |
| D_800D3A98, D_800D3AA4 | Musashi event steps (3, 2) | H |
| D_800D3AAC, D_800D3AB0 | two event script words | H (use) |
| D_800D3AB4 | read by the engine's window text code (func_80138ED0) | H (use), meaning unknown |
| D_800D43D4 | an image record the engine queues for upload (func_800183E0) | H (use) |
| D_800D8D10 | the face record FaceSet uses as a default (docs/stage_engine.md) | M |
| D_801141BC, D_801141C8 | map-enter / map-leave step tables (3 each) | H (use), M (contents) |
| D_80114E70 / D_80114E74 | picture request flag / index | H |
| D_80114E78 | pending extra-load flag | H |
| D_80114E7C | the picture SPRT packet | H |
| D_80114E94 | the sub-room id saved while its base stage loads | H |
| D_80114E98 / D_80114E9C | load steps done / transition done | H |
| D_80114EA0, D_80114EA8 | next track id; the leave sequence's stream-stop step | H |
| D_80127084 | full-reload flag | H |
| D_80115110 (0xC4 B), D_801151C8 / D_801151CC, D_8011DB24 | the stage-menu block, its two prim-buffer halves, the pause-menu update pointer | H |
| D_8011DB14, D_8011DB1C, D_80128150 | HP, BP, D_80078E8C saved at map entry | H |
| D_801151F8, D_80127500, D_80126AE8, D_801201F0, D_8012704C, D_80127050, D_8011529C | the music / jingle state machines and their counters | H |
| D_800AE6A8 (EXE) | the scene task / map request block (layout in "What it does") | H |
| D_80078E50 (EXE) | the 36-byte current map record | H |

**Notes and open questions.**

* Which handler sits in which slot of D_800D3430 is from docs/mode_dispatcher.md (read when the data was available)
  plus elimination for states 2 and 3; the transition dispatchers' tables cannot be paired with their handlers from
  the C. By spacing, D_800D3920 has 2 entries and D_800D3A8C 3, which fits the 2-step (fade-in) and 3-step
  (fade-out) handler groups (L).
* The meaning of the -1 "size" func_800CFE60 passes to LoadFileStep when the map's sound record is already
  installed is unknown (0 = a PAC archive).
* Who calls func_800CF82C / func_800CF840 (unkA3DE), func_800D1000-D109C's unused accessors and func_800D2468: no
  C caller; probably stage data tables or unused.
* func_800D06E8's track variable `m` is not set for maps outside its lists (the C leaves it uninitialised, as the
  original presumably does), so in other maps it compares a stale register value; whether its 13 calling stages
  are all listed maps was not checked.
* State 18's trigger (func_80029264, D_80075838) and the save request (func_8002AF08, values 1 / 2) are EXE flags
  whose setters were not traced here.
* D_80078E8C is halved on one continue path (engine 10853) and saved / restored with HP / BP: money would fit (L).
* Map 0x3069 is special in two places (no stream stop at leave; func_800CF864 true); what it is is unknown.

### ovl37: the developer debug menu "CHECK LIST" (MAIN.CD entry 11, slot 0 0x800CEDF8, ID 4 B + rodata 0x78 = 120 B (a 13-entry jump table and strings) / code 0x4384 = 17284 B (all -O0) / data 0x1AB0 = 6832 B, total 24240 B, 21 functions)

**What it does.** The developers' CHECK LIST screen: a list of thirteen rows edited with the pad, a two-level area /
scene selector that warps into any map, five cumulative "story position" presets, and three debug toggles. It is
never reached in the retail game (nothing in the matched C sets mode 7); the docs open it by writing mode 7 to RAM
(tools/duck_warp.py, tools/duck_debug_hotkey.py). Its result is a map id in Work.mapId / mapGroup plus whatever
state the presets wrote; the mode handler then loads the field (mode 10), which starts at game state 0 and so loads
that map (H for the writes, M for the field using them: the field's state 0 is its map setup).

Steps (Work.step, table D_800D4C54, 5 entries; the order is M: the table's contents are data, but each function's
SetStep / NextStep targets fix it):

* step 0, func_800CEF00 (init): Work.unkA3E1 = 1 (debug text off for this frame), clears the sprite lists and every
  text element, SetGameState(0), places the fixed labels (element: string, x, y): 0 the title D_800D31FC (0x40,
  0x1E); 1 the cursor glyph D_800D31F8 (0x34, 0x46); 9 "GAME" (0x40, 0x46), 0xA "AREA" (0x74, 0x46), 0xB "SCENE"
  (0x74, 0x52); 2-7 the six labels D_800D3208 / 3214 / 3220 / 3228 / 3230 / 3238 at x 0x40, y 0x5E-0x9A; 0xE / 0xF /
  0x10 the labels D_800D3264 / 3278 / 3284 at y 0xA6 / 0xB2 / 0xBE; 0xC / 0xD the selected area's and scene's names
  (0xA4, 0x46 / 0x52, attr 0x44). Zeroes the area / scene / weekday / preset indices, Work.unkA3DE, the cursor, the
  selector row and the key-repeat state, **writes the menu's own counter D_800D3344 into the game (func_80029514)**,
  NextStep. (H)
* step 1, func_800CF28C (the option page, every frame): Work.unkA3E1 = 0 (text on), reads the pad with key repeat
  (func_800D0858), Down / Up moves the cursor D_800D4C80 over 13 rows with wrap, redraws the cursor glyph at
  y = D_800D3334[cursor], then a 13-case switch (H):
  * row 0 "GAME / AREA / SCENE": Start or Circle (0x820) -> step 4, the selector.
  * rows 1, 2, 3, 5 (labels D_800D3208, 3214, 3220, 3230): Start or Circle -> fade-out and step 2: start the game in
    the current Work.mapId with nothing applied. All four do exactly the same (H).
  * row 4 (label D_800D3228): Left / Right cycles D_800D4C90 over 0..6, drawn as D_800D32F8[D_800D4C90] (element
    0x1C at 0x78, 0x82). Right increments twice (`D_800D4C90++; if (D_800D4C90++ >= 7)`, kept as shipped). Nothing in
    the overlay reads the value, so it has no effect (H).
  * row 6 (label D_800D3238): Left / Right cycles the preset level D_800D4C94 over 0..7, drawn as
    D_800D3314[D_800D4C94] (element 0x1A at 0x90, 0x9A); applied by the selector (func_800CFCBC).
  * row 7 (label D_800D3264): edits the progress counter: Right / Left +-10, Circle / Cross +-1, Triangle / Square
    +-100, clamped to 0..1700 (0x6A4), and writes it to the game every frame (func_80029514).
  * row 8 (label D_800D3278): Left / Right picks entry D_800D3348 (0..43) of the flag list D_800D4A5C; Circle toggles
    that entry's story flag.
  * row 9 (label D_800D3284): the clock D_800D334A in minutes: Right / Left +-60, Circle or Square +15, Cross -15,
    wrapped to 0..1439.
  * rows 10, 11, 12: Right toggles story flag 0, 1, 2.
  * on rows 6-12 Start also returns the cursor to row 0 and enters the selector.
  After the switch it writes the clock into the game (stats +0x1A = D_800D334A, every frame), then draws the status
  line (func_800D04F4), the preset name (func_800CFBF0) and the weekday name (func_800CFB88).
* step 2, func_800CFC58: waits for the fade-out, then NextStep, SetGameState(0), clears the sprite lists and the text.
* step 3, func_800D03F8: Work.done = 1; ModeDebugRun then calls SetMode(10).
* step 4, func_800CFDB4 (the selector, every frame): reads the pad, clears text element 0x11 (the counter number,
  reused here for a message), Up or Down switches the selector row D_800D4C84 between 0 (area) and 1 (scene); Left /
  Right steps the area D_800D4C88 over 12 categories (resetting the scene to 0) or the scene D_800D4C8C over the
  category's count, both with wrap; redraws the names (elements 0xC / 0xD) and the cursor glyph at (0x68, 0x46 + 12 *
  row). Start or Circle: fade-out, Work.mapId = the scene's id, Work.mapGroup = id & 0xF000, and if the scene is
  "available" (func_800D0828, a stub that always returns 1) applies the presets (func_800CFCBC), then, if Triangle is
  held, writes the menu's counter and clock back over the presets' values, and goes to step 2. When not available it
  would draw D_800CEE30 under the scene name (element 0x11 at 0xA4, 0x5E); unreachable since the stub returns 1.
  Cross goes back to step 1. (H)

The status line (func_800D04F4, H): reads the live counter into D_800D3344 and draws it (number element 0x11 at
0xC8, 0xA6, 4 digits); the chosen flag entry's name (0x12 at 0x98, 0xB2) and its state (0x13: set -> D_800CEE3C,
clear -> D_800CEE40); the menu clock as hours (0x14 at 0x68, 0xBE) and minutes (0x15 at 0x80), 2 digits each; and the
three toggles with their labels: 0x16 D_800CEE44 / 0x17 at 0xA8, 0xCA (flag 0 set -> D_800CEE40, clear ->
D_800CEE50); 0x18 D_800CEE54 / 0x19 at 0xA8, 0xD2 (flag 1 set -> D_800CEE50, else D_800CEE40); 0x1B D_800CEE60 /
0x1D at 0xE0, 0xDA (flag 2 set -> D_800CEE50, else D_800CEE40).

Which text is which (M, from the string sizes, the coordinates and the user's first view "GAME AREA 1 CITY, SCENE 1
THE-CASTLE-1, KISHIWADA, YAMAMOTO, GOTO, YOUBI GETU, UENAKA, PRE FLAG NO-SET, CHAR-FLAG-GLOBAL 0200, BIT-FLAG-EV005
ON, TIME 09:00, PLAYER DMG ON, GET IN SEL OFF, PLAYER HP HERANAI OFF"): the 13 rows are 0 GAME / AREA / SCENE,
1 KISHIWADA, 2 YAMAMOTO, 3 GOTO, 4 YOUBI (weekday; the 7 names start with GETU, Monday), 5 UENAKA, 6 PRE FLAG
(preset 0 "NO-SET"), 7 CHAR-FLAG-GLOBAL (the counter at stats +0x08), 8 BIT-FLAG-EV + a 3-character entry name
("005"; "BIT-FLAG-EV" is 11 characters, exactly 0x98 - 0x40 at 8 pixels each, and fills D_800D3278's 12 bytes),
9 TIME, 10 PLAYER DMG (flag 0 set = damage OFF), 11 GET IN SEL (flag 1), 12 PLAYER HP HERANAI ("HP does not
decrease", flag 2). D_800CEE40 is "OFF" and D_800CEE3C / D_800CEE50 "ON" (M). D_800CEE30 (12 bytes) is probably
"(DISELECT)", one of the strings docs/mode_dispatcher.md lists (11 bytes with its NUL; it is the "cannot select"
message, M-L). The other listed strings "JUMP_ACT_1..5" and "LAST_SCENE" fit the preset names D_800D3314[2..6] and
[7] (L-M: five act presets, each storing its act number 1..5 in counter 0x2E; value 7 applies the same as 6). The
data initials are then: D_800D3344 = 200 (CEF00 writes it into the game and the first view showed 0200), D_800D334A =
540 (09:00), D_800D3348 = the entry named "005" (M). No reader of flags 0, 1, 2 was found by grep in src/ (they may
be read by code still in asm or by stage code not in this snapshot): what the three toggles do in game is unknown
beyond their labels.

The presets (func_800CFCBC, H): with preset level v, v >= 1 runs the base reset func_800D0964, v >= 2 preset 1
(func_800D0BDC), v >= 3 preset 2 (func_800D1254), v >= 4 preset 3 (func_800D1B00), v >= 5 preset 4
(func_800D235C), v >= 6 preset 5 (func_800D2BC4); 7 equals 6. Each later preset assumes the earlier ones ran. They
run only from the selector's confirm, not from rows 1-5. What each writes (H):

| Preset | stats +0x08 / +0x0C / +0x10 | +0x3A, +0x3C / +0x3E, +0x40 | +0x6C, 74, 7C, 84 | +0x90 = +0x94 | flags set (func_80029124) | counters (func_800291A0) | records |
|---|---|---|---|---|---|---|---|
| base D0964 | 0 / 0 / 0 | 150, 150 / 150, 150 | 0 | 0 | none | none | none |
| 1 D0BDC | 10 / 0 / 0 | 150 / 150 | 3 | 1750 | 0x7F, 0x80, 0x84 | 0x3B-0x3F = 3, 0x40-0x62 = 0, 0x2E = 1 | 1-6 |
| 2 D1254 | 200 / 13 / 1 | 250 / 375 | 12 | 12740 | 0x96, 0xE5, 0xE7, 0xDE, 0xEC, 0xEF, 0xE3, 0xDF, 0xF2, 0xED, 0x10B, 0x16, 0x1F, 0x82, 0x8A, 0x8F-0x94, 0x97, 0x98, 0xB5, 0xF0, 0x40-0x47, 0x9E | 0xCD = 1 (a counter write in the middle of the flag list), 0x3B = 5, 0x3C-0x62 per act (C), 0x2E = 2 | 7-12, 38 |
| 3 D1B00 | 600 / 26 / 2 | 350 / 450 | 19 | 23620 | 0xF5, 0x106, 0xF8, 0xFF, 0xF9, 0x105, 0x100, 0xFD, 0xFE, 0xFB, 0xF4, 0xF6, 0x17, 0x20, 0x1E, 0x83, 0x85-0x87, 0x8B, 0xB6, 0x1B, 0x48, 0x49, 0x4B, 0x101-0x104, 0xB3 | 0x3B = 5, 0x3C-0x62 (C), 0x2E = 3 | 13-18, 40 |
| 4 D235C | 900 / 32 / 3 | 415 / 500 | 24 | 32400 | 0x10D, 0x107, 0x18, 0x1D, 0x21, 0x81 (twice), 0x8C, 0xC7-0xD9, 0x9B, 0xC4-0xC6, 0x56-0x58 | 0x3B = 9, 0x3C-0x62 (C), 0x2E = 4 | 19-24 |
| 5 D2BC4 | 1200 / 35 / 7 | 465 / 500 | 28 | 40050 | 0x19, 0x1D, 0x21, 0x8D, 0x89, 0xBD-0xC3, 0x4A, 0x4C, 0xBB | 0x3B = 13, 0x3C-0x62 (C), 0x2E = 5 | 25 |

All six also write the same fixed values: stats +0x04 (play time) = 0, +0x14 = 100, +0x18 = 0x01FE0000 (clock +0x1A =
510, 08:30), +0x24 and +0x2C = 0x640000 (halfwords +0x26 / +0x2E = 100), +0x34 = 1, +0x36 = 1 (daytime), +0x37 = 1
(the period for 08:30), +0x38 = 0x081E (08:30 as minutes / hours), +0x44 = 3, +0x48 = 1 (0 in the base), the rest
of +0x1C..+0x94 0. The "records" column: entry n of an 8-byte table at 0x8010F46C (the field overlay's data span,
which ovl37's 24 KB does not overwrite, so it reads what ovl36 left there) gives D_800A6588[n - 1] = its halfword
and a counter in 0x63..0x7F = its byte 2 | 0x80; the EXE's func_8002AC00(n) does the same with counter 0x62 + n,
while the presets use their own counter numbers (e.g. records 2-6 -> 0x65-0x69, record 18 -> 0x6D). What the
counters, flags and records mean is unknown here (the two equal pairs +0x3A/+0x3C and +0x3E/+0x40 look like current
/ maximum values, L).

**How it is entered.** ModeDebugLoad (mode 7, src/main.c): DrawNowLoading(0) and LoadFileStep(g_FileLocDebug =
entry 11, slot 0) each frame; when loaded SetOtDepthLimit(0x3E0), NextMode, clear the text. ModeDebugRun (mode 8)
calls **func_800CEE74** (offset 0x7C, after the rodata) every frame and on Work.done SetMode(10). func_800CEE74 calls
D_800D4C54[Work.step] for step < 5. A second 5-entry table D_800D4C68 is called only by func_800D0450 (indexed by
the cursor), which nothing calls. Nothing outside the overlay calls into it but the mode handler. The option page's
switch uses the rodata jump table at 0x800CEDFC (13 words, 0x800CEDFC-0x800CEE30, M from its size).

Functions:

Entry and steps

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEE74 | func_800CEE74 | entry (ModeDebugRun): D_800D4C54[Work.step]() for step < 5 | H |
| 0x800CEF00 | func_800CEF00 | step 0: CHECK LIST init: labels, indices to 0, SetGameState(0), writes the menu counter into the game, NextStep | H |
| 0x800CF28C | func_800CF28C | step 1: the option page: cursor over 13 rows, per-row edits (13-case switch), clock write, status / preset / weekday draw | H |
| 0x800CFC58 | func_800CFC58 | step 2: wait for the fade-out, NextStep, SetGameState(0), clear sprites and text | H |
| 0x800D03F8 | func_800D03F8 | step 3: Work.done = 1 | H |
| 0x800CFDB4 | func_800CFDB4 | step 4: the area / scene selector: set Work.mapId / mapGroup, apply presets, fade out | H (step number M) |

Draw and input helpers

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CFB88 | func_800CFB88 | draw the weekday name D_800D32F8[D_800D4C90] (element 0x1C) | H (weekday M) |
| 0x800CFBF0 | func_800CFBF0 | draw the preset name D_800D3314[D_800D4C94] (element 0x1A) | H |
| 0x800D04F4 | func_800D04F4 | status line: live counter, chosen event flag and its state, menu clock, the three toggles | H |
| 0x800D0858 | func_800D0858 | read pad 0 into D_800D4C9C (pressed) / D_800D4C98 (held) with d-pad auto-repeat (6 frames, then every 3) | H |
| 0x800D0828 | func_800D0828 | "scene selectable?" stub: returns 1 for any map id | H (role M) |

Cheat presets

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CFCBC | func_800CFCBC | apply presets cumulatively up to level D_800D4C94 (1 base .. 6 preset 5; 7 = 6) | H |
| 0x800D0964 | func_800D0964 | base: stats block D_80078E78 to new-game-like values (no flags, no counters) | H |
| 0x800D0BDC | func_800D0BDC | preset 1 (act 1, M): stats, 3 flags, counters, records 1-6, counter 0x2E = 1 | H |
| 0x800D1254 | func_800D1254 | preset 2 (act 2, M): stats, 34 flags, counters, records 7-12 and 38, 0x2E = 2 | H |
| 0x800D1B00 | func_800D1B00 | preset 3 (act 3, M): stats, 30 flags, counters, records 13-18 and 40, 0x2E = 3 | H |
| 0x800D235C | func_800D235C | preset 4 (act 4, M): stats, 34 flag sets (33 distinct), counters, records 19-24, 0x2E = 4 | H |
| 0x800D2BC4 | func_800D2BC4 | preset 5 (act 5, M): stats, 15 flags, counters, record 25, 0x2E = 5 | H |

Unused

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D0430 | func_800D0430 | empty; no caller in the C (probably an entry of D_800D4C68, L: an uncalled function in a file whose other uncalled functions are table entries) | H (empty) |
| 0x800D0450 | func_800D0450 | per-row dispatch D_800D4C68[cursor]() for cursor < 5; no caller (a leftover of an older option page, L) | H |
| 0x800D04C4 | func_800D04C4 | calls the stage engine's func_80136EC4, which is empty in src/stage/engine_8012F5F4.c; no caller (L: a D_800D4C68 entry) | H |

**Data.**

* D_800D4C54 (5 function pointers): the step table {CEF00, CF28C, CFC58, D03F8, CFDB4} (M order). D_800D4C68 (5
  pointers, then 4 bytes up to D_800D4C80): the unused row table.
* D_800D4B64 (12 x 20 bytes, `{ char name[12]; DbgItem *items; s32 count; }`, exactly to D_800D4C54): the area
  categories; each points into the scene lists (DbgItem `{ char name[0x20]; s32 mapId; }`, 0x24 bytes), which fill
  0x800D334C-0x800D4A5C (5904 bytes, about 164 scenes, M).
* D_800D4A5C (44 x 6 bytes `{ char name[4]; s16 flag; }`, exactly to D_800D4B64): the BIT-FLAG-EV list, a name and a
  story flag number each.
* D_800D32F8 (7 string pointers): weekday names; D_800D3314 (8 string pointers): preset names; D_800D3334 (13
  bytes): each row's y. D_800D31F8 cursor glyph, D_800D31FC title, D_800D3208-D_800D3284 the row labels (sizes fit
  the names above), D_800CEE30-D_800CEE60 in the rodata: the "(DISELECT)" message, ON / OFF, and the three toggle
  labels.
* Menu state: D_800D4C80 cursor row (s16), D_800D4C84 selector row (s16), D_800D4C88 area index, D_800D4C8C scene
  index, D_800D4C90 weekday, D_800D4C94 preset level, D_800D4C98 / D_800D4C9C pad held / pressed (u16),
  D_800D4CA0 / D_800D4CA4 key-repeat last held and countdown, D_800D3344 the counter (s32), D_800D3348 the flag
  entry index (s16), D_800D334A the clock in minutes (s16; initials M as above).
* EXE state it writes: Work.mapId / mapGroup / unkA3DE / unkA3E1 / done, the game state (SetGameState(0)), the
  stats block D_80078E78, the flag bits D_800AE648, the counters D_800BA1B8, the halfwords D_800A6588[0..39].

**Notes and open questions.**

* The flag toggles and the counter edit act on the live game state at once; the clock is written every frame of
  the option page, so entering the page always resets the game clock to the menu's own value (H).
* Entering the menu overwrites stats +0x08 with D_800D3344's initial value before anything is shown (H): a menu
  opened from a running game changes the story counter even if you leave at once through rows 1-5.
* The weekday row has no effect in this build; the developer-name rows 1, 2, 3, 5 are four identical "go" entries.
* The records read from 0x8010F46C+ belong to ovl36's data span: correct only if the field overlay was resident
  before (as it is when the menu is opened from a map); after a cold start into mode 7 the bytes would be whatever
  memory held (M).
* Open: the texts of the 12 categories and their scene lists (data), the exact preset names, the meaning of the
  counters 0x3B-0x7F and 0xCD, of the flags, and of stats +0x0C, +0x10, +0x3A-0x40, +0x6C-0x88, +0x90 / +0x94; what
  reads flags 0-2.

### ovl38: the boot / licence screen (MAIN.CD entry 1, entry 0 the same; slot 0 0x800CEDF8; code 0x4-0x5F0 = 1516 B, data 0x5F0-0x5000 = 18960 B; 11 functions)

**What it does.** The first screen after boot: a licence notice, then a second picture (a logo), while it reads
MAIN.CD entry 2 in the background. It is a step machine of seven steps run through the 8-entry table D_800CF450
(indexed by Work.step, guarded `step < 8`). The step numbers below are the C comments' and the functions' address
order; the table itself is not in the repository (M). The fit is good: step 0's `SetStep(3)` lands on the
licence fade-out, which with brightness 0 ends at once.

* **Step 0, func_800CEE40 (init).** Debug text and sprite draw off (`unkA3E1 = 1`), clear the record pools and debug
  text, SetScreenMode2(7) (screen mode 7 of the EXE's table D_80062A3C; its size is not known from the C), display
  mask off / VSync / on, `vsyncMode = 0` (60 Hz), reset the screen fade (func_800167B8(0)), queue the image list
  D_800D3ABC (the pictures to VRAM), clear the read flag D_800D3C0C and the brightness D_800D3C10, ApplySoundOptions,
  `timer = 0`. Then: if func_8001BFE8() (the EXE flag D_800747D8, set by func_8001BFF8 just after this test the first
  time, cleared only by InitCdFiles at boot) is already set, SetStep(3), so the licence picture is skipped; else set
  it and go to step 1. So the licence notice is shown once per power-on, the second picture every time modes 1-3 run
  (H for the code; how the game comes back to mode 0 is not in these files).
* **Step 1, func_800CEF04.** Brightness += 16 up to 0x80 (8 frames), drawing the licence picture.
* **Step 2, func_800CEF54.** Hold it for 0x105 frames (261, about 4.4 s at 60 Hz).
* **Step 3, func_800CEFA8.** Brightness -= 4 down to 0 (32 frames).
* **Step 4, func_800CEFF4.** Draw the second picture (func_800CF180), keep the background read going
  (func_800CF114) and fade the screen in (func_800167F0(0)) until the fade is complete.
* **Step 5, func_800CF038.** Draw, keep reading, `timer++`; when the read has finished (D_800D3C0C) AND either 0x81
  frames have passed (129, about 2.2 s) or Start / Cross is pressed (mask 0x840), start the fade out
  (func_800167B8(4)).
* **Step 6, func_800CF0C4.** Draw; when the fade-out ends: `Work.done = 1`, SetScreenMode2(1), `vsyncMode = 2`.

What it draws (H for the geometry): the licence picture is two 256x96 sprites side by side at screen (-256, -28) and
(0, -28), 8-bit texture pages 0x8A and 0x8C (VRAM x 640 and 768, y 0), v 0x38, CLUT 0x7840 (VRAM (0, 481)), coloured
by D_800D3C10, built per frame in D_800D3AEC / D_800D3B1C. The second picture is two sprite packets per buffer that
the code does not build: D_800CF3F0[frame] and D_800CF420[frame] are linked as they are in the data, so their size and
position are not in the C; its fade is the screen fade, not the sprite colour. The C comment calls it the SQUARESOFT
logo (M: the US boot order, licence notice then the Square Soft logo; not checkable without the data).

Sound: none of its own besides ApplySoundOptions (the options' volume / mode). Result to the mode handler: only
`Work.done = 1` (no value).

**How it is entered.** Mode 1, ModeLicenceLoad, loads MAIN.CD entry 1 (g_FileLocLicence, 0x800AE838) to 0x800CEDF8
with LoadFileStep, SetOtDepthLimit(0x3E0), NextMode. Mode 2, ModeLicenceRun, calls **func_800CEDFC** (0x800CEDFC,
payload + 4) every frame; when `Work.done` is set it clears the record pools and debug text and SetMode(3); mode 3
(ModeLicenceExit) sets the OT depth and SetMode(5), the title load. Function table: D_800CF450 (steps). Nothing else
in the overlay is called from outside.

#### Entry and steps

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | entry: run step `Work.step` from D_800CF450 if step < 8 | H |
| 0x800CEE40 | func_800CEE40 | step 0: screen mode 7, 60 Hz, fade reset, queue D_800D3ABC; skip the licence (SetStep(3)) if already shown once, else mark shown | H |
| 0x800CEF04 | func_800CEF04 | step 1: licence fade in, brightness +16 to 0x80 | H |
| 0x800CEF54 | func_800CEF54 | step 2: hold the licence 0x105 frames (stepTimer) | H |
| 0x800CEFA8 | func_800CEFA8 | step 3: licence fade out, brightness -4 to 0 | H |
| 0x800CEFF4 | func_800CEFF4 | step 4: second picture, screen fade in, background read | H |
| 0x800CF038 | func_800CF038 | step 5: wait for the read and 0x81 frames or Start / Cross, then start the fade out | H |
| 0x800CF0C4 | func_800CF0C4 | step 6: on the fade-out's end set Work.done, screen mode 1, 30 Hz | H |

#### Loading

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF114 | func_800CF114 | until done, ask for a background read (func_8001ABBC kind 0, a PAC archive) of MAIN.CD entry 2 (D_800AE840) with the sound list {0 (none), D_800A2E20} in D_800C7C60; set D_800D3C0C when it completes | H |

#### Drawing

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF180 | func_800CF180 | link the two prebuilt second-picture packets D_800CF3F0[f], D_800CF420[f] into OT entry 0xFFF | H (logo M) |
| 0x800CF290 | func_800CF290 | build and link the licence picture's two 256x96 sprites at brightness D_800D3C10 | H |

**Data.**

| Symbol | Role | Conf. |
|---|---|---|
| D_800CF3E8 (data start) | first 8 bytes of the data segment, unknown | - |
| D_800CF3F0, D_800CF420 | the second picture's DR_TPAGE + SPRT packets, two per buffer, prebuilt in the data | H (content unknown) |
| D_800CF450 | step table, 8 function pointers (7 steps known; the 8th unknown) | H |
| D_800D3ABC | image list queued at step 0 (the two pictures and CLUTs, M); the pixel data presumably lies between 0x800CF470 and here (L: the data is about 18 KB) | H list, M content |
| D_800D3AEC, D_800D3B1C | the licence picture's left / right packets, two per buffer | H |
| D_800D3C0C | 1 once the entry-2 read has completed | H |
| D_800D3C10 | licence picture brightness 0-0x80 | H |
| D_800AE840 (EXE) | g_ArchiveFileLoc[2] | H |
| D_800C7C60 (EXE) | the loader's sound list pair (bank 0 = none, D_800A2E20); the title load reuses it with bank 0x57 | H |

**Notes and open questions.**
* What MAIN.CD entry 2 holds is unknown ("no code", docs/overlays.md); the licence screen waits for it before
  leaving, and its sound list is empty, so it is data read during the boot screens (textures? the font?), L.
* The values of screen modes 7 and 1 (D_80062A3C) are not in the C.
* The 8th entry of D_800CF450 is never reached: step 6 sets `done` and mode 2 leaves on that same frame.
* The fade speed of steps 4 and 6 comes from D_80062BA0[vsyncMode] (60 Hz here), values unknown.

### ovl39: the title screen, its menu and the logo movie player (MAIN.CD entry 3, entry 4 the same; slot 0 0x800CEDF8; code 0xD0-0x47A0 = 18128 B (C 17208 B in three files, LIBPRESS VLC.OBJ asm 920 B), rodata 0x4-0xD0 = 204 B, data 0x47A0-0x1DC1C = 103548 B; 58 functions + 2 library)

**What it does.** The title: it plays an opening movie (a .STR stream through the MDEC, PsyQ's movie sample), then
shows the 640x480 title picture fading in from white, PRESS START blinking, then a two-line menu (New Game /
Continue), and if nobody presses anything it times out into the attract demo. It returns its choice in Work.timer.

**The step machine (file 1, -O2).** func_800CEEC8 calls `D_800D3598[Work.step]()` every frame (no bound check). The
order below is the functions' address order and the NextStep chain; the table is not in the repository (M, with one
supporting fit: step 0 calls NextStep twice, skipping exactly the one step that does a load the rest never uses).

* **Step 0, func_800CEF04 (init).** `unkA3E1 = 1` (no debug text / sprite draw), clear the pools and debug text, CD
  audio on (func_8002D858), menu state 0, blink on, brightness D_800EC68C = 0x80, cursor / idle counter / result /
  CLUT-fade divider / blink counter 0, D_800EC688 = 0xFF (never read in the C), **D_800EC684 = func_800D1E18()**
  (does this visit's movie file exist on the disc), set every CLUT of the image list D_800DA48C to white
  (func_800CFB3C), then NextStep twice.
* **Step 1, func_800CEFBC (skipped).** NOW LOADING, LoadFileStep of MAIN.CD entry 5 (D_800AE858) to 0x80164E20, then
  clear the debug text and NextStep. 0x80164E20 is 0x80120000 + 0x44E20, the second slot of the two-picture buffer
  func_800CFE00 uploads from, and entries 5 / 6 are the trial version's scene-select pictures (docs/overlays.md): so
  this is the trial's picture load, disabled in retail by the double NextStep (M).
* **Step 2, func_800CF010.** If the movie exists, play it (func_800D1E58: a blocking loop, below). Then set up the
  title screen (func_800CFFEC: 640x480 interlaced through GsInitGraph2(640, 480, 5, 0, 0), one display buffer at
  (0,0), black 20-line bars top and bottom, the middle 440 lines cleared white, background clears off), `vsyncMode
  = 0` (60 Hz), clear the fade-done flag, set the CLUTs white again, D_800EC6A4 = 1, next.
* **Step 3, func_800CF078.** Draw the title; every second frame move every CLUT of D_800DA48C one step per channel
  from its working copy toward its true colours (func_800CFC1C) and upload the changed ones: the picture fades in
  from white. When a pass changes nothing (D_800EC6A0 = 1) and D_800EC6A4 (always 1), menu state = 1, next.
* **Step 4, func_800CF104 (the menu).** By menu state D_800EC690: **1 PRESS START**: blink (visible while
  `(counter & 0x1F) < 0x18`), idle counter +1 per frame; Start / Cross (0x840) plays sound 0xC6E and goes to state 2.
  **2 the menu**: Down plays 0x9C1 and moves the cursor D_800EC678 down (wrapping 0-1), Up the same upward, both
  reset the idle counter; Start / Cross plays 0x9C0, result D_800EC680 = cursor, next step. **3**: upload picture
  [cursor] (func_800CFE00) and go to state 2; nothing sets state 3 (unreachable in the C; with step 1 it looks like
  the trial's scene select, a preview picture per option, M). Then draw. If the idle counter reaches 0x1C3 (451
  frames, about 7.5 s at 60 Hz; it only counts in state 1) the result is 4 and the step ends.
* **Step 5, func_800CF300.** Draw with brightness -4 per frame; below 0, clear VRAM (0,0)-(640,480) black, next.
* **Step 6, func_800CF370.** SetScreenMode2(1) (back to the game's screen mode), `vsyncMode = 2`, next.
* **Step 7, func_800CF3A4.** Queue the image list D_800D52BC (M: put back what the title overwrote in VRAM; its content
  is unknown), `Work.done = 1`, `Work.timer = D_800EC680`. Runs once: ModeTitleRun acts on `done` the same frame.

**What it draws** (func_800CF3E8, every step from 3; H for the geometry): the background, six 8-bit sprites making a
640x440 picture at screen (-320, -220): texture pages 0x8A / 0x8C / 0x8E (VRAM x 640 / 768 / 896, rows 36-255, v
0x24) and 0x9A / 0x9C / 0x9E (rows 256-475), widths 256 + 256 + 128, CLUT 0x78C0 (VRAM (0, 483)); so the picture
lives at VRAM (640, 36), 640x440 8-bit. State 1 adds PRESS START: a 256x32 and a 96x32 sprite at (-176, 84) and
(80, 84) from pages 0x8A / 0x8C at v 0, CLUT 0x7880, shown while blinking on. State 2 adds the menu: a 128x64
sprite at (-64, 68) from page 0x8F, CLUT 0x7A80 (the two option lines, M), and a 224x32 bar at (-112, 68 + 32 x
cursor) from page 0x8D, CLUT 0x7800 (the highlight, M). All coloured by D_800EC68C, double-buffered packets
D_800EC6A8-D_800EC858, all into OT entry 0xFFF.

**Palette fades** (H). D_800DA48C is an image list (the EXE's upload format). For each type-9 (CLUT) entry, `pix[0 ..
w-1]` are the true colours and `pix[w .. 2w-1]` the working copy that is uploaded. func_800CFB3C fills the working
copies with 0x7FFF (white) and uploads them; func_800CFC1C steps them toward the true colours (keeping the STP bit,
and turning a result of 0 into 0x8000 when the target is not 0 so it stays opaque); func_800CFEB4 steps them toward
black (no caller in the C).

**The movie player** (H for the mechanics; the sample correspondence from docs/overlays.md and the code). The title
plays one of two movies, alternating on each visit: D_800D942C is two 0x20-byte records `{char *name; is24bit;
startFrame; endFrame; x; y; width; height}` (field roles M, from their uses) indexed by `func_8001BFA0()` (the EXE
counter D_80063074 & 1, reset at boot), and func_800D1E58 increments the counter after playing. func_800D1E18 looks
the name up with CdSearchFile into D_800EC9FC. The player (func_800D1E9C) is the PsyQ movie sample's play loop: set
the decode environment (two frame rectangles one above the other at (x, y) and (x, y + height), slice width 16, or
24 for 24-bit), strInit (DecDCTReset(0), the MDEC-out callback strCallback, StSetRing(D_800D946C, 32 sectors),
StSetStream(is24bit, startFrame, -1), strKickCD: CdlSetloc (returns 1 at once if the lid is open, status 0x10) and
CdRead2(0x1C0 = stream | double speed | real time)), decode the first frame; display mask off, clear the movie area
black and the VRAM to its right white; then loop: DecDCTin(vlc buffer, 3 or 2), DecDCTout(first slice), strNextVlc
(decode the next frame's bitstream with DecDCTvlc while the MDEC works), strSync (wait for the frame's last slice),
VSync(0), show the finished rectangle (24-bit: isrgb24 and width x 2/3), display mask on. It stops at the movie's
end frame (D_800EC9F4); Start on either pad (TestPadsAny(0, 0x800)) starts a CD-audio fade (func_8002D8A8) and stops
16 frames later, except in the last 15 frames (D_800EC9F8). The loop polls the pads (UpdatePads) and the sound
driver (func_8002D034) itself because it blocks inside one call of step 2. On the way out: MDEC-out callback off,
StUnSetRing, CD audio volume 0, CdControlB(CdlPause), DecDCTReset(0), display mask on, and SetFrameCallbacks (the
EXE's VSync / DrawSync handlers, which DecDCTReset(0)'s ResetCallback removed). Differences from the sample: the
lid-open test, the near-end no-skip window, the CD-audio fade on skip, the grey (16-bit) or black clear on a size
change, and a first-slice width fix in strCallback (D_800EC9F0: when the frame width is not a multiple of the slice
width the first slice advances by the remainder). D_800A5F1C (EXE) is tested and cleared with StCdInterrupt in
strCallback in 24-bit mode, as the sample's `StCdIntrFlag` (M).

**The MDEC code.** Besides LIBPRESS VLC.OBJ (DecDCTvlcSize / DecDCTvlc, asm, PsyQ 4.0 by tools/psyq_match.py), the
LIBPRESS DCT functions are compiled C here (0x800D2AA0-0x800D30D0): the public DecDCT* calls over a set of internal
helpers that drive DMA channel 0 (MDEC in) and 1 (MDEC out) and the MDEC registers through the pointers
D_800DB63C-D_800DB674 (register roles M: the values written are the standard MDEC / DMA protocol: CHCR 0x01000201
to the MDEC, 0x01000200 from it, MDEC control 0x80000000 reset and 0x60000000 enable DMA in / out, DPCR |= 0x88). The
default quantisation and IDCT tables are D_800DB52C (header word + 32 words: iq_y, iq_c) and D_800DB5B0 (header +
32 words: the DCT matrix), sent by MDEC reset mode 0.

**What it returns.** `Work.timer` (H, src/main.c ModeTitleRun): **0** New Game (map 0x3005, group 0x3000, mode 10),
**1** Continue (the same, plus SetGameState(11)), **4** idle timeout (demoActive = 1, mode 15, the attract demo).
2 and 3 are not handled (the title would sit in its last step with `done` set). File 1 only produces 0, 1 and 4; the
-O0 machine below also produces 2.

**The second step machine (file 2, -O0, 0x800D0100-0x800D1E18).** func_800D0100 runs `D_800D363C[Work.step]()`, but
nothing in the C calls func_800D0100 and the EXE calls only 0x800CEEC8, so all of file 2 is unreachable unless the
step table D_800D3598 (not in the repository) points into it (H that no C calls it; M that it is dead). It is a
different title menu: three options (cursor D_800EC894, 0-2, Up / Down with 0x9C1, Start only (0x800) with 0x9C0
and a screen fade out), results by cursor 0 -> timer 2, 1 -> 0, 2 -> 1, and 4 (an idle countdown D_800EC88C, which
its init sets to -1, so disabled). It has two variants of the screen: func_800D0D6C draws a 320x240 15-bit picture
(pages 0x10A / 0x10E, VRAM (640, 0)) at full brightness with a 120x60 option-text sprite and a 30x20 cursor (20
lines apart) from page 0x0F, CLUT 0x7A00; func_800D12D0 draws a 640x480 8-bit picture (pages 0x8A-0x9E, VRAM (640,
16), CLUT 0x7800) with the same text and cursor, all at brightness D_800EC890. func_800D0C50 uploads picture
[cursor] from three 640x480 8-bit TIMs at 0x80114000 (0x4B220 bytes each: CLUT to (0, 480), pixels to (640, 16),
exactly what func_800D12D0 draws) and does SetStep(3): a preview picture per option, so this looks like the scene
select of the trial version (or a development title), M / L. func_800D1D14 blinks the chosen option with debug text
(func_8001534C: string D_800D3624[i] at (0x50, D_800D3620[i]), or D_800D3618 at (0, 0) for "off"), and its init
func_800D05B4 turns the debug text on (`unkA3E1 = 0`). Its packets are single-buffered (D_800EC8B4-D_800EC98C).
How its 12 steps are ordered in D_800D363C is unknown: by address they read as two sequences, (a) init / movie /
menu (320x240) / fade-out-and-finish (0x800D0174-0x800D0440) and (b) init / queue images / fade in / menu (640x480)
/ blink / fade out / finish / load picture (0x800D05B4-0x800D0C50), L.

**How it is entered.** Mode 5, ModeTitleLoad, loads MAIN.CD entry 3 (g_FileLocTitle, 0x800AE848) to 0x800CEDF8 with
the sound list {0x57, D_800A2E20} (D_800C7C60), then sound command 2, SetOtDepthLimit(0x3E0), ResetGameProgress,
ApplySoundOptions, D_800B99DA = 0, NextMode. Mode 6, ModeTitleRun, calls **func_800CEEC8** (0x800CEEC8, payload +
0xD0, after the ID and the rodata) every frame; on `done` it does SetGameState(0), clears the pools and debug text,
and acts on Work.timer (above). Every return to the title (mode 17 after a demo, the stage engine's ModeGoTitle)
reloads the overlay, so its variables start again from the data. Function tables: D_800D3598 (file 1's steps),
D_800D363C (file 2's steps). One function runs at interrupt time: strCallback (func_800D24D0) as the DMA channel 1
callback while a movie plays. Nothing else is called from outside.

#### Entry and steps (file 1)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEEC8 | func_800CEEC8 | entry: run step `Work.step` from D_800D3598 | H |
| 0x800CEF04 | func_800CEF04 | step 0: init the title's variables, CD audio on, test the movie file, CLUTs to white, skip step 1 | H |
| 0x800CEFBC | func_800CEFBC | step 1 (skipped): NOW LOADING, load MAIN.CD entry 5 to 0x80164E20 (the trial's second picture, M) | H code, M role |
| 0x800CF010 | func_800CF010 | step 2: play the movie if present, set up the 640x480 white title screen, 60 Hz | H |
| 0x800CF078 | func_800CF078 | step 3: draw and fade the CLUTs in from white; when done, PRESS START | H |
| 0x800CF104 | func_800CF104 | step 4: PRESS START / two-option menu / idle timeout, sounds 0xC6E, 0x9C1, 0x9C0 | H |
| 0x800CF300 | func_800CF300 | step 5: brightness fade out, then clear VRAM 640x480 black | H |
| 0x800CF370 | func_800CF370 | step 6: SetScreenMode2(1), 30 Hz | H |
| 0x800CF3A4 | func_800CF3A4 | step 7: queue D_800D52BC, Work.done = 1, Work.timer = the result | H |

#### Drawing and palette fades (file 1)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF3E8 | func_800CF3E8 | draw the 640x440 background, PRESS START (state 1) or menu text and cursor bar (state 2), at D_800EC68C | H |
| 0x800CFB3C | func_800CFB3C | set every CLUT working copy of an image list to white and upload it | H |
| 0x800CFC1C | func_800CFC1C | every second call, step every CLUT working copy one unit per channel toward its true colours; upload changed ones; return 1 while anything changed | H |
| 0x800CFE00 | func_800CFE00 | upload picture [cursor] from the TIM pair at 0x80120000 (0x44E20 bytes each): CLUT to (0, 480), 640x440 pixels to (640, 36); only from the unreachable menu state 3 | H |
| 0x800CFEB4 | func_800CFEB4 | step every CLUT working copy toward black and upload; return 1 while anything is non-black; no caller in the C | H |
| 0x800CFFEC | func_800CFFEC | title screen setup: 640x480 interlaced, one buffer, black bars and white middle, background clear off | H |

#### The second step machine (file 2, -O0, no caller)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D0100 | func_800D0100 | run step `Work.step` from D_800D363C; nothing in the C calls it | H |
| 0x800D0174 | func_800D0174 | init: no draw, clear, CD audio on, queue D_800D93FC, cursor 0, test the movie file | H |
| 0x800D0204 | func_800D0204 | play the movie if present and draw the 320x240 menu once, next | H |
| 0x800D0268 | func_800D0268 | three-option menu (320x240): Up / Down, Start: sound, fade out, next | H |
| 0x800D0440 | func_800D0440 | wait for the fade out, then done with the result by cursor (0 -> 2, 1 -> 0, 2 -> 1, 4 -> 4), clear 320x480 black | H |
| 0x800D05B4 | func_800D05B4 | init (variant b): debug text on, brightness 0, queue D_800D4E6C and D_800D52BC, cursor 0, idle off (-1) | H |
| 0x800D0664 | func_800D0664 | clear debug text, queue D_800D93FC, next | H |
| 0x800D06BC | func_800D06BC | draw the 640x480 screen, brightness +4 to 0x80 | H |
| 0x800D0740 | func_800D0740 | three-option menu (640x480) with the idle countdown (result 4) | H |
| 0x800D09A0 | func_800D09A0 | blink the chosen option's debug text for 0x21 frames | H |
| 0x800D0A7C | func_800D0A7C | brightness -4 to 0, then SetScreenMode2(1), 30 Hz | H |
| 0x800D0B1C | func_800D0B1C | queue D_800D4E6C, done with the result by cursor | H |
| 0x800D0C50 | func_800D0C50 | upload picture [cursor] from the three TIMs at 0x80114000 (CLUT (0, 480), pixels (640, 16)), SetStep(3) | H |
| 0x800D0D6C | func_800D0D6C | draw the 320x240 15-bit picture, option text and cursor | H |
| 0x800D12D0 | func_800D12D0 | draw the 640x480 8-bit picture, option text and cursor at D_800EC890 | H |
| 0x800D1D14 | func_800D1D14 | set option i's debug-text record: its label at (0x50, y[i]), or D_800D3618 at (0, 0) | H |

#### Movie player (PsyQ movie sample, file 3)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D1E18 | func_800D1E18 | 1 if this visit's movie (D_800D942C[counter & 1]) is found by CdSearchFile (into D_800EC9FC) | H |
| 0x800D1E58 | func_800D1E58 | play this visit's movie, then advance the counter so the next visit plays the other | H |
| 0x800D1E9C | func_800D1E9C | the sample's play loop (its main), adapted: decode / display until the end frame or Start; restore the callbacks | H |
| 0x800D2394 | func_800D2394 | strSetDefDecEnv: buffers on first use (D_800D9480), the two rectangles, slice width 16 / 24, mode | H |
| 0x800D2454 | func_800D2454 | strInit: DecDCTReset(0), DecDCToutCallback, StSetRing, StSetStream, strKickCD; returns strKickCD's result (no return statement in the C) | H |
| 0x800D24D0 | func_800D24D0 | strCallback: MDEC-out DMA callback, LoadImage the finished slice, start the next, flag a finished frame | H |
| 0x800D2704 | func_800D2704 | strNextVlc: get the next frame (32 tries), DecDCTvlc it into the other VLC buffer, StFreeRing | H |
| 0x800D27A0 | func_800D27A0 | strNext: StGetNext (0x8000 tries), end / near-end flags, size change (clear, StrWidth / StrHeight), rect sizes | H |
| 0x800D298C | func_800D298C | strSync: wait for isdone (timeout 0x8000 forces the swap), clear it | H |
| 0x800D2A24 | func_800D2A24 | strKickCD: CdlSetloc (1 if the lid is open), CdRead2(0x1C0), retry | H |

#### LIBPRESS DCT functions (compiled C, file 3)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D2AA0 | func_800D2AA0 | DecDCTReset(mode): ResetCallback for mode 0, then the MDEC reset | H |
| 0x800D2AD8 | func_800D2AD8 | DecDCTGetEnv: copy iq_y, iq_c (16 words each) and the DCT table (32 words) out; no caller | M |
| 0x800D2B64 | func_800D2B64 | DecDCTPutEnv: copy iq_y, iq_c in and send both tables to the MDEC; no caller | M |
| 0x800D2C00 | func_800D2C00 | DecDCTBufSize: the bitstream's first halfword; no caller | M |
| 0x800D2C0C | func_800D2C0C | DecDCTin(buf, mode): set the 16 / 24-bit and STP bits in the header, send it to the MDEC | H |
| 0x800D2C88 | func_800D2C88 | DecDCTout(buf, size): start the MDEC-out DMA (arguments passed through) | H |
| 0x800D2CA8 | func_800D2CA8 | DecDCTinSync(mode): status bit 29 for mode != 0, else wait; no caller | H |
| 0x800D2CE4 | func_800D2CE4 | DecDCToutSync(mode): status bit 24 for mode != 0, else wait; no caller | H |
| 0x800D2D20 | func_800D2D20 | DecDCTinCallback: DMACallback(0, cb); no caller | H |
| 0x800D2D44 | func_800D2D44 | DecDCToutCallback: DMACallback(1, cb) | H |

#### LIBPRESS internals (compiled C, file 3)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D2D68 | func_800D2D68 | MDEC reset: mode 0 also sends the default tables; mode 1 only resets; else printf(D_800CEE1C, mode) | H |
| 0x800D2E64 | func_800D2E64 | MDEC in: wait in-sync, DMA0 from p + 1, the command word *p to MDEC0, size in 32-word blocks | H (registers M) |
| 0x800D2EF8 | func_800D2EF8 | MDEC out: wait out-sync, DMA1 to p, size in 32-word blocks | H (registers M) |
| 0x800D2F88 | func_800D2F88 | MDEC in-sync: wait while status bit 29; timeout 0x100000 reports D_800CEE38, returns -1 | H |
| 0x800D3020 | func_800D3020 | MDEC out-sync: wait while DMA1 busy (bit 24); timeout reports D_800CEE48, returns -1 | H |
| 0x800D30B8 | func_800D30B8 | read the MDEC status register | H |
| 0x800D30D0 | func_800D30D0 | timeout report: printf the name, DMA and status bits, then reset the MDEC | H |

#### LIBPRESS VLC.OBJ (asm, PsyQ 4.0)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800D3204 | DecDCTvlcSize | set the VLC decoder's output limit (library) | H |
| 0x800D3234 | DecDCTvlc | decode a frame's VLC bitstream into MDEC run-level codes (library) | H |

**Data.**

| Symbol | Role | Conf. |
|---|---|---|
| 0x800CEDFC-0x800CEE1C (rodata) | the movie file names (docs/overlays.md; 32 bytes, so the two names), text unknown | M |
| D_800CEE1C | MDEC reset's bad-option printf format | H use |
| D_800CEE38, D_800CEE48 | the in-sync / out-sync names for the timeout report | H use |
| D_800CEE58, D_800CEE80, D_800CEEB8 | the timeout report's formats (DMA state, status bits, the header with %s) | H use |
| D_800D3598 | file 1's step table (8 steps used; 0x80 bytes to the next symbol, the rest unknown) | H |
| D_800D3618 | the "option off" debug-text string (M: blank) | H use |
| D_800D3620, D_800D3624, D_800D3630 | per option (3): text y, label string, debug-text record number | H |
| D_800D363C | file 2's step table | H |
| D_800D4E6C, D_800D52BC, D_800D93FC | image lists for func_800183E0 (D_800D52BC queued as the title ends) | H use, content unknown |
| D_800D942C | the two movie records (0x20 bytes each) | H |
| D_800D946C | the stream ring buffer (StSetRing, 32 sectors) | H |
| D_800D9470 / 74, D_800D9478 / 7C | VLC buffers 0 / 1, image (slice) buffers 0 / 1 | H |
| D_800D9480 | 1 until strSetDefDecEnv has set the buffers | H |
| D_800D9484, D_800D9488 | the sample's StrWidth / StrHeight (last frame size) | H |
| D_800DA48C | the title's image list, its CLUT entries faded from white | H |
| D_800DB52C (+D_800DB530, D_800DB570), D_800DB5B0 (+D_800DB5B4) | MDEC quant table packet (header, iq_y, iq_c) and DCT table packet (header, matrix) | H |
| D_800DB63C, 640, 644 | DMA0 MADR, BCR, CHCR pointers | M |
| D_800DB648, 64C, 650 | DMA1 MADR, BCR, CHCR pointers | M |
| D_800DB66C, D_800DB670, D_800DB674 | MDEC0 (command / data), MDEC1 (control / status), DPCR pointers | M |
| D_800EC678 | file 1 cursor (0 New Game, 1 Continue) | H |
| D_800EC67C | idle counter (451 -> result 4) | H |
| D_800EC680 | the result for Work.timer | H |
| D_800EC684 | the movie file exists | H |
| D_800EC688 | set 0xFF at init, never read in the C | H |
| D_800EC68C | sprite brightness (0x80, fades out by 4) | H |
| D_800EC690 | menu state: 0 none, 1 PRESS START, 2 menu, 3 picture swap | H |
| D_800EC694, D_800EC698 | PRESS START visible, blink counter | H |
| D_800EC69C | CLUT fade divider (every second frame) | H |
| D_800EC6A0, D_800EC6A4 | CLUT fade-in finished; a second gate, always 1 | H |
| D_800EC6A8-D_800EC858 | ten double-buffered sprite packets of the title draw (0x30 each) | H |
| D_800EC888 | file 2: pad pressed this frame | H |
| D_800EC88C, D_800EC890, D_800EC894, D_800EC898 | file 2: idle countdown, brightness, cursor, blink counter | H |
| D_800EC8A0 | file 2: set 1, never read | H |
| D_800EC8B0 | file 2: the movie file exists | H |
| D_800EC8B4-D_800EC98C | file 2's single-buffered sprite packets | H |
| D_800EC9A4 | the sample's `dec` (DECENV, 0x38 bytes) plus the 24-bit mode word | H |
| D_800EC9E0, D_800EC9E4 | skip requested, the 16-frame skip countdown | H |
| D_800EC9E8 | CdControl result bytes | H |
| D_800EC9F0 | first slice of a frame (width-remainder fix) | H |
| D_800EC9F4, D_800EC9F8 | the sample's isEndOfFlame (end frame reached), and the last-15-frames no-skip flag | H |
| D_800EC9FC | the movie's CdlFILE | H |

**Notes and open questions.**
* The step order of both tables is inferred, not read (the data is not in the repository); D_800D3598 spans 0x80
  bytes up to D_800D3618, more than the 8 steps file 1 uses.
* Is file 2 dead? Nothing in the C reaches func_800D0100; only D_800D3598's contents could. It returns timer 2 for its
  first option, which ModeTitleRun ignores, which also points to an earlier (trial / development) menu.
* func_800CFE00 uploads the swap picture's CLUT to row 480 (CLUT 0x7800) while the background sprites use 0x78C0 (row
  483): either the swap was meant with another CLUT, or the CLUT row 483 comes from D_800DA48C. Unresolved without
  the data. (file 2's version is consistent: row 480 and the CLUT its draw uses.)
* Who fills the TIM buffers at 0x80120000 (slot 0) and 0x80114000 is not in the C (only slot 1 by the skipped step 1).
* The title's own textures are not uploaded by this code except the CLUTs: presumably by the PAC load of entry 3
  (texture blocks), M.
* func_800CFC1C returns nothing on the frames it skips; the original returns v0 (1, the comparison), so step 3 keeps
  waiting (PORT NOTE in the C).
* func_800D0740 / func_800D09A0 with cursor 4 (idle) would read D_800D3630[4], past the three options; harmless
  while the idle countdown is -1.
* The movie names and field values of D_800D942C, and the screen-mode-1 values, are unknown.
* D_800A5F1C (EXE) behaves as PsyQ's StCdIntrFlag (tested and cleared around StCdInterrupt in strCallback), M; an EXE
  name, not proposed below.

### ovl3a: the cut legend prologue (MAIN.CD entry 7, slot 0 0x800CEDF8, ID 4 B + rodata 0x30 = 48 B (two picture-pack paths) / code 0xC88 = 3208 B / data 0x18C4 = 6340 B, total 9600 B (a raw payload, no PAC header), 19 functions)

**What it does.** Two step machines for an opening sequence that the retail game never runs (H: no mode loads MAIN.CD
entry 7 and nothing calls 0x800CEE2C or 0x800CF02C; offset 4, where the EXE's runners call, is the first path string
D_800CEDFC, not code). The first shows a picture held in the overlay itself; the second loads two "C:\TIMPACK\OPDEMO"
picture packs (docs/overlays.md) through LoadPatPicture, which is empty in the retail EXE, and scrolls them. The
legend reading is docs/overlays.md's (docs/cut_prologue.md is not in this snapshot); the code itself only shows
pictures, fades and scrolls.

* Machine 1, entry func_800CEE2C (table D_800CFADC, 4 steps on Work.step): every frame it writes Work.step + '0'
  into byte 11 of the string D_800CFAB4 and sets text element 1 to it (0x60, 0x64), and element 2 D_800CFAC4 or 3
  D_800CFAD4 (0x60, 0x70) by D_800D1364 (always 0 here, so D_800CFAD4); these are never seen, because step 0 sets
  Work.unkA3E1 = 1, which stops DrawDebugText (H). Step 0 func_800CEEFC: unkA3E1 = 1, clear sprites and text,
  D_800D1364 = 0, queue the VRAM upload D_800D130C (func_800183E0), start a fade-in, Work.timer = 0. Step 1
  func_800CEF60: wait for the fade-in. Step 2 func_800CEF94: hold 128 frames (Work.timer > 0x80) or until Start
  (TestPadsAny pressed 0x800), then fade out. Step 3 func_800CEFF8: when faded out, Work.done = 1 (every frame). (H)
  Nothing draws a primitive here, so the picture must be uploaded into the displayed frame buffer (M; ovl38, the
  licence screen, also uses func_800183E0).
* Machine 2, entry func_800CF02C (table D_800D133C, 2 entries on Work.step): step 0 func_800CF068 loads the first
  picture pack D_800CEDFC, zeroes the scroll and sub-step, starts a fade-in, NextStep; step 1 func_800CF0B8 runs
  sub-step D_800D1374 of D_800D1344 (8 entries, M from the gap to D_800D1364): (H)
  0 func_800CF0F4: draw picture 1 at y = 0 while fading in;
  1 func_800CF148: scroll picture 1 up one line a frame (D_800D1368 0 -> -272) unless Start was pressed; then fade out;
  2 func_800CF1CC: draw it while fading out;
  3 func_800CF220: load the second pack D_800CEE14, start a fade-in;
  4 func_800CF268: draw picture 2 at x = -0x400 (off screen; only its fixed part shows) while fading in, then
    D_800D136C = -0x340;
  5 func_800CF2BC: unless Start, scroll picture 2 right one pixel a frame (-0x340 -> 0x140, 1152 frames), then fade out;
  6 func_800CF33C: draw it while fading out;
  7 func_800CF390: black screen, polling Start.
  Start on either pad (func_800CF3B0, polled in sub-steps 1, 5 and 7) sets Work.done = 1: the skip / end signal for
  a mode handler that does not exist in the retail EXE.
* Picture 1 (func_800CF408): four 8-bit SPRTs of 160 x 256 from texture pages 6, 7 (y 0) and 0x16, 0x17 (y 256),
  CLUT 0x7980: a 320 x 512 picture placed relative to the screen centre; scrolling 272 lines moves from its top 240
  lines to its bottom 240 (512 - 240 = 272). Picture 2 (func_800CF6D0): four SPRTs of 256, 256, 256, 64 x 256 from
  pages 9, 0xB, 0xD, 0xF, CLUT 0x7940 (an 832 x 256 strip at x + 0, 256, 512, 768), then two fixed 160 x 256 SPRTs at
  (-160, -120) and (0, -120) from pages 6 / 7 with CLUT 0x7880; added last to the same OT entry, so drawn first,
  behind the strip (M). Both build from g_PrimNext into D_800AA60C[Work.frame]. (H for the numbers)

**How it is entered.** Not at all in the retail game. Two entries: func_800CEE2C (machine 1) and func_800CF02C
(machine 2), both expecting a runner that calls them every frame and watches Work.done; machine 1 ends with
Work.done = 1 and machine 2 starts at Work.step 0, so a development mode table probably ran them one after the other
(L: nothing in the overlay links them). Tables: D_800CFADC (4 steps), D_800D133C (2 steps), D_800D1344 (8 sub-steps).

Machine 1 (the picture held in the overlay)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEE2C | func_800CEE2C | entry 1: step digit and status text (hidden), D_800CFADC[Work.step]() for step < 4 | H |
| 0x800CEEFC | func_800CEEFC | step 0: drawing off, clear, queue the upload D_800D130C, fade-in, timer 0 | H |
| 0x800CEF60 | func_800CEF60 | step 1: wait for the fade-in | H |
| 0x800CEF94 | func_800CEF94 | step 2: hold 128 frames or until Start, then fade out | H |
| 0x800CEFF8 | func_800CEFF8 | step 3: after the fade-out, Work.done = 1 | H |

Machine 2 (the two picture packs)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF02C | func_800CF02C | entry 2: D_800D133C[Work.step]() (no bound check) | H |
| 0x800CF068 | func_800CF068 | step 0: load pack 1 (D_800CEDFC), zero scroll and sub-step, fade-in, NextStep | H |
| 0x800CF0B8 | func_800CF0B8 | step 1: D_800D1344[D_800D1374]() | H |
| 0x800CF0F4 | func_800CF0F4 | sub 0: picture 1 at y 0 during the fade-in | H |
| 0x800CF148 | func_800CF148 | sub 1: scroll picture 1 up to -272 (skippable), then fade out | H |
| 0x800CF1CC | func_800CF1CC | sub 2: picture 1 during the fade-out | H |
| 0x800CF220 | func_800CF220 | sub 3: load pack 2 (D_800CEE14), fade-in | H |
| 0x800CF268 | func_800CF268 | sub 4: picture 2 parked at x -0x400 during the fade-in; scroll start -0x340 | H |
| 0x800CF2BC | func_800CF2BC | sub 5: scroll picture 2 right to 0x140 (skippable), then fade out | H |
| 0x800CF33C | func_800CF33C | sub 6: picture 2 during the fade-out | H |
| 0x800CF390 | func_800CF390 | sub 7: wait for Start (via func_800CF3B0) | H |
| 0x800CF3B0 | func_800CF3B0 | Start pressed on pad 0 or 1: Work.done = 1, return 1 | H |

Draws

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CF408 | func_800CF408 | draw picture 1 (2 x 2 SPRTs, 320 x 512) at (a, b) | H |
| 0x800CF6D0 | func_800CF6D0 | draw picture 2 (an 832 x 256 strip at (a, b)) and its fixed 320 x 256 back | H |

**Data.**

* D_800CEDFC, D_800CEE14 (rodata, 24 bytes each): the two picture-pack paths for LoadPatPicture.
* D_800CFAB4 (16 bytes, a digit at [11]), D_800CFAC4 (16), D_800CFAD4 (8): the hidden status texts.
* D_800CFADC (4 pointers): machine 1's steps; D_800D133C (2): machine 2's steps; D_800D1344 (8): its sub-steps.
* 0x800CFAEC-0x800D130C (6176 bytes, no symbol in the C) and D_800D130C (48 bytes): the upload descriptor queued by
  step 0 and, probably, the picture it points to (M: FlushImageQueue's entries hold a kind, a rectangle and a pixel
  pointer; the block is the only unreferenced data).
* D_800D1364 (always 0 here), D_800D1368 picture 1's y, D_800D136C picture 2's x, D_800D1370 (cleared, never read),
  D_800D1374 the sub-step. EXE state: Work.step (D_800B99E4), done (D_800B99E6), timer (D_800B99E8), unkA3E1
  (D_800B9A11).

**Notes and open questions.**

* Restoring it needs a runner (a mode pair calling the two entries) and LoadPatPicture's packs: the pictures are not
  in this overlay (the empty loader was a PC-side tool in development, per its comment).
* Open: which picture D_800D130C uploads, what the hidden texts say, and what D_800D1364 would select.
* func_800CF408 / func_800CF6D0 are matched now (docs/overlays.md still lists them as parked).

### ovl3b: the trial version's end screen (MAIN.CD entry 8, slot 0 0x800CEDF8, ID 4 B / code 0x300 = 768 B / data 0x44 = 68 B, total 840 B, 6 functions)

**What it does.** The last screen of the trial (demo) version: a full-screen picture that fades in, stays 300 frames
(about 10 s at 30 frames a second, M) or until a button, fades out, and then SetMode(12), ModeIdle: the game halts
there for good (H). Every frame it draws two static sprite packets: D_800CF10C, 256 x 240 at (-160, -110) from
texture page 10 (8-bit), and D_800CF124, 64 x 240 at (96, -110) from page 12, both v = 10 and CLUT 0x7800: one 320 x
240 picture (H for the numbers). The overlay uploads nothing, so the picture is already in VRAM: probably another
block of the same PAC package placed by the loader (L: entry 8 is a PAC chain and the code block is only 840 bytes;
not traced).

Steps (D_800CF0FC, 4 entries, M from the 0x10 bytes before D_800CF10C), on Work.step:
0 func_800CEE44: clear sprites and text, Work.unkA3E1 = 0 (drawing on), counter D_800CF13C = 0, start a fade-in,
NextStep; 1 func_800CEE8C: wait for the fade-in; 2 func_800CEEC0: when ++counter > 300 or Start / Triangle / Circle /
Cross / Square (0x8F0) is pressed on pad 0, start a fade-out, NextStep; 3 func_800CEF1C: when faded out, SetMode(12).
(H)

**How it is entered.** The stage engine's field state 17 (func_801282EC) calls ModeGoTrialEnd (SetMode(13)) at the
end of the trial's content (docs/mode_dispatcher.md). ModeTrialEndLoad (mode 13) LoadFileStep(g_FileLocTrialEnd =
entry 8, slot 0) then NextMode; ModeTrialEndRun (mode 14) calls **func_800CEDFC** every frame and does not look at
Work.done: the overlay leaves the mode itself. func_800CEDFC draws and calls D_800CF0FC[Work.step] with no bound
check. Nothing else calls into it.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | entry (ModeTrialEndRun): draw the picture, D_800CF0FC[Work.step]() | H |
| 0x800CEE44 | func_800CEE44 | step 0: clear, drawing on, counter 0, fade-in, NextStep | H |
| 0x800CEE8C | func_800CEE8C | step 1: wait for the fade-in | H |
| 0x800CEEC0 | func_800CEEC0 | step 2: 300 frames or a button, then fade out | H |
| 0x800CEF1C | func_800CEF1C | step 3: after the fade-out SetMode(12) (ModeIdle, the halt) | H |
| 0x800CEF50 | func_800CEF50 | fill the two SPRT packets (with their DR_TPAGE words) and add them to D_800AA60C[Work.frame] | H |

**Data.** D_800CF0FC (4 step pointers), D_800CF10C and D_800CF124 (two 24-byte tpage + SPRT packets, refilled every
frame; static, not double-buffered), D_800CF13C (the frame counter). EXE state: Work.step, Work.frame, unkA3E1
(D_800B9A11), the mode (SetMode).

**Notes and open questions.**

* The two packets are single-buffered statics added to the OT every frame; it works because the screen is static (H
  for the code, M for why).
* func_800CEF50 is matched now (docs/overlays.md still lists it as parked).
* Open: where the picture comes from (the PAC package's other blocks?) and what it shows.

## 4. Naming proposals

Proposals only: nothing was renamed. Only generic names (func_800XXXXX, D_800XXXXX), H or strong M evidence. The
mode overlays share slot 0, so a name belongs to the overlay of its table.

### 4.1 ovl36

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | FieldMain | the mode-11 / 16 entry; `D_800D3430[Work.state]()` |
| 0x800CEE40 | func_800CEE40 | FieldStateInit | state 0, steps D_800D3480 |
| 0x800CEE84 | func_800CEE84 | FieldInitSetup | state 0 step 0 resets |
| 0x800CEF04 | func_800CEF04 | FieldInitLoadSlot3 | func_800D0488(1) then NextGameState |
| 0x800CEF34 | func_800CEF34 | FieldStateSoundReset | state 1: func_8001B324 |
| 0x800CF370 | func_800CF370 | FieldStateNowLoading | DrawNowLoading, -> 15 |
| 0x800CEFD0 | func_800CEFD0 | FieldLoadLoopWipeA | state 5 loop with func_8001B86C |
| 0x800CF104 | func_800CF104 | FieldLoadLoopWipeB | state 6 loop with func_8001B86C |
| 0x800CF238 | func_800CF238 | FieldLoadLoopHidden | state 18: undrawn stage start -> 8 |
| 0x800CF3B8 | func_800CF3B8 | FieldLoadLoopPlain | state 16: no transition -> 7 |
| 0x800CF47C | func_800CF47C | FieldLoadExtraFile | D_80114E78 / D_800AF218 load |
| 0x800CF4D4 | func_800CF4D4 | FieldLoadSubSteps | D_800D3490[stateSubStep] |
| 0x800CF510 | func_800CF510 | FieldLoadReset | substep 0 |
| 0x800CF584 | func_800CF584 | FieldLoadReloadAbility | func_800D02D0(D_80078EC1) |
| 0x800CF5D4 | func_800CF5D4 | FieldLoadReloadSlot3 | func_800D0488(D_80078EC0 & 0x7F) |
| 0x800CF628 | func_800CF628 | FieldLoadPickStage | sub-room / stage decision |
| 0x800CF714 | func_800CF714 | FieldLoadBaseStage | base stage of a sub-room |
| 0x800CF764 | func_800CF764 | FieldLoadSubRoom | file to func_80128218()'s address |
| 0x800CF7A4 | func_800CF7A4 | FieldLoadStage | ForgetStageImage + func_800CFE60 |
| 0x800CF804 | func_800CF804 | RequestFullReload | D_80127084 = 1, read by CEE84 / CF510-CF5D4 |
| 0x800CF818 | func_800CF818 | RequestExtraLoad | D_80114E78 = 1 |
| 0x800CF8B4 | func_800CF8B4 | IsFieldPlaying | state == 9 |
| 0x800CF8CC | func_800CF8CC | IsFieldLeavingMap | state == 10 |
| 0x800CF8E4 | func_800CF8E4 | PrefetchNextMap | func_800CFDE8(destination) |
| 0x800CF94C | func_800CF94C | FieldLoadStageEngine | LoadFileStep(g_FileLocStageEngine) |
| 0x800CF990 | func_800CF990 | FieldStatePicture | state 19 |
| 0x800CFAD0 | func_800CFAD0 | DrawFieldPicture | 256x144 SPRT |
| 0x800CFBBC | func_800CFBBC | ClearPictureRequest | D_80114E70 = 0 |
| 0x800CFBCC | func_800CFBCC | RequestPicture | D_80114E70 = 1, index |
| 0x800CFBE8 | func_800CFBE8 | GetPictureRequest | returns D_80114E70 |
| 0x800CFBF8 | func_800CFBF8 | GetSubRoomBaseMap | kind -> 0x1010 / 0x1052 / 0x1077 / 0x1094 |
| 0x800CFC5C | func_800CFC5C | GetSubRoomKind | one `if` per id, 0-4 |
| 0x800CFD68 | func_800CFD68 | MapNeedsStageLoad | StageImageNeedsLoad(table entry) |
| 0x800CFDA4 | func_800CFDA4 | MarkMapStageLoaded | SetStageImage(table entry) |
| 0x800CFDE8 | func_800CFDE8 | PrefetchMapHeader | func_8001ABBC kind 2 |
| 0x800CFE60 | func_800CFE60 | LoadMapStage | LoadFileStep to 0x80128158 with overrides |
| 0x800D00E4 | func_800D00E4 | SetMapSoundRecord | func_8002F5C8(one of 15 records) |
| 0x800D0214 | func_800D0214 | LoadMapFileAt | LoadFileStep(entry, a, 0, sound table) |
| 0x800D02C0 | func_800D02C0 | SetMusicPicker | D_800D375C = f |
| 0x800D02D0 | func_800D02D0 | LoadAbilityPackage | docs/abil_packages.md section 1 |
| 0x800D0488 | func_800D0488 | LoadSlot3Package | same |
| 0x800D0588 | func_800D0588 | LoadMapMusic | picker track, func_8001ABBC kind 1 |
| 0x800D05E8 | func_800D05E8 | PickMapMusic | D_800D375C(story counter) |
| 0x800D0630 | func_800D0630 | ResetFieldSound | stage init, D_8011529C = -1 |
| 0x800D065C | func_800D065C | ClearSoundStates | six words zeroed |
| 0x800D06CC | func_800D06CC | ParkSoundStates | both machines = 3 |
| 0x800D06E8 | func_800D06E8 | UpdateFieldSound | the two per-frame machines |
| 0x800D0CA0 | func_800D0CA0 | MusicCommandPark | command 1 + park |
| 0x800D0CE0 | func_800D0CE0 | StartMapMusic | func_8001AAA0(picker track) |
| 0x800D0D7C | func_800D0D7C | ClockSubtract | minutes wrap 60, hours 24 |
| 0x800D0E30 | func_800D0E30 | ClockDiff | same |
| 0x800D0EC4 | func_800D0EC4 | FindFreeItemSlot | first zero of 0x2F-0x3A |
| 0x800D0F0C | func_800D0F0C | SetItemSlot | item + day stamp |
| 0x800D0F4C | func_800D0F4C | TakeItem | find + clear |
| 0x800D0F8C | func_800D0F8C | FindItem | slot of item a |
| 0x800D0FE0 | func_800D0FE0 | ClearItemSlot | slot = 0 |
| 0x800D1000 | func_800D1000 | GetItemSlotDay | halfword 2i - 0x4A |
| 0x800D1054 | func_800D1054 | GetItemDefWord0 | D_8010EDE8[a].unk0 |
| 0x800D1078 | func_800D1078 | GetItemDefField4 | D_8010EDE8[a].unk4 |
| 0x800D10C8 | func_800D10C8 | GetItemDefField6 | D_8010EDE8[a].unk6 |
| 0x800D10EC | func_800D10EC | AgeInventoryItems | called by engine func_8014B084 at day change |
| 0x800D11F0 | func_800D11F0 | UseItemSlot | effect, slot emptied |
| 0x800D128C | func_800D128C | ApplyItemEffect | per-item stat calls and sounds |
| 0x800D1658 | func_800D1658 | DiscardItemSlot | menu action 1; removes without effect (M) |
| 0x800D1714 | func_800D1714 | GetNextMapId | returns D_80078E50 |
| 0x800D1724 | func_800D1724 | RequestMapChange | D_800AE6B0 = a |
| 0x800D1734 | func_800D1734 | QueueMapChange | D_800AE6A8 = a, promoted by D1754 |
| 0x800D1754 | func_800D1754 | PollMapChange | state 9 via engine func_80128678 |
| 0x800D17B8 | func_800D17B8 | StartMapChange | copy record, NextGameState |
| 0x800D185C | func_800D185C | SetNextMap | symbol_addrs.txt comment, docs/stage_loader.md |
| 0x800D18DC | func_800D18DC | RunMapEnterStep | D_801141BC[step] |
| 0x800D1938 | func_800D1938 | MapEnterBegin | step 0 shape |
| 0x800D1984 | func_800D1984 | MapEnterRun | runs task fn |
| 0x800D19DC | func_800D19DC | MapEnterDone | mapLive = 1 |
| 0x800D19F0 | func_800D19F0 | RunMapLeaveStep | D_801141C8[step] |
| 0x800D1B10 | func_800D1B10 | MapLeaveBegin | mapLive = 0, sounds off |
| 0x800D1B80 | func_800D1B80 | MapLeaveRun | runs task fn |
| 0x800D1BD8 | func_800D1BD8 | MapLeaveDone | calls D1BF8 |
| 0x800D1BF8 | func_800D1BF8 | FinishMapChange | MapStart + next state |
| 0x800D1D24 | func_800D1D24 | MapStart | symbol_addrs.txt comment |
| 0x800D1D94 | func_800D1D94 | GetNextMapGroup | D_80078E50 & 0xF000 |
| 0x800D1DB0 | func_800D1DB0 | GetMapChangeKind | 1 / 2 -> states 5 / 16 |
| 0x800D1E20 | func_800D1E20 | MapRecordNop | record +0x1C default (live dump) |
| 0x800D1E28 | func_800D1E28 | StartMapChangeFade | kind -> fade start |
| 0x800D1EBC | func_800D1EBC | StepMapChangeFade | kind -> fade step |
| 0x800D1F58 | func_800D1F58 | SaveEntryVitals | HP / BP / D_80078E8C saved |
| 0x800D1F90 | func_800D1F90 | RestoreEntryVitals | restored on continue |
| 0x800D1FC8 | func_800D1FC8 | PullTowardCamera | D_801151D4 "the camera used this frame" |
| 0x800D20C0 | func_800D20C0 | PullTowardCameraDir | same, direction out |
| 0x800D21C4 | func_800D21C4 | SpawnSpriteType3 | func_801465C0 + func_8001CC3C |
| 0x800D222C | func_800D222C | SpawnSpriteType2 | + func_8001CB6C |
| 0x800D2294 | func_800D2294 | SpawnSpriteType6 | + func_8001CD9C |
| 0x800D22E4 | func_800D22E4 | MoveByVelocity | pos += vel |
| 0x800D2318 | func_800D2318 | AnglesFromPackedDir | ratan2 / SquareRoot0 on +0x2C |
| 0x800D23D0 | func_800D23D0 | AnglesFromVector | same on an SVECTOR |
| 0x800D2468 | func_800D2468 | ClearStageMenu | func_80016714(D_80115110, 0xC4) |
| 0x800D24A0 | func_800D24A0 | OpenStageMenu | pauseMenu = kind + 1 |
| 0x800D25FC | func_800D25FC | StageMenuUpdate | main() while pauseMenu |
| 0x800D2624 | func_800D2624 | CloseStageMenu | pauseMenu = 0 |
| 0x800D2650 | func_800D2650 | DrawTextLine | 8x8 glyph SPRTs |
| 0x800D27DC | func_800D27DC | DrawQuadRow | FT4 list |
| 0x800D29F8 | func_800D29F8 | DrawBarList | G4 bars |
| 0x800D2CA8 | func_800D2CA8 | ToBcd | n % 10 per nibble |
| 0x800D2D10 | func_800D2D10 | BcdToGlyphs | D_800D38D8 lookup |
| 0x800D3238 | func_800D3238 | MessageEvent | D_800D3A98 steps, window at +0x198 |
| 0x800D3274 | func_800D3274 | MessageEventOpen | func_8013767C |
| 0x800D32D4 | func_800D32D4 | MessageEventWait | func_801399F0 / func_80139914 |
| 0x800D3348 | func_800D3348 | NullEvent | D_800D3AA4: step++, end |
| 0x800D34AC | D_800D34AC | MapIdTable | symbol_addrs.txt comment |
| 0x800D3430 | D_800D3430 | g_FieldStateTable | 20 state handlers |
| 0x800D3490 | D_800D3490 | g_FieldLoadSubSteps | 7 substeps |
| 0x800D3764 | D_800D3764 | g_AbilityPackageTable | func_800D02D0 |
| 0x800D384C | D_800D384C | g_Slot3PackageTable | func_800D0488 |
| 0x800D375C | D_800D375C | g_MusicPicker | func_800D02C0 / D05E8 |
| 0x800D38D8 | D_800D38D8 | g_DigitGlyphs | func_800D2D10 |
| 0x80127084 | D_80127084 | g_FullReload | func_800CF804 and readers |
| 0x8011DB24 | D_8011DB24 | g_StageMenuUpdate | func_800D25FC |
| 0x80115110 | D_80115110 | g_StageMenu | engine's StageMode block |

### 4.2 ovl37

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEE74 | func_800CEE74 | DebugMenuMain | ModeDebugRun's call; step table dispatch |
| 0x800CEF00 | func_800CEF00 | DebugMenuInit | step 0: labels, resets, NextStep |
| 0x800CF28C | func_800CF28C | DebugMenuOptions | the 13-row option page |
| 0x800CFB88 | func_800CFB88 | DebugDrawWeekday | draws D_800D32F8[D_800D4C90] at row 4 ("YOUBI") |
| 0x800CFBF0 | func_800CFBF0 | DebugDrawPresetName | draws D_800D3314[D_800D4C94] |
| 0x800CFC58 | func_800CFC58 | DebugMenuWaitFadeOut | func_800167F0(4), then NextStep |
| 0x800CFCBC | func_800CFCBC | DebugApplyPresets | calls the six presets by level |
| 0x800CFDB4 | func_800CFDB4 | DebugSceneSelect | area / scene selector, sets Work.mapId |
| 0x800D03F8 | func_800D03F8 | DebugMenuFinish | Work.done = 1 |
| 0x800D0450 | func_800D0450 | DebugRowDispatch | D_800D4C68[cursor]() |
| 0x800D04F4 | func_800D04F4 | DebugDrawStatus | the status line |
| 0x800D0828 | func_800D0828 | DebugSceneSelectable | gates the presets and the "(DISELECT)" message; returns 1 |
| 0x800D0858 | func_800D0858 | DebugReadPad | pressed / held with auto-repeat |
| 0x800D0964 | func_800D0964 | DebugPresetBase | the base stats reset |
| 0x800D0BDC | func_800D0BDC | DebugPreset1 | level >= 2; counter 0x2E = 1 |
| 0x800D1254 | func_800D1254 | DebugPreset2 | level >= 3; 0x2E = 2 |
| 0x800D1B00 | func_800D1B00 | DebugPreset3 | level >= 4; 0x2E = 3 |
| 0x800D235C | func_800D235C | DebugPreset4 | level >= 5; 0x2E = 4 |
| 0x800D2BC4 | func_800D2BC4 | DebugPreset5 | level >= 6; 0x2E = 5 |
| 0x800D4C54 | D_800D4C54 | g_DebugStepTable | indexed by Work.step in the entry |
| 0x800D4C68 | D_800D4C68 | g_DebugRowTable | indexed by the cursor in func_800D0450 |
| 0x800D4B64 | D_800D4B64 | g_DebugAreaTable | `{ name; items; count }` in the selector |
| 0x800D4A5C | D_800D4A5C | g_DebugEventFlags | `{ name; flag }`, toggled on row 8 |
| 0x800D32F8 | D_800D32F8 | g_DebugWeekdayNames | 7 entries, row 4 |
| 0x800D3314 | D_800D3314 | g_DebugPresetNames | 8 entries, row 6 |
| 0x800D3334 | D_800D3334 | g_DebugRowY | cursor y per row |
| 0x800D3344 | D_800D3344 | g_DebugProgress | edited on row 7, func_80029514 |
| 0x800D3348 | D_800D3348 | g_DebugEventIndex | index into D_800D4A5C |
| 0x800D334A | D_800D334A | g_DebugClock | minutes, written to stats +0x1A |
| 0x800D4C80 | D_800D4C80 | g_DebugCursor | row 0..12 |
| 0x800D4C84 | D_800D4C84 | g_DebugSelectRow | 0 area / 1 scene |
| 0x800D4C88 | D_800D4C88 | g_DebugArea | 0..11 |
| 0x800D4C8C | D_800D4C8C | g_DebugScene | 0..count-1 |
| 0x800D4C90 | D_800D4C90 | g_DebugWeekday | 0..6 |
| 0x800D4C94 | D_800D4C94 | g_DebugPresetLevel | 0..7 |
| 0x800D4C98 | D_800D4C98 | g_DebugPadHeld | GetPadHeldDir(0) |
| 0x800D4C9C | D_800D4C9C | g_DebugPadPressed | GetPadPressedDir(0) plus repeats |
| 0x800D4CA0 | D_800D4CA0 | g_DebugPadLastHeld | key-repeat compare |
| 0x800D4CA4 | D_800D4CA4 | g_DebugPadRepeat | key-repeat countdown |

### 4.3 ovl38

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | LicenceMain | the entry ModeLicenceRun calls; dispatches D_800CF450 (H) |
| 0x800CEE40 | func_800CEE40 | LicenceInit | step 0 setup, the once-per-boot skip (H) |
| 0x800CEF04 | func_800CEF04 | LicenceFadeIn | brightness +16 to 0x80 (H) |
| 0x800CEF54 | func_800CEF54 | LicenceHold | 0x105-frame wait (H) |
| 0x800CEFA8 | func_800CEFA8 | LicenceFadeOut | brightness -4 to 0 (H) |
| 0x800CEFF4 | func_800CEFF4 | BootLogoFadeIn | screen fade in over the second picture (H; "logo" M) |
| 0x800CF038 | func_800CF038 | BootLogoWait | waits for the read and a timeout or button (H) |
| 0x800CF0C4 | func_800CF0C4 | BootLogoFadeOut | fade out, then Work.done (H) |
| 0x800CF114 | func_800CF114 | LicenceLoadEntry2 | func_8001ABBC of g_ArchiveFileLoc[2] (H) |
| 0x800CF180 | func_800CF180 | DrawBootLogo | links the prebuilt second-picture packets (H; "logo" M) |
| 0x800CF290 | func_800CF290 | DrawLicence | builds the two licence sprites (H) |
| 0x800CF3F0 | D_800CF3F0 | g_BootLogoSprtA | packet linked by DrawBootLogo (H; "logo" M) |
| 0x800CF420 | D_800CF420 | g_BootLogoSprtB | the same (H; "logo" M) |
| 0x800CF450 | D_800CF450 | g_LicenceSteps | step table indexed by Work.step (H) |
| 0x800D3ABC | D_800D3ABC | g_LicenceImageList | queued with func_800183E0 at step 0 (H) |
| 0x800D3AEC | D_800D3AEC | g_LicenceSprtLeft | built by DrawLicence, x -256 (H) |
| 0x800D3B1C | D_800D3B1C | g_LicenceSprtRight | built by DrawLicence, x 0 (H) |
| 0x800D3C0C | D_800D3C0C | g_LicenceEntry2Loaded | set when the read completes (H) |
| 0x800D3C10 | D_800D3C10 | g_LicenceBrightness | sprite colour 0-0x80 (H) |

---

### 4.4 ovl39

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEEC8 | func_800CEEC8 | TitleMain | the entry ModeTitleRun calls; dispatches D_800D3598 (H) |
| 0x800CEF04 | func_800CEF04 | TitleInit | step 0 setup (H) |
| 0x800CEFBC | func_800CEFBC | TitleLoadTrialPicture | loads entry 5 into picture slot 1; skipped (H load, M trial) |
| 0x800CF010 | func_800CF010 | TitleMovieAndScreen | plays the movie, then func_800CFFEC (H) |
| 0x800CF078 | func_800CF078 | TitleFadeInFromWhite | waits for the CLUT fade (H) |
| 0x800CF104 | func_800CF104 | TitleMenu | PRESS START, cursor, result, idle timeout (H) |
| 0x800CF300 | func_800CF300 | TitleFadeOut | brightness -4, clear VRAM (H) |
| 0x800CF370 | func_800CF370 | TitleRestoreScreen | SetScreenMode2(1), vsyncMode 2 (H) |
| 0x800CF3A4 | func_800CF3A4 | TitleFinish | Work.done = 1, Work.timer = result (H) |
| 0x800CF3E8 | func_800CF3E8 | DrawTitle | the title's sprites by menu state (H) |
| 0x800CFB3C | func_800CFB3C | ClutListSetWhite | 0x7FFF into each CLUT copy, LoadImage (H) |
| 0x800CFC1C | func_800CFC1C | ClutListFadeIn | steps copies toward the true colours (H) |
| 0x800CFE00 | func_800CFE00 | TitleLoadPicture | LoadImage of TIM [cursor] at 0x80120000 (H) |
| 0x800CFEB4 | func_800CFEB4 | ClutListFadeOut | steps copies toward black (H) |
| 0x800CFFEC | func_800CFFEC | TitleInitScreen | 640x480 GsInitGraph2, clears, isbg off (H) |
| 0x800D0100 | func_800D0100 | AltTitleMain | dispatches D_800D363C (H; "Alt": a second title menu, M) |
| 0x800D0174 | func_800D0174 | AltTitleInit | init of sequence (a) (H) |
| 0x800D0204 | func_800D0204 | AltTitleMovie | plays the movie (H) |
| 0x800D0268 | func_800D0268 | AltTitleMenu | three-option menu, 320x240 draw (H) |
| 0x800D0440 | func_800D0440 | AltTitleFadeOutFinish | fade wait, done + result (H) |
| 0x800D05B4 | func_800D05B4 | AltTitleInit2 | init of sequence (b) (H) |
| 0x800D0664 | func_800D0664 | AltTitleQueueImages | queues D_800D93FC (H) |
| 0x800D06BC | func_800D06BC | AltTitleFadeIn | brightness +4 (H) |
| 0x800D0740 | func_800D0740 | AltTitleMenu2 | three-option menu, 640x480, idle countdown (H) |
| 0x800D09A0 | func_800D09A0 | AltTitleBlinkChoice | blinks the option text 0x21 frames (H) |
| 0x800D0A7C | func_800D0A7C | AltTitleFadeOut | brightness -4, screen mode 1 (H) |
| 0x800D0B1C | func_800D0B1C | AltTitleFinish | done + result (H) |
| 0x800D0C50 | func_800D0C50 | AltTitleLoadPicture | LoadImage of TIM [cursor] at 0x80114000, SetStep(3) (H) |
| 0x800D0D6C | func_800D0D6C | DrawAltTitleLow | 320x240 picture + text + cursor (H) |
| 0x800D12D0 | func_800D12D0 | DrawAltTitleHigh | 640x480 picture + text + cursor (H) |
| 0x800D1D14 | func_800D1D14 | AltTitleSetOptionText | func_8001534C with the option's label (H) |
| 0x800D1E18 | func_800D1E18 | TitleMovieExists | CdSearchFile of this visit's movie (H) |
| 0x800D1E58 | func_800D1E58 | TitlePlayMovie | plays D_800D942C[counter & 1], counter++ (H) |
| 0x800D1E9C | func_800D1E9C | StrPlayMovie | the sample's play loop (H) |
| 0x800D2394 | func_800D2394 | strSetDefDecEnv | the sample's name; same body (H) |
| 0x800D2454 | func_800D2454 | strInit | the sample's name (H) |
| 0x800D24D0 | func_800D24D0 | strCallback | the sample's name (H) |
| 0x800D2704 | func_800D2704 | strNextVlc | the sample's name (H) |
| 0x800D27A0 | func_800D27A0 | strNext | the sample's name (H) |
| 0x800D298C | func_800D298C | strSync | the sample's name (H) |
| 0x800D2A24 | func_800D2A24 | strKickCD | the sample's name; Setloc + CdRead2 (H) |
| 0x800D2AA0 | func_800D2AA0 | DecDCTReset | LIBPRESS API; ResetCallback for 0 (H) |
| 0x800D2AD8 | func_800D2AD8 | DecDCTGetEnv | LIBPRESS API; copies the three tables out (M) |
| 0x800D2B64 | func_800D2B64 | DecDCTPutEnv | LIBPRESS API; copies in and sends them (M) |
| 0x800D2C00 | func_800D2C00 | DecDCTBufSize | LIBPRESS API; first halfword (M) |
| 0x800D2C0C | func_800D2C0C | DecDCTin | LIBPRESS API; header bits + MDEC in (H) |
| 0x800D2C88 | func_800D2C88 | DecDCTout | LIBPRESS API; MDEC out (H) |
| 0x800D2CA8 | func_800D2CA8 | DecDCTinSync | LIBPRESS API (H) |
| 0x800D2CE4 | func_800D2CE4 | DecDCToutSync | LIBPRESS API (H) |
| 0x800D2D20 | func_800D2D20 | DecDCTinCallback | DMACallback(0, cb) (H) |
| 0x800D2D44 | func_800D2D44 | DecDCToutCallback | DMACallback(1, cb) (H) |
| 0x800D2D68 | func_800D2D68 | MdecReset | reset modes 0 / 1 (H; LIBPRESS's own name believed MDEC_reset, L) |
| 0x800D2E64 | func_800D2E64 | MdecIn | DMA0 to the MDEC (H) |
| 0x800D2EF8 | func_800D2EF8 | MdecOut | DMA1 from the MDEC (H) |
| 0x800D2F88 | func_800D2F88 | MdecInSync | busy wait with timeout (H) |
| 0x800D3020 | func_800D3020 | MdecOutSync | busy wait with timeout (H) |
| 0x800D30B8 | func_800D30B8 | MdecStatus | returns the status register (H) |
| 0x800D30D0 | func_800D30D0 | MdecTimeout | the timeout report and reset (H) |
| 0x800D3598 | D_800D3598 | g_TitleSteps | file 1's step table (H) |
| 0x800D363C | D_800D363C | g_AltTitleSteps | file 2's step table (H) |
| 0x800D3618 | D_800D3618 | g_AltTitleOptionOff | the "off" string of the blink (H use) |
| 0x800D3620 | D_800D3620 | g_AltTitleOptionY | per-option text y (H) |
| 0x800D3624 | D_800D3624 | g_AltTitleOptionText | per-option label (H) |
| 0x800D3630 | D_800D3630 | g_AltTitleOptionSlot | per-option debug-text record (H) |
| 0x800D942C | D_800D942C | g_TitleMovies | the two movie records (H) |
| 0x800D946C | D_800D946C | g_StrRingBuf | StSetRing's buffer (H) |
| 0x800D9480 | D_800D9480 | g_StrBufsUnset | first-use flag in strSetDefDecEnv (H) |
| 0x800D9484 | D_800D9484 | StrWidth | the sample's name (H) |
| 0x800D9488 | D_800D9488 | StrHeight | the sample's name (H) |
| 0x800DA48C | D_800DA48C | g_TitleImageList | the CLUT list faded from white (H) |
| 0x800EC678 | D_800EC678 | g_TitleCursor | 0 / 1 cursor (H) |
| 0x800EC67C | D_800EC67C | g_TitleIdleFrames | 451 -> demo (H) |
| 0x800EC680 | D_800EC680 | g_TitleResult | copied to Work.timer (H) |
| 0x800EC684 | D_800EC684 | g_TitleHasMovie | func_800D1E18's result (H) |
| 0x800EC68C | D_800EC68C | g_TitleBrightness | sprite colour (H) |
| 0x800EC690 | D_800EC690 | g_TitleMenuState | 0-3 (H) |
| 0x800EC694 | D_800EC694 | g_TitlePressStartOn | blink visibility (H) |
| 0x800EC698 | D_800EC698 | g_TitleBlinkCounter | blink counter (H) |
| 0x800EC69C | D_800EC69C | g_ClutFadeDivider | every second frame (H) |
| 0x800EC6A0 | D_800EC6A0 | g_TitleFadeInDone | set when no CLUT changes (H) |
| 0x800EC894 | D_800EC894 | g_AltTitleCursor | 0-2 (4 idle) (H) |
| 0x800EC890 | D_800EC890 | g_AltTitleBrightness | fade 0-0x80 (H) |
| 0x800EC88C | D_800EC88C | g_AltTitleIdleCountdown | -1 = off, 0 -> result 4 (H) |
| 0x800EC9A4 | D_800EC9A4 | g_StrDecEnv | the sample's `dec` plus mode (H) |
| 0x800EC9E0 | D_800EC9E0 | g_StrSkipRequested | Start pressed during the movie (H) |
| 0x800EC9E4 | D_800EC9E4 | g_StrSkipCountdown | 16 frames to stop (H) |
| 0x800EC9F0 | D_800EC9F0 | g_StrFirstSlice | width-remainder fix (H) |
| 0x800EC9F4 | D_800EC9F4 | isEndOfFlame | the sample's name: end frame reached (H) |
| 0x800EC9F8 | D_800EC9F8 | g_StrNearEnd | last 15 frames, no skip (H) |
| 0x800EC9FC | D_800EC9FC | g_TitleMovieFile | CdlFILE of the movie (H) |

### 4.5 ovl3a

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEE2C | func_800CEE2C | CutLogoMain | machine 1 entry, D_800CFADC dispatch |
| 0x800CEEFC | func_800CEEFC | CutLogoInit | step 0, queues the picture upload |
| 0x800CEF60 | func_800CEF60 | CutLogoFadeIn | func_800167F0(0) then NextStep |
| 0x800CEF94 | func_800CEF94 | CutLogoHold | 128 frames or Start |
| 0x800CEFF8 | func_800CEFF8 | CutLogoFadeOut | func_800167F0(4), Work.done = 1 |
| 0x800CF02C | func_800CF02C | CutPrologueMain | machine 2 entry, D_800D133C dispatch |
| 0x800CF068 | func_800CF068 | CutPrologueInit | loads pack 1, NextStep |
| 0x800CF0B8 | func_800CF0B8 | CutPrologueRun | D_800D1344[D_800D1374] dispatch |
| 0x800CF0F4 | func_800CF0F4 | CutPic1FadeIn | sub-step 0 |
| 0x800CF148 | func_800CF148 | CutPic1Scroll | sub-step 1 |
| 0x800CF1CC | func_800CF1CC | CutPic1FadeOut | sub-step 2 |
| 0x800CF220 | func_800CF220 | CutPic2Load | sub-step 3, LoadPatPicture(D_800CEE14) |
| 0x800CF268 | func_800CF268 | CutPic2FadeIn | sub-step 4 |
| 0x800CF2BC | func_800CF2BC | CutPic2Scroll | sub-step 5 |
| 0x800CF33C | func_800CF33C | CutPic2FadeOut | sub-step 6 |
| 0x800CF390 | func_800CF390 | CutPrologueWaitEnd | sub-step 7 |
| 0x800CF3B0 | func_800CF3B0 | CutCheckSkip | Start on either pad -> Work.done |
| 0x800CF408 | func_800CF408 | CutDrawPic1 | 2 x 2 SPRTs |
| 0x800CF6D0 | func_800CF6D0 | CutDrawPic2 | the strip and its fixed back |
| 0x800CEDFC | D_800CEDFC | g_CutPic1Path | LoadPatPicture in machine 2 step 0 |
| 0x800CEE14 | D_800CEE14 | g_CutPic2Path | LoadPatPicture in sub-step 3 |
| 0x800CFADC | D_800CFADC | g_CutLogoSteps | machine 1 table |
| 0x800D130C | D_800D130C | g_CutLogoUpload | func_800183E0 argument |
| 0x800D133C | D_800D133C | g_CutPrologueSteps | machine 2 table |
| 0x800D1344 | D_800D1344 | g_CutPrologueSubSteps | sub-step table |
| 0x800D1368 | D_800D1368 | g_CutPic1Y | picture 1's scroll |
| 0x800D136C | D_800D136C | g_CutPic2X | picture 2's scroll |
| 0x800D1374 | D_800D1374 | g_CutSubStep | sub-step index |

### 4.6 ovl3b

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x800CEDFC | func_800CEDFC | TrialEndMain | ModeTrialEndRun's call; step dispatch |
| 0x800CEE44 | func_800CEE44 | TrialEndInit | step 0 |
| 0x800CEE8C | func_800CEE8C | TrialEndFadeIn | func_800167F0(0), NextStep |
| 0x800CEEC0 | func_800CEEC0 | TrialEndHold | 300 frames or a button |
| 0x800CEF1C | func_800CEF1C | TrialEndFadeOut | func_800167F0(4), SetMode(12) |
| 0x800CEF50 | func_800CEF50 | TrialEndDraw | the two SPRT packets |
| 0x800CF0FC | D_800CF0FC | g_TrialEndSteps | the entry's table |
| 0x800CF10C | D_800CF10C | g_TrialEndSprtLeft | 256-wide packet at x -160 |
| 0x800CF124 | D_800CF124 | g_TrialEndSprtRight | 64-wide packet at x 96 |
| 0x800CF13C | D_800CF13C | g_TrialEndTimer | ++ until 300 |


## 5. Open questions and what is left

**Covered.** All six overlays, every function in C on a75e323 (ovl36 145, ovl37 21, ovl38 11, ovl39 58 plus the two
LIBPRESS asm routines, ovl3a 19, ovl3b 6): what each does, how it is entered, a purpose and a confidence per
function, and naming proposals. The package sections were written by three read-throughs (ovl36; ovl38 + ovl39;
ovl37 + ovl3a + ovl3b) and spot-checked (the mode handlers in src/main.c, the uncalled ovl39 -O0 menu, the
licence-once flag); a reader who renames from section 4 should read the function first.

**Found here.**
* The licence picture shows once per power-on (EXE flag D_800747D8); MAIN.CD entry 2 loads behind the SQUARESOFT
  logo that follows (what entry 2 holds: unknown).
* The title alternates between two logo movies per visit (D_80063074 & 1); its player is PsyQ's movie sample plus a
  lid check, a CD-audio fade on skip, no skip in the last 15 frames and a slice-width fix. Its step 1 (load MAIN.CD
  entry 5 as a second picture) and menu state 3 are skipped or never set: the trial version's scene select, disabled
  (M). The -O0 file ovl39_800D0100.c (16 functions, a three-option menu with preview pictures) is never called: an
  earlier trial / development title menu (M-L).
* The field: states 5, 6, 16 and 18 are load loops that run their own VSync / DrawOTag / LoadQueueStep; maps 0x20xx
  are sub-rooms loaded over one of four village base stages; the inventory's 12 slots are stamped with the day and
  some items turn into others after N days; the music and time-of-day jingles are per map (func_800D06E8).
* The debug menu's 13-row option page and five cumulative presets (counter 0x2E = 1..5: the JUMP_ACT_1..5 entries,
  M); its flags 0-2 (PLAYER DMG, GET IN SEL, PLAYER HP HERANAI) have no reader in src/; the presets read records at
  0x8010F46C, inside ovl36's data, so they are valid only if the field was loaded before the menu.
* The cut prologue has two entries and neither is reachable (offset 4, where a runner would jump, is a path
  string); its pictures come through LoadPatPicture, empty in the retail EXE.

**Open (most need data that is not in the repository).**
* The step / state tables' contents (ovl36 D_800D3430 states 2 and 3 are placed by elimination; ovl38 D_800CF450,
  ovl39 D_800D3598 step orders are M from address order and chaining); which handlers the field's transition
  dispatchers hold; who calls ovl36 func_800CF82C / func_800CF840; map 0x3069; LoadFileStep's -1 argument.
* The debug menu's texts and scene lists, the meaning of most stats fields, flags and counters it writes, and
  D_800D4C68.
* Where ovl3b's picture comes from (probably another block of its PAC package, not traced); which pictures ovl3a's
  D_800D130C uploads.
* ovl39: the swap picture's palette row (480) against the background's (483); D_800A5F1C behaves like PsyQ's
  StCdIntrFlag (M).
* docs/overlays.md still lists ovl3a func_800CF408 / func_800CF6D0, ovl3b func_800CEF50 and the ovl36 / ovl39 parks
  as parked; they are C on a75e323.
