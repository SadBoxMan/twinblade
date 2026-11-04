# The ability packages, function by function (r271, 4-5 Nov 2026)

Phase 2 (understanding) for the 35 packages in src/abil/ (MAIN.CD entries 13-47, docs/overlays.md "The ability
packages"). Written from the matched C, the splat configs (abil/ovlNN.yaml), the package symbol files
(abil/symbol_addrs_ovlNN.txt) and the engine C (src/stage/, src/ovl36/, src/code_800123F0.c) of the 4 Nov
snapshot (main fab5bf5a). Nothing was built or run: the snapshot has no disc, no asm and no package data, so table
contents (step tables, palettes, vertex lists) are known only from how the code indexes them. Nothing in src/,
include/, the configs or the symbol files was changed; the names proposed in section 6 are proposals only.

Confidence: **H** the C shows it plainly; **M** a strong inference (one step from the C, or the same shape as an H
case); **L** a guess with a stated reason. "unknown" where the code does not say. The US ability names are the ones
docs/overlays.md already gives each package (from the field's package table); where the code confirms or contradicts
the name's effect, the package section says so.

Contents: 1. What a package is and how it is entered. 2. How the engine runs an ability. 3. Engine calls the
packages use (3a: more engine facts). 4. Shared shapes and clones. 5. Package by package (slot 2: ovl13-ovl2f; slot 3: ovl30-ovl35).
6. Naming proposals. 7. Open questions and what is left.

## 1. What a package is and how it is entered

* **A package is one code overlay**, the type-1 block of a PAC chain on MAIN.CD, copied whole to an overlay slot:
  the first word is the ID (0x13-0x35, the `ovlNN` name), the code follows to the last `jr ra`, then data. Two slots
  hold packages: **slot 2 at 0x800CAE08** (code from 0x800CAE0C) holds the current **assimilated ability**, ovl13-ovl2f
  (29 packages); **slot 3 at 0x800CCB1C** (code from 0x800CCB20) holds one of **six other packages**, ovl30-ovl35:
  the six charged sword techniques chosen in the pause menu, most likely the plain Lumina technique and the five
  scrolls (section 5, "Slot 3"). Because every package of a slot loads at the same address, splat's names carry the package
  (`func_ovl13_800CAE0C`). (H: docs/overlays.md, the yaml files)
* **Layout.** ID word, code, data. ovl1f (Bowl) and ovl2d (Homing) have two data words before the code, so their
  first function is at 0x800CAE14; ovl28 (Steel) has the 29-word jump table of its packet switch (0x74 bytes; docs/overlays.md says 31) before its code and its first function is
  0x800CAE80 (r149). The data after the code holds, by how the code uses it: the step / state handler tables
  (`AbilStep`), the image records queued at load (palette and its RECT, sometimes a texture), byte vertex tables for
  stack-built quads, colour / offset tables and animation frame lists. (H for the layout, M for the data roles)
* **Slot 2 loader.** The field overlay's func_800D02D0(n) (src/ovl36/ovl36.c) maps an ability number 1-30 to an
  index into the field's package table D_800D3764 (`{ file; word }`): 7->0, 5->1, 8->2, 1->3, 13->4, 17->5, 12->6,
  3->7, 15->8, 2->9, 4->0xA, 6->0xB, 18->0xC, 22->0xD, 24->0xE, 21->0xF, 20->0x10, 19->0x11, 26->0x12, 9->0x13,
  11->0x14, 16->0x15, 10->0x16, 23->0x17, 25->0x18, 27->0x19, 28->0x1A, 29->0x1B, 30->0x1C (anything else: nothing
  to load), and loads that archive file with func_8001ABBC; index i is package 0x13 + i. It runs at a map change
  (func_800CF584: `D_80078EC1 == 0 || func_800D02D0(D_80078EC1)`). Ability 14 has no package. (H)
* **Slot 3 loader.** func_800D0488(n) maps n = 1-6 to index 0-5 of a second table, D_800D384C, and loads it the same
  way into the slot-3 buffer (D_80072C7C). It runs at field init with n = 1 (func_800CEF04), at a map change with
  `D_80078EC0 & 0x7F` (func_800CF5D4), and from the stage's item check func_8013E958 whenever D_80078EC0 changes.
  Which package each n loads is in D_800D384C (data, not readable here); n -> ovl30 + (n - 1) is the natural reading
  (entries 42-47 in order) but is **not confirmed** (M-L). (H for the loader)
* **The load-time entry** of nearly every slot-2 package is its first function,
  `func_ovlNN_800CAE0C() { func_800183E0(D_ovlNN_xxx); }`: func_800183E0 (src/code_800123F0.c) puts a pointer into
  the first free of 32 records at Work + 0xA1A8 (D_800B97D8), the **end-of-frame image upload queue** that
  FlushImageQueue walks (record types 9 and 0 -> LoadImage of a RECT). So the entry uploads the package's own
  palette / texture to VRAM. (H) Who calls it: func_801554B8 (engine), when Musashi's pending ability a+0x1A0
  differs from the loaded one a+0x196, runs func_800D02D0(a+0x1A0) and, once the package is in, func_801659DC(a) =
  `D_801902E8[a+0x1A0](a)`, a per-ability after-load table in the stage data; its entries are presumably these image
  entries (M: the table is data, but no other caller exists). The exceptions are listed per package (ovl2b Acid's
  800CAE0C is a per-frame hook, below, so its load entry is another function; ovl1f and ovl2d start at 800CAE14,
  ovl28's image entry is 800CC144).
* **The per-frame entry** is the **button template**,
  `func(a) { a+0x44 |= 8; D_ovlNN_steps[a+0x197](a); }`: Musashi's ability step machine, step byte at actor + 0x197,
  flag 8 in +0x44 marking "an ability is running". All 29 slot-2 packages have exactly one (section 4), usually the
  function right after the image entry: 0x800CAE34 in ovl14, 15, 16, 19, 1a, 1b, 1c, 1d, 1e, 26, 29, 2f; 0x800CAE44 in
  ovl17, 20, 21, 22, 24, 27, 2c, 2e; 0x800CAE54 in ovl13 and ovl2a; ovl18 0x800CAEB4, ovl1f 0x800CAE5C, ovl23
  0x800CAE64, ovl25 0x800CAF58, ovl28 0x800CC16C, ovl2b 0x800CAEC0, ovl2d 0x800CAE4C. The engine has its own copy for
  the not-enough-BP case (func_80165B28, section 2). Nothing in the package calls the template; the engine reaches it
  through its per-ability table D_80190170 (stage data), so that table's entry for each ability is the address above
  (M: the table cannot be read here, but no other function of these packages has the shape or an outside caller).

## 2. How the engine runs an ability (src/stage/engine_801458E0.c)

| What | Where | Conf. |
|---|---|---|
| Current ability number (bit 0x80 masked off on use) | D_80078EC1 (= stats block D_80078E78 + 0x49) | H |
| Per-ability frame handler, `D_80190170[ab](a)` | func_80165580 (the kind-0x17 handler), func_801654A8 | H |
| Per-ability stop hook, `D_80190364[ab]()` | func_80165AC8, from func_80165A78 | H |
| Per-ability cost byte, `D_801901EC[ab]`: low 7 bits the BP cost, bit 0x80 a "continuous" flag | func_80165658 | H (cost), M (flag meaning) |
| Per-ability duration, `D_8019020C[ab]` -> D_80078EC8 | func_80165670 | H |
| Three more per-ability byte tables (D_80190288, D_801902A8, D_801902C8) | func_801656D0, func_801656E8, func_80165700 | H (exist), unknown use |
| Per-ability after-load hook, `D_801902E8[ab](a)` | func_801659DC, from func_801554B8 (the package load) and func_8016533C (stage start) | H (call), M (entries = image entries) |
| Pending / loaded ability on Musashi | a+0x1A0 / a+0x196 (func_801554B8) | H |
| BP: current D_80078EB8, max D_80078EB6 (cap 0x662); spend func_8014BD60(a, n), add func_8014BD24 | engine 4671 | H (the meter abilities spend; "BP" is the US HUD term, M) |
| HP: D_80078EB4 (add func_8014BB24, cap 500, or 999 with flag 0x1B; damage func_8014BC80) | engine 4587 | M |

* **Starting one.** The pad test func_801497A8 (engine ~3405) returns 1 for a press of pad bit **0x20** (a+0xAC) when
  Musashi is free (+0x44 & 0x404 clear), the ability is not "continuous" (cost byte bit 0x80 clear), and, for Bowl
  (15), no kind-0xA object exists. Its caller (engine ~14595) then runs func_80149864 = func_801653B8: func_801653F4 sets the fizzle flag D_80078EC5
  = 0x80 when BP is below the cost (func_80165624) or when the ability is **26 (Map) outside maps 0x305C-0x3066**,
  then Musashi's kind becomes **0x17** (func_80147078(a, 0x17): kind at +0, state +2 = 0) and func_80165580 runs the
  package's handler, or func_80165B28 when the fizzle flag is set. func_80165374 is the same start with step 1. (H)
* **The fizzle (engine template).** func_80165B28 = the button template over D_801903E0; its steps (func_80165B6C,
  func_80165BB4, func_80165BFC) wait one uninterrupted frame, play animation 0x22 with face 0x1A, wait for the
  animation's end flag (+0xB8 & 0x8000), face 0x11, and hand Musashi back (func_801599A4 + func_80159B3C). Most
  packages' first steps are this shape with the BP payment and the ability's own animation added. (H)
* **Continuous abilities.** func_801654A8, called every frame from Musashi's update (engine line 1546), calls
  `D_80190170[ab](a)` whenever the cost byte has bit 0x80 (and Musashi is not kind 0x16 / 0x1A, +0x1F8 clear): those
  abilities run their handler every frame without a press. It also calls **func_800CAE0C(a) every frame while the
  ability is 25 (Acid)**: ovl2b's first function is a per-frame hook, not an image queue. (H for the calls; which
  abilities have bit 0x80 is in the table, so it is read from each package's shape: section 5)
* **Paying.** `func_801655E4(a)` pays the cost (func_8014BD60 with the cost table). Packages guard it with
  `if (func_80165910() == 0)`: func_80165910 returns the latch D_80078EC4 and sets it, so the cost is paid once per
  use however often the step runs. (H)
* **Duration.** func_80165694 counts D_80078EC8 down each frame (when +0x1F8 allows); timed abilities test
  `D_80078EC8 == 0` and end. func_80165670 loads it from the table. (H)
* **Ending.** func_80165A20(a) = func_80165A78 (stop hook, step byte 0, +0x44 &= ~8, model flag 0x20 off) + func_80165A50
  (D_80078EC1..EC4 = 0: the ability is gone and must be assimilated again). func_80165718(a), called from about 20
  places in Musashi's state code (engine lines 7302-10507), ends abilities **3 (Satiate), 12 (Hop) and 24 (Sublime)** that way;
  func_8014AA28 (a change of D_80078EC0) ends 10 (Hurl), 12 and 24. (H)
* **Engine calls to fixed slot-2 addresses** (each valid only while the named package is loaded):

| Address | Caller | When | Package |
|---|---|---|---|
| func_800CAE0C(a) | func_801654A8 | every frame, ability 25 | ovl2b Acid |
| func_800CAE80(obj, ot, 0) | the EXE's model draw (src/code_800123F0.c ~6299) | a model of draw kind 6; the engine sets Musashi's model kind 6 when ability 16 is held with D_80078EC8 != 0 (engine ~1514) | ovl28 Steel (its renderer) |
| func_800CAF14(a) | engine ~12860 | pad 0x20 with ability 10 and enough BP (otherwise the fizzle path) | ovl29 Hurl |
| func_800CAF6C(a) | func_80165770 | ability 12 | ovl1a Hop |
| func_800CB0E8(a) | func_80130438 (engine_8012F5F4.c ~1075), an enemy reaction step | an enemy reacting with flag 0x40 (sounds 0x47B, 0x478, count 0x78) | ovl13 Stun |

* **Engine calls to fixed slot-3 addresses:** func_800CCF28(a) (engine ~3499, an attack path after a pad test and
  sound 0x8E0), func_800CCF68(a) / func_800CCF58(a) (engine ~7052), func_800CCCC0(a) (engine ~11249, ~11477, ~11767,
  ~12068, ~12327: case 5 of Musashi's state switches), func_800CCB78(o) (engine ~11916, on the effect object of kind
  0x3B). Which package answers which is in section 5, slot 3: 0x800CCF28 / 0x800CCF58 ovl33, 0x800CCF68 ovl32, 0x800CCCC0
  ovl34, 0x800CCB78 ovl35.

## 3. Engine calls the packages use

The outside symbols of all 35 symbol files, by how many packages use them (top of the list), with what the engine C
says each does. Musashi is the stage engine's actor D_80126B58; the template's `a` is him.

| Call | Packages | What it does (from its C) | Conf. |
|---|---|---|---|
| func_80147324(id) | 30 | play sound effect `id` (func_8002D4C8; positional variant on map 0x308D) | H |
| func_801655E4(a) | 29 | pay the current ability's BP cost | H |
| func_800183E0(list) | 29 | queue image records for the end-of-frame LoadImage | H |
| D_80078EC1 | 25 | the current ability number | H |
| func_80159B3C(a) | 24 | Musashi's kind 0, state 0, run it: back to normal control | H |
| func_80146CA0(o) | 23 | o+2++ (next state) | H |
| func_801599A4(a) | 22 | run the actor kind's handler D_8018FBA8[a+0] | H |
| func_80162CCC(o) | 21 | free a 0x68 object (and its model) | H |
| func_80146A6C(kind, owner, x, y, z, d, e) | 21 | spawn an effect object in D_8011D030 (30 x 0x58); returns it or 0 | H |
| func_80146E98(o) | 20 | count the timer o+0x1C down; 1 when it reaches 0 (or was 0) | H |
| func_80146E90(o, n) | 20 | o+0x1C = n | H |
| func_80146C3C(o) | 20 | free an effect object (and its model / sprite slot at +0x20) | H |
| func_80149374(a, p) | 18 | transform a position through the actor's model matrix | M |
| func_801466F0(kind, owner, x, y, z, d, e, upper) | 18 | spawn a 0x68 object in D_8011F9D0 (upper: entries 8-19, else 0-7) | H |
| func_80146DE8(o, x, y, z) | 16 | o+0x24/0x28/0x2C = x, y, z | H |
| func_80154274(a, anim) | 15 | start an animation record unless it is the current one (a+0xB4) | H |
| func_80162FC0(o) | 14 | o position += velocity | H |
| func_80161104(a) | 14 | `func_80161208(a) == 0`: 1 while Musashi still stands on a floor (he was not handed over) | M |
| func_8014659C() / func_80146578() | 14 / 14 | a free model slot 6-0x15 / a free sprite slot 6-0x15 in the Work block | H |
| func_80015978(src, dst) | 14 | 24.8 position (+2/+6/+0xA halves) -> SVECTOR | H |
| func_80165A20(a) | 13 | end the ability (stop hook, clear the ability) | H |
| func_80161208(a) | 13 | Musashi's floor check (func_801612B8: move and probe, func_8014CC28 / func_8014F3E8): result 0 or 0x8000 = no floor -> kind 3 (fall, func_8015BDD0), 0x4000 -> kind 4 (func_8015BF48), both return 1; 0 otherwise | M |
| func_8012F14C(m, in, out) | 13 | RotTransSV through a matrix | H |
| func_80165910() | 12 | the pay-once latch | H |
| func_801465C0() | 12 | a free sprite slot 0x16-0x3D | H |
| func_800233CC(o, r) | 12 | a 12-point ring of radius r into o+0x10.. | H |
| D_800B99DA | 12 | the frame counter (animation flicker) | H |
| D_80078EC8 | 12 | the ability's remaining duration | H |
| func_80163328() | 11 | after a hit probe: copy each hit's position D_80126B18[i] into the hit object D_80115100[i] (+0x7C) for the hits flagged in D_80115200[i] | M |
| func_8001CC3C(o, img, x, y) | 11 | init a sprite slot as kind 3 with an image at (x, y) | H |
| func_80017DC4(v, m) | 11 | scale matrix from a vector | H |
| func_80013F3C(m) | 11 | identity matrix | H |
| func_80163408(o, a, b, c) | 10 | a hit probe from o (func_8016345C -> func_80157158, the same family as func_80163534): results in D_80115200[3] (hit flags / objects), D_80126B18[3] (hit points), D_80115100[3] | M |
| func_80146994(kind, owner, d, e) | 10 | spawn an effect at x = y = z = 0 | H |
| func_800D23D0 / func_800D20C0 | 10 / 10 | (field overlay) vector to angles; pull a point toward the camera | H |
| func_801632F0() | 9 | the probe's first hit (first nonzero of D_80115200[3]), 0 for none | M |
| func_80017758(prim, m) | 9 | draw a stack quad (POLY_G4) with a matrix | H |
| func_800123F0 / func_80012558 / func_800126C4 | 9 / 8 / 8 | rotate a matrix about Z / Y / X | H |
| func_80154A74 StartFace(a, n) | 8 | Musashi's face | H |
| func_80015954 | 8 | SVECTOR -> 24.8 position halves | H |
| D_801202A0 | 8 | the actor array, 96 x 0x10C (enemies, NPCs) | H |
| D_800AE620 | 8 | the identity matrix | H |
| func_8014C308(a, t, kind, mask) | 7 | can a hit target t (alive, collidable, not immune to kind) | M |
| func_8014C088(any, kind) | 7 | find a 0x68 object by kind | H |
| func_80017E68(v, m) | 7 | set a matrix's translation | H |
| func_80163194 | 7 | velocity from three angles and a matrix (D_80127090..98), then func_80146D30 | L |
| func_8014C278(a, b, r) | 6 | distance(a, b) < r | H |
| func_80148800(a) / func_801487F4(a) | 6 / 4 | pad words a+0xAC (pressed) / a+0xAA (held) | M |
| func_80147364(id, b) | 6 | the sound call behind func_80147324 (func_8002D4C8(id, b)); `func_80147364(4, S)` is sound command 4 on sound S, used in cleanups: stop sound S | H (call), M (stop) |
| func_801657A0() / func_80165840() | 4 / 3 | SAVE the stats D_80078E94.. into D_80078ECC.. (latch D_80078EC3) / RESTORE them | H |
| func_8014C4AC(t, type, dmg, pos, angle) and func_8014C3A4 / func_8014C3D0 | 3+ | deliver a hit to actor t (+0x5E type, +0x60 damage, +0x62 angle, +0x5C \|= 1); the two wrappers roll the damage (func_80156370) and take the angle from the attacker's facing / the line to the target | H |
| func_80155FF8(a, n) (via func_80155FB0 / func_80155FD4) | 3 | Musashi's sword-attack collision with attack record n (func_80156044; tables D_8018F3CC, D_8018F548), active while a+0x1A8 != 0 (func_80156648 clears it) | M |
| func_80162F08 / func_80162FF4 / func_80163194 | 2 / 4 / 7 | add an acceleration to +0x24..+0x2C (clamped +-0x7F0000); FF4 then sets the velocity from it rotated by the model's angles, 194 by a matrix | H |
| func_8016380C(o, out) / func_80163950(o) | 2 / 3 | map line test from o+0x44 to the position (snap on hit) / land on a platform actor | H |
| func_8001CD9C / func_8001CD50 / func_8001CB00 | 6 / 5 / 3 | init a sprite slot as kind 6 / 5 / 1 | H |
| func_80012ABC | 6 | turn an angle toward a target, step-limited | M |
| func_80154150(a, i) | 5 | start animation number i of the actor's table (a+0xB0) | H |
| func_8014C3A4 | 5 | hit test using the model's facing (+0x12) | M |
| func_80149350(a, in, out) | 5 | RotTransSV through the actor's model matrix (+0x20 + 0x34) | H |
| func_80147078(a, k) | 5 | kind = k, state = 0 | H |
| func_80128EA8 / func_80128ED8 | 5 / 5 | start / step a sprite frame list (timer in flags & 0x3F; 0xC0 = end, 0x80 = loop) | H |
| func_8001C810 | 5 | init a model slot from a part list (kind 5) | H |
| func_80016714(p, n) | 5 | zero-fill n bytes | H |
| func_80013E94 | 5 | pack an SVECTOR into a 10:10:10 word (the 0x68 objects' direction) | H |
| D_8011F9D0 | 5 | the 0x68 objects, 20 entries | H |
| D_80126B18 / B1A / B1C | 5 | the hit probe's hit points (SVECTOR[3]; B1A / B1C are [0].vy / .vz) | M |
| D_80114EB0 | 5 | a buffer handed to the hit probe func_80157158 (engine ~15386); its use in the packages: section 5 | L |

Others (four packages or fewer) are named where they matter in section 5. The full list is the union of the 35
abil/symbol_addrs_ovlNN.txt files (241 distinct symbols).

### 3a. More engine facts found while reading the packages

Each read-through looked up the engine callees its packages depend on; the findings, with their source lines, are
kept here as written (src/stage/engine_801458E0.c unless another file is named; some repeat section 2 or 3 from
another angle).

**From ovl13-ovl1e.**

* func_801654A8 (called every frame from Musashi's update, line 1546) runs D_80190170[ab](a) when his kind is not
  0x16 / 0x1A, a+0x1F8 & 0x80FFFFFF is 0, and the cost table's bit 0x80 is set. func_80165374 sets kind 0x17 and
  **0x197 = 1** and runs the handler (func_80165580), so step 1 of every step table is the "start" function and
  step 0 (start + ++) also lands on step 2. func_80165A78 = cleanup hook + 0x197 = 0 + 0x44 &= ~8 + model flag
  0x20 off, without clearing the ability number.
* Effect objects are dispatched by kind through D_80126728[kind](o) (func_80165CA0); 0x68 objects through
  D_80126D40[kind - 1](o, kind) (func_80162B1C). Both tables are BSS filled from stage data: contents unknown.
  0x68 spawn args: owner +0x4C, d +0x50, e +0x54 (func_80146750). Effect spawn args: owner +0x34, d +0x2C, e +0x30.
* func_80146AB4 = func_80146A6C but takes the last free slot (func_80146B9C scans from the end).
* func_801487F4 = a+0xAA (pad bits held), func_80148800 = a+0xAC (pad bits newly pressed): func_80149954 starts a
  sound on +0xAC & 0x90 and stops it when +0xAA & 0x90 is clear.
* a+0xA9 = controller type: 0x41 digital, 0x53 / 0x73 analog (the switch in func_80148E54 / func_80148AFC).
* func_80165624(a) = `D_80078EB8 < cost`: not enough BP. func_801657A0 = save stats (D_80078E94, E9C, EA0, EA4, EA8,
  EBB into D_80078ECC..EE0, once, latch D_80078EC3); func_80165840 = restore them.
* D_80078E94 bit 31 = poison: func_8014B350 ticks it and every 0x3D counts calls func_8014BC80(a, 8) (8 damage);
  func_8014B33C sets it; func_8014B2F8 clears D_80078E94 and the saved copy D_80078ECC.
* D_80078EA4 = a 16.16 meter (integer D_80078EA6): drained every frame by 0x16C (0xF2 with item flag 0x21,
  func_8014B7A4, line 4522); when it goes below 0 a second counter (stats +0x30) grows and at 0x3C sets
  a+0x44 |= 0x100. func_8014B944(a, n, force) adds n, capped 0x80 (0xA0 with item flag 0x1B or force).
  Its in-game name is not established here.
* func_8014B190: each frame resets a+0x68/6A/6C to 0x1000 and clears a+0x44 bits 0x200 / 0x400, then sets 0x200
  if (poisoned || BP < 0xB || D_80078EA6 < 0x10 || **D_80078EC1 == 1**), and sets scale 0x555 + 0x400 if stats
  +0x22 bit 15. func_8014C6F4: with 0x200 (and a+0x1C3 == 0) sets a+0x162 = 1 (game.h: "the point objects turn to
  is not set").
* Damage taken (line ~7074): `if (c[0x49] == 5) damage /= 2` (Perfume). func_80152714 (being hit): unless
  D_80078EC1 == 2 (Mint) sets a+0x1AC = 0x3C0000 and a+0x44 |= 0x100. func_80165718 (called on hits) ends
  abilities 3, 12, 24 with func_80165A20. func_80165770: `if (D_80078EC1 == 12) func_800CAF6C(a)` (stage scripts
  call it). func_80150F80: unless ability 12, func_80151184(a, 0xC007, 0x20) (sets a+0x3E / +0x40: a hit record;
  caller not found).
* func_80155FD4(a, x) = func_80155FF8(a, x | 0x20000) = sword hit check (func_80156044) with the 20-byte attack
  record D_8018F548[x] (0x10000: D_8018F534, else D_8018F3CC), active only while a+0x1A8 != 0.
* func_8014C3A4(o, t, type, &pt) gives target t a hit: t+0x5E = type, +0x60 = damage (func_80156370(type, t)),
  +0x62 = direction (o's model yaw), +0x5C |= 1, +0x7C = point.
* func_80163408(o, type, x, y) = func_80163534 sweep (func_80157158) of a moving 0x68 object; result
  D_80115200[0..2] (func_801632F0 returns the first nonzero), hit point D_80126B18, surface vectors D_80114EB0 /
  D_80114EC8; func_80163328 copies hit points into the struck actors (+0x7C) for slots with bit 1.
* func_80013E94 (src/code_800123F0.c) packs a 3-vector into 10:10:10 bits; func_800D2318 (ovl36) unpacks o+0x2C the
  same way into angles o+0x12 / o+0x16 (o+0x1A = 0).
* func_8012A304(y, r) / func_8012A2F4 (src/stage/engine.c): lock / unlock the camera's followed height.
* func_80147364(id, b) -> func_8002D4C8(id, b) (positional on map 0x308D); ids < 0x80 are commands: (4, 0x8E0) is
  used to stop 0x8E0 when the button is released (func_80149954).
* func_8016629C(a): effect kind 3 (a puff) at a's position - 0x10 y, d 0x0F88FFF2, e 0xE000C000.
* func_801493D0(a, v, out): a 24.8 point v through a's model matrix, out as 24.8.
* func_80128EA8(sprite, state, frames) / func_80128ED8(sprite, state): start / advance a sprite frame animation;
  ED8 returns nonzero when it ends (every caller frees then). Not in the repository's C (main executable).

**From ovl1f-ovl26.**

* func_801657A0 SAVES the stats and func_80165840 RESTORES them (Toxin pairs them around its poison flag).
* `func_80147364(4, S)` (sound command 4, func_8002E138 case 4 -> func_8002EED8, src/code_8002C8BC.c 1276) is issued in
  the cleanup of every package that loops a sound S: very likely "stop sound S" (M).
* func_8014C168(any, kind): the first actor of D_801202A0 with that kind (engine 4838). func_80146EC0: put an object
  at a model point plus a camera-rotated offset. func_8012A62C(n) (engine.c 1140): ease the camera back over n frames.
  D_801270C0 (engine.c 1213): 1 = every actor animates, else only those with flag 0x1000 (Map sets 2: the world
  freezes, M).

**From ovl27-ovl2d.**

* func_801554B8 loads the package for a new ability (func_800D02D0) and then calls func_801659DC(a) =
  `D_801902E8[a[0x1A0]](a)`: a per-ability "after load" hook table (contents unknown; probably the image-queue entry).
* func_801654A8 (line 16224) also calls **func_800CAE0C(a) every frame while the current ability (c[0x49]) is 0x19
  (Acid)**: in ovl2b that address is not the load hook but a per-frame image cycler.
* func_80146128 (line 1502, Musashi's per-frame update): `if (D_80078EC1 == 0x10 && D_80078EC8 != 0)` sets Musashi's
  model (D_80126B78) kind to 6 and D_80126B9C (= Musashi +0x44) |= 0x800, else kind 1 and clears 0x800. Model kind 6
  is drawn by func_800CAE80 (src/code_800123F0.c:6298), kind 1 by GsSortObject5 / func_80027BF0.
* func_8014CB7C() = `D_80126B9C & 0x800`; tested at line 3413 (func_801497A8 returns 0) and line 7076 (damage taken,
  +0xF2, halved, the same branch as Perfume's c[0x49] == 5).
* Hit testing: func_80163408(o, type, a, b) runs the attack test with damage rolled by func_80156370(type) (base +
  rand range from a table); results in D_80115200[0..2], func_801632F0() = the first non-zero result (1 = an actor,
  2 / 4 = other kinds), hit points in D_80126B18[], per-hit vectors in D_80114EB0 / D_80114EC8 (outputs of
  func_80163664); func_80163328() copies the hit points into the hit actors (+0x7C).
* func_8014C4AC(t, type, dmg, pos, angle) = deliver a hit to actor t (+0x5E type, +0x60 damage, +0x62 angle,
  +0x5C |= 1, +0x7C pos). func_8014C3A4 / func_8014C3D0 = the same with rolled damage and the angle taken from the
  attacker's model facing / from the target-to-attacker direction. func_8014C5FC(a, b, off) = elevation angle from a
  to b+off. func_8014C1A0(a, b) = pull b back along the line a->b if a wall is in between (func_80133784).
* func_80155FF8(a, n) -> func_80156044: Musashi's sword attack collision using attack record n of D_8018F3CC
  (20-byte records), active while a+0x1A8 != 0 (func_80156648 clears it). The engine itself runs it while a+0x44 & 2
  (line 11773).
* func_80162F08(o, x, y, z): add (x, y, z) to the three words +0x24/+0x28/+0x2C clamped to +-0x7F0000 (acceleration);
  func_80162FF4(o, x, y, z): the same, then velocity (+0x10..) = those words rotated by the model's X/Y/Z angles;
  func_80163194(o, x, y, z, m): the same rotated by matrix m.
* func_8016380C(o, out): map line test from o+0x44 to the position (func_80133784), snaps the position on a hit,
  returns the hit flags. func_80163950(o): lands on an actor with +0x5C & 0x400 (a platform), returns 1.
* func_80128EA8(spr, player, frames) / func_80128ED8(spr, player): start / step a sprite animation player (src/stage/
  engine.c:535; returns 1 at the end). func_8012E778(o, lim): o on screen within a box (engine.c:2867).
  func_8012EFB8(v, sxy): world point to screen xy (engine.c:3059). func_80013328(a, b): 3D distance.
* func_80165624(a): `D_80078EB8 < cost` (BP too low for the current ability). func_80165958(): D_8012672C++.
  func_801659B8(): D_80126B08 = 1 (read back by func_801659CC in stage scripts, e.g. src/stg/sc04_005.c:2607).
* func_80147364(id, arg): the sound call behind func_80147324 with a second argument (func_8002D4C8(id, arg)).
* func_80013E94(v3, out): pack three halfwords (bits 3-12 of each) into one 10:10:10 word.
* Sprite / model initialisers set the slot's kind at +2: func_8001CB6C 2 (with u/v), func_8001CC3C 3 (with u/v),
  func_8001CD50 5, func_8001CD9C 6, func_8001CF00 0xB; models: func_8001C214 0, func_8001CA1C 3, func_8001C810 5.
  func_80016714(p, n) zeroes n bytes.
* ClearDisplayFlag20 = 0x801553A8 and ActionHelper_1AB0 = 0x80171AB0 (symbol_addrs_stage.txt): ActionHelper_1AB0(a,
  pos) turns a's model yaw toward pos by up to 4 per call and returns the step (0 once facing).
* D_801151D4 is the camera (+0x3C/+0x40/+0x44 eye, +0x48.. reference point: the ratan2 uses at lines 2928-3209).
* D_800C7C74: the draw-buffer index (src/main.c:88 toggles it). D_800A2B78: (model attribute >> 28) & 7, the EXE
  renderers' semi-transparency rate (src/code_800123F0.c:7668, 7835).

**From ovl2e-ovl35.**

"engine NNNN" = src/stage/engine_801458E0.c line NNNN. `a` = Musashi (D_80126B58),
`o` = the object. Pad bits (a+0xAA held / a+0xAC pressed): 0x80 the plain attack (func_80149AA8), 0x10 the attack
that needs flag 0x80 (func_80149B54), 0x40 jump (func_801496D4), 0x08 the hold button of the charge stance
(func_8015EA3C), 0x100 the bit-7 toggle (func_80149FB0). Code size = data offset - 4 (from abil/ovlNN.yaml).

## 4. Shared shapes and clones

Measured over the C (636 functions in C, 24 still `INCLUDE_ASM` on 4 Nov): each function's body with the package's
own symbols numbered by first use (`func_ovlNN_x` -> F0, F1 ...; `D_ovlNN_x` -> D0 ...) and whitespace and types
dropped; equal bodies in two or more packages form a group. 33 groups are exact (constants equal too); with
constants also blanked there are 54. These are C-level clones of one source template, not just the same idea.

* **The package's own ability number.** 23 of the 29 slot-2 packages compare D_80078EC1 with a constant, and the
  constant is always the package's own ability number (ovl13 7, ovl14 5, ovl15 8, ovl16 1, ovl17 0x11, ovl19 0xD,
  ovl1b 2, ovl1c 4, ovl1f 0xF, ovl20 0x16, ovl21 0x18, ovl22 0x15, ovl24 0x13, ovl25 0x1A, ovl26 9, ovl27 0xB, ovl28
  0x10, ovl2a 0x17, ovl2b 0x19, ovl2c 0x1B, ovl2d 0x1C, ovl2e 0x1D, ovl2f 0x1E). This confirms docs/overlays.md's
  ability -> package table from the code side, independently of the field's load switch. (H) ovl18, ovl1a, ovl1d,
  ovl1e, ovl23 and ovl29 never test it; the slot-3 packages never do.

| Shape | Members | What it is | Conf. |
|---|---|---|---|
| `f(a) { a+0x44 \|= 8; D[a+0x197](a); }` | 29: one per slot-2 package (addresses in section 1) | the button template, Musashi's ability step machine | H |
| `f() { func_800183E0(D0); }` (also with `&D0`) | 13: ovl14, 15, 16, 19, 1a, 1d, 26, 29, 2f (0x800CAE0C), ovl28 (0x800CC144); `&D0`: ovl1b, 1c, 1e | queue one image list (the load-time entry) | H |
| the same with two lists | 9: ovl17, 20, 21, 22, 24, 27, 2c, 2e (0x800CAE0C), ovl2d (0x800CAE14) | queue two image lists | H |
| the same with three lists | 3: ovl13, ovl2a (0x800CAE0C), ovl1f (0x800CAE14) | queue three image lists | H |
| `f(a) { F1(a); a+0x197++; }` | 15: ovl14, 17, 18, 1a, 1b, 1c, 1e, 1f, 20, 21, 22, 23, 24, 28, 29 (all the step after the template, 0x800CAE78 / 88 / A0 / A8, ovl18 0x800CAEF8, ovl28 0x800CC1B0) | step 0: start at once (F1 is the start step, usually the next function) | H |
| `f(a) { if (func_80161104() != 0) { F1(a); a+0x197++; } }` | 13: ovl13, 15, 19, 1d, 25, 26, 27, 2a, 2b, 2c, 2d, 2e, 2f | step 0: start only if Musashi stands on a floor this frame (the engine's func_80165B6C shape) | H |
| `f(a) { if (func_80165910() == 0) func_801655E4(a); F1(a); a+0x197++; }` | 2: ovl18 0x800CAF30, ovl23 0x800CAEE0 (most other start steps are this with their own calls between) | pay once, start, next step | H |
| `f() { if (D_80078EC8 == 0) func_80165A20(); }` | 4: ovl14 0x800CAF20, ovl16 0x800CAEF4, ovl18 0x800CAF80, ovl23 0x800CAF30 | the "running" step of a timed ability: end it when the duration runs out | H |
| `f(o) { if (D_80078EC1 == N) D[o+2](o); else func_80146C3C(o); }` | 14 (constants differ): ovl13 B370 and B510, ovl15 B494 and B830, ovl16 AF28, ovl1c B630, ovl27 B580, ovl2a B8B4, ovl2b B424, ovl2c B518 and B8B4, ovl2d B804 and BC60, ovl2e B488 | an effect object's handler: run its state table while the ability is held, else free it | H |
| the same with another free call | 9: ovl15 B1C0, ovl19 B2C8, ovl20 B134 and B62C, ovl25 BBB8, ovl26 B054, ovl2a AFD4 and B5D8, ovl2c B214 | a 0x68 object's (or sprite's) handler | H |
| `f(o) { if (D_80078EC1 != N) { F1(o); return; } D[o+2](o); }` | 3: ovl1f B848, ovl21 B270 and BECC (plus more with extra calls: ovl1c B10C / ovl28 CC298) | the same, the free path first | H |
| `f(o) { func_80162CCC(o); }` | 27 in 21 packages, slot 3 included | a state that frees its 0x68 object (a table's last entry) | H |
| `f() { }` | 21, among them slot 3's 0x800CCB20 in ovl32-ovl35 | an empty step / hook (a table slot with nothing to do) | H |
| `f() { F1(); }` | 8: ovl1a AFDC, ovl1c AFE8, ovl1f B180, ovl20 B078, ovl21 AFCC and BFE4, ovl32 DDA8, ovl34 CD30 | a one-call wrapper (a table entry that forwards) | H |
| `f(a) { func_80147078(a, K); F1(a); }` | 8: ovl1a AF38, ovl1c AF44 and AF78, ovl21 AF28, ovl29 AEE0 and AF14, ovl34 CC8C and CCC0 | set Musashi's (or an object's) kind K and run its first state: the entry the engine calls directly (ovl29's 0x800CAF14 is Hurl's, ovl34's 0x800CCCC0 slot 3's) | H |
| `f(a) { i = a+2 - 2; D[i](a); }` after func_80149020(a) | 4: ovl30 CCBA0, ovl32 / ovl33 / ovl34 0x800CCB28 | slot 3's state dispatch: Musashi's kind handler over states 2.. | H |
| `f(a) { func_80154274(a, D_800D57F4); func_801655E4(a); a+0x197++; }` | 3: ovl2b AF4C, ovl2e AED0, ovl2f AEC0 | start step: the shared throw / use animation D_800D57F4 (in the field overlay's data), pay | H |
| `f(a) { a+0x44 &= ~2; }` | 3: ovl2b B014, ovl2d B02C, ovl2e AFB0 (and ovl27 AFD4, ovl2f AF88 in another spelling) | clear Musashi's flag 2 (a stop hook) | H for the code, unknown flag |
| actor-array walk: `for (p = D_801202A0; ...; p += 0x10C) if (func_8014C308(o, p, ..) && func_8014C278(o, p, r)) ...` | 3: ovl2b B378, ovl2e B3DC, ovl31 D31C | find the first actor in reach that the object can hit | H |
| `f(o) { if (++o+0x1C < 2) { o+0x30 >>= 1; F1(o); } else free(o); }` (ovl15 B6A4 / B930, ovl2c B728 / B9B4) and six more function pairs (ovl15 AEC0, AF0C, B140, B6FC, B88C, B988 = ovl2c AED0, AF1C, B194, B780, B910, BA0C; B4F0 = B574 with other constants) | ovl15 and ovl2c (Gunshot and 3-Way) | twin packages: a two-frame flash that halves its size, the stack-quad draws and the start / end steps are the same code with their own tables | H |
| ovl16 B158 / B228 / B304 / B400 / B458 and ovl22 BAD0 / BBA0 / BC7C / BD78 / BDD0 | ovl16 (Depress) and ovl22 (B.O.) | the same five-state cloud / aura effect (the stack-quad draw ovl16 AF84 and its states) | H |
| ovl2d BAAC / BB54 / BBDC / BC40 and ovl2e B710 / B7B8 / B840 / B8A8 | ovl2d (Homing) and ovl2e (Grenade) | the same sprite-trail / spark object (frame list func_80128ED8, position += velocity) | H |
| ovl32 CCE88 / CD7A8, ovl33 CCE80 / CD5DC, ovl34 CD96C / CDF84 | three slot-3 packages | the same model-follow and matrix-build helpers | H |

The engine's own template (func_80165B28 / B6C / BB4 / BFC) is the shape the slot-2 packages start from: the
floor-gated step 0, a start step that sets an animation and a face, a wait for `+0xB8 & 0x8000` (the animation's end)
and the hand-back `func_801599A4(a); func_80159B3C(a);`. 22 packages hand Musashi back with exactly that pair (16 of
the slot-2 packages and all six slot-3 ones); the timed slot-2 abilities end through func_80165A20 instead.

* **Step 0 and step 1.** func_80165374 starts an ability at step 1 (and func_801653B8 at step 0), so step 1 of every
  table is the start function, and the common step 0 `f(a) { start(a); a+0x197++; }` runs the start (which itself
  steps) and lands on step 2: the two entry points end in the same place. (H for the code, M for why two exist)
* **Continuous abilities.** Several packages have no animation and no hand-back in their steps and only wait on
  D_80078EC8 (ovl20, ovl21, ovl22, ovl23, ovl24 among them): Musashi keeps his normal control while they run, the
  shape of the cost-byte bit 0x80 abilities that func_801654A8 runs every frame (M: the bit itself is data).

### 4a. Patterns noted per group of packages

The four read-throughs listed the shapes they met; kept here as written (they overlap with the table above).

**A (ovl13-ovl1e).**

* **Entry + template**: every package; the template moves when the entry queues more than one record: ovl13
  0x800CAE54 (3 records), ovl17 0x800CAE44 (2), ovl18 0x800CAEB4 (9); all others 0x800CAE34. So D_80190170[7],
  [17], [3] point there, not at 0x800CAE34.
* **Button shape** (step 0 waits for func_80161104, step 1 starts with an animation record, last step ends at
  a+0xB8 == 0x8000 with func_801599A4 + func_80159B3C; cleanup clears a+0x44 bit 2 and sets face 0x11): ovl13
  (CAE98, CAEE0, CAF68, CB018), ovl15 (CAE78, CAEC0, CAF0C, CAF9C, CB140, CB190), ovl19 (CAE78, CAEC0, CAF08, CB0C8,
  CB170), ovl1d (CAE78, CAEC0, CAEF8, no animation). Same as the engine's func_80165B6C / BB4 / BFC.
* **Timed shape** (step 0 = start + ++, step 1 pays once through func_80165910, spawns the effect, step 2 waits for
  D_80078EC8 == 0 then func_80165A20; empty cleanup): ovl14, ovl16 (step 0 only ++), ovl18, ovl1e (no effect, no
  wait); with save / pin / restore of the stats: ovl17 (D_80078EA4 = 0), ovl1b (= 0xA00000).
* **Cloud twins**: ovl14 CAF90 / CB164 / CB254 / CB358 / CB470 / CB4D8 = ovl16 CAF84 / CB158 / CB228 / CB304 / CB400
  / CB458 (colour, kind, rise and bounds differ; docs add ovl22 CB8A0 / CBC7C).
* **4-quad fan draw** (APrim, s8 table read `*p++` x5 and `*p--`, 4 quads, code 0x50000000): ovl14 CAF90, ovl16
  CAF84 (billboard + scale, XY), ovl15 CB6FC (XZ) and CB988 (XY) on the effect's own matrix.
* **Effect handler with ability test** `if (D_80078EC1 == N) t[o+2](); else free`: ovl13 CB370, CB510; ovl15 CB494,
  CB830; ovl16 CAF28; ovl1c CB630; inverted (`!= N` first): ovl1c CB4F4, CB10C (0x68); 0x68 variants freeing with
  func_80162CCC: ovl15 CB1C0 (via CB474), ovl19 CB2C8 (via CB4A8), CBD0C. **Without the test** (states test it or
  never stop): ovl14 CAF54, ovl17 CB190, ovl18 CB5AC, ovl1b CB33C.
* **Master / child on d & 0x8000** in state 0: child = 0x8000 in ovl14 CB164, ovl16 CB158, ovl1b CB378, ovl1c
  CB68C; master = 0x8000 in ovl17 CB1CC, ovl18 CAFE0 (the ability spawns with 0x8000).
* **Emitter state** (`if (--o+0x1C == -1) { spawn child d 0x8000; o+0x1C = period; }`): ovl14 CB4D8 (0x18), ovl16
  CB458 (0x18), ovl1b CB478 (0x20).
* **Two-frame fade** (`if (++o+0x1C < 2) { o+0x30 >>= 1; draw } else free`): ovl15 CB6A4, CB930.
* **Ring sprite blocks** filled then func_800233CC(block, r): ovl18 D_ovl18_800CB860 (0x1E), ovl19 D_ovl19_800CC830
  (0x60), ovl1b D_ovl1b_800CB558 (0x60), ovl1c D_ovl1c_800CBD68 (0x20), CBCCC (0x20), CBDB0 (0x40).
* **Sprite frame animation** (func_80128EA8 start / func_80128ED8 step, free at end): ovl13 CB3CC + CB7F0, ovl17
  CB1CC + CAFA0.
* **0x68 free wrapper** `f() { func_80162CCC(); }`: ovl15 CB474, ovl19 CB4A8, CBF60, ovl1c CB3D0.
* **Musashi kind entry set** (enter kind K then do state-0 work / dispatch; dispatcher; state 0 wrapper): ovl1a
  CAF38 / CAF6C / CAFA0 / CAFDC -> CAFFC (kind 0x1F); ovl1c CAF44 / CAF78 / CAFAC / CAFE8 -> CB008 (kind 0x22).
* **Puff on expiry** func_80146A6C(3, o, pos, 0, 0x80001C00): ovl15 CB2E0, ovl19 CB3FC; other kind-3 puffs with
  packed d / e: ovl17 CAFA0, engine func_8016629C (ovl1a).
* **Icon child init** (sprite from D_800D387C at a pair-table entry, `+0x27 = (i >> 1) + 0x19`): ovl18 CAFE0 =
  ovl23 CAF90; their asm master states ovl18 CB168 = ovl23 CB0D0 (docs).

**B (ovl1f-ovl26).**

* **Button template** `a+0x44 |= 8; steps[a+0x197](a)`: ovl1f CAE5C, ovl20 CAE44, ovl21 CAE44, ovl22 CAE44,
  ovl23 CAE64, ovl24 CAE44, ovl25 CAF58, ovl26 CAE34.
* **Step 0 = run step 1, then ++** (start entered at step 0 skips to 2): ovl1f CAEA0, ovl20 CAE88, ovl21 CAE88,
  ovl22 CAE88, ovl23 CAEA8, ovl24 CAE88. **Step 0 = wait func_80161104, then start**: ovl25 CAF9C, ovl26 CAE78.
* **Pay once** `if (func_80165910() == 0) func_801655E4(a)`: ovl20 CAEC0, ovl21 CAEC0, ovl22 CAEC0, ovl23 CAEE0,
  ovl24 CAEC0. Unconditional pay: ovl1f CAED8, ovl25 CAFE4, ovl26 CAEC0.
* **Duration end** `if (D_80078EC8 == 0) ... func_80165A20(a)` with no animation (continuous abilities, M):
  ovl20 CAF68 (via a vanish object and CB010), ovl21 CB1A0 (or button), ovl22 CB0D8, ovl23 CAF30, ovl24 CAF44.
* **Object handler** `if (D_80078EC1 == N) table[o+2](o); else free`: ovl1f CB1A0 (with extras), CB848; ovl20
  CB134, CB62C; ovl21 CB270, CBECC; ovl22 CB350, CBA74; ovl25 CBBB8; ovl26 CB054. Without the test (tests inside
  the states): ovl23 CB460, ovl24 CB41C.
* **Free wrapper** `f(o) { func_80162CCC(o); }`: ovl20 CB5D4, CB8A4; ovl21 CC004; ovl22 CB600; ovl25 CBEB8; ovl26
  CB24C. **Puff and free** (func_8016634C / func_801662F4 = kind-3 effect at the object, engine 16617): ovl1f CB6CC,
  ovl21 CB7FC.
* **Kill all of a kind** over D_8011F9D0: ovl1f CBBF8 (0x27), ovl25 CB3B4 (0x17), ovl26 CAFD0 (0x18); the search
  form in ovl1f CB0E4 (0xA).
* **Stop-sound stop hook** `func_80147364(4, S)`: ovl22 CB32C (0x838), ovl24 CAF84 (0x83F); inline in ovl1f CB1A0 /
  CB6CC (0x649).
* **Object init at Musashi's model point** (slot at +0x20, func_80149374(owner, o+4), next, or free on no slot):
  ovl1f CB23C, ovl21 CB2CC, ovl22 CB3AC, ovl26 CB0B0.
* **Parent / child effect split on d & 0x8000**: ovl23 CAF90, ovl24 CAFA8, ovl22 CBAD0 (and ovl18 CAFE0).
* **Stack primitive draws**: ovl22 CB8A0 (= func_ovl16_800CAF84 shape, model matrix, G4); screen-space variants
  ovl20 CB900 (GT3), ovl25 CB6A0 (FT4), ovl25 CB964 (G4), ovl21 CBA44 + CBBF8 (GT4).
* **Screen projection helpers** on func_8012EFB8: ovl1f CB7B0 (off-screen test), ovl20 CB8C4.
* **Accelerated grow / shrink to a clamp** (+rate += k; value += rate; clamp): ovl20 CB3C0, ovl21 CB06C, ovl25
  CB0B0 / CB288.
* **Whole-package twin**: ovl23 (Rip-off) = ovl18 (Satiate) shape.

**C (ovl27-ovl2d).**

* **Button template** (a+0x44 \|= 8; table[a+0x197](a)): ovl27 CAE44, ovl28 CC16C, ovl29 CAE34, ovl2a CAE54, ovl2b
  CAEC0, ovl2c CAE44, ovl2d CAE4C. Its address differs per package (CAE34-CAEC0, CC16C for Steel), so the engine's
  D_80190170 must hold per-package addresses, not always 0x800CAE34.
* **Wait-then-start step** (`if (func_80161104()) { start(a); step++; }`, the start also does step++ so step 0 goes
  to 2): ovl27 CAE88, ovl2a CAE98, ovl2b CAF04, ovl2c CAE88, ovl2d CAE90. No-wait variant: ovl28 CC1B0, ovl29 CAE78.
* **Marker-spawn step** (anim end 0x8000 -> func_801599A4 + func_80159B3C; marker 0x4000 -> spawn a 0x68 object;
  func_80161208 movement): ovl27 CAF24, ovl2b CAF94, ovl2d CAF80; the engine-throw variant ovl29 CB080.
* **Bit-2 stop hook** (a+0x44 &= ~2): ovl27 CAFD4, ovl2b CB014, ovl2d CB02C; with face 0x11: ovl2c CB1E4. Empty
  stop hooks: ovl28 CC290, ovl2a CAFCC, ovl29 CAED8 (L).
* **Effect handler** `if (D_80078EC1 == N) table[o+2](); else func_80146C3C(o);`: ovl27 CB580, ovl2a CB8B4, ovl2b
  CB424, ovl2c CB518 / CB8B4, ovl2d CB804 / CBC60. The 0x68-object version with a local free wrapper: ovl27 CAFE8
  (+ matrix rebuild), ovl2a CAFD4 (free + end ability) / CB5D8, ovl2c CB214, ovl28 CC298 (inverted test, follow +
  flicker before the state call). With the `y >= 0x401` kill after the state call: ovl2b CB028, ovl2d CB040.
* **Free wrapper** `func_80162CCC()`: ovl27 CB384, ovl28 CC6A4, ovl2a CB774, ovl2b CB358, ovl2c CB4F8, ovl2d CB4AC.
* **Spawn limit / single use**: ovl27 (func_80146608 max 8 of kind 0x21), ovl2a (refuse while a kind 0x22 exists),
  ovl2d (refuse at 6 kind 0x25).
* **Projectile with timer + func_80163408 hit test + func_801632F0 result**: ovl27 CB190 (0x28), ovl2b CB150 (0x27),
  ovl2c CB360 (0x2D), ovl2d CB228 (0x2B); spark on result 1 from D_80114EB0 (ovl27, ovl2c), effect 7 from D_80114EC8
  on 2 / 4 (ovl2c).
* **Radius blast over the actor array** (func_8014C308 + func_8014C278 + hit call): ovl2a CB794 (0xC0, 0x33),
  ovl2b CB378 (0x60, 0x27).
* **Directional spark / shard spawn** (AVec direction table [d] + ALVec base velocity, jitter when e != 0,
  RotMatrixZYX + ApplyMatrixLV, timer, then velocity >> 2): ovl2a CB910 + CBC14, ovl2d CB860 + CBAAC.
* **Sprite scale shrink -0x300 then free**: ovl27 CB720, ovl2b CB30C.
* **Shared field-overlay data**: animation D_800D57F4 (ovl2b CAF4C, ovl2d CAED8); trail sprite D_800D387C /
  D_800D3888 (ovl2d); EXE model data D_800636C8 (ovl2c, also ovl15).
* **Package twins / engine copies**: ovl2c = ovl15 function for function; ovl29 = the engine's carry-throw kind 0xE
  (func_8015DA90-func_8015DD74) with hit 0x29; ovl28 CC7FC = engine func_8016BFD0; ovl28's sort loops = the EXE's
  model loops with preset packets and the glint band.

**D (ovl2e-ovl35).**

* Slot-3 shape: 0x800CCB20 = the technique's start hook (D_80190B9C[sel - 1]; empty in ovl32-35), and a per-frame
  hook for Musashi kind 8 from state 2 (D_80190BB4[sel - 1]): ovl30 CCBA0 / ovl31 CCB8C / ovl32-34 CCB28 dispatch
  `table[state - 2]` (ovl30, ovl32-34 after func_80149020), ovl35 CCB28 acts directly.
* Timed-buff shape (ovl32, ovl33, ovl34, ovl35): the first per-frame call spawns the objects, sets a+0x1C8 (0xFF, or
  0xBA) and hands Musashi back at once; the technique then lives in 0x68 objects (or engine code, ovl35) whose
  handlers free themselves when IsTechniqueNActive turns false; one object spends a+0x1C8 by 1 per frame (ovl32
  CCDB0, ovl33 CCC54, ovl34 CD708; the engine for 6). The engine cancels: 3 by breaking (func_800CCF68), 4 by
  func_800CCF58, 5 and 6 by a+0x1C8 = 0 on any hit (engine 7057-7061).
* a+0x1C7 = the selection number (2, 3, 5) is set through func_8014B5C4 by ovl31, ovl32, ovl34 and cleared every
  frame by func_8014B5D0.
* "+0x60 notify": the engine or Musashi's state finds the companion object by kind with func_8014C088 and sets
  +0x60 = 1 for one frame (ovl32 CCF68 break, ovl33 CCF28 grow, ovl34 CDA14 grow); the handler clears it.
* Shared helpers across ovl32-34: follow (CCE88 / CCE80 / CD96C), travel matrix (CD7A8 / CD5DC / CDF84), handler
  with hide-bit copy and eased shared yaw (ovl33 CCC54 / ovl34 CD708), the forward shot (ovl33 CD390-CD4BC / ovl34
  CDD9C-CDEB4), orbiting sprites (ovl33 kind 0x11 / ovl34 kind 0x14). ovl33 and ovl34 are near twins.
* 0x68 kinds per package (spawn sites): ovl2e 0x20, ovl2f 0x26, ovl31 5 / 6, ovl32 7 / 8 / 9, ovl33 0x10 / 0x11 /
  0x12, ovl34 0x13 / 0x14 (+ one unknown); their handlers live at slot-3 addresses, so the stage's 0x68 kind table
  must point into slot 3 for these kinds.
* Slot-2 throw template (ovl2e, ovl2f): animation D_800D57F4, BP once, 0x68 object at marker 0x4000 at (0, -0x40, 0),
  object handler tests D_80078EC1 (0x1D / 0x1E) and frees past y 0x400; a stop hook that clears a+0x44 bit 2.
  ovl2e's per-frame handler sits at 0x800CAE44 because its load entry queues two image records.
* Object physics through the engine: func_80162FF4 / func_80163194 (accelerate a local velocity, rotate it to world
  by the model rotation or a given matrix), func_80162FC0 (move), func_801638A0 (map hit: 0x8000 / 0x4000 / 0x2000 by
  the surface normal), func_80163950 (actor mesh), func_80163408 + func_80163328 + func_801632F0 (attack test of
  class K against actors; 1 = hit an actor, 2 / 4 = other).
* Free wrappers `f() { func_80162CCC(); }`: ovl2e CB3BC, ovl2f CB338, ovl31 CD1D4 / CD650, ovl32 CCE68 / CD178,
  ovl33 CCE60 / CD5BC, ovl34 CD94C / CDBD4 / CDF64.


## 5. Package by package

Each package: what it does (with the C evidence), how it is entered, then every function in address order with a
one-line purpose and a confidence. Addresses are VRAM; `CB370` is short for 0x800CB370 inside the package named in the
heading. Functions still `INCLUDE_ASM` (24 on 4 Nov) are described from their callers and outside symbols and marked
"asm, not matched". The sections were written from four read-throughs (ovl13-ovl1e, ovl1f-ovl26, ovl27-ovl2d,
ovl2e-ovl35) and checked against the shapes in section 4.

Slot 2 first (ovl13-ovl2f, by package ID), then slot 3 (ovl30-ovl35).

### ovl13: ability 7, Stun (MAIN.CD entry 13, slot 2, code 2596 B, 16 functions, 2 still asm)

**What it does.** A special sword swing. Step 1 (func_ovl13_800CAEE0) sets animation record D_ovl13_800CB830
directly (func_80154274), face 0x15, plays sound 0x477, pays the BP cost (func_801655E4, every use), clears
a+0xBE / a+0xBF, resets the hit state (func_80156648), sets attack index a+0x1AA = 0, a+0xC0 = 0 and starts rumble
D_80062BD0. Step 2 (func_ovl13_800CAF68) sets a+0x44 bit 2 and, while not interrupted (func_80161208 == 0): each
animation marker (a+0xB8 & 0x2000) counts a+0xBF up; while BF == 1, func_ovl13_800CB05C grows a+0xC0 by 0x800 per
frame (cap 0x2000) and a+0x1B8 / a+0x1BA by 0x800; while BF == 2 it shrinks them back (floor 0). Every frame it
runs the sword hit check func_80155FD4(a, a+0x1AA) = attack record D_8018F548[0]. When a+0xB8 == 0x8000 (the
animation ended) Musashi goes back to normal control (func_801599A4 + func_80159B3C). a+0x1B8 / +0x1BA are 1.0 =
0x1000 scales (the engine's func_80158AE4 resets them with the other scales; the cleanup here resets them too); what
they scale (the blade?) and what a+0xC0 feeds are unknown. The "stun" itself must come from the attack record /
the struck actor's reaction (not in this package). Effect kind 0x15 (two spawners, below) puts sprite effects over
an actor: func_ovl13_800CB0E8(x) spawns one owned by x and records x+0x36; its follower state
(func_ovl13_800CB6E4) tracks the owner's head (model box at owner+0x58 or -0x30) and for 0x18 frames spawns 14
children (kind 0x15, d 0x8000, e = frame). Nothing in the package's C calls func_ovl13_800CB0E8; the stage engine does: func_80130438 (src/stage/engine_8012F5F4.c ~1075), an enemy reaction step, calls it on the reacting actor when its +0xB4 has bit 0x40, with sounds 0x47B and 0x478 and a count of 0x78 frames: the stun effect on an enemy Stun hit (H for the call, M for the reading).

**Entry and dispatch.** Entry func_ovl13_800CAE0C queues three image records (D_ovl13_800CC57C, D_ovl13_800CC5BC,
D_ovl13_800CB93C), so the template sits at **0x800CAE54** (not 0x800CAE34): func_ovl13_800CAE54 dispatches
D_ovl13_800CB880[a+0x197]. Steps: [0] func_ovl13_800CAE98 (wait until func_80161104, start, ++ -> 2), [1]
func_ovl13_800CAEE0 (start), [2] func_ovl13_800CAF68 (swing); 3 used / room 15. Cleanup hook (D_80190364[7])
probably func_ovl13_800CB018. Effect handlers (both test D_80078EC1 == 7): func_ovl13_800CB370 (table
D_ovl13_800CB908, room 3) and func_ovl13_800CB510 (table D_ovl13_800CB914, room 10). Called from outside: the
template, the cleanup, the two effect handlers (through D_80126728), func_ovl13_800CB0E8 (called by the engine's enemy reaction step func_80130438).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl13_800CAE0C | entry: queue 3 image records | H |
| 0x800CAE54 | func_ovl13_800CAE54 | template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE98 | func_ovl13_800CAE98 | step 0: wait for func_80161104, start, ++ | H |
| 0x800CAEE0 | func_ovl13_800CAEE0 | step 1: swing anim, face 0x15, sound 0x477, pay BP, reset hit, rumble | H |
| 0x800CAF68 | func_ovl13_800CAF68 | step 2: count markers, ramp scales, sword hit, end on anim end | H |
| 0x800CB018 | func_ovl13_800CB018 | reset a+0x1B8/1BA to 0x1000, clear 0x44 bit 2, face 0x11 (cleanup hook) | M |
| 0x800CB054 | func_ovl13_800CB054 | a+0xC0 = 0 | H |
| 0x800CB05C | func_ovl13_800CB05C | phase 1: ramp a+0xC0 (cap 0x2000) and 1B8/1BA up 0x800; phase 2: down | H |
| 0x800CB0E8 | func_ovl13_800CB0E8 | spawn effect 0x15 owned by arg, o+0x30 = arg+0x36 | H |
| 0x800CB138 | func_ovl13_800CB138 | asm, not matched: an effect state that copies the identity matrix twice (docs r165 note); likely a state-0 initialiser like CB56C | L |
| 0x800CB370 | func_ovl13_800CB370 | effect handler: ability 7 ? D_ovl13_800CB908[o+2] : free | H |
| 0x800CB3CC | func_ovl13_800CB3CC | effect init: angles from packed d, offset (0,-8,-0x10), toward camera, sprite + frame anim | H |
| 0x800CB510 | func_ovl13_800CB510 | effect handler: ability 7 ? D_ovl13_800CB914[o+2] : free | H |
| 0x800CB56C | func_ovl13_800CB56C | asm, not matched: effect state with identity-matrix copies (docs); likely kind 0x15's state 0 (child sprite / master split) | L |
| 0x800CB6E4 | func_ovl13_800CB6E4 | follower: track owner's head, spawn 14 kind-0x15 children over 0x18 frames, free | H |
| 0x800CB7F0 | func_ovl13_800CB7F0 | advance the sprite frame animation, free when it ends | H |

**Notes.** Clones: func_ovl13_800CAE98 / CAEE0 / CAF68 are the button-template shape (cf. ovl15 CAE78 / CAEC0,
ovl19 CAE78 / CAEC0, engine func_80165B6C / B6C / BB4 / BFC); func_ovl13_800CB018 = ovl15 CB190 / ovl19 CB170 plus
the 1B8/1BA reset; the two effect handlers are the standard `if (D_80078EC1 == N)` shape; CB3CC + CB7F0 use the
func_80128EA8 / ED8 pair like ovl17 CB1CC / CAFA0 and engine_8013C98C.c lines 3205-3256. Data: D_ovl13_800CB830
(0x50) the swing animation record (H); D_ovl13_800CB880 step table (H); D_ovl13_800CB8BC (0x40) the sprite frame
list (M); D_ovl13_800CB8FC (0xC) sprite definition for func_800D21C4 (M); D_ovl13_800CB908 / CB914 effect state
tables (H); D_ovl13_800CB93C (0xC40), CC57C (0x40), CC5BC (0x20) image records (+ pixel data) (H for being queued).
Open: which states go in which table (CB3CC must be followed by a sprite-anim state, CB7F0 fits; CB6E4 is kind
0x15's follower, so CB510's table is probably {CB56C, CB6E4, CB7F0}); (CB0E8's caller is now known: section 2);
what 0xC0 / 0x1B8 / 0x1BA do. Outside symbols used only by the asm: func_800D222C, func_800D20C0, func_8012F14C,
D_800AE620 (plus RotMatrixYXZ, ApplyMatrixSV, MulMatrix0, RotMatrixZ, rand declared).

### ovl14: ability 5, Perfume (MAIN.CD entry 14, slot 2, code 1968 B, 13 functions, 0 still asm)

**What it does.** A timed aura. Step 1 (func_ovl14_800CAEB0) pays BP once (func_80165910 latch), spawns effect
kind 0xA (d 0) on Musashi and plays sound 0x475. Step 2 (func_ovl14_800CAF20) ends the ability (func_80165A20)
when the duration D_80078EC8 reaches 0. The 0xA master (state 0 with d bit 0x8000 clear) grows for 8 frames
(size o+0x28 += 0x120) on Musashi's model matrix, then becomes the emitter (state 4, func_ovl14_800CB4D8): drawn at
his matrix every frame and every 0x18 frames (first at once) it spawns a puff (kind 0xA, owner Musashi, d 0x8000).
A puff grows 10 frames (+0x120/frame), then takes half of Musashi's velocity (o+0x12 / o+0x1A), drifts with it and
rises 3/frame for 0x20 frames while its size pulses between random bounds ((rand & 0x180) + 0x400 / + 0x700,
rate +-0xA0), then shrinks 0x100/frame and is freed. Every state frees itself when D_80078EC1 != 5. The draw
(func_ovl14_800CAF90) is a billboarded fan of 4 gouraud quads at Musashi's height (0,-0x2C,0), centre colour
r = b = (size >> 6) + 0x70, g = 0 (pink / magenta), rim black. Gameplay: the engine halves damage taken while
c[0x49] == 5 (line ~7074): the package itself changes no stat. Evidence for "perfume": a coloured cloud around
Musashi plus the damage halving; nothing about enemies.

**Entry and dispatch.** Entry func_ovl14_800CAE0C (one image record D_ovl14_800CB610); template
func_ovl14_800CAE34 -> D_ovl14_800CB5BC: [0] CAE78 (start, ++), [1] CAEB0 (start), [2] CAF20 (wait duration);
3 used / room 3. Cleanup hook probably the empty func_ovl14_800CAF4C. Effect handler func_ovl14_800CAF54 (no
ability test: each state tests 5) -> D_ovl14_800CB5DC: [0] CB164, [1] CB254, [2] CB358, [3] CB470, [4] CB4D8
(5 used / room 13; every transition in the C matches this order).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl14_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl14_800CAE34 | template | H |
| 0x800CAE78 | func_ovl14_800CAE78 | step 0: start, ++ | H |
| 0x800CAEB0 | func_ovl14_800CAEB0 | step 1: pay once, spawn effect 0xA, sound 0x475 | H |
| 0x800CAF20 | func_ovl14_800CAF20 | step 2: end ability when D_80078EC8 == 0 | H |
| 0x800CAF4C | func_ovl14_800CAF4C | empty (cleanup hook) | M |
| 0x800CAF54 | func_ovl14_800CAF54 | effect handler: D_ovl14_800CB5DC[o+2](o) | H |
| 0x800CAF90 | func_ovl14_800CAF90 | draw the pink 4-quad billboard fan of size o+0x28 | H |
| 0x800CB164 | func_ovl14_800CB164 | state 0: puff -> state 1; master grows 8 frames -> state 4 | H |
| 0x800CB254 | func_ovl14_800CB254 | state 1: puff grows 10 frames, takes half owner velocity, -> 2 | H |
| 0x800CB358 | func_ovl14_800CB358 | state 2: pulse size, drift, rise 3/frame for 0x20 frames | H |
| 0x800CB470 | func_ovl14_800CB470 | state 3: shrink 0x100/frame, rise, free at 0 | H |
| 0x800CB4D8 | func_ovl14_800CB4D8 | state 4: emitter on Musashi, puff every 0x18 frames | H |

**Notes.** Twin package of ovl16 (Depress): every function has the same shape, ovl14 differs in colour (r = b
instead of b), sound 0x475, kind 0xA, rise 3 (not 2), pulse bounds 0x400 / 0x700 (ovl16 0x500 / 0x800), the step-0
shape (calls start directly) and the per-state ability test (ovl16 tests in the handler). func_ovl14_800CAF90 =
func_ovl16_800CAF84 (and ovl22 CB8A0 per docs) with its own colour; CB358 = ovl16 CB304 / ovl22 CBC7C. Data:
D_ovl14_800CB5BC step table (H); D_ovl14_800CB5C8 the s8 vertex table, 4 quads sharing an edge, 18 of 20 bytes read
(H); D_ovl14_800CB5DC effect state table (H); D_ovl14_800CB610 image record (H). Open: why the master tests
o+0x2C (d) and the puff path is the 0x8000 one (inverse of ovl17 / ovl18).

### ovl15: ability 8, Gunshot (MAIN.CD entry 15, slot 2, code 3252 B, 20 functions, 0 still asm)

**What it does.** Musashi draws and fires a gun, repeatedly while the button is held. Step 1 (CAEC0): animation
D_ovl15_800CBAC0, face 0x15. Step 2 (CAF0C): at the animation end, if pad bit 0x20 is held (func_801487F4) start the
fire animation D_ovl15_800CBB00 (step 3), else the put-away animation D_ovl15_800CBAE0 (step 4). Step 3 (CAF9C, sets
a+0x44 bit 2): aims (digital pad: turn the model yaw toward func_80148E54 by at most 4 per frame with
func_80012ABC; analog: func_80148AFC); on the marker a+0xB8 & 0x4000 fires: 0x68 object kind 2 (the bullet,
upper slots) and effect kind 0xF (muzzle flash) at (0,-0x18,-0xF), sound 0x476, pays the BP cost (each shot) and
rumble D_80062BD0; at the animation end restarts the fire animation if the button is still held and BP is enough
(func_80165624 == 0), else plays the put-away animation and goes to step 4. Step 4 (CB140) hands control back at
the animation end. The bullet copies Musashi's rotation (owner +0x100 / +0x104 and the model yaw), moves -0x40 per
frame along its own z (func_80146DE8(o, 0, 0, 0xFFC00000), func_80163194 with its rotation matrix), for 16 frames
(func_80146E90); each frame a collision sweep with attack type 0x10 (func_80163408(o, 0x10, 0x80, 0x200)) and
func_80163328 marks struck actors. Result 1 (an actor, M) -> effect 0x1F at the hit point with the packed vector
D_80114EB0; result 2 / 4 (a surface, M) -> effect 7 with D_80114EC8; timeout -> effect 3 (e 0x80001C00); then
freed. The muzzle flash (kind 0xF) is a model (D_ovl15_800CC870 init data, pose D_800636C8) in front of Musashi
(0,-6,z-0x24), scale 0x1800 with a random roll, plus a 4-quad XZ fan of brightness 0x80, halved on frame 2 and
freed; it spawns kind 0x13, a camera-facing yellow glow (r = g = 0xC0, b = half) that also lasts 2 frames.
The name fits the C plainly.

**Entry and dispatch.** Entry CAE0C (image record D_ovl15_800CBB88); template CAE34 -> D_ovl15_800CBB24: [0]
CAE78 (wait, start, ++), [1] CAEC0, [2] CAF0C, [3] CAF9C, [4] CB140; 5 used / room 5 (exact). Cleanup probably
CB190. Bullet (0x68 kind 2) handler CB1C0 (ability 8, else free) -> D_ovl15_800CBB38: [0] CB21C, [1] CB2E0, [2]
CB474 (3 / 3). Flash (effect 0xF) handler CB494 -> D_ovl15_800CBB58: [0] CB4F0, [1] CB6A4 (2 / 2). Glow (effect
0x13) handler CB830 -> D_ovl15_800CBB60: [0] CB88C, [1] CB930 (2 used / room 10).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl15_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl15_800CAE34 | template | H |
| 0x800CAE78 | func_ovl15_800CAE78 | step 0: wait for func_80161104, start, ++ | H |
| 0x800CAEC0 | func_ovl15_800CAEC0 | step 1: draw animation, face 0x15 | H |
| 0x800CAF0C | func_ovl15_800CAF0C | step 2: at anim end, fire anim (held) or put-away anim | H |
| 0x800CAF9C | func_ovl15_800CAF9C | step 3: aim, fire on marker 0x4000 (bullet, flash, sound, BP, rumble), repeat while held | H |
| 0x800CB140 | func_ovl15_800CB140 | step 4: hand back at anim end | H |
| 0x800CB190 | func_ovl15_800CB190 | clear 0x44 bit 2, face 0x11 (cleanup hook) | M |
| 0x800CB1C0 | func_ovl15_800CB1C0 | bullet handler: ability 8 ? state table : free | H |
| 0x800CB21C | func_ovl15_800CB21C | bullet init: model, owner's rotation, velocity -0x40 z, timer 16 | H |
| 0x800CB2E0 | func_ovl15_800CB2E0 | bullet flight: move, sweep (type 0x10), spark / puff on hit or timeout | H |
| 0x800CB474 | func_ovl15_800CB474 | free the 0x68 object | H |
| 0x800CB494 | func_ovl15_800CB494 | muzzle-flash handler (ability 8) | H |
| 0x800CB4F0 | func_ovl15_800CB4F0 | flash init: model, place in front, random roll, spawn glow 0x13, draw | H |
| 0x800CB6A4 | func_ovl15_800CB6A4 | flash frame 2: halve brightness, draw; then free | H |
| 0x800CB6FC | func_ovl15_800CB6FC | draw 4-quad XZ fan, grey of brightness o+0x30 | H |
| 0x800CB830 | func_ovl15_800CB830 | glow handler (ability 8) | H |
| 0x800CB88C | func_ovl15_800CB88C | glow init: toward camera, billboard matrix, brightness 0xC0 | H |
| 0x800CB930 | func_ovl15_800CB930 | glow frame 2: halve, draw; then free | H |
| 0x800CB988 | func_ovl15_800CB988 | draw 4-quad XY fan, yellow (b = half) | H |

**Notes.** CB6FC / CB988 are the CAF84 fan draw (docs: ovl15 and ovl2c are twin packages) with the effect's own
matrix +0x38 and one shared vertex table; CB6A4 = CB930 (two-frame fade). CB474 = ovl19 CB4A8 / CBF60 = ovl1c
CB3D0 (`func_80162CCC()` wrapper). The bullet's timeout puff (kind 3, e 0x80001C00) is the same call as ovl19
CB3FC. Data: D_ovl15_800CBAC0 / CBAE0 / CBB00 animation records (draw, put away, fire) (H); D_ovl15_800CBB24 step
table (H); CBB38 / CBB58 / CBB60 state tables (H); D_ovl15_800CBB44 s8 fan vertex table (H); D_ovl15_800CBB88
(0xCE8) image record + data (H); D_ovl15_800CC870 (8 B) model init data for func_8001C810 (M). Open: the hit-result
codes 1 / 2 / 4 are inferred from the two different sparks, not traced in func_80157158.

### ovl16: ability 1, Depress (MAIN.CD entry 16, slot 2, code 1808 B, 13 functions, 0 still asm)

**What it does.** A timed aura, the twin of ovl14. Step 0 (CAE78) only goes to step 1; step 1 (CAE8C) pays BP once
and spawns effect kind 0x4B (no sound); step 2 (CAEF4) ends the ability when D_80078EC8 == 0. The 0x4B master grows
8 frames on Musashi's matrix then emits a puff every 0x18 frames; puffs grow 10 frames, drift with half his
velocity, rise 2/frame for 0x20 frames pulsing between (rand & 0x180) + 0x500 / + 0x800, shrink and vanish. Colour
b = (size >> 6) + 0x70, r = g = 0: a blue cloud. The handler (CAF28) frees every 0x4B object when D_80078EC1 != 1.
Gameplay: engine func_8014B190 sets Musashi's flag a+0x44 0x200 while D_80078EC1 == 1, the same flag it sets when
he is poisoned, has BP < 0xB or D_80078EA6 < 0x10; func_8014C6F4 then marks a+0x162 = 1 (the point that objects
turn to is "not set"). So the package draws a gloomy cloud and the engine puts him in a weak state; what 0x200
does beyond that is not traced. Supports "Depress" only loosely (blue cloud + the low-BP state).

**Entry and dispatch.** Entry CAE0C (D_ovl16_800CB570); template CAE34 -> D_ovl16_800CB51C: [0] CAE78, [1] CAE8C,
[2] CAEF4 (3 / 3). Cleanup probably the empty CAF20. Effect handler CAF28 (ability 1, else free) ->
D_ovl16_800CB53C: [0] CB158, [1] CB228, [2] CB304, [3] CB400, [4] CB458 (5 used / room 13).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl16_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl16_800CAE34 | template | H |
| 0x800CAE78 | func_ovl16_800CAE78 | step 0: ++ | H |
| 0x800CAE8C | func_ovl16_800CAE8C | step 1: pay once, spawn effect 0x4B | H |
| 0x800CAEF4 | func_ovl16_800CAEF4 | step 2: end when D_80078EC8 == 0 | H |
| 0x800CAF20 | func_ovl16_800CAF20 | empty (cleanup hook) | M |
| 0x800CAF28 | func_ovl16_800CAF28 | effect handler: ability 1 ? table : free | H |
| 0x800CAF84 | func_ovl16_800CAF84 | draw the blue 4-quad billboard fan of size o+0x28 | H |
| 0x800CB158 | func_ovl16_800CB158 | state 0: puff -> 1; master grows 8 frames -> 4 | H |
| 0x800CB228 | func_ovl16_800CB228 | state 1: puff grows, takes half owner velocity | H |
| 0x800CB304 | func_ovl16_800CB304 | state 2: pulse, drift, rise 2/frame for 0x20 frames | H |
| 0x800CB400 | func_ovl16_800CB400 | state 3: shrink, rise, free | H |
| 0x800CB458 | func_ovl16_800CB458 | state 4: emitter, puff every 0x18 frames | H |

**Notes.** Clone list under ovl14. Data: D_ovl16_800CB51C step table (H), D_ovl16_800CB528 s8 fan vertex table (H),
D_ovl16_800CB53C effect state table (H), D_ovl16_800CB570 image record (H). Open: whether the engine reads
ability 1 anywhere else (only func_8014B190 found by `D_80078EC1 == 1`).

### ovl17: ability 17, Sleepy (MAIN.CD entry 17, slot 2, code 1292 B, 10 functions, 0 still asm)

**What it does.** A timed state. Step 1 (CAEC0) saves the stats (func_801657A0), pays BP once, plays sound 0x47C
and spawns effect kind 0x20 (d 0x8000). Step 2 (CAF2C) writes D_80078EA4 = 0 every frame (the meter the engine
drains; when it is empty the engine eventually sets a+0x44 bit 0x100) until D_80078EC8 == 0, then restores the saved
stats (func_80165840, which also restores D_80078EA4) and ends the ability. The cleanup (CAF7C) sends sound
command (4, 0x47C), very likely stopping that sound (M, cf. func_80149954). The 0x20 master (d & 0x8000) spawns 4
children (func_80146AB4, d = 0, 0x400, 0x800, 0xC00), sets o+0x16 = -0x38 and then sits at Musashi's model point
(0,-0x38,0) (func_801493D0) above his head. Each child is a sprite (kind 3, def D_ovl17_800CB324, scale 0x1C00,
+0x27 = 0x19, frame anim D_ovl17_800CB330) that circles the master at radius 0x40, angle (frame << 5) + d,
bobbing (rcos >> 9) - 0x14; it spawns a puff (kind 3) on its first frame and another when the ability ends, then
frees itself. Supports "Sleepy": the meter forced to 0 and four orbiting marks over the head (the image itself is
unknown).

**Entry and dispatch.** Entry CAE0C queues two image records (D_ovl17_800CB3BC, D_ovl17_800CB37C), so the template is
at **0x800CAE44** -> D_ovl17_800CB318: [0] CAE88, [1] CAEC0, [2] CAF2C (3 / 3). Cleanup probably CAF7C. Effect
handler CB190 (no ability test) -> D_ovl17_800CB350: [0] CB1CC, [1] CB2CC (master), [2] CAFA0 (child); 3 used /
room 11 (CB1CC sets state 1 for the master, 2 for a child; which of CAFA0 / CB2CC is 1 is M from what each reads).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl17_800CAE0C | entry: queue 2 image records | H |
| 0x800CAE44 | func_ovl17_800CAE44 | template | H |
| 0x800CAE88 | func_ovl17_800CAE88 | step 0: start, ++ | H |
| 0x800CAEC0 | func_ovl17_800CAEC0 | step 1: save stats, pay once, sound 0x47C, spawn 0x20 | H |
| 0x800CAF2C | func_ovl17_800CAF2C | step 2: D_80078EA4 = 0 each frame; at duration end restore stats, end | H |
| 0x800CAF7C | func_ovl17_800CAF7C | sound command (4, 0x47C): stop the sound (cleanup hook) | M |
| 0x800CAFA0 | func_ovl17_800CAFA0 | child: orbit the master, step sprite anim; puff + free when ability ends | H |
| 0x800CB190 | func_ovl17_800CB190 | effect handler: D_ovl17_800CB350[o+2](o) | H |
| 0x800CB1CC | func_ovl17_800CB1CC | state 0: master spawns 4 children; child makes its sprite | H |
| 0x800CB2CC | func_ovl17_800CB2CC | master: follow Musashi's head point; free when ability ends | H |

**Notes.** The save / per-frame-write / restore shape is shared with ovl1b (Mint), which writes 0xA00000 instead
of 0. The child state uses the sprite frame-anim pair (func_80128EA8 / ED8) like ovl13. Data: D_ovl17_800CB318
step table (H), D_ovl17_800CB324 (0xC) sprite definition (M), D_ovl17_800CB330 (0x20) frame list (M),
D_ovl17_800CB350 effect state table (H), D_ovl17_800CB37C (0x40) / CB3BC (0x20) image records (H). Open: the
in-game meaning of D_80078EA4 (it is what both Sleepy and Mint pin).

### ovl18: ability 3, Satiate (MAIN.CD entry 18, slot 2, code 2012 B, 11 functions, 2 still asm)

**What it does.** A timed ability with icon effects. Step 1 (CAF30) pays BP once and calls CAFB4, which spawns
effect kind 0x23 (d 0x8000); step 2 (CAF80) ends the ability when D_80078EC8 == 0. The engine also ends it when
Musashi is hit (func_80165718, case 3). The 0x23 master (state 0, CAFE0) fills the ring block D_ovl18_800CB860
(colours 0xA0,0xA0,0x70 / 0,0,0; circle radius 0x1E), sets o+0x12 = 0x1C0 and goes to state 1, the asm
func_ovl18_800CB168 (docs: twin of ovl23 CB0D0; a counter `AF(0x28)++ & 7` packed into a spawn argument as
`<< 16`, a u32 switch, `x -= 0xE0`). A child (state 0 without 0x8000) takes index i = e >> 15, makes an icon sprite
(kind 3 from the shared sheet D_800D387C at the s16 pair D_ovl18_800CB5F4[i] / [i+1], scale 0x2000, palette byte
+0x27 = (i >> 1) + 0x19) plus a ring sprite (kind 6, D_ovl18_800CB860, +0x2C 0xC001) stored in o+0x34, and goes to
state 2, the asm func_ovl18_800CB328. So the master cycles through 8 icons ((counter & 7) << 16 gives i = 2k, and
the pair table holds exactly 8 pairs); 8 image records D_ovl18_800CB680..CB840 (+ CB640) are queued at load. The
outside symbols that only the asm can use are Musashi's position halves (D_80126B5E / 62 / 66), his scale fields
a+0x70 / 72 / 74 (D_80126BC8 / BCA / BCC; ovl23's twin child init squashes them: BCC -= 0x300, BC8 = BCC,
BCA += 0xC0), func_8002D4C8 (sound), rand, RotMatrixY, func_8012F14C, D_800AE620, D_800B99DA, func_80016714 and
func_80146A6C / func_80146AB4. So icons probably fly at Musashi and his model swells (L, from the twin); the stat
effect of "Satiate" is not in the package and not found in the engine (no `== 3` test besides func_80165718).

**Entry and dispatch.** Entry CAE0C queues 9 image records (CB680, CB6C0, CB700, CB740, CB780, CB7C0, CB800,
CB840, then CB640), so the template is at **0x800CAEB4** -> D_ovl18_800CB5E8: [0] CAEF8, [1] CAF30, [2] CAF80
(3 / 3). Cleanup probably the empty CAFAC. Effect handler CB5AC (no ability test) -> D_ovl18_800CB614: [0] CAFE0,
[1] CB168 (master), [2] CB328 (child); 3 used / room 11.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl18_800CAE0C | entry: queue 9 image records | H |
| 0x800CAEB4 | func_ovl18_800CAEB4 | template | H |
| 0x800CAEF8 | func_ovl18_800CAEF8 | step 0: start, ++ | H |
| 0x800CAF30 | func_ovl18_800CAF30 | step 1: pay once, spawn master | H |
| 0x800CAF80 | func_ovl18_800CAF80 | step 2: end when D_80078EC8 == 0 | H |
| 0x800CAFAC | func_ovl18_800CAFAC | empty (cleanup hook) | M |
| 0x800CAFB4 | func_ovl18_800CAFB4 | spawn effect 0x23, d 0x8000 | H |
| 0x800CAFE0 | func_ovl18_800CAFE0 | state 0: master sets ring colours; child makes icon + ring sprites | H |
| 0x800CB168 | func_ovl18_800CB168 | asm, not matched: master state, spawns the 8 cycling icon children (twin of ovl23 CB0D0) | M |
| 0x800CB328 | func_ovl18_800CB328 | asm, not matched: child state, moves / draws the icon and its ring (o+0x34); likely the Musashi scale writes | L |
| 0x800CB5AC | func_ovl18_800CB5AC | effect handler: D_ovl18_800CB614[o+2](o) | H |

**Notes.** CAFE0 is the shape of ovl23 CAF90 (icon sprite from D_800D387C, `+0x27 = (i >> 1) + 0x19`, state 2,
`o+0x30 = (u16) o+0x30`), with a ring sprite instead of ovl23's puff / squash / sound 0x8E9. Data:
D_ovl18_800CB5E8 step table (H); D_ovl18_800CB5F4 / CB5F6 one s16 pair table of 8 (x, y) sprite-sheet coordinates
(H for 8 pairs); D_ovl18_800CB614 effect state table (H); D_ovl18_800CB640..CB840 image records (H, 8 of them
0x40 apart probably the 8 icons, M); D_ovl18_800CB860 ring block (two colours + 12-point circle, func_800233CC) (H).
Open: the icons' meaning (food?), the asm bodies, the actual effect of Satiate.

### ovl19: ability 13, Shrink (MAIN.CD entry 19, slot 2, code 4512 B, 22 functions, 3 still asm)

**What it does.** As written, a projectile attack; nothing scales Musashi. Step 1 (CAEC0): animation
D_ovl19_800CC01C, pay BP. Step 2 (CAF08): if interrupted, reset (CB170); at the animation end: sound 0x479,
animation D_ovl19_800CC0D8, a+0xBE = 0x10, step 3, free every 0x68 object of kind 4 or 0xF, then spawn four 0x68
kind-4 objects (upper slots, d = 0..3) and one kind-0xF object (lower slots) at (0,-0x18,-0xF). Step 3 (CB0C8): sets
model flag +0x2C bit 0x20 and model+0x80 = D_ovl19_800CC580, a 3-entry light set rebuilt each frame by CB1A0 from
the frame counter (directions rsin / rcos of (frame & 7) << 9, colours red, blue, white), so his model flashes;
counts a+0xBE down 16 frames, then resets the face, runs func_80165A78 (cleanup, step 0, model flag 0x20 off; the
ability number stays) and hands control back. Kind-4 shots: copy Musashi's model matrix, fill a 20-point history
(D_ovl19_800CC5B0 + d * 0xA0), o+0x64 = d << 10 (0 / 0x400 / 0x800 / 0xC00, a quarter turn apart), 0x40 frames;
each frame z -= 6 in that matrix's frame, the asm CB578 (trail update / draw), then CBC0C hits every actor that
func_8014C308 accepts (type 0x1E, mask 0x2000, +0xAA == 0) within 0x40 with hit type 0x1E (func_8014C3A4); at
timeout a puff (kind 3, e 0x80001C00) and free. The kind-0xF object is a ring sprite (kind 6, D_ovl19_800CC830,
radius 0x60, scale 0x3000) at Musashi, pulled toward the camera, colour flickering 0xFF0000 / 0xFFFF (every 4th
frame), whose scale falls 0x100 per frame (halved on odd frames) until its timer ends. Whether hit type 0x1E shrinks
the target is up to the target (func_80156370 / the actor code): not in this package. The engine has a Musashi
scale 0x555 path (func_8014B190, stats +0x22 bit 15) that this package never touches. The name is not supported
by the package's C.

**Entry and dispatch.** Entry CAE0C (D_ovl19_800CC160); template CAE34 -> D_ovl19_800CC104: [0] CAE78, [1] CAEC0,
[2] CAF08, [3] CB0C8 (4 used / room 8). Cleanup unknown (CB170 is called directly; the engine's hook could be it
too). 0x68 kind-4 handler CB2C8 (ability 0xD, else free) -> D_ovl19_800CC124: [0] CB324, [1] CB3FC, [2] CB4A8
(3 / 3). 0x68 kind-0xF handler CBD0C (ability 0xD, else free) -> D_ovl19_800CC130: [0] CBD68, [1] CBE38 (asm),
[2] CBEC0, maybe [3] CBF60 (room 12).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl19_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl19_800CAE34 | template | H |
| 0x800CAE78 | func_ovl19_800CAE78 | step 0: wait for func_80161104, start, ++ | H |
| 0x800CAEC0 | func_ovl19_800CAEC0 | step 1: start animation, pay BP | H |
| 0x800CAF08 | func_ovl19_800CAF08 | step 2: at anim end sound 0x479, fire anim, clear and spawn 4 shots + ring | H |
| 0x800CB0C8 | func_ovl19_800CB0C8 | step 3: flashing light set for 16 frames, then func_80165A78 and hand back | H |
| 0x800CB170 | func_ovl19_800CB170 | clear 0x44 bit 2, face 0x11 | H |
| 0x800CB1A0 | func_ovl19_800CB1A0 | rebuild the 3-light set D_ovl19_800CC580 from the frame counter | H |
| 0x800CB2C8 | func_ovl19_800CB2C8 | shot handler: ability 0xD ? table : free | H |
| 0x800CB324 | func_ovl19_800CB324 | shot init: model with Musashi's matrix, trail init, timer 0x40 | H |
| 0x800CB3FC | func_ovl19_800CB3FC | shot flight: z -= 6, trail (CB578), hit test; puff + next at timeout | H |
| 0x800CB4A8 | func_ovl19_800CB4A8 | free the 0x68 object | H |
| 0x800CB4C8 | func_ovl19_800CB4C8 | trail init: fill 20 history points, place, o+0x60 = 0, o+0x64 = d << 10 | H |
| 0x800CB578 | func_ovl19_800CB578 | asm, not matched: trail update and draw (docs: "the colour table / the slot index"; the GTE handwritten entry) | M |
| 0x800CB9F8 | func_ovl19_800CB9F8 | asm, not matched: a helper taking 5 args that builds a scale matrix (func_80017DC4); likely the trail-segment draw | L |
| 0x800CBC0C | func_ovl19_800CBC0C | hit test: actors within 0x40 get hit type 0x1E | H |
| 0x800CBD0C | func_ovl19_800CBD0C | ring handler: ability 0xD ? table : free | H |
| 0x800CBD68 | func_ovl19_800CBD68 | ring init: kind-6 sprite radius 0x60, scale 0x3000, at Musashi, toward camera | H |
| 0x800CBE38 | func_ovl19_800CBE38 | asm, not matched: ring state 1 (docs: arg0 and a clamped value); likely sets o+0x60 / the timer | L |
| 0x800CBEC0 | func_ovl19_800CBEC0 | ring: flicker, scale = o+0x60 - 0x100 per frame (half on odd frames), free at timer end | H |
| 0x800CBF60 | func_ovl19_800CBF60 | free the 0x68 object | H |
| 0x800CBF80 | func_ovl19_800CBF80 | ring colour word: 0xFFFF every 4th frame, else 0xFF0000 | H |

**Notes.** The 0x68 free wrappers CB4A8 / CBF60 = ovl15 CB474 = ovl1c CB3D0. The CB0C8 end sequence
(func_80165A78 + func_80159B3C) is the only explicit cleanup-hook call in this batch. Data: D_ovl19_800CC01C (0xBC) /
CC0D8 (0x2C) animation records (H); D_ovl19_800CC104 step table (H); CC124 / CC130 state tables (H);
D_ovl19_800CC160 (0x420) image record + data (H); D_ovl19_800CC580..CC5AE three lights of {s32 x, y, z; u8 r, g, b}
given to the model at +0x80 (M); D_ovl19_800CC5B0 (0x280) the four 20-point SVECTOR trail histories (H, size exact);
D_ovl19_800CC830 / CC834 the ring block's two colour words (H); 0x800CBFAC-0x800CC01B unreferenced from C (asm
data). Open: what hit 0x1E does; the asm trail; D_80126720 (an SVECTOR in the engine's collision code, only the asm
uses it).

### ovl1a: ability 12, Hop (MAIN.CD entry 20, slot 2, code 1000 B, 14 functions, 0 still asm)

**What it does.** Musashi bounces continuously. Step 1 (CAEB0) runs his current kind handler (func_801599A4),
switches him to kind 0x1F state 0 (CAF6C) and dispatches it, pays BP once and puffs at his feet (func_8016629C).
Kind 0x1F state 0 (CAFDC -> CAFFC) clears the a+0x118..0x12C words (func_801474EC) and jumps (CB17C): locks the
camera height at his y within 0x80 (func_8012A304), fall speed -0x18 (func_801477E8(a, 0xFFE80000)), jump
animation D_ovl1a_800CB1F4, sound 0x47A, effect kind 2 (func_8014C010(a, 2)), func_801483E8 (stores his position
in a+0xA0 when the floor 8 below matches, M), rumble D_80062BD0; then state 1. State 1 (CB034): ends the ability
and hands back when pad bit 0x20 is newly pressed (func_80148800) or D_80078EC8 == 0; loops the air animation
D_ovl1a_800CB234; forward speed -8 (z velocity -0x80000) while a direction is held (func_80148AFC), else 0;
func_80147A84, move, gravity +3 (func_80148038(a, 0x30000)), func_80147460; on landing (func_8016151C != 0) y += 8,
func_801615C4(a, 0) and jumps again (CB17C). The engine ends Hop when he is hit (func_80165718) and re-enters it
through func_80165770 -> **0x800CAF6C** (stage scripts call that), and func_80150F80 skips a 0x20 hit record while
ability 12 is active (M: possibly fall damage). The name fits: a repeated jump with its own fall speed and gravity.

**Entry and dispatch.** Entry CAE0C (D_ovl1a_800CB294); template CAE34 -> D_ovl1a_800CB260: [0] CAE78, [1] CAEB0,
[2] probably the empty CAF10 (3 / 3). Kind 0x1F handler CAFA0 -> D_ovl1a_800CB26C: [0] CAFDC, [1] CB034 (2 used /
room 10); CAFA0 is presumably what the engine's kind table D_8018FBA8[0x1F] points at. Called from outside:
CAF6C (engine func_80165770, H), CAFA0 (kind table, M), the cleanup (CB148 or CAF18).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl1a_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl1a_800CAE34 | template | H |
| 0x800CAE78 | func_ovl1a_800CAE78 | step 0: start, ++ | H |
| 0x800CAEB0 | func_ovl1a_800CAEB0 | step 1: enter kind 0x1F, pay once, puff | H |
| 0x800CAF10 | func_ovl1a_800CAF10 | empty (step 2 while he is kind 0x1F) | M |
| 0x800CAF18 | func_ovl1a_800CAF18 | face 0x11 (an exit hook, caller unknown) | L |
| 0x800CAF38 | func_ovl1a_800CAF38 | kind 0x1F + jump directly (CAFFC) | H |
| 0x800CAF6C | func_ovl1a_800CAF6C | kind 0x1F + dispatch; engine func_80165770 calls it | H |
| 0x800CAFA0 | func_ovl1a_800CAFA0 | kind 0x1F handler: D_ovl1a_800CB26C[a+2](a) | H |
| 0x800CAFDC | func_ovl1a_800CAFDC | kind 0x1F state 0: CAFFC | H |
| 0x800CAFFC | func_ovl1a_800CAFFC | clear 0x118.. words, jump, next state | H |
| 0x800CB034 | func_ovl1a_800CB034 | kind 0x1F state 1: air control, gravity, bounce on landing, end on button / timer | H |
| 0x800CB148 | func_ovl1a_800CB148 | unlock camera height, face 0x11 (cleanup hook) | M |
| 0x800CB17C | func_ovl1a_800CB17C | one hop: camera lock, fall speed -0x18, anim, sound 0x47A, effect 2, rumble | H |

**Notes.** CAF38 / CAF6C (enter kind, then work / dispatch) and CAFDC -> CAFFC are the same shapes as ovl1c
CAF44 / CAF78 and CAFE8 -> CB008. Data: D_ovl1a_800CB1F4 (0x40) jump animation (H), D_ovl1a_800CB234 (0x2C) air
loop animation (H), D_ovl1a_800CB260 step table (H), D_ovl1a_800CB26C kind-0x1F state table (H),
D_ovl1a_800CB294 (0x820) image record + data (H). Open: which of CAF18 / CB148 is D_80190364[12]; pad bit 0x20's
in-game button.

### ovl1b: ability 2, Mint (MAIN.CD entry 21, slot 2, code 1776 B, 11 functions, 2 still asm)

**What it does.** A timed state, the mirror of Sleepy. Step 1 (CAEB0) saves the stats; on the first use (cost
latch) plays sound 0x7A3, adds 0x10 to the D_80078EA4 meter (func_8014B944(a, 0x100000, 1), forced, cap 0xA0) and
pays BP; spawns effect kind 0x21. Step 2 (CAF38) pins D_80078EA4 = 0xA00000 (the maximum) every frame until
D_80078EC8 == 0, then restores the saved stats and ends the ability. The engine skips the post-hit state
(a+0x1AC = 0x3C0000, a+0x44 |= 0x100) while D_80078EC1 == 2 (func_80152714). The 0x21 master (d without 0x8000)
fills the ring block D_ovl1b_800CB558 (colours 0,0xA0,0xA0 / 0: cyan, radius 0x60) and becomes the emitter
(state 3, CB478), which spawns a child (kind 0x21, owner Musashi, d 0x8000) at once and every 0x20 frames. A child
makes a kind-5 ring sprite tied to its matrix o+0x38 (sprite+0x34), scale 0, timer 0x10, and runs the two asm
states (CAF94, CB0C8; their outside calls are the camera-facing pair func_800D20C0 / 800D23D0, func_80017DC4,
func_8012F14C, D_800AE620, D_800B99DA, RotMatrixZ / YXZ, ApplyMatrixSV, MulMatrix): an expanding mint ring
(M). Supports "Mint" as a refresh: the meter Sleepy empties is kept full.

**Entry and dispatch.** Entry CAE0C (D_ovl1b_800CB538); template CAE34 -> D_ovl1b_800CB4FC: [0] CAE78, [1] CAEB0,
[2] CAF38 (3 / 3). Cleanup probably the empty CAF8C. Effect handler CB33C (no ability test) -> D_ovl1b_800CB508:
[0] CB378, [1] CAF94, [2] CB0C8, [3] CB478 (4 used / room 12; [1] / [2] by elimination).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl1b_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl1b_800CAE34 | template | H |
| 0x800CAE78 | func_ovl1b_800CAE78 | step 0: start, ++ | H |
| 0x800CAEB0 | func_ovl1b_800CAEB0 | step 1: save stats, first use: sound 0x7A3, meter +0x10, pay; spawn 0x21 | H |
| 0x800CAF38 | func_ovl1b_800CAF38 | step 2: D_80078EA4 = 0xA00000 each frame; at end restore, end | H |
| 0x800CAF8C | func_ovl1b_800CAF8C | empty (cleanup hook) | M |
| 0x800CAF94 | func_ovl1b_800CAF94 | asm, not matched: child state 1, grow / orient the ring (AVec v, r, AMtx m; docs) | L |
| 0x800CB0C8 | func_ovl1b_800CB0C8 | asm, not matched: child state 2, ring with three uses of one angle vector (docs); fade and free? | L |
| 0x800CB33C | func_ovl1b_800CB33C | effect handler: D_ovl1b_800CB508[o+2](o) | H |
| 0x800CB378 | func_ovl1b_800CB378 | state 0: master sets ring block -> 3; child makes ring sprite -> 1 | H |
| 0x800CB478 | func_ovl1b_800CB478 | state 3: emitter, a child every 0x20 frames | H |

**Notes.** Same skeleton as ovl17 (save stats, pin D_80078EA4, restore) and ovl1c's 0x41 effect (master / child
split on d & 0x8000, kind-5 ring sprite tied to o+0x38, timer 0x10). Data: D_ovl1b_800CB4FC step table (H),
D_ovl1b_800CB508 effect state table (H), D_ovl1b_800CB538 image record (H), D_ovl1b_800CB558 ring block (H).

### ovl1c: ability 4, Antidote (MAIN.CD entry 22, slot 2, code 3716 B, 33 functions, 2 still asm)

**What it does.** Cures poison. Step 1 (CAEB0) pays BP (no latch). Step 2 (probably CAEE8) calls func_8014B2F8,
which clears D_80078E94 (bit 31 = poisoned; func_8014B350 deals 8 damage per tick while set) and its saved copy,
spawns effect kind 0x41 (d 0) on Musashi, plays sound 0x836 and hands control back (the ability stays set until
the 0x41 effect's own end). A second path runs Musashi as kind 0x22 (entered by CAF44 / CAF78; no caller in the
package): state 0 sets his animation 0 (func_80154150(a, 0)), state 1 waits until no 0x68 object of kind 0x1C and no
effect of kind 0x3E exists, then spawns 0x41 + sound 0x836, state 2 waits until no 0x41 effect remains, then ends
the ability and hands back; this path does not call the cure in C. Effect 0x41: the master makes a magenta ring
(D_ovl1c_800CBDB0, radius 0x40, kind-5 sprite on o+0x38) at Musashi's chest (-0x28, toward the camera, CBAA4),
runs two asm states (which per the docs spawn 0x41 children with d | 0x8000), then shrinks the ring (x -0x100,
y -0x120 per frame) for 0x10 frames and frees; a child appears at a random point within 0x20 around Musashi (height
minus 0..0x3F), takes the master's matrix and for 0x10 frames rises (y velocity -3 per frame), fades (0x30 -=
0xE) and draws a pink four-pointed sparkle (CBB38: two diamonds 7 x 3). The 0x68 kind-0x1C objects (spawned
outside the package) are rings around Musashi: delay d * 4 frames, then a kind-6 ring (D_ovl1c_800CBD68, radius
0x20, flickering pale green 0xCF,0xFF,0xCF / 0xBF,0xEF,0xBF), yaw e * 0x555 + d * 0xB (thirds of a turn), grow to
full scale, then spin (-0x71 per frame) and shrink (o+0x62 -= 0x40) while dropping effect 0x3E each frame; kind
0x3E is a small ring (D_ovl1c_800CBCCC, radius 0x20) that shrinks over 8 frames. The name fits the C plainly
(func_8014B2F8).

**Entry and dispatch.** Entry CAE0C (D_ovl1c_800CBD48); template CAE34 -> D_ovl1c_800CBC90: [0] CAE78, [1] CAEB0,
[2] CAEE8 (3 / 3; [2] by placement, M). Cleanup: one of the empty CAF3C / CB104. Kind 0x22 handler CAFAC ->
D_ovl1c_800CBC9C: [0] CAFE8, [1] CB03C, [2] CB0B8 (3 / 3). 0x68 kind-0x1C handler CB10C (ability != 4: free; else
place CB3F0, colour CB4AC, then state) -> D_ovl1c_800CBCA8: [0] CB184, [1] CB1BC, [2] CB2F4, [3] CB354, [4] CB3D0
(5 / 5). Effect 0x3E handler CB4F4 -> D_ovl1c_800CBD0C: [0] CB550, [1] CB5E4 (2 / 2). Effect 0x41 handler CB630 ->
D_ovl1c_800CBD14: [0] CB68C, [1] CB8A4, [2] CB944, [3] CB9C0, [4] CBA30 (5 used / room 13). Kinds for CB4F4 /
CB630 are M (0x3E is the only other kind spawned; CB68C's child path fits 0x41).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl1c_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl1c_800CAE34 | template | H |
| 0x800CAE78 | func_ovl1c_800CAE78 | step 0: start, ++ | H |
| 0x800CAEB0 | func_ovl1c_800CAEB0 | step 1: pay BP, ++ | H |
| 0x800CAEE8 | func_ovl1c_800CAEE8 | step 2: cure poison, spawn 0x41, sound 0x836, hand back | H |
| 0x800CAF3C | func_ovl1c_800CAF3C | empty (cleanup hook?) | L |
| 0x800CAF44 | func_ovl1c_800CAF44 | kind 0x22 + state-0 work (CB008) | H |
| 0x800CAF78 | func_ovl1c_800CAF78 | kind 0x22 + dispatch | H |
| 0x800CAFAC | func_ovl1c_800CAFAC | kind 0x22 handler: D_ovl1c_800CBC9C[a+2](a) | H |
| 0x800CAFE8 | func_ovl1c_800CAFE8 | kind 0x22 state 0: CB008 | H |
| 0x800CB008 | func_ovl1c_800CB008 | animation 0, next state | H |
| 0x800CB03C | func_ovl1c_800CB03C | state 1: when no 0x1C / 0x3E left, spawn 0x41 + sound 0x836 | H |
| 0x800CB0B8 | func_ovl1c_800CB0B8 | state 2: when no 0x41 left, end ability, hand back | H |
| 0x800CB104 | func_ovl1c_800CB104 | empty (cleanup hook?) | L |
| 0x800CB10C | func_ovl1c_800CB10C | 0x1C ring handler: free unless ability 4; place, colour, state | H |
| 0x800CB184 | func_ovl1c_800CB184 | ring state 0: delay d * 4 | H |
| 0x800CB1BC | func_ovl1c_800CB1BC | ring state 1: make the kind-6 ring, yaw e * 0x555 + d * 0xB | H |
| 0x800CB2F4 | func_ovl1c_800CB2F4 | ring state 2: grow to scale 0x1000 | H |
| 0x800CB354 | func_ovl1c_800CB354 | ring state 3: spin, shrink o+0x62, drop effect 0x3E | H |
| 0x800CB3D0 | func_ovl1c_800CB3D0 | free the 0x68 object | H |
| 0x800CB3F0 | func_ovl1c_800CB3F0 | place the ring: scale o+0x62, rotation, two offsets through the owner's model | H |
| 0x800CB4AC | func_ovl1c_800CB4AC | flicker the ring colour (frame & 1) | H |
| 0x800CB4F4 | func_ovl1c_800CB4F4 | effect 0x3E handler (ability 4) | M |
| 0x800CB550 | func_ovl1c_800CB550 | 0x3E init: ring sprite radius 0x20, timer 8 | H |
| 0x800CB5E4 | func_ovl1c_800CB5E4 | 0x3E: scale = timer << 9, free at 0 | H |
| 0x800CB630 | func_ovl1c_800CB630 | effect 0x41 handler (ability 4) | M |
| 0x800CB68C | func_ovl1c_800CB68C | 0x41 state 0: master ring at the chest; child at a random point -> state 4 | H |
| 0x800CB8A4 | func_ovl1c_800CB8A4 | asm, not matched: master state 1, spawns 0x41 children (d \| 0x8000, docs) | M |
| 0x800CB944 | func_ovl1c_800CB944 | asm, not matched: master state 2, also spawns 0x41 children (docs) | M |
| 0x800CB9C0 | func_ovl1c_800CB9C0 | master state 3: follow, shrink ring 0x10 frames, free | H |
| 0x800CBA30 | func_ovl1c_800CBA30 | child state 4: rise, fade, draw sparkle, free at timer end | H |
| 0x800CBAA4 | func_ovl1c_800CBAA4 | place at owner - 0x28 toward camera, billboard matrix | H |
| 0x800CBB38 | func_ovl1c_800CBB38 | draw the sparkle: two gouraud diamonds, scale o+0x2C, brightness o+0x30 | H |

**Notes.** CAF44 / CAF78 / CAFAC / CAFE8 / CB008 mirror ovl1a's kind-0x1F entry set. CB03C / CB0B8 test object
existence with func_8014C088 / func_8014C050. CB68C's master / child split and the kind-5 ring tied to o+0x38 =
ovl1b CB378. CB3D0 = ovl15 CB474. Data: D_ovl1c_800CBC90 step table (H); CBC9C kind-0x22 state table (H); CBCA8
0x1C state table (H); CBCBC / CBCC4 two SVECTOR offsets (H); CBCCC ring block of the 0x3E effect (H); CBD0C /
CBD14 effect state tables (H); CBD48 image record (H); CBD68 (bytes 68..6F written) and CBDB0 (bytes B0..B6) ring
blocks (H). Open: who spawns the 0x68 kind-0x1C rings (nothing in the package can: no 0x68 spawn among its outside
symbols) and who enters kind 0x22 (the two Antidote paths: which one the game uses).

### ovl1d: ability 6, (cut heal) (MAIN.CD entry 23, slot 2, code 308 B, 6 functions, 0 still asm)

**What it does.** Step 0 (CAE78) waits for func_80161104 and starts; step 1 (CAEC0) pays BP (no latch); step 2
(CAEF8) adds 10 HP with force (func_8014BB24(a, 0xA, 1): no 500 / 999 cap on the forced path) and hands control
back. No animation, sound, effect or end call (the ability number is not cleared here). A heal, as the label says.

**Entry and dispatch.** Entry CAE0C (D_ovl1d_800CAF6C); template CAE34 -> D_ovl1d_800CAF40: [0] CAE78, [1] CAEC0,
[2] CAEF8 (3 used / room 11). Cleanup probably the empty CAF38.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl1d_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl1d_800CAE34 | template | H |
| 0x800CAE78 | func_ovl1d_800CAE78 | step 0: wait for func_80161104, start, ++ | H |
| 0x800CAEC0 | func_ovl1d_800CAEC0 | step 1: pay BP, ++ | H |
| 0x800CAEF8 | func_ovl1d_800CAEF8 | step 2: +10 HP (forced), hand back | H |
| 0x800CAF38 | func_ovl1d_800CAF38 | empty (cleanup hook) | M |

**Notes.** The button-template shape with no animation. Data: D_ovl1d_800CAF40 step table (H), D_ovl1d_800CAF6C
image record (H). Open: why the forced (uncapped) heal.

### ovl1e: ability 18, (cut timed) (MAIN.CD entry 24, slot 2, code 252 B, 6 functions, 0 still asm)

**What it does.** Only pays BP once (step 1, CAEB0). Step 2 is empty, so the ability does nothing until the engine
ends it (its duration D_80078EC8 counts down in func_80165694, but no step here tests it). A stub.

**Entry and dispatch.** Entry CAE0C (D_ovl1e_800CAF34); template CAE34 -> D_ovl1e_800CAF08: [0] CAE78, [1] CAEB0,
[2] CAEF8 (3 used / room 11). Cleanup probably CAF00.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl1e_800CAE0C | entry: queue image record | H |
| 0x800CAE34 | func_ovl1e_800CAE34 | template | H |
| 0x800CAE78 | func_ovl1e_800CAE78 | step 0: start, ++ | H |
| 0x800CAEB0 | func_ovl1e_800CAEB0 | step 1: pay once, ++ | H |
| 0x800CAEF8 | func_ovl1e_800CAEF8 | empty (step 2) | M |
| 0x800CAF00 | func_ovl1e_800CAF00 | empty (cleanup hook) | M |

**Notes.** The timed shape (ovl14 / ovl16 / ovl18) with the effect and the duration test removed. Data:
D_ovl1e_800CAF08 step table (H), D_ovl1e_800CAF34 image record (H). Open: whether the engine ends a timed ability by
itself when D_80078EC8 runs out (func_80165694 only counts it).

### ovl1f: ability 15, Bowl (MAIN.CD entry 25, slot 2, code 3696 B, 30 functions, 1 still asm)

**What it does.** Musashi throws a ball that rolls away from him, with a power gauge. Start (CAED8): animation
record D_ovl1f_800CBD2C (func_80154274), a gauge object is spawned (0x68 kind 0x27, CBB70), power a+0xBE = 0 and
phase a+0xBF = 0, BP paid without the once-latch, timer 0x12. Step 2 waits 18 frames. Step 3 (CAF7C) is the charge:
power +4 a frame up to 0x50 (20 frames), then -4 a frame back to 0; the release happens when the ability button is
pressed (func_80148800 & 0x20) or the power returns to 0. Release (CB028): a+0xB8 = a+0xBA (animation flags),
the gauge is told to close (CBBA0), next step. Step 4 (CB068): on the animation marker (+0xB8 & 0x4000) it spawns a
0x68 object kind 0xA with d = the power byte and plays sound 0x649; on the end flag (0x8000) next step. Step 5
(CB0E4) waits until no kind-0xA object is left in D_8011F9D0, then restarts the animation flags (+0xB8 = +0xBA).
Step 6 (CB138) waits for the animation end and hands Musashi back (func_801599A4 + func_80159B3C). The ball
(kind 0xA): a model slot initialised with func_8001CA1C(m, &D_ovl1f_800CBE98) (model kind 3), placed at Musashi's
model point (func_80149374), model rot.x / rot.z from Musashi +0x100 / +0x104 and rot.y from his model's, three
words +0x24.. = (0, 0x80000, -0x100000) (forward speed, M), timer 0x60, then the rolling state (CB300, asm). Its
handler deletes it when the ability is no longer 15, when its y passes 0x400, and stops sound 0x649
(func_80147364(4, 0x649)) when it leaves the screen (CB7B0). Deletion (CB6CC) spawns a kind-3 puff
(func_8016634C) and stops the sound. The engine refuses to start Bowl while a kind-0xA object exists
(func_801497A8, docs section 2). The gauge (kind 0x27) is a HUD sprite pair: a kind-0xA sprite (func_8001CEC0,
D_ovl1f_800CBECC) whose x follows the power (x = D_80126C16 - 40; D_80126C16 is Musashi + 0xBE) and a frame
sprite (kind 1, D_ovl1f_800CBF20) that opens with x scale +0x2AA a frame for 6 frames and closes with y scale
-0x400 a frame for 4 frames. The name fits: Musashi bowls a ball whose power is set by timing; Musashi himself
does not roll (he holds his pose until the ball is gone). How the ball moves and hits is in the asm CB300:
its outside symbols (hit probe func_8016345C / func_801633A8 / func_80163328, wall and floor checks
func_8016380C / func_80163950, velocity from angles func_80163194, rotate-matrix calls, two func_80146A6C spawns
per docs/overlays.md) say it rolls, collides and hits targets (M).

**Entry and dispatch.** Image entry func_ovl1f_800CAE14 (three records; the package has two data words at 0x4/0x8
before the code, so it starts 8 bytes later than usual). Template func_ovl1f_800CAE5C over D_ovl1f_800CBE7C (0x1C
bytes up to the next symbol = 7 entries; by the step code: CAEA0, CAED8, CAF3C, CAF7C, CB068, CB0E4, CB138, M).
Ball handler CB1A0 (kind 0xA; states D_ovl1f_800CBEBC, 4 entries), gauge handler CB848 (kind 0x27; states
D_ovl1f_800CBF2C, 6 used). Called from outside: the template, the two object handlers (engine object tables),
and CB180 (no caller in the package; it kills the gauges: the stop hook, M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE14 | func_ovl1f_800CAE14 | image entry: queue D_800CC6A4, D_800CC6E4, D_800CBF64 | H |
| 0x800CAE5C | func_ovl1f_800CAE5C | button template over D_800CBE7C | H |
| 0x800CAEA0 | func_ovl1f_800CAEA0 | step 0: run the start (CAED8), skip to step 2 | H |
| 0x800CAED8 | func_ovl1f_800CAED8 | step 1 start: animation, spawn gauge, power 0, pay BP, timer 0x12 | H |
| 0x800CAF3C | func_ovl1f_800CAF3C | step 2: wait for the timer | H |
| 0x800CAF7C | func_ovl1f_800CAF7C | step 3: power +4 to 0x50 then -4 to 0; release on button 0x20 or at 0 | H |
| 0x800CB028 | func_ovl1f_800CB028 | release: +0xB8 = +0xBA, close the gauge, next step | H |
| 0x800CB068 | func_ovl1f_800CB068 | step 4: at anim marker 0x4000 spawn ball (kind 0xA, d = power), sound 0x649; next at 0x8000 | H |
| 0x800CB0E4 | func_ovl1f_800CB0E4 | step 5: wait until no kind-0xA object exists, then +0xB8 = +0xBA | H |
| 0x800CB138 | func_ovl1f_800CB138 | step 6: at anim end hand Musashi back | H |
| 0x800CB180 | func_ovl1f_800CB180 | kill all gauges (CBBF8); no package caller: the stop hook | M |
| 0x800CB1A0 | func_ovl1f_800CB1A0 | ball handler: delete unless ability 15; run state; stop sound off-screen; delete below y 0x400 | H |
| 0x800CB23C | func_ovl1f_800CB23C | ball state 0: model kind 3, at Musashi's model point, his facing, speed words, timer 0x60 | H |
| 0x800CB300 | func_ovl1f_800CB300 | ball state 1: rolling, collision and hits (asm, not matched) | M |
| 0x800CB6CC | func_ovl1f_800CB6CC | delete ball: kind-3 puff (func_8016634C), stop sound 0x649, free | H |
| 0x800CB708 | func_ovl1f_800CB708 | ball state: y += 2 a frame until the timer ends, then free | H |
| 0x800CB758 | func_ovl1f_800CB758 | clear the ball's last-sound latch +0x60 | H |
| 0x800CB760 | func_ovl1f_800CB760 | play sound id only if it differs from the latch +0x60 | H |
| 0x800CB7B0 | func_ovl1f_800CB7B0 | 1 if the object projects off screen (GTE error, |x| > 200 or |y| > 160) | H |
| 0x800CB848 | func_ovl1f_800CB848 | gauge handler: kill all gauges unless ability 15, else run state | H |
| 0x800CB8A4 | func_ovl1f_800CB8A4 | gauge state 0: marker sprite (kind 0xA, hidden) and frame sprite (kind 1), timer 6 | H |
| 0x800CB968 | func_ovl1f_800CB968 | gauge state 1: frame x scale +0x2AA a frame; then sprite kind 0, show marker | H |
| 0x800CBA14 | func_ovl1f_800CBA14 | gauge state 2: marker x = Musashi power - 40 | H |
| 0x800CBA2C | func_ovl1f_800CBA2C | gauge state 3: timer 8, next | H |
| 0x800CBA60 | func_ovl1f_800CBA60 | gauge state 4: after 8 frames re-init frame sprite, hide marker, timer 4 | H |
| 0x800CBAF4 | func_ovl1f_800CBAF4 | gauge state 5: frame y scale -0x400 a frame, then kill all gauges | H |
| 0x800CBB50 | func_ovl1f_800CBB50 | frame-sprite setup: page byte 0x1A, +0x2C = 1, position (0, -0x40) | H |
| 0x800CBB70 | func_ovl1f_800CBB70 | spawn the gauge (0x68 kind 0x27, lower pool) | H |
| 0x800CBBA0 | func_ovl1f_800CBBA0 | close the gauge: state 3 if it reached state 2, else kill it | H |
| 0x800CBBF8 | func_ovl1f_800CBBF8 | kill every kind-0x27 object (zero its +0x10 sprite slot, free) | H |

**Notes.**
* Clones: CB0E4 and CBBF8 are pointer loops over D_8011F9D0 (the kill-all-of-kind shape of ovl25 CB3B4 / ovl26
  CAFD0); CB1A0 and CB848 are the effect-handler shape (`D_80078EC1 != 0xF` -> delete); CB6CC is the "puff and
  free" shape of ovl21 CB7FC (with a sound stop added).
* Data: D_800CBD2C animation record (func_80154274) H; D_800CBE7C step table (7) H; D_800CBE98 the ball's model
  data for func_8001CA1C (0x24 bytes before the next symbol, so a descriptor rather than the mesh) M;
  D_800CBEBC ball state table (4 entries: CB23C, CB300, CB708 and one more, maybe CB6CC) M; D_800CBECC the marker's
  kind-0xA sprite data H; D_800CBF20 the frame's sprite record (0xC bytes) H; D_800CBF2C gauge state table
  (CB8A4, CB968, CBA14, CBA2C, CBA60, CBAF4; 0x38 bytes, the last 8 words unknown) H for the 6; D_800CBF64,
  D_800CC6A4, D_800CC6E4 image records (D_800CBF64 0x740 bytes: a texture) H; the two words at 0x800CAE0C /
  0x800CAE10 (yaml ovl1f_rodata) have no C reference: probably constants of the asm CB300, unknown.
* Open: which state follows CB300 (CB708's y += 2 looks like sinking or falling into a hole); what +0xBA holds
  (the animation flags to restart with); what the ball's d (power) changes in CB300.

### ovl20: ability 22, Firefly (MAIN.CD entry 26, slot 2, code 3332 B, 24 functions, 2 still asm)

**What it does.** A timed ability (D_80078EC8) that makes a glowing object appear at Musashi and points a stage
actor of kind 0x15C at him. Start (CAEC0): pay once, sound 0x7B8. Step 2 (CAF10): spawn a 0x68 object kind 0xB
with d = 0 (appear), Musashi +0xBE = 0. Step 3 (CAF68), each frame: if no kind-0xB object exists or +0xBE is set,
CB098 finds the first actor of kind 0x15C (func_8014C168 over D_801202A0) and sets its +0xCC to the active kind-1
0x68 object if there is one (state != 0), else to Musashi; when D_80078EC8 reaches 0 it spawns a second kind 0xB
with d = 1 (vanish), sound 0x7DE, +0xBE = 0, next. Step 4 (CB010): once +0xBE is set again it clears the actor's
+0xCC (CB108); when no kind-0xB object is left, it ends the ability (func_80165A20). The kind-0xB object keeps
itself at a point of Musashi's model plus a camera-relative offset (func_80146EC0 with D_800CBB40 / D_800CBB38).
State 0: with d = 0 it spawns three kind-0xC rays at a random base angle and +0x555 / +0xAAA (120 degrees apart),
timer 8. State 1 (asm CB278) builds its sprite (its outside symbols: func_80146578, func_8001CD9C ring sprite,
func_800233CC ring, M). State 2 (CB3C0): scale +0x18/+0x1A grows with an accelerating step (+0x60 += 0x40) to
0x1000, spinning (+0x1E += 0x100) when d != 0; at full size it sets Musashi +0xBE = 1 (the signal steps 3 / 4
read). State 3 asm (CB470). The rays (kind 0xC) are screen-space gouraud textured triangles (func_800174DC =
func_8001751C, SetPolyGT3) drawn around the parent's projected position (CB8C4, func_8012EFB8), white tip
(+0x58) and blue base (+0x5C = 00 00 FF), UVs scrolled with the frame counter: the tip runs in from -0x100 to -8
(+0x18 a frame) while turning 0xB a frame, then the base widens by 8 a frame, both colours fade by 0xA a frame
(func_80012F74) while turning 0x2D a frame, and the ray frees itself at black. "Firefly" (a light) fits a glow
that appears and a stage actor that is told to follow Musashi; that actor 0x15C being a darkness / light
controller is not visible here (M-L).

**Entry and dispatch.** Image entry CAE0C (two records). Template CAE44 over D_800CBB10 (5 entries: CAE88,
CAEC0, CAF10, CAF68, CB010; 0x14 bytes, H). Kind-0xB handler CB134 (D_80078EC1 == 0x16, states D_800CBB24, 5:
CB190, CB278, CB3C0, CB470, CB5D4). Kind-0xC handler CB62C (states D_800CBB48: CB688, CB6E8, CB77C, CB8A4).
From outside: template, CB134, CB62C, and CB078 (no package caller; clears the actor's target: the stop hook, M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl20_800CAE0C | image entry: queue D_800CBBB8, D_800CBB78 | H |
| 0x800CAE44 | func_ovl20_800CAE44 | button template over D_800CBB10 | H |
| 0x800CAE88 | func_ovl20_800CAE88 | step 0: run the start, skip to step 2 | H |
| 0x800CAEC0 | func_ovl20_800CAEC0 | step 1 start: pay once, sound 0x7B8 | H |
| 0x800CAF10 | func_ovl20_800CAF10 | step 2: spawn glow (kind 0xB, d 0), +0xBE = 0 | H |
| 0x800CAF68 | func_ovl20_800CAF68 | step 3: keep the 0x15C actor on Musashi; at duration 0 spawn vanish glow (d 1), sound 0x7DE | H |
| 0x800CB010 | func_ovl20_800CB010 | step 4: clear the target once +0xBE; end the ability when no glow is left | H |
| 0x800CB078 | func_ovl20_800CB078 | clear the 0x15C actor's target (CB108); no package caller: stop hook | M |
| 0x800CB098 | func_ovl20_800CB098 | 0x15C actor +0xCC = active kind-1 object, else Musashi | H |
| 0x800CB108 | func_ovl20_800CB108 | 0x15C actor +0xCC = 0; returns the actor | H |
| 0x800CB134 | func_ovl20_800CB134 | glow handler (ability 0x16), else free | H |
| 0x800CB190 | func_ovl20_800CB190 | glow state 0: follow; d 0: three rays 120 deg apart, timer 8 (else 0) | H |
| 0x800CB278 | func_ovl20_800CB278 | glow state 1: wait the timer, make the sprite (asm, not matched) | L |
| 0x800CB3C0 | func_ovl20_800CB3C0 | glow state 2: follow, grow to 0x1000 (spin if d), then Musashi +0xBE = 1 | H |
| 0x800CB470 | func_ovl20_800CB470 | glow state 3 (asm, not matched): the lit / fading phase, unknown | L |
| 0x800CB5D4 | func_ovl20_800CB5D4 | free the object | H |
| 0x800CB5F4 | func_ovl20_800CB5F4 | place at Musashi's model point + camera-relative offset (func_80146EC0) | H |
| 0x800CB62C | func_ovl20_800CB62C | ray handler (ability 0x16), else free | H |
| 0x800CB688 | func_ovl20_800CB688 | ray state 0: tip/base geometry, white/blue colours, angle = d | H |
| 0x800CB6E8 | func_ovl20_800CB6E8 | ray state 1: extend the tip to -8, turn 0xB, draw | H |
| 0x800CB77C | func_ovl20_800CB77C | ray state 2: widen, fade colours, turn 0x2D, draw; next at black | H |
| 0x800CB8A4 | func_ovl20_800CB8A4 | free the object | H |
| 0x800CB8C4 | func_ovl20_800CB8C4 | project the owner's position to the screen (func_8012EFB8) | H |
| 0x800CB900 | func_ovl20_800CB900 | draw one screen-space GT3 rotated about a screen point, scrolled UVs | H |

**Notes.**
* Clones: CB134 / CB62C are the effect-handler shape (on 0x68 objects, freeing with func_80162CCC); CB5D4 / CB8A4
  are the free wrapper `f(o) { func_80162CCC(o); }` (also ovl21 CC004, ovl22 CB600, ovl25 CBEB8, ovl26 CB24C).
* Data: D_800CBB10 step table (5) H; D_800CBB24 glow states (5) H; D_800CBB38 SVECTOR, camera-relative offset
  (func_80146F58) H; D_800CBB40 SVECTOR, model-point offset (func_80015954 + func_80149374) H; D_800CBB48 ray
  states (4 used of 12 words) H; D_800CBB78, D_800CBBB8 image records H.
* Open: actor kind 0x15C (what its +0xCC drives); the kind-1 0x68 object (spawned by Musashi's state
  func_8015F89C at an animation marker, engine 13664) that the actor prefers when active; CB278 / CB470.

### ovl21: ability 24, Sublime (MAIN.CD entry 27, slot 2, code 4904 B, 29 functions, 4 still asm)

**What it does.** Musashi lies down and a spirit object rises from him and is steered around until the button
or the duration ends it. Start (CAEC0): func_801599A4 (the current kind's D_8018FBA8 hook), then Musashi becomes
actor kind 0x20 (CAF5C: func_80147078(a, 0x20)) whose states are in this package (D_800CC140); pay once. Kind 0x20
state 0 (CAFEC): ClearDisplayFlag20 / ClearDisplayFlag10 (display bits off), animation 0x26, face 0x1E, model
rot.x = 0xFE9, +0x238 = 0. State 1 (CB06C): +0x238 += 0x1C000 a frame and rot.x -= its high half until it is
below 0xC00 (clamped: about 90 degrees, he tips over), then +0xB8 = 1. State 2 (CB108): when +0xB8 == 0x8000,
animation 0x27, face 0x1F, spawns 0x68 kind 0xD at (0, -0x40, 0), sound 0x6E2. State 3 (CB1A0): each frame
+0x15A = 1; on button 0x20 or D_80078EC8 == 0: camera ease over 16 frames (func_8012A62C(0x10), engine.c 1140),
end the ability, hand Musashi back. In all four states a func_80161208 hand-over ends the ability at once. CB234
(model rot.x = 0, UpdateFlag10Part21, face 0x11) undoes the pose: the stop hook (M). The spirit (kind 0xD): an empty
model (func_8001C2C4, kind 0) with Musashi's Y facing, scale (0, 0, 0x1000), at his model point; two children
(0x68 kind 0x28, d 0 / 1, upper pool); Musashi's +0x154 SVECTOR copied to D_800CC298; quad table D_800CC150 at
+0x58. State 1 (CB3E0): rises 1 a frame, x / y scale +0x100 to 0x1CCC, for 0x20 frames, then zeroes +0x24.. and
goes on. State 2 (CB4A4, asm) moves it (outside symbols func_801488A8 / func_80148D44 stick direction,
func_80162FC0 / FF4 movement, M), and CBCB4 clamps its position to a box on maps 0x3035, 0x3037, 0x3038 and 0x3039
(X/Z boxes, X/Y on 0x3038). It draws itself from projected quads (CB82C asm, CBA44, CBBF8 -> func_800178EC GT4).
"Sublime" as an out-of-body spirit: the lying-down pose, a separate stick-steered object and map-specific bounds
support it (M); docs section 2 also lists 24 among the abilities Musashi's state code ends.

**Entry and dispatch.** Image entry CAE0C (two records). Template CAE44 over D_800CC134 (3 entries: CAE88, CAEC0,
and CAF18 by elimination, M). Musashi's kind-0x20 handler: CAF90 (D_800CC140[a+2], 4 states CAFEC, CB06C,
CB108, CB1A0); CAF28 (set kind 0x20, run state 0), CAFCC (run state 0) and the empty CAF20 have no package caller:
entries of engine per-kind tables (M). Spirit handler CB270 (kind 0xD, ability 0x18, states D_800CC180); child
handler CBECC (kind 0x28, states D_800CC1C4). Stop hook CB234 (M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl21_800CAE0C | image entry: queue D_800CC22C, D_800CC1EC | H |
| 0x800CAE44 | func_ovl21_800CAE44 | button template over D_800CC134 | H |
| 0x800CAE88 | func_ovl21_800CAE88 | step 0: run the start, skip to step 2 | H |
| 0x800CAEC0 | func_ovl21_800CAEC0 | step 1 start: kind hook, Musashi -> kind 0x20, pay once | H |
| 0x800CAF18 | func_ovl21_800CAF18 | empty; step 2 (Musashi is no longer kind 0x17) | M |
| 0x800CAF20 | func_ovl21_800CAF20 | empty; an engine-table hook, unknown which | L |
| 0x800CAF28 | func_ovl21_800CAF28 | Musashi kind 0x20, run its state 0 | H |
| 0x800CAF5C | func_ovl21_800CAF5C | Musashi kind 0x20, run its state handler | H |
| 0x800CAF90 | func_ovl21_800CAF90 | kind-0x20 handler: D_800CC140[a+2](a) | H |
| 0x800CAFCC | func_ovl21_800CAFCC | run kind-0x20 state 0 | H |
| 0x800CAFEC | func_ovl21_800CAFEC | kind 0x20 state 0: flags off, anim 0x26, face 0x1E, rot.x 0xFE9 | H |
| 0x800CB06C | func_ovl21_800CB06C | state 1: tip rot.x down to 0xC00 with acceleration, +0xB8 = 1 | H |
| 0x800CB108 | func_ovl21_800CB108 | state 2: at anim end anim 0x27, face 0x1F, spawn spirit (kind 0xD), sound 0x6E2 | H |
| 0x800CB1A0 | func_ovl21_800CB1A0 | state 3: until button 0x20 / duration 0, then camera ease, end, hand back | H |
| 0x800CB234 | func_ovl21_800CB234 | stand up: rot.x 0, UpdateFlag10Part21, face 0x11 (stop hook) | M |
| 0x800CB270 | func_ovl21_800CB270 | spirit handler (ability 0x18), else free with puff | H |
| 0x800CB2CC | func_ovl21_800CB2CC | spirit state 0: empty model, Musashi's facing, two kind-0x28 children, save +0x154 | H |
| 0x800CB3E0 | func_ovl21_800CB3E0 | spirit state 1: rise, grow to 0x1CCC for 0x20 frames, stop | H |
| 0x800CB4A4 | func_ovl21_800CB4A4 | spirit state 2: steering with decay and clamps (asm, not matched) | M |
| 0x800CB7FC | func_ovl21_800CB7FC | free with a kind-3 puff (func_801662F4) | H |
| 0x800CB82C | func_ovl21_800CB82C | draw the spirit from the quad table at +0x58 (asm, not matched) | M |
| 0x800CBA44 | func_ovl21_800CBA44 | project a 4-corner quad (RTPT + RTPS) into a stack prim; 1 on GTE error | H |
| 0x800CBBF8 | func_ovl21_800CBBF8 | shift a projected quad's 4 xy by (dx, dy), draw it (GT4) | H |
| 0x800CBCB4 | func_ovl21_800CBCB4 | clamp position to a per-map box (maps 0x3035/37/38/39) | H |
| 0x800CBECC | func_ovl21_800CBECC | child handler (kind 0x28, ability 0x18), else free | H |
| 0x800CBF28 | func_ovl21_800CBF28 | child state 0: set up, then CC024 (asm, not matched) | L |
| 0x800CBFE4 | func_ovl21_800CBFE4 | child state 1: CC024 | M |
| 0x800CC004 | func_ovl21_800CC004 | free the object | H |
| 0x800CC024 | func_ovl21_800CC024 | child per-frame: rsin-driven motion `(t & 0x1F) << 7` (asm, not matched) | L |

**Notes.**
* Clones: CB270 / CBECC effect-handler shape; CC004 free wrapper; CB7FC "puff and free" (ovl1f CB6CC).
* Data: D_800CC134 step table (3) H; D_800CC140 kind-0x20 states (4) H; D_800CC150 quad offset table read by
  CBA44 (8 s16 per quad, 0x30 bytes = 3 quads) M; D_800CC180 spirit states (CB2CC, CB3E0, CB4A4, then unknown;
  0x44 bytes) M; D_800CC1C4 child states (CBF28, CBFE4, ...) M; D_800CC1EC, D_800CC22C image records H;
  D_800CC250 used by CBF28 (docs/overlays.md) unknown; D_800CC298 saved copy of Musashi +0x154 H (what +0x154 is:
  unknown).
* CBA44 also writes b+0..+0xC plus *z into o+0x20..+0x2C (the GT4 stack prim's next words, likely its UVs with a
  scroll) L.
* Open: Musashi +0x15A = 1 every frame of state 3; what the two kind-0x28 children are; which engine tables hold
  CAF20 / CAF28 / CAFCC.

### ovl22: ability 21, B.O. (MAIN.CD entry 28, slot 2, code 4232 B, 22 functions, 0 still asm)

**What it does.** A timed ability: a stink cloud on Musashi and flies circling around. Start (CAEC0): pay once,
spawn effect kind 0x35 (func_80146994, d 0), sound 0x838, four 0x68 kind-0xE flies (upper pool) with d =
+-(16..31) degrees per frame in 4096 units and e = 0 (two) or 1 (two). Step 2 (CB0D8, each frame): every 32
ticks of D_80078EC8 two more e = 0 flies, every 64 one e = 1 fly with a random sign; at D_80078EC8 == 0 the
ability ends (func_80165A20). CB32C stops sound 0x838 (the stop hook, M). No animation or hand-back: Musashi keeps
control (continuous, M). Fly (kind 0xE): e = 0 is a world sprite (kind 3, D_800CBEA0) placed at Musashi's model
point, orbiting in the XZ plane; e = 1 a kind-1 sprite (D_800CBEAC, +0x2C = 1) placed with func_8014964C,
orbiting in XY. The orbit (CB6D4) is an ellipse of radii +0x60 / +0x62 about the spawn point (+0x10..+0x14, set
once), the position eases toward it (func_80012F74 step 0xA), the sprite faces its motion (ratan2 against the old
position +0x44), the angle advances by d; a full turn returns 1. States: 1 flies turns with a small radius (0x80 +
rand), wing frames 0x100 / 0x120 for e = 1, and e = 1 flies may hover (state 3, 0x20 frames, frames 0x140 /
0x160); after 5 turns a wide turn (0x200) and state 2 frees it after one more turn. The cloud (effect 0x35): the
d = 0 emitter grows 8 frames (+0x28 += 0x120) and then (state 4) follows Musashi's model matrix and spawns a puff
(d = 0x8000) every 25 frames. A puff grows 10 frames, takes half of Musashi's x / z velocity (+0x12 / +0x1A),
rises 3 a frame while its size pulses between random bounds (0x500.. / 0x800..) for 0x21 frames, then shrinks by
0x100 a frame and is freed. Each is drawn by CB8A0 as a camera-facing fan of 4 quads around a centre 0x2C above
the matrix origin, yellow centre ((size >> 6) + 0x60 red and green, no blue), black rim. The name fits: a
yellow stink cloud with flies buzzing around Musashi (H for the shapes, M for "flies").

**Entry and dispatch.** Image entry CAE0C (two records). Template CAE44 over D_800CBE94 (3: CAE88, CAEC0,
CB0D8) H. Fly handler CB350 (kind 0xE, ability 0x15; states D_800CBEB8, 5: CB3AC, CB484, CB564, CB59C, CB600).
Cloud handler CBA74 (effect kind 0x35; states D_800CBEE0: CBAD0, CBBA0, CBC7C, CBD78, CBDD0). Stop hook CB32C (no
package caller, M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl22_800CAE0C | image entry: queue D_800CBF54, D_800CBF14 | H |
| 0x800CAE44 | func_ovl22_800CAE44 | button template over D_800CBE94 | H |
| 0x800CAE88 | func_ovl22_800CAE88 | step 0: run the start, skip to step 2 | H |
| 0x800CAEC0 | func_ovl22_800CAEC0 | step 1 start: pay once, cloud emitter, sound 0x838, four flies | H |
| 0x800CB0D8 | func_ovl22_800CB0D8 | step 2: more flies every 32 / 64 ticks; end at duration 0 | H |
| 0x800CB32C | func_ovl22_800CB32C | stop sound 0x838 (stop hook) | M |
| 0x800CB350 | func_ovl22_800CB350 | fly handler (ability 0x15), else free | H |
| 0x800CB3AC | func_ovl22_800CB3AC | fly state 0: sprite by e (world kind 3 / kind 1), orbit setup | H |
| 0x800CB484 | func_ovl22_800CB484 | fly state 1: orbit; turn count, hover chance (e 1), wide turn after 5 | H |
| 0x800CB564 | func_ovl22_800CB564 | fly state 2: last turn, then free | H |
| 0x800CB59C | func_ovl22_800CB59C | fly state 3: hover frames for 0x20 frames, back to state 1 | H |
| 0x800CB600 | func_ovl22_800CB600 | free the object (fly state 4) | H |
| 0x800CB620 | func_ovl22_800CB620 | orbit centre = position, random phase, radius 0x200 | H |
| 0x800CB684 | func_ovl22_800CB684 | set the two radii to n + rand(0..0x7F) | H |
| 0x800CB6D4 | func_ovl22_800CB6D4 | orbit step: ease to the ellipse point, face motion; 1 per full turn | H |
| 0x800CB8A0 | func_ovl22_800CB8A0 | draw the cloud: camera-facing fan of 4 G4 quads (D_800CBECC) | H |
| 0x800CBA74 | func_ovl22_800CBA74 | cloud handler (ability 0x15), else free (func_80146C3C) | H |
| 0x800CBAD0 | func_ovl22_800CBAD0 | cloud state 0: emitter grows 8 frames then state 4; puffs go to state 1 | H |
| 0x800CBBA0 | func_ovl22_800CBBA0 | puff state 1: grow 10 frames, half Musashi's velocity, life 0x20 | H |
| 0x800CBC7C | func_ovl22_800CBC7C | puff state 2: pulse size, drift, rise 3, count life | H |
| 0x800CBD78 | func_ovl22_800CBD78 | puff state 3: shrink 0x100 a frame, rise, free at 0 | H |
| 0x800CBDD0 | func_ovl22_800CBDD0 | emitter state 4: follow Musashi's matrix, a puff every 25 frames | H |

**Notes.**
* Clones: CB8A0 is the stack-quad draw of func_ovl16_800CAF84 / func_ovl14_800CAF90 with its own constants (docs);
  CB350 / CBA74 effect-handler shape; CB600 free wrapper; CB32C the stop-sound hook (ovl24 CAF84).
* Data: D_800CBE94 step table (3) H; D_800CBEA0 / D_800CBEAC fly sprite records (0xC each) H; D_800CBEB8 fly
  states (5) H; D_800CBECC s8 vertex table: 9 (x, y) points read with a stride of 4 bytes so each quad shares its
  last point with the next (18 of its 20 bytes used) H; D_800CBEE0 cloud states (5 of 13 words) H;
  D_800CBF14, D_800CBF54 image records H.
* The fan quads use code 0x50000000 with func_80017758 (meaning of the code word not checked).
* Open: func_8014964C (h_8014964C) placement for e = 1 flies, i.e. whether they are screen-space.

### ovl23: ability 20, Rip-off (MAIN.CD entry 29, slot 2, code 1680 B, 11 functions, 2 still asm)

**What it does.** A timed ability (no animation, Musashi keeps control: continuous, M). Start (CAEE0): pay once,
spawn effect kind 0x38 with d = 0x8000 (the parent). Step 2 (CAF30): end the ability at D_80078EC8 == 0. The
parent (state 0, d & 0x8000): +0x12 = 0x14, state 1 (CB0D0, asm: by its twin in ovl18 it emits pieces with a
counter, M). A piece (state 0 without 0x8000): index i = e >> 15; a sprite (kind 3, func_8001CC3C) of the field
overlay's shared image D_800D387C at the (x, y) pair D_800CB4A8[i], [i + 1], page byte (i >> 1) + 0x19, flags
|= 0x50000000; e keeps its low half; CB2AC (asm) places it; a kind-3 effect is spawned at it (0x0CCCFFFC,
0xE000C000); Musashi +0x74 and +0x70 = +0x74 - 0x300 and +0x72 += 0xC0 (three halfwords the engine sets to
0x1000 with his model's scale at reset, engine 1364: a scale, M), sound 0x8E9; state 2 (CB2AC asm: moves relative
to Musashi's position D_80126B5E/62/66 with a scale from a 4-entry table, docs/overlays.md, M). What "Rip-off" does
in the game is not visible in the C: pieces pop out of Musashi with a puff and a sound and he is squashed thinner
and taller each time; whether the pieces are items taken from enemies is unknown. The image D_800D387C is the one
ovl18 (Satiate) pops pieces from as well.

**Entry and dispatch.** Image entry CAE0C (four records). Template CAE64 over D_800CB49C (3: CAEA8, CAEE0,
CAF30) H. Effect handler CB460 (kind 0x38; states D_800CB4BC: CAF90, CB0D0, CB2AC) with NO ability test in it
(the asm states may test). Stop hook: the empty CAF5C (M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl23_800CAE0C | image entry: queue D_800CB528, D_800CB568, D_800CB5A8, D_800CB4E8 | H |
| 0x800CAE64 | func_ovl23_800CAE64 | button template over D_800CB49C | H |
| 0x800CAEA8 | func_ovl23_800CAEA8 | step 0: run the start, skip to step 2 | H |
| 0x800CAEE0 | func_ovl23_800CAEE0 | step 1 start: pay once, spawn the parent effect | H |
| 0x800CAF30 | func_ovl23_800CAF30 | step 2: end the ability at duration 0 | H |
| 0x800CAF5C | func_ovl23_800CAF5C | empty (the stop hook, M) | M |
| 0x800CAF64 | func_ovl23_800CAF64 | spawn effect kind 0x38, d 0x8000 | H |
| 0x800CAF90 | func_ovl23_800CAF90 | effect state 0: parent -> state 1; piece: sprite, puff, squash Musashi, sound 0x8E9 | H |
| 0x800CB0D0 | func_ovl23_800CB0D0 | parent state 1: emit pieces (asm, not matched) | M |
| 0x800CB2AC | func_ovl23_800CB2AC | piece state 2: move about Musashi, scale table (asm, not matched) | M |
| 0x800CB460 | func_ovl23_800CB460 | effect handler: D_800CB4BC[o+2](o), no ability test | H |

**Notes.**
* Clone: the whole package is the twin of ovl18 (Satiate): CAEA8 / CAEE0 / CAF30 / CAF5C / CAF64 / CAF90 / CB0D0 /
  CB2AC / CB460 have the shape of ovl18 CAEF8 / CAF30 / CAF80 / CAFAC / CAFB4 / CAFE0 / CB168 / CB328 / CB5AC (same
  D_800D387C sprites with a (x, y) table, docs/overlays.md calls CB0D0 the twin of ovl18 CB168).
* Data: D_800CB49C step table (3) H; D_800CB4A8 s16 (x, y) pairs into D_800D387C, 5 pairs, indexed by an even i H;
  D_800CB4BC state table (3 used of 11 words; the rest may hold CB2AC's scale table) M; D_800CB4E8, D_800CB528,
  D_800CB568, D_800CB5A8 image records H.
* Open: how many pieces CB0D0 emits (+0x12 = 0x14 is its counter, M), what restores Musashi's +0x70.. scale.

### ovl24: ability 19, Toxin (MAIN.CD entry 30, slot 2, code 1612 B, 10 functions, 0 still asm)

**What it does.** A timed ability (continuous, M) that puts Musashi in the poisoned state with four sprites
orbiting him. Start (CAEC0): func_801657A0 saves the stats block (D_80078E94.. -> D_80078ECC..), pay once,
func_8014B33C sets D_80078E94 = 0x80000000 (bit 31 is the poison flag that func_8014B350 ticks: 8 HP of damage
each time its high half reaches 0x3D, engine 4342-4366), +0x1AC = 0, +0x44 |= 0x100 (a bit the engine also sets
on a hit together with a +0x1AC timer, func_80152714; meaning unknown), effect kind 0x37 with d = 0x8000, sound
0x83F. Step 2 (CAF44): at D_80078EC8 == 0 restore the stats (func_80165840) and end the ability. CAF84 stops
sound 0x83F (stop hook, M). The parent effect (d & 0x8000) clears a shared ring descriptor (D_800CB51C colour
bytes and D_800CB520..522), spawns four children (func_80146AB4, kind 0x37, d = i * 0x400: 90 degrees apart),
+0x16 = -0x38, then (state 1, CB158) fades the ring colour in (+8 a frame for 16 frames, ring of radius 0x24
rebuilt each time) and frees itself when the ability is not 19. Each child: an animated sprite (kind 3,
D_800CB464, frame list D_800CB470 started with func_80128EA8, scale 0x6000, black, flags |= 0xD0000000) and a ring
sprite (kind 6 from D_800CB51C, +0x2C = 0x8001, kept in the child's +0x34, its owner field); state 2 (CB1EC)
fades in (+4 a frame) and shrinks (scale -0x400) for 16 frames, then steps the frame list; it orbits Musashi at
radius 0x50, turning 32 units a frame from its d, bobbing (rcos >> 9) about 0x30 above his position; the ring
follows it with the same scale. Freed (ring slot zeroed) when the ability ends. "Toxin" fits the poison flag set
on Musashi; whether he also poisons enemies is not in this package (unknown).

**Entry and dispatch.** Image entry CAE0C (two records). Template CAE44 over D_800CB458 (3: CAE88, CAEC0, CAF44)
H. Effect handler CB41C (kind 0x37; states D_800CB490: CAFA8, CB158, CB1EC) with the ability tests inside the
states. Stop hook CAF84 (M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl24_800CAE0C | image entry: queue D_800CB4FC, D_800CB4BC | H |
| 0x800CAE44 | func_ovl24_800CAE44 | button template over D_800CB458 | H |
| 0x800CAE88 | func_ovl24_800CAE88 | step 0: run the start, skip to step 2 | H |
| 0x800CAEC0 | func_ovl24_800CAEC0 | step 1 start: save stats, pay once, poison flag, +0x44 0x100, parent effect, sound 0x83F | H |
| 0x800CAF44 | func_ovl24_800CAF44 | step 2: at duration 0 restore stats and end | H |
| 0x800CAF84 | func_ovl24_800CAF84 | stop sound 0x83F (stop hook) | M |
| 0x800CAFA8 | func_ovl24_800CAFA8 | effect state 0: parent spawns 4 children; child makes sprite + ring | H |
| 0x800CB158 | func_ovl24_800CB158 | parent state 1: fade the ring in for 16 frames; free when ability ends | H |
| 0x800CB1EC | func_ovl24_800CB1EC | child state 2: fade in, shrink, animate, orbit Musashi; free at end | H |
| 0x800CB41C | func_ovl24_800CB41C | effect handler: D_800CB490[o+2](o) | H |

**Notes.**
* Clones: the parent / child split on d & 0x8000 is the shape of ovl18 CAFE0 and ovl23 CAF90; CAF84 the
  stop-sound hook (ovl22 CB32C).
* Data: D_800CB458 step table (3) H; D_800CB464 sprite record (0xC) H; D_800CB470 sprite frame list for
  func_80128EA8 H; D_800CB490 state table (3 used of 11 words) H; D_800CB4BC, D_800CB4FC image records H;
  D_800CB51C ring descriptor for the kind-6 sprite (colour bytes 0-2, points from +0x10 by func_800233CC, 0x40
  bytes to the end of the package) H; D_800CB520..522 bytes of it zeroed at start, use unknown (a second colour?) L.
* Open: the meaning of +0x44 bit 0x100 here; the parent's +0x16 = -0x38.

### ovl25: ability 26, Map (MAIN.CD entry 31, slot 2, code 4400 B, 18 functions, 0 still asm)

**What it does.** Opens a 2D map on screen. The engine allows it only on maps 0x305C-0x3066 (fizzle otherwise,
docs section 2). Step 0 waits for an uninterrupted frame; the start (CAFE4) sets D_801270C0 = 2 (engine.c 1213:
with 1 every actor animates, otherwise only actors with flag 0x1000: the world is frozen, M), animation 3, pays BP,
rebuilds the two map palettes and queues the map texture D_800CC05C, scale x +0x234 = 0, y/z +0x236 = 0x10,
speeds +0x238 = 0, blink flags +0xBE / +0xBF = 0, timer 0x10, sound 0x8EA. The palettes (CAE74): copy an image
record's RECT and its colour data (0x1F bytes) into a working record, then for each event-flag number of a
zero-terminated list (D_800CBF7C / D_800CBFA8) whose flag is clear (func_80029178, a bit test of D_800AE648)
zero that colour (transparent): areas not yet flagged are not shown. Each frame (CB428) the colour whose list
entry equals func_80029204(4) (a word of D_800BA1B8; by use the current area's flag number, M) is faded up and
down by 1 per channel between 0 and 0x1F (CB5C8, direction in +0xBE / +0xBF): the current area blinks. Drawing:
two textured layers (CB6A0, a 0x60 x 0x40 FT4 with UVs D_800CBFFC[k] and page D_800CBFF8[k], grey 0x80, layer 1
then 0) and a 0x70 x 0x50 gouraud backing quad (CB964, black with one 0x80 corner), all screen-space through a
scale matrix (func_80017DC4) of (+0x234, +0x236, +0x236). Step 2 (CB0B0) unfolds: x scale grows with an
accelerating step (+0x100) to 0x2000 (sound 0x8EB), then y with +0x200 to 0x2000. Step 3 (CB1CC) shows it until
the button 0x20 (sound 0x991). Step 4 (CB288) folds it (y to 0x10, then x to 0), or ends at once when the timer
has run out and the button is pressed again; ending is func_80165A78 + func_80159B3C. CB3B4 (D_801270C0 = 1,
free every 0x68 kind 0x17) is the stop hook (M). The kind-0x17 objects are sprites (kind 1, D_800CC00C + d * 0xC,
colour 0x20, flags |= 0x40000000) inside the map's box: a head (e = 0) wanders (turns toward a random target
angle, func_80162F08 / func_80013B64 velocity, clamped to x +-0x60, y +-0x40 = the map quad at scale 0x2000) and
records its positions in a 16-entry ring D_800CC13C; followers (e = n) copy entry 2(n - 1). The name fits (H): a
map of flagged areas with the current one blinking. Nothing in the repository's C spawns kind 0x17.

**Entry and dispatch.** Image entry CAE0C (builds both palettes, queues the texture; the same as the start's
middle). Template CAF58 over D_800CBFE4 (5: CAF9C, CAFE4, CB0B0, CB1CC, CB288) H. Kind-0x17 handler CBBB8
(ability 0x1A; states D_800CC030: CBC14, CBCD4). Stop hook CB3B4 (M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl25_800CAE0C | image entry: build both palettes, queue the map texture | H |
| 0x800CAE74 | func_ovl25_800CAE74 | copy a palette record, blank colours whose event flag is clear, queue it | H |
| 0x800CAF58 | func_ovl25_800CAF58 | button template over D_800CBFE4 | H |
| 0x800CAF9C | func_ovl25_800CAF9C | step 0: wait an uninterrupted frame, then start | H |
| 0x800CAFE4 | func_ovl25_800CAFE4 | step 1 start: freeze world, anim 3, pay, palettes, scales, timer 0x10, sound 0x8EA | H |
| 0x800CB0B0 | func_ovl25_800CB0B0 | step 2: draw; unfold x then y to 0x2000 (sound 0x8EB) | H |
| 0x800CB1CC | func_ovl25_800CB1CC | step 3: draw until button 0x20 (sound 0x991) | H |
| 0x800CB288 | func_ovl25_800CB288 | step 4: fold y then x and end; button after the timer ends at once | H |
| 0x800CB3B4 | func_ovl25_800CB3B4 | D_801270C0 = 1, free all kind-0x17 objects (stop hook) | M |
| 0x800CB428 | func_ovl25_800CB428 | blink the current area's colour in both palettes, requeue them | H |
| 0x800CB5C8 | func_ovl25_800CB5C8 | step an RGB555 colour up / down by 1, flip direction at 0x1F / 0 | H |
| 0x800CB6A0 | func_ovl25_800CB6A0 | draw map layer k: scaled screen-space FT4 | H |
| 0x800CB964 | func_ovl25_800CB964 | draw the backing G4 quad | H |
| 0x800CBBB8 | func_ovl25_800CBBB8 | kind-0x17 handler (ability 0x1A), else free | H |
| 0x800CBC14 | func_ovl25_800CBC14 | kind-0x17 state 0: sprite by d, upward speed word, next | H |
| 0x800CBCD4 | func_ovl25_800CBCD4 | kind-0x17 state 1: head wanders and records; followers trail | H |
| 0x800CBEB8 | func_ovl25_800CBEB8 | free the object | H |
| 0x800CBED8 | func_ovl25_800CBED8 | clamp x to +-0x60, y to +-0x40; returns how many clamped | H |

**Notes.**
* Clones: CB0B0 / CB288 are twins (docs/overlays.md); CB6A0 / CB964 are stack-primitive draws like
  func_ovl16_800CAF84 but screen-space (func_80016ED4 FT4 / func_80017714 G4, no model matrix); CB3B4 the
  kill-all-of-kind loop (ovl26 CAFD0); CBEB8 free wrapper.
* CAE74 copies 0x1F bytes, not 0x20: the last byte of a 16-colour palette is not copied (as written; H).
* Data: D_800CBF3C, D_800CBF5C working palette records H; D_800CBF7C, D_800CBFA8 zero-terminated event-flag lists,
  one per colour H; D_800CBFE4 step table (5) H; D_800CBFF8 page per layer (2) H; D_800CBFFC UV rect per layer
  (2 x 4) H; D_800CC00C kind-0x17 sprite records (3 x 0xC) H; D_800CC030 kind-0x17 states (2 used of 11 words) H;
  D_800CC05C map texture record H; D_800CC09C, D_800CC0DC source palette records H; D_800CC0FC, D_800CC11C the
  colours CB428 edits (the working records' data, M); D_800CC13C 16-entry position / angle trail H.
* Open: who spawns kind 0x17 (not found in any C); the role of func_80029204(4).

### ovl26: ability 9, D-Kick (MAIN.CD entry 32, slot 2, code 1120 B, 10 functions, 0 still asm)

**What it does.** A leaping kick. Step 0 waits for an uninterrupted frame; the start (CAEC0): animation record
D_800CB26C (func_80154274), +0x24.. = (0, 0, -0x120000) (forward speed, M), fall speed -0xC0000 (upward,
func_801477E8), pay BP, attack state cleared (func_80156648), +0x1AA = 1, a 0x68 kind-0x18 object (upper pool).
Step 2 (CAF60), each frame: +0x44 |= 2, func_80147A84 (func_80147AD4(a, 0, 0, 0), unknown), move (func_801473EC),
gravity +0x20000 (func_80148038), fall (func_80147460); while func_80161418 (floor / wall checks of
func_801615C4, and the hand-over of func_8016163C) returns 0, func_80155FD4(a, +0x1AA) runs attack record 1 of
the 0x20000 table (D_8018F548, func_80156044: the hit check, M). The landing hand-over ends the step; the package
itself does not call func_80165A20. CAFD0 frees all kind-0x18 objects and clears +0x44 bit 2 (the stop hook, M).
The kind-0x18 object is a copy of Musashi's model (func_8001C810 kind 5 from part list D_800CC3C4, flags |=
0x50000000) that takes his position and model matrix every frame and is shown every other frame (D_800B99DA & 1):
a flickering after-image. The name fits a jump kick (H for the jump, M for the attack record).

**Entry and dispatch.** Image entry CAE0C (one record). Template CAE34 over D_800CB29C (3: CAE78, CAEC0, CAF60)
H. Kind-0x18 handler CB054 (ability 9; states D_800CB2A8: CB0B0, CB188). Stop hook CAFD0 (M).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl26_800CAE0C | image entry: queue D_800CB2D4 | H |
| 0x800CAE34 | func_ovl26_800CAE34 | button template over D_800CB29C | H |
| 0x800CAE78 | func_ovl26_800CAE78 | step 0: wait an uninterrupted frame, then start | H |
| 0x800CAEC0 | func_ovl26_800CAEC0 | step 1 start: anim, forward and upward speed, pay, attack reset, after-image | H |
| 0x800CAF60 | func_ovl26_800CAF60 | step 2: fly with gravity; attack record each frame until landing | H |
| 0x800CAFD0 | func_ovl26_800CAFD0 | free all kind-0x18 objects, +0x44 &= ~2 (stop hook) | M |
| 0x800CB054 | func_ovl26_800CB054 | after-image handler (ability 9), else free | H |
| 0x800CB0B0 | func_ovl26_800CB0B0 | after-image state 0: model copy of Musashi (kind 5), his matrix | H |
| 0x800CB188 | func_ovl26_800CB188 | after-image state 1: follow Musashi's position / matrix, blink every other frame | H |
| 0x800CB24C | func_ovl26_800CB24C | free the object | H |

**Notes.**
* Clones: CAFD0 kill-all-of-kind loop (ovl25 CB3B4); CB054 effect-handler shape; CB24C free wrapper.
* Data: D_800CB26C animation record (0x30 bytes) H; D_800CB29C step table (3) H; D_800CB2A8 after-image states
  (2 used of 11 words) H; D_800CB2D4 image record (texture; most of the package's 0x1160 data bytes) M;
  D_800CC3C4 the after-image's part list (8 bytes before the end, {part, 0}) M.
* Open: func_80147A84's effect; +0x44 bit 2.

### ovl27: ability 11, Fence (first function 0x800CAE0C, slot 2, code 2636 B, 19 functions, 0 still asm)

**What it does.** A sword thrust that also fires projectiles. The button step machine has 3 steps: step 0
(func_ovl27_800CAE88) waits for func_80161104 and runs the start at once; the start (func_ovl27_800CAED0) sets the
package's own animation D_ovl27_800CB858 (func_80154274), pays the BP cost once (func_801655E4), resets Musashi's
attack state (func_80156648) and sets a+0x1AA = 1; step 2 (func_ovl27_800CAF24) sets action flag a+0x44 |= 2, runs
Musashi's sword attack collision func_80155FF8(a, a+0x1AA = 1) every frame he is not handed elsewhere, spawns a 0x68
object kind 0x21 at offset (0, -0x18, 0) on every animation marker (a+0xB8 & 0x4000) but only while fewer than 8 exist
(func_80146608(..., 8, upper 1)), and hands Musashi back when the animation ends (a+0xB8 == 0x8000). The projectile
(kind 0x21, states D_ovl27_800CB8BC) is a sprite (type 2, texture D_ovl27_800CB8B0 at u/v 0x1A0/0x100, +0x27 =
0x19) that takes one of 8 matrices D_ovl27_800CB988 in turn (counter D_ovl27_800CB984 & 7), starts at Musashi's model
point, faces his facing and moves forward (local velocity (0, 0, -0x100000), func_80146DE8) for 60 frames (timer
0x3C); it plays sound 0x8EF and spawns effect 0x4A (a glow). While flying it blinks (colour 0x40 / 0x80 on the timer's
parity), grows (scale +0x100 a frame up to 0x2000), keeps turning toward Musashi's facing (func_80012ABC, step 0x10),
and tests three hit points (D_ovl27_800CB8CC, rotated by its matrix) with hit type 0x28 (func_80163408(o, 0x28, 0,
0x1000)); a hit spawns effect 0xB at the hit point with the packed hit vector of D_80114EB0, plays 0x8F0 and moves on
to the fade (colour -0x10 a frame, then free). Effect 0x4A (states D_ovl27_800CB8F0) is a ring sprite (type 5, a
12-point circle of radius 0x20 built in D_ovl27_800CBA88, inner colour (0x20, 0x40, 0x80), outer (0, 0, 0),
semi-transparent, tilted 0x400) that follows the projectile at offset D_ovl27_800CB8FC with 1.8 x its scale, then
shrinks (-0x300 a frame) and frees itself when the projectile is gone. The name fits a fencing thrust: the code
shows a melee sword-attack record plus forward projectiles; what the sprite looks like is unknown (texture not in the
repository). Nothing touches HP, D_80078EC8 or the model kind.

**Entry and dispatch.** Image-queue entry func_ovl27_800CAE0C (queues D_ovl27_800CB964 and D_ovl27_800CB924).
Template func_ovl27_800CAE44, step table D_ovl27_800CB8A4 (3 entries, 0xC bytes to the next symbol: CAE88, CAED0,
CAF24). Stop hook (by position and shape): func_ovl27_800CAFD4 (clears a+0x44 bit 2). 0x68 object kind 0x21: handler
func_ovl27_800CAFE8, states D_ovl27_800CB8BC (4: CB058, CB190, CB2C8, CB384). Effect 0x4A: handler
func_ovl27_800CB580, states D_ovl27_800CB8F0 (3: CB5DC, CB6D4, CB720). Called from outside: CAE0C, CAE44, CAFD4 and the
two handlers (through the engine's tables).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl27_800CAE0C | Queue the two image records | H |
| 0x800CAE44 | func_ovl27_800CAE44 | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE88 | func_ovl27_800CAE88 | Step 0: wait for func_80161104, start, step++ | H |
| 0x800CAED0 | func_ovl27_800CAED0 | Start: animation CB858, pay BP, reset attack, a+0x1AA = 1, step++ | H |
| 0x800CAF24 | func_ovl27_800CAF24 | Step 2: sword attack each frame, projectile 0x21 on each marker (max 8), end on anim end | H |
| 0x800CAFD4 | func_ovl27_800CAFD4 | Stop hook: clear a+0x44 bit 2 | M |
| 0x800CAFE8 | func_ovl27_800CAFE8 | Kind 0x21 handler: state table + matrix rebuild while ability 11, else free | H |
| 0x800CB058 | func_ovl27_800CB058 | Projectile init: sprite, matrix slot, forward velocity, 60-frame timer, effect 0x4A, sound 0x8EF | H |
| 0x800CB190 | func_ovl27_800CB190 | Projectile flight: blink, grow, steer, move, 3-point hit test, sound 0x8F0 | H |
| 0x800CB2C8 | func_ovl27_800CB2C8 | Projectile fade: colour -0x10 a frame, keep moving | H |
| 0x800CB384 | func_ovl27_800CB384 | Free the 0x68 object (func_80162CCC) | H |
| 0x800CB3A4 | func_ovl27_800CB3A4 | Rebuild the sprite's matrix from its angles (RotMatrixZYX) | H |
| 0x800CB3D8 | func_ovl27_800CB3D8 | Hit test at a matrix-rotated offset point, position restored after | H |
| 0x800CB4EC | func_ovl27_800CB4EC | Hit test type 0x28; on a hit spawn spark effect 0xB, return 1 | H |
| 0x800CB580 | func_ovl27_800CB580 | Effect 0x4A handler (ability 11 check) | H |
| 0x800CB5DC | func_ovl27_800CB5DC | Glow init: ring sprite r=0x20, blue inner colour | H |
| 0x800CB6D4 | func_ovl27_800CB6D4 | Glow: follow the projectile until it is freed | H |
| 0x800CB720 | func_ovl27_800CB720 | Glow: shrink by 0x300, free below 0 | H |
| 0x800CB76C | func_ovl27_800CB76C | Glow follow: copy facing, matrix, 1.8 x scale, offset CB8FC | H |

**Notes.** Clones: CAE44 the template; CAE88 the wait step (same as ovl2a CAE98, ovl2b CAF04, ovl2c CAE88, ovl2d
CAE90); CAF24 the "anim end -> hand back, marker -> spawn" step (ovl2b CAF94, ovl2d CAF80); CAFD4 the bit-2 stop hook
(ovl2b CB014, ovl2d CB02C); CB580 the effect-handler template; CB384 a one-line free wrapper (ovl28 CC6A4, ovl2b
CB358, ovl2c CB4F8, ovl2d CB4AC, ovl2a CB774); CB720 has the same shape as ovl2b CB30C (scale -0x300, free when
negative). Data: D_ovl27_800CB858 Musashi animation (0x4C bytes, H); D_ovl27_800CB8A4 step table (H);
D_ovl27_800CB8B0 projectile sprite record (M); D_ovl27_800CB8BC kind 0x21 states (H); D_ovl27_800CB8CC three
8-byte hit offsets (H); D_ovl27_800CB8F0 effect 0x4A states (H); D_ovl27_800CB8FC glow offset vector (H, AVec);
D_ovl27_800CB924 / D_ovl27_800CB964 image records (H); D_ovl27_800CB984 projectile counter (H);
D_ovl27_800CB988 8 x 0x20 matrices, one per live projectile (H); D_ovl27_800CBA88 (and CBA89/8A, CBA8C-8E) glow
ring sprite record, colours and circle points (H). Open: what effect 0xB and the 10:10:10 word from D_80114EB0 mean
(probably the hit direction); how many markers the animation has (shots per use).

### ovl28: ability 16, Steel (first function 0x800CAE80, slot 2, code 7016 B, 28 functions, 0 still asm)

**What it does.** Steel puts Musashi in a timed armoured state. The button step machine has 3 steps and no wait:
step 0 (func_ovl28_800CC1B0) runs the start at once; the start (func_ovl28_800CC1E8) pays the BP cost, **sets
D_80078EC8 = 0x1C2 (450 frames)**, spawns the 0x68 object kind 0x1A (upper half) and plays sound 0xA63; step 2
(func_ovl28_800CC260) hands Musashi back the same frame. The lasting effect is in the engine: while D_80078EC1 == 0x10
and D_80078EC8 != 0, func_80146128 sets Musashi's model kind to 6 and Musashi +0x44 bit 0x800; bit 0x800
(func_8014CB7C) halves the damage he takes (line 7076) and makes func_801497A8 return 0 (line 3413, role unknown).
Model kind 6 is drawn through this package's func_ovl28_800CAE80, a copy of the GsSortObject5-style preset-packet
renderer (GsDOBJ5 layout: obj+8 TMD object, obj+0xC packet list) with one change: two horizontal bands (D_ovl28_800CC9E8
/ CC9EA and CC9F0 / CC9F2) slide up and down the screen one step every other frame (a band reverses when its top
reaches 0x200 or its bottom 0), and every polygon whose first vertex's screen y (low byte of y0, func_ovl28_800CC0A0)
lies inside a band gets a fixed packet colour (D_ovl28_800CC9F8, CC9FC, CCA04-CCA14, one per primitive type) instead
of its NCCS-lit colour. That moving highlight is the "metal sheen" the name suggests; the colours themselves are
data not in the repository. The kind 0x1A object is the transformation flash: it follows Musashi's model origin,
shows a ring sprite (type 6, 12-point circle of radius 0xC0 in D_ovl28_800CCAD0) whose inner colour flickers 0xFF /
0xEF each frame, and draws six screen-space ray quads around Musashi's projected position (two sets of three at
0x555 = 120 degrees apart, white D_ovl28_800CCB10 to purple (0x20, 0, 0x20) D_ovl28_800CCB14) that grow (accelerating
to scale 0x1000), hold 0x20 frames, shrink in the last 8, after which the ring expands to scale 0xC00 and its +0x1E
field runs to 0x1000 before the object frees itself. Steel ends when D_80078EC8 runs out (engine countdown); the
package has no end code.

**Entry and dispatch.** Code starts at 0x800CAE80 after the 0x74-byte jump table of func_ovl28_800CB00C's switch
(0x800CAE0C-0x800CAE7F). Entry called from outside: func_ovl28_800CAE80 (the EXE's model draw, kind 6,
src/code_800123F0.c:6298). Image-queue function func_ovl28_800CC144 (queues D_ovl28_800CCA7C; presumably the load
hook). Template func_ovl28_800CC16C, step table D_ovl28_800CCA18 (3: CC1B0, CC1E8, CC260). Stop hook (empty, by
position): func_ovl28_800CC290. Kind 0x1A: handler func_ovl28_800CC298, states D_ovl28_800CCA24 (0x18 bytes, 6:
CC310, CC424, CC4E8, CC5E4, CC658, CC6A4 by order and transitions).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE80 | func_ovl28_800CAE80 | Kind-6 model draw: slide the two glint bands, store semi-trans rate, sort the model | H |
| 0x800CB00C | func_ovl28_800CB00C | Walk the packet list, call the loop for each primitive type | H |
| 0x800CB1F8 | func_ovl28_800CB1F8 | POLY_F3 loop: RTPT, clip, NCCS or glint colour, add to OT | H |
| 0x800CB3C0 | func_ovl28_800CB3C0 | POLY_F4 loop | H |
| 0x800CB5D0 | func_ovl28_800CB5D0 | POLY_G3 loop | H |
| 0x800CB7BC | func_ovl28_800CB7BC | POLY_G4 loop | H |
| 0x800CBA18 | func_ovl28_800CBA18 | POLY_FT4 loop | H |
| 0x800CBC2C | func_ovl28_800CBC2C | POLY_GT3 loop | H |
| 0x800CBE28 | func_ovl28_800CBE28 | POLY_GT4 loop | H |
| 0x800CC0A0 | func_ovl28_800CC0A0 | Is the primitive's y0 byte inside glint band 1 or 2 | H |
| 0x800CC110 | func_ovl28_800CC110 | Link a primitive into OT slot z >> shift with its length | H |
| 0x800CC144 | func_ovl28_800CC144 | Queue the image record | H |
| 0x800CC16C | func_ovl28_800CC16C | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CC1B0 | func_ovl28_800CC1B0 | Step 0: start at once, step++ | H |
| 0x800CC1E8 | func_ovl28_800CC1E8 | Start: pay BP, D_80078EC8 = 450, spawn kind 0x1A, sound 0xA63 | H |
| 0x800CC260 | func_ovl28_800CC260 | Step 2: hand Musashi back | H |
| 0x800CC290 | func_ovl28_800CC290 | Empty (stop hook by position) | M |
| 0x800CC298 | func_ovl28_800CC298 | Kind 0x1A handler: free unless ability 16; follow, flicker, run state | H |
| 0x800CC310 | func_ovl28_800CC310 | Flash init: ring sprite r=0xC0, ray colours, scales 0 | H |
| 0x800CC424 | func_ovl28_800CC424 | Flash grow: rays and ring grow, spin, draw rays | H |
| 0x800CC4E8 | func_ovl28_800CC4E8 | Flash hold 0x20 frames, shrink in the last 8 | H |
| 0x800CC5E4 | func_ovl28_800CC5E4 | Ring expand to 0xC00, +0x1E += 0x200 | H |
| 0x800CC658 | func_ovl28_800CC658 | Ring +0x1E += 0x80, free at 0x1000 | H |
| 0x800CC6A4 | func_ovl28_800CC6A4 | Free the 0x68 object | H |
| 0x800CC6C4 | func_ovl28_800CC6C4 | Draw six rays at the ring's two angles +-120 degrees | H |
| 0x800CC7FC | func_ovl28_800CC7FC | Draw one screen-space ray quad (scale, rotate Z, at the projected position) | H |
| 0x800CC968 | func_ovl28_800CC968 | Follow: position = owner model's matrix translation | H |
| 0x800CC9AC | func_ovl28_800CC9AC | Ring inner colour 0xFF / 0xEF by frame parity | H |

**Notes.** Clones: CB1F8-CBE28 repeat the GTE sequence of the EXE's immediate-mode loops (src/code_800123F0.c
func_800249F0 F3 ... func_800262D8) but write into double-buffered preset packets (`prim + D_800C7C74 * size`, stride
2 x size) and add the band test; CAE80 copies func_800243EC's first lines (attribute word, D_800A2B78) before the
band update. CC7FC is the engine's func_8016BFD0 (line 18990) with the Z angle taken from the scale vector's 4th
halfword instead of the sprite's +0x12; CC6C4 calls it six times (the engine's func_8016BFA8 calls it once). The
template, CC260 hand-back and CC6A4 free wrapper as elsewhere. Switch cases (primitive code & 0xFC): 0x20 F3, 0x28 F4,
0x2C FT4, 0x30 G3, 0x34 GT3, 0x38 G4, 0x3C GT4 (no FT3). Data: D_ovl28_800CC9E8 / CC9EA band 1 low / high, CC9EC
its direction (H); CC9F0 / CC9F2 / CC9F4 band 2 (H); CC9F8 F3, CC9FC F4, CCA04 FT4, CCA08 G3, CCA0C G4, CCA10 GT3,
CCA14 GT4 glint colour+code words (H; CCA00 unnamed, maybe the unused FT3 slot); CCA18 step table (H); CCA24 kind 0x1A
states (H); CCA3C / 44 / 4C / 54 the ray's four template vertices (H); CCA7C image record (H); CCA9C the ray quad
buffer (APrim layout, code at +0x30) (H); CCAD0 (CCAD1/2 colour bytes, CCAD4 outer colour) ring sprite record (H);
CCB10 / CCB14 ray inner / outer colours (H); CCB18 copy of the drawn model's attribute word, written only (H). Open:
the pre-code area is 0x74 bytes = 29 words (yaml 0x4-0x78), which matches the switch's 0x1D cases; docs/overlays.md's
"31-entry" predates r149's code-start fix. What sprite +0x1E does for a type-6 ring; what func_801497A8's 0 means
for Steel; the glint colours.

### ovl29: ability 10, Hurl (first function 0x800CAE0C, slot 2, code 1132 B, 16 functions, 0 still asm)

**What it does.** Hurl is a stronger throw of an enemy Musashi is carrying. The engine's carry handler
func_8015D738 (line 12820) calls this package's **func_ovl29_800CAF14** when Musashi holds an actor (a+0x178), the pad
"pressed" word has bit 0x20 and the current ability is 0xA; if BP is short (func_80165624) it drops the actor instead.
CAF14 sets Musashi's kind to 0x23 (func_80147078) and runs its state table D_ovl29_800CB284 (3 states): state 0
(CAF84) waits for func_80161104, then pays the ability's BP (func_801655E4) and advances; state 1 (CAFEC) turns
Musashi toward the camera's eye point (D_801151D4 +0x3C/+0x40/+0x44, ActionHelper_1AB0) and, once facing it, sets
animation 0x1C (func_80154150), face 0x19, resets the hold frame a+0x234, places the held actor, plays sound 0x8F1,
clears display flag 0x20000000 and advances; state 2 (CB080) moves the held actor along a lift path each frame
(D_ovl29_800CB290: three signed bytes per frame, added to the actor's hold offsets at its +0x78 data and transformed
through Musashi's model matrix), releases it at the animation marker 0x4000 and hands Musashi back at the animation
end. The release (CB1F8) pushes the actor out of walls (func_8014C1A0), then sends it hit type **0x29** with damage
rolled by func_80156370(0x29) in Musashi's facing (func_8014C4AC) and clears a+0x178. The engine's ordinary throw
(kind 0xE, func_8015DA90 ... func_8015DD74) does the same with hit type 9, damage func_80029AAC(), path D_8018FE28,
sound 0x5F5 and a flat 4 BP. So the name fits (a throw); the code turns Musashi to face the camera before throwing (where the
enemy then flies is unknown: that is its hit-0x29 reaction, not in this package).
The button template (step table D_ovl29_800CB278) only advances its step and sets D_80078EC8 = 1; whether the engine
ever runs it for Hurl is unknown (the "usable" bit of D_801901EC is data).

**Entry and dispatch.** Image-queue entry func_ovl29_800CAE0C (D_ovl29_800CB2C8). Template func_ovl29_800CAE34, step
table D_ovl29_800CB278 (3 entries by size; probably CAE78, CAEB0, CAEC4, L). Kind 0x23 handler func_ovl29_800CAF48
(states D_ovl29_800CB284, 3: CAF84, CAFEC, CB080). Called from outside: CAF14 (engine func_8015D738, H); CAEE0 (set
kind 0x23 and pay at once: the twin of the engine's func_8015DA90; no C caller found), CB108 (face 0x11 + release:
twin of func_8015DC84, an interrupt / cleanup hook), CAED8 and CAEC4 (stop-hook candidates), CAF48 (the engine's kind
table, entry 0x23, presumably).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl29_800CAE0C | Queue the image record | H |
| 0x800CAE34 | func_ovl29_800CAE34 | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE78 | func_ovl29_800CAE78 | Step 0: run CAEB0, step++ (no wait) | H |
| 0x800CAEB0 | func_ovl29_800CAEB0 | Start: step++ only | H |
| 0x800CAEC4 | func_ovl29_800CAEC4 | D_80078EC8 = 1 (step 2 or a hook; table contents unknown) | L |
| 0x800CAED8 | func_ovl29_800CAED8 | Empty (stop hook by position) | L |
| 0x800CAEE0 | func_ovl29_800CAEE0 | Enter kind 0x23 and pay at once (state 1) | M |
| 0x800CAF14 | func_ovl29_800CAF14 | Enter kind 0x23 and run state 0 (called by the carry handler) | H |
| 0x800CAF48 | func_ovl29_800CAF48 | Kind 0x23 handler: D_ovl29_800CB284[a+2](a) | H |
| 0x800CAF84 | func_ovl29_800CAF84 | State 0: wait for func_80161104, then CAFBC | H |
| 0x800CAFBC | func_ovl29_800CAFBC | Pay the BP cost, state++ | H |
| 0x800CAFEC | func_ovl29_800CAFEC | State 1: turn to the camera eye, then throw animation 0x1C, face 0x19, sound 0x8F1 | H |
| 0x800CB080 | func_ovl29_800CB080 | State 2: carry along the path, release at marker, hand back at anim end | H |
| 0x800CB108 | func_ovl29_800CB108 | Face 0x11 and release the held actor | H |
| 0x800CB13C | func_ovl29_800CB13C | Place the held actor at the next lift-path point | H |
| 0x800CB1F8 | func_ovl29_800CB1F8 | Release: wall-clamp, send hit 0x29 in Musashi's facing, clear a+0x178 | H |

**Notes.** Clones of engine code (line 12888-13030): CAEE0 / func_8015DA90, CAF14 / func_8015DAC4, CAF48 /
func_8015DAF8, CAF84 / func_8015DB34, CAFEC / func_8015DB6C (plus the turn and the ability's own cost), CB080 /
func_8015DBD4 (and func_8015DF34), CB108 / func_8015DC84, CB13C / func_8015DCB8, CB1F8 / func_8015DD74. CAE34 is the
template. Data: D_ovl29_800CB278 template steps (3, H by size); D_ovl29_800CB284 kind 0x23 states (3, H);
D_ovl29_800CB290 s8 lift path, 3 bytes a frame, 0x38 bytes (H); D_ovl29_800CB2C8 image record (H). Open: the
template table's contents and the role of CAEC4 / CAED8; which engine table holds CAEE0 / CB108 / CAF48; what an
enemy does on hit 0x29 (the actual hurl flight).

### ovl2a: ability 23, Clone (first function 0x800CAE0C, slot 2, code 4488 B, 28 functions, 1 still asm)

**What it does.** Clone drops two decoy models next to Musashi that later burst. Button steps (3): step 0
(CAE98) waits for func_80161104 and starts; the start (CAEE0) refuses (hands back) if a 0x68 object kind 0x22 already
exists (func_8014C088), else pays BP and bumps the use counter D_8012672C (func_80165958); step 2 (CAF4C) spawns two
kind 0x22 objects (spawn arg d = 0 and 1, lower half) and hands Musashi back at once. Each kind 0x22 (states
D_ovl2a_800CBFB8, 7) takes a model (type 3, part list D_ovl2a_800CBFA0 + d x 0xC), starts at Musashi's model origin
0x200 above its landing height and falls (speed +0x30000 a frame); on landing it plays 0x8EC once and squashes
(scale y -0x100 a frame down to 0xC00) then springs back to 0x1000; then it stands for a shared lifetime
D_ovl2a_800CC12C = 0x384 (900 frames), rolling its Z angle toward a sine sway (two random modes chosen by the d = 0
copy every 0x20-0x5F frames). When the lifetime drops below 0x80 or the pad "pressed" word of Musashi has bit 0x20
(func_80148800), it plays 0x8ED, points the model's colour override (+0x80, flag +0x2C |= 0x80) at the s16 triple
D_ovl2a_800CC134..138 and ramps it 0x80 -> 0xFF while wobbling its scale; at 0xFF it bursts: engine effect 3 at its
position (func_801663A4), 18 shard effects 0x46 (6 directions x e = 0, 1, 1), hides the model, damages every actor
within 0xC0 with hit type 0x33 (func_ovl2a_800CB794), plays func_80147364(4, 0x8ED) and 0x8EE, sets the stage flag
D_80126B08 (func_801659B8), waits 0x1E frames and frees itself **ending the ability** (func_80165A20(&D_80126B58):
the ability number is cleared). The shards (effect 0x46) are four-piece primitives (D_ovl2a_800CBFE0, colour
D_ovl2a_800CC010) thrown out along D_ovl2a_800CC028[d] (jittered when e != 0), spinning, slowed after 2 frames, then
falling and fading for 0x40 frames. The name is only partly supported: two copies are spawned, but they are package
models (part lists in D_ovl2a_800CBFA0; whether they look like Musashi is data) with no AI; in the code they are
standing decoys that explode. A second 0x68 kind (handler CB5D8, states D_ovl2a_800CBFD4) uses the same part lists
with a random upward velocity: nothing in this package spawns it.

**Entry and dispatch.** Image-queue entry func_ovl2a_800CAE0C (D_ovl2a_800CC0CC, CC10C, CC08C). Template
func_ovl2a_800CAE54, step table D_ovl2a_800CBF94 (3: CAE98, CAEE0, CAF4C). Stop hook (empty, by position):
func_ovl2a_800CAFCC. Kind 0x22: handler func_ovl2a_800CAFD4, states D_ovl2a_800CBFB8 (0x1C bytes, 7: CB030, CB11C,
CB1CC, CB218, CB3B4, CB570, CB5A8). Unknown 0x68 kind: handler func_ovl2a_800CB5D8, states D_ovl2a_800CBFD4 (3:
CB634, CB708, CB774). Effect 0x46: handler func_ovl2a_800CB8B4, states D_ovl2a_800CC01C (3: CB910, CBC14, CBC90).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl2a_800CAE0C | Queue the three image records | H |
| 0x800CAE54 | func_ovl2a_800CAE54 | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE98 | func_ovl2a_800CAE98 | Step 0: wait for func_80161104, start, step++ | H |
| 0x800CAEE0 | func_ovl2a_800CAEE0 | Start: refuse if clones exist, else pay BP, use counter++, step++ | H |
| 0x800CAF4C | func_ovl2a_800CAF4C | Step 2: spawn two kind 0x22 (d 0, 1), hand back | H |
| 0x800CAFCC | func_ovl2a_800CAFCC | Empty (stop hook by position) | M |
| 0x800CAFD4 | func_ovl2a_800CAFD4 | Kind 0x22 handler: states while ability 23, else free + end ability | H |
| 0x800CB030 | func_ovl2a_800CB030 | Clone init: model from part list d, start 0x200 up, lifetime 900 | H |
| 0x800CB11C | func_ovl2a_800CB11C | Clone fall, land sound 0x8EC, squash to 0xC00 | H |
| 0x800CB1CC | func_ovl2a_800CB1CC | Clone spring back to scale 0x1000 | H |
| 0x800CB218 | func_ovl2a_800CB218 | Clone idle sway; on timeout or button: glow, sound 0x8ED | H |
| 0x800CB3B4 | func_ovl2a_800CB3B4 | Clone swell to white, then burst: effects 3 and 18 x 0x46, blast, sounds | H |
| 0x800CB570 | func_ovl2a_800CB570 | Wait for the timer, then next state | H |
| 0x800CB5A8 | func_ovl2a_800CB5A8 | Free the object and end the ability (func_80165A20) | H |
| 0x800CB5D8 | func_ovl2a_800CB5D8 | Handler of an unknown 0x68 kind (ability 23 check) | H |
| 0x800CB634 | func_ovl2a_800CB634 | Its init: model from part list d, random upward velocity, timer 0x40 | H |
| 0x800CB708 | func_ovl2a_800CB708 | Its flight (asm, not matched; uses func_80162F08, three word copies) | L |
| 0x800CB774 | func_ovl2a_800CB774 | Free the 0x68 object | H |
| 0x800CB794 | func_ovl2a_800CB794 | Blast: hit 0x33 on actors within 0xC0; actor kind 0x219 gets +0x60 set | H |
| 0x800CB8B4 | func_ovl2a_800CB8B4 | Effect 0x46 handler (ability 23 check) | H |
| 0x800CB910 | func_ovl2a_800CB910 | Shard init: sprite type 0xB, direction d, jitter if e, spin, sub-offsets | H |
| 0x800CBC14 | func_ovl2a_800CBC14 | Shard fly 2 frames, then velocity / 4, timer 0x40 | H |
| 0x800CBC90 | func_ovl2a_800CBC90 | Shard spin, fall (+0x4000), fade (d 0 only), free on timer | H |
| 0x800CBD2C | func_ovl2a_800CBD2C | Draw the shard with D_ovl2a_800CBFE0 | H |
| 0x800CBD54 | func_ovl2a_800CBD54 | Draw a primitive four times (scale/rotate/translate + three offsets) | H |
| 0x800CBEB0 | func_ovl2a_800CBEB0 | Position += velocity, angles += spin | H |
| 0x800CBF24 | func_ovl2a_800CBF24 | Shard colour word = 0x40404040 | H |
| 0x800CBF3C | func_ovl2a_800CBF3C | Shard colour fade by 2 a frame | H |

**Notes.** Clones: template; CAE98 wait step; CAFD4 / CB5D8 the effect-handler template with a local free; CB8B4
the plain one; CB774 free wrapper; CB910 has the same structure as ovl2d CB860 (AVec direction table [d], ALVec base
velocity, random jitter when e != 0, RotMatrixZYX + ApplyMatrixLV); CB794 is a radius-hit loop like ovl2b CB378
(different radius, type, hit call). CB708 (asm): the symbol file lists func_80162F08, used by no C function, and
docs/overlays.md describes it as three word assignments plus a call with AF(a, s32, 0x18): probably accelerate,
copy the three words to the velocity, move, and advance on the timer (L). Data: D_ovl2a_800CBF94 step table (H);
D_ovl2a_800CBFA0 two 12-byte model part lists (H); D_ovl2a_800CBFB8 / CBFD4 / CC01C state tables (H);
D_ovl2a_800CBFE0 shard primitive with colour D_ovl2a_800CC010 (bytes CC010-CC012 r, g, b; CC013 the fade level) (M);
D_ovl2a_800CC028 six AVec shard directions (H); D_ovl2a_800CC058 ALVec base shard velocity (H); D_ovl2a_800CC068 u16
shard scale by e (H); D_ovl2a_800CC08C / CC0CC / CC10C image records (H); D_ovl2a_800CC12C lifetime counter (H);
D_ovl2a_800CC130 sway mode (H); D_ovl2a_800CC134 / CC136 / CC138 the clones' colour-override triple (M). Open: who
spawns the CB5D8 kind; what actor kind 0x219's +0x60 is; whether func_80147364(4, 0x8ED) stops the 0x8ED sound;
what stage scripts do with D_80126B08.

### ovl2b: ability 25, Acid (first function 0x800CAE0C, slot 2, code 1992 B, 17 functions, 0 still asm)

**What it does.** Musashi lobs an acid blob that leaves a corrosive puddle. Button steps (3): step 0 (CAF04) waits
for func_80161104 and starts; the start (CAF4C) sets the shared animation D_800D57F4 (field-overlay data, also used by
Homing) and pays BP; step 2 (CAF94) spawns the 0x68 object kind 0x1E at (0, -0x40, 0) (above the head, lower half) at
the animation marker 0x4000 and hands back at the end. The blob (states D_ovl2b_800CB634, 5) is a model (type 3,
part list D_ovl2b_800CB61C) facing Musashi's way, launched up and forward (local (0, -0xC0000, -0x180000)) with
gravity (+0x40000 on local y, func_80162FF4) and sound 0x912; while it flies it damages actors with hit type 0x27
(func_80163408(o, 0x27, 0, 0x80)). A wall hit (map flags 0x8000) kills its horizontal speed; a floor hit or landing on
a platform actor (func_80163950) splats it: the model slot is cleared, a flat sprite (type 2, D_ovl2b_800CB628 at u/v
0x1A0/0x100, +0x27 = 0x1B, tilted 0x400) replaces it, four droplets (effect 0x45, d = 0-3) fly out with sound 0x913,
and the puddle spreads (scale +0x80 a frame) for 0x20 frames, hitting actors within 0x60 with hit type 0x27 each
frame, then shrinks (-0x300) and frees. The flight also ends after 0x3C frames, and the object dies if its y passes
0x400 or the ability changes. The droplets (states D_ovl2b_800CB654, 2) are sprites (type 3, D_ovl2b_800CB648,
scale 0x2000) moving by a 16-byte velocity table indexed by d with gravity +0xC000 for 0x10 frames. Separately the
engine calls **func_ovl2b_800CAE0C every frame while Acid is the current ability**: it queues the next record of the
0-terminated list D_ovl2b_800CB5D4 (index D_ovl2b_800CB95C), an animated texture or palette (what it animates is
unknown). The name fits: a thrown, splashing, area-damaging liquid.

**Entry and dispatch.** func_ovl2b_800CAE0C is the per-frame image cycler (engine func_801654A8); func_ovl2b_800CAE70
queues D_ovl2b_800CB6FC, CB73C, CB6BC and resets the cycle: the load-time image entry (M, presumably via D_801902E8).
Template func_ovl2b_800CAEC0, step table D_ovl2b_800CB610 (3: CAF04, CAF4C, CAF94). Stop hook (by shape)
func_ovl2b_800CB014. Kind 0x1E: handler func_ovl2b_800CB028, states D_ovl2b_800CB634 (5: CB09C, CB150, CB2A8, CB30C,
CB358). Effect 0x45: handler func_ovl2b_800CB424, states D_ovl2b_800CB654 (2: CB480, CB55C).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl2b_800CAE0C | Per-frame: queue the next image record of the cycle list | H |
| 0x800CAE70 | func_ovl2b_800CAE70 | Queue three image records, reset the cycle (load entry) | M |
| 0x800CAEC0 | func_ovl2b_800CAEC0 | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAF04 | func_ovl2b_800CAF04 | Step 0: wait for func_80161104, start, step++ | H |
| 0x800CAF4C | func_ovl2b_800CAF4C | Start: animation D_800D57F4, pay BP, step++ | H |
| 0x800CAF94 | func_ovl2b_800CAF94 | Step 2: blob 0x1E on marker, hand back on anim end | H |
| 0x800CB014 | func_ovl2b_800CB014 | Stop hook: clear a+0x44 bit 2 | M |
| 0x800CB028 | func_ovl2b_800CB028 | Kind 0x1E handler: states while ability 25, free if y > 0x400 | H |
| 0x800CB09C | func_ovl2b_800CB09C | Blob init: model, launch velocity, timer 0x3C, sound 0x912 | H |
| 0x800CB150 | func_ovl2b_800CB150 | Blob flight: gravity, move, hit 0x27, splat on landing (4 x 0x45, 0x913) | H |
| 0x800CB2A8 | func_ovl2b_800CB2A8 | Puddle spread 0x20 frames, damaging | H |
| 0x800CB30C | func_ovl2b_800CB30C | Puddle shrink by 0x300, free below 0 | H |
| 0x800CB358 | func_ovl2b_800CB358 | Free the 0x68 object | H |
| 0x800CB378 | func_ovl2b_800CB378 | Puddle hit: hit 0x27 on actors within 0x60 | H |
| 0x800CB424 | func_ovl2b_800CB424 | Effect 0x45 handler (ability 25 check) | H |
| 0x800CB480 | func_ovl2b_800CB480 | Droplet init: sprite, velocity by d, 0x10 frames | H |
| 0x800CB55C | func_ovl2b_800CB55C | Droplet move with gravity +0xC000, free at the end | H |

**Notes.** Clones: template; CAF04 wait step; CAF94 the marker-spawn step; CB014 bit-2 stop hook; CB028 has the
same shape as ovl2d CB040 (state call, then `y >= 0x401` frees); CB424 effect-handler template; CB30C same shape
as ovl27 CB720; CB358 free wrapper. Data: D_ovl2b_800CB5D4 0-terminated list of image-record pointers (0x3C bytes)
(H); D_ovl2b_800CB610 step table (H); D_ovl2b_800CB61C blob part list (H); D_ovl2b_800CB628 puddle sprite record (M);
D_ovl2b_800CB634 / CB654 state tables (H); D_ovl2b_800CB648 droplet sprite record (M); D_ovl2b_800CB65C / CB660 /
CB664 droplet velocity x / y / z in 16-byte records (H); D_ovl2b_800CB6BC / CB6FC / CB73C image records (H);
D_ovl2b_800CB95C cycle index (H). Open: what the per-frame image cycle animates (it runs whenever Acid is selected,
not only during use).

### ovl2c: ability 27, 3-Way (first function 0x800CAE0C, slot 2, code 3384 B, 20 functions, 0 still asm)

**What it does.** A three-way spread gun, the twin of ovl15 Gunshot. Button steps (5): step 0 (CAE88) waits and
starts; the start (CAED0) sets the raise animation D_ovl2c_800CBB44 and face 0x15 (no BP yet); step 2 (CAF1C) waits
for the animation end, then goes to the firing loop (animation D_ovl2c_800CBB84, step 3) if the pad "held" word has
bit 0x20 (func_801487F4), else to the lowering animation D_ovl2c_800CBB64 (step 4). Step 3 (CAFAC) sets a+0x44 |= 2,
lets the stick turn Musashi (control mode a+0xA9 0x41: toward the camera-relative stick angle, step 4; 0x53 / 0x73:
func_80148AFC), and at each marker 0x4000 fires: **three 0x68 objects kind 0x1F (d = 0, 1, 2, upper half) at
(0, -0x18, -0xF)**, the muzzle effect 0x43, sound 0xA64, and **pays the BP cost for every shot**; at each animation
end it loops while BP suffices (func_80165624 == 0) and the button is held, else lowers (step 4, CB194: hand back at
the end). Each shot (states D_ovl2c_800CBBC8, 3) is a visible model (type 3, part list D_ovl2c_800CBBBC) aimed with
Musashi's aim angles (+0x100, +0x104) and yaw + (d x 0xAA - 0xAA), i.e. -0xAA, 0, +0xAA (about 15 degrees each way),
moving at local (0, 0, -0x400000) and spinning (+0x14 += 0x200) for 0x10 frames; it hits with type 0x2D
(func_80163408(o, 0x2D, 0x80, 0x200)): result 1 spawns spark effect 0x1F (D_80114EB0 vector), 2 or 4 spawns effect 7
(D_80114EC8), and the shot ends; at the timeout it spawns effect 3 (e = 0x1C00). Effect 0x43 (states
D_ovl2c_800CBBE8, 2) is a muzzle-flash model (type 5, D_ovl2c_800CCA00, +0x20 = D_800636C8, scale 1.5, random Z
roll, in Musashi's model matrix) that also spawns effect 0x44 and draws a 4-quad additive fan (D_ovl2c_800CBBD4) in
its XZ plane for 2 frames at half brightness the second; effect 0x44 (states D_ovl2c_800CBBF0) draws the same fan
facing the camera (func_800D20C0 / func_800D23D0) in yellow (r = g = t, b = t / 2) for 2 frames. The name matches the
code exactly: three projectiles per shot at three angles.

**Entry and dispatch.** Image-queue entry func_ovl2c_800CAE0C (D_ovl2c_800CCA28, CBC18). Template
func_ovl2c_800CAE44, step table D_ovl2c_800CBBA8 (0x14 bytes, 5: CAE88, CAED0, CAF1C, CAFAC, CB194). Stop hook (by
shape) func_ovl2c_800CB1E4 (clear bit 2, face 0x11). Kind 0x1F: handler func_ovl2c_800CB214, states D_ovl2c_800CBBC8
(3: CB270, CB360, CB4F8). Effect 0x43: handler func_ovl2c_800CB518, states D_ovl2c_800CBBE8 (2: CB574, CB728).
Effect 0x44: handler func_ovl2c_800CB8B4, states D_ovl2c_800CBBF0 (2 used: CB910, CB9B4; 0x28 bytes to the next
named symbol).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl2c_800CAE0C | Queue the two image records | H |
| 0x800CAE44 | func_ovl2c_800CAE44 | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE88 | func_ovl2c_800CAE88 | Step 0: wait for func_80161104, start, step++ | H |
| 0x800CAED0 | func_ovl2c_800CAED0 | Start: raise animation, face 0x15, step++ | H |
| 0x800CAF1C | func_ovl2c_800CAF1C | Step 2: at anim end go firing (held) or lowering | H |
| 0x800CAFAC | func_ovl2c_800CAFAC | Step 3: aim, fire 3 shots + flash on marker, pay BP, loop while held | H |
| 0x800CB194 | func_ovl2c_800CB194 | Step 4: hand back at the lowering anim end | H |
| 0x800CB1E4 | func_ovl2c_800CB1E4 | Stop hook: clear a+0x44 bit 2, face 0x11 | M |
| 0x800CB214 | func_ovl2c_800CB214 | Kind 0x1F handler (ability 27 check, local free) | H |
| 0x800CB270 | func_ovl2c_800CB270 | Shot init: model, aim angles, spread yaw by d, speed, timer 0x10 | H |
| 0x800CB360 | func_ovl2c_800CB360 | Shot flight: spin, move by its matrix, hit 0x2D, sparks, timeout puff | H |
| 0x800CB4F8 | func_ovl2c_800CB4F8 | Free the 0x68 object | H |
| 0x800CB518 | func_ovl2c_800CB518 | Effect 0x43 handler | H |
| 0x800CB574 | func_ovl2c_800CB574 | Muzzle flash init: model, rolled scaled matrix, effect 0x44, fan | H |
| 0x800CB728 | func_ovl2c_800CB728 | Muzzle flash second frame (half brightness), then free | H |
| 0x800CB780 | func_ovl2c_800CB780 | Draw the 4-quad fan in the XZ plane, white centre | H |
| 0x800CB8B4 | func_ovl2c_800CB8B4 | Effect 0x44 handler | H |
| 0x800CB910 | func_ovl2c_800CB910 | Camera-facing glow init: matrix toward the camera, fan | H |
| 0x800CB9B4 | func_ovl2c_800CB9B4 | Glow second frame, then free | H |
| 0x800CBA0C | func_ovl2c_800CBA0C | Draw the 4-quad fan in the XY plane, yellow centre | H |

**Notes.** Function-by-function twin of ovl15 (CAE0C/CAE0C, CAE44/CAE34, CAE88/CAE78, CAED0/CAEC0, CAF1C/CAF0C,
CAFAC/CAF9C, CB194/CB140, CB1E4/CB190, CB214/CB1C0, CB270/CB21C, CB360/CB2E0, CB4F8/CB474, CB518/CB494, CB574/CB4F0,
CB728/CB6A4, CB780/CB6FC, CB8B4/CB830, CB910/CB88C, CB9B4/CB930, CBA0C/CB988). Differences: Gunshot fires one 0x68
kind 2 (an invisible model, func_8001C2C4, flag 0x80000000) with effect 0xF, sound 0x476 and a rumble
(StartRumbleScript(&D_80062BD0)), hit type 0x10, and its stop hook does not set face 0x11; 3-Way fires three visible
spinning shots with the 0xAA spread, effect 0x43, 0xA64, no rumble, hit type 0x2D, timeout puff e 0x1C00 (Gunshot
0x80001C00). CB780 / CBA0C are stack-quad draws (APrim + func_80017758) like ovl16 func_ovl16_800CAF84. Data:
D_ovl2c_800CBB44 / CBB64 / CBB84 raise / lower / fire animations (H); D_ovl2c_800CBBA8 step table (H);
D_ovl2c_800CBBBC shot part list (H); D_ovl2c_800CBBC8 / CBBE8 / CBBF0 state tables (H); D_ovl2c_800CBBD4 s8 fan
outline, 9 (x, y) pairs shared between neighbouring quads (H); D_ovl2c_800CBC18 / CCA28 image records (H);
D_ovl2c_800CCA00 muzzle-flash part list (H). Open: what +0x4C..+0x54 (the muzzle world point CB574 stores) is used
for; effect 7 vs 0x1F (probably map vs actor sparks).

### ovl2d: ability 28, Homing (first function 0x800CAE14, slot 2, code 4128 B, 26 functions, 1 still asm)

**What it does.** A homing missile. Button steps (3): step 0 (CAE90) waits and starts; the start (CAED8) refuses if
6 or more 0x68 objects kind 0x25 exist, else sets the shared animation D_800D57F4 and pays BP; step 2 (CAF80) sets
a+0x44 |= 2, spawns one kind 0x25 (d = 1) at (0, -0x40, 0) at the marker with a rumble (StartRumbleScript
(&D_80062BE8)), and hands back at the animation end. The missile (states D_ovl2d_800CBE40, 4) is a model (type 0,
part list D_ovl2d_800CC444) that copies Musashi's model angles and matrix (yaw + (d - 1) x 0x155, so 0 for the one
missile spawned), keeps Musashi's aim angles (+0x100/+0x102/+0x104) at +0x58/+0x5A/+0x5C, starts at local speed
(0, 0, -0x100000) and accelerates by -0x3000 a frame (func_80163194, clamp 0x7F0000), sound 0x8E8. On its first
flight frame (timer 0x27) it picks a target (CB4D4): the nearest actor (3D distance) that is on screen within the box
0xB4 x 0x8C (func_8012E778), hittable with type 0x2B, and not kind 0x282. Every frame it turns its yaw toward the
target (func_8014C59C) and its pitch toward the target + D_ovl2d_800CAE0C (vy -0x1AB for target kind 0x2CE),
16 units a step (CB61C), drops a trail puff effect 0x50 on even frames, and tests hit type 0x2B (func_80163408(o,
0x2B, 0, 0x40)); a hit (result 1, 2 or 4) hides the model, plays 0xA7D and starts the burst; after 0x28 frames it
bursts anyway. The burst (CB424) spawns four spark effects 0x4E a frame for 8 frames (4 after a hit), then the
object frees itself; it also dies if CB6F4 (asm) returns 0, if its y passes 0x400, or if the ability changes. Sparks
(effect 0x4E, states D_ovl2d_800CBEAC) are animated sprites (type 3, D_ovl2d_800CBE50, frames D_ovl2d_800CBE5C,
yellow (0xC0, 0xC0, 0x40)) thrown along D_ovl2d_800CBEB8[d] with jitter, shrinking, then slowing, fading and
rising. Trail puffs (effect 0x50, states D_ovl2d_800CBEF8) are animated sprites from the field overlay (D_800D387C,
frames D_800D3888) that fade from red (0xFF, 0, 0) to grey 0x80 while growing by 0x400 a frame. The name is fully
supported: target acquisition plus per-frame steering.

**Entry and dispatch.** Two data words first: D_ovl2d_800CAE0C, an AVec (the aim offset added to the target).
Image-queue entry func_ovl2d_800CAE14 (D_ovl2d_800CBF60, CBF20). Template func_ovl2d_800CAE4C, step table
D_ovl2d_800CBE34 (3: CAE90, CAED8, CAF80). Stop hook (by shape) func_ovl2d_800CB02C. Kind 0x25: handler
func_ovl2d_800CB040, states D_ovl2d_800CBE40 (4: CB0B4, CB228, CB424, CB4AC; CB228 jumps to 3 on CB6F4 == 0).
Effect 0x4E: handler func_ovl2d_800CB804, states D_ovl2d_800CBEAC (3: CB860, CBAAC, CBB54). Effect 0x50: handler
func_ovl2d_800CBC60, states D_ovl2d_800CBEF8 (2 used: CBCBC, CBD90). (Which effect handler serves 0x4E and which 0x50
is inferred from the spawn arguments each init reads: M.)

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE14 | func_ovl2d_800CAE14 | Queue the two image records | H |
| 0x800CAE4C | func_ovl2d_800CAE4C | Template: a+0x44 \|= 8, run step a+0x197 | H |
| 0x800CAE90 | func_ovl2d_800CAE90 | Step 0: wait for func_80161104, start, step++ | H |
| 0x800CAED8 | func_ovl2d_800CAED8 | Start: refuse at 6 missiles, else animation D_800D57F4, pay BP | H |
| 0x800CAF80 | func_ovl2d_800CAF80 | Step 2: missile 0x25 + rumble on marker, hand back at end | H |
| 0x800CB02C | func_ovl2d_800CB02C | Stop hook: clear a+0x44 bit 2 | M |
| 0x800CB040 | func_ovl2d_800CB040 | Kind 0x25 handler: states while ability 28, free if y > 0x400 | H |
| 0x800CB0B4 | func_ovl2d_800CB0B4 | Missile init: model, angles, aim, matrix, speed, timer 0x28, sound 0x8E8 | H |
| 0x800CB228 | func_ovl2d_800CB228 | Missile flight: acquire, steer, accelerate, hit 0x2B, trail, burst | H |
| 0x800CB424 | func_ovl2d_800CB424 | Burst: four sparks 0x4E a frame until the timer ends | H |
| 0x800CB4AC | func_ovl2d_800CB4AC | Free the 0x68 object | H |
| 0x800CB4CC | func_ovl2d_800CB4CC | Clear the target (+0x54) | H |
| 0x800CB4D4 | func_ovl2d_800CB4D4 | Find the nearest on-screen hittable actor | H |
| 0x800CB5CC | func_ovl2d_800CB5CC | Steer if the target is still hittable | H |
| 0x800CB61C | func_ovl2d_800CB61C | Turn yaw and pitch toward the target + aim offset | H |
| 0x800CB6F4 | func_ovl2d_800CB6F4 | Keep-alive test, 0 drops the missile (asm, not matched) | L |
| 0x800CB804 | func_ovl2d_800CB804 | Effect 0x4E handler | H |
| 0x800CB860 | func_ovl2d_800CB860 | Spark init: animated sprite, direction d, jitter, yellow | H |
| 0x800CBAAC | func_ovl2d_800CBAAC | Spark fly and shrink, then velocity / 4 | H |
| 0x800CBB54 | func_ovl2d_800CBB54 | Spark fade, shrink, rise, free on timer | H |
| 0x800CBBDC | func_ovl2d_800CBBDC | Position += velocity | H |
| 0x800CBC10 | func_ovl2d_800CBC10 | Sprite colour -4 | H |
| 0x800CBC40 | func_ovl2d_800CBC40 | Sprite scale -= n | H |
| 0x800CBC60 | func_ovl2d_800CBC60 | Effect 0x50 handler | H |
| 0x800CBCBC | func_ovl2d_800CBCBC | Trail puff init: red animated sprite at the missile's tail | H |
| 0x800CBD90 | func_ovl2d_800CBD90 | Trail puff: red to grey, grow, free at the anim end | H |

**Notes.** Clones: template; CAE90 wait step; CAF80 marker-spawn step; CB02C bit-2 stop hook; CB040 same shape as
ovl2b CB028; CB804 / CBC60 effect-handler template; CB4AC free wrapper; CB860 same structure as ovl2a
CB910 (spark/shard spawn with direction table and jitter); CB4D4 is a best-of loop over the actor array (written
with a goto loop). CB6F4 (asm, 0x110 bytes): docs/overlays.md says it returns 0 at its end and 1 from two halves;
called once per flight frame before steering, 0 sets state 3 (free): a range / lifetime / validity test, details
unknown. Data: D_ovl2d_800CAE0C aim offset AVec (H); D_ovl2d_800CBE34 step table (H); D_ovl2d_800CBE40 / CBEAC /
CBEF8 state tables (H); D_ovl2d_800CBE50 spark sprite record (M); D_ovl2d_800CBE5C spark animation frames (H);
D_ovl2d_800CBEB8 six AVec spark directions (H); D_ovl2d_800CBEE8 ALVec base spark velocity (H); D_ovl2d_800CBF20 /
CBF60 image records (H); D_ovl2d_800CC444 missile part list (H). Open: CB6F4's test; why the spawn passes d = 1 when
d only offsets the yaw (a multi-missile variant left over?).

### ovl2e: ability 29, Grenade (first function 0x800CAE0C, slot 2, code 0xABC = 2748 B, 19 functions, 0 still asm)

**What it does.** Musashi throws a bouncing bomb that explodes into a burst of flames. Step machine
(D_ovl2e_800CB8C8, step byte a+0x197): wait until not interrupted, then animation D_800D57F4 (the throw animation,
shared with ovl2f) and pay the BP cost once (func_801655E4); during the animation a+0x44 bit 2 is set while
func_80161208 keeps control, at the animation marker 0x4000 it spawns a 0x68 object kind 0x20 at (0, -0x40, 0)
relative to Musashi (func_801466F0, lower half), and at the animation end (a+0xB8 == 0x8000) Musashi is handed back
(func_801599A4 + func_80159B3C). The grenade (kind 0x20, states D_ovl2e_800CB8D4): model from part list
D_ovl2e_800CBD74, yaw copied from Musashi's model, start point through Musashi's model matrix (func_80149374),
local velocity (0, -0xC0000, -0x100000), fuse timer 100 frames, 2 bounces (+0x60), launch sound 0x8F3. Each frame it
adds 0x20000 to its local y velocity and turns it into world velocity through its saved throw rotation +0x58
(func_80162FF4), moves (func_80162FC0) and tumbles (+0x71 on rot x/z). A hit on an actor mesh (func_80163950,
0x2000) or a map hit with 0x4000/0x2000 (func_801638A0) bounces it (local y velocity negated and halved) while
bounces remain; a floor hit (0x8000), the last bounce, or an actor attack hit (func_80163408 class 0x2A, results 1
or 4) makes it explode: sound 0x8E7, timer 8. The fuse running out frees it without an explosion. The explosion
state spawns 6 flame effects kind 0x4D every frame (d = 0..5, e = 1), shrinks the model by 0x80 per frame and hits
every actor within 0x80 (class 0x2A, mask 0x20) for 8 frames, then frees the object. The object frees itself if
ability 29 is no longer current or its y passes 0x400. Flame 0x4D: sprite D_ovl2e_800CB8EC (byte +0x27 = 0x90,
scale 0x3000), sprite animation D_ovl2e_800CB8F8 (func_80128EA8 / func_80128ED8, the uv-frame player of
src/stage/engine.c), velocity = D_ovl2e_800CB984 rotated by D_ovl2e_800CB954[d] (with random jitter when e != 0);
4 frames out, then velocity / 4 and 8 frames rising (vy -= 0x4000), dimming and shrinking, then deleted.

**Entry and dispatch.** Load entry func_ovl2e_800CAE0C (two image records D_ovl2e_800CB9F4, D_ovl2e_800CB9B4). The
per-frame handler is func_ovl2e_800CAE44 (not 0x800CAE34: the second func_800183E0 call shifts it); step table
D_ovl2e_800CB8C8 = {CAE88, CAED0, CAF18} (3 entries, 0xC bytes). Grenade handler func_ovl2e_800CAFC4 with
D_ovl2e_800CB8D4 = {CB038, CB114, CB304, CB3BC} (4 used of 0x18 bytes). Flame handler func_ovl2e_800CB488 with
D_ovl2e_800CB948 = {CB4E4, CB710, CB7B8}. Called from outside: CAE0C (loader), CAE44 (D_80190170), CAFB0 (probably
D_80190364, the stop hook), CAFC4 / CB488 (the stage's 0x68 / effect handler tables, by kind). No direct engine
call.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl2e_800CAE0C | load entry: queue image records D_ovl2e_800CB9F4 and D_ovl2e_800CB9B4 | H |
| 0x800CAE44 | func_ovl2e_800CAE44 | per-frame handler: a+0x44 \|= 8, D_ovl2e_800CB8C8[a+0x197](a) | H |
| 0x800CAE88 | func_ovl2e_800CAE88 | step 0: when not interrupted run CAED0, step++ (lands on step 2) | H |
| 0x800CAED0 | func_ovl2e_800CAED0 | start: animation D_800D57F4, pay BP once, step++ | H |
| 0x800CAF18 | func_ovl2e_800CAF18 | throw step: marker 0x4000 spawns grenade kind 0x20; anim end hands back; sets a+0x44 bit 2 | H |
| 0x800CAFB0 | func_ovl2e_800CAFB0 | stop hook: a+0x44 &= ~2 | M |
| 0x800CAFC4 | func_ovl2e_800CAFC4 | grenade handler: free unless ability 29 and y <= 0x400, else run its state | H |
| 0x800CB038 | func_ovl2e_800CB038 | grenade init: model, start point, local velocity, fuse 100, 2 bounces, sound 0x8F3 | H |
| 0x800CB114 | func_ovl2e_800CB114 | grenade flight: gravity, tumble, bounce, explode on floor / actor hit (sound 0x8E7) | H |
| 0x800CB304 | func_ovl2e_800CB304 | explosion: 6 flames 0x4D per frame, shrink model, blast damage, 8 frames | H |
| 0x800CB3BC | func_ovl2e_800CB3BC | free the 0x68 object (func_80162CCC) | H |
| 0x800CB3DC | func_ovl2e_800CB3DC | blast: hit every actor within 0x80 (class 0x2A, mask 0x20) | H |
| 0x800CB488 | func_ovl2e_800CB488 | flame 0x4D handler: run D_ovl2e_800CB948 while ability 29, else delete | H |
| 0x800CB4E4 | func_ovl2e_800CB4E4 | flame init: sprite, uv animation, direction from D_ovl2e_800CB954[d] (+jitter), timer 4 | H |
| 0x800CB710 | func_ovl2e_800CB710 | flame burst: animate, move, shrink 0x30; at timer velocity / 4, timer 8 | H |
| 0x800CB7B8 | func_ovl2e_800CB7B8 | flame fade: dim, shrink 0x40, rise, delete at timer | H |
| 0x800CB840 | func_ovl2e_800CB840 | position += velocity (+4..+0xC += +0x10..+0x18) | H |
| 0x800CB874 | func_ovl2e_800CB874 | dim sprite colour bytes +0x24..+0x26 by 4 (floor 0) | H |
| 0x800CB8A8 | func_ovl2e_800CB8A8 | sprite scale +0x18 / +0x1A -= n | H |

**Notes.** Twin of ovl2f in the Musashi part (CAE88/CAED0/CAF18/CAFB0 = ovl2f CAE78/CAEC0/CAF08/CAF88, same
animation D_800D57F4, same spawn offset). CB3DC is the actor-walk clone of ovl2b B378 / ovl31 D31C. CB840 is an
inline copy of func_80162FC0. The grenade uses the 0x68 pool's lower half (entries 0-7). D_ovl2e_800CB8D4 spans 0x18
bytes but only 4 states are reached; the other 8 bytes are unknown. Open: why the throw step sets a+0x44 bit 2 (the
engine runs the sword hit check while bit 2 is set, engine ~11770); ovl2f does not set it but its stop hook clears it.

### ovl2f: ability 30, Javelin (first function 0x800CAE0C, slot 2, code 0x9C8 = 2504 B, 15 functions, 0 still asm)

**What it does.** Musashi throws a glowing spear that flies straight, pierces enemies and sticks in walls. Same
3-step template as ovl2e (animation D_800D57F4, BP paid once, at marker 0x4000 a 0x68 object kind 0x26 at (0, -0x40,
0), hand back at the animation end). The javelin (states D_ovl2f_800CB7EC): model D_ovl2f_800CBE04 at scale 0x2000,
model flag +0x2C \|= 0x10, yaw from Musashi, start through Musashi's model matrix, local velocity (0, 0, -0x180000),
timer 60 frames, a glow effect kind 0x4F owned by it, sound 0x8E5. Flight adds 0x4000 per frame to its local y
velocity (func_80162FF4), moves, and tests the map (func_801638A0): a floor hit (0x8000) zeroes its local x/z
velocity, any other surface sticks it (timer 0x20, next state). Each frame it tests actors (func_80163408 class 0x2C,
0x80, 0x200): result 1 spawns hit effect 0x1F at the hit point D_80126B18 (param from func_80013E94(&D_80114EB0)
\| 0x80000000) with sound 0x8E6, results 2 / 4 spawn effect 7 (param from D_80114EC8); the javelin keeps flying either
way (it pierces). When the flight timer ends it is freed at once; when stuck it blinks for 0x20 frames (model +4 bit
31 toggled on odd timer values) and is freed. It frees itself when ability 30 ends or y passes 0x400. Glow 0x4F
(handler deletes it once its owner is no longer kind 0x26): an intensity +0x12 that oscillates between random
targets, the javelin's model matrix copied into +0x38, drawn at (0, 0, -0x50) in the javelin's frame (the tip) as 4
camera-facing quads from D_ovl2f_800CB820 (centre colour (t, t, 0x70)) and 4 quads from D_ovl2f_800CB7FC (colour
(0x10, 0x10, 0xA0), z extent 0x50); every frame it spawns effect kind 0xE at its position with the same matrix (a
trail).

**Entry and dispatch.** Load entry func_ovl2f_800CAE0C (image record D_ovl2f_800CB85C); per-frame
func_ovl2f_800CAE34; steps D_ovl2f_800CB7D4 = {CAE78, CAEC0, CAF08} (3 used; the symbol spans 0x18 bytes);
javelin handler func_ovl2f_800CAF9C with D_ovl2f_800CB7EC = {CB028, CB118, CB2B4, CB338}; glow handler
func_ovl2f_800CB358 with D_ovl2f_800CB834 = {CB634, CB658}. Called from outside: CAE0C, CAE34 (D_80190170), CAF88
(probably D_80190364), CAF9C / CB358 (kind tables).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CAE0C | func_ovl2f_800CAE0C | load entry: queue image record D_ovl2f_800CB85C | H |
| 0x800CAE34 | func_ovl2f_800CAE34 | per-frame handler: a+0x44 \|= 8, D_ovl2f_800CB7D4[a+0x197](a) | H |
| 0x800CAE78 | func_ovl2f_800CAE78 | step 0: when not interrupted run CAEC0, step++ | H |
| 0x800CAEC0 | func_ovl2f_800CAEC0 | start: animation D_800D57F4, pay BP once, step++ | H |
| 0x800CAF08 | func_ovl2f_800CAF08 | throw step: marker 0x4000 spawns javelin kind 0x26; anim end hands back | H |
| 0x800CAF88 | func_ovl2f_800CAF88 | stop hook: a+0x44 &= ~2 | M |
| 0x800CAF9C | func_ovl2f_800CAF9C | javelin handler: run state, rebuild model matrix, free if ability != 30 or y > 0x400 | H |
| 0x800CB028 | func_ovl2f_800CB028 | javelin init: model x2, velocity -0x180000 z, timer 60, glow 0x4F, sound 0x8E5 | H |
| 0x800CB118 | func_ovl2f_800CB118 | flight: light gravity, wall sticks / floor stops x-z, pierce hits (0x1F + 0x8E6, or 7) | H |
| 0x800CB2B4 | func_ovl2f_800CB2B4 | stuck: blink the model (bit 31 of model +4) until the timer ends | H |
| 0x800CB338 | func_ovl2f_800CB338 | free the 0x68 object | H |
| 0x800CB358 | func_ovl2f_800CB358 | glow 0x4F handler: run D_ovl2f_800CB834 while the owner is kind 0x26, else delete | H |
| 0x800CB3BC | func_ovl2f_800CB3BC | draw the glow at a point of the owner's frame (4 billboard + 4 frame quads) | M |
| 0x800CB634 | func_ovl2f_800CB634 | glow init: delta +0x1C = 0x20, intensity 0, target 0x80, state++ | H |
| 0x800CB658 | func_ovl2f_800CB658 | glow step: flicker, copy javelin matrix, draw at the tip, spawn trail effect 0xE | M |

**Notes.** Twin of ovl2e (see there). The javelin handler tests the ability number (0x1E), the glow tests its owner's
kind instead. CB3BC returns s32 but returns nothing. D_ovl2f_800CB834 spans 0x28 bytes, only 2 states used.

### Slot 3: what the six packages are (read this before ovl30-ovl35)

**Conclusion: the six "Lumina" techniques selected in the pause menu: selection 1 = the plain Lumina charged spin
(ovl30) and selections 2-6 = five elemental techniques (ovl31-ovl35), which fit the five scrolls Earth, Water, Fire,
Wind, Sky in that order. The package-to-selection mapping is H for 3-6 and M (by elimination) for 1-2; the element
names are M (behaviour only, no names in the code).**

How the slot is driven (all H):
* D_80078EC0 & 0x7F is the selection. It is set only by the pause menu (engine_8013C98C.c:1527-1540: up to six
  choices, as many as the consecutive set game flags D_8018E5A8[0..5], confirm 0x40 -> func_8014AA04(n + 1), sound
  0x460 for choice 0 else 0x461) and by func_8014BEC0 (engine 4718: D_80078EC0 \|= 1 and flag 0x80 = 1, called from an
  init branch (case -1) at engine 10983); the menu's item check func_8013E958 reloads slot 3 when the selection
  changes (func_800D0488), and include/psyq.h's PC note calls this "the pause menu's Lumina Scroll change".
  Engine 1273 resets the selection to 1 on some clock event.
* Flag 0x80 (func_8014BEF8) is "has the second sword": it gates the pad-0x10 attacks (func_80149B54,
  func_8014A048) and shows weapon part 24 instead of hiding it (UpdateWeaponParts, engine 9063).
* A technique fires from the charge stance (func_8015EA3C, engine 13295, while pad 0x08 is held; func_8014A59C
  fills D_80078EBF by 3 or 6 per frame up to 0x80): func_80149D10 (engine 3625) needs D_80078EBF == 0x80, a
  selection, and a pad-0x10 press; then Musashi becomes kind 8 (func_80175150): states 0-1 are the engine's
  (D_80190B94), the starter func_80175218 calls D_80190B9C[sel - 1](a) (every package has 0x800CCB20, empty in
  32-35) and from state 2 func_80175268 calls D_80190BB4[sel - 1]() (ovl30 CCBA0, ovl31 CCB8C, ovl32-35 CCB28, each
  indexing its table with state - 2). No package pays BP; the charge gauge is the cost (the charge stance's exit
  hook func_8015ED6C zeroes it).
* Timed techniques keep a+0x1C8 as their timer; func_801619A4 / func_801619D0 / func_80161A00 / func_80161A30 /
  func_80161A60 (engine 14520-14562) return the selection / "selection == 3 / 4 / 5 / 6" while it runs.

Which package is which selection:
* 6 = ovl35 (H): func_80161A90 deletes effects 0x3B for selection 6; ovl35 alone spawns 0x3B and sets a+0x1C8
  (0xBA); the selection-6 glide path calls func_800CCB78 on the 0x3B effect, and only ovl35's 0x800CCB78 takes an
  effect (ovl32/33/34's start the technique on Musashi).
* 5 = ovl34 (H): func_800CCCC0 is called only in the case-5 branches; only ovl34 has a function there; its objects
  test func_80161A30.
* 4 = ovl33 (H): func_800CCF28 / func_800CCF58 are called only when selection 4 runs (func_80149954 case 4;
  func_80161A00 at engine 7054); ovl33 has both, and 0x8E0 is the sound ovl33 stops; its objects test func_80161A00.
  (ovl32 also has a 0x800CCF58, a scale setter that would write Musashi's bytes +0x18..0x1C: it cannot be the target.)
* 3 = ovl32 (H): func_800CCF68 (engine 7052, after func_801619D0) exists only in ovl32; its objects test
  func_801619D0; the engine's case 3 spawns the 0x68 kind 8 that ovl32 handles.
* 1 = ovl30 and 2 = ovl31 (M): the remaining two; ovl30 is the default loaded at field init (value 1, the value
  func_8014BEC0 grants with the sword) and has no timer; ovl31 has no selection test (it is not a timed buff).
  Consistent with D_800D384C = ovl30 + (n - 1).

Elements, evidence for: 2 = a leap and ground slam with a rumble and an expanding ground shockwave (Earth); 3 = a
protective barrier that absorbs some hit types, bluish shards, shots that leave rings, shards that react to
surface type 2 (Water, weakest); 4 = red orbiting sprites, a looping sound while a stream of growing shots pours
out (Fire); 5 = Musashi spins like a top with orbiting sprites and contact damage (Wind); 6 = gliding through the air
with a trail (Sky). Against / unknown: no text, names or element constants in the code; the colours of ovl32's
barrier and ovl34's sprites are in unreadable data; the order Earth, Water, Fire, Wind, Sky is the game's usual
listing, not something the code shows; the meaning of D_80078EC0 bit 0x80 (pad 0x100 toggles it, blocked while a
technique runs; when set the hold button enters kind 0x1C, func_80160818, instead of charging) is unknown.
What would settle it: the field overlay's D_800D384C, the stage tables D_80190B9C / D_80190BB4, the flag list
D_8018E5A8 against the story flags, and the pause menu's text for the six choices (all data, not in the
repository), or a run of the game.

### ovl30: slot-3 package, selection 1: the plain Lumina charged spin slash (no scroll) (first function 0x800CCB20, slot 3, code 0x274 = 628 B, 4 functions, 0 still asm)

**What it does.** A charged sword technique: Musashi winds up, his weapon grows and he spins one full turn
hitting all around. Start (CCB20): animation D_800D5360, a+0x234 (phase), a+0x238, a+0x23C (grow counter) = 0, a+0x244
= model yaw, a+0x246 (turned angle) = 0, a+0x248 (turn speed) = 0x100, effect kind 5 with d = 8 (the engine's
charged Fusion attack func_8015F080 spawns kind 5 with d = 7: a sword glow), func_80156648 (reset the attack
state), sound 0x450, func_80149020. Per frame (CCBF0): from the animation marker 0x4000 a+0x23C counts 1..7 and
CCD60 sets a+0xF6 = 0x1000 + t*0x400/7 (up to 0x1400; a+0xF6 is the weapon scale: func_8015F080 sets 0x19EB for the
charged Fusion attack, the cleanups func_801752BC / func_8015F260 reset 0x1000). Phase 0: once the wind-up
animation holds (a+0xB8 & 0x8000), each frame the speed grows by 0x1E, the turned angle by the speed, the yaw = saved
yaw + angle, and func_80155FB0(a, (D_80078EC0 & 0x7F) - 1) runs the sword hit check with attack-table entry sel-1 of
D_8018F534 (engine 9498 func_80156044); when the angle reaches 0x1000 the yaw is restored, a+0xB8 = 1, phase 1.
Phase 1 waits for the animation end and hands Musashi back. func_80161208 every frame. No BP, no timer: a one-shot.

**Entry and dispatch.** Start func_ovl30_800CCB20 (called by the engine's technique starter func_80175218,
engine 23198: D_80190B9C[sel-1](a)); per-frame func_ovl30_800CCBA0 (Musashi kind 8, states >= 2, via func_80175268
engine 23207: D_80190BB4[sel-1]()); state table D_ovl30_800CCD94 = {CCBF0} (1 entry, the whole data block). No
other outside caller.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl30_800CCB20 | start: wind-up animation, spin variables, glow effect 5 (d 8), sound 0x450 | H |
| 0x800CCBA0 | func_ovl30_800CCBA0 | per-frame: func_80149020; D_ovl30_800CCD94[state - 2](a) | H |
| 0x800CCBF0 | func_ovl30_800CCBF0 | the spin: grow the weapon, one accelerating turn with hit checks, wait, hand back | H |
| 0x800CCD60 | func_ovl30_800CCD60 | a+0xF6 (weapon scale) = 0x1000 + a+0x23C * 0x400 / 7 | H |

**Notes.** The state-2 dispatch is the shape of ovl32/33/34 0x800CCB28 (ovl31's lacks func_80149020). The hit uses
the selection (sel - 1) rather than a constant, the only package that reads D_80078EC0. a+0x234..0x248 are reused
as scratch by ovl31 (a+0x234 timer) and ovl34 (a+0x234..0x246). Selection 1 by elimination (see the conclusion);
it is also what the field loads by default and what func_8014BEC0 (flag 0x80) selects.

### ovl31: slot-3 package, selection 2: leap and ground slam with an expanding shockwave (Earth scroll candidate) (first function 0x800CCB20, slot 3, code 0xBBC = 3004 B, 23 functions, 0 still asm)

**What it does.** Musashi leaps, hangs at the top, slams down and the landing sends out a damaging ground
shockwave. Start (CCB20): animation 0xF of his table, func_801483E8, func_8014CBF8 (drop the link at a+0x174),
func_801474EC, local velocity 0, fall speed -0x120000 (up), a+0x234 = 150. States 2-5 (D_ovl31_800CD6DC): 2 rise
under gravity 0x1A000 with collisions (func_8014ED28 zeroes velocity on a ceiling, func_8016151C, func_801725A4)
until the fall speed turns positive, then fall speed 0x40000, animation D_800D53C0; 3 no gravity until that
animation ends, then animation D_800D5404; 4 fall until func_80161450 & 5 (landed): CCE24 = a+0x1C7 = 2
(func_8014B5C4), rumble sequence D_800D3414 (func_8013C9C4), 0x68 object kind 5 at Musashi (upper half), effect kind
2 with d = 1 (func_8014C010), sound 0x47D; timer 0x10; 5 a+0x44 \|= 2 until the timer ends, then hand back. Only on
map 0x306F, states 2-4 count a+0x234 down and hand Musashi back after 150 frames. Shockwave kind 5: sprite type 5
(func_8001CD50) whose ring data D_ovl31_800CD704 is a func_800233CC ring of radius 0x40 (0x30 when d != 0), matrix
D_ovl31_800CD744 = its rotation (tilt from Musashi +0x100 / +0x104, yaw from his model) turned 0x400 about X (laid
flat), colour fading with the timer; 16 frames, scale easing toward 0x5000, every 8th frame a kind-6 wave (index
+0x62 = 0..7) with sound 0x47E; every frame it hits all actors within 0x80 (class 0x22). Wave kind 6: rumble
D_800D3428, its own ring D_ovl31_800CD764[d] and matrix slot D_ovl31_800CD964[d] copied from the shockwave's, 0x20
frames expanding toward 0x5000 while its y rises and falls (base - amplitude * 2 * rsin(scale / 10)), amplitude =
the shockwave's timer at spawn.

**Entry and dispatch.** Start func_ovl31_800CCB20 (D_80190B9C[1]), per-frame func_ovl31_800CCB8C (D_80190BB4[1])
over D_ovl31_800CD6DC = {CCBCC, CCC88, CCD04, CCDC4}. Shockwave handler func_ovl31_800CCF14 with D_ovl31_800CD6EC =
{CCF50, CD054, CD1D4}; wave handler func_ovl31_800CD3C8 with D_ovl31_800CD6F8 = {CD404, CD57C, CD650}. No direct
engine call (the engine only calls 0x800CCB78 / CCCC0 / CCF28 / CCF58 / CCF68 under selections 3-6).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl31_800CCB20 | start: leap (fall speed -0x120000), animation 0xF, timer 150 | H |
| 0x800CCB8C | func_ovl31_800CCB8C | per-frame: D_ovl31_800CD6DC[state - 2]() | H |
| 0x800CCBCC | func_ovl31_800CCBCC | rise under gravity; at the apex fall speed 0x40000, animation D_800D53C0 | H |
| 0x800CCC88 | func_ovl31_800CCC88 | hang until the animation ends, then animation D_800D5404 | H |
| 0x800CCD04 | func_ovl31_800CCD04 | drop; on landing the quake (CCE24) and timer 0x10 | H |
| 0x800CCDC4 | func_ovl31_800CCDC4 | recover: a+0x44 \|= 2, hand back at the timer end | H |
| 0x800CCE24 | func_ovl31_800CCE24 | quake: a+0x1C7 = 2, rumble, shockwave kind 5, effect 2, sound 0x47D | H |
| 0x800CCEA0 | func_ovl31_800CCEA0 | a+0x234 = 150 | H |
| 0x800CCEAC | func_ovl31_800CCEAC | map 0x306F only: count a+0x234 down, hand back at 0 (returns 1) | H |
| 0x800CCF14 | func_ovl31_800CCF14 | shockwave kind-5 handler | H |
| 0x800CCF50 | func_ovl31_800CCF50 | shockwave init: ring sprite, matrix, tilt, timer 0x10 | H |
| 0x800CD054 | func_ovl31_800CD054 | shockwave step: waves every 8 frames (sound 0x47E), expand, damage | H |
| 0x800CD1D4 | func_ovl31_800CD1D4 | free | H |
| 0x800CD1F4 | func_ovl31_800CD1F4 | ring radius 0x40 / 0x30 (func_800233CC), colours 0 | H |
| 0x800CD258 | func_ovl31_800CD258 | ring outer colour = timer * 8 (fade) | H |
| 0x800CD27C | func_ovl31_800CD27C | build the ring matrix (rot X, Z, Y, then +0x400 about X) | H |
| 0x800CD31C | func_ovl31_800CD31C | hit every actor within 0x80 (class 0x22) | H |
| 0x800CD3C8 | func_ovl31_800CD3C8 | wave kind-6 handler | H |
| 0x800CD404 | func_ovl31_800CD404 | wave init: rumble, ring and matrix slot d, base y, amplitude, timer 0x20 | H |
| 0x800CD57C | func_ovl31_800CD57C | wave step: expand, rise and fall | H |
| 0x800CD650 | func_ovl31_800CD650 | free | H |
| 0x800CD670 | func_ovl31_800CD670 | wave ring radius 0x40, colour amplitude * 0xC | H |
| 0x800CD6D4 | func_ovl31_800CD6D4 | empty (per-frame colour hook, does nothing) | H |

**Notes.** CD31C is the actor-walk clone of ovl2e B3DC. CCB20's start sequence (func_8014CBF8, func_801474EC,
func_801477E8 negative) is the engine's jump start func_8015EE7C shape. a+0x1C7 = 2 equals the selection, as
ovl32 (3) and ovl34 (5) set theirs; func_8014B5D0 clears a+0x1C7 every frame (engine 1536), its readers are not in C.
Open: why map 0x306F needs the 150-frame cutoff; what effect kind 2 (d 1) is (camera shake?).

### ovl32: slot-3 package, selection 3: a timed barrier around Musashi plus held-button corkscrew shots (Water scroll candidate) (first function 0x800CCB20, slot 3, code 0x16C4 = 5828 B, 44 functions, 0 still asm)

**What it does.** Start (CCB78, first per-frame call): a+0x1C7 = 3, a 0x68 object kind 7 (lower half),
a+0x1C8 = 0xFF, Musashi handed back at once. Kind 7 is a barrier model (D_ovl32_800CEBEC, flags 0x40010000) on
Musashi (position = his model's translation, y - 0x20; matrix = own yaw x his model matrix, scaled): it grows from
0 by 0x100 per frame, then holds, easing its scale to 0x1000 or to 0x1400 while a+0x1C8 & 0x10 (a pulse), copies
Musashi's model hide bit (blinks with him), and counts a+0x1C8 down by 1 per frame (about 255 frames). The engine
treats the technique as active while a+0x1C8 != 0 and selection == 3 (func_801619D0): (1) in Musashi's damage
handler (engine 7049) a hit whose type func_80151880 accepts (types 27, 28, 15, 16, 31 -> 1, 11 -> 2, else bit 0x200
of a+0x3E) has its a+0x40 and a+0xF2 cleared (damage absorbed) and calls func_800CCF68 = break the barrier (kind 7
+0x60 = 1 -> state 3 -> freed), a+0x1C8 = 0 and a fast shard burst effect 0x39; (2) in the idle / jump states
(engine 11249 etc., case 3) the attack buttons run func_801498E0 (engine 3457), which spawns a 0x68 kind 8 at
(0, -0x1E, 0) instead of swinging; (3) while active, func_80150BC8 (engine 6761) spawns effect 0x34 on 7 of 8 frames.
Kind 8 is a shot emitter: while 0x80 / 0x10 is held, every 4 frames it tries 3 kind-9 shots (func_80146608, at most
12 alive, upper half, d = a running counter) with sound 0x747 (15-frame cooldown); on release it is freed. Kind 9:
sprite D_ovl32_800CE1E8 (uv 0x238, 0x180) from Musashi's model point, phase d * 0x555 (three shots 120 degrees
apart), orientation from Musashi +0x100..+0x104, velocity D_ovl32_800CE230, timer 0x20; it flies along its matrix
(func_80163194), corkscrews around its path (radius (0x20 - timer) * 2, phase += 0xE3), leaves a ring effect 0x27
every 4 frames and an effect 0x26 every frame, grows to 0x1000, hits actors (func_80163408 class 0x23); a hit or the
timer plays a 4-frame break animation (uv pairs D_ovl32_800CE210, scale += 0x555); on map 0x3067 touching an actor
of kind 0x200's mesh bounces it off (sound 0x990, falls 0x10 frames). When the technique ends for any reason the
barrier frees itself, spawns a slow shard burst 0x3A on Musashi and plays 0xA13. Shards: 18 particles with random
directions from the owner (y - 0x28), velocity << 11 (0x39) or << 8 (0x3A), drawn as small quads by func_80169A4C
in a blue tint (blue = c, red = green = c / 4), falling under gravity 0x10000; on landing on surface type 2 they
spawn effect 0x11 (if d > 0x1E00) and vanish, on other surfaces they fade there.

**Entry and dispatch.** Start func_ovl32_800CCB20 (empty), per-frame func_ovl32_800CCB28 over D_ovl32_800CE1E4 =
{CCB78}. Engine-called: func_ovl32_800CCF68 (engine 7052, func_8015126C, after func_801619D0 && func_80151880). Handlers:
kind 7 func_ovl32_800CCBE4 / D_ovl32_800CE1F4 = {CCCA0, CCD2C, CCDB0, CCE68}; kind 8 func_ovl32_800CCFC8 /
D_ovl32_800CE204 = {CD030, CD050, CD178}; kind 9 func_ovl32_800CD198 / D_ovl32_800CE220 = {CD1D4, CD2EC, CD494,
CD508}; effects func_ovl32_800CD948 / D_ovl32_800CE24C = {CD984, CDA0C} (probably 0x26), func_ovl32_800CDA44 /
D_ovl32_800CE254 = {CDA80, CDB4C} (0x27: its 8 ring buffers match d & 7), func_ovl32_800CDDC8 / D_ovl32_800CE25C =
{CDE04, CE004, CE134} (0x3A, inferred), func_ovl32_800CE188 / D_ovl32_800CE268 = {CDBA8, CDDA8, CE1C4} (0x39,
inferred: CDBA8's children advance through CDDA8 then CE004's state++ needs a third entry).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl32_800CCB20 | start: empty | H |
| 0x800CCB28 | func_ovl32_800CCB28 | per-frame: func_80149020; D_ovl32_800CE1E4[state - 2](a) | H |
| 0x800CCB78 | func_ovl32_800CCB78 | technique start: a+0x1C7 = 3, barrier kind 7, a+0x1C8 = 0xFF, hand back | H |
| 0x800CCBE4 | func_ovl32_800CCBE4 | barrier handler: state, hide bit; technique over: free, shards 0x3A, sound 0xA13 | H |
| 0x800CCCA0 | func_ovl32_800CCCA0 | barrier init: model D_ovl32_800CEBEC, scale 0, follow | H |
| 0x800CCD2C | func_ovl32_800CCD2C | barrier grow: scale +0x100 to 0x1000 | H |
| 0x800CCDB0 | func_ovl32_800CCDB0 | barrier hold: pulse 0x1000 / 0x1400, a+0x1C8 -= 1, free at 0 | H |
| 0x800CCE68 | func_ovl32_800CCE68 | free | H |
| 0x800CCE88 | func_ovl32_800CCE88 | follow Musashi: position, RotY x his model matrix, scale | H |
| 0x800CCF30 | func_ovl32_800CCF30 | if broken (+0x60): state 3, return 1 | H |
| 0x800CCF58 | func_ovl32_800CCF58 | model scale x = y = z = n | H |
| 0x800CCF68 | func_ovl32_800CCF68 | engine-called on a blocked hit: break barrier, a+0x1C8 = 0, shards 0x39 | H |
| 0x800CCFC8 | func_ovl32_800CCFC8 | emitter kind-8 handler; free when technique 3 ends | H |
| 0x800CD030 | func_ovl32_800CD030 | emitter init: +0x60 = 0, state++ | H |
| 0x800CD050 | func_ovl32_800CD050 | emitter: while held, 3 shots every 4 frames (max 12), sound 0x747 | H |
| 0x800CD178 | func_ovl32_800CD178 | free | H |
| 0x800CD198 | func_ovl32_800CD198 | shot kind-9 handler | H |
| 0x800CD1D4 | func_ovl32_800CD1D4 | shot init: sprite, start point, phase, orientation, velocity, timer 0x20 | H |
| 0x800CD2EC | func_ovl32_800CD2EC | shot flight: corkscrew, rings 0x27, trail 0x26, hit class 0x23, map 0x3067 bounce | H |
| 0x800CD494 | func_ovl32_800CD494 | shot break: uv frames from D_ovl32_800CE210, scale up, free at end | H |
| 0x800CD508 | func_ovl32_800CD508 | shot bounced: fall until timer, free | H |
| 0x800CD57C | func_ovl32_800CD57C | spawn ring effect 0x27 (at most 8, d = counter & 7) | H |
| 0x800CD5EC | func_ovl32_800CD5EC | save path point, corkscrew phase = d * 0x555 | H |
| 0x800CD63C | func_ovl32_800CD63C | corkscrew offset around the path point | H |
| 0x800CD758 | func_ovl32_800CD758 | position -> path point +0x58 | H |
| 0x800CD780 | func_ovl32_800CD780 | path point +0x58 -> position | H |
| 0x800CD7A8 | func_ovl32_800CD7A8 | build the travel matrix (+0x60..+0x64, then sprite rotation) | H |
| 0x800CD834 | func_ovl32_800CD834 | sprite scale 0 | H |
| 0x800CD848 | func_ovl32_800CD848 | sprite scale eases to 0x1000 | H |
| 0x800CD894 | func_ovl32_800CD894 | overlaps the mesh of an actor of kind 0x200 (func_80135260) | M |
| 0x800CD948 | func_ovl32_800CD948 | effect handler (2-frame sprite flash, probably 0x26) | M |
| 0x800CD984 | func_ovl32_800CD984 | flash init: sprite D_ovl32_800CE240 (type 0x21, uv 0x230, 0x1C0), timer 2 | H |
| 0x800CDA0C | func_ovl32_800CDA0C | flash: delete at timer | H |
| 0x800CDA44 | func_ovl32_800CDA44 | ring effect handler (0x27) | M |
| 0x800CDA80 | func_ovl32_800CDA80 | ring init: ring buffer d, random radius 0x20-0x3F, timer 4 | H |
| 0x800CDB4C | func_ovl32_800CDB4C | ring fade (byte +2 -= 8), delete at timer | H |
| 0x800CDBA8 | func_ovl32_800CDBA8 | fast shard burst: d = 0 spawns 18 children 0x39 and dies; child: face camera, timer 0x18 | H |
| 0x800CDDA8 | func_ovl32_800CDDA8 | wrapper -> CE004 | H |
| 0x800CDDC8 | func_ovl32_800CDDC8 | shard effect handler (0x3A, inferred) | M |
| 0x800CDE04 | func_ovl32_800CDE04 | slow shard burst: same as CDBA8 with 0x3A, velocity << 8 | H |
| 0x800CE004 | func_ovl32_800CE004 | shard fall: draw, gravity, land; surface type 2 -> effect 0x11 and delete | H |
| 0x800CE134 | func_ovl32_800CE134 | shard on ground: draw and fade, delete at timer | H |
| 0x800CE188 | func_ovl32_800CE188 | shard effect handler (0x39, inferred) | M |
| 0x800CE1C4 | func_ovl32_800CE1C4 | wrapper -> CE134 | H |

**Notes.** Clones: CCE88 = ovl33 CCE80 = ovl34 CD96C (follow); CD7A8 = ovl33 CD5DC = ovl34 CDF84 (travel matrix);
CCF58 has the same address as ovl33's func_ovl33_800CCF58 but a different role (the engine's CCF58 call is ovl33's).
CCBE4 is the shape of ovl33 CCC54 / ovl34 CD708 (state, hide bit, technique check). Data: D_ovl32_800CE230 shot
velocity, D_ovl32_800CE210 / CE212 break uv pairs (zero-terminated), D_ovl32_800CEBF4 8 ring buffers of 0x40,
D_ovl32_800CE268..D_ovl32_800CEBEC holds 0x984 bytes of unknown data after that table. Open: which effect kinds the
four effect handlers serve (only by spawn sites); what effect 0x34 and 0x11 are; why map 0x3067 is special.

### ovl33: slot-3 package, selection 4: a timed flame aura and a held-button flame stream (Fire scroll candidate) (first function 0x800CCB20, slot 3, code 0xB48 = 2888 B, 21 functions, 0 still asm)

**What it does.** Start (CCB78): sound 0x8DF, a 0x68 kind 0x10 and three kind 0x11 (d = 0, 1, 2), all lower half,
a+0x1C8 = 0xFF, hand back. Kind 0x10 is a model (D_ovl33_800CE048, flags 0x50020000) on Musashi that grows by
0x100 per frame to 0x1000 while its +0x60 is set and shrinks to 0 otherwise; +0x60 is set each frame by
func_800CCF28 and cleared by the handler. Its handler eases the shared yaw D_ovl33_800CE050 toward Musashi's
(func_80012ABC, step 0xA) and spends a+0x1C8 by 1 per frame (func_8014ACC0). Kind 0x11 are red sprites
(D_ovl33_800CD66C, uv 0x220, 0x168, colour 0xFF/0x40/0x40) orbiting Musashi (angle d << 10, offset D_ovl33_800CD6BC
turned by func_8012A758 + 0x400, bobbing), animated through 8 uv frames (D_ovl33_800CD690), scale 0x1000 + a+0x1C8
* 0x10, hitting actors (class 0x24); each hit costs a+0x1C8 -= 10. The engine side (selection 4 active, engine 11249
etc. case 4 -> func_80149954 engine 3476): while 0x80 / 0x10 is held, on the press it starts the loop sound 0x8E0,
each frame it calls func_800CCF28 (grow the kind-0x10 model) and spawns a 0x68 kind 0x12 at (0, -0x1E, 0) (upper);
when released it stops 0x8E0 (func_8002D4C8(4, 0x8E0)). Kind 0x12 is a red shot from Musashi's model point with yaw
D_ovl33_800CE050, local velocity (0, 0, -0x180000), timer 8 frames, cost a+0x1C8 -= 1 each, growing by 0x200 per
frame, hitting actors (class 0x24): a flame stream. In the damage handler (engine 7054) a hit of a type in
func_801518D8 (0x1B, 0x1C, 0xF, 0x10, 3, 0x13, 0x17) calls func_800CCF58 = stop 0x8E0 and a+0x1C8 = 0 (the
technique ends; the damage is not cancelled). When the technique ends every object frees itself (kind 0x10 also
stops 0x8E0; each orb leaves effect 3 with d 0x08880000, e 0x1800A000).

**Entry and dispatch.** Start func_ovl33_800CCB20 (empty), per-frame func_ovl33_800CCB28 over D_ovl33_800CD668 =
{CCB78}. Engine-called: func_ovl33_800CCF28 (engine 3499, func_80149954), func_ovl33_800CCF58 (engine 7055).
Handlers: kind 0x10 func_ovl33_800CCC54 / D_ovl33_800CD684 = {CCD2C, CCDD8, CCE60}; kind 0x11 func_ovl33_800CCFA8 /
D_ovl33_800CD6B0 = {CD010, CD0CC, CD1A8}; kind 0x12 func_ovl33_800CD328 / D_ovl33_800CD6C4 = {CD390, CD4BC, CD5BC}.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl33_800CCB20 | start: empty | H |
| 0x800CCB28 | func_ovl33_800CCB28 | per-frame: func_80149020; D_ovl33_800CD668[state - 2](a) | H |
| 0x800CCB78 | func_ovl33_800CCB78 | technique start: sound 0x8DF, aura kind 0x10, 3 orbs kind 0x11, a+0x1C8 = 0xFF | H |
| 0x800CCC54 | func_ovl33_800CCC54 | aura handler: state, hide bit, clear +0x60, ease yaw, spend 1; over: stop 0x8E0, free | H |
| 0x800CCD2C | func_ovl33_800CCD2C | aura init: model D_ovl33_800CE048, scale 0, follow, yaw | H |
| 0x800CCDD8 | func_ovl33_800CCDD8 | aura step: grow while +0x60, else shrink; follow | H |
| 0x800CCE60 | func_ovl33_800CCE60 | free | H |
| 0x800CCE80 | func_ovl33_800CCE80 | follow Musashi (clone of ovl32 CCE88) | H |
| 0x800CCF28 | func_ovl33_800CCF28 | engine-called while the attack is held: aura kind 0x10 +0x60 = 1 | H |
| 0x800CCF58 | func_ovl33_800CCF58 | engine-called on a cancelling hit: stop 0x8E0, a+0x1C8 = 0 | H |
| 0x800CCF84 | func_ovl33_800CCF84 | stop sound 0x8E0 (func_80147364(4, 0x8E0)) | H |
| 0x800CCFA8 | func_ovl33_800CCFA8 | orb kind-0x11 handler; leaves via CD1A8 when technique 4 ends | H |
| 0x800CD010 | func_ovl33_800CD010 | orb init: red sprite, angle d << 10, place | H |
| 0x800CD0CC | func_ovl33_800CD0CC | orb step: uv frames, scale by a+0x1C8, orbit, hit class 0x24 (hit costs 10) | H |
| 0x800CD1A8 | func_ovl33_800CD1A8 | effect 3 (puff) at the orb, free | H |
| 0x800CD204 | func_ovl33_800CD204 | orbit position around Musashi (y - 0x20) with bob; phase += 0x38 | M |
| 0x800CD328 | func_ovl33_800CD328 | shot kind-0x12 handler; free when technique 4 ends | H |
| 0x800CD390 | func_ovl33_800CD390 | shot init: red sprite at Musashi's point, yaw, velocity -0x180000 z, timer 8, cost 1 | H |
| 0x800CD4BC | func_ovl33_800CD4BC | shot flight: move, uv by a+0x1C8, grow 0x200, hit class 0x24 | H |
| 0x800CD5BC | func_ovl33_800CD5BC | free | H |
| 0x800CD5DC | func_ovl33_800CD5DC | travel matrix (clone of ovl32 CD7A8) | H |

**Notes.** ovl34 is built from the same parts: CCC54 ~ ovl34 CD708, CCD2C ~ CD7D8, CCDD8 ~ CD884, CCF28 ~ CDA14,
CCF58 ~ CDA44 (without the sound), the orbs ~ ovl34 kind 0x14, the shot CD390 / CD4BC ~ ovl34 CDD9C / CDEB4.
D_ovl33_800CE050 is the package's one mutable global (shared aim yaw). func_8012A758 is unknown (an angle; perhaps
the camera's). Unlike ovl31/32/34, ovl33 does not set a+0x1C7.

### ovl34: slot-3 package, selection 5: a timed spinning-top dash (Wind scroll candidate) (first function 0x800CCB20, slot 3, code 0x14F0 = 5360 B, 39 functions, 0 still asm)

**What it does.** Start (CCB78): sound 0x8E3, a+0x1C7 = 5, a 0x68 kind 0x13 and four kind 0x14 (d = 0..3), lower
half, a+0x1C8 = 0xFF, hand back. Kind 0x13: a model (part list D_ovl34_800CE8CC, func_8001C214) on Musashi spinning
+0x1C7 per frame, growing to 0x1000 or 0x1333 (random flicker) while its +0x60 is set (by the spin each held frame,
CDA14) and shrinking otherwise; its handler spends a+0x1C8 by 1 per frame and eases the yaw D_ovl34_800CE8D4. Kind
0x14: sprites (D_ovl34_800CE068, uv 0x234, 0x1C0, scale 0x2000) orbiting Musashi with per-object rotation vectors
D_ovl34_800CE08C[d] and offset D_ovl34_800CE0B8, spinning with random pauses. While selection 5 is active the
engine (idle / jump states, engine 11249, 11477, 11767, 12068, 12327, case 5) turns an attack press (func_80149A64)
into func_800CCCC0 = Musashi kind 0x21: animation D_ovl34_800CE010, yaw saved in a+0x244, spin speed a+0x246 =
0x200, sound 0x8E4. Every state first ends the spin if a+0x1C8 == 0 (CD240); the spin (CD494) keeps a+0x44 bit 2,
while 0x80 / 0x10 is held raises the speed by 8 (cap 0x200) and replays 0x8E4 each full turn, on release slows by
0x20 per frame, and hands Musashi back when the speed reaches 0. The stick steers with momentum (a+0x234..0x23C,
cap 0xB0000, decay 0x8000, model turned to the stick). Contact damage each frame: actors within 0x40 (class 0x25,
mask 0x10; a+0x1AB toggled each frame) and a recoil away from the last one hit (D_ovl34_800CE058 rotated by the
angle + 0x800). States (D_ovl34_800CE044): 0 init, 1 on the ground (jump button -> fall speed -0x160000, state 2;
no ground -> state 2; slope result 0x4000 -> slide), 2 in the air (gravity 0x1A000, land -> 1), 3 slide / recoil
(momentum from the slope vector D_801152B0 << 6, y 0x80000; landing -> timer 8, state 4), 4 move out the timer, then
slope / air / ground. The engine cancels the technique on any hit (engine 7057: a+0x1C8 = 0). A third object type
(handler CDD34, a forward shot, velocity -0x200000, timer 8, cost 1, class 0x23) has no spawner in C.

**Entry and dispatch.** Start func_ovl34_800CCB20 (empty), per-frame func_ovl34_800CCB28 over D_ovl34_800CE040 =
{CCB78}. Engine-called: func_ovl34_800CCCC0 (engine 11249, 11477, 11767, 12068, 12327). Musashi kind 0x21:
func_ovl34_800CCCF4 / D_ovl34_800CE044 = {CCD30, CCDC8, CCEEC, CCFDC, CD0DC}; CD1F4 is probably its exit hook (the
D_8018FBA8 slot) and CCCF4 its per-frame handler, both through stage tables. Handlers: kind 0x13 func_ovl34_800CD708
/ D_ovl34_800CE080 = {CD7D8, CD884, CD94C}; kind 0x14 func_ovl34_800CDA4C / D_ovl34_800CE0AC = {CDAB4, CDBA4,
CDBD4}; shot func_ovl34_800CDD34 / D_ovl34_800CE0C0 = {CDD9C, CDEB4, CDF64}.

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl34_800CCB20 | start: empty | H |
| 0x800CCB28 | func_ovl34_800CCB28 | per-frame: func_80149020; D_ovl34_800CE040[state - 2](a) | H |
| 0x800CCB78 | func_ovl34_800CCB78 | technique start: sound 0x8E3, a+0x1C7 = 5, top kind 0x13, 4 orbs kind 0x14, timer 0xFF | H |
| 0x800CCC8C | func_ovl34_800CCC8C | kind 0x21 and straight to init (no caller in C) | M |
| 0x800CCCC0 | func_ovl34_800CCCC0 | engine-called on an attack press: Musashi kind 0x21, run state 0 | H |
| 0x800CCCF4 | func_ovl34_800CCCF4 | kind-0x21 dispatcher D_ovl34_800CE044[state] | H |
| 0x800CCD30 | func_ovl34_800CCD30 | state 0: wrapper -> CCD50 | H |
| 0x800CCD50 | func_ovl34_800CCD50 | spin init: animation, save yaw, speed 0x200, zero velocity, sound 0x8E4 | H |
| 0x800CCDB0 | func_ovl34_800CCDB0 | clear momentum a+0x234..0x23C, state = 1 | H |
| 0x800CCDC8 | func_ovl34_800CCDC8 | ground spin: timeout, steer, spin, hit + recoil, slope / fall / jump | H |
| 0x800CCEB8 | func_ovl34_800CCEB8 | jump: fall speed -0x160000, state 2 | H |
| 0x800CCEEC | func_ovl34_800CCEEC | air spin: gravity, land -> state 1, slope -> slide | H |
| 0x800CCFA8 | func_ovl34_800CCFA8 | slide start: momentum from slope vector D_801152B0, y 0x80000, state 3 | H |
| 0x800CCFDC | func_ovl34_800CCFDC | slide / recoil move: gravity, landing -> timer 8, state 4 | H |
| 0x800CD0DC | func_ovl34_800CD0DC | after landing: momentum until timer, then slope / jump arc / ground | M |
| 0x800CD1F4 | func_ovl34_800CD1F4 | exit: UpdateFlag10Part21, ClearDisplayFlag20, face 0x11, clear bit 0x1000 | M |
| 0x800CD240 | func_ovl34_800CD240 | if a+0x1C8 == 0 hand back, return 1 | H |
| 0x800CD288 | func_ovl34_800CD288 | stick steering with momentum (cap 0xB0000, decay 0x8000) | H |
| 0x800CD494 | func_ovl34_800CD494 | spin speed / yaw: held -> faster, released -> slower, 0 -> hand back (returns 1) | H |
| 0x800CD5CC | func_ovl34_800CD5CC | contact damage to actors within 0x40 (class 0x25), returns last hit | H |
| 0x800CD6A4 | func_ovl34_800CD6A4 | recoil momentum away from the hit actor | H |
| 0x800CD708 | func_ovl34_800CD708 | top kind-0x13 handler: state, hide bit, clear +0x60, ease yaw, spend 1; free when over | H |
| 0x800CD7D8 | func_ovl34_800CD7D8 | top init: model D_ovl34_800CE8CC, scale 0, follow | H |
| 0x800CD884 | func_ovl34_800CD884 | top step: grow while +0x60 (0x1000 / 0x1333), else shrink; spin | H |
| 0x800CD94C | func_ovl34_800CD94C | free | H |
| 0x800CD96C | func_ovl34_800CD96C | follow Musashi (clone of ovl32 CCE88) | H |
| 0x800CDA14 | func_ovl34_800CDA14 | top kind 0x13 +0x60 = 1 | H |
| 0x800CDA44 | func_ovl34_800CDA44 | a+0x1C8 = 0 (no caller in C) | M |
| 0x800CDA4C | func_ovl34_800CDA4C | orb kind-0x14 handler; free when technique 5 ends | H |
| 0x800CDAB4 | func_ovl34_800CDAB4 | orb init: sprite, rotation vector D_ovl34_800CE08C[d], place | H |
| 0x800CDBA4 | func_ovl34_800CDBA4 | orb step: orbit + spin | H |
| 0x800CDBD4 | func_ovl34_800CDBD4 | free | H |
| 0x800CDBF4 | func_ovl34_800CDBF4 | orbit position: angle += speed, offset D_ovl34_800CE0B8 around Musashi | H |
| 0x800CDCA8 | func_ovl34_800CDCA8 | sprite yaw spin with random pauses | M |
| 0x800CDD34 | func_ovl34_800CDD34 | shot handler (kind unknown, no spawner in C); free when technique 5 ends | M |
| 0x800CDD9C | func_ovl34_800CDD9C | shot init: sprite (uv 0x200, 0x100), velocity -0x200000 z, timer 8, cost 1 | H |
| 0x800CDEB4 | func_ovl34_800CDEB4 | shot flight: move, grow 0x100, hit class 0x23 | H |
| 0x800CDF64 | func_ovl34_800CDF64 | free | H |
| 0x800CDF84 | func_ovl34_800CDF84 | travel matrix (clone of ovl32 CD7A8) | H |

**Notes.** Clones listed under ovl33. CCCC0 / CCC8C have the `func_80147078(a, K); F(a)` shape of ovl29's engine
entries. CD1F4 has the shape of the engine's kind-8 cleanup func_801752BC (engine 23213: weapon scale, flag
0x20000000 off, face 0x11, bit 2 off). Data: D_ovl34_800CE058 recoil vector, D_ovl34_800CE068 sprite definition,
D_ovl34_800CE08C 4 rotation vectors, D_ovl34_800CE0B8 orbit offset, D_ovl34_800CE8D4 shared yaw. Open: the
spawner and kind of the CDD34 shot (dead code copied from ovl33's kind 0x12?), and CCC8C / CDA44's callers.

### ovl35: slot-3 package, selection 6: a timed glide with a light trail (Sky scroll candidate) (first function 0x800CCB20, slot 3, code 0xBA8 = 2984 B, 12 functions, 2 still asm)

**What it does.** Per-frame first call (CCB28): effect kind 0x3B on Musashi, a+0x1C8 = 0xBA (186 frames), hand back.
The glide itself is engine code: in the jump/fall state func_8015AE2C (engine 11715), when func_80161A60 (selection 6
and a+0x1C8 != 0), the jump button (0x40) is held and Musashi is falling (a+0x34 >= 0), his velocity a+0x50..0x58
follows the stick (cap 0xBA000, decay 0x8000), animation range 0xF-0x12, the 0x3B effect found with func_8014C050
gets func_800CCB78 every frame (engine 11916), and every 32 frames of a+0x1C8 an effect 0x3C is spawned; jumping
while active plays 0x8E1 (engine ~14290). func_80161A90 (engine 14565, every frame) counts a+0x1C8 down for
selection 6 and deletes all 0x3B effects at 0 (func_8014AC10); any hit ends it (engine 7060). The 0x3B effect is a
trail: its init deletes other 0x3B effects and clears a 0xC4-byte ring buffer D_ovl35_800CD6E0 (4 header bytes:
active, head index, count, brightness; 16 entries of two points); on a frame where CCB78 flagged it (+0x2C) it adds
a segment (CCDE8(o, 1, 0x37), asm) and draws the trail (CCBC0: POLY_G4 strips between consecutive entries,
brightness falling by 0x10 per segment, red = b, green = blue = b / 2, identity matrix), otherwise it clears the buffer
and resets (CCDE8(o, 0, 0)). A second effect (handler CD494) is a ring sprite (type 5, ring data D_ovl35_800CD7A4,
colours 0 / 0x40 / 0x50, its matrix at o+0x38, sprite +0x1E = -0x7400) updated by CD314 (asm): probably the 0x3C
spawned every 32 frames.

**Entry and dispatch.** Start func_ovl35_800CCB20 (empty), per-frame func_ovl35_800CCB28 (no table). Engine-called:
func_ovl35_800CCB78 (engine 11916, on the effect of kind 0x3B). Handlers: 0x3B func_ovl35_800CCB84 /
D_ovl35_800CD6C8 = {CD4D0, CD58C}; func_ovl35_800CD494 / D_ovl35_800CD6D8 = {CD5F8, ?} (ring; 2 entries);
func_ovl35_800CD458 / D_ovl35_800CD6D0 (2 entries, contents and kind unknown).

| Address | Current name | Purpose | Conf. |
|---|---|---|---|
| 0x800CCB20 | func_ovl35_800CCB20 | start: empty | H |
| 0x800CCB28 | func_ovl35_800CCB28 | technique start: trail effect 0x3B, a+0x1C8 = 0xBA, hand back | H |
| 0x800CCB78 | func_ovl35_800CCB78 | engine-called on the 0x3B effect each gliding frame: +0x2C = 1 | H |
| 0x800CCB84 | func_ovl35_800CCB84 | trail effect 0x3B handler | H |
| 0x800CCBC0 | func_ovl35_800CCBC0 | draw the trail ring buffer as fading quads; returns the segment count | H |
| 0x800CCDE8 | func_ovl35_800CCDE8 | asm, not matched: add (1, brightness) or reset (0, 0) a trail segment | M |
| 0x800CD314 | func_ovl35_800CD314 | asm, not matched: update the ring sprite (init calls it, then probably state 1) | L |
| 0x800CD458 | func_ovl35_800CD458 | effect handler over D_ovl35_800CD6D0 (kind unknown) | M |
| 0x800CD494 | func_ovl35_800CD494 | ring effect handler over D_ovl35_800CD6D8 (probably 0x3C) | M |
| 0x800CD4D0 | func_ovl35_800CD4D0 | trail init: delete other 0x3B, clear buffer, reset, state++ | H |
| 0x800CD58C | func_ovl35_800CD58C | trail step: flagged -> add segment and draw, clear flag; else clear buffer | H |
| 0x800CD5F8 | func_ovl35_800CD5F8 | ring init: sprite type 5, ring data, matrix at o+0x38, CD314, state++ | H |

**Notes.** The asm pair uses what the C does not (abil/symbol_addrs_ovl35.txt): func_80148534 (two points of
Musashi's model, as the engine's charge effect func_8016A08C uses it), func_80149350, func_80165FA4 (rotate two
vectors by a model's scale matrix), func_800233CC (ring), D_800AE620, D_8011F758 / D_8011F75C (the 2 x 0x2C list
at D_8011F750, func_801468C8), func_80147324 (a sound). That fits CCDE8 = sample two model points into the trail and
CD314 = build the ring. ovl35 is the only package whose technique is mostly engine code. Open: the D_ovl35_800CD6D0
handler's kind and entries.

## 6. Naming proposals

Proposals only: nothing in src/, include/ or the symbol files was renamed. Only symbols that still have splat's
generic names are listed, and only where the evidence is H or a strong M (the package sections give the rest).
Package-local names carry the ability (or, for slot 3, the technique) as a prefix; the prefixes for slot 3 use the
behaviour (ovl30 Lumina, ovl31 Slam / Shockwave, ovl32 Barrier, ovl33 Flame, ovl34 Spin, ovl35 Glide) because the
scroll names are only M. Common suffixes: `_QueueImages`
(the image entry), `_Update` (the button template; for an object, its handler), `_Start`, `_Step...`, `_Cleanup`
(the stop hook, M where only its position says so), `_States` / `_Steps` (the tables). Where two read-throughs
proposed a name for the same engine symbol, the first is kept and the other noted.

### 6a. Package symbols

| Package | Address | Current name | Proposed name | Evidence |
|---|---|---|---|---|
| ovl13 | 0x800CAE0C | func_ovl13_800CAE0C | Stun_QueueImages | three func_800183E0 calls (every package's entry: Pkg_QueueImages) |
| ovl13 | 0x800CAE54 | func_ovl13_800CAE54 | Stun_Update | template body |
| ovl13 | 0x800CAE98 | func_ovl13_800CAE98 | Stun_Step0Wait | func_80161104 then start |
| ovl13 | 0x800CAEE0 | func_ovl13_800CAEE0 | Stun_Step1Start | anim, face 0x15, sound, pay, rumble |
| ovl13 | 0x800CAF68 | func_ovl13_800CAF68 | Stun_Step2Swing | markers, func_80155FD4, end at 0x8000 |
| ovl13 | 0x800CB018 | func_ovl13_800CB018 | Stun_Cleanup | resets the scales the steps ramp (M) |
| ovl13 | 0x800CB05C | func_ovl13_800CB05C | Stun_RampScale | phase 1 up / 2 down on 0xC0, 0x1B8, 0x1BA |
| ovl13 | 0x800CB0E8 | func_ovl13_800CB0E8 | Stun_SpawnOnActor | spawns kind 0x15 owned by arg, records +0x36 |
| ovl13 | 0x800CB370 | func_ovl13_800CB370 | Stun_EffectAUpdate | ability-7 dispatcher, D_ovl13_800CB908 |
| ovl13 | 0x800CB510 | func_ovl13_800CB510 | Stun_EffectBUpdate | ability-7 dispatcher, D_ovl13_800CB914 |
| ovl13 | 0x800CB6E4 | func_ovl13_800CB6E4 | Stun_FollowerEmit | tracks owner's head, spawns 14 children |
| ovl13 | 0x800CB7F0 | func_ovl13_800CB7F0 | Stun_SpriteAnimStep | func_80128ED8, free when done |
| ovl13 | 0x800CB830 | D_ovl13_800CB830 | Stun_SwingAnim | func_80154274 argument |
| ovl13 | 0x800CB880 | D_ovl13_800CB880 | Stun_StepTable | indexed by a+0x197 |
| ovl14 | 0x800CAE34 | func_ovl14_800CAE34 | Perfume_Update | template |
| ovl14 | 0x800CAEB0 | func_ovl14_800CAEB0 | Perfume_Step1Start | pay once, spawn 0xA, sound 0x475 |
| ovl14 | 0x800CAF20 | func_ovl14_800CAF20 | Perfume_Step2WaitTimer | D_80078EC8 == 0 -> func_80165A20 |
| ovl14 | 0x800CAF54 | func_ovl14_800CAF54 | Perfume_CloudUpdate | state dispatcher for kind 0xA |
| ovl14 | 0x800CAF90 | func_ovl14_800CAF90 | Perfume_DrawCloud | 4-quad billboard fan, size o+0x28 |
| ovl14 | 0x800CB164 | func_ovl14_800CB164 | Perfume_CloudStart | master / puff split |
| ovl14 | 0x800CB254 | func_ovl14_800CB254 | Perfume_PuffGrow | 10 frames, takes owner velocity |
| ovl14 | 0x800CB358 | func_ovl14_800CB358 | Perfume_PuffDrift | pulse + drift 0x20 frames |
| ovl14 | 0x800CB470 | func_ovl14_800CB470 | Perfume_PuffFade | shrink, free |
| ovl14 | 0x800CB4D8 | func_ovl14_800CB4D8 | Perfume_CloudEmit | puff every 0x18 frames |
| ovl14 | 0x800CB5BC | D_ovl14_800CB5BC | Perfume_StepTable | template table |
| ovl14 | 0x800CB5C8 | D_ovl14_800CB5C8 | Perfume_FanVerts | s8 table read by CAF90 |
| ovl14 | 0x800CB5DC | D_ovl14_800CB5DC | Perfume_CloudStates | CAF54's table |
| ovl15 | 0x800CAF0C | func_ovl15_800CAF0C | Gunshot_Step2Draw | anim end -> fire or put away |
| ovl15 | 0x800CAF9C | func_ovl15_800CAF9C | Gunshot_Step3Fire | marker 0x4000 fire, repeat while held |
| ovl15 | 0x800CB140 | func_ovl15_800CB140 | Gunshot_Step4Holster | hand back at anim end |
| ovl15 | 0x800CB1C0 | func_ovl15_800CB1C0 | Gunshot_BulletUpdate | 0x68 kind 2 dispatcher |
| ovl15 | 0x800CB21C | func_ovl15_800CB21C | Gunshot_BulletInit | model, rotation, velocity, timer 16 |
| ovl15 | 0x800CB2E0 | func_ovl15_800CB2E0 | Gunshot_BulletFly | sweep type 0x10, sparks |
| ovl15 | 0x800CB494 | func_ovl15_800CB494 | Gunshot_FlashUpdate | effect 0xF dispatcher |
| ovl15 | 0x800CB4F0 | func_ovl15_800CB4F0 | Gunshot_FlashInit | flash model, spawns 0x13 |
| ovl15 | 0x800CB6FC | func_ovl15_800CB6FC | Gunshot_DrawFlashFan | XZ fan |
| ovl15 | 0x800CB830 | func_ovl15_800CB830 | Gunshot_GlowUpdate | effect 0x13 dispatcher |
| ovl15 | 0x800CB88C | func_ovl15_800CB88C | Gunshot_GlowInit | billboard, 0xC0 |
| ovl15 | 0x800CB988 | func_ovl15_800CB988 | Gunshot_DrawGlowFan | XY fan |
| ovl15 | 0x800CBAE0 | D_ovl15_800CBAE0 | Gunshot_HolsterAnim | set when released |
| ovl15 | 0x800CBB00 | D_ovl15_800CBB00 | Gunshot_FireAnim | set when the button is held |
| ovl15 | 0x800CBB24 | D_ovl15_800CBB24 | Gunshot_StepTable | 5 steps |
| ovl16 | 0x800CAE8C | func_ovl16_800CAE8C | Depress_Step1Start | pay once, spawn 0x4B |
| ovl16 | 0x800CAEF4 | func_ovl16_800CAEF4 | Depress_Step2WaitTimer | as ovl14 CAF20 |
| ovl16 | 0x800CAF28 | func_ovl16_800CAF28 | Depress_CloudUpdate | ability-1 dispatcher |
| ovl16 | 0x800CAF84 | func_ovl16_800CAF84 | Depress_DrawCloud | blue fan |
| ovl16 | 0x800CB158 | func_ovl16_800CB158 | Depress_CloudStart | as ovl14 CB164 |
| ovl16 | 0x800CB228 | func_ovl16_800CB228 | Depress_PuffGrow | as ovl14 CB254 |
| ovl16 | 0x800CB304 | func_ovl16_800CB304 | Depress_PuffDrift | as ovl14 CB358 |
| ovl16 | 0x800CB400 | func_ovl16_800CB400 | Depress_PuffFade | as ovl14 CB470 |
| ovl16 | 0x800CB458 | func_ovl16_800CB458 | Depress_CloudEmit | as ovl14 CB4D8 |
| ovl16 | 0x800CB51C | D_ovl16_800CB51C | Depress_StepTable | template table |
| ovl16 | 0x800CB528 | D_ovl16_800CB528 | Depress_FanVerts | CAF84's table |
| ovl16 | 0x800CB53C | D_ovl16_800CB53C | Depress_CloudStates | CAF28's table |
| ovl17 | 0x800CAEC0 | func_ovl17_800CAEC0 | Sleepy_Step1Start | save stats, sound, spawn 0x20 |
| ovl17 | 0x800CAF2C | func_ovl17_800CAF2C | Sleepy_Step2Hold | meter = 0, restore at end |
| ovl17 | 0x800CAF7C | func_ovl17_800CAF7C | Sleepy_Cleanup | sound command 4 on 0x47C (M) |
| ovl17 | 0x800CAFA0 | func_ovl17_800CAFA0 | Sleepy_MarkOrbit | child orbit |
| ovl17 | 0x800CB1CC | func_ovl17_800CB1CC | Sleepy_MarksStart | master spawns 4, child sprite |
| ovl17 | 0x800CB2CC | func_ovl17_800CB2CC | Sleepy_MarksFollow | master over the head |
| ovl18 | 0x800CAFB4 | func_ovl18_800CAFB4 | Satiate_SpawnIcons | spawn 0x23 master |
| ovl18 | 0x800CAFE0 | func_ovl18_800CAFE0 | Satiate_IconStart | master ring / child icon + ring |
| ovl18 | 0x800CB5F4 | D_ovl18_800CB5F4 | Satiate_IconCoords | 8 s16 pairs for func_8001CC3C |
| ovl19 | 0x800CAF08 | func_ovl19_800CAF08 | Shrink_Step2Fire | spawns the 4 shots + ring |
| ovl19 | 0x800CB0C8 | func_ovl19_800CB0C8 | Shrink_Step3Flash | light set 16 frames |
| ovl19 | 0x800CB1A0 | func_ovl19_800CB1A0 | Shrink_UpdateLights | D_ovl19_800CC580 from the frame counter |
| ovl19 | 0x800CB2C8 | func_ovl19_800CB2C8 | Shrink_ShotUpdate | 0x68 kind 4 dispatcher |
| ovl19 | 0x800CB4C8 | func_ovl19_800CB4C8 | Shrink_TrailInit | 20-point history |
| ovl19 | 0x800CBC0C | func_ovl19_800CBC0C | Shrink_ShotHit | hit type 0x1E within 0x40 |
| ovl19 | 0x800CBD0C | func_ovl19_800CBD0C | Shrink_RingUpdate | 0x68 kind 0xF dispatcher |
| ovl19 | 0x800CC580 | D_ovl19_800CC580 | Shrink_LightSet | given to model +0x80 (M) |
| ovl19 | 0x800CC5B0 | D_ovl19_800CC5B0 | Shrink_TrailPoints | 4 x 20 SVECTOR |
| ovl1a | 0x800CAF6C | func_ovl1a_800CAF6C | Hop_Enter | kind 0x1F + dispatch; engine func_80165770 |
| ovl1a | 0x800CAFA0 | func_ovl1a_800CAFA0 | Hop_KindUpdate | kind 0x1F state dispatcher |
| ovl1a | 0x800CB034 | func_ovl1a_800CB034 | Hop_Air | air control, bounce, end |
| ovl1a | 0x800CB148 | func_ovl1a_800CB148 | Hop_Cleanup | unlocks the camera height CB17C locks (M) |
| ovl1a | 0x800CB17C | func_ovl1a_800CB17C | Hop_Jump | one hop |
| ovl1b | 0x800CAF38 | func_ovl1b_800CAF38 | Mint_Step2Hold | meter = max, restore at end |
| ovl1b | 0x800CB478 | func_ovl1b_800CB478 | Mint_RingEmit | child every 0x20 frames |
| ovl1c | 0x800CAEE8 | func_ovl1c_800CAEE8 | Antidote_Cure | func_8014B2F8 + effect 0x41 |
| ovl1c | 0x800CAFAC | func_ovl1c_800CAFAC | Antidote_KindUpdate | kind 0x22 dispatcher |
| ovl1c | 0x800CB10C | func_ovl1c_800CB10C | Antidote_RingUpdate | 0x68 kind 0x1C dispatcher |
| ovl1c | 0x800CBB38 | func_ovl1c_800CBB38 | Antidote_DrawSparkle | two diamonds |
| ovl1d | 0x800CAEF8 | func_ovl1d_800CAEF8 | CutHeal_Step2Heal | func_8014BB24(a, 10, 1) |
| ovl1f | 0x800CAE14 | func_ovl1f_800CAE14 | Bowl_QueueImages | three func_800183E0 calls (H) |
| ovl1f | 0x800CAE5C | func_ovl1f_800CAE5C | Bowl_Update | template shape (H) |
| ovl1f | 0x800CAED8 | func_ovl1f_800CAED8 | Bowl_Start | anim, gauge, pay, timer (H) |
| ovl1f | 0x800CAF7C | func_ovl1f_800CAF7C | Bowl_StepCharge | power 0..0x50..0, release on 0x20 (H) |
| ovl1f | 0x800CB028 | func_ovl1f_800CB028 | Bowl_Release | closes the gauge, next step (H) |
| ovl1f | 0x800CB068 | func_ovl1f_800CB068 | Bowl_StepThrow | spawns kind 0xA at marker 0x4000 (H) |
| ovl1f | 0x800CB0E4 | func_ovl1f_800CB0E4 | Bowl_StepWaitBall | waits for no kind 0xA (H) |
| ovl1f | 0x800CB1A0 | func_ovl1f_800CB1A0 | Bowl_BallUpdate | kind-0xA handler (H) |
| ovl1f | 0x800CB23C | func_ovl1f_800CB23C | Bowl_BallInit | model, position, speed, timer (H) |
| ovl1f | 0x800CB6CC | func_ovl1f_800CB6CC | Bowl_BallDelete | puff, stop sound, free (H) |
| ovl1f | 0x800CB760 | func_ovl1f_800CB760 | Bowl_PlaySoundOnce | sound only on change of +0x60 (H) |
| ovl1f | 0x800CB7B0 | func_ovl1f_800CB7B0 | Bowl_IsOffScreen | projection bounds test (H) |
| ovl1f | 0x800CB848 | func_ovl1f_800CB848 | Bowl_GaugeUpdate | kind-0x27 handler (H) |
| ovl1f | 0x800CBB70 | func_ovl1f_800CBB70 | Bowl_SpawnGauge | func_801466B4(0x27, ...) (H) |
| ovl1f | 0x800CBBA0 | func_ovl1f_800CBBA0 | Bowl_CloseGauge | state 3 or kill (H) |
| ovl1f | 0x800CBBF8 | func_ovl1f_800CBBF8 | Bowl_KillGauges | kill-all kind 0x27 (H) |
| ovl1f | 0x800CBE7C | D_ovl1f_800CBE7C | Bowl_Steps | template table (H) |
| ovl1f | 0x800CBEBC | D_ovl1f_800CBEBC | Bowl_BallStates | CB1A0's table (H) |
| ovl1f | 0x800CBF2C | D_ovl1f_800CBF2C | Bowl_GaugeStates | CB848's table (H) |
| ovl20 | 0x800CAE44 | func_ovl20_800CAE44 | Firefly_Update | template (H) |
| ovl20 | 0x800CAF68 | func_ovl20_800CAF68 | Firefly_StepActive | duration wait, light target (H) |
| ovl20 | 0x800CB010 | func_ovl20_800CB010 | Firefly_StepEnd | ends when no glow left (H) |
| ovl20 | 0x800CB098 | func_ovl20_800CB098 | Firefly_SetLightTarget | 0x15C actor +0xCC = object / Musashi (H) |
| ovl20 | 0x800CB108 | func_ovl20_800CB108 | Firefly_ClearLightTarget | +0xCC = 0 (H) |
| ovl20 | 0x800CB134 | func_ovl20_800CB134 | Firefly_GlowUpdate | kind-0xB handler (H) |
| ovl20 | 0x800CB5F4 | func_ovl20_800CB5F4 | Firefly_FollowMusashi | func_80146EC0 with two offsets (H) |
| ovl20 | 0x800CB62C | func_ovl20_800CB62C | Firefly_RayUpdate | kind-0xC handler (H) |
| ovl20 | 0x800CB900 | func_ovl20_800CB900 | Firefly_DrawRay | screen GT3 draw (H) |
| ovl20 | 0x800CBB10 | D_ovl20_800CBB10 | Firefly_Steps | template table (H) |
| ovl21 | 0x800CAE44 | func_ovl21_800CAE44 | Sublime_Update | template (H) |
| ovl21 | 0x800CAF90 | func_ovl21_800CAF90 | Sublime_MusashiUpdate | kind-0x20 state dispatch (H) |
| ovl21 | 0x800CB06C | func_ovl21_800CB06C | Sublime_StateLieDown | rot.x to 0xC00 (H) |
| ovl21 | 0x800CB1A0 | func_ovl21_800CB1A0 | Sublime_StateWait | button / duration end (H) |
| ovl21 | 0x800CB270 | func_ovl21_800CB270 | Sublime_SpiritUpdate | kind-0xD handler (H) |
| ovl21 | 0x800CB2CC | func_ovl21_800CB2CC | Sublime_SpiritInit | spirit state 0 (H) |
| ovl21 | 0x800CBA44 | func_ovl21_800CBA44 | Sublime_ProjectQuad | RTPT / RTPS into a stack prim (H) |
| ovl21 | 0x800CBCB4 | func_ovl21_800CBCB4 | Sublime_ClampToMap | per-map box clamp (H) |
| ovl21 | 0x800CC140 | D_ovl21_800CC140 | Sublime_MusashiStates | CAF90's table (H) |
| ovl22 | 0x800CAE44 | func_ovl22_800CAE44 | BO_Update | template (H) |
| ovl22 | 0x800CAEC0 | func_ovl22_800CAEC0 | BO_Start | pay, cloud, sound, four flies (H) |
| ovl22 | 0x800CB32C | func_ovl22_800CB32C | BO_StopSound | func_80147364(4, 0x838) (M: hook role) |
| ovl22 | 0x800CB350 | func_ovl22_800CB350 | BO_FlyUpdate | kind-0xE handler (H) |
| ovl22 | 0x800CB6D4 | func_ovl22_800CB6D4 | BO_FlyOrbitStep | ellipse orbit, 1 per turn (H) |
| ovl22 | 0x800CB8A0 | func_ovl22_800CB8A0 | BO_DrawCloud | stack-quad fan draw (H) |
| ovl22 | 0x800CBA74 | func_ovl22_800CBA74 | BO_CloudUpdate | effect 0x35 handler (H) |
| ovl22 | 0x800CBDD0 | func_ovl22_800CBDD0 | BO_CloudEmitter | a puff every 25 frames (H) |
| ovl22 | 0x800CBECC | D_ovl22_800CBECC | BO_CloudVerts | s8 point table of the fan (H) |
| ovl23 | 0x800CAE64 | func_ovl23_800CAE64 | RipOff_Update | template (H) |
| ovl23 | 0x800CAF90 | func_ovl23_800CAF90 | RipOff_PieceInit | effect state 0 (H) |
| ovl23 | 0x800CB460 | func_ovl23_800CB460 | RipOff_EffectUpdate | effect 0x38 dispatch (H) |
| ovl24 | 0x800CAE44 | func_ovl24_800CAE44 | Toxin_Update | template (H) |
| ovl24 | 0x800CAEC0 | func_ovl24_800CAEC0 | Toxin_Start | save stats, poison, effect (H) |
| ovl24 | 0x800CAF84 | func_ovl24_800CAF84 | Toxin_StopSound | func_80147364(4, 0x83F) (M: hook role) |
| ovl24 | 0x800CB1EC | func_ovl24_800CB1EC | Toxin_OrbiterUpdate | child orbit state (H) |
| ovl24 | 0x800CB41C | func_ovl24_800CB41C | Toxin_EffectUpdate | effect 0x37 dispatch (H) |
| ovl24 | 0x800CB51C | D_ovl24_800CB51C | Toxin_Ring | kind-6 ring descriptor (H) |
| ovl25 | 0x800CAE74 | func_ovl25_800CAE74 | Map_BuildPalette | copy + blank by flag + queue (H) |
| ovl25 | 0x800CAF58 | func_ovl25_800CAF58 | Map_Update | template (H) |
| ovl25 | 0x800CB0B0 | func_ovl25_800CB0B0 | Map_StepOpen | unfold (H) |
| ovl25 | 0x800CB1CC | func_ovl25_800CB1CC | Map_StepShow | wait for button (H) |
| ovl25 | 0x800CB288 | func_ovl25_800CB288 | Map_StepClose | fold and end (H) |
| ovl25 | 0x800CB3B4 | func_ovl25_800CB3B4 | Map_Cleanup | unfreeze, free kind 0x17 (M: hook role) |
| ovl25 | 0x800CB428 | func_ovl25_800CB428 | Map_BlinkCurrentArea | (H) |
| ovl25 | 0x800CB5C8 | func_ovl25_800CB5C8 | Map_PulseColour | (H) |
| ovl25 | 0x800CB6A0 | func_ovl25_800CB6A0 | Map_DrawLayer | (H) |
| ovl25 | 0x800CB964 | func_ovl25_800CB964 | Map_DrawBacking | (H) |
| ovl25 | 0x800CBCD4 | func_ovl25_800CBCD4 | Map_TrailUpdate | head / follower trail (H) |
| ovl25 | 0x800CBED8 | func_ovl25_800CBED8 | Map_ClampToBox | (H) |
| ovl25 | 0x800CC13C | D_ovl25_800CC13C | Map_TrailHistory | 16-entry ring (H) |
| ovl26 | 0x800CAE34 | func_ovl26_800CAE34 | DKick_Update | template (H) |
| ovl26 | 0x800CAEC0 | func_ovl26_800CAEC0 | DKick_Start | (H) |
| ovl26 | 0x800CAF60 | func_ovl26_800CAF60 | DKick_StepAir | (H) |
| ovl26 | 0x800CAFD0 | func_ovl26_800CAFD0 | DKick_Cleanup | (M: hook role) |
| ovl26 | 0x800CB054 | func_ovl26_800CB054 | DKick_AfterImageUpdate | kind-0x18 handler (H) |
| ovl27 | 0x800CAE0C | func_ovl27_800CAE0C | Fence_QueueImages | two func_800183E0 calls |
| ovl27 | 0x800CAE44 | func_ovl27_800CAE44 | Fence_Update | template |
| ovl27 | 0x800CAE88 | func_ovl27_800CAE88 | Fence_StepWait | func_80161104 wait |
| ovl27 | 0x800CAED0 | func_ovl27_800CAED0 | Fence_StepStart | anim, pay, a+0x1AA = 1 |
| ovl27 | 0x800CAF24 | func_ovl27_800CAF24 | Fence_StepThrust | sword attack + spawn 0x21 on marker |
| ovl27 | 0x800CAFE8 | func_ovl27_800CAFE8 | Fence_ProjUpdate | kind 0x21 handler |
| ovl27 | 0x800CB058 | func_ovl27_800CB058 | Fence_ProjInit | sprite, velocity, timer |
| ovl27 | 0x800CB190 | func_ovl27_800CB190 | Fence_ProjFly | move + 3-point hit test |
| ovl27 | 0x800CB2C8 | func_ovl27_800CB2C8 | Fence_ProjFade | colour -0x10 |
| ovl27 | 0x800CB3D8 | func_ovl27_800CB3D8 | Fence_ProjHitAt | offset hit test |
| ovl27 | 0x800CB4EC | func_ovl27_800CB4EC | Fence_ProjHitTest | hit type 0x28, spark 0xB |
| ovl27 | 0x800CB580 | func_ovl27_800CB580 | Fence_GlowUpdate | effect 0x4A handler |
| ovl27 | 0x800CB5DC | func_ovl27_800CB5DC | Fence_GlowInit | ring sprite init |
| ovl27 | 0x800CB76C | func_ovl27_800CB76C | Fence_GlowFollow | copies owner facing/scale/position |
| ovl27 | 0x800CB8A4 | D_ovl27_800CB8A4 | Fence_StepTable | indexed by a+0x197 |
| ovl27 | 0x800CB984 | D_ovl27_800CB984 | Fence_ProjCount | post-increment, & 7 |
| ovl27 | 0x800CB988 | D_ovl27_800CB988 | Fence_ProjMatrices | 8 x 0x20 ring by counter & 7 |
| ovl28 | 0x800CAE80 | func_ovl28_800CAE80 | Steel_DrawModel | EXE kind-6 draw call |
| ovl28 | 0x800CB00C | func_ovl28_800CB00C | Steel_SortPackets | per-type switch over the packet list |
| ovl28 | 0x800CB1F8 | func_ovl28_800CB1F8 | Steel_SortF3 | POLY_F3 loop |
| ovl28 | 0x800CB3C0 | func_ovl28_800CB3C0 | Steel_SortF4 | POLY_F4 loop |
| ovl28 | 0x800CB5D0 | func_ovl28_800CB5D0 | Steel_SortG3 | POLY_G3 loop |
| ovl28 | 0x800CB7BC | func_ovl28_800CB7BC | Steel_SortG4 | POLY_G4 loop |
| ovl28 | 0x800CBA18 | func_ovl28_800CBA18 | Steel_SortFT4 | POLY_FT4 loop |
| ovl28 | 0x800CBC2C | func_ovl28_800CBC2C | Steel_SortGT3 | POLY_GT3 loop |
| ovl28 | 0x800CBE28 | func_ovl28_800CBE28 | Steel_SortGT4 | POLY_GT4 loop |
| ovl28 | 0x800CC0A0 | func_ovl28_800CC0A0 | Steel_InGlintBand | band range test |
| ovl28 | 0x800CC110 | func_ovl28_800CC110 | Steel_AddPrim | OT link with length |
| ovl28 | 0x800CC16C | func_ovl28_800CC16C | Steel_Update | template |
| ovl28 | 0x800CC1E8 | func_ovl28_800CC1E8 | Steel_StepStart | pay, D_80078EC8 = 450, spawn 0x1A |
| ovl28 | 0x800CC298 | func_ovl28_800CC298 | Steel_FlashUpdate | kind 0x1A handler |
| ovl28 | 0x800CC6C4 | func_ovl28_800CC6C4 | Steel_DrawRays | six CC7FC calls |
| ovl28 | 0x800CC7FC | func_ovl28_800CC7FC | Steel_DrawRay | clone of engine func_8016BFD0 |
| ovl28 | 0x800CC9E8 | D_ovl28_800CC9E8 | Steel_Band1Lo (CC9EA Steel_Band1Hi, CC9EC Steel_Band1Dir) | CAE80 / CC0A0 |
| ovl28 | 0x800CC9F0 | D_ovl28_800CC9F0 | Steel_Band2Lo (CC9F2 Steel_Band2Hi, CC9F4 Steel_Band2Dir) | CAE80 / CC0A0 |
| ovl28 | 0x800CCA18 | D_ovl28_800CCA18 | Steel_StepTable | indexed by a+0x197 |
| ovl29 | 0x800CAEC4 | func_ovl29_800CAEC4 | (none: role unclear) |  |
| ovl29 | 0x800CAF14 | func_ovl29_800CAF14 | Hurl_BeginThrow | called by engine func_8015D738 |
| ovl29 | 0x800CAF48 | func_ovl29_800CAF48 | Hurl_ThrowUpdate | kind 0x23 state dispatch |
| ovl29 | 0x800CAFEC | func_ovl29_800CAFEC | Hurl_ThrowStart | turn to camera, anim 0x1C |
| ovl29 | 0x800CB080 | func_ovl29_800CB080 | Hurl_ThrowStep | clone of func_8015DBD4 |
| ovl29 | 0x800CB13C | func_ovl29_800CB13C | Hurl_HoldUpdate | clone of func_8015DCB8 |
| ovl29 | 0x800CB1F8 | func_ovl29_800CB1F8 | Hurl_Release | hit 0x29, clears a+0x178 |
| ovl29 | 0x800CB290 | D_ovl29_800CB290 | Hurl_LiftPath | 3 s8 per frame, a+0x234 index |
| ovl2a | 0x800CAEE0 | func_ovl2a_800CAEE0 | Clone_StepStart | refuse if 0x22 exists, pay |
| ovl2a | 0x800CAF4C | func_ovl2a_800CAF4C | Clone_StepSpawn | two kind 0x22 |
| ovl2a | 0x800CAFD4 | func_ovl2a_800CAFD4 | Clone_DecoyUpdate | kind 0x22 handler |
| ovl2a | 0x800CB030 | func_ovl2a_800CB030 | Clone_DecoyInit | model, lifetime 900 |
| ovl2a | 0x800CB218 | func_ovl2a_800CB218 | Clone_DecoyIdle | sway, timeout / button |
| ovl2a | 0x800CB3B4 | func_ovl2a_800CB3B4 | Clone_DecoyBurst | effects, blast, sounds |
| ovl2a | 0x800CB5A8 | func_ovl2a_800CB5A8 | Clone_DecoyFreeEnd | free + func_80165A20 |
| ovl2a | 0x800CB794 | func_ovl2a_800CB794 | Clone_BlastHit | hit 0x33 within 0xC0 |
| ovl2a | 0x800CB8B4 | func_ovl2a_800CB8B4 | Clone_ShardUpdate | effect 0x46 handler |
| ovl2a | 0x800CB910 | func_ovl2a_800CB910 | Clone_ShardInit | shard init |
| ovl2a | 0x800CBD54 | func_ovl2a_800CBD54 | Clone_DrawShard4 | four draws of one primitive |
| ovl2a | 0x800CC12C | D_ovl2a_800CC12C | Clone_Lifetime | 0x384, decremented, < 0x80 test |
| ovl2a | 0x800CC134 | D_ovl2a_800CC134 | Clone_GlowColour | model +0x80 points at it |
| ovl2b | 0x800CAE0C | func_ovl2b_800CAE0C | Acid_CycleImage | engine calls it each frame for ability 0x19 |
| ovl2b | 0x800CAE70 | func_ovl2b_800CAE70 | Acid_QueueImages | three records + reset |
| ovl2b | 0x800CB028 | func_ovl2b_800CB028 | Acid_BlobUpdate | kind 0x1E handler |
| ovl2b | 0x800CB09C | func_ovl2b_800CB09C | Acid_BlobInit | model, launch |
| ovl2b | 0x800CB150 | func_ovl2b_800CB150 | Acid_BlobFly | gravity, hit, splat |
| ovl2b | 0x800CB2A8 | func_ovl2b_800CB2A8 | Acid_PuddleSpread | scale +0x80, hit |
| ovl2b | 0x800CB378 | func_ovl2b_800CB378 | Acid_PuddleHit | hit 0x27 within 0x60 |
| ovl2b | 0x800CB424 | func_ovl2b_800CB424 | Acid_DropUpdate | effect 0x45 handler |
| ovl2b | 0x800CB5D4 | D_ovl2b_800CB5D4 | Acid_ImageCycle | 0-terminated list |
| ovl2b | 0x800CB95C | D_ovl2b_800CB95C | Acid_ImageCycleIndex | index into it |
| ovl2c | 0x800CAFAC | func_ovl2c_800CAFAC | ThreeWay_StepFire | three 0x1F per marker, BP each |
| ovl2c | 0x800CB270 | func_ovl2c_800CB270 | ThreeWay_ShotInit | spread yaw d x 0xAA - 0xAA |
| ovl2c | 0x800CB360 | func_ovl2c_800CB360 | ThreeWay_ShotFly | hit 0x2D |
| ovl2c | 0x800CB574 | func_ovl2c_800CB574 | ThreeWay_MuzzleInit | effect 0x43 init |
| ovl2c | 0x800CB780 | func_ovl2c_800CB780 | ThreeWay_DrawFanXZ | APrim fan, vy = 0 |
| ovl2c | 0x800CBA0C | func_ovl2c_800CBA0C | ThreeWay_DrawFanXY | APrim fan, vz = 0 |
| ovl2d | 0x800CAE0C | D_ovl2d_800CAE0C | Homing_AimOffset | AVec added to the target |
| ovl2d | 0x800CB0B4 | func_ovl2d_800CB0B4 | Homing_MissileInit | model, timer 0x28 |
| ovl2d | 0x800CB228 | func_ovl2d_800CB228 | Homing_MissileFly | acquire, steer, hit 0x2B |
| ovl2d | 0x800CB424 | func_ovl2d_800CB424 | Homing_MissileBurst | four 0x4E a frame |
| ovl2d | 0x800CB4D4 | func_ovl2d_800CB4D4 | Homing_FindTarget | nearest on-screen hittable actor |
| ovl2d | 0x800CB5CC | func_ovl2d_800CB5CC | Homing_SteerIfValid | hittable check |
| ovl2d | 0x800CB61C | func_ovl2d_800CB61C | Homing_SteerToward | yaw/pitch turn |
| ovl2d | 0x800CB804 | func_ovl2d_800CB804 | Homing_SparkUpdate | effect 0x4E handler (M) |
| ovl2d | 0x800CBC60 | func_ovl2d_800CBC60 | Homing_TrailUpdate | effect 0x50 handler (M) |
| ovl2e | 0x800CAE44 | func_ovl2e_800CAE44 | GrenadeUpdate | per-frame step dispatch |
| ovl2e | 0x800CAFC4 | func_ovl2e_800CAFC4 | GrenadeObjUpdate | kind 0x20 handler, ability 0x1D test |
| ovl2e | 0x800CB114 | func_ovl2e_800CB114 | GrenadeObjFly | gravity, bounce, explode |
| ovl2e | 0x800CB304 | func_ovl2e_800CB304 | GrenadeObjExplode | flames 0x4D, blast damage |
| ovl2e | 0x800CB488 | func_ovl2e_800CB488 | GrenadeFlameUpdate | effect 0x4D handler |
| ovl2f | 0x800CAF9C | func_ovl2f_800CAF9C | JavelinObjUpdate | kind 0x26 handler, ability 0x1E test |
| ovl2f | 0x800CB118 | func_ovl2f_800CB118 | JavelinObjFly | flight, stick, pierce hits |
| ovl2f | 0x800CB358 | func_ovl2f_800CB358 | JavelinGlowUpdate | effect 0x4F handler, owner kind 0x26 test |
| ovl30 | 0x800CCBF0 | func_ovl30_800CCBF0 | LuminaSpinSlash | one accelerating turn with func_80155FB0 hits |
| ovl30 | 0x800CCD60 | func_ovl30_800CCD60 | LuminaSetBladeScale | a+0xF6 ramp 0x1000 -> 0x1400 |
| ovl30 | 0x800CCD94 | D_ovl30_800CCD94 | LuminaSpinSteps | kind-8 state table indexed by state - 2 (1 entry) |
| ovl31 | 0x800CCE24 | func_ovl31_800CCE24 | SlamQuake | rumble, shockwave kind 5, sound 0x47D |
| ovl31 | 0x800CCF14 | func_ovl31_800CCF14 | ShockwaveUpdate | kind 5 handler |
| ovl31 | 0x800CD3C8 | func_ovl31_800CD3C8 | ShockwaveRippleUpdate | kind 6 handler |
| ovl31 | 0x800CD6DC | D_ovl31_800CD6DC | SlamSteps | kind-8 states 2-5 (4 entries) |
| ovl32 | 0x800CCB78 | func_ovl32_800CCB78 | BarrierStart | a+0x1C8 = 0xFF, kind 7 |
| ovl32 | 0x800CCBE4 | func_ovl32_800CCBE4 | BarrierObjUpdate | kind 7 handler |
| ovl32 | 0x800CCF68 | func_ovl32_800CCF68 | BarrierBreak | engine-called on an absorbed hit |
| ovl32 | 0x800CD198 | func_ovl32_800CD198 | BarrierShotUpdate | kind 9 handler |
| ovl32 | 0x800CE1E4 | D_ovl32_800CE1E4 | BarrierSteps | kind-8 state 2 (1 entry) |
| ovl33 | 0x800CCB78 | func_ovl33_800CCB78 | FlameStart | aura + orbs, a+0x1C8 = 0xFF |
| ovl33 | 0x800CCF28 | func_ovl33_800CCF28 | FlameHoldNotify | engine-called each held frame |
| ovl33 | 0x800CCF58 | func_ovl33_800CCF58 | FlameCancel | engine-called on a cancelling hit |
| ovl33 | 0x800CD328 | func_ovl33_800CD328 | FlameShotUpdate | kind 0x12 handler |
| ovl33 | 0x800CD668 | D_ovl33_800CD668 | FlameSteps | kind-8 state 2 (1 entry) |
| ovl34 | 0x800CCB78 | func_ovl34_800CCB78 | SpinStart | top + orbs, a+0x1C8 = 0xFF |
| ovl34 | 0x800CCCC0 | func_ovl34_800CCCC0 | SpinEnter | engine-called: Musashi kind 0x21 |
| ovl34 | 0x800CCCF4 | func_ovl34_800CCCF4 | SpinDispatch | kind 0x21 state table |
| ovl34 | 0x800CD494 | func_ovl34_800CD494 | SpinTurn | speed / yaw, hand back at 0 |
| ovl34 | 0x800CD5CC | func_ovl34_800CD5CC | SpinContactHit | actors within 0x40, class 0x25 |
| ovl34 | 0x800CE040 | D_ovl34_800CE040 | SpinSteps | kind-8 state 2 (1 entry) |
| ovl34 | 0x800CE044 | D_ovl34_800CE044 | SpinStates | Musashi kind-0x21 states 0-4 |
| ovl35 | 0x800CCB28 | func_ovl35_800CCB28 | GlideStart | effect 0x3B, a+0x1C8 = 0xBA |
| ovl35 | 0x800CCB78 | func_ovl35_800CCB78 | GlideMarkTrail | engine-called on effect 0x3B |
| ovl35 | 0x800CCB84 | func_ovl35_800CCB84 | GlideTrailUpdate | effect 0x3B handler |
| ovl35 | 0x800CCBC0 | func_ovl35_800CCBC0 | GlideTrailDraw | ring buffer to fading quads |

### 6b. Engine and EXE symbols the packages use

| Address | Current name | Proposed name | Evidence |
|---|---|---|---|
| 0x80013328 | func_80013328 | Distance3D | SquareRoot0 of the squared distance |
| 0x80013B64 | func_80013B64 | RotateVecZ | identity, rotate Z, ApplyMatrixLV (H) |
| 0x80013E94 | func_80013E94 | PackVec10 | 10:10:10 pack |
| 0x8001599C | func_8001599C | CopyVec3 | three-word copy (H) |
| 0x80016ED4 | func_80016ED4 | DrawStackFT4Screen | func_80016F18(a, 0, 0), SetPolyFT4 (H) |
| 0x800174DC | func_800174DC | DrawStackGT3Screen | func_8001751C(a, 0), SetPolyGT3 (H) |
| 0x800178EC | func_800178EC | DrawStackGT4Screen | func_80017930(a, 0, 0), SetPolyGT4 (H) |
| 0x8001C2C4 | func_8001C2C4 | InitModelEmpty | model kind 0, coordinates only (H) |
| 0x8001CBDC | func_8001CBDC | InitSpriteKind0 | sprite kind 0 with x, y (H) |
| 0x8001CEC0 | func_8001CEC0 | InitSpriteKindA | sprite kind 0xA with data pointer (H) |
| 0x80029178 | func_80029178 | TestGameFlag | bit test of D_800AE648 (H) |
| 0x80029204 | func_80029204 | GetGameWord | `*(s32 *)(D_800BA1B8 + i)` (H) |
| 0x80078E94 | D_80078E94 | g_StatusPoison | bit 31 poison (func_8014B350 ticks damage) (M: other bits unknown) |
| 0x80078EBF | D_80078EBF | ChargeGauge | filled by func_8014A59C, tested == 0x80 by the triggers, zeroed by func_8015ED6C |
| 0x800C7C74 | D_800C7C74 | g_DrawBufferIndex | main.c toggles it |
| 0x800D2318 | func_800D2318 | Effect_AnglesFromPacked | unpacks o+0x2C to o+0x12 / 0x16 |
| 0x80126728 | D_80126728 | g_EffectHandlers | func_80165CA0 dispatches effects by kind |
| 0x80126D40 | D_80126D40 | g_Obj68Handlers | func_80162B1C dispatches [kind - 1] |
| 0x801270C0 | D_801270C0 | WorldAnimMode | 1 = animate every actor (engine.c 1213); Map sets 2 (M) |
| 0x80128EA8 | func_80128EA8 | SpriteAnim_Start (also proposed: SpriteAnimStart) | AnimPlayer init |
| 0x80128ED8 | func_80128ED8 | SpriteAnim_Step (also proposed: SpriteAnimStep) | AnimPlayer step, 1 at end |
| 0x8012A2F4 | func_8012A2F4 | Camera_UnlockHeight | clears D_801152C0 |
| 0x8012A304 | func_8012A304 | Camera_LockHeight | engine.c comment |
| 0x8012A62C | func_8012A62C | CameraEaseFrom | save the camera, ease over `frames` (H) |
| 0x8012EF34 | func_8012EF34 | ProjectWorldPointZ | the same with SZ (H) |
| 0x8012EFB8 | func_8012EFB8 | ProjectWorldPoint (also proposed: WorldToScreen) | RTPS through the world-screen matrix (H) |
| 0x8013C9C4 | func_8013C9C4 | StartRumbleSequence | stores the sequence, starts StartRumbleScript if idle (engine_8013C98C.c:205) |
| 0x80146750 | func_80146750 | SpawnObj68Upper | fills the first free 0x68 entry 8-19 from a spawn record |
| 0x8014680C | func_8014680C | SpawnObj68Lower | same for entries 0-7 |
| 0x80146AB4 | func_80146AB4 | SpawnEffectFromEnd (also proposed: SpawnEffectFromTop) | func_80146B9C scans the pool from the last slot |
| 0x80146EC0 | func_80146EC0 | PlaceAtModelPointCam | model point + camera-rotated offset (H) |
| 0x80147364 | func_80147364 | SoundCommand | func_8002D4C8(id, b), positional on 0x308D (H) |
| 0x801487F4 | func_801487F4 | Pad_Held | returns a+0xAA (held bits, func_80149954) |
| 0x80148800 | func_80148800 | Pad_Pressed | returns a+0xAC |
| 0x80148AFC | func_80148AFC | Pad_FaceStick | sets model yaw, returns held (M) |
| 0x80148E54 | func_80148E54 | Pad_StickAngle | camera-relative direction or -1 |
| 0x801493D0 | func_801493D0 | Actor_ModelPointToPos | 24.8 point through the model matrix |
| 0x801498E0 | func_801498E0 | Technique3Attack | attack press with technique 3 -> 0x68 kind 8 at (0, -0x1E, 0) |
| 0x80149954 | func_80149954 | Technique4HoldAttack | while attack held: loop 0x8E0, func_800CCF28, 0x68 kind 0x12 |
| 0x80149D10 | func_80149D10 | CheckTechniqueTrigger | gauge 0x80 && selection && pad 0x10 press -> 1 (2 when a+0x1C4) |
| 0x80149FB0 | func_80149FB0 | ToggleSelectionBit7 | pad 0x100 -> D_80078EC0 ^= 0x80 unless map listed / technique active |
| 0x8014A59C | func_8014A59C | UpdateChargeGauge | D_80078EBF += 3 / 6 (flag 0x20), cap 0x80, while charging and pad 8 held |
| 0x8014AA04 | func_8014AA04 | SetLuminaSelection | D_80078EC0 = n \| (old & 0x80); the pause menu calls it with n + 1 (engine_8013C98C.c:1538) |
| 0x8014AC10 | func_8014AC10 | DeleteEffectsOfKind | clears every 0x58 effect of kind n and its model |
| 0x8014ACC0 | func_8014ACC0 | SpendTechniqueTime | a+0x1C8 -= n, floor 0; ovl33/ovl34 objects spend 1 / 10 |
| 0x8014B2F8 | func_8014B2F8 | Stats_CurePoison | clears D_80078E94 and D_80078ECC |
| 0x8014B33C | func_8014B33C | Stats_SetPoison (also proposed: SetPoisonFlag) | D_80078E94 = 0x80000000 |
| 0x8014B944 | func_8014B944 | Stats_AddMeterEA4 | D_80078EA4 += n, cap 0x80 / 0xA0 |
| 0x8014BB24 | func_8014BB24 | Stats_AddHP | HP += n, capped 500 / 999 unless forced |
| 0x8014C168 | func_8014C168 | FindActorByKind | linear search of D_801202A0 for +0 == kind (engine 4838, H) |
| 0x8014C3A4 | func_8014C3A4 | Actor_GiveHit (also proposed: Actor_HitFacing) | sets +0x5E / 60 / 62 / 5C / 7C of the target |
| 0x8014C3D0 | func_8014C3D0 | Actor_HitFromSource | rolled damage, direction to attacker |
| 0x8014C4AC | func_8014C4AC | Actor_SendHit | writes +0x5E/+0x60/+0x62/+0x7C |
| 0x8014C5FC | func_8014C5FC | PitchToward | ratan2(dy, horizontal distance) |
| 0x8014CB7C | func_8014CB7C | IsSteelActive | D_80126B9C & 0x800, set only for ability 0x10 |
| 0x80155FD4 | func_80155FD4 | SwordHitAbility | the 0x20000 table D_8018F548 (M) |
| 0x80155FF8 | func_80155FF8 | SwordHitCheck | attack record tables D_8018F3CC / F534 / F548 (M) |
| 0x80156370 | func_80156370 | RollHitDamage | base + rand range per hit type |
| 0x801619A4 | func_801619A4 | GetActiveTechnique | returns D_80078EC0 & 0x7F while a+0x1C8 != 0 |
| 0x801619D0 | func_801619D0 | IsTechnique3Active | a+0x1C8 != 0 && selection == 3 |
| 0x80161A00 | func_80161A00 | IsTechnique4Active | same with 4 |
| 0x80161A30 | func_80161A30 | IsTechnique5Active | same with 5 |
| 0x80161A60 | func_80161A60 | IsTechnique6Active | same with 6 |
| 0x80161A90 | func_80161A90 | TickGlideTimer | selection 6: a+0x1C8--, deletes effects 0x3B at 0 |
| 0x80162F08 | func_80162F08 | AccelClamped | +0x24..+0x2C += clamp 0x7F0000 |
| 0x80163194 | func_80163194 | AccelAlongMatrix | AccelClamped + ApplyMatrixLV |
| 0x801632F0 | func_801632F0 | Sweep_FirstResult (also proposed: GetHitResult) | first nonzero D_80115200[i] |
| 0x80165624 | func_80165624 | Ability_CannotAfford (also proposed: IsBPShort) | `D_80078EB8 < cost` |
| 0x80165718 | func_80165718 | Ability_EndOnHit | ends 3, 12, 24 |
| 0x80165770 | func_80165770 | Ability_ResumeHop | calls 0x800CAF6C when ability 12 |
| 0x801657A0 | func_801657A0 | Ability_SaveStats (also proposed: SaveAbilityStats) | latch EC3, copy E94.. -> ECC.. |
| 0x80165840 | func_80165840 | Ability_RestoreStats (also proposed: RestoreAbilityStats) | copy ECC.. back |
| 0x8016629C | func_8016629C | SpawnFootPuff | effect 3 at y - 0x10 |
| 0x80175218 | func_80175218 | StartSlot3Technique | D_80190B9C[sel - 1](a); state++ |
| 0x80175268 | func_80175268 | RunSlot3Technique | a+0x44 \|= 2; D_80190BB4[sel - 1]() |

## 7. Open questions and what is left

**Covered.** All 35 packages, every function (660: 636 in C, 24 still `INCLUDE_ASM` and described from their callers),
the entry and dispatch shape, the engine side of starting, paying for, timing and ending an ability, the clone
groups, and 276 package plus 75 engine naming proposals.

**Settled here (were open before).**
* The ability -> package mapping is confirmed from the code: every package that tests D_80078EC1 tests its own
  ability number (section 4).
* Slot 3 is the pause menu's six sword techniques, fired from a full charge gauge (D_80078EBF == 0x80) with pad
  0x10 through Musashi's kind 8; selections 3-6 = ovl32-ovl35 (H), 1-2 = ovl30-ovl31 (M). The scroll names are M.
* Steel's lasting effect is in the engine: 450 frames of model kind 6 drawn by ovl28's renderer, damage halved.
* Stun's func_ovl13_800CB0E8 is called by the engine's enemy reaction step func_80130438.
* Map works only on maps 0x305C-0x3066 (the engine's fizzle check).

**Open (data that is not in the repository would settle most of them).**
* The per-ability tables in the stage data: D_80190170 (frame handler), D_80190364 (stop hook), D_801902E8 (after-load
  hook), D_801901EC (cost and the bit-0x80 "continuous" flag), D_8019020C (duration), D_80190288 / D_801902A8 /
  D_801902C8 (unknown). The stop hooks named in section 5 are M where only their position or shape says so.
* The slot-3 tables: the field overlay's D_800D384C (selection -> MAIN.CD entry), the stage's D_80190B9C /
  D_80190BB4 (selection -> technique entry / dispatch), the flag list D_8018E5A8, and the pause menu text; the
  meaning of D_80078EC0 bit 0x80 (pad 0x100 toggles it; when set, the hold button enters kind 0x1C instead of
  charging).
* Names the C does not back: ovl19 "Shrink" never scales Musashi in this package (it fires four trail shots with hit
  type 0x1E: if anything shrinks, it is the struck enemy, in its own reaction to hit type 0x1E, not traced; Musashi's
  own small state is the engine's stats +0x22 bit 15 -> scale 0x555 in func_8014B190); Satiate's (ovl18) and Rip-off's (ovl23) in-game effects are not visible (ovl23 is ovl18's twin); the
  cut abilities 6 and 18 (ovl1d, ovl1e). Which stat D_80078EA4 is (Sleepy drains it, Mint holds it full).
* Objects whose spawner is not in any C: Map's kind-0x17 trail sprites, ovl1c's kind-0x1C rings, ovl2a's
  CB5D8 object; what stage actor kind 0x15C does with the +0xCC target Firefly gives it; Hurl's button step table.
* The 24 asm functions (ovl13 CB138 / CB56C, ovl18 CB168 / CB328, ovl19 CB578 / CB9F8 / CBE38, ovl1b CAF94 / CB0C8,
  ovl1c CB8A4 / CB944, ovl1f CB300, ovl20 CB278 / CB470, ovl21 CB4A4 / CB82C / CBF28 / CC024, ovl23 CB0D0 / CB2AC,
  ovl2a CB708, ovl2d CB6F4, ovl35 CCDE8 / CD314): their rows are M or L until they are matched.
* docs/overlays.md's counts are behind the C (ovl22 22 / 22 matched, not 21; 24 asm left, not 29) and its "31-entry"
  table before ovl28's code is 29 words.

**Not done in this card.** Nothing was checked against the running game or the package data. The package sections
were written by four read-throughs and spot-checked (entry shapes, the engine call sites, the slot-3 menu code, the
Steel and Toxin engine hooks), not re-derived line by line; a reader who renames from section 6 should read the
function first.
