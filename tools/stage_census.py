#!/usr/bin/env python3
"""Census of the stage images' own code (docs/decomp_census.md). Read-only: reads disc/pac4/*.bin and src/ only.

Every stage image (disc/pac4/*.bin, loaded at 0x80128158) starts with the shared engine (0x80128158-0x8017BE9C,
identical apart from relocations), then the stage's own code, then its data. The own code starts at 0x8017BE9C;
its end is where a function would start on a zero word (SC03_001: 0x8018D220, the same as splat's split).
Functions are found by walking: one ends at the first `jr ra` past every forward branch target.

A function's shape is its instruction words with the relocated parts masked: the lui (0x8017-0x8020)/addiu/load/store immediates
that point at the stage's own data (a lui in 0x8017-0x801F, and the offsets off a register it loaded), and the jal
targets inside the own code (a jal into the engine keeps its target). Two functions with the same shape are the
same code at shifted addresses. The loose shape also masks registers and immediates (opcode and function only).

Classes per function (r146: every function in C in any split image is the reference, not only SC03_001's):
  matched        in C in its own image's file (src/stage/sc03_001.c, src/stg/<stage>.c; splat's empty stubs too)
  matched-clone  still asm, but its shape is matched in some image (tools/stage_clone.py copies it)
  shared         still asm, and its shape occurs again but is matched nowhere (match once, copy)
  unique         still asm, its shape occurs once in all 140 images (by hand)

Usage: python -I tools/stage_census.py [--csv out.csv] [--md out.md]   (the totals are printed; --md writes the per-stage
Markdown table that docs/decomp_census.md holds)
"""
import collections
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BASE = 0x80128158
ENG_END = 0x8017BE9C
REF = 'SC03_001'


def load(path):
    d = open(path, 'rb').read()
    return struct.unpack('<%dI' % (len(d) // 4), d[:len(d) // 4 * 4])


def sx(v):
    return v - 65536 if v & 0x8000 else v


def find_funcs(ws, start):
    """[(first word index, end word index)] from `start`, until a function would start on a zero word"""
    out, i, n = [], start, len(ws)
    while i < n:
        st, mx, j = i, i, i
        while j < n:
            w, o = ws[j], ws[j] >> 26
            if o in (1, 4, 5, 6, 7):
                mx = max(mx, j + 1 + sx(w & 0xFFFF))
            if w == 0x03E00008 and j >= mx:
                break
            j += 1
        else:
            break
        out.append((st, j + 2))
        i = j + 2
        if i < n and ws[i] == 0:
            break
    return out


def in_own(addr, size):
    return ENG_END <= addr < BASE + size + 0x400000


def norm(ws, a, b, loose=False):
    """the function's shape: a tuple of masked words"""
    out, hireg = [], set()
    first = BASE + a * 4
    for k in range(a, b):
        w = ws[k]
        o, rs, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        if loose:
            out.append((w >> 26) if o else (w & 63) | 0x100)
            continue
        if o == 0x0F and 0x8017 <= (w & 0xFFFF) <= 0x8020:
            hireg.add(rt)
            w &= 0xFFFF0000
        elif o in (8, 9, 12, 13, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x32, 0x3A) \
                and rs in hireg:
            w &= 0xFFFF0000
            if o in (8, 9, 12, 13) and rt == rs:
                pass
        elif o == 3:
            t = (w & 0x3FFFFFF) << 2 | 0x80000000
            if t >= ENG_END:
                w &= 0xFC000000
        elif o == 2:
            t = (w & 0x3FFFFFF) << 2 | 0x80000000
            w = 0x08000000 | ((t - first) >> 2 & 0x3FFFFFF) if first <= t < BASE + b * 4 else 0x08000000
        if o in (0x0F, 8, 9, 12, 13) and o != 0x0F and False:
            pass
        out.append(w)
        # a register written by a non-lui instruction is no longer an address base
        if o not in (0x0F, 0x28, 0x29, 0x2A, 0x2B, 0x2E, 4, 5, 6, 7, 1, 2, 3) and rt in hireg and o != 0:
            if not (o in (9, 13) and rs == rt):
                hireg.discard(rt)
        elif o == 0:
            rd = (w >> 11) & 31
            if (w & 63) in (0x21, 0x20) and (rs in hireg or rt in hireg):
                hireg.add(rd)
            else:
                hireg.discard(rd)
    return tuple(out)


def village_calibration():
    """{size bucket: (matched, unmatched)} over SC03_001's whole code (engine + own): what the passes have matched"""
    ws = load(os.path.join(ROOT, 'disc', 'pac4', REF + '.bin'))
    fs = find_funcs(ws, 0)
    src = ''.join(open(f, encoding='utf-8', errors='replace').read()
                  for f in glob.glob(os.path.join(ROOT, 'src', 'stage', '*.c')))
    syms = {}
    for l in open(os.path.join(ROOT, 'symbol_addrs_stage.txt')):
        m = re.match(r'(\w+)\s*=\s*0x([0-9A-Fa-f]{8})', l)
        if m:
            syms[m[1]] = int(m[2], 16)
    unm = set()
    for n in re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', src):
        m = re.match(r'func_([0-9A-F]{8})$', n)
        a = int(m[1], 16) if m else syms.get(n)
        for a0, b0 in fs:
            if a is not None and BASE + a0 * 4 <= a < BASE + b0 * 4:
                unm.add(a0)
    out = {}
    for a0, b0 in fs:
        b = bucket(b0 - a0)
        m, u = out.get(b, (0, 0))
        out[b] = (m, u + 1) if a0 in unm else (m + 1, u)
    return out


BUCKETS = [(1, 8), (9, 16), (17, 32), (33, 64), (65, 128), (129, 256), (257, 100000)]


def bucket(n):
    for lo, hi in BUCKETS:
        if lo <= n <= hi:
            return '%d-%d' % (lo, hi) if hi < 100000 else '%d+' % lo


def ref_status(name=REF):
    """the addresses of a stage's functions still asm (INCLUDE_ASM) in its C file: src/stage/sc03_001.c for the
    village, src/stg/<stage>.c for the others (r145); an address may be inside a function (a named symbol)"""
    lo = name.lower()
    paths = ['symbol_addrs_stage.txt'] + ([] if name == REF else [f'stg/symbol_addrs_{lo}.txt'])
    if name == REF:
        srcs = [os.path.join(ROOT, 'src', 'stage', 'sc03_001.c')]
    else:
        import stage_units as U                     # r209: <stage>_o0.c and _post.c too
        srcs = U.files(lo, ROOT)
    if not os.path.exists(srcs[0]):
        return None
    syms = {}
    for p in paths:
        for l in open(os.path.join(ROOT, p)):
            m = re.match(r'(\w+)\s*=\s*0x([0-9A-Fa-f]{8})', l)
            if m:
                syms[m[1]] = int(m[2], 16)
    unm = set()
    text = ''.join(open(s, encoding='utf-8', errors='replace').read() for s in srcs)
    for n in re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', text):
        m = re.search(r'_([0-9A-F]{8})$', n)
        if m:
            unm.add(int(m[1], 16))
        elif n in syms:
            unm.add(syms[n])
    return unm


def main():
    files = sorted(glob.glob(os.path.join(ROOT, 'disc', 'pac4', '*.bin')))
    if not files:
        sys.exit('no disc/pac4/*.bin')
    ref_ws = load(os.path.join(ROOT, 'disc', 'pac4', REF + '.bin'))
    es, ee = 0, (ENG_END - BASE) // 4
    ref_eng = norm(ref_ws, es, ee)
    stages = {}
    for p in files:
        name = os.path.basename(p)[:-4]
        ws = load(p)
        fs = find_funcs(ws, ee)
        en = norm(ws, 0, ee)
        eng_same = sum(1 for k in range(ee) if en[k] == ref_eng[k])
        funcs = []
        for a, b in fs:
            funcs.append(dict(addr=BASE + a * 4, size=b - a, key=norm(ws, a, b), loose=norm(ws, a, b, True)))
        stages[name] = dict(ws=ws, funcs=funcs, eng_same=eng_same, ee=ee, nbytes=len(ws) * 4)
    # the reference (r146): every function in C in any split image (a stage without a C file counts as all asm);
    # f['asm'] marks the functions still asm (a symbol may name an address inside a function)
    refset = {}
    unmatched = set()
    for n, s in stages.items():
        um = ref_status(n)
        for f in s['funcs']:
            f['asm'] = um is None or any(f['addr'] <= u < f['addr'] + f['size'] * 4 for u in um)
            if f['asm']:
                if n == REF:
                    unmatched.add(f['addr'])
            else:
                refset.setdefault(f['key'], (n, f['addr']))
    where = collections.defaultdict(set)
    count = collections.Counter()
    for n, s in stages.items():
        for f in s['funcs']:
            where[f['key']].add(n)
            count[f['key']] += 1
    loose_where = collections.defaultdict(set)
    for n, s in stages.items():
        for f in s['funcs']:
            loose_where[f['loose']].add(n)
    rows = []
    for n, s in stages.items():
        c = collections.Counter()
        ins = collections.Counter()
        for f in s['funcs']:
            if not f['asm']:
                cls = 'matched'
            elif f['key'] in refset:
                cls = 'matched-clone'
            elif len(where[f['key']]) > 1 or count[f['key']] > 1:
                cls = 'shared'
            else:
                cls = 'unique'
            if cls == 'unique' and len(loose_where[f['loose']]) > 1:
                cls = 'unique (near-shape elsewhere)'
            f['cls'] = cls
            c[cls] += 1
            ins[cls] += f['size']
        end = s['funcs'][-1]['addr'] + s['funcs'][-1]['size'] * 4 if s['funcs'] else ENG_END
        fam = hash(tuple(f['key'] for f in s['funcs']))
        rows.append(dict(fam=fam, name=n, start=ENG_END, end=end, nfunc=len(s['funcs']), eng=s['eng_same'], ee=s['ee'],
                         size=s['nbytes'], c=c, ins=ins))
    return stages, rows, where, count, refset, unmatched


def report(stages, rows, where, count, refset, unmatched, md=False):
    tot = collections.Counter()
    tins = collections.Counter()
    for r in rows:
        tot.update(r['c'])
        tins.update(r['ins'])
    print('%-9s %-10s %-10s %5s %6s | %s' % ('stage', 'own start', 'own end', 'funcs', 'engine',
                                              'matched / matched-clone / shared / unique'))
    for r in rows:
        c = r['c']
        print('%-9s %08X   %08X   %5d %5.1f%% | %4d %4d %4d %4d' % (
            r['name'], r['start'], r['end'], r['nfunc'], 100.0 * r['eng'] / r['ee'],
            c['matched'], c['matched-clone'], c['shared'], c['unique'] + c['unique (near-shape elsewhere)']))
    print()
    print('totals (functions / instructions):')
    for k in sorted(tot):
        print('  %-40s %6d %8d' % (k, tot[k], tins[k]))
    # distinct shapes, not matched-clone
    shapes = {}
    for n, s in stages.items():
        for f in s['funcs']:
            if f['cls'] in ('shared', 'unique', 'unique (near-shape elsewhere)'):
                shapes.setdefault(f['key'], []).append((n, f['size'], f['addr']))
    byn = collections.defaultdict(list)
    for k, v in shapes.items():
        byn[len({x[0] for x in v})].append(v)
    print()
    print('distinct unmatched shapes (shapes matched in any image excluded): %d' % len(shapes))
    print('%-22s %8s %10s %12s' % ('stages it appears in', 'shapes', 'instr', 'occurrences'))
    buckets = [(1, 1), (2, 2), (3, 5), (6, 10), (11, 30), (31, 200)]
    for lo, hi in buckets:
        sel = [v for n, v in byn.items() if lo <= n <= hi for v in v]
        sel = [v for n, vs in byn.items() if lo <= n <= hi for v in vs]
        print('%-22s %8d %10d %12d' % ('%d-%d' % (lo, hi) if lo != hi else str(lo), len(sel),
                                       sum(min(x[1] for x in v) for v in sel), sum(len(v) for v in sel)))
    print()
    print('size of the distinct unmatched shapes (instructions): shapes / instructions')
    sb = collections.defaultdict(lambda: [0, 0, 0])
    for k, v in shapes.items():
        b = bucket(min(x[1] for x in v))
        sb[b][0] += 1
        sb[b][1] += min(x[1] for x in v)
        sb[b][2] += len(v)
    for lo, hi in BUCKETS:
        b = bucket(lo)
        print('  %-8s %6d %9d  (%d occurrences)' % (b, sb[b][0], sb[b][1], sb[b][2]))
    fam = {}
    for r in rows:
        fam.setdefault(r['fam'], []).append(r['name'])
    print()
    print('distinct own-code images (identical own code counted once): %d of %d' % (len(fam), len(rows)))
    for v in fam.values():
        if len(v) > 1:
            print('  same code:', ' '.join(v))
    loose = {}
    for k, v in shapes.items():
        for n, s in stages.items():
            pass
    lg = collections.defaultdict(set)
    for n, s in stages.items():
        for f in s['funcs']:
            if f['key'] in shapes:
                lg[f['loose']].add(f['key'])
    print('distinct unmatched shapes: %d; loose shape groups (opcodes only): %d' % (len(shapes), len(lg)))
    print()
    print("village calibration (SC03_001 engine + own code, matched / still asm per size, instructions):")
    for lo, hi in BUCKETS:
        b = bucket(lo)
        m, u = village_calibration().get(b, (0, 0))
        print('  %-8s matched %5d  asm %5d  (%.0f%% matched)' % (b, m, u, 100.0 * m / max(1, m + u)))
    return shapes, tot, tins


def md_table(rows):
    fam = {}
    for r in rows:
        fam.setdefault(r['fam'], []).append(r['name'])
    out = ['| Stage | Own code | Bytes | Functions | Matched (C, stubs too) | Clone of a matched, still asm | '
           'Shared (also elsewhere) | Unique | Same code as |',
           '|---|---|---|---|---|---|---|---|---|']
    for r in rows:
        c = r['c']
        same = ' '.join(x for x in fam[r['fam']] if x != r['name'])
        out.append('| %s | %08X-%08X | %d | %d | %d | %d | %d | %d | %s |' % (
            r['name'], r['start'], r['end'], r['end'] - r['start'], r['nfunc'], c['matched'], c['matched-clone'],
            c['shared'], c['unique'] + c['unique (near-shape elsewhere)'], same))
    return chr(10).join(out)


if __name__ == '__main__':
    st, rows, where, count, refset, unmatched = main()
    shapes, tot, tins = report(st, rows, where, count, refset, unmatched)
    if '--md' in sys.argv:
        open(sys.argv[sys.argv.index('--md') + 1], 'w').write(md_table(rows) + chr(10))
    if '--csv' in sys.argv:
        out = sys.argv[sys.argv.index('--csv') + 1]
        with open(out, 'w') as f:
            f.write('stage,start,end,funcs,engine_same_pct,image_bytes,matched,matched_clone,shared,unique,unique_near\n')
            for r in rows:
                c = r['c']
                f.write('%s,%08X,%08X,%d,%.2f,%d,%d,%d,%d,%d,%d\n' % (
                    r['name'], r['start'], r['end'], r['nfunc'], 100.0 * r['eng'] / r['ee'], r['size'], c['matched'],
                    c['matched-clone'], c['shared'], c['unique'], c['unique (near-shape elsewhere)']))
