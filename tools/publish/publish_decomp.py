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

The Phase 1 source of truth (r490, --target phase1): a second repository, the matching decomp in its original naming (append-only; LuciDin, 8 Nov),
github.com/SadBoxMan/brave-fencer-musashi-decomp (remote `truth`), built on the local branch publish/phase1 from the
local tags in PHASE1['steps'], one commit each: phase1-complete (93205e05, 5 Nov 2026), phase1-final (ec96cf48,
7 Nov 2026), phase1-pristine (bf15da33, 8 Nov 2026: r503, the original address names restored) and
phase1-pristine-comments (8f456aa0, 8 Nov 2026: r503, the old names in comments replaced) and phase1-100 (cfbdf896,
14 Nov 2026: r739, Phase 1 truly 100 %: the 36 code blocks, 218 images):
  --target phase1 --build-phase1 [--onto SHA]   (re)build every step: each tag's tree filtered through
                      tools/publish/manifest_phase1.txt (read from HEAD's committed tree), plus that step's own front
                      page as README.md (a pinned blob, so an older commit keeps the README it was published with);
                      author and committer dates are the tags' commit dates, so a rebuild gives the same commit ids. A
                      branch that holds the first steps already is moved forward (appended to); any other difference is
                      refused. --onto makes commit 1 a child of SHA (e.g. GitHub's own first commit, fetched into
                      refs/remotes/truth/main) instead of a root commit.
  --target phase1 --snapshot --source REF   append the newest step: REF (e.g. the branch `pristine`) must be the
                      commit the last step pins; the branch must already hold every earlier step; a fast-forward only
  --target phase1 --check     every commit's tree must equal a fresh rebuild from the tags, plus the usual checks
  --target phase1 --push [--replace SHA]   --check, then push publish/phase1 to truth's main; --replace SHA allows
                      replacing truth's main only while it is exactly SHA (--force-with-lease), never otherwise

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

# r490: the matching-decomp repository (Phase 1 commits). Each step: (tag, the commit it must point at, commit
# message, the blob of the README.md it is published with). r503: the front page is pinned per step, so editing
# tools/publish/README_phase1.md for a new commit never changes an older one; a new step pins the new README's blob
# (`git hash-object tools/publish/README_phase1.md` once it is committed).
README_490 = '656ee4f09774247e0ffc3daec9e13070f537ef93'     # commits 1 and 2 as pushed on 8 Nov 14:37 (2d207180)
README_503 = '57502f34b76f182c6d31c2f34bbe2a7270960dfc'     # commit 3 (r503)
README_503C = '81d026035568ef52780b9a4035dbe03b03c46363'    # commit 4 (r503, the comments)
README_739 = '0f4ae6c7b19ef1117ec8a4bb878cf25311bf75b5'    # commit 5 (r739, Phase 1 truly 100 %)
PHASE1 = dict(
    branch='refs/heads/publish/phase1',
    remote='truth',
    urls=('https://github.com/SadBoxMan/brave-fencer-musashi-decomp.git',
          'https://github.com/SadBoxMan/brave-fencer-musashi-decomp'),
    manifest='tools/publish/manifest_phase1.txt',
    front='tools/publish/README_phase1.md',
    steps=(
        ('phase1-complete', '93205e051f21d3f4e98695e104c3e3bd7dea9bae',
         'Phase 1 complete: the matching decompilation at 100% (5 Nov 2026)\n\n'
         'Every function of the 182 checked images (the EXE, the MAIN.CD overlays, the 35 ability packages and the\n'
         '140 stage images) is C or a ruled INCLUDE_ASM block that GCC 2.7.2 + maspsx build to the original bytes.\n'
         'Copy of the working repository\'s commit 93205e05 (5 Nov 2026 11:30 -0500, tag phase1-complete),\n'
         'filtered through tools/publish/manifest_phase1.txt: {n} files. README.md says what the byte check covers\n'
         'and what it does not.\n', README_490),
        ('phase1-final', 'ec96cf483cc3dda56e92c6811be747b42cae7dd0',
         'Phase 1 final: the last match-trick frame pads removed (7 Nov 2026)\n\n'
         'Copy of the working repository\'s commit ec96cf48 (7 Nov 2026 13:59 -0500, tag phase1-final): {n}\n'
         'files. The decomp changes since the previous commit are two cleanups, still byte-identical:\n'
         '- r292, src/stage/engine_8012F5F4.c: three unused frame-pad locals marked MATCH-TRICK removed\n'
         '  (func_80132784 `u8 pad[8]`, func_80132F40 `SVECTOR unused`, func_801397B0 `u8 pad[8]`); the frame size\n'
         '  now comes from plain forms of statements already there (a word load split into bytes, an s16 local,\n'
         '  an if / else).\n'
         '- r373, src/stg/sc03_014_post.c and src/stg/sc03_015_post.c: the zero-size local `u8 c[0];` marked\n'
         '  MATCH-TRICK removed from func_sc03_01x_801898BC (the same function in both images).\n'
         '{other}', README_490),
        ('phase1-pristine', 'bf15da331dc82c5bf701f321e5bfbd5366d99a1f',
         'Original address names restored: the Phase 1 code without the working project\'s names (8 Nov 2026)\n\n'
         'Commit 2\'s code with every name the working project gave during Phase 1 replaced by a neutral one, as a\n'
         'pure rename: no type, size, layout, expression or statement changed. Functions and data are back to the\n'
         'splitter\'s address names (func_8001xxxx / D_8001xxxx; func_scXX_YYY_<addr> for a stage\'s own,\n'
         'func_ovlNN_<addr> for an ability package\'s own), inline helpers are <first caller>_inline, struct and\n'
         'union types struct_<SIZE> / union_<SIZE>, fields field_<OFFSET> (union members m<N>), function-pointer\n'
         'typedefs type_<N>. Kept: the PsyQ / SDK names and the SDK\'s own types and fields, main, s8..u32, every\n'
         'macro, local variables, parameters, labels and every comment. tools/pristine_names.py made the change\n'
         '(README.md, "Names", says how to list every rename).\n'
         'Copy of the working repository\'s commit bf15da33 (8 Nov 2026 15:21 -0500, tag phase1-pristine): {n}\n'
         'files. Built from nothing before publishing: 182 / 182 images byte-identical, engine check 140 / 140.\n',
         README_503),
        ('phase1-pristine-comments', '8f456aa04f5f2d44f45a0844df9bc8262f78929f',
         'Old names in comments replaced by their new names (8 Nov 2026)\n\n'
         'Commit 3 with the descriptive comments kept and the working project\'s names inside them replaced by the\n'
         'new names (177 replacements in 15 files): functions and data by their address names, types and\n'
         'Type.field mentions by struct_<SIZE> / field_<OFFSET>, and the symbol files\' commented-out\n'
         '`Name = 0xADDR` pairs by the name the build gives the address. Comments only: every changed file\'s\n'
         'text outside its comments is commit 3\'s. The C generators tools/abil_bulk/rewrite.py,\n'
         'tools/abil_bulk/m2c_bulk.py and tools/stage_bulk/m2c_stage.py now write the new type names.\n'
         'Copy of the working repository\'s commit 8f456aa0 (8 Nov 2026 15:51 -0500, tag\n'
         'phase1-pristine-comments): {n} files. Built from nothing before publishing: 182 / 182 images\n'
         'byte-identical, engine check 140 / 140.\n',
         README_503C),
        ('phase1-100', 'cfbdf896465650894ac78b8ac45729bad598b0e5',
         'Phase 1 truly 100 %: the 36 code blocks matched, 218 / 218 images byte-identical (14 Nov 2026)\n\n'
         'Commit 4 plus the code blocks commits 1 to 4 did not cover: the 34 loaded behind stage images (SC02_009,\n'
         'SC07_003, SC07_004, SC03_053 / 054 / 056 and 28 shop rooms), MAIN.CD entry 12 (the Continue and save\n'
         'screens) and MAIN.CD entry 9 (an older prologue build nothing on the disc loads): src/blk/, blk/ and the\n'
         'tools that extract and split them, every function of their own code in C. Every target is now exactly\n'
         'the bytes the game loads (disc/payload/, `make blocks`; README.md lists old and new hashes). The only asm\n'
         'left in the game\'s code is the original\'s hand-written func_80020F34 (docs/phase1_hand_asm.md). Every\n'
         'MATCH-TRICK line reviewed: 124 left, each with its reason (docs/match_trick_review.md); the gotos kept\n'
         'state the original\'s control flow. In the 182 earlier images\' sources, 40 fewer MATCH-TRICK lines (149\n'
         'to 109) and unmarked casts and volatiles replaced by natural forms, still byte-identical.\n'
         'Copy of the working repository\'s commit cfbdf896 (14 Nov 2026 13:58 -0500, tag phase1-100): {n} files.\n'
         'Built from nothing before publishing: 218 / 218 images byte-identical, both engine checks PASS.\n',
         README_739),
    ),
)


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


def load_rules(text=None):
    """the manifest's rules; text: a manifest's contents (default: tools/publish/manifest.txt on disk)"""
    allow, deny = [], []
    if text is None:
        text = open(MANIFEST, encoding='utf-8').read()
    for n, line in enumerate(text.splitlines(), 1):
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


def cmd_push(remote_name=REMOTE, urls=REMOTE_URLS, branch=BRANCH, check=None, replace=None):
    if (check or cmd_check)():
        return 1
    short = branch.replace('refs/heads/', '')
    url = subprocess.run(['git', 'remote', 'get-url', '--push', remote_name], cwd=ROOT, capture_output=True,
                         text=True).stdout.strip()
    if url not in urls:
        print(f'refused: remote "{remote_name}" is "{url}", expected {urls[0]}')
        return 1
    for key in (f'remote.{remote_name}.mirror', f'remote.{remote_name}.push', 'push.followTags'):
        val = subprocess.run(['git', 'config', '--get-all', key], cwd=ROOT, capture_output=True, text=True).stdout
        if val.strip() and val.strip() != 'false':
            print(f'refused: git config {key} = {val.strip()} (could push more than {short})')
            return 1
    remote = git('ls-remote', remote_name, REMOTE_BRANCH).split()
    tip = git('rev-parse', '--verify', branch).strip()
    lease = []
    if replace:
        # r490: replacing the remote's main once, only while it is exactly the commit LuciDin agreed to replace
        if not remote or not remote[0].startswith(replace) or len(replace) < 7:
            print(f'refused: --replace {replace}, but {remote_name} main is {remote[0] if remote else "missing"}')
            return 1
        lease = [f'--force-with-lease={REMOTE_BRANCH}:{remote[0]}']
    elif remote and remote[0] != tip:
        r = subprocess.run(['git', 'merge-base', '--is-ancestor', remote[0], tip], cwd=ROOT)
        if r.returncode:
            print(f'refused: {remote_name} main {remote[0][:10]} is not an ancestor of {short} (never force-push; '
                  f'see --replace)')
            return 1
    r = subprocess.run(['git', 'push', '--porcelain', '--no-follow-tags', *lease, remote_name,
                        f'{branch}:{REMOTE_BRANCH}'], cwd=ROOT)
    if r.returncode:
        return r.returncode
    after = git('ls-remote', remote_name, REMOTE_BRANCH).split()
    print(f'{remote_name} main is {after[0][:10] if after else "missing"}; {short} is {tip[:10]}: '
          f'{"in step" if after and after[0] == tip else "MISMATCH"}')
    return 0 if after and after[0] == tip else 1


# ---- r490: the matching-decomp repository -------------------------------------------------------------------------------

def write_tree(entries):
    with tempfile.TemporaryDirectory() as tmp:
        env = dict(os.environ, GIT_INDEX_FILE=os.path.join(tmp, 'index'))
        git('read-tree', '--empty', env=env)
        info = ''.join(f'{mode} {sha}\t{path}\0' for mode, typ, sha, path in entries)
        git('update-index', '-z', '--index-info', env=env, inp=info.encode('utf-8'))
        return git('write-tree', env=env).strip()


def phase1_plan(ref='HEAD'):
    """[(tag, source commit, entries, tree, raw date, message)] for every step, built from the tags with the manifest
    committed at ref and each step's pinned front page. Exits on any problem."""
    rules = load_rules(git('show', f'{ref}:{PHASE1["manifest"]}'))
    plan, prev = [], None
    for tag, want, msg, front_blob in PHASE1['steps']:
        r = subprocess.run(['git', 'cat-file', '-t', front_blob], cwd=ROOT, capture_output=True, text=True)
        if r.stdout.strip() != 'blob':
            sys.exit(f'{tag}: its README blob {front_blob} is not in this repository')
        front = [('100644', 'blob', front_blob, 'README.md')]
        r = subprocess.run(['git', 'rev-parse', '--verify', '-q', f'refs/tags/{tag}^{{commit}}'], cwd=ROOT,
                           capture_output=True, text=True)
        src = r.stdout.strip()
        if src != want:
            sys.exit(f'tag {tag} is {src or "missing"}, expected {want} (the tags are never moved)')
        entries = [e for e in ls_tree(src) if classify(e[3], rules)[0] and e[3] != 'README.md']
        entries.append((front[0][0], 'blob', front[0][2], 'README.md'))
        entries.sort(key=lambda e: e[3])
        bad = check_tree(entries, rules)
        if bad:
            sys.exit(f'refused: {tag} would publish\n  ' + '\n  '.join(bad))
        other = ''
        if prev is not None:
            a = {e[3]: e[2] for e in prev}
            b = {e[3]: e[2] for e in entries}
            decomp = {'src/stage/engine_8012F5F4.c', 'src/stg/sc03_014_post.c', 'src/stg/sc03_015_post.c'}
            changed = sorted(p for p in set(a) | set(b) if a.get(p) != b.get(p) and p not in decomp)
            if changed:
                other = ('Other published files that changed in the working repository between the two commits\n'
                         '(not decomp sources; both commits build all 182 images byte-identical):\n' +
                         ''.join(f'- {p}{"" if p in a else " (new)"}{"" if p in b else " (removed)"}\n'
                                 for p in changed))
        date = git('log', '-1', '--format=%ad', '--date=raw', src).strip()
        plan.append((tag, src, entries, write_tree(entries), date,
                     msg.format(n=len(entries), other=other)))
        prev = entries
    return plan


def phase1_commits(plan, onto=None):
    """commit the plan (deterministic: the source commits' dates); returns the commit ids, oldest first"""
    parent, out = onto, []
    for tag, src, entries, tree, date, msg in plan:
        env = dict(os.environ, GIT_AUTHOR_DATE=date, GIT_COMMITTER_DATE=date)
        parent = git('commit-tree', tree, '-m', msg, *(['-p', parent] if parent else []), env=env).strip()
        out.append(parent)
    return out


def cmd_build_phase1(onto, snapshot_source=None):
    """build every step; an existing branch may only move forward along the rebuild (r503: appending a step)"""
    if onto:
        onto = git('rev-parse', '--verify', onto + '^{commit}').strip()
    branch = PHASE1['branch']
    old = subprocess.run(['git', 'rev-parse', '--verify', '-q', branch], cwd=ROOT, capture_output=True,
                         text=True).stdout.strip()
    if old and not onto:
        # keep the base commit the branch was built on, if any (GitHub's first commit, with --onto)
        first = git('rev-list', '--max-parents=0', old).split()[0]
        if not git('log', '-1', '--format=%s', first).startswith('Phase 1 complete'):
            onto = first
    if snapshot_source is not None:
        want = PHASE1['steps'][-1][1]
        src = git('rev-parse', '--verify', snapshot_source + '^{commit}').strip()
        if src != want:
            print(f'refused: --source {snapshot_source} is {src[:10]}, but the newest step '
                  f'({PHASE1["steps"][-1][0]}) pins {want[:10]}')
            return 1
    plan = phase1_plan()
    commits = phase1_commits(plan, onto)
    if old and old not in commits:
        print(f'refused: {branch} is {old[:10]}, which is not one of the rebuild\'s commits '
              f'{[c[:10] for c in commits]} (the manifest, a front page or --onto changed). If that is meant, delete '
              f'the local branch first: git branch -D publish/phase1')
        return 1
    if snapshot_source is not None and old != commits[-2]:
        print(f'refused: --snapshot appends one commit, but {branch} is {old[:10] if old else "missing"}, not the '
              f'commit before the newest step ({commits[-2][:10]})')
        return 1
    if old == commits[-1]:
        print(f'nothing new: {branch} is already {old[:10]}')
        return 0
    git('update-ref', branch, commits[-1], old or '')
    for (tag, src, entries, tree, date, msg), c in zip(plan, commits):
        new = not old or commits.index(c) > commits.index(old)
        print(f'{c[:10]}  {tag} ({src[:8]}): {len(entries)} files, tree {tree[:10]}, {msg.splitlines()[0]}'
              f'{"  (new)" if new else ""}')
    print(f'publish/phase1 {old[:10] + " -> " if old else "-> "}{commits[-1][:10]}' +
          (f' (on {onto[:10]})' if onto else ''))
    return 0


def cmd_check_phase1():
    branch = PHASE1['branch']
    tip = subprocess.run(['git', 'rev-parse', '--verify', '-q', branch], cwd=ROOT, capture_output=True,
                         text=True).stdout.strip()
    if not tip:
        print('no publish/phase1 branch yet (run --target phase1 --build-phase1)')
        return 1
    commits = git('rev-list', '--reverse', branch).split()
    bad = []
    n = len(PHASE1['steps'])
    if len(commits) not in (n, n + 1):
        bad.append(f'{len(commits)} commits (expected the {n} steps, optionally on one base commit)')
    onto = commits[0] if len(commits) == n + 1 else None
    plan = phase1_plan()
    expect = phase1_commits(plan, onto)
    if commits[-n:] != expect:
        bad.append(f'the branch {[c[:10] for c in commits[-n:]]} differs from a fresh rebuild from the tags '
                   f'{[c[:10] for c in expect]}')
    rules = load_rules(git('show', f'HEAD:{PHASE1["manifest"]}'))
    for c in commits:
        for b in check_tree(ls_tree(c), rules):
            bad.append(f'{c[:10]}: {b}')
    for r in git('for-each-ref', '--format=%(refname)', 'refs/heads').split():
        if r == branch:
            continue
        base = subprocess.run(['git', 'merge-base', branch, r], cwd=ROOT, capture_output=True, text=True).stdout.strip()
        if base:
            bad.append(f'shares history with {r} (merge base {base[:10]})')
    if bad:
        print(f'publish/phase1 FAILS the check ({len(bad)} problems):')
        for b in bad[:30]:
            print('  ' + b)
        return 1
    for (tag, src, entries, tree, date, msg), c in zip(plan, commits[-n:]):
        print(f'  {c[:10]}  = {tag} ({src[:8]}) filtered: {len(entries)} files, {msg.splitlines()[0]}')
    print(f'publish/phase1 {tip[:10]}: {len(commits)} commits, equal to a fresh rebuild from the tags, all clean'
          + (f' (base {onto[:10]})' if onto else ''))
    return 0


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    g = ap.add_mutually_exclusive_group(required=True)
    g.add_argument('--report', nargs='?', const='', metavar='OUT')
    g.add_argument('--snapshot', action='store_true')
    g.add_argument('--build-phase1', action='store_true')
    g.add_argument('--check', action='store_true')
    g.add_argument('--push', action='store_true')
    ap.add_argument('--source', default='main')
    ap.add_argument('--target', choices=('decomp', 'phase1'), default='decomp')
    ap.add_argument('--onto', metavar='SHA')
    ap.add_argument('--replace', metavar='SHA')
    a = ap.parse_args()
    if a.target == 'phase1':
        if a.snapshot:
            if a.source == 'main':
                sys.exit('--target phase1 --snapshot needs --source (the commit of the newest step, e.g. pristine)')
            return cmd_build_phase1(a.onto, snapshot_source=a.source)
        if a.report is not None:
            text = git('show', f'HEAD:{PHASE1["manifest"]}')
            global load_rules
            plain = load_rules
            load_rules = lambda t=None: plain(text if t is None else t)   # noqa: E731
            return cmd_report(a.source if a.source != 'main' else 'refs/tags/phase1-final', a.report)
        if a.build_phase1:
            return cmd_build_phase1(a.onto)
        if a.check:
            return cmd_check_phase1()
        return cmd_push(PHASE1['remote'], PHASE1['urls'], PHASE1['branch'], cmd_check_phase1, a.replace)
    if a.build_phase1 or a.onto or a.replace:
        sys.exit('--build-phase1, --onto and --replace belong to --target phase1')
    if a.report is not None:
        return cmd_report(a.source, a.report)
    if a.snapshot:
        return cmd_snapshot(a.source)
    if a.check:
        return cmd_check()
    return cmd_push()


if __name__ == '__main__':
    sys.exit(main())
