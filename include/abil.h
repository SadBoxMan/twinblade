#ifndef ABIL_H
#define ABIL_H

/* The ability packages (src/abil/, docs/overlays.md). Most of their functions take the stage engine's actor
   (Musashi's object); its layout is not mapped yet, so its fields are read by offset: AF(a, u8, 0x197) is the step
   of the button-ability template (docs/abilities.md), AF(a, u16, 2) the actor's state. */
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef void (*AbilStep)();     /* a step or state handler, most take the actor */

/* an SVECTOR's layout (psyq.h is not included: its prototypes clash with the packages' externs); copied whole, its
   2-byte alignment gives the lwl/lwr pairs (r127) */
typedef struct { s16 vx, vy, vz, pad; } AVec;

/* a CVECTOR's layout (r, g, b, cd); copied whole, its 1-byte alignment gives one lwl/lwr + swl/swr pair (r131) */
typedef struct { u8 r, g, b, cd; } ACol;

/* a primitive built on the stack (four SVECTORs, four CVECTORs, a code word) and handed to func_80017758 with a
   model's matrix; written field by field with chained stores, `s.v[1].vx = s.v[1].vy = s.v[1].vz = 0` (r131) */
typedef struct { AVec v[4]; ACol c[4]; s32 code; } APrim;

/* one entry of the 0x68-stride object array at D_8011F9D0 (20 entries); indexed through a base pointer,
   `AObj68 *p = D_8011F9D0; p[i].type`, its loops count up as the originals do (r131) */
typedef struct { u16 type; u8 pad02[0x66]; } AObj68;

/* a MATRIX's layout (0x20 bytes); copied whole it gives the four-words-at-a-time lw/sw blocks (r127) */
typedef struct { s16 m[3][3]; s32 t[3]; } AMtx;

/* game.h's ModelObj (the drawn model an actor keeps at +0x20), cut at +0x30. Its stores must be struct stores:
   GCC 2.7.2 then lets loads from other pointers move above them (r127, func_ovl34_800CDD9C) */
typedef struct {
    /* 0x00 */ u16 type;
    /* 0x02 */ s16 kind;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s16 pos[3];
    /* 0x0E */ u8 pad0E[2];
    /* 0x10 */ AVec rot;
    /* 0x18 */ AVec scale;
    /* 0x20 */ void *pose;
    /* 0x24 */ u32 *parts;
    /* 0x28 */ u32 colour;
    /* 0x2C */ u16 flags;
    /* 0x2E */ u16 unk2E;
} AModel;

#endif
