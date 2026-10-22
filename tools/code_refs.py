#!/usr/bin/env python3
"""Find address constants built by lui + addiu/ori/lw/sw pairs in a stage image's code.

Stage images (disc/pac4/*.bin, loaded at 0x80128158) contain compiled MIPS code. Data that no record
points at - for example the animation scripts of a cutscene - is reached from that code through
`lui rX, hi` followed by an instruction with a 16-bit immediate on rX. This reports, per code word, the
constants that land on part tables or animation scripts.

Usage: code_refs.py <image.bin>
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))
from stage_extract import BASE, Image  # noqa: E402


def constants(img, lo=BASE, hi=None):
    """[(code address, register, constant address)] for lui + immediate pairs within a few instructions."""
    hi = hi or img.end
    out = []
    n = len(img.d) // 4
    words = struct.unpack('<%dI' % n, img.d[:n * 4])
    for i, w in enumerate(words):
        if w >> 26 != 0x0F:           # lui
            continue
        reg, upper = (w >> 16) & 31, (w & 0xFFFF) << 16
        if not 0x80000000 <= upper < 0x80200000:
            continue
        for j in range(i + 1, min(i + 8, n)):
            v = words[j]
            op, rs, imm = v >> 26, (v >> 21) & 31, v & 0xFFFF
            if rs != reg:
                continue
            if op in (0x09, 0x0D, 0x23, 0x2B, 0x21, 0x25, 0x29, 0x20, 0x24, 0x28, 0x2A, 0x26):      # addiu ori lw sw lh lhu sh lb lbu sb ...
                val = upper + (imm - 0x10000 if imm & 0x8000 and op != 0x0D else imm)
                if lo <= val < hi:
                    out.append((BASE + 4 * i, reg, val))
            if (v >> 16) & 31 == reg and op in (0x09, 0x0F, 0x23):
                break                   # register overwritten
    return out


def bindings(img, tabs, window=0x200):
    """{table address: [script addresses]} for models set up by code: scripts whose address is built within
    `window` bytes of code of a part-table address (the engine's actor set-up loads both together)."""
    tab_at = {a for a, k in tabs}
    refs = constants(img)
    out = {}
    for code, reg, val in refs:
        if val not in tab_at:
            continue
        for c2, r2, v2 in refs:
            if abs(c2 - code) <= window and v2 % 4 == 0 and img.looks_like_script(v2):
                out.setdefault(val, [])
                if v2 not in out[val]:
                    out[val].append(v2)
    return out


def main():
    img = Image(sys.argv[1])
    tabs = {a: k for a, k in img.part_tables()}
    inside = {t for a, k in tabs.items() for t in range(a, a + 4 * (k + 1), 4)}
    seen = {}
    for code, reg, val in constants(img):
        kind = None
        if val in tabs:
            kind = f'TABLE({tabs[val]})'
        elif val % 4 == 0 and img.looks_like_script(val):
            s = img.script_at(val)
            kind = f'SCRIPT({len(s)})'
        if kind:
            seen.setdefault((val, kind), []).append(code)
    for (val, kind), codes in sorted(seen.items()):
        print(hex(val), kind, 'from', ' '.join(hex(c) for c in codes[:4]))


if __name__ == '__main__':
    main()
