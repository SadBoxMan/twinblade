#!/usr/bin/env python3
"""Compile a C file containing one function and compare it with the original asm.

Usage: cmp_func.py <file.c> <func_name>[=<c_name>] <gcc-version> [cc1 flags...]

Use func_80010178=main when the C function already has its real name.

The function's original instructions come from asm/ (asm/nonmatchings/*/<func>.s); the candidate is
built with tools/compilers/gcc-<version>-psx (cpp -> cc1 -> maspsx -> as).
Relocated fields (%hi/%lo/jal targets) are masked on both sides, except that a %lo whose symbol both sides resolve
(a name ending in its address, or one in the symbol files) must give the same address: a wrong struct field no longer
passes as MATCH (r192). Lines of the build show `<%lo(SYM+addend)>` for those.
"""
import glob
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CROSS = os.path.join(ROOT, 'tools', 'toolchain', 'bin', 'mipsel-none-elf-')
PYTHON = sys.executable
MASPSX = os.path.join(ROOT, 'tools', 'maspsx_tw.py')   # r192: maspsx with the game's sltu_at rule, as the Makefile
TMP = os.environ.get('CMP_TMP') or os.path.join('build', 'cmp')   # r144: CMP_TMP, one folder per agent
LAST_GHOST = []   # r208: the last compile's relocation symbols its image does not link with (phantom_symbols)


def original_words(func):
    m = None
    # the mode overlays share one load address, so a name can be in several of them (func_800CEF04 is in ovl36, ovl38
    # and ovl39): TWINBLADE_OVL=<overlay> looks only in asm/<overlay> (docs/overlays.md)
    for dirpath, _, files in os.walk(os.path.join(ROOT, 'asm', os.environ.get('TWINBLADE_OVL', ''))):
        for name in files:
            if name.endswith('.s') and (name == func + '.s' or 'nonmatchings' not in dirpath):
                src = open(os.path.join(dirpath, name)).read()
                m = re.search(rf'^glabel {func}\n(.*?)^endlabel {func}', src, re.M | re.S)
                if m:
                    break
        if m:
            break
    if not m:
        sys.exit(f'{func} not found under asm/')
    out = []
    for line in m.group(1).splitlines():
        im = re.match(r'\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8}) \*/\s+(.*)', line)
        if im:
            w = int.from_bytes(bytes.fromhex(im[1]), 'little')
            out.append((w, im[2].strip(), bool(re.search(r'%hi|%lo|^(j|jal)\s', im[2].strip()))))
    return out


def compiled_words(cfile, func, version, flags):
    os.makedirs(TMP, exist_ok=True)
    cc = os.path.join('tools', 'compilers', f'gcc-{version}-psx')
    # r142: the intermediates carry the process id, so several compiles of the same function at once (parallel
    # agents, streams sharing a checkout) cannot overwrite each other's; afterwards they are renamed to the plain
    # build/cmp/<func>.* names for inspection (best effort: the last one wins)
    plain = os.path.join(TMP, func)
    base = f'{plain}.{os.getpid()}'
    run = lambda *a, **k: subprocess.run(*a, check=True, cwd=ROOT, **k)
    global LAST_GHOST
    try:
        words = _compiled_words(cfile, func, cc, flags, base, run)
        LAST_GHOST = phantom_symbols(base + '.o', func)   # r208: read before the rename (parallel compiles)
        return words
    finally:
        for ext in ('.i', '.s', '.m.s', '.o'):
            try:
                os.replace(os.path.join(ROOT, base + ext), os.path.join(ROOT, plain + ext))
            except OSError:
                pass


def _compiled_words(cfile, func, cc, flags, base, run):
    with open(os.path.join(ROOT, base + '.i'), 'w') as f:
        run([os.path.join(ROOT, cc, 'cpp.exe'), '-P', '-undef', '-Iinclude', os.path.relpath(cfile, ROOT)], stdout=f)
    run([os.path.join(ROOT, cc, 'cc1.exe'), '-quiet', '-G0', '-mips1', '-mcpu=3000',
         '-fgnu-linker', '-mgas', '-msoft-float', *flags, base + '.i', '-o', base + '.s'])
    with open(os.path.join(ROOT, base + '.m.s'), 'w') as f:
        run([PYTHON, MASPSX, '--expand-div', '--aspsx-version=2.79', base + '.s'], stdout=f)
    run([CROSS + 'as', '-EL', '-march=r3000', '-mtune=r3000', '-no-pad-sections', '-G0', '-Iinclude',
         '-o', base + '.o', base + '.m.s'])
    dump = run([CROSS + 'objdump', '-drz', '--disassemble=' + func,   # -z: show zero words (GTE macros put literal nops there)
                 base + '.o'],
               capture_output=True, text=True).stdout
    out, relocs = [], {}
    for line in dump.splitlines():
        im = re.match(r'\s+([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)', line)
        if im:
            out.append([int(im[2], 16), im[3].strip(), False, int(im[1], 16)])
        rm = re.match(r'\s+([0-9a-f]+): (R_MIPS_\w+)\s+(\S+)', line)
        if rm:
            relocs[int(rm[1], 16)] = (rm[2], rm[3])
    for o in out:
        o[2] = o[3] in relocs
        rel = relocs.get(o[3])
        if rel and rel[0] == 'R_MIPS_LO16':   # REL relocation: the addend is the immediate itself
            o[1] = f'{o[1]}  <%lo({rel[1]}+{_s16(o[0]):#x})>'
    return [tuple(o[:3]) for o in out]


def mask(word, reloc):
    if not reloc:
        return word
    return word & 0xFC000000 if (word >> 26) in (2, 3) else word & 0xFFFF0000


def _s16(w):
    w &= 0xFFFF
    return w - 0x10000 if w & 0x8000 else w


_ADDRS = None


def _addr_of(name):
    """a symbol's address: from a name ending in its address (D_80126A28, func_sc03_118_8017BEA4), else from the
    symbol files; None when unknown (a section symbol such as .rodata, a local label)"""
    global _ADDRS
    m = re.search(r'_([0-9A-Fa-f]{8})$', name)
    if m:
        return int(m[1], 16)
    if _ADDRS is None:
        _ADDRS = {}
        for d in ('', 'stg', 'abil'):
            p = os.path.join(ROOT, d)
            for f in os.listdir(p) if os.path.isdir(p) else []:
                if (f.startswith('symbol_addrs') or f.startswith('undefined_syms')) and f.endswith('.txt'):
                    for sm in re.finditer(r'^\s*(\w+)\s*=\s*0x([0-9A-Fa-f]+)\s*;', open(os.path.join(p, f)).read(), re.M):
                        _ADDRS.setdefault(sm[1], int(sm[2], 16))
    return _ADDRS.get(name)


def lo_target(text):
    """the address a %lo immediate stands for, from the original's `%lo(SYM+0x4)` or the build's `<%lo(SYM+0x4)>`
    note; None when it cannot be resolved"""
    # r208: the build's note for a negative addend reads `+-0x24`; the old pattern failed on it and returned None, so
    # `(u8 *)g_SoundChan - 0x24` passed for the original's `g_SoundSlot + 0x54` (r206)
    m = re.search(r'%lo\(([A-Za-z_.$][\w.$]*)\s*(?:([+-])\s*(-?)(0x[0-9A-Fa-f]+|\d+))?\)', text)
    if not m:
        return None
    a = _addr_of(m[1])
    if a is None:
        return None
    off = int(m[4], 0) if m[4] else 0
    if (m[2] == '-') != (m[3] == '-'):
        off = -off
    return (a + off) & 0xFFFFFFFF


def link_symbols(func):
    """the symbols the function's image links with (its last build's map, plus the asm labels of the image), or None
    when the image was never built (r208)"""
    for dirpath, _, files in os.walk(os.path.join(ROOT, 'asm', os.environ.get('TWINBLADE_OVL', ''))):
        if func + '.s' in files:
            break
    else:
        return None
    rel = os.path.relpath(dirpath, os.path.join(ROOT, 'asm')).replace(os.sep, '/').split('/')
    if rel[0] == 'stg':
        maps = [f'build/stg/{rel[1]}/{rel[1]}.map']
    elif rel[0] == 'nonmatchings':
        maps = glob.glob(os.path.join(ROOT, 'build', '*.map'))
    else:
        maps = glob.glob(os.path.join(ROOT, 'build', rel[0], '*.map'))
    out = set()
    for p in maps:
        p = os.path.join(ROOT, p)
        if os.path.exists(p):
            out |= set(re.findall(r'^\s+0x[0-9a-f]+\s+(\w+)(?: = |\s*$)', open(p, errors='replace').read(), re.M))
    return out or None


def phantom_symbols(cfile_obj, func):
    """the draft's relocation symbols that its image does not link with (r208: sc03_030 8017E430 read D_80126940 for the
    asm's D_80126942, splat's +0x1000000 alias in sc01_005 8018203C, sc06_014 8017E8D8: MATCH, then no link)"""
    known = link_symbols(func)
    if known is None:
        return []
    obj = os.path.join(ROOT, cfile_obj)
    dump = subprocess.run([CROSS + 'objdump', '-r', '-t', obj], capture_output=True, text=True).stdout
    own = set(re.findall(r'^[0-9a-f]{8} [lg ]\s*[\w ]*\s+(?:\.text|\.data|\.rodata|\.bss|\.sdata|\.sbss)\S*\s+[0-9a-f]+\s+(\w+)$',
                         dump, re.M))
    used = set(re.findall(r'^[0-9a-f]{8} R_MIPS_(?:HI16|LO16|26)\s+(\w+)', dump, re.M))
    return sorted(s for s in used - own - known if not s.startswith('.'))


def same_word(x, y):
    """two (word, text, relocated) entries agree: relocated fields masked, except that a %lo whose symbol both sides
    resolve must name the same address (r192: a wrong struct field, `D_801269F0[i].unk28` for the original's
    `%lo(D_80126A28)`, used to pass as MATCH and fail only the build check)"""
    r = x[2] or y[2]
    if mask(x[0], r) != mask(y[0], r):
        return False
    if x[2] and y[2] and '%lo' in x[1] and '%lo' in y[1]:
        a, b = lo_target(x[1]), lo_target(y[1])
        # r240: the assembler splits a large addend (`&D_800AF630 + 0xA3D2`) into %hi + 1 and a negative %lo
        # (`<%lo(D_800AF630+-0x5c2e)>`), so the note reads 0x10000 short of the address it links to: the %lo
        # immediates agree, and the %hi half is checked by the image build
        if a is not None and b is not None and a != b and abs(a - b) != 0x10000:
            return False
    return True


def main():
    cfile, func, version, *flags = sys.argv[1:]
    func, _, c_name = func.partition('=')
    a = original_words(func)
    b = compiled_words(cfile, c_name or func, version, flags)
    same = len(a) == len(b) and all(same_word(x, y) for x, y in zip(a, b))
    ghost = LAST_GHOST if same else []
    if ghost:
        same = False
    print(f'{func} gcc-{version} {" ".join(flags)}: {"MATCH" if same else "differs"} '
          f'({len(a)} vs {len(b)} instructions)' + (f'; not in the image\'s link: {" ".join(ghost)}' if ghost else ''))
    if ghost:
        return 1
    if not same:
        for i in range(max(len(a), len(b))):
            x = a[i] if i < len(a) else (0, '', False)
            y = b[i] if i < len(b) else (0, '', False)
            flag = '  ' if same_word(x, y) else '!!'
            print(f'  {flag} {x[1]:40.40s} | {y[1]}')
    return 0 if same else 1


if __name__ == '__main__':
    sys.exit(main())
