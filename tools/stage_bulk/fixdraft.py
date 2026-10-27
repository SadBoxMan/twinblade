"""r151 (S1, folded in by r142): make m2c stage drafts that do not compile compile (error-driven, up to 6 rounds):
compile with cmp_func, read the errors by name, patch, repeat. Writes <out>/<f>.c and <f>.c.log (the last cmp output).
On the 2,553 never-compiled r147 round-1 drafts it took 0 to 2,390 compiling, 383 matching outright. Works in the
checkout it lives in (any worktree); run from PowerShell. jobs: compiles at a time, default 4 (CPU cap; at most 8).
usage: fixdraft.py <in_dir> <out_dir> [jobs=4]"""
import glob, os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))), 'tools'))
import stage_units as U  # r211: a stage -O0 unit's function compiles -O0
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
src_d, out_d = os.path.abspath(sys.argv[1]), os.path.abspath(sys.argv[2])
jobs = int(sys.argv[3]) if len(sys.argv) > 3 else 4
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
os.makedirs(out_d, exist_ok=True)
TY = r'(?:unsigned |signed )?(?:s8|u8|s16|u16|s32|u32|int|char|short|long|f32|void)'


def balanced(t, i):
    """t[i] == '(' -> index after its matching ')'."""
    dep = 0
    while i < len(t):
        if t[i] == '(': dep += 1
        elif t[i] == ')':
            dep -= 1
            if dep == 0: return i + 1
        i += 1
    return -1


def split_args(s):
    out, dep, cur = [], 0, ''
    for c in s:
        if c in '([': dep += 1
        elif c in ')]': dep -= 1
        if c == ',' and dep == 0: out.append(cur); cur = ''
        else: cur += c
    out.append(cur)
    return [x.strip() for x in out]


def m2c_field(t):
    while True:
        i = t.find('M2C_FIELD(')
        if i < 0: return t
        j = balanced(t, i + 9)
        if j < 0: return t
        a = split_args(t[i + 10:j - 1])
        if len(a) != 3: return t
        T = a[1].rstrip('* ').strip() if a[1].endswith('*') else a[1]
        t = t[:i] + 'AF(%s, %s, %s)' % (a[0], T, a[2]) + t[j:]


def fix(t, errs):
    o = t
    t = m2c_field(t)
    for e in errs:
        m = re.search(r"conflicting types for `(\w+)'", e)
        if m:
            n = m[1]
            ds = list(re.finditer(r'^(?:extern\s+)?[\w ]+?[\s\*]+%s\s*(?:\[[^\]]*\]|\([^;{]*\))?\s*;[ \t]*\n' % n, t, re.M))
            if len(ds) >= 2:
                if n.startswith('func_'):
                    keep = next((d for d in ds if not re.match(r'(?:extern\s+)?void\s', d[0])), ds[0])
                else:
                    ptr = [d for d in ds if '*' in d[0] or '[' in d[0]]
                    keep = ds[0] if re.search(r'&%s\b' % n, t) and not re.search(r'(?<!&)\b%s\[' % n, t) else (ptr[0] if ptr else ds[0])
                for d in reversed(ds):
                    if d is not keep: t = t[:d.start()] + t[d.end():]
            elif len(ds) == 1 and n.startswith('func_'):
                # the draft's definition clashes with its own extern: drop the extern
                t = t[:ds[0].start()] + t[ds[0].end():]
            continue
        m = re.search(r"`(\w+)' undeclared", e)
        if m:
            n = m[1]
            ms = re.match(r'sp([0-9A-F]+)$', n)
            if ms:
                X = int(ms[1], 16)
                best = None
                for d in re.finditer(r'^(\s+)(%s)\s+sp([0-9A-F]+)(?:\[(\d+)\])?;' % TY, t, re.M):
                    Y = int(d[3], 16)
                    if Y < X and (best is None or Y > int(best[3], 16)): best = d
                if best:
                    T = best[2]; Y = int(best[3], 16)
                    sz = {'s8': 1, 'u8': 1, 'char': 1, 's16': 2, 'u16': 2, 'short': 2}.get(T.split()[-1], 4)
                    if (X - Y) % sz == 0:
                        k = (X - Y) // sz
                        cnt = max(int(best[4] or 1), k + 1)
                        yn = 'sp%X' % Y
                        if not best[4]:
                            # scalar -> array: uses of spY become spY[0]
                            body_s = best.end()
                            body = re.sub(r'(?<![\w&])%s\b(?!\[)' % yn, yn + '[0]', t[body_s:])
                            body = re.sub(r'&%s\b(?!\[)' % yn, yn, body)
                            t = t[:best.start()] + '%s%s %s[%d];' % (best[1], T, yn, cnt) + body
                        else:
                            t = t[:best.start()] + '%s%s %s[%d];' % (best[1], T, yn, cnt) + t[best.end():]
                        t = re.sub(r'&%s\b' % n, '&%s[%d]' % (yn, k), t)
                        t = re.sub(r'(?<![\w&])%s\b' % n, '%s[%d]' % (yn, k), t)
                        continue
                # no neighbour: a plain s32 local
            if n.startswith('func_'):
                t = re.sub(r'(#include[^\n]*\n)', r'\1extern s32 %s();\n' % n, t, count=1)
            elif n.startswith('D_'):
                t = re.sub(r'(#include[^\n]*\n)', r'\1extern s32 %s;\n' % n, t, count=1)
            else:
                # first function body's opening brace that uses it
                u = re.search(r'\b%s\b' % n, t)
                b = t.rfind('{\n', 0, u.start()) if u else -1
                fb = [x.end() for x in re.finditer(r'^\w[^\n;]*\)\s*\{\n', t[:u.start()], re.M)] if u else []
                if fb:
                    p = fb[-1]; t = t[:p] + '    s32 %s;\n' % n + t[p:]
            continue
        if 'void value not ignored' in e or 'invalid use of void expression' in e:
            t2 = re.sub(r'^(extern\s+)?void\s+(func_\w+)\s*\(', r'\1s32 \2(', t, flags=re.M)
            if t2 == t:
                t2 = re.sub(r'\bvoid\s*\*\s*(?=\w)', 's32 *', t)
            t = t2; continue
        m = re.search(r"too (?:few|many) arguments to function `(\w+)'", e)
        if m:
            t = re.sub(r'^((?:extern\s+)?[\w ]+?[\s\*]+%s)\s*\([^;{]*\)\s*;' % m[1], r'\1();', t, flags=re.M)
            continue
        if "invalid type argument of `unary *'" in e:
            ints = set(re.findall(r'\b(?:s32|u32|int)\s+(\w+)\s*[,;)]', t))
            for n in ints:
                t = re.sub(r'(?<![\w\)\]])\*%s\b' % n, 'AF(%s, s32, 0)' % n, t)
            continue
        if 'arithmetic on pointer to an incomplete type' in e or 'has an incomplete type' in e:
            t = re.sub(r'\bvoid\s*\*(?=\s*\w)', 'u8 *', t); continue
        if 'subscripted value is neither array nor pointer' in e:
            for d in re.finditer(r'^extern\s+(\w+)\s+(D_\w+)\s*;', t, re.M):
                if re.search(r'\b%s\[' % d[2], t):
                    t = t.replace(d[0], 'extern %s %s[];' % (d[1], d[2]))
            continue
    return t


def cmp(path, fn):
    r = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'cmp_func.py'), path, fn, '2.7.2', U.opt_of(fn)],
                       capture_output=True, text=True, env=env, cwd=ROOT)
    return r.stdout + r.stderr


def one(f):
    fn = os.path.basename(f)[:-2]
    t = open(f, encoding='utf-8').read()
    dst = os.path.join(out_d, fn + '.c')
    out = ''
    for rnd in range(7):
        open(dst, 'w', encoding='utf-8', newline='\n').write(t)
        out = cmp(dst, fn)
        if 'instructions' in out.split('\n', 1)[0]: break
        errs = [l for l in out.splitlines() if re.search(r'\.i:\d+: (?!warning)', l)]
        t2 = fix(t, errs)
        if t2 == t: break
        t = t2
    open(dst + '.log', 'w', encoding='utf-8').write(out)
    first = out.split('\n', 1)[0]
    return 'match' if 'MATCH' in first and 'differs' not in first else ('compiled' if 'instructions' in first else 'error')


fs = [f for f in sorted(glob.glob(os.path.join(src_d, '*.c'))) if not os.path.basename(f).startswith('_')]
with ThreadPoolExecutor(jobs) as ex:
    res = list(ex.map(one, fs))
print(len(fs), 'drafts:', res.count('match'), 'match,', res.count('compiled'), 'compile and differ,',
      res.count('error'), 'still fail')
