#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "work.h"
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
typedef struct { u8 field_0[0x18]; s16 field_18; s16 field_1A; s16 field_1C; u8 field_1E[0xE]; u16 field_2C; } struct_2E;
typedef struct { u8 field_0[0x20]; struct_2E *field_20; u8 field_24[0x38]; s16 field_5C; u8 field_5E[0x12]; u16 field_70; } struct_74;
typedef struct { struct_8_4 field_0[4]; struct_4_2 field_20[4]; s32 field_30[4]; s32 field_40; u8 field_44; } struct_48;
typedef struct { struct_4_3 field_0; struct_4_3 field_4; u8 field_8[0x38]; } struct_40_2;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[12]; } struct_40_3;
typedef struct { s16 field_0; u16 field_2; } struct_4_11;
typedef struct { u8 field_0[0x76]; s16 field_76; } struct_78;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s8 field_C; s8 field_D; s8 field_E; } struct_10_8;
typedef struct { s16 field_0; s16 field_2; s16 field_4[8]; s16 *field_14[8]; } struct_34_6;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_13;
extern u8 D_sc07_004_801AFBE4;
extern u8 D_sc07_004_801AFC18;
extern s32 D_sc07_004_801B872C;
extern s16 D_sc07_004_801F8714;
extern s16 D_sc07_004_801F8718;
extern void *D_sc07_004_801F871C;
extern u16 D_sc07_004_801F885C;
extern s32 D_sc07_004_801F86D0[];
extern s32 D_sc07_004_801B6E94[];
extern s32 SetupActor();
extern s32 func_sc07_004_801A44C4();
extern s32 SpawnActor();
extern s32 SpawnShadow();
void func_sc07_004_801A3B08();
extern void func_sc07_002_8017D7B0();
extern void func_sc07_004_801A1E94();
extern s32 func_sc07_004_801A1E74();

void func_sc07_004_801A0230(u8 *arg0) {
    s32 *p;
    s32 i;

    if (SetupActor(arg0, &D_sc07_004_801AFBE4) != 0) {
        u8 *m = AF(arg0, u8 *, 0x20);
        D_sc07_004_801F871C = arg0;
        ((u16 *)m)[0x16] |= 0x10;
        AF(arg0, s16, 0xE) = 0;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xA) = -0x240;
        for (i = 0; i < 0x44; i += 4) {
            *(s32 *)((u8 *)D_sc07_004_801F86D0 + i) = *(s32 *)((u8 *)D_sc07_004_801B6E94 + i);
        }
        p = &D_sc07_004_801B872C;
        while (*p != 0) {
            GsMapModelingData(*p++ + 4);
        }
        AF(arg0, s32, 0xD8) = func_sc07_004_801A44C4(arg0);
        SpawnActor(0x3BB, arg0);
        D_sc07_004_801F885C = 0;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0xBC) = &D_sc07_004_801AFC18;
        AF(arg0, u8, 0xC1) = 0;
        ((s32 *)arg0)[0x31] |= 2;
        AF(arg0, s32, 0xD0) = SpawnShadow(arg0);
        D_sc07_004_801F8718 = 0xC62;
        D_sc07_004_801F8714 = 0xC62;
        func_sc07_004_801A3B08(arg0);
        func_sc07_002_8017D7B0();
        if (AF(arg0, s32, 0x64) != 0) {
            func_sc07_004_801A1E94(arg0);
        } else {
            func_sc07_004_801A1E74(arg0);
        }
    }
}

extern u8 D_sc07_004_801EEEA0;
extern void func_sc07_004_801A4328();
extern s32 func_sc07_004_801A34C4();
extern void SetScript();
extern s32 SetState();

void func_sc07_004_801A03A4(u8 *arg0, s32 arg1) {
    func_sc07_004_801A4328(2, arg1);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    func_sc07_004_801A34C4((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_004_801EEEA0);
    SetState((s32) arg0, 2);
}

typedef struct { u8 field_0[0x5C]; u16 field_5C; u8 field_5E[0x88]; s16 field_E6; u8 field_E8[0x10]; s16 field_F8; } struct_FA;
typedef struct { u8 field_0[0x1C]; s32 field_1C; u8 field_20[0x38]; s32 field_58; u16 field_5C; } struct_60_9;
typedef struct { u8 field_0[6]; s16 field_6; } struct_8_20;
typedef struct { SVECTOR field_0; SVECTOR field_8; s32 field_10; } struct_14_14;
extern u16 D_sc07_002_8019FF8A;
extern u8 D_sc07_004_801AFBA4;
extern u8 D_sc07_004_801AFBB4;
extern s16 D_sc07_004_801AFBB8;
extern s32 D_sc07_004_801B6EC0;
extern s32 D_sc07_004_801B6EC4;
extern s32 D_sc07_004_801B6EC8;
extern u8 D_sc07_004_801EEAC8;
extern u8 D_sc07_004_801EF270;
extern u8 D_sc07_004_801EF3B8;
extern u8 D_sc07_004_801EF6D0;
extern u8 D_sc07_004_801EF7D8;
extern s32 D_sc07_004_801F86FC;
extern s32 D_sc07_004_801F8700;
extern s32 D_sc07_004_801F8704;
extern u8 D_sc07_004_801F8734;
extern s16 D_sc07_004_801F873A;
extern s32 D_sc07_004_801F8740;
extern void PlaySoundId();
extern void func_sc07_004_801A3180();
extern s32 func_sc07_004_801A36A8();
extern void StopMotion();
extern void SetForwardVelocity();
extern s32 HeadingToPlayer();
void func_sc07_004_801A3624(s32 a, u16 *p, s32 n);
extern void MoveObject();
extern s32 SpawnActorArg();
extern s32 TickTimer();
extern void InitMime();
extern void StepMime();

void func_sc07_004_801A0400(u8 *arg0) {
    s32 var_s2;
    s32 var_a1;
    s16 temp;
    s32 t;
    u8 *p;

    var_s2 = 1;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        {
            s16 t0 = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0xA) = (t0 < -0x220) ? t0 + 2 : -0x220;
        }
        if (AF(arg0, s32, 0x94) == 0x10) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        AF(arg0, s16, 0xA) -= 6;
        if (AF(arg0, s32, 0x94) == 0x24) {
            AF(arg0, u16, 0x34)++;
            PlaySoundId(0xBA5, 0);
        }
        break;
    case 2:
        AF(arg0, s16, 0xA) += 0xA;
        if (AF(arg0, s32, 0x94) == 0x28) {
            D_sc07_004_801B6EC4 = 0x01000000;
            D_sc07_004_801B6EC8 = 0x01000000;
            D_sc07_004_801F885C = 0x70;
            D_sc07_004_801B6EC0 = D_sc07_004_801B872C;
            D_sc07_002_8019FF8A |= 4;
        }
        if (AF(arg0, s32, 0x94) == 0x30) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 3:
        {
            s16 t0 = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0xA) = (t0 < -0x23F) ? -0x240 : t0 - 3;
        }
        if (AF(arg0, s32, 0x94) == 0x3C) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 4:
        if (AF(arg0, s16, 0x98) == 0) {
            func_sc07_004_801A3180(arg0, 0x100);
            if (!(D_sc07_002_8019FF8A & 0x40)) {
                AF(arg0, u16, 0x34)++;
            }
        }
        func_sc07_004_801A36A8(arg0);
        break;
    case 5:
        if (AF(arg0, s16, 0xA) < -0x200) {
            AF(arg0, s16, 0xA) += 8;
            if (AF(arg0, s16, 0xA) < -0x200) {
                break;
            }
        }
        SetScript(arg0, &D_sc07_004_801EF270);
        StopMotion(arg0);
        SetForwardVelocity(arg0, -0x60000);
        AF(arg0, u16, 0x34)++;
        break;
    case 6:
        var_s2 = 0;
        if ((u32)(AF(arg0, s32, 0x94) - 8) < 0x19) {
            temp = HeadingToPlayer(arg0);
            AF(arg0, s16, 0xFE) = temp;
            func_sc07_004_801A3624(temp, AF(arg0, s32, 0x20) + 0x12, 0x20);
            MoveObject(arg0);
            if (AF(arg0, s32, 0x94) == 0x1B) {
                MoveObject(arg0);
            }
        }
        if (AF(arg0, s32, 0x94) == 0x1C) {
            SpawnActorArg(0xD, 2, arg0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 7:
        var_s2 = 1;
        if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc07_004_801EF3B8);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 8:
        var_s2 = 0;
        t = AF(arg0, s32, 0x94);
        if (t != 0xB) {
            var_a1 = 1;
            if (t != 0x17) {
                var_a1 = -1;
            }
        } else {
            var_a1 = 0;
        }
        if (var_a1 >= 0) {
            SpawnActorArg(0xD, var_a1, arg0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc07_004_801EF6D0);
            StopMotion(arg0);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 9:
        var_s2 = 0;
        MoveObject(arg0);
        if (AF(arg0, s32, 0x94) == 8) {
            SetForwardVelocity(arg0, 0x7C000);
            PlaySoundId(0xBA6, 0);
        }
        if (AF(arg0, s32, 0x94) == 0x1C) {
            StopMotion(arg0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            InitMime(&D_sc07_004_801F8734, &D_sc07_004_801AFBB4, D_sc07_004_801B872C);
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 10:
        p = &D_sc07_004_801F8734;
        StepMime(p);
        D_sc07_004_801F885C = ((D_sc07_004_801AFBB8 - D_sc07_004_801F873A + 1) * (0x70 / D_sc07_004_801AFBB8)) & 0xFFFE;
        if (D_sc07_004_801F8740 & 0x4000) {
            D_sc07_004_801B6EC0 = D_sc07_004_801F86FC;
            D_sc07_004_801B6EC4 = D_sc07_004_801F8700;
            D_sc07_004_801B6EC8 = D_sc07_004_801F8704;
            D_sc07_002_8019FF8A &= 0xFFFB;
        }
        if (AF(arg0, s16, 0xA) > -0x240) {
            AF(arg0, s16, 0xA) -= 2;
            if (AF(arg0, s16, 0xA) > -0x240) {
                break;
            }
        }
        AF(arg0, s16, 0xA) = -0x240;
        InitMime(p, &D_sc07_004_801AFBA4, D_sc07_004_801B872C);
        SetScript(arg0, &D_sc07_004_801EF7D8);
        AF(arg0, u16, 0x34)++;
        break;
    case 11:
        StepMime(&D_sc07_004_801F8734);
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, u16, 0x5C) |= 0x2000;
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            func_sc07_004_801A4328(0);
        }
        break;
    }
    if (var_s2 != 0) {
        temp = HeadingToPlayer(arg0);
        AF(arg0, s16, 0xFE) = temp;
        func_sc07_004_801A3624(temp, AF(arg0, s32, 0x20) + 0x12, 0x40);
    }
}

extern u16 D_sc07_002_8019FF8A;
extern u8 D_sc07_004_801EF088;
extern void func_sc07_002_8017F880();
extern s32 SpawnActorArg();

void func_sc07_004_801A09E4(u8 *arg0) {
    func_sc07_004_801A4328(3);
    func_sc07_002_8017F880();
    func_sc07_004_801A34C4(arg0);
    SetScript(arg0, &D_sc07_004_801EF088);
    ((s32 *)arg0)[0x33] = SpawnActorArg(0x32A, 0, arg0);
    D_sc07_002_8019FF8A &= ~0x100;
    if (((s32 *)arg0)[0x33] != 0) {
        D_sc07_002_8019FF8A |= 2;
    }
    D_sc07_002_8019FF8A |= 0x80;
    ((u16 *)arg0)[0x2E] &= ~0x2000;
    SetState(arg0, 3);
}

extern u8 D_sc07_004_801EEAC8;
extern void func_sc07_004_801A3180();
extern void func_sc07_004_801A3B18();
extern s32 TickTimer();
extern void StopMotion();
extern void func_sc07_002_8017F418();
extern s32 func_sc07_004_801A36A8();
extern s32 HeadingToPlayer();
void func_sc07_004_801A3624(s32 a, u16 *p, s32 n);

void func_sc07_004_801A0A98(u8 *arg0) {
    s16 r;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, s32, 0x1C) = 0x100;
            ((u16 *)arg0)[0x1A]++;
            func_sc07_004_801A3B08(arg0);
        }
        break;
    case 1:
        func_sc07_004_801A3180(arg0, 0x280);
        if (AF(arg0, s32, 0x1C) < 0xF0) {
            func_sc07_004_801A3B18(arg0);
        }
        if (TickTimer(arg0) != 0) {
            D_sc07_002_8019FF8A |= 0x100;
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 2:
        if (!(D_sc07_002_8019FF8A & 2)) {
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            func_sc07_004_801A4328(0);
            func_sc07_002_8017F418();
            D_sc07_002_8019FF8A &= 0xFF7F;
            ((u16 *)arg0)[0x2E] |= 0x2000;
        }
        break;
    }
    func_sc07_004_801A36A8(arg0);
    r = HeadingToPlayer(arg0);
    AF(arg0, s16, 0xFE) = r;
    func_sc07_004_801A3624(r, AF(arg0, u8 *, 0x20) + 0x12, 0x40);
}

extern u8 D_sc07_004_801EEB70;
extern void func_sc07_004_801A36F0();
extern void func_sc07_002_8017F9CC();

void func_sc07_004_801A0C58(s32 arg0) {
    func_sc07_004_801A36F0(arg0);
    func_sc07_004_801A34C4(arg0);
    func_sc07_004_801A4328(6);
    func_sc07_002_8017F9CC();
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    SetScript(arg0, (s32) &D_sc07_004_801EEB70);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = (s16) (rand() & 3);
    SetState(arg0, 4);
}

extern s16 D_sc07_004_801F8E98;
extern void func_sc07_002_8017F730();

void func_sc07_004_801A0CD0(s32 arg0) {
    func_sc07_004_801A36F0(arg0);
    func_sc07_004_801A34C4(arg0);
    func_sc07_004_801A4328(1);
    func_sc07_002_8017F730();
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    SetScript(arg0, (s32) &D_sc07_004_801EEB70);
    D_sc07_004_801F8E98 = 0;
    SetState(arg0, 5);
}

extern u8 D_sc07_004_801EF4C0;
extern u8 D_sc07_004_801AFC60;
extern u8 D_sc07_004_801EF5C8;
extern void PlaySoundId();
extern s32 func_sc07_004_801A3EEC();
extern void func_sc07_004_801A108C();
extern s32 func_sc07_004_801A1124();
extern s32 func_sc07_004_801A9AAC();
extern s32 func_sc07_004_801A9ADC();

void func_sc07_004_801A0D40(u8 *arg0) {
    s32 k;
    s16 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0xA) < -0x220) {
            AF(arg0, s16, 0xA) += 2;
        } else {
            AF(arg0, s16, 0xA) = -0x220;
        }
        if (AF(arg0, s32, 0x94) == 0x14) {
            AF(arg0, u16, 0x34)++;
            PlaySoundId(0xBA5, 0);
        }
        break;
    case 1:
        AF(arg0, s16, 0xA) -= 0x10;
        if (AF(arg0, s32, 0x94) == 0x1A) {
            SpawnActorArg(0x3A4, AF(arg0, u16, 2) == 4, arg0);
            AF(arg0, s32, 0x1C) = 0x14;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (AF(arg0, s16, 0x98) == 0 && TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc07_004_801EF4C0);
            AF(arg0, u16, 0x34)++;
            if (AF(arg0, u16, 2) == 4) {
                k = 8;
                func_sc07_004_801A9AAC();
            } else {
                k = 7;
            }
            func_sc07_004_801A3EEC(k);
        }
        break;
    case 3:
        if (AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc07_004_801AFC60);
            AF(arg0, s32, 0x1C) = 0x60;
            AF(arg0, u16, 0x34)++;
        } else {
            AF(arg0, s32, 0x1C)++;
            if (AF(arg0, u16, 2) == 4) {
                func_sc07_004_801A108C(arg0);
                func_sc07_004_801A9ADC();
            } else {
                func_sc07_004_801A1124(arg0);
            }
        }
        break;
    case 4:
        if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc07_004_801EF5C8);
            AF(arg0, u16, 0x34)++;
        } else if (AF(arg0, u16, 2) == 4) {
            func_sc07_004_801A108C(arg0);
        } else {
            func_sc07_004_801A1124(arg0);
        }
        if (AF(arg0, u16, 2) == 4) {
            func_sc07_004_801A9ADC();
        }
        break;
    case 5:
        if (AF(arg0, s16, 0xA) < -0x240) {
            AF(arg0, s16, 0xA)++;
        }
        if (AF(arg0, s16, 0x98) == 0 && AF(arg0, s16, 0xA) >= -0x240) {
            if (AF(arg0, u16, 2) == 4) {
                AF(arg0, s32, 0x1C) = 8;
            } else {
                AF(arg0, s32, 0x1C) = 0x20;
            }
            AF(arg0, u16, 0x34)++;
        }
        if (AF(arg0, u16, 2) == 4) {
            func_sc07_004_801A9ADC();
        }
        break;
    case 6:
        t = HeadingToPlayer(arg0);
        AF(arg0, s16, 0xFE) = t;
        func_sc07_004_801A3624(t, AF(arg0, u8 *, 0x20) + 0x12, 0x40);
        if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            func_sc07_004_801A4328(0);
            func_sc07_002_8017F418();
            func_sc07_004_801A3EEC(1);
            AF(arg0, u16, 0x5C) |= 0x2000;
        } else if (AF(arg0, u16, 2) == 4) {
            func_sc07_004_801A9ADC();
        }
        break;
    }
}

extern s32 SpawnActorArg();
extern s32 SpawnActor();

void func_sc07_004_801A108C(s32 arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 24) * 0x18)) {
        if (AF(arg0, s16, 0x100) == AF(arg0, s16, 0x102)) {
            SpawnActorArg(0x34, 1, arg0);
        } else {
            SpawnActor(0x34, arg0);
        }
        AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + 1);
    }
}

extern s32 SpawnActor();

s32 func_sc07_004_801A1124(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x1C) & 3;
    if (var_v0 == 0) {
        var_v0 = SpawnActor(0x44, arg0);
    }
    return var_v0;
}

extern u8 D_sc07_004_801EECB8;
extern void func_sc07_002_8017F184();
extern void PlaySoundId();

void func_sc07_004_801A115C(u8 *arg0) {
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    func_sc07_002_8017F184();
    func_sc07_004_801A4328(5);
    func_sc07_004_801A36F0((s32) arg0);
    func_sc07_004_801A34C4((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_004_801EECB8);
    SetState((s32) arg0, 6);
    PlaySoundId(0xBA5, 0);
}

extern u8 D_sc07_002_80186F44;
extern void func_sc07_002_801830D8();
extern void StartCameraShake();

void func_sc07_004_801A11D4(u8 *arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, s16, 0xA) -= 8;
        if (AF(arg0, s32, 0x94) == 0x1A) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        AF(arg0, s16, 0xA) -= (0x1F - AF(arg0, s32, 0x94)) * 2;
        if (AF(arg0, s32, 0x94) == 0x1E) {
            AF(arg0, u16, 0x34)++;
            PlaySoundId(0xBA6, 0);
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x94) == 0x28) {
            AF(arg0, s16, 0x98) = 0;
        }
        if (AF(arg0, s16, 0xA) < -0x200) {
            AF(arg0, s16, 0xA) += 0x18;
            if (AF(arg0, s16, 0xA) < -0x200) {
                break;
            }
        }
        AF(arg0, s16, 0xA) = -0x200;
        AF(arg0, s16, 0x52) = 0;
        func_sc07_002_801830D8(arg0);
        StartCameraShake(&D_sc07_002_80186F44);
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, u16, 0x34)++;
        PlaySoundId(0xABC, 0);
        break;
    case 3:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x98) = 1;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 4:
        if (AF(arg0, s16, 0xA) >= -0x23F) {
            AF(arg0, s16, 0xA) -= 4;
        }
        if (AF(arg0, s16, 0x98) == 0 && AF(arg0, s16, 0xA) < -0x23F) {
            AF(arg0, s16, 0xA) = -0x240;
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            AF(arg0, s16, 0x108) = 0;
            func_sc07_004_801A4328(0);
            func_sc07_002_8017F418();
            AF(arg0, u16, 0x5C) |= 0x2000;
        }
        break;
    }
}

extern u8 D_sc07_004_801EF8A0;
extern void func_sc07_002_8017F928();

void func_sc07_004_801A1400(s32 arg0, s32 arg1) {
    func_sc07_004_801A4328(4, arg1);
    func_sc07_002_8017F928();
    func_sc07_004_801A36F0(arg0);
    AF(arg0, s16, 0x102) = 0;
    func_sc07_004_801A34C4(arg0);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    SetScript(arg0, (s32) &D_sc07_004_801EF8A0);
    SetState(arg0, 7);
}

extern u8 D_sc07_004_801EF928;
extern s32 D_sc07_004_801F8858;
extern s32 D_sc07_004_801F8844[];
void func_sc07_004_801A3FB0(s32 arg0);
extern void func_sc07_004_801A5698(u8 *arg0, s16 arg1);
s32 func_sc07_004_801A4008(s32 arg0);
s32 func_sc07_004_801A5654(s32 arg0, s32 arg1, s32 arg2);
extern void func_sc07_004_801A41CC();
extern s32 func_sc07_004_801A6330();
void func_sc07_004_801A5414(u8 *arg0);
s32 func_sc07_004_801A417C(s32 arg0);

void func_sc07_004_801A1470(u8 *arg0) {
    u8 *p;
    u8 *q;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, u16, 0xA) += 2;
        if (AF(arg0, s32, 0x94) == 0xA) {
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 1:
        AF(arg0, u16, 0xA) -= 0x10;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) > 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) -= 0x200;
            q = AF(arg0, u8 *, 0x20);
            if (AF(q, s16, 0x18) <= 0) {
                AF(q, s16, 0x18) = -1;
            }
            AF(AF(arg0, u8 *, 0x20), u16, 0x1C) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        }
        if (AF(arg0, s16, 0x98) == 0 && AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0) {
            func_sc07_004_801A3FB0((s32)arg0);
            AF(arg0, s32, 0x1C) = 0x20;
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 2:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x100) = 0;
            func_sc07_004_801A5698(arg0, 0);
            AF(arg0, s16, 0xA) = -0x200;
            func_sc07_004_801A4008((s32)arg0);
            SetScript(arg0, &D_sc07_004_801EF928);
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = HeadingToPlayer(arg0);
        func_sc07_004_801A5698(arg0, AF(arg0, s16, 0x100));
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x1000) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) += 0x200;
            q = AF(arg0, u8 *, 0x20);
            AF(q, u16, 0x1C) = AF(q, u16, 0x18);
            if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x1000) {
                break;
            }
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x1000;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1C) = 0x1000;
        D_sc07_004_801F8858 = 0;
        AF(arg0, s32, 0x1C) = 0;
        ((u16 *)arg0)[0x1A]++;
        break;
    case 4:
        if (((s32 *)arg0)[7] != 0) {
            ((s32 *)arg0)[7]--;
        } else {
            ((s32 *)arg0)[7] = 5;
            if (D_sc07_004_801F8858 < 5) {
                D_sc07_004_801F8844[D_sc07_004_801F8858] = func_sc07_004_801A5654((s32)arg0, AF(arg0, s16, 0x100), D_sc07_004_801F8858);
                D_sc07_004_801F8858++;
                PlaySoundId(0xABA, 0);
            }
        }
        AF(arg0, s16, 0x100) += 0x88;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = HeadingToPlayer(arg0);
        func_sc07_004_801A5698(arg0, AF(arg0, s16, 0x100));
        if (AF(arg0, s16, 0x100) >= 0x1000) {
            func_sc07_004_801A41CC();
            func_sc07_004_801A3FB0((s32)arg0);
            AF(arg0, s16, 6) = 0;
            AF(arg0, s16, 0xE) = 0;
            func_sc07_004_801A6330();
            AF(arg0, s16, 0x100) = 0;
            AF(arg0, s32, 0x1C) = 0x30;
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 5:
        AF(arg0, u16, 0x102) += 0x10;
        if (TickTimer(arg0) != 0) {
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 6:
        if (TickTimer(arg0) != 0) {
            t = D_sc07_004_801F8844[AF(arg0, s16, 0x100)];
            if (t != 0) {
                func_sc07_004_801A5414((u8 *)t);
                AF(arg0, s16, 0x100)++;
                if (AF(arg0, s16, 0x100) >= 5) {
                    AF(arg0, s32, 0x1C) = 0x40;
                    ((u16 *)arg0)[0x1A]++;
                } else {
                    AF(arg0, s32, 0x1C) = 0xC;
                }
            }
        }
        break;
    case 7:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0xA) = -0x240;
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x200;
            AF(AF(arg0, u8 *, 0x20), u16, 0x1C) = 0x200;
            func_sc07_004_801A417C((s32)arg0);
            func_sc07_004_801A4008((s32)arg0);
            ((u16 *)arg0)[0x1A]++;
        }
        break;
    case 8:
        p = AF(arg0, u8 *, 0x20);
        AF(p, s16, 0x18) += 0x200;
        p = AF(arg0, u8 *, 0x20);
        AF(p, u16, 0x1C) = AF(p, u16, 0x18);
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) >= 0x1000) {
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            func_sc07_004_801A4328(0);
            func_sc07_002_8017F418();
            AF(arg0, u16, 0x5C) |= 0x2000;
        }
        break;
    }
}

extern u8 D_sc07_004_801AFBD4;
extern s16 D_sc07_004_801F8714;

void func_sc07_004_801A18F4(u8 *arg0) {
    s16 v;

    v = D_sc07_004_801F8714 / 39;
    AF(arg0, s16, 0xAE) = -3;
    AF(arg0, s32, 0x58) = (s32)&D_sc07_004_801AFBD4 | 0x40000000 | 0x20000000;
    AF(arg0, u16, 0x5C) &= 0xDFFF;
    AF(arg0, s32, 0x1C) = v + 0x20;
    SetState(arg0, 9);
}

s32 func_sc07_004_801A1984(s32 arg0) {
    func_sc07_004_801A36F0(arg0);
    AF(arg0, s32, 0x1C) = 0x14;
    return SetState(arg0, 0xA);
}

extern struct_4_3 D_sc07_004_801A0168;
extern s32 func_sc07_004_801A370C();
extern s32 func_sc07_004_801A85A8();
extern void func_sc07_002_80184C70();
extern void func_sc07_002_80184DB0();
extern void func_sc07_004_801AAA6C();
extern s32 func_sc07_004_801A395C();
extern s32 func_sc07_004_801A1C38();
extern s32 func_sc07_004_801A861C();
extern s32 func_sc07_004_801A8DCC();
extern void func_sc07_002_80184E20();
extern void func_sc07_002_80184E98();
extern void func_sc07_004_801A3D60();
extern void func_sc07_004_801A3EA8();
extern void func_sc07_002_8018503C();

void func_sc07_004_801A19C0(u8 *arg0) {
    struct_4_3 c;

    c = D_sc07_004_801A0168;
    func_sc07_004_801A370C(arg0);
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (TickTimer(arg0) != 0) {
            func_sc07_004_801A85A8(arg0, 0x1600000, 0, 0x300);
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        if (TickTimer(arg0) != 0) {
            func_sc07_004_801A85A8(arg0, 0x1600000, 1, 0x300);
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x80;
            AF(arg0, s16, 0x100) = 0;
            func_sc07_002_80184C70();
            func_sc07_002_80184DB0(0, &c, -8);
            AF(arg0, u16, 0xE4) = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            func_sc07_004_801A3B08(arg0);
            func_sc07_004_801A3EEC(9);
            PlaySoundId(0xB5A, 0);
            AF(arg0, u16, 0x34)++;
        } else {
            func_sc07_004_801AAA6C(arg0);
        }
        break;
    case 3:
        func_sc07_004_801A395C(arg0, -0x230);
        if (TickTimer(arg0) != 0) {
            D_sc07_002_8019FF8A &= 0xFFFE;
            func_sc07_004_801A1C38(arg0);
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xE4);
            func_sc07_004_801A3EEC(1);
            PlaySoundId(4, 0xB5A);
        } else {
            if (!(AF(arg0, s32, 0x1C) & 0xF) && func_sc07_004_801A861C(arg0, AF(arg0, s16, 0x100)) != 0) {
                AF(arg0, s16, 0x100)++;
                PlaySoundId(0xB59, 0);
            }
            if ((u32)(AF(arg0, s32, 0x1C) - 0x19) < 0x57) {
                func_sc07_004_801A8DCC(arg0, 0);
                func_sc07_002_80184E20(arg0 + 4);
                func_sc07_002_80184E98(rand() & 0xFF8, 0x60);
                func_sc07_004_801A3D60(arg0);
            }
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0x80;
            func_sc07_004_801A3EA8(arg0);
        }
        func_sc07_002_8018503C();
        break;
    }
}

extern void func_sc07_004_801A3744();

s32 func_sc07_004_801A1C38(s32 arg0) {
    AF(arg0, s16, 0xAE) = -1;
    func_sc07_004_801A36F0(arg0);
    func_sc07_004_801A3744(arg0);
    return SetState(arg0, 0xB);
}

extern u8 D_sc07_004_801AFBC4;
extern u8 D_sc07_004_801C65E4;
extern u8 D_sc07_004_801C6644;
extern u8 D_sc07_004_801EF9A8;
extern u8 D_sc07_004_801F8724;
extern s32 D_sc07_004_801F8730;
extern void StepMime();
extern void SetModelParts();
extern void SetScriptAtEnd();
extern void QueueImage();

void func_sc07_004_801A1C7C(u8 *arg0) {
    s32 r;

    r = func_sc07_004_801A395C(arg0, -0x240);
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(&D_sc07_004_801F8724, s32, 0xC) &= ~0x4000;
        AF(&D_sc07_004_801F8724, s16, 6) -= 4;
        if (AF(&D_sc07_004_801F8724, s16, 6) < -1) {
            AF(&D_sc07_004_801F8724, s16, 6) = -1;
        }
        StepMime(&D_sc07_004_801F8724);
        if (AF(&D_sc07_004_801F8724, s16, 6) <= 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        SetModelParts(AF(arg0, u8 *, 0x20), D_sc07_004_801B6E94);
        SetScriptAtEnd(arg0, &D_sc07_004_801EF9A8);
        AF(arg0, u16, 0x34)++;
        break;
    case 2:
        if (AF(arg0, s16, 0x98) == 0 && r != 0) {
            SetScript(arg0, &D_sc07_004_801EEAC8);
            AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
            StopMotion(arg0);
            SetState(arg0, 1);
            AF(arg0, s32, 0x1C) = 0x10;
            func_sc07_004_801A4328(0);
            AF(arg0, s16, 0xAE) = -1;
            AF(arg0, s32, 0x58) = (s32)&D_sc07_004_801AFBC4 | 0x40000000 | 0x20000000;
            ((u16 *)arg0)[0x2E] |= 0x2000;
            D_sc07_002_8019FF8A &= 0xF9F7;
            QueueImage(&D_sc07_004_801C65E4);
            QueueImage(&D_sc07_004_801C6644);
        }
        break;
    }
}

s32 func_sc07_004_801A1E74(s32 arg0) {
    return SetState(arg0, 0xD);
}

extern u8 D_sc07_004_801AFB58;
extern u8 D_sc07_004_801AFCF8;
extern s32 D_sc07_004_801BF01C;
extern u8 D_sc07_004_801F8724;
extern void SetModelParts();
extern void InitMime();
extern s32 func_sc07_004_801A8528();
extern void StartEvent();

void func_sc07_004_801A1E94(u8 *arg0) {
    s32 *p = &D_sc07_004_801BF01C;

    SetModelParts(AF(arg0, s32, 0x20), p);
    InitMime(&D_sc07_004_801F8724, &D_sc07_004_801AFB58, *p);
    AF(arg0, s16, 0xA) = -0x240;
    AF(arg0, s16, 0xE) = 0x30;
    AF(arg0, s32, 0xD4) = func_sc07_004_801A8528(arg0);
    StartEvent(arg0, &D_sc07_004_801AFCF8);
    AF(arg0, s32, 0x1C) = 0x60;
    AF(arg0, s16, 0x100) = 0xFF;
    AF(arg0, s16, 0x84) = 0;
    SetState(arg0, 0xE);
}

extern u8 D_sc07_004_801AFD58;
extern void DrawFadeWhite();
extern void func_sc07_004_801A7CDC();
extern s32 func_sc07_004_801A3798(u8 *arg0, s16 arg1);
extern void func_sc07_004_801A40CC();
extern s32 RequestBgmPack();
extern void func_sc07_002_8017F558();
extern s32 IsEventDone();
extern void EndEvent();
extern void func_sc07_002_8017BF08();
extern void func_sc07_002_8017F004();

void func_sc07_004_801A1F3C(u8 *arg0) {
    struct_4_3 buf;
    s32 t;
    u8 *p;

    buf = D_sc07_004_801A0168;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0x100) != 0) {
            DrawFadeWhite(AF(arg0, s16, 0x100) & 0xFF, 1);
            AF(arg0, s16, 0x100) -= 4;
            if (AF(arg0, s16, 0x100) < 0) {
                AF(arg0, s16, 0x100) = 0;
            }
        }
        func_sc07_004_801AAA6C(arg0);
        if (TickTimer(arg0) != 0) {
            func_sc07_004_801A3EEC(9);
            func_sc07_002_80184C70();
            func_sc07_002_80184DB0(0, &buf, -8);
            AF(arg0, s32, 0x1C) = 0x20;
            AF(arg0, s16, 0x34) = 1;
            PlaySoundId(0xB4B, 0);
        }
        break;
    case 1:
        func_sc07_004_801AAA6C(arg0);
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            StartCameraShake(&D_sc07_004_801AFD58);
        }
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x140;
            ((s16 *)arg0)[0x1A] = 2;
            D_sc07_002_8019FF8A |= 0x4000;
            PlaySoundId(0xB5A, 0);
        }
        break;
    case 2:
        if (TickTimer(arg0) != 0) {
            func_sc07_004_801A3744(arg0);
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            AF(arg0, s16, 0x34) = 3;
            PlaySoundId(4, 0xB4B);
            PlaySoundId(4, 0xB5A);
            break;
        }
        func_sc07_004_801AAA6C(arg0);
        p = AF(arg0, u8 *, 0xD4);
        if (p != NULL) {
            t = AF(arg0, s32, 0x1C) & 0x1F;
            if (t == 7 || t == 0x14 || t == 0x17) {
                func_sc07_004_801A7CDC(p);
            }
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            StartCameraShake(&D_sc07_004_801AFD58);
        }
        if (!(AF(arg0, s32, 0x1C) & 0x1F) && func_sc07_004_801A861C(arg0, AF(arg0, s16, 0x100)) != 0) {
            AF(arg0, s16, 0x100)++;
            PlaySoundId(0xB59, 0);
        }
        if (AF(arg0, s32, 0x1C) > 0x10) {
            func_sc07_004_801A8DCC(arg0, 0);
            func_sc07_002_80184E20(arg0 + 4);
            func_sc07_002_80184E98(rand() & 0xFF8, 0x60);
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 0x80;
        break;
    case 3:
        if (func_sc07_004_801A3798(arg0, 0) != 0) {
            func_sc07_004_801A40CC(arg0);
            AF(arg0, s16, 0x34) = 4;
        }
        break;
    case 4:
        if (AF(arg0, s16, 0x84) != 0) {
            RequestBgmPack(0x8C);
            AF(arg0, s16, 0x34) = 5;
            func_sc07_002_8017F558();
        }
        break;
    case 5:
    case 6:
        break;
    }
    func_sc07_002_8018503C();
    if (AF(arg0, s16, 0x84) == 0) {
        AF(arg0, s16, 0x84) = RequestBgmPack(0x9D);
    }
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        func_sc07_004_801A3EEC(1);
        func_sc07_002_8017BF08(&D_sc07_004_801F8714, &D_sc07_004_801F8718, 0xB, 0x120);
        func_sc07_002_8017F004();
        SetScript(arg0, &D_sc07_004_801EEAC8);
        AF(arg0, s32, 0x1C) = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
        StopMotion(arg0);
        SetState(arg0, 1);
        AF(arg0, s32, 0x1C) = 0x10;
    }
}

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
extern s32 func_sc07_002_8017F578();

void func_sc07_004_801A2310(s32 arg0) {
    func_sc07_002_8017F578(arg0);
}

extern void *D_sc07_004_801F871C;

void func_sc07_004_801A2330(void) {
    if (D_sc07_004_801F871C != NULL) {
        AF(D_sc07_004_801F871C, s16, 0x34) = 6;
    }
}

s32 func_sc07_004_801A2350(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 6;
}

extern u8 D_sc07_004_801AFD8C;
extern s32 D_sc07_004_801F8720;
extern s16 D_sc07_004_801F8868;
extern void func_sc07_004_801A7D18();
extern void SoundCmd1();
extern void GainStat0();
extern void GainStat1();
extern void GainStat3();
extern s32 GainStat2();

void func_sc07_004_801A2364(u8 *arg0) {
    s32 p;

    StartEvent(arg0, &D_sc07_004_801AFD8C);
    p = AF(arg0, s32, 0xD4);
    AF(arg0, s32, 0x1C) = 0x20;
    D_sc07_004_801F8868 = 0;
    if (p != 0) {
        func_sc07_004_801A7D18(p);
        AF(arg0, s32, 0xD4) = 0;
        func_sc07_004_801A36F0(arg0);
    }
    SetState(arg0, 0xF);
    SoundCmd1(1);
    D_sc07_004_801F8720 = 0;
    GainStat0(0x320);
    GainStat1(0x64);
    GainStat3(0x190);
    GainStat2(0x12C);
}

extern u8 D_80062BC0;
extern MATRIX GsIDMATRIX;
extern u8 D_sc07_002_8018A27C;
extern u8 D_sc07_004_801AFDDC;
extern u16 D_sc07_004_801F8EB0;
extern u16 D_sc07_004_801F8EB2;
extern void func_sc07_004_801A34FC();
extern s32 HeadingToPoint();
void func_sc07_004_801A2C88(s32 arg0);
extern void func_sc07_004_801A2CA4();
void func_sc07_004_801A4060(s32 arg0);
extern s32 func_sc07_004_801A3594();
void func_sc07_004_801ADC40(u8 *arg0);
void func_sc07_004_801AD5B4(s32 arg0, s32 arg1);
extern s32 func_sc07_004_801A8564();
s32 func_sc07_004_801A86F8(void);
void func_sc07_004_801A876C(s32 arg0, s32 arg1, s32 arg2);
void func_sc07_004_801ADA9C(u8 *arg0);
void func_sc07_004_801AEB94(void);
s32 func_sc07_004_801A8670(s32 arg0);
s32 func_sc07_004_801A86B4(s32 arg0);
void func_sc07_004_801A87C4(s32 arg0, s32 arg1, s32 arg2);
void func_sc07_004_801AD294(void);
extern void func_sc07_004_801AD640();
extern s32 GetRumbleScript();
extern void StartRumbleScript();
s32 func_sc07_004_801AD2CC(void);
s32 func_sc07_004_801ACE04(u8 *arg0);
extern void RequestMapChange();
s32 func_sc07_004_801A43EC(void);

void func_sc07_004_801A2400(u8 *arg0) {
    VECTOR v;
    SVECTOR sv;
    MATRIX m;
    VECTOR v2;
    struct_4_3 c;
    s32 x, z;
    s16 a;
    s32 r;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (TickTimer(arg0) != 0) {
            x = AF(arg0, s16, 6);
            z = AF(arg0, s16, 0xE);
            AF(arg0, u16, 0x102) = 0;
            AF(arg0, s32, 0x1C) = 0x20;
            AF(arg0, u16, 0x34)++;
            if (x * x + z * z > 0x40) {
                sv.vz = 0;
                sv.vy = 0;
                sv.vx = 0;
                D_sc07_002_8019FF8A |= 0x40;
                func_sc07_004_801A34FC(arg0, &sv);
                r = HeadingToPoint(arg0 + 4, &sv);
                m = GsIDMATRIX;
                RotMatrixY((s16)r, &m);
                v.vy = 0;
                v.vx = 0;
                v.vz = 0xFFFC0000;
                ApplyMatrixLV(&m, &v, (VECTOR *)(arg0 + 0x10));
            } else {
                func_sc07_004_801A34C4(arg0);
            }
        } else {
            if (AF(arg0, s32, 0x1C) == 0x10) {
                func_sc07_004_801A2C88(arg0);
            }
            func_sc07_004_801A2CA4(arg0);
        }
        break;
    case 1:
        TickTimer(arg0);
        if (!((AF(arg0, u16, 0x102) >> 8) & 0x7F)) {
            func_sc07_004_801A2C88(arg0);
        }
        func_sc07_004_801A2CA4(arg0);
        a = AF(arg0, u16, 0x102) + 0x400;
        AF(arg0, u16, 0x102) = a;
        AF(arg0, u16, 0xA) += rsin(a) >> 10;
        func_sc07_004_801A4060(arg0);
        func_sc07_004_801A3624(0, AF(arg0, s32, 0x20) + 0x12, 0x20);
        r = 1;
        if (D_sc07_002_8019FF8A & 0x40) {
            MoveObject(arg0);
            r = func_sc07_004_801A3594(arg0);
            if (r != 0) {
                func_sc07_004_801A34C4(arg0);
            }
        }
        if (r != 0 && AF(arg0, s32, 0x1C) == 0) {
            func_sc07_004_801A3744(arg0);
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if ((AF(arg0, u16, 0x102) >> 8) == 0) {
            func_sc07_004_801A2C88(arg0);
        }
        func_sc07_004_801A2CA4(arg0);
        a = AF(arg0, u16, 0x102) + 0x400;
        AF(arg0, u16, 0x102) = a;
        AF(arg0, s16, 6) += rsin(a) >> 9;
        func_sc07_004_801A4060(arg0);
        func_sc07_004_801A3798(arg0, 0);
        if (AF(arg0, s16, 0xE6) < 0) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 3:
        if ((AF(arg0, u16, 0x102) >> 8) == 0) {
            func_sc07_004_801A2C88(arg0);
        }
        func_sc07_004_801A2CA4(arg0);
        a = AF(arg0, u16, 0x102) + 0x400;
        AF(arg0, u16, 0x102) = a;
        AF(arg0, u16, 0xA) += rsin(a) >> 10;
        func_sc07_004_801A4060(arg0);
        if (func_sc07_004_801A395C(arg0, -0x2A0) != 0) {
            SpawnActor(0x1FE, arg0);
            AF(arg0, s32, 0x1C) = 0x70;
            AF(arg0, u16, 0x34)++;
            func_sc07_002_80184C70();
            c = D_sc07_004_801A0168;
            func_sc07_002_80184DB0(0, &c, -8);
            PlaySoundId(0xB5A, 0);
        }
        break;
    case 4:
        a = AF(arg0, u16, 0x102) + 0x400;
        AF(arg0, u16, 0x102) = a;
        AF(arg0, u16, 0xA) += rsin(a) >> 10;
        func_sc07_004_801A4060(arg0);
        sv.vy = -0x40;
        sv.vx = 0;
        sv.vz = 0x20;
        func_sc07_004_801A8DCC(arg0, &sv);
        func_sc07_004_801A8DCC(arg0, &sv);
        v2.vx = AF(arg0, s32, 4);
        v2.vy = AF(arg0, s32, 8) - 0x400000;
        v2.vz = AF(arg0, s32, 0xC);
        func_sc07_002_80184E20(&v2);
        func_sc07_002_80184E98(rand() & 0xFF8, 0x60);
        func_sc07_004_801ADC40(arg0);
        TickTimer(arg0);
        t = AF(arg0, s32, 0x1C);
        if (!(t & 7)) {
            func_sc07_004_801AD5B4(arg0, (u32)(t & 0x18) >> 3);
            PlaySoundId(0xB59, 0);
        }
        if (AF(arg0, s32, 0x1C) == 0x64) {
            AF(arg0, s32, 0xD4) = func_sc07_004_801A8564(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x60) {
            func_sc07_004_801A86F8();
            if (AF(arg0, s32, 0xD4) != 0) {
                func_sc07_004_801A876C(AF(arg0, s32, 0xD4), 0x1600, 0x30);
            }
        }
        if (AF(arg0, s32, 0x1C) == 0xE) {
            func_sc07_004_801ADA9C(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0xF) {
            u16 *q = &D_sc07_004_801F8EB2;
            u16 t = D_sc07_004_801F8EB0;

            *q += 0xA;
            D_sc07_004_801F8EB0 = t + 0xC;
            func_sc07_004_801AEB94();
        }
        if (AF(arg0, s32, 0x1C) == 8) {
            func_sc07_004_801A8670(arg0);
            func_sc07_004_801A86B4(arg0);
            PlaySoundId(0xB4D, 0);
        }
        if (AF(arg0, s32, 0x1C) == 0) {
            AF(arg0, s32, 0x1C) = 0x60;
            AF(arg0, u16, 0x34) = 5;
            PlaySoundId(4, 0xB5A);
        }
        break;
    case 5:
        {
            u16 *q = &D_sc07_004_801F8EB2;
            u16 t = D_sc07_004_801F8EB0;

            *q += 0xA;
            D_sc07_004_801F8EB0 = t + 0xC;
        }
        func_sc07_004_801AEB94();
        func_sc07_004_801A86F8();
        if (AF(arg0, s32, 0xD4) != 0) {
            if (AF(arg0, s32, 0x1C) < 0x10) {
                func_sc07_004_801A87C4(AF(arg0, s32, 0xD4), 0x1000, 0x100);
            } else {
                func_sc07_004_801A876C(AF(arg0, s32, 0xD4), 0x1600, 0x30);
            }
        }
        if (TickTimer(arg0) != 0 && D_sc07_004_801F8720 != 0) {
            func_sc07_004_801AD294();
            AF(arg0, u16, 0x100) = 1;
            AF(arg0, s32, 0x1C) = 0x50;
            AF(arg0, u16, 0x34) = 6;
        }
        break;
    case 6:
        if (!(AF(arg0, s32, 0x1C) & 0xF)) {
            SpawnActor(0x39D, arg0);
            func_sc07_004_801AD640(arg0, AF(arg0, u16, 0x100) & 3);
            AF(arg0, u16, 0x100) += 2;
            if (GetRumbleScript() == 0) {
                StartRumbleScript(&D_80062BC0);
            }
        }
        func_sc07_004_801AEB94();
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0xCC) = SpawnActor(0x39F, arg0);
            func_sc07_004_801AD2CC();
            AF(arg0, u16, 0x34) = 7;
        }
        break;
    case 7:
        r = 1;
        if (AF(arg0, s32, 0xCC) != 0) {
            r = func_sc07_004_801ACE04(AF(arg0, s32, 0xCC)) != 0;
        }
        if (r != 0) {
            AF(arg0, u16, 0x100) = 0;
            AF(arg0, u16, 0x34) = 8;
        }
        AF(arg0, s32, 0x1C)++;
        if (!(AF(arg0, s32, 0x1C) & 7) && GetRumbleScript() == 0) {
            StartRumbleScript(&D_sc07_004_801AFDDC);
        }
        break;
    case 8:
        if (AF(arg0, s16, 0x100) < 0xFF) {
            AF(arg0, s16, 0x100) += 4;
            if (AF(arg0, s16, 0x100) >= 0x100) {
                AF(arg0, s16, 0x100) = 0xFF;
                AF(arg0, u16, 0x34) = 9;
                RequestMapChange(&D_sc07_002_8018A27C);
            } else if (AF(arg0, s16, 0x100) < 0x80) {
                AF(arg0, s32, 0x1C)++;
                if (!(AF(arg0, s32, 0x1C) & 7) && GetRumbleScript() == 0) {
                    StartRumbleScript(&D_sc07_004_801AFDDC);
                }
            }
        }
        DrawFadeWhite(AF(arg0, u8, 0x100), 1);
        break;
    case 9:
        DrawFadeWhite(0xFF, 1);
        break;
    }
    func_sc07_002_8018503C();
    func_sc07_004_801A43EC();
    IsEventDone(arg0);
}


s32 func_sc07_004_801A2C4C(void) {
    return 0;
}

s32 func_sc07_004_801A2C54(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 7;
}

extern s32 func_sc07_002_8017C068();

void func_sc07_004_801A2C68(s32 arg0) {
    func_sc07_002_8017C068(arg0);
}

extern s16 D_sc07_004_801F8868;
extern s16 D_sc07_004_801F886C;

void func_sc07_004_801A2C88(s32 arg0) {
    D_sc07_004_801F8868 = 1;
    D_sc07_004_801F886C = 0;
}

extern void DrawFadeWhite();

void func_sc07_004_801A2CA4(void) {
    if (D_sc07_004_801F8868 == 0) {
        return;
    }
    switch (D_sc07_004_801F8868) {
    case 1:
        D_sc07_004_801F886C += 0x30;
        if (D_sc07_004_801F886C >= 0x60) {
            D_sc07_004_801F8868 = 2;
        }
        break;
    case 2:
        D_sc07_004_801F886C -= 0x18;
        if (D_sc07_004_801F886C < 0) {
            D_sc07_004_801F886C = 0;
        }
        if (D_sc07_004_801F886C == 0) {
            D_sc07_004_801F8868 = 0;
        }
        break;
    }
    DrawFadeWhite((u8)D_sc07_004_801F886C, 1);
}

extern void (*D_sc07_004_801AFDF4[])();
extern void func_sc07_004_801A4258();
extern s32 func_sc07_004_801A3F10();

void func_sc07_004_801A2D78(u8 *arg0) {
    D_sc07_004_801AFDF4[AF(arg0, u16, 2)]();
    func_sc07_004_801A4258();
    func_sc07_004_801A3F10();
}

extern void ShowDamage();
extern void func_8016B3F4();

void func_sc07_004_801A2DC4(u8 *arg0) {
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, s16, 0x76) = 0x800;
    AF(arg0, u8, 0xC1) = 0;
    ((s16 *)arg0)[0x2F] = 0;
    ((u16 *)arg0)[0x2E] &= 0xFFFE;
    D_sc07_002_8019FF8A |= 0x400;
    ShowDamage(arg0, 0x27A);
    if (D_sc07_004_801F8714 != 0) {
        D_sc07_004_801F8714 -= 0x27A;
        if (D_sc07_004_801F8714 < 0) {
            D_sc07_004_801F8714 = 0;
        }
    }
    AF(arg0, u16, 0x7C) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x7E) = AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52);
    AF(arg0, u16, 0x80) = AF(arg0, u16, 0xE);
    func_8016B3F4(arg0);
    PlaySoundId(0xB4C, 0);
}

extern u8 D_sc07_004_801C6614;
extern u8 D_sc07_004_801C6674;
extern u8 D_sc07_004_801EF9A8;
extern s16 D_sc07_004_801F8860;
extern void QueueImage();
extern s32 func_sc07_004_801A3EEC();

void func_sc07_004_801A2E90(struct_FA *arg0) {
    func_sc07_004_801A36F0(arg0);
    func_sc07_004_801A34C4(arg0);
    arg0->field_E6 = -1;
    arg0->field_5C &= 0xFFFE;
    D_sc07_002_8019FF8A |= 0x208;
    QueueImage(&D_sc07_004_801C6614);
    QueueImage(&D_sc07_004_801C6674);
    SetScript(arg0, &D_sc07_004_801EF9A8);
    arg0->field_F8 = 0;
    if (D_sc07_004_801F8860 != 1) {
        func_sc07_004_801A3EEC(1);
    }
}

extern u8 g_DefaultPose;
extern u16 D_800B99DA;
extern u8 g_Player;
extern u16 D_80126CE0;
extern u8 D_sc07_004_801AFAB8;
extern s16 D_sc07_004_801AFB90;
extern s32 D_sc07_004_801BC9EC;
extern s16 D_sc07_004_801F872A;
extern void ClearPlayerWord184();
extern void func_sc07_004_801A3114();

void func_sc07_004_801A2F34(u8 *arg0) {
    s16 t;
    s32 *p;
    s16 *q;

    q = (s16 *)&g_Player;
    t = AF(arg0, s16, 0xE6);
    if (t == 0) {
        AF(&D_sc07_004_801F8724, s16, 6) = (s16)D_80126CE0 >> 1;
        StepMime(&D_sc07_004_801F8724);
        if (D_sc07_004_801F8730 & 0x4000) {
            AF(arg0, s16, 0xE6)++;
        }
    } else if (t != 1 && AF(arg0, s16, 0x98) == 0 && (s16)D_80126CE0 >= D_sc07_004_801AFB90) {
        p = &D_sc07_004_801BC9EC;
        SetModelParts(AF(arg0, s32, 0x20), p);
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x20) = &g_DefaultPose;
        AF(arg0, s16, 0xE6) = 0;
        InitMime(&D_sc07_004_801F8724, &D_sc07_004_801AFAB8, *p);
    }
    if (D_800B99DA & 1) {
        if (q[0xC4] > 0) {
            q[0xC4]--;
        }
    }
    if (q[0xC4] == 0) {
        if (++AF(arg0, s16, 0xF8) >= 0x19) {
            ClearPlayerWord184();
            func_sc07_004_801A3114(arg0);
        }
    } else {
        AF(arg0, s16, 0xF8) = 0;
    }
}

extern void func_sc07_004_801A46B8();

void func_sc07_004_801A30C8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x10A) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFF);
    func_sc07_004_801A46B8();
    SetState((s32) arg0, 8);
}

extern u8 D_sc07_004_801EF9A8;
extern void SetScriptAtEnd();

void func_sc07_004_801A3114(s32 arg0) {
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xDFFE);
    func_sc07_004_801A36F0(arg0);
    SetState(arg0, 0xC);
    if (AF(arg0, s16, 0xE6) < 0) {
        AF(arg0, s16, 0x34) = 2;
        SetScriptAtEnd(arg0, (s32) &D_sc07_004_801EF9A8);
    }
}

extern s16 g_PlayerX;
extern s16 D_80126B66;

void func_sc07_004_801A3180(u8 *arg0, s32 arg1) {
    MATRIX m;
    SVECTOR o;
    SVECTOR in;
    VECTOR v;
    s32 d;
    s16 ang;
    s16 a;
    s32 dx;
    s32 dz;
    s32 e;
    s16 b;

    if (D_sc07_002_8019FF8A & 0x40) {
        func_sc07_004_801A41CC();
        MoveObject(arg0);
        if (func_sc07_004_801A3594(arg0) != 0) {
            func_sc07_004_801A34C4(arg0);
        }
        return;
    }
    d = SquareRoot0(g_PlayerX * g_PlayerX + D_80126B66 * D_80126B66);
    if (d < 0x100) {
        o.vx = o.vy = o.vz = 0;
    } else {
        m = GsIDMATRIX;
        RotMatrixY((ratan2(-D_80126B66, g_PlayerX) - 0x400) & 0xFFF, &m);
        in.vx = in.vy = 0;
        if (d - 0x100 > 0x300) {
            in.vz = -0x300;
        } else {
            in.vz = 0x100 - d;
        }
        ApplyMatrixSV(&m, &in, &o);
    }
    ang = HeadingToPoint(arg0 + 4, &o);
    a = (ang - AF(AF(arg0, u8 *, 0x20), u16, 0x12)) & 0xFFF;
    if (a >= 0x800) {
        a |= 0xF000;
    }
    if (a < 0) {
        b = -a;
    } else {
        b = a;
    }
    if (b > 0x400) {
        return;
    }
    dx = o.vx - AF(arg0, s16, 6);
    dz = o.vz - AF(arg0, s16, 0xE);
    e = SquareRoot0(dx * dx + dz * dz);
    v.vx = v.vy = 0;
    if (!(D_sc07_002_8019FF8A & 0x80) && e > 0x100 && b < 0x300) {
        D_sc07_002_8019FF8A |= 0x40;
        func_sc07_004_801A34FC(arg0, &o);
        v.vz = -0x100000;
        D_sc07_002_8019FF8A |= 0x10;
    } else {
        v.vz = -((0x400 - b) * arg1);
    }
    m = GsIDMATRIX;
    RotMatrixY(ang, &m);
    ApplyMatrixLV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.vx;
    AF(arg0, s32, 4) += v.vx;
    AF(arg0, s32, 0x18) = v.vz;
    AF(arg0, s32, 0xC) += v.vz;
}

extern u16 D_sc07_002_8019FF8A;
extern void StopMotion();

s32 func_sc07_004_801A34C4(s32 arg0) {
    u16 temp_v0;

    StopMotion(arg0);
    temp_v0 = D_sc07_002_8019FF8A & 0xFFAF;
    D_sc07_002_8019FF8A = temp_v0;
    return (s32) temp_v0;
}

typedef struct { u8 field_0[6]; s16 field_6; u8 field_8[6]; s16 field_E; u8 field_10[0xD8]; s16 field_E8, field_EA, field_EC, field_EE; u8 field_F0[0x16]; s16 field_106; } struct_108;

void func_sc07_004_801A34FC(struct_108 *arg0, SVECTOR *arg1) {
    s16 *d;
    s16 a;
    s16 b;

    arg0->field_E8 = arg1->vx;
    arg0->field_EA = arg1->vz;
    arg0->field_EC = arg0->field_E8 - arg0->field_6;
    arg0->field_EE = arg0->field_EA - arg0->field_E;
    d = &arg0->field_EC;
    if (d[0] < 0) {
        a = -d[0];
    } else {
        a = d[0];
    }
    arg0->field_106 = 0;
    if (d[1] < 0) {
        b = -d[1];
    } else {
        b = d[1];
    }
    if (a < b) {
        arg0->field_106 = 1;
    }
}

s32 func_sc07_004_801A3594(u8 *arg0) {
    s16 d[12];
    s32 a;
    s32 b;
    s32 x = 0; /* MATCH-TRICK: dead initialiser. The original tests the speed in one register and keeps a copy of it in another (move a0,v0) for the sign test; GCC keeps that copy only when the variable receiving it is already referenced before the two arms merge */

    switch (AF(arg0, s16, 0x106)) {
    case 0:
        a = AF(arg0, u16, 0xE8);
        b = AF(arg0, u16, 6);
        b = a - b;
        d[0] = b;
        a = AF(arg0, s16, 0xEC);
        break;
    case 1:
        a = AF(arg0, u16, 0xEA);
        b = AF(arg0, u16, 0xE);
        b = a - b;
        d[1] = b;
        a = AF(arg0, s16, 0xEE);
        break;
    default:
        return 0;
    }
    if (a == 0) {
        return 1;
    }
    x = a;
    if ((s16)b == 0 || (s16)(b ^ x) < 0) {
        return 1;
    }
    return 0;
}

void func_sc07_004_801A3624(s32 a, u16 *p, s32 n) {
    s32 v;
    s16 d;
    s16 m;

    v = (a - *p) & 0xFFF;
    d = v >= 0x800 ? v | 0xF000 : v;
    if (d < 0) {
        m = -d;
    } else {
        m = d;
    }
    if (m > (u16)n) {
        if (d < 0) {
            *p -= n;
        } else {
            *p += n;
        }
    } else {
        *p = a;
    }
}

s32 func_sc07_004_801A36A8(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    s32 temp_v0;
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0x108) + 0x30;
    AF(arg0, u16, 0x108) = temp_a0;
    temp_v0 = rsin((s32) (s16) temp_a0) >> 8;
    AF(arg0, s16, 0x52) = (s16) temp_v0;
    return temp_v0;
}

void func_sc07_004_801A36F0(u8 *arg0) {
    u16 a;
    u16 t;

    a = AF(arg0, u16, 0xA);
    t = AF(arg0, u16, 0x52);
    AF(arg0, u16, 0x52) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, u16, 0xA) = a + t;
}

extern s16 D_sc07_004_801AFE34[];

s32 func_sc07_004_801A370C(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(arg0, u16, 0x10A) + 1;
    AF(arg0, u16, 0x10A) = temp_v0_2;
    temp_v0 = D_sc07_004_801AFE34[(temp_v0_2 & 7)];
    AF(temp_v1, u16, 0x1C) = temp_v0;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
    return (s32) temp_v0;
}

extern s32 D_sc07_004_801AFB8C;
extern s32 D_sc07_004_801BF01C;
extern u8 D_sc07_004_801F8724;
extern void InitMime();

void func_sc07_004_801A3744(s32 arg0) {
    AF(arg0, s16, 0xE6) = 4;
    InitMime((s32) &D_sc07_004_801F8724, D_sc07_004_801AFB8C, D_sc07_004_801BF01C);
    AF(arg0, s16, 0x100) = -0x40;
}

extern s32 D_sc07_004_801AFB7C[];
extern void func_sc07_004_801A3A6C();
extern void UpdateModelZYX();
extern s32 func_sc07_004_801A8564();
extern void FreeProp();

s32 func_sc07_004_801A3798(u8 *arg0, s16 arg1) {
    s32 t;

    t = func_sc07_004_801A395C(arg0, (s16)(AF(arg0, s16, 0x100) - 0x240));
    if (AF(arg0, s16, 0xE6) >= 0) {
        StepMime(&D_sc07_004_801F8724);
        if (D_sc07_004_801F8730 & 0x4000) {
            switch (--AF(arg0, s16, 0xE6)) {
            case 3:
                SetModelParts(AF(arg0, u8 *, 0x20), &D_sc07_004_801BC9EC);
                if (AF(arg0, s32, 0xD4) != 0) {
                    func_sc07_004_801A7D18(AF(arg0, s32, 0xD4));
                    AF(arg0, s32, 0xD4) = 0;
                }
                func_sc07_004_801A3A6C(arg0);
                AF(arg0, s16, 0x100) = 0;
                UpdateModelZYX(arg0);
                if (arg1 != 0) {
                    AF(arg0, s32, 0xD4) = func_sc07_004_801A8564(arg0);
                }
            case 0:
            case 1:
            case 2:
                InitMime(&D_sc07_004_801F8724, D_sc07_004_801AFB7C[AF(arg0, s16, 0xE6)], D_sc07_004_801BC9EC);
                break;
            default:
                SetModelParts(AF(arg0, u8 *, 0x20), D_sc07_004_801B6E94);
                SetScriptAtEnd(arg0, &D_sc07_004_801EF9A8);
                if (arg1 != 0) {
                    D_sc07_002_8019FF8A &= 0xFFF7;
                    if (((s32 *)arg0)[0x35] != 0) {
                        FreeProp(((s32 *)arg0)[0x35]);
                    }
                }
                break;
            }
        }
        return 0;
    }
    return AF(arg0, s16, 0x98) == 0 && t != 0;
}

s32 func_sc07_004_801A395C(u8 *arg0, s32 arg1_0) {
    s16 arg1 = arg1_0;
    s16 v = AF(arg0, s16, 0xA);
    s16 t;
    s32 c;

    if (v == arg1) {
        return 1;
    }
    if (arg1 < v) {
        t = v - 2;
        AF(arg0, s16, 0xA) = t;
        c = arg1 < t;
    } else {
        t = v + 2;
        AF(arg0, s16, 0xA) = t;
        c = t < arg1;
    }
    if (c) {
        return 0;
    }
    AF(arg0, s16, 0xA) = arg1;
    return 1;
}

void func_sc07_004_801A39D0(u8 *arg0) {
    SVECTOR v;
    s32 flag;

    SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    v.vx = 0;
    v.vy = -0x40;
    v.vz = 0x30;
    RotTransSV(&v, &v, &flag);
    AF(arg0, s16, 6) = AF(AF(arg0, u8 *, 0x20), s32, 0x48) = v.vx;
    AF(arg0, s16, 0xA) = AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = v.vy;
    AF(arg0, s16, 0xE) = AF(AF(arg0, u8 *, 0x20), s32, 0x50) = v.vz;
}

void func_sc07_004_801A3A6C(u8 *arg0) {
    SVECTOR v;
    s32 flag;

    SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    v.vx = 0;
    v.vy = 0x40;
    v.vz = -0x30;
    RotTransSV(&v, &v, &flag);
    AF(arg0, s16, 6) = AF(AF(arg0, u8 *, 0x20), s32, 0x48) = v.vx;
    AF(arg0, s16, 0xA) = AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = v.vy;
    AF(arg0, s16, 0xE) = AF(AF(arg0, u8 *, 0x20), s32, 0x50) = v.vz;
}

extern s32 D_sc07_004_801F8864;

void func_sc07_004_801A3B08(void) {
    D_sc07_004_801F8864 = 0;
}

extern MATRIX GsIDMATRIX;
extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern s32 HeadingToSV();
extern s32 GroundDistSqToPlayer();
extern s32 PlayerFlag1000();
extern s32 PlayerEvent08();

void func_sc07_004_801A3B18(u8 *arg0) {
    MATRIX m;
    SVECTOR v;
    SVECTOR t;
    VECTOR lv;
    s32 flag;
    s16 a;
    s16 b;
    s32 d;
    s32 *q;

    m = GsIDMATRIX;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = AF(arg0, s16, 0xE);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x80;
    RotTransSV(&v, &v, &flag);
    t.vx = g_PlayerX;
    t.vy = D_80126B62;
    t.vz = D_80126B66;
    q = (s32 *)&g_Player;
    a = (HeadingToSV(&v, &t) - AF(AF(arg0, u8 *, 0x20), u16, 0x12)) & 0xFFF;
    if (a >= 0x800) {
        a |= 0xF000;
    }
    if (a < 0) {
        b = -a;
    } else {
        b = a;
    }
    d = GroundDistSqToPlayer(arg0);
    if (PlayerFlag1000() == 0 && d <= 0x23FFF && b < 0x200 && PlayerEvent08(q) == 0) {
        if (D_sc07_004_801F8864 > -0x1E0000) {
            D_sc07_004_801F8864 += -0xC000;
        }
    } else if (D_sc07_004_801F8864 < 0) {
        D_sc07_004_801F8864 += 0x10000;
        if (D_sc07_004_801F8864 > 0) {
            D_sc07_004_801F8864 = 0;
        }
    }
    if (D_sc07_004_801F8864 != 0) {
        lv.vy = 0;
        lv.vx = 0;
        lv.vz = D_sc07_004_801F8864;
        ApplyRotMatrixLV(&lv, &lv);
        q[1] += lv.vx;
        q[3] += lv.vz;
    }
}

extern s32 D_80126B5C;
extern s32 D_80126B64;

void func_sc07_004_801A3D60(s32 arg0) {
    MATRIX m;
    VECTOR v;
    s32 t;

    m = GsIDMATRIX;
    if (D_sc07_004_801F8864 <= 0xAFFFF) {
        D_sc07_004_801F8864 += 0x4000;
    }
    t = GroundDistSqToPlayer(arg0);
    RotMatrixY((s16)HeadingToPlayer(arg0), &m);
    if (D_sc07_004_801F8864 != 0 && t > 0x100 && PlayerEvent08(&g_Player) == 0) {
        v.vy = 0;
        v.vx = 0;
        v.vz = D_sc07_004_801F8864;
        ApplyMatrixLV(&m, &v, &v);
        D_80126B5C += v.vx;
        D_80126B64 += v.vz;
    }
}

extern u16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s32 func_sc07_004_801A54F0();

void func_sc07_004_801A3EA8(s32 arg0) {
    if (func_sc07_004_801A54F0(arg0, 0x20) != 0) {
        g_PlayerHitDamage = 0x60;
        g_PlayerHitKind |= 0x4000;
    }
}

extern s16 D_sc07_004_801F8860;

s32 func_sc07_004_801A3EEC(s32 arg0) {
    u16 temp_v0;

    D_sc07_004_801F8860 = (s16) arg0;
    temp_v0 = D_sc07_002_8019FF8A | 0x820;
    D_sc07_002_8019FF8A = temp_v0;
    return (s32) temp_v0;
}

extern s32 func_8013D13C();
extern s32 func_sc07_002_8018184C();

s32 func_sc07_004_801A3F10(void) {
    s32 var_v0;

    if ((D_sc07_002_8019FF8A & 0x20) && (func_8013D13C((s32) D_sc07_004_801F8860) == 0)) {
        D_sc07_002_8019FF8A &= 0xFFDF;
    }
    var_v0 = D_sc07_002_8019FF8A & 0x800;
    if (var_v0 != 0) {
        var_v0 = func_sc07_002_8018184C((s32) D_sc07_004_801F8860);
        if (var_v0 == 0) {
            var_v0 = D_sc07_002_8019FF8A & 0xF7FF;
            D_sc07_002_8019FF8A = (u16) var_v0;
        }
    }
    return var_v0;
}

extern void FreeShadow();

void func_sc07_004_801A3FB0(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    if (AF(arg0, s32, 0xD0) != 0) {
        FreeShadow(AF(arg0, s32, 0xD0));
        AF(arg0, s32, 0xD0) = 0;
    }
}

extern s32 SpawnShadow();

s32 func_sc07_004_801A4008(s32 arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    var_v0 = AF(arg0, s32, 0xD0);
    if (var_v0 == 0) {
        var_v0 = SpawnShadow(arg0);
        AF(arg0, s32, 0xD0) = var_v0;
    }
    return var_v0;
}

void func_sc07_004_801A4060(s32 arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x18) = (s16) ((rsin((s32) AF(arg0, s16, 0xFE)) >> 3) + 0x1000);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin(AF(arg0, s16, 0xFE) + 0x800) >> 3) + 0x1000);
    AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 0x80);
}

extern u8 D_sc07_004_801A01B4;
extern u8 D_sc07_004_801AFEF8[];
extern u8 D_sc07_004_801F8744;
extern void SetShapeCircle();

void func_sc07_004_801A40CC(s32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        SetShapeCircle(&(&D_sc07_004_801F8744)[i * 0x40], 0x40);
        *(struct_4_3 *)&(&D_sc07_004_801F8744)[i * 0x40] = *(struct_4_3 *)D_sc07_004_801AFEF8;
        *(struct_4_3 *)&(&D_sc07_004_801F8744 + 4)[i * 0x40] = *(struct_4_3 *)&D_sc07_004_801A01B4;
    }
    func_sc07_004_801A417C(arg0);
}

extern s32 SpawnActorArg();

s32 func_sc07_004_801A417C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        SpawnActorArg(0x31F, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 0xF;
    } while (temp_v0 != 0);
    return temp_v0;
}

extern u8 D_sc07_004_801F8744;
extern u8 D_sc07_004_801F8745;
extern u8 D_sc07_004_801F8746;

void func_sc07_004_801A41CC(void) {
    s32 i;
    u8 *p;
    s32 off;

    i = 1;
    p = &D_sc07_004_801F8744;
    do {
        off = i * 0x40;
        (&D_sc07_004_801F8744)[off] = (p[0] >> 2) * (4 - i);
        (&D_sc07_004_801F8745)[off] = (p[1] >> 2) * (4 - i);
        (&D_sc07_004_801F8746)[off] = (p[2] >> 2) * (4 - i);
        i++;
    } while (i < 4);
}

extern u8 D_sc07_004_801F8744;
extern u8 D_sc07_004_801F8745;
extern u8 D_sc07_004_801F8746;
extern s16 D_sc07_004_801F8870;
extern s16 D_sc07_004_801F8872;
extern s16 D_sc07_004_801F8874;
extern s16 D_sc07_004_801F8878;
extern s16 D_sc07_004_801F887A;
extern s16 D_sc07_004_801F887C;
extern s16 D_sc07_004_801F8880;
extern s16 D_sc07_004_801F8882;
extern s16 D_sc07_004_801F8884;

void func_sc07_004_801A4258(void) {
    s16 *p = &D_sc07_004_801F8870;

    if (*p != D_sc07_004_801F8878) {
        *p += D_sc07_004_801F8880;
        D_sc07_004_801F8744 = *p >> 7;
    }
    if (D_sc07_004_801F8872 != D_sc07_004_801F887A) {
        D_sc07_004_801F8872 += D_sc07_004_801F8882;
        D_sc07_004_801F8745 = D_sc07_004_801F8872 >> 7;
    }
    if (D_sc07_004_801F8874 != D_sc07_004_801F887C) {
        D_sc07_004_801F8874 += D_sc07_004_801F8884;
        D_sc07_004_801F8746 = D_sc07_004_801F8874 >> 7;
    }
}

extern u8 D_sc07_004_801F8744;
extern u8 D_sc07_004_801F8745;
extern u8 D_sc07_004_801F8746;
extern s16 D_sc07_004_801F8870;
extern s16 D_sc07_004_801F8872;
extern s16 D_sc07_004_801F8874;
extern s16 D_sc07_004_801F8878;
extern s16 D_sc07_004_801F887A;
extern s16 D_sc07_004_801F887C;
extern s16 D_sc07_004_801F8880;
extern s16 D_sc07_004_801F8882;
extern s16 D_sc07_004_801F8884;
extern u8 D_sc07_004_801AFEF8[];
extern u8 D_sc07_004_801AFEF9[];
extern u8 D_sc07_004_801AFEFA[];

void func_sc07_004_801A4328(arg0) s32 arg0; {
    s32 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_v1;

    temp_a0 = arg0 * 4;
    D_sc07_004_801F8870 = D_sc07_004_801F8744 << 7;
    D_sc07_004_801F8872 = D_sc07_004_801F8745 << 7;
    D_sc07_004_801F8874 = D_sc07_004_801F8746 << 7;
    temp_v1 = D_sc07_004_801AFEF8[temp_a0];
    D_sc07_004_801F8878 = temp_v1 << 7;
    temp_a1 = D_sc07_004_801AFEF9[temp_a0];
    D_sc07_004_801F887A = temp_a1 << 7;
    temp_a0_2 = D_sc07_004_801AFEFA[temp_a0];
    D_sc07_004_801F8880 = (temp_v1 - D_sc07_004_801F8744) * 0x10;
    D_sc07_004_801F8882 = (temp_a1 - D_sc07_004_801F8745) * 0x10;
    D_sc07_004_801F887C = temp_a0_2 << 7;
    D_sc07_004_801F8884 = (temp_a0_2 - D_sc07_004_801F8746) * 0x10;
}

extern s32 D_sc07_004_801F8720;
extern s32 func_sc07_002_801819CC();

s32 func_sc07_004_801A43EC(void) {
    s32 var_v0;

    var_v0 = D_sc07_004_801F8720;
    if (var_v0 == 0) {
        var_v0 = func_sc07_002_801819CC();
        D_sc07_004_801F8720 = var_v0;
    }
    return var_v0;
}

extern void (*D_sc07_004_801AFF34[])();

void func_sc07_004_801A4420(u8 *arg0) {
    D_sc07_004_801AFF34[AF(arg0, u16, 2)]();
}

extern s32 func_sc07_004_801A9C00();

void func_sc07_004_801A445C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    if ((AF(arg0, s16, 0xFE) == 0) && !(D_sc07_002_8019FF8A & 0x200)) {
        func_sc07_004_801A9C00((s32) arg0);
        AF(arg0, s16, 0xFE) = 8;
    }
}

extern s32 FindLastFreeActor();
extern s32 InitSpawnedActor();

s32 func_sc07_004_801A44C4(u8 *arg0) {
    struct_14_5 s;
    s32 t;

    if (arg0 != NULL && AF(arg0, u16, 0) != 0) {
        s.field_0 = AF(arg0, s16, 6);
        s.field_2 = AF(arg0, s16, 0xA);
        s.field_4 = AF(arg0, s16, 0xE);
    } else {
        s.field_4 = 0;
        s.field_2 = 0;
        s.field_0 = 0;
    }
    s.field_6 = 0x332;
    s.field_A = 0;
    s.field_8 = 0;
    s.field_10 = 0;
    s.field_E = 0;
    s.field_C = 0x7FFF;
    t = FindLastFreeActor();
    if (t == 0) {
        return 0;
    }
    return InitSpawnedActor(&s, t, arg0);
}

extern u8 D_801152A8;
extern s32 D_80126B78;
extern s32 D_80126B90;
extern s32 PathHitsModel();
extern void HitPlayer();

void func_sc07_004_801A4570(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s16 t;

    t = AF(arg0, s16, 0xFE);
    if (t != 0) {
        AF(arg0, s16, 0xFE) = t - 1;
        return;
    }
    if (GroundDistSqToPlayer(arg0) < 0x640 && (u16)(D_80126B62 - (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52)) + 0x8F) < 0xDF) {
        func_sc07_004_801A9C00(arg0);
        AF(arg0, s16, 0xFE) = 8;
        a.vx = AF(arg0, u16, 6) + AF(arg0, u16, 0x50);
        a.vy = AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52) - 0x40;
        a.vz = AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54);
        b.vx = g_PlayerX;
        b.vy = D_80126B62 - 0x20;
        b.vz = D_80126B66;
        if (PathHitsModel(D_80126B78, D_80126B90, &a, &b) != 0) {
            HitPlayer(1, 4, HeadingToPlayer(arg0), 0x40, &b, &D_801152A8);
        }
    }
}

void func_sc07_004_801A46B8(u8 *arg0) {
    AF(AF(arg0, u8 *, 0xD8), u16, 0x5C) &= 0x7FFF;
}

s32 func_sc07_004_801A46D4(s32 arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xD8);
    temp_v0 = AF(temp_v1, u16, 0x5C) | 0x8000;
    AF(temp_v1, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_004_801A46F0(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = 0;
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    return SetState(arg0, 1);
}

extern u8 D_sc07_004_801B001C;
extern u8 D_sc07_004_801B002C;
extern u8 D_sc07_004_801B003C;
extern u8 D_sc07_004_801B004C;
extern u8 D_sc07_004_801B005C;
extern u8 D_sc07_004_801B006C;
extern s32 D_sc07_004_801B75EC;
extern s32 D_sc07_004_801B80FC;
extern u8 D_sc07_004_801F8888;
extern s32 D_sc07_004_801F8894;
extern u8 D_sc07_004_801F8898;
extern s32 func_sc07_004_801A4A18();
extern void func_80132784();

void func_sc07_004_801A4724(u8 *arg0) {
    u8 *c;
    s32 n;

    c = AF(arg0, u8 *, 0xCC);
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0x70) == 0 && AF(arg0, s32, 0x1C) == 0x16) {
            InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B001C, D_sc07_004_801B75EC);
            if (c != 0) {
                InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B002C, D_sc07_004_801B80FC);
            }
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
    case 3:
        StepMime(&D_sc07_004_801F8888);
        if (c != 0) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (D_sc07_004_801F8894 & 0x4000) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 0x2F) {
            InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B003C, D_sc07_004_801B75EC);
            if (c != 0) {
                InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B004C, D_sc07_004_801B80FC);
            }
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 4:
        if (AF(arg0, s32, 0x1C) == 0x3C) {
            InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B005C, D_sc07_004_801B75EC);
            if (c != 0) {
                InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B006C, D_sc07_004_801B80FC);
            }
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 5:
        StepMime(&D_sc07_004_801F8888);
        if (c != 0) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (D_sc07_004_801F8894 & 0x4000) {
            func_sc07_004_801A4A18(arg0);
            func_sc07_004_801A4A18(AF(arg0, u8 *, 0x6C));
        }
        break;
    }
    n = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = n;
    if (n < 0x33) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (n << 12) / 50;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = (0x32 - AF(arg0, s32, 0x1C)) * 16;
        if (AF(arg0, s16, 0x70) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = -AF(AF(arg0, u8 *, 0x20), s16, 0x14);
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = -AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
        }
    }
    func_80132784(arg0, AF(arg0, u8 *, 0x64), 0);
}

extern u8 D_sc07_004_801B007C;
extern u8 D_sc07_004_801B00B4;
extern s32 D_sc07_004_801B75EC;
extern s32 D_sc07_004_801B80FC;
extern u8 D_sc07_004_801F8888;
extern u8 D_sc07_004_801F8898;
extern void InitMime();

s32 func_sc07_004_801A4A18(s32 arg0) {
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0xCC);
    if (AF(arg0, s16, 0x70) == 0) {
        InitMime((s32) &D_sc07_004_801F8888, (s32) &D_sc07_004_801B007C, D_sc07_004_801B75EC);
        if (temp_s1 != 0) {
            InitMime((s32) &D_sc07_004_801F8898, (s32) &D_sc07_004_801B00B4, D_sc07_004_801B80FC);
        }
    }
    AF(arg0, s16, 0x84) = 0;
    return SetState(arg0, 2);
}

extern s32 SetState();
s32 func_sc07_004_801A4AAC(s32 arg0);

s32 func_sc07_004_801A4AAC(s32 arg0) {
    return SetState(arg0, 3);
}

extern u8 D_sc07_004_801B00EC;
extern u8 D_sc07_004_801B00FC;
extern u8 D_sc07_004_801B010C;
extern u8 D_sc07_004_801B011C;
extern u8 D_sc07_004_801B012C;
extern u8 D_sc07_004_801B013C;
extern s32 D_sc07_004_801F888C;
extern u16 D_sc07_004_801F888E;
extern void FreeActor();

void func_sc07_004_801A4ACC(u8 *arg0) {
    u8 *o;

    o = AF(arg0, u8 *, 0xCC);
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0x70) != 0) {
            break;
        }
        StepMime(&D_sc07_004_801F8888);
        if (o != NULL) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (*(u16 *)&D_sc07_004_801F888C | D_sc07_004_801F888E) {
            break;
        }
        InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B00EC, D_sc07_004_801B75EC);
        if (o != NULL) {
            InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B00FC, D_sc07_004_801B80FC);
        }
        PlaySoundId(4, 0xABE);
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        StepMime(&D_sc07_004_801F8888);
        if (o != NULL) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (!(D_sc07_004_801F8894 & 0x4000)) {
            break;
        }
        InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B010C, D_sc07_004_801B75EC);
        if (o != NULL) {
            InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B011C, D_sc07_004_801B80FC);
        }
        AF(arg0, u16, 0x34)++;
        break;
    case 2:
        StepMime(&D_sc07_004_801F8888);
        if (o != NULL) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (!(D_sc07_004_801F8894 & 0x4000)) {
            break;
        }
        InitMime(&D_sc07_004_801F8888, &D_sc07_004_801B012C, D_sc07_004_801B75EC);
        if (o != NULL) {
            InitMime(&D_sc07_004_801F8898, &D_sc07_004_801B013C, D_sc07_004_801B80FC);
        }
        AF(arg0, u16, 0x34)++;
        break;
    case 3:
        StepMime(&D_sc07_004_801F8888);
        if (o != NULL) {
            StepMime(&D_sc07_004_801F8898);
        }
        if (!(D_sc07_004_801F8894 & 0x4000)) {
            break;
        }
        AF(arg0, u16, 0x34)++;
        if (AF(arg0, u8 *, 0x6C) != NULL) {
            AF(AF(arg0, u8 *, 0x6C), s16, 0x34) = 4;
        }
        break;
    case 4:
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) -= 0x80;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
        if (AF(arg0, s16, 0x70) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) -= 0x10;
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
            if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) > 0) {
                break;
            }
            AF(AF(arg0, u8 *, 0x64), s32, 0xCC) = 0;
            if (o != NULL) {
                FreeActor(o);
            }
            FreeActor(arg0);
            D_sc07_002_8019FF8A &= ~2;
        } else {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 0x10;
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = -AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
            if (AF(AF(arg0, u8 *, 0x20), s16, 0x1A) > 0) {
                break;
            }
            if (o != NULL) {
                FreeActor(o);
            }
            FreeActor(arg0);
        }
        return;
    }
    func_80132784(arg0, AF(arg0, u8 *, 0x64), 0);
}

extern void (*D_sc07_004_801B014C[])();

void func_sc07_004_801A4E80(u8 *arg0) {
    D_sc07_004_801B014C[AF(arg0, u16, 2)]();
}

extern MATRIX GsIDMATRIX;
extern s32 D_sc07_004_801F888C;
extern void func_sc07_004_801A4FDC();
extern void func_sc07_004_801A5094();

void func_sc07_004_801A4EBC(u8 *arg0) {
    MATRIX m;
    s32 *p;

    p = &D_sc07_004_801F888C;
    if (*(u16 *)p >= 2 && *(u16 *)p < 5) {
        if (*p == 2) {
            PlaySoundId(0xABE, 0);
        }
        m = GsIDMATRIX;
        RotMatrixY(AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12), &m);
        m.t[0] = AF(AF(arg0, u8 *, 0x64), s16, 6);
        m.t[1] = AF(AF(arg0, u8 *, 0x64), s16, 0xA);
        m.t[2] = AF(AF(arg0, u8 *, 0x64), s16, 0xE);
        SetRotMatrix(&m);
        SetTransMatrix(&m);
        func_sc07_004_801A4FDC();
        func_sc07_004_801A5094();
    }
}

extern s32 SpawnPropAt();

void func_sc07_004_801A4FDC(void) {
    SVECTOR sv;
    VECTOR v;
    s32 flag;
    u8 *p;

    sv.vx = (rand() & 0xFF) - 0x80;
    sv.vy = 0;
    sv.vz = -(rand() & 0x7F);
    RotTransSV(&sv, &sv, &flag);
    sv.vy = -0x200;
    p = (u8 *)SpawnPropAt(0x22, &sv);
    if (p != NULL) {
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC020;
        v.vx = 0;
        v.vy = 0xFFFC0000;
        v.vz = -(((rand() & 0xF) + 0x1C) << 16);
        ApplyRotMatrixLV(&v, p + 0x10);
        AF(p, s16, 0x34) = 0x3000;
    }
}

extern s8 D_sc07_004_801F8747[];
typedef struct { u8 field_0[0x30]; s16 field_30; s32 field_34; } struct_38_9;

void func_sc07_004_801A5094(void) {
    SVECTOR v;
    VECTOR w;
    s32 flag;
    u8 *o;

    v.vx = rand() % 320 - 0xA0;
    v.vy = -((rand() & 0x7F) + 0x40);
    v.vz = -((rand() & 0x3F) + 0x20);
    RotTransSV(&v, &v, &flag);
    o = (void *)SpawnPropAt(0x2E, &v);
    if (o != NULL) {
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC020;
        w.vx = 0;
        w.vy = 0;
        w.vz = -(((rand() & 7) + 0x20) << 16);
        ApplyRotMatrixLV(&w, o + 0x10);
        D_sc07_004_801F8747[0] = 1;
        ((struct_38_9 *)o)->field_30 = 6;
        ((struct_38_9 *)o)->field_34 = *(s32 *)(D_sc07_004_801F8747 - 3);
    }
}

extern void PushAlongView16();

void func_sc07_004_801A5194(u8 *arg0) {
    VECTOR v;

    v.vx = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x48) << 16;
    v.vy = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x4C) << 16;
    v.vz = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x50) << 16;
    PushAlongView16(&v, arg0 + 4, -0x60);
    AF(AF(arg0, u8 *, 0x20), MATRIX, 0x34) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), MATRIX, 0x34);
    AF(AF(arg0, u8 *, 0x20), MATRIX, 0x54) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), MATRIX, 0x54);
    AF(AF(arg0, u8 *, 0x20), s32, 0x48) = AF(arg0, s16, 6);
    AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = AF(arg0, s16, 0xA);
    AF(AF(arg0, u8 *, 0x20), s32, 0x50) = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s32, 0x68) = AF(arg0, s16, 6);
    AF(AF(arg0, u8 *, 0x20), s32, 0x6C) = AF(arg0, s16, 0xA);
    AF(AF(arg0, u8 *, 0x20), s32, 0x70) = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x18) * 7) >> 3;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x1A) * 7) >> 3;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x1C) * 7) >> 3;
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 1;
}

extern void (*D_sc07_004_801B0160[])();

void func_sc07_004_801A53B8(u8 *arg0) {
    D_sc07_004_801B0160[AF(arg0, u16, 2)]();
}


s32 func_sc07_004_801A53F4(s32 arg0) {
    return SetState(arg0, 1);
}

extern void SetForwardVelocity();

void func_sc07_004_801A5414(u8 *arg0) {
    AF(arg0, s32, 0xF0) = 0xFFF40000;
    SetForwardVelocity(arg0, 0xFFF40000);
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, s16, 0x100) = 1;
    SetState(arg0, 2);
    PlaySoundId(0xABB, 0);
}

extern void (*D_sc07_004_801B0168[])();

void func_sc07_004_801A5470(u8 *arg0) {
    D_sc07_004_801B0168[AF(arg0, u16, 2)]();
}

void func_sc07_004_801A54AC(s32 arg0) {
    if (func_sc07_004_801A54F0(arg0, 0x40) != 0) {
        g_PlayerHitDamage = 0x78;
        g_PlayerHitKind |= 0x4000;
    }
}

extern void RotTransSV();
extern void SetRotMatrix();
extern void SetTransMatrix();

s32 func_sc07_004_801A54F0(u8 *arg0, s32 arg1) {
    MATRIX m;
    SVECTOR p;
    SVECTOR v;
    s32 flag;

    m = GsIDMATRIX;
    RotMatrixY((s16)HeadingToPlayer(arg0), &m);
    SetRotMatrix(&m);
    p.vx = AF(arg0, s16, 6);
    m.t[0] = p.vx;
    p.vy = D_80126B62 - 0x20;
    m.t[1] = p.vy;
    p.vz = AF(arg0, s16, 0xE);
    m.t[2] = p.vz;
    SetTransMatrix(&m);
    v.vy = 0;
    v.vx = 0;
    v.vz = -arg1;
    RotTransSV(&v, &v, &flag);
    if (PathHitsModel(D_80126B78, D_80126B90, &p, &v) != 0) {
        HitPlayer(1, 1, 0, 10, &v, &D_801152A8);
        return 1;
    }
    return 0;
}

s32 func_sc07_004_801A5654(s32 arg0, s32 arg1, s32 arg2) {
    s32 o;

    o = SpawnActorArg(0x339, arg2, arg0);
    if (o != 0) {
        AF(o, s16, 0xFE) = arg1;
    }
    return o;
}

extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;

void func_sc07_004_801A5698(u8 *arg0, s16 arg1) {
    MATRIX m;
    SVECTOR v;
    s32 flag;

    m = GsIDMATRIX;
    m.t[0] = g_PlayerX;
    m.t[1] = D_80126B62;
    m.t[2] = D_80126B66;
    RotMatrixY(arg1 + AF(AF(arg0, u8 *, 0x64), s16, 0x102), &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x1A0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&v, &v, &flag);
    AF(arg0, s16, 6) = v.vx;
    AF(arg0, s16, 0xE) = v.vz;
}

s32 func_sc07_004_801A5798(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        SpawnActorArg(0x31F, var_s0 + 0x100, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 0xA;
    } while (temp_v0 != 0);
    return temp_v0;
}

extern u8 D_sc07_004_801AFEBC;
extern u8 D_sc07_004_801B01C4;
extern u8 D_sc07_004_801B01EC;
extern s32 D_sc07_004_801B02B8[];
extern u8 D_sc07_004_801B017A[];
extern SVECTOR D_sc07_004_801B0174[];
extern u8 D_sc07_004_801B0176[];
extern u8 D_sc07_004_801B0178[];
extern u8 D_sc07_004_801AFE4A[];
extern SVECTOR D_sc07_004_801AFE44[];
extern u8 D_sc07_004_801AFE46[];
extern u8 D_sc07_004_801AFE48[];
extern s32 AllocSpriteInRange();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitNullModel();
extern void InitSpriteKind3();
extern void StartSpriteAnim();
s32 func_sc07_004_801A5AE0(s32 arg0);
extern void func_8001CD9C();
s32 func_sc07_004_801A5B00(s32 arg0);
s32 func_sc07_004_801A5AA0(s32 arg0);

void func_sc07_004_801A57E8(u8 *arg0) {
    u8 *p;
    s32 m;
    u8 t;
    u16 f;

    p = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    AF(arg0, u8 *, 0xCC) = p;
    m = AllocActorModel();
    AF(arg0, s32, 0x20) = m;
    if (m == 0 || p == NULL) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(m);
    if (AF(arg0, u16, 0x70) & 0x100) {
        AF(arg0, s16, 0x104) = AF(AF(arg0, u8 *, 0x64), s16, 0x36);
    }
    t = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x70) = t;
    if (AF(arg0, s16, 0x104) != 0) {
        AF(arg0, s16, 0x102) = D_sc07_004_801B0174[t].pad & 0xF000; AF(arg0, s16, 0xFE) = D_sc07_004_801B0174[AF(arg0, s16, 0x70)].pad & 0xFFF; AF(arg0, u8 *, 0xD4) = &D_sc07_004_801B01C4;
        AF(arg0, s16, 6) = D_sc07_004_801B0174[AF(arg0, s16, 0x70)].vx;
        AF(arg0, s16, 0xA) = D_sc07_004_801B0174[AF(arg0, s16, 0x70)].vy;
        AF(arg0, s16, 0xE) = D_sc07_004_801B0174[AF(arg0, s16, 0x70)].vz;
    } else {
        AF(arg0, s16, 0x102) = D_sc07_004_801AFE44[t].pad & 0xF000; AF(arg0, s16, 0xFE) = D_sc07_004_801AFE44[AF(arg0, s16, 0x70)].pad & 0xFFF; AF(arg0, u8 *, 0xD4) = &D_sc07_004_801AFEBC;
        AF(arg0, s16, 6) = D_sc07_004_801AFE44[AF(arg0, s16, 0x70)].vx;
        AF(arg0, s16, 0xA) = D_sc07_004_801AFE44[AF(arg0, s16, 0x70)].vy;
        AF(arg0, s16, 0xE) = D_sc07_004_801AFE44[AF(arg0, s16, 0x70)].vz;
    }
    if (AF(arg0, s16, 0x102) != 0) {
        InitSpriteKind3(p, &D_sc07_004_801B01EC, 0, 0);
        StartSpriteAnim(p, arg0 + 0xF0, D_sc07_004_801B02B8[rand() & 3]);
        AF(arg0, s16, 0xF4) = (AF(arg0, s16, 0xFE) * 3) & 7;
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x2000;
        AF(p, u8, 0x27) = 0x64;
        func_sc07_004_801A5AE0((s32)arg0);
        f = 0x8010;
    } else {
        func_8001CD9C(p, &D_sc07_004_801F8744);
        AF(arg0, s16, 0x100) = (AF(arg0, s16, 0xFE) * 0x300) & 0xFFF;
        if (AF(arg0, s16, 0x104) != 0) {
            func_sc07_004_801A5B00((s32)arg0);
            f = 0xC020;
        } else {
            func_sc07_004_801A5AA0((s32)arg0);
            f = 0xC020;
        }
    }
    AF(p, u16, 0x2C) = f;
    AF(p, s32, 4) |= 0x50800000;
}

s32 func_sc07_004_801A5AA0(s32 arg0) {
    return SetState(arg0, 1);
}

s32 func_sc07_004_801A5AC0(s32 arg0) {
    return SetState(arg0, 2);
}

s32 func_sc07_004_801A5AE0(s32 arg0);

s32 func_sc07_004_801A5AE0(s32 arg0) {
    return SetState(arg0, 3);
}


s32 func_sc07_004_801A5B00(s32 arg0) {
    return SetState(arg0, 4);
}

extern void (*D_sc07_004_801B02C8[])();

void func_sc07_004_801A5B20(u8 *arg0) {
    D_sc07_004_801B02C8[AF(arg0, u16, 2)]();
}

extern s32 D_sc07_004_801B6E94[];
extern void func_80132784();

void func_sc07_004_801A5B5C(u8 *arg0) {
    u8 *s;
    u8 *m;
    s16 idx;

    idx = AF(arg0, s16, 0xFE);
    s = AF(arg0, u8 *, 0xCC);
    if (D_sc07_004_801B6E94[idx] == 0x01000000
        || AF(AF(m = AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) < 0
        || (D_sc07_002_8019FF8A & 8)) {
        AF(s, s32, 4) |= 0x80000000;
        return;
    }
    func_80132784(arg0, m, (u16)idx);
    AF(s, s16, 8) = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
    AF(s, s16, 0xA) = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    AF(s, s16, 0xC) = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
    AF(s, s32, 4) &= 0x7FFFFFFF;
}

void func_sc07_004_801A5C44(u8 *arg0) {
    u8 *m;
    u8 *t;

    m = AF(arg0, u8 *, 0xCC);
    t = AF(arg0, u8 *, 0xD4);
    AF(m, s16, 0x18) = AF(t, u16, AF(arg0, s16, 0x70) * 4) + (rsin(AF(arg0, s16, 0x100)) >> 4);
    AF(m, s16, 0x1A) = AF(t, u16, AF(arg0, s16, 0x70) * 4 + 2) + (rsin(AF(arg0, s16, 0x100) + 0x800) >> 4);
    AF(arg0, u16, 0x100) += 0x40;
}

extern u16 D_sc07_004_801F885C;
extern u8 D_sc07_004_801F88A8;
extern u8 D_sc07_004_801F88B0;

void func_sc07_004_801A5CE8(u8 *arg0) {
    SVECTOR v;
    s32 flag;

    SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    v.vz = 0;
    v.vy = 0;
    v.vx = 0;
    RotTransSV(&v, &D_sc07_004_801F88A8, &flag);
    v.vy = D_sc07_004_801F885C;
    RotTransSV(&v, &D_sc07_004_801F88B0, &flag);
}

extern u8 D_sc07_004_801B0328;
extern u8 D_sc07_004_801B0330;
void func_sc07_004_801A6184(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2);
void func_sc07_004_801A5E60(u8 *arg0, SVECTOR *arg1);
extern u8 D_sc07_004_801B030C[];
extern struct_4_2 D_sc07_004_801B02DE[];
extern struct_4_2 D_sc07_004_801B02DC[];

void func_sc07_004_801A5D68(u8 *arg0) {
    SVECTOR buf[4];
    u8 *p;
    s32 i;

    func_sc07_004_801A6184(arg0, &D_sc07_004_801B0328, &D_sc07_004_801B0330);
    p = D_sc07_004_801B030C;
    while (*p != 0xFF) {
        for (i = 0; i < 4; i++) {
            buf[i].vx = D_sc07_004_801B02DC[*p].field_0;
            buf[i].vy = 0;
            buf[i].vz = D_sc07_004_801B02DE[*p].field_0;
            if (*p >= 6) {
                buf[i].vz += D_sc07_004_801F885C;
            }
            p++;
        }
        func_sc07_004_801A5E60(arg0, buf);
    }
}

extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
extern u8 *AllocPrim();

void func_sc07_004_801A5E60(u8 *arg0, SVECTOR *arg1) {
    u32 *ot;
    u8 *p;
    s32 flag0;
    s32 flag1;
    s32 otz;
    s32 z;
    u8 *q;

    ot = g_WorldOtTable[D_800B9A02[0]];
    p = AllocPrim(0x24);
    p[3] = 8;
    p[7] = 0x38;
    gte_ldv3(&arg1[0], &arg1[1], &arg1[2]);
    gte_rtpt();
    gte_stflg(&flag0);
    gte_stsxy3(p + 8, p + 0x10, p + 0x18);
    gte_ldv0(&arg1[3]);
    gte_rtps();
    gte_stflg(&flag1);
    flag0 |= flag1;
    gte_stsxy(p + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if (flag0 & ~0x1000) {
        return;
    }
    z = otz - 8;
    if ((u32)z >= 0x1000) {
        return;
    }
    if (arg1[0].vz & 1) {
        p[0x4] = 0;
        p[0x5] = 0;
        p[0x6] = 0;
    } else {
        p[0x4] = D_sc07_004_801F8744;
        p[0x5] = D_sc07_004_801F8745;
        p[0x6] = D_sc07_004_801F8746;
    }
    if (arg1[1].vz & 1) {
        p[0xC] = 0;
        p[0xD] = 0;
        p[0xE] = 0;
    } else {
        p[0xC] = D_sc07_004_801F8744;
        p[0xD] = D_sc07_004_801F8745;
        p[0xE] = D_sc07_004_801F8746;
    }
    if (arg1[2].vz & 1) {
        p[0x14] = 0;
        p[0x15] = 0;
        p[0x16] = 0;
    } else {
        p[0x14] = D_sc07_004_801F8744;
        p[0x15] = D_sc07_004_801F8745;
        p[0x16] = D_sc07_004_801F8746;
    }
    if (arg1[3].vz & 1) {
        p[0x1C] = 0;
        p[0x1D] = 0;
        p[0x1E] = 0;
    } else {
        p[0x1C] = D_sc07_004_801F8744;
        p[0x1D] = D_sc07_004_801F8745;
        p[0x1E] = D_sc07_004_801F8746;
    }
    p[7] |= 2;
    ((struct_4_4 *)p)->field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
    ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)p;
    q = AllocPrim(8);
    q[3] = 1;
    ((u32 *)q)[1] = 0xE1000020;
    ((struct_4_4 *)q)->field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
    ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)q;
}

extern s32 D_800AF648[];
extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern void AnglesFromVector();

void func_sc07_004_801A6184(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    VECTOR v;
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    SVECTOR r;
    MATRIX m;
    s32 flag;

    SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    RotTransSV(arg1, &a, &flag);
    RotTransSV(arg2, &b, &flag);
    c.vx = (a.vx + b.vx) >> 1;
    c.vy = (a.vy + b.vy) >> 1;
    c.vz = (a.vz + b.vz) >> 1;
    r.vx = b.vx - a.vx;
    r.vy = b.vy - a.vy;
    r.vz = b.vz - a.vz;
    AnglesFromVector(&r);
    RotMatrixYXZ(&r, &m);
    v.vx = D_801269A4 - c.vx;
    v.vy = D_801269A8 - c.vy;
    v.vz = D_801269AC - c.vz;
    ApplyTransposeMatrixLV(&m, &v, &v);
    r.vz = -ratan2(v.vx, v.vy);
    RotMatrixYXZ(&r, &m);
    m.t[0] = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
    m.t[1] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    m.t[2] = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
    CompMatrix(D_800AF648, &m, &m);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
}

extern u8 g_Actors;
void func_sc07_004_801A63A8(s32 arg0);

s32 func_sc07_004_801A6330(s32 arg0) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &g_Actors;
    var_s1 = 0;
    do {
        if ((AF(var_s0, u16, 0) == 0x31F) && (AF(var_s0, s16, 0x104) == 0)) {
            func_sc07_004_801A63A8((s32) var_s0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0x60;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    } while (temp_v0 != 0);
    return temp_v0;
}

extern void FreeActor();
extern void ZeroFill();

void func_sc07_004_801A63A8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

extern void (*D_sc07_004_801B0338[])();

void func_sc07_004_801A63EC(u8 *arg0) {
    D_sc07_004_801B0338[AF(arg0, u16, 2)]();
}

extern s32 SpawnPropFrom();

void func_sc07_004_801A6428(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x6A);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = arg0;
        AF(temp_v0, s32, 0x10) = (s32) -((s32) AF(AF(arg0, void *, 0x64), s32, 0x10) >> 1);
        AF(temp_v0, s32, 0x18) = (s32) -((s32) AF(AF(arg0, void *, 0x64), s32, 0x18) >> 1);
    }
}

void func_sc07_004_801A649C(s32 p, s32 x, s32 y) {
    struct_8_4 r;
    r.field_0 = x;
    r.field_2 = y;
    r.field_4 = 0x10;
    r.field_6 = 1;
    StoreImage(&r, p);
}

extern s16 D_sc07_004_801AFBC8;
extern s16 D_sc07_004_801AFBCA;
extern s16 D_sc07_004_801AFBCC;
extern s16 D_sc07_004_801AFBCE;
extern s16 D_sc07_004_801AFBD0;
extern s16 D_sc07_004_801AFBD2;

void func_sc07_004_801A64DC(u8 *arg0) {
    u8 *p;

    p = D_sc07_004_801F871C;
    AF(arg0, s16, 0) = AF(p, u16, 6) + ((D_sc07_004_801AFBC8 + D_sc07_004_801AFBCA) >> 1);
    AF(arg0, s16, 2) = AF(p, u16, 0x52) + (AF(p, u16, 0xA) + ((D_sc07_004_801AFBCC + D_sc07_004_801AFBCE) >> 1));
    AF(arg0, s16, 4) = AF(p, u16, 0xE) + ((D_sc07_004_801AFBD0 + D_sc07_004_801AFBD2) >> 1);
}

extern void func_sc07_004_801A5B5C();
extern void func_sc07_002_8017E5D4();
extern void func_sc07_004_801A5D68();
extern void func_sc07_002_8017E1E8();

void func_sc07_004_801A6560(s32 arg0) {
    s32 temp_a0;

    func_sc07_004_801A5C44(arg0);
    func_sc07_004_801A5B5C(arg0);
    if (!(D_sc07_002_8019FF8A & 4)) {
        if (AF(arg0, s32, 0xD0) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0xD0));
            AF(arg0, s32, 0xD0) = 0;
        }
        SetState(arg0, 1);
        return;
    }
    func_sc07_004_801A5D68(arg0);
    func_sc07_004_801A5CE8(arg0);
    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        func_sc07_002_8017E1E8(temp_a0, (s32) &D_sc07_004_801F88A8, (s32) &D_sc07_004_801F88B0);
    }
}

extern void (*D_sc07_004_801AFC48[])();
extern void func_sc07_004_801A3180();
extern s32 func_sc07_004_801A36A8();
extern s32 HeadingToPlayer();
extern s32 TickTimer();

void func_sc07_004_801A6610(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    func_sc07_004_801A3180(arg0, 0x100);
    func_sc07_004_801A36A8(arg0);
    temp_v0 = HeadingToPlayer(arg0);
    AF(arg0, s16, 0xFE) = temp_v0;
    func_sc07_004_801A3624((s32) temp_v0, AF(arg0, s32, 0x20) + 0x12, 0x40);
    if ((TickTimer(arg0) != 0) && !(D_sc07_002_8019FF8A & 0x40)) {
        D_sc07_004_801AFC48[AF(arg0, s16, 0x104)](arg0);
        temp_v0_2 = (u16) AF(arg0, s16, 0x104) + 1;
        AF(arg0, s16, 0x104) = temp_v0_2;
        if (temp_v0_2 >= 6) {
            AF(arg0, s16, 0x104) = 0;
        }
    }
}

extern s32 D_sc07_004_801AFB78;
extern s32 D_sc07_004_801F8730;
extern void UpdateModelZYX();
extern s32 func_sc07_004_801A85A8();
extern void func_sc07_004_801A8A64();
extern void func_sc07_002_8017FA74();
extern void StepMime();

void func_sc07_004_801A66DC(u8 *arg0) {
    s32 *p;
    u8 unused[8]; /* MATCH-TRICK: frame (unused 8-byte slot, recipes func_80129CF8) */

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        p = &D_sc07_004_801BF01C;
        SetModelParts(AF(arg0, s32, 0x20), p);
        UpdateModelZYX(arg0);
        func_sc07_004_801A39D0(arg0);
        InitMime(&D_sc07_004_801F8724, D_sc07_004_801AFB78, *p);
        D_sc07_002_8019FF8A |= 1;
        AF(arg0, s32, 0xD4) = func_sc07_004_801A8528(arg0);
        func_sc07_004_801A85A8(arg0, 0x28080A0, 0, 0x200);
        func_sc07_004_801A8A64(arg0);
        func_sc07_002_8017FA74();
        AF(arg0, s16, 0x34)++;
        break;
    case 1:
        StepMime(&D_sc07_004_801F8724);
        if (D_sc07_004_801F8730 & 0x4000) {
            func_sc07_004_801A18F4(arg0);
        }
        break;
    }
}

void func_sc07_004_801A7C58(u8 *arg0);
s32 func_sc07_004_801A8C58(s32 arg0);

void func_sc07_004_801A67F8(s32 arg0) {
    if (func_sc07_004_801A395C(arg0, -0x250) != 0) {
        func_sc07_004_801A36A8(arg0);
    }
    func_sc07_004_801AAA6C(arg0);
    func_sc07_004_801A370C(arg0);
    if (D_sc07_002_8019FF8A & 0x400) {
        func_sc07_004_801A36F0(arg0);
        if (AF(arg0, s32, 0xD4) != 0) {
            func_sc07_004_801A7C58(AF(arg0, s32, 0xD4));
        }
        func_sc07_004_801A8C58(arg0);
        func_sc07_004_801A85A8(arg0, 0x01A040A0, 0, 0x200);
        if (D_sc07_004_801F8714 != 0) {
            func_sc07_004_801A1984(arg0);
            AF(arg0, s32, 0x1C) = 0x30;
            return;
        }
        func_sc07_004_801A2364(arg0);
        return;
    }
    if (TickTimer(arg0) != 0) {
        ((s16 *)arg0)[0x57] = -1;
        D_sc07_002_8019FF8A &= 0xFFFE;
        func_sc07_004_801A1984(arg0);
    }
}

extern u8 D_sc07_004_801AFBC4;
extern u8 D_sc07_004_801C65E4;
extern u8 D_sc07_004_801C6644;
extern u8 D_sc07_004_801EEAC8;
extern s32 func_sc07_004_801A3798();
extern void func_sc07_002_8017F418();

void func_sc07_004_801A6908(struct_60_9 *arg0) {
    if (func_sc07_004_801A3798(arg0, 1) != 0) {
        SetScript(arg0, &D_sc07_004_801EEAC8);
        arg0->field_1C = (s16)(D_sc07_004_801F8714 / 79) + 0x18;
        StopMotion(arg0);
        SetState(arg0, 1);
        arg0->field_1C = 1;
        func_sc07_004_801A4328(0);
        arg0->field_58 = (s32)&D_sc07_004_801AFBC4 | 0x40000000 | 0x20000000;
        arg0->field_5C |= 0x2000;
        D_sc07_002_8019FF8A &= 0xF9FF;
        QueueImage(&D_sc07_004_801C65E4);
        QueueImage(&D_sc07_004_801C6644);
        func_sc07_002_8017F418();
        func_sc07_004_801A46D4(arg0);
    }
}

extern void func_sc07_004_801A1E94();

void func_sc07_004_801A6A18(s32 arg0) {
    func_sc07_004_801A1E94(arg0);
}

extern u8 D_sc07_004_801AFF14;
extern u8 D_sc07_004_801AFF24;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitNullModel();
extern void NextState();

void func_sc07_004_801A6A38(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitNullModel(temp_v0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc07_004_801AFF14 | 0x40000000);
    AF(arg0, u16, 0x5C) = 0x8800;
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = 0;
    AF(arg0, s16, 0xAE) = 0;
    AF(arg0, s32 *, 0xBC) = &D_sc07_004_801AFF24;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    NextState((s32) arg0);
}

extern void func_sc07_004_801A4570();

void func_sc07_004_801A6AD0(u8 *arg0) {
    AF(arg0, u16, 6) = AF(AF(arg0, u8 *, 0x64), u16, 6);
    AF(arg0, u16, 0xA) = AF(AF(arg0, u8 *, 0x64), u16, 0xA);
    AF(arg0, u16, 0xE) = AF(AF(arg0, u8 *, 0x64), u16, 0xE);
    AF(arg0, SVECTOR, 0x50) = AF(AF(arg0, u8 *, 0x64), SVECTOR, 0x50);
    AF(AF(arg0, u8 *, 0x20), SVECTOR, 0x10) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), SVECTOR, 0x10);
    UpdateModelZYX(arg0);
    if (AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 4) >= 0 && !(D_sc07_002_8019FF8A & 0x200)) {
        func_sc07_004_801A4570(arg0);
    }
    func_sc07_002_8017DAEC();
}

extern u16 D_sc07_004_801AFF3C;
extern u16 D_sc07_004_801AFF3E;
extern u16 D_sc07_004_801AFF40;
extern void InitModel();

void func_sc07_004_801A6BC0(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_004_801B75EC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 6) = (u16) D_sc07_004_801AFF3C;
    AF(arg0, u16, 0xA) = (u16) D_sc07_004_801AFF3E;
    AF(arg0, u16, 0xE) = (u16) D_sc07_004_801AFF40;
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x40);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    if (AF(arg0, s16, 0x70) == 0) {
        AF(arg0, s32, 0x6C) = SpawnActorArg(0x32A, 1, AF(arg0, s32, 0x64));
    }
    AF(arg0, s32, 0xCC) = SpawnActorArg(0xB1, (s32) AF(arg0, s16, 0x70), (s32) arg0);
    func_sc07_004_801A46F0((s32) arg0);
}

extern s32 D_sc07_004_801F888C;
extern void StepMime();
extern void func_sc07_004_801A4EBC();
extern void func_80132784();

void func_sc07_004_801A6CA8(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0xCC);
    if (AF(arg0, s16, 0x70) == 0) {
        StepMime((s32) &D_sc07_004_801F8888);
        if (temp_s1 != 0) {
            StepMime((s32) &D_sc07_004_801F8898);
        }
        func_sc07_004_801A4EBC((s32) arg0);
        if (D_sc07_004_801F888C == 1) {
            PlaySoundId(0xAB9, 0);
            if (AF(arg0, s16, 0x84) == 0) {
                PlaySoundId(0xABE, 0);
                AF(arg0, s16, 0x84) = (s16) ((u16) AF(arg0, s16, 0x84) + 1);
            }
        }
    }
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 0);
    if (D_sc07_002_8019FF8A & 0x100) {
        func_sc07_004_801A4AAC((s32) arg0);
    }
}

void func_sc07_004_801A6D90(u8 *arg0) {
    if (AF(arg0, u16, 0x34) == 0) {
        StepMime((s32) &D_sc07_004_801F8888);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 0);
}

extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();
extern void NextState();

void func_sc07_004_801A6DF4(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc07_004_801B80FC);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000040);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    NextState((s32) arg0);
}

extern u8 D_sc07_004_801BA9E8;
extern u8 D_sc07_004_801EFA00;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();

void func_sc07_004_801A6E78(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_004_801BA9E8);
    func_sc07_004_801A5798((s32) arg0);
    AF(arg0, s32, 0xD0) = SpawnShadow((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_004_801EFA00);
    func_sc07_004_801A53F4((s32) arg0);
}

extern void func_sc07_004_801A5698();
extern void func_sc07_004_801A54AC();

void func_sc07_004_801A6EF4(s32 arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = HeadingToPlayer(arg0);
    func_sc07_004_801A5698(arg0, (s32) AF(arg0, s16, 0xFE));
    func_sc07_004_801A54AC(arg0);
}

extern s32 D_sc07_004_801F8844[];
extern void MoveObject();

void func_sc07_004_801A6F3C(s32 arg0, s32 arg1) {
    s32 temp_a1;

    MoveObject(arg0, arg1);
    temp_a1 = AF(arg0, s32, 0xF0) + 0xFFFE0000;
    AF(arg0, s32, 0xF0) = temp_a1;
    SetForwardVelocity(arg0, temp_a1);
    if (TickTimer(arg0) != 0) {
        D_sc07_004_801F8844[AF(arg0, s16, 0x70)] = 0;
        FreeActor(arg0);
        if (AF(arg0, s32, 0xD0) != 0) {
            FreeShadow(AF(arg0, s32, 0xD0));
        }
    } else {
        func_sc07_004_801A54AC(arg0);
    }
}

extern u16 D_800B99DA;
extern s8 D_sc07_004_801F8747[];
extern u8 D_sc07_004_801F88A8;
extern u8 D_sc07_004_801F88B0;
extern void func_sc07_004_801A5C44();
extern void func_sc07_004_801A5B5C();
extern void func_sc07_004_801A5D68();
extern void func_sc07_004_801A5CE8();
extern s32 func_sc07_002_8017D7D4();
extern void func_sc07_004_801A6428();

void func_sc07_004_801A6FD4(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0xCC);
    func_sc07_004_801A5C44((s32) arg0);
    func_sc07_004_801A5B5C((s32) arg0);
    if ((D_sc07_002_8019FF8A & 4) && (AF(arg0, s16, 0xFE) == 0xB)) {
        func_sc07_004_801A5AC0((s32) arg0);
        func_sc07_004_801A5D68((s32) arg0);
        func_sc07_004_801A5CE8((s32) arg0);
        D_sc07_004_801F8747[0] = 1;
        AF(arg0, s32, 0xD0) = func_sc07_002_8017D7D4((s32) &D_sc07_004_801F88A8, (s32) &D_sc07_004_801F88B0, (s32) (D_sc07_004_801F8747 - 3), 6);
        return;
    }
    if ((D_sc07_002_8019FF8A & 0x10) && (AF(temp_s1, s32, 4) >= 0) && (D_800B99DA & 1)) {
        func_sc07_004_801A6428((s32) arg0);
    }
}

extern s32 D_sc07_004_801B02B8[];
extern void func_sc07_004_801A5B5C();
extern s32 StepSpriteAnim();
extern void StartSpriteAnim();

void func_sc07_004_801A70D0(u8 *arg0) {
    void *temp_s1;
    void *temp_s2;

    temp_s1 = AF(arg0, void *, 0xCC);
    temp_s2 = arg0 + 0xF0;
    func_sc07_004_801A5B5C((s32) arg0);
    if (D_sc07_002_8019FF8A & 4) {
        if (AF(arg0, s16, 0xFE) == 0xB) {
            AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x80000000);
        }
    }
    if (StepSpriteAnim((s32) temp_s1, (s32) temp_s2) != 0) {
        StartSpriteAnim((s32) temp_s1, (s32) temp_s2, D_sc07_004_801B02B8[(rand() & 3)]);
    }
}

extern void func_sc07_004_801A5C44();
extern void func_sc07_004_801A6428();

void func_sc07_004_801A7184(u8 *arg0) {
    if (AF(arg0, s16, 0x104) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc07_004_801A63A8((s32) arg0);
        return;
    }
    func_sc07_004_801A5C44((s32) arg0);
    func_sc07_004_801A5B5C((s32) arg0);
    if (AF(AF(arg0, void *, 0x64), s16, 0x100) != 0) {
        func_sc07_004_801A6428((s32) arg0);
    }
}

extern void func_8001CD9C();

void func_sc07_004_801A7200(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = AF(arg0, void *, 0x34);
    temp_s2 = AF(temp_s1, void *, 0xCC);
    AF(arg0, s16, 0x2C) = 0;
    func_8001CD9C(AF(arg0, s32, 0x20), (s32) &D_sc07_004_801F8744, arg2);
    AF(arg0, s16, 6) = (s16) AF(AF(temp_s1, void *, 0x20), s32, 0x48);
    AF(arg0, s16, 0xA) = (s16) AF(AF(temp_s1, void *, 0x20), s32, 0x4C);
    AF(arg0, s16, 0xE) = (s16) AF(AF(temp_s1, void *, 0x20), s32, 0x50);
    AF(AF(arg0, s32, 0x20), u16, 0x18) = (u16) AF(temp_s2, u16, 0x18);
    AF(AF(arg0, s32, 0x20), u16, 0x1A) = (u16) AF(temp_s2, u16, 0x1A);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50800000);
    AF(AF(arg0, u32, 0x20), u16, 0x2C) = 0xC020;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern u8 D_sc07_004_801F8744;
extern void FreeProp();
extern void MoveProp();

void func_sc07_004_801A72DC(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x2C) + 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 >= 4) {
        FreeProp((s32) arg0);
        return;
    }
    MoveProp((s32) arg0, arg1);
    AF(AF(arg0, void *, 0x20), void *, 0x20) = (void *) (((s16) AF(arg0, u16, 0x2C) << 6) + &D_sc07_004_801F8744);
}

extern struct_4_3 D_sc07_004_801A01E8;
extern u8 D_sc07_004_801B0360;
extern struct_40_2 D_sc07_004_801F88B8[];
extern struct_4_3 D_sc07_004_801F88BC;
extern u8 D_sc07_004_801F88F8[];
extern struct_4_3 D_sc07_004_801F88FC;
extern struct_4_3 D_sc07_004_801F8938;
extern struct_4_3 D_sc07_004_801F893C;
extern u8 *D_sc07_004_801B0358[];
extern void SetShapeCircle();
extern s32 func_sc07_004_801AF9C8();

void func_sc07_004_801A7358(u8 *arg0) {
    SVECTOR v;
    s32 flag;
    s32 m;
    u8 *o;
    struct_4_3 *t;
    u8 *q;
    u8 *p;

    m = AllocActorModel();
    AF(arg0, s32, 0x20) = m;
    if (m == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(m);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x1A) = 0x400;
    AF(p, s16, 0x18) = 0x400;
    SetRotMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc07_004_801B0360, &v, &flag);
    AF(arg0, s16, 6) = v.vx;
    AF(arg0, s16, 0xA) = v.vy;
    AF(arg0, s16, 0xE) = v.vz;
    t = D_sc07_004_801B0358[AF(arg0, u16, 0x70) = AF(arg0, u16, 0x70) & 1];
    o = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    if (o != NULL) {
        AF(arg0, u8 *, 0xCC) = o;
        SetShapeCircle(D_sc07_004_801F88B8, 0x80);
        D_sc07_004_801F88B8[0].field_0 = t[0];
        D_sc07_004_801F88BC = D_sc07_004_801A01E8;
        func_8001CD9C(o, D_sc07_004_801F88B8);
        AF(o, u16, 0x2C) = 0xC020;
        AF(o, s32, 4) = 0x50000000;
    }
    o = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    if (o != NULL) {
        AF(arg0, u8 *, 0xD0) = o;
        SetShapeCircle(D_sc07_004_801F88F8, 0x60);
        *(struct_4_3 *)D_sc07_004_801F88F8 = t[1];
        D_sc07_004_801F88FC = D_sc07_004_801A01E8;
        func_8001CD9C(o, D_sc07_004_801F88F8);
        AF(o, u16, 0x2C) = 0xC020;
        AF(o, s32, 4) = 0x50000000;
    }
    o = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    if (o != NULL) {
        AF(arg0, u8 *, 0xD4) = o;
        SetShapeCircle(&D_sc07_004_801F8938, 0xB0);
        D_sc07_004_801F8938 = t[2];
        D_sc07_004_801F893C = t[2];
        func_8001CD9C(o, &D_sc07_004_801F8938);
        AF(o, u16, 0x2C) = 0xC01E;
        AF(o, s32, 4) = 0x50000000;
        AF(o, s16, 0x1E) = 0xD00;
    }
    v.pad = 0x1A;
    q = (u8 *)func_sc07_004_801AF9C8(&v, 0, 0x404040);
    if (q != NULL) {
        AF(arg0, u8 *, 0xD8) = q;
        AF(AF(q, u8 *, 0x20), s16, 0x18) = 0x1C00;
    }
    AF(arg0, s32, 0x14) = 0xFFE00000;
    AF(arg0, s32, 0x1C) = 0x18;
    NextState(arg0);
}

extern SVECTOR D_sc07_004_801B0368[];
extern u8 D_sc07_004_801B036A[];
extern u8 D_sc07_004_801B036C[];
extern void func_sc07_004_801AB21C(u16 arg0, u8 r, u8 g, u8 b);

void func_sc07_004_801A7604(u8 *arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, s16, 0xFE) += D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vx;
        AF(arg0, s16, 0x100) += D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vy;
        AF(arg0, s16, 0x102) += D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vz;
        func_sc07_004_801AB21C(1, AF(arg0, u8, 0xFF), AF(arg0, u8, 0x101), AF(arg0, u8, 0x103));
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        AF(arg0, s16, 0xFE) -= D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vx >> 1;
        AF(arg0, s16, 0x100) -= D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vy >> 1;
        AF(arg0, s16, 0x102) -= D_sc07_004_801B0368[AF(arg0, s16, 0x70)].vz >> 1;
        func_sc07_004_801AB21C(1, AF(arg0, u8, 0xFF), AF(arg0, u8, 0x101), AF(arg0, u8, 0x103));
        if (TickTimer(arg0) != 0) {
            if (AF(arg0, s32, 0xCC) != 0) {
                ZeroFill(AF(arg0, s32, 0xCC), 0x38);
            }
            if (AF(arg0, s32, 0xD0) != 0) {
                ZeroFill(AF(arg0, s32, 0xD0), 0x38);
            }
            if (AF(arg0, s32, 0xD4) != 0) {
                ZeroFill(AF(arg0, s32, 0xD4), 0x38);
            }
            FreeActor(arg0);
        }
        break;
    }
}

extern void (*D_sc07_004_801B0378[])();

void func_sc07_004_801A77CC(u8 *arg0) {
    D_sc07_004_801B0378[AF(arg0, u16, 2)]();
}

void func_sc07_004_801A7808(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        AF(arg1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(arg1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(arg1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        AF(arg1, u16, 0x18) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        AF(arg1, u16, 0x1A) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1A);
    }
}

void func_sc07_004_801A7864(s32 arg0, s32 arg1) {
    SpawnActorArg(0x3A4, arg1 & 1, arg0);
}

extern struct_4_3 D_sc07_004_801A01EC;
extern u8 D_sc07_004_801F8978;
extern struct_4_3 D_sc07_004_801F897C;
extern struct_4_3 D_sc07_004_801F89B8;
extern struct_4_3 D_sc07_004_801F89F8;
extern void func_sc07_004_801A7AF8();
extern void func_sc07_004_801A7C34();
extern void func_sc07_004_801A7D34();
extern void func_sc07_004_801A7F84();
extern void func_sc07_004_801A8054();
extern void func_sc07_004_801A8228();

void func_sc07_004_801A788C(u8 *arg0) {
    switch (AF(arg0, s16, 0x2E)) {
    case 0:
        SetShapeCircle(D_sc07_004_801F88B8, 0x80);
        D_sc07_004_801F88B8[0].field_0 = D_sc07_004_801A01E8;
        D_sc07_004_801F88B8[0].field_4 = D_sc07_004_801A01E8;
        func_8001CD9C(AF(arg0, u8 *, 0x20), D_sc07_004_801F88B8);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC020;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
        func_sc07_004_801A7AF8(arg0);
        break;
    case 1:
        SetShapeCircle(&D_sc07_004_801F8978, 0x80);
        *(struct_4_3 *)&D_sc07_004_801F8978 = D_sc07_004_801A01EC;
        D_sc07_004_801F897C = D_sc07_004_801A01E8;
        func_8001CD9C(AF(arg0, u8 *, 0x20), &D_sc07_004_801F8978);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC020;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50800000;
        func_sc07_004_801A7C34(arg0);
        break;
    case 2:
        AF(arg0, u8 *, 0x24) = D_sc07_004_801F88F8;
        func_sc07_004_801A7D34(arg0);
        break;
    case 3:
        AF(arg0, u8 *, 0x24) = (u8 *)&D_sc07_004_801F8938;
        func_sc07_004_801A7D34(arg0);
        break;
    case 4:
        AF(arg0, u8 *, 0x24) = D_sc07_004_801F88F8;
        AF(arg0, s32, 0x30) = 0x404;
        func_sc07_004_801A7F84(arg0);
        break;
    case 5:
        AF(arg0, u8 *, 0x24) = (u8 *)&D_sc07_004_801F8938;
        AF(arg0, s32, 0x30) = 0x40004;
        func_sc07_004_801A7F84(arg0);
        break;
    case 6:
        SetShapeCircle(&D_sc07_004_801F89B8, 0x80);
        func_8001CD9C(AF(arg0, u8 *, 0x20), &D_sc07_004_801F89B8);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC020;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xE00;
        func_sc07_004_801A8054(arg0);
        break;
    case 7:
        SetShapeCircle(&D_sc07_004_801F89F8, 0x80);
        func_8001CD9C(AF(arg0, u8 *, 0x20), &D_sc07_004_801F89F8);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC080;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50800000;
        func_sc07_004_801A8228(arg0);
        break;
    }
}

void func_sc07_004_801A7AF8(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x2A) = 0;
}

extern u8 D_sc07_004_801F88BA[];
void func_sc07_004_801A8440(u8 *arg0);

void func_sc07_004_801A7B08(u8 *arg0) {
    u8 *p;
    u8 *c;
    s16 t;

    func_sc07_004_801A8440(arg0);
    switch (AF(arg0, s16, 0x2C)) {
    case 0:
        p = AF(arg0, u8 *, 0x20);
        if (AF(p, s16, 0x18) > 0x400) {
            AF(p, s16, 0x18) -= 0xA0;
            c = AF(arg0, u8 *, 0x20);
            AF(c, u16, 0x1A) = AF(c, u16, 0x18);
        }
        p = D_sc07_004_801F88BA;
        if (*p < 0xF0) {
            *p += 0xC;
        }
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) <= 0x400 && *p >= 0xF0) {
            AF(arg0, s16, 0x2A) = 0;
            AF(arg0, s16, 0x2C)++;
        }
        break;
    case 1:
        t = AF(arg0, s16, 0x2A) + 0x40;
        AF(arg0, s16, 0x2A) = t;
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (rsin(t) >> 5) + 0x400;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = (rsin(AF(arg0, s16, 0x2A) + 0x800) >> 5) + 0x400;
        break;
    }
}

void func_sc07_004_801A7C34(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 2;
}

extern struct_8_4 D_sc07_004_801F88C8[];
extern struct_4_2 D_sc07_004_801F8A38[];

void func_sc07_004_801A7C58(u8 *arg0) {
    s32 i;
    u8 *m;

    for (i = 0; i < 6; i++) {
        D_sc07_004_801F8A38[i].field_0 = D_sc07_004_801F88C8[i].field_0;
        D_sc07_004_801F8A38[i].field_2 = D_sc07_004_801F88C8[i].field_2;
    }
    m = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x1C) = 6;
    AF(m, s16, 0x1A) = 0x400;
    AF(m, s16, 0x18) = 0x400;
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x2C) = 0;
}

void func_sc07_004_801A7CC8(s32 arg0) {
    AF(arg0, s32, 0x1C) = 4;
    AF(arg0, s16, 2) = 4;
}

extern struct_40_2 D_sc07_004_801F88B8[];

void func_sc07_004_801A7CDC(u8 *arg0) {
    u8 *m;

    AF(arg0, s32, 0x30) = *(s32 *)D_sc07_004_801F88B8;
    m = AF(arg0, u8 *, 0x20);
    AF(m, s16, 0x1A) = 0x2000;
    AF(m, s16, 0x18) = 0x2000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC040;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 5;
}

void func_sc07_004_801A7D18(u8 *arg0) {
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(m, s16, 0x1A) = 0x400;
    AF(m, s16, 0x18) = 0x400;
    AF(arg0, s16, 2) = 6;
}

extern struct_4_3 D_sc07_004_801A01E8;
extern void SetShapeCircle();

void func_sc07_004_801A7D34(u8 *arg0) {
    u8 *s;

    s = AF(arg0, u8 *, 0x24);
    SetShapeCircle(s, 0x80);
    AF(s, struct_4_3, 0) = AF(arg0, struct_4_3, 0x30);
    AF(s, struct_4_3, 4) = D_sc07_004_801A01E8;
    func_8001CD9C(AF(arg0, u8 *, 0x20), s);
    AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xC00;
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC040;
    if (AF(arg0, s32, 0x30) & 0x02000000) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x60000000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x100;
    if ((AF(arg0, s16, 0x12) = s[0] >> 4) == 0) {
        AF(arg0, s16, 0x12) = 1;
    }
    if ((AF(arg0, s16, 0x16) = s[1] >> 4) == 0) {
        AF(arg0, s16, 0x16) = 1;
    }
    if ((AF(arg0, s16, 0x1A) = s[2] >> 4) == 0) {
        AF(arg0, s16, 0x1A) = 1;
    }
    AF(arg0, s16, 2) = 7;
}

void func_sc07_004_801A7E5C(u8 *arg0) {
    s16 d[3];
    u8 *c;
    u16 v;

    c = AF(arg0, u8 *, 0x24);
    v = c[0];
    d[0] = v;
    if (v != 0) {
        d[0] = v - AF(arg0, u16, 0x12);
        if (d[0] < 0) {
            d[0] = 0;
        }
        c[0] = d[0];
    }
    v = c[1];
    d[1] = v;
    if (v != 0) {
        d[1] = v - AF(arg0, u16, 0x16);
        if (d[1] < 0) {
            d[1] = 0;
        }
        c[1] = d[1];
    }
    v = c[2];
    d[2] = v;
    if (v != 0) {
        d[2] = v - AF(arg0, u16, 0x1A);
        if (d[2] < 0) {
            d[2] = 0;
        }
        c[2] = d[2];
    }
    if (d[0] | d[1] | d[2]) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) += AF(arg0, u16, 0x2C);
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
    } else {
        FreeProp(arg0);
    }
}

extern u8 D_sc07_004_801F88F8[];

void func_sc07_004_801A7F84(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x24);
    u8 *p;

    SetShapeCircle(s, 0x80);
    AF(s, struct_4_3, 0) = D_sc07_004_801A01E8;
    AF(s, struct_4_3, 4) = D_sc07_004_801A01E8;
    func_8001CD9C(AF(arg0, u8 *, 0x20), &D_sc07_004_801F88F8);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x1A) = 0x3800;
    AF(p, s16, 0x18) = 0x3800;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xD00;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x60000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC040;
    AF(arg0, s16, 2) = 8;
}

extern struct_4_3 D_sc07_004_801A01E8;
extern struct_4_3 D_sc07_004_801F89B8;
extern struct_4_3 D_sc07_004_801B0388;
extern struct_4_3 D_sc07_004_801F89BC;

void func_sc07_004_801A8054(u8 *arg0) {
    u8 *m;

    D_sc07_004_801F89B8 = D_sc07_004_801A01E8;
    D_sc07_004_801F89BC = D_sc07_004_801B0388;
    m = AF(arg0, u8 *, 0x20);
    AF(m, s16, 0x1A) = 0;
    AF(m, s16, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 9;
}

extern u8 D_sc07_004_801B0389;
extern u8 D_sc07_004_801B038A;
extern void func_sc07_004_801A8494();
extern void SetShapeCircleAt();

void func_sc07_004_801A80C0(u8 *arg0) {
    s32 n;
    u16 t;
    u8 c;
    u8 *m;

    func_sc07_004_801A8494(arg0);
    t = AF(arg0, u16, 0x2A) + 8;
    AF(arg0, u16, 0x2A) = t;
    SetShapeCircleAt(&D_sc07_004_801F89B8, 0x80, t);
    if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) < 0x1E00) {
        n = AF(arg0, s32, 0x1C);
        if (n != 0) {
            AF(arg0, s32, 0x1C) = --n;
            if (n == 0) {
                m = AF(arg0, u8 *, 0x20);
                AF(m, u16, 0x1A) = 0x800;
                AF(m, s16, 0x18) = 0x800;
            }
        }
        m = AF(arg0, u8 *, 0x20);
        AF(m, s16, 0x18) += 0x2C0;
        m = AF(arg0, u8 *, 0x20);
        AF(m, u16, 0x1A) = AF(m, s16, 0x18);
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) >= 0x1E00) {
            AF(arg0, s32, 0x1C) = 0x30;
        }
    } else {
        n = AF(arg0, s32, 0x1C);
        if (n != 0) {
            AF(arg0, s32, 0x1C) = n - 1;
            return;
        }
        c = D_sc07_004_801F89BC.field_0 - (D_sc07_004_801B0388.field_0 >> 4);
        (&D_sc07_004_801F89B8)[1].field_0 = c;
        D_sc07_004_801F89BC.field_1 -= D_sc07_004_801B0389 >> 4;
        D_sc07_004_801F89BC.field_2 -= D_sc07_004_801B038A >> 4;
        if (c == 0) {
            FreeProp(arg0);
        }
    }
}

extern struct_4_3 D_sc07_004_801A0210;
extern struct_4_3 D_sc07_004_801F89F8;
extern struct_4_3 D_sc07_004_801F89FC;

void func_sc07_004_801A8228(u8 *arg0) {
    u8 *p;

    D_sc07_004_801F89F8 = D_sc07_004_801A0210;
    D_sc07_004_801F89FC = D_sc07_004_801A01E8;
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x1A) = 0;
    AF(p, s16, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 10;
}

extern void func_sc07_004_801A8494();

void func_sc07_004_801A8294(u8 *arg0) {
    u8 *o;
    s16 y;
    struct_4_3 *p = &D_sc07_004_801F89F8;

    func_sc07_004_801A8494();
    o = AF(arg0, u8 *, 0x20);
    y = AF(o, s16, 0x18);
    if (y < 0x3000) {
        if (AF(arg0, s32, 0x1C) == 0) {
            AF(o, s16, 0x1A) = 0x6000;
            AF(o, s16, 0x18) = 0x6000;
            AF(arg0, s32, 0x1C) = 0x30;
        } else {
            AF(arg0, s32, 0x1C)--;
        }
    } else if (y > 0x3000) {
        AF(o, s16, 0x18) = y - 0x100;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = AF(AF(arg0, u8 *, 0x20), s16, 0x18);
    } else if (AF(arg0, s32, 0x1C) != 0) {
        if (p->field_0 == 0xC0) {
            p->field_0 -= 0x10;
            D_sc07_004_801F89F8.field_1 -= 0x10;
            D_sc07_004_801F89F8.field_2 -= 0x10;
        } else {
            p->field_0 += 0x10;
            D_sc07_004_801F89F8.field_1 += 0x10;
            D_sc07_004_801F89F8.field_2 += 0x10;
        }
        AF(arg0, s32, 0x1C)--;
    } else {
        D_sc07_004_801F89F8.field_0 -= 0x10;
        D_sc07_004_801F89F8.field_1 -= 0x10;
        D_sc07_004_801F89F8.field_2 -= 0x10;
        if (D_sc07_004_801F89F8.field_0 == 0) {
            FreeProp(arg0);
        }
    }
}

extern void (*D_sc07_004_801B038C[])();

void func_sc07_004_801A8404(u8 *arg0) {
    D_sc07_004_801B038C[AF(arg0, u16, 2)]();
}

void func_sc07_004_801A8440(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x34);

    if (p != NULL) {
        AF(arg0, u16, 6) = AF(p, u16, 6) + AF(p, u16, 0x50);
        AF(arg0, u16, 0xA) = AF(p, u16, 0xA) + AF(p, u16, 0x52);
        AF(arg0, u16, 0xE) = AF(p, u16, 0xE) + AF(p, u16, 0x54);
    }
}

extern void RotTransSV();
extern void SetRotMatrix();
extern void SetTransMatrix();

void func_sc07_004_801A8494(arg0)
    u8 *arg0;
{
    u8 *o;
    struct_8_4 v;
    s32 flag;

    o = AF(arg0, u8 *, 0x34);
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    v.field_0 = 0;
    v.field_2 = -0x40;
    v.field_4 = 0x20;
    RotTransSV(&v, &v, &flag);
    AF(arg0, s16, 6) = v.field_0;
    AF(arg0, s16, 0xA) = v.field_2;
    AF(arg0, s16, 0xE) = v.field_4;
}

extern s32 SpawnPropFrom();

s32 func_sc07_004_801A8528(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s32, 0x34) = arg0;
    }
    return temp_v0;
}

s32 func_sc07_004_801A8564(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = 1;
        AF(temp_v0, s32, 0x34) = arg0;
    }
    return temp_v0;
}

s32 func_sc07_004_801A85A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = (s16) ((arg2 & 1) + 2);
        AF(temp_v0, s32, 0x30) = arg1;
        AF(temp_v0, s32, 0x34) = arg0;
        AF(temp_v0, s16, 0x2C) = (s16) arg3;
    }
    return temp_v0;
}

s32 func_sc07_004_801A861C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = (s16) ((arg1 & 1) + 4);
        AF(temp_v0, s32, 0x34) = arg0;
    }
    return temp_v0;
}

s32 func_sc07_004_801A8670(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = 6;
        AF(temp_v0, s32, 0x34) = arg0;
    }
    return temp_v0;
}

s32 func_sc07_004_801A86B4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x30);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2E) = 7;
        AF(temp_v0, s32, 0x34) = arg0;
    }
    return temp_v0;
}

extern u8 D_sc07_004_801F8978;
extern void func_sc07_004_801A8738();

s32 func_sc07_004_801A86F8(void) {
    func_sc07_004_801A8738((s32) &D_sc07_004_801F8978);
    func_sc07_004_801A8738((s32) (&D_sc07_004_801F8978 + 1));
    return ((s32 (*)())func_sc07_004_801A8738)((s32) (&D_sc07_004_801F8978 + 2));
}

void func_sc07_004_801A8738(u8 *arg0) {
    u8 c;
    s16 v;

    c = *arg0;
    v = c;
    if (v != 0xFF) {
        v = c + 2;
        if (v > 0xFF) {
            v = 0xFF;
        }
        *arg0 = v;
    }
}

void func_sc07_004_801A876C(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;
    void *temp_a3;

    temp_a3 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a3, s16, 0x18);
    if (temp_v0 < (s16) arg1) {
        AF(temp_a3, s16, 0x18) = (s16) (temp_v0 + arg2);
    }
    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if (temp_v0_2 < (s16) arg1) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 + arg2);
    }
}

void func_sc07_004_801A87C4(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;
    void *temp_a3;

    temp_a3 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a3, s16, 0x18);
    if ((s16) arg1 < temp_v0) {
        AF(temp_a3, s16, 0x18) = (s16) (temp_v0 - arg2);
    }
    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if ((s16) arg1 < temp_v0_2) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 - arg2);
    }
}

void func_sc07_004_801A881C(u8 *arg0) {
    s16 v;

    AF(arg0, s16, 0xFE) = 0x10;
    AF(arg0, s16, 0x100) = rand();
    v = (rand() & 0x1F) + 0x40;
    AF(arg0, s16, 0x102) = v;
    if (v & 1) {
        AF(arg0, s16, 0x102) = -v;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
    SetState(arg0, 1);
}

void func_sc07_004_801A8884(arg0)
    u8 *arg0;
{
    AF(arg0, s32, 0x1C) = 3;
    SetState(arg0, 2);
}

void func_sc07_004_801A88AC(u8 *arg0) {
    VECTOR v;

    v.vx = AF(AF(arg0, u8 *, 0x64), s16, 6) - AF(arg0, s16, 6);
    v.vy = AF(AF(arg0, u8 *, 0x64), s16, 0xA) - AF(arg0, s16, 0xA);
    v.vz = AF(AF(arg0, u8 *, 0x64), s16, 0xE) - AF(arg0, s16, 0xE);
    VectorNormal(&v, &v);
    AF(arg0, s32, 0x10) = v.vx << 9;
    AF(arg0, s32, 0x14) = v.vy << 9;
    AF(arg0, s32, 0x18) = v.vz << 9;
    AF(arg0, s32, 0x1C) = 0x20;
    SetState(arg0, 3);
}

extern void (*D_sc07_004_801B03B8[])();

void func_sc07_004_801A8954(u8 *arg0) {
    D_sc07_004_801B03B8[AF(arg0, u16, 2)]();
}

void func_sc07_004_801A8990(u8 *arg0) {
    SVECTOR v;
    MATRIX m;
    s32 flag;

    RotMatrixZYX(AF(arg0, u8 *, 0x20) + 0x10, &m);
    m.t[0] = AF(arg0, s16, 0x104);
    m.t[1] = AF(arg0, s16, 0x106);
    m.t[2] = AF(arg0, s16, 0x108);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.vy = 0;
    v.vx = 0;
    v.vz = AF(arg0, s16, 0xFE) + ((AF(arg0, s16, 0xFE) * rsin(AF(arg0, s16, 0x100))) >> 15);
    RotTransSV(&v, &v, &flag);
    AF(arg0, s16, 6) = v.vx;
    AF(arg0, s16, 0xA) = v.vy;
    AF(arg0, s16, 0xE) = v.vz;
}

extern s16 D_sc07_004_801B03CC;
extern u8 D_sc07_004_801B03CE[];

void func_sc07_004_801A8A64(s32 arg0) {
    s32 i;
    s32 o;
    s32 off;

    i = 0;
    if (D_sc07_004_801B03CC != 0xFFF) {
        do {
            off = i * 4;
            o = SpawnActorArg(0xC1, i, arg0);
            if (o != 0) {
                AF(AF(o, u8 *, 0x20), u16, 0x12) = *(u16 *)&D_sc07_004_801B03CE[off];
                AF(AF(o, u8 *, 0x20), u16, 0x14) = *(s16 *)((u8 *)&D_sc07_004_801B03CC + i * 4);
            }
            i++;
        } while (*(s16 *)((u8 *)&D_sc07_004_801B03CC + i * 4) != 0xFFF);
    }
}

extern void (*D_sc07_004_801B0400[])();

void func_sc07_004_801A8B28(u8 *arg0) {
    D_sc07_004_801B0400[AF(arg0, u16, 2)]();
}

extern s32 D_800AF648[];

void func_sc07_004_801A8B64(u8 *arg0, SVECTOR *arg1) {
    SVECTOR v;
    SVECTOR a;
    SVECTOR b;

    gte_SetRotMatrix(D_800AF648);
    gte_SetTransMatrix(D_800AF648);
    gte_ldv0(arg1);
    gte_rtps();
    gte_stsxy(&a);
    v.vx = AF(arg0, s16, 6);
    v.vy = AF(arg0, s16, 0xA);
    v.vz = AF(arg0, s16, 0xE);
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&b);
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = ratan2(b.vy - a.vy, b.vx - a.vx) + 0x400;
}

extern void func_sc07_004_801A8CE0();
extern void func_sc07_004_801A900C();

s32 func_sc07_004_801A8C58(s32 arg0) {
    s16 temp_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    var_s1 = -0x40;
    do {
        temp_a1 = var_s1 + (rand() & 0x7F);
        var_a2 = 0x140000;
        if (var_s0 & 1) {
            var_a2 = 0xC0000;
        }
        func_sc07_004_801A8CE0(arg0, (s32) temp_a1, var_a2, 0x14);
        var_s0 += 1;
        var_s1 += 0x100;
    } while (var_s0 < 0x10);
    return ((s32 (*)())func_sc07_004_801A900C)(arg0);
}

extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern s32 HeadingToPoint();

void func_sc07_004_801A8CE0(u8 *arg0, s32 arg1_0, s32 arg2, s32 arg3_0) {
    s16 arg1 = arg1_0;
    s16 arg3 = arg3_0;
    SVECTOR v;
    VECTOR w;
    MATRIX m;
    u8 *p;
    s32 r;

    p = (u8 *)SpawnPropFrom(arg0, 0x70);
    if (p != NULL) {
        AF(p, s16, 0xA) += AF(arg0, s16, 0x52);
        AF(p, s32, 0x1C) = arg3;
        v.vx = D_801269A4;
        v.vy = D_801269A8;
        v.vz = D_801269AC;
        r = HeadingToPoint((SVECTOR *)(arg0 + 4), &v);
        v.vx = 0x200;
        v.vy = r;
        v.vz = arg1;
        RotMatrixYXZ(&v, &m);
        w.vx = arg2;
        w.vz = 0;
        w.vy = 0;
        ApplyMatrixLV(&m, &w, p + 0x10);
        AF(p, s16, 0x2C) = 0;
    }
}

extern s32 func_sc07_004_801A8E34();

s32 func_sc07_004_801A8DCC(s32 arg0, s32 arg1) {
    s32 r;
    s32 h;

    r = rand() & 0xFF8;
    return func_sc07_004_801A8E34(arg0, arg1, r, ((rand() & 0xF) + 0x38) << 15, 0x14);
}

s32 func_sc07_004_801A8E34(u8 *arg0, SVECTOR *arg1, s32 arg2_0, s32 arg3, s32 arg4_0) {
    s16 arg2 = arg2_0;
    s16 arg4 = arg4_0;
    SVECTOR v;
    VECTOR w;
    MATRIX m;
    u8 *p;
    s32 r;

    p = (u8 *)SpawnPropFrom(arg0, 0x70);
    if (p != NULL) {
        v.vx = D_801269A4;
        v.vy = D_801269A8;
        v.vz = D_801269AC;
        r = HeadingToPoint((SVECTOR *)(arg0 + 4), &v);
        v.vx = 0x200;
        v.vy = r;
        v.vz = arg2;
        RotMatrix(&v, &m);
        w.vx = -arg3;
        w.vz = 0;
        w.vy = 0;
        ApplyMatrixLV(&m, &w, p + 0x10);
        AF(p, s32, 0x1C) = arg4;
        AF(p, s32, 4) -= AF(p, s32, 0x10) * arg4;
        AF(p, s32, 8) -= AF(p, s32, 0x14) * arg4;
        AF(p, s32, 0xC) -= AF(p, s32, 0x18) * arg4;
        if (arg4 >= 2) {
            AF(p, s32, 0x1C) = arg4 - 1;
        }
        AF(p, s16, 0x2C) = 1;
        AF(p, u8 *, 0x34) = arg0;
        AF(p, s16, 0x2E) = AF(p, s16, 6) - AF(arg0, s16, 6);
        AF(p, s16, 0x30) = AF(p, s16, 0xA) - AF(arg0, s16, 0xA);
        AF(p, s16, 0x32) = AF(p, s16, 0xE) - AF(arg0, s16, 0xE);
        if (arg1 != NULL) {
            AF(p, s16, 0x2E) += arg1->vx;
            AF(p, s16, 0x30) += arg1->vy;
            AF(p, s16, 0x32) += arg1->vz;
        }
    }
}

extern void func_sc07_004_801AA91C();

void func_sc07_004_801A900C(u8 *arg0) {
    s32 i;
    s16 a;

    for (i = 0; i < 4; i++) {
        a = i << 10;
        func_sc07_004_801AA91C(arg0, -0x300, a);
        func_sc07_004_801AA91C(arg0, 0x300, a);
    }
    for (i = 0; i < 8; i++) {
        a = i * 0x200 + 0x100;
        func_sc07_004_801AA91C(arg0, -0x180, a);
        func_sc07_004_801AA91C(arg0, 0x180, a);
        func_sc07_004_801AA91C(arg0, 0, (s16)(i * 0x200));
    }
}

void func_sc07_004_801A90D8(u8 *arg0) {
    MATRIX m;
    SVECTOR sv;
    SVECTOR out;
    s32 d;
    s32 r;
    u8 *q;

    d = g_PlayerX * g_PlayerX + D_80126B66 * D_80126B66;
    q = AF(arg0, u8 *, 0xCC);
    AF(arg0, s16, 0xA) = -0x500;
    if ((rand() & 0xF) || d > 0xF8100) {
        r = rand();
        m = GsIDMATRIX;
        RotMatrixY(r & 0xFF8, &m);
        sv.vy = 0;
        sv.vx = 0;
        sv.vz = -(rand() & 0x3F8);
        ApplyMatrixSV(&m, &sv, &out);
        AF(arg0, s16, 6) = out.vx + 0x90;
        AF(arg0, s16, 0xE) = out.vz;
    } else {
        AF(arg0, s16, 6) = g_PlayerX + 0x90;
        AF(arg0, s16, 0xE) = D_80126B66;
    }
    AF(q, s16, 8) = AF(arg0, s16, 6);
    AF(q, s16, 0xA) = AF(arg0, s16, 0xA);
    AF(q, s16, 0xC) = AF(arg0, s16, 0xE);
    AF(arg0, s32, 0x14) = 0x200000;
    AF(arg0, s32, 0x10) = -0x60000;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x84) = 8;
    SetState(arg0, 1);
}


void func_sc07_004_801A9270(u8 *arg0) {
    AF(arg0, s32, 0x1C) = (rand() & 7) + 0x50;
    if (AF(arg0, s32, 0xD0) != 0) {
        FreeShadow(AF(arg0, s32, 0xD0));
    }
    SetState(arg0, 2);
    SpawnActorArg(0x44, 1, arg0);
    ((struct_8_20 *)arg0)->field_6 -= 0x20;
    if (D_sc07_004_801F8E98 == 0) {
        PlaySoundId(0xABD, 0);
    }
    D_sc07_004_801F8E98++;
}

void func_sc07_004_801A930C(arg0)
    u8 *arg0;
{
    AF(arg0, s32, 0x1C) = AF(AF(arg0, u8 *, 0x64), s32, 0x1C);
    SetState(arg0, 3);
}

extern void (*D_sc07_004_801B0494[])();

void func_sc07_004_801A933C(u8 *arg0) {
    D_sc07_004_801B0494[AF(arg0, u16, 2)]();
}

extern s32 func_sc07_004_801AAF34();

void func_sc07_004_801A9378(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    if (func_sc07_004_801AAF34(arg0, 0, 0x20) != 0) {
        g_PlayerHitKind = 0x400B;
        g_PlayerHitDamage = 0x50;
    }
}

extern void (*D_sc07_004_801B05FC[])();

void func_sc07_004_801A93B8(u8 *arg0) {
    D_sc07_004_801B05FC[AF(arg0, u16, 2)]();
}

s32 func_sc07_004_801A93F4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x2D);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 1);
        AF(temp_v0, s16, 0x2C) = (s16) (rand() & 1);
    }
    return temp_v0;
}

s32 func_sc07_004_801A9454(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x2D);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x2C) = 2;
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + arg1);
    }
    return temp_v0;
}

extern void StopWithHalfGravity();

void func_sc07_004_801A94A0(u8 *arg0) {
    MATRIX m;
    SVECTOR sv;
    SVECTOR out;
    s16 a;
    s16 z;
    s16 f;

    StopWithHalfGravity();
    if (AF(arg0, s16, 0xFE) != 0) {
        AF(arg0, s16, 0xA) = -0x500;
        if (AF(arg0, s16, 0x70) == 0) {
            a = rand() & 0xFF8;
            z = -(rand() % 704);
            f = 1;
        } else if (g_PlayerX * g_PlayerX + D_80126B66 * D_80126B66 < 0x79000) {
            AF(arg0, s16, 6) = g_PlayerX;
            AF(arg0, u16, 0xE) = *(u16 *)&D_80126B66;
            f = 0;
        } else {
            a = (ratan2(-D_80126B66, g_PlayerX) - 0x400) & 0xFFF;
            z = -0x2C0;
            f = 1;
        }
        if (f != 0) {
            m = GsIDMATRIX;
            RotMatrixY(a, &m);
            sv.vy = 0;
            sv.vx = 0;
            sv.vz = z;
            ApplyMatrixSV(&m, &sv, &out);
            AF(arg0, s16, 6) = out.vx;
            AF(arg0, s16, 0xE) = out.vz;
        }
        AF(arg0, s32, 0x14) = 0x80000;
    } else {
        AF(arg0, s32, 0x48) = 0x12000;
    }
    SetState(arg0, 1);
}

extern s8 D_sc07_004_801B070C[];
extern void func_sc07_004_801A9954();
extern void func_sc07_004_801A9810();
extern void func_sc07_004_801A9908();

void func_sc07_004_801A9674(u8 *arg0) {
    u8 *m;
    u8 *o;
    s32 n;
    s16 y;
    s32 x;
    s32 z;

    m = AF(arg0, u8 *, 0xCC);
    o = AF(arg0, u8 *, 0xD0);
    StepSpriteAnim(m, arg0 + 0xF0);
    AF(m, u8, 0x27) = ((u16 *)D_sc07_004_801B070C)[AF(arg0, s16, 0xF4)];
    MoveObject(arg0);
    AF(m, s16, 8) = AF(arg0, s16, 6);
    AF(m, s16, 0xA) = AF(arg0, s16, 0xA);
    AF(m, s16, 0xC) = AF(arg0, s16, 0xE);
    n = 0x30;
    if (AF(arg0, s16, 0xFE) != 0) {
        AF(m, s16, 0x18) = (AF(arg0, s16, 0xA) + 0x1400) * 2;
        AF(m, s16, 0x1A) = (0x1000 - AF(arg0, s16, 0xA)) * 6;
    } else {
        n = 0x18;
    }
    y = AF(arg0, s16, 0xA);
    if (y >= -0x200) {
        x = AF(arg0, s16, 6);
        z = AF(arg0, s16, 0xE);
        AF(arg0, s16, 0xA) = -0x200;
        if (x * x + z * z > 0xFFFFF) {
            func_sc07_004_801A9954(arg0);
            return;
        }
        func_sc07_004_801A9810(arg0);
    } else if (AF(arg0, s16, 0xFE) != 0 && o != NULL) {
        m = AF(o, u8 *, 0xCC);
        if (m != NULL) {
            AF(m, s16, 0x18) = AF(m, s16, 0x1A) = (y + 0x500) * 0x28;
        }
    }
    func_sc07_004_801A9908(arg0, n);
}

extern u8 D_sc07_004_801B0604;
extern u8 D_sc07_004_801B061C;
extern u8 D_sc07_004_801B0694;
extern void func_sc07_004_801AA60C();
extern void func_sc07_004_801A99A4();

void func_sc07_004_801A9810(u8 *arg0) {
    u8 *m;

    m = AF(arg0, u8 *, 0xCC);
    if (AF(arg0, s32, 0xD0) != 0) {
        FreeShadow(AF(arg0, s32, 0xD0));
        AF(arg0, s32, 0xD0) = 0;
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        func_sc07_004_801AA60C(arg0, 0xAB7);
        func_sc07_004_801A99A4(arg0);
        StartSpriteAnim(m, arg0 + 0xF0, &D_sc07_004_801B061C);
    } else {
        StartSpriteAnim(m, arg0 + 0xF0, &D_sc07_004_801B0694);
    }
    AF(m, u8 *, 0x20) = &D_sc07_004_801B0604;
    AF(m, s16, 0x28) = 0x340;
    AF(m, s16, 0x2A) = 0x100;
    SetState(arg0, 2);
}

extern void (*D_sc07_004_801B072C[])();

void func_sc07_004_801A98CC(u8 *arg0) {
    D_sc07_004_801B072C[AF(arg0, u16, 2)]();
}

extern s32 func_sc07_004_801AAF34();

void func_sc07_004_801A9908(s32 arg0, s32 arg1) {
    if (func_sc07_004_801AAF34(arg0, 0, (s32) (s16) arg1) != 0) {
        g_PlayerHitDamage = 0x46;
        g_PlayerHitKind |= 0x4000;
    }
}

void func_sc07_004_801A9954(s32 arg0) {
    if (AF(arg0, s32, 0xD0) != 0) {
        FreeShadow(AF(arg0, s32, 0xD0));
    }
    ZeroFill(AF(arg0, s32, 0xCC), 0x38);
    FreeActor(arg0);
}

extern u8 D_sc07_004_801B0738;

void func_sc07_004_801A99A4(s32 arg0) {
    MATRIX m;
    u8 *p;
    s16 a;

    for (a = 0; a < 0x1000; a += 0x200) {
        p = (u8 *)SpawnActorArg(0x34, 0x100, arg0);
        if (p != NULL) {
            m = GsIDMATRIX;
            RotMatrixY(a, &m);
            ApplyMatrixLV(&m, &D_sc07_004_801B0738, p + 0x10);
            AF(p, s32, 4) += AF(p, s32, 0x10);
            AF(p, s32, 0xC) += AF(p, s32, 0x18);
        }
    }
}

extern u8 D_sc07_004_801B0748;
extern u8 D_sc07_004_801F8A50;
extern s32 StartImageAnim();

s32 func_sc07_004_801A9AAC(void) {
    return StartImageAnim(0, (s32) &D_sc07_004_801F8A50, (s32) &D_sc07_004_801B0748);
}

extern s32 StepImageAnim();

s32 func_sc07_004_801A9ADC(void) {
    return StepImageAnim(0, (s32) &D_sc07_004_801F8A50);
}

extern void (*D_sc07_004_801B0768[])();

void func_sc07_004_801A9B04(u8 *arg0) {
    D_sc07_004_801B0768[AF(arg0, u16, 2)]();
}

void func_sc07_004_801A9B40(s32 p, s32 x, s32 y) {
    struct_8_4 r;
    r.field_0 = x;
    r.field_2 = y;
    r.field_4 = 0x10;
    r.field_6 = 1;
    StoreImage(&r, p);
}

void func_sc07_004_801A9B80(u32 *arg0, s16 arg1, s16 arg2) {
    RECT r;
    s32 i;
    u32 t1, t2;

    t1 = arg0[7];
    t2 = arg0[6];
    for (i = 7; i >= 3; i -= 2) {
        arg0[i] = arg0[i - 2];
        arg0[i - 1] = arg0[i - 3];
    }
    arg0[i] = t1;
    arg0[i - 1] = t2;
    r.x = arg1;
    r.y = arg2;
    r.w = 16;
    r.h = 1;
    LoadImage(&r, arg0);
}

extern s32 FindFreeActor();

s32 func_sc07_004_801A9C00(u8 *arg0) {
    struct_14_14 s;
    s32 r;

    if (arg0 != NULL && AF(arg0, u16, 0) != 0) {
        s.field_0.vx = AF(arg0, s16, 6);
        s.field_0.vy = AF(arg0, s16, 0xA);
        s.field_0.vz = AF(arg0, s16, 0xE);
    } else {
        s.field_0.vz = 0;
        s.field_0.vy = 0;
        s.field_0.vx = 0;
    }
    s.field_0.pad = 0x43;
    s.field_8.vy = 0;
    s.field_8.vx = 0;
    s.field_10 = 0;
    s.field_8.pad = 0;
    s.field_8.vz = 0x7FFF;
    r = FindFreeActor();
    if (r == 0) {
        return 0;
    }
    return InitSpawnedActor(&s, r, arg0);
}

extern u8 D_sc07_004_801B0770;
extern u8 D_sc07_004_801EFC18;
extern void InitSpriteKind2();
extern s32 func_sc07_004_801A9EB0();
extern void func_sc07_004_801AA2F8();
extern s32 func_sc07_004_801A9F5C();
s32 func_sc07_004_801A9FA8(s32 arg0);

void func_sc07_004_801A9CAC(u8 *arg0) {
    u8 unused[8]; /* MATCH-TRICK: frame (unused 8-byte slot, recipes func_80129CF8) */
    u8 *m;
    u8 *p;
    u8 *q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
    case 1:
        m = (u8 *)AllocSpriteInRange(0x7E, 0x100);
        if (m == NULL) {
            RejectSpawn(arg0);
            return;
        }
        AF(arg0, u8 *, 0x20) = m;
        InitSpriteKind2(m, &D_sc07_004_801B0770, 0x280, 0x180);
        AF(m, u8, 0x27) = 0xFF;
        AF(m, s16, 0x10) = 0x400;
        AF(m, s32, 4) |= 0x51000000;
        AF(m, s16, 0x14) = -AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
        if (AF(arg0, s16, 0x70) == 0) {
            AF(arg0, s16, 0xFE) = -0x20;
            AF(m, s16, 0x14) += 0x180;
        } else {
            AF(arg0, s16, 0xFE) = 0x20;
            AF(m, s16, 0x14) -= 0x180;
        }
        AF(arg0, s16, 0xA) -= 0x40;
        func_sc07_004_801A9EB0(arg0);
        func_sc07_004_801AA60C(arg0, 0xAB6);
        break;
    case 2:
        func_sc07_004_801AA2F8();
    case 3:
        p = (u8 *)AllocActorModel();
        AF(arg0, u8 *, 0x20) = p;
        if (p == NULL) {
            RejectSpawn(arg0);
            return;
        }
        InitModel(p, &D_sc07_004_801EFC18);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(arg0, s16, 0xA) = -0x200;
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
        if (AF(arg0, s16, 0x70) == 2) {
            q = AF(arg0, u8 *, 0x20);
            AF(q, s16, 0x1C) = 0x400;
            AF(q, s16, 0x18) = 0x400;
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x600;
            func_sc07_004_801A9F5C(arg0);
            func_sc07_004_801AA60C(arg0, 0xAB5);
        } else {
            q = AF(arg0, u8 *, 0x20);
            AF(q, u16, 0x18) = AF(q, u16, 0x1A) = AF(q, u16, 0x1C) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x18);
            func_sc07_004_801A9FA8(arg0);
        }
        break;
    }
}

extern u8 D_sc07_004_801B077C;
extern void func_sc07_004_801AA004();
extern void func_sc07_004_801AA210();

s32 func_sc07_004_801A9EB0(s32 arg0) {
    u8 a[0x20];
    SVECTOR b;
    SVECTOR c;
    SVECTOR d;

    func_sc07_004_801AA004(arg0, a);
    MoveObject(arg0);
    MoveObject(arg0);
    func_sc07_004_801AA210(arg0, a, &b);
    AF(arg0, s32, 0xCC) = func_sc07_002_8017D7D4(&b, &c, &D_sc07_004_801B077C, 0xC);
    AF(arg0, s32, 0xD0) = func_sc07_002_8017D7D4(&b, &d, &D_sc07_004_801B077C, 0xC);
    AF(arg0, s32, 0x1C) = 0x30;
    return SetState(arg0, 1);
}

extern void func_sc07_004_801AA0B4();
extern void MoveObject();

s32 func_sc07_004_801A9F5C(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc07_004_801AA0B4(arg0);
    MoveObject(arg0);
    MoveObject(arg0);
    return SetState(arg0, 2);
}

s32 func_sc07_004_801A9FA8(s32 arg0);

s32 func_sc07_004_801A9FA8(s32 arg0) {
    return SetState(arg0, 3);
}

extern void (*D_sc07_004_801B0780[])();

void func_sc07_004_801A9FC8(u8 *arg0) {
    D_sc07_004_801B0780[AF(arg0, u16, 2)]();
}

void func_sc07_004_801AA004(u8 *arg0, MATRIX *arg1) {
    VECTOR v;

    *arg1 = GsIDMATRIX;
    RotMatrixY(-AF(AF(arg0, u8 *, 0x20), s16, 0x14), arg1);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0xFFE40000;
    ApplyMatrixLV(arg1, &v, arg0 + 0x10);
}

void func_sc07_004_801AA0B4(u8 *arg0) {
    MATRIX m;
    VECTOR v;

    m = GsIDMATRIX;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0xFFE40000;
    SetRotMatrix(&m);
    ApplyRotMatrixLV(&v, arg0 + 0x10);
}

extern u8 D_sc07_004_801B0790;
extern u8 D_sc07_004_801B07A0;
extern void ApplyRotMatrix();
extern void ApplyRotMatrixLV();

void func_sc07_004_801AA160(s32 arg0, s32 arg1) {
    VECTOR v;
    MATRIX unused; /* MATCH-TRICK: frame (unused 0x20 slot, recipes func_80129CF8) */
    u8 *o;

    o = (u8 *) SpawnPropFrom(arg0, 0x22);
    if (o != NULL) {
        ApplyRotMatrix(&D_sc07_004_801B0790 + arg1 * 8, &v);
        AF(o, u16, 6) += v.vx;
        AF(o, u16, 0xA) += v.vy;
        AF(o, u16, 0xE) += v.vz;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC020;
        ApplyRotMatrixLV(&D_sc07_004_801B07A0 + arg1 * 0x10, o + 0x10);
        AF(o, s16, 0x34) = 0x3400;
    }
}

extern void func_80020F34();

void func_sc07_004_801AA210(u8 *arg0, MATRIX *arg1, SVECTOR *arg2) {
    SVECTOR v;
    SVECTOR r;
    s32 flag;

    arg1->t[0] = AF(arg0, s16, 6);
    arg1->t[1] = AF(arg0, s16, 0xA);
    arg1->t[2] = AF(arg0, s16, 0xE);
    r.vx = AF(AF(arg0, u8 *, 0x20), s16, 0x18);
    r.vy = 0x1000;
    r.vz = AF(AF(arg0, u8 *, 0x20), s16, 0x1A);
    func_80020F34(arg1, &r);
    SetRotMatrix(arg1);
    SetTransMatrix(arg1);
    v.vy = 0;
    v.vx = 0;
    v.vz = -0x50;
    RotTransSV(&v, arg2, &flag);
    v.vx = -0x38;
    v.vz = -0x18;
    RotTransSV(&v, arg2 + 1, &flag);
    v.vx = 0x38;
    RotTransSV(&v, arg2 + 2, &flag);
}

void func_sc07_004_801AA2F8(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        SetShapeCircle(&D_sc07_004_801F88B8[i], 0x20);
        D_sc07_004_801F88B8[i].field_0.field_0 = -0x40 - i * 0x30;
        D_sc07_004_801F88B8[i].field_0.field_1 = -1 - i * 0x40;
        D_sc07_004_801F88B8[i].field_0.field_2 = -1 - i * 0x40;
        D_sc07_004_801F88B8[i].field_4 = D_sc07_004_801A01E8;
    }
}

void func_sc07_004_801AA3CC(s32 arg0) {
    SVECTOR v;
    VECTOR w;
    u8 *p;

    p = (u8 *)SpawnPropFrom(arg0, 0x2C);
    if (p != NULL) {
        v.vx = (rand() & 0x3F) - 0x20;
        v.vy = -(rand() & 0x3F);
        v.vz = rand() & 0x3F;
        ApplyRotMatrix(&v, &w);
        AF(p, s16, 6) += w.vx;
        AF(p, s16, 0xA) += w.vy;
        AF(p, s16, 0xE) += w.vz;
        w.vz = 0x40000;
        w.vx = v.vx << 14;
        w.vy = v.vy << 13;
        ApplyRotMatrixLV(&w, p + 0x10);
    }
}

extern s32 func_sc07_004_801AA4EC();

void func_sc07_004_801AA4A8(s32 arg0, s32 arg1) {
    if (func_sc07_004_801AA4EC() != 0) {
        g_PlayerHitDamage = 0x64;
        g_PlayerHitKind |= 0x4000;
    }
}

extern s32 SegmentHitsPlayer();

s32 func_sc07_004_801AA4EC(s32 arg0, u8 *arg1) {
    if (SegmentHitsPlayer(arg0, arg1, arg1 + 8) == 0) {
        return SegmentHitsPlayer(arg0, arg1, arg1 + 0x10) != 0;
    }
    return 1;
}

extern s32 func_sc07_004_801AA584();

void func_sc07_004_801AA540(s32 arg0) {
    if (func_sc07_004_801AA584() != 0) {
        g_PlayerHitDamage = 0x64;
        g_PlayerHitKind |= 0x4000;
    }
}

extern s32 ActorSegmentHitsPlayer();

s32 func_sc07_004_801AA584(u8 *arg0) {
    struct_8_4 a, b;

    a.field_0 = b.field_0 = 0x18;
    b.field_2 = -0x30;
    a.field_2 = 0;
    a.field_4 = b.field_4 = -0x20;
    if (ActorSegmentHitsPlayer(arg0, &a, &b) == 0) {
        a.field_0 = b.field_0 = -0x18;
        return ActorSegmentHitsPlayer(arg0, &a, &b) != 0;
    }
    return 1;
}

void func_sc07_004_801AA60C(u8 *arg0, s32 arg1_0) {
    u16 arg1 = arg1_0;
    SVECTOR v;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    v.vx = AF(arg0, s16, 6);
    v.vy = AF(arg0, s16, 0xA);
    v.vz = AF(arg0, s16, 0xE);
    RotTransPers(&v, &sxy, &p, &flag);
    if (flag >= 0 && (u16)(AF(&sxy, s16, 0) + 0xC8) <= 0x190 && (u16)(AF(&sxy, s16, 2) + 0xAA) <= 0x154) {
        AF(&sxy, s16, 0) += 0xA0;
        a = (AF(&sxy, s16, 0) << 7) / 320;
        if (a <= 0) {
            a = 1;
        }
        if (a >= 0x80) {
            a = 0x7F;
        }
        PlaySoundId((u16)arg1, (u16)(a | 0x2000));
    }
}

extern void (*D_sc07_004_801B07C0[])();

void func_sc07_004_801AA730(u8 *arg0) {
    D_sc07_004_801B07C0[AF(arg0, u16, 2)]();
}

extern void (*D_sc07_004_801B07C8[])();

void func_sc07_004_801AA76C(u8 *arg0) {
    D_sc07_004_801B07C8[AF(arg0, u16, 2)]();
}

extern void (*D_sc07_004_801B07D0[])();

void func_sc07_004_801AA7A8(u8 *arg0) {
    D_sc07_004_801B07D0[AF(arg0, u16, 2)]();
}

void func_sc07_004_801AA7E4(u8 *arg0) {
    MATRIX m;
    SVECTOR sv;
    VECTOR v;

    if (AF(arg0, s16, 0x32) == 0) {
        sv.vx = AF(AF(arg0, u8 *, 0x20), u16, 0x10);
        sv.vy = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
        sv.vz = 0;
        RotMatrixZYX(&sv, &m);
        SetRotMatrix(&m);
        v.vy = 0;
        v.vx = 0;
        v.vz = -0x1A0000;
        ApplyRotMatrixLV(&v, arg0 + 0x10);
        sv.vz = 0;
        sv.vx = 0;
        sv.vy = 3;
        ApplyRotMatrix(&sv, &v);
    } else {
        RotMatrix(AF(arg0, u8 *, 0x20) + 0x10, &m);
        SetRotMatrix(&m);
        v.vx = 0x480000;
        v.vz = 0;
        v.vy = 0;
        ApplyRotMatrixLV(&v, arg0 + 0x10);
        sv.vy = 0;
        sv.vx = 0;
        sv.vz = 8;
        ApplyRotMatrix(&sv, &v);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x2E) = v.vx;
    AF(AF(arg0, u8 *, 0x20), s16, 0x30) = v.vy;
    AF(AF(arg0, u8 *, 0x20), s16, 0x32) = v.vz;
}

void func_sc07_004_801AA91C(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *o;
    u8 *m;

    o = (u8 *) SpawnPropFrom(arg0, 0x71);
    if (o != NULL) {
        m = AF(o, u8 *, 0x20); AF(o, u16, 0xA) += AF(arg0, u16, 0x52); AF(m, s16, 0x10) = arg1;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = arg2;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
        AF(o, s16, 0x30) = 5;
        AF(o, s16, 0x32) = 0;
        if (rand() & 1) AF(o, s32, 0x34) = 0x0180FF80; else AF(o, s32, 0x34) = 0x01FF8080;
    }
}

extern s32 SpawnProp();

void func_sc07_004_801AA9D4(u8 *arg0, struct_8_10 *arg1) {
    u8 *p;
    u8 *q;

    p = (u8 *)SpawnProp(0x71);
    if (arg0 != NULL) {
        q = AF(p, u8 *, 0x20);
        AF(p, u16, 6) = AF(arg0, u16, 6);
        AF(p, u16, 0xA) = AF(arg0, u16, 0xA);
        AF(p, u16, 0xE) = AF(arg0, u16, 0xE);
        AF(q, struct_8_10, 0x10) = *arg1;
        AF(p, s16, 0x30) = 5;
        AF(p, s16, 0x32) = 1;
        AF(p, s32, 0x34) = 0x180F0F0;
    }
}

extern void func_sc07_004_801AAB28();

void func_sc07_004_801AAA6C(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 i;
    s32 j;
    s32 k;

    a.vx = AF(arg0, s16, 6) + AF(arg0, s16, 0x50);
    a.vy = AF(arg0, s16, 0xA) + AF(arg0, s16, 0x52);
    a.vz = AF(arg0, s16, 0xE) + AF(arg0, s16, 0x54);
    b.vz = 0x24;
    b.pad = 5;
    for (j = 0, k = -0x200; j < 2; j++, k += 0x400) {
        for (i = 0; i < 4; i++) {
            b.vx = k;
            b.vy = i << 10;
            func_sc07_004_801AAB28(&a, &b, 0x101820);
        }
    }
}

extern void func_sc07_004_801AACD4();

void func_sc07_004_801AAB28(struct_8_6 *arg0, struct_8_6 *arg1, s32 arg2) {
    struct_8_6 a;
    struct_8_6 b;
    struct_8_6 c;
    u16 n;
    u16 total;
    u16 step;
    u16 acc;
    s32 i;

    n = arg1->field_6;
    total = arg1->field_4;
    if (n == 0 || total < n) {
        return;
    }
    acc = 0;
    step = total / n;
    a = *arg0;
    b = *arg1;
    for (i = 0; i < n; i++) {
        if (i != 0) {
            b.field_0 = c.field_0 + (rand() & 0x7FF) - 0x400;
            b.field_2 = c.field_2 + (rand() & 0x7FF) - 0x400;
        } else {
            b.field_0 = arg1->field_0 + (rand() & 0x1FF) - 0x100;
            b.field_2 = arg1->field_2 + (rand() & 0x1FF) - 0x100;
        }
        if (i != n - 1) {
            func_sc07_004_801AACD4(&a, &b, step, arg2);
            c.field_0 = b.field_0;
            c.field_2 = b.field_2;
        } else {
            func_sc07_004_801AACD4(&a, &b, (u16)(total - acc), arg2);
        }
        acc += step;
    }
}

extern void func_sc07_004_801AADA8();

void func_sc07_004_801AACD4(SVECTOR *arg0, SVECTOR *arg1, s32 arg2, s32 arg3) {
    MATRIX m;
    SVECTOR sv;
    s32 flag;

    RotMatrixZYX(arg1, &m);
    m.t[0] = arg0->vx;
    m.t[1] = arg0->vy;
    m.t[2] = arg0->vz;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    sv.vy = 0;
    sv.vx = 0;
    sv.vz = -arg2;
    RotTransSV(&sv, &sv, &flag);
    func_sc07_004_801AADA8(arg0, &sv, arg3);
    *arg0 = sv;
}

extern struct_14_3 g_WorldOtOrg[];
extern struct_14_4 g_WorldOt[];
extern void AddDrawModeAbr();

void func_sc07_004_801AADA8(SVECTOR *arg0, SVECTOR *arg1, s32 arg2) {
    u8 *p;
    s32 interp;
    s32 flag;
    s32 otz;

    p = AllocPrim(0x10);
    AF(p, s32, 4) = arg2;
    p[3] = 3;
    p[7] = 0x42;
    SetRotMatrix(D_800AF648);
    SetTransMatrix(D_800AF648);
    otz = RotTransPers(arg0, p + 8, &interp, &flag);
    if (otz > 0 && flag >= 0 && RotTransPers(arg1, p + 0xC, &interp, &flag) > 0 && flag >= 0) {
        addPrim(g_WorldOtOrg[D_800B9A02[0]].field_0 + otz, p);
        AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], otz, 1);
    }
}

extern s32 func_sc07_004_801AAF8C();

s32 func_sc07_004_801AAF34(u8 *arg0, s32 arg1, s32 arg2_0) {
    s16 arg2 = arg2_0;
    SVECTOR v;

    v.vx = AF(arg0, u16, 6) + AF(arg0, u16, 0x50);
    v.vy = AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52);
    v.vz = AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54);
    return func_sc07_004_801AAF8C(&v, arg1, arg2);
}

s32 func_sc07_004_801AAF8C(SVECTOR *arg0, SVECTOR *arg1, s32 arg2) {
    MATRIX m;
    SVECTOR rot;
    SVECTOR pos;
    SVECTOR v;
    s32 flag;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 c;

    pos = *arg0;
    if (arg1 != NULL) {
        pos.vx += arg1->vx;
        pos.vy += arg1->vy;
        pos.vz += arg1->vz;
    }
    dx = g_PlayerX - pos.vx;
    dy = -(pos.vy + 0x20) + D_80126B62;
    dz = D_80126B66 - pos.vz;
    rot.vy = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    c = rcos(rot.vy);
    dz = (dz * c + dx * rsin(rot.vy)) >> 12;
    rot.vx = ratan2(dy, -dz);
    rot.vz = 0;
    RotMatrixZYX(&rot, &m);
    SetRotMatrix(&m);
    m.t[0] = pos.vx;
    m.t[1] = pos.vy;
    m.t[2] = pos.vz;
    SetTransMatrix(&m);
    v.vy = 0;
    v.vx = 0;
    v.vz = -arg2;
    RotTransSV(&v, &v, &flag);
    if (PathHitsModel(D_80126B78, D_80126B90, &pos, &v) != 0) {
        HitPlayer(1, 1, 0, 0xA, &v, &D_801152A8);
        return 1;
    }
    return 0;
}

extern void func_sc07_004_801AB1A8();

void func_sc07_004_801AB178(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_sc07_004_801AB1A8();
    }
}

extern u8 D_sc07_004_801F7490[];

void func_sc07_004_801AB1A8(u8 *arg0) {
    u8 *m;

    m = (u8 *) AllocActorModel();
    AF(arg0, u8 *, 0x20) = m;
    if (m == NULL) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(m, D_sc07_004_801F7490);
    AF(arg0, s16, 0xE) = 0;
    AF(arg0, s16, 0xA) = 0;
    AF(arg0, s16, 6) = 0;
    AF(AF(arg0, u8 *, 0x20), s32, 0x28) = 0x1000100;
    NextState(arg0);
}

extern struct_14_3 g_FrontOtOrg[];
extern struct_14_4 g_FrontOt[];
void func_sc07_004_801AB21C(u16 arg0, u8 r, u8 g, u8 b) {
    u8 *p;

    p = AllocPrim(0x18);
    AF(p, u8, 3) = 5;
    AF(p, u8, 7) = 0x2A;
    AF(p, s16, 8) = AF(p, s16, 0x10) = -0xA0;
    AF(p, s16, 0xC) = AF(p, s16, 0x14) = 0xA0;
    AF(p, s16, 0xA) = AF(p, s16, 0xE) = -0x78;
    AF(p, u8, 4) = r;
    AF(p, u8, 5) = g;
    AF(p, u8, 6) = b;
    AF(p, s16, 0x12) = AF(p, s16, 0x16) = 0x78;
    if (arg0 != 0) {
        addPrim(&g_WorldOtOrg[WORK->frame].field_0[arg0], p);
        AddDrawModeAbr(&g_WorldOt[WORK->frame], arg0, 1);
    } else {
        addPrim(g_FrontOtOrg[WORK->frame].field_0, p);
        AddDrawModeAbr(&g_FrontOt[WORK->frame], 0, 1);
    }
}

extern u8 D_sc07_004_801F88F9;
extern u8 D_sc07_004_801F88FA;
extern u8 *D_sc07_004_801B0358[];

void func_sc07_004_801AB41C(u8 *arg0) {
    u8 *t;
    u8 *q;

    t = D_sc07_004_801B0358[AF(arg0, s16, 0x70)];
    if (AF(arg0, s32, 0x1C) & 1) {
        *(struct_4_3 *)D_sc07_004_801F88F8 = AF(t, struct_4_3, 4);
    } else {
        D_sc07_004_801F88F8[0] = t[4] >> 1;
        D_sc07_004_801F88F9 = t[5] >> 1;
        D_sc07_004_801F88FA = t[6] >> 1;
    }
    MoveObject(arg0);
    func_sc07_004_801A7808(arg0, AF(arg0, u8 *, 0xCC));
    func_sc07_004_801A7808(arg0, AF(arg0, u8 *, 0xD0));
    func_sc07_004_801A7808(arg0, AF(arg0, u8 *, 0xD4));
    q = AF(arg0, u8 *, 0xD8);
    if (q != NULL) {
        AF(q, s16, 6) = AF(arg0, s16, 6);
        AF(q, s16, 0xA) = AF(arg0, s16, 0xA);
        AF(q, s16, 0xE) = AF(arg0, s16, 0xE);
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 0x102) = 0;
        AF(arg0, s16, 0x100) = 0;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s32, 0x1C) = 4;
        NextState(arg0);
    }
}

extern void func_sc07_004_801A8494();

void func_sc07_004_801AB54C(u8 *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0;
    void *temp_a0;

    func_sc07_004_801A8494();
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(temp_a0, s16, 0x18);
    if (temp_v0_2 < 0x600) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0_2 + 0x100);
    }
    temp_v0_3 = AF(AF(arg0, void *, 0x20), s16, 0x1A);
    if (temp_v0_3 < 0xA00) {
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) (temp_v0_3 + 0x140);
    }
}

extern struct_4_2 D_sc07_004_801F8A3A[];

void func_sc07_004_801AB5D4(u8 *arg0) {
    s32 i;

    if (AF(arg0, s32, 0x1C) < 5) {
        for (i = 0; i < 12; i += 2) {
            ((struct_4_2 *)D_sc07_004_801F88C8)[i].field_0 += D_sc07_004_801F8A38[i >> 1].field_0;
            ((struct_4_2 *)D_sc07_004_801F88C8)[i].field_2 += D_sc07_004_801F8A38[i >> 1].field_2;
        }
        AF(arg0, u16, 0x2C) += 0x10;
        DrawFadeWhite(AF(arg0, u16, 0x2C) & 0xFF, 1);
    }
    if (--AF(arg0, s32, 0x1C) == 0) {
        func_sc07_004_801A7CC8(arg0);
    }
}

void func_sc07_004_801AB694(u8 *arg0) {
    s32 i;

    for (i = 0; i < 12; i += 2) {
        ((struct_4_2 *)D_sc07_004_801F88C8)[i].field_0 -= D_sc07_004_801F8A38[i >> 1].field_0;
        ((struct_4_2 *)D_sc07_004_801F88C8)[i].field_2 -= D_sc07_004_801F8A38[i >> 1].field_2;
    }
    AF(arg0, u16, 0x2C) -= 0x10;
    DrawFadeWhite(AF(arg0, u16, 0x2C) & 0xFF, 1);
    if (--AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x2A) = 0;
    }
}

void func_sc07_004_801AB748(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = 0x400;
    AF(temp_v1, s16, 0x18) = 0x400;
    AF(AF(arg0, void *, 0x20), u16, 0x2C) = 0xC020;
    AF(arg0, s16, 2) = 1;
}

void func_sc07_004_801AB78C(u8 *arg0) {
    s16 t;

    if (D_sc07_004_801F88BA[0] == 0) {
        FreeProp(arg0);
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x200;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
    t = D_sc07_004_801F88BA[0];
    if (t != 0) {
        t -= 0x10;
        if (t < 0) {
            t = 0;
        }
        D_sc07_004_801F88BA[0] = t;
    }
}

void func_sc07_004_801AB818(u8 *arg0) {
    s32 n;
    struct_4_3 *p;
    struct_4_3 c;

    n = AF(arg0, s32, 0x1C);
    p = AF(arg0, struct_4_3 *, 0x24);
    if (n != 0) {
        AF(arg0, s32, 0x1C) = n - 1;
        func_sc07_004_801A8440(arg0);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x370;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        *(s32 *)&c = *(s32 *)p;
        *(s32 *)&c += ((s32 *)arg0)[0xC];
        *p = c;
        return;
    }
    FreeProp(arg0);
}

extern struct_4_3 D_sc07_004_801A0214;
extern struct_4_3 D_sc07_004_801F897C;
extern void func_8001CA88();

void func_sc07_004_801AB8C0(u8 *arg0) {
    s32 r;
    struct_4_3 *p;
    u8 *q;

    r = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(arg0, s16, 0x70) == 0) {
        p = (struct_4_3 *)&D_sc07_004_801F8978;
        SetShapeCircle(p, 0x30);
        *p = D_sc07_004_801A0214;
        D_sc07_004_801F897C = D_sc07_004_801A01E8;
    }
    func_8001CA88(AF(arg0, s32, 0x20), &D_sc07_004_801F8978);
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    q = AF(arg0, u8 *, 0x20);
    AF(q, s16, 0x1A) = 0x200;
    AF(q, s16, 0x18) = 0x200;
    func_sc07_004_801A881C(arg0);
}

extern void func_sc07_004_801A8884();
extern void func_sc07_004_801A88AC();
extern void func_sc07_004_801A8990();

void func_sc07_004_801AB9AC(s32 arg0) {
    s16 temp_v0;
    void *temp_a0;

    if (!(D_sc07_002_8019FF8A & 1)) {
        func_sc07_004_801A8884();
    } else if (D_sc07_002_8019FF8A & 0x400) {
        func_sc07_004_801A88AC(arg0);
    }
    AF(arg0, u16, 0x104) = (u16) AF(AF(arg0, void *, 0x64), u16, 6);
    AF(arg0, u16, 0x106) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(arg0, u16, 0x108) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
    func_sc07_004_801A8990(arg0);
    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 < 0x28) {
        AF(arg0, s16, 0xFE) = (s16) (temp_v0 + 2);
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) + 0x28);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x102));
}

void func_sc07_004_801ABA74(u8 *arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, s16, 0xFE) += 0x14;
        AF(arg0, s16, 0x104) = AF(AF(arg0, u8 *, 0x64), s16, 6);
        AF(arg0, s16, 0x106) = AF(AF(arg0, u8 *, 0x64), s16, 0xA);
        AF(arg0, s16, 0x108) = AF(AF(arg0, u8 *, 0x64), s16, 0xE);
        func_sc07_004_801A8990(arg0);
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x34)++;
        }
        break;
    case 1:
        AF(arg0, s16, 0xFE) -= 8;
        if (AF(arg0, s16, 0xFE) < 8) {
            if (AF(arg0, s32, 0xCC) != 0) {
                func_sc07_002_8017E5D4(AF(arg0, s32, 0xCC));
            }
            FreeActor(arg0);
            return;
        }
        AF(arg0, s16, 0x104) = AF(AF(arg0, u8 *, 0x64), s16, 6);
        AF(arg0, s16, 0x106) = AF(AF(arg0, u8 *, 0x64), s16, 0xA);
        AF(arg0, s16, 0x108) = AF(AF(arg0, u8 *, 0x64), s16, 0xE);
        func_sc07_004_801A8990(arg0);
        break;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) += AF(arg0, s16, 0x102);
}

void func_sc07_004_801ABBA4(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        if (AF(arg0, s32, 0xCC) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0xCC));
        }
        FreeActor(arg0);
        return;
    }
    MoveObject(arg0);
}

extern u8 D_sc07_004_801B03F4;
extern void InitSpriteKind3();

void func_sc07_004_801ABC04(u8 *arg0) {
    u8 *p;
    s32 t;

    InitSpriteKind3(AF(arg0, u8 *, 0x20), &D_sc07_004_801B03F4, 0x2F8, 0x1C0);
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x58000000;
    t = (rand() & 0xF8) | 0x200;
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    AF(AF(arg0, u8 *, 0x20), u8, 0x27) = 0x55;
    AF(arg0, u16, 2)++;
}

void func_sc07_004_801ABC8C(u8 *arg0) {
    SVECTOR sv;
    u8 *q;

    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
        sv.vx = AF(arg0, s16, 6);
        sv.vy = AF(arg0, s16, 0xA);
        sv.vz = AF(arg0, s16, 0xE);
        if (AF(arg0, s16, 0x2C) == 0) {
            MoveProp(arg0);
        } else {
            q = AF(arg0, u8 *, 0x34);
            AF(arg0, u16, 6) = AF(arg0, u16, 0x2E);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x30);
            AF(arg0, u16, 0xE) = AF(arg0, u16, 0x32);
            MoveProp(arg0);
            AF(arg0, u16, 0x2E) = AF(arg0, u16, 6);
            AF(arg0, u16, 0x30) = AF(arg0, u16, 0xA);
            AF(arg0, u16, 0x32) = AF(arg0, u16, 0xE);
            if (q != NULL) {
                AF(arg0, u16, 6) += AF(q, u16, 6);
                AF(arg0, u16, 0xA) += AF(q, u16, 0xA);
                AF(arg0, u16, 0xE) += AF(q, u16, 0xE);
            }
        }
        func_sc07_004_801A8B64(arg0, &sv);
    } else {
        FreeProp(arg0);
    }
}

extern u8 D_sc07_004_801B0408;
extern u8 D_sc07_004_801B0414;
extern s32 AllocSpriteInRange();
extern void InitSpriteKind3();
extern s32 func_80143994();
extern void func_sc07_004_801A90D8();
extern void func_sc07_004_801A930C();

void func_sc07_004_801ABDA4(u8 *arg0) {
    u8 *p;
    u8 *m;
    u8 *q;
    u16 t;

    p = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    AF(arg0, u8 *, 0xCC) = p;
    m = (u8 *) AllocActorModel();
    AF(arg0, u8 *, 0x20) = m;
    if ((m == NULL) || (p == NULL)) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitNullModel(m);
    InitSpriteKind3(p, (s32) &D_sc07_004_801B0408, 0x340, 0x100);
    AF(p, u8, 0x27) = 0x59;
    AF(p, s16, 0x18) = 0x3000;
    AF(p, s16, 0x1A) = 0x3000;
    AF(p, u16, 0x2C) = 0xC018;
    AF(p, s32, 4) |= 0x50000000;
    StartSpriteAnim(AF(arg0, s32, 0xCC), (s32) (arg0 + 0xF0), (s32) &D_sc07_004_801B0414);
    if (AF(arg0, s16, 0x70) == 0) {
        q = (u8 *) func_80143994((s32) arg0, 1);
        AF(arg0, u8 *, 0xD0) = q;
        if (q != NULL) {
            p = AF(q, u8 *, 0xCC);
            if (p != NULL) {
                AF(p, u16, 0x2C) = 0xC018;
            }
        }
        func_sc07_004_801A90D8((s32) arg0);
        return;
    }
    t = AF(arg0, u16, 6) + 0x20;
    AF(arg0, u16, 6) = t;
    AF(p, u16, 8) = t;
    AF(p, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(p, u16, 0xC) = AF(arg0, u16, 0xE);
    func_sc07_004_801A930C();
}

extern void func_sc07_004_801A9270();
extern void func_sc07_004_801A9378();

void func_sc07_004_801ABEE0(u8 *arg0) {
    u8 *s;
    u8 *t;
    s16 y;

    s = AF(arg0, u8 *, 0xCC);
    t = AF(arg0, u8 *, 0xD0);
    MoveObject(arg0);
    AF(s, s16, 8) = AF(arg0, s16, 6);
    AF(s, s16, 0xA) = AF(arg0, s16, 0xA);
    AF(s, s16, 0xC) = AF(arg0, s16, 0xE);
    y = AF(arg0, s16, 0xA);
    if (y >= -0x200) {
        AF(arg0, s16, 0xA) = -0x200;
        func_sc07_004_801A9270(arg0);
    } else {
        if (t != NULL) {
            s = AF(t, u8 *, 0xCC);
            if (s != NULL) {
                AF(s, s16, 0x18) = AF(s, s16, 0x1A) = (y + 0x500) * 16;
            }
        }
        if (!(++AF(arg0, s32, 0x1C) & 1)) {
            func_sc07_004_801A93F4(arg0);
        }
    }
    StepSpriteAnim(AF(arg0, u8 *, 0xCC), arg0 + 0xF0);
    func_sc07_004_801A9378(arg0);
    if (AF(arg0, s16, 0x84) != 0) {
        if (--AF(arg0, s16, 0x84) == 0) {
            func_sc07_004_801AA60C(arg0, 0xAB8);
        }
    }
}

extern void func_sc07_004_801A9378();

void func_sc07_004_801ABFF8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_s1;
    u16 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0xCC);
    StepSpriteAnim(temp_s1, (s32) (arg0 + 0xF0));
    temp_v0 = AF(temp_s1, s16, 0x1A);
    if (temp_v0 >= 0x1801) {
        AF(temp_s1, s16, 0x1A) = (s16) (temp_v0 - 0x400);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc07_004_801A9454((s32) arg0, 0x10);
        ZeroFill(AF(arg0, s32, 0xCC), 0x38);
        FreeActor((s32) arg0);
        temp_v0_2 = D_sc07_004_801F8E98 - 1;
        D_sc07_004_801F8E98 = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            PlaySoundId(4, 0xABD);
        }
    } else {
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            func_sc07_004_801A9454((s32) arg0, 0);
        }
        func_sc07_004_801A9378((s32) arg0);
    }
}

void func_sc07_004_801AC0D4(u8 *arg0) {
    s16 temp_v0;
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xCC);
    StepSpriteAnim(temp_s0, (s32) (arg0 + 0xF0));
    temp_v0 = AF(temp_s0, s16, 0x1A);
    if (temp_v0 >= 0x1801) {
        AF(temp_s0, s16, 0x1A) = (s16) (temp_v0 - 0x400);
    }
    if (TickTimer((s32) arg0) != 0) {
        ZeroFill(AF(arg0, s32, 0xCC), 0x38);
        FreeActor((s32) arg0);
    }
}

extern u8 D_sc07_004_801B04A4;
extern s32 D_sc07_004_801B05F0[];

void func_sc07_004_801AC150(u8 *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = D_sc07_004_801B05F0[AF(arg0, s16, 0x2C)];
    InitSpriteKind3(AF(arg0, s32, 0x20), (s32) &D_sc07_004_801B04A4, (s32) AF(temp_s0, s16, 0), (s32) AF(temp_s0, s16, 2));
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x5A;
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3000;
    AF(AF(arg0, u32, 0x20), u16, 0x2C) = 0xC018;
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    StartSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24), (s32) temp_s0);
    if (AF(arg0, s16, 0x2C) == 2) {
        AF(arg0, s32, 0x14) = 0xFFF80000;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x5000;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_004_801AC234(s32 arg0, s32 arg1) {
    MoveProp(arg0, arg1);
    if ((StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) || ((AF(arg0, s16, 0x2C) != 2) && (AF(arg0, s16, 0xA) >= -0x200))) {
        FreeProp(arg0);
    }
}

extern u8 D_sc07_004_801B0610;

void func_sc07_004_801AC29C(u8 *arg0) {
    u8 *s;
    u8 *m;
    u8 *t;
    s16 k;

    AF(arg0, u8 *, 0xCC) = s = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    AF(arg0, u8 *, 0x20) = m = (u8 *)AllocActorModel();
    if (m == NULL || s == NULL) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(m);
    InitSpriteKind3(s, &D_sc07_004_801B0610, 0x300, 0x100);
    AF(s, u8, 0x27) = 0x64;
    AF(s, s16, 8) = AF(arg0, s16, 6);
    AF(s, s16, 0xA) = AF(arg0, s16, 0xA);
    AF(s, s16, 0xC) = AF(arg0, s16, 0xE);
    AF(s, u16, 0x2C) = 0xC040;
    AF(s, s32, 4) |= 0x50000000;
    k = 0x3000;
    if (!(AF(arg0, u16, 0x70) & 0x100)) {
        k = 1;
        AF(arg0, s16, 0xFE) = k;
    } else {
        AF(s, s16, 0x18) = 0x1800;
        AF(s, s16, 0x1A) = 0x5000;
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, u16, 0x70) &= 0xFF;
    AF(arg0, u8 *, 0xD0) = t = (u8 *)func_80143994(arg0, k);
    if (t != NULL) {
        s = AF(t, u8 *, 0xCC);
        if (s != NULL) {
            AF(s, u16, 0x2C) = 0xC030;
        }
    }
    func_sc07_004_801A94A0(arg0);
}

extern s8 D_sc07_004_801B070C[];

void func_sc07_004_801AC3C8(u8 *arg0) {
    u8 *m;
    s32 t;
    s16 a;

    m = AF(arg0, u8 *, 0xCC);
    if (StepSpriteAnim(m, arg0 + 0xF0) != 0) {
        func_sc07_004_801A9954(arg0);
        return;
    }
    AF(m, u8, 0x27) = *(u16 *)&D_sc07_004_801B070C[AF(arg0, s16, 0xF4) * 2];
    t = AF(arg0, s16, 0xF4) * 0xE + 0x30;
    a = t;
    if (AF(arg0, s16, 0xFE) == 0) {
        a = (s16) t >> 1;
    }
    func_sc07_004_801A9908(arg0, (s16) a);
}

extern u8 D_sc07_004_801F0688;
extern u8 D_sc07_004_801F8A58;
extern void SetModelParent();
extern void NextState();

void func_sc07_004_801AC47C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_004_801F0688);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x3000;
    AF(temp_v1_2, s16, 0x18) = 0x3000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x4000;
    AF(arg0, s16, 0xA) = -0x40;
    AF(arg0, s16, 6) = 0;
    AF(arg0, s16, 0xE) = 0x28;
    SetModelParent(AF(arg0, s32, 0x20), AF(AF(arg0, void *, 0x64), s32, 0x20));
    func_sc07_004_801A9B40((s32) &D_sc07_004_801F8A58, 0x160, 0x157);
    AF(arg0, s32, 0x1C) = 8;
    NextState((s32) arg0);
}

void func_sc07_004_801AC54C(u8 *arg0) {
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    } else {
        func_sc07_004_801A9B80(&D_sc07_004_801F8A58, 0x160, 0x157);
    }
}

void func_sc07_004_801AC59C(u8 *arg0) {
    MATRIX m;
    SVECTOR v;
    SVECTOR b;
    SVECTOR c;
    u8 *q;
    s16 t;

    q = AF(arg0, u8 *, 0x20);
    if (TickTimer(arg0) != 0) {
        if (AF(arg0, s32, 0xCC) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0xCC));
        }
        if (AF(arg0, s32, 0xD0) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0xD0));
        }
        FreeActor(arg0);
        return;
    }
    t = AF(q, s16, 0x18);
    if (t < 0x1800) {
        AF(q, s16, 0x18) = t + 0x100;
        AF(q, s16, 0x1A) += 0x40;
    }
    func_sc07_004_801AA004(arg0, &m);
    func_sc07_004_801AA210(arg0, &m, &v);
    if (AF(arg0, s32, 0xCC) != 0) {
        func_sc07_002_8017E1E8(AF(arg0, s32, 0xCC), &v, &b);
    }
    if (AF(arg0, s32, 0xD0) != 0) {
        func_sc07_002_8017E1E8(AF(arg0, s32, 0xD0), &v, &c);
    }
    AF(q, s16, 0x14) += AF(arg0, s16, 0xFE);
    MoveObject(arg0);
    func_sc07_004_801AA4A8(arg0, &v);
}

void func_sc07_004_801AC6C0(u8 *arg0) {
    s32 d;

    d = AF(arg0, s16, 6) * AF(arg0, s16, 6) + AF(arg0, s16, 0xE) * AF(arg0, s16, 0xE);
    if (TickTimer(arg0) != 0 || d > 0x100000) {
        FreeActor(arg0);
        return;
    }
    func_sc07_004_801A3624((s16)HeadingToPlayer(arg0), (u16 *)(AF(arg0, u8 *, 0x20) + 0x12), 0x10);
    func_sc07_004_801AA0B4(arg0);
    func_sc07_004_801AA160((s32)arg0, D_800B99DA & 1);
    func_sc07_004_801AA3CC(arg0);
    MoveObject(arg0);
    SpawnActorArg(0xD, 3, arg0);
}

void func_sc07_004_801AC794(u8 *arg0) {
    s16 s;
    u16 u;
    u16 u2;
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    u8 *e;
    u8 *f;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        a = AF(arg0, u8 *, 0x20);
        AF(a, u16, 0x18) += 0x800;
        b = AF(arg0, u8 *, 0x20);
        AF(b, s16, 0x1C) = AF(b, u16, 0x18);
        c = AF(arg0, u8 *, 0x20);
        u = AF(c, u16, 0x18);
        AF(c, s16, 0x1A) = u + ((s16)u >> 1);
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x18) >= 0x2400) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        d = AF(arg0, u8 *, 0x20);
        AF(d, u16, 0x18) -= 0x400;
        e = AF(arg0, u8 *, 0x20);
        s = AF(e, s16, 0x18);
        if (s <= 0) {
            FreeActor(arg0);
            return;
        }
        AF(e, s16, 0x1C) = s;
        f = AF(arg0, u8 *, 0x20);
        u2 = AF(f, u16, 0x18);
        AF(f, s16, 0x1A) = u2 + ((s16)u2 >> 1);
        break;
    }
    func_sc07_004_801AA540(arg0);
}

void func_sc07_004_801AC8B8(u8 *arg0) {
    u8 *m;
    s16 v;

    AF(arg0, s16, 0x2C) = 0;
    func_8001CD9C(AF(arg0, u8 *, 0x20), &D_sc07_004_801F88B8);
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC020;
    v = (rand() & 0x1F0) + 0x500;
    m = AF(arg0, u8 *, 0x20);
    AF(m, s16, 0x1A) = v;
    AF(m, s16, 0x18) = v;
    AF(arg0, s32, 0x1C) = 0x14;
    AF(arg0, u16, 2) += 1;
}

void func_sc07_004_801AC940(u8 *arg0) {
    s32 t;
    s16 c;

    t = AF(arg0, s32, 0x1C);
    if (t == 0) {
        FreeProp(arg0);
        return;
    }
    AF(arg0, s32, 0x1C) = --t;
    if ((t & 3) == 0) {
        c = AF(arg0, s16, 0x2C);
        if (c < 3) {
            AF(arg0, s16, 0x2C) = c + 1;
            AF(AF(arg0, u8 *, 0x20), u8 *, 0x20) = (u8 *)&D_sc07_004_801F88B8 + (AF(arg0, s16, 0x2C) << 6);
        }
    }
    MoveProp(arg0);
}

void func_sc07_004_801AC9CC(u8 *arg0) {
    SVECTOR sv;
    u16 n;

    if (AF(arg0, s32, 0x20) != 0) {
        ZeroFill(AF(arg0, s32, 0x20), 0x38);
        AF(arg0, s32, 0x20) = 0;
    }
    sv.vx = AF(arg0, s16, 6);
    sv.vy = AF(arg0, s16, 0xA);
    sv.vz = AF(arg0, s16, 0xE);
    n = AF(arg0, u16, 0x30);
    if (AF(arg0, s16, 0x30) == 0) {
        n = 6;
    }
    AF(arg0, s32, 0x2C) = func_sc07_002_8017D7D4(&sv, 0, arg0 + 0x34, (s8)n);
    if (AF(arg0, s16, 0x32) == 0) {
        AF(arg0, s32, 0x1C) = 0x10;
    } else {
        AF(arg0, s32, 0x1C) = AF(arg0, s16, 0x32);
    }
    AF(arg0, u16, 2)++;
}

void func_sc07_004_801ACA88(u8 *arg0, s32 arg1) {
    SVECTOR v;
    s32 n;

    n = AF(arg0, s32, 0x1C);
    if (n == 0) {
        if (AF(arg0, s32, 0x2C) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0x2C));
        }
        FreeProp((s32) arg0);
        return;
    }
    AF(arg0, s32, 0x1C) = n - 1;
    MoveProp((s32) arg0, arg1);
    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    if (AF(arg0, s32, 0x2C) != 0) {
        func_sc07_002_8017E1E8(AF(arg0, s32, 0x2C), &v, 0);
    }
}

extern void func_sc07_004_801AA7E4();
extern s32 func_sc07_002_8017D858();

void func_sc07_004_801ACB2C(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    u16 c;

    func_sc07_004_801AA7E4(arg0);
    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = a.vx + AF(AF(arg0, u8 *, 0x20), s16, 0x2E);
    b.vy = a.vy + AF(AF(arg0, u8 *, 0x20), s16, 0x30);
    b.vz = a.vz + AF(AF(arg0, u8 *, 0x20), s16, 0x32);
    c = AF(arg0, u16, 0x30);
    if (AF(arg0, s16, 0x30) == 0) {
        c = 6;
    }
    if (AF(arg0, s16, 0x32) == 0) {
        a.pad = 0;
        AF(arg0, s32, 0x1C) = 0x10;
    } else {
        a.pad = -0x3F00;
        AF(arg0, s32, 0x1C) = 0x18;
    }
    AF(arg0, s32, 0x2C) = func_sc07_002_8017D858(&a, &b, arg0 + 0x34, (s8)c);
    AF(arg0, s16, 2)++;
}

void func_sc07_004_801ACC24(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;

    if (AF(arg0, s32, 0x1C) == 0) {
        if (AF(arg0, s32, 0x2C) != 0) {
            func_sc07_002_8017E5D4(AF(arg0, s32, 0x2C));
        }
        FreeProp(arg0);
        return;
    }
    AF(arg0, s32, 0x1C)--;
    MoveProp(arg0);
    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = a.vx + AF(AF(arg0, u8 *, 0x20), s16, 0x2E);
    b.vy = a.vy + AF(AF(arg0, u8 *, 0x20), s16, 0x30);
    b.vz = a.vz + AF(AF(arg0, u8 *, 0x20), s16, 0x32);
    if (AF(arg0, s32, 0x2C) != 0) {
        func_sc07_002_8017E1E8(AF(arg0, s32, 0x2C), &a, &b);
    }
}

extern void (*D_sc07_004_801B07D8[])();

void func_sc07_004_801ACD10(u8 *arg0) {
    D_sc07_004_801B07D8[AF(arg0, u16, 2)]();
}

extern u16 D_sc07_004_801F8B18[];

void func_sc07_004_801ACD4C(void) {
    RECT r;
    u16 *base;
    u16 *p;
    s32 i;
    u16 first;

    base = D_sc07_004_801F8B18;
    first = *base; i = 0; p = base;
    for (; i < 0x5E; i++) {
        p[0] = p[1];
        p++;
    }
    base[i] = first;
    r.x = 0x100;
    r.y = 0x1E0;
    r.w = 0x100;
    r.h = 1;
    LoadImage(&r, (u32 *)D_sc07_004_801F8B18);
}

extern void (*D_sc07_004_801B07E0[])();

void func_sc07_004_801ACDC8(u8 *arg0) {
    D_sc07_004_801B07E0[AF(arg0, u16, 2)]();
}

s32 func_sc07_004_801ACE04(u8 *arg0) {
    return AF(AF(arg0, u8 *, 0x20), s16, 0x18) > 0x800;
}

extern void (*D_sc07_004_801B07E8[])();

void func_sc07_004_801ACE20(u8 *arg0) {
    D_sc07_004_801B07E8[AF(arg0, u16, 2)]();
}

extern struct_4_3 D_sc07_004_801A0218;
extern struct_4_3 D_sc07_004_801A021C;
extern struct_4_3 D_sc07_004_801A0220;
extern u8 D_sc07_004_801F0C90;
extern struct_4_3 D_sc07_004_801F8D18;
extern struct_4_3 D_sc07_004_801F8D1C;
extern struct_4_3 D_sc07_004_801F8D58;
extern struct_4_3 D_sc07_004_801F8D5C;
extern void func_sc07_004_801ADD98();
extern u8 D_sc07_004_801F8A78;
extern u8 D_sc07_004_801F8AB8;
extern u8 D_sc07_004_801F8AE8;

void func_sc07_004_801ACE5C(u8 *arg0) {
    u8 *p;
    u8 *o;

    o = (u8 *)AllocActorModel();
    AF(arg0, u8 *, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(o, &D_sc07_004_801F0C90);
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40;
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = 0x200;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x300;
    AF(arg0, s16, 0x52) = -0x200 - AF(AF(arg0, u8 *, 0x64), s16, 0xA);
    AF(arg0, s16, 0xE) += 0x20;
    func_sc07_004_801ADD98(&D_sc07_004_801F8A78, &D_sc07_004_801F8AB8, &D_sc07_004_801F8AE8);
    p = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    AF(arg0, u8 *, 0xCC) = p;
    if (p != 0) {
        SetShapeCircle(&D_sc07_004_801F8D18, 0x80);
        D_sc07_004_801F8D18 = D_sc07_004_801A0218;
        AF(arg0, s32, 0xE0) = 0x20C;
        D_sc07_004_801F8D1C = D_sc07_004_801A021C;
        func_8001CD9C(p, &D_sc07_004_801F8D18);
        AF(p, u16, 0x2C) = 0xC100;
        AF(p, s32, 4) = 0x50000000;
    }
    p = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    AF(arg0, u8 *, 0xD0) = p;
    if (p != 0) {
        SetShapeCircle(&D_sc07_004_801F8D58, 0x60);
        D_sc07_004_801F8D58 = D_sc07_004_801A0220;
        AF(arg0, s32, 0xE4) = 0xC02;
        D_sc07_004_801F8D5C = D_sc07_004_801A021C;
        func_8001CD9C(p, &D_sc07_004_801F8D58);
        AF(p, u16, 0x2C) = 0xC100;
        AF(p, s32, 4) = 0x50000000;
    }
    AF(arg0, s32, 0x1C) = 0x10;
    NextState(arg0);
}

extern u16 D_sc07_004_801B07F0;
extern u8 D_sc07_004_801F8A98;
void func_sc07_004_801ADE1C(s16 *arg0, u16 *arg1, s8 s[][3], u8 d[][3]);
void func_sc07_004_801AD220(s32 arg0, s32 arg1);

void func_sc07_004_801AD068(u8 *arg0) {
    s32 t;
    s32 n;

    if (TickTimer(arg0) != 0) {
        ZeroFill(AF(arg0, s32, 0xCC), 0x38);
        ZeroFill(AF(arg0, s32, 0xD0), 0x38);
        FreeActor(arg0);
        return;
    }
    n = AF(arg0, s32, 0x1C);
    if (n < 0xF) {
        DrawFadeWhite((n >= 0xC ? (0xF - n) << 5 : n * 8) & 0xF8, 1);
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x1C0;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1C) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0x80;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0x100;
    func_sc07_004_801ADE1C(&D_sc07_004_801B07F0, &D_sc07_004_801F8A98, &D_sc07_004_801F8AB8, &D_sc07_004_801F8AE8);
    t = *(s32 *)&D_sc07_004_801F8D18;
    t -= ((s32 *)arg0)[0x38];
    D_sc07_004_801F8D18 = *(struct_4_3 *)&t;
    func_sc07_004_801AD220(arg0, AF(arg0, s32, 0xCC));
    t = *(s32 *)&D_sc07_004_801F8D58;
    t -= ((s32 *)arg0)[0x39];
    (&D_sc07_004_801F8D18)[0x10] = *(struct_4_3 *)&t;
    func_sc07_004_801AD220(arg0, AF(arg0, s32, 0xD0));
}

extern void (*D_sc07_004_801B07F4[])();

void func_sc07_004_801AD1E4(u8 *arg0) {
    D_sc07_004_801B07F4[AF(arg0, u16, 2)]();
}

void func_sc07_004_801AD220(s32 arg0, s32 arg1) {
    s16 temp_v0;

    if (arg1 != 0) {
        AF(arg1, u16, 8) = (u16) AF(AF(arg0, void *, 0x64), u16, 6);
        AF(arg1, s16, 0xA) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xA) - 0x40);
        AF(arg1, s16, 0xC) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xE) + 0x20);
        temp_v0 = AF(AF(arg0, void *, 0x20), s16, 0x18) * 3;
        AF(arg1, s16, 0x18) = temp_v0;
        AF(arg1, s16, 0x1A) = temp_v0;
    }
}

extern u16 D_sc07_004_801B07F0;
extern u16 D_sc07_004_801B07F2;
extern u8 D_sc07_004_801F8A78;

void func_sc07_004_801AD294(void) {
    func_sc07_004_801A649C((s32) &D_sc07_004_801F8A78, (s32) D_sc07_004_801B07F0, (s32) D_sc07_004_801B07F2);
}

s32 func_sc07_004_801AD2CC(void) {
    RECT r;

    r.w = 0x10;
    r.h = 1;
    r.x = D_sc07_004_801B07F0;
    r.y = D_sc07_004_801B07F2;
    return LoadImage(&r, &D_sc07_004_801F8A78);
}

extern struct_4_3 D_sc07_004_801A0224;
extern struct_4_3 D_sc07_004_801A0228;
extern u8 D_sc07_004_801F8D98;
extern void func_8001CD50();
extern void func_sc07_004_801AD4C0();
extern void func_sc07_004_801AD4D4();

void func_sc07_004_801AD31C(u8 *arg0) {
    u16 v;
    u8 *p;

    v = AF(arg0, u16, 0x2E);
    p = &D_sc07_004_801F8D98 + (v & 3) * 0x40;
    switch (v & 0xF00) {
    case 0:
        SetShapeCircle(p, 0x80);
        *(struct_4_3 *)p = D_sc07_004_801A021C;
        *(struct_4_3 *)(p + 4) = D_sc07_004_801A021C;
        func_8001CD50(AF(arg0, u8 *, 0x20), p);
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x5000;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0xC00;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(arg0, s16, 0x2C);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xD00;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC040;
        func_sc07_004_801AD4C0(arg0);
        break;
    case 0x100:
        SetShapeCircle(p, 0x80);
        *(struct_4_3 *)p = D_sc07_004_801A0224;
        *(struct_4_3 *)(p + 4) = D_sc07_004_801A0228;
        func_8001CD50(AF(arg0, u8 *, 0x20), p);
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x100;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0xC80;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(arg0, s16, 0x2C);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xC00;
        AF(AF(arg0, u8 *, 0x20), s32, 4) = 0x50000000;
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) = 0xC100;
        func_sc07_004_801AD4D4(arg0);
        break;
    }
}

void func_sc07_004_801AD4C0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2) = 1;
}

extern void func_sc07_004_801AD55C();
extern void func_sc07_004_801AD700();

void func_sc07_004_801AD4D4(u8 *arg0) {
    func_sc07_004_801AD55C(arg0);
    func_sc07_004_801AD700(arg0);
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2) = 2;
    PlaySoundId(0xBA3, 0);
}

extern void (*D_sc07_004_801B081C[])();

void func_sc07_004_801AD520(u8 *arg0) {
    D_sc07_004_801B081C[AF(arg0, u16, 2)]();
}

void func_sc07_004_801AD55C(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x34);

    if (p != NULL) {
        AF(arg0, u16, 6) = AF(p, u16, 6) + AF(p, u16, 0x50);
        AF(arg0, u16, 0xA) = AF(p, u16, 0xA) + AF(p, u16, 0x52) - 0x40;
        AF(arg0, u16, 0xE) = AF(p, u16, 0xE) + AF(p, u16, 0x54);
    }
}

extern s16 D_sc07_004_801B0828[];

void func_sc07_004_801AD5B4(s32 arg0, s32 arg1) {
    s32 s;
    s32 o;
    s32 t;

    
    o = SpawnPropFrom(arg0, 0x2F);
    if (o != 0) {
        s = arg1 & 3;
        AF(o, s16, 0x2C) = D_sc07_004_801B0828[s] + ((rand() & 0x7C) - 0x40);
        AF(o, s16, 0x2E) = s + ((rand() & 3) << 0xC);
        AF(o, s32, 0x34) = arg0;
    }
}

void func_sc07_004_801AD640(s32 arg0, s32 arg1) {
    s32 p;
    s32 r;
    s32 k;

    p = SpawnPropFrom(arg0, 0x2F);
    if (p != 0) {
        r = rand() & 0x7C; k = arg1 & 3; AF(p, s16, 0x2C) = D_sc07_004_801B0828[k] + (r - 0x40); AF(p, s16, 0x2E) = k + 0x100; AF(p, s32, 0x34) = arg0;
    }
}

extern void (*D_sc07_004_801B0830[])();

void func_sc07_004_801AD6C4(u8 *arg0) {
    D_sc07_004_801B0830[AF(arg0, u16, 2)]();
}

extern void UpdateModelRot();

void func_sc07_004_801AD700(u8 *arg0) {
    s16 i;
    u8 *o;
    VECTOR v;

    for (i = 0x100; i < 0x1000; i += 0x200) {
        o = (u8 *)SpawnActor(0x3A1, 0);
        if (o != NULL) {
            AF(o, s16, 6) = AF(arg0, s16, 6);
            AF(o, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(o, s16, 0xE) = AF(arg0, s16, 0xE);
            AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(arg0, u8 *, 0x20), s16, 0x10);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
            AF(AF(o, u8 *, 0x20), s16, 0x14) = i;
            UpdateModelRot(o);
            v.vz = 0;
            v.vx = 0;
            v.vy = 0x400000;
            ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &v, o + 0x10);
        }
    }
}

extern void func_sc07_004_801AD914();

void func_sc07_004_801AD7EC(u8 *arg0) {
    SVECTOR v;
    s32 i;

    v.vz = 0;
    for (i = 0; i < 4; i++) {
        v.vy = i * 0x400 + 0x200;
        v.vx = 0x100;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
        v.vx = 0x700;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
    }
    for (i = 0; i < 8; i++) {
        v.vy = i * 0x200 + 0xC0;
        v.vx = 0x200;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
        v.vx = 0x300;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
        v.vx = 0x400;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
        v.vx = 0x500;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
        v.vx = 0x600;
        func_sc07_004_801AD914(arg0, &v, 0x400000);
    }
}

void func_sc07_004_801AD914(u8 *arg0, SVECTOR *arg1, s32 arg2) {
    u8 *o;
    u8 *p;
    VECTOR v;

    o = (u8 *)SpawnActorArg(0x3A1, 1, arg0);
    if (o != NULL) {
        AF(AF(o, u8 *, 0x20), SVECTOR, 0x10) = *arg1;
        UpdateModelZYX(o);
        v.vz = 0;
        v.vx = 0;
        v.vy = arg2;
        ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &v, o + 0x10);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x500;
        AF(o, s32, 0x1C) = 0x20;
    }
}

extern void (*D_sc07_004_801B0884[])();

void func_sc07_004_801AD9D4(u8 *arg0) {
    D_sc07_004_801B0884[AF(arg0, u16, 2)]();
}

extern struct_4_3 D_sc07_004_801B0838[];

void func_sc07_004_801ADA10(u8 *arg0) {
    s16 i = ++AF(arg0, s16, 0x2E);
    u8 *p = AF(arg0, u8 *, 0x34);
    s16 j;

    j = (i % 6) * 2;
    AF(p, struct_4_3, 0x14) = D_sc07_004_801B0838[j];
    AF(p, struct_4_3, 0x18) = D_sc07_004_801B0838[j + 1];
}

extern void func_sc07_004_801AE990();
extern void func_sc07_004_801ADBB0(s16, s16, s16);

void func_sc07_004_801ADA9C(u8 *arg0) {
    SVECTOR v;
    s32 i;
    s32 n;

    v.vx = AF(arg0, s16, 6);
    v.vy = AF(arg0, s16, 0xA) - 0x40;
    v.vz = AF(arg0, s16, 0xE) + 0x20;
    func_sc07_004_801AE990(&v);
    func_sc07_004_801ADBB0(0x400, 0, 0);
    func_sc07_004_801ADBB0(-0x400, 0, 1);
    n = 2;
    for (i = 0; i < 8; i++, n++) {
        func_sc07_004_801ADBB0(0, i << 9, n);
    }
    for (i = 0; i < 8; i++, n++) {
        func_sc07_004_801ADBB0(0x200, i * 0x200 + 0x100, n);
    }
    for (i = 0; i < 8; i++, n++) {
        func_sc07_004_801ADBB0(-0x200, i * 0x200 + 0x100, n);
    }
}

void func_sc07_004_801ADBB0(s16 arg0, s16 arg1, s16 arg2) {
    u8 *p;
    s16 v = arg2;

    p = (u8 *)SpawnProp(0x74);
    if (p != NULL) {
        AF(p, s16, 0x2C) = arg2;
        AF(AF(p, u8 *, 0x20), s16, 0x10) = arg0;
        AF(AF(p, u8 *, 0x20), s16, 0x12) = arg1;
        AF(AF(p, u8 *, 0x20), s16, 0x14) = (s16)v * 0x300;
    }
}

extern s32 D_sc07_004_801B0894[];

void func_sc07_004_801ADC40(u8 *arg0) {
    SVECTOR sv;
    VECTOR v;
    MATRIX m;
    s32 flag;
    u8 *p;

    sv.vx = (rand() & 0x7FF) - 0x400;
    sv.vy = rand() & 0xFFF;
    sv.vz = 0;
    RotMatrixZYX(&sv, &m);
    SetRotMatrix(&m);
    m.t[0] = AF(arg0, s16, 6) + AF(arg0, s16, 0x50);
    m.t[1] = AF(arg0, s16, 0xA) + AF(arg0, s16, 0x52) - 0x40;
    m.t[2] = AF(arg0, s16, 0xE) + AF(arg0, s16, 0x54);
    SetTransMatrix(&m);
    sv.vy = 0;
    sv.vx = 0;
    sv.vz = -0x310;
    RotTransSV(&sv, &sv, &flag);
    p = (u8 *)SpawnPropAt(0x2E, &sv);
    if (p != NULL) {
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC020;
        v.vx = 0;
        v.vy = 0;
        v.vz = 0x300000;
        ApplyRotMatrixLV(&v, p + 0x10);
        AF(p, s16, 0x30) = 8;
        AF(p, s16, 0x32) = 0x10;
        AF(p, s32, 0x34) = D_sc07_004_801B0894[rand() % 6];
    }
}

void func_sc07_004_801ADD98(u16 *src, s8 a[][3], s8 b[][3]) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
        a[i][0] = (src[i] >> 8) & 0x7C;
        a[i][1] = (src[i] >> 3) & 0x7C;
        a[i][2] = (src[i] << 2) & 0x7C;
        b[i][0] = a[i][0] >> 4;
        b[i][1] = a[i][1] >> 4;
        b[i][2] = a[i][2] >> 4;
    }
}

void func_sc07_004_801ADE1C(s16 *arg0, u16 *arg1, s8 s[][3], u8 d[][3]) {
    RECT rect;
    s32 i;

    for (i = 0; i < 16; i++) {
        if (s[i][0] > 0) {
            s[i][0] -= d[i][0];
        }
        if (s[i][0] < 0) {
            s[i][0] = 0;
        }
        if (s[i][1] > 0) {
            s[i][1] -= d[i][1];
        }
        if (s[i][1] < 0) {
            s[i][1] = 0;
        }
        if (s[i][2] > 0) {
            s[i][2] -= d[i][2];
        }
        if (s[i][2] < 0) {
            s[i][2] = 0;
        }
        arg1[i] = 0x8000 | ((s[i][0] & 0x7C) << 8) | ((s[i][1] & 0x7C) << 3) | ((s[i][2] & 0x7C) >> 2);
    }
    rect.x = arg0[0];
    rect.y = arg0[1];
    rect.w = 16;
    rect.h = 1;
    LoadImage(&rect, arg1);
}

/* the engine's background layer (BgLayer, src/stage/engine.c): a cell map and its GsBG; two of them at 0x800B9A78 */
typedef struct {
    /* 0x00 */ GsMAP map;
    /* 0x10 */ GsBG bg;
    /* 0x34 */ u16 pri;
    /* 0x36 */ u16 rotating;        /* nonzero: drawn with GsSortBg, else GsSortFastBg */
    /* 0x38 */ u16 x;
    /* 0x3A */ s16 y;
    /* 0x3C */ u16 w;
    /* 0x3E */ s16 h;
    /* 0x40 */ s16 scrollx, scrolly;
    /* 0x44 */ u8 fade[6];          /* a gradient's two colours, scaled by the stage's fade (FadeBgLayerColours) */
    /* 0x4A */ u8 pad4A[2];
    /* 0x4C */ u8 *cells;           /* the cell file: GsCELLs from +8 */
    /* 0x50 */ u8 *mapfile;         /* the map file: ncellw, ncellh, cellw, cellh at +4, the cell index from +8 */
} BgLayer; /* size 0x54 */
extern BgLayer D_800B9A78[2];
extern u8 D_sc07_004_801F74A8;
extern u8 D_sc07_004_801F76B0;
extern void InitBgLayerMap(BgLayer *l);

void func_sc07_004_801ADF5C(s32 arg0) {
    RECT r;

    D_800B9A78[0].cells = &D_sc07_004_801F76B0;
    D_800B9A78[0].mapfile = &D_sc07_004_801F74A8;
    InitBgLayerMap(&D_800B9A78[0]);
    D_800B9A78[0].rotating = 1;
    D_800B9A78[0].bg.scalex = 0x2000;
    D_800B9A78[0].bg.scaley = 0x2000;
    D_800B9A78[0].bg.w = 0x118;
    D_800B9A78[0].bg.h = 0x118;
    D_800B9A78[0].bg.mx = 0x8C;
    D_800B9A78[0].bg.my = 0x8C;
    D_800B9A78[0].w = 0x118;
    D_800B9A78[0].h = 0x118;
    D_800B9A78[0].scrolly = 0;
    D_800B9A78[0].scrollx = 0;
    r.x = 0x100;
    r.y = 0x1E0;
    r.w = 0x100;
    r.h = 1;
    D_800B9A78[0].bg.attribute &= 0xF7FFFFFF;
    StoreImage(&r, (u32 *)&D_sc07_004_801F8B18);
    NextState(arg0);
}

extern s16 D_800B9AA4;
extern s16 D_800B9AA6;
extern s32 D_800B9AA8;
extern u16 D_800B9AB8;
extern u16 D_800B9ABA;
extern void func_sc07_004_801ACD4C();

void func_sc07_004_801AE060(u8 *arg0) {
    s32 *p;
    s16 a;

    p = &D_800B9AA8;
    *p -= 0x300;
    a = AF(arg0, u16, 0xFE) + 0x18;
    AF(arg0, u16, 0xFE) = a;
    D_800B9AA4 = rsin(a) + 0x2700;
    D_800B9AA6 = rsin(AF(arg0, s16, 0xFE) + 0x400) + 0x2700;
    D_800B9AB8 -= 1;
    D_800B9ABA += 1;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        func_sc07_004_801ACD4C();
        break;
    }
}

extern u8 D_sc07_004_801F2538;

void func_sc07_004_801AE138(u8 *arg0) {
    u8 *m;

    m = (u8 *) AllocActorModel();
    AF(arg0, u8 *, 0x20) = m;
    if (m == NULL) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(m, (s32) &D_sc07_004_801F2538);
    AF(m, s16, 0x1C) = 0x200;
    AF(m, s16, 0x1A) = 0x200;
    AF(m, s16, 0x18) = 0x200;
    AF(m, s32, 4) |= 0x50000000;
    AF(m, u16, 0x2C) |= 0x10;
    AF(arg0, u16, 0xA) -= 0x40;
    AF(arg0, u16, 0xE) += 0x20;
    m = (u8 *) AllocActorModel();
    if (m != NULL) {
        AF(arg0, u8 *, 0xCC) = m;
        AF(m, s16, 0x1A) = 0x300;
        AF(m, s16, 0x1C) = 0x200;
        AF(m, s16, 0x18) = 0x200;
        AF(m, u16, 0x2C) |= 0x10;
        AF(m, s32, 4) |= 0x40;
    }
    NextState((s32) arg0);
}

void func_sc07_004_801AE220(u8 *arg0, s32 arg1) {
    s16 t;
    u16 u;
    u8 *q;
    u8 *q2;
    u8 *q3;
    u16 w;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        SpawnActor(0x3A0, arg0);
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, u16, 0x34)++;
        PlaySoundId(0xB4E, 0);
        break;
    case 1:
        if (TickTimer(arg0) != 0) {
            SpawnActor(0x3A0, arg0);
            AF(arg0, u16, 0x34)++;
            func_sc07_004_801AD7EC(arg0);
        }
        break;
    case 2:
        break;
    }
    q = AF(arg0, u8 *, 0x20);
    t = AF(q, s16, 0x18);
    if (t < 0x2400) {
        AF(q, s16, 0x18) = t + 0xC0;
        q2 = AF(arg0, u8 *, 0x20);
        u = AF(q2, s16, 0x18);
        AF(q2, u16, 0x1C) = u;
        AF(q2, u16, 0x1A) = u;
        q3 = AF(arg0, u8 *, 0xCC);
        if (q3 != NULL) {
            w = AF(q3, u16, 0x18) + 0xC0;
            AF(q3, u16, 0x18) = w;
            AF(q3, u16, 0x1C) = w;
            AF(q3, u16, 0x1A) = w;
        }
    }
}

extern u8 D_sc07_004_801F2D48;

void func_sc07_004_801AE324(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_004_801F2D48);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 1;
    AF(temp_v1_2, s16, 0x1A) = 1;
    AF(temp_v1_2, s16, 0x18) = 1;
    NextState((s32) arg0);
}

void func_sc07_004_801AE3A4(u8 *arg0) {
    s16 temp_v0;
    u16 temp_v1;
    void *temp_a1;
    void *temp_v0_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, s16, 0x18);
    if (temp_v0 >= 0x2801) {
        FreeActor((s32) arg0, (s32) temp_a1);
        return;
    }
    AF(temp_a1, s16, 0x18) = (s16) (temp_v0 + 0x180);
    temp_v0_2 = AF(arg0, void *, 0x20);
    temp_v1 = (u16) AF(temp_v0_2, s16, 0x18);
    AF(temp_v0_2, u16, 0x1C) = temp_v1;
    AF(temp_v0_2, u16, 0x1A) = temp_v1;
}

extern s32 D_sc07_004_801B07FC;
extern s32 D_sc07_004_801B0800;
extern u8 D_sc07_004_801F8D98;

void func_sc07_004_801AE408(u8 *arg0) {
    u8 *p;
    VECTOR t;
    s32 i;

    p = &(&D_sc07_004_801F8D98)[(AF(arg0, u16, 0x2E) & 3) << 6];
    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
        func_sc07_004_801AD55C(arg0);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) -= 0x4F0;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x60;
        i = AF(arg0, u16, 0x2E) & 3;
        *(s32 *)&t = AF(p, s32, 0);
        *(s32 *)&t += (&D_sc07_004_801B07FC)[i * 2];
        AF(p, struct_4_3, 0) = *(struct_4_3 *)&t;
        *(s32 *)&t = AF(p, s32, 4);
        *(s32 *)&t += (&D_sc07_004_801B0800)[i * 2];
        AF(p, struct_4_3, 4) = *(struct_4_3 *)&t;
    } else {
        FreeProp(arg0);
    }
}

extern s32 D_sc07_004_801B07FC;
extern s32 D_sc07_004_801B0800;
extern u8 D_sc07_004_801F8D98;

void func_sc07_004_801AE520(u8 *arg0) {
    u8 *p;
    s32 t;
    s32 x;

    p = (u8 *)&D_sc07_004_801F8D98 + ((AF(arg0, u16, 0x2E) & 3) << 6);
    t = AF(arg0, s32, 0x1C);
    if (t != 0) {
        AF(arg0, s32, 0x1C) = t - 1;
        func_sc07_004_801AD55C(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) += 0x700;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = AF(AF(arg0, u8 *, 0x20), s16, 0x18);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 0x60;
        x = AF(p, s32, 0);
        x -= D_sc07_004_801B07FC;
        AF(p, struct_4_3, 0) = *(struct_4_3 *)&x;
        x = AF(p, s32, 4);
        x -= D_sc07_004_801B0800;
        AF(p, struct_4_3, 4) = *(struct_4_3 *)&x;
    } else {
        FreeProp(arg0);
    }
}

extern u8 D_sc07_004_801F07E0;
extern void func_8001C810();

void func_sc07_004_801AE624(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc07_004_801F07E0);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x300;
    AF(temp_v1_2, s16, 0x1A) = 0x300;
    AF(temp_v1_2, s16, 0x18) = 0x300;
    if (AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, s32, 0x1C) = 0x18;
    }
    NextState((s32) arg0);
}

extern void UpdateModelRot();

void func_sc07_004_801AE6D4(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        FreeActor(arg0);
        return;
    }
    MoveObject(arg0);
    if (AF(arg0, s16, 0x70) == 0) {
        UpdateModelRot(arg0);
    }
}

extern u8 D_sc07_004_801B0868[];
extern s32 func_sc07_004_801AEA40();

void func_sc07_004_801AE734(u8 *arg0) {
    s32 p;
    s16 j;

    p = func_sc07_004_801AEA40(0x200, AF(arg0, u8 *, 0x20) + 0x10, 0x50000000);
    if (p != 0) {
        AF(arg0, s32, 0x34) = p;
        AF(arg0, u16, 0x2E) = AF(arg0, u16, 0x2C);
        j = (AF(arg0, s16, 0x2C) % 6) * 2;
        AF(p, struct_4_3, 0x14) = D_sc07_004_801B0838[j];
        AF(p, struct_4_3, 0x18) = D_sc07_004_801B0838[j + 1];
        AF(p, s16, 0x12) = -0x3F80;
        AF(p, s16, 0x10) = 0x200;
        AF(p, s16, 0xC) = 0x200;
        AF(arg0, s32, 0x1C) = D_sc07_004_801B0868[AF(arg0, s16, 0x2C)];
        AF(arg0, s16, 2)++;
    }
}

void func_sc07_004_801AE82C(u8 *arg0) {
    u8 *p;
    s16 t;

    p = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s32, 0x1C) != 0) {
        AF(arg0, s32, 0x1C)--;
    } else {
        t = AF(p, s16, 0xC);
        if (t < 0x1000) {
            AF(p, s16, 0x10) = AF(p, s16, 0xC) = t + 0x400;
        } else {
            AF(arg0, s32, 0x1C) = 0x48;
            AF(arg0, u16, 2)++;
        }
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        func_sc07_004_801ADA10(arg0);
    }
}

extern void func_sc07_004_801ADA10();

void func_sc07_004_801AE8B0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        func_sc07_004_801ADA10((s32) arg0);
    }
}

extern void func_sc07_004_801AEAE4();

void func_sc07_004_801AE908(u8 *arg0) {
    u8 *o;
    u16 t;
    s32 n;

    o = AF(arg0, u8 *, 0x34);
    t = AF(o, u16, 0xC) - 0x400;
    AF(o, u16, 0xC) = t;
    AF(o, u16, 0x10) = t;
    if (AF(o, s16, 0xC) > 0) {
        n = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = n;
        if (n & 1) {
            func_sc07_004_801ADA10((s32) arg0);
        }
    } else {
        func_sc07_004_801AEAE4(o);
        FreeProp((s32) arg0);
    }
}

extern s16 D_sc07_004_801F8EA0;
extern s16 D_sc07_004_801F8EA2;
extern s16 D_sc07_004_801F8EA4;

void func_sc07_004_801AE990(SVECTOR *arg0) {
    u8 *d = (u8 *)&D_sc07_004_801F8EA0;
    u8 *p;
    s32 i;

    if (arg0 != NULL) {
        *(SVECTOR *)d = *arg0;
    } else {
        D_sc07_004_801F8EA4 = 0;
        D_sc07_004_801F8EA2 = 0;
        *(s16 *)d = 0;
    }
    AF(d, s16, 0xC) = 0x1000;
    AF(d, s16, 0xA) = 0x1000;
    AF(d, s16, 0x8) = 0x1000;
    AF(d, s16, 0x14) = 0;
    AF(d, s16, 0x12) = 0;
    AF(d, s16, 0x10) = 0;
    p = d + 0x18;
    for (i = 0; i < 0x20; i++) {
        ZeroFill(p, 0x24);
        p += 0x24;
    }
}

extern u16 * func_sc07_004_801AEAAC();
extern void func_sc07_004_801AEB04();

s32 func_sc07_004_801AEA40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc07_004_801AEAAC();
    if (temp_v0 != 0) {
        func_sc07_004_801AEB04(temp_v0, (s32) (s16) arg0, arg1, arg2);
    }
    return temp_v0;
}

extern u16 D_sc07_004_801F8EB8;

u16 *func_sc07_004_801AEAAC(void) {
    u16 *p;
    s32 i;

    p = &D_sc07_004_801F8EB8;
    for (i = 0; i < 0x20; i++) {
        if (*p == 0) {
            return p;
        }
        p = (u16 *)((u8 *)p + 0x24);
    }
    return NULL;
}

void func_sc07_004_801AEAE4(u8 *arg0) {
    ZeroFill(arg0, 0x24);
}

extern u8 D_sc07_004_801A022C;

void func_sc07_004_801AEB04(u8 *arg0, s32 arg1_0, SVECTOR *arg2, s32 arg3) {
    s16 arg1 = arg1_0;
    AF(arg0, s16, 0) = 1;
    AF(arg0, s16, 2) = arg1;
    AF(arg0, SVECTOR, 4) = *arg2;
    AF(arg0, s16, 0x10) = 0x1000;
    AF(arg0, s16, 0xE) = 0x1000;
    AF(arg0, s16, 0xC) = 0x1000;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s32, 0x20) = arg3;
    AF(arg0, struct_4_3, 0x14) = *(struct_4_3 *)&D_sc07_004_801A022C;
    AF(arg0, struct_4_3, 0x18) = *(struct_4_3 *)&D_sc07_004_801A022C;
    AF(arg0, struct_4_3, 0x1C) = *(struct_4_3 *)&D_sc07_004_801A022C;
}

extern s16 D_sc07_004_801F8EA0;
extern s16 D_sc07_004_801F8EA2;
extern s16 D_sc07_004_801F8EA4;
extern void func_sc07_004_801AEC38();

void func_sc07_004_801AEB94(void) {
    MATRIX m;
    s32 i;
    u8 *p;
    u8 *d = (void *)&D_sc07_004_801F8EA0;

    RotMatrixZYX((u8 *)d + 0x10, &m);
    m.t[0] = *(s16 *)d;
    m.t[1] = D_sc07_004_801F8EA2;
    m.t[2] = D_sc07_004_801F8EA4;
    func_80020F34(&m, (u8 *)d + 8);
    p = (u8 *)d + 0x18;
    for (i = 0; i < 32; i++) {
        if (*(u16 *)p != 0) {
            func_sc07_004_801AEC38(d, p, &m);
        }
        p += 0x24;
    }
}

extern u8 *g_PrimNext;

extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
extern u8 *AllocPrim();
extern s32 D_800AF648[];
extern void func_80020F34();
extern u8 *g_PrimNext;

void func_sc07_004_801AEC38(u8 *arg0, u8 *arg1, MATRIX *arg2) {
    MATRIX m;
    u8 unused[0x30]; /* MATCH-TRICK: frame (unused 0x30 slot between m and the SVECTORs, recipes func_80129CF8) */
    SVECTOR v0;
    SVECTOR v1;
    SVECTOR v2;
    SVECTOR v3;
    s32 flag0;
    s32 flag1;
    s32 otz;
    s32 z;
    s16 c;
    s32 t;
    u32 *ot;
    u8 *p;
    u8 *q;
    u32 attr;

    attr = AF(arg1, s32, 0x20);
    ot = g_WorldOtTable[D_800B9A02[0]];
    RotMatrixYXZ(arg1 + 4, &m);
    m.t[0] = m.t[1] = m.t[2] = 0;
    func_80020F34(&m, arg1 + 0xC);
    gte_SetRotMatrix(arg2);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    gte_ldclmv((u8 *)&m + 2);
    gte_rtir();
    gte_stclmv((u8 *)&m + 2);
    gte_ldclmv((u8 *)&m + 4);
    gte_rtir();
    gte_stclmv((u8 *)&m + 4);
    gte_SetTransMatrix(arg2);
    gte_ldlv0((u8 *)&m + 0x14);
    gte_rtv0tr();
    gte_stlvnl((u8 *)&m + 0x14);
    gte_SetRotMatrix(D_800AF648);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    gte_ldclmv((u8 *)&m + 2);
    gte_rtir();
    gte_stclmv((u8 *)&m + 2);
    gte_ldclmv((u8 *)&m + 4);
    gte_rtir();
    gte_stclmv((u8 *)&m + 4);
    gte_SetTransMatrix(D_800AF648);
    gte_ldlv0((u8 *)&m + 0x14);
    gte_rtv0tr();
    gte_stlvnl((u8 *)&m + 0x14);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v0.vx = v0.vy = v0.vz = 0;
    t = AF(arg1, u16, 2) >> 5;
    v1.vx = t;
    v1.vy = 0;
    v1.vz = (AF(arg1, u16, 2) * 3) >> 2;
    v2.vx = -t;
    v2.vy = 0;
    v2.vz = v1.vz;
    v3.vx = v3.vy = 0;
    v3.vz = AF(arg1, u16, 2);
    p = AllocPrim(0x24);
    p[3] = 8;
    p[7] = 0x38;
    if (attr & 0x40000000) {
        p[7] = 0x3A;
    }
    gte_ldv3(&v0, &v1, &v2);
    gte_rtpt();
    gte_stflg(&flag0);
    gte_stsxy3(p + 8, p + 0x10, p + 0x18);
    gte_ldv0(&v3);
    gte_rtps();
    gte_stflg(&flag1);
    flag0 |= flag1;
    gte_stsxy(p + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if (flag0 & ~0x1000) {
        return;
    }
    z = otz + 1;
    c = AF(arg1, s16, 0x12);
    if (c & 0xC000) {
        if ((c & 0xC000) == 0xC000) {
            z -= c & 0xFFF;
            if (z < 0) {
                z = 0;
            }
        } else {
            z += c & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) {
        return;
    }
    p[0x4] = arg1[0x14];
    p[0x5] = arg1[0x15];
    p[0x6] = arg1[0x16];
    p[0xC] = arg1[0x18];
    p[0xD] = arg1[0x19];
    p[0xE] = arg1[0x1A];
    p[0x14] = arg1[0x18];
    p[0x15] = arg1[0x19];
    p[0x16] = arg1[0x1A];
    p[0x1C] = arg1[0x1C];
    p[0x1D] = arg1[0x1D];
    p[0x1E] = arg1[0x1E];
    ((struct_4_4 *)p)->field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
    ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)p;
    if (attr & 0x40000000) {
        q = g_PrimNext;
        g_PrimNext += 8;
        q[3] = 1;
        ((u32 *)q)[1] = ((attr >> 23) & 0x60) | 0xE1000000;
        ((struct_4_4 *)q)->field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
        ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)q;
    }
}

extern void MoveProp();
extern void FreeProp();
extern void func_sc07_004_801AF2EC();
extern void func_sc07_004_801AF368();

void func_sc07_004_801AF1EC(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc07_004_801AF2EC();
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    if ((temp_v0 == 0) || ((AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1), MoveProp((s32) arg0), (AF(arg0, s16, 0x32) == 0)) && ((u32) ((AF(arg0, u16, 0xA) + 0x1000) & 0xFFFF) >= 0x1001U))) {
        FreeProp((s32) arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + AF(arg0, s32, 0x34));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0x30));
    AF(AF(arg0, void *, 0x20), u16, 8) = (u16) AF(arg0, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(AF(arg0, void *, 0x20), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    func_sc07_004_801AF368((s32) AF(arg0, void *, 0x20));
}

void func_sc07_004_801AF2EC(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_800AF648[];

void func_sc07_004_801AF368(u8 *arg0) {
    struct_4_2 sxy;
    struct_20_5 m;
    struct_8_4 v;
    s32 unused[6]; /* MATCH-TRICK: frame (unused 0x18 slot, recipes func_80129CF8) */
    s32 flag;
    s32 sz;
    s32 otz;
    union_4_2 d;
    union_4_2 e;
    u32 fl;
    s32 z;
    u32 *ot;
    u16 h;
    struct_18 *p;
    struct_18 *p1;
    u32 semi;
    struct_4_4 *t;
    s32 *wm;

    wm = D_800AF648;
    fl = AF(arg0, u32, 4);
    gte_SetRotMatrix(wm);
    gte_SetTransMatrix(wm);
    gte_ldv0(arg0 + 8);
    gte_rtps();
    gte_stsxy(&sxy);
    gte_stflg(&flag);
    gte_stsz(&sz);
    gte_stszotz(&otz);
    if (flag & ~0x1000) return;
    z = otz + 1;
    ot = g_WorldOtTable[D_800B9A02[0]];
    h = AF(arg0, u16, 0x2C);
    if ((h & 0xC000) != 0) {
        if ((h & 0xC000) == 0xC000) {
            z -= h & 0xFFF;
            if (z < 0) z = 0;
        } else {
            z += h & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) return;
    m.field_0[0][0] = AF(arg0, s16, 0x18);
    m.field_0[0][1] = 0;
    m.field_0[0][2] = 0;
    m.field_0[1][0] = 0;
    m.field_0[1][1] = AF(arg0, s16, 0x18);
    m.field_0[1][2] = 0;
    m.field_0[2][0] = 0;
    m.field_0[2][1] = 0;
    m.field_0[2][2] = 0x1000;
    m.field_14[2] = 0;
    m.field_14[1] = 0;
    m.field_14[0] = 0;
    RotMatrixZ(AF(arg0, s16, 0x14), &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    v.field_0 = 0x20;
    v.field_2 = 0;
    v.field_4 = sz;
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&d);
    e.m1.field_0 = d.m1.field_0 >> 3;
    e.m1.field_2 = d.m1.field_2 >> 3;
    p = (struct_18 *)g_PrimNext;
    p1 = p + 1;
    p->field_0.field_3_b0 = 5;
    p->field_7 = 0x28;
    p1->field_0.field_3_b0 = 5;
    p1->field_7 = 0x28;
    semi = fl & 0x40000000;
    if (semi) {
        p->field_7 |= 2;
        p1->field_7 |= 2;
    }
    p->field_4 = arg0[0x24];
    p->field_5 = arg0[0x25];
    p->field_6 = arg0[0x26];
    p1->field_4 = arg0[0x24];
    p1->field_5 = arg0[0x25];
    p1->field_6 = arg0[0x26];
    p->field_8 = sxy.field_0 + d.m1.field_0;
    p->field_A = sxy.field_2 + d.m1.field_2;
    p->field_C = sxy.field_0 - e.m1.field_2;
    p->field_E = sxy.field_2 + e.m1.field_0;
    p->field_10 = sxy.field_0 + e.m1.field_2;
    p->field_12 = sxy.field_2 - e.m1.field_0;
    p->field_14 = sxy.field_0 - d.m1.field_0;
    p->field_16 = sxy.field_2 - d.m1.field_2;
    p1->field_8 = sxy.field_0 - d.m1.field_2;
    p1->field_A = sxy.field_2 + d.m1.field_0;
    p1->field_C = sxy.field_0 - e.m1.field_0;
    p1->field_E = sxy.field_2 - e.m1.field_2;
    p1->field_10 = sxy.field_0 + e.m1.field_0;
    p1->field_12 = sxy.field_2 + e.m1.field_2;
    p1->field_14 = sxy.field_0 + d.m1.field_2;
    p1->field_16 = sxy.field_2 - d.m1.field_0;
    p->field_0.field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
    ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)p;
    p1->field_0.field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
    ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)p1;
    g_PrimNext += 0x30;
    if (semi) {
        t = (struct_4_4 *)g_PrimNext;
        g_PrimNext += 8;
        t->field_3_b0 = 1;
        ((u32 *)t)[1] = 0xE1000000 | ((fl >> 23) & 0x60);
        t->field_0_b0 = ((struct_4_4 *)(ot + z))->field_0_b0;
        ((struct_4_4 *)(ot + z))->field_0_b0 = (u32)t;
    }
}

extern s32 func_sc07_004_801AF9C8();

void func_sc07_004_801AF808(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    struct_8_4 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.field_0 = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.field_2 = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.field_4 = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.field_6 = rng[3];
        r = func_sc07_004_801AF9C8(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc07_004_801AF994(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc07_004_801AF9C8(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

extern s32 SpawnPropAt();

s32 func_sc07_004_801AF9C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = SpawnPropAt(0x55, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = (s32) AF(arg0, s16, 6);
        if (arg1 != 0) {
            AF(temp_v0, s32, 0x10) = (s32) AF(arg1, s32, 0);
            AF(temp_v0, s32, 0x14) = (s32) AF(arg1, s32, 4);
            AF(temp_v0, s32, 0x18) = (s32) AF(arg1, s32, 8);
            AF(temp_v0, s32, 0x34) = (s32) AF(arg1, s32, 0xC);
        }
        if (arg2 != 0) {
            AF(AF(temp_v0, void *, 0x20), s32, 0x24) = arg2;
        }
    }
    return temp_v0;
}
