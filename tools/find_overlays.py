#!/usr/bin/env python3
"""Guess where code inside each MAIN.CD entry is loaded.

For every entry, try load bases on a 4-byte grid and count `jal` targets that
land inside the entry on a function prologue (addiu $sp,$sp,-N). The base with
the most hits is the likely load address; the hit ratio says how sure it is.

Usage: find_overlays.py <LIST.CD> <MAIN.CD>
"""
import collections
import struct
import sys

PROLOGUE_MASK, PROLOGUE = 0xFFFF8000, 0x27BD8000  # addiu $sp,$sp,<negative>


def entries(lst):
    count = struct.unpack_from('<i', lst, 0)[0]
    return [struct.unpack_from('<ii', lst, 8 + j * 8) for j in range(count)]


def guess_base(data):
    words = [w for (w,) in struct.iter_unpack('<I', data[:len(data) // 4 * 4])]
    prologues = [i * 4 for i, w in enumerate(words) if (w & PROLOGUE_MASK) == PROLOGUE]
    targets = [((w & 0x3FFFFFF) << 2) | 0x80000000 for w in words if (w >> 26) == 3]
    if not prologues or not targets:
        return None
    # each (target - prologue offset) is a candidate base; the true one recurs
    votes = collections.Counter()
    prologue_set = set(prologues)
    for t in set(targets):
        for p in prologues:
            base = t - p
            if 0x80010000 <= base < 0x80200000:
                votes[base] += 1
    base, hits = votes.most_common(1)[0]
    in_range = [t for t in targets if base <= t < base + len(data)]
    good = sum(1 for t in in_range if (t - base) in prologue_set)
    return base, hits, good, len(in_range), len(prologues)


def main():
    lst = open(sys.argv[1], 'rb').read()
    arc = open(sys.argv[2], 'rb').read()
    for j, (sec, size) in enumerate(entries(lst)):
        data = arc[sec * 2048: sec * 2048 + size]
        magic = data[:4]
        kind = f'PAC type {data[4]} sub {data[5]}' if magic == b'PAC\0' else repr(magic)
        g = guess_base(data)
        if g is None:
            print(f'{j:2d} {size:#8x} {kind:22s} no code')
            continue
        base, hits, good, in_range, nprol = g
        print(f'{j:2d} {size:#8x} {kind:22s} base {base:#010x}  jal->prologue {good}/{in_range}'
              f'  ({nprol} prologues)  code starts at file+{0x800CEDF8 - base:#x} if loaded to 0x800CEDF8'
              if base else '')


if __name__ == '__main__':
    main()
