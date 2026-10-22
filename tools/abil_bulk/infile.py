"""a package's src file with a batch's functions placed and the remaining INCLUDE_ASM removed (for cmp_func in context)
usage: infile.py <batch.c> <out.c>"""
import os, re, sys
sys.path.insert(0, 'tools'); import put_func as P
pkg = os.path.basename(sys.argv[1])[:-2]
t = open(f'src/abil/{pkg}.c').read()
d, f = P.split(open(sys.argv[1]).read())
for n, b in f.items():
    t = re.sub(r'INCLUDE_ASM\("[^"]+",\s*' + n + r'\);', lambda m: b, t)
t = t.replace('\nINCLUDE_ASM', '\n' + d + '\nINCLUDE_ASM', 1)
t = re.sub(r'INCLUDE_ASM\([^;]*\);', '', t)
open(sys.argv[2], 'w', newline='\n').write(t)
