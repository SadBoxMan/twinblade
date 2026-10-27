"""Compile every one-function draft in a folder against the original (tools/cmp_func.py, -O2; -O0 in a stage's -O0 unit, r209), several at a time; the
output goes to <func>.c.log, MATCH names to <dir>/_matched.txt. Run from PowerShell (Git Bash hangs in maspsx).
usage: cmp_par.py <dir> [jobs=4]   (4: LuciDin's CPU cap, r192)"""
import glob, os, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
sys.path.insert(0, 'tools')
import stage_units as U
d = sys.argv[1]; jobs = int(sys.argv[2]) if len(sys.argv) > 2 else 4
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
def one(f):
    n = os.path.basename(f)[:-2]
    # r209: a function of a stage's -O0 unit compiles -O0 (tools/stage_units.py)
    r = subprocess.run([sys.executable, 'tools/cmp_func.py', f, n, '2.7.2', U.opt_of(n)], capture_output=True, text=True, env=env)
    out = (r.stdout + r.stderr).strip()
    open(f + '.log', 'w', encoding='utf-8').write(out + '\n')
    first = out.splitlines()[0] if out else ''
    return n, 'MATCH' in first and 'differs' not in first
files = sorted(f for f in glob.glob(os.path.join(d, '*.c')) if not os.path.basename(f).startswith('_'))
with ThreadPoolExecutor(jobs) as ex:
    res = list(ex.map(one, files))
ok = [n for n, m in res if m]
open(os.path.join(d, '_matched.txt'), 'w').write('\n'.join(ok) + '\n')
print(f'{len(ok)} / {len(res)} match')
