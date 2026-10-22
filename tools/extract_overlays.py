#!/usr/bin/env python3
"""Extract the code payloads of MAIN.CD entries.

MAIN.CD (and the SCxx.CD archives) are indexed by LIST.CD: per archive a count,
then (sector, size) pairs relative to the archive start. Most entries are PAC
packages:

  0x000  "PAC\\0"
  0x004  u8 type     0: header, data block, then payload; 1: header, then payload
  0x008  u32         (type 0) number of items in the data block
  0x00C  u32         (type 0) data block size in bytes
  0x800  data block (type 0 only; textures etc., handled by the CD callback)
  ....   payload, copied to 0x800CEDF8

A code payload starts with a u32 overlay ID (0x36-0x3B seen) followed by code;
0x800CEDFC (payload + 4) is the overlay's main function. A few entries are raw
payloads without a PAC header.

Usage: extract_overlays.py <LIST.CD> <MAIN.CD> <out_dir>
Writes <out_dir>/main_NN.bin for every entry whose payload starts with an ID
word followed by code, and prints a summary.

It also writes <out_dir>/code/<name>.bin for the mode overlays with a split
config (<name>.yaml, docs/overlays.md): exactly the bytes the game copies to
the slot, the PAC chain's code block (type 1, tools/ability_art.py
pac_blocks) without the sound blocks or sector padding that follow it in
main_NN.bin.
The ability packages (entries 13-47, IDs 0x13-0x35, docs/overlays.md) go to <out_dir>/code/ovlNN.bin the same way,
named by their ID word (tools/gen_ability_ovls.py writes their split configs).
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ability_art import pac_blocks  # noqa: E402

PAC_MAGIC = b'PAC\0'
# MAIN.CD entry -> split name (overlay ID); entry 1 (ovl38) is split from main_01.bin
CODE_NAMES = {3: 'ovl39', 7: 'ovl3a', 8: 'ovl3b', 10: 'ovl36', 11: 'ovl37'}
ABILITY_ENTRIES = range(13, 48)     # the ability packages: overlay slot 2 (13-41) and slot 3 (42-47)


def code_block(data):
    """the payload copied to the slot: the code block of a PAC chain, or the whole entry when it is raw"""
    if data[:4] != PAC_MAGIC:
        return data
    for off, typ, flag, count, size in pac_blocks(data):
        if typ == 1:
            return data[off + 0x800:off + size]
    return None


def archive_entries(lst, archive_index=0):
    n = 0
    for _ in range(archive_index + 1):
        count = struct.unpack_from('<i', lst, n * 8)[0]
        start = n + 1
        n += 1 + count
    return [struct.unpack_from('<ii', lst, (start + j) * 8) for j in range(count)]


def payload(data):
    if data[:4] != PAC_MAGIC:
        return 0, 'raw'
    typ = data[4]
    if typ == 0:
        return 0x800 + struct.unpack_from('<I', data, 0xC)[0], 'PAC type 0'
    if typ == 1:
        return 0x800, 'PAC type 1'
    return None, f'PAC type {typ}'


def looks_like_overlay(p):
    if len(p) < 8:
        return False
    ovl_id = struct.unpack_from('<I', p, 0)[0]
    return 0x20 <= ovl_id < 0x100


def main():
    lst = open(sys.argv[1], 'rb').read()
    arc = open(sys.argv[2], 'rb').read()
    out_dir = sys.argv[3]
    os.makedirs(out_dir, exist_ok=True)
    os.makedirs(os.path.join(out_dir, 'code'), exist_ok=True)
    for j, (sec, size) in enumerate(archive_entries(lst)):
        data = arc[sec * 2048: sec * 2048 + size]
        if j in CODE_NAMES or j in ABILITY_ENTRIES:
            code = code_block(data)
            split = CODE_NAMES.get(j) or 'ovl%02x' % struct.unpack_from('<I', code, 0)[0]
            name = os.path.join(out_dir, 'code', split + '.bin')
            open(name, 'wb').write(code)
            print(f'{j:2d} code block {len(code):#x} bytes -> {name}')
        off, kind = payload(data)
        if off is None or off >= len(data):
            print(f'{j:2d} {kind:12s} no payload')
            continue
        p = data[off:]
        if not looks_like_overlay(p):
            print(f'{j:2d} {kind:12s} payload@{off:#x} {len(p):#x} bytes: not an overlay')
            continue
        name = os.path.join(out_dir, f'main_{j:02d}.bin')
        open(name, 'wb').write(p)
        print(f'{j:2d} {kind:12s} payload@{off:#x} {len(p):#x} bytes: overlay id {p[0]:#x} -> {name}')


if __name__ == '__main__':
    main()
