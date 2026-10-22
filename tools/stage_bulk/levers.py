"""The stage's own levers over a folder of missed one-function drafts (r132, docs/decomp_recipes.md section 9), each
confirmed by a hand match; writes only the drafts a lever changed to <out_dir>:
    cond   `t = f(...); AF(a, s32, o) = t; if (t == 0) {` -> `if ((AF(a, s32, o) = t = f(...)) == 0) {` (the call's
           result tested and stored from v0, func_80142DC4)
    ret    `r = 0; if (c) { r = e; } return r;` -> `if (c) { return e; } return 0;` (v0 set directly, func_80161A00)
    width  a global the original loads or stores at another width than the draft's declaration: `*(T *)&D_x`
           (the width from the cmp log's first differing line, func_80182898); for an array, m2c's byte-indexed
           `extern u8 D_x[]; ... D_x[E]` becomes `(*(T *)((u8 *)D_x + (E) * 1))` (r133, func_80188438, func_8013B204)
usage: levers.py <in_dir> <out_dir>"""
import glob, os, re, sys
ind, outd = sys.argv[1:3]
os.makedirs(outd, exist_ok=True)
E = r'(?:[^()]|\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\))+?'
W = {'lw': 's32', 'sw': 's32', 'lh': 's16', 'lhu': 'u16', 'sh': 's16', 'lb': 's8', 'lbu': 'u8', 'sb': 'u8'}
SZ = {'s32': 4, 'u32': 4, 's16': 2, 'u16': 2, 's8': 1, 'u8': 1}
def bracket(t, i):
    """the index of the ] matching t[i] == '['"""
    k = 0
    for j in range(i, len(t)):
        if t[j] == '[': k += 1
        elif t[j] == ']':
            k -= 1
            if k == 0: return j
    return -1
n = 0
for f in sorted(glob.glob(os.path.join(ind, '*.c'))):
    t0 = t = open(f, encoding='utf-8').read()
    # cond
    t = re.sub(rf'^(\s*)(\w+) = ({E});\n\s*(AF\({E}, s32, \w+\)) = \2;\n\s*if \(\2 (==|!=) 0\) \{{',
               r'\1if ((\4 = \2 = \3) \5 0) {', t, flags=re.M)
    # ret
    t = re.sub(rf'^(\s*)s32 (\w+);\n\n\s*\2 = 0;\n(\s*)if \(({E})\) \{{\n\s*\2 = ({E});\n\s*\}}\n\s*return \2;',
               r'\3if (\4) {\n\3    return \5;\n\3}\n\3return 0;', t, flags=re.M)
    # ... and with statements before the result's assignment, `if (c) { D_x = 0; r = 1; }` (r133, func_80153BF0)
    def ret2(m):
        if re.search(rf'\b{m[2]}\b', m[5]): return m[0]
        return f'{m[3]}if ({m[4]}) {{\n{m[5]}{m[3]}    return {m[6]};\n{m[3]}}}\n{m[3]}return 0;'
    t = re.sub(rf'^(\s*)s32 (\w+);\n\n\s*\2 = 0;\n(\s*)if \(({E})\) \{{\n((?:\s+[^\n]*;\n)+?)\s*\2 = ({E});\n\s*\}}\n\s*return \2;',
               ret2, t, flags=re.M)
    # bit: `(e & 0x80) != 0` folds to `srl 7; andi 1`; through a temporary it stays `andi 0x80; sltu` (func_80149AA8)
    def bit(m):
        ind, lhs, e, k = m[1], m[2], m[3], m[4]
        if int(k, 0) & (int(k, 0) - 1): return m[0]
        return f'{ind}{{\n{ind}    s32 bt = {e} & {k};\n\n{ind}    {lhs}bt != 0;\n{ind}}}'
    t = re.sub(rf'^([ \t]*)(return |\w+ = )\(({E}) & (0x[0-9A-Fa-f]+|\d+)\) != 0;', bit, t, flags=re.M)
    # width
    log = f + '.log'
    if os.path.exists(log):
        for m in re.finditer(r'^\s+!! (l[whb]u?|s[whb])\s+\$\w+, %lo\((D_\w+)\)\(\$\w+\)\s+\| (l[whb]u?|s[whb])\s', open(log, encoding='utf-8', errors='replace').read(), re.M):
            op, sym = m[1], m[2]
            d = re.search(rf'^extern (\w+) {sym}\[\];$', t, re.M)
            if W[op] != W.get(m[3]) and d and d[1] in SZ:      # an array: index by bytes at the original's width
                out, i = [], 0
                for mm in re.finditer(rf'(?<![\w&]){sym}\[', t):
                    if mm.start() < i: continue
                    j = bracket(t, mm.end() - 1)
                    e = t[mm.end():j]
                    if not e.strip(): continue                  # the declaration itself
                    out.append(t[i:mm.start()] + f'(*({W[op]} *)((u8 *){sym} + ({e}) * {SZ[d[1]]}))')
                    i = j + 1
                t = ''.join(out) + t[i:]
                continue
            if W[op] != W.get(m[3]) and not re.search(rf'\(\*\([\w ]+\*\)&{sym}\)', t):
                body_start = re.search(r'^\w[\w \*]*\bfunc_\w+\(.*\{$|^\w[\w \*]*\b[A-Z]\w+\(.*\{$', t, re.M)
                if body_start:
                    k = body_start.start()
                    t = t[:k] + re.sub(rf'(?<![&\w]){sym}\b', f'(*({W[op]} *)&{sym})', t[k:])
    # passthru: our `jal f` slot sets an argument the original leaves (`nop`): f is called with none, a0 is what an
    # earlier delay slot left there (func_8017EFD4)
    if os.path.exists(log):
        L = open(log, encoding='utf-8', errors='replace').read().splitlines()
        for i in range(len(L) - 1):
            m = re.match(r'\s+jal\s+(\w+)\s+\|', L[i])
            if m and re.match(r'\s+!! nop\s+\| (li|move)\s+a0,', L[i + 1]):
                calls = re.findall(rf'\b{m[1]}\(([^()]*)\)', t)
                if len(calls) == 1 and calls[0] and ',' not in calls[0]:
                    t = t.replace(f'{m[1]}({calls[0]})', f'{m[1]}()')
    # stride: m2c steps a word pointer by bytes (`s32 *p; p += 0x24;`): the original's `addiu 0x24` against our
    # `addiu 144`; step it through a byte pointer, `p = (s32 *)((u8 *)p + 0x24);` (r133, func_8017E1B4)
    if os.path.exists(log):
        for m in re.finditer(r'^\s+!! addiu\s+\$\w+, \$\w+, (-?0x[0-9A-Fa-f]+|-?\d+)\s+\| addiu\s+\w+,\w+,(-?\d+)', open(log, encoding='utf-8', errors='replace').read(), re.M):
            k, ours = int(m[1], 0), int(m[2])
            if k == 0 or ours % k or ours // k not in (2, 4, 8): continue
            for v in re.finditer(r'^\s+([\w ]+?) \*(\w+);$', t, re.M):
                T, var = v[1], v[2]
                t = re.sub(rf'^(\s+){var} \+= ({re.escape(m[1])}|{k}|0x{k:X});$',
                           rf'\1{var} = ({T} *)((u8 *){var} + \2);', t, flags=re.M)
    # argpos: m2c names the parameters by register but leaves out the unused ones before them, `void f(s16 arg2)`
    # (the original reads a2): fill the gaps, `void f(s32 arg0, s32 arg1, s16 arg2)` (r133, func_80153C44)
    def argpos(m):
        ps = [p.strip() for p in m[2].split(',')]
        ks = [re.search(r'\barg(\d)$', p) for p in ps]
        if not all(ks): return m[0]
        have = {int(k[1]): p for k, p in zip(ks, ps)}
        if sorted(have) == list(range(len(have))): return m[0]
        return m[1] + '(' + ', '.join(have.get(i, f's32 arg{i}') for i in range(max(have) + 1)) + ') {'
    t = re.sub(r'^([\w \*]+?\bfunc_\w+)\(([^()]+)\) \{', argpos, t, flags=re.M)
    if t != t0:
        open(os.path.join(outd, os.path.basename(f)), 'w', newline='\n').write(t)
        n += 1
print(n, 'drafts changed')
