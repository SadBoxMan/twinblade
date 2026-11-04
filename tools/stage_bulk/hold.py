r"""Put placed functions back to INCLUDE_ASM and keep their C: each definition is saved to <held>/<func>.c and replaced
by its INCLUDE_ASM line (the file's declarations stay), e.g. a placement tricks.py says needs a ruling.
usage: python tools/stage_bulk/hold.py <held_dir> <func> ...   (repo root; then make split, as the .s files return)
Put one back later with put_func.py or place_stage.py on that folder. Works in every src/ area (the EXE, overlays, the
stage engine, split stages, ability packages). From r216's build/work/r216/unheld.py, generalised in r222."""
import glob, os, re, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
import put_func as P
import stage_units as U


def asm_folder(path, text):
    """the INCLUDE_ASM folder of a src file: one already in it, else by its area (src/x.c -> asm/nonmatchings/x,
    src/stage/x.c -> asm/stage/nonmatchings/x, src/stg/<unit>.c -> asm/stg/<stage>/nonmatchings/<unit>,
    src/abil/x.c -> asm/abil/x/nonmatchings/x, src/ovlNN/x.c -> asm/ovlNN/nonmatchings/x)"""
    m = re.search(r'^INCLUDE_ASM\("([^"]+)",', text, re.M)
    if m:
        return m[1]
    rel = os.path.relpath(path, 'src').replace(os.sep, '/')
    parts, x = rel.split('/'), os.path.basename(rel)[:-2]
    if len(parts) == 1:
        return f'asm/nonmatchings/{x}'
    if parts[0] == 'stg':
        return f'asm/stg/{U.stage_of(x)}/nonmatchings/{x}'
    if parts[0] == 'abil':
        return f'asm/abil/{x}/nonmatchings/{x}'
    return f'asm/{parts[0]}/nonmatchings/{x}'


def main():
    held, names = sys.argv[1], sys.argv[2:]
    os.makedirs(held, exist_ok=True)
    files = glob.glob('src/**/*.c', recursive=True)
    for fn in names:
        for p in files:
            t = open(p, encoding='utf-8').read()
            if not re.search(rf'\b{fn}\s*\(', t):
                continue
            _, funcs = P.split(t)
            if fn not in funcs:
                continue
            open(os.path.join(held, fn + '.c'), 'w', encoding='utf-8', newline='\n').write(funcs[fn] + '\n')
            t = t.replace(funcs[fn], f'INCLUDE_ASM("{asm_folder(p, t)}", {fn});', 1)
            open(p, 'w', encoding='utf-8', newline='\n').write(t)
            print(fn, 'back to asm in', p.replace(os.sep, '/'))
            break
        else:
            print(fn, 'not found')


if __name__ == '__main__':
    main()
