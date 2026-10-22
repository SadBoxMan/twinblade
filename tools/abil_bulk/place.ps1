# Place hand-matched files (build/work/h/<func>.c or package batches) one by one: align src/abil's declarations,
# put_func, report; then copy each placed function over its shape (abil_clone.py) and place the copies that match.
#   tools/abil_bulk/place.ps1 build/work/h/func_ovl34_800CD708.c [...]
param([Parameter(ValueFromRemainingArguments)][string[]]$files)
$env:PATH = "C:\msys64\usr\bin;" + $env:PATH
$placed = @()
foreach ($f in $files) {
  # align_decls edits src/abil before put_func, whose revert does not undo that: keep a copy (r127)
  $src = "src/abil/" + ([regex]::Match((Split-Path $f -Leaf), "ovl[0-9a-f]{2}").Value) + ".c"
  $keep = [System.IO.File]::ReadAllBytes((Resolve-Path $src))
  .venv/Scripts/python.exe tools/abil_bulk/align_decls.py $f
  $r = .venv/Scripts/python.exe tools/put_func.py $f 2>&1 | Out-String
  if ($r -match "OK: build still matches") { $placed += $f; "placed: $f" } else {
    [System.IO.File]::WriteAllBytes((Resolve-Path $src), $keep)
    "FAILED: $f " + (($r -split "`n" | Where-Object { $_ -match "\.c:\d+:" } | Select-Object -First 1)) }
}
if ($placed.Count) {
  Remove-Item build/work/clone/*.c, build/work/clone/*.log -ErrorAction SilentlyContinue
  .venv/Scripts/python.exe tools/abil_clone.py @placed | Select-String -NotMatch "\.c$|: 0 functions"
  Get-ChildItem build/work/clone/*.c -ErrorAction SilentlyContinue | ForEach-Object {
    $c = .venv/Scripts/python.exe tools/cmp_all.py $_.FullName -O2 2>&1
    if ("$($c[-1])" -match "(\d+) of \1 match") {
      .venv/Scripts/python.exe tools/abil_bulk/align_decls.py $_.FullName
      $q = .venv/Scripts/python.exe tools/put_func.py $_.FullName 2>&1 | Out-String
      if ($q -match "OK: build still matches") { "clones placed: $($_.Name)" } else { "clone FAILED: $($_.Name)" }
    } else { "clones differ: $($_.Name) $($c[-1])" }
  }
}
make progress 2>&1 | Select-Object -Last 1
