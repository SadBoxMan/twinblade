"""m2c drafts for the unmatched stage-engine functions (src/stage, -O2 files), cleaned into compilable candidates, one
file per function (a bad guess at one declaration then costs only that function). The stage's version of
tools/abil_bulk/m2c_bulk.py (r132, docs/decomp_recipes.md section 9).
usage: m2c_stage.py <max_bytes> <out_dir> [m2c flags, e.g. --void]
($env:TWINBLADE_STG = "sc02_031": a split stage's functions, src/stg/sc02_031.c, r143)"""
import glob, io, os, re, sys, contextlib, collections
ROOT = os.getcwd()
sys.path.insert(0, os.path.join(ROOT, 'tools', 'm2c_download', 'src', 'm2c-master'))
from m2c.main import parse_flags, run
maxb = int(sys.argv[1], 0); out_dir = sys.argv[2]; extra = sys.argv[3:]
os.makedirs(out_dir, exist_ok=True)
O0 = ('engine_8013B568.c', 'engine_80144B9C.c')
AF = '#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))'
STG = os.environ.get('TWINBLADE_STG', '').lower()
SRC_GLOB, ASM_GLOB = (f'src/stg/{STG}.c', f'asm/stg/{STG}/nonmatchings/*/*.s') if STG else \
    ('src/stage/*.c', 'asm/stage/nonmatchings/*/*.s')
src = {f: open(f, encoding='utf-8').read() for f in glob.glob(SRC_GLOB) if os.path.basename(f) not in O0}
if STG:     # r209: the stage's -O0 unit and the code after it (tools/stage_units.py)
    src.update({f: open(f, encoding='utf-8').read() for f in glob.glob(f'src/stg/{STG}_o0.c') + glob.glob(f'src/stg/{STG}_post.c')})
todo = {}
for f, t in src.items():
    for d, n in re.findall(r'INCLUDE_ASM\("([^"]+)",\s*(\w+)\);', t):
        todo[n] = (f, os.path.join(d, n + '.s'))
headers = {}
def header_text(f):
    out = ''
    for h in re.findall(r'^#include "(\w+\.h)"', src[f], re.M):
        if h not in headers:
            headers[h] = open(os.path.join('include', h), encoding='utf-8').read()
        out += headers[h]
    return out

# m2c context: each callee's argument count from its call sites (the highest a-register set before the jal)
nargs = collections.defaultdict(int)
for f, p in todo.values():
    pass
for p in glob.glob(ASM_GLOB):
    ins = []
    for l in open(p):
        m = re.match(r'\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+(\w+)\s*(.*)', l)
        if m: ins.append((m[1], m[2]))
        elif re.match(r'\s*\.L\w+:', l): ins.append(('LABEL', ''))
    for i, (op, a) in enumerate(ins):
        if op != 'jal': continue
        hi = 0; win = []
        for j in range(i - 1, max(-1, i - 8), -1):
            if ins[j][0] in ('jal', 'jalr', 'LABEL', 'j', 'jr') or ins[j][0].startswith('b'): break
            win.append(ins[j])
        if i + 1 < len(ins): win.append(ins[i + 1])
        for op2, a2 in win:
            m = re.match(r'\$a([0-3])\b', a2)
            if m and not op2.startswith('s'): hi = max(hi, int(m[1]) + 1)
        nargs[a.strip()] = max(nargs[a.strip()], hi)
# a callee with a prototype or definition in the sources: at least its parameter count (a0 may pass through unset)
for t in list(src.values()) + [open(h, encoding='utf-8').read() for h in glob.glob('include/*.h')]:
    for m in re.finditer(r'^(?:extern )?[A-Za-z_][\w \*]*?\b((?:func_|[A-Z])\w+)\s*\(([^;{)]*)\)\s*[;{]', t, re.M):
        ps = [p for p in m[2].split(',') if p.strip() and p.strip() != 'void']
        if m[1] in nargs or m[1].startswith('func_'):
            nargs[m[1]] = max(nargs[m[1]], len(ps))
ctx = os.path.join(out_dir, '_ctx.h')
open(ctx, 'w').write('typedef int s32; typedef unsigned int u32; typedef short s16; typedef unsigned short u16;\n'
                     'typedef signed char s8; typedef unsigned char u8;\n' +
                     ''.join(f's32 {c}({", ".join(["s32"] * n) or "void"});\n' for c, n in sorted(nargs.items())))

# r213: m2c gives up on a function with a jump table (the table lives in the data asm, not the function's). Write a copy
# with a label before each case target and the table as a .word list, as r211's mkjt.py did; plain functions pass through.
DATA_GLOB = f'asm/stg/{STG}/data/*.s' if STG else 'asm/stage/data/*.s'
jtbls = {}
for dp in glob.glob(DATA_GLOB):
    cur = None
    for l in open(dp):
        m = re.match(r'dlabel (jtbl_\w+)', l)
        if m: cur = m[1]; jtbls[cur] = []; continue
        if l.startswith('enddlabel'): cur = None; continue
        m = re.search(r'\.word (0x[0-9A-Fa-f]{8})', l)
        if cur and m: jtbls[cur].append(int(m[1], 16))
def with_jtbl(p):
    lines = open(p).read().splitlines()
    used = list(dict.fromkeys(re.findall(r'%hi\((jtbl_\w+)\)', '\n'.join(lines))))
    used = [j for j in used if jtbls.get(j)]
    if not used: return p
    tg = {t for j in used for t in jtbls[j]}
    out = ['.set noat', '.set noreorder', '.section .text']
    for l in lines:
        m = re.match(r'\s*/\* \w+ ([0-9A-Fa-f]{8}) \w+ \*/', l)
        if m and int(m[1], 16) in tg: out.append(f'.Ljt_{int(m[1], 16):08X}:')
        if not l.startswith('nonmatching'): out.append(l)
    out.append('.section .rodata')
    for j in used:
        out.append(f'glabel {j}')
        out += [f'.word .Ljt_{t:08X}' for t in jtbls[j]]
    q = os.path.join(out_dir, os.path.basename(p))
    open(q, 'w', newline='\n').write('\n'.join(out) + '\n')
    return q

def existing_decl(t, sym):
    m = re.search(rf'^extern[^;\n]*\b{sym}\b[^;\n]*;', t, re.M)
    if m: return m[0]
    m = re.search(rf'^((?:static |inline )*[A-Za-z_][\w \*]*?\b{sym}\s*\([^;{{]*\))\s*[;{{]', t, re.M)   # a prototype or definition
    if m and not m[1].startswith(('static', 'inline')):
        return m[1] + ';'
    for o in src.values():                # defined in another stage file: its return type, old-style (no conversions)
        if o is t: continue
        m = re.search(rf'^((?:inline )?[A-Za-z_][\w \*]*?)\b{sym}\s*\([^;{{]*\)\s*\{{', o, re.M)
        if m and not m[1].startswith('static'):
            ret = m[1].replace('inline ', '').strip()
            if re.fullmatch(r'(void|[su](8|16|32)|StageActor \*|u8 \*|s32 \*|void \*)', ret):
                return f'extern {ret} {sym}();'
    return None

rows = []
for n, (f, p) in todo.items():
    if not os.path.exists(p): continue
    size = int(re.search(r'nonmatching \w+, 0x([0-9A-Fa-f]+)', open(p).read(300))[1], 16)
    if size <= maxb: rows.append((size, n, f, p))
rows.sort()
done = 0
sys.path.insert(0, 'tools')
import put_func as P
tdef_cache = {}
for size, n, f, p in rows:
    buf = io.StringIO()
    try:
        with contextlib.redirect_stdout(buf), contextlib.redirect_stderr(io.StringIO()):
            run(parse_flags(['-t', 'mipsel-gcc-c', '--no-cache', '--valid-syntax', '--context', ctx] + extra + [with_jtbl(p)]))
    except BaseException:
        continue
    c = buf.getvalue()
    c = re.sub(r',\s*M2C_ERROR\(/\* Read from unset register \$a[0-3] \*/\)', '', c)
    c = re.sub(r'\(M2C_ERROR\(/\* Read from unset register \$a[0-3] \*/\)\)', '()', c)
    if 'M2C_ERROR' in c or 'Decompilation failure' in c: continue
    for _ in range(3):
        c = re.sub(r'M2C_FIELD\(((?:[^,()]|\([^()]*\))+), ([\w \*]+)\*, (0x[0-9A-Fa-f]+|\d+)\)',
                   lambda m: f'AF({m[1]}, {m[2].strip()}, {m[3]})', c)
    t = src[f]; ht = header_text(f)
    decls, body = [], []
    for line in c.splitlines():
        m = re.match(r'(.*?)\s*/\* extern \*/', line)
        if m and '(' in line:
            name = re.search(r'(\w+)\(', m[1])[1]
            if re.search(rf'\b{name}\b', ht): continue
            ex = existing_decl(t, name)
            if ex: decls.append(ex); continue
            ret = 'void' if re.match(r'void \w', m[1]) else 's32'
            decls.append(f'extern {ret} {name}();')
            continue
        m = re.match(r'extern (.*?) (\w+)(\[\])?;', line)
        if m:
            if re.search(rf'\b{m[2]}\b', ht): continue
            ex = existing_decl(t, m[2])
            if ex: decls.append(ex); continue
            if m[2].startswith('func_'):          # a function whose address is taken: still a function
                decls.append(f'extern void {m[2]}();'); continue
            ty = m[1].replace('M2C_UNK', 'u8').replace('?', 'u8')
            decls.append(f'extern {ty} {m[2]}{m[3] or ""};')
            continue
        if line.startswith('static '):
            decls.append(line); continue
        body.append(line)
    b = '\n'.join(body).strip()
    b = b.replace('M2C_UNK', 's32').replace('void *arg', 'u8 *arg')
    b = re.sub(r'AF\(([^;=]*?), s8, (\w+)\) = ', r'AF(\1, u8, \2) = ', b)
    b = re.sub(r'\? (\w)', r's32 \1', b)
    tables = set()
    def tbl(m):
        tables.add(m[1]); return f'{m[1]}[{m[2]}]('
    b = re.sub(r'\*\(&(D_\w+) \+ \((.+?) \* 4\)\)\(', tbl, b)
    b = re.sub(r'\(\*\(&(D_\w+) \+ \((.+?) \* 4\)\)\)\(', tbl, b)
    # table reads: (s32) *(&D_x + (i * 4)) -> D_x[i] with D_x an array of the element's type
    arrays = {}
    SZ = {'s32': 4, 'u32': 4, 's16': 2, 'u16': 2, 's8': 1, 'u8': 1}
    def arr(cast, s, e, k, whole):
        ty = cast or {4: 's32', 2: 's16', 1: 'u8'}[k]
        if SZ.get(ty) != k or arrays.get(s, ty) != ty:
            return whole
        arrays[s] = ty
        return f'{s}[{e}]'
    E = r'((?:[^()]|\((?:[^()]|\([^()]*\))*\))+?)'
    b = re.sub(r'(?:\(([su](?:8|16|32))\) )?\*\(&(D_\w+) \+ \(' + E + r' \* ([24])\)\)',
               lambda m: arr(m[1], m[2], m[3], int(m[4]), m[0]), b)
    b = re.sub(r'(?:\(([su]8)\) )?\*\(&(D_\w+) \+ ' + E + r'\)', lambda m: arr(m[1], m[2], m[3], 1, m[0]), b)
    # a pointer field read as a value and indexed: *((i * 4) + AF(p, s32, 0xCC)) -> AF(p, s32 *, 0xCC)[i]
    PT = {'4': 's32 *', '2': 's16 *'}
    b = re.sub(r'\*\(\(' + E + r' \* ([24])\) \+ AF\(' + E + r', [su]32, (0x\w+|\d+)\)\)',
               lambda m: f'AF({m[3]}, {PT[m[2]]}, {m[4]})[{m[1]}]', b)
    b = re.sub(r'\*\(AF\(' + E + r', [su]32, (0x\w+|\d+)\) \+ \(' + E + r' \* ([24])\)\)',
               lambda m: f'AF({m[1]}, {PT[m[4]]}, {m[2]})[{m[3]}]', b)
    decls = [x for x in decls if not any(re.search(rf'\b{s}\b', x) for s in tables | set(arrays))]
    decls += [existing_decl(t, s) or f'extern void (*{s}[])();' for s in tables]
    decls += [existing_decl(t, s) or f'extern {ty} {s}[];' for s, ty in arrays.items() if s not in tables]
    tables |= set(arrays)
    have = {re.search(r'(\w+)(?:\[\])?(?:\(\))?;$', x)[1] for x in decls if re.search(r'(\w+)(?:\[\])?(?:\(\))?;$', x)} | tables
    for s in dict.fromkeys(re.findall(r'\b((?:func|D)_\w+)\b', b)):
        if s in have or s == n or re.search(rf'\b{s}\b', ht): continue
        ex = existing_decl(t, s)
        if ex: decls.append(ex)
        elif re.search(rf'\b{s}\(', b): decls.append(f'extern s32 {s}();')
        elif s.startswith('func_'): decls.append(f'extern void {s}();')
        else: decls.append(f'extern u8 {s};')
    fixed = []
    for x in decls:
        m = re.match(r'extern s32 (func_\w+)\(\);', x)
        if m and not re.search(rf'(=|\(|return|!|&&|\|\|)\s*{m[1]}\(', b) and not existing_decl(t, m[1]):
            x = f'extern void {m[1]}();'
        if x not in fixed: fixed.append(x)
    # the target file's typedefs and structs, all of them in order (existing declarations may use them)
    if f not in tdef_cache:
        tdef_cache[f] = []
        for c in P.chunks(P.split(t)[0]):
            m = re.search(r'^(typedef|struct|union|enum)\b', c, re.M)
            if m and not re.search(r'^INCLUDE_ASM', c[m.start():], re.M):
                tdef_cache[f].append(c[m.start():])
    tdefs = tdef_cache[f]
    inc = ''.join(f'#include "{h}"\n' for h in re.findall(r'^#include "(\w+\.h)"', t, re.M))
    open(os.path.join(out_dir, n + '.c'), 'w', newline='\n').write(
        inc + AF + '\n' + '\n'.join(tdefs + fixed) + '\n\n' + b + '\n')
    done += 1
print(len(rows), 'functions,', done, 'drafts')
