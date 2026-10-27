"""Clone matched stage code into every split stage until nothing new lands (r146, docs/decomp_pilot.md Part 5).
Each pass: tools/stage_clone.py --all writes the drafts (every function whose census shape is matched somewhere and
still asm here), then per stage cmp_par.py compiles them and place_stage.py places the matches (make check-<stage>
after each group, so a stage is never left red). A pass that places nothing ends it; the next pass takes the next
source of a shape (--alt), so a draft that failed from one source is retried from another.
Appends one line per stage and pass to <root>/_log.csv. Run from PowerShell (Git Bash hangs in maspsx).
--par N (r147): N stages at a time (each touches only its own src/stg file and build/stg folder).
--stages SC01,SC02 (r142, 22 Oct): place only in stages whose name starts with one of these prefixes, so two streams
can each clone inside their own stage groups (the drafts are still written for every stage; only placing is limited).
jobs: compiles at a time per stage, default 4 (LuciDin's CPU cap with several streams building, 22 Oct; never above 8).
usage: clone_all.py <root> [jobs=4] [--par N] [--stages PREFIX,...] [--allow-pending] [--passes N] [STAGE ...]"""
import csv, glob, os, re, subprocess, sys, threading, time
from concurrent.futures import ThreadPoolExecutor
import argparse
# r208: argparse (`clone_all.py --help` used to run a full unfiltered pass into a folder named `--help`, r203)
ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
ap.add_argument('root', help='output root for the passes (drafts in <root>/p<N>/<stage>/, log <root>/_log.csv)')
ap.add_argument('jobs', nargs='?', default='4', help='compiles at a time per stage (default 4, never above 8)')
ap.add_argument('only', nargs='*', help='place only in these stages (names)')
ap.add_argument('--par', type=int, default=1, help='stages at a time (CPU cap: 4)')
ap.add_argument('--stages', default='', help='place only in stages starting with one of these prefixes: SC01,SC02')
ap.add_argument('--allow-pending', action='store_true',
                help='also clone from sources in tools/stage_bulk/pending_rulings.txt (skipped by default)')
ap.add_argument('--passes', type=int, default=5, help='at most this many passes (default 5)')
a = ap.parse_intermixed_args()   # r211: stage names may follow --par / --stages
if a.root.startswith('-') or not re.fullmatch(r'\d+', a.jobs):
    ap.error(f'bad root or jobs: {a.root!r} {a.jobs!r}')
root, jobs, par = a.root, a.jobs, a.par
prefixes = tuple(s.strip().lower() for s in a.stages.split(',') if s.strip())
only = {s.lower() for s in a.only}
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
    if not drafts or (only and st not in only) or (prefixes and not st.lower().startswith(prefixes)):
        return 0
    t = time.time()
    # r211: the village (src/stage/sc03_001.c) compiles against asm/stage and places into src/stage (no TWINBLADE_STG)
    village = st.lower() == 'sc03_001'
    c = subprocess.run([sys.executable, 'tools/stage_bulk/cmp_par.py', d, jobs], capture_output=True, text=True,
                       env=dict(env, TWINBLADE_OVL='stage') if village else env)
    m = re.search(r'(\d+) / (\d+) match', c.stdout)
    match = int(m[1]) if m else 0
    placed = deferred = 0
    if match:
        pl = subprocess.run([sys.executable, 'tools/stage_bulk/place_stage.py', d], capture_output=True, text=True,
                            env=env if village else dict(env, TWINBLADE_STG=st))
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
    r = subprocess.run([sys.executable, 'tools/stage_clone.py', '--all', out, '--alt', str(p)] +
                       (['--allow-pending'] if a.allow_pending else []), capture_output=True,
                       text=True, env=env)
    open(os.path.join(root, f'p{p}.log'), 'w').write(r.stdout + r.stderr)
    print(r.stdout.splitlines()[-1] if r.stdout else r.stderr[-500:], flush=True)
    dirs = sorted(glob.glob(os.path.join(out, '*')))
    with ThreadPoolExecutor(par) as ex:
        total = sum(ex.map(lambda d: one(p, d), dirs))
    print(f'pass {p}: {total} placed', flush=True)
    if total == 0 or p >= a.passes - 1: break
    p += 1
