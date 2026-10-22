"""Hand round on one bulk-pass function: build/work/h/<func>.c (its draft and the declarations it uses, written once
from the bulk folder), compiled and compared; prints the differing lines with two lines of context.
usage: one.py <func> [--dir build/work/m2c] [--O0] [--all]       (--all: the whole diff)"""
import os
import re
import subprocess
import sys

sys.path.insert(0, 'tools')
import put_func as P  # noqa: E402

args = sys.argv[1:]
D = args[args.index('--dir') + 1] if '--dir' in args else 'build/work/m2c'
fn = args[0]
path = f'build/work/h/{fn}.c'
if not os.path.exists(path):
    os.makedirs('build/work/h', exist_ok=True)
    text = open(f'{D}/{fn.split("_")[1]}.c', encoding='utf-8').read()
    decl, funcs = P.split(text)
    body = funcs[fn]
    words = set(re.findall(r'\w+', body))
    ds = [c for c in P.chunks(decl) if not (s := set(re.findall(r'\b(?:func|D|jtbl)_\w+', c))) or s & words]
    ds = [c for c in ds if not re.match(rf'^[\w \*]+\b{fn}\(', c)]
    open(path, 'w', newline='\n').write('#include "common.h"\n#include "abil.h"\n\n' + '\n'.join(ds) + '\n\n' + body + '\n')
r = subprocess.run([sys.executable, 'tools/cmp_func.py', path, fn, '2.7.2', '-O0' if '--O0' in args else '-O2'],
                   capture_output=True, text=True)
out = (r.stdout + r.stderr).splitlines()
if '--all' in args or not out or 'differs' not in out[0]:
    print('\n'.join(out[:200]))
else:
    print(out[0])
    keep = set()
    for i, l in enumerate(out):
        if l.startswith('  !!'):
            keep.update(range(max(1, i - 2), min(len(out), i + 3)))
    if not keep:                       # a different count: the tail
        keep.update(range(max(1, len(out) - 12), len(out)))
    last = 0
    for i in sorted(keep):
        if i > last + 1:
            print('   ...')
        print(out[i])
        last = i
print(path)
