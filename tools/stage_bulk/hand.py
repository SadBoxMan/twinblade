"""Hand round on one stage bulk-pass function (r143): build/work/hs/<func>.c, copied once from the bulk folder's
draft (self-contained: includes, typedefs, declarations), compiled against the original (cmp_func -O2; -O0 in a stage's -O0 unit, r211); prints the
first line and the differing lines with one line of context. Run from PowerShell.
usage: hand.py <func> [--dir build/work/sg2] [--all]"""
import os, shutil, subprocess, sys
sys.path.insert(0, 'tools')
import stage_units as U  # r211: a stage -O0 unit's function compiles -O0
args = sys.argv[1:]
fn = args[0]
D = args[args.index('--dir') + 1] if '--dir' in args else 'build/work/sg2'
path = f'build/work/hs/{fn}.c'
if not os.path.exists(path):
    os.makedirs('build/work/hs', exist_ok=True)
    shutil.copy(f'{D}/{fn}.c', path)
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
r = subprocess.run([sys.executable, 'tools/cmp_func.py', path, fn, '2.7.2', U.opt_of(fn)], capture_output=True, text=True,
                   env=env)
lines = (r.stdout + r.stderr).splitlines()
if '--all' in args or not lines or 'instructions' not in lines[0]:
    print('\n'.join(lines[:80])); sys.exit()
print(lines[0])
keep = set()
for i, l in enumerate(lines):
    if l.startswith('  !!'):
        keep |= {i - 1, i, i + 1}
print('\n'.join(lines[i] for i in sorted(keep) if 0 < i < len(lines))[:2500])
