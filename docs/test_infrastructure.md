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
* Merges: `tools/hooks/pre-merge-commit` runs the same check on a merge that makes a merge commit (it sees every file
  the merge brings in). A fast-forward merge makes no commit and runs no hook, so run `make regress` in main after
  one. A merge that stops on a conflict is committed later with `git commit`, which runs pre-commit.

## 3. Line endings

`.gitattributes` keeps src/, include/ and every *.yaml LF in every checkout, whatever `core.autocrlf` says. Git for
Windows sets `core.autocrlf=true` system-wide, so before this rule a plain `git checkout -- <file>` in a worktree
rewrote a C file with CRLF, and GCC 2.7.2's cpp fails on CRLF (found 22 Oct while testing the hook). pc/ is left alone
(several pc/ files are CRLF in the main checkout).
