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
        if depth == 0 and line.lstrip().startswith('#'):   # a #define has no ';': its own chunk (r142: it used to
            if cur.strip():                                # swallow the typedef after it, re-added as a duplicate)
                out.append(cur.rstrip())
                cur = ''
            out.append(line.rstrip())
            continue
        cur += line + '\n'
        code = re.sub(r'/\*.*?\*/', '', line).rstrip()   # a trailing comment after the ';' still ends the declaration
        depth += code.count('{') - code.count('}')
        if depth == 0 and code.endswith(';'):
            out.append(cur.rstrip())
            cur = ''
    if cur.strip():
        out.append(cur.rstrip())
    return out


INCLUDE = re.compile(r'^#include\s+["<][^">]+[">][^\n]*$', re.M)


def includes(text):
    """the draft's #include lines (split() leaves them out: GTE drafts need theirs, include/gte.h)"""
    return INCLUDE.findall(text)


def add_includes(t, incs):
    """the file with the #include lines it lacks, after its last #include (r142)"""
    have = {norm(x) for x in INCLUDE.findall(t)}
    new = []
    for x in incs:
        if norm(x) not in have and x not in new:
            new.append(x)
    if not new:
        return t
    last = list(INCLUDE.finditer(t))
    k = last[-1].end() if last else 0
    return t[:k] + ('\n' if k else '') + '\n'.join(new) + ('' if k else '\n') + t[k:]


def strip_comments(c):
    c = re.sub(r'/\*.*?\*/', '', c, flags=re.S)
    c = re.sub(r'//[^\n]*', '', c)
    return '\n'.join(l.rstrip() for l in c.splitlines() if l.strip())


def defined_names(c):
    """the names a declaration chunk declares: typedef names, struct/union/enum tags, an extern's or a prototype's
    symbol"""
    c = strip_comments(c).strip()
    m = re.match(r'#\s*define\s+(\w+)', c)
    if m:
        return {'#' + m[1]}
    names = set(re.findall(r'\b(?:struct|union|enum)\s+(\w+)\s*\{', c))
    if c.startswith('typedef'):
        tail = c[c.rindex('}') + 1:] if '}' in c else re.sub(r'^typedef\s+', '', c)
        fp = re.search(r'\(\s*\*\s*(\w+)\s*\)', tail)            # typedef void (*Fn)(...);
        if fp:
            names.add(fp[1])
        elif '}' in c:
            names |= set(re.findall(r'(\w+)\s*(?:\[[^\]]*\])*\s*[,;]', tail))
        else:
            m = re.search(r'(\w+)\s*(?:\[[^\]]*\])*\s*;$', tail)
            if m:
                names.add(m[1])
    elif '{' not in c:
        m = re.search(r'(\w+)\s*(?:\[[^\]]*\])*\s*(?:\([^;]*\))?\s*;$', c)
        if m:
            names.add(m[1])
    return names


def declared_in(name, t):
    """does the file already declare or define this name (as a typedef, tag, variable or function)?"""
    if name.startswith('#'):   # a macro
        return bool(re.search(rf'^#\s*define\s+{re.escape(name[1:])}\b', t, re.M))
    n = re.escape(name)
    t = strip_comments(t)
    return bool(re.search(rf'\btypedef\b[^;{{}}]*\b{n}\s*(?:\[[^\]]*\])*\s*;', t)
                or re.search(rf'\}}\s*(?:\*?\s*\w+\s*,\s*)*\*?\s*{n}\s*[,;]', t)
                or re.search(rf'\(\s*\*\s*{n}\s*\)', t)
                or re.search(rf'\b(?:struct|union|enum)\s+{n}\s*\{{', t)
                or re.search(rf'^[A-Za-z_][^\n;{{}}#]*\b{n}\s*(?:\[[^\]]*\])*\s*(?:\([^;{{}}]*\))?\s*(?:=[^;]*)?;', t, re.M)
                or re.search(rf'^[A-Za-z_][^\n;{{}}]*\b{n}\s*\([^;{{}}]*\)\s*\{{', t, re.M))


def missing_decls(cs, t):
    """the declaration chunks the file lacks (r142): comments do not count, and a chunk whose names the file already
    declares is skipped whole (no duplicate typedef, the file's own extern wins)"""
    tn = norm(strip_comments(t))
    out = []
    for c in cs:
        cc = strip_comments(c)
        if not cc.strip() or norm(cc) in tn:
            continue
        names = defined_names(cc)
        if names and all(declared_in(x, t) for x in names):
            continue
        out.append(cc)
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
        text = open(path, encoding='utf-8').read()
        decl, funcs = split(text)
        if not funcs:
            sys.exit(f'{path}: no func_XXXXXXXX function found')
        # r142: a static helper of the draft with no INCLUDE_ASM anywhere goes in with the declarations
        has_asm = lambda name: any(re.search(rf'INCLUDE_ASM\("[^"]+",\s*{name}\);', t) for t in files.values())
        helpers = [b for name, b in funcs.items() if not has_asm(name) and b.lstrip().startswith('static')]
        for name, body in funcs.items():
            if body in helpers:
                continue
            pat = re.compile(rf'INCLUDE_ASM\("[^"]+",\s*{name}\);')
            for f, t in files.items():
                if pat.search(t):
                    t = add_includes(t, includes(text))
                    new_decl = missing_decls(chunks(decl), t) + [h for h in helpers if h not in t]
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
