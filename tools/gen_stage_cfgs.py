#!/usr/bin/env python3
"""Write the split configs of the stage images other than the village (r143, docs/decomp_pilot.md).

Every stage image (disc/pac4/SCxx_yyy.bin, loaded at 0x80128158) is the shared stage engine (0x80128158-0x8017BE9C,
the same code as SC03_001's apart from relocated data addresses, docs/decomp_census.md), the stage's own code from
0x8017BE9C to the first zero word after a function's return, then data. The engine is matched once, in the village
(stage.yaml, src/stage/), so here it is a `bin` piece: only the stage's own code is split.

All stages load at one address, so splat names every symbol with the stage (`symbol_name_format`:
func_sc02_031_8017BEA4, D_sc02_031_80185000), like the ability packages; the engine's functions keep their plain
names (func_80147078, SetActionHandler), read from the village's ELF (build/stage/stage.elf: run `make check-stage`
first) into stg/symbol_addrs_engine.txt, and so do the EXE's symbols (a first splat pass lists them, as for the
packages). splat lists all of them in undefined_*_auto.txt, which the link reads.

Writes, for every stage named (default: every stage in stg/ already):
  stg/<name>.yaml                 the splat config (asm/stg/<name>/, src/stg/<name>.c, build/stg/<name>/; r209: a stage
                                  with an -O0 run also <name>_o0.c and <name>_post.c, tools/stage_units.py)
  stg/symbol_addrs_<name>.txt     the names given by hand (kept), then the outside symbols
  stg/symbol_addrs_engine.txt     the engine's functions, shared by all
`make check-stg` rebuilds and checks every split stage, `make check-<name>` one (part of `make check`).

Usage: gen_stage_cfgs.py [--split] [--all | SC02_031 ...]
  --split    run splat (two passes: the first lists the outside symbols for the symbol file)
  --all      every stage image in disc/pac4 but the village (r145: all 139 are committed)
  --resplit  only run splat once per committed config, symbol files untouched (`make split-stg`, part of `make split`)
Stages run in parallel ($env:TWINBLADE_JOBS, default the CPU count).
"""
import hashlib
import os
import re
import struct
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import stage_census as C  # noqa: E402
import stage_units as U  # noqa: E402

BASE, ENG_END = C.BASE, C.ENG_END
NM = os.path.join(ROOT, 'tools', 'toolchain', 'bin', 'mipsel-none-elf-nm')


def engine_funcs():
    """[(address, name)] of the engine's functions, from the village's ELF (matched ones carry their C names)"""
    r = subprocess.run([NM, '--defined-only', os.path.join(ROOT, 'build', 'stage', 'stage.elf')], capture_output=True,
                       text=True, check=True)
    out = {}
    for line in r.stdout.splitlines():
        m = re.match(r'(?:ffffffff)?([0-9a-f]{8}) ([TtA]) (\w+)$', line)
        if not m or m[3].startswith(('__gnu_compiled', '.')):
            continue
        a = int(m[1], 16)
        if BASE <= a < ENG_END and (m[2] in 'Tt'):
            out.setdefault(a, m[3])
    return sorted(out.items())


def layout(name):
    """(own code start, own code end, image length, -O0 runs) as offsets (r209: the runs from stage_units.o0_runs)"""
    ws = C.load(os.path.join(ROOT, 'disc', 'pac4', name + '.bin'))
    fs = C.find_funcs(ws, (ENG_END - BASE) // 4)
    size = os.path.getsize(os.path.join(ROOT, 'disc', 'pac4', name + '.bin'))
    runs = [(s - BASE, e - BASE) for s, e in U.o0_runs(ws, fs, BASE)]
    if len(runs) > 1:
        sys.exit(f'{name}: {len(runs)} -O0 runs; stage_units names one per stage (<stage>_o0.c, <stage>_post.c)')
    return ENG_END - BASE, fs[-1][1] * 4, size, runs


def yaml_text(name):
    lo = name.lower()
    start, end, size, runs = layout(name)
    data = open(os.path.join(ROOT, 'disc', 'pac4', name + '.bin'), 'rb').read()
    subs = [f'      - {{start: 0x0, type: bin, name: {lo}_engine, linker_section_order: .rodata}}  # the shared '
            'engine, matched in src/stage (placed first: a .data piece would follow the .text)']
    if runs:
        # r209: a run of -O0 functions is a translation unit of its own (src/stg/<stage>_o0.c, built -O0 by the
        # Makefile), and the -O2 code after it another (<stage>_post.c); tools/stage_units.py
        (o0, o0_end), = runs
        subs += [f'      - [0x{start:X}, c, {lo}]     # the stage\'s own code, 0x{BASE + start:08X}-0x{BASE + o0:08X}',
                 f'      - [0x{o0:X}, c, {lo}_o0]  # -O0 code, 0x{BASE + o0:08X}-0x{BASE + o0_end:08X}',
                 f'      - [0x{o0_end:X}, c, {lo}_post]  # -O2 again, 0x{BASE + o0_end:08X}-0x{BASE + end:08X}']
    else:
        subs.append(f'      - [0x{start:X}, c, {lo}]     # the stage\'s own code, 0x{BASE + start:08X}-0x{BASE + end:08X}')
    subs.append(f'      - [0x{end:X}, data, {lo}_data]')
    if size % 4:
        subs.append(f'      - [0x{size & ~3:X}, bin, {lo}_tail]  # the image length is not a multiple of 4')
    sub_text = '\n'.join(subs)
    return f"""# Stage image {name} (generated by tools/gen_stage_cfgs.py; edit the generator, not this file).
# Loaded to 0x{BASE:08X} like every stage: the engine is matched once in stage.yaml (the village), here a bin piece;
# symbols carry the stage (func_{lo}_8017BEA4), the engine's functions keep their plain names.
name: Stage image {name}
sha1: {hashlib.sha1(data).hexdigest()}
options:
  basename: {lo}
  target_path: disc/pac4/{name}.bin
  elf_path: build/stg/{lo}/{lo}.elf
  base_path: ..
  platform: psx
  compiler: PSYQ

  asm_path: asm/stg/{lo}
  src_path: src/stg
  asset_path: assets/stg
  build_path: build
  create_asm_dependencies: True

  ld_script_path: build/stg/{lo}/{lo}.ld
  ld_dependencies: True
  ld_bss_is_noload: True
  ld_align_section_vram_end: False

  find_file_boundaries: False

  o_as_suffix: True
  use_legacy_include_asm: False

  section_order: [".rodata", ".text", ".data", ".bss"]

  symbol_name_format: {lo}_$VRAM
  symbol_name_format_no_rom: {lo}_$VRAM

  symbol_addrs_path:
    - symbol_addrs.txt
    - symbol_addrs_psyq.txt
    - stg/symbol_addrs_engine.txt
    - stg/symbol_addrs_{lo}.txt
  reloc_addrs_path:
    - reloc_addrs.txt

  undefined_funcs_auto_path: build/stg/{lo}/undefined_funcs_auto.txt
  undefined_syms_auto_path: build/stg/{lo}/undefined_syms_auto.txt

  subalign: 2

  string_encoding: ASCII
  data_string_encoding: ASCII
  rodata_string_guesser_level: 2
  data_string_guesser_level: 2

segments:
  - name: {lo}
    type: code
    start: 0x0
    vram: 0x{BASE:08X}
    subsegments:
{sub_text}
  - [0x{size:X}]
"""


OUTSIDE_MARK = '// Outside symbols (the EXE and its bss: from the first splat pass, plain names)'


def write_engine(eng):
    """stg/symbol_addrs_engine.txt: the engine's functions under their village names, shared by every stage"""
    open(os.path.join(ROOT, 'stg', 'symbol_addrs_engine.txt'), 'w', newline='\n').write(
        '// The stage engine\'s functions (written by tools/gen_stage_cfgs.py from build/stage/stage.elf), shared by '
        'every stg/ config\n' + ''.join(f'{n} = 0x{a:08X}; // type:func\n' for a, n in eng))


def write_symbols(name, outside=''):
    """the stage's symbol file: the hand-added lines, then the outside symbols"""
    lo = name.lower()
    path = os.path.join(ROOT, 'stg', f'symbol_addrs_{lo}.txt')
    hand = ''
    if os.path.exists(path):
        old = open(path).read()
        hand = old.split(OUTSIDE_MARK + '\n')[0].split('\n', 1)[1] if '\n' in old else ''
    text = f'// Stage {name} (stg/{lo}.yaml): names given by hand first\n' + hand
    if outside:
        text += OUTSIDE_MARK + '\n' + outside
    open(path, 'w', newline='\n').write(text)


def outside_symbols(lo):
    """the first pass's symbols below the stage image (the EXE, its bss), renamed without the stage prefix"""
    lines = set()
    for kind in ('funcs', 'syms'):
        for line in open(os.path.join(ROOT, 'build', 'stg', lo, f'undefined_{kind}_auto.txt')):
            m = re.match(rf'(func|D|jtbl)_{lo}_([0-9A-F]{{8}}) = 0x([0-9A-F]{{8}});', line.strip())
            if m and int(m[3], 16) < BASE:
                lines.add((int(m[3], 16), f'{m[1]}_{m[2]} = 0x{m[3]};' + (' // type:func' if m[1] == 'func' else '')))
    return ''.join(l + '\n' for _, l in sorted(lines))


def splat(lo):
    r = subprocess.run([sys.executable, '-m', 'splat', 'split', f'stg/{lo}.yaml'], cwd=ROOT, capture_output=True,
                       text=True)
    if r.returncode:
        sys.exit(f'splat {lo} failed:\n{r.stdout[-2000:]}{r.stderr[-2000:]}')


def generate(name):
    """write one stage's config and symbols (and with --split, run the two splat passes)"""
    lo = name.lower()
    open(os.path.join(ROOT, 'stg', lo + '.yaml'), 'w', newline='\n').write(yaml_text(name))
    if '--split' in sys.argv:
        write_symbols(name)                   # first pass: no outside names
        splat(lo)
        write_symbols(name, outside_symbols(lo))
        splat(lo)
    else:
        path = os.path.join(ROOT, 'stg', f'symbol_addrs_{lo}.txt')
        old = open(path).read() if os.path.exists(path) else ''
        write_symbols(name, old.split(OUTSIDE_MARK + '\n')[1] if OUTSIDE_MARK in old else '')
    return name


def all_images():
    """every stage image on the disc but the village (SC03_001, split by stage.yaml)"""
    return sorted(f[:-4] for f in os.listdir(os.path.join(ROOT, 'disc', 'pac4'))
                  if f.endswith('.bin') and f[:-4] != C.REF)


def main():
    from concurrent.futures import ProcessPoolExecutor
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    os.makedirs(os.path.join(ROOT, 'stg'), exist_ok=True)
    have = sorted(f[:-5].upper() for f in os.listdir(os.path.join(ROOT, 'stg')) if f.endswith('.yaml'))
    names = all_images() if '--all' in sys.argv else (args or have)
    jobs = int(os.environ.get('TWINBLADE_JOBS', os.cpu_count() or 4))
    if '--resplit' in sys.argv:
        # a fresh checkout (`make split`): the committed configs and symbol files as they are, one splat pass each
        with ProcessPoolExecutor(jobs) as ex:
            for lo in ex.map(splat, [n.lower() for n in names]):
                pass
        print(len(names), 'stage images split')
        return
    write_engine(engine_funcs())
    with ProcessPoolExecutor(jobs) as ex:
        for name in ex.map(generate, names):
            print(name, 'written')


if __name__ == '__main__':
    main()
