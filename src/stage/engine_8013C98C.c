/*
 * Stage engine, 0x8013C98C-0x80144B9C (-O2): the rumble sequence (D_801ED428), the stage-mode steps (StageMode at
 * D_80115110) and the GTE distance helpers onward. A source file of its own: -O0 files lie on both sides of it
 * (engine_8013B568.c, engine_80144B9C.c; docs/stage_engine.md, "Source files").
 */
#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern s32 func_80029178(s32 n);
extern void func_8002D4C8(s32 a, s32 b);
StageActor *func_80143B6C(StageActor *a, s32 n);
void func_80143CD4(StageActor *a);
extern void func_80019064(u8 *p);
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
Win *func_801376E8(s32 id, u16 *pos);
extern void func_80016714(void *p, s32 n);
extern s32 func_80019198(void);
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
void func_8013D9B0();
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
StageActor *func_8012C724(SpawnDef *d, StageActor *a);
StageActor *func_8012C750(SpawnDef *d);
StageActor *func_8013E410(void);
s32 func_8013E448(SpawnDef *d);
extern SpawnDef *D_801274C8;    /* the stage's spawn lists, ended by kind 0 */
extern SpawnDef *D_801274CC;
extern void (*D_8011DB24)(void);   /* the stage's frame step */
extern void func_800D24A0(s32 n);
extern s32 func_800D0EC4(void);
extern void func_80029444(void);
extern void func_800190AC(void);
void func_801754A8(void);
void func_80141C04(void);
extern u16 func_80015018(s32 n);
extern u16 func_80014ED4(s32 n);
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
    /* 0x0C */ s16 padHeld;         /* pad 0: func_80015018 */
    /* 0x0E */ s16 padPressed;      /* func_80014ED4 */
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
s16 func_8013F350(void);
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

/* defined in engine_8012F5F4.c */
Win *func_801376E8(s32 id, u16 *pos);
void func_80137B80(void);
void func_80139954(void);

void func_8013C98C(void) {
    func_80016714(&D_801ED428, 8);
    D_801269D4 = 0;
    D_801269C8 = 0;
}

/* a sequence started */
void func_8013C9C4(s8 *seq) {
    D_801ED428 = seq;
    D_801ED42C = 0;
    D_801ED42D = 0;
    if (func_80019198() == 0) {
        func_80019064(D_80062BC0);
    }
}

extern s32 func_8012C658();
extern void func_8012C218();
extern u8 func_80144B14;

extern u16 D_80115112;
extern void (*D_8018E900[])();
extern u16 D_800B9A02;
extern u8 D_800B9A16;
extern u16 D_80115114;
extern u16 D_8011511C;
extern u16 D_8011511E;
extern s32 func_80015144();
extern u8 D_80112C04;
extern u8 D_80112C50;
extern u8 D_80112C9C;
extern u8 D_80112CE8;
extern u8 D_80112D38;
extern u8 D_80112D78;
extern u8 D_80112DBC;
extern u8 D_80112DF4;
extern u8 D_80112E14;
extern u8 D_80112E40;
extern u8 D_80112E6C;
extern u8 D_80112EBC;
extern u8 D_80112F0C;
extern u8 D_80112F48;
extern u8 D_80112F9C;
extern u8 D_80112FDC;
extern u8 D_8011302C;
extern u8 D_80113074;
extern u8 D_801130B8;
extern u8 D_801130E8;
extern u8 D_80113138;
extern u8 D_8011317C;
extern u8 D_801131A8;
extern u8 D_801131E8;
extern u8 D_80113214;
extern u8 D_80113254;
extern u8 D_80113278;
extern u8 D_801132B8;
extern u8 D_801132E4;
extern u8 D_80113324;
extern u8 D_80113360;
extern u8 D_801133A4;
extern u8 D_801133F4;
extern u8 D_80113440;
extern u8 D_80113474;
extern u8 D_801134B0;
extern u8 D_801134FC;
extern u8 D_80113530;
extern u8 D_80113554;
extern u8 D_801135A8;
extern u8 D_80113600;
extern u8 D_80113650;
extern u8 D_80113694;
extern u8 D_801136DC;
extern u8 D_80113724;
extern u8 D_80113744;
extern u8 D_80113770;
extern u8 D_80113794;
extern u8 D_801137D8;
extern u8 D_8011381C;
extern u8 D_8011383C;
extern u8 D_8011386C;
extern u8 D_801138A4;
extern u8 D_801138D0;
extern u8 D_80113900;
extern u8 D_80113944;
extern u8 D_80113964;
extern u8 D_8011399C;
extern u8 D_801139E8;
extern u8 D_80113A28;
extern u8 D_80113A50;
extern u8 D_80113A84;
extern u8 D_80113AB0;
extern u8 D_80113AE0;
extern u8 D_80113B34;
extern u8 D_80113B68;
extern u8 D_80113BA4;
extern u8 D_80113BC0;
extern u8 D_80113BF0;
extern u8 D_80113C20;
extern u8 D_80113C3C;
extern u8 D_80113C7C;
extern s32 func_800291B4();
extern void (*D_8018E940[])();
extern s16 D_801270C0;
extern void (*D_8018E954[])();
extern void (*D_8018E970[])();
extern void (*D_8018EB40[])();
extern void (*D_8018EBF8[])();
extern void (*D_8018EC08[])();
extern void func_80142A80();
extern void func_80142C84();
s32 func_80143994(s32 arg0, s32 arg1);
extern void func_80143458();
extern void func_8012931C();
extern s32 func_80128ED8();
extern void func_801292C8();
extern void func_8014358C();
extern void (*D_8018EE30[])();
extern void (*D_8018EE3C[])();
extern void (*D_8018EE44[])();
extern void (*D_8018EE8C[])();
extern void (*D_8018EEA0[])();
extern void (*D_8018EEA8[])();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern s32 func_8012C194();
extern void func_8012CAE4();
extern void func_8001CC3C();
extern void func_80128EA8();
extern void func_8012B200();
extern void func_8012AD80();
extern void (*D_8018EEB0[])();
extern void (*D_8018EEB8[])();
extern s32 func_8012C1B8();
extern void func_8001C214();

void func_801439C0(s32 arg0);
extern void func_8012C098();

extern u8 D_8018E948;
extern void func_8001CA1C();
s32 func_80142B2C(s32 arg0);

extern u8 D_8018E964;
extern s32 D_8018EB30[];
extern u8 D_8018EB50;
extern u8 D_8018EBB0;

extern void func_8001903C();

extern u16 D_80115116;
extern void (*D_8018E90C[])();

extern s32 func_8012913C();

extern s32 func_80134510();
extern s16 D_801152A8;
extern s16 D_801152AA;
extern s16 D_801152AC;

extern s16 D_80115128;
extern u16 D_80115172;
extern u16 D_8018E36A;
extern u16 D_8018E36E;
extern u16 D_8018E372;
extern u16 D_8018E376;
extern s32 func_8002A1B4();
extern s32 func_8002A28C();
extern s32 func_8002A27C();
s32 func_801412A8(s32 p, s16 a, s16 b, s16 c, s16 y, s16 v);
extern s32 func_8002A400();
extern s32 func_8002A4D8();
extern s32 func_8002A4C8();
extern s32 func_8002A8E0();
extern s32 func_8002A9B8();
extern s32 func_8002A9A8();
extern s32 func_8002A670();
extern s32 func_8002A748();
extern s32 func_8002A738();

extern u8 D_801EF2E8[];
extern u8 D_801EF398[];

void func_8013CA14(void) {
    s8 **q = &D_801ED428;
    s8 *e;
    u8 n;
    if (*q != NULL) {
        if (D_801ED42D == 0) {
            e = (s8 *)(D_801ED42C * 2 + (s32)D_801ED428);
            D_801269C8 = D_801269D4 = e[0];
            n = e[1];
            D_801ED42C++;
            D_801ED42D = n;
            if (n == 0) {
                D_801269C8 = D_801269D4 = 0;
                D_801ED42C = 0;
                *q = NULL;
            }
        } else {
            D_801ED42D--;
        }
    }
}

void func_8013CABC(void) {
    D_801ED44C = 1;
    D_801ED440 = 1;
    D_801ED444 = 0;
    D_801ED450 = 1;
}

void func_8013CAE8(void) {
    D_801ED440 = 1;
    D_801ED44C = 0;
    D_801ED444 = 0;
    D_801ED448 = -1;
    D_801ED450 = 0;
}

/* two flags saved and set */
void func_8013CB20(void) {
    s32 a = D_801ED450;
    s32 b = D_801ED44C;
    D_801ED450 = 1;
    D_801ED44C = 0;
    D_801ED478 = a;
    D_801ED47C = b;
}

/* and restored */
void func_8013CB5C(void) {
    D_801ED450 = D_801ED478;
    D_801ED44C = D_801ED47C;
}

extern u16 D_8011511A;
s32 func_8014032C(s16 a, s16 b);
s32 func_8014168C(s16 n);

extern s32 D_801ED45C;

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013CB84);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013CF68);

/* a timer: state 1 counts to 0x23B, state 2 waits out D_801ED440 (the empty case 3 balances the compare tree to
   test 2 first, as the original does) */
void func_8013D064(void) {
    s32 s = D_801ED458;
    if (s == 0) {
        return;
    }
    switch (s) {
    case 1:
        if (++D_801ED45C >= 0x23B) {
            D_801ED440 = 1;
            D_801ED458 = 2;
        }
        break;
    case 2:
        if (--D_801ED440 == 0) {
            D_801ED440 = 2;
            func_8013D9B0(2);
            if (D_801ED44C == 0) {
                D_801ED458++;
            }
        }
        break;
    case 3:
        break;
    }
}

s32 func_8013D13C(void) {
    func_8013D9B0();
    return D_801ED44C;
}

void func_8013D164(void) {
    D_801ED458 = 1;
}

void func_8013D178(void) {
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[0];
        v = *c;
        if (v != D_801EF398[0]) {
            if (v < D_801EF398[0]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[1];
        v = *c;
        if (v != D_801EF398[1]) {
            if (v < D_801EF398[1]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[2];
        v = *c;
        if (v != D_801EF398[2]) {
            if (v < D_801EF398[2]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[3];
        v = *c;
        if (v != D_801EF398[3]) {
            if (v < D_801EF398[3]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[4];
        v = *c;
        if (v != D_801EF398[4]) {
            if (v < D_801EF398[4]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[5];
        v = *c;
        if (v != D_801EF398[5]) {
            if (v < D_801EF398[5]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[6];
        v = *c;
        if (v != D_801EF398[6]) {
            if (v < D_801EF398[6]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[7];
        v = *c;
        if (v != D_801EF398[7]) {
            if (v < D_801EF398[7]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
    {
        u8 *c;
        u8 v;

        c = &D_801EF2E8[8];
        v = *c;
        if (v != D_801EF398[8]) {
            if (v < D_801EF398[8]) {
                *c = v + 8;
            } else {
                *c = v - 8;
            }
        }
    }
}

/* three values stepped one towards their targets */
void func_8013D330(void) {
    if (D_801EF3F2 != D_801EF466) {
        D_801EF3F2 = D_801EF3F2 < D_801EF466 ? D_801EF3F2 + 1 : D_801EF3F2 - 1;
    }
    if (D_801EF2F2 != D_801EF3BC) {
        D_801EF2F2 = D_801EF2F2 < D_801EF3BC ? D_801EF2F2 + 1 : D_801EF2F2 - 1;
    }
    if (D_801EF2C8 != D_801EF2F1) {
        D_801EF2C8 = D_801EF2C8 < D_801EF2F1 ? D_801EF2C8 + 1 : D_801EF2C8 - 1;
    }
    D_801EF3C0 = 1;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013D3D4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013D53C);

/* the list's images of kind 9 uploaded */
void func_8013D8FC(void) {
    ImgRec *p = D_801ED43C;
    RECT r;
    s32 w;
    u16 *d;
    if (p != NULL) {
        for (; p->kind != 0xFF; p++) {
            if (p->kind == 9) {
                w = p->r.w;
                d = p->data;
                r.x = p->r.x;
                r.y = p->r.y;
                r.w = p->r.w;
                r.h = p->r.h;
                LoadImage(&r, (u32 *)(d + w));
            }
        }
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013D9B0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013DBE4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013DD68);

s32 func_8013E054(void) {
    return D_801ED454;
}

/* the distance between two 16.16 positions (whole parts) */
s32 func_8013E064(Fixed *a, Fixed *b) {
    VECTOR d;
    VECTOR s;
    d.vx = a[0].h.i - b[0].h.i;
    d.vy = a[1].h.i - b[1].h.i;
    d.vz = a[2].h.i - b[2].h.i;
    gte_ldlvl(&d);
    gte_sqr12();
    gte_stlvnl(&s);
    return SquareRoot12(s.vx + s.vy + s.vz);
}

/* from a 16.16 position to a point */
s32 func_8013E0FC(Fixed *a, SVECTOR *b) {
    VECTOR d;
    VECTOR s;
    d.vx = a[0].h.i - b->vx;
    d.vy = a[1].h.i - b->vy;
    d.vz = a[2].h.i - b->vz;
    gte_ldlvl(&d);
    gte_sqr12();
    gte_stlvnl(&s);
    return SquareRoot12(s.vx + s.vy + s.vz);
}

/* between two points */
s32 func_8013E194(SVECTOR *a, SVECTOR *b) {
    VECTOR d;
    VECTOR s;
    d.vx = a->vx - b->vx;
    d.vy = a->vy - b->vy;
    d.vz = a->vz - b->vz;
    gte_ldlvl(&d);
    gte_sqr12();
    gte_stlvnl(&s);
    return SquareRoot12(s.vx + s.vy + s.vz);
}

/* the squared distance from a 16.16 position to a point */
s32 func_8013E22C(Fixed *a, SVECTOR *b) {
    VECTOR d;
    VECTOR s;
    d.vx = a[0].h.i - b->vx;
    d.vy = a[1].h.i - b->vy;
    d.vz = a[2].h.i - b->vz;
    Square12(&d, &s);
    return s.vx + s.vy + s.vz;
}

/* 1 when the point's z lies 0x2C1 to 0x2FF from D_80126CB0 */
s32 func_8013E298(SVECTOR *v) {
    s32 d;
    if ((d = v->vz - D_80126CB0) < 0) {
        d = -d;
    }
    return d >= 0x2C1 && d < 0x300;
}

/* Musashi's focus 0x300 to 0x340 from the point (squared) */
s32 func_8013E2C4(SVECTOR *p) {
    s32 v[3];
    s32 r[3];
    v[0] = D_80126B58.focus[0] - p->vx;
    v[1] = D_80126B58.focus[1] - p->vy;
    v[2] = D_80126B58.focus[2] - p->vz;
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(r);
    return r[0] + r[1] + r[2] > 0x90000 && r[0] + r[1] + r[2] < 0xA9000;
}

/* the spawn list's free definitions in range get their actors */
void func_8013E370(void) {
    SpawnDef *d = D_801274CC;
    StageActor *a;
    if (d != NULL) {
        for (; (u16)d->kind != 0; d++) {
            if (!(d->flags & 0x8000)) {
                a = func_8013E410();
                if (a == NULL) {
                    return;
                }
                if (func_8013E448(d) != 0) {
                    func_8012C724(d, a);
                }
            }
        }
    }
}

/* a free actor */
StageActor *func_8013E410(void) {
    StageActor *a;
    s32 i;
    for (a = D_801202A0, i = 0; i < 0x60; i++, a++) {
        if (a->state == 0) {
            return a;
        }
    }
    return NULL;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013E448);

/* the fixed list spawned, and the range list's definitions all marked free */
void func_8013E4B4(void) {
    SpawnDef *d = D_801274C8;
    if (d != NULL) {
        for (; (u16)d->kind != 0; d++) {
            func_8012C750(d);
        }
    }
    d = D_801274CC;
    if (d != NULL) {
        for (; (u16)d->kind != 0; d++) {
            d->flags &= 0x7FFF;
        }
    }
}

void func_8013E558(void) {
    func_800D24A0(2);
    D_8011DB24 = func_80141788;
}

void func_8013E588(void) {
    if (func_800D0EC4() == 0) {
        D_800AF630.unkA3E5 = 1;
        D_800AF630.unkA3E3 = 2;
        D_80115110.unk0 = 1;
        D_80115110.mode = 0;
        D_8011DB24 = func_80141874;
    }
}

/* the stage's frame: pads read, then the mode's step */
void func_8013E5E8(void) {
    func_80029444();
    func_801754A8();
    D_80115110.padPressed = func_80014ED4(0);
    D_80115110.padHeld = func_80015018(0);
    D_8018E8C0[D_80115110.mode]();
    func_800190AC();
    func_80141C04();
    D_80115110.frames++;
}

void func_8013E67C(void) {
    func_800D24A0(0);
    D_8011DB24 = func_8013E5E8;
}

/* the stage mode's opening: the message tables cleared, and with the right cards and maps the five gauges start at
   three quarters (mode + 1); otherwise mode 6 with item 7 */
void func_8013E6AC(void) {
    s16 i;
    s32 v;
    StageMode *m;
    func_8013E83C();
    D_80115110.unkA = 0;
    D_80115110.unk14 = D_80078EC0;
    for (i = 0; i < 8; i++) {
        D_80115148[i].v = 0;
        D_80115140[i].v = 0;
    }
    if (func_80029504() >= 5 && D_800B9A08 != 0x302A && D_800B9A08 != 0x3073) {
        for (i = 0, m = &D_80115110; i < 5; i++) {
            m->unk58[i] = v = D_8018E8AC[i] * 3 >> 2;
            D_80115188[i].v = v;
        }
        D_8018E884[0] = 2;
        D_8018E884[1] = 1;
        D_80115110.mode++;
    } else {
        func_8013E83C();
        D_80115110.unkA = 7;
        D_8018E884[1] = 0;
        D_8018E884[0] = 0;
        D_80115110.mode = 6;
    }
}

void func_8013E814(void) {
    func_800D24A0(0);
    func_8013E6AC();
}

void func_8013E83C(void) {
    D_80115110.fade = 0;
    D_80115110.unk20 = 0;
    if (D_80115110.unkA >= 4) {
        D_80115110.unkA -= 3;
    }
    D_80115110.unk48[0] = 0x106;
    if (!(func_80029178(0x1C) & 0xFF)) {
        D_801ED488 = D_8018E524;
        D_801ED48C = D_8018E5B0;
    } else {
        D_801ED488 = D_8018E53C;
        D_801ED48C = D_8018E5B8;
    }
    D_80115110.unk48[1] = 0x104;
    D_80115110.unk48[2] = 0x104;
    D_80115110.unk48[3] = 0x129;
    D_80115110.unk48[5] = 0x103;
    D_80115110.unk48[7] = 0x105;
    D_80115110.unk18 = 0;
    D_80115110.unk1E = 0;
    if (D_80115110.unk0 == 3) {
        func_8002D4C8(0x46E, 0);
    } else {
        func_80141C0C(0);
    }
}

/* the stage mode's item check: the held item (D_80078EC0) taken when it changed and usable; the gauges from D_8018E8AC */
void func_8013E958(void) {
    s16 *p;
    s16 i;
    s32 v;
    StageMode *m;

    D_800B9A15 = 0;
    func_80139954();
    p = &D_80115110.unk14;
    if (D_80078EC0 != *p) {
        func_8014AA28();
        if (D_80078EC0 & 0x7F) {
            *p = D_80078EC0 & 0x7F;
            if (*p == 0 || func_800D0488(*p) == 0) goto loop;
        }
    }
    *p = 0;
loop:
    for (i = 0, m = &D_80115110; i < 5; i++) {
        m->unk58[i] = v = D_8018E8AC[i] >> 6;
        D_80115188[i].v = v;
    }
    func_80141C0C(7);
    D_80115110.mode = 4;
}

void func_8013EA54(void) {
    SVECTOR unused;
    if (func_80141C50() == 0) {
        D_801151D0 = D_801151C8[D_800AF630.frame];
        func_8013F244();
        func_8013FAF8(0, 5);
        func_80137B80();
        if (D_80115110.padPressed & 0x40) {
            if (D_80115110.unkA == 0 && D_800B9A08 == 0x308F) {
                func_8002D4C8(0x466, 0);
            } else {
                if (D_80115110.unkA != 4) D_80115110.unk20 = 0;
                if (D_80115110.unkA == 1 || D_80115110.unkA == 2) D_80115110.unk3C = 0;
                func_8002D4C8(0x45D, 0);
                D_80115110.mode++;
            }
        } else if (D_80115110.padPressed & 0x810) {
            func_8013E958();
        }
    }
}

void func_8013EB7C(void) {
    s16 r;
    s32 w;
    u16 k;
    SVECTOR unused;
    if (func_80141C50() == 0) {
        D_801151D0 = D_801151C8[D_800AF630.frame];
        r = func_8013F350();
        k = D_80115110.unkA;
        if (k >= 4) {
            func_8013FAF8((s16)k, (s16)(k + 1));
        }
        func_8013FAF8(0, 5);
        if (D_8011511A == 5) {
            w = func_8014032C(2, func_8014168C(2));
        } else {
            w = func_8014032C((s16)D_8011511A, func_8014168C(D_8011511A));
        }
        if (w != 0 && w != D_80115110.unk20) {
            D_80115110.unk20 = w;
            func_80139954();
            func_801376E8(w, D_8018E888);
        }
        func_80137B80();
        if ((D_80115110.padPressed & 0x10) && D_80115110.unkA < 5 && r == 0) {
            D_80115110.unk18 = 0;
            func_8002D4C8(0x466, 0);
            if (D_80115110.unkA != 4) {
                func_801376E8(func_80141CA4(), D_8018E888);
            }
            D_80115110.mode--;
        } else if ((D_80115110.padPressed & 0x800) || D_80115110.unk1A[0] != 0) {
            func_8013E958();
        }
    }
}

void func_8013ED6C(void) {
    SVECTOR unused;
    if (func_80141C50() == 0) {
        D_801151D0 = D_801151C8[D_800AF630.frame];
        func_8013F350();
        func_8013FAF8(7, 8);
        if (D_80115110.unkA != 7 || (D_80115110.padPressed & 0x810)) {
            func_8013E958();
            D_80115110.mode = 4;
        }
    }
}

void func_8013EE10(void) {
    s16 i;
    s32 v;
    SVECTOR unused;
    StageMode *m;
    D_801151D0 = D_801151C8[D_800AF630.frame];
    func_8013FAF8(0, 5);
    for (i = 0; i < 5; i++) {
        v = D_80115168[i].v * 3 >> 2;
        D_80115188[i].v = v;
        D_80115168[i].v -= v;
    }
    if (D_8018E884[1] < 3) D_8018E884[1]++;
    D_8018E884[0] += 2;
    if (D_80115110.fade++ >= 5) {
        func_801376E8(func_80141CA4(), D_8018E888);
        for (i = 0, m = &D_80115110; i < 5; i++) {
            m->unk78[i] = 0;
            D_80115168[i].v = 0;
        }
        D_80115110.mode++;
    }
}

void func_8013EF88(void) {
    s16 i;
    s32 v;
    s32 r;
    if (D_80115110.fade != 0 && --D_80115110.fade != 0) {
        D_801151D0 = D_80115110.unkB8[D_800AF630.frame];
        func_8013FAF8(0, 5);
        for (i = 0; i < 5; i++) {
            v = D_80115188[i].v * 3;
            D_80115188[i].v = v;
            D_80115168[i].v += v;
        }
        if (D_80115110.fade < 3) D_8018E884[1]--;
        if ((D_8018E884[0] -= 2) < 0) D_8018E884[0] = 0;
    }
    if (D_80115110.unk14 != 0) {
        if (func_800D0488(D_80115110.unk14) == 0) return;
        D_80115110.unk14 = 0;
    }
    if (D_80115110.fade == 0) {
        if (D_80115110.unk4 == (D_800AF630.frame ^ 1)) {
            func_800D2624();
        } else {
            D_80115110.mode++;
        }
    }
}

/* the fade in; then window 0 opens with the stage's message (unless unk0 is set) */
void func_8013F138(void) {
    D_80115110.fade += 0x10;
    if (D_80115110.fade >= 0x40) {
        if (D_80115110.unk0 == 0) {
            func_801376E8(func_80141CA4(), D_8018E888);
        }
        D_80115110.mode++;
    }
}

void func_8013F1BC(void) {
    if (D_80115110.fade != 0) D_80115110.fade -= 0x10; if (D_80115110.fade == 0) {
        if (D_80115110.unk4 == (D_800AF630.frame ^ 1)) {
            func_800D2624();
        } else {
            D_80115110.mode++;
        }
    }
}

void func_8013F244(void) {
    s16 n = 0;
    if (D_80115110.unkA < 3) {
        if (D_80115110.padPressed & 0x2000) {
            n = 1;
            if (++D_80115110.unkA >= 3) D_80115110.unkA = 0;
        }
        if ((u16)D_80115110.padPressed & 0x8000) {
            if (--D_80115110.unkA >= 3) D_80115110.unkA = 2;
            n++;
        }
        if (D_80115110.padPressed & 0x5000) {
            D_80115110.unkA = 3;
            n++;
        }
    } else if (D_80115110.padPressed & 0x5000) {
        D_80115110.unkA = 0;
        n = 1;
    }
    if (n) func_80141C0C(2);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013F350);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013FAF8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8013FFD8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8014032C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80140608);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801407F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80140958);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80140D68);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80140E6C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80140F00);

s32 func_80141100(s32 p) {
    s16 y;
    u16 v;

    if (D_80115128 == 0) {
        y = D_80115172 + 0x31;
        v = D_8018E36A;
        p = func_801412A8(p, func_8002A1B4(), func_8002A28C(), func_8002A27C(), y, v);
        v = D_8018E36E;
        p = func_801412A8(p, func_8002A400(), func_8002A4D8(), func_8002A4C8(), y, v);
        v = D_8018E372;
        p = func_801412A8(p, func_8002A8E0(), func_8002A9B8(), func_8002A9A8(), y, v);
        v = D_8018E376;
        p = func_801412A8(p, func_8002A670(), func_8002A748(), func_8002A738(), y, v);
    }
    return p;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801412A8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801415C0);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8014168C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801416D4);

void func_80141788(void) {
    D_8018E900[D_80115112]();
}

void func_801417C4(void) {
    func_8001903C();
    *(s16 *)&D_80115112 += 1;
}

void func_801417F8(void) {
    if ((D_800B9A15 == 0) || (D_800B9A16 != 0)) {
        if (D_80115114 == (D_800B9A02 ^ 1)) {
            func_800D2624();
            return;
        }
        D_80115112 += 1;
    }
}

void func_80141874(void) {
    func_801754A8();
    ((SVECTOR *)&D_8011511C)->vy = func_80014ED4(0);
    ((SVECTOR *)&D_8011511C)->vx = func_80015018(0);
    D_8018E90C[D_80115112]();
    func_80141C04();
    ((SVECTOR *)&D_80115112)->vz += 1;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801418F8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80141A60);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80141B90);

void func_80141C04(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80141C0C);

s16 func_80141C50(void) {
    if ((D_8011511C == 0x90F) && (D_8011511E & 0x800)) {
        return func_80015144() != 0;
    }
    return 0;
}

s32 func_80141CA4(void) {
    s32 *var_v0;
    s32 temp_v0;

    temp_v0 = func_80029504();
    if (temp_v0 < 0xA) {
        return (s32) &D_80112C04;
    }
    if (temp_v0 < 0x14) {
        if (func_80029178(0xDF) & 0xFF) {
            return (s32) &D_80112D38;
        }
        if (func_80029178(0xE0) & 0xFF) {
            return (s32) &D_80112CE8;
        }
        var_v0 = &D_80112C50;
        if (func_80029178(0xDE) & 0xFF) {
            return (s32) &D_80112C9C;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x1E) {
        return (s32) &D_80112D78;
    }
    if (temp_v0 < 0x28) {
        return (s32) &D_80112DBC;
    }
    if (temp_v0 < 0x32) {
        return (s32) &D_80113B34;
    }
    if (temp_v0 < 0x3C) {
        var_v0 = &D_80112E14;
        if (!(func_80029178(0xE5) & 0xFF)) {
            return (s32) &D_80112DF4;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x46) {
        return (s32) &D_80112E40;
    }
    if (temp_v0 < 0x50) {
        return (s32) &D_80112E6C;
    }
    if (temp_v0 < 0x5A) {
        return (s32) &D_80112EBC;
    }
    if (temp_v0 < 0x64) {
        return (s32) &D_80112F0C;
    }
    if (temp_v0 < 0x78) {
        return (s32) &D_80112F48;
    }
    if (temp_v0 < 0x82) {
        return (s32) &D_80112F9C;
    }
    if (temp_v0 < 0x85) {
        if (func_80029178(0x9E) & 0xFF) {
            return (s32) &D_80113074;
        }
        var_v0 = &D_8011302C;
        if (!(func_80029178(0xEF) & 0xFF)) {
            return (s32) &D_80112FDC;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x87) {
        return (s32) &D_801130B8;
    }
    if (temp_v0 < 0x8C) {
        return (s32) &D_801130E8;
    }
    if (temp_v0 < 0x96) {
        return (s32) &D_80113138;
    }
    if (temp_v0 < 0xC8) {
        return (s32) &D_8011317C;
    }
    if (temp_v0 < 0xD2) {
        return (s32) &D_801131A8;
    }
    if (temp_v0 < 0xDC) {
        return (s32) &D_801131E8;
    }
    if (temp_v0 < 0xF0) {
        return (s32) &D_80113214;
    }
    if (temp_v0 < 0x104) {
        return (s32) &D_80113254;
    }
    if (temp_v0 < 0x118) {
        return (s32) &D_80113278;
    }
    if (temp_v0 < 0x136) {
        if (func_80029178(0xF9) & 0xFF) {
            return (s32) &D_801132E4;
        }
        var_v0 = &D_801132B8;
        if (func_80029178(0xFA) & 0xFF) {
            return (s32) &D_80113324;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x140) {
        return (s32) &D_80113360;
    }
    if (temp_v0 < 0x14A) {
        var_v0 = &D_801133A4;
        if (func_80029178(0xFF) & 0xFF) {
            return (s32) &D_801133F4;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x17C) {
        return (s32) &D_80113440;
    }
    if (temp_v0 < 0x186) {
        return (s32) &D_80113474;
    }
    if (temp_v0 < 0x190) {
        return (s32) &D_801134B0;
    }
    if (temp_v0 < 0x19A) {
        return (s32) &D_801134FC;
    }
    if (temp_v0 < 0x1AE) {
        return (s32) &D_80113530;
    }
    if (temp_v0 < 0x1CC) {
        return (s32) &D_80113554;
    }
    if (temp_v0 < 0x1D1) {
        return (s32) &D_801135A8;
    }
    if (temp_v0 < 0x1E0) {
        return (s32) &D_80113600;
    }
    if (temp_v0 < 0x258) {
        var_v0 = &D_80113694;
        if (!(func_80029178(0xB3) & 0xFF)) {
            return (s32) &D_80113650;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x276) {
        if (func_80029178(0x10C) & 0xFF) {
            return (s32) &D_80113744;
        }
        var_v0 = &D_801136DC;
        if (func_80029178(0x10D) & 0xFF) {
            return (s32) &D_80113770;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x280) {
        return (s32) &D_80113724;
    }
    if (temp_v0 < 0x28A) {
        return (s32) &D_80113794;
    }
    if (temp_v0 < 0x29E) {
        return (s32) &D_801137D8;
    }
    if (temp_v0 < 0x2A8) {
        return (s32) &D_8011381C;
    }
    if (temp_v0 < 0x2BC) {
        return (s32) &D_8011383C;
    }
    if (temp_v0 < 0x2C6) {
        return (s32) &D_8011386C;
    }
    if (temp_v0 < 0x2D0) {
        return (s32) &D_801138A4;
    }
    if (temp_v0 < 0x2DA) {
        return (s32) &D_801138D0;
    }
    if (temp_v0 < 0x2E4) {
        return (s32) &D_80113900;
    }
    if (temp_v0 < 0x2F8) {
        return (s32) &D_80113944;
    }
    if (temp_v0 < 0x384) {
        return (s32) &D_80113964;
    }
    if (temp_v0 < 0x3A2) {
        return (s32) &D_8011399C;
    }
    if (temp_v0 < 0x3AC) {
        var_v0 = &D_80113A28;
        if ((u32) (func_800291B4(0x3B) & 0xFF) < 0xAU) {
            return (s32) &D_801139E8;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x3B6) {
        return (s32) &D_80113A50;
    }
    if (temp_v0 < 0x3CA) {
        return (s32) &D_80113A28;
    }
    if (temp_v0 < 0x3D4) {
        return (s32) &D_80113A84;
    }
    if (temp_v0 < 0x3F2) {
        return (s32) &D_80113AB0;
    }
    if (temp_v0 < 0x44C) {
        return (s32) &D_80113AE0;
    }
    if (temp_v0 < 0x47E) {
        return (s32) &D_80113B68;
    }
    if (temp_v0 < 0x492) {
        return (s32) &D_80113BA4;
    }
    if (temp_v0 < 0x4B0) {
        return (s32) &D_80113BC0;
    }
    if (temp_v0 < 0x4BA) {
        var_v0 = &D_80113C20;
        if (!(func_80029178(0x138) & 0xFF)) {
            return (s32) &D_80113BF0;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    if (temp_v0 < 0x636) {
        var_v0 = &D_80113C3C;
        if (!(func_80029178(0x143) & 0xFF)) {
            return (s32) &D_80113C20;
        }
        /* Duplicate return node #137. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    var_v0 = &D_80113C7C;
    return (s32) var_v0;
}

void func_80142414(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C588(0x13, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x52) = arg1;
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142454);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801424E4);

void func_801425CC(u8 *arg0) {
    D_8018E940[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142608);

void func_801426D4(u8 *arg0) {
    s16 temp_v0;
    void *temp_s0;

    temp_v0 = AF(arg0, s16, 0xFC);
    temp_s0 = AF(arg0, void *, 0x20);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 0x10);
        AF(temp_s0, u16, 0x18) = (u16) (AF(temp_s0, u16, 0x18) + 0x800);
        AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) + 0x800);
        return;
    }
    AF(arg0, s32, 0x1C) = 0xC;
    func_8012AD50((s32) arg0);
    AF(temp_s0, u16, 0x1A) = 0x1800U;
    AF(temp_s0, u16, 0x18) = 0x1800U;
}

void func_80142740(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_8012AD50(arg0);
    }
}

void func_80142778(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) - 0x800);
    AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) - 0x800);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x10);
    if ((s16) AF(temp_a0, u16, 0x18) <= 0) {
        func_8012C218((s32) arg0, (s32) arg0);
    }
}

void func_801427DC(void) {
}

void func_801427E4(void) {
}

void func_801427EC(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_8018E954[AF(arg0, u16, 2)]();
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142838);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801428CC);

void func_8014292C(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_8018E970[AF(arg0, u16, 2)]();
    }
}

void func_80142978(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_8018EB40[AF(arg0, u16, 2)]();
    }
}

void func_801429C4(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_8018EBF8[AF(arg0, u16, 2)]();
    }
}

void func_80142A10(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_8018EC08[AF(arg0, u16, 2)]();
        if (AF(arg0, s16, 0xFC) != 0) {
            func_80142A80((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142A80);

s32 func_80142B2C(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x180;
    AF(arg0, s16, 0x5C) = 0x100;
    AF(arg0, s16, 0x100) = (s16) (AF(arg0, u16, 0x70) & 0x100);
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 3);
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    if (AF(arg0, s16, 0x100) == 0) {
        func_80142C84();
    }
    AF(arg0, s32, 0xCC) = func_80143994(arg0, (s32) AF(AF(arg0, void *, 0x20), s16, 0x18));
    return func_8012AD50(arg0);
}

void func_80142BB4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    if (AF(arg0, s16, 0xFC) == 1) {
        if ((arg1 != 0) || (AF(arg0, s16, 0x100) == 0)) {
            temp_a0 = AF(arg0, void *, 0x20);
            AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFEFE);
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012AD44(arg0, (s32) (s16) arg2);
        }
    } else {
        if ((arg1 != 0) || (AF(arg0, s16, 0x100) == 0)) {
            func_8012C218(arg0, arg1);
            return;
        }
        func_8012C098(arg0);
    }
}

void func_80142C7C(void) {
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142C84);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142C9C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142D38);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142DB8);

void func_80142DC4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_8018E948);
    AF(temp_v0, s16, 0x1A) = 0x1800;
    AF(temp_v0, s16, 0x18) = 0x1800;
    AF(arg0, s16, 0xFC) = 0;
    func_80142B2C(arg0);
}

void func_80142E38(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_8018E964);
    temp_v0_2 = ((AF(arg0, u16, 0x70) & 0xF) * 0x600) + 0x1200;
    AF(temp_v0, s16, 0x1A) = temp_v0_2;
    AF(temp_v0, s16, 0x18) = temp_v0_2;
    AF(arg0, s16, 0xFC) = 0;
    func_80142B2C(arg0);
}

void func_80142EC0(s32 arg0, s32 arg1) {
    s16 temp_v1;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, 0);
    temp_v1 = ((AF(arg0, u16, 0x70) & 0xF) * 0x600) + 0xC00;
    AF(temp_v0, s16, 0x1A) = temp_v1;
    AF(temp_v0, s16, 0x18) = temp_v1;
    AF(arg0, s16, 0xFC) = 0;
    SetScript(arg0, D_8018EB30[(AF(arg0, u16, 0x70) & 0xF)]);
    func_80142B2C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142F68);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80142FFC);

void func_8014305C(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_8018EB50);
    temp_v0_2 = ((AF(arg0, u16, 0x70) & 0xF) * 0x600) + 0xC00;
    AF(temp_v0, s16, 0x1A) = temp_v0_2;
    AF(temp_v0, s16, 0x18) = temp_v0_2;
    AF(arg0, s16, 0xFC) = 0;
    SetScript(arg0, (s32) &D_8018EBB0);
    func_80142B2C(arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801430F4);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80143188);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801431E8);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801432FC);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80143390);

void func_801433F0(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_80143458();
        return;
    }
    func_8012931C((s32) arg0);
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80143458);

void func_8014350C(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_8014358C();
        return;
    }
    func_8012931C((s32) arg0);
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    AF(AF(arg0, s32, 0x20), u8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8014358C);

void func_80143640(u16 *t, u16 *base, s16 *range, s32 n) {
    s32 o;

    if (!(*t & (s16)((1 << n) - 1))) {
        o = func_8012913C(0x22);
        if (o != 0) {
            AF(o, s16, 6) = base[0] + rand() % (range[0] * 2) - range[0];
            AF(o, s16, 0xA) = base[1] + rand() % (range[1] * 2) - range[1];
            AF(o, s16, 0xE) = base[2] + rand() % (range[2] * 2) - range[2];
            AF(o, s32, 0x10) = AF(o, s32, 0x14) = AF(o, s32, 0x18) = 0;
            AF(o, u16, 0x34) = base[3];
            AF(AF(o, void *, 0x20), u16, 0x2C) = 0xC008;
        }
    }
    *t += 1;
}

void func_801437D8(u16 *t, u16 *base, s16 *range, s32 n) {
    s32 o;

    if (!(*t & (s16)((1 << n) - 1))) {
        o = func_8012913C(0x23);
        if (o != 0) {
            AF(o, s16, 6) = base[0] + rand() % (range[0] * 2) - range[0];
            AF(o, s16, 0xA) = base[1] + rand() % (range[1] * 2) - range[1];
            AF(o, s16, 0xE) = base[2] + rand() % (range[2] * 2) - range[2];
            AF(o, s32, 0x10) = AF(o, s32, 0x14) = AF(o, s32, 0x18) = 0;
            AF(o, u16, 0x34) = base[3];
            AF(AF(o, void *, 0x20), u16, 0x2C) = 0xC008;
        }
    }
    *t += 1;
}

s32 func_80143970(s32 arg0) {
    return func_8012C588(0x1B, arg0);
}

s32 func_80143994(s32 arg0, s32 arg1) {
    return func_8012C658(0x1B, (s32) (s16) arg1, arg0);
}

void func_801439C0(s32 arg0) {
    if (arg0 != 0) {
        func_80016714(AF(arg0, s32, 0xCC), 0x38);
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_801439FC);

void func_80143B30(u8 *arg0) {
    D_8018EE30[AF(arg0, u16, 2)]();
}

StageActor * func_80143B6C(StageActor *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = func_8012C658(0x1C, arg1, arg0);
    if ((temp_v0 != 0) && (temp_a0 = AF(arg0, void *, 0x20), (temp_a0 != NULL))) {
        if (arg1 == 0) {
            AF(temp_v0, u16, 0xFC) = (u16) AF(temp_a0, u16, 0x12);
        }
    }
    return temp_v0;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80143BDC);

void func_80143C38(u8 *arg0) {
    D_8018EE3C[AF(arg0, u16, 2)]();
}

void func_80143C74(s32 arg0, s32 arg1) {
    func_8012C658(0x205, arg1, arg0);
}

void func_80143C98(u8 *arg0) {
    D_8018EE44[AF(arg0, u16, 2)]();
}

void func_80143CD4(StageActor *arg0) {
    func_8012C658(0x39, 0, arg0);
    func_8012C658(0x39, 1, arg0);
    return func_8012C658(0x39, 2, arg0);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80143D28);

void func_80143E68(u8 *arg0) {
    D_8018EE8C[AF(arg0, u16, 2)]();
}

void func_80143EA4(void) {
}

void func_80143EAC(void) {
}

void func_80143EB4(void) {
}

void func_80143EBC(u8 *a) {
    u8 *t = AF(a, u8 *, 0x64);
    u8 *o = AF(a, u8 *, 0xCC);
    SVECTOR v;

    if (AF(t, s16, 0x36) != AF(a, s16, 0xFC)) {
        if (a != NULL) {
            func_80016714(o, 0x38);
            func_8012C218(a);
        }
    } else {
        v.vx = AF(t, u16, 6);
        v.vy = AF(t, u16, 0xA) - 0x10;
        v.vz = AF(t, u16, 0xE);
        if (func_80134510(&v) == 0) {
            AF(o, s32, 4) |= 0x80000000;
            return;
        }
        AF(o, s16, 8) = v.vx;
        AF(o, s16, 0xA) = v.vy;
        AF(o, s16, 0xC) = v.vz;
        AF(o, s32, 4) &= 0x7FFFFFFF;
        if (AF(a, s16, 0x70) == 1) {
            AF(o, s16, 0x10) = 0x400;
            AF(o, s16, 0x12) = 0;
        } else {
            AF(o, s16, 0x10) = ratan2(D_801152AC, D_801152AA) + 0x400;
            AF(o, s16, 0x12) = ratan2(D_801152A8, D_801152AA);
        }
        AF(o, s16, 0x14) = -AF(AF(t, u8 *, 0x20), u16, 0x12);
        AF(o, s16, 0x18) = rsin((AF(AF(t, u8 *, 0x20), u16, 0x14) & 0x3FF) * 2) + 0x4000;
        AF(o, s16, 0x1A) = rsin((AF(AF(t, u8 *, 0x20), u16, 0x10) & 0x3FF) * 2) + 0x4000;
    }
}

void func_80144054(u8 *arg0) {
    D_8018EEA0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144090);

void func_801442F8(u8 *arg0) {
    s32 temp_v0;

    D_8018EEA8[AF(arg0, u16, 2)]();
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x1E) {
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144364);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144458);

void func_80144558(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, 0, 0, 0);
    AF(temp_v0, s32 *, 0x20) = &D_800D387C;
    AF(temp_v0, u8, 0x27) = 0x9C;
    AF(temp_v0, s16, 0x1A) = 0x3000;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    func_80128EA8(temp_v0, arg0 + 0xD0, (s32) &D_800D3888);
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, s16, 2) = 1;
    func_8012B200(arg0);
}

void func_8014462C(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0xCC);
    func_8012AD80((s32) arg0, arg1, arg2);
    AF(temp_s1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_s1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_s1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    if (func_80128ED8((s32) temp_s1, (s32) (arg0 + 0xD0)) != 0) {
        func_80016714((s32) temp_s1, 0x38);
        func_8012C218((s32) arg0);
    }
}

void func_801446A4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, 0, 0, 0);
    AF(temp_v0, s32 *, 0x20) = &D_800D387C;
    AF(temp_v0, u8, 0x27) = 0x9C;
    AF(temp_v0, s16, 0x1A) = 0x3000;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    func_80128EA8(temp_v0, arg0 + 0xD0, (s32) &D_800D3888);
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_8014477C);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144880);

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144988);

void func_801449C8(u8 *arg0) {
    D_8018EEB0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144A04);

void func_80144A2C(u8 *arg0) {
    D_8018EEB8[AF(arg0, u16, 2)]();
}

void func_80144A68(s16 *arg0) {
    *arg0 = 0xC6;
    func_8012AD44((s32) arg0, 0);
}

void func_80144A90(void) {
}

void func_80144A98(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
}

void func_80144AEC(u8 *arg0) {
    s32 *temp_v1;

    temp_v1 = AF(arg0, s32 *, 0xDC);
    AF(arg0, s32 *, 0xDC) = &func_80144B14;
    AF(arg0, s16, 0) = 0x83;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32 *, 0xCC) = temp_v1;
}

INCLUDE_ASM("asm/stage/nonmatchings/engine_8013C98C", func_80144B14);
