#!/usr/bin/env python3
"""r276: merge the r271-r275 naming proposals into one checked list.

Run from the repository root (needs the five research branches fetched):
    python3 docs/names_merged/merge_names.py
Reads the proposal docs with `git show origin/<branch>:<doc>` and the symbol
files / headers / C of the working tree; writes docs/names_merged/*.csv and
docs/names_merged/summary.txt. It edits nothing else.
"""
import csv, glob, io, os, re, subprocess, sys
from collections import defaultdict

OUT = "docs/names_merged"
SOURCES = [
    ("research/r271-abil-packages", "docs/abil_packages.md", "r271"),
    ("research/r271-abil-packages", "docs/mode_overlays.md", "r271"),
    ("research/r272-engine-names", "docs/names_stage_engine_proposals.md", "r272"),
    ("research/r272-engine-names", "docs/names_stage_engine_proposals_2.md", "r272"),
    ("research/r273-object-struct", "docs/object_struct.md", "r273"),
    ("research/r273-object-struct", "docs/structs_2.md", "r273"),
    ("research/r274-exe-names", "docs/names_exe_proposals.md", "r274"),
    ("research/r275-stage-survey", "docs/stage_survey.md", "r275"),
    ("research/r275-stage-survey", "docs/stage_survey_2.md", "r275"),
    ("research/r275-stage-survey", "docs/stage_survey_3.md", "r275"),
]

# Hand rulings for same-address conflicts, read from the C (see README).
# key (scope, address) -> (chosen name, reason)
RULINGS = {}
_rp = os.path.join(OUT, "rulings_applied.csv")
if os.path.exists(_rp):
    with open(_rp, newline="") as f:
        for r in csv.DictReader(f):
            RULINGS[(r["scope"], r["address"].upper().replace("0X", "0x"))] = (r["chosen"], r["reason"])

GENERIC = re.compile(r"^(func|D|jtbl|jpt|L)_(ovl[0-9a-f]{2}_)?[0-9A-Fa-f]{8}$")
ENGINE_LO, ENGINE_HI = 0x80100000, 0x8017BE9C  # engine bss + engine text (stage.yaml)
SLOT_LO = 0x800CAE00                            # package / mode-overlay slots start here


def git_show(br, path):
    return subprocess.run(["git", "show", f"origin/{br}:{path}"], check=True,
                          capture_output=True, text=True).stdout


def cells(line):
    s = line.strip()
    if not s.startswith("|"):
        return None
    parts = re.split(r"(?<!\\)\|", s.strip("|"))
    return [p.strip().replace("\\|", "|") for p in parts]


def norm_addr(a):
    a = a.strip().strip("`")
    m = re.fullmatch(r"0x([0-9A-Fa-f]{8})", a)
    return "0x" + m.group(1).upper() if m else None


def addr_scope(addr):
    v = int(addr, 16)
    if v >= ENGINE_HI:
        return None  # inside a stage image: needs a stage
    if v >= ENGINE_LO:
        return "engine"
    if v >= SLOT_LO:
        return None  # slot address: needs a package / overlay
    return "exe"


def conf_of(text):
    t = (text or "").strip()
    m = re.match(r"^(H|M|L)\b", t)
    return m.group(1) if m else None


def strip_name(n):
    n = n.strip().strip("`").strip("*")
    alt = None
    m = re.match(r"^(\S+)\s*\(also proposed:\s*([^)]*)\)", n)
    if m:
        n, alt = m.group(1), m.group(2).strip()
    return n.strip("`"), alt


rows = []      # proposal rows
family = []    # stage family shapes (no per-stage address)
skipped = defaultdict(int)


def add(addr, scope, cur, prop, purpose, conf, src, note=""):
    prop, alt = strip_name(prop)
    if alt:
        note = (note + "; " if note else "") + f"source also proposed {alt}"
    if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", prop or ""):
        skipped[f"{src}: proposed not an identifier"] += 1
        return
    rows.append(dict(address=addr, scope=scope, current=cur.strip().strip("`"), proposed=prop,
                     purpose=purpose.strip(), confidence=conf, source=src, note=note))


def parse_doc(text, doc, tag):
    lines = text.split("\n")
    head = None; heading = ""; h2 = ""; stage = None
    srcname = os.path.basename(doc)
    for i, line in enumerate(lines):
        if line.startswith("#"):
            heading = line.lstrip("#").strip()
            if line.startswith("## ") or line.startswith("### ") and doc.endswith("mode_overlays.md"):
                pass
            if re.match(r"^##\s", line):
                h2 = heading
            m = re.search(r"(?i)\bNames:\s*(SC\d\d_\d{3})", heading)
            stage = m.group(1).lower() if m else None
            head = None
            continue
        c = cells(line)
        if c is None:
            head = None
            continue
        if head is None:
            head = [x.lower() for x in c]
            continue
        if all(re.fullmatch(r":?-+:?", x or "-") for x in c):
            continue
        rec = dict(zip(head, c))
        src = f"{tag}:{srcname}:{i+1}"
        # --- abil_packages.md: only section 6
        if doc.endswith("abil_packages.md"):
            if not h2.startswith("6."):
                continue
            if "proposed name" not in rec:
                continue
            ev = rec.get("evidence", "")
            conf = "M" if "(M)" in ev else ("L" if "(L)" in ev else "H")
            note = "" if "(M)" in ev or "(L)" in ev else "conf inferred (source lists H or strong M only)"
            a = norm_addr(rec.get("address", ""))
            if not a:
                skipped[f"{srcname}: no address"] += 1; continue
            if "package" in rec:
                scope = "abil:" + rec["package"].lower()
            else:
                scope = addr_scope(a) or ("ovl:36" if 0x800CEDF8 <= int(a, 16) < ENGINE_LO else "?")
                # slot 0 holds the field overlay (ovl36) whenever a package runs
            add(a, scope, rec.get("current name", ""), rec["proposed name"], ev, conf, src, note)
            continue
        # --- mode_overlays.md: only section 4
        if doc.endswith("mode_overlays.md"):
            if not h2.startswith("4."):
                continue
            m = re.match(r"4\.\d+\s+(ovl[0-9a-f]{2})", heading)
            if not m or "proposed name" not in rec:
                continue
            ev = rec.get("evidence", "")
            conf = "M" if "(M)" in ev else ("L" if "(L)" in ev else "H")
            note = "" if conf != "H" else "conf inferred (source lists H or strong M only)"
            a = norm_addr(rec.get("address", ""))
            if not a:
                skipped[f"{srcname}: no address"] += 1; continue
            add(a, "ovl:" + m.group(1)[3:], rec.get("current name", ""), rec["proposed name"], ev, conf, src, note)
            continue
        # --- struct docs: function / global rows only (tables keyed by address with a proposed name)
        prop_key = next((k for k in ("proposed", "proposed name", "known name", "name used here") if k in rec), None)
        if prop_key is None:
            if doc.endswith(("object_struct.md", "structs_2.md")) and "off" in rec:
                skipped[f"{srcname}: struct field rows (not names)"] += 1
            continue
        shape_key = next((k for k in head if k.startswith("shape")), None)
        if shape_key:
            a = norm_addr(rec.get(shape_key, ""))
            m = re.match(r"(F\d{3}|P\d\d)", heading)
            fam = m.group(1) if m else heading[:20]
            fs = re.search(r"(?i)(sc\d\d_\d{3})", shape_key) or re.search(r"(?i)(sc\d\d_\d{3})", heading)
            family.append(dict(family=fam, address=a or rec.get(shape_key, ""), proposed=strip_name(rec[prop_key])[0],
                               confidence=conf_of(rec.get("conf")) or "?", first_stage=(fs.group(1).lower() if fs else ""),
                               purpose=rec.get("evidence", ""), source=src))
            continue
        addrs = [x.strip() for x in rec.get("address", "").split("/")]
        curs = [x.strip() for x in rec.get("current", "").split("/")]
        props = [x.strip() for x in rec[prop_key].split("/")]
        if not (len(addrs) == len(curs) == len(props)):
            skipped[f"{srcname}: unsplittable multi-address row"] += 1; continue
        conf = conf_of(rec.get("conf")) or ("H" if prop_key == "known name" else "?")
        note = ""
        if prop_key == "known name":
            note = "known name from a symbol_addrs.txt comment (r272)"
        elif prop_key == "name used here":
            note = "r275 working name for an outside call"
        if rec.get("conf", "").strip() not in ("H", "M", "L", ""):
            note = (note + "; " if note else "") + "source conf: " + rec.get("conf", "")
        for a0, c0, p0 in zip(addrs, curs, props):
            a = norm_addr(a0)
            if not a:
                skipped[f"{srcname}: no address"] += 1; continue
            if stage:
                scope = "stage:" + stage
            else:
                scope = addr_scope(a)
                if scope is None and int(a, 16) >= SLOT_LO and int(a, 16) < ENGINE_LO:
                    scope = "ovl:36" if "field overlay" in rec.get("evidence", "") else "?"
                if scope is None:
                    scope = "?"
            add(a, scope, c0, p0, rec.get("purpose", "") or rec.get("evidence", "") or rec.get("note", ""), conf, src, note)


for br, path, tag in SOURCES:
    parse_doc(git_show(br, path), path, tag)

# ---------------------------------------------------------------- symbol files
def read_syms(path):
    out = []
    for line in open(path):
        m = re.match(r"\s*([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(0x[0-9A-Fa-f]+)", line)
        if m:
            out.append((m.group(1), "0x" + m.group(2)[2:].upper().zfill(8)))
    return out

GLOBAL_FILES = ["symbol_addrs.txt", "symbol_addrs_psyq.txt", "symbol_addrs_stage.txt",
                "stg/symbol_addrs_engine.txt", "undefined_syms_extra.txt"]
glob_syms = defaultdict(set)   # address -> names (global link scope)
glob_names = defaultdict(set)  # name -> addresses
for f in GLOBAL_FILES:
    for n, a in read_syms(f):
        glob_syms[a].add(n); glob_names[n].add(a)
psyq_names = {n for n, a in read_syms("symbol_addrs_psyq.txt")}
for f in ("symbol_addrs_ovl39.txt",):
    pass
local_files = {}
for f in glob.glob("stg/symbol_addrs_sc*.txt"):
    local_files["stage:" + re.search(r"(sc\d\d_\d{3})", f).group(1)] = f
for f in glob.glob("abil/symbol_addrs_ovl*.txt"):
    local_files["abil:" + re.search(r"(ovl[0-9a-f]{2})", f).group(1)] = f
local_files["ovl:39"] = "symbol_addrs_ovl39.txt"
local_syms = {}
for sc, f in local_files.items():
    d = defaultdict(set); dn = defaultdict(set)
    for n, a in read_syms(f):
        d[a].add(n); dn[n].add(a)
    local_syms[sc] = (d, dn)

# identifiers declared in include/ (functions, externs, typedefs, macros)
hdr_names = set()
for f in glob.glob("include/*.h"):
    t = open(f, errors="replace").read()
    t = re.sub(r"/\*.*?\*/", " ", t, flags=re.S); t = re.sub(r"//[^\n]*", " ", t)
    hdr_names.update(re.findall(r"#\s*define\s+([A-Za-z_]\w*)", t))
    hdr_names.update(re.findall(r"}\s*([A-Za-z_]\w*)\s*;", t))
    hdr_names.update(re.findall(r"typedef[^;{}]*?\b([A-Za-z_]\w*)\s*;", t))
    hdr_names.update(re.findall(r"\b([A-Za-z_]\w*)\s*\(", t))
    hdr_names.update(re.findall(r"extern[^;(]*?\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])*\s*;", t))
# non-generic functions defined in the C (static helpers named by hand)
src_defs = defaultdict(set)
src_text_names = set()
for f in glob.glob("src/**/*.c", recursive=True):
    t = open(f, errors="replace").read()
    src_text_names.update(re.findall(r"\b((?:func|D)_(?:ovl[0-9a-f]{2}_)?[0-9A-Fa-f]{8})\b", t))
    for n in re.findall(r"^[A-Za-z_][\w \*]*?\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*\{", t, flags=re.M):
        if not GENERIC.match(n):
            src_defs[n].add(f)

C_KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto if int
long register return short signed sizeof static struct switch typedef union unsigned void volatile while
asm inline main""".split())
MIPS_REGS = set("zero at v0 v1 a0 a1 a2 a3 t0 t1 t2 t3 t4 t5 t6 t7 t8 t9 s0 s1 s2 s3 s4 s5 s6 s7 k0 k1 gp sp fp ra".split())
LIBC = set("""memcpy memset memmove memcmp strcpy strcmp strlen strcat strncpy printf sprintf rand srand abs labs
malloc free calloc realloc exit bcopy bzero bcmp atoi strtol qsort setjmp longjmp toupper tolower""".split())
# well-known PsyQ API names not (yet) in symbol_addrs_psyq.txt
PSYQ_KNOWN = set("""SpuInit SpuStart SpuQuit SsInit SsStart SsEnd CdInit CdControl CdRead CdSync CdReady CdSearchFile
PadInit PadRead ResetGraph SetDispMask DrawSync VSync VSyncCallback InitGeom GsInitGraph GsInit3D MemCardInit
MemCardStart DecDCTReset StopCallback ResetCallback ChangeClearPAD EnterCriticalSection ExitCriticalSection""".split())
PSYQ_PREFIX = re.compile(r"^(Gs[A-Z]|Ss[A-Z]|Spu[A-Z]|MemCard|Cd[A-Z]|Pad[A-Z]|Gpu[A-Z]|Kanji|Mdec|DecDCT)")


def is_global_scope(sc):
    return sc in ("exe", "engine")


def kind_of(r):
    c = r["current"]
    if re.match(r"^func_", c): return "func"
    if re.match(r"^(D|jtbl)_", c): return "data"
    if c.startswith("g_") or r["proposed"].startswith("g_"): return "data"
    return "func" if re.match(r"^[A-Z]", c) else "?"

# ---------------------------------------------------------------- merge same (scope, address, name)
for r in rows:
    r["kind"] = kind_of(r)
merged = {}
for r in rows:
    k = (r["scope"], r["address"], r["proposed"])
    if k in merged:
        m = merged[k]
        m["source"] += " " + r["source"]
        order = {"H": 0, "M": 1, "L": 2, "?": 3}
        if order.get(r["confidence"], 3) < order.get(m["confidence"], 3):
            m["confidence"] = r["confidence"]
        if r["note"] and r["note"] not in m["note"]:
            m["note"] = (m["note"] + "; " if m["note"] else "") + r["note"]
        if not m["current"] and r["current"]:
            m["current"] = r["current"]
    else:
        merged[k] = dict(r, flags=[], status="ok")
M = list(merged.values())

# ---------------------------------------------------------------- (d) already named
dropped = []
keep = []
for r in M:
    sc, a = r["scope"], r["address"]
    names = set(glob_syms.get(a, set()))
    if sc in local_syms:
        names |= local_syms[sc][0].get(a, set())
    real = {n for n in names if not GENERIC.match(n)}
    if real and not is_global_scope(sc) and sc not in local_syms and not sc.startswith("stage:"):
        pass
    if real:
        r["status"] = "dropped"
        r["note"] = (r["note"] + "; " if r["note"] else "") + \
            ("already applied" if r["proposed"] in real else "already named " + "/".join(sorted(real)))
        dropped.append(r)
    else:
        keep.append(r)
M = keep

# ---------------------------------------------------------------- (a) same address, different names
by_addr = defaultdict(list)
for r in M:
    by_addr[(r["scope"], r["address"])].append(r)
conflicts_a = []
for k, rs in by_addr.items():
    if len(rs) < 2:
        continue
    names = sorted({x["proposed"] for x in rs})
    if k in RULINGS:
        chosen, why = RULINGS[k]
        conflicts_a.append((k, names, chosen, why))
        if chosen not in names:  # a proposed name adjusted to the style (e.g. g_ added)
            base = next((x for x in rs if chosen.endswith(x["proposed"])), rs[0])
            base["note"] = (base["note"] + "; " if base["note"] else "") + f"adjusted from {base['proposed']}"
            base["proposed"] = chosen
        for x in rs:
            if x["proposed"] == chosen:
                x["note"] = (x["note"] + "; " if x["note"] else "") + \
                    "conflict resolved over " + "/".join(n for n in names if n != chosen) + f" ({why})"
            else:
                x["status"] = "superseded"
                x["note"] = (x["note"] + "; " if x["note"] else "") + f"superseded by {chosen}"
    else:
        conflicts_a.append((k, names, None, ""))
        for x in rs:
            x["flags"].append("a:same address, other names " + "/".join(n for n in names if n != x["proposed"]))
            x["status"] = "ruling"

live = [r for r in M if r["status"] != "superseded"]

# ---------------------------------------------------------------- (b) same name, different addresses
def link_group(sc):
    return "global" if is_global_scope(sc) else sc

by_name = defaultdict(set)
for r in live:
    by_name[(link_group(r["scope"]), r["proposed"])].add(r["address"])
global_prop = {n for (g, n), a in by_name.items() if g == "global"}
for r in live:
    g = link_group(r["scope"])
    addrs = by_name[(g, r["proposed"])] - {r["address"]}
    if addrs:
        r["flags"].append("b:same name at " + "/".join(sorted(addrs)) + f" in {g}")
        r["status"] = "ruling"
    if g != "global" and r["proposed"] in global_prop:
        r["flags"].append("b:local name equals a proposed global name")
        r["status"] = "ruling"

# ---------------------------------------------------------------- (c) clash with existing symbols / headers
for r in live:
    n, a, sc = r["proposed"], r["address"], r["scope"]
    hits = {x for x in glob_names.get(n, set()) if x != a}
    if sc in local_syms:
        hits |= {x for x in local_syms[sc][1].get(n, set()) if x != a}
    if not is_global_scope(sc) and sc not in local_syms and sc.startswith("ovl:"):
        pass
    if hits:
        r["flags"].append("c:existing symbol " + n + " at " + "/".join(sorted(hits)))
        r["status"] = "ruling"
    if n in hdr_names:
        r["flags"].append("c:identifier already in include/")
        r["status"] = "ruling"
    if n in src_defs:
        r["flags"].append("c:defined in " + "/".join(sorted(src_defs[n])[:2]))
        r["status"] = "ruling"
    if is_global_scope(sc):
        # a new global name must not collide with any local symbol in a stage / package
        lh = [s for s, (d, dn) in local_syms.items() if n in dn and a not in dn[n]]
        if lh:
            r["flags"].append("c:local symbol of the same name in " + ",".join(sorted(lh)[:3]))
            r["status"] = "ruling"

# ---------------------------------------------------------------- (e) style  (f) keywords / libraries
for r in live:
    n, k, sc = r["proposed"], r["kind"], r["scope"]
    if k == "func":
        if not re.fullmatch(r"[A-Z][A-Za-z0-9]*", n):
            if re.fullmatch(r"[A-Z][A-Za-z0-9]*_[A-Z][A-Za-z0-9]*", n) and sc.startswith("abil:"):
                r["flags"].append("e:package prefix Pkg_Name (r271 convention; one ruling)")
            else:
                r["flags"].append("e:function not CamelCase")
                r["status"] = "ruling" if not sc.startswith("abil:") else r["status"]
                if sc.startswith("abil:"):
                    r["flags"][-1] += " (abil)"
    elif k == "data":
        if not re.fullmatch(r"g_[A-Z][A-Za-z0-9]*", n):
            if sc.startswith(("abil:", "stage:", "ovl:")) and re.fullmatch(r"[A-Z][A-Za-z0-9]*(_[A-Z][A-Za-z0-9]*)?", n):
                r["flags"].append("e:local data without g_ (one ruling)")
            else:
                r["flags"].append("e:global without g_ / not CamelCase")
                r["status"] = "ruling"
    if n in C_KEYWORDS or n.lower() in MIPS_REGS or n in LIBC:
        r["flags"].append("f:C keyword / register / libc name"); r["status"] = "ruling"
    if n in psyq_names or n in PSYQ_KNOWN:
        r["flags"].append("f:PsyQ library name"); r["status"] = "ruling"
    elif PSYQ_PREFIX.match(n) and not n.startswith("g_"):
        r["flags"].append("f:PsyQ-like prefix (warning)")
    if sc == "?":
        r["flags"].append("scope unknown"); r["status"] = "ruling"
    if r["confidence"] not in ("H", "M", "L"):
        r["flags"].append("no confidence"); r["status"] = "ruling"
    cur = r["current"]
    if GENERIC.match(cur or "") and cur not in src_text_names:
        r["flags"].append("note:current name not seen in src/")

# The rule-of-one style rulings (e: package prefix, local data without g_) do not block a row.

# ---------------------------------------------------------------- write
def batch_of(r):
    sc = r["scope"]; c = r["confidence"]
    cls = "exe" if sc == "exe" else "engine" if sc == "engine" else "stage" if sc.startswith("stage:") \
        else "abil" if sc.startswith("abil:") else "ovl" if sc.startswith("ovl:") else None
    if cls is None:
        return None
    if cls == "exe":
        return "exe_H" if c == "H" else "exe_MM"
    return f"{cls}_H" if c == "H" else f"{cls}_ML"

COLS = ["address", "scope", "current", "proposed", "confidence", "source", "note"]
BATCHES = ["exe_H", "exe_MM", "engine_H", "engine_ML", "stage_H", "stage_ML", "abil_H", "abil_ML", "ovl_H", "ovl_ML"]
out = {b: [] for b in BATCHES}
rulings = []
for r in live:
    note = "; ".join([x for x in [r["note"]] if x] + r["flags"])
    row = dict(r, note=note)
    if r["status"] == "ruling":
        rulings.append(row)
    else:
        b = batch_of(r)
        (out[b] if b else rulings).append(row)

def key(r):
    return (r["scope"], int(r["address"], 16), r["proposed"])

def write(name, rs, cols=COLS):
    with open(os.path.join(OUT, name), "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=cols, extrasaction="ignore", lineterminator="\n")
        w.writeheader()
        for r in sorted(rs, key=key):
            w.writerow(r)

for b in BATCHES:
    write(b + ".csv", out[b])
write("needs_ruling.csv", rulings)
write("dropped.csv", dropped + [r for r in M if r["status"] == "superseded"])
with open(os.path.join(OUT, "stage_family_shapes.csv"), "w", newline="") as f:
    w = csv.DictWriter(f, fieldnames=["family", "first_stage", "address", "proposed", "confidence", "source", "purpose"],
                       lineterminator="\n", extrasaction="ignore")
    w.writeheader()
    for r in family:
        w.writerow(r)
with open(os.path.join(OUT, "all_rows.csv"), "w", newline="") as f:
    cols = ["address", "scope", "current", "proposed", "purpose", "confidence", "source", "status", "note"]
    w = csv.DictWriter(f, fieldnames=cols, extrasaction="ignore", lineterminator="\n")
    w.writeheader()
    allr = [dict(r, note="; ".join([x for x in [r["note"]] if x] + r.get("flags", []))) for r in M + dropped]
    for r in sorted(allr, key=key):
        w.writerow(r)

# summary
S = []
S.append(f"parsed rows: {len(rows)}; unique (scope,address,name): {len(merged)}; family shapes: {len(family)}")
for k, v in sorted(skipped.items()):
    S.append(f"skipped: {k}: {v}")
S.append(f"dropped (already named): {len(dropped)}; superseded by ruling: {sum(1 for r in M if r['status']=='superseded')}")
S.append(f"needs ruling: {len(rulings)}")
for b in BATCHES:
    S.append(f"{b}: {len(out[b])}")
cnt = defaultdict(lambda: defaultdict(int))
for r in live:
    cls = r["scope"].split(":")[0]
    cnt[cls][r["confidence"]] += 1
for cls in sorted(cnt):
    S.append(f"scope {cls}: " + ", ".join(f"{c} {n}" for c, n in sorted(cnt[cls].items())))
S.append(f"same-address conflicts: {len(conflicts_a)} (resolved {sum(1 for c in conflicts_a if c[2])})")
for k, names, chosen, why in sorted(conflicts_a):
    S.append(f"  {k[0]} {k[1]}: {' / '.join(names)} -> {chosen or 'NEEDS A RULING'}")
fl = defaultdict(int)
for r in rulings:
    for x in r["flags"]:
        fl[x[:45]] += 1
S.append("flag counts in needs_ruling:")
for k, v in sorted(fl.items(), key=lambda kv: -kv[1])[:60]:
    S.append(f"  {v:5d} {k}")
open(os.path.join(OUT, "summary.txt"), "w").write("\n".join(S) + "\n")
print("\n".join(S))
