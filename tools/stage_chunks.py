#!/usr/bin/env python3
"""Find and extract the stage images that are not the first PAC chunk of their archive entry.

An archive entry can hold several PAC chunks in a row (each starts on a 2048-byte boundary with "PAC\\0" and a type
byte: 4 = LZSS stage image, 1 = uncompressed data, 0/5 = texture blocks, 6 = CLUTs, 2/3/7 = sound and other data);
the CD loader reads them one after another. tools/lzss_pac4.py only looked at an entry's FIRST chunk, so stage
images behind a texture chunk were missed (the last chapter's maps in SC07, found 2026-10-15 when LuciDin's
recording showed the ZEN scale-model map). A chunk counts as a stage image when it decodes to something that starts
with the shared stage engine (at least 3500 of its first 4096 bytes equal a known stage image's).

Writes disc/pac4/<ARC>_<entry>.bin for every stage image found that is not there yet; prints what it found.
Usage: stage_chunks.py [--dry-run]
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from asset_scan import list_entries  # noqa: E402
from lzss_pac4 import decode  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FILES = os.path.join(ROOT, 'disc', 'files')
PAC4 = os.path.join(ROOT, 'disc', 'pac4')


def chunks(d):
    return [o for o in range(0, len(d), 2048) if d[o:o + 4] == b'PAC\0']


def chunk_body(d, o, nxt):
    t = d[o + 4]
    if t == 4:
        out, _, _ = decode(d[o + 0x800:nxt])
        return out
    if t == 1:
        n = struct.unpack_from('<I', d, o + 12)[0]
        return d[o + 0x800:o + 0x800 + n]
    return b''


def main():
    dry = '--dry-run' in sys.argv
    ref = open(os.path.join(PAC4, 'SC01_077.bin'), 'rb').read()[:4096]
    ents = list_entries(open(os.path.join(FILES, 'LIST.CD'), 'rb').read())
    found = []
    for arc, lst in ents.items():
        data = open(os.path.join(FILES, arc), 'rb').read()
        tag = arc.split('.')[0]
        for j, (sec, size) in enumerate(lst):
            d = data[sec * 2048: sec * 2048 + size]
            offs = chunks(d)
            for k, o in enumerate(offs):
                if d[o + 4] not in (1, 4):
                    continue
                nxt = offs[k + 1] if k + 1 < len(offs) else len(d)
                body = chunk_body(d, o, nxt)
                if len(body) < 0x60000:
                    continue
                same = sum(1 for i in range(4096) if body[i] == ref[i])
                if same < 3500:
                    continue
                name = '%s_%03d' % (tag, j)
                path = os.path.join(PAC4, name + '.bin')
                new = not os.path.exists(path)
                found.append((name, k, d[o + 4], len(body), new))
                if new and not dry:
                    open(path, 'wb').write(body)
    for name, k, t, n, new in found:
        if new or k:
            print('%s: chunk %d (type %d), %d bytes%s' % (name, k, t, n, ', NEW' if new else ''))
    print('%d stage images on the disc, %d new' % (len(found), sum(1 for f in found if f[4])))


if __name__ == '__main__':
    main()
