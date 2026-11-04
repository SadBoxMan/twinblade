#!/usr/bin/env python3
"""r279: clash checks for every name in the r279 batches engine_H2 / exe_H2 / stage_H2 (promoted and fixed rows), from
the repo root. Copied from r278_clash_check.py; the input is the H2 batches, the FIX rows' new names are checked
against every batch (whose old names they replace), and an H2 address that an H batch already names is a clash.

For each renamed row:
  style   functions ^[A-Z][A-Za-z0-9]*$ (packages: Prefix_Name), globals ^g_[A-Z][A-Za-z0-9]*$, package data
          Prefix_Name (the r276 rules, including the two pending r271 conventions);
  batches the same name at another address in the same link scope, in any batch (all *_H / *_ML / *_MM CSVs and
          stage_family_shapes.csv; engine + exe + ovl are one global scope, a stage / package also links
          against it);
  symbols the name already in a symbol file, as an identifier in include/ or anywhere in src/;
  library a C keyword or a name in symbol_addrs_psyq.txt; a PsyQ-like prefix is a warning.
Also lists every address that two batches of one address space name differently (engine bss / text named by an
ovl:36 row and an engine row), the check r276 ran only inside one scope.
Writes r278_clash_check.txt.
"""
import csv, glob, os, re

D = "docs/names_merged/"
BATCHES = ["exe_H.csv", "exe_MM.csv", "engine_H.csv", "engine_ML.csv", "stage_H.csv", "stage_ML.csv",
           "abil_H.csv", "abil_ML.csv", "ovl_H.csv", "ovl_ML.csv", "exe_H2.csv", "engine_H2.csv", "stage_H2.csv"]
H2 = ("exe_H2.csv", "engine_H2.csv", "stage_H2.csv")
KEYWORDS = set("auto break case char const continue default do double else enum extern float for goto if inline "
               "int long register restrict return short signed sizeof static struct switch typedef union unsigned "
               "void volatile while".split())
PSYQ_PREFIX = ("Gs", "Ss", "Spu", "Cd", "Pad", "MemCard", "DecDCT", "Mdec")

rows = []
for b in BATCHES:
    for r in csv.DictReader(open(D + b)):
        r["batch"] = b
        rows.append(r)
for r in csv.DictReader(open(D + "stage_family_shapes.csv")):
    rows.append(dict(address=r.get("address", ""), scope="stage:" + r.get("first_stage", r.get("stage", "")),
                     proposed=r.get("proposed", r.get("name", "")), batch="stage_family_shapes.csv"))


def gscope(s):
    return "global" if s.split(":")[0] in ("exe", "engine", "ovl") else s


sym = {}
for f in glob.glob("**/symbol_addrs*.txt", recursive=True):
    for line in open(f):
        m = re.match(r"\s*([A-Za-z_]\w*)\s*=\s*(0x[0-9A-Fa-f]+)", line)
        if m:
            sym.setdefault(m.group(1), set()).add((f, m.group(2).upper().replace("0X", "0x")))
psyq = {n for n, v in sym.items() if any("psyq" in f for f, _ in v)}
words = {}
for f in glob.glob("include/**/*.h", recursive=True) + glob.glob("src/**/*.c", recursive=True) + \
        glob.glob("src/**/*.h", recursive=True):
    for w in set(re.findall(r"\b[A-Za-z_]\w*\b", open(f, errors="replace").read())):
        words.setdefault(w, []).append(f)

out = []
changes = []
for b in H2:
    for r in csv.DictReader(open(D + b)):
        changes.append(dict(old=r["current"], new=r["proposed"], scope=r["scope"], address=r["address"], batch=b))
bad = 0
for c in changes:
    n, scope, addr = c["new"], c["scope"], c["address"]
    probs, warns = [], []
    pkg = scope.startswith("abil:")
    if n.startswith("g_"):
        ok = re.fullmatch(r"g_[A-Z][A-Za-z0-9]*", n)
    elif pkg:
        ok = re.fullmatch(r"[A-Z][A-Za-z0-9]*_[A-Z][A-Za-z0-9]*", n)
    else:
        ok = re.fullmatch(r"[A-Z][A-Za-z0-9]*", n)
    if not ok:
        probs.append("style")
    for r in rows:
        if r["proposed"] != n:
            continue
        if r["address"] == addr and gscope(r["scope"]) == gscope(scope):
            continue  # the row itself, or the same row in its ML / MM batch
        same_link = gscope(r["scope"]) == gscope(scope) or "global" in (gscope(r["scope"]), gscope(scope))
        if same_link:
            probs.append("batch %s %s %s" % (r["batch"], r["scope"], r["address"]))
        else:
            warns.append("same name in another scope %s %s" % (r["scope"], r["address"]))
    for r in rows:  # the address already named by an H batch (H2 must only hold ML / MM rows)
        if r["batch"] in ("exe_H.csv", "engine_H.csv", "stage_H.csv") and r["address"] == addr and \
                gscope(r["scope"]) == gscope(scope):
            probs.append("address in %s as %s" % (r["batch"], r["proposed"]))
    if n in sym:
        probs.append("symbol file %s" % sorted(sym[n])[0][0])
    if n in words:
        probs.append("src/include %s" % words[n][0])
    if n in KEYWORDS or n in psyq:
        probs.append("library / keyword")
    if n.startswith(PSYQ_PREFIX) and not n.startswith("Pad_"):
        warns.append("PsyQ-like prefix")
    bad += bool(probs)
    out.append("%s %-14s %-24s -> %-26s %s%s" % (addr, scope, c["old"], n, "CLASH: " + "; ".join(probs) if probs
               else "ok", ("  (warn: " + "; ".join(warns) + ")") if warns else ""))

# same address, different names, across batches of one address space
by = {}
for r in rows:
    if r.get("batch", "").startswith(("engine", "ovl", "exe")) and r["address"]:
        by.setdefault(r["address"], set()).add((r["proposed"], r["scope"], r["batch"]))
cross = []
for a, s in sorted(by.items()):
    names = {p for p, _, _ in s}
    scopes = {sc for _, sc, _ in s}
    # ovl:NN code addresses (0x800CEDF8 slot) are per overlay; only engine / exe range addresses are shared
    if len(names) > 1 and len(scopes) > 1 and not (0x800CAE00 <= int(a, 16) < 0x80100000):
        cross.append("%s %s" % (a, "; ".join("%s (%s, %s)" % x for x in sorted(s))))

with open(D + "r279_clash_check.txt", "w") as f:
    f.write("r279 clash check: %d H2 names, %d with a clash\n\n" % (len(out), bad))
    f.write("\n".join(out) + "\n\n")
    f.write("Same engine / exe address named differently by two scopes (%d):\n" % len(cross))
    f.write("\n".join(cross) + "\n")
print(open(D + "r279_clash_check.txt").read())
