#!/usr/bin/env python3
"""Matches small straight-line functions automatically.

For each unmatched function (an INCLUDE_ASM in src/) whose assembly has no branches, translates the instructions to C by tracking what every register holds
(globals via lui/%hi + %lo, arguments, constants, field accesses), compiles the candidate with the original compiler chain (tools/cmp_func.py) and keeps it only if
the result is instruction-for-instruction identical. Functions that call one other function with simple arguments are handled too (wrappers).

Usage: auto_match.py scan [max_bytes=0x60]   try every candidate function; writes build/auto/results.json and the C files under build/auto/
       auto_match.py apply                    patch src/*.c with the matches, run `make check-main`, and revert everything if the build does not match
       --abil (with either)                   the ability packages instead: src/abil/*.c, asm/abil/, `make check-abil`
       --area stage|stg|ovl [--image NAME]    (r222) the shared stage engine and the village (src/stage), the split stage
                                              images (src/stg; NAME e.g. sc07_002) or the mode overlays (src/ovl3x;
                                              NAME e.g. ovl38); results in build/auto_<area>[_<NAME>]/, each candidate
                                              compared within its own image (TWINBLADE_OVL), and apply checks the
                                              images it changed (check-stage, check-<stage>, check-<ovl>)
"""
import glob
import json
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import stage_units  # noqa: E402  r211: a stage -O0 unit's function compiles -O0

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ABIL = '--abil' in sys.argv
if ABIL:
    sys.argv.remove('--abil')
AUTO = os.path.join(ROOT, 'build', 'auto_abil' if ABIL else 'auto')
SRC_GLOB = os.path.join(ROOT, 'src', 'abil', '*.c') if ABIL else os.path.join(ROOT, 'src', '*.c')
ASM_GLOB = (os.path.join(ROOT, 'asm', 'abil', '*', 'nonmatchings', '*', '*.s') if ABIL else
            os.path.join(ROOT, 'asm', 'nonmatchings', '*', '*.s'))
CHECK = ('check-abil', 35) if ABIL else ('check-main', 1)     # the make target and its number of OK lines
# r222: the other images. AREA None keeps the EXE (or --abil) set-up above as it was
AREA = IMAGE = None
if '--area' in sys.argv:
    i = sys.argv.index('--area'); AREA = sys.argv[i + 1]; del sys.argv[i:i + 2]
    if '--image' in sys.argv:
        i = sys.argv.index('--image'); IMAGE = sys.argv[i + 1].lower(); del sys.argv[i:i + 2]
    if AREA not in ('stage', 'stg', 'ovl') or ABIL:
        sys.exit('auto_match: --area takes stage, stg or ovl (and not with --abil)')
    AUTO = os.path.join(ROOT, 'build', f'auto_{AREA}' + (f'_{IMAGE}' if IMAGE else ''))
    if AREA == 'stage':
        SRC_GLOB = os.path.join(ROOT, 'src', 'stage', '*.c')
        ASM_GLOB = os.path.join(ROOT, 'asm', 'stage', 'nonmatchings', '*', '*.s')
    elif AREA == 'stg':
        SRC_GLOB = os.path.join(ROOT, 'src', 'stg', f'{IMAGE}*.c' if IMAGE else '*.c')
        ASM_GLOB = os.path.join(ROOT, 'asm', 'stg', IMAGE or '*', 'nonmatchings', '*', '*.s')
    else:
        SRC_GLOB = os.path.join(ROOT, 'src', IMAGE or 'ovl3?', '*.c')
        ASM_GLOB = os.path.join(ROOT, 'asm', IMAGE or 'ovl3?', 'nonmatchings', '*', '*.s')
    CHECK = None                                                # per changed file: put_func.target_of


def image_of(asm_path):
    """r222: the asm/ subfolder cmp_func must search (TWINBLADE_OVL) for a function of an --area image: the mode
    overlays share a load address, and the engine's names can repeat an overlay's"""
    rel = os.path.relpath(asm_path, os.path.join(ROOT, 'asm')).replace(os.sep, '/').split('/')
    return '/'.join(rel[:2]) if rel[0] == 'stg' else rel[0]
LOAD = {'lw': 's32', 'lh': 's16', 'lhu': 'u16', 'lb': 's8', 'lbu': 'u8'}
STORE = {'sw': 's32', 'sh': 's16', 'sb': 's8'}
SIZE = {'s32': 4, 'u32': 4, 's16': 2, 'u16': 2, 's8': 1, 'u8': 1}
ARGS = ['a0', 'a1', 'a2', 'a3']
NAMES = {'a0': 'a', 'a1': 'b', 'a2': 'c', 'a3': 'd'}


def parse_asm(path):
    out = []
    for line in open(path, encoding='utf-8'):
        line = re.sub(r'/\*.*?\*/', '', line).strip()
        if not line or line.startswith(('nonmatching', 'glabel', 'endlabel', '.')) or line.endswith(':'):
            continue
        m = re.match(r'(\w+)\s*(.*)', line)
        ops = [o.strip() for o in re.split(r',(?![^(]*\))', m.group(2))] if m.group(2) else []
        out.append((m.group(1), ops))
    return out


def reg(s):
    return s.lstrip('$')


def imm(s):
    s = s.strip()
    m = re.fullmatch(r'\((0x[0-9A-Fa-f]+) >> 16\)', s)
    if m:
        return ('hi16', int(m.group(1), 16) >> 16)
    m = re.fullmatch(r'\((0x[0-9A-Fa-f]+) & 0xFFFF\)', s)
    if m:
        return ('lo16', int(m.group(1), 16) & 0xFFFF)
    return int(s, 0)


class Fail(Exception):
    pass


def translate(ins):
    """-> dict(stmts, ret, ret_type, globals {sym: type}, calls, args used, argkind) or raises Fail"""
    reg_val = {'zero': ('const', 0)}
    stmts = []
    globs = {}
    used_args = {}
    calls = []
    last_v0_store_only = None

    def val(r):
        r = reg(r)
        if r == 'zero':
            return ('const', 0)
        if r in reg_val:
            return reg_val[r]
        if r in ARGS:
            used_args.setdefault(r, 'int')
            return ('arg', r)
        raise Fail('uses uninitialised ' + r)

    def text(v, allow_call=False):
        k = v[0]
        if k == 'const':
            return str(v[1]) if abs(v[1]) < 10 else hex(v[1] & 0xFFFFFFFF) if v[1] < 0 else hex(v[1])
        if k == 'arg':
            return NAMES[v[1]]
        if k == 'expr':
            return v[1]
        if k == 'callres':
            if not allow_call:
                raise Fail('call result used inside an expression')
            st = stmts[v[1]]
            return f'{st[1]}({', '.join(st[2])})'
        raise Fail('cannot use ' + k)

    ins = list(ins)
    for i in range(len(ins) - 1):                                 # a delay slot runs before the call/return: put it first
        if ins[i][0] == 'jal':
            ins[i], ins[i + 1] = ins[i + 1], ins[i]
    for n_ins, (op, o) in enumerate(ins):
        if op in ('nop', 'jr'):
            continue
        if op == 'addiu' and reg(o[0]) == 'sp' and reg(o[1]) == 'sp':
            continue                                              # stack frame of a wrapper
        if op in ('sw', 'lw') and reg(o[0]) == 'ra':
            continue
        if op == 'jal':
            if calls:
                raise Fail('two calls')
            known = [i for i, r in enumerate(ARGS) if r in reg_val]
            last = max(known) if known else -1
            args = [text(val('$' + ARGS[i])) for i in range(last + 1)]
            calls.append((o[0], args))
            stmts.append(('call', o[0], args))
            reg_val['v0'] = ('callres', len(stmts) - 1)
            continue
        if op in ('slt', 'sltu', 'slti', 'sltiu'):
            rt = reg(o[0])
            a = val(o[1])
            b = val(o[2]) if op in ('slt', 'sltu') else ('const', imm(o[2]))
            if op in ('sltu', 'sltiu'):
                reg_val[rt] = ('expr', f'((u32){text(a)} < (u32){text(b)})')
            else:
                reg_val[rt] = ('expr', f'({text(a)} < {text(b)})')
            continue
        if op == 'lui':
            i = imm(o[1]) if not o[1].startswith('%hi') else None
            if o[1].startswith('%hi('):
                reg_val[reg(o[0])] = ('hi', re.match(r'%hi\((\w+)\)', o[1]).group(1))
            elif isinstance(i, tuple) and i[0] == 'hi16':
                reg_val[reg(o[0])] = ('const', i[1] << 16)
            else:
                reg_val[reg(o[0])] = ('const', int(o[1], 0) << 16)
        elif op in ('addiu', 'ori', 'andi', 'addu', 'subu', 'and', 'or', 'xor', 'sll', 'srl', 'sra'):
            rt = reg(o[0])
            if op in ('addiu', 'ori', 'andi'):
                a = val(o[1])
                b = imm(o[2]) if not o[2].startswith('%lo') else None
                if o[2].startswith('%lo'):
                    # address of a global: lui+addiu %lo
                    if a[0] != 'hi':
                        raise Fail('addiu %lo without hi')
                    reg_val[rt] = ('expr', '&' + a[1], 'addr')
                    globs.setdefault(a[1], None)
                    continue
                if isinstance(b, tuple):
                    b = b[1]
                if a[0] == 'const':
                    v = {'addiu': a[1] + b, 'ori': a[1] | b, 'andi': a[1] & b}[op]
                    reg_val[rt] = ('const', v)
                else:
                    sym = {'addiu': '+', 'ori': '|', 'andi': '&'}[op]
                    reg_val[rt] = ('expr', f'({text(a)} {sym} {hex(b) if b >= 0 else b})')
            elif op in ('sll', 'srl', 'sra'):
                a, sa = val(o[1]), int(o[2], 0)
                if a[0] == 'const':
                    v = (a[1] << sa) if op == 'sll' else (a[1] & 0xFFFFFFFF) >> sa
                    reg_val[rt] = ('const', v)
                else:
                    inner = text(a)
                    if sa in (16, 24) and op in ('sra', 'srl') and inner.endswith(f' << {sa})') and inner.startswith('('):
                        e = inner[1:-len(f' << {sa})')]                        # (E << 16) >> 16 is a sign or zero extension of E
                        cast = {('sra', 16): 's16', ('srl', 16): 'u16', ('sra', 24): 's8', ('srl', 24): 'u8'}[(op, sa)]
                        reg_val[rt] = ('expr', f'({cast})({e})')
                    elif op == 'srl':
                        reg_val[rt] = ('expr', f'((u32){inner} >> {sa})')
                    elif op == 'sra':
                        reg_val[rt] = ('expr', f'((s32){inner} >> {sa})')
                    else:
                        reg_val[rt] = ('expr', f'({inner} << {sa})')
            else:
                a, b = val(o[1]), val(o[2])
                sym = {'addu': '+', 'subu': '-', 'and': '&', 'or': '|', 'xor': '^'}[op]
                if op == 'addu' and ((a[0] == 'hi' and b[0] != 'const') or (b[0] == 'hi' and a[0] != 'const')):
                    h, ix = (a, b) if a[0] == 'hi' else (b, a)                 # lui %hi(SYM); addu idx: an element of a global array
                    reg_val[rt] = ('hiidx', h[1], text(ix))
                    continue
                if a[0] == 'const' and b[0] == 'const':
                    reg_val[rt] = ('const', {'+': a[1] + b[1], '-': a[1] - b[1], '&': a[1] & b[1], '|': a[1] | b[1], '^': a[1] ^ b[1]}[sym])
                elif reg(o[2]) == 'zero':
                    reg_val[rt] = a
                elif reg(o[1]) == 'zero':
                    reg_val[rt] = b
                else:
                    reg_val[rt] = ('expr', f'({text(a)} {sym} {text(b)})')
        elif op in LOAD or op in STORE:
            rt = reg(o[0])
            m = re.fullmatch(r'(%lo\((\w+)\)|-?0[xX][0-9a-fA-F]+|-?\d+)\((\$\w+)\)', o[1])
            if not m:
                raise Fail('addressing ' + o[1])
            base = val(m.group(3))
            ty = LOAD.get(op) or STORE[op]
            if op == 'lhu':
                ty = 'u16'
            if op == 'lbu':
                ty = 'u8'
            if m.group(2) and base[0] == 'hiidx' and base[1] == m.group(2):      # SYM[idx]
                sym, ix = base[1], base[2]
                m2 = re.fullmatch(r'\((.*) << (\d)\)', ix)
                if m2 and SIZE[ty] == 1 << int(m2.group(2)):
                    ix = m2.group(1)
                elif SIZE[ty] != 1:
                    raise Fail('array index scale')
                if globs.get(sym) not in (None, 'arr:' + ty):
                    raise Fail('global used with two types')
                globs[sym] = 'arr:' + ty
                target = f'{sym}[{ix}]'
            elif m.group(2):                                       # global through %hi/%lo
                if base[0] != 'hi' or base[1] != m.group(2):
                    raise Fail('hi/lo mismatch')
                sym = m.group(2)
                if globs.get(sym) not in (None, ty):
                    raise Fail('global used with two types')
                globs[sym] = ty
                target = sym
            else:
                off = int(m.group(1), 0)
                if base[0] == 'arg':
                    used_args[base[1]] = 'ptr'
                    target = f'*({ty} *)({NAMES[base[1]]} + {hex(off)})' if off else f'*({ty} *){NAMES[base[1]]}'
                elif base[0] == 'expr':
                    target = f'*({ty} *)((u8 *){base[1]} + {hex(off)})' if off else f'*({ty} *){base[1]}'
                else:
                    raise Fail('base ' + base[0])
            if op in LOAD:
                reg_val[rt] = ('expr', target)
            else:
                stmts.append(f'{target} = {text(val(o[0]))};')
        else:
            raise Fail('instruction ' + op)
    v0 = reg_val.get('v0')
    return dict(stmts=stmts, v0=v0, globs=globs, used_args=used_args, text=text, calls=calls)


def build_c(tr, ret_type, name, arg_types):
    t = tr['text']
    args = []
    for r in ARGS:
        if r in tr['used_args']:
            args.append(r)
    # arguments are consecutive from a0
    n = max([ARGS.index(r) for r in args] + [-1]) + 1
    params = []
    for i in range(n):
        r = ARGS[i]
        kind = tr['used_args'].get(r, 'int')
        params.append(('u8 *' if kind == 'ptr' else arg_types + ' ') + NAMES[r])
    decl = ''
    for sym, ty in tr['globs'].items():
        decl += f'extern {ty[4:]} {sym}[];\n' if (ty or '').startswith('arr:') else f'extern {ty or "s32"} {sym};\n'
    v = tr['v0']
    ret_call = ret_type != 'void' and v is not None and v[0] == 'callres'
    for fn, _ in tr['calls']:
        decl += f'extern {"s32" if ret_call else "void"} {fn}();\n'
    body = ''
    for i, s in enumerate(tr['stmts']):
        if isinstance(s, tuple):
            if ret_call and v[1] == i:
                continue                                      # the call is the returned value
            body += f'    {s[1]}({", ".join(s[2])});\n'
        else:
            body += '    ' + s + '\n'
    if ret_type != 'void':
        if v is None:
            raise Fail('no return value')
        e = t(v, True)
        if ret_type in ('s16', 'u16', 's8', 'u8') and e.startswith(f'({ret_type})(') and e.endswith(')'):
            e = e[len(ret_type) + 3:-1]                       # the return type does the extension
        body += f'    return {e};\n'
    return '#include "common.h"\n' + decl + f'{ret_type} {name}({", ".join(params) if params else "void"}) {{\n{body}}}\n'


def try_function(name, asm_path):
    ins = parse_asm(asm_path)
    if any(op in ('jalr', 'j', 'beq', 'bne', 'beqz', 'bnez', 'bltz', 'bgez', 'blez', 'bgtz', 'mult', 'multu', 'div', 'divu', 'mflo', 'mfhi', 'bgezal', 'bltzal') for op, _ in ins):
        return None, 'has a branch, indirect call or multiply/divide'
    try:
        tr = translate(ins)
    except Fail as e:
        return None, str(e)
    except Exception as e:
        return None, 'translator: ' + str(e)
    last_ret = tr['v0']
    candidates = []
    # a return value is likely when the last thing computed is in v0 and no store followed it; try void first when there are statements that use v0 as a source only
    order = ['void', 's32', 'u32', 's16', 'u16', 's8', 'u8'] if tr['stmts'] else ['s32', 'u32', 's16', 'u16', 's8', 'u8', 'void']
    for ret in order:
        for at in ('s32', 'u32'):
            try:
                c = build_c(tr, ret, name, at)
            except Fail:
                continue
            if c in candidates:
                continue
            candidates.append(c)
            os.makedirs(AUTO, exist_ok=True)
            p = os.path.join(AUTO, name + '.c')
            open(p, 'w').write(c)
            env = dict(os.environ, TWINBLADE_OVL=image_of(asm_path)) if AREA else None
            r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'cmp_func.py'), p, name, '2.7.2', stage_units.opt_of(name)], capture_output=True, text=True, cwd=ROOT, env=env)
            if 'MATCH' in r.stdout and 'MISMATCH' not in r.stdout and 'DIFFER' not in r.stdout.upper().replace('MATCH', ''):
                return c, 'ok'
    return None, 'no variant matched'


def unmatched():
    src = ''.join(open(f, encoding='utf-8').read() for f in glob.glob(SRC_GLOB))
    # r222 (LuciDin's yes): INCLUDE_ASM takes two arguments; the three-argument pattern used before matched only across
    # line breaks and saw 59 of the EXE's 153 (the same candidates under the default 0x60 limit)
    inc = set(re.findall(r'^INCLUDE_ASM\("[^"]*",\s*(\w+)\);', src, re.M))
    rows = []
    for f in glob.glob(ASM_GLOB):
        m = re.match(r'nonmatching (\w+), 0x([0-9A-Fa-f]+)', open(f, encoding='utf-8').readline())
        if m and m.group(1) in inc:
            rows.append((int(m.group(2), 16), m.group(1), f))
    return sorted(rows)


def scan(max_bytes):
    results = {}
    reasons = {}
    for size, name, path in unmatched():
        if size > max_bytes:
            break
        c, why = try_function(name, path)
        if c:
            results[name] = dict(size=size, folder=os.path.relpath(os.path.dirname(path), ROOT).replace(os.sep, '/'), c=c)
            print('MATCH', name, hex(size), flush=True)
        else:
            reasons[name] = why
    os.makedirs(AUTO, exist_ok=True)
    json.dump(dict(matches=results, failed=reasons), open(os.path.join(AUTO, 'results.json'), 'w'), indent=1)
    print(len(results), 'matched;', len(reasons), 'not matched. Reasons:', {r: sum(1 for x in reasons.values() if x == r) for r in set(reasons.values())})


def patch(res, names, originals):
    """the source files with the functions in `names` replaced by their C"""
    files = dict(originals)
    headers = ''.join(open(h, encoding='utf-8').read() for h in glob.glob(os.path.join(ROOT, 'include', '*.h')))
    for name in names:
        r = res[name]
        folder = r.get('folder') or 'asm/nonmatchings/' + r['module']     # results written before --abil
        pat = re.compile(rf'INCLUDE_ASM\("{re.escape(folder)}",\s*{name}\);')
        for f, t in files.items():
            if pat.search(t):
                lines = r['c'].splitlines()
                body = '\n'.join(l for l in lines if not l.startswith('#include') and not l.startswith('extern'))
                for e in [l for l in lines if l.startswith('extern')]:
                    sym = re.search(r'(\w+)(\[\])?(\(\))?;', e).group(1)
                    is_fn = e.rstrip().endswith('();')
                    declared = re.search(rf'\bextern\b[^;]*\b{sym}\b', t) or (is_fn and (re.search(rf'\b{sym}\s*\(', headers) or re.search(rf'\b{sym}\s*\(', t)))
                    if not declared:
                        t = t.replace('\nINCLUDE_ASM', '\n' + e + '\nINCLUDE_ASM', 1)
                files[f] = pat.sub(lambda m: body.strip(), t, count=1)
                break
    return files


ORIGINALS = {}   # r222: apply()'s sources as they were, so --area checks only the images it changed


def build_ok(files):
    """write the files, run the byte-identical check; returns (matches, compiler errors)"""
    for f, t in files.items():
        open(f, 'w', encoding='utf-8', newline='\n').write(t)
    env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
    if CHECK is None:                                               # r222: --area: the images of the changed files
        import put_func
        targets = sorted({put_func.target_of(f) for f, t in files.items() if t != ORIGINALS.get(f)})
        if not targets:
            return True, ''
        r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe'] + [x for x, _ in targets], capture_output=True, text=True, cwd=ROOT, env=env)
        return r.returncode == 0 and all(ok in r.stdout for _, ok in targets), r.stdout + r.stderr
    r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe', CHECK[0]], capture_output=True, text=True, cwd=ROOT, env=env)
    return r.returncode == 0 and r.stdout.count(': OK') == CHECK[1], r.stdout + r.stderr


def apply():
    res = json.load(open(os.path.join(AUTO, 'results.json')))['matches']
    originals = {f: open(f, encoding='utf-8').read() for f in glob.glob(SRC_GLOB)}
    ORIGINALS.update(originals)
    names = list(res)
    dropped = {}
    for attempt in range(12):                                       # 1. drop the functions the compiler rejects in the real source
        ok, log = build_ok(patch(res, names, originals))
        if ok:
            break
        bad = set(re.findall(r"In function `(\w+)'", log)) & set(names)
        if not bad:
            break
        for b in bad:
            dropped[b] = 'compile error in the source'
        names = [n for n in names if n not in bad]
    else:
        ok = False
    if not ok and names:                                            # 2. compiled but the bytes differ: bisect for the culprits
        def good(subset):
            return build_ok(patch(res, subset, originals))[0]
        pending, keep = [names], []
        while pending:
            group = pending.pop()
            if good(keep + group):
                keep += group
            elif len(group) == 1:
                dropped[group[0]] = 'changes the compiled bytes in the source'
            else:
                mid = len(group) // 2
                pending += [group[mid:], group[:mid]]
        names = keep
        ok = good(names)
    final_ok, _ = build_ok(patch(res, names, originals))
    print('build matches' if final_ok else 'BUILD DOES NOT MATCH', '; applied', len(names), 'functions; dropped', len(dropped))
    for k, v in dropped.items():
        print('  dropped', k, '-', v)
    if not final_ok:
        build_ok(originals)
        print('reverted to the original sources')

if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == 'apply':
        apply()
    else:
        scan(int(sys.argv[2], 0) if len(sys.argv) > 2 else 0x60)

