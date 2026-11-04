#!/usr/bin/env python3
"""Commit only the named files through a temporary index, with the commit gate (r142, docs/test_infrastructure.md).

The project's shared-index routine (memory note shared-index-commits) as one command: a fresh index from HEAD, the
named paths added from the working tree, then `git commit` with GIT_INDEX_FILE pointing at it, so the pre-commit hook
(tools/hooks/pre-commit: tools/regress.py --staged) runs on exactly what is committed. Afterwards the shared index's
entries for those paths are reset to the new HEAD, so `git status` shows no stale staged entries and a later plain
`git commit` cannot revert them. Other sessions' staged or unstaged edits are never touched.

Usage: python -I tools/tmp_commit.py (-m MESSAGE | -F FILE) [--no-verify] PATH ...
  PATH may be a deleted file (its deletion is committed) or a directory (everything changed under it).
LuciDin's catalogue files (docs/catalog_status.json, docs/model_names.json, docs/song_names.json,
tools/overlay_configs.py, "Save States BACKUP/") are refused.
"""
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PROTECTED = ('docs/catalog_status.json', 'docs/model_names.json', 'docs/song_names.json', 'tools/overlay_configs.py',
             'Save States BACKUP')


def git(args, env=None, check=True, capture=True):
    r = subprocess.run(['git'] + args, cwd=ROOT, env=env, text=True,
                       stdout=subprocess.PIPE if capture else None, stderr=subprocess.STDOUT if capture else None)
    if check and r.returncode:
        sys.exit(f'git {" ".join(args)} failed ({r.returncode}):\n{r.stdout or ""}')
    return r


def blob(spec, env):
    """a blob's bytes (b'' when absent), read through a bytes pipe: a text pipe on Windows turns LF into CRLF (r168's
    hand-made commit got CRLF blobs that way). The files themselves go in with `git add`, whose eol filters apply."""
    r = subprocess.run(['git', 'cat-file', 'blob', spec], cwd=ROOT, env=env, stdout=subprocess.PIPE,
                       stderr=subprocess.DEVNULL)
    return r.stdout if r.returncode == 0 else b''


def main():
    argv = sys.argv[1:]
    msg_args, extra, paths = [], [], []
    i = 0
    while i < len(argv):
        a = argv[i]
        if a == '-m':
            msg_args += [a, argv[i + 1]]; i += 1
        elif a == '-F':
            # PowerShell 5's Set-Content -Encoding utf8 writes a byte-order mark, which git keeps in the message
            msg_args += ['-m', open(argv[i + 1], encoding='utf-8-sig').read().strip()]; i += 1
        elif a == '--no-verify':
            extra.append(a)
        elif a in ('-h', '--help'):
            print(__doc__); return 0
        else:
            paths.append(a.replace('\\', '/'))
        i += 1
    if not msg_args or not paths:
        sys.exit(__doc__)
    for p in paths:
        if any(p.rstrip('/') == q or p.startswith(q + '/') or q.startswith(p.rstrip('/') + '/') for q in PROTECTED):
            sys.exit(f'tmp_commit: refused: {p} is (or holds) one of LuciDin\'s uncommitted catalogue files')
    if os.path.exists(git(['rev-parse', '--git-path', 'MERGE_HEAD']).stdout.strip()):
        sys.exit('tmp_commit: a merge is in progress in this checkout; finish or abort it first')

    tmp = os.path.abspath(os.path.join(ROOT, git(['rev-parse', '--git-path', f'index.tmp_commit.{os.getpid()}']).stdout.strip()))
    env = dict(os.environ, GIT_INDEX_FILE=tmp)
    try:
        git(['read-tree', 'HEAD'], env)
        git(['add', '-A', '--'] + paths, env)
        if not git(['diff', '--cached', '--name-only'], env).stdout.strip():
            sys.exit('tmp_commit: nothing to commit in ' + ' '.join(paths))
        # binaries (numstat '-') are skipped: compressed data contains a \r\n pair by chance (r248's icon)
        binary = {l.split('\t', 2)[2] for l in git(['diff', '--cached', '--numstat', '--diff-filter=AM'], env).stdout.splitlines()
                  if l.startswith('-\t-\t')}
        crlf = [p for p in git(['diff', '--cached', '--name-only', '--diff-filter=AM'], env).stdout.split()
                if p not in binary and b'\r\n' in blob(':' + p, env) and b'\r\n' not in blob('HEAD:' + p, env)]
        if crlf:
            sys.exit('tmp_commit: these files would be committed with CRLF line endings (their HEAD copy has none); '
                     'nothing was committed:\n  ' + '\n  '.join(crlf))
        print(git(['diff', '--cached', '--stat'], env).stdout.rstrip())
        r = git(['commit', '-q'] + extra + msg_args, env, check=False, capture=False)
        if r.returncode:
            sys.exit(f'tmp_commit: commit refused (exit {r.returncode}); nothing was committed')
    finally:
        if os.path.exists(tmp):
            os.remove(tmp)
    git(['reset', '-q', 'HEAD', '--'] + paths, check=False)
    print(git(['log', '--oneline', '-1']).stdout.rstrip())
    return 0


if __name__ == '__main__':
    sys.exit(main())
