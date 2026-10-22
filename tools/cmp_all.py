#!/usr/bin/env python3
"""Tests every func_XXXXXXXX function in a C file against the original assembly (tools/cmp_func.py), one compile each.

Usage: cmp_all.py <file.c> [-O2|-O0]         prints MATCH or the differing instructions for each function
The declarations in the file (typedefs, structs, externs) are shared by all of the functions.
"""
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import put_func as P  # noqa: E402


def main():
    path = sys.argv[1]
    opt = sys.argv[2] if len(sys.argv) > 2 else '-O2'
    text = open(path, encoding='utf-8').read()
    decl, funcs = P.split(text)
    extra = ''.join(l + '\n' for l in text.splitlines() if l.startswith('#include') and l.strip() not in
                    ('#include "common.h"', '#include "psyq.h"', '#include "work.h"'))   # e.g. gte.h, game.h
    ok = 0
    for name, body in funcs.items():
        tmp = os.path.join(ROOT, 'build', 'work', name + '.one.c')
        os.makedirs(os.path.dirname(tmp), exist_ok=True)
        open(tmp, 'w', encoding='utf-8').write('#include "common.h"\n#include "psyq.h"\n#include "work.h"\n' + extra + decl + '\n\n' + body + '\n')
        r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'cmp_func.py'), tmp, name, '2.7.2', opt], capture_output=True, text=True, cwd=ROOT)
        out = (r.stdout + r.stderr).strip()
        first = out.splitlines()[0] if out else '(no output)'
        if 'MATCH' in first and 'differs' not in first:
            ok += 1
            print(first)
        else:
            print(out[:1800])
    print(f'{ok} of {len(funcs)} match')


if __name__ == '__main__':
    main()
