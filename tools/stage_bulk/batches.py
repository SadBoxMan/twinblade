r"""Work lists and helper batches for a matching round's fan-out (helper agents or an Ultracode workflow), any src/ area.
usage (repo root):
  batches.py list <list.json> [--src GLOB ...] [--m2c DIR ...] [--prior FILE]
      every INCLUDE_ASM function of the src files (default src/**/*.c) with its file, unit, address, size in
      instructions, calls, jump table, history (lines of docs/decomp_recipes.md and docs/handoff.md naming its address;
      a split stage's function only where its stage is named too), the state of its m2c draft (DIRs of cmp_par output:
      <func>.c and <func>.c.log) and earlier attempt files (FILE: one path per line, matched by address); also writes
      <list>.md for reading
  batches.py make <list.json> <S|M|L|X|all, e.g. SM> <batches.json> [--skip FILE] [--only FILE] [--prefix P]
      [--per S=4,M=2,L=1,X=1]   tiers S <= 32 insns, M 33-64, L 65-160, X > 160; functions of one unit, by address,
      grouped per agent; tags <prefix><n> (default: the tier letters, lower case)
  batches.py show <batches.json> <TAG>   one batch as a helper agent reads it (functions, history, templates)
From r216's mklist.py, mkbatches.py and batch.py (C:/tw/engine4/build/work/r216), generalised in r222."""
import glob, json, os, re, sys

TIERS = (('S', 32), ('M', 64), ('L', 160), ('X', 1 << 30))


def opt(args, name, many=False):
    out = []
    while name in args:
        i = args.index(name); out.append(args[i + 1]); del args[i:i + 2]
    return out if many else (out[-1] if out else None)


def m2c_state(f, dirs):
    best = None
    for d in dirs:
        p = os.path.join(d, f + '.c.log')
        if not os.path.exists(p):
            continue
        t = open(p, encoding='utf-8', errors='replace').read()
        first = t.splitlines()[0] if t else ''
        if 'MATCH' in first and 'differs' not in first:
            return f'{d}: m2c draft MATCHES'
        if 'differs' in first:
            n = t.count('!!')
            if best is None or n < best[0]:
                best = (n, f'{d}: m2c draft differs, {n} lines')
    if best:
        return best[1]
    if any(os.path.exists(os.path.join(d, f + '.c')) for d in dirs):
        return 'm2c draft does not compile (its control flow may still help)'
    return 'no m2c draft' if dirs else ''


def do_list(args):
    out = args.pop(0)
    srcs = opt(args, '--src', True) or ['src/**/*.c']
    dirs = opt(args, '--m2c', True)
    pf = opt(args, '--prior')
    prior = [l.strip() for l in open(pf, encoding='utf-8') if l.strip()] if pf else []
    docs = []
    for p in ('docs/decomp_recipes.md', 'docs/handoff.md'):
        if os.path.exists(p):
            docs += [(os.path.basename(p)[:-3], i + 1, l) for i, l in enumerate(open(p, encoding='utf-8').read().splitlines())]
    items = []
    for src in sorted({f for g in srcs for f in glob.glob(g, recursive=True)}):
        for m in re.finditer(r'^INCLUDE_ASM\("([^"]*)",\s*(\w+)\);', open(src, encoding='utf-8').read(), re.M):
            folder, f = m[1], m[2]
            s = os.path.join(folder, f + '.s')
            txt = open(s, encoding='utf-8').read() if os.path.exists(s) else ''
            mm = re.search(r'/\* [0-9A-F]+ ([0-9A-F]{8}) ', txt)
            a = mm[1] if mm else f[-8:].upper()
            st = re.match(r'func_(sc\d\d_\d\d\d)_', f)
            hist = []
            for doc, i, l in docs:
                u = l.upper()
                if a in u and (not st or st[1].upper() in u):
                    k = u.find(a)
                    hist.append(f'{doc}:{i}: ...{l[max(0, k - 150):k + 250]}...')
            specs = [p for p in prior if a in p.upper() and (not st or st[1] in p.lower())]
            items.append(dict(func=f, file=src.replace(os.sep, '/'), unit=os.path.basename(folder), addr=a,
                              size=len(re.findall(r'^\s*/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]+ \*/', txt, re.M)),
                              jal=len(re.findall(r'\bjal\b', txt)), jtbl='jtbl' in txt, asm=bool(txt),
                              hist=hist, specs=specs[:60], nspecs=len(specs), m2c=m2c_state(f, dirs)))
    items.sort(key=lambda d: d['size'])
    json.dump(items, open(out, 'w', encoding='utf-8', newline='\n'), indent=1)
    with open(out[:-5] + '.md' if out.endswith('.json') else out + '.md', 'w', encoding='utf-8', newline='\n') as o:
        for d in items:
            o.write('## %s  %s  %d insns  jal %d%s  hist %d  prior %d%s\n' % (
                d['func'], d['unit'], d['size'], d['jal'], '  JTBL' if d['jtbl'] else '', len(d['hist']), d['nspecs'],
                '' if d['asm'] else '  (NO .s: run make split)'))
            if d['m2c']:
                o.write(f'  - m2c: {d["m2c"]}\n')
            for x in d['hist']:
                o.write(f'  - {x}\n')
            if d['specs']:
                o.write('  - prior files (%d): %s\n' % (d['nspecs'], '; '.join(d['specs'][:8])))
            o.write('\n')
    tiers = {t: sum(1 for d in items if lo < d['size'] <= hi) for (t, hi), lo in zip(TIERS, (0, 32, 64, 160))}
    print(len(items), 'functions;', tiers, '; with history', sum(1 for d in items if d['hist']), '; jtbl',
          sum(1 for d in items if d['jtbl']), '; no .s', sum(1 for d in items if not d['asm']),
          '; insns total', sum(d['size'] for d in items))


def tier_of(n):
    return next(t for t, hi in TIERS if n <= hi)


def do_make(args):
    lst, tiers, out = args[:3]
    args = args[3:]
    skipf, onlyf, pre, per_s = opt(args, '--skip'), opt(args, '--only'), opt(args, '--prefix'), opt(args, '--per')
    skip = {l.strip() for l in open(skipf) if l.strip()} if skipf else set()
    only = {l.strip() for l in open(onlyf) if l.strip()} if onlyf else None
    per = {'S': 4, 'M': 2, 'L': 1, 'X': 1}
    if per_s:
        per.update({k: int(v) for k, v in (x.split('=') for x in per_s.split(','))})
    want = 'SMLX' if tiers == 'all' else tiers.upper()
    rows = []
    for d in json.load(open(lst, encoding='utf-8')):
        t = tier_of(d['size'])
        if d['func'] in skip or (only is not None and d['func'] not in only) or t not in want:
            continue
        rows.append(dict(d, tier=t, hist=[h[:420] for h in d['hist']][:6], templates=d['specs'][:6]))
    rows.sort(key=lambda r: (r['tier'], r['unit'], r['addr']))
    batches = []
    for t in 'SMLX':
        rs = [r for r in rows if r['tier'] == t]
        i = 0
        while i < len(rs):
            grp = [rs[i]]
            while len(grp) < per[t] and i + len(grp) < len(rs) and rs[i + len(grp)]['unit'] == grp[0]['unit']:
                grp.append(rs[i + len(grp)])
            batches.append(dict(tier=t, funcs=grp))
            i += len(grp)
    for i, b in enumerate(batches):
        b['tag'] = '%s%d' % (pre or ('e' if tiers == 'all' else tiers.lower()), i + 1)
    json.dump(batches, open(out, 'w', encoding='utf-8', newline='\n'), indent=1)
    print(len(rows), 'functions,', len(batches), 'batches:', {t: sum(1 for b in batches if b['tier'] == t) for t in 'SMLX'},
          'insns', sum(r['size'] for r in rows))


def do_show(args):
    path, tag = args
    for b in json.load(open(path, encoding='utf-8')):
        if b['tag'] != tag:
            continue
        n = len(b['funcs'])
        print('batch %s (%s tier, %d function%s)' % (tag, b['tier'], n, 's' if n > 1 else ''))
        for f in b['funcs']:
            print()
            print('* %s  unit %s (%s)  %d instructions, %d calls%s' % (
                f['func'], f['unit'], f['file'], f['size'], f['jal'], ', JUMP TABLE' if f['jtbl'] else ''))
            if f.get('m2c'):
                print('  m2c: ' + f['m2c'])
            if f.get('note'):
                print('  NOTE: ' + f['note'])
            for h in f['hist']:
                print('  history: ' + h)
            if f['templates']:
                print('  earlier attempts (READ ONLY; copy into your own folder if useful): ' + '; '.join(f['templates']))
            if not f['hist'] and not f['templates']:
                print('  history: none (never tried by hand: write it from the asm)')
        return
    print('no batch', tag, 'in', path)


if __name__ == '__main__':
    a = sys.argv[1:]
    {'list': do_list, 'make': do_make, 'show': do_show}[a.pop(0)](a)
