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

# ---- step 3a: the engine object-record helpers 0x80146C98-0x80146E98 (r277 error pattern 1) ----
# They work on the 0x24-byte ObjHeader every object shares (r273 object_struct.md 3.1: +0x02 sub-state, +0x10 vel,
# +0x1C timer) and on +0x24..+0x2C, which is not an acceleration: func_80147F78 / func_80147B5C copy it into the
# pending push D_80127090 and from there into vel (+0x10..+0x18); the actor / Mover accel is +0x44 (r273: "push",
# a second velocity). Callers: Musashi's action handlers (engine_801458E0.c, 62 calls of the +0x24 setters), stage
# player-motion code, ability packages (ovl1a, ovl25, ovl31, ovl32, ovl34 ...) on Musashi and their 0x68 objects,
# engine effects. One family: *ObjState, *ObjVel, *ObjPush*, *ObjTimer.
OBJ = "generic object-record helper (r277 VAGUE family): callers pass Musashi, actors, 0x68 objects and effects, " \
      "not only effects; "
PUSH = "+0x24..+0x2C is copied into vel through the pending push D_80127090 (func_80147F78, func_80147B5C), so a " \
       "stored velocity (r273: Musashi's push), not accel (accel is +0x44); "
for a, new_, what in [
        ("0x80146C98", "SetObjState", "+0x02 = n"),
        ("0x80146CA0", "NextObjState", "+0x02 += 1"),
        ("0x80146CB4", "PrevObjState", "+0x02 -= 1"),
        ("0x80146D80", "ClearObjVel", "+0x10..+0x18 = 0"),
        ("0x80146D90", "ClearObjPush", "SetObjPush(0, 0, 0)"),
        ("0x80146DB8", "SetObjPushV", "SetObjPush from a vector"),
        ("0x80146DE8", "SetObjPush", "+0x24..+0x2C = (x, y, z); r277 suggested SetObjAccel"),
        ("0x80146DF8", "SetObjPushClamped", "SetObjPush with each axis clamped to +-limit"),
        ("0x80146E90", "SetObjTimer", "+0x1C = n"),
        ("0x80146E98", "TickObjTimer", "count +0x1C down, 1 at 0")]:
    CHANGES.append(("engine_H.csv", "engine", a, new_,
                    OBJ + (PUSH if "Push" in new_ else "") + what))

# ---- step 3b: r277's other fix (docs/names_merged_fixes.csv) ----
CHANGES.append(("exe_H.csv", "exe", "0x8002B0B4", "CardStep",
                "VAGUE (r277): the card state machine (on g_CardStep, D_800760AC) dispatches check / save / load / "
                "mode 3 on mode & 7, not save-only; r277's MemCardStep not taken: the EXE links LIBMCRD, whose "
                "MemCard* names are in symbol_addrs_psyq.txt, so a MemCard prefix would read as a library function"))

# ---- step 3c: Pkg_ prefix (r277 pattern 6): r271's own rule is Prefix_Name; 36 slot-2 / slot-3 rows lack the "_" --
PKG = {"abil:ovl2e": "Grenade", "abil:ovl2f": "Javelin", "abil:ovl30": "Lumina", "abil:ovl31": ("Slam", "Shockwave"),
       "abil:ovl32": "Barrier", "abil:ovl33": "Flame", "abil:ovl34": "Spin", "abil:ovl35": "Glide"}
PKG_ROWS = [
    ("abil:ovl2e", "0x800CAE44", "GrenadeUpdate"), ("abil:ovl2e", "0x800CAFC4", "GrenadeObjUpdate"),
    ("abil:ovl2e", "0x800CB114", "GrenadeObjFly"), ("abil:ovl2e", "0x800CB304", "GrenadeObjExplode"),
    ("abil:ovl2e", "0x800CB488", "GrenadeFlameUpdate"),
    ("abil:ovl2f", "0x800CAF9C", "JavelinObjUpdate"), ("abil:ovl2f", "0x800CB118", "JavelinObjFly"),
    ("abil:ovl2f", "0x800CB358", "JavelinGlowUpdate"),
    ("abil:ovl30", "0x800CCBF0", "LuminaSpinSlash"), ("abil:ovl30", "0x800CCD60", "LuminaSetBladeScale"),
    ("abil:ovl30", "0x800CCD94", "LuminaSpinSteps"),
    ("abil:ovl31", "0x800CCE24", "SlamQuake"), ("abil:ovl31", "0x800CCF14", "ShockwaveUpdate"),
    ("abil:ovl31", "0x800CD3C8", "ShockwaveRippleUpdate"), ("abil:ovl31", "0x800CD6DC", "SlamSteps"),
    ("abil:ovl32", "0x800CCB78", "BarrierStart"), ("abil:ovl32", "0x800CCBE4", "BarrierObjUpdate"),
    ("abil:ovl32", "0x800CCF68", "BarrierBreak"), ("abil:ovl32", "0x800CD198", "BarrierShotUpdate"),
    ("abil:ovl32", "0x800CE1E4", "BarrierSteps"),
    ("abil:ovl33", "0x800CCB78", "FlameStart"), ("abil:ovl33", "0x800CCF28", "FlameHoldNotify"),
    ("abil:ovl33", "0x800CCF58", "FlameCancel"), ("abil:ovl33", "0x800CD328", "FlameShotUpdate"),
    ("abil:ovl33", "0x800CD668", "FlameSteps"),
    ("abil:ovl34", "0x800CCB78", "SpinStart"), ("abil:ovl34", "0x800CCCC0", "SpinEnter"),
    ("abil:ovl34", "0x800CCCF4", "SpinDispatch"), ("abil:ovl34", "0x800CD494", "SpinTurn"),
    ("abil:ovl34", "0x800CD5CC", "SpinContactHit"), ("abil:ovl34", "0x800CE040", "SpinSteps"),
    ("abil:ovl34", "0x800CE044", "SpinStates"),
    ("abil:ovl35", "0x800CCB28", "GlideStart"), ("abil:ovl35", "0x800CCB78", "GlideMarkTrail"),
    ("abil:ovl35", "0x800CCB84", "GlideTrailUpdate"), ("abil:ovl35", "0x800CCBC0", "GlideTrailDraw"),
]
for scope, a, old in PKG_ROWS:
    pres = PKG[scope] if isinstance(PKG[scope], tuple) else (PKG[scope],)
    pre = [p for p in pres if old.startswith(p)][0]
    CHANGES.append(("abil_H.csv", scope, a, pre + "_" + old[len(pre):],
                    "style (r277 pattern 6): r271 section 6 gives package-local names a Prefix_ (here %s); "
                    "e:package prefix Pkg_Name (r271 convention; one ruling)%s"
                    % ("/".join(pres), "; package-local data without g_ (one ruling)" if a.startswith("0x800C")
                       and old.endswith(("Steps", "States")) else "")))

# ---- step 3d: one word for the 0xC4-byte block at 0x80115110 (r277 pattern 6) ----
# engine_H names the block g_StageMode and its hook D_8011DB24 g_StageFrameHook; ovl_H named the same two addresses
# g_StageMenu / g_StageMenuUpdate: two names for one symbol. The engine card owns engine bss (r276 rule 4) and the C
# already calls the struct StageMode (src/stage/engine_8013C98C.c, engine_8012F5F4.c), so the word is Mode.
SM = "one word for the 0x80115110 block (r277 pattern 6): engine_H's g_StageMode (the C's typedef is StageMode); "
for scope, a, old, new_ in [
        ("ovl:36", "0x800D2468", "ClearStageMenu", "ClearStageMode"),
        ("ovl:36", "0x800D24A0", "OpenStageMenu", "OpenStageMode"),
        ("ovl:36", "0x800D25FC", "StageMenuUpdate", "StageModeUpdate"),
        ("ovl:36", "0x800D2624", "CloseStageMenu", "CloseStageMode")]:
    CHANGES.append(("ovl_H.csv", scope, a, new_, SM + "the functions take the same word"))
CHANGES.append(("ovl_H.csv", "ovl:36", "0x80115110", "g_StageMode",
                SM + "same address and symbol as engine_H's row: define it once, in the engine's symbol file"))
CHANGES.append(("ovl_H.csv", "ovl:36", "0x8011DB24", "g_StageFrameHook",
                "same address as engine_H's g_StageFrameHook (the hook StageModeUpdate calls; the engine and the "
                "stages set it next to OpenStageMode): one symbol, the engine's name, define it once in the "
                "engine's symbol file"))


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
