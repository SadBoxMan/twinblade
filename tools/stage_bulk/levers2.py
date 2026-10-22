"""r151 (S1, folded in by r142) levers for one-line near misses, read from each draft's cmp log (<dir>/<f>.c.log):
 * constant form: asm `ori/addiu r,zero,V` vs ours `li r,W` with V == W mod 2^16: rewrite the literal as V, and/or
   flip the signedness of the type on that line (s16 <-> u16, s8 <-> u8)
 * access width: asm lw/lh/lhu/lb/lbu/sw/sh/sb vs ours another width: retype AF(..., T, off) at that offset, or the
   global's declaration (scalar), or wrap an array element `*(T *)&D[i]`
Writes candidates to <out>/<k>/<f>.c (k = 0, 1, ...). usage: levers2.py <dir> <out>"""
import glob, os, re, sys
d, out = sys.argv[1], sys.argv[2]
W = {'lw': ['s32'], 'sw': ['s32'], 'lh': ['s16'], 'lhu': ['u16'], 'lb': ['s8'], 'lbu': ['u8'],
     'sh': ['s16', 'u16'], 'sb': ['u8', 's8']}
FLIP = {'s16': 'u16', 'u16': 's16', 's8': 'u8', 'u8': 's8', 's32': 'u32', 'u32': 's32'}
LIT = re.compile(r'(?<![\w.])(-?)(0x[0-9A-Fa-f]+|\d+)[uUlL]*(?![\w.])')
BIAS = re.compile(r'(\w+) = (\w+) >> (\d+|0x[0-9A-Fa-f]+);(\s*)if \(\2 < 0\) \{\s*\1 = (?:\(s32\) )?\(\2 \+ (0x[0-9A-Fa-f]+|\d+)\) >> \3;\s*\}')


def bias(t):
    """m2c's signed division by 2^n (shift, then the bias for negatives) -> x / 2^n"""
    return BIAS.sub(lambda m: '%s = %s / %d;' % (m[1], m[2], 1 << ival(m[3])), t)

def ival(s):
    s = s.strip().lstrip('$')
    neg = s.startswith('-'); s = s.lstrip('-')
    v = int(s, 16) if s.lower().startswith('0x') else int(s)
    return -v if neg else v

def lits(t):
    for m in LIT.finditer(t):
        yield m, ival(m[1] + m[2])

def split_args(s):
    out, dep, cur = [], 0, ''
    for c in s:
        if c in '([': dep += 1
        elif c in ')]': dep -= 1
        if c == ',' and dep == 0: out.append(cur); cur = ''
        else: cur += c
    out.append(cur)
    return [x.strip() for x in out]


def balanced(t, i):
    dep = 0
    while i < len(t):
        if t[i] == '(': dep += 1
        elif t[i] == ')':
            dep -= 1
            if dep == 0: return i + 1
        i += 1
    return -1


def trim(a):
    k = len(a)
    while k > 1 and a[k - 1] == 'arg%d' % (k - 1): k -= 1
    return a[:k]


def fmt(v): return '0x%X' % v if v >= 0 else '-0x%X' % -v

def cands(t, a, o):
    """a: asm half, o: ours half of a differing line."""
    res = []
    ma = re.match(r'(ori|addiu)\s+\$(\w+),\s*\$zero,\s*(-?0x[0-9A-Fa-f]+|-?\d+)', a)
    mo = re.match(r'li\s+(\w+),(-?0x[0-9a-f]+|-?\d+)', o)
    if ma and mo:
        V = ival(ma[3]); Wv = ival(mo[2])
        if ma[1] == 'ori': V &= 0xFFFF
        mod = 0x10000 if (V - Wv) % 0x10000 == 0 else (0x100 if (V - Wv) % 0x100 == 0 else 0)
        if mod and V != Wv:
            # every global stored with such a literal flipped at once
            gs = set()
            for m, v in lits(t):
                if (v - Wv) % mod == 0 and abs(v) < 0x10000:
                    ls0 = t.rfind('\n', 0, m.start()) + 1; le0 = t.find('\n', m.end())
                    gs |= set(re.findall(r'\b(D_\w+)\b', t[ls0:le0]))
            if len(gs) > 1:
                t2 = t
                for g in gs:
                    t2 = re.sub(r'^(extern\s+)(s16|u16|s8|u8|s32|u32)(\s+%s\b)' % g, lambda q: q[1] + FLIP[q[2]] + q[3], t2, flags=re.M)
                res.append(t2)
            for m, v in lits(t):
                if (v - Wv) % mod == 0 and (v in (V, Wv) or v % mod in (V % mod, Wv % mod)) and abs(v) < 0x10000:
                    # a global stored on that line: flip its declared type
                    ls0 = t.rfind('\n', 0, m.start()) + 1; le0 = t.find('\n', m.end())
                    for g in re.findall(r'\b(D_\w+)\b', t[ls0:le0]):
                        dm = re.search(r'^extern\s+(s16|u16|s8|u8|s32|u32)\s+%s\b' % g, t, re.M)
                        if dm:
                            res.append(t[:dm.start(1)] + FLIP[dm[1]] + t[dm.end(1):])
                    s, e = m.span()
                    ls = t.rfind('\n', 0, s) + 1; le = t.find('\n', e)
                    line = t[ls:le]
                    if v != V:
                        res.append(t[:s] + fmt(V) + t[e:])
                    flipped = re.sub(r'\b(s16|u16|s8|u8|s32|u32)\b', lambda q: FLIP[q[1]], line)
                    if flipped != line:
                        nl = flipped.replace(m[0], fmt(V)) if v != V else flipped
                        res.append(t[:ls] + flipped + t[le:])
                        if v != V: res.append(t[:ls] + nl + t[le:])
        return res
    # an argument register set by ours and not by the original (nop | li/move aN): the original passes fewer
    # arguments (aN is passed through, K&R call); or the reverse (original sets aN, ours nop): one more argument
    mo = re.match(r'(?:li|move|addiu|lui|addu)\s+a([0-3]),(.*)', o)
    if a.startswith('nop') and mo:
        n = int(mo[1])
        for m in re.finditer(r'\b(func_\w+)\(', t):
            if re.match(r'\s*(?:extern\s+)?\w+\s+$', t[t.rfind('\n', 0, m.start()) + 1:m.start()]): continue
            s = m.end(); dep = 1; i = s; commas = []
            while i < len(t) and dep:
                c = t[i]
                if c in '([': dep += 1
                elif c in ')]': dep -= 1
                elif c == ',' and dep == 1: commas.append(i)
                i += 1
            if len(commas) >= n:
                cut = commas[n - 1] if n else s
                res.append(t[:cut] + t[i - 1:])
        return res
    ma = re.match(r'(?:addiu|ori)\s+\$a([0-3]),\s*\$zero,\s*(-?0x[0-9A-Fa-f]+|-?\d+)', a)
    mb = re.match(r'addu\s+\$a([0-3]),\s*\$s\d,\s*\$zero', a)
    if mb and o.startswith('nop'):
        n = int(mb[1])
        for m in re.finditer(r'\b(func_\w+)\(', t):
            if re.match(r'\s*(?:extern\s+)?\w+\s+$', t[t.rfind('\n', 0, m.start()) + 1:m.start()]): continue
            s = m.end(); j = balanced(t, s - 1)
            if j < 0: continue
            inner = t[s:j - 1].strip()
            nargs = len(split_args(inner)) if inner else 0
            if nargs == n:
                for v in ('arg0', '(s32) arg0'):
                    res.append(t[:j - 1] + (', ' if n else '') + v + t[j - 1:])
        return res
    if ma and o.startswith('nop'):
        n = int(ma[1]); V = ival(ma[2])
        for m in re.finditer(r'\b(func_\w+)\(', t):
            if re.match(r'\s*(?:extern\s+)?\w+\s+$', t[t.rfind('\n', 0, m.start()) + 1:m.start()]): continue
            s = m.end(); dep = 1; i = s; commas = 0
            while i < len(t) and dep:
                c = t[i]
                if c in '([': dep += 1
                elif c in ')]': dep -= 1
                elif c == ',' and dep == 1: commas += 1
                i += 1
            nargs = commas + 1 if t[s:i - 1].strip() else 0
            if nargs == n:
                res.append(t[:i - 1] + (', ' if n else '') + fmt(V) + t[i - 1:])
        return res
    # srl vs sra (or back): the shifted value's signedness; flip the types on each line that shifts by that amount
    ma = re.match(r'(srl|sra)\s+\$\w+,\s*\$\w+,\s*(\d+|0x[0-9A-Fa-f]+)', a)
    mo = re.match(r'(srl|sra)\s', o)
    if ma and mo and ma[1] != mo[1]:
        sh = ival(ma[2])
        for m in re.finditer(r'^.*>>\s*(0x[0-9A-Fa-f]+|\d+)\b.*$', t, re.M):
            if ival(m[1]) != sh: continue
            line = m[0]
            fl = re.sub(r'\b(s16|u16|s8|u8|s32|u32)\b', lambda q: FLIP[q[1]], line)
            if fl != line: res.append(t[:m.start()] + fl + t[m.end():])
            # or cast the shifted operand
            c = re.sub(r'(\w+(?:\([^()]*\))?)\s*>>\s*' + re.escape(m[1]), lambda q: '(%s)%s >> %s' % (
                'u32' if ma[1] == 'srl' else 's32', q[1], m[1]), line, count=1)
            if c != line: res.append(t[:m.start()] + c + t[m.end():])
        return res
    # pointer step scaled by the element size: asm addiu by A, ours by B = A * s
    ma = re.match(r'addiu\s+\$\w+,\s*\$(?!zero)\w+,\s*(-?0x[0-9A-Fa-f]+|-?\d+)', a)
    mo = re.match(r'addiu\s+\w+,(?!zero)\w+,(-?0x[0-9a-f]+|-?\d+)', o)
    if ma and mo:
        A, B = ival(ma[1]), ival(mo[1])
        if A and B and B % A == 0 and abs(B // A) > 1:
            s = B // A
            for m, v in lits(t):
                if v in (A, -A) and v % s == 0:
                    res.append(t[:m.start()] + fmt(v // s) + t[m.end():])
        return res
    ma = re.match(r'(lw|sw|lh|lhu|lb|lbu|sh|sb)\s+\$\w+,\s*(.*)', a)
    mo = re.match(r'(lw|sw|lh|lhu|lb|lbu|sh|sb)\s', o)
    if ma and mo and ma[1] != mo[1]:
        ts = W[ma[1]]
        arg = ma[2]
        g = re.search(r'%lo\((D_\w+)', arg)
        if g:
            pre = g[1]
            for m in re.finditer(r'^extern\s+([\w ]+?)\s+(%s\w*)\s*(\[[^\]]*\])?\s*;' % pre, t, re.M):
                n = m[2]
                for T in ts:
                    if not m[3]:
                        res.append(t.replace(m[0], 'extern %s %s;' % (T, n), 1))
                        # m2c's byte-offset table read *(&N + off): the element is T at a byte offset
                        if '*(&%s + ' % n in t:
                            res.append(t.replace('*(&%s + ' % n, '*(%s *)((u8 *)&%s + ' % (T, n)))
                    else:
                        # wrap each element access in turn (and all of them)
                        body_s = m.end()
                        acc = list(re.finditer(r'(?<![\w&])%s\[([^\[\]]+)\]' % n, t[body_s:]))
                        for k in acc:
                            s, e = body_s + k.start(), body_s + k.end()
                            res.append(t[:s] + '(*(%s *)&%s[%s])' % (T, n, k[1]) + t[e:])
                        if len(acc) > 1:
                            res.append(t[:body_s] + re.sub(r'(?<![\w&])%s\[([^\[\]]+)\]' % n,
                                                       lambda q: '(*(%s *)&%s[%s])' % (T, n, q[1]), t[body_s:]))
                        res.append(t.replace(m[0], 'extern %s %s%s;' % (T, n, m[3]), 1))
            return res
        g = re.match(r'(-?0x[0-9A-Fa-f]+|-?\d+)?\(\$\w+\)', arg)
        if g:
            off = ival(g[1]) if g[1] else 0
            pat = re.compile(r'AF\(([^,()]+(?:\([^()]*\))?[^,()]*),\s*(\w+)\s*,\s*(0x[0-9A-Fa-f]+|\d+)\)')
            hits = [m for m in pat.finditer(t) if ival(m[3]) == off]
            for T in ts:
                for m in hits:
                    if m[2] != T:
                        res.append(t[:m.start(2)] + T + t[m.end(2):])
                if len(hits) > 1:
                    res.append(pat.sub(lambda m: m[0].replace(m[2], T, 1) if ival(m[3]) == off else m[0], t))
    return res

n_f = n_c = 0
for log in sorted(glob.glob(os.path.join(d, '*.c.log'))):
    L = open(log, encoding='utf-8', errors='replace').read().splitlines()
    if not L or 'differs' not in L[0]: continue
    f = os.path.basename(log)[:-6]
    t = open(os.path.join(d, f + '.c'), encoding='utf-8').read()
    cs = []
    bad = [l[4:].partition('|') for l in L[1:] if l.startswith('  !!')]
    pairs = [(a.strip(), o.strip()) for a, _, o in bad]
    if len(bad) <= 4:   # lines swapped by the scheduler: try every asm line against every ours line
        pairs += [(a.strip(), o2.strip()) for a, _, _ in bad for _, _, o2 in bad if (a, o2) not in [(x, z) for x, _, z in bad]]
    for a, o in pairs:
        cs += cands(t, a, o)
    # parameters passed through in their own position (f(arg0, arg1) with arg1 untouched): the original's call
    # often stops before them (a1 is simply still the caller's a1). Drop the pass-through tail, each call alone.
    pt = []
    for m in re.finditer(r'\b(func_\w+)\(([^()]*)\)', t):
        if re.match(r'\s*(?:extern\s+)?\w+\s+$', t[t.rfind('\n', 0, m.start()) + 1:m.start()]): continue
        a = split_args(m[2])
        k = len(a)
        while k > 1 and a[k - 1] == 'arg%d' % (k - 1): k -= 1
        if k < len(a):
            pt.append(t[:m.start(2)] + ', '.join(a[:k]) + t[m.end(2):])
    if len(pt) > 1:
        allp = re.sub(r'\b(func_\w+)\(([^()]*)\)', lambda m: m[0] if re.match(r'\s*(?:extern\s+)?\w+\s+$', t[t.rfind('\n', 0, m.start()) + 1:m.start()]) else '%s(%s)' % (m[1], ', '.join(trim(split_args(m[2])))), t)
        pt.append(allp)
    cs += pt
    # a field tested and then handed to a zero-argument call (m2c lost the a0): if (AF(..) != 0) f();
    TEST = re.compile(r'if \((AF\((?:[^()]|\([^()]*\))*\))(?: != 0)?\) \{(\s*(?:\w+ = )?)(func_\w+)\(\)')
    if TEST.search(t):
        cs.append(TEST.sub(lambda m: 'if (%s != 0) {%s%s(%s)' % (m[1], m[2], m[3], m[1]), t))
    # rand() % 2^n written by m2c as a bias form: q = t; if (t < 0) q = t + K; ... (t - ((q >> n) * M))
    REM = re.compile(r'(\w+) = (\w+);\s*if \(\2 < 0\) \{\s*\1 = \2 \+ (0x[0-9A-Fa-f]+|\d+);\s*\}')
    mm = REM.search(t)
    if mm:
        M = ival(mm[3]) + 1
        t2 = REM.sub('', t, count=1)
        t2 = re.sub(r'\(%s - \(\(%s >> \d+\) \* %d\)\)' % (mm[2], mm[1], M), '(%s %% %d)' % (mm[2], M), t2)
        t2 = re.sub(r'\(%s - \(\(%s >> \d+\) << \d+\)\)' % (mm[2], mm[1]), '(%s %% %d)' % (mm[2], M), t2)
        if t2 != t: cs.append(t2)
    if BIAS.search(t):
        b = bias(t)
        cs = [b] + cs + [bias(c) for c in cs]
        for l in L[1:]:
            if l.startswith('  !!'):
                a, _, o = l[4:].partition('|')
                cs += cands(b, a.strip(), o.strip())
    # two differing lines: also the pairwise combination of first-line and second-line candidates is not tried;
    # apply each candidate again on the next differing line's candidates (cheap: at most 6x6)
    # early return polarity: if (C) { return A; } return B;  ->  if (!C) { return B; } return A;
    ER = re.compile(r'^(\s+)if \((.+)\) \{\n\s+return ([^;]+);\n\s+\}\n\s+return ([^;]+);\n', re.M)
    NEG = [(' == ', ' != '), (' != ', ' == '), (' < ', ' >= '), (' >= ', ' < '), (' > ', ' <= '), (' <= ', ' > ')]
    for m in ER.finditer(t):
        c = m[2]
        nc = None
        if not re.search(r'&&|\|\|', c):
            for x, y in NEG:
                if c.count(x) == 1 and not any(c.count(z) for z, _ in NEG if z != x):
                    nc = c.replace(x, y); break
            if nc is None: nc = '!(%s)' % c
            ind = m[1]
            cs.append(t[:m.start()] + '%sif (%s) {\n%s    return %s;\n%s}\n%sreturn %s;\n' % (ind, nc, ind, m[4], ind, ind, m[3]) + t[m.end():])
    if '--swap' in sys.argv and len(bad) <= 8:
        # statement order: swap each pair of adjacent simple statements (same indent, both end in ';')
        ls = t.split('\n')
        body0 = next((i for i, l in enumerate(ls) if re.match(r'^\w.*\)\s*\{$', l)), 0)
        for i in range(body0 + 1, len(ls) - 1):
            a1, b1 = ls[i], ls[i + 1]
            ia = len(a1) - len(a1.lstrip()); ib = len(b1) - len(b1.lstrip())
            if ia and ia == ib and a1.rstrip().endswith(';') and b1.rstrip().endswith(';') \
                    and not re.match(r'\s*(return|break|continue|goto|\w+ \w+;|s32 |u8 |s16 |u16 |u32 |s8 )', a1) \
                    and not re.match(r'\s*(return|break|continue|goto)', b1):
                cs.append('\n'.join(ls[:i] + [b1, a1] + ls[i + 2:]))
    seen = set(); k = 0
    for c in cs:
        if c in seen or c == t: continue
        seen.add(c)
        os.makedirs(os.path.join(out, str(k)), exist_ok=True)
        open(os.path.join(out, str(k), f + '.c'), 'w', encoding='utf-8', newline='\n').write(c)
        k += 1
    if k: n_f += 1; n_c += k
print(n_f, 'functions,', n_c, 'candidates')
