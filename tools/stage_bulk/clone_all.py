"""Clone matched stage code into every split stage until nothing new lands (r146, docs/decomp_pilot.md Part 5).
Each pass: tools/stage_clone.py --all writes the drafts (every function whose census shape is matched somewhere and
still asm here), then per stage cmp_par.py compiles them and place_stage.py places the matches (make check-<stage>
after each group, so a stage is never left red). A pass that places nothing ends it; the next pass takes the next
source of a shape (--alt), so a draft that failed from one source is retried from another.
Appends one line per stage and pass to <root>/_log.csv. Run from PowerShell (Git Bash hangs in maspsx).
--par N (r147): N stages at a time (each touches only its own src/stg file and build/stg folder).
usage: clone_all.py <root> [jobs=16] [--par N] [STAGE ...]"""
import csv, glob, os, re, subprocess, sys, threading, time
from concurrent.futures import ThreadPoolExecutor
args = sys.argv[1:]
par = 1
if '--par' in args:
    i = args.index('--par'); par = int(args[i + 1]); del args[i:i + 2]
root = args[0]
jobs = args[1] if len(args) > 1 else '16'
only = {s.lower() for s in args[2:]}
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
log = os.path.join(root, '_log.csv')
os.makedirs(root, exist_ok=True)
new = not os.path.exists(log)
with open(log, 'a', newline='') as f:
    if new: csv.writer(f).writerow(['pass', 'stage', 'drafts', 'match', 'placed', 'deferred', 'seconds', 'time'])
lock = threading.Lock()

def one(p, d):
    st = os.path.basename(d)
    drafts = [x for x in glob.glob(os.path.join(d, '*.c')) if not os.path.basename(x).startswith('_')]
    if not drafts or (only and st not in only):
        return 0
    t = time.time()
    c = subprocess.run([sys.executable, 'tools/stage_bulk/cmp_par.py', d, jobs], capture_output=True, text=True, env=env)
    m = re.search(r'(\d+) / (\d+) match', c.stdout)
    match = int(m[1]) if m else 0
    placed = deferred = 0
    if match:
        pl = subprocess.run([sys.executable, 'tools/stage_bulk/place_stage.py', d], capture_output=True, text=True,
                            env=dict(env, TWINBLADE_STG=st))
        m2 = re.search(r'(\d+) placed, (\d+) deferred', pl.stdout)
        placed, deferred = (int(m2[1]), int(m2[2])) if m2 else (0, 0)
        if not m2: print(st, 'place_stage:', (pl.stdout + pl.stderr)[-800:], flush=True)
    row = [p, st, len(drafts), match, placed, deferred, round(time.time() - t), time.strftime('%H:%M:%S')]
    with lock:
        with open(log, 'a', newline='') as f: csv.writer(f).writerow(row)
        print(*row, flush=True)
    return placed

p = 0
while True:
    out = os.path.join(root, f'p{p}')
    r = subprocess.run([sys.executable, 'tools/stage_clone.py', '--all', out, '--alt', str(p)], capture_output=True,
                       text=True, env=env)
    open(os.path.join(root, f'p{p}.log'), 'w').write(r.stdout + r.stderr)
    print(r.stdout.splitlines()[-1] if r.stdout else r.stderr[-500:], flush=True)
    dirs = sorted(glob.glob(os.path.join(out, '*')))
    with ThreadPoolExecutor(par) as ex:
        total = sum(ex.map(lambda d: one(p, d), dirs))
    print(f'pass {p}: {total} placed', flush=True)
    if total == 0 or p >= 4: break
    p += 1
