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

## 2c. Decomp tool fixes of r208 (26 Oct 2026)

The gaps the stage streams logged since r192 (r197, r199-r203, r205, r206 handoff paragraphs; recipes "Placement gaps
met by r200 / r201 / r203"). Placed cases were tested by putting them back to asm in the worktree
(tools/stage_bulk/unplace.py), re-placing them with the new tools and restoring the file. Merge 4b2d427; full
`make regress` 182/182, engine 140/140.

| Tool | Gap | Now (test) |
|---|---|---|
| put_func / place_stage | new declarations went above the file's first INCLUDE_ASM, which could be after the function (fp tables "undeclared", ~15 times); a name in an INCLUDE_ASM line or further down counted as declared | each draft's missing declarations go directly above its own INCLUDE_ASM (`place_one`), judged against the text above it only, drafts placed top down (sc07_007 801827E0: its two externs land above it, check OK) |
| put_func._func_name | `extern void (*D[])();` / `(*f)()` read as a function named `void`: the second one in a draft was dropped as a duplicate prototype | function pointers are variables; both carried (synthetic test) |
| put_func.missing_decls | a later definition's full header as the prototype broke earlier calls with fewer arguments (sc02_005 80186CA8); a variable the file defines (not extern) only further down got nothing | the draft's empty `T f();` keeps its empty list with the definition's return type (the full header only for a narrow parameter); the draft's extern for a later-defined variable |
| put_func.retype_guess (both tools) | the file's own guess of the function being placed: `extern T f()` with another return type, `extern u8 f;`, a non-extern prototype with another count (sc06_025 80184B50) or an empty one taken as zero parameters (sc03_002 801821B4, "parameter count differs"); `extern s32 f();` for a void definition whose caller uses the value | the return type follows the definition; a void one keeps `extern void` with `((s32 (*)())f)(` at the caller (26 Oct ruling, r201's voidput.py); the prototype becomes the definition's header, or `T f();` |
| put_func | no K&R form (r202's kr.py by hand); static inline helpers went with the declarations; no `--help` | an argument-count error on a placed definition retries it K&R; inline helpers in front of their function; usage text |
| place_stage | crashed on a draft whose function has a leading comment (sc02_003 8018762C, sc03_029 80186448) | the comment goes in front of the function (sc02_003 8018762C unplaced and re-placed: file byte-identical to HEAD) |
| place_stage | silent or log-only deferrals; two drafts declaring one table differently; a file scalar the draft needs as an array; AF / `#include "psyq.h"` left in a file when nothing placed (sc06_025) | each deferral worded with its first error or the clashing symbol and both forms (retried next round); `extern T D;` retyped `D[]` with other uses `D[0]`; a group that places nothing restores the file whole |
| cmp_func | a negative %lo addend (`<%lo(g_SoundChan+-0x24)>`) did not parse, so the word stayed masked: r206's false MATCH | parsed: 0x800A46C4 vs the original's 0x800A4694 now differs |
| cmp_func | phantom / alias symbols passed as MATCH and failed the link (sc03_030 8017E430, sc01_005 8018203C, sc03_024 80184CB0, sc06_014 8017E8D8) | a MATCH whose relocation symbols are absent from the image's last link map (build/.../*.map) is "differs; not in the image's link: SYM" (sc06_014 8017E8D8 with D_80126CB4 taken out of the stage symbols) |
| stage_clone | splat writes no .s for a function that has C, so after any re-split a matched function was never a clone source (r201's 24 hand clones; a fresh worktree had almost none) | tokens from the built object (build/src/stg/<stage>.o), bounded by the symbol's size, addends named by exact address as splat would; 23,431 sources (sc06_024 80181EF4 drafted from sc06_022 8017FA1C, which has no .s: MATCH, placed back, check OK) |
| stage_clone | offset move took the nearest pair BELOW (sc06_024 80181EF4: D_801AF7B4's pair for D_801AC420) | nearest pair either side: D_sc06_024_801AC420 |
| stage_clone | target declares a global with another type (u16 vs s16, array vs scalar D_800B9A02); source static inline helpers dropped; psyq.h clashed with targets declaring LoadImage | the target's line stays and the body reads the global as the source's type (`(*(s16 *)&D)`, `((u16 *)&D)`); inline helpers the body calls are copied; psyq.h dropped when the target declares every library call the body makes (its lines carried) |
| clone_all | `--help` ran a full unfiltered pass into a folder named `--help` | argparse: `--help`, a root starting with `-` refused, `--passes N`, `--allow-pending` |
| stage_clone / clone_all | sources placed under a pending ruling were cloned | tools/stage_bulk/pending_rulings.txt (seeded from r199's pending list less K&R and static inline); skipped unless `--allow-pending` |
| splat symbols | sc07_007 801827E0 needed a label inside splat's blob D_sc07_007_80199AC4 | `D_sc07_007_80199D4C` in stg/symbol_addrs_sc07_007.txt (a comment there must not contain `word:`, splat reads it as an attribute); 801827E0 placed |
| new: gte_twins.py | r140's PC build broke on a gte.h macro with no PC twin | `make gte-twins` (report only, exit 1 on a gap): 55 macros, 5 without a twin in pc/gte_pc.h: gte_ldv3c, gte_stsxy0, gte_stsxy01, gte_stsxy1, gte_stsxy3c (used in src/stage and many src/stg files) |

Clone pass over every stage (`clone_all --par 4`, build/work/r208c in C:/tw/tools): 0 functions of a matched shape
still asm, so nothing to place: every census-miss case named by the streams (sc05_001 8017F1E4, sc05_018 8017F990,
sc06_000 80182888, sc06_033 8017D6CC, sc06_018 8017D874) had been placed by hand. 178 stage functions are left in asm.

**Not done (reasons):**
* sc05_001 8017F1E4 vs sc02_026 8017D9D8 is no census miss: two immediates differ (`lui a1,0x14 / ori 0x3FFF` vs
  `0x8 / 0xFFFF`). A near-copy mode (clone with a constant patched) would be a feature of its own.
* Two drafts of one batch declaring one table differently (SV8[] vs s16[]) are not reconciled: the second is deferred
  with both forms named and goes in next round against the first's declaration.
* Stage -O0 translation units: out of scope (a card of its own).

## 2d. Stage -O0 translation units (r209, 27 Oct 2026)

Four stage images hold a run of functions built without optimisation, which no -O2 file can match: SC03_014 / SC03_015
0x80183CF0-0x801848E4 (16 functions each) and SC03_118 / SC03_119 0x80183178-0x801838A4 (10 each). A scan of every
image's own code for the -O0 prologue (`addu fp,sp,zero`, 0x03A0F021, in a function's first 12 words) finds no other
(`python -I tools/stage_units.py` lists them). Merge 7be489e (gate 182/182, engine 140/140).

| Piece | What it does |
|---|---|
| tools/stage_units.py (new) | `o0_runs()` finds the runs; `files(stage)` (`<stage>.c`, then `<stage>_o0.c` and `<stage>_post.c` where they exist), `stage_of(file)`, `unit_of(file)`, `file_of(stage, func)`, `stages()`, `is_o0(file)`, `opt_of(func)` (-O0 when its .s is in an `_o0` folder). Every tool that needs a stage's files asks here |
| tools/gen_stage_cfgs.py | a stage with a run gets three `c` subsegments: `<stage>` up to the run, `<stage>_o0` (the run), `<stage>_post` (the -O2 code after it); one run per stage (two would stop it); the other 135 configs are unchanged byte for byte |
| Makefile | `$(BUILD)/src/stg/%_o0.o: OPT_FLAGS := -O0`; STG_RULES links `src/stg/<stage>_o0.c` and `_post.c` when they exist; JTBL_ASM reads the stage's `asm/stg/<stage>` for them |
| src/stg | split once by tools/stage_bulk/split_o0.py: the new files start with the old file's includes, every declaration above the cut and a prototype for every function the earlier part defines (calls convert their arguments as in one file); INCLUDE_ASM lines point at `nonmatchings/<stage>_o0` / `_post`. Symbols and the check stay the stage's (func_sc03_014_80183CF0, check-sc03_014) |
| stage_clone | reads every unit's asm folder and object, de-duplicates the repeated header chunks (gcc 2.7.2 rejects a typedef given twice: the first clone pass compiled nothing); no "no asm file" line for a function already in C (18,280 lines on a fresh split) |
| place_stage, put_func | the draft goes to the unit holding its INCLUDE_ASM; the syntax screen of an `_o0` file runs -O0; target_of maps `_o0` / `_post` to check-<stage>; a one-line typedef the file has only further down is moved up above the draft (r174's Obj118 below sc03_118 801832E0) |
| cmp_par | compiles a draft -O0 when its function is in an -O0 unit (so clone_all works there) |
| regress, stage_progress, stage_census, coverage --progress, unplace, m2c_stage, sweep, fix_decl | count / map the extra files as the stage's (fix_decl takes a unit name, `sc03_014_o0`) |

Tested: the four stages OK after the split with the code unchanged, full `make regress` 182/182 and engine 140/140;
then r174's three -O0 matches placed by place_stage into the `_o0` files (cmp_par chose -O0 itself) and a clone pass
filled 28 twins. r211 (27 Oct): variant_search, auto_match, regdump, stage_bulk/fixdraft and stage_bulk/hand compile a
function of an -O0 unit at -O0 when no flag is given (`stage_units.opt_of`, which now also knows a placed -O0 function
by the `_o0` file holding it). **Not done:** a stage with two -O0 runs would need a fourth and fifth unit (none exists).

## 2e. Stage park round tools (r211, 27 Oct 2026)

Merges 50c4e5f and a607038 (gates 140/140; full `make regress` 182/182 and engine 140/140 on the branch before each).

| Piece | What changed |
|---|---|
| variant_search, auto_match, regdump, stage_bulk/fixdraft, stage_bulk/hand | default optimisation from `stage_units.opt_of(func)` (-O0 for an `_o0` unit's function, else -O2); an explicit -O0 / -O2 still wins. Tested on an unplaced sc03_118 80183178: MATCH by default, 19 lines at -O2 |
| stage_clone | an offset-moved symbol takes the target's own name form (`tgt.sym_name`: the village's `D_<addr>`, r210's gap); `--all` includes the village |
| stage_bulk/clone_all | the village target compiles against asm/stage (TWINBLADE_OVL=stage) and places into src/stage; stage names may follow `--par` / `--stages` (parse_intermixed_args). Tested by unplacing func_80187690: clone_all placed it again |
| stage_bulk/place_stage | a `static inline` helper carried by several drafts of one batch (twins matched with one helper set) goes in once, in front of the first by address (each copy used to defer the batch as a redefinition). Tested on the sc06_032 / sc06_033 clone batches: 2/0 each, identical to placing them one at a time |
| stage_census | docstring: the seam is 0x8017BE9C |

m2c and jump tables (r213, 27 Oct; merge 911cf1a): `tools/stage_bulk/m2c_stage.py` now reads each `jtbl_*` table from the stage's data asm (asm/stg/<stage>/data, or asm/stage/data), writes a copy of the function with an `.Ljt_<addr>` label before every case target and the table as a rodata `.word` list (r211's mkjt.py), and runs m2c on that; functions without a table pass through, and a "Decompilation failure" result is skipped. Tested on the village: func_801549F8 gave no draft before and now a clean 21-case switch draft. func_80171B4C, func_801734BC and func_80159A20 get past the jump table but m2c still reads an unset $a0 (existing limitation, no draft). The two split stages tried (sc06_032, sc03_124) have no INCLUDE_ASM left in their stage files, so they gave 0 drafts.

## 2f. Round helpers made repo tools (r222, 31 Oct 2026)

Merge 5fad3337 (the dispatcher's yes; `make regress` 182/182 and engine 140/140 on the branch). Each tool's docstring has
its usage line.

| Piece | What changed |
|---|---|
| put_func, stage_bulk/place_stage | `extern void (**D)();` is a declaration of D (the fn-pointer regexes allow `*+`); it was read as a `void` declaration and dropped. Tested by re-placing r216's func_8017849C draft with the line removed from the file |
| stage_bulk/place_stage | "too few / many arguments to function f" for an f already in C (or prototyped in the file): f's ANSI definition goes K&R (word parameters only; a narrow one is refused), its prototypes in the file and in f's file become `T f();`, then `make check` alone; on OK the drafts go in again, else the file is left as it was. Names in `<dir>/_knr.txt` |
| stage_bulk/collect.py | `collect.py <stubs> <out> [--skip f] [--strict]`: the stubs of a fan-out round still INCLUDE_ASM in src/, minus untouched stubs, HELD / `__asm__` drafts and drafts with more than one steering line; then cmp_par + place_stage |
| stage_bulk/tricks.py | `tricks.py [--base main] [--strict] [globs]`: functions new against the base with steering lines; "NEEDS A RULING" when more than one counts (marked frame-pad locals are natural and a mark repeated in copied blocks counts once, the 30 Oct rulings; `--strict` counts as r216 did) |
| stage_bulk/hold.py | `hold.py <held_dir> <func>...`: placed functions back to INCLUDE_ASM (any area), their C saved; then `make split` |
| stage_bulk/batches.py | `batches.py list <list.json> [--src G] [--m2c D] [--prior F]`, `make <list.json> <tiers> <out.json>`, `show <out.json> <TAG>`: r216's work list and per-agent batches for any area |
| auto_match | `--area stage / stg / ovl [--image NAME]`: the engine and village, the split stages, the mode overlays; candidates compared in their own image (TWINBLADE_OVL), apply checks the images it changed. The INCLUDE_ASM pattern takes the macro's two arguments (it saw 59 of the EXE's 153; the default-limit EXE scan is unchanged) |
| port_accuracy_check | result.json, report.txt and docs/port_accuracy.json written with LF |

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

## 7. Input movies, the map log and the coverage report (r226, 1 Nov 2026)

The tools for LuciDin's chapter-by-chapter playthrough (docs/port_as_shipped.md V1, V2, P1). How-to for the player:
docs/recording_and_marks.md.

* **Input movie** (pc/psyq/movie.c). `input_record = 1` writes
  `build/pc/recordings/movie_<date>_<time>.tbm` from the game's start:
  * **Header:** text. It holds the exe's PE stamp and size, the start time, the memory cards (copied beside it as
    `_card1.mcd` / `_card2.mcd`, with an FNV hash), the RAM-hash rule, and every game-changing setting (`as_shipped`,
    `deterministic`, every key of pc/settings.c `shipped[]`).
  * **Records:** one 16-byte record per pad poll (pc/psyq/pad.c `pad_poll`):
    * the controller's buttons with a script's (`TWINBLADE_TEST_BUTTONS`), and `TWINBLADE_TEST_PRESS`'s buttons;
    * the player's buttons through the bindings;
    * the port's own keys (F1, F2, the mark key);
    * the analog flag and the four stick bytes;
    * whether a controller was connected (PadInfoMode's answer);
    * what the game was given, and the poll's vblank.
  * **RAM hashes:** written to `.hashes` (vblank, ram, spad, seed, sp). The default is every 60 vblanks by the
    spadstack rule (`ram_hash` / `ram_hash_rule` in the ini or environment win).

  Recording only reads, so it is allowed in As Shipped.
* **Playback** (`input_play = <.tbm>`, through `tools/input_movie.py play <.tbm> --mode windowed|borderless`):
  * the keyboard and controller are not read (settings_scripted);
  * every poll takes the recorded values;
  * the recorded settings are applied over the ini (`settings_override`; the window's settings are not);
  * the cards start from fresh copies of the recorded ones;
  * the game compares each RAM hash and each poll's output with the recording.

  The verdict uses port_accuracy_check's rule: main-loop frames (sp 0x801FFFF0) must be equal. Deep-wait frames hold
  the host wrappers' leftovers (F4), which differ even between two replays of the same build, so they are counted
  apart. `input_movie.py` prints IDENTICAL or DIFFERS and exits 0 only on IDENTICAL.
* **Scene line** (pc/psyq/maplog.c, always on): `scene:` in run.log each time a map goes live (0x800B9A10). It gives:
  * the map id and the stage image (the field overlay's table at 0x800D34AC) and its name;
  * the entrance and the spawn point, and where Musashi stands;
  * the story progress, day, clock, HP and BP;
  * the number of event flags set, the demo flag, the vblank and the wall time.
* **Map log** (`map_log = 1`, the default): `build/pc/maplogs/maplog_<date>_<time>.txt` (`_replay` for a playback),
  one block per visit:
  * `visit`, `entered`;
  * `music group` (0x800A4EF0);
  * `xa <file> +<sector> file channel` and `cdda track` (hooks in pc/psyq/cd.c);
  * `actors`: kind:handler:spawn-kind*most, from the stage's actor array at 0x801202A0 every 30 vblanks;
  * `flags`: the story progress and the event flags changed, both areas;
  * `mark`;
  * `exit`: the destination record the game puts in force at 0x800AE6B0 (stage code marked), with Musashi's position;
  * `left`.
* **Mark key** (`map_mark_key`, default PAUSE; it is not a bindable key) and the controller's **L3**
  (`map_mark_button`, LuciDin 2 Nov; read from the controller before the bindings, still given to the game). Each
  press writes:
  * a `mark` line;
  * a screenshot, `build/pc/marks/<stamp>_markNN.bmp`;
  * a 2 MB RAM capture (`map_mark_shot`, `map_mark_ram`);
  * a beep (`map_mark_beep`).

  The key goes through the movie, so a playback writes the same marks.
* **Coverage report** (`tools/port_coverage.py`): reads map logs, run logs and movie headers, and reports:
  * maps reached against docs/map_ids.md's 163, per archive, with entrances, exits and time; demo-only maps apart;
  * XA streams and channels, and CD audio tracks;
  * the boss flags 0x8A-0x8E;
  * the ending maps;
  * the marks, and playback verdicts.

  `--json` writes docs/map_coverage.json (one entry per map) for the tracker.

Checked (r226, the worktree build, the secondary monitor):
* port_accuracy_check `--hash-rule spadstack` PASS, all 4 modes x 3 baselines, both with `MAP_LOG=0` and with
  `INPUT_RECORD=1`;
* the check's route recorded and replayed IDENTICAL in windowed and borderless (513 main-loop hashes, 5820 polls);
* a Pause mark replayed at the same vblank, with a byte-identical RAM capture and screenshot;
* the A/B against main at 4:3 and 16:9: no difference.

## 8. Cleaning build/pc (`tools/clean_build.py`, r260, 4 Nov 2026)

Port test runs and captures grew build/pc to 35 GB before r259 (docs/disk_audit.md) cleaned it. This tool keeps it from
growing again. It is a **dry run by default**; deletion is permanent and needs `--yes` and LuciDin's own yes.

```
python -I tools/clean_build.py [--root DIR] [--days N] [--list] [--show-keep] [--report FILE] [--yes]
```

* **Candidates** (one unit each): `build/pc/test_runs/*`; `build/pc/captures/range_NNN` and every file of one
  `capture_NNN` together; `build/pc/accuracy/<stamp>` folders; the contents of `build/pc/shots*`; `build/work/*`.
* **Never touched:** `build/pc/recordings*`, `build/work/archive`, `baseline_card.mcd`, the doc pictures in
  `build/pc/captures` (png, debug_menu.bmp), and everything outside the list above.
* **Kept** (the reason is printed): the newest file in it is younger than `--days` (default 7); its name appears in
  `docs/` (any text file, including docs/port_accuracy.json; docs/disk_audit.md is ignored since it names everything);
  its name appears in a tools/ top-level script or the Makefile; a wildcard such as `r105_*` in docs covers every name
  with that prefix; or it is, or holds, a junction.
* **Safety:** reparse points (junctions, symlinks) are never followed or counted, and a tree that holds one is kept
  and refused at delete time, so a worktree junction cannot make it delete main's disc/, .venv or tools/. It deletes
  only the listed units, prints each one removed and the space freed, and keeps going if one fails.
* `--report FILE` writes a short markdown table (items, files, size, kept) per group.
* A full scan of main's build/ takes about 5 minutes (Windows, ~100k files).

## 9. The hardware renderer's 5-bit blending (`tools/blend_check.py`, r263, 4 Nov 2026)

```
.venv\Scripts\python.exe -I tools/blend_check.py [--exe build/pc/Twinblade.exe] [--true-color-1] [--keep DIR]
```

* **What it proves:** at true_color = 0 the hardware renderer's semi-transparency (all four modes, stacked blends,
  STP and non-STP texels, raw and modulated textures, a blend right after an opaque draw, tiles, sprites, lines)
  gives the software renderer's picture in every pixel at render scale 1 and 2, and VRAM holds only 5-bit values
  (every channel a multiple of 8). A synthetic capture is replayed with `--replay --renderer both` (dither 0: the
  hardware renderer does not dither); the window opens on the secondary monitor.
* **What it cannot:** it trusts the software renderer as the console's reference (raster.c's blend() and mix15(),
  audited against psx-spx in docs/port_accuracy.md); it does not cover narrowed widescreen 2D, the mask bit,
  dithering or render scales above 2. `--true-color-1` only reports how far the 8-bit path is (not judged).
* Exit 0 = PASS. The exe before r263 fails it (26,704 of 76,800 pixels).

## 10. The port accuracy check and the test levels (r247, 4 Nov 2026)

tools/port_accuracy_check.py is every port card's gate (docs/port_accuracy.md section 7 has its areas and history).
Since r247 it runs three window modes (windowed, borderless, fullscreen) with both renderers (software, the As Shipped
one; hardware, a logged exception) on three profiles (`console` = As Shipped, `console_card_fast`, `fast`), and each
run plays a 2.5-minute route LuciDin recorded on that profile (dialogue, map changes, a debug-menu warp on the fast
profiles, combat), from a route file (tools/port_accuracy_routes/<profile>.txt) as an input movie.

**Which level a card runs** (LuciDin, 2 Nov; the same words as the "Test level" paragraph of the Standard card brief in
docs/dispatcher_handoff.md):

| Level | Command | Runs | Time | For |
|---|---|---|---|---|
| No game run | - | 0 | - | docs, tracker, tools that do not build the game, launcher text only (launcher_check if the launcher changed; `make regress` if src/ or the build changed) |
| Hash Test (r282) | `port_accuracy_check.py --hash-only` | 6 turbo replays: 3 profiles x 2 renderers | ~15-25 s | a quick look while working: RAM, shots and replay only. NOT a gate for a card: no display, Alt+Enter or timing |
| Quick Test | `port_accuracy_check.py --quick` | 1 turbo, then 1 real-time: windowed, `console`, software | ~2 min 40 s | changes that cannot reach game RAM, the picture or timing: exe resources (icons), settings plumbing whose default is unchanged, logging off by default, launcher behaviour |
| Comprehensive Test | `port_accuracy_check.py` (or `--comprehensive`) | 6 turbo, then 18 real-time: 3 profiles x 3 modes x 2 renderers | ~5 min 15 s for all but the exclusive runs, then ~8 min hands off (45 min before r282) | anything touching game code, src/ the PC build compiles, the shims, the recompiler / gen.py, the renderers, window / display / input / pacing code, timing, the memory card or RAM; plus the A/B at both aspects where the picture can change. When unsure, Comprehensive |

The report's first line names the level. The three hardware full-screen runs come last: the check puts the game in
front (DXGI's exclusive full screen needs the focus), so the PC must be left alone from the report's "HANDS OFF" line
to "hands off over". While LuciDin uses the PC, `--exclusive skip` runs the other 15 and says so; `--exclusive only`
runs the three later. A Comprehensive Test is whole only with both.

**Turbo and side by side (r282, LuciDin 4 Nov: the tests dragged the project).** `replay_turbo = 1` (a file-only test key, pc/settings.c; it needs `input_play`, and As Shipped, the launcher's tabs and a game without a movie never see it) drops the host's waiting from a replay: no wait for the 60 Hz tick, no monitor watcher, no window, no picture to it, no controller. Every emulated vblank still runs in order, with its CD, card, sound chip and callback work. The check runs in three stages: turbo (ram, shots, replay; 15-35 x real time), the 15 real-time runs up to `--jobs` (12) at a time, muted, each with its own folder (`TWINBLADE_RUN_DIR`: run.log, shots), then the exclusive runs one at a time. The real-time runs still compare every area: display, Alt+Enter and timing need real speed, and their hashes are what shows turbo and real time agree on each build. `--no-turbo` is the check as before r282, one run at a time. `--write-baseline` and `--rebase-ram` never use turbo. `--sound` adds the area "sound": the MD5 of what the sound chip rendered must agree across a profile's runs, turbo and real time (RAM hashes do not see the sound chip). `tools/input_movie.py play --turbo` plays any movie the same way: `movie_20261102_120120_r266` took 192 s, IDENTICAL 826 / 826.

**What depends on real time** (r282, every clock read in pc/ gone through; the game thread's only host wait is `window_wait_vblank`):

| Where | What | In turbo |
|---|---|---|
| pc/win/window.c | the 60 Hz tick, the window's messages, the hand-over to the screen | the wait and the hand-over go, the messages stay |
| pc/win/vblank.c | the monitor's refresh, for pacing | not started |
| pc/win/audio.c | the sound card's own thread; the ring drops frames when full and feeds nothing back; `spu_render` runs per vblank, before it | `audio = 0` from the check; the chip still renders each vblank |
| pc/psyq/cd.c, card.c, stream.c, mdec.c, spu.c, voice playback | counted in vblanks and sectors, no clock read | unchanged |
| pc/psyq/pad.c (row sounds), custom_title.c (title pick) | clock-seeded picks, only without `deterministic` / with several titles | deterministic in every test |
| pc/psyq/gpu.c, raster.c, voice.c, hw_render.c, maplog.c | clocks for log lines alone | unchanged, nothing reaches the game |
| time() in movie.c, state.c, maplog.c | file names and header text | unchanged |
| pc/win/crash.c | the watchdog, 5 s without a frame | unchanged |
| pc/win/sony_pad.c | the controller's threads; rumble | not started: a replay does not read it, and must not buzz it |

What truly needs real time, and stays so: **timing** (the tick's rate and resets over the whole route), **display** (the grabs: what the window shows), **Alt+Enter** (a real mode change mid-run) and the **exclusive** runs (a real swap chain in front).

**Timing's one exception (r267, 5 Nov):** a clock reset on the very first line of the frame log does not count: that tick is the window's creation (104-113 ms on 7 software runs of the first daily test, 20261105_021559, with the rate in tolerance and the steady part clean). Every later reset counts, the boot's ticks included.

**What a PASS proves**: game RAM, scratchpad and the rand seed equal on every main-loop frame (sp 0x801FFFF0) to vblank
8900, in all 18 runs, against one baseline per profile (the renderer must not change game RAM); every shot
byte-identical to that renderer's set; the window's size, the 4:3 picture, black bars and a grab equal to the game's
shot near it; the tick's rate within 0.05 %; Alt+Enter leaving the game untouched; the replay giving the game the
recorded buttons. **What it does not prove**: console accuracy past r189's audit. The tail's hashes are this build's
own, a regression guard; nothing compares these routes with a console or DuckStation. The deep-wait frames (loads,
the logo movie) are counted but not compared (card F4).

**Gate wording for card briefs** (r247):
* Quick Test: "port_accuracy_check --quick (Quick Test: windowed, default baseline, software renderer) PASS; say why
  the change cannot reach game RAM, the picture or timing."
* Comprehensive Test: "port_accuracy_check (Comprehensive Test: 3 modes x software + hardware x 3 baselines, 18 runs,
  LuciDin's recorded routes to vblank 8900; the hardware full-screen block hands off, or
  --exclusive skip now and --exclusive only later) ALL PASS, plus the A/B at 4:3 and 16:9 where the picture can
  change."

**Recording a route** (only when the routes have to change; LuciDin plays): `--record-route <profile> --debug-menu`
starts the game borderless on the secondary monitor in the check's own setup (As Shipped, the window settings fixed,
a copy of the pinned card, the debug menu's key on R3 / F1 as a logged exception) and records every pad poll from cold
boot (r226's input movie) until he closes the window or vblank 9000 (2.5 minutes; `--route-vblanks N`). Pause twice,
7-20 s each (the pause menu or a waiting dialogue): the tool places the grabs and the Alt+Enter round trip in the
still stretches it finds, and refuses a route without one of at least 7 s. Replay it once (`--profiles <p> --modes
windowed --renderers software`) and compare its hashes with the recording's run.log before storing; then
`--write-baseline --allow-change "<reason>"` with LuciDin's yes. (`--record-tail` / `--splice-tail`, with
TWINBLADE_TEST_LIVE_AFTER, continue r129's scripted route by hand instead; kept, not used by the stored routes.)

Checked (r247, the worktree build of main 1fafb279 + r247, the secondary monitor): the three routes replayed exactly against LuciDin's live runs (796 / 754 / 790 main-loop frames); the hardware renderer's RAM equal to the software baseline on every profile; baselines stored with every run of a profile agreeing (20261104_042341, 20261104_090345); the whole Comprehensive Test against them 18 / 18 PASS (20261104_050223, 20261104_091116); before the routes changed, the fixed settings and the folded Alt+Enter left r129's route equal to its baseline, and the three old baselines' frames came out identical with the new matrix; make regress 182 / 182; launcher_check PASS.
