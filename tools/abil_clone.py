#!/usr/bin/env python3
"""Copy matched ability-package functions to every package with the same code (docs/overlays.md).

The 35 packages were built from shared templates: the same function, instruction for instruction, sits in many of
them, differing only in the addresses of the package's own symbols (func_ovl13_800CAEE0 / func_ovl14_800CAEB0).
Two functions have the same *shape* when their instructions are equal once each package symbol is replaced by its
order of first use in the function.

Usage: abil_clone.py groups [N]               the shapes shared by two or more unmatched functions, biggest first
       abil_clone.py <template.c> [...]        for every function in the template files (a matched representative,
                                               its declarations at the top), write the same C for every unmatched
                                               function of its shape, renamed, to build/work/clone/<package>.c
Then: cmp_all.py on each output, put_func.py the files that match.
"""
import collections
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import put_func as P  # noqa: E402

PKG_SYM = re.compile(r'\b(?:func|D|jtbl)_(ovl[0-9a-f]{2})_[0-9A-F]{8}\b')


def shape(path):
    """(key, the package symbols in order of first use, instruction count) of one function's asm"""
    lines, own = [], []
    for l in open(path):
        m = re.match(r'\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+(.*)', l)
        if m:
            ins = m[1]
        elif re.match(r'\s*\.L\w+:', l):
            ins = 'LABEL'
        else:
            continue
        ins = re.sub(r'\.L\w+', '.L', ins)

        def sub(mm):
            if mm[0] not in own:
                own.append(mm[0])
            return f'OWN{own.index(mm[0])}'
        lines.append(re.sub(r'\s+', ' ', PKG_SYM.sub(sub, ins).strip()))
    return '\n'.join(lines), own, sum(1 for x in lines if x != 'LABEL')


def unmatched():
    src = ''.join(open(f, encoding='utf-8').read() for f in glob.glob(os.path.join(ROOT, 'src', 'abil', '*.c')))
    return set(re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', src))


def all_shapes():
    """{function name: (key, own symbols, size)} for every package function"""
    out = {}
    for f in glob.glob(os.path.join(ROOT, 'asm', 'abil', '*', 'nonmatchings', '*', '*.s')):
        out[os.path.basename(f)[:-2]] = shape(f)
    return out


def main():
    shapes = all_shapes()
    todo = unmatched()
    by_key = collections.defaultdict(list)
    for name, (key, own, size) in shapes.items():
        by_key[key].append(name)
    if sys.argv[1] == 'groups':
        groups = sorted(([n for n in g if n in todo] for g in by_key.values()), key=lambda g: (-len(g), g and shapes[g[0]][2]))
        for g in groups[:int(sys.argv[2]) if len(sys.argv) > 2 else 40]:
            if len(g) > 1:
                print(len(g), shapes[g[0]][2], ' '.join(sorted(g)[:4]), '...' if len(g) > 4 else '')
        return
    out = collections.defaultdict(lambda: ['', []])        # package -> [declarations, function texts]
    for path in sys.argv[1:]:
        decl, funcs = P.split(open(path, encoding='utf-8').read())
        for rep, body in funcs.items():
            key, own, _ = shapes[rep]
            # the declarations this function needs: those naming no symbol (typedefs), or one its body uses
            words = set(re.findall(r'\w+', body))
            mine = [c for c in P.chunks(decl)
                    if not (syms := set(re.findall(r'\b(?:func|D|jtbl)_\w+', c))) or syms & words]
            n = 0
            for m in by_key[key]:
                if m not in todo:
                    continue
                names = {rep: m}
                names.update(zip(own, shapes[m][1]))
                ren = lambda t: re.sub(r'\b\w+\b', lambda w: names.get(w[0], w[0]), t)
                pkg = m.split('_')[1]
                out[pkg][0] += ''.join(ren(c) + '\n' for c in mine)
                out[pkg][1].append(ren(body))
                n += 1
            print(f"{rep}: {n} functions")
    os.makedirs(os.path.join(ROOT, 'build', 'work', 'clone'), exist_ok=True)
    for pkg, (decl, bodies) in sorted(out.items()):
        seen, lines = set(), []
        for chunk in P.chunks(decl):
            if P.norm(chunk) not in seen:
                seen.add(P.norm(chunk))
                lines.append(chunk)
        path = os.path.join(ROOT, 'build', 'work', 'clone', pkg + '.c')
        open(path, 'w', encoding='utf-8', newline='\n').write(
            '#include "common.h"\n#include "abil.h"\n\n' +'\n'.join(lines) + '\n\n' + '\n\n'.join(bodies) + '\n')
        print(path)


if __name__ == '__main__':
    main()
