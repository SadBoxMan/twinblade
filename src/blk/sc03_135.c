#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s16 field_C; s16 field_E; s32 field_10[2]; s32 field_18; s32 field_1C; s32 field_20; } struct_24;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_3;
typedef struct { u8 field_0[0x14]; } struct_14_4;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_4;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_8;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_5;
typedef struct { struct_8_8 field_0[4]; struct_4_5 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
typedef struct { s16 field_0, field_2, field_4, field_6; s16 field_8, field_A, field_C, field_E; s32 field_10; } struct_14_5;
typedef struct { struct_8_4 field_0[4]; s32 field_20, field_24, field_28, field_2C, field_30, field_34; } struct_38;
typedef struct { s16 field_0; s16 field_2[5]; } struct_C_7;
typedef struct { u8 field_0; u8 field_1[11]; } struct_C_8;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_6;
typedef struct { s8 field_0; u8 field_1; } struct_2;
typedef struct { u16 field_0; } struct_2_2;
typedef struct { u32 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A; u8 field_C, field_D, field_E, field_F; s16 field_10, field_12; u8 field_14, field_15, field_16, field_17; s16 field_18, field_1A; u8 field_1C, field_1D, field_1E, field_1F; s16 field_20, field_22; } struct_24_2;
typedef struct { s32 field_0; } struct_4_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_7;
typedef struct { u8 field_0[8]; } struct_8_10;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38_2;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[12]; } struct_40;
typedef struct { u32 field_0; u32 field_4; } struct_8_11;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[13]; } struct_44;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_7;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_8 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_9;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C;
typedef struct { s32 field_0[4]; } struct_10_6;
typedef struct { s32 field_0; u8 field_4[8]; } struct_C_9;
typedef struct { s32 field_0; s32 field_4; } struct_8_12;
typedef void (*type_3)(void);
typedef struct { s32 field_0; s32 field_4; s32 field_8; s8 field_C; s8 field_D; s8 field_E; } struct_10_7;
typedef struct { u32 *field_0; s32 field_4[4]; } struct_14_8;
typedef struct { s32 field_0[0x95]; } struct_254;
typedef struct { s16 field_0; s16 field_2; s16 field_4[8]; s16 *field_14[8]; } struct_34_5;
typedef struct { s16 field_0, field_2, field_4; } struct_6;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_13;
typedef struct { struct_8_4 field_0[3]; struct_4_3 field_18[3]; s32 field_24; } struct_28_2;
typedef struct { u8 *field_0; u32 field_4; u32 field_8; u32 field_C; u32 field_10; u32 *field_14; u32 *field_18; } struct_1C_4;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; } struct_18_2;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_9;
typedef struct { s16 field_0, field_2; s32 field_4; } struct_8_14;
typedef struct { s32 field_0; s32 field_4; } struct_8_15;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_16;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_10;
typedef struct { u8 field_0[0x18]; struct_20_10 field_18; } struct_38_3;
typedef struct { u16 field_0[6]; } struct_C_10;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_17;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; s32 field_10; } struct_14_9;
typedef struct { u8 field_0[4]; } struct_4_10;
typedef struct { s16 field_0; } struct_2_3;
typedef struct { s16 field_0, field_2; u16 field_4; s16 field_6; } struct_8_18;
typedef struct { u16 field_0; u16 field_2; u8 field_4[28]; } struct_20_11;
typedef struct { u8 field_0; } struct_1;
typedef struct { s8 field_0; u8 field_1; } struct_2_4;
typedef struct { u32 *field_0; u8 field_4[8]; u32 *field_C; u8 field_10[4]; } struct_14_10;
typedef struct { u16 field_0; } struct_2_5;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_11;
typedef struct { s16 field_0, field_2; } struct_4_12;
typedef struct { char *field_0; s32 field_4; } struct_8_19;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_12;
typedef struct { s32 field_0[0x29]; } struct_A4;
typedef struct {
    u32 field_0;
    u8 field_4, field_5, field_6, field_7;
    s16 field_8, field_A;
    u8 field_C, field_D;
    u16 field_E;
    s16 field_10, field_12;
    u8 field_14, field_15;
    u16 field_16;
    s16 field_18, field_1A;
    u8 field_1C, field_1D;
    u16 field_1E;
    s16 field_20, field_22;
    u8 field_24, field_25;
    u16 field_26;
} struct_28;
typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0x20];
    struct_2_3 field_30[8];
    union { s16 m0[8]; struct_2_3 m1[8]; } field_40;
} struct_50_2;
typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0xC];
    u8 field_1C[0x24]; s16 field_40[3];
} struct_46;
extern u8 D_sc03_135_801EA554;
extern s32 ZeroFill();

s32 func_sc03_135_801E2864(arg0)
    s32 arg0;
{
    return ZeroFill((s32) &D_sc03_135_801EA554, 8);
}

typedef struct struct_10_8 { struct struct_10_8 *field_0; s32 field_4; s32 field_8; s32 field_C; } struct_10_8;
extern s16 D_sc03_135_801EA556;
extern void (*D_sc03_135_801E5B7C[])();

s32 func_sc03_135_801E288C(void) {
    D_sc03_135_801E5B7C[(((s16 *)&D_sc03_135_801EA554))[0]]();
    return (u32) D_sc03_135_801EA556 >> 31;
}

extern s16 D_sc03_135_801EA55C;
extern s32 GetProgress();
extern s32 func_sc03_135_801E2980();

void func_sc03_135_801E28D0(void) {
    s32 t = GetProgress();

    if ((u32) (t - 5) >= 1205) {
        if (t != 1700) {
            D_sc03_135_801EA55C = 1;
        } else {
            D_sc03_135_801EA55C = 2;
        }
    } else {
        D_sc03_135_801EA55C = 0;
    }
    func_sc03_135_801E2980(1, D_sc03_135_801EA55C);
    (((s16 *)&D_sc03_135_801EA554))[0]++;
}

extern s16 D_sc03_135_801EA556;

void func_sc03_135_801E295C(void) {
    D_sc03_135_801EA556 = -1;
}

extern s16 D_sc03_135_801EA950;

s16 func_sc03_135_801E2970(void) {
    return D_sc03_135_801EA950;
}

extern s8 D_800B9A13;
extern s8 D_800B9A15;
extern s16 g_Subscreen;
extern u16 D_80115112;
extern s16 D_80115126;
extern s16 D_sc03_135_801EA954;
extern s16 D_sc03_135_801EA958;
extern void func_sc03_135_801E29F8();
extern s32 PlaySoundId();
extern s32 *g_SubscreenHook;

s32 func_sc03_135_801E2980(s32 arg0, s32 arg1) {
    D_800B9A15 = 1;
    D_800B9A13 = 5;
    g_Subscreen = 4;
    D_80115126 = (s16) arg0;
    D_sc03_135_801EA958 = (s16) arg1;
    D_sc03_135_801EA954 = (s16) arg1;
    D_80115112 = 0;
    g_SubscreenHook = &func_sc03_135_801E29F8;
    return PlaySoundId(0x1E, 0);
}

extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc03_135_801E65D0[])();
extern void StageModeNop();

void func_sc03_135_801E29F8(void) {
    D_sc03_135_801E65D0[D_80115112]();
    StageModeNop();
    D_80115116 += 1;
}

extern void OpenSubscreen();
void func_sc03_135_801E2A98();
extern void ResetCardState();

void func_sc03_135_801E2A54(void) {
    u16 *p;

    OpenSubscreen(5);
    func_sc03_135_801E2A98();
    ResetCardState();
    p = &D_80115112;
    (*p)++;
}

typedef struct { u16 field_0; u16 field_2; u8 field_4[0x1C]; } struct_20_s;
typedef struct { s32 field_0; struct_20_s *field_4; u8 field_8[0x20]; s16 field_28[6]; } struct_34_s;
extern s16 D_80115118;
extern s16 D_8011512C;
extern struct_34_s D_80115130;
extern s32 D_sc03_135_801E63B0;
extern s32 D_sc03_135_801E6448;
extern s16 D_sc03_135_801EA95C;
extern s32 D_sc03_135_801EAC3C;
extern s32 D_sc03_135_801E64F4[];
extern u8 D_sc03_135_801EAC4C[];

void func_sc03_135_801E2A98(void) {
    s16 i;

    D_sc03_135_801EAC3C = 0;
    for (i = 0; i < 8; i++) {
        D_sc03_135_801EAC4C[i] = 0xFF;
    }
    D_sc03_135_801EA950 = 0;
    D_sc03_135_801EA95C = 0;
    D_80115118 = 0;
    if (D_sc03_135_801EA954 == 0) {
        D_8011512C = 0;
        D_sc03_135_801E6448 = D_sc03_135_801E63B0;
    } else {
        D_8011512C = 9;
        D_sc03_135_801E6448 = 0x1A;
    }
    D_80115130.field_0 = 0;
    D_80115130.field_4 = (struct_20_s *) D_sc03_135_801E64F4[D_80115126];
    for (i = 0; i < 6; i++) {
        D_80115130.field_8[i] = D_80115130.field_4[i].field_0;
        D_80115130.field_28[i] = D_80115130.field_4[i].field_2;
    }
}

void func_sc03_135_801E2BC4(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

extern u16 D_800B9A02;
extern s32 D_801151D0;
extern s32 D_sc03_135_801EAC40;
extern u8 D_sc03_135_801EAC44;
extern s32 D_sc03_135_801EAC54;
extern s32 D_801151C8[];
extern s32 CardStep();
extern s32 func_sc03_135_801E38B4();
extern void func_sc03_135_801E3C1C();
extern s16 func_sc03_135_801E2D34();
extern void func_sc03_135_801E3390();

void func_sc03_135_801E2BE0(void) {
    s16 r;
    u16 *p;
    u8 unused[8]; /* MATCH-TRICK: frame */

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc03_135_801EA954 == 0) {
        D_sc03_135_801EAC54 = CardStep(D_sc03_135_801EAC3C, D_sc03_135_801EAC40, &D_sc03_135_801EAC44);
        if (D_80115126 == 0) {
            func_sc03_135_801E38B4();
        } else {
            func_sc03_135_801E3C1C();
        }
    }
    r = func_sc03_135_801E2D34();
    func_sc03_135_801E3390();
    if (r != 0) {
        p = &D_80115112;
        D_sc03_135_801EA950 = r;
        D_800B9A15 = 0;
        (*p)++;
    }
}

void func_sc03_135_801E2CC0(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

extern u16 D_80115114;
extern void CloseSubscreen();

void func_sc03_135_801E2CDC(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        CloseSubscreen();
        return;
    }
    D_80115112 += 1;
}

extern void func_8014168C(s16);
extern u16 D_8011511A;
extern s32 D_sc03_135_801E64E8;
extern u8 D_sc03_135_801EA960;
extern u8 D_sc03_135_801EAC47[];
extern u8 D_sc03_135_801EAC4D;
extern s32 GetPadPressedDirWide();
extern void GetPadHeldDirWide();
extern void SetCardSaveData();
extern s32 func_sc03_135_801E4890();

s16 func_sc03_135_801E2D34(void) {
    s32 pad;
    s16 moved;
    s32 *p;
    u16 *q;
    u16 x;
    u16 y;
    s32 *p2;
    s32 t;
    s16 *r;

    pad = GetPadPressedDirWide(0);
    moved = 0;
    GetPadHeldDirWide(0);
    func_8014168C(D_8011511A);
    if (pad & 0x40) {
        switch (D_8011512C) {
        case 0:
        case 3:
        case 6:
        case 8:
        case 10:
        case 11:
        case 12:
            return 0;
        case 1:
            if (D_80115126 == 0) {
                if (D_sc03_135_801EAC47[D_8011511A] != 1) {
                    PlaySoundId(0x472, 0);
                    return 0;
                }
                D_sc03_135_801E6448 = 0x19;
            } else if (D_sc03_135_801EAC47[D_8011511A] == 1) {
                D_sc03_135_801E6448 = 0x16;
            } else {
                D_sc03_135_801E6448 = 0x19;
            }
            D_8011512C = 2;
            PlaySoundId(0x45D, 0);
            return 0;
        case 2:
            func_sc03_135_801E4890();
            if (D_80115126 == 0) {
                D_sc03_135_801E64E8 = 0x14;
                D_sc03_135_801EAC3C = 2;
                D_sc03_135_801EAC40 = D_8011511A - 1;
            } else {
                D_sc03_135_801EAC40 = D_8011511A - 1;
                func_sc03_135_801E48B8(1);
                SetCardSaveData(&D_sc03_135_801EA960, D_sc03_135_801EAC40);
                D_sc03_135_801E64E8 = 0xE;
                D_sc03_135_801EAC3C = 1;
            }
            D_8011512C = 3;
            PlaySoundId(0x45D, 0);
            return 0;
        case 4:
        case 7:
            if ((u16)D_80115118 < 0x47) {
                goto timeout;
            }
            return 0;
        case 9:
            p = &D_sc03_135_801E6448;
            if (*p == 0x1D || *p == 0x21) {
                PlaySoundId(0x473, 0);
                return 1;
            }
            D_sc03_135_801EA954 = 0;
            D_sc03_135_801EA95C = 1;
            D_8011512C = 0;
            *p = D_sc03_135_801E63B0;
            PlaySoundId(0x45D, 0);
            return 0;
        }
    } else if (pad & 0x10) {
        switch (D_8011512C) {
        case 0:
            if (D_sc03_135_801E6448 != 0xB) {
                return 0;
            }
        case 1:
        block_1:
            PlaySoundId(0x473, 0);
            if (D_sc03_135_801EA958 == 0) {
                return 1;
            }
            t = (D_sc03_135_801EA958 == 1) ? 0x1D : 0x21;
            D_8011512C = 9;
            D_sc03_135_801E6448 = t;
            D_sc03_135_801EA954 = D_sc03_135_801EA958;
            D_sc03_135_801EAC4D = 0xFF;
            return 0;
        case 2:
            if (D_80115126 == 0) {
                D_sc03_135_801E6448 = 0xC;
            } else {
                D_sc03_135_801E6448 = 0xD;
            }
            D_8011512C = 1;
            PlaySoundId(0x473, 0);
            return 0;
        case 3:
        case 6:
        case 10:
        case 11:
        case 12:
            return 0;
        case 4:
        case 7:
            if ((u16)D_80115118 < 0x47) {
                goto timeout;
            }
            return 0;
        case 5:
        case 8:
            if (D_80115126 != 0) {
                goto block_1;
            }
            PlaySoundId(0x473, 0);
            return 1;
        case 9:
            p2 = &D_sc03_135_801E6448;
            if (*p2 == 0x1D || *p2 == 0x21) {
                if (D_sc03_135_801EA95C == 0) {
                    *p2 = 0x1A;
                    PlaySoundId(0x45D, 0);
                    return 0;
                }
                D_sc03_135_801EA954 = 0;
                D_8011512C = 0;
                *p2 = D_sc03_135_801E63B0;
                ResetCardState();
                PlaySoundId(0x45D, 0);
                return 0;
            }
            *p2 = (D_sc03_135_801EA958 == 1) ? 0x1D : 0x21;
            PlaySoundId(0x473, 0);
            return 0;
        }
    } else if (pad & 0x20) {
        if (D_8011512C == 5) {
            D_sc03_135_801E64E8 = 0x17;
            D_8011512C = 6;
            PlaySoundId(0x45D, 0);
            D_sc03_135_801EAC3C = 3;
            return 0;
        }
    }
    if (D_8011512C == 4 || D_8011512C == 7 || D_8011512C >= 10) {
        q = (u16 *)&D_80115118;
        if (*q != 0) {
            (*q)--;
        } else {
        timeout:
            D_80115118 = 0;
            if (D_80115126 == 0) {
                if (D_8011512C == 4) {
                    return -1;
                }
                D_sc03_135_801E6448 = 0xC;
            } else {
                if (D_sc03_135_801EA958 != 0 && D_8011512C == 4) {
                    D_sc03_135_801E6448 = (D_sc03_135_801EA958 == 1) ? 0x1D : 0x21;
                    D_8011512C = 9;
                    D_sc03_135_801EA954 = D_sc03_135_801EA958;
                    D_sc03_135_801EAC4D = 0xFF;
                    return 0;
                }
                D_sc03_135_801E6448 = 0xD;
                r = &D_8011512C;
                if (*r == 12) {
                    *r = 1;
                    return 0;
                }
            }
            D_8011512C = 1;
            return 0;
        }
    }
    if (D_8011512C == 1) {
        if (pad & 0x1000) {
            y = D_8011511A;
            D_8011511A = y - 2;
            moved = 1;
            if (D_8011511A == 0 || D_8011511A >= 5) {
                D_8011511A = y + 2;
            }
        }
        if (pad & 0x4000) {
            q = &D_8011511A;
            x = *q;
            *q = x + 2;
            moved = 1;
            if (*q >= 5) {
                *q = x - 2;
            }
        }
        if (pad & 0x8000) {
            q = &D_8011511A;
            x = *q;
            *q = x + 1;
            moved = 1;
            if (*q & 1) {
                *q = x - 1;
            }
        }
        if (pad & 0x2000) {
            q = &D_8011511A;
            x = *q;
            *q = x - 1;
            moved = 1;
            if (!(*q & 1)) {
                *q = x + 1;
            }
        }
        if (moved) {
            PlaySoundId(0x45A, 0);
        }
    }
    return 0;
}

extern struct_14_3 g_FrontOtOrg[];
extern u8 *func_sc03_135_801E46A0();
extern u8 *func_sc03_135_801E3540();

void func_sc03_135_801E3390(void) {
    u8 *p = (u8 *) D_801151D0;
    struct_20_s *e = D_80115130.field_4;
    s16 n;
    s16 i;

    if (D_8011512C == 1 || D_8011512C == 2) {
        p = func_sc03_135_801E46A0(p);
    }
    switch (D_8011512C) {
    case 0:
    case 5:
    case 8:
    case 9:
        n = 1;
        break;
    case 1:
    case 2:
        n = 5;
        break;
    case 3:
    case 4:
    case 10:
    case 11:
        n = 5;
        p = func_sc03_135_801E3540(p, e + 5, 0);
        break;
    case 6:
    case 7:
    case 12:
        n = 1;
        p = func_sc03_135_801E3540(p, e + 5, 0);
        break;
    }
    for (i = 0; i < n; i++) {
        p = func_sc03_135_801E3540(p, e, i);
        e++;
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    AF(p, u32, 0) = 0x02000000;
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], p);
    p += 0x28;
    ((struct_4_6 *)&D_801151D0)->field_0 = (s32) p;
}

typedef struct { s16 field_0; s16 field_2; s32 field_4[4]; } struct_14_s;
typedef struct {
    s16 field_0; s16 field_2; s32 field_4; s32 field_8; s16 field_C; s16 field_E;
    s16 field_10; s16 field_12; s32 field_14; s16 *field_18; s32 *field_1C;
} struct_20_t;
extern s32 D_sc03_135_801E64FC[];
extern u8 D_sc03_135_801E6584[];
extern void SjisToGlyphs();
extern s32 DrawTextLine();
extern s32 DrawQuadRow();
extern s32 DrawBarList();
s32 func_sc03_135_801E3830(s32 *a, s16 b, s16 c, s16 d, s32 *e);
u8 *func_sc03_135_801E3540(u8 *p, struct_20_t *s, s32 idx_0) {
    s16 idx = idx_0;
    u8 buf[0x48];
    s32 v[5];
    s32 c[8];
    s16 dim;
    s16 i;
    s16 j;
    s32 *t;
    s16 *q;
    s32 r;

    if (idx == 0) {
        dim = 0;
    } else {
        dim = (u8)-((u16)D_8011511A != idx);
    }
    if (s->field_14 < 0) {
        SjisToGlyphs(s->field_14, buf);
        p = (u8 *)DrawTextLine(p, buf, s->field_10, s->field_12, 1, dim ? 0x585858 : 0x808080);
    } else {
        t = (s32 *)D_sc03_135_801E64FC[s->field_14];
        for (j = 0; j < D_sc03_135_801E6584[s->field_14]; j++) {
            for (i = 0; i < 5; i++) {
                if (i == 0) {
                    v[0] = ((((s16 *)t)[0] + s->field_10) & 0xFFFF) | ((((s16 *)t)[1] + s->field_12) << 16);
                } else {
                    v[i] = t[i];
                }
            }
            p = (u8 *)DrawQuadRow(dim ? 3 : 2, p, v, 1, 0);
            t += 5;
        }
    }
    i = 0;
    q = s->field_18;
    while ((r = func_sc03_135_801E3830(s->field_1C, s->field_0, idx, i++, c)) != 0) {
        if (r < 0) {
            SjisToGlyphs(r, buf);
            if (dim) {
                c[0] = 0x585858;
            }
            p = (u8 *)DrawTextLine(p, buf, q[0], q[1], 1, c[0]);
        } else {
            t = (s32 *)D_sc03_135_801E64FC[r];
            *t = (u16)q[0] | (q[1] << 16);
            p = (u8 *)DrawQuadRow(dim ? 3 : 2, p, t, 1, 0);
        }
        q += 2;
    }
    p = (u8 *)DrawQuadRow(dim != 0, p, s->field_4, s->field_C, 0);
    return (u8 *)DrawBarList(dim, p, s->field_8, s->field_E, 0);
}

extern u8 D_80115158[];

s32 func_sc03_135_801E3830(s32 *a, s16 b, s16 c, s16 d, s32 *e) {
    s32 n;
    s32 r;

    *e = 0x808080;
    n = D_80115158[c * 2];
    r = 0;
    switch (b) {
    case 0:
    case 5:
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    default:
        if (d < n) {
            r = a[d];
        }
        break;
    }
    return r;
}

extern s16 D_801150D4;
extern u16 D_8011511A;
extern s32 D_sc03_135_801E64E8;
extern u8 D_sc03_135_801EA960;
extern u8 D_sc03_135_801EAC45;
extern u8 D_sc03_135_801EAC48[];
extern u8 D_sc03_135_801EAC4D;
extern s32 D_sc03_135_801EAC58[];
extern void SaveStateSlot();
extern s32 GetCardSlotHeader();
extern s32 GetCardDirWord();
extern void GetCardSaveData();
extern void func_sc03_135_801E40A8();

s32 func_sc03_135_801E38B4(void) {
    s32 r = 0;
    s16 i;
    s16 *p;

    if (D_sc03_135_801EAC54 != 0) {
        if (D_sc03_135_801EAC54 == 1) {
        p = &D_8011512C;
        if (*p == 3 && D_sc03_135_801EAC45 == 8) {
            GetCardSaveData(&D_sc03_135_801EA960);
            func_sc03_135_801E48B8(0);
            SaveStateSlot(0);
            *p = 4;
            D_80115118 = 0x4B;
            D_sc03_135_801E64E8 = 0x15;
            D_801150D4 = D_8011511A;
            PlaySoundId(0xB3B, 0);
        } else {
            *p = 0;
        }
        } else {
            D_8011512C = 10;
            D_sc03_135_801E64E8 = 0x1B;
            D_80115118 = 0x4B;
            D_sc03_135_801EAC3C = 0;
            return;
        }
        D_sc03_135_801EAC3C = 0;
        D_sc03_135_801EAC4D = 0xFF;
    }
    if (D_8011512C == 4 || D_8011512C == 10) {
        return;
    }
    if (D_sc03_135_801EAC45 == D_sc03_135_801EAC4D) {
        return;
    }
    for (i = 0; i < 8; i++) {
        D_sc03_135_801EAC4C[i] = (&D_sc03_135_801EAC44)[i];
    }
    switch (D_sc03_135_801EAC45) {
    case 0:
        break;
    case 1:
        r = 10;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 2:
        r = 11;
        D_801150D4 = 0;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 3:
        r = 0x1F;
        D_801150D4 = 0;
        D_8011512C = 8;
        break;
    case 4:
    case 5:
    case 6:
    block_4:
        r = 0x13;
        D_801150D4 = 0;
        D_8011512C = 8;
        break;
    case 7:
        r = 10;
        break;
    case 8:
        r = 12;
        if (!(D_sc03_135_801EAC48[0] | D_sc03_135_801EAC48[1] | D_sc03_135_801EAC48[2] | D_sc03_135_801EAC48[3])) {
            goto block_4;
        }
        for (i = 0; i < 4; i++) {
            if (D_sc03_135_801EAC48[i] == 1) {
                D_sc03_135_801EAC58[i] = GetCardSlotHeader(i);
            } else {
                D_sc03_135_801EAC58[i] = 0;
            }
        }
        if (D_sc03_135_801EAC58[0] || D_sc03_135_801EAC58[1] || D_sc03_135_801EAC58[2] || D_sc03_135_801EAC58[3]) {
            D_8011512C = 1;
            D_8011511A = (GetCardDirWord() & 3) + 1;
            func_sc03_135_801E40A8();
        } else {
            goto block_4;
        }
        break;
    }
    if (r != 0) {
        D_sc03_135_801E6448 = r;
    }
}

void func_sc03_135_801E3C1C(void) {
    s32 r = 0;
    s16 i;
    s16 *p;
    s16 *q;
    s16 *q6;
    s32 t;
    s16 t8;

    if (D_sc03_135_801EAC54 != 0) {
        if (D_sc03_135_801EAC54 == 1) {
            p = &D_8011512C;
            if (*p == 3) {
                if (D_sc03_135_801EAC45 == 8) {
                    SaveStateSlot(0);
                    *p = 4;
                    D_80115118 = 0x4B;
                    D_801150D4 = 0;
                    D_sc03_135_801E64E8 = 0xF;
                    PlaySoundId(0xB3B, 0);
                } else {
                    *p = 0;
                }
            } else if (D_sc03_135_801EAC45 == 6) {
                *p = 7;
                D_80115118 = 0x4B;
                D_sc03_135_801E64E8 = 0x18;
            } else {
                *p = 0;
            }
        } else {
            if ((D_sc03_135_801EAC3C & 3) == 1) {
                D_8011512C = 11;
                D_sc03_135_801E64E8 = 0x12;
            } else {
                D_8011512C = 12;
                D_sc03_135_801E64E8 = 0x1C;
            }
            D_80115118 = 0x4B;
        }
        D_sc03_135_801EAC3C = 0;
        D_sc03_135_801EAC4D = 0xFF;
    }
    if (D_8011512C == 11 || D_8011512C == 12) {
        return;
    }
    if (D_sc03_135_801EAC45 == D_sc03_135_801EAC4D) {
        return;
    }
    for (i = 0; i < 8; i++) {
        D_sc03_135_801EAC4C[i] = (&D_sc03_135_801EAC44)[i];
    }
    switch (D_sc03_135_801EAC45) {
    case 0:
        break;
    case 1:
        r = 10;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 2:
        r = 11;
        D_801150D4 = 0;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 3:
        q = &D_8011512C;
        t = *q;
        D_801150D4 = 0;
        if (t != 12) {
            r = 0x11;
            *q = 5;
        }
        break;
    case 4:
        r = 11;
        D_801150D4 = 0;
        D_8011512C = 8;
        break;
    case 5:
        r = 0x10;
        D_8011512C = 8;
        break;
    case 6:
        q6 = &D_8011512C;
        D_801150D4 = 0;
        if (*q6 != 6 && *q6 != 7 && *q6 != 11) {
            r = 0xD;
            *q6 = 1;
        }
        for (i = 0; i < 4; i++) {
            D_sc03_135_801EAC58[i] = 0;
        }
        D_8011511A = 1;
        func_sc03_135_801E40A8();
        break;
    case 7:
        r = 10;
        break;
    case 8:
        if (D_8011512C != 11 && D_8011512C != 3 && D_8011512C != 4) {
            r = 0xD;
        }
        for (i = 0; i < 4; i++) {
            if (D_sc03_135_801EAC48[i] == 1) {
                D_sc03_135_801EAC58[i] = GetCardSlotHeader(i);
            } else {
                D_sc03_135_801EAC58[i] = 0;
            }
        }
        q = &D_8011512C;
        if (*q == 0) {
            t8 = D_801150D4;
            *q = 1;
            if (t8 > 0 && t8 < 5) {
                D_8011511A = t8;
            } else {
                D_8011511A = (GetCardDirWord() & 3) + 1;
            }
            if (!(D_sc03_135_801EAC58[0] || D_sc03_135_801EAC58[1] || D_sc03_135_801EAC58[2] || D_sc03_135_801EAC58[3])) {
                D_801150D4 = 0;
                D_8011511A = 1;
            }
        }
        func_sc03_135_801E40A8();
        break;
    }
    if (r != 0) {
        D_sc03_135_801E6448 = r;
    }
}

typedef struct { s8 field_0, field_1, field_2; } struct_3;
extern u8 *D_sc03_135_801E632C[];
extern u8 *D_sc03_135_801E634C;
extern u8 **D_sc03_135_801E6424[];
extern s32 D_sc03_135_801E65B8[];
extern u16 *D_sc03_135_801E6390[];
extern struct_3 D_sc03_135_801E26C0;
extern char *strcpy();
s32 func_sc03_135_801E45C0(s32 n, s32 sh);
void func_sc03_135_801E4628(u32 a, s16 n, u16 *out, s16 lead);

void func_sc03_135_801E40A8(void) {
    s16 j;
    s16 i;
    s16 k;
    u8 *e;
    u8 **s;
    u32 a;
    u16 b;
    s32 c;
    s32 v;
    u16 *t;

    for (j = 0; j < 4; j++) {
        e = (u8 *) D_sc03_135_801EAC58[j];
        s = D_sc03_135_801E6424[j];
        if (e != NULL) {
            for (i = 0; i < 7; i++) {
                strcpy(s[i], D_sc03_135_801E632C[i]);
                switch (i) {
                case 0:
                    for (k = 0; k < 5; k++) {
                        if (AF(e, s16, 8) < D_sc03_135_801E65B8[k]) {
                            break;
                        }
                    }
                    if (AF(e, u8, 0x4E) != 0) {
                        if (AF(e, s32, 0) == 0) {
                            k = 0x1A;
                        } else {
                            k = 0x1C;
                        }
                    }
                    ((s32 *) s)[0] = k + 4;
                    break;
                case 1:
                    a = AF(e, u8, 7);
                    if (a >= 100) {
                        a = 99;
                    }
                    b = AF(e, u8, 6);
                    if (b >= 60) {
                        b = 59;
                    }
                    func_sc03_135_801E4628(0xB00000 | func_sc03_135_801E45C0((u16) a, 0x18) | func_sc03_135_801E45C0(b, 0xC), 5, (u16 *) (s[1] + 0x12), 0);
                    break;
                case 2:
                    a = AF(e, u16, 0x34);
                    if (a >= 1000) {
                        a = 999;
                    }
                    func_sc03_135_801E4628(func_sc03_135_801E45C0((u16) a, 0x14), 3, (u16 *) (s[2] + 8), 1);
                    c = AF(e, u8, 0x42);
                    if (c >= 7) {
                        c = 6;
                    }
                    t = D_sc03_135_801E6390[c];
                    AF(s[2], u16, 0x10) = *t++;
                    AF(s[2], u16, 0x12) = *t++;
                    AF(s[2], u16, 0x14) = *t;
                    a = AF(e, u8, 0x39);
                    if (a >= 24) {
                        a = 23;
                    }
                    b = AF(e, u8, 0x38);
                    if (b >= 60) {
                        b = 59;
                    }
                    func_sc03_135_801E4628(0xB00000 | func_sc03_135_801E45C0((u16) a, 0x18) | func_sc03_135_801E45C0(b, 0xC), 5, (u16 *) (s[2] + 0x18), 0);
                    break;
                case 3:
                    a = AF(e, u16, 0x3C);
                    if (a >= 1000) {
                        a = 999;
                    }
                    b = AF(e, u16, 0x3A);
                    if (b >= 1000) {
                        b = 999;
                    }
                    v = func_sc03_135_801E45C0((u16) a, 0x14);
                    if (v == 0) {
                        v = 0xD00000;
                    }
                    func_sc03_135_801E4628(v | (0xC0000 | func_sc03_135_801E45C0(b, 4)), 7, (u16 *) (s[3] + 6), 1);
                    break;
                case 4:
                    a = AF(e, u16, 0x40);
                    if (a >= 1000) {
                        a = 999;
                    }
                    b = AF(e, u16, 0x3E);
                    if (b >= 1000) {
                        b = 999;
                    }
                    v = func_sc03_135_801E45C0((u16) a, 0x14);
                    if (v == 0) {
                        v = 0xD00000;
                    }
                    func_sc03_135_801E4628(v | (0xC0000 | func_sc03_135_801E45C0(b, 4)), 7, (u16 *) (s[4] + 6), 1);
                    break;
                case 5:
                    a = AF(e, u32, 0x14);
                    if (a > 99999) {
                        a = 99999;
                    }
                    func_sc03_135_801E4628(func_sc03_135_801E45C0(a, 0xC), 5, (u16 *) (s[5] + 2), 1);
                    break;
                case 6:
                    a = AF(e, u16, 0xC);
                    if (a >= 36) {
                        a = 35;
                    }
                    v = func_sc03_135_801E45C0((u16) a, 0x18);
                    if (v == 0) {
                        v = 0xD000000;
                    }
                    func_sc03_135_801E4628(v, 2, (u16 *) (s[6] + 0x10), 1);
                    break;
                }
            }
        } else {
            for (i = 0; i < 7; i++) {
                if (i == 0) {
                    ((s32 *) s)[i] = 4;
                } else if (i == 1) {
                    strcpy(s[i], D_sc03_135_801E632C[i]);
                } else if (i == 4) {
                    strcpy(s[i], D_sc03_135_801E634C);
                } else {
                    *(struct_3 *) s[i] = D_sc03_135_801E26C0;
                }
            }
        }
    }
}

s32 func_sc03_135_801E45C0(s32 n, s32 sh) {
    s32 r = 0;
    s32 m = n;
    s32 k = 0;

    while (m >= 10) {
        n = n / 10;
        r |= (m - (n * 2 + n * 8)) << k;
        m = n;
        k += 4;
    }
    r |= m << k;
    return r << sh;
}

extern u16 *D_sc03_135_801E6350[];

void func_sc03_135_801E4628(u32 a, s16 n, u16 *out, s16 lead) {
    s16 i;
    u32 h;
    s16 d;

    for (i = 0; i < n; i++) {
        h = a >> 28;
        d = h;
        if (lead) {
            if (h != 0) {
                lead = 0;
            } else {
                d = 10;
            }
        }
        a <<= 4;
        *out++ = *D_sc03_135_801E6350[d];
    }
}

extern u16 D_sc03_135_801E65A8[];
extern void SetDrawMode(void *p, s32 a, s32 b, s32 c, s32 d);
u8 *func_sc03_135_801E46A0(u8 *p) {
    u16 *t;
    u16 add;
    s32 x;

    t = AF(&D_80115130.field_4[(s16)D_8011511A], u16 *, 0x18);
    if (D_8011512C == 1) {
        add = D_sc03_135_801E65A8[D_80115116 & 7];
    } else {
        add = 0;
    }
    x = add - 0x60;
    AF(p, s32, 0) = 0x04000000;
    AF(p, u8, 0xC) = 0x70;
    AF(p, u8, 0xD) = 0x10;
    AF(p, s32, 4) = 0x64808080;
    
    AF(p, s16, 0xE) = 0x4056;
    
    AF(p, s16, 8) = t[0] + x;
    AF(p, s16, 0xA) = t[1] - 2;
    AF(p, s16, 0x12) = 0x10;
    AF(p, s16, 0x10) = 0x10;
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], p);
    p = (void *)((u8 *)p + 0x14);
    SetDrawMode(p, 0, 0, 0x15, 0);
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], p);
    return (u8 *)p + 8;
}

extern u8 D_sc03_135_801EA960;

s32 func_sc03_135_801E4890(s32 arg0) {
    return ZeroFill((s32) &D_sc03_135_801EA960, 0x2DC);
}

typedef struct { s32 field_0[0x26]; } struct_98;
extern struct_98 g_Status;
extern u16 g_ItemValues[];
extern u8 g_Flags[];
extern u8 g_Vars[];
extern struct_4_3 g_VarBlock60[];
extern struct_98 D_sc03_135_801EA984;
extern u16 D_sc03_135_801EAA1C[];
extern u8 D_sc03_135_801EAA9C[];
extern u8 D_sc03_135_801EAADC[];
extern struct_4_3 D_sc03_135_801EABDC[];

void func_sc03_135_801E48B8(s16 save) {
    s16 i;

    if (save == 0) {
        g_Status = D_sc03_135_801EA984;
        for (i = 0; i < 64; i++) {
            g_ItemValues[i] = D_sc03_135_801EAA1C[i];
        }
        for (i = 0; i < 64; i++) {
            g_Flags[i] = D_sc03_135_801EAA9C[i];
        }
        for (i = 0; i < 256; i++) {
            g_Vars[i] = D_sc03_135_801EAADC[i];
        }
        for (i = 0; i < 24; i++) {
            g_VarBlock60[i] = D_sc03_135_801EABDC[i];
        }
    } else {
        D_sc03_135_801EA984 = g_Status;
        for (i = 0; i < 64; i++) {
            D_sc03_135_801EAA1C[i] = g_ItemValues[i];
        }
        for (i = 0; i < 64; i++) {
            D_sc03_135_801EAA9C[i] = g_Flags[i];
        }
        for (i = 0; i < 256; i++) {
            D_sc03_135_801EAADC[i] = g_Vars[i];
        }
        for (i = 0; i < 24; i++) {
            D_sc03_135_801EABDC[i] = g_VarBlock60[i];
        }
    }
}

extern void AdvanceClockHours();
extern void UpdateClockPhase();

void func_sc03_135_801E4BA4(void) {
    AdvanceClockHours();
    UpdateClockPhase();
}

extern u8 D_sc03_135_801E6644;
extern void StartFade();
extern void func_80175414();
extern s32 D_80126B10;

s32 func_sc03_135_801E4BCC(u8 *arg0) {
    D_80126B10 = (s32) &D_sc03_135_801E6644;
    StartFade(0);
    func_80175414();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s32 FadeStep();

s32 func_sc03_135_801E4C24(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

extern s32 D_sc03_135_801EAC68;
extern void StartPlayerAction();
void func_sc03_135_801E4F30(u8 *arg0);

s32 func_sc03_135_801E4C48(u8 *arg0) {
    D_sc03_135_801EAC68 = 0;
    StartPlayerAction((s32) func_sc03_135_801E4F30, 0x01000000);
    AF(arg0, s32, 0x28) = 0x10;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern void StartMapChangeFade();
extern void ClearTimeChime();
extern s32 GetVar();
extern s32 IsProgress200To599();
extern void SoundCmd1();

s32 func_sc03_135_801E4C9C(u8 *o) {
    if (--AF(o, s32, 0x28) == -1) {
        StartMapChangeFade();
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        if (!(GetVar(0xCE) & 0xFF) && IsProgress200To599() == 0) {
            PlaySoundId(0x1D, 0);
            SoundCmd1(1);
        }
        o[0x15]++;
    }
    return 0;
}

extern void StepMapChangeFade();

void func_sc03_135_801E4D3C(void) {
    StepMapChangeFade();
}

extern void (*D_sc03_135_801E65E8[])();

void func_sc03_135_801E4D5C(u8 *arg0) {
    D_sc03_135_801E65E8[AF(arg0, u8, 0x15)]();
}

extern s32 (*D_sc03_135_801E65F0[])();
extern s32 func_sc03_135_801E5324();

s32 func_sc03_135_801E4D98(u8 *o) {
    if (D_sc03_135_801E65F0[o[0x15]]() != 0 && D_sc03_135_801EAC68 != 0) {
        return 1;
    }
    D_sc03_135_801EAC68 = func_sc03_135_801E5324();
    return 0;
}

extern void (*D_sc03_135_801E6674[])();
void func_sc03_135_801E4E04(u8 *arg0);

void func_sc03_135_801E4E04(u8 *arg0) {
    D_sc03_135_801E6674[AF(arg0, u8, 0x214)]();
}

extern void NextPhase();
extern void func_80175414();

void func_sc03_135_801E4E40(s32 arg0) {
    NextPhase(arg0);
    func_80175414();
}

extern u8 D_sc03_135_801E2840;
extern s32 WalkToPoint();

void func_sc03_135_801E4E68(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc03_135_801E2840;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

extern u8 D_sc03_135_801E6644;
extern s32 TestPadAll();
extern void RequestMapChange();

void func_sc03_135_801E4ED0(s32 arg0) {
    if ((TestPadAll(0, 0, 0x80) << 0x10) != 0) {
        RequestMapChange((s32) &D_sc03_135_801E6644);
        NextPhase(arg0);
    }
}

void func_sc03_135_801E4F28(void) {
}

extern void (*D_sc03_135_801E6684[])();

void func_sc03_135_801E4F30(u8 *arg0) {
    D_sc03_135_801E6684[AF(arg0, u8, 0x214)]();
}

void func_sc03_135_801E4F6C(s32 arg0) {
    NextPhase(arg0);
}

extern u8 D_sc03_135_801E2848;

void func_sc03_135_801E4F8C(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc03_135_801E2848;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

void func_sc03_135_801E4FF4(void) {
}

extern u8 g_Camera;
extern s32 g_CameraProj;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void SetCameraUpdate();
void func_sc03_135_801E50C0(s32 arg0);
extern void SnapCamera();

void func_sc03_135_801E4FFC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x82;
    g_CameraAngleTarget = 0xFB1;
    D_8012696A = 0x7C7;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x36;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_135_801E50C0, 0);
    func_sc03_135_801E50C0((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -0x1B0;
}

extern void (*D_sc03_135_801E6690[])();

void func_sc03_135_801E50C0(s32 arg0) {
    D_sc03_135_801E6690[AF(arg0, u8, 4)]();
}

extern void func_sc03_135_801E5124();

void func_sc03_135_801E50FC(s32 arg0) {
    func_sc03_135_801E5124(arg0, (s32) &D_801274E8);
}

extern u8 g_Player;
extern u16 D_sc03_135_801E6698[];
extern s16 D_sc03_135_801E6694[];
extern s32 GetObjPadPressed();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

void func_sc03_135_801E5124(u8 *o, s16 *p) {
    MATRIX m;
    SVECTOR v;
    SVECTOR r;

    if (GetObjPadPressed(&g_Player) & 3) {
        o[5] = (o[5] + 1) & 1;
        AF(o, s32, 0xC) = D_sc03_135_801E6694[o[5]];
        AF(o, u16, 0x2E) = D_sc03_135_801E6698[o[5]];
    }
    AF(o, s32, 8) = (s16) EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 10);
    AF(o, s32, 0x10) = (s16) EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 10);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 10);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 10);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 10);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + p[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + p[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + p[2];
    RotMatrixZYX((SVECTOR *) (o + 0x18), &m);
    m.t[0] = AF(o, s16, 0x28) + p[0];
    m.t[1] = AF(o, s16, 0x2A) + p[1];
    m.t[2] = AF(o, s16, 0x2C) + p[2];
    v.vx = 0;
    v.vy = 0;
    v.vz = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.vx;
    AF(o, s32, 0x40) = r.vy;
    AF(o, s32, 0x44) = r.vz;
}

s32 func_sc03_135_801E531C(void) {
    return 0x27;
}

extern u8 D_800AF040;
extern s32 RequestLoad();

s32 func_sc03_135_801E5324(void) {
    return RequestLoad(0, 0, (s32) &D_800AF040, 0, 0);
}

extern u8 D_sc03_135_801E672C;
extern u8 D_sc03_135_801E6798;
extern u8 D_sc03_135_801E67B0;
extern s32 UpdateScript();
extern void RunScript();
extern void func_sc03_124_80185B88();
extern s32 func_sc03_124_80185B78();
extern void func_80174438();

void func_sc03_135_801E5358(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        switch (UpdateScript(o)) {
        case 1:
            AF(o, u16, 0x34) = 2;
            func_sc03_124_80185B88(4);
            break;
        case 2:
            RunScript(o, &D_sc03_135_801E6798);
            AF(o, u16, 0x34) = 0;
            break;
        case 3:
            RunScript(o, &D_sc03_135_801E67B0);
            AF(o, u16, 0x34) = 3;
            break;
        }
        break;
    case 1:
        break;
    case 2:
        if ((s16) func_sc03_124_80185B78() != 0) {
            func_sc03_135_801E2864();
            AF(o, u16, 0x34) = 4;
        } else {
            RunScript(o, &D_sc03_135_801E672C);
            AF(o, u16, 0x34) = 0;
        }
        break;
    case 3:
        if (UpdateScript(o) != 0) {
            func_80174438((*(s32 * *)&D_80126B10));
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 4:
        if ((s16) func_sc03_135_801E288C() != 0) {
            AF(o, u16, 0x34) = 2;
            func_sc03_124_80185B88(4);
        }
        break;
    }
}

extern void (*D_sc03_135_801E67E0[])();

void func_sc03_135_801E54A4(u8 *arg0) {
    D_sc03_135_801E67E0[AF(arg0, u16, 2)]();
}

extern s32 D_sc03_135_801EAC6C;

void func_sc03_135_801E54E0(void) {
    D_sc03_135_801EAC6C = 0;
}

s32 func_sc03_135_801E54F0(s32 arg0, s32 arg1) {
    D_sc03_135_801EAC6C = 1;
    return 1;
}

s32 func_sc03_135_801E5504(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return D_sc03_135_801EAC6C;
}

extern void *D_sc03_124_801E256C;
extern u8 D_sc03_135_801E67E8;
extern u8 D_sc03_135_801E6828;
extern s32 GetFlag();

void func_sc03_135_801E5514(void) {
    s32 t;
    s32 r;

    t = GetProgress();
    if ((u32) (t - 200) >= 100 && (t < 300 || !(GetFlag(250) & 0xFF))) {
        r = 1;
    } else {
        r = 0;
    }
    if (r != 0) {
        AF(D_sc03_124_801E256C, void *, 4) = &D_sc03_135_801E67E8;
    } else {
        AF(D_sc03_124_801E256C, void *, 4) = &D_sc03_135_801E6828;
    }
}

extern u8 D_sc03_135_801E68BC;
extern u8 D_sc03_135_801E68F0;

void func_sc03_135_801E559C(void) {
    s32 t;
    s32 r;

    t = GetProgress();
    if ((u32) (t - 200) >= 100 && (t < 300 || !(GetFlag(250) & 0xFF))) {
        r = 1;
    } else {
        r = 0;
    }
    if (r != 0) {
        AF(D_sc03_124_801E256C, void *, 4) = &D_sc03_135_801E68BC;
    } else {
        AF(D_sc03_124_801E256C, void *, 4) = &D_sc03_135_801E68F0;
    }
}

extern void SetFlag();

s32 func_sc03_135_801E5624(void) {
    s32 t;
    s32 r;

    t = GetProgress();
    if ((u32) (t - 200) >= 100 && (t < 300 || !(GetFlag(250) & 0xFF))) {
        r = 1;
    } else {
        r = 0;
    }
    if (r != 0) {
        if (!(GetFlag(0x114) & 0xFF)) {
            SetFlag(0x114, 1);
            return 1;
        }
    }
    return 0;
}

extern s32 D_sc03_135_801E6754[];
extern s32 D_sc03_135_801E6768[];
extern s32 D_sc03_135_801E6784[];
extern u8 D_sc03_135_801E6DF4;
extern u8 D_sc03_135_801E6E40;
extern s32 func_sc03_124_80184428();
extern s32 func_sc03_124_801844F8();
extern s32 func_sc03_124_8018456C();
extern void func_sc03_124_801845C8();

void func_sc03_135_801E56A8(u8 *arg0) {
    s32 t;
    s32 r;

    t = GetProgress();
    if (t < 600) {
        t = GetProgress();
        if ((u32) (t - 200) >= 100 && (t < 300 || !(GetFlag(250) & 0xFF))) {
            r = 1;
        } else {
            r = 0;
        }
        if (r != 0) {
            AF(arg0, s32, 0xE4) = D_sc03_135_801E6754[func_sc03_124_80184428()];
        } else if ((u32) GetProgress() < 300) {
            AF(arg0, void *, 0xE4) = &D_sc03_135_801E6DF4;
        } else {
            AF(arg0, void *, 0xE4) = &D_sc03_135_801E6E40;
        }
    } else if (t < 900) {
        AF(arg0, s32, 0xE4) = D_sc03_135_801E6768[func_sc03_124_801844F8()];
    } else {
        AF(arg0, s32, 0xE4) = D_sc03_135_801E6784[func_sc03_124_8018456C()];
        func_sc03_124_801845C8();
    }
}

extern u8 D_sc03_124_801BEAF8;
extern u8 D_sc03_135_801E669C;
extern u8 D_sc03_135_801E66CC;
extern u8 D_sc03_124_801CEA24;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern void SetScript();
extern void PlaceObject();
extern void StartEvent();

void func_sc03_135_801E57C4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_124_801CEA24);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s16, 2) = 1;
    SetScript((s32) arg0, (s32) &D_sc03_124_801BEAF8);
    PlaceObject((s32) arg0, (s32) &D_sc03_135_801E669C);
    AF(arg0, s16, 0x34) = 0;
    StartEvent((s32) arg0, (s32) &D_sc03_135_801E66CC);
}

extern u8 g_ClockHour;
extern u8 D_sc03_135_801E6C68;
extern u8 D_sc03_135_801E6D8C;
extern struct_10_8 D_sc03_135_801EAC70[];
extern s32 D_sc03_135_801EADF0;
s32 func_sc03_135_801E5A1C(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_135_801E5A34(s32 a, s32 b, s32 c);
s32 func_sc03_135_801E5A7C(void);
void func_sc03_135_801E5AAC(void);
void func_sc03_135_801E5AFC(void);
void func_sc03_135_801E5B3C(void);
struct_10_8 *func_sc03_135_801E585C(void) {
    s32 t;
    u8 *p;

    p = (u8 *)&g_Status;
    func_sc03_135_801E5A7C();
    t = GetProgress();
    if (t >= 200) {
        if (t < 600) {
            if (func_sc03_135_801E5A1C(g_ClockHour, 13, 24) && (u32) (t - 310) < 70) {
                func_sc03_135_801E5A34(10, (s32)&D_sc03_135_801E6C68, (s32)func_sc03_135_801E5AFC);
                SetFlag(0x112, 1);
            } else {
                func_sc03_135_801E5A34(10, 0, 0);
            }
            if (func_sc03_135_801E5A1C(p[0x39], 13, 24) == 0 || (u32) (t - 310) >= 70) {
                func_sc03_135_801E5A34(11, 0, 0);
            } else {
                func_sc03_135_801E5A34(11, (s32)&D_sc03_135_801E6D8C, (s32)func_sc03_135_801E5B3C);
            }
        } else {
            func_sc03_135_801E5A34(10, 0, 0);
            func_sc03_135_801E5A34(11, 0, 0);
        }
    } else {
        func_sc03_135_801E5A34(10, 0, 0);
        func_sc03_135_801E5A34(11, 0, 0);
    }
    func_sc03_135_801E5AAC();
    if (D_sc03_135_801EADF0 == 0) {
        return 0;
    }
    return D_sc03_135_801EAC70;
}


s32 func_sc03_135_801E5998(s32 a) {
    s32 i;

    func_sc03_135_801E585C();
    for (i = 0; i < D_sc03_135_801EADF0; i++) {
        if (D_sc03_135_801EAC70[i].field_8 == a) {
            return D_sc03_135_801EAC70[i].field_4;
        }
    }
    return 0;
}

s32 func_sc03_135_801E5A1C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 >= arg1) {
        var_v0 = arg0 < arg2;
    }
    return var_v0;
}

void func_sc03_135_801E5A34(s32 a, s32 b, s32 c) {
    D_sc03_135_801EAC70[D_sc03_135_801EADF0].field_8 = a;
    D_sc03_135_801EAC70[D_sc03_135_801EADF0].field_4 = b;
    D_sc03_135_801EAC70[D_sc03_135_801EADF0].field_C = c;
    D_sc03_135_801EADF0++;
}

extern struct_10_8 D_sc03_135_801EAC70[];
extern s32 D_sc03_135_801EADF0;

s32 func_sc03_135_801E5A7C(void) {
    s32 temp_v0;

    temp_v0 = ZeroFill((s32) &D_sc03_135_801EAC70, 0x180);
    D_sc03_135_801EADF0 = 0;
    return temp_v0;
}

void func_sc03_135_801E5AAC(void) {
    struct_10_8 *p = (((struct_10_8 *)&D_sc03_135_801EAC70));
    s32 i;

    for (i = 0; i < D_sc03_135_801EADF0 - 1; i++, p++) {
        p->field_0 = p + 1;
    }
}

extern void SetFlag();
extern s32 GetProgress();
extern void SetProgress();

void func_sc03_135_801E5AFC(void) {
    SetFlag(0xFD, 1);
    if (GetProgress() == 0x136) {
        SetProgress(0x140);
    }
}

void func_sc03_135_801E5B3C(void) {
    SetFlag(0xFE, 1);
    if (GetProgress() == 0x136) {
        SetProgress(0x140);
    }
}
