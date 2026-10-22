"""the cmp_all diff of a bulk-pass function and its draft.  usage: show.py [--dir build/work/m2c] <func> [...]"""
import re
import sys

args = sys.argv[1:]
D = 'build/work/m2c'
if args and args[0] == '--dir':
    D, args = args[1], args[2:]
for fn in args:
    pkg = fn.split('_')[1]
    t = open(f'{D}/{pkg}.c.log', encoding='utf-8-sig').read()
    i = t.index(fn + ' gcc')
    m = re.compile(r'^\w+ gcc-2\.7\.2|^\d+ of', re.M).search(t, i + 10)
    print(t[i:m.start() if m else None].rstrip())
    src = open(f'{D}/{pkg}.c').read()
    k = src.index(fn + '(')
    print(src[src.rfind('\n', 0, k):src.find('\n}\n', k) + 3])
