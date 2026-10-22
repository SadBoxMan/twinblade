"""Apply one confirmed source lever to every draft of a bulk folder, writing the changed functions to a new folder
(r127). cmpdir.ps1 / keep_matched.py / put_func then try them like any bulk pass:
    python tools/abil_bulk/rewrite.py <lever> <in_dir> <out_dir>
Levers (each confirmed by a match, docs/decomp_recipes.md section 8):
    s16sign   `x & 0x8000` in a condition -> `(s16) x < 0` (sll 16 + bgez/bltz, not andi)
    rand      `rand(arg0, ...)` -> `rand()` (m2c passes the live a-registers to a callee it does not know)
    table     `(u16) *(&D_x + (i * 4))` -> `D_x[i * 2]`, D_x declared `u16 D_x[]` (the cast gives the type)
    avec      two M2C_UNALIGNED32 word copies (o, o+4) -> one AVec (SVECTOR) copy (lwl/lwr pairs)
    frame     the original's frame is N bytes larger -> an unused `s32 pad[N / 4];` (reads <in_dir>/<pkg>.c.log)
    rmwsort   a run of `AF(b, T, o) = ... AF(b, T, o) ...;` on one base sorted by offset (m2c shows the scheduled order)
    idx       `D_x[(state - 2)](a)` -> `{ s32 i = state - 2; D_x[i](a); }` (keeps `addiu -2` before the `sll`)
    stride    `u16 *p = &D; p += 0x68` (m2c's byte stride on a halfword pointer) -> `u8 *p`, `AF(p, u16, 0)`, `u8 D[]`
    mtx       m2c's eight-word copy (four stores, three temps, four stores) -> `AF(d, AMtx, o) = AF(v, AMtx, p)`
    amodel    the actor's model (+0x20) as an AModel *, its rot/scale/pos halfwords as members (struct stores let
              loads from other pointers move above them; the source order may still need a hand swap)
    arr       a global whose address is passed and that is stored to -> an array, D_x[0] = ... (r131)
    avecg     halfword globals 2 or 4 bytes apart -> one AVec global, D.vx / D.vz (r131)
    all       every lever above at once
"""
import glob, os, re, sys
sys.path.insert(0, 'tools')
import put_func as P  # noqa: E402

LEVERS = {
    's16sign': [(r'!\(\(((?:[^()]|\((?:[^()]|\([^()]*\))*\))+?) & 0x8000\)\)', r'((s16) (\1) >= 0)'),
                (r'\(((?:[^()]|\((?:[^()]|\([^()]*\))*\))+?) & 0x8000\)', r'((s16) (\1) < 0)')],
    'rand': [(r'\brand\((?:[^()]|\([^()]*\))+\)', 'rand()')],
}


def avec(body):
    """two M2C_UNALIGNED32 word copies at o and o+4 -> one AVec copy (8 bytes, 2-aligned: lwl/lwr pairs)"""
    side = r'AF\((.+?), s32, (0x[0-9A-Fa-f]+|-?\d+)\)|M2C_FIELD\((.+?), s32 \*, (0x[0-9A-Fa-f]+|-?\d+)\)'
    pat = re.compile(rf'^(\s*)(?:{side}) = M2C_UNALIGNED32\((?:{side})\);\n\s*(?:{side}) = M2C_UNALIGNED32\((?:{side})\);$', re.M)

    def ref(base, off):
        return f'AF({base}, AVec, {off})'

    def one(m):
        g = m.groups()
        d0 = (g[1] or g[3], int(g[2] or g[4], 0)); s0 = (g[5] or g[7], int(g[6] or g[8], 0))
        d1 = (g[9] or g[11], int(g[10] or g[12], 0)); s1 = (g[13] or g[15], int(g[14] or g[16], 0))
        if d0[0] != d1[0] or s0[0] != s1[0] or d1[1] != d0[1] + 4 or s1[1] != s0[1] + 4:
            return m[0]
        return f'{g[0]}{ref(d0[0], hex(d0[1]))} = {ref(s0[0], hex(s0[1]) if s0[1] >= 0 else s0[1])};'
    return pat.sub(one, body)


LEVERS['avec'] = avec
SIZES = {'u8': 1, 's8': 1, 'u16': 2, 's16': 2, 's32': 4, 'u32': 4}
TABLES = {}       # symbol -> element type, for the declarations


def table(body):
    """m2c's byte arithmetic on a table, `(u16) *(&D_x + (i * 4))`, -> `D_x[i * 2]` with D_x a u16 array"""
    def one(m):
        T, sym, e, k = m[1], m[2], m[3], int(m[4], 0)
        if k % SIZES[T] or TABLES.get(sym, T) != T:
            return m[0]
        TABLES[sym] = T
        n = k // SIZES[T]
        return f'{sym}[{e}]' if n == 1 else f'{sym}[({e}) * {n}]'
    return re.sub(r'\((u8|s8|u16|s16|s32|u32)\) \*\(&(D_\w+) \+ \((.+?) \* (0x[0-9A-Fa-f]+|\d+)\)\)', one, body)


def table_decl(decl):
    for sym, T in TABLES.items():
        decl = re.sub(rf'^extern [\w ]+\b{sym};$', f'extern {T} {sym}[];', decl, flags=re.M)
    return decl


FIELDS = {0x10: 'rot.vx', 0x12: 'rot.vy', 0x14: 'rot.vz', 0x16: 'rot.pad',
          0x18: 'scale.vx', 0x1A: 'scale.vy', 0x1C: 'scale.vz', 0x1E: 'scale.pad',
          0x08: 'pos[0]', 0x0A: 'pos[1]', 0x0C: 'pos[2]'}


def amodel(body):
    """the actor's model (+0x20) as an AModel *: its halfword fields as struct members (loads move above them)"""
    names = set(re.findall(r'^\s*(\w+) = (?:\(\w+ \*\) )?AF\(\w+, (?:void \*|s32|u8 \*), 0x20\);', body, re.M))
    names |= {m[1] for m in re.finditer(r'^\s*AF\(\w+, (?:s32|void \*), 0x20\) = (\w+);', body, re.M)}
    names = {n for n in names if re.search(rf'AF\({n}, [us]16, 0x(?:1[0-9A-E]|0[8AC])\)', body)}
    for n in names:
        body = re.sub(rf'^(\s*)(?:void \*|s32 |u8 \*){n};', rf'\1AModel *{n};', body, flags=re.M)
        body = re.sub(rf'^(\s*){n} = (?:\(s32\) )?(func_\w+\()', rf'\1{n} = (AModel *) \2', body, flags=re.M)
        body = re.sub(rf'^(\s*)AF\((\w+), (?:s32|void \*), 0x20\) = {n};', rf'\1AF(\2, AModel *, 0x20) = {n};', body, flags=re.M)
        body = re.sub(rf'^(\s*){n} = (?:\(\w+ \*\) )?AF\((\w+), (?:void \*|s32|u8 \*), 0x20\);', rf'\1{n} = AF(\2, AModel *, 0x20);', body, flags=re.M)

        def fld(m):
            f = FIELDS.get(int(m[1], 16))
            return f'{n}->{f}' if f else m[0]
        body = re.sub(rf'(?:\([us]16\) )?AF\({n}, [us]16, (0x[0-9A-Fa-f]+)\)', fld, body)
    return body


LEVERS['amodel'] = amodel
LEVERS['table'] = table
DECL = {'table': table_decl, 'all': table_decl}


def all_levers(body):
    for k in ('s16sign', 'rand', 'table', 'avec', 'frame', 'rmwsort', 'idx', 'stride', 'mtx', 'arr', 'avecg'):
        L = LEVERS[k]
        if callable(L):
            body = L(body)
        else:
            for a, b in L:
                body = re.sub(a, b, body)
    return body


LEVERS['all'] = all_levers
FRAME = {}        # function -> bytes the original's frame is larger by (from the draft's cmp_all log)


def frame(body):
    """an unused local array: GCC 2.7.2 still gives it stack, so the frame grows (`addiu sp,sp,-0x20` vs -24)"""
    m = re.match(r'[\w \*]+?\b(func_\w+)\(.*?\) \{\n', body)
    d = FRAME.get(m[1]) if m else None
    if not d:
        return body
    return body[:m.end()] + f'    s32 pad[{d // 4}];\n' + body[m.end():]


LEVERS['frame'] = frame


def rmwsort(body):
    """a run of `AF(b, T, o) = f(AF(b, T, o));` on one base, out of order (m2c shows the scheduled order) -> sorted
    by offset (x, y, z)"""
    rmw = re.compile(r'^\s*AF\((\w+), (\w+), (0x[0-9A-Fa-f]+|\d+)\) = .*AF\(\1, \2, \3\).*;$')
    lines = body.split('\n')
    out, i = [], 0
    while i < len(lines):
        m = rmw.match(lines[i])
        j = i
        while j < len(lines) and (mm := rmw.match(lines[j])) and m and mm[1] == m[1]:
            j += 1
        if j - i >= 2:
            run = lines[i:j]
            out += sorted(run, key=lambda l: int(rmw.match(l)[3], 0))
            i = j
        else:
            out.append(lines[i])
            i += 1
    return '\n'.join(out)


LEVERS['rmwsort'] = rmwsort


def idx(body):
    """a table call on `state - 2`: the index in its own statement, so GCC does not fold the -2 into the address
    (`addiu -2; sll 2` rather than `sll 2; lw -8(at)`)"""
    return re.sub(r'^(\s*)(D_\w+)\[\(((?:[^()\[\]]|\([^()]*\))+ - (?:0x[0-9A-Fa-f]+|\d+))\)\]\((.*)\);$',
                  r'\1{\n\1    s32 i = \3;\n\n\1    \2[i](\4);\n\1}', body, flags=re.M)


LEVERS['idx'] = idx
BYTEARR = set()   # symbols the stride lever turned into u8 arrays


def stride(body):
    """an object-array walk m2c typed `u16 *p; p = &D; p += 0x68` (its offsets are bytes, the type scales them by 2)
    -> `u8 *p`, `*p` -> `AF(p, u16, 0)`, `&D` -> `D` with `extern u8 D[]`"""
    for m in re.finditer(r'^\s*([us]16) \*(\w+);$', body, re.M):
        T, v = m[1], m[2]
        if not re.search(rf'\b{v} \+= (0x[0-9A-Fa-f]+|\d+);', body):
            continue
        body = body.replace(m[0], m[0].replace(f'{T} *{v};', f'u8 *{v};'))
        body = re.sub(rf'\*{v}\b', f'AF({v}, {T}, 0)', body)
        for s in re.findall(rf'\b{v} = &(D_\w+);', body):
            BYTEARR.add(s)
            body = re.sub(rf'&{s}\b', s, body)
        body = re.sub(rf'\(s32\) {v}\b', v, body)
    return body


def stride_decl(decl):
    for s in BYTEARR:
        decl = re.sub(rf'^extern [\w ]+\b{s};$', f'extern u8 {s}[];', decl, flags=re.M)
    return table_decl(decl)


LEVERS['stride'] = stride


def mtx(body):
    """m2c's eight-word copy of a coord matrix (four `AF(d, s32, o) = AF(v, s32, p)`, three temps, four more) ->
    `AF(d, AMtx, o) = AF(v, AMtx, p)`; the temps it then passes to the next call were only left in a1-a3"""
    w = r'(0x[0-9A-Fa-f]+)'
    pat = re.compile(
        rf'^(\s*)AF\((\w+), s32, {w}\) = \(s32\) AF\((\w+), s32, {w}\);\n'
        rf'(?:\s*AF\(\2, s32, {w}\) = \(s32\) AF\(\4, s32, {w}\);\n){{3}}'
        rf'(?:\s*temp_a[123] = AF\(\4, s32, {w}\);\n){{3}}'
        rf'\s*AF\(\2, s32, {w}\) = \(s32\) AF\(\4, s32, {w}\);\n'
        rf'(?:\s*AF\(\2, s32, {w}\) = temp_a[123];\n){{3}}', re.M)

    def one(m):
        return f'{m[1]}AF({m[2]}, AMtx, {m[3]}) = AF({m[4]}, AMtx, {m[5]});\n'
    new = pat.sub(one, body)
    if new != body:
        new = re.sub(r', temp_a1, temp_a2, temp_a3\)', ')', new)
    return new


LEVERS['mtx'] = mtx
ARRS = set()      # symbols the arr lever turned into arrays


def arr(body):
    """a global whose address is passed and that is also stored to (`f(&D_x); D_x = 0xF0;`): the original holds the
    address in a register and stores through it (`sb 0(s0)`), so the global is an array, stored as `D_x[0]` (r131)"""
    for s in set(re.findall(r'&(D_\w+)\b', body)):
        if not re.search(rf'^\s*{s} = ', body, re.M):
            continue
        ARRS.add(s)
        body = re.sub(rf'(?:\(s32\) )?&{s}\b', f'@{s}', body)
        body = re.sub(rf'(?<![@\w]){s}\b(?!\[)', f'{s}[0]', body)
        body = body.replace(f'@{s}', s)
    return body


def arr_decl(decl):
    for s in ARRS:
        decl = re.sub(rf'^extern ([\w ]+?) ?\b{s};$', rf'extern \1 {s}[];', decl, flags=re.M)
    return decl


LEVERS['arr'] = arr
DECL['arr'] = arr_decl
AVECG = {}        # symbol -> (base symbol, member) for the avecg lever


def avecg(body):
    """halfword globals 2 or 4 bytes apart (D_801152B0 / D_801152B4) read in one function: one SVECTOR, `D.vx`,
    `D.vy`, `D.vz` (one object to the scheduler; r131: func_ovl34_800CCFA8 and its two callers' blocks)"""
    syms = sorted({int(m, 16) for m in re.findall(r'\bD_(8[0-9A-F]{7})\b', body)})
    used = set()
    for a in syms:
        if a in used or a % 2:
            continue
        grp = [b for b in syms if 0 <= b - a <= 4 and b not in used]
        if len(grp) < 2:
            continue
        for b in grp:
            used.add(b)
            AVECG[f'D_{b:08X}'] = (f'D_{a:08X}', ('vx', 'vy', 'vz')[(b - a) // 2])
    for s, (base, mem) in AVECG.items():
        if re.search(rf'\b{s}\b', body):
            body = re.sub(rf'(?:\([us]16\) )?\b{s}\b', f'{base}.{mem}', body)
    return body


def avecg_decl(decl):
    for s, (base, mem) in AVECG.items():
        if mem == 'vx':
            decl = re.sub(rf'^extern [\w ]+\b{s};$', f'extern AVec {s};', decl, flags=re.M)
        else:
            decl = re.sub(rf'^extern [\w ]+\b{s};\n', '', decl, flags=re.M)
    return decl


LEVERS['avecg'] = avecg
DECL['avecg'] = avecg_decl
DECL['stride'] = stride_decl
DECL['all'] = lambda d: avecg_decl(arr_decl(stride_decl(d)))
lever, ind, outd = sys.argv[1:4]
if lever in ('frame', 'all'):
    for lg in glob.glob(os.path.join(ind, '*.log')):
        t = open(lg, encoding='utf-8-sig', errors='replace').read()
        for m in re.finditer(r'^(\w+) gcc-2\.7\.2 -O2: differs.*\n.*?addiu\s+\$sp, \$sp, -(0x[0-9A-Fa-f]+)\s+\|\s+addiu\s+sp,sp,-(\d+)', t, re.M):
            d = int(m[2], 16) - int(m[3])
            if d > 0 and d % 4 == 0:
                FRAME[m[1]] = d
os.makedirs(outd, exist_ok=True)
n = 0
for f in sorted(glob.glob(os.path.join(ind, '*.c'))):
    text = open(f, encoding='utf-8').read()
    decl, funcs = P.split(text)
    keep = {}
    for k, v in funcs.items():
        w = v
        L = LEVERS[lever]
        if callable(L):
            w = L(w)
        else:
            for a, b in L:
                w = re.sub(a, b, w)
        if w != v:
            keep[k] = w
    if not keep:
        continue
    if lever in DECL:
        decl = DECL[lever](decl)
    inc = ''.join(l + '\n' for l in text.splitlines() if l.startswith('#include'))
    open(os.path.join(outd, os.path.basename(f)), 'w', newline='\n').write(inc + '\n' + decl + '\n\n' + '\n\n'.join(keep.values()) + '\n')
    n += len(keep)
print(n, 'functions rewritten')
