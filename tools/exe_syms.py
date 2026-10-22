#!/usr/bin/env python3
"""Write a linker script of the EXE's own symbols for linking overlays.

Reads `nm --defined-only -g` output on stdin and keeps symbols inside the EXE's
address range (text, data and BSS), so an overlay's C code can refer to EXE
functions and data by name without clashing with symbols the EXE build defines
for overlay addresses.

Usage: nm --defined-only -g build/slus_007.26.elf | exe_syms.py > build/exe_syms.ld
"""
import sys

EXE_START, EXE_END = 0x80010000, 0x800C7F08

for line in sys.stdin:
    parts = line.split()
    if len(parts) != 3 or 'NON_MATCHING' in parts[2]:
        continue
    addr = int(parts[0], 16) & 0xFFFFFFFF  # nm sign-extends to 64 bits
    if EXE_START <= addr < EXE_END:
        print(f'{parts[2]} = 0x{addr:08X};')
