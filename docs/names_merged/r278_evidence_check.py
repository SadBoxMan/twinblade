#!/usr/bin/env python3
"""r278: mechanical evidence check of docs/names_merged/stage_H.csv.

For every stage_H row whose evidence (the `purpose` column of all_rows.csv, i.e. r275's evidence cell) names a
specific call or constant, look for it in the function's body in src/stg/<stage>*.c, using the proposed and the
current names of the callee. Writes r278_evidence_check.csv (one row per stage_H row) and prints the misses.

Run from the repository root: python3 docs/names_merged/r278_evidence_check.py [stage_H.csv]
Tokens checked:
  * a word that is a proposed name in all_rows.csv / dropped.csv (any card), a func_ / D_ name, or a name in the
    symbol files: found when the word or any current name proposed as it occurs in the body;
  * a hex constant 0x..: found when the body holds it (any case, any leading zeros) or its decimal value.
Words that are none of these (POLY_FT4, P01, plain English) are not checked.
"""
import csv, glob, os, re, sys

ROOT = os.getcwd()
D = os.path.join(ROOT, "docs/names_merged")
src = sys.argv[1] if len(sys.argv) > 1 else os.path.join(D, "stage_H.csv")

# proposed -> {current}
alias = {}
def add(p, c):
    alias.setdefault(p, set()).add(c)
for fn in ("all_rows.csv", "dropped.csv"):
    for r in csv.DictReader(open(os.path.join(D, fn))):
        add(r["proposed"], r["current"])
# r278 renames (so a re-run after the fixes still resolves both spellings)
ch = os.path.join(D, "CHANGES_r278.csv")
if os.path.exists(ch):
    for r in csv.DictReader(open(ch)):
        if r["old"] in alias:
            for c in list(alias[r["old"]]):
                add(r["new"], c)
known = set(alias)
for f in glob.glob(os.path.join(ROOT, "**/symbol_addrs*.txt"), recursive=True):
    for line in open(f):
        m = re.match(r"\s*([A-Za-z_]\w*)\s*=", line)
        if m:
            known.add(m.group(1))

purpose = {}
for r in csv.DictReader(open(os.path.join(D, "all_rows.csv"))):
    purpose[(r["scope"], r["address"])] = r["purpose"]

_files = {}
def stage_text(stage):
    if stage not in _files:
        t = ""
        for f in sorted(glob.glob(os.path.join(ROOT, "src/stg", stage + "*.c")) +
                        glob.glob(os.path.join(ROOT, "src/stage", stage + "*.c"))):
            t += open(f).read() + "\n"
        _files[stage] = t
    return _files[stage]

def body(stage, name):
    t = stage_text(stage)
    # ANSI or K&R definition: a line that starts with the type, names the function and does not end with ';'
    for m in re.finditer(r"^[A-Za-z_][^;\n=]*\b" + re.escape(name) + r"\s*\([^\n]*[^;\s]\s*$", t, re.M):
        i = t.find("{", m.start())
        if i < 0:
            continue
        depth = 0
        for j in range(i, len(t)):
            if t[j] == "{":
                depth += 1
            elif t[j] == "}":
                depth -= 1
                if depth == 0:
                    return t[i:j + 1]
    return None

def strip_comments(s):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", s, flags=re.S)

def has_const(b, h):
    v = int(h, 16)
    for m in re.finditer(r"\b0[xX]([0-9a-fA-F]+)[uUlL]*\b|\b(\d+)[uUlL]*\b", b):
        n = int(m.group(1), 16) if m.group(1) else int(m.group(2))
        # also the 16.16 fixed-point form (y - 0x40 is written + 0xFFC00000)
        if n in (v, v << 16, (-v) & 0xFFFF, (-(v << 16)) & 0xFFFFFFFF) or (v >= 0x8000 and n == v - 0x10000):
            return True
    return False

# r278's reading of every miss (the function was read; a miss is often a helper one call down)
READING = {
    ("stage:sc03_023", "0x8017E614"): "ok: var 0xCC == 0xE is tested in the inline flag_cc_is_0e()",
    ("stage:sc03_030", "0x8017EC34"): "ok: var 0xCF set through SetVarCF (func_8014BF18(4))",
    ("stage:sc03_030", "0x8017ECA8"): "ok: var 0xCF through GetVarCF / SetVarCF (func_8014BF6C / func_8014BF18)",
    ("stage:sc03_109", "0x8017DB84"): "ok: i * 0x400 is written i << 0xA",
    ("stage:sc03_110", "0x8017F2F8"): "ok: MoveImage is in the helper func_sc03_110_8017F3D4",
    ("stage:sc03_111", "0x80181344"): "ok: MoveImage is in the helper func_sc03_111_80181470",
    ("stage:sc03_116", "0x80181B88"): "ok: ClearSeqPoint through the wrapper func_sc03_116_8018232C",
    ("stage:sc05_008", "0x8017D434"): "ok: the 0x80 count is set by the caller (+0x200 = 0x80); this counts down",
    ("stage:sc06_000", "0x80180AB8"): "ok: D_8011DB28 = this function is set elsewhere (the hook); the body calls 0x80183674",
    ("stage:sc07_000", "0x8017ECB4"): "ok: spawn 0x38E is in the helper func_sc07_000_8017E1BC",
    ("stage:sc06_029", "0x8017EBC4"): "evidence wrong, name kept: the body spawns the 5 weak points (SpawnActorArg(0x294, i)); "
                                      "kind 0x2EF is spawned by 0x80180030",
    ("stage:sc06_029", "0x80180A70"): "WRONG: no 0x294 spawn (that loop is in 0x8017EBC4): the post-boss collapse "
                                      "sequence; renamed BossCollapseSequence",
}

rows = list(csv.DictReader(open(src)))
out = []
misses = 0
for r in rows:
    stage = r["scope"].split(":")[1]
    ev = purpose.get((r["scope"], r["address"]), "")
    b = body(stage, r["current"])
    toks = []
    for w in re.findall(r"\b[A-Za-z_]\w*\b", ev):
        if re.fullmatch(r"[a-z]+", w):
            continue  # plain English word that happens to be a symbol (open, close)
        if w in known or re.match(r"(func|D)_[0-9A-Fa-f_a-z]+$", w):
            if w not in toks:
                toks.append(w)
    consts = []
    ranges = {}
    for m in re.finditer(r"\b0[xX]([0-9A-Fa-f]+)\s*(?:-|\.\.|<=? progress <)\s*0[xX]([0-9A-Fa-f]+)\b", ev):
        ranges[m.group(2).upper()] = m.group(1).upper()
    for h in re.findall(r"\b0[xX]([0-9A-Fa-f]+)\b", ev):
        if h.upper() not in consts:
            consts.append(h.upper())
    miss = []
    if b is None:
        status = "no_body" if (toks or consts) else "no_body_nothing_to_check"
    else:
        bb = strip_comments(b)
        for w in toks:
            cands = {w} | alias.get(w, set())
            m = re.fullmatch(r"(func|D)_([0-9A-Fa-f]{8})", w)
            if m:  # stage-local symbols carry the stage in src: D_sc06_029_80190534
                cands.add("%s_%s_%s" % (m.group(1), stage, m.group(2)))
            if not any(re.search(r"\b" + re.escape(c) + r"\b", bb) for c in cands):
                miss.append(w)
        for h in consts:
            v = int(h, 16)
            if 0x8017B000 <= v < 0x80200000 and re.search(r"\b(func|D)_%s_%08X\b" % (stage, v), bb):
                continue  # an address written as the stage-local symbol
            if h in ranges:  # range end: C may test end + 1, end - 1 or the width (p - lo < n)
                lo = int(ranges[h], 16)
                if any(has_const(bb, "%X" % x) for x in (v, v + 1, v - 1, v - lo, v - lo + 1) if x > 0):
                    continue
            if not has_const(bb, h):
                miss.append("0x" + h)
        status = "nothing_to_check" if not (toks or consts) else ("miss" if miss else "ok")
    if status in ("miss", "no_body"):
        misses += 1
    out.append(dict(address=r["address"], scope=r["scope"], current=r["current"], proposed=r["proposed"],
                    evidence=ev, checked=" ".join(toks + ["0x" + h for h in consts]), status=status,
                    missing=" ".join(miss), reading=READING.get((r["scope"], r["address"]), "")))

w = csv.DictWriter(open(os.path.join(D, "r278_evidence_check.csv"), "w", newline=""),
                   fieldnames=list(out[0].keys()), lineterminator="\n")
w.writeheader()
w.writerows(out)
from collections import Counter
print(Counter(o["status"] for o in out))
for o in out:
    if o["status"] in ("miss", "no_body"):
        print(o["scope"], o["address"], o["proposed"], "|", o["evidence"], "| missing:", o["missing"] or o["status"])
