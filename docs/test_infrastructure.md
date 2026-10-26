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
| src/stage/*, stg/symbol_addrs_engine.txt | the village and all 139 stage images (r192: the engine is in every image; r161 found only `stage` checked) |
| src/ovlNN/*, ovlNN.yaml, stage.yaml | that overlay (stage = the engine + the village) |
| src/*.c or .h (the EXE), include/, Makefile, slus_007.26.yaml, the top-level symbol_addrs*.txt, undefined_syms*.txt, reloc_addrs.txt, tools/jtbl_relabel.py, exe_syms.py, gen_ability_ovls.py, gen_stage_cfgs.py, regress.py, maspsx_tw.py, regress_baseline.txt | all 182 (the EXE's symbols are linked into every image) |
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
* asm/ is gitignored. Since r192 the gate (`--staged` and `--paths`, so the hook and merge_branch.py) re-splits the
  images whose stg/ or abil/ yaml or symbol file, or overlay yaml, is in the list before it builds
  (`tools/gen_stage_cfgs.py --resplit <stages>`, every stage for stg/symbol_addrs_engine.txt; splat for the others;
  about 8 s a stage). Before, a merged stg/symbol_addrs_<stage>.txt was checked against the old split. Not re-split:
  the EXE's yaml and the top-level symbol_addrs*.txt (run `make split` by hand after changing those), and a changed
  generator (regenerate the configs with `make stg-cfgs` / `make split-abil` first, then commit them).
* The Makefile is not a prerequisite of the `.o` rules: after changing a compile flag or tools/maspsx_tw.py, delete
  build/src/**/*.o (or `make clean`) before `make regress`, or it compares objects built with the old flags.
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
  says which. First used 22 Oct to merge main into decomp/regress (135 files, 125 images checked). r192: the gate's
  re-split covers the stream recipe `make split-stg STG=<stages>` before the check; after a put-back
  merge_branch re-splits again (`regress.py --resplit --paths ...`), so asm/ matches the files on disk.

## 2b. Decomp tool fixes of r192 (25 Oct 2026)

Each was reproduced on the case the streams reported, fixed, and re-run. The clone and place results were tested on 7
stages (35 functions placed, each stage's check PASS), then src/ was restored: this card did no decomp work.

| Tool | Gap | Now |
|---|---|---|
| put_func.split() (used by stage_clone, place_stage, m2c tools) | K&R definitions `f(a) s32 a; {` were not seen as functions: their bodies stayed in the "declarations" and stage_clone copied them with the source's symbols ("a source symbol left unrenamed", 11 skips) | K&R headers recognised; K&R sources clone too |
| stage_clone.py | no same-stage sources (sc05_008's 18 copies); the target's own `extern void f();` guess for the cloned function copied into its draft ("conflicting types", 107 of 219 drafts); the target's `extern void callee()` kept where the source returns a value ("void value not ignored", 8) | same-image sources after the other images'; the own guess dropped; a callee the source types with a value keeps the source's line. One pass: 219 drafts (was 166), **211 compile to the original's bytes (was 83)**: about 210 functions waiting for a clone_all pass |
| stage_clone.py check | "left unrenamed" tested only the source's name prefix | any source-own symbol that neither the asm walk nor the offset move renamed (works within one image too); the message names them |
| put_func.missing_decls (place_stage, put_func) | a function the file declares or defines only after its first INCLUDE_ASM lost its prototype ("undeclared", "used prior to declaration"); `extern s32 D_1, D_2;` skipped whole when D_2 was declared; `extern void (*D[10])(s32);` read as declaring `void`; an INCLUDE_ASM line taken as a declaration | the prototype goes up (from the later definition's own header; K&R gives `T f();`; not for a later static); multi-name lines split; function-pointer arrays named; INCLUDE_ASM lines dropped; an extern variable declared only further down is copied up |
| place_stage.py | drafts deferred when two guessed one callee differently (`void` / `s32`); `static inline` helpers inserted with the declarations; a narrow parameter (`s16 arg2`) after the file's `f();` failed ("conflicting types ... default promotion"); the file's `extern void f()` kept when a draft uses f's value; "build differs" said nothing | the valued guess wins batch-wide, and a symbol the file declares is no clash; inline helpers go right in front of their function (r179's handput_inl); narrow parameters rewritten `s32 arg2_0` + `s16 arg2 = arg2_0;` (tested on sc07_002 8017D920 back in its narrow form: placed, PASS); the file's void guess retyped (not for a function defined void in C); "build differs" lists the first differing words (address, built, original); "makes pointer from integer" printed and written to _why.txt |
| regress.py / merge_branch.py | see section 2 (src/stage checks all stages; re-split before the gate) | |
| cmp_func.py | %lo immediates masked: `D_801269F0[i].unk28` for the original's `%lo(D_80126A28)` was a MATCH (func_801378F0, r175's "wrong struct byte") | a %lo whose symbol both sides resolve (a name ending in its address, or one in the symbol files / undefined_syms_extra.txt) must give the same address; the diff shows `<%lo(SYM+addend)>`; section symbols (static data) stay masked. Tested: the swapped-field copy of func_801378F0 now differs on its two stores, the real one still matches |
| put_func.py | wrote back every src file on revert (once left src/stg/sc02_015.c empty); copied a draft's scratch `#include "../build/..."`; showed 14 error lines | writes and restores only the changed files; drops includes that are not under include/ (with a note); 40 lines, de-duplicated |
| cmp_func temp files | (r142 already: per-process names) | checked |
| maspsx / Makefile / cmp_func | the game's assembler wrote `sltu rd,rs,-1` as `li at,-1; sltu rd,rs,at`; maspsx turns that rule off for --aspsx-version 2.79 | new tools/maspsx_tw.py (tracked; tools/maspsx is a gitignored clone, junctioned into the worktrees, left unmodified): maspsx with sltu_at on, used by the Makefile and cmp_func, and a gate input (all 182). func_sc03_105_801803A0's parked C (r158_patches/src_parked) matches unchanged (placed and checked, then restored); full `make regress` 182/182 after a rebuild of every C object |
| variant_search.py, stage_bulk/cmp_par.py | 26 and 8 workers by default | 4 (the CPU cap) |
| Makefile | a literal `\n` token in O0_FILES | a line continuation |
| stage_bulk/fix_decl.py | retyped a stage function's prototype void -> s32 even when the file defines it void in C (conflicting types) | leaves those alone and says so |
| tmp_commit.py | (r168's CRLF blobs came from a text pipe in a hand-made commit; tmp_commit uses `git add`, whose eol rules apply) | refuses a commit whose staged blob has CRLF where HEAD's has none (blobs read through a bytes pipe) |

**Not done (reasons):**
* A stage -O0 translation unit (sc03_118 0x80183280-0x801834DC; sc03_014/015 0x80183CF0-0x80184868; r174's three
  -O0 matches): splat would need a second and third `c` subsegment per stage (gen_stage_cfgs.py), the Makefile an -O0
  object per stage, and src/stg/<stage>.c split into three files (src/ moves, and every tool that assumes one C file
  per stage: stage_clone, place_stage, put_func's target_of, coverage). Larger than this card and risky for the gate;
  a card of its own (Opus high).
* place_stage's spurious "build differs" on a hand-identical insertion: the two causes found (static inline helpers
  placed with the declarations, narrow parameters) are fixed; any other case now prints the differing words for the
  next report.
* A deferred draft whose callee the target file defines void in C while the source returns its value (sc04_019
  801815DC calling 80181998): a source judgement (retype the matched definition), left deferred.

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
accurate emulator here: a DuckStation CPU trace is replayed through a copy of pc/interp.c whose step loop calls a hook
(the only change; the harness is tools/difftest/replay.c, whose header says how the comparison works). Making a
trace: see the docstring of tools/duck_replay.py (Debug > CPU Debugger > Trace in DuckStation, about a minute).

```
.venv\Scripts\python.exe -I tools/duck_replay.py --sav <state.sav> --trace <cpu_log.txt>    [--max N] [--no-build] [--no-gte]
```

Output per trace in build/difftest/replay/runs/<trace file name>/: summary.txt, mismatches.tsv, taken.tsv. The build
runs in the repo root with relative paths (r180), so the space in the checkout's path needs no junction. A second
replay can run alongside the first with `--no-build`. `DT_DEBUG=<from line>,<to line>` prints the hook's view (the
interpreter's pc against the trace's) for a stretch of the trace.

**What the trace shows (DuckStation's convention, checked in r180).** One line per instruction:
`pc: word disassembly ; reg=0x... addr=0x...[0x...]`. The registers are the ones the instruction uses, sources and
destination, GPRs and GTE registers by DuckStation's names (`ir1`, `rt_0`, `flag`, `v0_xy`, ...), with their values
BEFORE it runs. hi and lo are never shown (mfhi/mflo show only their GPR). A load or store shows its address but not
its base register; a load also shows in brackets the memory it reads, raw, at its width (2, 4 or 8 hex digits). For
the I/O pages (0x1F801000-0x1F802FFF) the bracket is DuckStation's debug peek and always 0, not what the device
returned. For `lwl`/`lwr` the bracket is a plain 4-byte read from the unaligned address on, not the merged result
(`lwl v0, 3(a1)` at 80126BE3 shows bytes 80126BE3..E6). The line right after a load shows the register as it was before
the load (the console's load delay), also when that line is the `lwr` of an `lwl`/`lwr` pair, which on the console takes
the pending value.

**How the replay compares (r180).** Start: the save state's RAM, scratchpad and all 64 GTE registers (DuckStation's
state holds them in its CPU section: the scratchpad at 0xEF and the GTE registers at 0x4EF after the "CPU" name, in
mtc2 / ctc2 order; checked against the first `ctc2 rt_0..rt_4` lines, which show the state's values). GPRs are unknown
until the trace first shows them and then take its value (also the base registers, worked out as address less
offset). At each step the hook takes the trace line(s) for the instruction(s) the interpreter is about to run (a
branch and its delay slot are one interpreter step) and:

* compares every GPR and GTE register value the trace shows with the interpreter's; a difference is charged to the
  instruction that last wrote it, and the register takes the trace's value;
* for a load, writes the value the trace read into the interpreter's memory first (counted: a word that had to change
  is listed in taken.tsv with who last wrote it), then checks the loaded register after the step (sign and zero
  extension, width); a load from the I/O pages leaves its register unknown, to take the trace's value where it is next
  shown (counted as hardware register loads);
* for a store, checks the interpreter's memory after the step against the value the trace stored (sb/sh/sw/swc2);
  a store that starts DMA channel 6 (OTC, `ClearOTagR`: 0x11000002 to 1F8010E8) runs a model of it, the one DMA that
  writes RAM in a field frame;
* skips the BIOS (A0/B0/C0 calls, `syscall`) and interrupts, applying their stores to RAM, and follows exception levels
  (entries at 0x80000080 less `rfe`s): the code an interrupt handler calls in RAM is skipped too, and the replay comes
  back when the console has left the exception, either at the interpreter's pc (registers kept: all but k0/k1 after an
  interrupt, s0-s8/sp/gp after a call) or, when the console's `rfe` went somewhere else (a thread switch through
  ReturnFromException / ChangeTh, an interrupt in a branch delay slot that re-runs the branch), by re-seating the
  interpreter at the trace's pc with every GPR unknown. Likewise when the interpreter itself leaves RAM (a callback
  returning into the kernel). Each re-seat is counted by kind.

Categories of a difference: `alu`, `link`, `hilo` (the GPR after mfhi/mflo), `load`, `store`, `gte` (a GTE register
the trace shows, or a GPR read from one): the interpreter or pc/gte_core.c; `load_delay`: code reading a register in a
load's delay slot that gets the old value on the console (the interpreter has no delay slot; GCC's code never does it);
`cop0` (not modelled); `control` (the trace went elsewhere in RAM); `unknown` (an interpreter fault). Not compared, by
the trace's convention: the `lwl`/`lwr` pair rows (counted), the destination-only display after a load.

**Control (r180): two planted bugs, both found.** A copy of the generated interpreter with `srl rd, rt, 16` wrong when
bit 31 is set and `sh` wrong for the value 0x0100, replayed on the slot 8 trace: 105 `alu` rows, each charged to an
`srl ..., 16` (8017C9A8, 8017C9A0, 8017C9EC, 8002030C, ...), and 1 `store` row at the `sh` at 80020984. Without the
GTE seed (`--no-gte`) the same trace gives 3,322 `gte` rows (the registers set before the trace began); with it, 0.

**Result (r180, 23 Oct 2026): the interpreter is trustworthy on both traces end to end: no difference at all.**

| | Slot 8, one field frame | Slot 1, 4+ field frames |
|---|---|---|
| Trace lines | 248,163 | 1,254,753 |
| Lines the interpreter ran (rest: BIOS, interrupts) | 242,335 (97.7%) | 1,172,316 (93.4%) |
| Interpreter steps | 214,536 | 1,031,592 |
| Register values shown / compared / taken as first sightings | 387,819 / 385,872 / 1,906 | 1,732,459 / 1,730,178 / 2,178 |
| Loads checked / stores checked | 33,137 / 20,516 | 191,757 / 100,116 |
| Hardware register loads (values from the trace's next sighting) | 1,836 (591) | 2,109 (863) |
| RAM / scratchpad words taken from the trace | 0 | 0 |
| OTC DMA words modelled | 4,100 | 12,300 |
| `lwl`/`lwr` pair rows not compared | 40 | 102 |
| Re-seats: thread switch / delay-slot interrupt / back from the kernel | 1 / 0 / 2 | 1 / 0 / 2 |
| BIOS and interrupt stretches skipped | 7 (5,828 lines) | 17 (82,437 lines) |
| Mismatches, every category | **0** | **0** |

Nothing is left to triage: no real interpreter difference, no trace limitation and no harness limit shows as a row.
What this proves: over 2.1 million register values and 345,000 loads and stores of field code (library code with its
hardware polling, main-EXE and stage code, the GTE transform sequences with FLAG, OTZ and MAC0, `lwl`/`lwr`, mult/div)
pc/interp.c and pc/gte_core.c behave as DuckStation's CPU and GTE. What it does not: two states, both in the field; no
title, menus, battle or cutscenes (a trace from a boss fight or a cutscene would put more game code under it); the
load delay slot is only detected, not modelled (none was seen); devices are not compared (the replay takes their values
from the trace); CD and GPU DMA into RAM would show as taken words (none in these frames).

**History (r169, 22 Oct).** The first harness compared only 12,408 of slot 8's 248,163 lines: the first thread switch
(the B0 call 0x17, ReturnFromException, at line 17,356) left it waiting for a pc the trace never came back to. A local
variant with an `rfe` resync compared 296,464 values with 3,909 differences (slot 1: 1,336,059 values, 33,578
differences), all explained, none an interpreter bug: hardware reads the interpreter saw as 0 and the polling loops'
`andi`/`sltu` blamed for them, the GTE registers set before the trace (ZSF3, DQA/DQB and the rest: FLAG, OTZ, MAC0 rows
and the ordering-table slots the wrong OTZ chose), `lwl`/`lwr` display, registers across thread switches, two faults
where callbacks return into the kernel, and slot 1's 24,398 rows on the VSync counter wait at 8004250C. r180's
changes remove every one of them. The VSync rows were a harness fault, not a console effect: the skip stopped at the
interpreter's pc inside the interrupt handler when the handler's callback passed through that pc (seen at slot 8
line 19,710: a `jr ra` at 80042710 shared by the main loop and the callback); it now waits for the console to leave
the exception.

### What the differential tests cannot prove

* Coverage is what the frame loop reaches from the captured states: 117 of 298 translated and 208 of 594 matched
  functions. Functions only reached at boot, in menus with no captured state or from the stage code's own paths are
  not tested. More states (the title, menus, cutscenes) raise it.
* Results under stubbed hardware are marked `review`, not trusted.
* The matched C is tested through the port's thunks with its callees interpreted; the tests do not cover the port's
  shims (pc/psyq), the renderer or the sound.
* The interpreter is the oracle; the DuckStation replay backs it over two field traces (r180, no difference), not
  yet over the title, menus, battle or cutscenes.

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

**It needs deterministic runs first (r129, done 24 Oct: `deterministic` and `as_shipped` in pc_test_run.ps1,
`TWINBLADE_RAM_HASH` and tools/run_compare.py; docs/pc_port_log.md r129).** The same inputs must give the same frames. Known sources
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
