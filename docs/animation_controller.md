# The animation script controller (stage code, 0x8012AAAC in the dump `dump_10`)

Read from the RAM dump with `objdump` (the stage engine code is not in `SLUS_007.26`; it comes with each stage's overlay, so its address
differs between stages, but the logic is the same). This is the routine that steps an object through its animation script.

The controller and its helpers are matched C now (src/stage/engine.c:1157-1343, SC03_001's addresses, which equal dump_10's for
this block): `AnimStep` (0x8012AAAC) is the step, `AnimTick` (0x8012A988) the per-frame countdown, `AnimateActors` (0x8012A908)
the loop over the actors, `SetScript` / `SetScriptAtEnd` / `SetScriptCopy` / `AnimStartDefault` the starts. Every handler and
helper, with its role, name and evidence, is in **Handlers and helpers (r665)** below.

## Script entries

A script is an array of 8-byte entries: `{ s32 pointer; s16 value; s16 extra }`.

* `value >= 0`: a **frame**. `pointer` is the pose, `value` is how many game frames to show it. The controller stores the pose
  pointer in the object's pose slot (`*(obj+0x20)+0x20`) and the duration in `obj+0x98`.
* `value < 0`: a **command**. `value + 50` indexes a 50-word jump table (0x801EB32C in the dump). Only six are defined; -49 to -6
  go to the switch's end and so freeze the actor on its current pose (see `AnimCmdNone` below).

| value | what it does |
|---|---|
| -1 | End of script. If a script was *called* (-3), return to it (restore the saved script and index). Otherwise restart this script from entry 0 and set flag 0x4000 ("finished one pass"). |
| -2 | Stop. If a script was called, return as -1. Otherwise hold the current pose (timer `obj+0x98` = 0): the script ends and the last pose stays. |
| -3 | **Call** the script at `pointer`; when it ends with -1 or -2 control returns to the entry after the call. One level only (a call inside a call just steps on). |
| -4 | **Jump** to the script at `pointer` (no return), clearing flags 0x0600. |
| -5 | **Reverse**: set flag 0x0400 and step back one entry. `AnimTick` then walks the script backwards to entry 0, clears 0x0400 and goes on forwards from entry 1, so a script ending in -5 plays as a ping-pong (r665; the older reading "replay the previous frame" was only the first step). |
| -50 | A marker: step on and set flag 0x2000 (an event for other code to look at, such as a sound or a hit window). |

## Object fields used

| offset | meaning |
|---|---|
| +0x20 | pointer to the pose slot owner (its +0x20 receives the current pose pointer) |
| +0x72 | `animFlags`: 0x4000 = script wrapped this tick, 0x2000 = marker passed this tick, 0x0400 = playing backwards after -5, 0x0200 = playing backwards from the end (SetScriptAtEnd), 0x0600 cleared when a new script starts, 0x1000 = animate even when D_801270C0 != 1, 0x8000 = came from a spawn row (not animation; docs/actor_families.md) |
| +0x90 | current script pointer |
| +0x94 | current entry index |
| +0x98 | frames left to show the current pose |
| +0x9A / +0x9C | return index and return script for a called script (0 = none) |

Other routines next to it: `0x8012AA80` is not a routine but the tail of `AnimTick` (`index++` then the call to `AnimStep`; the
r220-era note "advances the index and runs the step" read it from the dump before the C existed); `0x8012ACA0` (`AnimStartDefault`)
starts the **default script** (at 0x80183B84 in that stage: one pose then -2); `0x8012ACE0` (`AnimScriptLength`) counts the entries of
the current script by scanning to the end command; four one-line setters follow, which are the actor's **state** helpers, not face
setters (`SetState` / `NextState` / `SetCounter` / `IncCounter` on `+0x02 state` and `+0x34 stateCount`; corrected r665).

## Handlers and helpers (r665)

Names are this project's (none come from Sony or the game): the helper names were proposed in docs/names_stage_engine_proposals.md
and are already used in src/; the seven command-case names are **new** proposals for r396 (they are case labels inside `AnimStep`,
not functions, so they would become an enum, not symbols). All are `Unofficial`. Addresses are dump_10's (= SC03_001's for this
block). Handler addresses come from the jump table read out of `disc/dumps/dump_10_ram.bin` at 0x801EB32C (index = value + 50).

### The command handlers (cases of `AnimStep`, engine.c:1253-1314)

| value | handler | proposed name (Unofficial) | role | evidence in the matched C |
|---|---|---|---|---|
| -1 | 0x8012AB3C | `AnimCmdEnd` (enum `ANIM_END`) | end of the script: return from a call, else loop to entry 0 and pulse 0x4000 | `case -1`: `r = a->retScript; if (r != NULL) { ret: a->script = r; a->index = a->retIndex; ... AnimStep(a); } else { a->index = 0; AnimStep(a); a->animFlags \|= 0x4000; }`. 0x4000 is set *after* the nested `AnimStep` (which clears it, `&= 0xBFFF`), so it survives; a returning call does not set it (a called clip ending is not a pass of the caller) |
| -2 | 0x8012AB24 | `AnimCmdStop` (enum `ANIM_STOP`) | stop: return from a call as -1 does, else hold the pose | `case -2`: `if (r == NULL) { a->animTimer = 0; break; } goto ret;`. `AnimTick` returns early on `animTimer == 0`, so the actor keeps its last pose until a new script is set |
| -3 | 0x8012ABBC | `AnimCmdCall` (enum `ANIM_CALL`) | call the script at `pointer`, one level deep | `n = ++a->index; if (a->retScript != NULL) AnimStep(a); else { old = a->script; a->script = e->pose; ... AnimStep(a); a->retScript = old; a->retIndex = n; }`: inside a call the -3 is stepped over; the return point is the entry after the -3 |
| -4 | 0x8012AB8C | `AnimCmdJump` (enum `ANIM_JUMP`) | jump to the script at `pointer` | the body is `SetScript`'s inlined: `a->script = e->pose; a->index = 0; a->retScript = NULL; a->retIndex = 0; a->animFlags &= 0xF9FF; AnimStep(a)` (drops any pending return and both backwards modes) |
| -5 | 0x8012AC40 | `AnimCmdReverse` (enum `ANIM_REVERSE`) | play back to the start, then forwards again (ping-pong) | `a->animFlags \|= 0x400; a->index--; AnimStep(a)`; `AnimTick` (engine.c:1220): `if (a->animFlags & 0x400) { if (--a->index < 0) { a->index = 1; a->animFlags &= 0xFBFF; } }` |
| -50 | 0x8012AC18 | `AnimCmdMarker` (enum `ANIM_MARKER`) | step over and pulse 0x2000 | `a->index++; AnimStep(a); a->animFlags \|= 0x2000;` (set after the nested step, like -1's 0x4000) |
| -49..-6 | 0x8012AC84 (44 table words) | `AnimCmdNone` (enum none) | undefined: nothing runs | the switch has no `default`; `animTimer` is still 0 from the countdown, so `AnimTick` returns early from then on: an undefined command acts as a stop without the call return. No script uses one: **r799** walked every script the stage code starts (below, 'r799: every started script walked') and none reaches a value in -49..-6 |

### The flags as one-tick pulses

`AnimTick` starts with `a->animFlags &= 0x9FFF` (clears 0x4000 and 0x2000) and `AnimStep` with `&= 0xBFFF`, so 0x4000 and 0x2000
are true only in the frame the end or the marker was passed; actor code reads them after `AnimateActors` has run. Readers in the
matched C (`animFlags` or `AF(x, u16, 0x72)`):

* **0x4000** (wrapped): 307 reads in 60 files, the actor states' "wait for the clip to finish" test, e.g.
  sc01_005.c:2925 `if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0)` (looped once, or stopped).
* **0x0400** (reverse): sc04_002.c:3480 / sc04_003.c:2112 / sc04_004.c:2685 `index == 0xE && !(... & 0x400)` (entry 14 reached
  going forwards) and sc04_011.c:3235 `(o->animFlags & 0x400) && o->index == 0` (back at the start): both fit the ping-pong reading.
* **0x0200** (backwards from the end): read only by `AnimTick` (engine.c:1225).
* **0x2000** (marker): **no reader** in src/stage or src/stg, by name or by raw offset (also checked `+0x73 & 0x20`). Who uses -50:
  **nobody (r799):** no script the stage code starts reaches a -50 entry (the walk below), and Phase 1 left no code in asm,
  so the marker and its pulse are unused in the shipped stage set (the case is still in `AnimStep`). Musashi's "0x2000 marker" in
  docs/song_script_starts.md is his own motion field (+0xB8), not this one.

### The helpers

| address | name (Unofficial, in src) | role | evidence |
|---|---|---|---|
| 0x8012A828 | `SetScript(a, script)` | start a clip from entry 0 | `script`, `index = 0`, return slot cleared, `animFlags &= 0xF9FF`, `AnimStep`. ~100 call sites in actor code (docs/clip_callsites.md) |
| 0x8012A860 | `SetScriptAtEnd(a, script)` | start a clip on its last entry and play it **backwards** | `index = AnimScriptLength(a) - 1`, `animFlags \|= 0x200`. `AnimTick` then counts down; at index < 0 it wraps to the last entry if the script ends in -1 (`script[n].value == -1`), else holds entry 0 (`index = 0; animTimer = 0`): a reversed clip loops only if the forward one loops |
| 0x8012A8B0 | `SetScriptCopy(a, script)` | a byte-identical second `SetScript` | the same body; 64 calls in 4 files (names_stage_engine_proposals.md) |
| 0x8012A8E8 | `AnimStepNow(a)` | run one step at once (show the current entry without waiting) | `AnimStep(a)` only; 4 calls |
| 0x8012A908 | `AnimateActors()` | once a frame, `AnimTick` for the 96 actors | `for (i = 0; i < 0x60; i++, a++) if (D_801270C0 == 1 \|\| (a->animFlags & 0x1000)) AnimTick(a);` |
| 0x8012A988 | `AnimTick(a)` | one actor's frame: count down the pose, then move one entry (forwards, or backwards under 0x400 / 0x200) and step | returns early for a free slot (`kind == 0`), reaction state `react == 0x11` (animation frozen), a stopped script (`animTimer == 0`), a pose still running (`--animTimer > 0`) or no script |
| 0x8012AAAC | `AnimStep(a)` | run the current entry: show a frame (`a->model->pose = e->pose; a->animTimer = e->value`) or dispatch a command | the table above |
| 0x8012ACA0 | `AnimStartDefault(a)` | `SetScript` with the stage's default script | `a->script = D_8018D838` (SC03_001; 0x80183B84 in dump_10), body as `SetScript` |
| 0x8012ACE0 | `AnimScriptLength(a)` | number of entries before the first -2, -1 or a 0-frame entry | `switch (obj->script[i].value) { case -2: case -1: case 0: return i; }`, everything else counted (so a 0-duration frame also ends the count). **r799:** 184 of the 1,849 started scripts have one: 122 as their only entry (a held pose) and 62 after frames, where it ends the clip on that pose (27 of them have a -1 right after it that is never reached) |
| 0x8012AD44..0x8012AD6C | `SetState` / `NextState` / `SetCounter` / `IncCounter` | the actor's state number (+0x02) and its counter (+0x34) | `a->state = sub; a->stateCount = 0` / `stateCount = 0; state++` / `stateCount = n` / `stateCount++` (not animation; listed because they sit in this block) |

### Field proof lines (dump_10, read only)

The 96-actor array at 0x801202A0 (0x10C each) in `disc/dumps/dump_10_ram.bin` has 15 live actors. Read with a scratch script
(no capture, no tool change):

* Actors 11, 12, 13 (kind 0x3B8): `script = 0x80183B84` (the default script), `index = 1`, entry 1 = `{0, -2}`, `animTimer = 0`,
  no return: the default script is one pose then **-2**, held, exactly as `AnimStartDefault` + `AnimCmdStop` predict.
* Actors 0 (kind 0x36C, index 8) and 10 (kind 0x375, index 2): also parked on a -2 entry with `animTimer = 0`.
* Actors 2, 4, 6, 8 (kinds 0x36D-0x370): on a frame entry (pose pointer 0x801Axxxx, duration 1) with `animTimer = 1`: the frame
  case copies the duration to +0x98.
* `retScript` / `retIndex` are 0 in all 15 (no call in progress; tools/script_chains.py finds 0 call/jump commands in this dump).
  0x4000 / 0x2000 are clear in all (one-tick pulses), 0x8000 is set on 6 (spawn-row actors).
* dumps 13 and 14 read at the same base give 35 and 23 live actors with 0x1000 on 4 each and, in dump 14, 4 actors parked on -2;
  the array sits at the same address in every stage (r799: `AnimateActors` 0x8012A908 is byte-identical in all 140 pac4 images and
  builds the array address from the same lui 0x8012 / addiu pair).

### r799: every started script walked (Sun 15 Nov 2026, static)

A scratch walk (notes folder, not a tool) took every constant script passed to `SetScript`, `SetScriptAtEnd` or
`SetScriptCopy` in the 140 pac4 images (tools/actor_live.py's call-site reader, a1 by lui / addiu / ori, delay slot
included; SetScriptAtEnd added), followed every -3 / -4 target, and stepped each script as `AnimStep` / `AnimTick` do:
a frame (value > 0) moves on, a 0-duration frame holds (animTimer 0), -1 / -2 / -4 / -5 end the walk. Pose pointers
carry a relocation bit in the files (0x811xxxxx = 0x801xxxxx), which the walk masks. **1,849 scripts:** 1,208 end in
-1, 381 in -2, 21 in -4, 47 in -5, 184 in a 0-frame hold (122 at entry 0, 62 after frames), 8 lie outside the image
(BSS scripts built at run time). **No script reaches a value in -49..-6, a -50 marker or a bad pose pointer.** Every odd
value the raw data shows after a script start (SC07_006 D_801BFCB4, SC03_028 D_801AE9C4, SC01_084 D_8018A788 and 100 more)
sits after a 0-frame hold, so `AnimStep` never reads it. Not covered: scripts reached only through data (param lists,
spawn rows, NPC script records) rather than a SetScript constant; r561's tools/actor_live.py reads those from the dumps.

What each clip *looks like* (a bite, a wave) is asset work and out of scope for this document: the controller only says when a clip
starts, loops, reverses or stops.

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
