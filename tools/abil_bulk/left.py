"""rank.py's nearest misses, without the functions already placed in src/abil (r127):
    python tools/abil_bulk/left.py <dir> [N] [--skip f1,f2]   (--skip: parked names)"""
import glob, re, subprocess, sys
args = sys.argv[1:]
skip = set(args[args.index('--skip') + 1].split(',')) if '--skip' in args else set()
asm = set()
for f in glob.glob('src/abil/*.c'):
    asm |= set(re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', open(f, encoding='utf-8').read()))
if '--matches' in args:          # the MATCHes in a folder's logs (e.g. a rewrite pass) not placed yet
    m = set()
    for f in glob.glob(args[args.index('--matches') + 1] + '/**/*.log', recursive=True):
        m |= set(re.findall(r'^(\w+) gcc-2\.7\.2 -O\d: MATCH', open(f, encoding='utf-8-sig', errors='replace').read(), re.M))
    print('unplaced matches:', ' '.join(sorted(m & asm)) or 'none')
    sys.exit()
out = subprocess.run([sys.executable, 'tools/abil_bulk/rank.py', args[0], '9999'], capture_output=True, text=True).stdout
n = int(args[1]) if len(args) > 1 and args[1].isdigit() else 40
rows = [l for l in out.splitlines()[1:] if (m := re.search(r"'(func_\w+)'", l)) and m[1] in asm and m[1] not in skip]
print(len(asm), 'left in C;', len(rows), 'ranked')
print('\n'.join(rows[:n]))
