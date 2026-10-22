# The game mode dispatcher (main EXE), 2026-10-11

Read from `src/main.c`, `include/work.h` and the asm in `asm/nonmatchings/main`. Nothing here is matching C; it is the map of the top-level state machine.

## How the frame loop picks what to run
`main()` loops: each frame it calls `func_80010B40`, which reads **`Work.mode`** (halfword at **0x800B99DE**; `Work` is the block at 0x800AF630, field 0xA3AE) and calls the function in the table
**`D_800629F4[mode]`** (18 entries, 0 to 17). Most mode handlers do one of two things: *load an overlay* (`func_80019A24` with a descriptor in the 0x800AE830 table: descriptor index i = MAIN.CD entry i, so
AE838 = entry 1, AE848 = entry 3, AE870 = entry 8, AE880 = entry 10, AE888 = entry 11) or *run the loaded overlay* (call its entry at 0x800CEDFC, or the other entries 0x800CEE74 / 0x800CEEC8), and
when the overlay sets its **done flag** (halfword 0x800B99E6) they call `SetMode(next)`.

* **`SetMode(n)`** = `func_80011818`: `Work.mode = n`, then it zeroes the seven step halfwords 0x800B99E0, E4, E6, E8, EA, EC, EE (the mode's step counter, done flag and scratch values).
* `NextMode` = `func_80011778`: the same with `mode + 1`.
* The **state** at 0x800B99F0 (9 in the field, 5 in some rooms) is a *sub-state inside a mode overlay*, set by `func_80011B7C(n)` (+1: `func_80011A3C`, -1: `func_80011ADC`; they zero the seven halfwords after it). The main EXE never reads it;
  only the overlays do. It is not the dispatcher (an earlier note called it the game state).

## The modes (what each handler does; descriptors resolved to overlay files)
| mode | handler | what it does |
|---|---|---|
| 0 | 0x80010BB4 | reset (sets a few flags, calls the CD and graphics setup) |
| 1 | 0x80010C7C | **load MAIN.CD entry 1** (`main_01`, the licence screen) |
| 2 | 0x80010CEC | run the overlay; when done -> mode 3 |
| 3 | 0x80010D60 | set display value 0x3E0 -> mode 5 |
| 4 | 0x80010DA0 | next mode |
| 5 | 0x80010ED4 | **load entry 3** (`main_03`, 176 KB) with parameters (0x57, a table at 0x800A2E20), sound 0x3E0 |
| 6 | 0x80010F80 | run overlay entry 0x800CEEC8, sub-steps; sets mode / state |
| 7 | 0x80011144 | **load entry 11 (`main_11`: the developer debug overlay)** |
| 8 | 0x800111BC | run overlay entry 0x800CEE74; when done -> **mode 10** |
| 9 | 0x80011220 | next mode / state reset |
| 10 | 0x800110CC | **load entry 10 (`main_10`, the field overlay)** |
| 11 | 0x8001125C | **run the field overlay** (0x800CEDFC) every frame: this is the mode while you play in a map (value 11 read in three captures) |
| 12 | 0x800112A8 | (empty) |
| 13 | 0x800112C8 | **load entry 8 (`main_08`, 2 KB)** |
| 14 | 0x80011320 | run the overlay |
| 15 | 0x800110CC | the same loader as mode 10 |
| 16 | 0x80011380 | a multi-step handler using the block at 0x800AE6A8 (not read in full) |
| 17 | 0x80011680 | start sound 0x29 -> mode 5 |

So the path **7 (load the debug overlay) -> 8 (run it) -> 10 (load the field) -> 11 (field)** looks like the developer's "debug menu, then play" route.

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
