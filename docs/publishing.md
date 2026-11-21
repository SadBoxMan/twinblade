# Publishing the decomp to GitHub (r155, 22 Oct 2026)

The decomp, and only the decomp, is backed up to LuciDin's public repository (public by his choice, confirmed 8 Nov
2026; it was set up as private on 22 Oct)
https://github.com/SadBoxMan/twinblade. The recompiler, the PC port and every ripped asset stay local (LuciDin,
22 Oct: "This repo is only for the decomp. The recomp and any ripped assets need to remain local.").

**The one rule: push only with `tools/publish/publish_decomp.py`. Never `git push` main, a worktree branch or a tag.**
Main's history holds the port (`pc/`, `tools/recomp.py`, the launcher), game text (`docs/dialogue/`, `docs/scripts/`),
the manual PDF, screenshots and LuciDin's catalogue JSONs, so main is never pushed and is never an ancestor of
anything pushed.

## How it works

- `tools/publish/manifest.txt` is the allowlist (`+` rules) and the denylist (`-` rules, which always win). A file
  is published only when an allow rule matches it and no deny rule does; anything else stays local.
- `--snapshot` takes **main's committed tree** (never the working tree, so uncommitted edits cannot leak), keeps the
  allowed paths, adds `tools/publish/README.md` again as the root `README.md`, and commits the result on the local
  branch `publish/decomp`. The parent is the previous snapshot, so the published history is snapshots only. It works
  through a temporary index: the shared index, the working tree and main are untouched. When nothing allowed has
  changed it makes no commit.
- `--check` re-reads every commit on `publish/decomp`: every path allowed and not denied, plain files only, each file
  at most 1 MB and UTF-8 text (no NUL bytes), and no history shared with any other local branch.
- `--push` runs `--check`, refuses unless the remote `github` is exactly the SadBoxMan/twinblade URL (no mirror,
  push refspec or followTags config) and GitHub's main is an ancestor of the snapshot (it never force-pushes), then
  pushes `publish/decomp` to GitHub's `main` and nothing else, and confirms that GitHub's main equals the snapshot.
- `--report [file]` lists every file of main as IN or OUT, with the rule that decided it. It changes nothing.

## When to publish

After merges into main (the decomp streams' branches landing), at the end of each work block, at most a few times a
day. Not for every commit: each publish is one snapshot commit on GitHub. From the repository root in PowerShell:

```
.venv\Scripts\python.exe -I tools/publish/publish_decomp.py --snapshot
.venv\Scripts\python.exe -I tools/publish/publish_decomp.py --push
```

`--push` needs GitHub sign-in (`gh auth login` with `gh auth setup-git`, or Git Credential Manager), which LuciDin
does himself. Only work that is committed to main is published. Work still on a stream's branch is not, until it
is merged.

## Changing what is published

Edit `tools/publish/manifest.txt`, run `--report` and read the IN list before the next snapshot. Keep it
conservative: game text, game data tables, extracted bytes, images, PDFs and anything the port or the rips own stay
OUT. A rule removed later does not take files out of earlier snapshots. If something must be removed from GitHub's
history, stop and ask LuciDin.

Decided in r155 (LuciDin, 22 Oct): the disc set-up tools are published (`extract_disc.py`, `extract_overlays.py`,
`lzss_pac4.py`, `stage_chunks.py` and the two they import, `asset_scan.py` and `ability_art.py`), so a clone plus
your own disc can rebuild `disc/overlays` and `disc/pac4`. They are code only. `docs/script_vm.md` stays local because
it quotes two lines of game dialogue.

`tools/decomp_backup.py` (the F: drive zip and full-history bundle) stays the local full backup.

## The Phase 1 source of truth (r490, 8 Nov 2026)

A second repository: https://github.com/SadBoxMan/brave-fencer-musashi-decomp (public), for research. It is THE
matching decomp, the source of truth for the game's original code (LuciDin, 8 Nov: "should be the absolute source of
truth for the game's original code/decompilation"), while this repository goes on with Phase 2 / 3 names and structs.
It starts with the two Phase 1 commits below and then only grows: append-only history, more original code (the
type-1 blocks, MAIN.CD entry 12) once it matches, in the address-based naming, each commit verified from a clean
build of its published tree. The README (tools/publish/README_phase1.md) says this. Each published commit is one
step in `PHASE1['steps']` of the publisher (a local tag, the commit it must point at, the message, and the blob of
the README it is published with, so editing README_phase1.md for a new commit never changes an older one; r503).

| Branch commit | From (local tag) | What |
|---|---|---|
| 1 | `phase1-complete` = 93205e05 (5 Nov 11:30) | Phase 1 at 100% |
| 2 | `phase1-final` = ec96cf48 (7 Nov 13:59) | + r292 / r373: the last MATCH-TRICK frame pads removed |
| 3 | `phase1-pristine` = bf15da33 (8 Nov 15:21) | r503: the original address names restored (a pure rename of commit 2, by tools/pristine_names.py; branch `pristine`) |
| 4 | `phase1-pristine-comments` = 8f456aa0 (8 Nov 15:51) | r503: the old names inside comments replaced (comments kept; LuciDin's "Keep, rewrite old names") |
| 5 | `phase1-100` = cfbdf896 (14 Nov 13:58) | r739: Phase 1 truly 100 % (r498): + the 36 code blocks (src/blk, blk/, gen_block_cfgs.py, type1_census.py), 218 / 218, payload-length targets, 124 MATCH-TRICK lines reviewed |

To add a commit: tag the verified source commit, pin its README's blob (`git hash-object -w
tools/publish/README_phase1.md` once that README is committed) in a new step, commit the publisher, then
`--target phase1 --snapshot --source <the tag or branch>` appends exactly that one commit (a fast-forward of
publish/phase1; it refuses anything else), `--check` rebuilds every commit from its tag, and the push is a plain
fast-forward that waits for LuciDin's yes.

- The tags are annotated, local, and never moved or deleted; no tag is pushed anywhere.
- `tools/publish/manifest_phase1.txt` is manifest.txt as it stood at the tag, plus the three build inputs it missed
  (`tools/maspsx_tw.py`, `tools/stage_units.py`, `tools/coverage.py`) and minus the publisher, this doc and the backup
  tool. `tools/publish/README_phase1.md` becomes the repository's README.md (coverage caveats, toolchain, set-up).
- Build, check, push (from the repository root in PowerShell; the manifest and README are read from HEAD's commit):

```
.venv\Scripts\python.exe -I tools/publish/publish_decomp.py --target phase1 --build-phase1
.venv\Scripts\python.exe -I tools/publish/publish_decomp.py --target phase1 --check
.venv\Scripts\python.exe -I tools/publish/publish_decomp.py --target phase1 --push
```

- The commits carry the tags' own dates, so a rebuild gives the same commit ids; `--check` rebuilds and compares, and
  refuses any shared history with a local branch. `--build-phase1` only moves an existing publish/phase1 forward
  along the rebuild (it refuses a different result; delete the local branch first if that is meant).
- The remote is `truth`. GitHub created the repository with its own "Initial commit" (a README, 8 Nov 17:41 UTC), so
  the first push is either `--push --replace <that commit>` (force-with-lease on exactly that commit: the GitHub
  README is replaced) or a rebuild with `--build-phase1 --onto <that commit>` after `git fetch truth main` (GitHub's
  commit stays as the root; an ordinary push). LuciDin chooses; the push waits for his yes.
- Verification and report: docs/phase1_freeze.md. Local read-only browsing copy: the locked worktree
  `C:\Users\lukea\Claude\Projects\Twinblade Phase1` (phase1-final, no junctions).
