# The map / stage loader (what is decoded, 2026-10-11)

Read from the main EXE asm (`asm/nonmatchings/main`), the field-mode overlay (`disc/overlays/main_10.bin`, loaded at 0x800CEDF8) and RAM captures. Nothing here is decompiled to
matching C yet; it is the map of how a map change works, enough to plan a "load map X" cheat or warp.

## Disc side
* `func_80019A24(descriptor, destination, 0, 0)` (main EXE) queues an asynchronous CD read and starts the CD state machine (`func_80019AF8`). Overlays are loaded with it
  (`func_80010C7C`, `func_80010ED4`, `func_800110CC`, `func_80011144`, `func_800112C8`: each passes a descriptor in the 0x800AE8xx table and the **load address table `D_80072C70`**
  = { 0x800CEDF8 mode overlay slot, **0x80128158 stage image**, 0x800CAE08, 0x800CCB1C }).
* The field overlay (main_10) loads stages from three call sites (0x800CF968, 0x800D0060, 0x800D029C) using `D_80072C74` (0x80128158). `0x800CFD68` takes a map's **global entry number**
  and calls `0x800191D4`, which starts the read of that entry.
* LIST.CD numbers the archives' entries globally in order: MAIN.CD 49 entries, then SC01 (86), SC02 (43), SC03 (140), SC04 (31), SC05 (30), SC06 (39), SC07 (29). SC01 entry e is global 49 + e.

## Map ids
* The **current map id** is the halfword at **0x800B9A08**. The previous id is at 0x800B9A0C, the map group (id & 0xF000) at 0x800B9A0A. The id's high nibble is the group (0x3 for most
  maps, 0x1 for the village ids seen); its **low 12 bits index a word table at 0x800D34AC** in main_10. Each word's low 12 bits are the map's global entry number, which gives the stage
  (`docs/map_ids.md`: 79 rows decoded, all 24 stages with captures agree, none disagree). Rows with 0xFFF are unused ids. The higher bits of each table word hold other per-map data (not decoded;
  they may select music or the mode).
* The stage code compares the current id with constants (for example `li v0,0x3014` at 0x8012833C): ids are what the game's scripts and exits use.

## A map change
* **`SetNextMap(record)`** (main_10 0x800D185C): copies a **36-byte map record** to **0x80078E50**, stores record byte 2 at 0x800AE73E and byte 3 at 0x800AE741, and keeps the record pointer
  in the word at 0x800AE730 (with the 0x01000000 flag preserved). The first halfword of the record is the destination map id: after any change 0x80078E50 equals the current id (checked in two stages).
  The other 34 bytes are not decoded (they presumably hold the entry position and facing).
* The map-start function (main_10 0x800D1D24) copies the id at 0x80078E50 to 0x800B9A08, saves the old id, and calls the stage's own init (0x80129258, 0x801378F0).
* Stage code makes an exit through a task object whose +4 field holds a pointer to such a record (stage code at ~0x80145720 copies a record into 0x80078E50 with `memcpy`, 0x8005C324, 36 bytes), and
  the function at ~0x801458E8 sets flag 0x01000000 in the pending word 0x800AE6B0, calls SetNextMap(0x80078E50) and sets the group 0x3000.
* `func_80011B7C(n)` requests a game-mode change (n = 17, 13, 19, 18, 5, 6, 16 in the field overlay).

## What is still unknown (so a cheat cannot be written yet)
1. What the 34 other bytes of the map record mean (spawn position and facing); writing only the id would probably spawn at the wrong place or inside geometry.
2. The exact trigger the engine polls after SetNextMap, and which mode request makes the loader run. Writing the id into 0x80078E50 alone changes the record but does not by itself start a load.
3. Where the stage data keeps its exit records (the 36-byte records) so the real spawn data can be reused.

## Plan for the warp / cheat
1. With DuckStation running, an experiment tool writes the id (and a copy of the current record's other bytes) into 0x80078E50 and sets the pending flag, then watches 0x800B9A08 to see whether the game changes map.
2. Once a way works, generate a DuckStation `.cht` with one option per map from `docs/map_ids.md` (a GameShark write per option), or put a Warp button in the live logger.
3. Exits and triggers for the maps (`p-exits`) fall out of step 3 above.

## Warp experiment 1 (2026-10-11, tools/duck_warp.py) and what it showed

Run in the village (id 0x1011) in the running DuckStation: wrote the destination id 0x1010 into the record at 0x80078E50, set the pending word 0x800AE6B0 to the record pointer with flag 0x01000000
(what the stage's exit function does) and the group to 0x3000. **No map change within 10 s.** All values were restored afterwards (record id 0x1011, pending word 0, group 0x1000).

What the dump of the live record taught:
* The "36-byte map record" is really a **scene descriptor**: `{ u16 id, u8, u8, then code pointers into the current stage image (0x8017E798, 0x8017E720, 0x8010F5C8, 0x8017E91C, 0x8017E810) and, at +0x1C, the field overlay's handler 0x800D1E20 }`.
  The callbacks belong to the stage that is loaded, so a destination id alone is not a complete record, and the game's per-frame dispatcher calls the pointer at record +0x1C (the word at 0x800AE6B0 selects the active record).
* The game **state / mode** is the halfword at **0x800B99F0** (9 in the field, 5 in some rooms). `func_80011B7C(n)` stores n there and clears the sub-state halfwords 0x800B99F6 and the ones after it; `func_80011A3C` adds 1 to it
  and clears the same sub-states. A map load is therefore a sequence of state numbers (the field overlay requests 17, 13, 19, 18, 5, 6, 16 at different points). The meaning of each number is in the main dispatcher, not decoded yet.
* The EXE names `\DEBUG.BIN;1`, and overlay **main_11.bin** (24 KB, overlay id 0x37) is a developer debug overlay: strings "(DISELECT)", "PLAYER DMG", "GET IN SEL", "PLAYER HP HERANAI", "SCENE", "JUMP_ACT_1" to "JUMP_ACT_5", "LAST_SCENE".
  A scene/jump-act select menu is the natural way to reach maps if it can be entered (by requesting the state that loads main_11). Not tried.

So the cheat is not possible with one write. Two routes remain: (a) find the state number that makes the game run a map load from the current record and the state number that enters main_11, then write that state into 0x800B99F0 (a cheat can do that), or
(b) copy the destination stage's own descriptor (its callbacks live in the destination image) which needs the destination loaded first.

## Correction (2026-10-11, later)
The halfword at 0x800B99F0 is a sub-state inside a mode overlay, not the dispatcher. The real dispatcher is `Work.mode` at 0x800B99DE (see `docs/mode_dispatcher.md`): mode 7 loads the debug overlay and mode 11 is the field.
