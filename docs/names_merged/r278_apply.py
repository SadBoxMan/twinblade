#!/usr/bin/env python3
"""r278: apply the Phase 2 cleanup to the r276 batches.

Reads each touched batch as r277 left it (git show origin/research/r277-names-check:docs/names_merged/<batch>),
applies the CHANGES list below (rename and / or note), and writes the batch back plus CHANGES_r278.csv
(address, scope, old, new, reason; old == new for a note-only change). Deterministic; run from the repository
root with that branch fetched: python3 docs/names_merged/r278_apply.py
"""
import csv, io, subprocess

BASE = "origin/research/r277-names-check"
D = "docs/names_merged/"

# (batch, scope, address, new name or None for note only, reason)
CHANGES = [
    # ---- step 1: stage_H evidence check (r278_evidence_check.py; misses read by hand) ----
    ("stage_H.csv", "stage:sc06_029", "0x80180A70", "BossCollapseSequence",
     "WRONG (r277): no SpawnActorArg(0x294) here; state 0xE of the core after EventAfterBoss: 3 x 8 debris of kind "
     "0x32B, kinds 0x32C / 0x32D, SoundCmd1(1), sounds 0xB35 / 0x9C8 / 0x9C9, then on the event's end EndEvent, "
     "state 0xF, GiveItem(0x24)"),
    ("stage_H.csv", "stage:sc06_029", "0x8017EBC4", None,
     "evidence corrected, name kept: the core's state 0 (model, HP +0x76 = 0x1E0, StoreImage x2) spawns the five weak "
     "points (5 x SpawnActorArg(0x294, i)), the evidence r275 gave to 0x80180A70; kind 0x2EF is spawned by "
     "0x80180030, not here"),
    # ---- step 2: "Thing + flag number" names whose body is an item hand-over or gift (61 such names; 56 kept) ----
    ("stage_H.csv", "stage:sc03_124", "0x80180734", "TalkerTakeItem58",
     "VAGUE (r277): an item hand-over: flag 0x106 set -> after-script; item 0x58 missing (func_800D0F8C) -> ask "
     "script; else thanks script, SetFlag(0x106), TakeItem(0x58)"),
    ("stage_H.csv", "stage:sc05_017", "0x80181C1C", "GiveItem28SetFlag124",
     "VAGUE (r277): GiveItem(0x28) first, then var 0x8A |= 0x40 and SetFlag(0x124): the item is the point"),
    ("stage_H.csv", "stage:sc02_017", "0x801839A8", "TakeFourItemsSetProgress50",
     "weak name: the body takes items 0x4E, 0x50, 0x51, 0x52 (TakeItem x4) and spawns four kind 0x121 "
     "(SpawnActorArg(0x121, 0..3)) before SetProgress(0x50): a hand-over of four items"),
    ("stage_H.csv", "stage:sc03_011", "0x80180EA8", "SceneTakeItem6C",
     "weak name: SetProgress(0x3F2) and TakeItem(0x6C) (and a +0xFC = 1 cue): the scene takes item 0x6C"),
    ("stage_H.csv", "stage:sc03_013", "0x8017FAA8", "EventGiveItem1C",
     "weak name: an 82-line event sequence (SpawnKind205 bursts, sounds 0x9E2 / 0x9E3, model and script swaps) "
     "that gives item 0x1C (GiveItem(0x1C)) and ends with EndEvent, SetProgress(0x3D4), FreeActor"),
]


def git_show(path):
    return subprocess.run(["git", "show", "%s:%s" % (BASE, path)], check=True, capture_output=True,
                          text=True).stdout


def main():
    batches = {}
    for b, *_ in CHANGES:
        if b not in batches:
            batches[b] = list(csv.DictReader(io.StringIO(git_show(D + b))))
    out = []
    for b, scope, addr, new, reason in CHANGES:
        hit = [r for r in batches[b] if r["scope"] == scope and r["address"] == addr]
        assert len(hit) == 1, (b, scope, addr, len(hit))
        r = hit[0]
        old = r["proposed"]
        if new:
            r["proposed"] = new
            note = "r278: was %s; %s" % (old, reason)
        else:
            note = "r278: " + reason
        r["note"] = (r["note"] + "; " if r["note"] else "") + note
        out.append(dict(address=addr, scope=scope, old=old, new=new or old, reason=reason))
    for b, rows in batches.items():
        with open(D + b, "w", newline="") as f:
            w = csv.DictWriter(f, fieldnames=list(rows[0].keys()), lineterminator="\n")
            w.writeheader()
            w.writerows(rows)
    with open(D + "CHANGES_r278.csv", "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=["address", "scope", "old", "new", "reason"], lineterminator="\n")
        w.writeheader()
        w.writerows(out)
    print(len(out), "changes,", sum(1 for o in out if o["old"] != o["new"]), "renames")


main()
