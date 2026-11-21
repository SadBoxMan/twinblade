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
typedef struct { struct_4_6 field_0; struct_4_6 field_4; u8 field_8[0x38]; } struct_40_2;
typedef struct { u8 field_0[0x10]; struct_4_2 field_10[12]; } struct_40_3;
typedef struct { s16 field_0; u16 field_2; } struct_4_11;
typedef struct { u8 field_0[0x76]; s16 field_76; } struct_78;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s8 field_C; s8 field_D; s8 field_E; } struct_10_8;
typedef struct { u32 *field_0; s32 field_4[4]; } struct_14_13;
typedef struct { s16 field_0; s16 field_2; s16 field_4[8]; s16 *field_14[8]; } struct_34_6;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_14;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; } struct_18_3;
typedef struct { u8 field_0[0x10C]; } struct_10C_3;
typedef struct { u8 field_0; u8 field_1; s16 field_2[2]; s16 field_6[2]; s16 field_A; s16 field_C; } struct_E;
extern s32 D_sc07_003_801F4360;
extern void (*D_sc07_003_801A6B2C[])();
extern void func_sc07_003_801A293C();
extern void func_sc07_003_801A4268();
extern void func_sc07_003_801A2EC8();

void func_sc07_003_801A01D4(u8 *arg0) {
    s32 *p;
    s32 i;

    D_sc07_003_801A6B2C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc07_003_801A293C(arg0);
        func_sc07_003_801A4268(arg0);
        func_sc07_003_801A2EC8(arg0);
    }
    i = 0; p = &D_sc07_003_801F4360;
    for (; i < 3; i++) {
        *p += 1;
        p++;
    }
}

typedef struct { s16 field_0, field_2, field_4, field_6, field_8, field_A, field_C, field_E; } struct_10_9;
typedef struct { s16 field_0, field_2, field_4, field_6; u16 field_8; s16 field_A, field_C, field_E; s32 field_10; } struct_14_15;
typedef struct { u8 pad0[2]; s16 field_2; s32 field_4, field_8, field_C; u8 pad10[0x10]; u8 *field_20; u8 pad24[0x38]; u16 field_5C; u8 pad5E[0x82]; s32 field_E0; u8 padE4[4]; s32 field_E8; } struct_EC_9;
typedef struct { u16 field_0, field_2; } struct_4_13;
typedef struct { struct_8_4 field_0[4]; struct_4_13 field_20[4]; s32 field_30; s32 field_34; u8 field_38; } struct_3C_5;
typedef struct { struct_8_7 field_0[4]; s32 field_20[4]; s32 field_30; } struct_34_7;
typedef struct { SVECTOR field_0; SVECTOR field_8; s32 field_10; s32 field_14; s32 field_18; } struct_1C_9;
extern u8 D_sc07_003_801A6854;
extern u8 D_sc07_003_801A6874;
extern u8 D_sc07_003_801A68A8;
extern s32 D_sc07_003_801AE228;
extern u8 D_sc07_003_801F0008;
extern s32 D_sc07_003_801F4358;
extern u8 D_sc07_003_801F43B4;
extern s32 D_sc07_003_801F43B8;
extern s32 D_sc07_003_801F43BC;
extern s16 D_sc07_003_801F43C0;
extern u8 D_sc07_003_801F1344[];
extern u8 D_sc07_003_801F1A5C[];
extern u8 D_sc07_003_801F436C;
extern u8 D_sc07_003_801AE21C[];
extern s32 GetProgress();
extern void RejectSpawn();
extern s32 SetupActor();
extern void SetModelCullBox();
extern void SetScript();
extern void UpdateModelZYX();
extern void HideModel();
extern s32 SpawnActor();
extern s32 SpawnActorArg();
extern void MapPartsTmd();
void func_sc07_003_801A2E20(void);
typedef struct { u8 pad0[2]; s16 field_2; u8 pad4[4]; s32 field_8; u8 padC[0x14]; u8 *field_20; u8 pad24[0x24]; s32 field_48; u8 pad4C[0xC]; s32 field_58; u8 pad5C[0x19]; u8 field_75; u16 field_76; u16 *field_78; u8 pad7C[0x32]; s16 field_AE; u8 padB0[0x1C]; s32 field_CC, field_D0, field_D4, field_D8; u8 padDC[8]; s32 field_E4; } struct_E8;

void func_sc07_003_801A026C(u8 *arg0) {
    s32 *p;
    s32 i;
    s32 j;
    s32 k;

    if (GetProgress() >= 0x640U) {
        RejectSpawn(arg0);
        return;
    }
    if (SetupActor(arg0, &D_sc07_003_801A6874) != 0) {
        SetModelCullBox(AF(arg0, u8 *, 0x20), 0x7FFF, 0x7FFF);
        i = 0;
        p = &D_sc07_003_801F4360;
        AF(arg0, s32, 0x58) = (s32)&D_sc07_003_801A6854 | 0x10000000 | 0x40000000;
        SetScript(arg0, &D_sc07_003_801F0008);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x48) = 0x30000;
        AF(arg0, s32, 8) += 0xFD8A0000;
        UpdateModelZYX(arg0);
        HideModel(arg0);
        ((struct_E8 *)arg0)->field_AE = -1;
        ((struct_E8 *)arg0)->field_75 = 2;
        ((struct_E8 *)arg0)->field_76 = *((struct_E8 *)arg0)->field_78;
        ((struct_E8 *)arg0)->field_E4 = 0x50;
        AF(((struct_E8 *)arg0)->field_20, u16, 0x2C) |= 0x80;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc07_003_801A68A8;
        AF(arg0, s32, 0xCC) = SpawnActor(0x34C, arg0);
        AF(arg0, s32, 0xD0) = SpawnActor(0x351, arg0);
        AF(arg0, s32, 0xD4) = SpawnActorArg(0x34C, 2, arg0);
        AF(arg0, s32, 0xD8) = SpawnActor(0x3AB, arg0);
        do {
            i++;
            *p++ = rand() & 0x7FFF;
        } while (i < 3);
        for (i = 0x3E; i < 0x71; i++) {
            j = i * 8;
            *(s16 *)(D_sc07_003_801F1344 + j) = 2;
        }
        for (i = 0x34; i < 0x8C; i++) {
            j = i * 8;
            *(s16 *)(D_sc07_003_801F1A5C + j) = 2;
        }
        for (i = 0, j = 0, k = 0; i < 0x14; i++) {
            if (i != 0 && i != 3) {
                *(s32 *)((u8 *)&D_sc07_003_801F436C + k) = *(s32 *)((u8 *)D_sc07_003_801AE21C + j);
                k += 4;
            }
            j += 4;
        }
        MapPartsTmd(&D_sc07_003_801F436C);
        D_sc07_003_801F43BC = 0;
        D_sc07_003_801F4358 = 0;
        D_sc07_003_801F43C0 = 3;
        *(s32 *)&D_sc07_003_801F43B4 = D_sc07_003_801AE228;
        D_sc07_003_801F43B8 = *(s32 *)D_sc07_003_801AE21C;
        func_sc07_003_801A2E20();
    }
}

extern u8 D_sc07_003_801A698C;
extern s32 GetPlayerAction();
extern void StartEvent();

void func_sc07_003_801A04D4(s32 arg0) {
    if (GetPlayerAction() == 0) {
        StartEvent(arg0, (s32) &D_sc07_003_801A698C);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = 0;
    }
}

extern s32 D_sc07_003_801F4318[];
extern s32 D_sc07_003_801F431C;
extern s32 D_sc07_003_801F4320;
extern s32 D_sc07_003_801F4324;
extern s32 D_sc07_003_801F4358;
extern s32 UpdateScript();
extern void EndEvent();
extern void func_sc07_002_8017BF08();
extern s32 FreeActor();
extern s32 AllocActorSprite();
extern void SetShapeCircle();
extern void func_8001CD9C();
extern void BlendCameraThen();
extern s32 func_sc07_002_8017F004();

void func_sc07_003_801A0524(s32 arg0) {
    s32 temp_v0;

    if (UpdateScript() == 1) {
        EndEvent(arg0);
        func_sc07_002_8017BF08(arg0 + 0x76, AF(arg0, s32, 0x78), 0xA, 0x120);
        AF(arg0, s16, 2) = 3;
        FreeActor(AF(arg0, s32, 0xD8));
        AF(arg0, s32, 0xD8) = 0;
        temp_v0 = AllocActorSprite();
        D_sc07_003_801F4358 = temp_v0;
        if (temp_v0 != 0) {
            D_sc07_003_801F4318[0] = 0;
            D_sc07_003_801F431C = 0;
            D_sc07_003_801F4320 = 0;
            D_sc07_003_801F4324 = 0;
            SetShapeCircle(D_sc07_003_801F4318, 0x60);
            func_8001CD9C(D_sc07_003_801F4358, D_sc07_003_801F4318);
            AF(D_sc07_003_801F4358, u16, 0x2C) = 0xC010;
            AF(D_sc07_003_801F4358, s32, 4) = (s32) (AF(D_sc07_003_801F4358, s32, 4) | 0x50000000);
        }
        BlendCameraThen((s32) func_sc07_002_8017F004);
    }
}

extern u8 D_sc07_003_801F0008;
extern void SetScript();

void func_sc07_003_801A060C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s32, 0xE4) = 0x50;
    SetScript((s32) arg0, (s32) &D_sc07_003_801F0008);
}

extern s32 TickTimer();
extern s32 DistSqToPlayer();

void func_sc07_003_801A0648(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 7;
    }
    if ((AF(arg0, s32, 0x1C) < 0x20) && (DistSqToPlayer(arg0) <= 0x10000)) {
        AF(arg0, s16, 2) = 0xF;
    }
}

void func_sc07_003_801A06AC(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    AF(arg0, s32, 0x1C) = 0x14;
    AF(arg0, s32, 0xE4) = 0x50;
    SetScript((s32) arg0, (s32) &D_sc07_003_801F0008);
}

void func_sc07_003_801A06E8(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 7;
        AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) & ~0x40);
    }
}

extern u8 D_sc07_003_801F1FD8;
extern u8 D_sc07_003_801F436C;
extern s16 D_sc07_003_801F43C0;
extern s32 SpawnActor();

void func_sc07_003_801A072C(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, s32, 0xE4) = 0x50;
    AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_sc07_003_801F436C;
    SetScript((s32) arg0, (s32) &D_sc07_003_801F1FD8);
    D_sc07_003_801F43C0 = 0x11;
    SpawnActor(0x3D0, (s32) arg0);
}

extern u8 D_sc07_002_80186F68;
extern u8 D_sc07_003_801A68BC;
extern u8 D_sc07_003_801A68C4;
extern s32 TurnStepToPlayer();
extern s32 SetForwardVelocity();
extern void func_sc07_003_801A2658();
extern s32 StartCameraShake();
extern s32 PlaySoundId();
extern s32 MoveOnGround();
extern s32 RestorePrevPos();
extern void func_sc07_003_801A24E8();
extern s32 TargetInFront();

void func_sc07_003_801A079C(u8 *arg0) {
    u8 unused[8]; /* MATCH-TRICK: frame (unused 8-byte slot, recipes func_80129CF8) */
    s32 t;
    

    t = TurnStepToPlayer(arg0, 0x20);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t; SetForwardVelocity(arg0, -0x50000);
    if (AF(arg0, s32, 0x94) == 0xF) {
        func_sc07_003_801A2658(arg0, &D_sc07_003_801A68BC);
        StartCameraShake(&D_sc07_002_80186F68);
        PlaySoundId(0xB53, 0);
    } else if (AF(arg0, s32, 0x94) == 0x35) {
        func_sc07_003_801A2658(arg0, &D_sc07_003_801A68C4);
        StartCameraShake(&D_sc07_002_80186F68);
        PlaySoundId(0xB53, 0);
    }
    if (!(MoveOnGround(arg0) & 0x2000)) {
        RestorePrevPos(arg0);
    }
    func_sc07_003_801A24E8(arg0);
    if (AF(arg0, s32, 0xE8) > 0xFFFF) {
        if (rand() & 1) {
            AF(arg0, s16, 2) = 0xD;
            return;
        }
        AF(arg0, s16, 2) = 0xB;
        return;
    }
    t = DistSqToPlayer(arg0);
    if (t <= 0x10000) {
        AF(arg0, s16, 2) = 0xF;
        return;
    }
    if (t <= 0x24000) {
        if (TargetInFront(arg0, 0x180) != 0) {
            AF(arg0, s16, 2) = 0x11;
            return;
        }
    } else if (t > 0xC4000 && AF(arg0, s32, 0x94) == 0x4E) {
        AF(arg0, s16, 2) = 9;
        return;
    }
    if (TickTimer(arg0) != 0) {
        if (t <= 0x64000) {
            AF(arg0, s16, 2) = 0xF;
            return;
        }
        AF(arg0, s32, 0x1C) = 0x80;
    }
}

extern u8 D_sc07_003_801F1EC0;
extern void func_sc07_003_801A28AC();

void func_sc07_003_801A0940(u8 *arg0) {
    func_sc07_003_801A28AC(arg0);
    AF(arg0, s16, 2) = 10;
    AF(arg0, s32, 0xE4) = 0x50;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, &D_sc07_003_801F1EC0);
    AF(arg0, s32, 0x1C) = rand() % 64 + 64;
    AF(arg0, s32, 0xE0) &= ~8;
}

extern u16 D_800B99DA;
extern u8 D_sc07_003_801F1198;
extern u8 D_sc07_003_801F1238;
extern u8 D_sc07_003_801F1340;
extern s32 GroundDistSqToPlayer();
extern void func_sc07_003_801A27A4();
extern s32 func_sc07_003_801A19C8();
extern s32 IsPlayerHitBy();
extern void func_sc07_003_801A1924();
extern void func_80153C44();

void func_sc07_003_801A09C8(u8 *arg0) {
    u8 unused[0x28]; /* MATCH-TRICK: frame (unused 0x28 slot, recipes func_80129CF8) */
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToPlayer(arg0, 0x10);
        SetForwardVelocity(arg0, -0xF0000);
        if (!(MoveOnGround(arg0) & 0x2000)) {
            RestorePrevPos(arg0);
        }
        if (AF(arg0, s32, 0x94) == 9) {
            func_sc07_003_801A2658(arg0, &D_sc07_003_801A68BC);
            StartCameraShake(&D_sc07_002_80186F68);
            PlaySoundId(0xB53, 0);
        } else if (AF(arg0, s32, 0x94) == 0x1A) {
            func_sc07_003_801A2658(arg0, &D_sc07_003_801A68C4);
            StartCameraShake(&D_sc07_002_80186F68);
            PlaySoundId(0xB53, 0);
        }
        if ((TickTimer(arg0) != 0 || GroundDistSqToPlayer(arg0) <= 0x40000) && TargetInFront(arg0, 0x200) != 0) {
            AF(arg0, u16, 0x34)++;
            SetScript(arg0, &D_sc07_003_801F1198);
            AF(arg0, s32, 0x1C) = 0x30;
            AF(arg0, s32, 0x10) *= 2;
            AF(arg0, s32, 0x18) *= 2;
            PlaySoundId(0xB79, 0);
        }
        break;
    case 1:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        if ((u16)(D_800B99DA % 3) == 0) {
            func_sc07_003_801A27A4(arg0, &D_sc07_003_801A68BC);
            func_sc07_003_801A27A4(arg0, &D_sc07_003_801A68BC + 8);
        }
        if (!(MoveOnGround(arg0) & 0x2000)) {
            RestorePrevPos(arg0);
        }
        if (func_sc07_003_801A19C8(arg0) == 1) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0xE0) |= 0x40;
        } else if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc07_003_801F1238);
            AF(arg0, u16, 0x34) = 5;
        }
        break;
    case 2:
        if (IsPlayerHitBy(arg0) != 0) {
            AF(arg0, s32, 0xE0) |= 8;
            AF(arg0, u16, 0x5C) &= 0xF7FF;
        } else {
            AF(arg0, s32, 0xE0) &= ~0x40;
        }
        AF(arg0, u16, 0x34)++;
    case 3:
        if (AF(arg0, s32, 0xE0) & 8) {
            func_sc07_003_801A1924(arg0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            if (AF(arg0, s32, 0xE0) & 8) {
                SetScript(arg0, &D_sc07_003_801F1340);
                AF(arg0, u16, 0x34) = 4;
            } else {
                SetScript(arg0, &D_sc07_003_801F1238);
                AF(arg0, u16, 0x34) = 5;
            }
        }
        break;
    case 4:
        if (AF(arg0, s32, 0x94) < 0x86) {
            func_sc07_003_801A1924(arg0);
        }
        if (AF(arg0, s32, 0x94) == 0x3E) {
            PlaySoundId(0xC18, 0);
        }
        if (AF(arg0, s32, 0x94) == 0x86) {
            func_80153C44(1, 0x50, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
            PlaySoundId(0xC17, 0);
            PlaySoundId(0xC7B, 0);
        }
    case 5:
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, s16, 2) = 3;
            AF(arg0, u16, 0x5C) |= 0x800;
            AF(arg0, s32, 0xE0) &= ~0x40;
        }
        break;
    }
    func_sc07_003_801A24E8(arg0);
}

extern u8 D_sc07_003_801A6544;
extern u8 D_sc07_003_801A6B90;
extern void func_sc07_003_801A28AC();
extern void func_sc07_002_80184C70();
extern void func_sc07_002_80184DB0();
extern s32 PlaySoundId();

void func_sc07_003_801A0DA4(u8 *arg0) {
    func_sc07_003_801A28AC();
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x50;
    SetScript((s32) arg0, (s32) &D_sc07_003_801A6544);
    func_sc07_002_80184C70();
    func_sc07_002_80184DB0(0, (s32) &D_sc07_003_801A6B90, -8);
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) & ~4);
    PlaySoundId(0xC35, 0);
}

extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern u8 D_sc07_003_801A68D4;
extern SVECTOR D_sc07_003_801F4310;
extern void GetPartWorldMatrix();
extern void LocalToWorld();
extern s32 func_sc07_002_80184E20();
extern s32 func_sc07_002_80184E98();
extern s32 func_sc07_002_8018503C();
extern s32 FaceHelper();
extern s32 func_sc07_003_801A3054();
extern void SpawnActorFromDef();

void func_sc07_003_801A0E28(u8 *arg0) {
    MATRIX m;
    SVECTOR sv;
    struct_10_9 v;
    struct_14_15 s;

    if (AF(arg0, s32, 0x94) < 0x23) {
        ((u16 *)AF(arg0, u8 *, 0x20))[9] += TurnStepToPlayer(arg0, 8);
        GetPartWorldMatrix(arg0, (u16)D_sc07_003_801F43C0, &m);
        LocalToWorld(&m, &D_sc07_003_801A68D4, &sv);
        v.field_2 = sv.vx;
        v.field_6 = sv.vy;
        v.field_A = sv.vz;
        func_sc07_002_80184E20(&v);
        if (!(AF(arg0, s32, 0x94) & 1)) {
            func_sc07_002_80184E98(rand() & 0xFF0, 0x40);
        }
        func_sc07_002_8018503C();
    }
    if (AF(arg0, s32, 0x94) == 0x23) {
        if (DistSqToPlayer(arg0) > 0x23FFF) {
            sv.vy = 0;
            sv.vx = 0;
            sv.vz = -0x180;
            FaceHelper(arg0, &sv, &sv);
            if (func_sc07_003_801A3054(arg0, &sv, 0x200) != 0) {
                D_sc07_003_801F4310.vx = g_PlayerX;
                D_sc07_003_801F4310.vy = D_80126B62;
                D_sc07_003_801F4310.vz = D_80126B66;
            } else {
                sv.vy = 0;
                sv.vx = 0;
                sv.vz = -0x200;
                FaceHelper(arg0, &sv, &sv);
                D_sc07_003_801F4310 = sv;
            }
        } else {
            sv.vy = 0;
            sv.vx = 0;
            sv.vz = -0x200;
            FaceHelper(arg0, &sv, &sv);
            D_sc07_003_801F4310 = sv;
        }
    }
    if (AF(arg0, s32, 0x94) == 0x2F || AF(arg0, s32, 0x94) == 0x40 || AF(arg0, s32, 0x94) == 0x51) {
        GetPartWorldMatrix(arg0, (u16)D_sc07_003_801F43C0, &m);
        LocalToWorld(&m, &D_sc07_003_801A68D4, &sv);
        s.field_6 = 0x378;
        s.field_A = 0;
        s.field_8 = 0;
        s.field_10 = 0;
        s.field_E = 0;
        s.field_C = 0x7FFF;
        s.field_0 = sv.vx;
        s.field_2 = sv.vy;
        s.field_4 = sv.vz;
        SpawnActorFromDef(&s, arg0);
        s.field_8 = 0x8000;
        SpawnActorFromDef(&s, arg0);
        AF(arg0, s32, 0xE0) |= 4;
        PlaySoundId(0xB54, 0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s16, 2) = 0x13;
    }
}

extern u8 D_sc07_003_801F0478;
extern void StopWithGravity();
extern void func_sc07_002_8017F184();
extern s32 SpawnActorArg();

void func_sc07_003_801A10B0(u8 *arg0) {
    func_sc07_003_801A28AC();
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x50;
    SetScript((s32) arg0, (s32) &D_sc07_003_801F0478);
    StopWithGravity((s32) arg0);
    AF(arg0, s32, 0x14) = 0xFFE00000;
    func_sc07_002_8017F184();
    SpawnActorArg(0x34C, 4, (s32) arg0);
}

extern s32 HeadingToSV();
extern void *D_80126B78;
extern u8 D_801152A8;
extern void HitPlayer();
extern u8 D_sc07_002_80186F44;
extern s32 MoveCollide();
extern u8 D_800D3918;
extern u8 D_sc07_003_801A68F4;
extern s32 PathHitsModel();
extern void AnimStepNow();
extern void func_sc07_002_801830D8();

void func_sc07_003_801A1120(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    void **pp;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x94) == 0x26) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        MoveCollide(arg0);
        if (AF(arg0, u8 *, 0xD0) != NULL) {
            AF(AF(AF(arg0, u8 *, 0xD0), u8 *, 0x20), s16, 0x18) -= 0x12C;
            AF(AF(AF(arg0, u8 *, 0xD0), u8 *, 0x20), s16, 0x1A) -= 0x12C;
        }
        if (AF(arg0, s32, 0x14) >= 0) {
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (TickTimer(arg0) != 0) {
            AnimStepNow(arg0);
            AF(arg0, u16, 0x34)++;
        }
    case 3:
        if (AF(arg0, u8 *, 0xD0) != NULL) {
            AF(AF(AF(arg0, u8 *, 0xD0), u8 *, 0x20), s16, 0x18) += 0x12C;
            AF(AF(AF(arg0, u8 *, 0xD0), u8 *, 0x20), s16, 0x1A) += 0x12C;
        }
        if (MoveCollide(arg0) & 0x2000) {
            func_sc07_002_801830D8(arg0);
            StartCameraShake(&D_sc07_002_80186F44);
            func_sc07_003_801A2658(arg0, &D_sc07_003_801A68BC);
            func_sc07_003_801A2658(arg0, &D_sc07_003_801A68BC + 8);
            PlaySoundId(0xB52, 0);
            AF(arg0, u16, 0x34)++;
        }
        pp = &D_80126B78;
        LocalToWorld((u8 *)*pp + 0x34, &D_800D3918, &a);
        LocalToWorld((u8 *)*pp + 0x34, &D_sc07_003_801A68F4, &b);
        if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
            HitPlayer(1, 0x4002, HeadingToSV(&D_800D3918, &D_801152A8), 0x1E, &b, &D_801152A8);
        }
        break;
    case 4:
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, s16, 2) = 0x13;
            AF(arg0, s32, 0xE0) |= 0x10;
        }
        break;
    }
}

extern u8 D_sc07_003_801F1898;
extern u8 D_sc07_003_801F1978;
extern s16 D_sc07_003_801F435C;
extern s32 TurnStepToPlayer();

void func_sc07_003_801A13A0(u8 *arg0) {
    func_sc07_003_801A28AC();
    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x50;
    if (TurnStepToPlayer((s32) arg0, 1) < 0) {
        SetScript((s32) arg0, (s32) &D_sc07_003_801F1898);
        D_sc07_003_801F435C = 1;
    } else {
        SetScript((s32) arg0, (s32) &D_sc07_003_801F1978);
        D_sc07_003_801F435C = -1;
    }
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) | 2);
    PlaySoundId(0xB56, 0);
}

extern u8 *SpawnPropFrom();

void func_sc07_003_801A143C(u8 *arg0) {
    VECTOR in;
    VECTOR out;
    struct_14_5 s;
    u8 *p;
    s32 k;
    s32 i;
    s32 r;
    s32 a;

    if (AF(arg0, s32, 0x94) == 4) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += -D_sc07_003_801F435C * 0x70;
    }
    if ((u32)(AF(arg0, s32, 0x94) - 7) < 0x12) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += D_sc07_003_801F435C * 0xF0;
        k = rand() % 8;
        in.vy = 0;
        in.vz = 0x400000;
        for (i = 0; i < 8; i++) {
            p = (u8 *)SpawnPropFrom(arg0, 0x22);
            if (p != NULL) {
                a = (rand() % 64) << 16;
                in.vx = (rand() & 1) ? a : -a;
                ApplyMatrixLV(AF(arg0, u8 *, 0x20) + 0x34, &in, &out);
                AF(p, s32, 4) += out.vx;
                AF(p, s32, 8) += out.vy;
                AF(p, s32, 0xC) += out.vz;
                r = rand();
                AF(p, s16, 0x34) = ((r % 0x2000 + 0x5000) & ~0xF) | (rand() & 1);
                AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC004;
                if (k == i) {
                    s.field_0 = (AF(arg0, s32, 4) + out.vx) >> 16;
                    s.field_2 = (AF(arg0, s32, 8) + out.vy) >> 16;
                    s.field_4 = (AF(arg0, s32, 0xC) + out.vz) >> 16;
                    s.field_6 = 0x376;
                    s.field_8 = 0;
                    s.field_A = 0;
                    s.field_10 = 0;
                    s.field_E = 0;
                    s.field_C = 0x7FFF;
                    SpawnActorFromDef(&s, arg0);
                }
            }
            in.vz += 0x400000;
        }
    }
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0xE0) &= ~2;
    }
}

extern u8 D_sc07_003_801F1198;

void func_sc07_003_801A16BC(u8 *arg0) {
    func_sc07_003_801A28AC();
    AF(arg0, s16, 2) = 0x12;
    AF(arg0, s32, 0xE4) = 0x50;
    SetScript((s32) arg0, (s32) &D_sc07_003_801F1198);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) & ~8);
    PlaySoundId(0xB79, 0);
}

void func_sc07_003_801A1724(u8 *arg0) {
    u8 unused[0x28]; /* MATCH-TRICK: frame (unused 0x28 slot, recipes func_80129CF8) */
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_sc07_003_801A19C8(arg0) == 1) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0xE0) |= 0x40;
        } else if (AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc07_003_801F1238);
            AF(arg0, u16, 0x34) = 4;
        }
        break;
    case 1:
        if (IsPlayerHitBy(arg0) != 0) {
            AF(arg0, s32, 0xE0) |= 8;
            AF(arg0, u16, 0x5C) &= ~0x800;
        } else {
            AF(arg0, s32, 0xE0) &= ~0x40;
        }
        AF(arg0, u16, 0x34)++;
    case 2:
        if (AF(arg0, s32, 0xE0) & 8) {
            func_sc07_003_801A1924(arg0);
        }
        if (AF(arg0, s16, 0x98) != 0) {
            break;
        }
        if (AF(arg0, s32, 0xE0) & 8) {
            SetScript(arg0, &D_sc07_003_801F1340);
            AF(arg0, u16, 0x34) = 3;
        } else {
            SetScript(arg0, &D_sc07_003_801F1238);
            AF(arg0, u16, 0x34) = 4;
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x94) < 0x86) {
            func_sc07_003_801A1924(arg0);
        }
        if (AF(arg0, s32, 0x94) == 0x3E) {
            PlaySoundId(0xC18, 0);
        }
        if (AF(arg0, s32, 0x94) == 0x86) {
            func_80153C44(1, 0x50, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
            PlaySoundId(0xC17, 0);
            PlaySoundId(0xC7B, 0);
        }
    case 4:
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, s16, 2) = 3;
            AF(arg0, u16, 0x5C) |= 0x800;
            AF(arg0, s32, 0xE0) &= ~0x40;
        }
        break;
    }
}

extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern u8 D_sc07_003_801A68FC;
extern void GetPartWorldMatrix();
extern void LocalToWorld();
extern s32 HeadingToSV();
extern void *D_80126B78;

void func_sc07_003_801A1924(s32 arg0) {
    MATRIX m;
    SVECTOR a;
    SVECTOR b;

    GetPartWorldMatrix(arg0, 0x10, &m);
    LocalToWorld(&m, &D_sc07_003_801A68FC, &a);
    LocalToWorld(&m, &D_sc07_003_801A68FC + 8, &b);
    g_PlayerX = a.vx;
    D_80126B62 = a.vy;
    D_80126B66 = a.vz;
    AF(D_80126B78, s16, 0x12) = HeadingToSV(&b, &a);
}

extern u8 D_801152A8;
extern u8 g_Player;
extern u16 g_PlayerHitFlags;
extern s32 D_80127078;
extern u16 D_sc07_003_801A6B94;
extern s32 PosSVecDistSq();
extern void HitPlayer();

s32 func_sc07_003_801A19C8(s32 arg0) {
    MATRIX m;
    SVECTOR v;
    s32 i;
    u8 *q = &g_Player;

    if (!(g_PlayerHitFlags & 0x8000)) {
        return 0;
    }
    for (i = 0; i < 2; i++) {
        GetPartWorldMatrix(arg0, (&D_sc07_003_801A6B94)[i], &m);
        LocalToWorld(&m, &D_sc07_003_801A68FC + i * 16, &v);
        if (PosSVecDistSq(q + 4, &v) <= 0x4000) {
            HitPlayer(1, 0x401C, AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF, 0x50, &v, &D_801152A8);
            D_80127078 = arg0;
            return 1;
        }
    }
    return 0;
}

extern u8 D_sc07_003_801A64C4;

void func_sc07_003_801A1ACC(u8 *arg0) {
    AF(arg0, s16, 2) = 0x14;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
    SetScript((s32) arg0, (s32) &D_sc07_003_801A64C4);
    AF(arg0, s32, 0xD8) = SpawnActorArg(0x34C, 1, (s32) arg0);
}

extern u8 D_sc07_003_801A63FC;
extern u8 D_sc07_003_801A6504;
extern u8 D_sc07_003_801A68DC;
extern s32 FindActorByKind();
extern void func_sc07_002_8017F2D8();
extern u8 *SpawnPropFrom();

void func_sc07_003_801A1B28(u8 *arg0) {
    MATRIX m;
    SVECTOR sv;
    VECTOR v;
    u8 *obj;
    u16 *q;

    if ((AF(arg0, s32, 0xE0) & 0x10) && FindActorByKind(0x352) == 0) {
        func_sc07_002_8017F2D8();
        AF(arg0, s32, 0xE0) &= ~0x10;
    }
    if (AF(arg0, s32, 0xE0) & 0x21) {
        if (AF(arg0, s16, 0x76) <= 0) {
            AF(arg0, s16, 2) = 0x17;
            return;
        }
        AF(arg0, s16, 2) = 0x15;
        return;
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, u16, 0x72) & 0x4000) {
            AF(arg0, s32, 0x1C)++;
        }
        if (AF(arg0, u8 *, 0x90) == &D_sc07_003_801A63FC && AF(arg0, s32, 0x94) == 0) {
            obj = SpawnPropFrom(arg0, 0x22);
            if (obj != NULL) {
                GetPartWorldMatrix(arg0, (*(u16 *)&D_sc07_003_801F43C0), &m);
                LocalToWorld(&m, &D_sc07_003_801A68DC, &sv);
                AF(obj, s16, 6) = sv.vx;
                AF(obj, s16, 0xA) = sv.vy + 0x20;
                AF(obj, s16, 0xE) = sv.vz;
                AF(obj, s16, 0x34) = 0x6000;
                AF(AF(obj, u8 *, 0x20), u16, 0x2C) = 0xC010;
                m = AF(AF(arg0, u8 *, 0x20), MATRIX, 0x34);
                v.vx = v.vy = 0;
                v.vz = -0xC0000;
                RotMatrixX(0x200, &m);
                ApplyMatrixLV(&m, &v, obj + 0x10);
            }
            PlaySoundId(0xB9C, 0);
        }
        if (AF(arg0, s32, 0x1C) >= 4) {
            SetScript(arg0, &D_sc07_003_801A6504);
            AF(arg0, u16, 0x34)++;
        }
    } else if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0xEC) = 0x10000;
        q = AF(arg0, u16 *, 0xD8);
        AF(arg0, s32, 0xE8) = 0;
        AF(arg0, s32, 0xE0) |= 0x100;
        if (q != NULL && *q != 0) {
            FreeActor(q);
        }
    }
}

extern u8 D_sc07_003_801F0798;
extern u8 D_sc07_003_801F0840;
extern s32 SetForwardVelocity();

void func_sc07_003_801A1D94(u8 *arg0) {
    func_sc07_003_801A28AC();
    if (AF(arg0, s32, 0xE0) & 1) {
        SetScript((s32) arg0, (s32) &D_sc07_003_801F0798);
        AF(arg0, s16, 0x34) = 0;
    } else {
        SetScript((s32) arg0, (s32) &D_sc07_003_801F0840);
        AF(arg0, s16, 0x34) = 1;
        SetForwardVelocity((s32) arg0, 0x30000);
    }
    AF(arg0, s16, 2) = 0x16;
    AF(arg0, s32, 0xE4) = 0x30;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) | 0x40);
}

extern s32 FindActorByKind();
extern void func_sc07_002_8017F2D8();
extern s32 MoveOnGround();
extern s32 RestorePrevPos();
extern void func_sc07_003_801A24E8();

void func_sc07_003_801A1E30(u8 *arg0, s32 arg1) {
    u32 temp_v1;

    if ((AF(arg0, s32, 0xE0) & 0x10) && (FindActorByKind(0x352, arg1) == 0)) {
        func_sc07_002_8017F2D8();
        AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) & ~0x10);
    }
    if (AF(arg0, u16, 0x34) != 0) {
        temp_v1 = AF(arg0, u32, 0x94);
        if (temp_v1 < 0x33U) {
            if (temp_v1 == 0x18) {
                PlaySoundId(0xC34, 0);
            }
            if (!(MoveOnGround((s32) arg0) & 0x2000)) {
                RestorePrevPos((s32) arg0);
            }
            func_sc07_003_801A24E8((s32) arg0);
        }
    }
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s32, 0xE0) & 0x20) {
            AF(arg0, s32, 0xE8) = 0;
            AF(arg0, s32, 0xEC) = 0x10000;
            AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) | 0x100);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) & ~0x21);
    }
}

extern s16 D_sc07_003_801A6964;
extern s16 D_sc07_003_801A6966;
extern s16 D_sc07_003_801A6968;
extern s16 D_sc07_003_801A696C;
extern u8 D_sc07_003_801A6AE4;
extern u8 D_sc07_003_801F1A58;
extern s32 D_sc07_003_801F4358;
extern void func_sc07_002_8017C068();
extern void SoundCmd1();
extern void ZeroFill();

void func_sc07_003_801A1F38(u8 *arg0) {
    D_sc07_003_801A6964 = 0;
    D_sc07_003_801A6966 = -0x90;
    D_sc07_003_801A6968 = 0;
    D_sc07_003_801A696C = AF(AF(arg0, void *, 0x20), u16, 0x12) & 0xFFF;
    StartEvent((s32) arg0, (s32) &D_sc07_003_801A6AE4);
    AF(arg0, s16, 2) = 0x18;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0xE4) = 0x10000;
    func_sc07_002_8017C068();
    SetScript((s32) arg0, (s32) &D_sc07_003_801F1A58);
    SetForwardVelocity((s32) arg0, 0x30000);
    SoundCmd1(1);
    PlaySoundId(0xC73, 0);
    if (D_sc07_003_801F4358 != 0) {
        ZeroFill(D_sc07_003_801F4358, 0x38);
        D_sc07_003_801F4358 = 0;
    }
}

extern void RotTransSV();
extern u8 *SpawnPropFrom();
extern s32 IsEventDone();
extern s32 func_sc07_003_801A227C();
extern void SetProgress();
extern void func_sc07_002_80181A00();
extern u8 D_sc07_003_801A6BB8[];
extern u8 D_sc07_003_801A6BBE[];

void func_sc07_003_801A2014(u8 *arg0) {
    struct_14_5 s;
    SVECTOR v;
    MATRIX m;
    s32 flag;
    s32 i;
    s32 off;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, u32, 0x94) < 0x33) {
            if (!(MoveOnGround(arg0) & 0x2000)) {
                RestorePrevPos(arg0);
            }
            func_sc07_003_801A24E8(arg0);
        }
        if (AF(arg0, s32, 0x94) >= 0x32 && AF(arg0, s32, 0x94) < 0x6F) {
            AF(arg0, s16, 0x50) += rsin(AF(arg0, s32, 0x1C)) >> 9;
            AF(arg0, s16, 0x54) += rcos(AF(arg0, s32, 0x1C)) >> 9;
            AF(arg0, s32, 0x1C) += 0x400;
        }
        if (AF(arg0, s32, 0x94) == 0x6B) {
            PlaySoundId(0xC8C, 0);
        }
        break;
    case 1:
        GetPartWorldMatrix(arg0, 4, &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        for (i = 0, off = 0; i < 16; i++, off += 8) {
            RotTransSV((SVECTOR *)&D_sc07_003_801A6BB8[off], &v, &flag);
            s.field_0 = v.vx;
            s.field_2 = v.vy;
            s.field_4 = v.vz;
            s.field_6 = 0x38A;
            s.field_8 = i;
            s.field_A = 0;
            s.field_E = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + *(s16 *)&D_sc07_003_801A6BBE[off];
            s.field_10 = 0;
            s.field_C = 0x7FFF;
            SpawnActorFromDef(&s, arg0);
        }
        PlaySoundId(0xB9E, 0);
        AF(arg0, u16, 0x34) = 3;
        break;
    case 2:
        AF(arg0, s32, 0xD8) = SpawnActor(0x380, arg0);
        SpawnPropFrom(arg0, 0x6E);
        AF(arg0, u16, 0x34) = 3;
        break;
    }
    if (IsEventDone(arg0) == 1) {
        EndEvent(arg0);
        func_sc07_003_801A227C(arg0);
        SetProgress(0x640);
        func_sc07_002_80181A00();
    }
}

extern s32 FreeActor();
extern void DrawFadeWhite();

s32 func_sc07_003_801A227C(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    void *temp_v0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        FreeActor(temp_a0);
    }
    temp_a0_2 = AF(arg0, s32, 0xD0);
    if (temp_a0_2 != 0) {
        FreeActor(temp_a0_2);
    }
    temp_a0_3 = AF(arg0, s32, 0xD4);
    if (temp_a0_3 != 0) {
        FreeActor(temp_a0_3);
    }
    temp_v0 = AF(arg0, void *, 0xD8);
    if (temp_v0 != NULL) {
        DrawFadeWhite((s32) AF(temp_v0, u8, 0xFC), 0);
        FreeActor((s32) AF(arg0, void *, 0xD8));
    }
    return FreeActor(arg0);
}

extern void MoveObject();

s32 func_sc07_003_801A2318(u8 *arg0) {
    s32 p;

    p = AF(arg0, s32, 0xD8);
    MoveObject(p);
    if (--AF(arg0, s32, 0xF8) == 0) {
        AF(p, s32, 0x14) = 0x60000;
        PlaySoundId(4, 0xC36);
        return 1;
    }
    return 0;
}

extern void MoveObject();

void func_sc07_003_801A2384(u8 *arg0) {
    MoveObject(AF(arg0, s32, 0xD8));
}

void func_sc07_003_801A23A8(u8 *arg0) {
    SetScript((s32) arg0, AF(arg0, s32, 0xF8));
}


s32 func_sc07_003_801A23CC(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0 || (AF(arg0, u16, 0x72) & 0x4000)) {
        return 1;
    }
    return 0;
}

extern u8 D_sc07_002_80186F44;
extern u8 D_sc07_003_801A68BC;
extern s32 MoveCollide();
extern s32 StartCameraShake();
extern void func_sc07_003_801A2658();

s32 func_sc07_003_801A23FC(u8 *arg0) {
    u8 *t;
    u8 *p;

    t = AF(arg0, u8 *, 0xD0);
    p = NULL;
    if (t != NULL) {
        p = t;
        AF(AF(p, u8 *, 0x20), u16, 0x18) += 0x266;
        AF(AF(p, u8 *, 0x20), u16, 0x1A) += 0x266;
    }
    if (MoveCollide((s32) arg0) & 0x2000) {
        StartCameraShake((s32) &D_sc07_002_80186F44);
        func_sc07_003_801A2658((s32) arg0, (s32) &D_sc07_003_801A68BC);
        func_sc07_003_801A2658((s32) arg0, (s32) (&D_sc07_003_801A68BC + 8));
        if (p != NULL) {
            u8 *m = AF(p, u8 *, 0x20);
            AF(m, s16, 0x1A) = 0x3000;
            AF(m, s16, 0x18) = 0x3000;
        }
        AF(arg0, s32, 0xE0) |= 4;
        PlaySoundId(0xB52, 0);
        return 1;
    }
    return 0;
}

extern u16 g_Actors;
extern s32 DistSq();
extern void AngleToVec2();
extern s32 HeadingTo();
extern s32 CollidePath();

void func_sc07_003_801A24E8(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 t;
    s32 *q;
    u8 *p;
    s32 i;

    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x4B && DistSq(arg0 + 4, p + 4) <= 0x30FFF) {
            q = &t;
            AngleToVec2(q, HeadingTo(arg0 + 4, p + 4), 0x1C0);
            b.vx = AF(p, u16, 6);
            b.vy = AF(p, u16, 0xA);
            b.vz = AF(p, u16, 0xE);
            b.vx += t;
            b.vy = AF(arg0, u16, 0xA);
            b.vz += t >> 16;
            a.vx = AF(arg0, u16, 0x3A);
            a.vy = AF(arg0, u16, 0x3E);
            a.vz = AF(arg0, u16, 0x42);
            if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                RestorePrevPos(arg0);
                return;
            }
            AF(arg0, u16, 6) = b.vx;
            AF(arg0, u16, 0xA) = b.vy;
            AF(arg0, u16, 0xE) = b.vz;
            return;
        }
    }
}

extern s32 SpawnProp();

void func_sc07_003_801A2658(u8 *arg0, u8 *arg1) {
    MATRIX m;
    SVECTOR sv;
    struct_14_5 s;
    s32 n;
    s32 i;
    u8 *p;

    n = AF(arg1, s16, 6);
    if (AF(arg0, u8 *, 0x90) == &D_sc07_003_801F1FD8) {
        n--;
    }
    GetPartWorldMatrix(arg0, n, &m);
    LocalToWorld(&m, arg1, &sv);
    for (i = 0; i < 0x1000; i += 0x100) {
        p = (u8 *)SpawnProp(0x22);
        if (p != 0) {
            AF(p, u16, 6) = sv.vx;
            AF(p, u16, 0xA) = sv.vy;
            AF(p, u16, 0xE) = sv.vz;
            AF(p, s32, 0x10) = rcos(i) * 0x140;
            AF(p, s32, 0x18) = rsin(i) * 0x140;
            AF(p, s16, 0x34) = 0x4000;
            AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC002;
        }
    }
    s.field_6 = 0x376;
    s.field_8 = 0;
    s.field_A = 0;
    s.field_10 = 0;
    s.field_E = 0;
    s.field_C = 0x7FFF;
    s.field_0 = sv.vx;
    s.field_2 = sv.vy;
    s.field_4 = sv.vz;
    for (i = 0; i < 8; i++) {
        SpawnActorFromDef(&s, arg0);
    }
}

extern s32 SpawnProp();
extern void SpawnActorFromDef();

void func_sc07_003_801A27A4(u8 *arg0, SVECTOR *arg1) {
    MATRIX m;
    SVECTOR v;
    struct_14_5 s;
    u8 *p;
    u8 *q;
    s32 i;

    GetPartWorldMatrix(arg0, arg1->pad, &m);
    LocalToWorld(&m, arg1, &v);
    p = (u8 *)SpawnProp(0x22);
    if (p != 0) {
        AF(p, s16, 6) = v.vx;
        AF(p, s16, 0xA) = v.vy;
        AF(p, s16, 0xE) = v.vz;
        AF(p, s32, 0x10) = -AF(arg0, s32, 0x10);
        AF(p, s32, 0x18) = -AF(arg0, s32, 0x18);
        AF(p, s16, 0x34) = 0x7001;
        q = AF(p, u8 *, 0x20); AF(q, u16, 0x2C) = 0xC002;
    }
    s.field_6 = 0x376;
    s.field_8 = 0;
    s.field_A = 0;
    s.field_10 = 0;
    s.field_E = 0;
    s.field_C = 0x7FFF;
    s.field_0 = v.vx;
    s.field_2 = v.vy;
    s.field_4 = v.vz;
    for (i = 0; i < 2; i++) {
        SpawnActorFromDef(&s, arg0);
    }
}

extern u8 D_sc07_003_801AE21C[];

void func_sc07_003_801A28AC(u8 *arg0) {
    s32 p;

    if (AF(arg0, u8 *, 0x90) == &D_sc07_003_801F1FD8) {
        p = FindActorByKind(0x3D0);
        if (p != 0) {
            FreeActor(p);
        }
        D_sc07_003_801F43C0 = 3;
        ((s32 **)arg0)[8][9] = (s32)D_sc07_003_801AE21C;
    }
}

s32 func_sc07_003_801A2918(u8 *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xD8);
    var_v0 = 1;
    if (temp_v1 != NULL) {
        var_v0 = AF(temp_v1, s32, 0xE0) != 0;
    }
    return var_v0;
}

extern SVECTOR D_sc07_003_801A6C50[];
extern SVECTOR D_sc07_003_801A6C98[];
extern u8 D_800AF630[];
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
extern void SetDrawMode();
extern int rand();

void func_sc07_003_801A293C(u8 *arg0) {
    MATRIX m1;
    MATRIX m2;
    SVECTOR v;
    struct_14_5 s;
    s32 flag;
    s32 z;
    s32 z2;
    u8 *obj;
    s32 a;
    s32 b;
    s32 i;
    SVECTOR *p;
    u8 *w;
    u32 *ot;
    u8 *prim;
    u8 *dm;

    w = D_800AF630;
    if ((u16)D_sc07_003_801F43C0 == 3) {
        GetPartWorldMatrix(arg0, 3, &m1);
        GetPartWorldMatrix(arg0, 0, &m2);
        obj = arg0;
        a = (u16)D_sc07_003_801F43C0;
        b = 0;
    } else {
        obj = (u8 *)FindActorByKind(0x3D0);
        if (obj == NULL) {
            return;
        }
        GetPartWorldMatrix(obj, 0, &m1);
        GetPartWorldMatrix(obj, 1, &m2);
        a = 0;
        b = 1;
    }
    if (AF(arg0, s32, 0xE0) & 4) {
        for (i = 0; i < 3; i++) {
            if ((&D_sc07_003_801F4360)[i] % AF(arg0, s32, 0xE4) == 0) {
                if ((rand() & 1) == 0) {
                    p = &D_sc07_003_801A6C50[rand() % 9];
                    LocalToWorld(&m1, p, &v);
                    s.field_E = a;
                } else {
                    p = &D_sc07_003_801A6C98[rand() % 9];
                    LocalToWorld(&m2, p, &v);
                    s.field_E = b;
                }
                s.field_0 = v.vx;
                s.field_2 = v.vy;
                s.field_4 = v.vz;
                s.field_6 = 0x399;
                s.field_A = 0;
                s.field_8 = 0;
                s.field_10 = (s32)p;
                s.field_C = 0x7FFF;
                SpawnActorFromDef(&s, obj);
            }
        }
    }
    ot = g_WorldOtTable[AF(w, u16, 0xA3D2)];
    for (i = 0; i < 9; i++) {
        prim = g_PrimNext;
        g_PrimNext = prim + 0x14;
        prim[3] = 4;
        *(u32 *)(prim + 4) = 0x808080;
        *(u32 *)(prim + 0xC) = 0x404040;
        prim[7] = 0x52;
        LocalToWorld(&m1, &D_sc07_003_801A6C50[i], &v);
        gte_SetRotMatrix(w + 0x18);
        gte_SetTransMatrix(w + 0x18);
        gte_ldv0(&v);
        gte_rtps();
        gte_stsxy(prim + 8);
        gte_stflg(&flag);
        gte_stszotz(&z);
        if (flag & ~0x1000) continue;
        LocalToWorld(&m2, &D_sc07_003_801A6C98[i], &v);
        gte_SetRotMatrix(w + 0x18);
        gte_SetTransMatrix(w + 0x18);
        gte_ldv0(&v);
        gte_rtps();
        gte_stsxy(prim + 0x10);
        gte_stflg(&flag);
        gte_stszotz(&z2);
        if (flag & ~0x1000) continue;
        z = ((z + z2) >> 1) + 1;
        if (z >= 0x1000) z = 0x1000;
        dm = g_PrimNext;
        g_PrimNext = dm + 0xC;
        SetDrawMode(dm, 0, 0, 0x12A, 0);
        ((struct_4_4 *)prim)->field_0_b0 = ((struct_4_4 *)&ot[z])->field_0_b0;
        ((struct_4_4 *)&ot[z])->field_0_b0 = (u32)prim;
        ((struct_4_4 *)dm)->field_0_b0 = ((struct_4_4 *)&ot[z])->field_0_b0;
        ((struct_4_4 *)&ot[z])->field_0_b0 = (u32)dm;
    }
}

extern u16 D_sc07_003_801A6914;
extern u16 D_sc07_003_801A6934;
extern u8 D_sc07_003_801F43C4[];
extern u8 D_sc07_003_801F43C6[];
extern u8 D_sc07_003_801F43C8[];

void func_sc07_003_801A2E20(void) {
    u16 *a;
    u16 *b;
    s32 i;
    s32 off;
    u16 x;
    u16 y;

    a = &D_sc07_003_801A6934;
    b = &D_sc07_003_801A6914;
    i = 0;
    off = 0;
    do {
        i++;
        *(s16 *)&D_sc07_003_801F43C4[off] = (*a & 0x1F) - (*b & 0x1F);
        *(s16 *)&D_sc07_003_801F43C6[off] = ((*a >> 5) & 0x1F) - ((*b >> 5) & 0x1F);
        x = *a++;
        y = *b++;
        *(s16 *)&D_sc07_003_801F43C8[off] = ((x >> 10) & 0x1F) - ((y >> 10) & 0x1F);
        off += 6;
    } while (i < 0x10);
}

extern u8 D_sc07_003_801A6CE0;
extern s16 D_sc07_003_801F4424;

void func_sc07_003_801A2EC8(u8 *arg0) {
    u16 *dst;
    u16 *src;
    s32 i;
    s32 off;
    s16 x;
    s32 k;
    s32 pr;
    s32 pg;
    s32 pb;
    s16 r;
    s16 g;
    s16 b;

    dst = (u16 *)&D_sc07_003_801F4424;
    src = &D_sc07_003_801A6914;
    if (!(AF(arg0, s32, 0xE0) & 0x100)) {
        k = AF(arg0, s32, 0xE8);
    } else if (AF(arg0, s32, 0xEC) <= 0) {
        k = 0;
        AF(arg0, s32, 0xEC) = 0x10000;
        AF(arg0, s32, 0xE0) &= ~0x100;
    } else {
        k = AF(arg0, s32, 0xEC) -= 0x800;
    }
    i = 0;
    off = 0;
    do {
        pr = *(s16 *)&D_sc07_003_801F43C4[off] * k;
        pg = *(s16 *)&D_sc07_003_801F43C6[off] * k;
        i++;
        pb = *(s16 *)&D_sc07_003_801F43C8[off] * k;
        off += 6;
        x = *src;
        src++;
        r = x & 0x1F;
        r = (r + (pr >> 16)) & 0x1F;
        g = (x >> 5) & 0x1F;
        g = (g + (pg >> 16)) & 0x1F;
        b = (x >> 10) & 0x1F;
        b = (b + (pb >> 16)) & 0x1F;
        *dst = r | ((b << 10) | (g << 5));
        dst++;
    } while (i < 0x10);
    LoadImage((RECT *)&D_sc07_003_801A6CE0, (u32 *)&D_sc07_003_801F4424);
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

void func_sc07_003_801A3014(s32 arg0) {
    func_sc07_002_8017F578(arg0);
}

extern s32 func_sc07_002_8017F004();

void func_sc07_003_801A3034(s32 arg0) {
    func_sc07_002_8017F004(arg0);
}

extern s16 g_PlayerX;
extern s16 D_80126B66;

s32 func_sc07_003_801A3054(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = (((ratan2(AF(arg1, s16, 4) - D_80126B66, g_PlayerX - AF(arg1, s16, 0)) - 0x400) & 0xFFF) - AF(AF(arg0, void *, 0x20), s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg2;
    }
    return (0x1000 - temp_a0) < (s16) arg2;
}

extern void func_sc07_002_8018672C();

void func_sc07_003_801A30EC(void) {
    func_sc07_002_8018672C(9);
}

extern s32 func_sc07_002_80186758();

void func_sc07_003_801A310C(s32 arg0) {
    func_sc07_002_80186758(arg0);
}

void func_sc07_003_801A312C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0xA) {
        var_a0 = 0xC32;
        if (!(AF(arg0, s32, 0x1C) & 1)) {
            var_a0 = 0xC31;
        }
        PlaySoundId(var_a0, 0, arg2);
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    }
}

extern void (*D_sc07_003_801A6D8C[])();

void func_sc07_003_801A3190(u8 *arg0) {
    D_sc07_003_801A6D8C[AF(arg0, u16, 2)]();
}

extern u8 D_sc07_003_801A6D58;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();

void func_sc07_003_801A31CC(u8 *arg0) {
    s32 temp_v0;
    u8 *p;

    AF(arg0, u8 *, 0x78) = &D_sc07_003_801A6D58;
    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    p = arg0 + 0xCC;
    AF(arg0, s32, 0x58) = (s32)p | 0x50000000;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, s32, 0xF8) = AF(AF(arg0, u8 *, 0x64), s16, 0x36);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        *(u8 **)p = p + 0x10;
        p += 0x10;
        *(u8 **)p = p + 0x10;
        p += 0x10;
        *(s32 *)p = 0;
        AF(arg0, u16, 0x5C) = 0xC800;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 2) = 1;
        break;
    case 1:
        AF(arg0, s16, 0xAE) = -3;
        AF(arg0, u16, 0x5C) = 0x8800;
        AF(arg0, s16, 2) = 2;
        break;
    case 2:
        AF(arg0, u16, 0x5C) = 0x8800;
        AF(arg0, s16, 0xAE) = -0x10;
        AF(arg0, s16, 2) = 3;
        break;
    case 3:
        AF(arg0, u16, 0x5C) = 0xC000;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 2) = 4;
        break;
    case 4:
        AF(arg0, u16, 0x5C) = 0x800;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 2) = 5;
        AF(p, s16, 4) = -0x10;
        AF(p, s16, 6) = 0x10;
        AF(p, s16, 8) = -0x100;
        AF(p, s16, 0xA) = 0;
        AF(p, s16, 0xC) = -0x10;
        AF(p, s16, 0xE) = 0x10;
        break;
    }
}

extern u8 D_sc07_003_801A6DA4[];
extern void func_sc07_003_801A38E4();
extern s32 func_sc07_003_801A3BCC();

void func_sc07_003_801A3334(u8 *arg0) {
    u8 *q;
    u8 *p;
    s32 off;
    s32 i;

    q = arg0 + 0xCC;
    p = AF(arg0, u8 *, 0x64);
    off = 0;
    if (AF(p, u16, 0) != 0x322) {
        FreeActor(arg0);
        return;
    }
    if ((u16)D_sc07_003_801F43C0 == 0x11) {
        off = -2;
    }
    i = 0;
    do {
        func_sc07_003_801A38E4(p, q, D_sc07_003_801A6DA4[i] + off, i, 1);
        i++;
        q += 0x10;
    } while (i < 3);
    *(SVECTOR *)(AF(arg0, u8 *, 0x20) + 0x10) = *(SVECTOR *)(AF(p, u8 *, 0x20) + 0x10);
    AF(arg0, s32, 4) = AF(p, s32, 4);
    AF(arg0, s32, 8) = AF(p, s32, 8);
    AF(arg0, s32, 0xC) = AF(p, s32, 0xC);
    if (AF(p, s32, 0xE0) & 2) {
        AF(arg0, u16, 0x5C) &= 0xF7FF;
        func_sc07_003_801A3BCC(arg0);
        return;
    }
    AF(arg0, u16, 0x5C) |= 0x800;
}

extern void TakeDamage();
extern void GainStat3FromActor();
extern void GainStat2FromActor();

void func_sc07_003_801A3490(u8 *arg0) {
    struct_14_5 s;
    u8 *o;
    s32 d;

    o = AF(arg0, u8 *, 0x64);
    if (AF(arg0, u16, 0x5C) & 1) {
        AF(arg0, s16, 0x60) = 0x280;
        TakeDamage(arg0, arg0 + 0xCC);
        if (AF(arg0, u16, 0x5E) != 0x1D) {
            if (AF(arg0, u8, 0xC8) != 0) {
                GainStat3FromActor(arg0);
            }
            if (AF(arg0, u8, 0xC9) != 0) {
                GainStat2FromActor(arg0);
            }
        }
        d = (AF(arg0, s16, 0x60) * AF(AF(arg0, u8 *, 0x78), s16, 0x30)) >> 12;
        if (d <= 0) {
            d = 1;
        }
        AF(o, s16, 0x76) -= d;
        if (AF(o, s16, 0x76) < 0) {
            AF(o, s16, 0x76) = 0;
        }
        AF(o, s32, 0xE0) |= 0x20;
        PlaySoundId(0xB9F, 0);
        s.field_0 = AF(arg0, s16, 0x7C);
        s.field_2 = AF(arg0, s16, 0x7E);
        s.field_4 = AF(arg0, s16, 0x80);
        s.field_6 = 0x3D5;
        s.field_A = 0;
        s.field_8 = 0;
        s.field_10 = 0;
        s.field_E = 0;
        s.field_C = 0x7FFF;
        SpawnActorFromDef(&s, arg0);
        FreeActor(arg0);
    } else {
        func_sc07_003_801A38E4(o, arg0 + 0xCC, (u16)D_sc07_003_801F43C0, 3, 1);
        AF(AF(arg0, u8 *, 0x20), SVECTOR, 0x10) = AF(AF(o, u8 *, 0x20), SVECTOR, 0x10);
        AF(arg0, s32, 4) = AF(o, s32, 4);
        AF(arg0, s32, 8) = AF(o, s32, 8);
        AF(arg0, s32, 0xC) = AF(o, s32, 0xC);
    }
}

extern void func_sc07_003_801A43E8();

void func_sc07_003_801A3638(u8 *arg0) {
    struct_EC_9 *s1;
    u8 *s2;
    u16 f;

    s1 = AF(arg0, struct_EC_9 *, 0x64);
    s2 = arg0 + 0xCC;
    TickTimer(arg0);
    f = AF(arg0, u16, 0x5C);
    if (f & 1) {
        AF(arg0, u16, 0x5C) = f & 0xFFFE;
        if (AF(arg0, s32, 0x1C) == 0 && s1->field_E8 <= 0xFFFF && !(s1->field_E0 & 0x140)) {
            func_sc07_003_801A43E8(arg0);
            s1->field_2 = 0x15;
            s1->field_E0 = (s1->field_E0 | 1) & ~2;
            s1->field_5C |= 0x800;
            AF(arg0, s32, 0x1C) = 0x14;
            PlaySoundId(4, 0xB79);
            PlaySoundId(4, 0xB56);
        }
        AF(arg0, s16, 0x5E) = 0;
    }
    func_sc07_003_801A38E4(s1, s2, (*(u16 *)&D_sc07_003_801F43C0), 5, 1);
    AF(AF(arg0, u8 *, 0x20), struct_8_10, 0x10) = AF(s1->field_20, struct_8_10, 0x10);
    AF(arg0, s32, 4) = s1->field_4;
    AF(arg0, s32, 8) = s1->field_8;
    AF(arg0, s32, 0xC) = s1->field_C;
}

s32 func_sc07_003_801A419C(s32 arg0);

void func_sc07_003_801A3788(u8 *arg0) {
    u8 *s;
    u8 unused[0x20]; /* MATCH-TRICK: frame (0x20 bytes, nothing stored) */

    s = AF(arg0, u8 *, 0x64);
    if (AF(s, s16, 0x36) != AF(arg0, s32, 0xF8)) {
        FreeActor(arg0);
        return;
    }
    func_sc07_003_801A38E4(s, arg0 + 0xCC, 0x10, 6, 0);
    AF(AF(arg0, u8 *, 0x20), struct_8_10, 0x10) = AF(AF(s, u8 *, 0x20), struct_8_10, 0x10);
    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_sc07_003_801A419C(arg0) != 1) {
            return;
        }
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        if (IsPlayerHitBy(arg0) != 0) {
            AF(s, s32, 0xE0) |= 8;
        }
        AF(arg0, u16, 0x34)++;
        break;
    case 2:
        break;
    }
}

void func_sc07_003_801A38A8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(AF(arg0, void *, 0x64), s32, 0xE0) & 0x10) {
        FreeActor((s32) arg0, arg1, arg2, arg3);
    }
}

extern SVECTOR D_sc07_003_801A6CE8[];
extern void GetPartLocalMatrix();

void func_sc07_003_801A38E4(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    MATRIX m;
    SVECTOR a;
    SVECTOR b;
    SVECTOR o1;
    SVECTOR o2;
    s32 flag;
    SVECTOR *e;

    e = &D_sc07_003_801A6CE8[arg3 * 2];
    GetPartLocalMatrix(arg0, arg2, &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    if (arg4 == 0) {
        a.vx = e[0].vx;
        a.vz = 0;
        a.vy = 0;
        b.vx = e[1].vx;
        b.vz = 0;
        b.vy = 0;
        RotTransSV(&a, &o1, &flag);
        RotTransSV(&b, &o2, &flag);
        if (o1.vx > o2.vx) {
            AF(arg1, s16, 6) = o1.vx;
            AF(arg1, s16, 4) = o2.vx;
        } else {
            AF(arg1, s16, 6) = o2.vx;
            AF(arg1, s16, 4) = o1.vx;
        }
        a.vy = e[0].vy;
        a.vz = 0;
        a.vx = 0;
        b.vy = e[1].vy;
        b.vz = 0;
        b.vx = 0;
        RotTransSV(&a, &o1, &flag);
        RotTransSV(&b, &o2, &flag);
        if (o1.vy > o2.vy) {
            AF(arg1, s16, 0xA) = o1.vy;
            AF(arg1, s16, 8) = o2.vy;
        } else {
            AF(arg1, s16, 0xA) = o2.vy;
            AF(arg1, s16, 8) = o1.vy;
        }
        a.vz = e[0].vz;
        a.vy = 0;
        a.vx = 0;
        b.vz = e[1].vz;
        b.vy = 0;
        b.vx = 0;
        RotTransSV(&a, &o1, &flag);
        RotTransSV(&b, &o2, &flag);
        if (o1.vz > o2.vz) {
            AF(arg1, s16, 0xE) = o1.vz;
            AF(arg1, s16, 0xC) = o2.vz;
        } else {
            AF(arg1, s16, 0xE) = o2.vz;
            AF(arg1, s16, 0xC) = o1.vz;
        }
    } else {
        RotTransSV(e++, &o1, &flag);
        RotTransSV(e, &o2, &flag);
        if (o1.vx > o2.vx) {
            AF(arg1, s16, 6) = o1.vx;
            AF(arg1, s16, 4) = o2.vx;
        } else {
            AF(arg1, s16, 6) = o2.vx;
            AF(arg1, s16, 4) = o1.vx;
        }
        if (o1.vy > o2.vy) {
            AF(arg1, s16, 0xA) = o1.vy;
            AF(arg1, s16, 8) = o2.vy;
        } else {
            AF(arg1, s16, 0xA) = o2.vy;
            AF(arg1, s16, 8) = o1.vy;
        }
        if (o1.vz > o2.vz) {
            AF(arg1, s16, 0xE) = o1.vz;
            AF(arg1, s16, 0xC) = o2.vz;
        } else {
            AF(arg1, s16, 0xE) = o2.vz;
            AF(arg1, s16, 0xC) = o1.vz;
        }
    }
}

extern SVECTOR D_sc07_003_801A6DA8[];
extern s32 RotMatrixZYX();

s32 func_sc07_003_801A3BCC(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR rot;
    MATRIX m;
    MATRIX in[3];
    MATRIX out[3];
    u8 *o;
    u8 *q;
    s32 i;
    s32 j;
    SVECTOR *p;
    MATRIX *r;

    o = AF(arg0, u8 *, 0x64);
    q = &g_Player;
    rot.vx = AF(AF(o, u8 *, 0x20), u16, 0x10);
    rot.vy = AF(AF(o, u8 *, 0x20), u16, 0x12);
    rot.vz = AF(AF(o, u8 *, 0x20), u16, 0x14);
    m.t[0] = AF(AF(o, u8 *, 0x20), s32, 0x48);
    m.t[1] = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    m.t[2] = AF(AF(o, u8 *, 0x20), s32, 0x50);
    GetPartLocalMatrix(o, 10, &in[0]);
    GetPartLocalMatrix(o, 11, &in[1]);
    GetPartLocalMatrix(o, 12, &in[2]);
    for (j = 0; j < 8; j++) {
        rot.vy += -D_sc07_003_801F435C * 18;
        RotMatrixZYX(&rot, &m);
        gte_SetRotMatrix(&m);
        gte_ldclmv(&in[0]);
        gte_rtir();
        gte_stclmv(&out[0]);
        gte_ldclmv((u8 *)&in[0] + 2);
        gte_rtir();
        gte_stclmv((u8 *)&out[0] + 2);
        gte_ldclmv((u8 *)&in[0] + 4);
        gte_rtir();
        gte_stclmv((u8 *)&out[0] + 4);
        gte_SetTransMatrix(&m);
        gte_ldlv0(&in[0].t);
        gte_rtv0tr();
        gte_stlvnl(&out[0].t);
        gte_SetRotMatrix(&m);
        gte_ldclmv(&in[1]);
        gte_rtir();
        gte_stclmv(&out[1]);
        gte_ldclmv((u8 *)&in[1] + 2);
        gte_rtir();
        gte_stclmv((u8 *)&out[1] + 2);
        gte_ldclmv((u8 *)&in[1] + 4);
        gte_rtir();
        gte_stclmv((u8 *)&out[1] + 4);
        gte_SetTransMatrix(&m);
        gte_ldlv0(&in[1].t);
        gte_rtv0tr();
        gte_stlvnl(&out[1].t);
        gte_SetRotMatrix(&m);
        gte_ldclmv(&in[2]);
        gte_rtir();
        gte_stclmv(&out[2]);
        gte_ldclmv((u8 *)&in[2] + 2);
        gte_rtir();
        gte_stclmv((u8 *)&out[2] + 2);
        gte_ldclmv((u8 *)&in[2] + 4);
        gte_rtir();
        gte_stclmv((u8 *)&out[2] + 4);
        gte_SetTransMatrix(&m);
        gte_ldlv0(&in[2].t);
        gte_rtv0tr();
        gte_stlvnl(&out[2].t);
        p = D_sc07_003_801A6DA8;
        for (i = 0; i < 9; i++, p += 2) {
            r = &out[i / 3];
            LocalToWorld(r, p, &a);
            LocalToWorld(r, p + 1, &b);
            if (PathHitsModel(AF(q, s32, 0x20), AF(q, s32, 0x38), &a, &b)) {
                HitPlayer(1, 0x401B, (AF(AF(arg0, u8 *, 0x20), s16, 0x12) - (D_sc07_003_801F435C << 10)) & 0xFFF, 0x80, &b, &D_801152A8);
                return 1;
            }
        }
    }
    return 0;
}

extern u8 D_800D3918;
extern u8 D_sc07_003_801A68F4;
extern void UpdateModelZYX();
extern s32 PathHitsModel();

s32 func_sc07_003_801A419C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    LocalToWorld(D_80126B78 + 0x34, &D_800D3918, &a);
    LocalToWorld(D_80126B78 + 0x34, &D_sc07_003_801A68F4, &b);
    UpdateModelZYX(arg0);
    if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
        HitPlayer(1, 0x1C, AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12) & 0xFFF, 0x1E, &b, &D_801152A8);
        D_80127078 = arg0;
        return 1;
    }
    return 0;
}

extern SVECTOR D_sc07_003_801A6E38;

void func_sc07_003_801A4268(u8 *arg0) {
    MATRIX m;
    s32 f;
    u8 *p;
    s32 t;
    s32 k;
    s32 j;

    if (D_sc07_003_801F4358 != 0) {
        if ((u16)D_sc07_003_801F43C0 == 3) {
            GetPartWorldMatrix(arg0, 3, &m);
        } else {
            p = (u8 *)FindActorByKind(0x3D0);
            if (p == 0) {
                return;
            }
            GetPartWorldMatrix(p, 0, &m);
        }
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc07_003_801A6E38, (u8 *)D_sc07_003_801F4358 + 8, &f);
        f = rsin((D_800B99DA << 6) & 0x7C0);
        if (!(((s32 *)arg0)[0x38] & 0x100)) {
            t = ((s32 *)arg0)[0x3A];
        } else {
            t = ((s32 *)arg0)[0x3B];
        }
        k = (-(t * 0x60) >> 16) + 0x60;
        j = (t * 0x60) >> 16;
        AF(D_sc07_003_801F4358, s16, 0x18) = AF(D_sc07_003_801F4358, s16, 0x1A) = ((f << 10) >> 12) + 0x800;
        ((u8 *)D_sc07_003_801F4318)[1] = 0;
        ((u8 *)D_sc07_003_801F4318)[2] = (((s16)k * f) >> 12) + k;
        ((u8 *)D_sc07_003_801F4318)[0] = ((j * f) >> 12) + j;
    }
}

void func_sc07_003_801A43E8(u8 *arg0) {
    u8 *p;

    switch (AF(arg0, u16, 0x5E)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 35:
        PlaySoundId(0xC33, 0);
        AF(AF(arg0, u8 *, 0x64), s32, 0xE8) += 0x2000;
        break;
    case 11:
    case 12:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        PlaySoundId(0xC33, 0);
        AF(AF(arg0, u8 *, 0x64), s32, 0xE8) += 0x4000;
        break;
    case 36:    /* its own arm, with the same body as the arm above: the original has both copies (LuciDin's ruling, 14 Nov) */
        PlaySoundId(0xC33, 0);
        AF(AF(arg0, u8 *, 0x64), s32, 0xE8) += 0x4000;
        break;
    default:
        AF(AF(arg0, u8 *, 0x64), s32, 0xE8) += 0x2000;
        break;
    }
    p = AF(arg0, u8 *, 0x64);
    if (AF(p, s32, 0xE8) > 0x10000) {
        AF(p, s32, 0xE8) = 0x10000;
    }
}

extern void (*D_sc07_003_801A6F00[])();

void func_sc07_003_801A44C8(u8 *arg0) {
    D_sc07_003_801A6F00[AF(arg0, u16, 2)]();
}

void func_sc07_003_801A4504(u8 *arg0) {
    s32 o;
    u8 *p;
    u16 t;

    o = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(o, 0);
    AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x1A) = 1;
    AF(p, s16, 0x18) = 1;
    t = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, u16, 2)++;
    AF(arg0, u16, 0x10A) = t;
}

extern s16 D_801152AA;
extern s16 D_801152AC;
extern s32 FindGround();
extern void func_sc07_003_801A4680();

void func_sc07_003_801A4590(u8 *arg0) {
    SVECTOR v;
    u8 *q;

    q = AF(arg0, u8 *, 0x64);
    if (AF(q, s16, 0x36) != AF(arg0, s16, 0x10A)) {
        FreeActor(arg0);
        return;
    }
    v.vx = AF(q, s16, 6);
    v.vy = AF(q, s16, 0xA) - 0x10;
    v.vz = AF(q, s16, 0xE);
    if (FindGround(&v) != 0) {
        AF(arg0, s16, 6) = v.vx;
        AF(arg0, s16, 0xA) = v.vy;
        AF(arg0, s16, 0xE) = v.vz;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = ratan2(D_801152AC, D_801152AA) + 0x400;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ratan2(*(s16 *)&D_801152A8, D_801152AA);
        func_sc07_003_801A4680(arg0);
    }
}

extern void DrawPrimFT4Mtx();

void func_sc07_003_801A4680(u8 *arg0) {
    struct_3C_5 p;
    s32 i;
    s32 j;

    p.field_30 = 0x808080;
    p.field_34 = 0x50000000;
    p.field_38 = 0x8F;
    p.field_0[0].field_2 = p.field_0[1].field_2 = p.field_0[2].field_2 = p.field_0[3].field_2 = -0x40;
    p.field_0[0].field_4 = p.field_0[1].field_4 = p.field_0[2].field_4 = p.field_0[3].field_4 = 0;
    p.field_20[0].field_2 = p.field_20[1].field_2 = p.field_20[2].field_2 = p.field_20[3].field_2 = 0x80;
    for (i = 0; i < 8; i++) {
        p.field_0[0].field_0 = p.field_0[1].field_0 = p.field_0[2].field_0 = p.field_0[3].field_0 = -0x40;
        p.field_20[0].field_0 = p.field_20[1].field_0 = p.field_20[2].field_0 = p.field_20[3].field_0 = 0xB80;
        p.field_0[2].field_2 += 0x10;
        p.field_0[3].field_2 += 0x10;
        p.field_20[2].field_2 += 0xF;
        p.field_20[3].field_2 += 0xF;
        for (j = 0; j < 8; j++) {
            p.field_0[1].field_0 += 0x10;
            p.field_0[3].field_0 += 0x10;
            p.field_20[1].field_0 += 0xF;
            p.field_20[3].field_0 += 0xF;
            DrawPrimFT4Mtx(&p, AF(arg0, u8 *, 0x20) + 0x34);
            p.field_0[0].field_0 = p.field_0[1].field_0;
            p.field_0[2].field_0 = p.field_0[3].field_0;
            p.field_20[0].field_0 = p.field_20[1].field_0;
            p.field_20[2].field_0 = p.field_20[3].field_0;
        }
        p.field_0[0].field_2 = p.field_0[2].field_2;
        p.field_0[1].field_2 = p.field_0[3].field_2;
        p.field_20[0].field_2 = p.field_20[2].field_2;
        p.field_20[1].field_2 = p.field_20[3].field_2;
    }
}

extern void (*D_sc07_003_801A7308[])();

void func_sc07_003_801A4810(u8 *arg0) {
    D_sc07_003_801A7308[AF(arg0, u16, 2)]();
}

void func_sc07_003_801A484C(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg1 & 0xFFFF;
    temp_v0 = SpawnActorArg(0x378, temp_s0, arg0);
    if ((temp_v0 != 0) && ((u32) temp_s0 < 7U)) {
        func_sc07_003_801A484C(temp_v0, (arg1 + 1) & 0xFFFF);
    }
}

extern u8 D_sc07_003_801A6F08;
extern u8 D_sc07_003_801A7148;
extern s16 D_sc07_003_801A7314[];
extern void func_8001CA1C();
extern void SyncModelPos();

void func_sc07_003_801A48A8(u8 *arg0) {
    u8 *m;
    s32 p;
    s16 v;

    m = (u8 *)AllocActorModel(arg0);
    if (m == NULL) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = m;
    func_8001CA1C(m, &D_sc07_003_801A6F08);
    SetScript(arg0, &D_sc07_003_801A7148);
    v = 0x5000 - ((AF(arg0, u16, 0x70) & 0xF) << 11);
    AF(m, s16, 0x1C) = v;
    AF(m, s16, 0x1A) = v;
    AF(m, s16, 0x18) = v;
    AF(m, s32, 4) |= 0x50000000;
    AF(m, u16, 0x2C) |= 0x90;
    AF(arg0, u16, 0x10A) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    if (!(AF(arg0, u16, 0x70) & 0xF)) {
        AF(m, u16, 0x14) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
        AF(m, u16, 0x14) += D_sc07_003_801A7314[AF(arg0, u16, 0x70) >> 15];
        UpdateModelZYX(arg0);
        m = arg0 + 0xE4;
        AF(arg0, s32, 0x94) = rand() % 16;
        AF(arg0, s32, 0x1C) = 0xC;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = m;
        AF(arg0, s16, 0xE8) = 0x80;
        AF(arg0, s16, 0xE6) = 0x80;
        AF(arg0, s16, 0xE4) = 0x80;
        p = SpawnActorArg(0x378, 1, arg0);
        if (p != 0) {
            func_sc07_003_801A484C(p, 2);
        }
        AF(arg0, u16, 2)++;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), s32, 0x80) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x80);
    AF(arg0, s32, 0x94) = rand() % 16;
    AF(arg0, u16, 2) = 2;
    SyncModelPos(arg0);
}

void func_sc07_003_801A4D58(u8 *arg0, s32 arg1);
s32 func_sc07_003_801A4DFC(u8 *arg0);
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern s32 GroundDistSqTo();
extern s32 HeadingToPlayer();

void func_sc07_003_801A4A78(u8 *arg0) {
    u8 *p;
    u8 *q;
    s32 r;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        func_sc07_003_801A4D58(arg0, 0xFFF00000);
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0xC;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        r = HeadingToPoint(arg0 + 4, &D_sc07_003_801F4310);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x14), r, 8);
        func_sc07_003_801A4D58(arg0, 0xFFF00000);
        if (GroundDistSqTo(arg0, &D_sc07_003_801F4310) <= 0x4000 || TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x50;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        r = HeadingToPlayer(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x14), r, 0x18);
        func_sc07_003_801A4D58(arg0, 0xFFF00000);
        if (AF(arg0, s32, 0x1C) == 0x10) {
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x80;
            p = AF(AF(arg0, u8 *, 0x20), u8 *, 0x80);
            AF(p, s16, 0) = AF(p, s16, 2) = AF(p, s16, 4) = 0x80;
            AF(arg0, u16, 0x34)++;
        }
    case 3:
        if (AF(arg0, s32, 0x1C) <= 0x10) {
            p = AF(AF(arg0, u8 *, 0x20), u8 *, 0x80);
            AF(p, s16, 0) -= 8;
            AF(p, s16, 2) -= 8;
            AF(p, s16, 4) -= 8;
        }
        if (TickTimer(arg0) != 0) {
            FreeActor(arg0);
            return;
        }
        break;
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        q = (u8 *)SpawnPropFrom(arg0, 0x6F);
        if (q != NULL) {
            AF(q, s32, 0x10) = -(AF(arg0, s32, 0x10) * 2);
            AF(q, s32, 0x14) = AF(arg0, s32, 0x14);
            AF(q, s32, 0x18) = -(AF(arg0, s32, 0x18) * 2);
        }
    }
    func_sc07_003_801A4DFC(arg0);
    if (MoveCollide(arg0) != 0) {
        FreeActor(arg0);
    }
}

extern void SyncModelPos();

void func_sc07_003_801A4CF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x64);
    if (AF(temp_a1, s16, 0x36) != AF(arg0, s16, 0x10A)) {
        FreeActor((s32) arg0, (s32) temp_a1, arg2, arg3);
        return;
    }
    AF(arg0, s32, 4) = (s32) AF(temp_a1, s32, 0x38);
    AF(arg0, s32, 8) = (s32) AF(temp_a1, s32, 0x3C);
    AF(arg0, s32, 0xC) = (s32) AF(temp_a1, s32, 0x40);
    SyncModelPos();
}

extern MATRIX GsIDMATRIX;

void func_sc07_003_801A4D58(u8 *arg0, s32 arg1) {
    MATRIX m;
    VECTOR v;

    m = GsIDMATRIX;
    v.vy = 0;
    v.vx = 0;
    v.vz = arg1;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x14), &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

extern SVECTOR D_sc07_003_801A7318[];
extern s32 HeadingToPlayer();

s32 func_sc07_003_801A4DFC(u8 *arg0) {
    MATRIX m;
    SVECTOR a;
    SVECTOR b;
    s32 i;
    u8 *q;

    m = GsIDMATRIX;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x14), &m);
    m.t[0] = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
    m.t[1] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    m.t[2] = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
    q = &g_Player;
    for (i = 0; i < 10; i += 2) {
        LocalToWorld(&m, &D_sc07_003_801A7318[i], &a);
        LocalToWorld(&m, &D_sc07_003_801A7318[i + 1], &b);
        if (PathHitsModel(AF(q, s32, 0x20), AF(q, s32, 0x38), &a, &b) != 0) {
            HitPlayer(1, 0x4201, HeadingToPlayer(arg0), 0x32, &b, &D_801152A8);
            return 1;
        }
    }
    return 0;
}

extern void (*D_sc07_003_801A73B4[])();

void func_sc07_003_801A4F78(u8 *arg0) {
    D_sc07_003_801A73B4[AF(arg0, u16, 2)]();
}


void func_sc07_003_801A4FB4(u8 *p, s32 d0) {
    s8 d = d0;
    u8 lim;

    if (d == 0) return;
    if (d > 0) {
        lim = ~d;
        if (p[0] <= lim) p[0] += d;
        if (p[1] <= lim) p[1] += d;
        if (p[2] <= lim) p[2] += d;
    } else {
        lim = -d;
        if (p[0] >= lim) p[0] += d;
        if (p[1] >= lim) p[1] += d;
        if (p[2] >= lim) p[2] += d;
    }
}

extern void (*D_sc07_003_801A73BC[])();

void func_sc07_003_801A505C(u8 *arg0) {
    D_sc07_003_801A73BC[AF(arg0, u16, 2)]();
}

extern s32 SetState();

s32 func_sc07_003_801A5098(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    SetState(arg0, 1);
    return PlaySoundId(0xB58, 0);
}

extern s32 SetState();

void func_sc07_003_801A50D4(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    SetState(arg0, 2);
}

extern void (*D_sc07_003_801A73C4[])();

void func_sc07_003_801A50FC(u8 *arg0) {
    D_sc07_003_801A73C4[AF(arg0, u16, 2)]();
}

extern s32 D_sc07_003_801F4484[];
extern s32 D_sc07_003_801F4488;
extern s32 D_sc07_003_801F448C;
extern s32 D_sc07_003_801F4490;
extern u16 D_sc07_003_801A73D4[];

void func_sc07_003_801A5138(u8 *arg0) {
    u8 *m;
    s32 r;
    s32 a;
    u8 *p;
    u8 *q;

    p = (u8 *)AllocActorModel(arg0);
    AF(arg0, u8 *, 0x20) = p;
    if (p == NULL) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(p, 0);
    AF(AF(arg0, u8 *, 0x20), u16, 0x10) = D_sc07_003_801A73D4[AF(arg0, s16, 0x70)];
    m = AF(arg0, u8 *, 0x20);
    r = rand() % 256;
    a = AF(arg0, s16, 0xFC);
    if (rand() & 1) {
        AF(m, s16, 0x12) = a + r;
    } else {
        AF(m, s16, 0x12) = a - r;
    }
    UpdateModelZYX(arg0);
    AF(arg0, s16, 0xFE) = rand() % 32 + 0x20;
    AF(arg0, u16, 0x10A) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, u16, 2)++;
    q = (u8 *)AllocActorSprite();
    if (q != NULL) {
        AF(arg0, u8 *, 0xCC) = q;
        D_sc07_003_801F4484[0] = 0xC0C0C0;
        D_sc07_003_801F4488 = 0;
        D_sc07_003_801F448C = 0;
        D_sc07_003_801F4490 = 0;
        SetShapeCircle(D_sc07_003_801F4484, 0x60);
        func_8001CD9C(q, D_sc07_003_801F4484);
        AF(q, u16, 0x2C) = 0xC010;
        AF(q, s32, 4) |= 0x50800000;
        AF(q, u16, 8) = AF(arg0, u16, 6);
        AF(q, u16, 0xA) = AF(arg0, u16, 0xA);
        AF(q, u16, 0xC) = AF(arg0, u16, 0xE);
    }
}

extern void DrawPrimG4ScreenDithered();
extern MATRIX D_800AF648;

void func_sc07_003_801A52DC(u8 *arg0) {
    struct_34_7 p;
    MATRIX m;
    s32 z[4];
    s32 flag;
    s32 i;
    s32 a;
    s32 b;
    struct_8_7 *v;

    if (AF(AF(arg0, u8 *, 0x64), s16, 0x36) != AF(arg0, s16, 0x10A)) {
        if (AF(arg0, u8 *, 0xCC) != 0) {
            ZeroFill(AF(arg0, u8 *, 0xCC), 0x38);
        }
        FreeActor(arg0);
        return;
    }
    AF(arg0, s32, 0xE0) -= 0x80;
    if (AF(arg0, s32, 0xE0) < -0x400) {
        AF(arg0, s32, 0xE0) = -0x400;
    }
    p.field_0[0].field_0 = -0x10;
    p.field_0[1].field_0 = 0x10;
    p.field_0[2].field_4 = p.field_0[3].field_4 = AF(arg0, s32, 0xE0);
    p.field_0[0].field_4 = p.field_0[1].field_4 = p.field_0[0].field_2 = p.field_0[1].field_2 = p.field_0[2].field_0 = p.field_0[3].field_0 = p.field_0[2].field_2 = p.field_0[3].field_2 = 0;
    m = GsIDMATRIX;
    RotMatrixY(AF(arg0, s16, 0xFE), &m);
    LocalToWorld(&m, &p.field_0[2], &p.field_0[2]);
    m = GsIDMATRIX;
    RotMatrixY(-AF(arg0, s16, 0xFE), &m);
    LocalToWorld(&m, &p.field_0[3], &p.field_0[3]);
    gte_SetRotMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(arg0, u8 *, 0x20) + 0x34);
    RotTransSV(&p.field_0[0], &p.field_0[0], &flag);
    RotTransSV(&p.field_0[1], &p.field_0[1], &flag);
    RotTransSV(&p.field_0[2], &p.field_0[2], &flag);
    RotTransSV(&p.field_0[3], &p.field_0[3], &flag);
    gte_SetRotMatrix(&D_800AF648);
    gte_SetTransMatrix(&D_800AF648);
    i = 0;
    v = p.field_0;
    do {
        gte_ldv0(v);
        gte_rtps();
        gte_stsxy(v);
        gte_stflg(&flag);
        gte_stszotz(&z[i]);
        if (flag & ~0x1000) {
            return;
        }
        i++;
        v++;
    } while (i < 4);
    a = z[2];
    if (z[3] < a) {
        a = z[3];
    }
    b = z[0];
    if (z[1] < b) {
        b = z[1];
    }
    if (a < b) {
        b = a;
    }
    p.field_20[1] = p.field_20[0] = 0x808080;
    p.field_0[0].field_4 = b;
    p.field_20[2] = 0;
    p.field_20[3] = 0;
    p.field_30 = 0x50000000;
    DrawPrimG4ScreenDithered(&p);
}

extern void (*D_sc07_003_801A73F4[])();

void func_sc07_003_801A5638(u8 *arg0) {
    D_sc07_003_801A73F4[AF(arg0, u16, 2)]();
}

extern void DrawPrimLineG2Mtx();
extern s32 MoveCollideAt();

void func_sc07_003_801A5674(u8 *arg0) {
    SVECTOR sv;
    MATRIX m;
    struct_1C_9 p;
    u16 c;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        FreeActor(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0x10A) == AF(AF(arg0, u8 *, 0x64), s16, 0x36)) {
            GetPartWorldMatrix(AF(arg0, u8 *, 0x64), AF(arg0, s16, 0xFC), &m);
            LocalToWorld(&m, AF(arg0, s32, 0xDC), &sv);
            AF(arg0, s16, 6) = sv.vx;
            AF(arg0, s16, 0xA) = sv.vy;
            AF(arg0, s16, 0xE) = sv.vz;
        }
        AF(arg0, s32, 0xE4) += AF(arg0, s32, 0xE8);
        if (AF(arg0, s32, 0xE4) >= AF(arg0, s32, 0xE0)) {
            AF(arg0, s32, 0xE4) = AF(arg0, s32, 0xE0);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        sv.vz = 0;
        sv.vx = 0;
        sv.vy = AF(arg0, s32, 0xE4);
        if (MoveCollideAt(arg0, &sv) & 0x2000) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        AF(arg0, s32, 0xEC) += 0x10;
        if (AF(arg0, s32, 0xEC) >= AF(arg0, s32, 0xE4)) {
            FreeActor(arg0);
            return;
        }
        break;
    }
    p.field_8.vz = 0;
    p.field_8.vx = 0;
    p.field_0.vz = 0;
    p.field_0.vx = 0;
    p.field_18 = 0x50000000;
    c = AF(arg0, u16, 0x34);
    p.field_10 = 0x808080;
    p.field_14 = 0x101010;
    if (c < 2) {
        p.field_0.vy = AF(arg0, s32, 0xE4);
        p.field_8.vy = 0;
    } else {
        p.field_0.vy = AF(arg0, s32, 0xE4);
        p.field_8.vy = AF(arg0, s32, 0xEC);
    }
    DrawPrimLineG2Mtx(&p, AF(arg0, u8 *, 0x20) + 0x34);
}

extern void (*D_sc07_003_801A73FC[])();

void func_sc07_003_801A5860(u8 *arg0) {
    D_sc07_003_801A73FC[AF(arg0, u16, 2)]();
}

extern void (*D_sc07_003_801A7414[])();

void func_sc07_003_801A589C(u8 *arg0) {
    D_sc07_003_801A7414[AF(arg0, u16, 2)]();
}

extern u8 D_800D3918;
extern u16 D_sc07_003_801A7422;
extern u16 D_sc07_003_801A7424;
extern u16 D_sc07_003_801A7426;
extern u16 D_sc07_003_801A742E;
extern u16 D_sc07_003_801A7430;
extern u16 D_sc07_003_801A7432;
extern void (*D_sc07_003_801A7434[])();
extern void UpdateModelZYX();

void func_sc07_003_801A58D8(u8 *arg0) {
    MATRIX m;
    SVECTOR v;
    u8 *p;
    u8 *q;

    D_sc07_003_801A7434[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        p = AF(arg0, u8 *, 0x64);
        q = AF(AF(p, u8 *, 0x20), u8 *, 0x20);
        D_sc07_003_801A7422 = AF(q, u16, 0xD2);
        D_sc07_003_801A7424 = AF(q, u16, 0xD4);
        D_sc07_003_801A7426 = AF(q, u16, 0xD6);
        D_sc07_003_801A742E = AF(q, u16, 0xDE);
        D_sc07_003_801A7430 = AF(q, u16, 0xE0);
        D_sc07_003_801A7432 = AF(q, u16, 0xE2);
        GetPartWorldMatrix(p, 0x11, &m);
        LocalToWorld(&m, &D_800D3918, &v);
        AF(arg0, s16, 6) = v.vx;
        AF(arg0, s16, 0xA) = v.vy;
        AF(arg0, s16, 0xE) = v.vz;
        UpdateModelZYX(arg0);
    }
}

extern void (*D_sc07_003_801A743C[])();

void func_sc07_003_801A59D4(u8 *arg0) {
    D_sc07_003_801A743C[AF(arg0, u16, 2)]();
}

extern u8 D_sc07_003_801A7368;
extern u8 D_sc07_003_801A7374;
extern void StartSpriteAnim();

void func_sc07_003_801A5A10(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_sc07_003_801A7368;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x5A;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = 0x3000;
    AF(temp_v1, s16, 0x18) = 0x3000;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc07_003_801A7374);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern void FreeProp();
extern void MoveProp();
extern s32 StepSpriteAnim();

void func_sc07_003_801A5A9C(s32 arg0, s32 arg1) {
    MoveProp(arg0, arg1);
    if (StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        FreeProp(arg0);
    }
}

extern u8 D_sc07_003_801F4448;
extern void func_8001CD50();
extern struct_4_3 D_sc07_003_801A01CC;
extern struct_4_3 D_sc07_003_801A01D0;
extern struct_4_3 D_sc07_003_801F4444;

void func_sc07_003_801A5AE0(u8 *arg0) {
    func_8001CD50(AF(arg0, u8 *, 0x20), &D_sc07_003_801F4444);
    AF(arg0, u16, 0xA) -= 0x100;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    SetShapeCircle(&D_sc07_003_801F4444, 0x10);
    D_sc07_003_801F4444 = D_sc07_003_801A01CC;
    *(struct_4_3 *)&D_sc07_003_801F4448 = D_sc07_003_801A01D0;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2)++;
}

extern u8 D_sc07_003_801F4448;
extern void SetShapeCircle();

void func_sc07_003_801A5BBC(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc07_003_801A4FB4((s32) &D_sc07_003_801F4448, -4);
        SetShapeCircle((s32) (&D_sc07_003_801F4448 - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    FreeProp((s32) arg0);
}

extern u8 D_sc07_003_801F28F8;
extern u8 D_sc07_003_801F30A8;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();

void func_sc07_003_801A5C34(s32 arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc07_003_801F28F8);
    temp_v0_2 = AllocActorModel();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 == 0) {
        RejectSpawn(arg0);
        AF(AF(arg0, s32, 0x20), s16, 0) = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc07_003_801F30A8);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u8, 0xC0) = 0;
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x90);
    temp_a1 = arg0 + 0xFC;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = temp_a1;
    temp_v1_3 = AF(arg0, s32, 0xCC);
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = AF(arg0, s32, 0xCC);
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x90);
    AF(AF(arg0, s32, 0xCC), s32, 0x80) = temp_a1;
    AF(arg0, s16, 0xFC) = 0x100;
    AF(arg0, s16, 0xFE) = 0x100;
    AF(arg0, s16, 0x100) = 0x100;
    AF(arg0, s16, 0x102) = -2;
    func_sc07_003_801A5098(arg0);
}

extern void func_sc07_003_801A50D4();

void func_sc07_003_801A5D4C(u8 *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_3;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, u16, 0x18);
    temp_a1 = AF(arg0, void *, 0xCC);
    if (temp_v1 < 0x5000U) {
        AF(temp_a2, u16, 0x18) = (u16) (temp_v1 + 0x100);
        temp_v0 = AF(arg0, void *, 0x20);
        temp_v1_2 = AF(temp_v0, u16, 0x18);
        AF(temp_v0, u16, 0x1C) = temp_v1_2;
        AF(temp_v0, u16, 0x1A) = temp_v1_2;
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x12) = (u16) (AF(temp_v1_3, u16, 0x12) + 0x100);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) - 0x100);
        AF(temp_a1, s16, 8) = (s16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x50));
        AF(temp_a1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52));
        AF(temp_a1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54));
        AF(temp_a1, u16, 0x18) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        AF(temp_a1, u16, 0x1A) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1A);
        AF(temp_a1, u16, 0x1C) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1C);
        return;
    }
    func_sc07_003_801A50D4();
}

void func_sc07_003_801A5E44(u8 *arg0, s32 arg1) {
    u16 temp_s1;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s1 = AF(arg0, u16, 0x34);
    switch (temp_s1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u8, 0xFC) + 0x10;
        AF(arg0, u8, 0xFC) = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 0xF1U) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x80000000);
            temp_v1_2 = AF(arg0, void *, 0xCC);
            AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x80000000);
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0xE0) = (s32) temp_s1;
        }
        break;
    }
    DrawFadeWhite((s32) AF(arg0, u8, 0xFC), 0);
}

extern s32 FreeActor();
extern void DrawFadeWhite();

void func_sc07_003_801A5F18(u8 *arg0, s32 arg1) {
    u32 temp_v1;
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0xFC) - 3;
    temp_v1 = temp_v0 & 0xFF;
    AF(arg0, u8, 0xFC) = temp_v0;
    if (temp_v1 >= 9U) {
        DrawFadeWhite((s32) temp_v1, 0);
        return;
    }
    FreeActor((s32) arg0, arg1);
}

void func_sc07_003_801A5F6C(u8 *arg0) {
    s32 r;
    u16 t;

    r = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(r, 0);
    AF(arg0, s32, 0xE0) = rand() % 64 + 0x20;
    AF(arg0, s32, 0xE8) = rand() % 5 + 4;
    AF(arg0, s32, 0x48) = 0xC000;
    t = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
    AF(arg0, u16, 2)++;
    AF(arg0, u16, 0x10A) = t;
}

extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern s16 D_80126BE0;
extern s16 D_80126BE2;
extern s16 D_80126BE4;
extern u8 D_sc07_003_801A7404;
extern u8 D_sc07_003_801F3208;
extern void InitModel();

void func_sc07_003_801A6038(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_003_801F3208);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc07_003_801A7404 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 6) = 0;
    D_80126B62 = -0x120;
    D_80126BE2 = -0x120;
    g_PlayerX = 0;
    D_80126BE0 = 0;
    AF(arg0, s16, 0xE) = -0x462;
    D_80126B66 = -0x462;
    D_80126BE4 = -0x462;
    AF(arg0, s16, 0xA) = -0x100;
    AF(arg0, s32, 0x14) = 0xFFFA0000;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern void CarryPlayerExact();

void func_sc07_003_801A6108(u8 *arg0) {
    if (AF(arg0, u8, 0x74) != 0) {
        CarryPlayerExact();
    }
}

extern u8 D_sc07_003_801A741C;
extern u8 D_sc07_003_801F43B4;

void func_sc07_003_801A6138(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc07_003_801F43B4);
    AF(AF(arg0, s32, 0x20), s32 *, 0x20) = &D_sc07_003_801A741C;
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_003_801A61C4(s32 arg0) {
    if (TargetInFront(arg0, 0x280) != 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(arg0, 8);
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12), 8);
    }
}

extern s32 D_sc07_003_801F44C4[];
extern s32 D_sc07_003_801F44C8;
extern s32 D_sc07_003_801F44CC;
extern s32 D_sc07_003_801F44D0;
extern void func_8001CA88();

void func_sc07_003_801A623C(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    D_sc07_003_801F44C4[0] = 0x808080;
    D_sc07_003_801F44C8 = 0;
    D_sc07_003_801F44CC = 0;
    D_sc07_003_801F44D0 = 0;
    SetShapeCircle(D_sc07_003_801F44C4, 0x60);
    func_8001CA88(AF(arg0, s32, 0x20), D_sc07_003_801F44C4);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 1;
    AF(temp_v1_2, s16, 0x1A) = 1;
    AF(temp_v1_2, s16, 0x18) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xAAA;
    AF(AF(arg0, u32, 0x20), u16, 0x2E) = 0xC010;
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_003_801A6334(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *p;

    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0xE00;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0xE00;
    p = D_sc07_003_801F44C4;
    *p += 0xFFFBFBFC;
    if ((s16) AF(AF(arg0, u8 *, 0x20), u16, 0x18) >= 0x7001) {
        FreeActor((s32) arg0, (s32) arg0, arg2, arg3);
    }
}
