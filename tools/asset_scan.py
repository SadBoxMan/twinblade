#!/usr/bin/env python3
"""Inventory the game's archives: find known PS1 formats in every entry.

Walks LIST.CD (MAIN.CD and SC01-SC07.CD) and the standalone .STR files, and
reports per entry: PAC wrapper type, overlay code, and any embedded
  TIM  images (validated: block sizes must agree with their dimensions)
  VAB  sound banks ("pBAV"), VAG samples ("VAGp"), SEQ ("pQES"), MIDI ("MThd")
  STR  video sectors (in the standalone .STR files)

Usage: asset_scan.py <disc/files dir> <out.tsv>
Prints a summary; writes one row per finding to out.tsv.
"""
import collections
import os
import re
import struct
import sys

ARCHIVES = ['MAIN.CD'] + [f'SC0{i}.CD' for i in range(1, 8)]
MAGICS = {b'pBAV': 'VAB', b'VAGp': 'VAG', b'pQES': 'SEQ', b'MThd': 'MIDI'}
TIM_RE = re.compile(rb'\x10\x00\x00\x00[\x00-\x0b]\x00\x00\x00', re.DOTALL)
BPP = {0: 4, 1: 8, 2: 16, 3: 24}


def list_entries(lst):
    n = 0
    out = {}
    for name in ARCHIVES:
        count = struct.unpack_from('<i', lst, n * 8)[0]
        out[name] = [struct.unpack_from('<ii', lst, (n + 1 + j) * 8) for j in range(count)]
        n += 1 + count
    return out


def tim_at(d, o):
    """Return (size, desc) if a valid TIM starts at o, else None."""
    flag = struct.unpack_from('<I', d, o + 4)[0]
    pmode, has_clut = flag & 7, bool(flag & 8)
    if pmode > 3 or (pmode >= 2 and has_clut):
        return None
    p = o + 8
    clut = None
    for block in ('clut', 'image') if has_clut else ('image',):
        if p + 12 > len(d):
            return None
        bnum, x, y, w, h = struct.unpack_from('<I4H', d, p)
        if not (0 < w <= 1024 and 0 < h <= 512 and x < 1024 and y < 512) or bnum != 12 + w * h * 2:
            return None
        if block == 'clut':
            clut = (x, y, w, h)
        else:
            img = (x, y, w, h)
        p += bnum
    if p > len(d):
        return None
    px_w = img[2] * 16 // BPP[pmode]
    desc = f'{BPP[pmode]}bpp {px_w}x{img[3]} vram({img[0]},{img[1]})' + (f' clut{clut[2]}x{clut[3]}' if clut else '')
    return p - o, desc


def scan(d):
    """Yield (offset, kind, size, desc) for recognised data in d."""
    for m in TIM_RE.finditer(d):
        o = m.start()
        if o % 4:
            continue
        t = tim_at(d, o)
        if t:
            yield o, 'TIM', t[0], t[1]
    for magic, kind in MAGICS.items():
        for m in re.finditer(re.escape(magic), d):
            yield m.start(), kind, None, ''


def pac_info(d):
    if d[:4] != b'PAC\0':
        return 'raw', None
    typ = d[4]
    if typ == 0:
        return 'PAC0', 0x800 + struct.unpack_from('<I', d, 0xC)[0]
    if typ == 1:
        return 'PAC1', 0x800
    return f'PAC{typ}', None


def main():
    root, out_path = sys.argv[1], sys.argv[2]
    lst = open(os.path.join(root, 'LIST.CD'), 'rb').read()
    rows = []
    totals = collections.Counter()
    tim_bytes = 0
    for arc, entries in list_entries(lst).items():
        data = open(os.path.join(root, arc), 'rb').read()
        arc_counts = collections.Counter()
        for j, (sec, size) in enumerate(entries):
            d = data[sec * 2048: sec * 2048 + size]
            wrap, payload = pac_info(d)
            found = list(scan(d))
            kinds = collections.Counter(k for _, k, _, _ in found)
            ovl = ''
            if payload is not None and payload + 8 <= len(d):
                oid = struct.unpack_from('<I', d, payload)[0]
                if 0x20 <= oid < 0x100:
                    ovl = f'overlay 0x{oid:02X}'
            rows.append((arc, j, size, wrap, ovl, dict(kinds)))
            for o, k, sz, desc in found:
                rows.append((arc, j, o, k, sz or '', desc))
                if k == 'TIM':
                    tim_bytes += sz
            arc_counts.update(kinds)
            arc_counts[wrap] += 1
            if ovl:
                arc_counts['overlay'] += 1
        totals.update(arc_counts)
        print(f'{arc:8s} {len(entries):3d} entries  ' + '  '.join(f'{k} {v}' for k, v in sorted(arc_counts.items())))

    # standalone video
    for name in sorted(os.listdir(root)):
        if not name.endswith('.STR.raw'):
            continue
        raw = open(os.path.join(root, name), 'rb').read()
        sectors = len(raw) // 2352
        video = audio = 0
        for s in range(sectors):
            sub = raw[s * 2352 + 18]
            if sub & 0x04:
                audio += 1
            elif raw[s * 2352 + 24: s * 2352 + 28] == b'\x60\x01\x01\x80':
                video += 1
        rows.append(('STR', name, sectors, f'video {video}', f'xa {audio}', ''))
        print(f'{name:20s} {sectors:6d} sectors  video {video:6d}  XA audio {audio:5d}')

    with open(out_path, 'w', newline='\n') as f:
        for r in rows:
            f.write('\t'.join(str(x) for x in r) + '\n')
    print(f'\nTOTAL: ' + '  '.join(f'{k} {v}' for k, v in sorted(totals.items())))
    print(f'TIM data: {tim_bytes / 1024 / 1024:.1f} MB')


if __name__ == '__main__':
    main()
