# Compiles every batch file in a folder with cmp_all (log next to it); prints per-file results and the total.
# cmp_all every batch file in a folder; print per-file results and the total; write the matching function names
param([string]$dir)
$env:PATH = "C:\msys64\usr\bin;" + $env:PATH
$ok=0; $tot=0
Get-ChildItem "$dir/*.c" | ForEach-Object {
  $r = .venv/Scripts/python.exe tools/cmp_all.py $_.FullName -O2 2>&1
  $r | Out-File -Encoding utf8 ($_.FullName + ".log")
  $last = "$($r[-1])"
  if ($last -match "(\d+) of (\d+) match") { $ok += [int]$matches[1]; $tot += [int]$matches[2] }
  "$($_.Name): $last"
}
"total: $ok / $tot"
