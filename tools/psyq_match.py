#!/usr/bin/env python3
"""Find PsyQ SDK library objects in a PS-X EXE using lab313ru/psx_psyq_signatures.

Usage:
  psyq_match.py <exe> <sigs_dir>
      Rank SDK versions by how many objects match.
  psyq_match.py <exe> <sigs_dir> <ver[,ver...]> [symbol_out]
      Match versions in priority order; a later version only fills code not
      already claimed by an earlier one. Optionally write splat symbol_addrs lines.

A signature is the object's code bytes with relocated fields as "??". An object
only counts as found if it matches at exactly one 4-byte-aligned place, so short,
generic signatures can't produce false labels.
"""
import json
import os
import re
import struct
import sys

MIN_FIXED_BYTES = 16  # ignore signatures with too few non-wildcard bytes
# Object-local labels from the signature generator (loc_10, text_C4, ...).
# They repeat across objects, so they're not useful as global symbol names.
LOCAL_LABEL = re.compile(r'^(loc|text|data|rdata|sdata|bss|sbss)_[0-9A-F]+$')


def load_exe(path):
    data = open(path, 'rb').read()
    t_addr, t_size = struct.unpack_from('<2I', data, 0x18)
    return data[0x800:0x800 + t_size], t_addr


def compile_sig(sig):
    parts = sig.split()
    fixed = sum(1 for p in parts if p != '??')
    if fixed < MIN_FIXED_BYTES:
        return None
    pattern = b''.join(b'.' if p == '??' else re.escape(bytes([int(p, 16)])) for p in parts)
    return re.compile(pattern, re.DOTALL)


def match_version(code, ver_dir):
    found = []  # (lib, obj, offset, size, entry)
    for fname in sorted(os.listdir(ver_dir)):
        if not fname.endswith('.json'):
            continue
        lib = fname[:-5]
        for entry in json.load(open(os.path.join(ver_dir, fname))):
            if 'sig' not in entry:  # bss-only objects have no code to match
                continue
            rx = compile_sig(entry['sig'])
            if rx is None:
                continue
            hits = []
            pos = 0
            while len(hits) < 2:
                m = rx.search(code, pos)
                if not m:
                    break
                if m.start() % 4 == 0:
                    hits.append(m.start())
                pos = m.start() + 1
            if len(hits) == 1:
                found.append((lib, entry['name'], hits[0], len(entry['sig'].split()), entry))
    return found


def main():
    exe, sigs = sys.argv[1], sys.argv[2]
    code, base = load_exe(exe)

    if len(sys.argv) == 3:
        for v in sorted(d for d in os.listdir(sigs) if d.isdigit()):
            print(f'{v:>5}: {len(match_version(code, os.path.join(sigs, v))):4d} objects matched')
        return

    claimed = []  # (start, end, version, lib, obj, entry)
    for version in sys.argv[3].split(','):
        for lib, obj, off, size, entry in match_version(code, os.path.join(sigs, version)):
            if any(off < e and s < off + size for s, e, *_ in claimed):
                continue
            claimed.append((off, off + size, version, lib, obj, entry))
    claimed.sort()

    lines = []
    for start, end, version, lib, obj, entry in claimed:
        print(f'{base + start:08X}  {end - start:6d}  {version:>4}  {lib:16s} {obj}')
        for label in entry.get('labels', []):
            if not LOCAL_LABEL.match(label['name']):
                lines.append((base + start + label['offset'], label['name'], version, lib, obj))
    per_version = {}
    for c in claimed:
        per_version[c[2]] = per_version.get(c[2], 0) + 1
    print(f'{len(claimed)} objects ({per_version}), {len(lines)} labels')

    if len(sys.argv) > 4:
        seen = set()
        with open(sys.argv[4], 'w', newline='\n') as out:
            out.write(f'// PsyQ library symbols ({sys.argv[3]}), from tools/psyq_match.py\n')
            for addr, name, version, lib, obj in sorted(lines):
                if name in seen:
                    continue
                seen.add(name)
                out.write(f'{name} = 0x{addr:08X}; // psyq{version} {lib} {obj}\n')


if __name__ == '__main__':
    main()
