"""r151 (S1, folded in by r142): place drafts in parallel: per stage folder under each <root>: fix_decl, cmp_par,
place_stage, twice (draft-vs-draft clashes). Stages run N at a time (each touches only its own src/stg file and
build/stg folder). Several roots of the same stage are merged into one pass per stage. Works in the checkout it lives
in (any worktree); run from PowerShell.
  --par N             stages at a time, default 4 (CPU cap; each compiles 4 at a time)
  --stages SC01,SC02  only the stages whose name starts with one of these prefixes (each stream its own groups)
usage: place_par.py <root> [<root> ...] [--par 4] [--stages PREFIX,...]"""
import glob, os, re, shutil, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
args = sys.argv[1:]
par = 4
if '--par' in args:
    i = args.index('--par'); par = int(args[i + 1]); del args[i:i + 2]
prefixes = ()
if '--stages' in args:
    i = args.index('--stages'); prefixes = tuple(s.strip().lower() for s in args[i + 1].split(',') if s.strip()); del args[i:i + 2]
args = [os.path.abspath(a) for a in args]
S = os.path.dirname(os.path.abspath(__file__))
WT = os.path.dirname(os.path.dirname(S))   # the checkout (any worktree)
py = os.path.join(WT, '.venv', 'Scripts', 'python.exe')
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
os.chdir(WT)
stages = {}
for r in args:
    for d in glob.glob(os.path.join(r, 'sc*_*')):
        if prefixes and not os.path.basename(d).lower().startswith(prefixes):
            continue
        stages.setdefault(os.path.basename(d), []).append(d)


def one(st):
    ds = stages[st]
    d = ds[0]
    for x in ds[1:]:
        for f in glob.glob(os.path.join(x, 'func_*.c')):
            if not os.path.exists(os.path.join(d, os.path.basename(f))): shutil.copy(f, d)
    tot = 0; lines = []
    for p in (1, 2):
        left = [f for f in glob.glob(os.path.join(d, '*.c')) if not os.path.basename(f).startswith('_')]
        if not left: break
        subprocess.run([py, os.path.join(S, 'fix_decl.py'), st, d], capture_output=True, env=env)
        c = subprocess.run([py, 'tools/stage_bulk/cmp_par.py', d, '4'], capture_output=True, text=True, env=env).stdout.strip()
        pl = subprocess.run([py, 'tools/stage_bulk/place_stage.py', d], capture_output=True, text=True,
                            env=dict(env, TWINBLADE_STG=st))
        m = re.search(r'(\d+) placed, (\d+) deferred', pl.stdout)
        lines.append('%s pass %d: %s; %s' % (st, p, c, m[0] if m else (pl.stdout + pl.stderr)[-300:]))
        if not m or m[1] == '0': break
        tot += int(m[1])
        for f in open(os.path.join(d, '_placed.txt')).read().split():
            for x in glob.glob(os.path.join(d, f + '.c*')): os.remove(x)
    print('\n'.join(lines), flush=True)
    return tot


with ThreadPoolExecutor(par) as ex:
    n = sum(ex.map(one, sorted(stages)))
print('total placed:', n)
