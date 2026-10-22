# The animation script controller (stage code, 0x8012AAAC in the dump `dump_10`)

Read from the RAM dump with `objdump` (the stage engine code is not in `SLUS_007.26`; it comes with each stage's overlay, so its address
differs between stages, but the logic is the same). This is the routine that steps an object through its animation script.

The controller and its helpers are matched C now (src/stage/engine.c, SC03_001's addresses): `func_8012AAAC` is the step,
`func_8012A988` the per-frame countdown, `func_8012A908` the loop over the actors, `SetScript` / `func_8012A860` (at the end) /
`func_8012ACA0` (the default script) the starts.

## Script entries

A script is an array of 8-byte entries: `{ s32 pointer; s16 value; s16 extra }`.

* `value >= 0`: a **frame**. `pointer` is the pose, `value` is how many game frames to show it. The controller stores the pose
  pointer in the object's pose slot (`*(obj+0x20)+0x20`) and the duration in `obj+0x98`.
* `value < 0`: a **command**. The value (-50 to -1) indexes a jump table (0x801EB32C in the dump). Only six are defined; -49 to -6 do nothing.

| value | what it does |
|---|---|
| -1 | End of script. If a script was *called* (-3), return to it (restore the saved script and index). Otherwise restart this script from entry 0 and set flag 0x4000 ("finished one pass"). |
| -2 | Stop. If a script was called, return as -1. Otherwise hold the current pose (timer `obj+0x98` = 0): the script ends and the last pose stays. |
| -3 | **Call** the script at `pointer`; when it ends with -1 or -2 control returns to the entry after the call. One level only (a call inside a call just steps on). |
| -4 | **Jump** to the script at `pointer` (no return), clearing flags 0x0600. |
| -5 | Step back one entry and re-run it with flag 0x0400 set (used to replay the previous frame). |
| -50 | A marker: step on and set flag 0x2000 (an event for other code to look at, such as a sound or a hit window). |

## Object fields used

| offset | meaning |
|---|---|
| +0x20 | pointer to the pose slot owner (its +0x20 receives the current pose pointer) |
| +0x72 | state flags: 0x4000 = script wrapped this tick, 0x2000 = marker passed, 0x0400 = stepped back, 0x0600 cleared when a new script starts |
| +0x90 | current script pointer |
| +0x94 | current entry index |
| +0x98 | frames left to show the current pose |
| +0x9A / +0x9C | return index and return script for a called script (0 = none) |

Other routines next to it: `0x8012AA80` advances the index and runs the step; `0x8012ACA0` starts the **default script**
(at 0x80183B84 in that stage: the object's idle); `0x8012ACE0` counts the entries of the current script by scanning to the
end command; a few one-line setters follow (`+0x02`, `+0x34` counters, probably the face and sub-state).

## What this means for the assets

* Clips are mostly *not* chains: chaining (-3/-4) is rare in the RAM dumps. The idle/attack/hurt split is made by the actor code, which calls SetScript with a different script per state (see below). `tools/live_scripts.py` stops a script at its first command; `tools/script_chains.py` lists the call/jump commands that do exist.
* The `extra` half is not used by the controller. Something else reads it (candidates: sound, hit windows, the face setter).
* Marker -50 and flag 0x2000 show where the game places events inside a clip.

## Who sets the scripts (dump_10 stage)

* `0x8012A828` (and an identical copy at `0x8012A8B0`) is **SetScript(obj, script)**: script to `+0x90`, index 0, return slot cleared, flags `&= 0xF9FF`, then one step.
* `0x8012A860` is **SetScriptAtEnd(obj, script)**: the same, but starts on the last frame (index = length - 1) with flag 0x0200 set.
* `0x8012A908` runs the stepper over the object array (96 objects, 0x10C bytes each, starting 0x801202A0 in that stage) for objects with flag 0x1000, or all of them while the word at 0x801270C0 is 1.
* SetScript has about 100 call sites, nearly all in `0x8017F2xx` to `0x801817xx`: the per-actor behaviour code. Each call picks the clip (a script address in the stage's data, `0x8018xxxx` / `0x8019xxxx`) for one state of one actor (idle, notice, attack, hurt). The script chains (-3/-4) are rare: only one call command exists in that dump's RAM, so the **clip choice is made in code, not by chaining**.
* Next step: for each call site, resolve the `lui`/`addiu` pair to the script address, group call sites by actor function, and join with the scripts already matched to models in `disc/dumps/verified_scripts.json`. That gives each model's clip names (the state the code is in when it calls) and fills the round-enemy gap.

## Call-site mapping (done)

`tools/script_callsites.py` finds SetScript in a dump by its instruction pattern, resolves each call's script address, and matches it to
the exported clips; `tools/callsite_report.py` writes `docs/clip_callsites.md` (604 actor-function groups over all dumps);
`tools/callsite_export.py --write` exported the scripts that a one-model actor function selects but `animations.json` lacked:
**62 clips for 14 models** (source `actor code call site`; skipped when the poses were implausible or the script did not start where
the code points). Medium confidence: the model is known from the function's other, already-verified clips, and the code is what picks the
script; the clips are not yet named (the state each represents needs the function's conditions read). Calls that load the script from
a table (`lw a1,table(...)`) are not resolved yet, and the round enemy (`M2a5b60b6_1parts`) has no actor function in these dumps, so its clips are still missing.

## Clip names (tools/name_clips.py)

The actor functions are message handlers: one is chosen by the actor's state number (an index into a table of function pointers, read at
`obj+2`), and inside it a global event code (the word at 0x801EDA10 in the dump stage, set by cutscene and dialogue scripts) is compared
against constants, each branch setting one clip. Clips are named from that, and written to the clip's `state` key (the `.glb` animation name):

* `event_N` : selected when the event code is N (large values shown in hex; codes like 0x5959 and 0x3131 are a repeated byte);
* `stateN` / `stateN_<tail>` : selected by the actor's state function number N (no event code in the branch), tail added when two clips share a name;
* `idle` : the model's most-selected script (3+ calls), taken as its default stance;
* `state_<tail>` : neither found.

The names say **when the game plays a clip**, not what it looks like (no 'bite' or 'wave' yet); a recording of the event or state, or a look at the
clip, still has to add that. Existing `state` names are never overwritten.

## NPC animation scripts (tools/npc_export.py)

NPC definition records in the stage images (`tools/npc_records.py`) hold the model's part table pointer and three animation-script pointers. The scripts are exported into the
model's `animations.json` as `npc_slot1`, `npc_slot2`, `npc_slot3` (46 scripts, 18 models; same pose-record stride check as the part count). The model link is exact. The role of a slot is **not** known: the
10-part villager scripts are shared by six models and move a lot in slots 1 and 3 and less in slot 2, the priest barely moves in slots 1 and 2, so the slot order alone does not decide idle, walk or talk. Each clip's `note` gives its frame count, motion and how many models share it.
