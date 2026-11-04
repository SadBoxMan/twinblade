#!/usr/bin/env python3
"""Decompress the game's PAC type-4 packages.

The CD loader (StreamReadyCallback, state 5) feeds each sector of a type-4 package to LzssDecodeSector
(0x80018730), a streaming LZSS decoder. Read from that code:

  window      1024 bytes (the engine keeps it in the scratchpad at 0x1F800000), indices wrap at 1024
  start       window write index = 1, a flag byte is read first, the flag mask starts at bit 0
  per item    flag bit set   -> literal: one byte is output and written to the window
              flag bit clear -> match: two bytes b1, b2 form v = b1 | b2 << 8;
                                position = v & 0x3FF, length = (v >> 10) + 2;
                                position 0 ends the stream; otherwise `length` bytes are copied
                                from the window starting at `position`, each one also written to
                                the window at the write index
  after 8 items the next flag byte is read (flag bits are used least significant first)

The package header is the first 0x800 bytes of the entry (magic "PAC\\0", type 4); the compressed
stream follows it.

Usage: lzss_pac4.py <disc/files dir> [out_dir]
Decodes every type-4 entry and prints a summary; with out_dir, writes <ARC>_<entry>.bin.
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))


def decode(src, max_out=1 << 26):
    """Decode an LZSS stream. Returns (output bytes, input bytes consumed, ended_cleanly)."""
    window = bytearray(1024)
    wpos = 1
    out = bytearray()
    p = 0
    n = len(src)
    if n == 0:
        return bytes(out), 0, False
    flags = src[p]
    p += 1
    mask = 1
    while len(out) < max_out:
        if flags & mask:
            if p >= n:
                return bytes(out), p, False
            b = src[p]
            p += 1
            window[wpos] = b
            wpos = (wpos + 1) & 1023
            out.append(b)
        else:
            if p + 1 >= n:
                return bytes(out), p, False
            v = src[p] | (src[p + 1] << 8)
            p += 2
            pos = v & 0x3FF
            if pos == 0:
                return bytes(out), p, True
            length = (v >> 10) + 2
            for _ in range(length):
                b = window[pos]
                pos = (pos + 1) & 1023
                window[wpos] = b
                wpos = (wpos + 1) & 1023
                out.append(b)
        mask <<= 1
        if mask == 0x100:
            mask = 1
            if p >= n:
                return bytes(out), p, False
            flags = src[p]
            p += 1
    return bytes(out), p, False


def main():
    from asset_scan import list_entries
    root = sys.argv[1]
    out_dir = sys.argv[2] if len(sys.argv) > 2 else None
    lst = open(os.path.join(root, 'LIST.CD'), 'rb').read()
    if out_dir:
        os.makedirs(out_dir, exist_ok=True)
    total = clean = 0
    rows = []
    for arc, entries in list_entries(lst).items():
        data = open(os.path.join(root, arc), 'rb').read()
        for j, (sec, size) in enumerate(entries):
            d = data[sec * 2048: sec * 2048 + size]
            if d[:4] != b'PAC\0' or d[4] != 4:
                continue
            body = d[0x800:]
            out, used, ok = decode(body)
            total += 1
            clean += ok
            rows.append((arc, j, len(body), used, len(out), ok))
            if out_dir:
                open(os.path.join(out_dir, f'{arc.split(".")[0]}_{j:03d}.bin'), 'wb').write(out)
    print(f'{total} type-4 packages decoded; {clean} ended with the terminator code')
    for arc, j, n, used, outn, ok in rows[:12]:
        print(f'  {arc}[{j}]: stream {n:#x} bytes, consumed {used:#x}, output {outn:#x}, ' + ('clean end' if ok else 'NO clean end'))
    bad = [r for r in rows if not r[5]]
    print('packages without a clean end:', [(a, j) for a, j, *_ in bad][:10])


if __name__ == '__main__':
    main()
