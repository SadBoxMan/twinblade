#!/usr/bin/env python3
"""Publish the DECOMP ONLY to LuciDin's private GitHub repository (r155, docs/publishing.md).

The local main branch holds the PC port, the recompiler, game text and pictures as well as the decomp, so it is never
pushed. Instead each publish takes main's committed tree (never the working tree), keeps only the paths
tools/publish/manifest.txt allows, and commits that as a new snapshot on the local branch publish/decomp, whose parent
is the previous snapshot: no commit of main is ever an ancestor of a pushed commit, so excluded files appear in no
pushed history. The build uses a temporary index (git plumbing only): the shared index and the working tree are not
touched.

Usage (from the repository root, `.venv\\Scripts\\python.exe -I tools/publish/publish_decomp.py ...`):
  --report [out.md]   classify every file of main's tree, IN or OUT with the rule that decided it (no changes)
  --snapshot          commit main's allowlisted tree on publish/decomp (does nothing when nothing changed)
  --check             re-check every commit on publish/decomp (paths, deny rules, sizes, text only)
  --push              --check, then push publish/decomp to the GitHub repository's main branch (nothing else)
  --source REF        the ref to publish from (default main)

The checks refuse a tree with any path that is denied or not allowed, any file over MAX_BYTES, any file that is not
UTF-8 text (NUL bytes or undecodable), and any symlink or submodule.
"""
import argparse
import collections
import datetime
import os
import re
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MANIFEST = os.path.join(ROOT, 'tools', 'publish', 'manifest.txt')
BRANCH = 'refs/heads/publish/decomp'
REMOTE = 'github'
REMOTE_URLS = ('https://github.com/SadBoxMan/twinblade.git', 'https://github.com/SadBoxMan/twinblade')
REMOTE_BRANCH = 'refs/heads/main'
FRONT_PAGE = ('tools/publish/README.md', 'README.md')   # published a second time at the root
MAX_BYTES = 1_000_000


def git(*args, env=None, inp=None):
    r = subprocess.run(['git', *args], cwd=ROOT, env=env, input=inp, capture_output=True)
    if r.returncode:
        sys.exit(f'git {" ".join(args)} failed: {r.stderr.decode(errors="replace").strip()}')
    return r.stdout.decode('utf-8', errors='replace')


def glob_re(pat):
    out = ''
    i = 0
    while i < len(pat):
        if pat.startswith('**', i):
            out += '.*'
            i += 2
        elif pat[i] == '*':
            out += '[^/]*'
            i += 1
        elif pat[i] == '?':
            out += '[^/]'
            i += 1
        else:
            out += re.escape(pat[i])
            i += 1
    if pat.endswith('/'):
        out += '.*'
    return re.compile(out + r'\Z', re.IGNORECASE)


def load_rules():
    allow, deny = [], []
    for n, line in enumerate(open(MANIFEST, encoding='utf-8'), 1):
        line = line.rstrip('\n')
        if not line.strip() or line.lstrip().startswith('#'):
            continue
        m = re.match(r'([+-])\s+(.+?)\s*(?:#\s*(.*))?$', line)
        if not m:
            sys.exit(f'manifest.txt:{n}: cannot read "{line}"')
        sign, pat, why = m.group(1), m.group(2), m.group(3) or ''
        (allow if sign == '+' else deny).append((glob_re(pat), pat, why))
    return allow, deny


def classify(path, rules):
    """(True, reason) to publish, (False, reason) to keep local. Deny wins over allow."""
    allow, deny = rules
    for rx, pat, why in deny:
        if rx.match(path):
            return False, f'denied by {pat} ({why})'
    for rx, pat, why in allow:
        if rx.match(path):
            return True, f'{pat} ({why})'
    return False, 'not on the allowlist'


def ls_tree(ref):
    """[(mode, type, sha, path)] of every entry in ref's tree."""
    out = []
    for line in git('ls-tree', '-r', '-z', '--full-tree', ref).split('\0'):
        if line:
            meta, path = line.split('\t', 1)
            mode, typ, sha = meta.split()
            out.append((mode, typ, sha, path))
    return out


def blobs(shas):
    """{sha: bytes} for the given blob ids, in one git cat-file --batch."""
    shas = list(dict.fromkeys(shas))
    if not shas:
        return {}
    r = subprocess.run(['git', 'cat-file', '--batch'], cwd=ROOT, input=('\n'.join(shas) + '\n').encode(),
                       capture_output=True, check=True)
    data, pos, out = r.stdout, 0, {}
    for sha in shas:
        nl = data.index(b'\n', pos)
        head = data[pos:nl].split()
        size = int(head[2])
        out[sha] = data[nl + 1:nl + 1 + size]
        pos = nl + 1 + size + 1
    return out


def check_tree(entries, rules, content=True):
    """Problems (list of strings) with a tree that is about to be or has been published."""
    bad = []
    for mode, typ, sha, path in entries:
        ok, why = classify(path, rules)
        if not ok:
            bad.append(f'{path}: {why}')
        if typ != 'blob' or mode not in ('100644', '100755'):
            bad.append(f'{path}: mode {mode} {typ} (only plain files are published)')
    if content:
        data = blobs(sha for mode, typ, sha, path in entries if typ == 'blob')
        for mode, typ, sha, path in entries:
            b = data.get(sha)
            if b is None:
                continue
            if len(b) > MAX_BYTES:
                bad.append(f'{path}: {len(b)} bytes, over the {MAX_BYTES} limit')
            if b'\0' in b:
                bad.append(f'{path}: holds NUL bytes (binary)')
            else:
                try:
                    b.decode('utf-8')
                except UnicodeDecodeError:
                    bad.append(f'{path}: not UTF-8 text')
    return bad


def area(path):
    parts = path.split('/')
    return parts[0] + '/' if len(parts) > 1 else '(root)'


def cmd_report(source, out):
    rules = load_rules()
    entries = ls_tree(source)
    rows = [(path, *classify(path, rules)) for mode, typ, sha, path in entries]
    counts = collections.OrderedDict()
    for path, ok, why in sorted(rows):
        c = counts.setdefault(area(path), [0, 0])
        c[0 if ok else 1] += 1
    lines = [f'# Publish manifest report: {source} at {git("rev-parse", "--short", source).strip()}', '',
             f'{sum(ok for _, ok, _ in rows)} files IN, {sum(not ok for _, ok, _ in rows)} OUT, of {len(rows)} tracked.',
             '', '| Area | IN | OUT |', '|---|---:|---:|']
    lines += [f'| {a} | {i} | {o} |' for a, (i, o) in counts.items()]
    for flag, title in ((True, 'IN (published)'), (False, 'OUT (stays local)')):
        lines += ['', f'## {title}', '']
        lines += [f'- `{p}`: {why}' for p, ok, why in sorted(rows) if ok == flag]
    text = '\n'.join(lines) + '\n'
    if out:
        with open(out, 'w', encoding='utf-8') as f:
            f.write(text)
    ins = [e for e in entries if classify(e[3], rules)[0]]
    bad = check_tree(ins, rules)
    print('\n'.join(lines[:6 + len(counts)]))
    print(f'content check of the IN files: {"clean" if not bad else "PROBLEMS"}')
    for b in bad:
        print('  ' + b)
    if out:
        print(f'full list: {out}')
    return 1 if bad else 0


def branch_tip():
    r = subprocess.run(['git', 'rev-parse', '--verify', '-q', BRANCH], cwd=ROOT, capture_output=True, text=True)
    return r.stdout.strip() or None


def cmd_snapshot(source):
    rules = load_rules()
    entries = [e for e in ls_tree(source) if classify(e[3], rules)[0] and e[3] != FRONT_PAGE[1]]
    front = [e for e in entries if e[3] == FRONT_PAGE[0]]
    if front:
        mode, typ, sha, _ = front[0]
        entries.append((mode, typ, sha, FRONT_PAGE[1]))
    bad = check_tree(entries, rules)
    if bad:
        print('refused: the snapshot would publish')
        for b in bad:
            print('  ' + b)
        return 1
    with tempfile.TemporaryDirectory() as tmp:
        env = dict(os.environ, GIT_INDEX_FILE=os.path.join(tmp, 'index'))
        git('read-tree', '--empty', env=env)
        info = ''.join(f'{mode} {sha}\t{path}\0' for mode, typ, sha, path in entries)
        git('update-index', '-z', '--index-info', env=env, inp=info.encode('utf-8'))
        tree = git('write-tree', env=env).strip()
    parent = branch_tip()
    if parent and git('rev-parse', parent + '^{tree}').strip() == tree:
        print(f'nothing new: publish/decomp {parent[:7]} already has this tree')
        return 0
    src = git('rev-parse', source).strip()
    when = datetime.datetime.now().strftime('%Y-%m-%d %H:%M')
    msg = (f'Decomp snapshot {when}\n\nFrom local main {src[:10]}: {len(entries)} files '
           f'(tools/publish/manifest.txt allowlist).\n')
    args = ['commit-tree', tree, '-m', msg] + (['-p', parent] if parent else [])
    commit = git(*args).strip()
    git('update-ref', BRANCH, commit, *([parent] if parent else ['']))
    print(f'publish/decomp -> {commit[:10]} ({len(entries)} files, from {source} {src[:10]})')
    return 0


def cmd_check():
    tip = branch_tip()
    if not tip:
        print('no publish/decomp branch yet (run --snapshot)')
        return 1
    rules = load_rules()
    commits = git('rev-list', BRANCH).split()
    bad = []
    for i, c in enumerate(commits):
        for b in check_tree(ls_tree(c), rules, content=(i == 0)):
            bad.append(f'{c[:10]}: {b}')
    # no commit of the local branches (main and the decomp worktrees) may be reachable from the publish branch
    others = [r for r in git('for-each-ref', '--format=%(refname)', 'refs/heads').split() if r != BRANCH]
    for r in others:
        base = subprocess.run(['git', 'merge-base', BRANCH, r], cwd=ROOT, capture_output=True, text=True).stdout.strip()
        if base:
            bad.append(f'shares history with {r} (merge base {base[:10]})')
    if bad:
        print(f'publish/decomp FAILS the check ({len(commits)} commits, {len(bad)} problems):')
        for b in bad[:30]:
            print('  ' + b)
        if len(bad) > 30:
            print(f'  ... and {len(bad) - 30} more')
        return 1
    print(f'publish/decomp {tip[:10]}: {len(commits)} commits, all clean')
    return 0


def cmd_push():
    if cmd_check():
        return 1
    url = subprocess.run(['git', 'remote', 'get-url', '--push', REMOTE], cwd=ROOT, capture_output=True,
                         text=True).stdout.strip()
    if url not in REMOTE_URLS:
        print(f'refused: remote "{REMOTE}" is "{url}", expected {REMOTE_URLS[0]}')
        return 1
    for key in (f'remote.{REMOTE}.mirror', f'remote.{REMOTE}.push', 'push.followTags'):
        val = subprocess.run(['git', 'config', '--get-all', key], cwd=ROOT, capture_output=True, text=True).stdout
        if val.strip() and val.strip() != 'false':
            print(f'refused: git config {key} = {val.strip()} (could push more than publish/decomp)')
            return 1
    remote = git('ls-remote', REMOTE, REMOTE_BRANCH).split()
    tip = branch_tip()
    if remote and remote[0] != tip:
        r = subprocess.run(['git', 'merge-base', '--is-ancestor', remote[0], tip], cwd=ROOT)
        if r.returncode:
            print(f'refused: GitHub main {remote[0][:10]} is not an ancestor of publish/decomp (never force-push)')
            return 1
    r = subprocess.run(['git', 'push', '--porcelain', REMOTE, f'{BRANCH}:{REMOTE_BRANCH}'], cwd=ROOT)
    if r.returncode:
        return r.returncode
    after = git('ls-remote', REMOTE, REMOTE_BRANCH).split()
    print(f'GitHub main is {after[0][:10] if after else "missing"}; publish/decomp is {tip[:10]}: '
          f'{"in step" if after and after[0] == tip else "MISMATCH"}')
    return 0 if after and after[0] == tip else 1


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    g = ap.add_mutually_exclusive_group(required=True)
    g.add_argument('--report', nargs='?', const='', metavar='OUT')
    g.add_argument('--snapshot', action='store_true')
    g.add_argument('--check', action='store_true')
    g.add_argument('--push', action='store_true')
    ap.add_argument('--source', default='main')
    a = ap.parse_args()
    if a.report is not None:
        return cmd_report(a.source, a.report)
    if a.snapshot:
        return cmd_snapshot(a.source)
    if a.check:
        return cmd_check()
    return cmd_push()


if __name__ == '__main__':
    sys.exit(main())
