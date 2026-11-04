#!/usr/bin/env python3
"""r279: rebuild engine_H2.csv / exe_H2.csv / stage_H2.csv from r279_verdicts.csv (run from the repo root).

A row goes into its H2 batch when its verdict is PROMOTE (new_conf H) or FIX (the new name; new_conf H or M). The
other columns come from the row's ML / MM batch; note = "r279 promote" or "r279 fix: was <old name>", then the
batch's own note."""
import csv
D = "docs/names_merged/"
src = {}
for b in ("engine_ML.csv", "exe_MM.csv", "stage_ML.csv"):
    for r in csv.DictReader(open(D + b)):
        src[(r["scope"], r["address"])] = (b, r)
out = {"engine_ML.csv": [], "exe_MM.csv": [], "stage_ML.csv": []}
for v in csv.DictReader(open(D + "r279_verdicts.csv")):
    if v["verdict"] not in ("PROMOTE", "FIX"):
        continue
    b, r = src[(v["scope"], v["address"])]
    note = "r279 promote" if v["verdict"] == "PROMOTE" else "r279 fix: was " + v["old_name"]
    if r["note"]:
        note += "; " + r["note"]
    out[b].append(dict(address=r["address"], scope=r["scope"], current=r["current"], proposed=v["new_name"],
                       confidence=v["new_conf"], source=r["source"], note=note))
for b, name in (("engine_ML.csv", "engine_H2.csv"), ("exe_MM.csv", "exe_H2.csv"), ("stage_ML.csv", "stage_H2.csv")):
    with open(D + name, "w", newline="") as f:
        w = csv.DictWriter(f, ["address", "scope", "current", "proposed", "confidence", "source", "note"],
                           lineterminator="\n")
        w.writeheader()
        w.writerows(sorted(out[b], key=lambda x: (x["scope"], int(x["address"], 16))))
    print(name, len(out[b]))
