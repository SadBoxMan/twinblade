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
extern u8 D_sc04_028_801E8798;
extern void StartFade();
extern void func_80175414();
extern s32 D_80126B10;

s32 func_sc04_028_801E7B50(u8 *arg0) {
    D_80126B10 = (s32) &D_sc04_028_801E8798;
    StartFade(0);
    func_80175414();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
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
extern s32 FadeStep();

s32 func_sc04_028_801E7BA8(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0xC];
    u8 field_1C[0x24]; s16 field_40[3];
} struct_46;
extern void StartPlayerAction();
void func_sc04_028_801E7E7C(u8 *arg0);

s32 func_sc04_028_801E7BCC(u8 *arg0) {
    StartPlayerAction((s32) func_sc04_028_801E7E7C, 0x01000000);
    AF(arg0, s32, 0x28) = 0x10;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern void StartMapChangeFade();
extern void PlaySoundId();
extern void ClearTimeChime();
extern s32 GetVar();
extern s32 IsProgress200To599();
extern void SoundCmd1();
extern s32 GetProgress();

s32 func_sc04_028_801E7C18(u8 *o) {
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

void func_sc04_028_801E7CB8(void) {
    StepMapChangeFade();
}

extern void (*D_sc04_028_801E873C[])();

void func_sc04_028_801E7CD8(u8 *arg0) {
    D_sc04_028_801E873C[AF(arg0, u8, 0x15)]();
}

extern void (*D_sc04_028_801E8744[])();

void func_sc04_028_801E7D14(u8 *arg0) {
    D_sc04_028_801E8744[AF(arg0, u8, 0x15)]();
}

extern void (*D_sc04_028_801E87C8[])();
void func_sc04_028_801E7D50(u8 *arg0);

void func_sc04_028_801E7D50(u8 *arg0) {
    D_sc04_028_801E87C8[AF(arg0, u8, 0x214)]();
}

extern void NextPhase();
extern void func_80175414();

void func_sc04_028_801E7D8C(s32 arg0) {
    NextPhase(arg0);
    func_80175414();
}

extern u8 D_sc04_028_801E7B2C;
extern s32 WalkToPoint();

void func_sc04_028_801E7DB4(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc04_028_801E7B2C;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

extern u8 D_sc04_028_801E8798;
extern s32 TestPadAll();
extern void RequestMapChange();

void func_sc04_028_801E7E1C(s32 arg0) {
    if ((TestPadAll(0, 0, 0x80) << 0x10) != 0) {
        RequestMapChange((s32) &D_sc04_028_801E8798);
        NextPhase(arg0);
    }
}

void func_sc04_028_801E7E74(void) {
}

extern void (*D_sc04_028_801E87D8[])();

void func_sc04_028_801E7E7C(u8 *arg0) {
    D_sc04_028_801E87D8[AF(arg0, u8, 0x214)]();
}

void func_sc04_028_801E7EB8(s32 arg0) {
    NextPhase(arg0);
}

extern u8 D_sc04_028_801E7B34;

void func_sc04_028_801E7ED8(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc04_028_801E7B34;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

void func_sc04_028_801E7F40(void) {
}

typedef struct { s32 field_0[0x29]; } struct_A4;
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
void func_sc04_028_801E800C(s32 arg0);
extern void SnapCamera();

void func_sc04_028_801E7F48(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x82;
    g_CameraAngleTarget = 0xFB1;
    D_8012696A = 0x7C7;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_028_801E800C, 0);
    func_sc04_028_801E800C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -0x1B0;
}

extern void (*D_sc04_028_801E87E4[])();

void func_sc04_028_801E800C(s32 arg0) {
    D_sc04_028_801E87E4[AF(arg0, u8, 4)]();
}

extern void func_sc04_028_801E8070();

void func_sc04_028_801E8048(s32 arg0) {
    func_sc04_028_801E8070(arg0, (s32) &D_801274E8);
}

extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

void func_sc04_028_801E8070(u8 *p, s16 *q) {
    struct_20_5 m;
    struct_8_5 v;
    struct_8_5 o;

    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 0xA);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 0xA);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 0xA);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 0xA);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 0xA);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0xA);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0xA);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0xA);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.field_14[0] = AF(p, s16, 0x28) + q[0];
    m.field_14[1] = AF(p, s16, 0x2A) + q[1];
    m.field_14[2] = AF(p, s16, 0x2C) + q[2];
    v.field_0 = 0;
    v.field_2 = 0;
    v.field_4 = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.field_0;
    AF(p, s32, 0x40) = o.field_2;
    AF(p, s32, 0x44) = o.field_4;
}

s32 func_sc04_028_801E8208(s32 a) {
    if ((u32) (a - 900) < 110) {
        return 101;
    } else if ((u32) (a - 100) < 30) {
        return 40;
    } else {
        return 13;
    }
}

extern s32 UpdateScript();
extern void func_sc04_018_80186460();
extern s32 func_sc04_018_80186450();
extern void RunScript();
extern void func_80174438();
extern u8 D_sc04_028_801E88D4;
extern u8 D_sc04_028_801E88EC;
extern u8 D_sc04_028_801E8870;
extern s32 D_sc04_028_801E8AE8[];

void func_sc04_028_801E8238(u8 *o) {
    s16 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        switch (UpdateScript(o)) {
        case 1:
            AF(o, u16, 0x34) = 2;
            func_sc04_018_80186460(2);
            break;
        case 2:
            RunScript(o, &D_sc04_028_801E88D4);
            AF(o, u16, 0x34) = 0;
            break;
        case 3:
            RunScript(o, &D_sc04_028_801E88EC);
            AF(o, u16, 0x34) = 3;
            break;
        }
        break;
    case 1:
        break;
    case 2:
        r = func_sc04_018_80186450();
        if (r != 0) {
            RunScript(o, D_sc04_028_801E8AE8[r]);
            AF(o, u16, 0x34) = 4;
        } else {
            RunScript(o, &D_sc04_028_801E8870);
            AF(o, u16, 0x34) = 0;
        }
        break;
    case 3:
        if (UpdateScript(o) != 0) {
            func_80174438(D_80126B10);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 4:
        if (UpdateScript(o) != 0) {
            AF(o, u16, 0x34) = 2;
            func_sc04_018_80186460(2);
        }
        break;
    }
}

extern void (*D_sc04_028_801E8B00[])();

void func_sc04_028_801E8394(u8 *arg0) {
    D_sc04_028_801E8B00[AF(arg0, u16, 2)]();
}

extern s32 D_sc04_028_801EFB14;

void func_sc04_028_801E83D0(void) {
    D_sc04_028_801EFB14 = 0;
}

s32 func_sc04_028_801E83E0(s32 arg0, s32 arg1) {
    D_sc04_028_801EFB14 = 1;
    return 1;
}

s32 func_sc04_028_801E83F4(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return D_sc04_028_801EFB14;
}

extern s32 GetFlag();
extern void SetFlag();

s32 func_sc04_028_801E8404(void) {
    if (!(GetFlag(0x111) & 0xFF)) {
        SetFlag(0x111, 1);
        return 1;
    }
    return 0;
}

extern s32 D_sc04_028_801EFB0C;
extern s32 D_sc04_028_801E8890[];
extern s32 D_sc04_028_801E88A4[];
extern s32 D_sc04_028_801E88C0[];
extern s32 GetProgress();
extern s32 func_sc04_018_80184DD0();
extern s32 func_sc04_018_80184E44();
extern void func_sc04_018_80184EA0();

void func_sc04_028_801E8440(u8 *o) {
    s32 t = GetProgress();
    s32 i;

    if (t < 200) {
        if (D_sc04_028_801EFB0C < 20) {
            i = 0;
        } else if (D_sc04_028_801EFB0C < 70) {
            i = 1;
        } else if (D_sc04_028_801EFB0C < 100) {
            i = 2;
        } else if (D_sc04_028_801EFB0C < 130) {
            i = 3;
        } else {
            i = 4;
        }
        AF(o, s32, 0xE4) = D_sc04_028_801E8890[i];
    } else if (t < 900) {
        AF(o, s32, 0xE4) = D_sc04_028_801E88A4[func_sc04_018_80184DD0()];
    } else {
        AF(o, s32, 0xE4) = D_sc04_028_801E88C0[func_sc04_018_80184E44()];
        func_sc04_018_80184EA0();
    }
}

extern void SetProgress();

void func_sc04_028_801E851C(void) {
    SetProgress(0x181);
}

extern s32 func_sc04_018_8018CDEC();

void func_sc04_028_801E853C(s32 arg0) {
    func_sc04_018_8018CDEC(arg0);
}

extern s16 D_sc04_018_801E79D8;
extern u8 D_sc04_028_801E89F0;
extern u8 D_sc04_028_801E8A28;
extern u8 D_sc04_028_801E8A5C;
extern void *D_sc04_018_801E7AAC;

void func_sc04_028_801E855C(void) {
    switch (D_sc04_018_801E79D8) {
    case 0:
        AF(D_sc04_018_801E7AAC, s32 *, 4) = &D_sc04_028_801E89F0;
        return;
    case 1:
        AF(D_sc04_018_801E7AAC, s32 *, 4) = &D_sc04_028_801E8A28;
        return;
    case 2:
        AF(D_sc04_018_801E7AAC, s32 *, 4) = &D_sc04_028_801E8A5C;
        return;
    }
}

extern s32 D_sc04_018_801E79DC;

void func_sc04_028_801E85E8(void) {
    AF(D_sc04_018_801E7AAC, s32, 4) = (s32) D_sc04_018_801E79DC;
}

extern s32 D_sc04_018_801E79E0;
extern s32 D_sc04_018_801E79E4;
extern s32 D_sc04_028_801E8A58;

void func_sc04_028_801E8600(void) {
    AF(D_sc04_018_801E7AAC, s32, 4) = (s32) D_sc04_018_801E79E4;
    D_sc04_028_801E8A58 = D_sc04_018_801E79E0;
}

extern u8 D_sc04_028_801E8A10;

void func_sc04_028_801E8630(void) {
    func_sc04_018_8018CDEC();
    if (D_sc04_018_801E79D8 == 0) {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_028_801E89F0;
    } else {
        AF(D_sc04_018_801E7AAC, void *, 4) = &D_sc04_028_801E8A10;
    }
}

extern u8 D_sc04_018_801BA448;
extern u8 D_sc04_028_801E87E8;
extern u8 D_sc04_028_801E8818;
extern u8 D_sc04_028_801EFADC;
extern s32 D_sc04_028_801EFB10;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern void SetScript();
extern void PlaceObject();
extern void StartEvent();

void func_sc04_028_801E868C(u8 *o) {
    s32 t = AllocActorModel();
    u8 *q;

    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
    } else {
        InitModel(t, &D_sc04_028_801EFADC);
        q = AF(o, u8 *, 0x68);
        D_sc04_028_801EFB10 = 0;
        AF(q, s16, 0xC) = 0x7FFF;
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc04_018_801BA448);
        PlaceObject(o, &D_sc04_028_801E87E8);
        AF(o, s16, 0x34) = 0;
        StartEvent(o, &D_sc04_028_801E8818);
        D_sc04_028_801EFB0C = GetProgress();
    }
}
