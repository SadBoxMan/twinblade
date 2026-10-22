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
 * Model object: one drawn model instance (the live logger's object array, stride 0x84; func_8001C2C4 family
 * initialises it, func_8001C1E4 links it to a parent). The live logger reads +0x20 pose, +0x24 part table,
 * +0x34..+0x44 rotation and +0x48..+0x50 position: those are pose, parts and coord.coord.
 */
typedef struct {
    /* 0x00 */ u16 type;            /* 0 free, 1 a model (0x84 bytes), 2 a 0x38-byte object (func_8001C2C4 / C448 / C558 set it) */
    /* 0x02 */ s16 kind;            /* 0, 1, 7 ... set by the init variant */
    /* 0x04 */ u32 unk04;           /* bit 31 cleared, set and toggled by stage func_8012E88C / 8A8 / 8C4 */
    /* 0x08 */ s16 pos[3];          /* the owner's position (integer part); coord's translation follows it */
    /* 0x0E */ u8 pad0E[2];
    /* 0x10 */ SVECTOR rot;         /* rotation, turned into coord's matrix (stage func_8012B2CC and its kin) */
    /* 0x18 */ SVECTOR scale;       /* 0x1000 = 1.0; x and z eased together (stage func_8012E470) */
    /* 0x20 */ void *pose;          /* current pose: per-part records (8- or 12-byte form) */
    /* 0x24 */ u32 *parts;          /* part table: one draw word per part; bit 24 hides it (PartHide/PartShow) */
    /* 0x28 */ u32 colour;
    /* 0x2C */ u16 flags;           /* bit 0: the position changed (stage func_8012B260) */
    /* 0x2E */ u16 unk2E;
    /* 0x30 */ GameCoord2 coord;    /* +0x34 rotation, +0x48 position, +0x78 parent */
    /* 0x80 */ u8 pad80[4];
} ModelObj;                         /* 0x84 bytes */

/* a 16.16 fixed-point value; the integer half is the high word */
typedef union {
    s32 w;
    struct { u16 frac; s16 i; } h;
} Fixed;

/* A spawn definition: what func_8012C890 makes an actor from (stage data, or built on the stack by func_8012C588) */
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
 * Stage actor: the engine's per-character state (96 of them, 0x10C bytes each, at 0x801202A0 in dump_10's stage;
 * the animation controller 0x8012AAAC, the part routines 0x801552F4.., the face routines 0x80154ED8..).
 */
typedef struct StageActor {
    /* 0x000 */ u16 state;          /* 0: unused (the animation stepper skips it) */
    /* 0x002 */ u16 sub;            /* sub-state: func_8012AD44 sets it, func_8012AD50 steps it, both restart subTime */
    /* 0x004 */ Fixed pos[3];       /* 16.16 */
    /* 0x010 */ s32 vel[3];
    /* 0x01C */ s32 count;          /* a countdown (Mover's timer) */
    /* 0x020 */ ModelObj *model;    /* the drawn model; the controller writes model->pose */
    /* 0x024 */ u8 pad024[0x10];
    /* 0x034 */ u16 subTime;        /* a count kept in the sub-state (func_8012AD64 sets, func_8012AD6C steps) */
    /* 0x036 */ u16 id;             /* a serial number, from D_801270C4 at spawn (never 0) */
    /* 0x038 */ Fixed prev[3];      /* the position before the last move (Mover.prev) */
    /* 0x044 */ u32 display;        /* display flags: 0x30000000 all parts shown, 0x20000000, 0x10000000,
                                       0x400 / 0x20000 / 0x4 weapon rules (UpdateWeaponParts), 0xC0 face distance */
    /* 0x048 */ u8 pad048[5];
    /* 0x04D */ u8 sceneMark;       /* 1 = BeginScene, 2 = EndScene */
    /* 0x04E */ u8 state4E;         /* small state byte: RunStateHandler4E calls table[state-1] */
    /* 0x04F */ u8 pad04F;
    /* 0x050 */ s16 ofs[3];         /* added to the position given to the model */
    /* 0x056 */ u8 pad056[2];
    /* 0x058 */ u32 hitData;        /* collision data; the top nibble holds flags (0x60000000 at set-up) */
    /* 0x05C */ u16 flags5C;        /* from the init record; bit 15 set and cleared by func_8012BF54/68 */
    /* 0x05E */ s16 unk5E;
    /* 0x060 */ s16 unk60;
    /* 0x062 */ s16 unk62;          /* a heading (the model's plus half a turn, func_8012E4C8) */
    /* 0x064 */ struct StageActor *parent;  /* the actor that spawned it (func_8012C890), else NULL */
    /* 0x068 */ struct SpawnDef *def;  /* the definition it was spawned from (func_8012C890) */
    /* 0x06C */ u8 pad06C[4];
    /* 0x070 */ s16 unk70;          /* the definition's unk8 */
    /* 0x072 */ u16 animFlags;      /* 0x4000 wrapped, 0x2000 marker passed, 0x0400 stepped back, 0x0600 cleared on SetScript */
    /* 0x074 */ u8 unk74;           /* picks func_8012E014 (nonzero) or func_8012E138 (func_8012DFD4) */
    /* 0x075 */ u8 pad075;
    /* 0x076 */ s16 unk76;          /* the init record's first value (x1.5 unless D_80078EAE is set) */
    /* 0x078 */ void *init;         /* the init record (func_8012C354) */
    /* 0x07C */ s16 hitPos[3];       /* where it was when hit (damage type 0x1D, func_8012E9C0) */
    /* 0x082 */ u16 hitFlags;        /* bit 0: the hit finished it (func_8012E9C0) */
    /* 0x084 */ u8 pad084[4];
    /* 0x088 */ s16 origin[3];      /* where it was spawned */
    /* 0x08E */ u8 pad08E[2];
    /* 0x090 */ struct AnimEntry *script;   /* current animation script */
    /* 0x094 */ s32 index;          /* current entry */
    /* 0x098 */ s16 timer;          /* frames left on the current pose */
    /* 0x09A */ s16 retIndex;       /* return entry of a called script (-3) */
    /* 0x09C */ struct AnimEntry *retScript;
    /* 0x0A0 */ u8 pad0A0[0x0A];
    /* 0x0AA */ s16 unkAA;          /* nonzero: it cannot hit Musashi (func_8012DF34) */
    /* 0x0AC */ s16 unkAC;          /* added to a linked object's height (func_8012FB54) */
    /* 0x0AE */ u8 pad0AE[2];
    /* 0x0B0 */ s32 step;          /* the reaction step running (func_80131E00 sets it and calls table 0x8018D9DC) */
    /* 0x0B4 */ u32 unkB4;          /* reaction flags: 4, 8, 0x80 pick the steps of func_8012F75C.. */
    /* 0x0B8 */ u8 pad0B8[4];
    /* 0x0BC */ s32 *params;       /* key / value pairs (func_80131CF4 looks one up; key 0xD continues at a pointer) */
    /* 0x0C0 */ u8 pad0C0;
    /* 0x0C1 */ u8 unkC1;           /* 0x11: the animation stepper leaves it alone */
    /* 0x0C2 */ u8 unkC2;
    /* 0x0C3 */ u8 unkC3;
    /* 0x0C4 */ u32 unkC4;          /* bit 1: skips the hit reaction (func_8012F5F4) */
    /* 0x0C8 */ u32 face;           /* face word (FaceSet); bit 0x40000000 = copy from the face rect table */
    /* 0x0CC */ u32 **faceTable;    /* face scripts by number */
    /* 0x0D0 */ u32 *faceScript;    /* face script being played */
    /* 0x0D4 */ s32 faceTimer;
    /* 0x0D8 */ s32 faceIndex;
    /* 0x0DC */ void *messages[2];  /* NPC record message pointers (more follow in the record) */
    /* 0x0E4 */ u8 pad0E4[0x18];
    /* 0x0FC */ u16 unkFC;          /* the definition's unkE */
    /* 0x0FE */ u8 pad0FE[0x0E];
} StageActor;                       /* 0x10C bytes */

/* Animation script entry: value >= 0 shows `pose` for `value` frames; value < 0 is a command
   (-1 end/return, -2 stop, -3 call `pose` as a script, -4 jump, -5 replay previous, -50 marker). */
typedef struct AnimEntry {
    void *pose;
    s16 value;
    s16 extra;
} AnimEntry;

/* Pose records, one per part. 12-byte form (func_80020248): translation and three 12-bit angles. */
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

/* an object that moves by velocity and acceleration (not a StageActor: +0x44 is the display word there) */
typedef struct {
    /* 0x00 */ u16 state;
    /* 0x02 */ u16 sub;
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ s32 timer;           /* a countdown (func_8012BEE8) */
    /* 0x20 */ ModelObj *model;
    /* 0x24 */ u8 pad24[0x14];
    /* 0x38 */ Fixed prev[3];       /* the position before this frame's move (func_8012CC88) */
    /* 0x44 */ s32 accel[3];
    /* 0x50 */ s16 ofs[3];          /* added to the position given to the model (func_8012B260) */
    /* 0x56 */ u8 pad56[2];
    /* 0x58 */ void *hitData;       /* the model's collision data (func_80135888) */
    /* 0x5C */ u16 flags5C;
} Mover;

/* Musashi's object at 0x80126B58: an actor's header (state, 16.16 position), then his own fields */
typedef struct {
    /* 0x000 */ u16 state;
    /* 0x002 */ u16 sub;
    /* 0x004 */ Fixed pos[3];
    /* 0x010 */ u8 pad010[0x10];
    /* 0x020 */ ModelObj *model;
    /* 0x024 */ u8 pad024[0x14];
    /* 0x038 */ void *hitData;      /* his model's collision data (func_80135888) */
    /* 0x03C */ u16 hitFlags;       /* hits noted this frame (func_8012F568) */
    /* 0x03E */ s16 unk3E;
    /* 0x040 */ s16 unk40;          /* set by a hit test (func_8012D5E4) */
    /* 0x042 */ s16 unk42;          /* the facing of what hit him (func_8012DEB8) */
    /* 0x044 */ u8 pad044[0x9C];
    /* 0x0E0 */ SVECTOR hitP0;      /* the hit's two points */
    /* 0x0E8 */ SVECTOR hitP1;
    /* 0x0F0 */ u8 pad0F0[0x64];
    /* 0x154 */ s16 focus[3];       /* the point the camera follows */
    /* 0x15A */ u8 pad15A[2];
    /* 0x15C */ s16 unk15C[3];      /* another point of his (objects turn to it, func_8012B864) */
    /* 0x162 */ s16 unk162;         /* nonzero: that point is not set (func_8012BCCC) */
    /* 0x164 */ u8 pad164[0x24];
    /* 0x188 */ s16 unk188;         /* 0 to 0x90: sets an actor's squash target (func_8012E364) */
} Player;
extern Player D_80126B58;       /* Musashi */

#endif
