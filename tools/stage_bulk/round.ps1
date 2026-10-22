# One bulk round over the unmatched stage functions (r132, docs/decomp_recipes.md section 9). From the repo root in
# PowerShell:  tools/stage_bulk/round.ps1 <name>      (folders build/work/<name>, <name>v, <name>r, <name>vr)
# m2c drafts every unmatched -O2 stage function twice (as it is, and --void), compiles them against the original,
# places the matches (place_stage.py: compile-screen, check-stage, bisect), then tries tools/abil_bulk/rewrite.py's
# levers on the misses (AVec as psyq.h's SVECTOR) and places those. Prints the stage count at the end.
# A split stage (r143): set $env:TWINBLADE_STG = "sc02_031" first (m2c_stage.py and place_stage.py read it).
param([string]$name)
$T = "tools/stage_bulk"; $py = ".venv/Scripts/python.exe"
$env:PATH = "C:\msys64\usr\bin;" + $env:PATH
$w = "build/work/$name"
Remove-Item -Recurse -Force $w, "${w}v", "${w}r", "${w}vr", "${w}m", "${w}vm", "${w}L", "${w}vL" -ErrorAction SilentlyContinue
$j = Start-Job -ScriptBlock { Set-Location $using:PWD; & $using:py "$using:T/m2c_stage.py" 0x10000 "$using:w" 2>&1 | Select-Object -Last 1 }
& $py "$T/m2c_stage.py" 0x10000 "${w}v" --void 2>&1 | Select-Object -Last 1
Receive-Job $j -Wait
foreach ($d in $w, "${w}v") {
  "$d " + (& $py "$T/cmp_par.py" $d 8)
  "$d " + (& $py "$T/place_stage.py" $d 2>&1 | Select-Object -Last 1)
  # the levers over the misses
  $m = "${d}m"; $r = "${d}r"; New-Item -ItemType Directory $m | Out-Null
  $ok = @(Get-Content "$d/_matched.txt")
  Get-ChildItem "$d/*.c" | Where-Object { $_.Name -notlike '_*' -and $ok -notcontains $_.BaseName } | ForEach-Object {
    if (Select-String -Path "$($_.FullName).log" -Pattern 'differs' -Quiet) { Copy-Item $_.FullName, "$($_.FullName).log" $m } }
  & $py tools/abil_bulk/rewrite.py all $m $r | Out-Null
  if (Test-Path $r) {
    Get-ChildItem "$r/*.c" | ForEach-Object {
      $txt = [IO.File]::ReadAllText($_.FullName) -replace '\bAVec\b', 'SVECTOR'
      [IO.File]::WriteAllText($_.FullName, $txt) }
    "$r " + (& $py "$T/cmp_par.py" $r 8)
    "$r " + (& $py "$T/place_stage.py" $r 2>&1 | Select-Object -Last 1)
  }
  # the stage's own levers (levers.py) over the same misses (r133)
  $l = "${d}L"; Remove-Item -Recurse -Force $l -ErrorAction SilentlyContinue
  & $py "$T/levers.py" $m $l | Out-Null
  if (Test-Path "$l/*.c") {
    "$l " + (& $py "$T/cmp_par.py" $l 8)
    "$l " + (& $py "$T/place_stage.py" $l 2>&1 | Select-Object -Last 1)
  }
}
if ($env:TWINBLADE_STG) {           # a split stage (r143): its own check and count
  make "check-$($env:TWINBLADE_STG)" 2>&1 | Select-Object -Last 1
  $t = Get-Content "src/stg/$($env:TWINBLADE_STG).c"
  "$($env:TWINBLADE_STG): " + ($t | Select-String '^INCLUDE_ASM').Count + " still asm"
} else {
  make check-stage 2>&1 | Select-Object -Last 1
  make progress 2>&1 | Select-String "stage:"
}
