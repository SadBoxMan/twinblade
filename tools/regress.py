#!/usr/bin/env python3
"""The regression suite: every byte-identical check in one PASS/FAIL table (r142, docs/test_infrastructure.md).

Builds each checked image with make (`make regress-targets` lists them: the EXE, the mode overlays and the village
stage, the 35 ability packages, the 139 other stage images), compares each against the original on the disc, and
checks that the originals themselves still have the hashes recorded in tools/regress_baseline.txt (disc/ is a shared
junction: a re-extracted or damaged file would otherwise turn every check into a check against the wrong thing).
Exit status 1 when anything fails. Run it from PowerShell (the compile chain hangs under Git Bash); it puts
C:\\msys64\\usr\\bin on PATH itself.

Usage: python -I tools/regress.py [AREA|NAME ...] [-j N] [--no-build] [--staged | --paths FILE ...]
       python -I tools/regress.py --record-baseline
  AREA    main, ovl, abil or stg (default: all four); NAME one image (ovl38, stage, ovl2c, sc03_005, ...)
  -j N    make jobs (default: the number of CPUs)
  --no-build        compare the binaries already in build/ (no make)
  --staged          the commit gate: only the images the staged files can change (git diff --cached, so it follows
                    GIT_INDEX_FILE: the temporary-index commit routine works too); nothing to check -> exit 0
  --paths F ...     the same for an explicit list of changed files
  --record-baseline write tools/regress_baseline.txt from the disc files as they are now
Results also go to build/regress/last.json; each area's make output to build/regress/<area>.log.
"""
import hashlib
import json
import os
import re
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MSYS = r'C:\msys64\usr\bin'
BASELINE = os.path.join(ROOT, 'tools', 'regress_baseline.txt')
OUT_DIR = os.path.join(ROOT, 'build', 'regress')
AREAS = ['main', 'ovl', 'abil', 'stg']

# Files that feed every image: the EXE's symbols are linked into all of them (build/exe_syms.ld), and the headers,
# the build rules and the compile chain are shared. A change to anything else outside these and the per-image
# sources below cannot change a checked binary (docs, pc/, the launcher, analysis tools).
GLOBAL_INPUTS = re.compile(r'^(include/|Makefile$|slus_007\.26\.yaml$|symbol_addrs[^/]*\.txt$|undefined_syms[^/]*\.txt$|'
                           r'reloc_addrs\.txt$|tools/(jtbl_relabel|exe_syms|gen_ability_ovls|gen_stage_cfgs|regress)\.py$|'
                           r'tools/regress_baseline\.txt$|src/[^/]+\.c$|src/[^/]+\.h$)')
BUILD_INPUT = re.compile(GLOBAL_INPUTS.pattern + r'|^(src|abil|stg)/|^[^/]+\.yaml$')


def env():
    e = dict(os.environ)
    if os.path.isdir(MSYS) and MSYS.lower() not in e.get('PATH', '').lower():
        e['PATH'] = MSYS + os.pathsep + e.get('PATH', '')
    return e


def make(args, log=None):
    """runs make in the repository; returns (exit status, output)"""
    exe = os.path.join(MSYS, 'make.exe') if os.path.exists(os.path.join(MSYS, 'make.exe')) else 'make'
    r = subprocess.run([exe] + args, cwd=ROOT, env=env(),
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL)
    out = r.stdout.decode('utf-8', 'replace')
    if log:
        os.makedirs(os.path.dirname(log), exist_ok=True)
        with open(log, 'w', encoding='utf-8') as f:
            f.write(out)
    return r.returncode, out


def targets():
    """[(area, name, built binary, original)] from `make regress-targets`"""
    rc, out = make(['-s', 'regress-targets'])
    if rc:
        sys.exit('make regress-targets failed:\n' + out)
    rows = []
    for line in out.splitlines():
        p = line.split()
        if len(p) == 4 and p[0] in AREAS:
            rows.append(tuple(p))
    return rows


def sha1(path):
    h = hashlib.sha1()
    with open(path, 'rb') as f:
        for block in iter(lambda: f.read(1 << 20), b''):
            h.update(block)
    return h.hexdigest()


def read_baseline():
    base = {}
    if os.path.exists(BASELINE):
        for line in open(BASELINE, encoding='utf-8'):
            p = line.split()
            if len(p) == 5 and not line.startswith('#'):
                base[p[4]] = (p[0], int(p[1]))
    return base


def record_baseline(rows):
    with open(BASELINE, 'w', encoding='utf-8', newline='\n') as f:
        f.write('# tools/regress.py --record-baseline: SHA-1 and size of every original a check compares against\n'
                '# sha1 size area name original\n')
        for area, name, _, ref in rows:
            f.write(f'{sha1(os.path.join(ROOT, ref))} {os.path.getsize(os.path.join(ROOT, ref))} {area} {name} {ref}\n')
    print(f'wrote {os.path.relpath(BASELINE, ROOT)}: {len(rows)} originals')


def select_for_paths(rows, paths):
    """the images a change to `paths` can affect; None = nothing to check"""
    names = {r[1] for r in rows}
    want = set()
    for p in paths:
        p = p.replace('\\', '/')
        if GLOBAL_INPUTS.match(p):
            return set(names)
        m = (re.match(r'^src/(abil|stg)/(\w+)\.c$', p) or re.match(r'^(abil|stg)/(?:symbol_addrs_)?(\w+)\.(?:yaml|txt)$', p))
        if m:
            want.add(m.group(2).lower())
            continue
        m = re.match(r'^src/(\w+)/', p) or re.match(r'^(\w+)\.yaml$', p)
        if m and m.group(1) in names:
            want.add(m.group(1))
    return want or None


def failure_lines(text, limit=12):
    keep = [l for l in text.splitlines() if re.search(r'error|Error|FAILED|No rule|undefined reference', l)]
    return keep[:limit]


def main():
    argv = sys.argv[1:]
    jobs = os.cpu_count() or 4
    build = True
    paths = None
    picks = []
    i = 0
    while i < len(argv):
        a = argv[i]
        if a == '-j':
            jobs = int(argv[i + 1]); i += 1
        elif a.startswith('-j') and a[2:].isdigit():
            jobs = int(a[2:])
        elif a == '--no-build':
            build = False
        elif a == '--staged':
            r = subprocess.run(['git', 'diff', '--cached', '--name-only', '--no-renames'], cwd=ROOT,
                               capture_output=True, text=True)
            paths = r.stdout.split()
        elif a == '--paths':
            paths = argv[i + 1:]; i = len(argv)
        elif a == '--record-baseline':
            record_baseline(targets())
            return 0
        elif a in ('-h', '--help'):
            print(__doc__); return 0
        else:
            picks.append(a.lower())
        i += 1

    t_all = time.time()
    if paths is not None and not any(BUILD_INPUT.match(p.replace('\\', '/')) for p in paths):
        print('regress: no staged file can change a checked binary (docs, pc/, tools): nothing to check')
        return 0
    if not os.path.isdir(os.path.join(ROOT, 'asm', 'stg')):
        sys.exit('regress: asm/ is missing or incomplete (it is gitignored): run `make split` in this checkout first')
    rows = targets()
    if paths is not None:
        want = select_for_paths(rows, paths)
        if not want:
            print('regress: no staged file can change a checked binary (docs, pc/, tools): nothing to check')
            return 0
        rows = [r for r in rows if r[1] in want]
    elif picks:
        bad = [p for p in picks if p not in AREAS and p not in {r[1] for r in rows}]
        if bad:
            sys.exit(f'regress: unknown area or image: {" ".join(bad)} (areas: {" ".join(AREAS)})')
        rows = [r for r in rows if r[0] in picks or r[1] in picks]

    base = read_baseline()
    results = []          # (area, name, status, detail)
    timings = {}
    for area in AREAS:
        mine = [r for r in rows if r[0] == area]
        if not mine:
            continue
        t0 = time.time()
        if build:
            # a binary make could not rebuild must not pass on its old copy: remove it, so a failed compile or link
            # leaves it missing (only the objcopy step is redone when everything else is up to date)
            for _, _, out, _ in mine:
                try:
                    os.remove(os.path.join(ROOT, out))
                except FileNotFoundError:
                    pass
            args = ['-k', f'-j{jobs}']
            if area == 'stg' and len(mine) < 139:
                args.append('STG=' + ' '.join(r[1] for r in mine))
            make(args + [r[2] for r in mine], os.path.join(OUT_DIR, area + '.log'))
        timings[area] = time.time() - t0
        for _, name, out, ref in mine:
            outp, refp = os.path.join(ROOT, out), os.path.join(ROOT, ref)
            if not os.path.exists(refp):
                results.append((area, name, 'FAIL', f'original missing: {ref}'))
                continue
            ref_h = sha1(refp)
            b = base.get(ref)
            if b and b[0] != ref_h:
                results.append((area, name, 'FAIL', f'original {ref} changed since the baseline ({b[0][:12]} -> {ref_h[:12]})'))
                continue
            if not os.path.exists(outp):
                results.append((area, name, 'FAIL', f'not built (see build/regress/{area}.log)'))
                continue
            out_h = sha1(outp)
            if out_h != ref_h:
                results.append((area, name, 'FAIL', f'differs: {out} {os.path.getsize(outp)} bytes vs {os.path.getsize(refp)}'))
            else:
                results.append((area, name, 'PASS', '' if b else 'no baseline entry'))

    total = time.time() - t_all
    print(f'{"area":6} {"images":>6} {"pass":>5} {"fail":>5} {"time":>7}')
    for area in AREAS:
        rs = [r for r in results if r[0] == area]
        if rs:
            p = sum(1 for r in rs if r[2] == 'PASS')
            print(f'{area:6} {len(rs):6} {p:5} {len(rs) - p:5} {timings.get(area, 0):6.1f}s  {"PASS" if p == len(rs) else "FAIL"}')
    fails = [r for r in results if r[2] == 'FAIL']
    passed = len(results) - len(fails)
    print(f'{"total":6} {len(results):6} {passed:5} {len(fails):5} {total:6.1f}s  {"PASS" if not fails else "FAIL"}')
    for area, name, _, detail in fails:
        print(f'  FAIL {area} {name}: {detail}')
    for area in sorted({f[0] for f in fails}):
        lp = os.path.join(OUT_DIR, area + '.log')
        if os.path.exists(lp):
            for l in failure_lines(open(lp, encoding='utf-8').read()):
                print(f'    {area}.log: {l[:200]}')
    missing = sum(1 for r in results if r[3] == 'no baseline entry')
    if missing:
        print(f'note: {missing} originals have no baseline entry (tools/regress.py --record-baseline after checking them)')
    os.makedirs(OUT_DIR, exist_ok=True)
    with open(os.path.join(OUT_DIR, 'last.json'), 'w', encoding='utf-8') as f:
        json.dump({'time': time.strftime('%Y-%m-%d %H:%M:%S'), 'seconds': round(total, 1), 'timings': timings,
                   'results': results}, f, indent=1)
    return 1 if fails else 0


if __name__ == '__main__':
    sys.exit(main())
