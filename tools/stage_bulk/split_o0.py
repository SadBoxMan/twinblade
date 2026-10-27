#!/usr/bin/env python3
"""r209: split a stage's C file at its -O0 run (tools/stage_units.py): src/stg/<stage>.c keeps the code before the run,
<stage>_o0.c gets the run, <stage>_post.c the code after it. Run once per stage after its config has the three `c`
subsegments (tools/gen_stage_cfgs.py), then re-split it (`make split-stg STG=<stage>`).

The new files start with the old file's includes and the declarations above the cut, then a prototype for every
function the earlier part defines (its own header; `T f();` for K&R), so their calls compile as they did in one file.
INCLUDE_ASM lines move to the new nonmatchings folders. A file that already exists is not overwritten.

Usage: split_o0.py SC03_014 [...]"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import put_func as P  # noqa: E402
import stage_census as C  # noqa: E402
import stage_units as U  # noqa: E402

ITEM = re.compile(r'^INCLUDE_ASM\("[^"]+",\s*(func_\w+?_([0-9A-F]{8}))\);[^\n]*\n?', re.M)


def items(t):
    """[(address, start, end)] of the top-level functions: INCLUDE_ASM lines and C definitions"""
    out = [(int(m[2], 16), m.start(), m.end()) for m in ITEM.finditer(t)]
    _, funcs = P.split(t)
    for n, body in funcs.items():
        m = re.search(r'_([0-9A-F]{8})$', n)
        if m:
            s = t.index(body)
            out.append((int(m[1], 16), s, s + len(body)))
    return sorted(out, key=lambda x: x[1])


def protos(part):
    """a prototype line for every function `part` defines"""
    out = []
    for n, body in P.split(part)[1].items():
        h = P.header(body, n)
        if not h:
            continue
        ret, params, knr = h
        out.append(f'{ret} {n}();' if knr or not params else f'{ret} {n}({params});')
    return out


def head(part, lo, unit, what):
    """the new file's top: a note, the includes and #defines, the declarations above the cut, the prototypes"""
    decl, _ = P.split(part)
    decl = re.sub(r'^INCLUDE_ASM\(.*\n?', '', decl, flags=re.M)
    return (f'/* {lo}: {what} (r209, tools/stage_units.py).\n'
            f' * The declarations and prototypes down to the first function are those of the units before this one. */\n'
            + ''.join(i + '\n' for i in P.includes(part)) + decl.strip() + '\n'
            + ''.join(p + '\n' for p in protos(part)) + '\n')


def run(name):
    lo = name.lower()
    src = os.path.join(ROOT, 'src', 'stg', lo + '.c')
    o0p, postp = (os.path.join(ROOT, 'src', 'stg', lo + s + '.c') for s in U.SUFFIXES)
    if os.path.exists(o0p) or os.path.exists(postp):
        sys.exit(f'{lo}: {o0p} or {postp} already exists')
    ws = C.load(os.path.join(ROOT, 'disc', 'pac4', name.upper() + '.bin'))
    (s, e), = U.o0_runs(ws, C.find_funcs(ws, (C.ENG_END - C.BASE) // 4), C.BASE)
    t = open(src, encoding='utf-8', newline='').read()
    its = items(t)
    cut0 = max(end for a, _, end in its if a < s)          # after the last item before the run
    cut1 = max(end for a, _, end in its if a < e)          # after the run's last item
    assert all(cut0 <= st for a, st, _ in its if a >= s) and all(cut1 <= st for a, st, _ in its if a >= e)
    part1, mid, post = t[:cut0], t[cut0:cut1], t[cut1:]
    asm = f'asm/stg/{lo}/nonmatchings/{lo}"'
    mid = mid.replace(asm, f'asm/stg/{lo}/nonmatchings/{lo}_o0"')
    post = post.replace(asm, f'asm/stg/{lo}/nonmatchings/{lo}_post"')
    o0 = head(part1, lo, lo + '_o0', f'0x{s:08X}-0x{e:08X}: functions built -O0') + mid.lstrip('\n')
    pt = head(part1 + mid, lo, lo + '_post', f'0x{e:08X}-: the -O2 code after the -O0 run') + post.lstrip('\n')
    for p, x in ((src, part1.rstrip('\n') + '\n'), (o0p, o0), (postp, pt)):
        open(p, 'w', encoding='utf-8', newline='\n').write(x)
    print(f'{lo}: {lo}.c to 0x{s:08X}, {lo}_o0.c 0x{s:08X}-0x{e:08X}, {lo}_post.c from 0x{e:08X}')


if __name__ == '__main__':
    for a in sys.argv[1:] or sys.exit(__doc__):
        run(a)
