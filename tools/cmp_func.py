#!/usr/bin/env python3
"""Compile a C file containing one function and compare it with the original asm.

Usage: cmp_func.py <file.c> <func_name>[=<c_name>] <gcc-version> [cc1 flags...]

Use func_80010178=main when the C function already has its real name.

The function's original instructions come from asm/ (asm/nonmatchings/*/<func>.s); the candidate is
built with tools/compilers/gcc-<version>-psx (cpp -> cc1 -> maspsx -> as).
Relocated fields (%hi/%lo/jal targets) are masked on both sides.
"""
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CROSS = os.path.join(ROOT, 'tools', 'toolchain', 'bin', 'mipsel-none-elf-')
PYTHON = sys.executable
MASPSX = os.path.join(ROOT, 'tools', 'maspsx', 'maspsx.py')
TMP = os.path.join('build', 'cmp')


def original_words(func):
    m = None
    # the mode overlays share one load address, so a name can be in several of them (func_800CEF04 is in ovl36, ovl38
    # and ovl39): TWINBLADE_OVL=<overlay> looks only in asm/<overlay> (docs/overlays.md)
    for dirpath, _, files in os.walk(os.path.join(ROOT, 'asm', os.environ.get('TWINBLADE_OVL', ''))):
        for name in files:
            if name.endswith('.s') and (name == func + '.s' or 'nonmatchings' not in dirpath):
                src = open(os.path.join(dirpath, name)).read()
                m = re.search(rf'^glabel {func}\n(.*?)^endlabel {func}', src, re.M | re.S)
                if m:
                    break
        if m:
            break
    if not m:
        sys.exit(f'{func} not found under asm/')
    out = []
    for line in m.group(1).splitlines():
        im = re.match(r'\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8}) \*/\s+(.*)', line)
        if im:
            w = int.from_bytes(bytes.fromhex(im[1]), 'little')
            out.append((w, im[2].strip(), bool(re.search(r'%hi|%lo|^(j|jal)\s', im[2].strip()))))
    return out


def compiled_words(cfile, func, version, flags):
    os.makedirs(TMP, exist_ok=True)
    cc = os.path.join('tools', 'compilers', f'gcc-{version}-psx')
    base = os.path.join(TMP, func)
    run = lambda *a, **k: subprocess.run(*a, check=True, cwd=ROOT, **k)
    with open(os.path.join(ROOT, base + '.i'), 'w') as f:
        run([os.path.join(ROOT, cc, 'cpp.exe'), '-P', '-undef', '-Iinclude', os.path.relpath(cfile, ROOT)], stdout=f)
    run([os.path.join(ROOT, cc, 'cc1.exe'), '-quiet', '-G0', '-mips1', '-mcpu=3000',
         '-fgnu-linker', '-mgas', '-msoft-float', *flags, base + '.i', '-o', base + '.s'])
    with open(os.path.join(ROOT, base + '.m.s'), 'w') as f:
        run([PYTHON, MASPSX, '--expand-div', '--aspsx-version=2.79', base + '.s'], stdout=f)
    run([CROSS + 'as', '-EL', '-march=r3000', '-mtune=r3000', '-no-pad-sections', '-G0', '-Iinclude',
         '-o', base + '.o', base + '.m.s'])
    dump = run([CROSS + 'objdump', '-drz', '--disassemble=' + func,   # -z: show zero words (GTE macros put literal nops there)
                 base + '.o'],
               capture_output=True, text=True).stdout
    out, relocs = [], set()
    for line in dump.splitlines():
        im = re.match(r'\s+([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)', line)
        if im:
            out.append([int(im[2], 16), im[3].strip(), False, int(im[1], 16)])
        rm = re.match(r'\s+([0-9a-f]+): R_MIPS_', line)
        if rm:
            relocs.add(int(rm[1], 16))
    for o in out:
        o[2] = o[3] in relocs
    return [tuple(o[:3]) for o in out]


def mask(word, reloc):
    if not reloc:
        return word
    return word & 0xFC000000 if (word >> 26) in (2, 3) else word & 0xFFFF0000


def main():
    cfile, func, version, *flags = sys.argv[1:]
    func, _, c_name = func.partition('=')
    a = original_words(func)
    b = compiled_words(cfile, c_name or func, version, flags)
    same = len(a) == len(b) and all(mask(x[0], x[2] or y[2]) == mask(y[0], x[2] or y[2]) for x, y in zip(a, b))
    print(f'{func} gcc-{version} {" ".join(flags)}: {"MATCH" if same else "differs"} '
          f'({len(a)} vs {len(b)} instructions)')
    if not same:
        for i in range(max(len(a), len(b))):
            x = a[i] if i < len(a) else (0, '', False)
            y = b[i] if i < len(b) else (0, '', False)
            flag = '  ' if mask(x[0], x[2] or y[2]) == mask(y[0], x[2] or y[2]) else '!!'
            print(f'  {flag} {x[1]:40.40s} | {y[1]}')
    return 0 if same else 1


if __name__ == '__main__':
    sys.exit(main())
