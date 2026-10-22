# Decomp pilot: one new stage, throughput, two streams (r143, 21 Oct 2026)

The census (docs/decomp_census.md, r141) priced the stage tail on assumptions. This pilot measured them on one untouched
stage, SC02_031 (Steamwood, the forest), at Opus medium, alone on the account (no other session ran), from 13:31 (just
after a 5-hour reset, so the 5-hour bar is this session's alone) to the end.

**Weekly points** are percent of the Weekly all-models bar at Max 5x (100 points = one full week). That bar moves in
whole percent, so the finer 5-hour bar is converted: over the usage log's Opus sessions one weekly point is about 7.5
points of the 5-hour bar (r127 7.7, r128 8, r133 8.5, r135 7.3, r137 6.7, r138 6.7); this session's own weekly tick
(77 to 78 between the 5-hour readings 4 and 5) agrees.

## Why SC02_031

194 functions of its own: 39 clones of matched village code (20 %, the tail's average: 10 of them empty stubs) and
155 others in 143 distinct shapes, whose size spread (1-8 / 9-16 / 17-32 / 33-64 / 65-128 / 129-256 / 257+:
8 / 15 / 27 / 29 / 15 / 7 / 1 %) is the tail's own. Only one shape is also a village leftover. The village variants
(SC04_015, SC03_124) have more clones, but half their shapes are the village functions r132-r138 already failed, which
would bias the cost toward the hardest code.

## Part 1: what one stage costs

### The steps

| Step | What | Result | Wall | 5-hour bar |
|---|---|---|---|---|
| a | `tools/gen_stage_cfgs.py` writes `stg/<stage>.yaml` (the engine a `bin` piece, the own code `c`, the data `data`; symbols prefixed with the stage, `func_sc02_031_8017BEA4`, engine and EXE names plain from `stg/symbol_addrs_engine.txt` and a first splat pass), `make check-<stage>` / `make check-stg` | byte-identical at the first build | 4 min with the tool changes | 2 (with all the reading) |
| b | `tools/stage_clone.py`: a stage function whose census shape equals a matched village function's gets the village C, renamed by walking the two asm files side by side | 29 / 29 placed (and 10 stubs splat wrote as C) | 2 min | 0 |
| c1 | the r132 bulk pass (`$env:TWINBLADE_STG = "sc02_031"; tools/stage_bulk/round.ps1 <name>`): m2c drafts, levers, placement; three rounds | 79 + 5 + 0 = 84 placed | 4 min (machine) | 0 |
| c2 | hand rounds on the near misses (`tools/stage_bulk/hand.py`), stopped after two rounds each | 43 tried, 28 matched, 15 parked | 15 min | 3 |
| | **SC02_031** | **151 / 194 in C** (43 asm: 15 parked, 28 untried) | **25 min** | **5 (about 0.7 weekly)** |

### By size (functions; stub = an empty function splat writes as C)

| Size (instructions) | Functions | Stub | Clone | Bulk | Hand | Parked | Untried |
|---|---|---|---|---|---|---|---|
| 1-8 | 25 | 10 | 2 | 12 | 1 | 0 | 0 |
| 9-16 | 54 | 0 | 26 | 25 | 1 | 2 | 0 |
| 17-32 | 40 | 0 | 1 | 24 | 11 | 4 | 0 |
| 33-64 | 43 | 0 | 0 | 20 | 13 | 5 | 5 |
| 65-128 | 21 | 0 | 0 | 3 | 2 | 3 | 13 |
| 129-256 | 10 | 0 | 0 | 0 | 0 | 1 | 9 |
| 257+ | 1 | 0 | 0 | 0 | 0 | 0 | 1 (1 511 instructions) |
| all | 194 | 10 | 29 | 84 | 28 | 15 | 28 |

Of the 155 functions that were not clones: bulk 54 %, hand within two rounds 18 %, left 28 % (parked 10 %, untried
18 %, nearly all over 64 instructions). Hand success by size: 17-32 11 of 15, 33-64 13 of 18 (48-53: 5 of 6), 65+ 2
of 5.

### Cost per distinct shape (measured)

| Kind | Cost | Notes |
|---|---|---|
| Clone of a matched function | ~0 | tool time only; 29 of 29 compiled and placed first time |
| Bulk | ~0 | about 4 minutes of machine time a stage, no tokens to speak of |
| Hand, two rounds at most | 0.009 weekly a try, 0.014 a match | 3 points of the 5-hour bar for 43 tries; small and medium functions |
| Hard (parked or over 64 instructions) | not measured here; r138: about 0.1 a match | r138 (Opus high, 101-118 instructions, the village's leftovers) matched about 10 per weekly point |
| Driving a stage (split, clone, bulk, place, check) | about 0.04 a stage | under one point of the 5-hour bar |

### Projection to the whole tail (7 543 distinct shapes), rebuilt from the pilot

The pilot's split applied to the tail: 54 % bulk (4 070 shapes), 18 % hand within two rounds (1 360), 28 % hard
(2 110); hand tries include the parked ones (28 %, 2 110 tries).

| Part | Low | Likely | High |
|---|---|---|---|
| Infrastructure and driving (133 distinct images; the configs are done, see below) | 5 | 8 | 15 |
| Hand tries, 2 110 (0.006 / 0.009 / 0.02 each) | 13 | 20 | 42 |
| Hard shapes, 2 110 (0.05 / 0.1 / 0.2 each) | 105 | 211 | 422 |
| **The stage tail** | **about 125** | **about 240** | **about 480** |
| What the tracker counts as left (about 1 200, the hard leftovers of the engine, packages, overlays, EXE; the census's rates) | 60 | 120 | 240 |
| **Everything left, 5x weekly points** | **about 185** | **about 360** | **about 720** |

(The census said 260 / 510 / 1 010: the easy part is cheaper than assumed and the hard part smaller, 28 % not 46 %.)

| Plan | Weekly pool for decomp | Low | Likely | High |
|---|---|---|---|---|
| 5x, the whole bar | 100 | 1.9 weeks | 3.6 weeks | 7.2 weeks |
| 5x, half the bar (port and rips take the rest) | 50 | 3.7 | 7.2 | 14.4 |
| 20x, planning pool 3.5x | 350 | 0.5 | 1.0 | 2.1 |
| 20x, pessimistic pool 2x | 200 | 0.9 | 1.8 | 3.6 |

The 20x rows hold only if the pool can be spent: see Part 2 (one stream cannot spend 350 a week).

What would move it: the hard rate (the biggest line; the 65+ instruction functions are only sampled here: 2 of 5 at
the easy rate); the hard share (shared shapes are matched once and copied, so a stage done later finds more of its
shapes already matched); context growth (a long session pays more per turn: start fresh per stage or two).

### What scaling to 140 stages takes

* **Configs: done and proven.** `gen_stage_cfgs.py --split` on all 139 other images (in the scratch worktree of Part
  3): 6.7 minutes of splat, then `make -j8 check-stg` 1.2 minutes, **139 / 139 byte-identical** with no hand fixes. Only
  SC02_031 is committed; adding the rest is one command plus about 0.4 MB of symbol files and 139 source files (and
  1.2 minutes on every `make check`). **Done in r145: all 139 committed, see Part 4.**
* **Clones: generalise the reference.** stage_clone.py copies from the village only. For the "shared" class (14 441
  functions whose shape occurs elsewhere) it should copy from any matched function in src/stage or src/stg (index every
  split stage's functions by census shape once, about 10 seconds), so each new match lands in every stage that has the
  shape. A small card.
* **Bulk and hand:** as here, a stage at a time (`TWINBLADE_STG`). The bulk pass is machine time; the hand rounds are
  the cost.

## Part 2: throughput of one stream

| Session | Model | Ran | Weekly points | Points an hour | Functions | Points a function |
|---|---|---|---|---|---|---|
| r131 packages, pass 3 | Opus medium | 2.5 h | +2 | 0.8 | +61 | 0.033 |
| r132 stage bulk | Opus medium | 3 h | +1 | 0.3 | +1 247 | 0.001 |
| r133 stage hand rounds | Opus medium | 2.5 h | +2 | 0.8 | +110 | 0.018 |
| r137 packages, larger | Opus medium | 1.5 h | +3 | 2.0 | +49 | 0.06 |
| r138 stage, larger | Opus high | 1 h | +3 | 3.0 | +31 | 0.1 |
| r143 this pilot, all three parts and the doc | Opus medium | 43 min (13:31-14:14) | about 1.1 (5-hour 0 to 8; weekly 77 to 78) | about 1.5 | +141 placed, 28 by hand | 0.008 (hand 0.014) |

(Weekly deltas are whole percents of a shared bar: ±1 point for any one session.)

* **One decomp stream burns about 1 to 3 weekly points an hour of active work**: about 1-1.5 at Opus medium on bulk
  and easy hand rounds, 2-3 at Opus high on hard functions. Bulk-heavy hours are cheap because the machine does the
  work (r132).
* **Unattended stretch:** in auto permission mode this stream needed LuciDin for nothing between the start and the
  commit: no prompts, no model switch. What stops a stream: the commit (a yes in the session), a model switch, the F:
  backup drive, and the context (this session took about 8 000 tokens a minute; it compacts itself at 97 %, but every
  turn costs more as the context grows, so a fresh session per stage or two is cheaper). A stage of this size takes
  about 30-60 minutes (the 28 untried large functions would add to it); a stream that commits once per stage can run for
  hours with one yes an hour.
* **At most, one serial stream** at 1.5-3 points an hour: 12 hours a day is 125-250 points a week, 16 hours 170-340.
  So one stream can use the whole 5x bar (100) in 35-70 hours of work, and **the pessimistic 20x pool (200) roughly**,
  but **not the 3.5x pool (350)**: that needs about 120-230 stream-hours a week, two streams most of the day.

## Part 3: two streams at once

### Tried for real (in this session's scratch folder, now removed)

* `git worktree add` a second checkout of HEAD, junctions to disc, .venv, tools/toolchain, tools/compilers,
  tools/maspsx, tools/m2c_download; its own asm/, assets/ (11 MB) and build/.
* `make split` there 31 s, `make -j8 check-main check-stage` 9 s from nothing: **byte-identical**, while the main
  checkout rebuilt check-stage and check-sc02_031 at the same time (separate build dirs, no interference).
* Used it as a second stream: the 139 stage configs above were generated and checked there while this checkout held the
  pilot stage; nothing in this checkout changed (its index and files untouched).
* Merge test without touching main (`git commit` in the worktree on its detached HEAD; this side's commit built from a
  temporary index with `commit-tree`, no ref moved; `git merge-tree`): the stage files of each stream and the identical
  Makefile change merged cleanly; **docs/decomp_recipes.md conflicted** (both appended rows at the same section end) and
  **tools/gen_stage_cfgs.py conflicted** (edited in both).
* Removed: junctions unlinked first ([IO.Directory]::Delete on each), `git worktree remove --force` (it failed on a long
  path after unregistering), the leftover folder deleted by its `\\?\` path, `git worktree prune`.

### What broke on the way (each is a rule below)

1. **Line endings:** the machine's Git has `core.autocrlf=true` (system gitconfig). A fresh worktree checked out C files
   with CRLF and GCC 2.7.2 failed (`syntax error before '*'` in main.c). This checkout's files are LF.
2. **Generated asm/ copied from this checkout** held asm/stg/, which the worktree's older Makefile assembled as plain
   files and failed. Generated folders must come from the worktree's own configs.
3. **No linker scripts:** build/*.ld and the undefined_*_auto.txt lists are written by `make split`; a worktree needs
   its own split before the first build.

### Rules for a two-stream setup

1. **One worktree and one branch per stream** (`git -c core.autocrlf=false worktree add <dir> -b decomp/<area>`), or
   better, set `core.autocrlf false` in this repository's own config once (LuciDin's call: it is a repo setting). Each
   worktree has its own index and HEAD, so **the shared-index problem disappears**: a stream commits freely on its branch
   (no temporary index), and only the merge into main needs LuciDin's yes.
2. **Junction only what nobody writes:** disc, .venv, tools/toolchain, tools/compilers, tools/maspsx, tools/m2c_download.
   **Never junction asm/, assets/ or build/**: run `make split` (31 s) in the new worktree. Before removing a worktree,
   unlink every junction (see memory note catalog-worktree).
3. **Disjoint areas:** a stream owns whole files: a set of stages (src/stg/<stage>.c, stg/<stage>.*), or the engine
   (src/stage/), or the packages. Two streams never take the same stage.
4. **Shared tools have one owner at a time:** tools/stage_bulk/, gen_stage_cfgs.py, stage_clone.py, put_func.py, the
   Makefile. A stream that needs a tool change makes it on main first (or tells the dispatcher); the other stream merges
   main before its next stage.
5. **Recipes, tracker and handoff are written only at merge time:** each stream keeps its new recipe rows and its
   tracker/handoff lines in its shared-notes file; the merge (dispatcher or LuciDin's yes) folds them into
   docs/decomp_recipes.md, docs/progress_data.json and docs/handoff.md. Appending in both streams conflicts every time.
6. **Merge often:** at the end of each stage batch, so shared shapes matched in one stream reach the other's clone pass.
7. **Usage:** two streams burn 3-6 points an hour together: at 5x that ends the week in 17-35 hours, so two streams only
   make sense at 20x. The 5-hour window (about 10 % an hour per stream at 5x) also scales with the plan.

## Part 4: every stage configured, and how a stage pass runs (r145, 21 Oct 2026)

All 139 images other than the village are split and checked in the repo: `stg/<stage>.yaml` and
`stg/symbol_addrs_<stage>.txt` for each, `src/stg/<stage>.c` (splat's output: INCLUDE_ASM lines and the empty stubs it
writes as C). **One config per image**, aliases too: the seven groups of identical own code (SC01_005 = 006, SC02_000 =
003, SC03_014 = 015, SC03_118 = 119, SC04_018 = 019, SC03_126 = SC04_021 = SC05_019) still differ in their data and
image bytes, so each has its own byte-identical check; docs/stage_status.md marks them ("same code as"), and a match in
one is copied to the others by stage_clone.py's shape match.

**What is committed and what is not.** asm/ is gitignored as a whole (the village's stage asm too: `make split`
writes it), so no game code goes into git: the 414 new files (139 configs 0.28 MB, 139 symbol files 0.35 MB, 139
C files 1.9 MB of INCLUDE_ASM lines; about 0.15 MB compressed) are the whole repository cost. The generated tree stays
local: asm/stg 521 MB in 24 570 files, assets/stg 46 MB, build/stg + build/src/stg 318 MB. tools/decomp_backup.py now
skips asm/stg (it is rewritten in 24 s), so the hourly zip stays at about 43 MB.

| Target | What | Time (this machine, 28 threads) |
|---|---|---|
| `make split-stg` (part of `make split`) | splat once per committed config (`gen_stage_cfgs.py --resplit`, parallel), symbol files untouched: a fresh checkout | 24 s |
| `make stg-cfgs` | regenerate every config and symbol file, two splat passes each (`--split --all`); after the engine's names change. Needs build/stage/stage.elf. Commit the changed symbol files | 39 s (r143: 6.7 min serial) |
| `make -j16 check-stg` | rebuild and check all 139 images from nothing | 41 s (`-j8` 48 s) |
| `make check-stg STG=SC03_006` (several: `STG="SC03_006 SC02_031"`; case does not matter; an unknown name stops with an error) | one stage | 6 s (5 s of it is make reading the Makefile, as for any target) |
| `make check-sc03_006` | the same, by its own target | 6 s |
| `make -j8 check` | everything: **182 / 182 OK** (EXE, 7 overlays, 35 packages, 139 stage images) | 20 s when built; from nothing about 1 min more for the stages |
| `make stage-progress` | matched / total per image (`tools/stage_progress.py`); `--md` rewrites docs/stage_status.md; `make progress` prints the one-line total | 1 s (`--md` 8 s) |

Starting count (docs/stage_status.md): **469 / 23 756 own functions matched in C (2.0 %), 23 287 still asm, plus 1 173
empty stubs (24 929 in all; the census's 24 930 counts the village's first stub at 0x8017BE9C, which sc03_001.c does
not list).** Two images have C: SC03_001 (328) and SC02_031 (141). stage_clone.py works on any of them as it is: on
SC03_006 it wrote 47 drafts and all 47 matched (not placed: the next card's job).

### The workflow for a stage pass (the cards after r145)

1. **Pick a stage:** the top of docs/stage_status.md's asm column among the stages no other stream owns (Part 3, rule
   3); prefer one with many clones of matched code (docs/decomp_census.md's "clone of a matched" and "shared" columns)
   or an alias group (match once, place in every member). Say which stage in the tracker item.
2. **Clone:** `python tools/stage_clone.py <STAGE> build/work/<s>c`, `python tools/stage_bulk/cmp_par.py build/work/<s>c 8`,
   `$env:TWINBLADE_STG = "<stage>"; python tools/stage_bulk/place_stage.py build/work/<s>c`. Since r146 it copies from
   any matched function (the village or any split stage). **After a stage's bulk and hand rounds, run
   `python tools/stage_bulk/clone_all.py build/work/<name>` (no `TWINBLADE_STG`)**: it clones every new match into every
   other stage with the same shape and repeats until a pass places nothing (Part 5).
3. **Bulk:** `$env:TWINBLADE_STG = "<stage>"; tools/stage_bulk/round.ps1 <s>` (two or three rounds).
4. **Hand:** `tools/stage_bulk/hand.py` on the near misses, two rounds at most each (recipes section 10); park the rest.
5. **Check and count:** `make check-stg STG=<stage>` after each placement batch (place_stage.py does this itself),
   then `make -j8 check` once before committing (all 182 OK), `python -I tools/stage_progress.py --md`, and commit
   src/stg/<stage>.c, docs/stage_status.md and any new recipe rows. Run everything from PowerShell with
   `$env:PATH = "C:\msys64\usr\bin;" + $env:PATH`.

A fresh worktree (Part 3) needs `make split` (now about a minute with the stages) before its first build.

## Part 5: cloning everywhere, measured (r146, 21 Oct 2026)

Opus medium, alone on the account, 14:52 to 16:21 (about 1.5 hours, 1.3 of them machine time). **tools/stage_clone.py** now takes every function in C in any
image as a source (the village and every split stage; splat's empty stubs are not sources) and writes a draft for every
still-asm function anywhere whose census shape matches: the source's C, renamed by pairing the two asm files' symbols;
a symbol the target file already declares keeps the file's declaration (two sources may guess an engine function's type
differently). `--all <root>` drafts every stage, `--alt N` takes a shape's N-th source. **tools/stage_bulk/clone_all.py
<root>** runs draft, compile (cmp_par.py, 16 jobs) and place (place_stage.py, so each stage's own check runs after every
group and a stage is never left red) over all 139 split stages, and repeats until a pass places nothing (the next pass
retries what was deferred, from the next source). tools/stage_census.py now classes against every matched function too.

### What it placed

| Step | Wall | Functions placed | Note |
|---|---|---|---|
| Clone pass, all 139 stages (sources: the village's 328 and SC02_031's 141 matched, 329 shapes) | 50 min machine (14:55-15:42; about 15 s a stage, 60 s for SC05_017's 258) | **5 842** of 5 878 drafts (pass 1: 5 806, pass 2: 34, pass 3: 2, pass 4: 0) | 99.4 % compiled to the same bytes first time; 36 do not (same shape, different code generation) |
| Bulk on SC06_032 (r132's round.ps1, two rounds) | 7 min machine | 83 of 257 (round 1: 79, round 2: 4) | 32 % of the stage's non-clones, against SC02_031's 54 % over three rounds |
| Clone pass again (the 83 new shapes into every stage) | 28 min machine | **631** of 671 drafts | each SC06_032 bulk match landed about 8 times elsewhere |
| **In all** | | **6 556** (6 473 clones + 83 bulk) | stage own code **469 -> 7 025 / 23 756 in C (2.0 % -> 29.6 %)**; `make -j16 check` **182 / 182 OK** |

**The 20 % estimate, measured:** r141 counted 5 093 clones of matched village code (20 % of 24 930, empty stubs
included). Copying from the village and SC02_031 placed 5 842 (25 % of the 23 287 functions that were asm), and a
single bulk stage added 631 more copies. Copies do not reduce the distinct shapes (7 543 -> 7 440 is SC02_031's own
r143 work, -> 7 360 SC06_032's bulk); they are the free part of each shape.

### What it cost

| Reading | Time | 5-hour | Weekly all models | Weekly Fable |
|---|---|---|---|---|
| Start | 14:52 | 12 | 78 | 63 |
| After the tool and the SC03_006 test | 14:57 | 13 | 79 | 63 |
| After the first clone run | 15:43 | 15 | 79 | 63 |
| After the bulk and the second clone run | 16:20 | 15 | 79 | 63 |
| End (docs written, before the commit) | 16:21 | 15 | 79 | 63 |

About **0.4 weekly points** for the whole card (3 points of the 5-hour bar at about 7.5 per weekly point; the weekly bar
ticked once, 78 to 79), nearly all of it writing the tool and the docs; the machine did the rest. **Cost per placed
function: about 0.00006 weekly points** (clones), the bulk part on SC06_032 under 0.1 points for 83 shapes and 714
functions with its copies (under 0.0002 a function). The cheap part is now done as far as today's matched shapes reach;
every later match costs the same as before but lands in all its copies for free.

### The rebuilt tail estimate (5x weekly points; 100 = one full week of the 5x all-models bar)

**7 360 distinct shapes left** (16 731 functions still asm; 5 029 shapes in one stage only, 2 331 in two or more).
With r143's rates (bulk 54 %, hand within two rounds 18 %, hard 28 %): bulk 3 974 shapes, hand 1 325, hard 2 061;
hand tries counted as in Part 1 (2 061).

| Part | Low | Likely | High |
|---|---|---|---|
| Driving the 138 stages left (configs and clone tool done; about 0.04 a stage) | 4 | 6 | 12 |
| Hand tries, 2 061 (0.006 / 0.009 / 0.02 each) | 12 | 19 | 41 |
| Hard shapes, 2 061 (0.05 / 0.1 / 0.2 each) | 103 | 206 | 412 |
| **The stage tail** | **about 120** | **about 230** | **about 465** |
| What the tracker counts as left (about 1 200; unchanged) | 60 | 120 | 240 |
| **Everything left, 5x weekly points** | **about 180** | **about 350** | **about 705** |

If SC06_032's bulk rate (32 %) is the norm rather than SC02_031's (54 %), the 22 % that bulk misses splits into hand
and hard as 18 : 28, and the tail becomes about 175 / 340 / 680 (everything left about 235 / 460 / 920). The two
stages bracket it; the hard rate is still the largest uncertainty.

| Plan | Weekly pool for decomp | Low | Likely | High |
|---|---|---|---|---|
| 5x, the whole bar | 100 | 1.8 weeks | 3.5 weeks | 7.1 weeks |
| 5x, half the bar | 50 | 3.6 | 7.0 | 14.1 |
| 20x, planning pool 3x | 300 | 0.6 | 1.2 | 2.4 |
| 20x, planning pool 4x | 400 | 0.45 | 0.9 | 1.8 |

(With SC06_032's bulk rate: 5x whole bar 2.3 / 4.6 / 9.2 weeks; 20x 3x pool 0.8 / 1.5 / 3.1; 4x pool 0.6 / 1.1 / 2.3.)
The 20x rows need **two streams** (Part 2: one stream spends about 125-250 points a week at 12 hours a day; a 300-400
pool needs two most of the day, in separate worktrees with Part 3's rules). Each stream should run `clone_all.py` after
every stage and merge often, so one stream's matches land in the other's stages.

**What to do first:** the shapes in many stages. 2 331 shapes cover 11 395 functions (4.9 a shape): matching them first
moves the function count fastest (SC06_032's 83 shapes moved 714 functions). The function count is not the cost,
though; the cost is the 7 360 shapes, whatever the order.

## Part 6: the bulk sweep over every stage, measured (r147, 21 Oct 2026)

Opus medium, alone on the account, 16:40 to about 19:30 (machine time 16:43-19:07). **tools/stage_bulk/sweep.py**
runs r132's round.ps1 on several stages at once (6 workers; each stage touches only its own src/stg file and build
folder), a second round on a stage whose first placed anything, then clone_all.py (now with `--par N`, 6 stages at a
time) so the group's matches land in every stage with the same shape. Order: stage_census.py's `shared` column
(unmatched shapes that also occur elsewhere), one member of each alias group (the clone pass filled the other seven).
Six groups: 3, 22, 27, 27, 27, 26 stages. Every stage passed its own check after every placement batch; at the end a
last clone pass placed nothing new and **`make -j16 check` was 182 / 182 OK in 34 s**. tools/stage_progress.py now
counts old-style definitions (`f(a)` / `s32 a;` / `{`, which some levers write): 25 functions it had missed.

### What it placed, group by group

| Group (order) | Stages | Asm at start | Bulk matched | Rate (functions) | Clones after | Machine (bulk + clone) | Stages in C after | 5-hour / weekly / Fable at the end |
|---|---|---|---|---|---|---|---|---|
| start | | | | | | | 7 025 / 23 756 (29.6 %) | 17 / 79 / 63 (16:40) |
| 0 (1-3) | 3 | 901 | 391 | 43 % | 1 255 | 8 + 6 min | 8 672 (36.5 %) | 18 / 79 / 63 (16:58) |
| 1 (4-25) | 22 | 3 883 | 853 | 22 % | 808 | 32 + 7 min | 10 333 (43.5 %) | 18 / 79 / 63 (17:38) |
| 2 (26-52) | 27 | 3 454 | 912 | 26 % | 296 | 28 + 3 min | 11 541 (48.6 %) | 18 / 79 / 63 (18:08) |
| 3 (53-79) | 27 | 2 676 | 854 | 32 % | 95 | 24 + 3 min | 12 490 (52.6 %) | 0 / 79 / 63 (18:35; the 5-hour window reset at 18:30) |
| 4 (80-106) | 27 | 1 797 | 638 | 36 % | 52 | 18 + 1 min | 13 180 (55.5 %) | 0 / 79 / 63 (18:54) |
| 5 (107-132) | 26 | 902 | 349 | 39 % | 1 | 11 + 1 min | 13 530 (57.0 %) | 1 / 79 / 63 (19:11) |
| **All** | **132** | **13 493** | **3 997** | **30 %** | **2 507** | **2.0 h + 21 min** | **13 530 / 23 757 (57.0 %)** | weekly bar unchanged |

Round 2 added 179 of the 3 997. **The rate that matters is per shape, not per function: 7 360 -> 4 198 distinct
shapes left, so bulk matched 3 162 of them, 43 %** (between Steamwood's 54 % and SC06_032's 32 %). The function rate
per stage is lower and falls in the middle groups because a stage bulked later has already had its easy shared
functions cloned in from earlier groups; the last groups rise again because their stages are small and mostly
small functions.

### Why a stage bulks low: function size

| Size (instructions) | Tried | Bulk matched | Rate | Shapes left before -> after (share of shapes bulk took) |
|---|---|---|---|---|
| 1-8 | 529 | 422 | 80 % | 381 -> 55 (86 %) |
| 9-16 | 1 394 | 986 | 71 % | 892 -> 170 (81 %) |
| 17-32 | 3 190 | 1 553 | 49 % | 2 052 -> 817 (60 %) |
| 33-64 | 3 896 | 978 | 25 % | 2 257 -> 1 430 (37 %) |
| 65-128 | 2 392 | 55 | 2 % | 1 225 -> 1 176 (4 %) |
| 129-256 | 956 | 3 | 0 % | 421 -> 418 (1 %) |
| 257+ | 322 | 0 | 0 % | 132 -> 132 (0 %) |

(Tried = round 1's drafts; m2c failed on about 6 % more.) Of round 1's 8 682 misses, 5 908 compiled but differ and
2 774 did not compile (m2c's guesses: `void value not ignored`, undeclared stack temps, declarations that clash
with the file's). **Distribution of the stage rates:** under 10 % 29 stages, 10-20 % 11, 20-30 % 32, 30-40 % 30,
40-50 % 16, 50-60 % 7, 60 % and over 7. The 32 stages under 15 % have 47 % of their tried functions over 64
instructions (29 % over all stages): a low stage is one with many large functions, not a data-heavy one
(the census cuts the own code at the first data word, so what is left is all code). SC06_032 and SC02_031 show 0 because they were bulked before (r146, r143); SC02_039, SC03_109, SC05_006 and
SC07_008 had 3-25 functions left after cloning.

**Near misses for the hand card:** 410 functions still asm whose best draft compiled to the same instruction count
with 1 (296) or 2 (114) differing lines, mostly a load or constant of the wrong width (`lhu` vs `lw`, `0xFF` vs
`-1`): the list is in the dispatcher's shared notes folder (r147_near_misses.txt: stage, function, lines). Not
parked in recipes section 10: hand rounds are the next card.

### What it cost

Weekly all-models **79 -> 79** over the whole card, Fable 63 -> 63; the 5-hour bar 17 -> 18 before its reset at 18:30
and 0 -> 1 after (about 2-3 points, i.e. **about 0.3 weekly points**, nearly all of it writing sweep.py and the
docs). 6 504 functions placed (3 997 bulk, 2 507 clones), 3 162 shapes: **under 0.0001 weekly points a shape**.
Machine time 2.3 hours (bulk 2.0 h at 6 stages at a time, cloning 21 min).

### Per stage (in sweep order; the rate is bulk matched / asm at the start of the stage)

| # | Stage | Group | Asm at start | Bulk matched (round 1 + 2) | Rate | Tried over 64 instr. |
|---|---|---|---|---|---|---|
| 1 | SC02_011 | 0 | 394 | 175 (166 + 9) | 44 % | 17 % |
| 2 | SC02_028 | 0 | 265 | 103 (96 + 7) | 39 % | 22 % |
| 3 | SC02_000 | 0 | 242 | 113 (98 + 15) | 47 % | 25 % |
| 4 | SC03_006 | 1 | 226 | 78 (75 + 3) | 35 % | 24 % |
| 5 | SC03_118 | 1 | 187 | 63 (63 + 0) | 34 % | 17 % |
| 6 | SC03_014 | 1 | 174 | 39 (39 + 0) | 22 % | 28 % |
| 7 | SC02_027 | 1 | 182 | 29 (29 + 0) | 16 % | 32 % |
| 8 | SC03_091 | 1 | 177 | 45 (45 + 0) | 25 % | 29 % |
| 9 | SC04_018 | 1 | 200 | 50 (50 + 0) | 25 % | 20 % |
| 10 | SC03_090 | 1 | 170 | 44 (44 + 0) | 26 % | 27 % |
| 11 | SC04_002 | 1 | 190 | 68 (61 + 7) | 36 % | 30 % |
| 12 | SC03_104 | 1 | 140 | 27 (27 + 0) | 19 % | 28 % |
| 13 | SC06_018 | 1 | 180 | 6 (6 + 0) | 3 % | 63 % |
| 14 | SC06_032 | 1 | 174 | 0 (0 + 0) | 0 % | 65 % |
| 15 | SC03_094 | 1 | 154 | 37 (37 + 0) | 24 % | 32 % |
| 16 | SC04_005 | 1 | 161 | 57 (54 + 3) | 35 % | 33 % |
| 17 | SC02_026 | 1 | 120 | 14 (14 + 0) | 12 % | 34 % |
| 18 | SC06_024 | 1 | 192 | 34 (31 + 3) | 18 % | 52 % |
| 19 | SC03_097 | 1 | 125 | 29 (29 + 0) | 23 % | 25 % |
| 20 | SC03_089 | 1 | 126 | 29 (29 + 0) | 23 % | 27 % |
| 21 | SC06_022 | 1 | 172 | 30 (29 + 1) | 17 % | 52 % |
| 22 | SC02_017 | 1 | 216 | 68 (68 + 0) | 31 % | 25 % |
| 23 | SC05_017 | 1 | 205 | 50 (50 + 0) | 24 % | 22 % |
| 24 | SC06_033 | 1 | 163 | 10 (10 + 0) | 6 % | 63 % |
| 25 | SC04_004 | 1 | 129 | 46 (41 + 5) | 36 % | 26 % |
| 26 | SC03_093 | 2 | 98 | 5 (5 + 0) | 5 % | 36 % |
| 27 | SC02_041 | 2 | 85 | 1 (1 + 0) | 1 % | 48 % |
| 28 | SC06_000 | 2 | 193 | 55 (53 + 2) | 28 % | 15 % |
| 29 | SC03_024 | 2 | 157 | 49 (48 + 1) | 31 % | 25 % |
| 30 | SC02_035 | 2 | 86 | 2 (2 + 0) | 2 % | 40 % |
| 31 | SC03_124 | 2 | 191 | 61 (52 + 9) | 32 % | 23 % |
| 32 | SC03_098 | 2 | 89 | 3 (3 + 0) | 3 % | 40 % |
| 33 | SC03_029 | 2 | 127 | 28 (28 + 0) | 22 % | 30 % |
| 34 | SC04_007 | 2 | 80 | 2 (2 + 0) | 2 % | 52 % |
| 35 | SC03_112 | 2 | 103 | 28 (28 + 0) | 27 % | 27 % |
| 36 | SC03_101 | 2 | 84 | 9 (9 + 0) | 11 % | 27 % |
| 37 | SC03_099 | 2 | 80 | 4 (4 + 0) | 5 % | 35 % |
| 38 | SC03_100 | 2 | 81 | 4 (4 + 0) | 5 % | 37 % |
| 39 | SC04_011 | 2 | 336 | 85 (77 + 8) | 25 % | 25 % |
| 40 | SC03_103 | 2 | 79 | 5 (5 + 0) | 6 % | 34 % |
| 41 | SC05_018 | 2 | 178 | 73 (70 + 3) | 41 % | 20 % |
| 42 | SC05_001 | 2 | 125 | 41 (38 + 3) | 33 % | 31 % |
| 43 | SC01_005 | 2 | 89 | 48 (47 + 1) | 54 % | 25 % |
| 44 | SC03_125 | 2 | 107 | 33 (32 + 1) | 31 % | 22 % |
| 45 | SC03_002 | 2 | 138 | 52 (49 + 3) | 38 % | 23 % |
| 46 | SC03_007 | 2 | 190 | 53 (49 + 4) | 28 % | 23 % |
| 47 | SC01_077 | 2 | 138 | 48 (47 + 1) | 35 % | 31 % |
| 48 | SC05_008 | 2 | 151 | 79 (70 + 9) | 52 % | 11 % |
| 49 | SC03_107 | 2 | 68 | 14 (14 + 0) | 21 % | 24 % |
| 50 | SC03_028 | 2 | 239 | 89 (86 + 3) | 37 % | 29 % |
| 51 | SC04_003 | 2 | 68 | 13 (12 + 1) | 19 % | 31 % |
| 52 | SC04_020 | 2 | 94 | 28 (27 + 1) | 30 % | 24 % |
| 53 | SC05_003 | 3 | 72 | 22 (22 + 0) | 31 % | 28 % |
| 54 | SC03_102 | 3 | 73 | 4 (4 + 0) | 5 % | 34 % |
| 55 | SC02_037 | 3 | 72 | 6 (6 + 0) | 8 % | 41 % |
| 56 | SC02_005 | 3 | 454 | 212 (200 + 12) | 47 % | 16 % |
| 57 | SC07_002 | 3 | 147 | 51 (51 + 0) | 35 % | 27 % |
| 58 | SC04_015 | 3 | 119 | 34 (34 + 0) | 29 % | 22 % |
| 59 | SC05_007 | 3 | 53 | 10 (10 + 0) | 19 % | 27 % |
| 60 | SC03_095 | 3 | 59 | 4 (4 + 0) | 7 % | 22 % |
| 61 | SC04_000 | 3 | 80 | 20 (20 + 0) | 25 % | 29 % |
| 62 | SC05_005 | 3 | 69 | 20 (20 + 0) | 29 % | 37 % |
| 63 | SC03_092 | 3 | 105 | 31 (26 + 5) | 30 % | 26 % |
| 64 | SC06_020 | 3 | 74 | 1 (1 + 0) | 1 % | 59 % |
| 65 | SC03_096 | 3 | 50 | 1 (1 + 0) | 2 % | 27 % |
| 66 | SC03_013 | 3 | 92 | 55 (53 + 2) | 60 % | 15 % |
| 67 | SC03_113 | 3 | 41 | 2 (2 + 0) | 5 % | 51 % |
| 68 | SC06_008 | 3 | 77 | 13 (13 + 0) | 17 % | 56 % |
| 69 | SC03_010 | 3 | 75 | 48 (46 + 2) | 64 % | 15 % |
| 70 | SC06_029 | 3 | 216 | 59 (59 + 0) | 27 % | 30 % |
| 71 | SC03_117 | 3 | 81 | 22 (20 + 2) | 27 % | 29 % |
| 72 | SC02_016 | 3 | 78 | 12 (11 + 1) | 15 % | 46 % |
| 73 | SC03_115 | 3 | 54 | 12 (12 + 0) | 22 % | 23 % |
| 74 | SC06_016 | 3 | 129 | 48 (44 + 4) | 37 % | 24 % |
| 75 | SC03_111 | 3 | 55 | 6 (6 + 0) | 11 % | 47 % |
| 76 | SC07_007 | 3 | 220 | 144 (130 + 14) | 65 % | 5 % |
| 77 | SC05_004 | 3 | 45 | 11 (11 + 0) | 24 % | 35 % |
| 78 | SC03_108 | 3 | 44 | 3 (3 + 0) | 7 % | 51 % |
| 79 | SC03_110 | 3 | 42 | 3 (3 + 0) | 7 % | 55 % |
| 80 | SC03_031 | 4 | 74 | 28 (28 + 0) | 38 % | 22 % |
| 81 | SC06_010 | 4 | 76 | 6 (6 + 0) | 8 % | 65 % |
| 82 | SC03_105 | 4 | 168 | 40 (36 + 4) | 24 % | 33 % |
| 83 | SC05_010 | 4 | 134 | 45 (45 + 0) | 34 % | 39 % |
| 84 | SC06_011 | 4 | 55 | 18 (18 + 0) | 33 % | 23 % |
| 85 | SC04_006 | 4 | 35 | 3 (3 + 0) | 9 % | 27 % |
| 86 | SC07_000 | 4 | 108 | 50 (47 + 3) | 46 % | 18 % |
| 87 | SC01_009 | 4 | 114 | 57 (57 + 0) | 50 % | 16 % |
| 88 | SC07_011 | 4 | 35 | 21 (21 + 0) | 60 % | 6 % |
| 89 | SC06_030 | 4 | 53 | 14 (14 + 0) | 26 % | 37 % |
| 90 | SC03_011 | 4 | 103 | 63 (61 + 2) | 61 % | 11 % |
| 91 | SC03_126 | 4 | 31 | 18 (18 + 0) | 58 % | 14 % |
| 92 | SC02_039 | 4 | 25 | 0 (0 + 0) | 0 % | 59 % |
| 93 | SC05_002 | 4 | 21 | 1 (1 + 0) | 5 % | 56 % |
| 94 | SC06_014 | 4 | 44 | 11 (11 + 0) | 25 % | 29 % |
| 95 | SC01_008 | 4 | 32 | 12 (12 + 0) | 38 % | 39 % |
| 96 | SC06_025 | 4 | 136 | 54 (51 + 3) | 40 % | 27 % |
| 97 | SC02_031 | 4 | 42 | 0 (0 + 0) | 0 % | 67 % |
| 98 | SC05_009 | 4 | 30 | 10 (10 + 0) | 33 % | 24 % |
| 99 | SC03_003 | 4 | 31 | 18 (18 + 0) | 58 % | 14 % |
| 100 | SC01_080 | 4 | 99 | 26 (25 + 1) | 26 % | 29 % |
| 101 | SC07_006 | 4 | 57 | 17 (17 + 0) | 30 % | 67 % |
| 102 | SC01_001 | 4 | 74 | 32 (30 + 2) | 43 % | 25 % |
| 103 | SC07_009 | 4 | 36 | 26 (26 + 0) | 72 % | 3 % |
| 104 | SC03_109 | 4 | 12 | 0 (0 + 0) | 0 % | 36 % |
| 105 | SC01_084 | 4 | 147 | 60 (60 + 0) | 41 % | 27 % |
| 106 | SC06_013 | 4 | 25 | 8 (8 + 0) | 32 % | 32 % |
| 107 | SC04_008 | 5 | 20 | 1 (1 + 0) | 5 % | 53 % |
| 108 | SC03_030 | 5 | 86 | 41 (39 + 2) | 48 % | 18 % |
| 109 | SC04_016 | 5 | 46 | 21 (21 + 0) | 46 % | 24 % |
| 110 | SC04_012 | 5 | 23 | 5 (5 + 0) | 22 % | 29 % |
| 111 | SC06_015 | 5 | 15 | 1 (1 + 0) | 7 % | 50 % |
| 112 | SC07_010 | 5 | 119 | 47 (44 + 3) | 39 % | 14 % |
| 113 | SC04_009 | 5 | 20 | 5 (5 + 0) | 25 % | 18 % |
| 114 | SC01_004 | 5 | 24 | 6 (6 + 0) | 25 % | 50 % |
| 115 | SC05_006 | 5 | 17 | 0 (0 + 0) | 0 % | 62 % |
| 116 | SC06_006 | 5 | 107 | 45 (38 + 7) | 42 % | 18 % |
| 117 | SC02_021 | 5 | 34 | 14 (14 + 0) | 41 % | 29 % |
| 118 | SC05_011 | 5 | 18 | 11 (11 + 0) | 61 % | 24 % |
| 119 | SC02_015 | 5 | 15 | 7 (7 + 0) | 47 % | 31 % |
| 120 | SC07_001 | 5 | 56 | 19 (17 + 2) | 34 % | 37 % |
| 121 | SC03_023 | 5 | 38 | 23 (20 + 3) | 61 % | 21 % |
| 122 | SC03_114 | 5 | 25 | 9 (9 + 0) | 36 % | 22 % |
| 123 | SC03_121 | 5 | 58 | 24 (24 + 0) | 41 % | 49 % |
| 124 | SC04_010 | 5 | 21 | 9 (9 + 0) | 43 % | 21 % |
| 125 | SC01_074 | 5 | 26 | 11 (11 + 0) | 42 % | 15 % |
| 126 | SC03_116 | 5 | 44 | 16 (16 + 0) | 36 % | 14 % |
| 127 | SC03_012 | 5 | 19 | 11 (11 + 0) | 58 % | 26 % |
| 128 | SC02_004 | 5 | 13 | 4 (4 + 0) | 31 % | 31 % |
| 129 | SC05_000 | 5 | 16 | 5 (4 + 1) | 31 % | 38 % |
| 130 | SC06_027 | 5 | 22 | 9 (9 + 0) | 41 % | 20 % |
| 131 | SC01_000 | 5 | 17 | 5 (4 + 1) | 29 % | 38 % |
| 132 | SC07_008 | 5 | 3 | 0 (0 + 0) | 0 % | 67 % |

### The rebuilt tail estimate (5x weekly points; 100 = one full week of the 5x all-models bar)

**4 198 distinct shapes left** (10 227 functions still asm; 2 817 shapes in one stage only, 1 381 in two or more
covering 7 229 functions). Bulk is spent: what is left is hand and hard work, and it is big. 2 472 shapes are 64
instructions or under, 1 176 are 65-128 and 550 are over 128. Hand rounds (two at most, recipes section 10) succeed
often on small functions and rarely on big ones, so the hand share is taken by size (likely 40 % / 20 % / 5 % of the
three bands; low 50 / 30 / 10; high 30 / 10 / 2): hand matches about 1 250 (low 1 640, high 870), hard shapes about
2 950 (low 2 550, high 3 330). Every shape left gets a hand try first.

| Part | Low | Likely | High |
|---|---|---|---|
| Driving the stages for hand rounds (about 0.04 a stage) | 4 | 6 | 12 |
| Hand tries, 4 198 (0.006 / 0.009 / 0.02 each) | 25 | 38 | 84 |
| Hard shapes, 2 550 / 2 950 / 3 330 (0.05 / 0.1 / 0.2 each) | 128 | 295 | 665 |
| **The stage tail** | **about 155** | **about 340** | **about 760** |
| What the tracker counts as left (about 1 200; unchanged) | 60 | 120 | 240 |
| **Everything left, 5x weekly points** | **about 215** | **about 460** | **about 1 000** |

So the bulk swing is settled, and it lands on r146's pessimistic line (235 / 460 / 920), not its optimistic one
(180 / 350 / 705): bulk took 43 % of the shapes, but the shapes it took are the cheap ones. **The remaining swing is
the cost of a hard large shape** (1 726 shapes over 64 instructions; r138's 0.1 a shape is from the village's larger
functions): a measurement card on a sample of them would narrow it.

| Plan | Weekly pool for decomp | Low | Likely | High |
|---|---|---|---|---|
| 5x, the whole bar | 100 | 2.2 weeks | 4.6 weeks | 10 weeks |
| 5x, half the bar | 50 | 4.3 | 9.2 | 20 |
| 20x, planning pool 3x | 300 | 0.7 | 1.5 | 3.3 |
| 20x, planning pool 4x | 400 | 0.55 | 1.15 | 2.5 |

The 20x rows need **two streams** in separate worktrees (Parts 2 and 3: one stream spends about 125-250 points a week
at 12 hours a day), each running clone_all.py after every stage. Hand and hard work is mostly model time, not machine
time, so the stream count, not the machine, is the limit.

## Part 7: what a hard large shape costs a plain session (r148, 21 Oct 2026)

Opus high, one plain single-agent session (no subagents, no workflow), alone on the account. The question: what
does a matched shape over 64 instructions cost, by size, so the tail estimate stops borrowing r138's village rate
(about 0.1 weekly points a hard shape). The **sample is fixed before any work** so the r144 Ultracode slice can rerun
the same 30 for a like-for-like comparison.

### The sample (fixed before the work started)

Drawn from `tools/stage_census.py`'s 4 198 distinct unmatched shapes after r147 (1 726 over 64 instructions: 827 at
65-100, 657 at 101-200, 195 at 201-400, 47 over 400), seeded (`random.seed(148)`), stratified 10 / 10 / 6 / 4 by size,
4 / 4 / 2 / 2 of them shared (in two or more distinct images; an alias pair such as SC03_014 = 015 counts as one
image), one shape per stage, listed at the shape's first stage. Kind is a crude tag from the asm: gte (any COP2
opcode), switch (two or more `jr`), calls (a `jal` every 12 instructions or more often), logic (the rest). Occurrences
is every function with that shape in all 140 images (the clone yield if it matches).

| # | Band | Stage | Function | Instr | Occurrences in images | Kind | Images |
|---|---|---|---|---|---|---|---|
| 1 | 65-100 | SC03_001 | `func_80182BB8` | 67 | 4 in 4 | switch | SC03_001 SC04_018 SC04_019 SC05_017 |
| 2 | 65-100 | SC02_017 | `func_sc02_017_801806C8` | 69 | 2 in 2 | logic | SC02_017 SC03_029 |
| 3 | 65-100 | SC06_018 | `func_sc06_018_80183F50` | 98 | 6 in 6 | calls | SC06_018 SC06_020 SC06_022 SC06_024 SC06_032 SC06_033 |
| 4 | 65-100 | SC02_011 | `func_sc02_011_8018DBF4` | 91 | 3 in 3 | logic | SC02_011 SC03_006 SC03_029 |
| 5 | 65-100 | SC04_011 | `func_sc04_011_8018008C` | 93 | 1 | logic | SC04_011 |
| 6 | 65-100 | SC05_001 | `func_sc05_001_8017F744` | 82 | 1 | logic | SC05_001 |
| 7 | 65-100 | SC03_024 | `func_sc03_024_80183ACC` | 75 | 1 | logic | SC03_024 |
| 8 | 65-100 | SC07_001 | `func_sc07_001_8017F4E4` | 97 | 1 | logic | SC07_001 |
| 9 | 65-100 | SC03_028 | `func_sc03_028_80183104` | 73 | 1 | logic | SC03_028 |
| 10 | 65-100 | SC06_010 | `func_sc06_010_80180864` | 74 | 1 | calls | SC06_010 |
| 11 | 101-200 | SC03_107 | `func_sc03_107_8017EB70` | 127 | 5 in 5 | logic | SC03_107 SC03_112 SC03_115 SC05_001 SC05_007 |
| 12 | 101-200 | SC01_004 | `func_sc01_004_8017D4A4` | 173 | 5 in 5 | logic | SC01_004 SC01_005 SC01_006 SC01_008 SC01_009 |
| 13 | 101-200 | SC02_041 | `func_sc02_041_8017CEF4` | 105 | 3 in 3 | calls | SC02_041 SC04_002 SC04_005 |
| 14 | 101-200 | SC03_090 | `func_sc03_090_801875E4` | 117 | 2 in 2 | calls | SC03_090 SC03_091 |
| 15 | 101-200 | SC03_007 | `func_sc03_007_80185230` | 157 | 1 | logic | SC03_007 |
| 16 | 101-200 | SC05_008 | `func_sc05_008_8017E850` | 152 | 1 | logic | SC05_008 |
| 17 | 101-200 | SC01_001 | `func_sc01_001_80182D04` | 107 | 1 | logic | SC01_001 |
| 18 | 101-200 | SC03_094 | `func_sc03_094_8017E52C` | 161 | 1 | logic | SC03_094 |
| 19 | 101-200 | SC03_105 | `func_sc03_105_8017EC98` | 103 | 1 | logic | SC03_105 |
| 20 | 101-200 | SC03_012 | `func_sc03_012_8017D8CC` | 109 | 1 | calls | SC03_012 |
| 21 | 201-400 | SC02_026 | `func_sc02_026_8017FEE0` | 299 | 21 in 21 | switch | SC02_026 SC02_027 SC02_028 SC02_035 SC02_037 and 16 more |
| 22 | 201-400 | SC03_114 | `func_sc03_114_8017E2EC` | 296 | 7 in 7 | gte | SC03_114 SC04_011 SC04_016 SC06_000 SC06_006 and 2 more |
| 23 | 201-400 | SC03_014 | `func_sc03_014_80186C4C` | 273 | 2 (alias pair) | logic | SC03_014 SC03_015 |
| 24 | 201-400 | SC02_000 | `func_sc02_000_80188F60` | 233 | 2 (alias pair) | logic | SC02_000 SC02_003 |
| 25 | 201-400 | SC03_102 | `func_sc03_102_80180C38` | 254 | 1 | gte | SC03_102 |
| 26 | 201-400 | SC06_029 | `func_sc06_029_8017EF34` | 243 | 1 | switch | SC06_029 |
| 27 | 401+ | SC02_031 | `func_sc02_031_8017F5B4` | 1 511 | 2 in 2 | gte | SC02_031 SC03_006 |
| 28 | 401+ | SC01_000 | `func_sc01_000_8017BEBC` | 952 | 111 in 111 | gte | SC01_000 SC01_001 SC01_004 SC01_005 SC01_006 and 106 more |
| 29 | 401+ | SC03_092 | `func_sc03_092_8017CE58` | 733 | 1 | gte | SC03_092 |
| 30 | 401+ | SC02_021 | `func_sc02_021_8017DC10` | 512 | 1 | gte | SC02_021 |

The scripts that drew it (rerunnable, same seed, same list while the census is unchanged): the dispatcher's notes
folder, r148_sample.md (with the JSON).

### How each function was worked

One at a time: the r147 m2c draft when there was one (the best of its a / v / m / r / L variants), otherwise the asm
read directly (m2c cannot read a jump table, and the bulk wrapper drops drafts with GTE instructions; m2c run
directly gives a skeleton with the GTE lines missing). A round is one edited source compiled with cmp_func (a
variant_search run over several alternatives counts as one round). Up to three careful rounds, a little more when the
last diff was down to one or two lines; then match (place_stage.py, its own image check, then clone_all.py on the
shape's other stages) or park. **cmp_func's MATCH is not proof**: it compares jump targets and relocations by shape
(#19 matched a variant with a wrong goto target); only the image check counts.

### Per function

| # | Function | Instr | Rounds | Result | Clones | Done | Lever (the recipes have the general rows) |
|---|---|---|---|---|---|---|---|
| 1 | `func_80182BB8` | 67 | 1 | match | 3 | 19:46 | switch written from the asm; tools/jtbl_relabel.py taught stage names so the clones place |
| 2 | `func_sc02_017_801806C8` | 69 | 1 | match | 1 | 19:48 | from the asm (no draft): S12 table copy |
| 3 | `func_sc06_018_80183F50` | 98 | 2 | match | 5 | 19:50 | nested ifs instead of m2c's gotos; a call's result into a local before the field read |
| 4 | `func_sc02_011_8018DBF4` | 91 | 1 | match | 2 | 19:51 | two statement pairs swapped |
| 5 | `func_sc04_011_8018008C` | 93 | 1 | match | 0 | 19:52 | SV8 stack copy, if / else-if chain picking a pointer |
| 6 | `func_sc05_001_8017F744` | 82 | 1 | match | 0 | 19:53 | width: s16 table at stride 8 (levers.py misses `lh`) |
| 7 | `func_sc03_024_80183ACC` | 75 | 1 | match | 0 | 19:54 | s32 return (an unfilled slot before the epilogue), increments swapped |
| 8 | `func_sc07_001_8017F4E4` | 97 | 2 | match | 0 | 19:56 | do-while; locals declared in stack order |
| 9 | `func_sc03_028_80183104` | 73 | 3 | match | 0 | 19:58 | constant in a variable set at the top, if / else with the stores after the join, `return k` |
| 10 | `func_sc06_010_80180864` | 74 | 2 | match | 0 | 19:59 | recipes 10's shared clean-up `goto`; a global's address in a pointer local |
| 11 | `func_sc03_107_8017EB70` | 127 | 4 | match | 4 | 20:02 | `if (0) { miss: ... }` block among the early returns; `&d` assigned inside the loop so loop.c hoists it |
| 12 | `func_sc01_004_8017D4A4` | 173 | 7 | park | - | 20:18 | goto loop, `a[-25]`, s16 flag; left: one delay slot, i / j registers swapped |
| 13 | `func_sc02_041_8017CEF4` | 105 | 2 | match | 2 | 20:08 | 7-argument call written out; `case 0:` on the default code |
| 14 | `func_sc03_090_801875E4` | 117 | 3 | match | 1 | 20:10 | MATRIX / VECTOR arrays; result high halves read as u16 in x, y, z order |
| 15 | `func_sc03_007_80185230` | 157 | 1 | match | 0 | 20:11 | from the asm (no draft); placed callee's prototype called through a K&R cast |
| 16 | `func_sc05_008_8017E850` | 152 | 4 | match | 0 | 20:16 | from the asm: byte switch, s16 locals for masked bytes |
| 17 | `func_sc01_001_80182D04` | 107 | 3 | match | 0 | 20:19 | six adjacent globals are one array `D_800DE2F8[6]` |
| 18 | `func_sc03_094_8017E52C` | 161 | 1 | match | 0 | 20:21 | early returns per case, globals read-modified-written as `[0]` |
| 19 | `func_sc03_105_8017EC98` | 103 | 5 | match | 0 | 20:24 | flag store written in both arms; `0x20000000 \| (p \| 0x40000000)` |
| 20 | `func_sc03_012_8017D8CC` | 109 | 2 | match | 0 | 20:25 | 24-byte stack record, store order |
| 21 | `func_sc02_026_8017FEE0` | 299 | 1 | match | 20 | 20:30 | from the asm: 6-way jump table; `extern s32 func_8012C658()` in 25 stage files (13 more clones of other shapes placed by it) |
| 22 | `func_sc03_114_8017E2EC` | 296 | 4 | park | - | 20:31 | gte.h + psyq.h addPrim; left: frame 8 bytes short, two s-registers swapped |
| 23 | `func_sc03_014_80186C4C` | 273 | 2 | match | 1 | 20:34 | one variable for a table address and then a found actor; `extern s32 func_8012CBCC()` |
| 24 | `func_sc02_000_80188F60` | 233 | 3 | park | - | 20:52 | sound-parameter struct; left: three loop registers rotated, one `ori` |
| 25 | `func_sc03_102_80180C38` | 254 | 4 | park | - | 20:57 | gte.h, RotTransSV; left: one store scheduled above a stack read (MEM_IN_STRUCT alias guess) |
| 26 | `func_sc06_029_8017EF34` | 243 | 2 | match | 0 | 20:58 | from the asm: 13-entry jump table; both if / else pairs negated; `extern s32 func_8012BEE8()` |
| 30 | `func_sc02_021_8017DC10` | 512 | 3 | park | - | 21:02 | POLY_FT4 strip renderer; s16 temporaries had spilled the frame; left: min / max registers, a branch shape, a dead multiply the original keeps (about 200 lines) |
| 29 | `func_sc03_092_8017CE58` | 733 | 0 | park (triage) | - | 21:04 | TMD-style renderer: all nine s-registers and `$fp`, a stack-reloaded count, 58 GTE gaps in m2c |
| 28 | `func_sc01_000_8017BEBC` | 952 | 0 | park (triage) | - | 21:04 | same family, a jump table m2c cannot read, three spill slots; **111 copies** |
| 27 | `func_sc02_031_8017F5B4` | 1 511 | 0 | park (triage) | - | 21:04 | same family, frame 0x258, about 50 spill reloads |

The three 400+ shapes after #30 were parked at triage, not after rounds: the easiest of the four (#30, no spills)
was still about 200 lines off after three rounds, and the others carry register spills and $fp use that hand rounds
do not reach. They are the renderer family (model / strip drawing with inline GTE); the r144 Ultracode slice or a
dedicated session should take them as a batch, #28 first (111 copies).

Also placed: a last clone_all over all 139 stages after the extern retypes, **5** more. In all r148 placed **79**
functions: stage own code **13 530 -> 13 609 / 23 757 in C (57.0 -> 57.3 %)**, distinct shapes **4 198 -> 4 176**
(over 64 instructions 1 726 -> 1 704), `make -j16 check` **182 / 182 OK** (34 s).

### What it cost

Opus high, alone on the account, 19:37 to about 21:10 (1.5 hours; under 10 minutes of it machine time).

| Reading | Time | 5-hour | Weekly all models | Weekly Fable | Context |
|---|---|---|---|---|---|
| Start | 19:37 | 3 | 80 | 63 | 85 k |
| After the sample was drawn and #1-10 (65-100) | 20:00 | 6 | 80 | 63 | 283 k |
| After #11-15 | 20:11 | 8 | 80 | 63 | 389 k |
| After #16-20 (101-200 done) | 20:25 | 11 | 81 | 63 | 480 k |
| After #21-23 | 20:36 | 13 | 81 | 63 | 571 k |
| After #24-26 (201-400 done) | 20:59 | 15 | 81 | 63 | 621 k |
| After #30, the triage, the clone pass and `make check` | 21:05 | 17 | 82 | 63 | 702 k |
| End (this write-up, the docs and the backup) | 21:10 | 18 | 82 | 63 | 747 k |

14 points of the 5-hour bar; at r146's calibration (about 7.5 five-hour points per weekly point) that is **about
1.9 weekly points**, which agrees with the weekly bar's two ticks (80 -> 82). The write-up after 21:05 is not in these
numbers. Per band (each band's share of the 5-hour points; about 0.5 of the first 3 points was drawing the sample and
fixing tools):

| Band | Tried | Matched | Match rate | 5-hour points | Weekly points per try | Per matched shape | Functions placed (with clones) |
|---|---|---|---|---|---|---|---|
| 65-100 | 10 | 10 | 100 % | 2.5 | **0.033** | 0.033 | 21 |
| 101-200 | 10 | 9 | 90 % | 5 | **0.067** | 0.074 | 16 |
| 201-400 | 6 | 3 | 50 % | 4 | **0.089** | 0.18 | 24 |
| 400+ | 4 (1 worked, 3 triaged) | 0 | 0 % | about 2 | **about 0.25 for the one worked** | - | 0 |
| **Sample** | **30** | **22** | 73 % | **14** | 0.063 | 0.086 | **61** (22 + 39 clones), plus 18 clones of other shapes |

**Clone yield: 2.8 functions per matched shape** in the sample (a shared shape's clones land everywhere: #21's 20,
#3's 5), against the census's 2.4 for the whole tail. The context grew from 85 k to 702 k tokens, and every turn re-reads it: the same work
in fresh sessions of 10-15 functions each would cost noticeably less per function (estimated a quarter to a third).

**Against r138's assumption.** r138 measured about 10 matches per weekly point (0.1 a match) on 101-118-instruction
village functions and r147 used 0.1 for every hard shape. Here a careful plain round matches **90-100 % of 65-200**
and half of 201-400, at **0.03-0.18 a matched shape**: cheaper and far more often than the bulk numbers implied.
What does not yield is the residue: near misses that stop at one or two lines (#12, #22, #24, #25: register
rotations, one delay slot, one store order) and the GTE renderer family over 400 instructions.

### The rebuilt tail estimate (5x weekly points; 100 = one full week of the 5x all-models bar)

**4 176 shapes left** (1 704 over 64 instructions: about 815 / 645 / 192 / 46 by band; 2 472 of 64 or under).
Shapes of 64 instructions and under were not sampled; they are taken as cheaper than 65-100 (0.012 / 0.02 / 0.04 a
shape, 95 % hand matches). The residue is every shape the hand rounds leave (5 % of the small band, 10 % of 101-200,
half of 201-400, all of 400+: about 330 shapes), each needing several more rounds, a permuter or a different
session: 0.2 / 0.4 / 0.8 a shape (not measured; r139's one-parked-function card would measure it).

| Part | Low | Likely | High |
|---|---|---|---|
| Driving the stages (about 0.04 a stage) | 4 | 6 | 12 |
| 2 472 shapes of 64 or under (0.012 / 0.02 / 0.04) | 30 | 49 | 99 |
| 815 at 65-100 (0.023 / 0.033 / 0.066) | 19 | 27 | 54 |
| 645 at 101-200 (0.047 / 0.067 / 0.13) | 30 | 43 | 87 |
| 192 at 201-400 (0.062 / 0.089 / 0.18) | 12 | 17 | 34 |
| 46 over 400, one try each (0.17 / 0.25 / 0.5) | 8 | 12 | 23 |
| The residue, about 330 shapes (0.2 / 0.4 / 0.8) | 66 | 132 | 264 |
| **The stage tail** | **about 170** | **about 285** | **about 575** |
| What the tracker counts as left (about 1 200; unchanged) | 60 | 120 | 240 |
| **Everything left, 5x weekly points** | **about 230** | **about 405** | **about 815** |

So the hard-shape swing r147 named is mostly settled in the good direction: **r147's 215 / 460 / 1 000 becomes about
230 / 405 / 815** (likely down 12 %, high down 19 %). The remaining swing is the residue (about 330 shapes, 66-264
points), which nobody has measured yet.

| Plan | Weekly pool for decomp | Low | Likely | High |
|---|---|---|---|---|
| 5x, the whole bar | 100 | 2.3 weeks | 4.1 weeks | 8.2 weeks |
| 5x, half the bar | 50 | 4.6 | 8.1 | 16 |
| 20x, planning pool 3x | 300 | 0.77 | 1.35 | 2.7 |
| 20x, planning pool 4x | 400 | 0.58 | 1.0 | 2.0 |

**Throughput, not the pool, limits 20x.** This one stream spent about 1.3 weekly points an hour (1.9 in 1.5 hours).
At 12 hours a day that is about 110 points a week per stream: **two streams use about 220 a week, so with two
streams the 20x figures are about 1.0 / 1.8 / 3.7 weeks; reaching the 3x-4x pool rows needs three or four streams**
(each in its own worktree, Part 3's rules, clone_all after every match).

## Summary

* **Cost per distinct shape:** clone and bulk about nothing; hand (two rounds at most) about 0.009 weekly a try, 0.014
  a match; hard shapes (28 % of them) about 0.1 (r138's rate, 0.05-0.2).
* **The whole tail at 5x:** about 125 / 240 / 480 points (low / likely / high); everything left including the tracker's
  1 200: about 185 / 360 / 720, i.e. 1.9 / 3.6 / 7.2 weeks of the whole 5x bar.
* **At 20x:** 0.5 / 1.0 / 2.1 weeks with a 3.5x pool, 0.9 / 1.8 / 3.6 weeks with a 2x pool, if two streams run.
* **One stream:** about 1-3 points an hour; it can use the 5x bar and roughly a 2x pool, not a 3.5x pool.
* **Two streams:** possible, in separate worktrees with the rules above; tested byte-identical and mergeable.
* **r146 (Part 5):** cloning from every matched function placed 6 473 copies (5 842 from the village and SC02_031, 631
  from one bulk stage), stage own code 2.0 % -> 29.6 % in C, for about 0.4 weekly points. 7 360 shapes left; rebuilt:
  the stage tail about 120 / 230 / 465, everything about 180 / 350 / 705 points at 5x (1.8 / 3.5 / 7.1 weeks of the whole
  bar; 0.6 / 1.2 / 2.4 weeks at 20x with a 3x pool, 0.45 / 0.9 / 1.8 with 4x, two streams).
* **r147 (Part 6):** the bulk method over all 132 distinct stages with a clone pass after each group placed 6 504
  functions (3 997 bulk, 2 507 clones) for about 0.3 weekly points: stage own code 29.6 % -> 57.0 % in C, `make check`
  182 / 182. **Bulk rate measured: 43 % of the shapes** (30 % of the functions tried; 80 % at 1-8 instructions, 25 % at
  33-64, about 0 over 64). 4 198 shapes left, 1 726 of them over 64 instructions. Rebuilt: everything left about
  215 / 460 / 1 000 points at 5x (2.2 / 4.6 / 10 weeks of the whole bar; 0.7 / 1.5 / 3.3 weeks at 20x with a 3x pool,
  0.55 / 1.15 / 2.5 with 4x, two streams). The remaining swing is the cost of the large hard shapes.
* **r148 (Part 7):** a plain Opus-high session on a fixed stratified sample of 30 shapes over 64 instructions matched
  **22** (10 / 10 at 65-100, 9 / 10 at 101-200, 3 / 6 at 201-400, 0 / 4 over 400) at **0.033 / 0.067 / 0.089 weekly
  points a try** (0.033 / 0.074 / 0.18 a matched shape; one 3-round try at 512 instructions about 0.25), 2.8 functions
  placed per matched shape; 79 functions placed in all, `make check` 182 / 182, about 1.9 weekly points. Rebuilt:
  everything left **about 230 / 405 / 815** points at 5x (4.1 weeks of the whole bar likely; at 20x about 1.8 weeks with
  two streams, 1.0-1.35 with three or four). The swing left is the residue: about 330 near misses and GTE renderers.
