/*
 * The stage engine's actor state machine, from 0x8012F5F4: the reaction steps (two handler tables at 0x8018D8A0 and
 * 0x8018D9DC), the step helpers (func_801319E0, func_80131A34, func_80131CA8, func_80131E00, ...), the message windows,
 * to 0x8013B568, where the -O0 file engine_8013B568.c begins.
 *
 * A source file of its own in the original (docs/stage_engine.md, "Source files"): its calls to engine.c's inline
 * helpers are real calls (func_80130858 calls func_8012AD80, func_801319E0 calls func_8012C218), and its data starts
 * at 0x8018D870, after engine.c's (the table at 0x8018D9CC repeats engine.c's 0x8018D860).
 */
#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

#define PARTS(a) (*(s32 *)(*(u8 **)((a) + 0x20) + 0x24))

extern s32 func_80029178(s32 n);
extern void func_800183E0(s32 w);
extern void func_8002D4C8(s32 a, s32 b);
void func_80146074(void);
void func_8012B14C(Mover *m, VECTOR *v);
void func_8012B23C(Mover *m);
s32 func_8012BCCC(Mover *m);
s32 func_8012BEE8(Mover *m);
s32 func_8012CBCC(Mover *m);
s32 func_8012CBF4(Mover *m);

extern u32 D_800DE2A4[];
extern void func_8001D130(s32 a, s32 b);
extern void func_8001D150(s32 a, s32 b);
extern s32 func_8014BEF8(u8 *a);
extern s32 (*D_8018F378[])(u8 *a);
extern u8 D_8018F338[];
extern void MoveImage(void *rect, s32 x, s32 y);
/* the ability Musashi holds (docs/abilities.md): EC1 ability, EC2 the HUD's, EC3 out-of-body saved, EC4 used once,
   EC8 frames left; EB8 BP. The per-ability tables are stage data (SC03_001's addresses). */
extern u8 D_80078EC1;
extern u8 D_80078EC2;
extern u8 D_80078EC3;
extern u8 D_80078EC4;
extern s32 D_80078EC8;
extern u16 D_80078EB8;
extern u8 D_801901EC[];
extern s32 D_8019020C[];
extern u8 D_80190288[];
extern u8 D_801902A8[];
extern u8 D_801902C8[];
extern void (*D_801902E8[])(u8 *obj);
extern s32 D_8012672C;
extern s32 D_8012811C;
extern s32 D_80126B08;
extern s32 D_80078E94;
extern s32 D_80078E9C;
extern s32 D_80078EA0;
extern s32 D_80078EA4;
extern s32 D_80078EA8;
extern u8 D_80078EBB;
extern s32 D_80078ECC;
extern s32 D_80078ED0;
extern s32 D_80078ED4;
extern s32 D_80078ED8;
extern s32 D_80078EDC;
extern u8 D_80078EE0;
extern void func_800CAF6C(u8 *obj);
extern void func_80165AC8(u8 *obj);
u32 func_80165658(u8 *obj, u32 ability);
void func_801657D8(void);
void func_80165874(void);
void func_80165A20(u8 *obj);
void func_80165A50(u8 *obj);
void func_80165A78(u8 *obj);
void func_80131B14(StageActor *a);
void func_80131E00(StageActor *a, s32 n);
s32 func_80131A34(StageActor *a, s32 n);
s32 func_80131CA8(StageActor *a, s32 n);
extern u8 D_8018D87C[];
extern u8 D_8018D888[];
void func_80131170(StageActor *a, u8 *data, s32 n);
void func_80131340(StageActor *a);
void func_80131C78(StageActor *a);
extern VECTOR D_8018D894;
void func_801319E0(StageActor *a);
StageActor *func_80143B6C(StageActor *a, s32 n);
void func_80130D48(StageActor *a);
s32 func_80131AC8(StageActor *a, s32 n);
void func_8012E364(StageActor *a);
void func_80143CD4(StageActor *a);
void func_800CB0E8(StageActor *a);
s32 func_80131D68(StageActor *a, s32 f);
s32 func_80146A6C(s32 kind, StageActor *owner, s16 x, s16 y, s16 z, s32 d, s32 e);

/* a hit reaction step */
void func_8012F5F4(StageActor *a) {
    a->unkC1 = 1;
    if (a->unkC4 & 2) {
        func_80131CA8(a, 3);
        return;
    }
    func_80131B14(a);
    if (a->unk76 <= 0) {
        func_80131E00(a, 0xC);
        return;
    }
    if (func_80131A34(a, 4) != 0) {
        a->unkC2 = 0;
    } else {
        a->timer = 0;
        a->unkC2 = 1;
        a->count = 0x10;
    }
    func_80131CA8(a, 3);
}

void func_8012F68C(StageActor *a) {
    s32 done = 0;
    s32 r;
    if (!(a->unkC4 & 2) && (a->unkB4 & 1)) {
        if ((u8)func_8012CBCC((void *)a) == 2) {
            func_80131E00(a, 0x12);
            return;
        }
        if (a->unkC2 != 0) {
            r = func_8012BEE8((void *)a);
        } else {
            r = a->animFlags & 0x4000;
        }
        if (r) {
            done = 1;
        }
        if (done) {
            func_80131C78(a);
        }
    }
    func_80131CA8(a, 5);
}

void func_8012F75C(StageActor *a) {
    a->unkC1 = 3;
    if (a->unkB4 & 4) {
        func_80131B14(a);
        a->count = 0x10;
        a->timer = 0;
    }
    func_80131CA8(a, 6);
}

void func_8012F7B4(StageActor *a) {
    if (a->unkB4 & 4) {
        func_8012BEE8((void *)a);
        if (a->count == 1 && func_80131A34(a, 8) == 0) {
            func_80131A34(a, 0x20);
        }
    }
    func_80131CA8(a, 7);
}

void func_8012F828(StageActor *a) {
    a->unkC1 = 4;
    if (a->unkB4 & 8) {
        func_80131170(a, D_8018D87C, 0xB);
    }
    func_80131CA8(a, 9);
}

void func_8012F87C(StageActor *a) {
    if (a->unkB4 & 8) {
        func_80131340(a);
    }
    func_80131CA8(a, 0xA);
}

void func_8012F8C8(StageActor *a) {
    a->unkC1 = 7;
    if (a->unkB4 & 0x80) {
        func_80131170(a, D_8018D888, 0xB);
    }
    func_80131CA8(a, 0x16);
}

void func_8012F91C(StageActor *a) {
    if (a->unkB4 & 0x80) {
        func_80131340(a);
    }
    func_80131CA8(a, 0x17);
}

void func_8012AD80(Mover *m);
void func_801312D0(StageActor *a, SVECTOR *out);
void func_80166244(StageActor *a);

s32 func_80133784(s16 kind, SVECTOR *a, SVECTOR *b);
extern void (*D_8018D89C[])(StageActor *a);

typedef struct {
    u8 pad[0x3A];
    u16 hpMax;
    u16 hp;
    u16 bpMax;
    u16 bp;
} Stats;
extern Stats D_80078E78;
extern u16 D_80078EB2;
extern u16 D_80078EB4;
extern s16 D_8018D91C[];
extern s16 D_8018D97C[];
extern s16 D_8018D984[];
extern s16 D_8018D9A4[];
extern s16 D_8018D8EC[];
u32 func_80131CF4(s32 *list, s32 key);
StageActor *func_8012C658();
extern int rand(void);

extern u8 D_8018D870[];
extern SVECTOR D_8018D9C4;
extern void (*D_8018D9DC[])(StageActor *a);
extern u8 D_8018D9CC[];
void func_8012C218(StageActor *a);
void func_8012B2CC(Mover *m);
extern void StartRumbleScript(u8 *p);
void func_8016AA50(StageActor *a, s32 n);
void func_8016B428(StageActor *a);
extern void func_8002A04C(StageActor *a);
extern void func_8002A520(StageActor *a);
extern void func_8002A790(StageActor *a);
void SetScript(StageActor *a, AnimEntry *script);

s32 func_8012CBA4(Mover *m);
s32 func_8012CC64(Mover *m, SVECTOR *ofs);
s32 func_8012CEB0(SVECTOR *from, SVECTOR *to, s32 mode);
void func_8012DBD0(StageActor *a, s32 speed, s32 angle, s32 n);
extern s32 D_801ED368;
extern s32 D_801ED36C;

s32 func_8012E470(Mover *m);
void func_8012E4C8(StageActor *a);
u8 *func_8012C1B8(void);
void func_8012CAE4(StageActor *a);
extern void func_8001C214(u8 *o, void *data);
extern void (*D_8018DA7C[])(StageActor *a);
extern void (*D_8018DA84[])(StageActor *a);
extern void (*D_8018DA8C[])(StageActor *a);
extern void (*D_8018DA94[])(StageActor *a);
typedef struct {
    void *message;
    u8 hit[0x10];
} NpcRecord;
extern NpcRecord D_8018DA34[];
extern u8 D_8018DA3C[];
extern u8 D_8018DA4C[];
extern u8 D_8018DA5C[];
extern u8 D_8018DA6C[];

/* MIMe vertex animation (libgte's gteMIMefunc): a TMD's vertices and normals rebuilt each frame from a base model
   plus weighted differences, the key frames played in turn */
typedef struct {
    u32 id;
    u32 flags;                      /* 1: the tops below are addresses; else offsets from the object table (+0xC) */
    u32 nobj;
    u32 vert_top;
    u32 n_vert;
    u32 normal_top;
    u32 n_normal;
} TmdHead;
typedef struct {
    TmdHead *base;
    s32 *vdiff;                     /* { ?, ?, first vertex, count, SVECTOR differences } */
    s32 *ndiff;
} MimeData;
typedef struct {
    MimeData *data;                 /* -1 ends, NULL loops back to the first key */
    s16 len;
    s16 step;                       /* negative: played backwards */
} MimeKey;
typedef struct {
    MimeKey *keys;
    s16 index;
    s16 time;
    TmdHead *tmd;
    u32 flags;                      /* 0x4000 ended, 0x8000 looped */
} MimeAnim;
#define TMD_TOP(t, f) ((t)->flags == 1 ? (u32 *)(t)->f : (u32 *)(t) + (((t)->f >> 2) + 3))
extern void *memcpy(void *dst, const void *src, u32 n);
extern void gteMIMefunc(SVECTOR *otp, SVECTOR *dfp, s32 n, s32 p);
void func_801325B8(TmdHead *dst, TmdHead *src, s32 *vd, s32 *nd, s32 w);

typedef struct Prop Prop;
Prop *func_8012913C(u16 kind);
void func_80129350(Prop *e, Prop *from);
extern void Square0(VECTOR *in, VECTOR *out);
extern void VectorNormalSS(SVECTOR *in, SVECTOR *out);
void func_801330E0(SVECTOR *v, SVECTOR *out, s16 a);
extern void *D_801ED3B0;        /* the current header, relocated by func_80136BC4 */
extern void *D_801ED3B4;        /* two more, picked by index (func_8013373C) */
extern void *D_801ED3B8;
void func_80136BC4(void *h);
/* a header whose section offsets (+0xC..+0x1C) become addresses once; +8 is 0x20 until then */
typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
} RelocHead;

void func_8012F0BC(MATRIX *m, VECTOR *in, VECTOR *out);
void func_8012F1A4(MATRIX *m, VECTOR *in, VECTOR *out);
void func_8013339C(MATRIX *m, SVECTOR *scale);
extern s32 D_80126B5C;          /* Musashi's position words */
extern s32 D_80126B60;
extern s32 D_80126B64;
/* a model's collision box: the ranges on each axis (StageActor / Mover hitData, a KSEG0 address) */
typedef struct {
    s16 unk0;
    s16 unk2;
    s16 x0, x1;
    s16 y0, y1;
    s16 z0, z1;
} HitBox;

extern void ApplyTransposeMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);

extern SVECTOR *D_8018DA9C;     /* the path's start and end (pad: the height word) */
extern SVECTOR *D_8018DAA0;
extern s16 D_801ED3BC;
extern s16 D_801ED3C0;
s32 func_80133AB0(s16 kind, s16 x, s16 z, void *h);
extern s32 SquareRoot0(s32 a);

extern SVECTOR *D_8018DAA4;
extern SVECTOR *D_8018DAA8;
s32 func_801345F8(void *h, SVECTOR *s, SVECTOR *e);
s32 func_80134A74(u16 kind, s16 x, s16 z, void *h);
extern void (*D_8018DAB8[])(void);
void func_80136C3C(void);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
/* a ten-character text */
typedef struct {
    u8 c[10];
} Text10;
extern Text10 D_801EBEBC;

/* a Gouraud line */
typedef struct {
    /* 0x00 */ u32 tag;
    /* 0x04 */ u8 r0, g0, b0, code;
    /* 0x08 */ s16 x0, y0;
    /* 0x0C */ u8 r1, g1, b1, p1;
    /* 0x10 */ s16 x1, y1;
} LINE_G2; /* size 0x14 */
/* libgs: a line */
typedef struct {
    /* 0x00 */ u32 attribute;
    /* 0x04 */ s16 x0, y0;
    /* 0x08 */ s16 x1, y1;
    /* 0x0C */ u8 r, g, b;
} GsLINE; /* size 0x10 */
extern GsOT D_800A6518[2];
extern u8 *AllocPrim(s32 n);
extern s32 RotTransPers(SVECTOR *v, s32 *sxy, s32 *p, s32 *flag);
extern void AddPrim(void *ot, void *p);
extern void SetLineG2(void *p);
extern void GsSortLine(GsLINE *l, GsOT *ot, u16 pri);
extern void func_800153CC(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern u16 D_80126CC4;

typedef struct Cursor Cursor;

/* a message window (three at D_801269F0, 0x4C bytes each; window 0 is the fixed one of func_801376E8) */
typedef struct {
    /* 0x00 */ s32 id;
    /* 0x04 */ s16 state;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s32 flags;
    /* 0x0C */ u8 unkC;
    /* 0x0D */ u8 unkD;
    /* 0x0E */ u16 unkE;            /* a countdown (func_80138BE0) */
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u16 unk12;            /* the text row */
    /* 0x14 */ u16 unk14;            /* the column */
    /* 0x16 */ u16 unk16;
    /* 0x18 */ u16 unk18;
    /* 0x1A */ u16 unk1A;            /* its OT depth */
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ u8 unk1E;
    /* 0x1F */ s8 unk1F;             /* the choice */
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21;             /* the number of choices */
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ s16 pos[2];
    /* 0x28 */ s16 unk28;
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ s16 unk36;
    /* 0x38 */ u16 unk38;            /* the text area in VRAM */
    /* 0x3A */ u16 unk3A;
    /* 0x3C */ u16 unk3C;
    /* 0x3E */ u16 unk3E;
    /* 0x40 */ Cursor *unk40;        /* its choice cursor */
    /* 0x44 */ u16 unk44;            /* the number's digit being put */
    /* 0x46 */ s16 unk46;
    /* 0x48 */ u16 unk48;            /* which number (D_80127540) */
    /* 0x4A */ u16 unk4A;            /* which text (D_80127530) */
} Win; /* size 0x4C */

/* a window's choice cursor (two at D_8011DA80) */
struct Cursor {
    /* 0x00 */ s16 state;
    /* 0x02 */ u16 unk2;
    /* 0x04 */ Win *owner;
    /* 0x08 */ u16 unk8;              /* its scale */
    /* 0x0A */ u16 unkA;
    /* 0x0C */ s16 unkC;
    /* 0x0E */ s16 unkE;
}; /* size 0x10 */
extern Cursor D_8011DA80[2];
extern Win D_801269F0[3];
extern u8 D_801269FD;           /* window 0's fields, addressed on their own */
extern u16 D_80126A14[2];
extern s16 D_80126A1C;
extern s16 D_80126A20;
extern s16 D_80126A22;
extern s16 D_80126A24;
extern u16 D_80126A26;
extern Win *D_80127524;         /* the window in front */
extern Win *D_80127528;         /* the one before it */
extern s16 D_8012752E;
Win *func_80137614(s32 id, s16 v, s32 flags);
Win *func_801376E8(s32 id, u16 *pos);
void func_801377B4(s32 id, s16 flags, Win *w);
void func_80137840(Win *w);
Win *func_801399A8(void);
void func_80139BE0(Win *w);
void func_80139634(Win *w);
void func_80139DC8();
void func_80138BE0(Win *w);
extern void (*D_8018DB10[])(Win *w);   /* the window steps, by state */
void func_8013A9F8(Cursor *c, u16 n);
extern s32 TestPadDirWideAny(u8 which, s32 mask);
extern int ClearImage(RECT *r, u8 cr, u8 cg, u8 cb);
s32 func_80139220(Win *w);
void func_801392C8(Win *w);
void func_801395D4(Win *w);
void func_8013A860(void);
extern void func_80016714(void *p, s32 n);
extern u8 D_80127520[];
extern s32 D_80127548;
extern s32 D_8018DB0C;
/* each window's four starting values */
typedef struct {
    u16 a, b, c, d;
} Quad16;
extern Quad16 D_8018DAC0[3];

extern void CancelStreamLoad(void);
void func_8013A8B0(Cursor *c);
extern s16 D_8012752C;
extern s32 D_80127530[4];
extern s16 D_80127540[4];
extern s16 D_8012811A;

extern u8 D_8018DAD8[];

void func_80139A8C(Win *w);
void func_80139B18(Win *w);
s16 func_80138DB8(Win *w, u8 which, s32 mask);

Cursor *func_8013A8BC(void);

extern s32 func_8001B22C(void);
void func_80139788(void);
void func_8013A530(Cursor *c);

void func_8013A448(Cursor *c);
void func_8013A4C4(Cursor *c);
void func_8013A9B4(Win *w, Cursor *c);

extern s32 g_PrimNext;
extern s16 D_801269F4;
extern s16 D_80126A0A;
extern u8 D_80126A0E;
extern u8 D_800D3AB4[];
void func_801392FC(Win *w, s32 k, GsOT *ot);
void func_80137DD4(Win *w, u8 *col, GsOT *ot);
void func_80139680(Win *w, GsOT *ot);
s32 func_80138ED0(Win *w, u16 ch, u8 *font);
s32 func_80138DE0(Win *w, u8 ch, s32 x);
u16 func_80139D04(u8 *p, u16 n);

/* a Gouraud quadrangle, its length byte addressed */
typedef struct {
    /* 0x00 */ u8 addr[3];
    /* 0x03 */ u8 len;
    /* 0x04 */ u8 r0, g0, b0, code;
    /* 0x08 */ s16 x0, y0;
    /* 0x0C */ u8 r1, g1, b1, p1;
    /* 0x10 */ s16 x1, y1;
    /* 0x14 */ u8 r2, g2, b2, p2;
    /* 0x18 */ s16 x2, y2;
    /* 0x1C */ u8 r3, g3, b3, p3;
    /* 0x20 */ s16 x3, y3;
} PolyG4; /* size 0x24 */
/* libgs: a sprite */
typedef struct {
    /* 0x00 */ u32 attribute;
    /* 0x04 */ s16 x, y;
    /* 0x08 */ u16 w, h;
    /* 0x0C */ u16 tpage;
    /* 0x0E */ u8 u, v;
    /* 0x10 */ s16 cx, cy;
    /* 0x14 */ u8 r, g, b;
    /* 0x18 */ s16 mx, my;
    /* 0x1C */ s16 scalex, scaley;
    /* 0x20 */ s32 rotate;
} GsSPRITE; /* size 0x24 */
extern u16 GetTPage(s32 tp, s32 abr, s32 x, s32 y);
extern void GsSortFastSprite(GsSPRITE *s, GsOT *ot, u16 pri);

void func_80137BD8(Win *w);
void func_801397B0(Win *w);
void func_8013A380(void);

typedef struct { s16 x, y; } Pt16;
typedef struct { u8 x, y; } Pair8;
void func_8013AD38(s16 *scale, s16 n, Pt16 *out, Pair8 *dir);
void func_8013B204(Win *w, Cursor *c);
void func_8013AF20(u32 *ot, s16 *pos, Pt16 *v, Pair8 *d);

void func_8013B274(u32 *ot, s16 n, s16 *scale);
extern s32 GetRumbleScript(void);
extern u8 D_80062BC0[];
extern s8 *D_801ED428;          /* a sequence of (value, frames) pairs played into D_801269C8/D4 */
extern u8 D_801ED42C;           /* its pair */
extern u8 D_801ED42D;           /* frames left */
extern s32 D_801269C8;
extern s32 D_801269D4;
extern s32 D_801ED440;
extern s32 D_801ED444;
extern s32 D_801ED448;
extern s32 D_801ED44C;
extern s32 D_801ED450;
extern s32 D_801ED478;
extern s32 D_801ED47C;

void func_8013D9B0(void);
extern s32 D_801ED458;
extern u8 D_801EF2C8;
extern u8 D_801EF2F1;
extern u8 D_801EF2F2;
extern u8 D_801EF3BC;
extern s32 D_801EF3C0;
extern u8 D_801EF3F2;
extern u8 D_801EF466;
/* an image to upload, in a list ended by kind 0xFF */
typedef struct {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 pad2;
    /* 0x04 */ RECT r;
    /* 0x0C */ u16 *data;
} ImgRec; /* size 0x10 */
extern ImgRec *D_801ED43C;

extern s32 SquareRoot12(s32 a);
extern void Square12(VECTOR *in, VECTOR *out);
extern s32 D_801ED454;
extern s16 D_80126CB0;

extern StageActor D_801202A0[];     /* the actor table from slot 1 */
extern s32 func_800132BC(s16 *a, s16 *b);
StageActor *func_8012C724(SpawnDef *d, StageActor *a);
StageActor *func_8012C750(SpawnDef *d);
StageActor *func_8013E410(void);
s32 func_8013E448(SpawnDef *d);
extern SpawnDef *D_801274C8;    /* the stage's spawn lists, ended by kind 0 */
extern SpawnDef *D_801274CC;
extern s32 (*D_801274D0)(SpawnDef *d);  /* replaces the range test of func_8013E448 when set */
extern s32 D_801274D8;
extern s32 D_801274DC;

extern void (*D_8011DB24)(void);   /* the stage's frame step */
extern void func_800D24A0(s32 n);
extern s32 func_800D0EC4(void);
extern void func_80029444(void);
extern void StepRumbleScript(void);
void func_801754A8(void);
void func_80141C04(void);
extern u16 GetPadHeldDirWide(s32 n);
extern u16 GetPadPressedDirWide(s32 n);
void func_80141788(void);
void func_80141874(void);
void func_8013E5E8(void);
void func_8013E6AC(void);
/* the stage's mode state */
typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 mode;            /* D_8018E8C0's step */
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u16 frames;          /* frames in the mode */
    /* 0x08 */ u16 fade;              /* 0 to 0x40 in steps of 0x10 */
    /* 0x0A */ u16 unkA;
    /* 0x0C */ s16 padHeld;         /* pad 0: GetPadHeldDirWide */
    /* 0x0E */ s16 padPressed;      /* GetPadPressedDirWide */
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A[2];
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ s32 unk20;            /* the message shown (func_8013EB7C) */
    /* 0x24 */ s32 unk24[6];
    /* 0x3C */ s16 unk3C;
    /* 0x3E */ s16 unk3E;
    /* 0x40 */ s32 unk40[2];
    /* 0x48 */ s16 unk48[8];
    /* 0x58 */ s32 unk58[5];         /* D_8018E8AC >> 6 (func_8013E958); also read as D_80115168 */
    /* 0x6C */ s32 unk6C[3];
    /* 0x78 */ s32 unk78[5];         /* also read as D_80115188 */
    /* 0x8C */ s32 unk8C[11];
    /* 0xB8 */ s32 unkB8[2];         /* D_801151C8 */
} StageMode;
extern StageMode D_80115110;
extern void (*D_8018E8C0[])(void);

s16 func_80141C50(void);
void func_8013F350(void);
void func_8013FAF8(s32 a, s32 b);
void func_8013E958(void);
s32 func_80141CA4(void);
extern void func_800D2624(void);
extern u16 D_8018E888[];
extern s32 D_801151C8[2];
extern s32 D_801151D0;

void func_80141C0C(s32 n);
void func_8013F244(void);
void func_80137B80(void);
extern s16 D_800B9A08;
extern u8 D_8018E524[], D_8018E53C[], D_8018E5B0[], D_8018E5B8[];
extern u8 *D_801ED488;
extern u8 *D_801ED48C;

/* the two word arrays at StageMode +0x58 and +0x78, read as their own symbols (array-of-struct indexing keeps the
   `lui at; addu at` form in the loops) */
typedef struct { s32 v; } S32R;
extern S32R D_80115168[];
extern S32R D_80115188[];
extern s16 D_8018E884[2];
extern s32 func_800D0488(s16 n);

extern Pt16 D_8018DADC[];    /* the window corner per kind */
s32 func_8013A8FC(Win *w);

extern s16 D_800D45F4[];        /* the cursor's two outlines, 30 (x, y) points each */
extern s16 D_800D466C[];
extern Pair8 D_8018DBDC[];
extern Pair8 D_8018DC18[];

typedef struct {
    /* 0x00 */ u32 tag;
    /* 0x04 */ u8 r0, g0, b0, code;
    /* 0x08 */ s16 x0, y0;
    /* 0x0C */ s16 x1, y1;
    /* 0x10 */ s16 x2, y2;
    /* 0x14 */ s16 x3, y3;
} POLY_F4; /* size 0x18 */

/* an object whose matrix is at +0x34 (its translation at +0x48) */
typedef struct {
    /* 0x00 */ u8 pad[0x48];
    /* 0x48 */ s32 t[3];
} Off48;
void func_80136A94(s32 turn, Off48 *o, SVECTOR *out, MATRIX *m);
s32 func_80135480(u8 *a, s32 f, SVECTOR *pos, SVECTOR *v);
s32 func_80135EB0(s32 *node, s32 n);
extern s32 D_801ED3E4;         /* a list head: each node's first word is the next */
extern MATRIX D_801ED3C4;

extern u32 func_80029504(void);
extern u8 D_80078EC0;
extern s32 D_8018E8AC[];
/* StageMode's message tables at +0x38 and +0x30, cleared as their own symbols */
typedef struct { s16 v; } S16R;
typedef struct { u8 v; } U8R;
extern S16R D_80115148[];
extern U8R D_80115140[];
void func_8013E83C(void);
void func_80139954(void);
void func_8014AA28(void);
extern u8 D_800B9A15;

extern s16 D_80126720, D_80126722, D_80126724;
/* one halfword as a struct member: an in-struct store through a register (what an array element gives), for
   the box centres of func_80136334 / 801365B8 / 80136824; func_80136A94 reads the three as plain scalars */
typedef struct { s16 v; } S16Cell;
extern s16 D_801152A8, D_801152AA, D_801152AC;
typedef struct {
    /* 0x00 */ s16 pad[2];
    /* 0x04 */ s16 x0, x1;
    /* 0x08 */ s16 y0, y1;
    /* 0x0C */ s16 z0, z1;
} Box;

extern void SetRotMatrix(MATRIX *m);
extern void MulMatrix2(MATRIX *m0, MATRIX *m1);
extern void ApplyRotMatrix(SVECTOR *v0, VECTOR *v1);
extern void ApplyRotMatrixLV(VECTOR *v0, VECTOR *v1);
extern s32 D_801ED3C8, D_801ED3CC, D_801ED3D0;
extern s16 D_801ED3D4;
extern S16R D_801ED3E8, D_801ED3EC, D_801ED3F0;   /* read as one-member structs: the stores stay before the next loads */
extern s16 D_801ED3EA, D_801ED3EE, D_801ED3F2;
/* a model with its scale at +0x18 and its matrix at +0x34 */
typedef struct {
    /* 0x00 */ u8 pad[0x18];
    /* 0x18 */ s16 sx, sy, sz;
    /* 0x1E */ u8 pad1E[0x16];
    /* 0x34 */ MATRIX m;
} ScaleObj;
/* a diagonal matrix written a word at a time */
typedef struct {
    s32 w[4];
    s16 h;
    s16 pad;
    s32 t[3];
} MatW;
#define KSEG0(f) (((f) & 0x0FFFFFFF) | 0x80000000)

extern SVECTOR D_801152B0;

extern u16 D_800B9A02;
extern u8 D_800A651C[];

extern void ApplyMatrixSV(MATRIX *m, SVECTOR *v0, SVECTOR *v1);

typedef struct {
    s16 x, y;
} Pos16;
typedef struct {
    u16 x, y;
} UPos16;
extern Pos16 D_8018DB54[];
extern UPos16 D_8018DB98[];
extern void GsSortSprite(GsSPRITE *s, GsOT *ot, u16 pri);

typedef struct {
     u32 tag;
     u8 r0, g0, b0, code;
     s16 x0, y0;
     u8 u0, v0;
     u16 clut;
     s16 x1, y1;
     u8 u1, v1;
     u16 tpage;
     s16 x2, y2;
     u8 u2, v2;
     u16 pad1;
     s16 x3, y3;
     u8 u3, v3;
     u16 pad2;
} POLY_FT4;
extern s16 D_8018DC54[6];

extern s32 *D_801151D4;
extern s32 func_8012B744();
extern StageActor *func_8012C588();

void func_8012F968(StageActor *a) {
    s32 *cam = D_801151D4;
    SVECTOR v;
    ModelObj *m;

    a->unkC1 = 0x12;
    if (a->unkB4 & 0x10000) {
        v.vx = cam[23];
        v.vy = cam[24];
        v.vz = cam[25];
        m = a->model;
        a->flags5C = 0;
        a->ofs[2] = 0;
        a->ofs[1] = 0;
        a->ofs[0] = 0;
        m->rot.vz = 0;
        m->rot.vx = 0;
        a->model->rot.vy = func_8012B744(a->pos, &v);
        a->count = 0x2D;
        if (a->hitData != 0) {
            a->unkAC = (((s16 *)KSEG0(a->hitData))[4] + ((s16 *)KSEG0(a->hitData))[5]) >> 1;
        } else {
            a->unkAC = 0;
        }
        a->vel[0] = ((cam[23] - a->pos[0].h.i) << 16) / 30;
        a->vel[1] = ((cam[24] - a->pos[1].h.i - a->unkAC) << 16) / 30;
        a->vel[2] = ((cam[25] - a->pos[2].h.i) << 16) / 30;
        a->timer = 0;
        if (func_80131A34(a, 0x24) == 0) {
            a->unkC4 &= ~4;
            if (func_80131A34(a, 0x20) != 0) {
                a->unkC4 |= 4;
            } else {
                a->timer = 0;
            }
        }
        func_8012C588(0x289, a);
    }
    func_80131CA8(a, 0x35);
}

/* a timed glide: the position steps by the velocity until the count runs out (then func_801319E0); a linked actor rides
   up by +0xAC, with a sound at count 0x13 */
void func_8012FB54(StageActor *a) {
    StageActor *o;
    if (a->unkB4 & 0x10000) {
        a->pos[0].w += a->vel[0];
        a->pos[1].w += a->vel[1];
        a->pos[2].w += a->vel[2];
        if (--a->count == 0) {
            func_801319E0(a);
        } else {
            o = func_80143B6C(a, 1);
            if (o != NULL) {
                o->pos[1].h.i += a->unkAC;
            }
            if (a->count == 0x13) {
                func_8002D4C8(0x8F2, 0);
            }
        }
    }
    func_80131CA8(a, 0x36);
}

void func_8012FC30(StageActor *a) {
    a->unkC1 = 10;
    if (a->unkB4 & 0x400) {
        func_80131B14(a);
        a->unkC2 = 0;
        a->timer = 0;
        func_8012B23C((void *)a);
        func_80131A34(a, 8);
        func_8002D4C8(0xA74, 0);
    }
    func_80131CA8(a, 0x1A);
}

void func_8012FCA4(StageActor *a) {
    func_80131CA8(a, 0x1B);
}

void func_8012FCC4(StageActor *a) {
    a->unkC1 = 8;
    if (a->unkC4 & 2) {
        a->unkC1 = 1;
        func_80131CA8(a, 3);
        return;
    }
    if (a->unkC4 & 1) {
        func_80131E00(a, 1);
        return;
    }
    if (a->unkB4 & 0x100) {
        func_80131B14(a);
        if (a->unk76 <= 0) {
            func_80131E00(a, 0xC);
            return;
        }
        if (func_80131A34(a, 4) != 0) {
            a->unkC2 = 0;
        } else {
            a->timer = 0;
            a->unkC2 = 1;
        }
        func_8012B14C((void *)a, &D_8018D894);
        a->count = 0;
    }
    func_80131CA8(a, 0x1C);
}

void func_8012FDA8(StageActor *a) {
    s32 r;
    if (a->unkB4 & 0x100) {
        if (++a->count >= 0x15) {
            func_80131E00(a, 0xD);
            return;
        }
        r = func_8012CBF4((void *)a);
        if (r & 0x2000) {
            r &= 0xFF;
            if (r == 2) {
                func_80131E00(a, 0x12);
                return;
            }
            if (r == 0x1A) {
                func_801319E0(a);
                return;
            }
            func_80131C78(a);
        }
    }
    func_80131CA8(a, 0x1D);
}

void func_8012FE70(StageActor *a) {
    a->unkC1 = 9;
    if (a->unkC4 & 2) {
        a->unkC1 = 1;
        func_80131CA8(a, 3);
        return;
    }
    if (a->unkC4 & 1) {
        func_80131E00(a, 1);
        return;
    }
    if (a->unkB4 & 0x200) {
        func_80131170(a, NULL, 0);
    }
    func_80131CA8(a, 0x1E);
}

void func_8012FF00(StageActor *a) {
    if (a->unkB4 & 0x200) {
        func_80131340(a);
    }
    func_80131CA8(a, 0x1F);
}

void func_8012FF4C(StageActor *a) {
    a->unkC1 = 5;
    if (a->unkB4 & 0x20) {
        a->flags5C = 0;
        a->count = 0x1E;
        a->timer = 0;
        a->model->rot.vx = 0;
    }
    func_80131CA8(a, 0xF);
}

void func_8012FF98(StageActor *a) {
    if (a->unkB4 & 0x20) {
        if (a->model != NULL) {
            a->model->unk04 ^= 0x80000000;
        }
        if (func_8012BEE8((void *)a)) {
            func_80130D48(a);
            func_801319E0(a);
        }
    }
    func_80131CA8(a, 0x10);
}

/* move 0x30 near Musashi's other point (0x31 farther out), the other when that one fails */
inline void func_8013001C(StageActor *a) {
    if (func_8012BCCC((void *)a) < 0x9000) {
        if (func_80131AC8(a, 0x30) == 0) {
            func_80131AC8(a, 0x31);
        }
    } else {
        if (func_80131AC8(a, 0x31) == 0) {
            func_80131AC8(a, 0x30);
        }
    }
}

/* the same with moves 0x32 and 0x33 (inline: func_80131170 has it inlined) */
inline void func_80130088(StageActor *a) {
    if (func_8012BCCC((void *)a) < 0x9000) {
        if (func_80131AC8(a, 0x32) == 0) {
            func_80131AC8(a, 0x33);
        }
    } else {
        if (func_80131AC8(a, 0x33) == 0) {
            func_80131AC8(a, 0x32);
        }
    }
}

void func_801300F4(StageActor *a) {
    s32 done = 0;
    a->unkC1 = 0xD;
    if (a->unkB4 & 0x2000) {
        a->flags5C = 0;
        a->count = 0x1E;
        a->timer = 0;
        a->model->rot.vx = 0;
        if (func_80131A34(a, 0x27) != 0) {
            a->unkC3 = 1;
        } else {
            a->unkC3 = 0;
        }
        func_8013001C(a);
        done = 1;
    }
    if (func_80131CA8(a, 0x25) != 0) {
        done = 1;
    }
    if (!done) {
        func_80131E00(a, 6);
    }
}

void func_801301E8(StageActor *a) {
    if (a->unkB4 & 0x2000) {
        if (a->unkC3 != 0) {
            if (a->animFlags & 0x4000) {
                func_80130D48(a);
                func_801319E0(a);
            }
        } else if (func_8012BEE8((void *)a) != 0) {
            func_80130D48(a);
            func_801319E0(a);
        }
    }
    func_80131CA8(a, 0x26);
}

void func_80130278(StageActor *a) {
    s32 done = 0;
    a->unkC1 = 0xB;
    if (a->unkC4 & 1) {
        func_80131E00(a, 0xE);
        return;
    }
    if (a->unkB4 & 0x800) {
        func_80131170(a, NULL, 0);
        done = 1;
    }
    if (func_80131CA8(a, 0x2C) != 0) {
        done = 1;
    }
    if (!done) {
        func_80131E00(a, 6);
    }
}

void func_80130314(StageActor *a) {
    if (a->unkB4 & 0x800) {
        func_80131340(a);
    }
    func_80131CA8(a, 0x2D);
}

void func_80130360(StageActor *a) {
    a->unkC1 = 2;
    if (a->unkB4 & 2) {
        a->flags5C = 0;
        a->timer = 0;
        a->count = 0;
    }
    func_80131CA8(a, 1);
}

void func_801303A0(StageActor *a) {
    if (a->unkB4 & 2) {
        func_8012E364(a);
    }
    func_80131CA8(a, 2);
}

void func_801303EC(StageActor *a) {
    if (a->unkB4 & 0x10) {
        func_801319E0(a);
    }
    func_80131CA8(a, 0xC);
}

void func_80130438(StageActor *a) {
    s32 done = 0;
    a->unkC1 = 6;
    if (a->unkB4 & 0x40) {
        func_80131B14(a);
        done = 1;
        a->count = 0x78;
        func_80143CD4(a);
        func_8002D4C8(0x47B, 0);
        func_8002D4C8(0x478, 0);
        func_800CB0E8(a);
        if (func_80131A34(a, 0x14) == 0) {
            a->timer = 0;
        }
    }
    if (func_80131CA8(a, 0x12) != 0) {
        done = 1;
    }
    if (!done) {
        a->unk5E = 2;
        a->unk60 = 1;
        a->unk62 = D_80126B58.model->rot.vy;
        func_80131E00(a, 1);
    }
}

void func_80130514(StageActor *a) {
    s32 f;
    if (a->unkB4 & 0x40) {
        f = func_8012CBF4((void *)a);
        if (a->pos[1].h.i >= 0x10) {
            func_801319E0(a);
            return;
        }
        if (func_80131D68(a, f) == 1) {
            return;
        }
        if (func_8012BEE8((void *)a) != 0 && (f & 0x2000)) {
            a->unkC1 = 0;
            a->unk5E = 0;
            func_80131CA8(a, 0xE);
        }
    }
    func_80131CA8(a, 0x13);
}

void func_801305CC(StageActor *a) {
    a->unkC1 = 0xC;
    if (a->unkB4 & 0x1000) {
        a->count = 0x3C;
        a->unkC4 &= ~4;
        if (func_80131A34(a, 0x20) != 0) {
            a->unkC4 |= 4;
        } else {
            a->timer = 0;
        }
    }
    func_80131CA8(a, 0x22);
}

void func_80130650(StageActor *a) {
    s32 f;
    if (a->unkB4 & 0x1000) {
        if (a->pos[1].h.i >= 0x10) {
            func_801319E0(a);
            return;
        }
        if (func_8012BEE8((void *)a) != 0) {
            func_801319E0(a);
            return;
        }
        if (a->unkC4 & 4) {
            a->model->rot.vx -= 0x100;
        }
        f = func_8012CBF4((void *)a);
        if (func_80131D68(a, f) == 1) {
            return;
        }
        if (f & 0x2000) {
            func_80131C78(a);
        }
    }
    func_80131CA8(a, 0x23);
}

/* spawns effect 0x10 at the actor's position plus an offset */
inline void func_80130740(StageActor *a, SVECTOR *ofs) {
    func_80146A6C(0x10, a, a->pos[0].h.i + ofs->vx, a->pos[1].h.i + ofs->vy, a->pos[2].h.i + ofs->vz, 0, 0);
}

void func_801307B0(StageActor *a) {
    SVECTOR v;
    a->unkC1 = 0x10;
    a->flags5C = 0;
    func_801312D0(a, &v);
    func_80130740(a, &v);
    a->count = 0x1E;
    a->vel[2] = 0;
    a->vel[0] = 0;
    func_8002D4C8(0x531, 0);
}

void func_80130858(StageActor *a) {
    func_8012AD80((void *)a);
    if (func_8012BEE8((void *)a) != 0) {
        func_801319E0(a);
    }
}

void func_80130898(StageActor *a) {
    if (a->unkB4 & 0x4000) {
        a->unkAA = 0x100;
        a->flags5C &= ~1;
    }
    func_80131CA8(a, 0x28);
}

void func_801308DC(StageActor *a) {
    a->unkC1 = 0xE;
    if (a->unkB4 & 0x8000) {
        a->count = 0x10;
        a->unkAA = 0;
        a->flags5C = 0;
        a->timer = 0;
        a->model->scale.vx = 0x400;
        a->model->scale.vz = 0x400;
        a->model->scale.vy = 0x200;
        a->model->flags |= 0x10;
        func_8002D4C8(0x68A, 0);
    }
    func_80131CA8(a, 0x2A);
}

void func_80130974(StageActor *a) {
    if (a->unkB4 & 0x8000) {
        if (a->model->scale.vx < 0x1000) {
            a->model->scale.vx += 0x400;
            a->model->scale.vz += 0x400;
        }
        if (func_8012BEE8((void *)a) != 0) {
            func_80166244(a);
            func_801319E0(a);
            return;
        }
    }
    func_80131CA8(a, 0x2B);
}

void func_80130A18(StageActor *a) {
    SVECTOR p0, p1;
    a->flags5C &= ~1;
    if (func_80131CA8(a, 0x34) == 0) {
        p0.vx = a->pos[0].h.i;
        p0.vy = a->pos[1].h.i - 0x10;
        p0.vz = a->pos[2].h.i;
        p1.vx = a->pos[0].h.i;
        p1.vy = a->pos[1].h.i + 8;
        p1.vz = a->pos[2].h.i;
        if (func_80133784(0x11, &p0, &p1) & 0x6000) {
            a->unkC1 = 0x11;
            a->unkAC = 0x78;
        }
    }
}

void func_80130AC4(StageActor *a) {
    if (--a->unkAC == 0) {
        a->unkC1 = 0;
        a->unk5E = 0;
    }
}

void func_80130AF0(StageActor *a) {
    a->unkC1 = 0x13;
    if (a->unkC4 & 2) {
        func_80131CA8(a, 3);
        return;
    }
    if (a->unkB4 & 0x20000) {
        func_80146A6C(3, a, a->hitPos[0], a->hitPos[1], a->hitPos[2], 0x0C0CFFF8, 0xF000B000);
        if ((a->unkB4 & 1) || !(a->unkC4 & 2)) {
            func_80131B14(a);
            if (a->unk76 <= 0) {
                func_80131E00(a, 0xC);
                return;
            }
            if (func_80131A34(a, 4) != 0) {
                a->unkC2 = 0;
            } else {
                a->unkC2 = 1;
                a->timer = 0;
                a->count = 0x10;
            }
        }
        func_80131CA8(a, 3);
    }
    func_80131CA8(a, 0x37);
}

void func_80130C08(StageActor *a) {
    s32 done = 0;
    s32 r;
    if (!(a->unkC4 & 2) && (a->unkB4 & 0x20000)) {
        if (a->unkB4 & 1) {
            if ((u8)func_8012CBCC((void *)a) == 2) {
                func_80131E00(a, 0x12);
                return;
            }
            if (a->unkC2 != 0) {
                r = func_8012BEE8((void *)a);
            } else {
                r = a->animFlags & 0x4000;
            }
            if (r) {
                done = 1;
            }
            if (done) {
                func_80131C78(a);
            }
        }
        func_80131CA8(a, 5);
    }
    if (a->unkC4 & 2) {
        func_80131CA8(a, 5);
    } else {
        func_80131CA8(a, 0x38);
    }
}

void func_80130D0C(StageActor *a) {
    D_8018D89C[a->unkC1](a);
}

/* an enemy's drop when it is defeated: its parameter 0x15 picks a fixed item, a roll on D_8018D8EC, or (0x10000) a
   roll weighted by Musashi's HP and BP (fuller gauges give other odds) */
void func_80130D48(StageActor *a) {
#define DROP(kind, n) { StageActor *o = func_8012C658(kind, n, a); if (o != NULL) { o->pos[1].h.i -= 0x20; } }
    Stats *w = &D_80078E78;
    u32 k;
    s32 v, arg, i, max, cur;
    s32 t;
    s16 *p;
    k = func_80131CF4(a->params, 0x15);
    if (k == 0) {
        return;
    }
    if (*(u8 *)&a->unk5E == 0xB) {
        DROP(0x33, 0);
        return;
    }
    switch (k & 0xFFFF0000) {
    case 0x10000:
        k = 0;
        if (D_80078EB4 == D_80078EB2) {
            k = 0xC;
        } else if (D_80078EB4 <= (u32)D_80078EB2 >> 1) {
            k = 3;
        }
        if (w->bp == w->bpMax) {
            k += 0x18;
        } else if (w->bp <= (u32)w->bpMax >> 1) {
            k += 6;
        }
        p = &D_8018D91C[k];
        v = rand() % 100;
        for (arg = 0; arg < 3; arg++, p++) {
            if (v < *p) {
                break;
            }
        }
        k = 0;
        switch (arg) {
        case 0:
            p = D_8018D97C;
            k = 0x31;
            break;
        case 1:
            max = w->hpMax;
            cur = w->hp;
            if (max * 7 / 10 >= cur) {
                k = 4;
                if (max / 2 >= cur) {
                    k = 8;
                    if (max / 5 >= cur) {
                        k = 0xC;
                    }
                }
            }
            p = &D_8018D984[k];
            k = 0x32;
            break;
        case 2:
            max = w->bpMax;
            cur = w->bp;
            if (max * 7 / 10 >= cur) {
                k = 4;
                if (max / 2 >= cur) {
                    k = 8;
                    if (max / 5 >= cur) {
                        k = 0xC;
                    }
                }
            }
            p = &D_8018D9A4[k];
            k = 0x33;
            break;
        }
        v = rand() % 100;
        for (arg = 0; arg < 4; arg++, p++) {
            if (v < *p) {
                break;
            }
        }
        DROP(k, arg);
        break;
    case 0x20000:
        DROP(0x33, 0);
        break;
    case 0x30000:
        DROP(0x31, 0);
        break;
    case 0x40000:
        DROP(0x32, 0);
        break;
    case 0x50000:
        DROP(0x33, 0);
        break;
    case 0x60000:
        v = rand() & 0xFF;
        p = D_8018D8EC;
        /* the step back written out: `while (v >= p[0]) p += 3;` is the likely original, but this cc1 build (64-bit
           MSYS) crashes in the delay-slot pass when it moves the step into the slot and adds the step back itself */
        if (v >= p[0]) {
            p += 3;
            do {
                t = p[0];
                p += 3;
            } while (v >= t);
            p -= 3;
        }
        i = p[1];
        if (w->bp < 4) {
            i = 0x33;
        }
        DROP(i, p[2]);
        break;
    case 0x70000:
        DROP(0x27B, 0);
        break;
    }
#undef DROP
}

void func_80131170(StageActor *a, u8 *data, s32 n) {
    func_80131B14(a);
    a->unkC2 = 0;
    a->unkC3 = 0;
    a->timer = 0;
    if (data == NULL) {
        data = D_8018D870;
    }
    func_8012B14C((void *)a, (VECTOR *)data);
    a->count = 0;
    if (n != 0) {
        if (func_80131A34(a, n) == 0) {
            if (func_80131A34(a, 0x24) == 0) {
                a->unkC4 &= ~4;
                if (func_80131A34(a, 0x20) != 0) {
                    a->unkC4 |= 4;
                } else {
                    a->timer = 0;
                }
            }
        }
    } else if (func_80131A34(a, 0x24) == 0) {
        a->unkC4 &= ~4;
        if (func_80131A34(a, 0x20) != 0) {
            a->unkC4 |= 4;
        } else {
            a->timer = 0;
        }
    }
    if (a->unk76 <= 0) {
        func_80130088(a);
    }
}

/* the offset of the actor's body centre: its parameter 0x2E as the height, else D_8018D9C4 (inline: func_80131340 has it
   inlined) */
inline void func_801312D0(StageActor *a, SVECTOR *out) {
    u32 v = func_80131CF4(a->params, 0x2E);
    if (v != 0) {
        out->vx = out->vz = 0;
        out->vy = v;
    } else {
        *out = D_8018D9C4;
    }
}

/* knocked flying: up (phase 1), down to the ground (2), a bounce (3) sliding to a stop, then lying (4) */
void func_80131340(StageActor *a) {
    SVECTOR ofs;
    SVECTOR p;
    SVECTOR q;
    SVECTOR r;
    s32 k;
    if (a->pos[1].h.i >= 0x10) {
        func_801319E0(a);
        return;
    }
    func_801312D0(a, &ofs);
    if (a->vel[0] != 0 || a->vel[2] != 0) {
        k = func_80131CF4(a->params, 0x19);
        if (k == 0) {
            k = 0x50;
        }
        func_8012DBD0(a, k, a->model->rot.vy + 0x800, 0x1D);
    }
    switch (a->unkC2) {
    case 0:
    case 1:
        if (a->unkC4 & 4) {
            a->model->rot.vx -= 0x100;
        }
        if (++a->count >= 0x3D) {
            func_80131E00(a, 0xD);
            return;
        }
        if (a->unkC2 == 0) {
            a->unkC2 = 1;
            p.vx = a->prev[0].h.i;
            p.vy = a->prev[1].h.i;
            p.vz = a->prev[2].h.i;
            q = p;
            q.vx += ofs.vx;
            q.vy += ofs.vy;
            q.vz += ofs.vz;
            r = q;
            func_8012CEB0(&p, &q, 1);
            q.vx -= ofs.vx;
            q.vy -= ofs.vy;
            q.vz -= ofs.vz;
            a->prev[0].h.i = q.vx;
            a->prev[1].h.i = q.vy;
            a->prev[2].h.i = q.vz;
            a->pos[0].h.i = q.vx;
            a->pos[1].h.i = q.vy;
            a->pos[2].h.i = q.vz;
        }
        D_801ED368 = func_8012CC64((void *)a, &ofs);
        if (D_801ED368 & 0x8000) {
            a->vel[2] = 0;
            a->vel[0] = 0;
        }
        if (D_801ED368 & 0x4000) {
            func_8012B23C((void *)a);
            a->unkC2 = 4;
        } else if (D_801ED368 & 0x2000) {
            if (func_80131D68(a, D_801ED368) == 1) {
                return;
            }
            a->unkC2 = 2;
            func_80143B6C(a, 1);
            a->vel[1] = 0xFFF30000;
            a->count = 0;
        } else if (D_801ED368 & 0x8000) {
            a->unkC2 = 2;
            a->count = 0;
            a->vel[2] = 0;
            a->vel[0] = 0;
        }
        break;
    case 2:
        if (a->unkC4 & 4) {
            a->model->rot.vx -= 0x100;
        }
        if (++a->count >= 0x3D) {
            func_80131E00(a, 0xD);
            return;
        }
        D_801ED36C = a->vel[1];
        D_801ED368 = func_8012CC64((void *)a, &ofs);
        if (D_801ED368 & 0x8000) {
            a->vel[2] = 0;
            a->vel[0] = 0;
        }
        if (D_801ED368 & 0x4000) {
            func_8012B23C((void *)a);
            a->unkC2 = 4;
        } else if (D_801ED368 & 0x2000) {
            if (func_80131D68(a, D_801ED368) == 1) {
                return;
            }
            func_80143B6C(a, 1);
            a->count = 0;
            a->vel[1] = -D_801ED36C / 3;
            a->unkC2 = 3;
            a->model->rot.vx = 0;
        } else if (D_801ED368 & 0x8000) {
            a->unkC2 = 3;
            a->count = 0;
            a->model->rot.vx = 0;
            a->vel[2] = 0;
            a->vel[0] = 0;
        }
        break;
    case 3:
        a->vel[0] = a->vel[0] * 15 / 16;
        a->vel[2] = a->vel[2] * 15 / 16;
        if (a->unkC3 & 1) {
            D_801ED368 = func_8012CBA4((void *)a);
            if (D_801ED368 & 0x8000) {
                a->vel[2] = 0;
                a->vel[0] = 0;
            }
            if (func_80131D68(a, D_801ED368) == 1) {
                return;
            }
            if (!(D_801ED368 & 0x6000)) {
                func_80131E00(a, 0xD);
                return;
            }
        } else {
            D_801ED368 = func_8012CBF4((void *)a);
            if (D_801ED368 & 0x8000) {
                a->vel[2] = 0;
                a->vel[0] = 0;
            }
            if (D_801ED368 & 0x4000) {
                func_8012B23C((void *)a);
                a->unkC2 = 4;
                break;
            }
            if (D_801ED368 & 0x2000) {
                if (func_80131D68(a, D_801ED368) == 1) {
                    return;
                }
                a->unkC3 |= 1;
            } else if (D_801ED368 & 0x8000) {
                a->vel[2] = 0;
                a->vel[0] = 0;
            }
        }
        if ((a->count & 3) == 3) {
            func_80143B6C(a, 1);
        }
        if (++a->count >= 0x11) {
            if (!(D_801ED368 & 0x6000)) {
                func_80131E00(a, 0xD);
                return;
            }
            if (a->unk76 <= 0) {
                func_80131E00(a, 6);
            } else {
                func_80131C78(a);
            }
        }
        break;
    case 4:
        D_801ED368 = func_8012CBA4((void *)a);
        if (D_801ED368 & 0x8000) {
            a->vel[2] = 0;
            a->vel[0] = 0;
        }
        if (D_801ED368 & 0x2000) {
            if (func_80131D68(a, D_801ED368) == 1) {
                return;
            }
            if (a->unk76 <= 0) {
                func_80131E00(a, 6);
            } else {
                func_80131C78(a);
            }
        } else {
            if ((a->count & 3) == 3) {
                func_80143B6C(a, 1);
            }
            if (++a->count >= 0x3D) {
                func_80131E00(a, 0xD);
                return;
            }
        }
        break;
    }
    func_80131CA8(a, 0x2F);
}

inline void func_801319E0(StageActor *a) {
    if (func_80131CA8(a, 0x11) == 0) {
        if (a->init != NULL) {
            func_8002A04C(a);
        }
        func_8012C218(a);
    }
}

s32 func_80131A34(StageActor *a, s32 n) {
    u32 s = func_80131CF4(a->params, n);
    if (s != 0) {
        if (n == 0xB || n == 8 || n == 0x20) {
            a->unkC4 |= 4;
        } else {
            a->unkC4 &= ~4;
        }
        SetScript(a, (AnimEntry *)s);
        return 1;
    }
    return 0;
}

s32 func_80131AC8(StageActor *a, s32 n) {
    u16 s = func_80131CF4(a->params, n);
    if (s != 0) {
        func_8002D4C8(s, 0);
        return s;
    }
    return 0;
}

void func_80131B14(StageActor *a) {
    s32 kind = *(u8 *)&a->unk5E;
    s32 d;
    if (a->unk60 != 0) {
        if (kind == 0x1D) {
            a->hitFlags = 0;
            a->hitPos[0] = a->pos[0].h.i;
            a->hitPos[1] = a->pos[1].h.i;
            a->hitPos[2] = a->pos[2].h.i;
        }
        if (a->init != NULL) {
            d = (a->unk60 * ((s16 *)a->init)[0x18]) >> 12;
            if (d <= 0) {
                d = 1;
            }
        }
        a->unk76 -= d;
        func_8016AA50(a, d);
        if (a->hitFlags & 1) {
            func_8016B428(a);
            StartRumbleScript(D_8018D9CC);
        }
    }
    a->flags5C &= ~1;
    if (kind != 0x1D) {
        if (((u8 *)&a->face)[0] != 0) {
            func_8002A520(a);
        }
        if (((u8 *)&a->face)[1] != 0) {
            func_8002A790(a);
        }
    }
    if (a->unk76 <= 0) {
        a->flags5C = 0;
    }
    a->model->rot.vy = (a->unk62 + 0x800) & 0xFFF;
    a->model->rot.vx = a->model->rot.vz = 0;
    func_8012B2CC((void *)a);
    func_8012B23C((void *)a);
}

void func_80131C78(StageActor *a) {
    a->unkC1 = 0;
    a->model->rot.vx = 0;
    a->unk5E = 0;
    func_80131CA8(a, 0xE);
}

s32 func_80131CA8(StageActor *a, s32 n) {
    void (*f)(StageActor *) = (void (*)(StageActor *))func_80131CF4(a->params, n);
    if (f != NULL) {
        f(a);
        return 1;
    }
    return 0;
}

u32 func_80131CF4(s32 *list, s32 key) {
    if (list == NULL) {
        return 0;
    }
    while (*list != 0) {
        if (*list == 0xD) {
            list = (s32 *)list[1];
        } else if (*list == key) {
            return list[1];
        } else {
            list += 2;
        }
    }
    return 0;
}

s32 func_80131D68(StageActor *a, s32 f) {
    f &= 0xFF;
    if (f == 2 || f == 0x1B) {
        func_80131E00(a, 0x12);
        return 1;
    }
    if (f == 0x1A || f == 0x1C) {
        func_801319E0(a);
        return 1;
    }
    return 0;
}

void func_80131E00(StageActor *a, s32 n) {
    a->step = n;
    D_8018D9DC[n](a);
}

void func_80131E38(StageActor *a) {
    a->unkC1 = 0xF;
    if (a->unkB4 & 0x40000) {
        a->count = 6;
        a->flags5C = 0;
    }
    func_80131CA8(a, 0x39);
}

void func_80131E7C(StageActor *a) {
    if (a->unkB4 & 0x40000) {
        if (func_8012E470((void *)a) != 0) {
            func_8012E4C8(a);
            func_80131E00(a, 1);
        }
    }
    func_80131CA8(a, 0x3A);
}

void func_80131EE4(void) {
}

void func_80131EEC(StageActor *a) {
    ((void (**)(StageActor *))D_8018DA34)[a->sub](a);
}

void func_80131F28(StageActor *a) {
    D_8018DA7C[a->sub](a);
}

void func_80131F64(StageActor *a) {
    D_8018DA84[a->sub](a);
}

void func_80131FA0(StageActor *a) {
    D_8018DA8C[a->sub](a);
}

void func_80131FDC(StageActor *a) {
    D_8018DA94[a->sub](a);
}

void func_80132018(StageActor *a) {
    u8 *m = func_8012C1B8();
    a->model = (ModelObj *)m;
    if (m == NULL) {
        func_8012CAE4(a);
        return;
    }
    func_8001C214(m, 0);
    a->flags5C = 0x80;
    a->sub++;
    a->hitData = (u32)D_8018DA34[a->unk70 & 0xFFF].hit;
    a->messages[0] = D_8018DA34[a->unk70 & 0xFFF].message;
    a->unkFC = ((u16)a->unk70 >> 12) << 9;
}

void func_801320D0(void) {
}

void func_801320D8(StageActor *a) {
    u8 *m = func_8012C1B8();
    a->model = (ModelObj *)m;
    if (m == NULL) {
        func_8012CAE4(a);
        return;
    }
    func_8001C214(m, 0);
    a->hitData = (u32)D_8018DA3C;
    a->flags5C = 0x80;
    a->sub++;
}

void func_80132144(StageActor *a) {
    u8 *m = func_8012C1B8();
    a->model = (ModelObj *)m;
    if (m == NULL) {
        func_8012CAE4(a);
        return;
    }
    func_8001C214(m, 0);
    a->hitData = (u32)D_8018DA4C;
    a->flags5C = 0x80;
    a->sub++;
}

void func_801321B0(StageActor *a) {
    u8 *m = func_8012C1B8();
    a->model = (ModelObj *)m;
    if (m == NULL) {
        func_8012CAE4(a);
        return;
    }
    func_8001C214(m, 0);
    a->hitData = (u32)D_8018DA5C;
    a->flags5C = 0x80;
    a->sub++;
}

void func_8013221C(StageActor *a) {
    u8 *m = func_8012C1B8();
    a->model = (ModelObj *)m;
    if (m == NULL) {
        func_8012CAE4(a);
        return;
    }
    func_8001C214(m, 0);
    a->hitData = (u32)D_8018DA6C;
    a->flags5C = 0x80;
    a->sub++;
}

void func_80132288(MimeAnim *st, MimeKey *keys, TmdHead *tmd) {
    TmdHead *t;
    u32 *from;
    u32 *to;
    st->keys = keys;
    st->index = 0;
    st->time = 0;
    st->tmd = tmd;
    t = keys->data->base;
    from = TMD_TOP(t, vert_top);
    t = tmd;
    to = TMD_TOP(t, vert_top);
    memcpy(to, from, t->n_vert * 8);
    if (keys->data->ndiff != NULL) {
        t = keys->data->base;
        from = TMD_TOP(t, normal_top);
        t = tmd;
        to = TMD_TOP(t, normal_top);
        memcpy(to, from, t->n_normal * 8);
    }
    if (keys->step < 0) {
        func_801325B8(tmd, keys->data->base, keys->data->vdiff, keys->data->ndiff, 0x1000);
    }
}

void func_8013240C(MimeAnim *st) {
    MimeKey *k = &st->keys[st->index];
    MimeData *d = k->data;
    s32 w;
    st->flags &= 0xFFFF3FFF;
    if (d == (MimeData *)-1) {
        st->flags |= 0x4000;
        return;
    }
    if (k->step < 0) {
        w = 0x1000 - (st->time << 12) / k->len;
    } else {
        w = (st->time << 12) / k->len;
    }
    func_801325B8(st->tmd, d->base, d->vdiff, d->ndiff, w);
    if (k->step < 0) {
        st->time -= k->step;
    } else {
        st->time += k->step;
    }
    if (st->time >= k->len) {
        st->time = 0;
        st->index++;
        if (st->keys[st->index].data != (MimeData *)-1) {
            if (st->keys[st->index].data == NULL) {
                st->index = 0;
                st->flags |= 0x8000;
            }
        } else {
            st->flags |= 0x4000;
        }
    }
}

/* One MIMe step: the vertices (and the normals, when the key has them) of a TMD rebuilt from the base TMD plus
   the weighted differences. Matched 17 Oct: t initialised in its declaration and nd copied into a local declared
   after it (so the s3 = a3 copy follows t = src in the insn stream, which is how sched2 orders the prologue),
   n and d block-local per half (local-alloc takes them, leaving s0 to vd), to shared (docs/decomp_recipes.md) */
void func_801325B8(TmdHead *dst, TmdHead *src, s32 *vd, s32 *ndp, s32 w) {
    TmdHead *t = src;
    s32 *nd = ndp;
    SVECTOR *from;
    SVECTOR *to;
    {
        s32 n;
        s32 *d;
        from = (SVECTOR *)TMD_TOP(t, vert_top);
        t = dst;
        from += vd[2];
        to = (SVECTOR *)TMD_TOP(t, vert_top);
        n = vd[3];
        to += vd[2];
        d = vd + 4;
        memcpy(to, from, n * 8);
        gteMIMefunc(to, (SVECTOR *)d, n, w);
    }
    if (nd != NULL) {
        s32 n;
        s32 *d;
        vd = nd;
        t = src;
        from = (SVECTOR *)TMD_TOP(t, normal_top);
        t = dst;
        from += vd[2];
        to = (SVECTOR *)TMD_TOP(t, normal_top);
        n = vd[3];
        to += vd[2];
        d = vd + 4;
        memcpy(to, from, n * 8);
        gteMIMefunc(to, (SVECTOR *)d, n, w);
    }
}

void func_8013277C(void) {
}

extern MATRIX *RotMatrixZYX(SVECTOR *r, MATRIX *m);
extern void GsGetLw(GameCoord2 *c, MATRIX *m);
extern void func_80020F34();

s32 func_80132784(u8 *arg0, u8 *arg1, s32 arg2) {
    GameCoord2 coord;
    MATRIX lw;
    MATRIX rot;
    MATRIX m;
    SVECTOR r;
    u8 pad[8]; /* MATCH-TRICK: unused frame pad, the original frame is 8 bytes bigger than its locals (0xF8) */
    u8 *o;
    u8 *pose;
    u8 *p;
    u32 w;

    if (AF(arg0, s32, 0x20) == 0 && AF(arg1, s32, 0x20) == 0) {
        return;
    }
    o = AF(arg1, u8 *, 0x20);
    pose = AF(o, u8 *, 0x20);
    if (pose == NULL) {
        return;
    }
    coord.super = AF(o, GameCoord2 *, 0x78);
    coord.flg = 0;
    if (AF(o, u16, 0x2C) & 1) {
        coord.coord = AF(o, GameMatrix, 0x34);
    } else {
        RotMatrixZYX((SVECTOR *)(o + 0x10), (MATRIX *)&coord.coord);
        coord.coord.t[0] = AF(o, s16, 8) = AF(arg1, u16, 6) + AF(arg1, u16, 0x50);
        coord.coord.t[1] = AF(o, s16, 0xA) = AF(arg1, u16, 0xA) + AF(arg1, u16, 0x52);
        coord.coord.t[2] = AF(o, s16, 0xC) = AF(arg1, u16, 0xE) + AF(arg1, u16, 0x54);
        AF(o, GameMatrix, 0x34) = coord.coord;
        AF(o, u16, 0x2C) |= 1;
    }
    if (AF(o, u16, 0x2C) & 0x10) {
        func_80020F34(&coord.coord, o + 0x18);
    }
    GsGetLw(&coord, &lw);
    if (!((u32)pose & 0x1000000) && !(AF(o, u16, 0x2C) & 0x40)) {
        pose += (u16)arg2 * 12;
        RotMatrixZYX((SVECTOR *)(pose + 6), &rot);
        rot.t[0] = AF(pose, s16, 0);
        rot.t[1] = AF(pose, s16, 2);
        rot.t[2] = AF(pose, s16, 4);
    } else {
        p = (u8 *)((u32)pose & 0xFEFFFFFF) + (u16)arg2 * 8;
        r.vx = AF(p, u16, 6);
        w = AF(p, u32, 0);
        r.vy = AF(p, u8, 1) | ((w & 0xF) << 8);
        r.vz = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, &rot);
        rot.t[0] = AF(p, s8, 3);
        rot.t[1] = AF(p, s8, 4);
        rot.t[2] = AF(p, s8, 5);
    }
    gte_SetRotMatrix(&lw);
    gte_ldclmv(&rot);
    gte_rtir();
    gte_stclmv(&m);
    gte_ldclmv((u8 *)&rot + 2);
    gte_rtir();
    gte_stclmv((u8 *)&m + 2);
    gte_ldclmv((u8 *)&rot + 4);
    gte_rtir();
    gte_stclmv((u8 *)&m + 4);
    gte_SetTransMatrix(&lw);
    gte_ldlv0(rot.t);
    gte_rtv0tr();
    gte_stlvnl(m.t);

    o = AF(arg0, u8 *, 0x20);
    RotMatrixZYX((SVECTOR *)(o + 0x10), &rot);
    rot.t[0] = AF(o, s16, 8) = AF(arg0, u16, 6) + AF(arg0, u16, 0x50);
    rot.t[1] = AF(o, s16, 0xA) = AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52);
    rot.t[2] = AF(o, s16, 0xC) = AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54);
    gte_SetRotMatrix(&m);
    gte_ldclmv(&rot);
    gte_rtir();
    gte_stclmv(&lw);
    gte_ldclmv((u8 *)&rot + 2);
    gte_rtir();
    gte_stclmv((u8 *)&lw + 2);
    gte_ldclmv((u8 *)&rot + 4);
    gte_rtir();
    gte_stclmv((u8 *)&lw + 4);
    gte_SetTransMatrix(&m);
    gte_ldlv0(rot.t);
    gte_rtv0tr();
    gte_stlvnl(lw.t);
    AF(o, MATRIX, 0x34) = lw;
    AF(o, MATRIX, 0x54) = lw;
    AF(o, s32, 0x30) = 1;
    AF(o, u16, 0x2C) |= 1;
}

/* the velocity toward a point: the unit direction times the speed */
void func_80132DC4(Mover *m, SVECTOR *to, s32 speed) {
    SVECTOR d;
    SVECTOR n;
    d.vx = to->vx - m->pos[0].h.i;
    d.vy = to->vy - m->pos[1].h.i;
    d.vz = to->vz - m->pos[2].h.i;
    VectorNormalSS(&d, &n);
    m->vel[0] = n.vx * speed;
    m->vel[1] = n.vy * speed;
    m->vel[2] = n.vz * speed;
}

/* the squared ground distance from the camera's focus */
s32 func_80132E6C(Mover *m) {
    VECTOR d;
    VECTOR sq;
    d.vx = m->pos[0].h.i - D_80126B58.focus[0];
    d.vy = 0;
    d.vz = m->pos[2].h.i - D_80126B58.focus[2];
    Square0(&d, &sq);
    return sq.vx + sq.vz;
}

/* set every value's low half in a key / value list (0 ends it) */
void func_80132EC4(s32 *list, s16 v) {
    while (*list != 0) {
        *(s16 *)(list + 1) = v;
        list += 2;
    }
}

/* a prop of a kind, copied from another */
Prop *func_80132EF4(Prop *from, u16 kind) {
    Prop *e = func_8012913C(kind);
    if (e != NULL) {
        func_80129350(e, from);
    }
    return e;
}

extern u8 D_80126BE0;
extern s32 func_80135888();
extern void func_8012F038();
extern void func_8012F14C();

void func_80132F40(StageActor *a) {
    SVECTOR p;
    SVECTOR np;
    SVECTOR unused; /* MATCH-TRICK: frame pad, 8 unused bytes in the original frame */
    HitBox *h;
    s16 y;
    s32 y0;
    s16 y1;
    SVECTOR *npp = &np;
    p.vx = D_80126B5E;
    p.vy = D_80126B62;
    p.vz = D_80126B66;
    np = p;
    if (func_80135888(a->model, a->hitData, &D_80126BE0, npp) != 0) {
        h = (HitBox *)KSEG0(a->hitData);
        /* MATCH-TRICK: the loop end note stops cse from reusing the copy's &p pseudo at the later calls */
        do { y0 = h->y0; } while (0);
        y1 = h->y1;
        y = y0;
        if (y1 < y0) {
            y = y1;
        }
        func_8012F038(&a->model->coord.coord, &p, npp);
        np.vy = y;
        func_8012F14C(&a->model->coord.coord, npp, &p);
        D_80126B5E = p.vx;
        D_80126B62 = p.vy;
        D_80126B66 = p.vz;
    }
}

/* a position's integer parts rotated by func_801330E0, back as 16.16 */
void func_80133060(Fixed *pos, Fixed *out, s16 a) {
    SVECTOR v;
    v.vx = pos[0].h.i;
    v.vy = pos[1].h.i;
    v.vz = pos[2].h.i;
    func_801330E0(&v, &v, a);
    out[0].w = v.vx << 16;
    out[1].w = v.vy << 16;
    out[2].w = v.vz << 16;
}

/* a point through the world-to-screen matrix, pushed out by a along the view axis in proportion, and back */
void func_801330E0(SVECTOR *v, SVECTOR *out, s16 a) {
    VECTOR r;
    VECTOR d;
    s32 flag;
    s32 z;
    MATRIX *m = &D_800AF630.wsm;
    gte_SetTransMatrix(m);
    gte_SetRotMatrix(m);
    gte_ldv0(v);
    gte_rtv0tr();
    gte_stlvnl(&r);
    gte_stflg(&flag);
    z = r.vz + a;
    d.vz = z;
    if (r.vz != 0) {
        d.vx = r.vx * z / r.vz;
        d.vy = r.vy * z / r.vz;
    } else {
        d.vy = 0;
        d.vx = 0;
    }
    d.vx -= m->t[0];
    d.vy -= m->t[1];
    d.vz -= m->t[2];
    ApplyTransposeMatrixLV(m, &d, &r);
    out->vx = r.vx;
    out->vy = r.vy;
    out->vz = r.vz;
}

/* Musashi rides the actor's model, the model's matrix scaled first (func_8013339C): his position into its frame,
   the model turned and moved, and back out (func_8012E014 without the scale) */
void func_80133298(StageActor *a) {
    VECTOR wp;
    VECTOR out;
    VECTOR local;
    MATRIX m;
    wp.vx = D_80126B5C;
    wp.vy = D_80126B60;
    wp.vz = D_80126B64;
    func_8012F0BC((MATRIX *)&a->model->coord.coord, &wp, &local);
    func_8012B2CC((Mover *)a);
    m = *(MATRIX *)&a->model->coord.coord;
    func_8013339C(&m, &a->model->scale);
    func_8012F1A4(&m, &local, &out);
    D_80126B5C = out.vx;
    D_80126B60 = out.vy;
    D_80126B64 = out.vz;
}

/* a matrix's columns divided by a model's scale (each axis, 1 where the scale is 0) */
void func_8013339C(MATRIX *m, SVECTOR *scale) {
    s16 tx;
    s16 ty;
    s16 tz;
    s16 sx;
    s16 sy;
    s16 sz;
    tx = scale->vx;
    sx = 1;
    if (tx != 0) {
        sx = tx;
    }
    ty = scale->vy;
    sy = 1;
    if (ty != 0) {
        sy = ty;
    }
    tz = scale->vz;
    sz = 1;
    if (tz != 0) {
        sz = tz;
    }
    m->m[0][0] = (m->m[0][0] << 12) / sx;
    m->m[1][0] = (m->m[1][0] << 12) / sx;
    m->m[2][0] = (m->m[2][0] << 12) / sx;
    m->m[0][1] = (m->m[0][1] << 12) / sy;
    m->m[1][1] = (m->m[1][1] << 12) / sy;
    m->m[2][1] = (m->m[2][1] << 12) / sy;
    m->m[0][2] = (m->m[0][2] << 12) / sz;
    m->m[1][2] = (m->m[1][2] << 12) / sz;
    m->m[2][2] = (m->m[2][2] << 12) / sz;
}

/* two boxes at two offsets overlap on every axis (x, z, then y); the shared `return 0` label keeps jump.c from
   turning the last test into a store flag (docs/decomp_recipes.md) */
s32 func_8013361C(HitBox *a, HitBox *b, SVECTOR *pa, SVECTOR *pb) {
    s16 oa;
    s16 ob;
    oa = pa->vx;
    ob = pb->vx;
    if (a->x0 + oa > b->x1 + ob) {
    out:
        return 0;
    }
    if (a->x1 + oa < b->x0 + ob) {
        goto out;
    }
    oa = pa->vz;
    ob = pb->vz;
    if (a->z0 + oa > b->z1 + ob) {
        goto out;
    }
    if (a->z1 + oa < b->z0 + ob) {
        goto out;
    }
    oa = pa->vy;
    ob = pb->vy;
    if (a->y0 + oa > b->y1 + ob) {
        goto out;
    }
    if (a->y1 + oa < b->y0 + ob) {
        goto out;
    }
    return 1;
}

/* the current header and two more; relocate the current one */
void func_801336E8(void *h, void *a, void *b) {
    if (h != NULL) {
        D_801ED3B0 = h;
        func_80136BC4(h);
    }
    D_801ED3B4 = a;
    D_801ED3B8 = b;
}

/* make one of the two the current header */
void func_8013373C(s16 i) {
    void *h = (&D_801ED3B4)[i];
    if (h != NULL) {
        D_801ED3B0 = h;
        func_80136BC4(h);
    }
}

/* a path from one point to another checked against the current header (func_80133AB0, up to five times),
   the end point adjusted; the result's bits say how the heights fell */
s32 func_80133784(s16 kind, SVECTOR *from, SVECTOR *to) {
    SVECTOR *s;
    SVECTOR *e;
    s16 dx;
    s16 dy;
    s16 dz;
    s32 d;
    s32 flags = 0;
    s16 n = 0;
    s16 hit = 0;
    s16 same = 0;
    s16 w;
    D_8018DA9C->pad = -0x7FFF;
    D_8018DAA0->pad = 0x7FFF;
    D_8018DA9C->vx = from->vx;
    D_8018DA9C->vz = from->vz;
    D_8018DAA0->vx = to->vx;
    D_8018DAA0->vz = to->vz;
    D_801ED3C0 = 0;
    D_801ED3BC = 0;
    if (kind == 0) {
        dx = to->vx - from->vx;
        dy = to->vy - from->vy;
        dz = to->vz - from->vz;
        if (dx == 0 && dy == 0) {
            same = dz == 0;
        }
        D_8018DA9C->vy = from->vy - 4;
        d = SquareRoot0(dx * dx + dz * dz);
        if (d < 3) {
            d = 4;
        } else if (d < 5) {
            d += 1;
        }
        D_8018DAA0->vy = to->vy + d + 1;
    } else {
        D_8018DA9C->vy = from->vy;
        if (kind == 2) {
            D_8018DAA0->vx = D_8018DA9C->vx;
            D_8018DAA0->vy = D_8018DA9C->vy + 6;
            D_8018DAA0->vz = D_8018DA9C->vz;
            same = 1;
        } else {
            D_8018DAA0->vy = to->vy;
        }
    }
    while (1) {
        d = func_80133AB0(kind, D_8018DA9C->vx, D_8018DA9C->vz, D_801ED3B0);
        if (d == 0) {
            break;
        }
        hit |= d;
        if (same) {
            break;
        }
        if (n++ < 5) {
            continue;
        }
        s = D_8018DA9C;
        e = D_8018DAA0;
        e->vx = s->vx;
        e->vy = s->vy;
        e->vz = s->vz;
        flags = 0x2000;
        goto out;
    }
    if (hit != 0 || D_801ED3BC != 0) {
        w = D_8018DA9C->pad;
        if (w >= -0xBCB) {
            if (w < -0x578) {
                flags |= 0x4000;
            } else {
                flags |= 0x8000;
            }
        }
        if (D_8018DAA0->pad < -0xBCB) {
            flags |= 0x2000;
        }
    out:
        to->vx = D_8018DAA0->vx;
        to->vy = D_8018DAA0->vy;
        to->vz = D_8018DAA0->vz;
        to->pad = D_801ED3C0;
        return flags & 0xFFFF;
    }
    to->pad = D_801ED3C0;
    return 0;
}

extern s32 func_80133CD4();

s32 func_80133AB0(s16 kind, s16 x, s16 z, void *h) {
    s16 cx;
    s16 cz;
    u16 w;
    u16 *cell;
    u16 *list;
    u16 n;
    u16 *rec;
    u16 id;
    s16 bit;
    s16 r;
    void *a;
    void *b;
    u8 *r18;
    u8 *r22;
    u8 *lists;
    D_8018DAA8->vx = D_8018DAA0->vx - D_8018DA9C->vx;
    D_8018DAA8->vy = D_8018DAA0->vy - D_8018DA9C->vy;
    D_8018DAA8->vz = D_8018DAA0->vz - D_8018DA9C->vz;
    cx = ((((u16)x + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 0);
    w = AF(h, u16, 4);
    if ((cx & 0xFFFFU) < w) {
        cz = ((((u16)z + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 2);
        if ((cz & 0xFFFFU) >= AF(h, u16, 6)) {
            return 0;
        }
        cell = (u16 *)((u16)(((u16)cz * w + (u16)cx) * 2) * 2 + AF(h, s32, 8));
        lists = AF(h, u8 *, 0x14);
        b = AF(h, void *, 0xC);
        a = AF(h, void *, 0x10);
        r18 = AF(h, u8 *, 0x18);
        r22 = AF(h, u8 *, 0x1C);
        list = (u16 *)(lists + cell[0]);
        n = cell[1];
        while (n-- != 0) {
            id = *list;
            bit = id & 0x8000;
            if (bit == 0) {
                rec = (u16 *)(r18 + id * 18);
            } else {
                rec = (u16 *)(r22 + (id & 0x7FFF) * 22);
            }
            r = func_80133CD4((bit | kind), rec, a, b);
            if (r != 0) {
                if (r > 0) {
                    D_801ED3C0 = *rec;
                }
                return 1;
            }
            list++;
            if (D_801ED3BC != 0) {
                D_801ED3C0 = *rec;
                return 0;
            }
        }
    }
    return 0;
}

extern s16 D_801152A8;
extern s16 D_801152AA;
extern VECTOR *D_8018DAB0;
extern VECTOR *D_8018DAB4;
extern s16 D_801152AE;
extern inline s32 func_80134310();
extern s32 func_8013435C();

s32 func_80133CD4(s32 kind0, u16 *rec, SVECTOR *v, s32 *t) {
    SVECTOR *p;
    s32 d;
    s32 a;
    s32 b;
    s32 z;
    s32 r;
    VECTOR *s;
    u16 f;
    s16 kind = kind0;

    p = &v[AF(rec, s16, 2)];
    d = t[AF(rec, s16, 4)];
    if (func_80134310(p, D_8018DAA0, d) >= 0) {
        return 0;
    }
    a = func_80134310(p, D_8018DA9C, d);
    if (a < 0) {
        return 0;
    }
    b = func_80134310(p, D_8018DAA8, 0);
    D_8018DAA4->vx = D_8018DA9C->vx + -a * D_8018DAA8->vx / b;
    D_8018DAA4->vy = D_8018DA9C->vy + -a * D_8018DAA8->vy / b;
    D_8018DAA4->vz = D_8018DA9C->vz + -a * D_8018DAA8->vz / b;
    if (func_8013435C(&v[AF(rec, s16, 6)], D_8018DAA4, t[AF(rec, s16, 8)], p)) {
        return 0;
    }
    if (func_8013435C(&v[AF(rec, s16, 10)], D_8018DAA4, t[AF(rec, s16, 12)], p)) {
        return 0;
    }
    if (func_8013435C(&v[AF(rec, s16, 14)], D_8018DAA4, t[AF(rec, s16, 16)], p)) {
        return 0;
    }
    if (kind < 0) {
        if (func_8013435C(&v[AF(rec, s16, 18)], D_8018DAA4, t[AF(rec, s16, 20)], p)) {
            return 0;
        }
    }
    if ((kind & 0x10) && (rec[0] & 0x100)) {
        return 0;
    }
    f = rec[0];
    if (f & 0x200) {
        D_801ED3C0 = f;
        return 0;
    }
    a = -func_80134310(p, D_8018DAA0, d);
    D_8018DAB0->vx = p->vx;
    D_8018DAB0->vy = p->vy;
    D_8018DAB0->vz = p->vz;
    gte_ldlvl(D_8018DAB0);
    gte_sqr0();
    gte_stlvnl(D_8018DAB4);
    s = D_8018DAB0;
    b = D_8018DAB4->vx + D_8018DAB4->vy + D_8018DAB4->vz;
    D_8018DAA0->vx += a * s->vx / b;
    D_8018DAA0->vy += a * s->vy / b;
    D_8018DAA0->vz += a * s->vz / b;
    a = D_8018DAA0->vx << 16;
    b = D_8018DAA0->vy << 16;
    z = D_8018DAA0->vz << 16;
    if ((s->vx <<= 4) < 0) {
        a |= 0xFFFF;
    }
    if ((s->vy <<= 4) < 0) {
        b |= 0xFFFF;
    }
    if ((s->vz <<= 4) < 0) {
        z |= 0xFFFF;
    }
    z += s->vz * 2;
    a += s->vx * 2;
    b += s->vy * 2;
    do {
        a += D_8018DAB0->vx;
        b += D_8018DAB0->vy;
        z += D_8018DAB0->vz;
        D_8018DAA0->vx = a >> 16;
        D_8018DAA0->vy = b >> 16;
        D_8018DAA0->vz = z >> 16;
        r = func_80134310(p, D_8018DAA0, d);
    } while (p->vy < -0xE00 ? r < 0x1800 : r < 0x2F00);
    if (p->vy >= -0xBCB) {
        D_8018DA9C->pad = p->vy;
        D_801152B0 = *p;
        if (*(u8 *)rec == 0) {
            return -1;
        }
    } else {
        D_801152A8 = AF(p, s16, 0);
        D_801152AA = D_8018DAA0->pad = AF(p, s16, 2);
        D_801152AC = AF(p, s16, 4);
        D_801152AE = AF(p, s16, 6);
    }
    return 1;
}

/* the dot product of two short vectors, plus a constant */
inline s32 func_80134310(SVECTOR *a, SVECTOR *b, s32 c) {
    return a->vx * b->vx + a->vy * b->vy + a->vz * b->vz + c;
}

/* the dot product (plus c) under a limit that is nearer when d's y is low: a facing test */
s32 func_8013435C(SVECTOR *a, SVECTOR *b, s32 c, SVECTOR *d) {
    s32 lim = -0x2F00;
    if (d->vy < -0xE00) {
        lim = -0x1800;
    }
    return func_80134310(a, b, c) < lim;
}

/* a path from one point to another against the cell records (func_80133AB0), tried again from the end point
   when it lies in another cell; to is moved to the hit */
s32 func_801343C4(s16 kind, SVECTOR *from, SVECTOR *to) {
    SVECTOR *s;
    SVECTOR *e;
    s32 k = kind;
    s32 x0;
    s32 x1;
    D_8018DA9C->vx = from->vx;
    D_8018DA9C->vy = from->vy;
    D_8018DA9C->vz = from->vz;
    D_8018DAA0->vx = to->vx;
    D_8018DAA0->vy = to->vy;
    D_8018DAA0->vz = to->vz;
    D_801ED3C0 = 0;
    D_801ED3BC = 0;
    if (func_80133AB0(k, D_8018DA9C->vx, D_8018DA9C->vz, D_801ED3B0) != 0) {
    hit:
        to->vx = D_8018DAA0->vx;
        to->vy = D_8018DAA0->vy;
        to->vz = D_8018DAA0->vz;
        to->pad = D_801ED3C0;
        return 1;
    }
    s = D_8018DA9C;
    e = D_8018DAA0;
    x0 = s->vx;
    x1 = e->vx;
    if ((x0 & 0xFF80) == (x1 & 0xFF80) && (s->vz & 0xFF80) == (e->vz & 0xFF80)) {
        return 0;
    }
    if (func_80133AB0(k, x1, e->vz, D_801ED3B0) != 0) {
        goto hit;
    }
    return 0;
}

/* the ground under a point: a path straight down from 4 above to 0x2FC below (func_801345F8); the point's y
   is set to the hit, the result's bits say how high the start was */
s32 func_80134510(SVECTOR *p) {
    SVECTOR *e = D_8018DAA0;
    SVECTOR *s = D_8018DA9C;
    s32 r = 0;
    s16 x;
    s16 y;
    s16 z;
    s16 w;
    p->pad = 0;
    x = p->vx;
    s->vx = x;
    e->vx = x;
    y = p->vy;
    s->vy = y - 4;
    e->vy = y + 0x2FC;
    z = p->vz;
    s->vz = z;
    e->vz = z;
    if (func_801345F8(D_801ED3B0, s, e) != 0) {
        p->vy = D_8018DAA4->vy - 2;
        w = D_8018DA9C->pad;
        if (w >= -0xBCB) {
            r = 0x8000;
            if (w < -0x578) {
                r = 0x4000;
            }
        } else {
            r = 0x2000;
        }
        D_8018DA9C->pad = D_801ED3C0;
    }
    return r;
}

extern s32 func_801347A0();

/* the records of the cell under the path start (D_8018DA9C) tried against it (func_801347A0), last first: 1 when
   one blocks it, its first word kept in D_801ED3C0 */
s32 func_801345F8(void *h, SVECTOR *s, SVECTOR *e) {
    s16 cx;
    s16 cz;
    s32 idx;
    u16 k;
    u16 *cell;
    u16 *list;
    u16 n;
    u16 *rec;
    u16 id;
    s16 bit;
    void *a;
    void *b;
    u8 *r18;
    u8 *r22;
    u8 *lists;
    cx = ((((u16)D_8018DA9C->vx + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 0);
    if ((cx & 0xFFFFU) < AF(h, u16, 4)) {
        cz = ((((u16)D_8018DA9C->vz + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 2);
        if ((cz & 0xFFFFU) >= AF(h, u16, 6)) {
            return 0;
        }
        {
            idx = (u16)cz * AF(h, u16, 4) + (u16)cx;
            k = idx * 2;
            cell = (u16 *)(k * 2 + AF(h, s32, 8));
            lists = AF(h, u8 *, 0x14);
            b = AF(h, void *, 0xC);
            a = AF(h, void *, 0x10);
            r18 = AF(h, u8 *, 0x18);
            r22 = AF(h, u8 *, 0x1C);
            n = cell[1];
            list = (u16 *)(lists + cell[0]) + n - 1;
            while (n-- != 0) {
                id = *list;
                bit = id & 0x8000;
                if (bit == 0) {
                    rec = (u16 *)(r18 + id * 18);
                } else {
                    rec = (u16 *)(r22 + (id & 0x7FFF) * 22);
                }
                if (func_801347A0(bit, rec, a, b) != 0) {
                    D_801ED3C0 = *rec;
                    return 1;
                }
                list--;
            }
        }
    }
    return 0;
}

extern inline s32 func_80134A28();

s32 func_801347A0(s32 arg0, u16 *rec, SVECTOR *a, s32 *b) {
    s16 bit = arg0;
    SVECTOR *s;
    s32 c;
    s32 t;
    s32 d;
    s32 q;

    s = a + (s16)rec[1];
    c = b[(s16)rec[2]];
    if (func_80134A28(s, D_8018DAA0, c) >= 0) {
        return 0;
    }
    t = func_80134A28(s, D_8018DA9C, c);
    if (t < 0) {
        return 0;
    }
    d = s->vy * 0x30;
    q = (-t * 0x30) / d;
    D_8018DAA4->vx = D_8018DA9C->vx;
    D_8018DAA4->vy = D_8018DA9C->vy + q;
    D_8018DAA4->vz = D_8018DA9C->vz;
    if (func_80134A28(a + (s16)rec[3], D_8018DAA4, b[(s16)rec[4]]) < -0x2F00) {
        return 0;
    }
    if (func_80134A28(a + (s16)rec[5], D_8018DAA4, b[(s16)rec[6]]) < -0x2F00) {
        return 0;
    }
    if (func_80134A28(a + (s16)rec[7], D_8018DAA4, b[(s16)rec[8]]) < -0x2F00) {
        return 0;
    }
    if (bit != 0) {
        if (func_80134A28(a + (s16)rec[9], D_8018DAA4, b[(s16)rec[10]]) < -0x2F00) {
            return 0;
        }
    }
    if (rec[0] & 0x300) {
        return 0;
    }
    D_8018DAA4->vx = D_8018DA9C->vx;
    D_8018DAA4->vz = D_8018DA9C->vz;
    *(SVECTOR *)&D_801152A8 = *s;
    D_8018DA9C->pad = s->vy;
    return 1;
}

/* the dot product of two short vectors, plus a constant (this file's copy) */
inline s32 func_80134A28(SVECTOR *a, SVECTOR *b, s32 c) {
    return a->vx * b->vx + a->vy * b->vy + a->vz * b->vz + c;
}

extern s32 func_80134C20();

s32 func_80134A74(u16 kind, s16 x, s16 z, void *h) {
    s16 cx;
    s16 cz;
    u16 w;
    u16 *cell;
    u16 *list;
    u16 n;
    u8 *rec;
    u16 id;
    s16 bit;
    void *a;
    void *b;
    u8 *r18;
    u8 *r22;
    u8 *lists;
    w = AF(h, u16, 4);
    cx = ((((u16)x + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 0);
    if ((u32)(cx & 0xFFFF) < w) {
        cz = ((((u16)z + 0x8000) >> 7) & 0x1FF) - AF(h, u16, 2);
        if ((u32)(cz & 0xFFFF) >= AF(h, u16, 6)) {
            return 0;
        }
        b = AF(h, void *, 0xC);
        a = AF(h, void *, 0x10);
        r18 = AF(h, u8 *, 0x18);
        r22 = AF(h, u8 *, 0x1C);
        lists = AF(h, u8 *, 0x14);
        cell = (u16 *)((u16)(((u16)cz * w + (u16)cx) * 2) * 2 + AF(h, s32, 8));
        n = cell[1];
        list = (u16 *)(lists + cell[0]) + n - 1;
        while (n-- != 0) {
            id = *list;
            bit = id & 0x8000;
            if (bit == 0) {
                rec = r18 + id * 18;
                list--;
            } else {
                rec = r22 + (id & 0x7FFF) * 22;
                list--;
            }
            if (func_80134C20((s16)(bit | kind), rec, a, b) != 0) {
                D_801ED3C0 = *(u16 *)rec;
                return 1;
            }
        }
    }
    return 0;
}

extern inline s32 func_80134FB8();

s32 func_80134C20(s32 kind0, s16 *rec, SVECTOR *a, s32 *b) {
    s16 kind = kind0;
    SVECTOR *p = &a[rec[1]];
    s32 c = b[rec[2]];
    s32 d1;
    s32 dd;
    s32 n;
    if (func_80134FB8(p, D_8018DAA0, c) >= 0) {
        return 0;
    }
    d1 = func_80134FB8(p, D_8018DA9C, c);
    if (d1 < 0) {
        return 0;
    }
    dd = func_80134FB8(p, D_8018DAA8, 0);
    n = -d1;
    D_8018DAA4->vx = D_8018DA9C->vx + n * D_8018DAA8->vx / dd;
    D_8018DAA4->vy = D_8018DA9C->vy + n * D_8018DAA8->vy / dd;
    D_8018DAA4->vz = D_8018DA9C->vz + n * D_8018DAA8->vz / dd;
    if (func_80134FB8(&a[rec[3]], D_8018DAA4, b[rec[4]]) < -0x2F00) {
        return 0;
    }
    if (func_80134FB8(&a[rec[5]], D_8018DAA4, b[rec[6]]) < -0x2F00) {
        return 0;
    }
    if (func_80134FB8(&a[rec[7]], D_8018DAA4, b[rec[8]]) < -0x2F00) {
        return 0;
    }
    if (kind < 0) {
        if (func_80134FB8(&a[rec[9]], D_8018DAA4, b[rec[10]]) < -0x2F00) {
            return 0;
        }
    }
    if (kind & 1) {
        if ((u16)rec[0] & 0x300) {
            return 0;
        }
    } else if ((u16)rec[0] & 0x200) {
        D_801ED3C0 = rec[0];
        return 0;
    }
    *(SVECTOR *)&D_801152A8 = *p;
    VectorNormalSS(D_8018DAA8, D_8018DAA8);
    D_8018DAA4->vx -= D_8018DAA8->vx >> 11;
    D_8018DAA4->vy -= D_8018DAA8->vy >> 11;
    D_8018DAA4->vz -= D_8018DAA8->vz >> 11;
    return 1;
}

/* the dot product of two short vectors, plus a constant (this file's copy) */
inline s32 func_80134FB8(SVECTOR *a, SVECTOR *b, s32 c) {
    return a->vx * b->vx + a->vy * b->vy + a->vz * b->vz + c;
}

/* the same against the cell records of func_80134A74 (the kind a bit set), tried again from the end point when it
   lies in another cell; to is moved to the hit (D_8018DAA4) */
s32 func_80135004(u16 kind, SVECTOR *from, SVECTOR *to) {
    SVECTOR *e = D_8018DAA0;
    SVECTOR *s2;
    SVECTOR *e2;
    s32 k = kind;
    s16 ax;
    s16 bx;
    s16 ay;
    s16 by;
    s16 az;
    s16 bz;
    u16 x0;
    u16 x1;
    u16 z0;
    u16 z1;
    ax = to->vx;
    e->vx = ax;
    bx = from->vx;
    D_8018DA9C->vx = bx;
    D_8018DAA8->vx = ax - bx;
    ay = to->vy;
    e->vy = ay;
    by = from->vy;
    D_8018DA9C->vy = by;
    D_8018DAA8->vy = ay - by;
    az = to->vz;
    e->vz = az;
    bz = from->vz;
    D_8018DA9C->vz = bz;
    D_8018DAA8->vz = az - bz;
    D_801ED3C0 = 0;
    if (func_80134A74(k, D_8018DA9C->vx, D_8018DA9C->vz, D_801ED3B0) != 0) {
    hit:
        to->vx = D_8018DAA4->vx;
        to->vy = D_8018DAA4->vy;
        to->vz = D_8018DAA4->vz;
        to->pad = D_801ED3C0;
        return 1;
    }
    s2 = D_8018DA9C;
    e2 = D_8018DAA0;
    x0 = s2->vx;
    x1 = e2->vx;
    if ((x0 & 0xFF80) == (x1 & 0xFF80)) {
        z0 = s2->vz;
        z1 = e2->vz;
        if ((z0 & 0xFF80) == (z1 & 0xFF80)) {
            return 0;
        }
    }
    if (func_80134A74(k, x1, e2->vz, D_801ED3B0) != 0) {
        goto hit;
    }
    return 0;
}

/* a path from one point to another against the cell records (func_80134A74): to is moved to the hit */
s32 func_80135168(u16 kind, SVECTOR *from, SVECTOR *to) {
    SVECTOR *e = D_8018DAA0;
    s16 ax;
    s16 bx;
    s16 ay;
    s16 by;
    s16 az;
    s16 bz;
    ax = to->vx;
    e->vx = ax;
    bx = from->vx;
    D_8018DA9C->vx = bx;
    D_8018DAA8->vx = ax - bx;
    ay = to->vy;
    e->vy = ay;
    by = from->vy;
    D_8018DA9C->vy = by;
    D_8018DAA8->vy = ay - by;
    az = to->vz;
    e->vz = az;
    bz = from->vz;
    D_8018DA9C->vz = bz;
    D_8018DAA8->vz = az - bz;
    D_801ED3C0 = 0;
    if (func_80134A74(kind, D_8018DA9C->vx, D_8018DA9C->vz, D_801ED3B0) != 0) {
        to->vx = D_8018DAA4->vx;
        to->vy = D_8018DAA4->vy;
        to->vz = D_8018DAA4->vz;
        to->pad = D_801ED3C0;
        return 1;
    }
    return 0;
}

/* func_80135888 with a second try: when the path's ends lie in different 0x80 cells, the cells at its end too */
s32 func_80135260(u8 *a, s32 f, SVECTOR *q, SVECTOR *pos) {
    MATRIX unused;
    VECTOR unused2;
    SVECTOR unused3;
    s32 *p;
    s32 mode;
    MATRIX *m;
    switch (func_80135480(a, f, q, pos)) {
    case 0:
        return 0;
    case 1:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 0;
        break;
    case 2:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 1;
        break;
    case 3:
        m = (MATRIX *)(a + 0x34);
        p = &D_801ED3E4;
        mode = 0;
        break;
    case 4:
        m = &D_801ED3C4;
        p = &D_801ED3E4;
        mode = 1;
        break;
    }
    if (f < 0) {
        if (func_80135EB0(p, 0) != 0) goto hit;
        while ((p = (s32 *)*p) != NULL) {
            if (func_80135EB0(p, 0) != 0) {
            hit:
                func_80136A94(mode, (Off48 *)a, pos, m);
                return 1;
            }
        }
    } else {
        SVECTOR *s = D_8018DAA0;
        SVECTOR *e = D_8018DA9C;
        D_8018DAA8->vx = s->vx - e->vx;
        D_8018DAA8->vy = s->vy - e->vy;
        D_8018DAA8->vz = s->vz - e->vz;
        if (func_80134A74(0, e->vx, e->vz, p) != 0) goto hit;
        {
            SVECTOR *e2 = D_8018DA9C;
            SVECTOR *s2 = D_8018DAA0;
            if (((u16)e2->vx & 0xFF80) != ((u16)s2->vx & 0xFF80) || ((u16)e2->vz & 0xFF80) != ((u16)s2->vz & 0xFF80)) {
                if (func_80134A74(0, s2->vx, s2->vz, p) != 0) goto hit;
            }
        }
    }
    return 0;
}

s32 func_80135480(u8 *a, s32 f, SVECTOR *pos, SVECTOR *v) {
    VECTOR p;
    VECTOR q;
    VECTOR r;
    MatW m;
    SVECTOR sv;
    ScaleObj *o = (ScaleObj *)a;
    s32 mode;
    s16 n;
    u16 *t;
    p.vx = pos->vx - o->m.t[0];
    p.vz = pos->vz - o->m.t[2];
    if (!(f & 0x10000000) && p.vx * p.vx + p.vz * p.vz > 0x40000) return 0;
    mode = f & 0x60000000;
    if (mode != 0) {
        n = 1;
        if (f >= 0) mode &= 0x40000000;
        p.vy = pos->vy - o->m.t[1];
        q.vx = v->vx - o->m.t[0];
        q.vy = v->vy - o->m.t[1];
        q.vz = v->vz - o->m.t[2];
        switch (mode) {
        case 0x60000000:
            *(s32 *)&D_801ED3C4 = 0x1000000 / o->sx;
            D_801ED3C8 = 0;
            D_801ED3CC = 0x1000000 / o->sy;
            D_801ED3D0 = 0;
            D_801ED3D4 = 0x1000000 / o->sz;
            MulMatrix2(&o->m, &D_801ED3C4);
            n = 2;
            ApplyTransposeMatrixLV(&D_801ED3C4, &p, &p);
            ApplyRotMatrixLV(&q, &q);
        case 0x20000000:
            {
            s32 x = o->sx; s32 y = o->sy; s16 z = o->sz;
            t = (u16 *)KSEG0(f); m.w[1] = 0; m.w[3] = 0; m.w[0] = x; m.w[2] = y; m.h = z;
            }
            SetRotMatrix((MATRIX *)&m);
            sv.vx = t[2];
            sv.vy = t[4];
            sv.vz = t[6];
            ApplyRotMatrix(&sv, &r);
            D_801ED3E8.v = r.vx;
            D_801ED3EC.v = r.vy;
            D_801ED3F0.v = r.vz;
            sv.vx = t[3];
            sv.vy = t[5];
            sv.vz = t[7];
            ApplyRotMatrix(&sv, &r);
            D_801ED3E4 = 0;
            D_801ED3EA = r.vx;
            D_801ED3EE = r.vy;
            D_801ED3F2 = r.vz;
            n += 2;
            break;
        case 0x40000000:
            ApplyTransposeMatrixLV(&o->m, &p, &p);
            ApplyRotMatrixLV(&q, &q);
            n = 2;
            break;
        }
        D_8018DA9C->vx = p.vx;
        D_8018DA9C->vy = p.vy;
        D_8018DA9C->vz = p.vz;
        D_8018DAA0->vx = q.vx;
        D_8018DAA0->vy = q.vy;
        D_8018DAA0->vz = q.vz;
        return n;
    }
    D_8018DA9C->vx = p.vx;
    D_8018DA9C->vy = pos->vy - o->m.t[1];
    D_8018DA9C->vz = p.vz;
    D_8018DAA0->vx = v->vx - o->m.t[0];
    D_8018DAA0->vy = v->vy - o->m.t[1];
    D_8018DAA0->vz = v->vz - o->m.t[2];
    return 1;
}

/* func_80135D20's twin for a path: the same frame search, and for cell records the path's step (D_8018DAA8) is set
   from its two ends before func_80134A74 */
s32 func_80135888(u8 *a, s32 f, SVECTOR *q, SVECTOR *pos) {
    MATRIX unused;
    s32 *p;
    s32 mode;
    MATRIX *m;
    switch (func_80135480(a, f, q, pos)) {
    case 0:
        return 0;
    case 1:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 0;
        break;
    case 2:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 1;
        break;
    case 3:
        m = (MATRIX *)(a + 0x34);
        p = &D_801ED3E4;
        mode = 0;
        break;
    case 4:
        m = &D_801ED3C4;
        p = &D_801ED3E4;
        mode = 1;
        break;
    }
    if (f < 0) {
        if (func_80135EB0(p, 0) != 0) goto hit;
        while ((p = (s32 *)*p) != NULL) {
            if (func_80135EB0(p, 0) != 0) {
            hit:
                func_80136A94(mode, (Off48 *)a, pos, m);
                return 1;
            }
        }
    } else {
        SVECTOR *s = D_8018DAA0;
        SVECTOR *e = D_8018DA9C;
        D_8018DAA8->vx = s->vx - e->vx;
        D_8018DAA8->vy = s->vy - e->vy;
        D_8018DAA8->vz = s->vz - e->vz;
        if (func_80134A74(0, e->vx, e->vz, p) != 0) goto hit;
    }
    return 0;
}

/* func_80135888 for a moving path: the list search, or (f >= 0) up to six tries at the cells along it, stopping at
   the first miss or when the path has no length; on a hit the stop point is the path's end */
s32 func_80135A4C(u8 *a, s32 f, SVECTOR *q, SVECTOR *pos) {
    MATRIX unused;
    s32 *p;
    s32 mode;
    MATRIX *m;
    s16 hit;
    s16 i;
    s16 same;
    s32 r;
    switch (func_80135480(a, f, q, pos)) {
    case 0:
        return 0;
    case 1:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 0;
        break;
    case 2:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 1;
        break;
    case 3:
        m = (MATRIX *)(a + 0x34);
        p = &D_801ED3E4;
        mode = 0;
        break;
    case 4:
        m = &D_801ED3C4;
        p = &D_801ED3E4;
        mode = 1;
        break;
    }
    hit = 0;
    if (f < 0) {
        if (func_80135EB0(p, -0x8000) != 0) goto found;
        while ((p = (s32 *)*p) != NULL) {
            if (func_80135EB0(p, -0x8000) != 0) {
            found:
                func_80136A94(mode, (Off48 *)a, pos, m);
                return 1;
            }
        }
    } else {
        i = 0;
        D_8018DA9C->pad = -0x7FFF;
        D_8018DAA0->pad = 0x7FFF;
        D_801ED3C0 = 0;
        D_801ED3BC = 0;
        same = q->vx == pos->vx && q->vy == pos->vy && q->vz == pos->vz;
        do {
            r = func_80133AB0(0, D_8018DA9C->vx, D_8018DA9C->vz, p);
            if (r == 0) goto out;
            hit |= r;
            if (same) goto out;
        } while (i++ < 5);
        return 0;
    out:
        if (hit == 0 && D_801ED3BC == 0) return 0;
        if (D_8018DA9C->pad >= -0xBCB) *(SVECTOR *)&D_801152A8 = D_801152B0;
        D_8018DAA4->vx = D_8018DAA0->vx;
        D_8018DAA4->vy = D_8018DAA0->vy;
        D_8018DAA4->vz = D_8018DAA0->vz;
        goto found;
    }
    return 0;
}

/* a point's ground (func_80135480's verdict): from the list f points to (top bit set), D_801ED3E4's list or the cell
   records at f; on a hit the position is moved with the found frame (func_80136A94) and 1 returned */
s32 func_80135D20(u8 *a, s32 f, SVECTOR *pos) {
    u8 unused[0x60];
    SVECTOR v;
    s32 *p;
    s32 mode;
    MATRIX *m;
    v.vx = pos->vx;
    v.vy = pos->vy + 0x300;
    v.vz = pos->vz;
    switch (func_80135480(a, f, pos, &v)) {
    case 0:
        return 0;
    case 1:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 0;
        break;
    case 2:
        m = (MATRIX *)(a + 0x34);
        p = (s32 *)((f & 0x0FFFFFFF) | 0x80000000);
        mode = 1;
        break;
    case 3:
        m = (MATRIX *)(a + 0x34);
        p = &D_801ED3E4;
        mode = 0;
        break;
    case 4:
        m = &D_801ED3C4;
        p = &D_801ED3E4;
        mode = 1;
        break;
    }
    if (f < 0) {
        if (func_80135EB0(p, 0) != 0) goto hit;
        while ((p = (s32 *)*p) != NULL) {
            if (func_80135EB0(p, 0) != 0) {
            hit:
                func_80136A94(mode, (Off48 *)a, pos, m);
                return 1;
            }
        }
    } else if (((s32 (*)(s32))func_801345F8)(f) != 0) {   /* one argument: a1 and a2 pass through */
        goto hit;
    }
    return 0;
}

/* r287: matched by giving every arm its own y test. The allocator counts references before cross-jumping, so the
   repeats lift cy above f (cy in s2, f in s3) and then merge into one test; arms 4 and 8 stay apart by jumping to it. */
extern s32 D_801150D8;

s32 func_80135EB0(s32 *node, s32 f) {
    Box *b = (Box *)node;
    s32 c;
    s32 cy;
    s32 c2;
    s32 c2y;
    s32 v;
    if (D_8018DA9C->vx < b->x0) c = 1;
    else c = (b->x1 < D_8018DA9C->vx) << 1;
    if (D_8018DA9C->vz < b->z0) c |= 4;
    else if (b->z1 < D_8018DA9C->vz) c |= 8;
    if (D_8018DA9C->vy < b->y0) cy = 0x10;
    else cy = (b->y1 < D_8018DA9C->vy) << 5;
    if ((c | cy) == 0) {
        SVECTOR *e = D_8018DA9C; SVECTOR *o = D_8018DAA4;
        u16 x, z; s32 mid;
        o->vx = x = e->vx;
        mid = (b->x0 + b->x1) >> 1;
        ((S16Cell *)&D_801152AA)->v = 0;
        ((S16Cell *)&D_80126720)->v = mid;
        ((S16Cell *)&D_801152A8)->v = x - mid;
        o->vz = z = e->vz;
        ((S16Cell *)&D_80126724)->v = mid = (b->z0 + b->z1) >> 1;
        ((S16Cell *)&D_801152AC)->v = z - mid;
        o->vy = e->vy;
        ((S16Cell *)&D_80126722)->v = (b->y0 + b->y1) >> 1;
        VectorNormalSS((SVECTOR *)&D_801152A8, (SVECTOR *)&D_801152A8);
        D_801150D8 |= 1;
        return 1;
    }
    if (D_8018DAA0->vx < b->x0) c2 = 1;
    else c2 = (b->x1 < D_8018DAA0->vx) << 1;
    if (D_8018DAA0->vz < b->z0) c2 |= 4;
    else if (b->z1 < D_8018DAA0->vz) c2 |= 8;
    if (D_8018DAA0->vy < b->y0) c2y = 0x10;
    else c2y = (b->y1 < D_8018DAA0->vy) << 5;
    if ((c | cy) & (c2 | c2y)) goto fail;
    D_8018DAA8->vx = D_8018DAA0->vx - D_8018DA9C->vx;
    D_8018DAA8->vy = D_8018DAA0->vy - D_8018DA9C->vy;
    D_8018DAA8->vz = D_8018DAA0->vz - D_8018DA9C->vz;
    switch (c) {
    case 4:
        if (func_80136334(b, (s16)f, b->z0)) goto found;
        goto test;
    case 1:
        if (func_801365B8(b, (s16)f, b->x0)) goto hit;
        if (cy == 0) goto fail;
        break;
    case 2:
        if (func_801365B8(b, (s16)(f | 1), b->x1)) goto hit;
        if (cy == 0) goto fail;
        break;
    case 5:
        if (func_80136334(b, (s16)f, b->z0)) goto hit;
        if (func_801365B8(b, (s16)f, b->x0)) goto hit;
        if (cy == 0) goto fail;
        break;
    case 6:
        if (func_80136334(b, (s16)f, b->z0)) goto hit;
        if (func_801365B8(b, (s16)(f | 1), b->x1)) goto hit;
        if (cy == 0) goto fail;
        break;
    case 9:
        if (func_801365B8(b, (s16)f, b->x0)) goto hit;
    case 8:
        if (func_80136334(b, (s16)(f | 1), b->z1)) goto found;
        goto test;
    fail:
        return 0;
    default:
    found:
        return 1;
    case 10:
        if (func_801365B8(b, (s16)(f | 1), b->x1)) goto hit;
        if (func_80136334(b, (s16)(f | 1), b->z1)) goto hit;
    case 0:
    test:
        if (cy == 0) goto fail;
        break;
    }
    if (cy == 0x10) v = func_80136824(b, (s16)f, b->y0);
    else v = func_80136824(b, (s16)(f | 1), b->y1);
    if (v == 0) goto fail;
hit:
    return 1;
}

s32 func_80136334(Box *b, s16 f, s16 z) {
    s32 d;
    s32 dz;
    s32 den;
    SVECTOR *e;
    SVECTOR *o;
    SVECTOR *s;
    SVECTOR unused;
    if (!(f & 1)) {
        d = z - D_8018DA9C->vz;
        dz = d;
        den = -D_8018DAA8->vz;
    } else {
        den = D_8018DAA8->vz;
        d = D_8018DA9C->vz - z;
        dz = -d;
    }
    e = D_8018DA9C;
    o = D_8018DAA4;
    s = D_8018DAA8;
    o->vx = e->vx + -d * s->vx / den;
    o->vy = e->vy + -d * s->vy / den;
    o->vz = e->vz + dz;
    if (o->vx < b->x0 || b->x1 < o->vx || o->vy < b->y0 || b->y1 < o->vy) return 0;
    if (f & 0x8000) {
        o->vx = D_8018DAA0->vx;
        o->vy = D_8018DAA0->vy;
    }
    D_801152AA = 0;
    D_801152A8 = 0;
    if (f & 1) {
        D_8018DAA4->vz = z + 2;
        ((S16R *)&D_801152AC)->v = 0xFFF;
    } else {
        ((s16 *)&D_801152AC)[0] = -0xFFF;
        D_8018DAA4->vz = z - 2;
    }
    ((S16Cell *)&D_80126720)->v = (b->x0 + b->x1) >> 1;
    ((S16Cell *)&D_80126722)->v = (b->y0 + b->y1) >> 1;
    ((S16Cell *)&D_80126724)->v = (b->z0 + b->z1) >> 1;
    return 1;
}

/* the path (D_8018DA9C + t * D_8018DAA8) crossing the box's face at x (f & 1: the far face): the point in D_8018DAA4
   when it lies inside the face (1), the face's normal in D_801152A8 and the box's centre in D_80126720 */
s32 func_801365B8(Box *b, s16 f, s16 x) {
    s32 d;
    s32 dx;
    s32 den;
    SVECTOR *e;
    SVECTOR *o;
    SVECTOR *s;
    if (!(f & 1)) {
        d = x - D_8018DA9C->vx;
        dx = d;
        den = -D_8018DAA8->vx;
    } else {
        den = D_8018DAA8->vx;
        d = D_8018DA9C->vx - x;
        dx = -d;
    }
    e = D_8018DA9C;
    o = D_8018DAA4;
    s = D_8018DAA8;
    o->vx = e->vx + dx;
    o->vy = e->vy + -d * s->vy / den;
    o->vz = e->vz + -d * s->vz / den;
    if (o->vz < b->z0 || b->z1 < o->vz || o->vy < b->y0 || b->y1 < o->vy) return 0;
    if (f & 0x8000) {
        o->vy = D_8018DAA0->vy;
        o->vz = D_8018DAA0->vz;
    }
    D_801152AC = 0;
    D_801152AA = 0;
    if (f & 1) {
        D_801152A8 = 0xFFF;
        D_8018DAA4->vx = x + 2;
    } else {
        D_801152A8 = -0xFFF;
        D_8018DAA4->vx = x - 2;
    }
    ((S16Cell *)&D_80126720)->v = (b->x0 + b->x1) >> 1;
    ((S16Cell *)&D_80126722)->v = (b->y0 + b->y1) >> 1;
    ((S16Cell *)&D_80126724)->v = (b->z0 + b->z1) >> 1;
    return 1;
}

s32 func_80136824(Box *b, s16 f, s16 y) {
    s32 d;
    s32 dy;
    s32 den;
    SVECTOR *e;
    SVECTOR *o;
    SVECTOR *s;
    if (!(f & 1)) {
        d = y - D_8018DA9C->vy;
        dy = d;
        den = -D_8018DAA8->vy;
    } else {
        den = D_8018DAA8->vy;
        d = D_8018DA9C->vy - y;
        dy = -d;
    }
    e = D_8018DA9C;
    o = D_8018DAA4;
    s = D_8018DAA8;
    o->vx = e->vx + -d * s->vx / den;
    o->vy = e->vy + dy;
    o->vz = e->vz + -d * s->vz / den;
    if (o->vx < b->x0 || b->x1 < o->vx || o->vz < b->z0 || b->z1 < o->vz) return 0;
    if (f & 0x8000) {
        o->vx = D_8018DAA0->vx;
        o->vz = D_8018DAA0->vz;
    }
    D_801152AC = 0;
    D_801152A8 = 0;
    if (f & 1) {
        D_801152AA = 0xFFF;
        D_8018DAA4->vy = y + 2;
    } else {
        D_801152AA = -0xFFF;
        D_8018DAA4->vy = y - 2;
    }
    ((S16Cell *)&D_80126720)->v = (b->x0 + b->x1) >> 1;
    ((S16Cell *)&D_80126722)->v = (b->y0 + b->y1) >> 1;
    ((S16Cell *)&D_80126724)->v = (b->z0 + b->z1) >> 1;
    return 1;
}

/* turns D_8018DAA4's vector and D_80126720 by m (and D_801152A8 by the GTE's rotation) when asked, then out is
   D_8018DAA4 + o->t and D_80126720 moves by o->t */
void func_80136A94(s32 turn, Off48 *o, SVECTOR *out, MATRIX *m) {
    VECTOR r;
    if (turn != 0) {
        ApplyMatrixSV(m, D_8018DAA4, D_8018DAA4);
        ApplyMatrixSV(m, (SVECTOR *)&D_80126720, (SVECTOR *)&D_80126720);
        {
            s16 *p = &D_801152A8;
            ApplyRotMatrix((SVECTOR *)p, &r);
            *p = r.vx;
            D_801152AA = r.vy;
            D_801152AC = r.vz;
        }
    }
    out->vx = D_8018DAA4->vx + o->t[0];
    out->vy = D_8018DAA4->vy + o->t[1];
    out->vz = D_8018DAA4->vz + o->t[2];
    {
        s16 *q = &D_80126720;
        *q += o->t[0];
    }
    {
        s32 *t = &o->t[1];      /* a plain pointer: its loads stay behind the stores before them */
        D_80126722 += *t;
        t++;
        D_80126724 += *t;
    } 
}

void func_80136BC4(void *p) {
    RelocHead *h = p;
    if (h->unk8 == 0x20) {
        h->unk8 = (u32)h + 0x20;
        h->unkC += (u32)h;
        h->unk10 += (u32)h;
        h->unk14 += (u32)h;
        h->unk18 += (u32)h;
        h->unk1C += (u32)h;
    }
}

void func_80136C1C(void) {
    func_80136C3C();
}

void func_80136C3C(void) {
}

void func_80136C44(void) {
}

void func_80136C4C(void) {
}

/* the current mode's handler */
void func_80136C54(void) {
    D_8018DAB8[D_800AF630.state]();
}

/* the ten-character text at (0x78, 0x10) */
void func_80136C90(void) {
    Text10 t = D_801EBEBC;
    func_8001534C(0, (s32)&t, 0x78, 0x10, 0, 0);
}

void func_80136D00(void) {
}

/* a line between two world points, white to grey (debug drawing) */
void func_80136D08(SVECTOR *a, SVECTOR *b) {
    LINE_G2 *p;
    s32 dummy;
    s32 flag;
    s32 z;
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    p = (LINE_G2 *)AllocPrim(sizeof(LINE_G2));
    SetLineG2(p);
    p->r0 = p->b1 = 0xFF;
    p->b0 = p->r1 = p->g0 = p->g1 = 0x80;
    z = (RotTransPers(a, (s32 *)&p->x0, &dummy, &flag) + RotTransPers(b, (s32 *)&p->x1, &dummy, &flag)) >> 3;
    AddPrim(D_800A6518[D_800AF630.frame].org + z, p);
}

/* Musashi's position, heading and one more value printed (debug) */
void func_80136DFC(void) {
    func_800153CC(0xA, D_80126B5E, 0x110, 0x3C, 4, 0);
    func_800153CC(0xB, D_80126B62, 0x110, 0x44, 4, 0);
    func_800153CC(0xC, D_80126B66, 0x110, 0x4C, 4, 0);
    func_800153CC(0xD, D_80126B58.model->rot.vy, 0x110, 0x54, 4, 0);
    func_800153CC(0xE, D_80126CC4, 0x110, 0x5C, 4, 0);
}

void func_80136EC4(void) {
}

/* a screen line in the colour given */
void func_80136ECC(s16 x0, s16 y0, s16 x1, s16 y1, u8 r, u8 g, u8 b) {
    GsLINE l;
    l.x0 = x0;
    l.x1 = x1;
    l.attribute = 0;
    l.y0 = y0;
    l.y1 = y1;
    l.r = r;
    l.g = g;
    l.b = b;
    GsSortLine(&l, &D_800A6518[D_800AF630.frame], 0);
}

void func_80136F3C(s32 x, s32 y) {
    GsLINE l;
    s16 x0, x1, y0, y1;
    y0 = y - 3;
    x1 = x + 3;
    y1 = y + 3;
    l.attribute = 0;
    l.r = 0xFF;
    l.g = 0;
    l.b = 0;
    l.x0 = x - 3;
    l.y0 = y0;
    l.x1 = x1;
    l.y1 = y1;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
    x0 = x1;
    x1 = x - 3;
    l.attribute = 0;
    l.r = 0xFF;
    l.g = 0;
    l.b = 0;
    l.x0 = x0;
    l.y0 = y0;
    l.x1 = x1;
    l.y1 = y1;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
}

/* a green Y marker at a screen point (debug) */
void func_80137030(s32 x, s32 y) {
    GsLINE l;
    s16 a, b;
    a = x - 3;
    b = y - 3;
    l.attribute = 0;
    l.r = 0;
    l.g = 0xFF;
    l.b = 0;
    l.x0 = a;
    l.y0 = b;
    l.x1 = x;
    l.y1 = y;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
    a = x + 3;
    l.attribute = 0;
    l.r = 0;
    l.g = 0xFF;
    l.b = 0;
    l.x0 = a;
    l.y0 = b;
    l.x1 = x;
    l.y1 = y;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
    b = y + 3;
    l.attribute = 0;
    l.r = 0;
    l.g = 0xFF;
    l.b = 0;
    l.x0 = x;
    l.y0 = b;
    l.x1 = x;
    l.y1 = y;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
}

static inline void func_80137178_line(s16 x0, s16 y0, s16 x1, s16 y1, u8 r, u8 g, u8 b) {
    GsLINE l;
    l.attribute = 0;
    l.r = r;
    l.g = g;
    l.b = b;
    l.x0 = x0;
    l.y0 = y0;
    l.x1 = x1;
    l.y1 = y1;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
}

/* a blue Z at a screen point (debug marker), drawn as a polyline: each line moves one end */
void func_80137178(s32 x, s32 y) {
    s16 x0 = x - 3;
    s16 y0 = y - 3;
    s16 x1 = x + 3;
    s16 y1 = y - 3;
    func_80137178_line(x0, y0, x1, y1, 0, 0, 0xFF);
    y0 = y + 3;
    func_80137178_line(x0, y0, x1, y1, 0, 0, 0xFF);
    y1 = y + 3;
    func_80137178_line(x0, y0, x1, y1, 0, 0, 0xFF);
}

extern u8 D_800B9A11;

static inline void func_801372B0_x(s16 x, s16 y) {
    GsLINE l;
    s16 x0, x1, y0, y1;
    y0 = y - 3;
    x1 = x + 3;
    y1 = y + 3;
    l.attribute = 0;
    l.r = 0xFF;
    l.g = 0;
    l.b = 0;
    l.x0 = x - 3;
    l.y0 = y0;
    l.x1 = x1;
    l.y1 = y1;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
    x0 = x1;
    x1 = x - 3;
    l.attribute = 0;
    l.r = 0xFF;
    l.g = 0;
    l.b = 0;
    l.x0 = x0;
    l.y0 = y0;
    l.x1 = x1;
    l.y1 = y1;
    GsSortLine(&l, &D_800A6518[D_800B9A02], 0);
}

void func_801372B0(void) {
    SVECTOR v;
    SVECTOR o;
    Work *w = &D_800AF630;
    s16 x, y;
    v.vx = v.vy = v.vz = 0;
    if (D_800B9A11 == 1) return;
    v.vx = 0x10;
    ApplyMatrixSV(&w->wsm, &v, &o);
    func_80137178_line(0x78, -0x5A, o.vx + 0x78, o.vy - 0x5A, 0xFF, 0xFF, 0xFF);
    v.vx += 6;
    ApplyMatrixSV(&w->wsm, &v, &o);
    x = o.vx + 0x78;
    y = o.vy - 0x5A;
    func_801372B0_x(x, y);
    v.vx = 0;
    v.vy = 0x10;
    ApplyMatrixSV(&w->wsm, &v, &o);
    func_80137178_line(0x78, -0x5A, o.vx + 0x78, o.vy - 0x5A, 0xFF, 0xFF, 0xFF);
    v.vy += 6;
    ApplyMatrixSV(&w->wsm, &v, &o);
    x = o.vx + 0x78;
    y = o.vy - 0x5A;
    func_80137030(x, y);
    v.vy = 0;
    v.vz = 0x10;
    ApplyMatrixSV(&w->wsm, &v, &o);
    func_80137178_line(0x78, -0x5A, o.vx + 0x78, o.vy - 0x5A, 0xFF, 0xFF, 0xFF);
    v.vz += 6;
    ApplyMatrixSV(&w->wsm, &v, &o);
    x = o.vx + 0x78;
    y = o.vy - 0x5A;
    func_80137178(x, y);
}

Win *func_801375EC(s32 id, s32 v) {
    return func_80137614(id, v, 0);
}

/* a free window opened with the message given */
Win *func_80137614(s32 id, s16 v, s32 flags) {
    Win *w = func_801399A8();
    if (w != NULL) {
        func_801377B4(id, flags & 0xD8, w);
        w->unk1C = v;
    }
    return w;
}

Win *func_8013767C(s32 id) {
    Win *w = func_801399A8();
    if (w != NULL) {
        func_801377B4(id, 0, w);
    }
    return w;
}

Win *func_801376C8(s32 id) {
    return func_801376E8(id, NULL);
}

/* window 0 opened with the message given, at pos when given, centred on it */
Win *func_801376E8(s32 id, u16 *pos) {
    Win *w = D_801269F0;
    func_801377B4(id, 0x6200, w);
    D_80126A1C = 0x1C;
    D_801269FD = 0;
    if (pos != NULL) {
        D_80126A14[0] = pos[0];
        D_80126A14[1] = pos[1];
    }
    func_80139BE0(w);
    D_80126A20 = D_80126A14[0] + 0x28 - ((D_80126A24 + 0x28) >> 1);
    D_80126A22 = D_80126A14[1] - ((s16)D_80126A26 >> 1);
    return w;
}

/* a window set up for message id; unless flags has 0x2000 it becomes the front one */
void func_801377B4(s32 id, s16 flags, Win *w) {
    Win **f;
    Win *c;
    func_80137840(w);
    w->state = 1;
    w->id = id;
    w->flags = flags;
    if (!(flags & 0x2000)) {
        f = &D_80127524;
        c = *f;
        if (c != NULL) {
            D_80127528 = c;
            c->unk1A = 2;
        }
        *f = w;
    }
}

/* a window's fields reset */
void func_80137840(Win *w) {
    w->unkC = 1;
    w->unk23 = 1;
    w->unk1A = 1;
    w->unk28 = w->unk2A = 0x1000;
    w->unk2C = 0x24;
    w->unk2E = 3;
    w->state = 0;
    w->unk6 = 0;
    w->unk1C = 0;
    w->unk10 = 0;
    w->unk14 = 0;
    w->unk12 = 0;
    w->unk16 = 0;
    w->unk30 = 0;
    w->unk32 = 0;
    w->unk34 = 0;
    w->unk36 = 0;
    w->unk22 = 0;
    w->unk20 = 0;
    w->unk40 = 0;
    w->unk1F = -1;
    w->unk44 = 0;
    w->unk46 = 0;
    w->unk48 = 0;
    w->unk4A = 0;
    func_80139634(w);
    w->unkD = 0;
    func_80139DC8();
}

/* the window system cleared */
void func_801378F0(void) {
    s32 i;
    func_80016714(D_80127520, 0xBFC);
    for (i = 0; i < 3; i++) {
        func_80016714(&D_801269F0[i], 0x4C);
        D_801269F0[i].unk38 = D_8018DAC0[i].a;
        D_801269F0[i].unk3A = D_8018DAC0[i].b;
        D_801269F0[i].unk3C = D_8018DAC0[i].c;
        D_801269F0[i].unk3E = D_8018DAC0[i].d;
    }
    func_8013A860();
}

void func_801379D8(void) {
    D_8012752E = 1;
}

void func_801379EC(void) {
    D_8012752E = 0;
}

/* the windows' frame: the front one steps first, then the others; then each visible one is drawn */
void func_801379FC(void) {
    s32 i;
    D_80127548 = 0x24;
    if (D_80127524 != NULL && D_80127524->id != 0) {
        func_80138BE0(D_80127524);
        for (i = 0; i < 3; i++) {
            if (&D_801269F0[i] != D_80127524 && D_801269F0[i].id != 0) {
                func_80138BE0(&D_801269F0[i]);
            }
        }
    } else {
        for (i = 0; i < 3; i++) {
            if (D_801269F0[i].id != 0) {
                func_80138BE0(&D_801269F0[i]);
            }
        }
    }
    for (i = 0; i < 3; i++) {
        if (D_801269F0[i].state != 0 && D_801269F0[i].id != 0 && (D_801269F0[i].flags & 0x1000) &&
            !(D_801269F0[i].flags & 0x2000)) {
            func_80137BD8(&D_801269F0[i]);
        }
    }
    func_8013A380();
}

void func_80137B80(void) {
    D_80127548 = 0x24;
    if (D_801269F0[0].id != 0) {
        func_80138BE0(D_801269F0);
    }
    D_8018DB0C++;
}

/* a window drawn: its text, its frame, and for the front one the arrow or the prompt */
void func_80137BD8(Win *w) {
    u8 col[3];
    if (w->flags & 0x1000) {
        func_801392FC(w, w->unk1E, &D_800A6518[D_800AF630.frame]);
        if (w->unk20 != 0) {
            func_801397B0(w);
        }
    }
    if (D_80127524 == w) {
        if (w->state == 7) {
            col[0] = 0x39;
            col[1] = 0xFF;
            col[2] = 0x71;
            func_80137DD4(w, col, &D_800A6518[D_800AF630.frame]);
        } else if (w->state == 3 && (D_800AF630.tick & 4)) {
            func_80139680(w, &D_800A6518[D_800AF630.frame]);
        }
    }
}

/* window 0's step for the frame: its text, then the arrow (state 7) or the blinking prompt (state 3) */
s32 func_80137D08(s32 a, GsOT *b, s16 c) {
    u8 col[3];
    g_PrimNext = a;
    D_80126A0A = c;
    func_801392FC(D_801269F0, D_80126A0E, b);
    if (D_801269F4 == 7) {
        col[0] = 0x39;
        col[1] = 0xFF;
        col[2] = 0x71;
        func_80137DD4(D_801269F0, col, b);
    } else if (D_801269F4 == 3 && (D_8018DB0C & 4)) {
        func_80139680(D_801269F0, b);
    }
    return g_PrimNext;
}

extern void func_80137FD8(Win *w, u8 *col, PolyG4 *p, s16 y);

void func_80137DD4(Win *w, u8 *col, GsOT *ot) {
    s16 r;
    s16 y;
    s16 t;
    s16 n;
    PolyG4 *p;
    P_TAG *m;
    r = w->unk12 - w->unk16;
    if (r < 0) {
        r += w->unk2E + 1;
    }
    n = r - w->unk21;
    t = (s8)AF(w, u8, 0x1F) + 1;
    y = w->unk32 + (s16)(n + t) * 14;
    p = (PolyG4 *)AllocPrim(0x48);
    col[3] = 0;
    func_80137FD8(w, col, p, y);
    addPrim(&ot->org[w->unk1A], p);
    p++;
    col[3] = 1;
    func_80137FD8(w, col, p, y);
    addPrim(&ot->org[w->unk1A], p);
    m = (P_TAG *)AllocPrim(8);
    m->len = 1;
    ((u32 *)m)[1] = 0xE100000A;
    addPrim(&ot->org[w->unk1A], m);
}

/* the window's highlight bar: the colour given fading to white, one row high */
void func_80137FD8(Win *w, u8 *col, PolyG4 *p, s16 y) {
    p->len = 8;
    p->code = 0x3A;
    p->r0 = col[0];
    p->g0 = col[1];
    p->b0 = col[2];
    p->r1 = col[0];
    p->g1 = col[1];
    p->b1 = col[2];
    p->r2 = 0xFF;
    p->g2 = 0xFF;
    p->b2 = 0xFF;
    p->r3 = 0xFF;
    p->g3 = 0xFF;
    p->b3 = 0xFF;
    p->x0 = p->x2 = w->unk30;
    if (w->flags & 0x2000) {
        p->x1 = p->x3 = w->unk30 + w->unk34 - 12;
    } else {
        p->x1 = p->x3 = w->unk30 + w->unk34;
    }
    if (col[3] == 0) {
        p->y0 = p->y1 = y;
        p->y2 = p->y3 = y + 5;
    } else {
        p->y0 = p->y1 = y + 12;
        p->y2 = p->y3 = y + 5;
    }
}

extern inline void func_80139914();
extern s32 func_800CF864();
extern void func_8001AAD0();
extern void func_80029124();
extern void func_801391F0();
extern s32 func_80138C60();
extern void func_80138D58(Win *w, u16 n);
extern void func_80138AB4();

void func_801380E0(Win *w) {
    u16 *p;
    u8 *s;
    u8 c;
    u8 arg;
    s32 r;
    s16 *voice; /* D_8012752E, and D_8012752C read through it (one object split by splat) */
    if (w->unkC != 0) {
        w->unkC--;
    } else {
        voice = &D_8012752E;
        do {
            r = 0;
            if (w->flags & 0x400) {
                s = (u8 *)D_80127530[w->unk4A];
                p = &w->unk44;
            } else {
                p = &w->unk10;
                s = (u8 *)w->id;
            }
            {
                u8 *t = s + *p;
                c = t[0];
                arg = t[1];
            }
            if (c >= 0x20) {
                r = func_80138DE0(w, c, arg);
                if (!(w->flags & 0x80220)) {
                    r = 0;
                }
                continue;
            }
            if (c == 0) {
                goto stop;
            }
            switch (c) {
            case 10:
                func_80139220(w);
                *p += 1;
                w->flags &= ~0x80000;
                continue;
            case 7:
                if (w->flags & 0x10000) {
                    r = 1;
                } else {
                    w->state = 3;
                }
                *p += 1;
                continue;
            case 8:
                func_801391F0(w);
                *p += 1;
                continue;
            case 1:
                w->unk23 = arg;
                *p += 2;
                r = 1;
                continue;
            case 2:
                w->unk22 = arg;
                w->unk20 = s[*p + 2];
                *p += 3;
                if (func_80138C60(w) == 0) {
                    func_80139914(w);
                    return;
                }
                w->state = 9;
                if (s[*p] == 5) {
                    w->flags |= 0x4000;
                    *p += 1;
                }
                continue;
            case 22:
                w->flags = (w->flags & ~0x20) | 0x4001;
                *p += 1;
                r = 1;
                continue;
            case 5:
                w->flags |= 0x4000;
                *p += 1;
                r = 1;
                continue;
            case 4:
                w->unkD = arg;
                *p += 2;
                r = 1;
                continue;
            case 3:
                if (!(w->flags & 0x20000)) {
                    w->state = 0xB;
                    w->unkD = arg;
                    w->flags = (w->flags | 0x8000) & ~0x20;
                    continue;
                }
                *p += 2;
                r = 1;
                continue;
            case 6:
                w->state = 4;
                *p += 1;
                continue;
            case 11:
                if (voice[0] != 0 || (w->flags & 0x20) || func_800CF864() == 0) {
                    *p += 4;
                    r = 1;
                    continue;
                }
                voice[-1] = s[*p + 2] + (s[*p + 3] << 8);
                *p += 4;
                w->flags = (w->flags & ~0x60020) | 0x10000;
                if (voice[-1] != 0) {
                    func_8001AAD0(arg & 0x7F, voice[-1]);
                    if (arg & 0x80) {
                        w->flags |= 0x40000;
                    }
                    if (s[*p] == 2 || (w->flags & 0x40000)) {
                        r = 1;
                    } else {
                        w->state = 0x10;
                    }
                    if (func_8001B22C() == 0) {
                        if (w->flags & 1) {
                            CancelStreamLoad();
                        } else {
                            w->flags = (w->flags & ~0x10000) | 0x20020;
                            func_80139788();
                        }
                        w->state = 2;
                    }
                    continue;
                }
                r = 1;
                continue;
            case 12:
                w->state = 6;
                w->unk21 = 2;
                *p += 1;
                w->flags |= 0x4300;
                continue;
            case 13:
                w->state = 6;
                w->unk21 = 3;
                *p += 1;
                w->flags |= 0x4300;
                continue;
            case 9:
                func_80138D58(w, arg);
                *p += 2;
                r = 1;
                continue;
            case 14:
                w->state = 8;
                w->unk44 = 0;
                func_80138AB4(w);
                *p += 1;
                continue;
            case 15:
                w->unk44 = 0;
                w->flags |= 0x400;
                *p += 1;
                r = 1;
                continue;
            case 16:
                func_80029124(arg | (s[*p + 2] << 8), 1);
                *p += 3;
                r = 1;
                continue;
            case 17:
                func_80029124(arg | (s[*p + 2] << 8), 0);
                *p += 3;
                r = 1;
                continue;
            case 18:
                if ((u8)func_80029178(arg | (s[*p + 2] << 8)) != 0) {
                    *p += 4 + s[*p + 3];
                } else {
                    *p += 4;
                }
                r = 1;
                continue;
            case 19:
                if ((u8)func_80029178(arg | (s[*p + 2] << 8)) == 0) {
                    *p += 4 + s[*p + 3];
                } else {
                    *p += 4;
                }
                r = 1;
                continue;
            case 20:
                if (!(w->flags & 0x20000)) {
                    w->unkE = s[*p + 1] + (s[*p + 2] << 8);
                }
                *p += 3;
                r = 1;
                continue;
            case 21:
                if (w->unkE != 0) {
                    w->state = 0xF;
                } else {
                    r = 1;
                }
                *p += 1;
                continue;
            case 23:
                w->flags |= 2;
                *p += 1;
                r = 1;
                continue;
            case 24:
                w->flags |= 0x80000;
                *p += 1;
                r = 1;
                continue;
            case 25:
                *p += 1;
                if ((w->flags & 0x10000) && D_8012752C != 0) {
                    w->state = 0x10;
                    continue;
                }
                r = 1;
                continue;
            default:
                *p += 1;
                r = 1;
                continue;
            }
        stop:
            if (w->flags & 0x400) {
                w->flags &= ~0x400;
                if (w->unk4A < 3) {
                    w->unk4A++;
                }
                continue;
            }
            if (w->flags & 0x2000) {
                w->state = 0xD;
                return;
            }
            w->state = 0xA;
            return;
        } while (r != 0);
        if (w->unkC == 0) {
            w->unkC = w->unkD;
        }
    }
    func_80139A8C(w);
    func_80139B18(w);
}

/* the window's text run until it waits: characters, then the control codes below 0x20 */
void func_801387B8(Win *w) {
    u16 *p;
    u8 *s;
    u8 c;
    u8 arg;
    s32 r;
loop:
    r = 0;
    if (w->flags & 0x400) {
        s = (u8 *)D_80127530[w->unk4A];
        p = &w->unk44;
    } else {
        p = &w->unk10;
        s = (u8 *)w->id;
    }
    {
        u8 *t = s + *p;
        c = t[0];
        arg = t[1];
    }
    if (c >= 0x20) {
        r = func_80138DE0(w, c, arg);
        if (!(w->flags & 0x80220)) {
            r = 0;
        }
        goto next;
    }
    if (c == 0) {
        goto stop;
    }
    switch (c) {
    case 10:
        func_80139220(w);
        *p += 1;
        goto next;
    case 1:
        w->unk23 = arg;
        *p += 2;
        r = 1;
        goto next;
    case 7:
        if (!(w->flags & 0x20000)) {
            w->flags &= ~0x20;
        }
        break;
    case 23:
        w->flags |= 2;
    default:
        *p += 1;
        r = 1;
        goto next;
    }
stop:
    func_80138948(w);
next:
    if (r != 0) goto loop;
    func_80139A8C(w);
    func_80139B18(w);
}

void func_80138948(Win *w) {
    w->state = 7;
    w->unk1F = 0;
    w->unkD = 0;
}

/* the choice keys: confirm (0x40), up (0x1000), down (0x4000), and cancel to the last choice (0x30) */
void func_8013895C(Win *w) {
    if (D_80127524 == w || (w->flags & 0x2000)) {
        if (func_80138DB8(w, 0, 0x40) != 0) {
            w->unk1F++;
            func_80138B88(w);
            func_8002D4C8(0x630, 0);
        } else if (func_80138DB8(w, 0, 0x1000) != 0) {
            if (--w->unk1F < 0) {
                w->unk1F = w->unk21 - 1;
            }
            func_8002D4C8(0x62F, 0);
        } else if (func_80138DB8(w, 0, 0x4000) != 0) {
            if (++w->unk1F >= w->unk21) {
                w->unk1F = 0;
            }
            func_8002D4C8(0x62F, 0);
        } else if ((w->flags & 2) && func_80138DB8(w, 0, 0x30) != 0) {
            w->unk1F = w->unk21 - 1;
            func_8002D4C8(0x62F, 0);
        }
    }
}

/* a number put into the window digit by digit */
void func_80138AB4(Win *w) {
    u8 buf[8];
    s32 n;
    s32 r;
    n = func_80139D04(buf, D_80127540[w->unk48]);
    do {
        r = 0;
        if (w->unk44 < n) {
            r = func_80138DE0(w, buf[w->unk44] + 0x30, 0);
            if (!(w->flags & 0x80220)) {
                r = 0;
            }
        } else {
            if (w->unk48 < 3) {
                w->unk48++;
            }
            w->state = 2;
        }
    } while (r != 0);
    func_80139B18(w);
}

/* a window answered: state 0xD, or 0xC with the choice passed on */
void func_80138B88(Win *w) {
    Cursor *p;
    if (w->flags & 0x2000) {
        w->state = 0xD;
        return;
    }
    w->state = 0xC;
    p = w->unk40;
    w->flags &= ~0x1000;
    if (p != NULL && w->unk18 != 0) {
        p->state = 3;
    }
}

/* a window's step: the countdown, then the handler of its state */
void func_80138BE0(Win *w) {
    if (w->unkE != 0) {
        w->unkE--;
    }
    D_8018DB10[w->state](w);
}

void func_80138C30(Win *w) {
    if (w->state == 4) {
        w->state = 2;
    } else {
        w->flags |= 0x800;
    }
}

s32 func_80138C60(Win *w) {
    u8 t;
    s32 k;
    if (w->flags & 0x2000) return 1;
    w->unk18 = w->unk22 & 7;
    if (w->unk18 < 2) w->unk20 = 0;
    if (w->flags & 0x40) {
        w->unk22 = (w->unk22 & 0x67) | (w->flags & ~0x67);
    }
    t = w->unk22;
    if (t & 0x80) {
        k = (t & 0x18) >> 3;
    } else {
        k = (t & 0x78) >> 3;
        if (t & 0x60) w->unk1C = 0;
    }
    *(Pt16 *)w->pos = D_8018DADC[k];
    func_80139BE0(w);
    func_80139C7C(w);
    return func_8013A8FC(w);
}

void func_80138D58(Win *w, u16 n) {
    if (w->unk40 != NULL && w->unk18 >= 2 && w->unk18 < 7 && n >= 2 && n < 7) {
        w->unk18 = n;
        func_8013A9F8(w->unk40, n);
    }
}

s16 func_80138DB8(Win *w, u8 which, s32 mask) {
    return TestPadDirWideAny(which, mask);
}

/* one character put: 0xE0 and up a wide one, 0x20 and up a narrow one; the frame's character budget used */
s32 func_80138DE0(Win *w, u8 ch, s32 x) {
    u16 *p;
    s32 *c;
    if (D_80127548 == 0) {
        return 0;
    }
    if ((w->flags & 0x400) || w->state == 8) {
        p = &w->unk44;
    } else {
        p = &w->unk10;
    }
    if (ch >= 0xE0) {
        x = func_80138ED0(w, 0x1F, D_800D3AB4);
        if (x != 0) {
            return 0;
        }
        *p += 2;
    } else if (ch >= 0x20) {
        x = func_80138ED0(w, ch - 0x20, D_800D3AB4);
        if (x != 0) {
            return 0;
        }
        *p += 1;
    }
    if (x != 0) {
        return 0;
    }
    c = &D_80127548;
    return --*c;
}

extern s32 func_8013914C();
extern u16 D_80127C0C[];

/* a glyph put into the window's text area (two 4-bit pixel columns per halfword), then copied into this frame's
   slot of the character buffer after the budget word and loaded to VRAM */
s32 func_80138ED0(Win *w, u16 ch, u8 *font) {
    RECT r;
    u16 x;
    u16 col;
    u8 *g;
    u16 *src;
    u16 *d;
    u16 *dst;
    s32 i;
    s32 j;
    s32 b; /* PORT NOTE: read before set, as the original */
    s32 t;
    s32 k;
    s32 *c;
    u16 *s;
    col = w->unk23 & 0xF;
    if (func_8013914C(w, &r) != 0) {
        return 1;
    }
    x = r.x - w->unk38;
    g = font + ch * 12;
    src = &D_80127C0C[x];
    if (x % 3 != 0) {
        for (i = 0, k = 0; i < 12; i++) {
            for (j = 6; j < 8; j++) {
                t = (u16)b << 4;
                if (!((*g >> j) & 1)) b = t; else b = t | (u16)col;
            }
            src[k++] |= b << 8;
            for (j = 2; j < 6; j++) {
                t = (u16)b << 4;
                if (!((*g >> j) & 1)) b = t; else b = t | (u16)col;
            }
            src[k] = b;
            k += 53;
            g++;
        }
    } else {
        for (i = 0, k = 0; i < 12; i++) {
            for (j = 4; j < 8; j++) {
                t = (u16)b << 4;
                if (!((*g >> j) & 1)) b = t; else b = t | (u16)col;
            }
            src[k++] = b;
            for (j = 2; j < 4; j++) {
                t = (u16)b << 4;
                if (!((*g >> j) & 1)) b = t; else b = t | (u16)col;
            }
            src[k] = b & 0xFF;
            k += 53;
            g++;
        }
    }
    i = 0;
    s = src;
    c = &D_80127548;
    dst = (u16 *)(&D_80127548 + 1) + (0x24 - *c) * 24;
    for (d = dst; i < 12; i++) {
        *d++ = *s++;
        *d++ = *s;
        s += 53;
    }
    r.w = 2;
    r.h = 12;
    LoadImage(&r, (u32 *)dst);
    return 0;
}

/* the next character cell of a window's text: past the row's end it goes to the next row (1 when the text ends) */
s32 func_8013914C(Win *w, s16 *out) {
    if (w->unk14 >= w->unk2C && func_80139220(w) != 0) {
        return 1;
    }
    out[0] = w->unk38 + (u32)(w->unk14 * 3) / 2;
    out[1] = w->unk3A + w->unk12 * 12;
    w->unk14++;
    return 0;
}

void func_801391F0(Win *w) {
    w->unk12 = 0;
    w->unk14 = 0;
    w->unk16 = 0;
    func_80139634(w);
    func_80139DC8();
}

/* the next row, wrapping; 1 when the window is full */
s32 func_80139220(Win *w) {
    s32 d;
    w->unk14 = 0;
    w->unk12 = (w->unk12 + 1) % (w->unk2E + 1);
    func_80139DC8();
    d = w->unk12 - w->unk16;
    if (d == -1 || d >= w->unk2E) {
        func_801392C8(w);
        return 1;
    }
    return 0;
}

void func_801392C8(Win *w) {
    func_801395D4(w);
    w->unk1E = 0;
    w->state = 5;
}

/* a window's frame strips: one sprite per text row from the window's text area (the rows scrolled by unk16), the
   first row k pixels short, then the k-pixel remainder (in two sprites when wider than 0xFC) */
void func_801392FC(Win *w, s32 k, GsOT *ot) {
    GsSPRITE s;
    s32 i;
    s32 m;
    s.attribute = 0;
    s.tpage = GetTPage(0, 1, (s16)w->unk38 & 0xFFC0, (s16)w->unk3A & 0xFF00);
    s.cx = w->unk3C;
    s.cy = w->unk3E;
    s.r = s.g = s.b = 0x80;
    for (i = 0; i < w->unk2E; i++) {
        m = (w->unk16 + i) % (w->unk2E + 1);
        s.x = w->unk30;
        s.y = i != 0 ? w->unk32 + i * 12 - k + i * 2 : w->unk32;
        s.h = i != 0 ? 12 : 12 - k;
        s.u = 0;
        s.v = i != 0 ? m * 12 + w->unk3A : m * 12 + w->unk3A + k;
        s.w = w->unk34;
        GsSortFastSprite(&s, ot, w->unk1A);
    }
    if (k != 0) {
        m = (w->unk16 + i) % (w->unk2E + 1);
        s.x = w->unk30;
        s.y = w->unk32 + i * 12 - k + i * 2;
        s.h = k - 2;
        s.u = 0;
        s.v = m * 12 + w->unk3A;
        if (w->unk34 >= 0xFD) {
            s.w = 0x100;
            GsSortFastSprite(&s, ot, w->unk1A);
            s.x = w->unk30 + s.w;
            s.w = 0x20;
            s.u = m << 5;
            s.v = (w->unk2E + 1) * 12 + w->unk3A;
            GsSortFastSprite(&s, ot, w->unk1A);
        } else {
            s.w = w->unk34;
            GsSortFastSprite(&s, ot, w->unk1A);
        }
    }
}

/* one text row cleared */
void func_801395D4(Win *w) {
    RECT r;
    r.x = w->unk38;
    r.y = w->unk3A + w->unk12 * 12;
    r.w = 0x38;
    r.h = 0xC;
    ClearImage(&r, 0, 0, 0);
}

/* the whole text area cleared */
void func_80139634(Win *w) {
    RECT r;
    r.x = w->unk38;
    r.y = w->unk3A;
    r.w = 0x38;
    r.h = 0x30;
    ClearImage(&r, 0, 0, 0);
}

void func_80139680(Win *w, GsOT *ot) {
    GsSPRITE s;
    s32 n = w->unk12 - w->unk16;
    u16 c;
    s32 x;
    s16 sx;
    if (n < 0) {
        n += 4;
    }
    s.attribute = 0;
    s.tpage = GetTPage(0, 1, 0x1C0, 0x100);
    s.cx = w->unk3C;
    s.cy = w->unk3E;
    s.r = s.g = s.b = 0x80;
    c = w->unk14;
    x = w->unk30;
    if (c < 0x24) {
        sx = c * 6 + x;
    } else {
        sx = x + 0xD2;
    }
    s.x = sx;
    s.y = w->unk32 + n * 12;
    if (n != 0) {
        s.y += n * 2;
    }
    s.h = s.w = 12;
    s.u = 0xF0;
    s.v = 0;
    GsSortFastSprite(&s, ot, w->unk1A);
}

void func_80139788(void) {
    CancelStreamLoad();
    D_8012752C = 0;
}

/* the window's portrait */
void func_801397B0(Win *w) {
    GsSPRITE s;
    u8 pad[8]; /* MATCH-TRICK: frame 0x48, nothing stored */
    s32 k = w->unk20 - 1;
    Pos16 *e = &D_8018DB54[k];
    UPos16 *c;
    s32 x, y;
    s32 t;
    s16 sc;
    s.attribute = 0;
    x = e->x;
    y = e->y;
    t = ((0 & 3) << 7) | ((1 & 3) << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    do { c = &D_8018DB98[k]; } while (0); /* MATCH-TRICK: loop-depth weight puts k's quantity above y in local-alloc (k in a0, y in a1) */
    s.tpage = t;
    s.cx = c->x;
    s.cy = c->y;
    s.r = s.g = s.b = 0x80;
    s.y = w->unk32;
    s.w = 0x20;
    s.h = 0x28;
    x = (e->x & 0x3F) << 2;
    s.u = x;
    s.v = e->y;
    if (w->unk22 & 8) {
        s.x = w->unk30 + w->unk34 + 0x28;
        sc = -w->unk28;
    } else {
        s.x = w->unk30 - 0x28;
        sc = w->unk28;
    }
    s.scalex = sc;
    s.scaley = w->unk2A;
    s.mx = s.my = 0;
    s.rotate = 0;
    GsSortSprite(&s, &D_800A6518[D_800B9A02], w->unk1A);
}

/* a window closed */
inline void func_80139914(Win *w) {
    w->state = 0;
    w->id = 0;
    if (w->unk18 != 0 && w->unk40 != NULL) {
        func_8013A8B0(w->unk40);
    }
}

void func_80139954(void) {
    func_80139914(D_801269F0);
}

/* the first free window after window 0 */
Win *func_801399A8(void) {
    s32 i;
    for (i = 1; i < 3; i++) {
        if (D_801269F0[i].id == 0) {
            return &D_801269F0[i];
        }
    }
    return NULL;
}

/* a window's answer: -1 when closed or closing, the choice once made (state 0xD), else 0 */
s32 func_801399F0(Win *w) {
    if (w->id == 0 || w->state == 0 || w->state == 0xE) {
        return -1;
    }
    if (w->state == 0xD) {
        return w->unk1F;
    }
    return 0;
}

void func_80139A34(s32 v) {
    *(s32 *)D_80127520 = v;
}

void func_80139A44(s32 v, u16 i) {
    if (i < 4) {
        D_80127530[i] = v;
    }
}

void func_80139A68(s16 v, u16 i) {
    if (i < 4) {
        D_80127540[i] = v;
    }
}

/* the confirm button: the window's text finished (0x20), or skipped to its end */
void func_80139A8C(Win *w) {
    s32 f;
    if (!(w->flags & 0x2021) && (s16)TestPadDirWideAny(0, 0x20) != 0) {
        f = w->flags | 0x20;
        w->flags = f;
        if (f & 0x10000) {
            w->flags = (f & ~0x10000) | 0x20000;
            CancelStreamLoad();
            D_8012752C = 0;
        }
    }
}

/* the cancel button */
void func_80139B18(Win *w) {
    s32 f;
    Cursor *p;
    if (!(w->flags & 0x6000) && (s16)TestPadDirWideAny(0, 0x10) != 0) {
        f = w->flags;
        if (f & 0x10000) {
            w->flags = f & ~0x10000;
            CancelStreamLoad();
            D_8012752C = 0;
        }
        if (w->flags & 0x2000) {
            w->state = 0xD;
            return;
        }
        w->state = 0xC;
        p = w->unk40;
        w->flags &= ~0x1000;
        if (p != NULL && w->unk18 != 0) {
            p->state = 3;
        }
    }
}

void func_80139BE0(Win *w) {
    u16 k;
    s16 c;
    s16 r;
    if (!(w->flags & 0x2000)) {
        k = w->unk22 & 0x60;
        switch (w->unk18) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            c = D_8018DAD8[k >> 5];
            r = 3;
            break;
        default:
            c = D_8018DAD8[0];
            r = 3;
            break;
        }
        w->unk2E = r;
        w->unk2C = c;
    }
    w->unk34 = w->unk2C * 6;
    w->unk36 = w->unk2E * 12 + (w->unk2E - 1) * 2;
}

/* the window's corner from its centre */
void func_80139C7C(Win *w) {
    s32 d;
    if (w->unk20 != 0) {
        if (w->unk22 & 8) {
            d = (w->unk34 + 0x28) >> 1;
        } else {
            d = ((w->unk34 + 0x28) >> 1) - 0x28;
        }
    } else {
        d = (s16)(w->unk34 >> 1);
    }
    w->unk30 = w->pos[0] - d;
    w->unk32 = w->pos[1] - (w->unk36 >> 1);
}

/* n as decimal digits without leading zeros (at least one), one byte each; the count */
u16 func_80139D04(u8 *p, u16 n) {
    u16 d = 10000;
    u16 b = 0;
    u16 k = 0;
    s32 i;
    u16 q;
    for (i = 5; i > 0; i--) {
        q = n / d;
        b = q | (b << 4);
        if (k == 0 && b != 0) {
            k = i;
        }
        if (k != 0) {
            *p++ = q;
        }
        n = n % d;
        d = d / 10;
    }
    if (k == 0) {
        *p = 0;
        k++;
    }
    return k;
}

/* the text buffer cleared (0x288 halfwords, from the top) */
void func_80139DC8(void) {
    s32 i;
    s16 *p;
    for (i = 0x287, p = &D_8012811A; i >= 0; i--) {
        *p-- = 0;
    }
}

void func_80139DEC(void) {
}

/* a timed window: closes when its count runs out or the confirm button is pressed */
void func_80139DF4(Win *w) {
    s32 f;
    if (w->unkC == 0 || --w->unkC == 0) {
        w->state = 2;
        return;
    }
    func_80139A8C(w);
    if (w->flags & 0x20) {
        w->state = 2;
        w->unkC = 0;
        if (!(w->flags & 0x20000)) {
            w->flags &= ~0x20;
        }
    }
}

void func_80139E84(Win *w) {
    s32 f;
    if (w->unkE == 0) {
        w->state = 2;
    } else {
        func_80139A8C(w);
        if (w->flags & 0x80020) {
            w->state = 2;
            w->unkE = 0;
            if (!(w->flags & 0x20000)) {
                w->flags &= ~0x20;
            }
        }
    }
    func_80139B18(w);
}

/* the front window waits for its button (0x60, or 0x70 with flag 0x4000); a sound when pressed */
void func_80139F0C(Win *w) {
    s32 f;
    s32 mask;
    if (D_80127524 != w && !(w->flags & 0x2000)) {
        w->state = 4;
        return;
    }
    mask = 0x60;
    if (w->flags & 0x4000) {
        mask = 0x70;
    }
    if (func_80138DB8(w, 0, mask) != 0) {
        f = w->flags;
        w->state = 2;
        if (!(f & 0x20000)) {
            w->flags = f & ~0x20;
        }
        func_8002D4C8(0x88D, 0);
    }
    func_80139B18(w);
}

void func_80139FBC(Win *w) {
    if (w->flags & 0x800) {
        w->flags &= ~0x800;
        w->state = 2;
    }
}

/* a yes/no window driven by func_8001B22C's answer */
void func_80139FE8(Win *w) {
    s32 r = func_8001B22C();
    if (r == 2 || r == 4) {
        goto done;
    }
    if (r == 0) {
        if (w->flags & 1) {
            CancelStreamLoad();
        } else {
            w->flags = (w->flags & ~0x10000) | 0x20020;
            func_80139788();
        }
        w->state = 2;
    } else {
        func_80139A8C(w);
        if (w->flags & 0x20) {
        done:
            w->state = 2;
        }
    }
    func_80139B18(w);
}

/* the scroll: every 12 steps of the counter the first row moves on */
void func_8013A0A4(Win *w) {
    if (w->unk1E == 0) {
        w->unk1E = 4;
    } else {
        w->unk1E += 5;
    }
    if (w->unk1E >= 12) {
        w->unk1E = 0;
        w->unk16 = (w->unk16 + 1) % (w->unk2E + 1);
        if (w->flags & 0x100) {
            w->state = 6;
        } else {
            w->state = 2;
        }
    }
    func_80139A8C(w);
    func_80139B18(w);
}

/* the window's text is out: wait for the cursor, then state 2 (or 0x10) */
void func_8013A164(Win *w) {
    Cursor *c = w->unk40;
    s32 f;
    if (c == NULL || w->unk18 == 0 || c->state == 2) {
        f = w->flags | 0x1000;
        w->flags = f;
        if ((f & 0x10000) && D_8012752C != 0) {
            if (f & 0x40000) {
                w->state = 2;
            } else {
                w->state = 0x10;
            }
        } else {
            w->state = 2;
        }
    }
}

/* the front window answered by a button (0x70) or by its 0x800 flag */
void func_8013A1E8(Win *w) {
    Win *f = D_80127524;
    if (f == w && (func_80138DB8(f, 0, 0x70) != 0 || (f->flags & 0x800))) {
        func_80138B88(f);
    }
}

/* a timed choice: answered when the count runs out or a button is pressed */
void func_8013A250(Win *w) {
    if (w->unkC != 0) {
        w->unkC--;
        func_80139A8C(w);
        if (!(w->flags & 0x80020)) {
            func_80139B18(w);
            return;
        }
    }
    func_80138B88(w);
}

/* the window closed once its cursor is (state 4); the one behind comes to the front */
void func_8013A2BC(Win *w) {
    Cursor *c = w->unk40;
    Win **f;
    if (c == NULL || w->unk18 == 0 || c->state == 4) {
        f = &D_80127524;
        if (*f == w) {
            { Win *n; *f = n = D_80127528; D_80127528 = NULL; }
            if (*f != NULL) {
                D_80127524->unk1A = 1;
                func_80138C30(*(Win * volatile *)f); /* r150: the volatile read keeps cse from reusing the value stored through f after the unk1A store; the original reloads *f here */
            }
        }
        if (w->flags & 0x8000) {
            w->state = 0xE;
        } else {
            w->state = 0xD;
        }
    }
}

void func_8013A378(void) {
}

/* the cursors' steps */
void func_8013A380(void) {
    Cursor *c;
    s32 i;
    for (c = D_8011DA80, i = 0; i < 2; i++, c++) {
        if (c != NULL) {
            switch (c->state) {
            case 2:
                func_8013A530(c);
                break;
            case 1:
                func_8013A448(c);
                break;
            case 3:
                func_8013A4C4(c);
                break;
            }
        }
    }
}

/* the cursor opening: its window's scale from 0x400 up to 0x1000 */
void func_8013A448(Cursor *c) {
    Win *w = c->owner;
    if (c->unk2 == 0) {
        w->unk28 = w->unk2A = 0x400;
        c->unk2++;
    } else {
        w->unk28 += 0x200;
        w->unk2A += 0x200;
        if (w->unk28 == 0x1000) {
            c->state = 2;
            c->unk2 = 0;
        }
    }
    func_8013A530(c);
}

/* the cursor closing */
void func_8013A4C4(Cursor *c) {
    Win *w = c->owner;
    c->unkE = 0;
    w->unk28 -= 0x400;
    w->unk2A -= 0x400;
    if (w->unk28 <= 0x400) {
        w->unk28 = w->unk2A = 0;
        c->state = 4;
        c->unk2 = 0;
        c->owner = NULL;
        return;
    }
    func_8013A530(c);
}

extern void func_8013AA24();
extern void func_80015F04();
extern void func_80015D4C();

/* r216 x11f: x is reused for c->unkE (one s16 local for both values); that raises its global-alloc priority above the unk34 load temp, so x gets a0 as in the original. */
void func_8013A530(Cursor *c) {
    Win *w = c->owner;
    u8 f;
    s16 x;
    s32 y;
    s16 sw, sh, sx, sy;
    f = w->unk22;
    if (w->unk18 != 0 && w->unk18 < 7) {
    switch (w->unk18) {
    case 2: case 3: case 4: case 5: case 6:
        x = w->unk34 + 0x10;
        y = (u16)w->unk36 + 0x10;
        if (w->unk20 != 0) {
            x = w->unk34 + 0x38;
        }
        c->unk8 = (w->unk28 * (u16)x) / 154;
        if (!(f & 8)) {
            c->unk8 = -c->unk8;
        }
        if (!(f & 0x60) || (f & 0x80)) {
            c->unk8 = -c->unk8;
        }
        c->unkA = (w->unk2A * (u16)y) / 42;
        if (f & 0x10) {
            c->unkA = -c->unkA;
        }
        x = c->unkE;
        if (x > c->unkC) {
            c->unkC += 0x400;
            if (c->unkC > c->unkE) {
                c->unkC = c->unkE;
            }
        } else if (x < c->unkC) {
            c->unkC -= 0x400;
            if (c->unkC < c->unkE) {
                c->unkC = c->unkE;
            }
        }
        func_8013AA24(w, c, c, y);
        break;
    case 1:
        *(Pt16 *)&c->unk8 = *(Pt16 *)&w->unk28;
        sw = ((w->unk34 + 0x10) * (s16)c->unk8) >> 12;
        sh = ((w->unk36 + 0x10) * (s16)c->unkA) >> 12;
        sx = w->pos[0] - ((u16)sw >> 1);
        sy = w->pos[1] - ((u16)sh >> 1);
        func_80015F04(sx, sy, sw, sh, 0xB3, 0x99, 0x4C, w->unk1A, 4);
        func_80015F04((s16)(sx + 1), (s16)(sy + 1), (s16)(sw - 2), (s16)(sh - 2), 0xE6, 0xCC, 0x73, w->unk1A, 4);
        func_80015D4C(sx, sy, sw, sh, 0xFF, 0xE6, 0x99, w->unk1A, 4);
        break;
    }
    }
}

void func_8013A860(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        func_80016714(&D_8011DA80[i], 0x10);
    }
}

void func_8013A8B0(Cursor *c) {
    c->state = 0;
    c->owner = NULL;
}

/* a free cursor (inline: func_8013A8FC has it inlined) */
inline Cursor *func_8013A8BC(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (D_8011DA80[i].state == 0) {
            return &D_8011DA80[i];
        }
    }
    return NULL;
}

/* a free window gets a cursor; the cursor search (func_8013A8BC) is inline, and the unk40 test is an && chain
   with it (no barrier there, so jump.c moves the search's found block up behind the first test's return) */
s32 func_8013A8FC(Win *w) {
    Cursor *c;
    s32 n;

    if (w->unk18 == 0) {
        return 1;
    }
    if (w->unk40 == NULL && (c = func_8013A8BC()) != NULL) {
        n = w->unk18;
        if (n < 7 && n != 0) {
            func_8013A9B4(w, c);
            return 1;
        }
    }
    return 0;
}

/* a cursor given to a window */
void func_8013A9B4(Win *w, Cursor *c) {
    c->unk2 = 0;
    c->owner = w;
    w->unk40 = c;
    c->state = 1;
    c->unkC = 0;
    c->unkE = 0;
    func_8013A9F8(c, w->unk18);
}

void func_8013A9F8(Cursor *c, u16 n) {
    s32 v;
    if (n >= 2 && n < 7) { v = n; c->unkE = (v - 2) << 10; }
}

/* the cursor drawn at its window, scaled */
void func_8013AA24(Win *w, Cursor *c) {
    MATRIX m;
    SVECTOR v[16];
    s32 z[16];
    m.m[0][0] = c->unk8;
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][1] = c->unkA;
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.t[0] = w->pos[0];
    m.t[1] = w->pos[1];
    m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    func_8013AD38((s16 *)&c->unk8, c->unkC, (Pt16 *)v, (Pair8 *)z);
    func_8013B204(w, c);
    func_8013AF20(D_800A6518[D_800AF630.frame].org + w->unk1A, w->pos, (Pt16 *)v, (Pair8 *)z);
}

/* the choice cursor's outline at a rectangle (x, y, w, h), scaled to it, drawn into buf */
s32 func_8013AB54(s32 buf, u32 *ot, s16 *r, s32 f) {
    SVECTOR v[16];
    s32 z[16];
    MATRIX m;
    s16 sc[2];
    s32 a;
    s32 b;
    s32 fl;
    a = r[2] * 12;
    sc[0] = a + 0x10;
    b = r[3] * 12 + (r[3] - 1) * 2;
    fl = f & 0x8000;
    sc[1] = b + 8;
    if (fl == 0) {
        sc[0] = a + 0x38;
        sc[1] = b + 0x10;
    }
    sc[0] = (sc[0] << 12) / 154;
    sc[1] = (sc[1] << 12) / 42;
    if (fl != 0) sc[0] = -sc[0];
    m.m[1][1] = sc[1];
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.m[0][0] = sc[0];
    m.t[0] = r[0];
    m.t[1] = r[1];
    m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    func_8013AD38(sc, 0, (Pt16 *)v, (Pair8 *)z);
    g_PrimNext = buf;
    if (f != 0) {
        /* called with three arguments (a3 passes through) */
        func_8013B274(ot, 0x80, sc);
    }
    func_8013AF20(ot, r, (Pt16 *)v, (Pair8 *)z);
    return g_PrimNext;
}

/* the cursor's outline: 30 points between two shapes at n / 0x1000, through the GTE's rotation and translation */
void func_8013AD38(s16 *scale, s16 n, Pt16 *out, Pair8 *dir) {
    SVECTOR sv;
    VECTOR v;
    Pair8 *t;
    s32 i;
    t = D_8018DC18;
    if (n < 0xC00) t = D_8018DBDC;
    for (i = 0; i < 30; i++) {
        sv.vx = D_800D45F4[i * 2] + ((D_800D466C[i * 2] - D_800D45F4[i * 2]) * n >> 12);
        sv.vy = D_800D45F4[i * 2 + 1] + ((D_800D466C[i * 2 + 1] - D_800D45F4[i * 2 + 1]) * n >> 12);
        gte_ldv0(&sv);
        gte_rtv0tr();
        gte_stlvnl(&v);
        out[i].x = v.vx;
        out[i].y = v.vy;
        if (scale[0] < 0) dir[i].x = -t[i].x; else dir[i].x = t[i].x;
        if (scale[1] < 0) dir[i].y = -t[i].y; else dir[i].y = t[i].y;
    }
    out[i] = out[0];
    if (scale[0] < 0) dir[i].x = -t->x; else dir[i].x = t->x;
    if (scale[1] < 0) dir[i].y = -t->y; else dir[i].y = t->y;
}

/* the cursor's outline drawn: 30 dark lines, 30 lines pushed out along dir, 15 white quadrangles to the centre */
void func_8013AF20(u32 *ot, s16 *pos, Pt16 *v, Pair8 *d) {
    POLY_F4 *q;
    LINE_F2 *a;
    LINE_F2 *b;
    s32 i;
    q = (POLY_F4 *)AllocPrim(0x168);
    a = (LINE_F2 *)AllocPrim(0x1E0);
    b = (LINE_F2 *)AllocPrim(0x1E0);
    for (i = 0; i < 30; i++, a++) {
        setlen(a, 3);
        a->code = 0x40;
        a->r0 = 0x3D;
        a->g0 = 0x3D;
        a->b0 = 0x3D;
        a->x0 = v[i].x;
        a->y0 = v[i].y;
        a->x1 = v[i + 1].x;
        a->y1 = v[i + 1].y;
        addPrim(ot, a);
    }
    for (i = 0; i < 30; i++, b++) {
        setlen(b, 3);
        b->code = 0x40;
        b->r0 = 0x92;
        b->g0 = 0x92;
        b->b0 = 0x92;
        b->x0 = v[i].x + (s8)d[i].x;
        b->y0 = v[i].y + (s8)d[i].y;
        b->x1 = v[i + 1].x + (s8)d[i + 1].x;
        b->y1 = v[i + 1].y + (s8)d[i + 1].y;
        addPrim(ot, b);
    }
    for (i = 0; i < 30; i += 2, q++) {
        setlen(q, 5);
        q->code = 0x28;
        q->r0 = 0xFF;
        q->g0 = 0xFF;
        q->b0 = 0xFF;
        q->x0 = v[i].x;
        q->y0 = v[i].y;
        q->x1 = pos[0];
        q->y1 = pos[1];
        q->x2 = v[i + 1].x;
        q->y2 = v[i + 1].y;
        q->x3 = v[i + 2].x;
        q->y3 = v[i + 2].y;
        addPrim(ot, q);
    }
}

void func_8013B204(Win *arg0, Cursor *arg1) {
    if ((AF(arg1, s16, 0xC) == 0) && (AF(arg1, s16, 0) == 2)) {
        func_8013B274((*(s32 *)((u8 *)D_800A651C + ((D_800B9A02 * 0x14)) * 1)) + (AF(arg0, u16, 0x1A) * 4), (s32) AF(arg0, s16, 0x1C), (u8 *)arg1 + 8);
    }
}

/* the cursor's arrow: a 16 x 16 sprite quadrangle at n / scale along x, held inside one of three bands */
void func_8013B274(u32 *ot, s16 n, s16 *scale) {
    SVECTOR sv;
    VECTOR v;
    VECTOR w;
    MATRIX m;                   /* unused: the original's frame has these 0x20 bytes (0x68) */
    POLY_FT4 *p;
    s32 q;
    s16 x;
    s16 lim;
    s32 e;
    p = (POLY_FT4 *)AllocPrim(0x28);
    setlen(p, 9);
    p->code = 0x2C;
    p->r0 = 0x80;
    p->g0 = 0x80;
    p->b0 = 0x80;
    p->tpage = 0x37;
    p->clut = 0x6FD6;
    p->u0 = 0xE0;
    p->v0 = 0;
    p->u1 = 0xEF;
    p->v1 = 0;
    p->u2 = 0xE0;
    p->v2 = 0xF;
    p->u3 = 0xEF;
    p->v3 = 0xF;
    if (n == 0) {
        sv.vx = 0;
    } else {
        x = (n << 12) / scale[0];
        q = x;
        if (D_8018DC54[1] < q && q < D_8018DC54[4]) {
            lim = e = D_8018DC54[2];
            if (q < lim) goto clamp;
            lim = e = D_8018DC54[3];
            if (lim < q) goto clamp;
            sv.vx = x;
        } else if (q <= D_8018DC54[1]) {
            lim = e = D_8018DC54[0];
            if (q < lim) goto clamp;
            sv.vx = x;
        } else {
            lim = e = D_8018DC54[5];
            if (lim < q) {
            clamp:
                sv.vx = lim;
            } else {
                sv.vx = x;
            }
        }
    }
    sv.vy = D_800D45F4[1];
    gte_ldv0(&sv);
    gte_rtv0tr();
    gte_stlvnl(&v);
    if (scale[1] > 0) v.vy -= 1;
    else v.vy += 2;
    sv.vx = 9;
    sv.vy = 9;
    gte_ldv0(&sv);
    gte_rtv0();
    gte_stlvnl(&w);
    p->x0 = v.vx;
    p->y0 = v.vy;
    p->x1 = v.vx + w.vx;
    p->y1 = v.vy;
    p->x2 = v.vx;
    p->y2 = v.vy + w.vy;
    p->x3 = v.vx + w.vx;
    p->y3 = v.vy + w.vy;
    addPrim(ot, p);
}
