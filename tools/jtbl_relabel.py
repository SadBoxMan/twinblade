#!/usr/bin/env python3
"""Build step between maspsx and as: point a matched C function's jump tables at the original tables.

The original jump tables sit in the split's data files (asm/data/*.s; asm/<overlay>/data/*.s) at their original
addresses, between other data. One C file here holds many original object files, and each original object aligned
its tables to 8 bytes from its own start, so the compiler's copy of a table (`.section .rodata`, `.align 3`,
`$Lnn:`, `.word $Lxx` ...) cannot be placed at the original address with the original padding. This filter drops
the compiler's copy and points the code's `%hi($Lnn)` / `%lo($Lnn)` (or `la $r,$Lnn`, when a loop hoists the table's
address) at the original table instead. The result is
byte-identical by construction: the code itself must match for the build to pass, and the original table lists
the same case labels.

Which original table: the ones whose case addresses all lie after the function's start (in this segment's data);
of those, the k with the lowest case addresses, k = the number of tables the compiler emitted; then in the order
they sit in memory (the order the compiler emits them). The entry counts must agree; the original may carry one
trailing zero word, padding from its object's 8-byte alignment.

Remove this step once the data is split at the original object boundaries and each C file emits its own rodata.

Usage: jtbl_relabel.py <asm dir> <in.s> <out.s> [symbol_addrs file ...]
  <asm dir>: asm for the EXE, asm/<overlay> for an overlay (its data/*.s hold the tables)
"""
import glob
import os
import re
import sys

LABEL = re.compile(r'^(\$L\d+):$')
WORD = re.compile(r'^\.word\s+(\$L\d+)$')
SECTION_END = re.compile(r'^(\.text|\.data|\.rdata|\.sdata|\.section\b)')


def original_tables(asm_dir):
    """[(name, address, [entries])] for every jtbl_ in <asm dir>/data/*.s"""
    out = []
    for f in sorted(glob.glob(os.path.join(asm_dir, 'data', '*.s'))):
        text = open(f, encoding='utf-8', errors='replace').read()
        # the ability packages name theirs jtbl_ovl28_800CAE0C (r137)
        # and the split stages jtbl_sc05_017_801EB3E8 (r148)
        for m in re.finditer(r'^dlabel (jtbl_(?:ovl[0-9a-f]{2}_|sc\d\d_\d{3}_)?([0-9A-F]{8}))\n(.*?)^enddlabel', text,
                             re.M | re.S):
            entries = [int(w, 16) for w in re.findall(r'\.word 0x([0-9A-Fa-f]+)', m.group(3))]
            out.append((m.group(1), int(m.group(2), 16), entries))
    return out


def function_address(name, symbol_files):
    # (r148) split stages name their functions func_sc05_017_801808D4
    m = re.fullmatch(r'func_(?:ovl[0-9a-f]{2}_|sc\d\d_\d{3}_)?([0-9A-Fa-f]{8})', name)
    if m:
        return int(m.group(1), 16)
    for f in symbol_files:
        for line in open(f, encoding='utf-8', errors='replace'):
            m = re.match(r'\s*' + re.escape(name) + r'\s*=\s*0x([0-9A-Fa-f]+)\s*;', line)
            if m:
                return int(m.group(1), 16)
    return None


def main():
    asm_dir, src, dst = sys.argv[1:4]
    symbol_files = sys.argv[4:]
    m = re.fullmatch(r'asm/stg/(\w+)/?', asm_dir.replace('\\', '/'))
    if m and os.path.exists('stg/symbol_addrs_%s.txt' % m.group(1)):   # (r148) a split stage's own names
        symbol_files.append('stg/symbol_addrs_%s.txt' % m.group(1))
    lines =open(src, encoding='utf-8', errors='replace').read().split('\n')
    out, func, i = [], None, 0
    tables = {}                                   # function -> [(label, entry count)] in emission order
    while i < len(lines):
        line = lines[i]
        s = line.strip()
        m = re.match(r'^\.ent\s+(\S+)', s)
        if m:
            func = m.group(1)
        if s == '.section .rodata':
            j, body = i + 1, []
            while j < len(lines) and not SECTION_END.match(lines[j].strip()):
                if lines[j].strip():
                    body.append(lines[j].strip())
                j += 1
            items = [b for b in body if not b.startswith('.align')]
            if items and LABEL.match(items[0]) and len(items) > 1 and all(WORD.match(b) for b in items[1:]):
                if func is None:
                    sys.exit('jtbl_relabel: %s: a jump table outside a function' % src)
                tables.setdefault(func, []).append((LABEL.match(items[0]).group(1), len(items) - 1))
                if j < len(lines) and lines[j].strip() in ('.text', '.section .text'):
                    j += 1                         # the switch back to .text: we never left it
                i = j
                continue
        out.append(line)
        i += 1
    if not tables:
        open(dst, 'w', encoding='utf-8', newline='\n').write('\n'.join(out))
        return
    originals = original_tables(asm_dir)
    rename = {}
    for func, mine in tables.items():
        start = function_address(func, symbol_files)
        if start is None:
            sys.exit('jtbl_relabel: %s: no address for %s (name it func_XXXXXXXX or list it in a symbol file)' % (src, func))
        # case addresses are KSEG0 words; (r137) a table split with trailing non-address words is still a candidate
        def cases(t):
            return [e for e in t[2] if e & 0xFF000000 == 0x80000000]
        cands = [t for t in originals if cases(t) and min(cases(t)) > start]
        cands.sort(key=lambda t: min(cases(t)))
        chosen = sorted(cands[:len(mine)], key=lambda t: t[1])
        if len(chosen) != len(mine):
            sys.exit('jtbl_relabel: %s: %s emits %d jump tables, the data has %d after it' % (src, func, len(mine), len(chosen)))
        for (label, n), (name, addr, entries) in zip(mine, chosen):
            ok = len(entries) == n or (len(entries) == n + 1 and entries[-1] == 0)
            # (r137) a table split together with the words after it (ovl28: the next function's first two
            # instructions sit in the data in front of the code): the extra words are no case addresses
            if not ok and len(entries) > n and not [e for e in entries[n:] if start <= e < start + 0x10000]:
                ok, entries = True, entries[:n]
            if not ok or max(entries) >= start + 0x10000:
                sys.exit('jtbl_relabel: %s: %s table %s has %d entries; %s has %d' % (src, func, label, n, name, len(entries)))
            rename[label] = name
    # every operand use of a dropped table's label: %hi($L)/%lo($L), and `la $r,$L` when the table's address is
    # loaded once (a loop hoists it)
    pat = re.compile(r'(?<![\w$])(\$L\d+)(?![\w:])')
    out = [pat.sub(lambda m: rename.get(m.group(1), m.group(1)), l) for l in out]
    open(dst, 'w', encoding='utf-8', newline='\n').write('\n'.join(out))


if __name__ == '__main__':
    main()
