#ifndef GAME_H
#define GAME_H

#include "psyq.h"

/*
 * Game structures established by the asset and decomp work (r12, 2026-10-13). Offsets are verified against the
 * code named in each comment; fields still unknown are padding. Nothing here changes code generation until a
 * function uses it. Sources: docs/animation_controller.md, docs/actor_parts_faces.md, docs/draw_code.md,
 * tools/pose_decode.py, tools/live_log.py, and the matched functions in src/.
 */

/* ---- PsyQ libgs coordinate system (as laid out in memory; 0x50 bytes) ---- */
typedef struct {
    s16 m[3][3];    /* rotation, 4096 = 1.0 */
    s16 pad;
    s32 t[3];       /* translation */
} GameMatrix;       /* same layout as PsyQ MATRIX */

typedef struct GameCoord2 {
    u32 flg;                    /* +0x00 */
    GameMatrix coord;           /* +0x04 local matrix */
    GameMatrix workm;           /* +0x24 world matrix (GsGetLw) */
    void *param;                /* +0x44 */
    struct GameCoord2 *super;   /* +0x48 parent */
    struct GameCoord2 *sub;     /* +0x4C */
} GameCoord2;                   /* same layout as PsyQ GsCOORDINATE2, 0x50 bytes */

/*
 * Model object: one drawn model instance (the live logger's object array, stride 0x84; InitNullModel family
 * initialises it, SetModelParent links it to a parent). The live logger reads +0x20 pose, +0x24 part table,
 * +0x34..+0x44 rotation and +0x48..+0x50 position: those are pose, parts and coord.coord.
 */
typedef struct {
    /* 0x00 */ u16 type;            /* 0 free, 1 a model (0x84 bytes), 2 a 0x38-byte object (InitNullModel / C448 / C558 set it) */
    /* 0x02 */ s16 kind;            /* 0, 1, 7 ... set by the init variant */
    /* 0x04 */ u32 unk04;           /* bit 31 cleared, set and toggled by stage ShowModel / 8A8 / 8C4 */
    /* 0x08 */ s16 pos[3];          /* the owner's position (integer part); coord's translation follows it */
    /* 0x0E */ u8 pad0E[2];
    /* 0x10 */ SVECTOR rot;         /* rotation, turned into coord's matrix (stage UpdateModelZYX and its kin) */
    /* 0x18 */ SVECTOR scale;       /* 0x1000 = 1.0; x and z eased together (stage EaseScaleNormal) */
    /* 0x20 */ void *pose;          /* current pose: per-part records (8- or 12-byte form) */
    /* 0x24 */ u32 *parts;          /* part table: one draw word per part; bit 24 hides it (PartHide/PartShow) */
    /* 0x28 */ u32 colour;
    /* 0x2C */ u16 flags;           /* bit 0: the position changed (stage SyncModelPos) */
    /* 0x2E */ u16 unk2E;
    /* 0x30 */ GameCoord2 coord;    /* +0x34 rotation, +0x48 position, +0x78 parent */
    /* 0x80 */ void *unk80;         /* a pointer kinds store here (130 writes; object_struct 3.6); what it points to is Unconfirmed */
} ModelObj;                         /* 0x84 bytes */

/* a 16.16 fixed-point value; the integer half is the high word */
typedef union {
    s32 w;
    struct { u16 frac; s16 i; } h;
} Fixed;

/* A spawn definition: what InitSpawnedActor makes an actor from (stage data, or built on the stack by SpawnActor) */
typedef struct SpawnDef {
    /* 0x00 */ s16 x, y, z;
    /* 0x06 */ s16 kind;
    /* 0x08 */ s16 unk8;
    /* 0x0A */ u16 flags;           /* bit 15: an actor from it is out (cleared when that actor is freed in range) */
    /* 0x0C */ s16 unkC;
    /* 0x0E */ s16 unkE;
    /* 0x10 */ s32 unk10;
} SpawnDef; /* size 0x14 */

/*
 * An actor's set-up record (stage data; actor +0x78). SetupActor (0x8012C354) copies hp, hit state, model and hit box
 * from it; until set-up the actor points at the default record D_80190D1C (village address). r380, from engine.c's
 * local typedef and docs/actor_families.md section 3 / docs/object_struct.md section 3.6.
 */
typedef struct ActorInit {
    /* 0x00 */ s16 hp;              /* hit points (x1.5 when D_80078EAE is 0: SetupActor) */
    /* 0x02 */ u16 hitState;        /* copied to the actor's hitState (+0x5C) */
    /* 0x04 */ void *model;         /* the model's data (none: no model) */
    /* 0x08 */ u32 hitData;         /* the hit box, copied to actor +0x58 */
    /* 0x0C */ u8 pad0C[0x22];
    /* 0x2E */ s16 unk2E;           /* read by the EXE's func_8002A04C at defeat; what it counts is Unconfirmed */
    /* 0x30 */ s16 damageScale;     /* 0x1000 = damage as dealt (TakeDamageAndRecoil) */
} ActorInit;                        /* 0x32 known */

/*
 * Stage actor: one pool slot of the stage engine (g_ActorSlots, 97 slots of 0x10C at 0x80120194; slot 0 is never
 * handed out, g_Actors = slot 1 at 0x801202A0). Fields from docs/actor_families.md section 3 (r389, code evidence),
 * docs/object_struct.md sections 3.1-3.3 (r273) with r286's RAM-dump corrections (docs/cloud_factcheck.md). Every
 * named field has a code use; unkXX / padNN keep their offset where nothing is known. Engine addresses are code
 * addresses (the same in every stage image); data addresses are the village's (SC03_001). r380, 7 Nov 2026.
 * +0x00..+0x23 is the header Musashi (Player) and the effects share; from +0x24 on the three differ.
 */
typedef struct StageActor {
    /* 0x000 */ u16 kind;           /* index into the room's kind table D_8011DB08 (room record +0x60, 0x3DC handlers);
                                       0 = free slot (InitSpawnedActor, UpdateActors, FindFreeActorAfter) */
    /* 0x002 */ u16 state;          /* the kind's state: its handler indexes its own table with it; 0 = set-up, run
                                       inside the spawn call; SetState sets it, NextState steps it */
    /* 0x004 */ Fixed pos[3];       /* 16.16 */
    /* 0x010 */ s32 vel[3];         /* added to pos by MoveObject (0x8012AD80); some kinds use the halves as s16 */
    /* 0x01C */ s32 timer;          /* a countdown: TickTimer (0x8012BEE8), TickTimerReload, SetMoverTimer */
    /* 0x020 */ ModelObj *model;    /* the drawn model; UpdateActors writes pos + ofs into it each frame */
    /* 0x024 */ s32 work24[4];      /* per kind: no engine use; nonzero on kinds 0x2F, 0x24, 0x16, 0x76, 0x15 (r286) */
    /* 0x034 */ u16 stateCount;     /* restarted by SetState / NextState, stepped only by IncCounter (r286: not a
                                       frame clock) */
    /* 0x036 */ u16 id;             /* serial from g_NextActorId (D_801270C4) at spawn, never 0; linked actors keep a
                                       copy and free themselves when it changes */
    /* 0x038 */ Fixed prev[3];      /* = pos, set by UpdateActors right before the kind's handler runs */
    /* 0x044 */ s32 accel[3];       /* added to vel by MoveObject; 0xC000 / 0x18000 in accel[1] is gravity
                                       (object_struct conflict 2: the display word at +0x44 is Musashi's) */
    /* 0x050 */ s16 ofs[3];         /* added to pos for the model each frame */
    /* 0x056 */ u8 pad056[2];       /* no access; 0 in every live actor (r286) */
    /* 0x058 */ u32 hitData;        /* hit box address with a flag nibble on top (0x60000000 at set-up) */
    /* 0x05C */ u16 hitState;       /* bit 0 a hit is waiting (UpdateActors' first pass starts the reaction from it;
                                       pickups: touched), bit 14 immune, bit 15 hittable (SetHittable / 68) */
    /* 0x05E */ u16 hitCode;        /* low byte = the hit's type, index of the reaction step table D_80190D5C;
                                       0xB forces a BP drop, 0xC adds rumble, 0x1D records hitPos (r286: no serial) */
    /* 0x060 */ s16 hitDamage;      /* damage of the waiting hit */
    /* 0x062 */ s16 hitAngle;       /* the hit's direction; the model turns to it + 0x800 */
    /* 0x064 */ struct StageActor *parent;  /* the spawner (SpawnActor*), else NULL; func_80142454 stores Musashi */
    /* 0x068 */ struct SpawnDef *def;  /* the spawn row (NULL with a parent); may dangle: SpawnActor builds the def on
                                       its stack (r286: 4 511 live actors hold a scratchpad address) */
    /* 0x06C */ struct StageActor *link;   /* next actor of a chain: func_80178744 scales every linked actor */
    /* 0x070 */ s16 param;          /* def.unk8, the per-instance argument of the kind (variant, size, message) */
    /* 0x072 */ u16 animFlags;      /* 0x4000 wrapped, 0x2000 marker passed, 0x0400 / 0x0200 direction, 0x1000 keep
                                       running when D_801270C0 != 1, 0x8000 came from a spawn row; def.flags & 0xF7FF */
    /* 0x074 */ u8 unk74;           /* picks CarryPlayerExact (nonzero) or CarryPlayerClipped (CarryPlayer) */
    /* 0x075 */ u8 targetClass;     /* written by kinds, read by Musashi's targeting (his +0x16E); the classes'
                                       meaning is Unconfirmed */
    /* 0x076 */ s16 hp;             /* hit points: init->hp, x1.5 when D_80078EAE is 0; <= 0 starts defeat step 0xC */
    /* 0x078 */ struct ActorInit *init;  /* the kind's record; D_80190D1C until set-up */
    /* 0x07C */ s16 hitPos[3];      /* where it was when hit (hit code 0x1D, TakeDamage) */
    /* 0x082 */ u16 hitFlags;       /* bit 0: the hit finished it (TakeDamage) */
    /* 0x084 */ s16 unk84;          /* per kind: a counter (sc01_077) */
    /* 0x086 */ u16 unk86;          /* per kind: flag bits 1 and 2 (sc01_077) */
    /* 0x088 */ s16 origin[3];      /* where it was spawned */
    /* 0x08E */ u8 pad08E[2];       /* no access; 0 in every live actor (r286) */
    /* 0x090 */ struct AnimEntry *script;   /* current animation script (AnimTick, SetScript) */
    /* 0x094 */ s32 index;          /* current entry */
    /* 0x098 */ s16 animTimer;      /* frames left on the current pose */
    /* 0x09A */ s16 retIndex;       /* return entry of a called script (-3) */
    /* 0x09C */ struct AnimEntry *retScript;
    /* 0x0A0 */ u8 unkA0[4];        /* no code use found; nonzero only on kind 0x5B (r286) */
    /* 0x0A4 */ s32 unkA4;          /* per kind (sc02_000 / sc02_003) */
    /* 0x0A8 */ u16 unkA8;          /* per kind (sc02_000 / sc02_003) */
    /* 0x0AA */ s16 shrinkTimer;    /* a countdown: func_8017869C steps it and scales the model (and the link chain)
                                       to 0x700/0x1000 while it runs; SegmentHitsPlayer ignores the actor's attacks
                                       while nonzero; at 0 a hit code 0x1E is cleared */
    /* 0x0AC */ s16 heightAdd;      /* added to a linked object's height (TimedGlide) */
    /* 0x0AE */ u16 hitMask;        /* bit 0: left out of the area hit; kinds write -1 / 0 */
    /* 0x0B0 */ s32 step;           /* the reaction step running (SetReactionStep, table D_8018D9DC) */
    /* 0x0B4 */ u32 reactMask;      /* which reaction steps apply: 1, 4, 8, 0x80, 0x100 ... 0x40000 (r286: a mask) */
    /* 0x0B8 */ u8 pad0B8[4];       /* no actor access; 0 in every live actor (r286) */
    /* 0x0BC */ s32 *params;        /* key / value pairs (FindParam; key 0xD continues at a pointer): hooks,
                                       scripts, sounds, the drop */
    /* 0x0C0 */ u8 reactive;        /* nonzero: takes part in hits and reactions (UpdateActors' hit pass) */
    /* 0x0C1 */ u8 react;           /* reaction state; with reactive, RunReaction runs instead of the kind;
                                       0x11 stops AnimTick; EndReaction clears it */
    /* 0x0C2 */ u8 reactMode;       /* 0: the recoil ends with the script, 1: with the timer */
    /* 0x0C3 */ u8 reactBits;       /* bit 0 set / tested by kinds and the reaction code */
    /* 0x0C4 */ u32 reactOpts;      /* bit 1: no damage, hooks only; bit 2: a param script 8 / 0xB / 0x20 plays */
    /* 0x0C8 */ u8 hitFx[2];        /* nonzero: a hit calls func_8002A520 / func_8002A790 (EXE; TakeDamage) */
    /* 0x0CA */ u8 pad0CA[2];       /* no access; 0 in every live actor (r286) */
    /* 0x0CC.. per kind (object_struct 3.3): the engine fixes only message and unkFC, at spawn */
    /* 0x0CC */ void *ext0;         /* a second object: the engine kinds keep a 0x38 shadow / sprite object here */
    /* 0x0D0 */ void *ext1;         /* engine sprite kinds: their sprite-animation player (StepSpriteAnim) */
    /* 0x0D4 */ s32 workD4;
    /* 0x0D8 */ s32 workD8;
    /* 0x0DC */ void *message;      /* def.unk10 at spawn (the message); talk marker 0x83: a callback */
    /* 0x0E0 */ s32 workE0;
    /* 0x0E4 */ s32 workE4;
    /* 0x0E8 */ s32 workE8;         /* a path (s16 pairs) in SC03_001's path follower */
    /* 0x0EC */ s32 workEC;
    /* 0x0F0 */ s32 workF0;
    /* 0x0F4 */ s32 workF4;
    /* 0x0F8 */ s32 workF8;
    /* 0x0FC */ s16 unkFC;          /* def.unkE at spawn; engine kinds: height above the parent, the parent's id */
    /* 0x0FE */ s16 workFE;         /* commonly the parent's id kept at attach time */
    /* 0x100 */ s16 work100;        /* pickups: param & 0x100, "placed" */
    /* 0x102 */ s16 work102;        /* pickups: bounce count */
    /* 0x104 */ s16 work104;
    /* 0x106 */ s16 work106;        /* SC03_001's path follower: the path index */
    /* 0x108 */ s16 work108;
    /* 0x10A */ s16 work10A;        /* often another actor's id */
} StageActor;                       /* 0x10C bytes */

/*
 * The subscreen state at 0x80115110 (g_Subscreen, 0xC0): the menu-like scenes of the stage engine (SubscreenFrame, the
 * mode steps of D_8018E8C0). r380 moved the identical local typedefs of engine_8012F5F4.c and engine_8013C98C.c here and
 * renamed the C typedef StageMode -> Subscreen (r286 via r379); field additions from docs/structs_2.md section 6.
 */
typedef struct Subscreen {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 mode;            /* D_8018E8C0's step */
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u16 frames;          /* frames in the mode */
    /* 0x08 */ u16 fade;            /* 0 to 0x40 in steps of 0x10 */
    /* 0x0A */ u16 cursor;          /* the selected entry (passed to func_8014168C; structs_2 6, M) */
    /* 0x0C */ s16 padHeld;         /* pad 0: GetPadHeldDirWide */
    /* 0x0E */ s16 padPressed;      /* GetPadPressedDirWide */
    /* 0x10 */ s32 unk10;           /* +0x12 is a countdown in some steps (structs_2 6: set to 3 / 8 / 12) */
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 screen;          /* which screen of the scene (compared with 0..4; structs_2 6, M) */
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A[2];
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ s32 message;         /* the message shown (func_8013EB7C) */
    /* 0x24 */ s32 unk24[6];        /* +0x24: a list of 0x20-byte entries in sc01_004 (L) */
    /* 0x3C */ s16 unk3C;
    /* 0x3E */ s16 unk3E;
    /* 0x40 */ s32 unk40[2];
    /* 0x48 */ s16 unk48[8];
    /* 0x58 */ s32 unk58[5];        /* D_8018E8AC >> 6 (func_8013E958); also read as D_80115168 */
    /* 0x6C */ s32 unk6C[3];
    /* 0x78 */ s32 unk78[5];        /* also read as D_80115188 */
    /* 0x8C */ s32 unk8C[11];
    /* 0xB8 */ s32 unkB8[2];        /* D_801151C8 */
} Subscreen;                        /* 0xC0 */
extern Subscreen g_Subscreen;

typedef struct { s16 x, y, z; } Vec3s;

/*
 * A camera (0xA4): the main one at 0x80126948, three alternates from 0x80126E60 (g_CameraIndex 1-3 picks one), three
 * saved from 0x80114EE8, one kept across a map change at 0x801201F8, and the blend at 0x80126DB8 that eases toward the
 * picked one; D_801151D4 points to the one in use. The pairs from +0x08 are (current, target): SnapCamera snaps current
 * to target. r380 moved engine.c's typedef here with docs/structs_2.md section 2's names (dist .. pathStep are M: read
 * from how the values are eased and their defaults; the per-stage behaviours that use them are not traced).
 */
typedef struct Camera {
    /* 0x00 */ void (*update)(struct Camera *c);  /* the behaviour, called each frame with the camera */
    /* 0x04 */ u8 mode;             /* the behaviour's step */
    /* 0x05 */ u8 pad05[3];
    /* 0x08 */ s32 proj;            /* passed to GsSetProjection every frame (0x12C at boot) */
    /* 0x0C */ s32 projTo;
    /* 0x10 */ s32 dist;            /* the distance from the followed point (M) */
    /* 0x14 */ s32 distTo;
    /* 0x18 */ SVECTOR angle;       /* the view angles, vx the pitch (0x238 by default; M) */
    /* 0x20 */ SVECTOR angleTo;
    /* 0x28 */ Vec3s ofs;           /* an offset of the followed point (M) */
    /* 0x2E */ Vec3s ofsTo;
    /* 0x34 */ void *path;          /* a camera script handed to func_80175014 with the step at +0x38 (M) */
    /* 0x38 */ u16 pathStep;        /* its step; bit 15 = finished (M) */
    /* 0x3A */ u8 pad3A[2];
    /* 0x3C */ GsRVIEW2 base;       /* the view before the offsets */
    /* 0x5C */ GsRVIEW2 rview;      /* base + offset, given to GsSetRefView2L */
    /* 0x7C */ s32 offset[7];       /* added to base: vpx, vpy, vpz, vrx, vry, vrz, rz */
    /* 0x98 */ u8 pad98[4];
    /* 0x9C */ s32 unk9C;           /* cleared by the set-up */
    /* 0xA0 */ s16 unkA0;           /* cleared by the set-up; behaviours and the loader write it as a byte (the mode) */
    /* 0xA2 */ s16 unkA2;
} Camera;                           /* 0xA4 */

/*
 * The two effect pools (docs/structs_2.md section 3, r273; r286 checked the owner). They share the object header with
 * StageActor and Player. Defined for the C still to come: nothing in src/ uses them yet (r380).
 */
typedef struct Effect {
    /* 0x00 */ u16 kind;            /* effect kind, 0 free (SpawnEffect, func_80146AFC) */
    /* 0x02 */ u16 state;           /* the handler's step */
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];          /* also read as six s16 by some kinds */
    /* 0x1C */ s32 timer;           /* the countdown */
    /* 0x20 */ ModelObj *model;
    /* 0x24 */ s16 unk24[2];        /* per kind */
    /* 0x28 */ s16 unk28;           /* per kind */
    /* 0x2A */ u16 unk2A;           /* per kind */
    /* 0x2C */ s32 arg0;            /* SpawnEffect's d: a variant */
    /* 0x30 */ u32 arg1;            /* SpawnEffect's e: an angle and a shift in some kinds */
    /* 0x34 */ void *owner;         /* the spawning actor, Musashi or an Effect68 (r286: 202 of 1 535 live effects) */
    /* 0x38 */ MATRIX mtx;          /* a matrix (some kinds keep a pointer here instead; M) */
} Effect;                           /* 0x58; 30 at 0x8011D030 */

typedef struct Effect68 {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 state;
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ s32 timer;
    /* 0x20 */ ModelObj *model;
    /* 0x24 */ u8 pad24[4];
    /* 0x28 */ s32 unk28;
    /* 0x2C */ u8 pad2C[0x20];
    /* 0x4C */ void *owner;         /* the spawn's second argument (func_80146750) */
    /* 0x50 */ s32 arg0;            /* the spawn's f */
    /* 0x54 */ s32 arg1;            /* the spawn's g */
    /* 0x58 */ void *unk58;         /* a pointer in some kinds, s16 at +0x5A / +0x5C in func_80163EC8 */
    /* 0x5C */ s16 unk5C[2];
    /* 0x60 */ s16 scale[3];        /* a vector handed to the model (L) */
    /* 0x66 */ u16 unk66;           /* += 0x40 (an angle; L) */
} Effect68;                         /* 0x68; 20 at 0x8011F9D0 (include/abil.h's AObj68) */

/* Animation script entry: value >= 0 shows `pose` for `value` frames; value < 0 is a command
   (-1 end/return, -2 stop, -3 call `pose` as a script, -4 jump, -5 replay previous, -50 marker). */
typedef struct AnimEntry {
    void *pose;
    s16 value;
    s16 extra;
} AnimEntry;

/* Pose records, one per part. 12-byte form (CalcPartMatrices): translation and three 12-bit angles. */
typedef struct {
    s16 t[3];
    u16 a[3];
} PoseRec12;

/* 8-byte form: angles packed in nibbles of b0 plus b1/b2/a0, translation as signed bytes:
   a0 = rec.a0 & 0xFFF, a1 = (b0 & 0xF) << 8 | b1, a2 = (b0 & 0xF0) << 4 | b2. */
typedef struct {
    u8 b0, b1, b2;
    s8 t[3];
    u16 a0;
} PoseRec8;

/* The movement routines' view of an object (MoveObject, MoveCollideOfs, TickTimer ...): every one of them is called with
   pool actors, so these are StageActor's fields at the same offsets (object_struct conflict 13; r380 keeps the view
   because those routines read hitData as a pointer) */
typedef struct {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 state;
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ s32 timer;           /* a countdown (TickTimer) */
    /* 0x20 */ ModelObj *model;
    /* 0x24 */ u8 pad24[0x14];
    /* 0x38 */ Fixed prev[3];       /* the position before this frame's move (MoveCollideOfs) */
    /* 0x44 */ s32 accel[3];
    /* 0x50 */ s16 ofs[3];          /* added to the position given to the model (SyncModelPos) */
    /* 0x56 */ u8 pad56[2];
    /* 0x58 */ void *hitData;       /* the model's collision data (PathHitsModel) */
    /* 0x5C */ u16 hitState;        /* StageActor.hitState */
} Mover;

/*
 * Musashi's object at 0x80126B58 (g_Player): the shared header (+0x00..+0x23), then his own fields. Layout from
 * docs/object_struct.md section 3.4 (r273) with r286's corrections (docs/cloud_factcheck.md) and docs/musashi_state.md;
 * r380, 7 Nov 2026. His +0x00 is a state (docs/musashi_state.md's numbered table), not a kind. Fields named here have
 * a code use; unkXX keep their offset; padNN had no access in the census. +0x24C..+0x257 is 0 in every dump (r286).
 */
typedef struct Player {
    /* 0x000 */ u16 state;          /* his state: 0 standing, 1 moving, 2 jump, 3 fall ... (docs/musashi_state.md) */
    /* 0x002 */ u16 sub;            /* the step inside the state */
    /* 0x004 */ Fixed pos[3];
    /* 0x010 */ s32 vel[3];         /* added to pos each move (bit 31 of status set while moving) */
    /* 0x01C */ s32 timer;          /* a countdown (func_80146E90 / func_80146E98) */
    /* 0x020 */ ModelObj *model;
    /* 0x024 */ s32 push[3];        /* a second velocity, set clamped per axis (func_80146DE8) */
    /* 0x030 */ u8 pad030[4];
    /* 0x034 */ s32 fallSpeed;      /* added to pos.y; func_801477E8 clamps it to +-0x1F0000 (others pass it) */
    /* 0x038 */ void *hitData;      /* his model's collision data (PathHitsModel); can carry flag bits (r286) */
    /* 0x03C */ u16 hitState;       /* bit 0: a hit noted this frame (HitPlayer); bit 15 is set by func_8014900C each
                                       update, so it is not a hit flag (r286) */
    /* 0x03E */ u16 hitCode;        /* the hit's code: bit 15, 0x4002, 0x800 set by attackers */
    /* 0x040 */ s16 hitDamage;      /* the damage of the hit (ActorSegmentDamagesPlayer) */
    /* 0x042 */ s16 hitAngle;       /* the facing of what hit him (ActorSegmentHitsPlayer) */
    /* 0x044 */ u32 status;         /* status and display flags: 0x30000000 all parts shown, 0x20000000, 0x10000000,
                                       0x400 / 0x20000 / 0x4 weapon rules (UpdateWeaponParts), 0xC0 face distance;
                                       0x1 guarding, 0x2 attacking, 0x4 Lumina thrown, 0x10 absorb phase (r286) */
    /* 0x048 */ s32 unk48;
    /* 0x04C */ u8 unk4C;
    /* 0x04D */ u8 updatePhase;     /* index of D_8018FB9C: 1 runs his state update, 2 stops it (BeginScene, EndScene;
                                       r286: was sceneMark) */
    /* 0x04E */ u8 state4E;         /* small state byte: RunStateHandler4E calls table[state4E - 1]; ovl36 tests it */
    /* 0x04F */ u8 handler4F;       /* index of the handler table D_8018F8A8 (func_80158880) */
    /* 0x050 */ s32 travel[3];      /* += vel each frame, cleared together (func_8015AE2C, M) */
    /* 0x05C */ s32 unk5C;
    /* 0x060 */ s16 scaleA[3];      /* set to 0x1000 together (a scale, M) */
    /* 0x066 */ s16 unk66;
    /* 0x068 */ s16 scaleB[3];      /* 0x1000 at stage set-up (M) */
    /* 0x06E */ u8 pad06E[2];
    /* 0x070 */ s16 scaleC[3];      /* 0x1000 at stage set-up (M) */
    /* 0x076 */ u8 pad076[0x12];
    /* 0x088 */ s16 respawn[3];     /* the position he is put back to (M) */
    /* 0x08E */ u8 pad08E[2];
    /* 0x090 */ SVECTOR respawnPrev;  /* the previous respawn point (M) */
    /* 0x098 */ SVECTOR unk98;
    /* 0x0A0 */ u8 pad0A0[8];
    /* 0x0A8 */ u8 blink;           /* invulnerability blink: 0x20 after a hit, odd frames hidden (M) */
    /* 0x0A9 */ u8 unkA9;
    /* 0x0AA */ u16 padHeld;        /* held buttons, game order (R1 0x0008, Triangle 0x0010, Cross 0x0040, Square
                                       0x0080); r286 from func_80148648 */
    /* 0x0AC */ u16 padPressed;     /* pressed buttons, same order */
    /* 0x0AE */ u8 unkAE[2];
    /* 0x0B0 */ s32 *animTable;     /* his animations by number */
    /* 0x0B4 */ s32 anim;           /* the animation playing */
    /* 0x0B8 */ u16 animStatus;     /* 0x8000: the animation has ended (M) */
    /* 0x0BA */ s16 animTimer;
    /* 0x0BC */ u8 animIndex;
    /* 0x0BD */ u8 animStart;
    /* 0x0BE */ u8 unkBE;
    /* 0x0BF */ u8 unkBF;
    /* 0x0C0 */ u8 pad0C0[8];
    /* 0x0C8 */ u32 face;           /* face word (FaceSet); bit 0x40000000 = copy from the face rect table */
    /* 0x0CC */ s32 *faceTable;     /* face scripts by number (StartFace) */
    /* 0x0D0 */ s32 *faceScript;    /* the face script playing */
    /* 0x0D4 */ u16 faceTimer;
    /* 0x0D6 */ u16 faceTimer2;
    /* 0x0D8 */ u8 faceIndex;
    /* 0x0D9 */ u8 faceStart;
    /* 0x0DA */ u8 unkDA;
    /* 0x0DB */ u8 pad0DB;
    /* 0x0DC */ u8 unkDC;           /* set when an animation starts (func_80154218) */
    /* 0x0DD */ u8 lastHit;         /* the low byte of the last hit code (M) */
    /* 0x0DE */ u8 prevState;       /* his state (+0x00) when the current step began (M) */
    /* 0x0DF */ u8 unkDF;
    /* 0x0E0 */ SVECTOR hitP0;      /* the hit's two points */
    /* 0x0E8 */ SVECTOR hitP1;
    /* 0x0F0 */ u16 takenCode;      /* hitCode when the hit is taken (M) */
    /* 0x0F2 */ s16 takenDamage;    /* hitDamage when the hit is taken (M) */
    /* 0x0F4 */ s16 takenAngle;     /* hitAngle when the hit is taken (M) */
    /* 0x0F6 */ s16 unkF6;
    /* 0x0F8 */ u8 pad0F8[0x36];
    /* 0x12E */ s16 unk12E;
    /* 0x130 */ u8 pad130[8];
    /* 0x138 */ s16 posOfs[4];      /* an offset added to his position (M) */
    /* 0x140 */ SVECTOR unk140;     /* copied whole; .pad (+0x146) is a flag */
    /* 0x148 */ u8 pad148[0xC];
    /* 0x154 */ s16 focus[3];       /* the point the camera follows */
    /* 0x15A */ u8 pad15A[2];
    /* 0x15C */ s16 point[3];       /* another point of his (objects turn to it, HeadingToTarget) */
    /* 0x162 */ s16 pointUnset;     /* nonzero: that point is not set (DistSqToTarget) */
    /* 0x164 */ u8 pad164[8];
    /* 0x16C */ u16 unk16C;
    /* 0x16E */ u16 targetClass;    /* the targeted actor's class (its +0x75; M) */
    /* 0x170 */ s32 unk170;
    /* 0x174 */ u8 pad174[4];
    /* 0x178 */ s32 carried;        /* a carried object (r286, docs/musashi_state.md; M) */
    /* 0x17C */ s32 unk17C;
    /* 0x180 */ struct StageActor *target;  /* an actor whose model's facing is read (M) */
    /* 0x184 */ s32 unk184;
    /* 0x188 */ s16 absorbCount;    /* Assimilation's absorb counter (r286: was a "squash target") */
    /* 0x18A */ s16 unk18A;
    /* 0x18C */ u8 *unk18C;
    /* 0x190 */ s32 unk190;
    /* 0x194 */ u16 targetId;       /* an actor's id (M) */
    /* 0x196 */ u8 unk196;
    /* 0x197 */ u8 abilStep;        /* the step of the button-ability template (include/abil.h; M) */
    /* 0x198 */ s32 unk198;         /* a handle from func_8013767C, checked with func_801399F0 */
    /* 0x19C */ u8 pad19C[4];
    /* 0x1A0 */ u8 unk1A0;
    /* 0x1A1 */ u8 pad1A1[7];
    /* 0x1A8 */ u8 toggles[4];      /* +0x1A8 / +0x1AB toggled with ^= 1, +0x1AA a step (L) */
    /* 0x1AC */ s32 unk1AC;
    /* 0x1B0 */ s32 unk1B0;
    /* 0x1B4 */ s32 unk1B4;         /* an animation handed to func_80154274 */
    /* 0x1B8 */ s16 unk1B8[2];      /* 0x1000 at stage set-up */
    /* 0x1BC */ u8 unk1BC[12];      /* small flags and timers */
    /* 0x1C8 */ s16 unk1C8[5];
    /* 0x1D2 */ u8 pad1D2[2];
    /* 0x1D4 */ s32 unk1D4[2];
    /* 0x1DC */ u8 pad1DC[0xC];
    /* 0x1E8 */ void **unk1E8;      /* a handler table */
    /* 0x1EC */ u8 pad1EC[0xC];
    /* 0x1F8 */ u32 action;         /* the action handler: & 0x80FFFFFF the function; flags 0x01 / 0x02 / 0x04 / 0x08 /
                                       0x10000000 (r286) */
    /* 0x1FC */ s32 *actionScript;  /* its script (func_8016EFC8) */
    /* 0x200 */ s32 actionTimer;    /* a countdown, true at 0 */
    /* 0x204 */ s32 action204;      /* cleared with the handler (M) */
    /* 0x208 */ s32 action208;
    /* 0x20C */ s16 action20C;
    /* 0x20E */ s16 action20E;
    /* 0x210 */ s16 action210[2];
    /* 0x214 */ u8 phase;           /* the action's phase: NextPhase, SetPhase; handlers dispatch on it */
    /* 0x215 */ u8 phaseSub1;       /* BumpSub1 */
    /* 0x216 */ u8 phaseSub2;       /* BumpSub2 */
    /* 0x217 */ u8 phaseEnd;        /* 1 / 2 (M) */
    /* 0x218 */ u8 action218;       /* the third argument of func_8016ED8C (M) */
    /* 0x219 */ u8 pad219[3];
    /* 0x21C */ s32 crestEvent;     /* the record the crest object passed (r286: was nextAction; M) */
    /* 0x220 */ u8 pad220[3];
    /* 0x223 */ u8 unk223;
    /* 0x224 */ u8 pad224[0x10];
    /* 0x234 */ s32 abilPos[3];     /* a second position, += vel (M) */
    /* 0x240 */ s32 unk240;
    /* 0x244 */ u16 savedPos[3];    /* his position saved, later copied to respawn (M) */
    /* 0x24A */ s16 unk24A;
    /* 0x24C */ u8 pad24C[0xC];     /* 0 in every dump (r286); 0x80126DB0 is a separate record */
} Player;                           /* 0x258 */
extern Player g_Player;       /* Musashi */

#endif
