"""keep only the MATCHing functions of each batch file (per its .log), with the declarations they use.
usage: keep_matched.py <in_dir> <out_dir>"""
import glob, os, re, sys
sys.path.insert(0, 'tools')
import put_func as P
ind, outd = sys.argv[1], sys.argv[2]
os.makedirs(outd, exist_ok=True)
n = 0
for f in sorted(glob.glob(os.path.join(ind, '*.c'))):
    log = open(f + '.log', encoding='utf-8-sig', errors='replace').read()
    ok = set(re.findall(r'^(\w+) gcc-2\.7\.2 -O\d: MATCH', log, re.M))
    text = open(f, encoding='utf-8').read()
    decl, funcs = P.split(text)
    keep = {k: v for k, v in funcs.items() if k in ok}
    if not keep:
        continue
    body = '\n\n'.join(keep.values())
    words = set(re.findall(r'\w+', body))
    ds = [c for c in P.chunks(decl) if not (s := set(re.findall(r'\b(?:func|D|jtbl)_\w+', c))) or s & words]
    # a kept function's own prototype is not needed when it is defined in the same batch before use; keep it anyway
    inc = ''.join(l + '\n' for l in text.splitlines() if l.startswith('#include'))
    open(os.path.join(outd, os.path.basename(f)), 'w', newline='\n').write(inc + '\n' + '\n'.join(ds) + '\n\n' + body + '\n')
    n += len(keep)
print(n, 'matched functions kept')
