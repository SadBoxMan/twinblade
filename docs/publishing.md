# Publishing the decomp to GitHub (r155, 22 Oct 2026)

The decomp, and only the decomp, is backed up to LuciDin's private repository
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
