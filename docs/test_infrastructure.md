# Test infrastructure: what each check proves, and what it cannot (r142)

Written 22 Oct 2026 by r142 (stream T). The regression suite and commit gate for the matching decomp, and later the
differential test of the PC port's recompiler and native C. Each section says what the check proves and what it
cannot.

## 1. `make regress`: every byte-identical check in one table

```
make regress                       # all 182 images (the commands below run from PowerShell, never Git Bash)
make regress R="abil"              # one area: main, ovl, abil or stg
make regress R="stg sc03_005"      # or image names (ovl38, stage, ovl2c, sc02_031, ...)
.venv\Scripts\python.exe -I tools/regress.py --no-build    # compare what is already built, no make
```

`tools/regress.py` asks the Makefile for the list of checked images (`make regress-targets`, one line each: area, name,
built binary, original), builds them area by area with `make -k`, and compares each binary with the original on the
disc. It prints one PASS/FAIL row per area with its time, then every failure with the reason (differs, not built, the
original changed) and the error lines from `build/regress/<area>.log`, and exits 1 on any failure. Results also go to
`build/regress/last.json`.

| Area | Images | Original |
|---|---|---|
| main | the EXE | disc/files/SLUS_007.26 |
| ovl | ovl38 (main_01), stage (the engine + the village, SC03_001), the mode overlays ovl39, 36, 37, 3a, 3b | disc/overlays, disc/pac4 |
| abil | the 35 ability packages ovl13-ovl35 | disc/overlays/code |
| stg | the 139 other stage images | disc/pac4 |

Times on 22 Oct (8 jobs): from a fresh `make split`, 103 s; already built, 28 s (about 5 s per area is make reading
the Makefile).

Two guards keep a PASS honest:
* **No stale passes.** Each checked binary is deleted before make runs, so a compile or link that fails leaves it
  missing ("not built") instead of letting the copy from an earlier build pass. Only the objcopy step is redone when
  nothing changed.
* **The originals are pinned.** `tools/regress_baseline.txt` records the SHA-1 and size of all 182 originals (recorded
  22 Oct from disc/ as extracted then, every one matched by the build). disc/ is one folder shared by every worktree
  through a junction; if a file in it is re-extracted differently or damaged, the check fails as "original changed"
  instead of comparing against the wrong bytes. Re-record only on purpose:
  `.venv\Scripts\python.exe -I tools/regress.py --record-baseline`.

**What it proves:** every matched function, every INCLUDE_ASM block and every data piece of the 182 images assembles
and links to the disc's exact bytes. For a function written in C, the C compiles under GCC 2.7.2 + maspsx to the
original instructions.

**What it cannot prove:**
* That the C means the same thing on another compiler. GCC 2.7.2 at -O2 for the R3000 is one reading of the C; cl
  for the PC build (32-bit x86 today, pc/build.bat) may read undefined behaviour, integer widths, signed shifts or
  pointer sizes differently. Phase 2 (below) covers this.
* That the PC port's recompiled or interpreted code is right (Phase 2).
* Anything about images not in the table: the DATA in MAIN.CD outside the code blocks, the stage images' engine copies
  in the other 139 images (they are bin pieces taken from the disc, not rebuilt from src/stage: Phase 3).
* Progress: a stage or ability file can be byte-identical while still mostly INCLUDE_ASM. `make progress` and
  `make stage-progress` count that; neither is a correctness check.

## 2. The commit gate: `tools/hooks/pre-commit`

Install once. The setting is shared by every worktree, and each worktree runs its own copy of the hook (a branch
without the file runs nothing):

```
git config core.hooksPath tools/hooks
```

Uninstall with `git config --unset core.hooksPath`.

On every commit the hook runs `tools/regress.py --staged`, which reads the staged file names (`git diff --cached`, so
it follows `GIT_INDEX_FILE`) and rebuilds only the images they can change:

| Staged file | Checked |
|---|---|
| src/abil/ovlNN.c, abil/ovlNN.yaml, abil/symbol_addrs_ovlNN.txt | that ability package |
| src/stg/scNN_NNN.c, stg/scNN_NNN.yaml, stg/symbol_addrs_scNN_NNN.txt | that stage image |
| src/ovlNN/*, src/stage/*, ovlNN.yaml, stage.yaml | that overlay (stage = the engine + the village) |
| src/*.c or .h (the EXE), include/, Makefile, slus_007.26.yaml, the top-level symbol_addrs*.txt, undefined_syms*.txt, reloc_addrs.txt, tools/jtbl_relabel.py, exe_syms.py, gen_ability_ovls.py, gen_stage_cfgs.py, regress.py, regress_baseline.txt | all 182 (the EXE's symbols are linked into every image) |
| anything else: docs/, pc/, the launcher, other tools, notes | nothing: the hook exits at once |

A one-stage commit costs about 11 s; a commit touching the EXE or a header runs the whole suite (about 30 s built).
A docs-only commit is never blocked and never builds.

The temporary-index routine (one shared index in the main checkout) does not run hooks when it uses
`git commit-tree`. Use `tools/tmp_commit.py` instead: it builds a fresh index from HEAD, adds only the named paths,
runs `git commit` with `GIT_INDEX_FILE` set (so the hook sees exactly what is committed), then resets the shared index's
entries for those paths. It refuses LuciDin's catalogue files and refuses during a merge.

```
.venv\Scripts\python.exe -I tools/tmp_commit.py -m "r142: ..." tools/regress.py docs/test_infrastructure.md
```

Skip the gate for one commit with `git commit --no-verify` (tmp_commit.py takes `--no-verify` too) or
`TWINBLADE_SKIP_REGRESS=1`, and say so in the commit message.

**Limits of the gate:**
* It builds the working tree, not the staged snapshot. A commit of some hunks of a file (`git add -p`) is checked with
  the whole file as it is on disk. Commit whole files (the project's routine does).
* A changed splat config (*.yaml) needs `make split` before the check means anything: asm/ is gitignored and not
  regenerated by the hook.
* `make` must be run from PowerShell; the hook itself runs under Git's sh, which calls MSYS2's make.exe directly. This
  works (tested 22 Oct: a breaking commit was refused in 12 s, no hang). The Git Bash hang is in the Bash tool's pipes,
  not in Git's hook runner.
* Git for Windows puts its own msys tools (sed, find) first on PATH in hooks and Git Bash. Run inside MSYS2's make
  they misbehave (two msys runtimes): the first gate failed every stage as "original missing: disc/pac4/U1E.bin" and
  assembled an overlay's nonmatchings/ (22 Oct, S1 and F-B, when C:\msys64\usr\bin was on PATH but behind Git's).
  tools/regress.py now gives make a PATH with MSYS2 first and Git's tool folders removed, and no longer needs sed's
  `\U`. Tested from Git Bash with that PATH: a stage, an overlay and an EXE commit (182/182).
* Merges: `tools/hooks/pre-merge-commit` runs the same check on a merge that makes a merge commit (it sees every file
  the merge brings in). A fast-forward merge makes no commit and runs no hook, so run `make regress` in main after
  one. A merge that stops on a conflict is committed later with `git commit`, which runs pre-commit.
* Races in the main checkout: a gated merge commit there takes about 75 s (all 182 images when tools or the EXE
  change), and other sessions may commit to main meanwhile. Git then refuses to move HEAD ("cannot lock ref 'HEAD':
  is at ... but expected ..."); nothing is lost: MERGE_HEAD and the index are still there, and `git commit` again
  records the same merge on the new main (22 Oct, 7fa01b8). Builds default to `-j4` (LuciDin's CPU cap with several
  streams building; `-j N` overrides, never above 8).
* **Merging a stream branch into main: `tools/merge_branch.py BRANCH -m "..."`** (after LuciDin's yes). A plain
  `git merge` there also fails outright while another session has files staged in the shared index (22 Oct: r149's
  merge in progress). merge_branch computes the merge with `git merge-tree` (no index), checks the files it changes
  are clean here, writes them to the working tree, runs the gate on them, then records the merge commit only if the
  branch has not moved meanwhile (`git update-ref` with the old value) and updates the shared index for those files
  only. On a conflict, a dirty file, a gate failure or a moved branch it changes nothing (the files are put back) and
  says which. First used 22 Oct to merge main into decomp/regress (135 files, 125 images checked).

## 3. Line endings

`.gitattributes` keeps src/, include/ and every *.yaml LF in every checkout, whatever `core.autocrlf` says. Git for
Windows sets `core.autocrlf=true` system-wide, so before this rule a plain `git checkout -- <file>` in a worktree
rewrote a C file with CRLF, and GCC 2.7.2's cpp fails on CRLF (found 22 Oct while testing the hook). pc/ is left alone
(several pc/ files are CRLF in the main checkout).

## 4. The differential tests: the PC port's code against the original MIPS (Phase 2)

A byte match proves the C is right under GCC 2.7.2 for the R3000. The PC port runs other code: the static
recompiler's C for the unmatched EXE functions and the overlays main_03 / main_10 (tools/recomp.py), the interpreter
for everything else (pc/interp.c), and the matched C itself built by cl. Three tests compare that code with the
original MIPS, the interpreter acting as the console:

| Test | Command | Compares |
|---|---|---|
| recompiler | `.venv\Scripts\python.exe -I tools/difftest.py` | each translated function vs the interpreter running its original MIPS |
| matched C under cl | `... tools/difftest.py --matched` | each matched C function, built by cl as the port builds it, vs the interpreter running its original MIPS |
| interpreter | `... tools/duck_replay.py --sav <state.sav>` | the interpreter itself vs a DuckStation CPU trace, instruction by instruction |

All three build from the port's real sources (pc/interp.c, pc/gte_core.c, the helpers of pc/recomp_rt.c, the
thunks and source copies pc/gen.py writes) into build/difftest/ of the checkout they run in; never build/pc. They
are 32-bit like the port (pc/build.bat builds x86 with vcvars32, not x86-64: a game address and a host pointer are
the same width only because of that).

### How the two function tests work

State: the 1128 extracted save states and the 25 manual dumps in disc/dumps (read-only RAM images; no scratchpad or
GTE registers in them, both start at zero). For each state the game's frame functions (the main loop's calls in
src/main.c) run in the interpreter: the tracer. Whenever they call a function under test whose code is in RAM (an
overlay function only when its overlay is loaded: its first words are checked), that call's real entry state (a0-a3,
sp, all of RAM, the scratchpad, the GTE registers) is saved, the function runs both ways, and the two results are
compared: v0 and v1 (matched C: v0 only, as wide as its declared type, and not at all for void), the stack pointer
after, every call it makes with its arguments (recompiler only), all of RAM, the scratchpad and the GTE registers.
The callees run in the interpreter on both sides, so a difference belongs to the function's own body. Then the
tracer goes on by interpreting the function. Defaults: 40 states (one per stage image first, then the dumps),
3 tests per function per state, 4 frames per state; `--states 2000` takes every state.

Hardware: the I/O pages (0x1F801000-0x1F802FFF) read as zero and every access is counted (a guard page); PsyQ
library calls other than libc, libgte and the math library are stubbed (v0 = 0) and counted; BIOS calls likewise.
A test with any of either is marked `review`: its result rests on stubbed values. Wait loops on stubbed hardware end
in a timeout (1 s per side, 10 s per frame of the tracer).

Not compared, by design (the port does the same and nothing reads them): the 64 KB of dead stack below the entry
sp and the four argument home slots at it; for the matched C, words that differ only as saved game stack pointers
(`SAME_SP`: the C's frames are on the host stack, so the game-side sp below it is not the console's).

### Results (22 Oct 2026)

**Recompiler:** all 307 captured states (282 extracted save states and 25 dumps), 13631 tests, all identical; 117 of
the 298 translated functions reached (3117 tests marked for review, all identical). The pure translated functions
(6: no memory but their own stack, no calls, no GTE) also get 200 random argument sets each: 800 tests on the four
loaded in the field states, all identical. Three early differences were harness faults, fixed before these numbers:
a `j` to a label inside the function taken for a tail call; calls inside code with no symbol hidden one level down;
the dead stack.

**Matched C under cl:** all 307 states, 32870 tests: 31675 identical, 1185 differing in 8 of the 208 functions
reached (594 in all):
* No return value (C4716): `func_800291A0` (604 of 604), `func_80029124` (5 of 5), `func_80036EE8` (1 of 1),
  `func_80016A7C` (2 of 15, and `func_80016A5C` which returns its result). Declared `s32` with no return statement:
  GCC's v0 is whatever the last instruction left, cl's eax is something else. Harmless while no caller uses the
  value; it is undefined behaviour under cl. cl itself lists every such function in the port's matched C (written
  to build/difftest/matched/cl_warnings.txt): ten on 22 Oct, the four above plus func_80016F18, func_80017294,
  func_800173DC, func_8001751C, func_80017930 and func_8002D4C8 (overridden). **Settled (r159, 22 Oct): no caller
  reads any of the ten results; the matched C stays as it is** (s32, no return: callers declare them so, and the
  recipes keep that form). Method, on the machine code of every image (asm/ for the unmatched functions, the
  compiled build/src/*.s for the matched C, all 182 images built): every `jal` site is followed forward until v0 is
  read, overwritten or reaches the caller's `jr ra`; a caller that returns it unchanged (the `return f(...)`
  wrappers, and C callers whose last call it is) is followed in turn, to any depth. Functions in those chains that
  nothing calls directly are reached through data tables (911 of them) or nowhere (20); none of the tables is indexed
  by any of the 61 `jalr` sites that read v0 (PsyQ's GsSortObject4/5 and pad library, the script VM's native-call
  opcode func_80178D40, func_8014032C, func_80148AFC/D44/E54, func_801789AC, func_800301C8, func_8003500C, ovl36's two,
  the stage DrawChunkedMesh-twin dispatchers), and the engine's mixed table D_8018FC4C (which holds the overlay
  address 0x800CAF90) is called by func_80159A20, which overwrites v0 at once. No raw `.word` of a chain function's
  address appears in script data. Scripts: r159's scratch scanners v0use.py / jalr.py / refs.py / tabusers.py /
  rawwords.py are in the dispatcher's notes folder (r159_tools).

  | Function | Direct call sites (unused / passed on) | Passed through (chain members, pointer-reached or uncalled) | v0 read anywhere? |
  |---|---|---|---|
  | func_800291A0 | 337 / 27 | 35 (21) | no |
  | func_80029124 | 549 / 85 | 94 (70) | no |
  | func_80036EE8 | 1 / 1 (func_8002EEB8, whose 5 callers drop it) | 2 (0) | no |
  | func_80016A7C | 0 / 2 (func_80016A3C, func_80016A5C) | 81 (38) | no |
  | func_80016F18 | 0 / 3 (func_80016EB0, ED4, EF8) | 39 (11) | no |
  | func_80017294 | 0 / 2 (func_80017254, 274) | 24 (14) | no |
  | func_800173DC | 0 / 2 (func_8001739C, 3BC) | 10 (1) | no |
  | func_8001751C | 0 / 2 (func_800174DC, 4FC) | 5 (3) | no |
  | func_80017930 | 0 / 3 (func_800178C8, 8EC, 910) | 16 (4) | no |
  | func_8002D4C8 | 1973 / 681 | 976 (769) | no |

  **For the port (no code change here):** the value of these ten (and of the wrappers that pass it on) is undefined
  under cl and must stay unused; C4716 for them is expected. If port code ever wants a result from one (pc/native's
  func_8002D4C8 override already returns a defined s32), it must define it itself, not rely on the console's v0.
  Residual risk: 157 handler tables are reached only through other pointers and were not traced to a dispatcher one
  by one; `difftest.py --matched` keeps comparing v0, so a reader would show up there as a difference in the caller.
* `func_8002F714` (8 of 8), by design: it stores a function pointer in game data (`D_800A4F24 = func_8002F80C`); the
  C stores the host address, the console the MIPS one. The port does the same on purpose (host pointers in data:
  pc/ps1mem.c), and rc_callback runs either kind. A risk only where interpreted or translated code reads that word.
* `func_8001125C` (559 of 565), harness limit: the field-mode handler calls the field overlay through the port's
  wrapper, and the overlay saves s0 (here `&D_800AF630`) in dead frames on the scratchpad stack; the native caller
  keeps that pointer in an x86 register, so the saved word is 0 on the host side. Dead stack on the second stack,
  not a cl bug.
* `func_8001B0D4` (4 of 103, stubbed CD call): one global gets a stack-like value (801FFF80) from the interpreter and
  another from the C. Most likely the callee func_80036AF8 reads an argument slot the C call never fills (garbage on
  both sides). For manual review.
* Fixed in the harness during the run: `rand`/`srand` (the C runtime's own were linked in place of the port's shim:
  four rand-using functions differed until they ran PsyQ's code).

**A port note found on the way:** the port's `rand` (pc/psyq/api.c) is PsyQ's generator but keeps its seed in a host
variable starting at 1, where the console keeps it in RAM at 0x80078980 starting at 0 (BSS). The game seeds it itself
(`srand(0)` in func_8002C410, `srand(1)` in the mode-16 handler), so the sequences agree after those calls; before the
first one, and in any RAM capture or save of the seed, they do not.

Read by hand (not seen in any test, since none of the translated code does it): translated code bypasses the
interpreter's sound-chip register path (no translated function loads an I/O page address today); a `jr` through a
register with no jump table becomes a `switch` over the function's labels and traps on anything else (28 places,
all with the trap); a branch into a delay slot would be translated wrongly (the label lands before the branch).

### The interpreter against DuckStation (Phase 2b)

The two tests above trust the interpreter. tools/duck_replay.py checks it against DuckStation, which is the more
accurate emulator here: a DuckStation CPU trace (one line per instruction with the values of the registers it reads,
before it runs) is replayed through a copy of pc/interp.c whose step loop calls a hook (the only change). The hook
keeps the interpreter at the trace's pc, compares every register value the trace shows with the interpreter's,
charges a difference to the instruction that last wrote that register (categories: alu, link, load, load_io,
load_delay, gte, cop0, hilo) and takes the trace's value so the replay goes on. BIOS calls and interrupts (code the
interpreter does not run) are skipped with their stores applied to RAM. Tested on a synthetic trace with one planted
error (found, charged to the right instruction). Making a real trace: see the docstring of tools/duck_replay.py
(Debug > CPU Debugger > Trace in DuckStation, about a minute).

**What it cannot see:** RAM that DMA fills during the trace (CD, GPU): such loads show as `load` differences; the
console's load delay slot (the interpreter has none; `load_delay` marks the cases, GCC's code never relies on it);
cop0.

### What the differential tests cannot prove

* Coverage is what the frame loop reaches from the captured states: 117 of 298 translated and 208 of 594 matched
  functions. Functions only reached at boot, in menus with no captured state or from the stage code's own paths are
  not tested. More states (the title, menus, cutscenes) raise it.
* Results under stubbed hardware are marked `review`, not trusted.
* The matched C is tested through the port's thunks with its callees interpreted; the tests do not cover the port's
  shims (pc/psyq), the renderer or the sound.
* The interpreter is the oracle until the DuckStation replay has run on real traces.

## 5. Coverage and progress (Phase 3)

`make coverage` (tools/coverage.py, also printed at the end of every full `make regress`) counts the code of the
built objects (function sizes from `nm -S`) per area by what it is: C (a real match), stub (a C definition with an
empty body: splat writes them for `jr ra; nop`), asm (INCLUDE_ASM or a whole .s file), lib (the PsyQ library). All of
it is byte-checked; the C share is the part that is also readable. On 22 Oct 2026:

| Area | Code | C | stub | asm | lib | C share of game code |
|---|---|---|---|---|---|---|
| main | 330 KB | 57 KB | 0.1 KB | 111 KB | 161 KB | 34.0 % |
| ovl | 462 KB | 220 KB | 0.8 KB | 241 KB | 0 | 47.6 % |
| abil | 98 KB | 78 KB | 0.2 KB | 20 KB | 0 | 79.8 % |
| stg (own code) | 4796 KB | 1175 KB | 9 KB | 3612 KB | 0 | 24.5 % |

Every code block on the disc is under a byte check: the EXE, the 140 stage images, main_01 and the 40 code blocks
`make overlays` extracts from MAIN.CD (35 ability packages, 5 mode overlays). What is not checked is data in MAIN.CD
outside those blocks (assets).

**The shared engine in all 140 images.** The 139 other stage images carry their engine (0x80128158-0x8017BE9C) as a
binary piece from the disc, not rebuilt from src/stage, so their check does not test the engine's C. The coverage
step proves every image's engine is the village's word for word once relocated addresses are masked (the masking of
tools/stage_census.py: lui 0x8017-0x8020 and the offsets off it, jal targets into the own code): PASS, 140 of 140.
With `check-stage` rebuilding the village's engine from src/stage, the engine's C is thereby checked for every image.
A failure fails `make regress`. The result is cached in build/regress/engine_identity.json against the originals'
hashes (tools/regress_baseline.txt).

**`make progress`** now reads the sources only (no build) and counts empty stubs apart from real matches, per unit
(main EXE, each overlay, the stage engine, the ability packages, then tools/stage_progress.py's stage line). Before,
the overlays and ability packages counted a stub as decompiled (the ability packages' "603 / 660" was 582 real
matches and 21 stubs).

## 6. Proposal: a golden-frame suite for the PC port (Phase 4, design only, for LuciDin to decide)

Today the port is tested by scripted runs (tools/pc_test_run.ps1: TWINBLADE_TEST_PRESS inputs by frame, screenshots
every N frames) compared by eye, at 4:3 and widescreen. The proposal turns a fixed set of those runs into an
automatic pass/fail with stored approved results ("goldens").

**It needs deterministic runs first (r129, not started).** The same inputs must give the same frames. Known sources
of drift: frame pacing by the wall clock instead of game frames, CD reads finishing at different frames, anything
the audio thread or the VSync callback changes, and fights that differ run to run (handoff: the damage-number
picture). Without r129 the suite can still run the state layer below on scenes with no loading, but the frame
layer would flake.

**Two layers, cheapest first:**
1. State goldens (logic, no pixels): at fixed game frames the port writes a hash of the game's RAM, less the regions
   that legitimately vary (ordering tables, draw buffers, timers, the stack), and the GTE registers. Exact match
   required. Catches a logic regression from a decomp or recomp change at once, without renderer noise, and gives the
   frame where two runs part (a cheap, port-side cousin of the differential tests).
2. Frame goldens (what the player sees): screenshots at fixed frames, compared to approved images.

**Scenes (12, each from Fast Boot and the Fin save or a new game, a few hundred frames):** licence screen; title;
prologue's first text box; village standing still (map 1094); village with a full camera turn; indoor (the inn);
pause menu; debug menu; a field stage with enemies acting; an ability in use; the Bincholoid litmus model on screen
(rip1's reference); the ending sky. Each is a line in a scene file (name, inputs, frames to compare); new scenes are
one line.

**Matrix:** aspect {4:3, widescreen} x renderer {software 1x, hardware} = 4 configurations, 48 images per run. The
"as shipped / with fixes" switch doubles it where a fix changes the picture; proposed: as shipped by default, with
fixes only for the scenes that have one.

**Tolerance:**
| Configuration | Rule |
|---|---|
| software renderer at 1x, 4:3 | exact (it is the PS1's own resolution and rasteriser rules: any pixel change is a change) |
| hardware renderer, widescreen, scaled | per-pixel difference up to 8 per channel on at most 0.5 % of pixels, and a structural similarity of 0.99 or more |
A failure writes the pair and a difference heat map next to the run for a look by eye.

**Where things live:** scene scripts and the goldens' hashes in the repo (tools/golden/); the golden images and
the run outputs outside it (no game art in the repo): disc/golden/<scene>/<config>.png, and build/portsuite/ for
runs. Approving a new golden is one command (`bless <scene>`) that LuciDin runs after looking.

**When it runs:** too slow for the commit gate (48 runs of 30-90 s, about 40 minutes, one port at a time since
build\pc is shared; less with a port option to write shots and logs to a chosen folder, which lets the suite use its
own copy). Proposed: `make portsuite` on demand, after every port merge and before a release; the state layer alone
(a few minutes) after decomp merges that touch code the port compiles.

**Against an emulator (the accuracy goal):** for the software 1x 4:3 configuration the same scene from the same save
can be captured in DuckStation (rip1's tools) as a reference golden. A difference there is a fidelity gap, not a
regression; it would be reported apart.

**Decisions for LuciDin:** (1) start r129 (determinism) first, or the state layer now on the loading-free scenes;
(2) the scene list; (3) the matrix (4 configurations, or 2: one aspect and the software renderer); (4) the
tolerances; (5) where the goldens live (disc/golden proposed); (6) when it runs.
