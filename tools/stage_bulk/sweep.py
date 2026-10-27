"""The bulk sweep over every split stage (r147, docs/decomp_pilot.md Part 6): round.ps1 (m2c drafts, levers, placement
with each stage's own check) on several stages at once, a second round on a stage whose first placed anything, then
clone_all.py so the group's matches land in every stage with the same shape. Stages go in order of shared shapes
(stage_census.py's `shared` column, unmatched shapes that occur in 2+ stages), one member of each alias group (the
clone pass fills the others). Run from PowerShell (Git Bash hangs in maspsx).
usage: sweep.py order <root>                     write <root>/_order.txt (one stage a line)
       sweep.py group <root> <first> <count> [workers=5] [clone_par=6]
                                                 bulk stages first..first+count-1 of the order, then clone_all
Appends one line per stage to <root>/_bulk.csv; the clone pass logs to <root>/clone_<first>/_log.csv."""
import csv, glob, os, re, subprocess, sys, threading, time
from concurrent.futures import ThreadPoolExecutor
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
cmd, root = sys.argv[1], sys.argv[2]
os.makedirs(root, exist_ok=True)
order_f = os.path.join(root, '_order.txt')

def asm_left(st):
    # r209: with <stage>_o0.c and _post.c (tools/stage_units.py)
    return sum(len(re.findall(r'^INCLUDE_ASM', open(f, encoding='utf-8').read(), re.M))
               for f in glob.glob(f'src/stg/{st}.c') + glob.glob(f'src/stg/{st}_o0.c') + glob.glob(f'src/stg/{st}_post.c'))

if cmd == 'order':
    c = os.path.join(root, '_census.csv')
    r = subprocess.run([sys.executable, '-I', 'tools/stage_census.py', '--csv', c], capture_output=True, text=True)
    same = [l.split(':', 1)[1].split() for l in r.stdout.splitlines() if l.strip().startswith('same code:')]
    skip = {s for g in same for s in g[1:]}
    rows = [x for x in csv.DictReader(open(c)) if x['stage'] != 'SC03_001' and x['stage'] not in skip
            and os.path.exists(f"stg/{x['stage'].lower()}.yaml")]
    rows.sort(key=lambda x: (-int(x['shared']), -int(x['unique']), x['stage']))
    open(order_f, 'w').write(''.join(x['stage'].lower() + '\n' for x in rows))
    print(len(rows), 'stages;', len(skip), 'alias members left to the clone pass')
    sys.exit()

first, count = int(sys.argv[3]), int(sys.argv[4])
workers = int(sys.argv[5]) if len(sys.argv) > 5 else 5
par = sys.argv[6] if len(sys.argv) > 6 else '6'
stages = [l.strip() for l in open(order_f) if l.strip()][first:first + count]
lock = threading.Lock()
out = os.path.join(root, '_bulk.csv')
if not os.path.exists(out):
    open(out, 'w', newline='').write('stage,asm_before,drafts,round1,round2,matched,asm_after,seconds,time\n')

def rnd(st, tag):
    name = f'{os.path.basename(root)}/{st}{tag}'
    r = subprocess.run(['powershell', '-NoProfile', '-ExecutionPolicy', 'Bypass', '-File', 'tools/stage_bulk/round.ps1',
                        name], capture_output=True, text=True, env=dict(env, TWINBLADE_STG=st))
    open(os.path.join(root, f'{st}{tag}.log'), 'w').write(r.stdout + r.stderr)
    if f'{st}.bin: OK' not in r.stdout:
        print(st, tag, 'check line missing:', r.stdout[-400:], r.stderr[-400:], flush=True)

def one(st):
    t = time.time()
    a0 = asm_left(st)
    rnd(st, 'a')
    drafts = len([f for f in os.listdir(os.path.join('build/work', os.path.basename(root), st + 'a'))
                  if f.endswith('.c') and not f.startswith('_')]) if os.path.isdir(
        os.path.join('build/work', os.path.basename(root), st + 'a')) else 0
    a1 = asm_left(st)
    a2 = a1
    if a1 < a0 and a1:
        rnd(st, 'b')
        a2 = asm_left(st)
    row = [st, a0, drafts, a0 - a1, a1 - a2, a0 - a2, a2, round(time.time() - t), time.strftime('%H:%M:%S')]
    with lock:
        with open(out, 'a', newline='') as f: csv.writer(f).writerow(row)
        print(*row, flush=True)

t0 = time.time()
with ThreadPoolExecutor(workers) as ex:
    list(ex.map(one, stages))
print(f'bulk: {len(stages)} stages in {round(time.time() - t0)} s', flush=True)
t1 = time.time()
r = subprocess.run([sys.executable, 'tools/stage_bulk/clone_all.py', os.path.join(root, f'clone_{first}'), '4',
                    '--par', par], env=env)
print(f'clone: {round(time.time() - t1)} s', flush=True)
