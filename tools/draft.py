#!/usr/bin/env python3
"""Shows what is needed to decompile functions by hand: the assembly (comments stripped) and m2c's draft C for each.

Usage: draft.py <func_XXXXXXXX> [more ...] [--nodraft]
"""
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    names = [a for a in sys.argv[1:] if not a.startswith('--')]
    for name in names:
        hits = (glob.glob(os.path.join(ROOT, 'asm', os.environ['TWINBLADE_OVL'], 'nonmatchings', '*', name + '.s')) if os.environ.get('TWINBLADE_OVL') else glob.glob(os.path.join(ROOT, 'asm', 'nonmatchings', '*', name + '.s')) or glob.glob(os.path.join(ROOT, 'asm', '*', 'nonmatchings', '*', name + '.s')) or glob.glob(os.path.join(ROOT, 'asm', 'abil', '*', 'nonmatchings', '*', name + '.s')) or glob.glob(os.path.join(ROOT, 'asm', 'stg', '*', 'nonmatchings', '*', name + '.s')))
        if not hits:
            print(f'== {name}: not found (already in C?)')
            continue
        print(f'== {name}')
        for line in open(hits[0], encoding='utf-8'):
            line = re.sub(r'/\*.*?\*/', '', line).rstrip()
            if line.strip() and not line.startswith(('nonmatching', 'glabel', 'endlabel')):
                print('  ' + line.strip() if not line.strip().endswith(':') else line.strip())
        if '--nodraft' not in sys.argv:
            r = subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'run_m2c.py'), name, '--valid-syntax'], capture_output=True, text=True, cwd=ROOT)
            print('-- m2c draft:')
            print((r.stdout or r.stderr).rstrip())
        print()


if __name__ == '__main__':
    main()
