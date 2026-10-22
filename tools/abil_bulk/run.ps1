# The ability packages' bulk pass (r125, docs/decomp_recipes.md section 8). From the repo root in PowerShell:
#   tools/abil_bulk/run.ps1 [-void]
# m2c drafts every unmatched function of src/abil (with callee arities from m2c_ctx.py), cleans them into C
# (m2c_bulk.py), compiles each against the original (cmpdir.ps1 -> <file>.c.log), keeps the matches
# (keep_matched.py), aligns src/abil's declarations with them (align_decls.py) and places them file by file
# (put_func.py: one failing file would revert a whole multi-file placement). rank.py <dir> N lists the nearest
# misses, show.py <func> the diff and the draft, infile.py a package file with a batch placed (cmp_func in context).
param([switch]$void)
$T = "tools/abil_bulk"
$env:PATH = "C:\msys64\usr\bin;" + $env:PATH
$d = if ($void) { "build/work/m2cv" } else { "build/work/m2c" }
Remove-Item -Recurse -Force $d, ($d + "_ok") -ErrorAction SilentlyContinue
.venv/Scripts/python.exe "$T/m2c_ctx.py" build/work/m2c_ctx.h
if ($void) { .venv/Scripts/python.exe "$T/m2c_bulk.py" 0x10000 $d --void } else { .venv/Scripts/python.exe "$T/m2c_bulk.py" 0x10000 $d }
& "$T/cmpdir.ps1" $d | Select-Object -Last 1
.venv/Scripts/python.exe "$T/keep_matched.py" $d ($d + "_ok")
$f = (Get-ChildItem ($d + "_ok/*.c")).FullName
if ($f) {
  .venv/Scripts/python.exe "$T/align_decls.py" @f
  Get-ChildItem ($d + "_ok/*.c") | ForEach-Object {
    $r = .venv/Scripts/python.exe tools/put_func.py $_.FullName 2>&1 | Out-String
    if ($r -notmatch "OK: build still matches") { "$($_.Name): FAILED (placement reverted)" } }
}
make progress 2>&1 | Select-Object -Last 1
