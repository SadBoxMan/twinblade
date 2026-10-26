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
# any top-level definition (stage engine functions carry names), K&R ones too: `f(a, b) s32 a; s16 b; {` (r192: their
# bodies stayed in the declaration text, and stage_clone copied them as "declarations" with the source's symbols)
FUNC = re.compile(r'^(?!typedef|struct|union|enum|extern)[A-Za-z_][\w \*]*?\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*'
                  r'(?:[A-Za-z_][^;{}()]*;\s*)*\{', re.M)


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
    """the draft's #include lines (split() leaves them out: GTE drafts need theirs, include/gte.h); a quoted header
    that is not under include/ (a scratch header of the draft's work folder) is dropped with a note, as it would not
    resolve from src/ (r192)"""
    keep = []
    for x in INCLUDE.findall(text):
        m = re.match(r'#include\s+"([^"]+)"', x)
        if m and not os.path.exists(os.path.join(ROOT, 'include', m[1])):
            print(f'put_func: dropped {x.strip()} (not a header under include/)')
            continue
        keep.append(x)
    return keep


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
        fp = re.search(r'\(\s*\*\s*(\w+)\s*(?:\[[^\]]*\])*\s*\)\s*\(', c)   # extern void (*D_X[10])(s32); (r192: was "void")
        m = fp or re.search(r'(\w+)\s*(?:\[[^\]]*\])*\s*(?:\([^;]*\))?\s*;$', c)
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
                or re.search(rf'\(\s*\*\s*{n}\s*(?:\[[^\]]*\])*\s*\)', t)
                or re.search(rf'\b(?:struct|union|enum)\s+{n}\s*\{{', t)
                or re.search(rf'^[A-Za-z_][^\n;{{}}#]*\b{n}\s*(?:\[[^\]]*\])*\s*(?:\([^;{{}}]*\))?\s*(?:=[^;]*)?;', t, re.M)
                or re.search(rf'^[A-Za-z_][^\n;{{}}]*\b{n}\s*\([^;{{}}]*\)\s*\{{', t, re.M))


def split_multi(c):
    """`extern s32 D_1, *D_2, D_3[4];` as one line per name (r192: the whole line was skipped when one name was already
    declared); anything else (an initialiser, a function, a typedef) is returned as it is"""
    m = re.fullmatch(r'\s*(extern\s+[\w\s]*?\w)\s+([^;(){}=]*,[^;(){}=]*);\s*', c)
    if not m:
        return [c]
    return [f'{m[1]} {d.strip()};' for d in m[2].split(',') if d.strip()]


def _func_name(c):
    """the function a prototype chunk declares (`extern s32 f(s32);`, `void *g();`), else None"""
    m = re.fullmatch(r'\s*(?:extern\s+)?[A-Za-z_][\w\s\*]*?\b(\w+)\s*\([^;{}]*\)\s*;\s*', c)
    return m[1] if m and not re.match(r'\s*typedef\b', c) else None


def missing_decls(cs, t):
    """the declaration chunks the file lacks (r142): comments do not count, and a chunk whose names the file already
    declares is skipped whole (no duplicate typedef, the file's own extern wins). r192: a multi-name extern line is
    split first; INCLUDE_ASM lines are never declarations; a function the file only declares or defines after its first
    INCLUDE_ASM (where the new declarations go) still gets its prototype (it was dropped: "undeclared", "used prior to
    declaration"), unless that later definition is static."""
    tn = norm(strip_comments(t))
    k = t.find('\nINCLUDE_ASM')
    head = t[:k] if k >= 0 else t
    hn = norm(strip_comments(head))
    out = []
    for c0 in cs:
        for c in split_multi(strip_comments(c0)):
            cc = '\n'.join(l for l in c.splitlines() if not l.lstrip().startswith('INCLUDE_ASM'))
            fn = _func_name(cc)
            # an identical extern or prototype only further down still goes up here (a duplicate is harmless)
            if not cc.strip() or norm(cc) in (hn if fn or cc.lstrip().startswith('extern') else tn):
                continue
            if fn:
                later_static = re.search(rf'^static\b[^;{{}}]*\b{fn}\s*\(', strip_comments(t[len(head):]), re.M)
                if declared_in(fn, head) or later_static:
                    continue
                if any(_func_name(x) == fn for x in out):
                    continue
                # defined further down: its own header is the prototype (the draft's guess could conflict with it);
                # a K&R definition gives `T f();`
                for d in FUNC.finditer(strip_comments(t[len(head):])):
                    if d[1] == fn:
                        h = d[0][:-1].rstrip()                          # the header without its `{`
                        p = h.index('(', h.index(fn))
                        # K&R (parameter declarations follow, or bare names): no prototype
                        if not h.endswith(')') or re.fullmatch(r'\(\s*\w+(?:\s*,\s*\w+)*\s*\)', h[p:]) and h[p:] != '(void)':
                            h = h[:p] + '()'
                        cc = ' '.join(h.split()) + ';'
                        break
                out.append(cc)
                continue
            names = defined_names(cc)
            if names and all(declared_in(x, t) for x in names):
                # an extern variable the file declares only further down: the file's own line, up here too
                if cc.lstrip().startswith('extern') and len(names) == 1 and not declared_in(next(iter(names)), head):
                    n = re.escape(next(iter(names)))
                    m = re.search(rf'^extern\b[^;{{}}()]*\b{n}\s*(?:\[[^\]]*\])*\s*;|^extern\b[^;{{}}]*\(\s*\*\s*{n}\b[^;{{}}]*;',
                                  strip_comments(t[len(head):]), re.M)
                    if m and m[0] not in out:
                        out.append(m[0])
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
    # r192: only the files that changed are written, and only they are put back (writing every src file back once
    # left src/stg/sc02_015.c empty when the revert was interrupted)
    changed = [f for f in files if files[f] != backup[f]]
    targets = sorted({target_of(f) for f in changed}) or [('check-main', 'SLUS_007.26: OK')]
    for f in changed:
        open(f, 'w', encoding='utf-8', newline='\n').write(files[f])
    ok, log = build(targets)
    if ok:
        print('OK: build still matches;', ', '.join(placed), 'now in C')
        return
    print('FAILED, reverting.')
    errs = [l for l in log.splitlines() if 'error' in l.lower() or 'incompatible' in l or 'warning' in l.lower() or '.c:' in l or 'undeclared' in l]
    errs = list(dict.fromkeys(errs))                   # a header's warning repeats once per file
    hard = [e for e in errs if 'warning' not in e]
    print('\n'.join(hard[:40]) or '\n'.join(errs[:40]) or log[-800:])
    if len(hard if hard else errs) > 40:
        print(f'... {len(hard if hard else errs) - 40} more lines')
    for f in changed:
        open(f, 'w', encoding='utf-8', newline='\n').write(backup[f])
    build(targets)
    sys.exit(1)


if __name__ == '__main__':
    main()
