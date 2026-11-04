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
* **Fades.** func_800167B8(k) starts a screen fade (level D_800AF7CE = 0; func_80016224 with 0xFF for k < 4, else 0)
  and func_800167F0(speed) steps it (D_800AF7CE += D_80062BA0[speed & 3], the default speed D_800B9A18), drawing
  func_80016224(level, ...): one full-screen semi-transparent POLY_F4 (code 0x2A) of grey `level`, sized from the
  display (D_800AF7BC / BE). Six of the overlays use the pair for their fade-in / fade-out steps. (H for the code, M
  for which direction each k gives)
* **Leaving.** Before a runner mode changes mode, the EXE clears the sprite and model slots (func_8001C044: 0x100
  sprites of 0x38 bytes at Work + 0x65A8, 0xC0 models of 0x84 at Work + 0x2A8) and the 64 draw-list records
  D_800B93D8 (func_80015310); the overlays call the same two when they tear down. (H)
* **Pads.** GetPadPressedDir(port) (src/code_800123F0.c): the newly pressed buttons, or a direction made from the
  analog stick's movement when none is pressed: the menus' cursor input (five of the overlays). (H)
* **Sprites and text.** func_8001534C(n, x, a, b, c, d) fills the 16-byte record n of Work + 0x9DA8 (the 2D sprite /
  text list drawn by the EXE's func_8001C00C); func_800183E0 queues image records for the end-of-frame LoadImage
  (as in the ability packages); the overlays build their own GPU packets with addPrim / setlen (PsyQ macros) into the
  primitive buffer. (H)

