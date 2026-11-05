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
extern void StartRumbleScript(u8 *p);
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
s16 func_8013F350(void);
void func_8013FAF8(s32 a0, s32 a1);
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
    if (GetRumbleScript() == 0) {
        StartRumbleScript(D_80062BC0);
    }
}

extern s32 func_8012C658();
extern void func_8012C218();
extern s32 func_80144B14();

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

extern void ClearRumbleScript();

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

extern s32 D_801ED460;
extern s32 D_801ED468;
extern u8 D_801EF334;
extern u8 D_80078E78;
extern void func_8013CF68();
extern void func_8013DBE4();
extern void func_8013D330();
extern void func_8013D178();
struct S9 { u8 b[9]; };
extern struct S9 D_8018DE3C[];
struct S12 { s32 a; s32 b; s32 c; };
extern struct S12 D_8018DE74[];

void func_8013CB84(void) {
    s32 m = D_800B9A08;
    s32 k = (&D_80078E78)[0x37];

    D_801EF3C0 = 0;
    if (D_801ED450 == 0 && k != D_801ED448) {
        D_801ED448 = k;
        D_801EF466 = D_8018DE74[k].a;
        D_801EF3BC = D_8018DE74[k].b;
        D_801EF2F1 = D_8018DE74[k].c;
        *(struct S9 *)D_801EF398 = D_8018DE3C[k];
        D_801ED44C = 1;
        D_801ED440 = 1;
        if (D_801ED460 & 2) {
            if (k == 4) {
                AF(&D_801EF334, s32, 0) = 0x100;
                AF(&D_801EF334, s32, 0xC) = 0x80;
            }
            if (k == 0) {
                AF(&D_801EF334, s32, 0) = 0x100;
                AF(&D_801EF334, s32, 0xC) = 0;
            }
        }
    }
    if (D_801ED44C != 0) {
        if (--D_801ED440 == 0) {
            if (D_801ED450 == 0) {
                if ((D_801ED460 & 2) && k == 4) {
                    if (D_801ED468 != 0) {
                        func_8013DBE4(6);
                    } else {
                        func_8013D9B0(6);
                    }
                } else {
                    if (D_801ED468 != 0) {
                        func_8013DBE4(k);
                    } else {
                        func_8013D9B0(k);
                    }
                }
                func_8013D330();
                func_8013D178();
                func_8013CF68();
                D_801ED440 = 2;
                if (D_801ED44C != 0) {
                    if (D_801ED460 & 2) {
                        if (k == 4) {
                            if ((AF(&D_801EF334, s32, 0xC) -= 8) < 0) {
                                AF(&D_801EF334, s32, 0xC) = 0;
                            }
                        } else if (k == 0) {
                            if ((AF(&D_801EF334, s32, 0xC) += 0x20) > 0x80) {
                                AF(&D_801EF334, s32, 0xC) = 0x80;
                            }
                        }
                    }
                } else {
                    if (D_801ED460 & 2) {
                        if (k == 4) {
                            AF(&D_801EF334, s32, 0xC) = 0;
                        }
                        if (k == 0) {
                            AF(&D_801EF334, s32, 0xC) = 0x80;
                        }
                    }
                }
            } else {
                if (D_801ED468 != 0) {
                    func_8013DBE4(5);
                } else {
                    func_8013D9B0(5);
                }
                D_801ED440 = 1;
            }
        }
    }
    D_801ED454 = 0;
    if (m == 0x1010) {
        if (k == 3) {
            if (D_801ED44C != 0) {
                D_801ED454 = D_801ED444;
            } else {
                D_801ED454 = 0x1F;
            }
        } else if (k == 4) {
            if (D_801ED44C != 0) {
                D_801ED454 = 0x1F - D_801ED444;
            } else {
                D_801ED454 = 0;
            }
        }
    }
}

extern u8 D_800A5E88;
extern void func_80028620();
/* MATCH-TRICK: lights 1 and 2 are written through one byte pointer q re-pointed at each field, then passed to
   func_80028620 (the field addresses stay in registers, giving the original s0+off stores; accepted 30 Oct) */
void func_8013CF68(void) {
    u8 *q;
    AF(&D_800A5E88, u8, 0xC) = D_801EF2E8[0];
    AF(&D_800A5E88, u8, 0xD) = D_801EF2E8[1];
    AF(&D_800A5E88, u8, 0xE) = D_801EF2E8[2];
    AF(&D_800A5E88, s32, 0) = 0;
    AF(&D_800A5E88, s32, 4) = 0x1E;
    AF(&D_800A5E88, s32, 8) = 0;
    func_80028620(0, &D_800A5E88);
    q = &D_800A5E88 + 0x10; *(s32 *)q = 0;
    q = &D_800A5E88 + 0x14; *(s32 *)q = 7;
    q = &D_800A5E88 + 0x18; *(s32 *)q = 0x14;
    q = &D_800A5E88 + 0x1C; *q = D_801EF2E8[3];
    q = &D_800A5E88 + 0x1D; *q = D_801EF2E8[4];
    q = &D_800A5E88 + 0x1E; *q = D_801EF2E8[5];
    q = &D_800A5E88 + 0x10; func_80028620(1, q);
    q = &D_800A5E88 + 0x20; *(s32 *)q = 0;
    q = &D_800A5E88 + 0x24; *(s32 *)q = -0x12;
    q = &D_800A5E88 + 0x28; *(s32 *)q = 0;
    q = &D_800A5E88 + 0x2C; *q = D_801EF2E8[6];
    q = &D_800A5E88 + 0x2D; *q = D_801EF2E8[7];
    q = &D_800A5E88 + 0x2E; *q = D_801EF2E8[8];
    q = &D_800A5E88 + 0x20; func_80028620(2, q);
}

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

extern u8 D_80078E78;
extern u8 D_8018DCA4;
extern u8 D_8018DCF8;
extern u8 D_8018DD4C;
extern u8 D_8018DDA0;
extern u8 D_8018DDF4;
extern u8 D_8018DE20;
extern s32 D_801ED460;
extern s32 D_801ED464;
extern s32 D_801ED468;
extern u8 D_801EF334;
extern void func_8013D53C();
extern void func_8013DD68();
extern void func_8013CF68();
extern void func_8013D8FC();
extern s32 *D_801ED430;
extern s32 *D_801ED434;
extern s32 *D_801ED438;

void func_8013D3D4(s32 arg0, s32 arg1) {
    u8 *c = &D_80078E78;
    s32 temp_v1;

    temp_v1 = (arg1 >> 2) & 3;
    D_801ED460 = arg1;
    D_801ED464 = temp_v1;
    D_801ED468 = (arg1 >> 4) & 1;
    if (temp_v1 == 0) {
        D_801ED430 = (s32 *)&D_8018DD4C;
        D_801ED434 = (s32 *)&D_8018DDF4;
        D_801ED438 = (s32 *)&D_8018DCA4;
    } else {
        D_801ED430 = (s32 *)&D_8018DDA0;
        D_801ED434 = (s32 *)&D_8018DE20;
        D_801ED438 = (s32 *)&D_8018DCF8;
    }
    func_8013D53C();
    if (arg1 & 1) {
        if (D_801ED468 != 0) {
            func_8013DD68();
        } else {
            func_8013D8FC();
        }
        func_8013CF68();
        if (D_801ED460 & 2) {
            AF(&D_801EF334, s32, 0) = 0x140;
            AF(&D_801EF334, s32, 0xC) = 0x80;
            if (c[0x37] == 4) {
                AF(&D_801EF334, s32, 0) = 0x140;
                AF(&D_801EF334, s32, 0xC) = 0;
            }
            if (c[0x37] == 0) {
                AF(&D_801EF334, s32, 0) = 0x140;
                AF(&D_801EF334, s32, 0xC) = 0x80;
            }
        }
    }
}

extern s32 D_801ED46C;
extern s32 D_801ED470;
extern s32 D_801ED474;

/* the stage palette tables (D_8018DE74.. by D_801ED448) set up, and kind-9 images of the list arg0 tinted by the
   colour scale (PORT NOTE: the only caller, func_8013D3D4, passes no argument: arg0 is its own a0, as the original) */
void func_8013D53C(ImgRec *arg0) {
    s32 mr, mg, mb;
    u16 *src, *dst;
    s32 n, i, c, v, r, g, b;

    if (!(D_801ED460 & 1)) {
        D_801ED448 = 1;
    } else {
        D_801ED448 = (&D_80078E78)[0x37];
    }
    D_801EF466 = D_801EF3F2 = D_8018DE74[D_801ED448].a;
    D_801EF3BC = D_801EF2F2 = D_8018DE74[D_801ED448].b;
    D_801EF2F1 = D_801EF2C8 = D_8018DE74[D_801ED448].c;
    *(struct S9 *)D_801EF2E8 = D_8018DE3C[D_801ED448];
    *(struct S9 *)D_801EF398 = AF(&D_801EF2C8, struct S9, 0x20);
    D_801EF3C0 = 1;
    D_801ED45C = -1;
    D_801ED458 = 0;
    D_801ED454 = -1;
    D_801ED440 = 0;
    D_801ED44C = 0;
    D_801ED450 = 0;
    if ((D_801ED460 & 2) && D_801ED448 == 4) {
        mr = D_801ED430[0x12];
        mg = D_801ED430[0x13];
        mb = D_801ED430[0x14];
    } else {
        mr = D_801ED430[D_801ED448 * 3];
        mg = D_801ED430[D_801ED448 * 3 + 1];
        mb = D_801ED430[D_801ED448 * 3 + 2];
    }
    D_801ED43C = arg0;
    if (arg0 != NULL) {
        if (D_801ED468 != 0) {
            D_801ED46C = D_801ED438[D_801ED448 * 3];
            D_801ED470 = D_801ED438[D_801ED448 * 3 + 1];
            D_801ED474 = D_801ED438[D_801ED448 * 3 + 2];
        } else {
            for (; arg0->kind != 0xFF; arg0++) {
                if (arg0->kind == 9) {
                    n = arg0->r.w * arg0->r.h;
                    src = arg0->data;
                    dst = src + n;
                    for (i = 0; i < n; i++) {
                        c = *src;
                        r = (c & 0x1F) * mr / 2560;
                        g = (c & 0x3E0) * mg / 2560 & 0x3E0;
                        b = (c & 0x7C00) * mb / 2560 & 0x7C00;
                        v = r | g | b | (c & 0x8000);
                        if (v == 0 && c != 0) {
                            v = 0x8000;
                        }
                        *dst++ = v;
                        src++;
                    }
                }
            }
        }
    }
}

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

void func_8013D9B0(s32 a0) {
    ImgRec *p = D_801ED43C;
    RECT r;
    u32 col;
    u32 src;
    u32 out;
    u16 *dst;
    s32 any;
    s32 changed;
    s32 n;
    s32 i;
    u16 *s;
    u16 *d;
    u16 c;
    s32 cr, cg, cb;
    s32 tr, tg, tb;
    s32 v;
    if (p != NULL) {
        col = D_801ED434[a0];
        D_801ED454 = -1;
        any = 0;
        for (; p->kind != 0xFF; p++) {
            if (p->kind == 9) {
                r.x = p->r.x;
                r.y = p->r.y;
                r.w = p->r.w;
                r.h = p->r.h;
                n = p->r.w * p->r.h;
                changed = 0;
                s = p->data;
                dst = s + n;
                d = dst;
                for (i = 0; i < n; i++) {
                    src = *s;
                    c = *d;
                    cr = c & 0x1F;
                    cg = c & 0x3E0;
                    cb = c & 0x7C00;
                    gte_ldrgb_irgb(&col, &src);
                    gte_dpcl();
                    gte_storgb(&out);
                    tr = out & 0x1F;
                    tg = out & 0x3E0;
                    tb = out & 0x7C00;
                    if (cr != tr) {
                        changed = 1;
                        if (cr < tr) cr++;
                        if (tr < cr) cr--;
                    }
                    if (cg != tg) {
                        changed = 1;
                        if (cg < tg) cg += 0x20;
                        if (tg < cg) cg -= 0x20;
                    }
                    if (cb != tb) {
                        changed = 1;
                        if (cb < tb) cb += 0x400;
                        if (tb < cb) cb -= 0x400;
                    }
                    v = cr | cg | cb | (src & 0x8000);
                    if (v == 0 && src != 0) v = 0x8000;
                    *d = v;
                    d++;
                    s++;
                }
                if (changed) LoadImage(&r, (u32 *)dst);
                any |= changed;
            }
        }
        D_801ED44C = any;
    }
}

void func_8013DBE4(s32 arg0) {
    s32 *p;
    s32 x, y, z;
    s32 changed;

    if (D_801ED43C != NULL) {
        D_801ED44C = 0;
        p = (s32 *)(arg0 * 12 + (s32)D_801ED438);
        x = p[0];
        y = p[1];
        z = p[2];
        changed = 0;
        if (D_801ED46C != x) {
            changed = 1;
            if (D_801ED46C < x) {
                if (x - D_801ED46C < 5) D_801ED46C = x;
                else D_801ED46C += 4;
            } else {
                if (D_801ED46C - x < 5) D_801ED46C = x;
                else D_801ED46C -= 4;
            }
        }
        if (D_801ED470 != y) {
            changed = 1;
            if (D_801ED470 < y) {
                if (y - D_801ED470 < 5) D_801ED470 = y;
                else D_801ED470 += 4;
            } else {
                if (D_801ED470 - y < 5) D_801ED470 = y;
                else D_801ED470 -= 4;
            }
        }
        if (D_801ED474 != z) {
            changed = 1;
            if (D_801ED474 < z) {
                if (z - D_801ED474 < 5) D_801ED474 = z;
                else D_801ED474 += 4;
            } else {
                if (D_801ED474 - z < 5) D_801ED474 = z;
                else D_801ED474 -= 4;
            }
        }
        if (changed) {
            func_8013DD68();
        }
        D_801ED44C = changed;
    }
}

extern s32 g_PrimNext;
extern DRAWENV D_8018DEB0;
extern s32 D_801ED46C;
extern s32 D_801ED470;
extern s32 D_801ED474;
extern u32 D_800BA0E4[][4];
extern void SetDrawEnv(DR_ENV *dr_env, DRAWENV *env);

void func_8013DD68(void) {
    DRAWENV env;
    u8 *p;
    u16 *rec;
    s32 n;
    s32 i;
    Work *w = &D_800AF630;
    p = (u8 *)g_PrimNext;
    rec = (u16 *)D_801ED43C;
    n = *rec++;
    env = w->draw[w->dispIdx];
    env.isbg = 0;
    SetDrawEnv((DR_ENV *)p, &env);
    addPrim(D_800BA0E4[w->frame], p);
    p += 0x40;
    for (i = 0; i < n; i++) {
        p[3] = 5;
        ((u32 *)p)[1] = (rec[2] & 0x9FF) | 0xE1000400;
        p[0xB] = 0x64;
        p[8] = D_801ED46C;
        p[9] = D_801ED470;
        p[0xA] = D_801ED474;
        ((u16 *)p)[6] = rec[4];
        ((u16 *)p)[7] = rec[5];
        p[0x10] = rec[0];
        p[0x11] = rec[1];
        ((u16 *)p)[9] = 0x7800;
        ((u16 *)p)[10] = rec[6];
        ((u16 *)p)[11] = rec[7];
        addPrim(D_800BA0E4[w->frame], p);
        p += 0x18;
        rec += 8;
    }
    SetDrawEnv((DR_ENV *)p, &D_8018DEB0);
    addPrim(D_800BA0E4[w->frame], p);
    p += 0x40;
    g_PrimNext = (s32)p;
}

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

extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 func_800132BC();
extern s32 (*D_801274D0)(SpawnDef *d);  /* replaces the range test of func_8013E448 when set */

s32 func_8013E448(SpawnDef *d) {
    if (D_801274D0 == NULL) {
        s32 r = func_800132BC(D_80126B58.focus, d);
        if (D_801274D8 < r && r < D_801274DC) return 1;
        return 0;
    }
    return D_801274D0(d);
}

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
        D_800AF630.pauseMenu = 2;
        D_80115110.unk0 = 1;
        D_80115110.mode = 0;
        D_8011DB24 = func_80141874;
    }
}

/* the stage's frame: pads read, then the mode's step */
void func_8013E5E8(void) {
    func_80029444();
    func_801754A8();
    D_80115110.padPressed = GetPadPressedDirWide(0);
    D_80115110.padHeld = GetPadHeldDirWide(0);
    D_8018E8C0[D_80115110.mode]();
    StepRumbleScript();
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

extern u16 D_80115120;
extern u16 D_80115122;
extern u8 D_80115152;
extern u8 D_8018E5A8[];
extern u8 D_8018E5C0[];
extern u16 D_8018E4C4[];
extern s32 func_8014AA04(s32 arg0);
extern s32 func_801416D4();
extern void func_801415C0();
extern s32 func_80140608();
extern void func_801407F4();
extern s16 D_8011512E;

s16 func_8013F350(void) {
    u16 rep;
    u16 pad;
    s16 i;
    s32 n;
    s16 moved;
    s16 d;
    u8 *a;
    u8 *b;
    u8 c;
    u8 e;
    s32 m;
    u16 k;

    rep = D_80115110.padHeld;
    do { /* MATCH-TRICK: ends cse1's block (cse2 relates the +0x10 field to the base) */
        moved = 0;
    } while (0);
    if (rep != 0) {
        if (rep == *(u16 *)&D_80115110.unk10) {
            if (--D_80115122 == 0) {
                D_8011511E = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            *(u16 *)&D_80115110.unk10 = rep;
            D_80115122 = 6;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    for (i = 0; i < 6; i++) {
        if (!(func_80029178(D_8018E5A8[i]) & 0xFF)) break;
    }
    D_80115110.unk48[0] = i | 0x100;
    switch (D_8011511A) {
    case 0:
        n = func_8014168C(0);
        if ((func_80029178(D_8018E5A8[(s16)n]) & 0xFF) && (D_8011511E & 0x40)) {
            func_8014AA04((u8)(n + 1));
            func_8002D4C8((s16)n ? 0x461 : 0x460, 0);
        }
        break;
    case 1:
        if (D_8011511E & 0x40) {
            D_80115128 = func_8014168C(1) + 1;
            D_8011511A = 2;
            func_80141C0C(3);
            return 1;
        }
        if (D_80115128 == 4) {
            func_801407F4();
        }
        break;
    case 2:
        switch (D_80115128) {
        case 0:
        case 2:
        case 3:
            break;
        case 1:
            n = func_8014168C(2);
            if ((u16)D_80115110.padPressed & 0x40) {
                if (D_8011512E == 0) {
                    if ((func_800291B4(D_8018E5C0[(s16)n]) & 0xFF) && ((u16)D_80115110.padPressed & 0x40)) {
                        D_8011511A = 5;
                        *(u16 *)&D_80115152 = 0;
                        func_80141C0C(3);
                        return 1;
                    }
                    func_80141C0C(5);
                } else {
                    func_801415C0((s16)n, D_8011512E & 0xF);
                    D_8011512E = 0;
                    func_80141C0C(3);
                    return 1;
                }
            } else if ((u16)D_80115110.padPressed & 0x20) {
                if (D_8011512E == 0) {
                    D_8011512E = n | 0x8000;
                } else {
                    func_801415C0((s16)n, D_8011512E & 0xF);
                    D_8011512E = 0;
                }
                func_80141C0C(3);
            }
            break;
        case 4:
            if (D_8011511E & 0xA000) {
                moved = func_80140608(2);
            }
            func_801407F4();
            break;
        }
        if (D_80115128 != 0 && (D_8011511E & 0x10) && D_80115110.unk0 != 1) {
            D_8011511E &= ~0x10;
            D_8011511A = 1;
            D_8011512E = 0;
            func_80141C0C(6);
        }
        break;
    case 3:
        if (D_80115110.unk3E == 0 && (D_8011511E & 0x40)) {
            D_8011511A += 3;
            func_80141C0C(3);
            return 1;
        }
        break;
    case 4:
        break;
    case 5:
        pad = D_8011511E;
        if (pad & 0x40) {
            d = func_801416D4(D_80115152);
            if (d == 0) break;
            if (d < 0) {
                D_80115110.unk1A[0] = 1;
                break;
            }
            D_8011511A -= 3;
            func_80141C0C(4);
            return 1;
        } else if (pad & 0x10) {
            goto clear;
        }
        break;
    case 6:
        if (D_8011511E & 0x10) {
        clear:
            D_80115110.padPressed &= ~0x10;
            D_8011511A -= 3;
            func_80141C0C(6);
            return 1;
        }
        break;
    case 7:
        if (D_8011511E & 0xA000) {
            moved = func_80140608(7);
        }
        func_801407F4();
        break;
    }
    k = D_80115110.unkA;
    a = (u8 *)&D_80115110 + 0x38 + k * 2;
    b = (u8 *)&D_80115110 + 0x48 + k * 2;
    if (k != 2 && b[0] < 2) {
        return 0;
    }
    if (D_8011511E & 0x1000) {
        a[0]--;
        moved = 1;
        if (a[0] >= 0x80) {
            if (D_8011511A != 3) {
                a[0] = b[0] - 1;
            } else {
                a[0] = 0;
                moved = 0;
            }
        }
    }
    if (D_8011511E & 0x4000) {
        c = a[0];
        a[0] = c + 1;
        moved = 1;
        if (a[0] >= b[0]) {
            if (D_8011511A != 3) {
                a[0] = 0;
            } else {
                a[0] = c;
                moved = 0;
            }
        }
    }
    if (D_8011511A == 2 && D_80115128 == 1) {
        if (D_8011511E & 0x8000) {
            a[1]--;
            moved = 1;
            if (a[1] >= 0x80) {
                a[1] = b[1] - 1;
            }
        }
        if (D_8011511E & 0x2000) {
            a[1]++;
            moved = 1;
            if (a[1] >= b[1]) {
                a[1] = 0;
            }
        }
    } else {
        e = a[0];
        m = D_8011511A;
        d = (s8)e - (s8)D_80115140[m].v;
        if (d > 0) {
            D_80115140[m].v = e;
        } else if (d < 0) {
            D_80115140[m].v = e;
        }
    }
    if (D_8011511A == 1) {
        D_80115128 = func_8014168C(1) + 1;
        if (D_8011511E & 0x5000) {
            D_80115110.unk3C = 0;
        }
    }
    D_80115110.unk48[2] = D_8018E4C4[D_80115128];
    if (moved) {
        func_80141C0C(1);
    }
    return 0;
}

extern s32 D_8018E4B0;
extern u16 D_8011516A[];
extern GsOT D_800AE7B8[];
extern u8 D_8018DF0C;
extern u8 D_8018E20C;
extern u8 D_8018E30C;
extern u8 D_8018E37C;
extern u8 *D_8018E470[];
extern s32 D_8018E490[];
extern void func_80140E6C();
extern s32 func_80140F00();
extern s32 func_80140958();
extern s32 func_80141100();
extern s32 func_8013FFD8();
extern void func_80024054();
extern s32 func_800D2650();
extern s32 func_800D27DC();
extern s32 func_800D29F8();
extern s32 func_80137D08();
extern s32 func_8013AB54();
extern void SetDrawMode();

void func_8013FAF8(s32 a0, s32 a1) {
    u8 buf[0x48];
    u32 col;
    s16 i;
    s16 n;
    s16 j;
    s32 p;
    s32 r;
    u8 *xy;
    s32 f;
    s32 c;
    u8 d;
    s32 t;
    s32 k;
    s32 off;
    s32 id;
    s16 i0 = a0;

    n = a1;
    func_80140E6C();
    func_80140F00();
    p = func_80140958(D_801151D0, i0, n);
    if (D_8011511A < 6) {
        p = func_80141100(p);
    }
    for (i = i0; i < n; i++) {
        if (i == D_8011511A || i == 2 || i == 4) {
            f = 0;
        } else {
            f = 0xFF;
        }
        xy = &D_8018E30C + i * 4;
        if (i != 5) {
            if (i == 2) {
                r = ((s32 *)&D_8018E4B0)[D_80115128];
            } else {
                r = D_8018E490[i];
            }
        } else {
            r = func_8013FFD8(2, (s16)func_8014168C(2), &col);
        }
        func_80024054(r, buf);
        p = func_800D2650(p, buf, (s16)(AF(xy, u16, 0) + D_8011516A[i * 2]), AF(xy, s16, 2), 1, f ? 0x585858 : 0x808080);
        xy = D_8018E470[i];
        j = 0;
        if (xy != NULL) {
            if (i == 2 && D_80115128 != 0) {
                xy = &D_8018E37C;
            }
            c = f;
            id = i;
            k = id * 4;
            for (;; xy += 4) {
                r = func_8013FFD8(id, j++, &col);
                if (r == 0) {
                    break;
                }
                if (r < 0) {
                    func_80024054(r, buf);
                    t = 1;
                    if (id == 0 && (D_80078EC0 & 0x7F) == j) {
                        t = 0xB6;
                    }
                    if (c) {
                        col -= 0x282828;
                    }
                    p = func_800D2650(p, buf, (s16)(AF(xy, u16, 0) + AF(D_8011516A, u16, k)), AF(xy, s16, 2), t, col);
                }
            }
        }
        SetDrawMode(p, 0, 0, 0x15, 0);
        *(u32 *)p = 0x02000000;
        addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
        d = f;
        off = i * 4;
        p = func_800D27DC(d != 0, p + 0x28, &D_8018DF0C + i * 0x60, 8, AF(D_8011516A, s16, off));
        p = func_800D29F8(d, p, &D_8018E20C + i * 0x20, 2, AF(D_8011516A, s16, off));
    }
    if (D_8018E884[0] == 0xE) {
        p = func_80137D08(p, &D_800AE7B8[D_800B9A02], 2);
    }
    if (D_8018E884[0] != 0 && D_8018E884[1] != 0) {
        p = func_8013AB54(p, D_800AE7B8[D_800B9A02].org + 2, D_8018E884 - 2, 0x8000);
    }
    D_801151D0 = p;
}

extern u8 D_8018E5CC[];
extern u8 D_8018E5D3[];
extern u8 D_8018E5D4[];
extern u8 D_80115143;
extern s32 D_8018E4FC[];
extern s32 D_8018E514[];
extern s32 D_8018E4D0;
extern s32 D_8010EDE8[][3];
extern s32 D_8018E4E4[];
extern s32 D_8010F3C4[];
extern s32 D_8018E554;
extern s32 D_8018E558[];
extern u8 *D_8018E564;

s32 func_8013FFD8(s32 a0, s32 b0, s32 *c) {
    s16 a = a0;
    s16 b = b0;
    s32 ret;
    s32 v;
    s32 w;

    *c = 0x808080;
    ret = 0;
    switch (a) {
    case 0:
        if (b < 6) {
            if (!(func_80029178(D_8018E5A8[b]) & 0xFF)) {
                return 1;
            }
            ret = D_8018E4FC[b];
        }
        break;
    case 1:
        if (b < 4) {
            ret = D_8018E514[b];
        }
        break;
    case 2:
        switch (D_80115128) {
        case 0:
            if (b < 5) {
                ret = (&D_8018E4D0)[b];
            }
            break;
        case 1:
            if (b < 12) {
                v = func_800291B4(D_8018E5C0[b]) & 0xFF;
                if (!v) {
                    return 1;
                }
                ret = D_8010EDE8[v][0];
            }
            break;
        case 2:
            if (b < 6) {
                if (!(func_80029178(D_801ED48C[b]) & 0xFF)) {
                    return 1;
                }
                ret = ((s32 *)D_801ED488)[b];
            }
            break;
        case 3:
            if (b < 6) {
                if (!(func_80029178(D_8018E5CC[b]) & 0xFF)) {
                    return 1;
                }
                ret = D_8018E4E4[b];
            }
            break;
        case 4:
            if (b < 5) {
                ret = ((s32 *)&D_8018E564)[b];
            }
            break;
        }
        break;
    case 3:
        if (b <= 0) {
            b += D_80115143;
            if (b != 0) {
                if (!(func_800291B4(D_8018E5D3[b]) & 0xFF)) {
                    *c = 0x804040;
                }
                ret = D_8010F3C4[b];
            } else {
                ret = D_8018E554;
            }
        }
        break;
    case 5:
        if (b < 3) {
            ret = D_8018E558[b];
        }
        break;
    case 6:
        if (b < 0x28) {
            if (!(func_800291B4(D_8018E5D4[b]) & 0xFF)) {
                *c = 0x804040;
            }
            w = b + 1;
            ret = D_8010F3C4[w];
        }
        break;
    case 7:
        if (b < 5) {
            ret = ((s32 *)&D_8018E564)[b];
        }
        break;
    }
    return ret;
}

extern u8 D_801117EC;
extern u8 D_801117B4;
extern u8 D_80112B58;
extern u8 D_80112B90;
extern u8 D_80112BA8;
extern u8 D_80112BC8;
extern u8 D_8018E5A8[];
extern u8 D_8018E5C0[];
extern u8 D_8018E5CC[];
extern u8 D_8018E5D3[];
extern s32 D_8018E5FC[];
extern s32 D_8018E614[];
extern s32 D_8018E62C[];
extern s32 D_8018E63C[];
extern s32 D_8018E654[];
extern s32 D_8018E66C[];
extern s32 D_8018E680[];
extern s32 (*D_8018E8E0[])();
extern s32 (*D_8018E8F0[])();

s32 func_8014032C(s16 a, s16 b) {
    s32 ret = (s32)&D_801117EC;
    s32 v;
    s32 w;

    switch (a) {
    case 0:
        if (func_80029178(D_8018E5A8[b]) & 0xFF) {
            ret = D_8018E5FC[b];
        }
        break;
    case 1:
        ret = D_8018E62C[b];
        break;
    case 2:
        switch (D_80115128) {
        case 0:
            if (!D_8018E8F0[b]()) {
                b = 5;
            } else if (D_8018E8E0[b]()) {
                b = 4;
            }
            ret = D_8018E63C[b];
            break;
        case 1:
            v = func_800291B4(D_8018E5C0[b]) & 0xFF;
            if (v) {
                ret = D_8018E680[v];
            }
            break;
        case 2:
            if (func_80029178(D_801ED48C[b]) & 0xFF) {
                if (b == 5 && (func_80029178(0x1C) & 0xFF)) {
                    ret = (s32)&D_801117B4;
                } else {
                    ret = D_8018E614[b];
                }
            }
            break;
        case 3:
            if (func_80029178(D_8018E5CC[b]) & 0xFF) {
                ret = D_8018E654[b];
            }
            break;
        case 4:
            ret = D_8018E66C[b];
            break;
        }
        break;
    case 5:
        v = func_800291B4(D_8018E5C0[b]) & 0xFF;
        if (v) {
            ret = D_8018E680[v];
        }
        break;
    case 3:
        if (b != 0) {
            w = func_800291B4(D_8018E5D3[b]) & 0xFF;
            if (w == 0) {
                ret = (s32)&D_80112B58;
            } else if (w == 1) {
                ret = (s32)&D_80112B90;
            } else {
                ret = (s32)&D_80112BA8;
            }
        } else {
            ret = (s32)&D_80112BC8;
        }
        break;
    case 4:
    case 6:
    case 7:
    default:
        ret = 0;
        break;
    }
    return ret;
}

extern s32 func_80028D58();
extern s32 func_80028DE0();
extern s32 func_80028FBC();
extern s32 func_80029000();
extern s32 func_80028D9C();
extern s32 func_80028D78(s32 a);
extern s32 func_80028E00(s32 a);
extern s32 func_80028FDC(s32 a);
extern s32 func_80029020(s32 a);
extern s32 func_80028DBC(s32 a);
extern u8 D_80062BDC;

s32 func_80140608(s32 arg0) {
    s16 n = arg0;
    s32 ret = 1;
    s16 v;
    switch (((u8 *)D_80115148)[n * 2]) {
    case 0:
        v = func_80028D58() ^ 1;
        func_80028D78(v);
        if (v == 0) {
            StartRumbleScript(&D_80062BDC);
        }
        break;
    case 1:
        func_80028E00((s16)(func_80028DE0() ^ 1));
        break;
    case 2:
        v = func_80028FBC();
        if (D_8011511E & 0x8000) {
            v--;
            if (v < 0) {
                v = 0;
                ret = 0;
            }
        } else {
            v++;
            if (v >= 8) {
                v = 7;
                ret = 0;
            }
        }
        func_80028FDC(v);
        func_8002D4C8(0x21, (u16)v);
        break;
    case 3:
        v = func_80029000();
        if (D_8011511E & 0x8000) {
            v--;
            if (v < 0) {
                v = 0;
                ret = 0;
            }
        } else {
            v++;
            if (v >= 8) {
                v = 7;
                ret = 0;
            }
        }
        func_80029020(v);
        func_8002D4C8(0x22, (u16)v);
        break;
    case 4:
        v = func_80028D9C() ^ 1;
        func_80028DBC(v);
        func_8002D4C8(v == 0 ? 0xC : 0xB, 0);
        break;
    }
    return ret;
}

extern u8 *D_8018E564;
extern u8 *D_8018E568;
extern u8 *D_8018E56C;
extern u8 *D_8018E570;
extern u8 *D_8018E574;
extern u16 *D_8018E578[];
extern u16 *D_8018E580[];
extern u16 *D_8018E5A0[];
extern s32 func_80028D58();
extern s32 func_80028DE0();
extern s32 func_80028FBC();
extern s32 func_80029000();
extern s32 func_80028D9C();

void func_801407F4(void) {
    u8 *o;
    u16 *p;

    o = D_8018E564;
    p = D_8018E578[func_80028D58()];
    AF(o, u16, 0x16) = *p++;
    AF(o, u16, 0x18) = *p++;
    AF(o, u16, 0x1A) = *p;
    o = D_8018E568;
    p = D_8018E578[func_80028DE0()];
    AF(o, u16, 0x16) = *p++;
    AF(o, u16, 0x18) = *p++;
    AF(o, u16, 0x1A) = *p;
    AF(D_8018E56C, u16, 0x18) = *D_8018E580[func_80028FBC()];
    AF(D_8018E570, u16, 0x18) = *D_8018E580[func_80029000()];
    o = D_8018E574;
    p = D_8018E5A0[func_80028D9C()];
    AF(o, u16, 0x12) = *p++;
    AF(o, u16, 0x14) = *p++;
    AF(o, u16, 0x16) = *p++;
    AF(o, u16, 0x18) = *p++;
    AF(o, u16, 0x1A) = *p++;
    AF(o, u16, 0x1C) = *p;
}

/* r287: matched with the loop counter stepped on two paths (m = ++n). The allocator counts the extra site before
   cross-jumping merges it, which ranks n above k and the mask, so they land in a2, a3 and t0. */
extern u16 D_8018E32C[];
extern u16 D_8018E3AC[];
extern s16 D_8018E88C[];
extern s16 D_8018E89C[];
extern u8 D_80115158[];

s32 func_80140958(s32 p, s32 a0, s32 b0) {
    s16 i;
    s16 end = b0;
    u16 *tbl;
    s16 j;
    s32 n;
    u16 k;
    s16 x;
    s16 y;
    s16 c;
    s16 d;
    s32 m;

    for (i = a0; i < end; i++) {
        if (D_80115110.unk0 == 0 && D_80115110.mode != 3 && D_80115110.mode < 6) {
            if (i == D_80115110.unkA) {
                p = func_80140D68(p, &D_8018E32C[i * 2], i, D_8018E88C[D_80115110.frames & 7], 0);
            }
        } else {
            tbl = (u16 *)D_8018E470[i];
            if (tbl != NULL && i == D_80115110.unkA && i != 6) {
                if (i == 2 && D_80115110.unk18 != 0) {
                    tbl = (u16 *)&D_8018E37C;
                }
                if (i != 3) {
                    j = func_8014168C(i) * 2;
                } else {
                    j = (((u8 *)D_80115148)[6] - D_80115140[3].v) * 2;
                }
                p = func_80140D68(p, tbl, i, D_8018E89C[D_80115110.frames & 7], j);
                if (i == 2 && D_80115110.unk18 == 1 && D_80115110.unk1E != 0) {
                    p = func_80140D68(p, tbl, 2, 8, (D_80115110.unk1E & 0xF) * 2);
                }
            }
        }
        if (i == 3 && D_80115110.unkA == i && (D_80115110.frames & 8)) {
            k = D_80115110.unkA;
            n = 0;
            do {
                if ((s16)n == 0) {
                    c = D_80115140[k].v;
                    if (c == 0) {
                        goto nx;
                    }
                    AF(p, u8, 0xD) = 0x30;
                    y = D_8018E3AC[1] - 4;
                    AF(p, s16, 0xA) = y;
                } else {
                    c = (s8)D_80115158[k << 1];
                    d = ((s8 *)D_80115140)[k];
                    if (c - d < 2) {
                        m = ++n;
                        continue;
                    }
                    AF(p, u8, 0xD) = 0x38;
                    y = D_8018E3AC[1] + 3;
                    AF(p, s16, 0xA) = y;
                }
                AF(p, s32, 0) = 0x04000000;
                AF(p, s32, 4) = 0x64808080;
                AF(p, u8, 0xC) = 0x78;
                AF(p, s16, 0xE) = 0x4056;
                x = D_8018E3AC[0] + AF(D_8011516A, u16, k << 2) + 0x4A;
                AF(p, s16, 8) = x;
                AF(p, s16, 0x12) = 8;
                AF(p, s16, 0x10) = 8;
                addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
                p += 0x14;
            nx:
                m = ++n;
            } while ((s16)m < 2);
        }
    }
    return p;
}

extern u16 D_8011516A[];
extern GsOT D_800AE7B8[];

s32 func_80140D68(u8 *p, u16 *tbl, s32 i0, s32 x, s16 j) {
    s16 i = i0;

    AF(p, s32, 0) = 0x04000000;
    AF(p, s32, 4) = 0x64808080;
    AF(p, u8, 0xC) = 0x70;
    AF(p, u8, 0xD) = 0x10;
    AF(p, s16, 0xE) = 0x4056;
    AF(p, s16, 8) = tbl[j] + D_8011516A[i * 2] + (s16)(x - 0xD);
    AF(p, s16, 0xA) = tbl[j + 1] - 4;
    AF(p, s16, 0x12) = 0x10;
    AF(p, s16, 0x10) = 0x10;
    /* D_800B9A02 read as ((u16 *)&D_800B9A08)[-3] and the OT through its GsOT (D_800AE7BC = D_800AE7B8[].org):
       in-struct reads, so the tag store forces the index reload */
    addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
    return (s32)(p + 0x14);
}

extern u8 D_80078E7D;
extern u8 D_80078E7E;
extern u8 D_80078E7F;
extern s32 D_8018E4A0;
extern s32 func_800D2CA8();
extern s32 func_800D2D10();

void func_80140E6C(void) {
    s32 p;
    s32 r;
    s32 g;
    s32 b;
    s32 t;
    s32 u;

    p = D_8018E4A0;
    r = func_800D2CA8(D_80078E7F, 0x18);
    g = func_800D2CA8(D_80078E7E, 0xC);
    b = func_800D2CA8(D_80078E7D, 0);
    t = g | 0xB00000;
    u = r | t;
    b |= 0xB00;
    func_800D2D10(u | b, 8, p, 0);
}

extern s32 D_8018E4B0;
extern s32 D_8018E4D0;
extern s32 D_8018E4D4;
extern s32 D_8018E4D8;
extern s32 D_8018E4DC;
extern s32 D_8018E4E0;
extern s32 func_800D2D10();
extern s32 func_800D2CA8();
extern s32 func_80029FE4();
extern s32 func_8002AAB4();
extern s32 func_8002A26C();
extern s32 func_8002A2B0();
extern s32 func_8002A4B8();
extern s32 func_8002A4FC();
extern s32 func_8002A998();
extern s32 func_8002A9DC();
extern s32 func_8002A728();
extern s32 func_8002A76C();
extern s32 func_80029FD4();

s32 func_80140F00(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;

    if (D_80115128 == 0) {
        temp_s0 = D_8018E4B0;
        func_800D2D10(func_800D2CA8(func_80029FE4() + 1, 0x18), 2, temp_s0 + 4, 1);
        strcpy(temp_s0 + 0xA, func_8002AAB4());
        temp_s0_2 = D_8018E4D0;
        func_800D2D10(func_800D2CA8(func_8002A26C() + 1, 0x18), 2, temp_s0_2 + 0x12, 1);
        func_800D2D10(func_800D2CA8(func_8002A2B0(), 0x18), 2, temp_s0_2 + 0x22, -1);
        temp_s0_3 = D_8018E4D4;
        func_800D2D10(func_800D2CA8(func_8002A4B8() + 1, 0x18), 2, temp_s0_3 + 0x12, 1);
        func_800D2D10(func_800D2CA8(func_8002A4FC(), 0x18), 2, temp_s0_3 + 0x22, -1);
        temp_s0_4 = D_8018E4D8;
        func_800D2D10(func_800D2CA8(func_8002A998() + 1, 0x18), 2, temp_s0_4 + 0x12, 1);
        func_800D2D10(func_800D2CA8(func_8002A9DC(), 0x18), 2, temp_s0_4 + 0x22, -1);
        temp_s0_5 = D_8018E4DC;
        func_800D2D10(func_800D2CA8(func_8002A728() + 1, 0x18), 2, temp_s0_5 + 0x12, 1);
        func_800D2D10(func_800D2CA8(func_8002A76C(), 0x18), 2, temp_s0_5 + 0x22, -1);
        temp_s0_6 = D_8018E4E0;
        func_800D2D10(func_800D2CA8(func_80029FD4(), 4), 7, temp_s0_6 + 0x18, -1);
    }
}

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

s32 func_801412A8(s32 p, s16 a, s16 b, s16 c, s16 y, s16 v) {
    s32 col;
    s32 w;
    s32 xy;
    s32 xy2;

    col = 0xF800F8;
    if (a != 0) {
        w = 0x5E;
        if (D_80115116 & 1) {
            col = 0xF89C00;
        }
    } else if (b != 0) {
        w = c * 0x5E / b;
    } else {
        w = 0x5E;
        col = 0xF89C00;
    }
    xy = (u16)y | ((v + 10) << 16);
    AF(p, s32, 0) = 0x03000000;
    AF(p, s32, 4) = col | 0x60000000;
    AF(p, s32, 8) = xy;
    AF(p, s32, 0xC) = w | 0x20000;
    addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
    p += 0x10;
    AF(p, s32, 4) = 0x60080808;
    AF(p, s32, 0) = 0x03000000;
    AF(p, s32, 8) = xy;
    AF(p, s32, 0xC) = 0x2005E;
    addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
    p += 0x10;
    xy2 = (u16)(y - 1);
    AF(p, s32, 4) = 0x60FFFFFF;
    AF(p, s32, 0) = 0x03000000;
    AF(p, s32, 8) = ((v + 9) << 16) | xy2;
    AF(p, s32, 0xC) = 0x20060;
    addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
    p += 0x10;
    AF(p, s32, 0) = 0x03000000;
    AF(p, s32, 4) = 0x60E0C0A0;
    AF(p, s32, 8) = ((v + 11) << 16) | xy2;
    AF(p, s32, 0xC) = 0x20060;
    addPrim(D_800AE7B8[((u16 *)&D_800B9A08)[-3]].org + 2, p);
    return p + 0x10;
}

extern void func_800291A0();
extern s32 func_800291DC();
extern s32 func_800291C8();

void func_801415C0(s32 arg0, s32 arg1) {
    s16 a = arg0;
    s16 b = arg1;
    s32 t;

    t = func_800291B4(a + 0x2F) & 0xFF;
    func_800291A0(a + 0x2F, func_800291B4(b + 0x2F) & 0xFF);
    func_800291A0(b + 0x2F, t);
    t = func_800291DC(a * 2 + 0x14);
    func_800291C8(a * 2 + 0x14, (s16) func_800291DC(b * 2 + 0x14));
    func_800291C8(b * 2 + 0x14, (s16) t);
}

extern u8 D_80115149[];
extern u8 D_80115158[];

s32 func_8014168C(s16 n) {
    return (s16)(((u8 *)D_80115148)[n * 2] + D_80115149[n * 2] * D_80115158[n * 2]);
}

extern s32 func_800D11F0();
extern s32 func_800D1658();

s32 func_801416D4(s32 arg0) {
    s16 a = arg0;
    s16 r = 0;
    s32 n = 2;
    u8 idx = ((u8 *)D_80115148)[n * 2] + D_80115149[n * 2] * D_80115158[n * 2];

    switch (a) {
    case 0:
        r = func_800D11F0(idx);
        break;
    case 1:
        r = func_800D1658(idx);
        break;
    case 2:
        func_80141C0C(6);
        r = 1;
        break;
    }
    return r;
}

void func_80141788(void) {
    D_8018E900[D_80115112]();
}

void func_801417C4(void) {
    ClearRumbleScript();
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
    ((SVECTOR *)&D_8011511C)->vy = GetPadPressedDirWide(0);
    ((SVECTOR *)&D_8011511C)->vx = GetPadHeldDirWide(0);
    D_8018E90C[D_80115112]();
    func_80141C04();
    ((SVECTOR *)&D_80115112)->vz += 1;
}

extern u8 D_8018E524[];
extern u8 D_8018E53C[];
extern u8 D_8018E5B0[];

static inline void func_8013E83C_body(void) {
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

void func_801418F8(void) {
    func_800D24A0(1);
    D_80115110.unkA = 2;
    func_8013E83C_body();
    D_80115110.unk18 = 1;
    D_8018E884[0] = 0xE;
    D_8018E884[1] = 3;
    D_80115110.mode++;
}

void func_80141A60(void) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original frame is 8 bytes bigger with nothing stored */
    s32 w;
    u16 k;
    D_801151D0 = D_801151C8[D_800B9A02];
    func_8013F350();
    k = D_80115110.unkA;
    if (k >= 4) {
        func_8013FAF8((s16)k, (s16)(k + 1));
    }
    func_8013FAF8(2, 3);
    w = func_8014032C(2, (s16)(((u8 *)D_80115148)[4] + D_80115149[4] * D_80115158[4]));
    if (w != 0 && w != D_80115110.unk20) {
        D_80115110.unk20 = w;
        func_80139954();
        func_801376E8(w, D_8018E888);
    }
    func_80137B80();
    if (func_800D0EC4() != 0) {
        D_80115110.frames = -8;
        D_80115110.mode++;
    }
}

void func_80141B90(void) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original frame is 8 bytes bigger with nothing stored */
    D_801151D0 = D_801151C8[D_800B9A02];
    func_8013FAF8(2, 3);
    if (D_80115116 == 0) {
        D_800B9A15 = 0;
        D_80115112 += 1;
    }
}

void func_80141C04(void) {
}

extern u16 D_8018E860[];

void func_80141C0C(s32 n) {
    s16 x = n;
    func_8002D4C8(D_8018E860[x * 2 + D_80115110.unk0], 0);
}

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

StageActor *func_8012C51C(SpawnDef *d, StageActor *parent);

void func_80142454(s32 arg0) {
    SpawnDef d;
    StageActor *a;

    d.kind = 0x13;
    d.x = D_80126B58.pos[0].h.i;
    d.y = D_80126B58.pos[1].h.i;
    d.z = D_80126B58.pos[2].h.i;
    d.unk8 = 1;
    d.flags = 0;
    d.unkE = 0;
    d.unk10 = 0;
    a = func_8012C51C(&d, 0);
    if (a != 0) {
        AF(a, s16, 0x52) = arg0;
        AF(a, Player *, 0x64) = &D_80126B58;
    }
}

extern void (*D_8018E930[])();

void func_801424E4(u8 *arg0) {
    u8 *t;

    D_8018E930[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            t = AF(arg0, u8 *, 0x64);
            if (t != 0) {
                AF(arg0, s32, 4) = AF(t, s32, 4);
                AF(arg0, s16, 0xA) = AF(t, u16, 0xA) + AF(arg0, u16, 0xFC);
                AF(arg0, s32, 0xC) = AF(t, s32, 0xC);
            }
        } else {
            t = AF(arg0, u8 *, 0x64);
            if (t != 0 && AF(t, s16, 0x36) == AF(arg0, s16, 0xFE)) {
                AF(arg0, s32, 4) = AF(t, s32, 4);
                AF(arg0, s16, 0xA) = AF(AF(arg0, u8 *, 0x64), u16, 0xA) + AF(arg0, u16, 0xFC);
                AF(arg0, s32, 0xC) = AF(AF(arg0, u8 *, 0x64), s32, 0xC);
            } else {
                func_8012C218(arg0);
            }
        }
    }
}

void func_801425CC(u8 *arg0) {
    D_8018E940[AF(arg0, u16, 2)]();
}

extern u8 D_8018E924;
extern s32 func_8012C1DC();
extern s32 func_8012AD50();

void func_80142608(u8 *arg0) {
    s32 t;
    s32 m;

    if (AF(arg0, s16, 0x70) != 0) {
        m = func_8012C1B8(arg0);
    } else {
        m = func_8012C1DC(AF(arg0, s32, 0x64));
    }
    AF(arg0, s32, 0x20) = m;
    if (m != 0) {
        func_8001CA1C(m, &D_8018E924);
        AF(m, s16, 0x1A) = 0x200;
        AF(m, s16, 0x18) = 0x200;
        AF(arg0, s16, 0xFC) = 0x40;
        if (AF(arg0, s16, 0x70) != 0) {
            goto ok;
        }
        t = AF(arg0, s32, 0x64);
        if (t != 0) {
            AF(arg0, u16, 0xFE) = AF(t, u16, 0x36);
            goto ok;
        }
    }
    func_8012CAE4(arg0);
    return;
ok:
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x90) = 0;
    func_8012AD50(arg0);
}

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

extern s32 func_80142DB8();
extern void func_80142BB4();
extern s32 func_8012C0EC();
extern void func_80142C9C();
extern s32 func_8012BF10();
extern void func_8012AD44();

void func_80142838(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (AF(arg0, s16, 0x100) != 0) {
        if (func_8012C0EC(arg0) != 0) {
            func_80142BB4(arg0, 0, 3);
        }
    } else {
        func_80142C9C(arg0);
        if (func_8012BF10(arg0, 0x30) != 0) {
            func_8012AD44(arg0, 2);
        }
    }
}

extern s32 func_80142DB8();
extern s32 func_80142D38();
extern void func_80142BB4();

void func_801428CC(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (func_80142D38(arg0) == 1) {
        func_80142BB4(arg0, 0, 3);
    }
}

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

extern u16 D_800B99D8;
struct C4 { u8 r, g, b, a; };
extern struct C4 D_801EC5F8;
extern u8 D_801ED490;
extern u8 D_801ED491;
extern u8 D_801ED492;

void func_80142A80(void) {
    struct C4 c;
    s32 k;

    c = D_801EC5F8;
    if (D_800B99D8 & 0x10) {
        k = ((D_800B99D8 & 0xF) >> 1) + 9;
    } else {
        k = 0x10 - ((D_800B99D8 & 0xF) >> 1);
    }
    D_801ED490 = k * (c.r >> 4);
    D_801ED491 = k * (c.g >> 4);
    D_801ED492 = k * (c.b >> 4);
}

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

void func_80142C84(u8 *arg0) {
    AF(arg0, s32, 0x14) = 0xFFF40000;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, s16, 0x102) = 0;
}

extern s32 func_8012CBF4();

void func_80142C9C(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x102) < 2) {
        f = func_8012CBF4(arg0);
        if (AF(arg0, s32, 0x14) > 0x180000) {
            AF(arg0, s32, 0x14) = 0x180000;
        }
        if ((f & 0x6000) || AF(arg0, s16, 0xA) > 0x100) {
            if (AF(arg0, s16, 0x102) == 0) {
                AF(arg0, s32, 0x14) = 0xFFF80000;
            }
            AF(arg0, s16, 0x102)++;
        }
    }
}

extern s32 func_8012BEE8();

s32 func_80142D38(s32 arg0) {
    if (func_8012BEE8(arg0) == 1) {
        return 1;
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
    } else {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
    }
    return 0;
}

s32 func_80142DB8(u8 *arg0) {
    return AF(arg0, u16, 0x5C) & 1;
}

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

extern s32 func_8012C0EC();
extern void func_80142C9C();
extern s32 func_8012BF10();
extern void func_8012AD44();

void func_80142F68(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (AF(arg0, s16, 0x100) != 0) {
        if (func_8012C0EC(arg0) != 0) {
            func_80142BB4(arg0, 0, 3);
        }
    } else {
        func_80142C9C(arg0);
        if (func_8012BF10(arg0, 0x30) != 0) {
            func_8012AD44(arg0, 2);
        }
    }
}

void func_80142FFC(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (func_80142D38(arg0) == 1) {
        func_80142BB4(arg0, 0, 3);
    }
}

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

void func_801430F4(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (AF(arg0, s16, 0x100) != 0) {
        if (func_8012C0EC(arg0) != 0) {
            func_80142BB4(arg0, 0, 3);
        }
    } else {
        func_80142C9C(arg0);
        if (func_8012BF10(arg0, 0x30) != 0) {
            func_8012AD44(arg0, 2);
        }
    }
}

void func_80143188(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (func_80142D38(arg0) == 1) {
        func_80142BB4(arg0, 0, 3);
    }
}

extern struct C4 D_801EC5F4;
extern struct C4 D_801ED494;
extern void func_8001CA88();
extern StageActor * func_8012E504();
extern void func_800233CC();

void func_801431E8(s32 arg0) {
    struct C4 c;
    s16 temp_v0_2;
    s32 temp_v0;

    c = D_801EC5F4;
    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA88(temp_v0, (s32) &D_801ED490);
    temp_v0_2 = ((AF(arg0, u16, 0x70) & 0xF) * 0x600) + 0xC00;
    AF(temp_v0, s16, 0x76) = -0x10;
    AF(temp_v0, s16, 0x1A) = temp_v0_2;
    AF(temp_v0, s16, 0x18) = temp_v0_2;
    AF(temp_v0, s32, 4) |= 0x50000000;
    if (func_8012E504(arg0, 0x33) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_800233CC((s32) &D_801ED490, 0x10);
        D_801ED494 = c;
    } else {
        AF(arg0, s16, 0xFC) = 0;
    }
    func_80142B2C(arg0);
}

extern s32 func_8012C044();

void func_801432FC(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (AF(arg0, s16, 0x100) != 0) {
        if (func_8012C044(arg0) != 0) {
            func_80142BB4(arg0, 0, 3);
        }
    } else {
        func_80142C9C(arg0);
        if (func_8012BF10(arg0, 0x30) != 0) {
            func_8012AD44(arg0, 2);
        }
    }
}

void func_80143390(s32 arg0) {
    if (func_80142DB8(arg0) == 1) {
        func_80142BB4(arg0, 1, 3);
    } else if (func_80142D38(arg0) == 1) {
        func_80142BB4(arg0, 0, 3);
    }
}

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

extern s32 D_8018ED08[];

void func_80143458(u8 *arg0) {
    s32 temp;

    AF(AF(arg0, u8 *, 0x20), s32 *, 0x20) = (s32 *) &D_800D387C;
    if (AF(AF(arg0, u8 *, 0x20), s32, 4) == 0) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
    }
    AF(AF(arg0, u8 *, 0x20), u8, 0x27) = 0x9C;
    temp = AF(arg0, u16, 0x34) & 0x7FFF;
    if (temp != 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = temp;
    }
    func_80128EA8(AF(arg0, s32, 0x20), arg0 + 0x24, D_8018ED08[AF(arg0, u16, 0x34) & 3]);
    AF(arg0, u16, 2) = AF(arg0, u16, 2) + 1;
}

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

extern u8 D_8018ED18;
extern s32 D_8018EE14[];

void func_8014358C(u8 *arg0) {
    s32 temp;

    AF(AF(arg0, u8 *, 0x20), u8 *, 0x20) = &D_8018ED18;
    if (AF(AF(arg0, u8 *, 0x20), s32, 4) == 0) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
    }
    AF(AF(arg0, u8 *, 0x20), u8, 0x27) = 0x90;
    temp = AF(arg0, u16, 0x34) & 0x7FFF;
    if (temp != 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = temp;
    }
    func_80128EA8(AF(arg0, s32, 0x20), arg0 + 0x24, D_8018EE14[AF(arg0, u16, 0x34) & 3]);
    AF(arg0, u16, 2) = AF(arg0, u16, 2) + 1;
}

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

void func_801439FC(u8 *a) {
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
        AF(o, s16, 0x10) = ratan2(D_801152AC, D_801152AA) + 0x400;
        AF(o, s16, 0x12) = ratan2(D_801152A8, D_801152AA);
        AF(o, s16, 0x14) = -AF(AF(t, u8 *, 0x20), u16, 0x12);
    }
}

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

StageActor *func_8012C51C(SpawnDef *d, StageActor *parent);

void func_80143BDC(u8 *arg0) {
    SpawnDef d;

    d.x = AF(arg0, s16, 0);
    d.y = AF(arg0, s16, 2);
    d.z = AF(arg0, s16, 4);
    d.kind = 0x1C;
    d.unk8 = 1;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    func_8012C51C(&d, 0);
}

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

extern u8 D_8018EE68;
extern void ApplyMatrixSV(MATRIX *m, SVECTOR *v0, SVECTOR *v1);

void func_80143D28(u8 *arg0) {
    s32 var_s3 = 0x1000;
    s32 temp_v1;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_s2;
    u16 x;

    temp_a1 = &D_8018EE68 + AF(arg0, s16, 0x70) * 0xC;
    x = AF(temp_a1, u16, 8);
    temp_s2 = AF(arg0, u8 *, 0x20);
    temp_s1 = AF(arg0, u8 *, 0x64);
    AF(temp_s2, u16, 0x14) = x;
    AF(temp_s2, u16, 0x12) += AF(temp_a1, u16, 0xA);
    ApplyMatrixSV((MATRIX *)(AF(arg0, u8 *, 0x20) + 0x34), (SVECTOR *)temp_a1, (SVECTOR *)(arg0 + 0x50));
    if (AF(arg0, s16, 0xFE) == 0 && (temp_s1 == NULL || AF(temp_s1, s16, 0x36) != AF(arg0, s16, 0xFC) || AF(temp_s1, u8, 0xC1) != 6)) {
        if (AF(arg0, s32, 0x1C) > 0x10) {
            AF(arg0, s32, 0x1C) = 0x10;
        }
        AF(arg0, s16, 0xFE) = 1;
    }
    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 < 0x11) {
        var_s3 = temp_v1 << 8;
    }
    if (temp_v1 >= 0x74) {
        var_s3 = (0x78 - temp_v1) << 0xA;
    }
    AF(temp_s2, s16, 0x18) = AF(temp_s2, s16, 0x1A) = AF(temp_s2, s16, 0x1C) = var_s3;
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

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

extern u8 D_800AF648;
extern s32 AllocPrim();
extern GsOT D_800A6518[2];

/* a ring of 16 white triangles around the actor's screen point (radius at 0x1C), the actor moved by its speed first */
void func_80144090(u8 *arg0) {
    SVECTOR v;
    s16 w[6];                   /* sxy, p, flag of RotTransPers */
    POLY_F3 *p;
    s32 z;
    s32 a;
    s32 s;
    s32 c;

    p = (POLY_F3 *)AllocPrim(0x140);
    if (p != NULL) {
        AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
        AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
        AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA);
        v.vz = AF(arg0, u16, 0xE);
        SetRotMatrix(&D_800AF648);
        SetTransMatrix(&D_800AF648);
        z = RotTransPers(&v, (s32 *)&w[0], (s32 *)&w[2], (s32 *)&w[4]) + 4;
        if (z < 0) {
            z = 0;
        }
        for (a = 0; a < 0x1000; a += 0x100, p++) {
            *(u32 *)&p->r0 = 0xFFFFFF;
            setlen(p, 4);
            p->code = 0x20;
            if (AF(arg0, s32, 0x1C) - 6 <= 0) {
                p->x0 = w[0];
                p->y0 = w[1];
            } else {
                p->x0 = w[0] + ((rsin(a) * ((AF(arg0, s32, 0x1C) - 6) << 4)) >> 12);
                p->y0 = w[1] + ((rcos(a) * ((AF(arg0, s32, 0x1C) - 6) << 4)) >> 12);
            }
            s = rsin(a) * (AF(arg0, s32, 0x1C) << 4);
            c = rcos(a) * (AF(arg0, s32, 0x1C) << 4);
            p->x2 = w[0] + ((s + (c >> 6)) >> 12);
            p->y2 = w[1] + ((c + (s >> 6)) >> 12);
            p->x1 = w[0] + ((s - (c >> 6)) >> 12);
            p->y1 = w[1] + ((c - (s >> 6)) >> 12);
            AddPrim(D_800A6518[D_800B9A02].org + z, p);
        }
    }
}

void func_801442F8(u8 *arg0) {
    s32 temp_v0;

    D_8018EEA8[AF(arg0, u16, 2)]();
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x1E) {
        func_8012C218((s32) arg0);
    }
}

extern u8 D_8018EE24;
extern void func_8001CB6C();

void func_80144364(s32 arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 t;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    t = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, s32, 0xCC) = temp_v0;
    AF(arg0, u16, 0xFC) = t;
    func_8001CB6C(temp_v0, &D_8018EE24, 0x250, 0x1A0);
    AF(temp_v0, s32, 4) = 0x60000000;
    AF(temp_v0, u8, 0x27) = 0x14;
    AF(temp_v0, s16, 0x10) = 0x400;
    AF(temp_v0, u16, 8) = AF(AF(arg0, u8 *, 0x64), u16, 6);
    AF(temp_v0, u16, 0xA) = AF(AF(arg0, u8 *, 0x64), u16, 0xA);
    AF(temp_v0, u16, 0xC) = AF(AF(arg0, u8 *, 0x64), u16, 0xE);
    temp_v0_2 = AF(arg0, s16, 0x70);
    if (temp_v0_2 != 0) {
        AF(temp_v0, s16, 0x18) = AF(temp_v0, s16, 0x1A) = temp_v0_2;
    } else {
        AF(temp_v0, s16, 0x18) = AF(temp_v0, s16, 0x1A) = 0x2000;
    }
    AF(arg0, s16, 2) = 1;
}

extern s32 D_8018EE38;

void func_80144458(u8 *arg0) {
    u8 *o;
    u8 *t;
    s32 a;

    o = AF(arg0, u8 *, 0xCC);
    if (AF(arg0, s16, 0x70) == 0) {
        t = AF(AF(arg0, u8 *, 0x64), u8 *, 0x20);
        if (t != NULL) {
            a = (AF(t, s16, 0x12) - 0x400) & 0xFFF;
            AF(arg0, s32, 0x10) = rcos(a) * D_8018EE38 * 16;
            AF(arg0, s32, 0x18) = rsin(a) * -D_8018EE38 * 16;
            func_8012AD80(arg0);
        }
    }
    AF(o, u16, 8) = AF(arg0, u16, 6);
    AF(o, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
    if (func_80128ED8(o, arg0 + 0xD0) != 0) {
        func_80016714(o, 0x38);
        func_8012C218(arg0);
    }
}

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

extern u8 D_8018EE4C;
extern u8 D_8018EE58;

void func_8014477C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 *temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_8018EE4C);
    temp_v1 = AF(arg0, u8 *, 0x64);
    if (AF(temp_v1, u16, 0) != 0) {
        AF(arg0, u16, 0xFC) = AF(temp_v1, u16, 0x36);
        temp_v0_2 = AF(AF(arg0, u8 *, 0x64), s32, 0x58);
        if (temp_v0_2 != 0) {
            AF(arg0, u16, 0xA) = AF((temp_v0_2 & 0x0FFFFFFF) | 0x80000000, u16, 8) + (AF(arg0, s16, 0xA) - 0x30);
        } else {
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0xA) - 0x60;
        }
    }
    SetScript(arg0, (s32) &D_8018EE58);
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = (AF(arg0, s16, 0x70) << 0xC) / 3;
    AF(arg0, s32, 0x1C) = 0x78;
}

extern u8 D_8018EE94;

void func_80144880(s32 arg0) {
    s32 temp_v0;
    s8 var_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, u16, 0xFC) = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s32, 0xCC) = temp_v0;
    if (AF(arg0, s16, 0x70) == 1) {
        func_8001CB6C(temp_v0, &D_8018EE24, 0x250, 0x1A0);
        var_v0 = 0x14;
    } else {
        func_8001CB6C(temp_v0, &D_8018EE94, 0x300, 0x1D0);
        var_v0 = 0x6A;
    }
    AF(temp_v0, u8, 0x27) = var_v0;
    AF(temp_v0, s32, 4) = 0x60000000;
    AF(temp_v0, s16, 0x10) = 0x400;
    AF(temp_v0, u16, 8) = AF(AF(arg0, void *, 0x64), u16, 6);
    AF(temp_v0, u16, 0xA) = AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(temp_v0, u16, 0xC) = AF(AF(arg0, void *, 0x64), u16, 0xE);
    AF(temp_v0, s16, 0x1A) = 0x4000;
    AF(temp_v0, s16, 0x18) = 0x4000;
    AF(arg0, u16, 2) = AF(arg0, u16, 2) + 1;
}

void func_80144988(u8 *arg0) {
    AF(arg0, u16, 0xA) -= 0x40;
    AF(arg0, s32, 0x10) = AF(AF(arg0, u8 *, 0x64), s32, 0x10);
    AF(arg0, s32, 0x14) = AF(AF(arg0, u8 *, 0x64), s32, 0x14);
    AF(arg0, s32, 0x18) = AF(AF(arg0, u8 *, 0x64), s32, 0x18);
    AF(arg0, u16, 2) += 1;
}

void func_801449C8(u8 *arg0) {
    D_8018EEB0[AF(arg0, u16, 2)]();
}

void func_80144A04(u8 *arg0) {
    ((void (*)())AF(arg0, s32 *, 0xDC))(arg0);
}

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

extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern s32 func_80013294();

s32 func_80144B14(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;

    a.vx = AF(arg0, u16, 6);
    a.vy = AF(arg0, u16, 0xA);
    a.vz = AF(arg0, u16, 0xE);
    b.vx = D_80126B5E;
    b.vy = D_80126B62;
    b.vz = D_80126B66;
    if (func_80013294(&a, &b) < AF(arg0, s16, 0xFC)) {
        return AF(arg0, s32, 0xCC);
    }
    return 0;
}
