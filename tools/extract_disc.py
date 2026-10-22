#!/usr/bin/env python3
"""Extract the ISO9660 filesystem from a raw MODE2/2352 PS1 track.

Form 1 files are written as plain 2048-byte-per-sector data. Files containing
Form 2 sectors (XA audio, STR video) are written raw (2352 bytes per sector)
with a .raw suffix, since their 2324-byte payloads aren't valid ISO data.

Usage: extract_disc.py <track1.bin> <out_dir>
"""
import os
import struct
import sys

RAW = 2352


def read_sector(f, lba):
    f.seek(lba * RAW)
    return f.read(RAW)


def total_sectors(f):
    return os.fstat(f.fileno()).st_size // RAW


def user_data(sector):
    # Mode 2: 12 sync + 4 header + 8 subheader, then user data
    return sector[24:24 + 2048]


def is_form2(sector):
    return bool(sector[18] & 0x20)


def read_extent(f, lba, size):
    out = bytearray()
    for i in range((size + 2047) // 2048):
        out += user_data(read_sector(f, lba + i))
    return bytes(out[:size])


def parse_dir(f, lba, size):
    data = read_extent(f, lba, size)
    pos = 0
    entries = []
    while pos < len(data):
        length = data[pos]
        if length == 0:
            # records don't cross sector boundaries; skip to the next sector
            pos = (pos // 2048 + 1) * 2048
            continue
        rec = data[pos:pos + length]
        ext_lba = struct.unpack_from('<I', rec, 2)[0]
        ext_size = struct.unpack_from('<I', rec, 10)[0]
        flags = rec[25]
        name_len = rec[32]
        name = rec[33:33 + name_len]
        pos += length
        if name in (b'\x00', b'\x01'):
            continue
        entries.append((name.decode('ascii'), ext_lba, ext_size, bool(flags & 2)))
    return entries


def walk(f, lba, size, path, out_dir, listing):
    for name, ext_lba, ext_size, is_dir in parse_dir(f, lba, size):
        clean = name.split(';')[0]
        rel = f'{path}/{clean}' if path else clean
        if is_dir:
            os.makedirs(os.path.join(out_dir, rel), exist_ok=True)
            listing.append((rel + '/', ext_lba, ext_size, 'dir'))
            walk(f, ext_lba, ext_size, rel, out_dir, listing)
            continue
        sectors = (ext_size + 2047) // 2048
        if ext_lba + sectors > total_sectors(f):
            # e.g. a padding/dummy entry pointing past the data track
            listing.append((rel, ext_lba, ext_size, 'SKIPPED (past end of track)'))
            continue
        form2 = any(is_form2(read_sector(f, ext_lba + i)) for i in range(sectors))
        dest = os.path.join(out_dir, rel)
        if form2:
            with open(dest + '.raw', 'wb') as o:
                for i in range(sectors):
                    o.write(read_sector(f, ext_lba + i))
        else:
            with open(dest, 'wb') as o:
                o.write(read_extent(f, ext_lba, ext_size))
        listing.append((rel, ext_lba, ext_size, 'form2' if form2 else 'form1'))


def main():
    src, out_dir = sys.argv[1], sys.argv[2]
    os.makedirs(out_dir, exist_ok=True)
    with open(src, 'rb') as f:
        pvd = user_data(read_sector(f, 16))
        assert pvd[1:6] == b'CD001', 'no ISO9660 primary volume descriptor'
        root = pvd[156:156 + 34]
        root_lba = struct.unpack_from('<I', root, 2)[0]
        root_size = struct.unpack_from('<I', root, 10)[0]
        listing = []
        walk(f, root_lba, root_size, '', out_dir, listing)
    for rel, lba, size, kind in sorted(listing, key=lambda e: e[1]):
        print(f'{lba:7d}  {size:10d}  {kind:5s}  {rel}')


if __name__ == '__main__':
    main()
