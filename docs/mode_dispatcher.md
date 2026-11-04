# The game mode dispatcher (main EXE), 2026-10-11; rewritten from the matched C in r241 (1 Nov 2026)

Read from `src/main.c` (all matched C since r224), `include/work.h` and the overlays' C. Names are r241's
(`docs/names_r241.md` maps them to the old func_ / D_ names used further down and in older docs). The sections from
"What this gives" on are the October experiments, kept as they were.

## The boot path and the frame loop
`main()`: SetVideoMode(NTSC), `g_OtDepthLimit = 0x3E0`, InitGraph (ResetGraph, the debug level, the display mask off;
it also zero-fills D_800BA118 and calls ResetGameState), MemCardInit / MemCardStart, InitPad, CdInit (result in
D_800A2B7C), InitSound, InitCdFiles. Then the outer loop: ResetSystems (heap, GPU, Work, 3D, queues, state; the Work
block is cleared here), ResetFrameLoop (`Work.exitLoop = 0`, `Work.vsyncMode = 2`: 30 frames a second),
ForgetStageImage, SetFrameCallbacks (VSyncHandler: the sound driver's tick; DrawSyncHandler). Each frame of the inner
loop: g_FrameCount, the double-buffer index, the primitive buffer (g_PrimBuf / g_PrimNext, AllocPrim), the pads
(func_800189A8), the pause check (func_80015208); then, while **Work.pauseMenu** (0xA3E3) is 0: `Work.tick` and
`tickSum`, both ordering tables cleared, **ModeDispatch**, DrawDebugText and the sprite / model draw (func_8001C00C) on
the scratchpad stack; while it is nonzero (the field's pause menu, kind + 1) the field overlay's pause-menu update
(ovl36 func_800D25FC) runs instead and the mode does not advance. After both: FlushImageQueue (the VRAM upload queue),
DrawSync, VSync(Work.vsyncMode), the env swap, `CatPrim(ot + 0xFFC, &ot[g_OtDepthLimit])` (the OT entries between the
limit and 0xFFB are skipped: 0x3E0 by default; the stage engine picks 0x3E0, 0x480 or 0xFFB per map), DrawOTag of the
world OT then the 4-entry front OT, the sound request ring (func_8003500C), the sound driver's frame update
(func_8002D034), LoadQueueStep and FrameEndNop. `Work.exitLoop` (set only by QuitMainLoop, which has no caller) leaves
the inner loop.

## How the frame loop picks what to run
**ModeDispatch** reads **`Work.mode`** (halfword at 0x800B99DE, Work field 0xA3AE) and calls `g_ModeTable[mode]`
(0x800629F4, 18 entries). The loaders call **LoadFileStep**(`g_FileLoc*` descriptor, `g_LoadAddr[0]` = 0x800CEDF8,
size 0, sound table) every frame until it returns 1; the descriptors are `g_ArchiveFileLoc[i]` (8 bytes each), i =
MAIN.CD entry. The runners call the loaded overlay's entry (0x800CEDFC; the debug menu 0x800CEE74, the title
0x800CEEC8) and look at **`Work.done`** (0xA3B6), which the overlay sets when it is finished.

Work holds two control records with the same layout:

| offset | MODE record | cleared by | offset | GAME-STATE record | cleared by |
|---|---|---|---|---|---|
| 0xA3AE | mode | | 0xA3C0 | state | |
| 0xA3B0 | modeVar | SetMode, NextMode | 0xA3C2 | stateFlag | SetGameState, NextGameState, PrevGameState |
| 0xA3B2 | (untouched) | | 0xA3C4 | (untouched) | |
| 0xA3B4 | step | SetMode, NextMode | 0xA3C6 | stateStep | the game-state setters |
| 0xA3B6 | done | SetMode, NextMode, SetStep, NextStep | 0xA3C8 | stateStepVar | the game-state setters, Set/NextGameStateStep |
| 0xA3B8 | timer | SetMode, NextMode | 0xA3CA | unkA3CA (a timer?) | the game-state setters |
| 0xA3BA | subStep | SetMode, NextMode, SetStep, NextStep | 0xA3CC | stateSubStep | the game-state setters, Set/NextGameStateStep |
| 0xA3BC | subStepVar | all four, SetSubStep, NextSubStep | 0xA3CE | stateSubStepVar | all of them, Set/NextGameStateSubStep |
| 0xA3BE | stepTimer | SetMode, NextMode, SetStep, NextStep | 0xA3D0 | stateStepTimer | the game-state setters, Set/NextGameStateStep |

* **SetMode(n)** / **NextMode**: the old doc's seven halfwords (0x800B99E0, E4, E6, E8, EA, EC, EE) are right.
* **SetGameState(n)** (0x80011B7C) / NextGameState / PrevGameState clear 0xA3C2, C6, C8, CA, CC, CE, D0 (not 0xA3C4).
  The game state is a sub-state inside the field overlay: the EXE never reads it, the field overlay (ovl36's table
  D_800D3430, 20 states) and the stage engine read and set it.
* `Work.timer` is not only a timer: the licence screen and the demo count frames in it, but the title stores its menu
  result there (ovl39 func_800CF3A4).
* 0x3E0 in the loaders is `SetOtDepthLimit(0x3E0)`, the OT index main() links the 2D layer at (the old "display value"
  and mode 5's "sound 0x3E0" were this call).

## The modes (g_ModeTable)
| mode | handler | what it does |
|---|---|---|
| 0 | ModeReset | boot reset: Work.mapLive = 0, Work.unkA3E1 = 1 (while 1, DrawDebugText and the sprite / model draw draw nothing), demoActive = 0, records, the rumble, depth 0x3E0, SetGameState(0), NextMode |
| 1 | ModeLicenceLoad | load MAIN.CD entry 1 (ovl38, the licence screen) -> 2 |
| 2 | ModeLicenceRun | run it; when done -> 3 |
| 3 | ModeLicenceExit | depth 0x3E0 -> 5 |
| 4 | ModeSkip | NextMode only; nothing sets mode 4 |
| 5 | ModeTitleLoad | load entry 3 (ovl39, the title) with sound bank 0x57 (D_800C7C60 = {0x57, D_800A2E20}); sound command 2, ResetGameProgress, ApplySoundOptions, frame counter 0x800B99DA = 0 -> 6 |
| 6 | ModeTitleRun | run the title (0x800CEEC8); on done, by Work.timer: 0 New Game: map 0x3005 (SC01_000), group 0x3000, mode 10; 1 Continue: the same plus SetGameState(11); 4 (idle 451 frames): demoActive = 1, mode 15; 2, 3 nothing |
| 7 | ModeDebugLoad | load entry 11 (ovl37, the CHECK LIST debug menu) -> 8 |
| 8 | ModeDebugRun | run it (0x800CEE74); when done -> 10 |
| 9 | ModeNextClearState | NextMode and SetGameState(0); unused |
| 10, 15 | ModeFieldLoad | load entry 10 (ovl36, the field), NOW LOADING drawn; then NextMode: 10 -> 11 play, 15 -> 16 demo |
| 11 | ModeFieldRun | demoActive = 0, run the field (0x800CEDFC): the mode while you play |
| 12 | ModeIdle | empty: the trial version's end screen ends here (ovl3b's last step SetMode(12)), so it halts |
| 13 | ModeTrialEndLoad | load entry 8 (ovl3b, the trial end screen) -> 14 |
| 14 | ModeTrialEndRun | run it |
| 16 | ModeDemoRun | an attract demo: the recorded pad stream (docs/demos.md) until it times out or is skipped |
| 17 | ModeDemoEnd | demo flag off, sound 0x29 -> 5 |

Mode changes from outside main.c: ovl36 func_800D1BF8 SetMode(17) (the demo's end); the stage engine ModeGoTitle
(SetMode(5)) from field states 12 / 14 and ModeGoTrialEnd (SetMode(13)) from field state 17 (engine func_801282EC);
ovl3b SetMode(12). ModeGoIdle (SetMode(12)) and QuitMainLoop have no callers.

## The field's game states (ovl36 table D_800D3430, 20 entries)
0 field init (steps D_800D3480: setup func_800CEE84, package load func_800CEF04); 1 func_800CEF34 -> next; 4 -> 15;
5 / 6 frame loops (func_800CEFD0 / func_800CF104) -> 7; 7-10 the stage engine's entries 0x80128158 / 78 / 98 / B8 (7 =
the stage start, 9 steps D_8018D7A4 ending with NextGameState and stateFlag = 1; 9 = play, the "state 9 in the field"
of the old reading); 11 and 13 load MAIN.CD entry 12 (the stage engine image) to slot 1; 12 and 14 stage hook screens
(func_80128A28: Continue / load game; func_80128AF4, chosen by func_8002AF08: probably the save screen, low
confidence); 15 next; 16 frame loop -> 7; 17 stage func_801282EC -> mode 13 (trial end); 18 a frame loop waiting for
stateFlag -> 8; 19 func_800CF990 loads an archive entry by D_800D3408, fades, counts stateStepTimer to 0x5B -> 6. After a
map change func_800D1BF8 picks 13, 19, 18, then 6 / 5 / 16 by the area kind (func_800D1DB0: 0 / 1 / 2).

## What this gives
* A mode change is only RAM writes: `Work.mode = n` and the seven halfwords zeroed. A DuckStation cheat can do that (a manual, one-time cheat; a continuously applied one would lock the mode).
* **Experiment not run yet:** write mode 7 in the field to load the debug overlay and see whether its SCENE / JUMP_ACT menu works in this build (strings in `main_11`: "(DISELECT)", "PLAYER DMG", "GET IN SEL", "PLAYER HP HERANAI", "SCENE", "JUMP_ACT_1..5", "LAST_SCENE").
  It may crash or hang (the field is left without its normal teardown); take a save state first.
* Other debug commands (spawn an enemy, a model, an NPC, give an ability) would need the spawn functions and their arguments; a cheat can only write memory, so they need either the debug overlay or a small injected routine (a few instructions written into free RAM
  and called from a hooked pointer). Possible later; the animation controller, `SetScript` and the NPC records are the first pieces of that map.

## Experiment 2 result (2026-10-11): mode 7 from the village
`tools/duck_warp.py mode 7` wrote `Work.mode = 7` and zeroed the seven step halfwords once (as `SetMode` does). The game **accepted it**: mode 7 (load `main_11`) ran and after 1.3 s the mode became **8** (run the overlay) with step 1; it then stayed in mode 8
for the rest of the 20 s watch (the done flag stayed 0, map id unchanged 0x1011), so the debug overlay was loaded and running. What it shows on screen and whether it responds to the pad is for the user to report (not readable from RAM).
No further writes were made. Load the save state taken before the experiment to return to the game.

## The debug menu works (user report, 2026-10-11)
After the mode-7 write the game shows the developer **CHECK LIST** menu (`docs/debug_menu/check_list_first_view.png`):

* `GAME  AREA 1 CITY` and `SCENE 1 THE-CASTLE-1`: an area and scene select (the user **warped to a chosen scene** with it);
* developer names (KISHIWADA, YAMAMOTO, GOTO, YOUBI GETU, UENAKA: probably each programmer's own test entry);
* `PRE FLAG NO-SET`, `CHAR-FLAG-GLOBAL 0200`, `BIT-FLAG-EV005 ON`: story flag controls;
* `TIME 09:00`, and the three options whose strings are in the overlay: `PLAYER DMG ON`, `GET IN SEL OFF`, `PLAYER HP HERANAI OFF` (HP does not decrease).

## Opening it
* Once: `Programs\Debug Menu\Open Debug Menu Now.bat` (the same as `tools/duck_warp.py mode 7`).
* From the pad: `Programs\Debug Menu\Debug Menu Hotkey (R3).bat` (`tools/duck_debug_hotkey.py`) runs next to DuckStation and opens the menu when SELECT is pressed in a map (mode 11). It reads the pad word of pad 0 at 0x80078DC2 (SELECT = 0x0100;
  derived from `func_80018CE8`/`func_80018E9C`, to be confirmed with `--watch`). Another button: `--button <value>`.
* **Not done: opening it from the in-game Config option.** That needs the config menu's code found and its handler replaced by a call that does SetMode(7) (a hook written into game RAM, since a cheat can only write memory); the pause/config menu is not decoded yet. The SELECT hotkey does not need that.
* A DuckStation `.cht` cheat could also do the SELECT hook (a conditional on the pad word plus writes of mode 7 and the zeroed step halfwords), but DuckStation's conditional-code syntax needs checking against its source first; the external hotkey tool avoids that.

## The Config hook (2026-10-11)
Found with `tools/duck_ramrec.py` (a whole-RAM change recorder with the pad) while the user used the pause menu (Start, Right, X, then Down/Up through the command list):
* the command list cursor is the byte at **0x80115141** (0 = Items, 1 = Equipment, 2 = Techniques, 3 = **Config**: the order of the help texts in main_10); the byte at 0x80115128 holds cursor + 1 while the list is open; 0x8011514A mirrors the cursor;
* these bytes keep their values after the menu closes, so the hook also needs the word **0x801269F4**, which is 0xD while the pause menu is open and 0 otherwise (two recordings; 0 live with the menu closed);
* `tools/duck_debug_hotkey.py` therefore opens the debug menu when X is pressed with mode 11, 0x801269F4 = 0xD, 0x80115128 = 4 and 0x80115141 = 3, as well as on SELECT. While the helper runs, X on Config opens the debug menu instead of the Config screen;
  `--no-config` turns that off. Unconfirmed on the user's side at the time of writing.

## Why the Config hook opened the menu only after leaving the pause menu (2026-10-11)
`main()` checks **`Work.unkA3E3`** (byte 0x800B9A13): while it is 1, which it is while the pause menu is open (it was the 0x800B9A12 `0x1->0x101` change at Start in the first trace), the frame loop runs the pause-menu update `func_800D25FC` and does **not** call the mode dispatcher (`func_80010B40`).
A mode written during the pause menu therefore waited until the menu was closed. `tools/duck_debug_hotkey.py` now clears that byte together with the mode write, so the dispatcher runs at once and loads the debug overlay.
The menu-open word 0x801269F4 is the state halfword of the first of three 76-byte window objects at 0x801269F0 (the shared engine's window system, code at ~0x80137A90 to 0x80139990 in the stage image), not a pause flag as such; the pause flag is 0x800B9A13.
Because 0x800B9A13 is exactly "the menu is open", the Config condition can use it instead of 0x801269F4 (not changed yet: both are checked).

## Decision (2026-10-11): the debug menu is bound to R3
The Config trigger was **abandoned**: it worked only some of the time (sometimes the debug menu opened at once, sometimes only after the pause menu was closed). `tools/duck_debug_hotkey.py` now opens the debug menu
when **R3** (the right stick click, pad word 0x0400) is pressed in a map; SELECT is free again. The Config trigger is still in the tool behind `--config`. Launcher: `Programs\Debug Menu\Debug Menu Hotkey (R3).bat`.
