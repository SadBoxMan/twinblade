#!/usr/bin/env python3
"""diff_func.py <function> <vram start> <vram end> [object]

Compares one function of the object the project's own compiler chain produced (default build/src/code_800123F0.o, rebuilt
beforehand with `make build/src/<name>.o` from PowerShell with C:/msys64/usr/bin on PATH) against the original executable.
Prints MATCH or the differing instructions."""
import subprocess
import sys

f, a, b = sys.argv[1], int(sys.argv[2], 16), int(sys.argv[3], 16)
obj = sys.argv[4] if len(sys.argv) > 4 else "build/src/code_800123F0.o"
import os
od = os.path.abspath('tools/toolchain/bin/mipsel-none-elf-objdump.exe')


def instrs(text):
    out = []
    for line in text.splitlines():
        parts = line.split('\t')
        if len(parts) >= 3 and ':' in parts[0]:
            out.append(' '.join(parts[2:]).strip())
    return out


mine_txt = subprocess.run([od, '-d', obj], capture_output=True, text=True).stdout
start = mine_txt.index(f'<{f}>:')
mine = []
for line in mine_txt[start:].splitlines()[1:]:
    if not line.strip():
        break
    mine += instrs(line)
data = open('disc/files/SLUS_007.26', 'rb').read()[0x800 + a - 0x80010000:0x800 + b - 0x80010000]
open('build/_orig.bin', 'wb').write(data)
orig = instrs(subprocess.run([od, '-D', '-b', 'binary', '-m', 'mips:3000', '-EL', f'--adjust-vma={hex(a)}', 'build/_orig.bin'],
                             capture_output=True, text=True).stdout)
print(len(orig), 'original instructions,', len(mine), 'compiled')
if orig == mine:
    print('MATCH')
else:
    import difflib
    for line in list(difflib.unified_diff(orig, mine, 'original', 'compiled', lineterm='', n=1))[:int(sys.argv[5]) if len(sys.argv) > 5 else 60]:
        print(line)
