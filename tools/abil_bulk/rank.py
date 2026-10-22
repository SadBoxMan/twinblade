import glob, re, sys
rows = []
for f in glob.glob(sys.argv[1] + '/*.log'):
    t = open(f, encoding='utf-8-sig', errors='replace').read()
    for m in re.finditer(r'^(\w+) gcc-2\.7\.2 -O2: differs \((\d+) vs (\d+) instructions\)\n((?:.*\n)*?)(?=^\w+ gcc|\Z|^\d+ of)', t, re.M):
        bad = m[4].count('!!')
        rows.append((bad, int(m[2]), m[1], int(m[3])))
    for m in re.finditer(r'In function `(\w+)', t):
        rows.append((999, 0, m[1], 0))
rows.sort()
import collections
print('differs:', sum(1 for r in rows if r[0] < 999), 'compile errors:', sum(1 for r in rows if r[0] == 999))
for r in rows[:int(sys.argv[2])]:
    print(r)
