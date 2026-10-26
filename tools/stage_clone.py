#!/usr/bin/env python3
"""Copy matched stage functions to every other split stage with the same code (r143, generalised in r146;
docs/decomp_pilot.md): the stage version of abil_clone.py.

A function of a stage image whose census shape (tools/stage_census.py: the instruction words with the stage's
relocated addresses masked) equals a matched function's shape in any image (the village, src/stage/sc03_001.c, or any
split stage, src/stg/<stage>.c) is the same code at shifted addresses. Its C is the source's, renamed: the function
itself, the own-code functions it calls and the stage data it reads. The names are paired by walking the two functions'
asm side by side (the k-th symbol of the source function is the k-th of the target's); a symbol the source C names but
its asm does not (a struct base read at an offset) is moved by the offset of the nearest pair. Engine and EXE symbols
keep their names. A matched function is one with a non-empty C body (splat's empty stubs are not sources).

Writes one draft per function to <out>/<func>.c (the source file's includes, typedefs and the declarations the body
uses, renamed), like tools/stage_bulk/m2c_stage.py; then compile them with tools/stage_bulk/cmp_par.py and place them
with `$env:TWINBLADE_STG = "<stage>"; tools/stage_bulk/place_stage.py`. tools/stage_bulk/clone_all.py runs the
three steps over every stage and repeats until a pass places nothing.

Usage: stage_clone.py SC02_031 <out_dir> [--alt N]     one target stage
       stage_clone.py --all <out_root> [--alt N]        every split stage, drafts in <out_root>/<stage>/
--alt N: take the N-th matched source of a shape (0 = the village first, then the stages in name order), to retry a
draft whose first source did not compile to the target's bytes.
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import put_func as P  # noqa: E402
import stage_census as C  # noqa: E402

AF = '#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))'
INS = re.compile(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\w+)\s*(.*)')
SYM = re.compile(r'(?<![.\w$])([A-Za-z_]\w*)')
REGS = re.compile(r'^(?:hi|lo|zero|at|v[01]|a[0-3]|t\d|s[0-8]|k[01]|gp|sp|fp|ra)$')
DEF = re.compile(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;]*\)\s*\{', re.M)
VILLAGE = 'SC03_001'


def asm_file(f):
    """(first address, [symbol tokens in order]) of one function's asm file"""
    toks, first = [], None
    for line in open(f):
        m = INS.match(line)
        if not m:
            continue
        if first is None:
            first = int(m[1], 16)
        if m[2] in ('jal', 'j') or '%hi(' in m[3] or '%lo(' in m[3]:
            for s in SYM.findall(re.sub(r'%(?:hi|lo)\(', ' ', m[3])):
                if not REGS.match(s) and not s.startswith('L'):
                    toks.append(s)
    return first, toks


def addr_of(name, syms):
    m = re.search(r'_([0-9A-F]{8})$', name)
    return int(m[1], 16) if m else syms.get(name)


def read_syms(paths):
    syms = {}
    for path in paths:
        p = os.path.join(ROOT, path)
        if not os.path.exists(p):
            continue
        for l in open(p):
            m = re.match(r'(\w+)\s*=\s*0x([0-9A-Fa-f]{8})', l)
            if m:
                syms[m[1]] = int(m[2], 16)
    return syms


class Image:
    """one stage image: its words, its own functions and shapes, its C file and asm folder"""

    def __init__(self, name):
        self.name, self.lo = name, name.lower()
        if name == VILLAGE:
            self.src = os.path.join(ROOT, 'src', 'stage', 'sc03_001.c')
            self.asm = os.path.join(ROOT, 'asm', 'stage', 'nonmatchings', 'sc03_001')
            self.syms = read_syms(['symbol_addrs_stage.txt'])
            self.own = re.compile(r'(func|D)_([0-9A-F]{8})$')
        else:
            self.src = os.path.join(ROOT, 'src', 'stg', self.lo + '.c')
            self.asm = os.path.join(ROOT, 'asm', 'stg', self.lo, 'nonmatchings', self.lo)
            self.syms = read_syms(['symbol_addrs_stage.txt', f'stg/symbol_addrs_{self.lo}.txt'])
            self.own = re.compile(rf'(func|D)_{self.lo}_([0-9A-F]{{8}})$')
        ws = C.load(os.path.join(ROOT, 'disc', 'pac4', name + '.bin'))
        ee = (C.ENG_END - C.BASE) // 4
        self.funcs = [(C.BASE + a * 4, C.norm(ws, a, b)) for a, b in C.find_funcs(ws, ee)]
        self.text = open(self.src, encoding='utf-8').read()
        self.todo = set(re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', self.text))
        self._asm = None
        self._parsed = None

    def asm_by_addr(self):
        """{first address: function name} for the asm folder (from the file names; named files are read)"""
        if self._asm is None:
            self._asm = {}
            for f in glob.glob(os.path.join(self.asm, '*.s')):
                n = os.path.basename(f)[:-2]
                m = re.search(r'_([0-9A-F]{8})$', n)
                a = int(m[1], 16) if m else asm_file(f)[0]
                if a is not None:
                    self._asm[a] = n
        return self._asm

    def tokens(self, name):
        return asm_file(os.path.join(self.asm, name + '.s'))[1]

    def parsed(self):
        """(declaration chunks without INCLUDE_ASMs, {function: body}, typedef chunks, include lines)"""
        if self._parsed is None:
            decl, funcs = P.split(self.text)
            ch = [re.sub(r'^INCLUDE_ASM\(.*\n?', '', c, flags=re.M).strip() for c in P.chunks(decl)]
            ch = [c for c in ch if c]
            tdefs = []
            for c in ch:
                m = re.search(r'^(typedef|struct|union|enum)\b', c, re.M)
                if m and not re.search(r'^INCLUDE_ASM', c[m.start():], re.M):
                    tdefs.append(c[m.start():])
            inc = ''.join(f'#include "{h}"\n' for h in re.findall(r'^#include "(\w+\.h)"', self.text, re.M))
            self._parsed = (ch, funcs, tdefs, inc)
        return self._parsed

    def externs(self):
        """{symbol: its `extern` line} of the C file"""
        out = {}
        for l in self.text.splitlines():
            s = extern_sym(l.strip())
            if s:
                out.setdefault(s, l.strip())
        return out

    def matched(self):
        """{address: name} of the functions with a non-empty C body"""
        out = {}
        _, funcs, _, _ = self.parsed()
        by_name = {n: a for a, n in self.asm_by_addr().items()}
        for n, body in funcs.items():
            inner = body[body.find('{') + 1:body.rfind('}')].strip()
            if inner and n in by_name:
                out[by_name[n]] = n
        return out


def extern_sym(line):
    """the symbol an `extern ...;` line declares (a function, an array, a function-pointer table)"""
    if not line.startswith('extern') or not line.endswith(';'):
        return None
    m = re.search(r'\(\*(\w+)\[\]\)', line) or re.search(r'(\w+)(?:\[\w*\])*(?:\(.*\))?;$', line)
    return m[1] if m else None


def all_images():
    names = [VILLAGE] + sorted(os.path.basename(p)[:-2].upper() for p in glob.glob(os.path.join(ROOT, 'src', 'stg', '*.c')))
    return {n: Image(n) for n in names}


def source_index(images):
    """{shape: [(image, address, name)]}: every matched function, the village first, then the stages in order"""
    idx = {}
    for im in images.values():
        m = im.matched()
        for a, key in im.funcs:
            if a in m:
                idx.setdefault(key, []).append((im, a, m[a]))
    return idx


def draft(src, va, vname, tgt, sa, sname):
    """the C text of target function sname, copied from source function vname; or (None, why)"""
    vt, st = src.tokens(vname), tgt.tokens(sname)
    if len(vt) != len(st):
        return None, f'{len(vt)} / {len(st)} symbols'
    ch, vfuncs, tdefs, inc = src.parsed()
    if vname not in vfuncs:
        return None, 'no C body in the source'
    names = {vname: sname}
    pairs = []
    for x, y in zip(vt, st):
        if x != y:
            names.setdefault(x, y)
        ax, ay = addr_of(x, src.syms), addr_of(y, tgt.syms)
        if ax is not None and ay is not None and ax >= C.ENG_END:
            pairs.append((ax, ay))
    body = vfuncs[vname]
    words = set(re.findall(r'\w+', body))
    mine = [c for c in ch if not re.search(r'^(typedef|struct|union|enum)\b', c, re.M)
            and (syms_c := set(re.findall(r'\b(?:func|D|jtbl)_\w+', c))) and syms_c & words]
    moved = []
    # source own-range symbols the asm does not name: shift by the nearest pair below
    for s in sorted(words | {w for c in mine for w in re.findall(r'\w+', c)}):
        if s in names:
            continue
        m = src.own.match(s)
        if not m:
            continue
        ax = int(m[2], 16)
        if ax < C.ENG_END or not pairs:
            continue
        below = [p for p in pairs if p[0] <= ax]
        px, py = max(below) if below else min(pairs)
        names[s] = f'{m[1]}_{tgt.lo}_{py + ax - px:08X}'
        moved.append((s, names[s]))
    ren = lambda t: re.sub(r'\b\w+\b', lambda w: names.get(w[0], w[0]), t)  # noqa: E731
    # a symbol the target file already declares keeps the file's declaration (two sources may guess an engine
    # function's type differently; the compile check says whether the file's version still matches)
    have = tgt.externs()
    decls = []
    for c in mine:
        c = ren(c)
        s = extern_sym(c) if '\n' not in c else None
        if s == sname:
            continue          # r192: the function's own guess (`extern void f();`) conflicts with its definition
        h = have.get(s)
        # r192: the target's `extern void f()` for a callee the source declares with a value: the source's line (the
        # body uses the value; place_stage retypes the file's guess, "void value not ignored" otherwise)
        if h and re.match(r'extern\s+void\s+\w+\s*\(', h) and re.match(r'(?:extern\s+)?(?!void\b)[\w\s\*]+?\b\w+\s*\(', c):
            h = None
        decls.append(h or c if s else c)
    # the source's own symbols must all be renamed: one left over would link to the wrong stage
    text = inc + AF + '\n' + '\n'.join(tdefs + decls) + '\n\n' + ren(body) + '\n'
    if src.name != VILLAGE:
        # r192: also within one image (sc05_008 has 18 copies of one shape), where the names share the prefix: a
        # source-own symbol is left over when neither the asm walk nor the offset move gave it a target name
        ok = set(st) | set(names.values())
        left = sorted({w for w in re.findall(rf'\b(?:func|D|jtbl)_{src.lo}_[0-9A-F]{{8}}\b', text) if w not in ok})
        if left:
            return None, 'a source symbol left unrenamed: ' + ' '.join(left[:4])
    return text, moved


def clone_stage(tgt, idx, out_dir, alt=0, log=print):
    """write the drafts of one target stage; -> (shape matches still asm, drafts written)"""
    os.makedirs(out_dir, exist_ok=True)
    n_shape = n_written = 0
    by_addr = None
    for sa, key in tgt.funcs:
        # another image's copy first; then another function of this image (r192: same-stage sources were skipped)
        cands = sorted((c for c in idx.get(key, []) if c[0] is not tgt or c[1] != sa), key=lambda c: c[0] is tgt)
        if not cands:
            continue
        if by_addr is None:
            by_addr = tgt.asm_by_addr()
        sname = by_addr.get(sa)
        if sname is None:
            log(f'{tgt.name} {sa:08X}: no asm file at the census start'); continue
        if sname not in tgt.todo:
            continue
        n_shape += 1
        src, va, vname = cands[alt % len(cands)]
        text, why = draft(src, va, vname, tgt, sa, sname)
        if text is None:
            log(f'{tgt.name} {sname} from {src.name} {vname}: {why}, skipped'); continue
        open(os.path.join(out_dir, sname + '.c'), 'w', newline='\n').write(text)
        n_written += 1
        for s, t in why:
            log(f'  moved by offset: {sname} {s} {t}')
    return n_shape, n_written


def main():
    args = sys.argv[1:]
    alt = 0
    if '--alt' in args:
        i = args.index('--alt')
        alt = int(args[i + 1])
        del args[i:i + 2]
    images = all_images()
    idx = source_index(images)
    print(f'{sum(len(v) for v in idx.values())} matched functions in {len(idx)} shapes')
    if args[0] == '--all':
        root = args[1]
        ts = tw = 0
        for n, im in images.items():
            if n == VILLAGE:
                continue
            s, w = clone_stage(im, idx, os.path.join(root, im.lo), alt)
            ts, tw = ts + s, tw + w
            print(f'{n}: {s} functions of a matched shape still asm, {w} drafts')
        print(f'all: {ts} functions of a matched shape still asm, {tw} drafts written to {root}')
    else:
        stage, out_dir = args[0].upper(), args[1]
        s, w = clone_stage(images[stage], idx, out_dir, alt)
        print(f'{stage}: {s} functions of a matched shape still asm, {w} drafts written to {out_dir}')


if __name__ == '__main__':
    main()
