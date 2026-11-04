#!/usr/bin/env python3
"""r279: the order the M / L rows were checked in (run from the repo root; writes docs/names_merged/r279_order.csv).

Each row's calls = references to its current name in src/ (.c and .h): call sites and function-table entries, not
the definition and not file-scope extern / prototype lines. Rows are sorted engine_ML (M, then L), exe_MM (M, then
L), stage_ML (M, then L), most-referenced first, then by address."""
import csv, glob, re, os, collections
D = "docs/names_merged/"
files = sorted(glob.glob("src/**/*.c", recursive=True) + glob.glob("src/**/*.h", recursive=True))
defs = {}   # name -> (file, start, end)
lines = {}
refs = {}   # name -> list of (file, lineno, enclosing)
DEF = re.compile(r"^(?!\s|extern|typedef|#)(?:static\s+)?[A-Za-z_][\w\s\*]*?\b([A-Za-z_]\w*)\s*\(")
for f in files:
    L = open(f, errors="replace").read().split("\n")
    lines[f] = L
    cur = None; depth = 0; start = 0
    for i, l in enumerate(L):
        if depth == 0:
            m = DEF.match(l)
            if m and (not l.rstrip().endswith(";") or "{" in l) and m.group(1) not in ("if", "while", "for", "switch"):
                cand = m.group(1); start = i
                # body begins at { on this or next lines
                j = i
                while j < len(L) and j < i + 12 and "{" not in L[j] and not (L[j].rstrip().endswith(";") and j == i):
                    j += 1
                if j < len(L) and "{" in L[j]:
                    cur = cand
        o = l.count("{"); c = l.count("}")
        depth += o - c
        if cur and depth == 0 and (o or c):
            defs.setdefault(cur, (f, start, i))
            cur = None
        if depth < 0: depth = 0
# enclosing function per line
enc = {}
for n, (f, s, e) in defs.items():
    for i in range(s, e + 1):
        enc[(f, i)] = n
W = re.compile(r"\b((?:func|D)_[0-9A-Za-z_]+)\b")
for f, L in lines.items():
    for i, l in enumerate(L):
        for w in set(W.findall(l)):
            e = enc.get((f, i))
            if e == w and defs[w][1] == i:
                continue
            s = l.strip()
            if e is None and (s.startswith("extern") or s.endswith(";") and "(" in s and "=" not in s and not s.startswith(("if", "return"))):
                continue  # declaration at file scope
            if e is None and not s.startswith(("{", "&", "(")) and "=" not in s and "," not in s:
                continue
            refs.setdefault(w, []).append((f, i, e))
out = []
for b, rank in (("engine_ML.csv", 0), ("exe_MM.csv", 1), ("stage_ML.csv", 2)):
    for r in csv.DictReader(open(D + b)):
        n = r["current"]
        calls = len(refs.get(n, []))
        out.append((rank, 0 if r["confidence"] == "M" else 1, -calls, r["address"], b, r["scope"], n, r["proposed"], r["confidence"], calls, n in defs))
out.sort()
w = csv.writer(open(D + "r279_order.csv", "w", newline=""), lineterminator="\n")
w.writerow(["seq", "batch", "address", "scope", "current", "proposed", "conf", "calls", "hasdef"])
for i, o in enumerate(out):
    w.writerow([i, o[4], o[3], o[5], o[6], o[7], o[8], o[9], int(o[10])])
c = collections.Counter((o[4], o[8], o[9] > 0) for o in out)
for k in sorted(c): print(k, c[k])
