#!/usr/bin/env python3
"""Show how GCC 2.7.2 allocated a function's pseudo registers: refs, live length, local or global, the hard register.

Usage: regdump.py <file.c> <func_name> [-O2|-O0]

Runs cpp + cc1 with -dl -dg on the file and prints, per pseudo register of the function, the flow statistics
(refs, live length, calls crossed), whether local-alloc or global-alloc placed it, the hard register it got
and the global allocation order. The priority column is global.c's floor_log2(refs) * refs / length.
"""
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import stage_units  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC = os.path.join(ROOT, 'tools', 'compilers', 'gcc-2.7.2-psx')
TMP = os.path.join(ROOT, 'build', 'cmp')
MIPS = {2: 'v0', 3: 'v1', 4: 'a0', 5: 'a1', 6: 'a2', 7: 'a3', 8: 't0', 9: 't1', 10: 't2', 11: 't3', 12: 't4',
        13: 't5', 14: 't6', 15: 't7', 16: 's0', 17: 's1', 18: 's2', 19: 's3', 20: 's4', 21: 's5', 22: 's6',
        23: 's7', 24: 't8', 25: 't9', 29: 'sp', 30: 'fp', 31: 'ra'}


def main():
    cfile, func = sys.argv[1], sys.argv[2]
    opt = sys.argv[3] if len(sys.argv) > 3 else stage_units.opt_of(func)   # r211: -O0 in a stage's -O0 unit
    os.makedirs(TMP, exist_ok=True)
    base = os.path.join(TMP, 'regdump')
    with open(base + '.i', 'w') as f:
        subprocess.run([os.path.join(CC, 'cpp.exe'), '-P', '-undef', '-Iinclude', cfile], stdout=f, check=True, cwd=ROOT)
    subprocess.run([os.path.join(CC, 'cc1.exe'), '-quiet', '-G0', '-mips1', '-mcpu=3000', '-fgnu-linker', '-mgas',
                    '-msoft-float', opt, '-dl', '-dg', base + '.i', '-o', base + '.s'], check=True, cwd=ROOT)
    lreg = section(open(base + '.i.lreg').read(), func)
    greg = section(open(base + '.i.greg').read(), func)
    stats = {}
    for m in re.finditer(r'^Register (\d+) used (\d+) times across (\d+) insns(.*)$', lreg, re.M):
        n, refs, length, rest = int(m[1]), int(m[2]), int(m[3]), m[4]
        calls = re.search(r'crosses (\d+) calls', rest)
        stats[n] = dict(refs=refs, length=length, calls=int(calls[1]) if calls else 0,
                        block=re.search(r'in block (\d+)', rest))
    local = {int(a): int(b) for a, b in re.findall(r'^;; Register (\d+) in (\d+)\.', lreg, re.M)}
    order = re.search(r';; (\d+) regs to allocate: ([\d ]+)', greg)
    order = [int(x) for x in order[2].split()] if order else []
    disp = {}
    m = re.search(r';; Register dispositions:\n((?:.*\n)+?)\n', greg)
    if m:
        disp = {int(a): int(b) for a, b in re.findall(r'(\d+) in (\d+)', m[1])}
    # the variable names: the first insn that sets each pseudo, from the lreg dump
    print(f'{"pseudo":>6} {"refs":>4} {"len":>4} {"calls":>5} {"pri":>6}  {"where":<6} {"reg":<4} first set by')
    for n in sorted(stats):
        s = stats[n]
        if s['refs'] < 3 or s['block']:
            continue
        pri = (s['refs'].bit_length() - 1) * s['refs'] / s['length']
        where = 'local' if n in local else ('global' if n in disp else '-')
        reg = MIPS.get(local.get(n, disp.get(n)), '?')
        first = re.search(r'\(insn \d+ \d+ \d+ \(set \(reg/v:SI %d\)\n\s+(.*)' % n, lreg)
        print(f'{n:>6} {s["refs"]:>4} {s["length"]:>4} {s["calls"]:>5} {pri:>6.3f}  {where:<6} {reg:<4} {first[1] if first else ""}')
    print('global order:', ' '.join(str(x) for x in order))


def section(text, func):
    m = re.search(r';; Function %s\n(.*?)(?=^;; Function |\Z)' % re.escape(func), text, re.S | re.M)
    return m[1] if m else text


if __name__ == '__main__':
    main()
