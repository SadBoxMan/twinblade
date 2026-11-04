# The map / stage loader (2026-10-11; the loader section rewritten from the matched C in r241, 1 Nov 2026)

The EXE's loader is matched C in `src/code_800123F0.c` and the field overlay's call sites are C in `src/ovl36/ovl36.c`.
Names are r241's (`docs/names_r241.md` maps them to the func_ / D_ names of the older sections below, which are kept as
written; corrections are marked "r241").

## The loader in the C (r241)
* **Disc files.** InitCdFiles (boot) looks every game file up by name, reads LIST.CD and turns each archive's (sector,
  size) list into absolute positions in `g_ArchiveFileLoc[]` (8 bytes each: CdlLOC + size), numbered globally: MAIN.CD
  entries 0-48, then SC01 ... SC07. InitCdFilesAtLba (0x800193B8) is an unused development variant that reads a header
  and the file table from raw sectors instead. IsDebugBinPresent / SetDebugBinPresent hold whether DEBUG.BIN was found.
* **A load.** `LoadFileStep(file, dest, size, soundTable)` (0x80019A24; the docs' "CdReadQueue") is polled every frame:
  it starts a request when none is in flight (or continues the same file's), refuses while the sound / XA request ring
  is busy, and returns 1 on the frame the request completes. `size` 0 = a PAC archive, parsed block by block; otherwise
  a byte count. `soundTable` = a (bank id, destination) list for the sound banks (0 = none; e.g. the title's
  {0x57, D_800A2E20} at D_800C7C60). The request id is the file's first word (GetLoadRequestId / SetLoadRequestId).
* **The step machine.** StreamStep (0x80019AF8; the PC overrides it in pc/native/cd_stream.c) runs `g_CdStream.state`
  (0x800AE6F0): 0 Setmode 0xA0, 1 wait for it, 2 a three-call settle, 3 SeekL, 4 wait for the seek (retries; a
  seek-only request pauses here and goes to 8), 5 install the ready callback and ReadN, 6 wait for the callback (done 1,
  error 2, or a 300-call timeout), 7 hand the sound banks to the driver, 8 wait for CdSync complete: the request is done
  (`g_CdSyncResult`); 9 / 10 the disc check (lid opened: StartDiscCheck / DiscCheckStep: lid closed, ready, mode set,
  a data disc, MUSA.ID found). ResetLoader / ResetStreamStep reset it. There is no Setloc step (SeekL takes the
  CdlLOC) and the sector copy is in the callback (docs/pc_port_design.md's "Setloc + sector copy" is wrong there).
* **PAC blocks.** StreamReadyCallback (0x8001A338, the CdReadyCallback) takes each sector in order and parses PAC
  blocks: a 0x800-byte header at g_SectorBuf (0x80079A70: 'PAC' magic, a type byte 0-8, a "more" byte, a CLUT count,
  the block size including the header), then textures, CLUTs, data, sound banks and LZSS data. LZSS: StartLzssDecode /
  LzssDecodeSector (0x80018714 / 0x80018730; a 1 KB ring at 0x1F800000, `g_LzssState` nonzero mid-stream, which is why
  r224's spadstack hash rule waits for it to be idle).
* **Load addresses.** `g_LoadAddr` (0x80072C70) has FIVE words: 0x800CEDF8 the mode-overlay slot, 0x80128158 the stage
  image, 0x800CAE08 and 0x800CCB1C the two ability-package slots, 0x800C7F08 where PAC type-7 code blocks go.
* **Descriptors used by the EXE and the field** (`g_ArchiveFileLoc[i]`, i = MAIN.CD entry): 0x800AE838 [1] licence
  (g_FileLocLicence), 0x800AE848 [3] title, 0x800AE858 [5], 0x800AE870 [8] trial end, 0x800AE880 [10] field, 0x800AE888
  [11] debug menu, 0x800AE890 [12] the stage engine image (g_FileLocStageEngine).
* **The stage image cache.** `g_StageImageEntry` (0x80078E30) is the LIST.CD entry of the stage image in memory (-1 =
  none: ForgetStageImage, called by main()'s outer loop). StageImageNeedsLoad(entry) is 1 when the image must be read
  (none resident, another one, or a stage not in StageAlwaysReloads' list of 26 entries that may stay resident, the
  village among them; every other stage is read again on each entry). SetStageImage records a completed read.
* **The background load queue.** LoadQueueStep (0x8001AF34, every frame from main()) runs one request by kind
  (D_800BA1B4: 1 a file through LoadFileStep, 2, 4, 5 other kinds; 3 done); CancelStreamLoad drops a queued .STR
  stream request. GetStreamState returns the stream driver's state (0 idle, 1 / 2 / 4 busy, 8 finished).
* **Not CD code, but in the loader's address range:** the pad rumble scripts (StopPadRumble, Enable / Disable /
  Clear / Start / Step / GetRumbleScript: 3-byte steps large motor, small motor, frames), DrawNowLoading (the two
  NOW LOADING sprites, letters at VRAM 512,504) and LoadPatPicture (a development PC picture loader, empty in retail).
* **The field's side** (ovl36, proposed names in docs/names_r241.md): 0x800CF94C loads the stage engine image (entry
  12) to 0x80128158; 0x800D0214 loads the current map's stage: entry = `D_800D34AC[mapId & 0xFFF] & 0xFFF`, the sound
  pair = {that word's HIGH HALFWORD (the sound bank / music group id), D_800A2E20}, then LoadFileStep; 0x800CFD68 takes a
  MAP ID (not an entry number) and only tests StageImageNeedsLoad; 0x800CFDA4 marks the current map's stage loaded;
  0x800CFDE8 prefetches the next map's header; 0x800D02D0 / 0x800D0488 load ability packages into slots 2 / 3.

## Disc side
* `func_80019A24(descriptor, destination, 0, 0)` (main EXE) queues an asynchronous CD read and starts the CD state machine (`func_80019AF8`). Overlays are loaded with it
  (`func_80010C7C`, `func_80010ED4`, `func_800110CC`, `func_80011144`, `func_800112C8`: each passes a descriptor in the 0x800AE8xx table and the **load address table `D_80072C70`**
  = { 0x800CEDF8 mode overlay slot, **0x80128158 stage image**, 0x800CAE08, 0x800CCB1C }).
* The field overlay (main_10) loads stages from three call sites (0x800CF968, 0x800D0060, 0x800D029C) using `D_80072C74` (0x80128158). `0x800CFD68` takes a map's **global entry number**
  and calls `0x800191D4`, which starts the read of that entry. (r241: wrong: 0x800CFD68 takes a map id and 0x800191D4, StageImageNeedsLoad, only tests whether the read is needed; the read is 0x800D0214, see above.)
* LIST.CD numbers the archives' entries globally in order: MAIN.CD 49 entries, then SC01 (86), SC02 (43), SC03 (140), SC04 (31), SC05 (30), SC06 (39), SC07 (29). SC01 entry e is global 49 + e.

## Map ids
* The **current map id** is the halfword at **0x800B9A08**. The previous id is at 0x800B9A0C (r241: the previous GROUP: MapStart copies 0x800B9A0A into it), the map group (id & 0xF000) at 0x800B9A0A. The id's high nibble is the group (0x3 for most
  maps, 0x1 for the village ids seen); its **low 12 bits index a word table at 0x800D34AC** in main_10. Each word's low 12 bits are the map's global entry number, which gives the stage
  (`docs/map_ids.md`: 79 rows decoded, all 24 stages with captures agree, none disagree). Rows with 0xFFF are unused ids. The higher bits of each table word hold other per-map data (not decoded;
  they may select music or the mode). (r241: the high halfword is the sound bank / music group id handed to the stage load; bits 12-15 are not read by the loader.)
* The stage code compares the current id with constants (for example `li v0,0x3014` at 0x8012833C): ids are what the game's scripts and exits use.

## A map change
* **`SetNextMap(record)`** (main_10 0x800D185C): copies a **36-byte map record** to **0x80078E50**, stores record byte 2 at 0x800AE73E and byte 3 at 0x800AE741, and keeps the record pointer
  in the word at 0x800AE730 (r241: the C stores them at 0x800AE6BE, 0x800AE6C1 and 0x800AE6B0, fields of the block at 0x800AE6A8) (with the 0x01000000 flag preserved). The first halfword of the record is the destination map id: after any change 0x80078E50 equals the current id (checked in two stages).
  The other 34 bytes are not decoded (they presumably hold the entry position and facing).
* The map-start function (main_10 0x800D1D24) copies the id at 0x80078E50 to 0x800B9A08, saves the old id, and calls the stage's own init (0x80129258, 0x801378F0).
* Stage code makes an exit through a task object whose +4 field holds a pointer to such a record (stage code at ~0x80145720 copies a record into 0x80078E50 with `memcpy`, 0x8005C324, 36 bytes), and
  the function at ~0x801458E8 sets flag 0x01000000 in the pending word 0x800AE6B0, calls SetNextMap(0x80078E50) and sets the group 0x3000.
* `func_80011B7C(n)` requests a game-mode change (n = 17, 13, 19, 18, 5, 6, 16 in the field overlay). (r241: SetGameState: it sets the field's game state, not the mode; docs/mode_dispatcher.md lists the states.)

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
