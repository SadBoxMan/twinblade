"""List the functions new in src/ against a base ref (default main) that carry steering lines: MATCH-TRICK marks,
do-while(0)s, volatiles, register asm, HELD notes, unmarked `unused` locals. A function with more than one is printed as
NEEDS A RULING (r216: two placements had to be put back); the others with any are printed as a note.
usage: python tools/stage_bulk/tricks.py [--base REF] [--strict] [file or glob ...]
  (default files: every src/**/*.c; run from the repo root after placing, before asking for a merge)
Counting follows the rulings: an unused frame-pad local is natural (30 Oct) and is only reported; the same marked line
repeated in copied blocks counts once (30 Oct). --strict counts as r216 did (pads count, every copy counts).
From r216's build/work/r216/tricks.py (C:/tw/engine4), generalised in r222; collect.py uses steering()."""
import glob, os, re, subprocess, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
import put_func as P

UNUSED = re.compile(r'\s+[A-Za-z_][\w ]*\s+\**unused\w*(\[[^\]]*\])?;')
# a local declaration with no initialiser (`u8 pad[8];`, `MATRIX unused, m;`): a marked one is a frame pad
DECL = re.compile(r'\s*(?!(?:goto|return|break|continue)\b)(?:[A-Za-z_]\w*\s+)+\**\w+\s*(?:\[[^\]]*\])?'
                  r'(?:\s*,\s*\**\w+\s*(?:\[[^\]]*\])?)*\s*;')


def steering(body, strict=False):
    """-> (count, {kind: n}) for one function's text; count is what decides 'needs a ruling' (> 1)"""
    lines = body.splitlines()
    marks = [l.strip() for l in lines if 'MATCH-TRICK' in l]
    pads = [l for l in lines if UNUSED.match(l) and 'MATCH-TRICK' not in l]
    pads += [m for m in marks if DECL.fullmatch(re.sub(r'/\*.*?(\*/|$)', '', m).strip())]
    k = dict(marks=len(marks), do_while0=len(re.findall(r'while \(0\)', body)), volatile=body.count('volatile'),
             register_asm=len(re.findall(r'\basm\s*\(\s*"\$', body)), held=body.count('HELD'), pads=len(pads))
    if strict:
        n = k['marks'] + sum(1 for l in pads if 'MATCH-TRICK' not in l)
        return max(n, k['do_while0'], k['volatile']) + k['register_asm'] + k['held'], k
    # marked lines that are not frame pads, the same text in copied blocks once; a do-while(0) / volatile / register
    # asm beyond the number of marks is unmarked and counts on its own
    real = [m for m in marks if m not in pads]
    extra = max(0, k['do_while0'] + k['volatile'] + k['register_asm'] - len(real))
    return len({re.sub(r'\s+', ' ', m) for m in real}) + extra + k['held'], k


def main():
    args = sys.argv[1:]
    base = 'main'
    if '--base' in args:
        i = args.index('--base'); base = args[i + 1]; del args[i:i + 2]
    strict = '--strict' in args
    args = [a for a in args if a != '--strict']
    files = sorted({f for a in (args or ['src/**/*.c']) for f in glob.glob(a, recursive=True)})
    bad = 0
    for p in files:
        rel = p.replace(os.sep, '/')
        old = subprocess.run(['git', 'show', f'{base}:{rel}'], capture_output=True, text=True, encoding='utf-8').stdout
        _, fold = P.split(old)
        _, fnew = P.split(open(p, encoding='utf-8').read())
        for n, b in fnew.items():
            if n in fold:
                continue
            c, k = steering(b, strict)
            if not any(k.values()):
                continue
            what = ', '.join(f'{x} {v}' for x, v in k.items() if v)
            print(('NEEDS A RULING ' if c > 1 else 'note ') + f'{rel} {n}: {what}')
            bad += c > 1
    print(bad, 'function(s) need a ruling')


if __name__ == '__main__':
    main()
