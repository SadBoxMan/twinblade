"""Place the matched one-function drafts of a folder (its _matched.txt) into src/stage, a target file at a time, with
put_func.py (make check-stage); a failing group is halved until the culprits are found. Drafts whose guessed
declarations clash with another draft's (or whose signature cannot follow the file's prototype) wait for the next
round: m2c_stage.py then picks up the declarations placed meanwhile. Run from PowerShell.
usage: place_stage.py <dir>     ($env:TWINBLADE_STG = "sc02_031": a split stage, src/stg/sc02_031.c and
                                 check-sc02_031, r143)
r142 (22 Oct): the drafts' #include lines go in too (GTE drafts had been deferred as "build differs" without gte.h),
declarations are compared without comments and skipped when the file already declares their names (no duplicate
typedef), and a draft's static helper the file lacks is inserted with the declarations.
"""
import glob, os, re, subprocess, sys
sys.path.insert(0, 'tools')
import put_func as P
d = sys.argv[1]
AF = '#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))'
STG = os.environ.get('TWINBLADE_STG', '').lower()
CHECK, CHECK_OK = (f'check-{STG}', f'{STG}.bin: OK') if STG else ('check-stage', 'stage.bin: OK')
names = [l.strip() for l in open(os.path.join(d, '_matched.txt')) if l.strip()]
# r209: a stage with an -O0 run has three files (tools/stage_units.py); each draft goes to the one holding its INCLUDE_ASM
import stage_units as U
src = {f: open(f, encoding='utf-8').read() for f in ([os.path.relpath(p).replace(os.sep, '/') for p in U.files(STG)] if STG else glob.glob('src/stage/*.c'))}
def target(n):
    for f, t in src.items():
        if re.search(rf'INCLUDE_ASM\("[^"]+",\s*{n}\);', t): return f
SYM = re.compile(r'(\w+)(?:\[\w*\])?(?:\(.*\))?;$')
def sym_of(x):
    # r208: `(*D[])()`, `(*D[4])()` and `(*f)()` too; r222: `(**D)()` (a pointer to a handler table, r216 8017849C)
    m = re.search(r'\(\s*(?:\*\s*)+(\w+)\s*(?:\[\w*\])?\)', x) or SYM.search(x)
    return m[1] if m else None
def norm(x): return re.sub(r'\s+', ' ', x).strip()
groups = {}
pre = {}    # r192: a draft's `static inline` helpers, placed in front of it
inl = {}    # r211: a draft's `static inline` helpers [(name, text)], put into pre once per file below
incs = {}   # r142: the drafts' #include lines (a GTE draft needs include/gte.h; split() drops them)
for n in names:
    f = target(n)
    if f is None: continue
    text = open(os.path.join(d, n + '.c'), encoding='utf-8').read().replace(AF + '\n', '')
    decl, funcs = P.split(text)
    if n not in funcs: continue
    # declarations without their comments (a leading comment made a typedef look new: duplicate typedef), and a
    # static helper the draft defines that the file lacks goes in with them (r142, from S1's insert_hand)
    # r192: an INCLUDE_ASM line of the draft is not a declaration; a multi-name extern line becomes one line per name
    ds = [y for c in P.chunks(decl) if P.strip_comments(c).strip() and not c.lstrip().startswith('INCLUDE_ASM')
          for y in P.split_multi(P.strip_comments(c))]
    helpers = [(k, P.strip_comments(b)) for k, b in funcs.items() if k != n and P.strip_comments(b).lstrip().startswith('static')
               and not re.search(rf'\b{k}\s*\(', src[f])]
    # r192: a `static inline` helper goes right in front of the function (as r179's handput_inl did), where GCC emits it
    # in the original's order; other static helpers go with the declarations
    ds += [b for k, b in helpers if not re.match(r'static\s+inline\b', b)]
    inl[n] = [(k, b) for k, b in helpers if re.match(r'static\s+inline\b', b)]
    pre[n] = ''
    # r208: a comment split() attached to the function goes in front of it, so the body starts with its header (a
    # leading comment crashed the header matches: sc02_003 8018762C, sc03_029 80186448)
    body = funcs[n]
    c = re.match(r'\s*(?:/\*.*?\*/\s*)+', body, re.S)
    if c:
        pre[n] += c[0].strip() + '\n'; body = body[c.end():]
    incs.setdefault(f, []).extend(x for x in P.includes(text) if x not in incs.get(f, []))
    groups.setdefault(f, []).append((n, ds, body))
# r211: drafts of one batch carrying the same `static inline` helper (twins matched with one helper set): it goes in
# once, in front of the first of them by address (each copy made the batch defer as a redefinition)
for f, items in groups.items():
    seen = set()
    for n, _, _ in sorted(items, key=lambda it: P.asm_pos(src[f], it[0]) or 0):
        pre[n] = ''.join(b + '\n\n' for k, b in inl.get(n, []) if k not in seen) + pre[n]
        seen.update(k for k, _ in inl.get(n, []))
deferred, placed = [], []
def why(n, s):
    with open(os.path.join(d, '_why.txt'), 'a') as w: w.write(f'{n}: {s}\n')
ENV = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
CC = os.path.join(os.getcwd(), 'tools', 'compilers', 'gcc-2.7.2-psx') + os.sep
def array_retypes(t, items):
    """r208: a file global the file declares scalar (`extern s16 D;`) that a draft declares as an array of the same type
    (`extern s16 D[];`): the file's line becomes the array and its other uses `D[0]` (same address; check-stage
    verifies)"""
    for _, ds, _ in items:
        for x in ds:
            m = re.fullmatch(r'\s*extern\s+([\w ]+?)\s+(\w+)\s*\[\w*\]\s*;\s*', x)
            if not m: continue
            line = re.search(rf'^extern\s+{re.escape(m[1])}\s+{m[2]}\s*;$', t, re.M)
            if not line: continue
            body = re.sub(rf'\b{m[2]}\b(?!\s*\[)', f'{m[2]}[0]', t[line.end():])
            t = t[:line.start()] + f'extern {m[1]} {m[2]}[];' + body
            print(f'{m[2]}: file declaration retyped to an array for a draft ({x.strip()})')
    return t
def insert(t, items):
    """the file's text with these drafts in place of their INCLUDE_ASMs, each one's new declarations directly above it
    (r208: they went above the first INCLUDE_ASM, which could be after the function); -> (text, {line: draft index})"""
    # the file's own guesses of a function being placed agree with its definition (put_func.retype_guess, r208): an
    # `extern void f();` or `extern u8 f;` takes its return type, a void one used for a value gets a cast at the
    # caller, a non-extern prototype the definition's header
    for n, _, b in items:
        t = P.retype_guess(t, n, b)
    t = array_retypes(t, items)
    # r192: a callee the file declares `extern void f(...)` that a draft declares with a value: the draft's return type
    # (a call whose value is unused compiles the same; the check verifies). Clone drafts carry the source's type.
    for _, ds, _ in items:
        for x in ds:
            m = re.fullmatch(r'\s*extern\s+(?!void\b)([\w \*]+?)\s*\b(func_\w+)\s*\([^;{}]*\)\s*;\s*', x)
            if m and not re.search(rf'^[\w\s\*]*\bvoid\s+{m[2]}\s*\([^;{{]*\)\s*\{{', t, re.M):   # not one defined void
                t = re.sub(rf'^(extern\s+)void(\s+{m[2]}\s*\()', lambda q: q[1] + m[1].strip() + q[2], t, flags=re.M)
    added = {}
    for i in sorted(range(len(items)), key=lambda i: P.asm_pos(t, items[i][0]) or 0):   # top down
        n, ds, b = items[i]
        t, added[i] = P.place_one(t, n, b, ds, pre.get(n, ''))
    owner = {}
    for i, (n, _, b) in enumerate(items):
        start = t[:t.index(b)].count('\n') + 1
        above = sum(x.count('\n') + 1 for x in added[i]) + (1 if added[i] else 0) + pre.get(n, '').count('\n')
        for l in range(start - above, start + b.count('\n') + 1):
            owner[l] = [i]
    return t, owner
def compile_errors(f):
    """line numbers of the errors cc1 reports for f (cpp keeps the line markers)"""
    r1 = subprocess.run([CC + 'cpp.exe', '-undef', '-Iinclude', '-D_LANGUAGE_C', '-DPSX', f], capture_output=True)
    r2 = subprocess.run([CC + 'cc1.exe', '-quiet', '-O0' if U.is_o0(f) else '-O2', '-G0', '-mips1', '-mcpu=3000', '-fgnu-linker', '-mgas',
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
NARROW = r'(?:[su](?:8|16)|(?:unsigned |signed )?(?:char|short))'
def widen(b, n):
    """r192: a definition with narrow parameters (`s16 arg2`) as word parameters narrowed on entry (`s32 arg2_0` and
    `s16 arg2 = arg2_0;`): it can follow the file's old-style `f();` (an argument with a default promotion cannot
    match an empty parameter list: "conflicting types"), and compiles the same; None if no parameter is narrow"""
    m = re.match(rf'([\w \*]+?\s*\b{n})\(([^)]*)\)\s*\{{', b)
    if not m: return None
    ps, conv, out = [p.strip() for p in m[2].split(',') if p.strip() and p.strip() != 'void'], [], []
    for p in ps:
        q = re.fullmatch(rf'({NARROW})\s+(\w+)', p)
        if q:
            out.append(f's32 {q[2]}_0'); conv.append(f'\n    {q[1]} {q[2]} = {q[2]}_0;')
        else:
            out.append(p)
    if not conv: return None
    return b.replace(m[0], f'{m[1]}({", ".join(out)}) {{' + ''.join(conv), 1)
def bindiff(limit=8):
    """r192: the first differing words of the built image against the original (as r175's bindiff_all.py), so a
    "build differs" says where: a wrong %lo field, a moved function, a size change"""
    import struct
    built, ref = (f'build/stg/{STG}/{STG}.bin', f'disc/pac4/{STG.upper()}.bin') if STG else \
        ('build/stage/stage.bin', 'disc/pac4/SC03_001.bin')
    base = 0x80128158 if STG else 0x80127000
    try:
        a, b = open(built, 'rb').read(), open(ref, 'rb').read()
    except OSError:
        return ' (not built)'
    out = [f' ({len(a)} vs {len(b)} bytes)'] if len(a) != len(b) else []
    for off in range(0, min(len(a), len(b)) - 3, 4):
        wa, wb = struct.unpack_from('<I', a, off)[0], struct.unpack_from('<I', b, off)[0]
        if wa != wb:
            out.append(f' {base + off:08X}: built {wa:08X} original {wb:08X}')
            if len(out) >= limit: break
    return ';'.join(out)
def check():
    r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe', CHECK], capture_output=True, text=True, env=ENV)
    return CHECK_OK in r.stdout
def unspec_protos(t, n):
    """t with its prototypes of n (`extern s32 n(s32 a);`, `void n(void);`) as `T n();`"""
    return re.sub(rf'^((?:extern\s+)?[A-Za-z_][\w \*]*?\b{n})\s*\([^;{{}})]*\)\s*;', r'\1();', t, flags=re.M)
def knr_callee(f, base, n):
    """r222 (r216's kr.py, ruled natural): a draft calls n, a function already in C or prototyped in f, with fewer or
    more arguments than its prototype (the original passes registers through): n's definition old-style (word
    parameters only; a narrow one is refused, its promotion changes the code) and n's prototypes in f and in the
    defining file as `T n();`, checked alone (make check) before the drafts go back in. -> f's new text, or None"""
    new = {}
    for g, t in src.items():
        t = base if g == f else t
        h = re.search(rf'^[A-Za-z_][\w \*]*?\b{n}\s*\(([^;{{}}]*)\)\s*((?:[A-Za-z_][^;{{}}()]*;\s*)*)\{{', t, re.M)
        if not h:
            continue
        if not h[2].strip():                  # an ANSI definition (not a prototype above it): old-style, or refused
            k = P.knr(t, n)
            if k is None:
                print(f'{n}: not made K&R (a narrow or non-word parameter: {h[1]})'); return None
            t = k
        new[g] = unspec_protos(t, n)
        break
    new[f] = unspec_protos(new.get(f, base), n)
    if all(new[g] == (base if g == f else src[g]) for g in new):
        return None                           # nothing to change: the error is something else
    old = {g: (base if g == f else src[g]) for g in new}
    for g, t in new.items():
        open(g, 'w', encoding='utf-8', newline='\n').write(t)
    if not check():
        for g, t in old.items():
            open(g, 'w', encoding='utf-8', newline='\n').write(t)
        print(f'{n}: K&R form does not build identically; left as it was'); return None
    for g, t in new.items():
        if g != f: src[g] = t
    print(f'{n}: made K&R for a caller passing other arguments ({", ".join(sorted(g.replace(os.sep, "/") for g in new))})')
    with open(os.path.join(d, '_knr.txt'), 'a') as w: w.write(f'{n}\n')
    return new[f]
def place(f, items):
    """compile-screen the drafts in one go, then check the build; bisect only a byte mismatch"""
    base = src[f]
    tried = set()                            # r222: callees already offered to knr_callee
    while items:
        t, owner = insert(base, items)
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
        bad_lines, out = compile_errors(f)
        if not bad_lines:
            # r192: a pointer made from an integer usually means a guessed callee type; the bytes may still match,
            # so it is only reported
            for m in re.finditer(r':(\d+): warning: ([^\n]*makes pointer from integer[^\n]*)', out):
                who = [items[j][0] for j in owner.get(int(m[1]), [])]
                if who:
                    print(f'warning: {who[0]}: {m[2]}'); why(who[0], 'warning: ' + m[2])
            break
        bad = set()
        lines = t.splitlines()
        idx = {n: i for i, (n, _, _) in enumerate(items)}
        # callers (already placed) that pass fewer or more arguments than a draft's definition: the original
        # passes registers through; an old-style definition makes no prototype, and word-sized parameters compile
        # the same
        argn = {}
        rebased = False
        for m in re.finditer(r':(\d+): too (?:few|many) arguments to function `(\w+)\'', out):
            if m[2] in idx: argn[int(m[1])] = m[2]
            elif m[2] not in tried:           # r222: a callee already in the file (r216 had kr.py do this by hand)
                tried.add(m[2])
                nb = knr_callee(f, base, m[2])
                if nb is not None:
                    base = nb; rebased = True
        if rebased: continue                  # the drafts again, over the file with the K&R callees
        fixed = set()
        for l, n in argn.items():
            i = idx[n]
            if i in fixed: continue
            k = knr(items[i][2], n)
            if k:
                items[i] = (n, items[i][1], k); fixed.add(i)
            else:
                bad.add(i)
        # a narrow-parameter definition after the file's old-style declaration: word parameters narrowed on entry
        for m in re.finditer(r':(\d+): conflicting types for `(\w+)\'', out):
            n = m[2]
            if n in idx and idx[n] not in fixed:
                w = widen(items[idx[n]][2], n)
                if w:
                    items[idx[n]] = (n, items[idx[n]][1], w); fixed.add(idx[n]); argn[int(m[1])] = n
                    for q in re.finditer(rf':(\d+): (?:previous declaration of `{n}\'|an argument type that has a default)', out):
                        argn[int(q[1])] = n
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
        # r208: each deferral worded with its own first error (the whole log follows, as before)
        for i in bad:
            msg = [m[2] for m in re.finditer(r':(\d+): (?!warning)([^\n]*)', out) if i in owner.get(int(m[1]), [])]
            print(f'deferred: {items[i][0]}: {msg[0] if msg else "an error in code already in the file names it"}')
            why(items[i][0], 'compile error: ' + (msg[0] if msg else 'in code already in the file that names it'))
        with open(os.path.join(d, '_why.txt'), 'a') as w:
            w.write(out + '\n')
        items = [x for i, x in enumerate(items) if i not in bad]
    def bis(items):
        if not items: return True
        t, _ = insert(src[f], items)
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
        if check():
            src[f] = t; placed.extend(n for n, _, _ in items); return True
        diff = bindiff() if len(items) == 1 else ''
        open(f, 'w', encoding='utf-8', newline='\n').write(src[f])
        if len(items) == 1:
            deferred.append(items[0][0])
            with open(os.path.join(d, '_why.txt'), 'a') as w:
                w.write(f'{items[0][0]}: build differs{diff}\n')
            return False
        h = len(items) // 2
        bis(items[:h]); bis(items[h:])
    src[f] = base
    open(f, 'w', encoding='utf-8', newline='\n').write(base)
    bis(items)
    open(f, 'w', encoding='utf-8', newline='\n').write(src[f])
for f, items in groups.items():
    t = src[f]
    orig0 = t                             # r208: restored whole when nothing of the group is placed (no stray include)
    if AF not in t:                       # the offset macro, once, after the includes
        last = list(re.finditer(r'^#include .*$', t, re.M))[-1]
        t = t[:last.end()] + '\n' + AF + t[last.end():]
        open(f, 'w', encoding='utf-8', newline='\n').write(t); src[f] = t
    t2 = P.add_includes(t, incs.get(f, []))   # the drafts' includes the file lacks (gte.h), checked with the group
    if t2 != t:
        t = t2
        open(f, 'w', encoding='utf-8', newline='\n').write(t); src[f] = t
    defs = {}
    for n, ds, b in items:
        defs[n] = re.match(r'([\w \*]+?)\s*\b' + n + r'\(', b)[1].strip()
    seen, ok = {}, []
    # r192: function externs two drafts guess differently (`extern void f();` / `extern s32 f();`): the one with a value
    # for all of them (a call whose value is unused compiles the same); a symbol the file already declares keeps the
    # file's declaration (missing_decls skips the drafts' lines), so it is no clash either
    pick = {}
    for _, ds, _ in items:
        for x in ds:
            s = sym_of(x)
            if s and x.startswith('extern') and '(' in x and (s not in pick or pick[s].startswith('extern void')):
                pick[s] = x
    for i, (n, ds, b) in enumerate(items):
        items[i] = (n, [pick.get(sym_of(x), x) if x.startswith('extern') and '(' in x and sym_of(x) not in defs else x
                        for x in ds], b)
    for n, ds, b in items:
        # r208: the file's own prototype of this function is retyped to the definition in insert() (put_func.retype_guess;
        # it was a deferral, "parameter count differs", and an empty `T f();` counted as zero parameters)
        bad = None
        nds = []
        for x in ds:
            s = sym_of(x)
            if s in defs and x.startswith('extern') and '(' in x:      # a guess for a function of this batch
                x = f'extern {defs[s]} {s}();'
            if s and s in seen and norm(seen[s][0]) != norm(x) and not P.declared_in(s, t): bad = (s, seen[s], x)
            nds.append(x)
        if bad:
            # r208: worded (r199: SV8[] vs s16[] for one table in two drafts of a batch); the next round places it
            # against the first draft's declaration, now in the file
            deferred.append(n); why(n, f'declaration of {bad[0]} clashes with draft {bad[1][1]}: `{bad[2]}` vs `{bad[1][0]}` (retried next round)'); continue
        for x in nds:
            s = sym_of(x)
            if s: seen.setdefault(s, (x, n))
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
        if not any(n in placed for n, _, _ in items) and src[f] != orig0:
            open(f, 'w', encoding='utf-8', newline='\n').write(orig0); src[f] = orig0
open(os.path.join(d, '_placed.txt'), 'w').write('\n'.join(placed) + '\n')
open(os.path.join(d, '_deferred.txt'), 'w').write('\n'.join(deferred) + '\n')
print(len(placed), 'placed,', len(deferred), 'deferred')
