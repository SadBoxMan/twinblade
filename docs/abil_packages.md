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
packages use. 4. Shared shapes and clones. 5. Package by package (slot 2: ovl13-ovl2f; slot 3: ovl30-ovl35).
6. Naming proposals. 7. Open questions and what is left.

## 1. What a package is and how it is entered

* **A package is one code overlay**, the type-1 block of a PAC chain on MAIN.CD, copied whole to an overlay slot:
  the first word is the ID (0x13-0x35, the `ovlNN` name), the code follows to the last `jr ra`, then data. Two slots
  hold packages: **slot 2 at 0x800CAE08** (code from 0x800CAE0C) holds the current **assimilated ability**, ovl13-ovl2f
  (29 packages); **slot 3 at 0x800CCB1C** (code from 0x800CCB20) holds one of **six other packages**, ovl30-ovl35
  (section 5, slot 3). Because every package of a slot loads at the same address, splat's names carry the package
  (`func_ovl13_800CAE0C`). (H: docs/overlays.md, the yaml files)
* **Layout.** ID word, code, data. ovl1f (Bowl) and ovl2d (Homing) have two data words before the code, so their
  first function is at 0x800CAE14; ovl28 (Steel) has a 31-entry jump table before its code and its first function is
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
  palette / texture to VRAM. (H) The exceptions are listed per package (ovl2b Acid's 800CAE0C is a per-frame hook,
  below; ovl1f, ovl2d and ovl28 start later).
* **The per-frame entry** is the second function, the **button template**:
  `func_ovlNN_800CAE34(a) { a+0x44 |= 8; D_ovlNN_steps[a+0x197](a); }`: Musashi's ability step machine, step byte at
  actor + 0x197, flag 8 in +0x44 marking "an ability is running". The engine has its own copy for the no-ability /
  not-enough-BP case (func_80165B28, section 2). The engine reaches the package's template only through its
  per-ability table D_80190170 (stage data), so the table entry for every templated package is 0x800CAE34 (M: the
  table cannot be read, but no other function of these packages has the shape, and nothing else calls them).

## 2. How the engine runs an ability (src/stage/engine_801458E0.c)

| What | Where | Conf. |
|---|---|---|
| Current ability number (bit 0x80 masked off on use) | D_80078EC1 (= stats block D_80078E78 + 0x49) | H |
| Per-ability frame handler, `D_80190170[ab](a)` | func_80165580 (the kind-0x17 handler), func_801654A8 | H |
| Per-ability stop hook, `D_80190364[ab]()` | func_80165AC8, from func_80165A78 | H |
| Per-ability cost byte, `D_801901EC[ab]`: low 7 bits the BP cost, bit 0x80 a "continuous" flag | func_80165658 | H (cost), M (flag meaning) |
| Per-ability duration, `D_8019020C[ab]` -> D_80078EC8 | func_80165670 | H |
| Three more per-ability byte tables (D_80190288, D_801902A8, D_801902C8) | func_801656D0, func_801656E8, func_80165700 | H (exist), unknown use |
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
  0x3B). Which package answers which is in section 5, slot 3.

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
| func_80161104(a) | 14 | Musashi's movement step; 1 when it did NOT take him over | M |
| func_8014659C() / func_80146578() | 14 / 14 | a free model slot 6-0x15 / a free sprite slot 6-0x15 in the Work block | H |
| func_80015978(src, dst) | 14 | 24.8 position (+2/+6/+0xA halves) -> SVECTOR | H |
| func_80165A20(a) | 13 | end the ability (stop hook, clear the ability) | H |
| func_80161208(a) | 13 | Musashi's movement / collision step; 1 when it handed him to another handler | M |
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
| func_80147364(id, b) | 6 | the sound call func_80147324 makes | H |
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

