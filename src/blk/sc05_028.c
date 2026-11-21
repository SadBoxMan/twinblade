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
extern u8 D_sc05_028_801EE394;
extern void StartFade();
extern void func_80175414();
extern s32 D_80126B10;

s32 func_sc05_028_801ED99C(u8 *arg0) {
    D_80126B10 = (s32) &D_sc05_028_801EE394;
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

s32 func_sc05_028_801ED9F4(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0xC];
    u8 field_1C[0x24]; s16 field_40[3];
} struct_46;
extern void StartPlayerAction();
void func_sc05_028_801EDCE0(u8 *arg0);

s32 func_sc05_028_801EDA18(u8 *arg0) {
    StartPlayerAction((s32) func_sc05_028_801EDCE0, 0x01000000);
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

s32 func_sc05_028_801EDA64(u8 *o) {
    s32 t = GetProgress();

    if (--AF(o, s32, 0x28) == -1) {
        StartMapChangeFade();
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        if (!(GetVar(0xCE) & 0xFF) && !((u32) (t - 900) < 110) && !((u32) (t - 1120) < 50)) {
            PlaySoundId(0x1D, 0);
            SoundCmd1(1);
        }
        o[0x15]++;
    }
    return 0;
}

extern void StepMapChangeFade();

void func_sc05_028_801EDB1C(void) {
    StepMapChangeFade();
}

extern void (*D_sc05_028_801EE338[])();

void func_sc05_028_801EDB3C(u8 *arg0) {
    D_sc05_028_801EE338[AF(arg0, u8, 0x15)]();
}

extern void (*D_sc05_028_801EE340[])();

void func_sc05_028_801EDB78(u8 *arg0) {
    D_sc05_028_801EE340[AF(arg0, u8, 0x15)]();
}

extern void (*D_sc05_028_801EE3C4[])();
void func_sc05_028_801EDBB4(u8 *arg0);

void func_sc05_028_801EDBB4(u8 *arg0) {
    D_sc05_028_801EE3C4[AF(arg0, u8, 0x214)]();
}

extern void NextPhase();
extern void func_80175414();

void func_sc05_028_801EDBF0(s32 arg0) {
    NextPhase(arg0);
    func_80175414();
}

extern u8 D_sc05_028_801ED98C;
extern s32 WalkToPoint();

void func_sc05_028_801EDC18(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc05_028_801ED98C;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

extern u8 D_sc05_028_801EE394;
extern s32 TestPadAll();
extern void RequestMapChange();

void func_sc05_028_801EDC80(s32 arg0) {
    if ((TestPadAll(0, 0, 0x80) << 0x10) != 0) {
        RequestMapChange((s32) &D_sc05_028_801EE394);
        NextPhase(arg0);
    }
}

void func_sc05_028_801EDCD8(void) {
}

extern void (*D_sc05_028_801EE3D4[])();

void func_sc05_028_801EDCE0(u8 *arg0) {
    D_sc05_028_801EE3D4[AF(arg0, u8, 0x214)]();
}

void func_sc05_028_801EDD1C(s32 arg0) {
    NextPhase(arg0);
}

extern u8 D_sc05_028_801ED994;

void func_sc05_028_801EDD3C(u8 *o) {
    struct_8_10 v;

    v = *(struct_8_10 *)&D_sc05_028_801ED994;
    if (WalkToPoint(o, &v) != 0) {
        NextPhase(o);
    }
}

void func_sc05_028_801EDDA4(void) {
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
void func_sc05_028_801EDE70(s32 arg0);
extern void SnapCamera();

void func_sc05_028_801EDDAC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x82;
    g_CameraAngleTarget = 0xFB1;
    D_8012696A = 0x7C7;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x36;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_028_801EDE70, 0);
    func_sc05_028_801EDE70((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -0x1B0;
}

extern void (*D_sc05_028_801EE3E0[])();

void func_sc05_028_801EDE70(s32 arg0) {
    D_sc05_028_801EE3E0[AF(arg0, u8, 4)]();
}

extern void func_sc05_028_801EDED4();

void func_sc05_028_801EDEAC(s32 arg0) {
    func_sc05_028_801EDED4(arg0, (s32) &D_801274E8);
}

extern u8 g_Player;
extern u16 D_sc05_028_801EE3E8[];
extern s16 D_sc05_028_801EE3E4[];
extern s32 GetObjPadPressed();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

void func_sc05_028_801EDED4(u8 *o, s16 *p) {
    MATRIX m;
    SVECTOR v;
    SVECTOR r;

    if (GetObjPadPressed(&g_Player) & 3) {
        o[5] = (o[5] + 1) & 1;
        AF(o, s32, 0xC) = D_sc05_028_801EE3E4[o[5]];
        AF(o, u16, 0x2E) = D_sc05_028_801EE3E8[o[5]];
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

s32 func_sc05_028_801EE0CC(s32 a) {
    if ((u32) (a - 1120) < 50) {
        return 137;
    } else if ((u32) (a - 900) < 110) {
        return 101;
    } else if ((u32) (a - 100) < 30) {
        return 40;
    } else {
        return 23;
    }
}

extern void (*D_sc05_028_801EE4EC[])();

void func_sc05_028_801EE10C(u8 *arg0) {
    D_sc05_028_801EE4EC[AF(arg0, u16, 2)]();
}

extern s32 D_sc05_028_801EE408[];
extern s32 D_sc05_028_801EE41C[];
extern s32 D_sc05_028_801EE438[];
extern s32 GetProgress();
extern s32 func_sc05_017_80184A00();
extern s32 func_sc05_017_80184AD0();
extern s32 func_sc05_017_80184B44();

void func_sc05_028_801EE148(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = GetProgress();
    if (temp_v0 < 0xC8) {
        AF(arg0, s32, 0xE4) = D_sc05_028_801EE408[func_sc05_017_80184A00()];
        return;
    }
    if (temp_v0 < 0x384) {
        AF(arg0, s32, 0xE4) = D_sc05_028_801EE41C[func_sc05_017_80184AD0()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_sc05_028_801EE438[func_sc05_017_80184B44()];
}

extern s32 GetPoisonWord();

s32 func_sc05_028_801EE1E8(void) {
    return GetPoisonWord() != 0;
}

extern void CurePlayerPoison();
extern void PlaySoundId();

void func_sc05_028_801EE208(void) {
    CurePlayerPoison();
    PlaySoundId(0x464, 0);
}

extern s32 UpdateScript();
extern void RunScript();
extern void func_80174438();
extern u8 D_sc05_028_801EE4DC;

void func_sc05_028_801EE234(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (UpdateScript() != 0) {
            RunScript(o, &D_sc05_028_801EE4DC);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        if (UpdateScript(o) != 0) {
            func_80174438(D_80126B10);
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        break;
    }
}

extern u8 D_sc05_017_801BA244;
extern u8 D_sc05_028_801EE3EC;
extern u8 D_sc05_028_801EE3F4;
extern u8 D_sc05_028_801EE474;
extern s32 func_sc05_017_801844BC();
extern void SetScript();
extern void PlaceObject();
extern void StartEvent();

void func_sc05_028_801EE2C8(s32 arg0) {
    if (func_sc05_017_801844BC(arg0, (s32) &D_sc05_028_801EE3F4) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_017_801BA244);
        PlaceObject(arg0, (s32) &D_sc05_028_801EE3EC);
        AF(arg0, s16, 0x34) = 0;
        StartEvent(arg0, (s32) &D_sc05_028_801EE474);
    }
}
