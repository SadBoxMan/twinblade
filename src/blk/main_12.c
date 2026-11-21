#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_main_12_8017BE9C(void) {
}

void func_main_12_8017BEA4(void) {
}

void func_main_12_8017BEAC(void) {
}

void func_main_12_8017BEB4(void) {
}

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
typedef struct { u16 field_0; u16 field_2; u8 field_4[0x1C]; } struct_20_s;
typedef struct { s32 field_0; struct_20_s *field_4; u8 field_8[0x20]; s16 field_28[6]; } struct_34_s;
typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0xC];
    u8 field_1C[0x24]; s16 field_40[3];
} struct_46;
typedef struct { s32 field_0[0x26]; } struct_98;
typedef struct struct_10_8 { struct struct_10_8 *field_0; s32 field_4; s32 field_8; s32 field_C; } struct_10_8;
extern s16 D_main_12_801853F0[];
extern s32 ZeroFill();

s32 func_main_12_8017BEBC(void) {
    return ZeroFill((s32) &D_main_12_801853F0, 8);
}

extern s16 D_main_12_801853F2;
extern void (*D_main_12_80181D6C[])();

s32 func_main_12_8017BEE4(void) {
    D_main_12_80181D6C[D_main_12_801853F0[0]]();
    if (D_main_12_801853F2 != 0) { return D_main_12_801853F2; } return 0;
}

s32 func_main_12_8017C008(s32 arg0, s32 arg1);

void func_main_12_8017BF38(void) {
    func_main_12_8017C008(0, 0);
    D_main_12_801853F0[0]++;
}

s16 func_main_12_8017BFF8(void);
extern s32 PlaySoundId();
extern u16 GetMusicVolume();
extern u16 GetEffectsVolume();
extern s32 GetSoundMode();
extern void func_80145934();
extern void MapStart();

void func_main_12_8017BF70(void) {
    if ((D_main_12_801853F2 = func_main_12_8017BFF8()) < 0) {
        PlaySoundId(0x21, GetMusicVolume());
        PlaySoundId(0x22, GetEffectsVolume());
        PlaySoundId(GetSoundMode() == 0 ? 0xC : 0xB, 0);
        func_80145934();
        MapStart();
    }
}

extern s16 D_main_12_801857E8;

s16 func_main_12_8017BFF8(void) {
    return D_main_12_801857E8;
}

extern s8 D_800B9A13;
extern s8 D_800B9A15;
extern s16 D_80115110;
extern u16 D_80115112;
extern s16 D_80115126;
extern s16 D_main_12_801857EC;
extern s16 D_main_12_801857F0;
extern void func_main_12_8017C080();
extern s32 PlaySoundId();
extern s32 *D_8011DB24;

s32 func_main_12_8017C008(s32 arg0, s32 arg1) {
    D_800B9A15 = 1;
    D_800B9A13 = 5;
    D_80115110 = 4;
    D_80115126 = (s16) arg0;
    D_main_12_801857F0 = (s16) arg1;
    D_main_12_801857EC = (s16) arg1;
    D_80115112 = 0;
    D_8011DB24 = &func_main_12_8017C080;
    return PlaySoundId(0x1E, 0);
}

extern u16 D_80115116;
extern void (*D_main_12_801827C0[])();
extern void StageModeNop();

void func_main_12_8017C080(void) {
    D_main_12_801827C0[D_80115112]();
    StageModeNop();
    D_80115116 += 1;
}

extern void OpenSubscreen();
void func_main_12_8017C120();
extern void ResetCardState();

void func_main_12_8017C0DC(void) {
    u16 *p;

    OpenSubscreen(5);
    func_main_12_8017C120();
    ResetCardState();
    p = &D_80115112;
    (*p)++;
}

extern s16 D_80115118;
extern s16 D_8011512C;
extern struct_34_s D_80115130;
extern s32 D_main_12_801825A0;
extern s32 D_main_12_80182638;
extern s16 D_main_12_801857F4;
extern s32 D_main_12_80185AD4;
extern s32 D_main_12_801826E4[];
extern u8 D_main_12_80185AE4[];

void func_main_12_8017C120(void) {
    s16 i;

    D_main_12_80185AD4 = 0;
    for (i = 0; i < 8; i++) {
        D_main_12_80185AE4[i] = 0xFF;
    }
    D_main_12_801857E8 = 0;
    D_main_12_801857F4 = 0;
    D_80115118 = 0;
    if (D_main_12_801857EC == 0) {
        D_8011512C = 0;
        D_main_12_80182638 = D_main_12_801825A0;
    } else {
        D_8011512C = 9;
        D_main_12_80182638 = 0x1A;
    }
    D_80115130.field_0 = 0;
    D_80115130.field_4 = (struct_20_s *) D_main_12_801826E4[D_80115126];
    for (i = 0; i < 6; i++) {
        D_80115130.field_8[i] = D_80115130.field_4[i].field_0;
        D_80115130.field_28[i] = D_80115130.field_4[i].field_2;
    }
}

void func_main_12_8017C24C(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

extern u16 D_800B9A02;
extern s32 D_801151D0;
extern s32 D_main_12_80185AD8;
extern u8 D_main_12_80185ADC;
extern s32 D_main_12_80185AEC;
extern s32 D_801151C8[];
extern s32 CardStep();
extern s32 func_main_12_8017CF3C();
extern void func_main_12_8017D2A4();
extern s16 func_main_12_8017C3BC();
extern void func_main_12_8017CA18();

void func_main_12_8017C268(void) {
    s16 r;
    u16 *p;
    u8 unused[8]; /* MATCH-TRICK: frame */

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_main_12_801857EC == 0) {
        D_main_12_80185AEC = CardStep(D_main_12_80185AD4, D_main_12_80185AD8, &D_main_12_80185ADC);
        if (D_80115126 == 0) {
            func_main_12_8017CF3C();
        } else {
            func_main_12_8017D2A4();
        }
    }
    r = func_main_12_8017C3BC();
    func_main_12_8017CA18();
    if (r != 0) {
        p = &D_80115112;
        D_main_12_801857E8 = r;
        D_800B9A15 = 0;
        (*p)++;
    }
}

void func_main_12_8017C348(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

extern u16 D_80115114;
extern void CloseSubscreen();

void func_main_12_8017C364(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        CloseSubscreen();
        return;
    }
    D_80115112 += 1;
}

extern u8 D_main_12_801857F8;
extern u16 D_8011511A;
extern u8 D_main_12_80185ADF[];
extern s32 D_main_12_801826D8;
extern u8 D_main_12_80185AE5;
extern s32 GetPadPressedDirWide();
extern s32 GetPadHeldDirWide();
extern void func_8014168C();
extern void SetCardSaveData();
extern s32 func_main_12_8017DF18();
void func_main_12_8017DF40(s16 save);
s16 func_main_12_8017C3BC(void) {
    s32 pad;
    s16 sel;
    s32 t;
    s16 st;
    s32 *p;
    s32 *p2;
    u16 *q;
    s16 *r;

    pad = GetPadPressedDirWide(0);
    GetPadHeldDirWide(0);
    sel = 0;
    func_8014168C((s16)D_8011511A);
    if (pad & 0x40) {
        switch (D_8011512C) {
        case 1:
            if (D_80115126 == 0) {
                if (D_main_12_80185ADF[D_8011511A] != 1) {
                    PlaySoundId(0x472, 0);
                    return 0;
                }
                D_main_12_80182638 = 0x19;
            } else if (D_main_12_80185ADF[D_8011511A] == 1) {
                D_main_12_80182638 = 0x16;
            } else {
                D_main_12_80182638 = 0x19;
            }
            D_8011512C = 2;
            PlaySoundId(0x45D, 0);
            return 0;
        case 2:
            func_main_12_8017DF18();
            if (D_80115126 == 0) {
                D_main_12_801826D8 = 0x14;
                D_main_12_80185AD4 = 2;
                D_main_12_80185AD8 = D_8011511A - 1;
            } else {
                D_main_12_80185AD8 = D_8011511A - 1;
                func_main_12_8017DF40(1);
                SetCardSaveData(&D_main_12_801857F8, D_main_12_80185AD8);
                D_main_12_801826D8 = 0xE;
                D_main_12_80185AD4 = 1;
            }
            D_8011512C = 3;
            PlaySoundId(0x45D, 0);
            return 0;
        case 4:
        case 7:
            if (*(u16 *)&D_80115118 >= 0x47) {
                return 0;
            }
            goto timeout;
        case 5:
            break;
        case 9:
            p = &D_main_12_80182638;
            if (*p == 0x1D || *p == 0x21) {
                PlaySoundId(0x473, 0);
                return 1;
            }
            D_main_12_801857EC = 0;
            D_main_12_801857F4 = 1;
            D_8011512C = 0;
            *p = D_main_12_801825A0;
            PlaySoundId(0x45D, 0);
            return 0;
        case 0:
        case 3:
        case 6:
        case 8:
        case 10:
        case 11:
        case 12:
            return 0;
        }
    } else if (pad & 0x10) {
        switch (D_8011512C) {
        case 0:
            if (D_main_12_80182638 != 0xB) {
                return 0;
            }
        case 1:
        pick:
            PlaySoundId(0x473, 0);
            if (D_main_12_801857F0 == 0) {
                return 1;
            }
            t = (D_main_12_801857F0 == 1) ? 0x1D : 0x21;
            D_8011512C = 9;
            D_main_12_80182638 = t;
            D_main_12_801857EC = D_main_12_801857F0;
            D_main_12_80185AE5 = 0xFF;
            return 0;
        case 2:
            if (D_80115126 == 0) { D_main_12_80182638 = 0xC; } else { D_main_12_80182638 = 0xD; }
            D_8011512C = 1;
            PlaySoundId(0x473, 0);
            return 0;
        case 4:
        case 7:
            if (*(u16 *)&D_80115118 >= 0x47) {
                return 0;
            }
            goto timeout;
        case 5:
        case 8:
            if (D_80115126 != 0) {
                goto pick;
            }
            PlaySoundId(0x473, 0);
            return 1;
        case 9:
            p2 = &D_main_12_80182638;
            if (*p2 == 0x1D || *p2 == 0x21) {
                if (D_main_12_801857F4 == 0) {
                    *p2 = 0x1A;
                    PlaySoundId(0x45D, 0);
                    return 0;
                }
                D_main_12_801857EC = 0;
                D_8011512C = 0;
                *p2 = D_main_12_801825A0;
                ResetCardState();
                PlaySoundId(0x45D, 0);
                return 0;
            }
            *p2 = (D_main_12_801857F0 == 1) ? 0x1D : 0x21;
            PlaySoundId(0x473, 0);
            return 0;
        case 3:
        case 6:
        case 10:
        case 11:
        case 12:
            return 0;
        }
    } else if ((pad & 0x20) && D_8011512C == 5) {
        D_main_12_801826D8 = 0x17;
        D_8011512C = 6;
        PlaySoundId(0x45D, 0);
        D_main_12_80185AD4 = 3;
        return 0;
    }
    st = D_8011512C;
    if (st == 4 || st == 7 || st >= 10) {
        q = (u16 *)&D_80115118;
        if (*q != 0) {
            *q = *q - 1;
        } else {
    timeout:
        D_80115118 = 0;
        if (D_80115126 == 0) {
            if (D_8011512C == 4) {
                return -1;
            }
            D_main_12_80182638 = 0xC;
        } else {
            if (D_main_12_801857F0 != 0 && D_8011512C == 4) {
                D_main_12_80182638 = (D_main_12_801857F0 == 1) ? 0x1D : 0x21;
                D_8011512C = 9;
                D_main_12_801857EC = D_main_12_801857F0;
                D_main_12_80185AE5 = 0xFF;
                return 0;
            }
            D_main_12_80182638 = 0xD;
            r = &D_8011512C;
            if (*r == 0xC) {
                *r = 1;
                return 0;
            }
        }
        D_8011512C = 1;
        return 0;
        }
    }
    if (D_8011512C != 1) {
        return 0;
    }
    if (pad & 0x1000) {
        sel = 1;
        D_8011511A -= 2;
        if (D_8011511A == 0 || D_8011511A >= 5) {
            D_8011511A += 4;
        }
    }
    if (pad & 0x4000) {
        sel = 1;
        q = &D_8011511A;
        *q += 2;
        if (*q >= 5) {
            *q -= 4;
        }
    }
    if (pad & 0x8000) {
        sel = 1;
        q = &D_8011511A;
        *q += 1;
        if (*q & 1) {
            *q -= 2;
        }
    }
    if (pad & 0x2000) {
        sel = 1;
        q = &D_8011511A;
        *q -= 1;
        if (!(*q & 1)) {
            *q += 2;
        }
    }
    if (sel) {
        PlaySoundId(0x45A, 0);
    }
    return 0;
}


extern struct_14_3 g_FrontOtOrg[];
extern u8 * func_main_12_8017DD28();
extern u8 * func_main_12_8017CBC8();

void func_main_12_8017CA18(void) {
    u8 *p = (u8 *) D_801151D0;
    struct_20_s *e = D_80115130.field_4;
    s16 n;
    s16 i;

    if (D_8011512C == 1 || D_8011512C == 2) {
        p = func_main_12_8017DD28(p);
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
        p = func_main_12_8017CBC8(p, e + 5, 0);
        break;
    case 6:
    case 7:
    case 12:
        n = 1;
        p = func_main_12_8017CBC8(p, e + 5, 0);
        break;
    }
    for (i = 0; i < n; i++) {
        p = func_main_12_8017CBC8(p, e, i);
        e++;
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    AF(p, u32, 0) = 0x02000000;
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], p);
    p += 0x28;
    ((struct_4_6 *)&D_801151D0)->field_0 = (s32) p;
}

typedef struct { u8 field_0[3]; } struct_3;
extern s32 D_main_12_801826EC[];
extern u8 D_main_12_80182774[];
extern void SjisToGlyphs();
extern s32 DrawTextLine();
extern s32 DrawQuadRow();
s32 func_main_12_8017CEB8(s32 *a, s16 b, s16 c, s16 d, s32 *e);
extern s32 DrawBarList();
typedef struct { s16 field_0; s16 field_2; s32 field_4; s32 field_8; s16 field_C, field_E, field_10, field_12; s32 field_14; s16 *field_18; s32 *field_1C; } struct_20_12;

u8 *func_main_12_8017CBC8(u8 *p, struct_20_12 *arg1, s32 arg2_0) {
    s16 arg2 = arg2_0;
    u8 buf[0x48];
    s32 v[5];
    s32 c[8];
    s16 dim;
    s16 i;
    s16 j;
    s32 *t;
    s16 *q;
    s32 r;
    s32 k;

    if (arg2 == 0) {
        dim = 0;
    } else {
        dim = (u8)-((u16)D_8011511A != arg2);
    }
    if (arg1->field_14 < 0) {
        SjisToGlyphs(arg1->field_14, buf);
        p = (u8 *)DrawTextLine(p, buf, arg1->field_10, arg1->field_12, 1, dim ? 0x585858 : 0x808080);
    } else {
        t = (s32 *)D_main_12_801826EC[arg1->field_14];
        for (j = 0; j < D_main_12_80182774[arg1->field_14]; j++) {
            for (i = 0; i < 5; i++) {
                if (i == 0) {
                    v[0] = ((((s16 *)t)[0] + arg1->field_10) & 0xFFFF) | ((((s16 *)t)[1] + arg1->field_12) << 16);
                } else {
                    v[i] = t[i];
                }
            }
            p = (u8 *)DrawQuadRow(dim ? 3 : 2, p, v, 1, 0);
            t += 5;
        }
    }
    i = 0;
    q = arg1->field_18;
    while ((r = func_main_12_8017CEB8(arg1->field_1C, arg1->field_0, arg2, i++, c)) != 0) {
        if (r < 0) {
            SjisToGlyphs(r, buf);
            if (dim) {
                c[0] = 0x585858;
            }
            p = (u8 *)DrawTextLine(p, buf, q[0], q[1], 1, c[0]);
        } else {
            t = (s32 *)D_main_12_801826EC[r];
            *t = (u16)q[0] | (q[1] << 16);
            p = (u8 *)DrawQuadRow(dim ? 3 : 2, p, t, 1, 0);
        }
        q += 2;
    }
    k = dim;
    p = (u8 *)DrawQuadRow(k != 0, p, arg1->field_4, arg1->field_C, 0);
    return (u8 *)DrawBarList(k, p, arg1->field_8, arg1->field_E, 0);
}

extern u8 D_80115158[];

s32 func_main_12_8017CEB8(s32 *a, s16 b, s16 c, s16 d, s32 *e) {
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

extern u8 D_main_12_801857F8;
extern u16 D_8011511A;
extern u8 D_main_12_80185ADD;
extern u8 D_main_12_80185AE5;
extern u8 D_main_12_80185AE0[];
extern u8 D_main_12_80185AE1;
extern u8 D_main_12_80185AE2;
extern u8 D_main_12_80185AE3;
extern s32 D_main_12_80185AF0[];
extern s32 D_main_12_80185AF4;
extern s32 D_main_12_80185AF8;
extern s32 D_main_12_80185AFC;
extern s32 D_main_12_801826D8;
extern s16 D_801150D4;
extern u16 D_8011511A;
extern void GetCardSaveData();
extern void func_main_12_8017DF40(s16 save);
extern void SaveStateSlot();
extern s32 GetCardSlotHeader();
extern s32 GetCardDirWord();
extern void func_main_12_8017D730();

s32 func_main_12_8017CF3C(void) {
    s32 code;
    s16 i;
    s32 st;

    code = 0;
    st = D_main_12_80185AEC;
    if (st != 0) {
        if (st == 1) {
            s16 *p = &D_8011512C;
            if (*p == 3 && D_main_12_80185ADD == 8) {
                GetCardSaveData(&D_main_12_801857F8);
                func_main_12_8017DF40(0);
                SaveStateSlot(0);
                *p = 4;
                D_80115118 = 0x4B;
                D_main_12_801826D8 = 0x15;
                D_801150D4 = (s16)D_8011511A;
                PlaySoundId(0xB3B, 0);
            } else {
                *p = 0;
            }
        } else {
            D_8011512C = 10;
            D_main_12_801826D8 = 0x1B;
            D_80115118 = 0x4B;
            D_main_12_80185AD4 = 0;
            return;
        }
        D_main_12_80185AD4 = 0;
        D_main_12_80185AE5 = 0xFF;
    }
    if (D_8011512C == 4 || D_8011512C == 10) {
        return;
    }
    if (D_main_12_80185ADD == D_main_12_80185AE5) {
        return;
    }
    for (i = 0; i < 8; i++) {
        D_main_12_80185AE4[i] = (&D_main_12_80185ADC)[i];
    }
    switch (D_main_12_80185ADD) {
    case 0:
        break;
    case 1:
        code = 10;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 2:
        code = 11;
        D_801150D4 = 0;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 3:
        code = 0x1F;
        D_801150D4 = 0;
        D_8011512C = 8;
        break;
    case 4:
    case 5:
    case 6:
    fail:
        code = 0x13;
        D_801150D4 = 0;
        D_8011512C = 8;
        break;
    case 7:
        code = 10;
        break;
    case 8:
        if ((D_main_12_80185AE0[0] | D_main_12_80185AE1 | D_main_12_80185AE2 | D_main_12_80185AE3) == 0) {
            goto fail;
        }
        code = 0xC;
        for (i = 0; i < 4; i++) {
            if (D_main_12_80185AE0[i] == 1) {
                D_main_12_80185AF0[i] = GetCardSlotHeader(i);
            } else {
                D_main_12_80185AF0[i] = 0;
            }
        }
        if (D_main_12_80185AF0[0] == 0 && D_main_12_80185AF4 == 0 && D_main_12_80185AF8 == 0 && D_main_12_80185AFC == 0) {
            goto fail;
        }
        D_8011512C = 1;
        D_8011511A = (GetCardDirWord() & 3) + 1;
        func_main_12_8017D730();
        break;
    }
    if (code != 0) {
        D_main_12_80182638 = code;
    }
}

void func_main_12_8017D2A4(void) {
    s32 code;
    s16 i;
    s32 st;
    s16 t;
    s16 *p;
    s16 *q;

    code = 0;
    st = D_main_12_80185AEC;
    if (st != 0) {
        if (st == 1) {
            p = &D_8011512C;
            if (*p == 3) {
                if (D_main_12_80185ADD == 8) {
                    SaveStateSlot(0);
                    *p = 4;
                    D_80115118 = 0x4B;
                    D_801150D4 = 0;
                    D_main_12_801826D8 = 0xF;
                    PlaySoundId(0xB3B, 0);
                } else {
                    *p = 0;
                }
            } else if (D_main_12_80185ADD == 6) {
                *p = 7;
                D_80115118 = 0x4B;
                D_main_12_801826D8 = 0x18;
            } else {
                *p = 0;
            }
        } else if ((D_main_12_80185AD4 & 3) == 1) {
            D_8011512C = 11;
            D_main_12_801826D8 = 0x12;
            D_80115118 = 0x4B;
        } else {
            D_8011512C = 12;
            D_main_12_801826D8 = 0x1C;
            D_80115118 = 0x4B;
        }
        D_main_12_80185AD4 = 0;
        D_main_12_80185AE5 = 0xFF;
    }
    if (D_8011512C == 11 || D_8011512C == 12) {
        return;
    }
    if (D_main_12_80185ADD == D_main_12_80185AE5) {
        return;
    }
    for (i = 0; i < 8; i++) {
        D_main_12_80185AE4[i] = (&D_main_12_80185ADC)[i];
    }
    switch (D_main_12_80185ADD) {
    case 0:
        break;
    case 1:
        code = 10;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 2:
        code = 11;
        D_801150D4 = 0;
        D_8011512C = 0;
        D_8011511A = 0;
        break;
    case 3:
        {
            s32 u;

            q = &D_8011512C;
            u = *q;
            D_801150D4 = 0;
            if (u != 12) {
                code = 0x11;
                *q = 5;
            }
        }
        break;
    case 4:
        D_801150D4 = 0;
        D_8011512C = 8;
        code = 0xB;
        break;
    case 5:
        D_8011512C = 8;
        code = 0x10;
        break;
    case 6:
        q = &D_8011512C;
        t = *q;
        D_801150D4 = 0;
        if (t != 6 && t != 7 && t != 11) {
            code = 0xD;
            *q = 1;
        }
        for (i = 0; i < 4; i++) {
            D_main_12_80185AF0[i] = 0;
        }
        D_8011511A = 1;
        func_main_12_8017D730();
        break;
    case 7:
        code = 10;
        break;
    case 8:
        {
            s16 u = D_8011512C;

            if (u != 11 && u != 3 && u != 4) {
                code = 0xD;
            }
        }
        for (i = 0; i < 4; i++) {
            if (D_main_12_80185AE0[i] == 1) {
                D_main_12_80185AF0[i] = GetCardSlotHeader(i);
            } else {
                D_main_12_80185AF0[i] = 0;
            }
        }
        q = &D_8011512C;
        if (*q == 0) {
            t = D_801150D4;
            *q = 1;
            if (t >= 1 && t <= 4) {
                D_8011511A = t;
            } else {
                D_8011511A = (GetCardDirWord() & 3) + 1;
            }
            if (D_main_12_80185AF0[0] == 0 && D_main_12_80185AF4 == 0 && D_main_12_80185AF8 == 0 && D_main_12_80185AFC == 0) {
                D_801150D4 = 0;
                D_8011511A = 1;
            }
        }
        func_main_12_8017D730();
        break;
    }
    if (code != 0) {
        D_main_12_80182638 = code;
    }
}

extern s32 *D_main_12_80182614[];
extern char *D_main_12_8018251C[];
extern char *D_main_12_8018253C;
extern s32 D_main_12_801827A8[];
extern u16 *D_main_12_80182580[];
extern struct_3 D_main_12_80183F30;
extern char *strcpy();
extern s32 func_main_12_8017DC48();
void func_main_12_8017DCB0(u32 a, s16 n, u16 *out, s16 lead);

void func_main_12_8017D730(void) {
    s16 n;
    s16 i;
    s16 k;
    u8 *e;
    s32 *dst;
    u32 a;
    u32 b;
    s32 c;
    s32 x;
    s32 y;
    u16 *p;

    for (n = 0; n < 4; n++) {
        e = (u8 *)D_main_12_80185AF0[n];
        dst = D_main_12_80182614[n];
        if (e != NULL) {
            for (i = 0; i < 7; i++) {
                strcpy((char *)dst[i], D_main_12_8018251C[i]);
                switch (i) {
                case 0:
                    for (k = 0; k < 5; k++) {
                        if (AF(e, s16, 8) < D_main_12_801827A8[k]) {
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
                    dst[0] = k + 4;
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
                    func_main_12_8017DCB0(func_main_12_8017DC48((u16)a, 0x18) | 0xB00000 | func_main_12_8017DC48(b, 0xC), 5, (u16 *)dst[1] + 9, 0);
                    break;
                case 2:
                    a = AF(e, u16, 0x34);
                    if (a >= 1000) {
                        a = 999;
                    }
                    func_main_12_8017DCB0(func_main_12_8017DC48((u16)a, 0x14), 3, (u16 *)dst[2] + 4, 1);
                    c = AF(e, u8, 0x42);
                    if (c > 6) {
                        c = 6;
                    }
                    p = D_main_12_80182580[c];
                    ((u16 *)dst[2])[8] = *p++;
                    ((u16 *)dst[2])[9] = *p++;
                    ((u16 *)dst[2])[10] = *p++;
                    a = AF(e, u8, 0x39);
                    if (a >= 24) {
                        a = 23;
                    }
                    b = AF(e, u8, 0x38);
                    if (b >= 60) {
                        b = 59;
                    }
                    func_main_12_8017DCB0(func_main_12_8017DC48((u16)a, 0x18) | 0xB00000 | func_main_12_8017DC48(b, 0xC), 5, (u16 *)dst[2] + 12, 0);
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
                    x = func_main_12_8017DC48((u16)a, 0x14);
                    if (x == 0) {
                        x = 0xD00000;
                    }
                    y = func_main_12_8017DC48(b, 4);
                    func_main_12_8017DCB0(x | (y | 0xC0000), 7, (u16 *)dst[3] + 3, 1);
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
                    x = func_main_12_8017DC48((u16)a, 0x14);
                    if (x == 0) {
                        x = 0xD00000;
                    }
                    y = func_main_12_8017DC48(b, 4);
                    func_main_12_8017DCB0(x | (y | 0xC0000), 7, (u16 *)dst[4] + 3, 1);
                    break;
                case 5:
                    a = AF(e, u32, 0x14);
                    if (a > 99999) {
                        a = 99999;
                    }
                    func_main_12_8017DCB0(func_main_12_8017DC48(a, 0xC), 5, (u16 *)dst[5] + 1, 1);
                    break;
                case 6:
                    a = AF(e, u16, 0xC);
                    if (a >= 36) {
                        a = 35;
                    }
                    x = func_main_12_8017DC48((u16)a, 0x18);
                    if (x == 0) {
                        x = 0xD000000;
                    }
                    func_main_12_8017DCB0(x, 2, (u16 *)dst[6] + 8, 1);
                    break;
                }
            }
        } else {
            for (i = 0; i < 7; i++) {
                if (i == 0) {
                    dst[i] = 4;
                } else if (i == 1) {
                    strcpy((char *)dst[i], D_main_12_8018251C[i]);
                } else if (i == 4) {
                    strcpy((char *)dst[i], D_main_12_8018253C);
                } else {
                    *(struct_3 *)dst[i] = D_main_12_80183F30;
                }
            }
        }
    }
}

s32 func_main_12_8017DC48(s32 n, s32 sh) {
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

extern u16 *D_main_12_80182540[];

void func_main_12_8017DCB0(u32 a, s16 n, u16 *out, s16 lead) {
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
        *out++ = *D_main_12_80182540[d];
    }
}

extern u16 D_main_12_80182798[];
extern void SetDrawMode();

u8 *func_main_12_8017DD28(u8 *arg0) {
    u16 *q = AF(&D_80115130.field_4[(s16)D_8011511A], u16 *, 0x18);
    s32 a;
    s32 x;

    if (D_8011512C == 1) {
        a = D_main_12_80182798[D_80115116 & 7];
    } else {
        a = 0;
    }
    ((struct_14_6 *)arg0)->field_0 = 0x04000000;
    ((struct_14_6 *)arg0)->field_C = 0x70;
    ((struct_14_6 *)arg0)->field_D = 0x10;
    ((struct_14_6 *)arg0)->field_4 = 0x64808080;
    ((struct_14_6 *)arg0)->field_E = 0x4056;
    x = a - 0x60;
    ((struct_14_6 *)arg0)->field_8 = q[0] + x;
    ((struct_14_6 *)arg0)->field_A = q[1] - 2;
    ((struct_14_6 *)arg0)->field_12 = 0x10;
    ((struct_14_6 *)arg0)->field_10 = 0x10;
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], arg0);
    arg0 += 0x14;
    SetDrawMode(arg0, 0, 0, 0x15, 0);
    addPrim(&g_FrontOtOrg[((struct_2_5 *)&D_800B9A02)->field_0].field_0[2], arg0);
    return arg0 + 8;
}

extern u8 D_main_12_801857F8;
extern u16 D_8011511A;

s32 func_main_12_8017DF18(s32 arg0) {
    return ZeroFill((s32) &D_main_12_801857F8, 0x2DC);
}

extern struct_98 g_Status;
extern struct_98 D_main_12_8018581C;
extern u16 g_ItemValues[];
extern u16 D_main_12_801858B4[];
extern u8 g_Flags[];
extern u8 D_main_12_80185934[];
extern u8 g_Vars[];
extern u8 D_main_12_80185974[];
extern struct_4_3 g_VarBlock60[];
extern struct_4_3 D_main_12_80185A74[];

void func_main_12_8017DF40(s16 save) {
    s16 i;

    if (save == 0) {
        g_Status = D_main_12_8018581C;
        for (i = 0; i < 64; i++) {
            g_ItemValues[i] = D_main_12_801858B4[i];
        }
        for (i = 0; i < 64; i++) {
            g_Flags[i] = D_main_12_80185934[i];
        }
        for (i = 0; i < 256; i++) {
            g_Vars[i] = D_main_12_80185974[i];
        }
        for (i = 0; i < 24; i++) {
            g_VarBlock60[i] = D_main_12_80185A74[i];
        }
    } else {
        D_main_12_8018581C = g_Status;
        for (i = 0; i < 64; i++) {
            D_main_12_801858B4[i] = g_ItemValues[i];
        }
        for (i = 0; i < 64; i++) {
            D_main_12_80185934[i] = g_Flags[i];
        }
        for (i = 0; i < 256; i++) {
            D_main_12_80185974[i] = g_Vars[i];
        }
        for (i = 0; i < 24; i++) {
            D_main_12_80185A74[i] = g_VarBlock60[i];
        }
    }
}

extern s16 D_main_12_80185B00[];

s32 func_main_12_8017E22C(void) {
    return ZeroFill((s32) &D_main_12_80185B00, 8);
}

extern s16 D_main_12_80185B02;
extern void (*D_main_12_801827D8[])();

s32 func_main_12_8017E254(void) {
    D_main_12_801827D8[D_main_12_80185B00[0]]();
    return (u32) D_main_12_80185B02 >> 31;
}

extern s16 D_main_12_80185B08;
extern s32 GetProgress();

void func_main_12_8017E298(void) {
    s32 t = GetProgress();

    if ((u32) (t - 5) >= 1205) {
        if (t != 1700) {
            D_main_12_80185B08 = 1;
        } else {
            D_main_12_80185B08 = 2;
        }
    } else {
        D_main_12_80185B08 = 0;
    }
    func_main_12_8017C008(1, D_main_12_80185B08);
    D_main_12_80185B00[0]++;
}

void func_main_12_8017E324(void) {
    D_main_12_80185B02 = -1;
}
