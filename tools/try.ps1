# try.ps1: rebuild build/src/code_800123F0.o and diff one function. Run from PowerShell in the repo root.
param([string]$Func = 'func_80020DA4', [string]$A = '0x80020DA4', [string]$B = '0x80020F34', [int]$Lines = 40)
$env:PATH = "C:\msys64\usr\bin;" + $env:PATH
Remove-Item build\src\code_800123F0.o -ErrorAction SilentlyContinue
$p = Start-Process -FilePath "C:\msys64\usr\bin\make.exe" -ArgumentList "build/src/code_800123F0.o" -NoNewWindow -PassThru -RedirectStandardOutput "$env:TEMP\try_o.txt" -RedirectStandardError "$env:TEMP\try_e.txt"
$p.WaitForExit(400000) | Out-Null
& ".venv\Scripts\python.exe" tools/diff_func.py $Func $A $B build/src/code_800123F0.o $Lines
