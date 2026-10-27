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
       stage_clone.py --all <out_root> [--alt N]        every split stage and the village (r211), drafts in <out_root>/<stage>/
--allow-pending (r208): also clone from the sources listed in tools/stage_bulk/pending_rulings.txt (placed under a
ruling LuciDin has not given yet; skipped by default).
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
import stage_units as U  # noqa: E402

AF = '#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))'
INS = re.compile(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\w+)\s*(.*)')
SYM = re.compile(r'(?<![.\w$])([A-Za-z_]\w*)')
REGS = re.compile(r'^(?:hi|lo|zero|at|v[01]|a[0-3]|t\d|s[0-8]|k[01]|gp|sp|fp|ra)$')
DEF = re.compile(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;]*\)\s*\{', re.M)
VILLAGE = 'SC03_001'
PENDING_FILE = os.path.join(ROOT, 'tools', 'stage_bulk', 'pending_rulings.txt')
PENDING = set()   # r208: filled by main() unless --allow-pending


def read_pending():
    if not os.path.exists(PENDING_FILE):
        return set()
    return {l.split('#')[0].strip() for l in open(PENDING_FILE, encoding='utf-8') if l.split('#')[0].strip()}


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
            self.srcs = [os.path.join(ROOT, 'src', 'stage', 'sc03_001.c')]
            self.asms = [os.path.join(ROOT, 'asm', 'stage', 'nonmatchings', 'sc03_001')]
            self.objs = [os.path.join(ROOT, 'build', 'src', 'stage', 'sc03_001.o')]
            self.syms = read_syms(['symbol_addrs_stage.txt'])
            self.own = re.compile(r'(func|D)_([0-9A-F]{8})$')
        else:
            # r209: an image with an -O0 run has three C files (tools/stage_units.py), each its asm folder and object
            self.srcs = U.files(self.lo, ROOT)
            self.asms = [os.path.join(ROOT, 'asm', 'stg', self.lo, 'nonmatchings', U.unit_of(p)) for p in self.srcs]
            self.objs = [os.path.join(ROOT, 'build', 'src', 'stg', U.unit_of(p) + '.o') for p in self.srcs]
            self.syms = read_syms(['symbol_addrs_stage.txt', f'stg/symbol_addrs_{self.lo}.txt'])
            self.own = re.compile(rf'(func|D)_{self.lo}_([0-9A-F]{{8}})$')
        ws = C.load(os.path.join(ROOT, 'disc', 'pac4', name + '.bin'))
        ee = (C.ENG_END - C.BASE) // 4
        self.funcs = [(C.BASE + a * 4, C.norm(ws, a, b)) for a, b in C.find_funcs(ws, ee)]
        self.text = ''.join(open(p, encoding='utf-8').read() for p in self.srcs)
        self.todo = set(re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', self.text))
        self._asm = None
        self._parsed = None

    def asm_by_addr(self):
        """{first address: function name} for the asm folder (from the file names; named files are read)"""
        if self._asm is None:
            self._asm = {}
            for f in (f for d in self.asms for f in glob.glob(os.path.join(d, '*.s'))):
                n = os.path.basename(f)[:-2]
                m = re.search(r'_([0-9A-F]{8})$', n)
                a = int(m[1], 16) if m else asm_file(f)[0]
                if a is not None:
                    self._asm[a] = n
        return self._asm

    def tokens(self, name):
        for d in self.asms:
            p = os.path.join(d, name + '.s')
            if os.path.exists(p):
                return asm_file(p)[1]
        return self.obj_tokens(name)

    def sym_name(self, a, kind):
        """the name splat gives an address of this image (an own-range function or datum, else D_<address>)"""
        own = a >= C.ENG_END
        if self.name == VILLAGE or not own:
            return f'{kind}_{a:08X}'
        return f'{kind}_{self.lo}_{a:08X}'

    def obj_tokens(self, name):
        """r208: the symbol tokens of a matched function from the image's built object (splat writes no .s for a
        function with C, so after a re-split no matched function of the image was a clone source: r201's 24 hand
        clones). A relocation with an addend is named by its exact address, as splat's .s would name it"""
        import subprocess
        objdump = os.path.join(ROOT, 'tools', 'toolchain', 'bin', 'mipsel-none-elf-objdump')
        if getattr(self, '_objsyms', None) is None:
            self._objsyms = {}
            for o in (o for o in self.objs if os.path.exists(o)):
                t = subprocess.run([objdump, '-t', o], capture_output=True, text=True).stdout
                self._objsyms.update({m[3]: (o, int(m[1], 16), int(m[2], 16)) for m in
                                      re.finditer(r'^([0-9a-f]{8}) g\s+F \.text\s+([0-9a-f]{8}) (\w+)$', t, re.M)})
        if name not in self._objsyms:
            return []
        o, lo_, size = self._objsyms[name]
        # the symbol's own range (--disassemble=<sym> ran on past the function: 593 relocations for a 0xE0 one)
        dump = subprocess.run([objdump, '-drz', f'--start-address={lo_:#x}', f'--stop-address={lo_ + size:#x}', o],
                              capture_output=True, text=True).stdout
        rows, word = [], {}
        for line in dump.splitlines():
            im = re.match(r'\s+([0-9a-f]+):\s+([0-9a-f]{8})\s', line)
            if im:
                word[int(im[1], 16)] = int(im[2], 16)
            rm = re.match(r'\s+([0-9a-f]+): R_MIPS_(HI16|LO16|26)\s+(\S+)', line)
            if rm and lo_ <= int(rm[1], 16) < lo_ + size:
                rows.append((int(rm[1], 16), rm[2], rm[3]))
        out = []
        for k, (off, kind, sym) in enumerate(rows):
            if sym.startswith('.'):
                continue                      # a section (a local jump, static data): splat's .s has no symbol there
            if kind == '26':
                out.append(sym); continue
            lo = (off, word.get(off, 0)) if kind == 'LO16' else \
                next(((o2, word.get(o2, 0)) for o2, k2, s2 in rows[k + 1:] if k2 == 'LO16' and s2 == sym), None)
            add = 0
            if lo:
                add = lo[1] & 0xFFFF
                add = add - 0x10000 if add & 0x8000 else add
                if kind == 'HI16':
                    add += (word.get(off, 0) & 0xFFFF) << 16
            a = addr_of(sym, self.syms)
            out.append(sym if not add or a is None else self.sym_name((a + add) & 0xFFFFFFFF, 'D'))
        return out

    def parsed(self):
        """(declaration chunks without INCLUDE_ASMs, {function: body}, typedef chunks, include lines)"""
        if self._parsed is None:
            decl, funcs = P.split(self.text)
            ch = [re.sub(r'^INCLUDE_ASM\(.*\n?', '', c, flags=re.M).strip() for c in P.chunks(decl)]
            # r209: an image's later units repeat the first one's declarations (tools/stage_units.py): each chunk once
            # (gcc 2.7.2 rejects a typedef given twice, even the same text)
            seen = set()
            ch = [c for c in ch if c and not (P.norm(c) in seen or seen.add(P.norm(c)))]
            tdefs = []
            for c in ch:
                m = re.search(r'^(typedef|struct|union|enum)\b', c, re.M)
                if m and not re.search(r'^INCLUDE_ASM', c[m.start():], re.M):
                    tdefs.append(c[m.start():])
            inc = ''.join(f'#include "{h}"\n' for h in
                          dict.fromkeys(re.findall(r'^#include "(\w+\.h)"', self.text, re.M)))
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
        has_obj = any(os.path.exists(o) for o in self.objs)
        for n, body in funcs.items():
            inner = body[body.find('{') + 1:body.rfind('}')].strip()
            # r208: a function with no .s (split after it was matched) by its name's address, its tokens from the object
            a = by_name.get(n)
            if a is None and has_obj and not body.lstrip().startswith('static'):
                a = addr_of(n, self.syms)
            if inner and a is not None:
                out[a] = n
        return out


def extern_sym(line):
    """the symbol an `extern ...;` line declares (a function, an array, a function-pointer table)"""
    if not line.startswith('extern') or not line.endswith(';'):
        return None
    m = re.search(r'\(\*(\w+)\[\]\)', line) or re.search(r'(\w+)(?:\[\w*\])*(?:\(.*\))?;$', line)
    return m[1] if m else None


def all_images():
    names = [VILLAGE] + [lo.upper() for lo in U.stages(ROOT)]
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


_PSYQ = None


def psyq_names():
    """the function names include/psyq.h declares"""
    global _PSYQ
    if _PSYQ is None:
        p = os.path.join(ROOT, 'include', 'psyq.h')
        t = P.strip_comments(open(p, encoding='utf-8', errors='replace').read()) if os.path.exists(p) else ''
        _PSYQ = set(re.findall(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{}]*\)\s*;', t, re.M))
    return _PSYQ


def retype_uses(body, ren, tsym, src_line):
    """the body with every use of the (target-named) symbol read as the source's declared type: a scalar
    `extern T X;` as `(*(T *)&X)`, an array `extern T X[];` as `((T *)&X)` (same address, the source's width and
    sign); body is still in the source's names, so the source name of tsym is the one replaced"""
    m = re.fullmatch(r'\s*extern\s+(.+?)\s*\b(\w+)\s*(\[[^\]]*\])?\s*;\s*', src_line)
    if not m or m[3] and m[3].count('[') > 1:
        return body
    srcname = [w for w in set(re.findall(r'\w+', body)) if ren(w) == tsym]
    if not srcname:
        return body
    ty = m[1].strip()
    rep = f'((({ty} *)&{srcname[0]}))' if m[3] else f'(*({ty} *)&{srcname[0]})'
    return re.sub(rf'(?<![\w.>])\b{srcname[0]}\b', lambda q: rep, body)


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
    # r208: the source's `static inline` helpers the body calls go in front of it (they were dropped: sc03_031
    # 80180F0C, sc02_003 801888F4, sc06_018 8018F060); their inlined code is in the asm walk, so they rename too
    inl = [b for k, b in vfuncs.items() if k != vname and re.match(r'static\s+inline\b', P.strip_comments(b).lstrip())
           and re.search(rf'\b{k}\s*\(', body)]
    body = ''.join(b + '\n\n' for b in inl) + body
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
        # r208: the nearest pair either side (the nearest below could be another block: sc06_024 80181EF4 moved
        # D_801AC420 by D_801AF7B4's pair, where the asm's D_801AC426 is its `.pad` six bytes above)
        px, py = min(pairs, key=lambda p: (abs(p[0] - ax), p[0] > ax))
        names[s] = tgt.sym_name(py + ax - px, m[1])   # r211: the village's own symbols are D_<addr> (r210)
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
        # r208: a variable the target declares with another type (u16 vs s16, an array vs a scalar, r203 sc01_077 /
        # sc02_000 D_80126B5E, sc03_030 D_800B9A02): the target's line, and the body reads it as the source's type
        if h and s and '(' not in c and '(' not in h and P.norm(h) != P.norm(c):
            body = retype_uses(body, ren, s, c)
        decls.append(h or c if s else c)
    # r208: psyq.h clashes with a target that declares the library functions itself (`extern void LoadImage();`):
    # then the draft carries the target's lines for the ones the body calls instead
    if '#include "psyq.h"' in inc and '#include "psyq.h"' not in tgt.text and set(have) & psyq_names():
        calls = {s for s in psyq_names() if re.search(rf'\b{s}\s*\(', body)}
        if calls <= set(have):                # every library call the body makes, the target declares
            inc = inc.replace('#include "psyq.h"\n', '')
            decls += [have[s] for s in sorted(calls) if have[s] not in decls]
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
        # r208: a source placed under a ruling still pending is no clone source (tools/stage_bulk/pending_rulings.txt)
        held = [c for c in cands if c[2] in PENDING]
        cands = [c for c in cands if c[2] not in PENDING]
        if held and not cands:
            log(f'{tgt.name} {sa:08X}: only sources under a pending ruling ({held[0][2]}), skipped'); continue
        if not cands:
            continue
        if by_addr is None:
            by_addr, done = tgt.asm_by_addr(), tgt.matched()
        sname = by_addr.get(sa)
        if sname is None:
            # r209: a fresh split writes no .s for a function in C, so only a missing asm function is worth a line
            if sa not in done:
                log(f'{tgt.name} {sa:08X}: no asm file at the census start')
            continue
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
    if not args or args[0] in ('-h', '--help'):
        sys.exit(__doc__)
    alt = 0
    if '--allow-pending' in args:
        args.remove('--allow-pending')
    else:
        PENDING.update(read_pending())
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
        for n, im in images.items():   # r211: the village too (src/stage/sc03_001.c; r210 found it skipped)
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
