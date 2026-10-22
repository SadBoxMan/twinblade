#!/usr/bin/env python3
"""Puts hand-written C for unmatched functions into src/ and checks that the whole build is still byte-identical.

Usage: put_func.py <file.c> [more.c ...]

Each file holds one or more functions named func_XXXXXXXX (the project's name for the function) plus whatever declarations they need (typedefs, structs, externs). For every function the
matching `INCLUDE_ASM(..., func_XXXXXXXX);` line in src/ is replaced by the function; the other declarations are inserted before the first INCLUDE_ASM of that file (lines already present are
skipped). Functions in src/<overlay>/ (src/stage, src/ovl38) are found too, and may carry real names (ShowAllParts). Then `make check-main`
runs (check-<overlay> for a function in src/<overlay>/); if the target no longer matches the original, or the compiler fails, the sources are restored and the reason is printed.
"""
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FUNC = re.compile(r'^(?!typedef|struct|union|enum)[A-Za-z_][\w \*]*?\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*\{', re.M)   # any top-level definition (stage engine functions carry names)


def split(text):
    """-> (declarations text, {function name: its full text})"""
    funcs = {}
    out = text
    for m in list(FUNC.finditer(text)):
        start = m.start()
        # a comment that ends just above the definition belongs to the function, not to the declarations
        before = text[:start].rstrip()
        if before.endswith('*/'):
            c = before.rfind('/*')
            if c >= 0 and (c == 0 or text[c - 1] == '\n'):
                start = c
        depth, i = 0, text.index('{', m.end() - 1)
        while True:
            c = text[i]
            if c == '{':
                depth += 1
            elif c == '}':
                depth -= 1
                if depth == 0:
                    break
            i += 1
        funcs[m.group(1)] = text[start:i + 1]
    for body in funcs.values():
        out = out.replace(body, '')
    decl = '\n'.join(l for l in out.splitlines() if l.strip() and not l.startswith('#include'))
    return decl, funcs


def norm(s):
    return re.sub(r'\s+', ' ', s).strip()


def chunks(decl):
    """top-level declarations: text up to a ';' that is not inside braces (a struct typedef stays in one piece)"""
    out, cur, depth = [], '', 0
    for line in decl.splitlines():
        cur += line + '\n'
        code = re.sub(r'/\*.*?\*/', '', line).rstrip()   # a trailing comment after the ';' still ends the declaration
        depth += code.count('{') - code.count('}')
        if depth == 0 and code.endswith(';'):
            out.append(cur.rstrip())
            cur = ''
    if cur.strip():
        out.append(cur.rstrip())
    return out


def target_of(path):
    """(make target, its success line) for a source file: src/<overlay>/x.c -> check-<overlay>, src/x.c -> check-main"""
    rel = os.path.relpath(path, os.path.join(ROOT, 'src')).replace(os.sep, '/')
    if rel.startswith(('abil/', 'stg/')):      # an ability package or a split stage: src/abil/ovlNN.c -> check-ovlNN
        o = rel.split('/')[1][:-2]
        return 'check-' + o, f'{o}.bin: OK'
    if '/' in rel:
        o = rel.split('/')[0]
        return 'check-' + o, f'{o}.bin: OK'
    return 'check-main', 'SLUS_007.26: OK'


def build(targets=(('check-main', 'SLUS_007.26: OK'),)):
    env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
    ok, log = True, ''
    for tgt, good in targets:
        r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe', tgt], capture_output=True, text=True, cwd=ROOT, env=env)
        ok = ok and good in r.stdout
        log += r.stdout + r.stderr
    return ok, log


def main():
    # TWINBLADE_OVL=<overlay>: place only into src/<overlay>/ (the mode overlays share function names, docs/overlays.md)
    files = {f: open(f, encoding='utf-8').read()
             for f in glob.glob(os.path.join(ROOT, 'src', os.environ.get('TWINBLADE_OVL', ''), '**', '*.c'), recursive=True)}
    backup = dict(files)
    placed = []
    for path in sys.argv[1:]:
        decl, funcs = split(open(path, encoding='utf-8').read())
        if not funcs:
            sys.exit(f'{path}: no func_XXXXXXXX function found')
        for name, body in funcs.items():
            pat = re.compile(rf'INCLUDE_ASM\("[^"]+",\s*{name}\);')
            for f, t in files.items():
                if pat.search(t):
                    new_decl = [c for c in chunks(decl) if norm(c) not in norm(t)]
                    if new_decl:                               # before the first INCLUDE_ASM, which may be this function's own
                        t = t.replace('\nINCLUDE_ASM', '\n' + '\n'.join(new_decl) + '\n\nINCLUDE_ASM', 1)
                    t = pat.sub(lambda m: body, t, count=1)
                    files[f] = t                               # decl is kept: every file that gets a function needs the declarations (deduped per file)
                    placed.append(name)
                    break
            else:
                sys.exit(f'{name}: no INCLUDE_ASM for it in src/ (already decompiled?)')
    targets = sorted({target_of(f) for f in files if files[f] != backup[f]}) or [('check-main', 'SLUS_007.26: OK')]
    for f, t in files.items():
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
    ok, log = build(targets)
    if ok:
        print('OK: build still matches;', ', '.join(placed), 'now in C')
        return
    print('FAILED, reverting.')
    errs = [l for l in log.splitlines() if 'error' in l.lower() or 'incompatible' in l or 'warning' in l.lower() or '.c:' in l or 'undeclared' in l]
    print('\n'.join([e for e in errs if 'warning' not in e][:14]) or '\n'.join(errs[:14]) or log[-800:])
    for f, t in backup.items():
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
    build(targets)
    sys.exit(1)


if __name__ == '__main__':
    main()
