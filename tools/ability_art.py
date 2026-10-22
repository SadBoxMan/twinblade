#!/usr/bin/env python3
"""Extract the ability artwork: the picture the field shows after an ability's "Musashi assimilated ..." message
(the Javelin one is a green figure throwing javelins, drawn twice with additive blending).

How the game finds it (docs/abilities.md): when an ability is taken, the field overlay (main_10, func_800D02D0)
turns the ability number into one of 29 resource numbers (a switch), looks up that resource's LIST.CD entry in the
table at 0x800D3764 (8 bytes per resource), and loads that MAIN.CD entry with the CD loader. The entry is a chain of
PAC blocks: texture tiles (type 5: a 64-byte bitmap of 32x32-halfword VRAM slots, then one 2048-byte sector per
tile), palettes (type 6: RECTs and colours in the header sector), then the ability's code (copied to overlay slot 2,
0x800CAE08) and sound. This script rebuilds the VRAM each ability's package writes and cuts the artwork out of it:
a 128x96 4-bit picture at VRAM (416, 384) (texture page 0x36) with its palette at (352, 300), the place the field's
draw code uses (read from an emulator RAM dump: the quad uses tpage 0x036, uv 128,128-255,223, clut 0x4B16). The
palette is not in the tiles: the ability's code uploads it, from a descriptor in its data, RECT {352, 300, 16, 1}
followed by a pointer to the 16 colours (in Javelin's code at 0xA58; the colours at 0xA34).

The picture is stored on its side: the field's quad maps the texture's left column (bottom to top) to the
screen's top edge, so on screen it stands 96x128, turned 90 degrees clockwise. The PNGs are written upright, as seen.

Usage: ability_art.py [out_dir] [--pages] [--stored]     (default: assets/ability_art)
Writes <nn>_<Name>.png per ability, 96x128 upright (--stored: 128x96 as stored in VRAM), transparent where the
palette's colour is 0 (--pages also writes the whole 256x256 4-bit page each package fills, for checking), and
prints the package layout. The two unused slots (6,
18) have code and a palette but no picture tiles, and slot 14 has no package: no image for those.
"""
import os
import struct
import sys

import numpy as np
from PIL import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
NAMES = ['Fusion', 'Depress', 'Mint', 'Satiate', 'Antidote', 'Perfume', '(6)', 'Stun', 'Gunshot', 'D-Kick', 'Hurl',
         'Fence', 'Hop', 'Shrink', '(14)', 'Bowl', 'Steel', 'Sleepy', '(18)', 'Toxin', 'Rip-off', 'B.O.', 'Firefly',
         'Clone', 'Sublime', 'Acid', 'Map', '3-Way', 'Homing', 'Grenade', 'Javelin']
MAIN10_BASE = 0x800CEDF8
SWITCH_TABLE = 0x80113F14       # func_800D02D0's jump table: ability - 1 -> case
CASE_TO_RESOURCE = {             # the case labels of func_800D02D0 and the resource number each one loads
    0x800D0304: 1, 0x800D030C: 3, 0x800D0314: 2, 0x800D031C: 0, 0x800D0324: 4, 0x800D032C: 5, 0x800D0334: 6,
    0x800D033C: 7, 0x800D0344: 9, 0x800D034C: 10, 0x800D0354: 11, 0x800D035C: 12, 0x800D0364: 8, 0x800D036C: 13,
    0x800D0374: 14, 0x800D037C: 15, 0x800D0384: 16, 0x800D038C: 17, 0x800D0394: 18, 0x800D039C: 19, 0x800D03A4: 20,
    0x800D03AC: 21, 0x800D03B4: 22, 0x800D03BC: 23, 0x800D03C4: 24, 0x800D03CC: 25, 0x800D03D4: 26, 0x800D03DC: 27,
    0x800D03E4: 28, 0x800D03EC: -1,
}
RESOURCE_TABLE = 0x800D3764      # 8 bytes per resource: MAIN.CD entry number, then a word for the loader
SLOT2 = 0x800CAE08               # where the package's code lands (overlay slot 2)
ART = (416, 384, 32, 96)         # VRAM rect of the artwork in halfwords (128x96 4-bit pixels)
PAL = (352, 300)                 # its 16-colour palette
PAGE = (384, 256, 64, 256)       # the texture page 0x36 (256x256 4-bit pixels)


def le32(b, off):
    return struct.unpack_from('<I', b, off)[0]


def pac_blocks(entry):
    """the blocks of a PAC chain: (offset, type, flag, count, size). Each header gives the whole block's size
    (header sector included); flag 1 marks the last block. Types seen: 0/5 texture tiles, 6 palettes, 1 code,
    2 and 3 sound (a VAB header, then its body)."""
    out = []
    off = 0
    while off + 16 <= len(entry):
        if entry[off:off + 4] != b'PAC\0':
            break
        typ, flag = entry[off + 4], entry[off + 5]
        count, size = le32(entry, off + 8), le32(entry, off + 12)
        out.append((off, typ, flag, count, size))
        if typ in (0, 5):
            bitmap = entry[off + 16:off + 80]
            off += 0x800 * (1 + sum(bin(x).count('1') for x in bitmap))
        elif typ == 6:
            off += 0x800
        else:
            off += (size + 0x7FF) & ~0x7FF
        if flag:
            break
    return out


def apply_package(entry, vram):
    """write the package's tiles and palettes into a 1024x512 halfword VRAM array"""
    for off, typ, flag, count, size in pac_blocks(entry):
        if typ in (0, 5):
            bitmap = entry[off + 16:off + 80]
            sec = off + 0x800
            for slot in range(512):
                if bitmap[slot >> 3] & (1 << (slot & 7)):
                    x, y = (slot % 32) * 32, (slot // 32) * 32
                    tile = np.frombuffer(entry[sec:sec + 0x800], dtype='<u2').reshape(32, 32)
                    vram[y:y + 32, x:x + 32] = tile
                    sec += 0x800
        elif typ == 6:
            recs = off + 16
            pix = off + 16 + 0x90
            for i in range(count):
                x, y, w, h = struct.unpack_from('<hhhh', entry, recs + 8 * i)
                n = w * max(h, 1)
                vram[y, x:x + n] = np.frombuffer(entry[pix:pix + 2 * n], dtype='<u2')
                pix += (w // 2) * 4


def find_palette(payload):
    """the 16 colours the package's code uploads to (352, 300): RECT {352, 300, 16, 1} then a pointer to them"""
    rect = struct.pack('<hhhh', PAL[0], PAL[1], 16, 1)
    i = payload.find(rect)
    while i >= 0:
        if i % 2 == 0 and i + 12 <= len(payload):
            ptr = le32(payload, i + 8)
            off = ptr - SLOT2
            if 0 <= off <= len(payload) - 32:
                return np.frombuffer(payload[off:off + 32], dtype='<u2'), i
        i = payload.find(rect, i + 1)
    return None, -1


def ability_entry(main10, ability):
    """(MAIN.CD entry of the ability's package, resource number): func_800D02D0's switch, then the resource table;
    (None, None) when the ability has no package"""
    case = le32(main10, SWITCH_TABLE - MAIN10_BASE + 4 * (ability - 1))
    res = CASE_TO_RESOURCE.get(case)
    if res is None or res < 0:
        return None, None
    return le32(main10, RESOURCE_TABLE - MAIN10_BASE + 8 * res), res


def decode4(vram, rect, pal):
    x, y, w, h = rect
    words = vram[y:y + h, x:x + w].astype(np.uint32)
    idx = np.stack([(words >> (4 * k)) & 15 for k in range(4)], axis=-1).reshape(h, w * 4)
    c = vram[pal[1], pal[0]:pal[0] + 16].astype(np.uint32)
    rgba = np.zeros((16, 4), np.uint8)
    rgba[:, 0] = (c & 31) << 3
    rgba[:, 1] = ((c >> 5) & 31) << 3
    rgba[:, 2] = ((c >> 10) & 31) << 3
    rgba[:, 3] = np.where(c == 0, 0, 255)
    return rgba[idx]


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    out_dir = args[0] if args else os.path.join(ROOT, 'assets', 'ability_art')
    os.makedirs(out_dir, exist_ok=True)
    main10 = open(os.path.join(ROOT, 'disc', 'overlays', 'main_10.bin'), 'rb').read()
    listcd = open(os.path.join(ROOT, 'disc', 'files', 'LIST.CD'), 'rb').read()
    maincd = open(os.path.join(ROOT, 'disc', 'files', 'MAIN.CD'), 'rb').read()
    count = struct.unpack_from('<i', listcd, 0)[0]
    for ability in range(1, 31):
        num, res = ability_entry(main10, ability)                    # MAIN.CD entry (LIST.CD record num + 1)
        name = NAMES[ability]
        if num is None:
            print('%2d %-8s no package' % (ability, name))
            continue
        word = le32(main10, RESOURCE_TABLE - MAIN10_BASE + 8 * res + 4)
        if not (0 <= num < count):
            print('%2d %-8s resource %d: entry %d is outside MAIN.CD' % (ability, name, res, num))
            continue
        sector, size = struct.unpack_from('<ii', listcd, 8 * (num + 1))
        entry = maincd[sector * 0x800:sector * 0x800 + size]
        blocks = pac_blocks(entry)
        vram = np.zeros((512, 1024), np.uint16)
        apply_package(entry, vram)
        code = [(o, sz) for o, t, f, c, sz in blocks if t == 1]
        payload = entry[code[0][0] + 0x800:code[0][0] + code[0][1]] if code else b''
        colours, at = find_palette(payload)
        if colours is None:
            print('%2d %-8s resource %2d  MAIN.CD entry %3d: no palette upload for (352, 300) in its code' %
                  (ability, name, res, num))
            continue
        vram[PAL[1], PAL[0]:PAL[0] + 16] = colours
        if not any(t in (0, 5) for _, t, _, _, _ in blocks):
            print('%2d %-8s resource %2d  MAIN.CD entry %3d (main_%02d): no picture tiles (a cut ability)' %
                  (ability, name, res, num, num))
            continue
        art = decode4(vram, ART, PAL)
        page = decode4(vram, PAGE, PAL)
        base = '%02d_%s' % (ability, name.replace('.', '').replace('-', ''))
        img = Image.fromarray(art)
        if '--stored' not in sys.argv:
            img = img.transpose(Image.Transpose.ROTATE_270)   # 90 degrees clockwise: as the field draws it
        img.save(os.path.join(out_dir, base + '.png'))
        if '--pages' in sys.argv:
            Image.fromarray(page).save(os.path.join(out_dir, base + '_page.png'))
        kinds = ' '.join('%d%s' % (t, '(%d)' % c if t == 6 else '') for _, t, _, c, _ in blocks)
        print('%2d %-8s resource %2d  MAIN.CD entry %3d (main_%02d)  %6d bytes  blocks %s  palette descriptor at '
              'code+0x%X  word %08X' % (ability, name, res, num, num, size, kinds, at, word))


if __name__ == '__main__':
    main()
