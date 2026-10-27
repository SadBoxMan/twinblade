"""r151 (S1, folded in by r142): draft externs that clash with the stage file's: keep the stage's declaration, cast at
every use in the draft (scalar: (*(T *)&N); array: ((T *)N)). Rewrites drafts in place; prints what changed. Also
retypes an engine/EXE function the stage file declares `void` when a draft uses its value (writes src/stg/<stage>.c
of the checkout it lives in).
usage: fix_decl.py <stage> <draft.c|dir> ...   (r209: <stage> may be a unit, sc03_014_o0, for drafts placed in that file)"""
import glob, os, re, sys
WT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))   # the checkout (any worktree)
st = sys.argv[1]
src = open(os.path.join(WT, 'src/stg', st + '.c'), encoding='utf-8').read()
DECL = re.compile(r'^extern\s+([\w\s\*]+?)\s*\b(\w+)\s*(\[[^\]]*\])?\s*;', re.M)
have = {m[2]: (norm, m[3]) for m in DECL.finditer(src) for norm in [re.sub(r'\s+', ' ', m[1]).strip()]}
files = []
for a in sys.argv[2:]:
    files += sorted(glob.glob(os.path.join(a, '*.c'))) if os.path.isdir(a) else [a]
for f in files:
    if os.path.basename(f).startswith('_'): continue
    t = open(f, encoding='utf-8').read()
    ch_pre = []
    # engine/EXE functions the draft uses for a value but the stage file declares extern void: retype the stage's
    # declaration (r148 lever; callers that ignore the value compile the same)
    for m in re.finditer(r'^(?:extern\s+)?(s32|u32|s16|u16|s8|u8|int)\s+(func_\w+)\s*\([^;{]*\)\s*;', t, re.M):
        n = m[2]
        pat = re.compile(r'^(extern\s+)?void\s+%s\s*\(([^;{]*)\)\s*;' % n, re.M)
        # r192: not a function the stage file defines in C as void (its prototype retyped would conflict with the body)
        if re.search(r'^[\w\s\*]*\bvoid\s+%s\s*\([^;{]*\)\s*\{' % n, src, re.M):
            print('stage file:', n, 'is defined void in C: left alone (the draft uses a value it does not return)')
            continue
        if pat.search(src):
            src = pat.sub(lambda q: '%ss32 %s(%s);' % (q[1] or '', n, q[2]), src)
            open(os.path.join(WT, 'src/stg', st + '.c'), 'w', encoding='utf-8', newline='\n').write(src)
            print('stage file:', n, 'void -> s32')
    # the opposite: the draft declares void what the stage file already declares with a value
    for m in list(re.finditer(r'^(extern\s+)?void\s+(func_\w+)\s*\(([^;{]*)\)\s*;', t, re.M)):
        n = m[2]
        q = re.search(r'^(?:extern\s+)?(s32|u32|s16|u16|s8|u8|int)\s+%s\s*\(' % n, src, re.M)
        if q:
            t = t.replace(m[0], '%s%s %s(%s);' % (m[1] or '', q[1], n, m[3]), 1)
            ch_pre.append(n + ' void->' + q[1])
    ch = ch_pre
    for m in list(DECL.finditer(t)):
        n = m[2]; T = re.sub(r'\s+', ' ', m[1]).strip(); arr = m[3]
        if n not in have or n.startswith('func_'): continue
        T0, arr0 = have[n]
        if (T0, bool(arr0)) == (T, bool(arr)): continue
        line = m[0]
        body = t.replace(line, '\0DECL\0', 1)
        if arr:
            rep = '((%s *)%s)' % (T, n) if arr0 else '((%s *)&%s)' % (T, n)
        else:
            rep = '(*(%s *)%s)' % (T, n) if arr0 else '(*(%s *)&%s)' % (T, n)
        body = re.sub(r'(?<![\w&])%s\b' % n, rep, body)
        body = re.sub(r'&\(\*\((%s \*)\)&?%s\)' % (re.escape(T), n), lambda q: '((%s)&%s)' % (q[1], n) if not arr0 else '((%s)%s)' % (q[1], n), body)
        t = body.replace('\0DECL\0', 'extern %s %s%s;' % (T0, n, arr0 or ''))
        ch.append('%s %s->%s' % (n, T + (arr or ''), T0 + (arr0 or '')))
    if ch:
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
        print(os.path.basename(f), '; '.join(ch))
