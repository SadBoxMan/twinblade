#!/usr/bin/env python3
"""Runs the m2c decompiler (downloaded from github.com/matt-kempster/m2c into tools/m2c_download/src/m2c-master) on one function of the project.

Usage: run_m2c.py <function name> [extra m2c options]      prints m2c's draft C for asm/nonmatchings/*/<function>.s (little-endian MIPS, GCC)
Run it with `python -I` (isolated mode); the m2c folder is added to the path here.
"""
import glob
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
M2C = os.path.join(ROOT, 'tools', 'm2c_download', 'src', 'm2c-master')


def main():
    name = sys.argv[1]
    hits = (glob.glob(os.path.join(ROOT, 'asm', os.environ['TWINBLADE_OVL'], 'nonmatchings', '*', name + '.s')) if os.environ.get('TWINBLADE_OVL') else glob.glob(os.path.join(ROOT, 'asm', 'nonmatchings', '*', name + '.s')) or glob.glob(os.path.join(ROOT, 'asm', '*', 'nonmatchings', '*', name + '.s')) or glob.glob(os.path.join(ROOT, 'asm', 'abil', '*', 'nonmatchings', '*', name + '.s')))
    if not hits:
        sys.exit(f'{name}.s not found under asm/nonmatchings')
    sys.path.insert(0, M2C)
    sys.argv = ['m2c.py', '-t', 'mipsel-gcc-c', '--no-cache'] + sys.argv[2:] + [hits[0]]
    from m2c.main import main as m2c_main
    sys.exit(m2c_main())


if __name__ == '__main__':
    main()
