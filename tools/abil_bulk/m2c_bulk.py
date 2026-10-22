"""m2c drafts for the unmatched ability-package functions, cleaned into compilable candidates, one file per package.
usage: m2c_bulk.py <max_bytes> <out_dir>"""
import glob, io, os, re, sys, contextlib
ROOT = os.getcwd()
sys.path.insert(0, os.path.join(ROOT, 'tools', 'm2c_download', 'src', 'm2c-master'))
from m2c.main import parse_flags, run
maxb = int(sys.argv[1], 0); out_dir = sys.argv[2]
os.makedirs(out_dir, exist_ok=True)
src = {f: open(f, encoding='utf-8').read() for f in glob.glob('src/abil/*.c')}
todo = {}
for f, t in src.items():
    for n in re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\);', t):
        todo[n] = f
rows = []
for p in glob.glob('asm/abil/*/nonmatchings/*/*.s'):
    n = os.path.basename(p)[:-2]
    if n in todo:
        size = int(re.search(r'nonmatching \w+, 0x([0-9A-Fa-f]+)', open(p).read(300))[1], 16)
        if size <= maxb:
            rows.append((size, n, p))
rows.sort()
def existing_decl(t, sym):
    m = re.search(rf'^extern[^;\n]*\b{sym}\b[^;\n]*;', t, re.M)
    return m[0] if m else None
per_pkg = {}
CTX = ['--context', 'build/work/m2c_ctx.h'] if os.path.exists('build/work/m2c_ctx.h') else []
for size, n, p in rows:
    buf = io.StringIO()
    try:
        with contextlib.redirect_stdout(buf), contextlib.redirect_stderr(io.StringIO()):
            run(parse_flags(['-t', 'mipsel-gcc-c', '--no-cache', '--valid-syntax'] + CTX + sys.argv[3:] + [p]))
    except BaseException as e:
        continue
    c = buf.getvalue()
    if 'M2C_ERROR' in c or '?' in re.sub(r'/\*.*?\*/', '', c).replace('? :', ''):
        pass
    # an argument the context's count over-guessed (an unset register): drop it
    c = re.sub(r',\s*M2C_ERROR\(/\* Read from unset register \$a[0-3] \*/\)', '', c)
    c = re.sub(r'\(M2C_ERROR\(/\* Read from unset register \$a[0-3] \*/\)\)', '()', c)
    for _ in range(3):      # nested fields: M2C_FIELD(M2C_FIELD(a, void **, 0x20), s16 *, 4)
        c = re.sub(r'M2C_FIELD\(((?:[^,()]|\([^()]*\))+), ([\w \*]+)\*, (0x[0-9A-Fa-f]+|\d+)\)',
                   lambda m: f'AF({m[1]}, {m[2].strip()}, {m[3]})', c)
    pkg = n.split('_')[1]
    decls, body = [], []
    t = src[todo[n]]
    for line in c.splitlines():
        m = re.match(r'(.*?)\s*/\* extern \*/', line)
        if m and '(' in line:
            name = re.search(r'(\w+)\(', m[1])[1]
            ex = existing_decl(t, name)
            if ex: decls.append(ex); continue
            ret = 'void' if re.match(r'void \w', m[1]) else 's32'
            if m[1].startswith('M2C_UNK') or m[1].startswith('?'):
                ret = 's32'
            decls.append(f'extern {ret} {name}();')
            continue
        m = re.match(r'extern (.*?) (\w+)(\[\])?;', line)
        if m:
            ex = existing_decl(t, m[2])
            if ex: decls.append(ex); continue
            ty = m[1].replace('M2C_UNK', 'u8').replace('?', 'u8')
            decls.append(f'extern {ty} {m[2]}{m[3] or ""};')
            continue
        if line.startswith('static ') :
            decls.append(line); continue
        body.append(line)
    b = '\n'.join(body).strip()
    b = b.replace('M2C_UNK', 's32').replace('void *arg', 'u8 *arg')
    b = re.sub(r'AF\(([^;=]*?), s8, (\w+)\) = ', r'AF(\1, u8, \2) = ', b)     # a byte store: unsigned (0xFF, not -1)
    b = re.sub(r'\? (\w)', r's32 \1', b)
    # jump-table calls: *(&D_x + (i * 4))(args) -> D_x[i](args), D_x an AbilStep table
    tables = set()
    def tbl(m):
        tables.add(m[1])
        return f'{m[1]}[{m[2]}]('
    b = re.sub(r'\*\(&(D_\w+) \+ \((.+?) \* 4\)\)\(', tbl, b)
    b = re.sub(r'\(\*\(&(D_\w+) \+ \((.+?) \* 4\)\)\)\(', tbl, b)
    decls = [f'extern AbilStep {s}[];' if re.match(rf'extern [\w ]+\*? ?{s}(\[\])?;', x) else x for x in decls for s in [next((s for s in tables if re.search(rf'\b{s}\b', x)), '@@')]]
    # symbols the context declared (no extern line from m2c): declare them too
    have = {re.search(r'(\w+)(?:\[\])?(?:\(\))?;$', x)[1] for x in decls if re.search(r'(\w+)(?:\[\])?(?:\(\))?;$', x)}
    for s in dict.fromkeys(re.findall(r'\b((?:func|D)_\w+)\b', b)):
        if s in have or s == n:
            continue
        ex = existing_decl(t, s)
        if ex:
            decls.append(ex)
        elif re.search(rf'\b{s}\(', b):
            decls.append(f'extern s32 {s}();')
        else:
            decls.append(f'extern u8 {s};')
    # a callee's result used -> s32, else void (unless an existing declaration was reused)
    fixed = []
    for x in decls:
        m = re.match(r'extern s32 (func_\w+)\(\);', x)
        if m and not re.search(rf'(=|\(|return|!|&&|\|\|)\s*{m[1]}\(', b) and not existing_decl(t, m[1]):
            x = f'extern void {m[1]}();'
        fixed.append(x)
    decls = fixed
    d, bl = per_pkg.setdefault(pkg, ([], []))
    d.extend(x for x in decls if x not in d)
    bl.append(b)
for pkg, (d, bl) in per_pkg.items():
    # the batch's own definitions: their prototype in place of any extern guess
    sigs = {}
    for b in bl:
        m = re.match(r'([\w \*]+?\b(func_\w+)\([^)]*\))\s*\{', b)
        if m:
            sigs[m[2]] = m[1] + ';'
    # one declaration per symbol: a batch definition's return type, unprototyped (calls may pass fewer arguments);
    # s32 over void for a callee; an array or table over a scalar
    best = {}
    for x in d:
        m = re.search(r'(\w+)(\[\])?(\(\))?;$', x) or re.search(r'(\w+)\(', x)
        sym = m[1]
        if sym in sigs:
            x = re.sub(r'\(.*\);$', '();', sigs[sym])
            x = x if x.startswith('extern') else 'extern ' + x
        old = best.get(sym)
        if old is None or (sym not in sigs and (('[]' in x and '[]' not in old) or (' s32 ' in x and ' void ' in old))):
            best[sym] = x
    for name, sig in sigs.items():
        if name not in best and sum(len(re.findall(rf'\b{name}\(', b)) for b in bl) > 1:
            best[name] = 'extern ' + re.sub(r'\(.*\);$', '();', sig)
    d[:] = list(best.values())
    open(os.path.join(out_dir, pkg + '.c'), 'w', newline='\n').write('#include "common.h"\n#include "abil.h"\n\n' + '\n'.join(d) + '\n\n' + '\n\n'.join(bl) + '\n')
print(len(rows), 'functions,', len(per_pkg), 'files')
