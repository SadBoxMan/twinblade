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
typedef struct {
    s16 field_0; u8 field_2[0xC]; s16 field_E; u8 field_10[0x20];
    struct_2_3 field_30[8];
    union { s16 m0[8]; struct_2_3 m1[8]; } field_40;
} struct_50_2;
typedef struct { u16 field_0; u16 field_2; u8 field_4[28]; } struct_20_11;
typedef struct { u8 field_0; } struct_1;
typedef struct { s8 field_0; u8 field_1; } struct_2_4;
typedef struct { u32 *field_0; u8 field_4[8]; u32 *field_C; u8 field_10[4]; } struct_14_10;
typedef struct { u16 field_0; } struct_2_5;
typedef struct { u32 field_0; u32 field_4; s16 field_8, field_A; u8 field_C, field_D; u16 field_E; s16 field_10, field_12; } struct_14_11;
typedef struct { s16 field_0, field_2; } struct_4_12;
typedef struct { char *field_0; s32 field_4; } struct_8_19;
typedef struct { u32 field_0, field_4, field_8, field_C; u32 *field_10; } struct_14_12;
extern void (*D_sc02_009_801E663C[])();

void func_sc02_009_801E4C64(u8 *arg0) {
    D_sc02_009_801E663C[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_009_801E5DB4;
extern u8 D_sc02_009_801E9F0C;
extern u8 D_sc02_005_80196BBC;
extern s32 SetupActor();
extern void SetScript();
extern s32 func_80143994();

void func_sc02_009_801E4CA0(s32 arg0) {
    *(s32 **)&D_sc02_005_80196BBC = &D_sc02_009_801E9F0C;
    if (SetupActor(arg0, (s32) (&D_sc02_005_80196BBC - 4)) != 0) {
        SetScript(arg0, (s32) &D_sc02_009_801E5DB4);
        AF(arg0, s32, 0xCC) = func_80143994(arg0, 0x4000);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern s32 D_801270C8;
extern u8 D_sc02_005_8019702C;
extern u8 D_sc02_009_801E5E0C;
extern s32 OpenMessage();
extern void SetScript();

void func_sc02_009_801E4D14(u8 *arg0) {
    if (D_801270C8 == 3) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_8019702C);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5E0C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_009_801E5DB4;
extern void func_sc02_009_801E53E0();
extern s32 GetMessageAnswer();
extern void CloseMessage();

void func_sc02_009_801E4D7C(u8 *arg0) {
    func_sc02_009_801E53E0();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 4;
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5DB4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_801970B0;
extern u8 D_sc02_009_801E60D4;

void func_sc02_009_801E4DF0(u8 *arg0) {
    if (D_801270C8 == 5) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_801970B0);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E60D4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E4E58(u8 *arg0) {
    func_sc02_009_801E53E0();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 6;
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E4EC0(u8 *arg0) {
    u8 *s1 = AF(arg0, u8 *, 0x20);
    func_sc02_009_801E53E0(arg0);
    if (D_801270C8 == 7) {
        if (--AF(arg0, s32, 0x1C) != -1) {
            AF(s1, u16, 0x18) = AF(s1, u16, 0x1C) -= 0x200;
            AF(s1, u16, 0x1A) += 0x200;
            AF(s1, u16, 0x2C) |= 0x10;
            return;
        }
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 0xE) += 0x100;
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_009_801E4F6C(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        temp_v0_2 = AF(temp_a1, u16, 0x1C) + 0x200;
        AF(temp_a1, u16, 0x1C) = temp_v0_2;
        AF(temp_a1, u16, 0x18) = temp_v0_2;
        AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) - 0x200);
        AF(temp_a1, u16, 0x2C) = (u16) (AF(temp_a1, u16, 0x2C) | 0x10);
        return;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern u8 D_sc02_005_801971DC;
extern u8 D_sc02_009_801E5F04;

void func_sc02_009_801E4FC8(u8 *arg0) {
    if (D_801270C8 == 9) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_801971DC);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5F04);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5030(u8 *arg0) {
    func_sc02_009_801E53E0();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 0xA;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_009_801E5FFC;

void func_sc02_009_801E5094(s32 arg0) {
    func_sc02_009_801E53E0();
    if (D_801270C8 == 0xD) {
        SetScript(arg0, (s32) &D_sc02_009_801E5FFC);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_009_801E626C;

void func_sc02_009_801E50F0(s32 arg0) {
    func_sc02_009_801E53E0();
    if (D_801270C8 == 0xF) {
        SetScript(arg0, (s32) &D_sc02_009_801E626C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_80197480;
extern void func_sc02_005_8017E424();

void func_sc02_009_801E514C(s32 arg0) {
    func_sc02_009_801E53E0();
    if (D_801270C8 == 0x10) {
        func_sc02_005_8017E424();
        SetScript(arg0, (s32) &D_sc02_009_801E60D4);
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_80197480);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_801974DC;
extern void func_sc02_005_8017E454();

void func_sc02_009_801E51C0(u8 *arg0) {
    func_sc02_009_801E53E0();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5FFC);
        func_sc02_005_8017E454();
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_801974DC);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5240(u8 *arg0) {
    if (AF(arg0, s32, 0x94) >= 0x19) {
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5DB4);
    }
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        AF(arg0, s32, 0x1C) = 0x18;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E52BC(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s32, 0x94) >= 0x19) {
        SetScript((s32) arg0, (s32) &D_sc02_009_801E5DB4);
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        D_801270C8 = 0x11;
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5338(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        temp_v0_2 = AF(temp_a1, u16, 0x1C) - 0x200;
        AF(temp_a1, u16, 0x1C) = temp_v0_2;
        AF(temp_a1, u16, 0x18) = temp_v0_2;
        AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) + 0x200);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + 0x100);
        AF(temp_a1, u16, 0x2C) = (u16) (AF(temp_a1, u16, 0x2C) | 0x10);
        return;
    }
    AF(temp_a1, s32, 4) = 0x80000000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern void FreeShadow();
extern void FreeActor();

void func_sc02_009_801E53A8(u8 *arg0) {
    FreeShadow(AF(arg0, s32, 0xCC));
    FreeActor((s32) arg0);
}

extern u8 D_sc02_009_801E6314;

void func_sc02_009_801E53E0(s32 arg0) {
    u8 *p, *a;
    if (AF(arg0, u16, 0x72) & 0x4000) {
        p = AF(arg0, u8 *, 0x90);
        if (p != &D_sc02_009_801E5DB4) {
            a = &D_sc02_009_801E5DB4;
            if (p == &D_sc02_009_801E5E0C || p == &D_sc02_009_801E5F04) {
                a = &D_sc02_009_801E6314;
            }
            SetScript(arg0, a);
        }
    }
}

extern void (*D_sc02_009_801E6680[])();

void func_sc02_009_801E5450(u8 *arg0) {
    D_sc02_009_801E6680[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_009_801E63C4;
extern u8 D_sc02_009_801F3D3C;
extern void SetModelParent();
extern s32 SpawnActorArg();

void func_sc02_009_801E548C(s32 arg0) {
    *(s32 **)&D_sc02_005_80196BBC = &D_sc02_009_801F3D3C;
    if (SetupActor(arg0, (s32) (&D_sc02_005_80196BBC - 4)) != 0) {
        SetModelParent(AF(arg0, s32, 0x20), AF(AF(arg0, void *, 0x64), s32, 0x20));
        SetScript(arg0, (s32) &D_sc02_009_801E63C4);
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x3D4, 0x4000, arg0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_80197080;
extern u8 D_sc02_009_801E644C;

void func_sc02_009_801E5518(u8 *arg0) {
    if (D_801270C8 == 4) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_80197080);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E644C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_009_801E63C4;
extern void func_sc02_009_801E590C();

void func_sc02_009_801E5580(u8 *arg0) {
    func_sc02_009_801E590C();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 5;
        SetScript((s32) arg0, (s32) &D_sc02_009_801E63C4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_8019729C;

void func_sc02_009_801E55F4(u8 *arg0) {
    func_sc02_009_801E590C();
    if (D_801270C8 == 0xB) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_8019729C);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E644C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5664(u8 *arg0) {
    func_sc02_009_801E590C();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 0xC;
        SetScript((s32) arg0, (s32) &D_sc02_009_801E63C4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_005_80197418;

void func_sc02_009_801E56D8(u8 *arg0) {
    func_sc02_009_801E590C();
    if (D_801270C8 == 0xE) {
        AF(arg0, s32, 0xB0) = OpenMessage((s32) &D_sc02_005_80197418);
        SetScript((s32) arg0, (s32) &D_sc02_009_801E644C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5748(u8 *arg0) {
    func_sc02_009_801E590C();
    if (GetMessageAnswer(AF(arg0, s32, 0xB0)) != 0) {
        CloseMessage(AF(arg0, s32, 0xB0));
        D_801270C8 = 0xF;
        AF(arg0, s32, 0x1C) = 0x12;
        SetScript((s32) arg0, (s32) &D_sc02_009_801E63C4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc02_009_801E65E4;

void func_sc02_009_801E57C4(u8 *arg0) {
    RECT r;
    if (--AF(arg0, s32, 0x1C) == -1) {
        r.x = 0x328;
        r.y = 0x140;
        r.w = 8;
        r.h = 0x20;
        MoveImage(&r, 0x32C, 0x1C8);
        SetScript(arg0, &D_sc02_009_801E65E4);
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_009_801E584C(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E5874(u8 *arg0) {
    D_801270C8 = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_009_801E5894(u8 *arg0) {
    if (D_801270C8 == 0x11) {
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_009_801E58C0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeShadow(AF(arg0, s32, 0xCC));
        FreeActor((s32) arg0);
    }
}

void func_sc02_009_801E590C(s32 arg0) {
    s16 *p = &AF(arg0, s16, 0xE);
    if (AF(arg0, void *, 0x90) != &D_sc02_009_801E63C4) {
        if (*p >= -30) *p -= 4;
    } else {
        if (*p < -1) *p += 8;
    }
}

extern void (*D_sc02_009_801E66B0[])();

void func_sc02_009_801E5968(u8 *arg0) {
    D_sc02_009_801E66B0[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_005_80190C0C;
extern u8 D_sc02_005_801D8B8C;
extern u8 D_sc02_009_801E66C4;
extern void RelocateCollisionMap();

void func_sc02_009_801E59A4(s32 arg0) {
    s32 p;
    *(s32 **)&D_sc02_005_80196BBC = &D_sc02_005_801D8B8C;
    if (SetupActor(arg0, (s32) (&D_sc02_005_80196BBC - 4)) != 0) {
        SetScript(arg0, (s32) &D_sc02_005_80190C0C);
        p = (s32) &D_sc02_009_801E66C4;
        RelocateCollisionMap(p);
        AF(arg0, s32, 0x58) = p & 0x7FFFFFFF;
        AF(arg0, s16, 0x5C) = 0x800;
        AF(arg0, u8, 0x75) = 1;
        AF(arg0, s32, 0xCC) = func_80143994(arg0, 0x3000);
        AF(arg0, s16, 0x16) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern void MoveObject();
extern s32 SpawnActor();
extern void PlaySoundId();

void func_sc02_009_801E5A58(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    MoveObject();
    if (AF(arg0, s16, 0xA) >= -0x802) {
        AF(arg0, s16, 0xA) = -0x802;
        if (SpawnActor(0x56, (s32) arg0) != 0) {
            AF(temp_s1, s32, 4) = 0x80000000;
            FreeShadow(AF(arg0, s32, 0xCC));
            PlaySoundId(0x4FF, 0);
            PlaySoundId(0x510, 0x105F);
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
    } else {
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1C000);
    }
}

void func_sc02_009_801E5B0C(s32 arg0) {
    if (D_801270C8 == 0xD) {
        FreeActor(arg0);
    }
}

extern s16 D_801152A8;
extern s16 D_801152AA;
extern s16 D_801152AC;
extern s32 FindGround();
extern s32 ratan2();

void func_sc02_009_801E5B3C(u8 *arg0) {
    SVECTOR v;
    u8 *s1 = AF(arg0, u8 *, 0x64);
    u8 *s0 = AF(arg0, u8 *, 0xCC);
    if (AF(s1, s16, 0x36) != AF(arg0, s16, 0xFC)) {
        FreeShadow(arg0);
        return;
    }
    v.vx = AF(AF(s1, u8 *, 0x20), s32, 0x68);
    v.vy = AF(AF(s1, u8 *, 0x20), s32, 0x6C) - 0x10;
    v.vz = AF(AF(s1, u8 *, 0x20), s32, 0x70);
    if (FindGround(&v) == 0) {
        AF(s0, u32, 4) |= 0x80000000;
        return;
    }
    AF(s0, s16, 8) = v.vx;
    AF(s0, s16, 0xA) = v.vy;
    AF(s0, s16, 0xC) = v.vz;
    AF(s0, u32, 4) &= 0x7FFFFFFF;
    AF(s0, s16, 0x10) = ratan2(D_801152AC, D_801152AA) + 0x400;
    AF(s0, s16, 0x12) = ratan2(D_801152A8, D_801152AA);
    AF(s0, s16, 0x14) = AF(AF(s1, u8 *, 0x20), u16, 0x12) + 0x200;
}

extern void (*D_sc02_009_801E66BC[])();

void func_sc02_009_801E5C6C(u8 *arg0) {
    D_sc02_009_801E66BC[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_005_801921F8;
extern u8 *AllocActorSprite();
extern void RejectSpawn();
extern void InitSpriteKind2();

void func_sc02_009_801E5CA8(u8 *arg0) {
    u8 *o = AllocActorSprite();
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, s16, 0xFC) = AF(AF(arg0, u8 *, 0x64), s16, 0x36);
    AF(arg0, u8 *, 0xCC) = o;
    InitSpriteKind2(o, &D_sc02_005_801921F8, 0x250, 0x1A0);
    AF(o, s32, 4) = 0x60000000;
    AF(o, u8, 0x27) = 0x14;
    AF(o, s16, 0x10) = 0x400;
    AF(o, s16, 8) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x68);
    AF(o, s16, 0xA) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x6C);
    AF(o, s16, 0xC) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s32, 0x70);
    {
        s16 v = AF(arg0, s16, 0x70);
        if (v != 0) {
            AF(o, s16, 0x1A) = v;
            AF(o, s16, 0x18) = v;
        } else {
            AF(o, s16, 0x1A) = 0x2000;
            AF(o, s16, 0x18) = 0x2000;
        }
    }
    AF(arg0, s16, 2) = 1;
}
