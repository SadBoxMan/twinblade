"""r208: put matched stage functions back to asm, to test a tool on a case that has since been placed.
usage: unplace.py <stage> <func> [func ...]     replaces each definition with its INCLUDE_ASM line (the file's declarations
stay), then re-splits the stage (make split-stg STG=<STAGE>) so its .s files exist again. Restore with
`git checkout -- src/stg/<stage>.c` and the same split. Run from PowerShell, in a worktree, never in main."""
import os, re, subprocess, sys
sys.path.insert(0, 'tools')
import put_func as P
st, names = sys.argv[1].lower(), sys.argv[2:]
p = os.path.abspath(f'src/stg/{st}.c')
t = open(p, encoding='utf-8').read()
_, funcs = P.split(t)
for n in names:
    if n not in funcs:
        sys.exit(f'{n}: no C definition in {p}')
    t = t.replace(funcs[n], f'INCLUDE_ASM("asm/stg/{st}/nonmatchings/{st}", {n});', 1)
open(p, 'w', encoding='utf-8', newline='\n').write(t)
env = dict(os.environ, PATH='C:\\msys64\\usr\\bin;' + os.environ['PATH'])
r = subprocess.run(['C:\\msys64\\usr\\bin\\make.exe', 'split-stg', f'STG={st.upper()}'], capture_output=True, text=True, env=env)
print(r.stdout[-300:], r.stderr[-300:])
