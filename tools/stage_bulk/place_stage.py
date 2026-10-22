"""Place the matched one-function drafts of a folder (its _matched.txt) into src/stage, a target file at a time, with
put_func.py (make check-stage); a failing group is halved until the culprits are found. Drafts whose guessed
declarations clash with another draft's (or whose signature cannot follow the file's prototype) wait for the next
round: m2c_stage.py then picks up the declarations placed meanwhile. Run from PowerShell.
usage: place_stage.py <dir>     ($env:TWINBLADE_STG = "sc02_031": a split stage, src/stg/sc02_031.c and
                                 check-sc02_031, r143)"""
import glob, os, re, subprocess, sys
sys.path.insert(0, 'tools')
import put_func as P
d = sys.argv[1]
AF = '#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))'
STG = os.environ.get('TWINBLADE_STG', '').lower()
CHECK, CHECK_OK = (f'check-{STG}', f'{STG}.bin: OK') if STG else ('check-stage', 'stage.bin: OK')
names = [l.strip() for l in open(os.path.join(d, '_matched.txt')) if l.strip()]
src = {f: open(f, encoding='utf-8').read() for f in glob.glob(f'src/stg/{STG}.c' if STG else 'src/stage/*.c')}
def target(n):
    for f, t in src.items():
        if re.search(rf'INCLUDE_ASM\("[^"]+",\s*{n}\);', t): return f
SYM = re.compile(r'(\w+)(?:\[\])?(?:\(.*\))?;$')
def sym_of(x):
    m = re.search(r'\(\*(\w+)\[\]\)', x) or SYM.search(x)
    return m[1] if m else None
def norm(x): return re.sub(r'\s+', ' ', x).strip()
groups = {}
for n in names:
    f = target(n)
    if f is None: continue
    text = open(os.path.join(d, n + '.c'), encoding='utf-8').read().replace(AF + '\n', '')
    decl, funcs = P.split(text)
    if n not in funcs: continue
    groups.setdefault(f, []).append((n, [c for c in P.chunks(decl)], funcs[n]))
deferred, placed = [], []
def why(n, s):
    with open(os.path.join(d, '_why.txt'), 'a') as w: w.write(f'{n}: {s}\n')
ENV = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
CC = os.path.join(os.getcwd(), 'tools', 'compilers', 'gcc-2.7.2-psx') + os.sep
def insert(t, items):
    """the file's text with these drafts in place of their INCLUDE_ASMs, new declarations before the first one;
    -> (text, {line number: draft index})"""
    decls = []
    for i, (_, ds, _) in enumerate(items):
        for x in ds:
            if P.norm(x) not in P.norm(t) and x not in [y for y, _ in decls]:
                decls.append((x, i))
    # an old-style guess left in the file by an earlier round (`extern void f();`) takes the return type of f's
    # definition now being placed (a call whose result is unused compiles the same either way; check-stage verifies)
    for n, _, b in items:
        ret = re.match(r'([\w \*]+?)\s*\b' + n + r'\(', b)[1].strip()
        t = re.sub(rf'^extern [\w \*]+?\b{n}\(\);$', f'extern {ret} {n}();', t, flags=re.M)
        t = re.sub(rf'^extern u8 {n};$', f'extern {ret} {n}();', t, flags=re.M)     # an address-taken guess
    k = t.index('\nINCLUDE_ASM') + 1
    t = t[:k] + ''.join(x + '\n' for x, _ in decls) + '\n' + t[k:]
    for n, _, b in items:
        t = re.sub(rf'INCLUDE_ASM\("[^"]+",\s*{n}\);', lambda m: b, t, count=1)
    owner = {}
    line = t[:k].count('\n') + 1
    for x, _ in decls:
        for _ in range(x.count('\n') + 1):
            owner[line] = [j for j, (_, ds, _) in enumerate(items) if x in ds]; line += 1
    for i, (n, _, b) in enumerate(items):
        start = t[:t.index(b)].count('\n') + 1
        for l in range(start, start + b.count('\n') + 1):
            owner[l] = [i]
    return t, owner
def compile_errors(f):
    """line numbers of the errors cc1 reports for f (cpp keeps the line markers)"""
    r1 = subprocess.run([CC + 'cpp.exe', '-undef', '-Iinclude', '-D_LANGUAGE_C', '-DPSX', f], capture_output=True)
    r2 = subprocess.run([CC + 'cc1.exe', '-quiet', '-O2', '-G0', '-mips1', '-mcpu=3000', '-fgnu-linker', '-mgas',
                         '-msoft-float', '-fsyntax-only'], input=r1.stdout, capture_output=True)
    out = (r1.stderr + r2.stderr).decode('utf-8', 'replace')
    return [int(m[1]) for m in re.finditer(r'^\S*' + re.escape(os.path.basename(f)) + r':(\d+): (?!warning)', out, re.M)], out
def knr(b, n):
    """the definition old-style, `s32 f(a, b) s32 a; u8 *b; {`, if every parameter is a word (no promotions)"""
    m = re.match(rf'([\w \*]+?\s*\b{n})\(([^)]*)\)\s*\{{', b)
    if not m: return None
    ps = [p.strip() for p in m[2].split(',') if p.strip() and p.strip() != 'void']
    names = []
    for p in ps:
        if not re.fullmatch(r'(?:[su]32 \w+|[\w ]+\*+\s*\w+)', p): return None
        names.append(re.search(r'(\w+)$', p)[1])
    return b.replace(m[0], f'{m[1]}({", ".join(names)})\n' + ''.join(f'    {p};\n' for p in ps) + '{', 1)
def check():
    r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe', CHECK], capture_output=True, text=True, env=ENV)
    return CHECK_OK in r.stdout
def place(f, items):
    """compile-screen the drafts in one go, then check the build; bisect only a byte mismatch"""
    base = src[f]
    while items:
        t, owner = insert(base, items)
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
        bad_lines, out = compile_errors(f)
        if not bad_lines: break
        bad = set()
        lines = t.splitlines()
        idx = {n: i for i, (n, _, _) in enumerate(items)}
        # callers (already placed) that pass fewer or more arguments than a draft's definition: the original
        # passes registers through; an old-style definition makes no prototype, and word-sized parameters compile
        # the same
        argn = {}
        for m in re.finditer(r':(\d+): too (?:few|many) arguments to function `(\w+)\'', out):
            if m[2] in idx: argn[int(m[1])] = m[2]
        fixed = set()
        for l, n in argn.items():
            i = idx[n]
            if i in fixed: continue
            k = knr(items[i][2], n)
            if k:
                items[i] = (n, items[i][1], k); fixed.add(i)
            else:
                bad.add(i)
        bad_lines = [l for l in bad_lines if l not in argn]
        for l in bad_lines:
            if l in owner:
                bad |= set(owner[l]); continue
            # in code already there: a draft named on that line (a caller of a function now defined void)
            hit = {idx[s] for s in re.findall(r'\b\w+\b', lines[l - 1]) if s in idx} if l <= len(lines) else set()
            if not hit:
                near = [owner[k] for k in range(l, 0, -1) if k in owner][:1]
                hit = set(near[0]) if near else set()
            bad |= hit
        if not bad and fixed: continue
        if not bad:                          # an error outside any draft: give up on this group
            print(f, 'unattributed errors:', out[:600]); deferred.extend(n for n, _, _ in items); items = []; break
        deferred.extend(items[i][0] for i in bad)
        with open(os.path.join(d, '_why.txt'), 'a') as w:
            w.write(out + '\n')
        items = [x for i, x in enumerate(items) if i not in bad]
    def bis(items):
        if not items: return True
        t, _ = insert(src[f], items)
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
        if check():
            src[f] = t; placed.extend(n for n, _, _ in items); return True
        open(f, 'w', encoding='utf-8', newline='\n').write(src[f])
        if len(items) == 1:
            deferred.append(items[0][0])
            with open(os.path.join(d, '_why.txt'), 'a') as w:
                w.write(f'{items[0][0]}: build differs\n')
            return False
        h = len(items) // 2
        bis(items[:h]); bis(items[h:])
    src[f] = base
    open(f, 'w', encoding='utf-8', newline='\n').write(base)
    bis(items)
    open(f, 'w', encoding='utf-8', newline='\n').write(src[f])
for f, items in groups.items():
    t = src[f]
    if AF not in t:                       # the offset macro, once, after the includes
        last = list(re.finditer(r'^#include .*$', t, re.M))[-1]
        t = t[:last.end()] + '\n' + AF + t[last.end():]
        open(f, 'w', encoding='utf-8', newline='\n').write(t); src[f] = t
    defs = {}
    for n, ds, b in items:
        defs[n] = re.match(r'([\w \*]+?)\s*\b' + n + r'\(', b)[1].strip()
    seen, ok = {}, []
    for n, ds, b in items:
        # the file's own prototype for this function: the definition must agree with it
        m = re.search(rf'^(?!extern)([A-Za-z_][\w \*]*?)\b{n}\s*\(([^;{{)]*)\)\s*;', t, re.M)
        if m:
            ptypes = [p.strip() for p in m[2].split(',') if p.strip() and p.strip() != 'void']
            hm = re.match(rf'([\w \*]+?)\s*\b{n}\(([^)]*)\)', b)
            dparams = [p.strip() for p in hm[2].split(',') if p.strip() and p.strip() != 'void']
            if len(ptypes) != len(dparams):
                deferred.append(n); why(n, 'parameter count differs from the prototype'); continue
            newp = []
            for pt, dp in zip(ptypes, dparams):
                pname = re.search(r'(\w+)$', dp)[1]
                tm = re.match(r'^(.*?[\s\*])(\w+)$', pt)      # "StageActor *a" -> "StageActor *"; "s32" stays
                ptn = tm[1].strip() if tm and tm[1].strip() not in ('', 'unsigned', 'signed') else pt
                newp.append(f'{ptn}{pname}' if ptn.endswith('*') else f'{ptn} {pname}')
            b = b.replace(hm[0], f'{m[1].strip()} {n}({", ".join(newp) or "void"})', 1)
        bad = False
        nds = []
        for x in ds:
            s = sym_of(x)
            if s in defs and x.startswith('extern') and '(' in x:      # a guess for a function of this batch
                x = f'extern {defs[s]} {s}();'
            if s and s in seen and norm(seen[s]) != norm(x): bad = True
            nds.append(x)
        if bad:
            deferred.append(n); why(n, 'declaration clashes with another draft'); continue
        for x in nds:
            s = sym_of(x)
            if s: seen.setdefault(s, x)
        ok.append((n, nds, b))
    # an old-style guess left in the file by an earlier round (`extern void f();`) takes the return type of f's
    # definition now being placed (a call whose result is unused compiles the same either way; check-stage verifies)
    orig = src[f]
    try:
        place(f, ok)
    finally:                                 # whatever happens, the file is left as last verified
        open(f, 'w', encoding='utf-8', newline='\n').write(src[f])
        if src[f] != orig and not check():   # only the rewritten guesses, never checked: back to the file as it was
            open(f, 'w', encoding='utf-8', newline='\n').write(orig); src[f] = orig
            placed[:] = [n for n in placed if n not in {x for x, _, _ in ok}]
open(os.path.join(d, '_placed.txt'), 'w').write('\n'.join(placed) + '\n')
open(os.path.join(d, '_deferred.txt'), 'w').write('\n'.join(deferred) + '\n')
print(len(placed), 'placed,', len(deferred), 'deferred')
