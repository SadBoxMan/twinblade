"""before placing batch files: make src/abil's extern lines for the batch's functions agree with their definitions
(return type, unprototyped), and drop the batch's own conflicting extern for them.  usage: align_decls.py <batch.c>..."""
import os, re, sys
sys.path.insert(0, 'tools')
import put_func as P
for path in sys.argv[1:]:
    pkg = re.search(r'ovl[0-9a-f]{2}', os.path.basename(path))[0]      # <package>.c or <func>.c
    src = f'src/abil/{pkg}.c'
    t = open(src, encoding='utf-8').read()
    b = open(path, encoding='utf-8').read()
    decl, funcs = P.split(b)
    for name, body in funcs.items():
        ret = re.match(r'(?:/\*.*?\*/\s*)?([\w \*]+?)\s*\b' + name + r'\(', body, re.S)[1].strip()
        want = f'extern {ret} {name}();'
        sig = re.match(r'(?:/\*.*?\*/\s*)?([\w \*]+?\b' + name + r'\([^)]*\))', body, re.S)[1]
        if re.search(rf'\b{name}\(\)', t) and not sig.endswith('(void)'):
            sig = want[:-1]         # a matched caller passes nothing (a0 passed through): keep it unprototyped (r127)
        # a full prototype at the top level (a type at column 0: an indented call must not match)
        t = re.sub(rf'^(?=[A-Za-z])[\w \*]+?\b{name}\([^;{{]*\);', sig + ';', t, flags=re.M)
        t = re.sub(rf'^extern [\w \*]+?\b{name}\([^;]*\);', want, t, flags=re.M)
        b = re.sub(rf'^extern [\w \*]+?\b{name}\([^;]*\);', want, b, flags=re.M)
    # callees the batch declares: agree with src (a definition's return type wins; between two externs, s32)
    for m in list(re.finditer(r'^extern (\w+) (func_\w+)\(\);', b, re.M)):
        ty, name = m[1], m[2]
        d = re.search(rf'^(\w+) {name}\([^;]*\)\s*\{{', t, re.M)
        if d:
            b = b.replace(m[0], f'extern {d[1]} {name}();')
            if d[1] == 'void':
                b = re.sub(rf'return ({name}\([^;]*\));', r'\1;\n    return;', b)
            continue
        e = re.search(rf'^extern (\w+) {name}\(\);', t, re.M)
        if e and e[1] != ty:
            if ty == 's32':
                t = t.replace(e[0], f'extern s32 {name}();')
            else:
                b = b.replace(m[0], f'extern s32 {name}();')
    # data the batch declares differently from src: the batch's type (the one that matched)
    for m in list(re.finditer(r'^extern ([\w \*]+?) ((?:D|jtbl)_\w+)(\[\])?;', b, re.M)):
        e = re.search(rf'^extern [\w \*]+? {m[2]}(\[\])?;', t, re.M)
        if e and e[0] != m[0]:
            t = t.replace(e[0], m[0])
    open(src, 'w', encoding='utf-8', newline='\n').write(t)
    open(path, 'w', encoding='utf-8', newline='\n').write(b)
