r"""Gather a round's helper drafts for placement: copy every <stubs>/**/<func>.c whose function is still INCLUDE_ASM in
src/ into <out> (flat, <func>.c), skipping untouched stubs (`void f(void) {}`), drafts that carry HELD or `__asm__`
(they wait for LuciDin's ruling), drafts with more than one steering line (tricks.steering: a ruling first) and the
names in the skip file. Then run cmp_par.py and place_stage.py on <out> (PowerShell).
usage: python tools/stage_bulk/collect.py <stubs> <out> [--skip FILE] [--strict]   (repo root; --strict: r216's count)
  e.g. collect.py C:/tw/engine4/build/work/r216/s build/work/q1   (r216's per-unit folders, r221's per-stage folders)
From r216's build/work/r216/collect.py, generalised in r222 (any src/ area, any stubs folder)."""
import glob, os, re, shutil, sys
from tricks import steering


def main():
    args = sys.argv[1:]
    skipf = None
    if '--skip' in args:
        i = args.index('--skip'); skipf = args[i + 1]; del args[i:i + 2]
    strict = '--strict' in args
    args = [a for a in args if a != '--strict']
    stubs, out = args
    os.makedirs(out, exist_ok=True)
    asm = set()
    for f in glob.glob('src/**/*.c', recursive=True):
        asm |= set(re.findall(r'^INCLUDE_ASM\("[^"]*",\s*(\w+)\);', open(f, encoding='utf-8').read(), re.M))
    skip = {l.strip() for l in open(skipf) if l.strip()} if skipf else set()
    n = 0
    seen = {}
    for p in sorted(glob.glob(os.path.join(stubs, '**', '*.c'), recursive=True)):
        fn = os.path.basename(p)[:-2]
        if fn not in asm or fn in skip:
            continue
        t = open(p, encoding='utf-8').read()
        if re.search(r'^void ' + fn + r'\(void\) \{\n\}', t, re.M):   # an untouched stub
            continue
        if 'HELD' in t or '__asm__' in t:
            print('held, not copied:', fn); continue
        k = t.find(fn + '(')
        c, kinds = steering(t[k:], strict)
        if c > 1:
            print('more than one steering line, not copied (needs a ruling):', fn, kinds); continue
        if fn in seen:
            print(f'two drafts of {fn}: {seen[fn]} kept, {p} not copied'); continue
        seen[fn] = p
        shutil.copy(p, os.path.join(out, fn + '.c'))
        n += 1
    print(n, 'copied')


if __name__ == '__main__':
    main()
