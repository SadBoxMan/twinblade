"""Summarise a draft folder's misses from the cmp logs: compile errors grouped, and the nearest misses with their
differing lines. usage: misses.py <dir> [N=20]"""
import glob, os, re, sys, collections
d = sys.argv[1]; N = int(sys.argv[2]) if len(sys.argv) > 2 else 20
errs, near = collections.Counter(), []
for f in glob.glob(os.path.join(d, '*.c.log')):
    t = open(f, encoding='utf-8', errors='replace').read()
    first = t.splitlines()[0] if t else ''
    n = os.path.basename(f)[:-6]
    if 'MATCH' in first and 'differs' not in first: continue
    m = re.search(r'\((\d+) vs (\d+) instructions\)', first)
    if not m:
        e = next((l for l in t.splitlines() if re.search(r'\.i:\d+: (?!warning)', l)), first)
        errs[re.sub(r"`\w+'", 'X', re.sub(r'.*\.i:\d+: ', '', e))] += 1
        continue
    bad = [l for l in t.splitlines() if l.startswith('  !!')]
    near.append((abs(int(m[1]) - int(m[2])) * 10 + len(bad), n, m[1], m[2], bad))
for e, c in errs.most_common(12): print(f'{c:4} {e}')
near.sort()
print(len(near), 'compiled misses')
for k, n, a, b, bad in near[:N]:
    print(f'-- {n} ({a} vs {b})'); print('\n'.join(bad[:4]))
