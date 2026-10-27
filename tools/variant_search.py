#!/usr/bin/env python3
"""Search source variants of one function for a byte match.

Usage: variant_search.py <template.c> <func_name> [-O2|-O0] [--jobs N (default 4)] [--show N] [--shape]

Without -O2/-O0 a function of a stage's -O0 unit compiles -O0, every other -O2 (tools/stage_units.py, r211).

The template is ordinary C with alternatives written as {{a|b|c}} (double braces, so normal C braces are
left alone). Every combination is compiled and compared with the original asm (tools/cmp_func.py), in
parallel. Prints MATCH and the matching source as soon as one is found, otherwise the best few with their
count of differing instructions. Alternatives may be empty: {{|register }}.
--shape ranks the non-matching variants with the register fields ignored (opcodes, immediates and GTE
registers only), for a large function whose register choice shifts with every change: the structure first.
"""
import difflib
import itertools
import multiprocessing
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cmp_func  # noqa: E402
import stage_units  # noqa: E402

ALT = re.compile(r'\{\{(.*?)\}\}(?!\})', re.S)   # the closing }} is the last two of a run, so an alternative may end in }


def expand(text):
    parts = ALT.split(text)                       # even indices: fixed text, odd: alternatives
    # a lone | separates alternatives; || stays C; \| is a literal | (for C bitwise-or inside an alternative)
    fixed, alts = parts[0::2], [[a.replace('\\|', '|') for a in re.split(r'(?<![|\\])\|(?!\|)', p)] for p in parts[1::2]]
    for combo in itertools.product(*alts):
        out = [fixed[0]]
        for c, f in zip(combo, fixed[1:]):
            out += [c, f]
        yield ''.join(out)


def shape(word):
    """the word with its general-register fields cleared (kept: opcode, shift, function, immediate, GTE register)"""
    op = word >> 26
    if op == 0:
        return word & 0xFC0007FF                     # SPECIAL: rs, rt, rd cleared
    if op == 0x12:
        return word if word & 0x02000000 else word & 0xFFE0FFFF   # COP2: mfc2/cfc2/mtc2/ctc2 lose rt
    if op in (2, 3):
        return word
    if op in (0x32, 0x3A):
        return word & 0xFC1FFFFF                     # lwc2/swc2: base cleared, GTE register kept
    if op == 1:
        return word & 0xFC1FFFFF                     # REGIMM: rs cleared, condition kept
    return word & 0xFC00FFFF                         # I-type: rs, rt cleared


def score(job):
    idx, src, func, flags, use_shape = job
    devnull = os.open(os.devnull, os.O_WRONLY)       # failing variants print compiler errors; keep the console readable
    os.dup2(devnull, 2)
    work = os.path.join(ROOT, 'build', 'vs')
    os.makedirs(work, exist_ok=True)
    cmp_func.TMP = os.path.join('build', 'vs', f'w{os.getpid()}')
    path = os.path.join(work, f'{func}.{os.getpid()}.c')
    open(path, 'w', encoding='utf-8', newline='\n').write(src)   # LF: gcc 2.7.2's cpp does not join a backslash before CR LF
    try:
        a = cmp_func.original_words(func)
        b = cmp_func.compiled_words(path, func, '2.7.2', flags)
    except Exception:
        return (10 ** 6, idx, src)
    m = cmp_func.mask
    if len(a) == len(b) and all(cmp_func.same_word(x, y) for x, y in zip(a, b)):
        return (0, idx, src)
    if use_shape:
        m = lambda w, r: shape(cmp_func.mask(w, r))   # noqa: E731
    # sequence diff on masked words (relocated fields masked on both sides), so one inserted instruction costs 1, not the rest
    sa = [m(x[0], x[2]) for x in a]
    sb = [m(y[0], y[2]) for y in b]
    same = sum(blk.size for blk in difflib.SequenceMatcher(None, sa, sb, autojunk=False).get_matching_blocks())
    return (len(sa) + len(sb) - 2 * same, idx, src)


def main():
    args = sys.argv[1:]
    tmpl, func = args[0], args[1]
    opt = next((a for a in args if a in ('-O2', '-O0', '-O1')), None) or stage_units.opt_of(func)   # r211: -O0 units
    jobs = int(args[args.index('--jobs') + 1]) if '--jobs' in args else 4   # LuciDin's CPU cap (r192: was cpu_count-2 = 26)
    show = int(args[args.index('--show') + 1]) if '--show' in args else 3
    variants = list(expand(open(tmpl, encoding='utf-8').read()))
    print(f'{len(variants)} variants, {jobs} workers')
    results = []
    with multiprocessing.Pool(jobs) as pool:
        for r in pool.imap_unordered(score, [(i, v, func, [opt], '--shape' in args) for i, v in enumerate(variants)]):
            results.append(r)
            if r[0] == 0:
                print('MATCH (variant', r[1], ')')
                print(r[2])
                pool.terminate()
                return 0
    results.sort()
    for d, i, src in results[:show]:
        print(f'--- {d} differing (variant {i})')
        print(src)
    return 1


if __name__ == '__main__':
    sys.exit(main())
