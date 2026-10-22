"""prototypes for m2c: each callee's argument count = the highest a-register written in the few instructions before
its jal (and its delay slot), over every call site in the packages. usage: m2c_ctx.py <out.h>"""
import glob, re, sys, collections
nargs = collections.Counter()
seen = collections.defaultdict(list)
for f in glob.glob('asm/abil/*/nonmatchings/*/*.s'):
    ins = []
    for l in open(f):
        m = re.match(r'\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+(\w+)\s*(.*)', l)
        if m:
            ins.append((m[1], m[2]))
        elif re.match(r'\s*\.L\w+:', l):
            ins.append(('LABEL', ''))
    for i, (op, a) in enumerate(ins):
        if op != 'jal':
            continue
        callee = a.strip()
        hi = 0
        window = []
        for j in range(i - 1, max(-1, i - 8), -1):
            if ins[j][0] in ('jal', 'jalr', 'LABEL', 'j', 'jr') or ins[j][0].startswith('b'):
                break
            window.append(ins[j])
        if i + 1 < len(ins):
            window.append(ins[i + 1])
        for op2, a2 in window:
            m = re.match(r'\$a([0-3])\b', a2)
            if m and not op2.startswith('s') :
                hi = max(hi, int(m[1]) + 1)
        seen[callee].append(hi)
out = ['typedef int s32; typedef unsigned int u32; typedef short s16; typedef unsigned short u16;',
       'typedef signed char s8; typedef unsigned char u8;']
for callee, ns in sorted(seen.items()):
    n = max(ns)
    out.append(f's32 {callee}({", ".join(["s32"] * n) or "void"});')
open(sys.argv[1], 'w').write('\n'.join(out) + '\n')
print(len(seen), 'callees')
