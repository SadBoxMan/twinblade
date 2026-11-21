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
typedef struct { u8 field_0[0x18]; s16 field_18; s16 field_1A; s16 field_1C; u8 field_1E[0xE]; u16 field_2C; } struct_2E;
typedef struct { u8 field_0[0x20]; struct_2E *field_20; u8 field_24[0x38]; s16 field_5C; u8 field_5E[0x12]; u16 field_70; } struct_74;
extern u8 D_sc03_053_801F0B24;
extern void RunScript();

void func_sc03_053_801EF46C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x34) = 0;
    RunScript((s32) arg0, (s32) &D_sc03_053_801F0B24);
}

extern u8 D_sc03_053_801F0C34;
extern u8 D_sc03_053_801F0D24;
extern s32 UpdateScript();
extern s32 IsEventDone();
extern void SetFlag();
extern void SetProgress();
extern void EndEvent();
extern void func_sc03_053_801EF560();

void func_sc03_053_801EF49C(u8 *arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = UpdateScript((s32) arg0);
        if (temp_v0 != 0) {
            if (temp_v0 == 1) {
                RunScript((s32) arg0, (s32) &D_sc03_053_801F0C34);
                AF(arg0, u16, 0x34) = 1U;
                return;
            }
            RunScript((s32) arg0, (s32) &D_sc03_053_801F0D24);
            return;
        }
        return;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            SetFlag(0xEC, 1);
            SetProgress(0x6E);
            EndEvent((s32) arg0);
            func_sc03_053_801EF560((s32) arg0);
        }
        break;
    }
}

void func_sc03_053_801EF560(s32 arg0) {
    AF(arg0, s16, 2) = 0x10;
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
extern s32 func_801858CC();

void func_sc03_053_801EF56C(s32 arg0) {
    func_801858CC(arg0);
}

extern u8 D_sc03_053_801F0900;
extern u8 D_sc03_053_801F0D84;
extern void PlaceObject();
extern void ShowModel();
extern void func_80187344();

void func_sc03_053_801EF58C(u8 *arg0) {
    AF(arg0, s16, 2) = 0x15;
    PlaceObject((s32) arg0, (s32) &D_sc03_053_801F0900);
    ShowModel((s32) arg0);
    func_80187344((s32) arg0);
    RunScript((s32) arg0, (s32) &D_sc03_053_801F0D84);
}

extern s32 IsEventDone();
extern void EndEvent();

void func_sc03_053_801EF5E4(s32 arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        func_801858CC(arg0);
    }
}

extern u8 D_sc03_053_801F0DD0;
extern u8 D_sc03_053_801F0E10;
extern s32 GetFlag();

void func_sc03_053_801EF624(u8 *arg0) {
    AF(arg0, s16, 2) = 0x1A;
    PlaceObject((s32) arg0, (s32) &D_sc03_053_801F0900);
    ShowModel((s32) arg0);
    func_80187344((s32) arg0);
    if (GetFlag(0xEF) & 0xFF) {
        RunScript((s32) arg0, (s32) &D_sc03_053_801F0E10);
        AF(arg0, s16, 0x34) = 1;
        return;
    }
    RunScript((s32) arg0, (s32) &D_sc03_053_801F0DD0);
    AF(arg0, s16, 0x34) = 0;
}

extern void func_801858F8();

void func_sc03_053_801EF6B0(u8 *arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (IsEventDone(arg0) != 0) {
            SetFlag(0xEF, 1);
            EndEvent(arg0);
            func_801858F8(arg0);
        }
        break;
    case 1:
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            func_801858F8(arg0);
        }
        break;
    }
}

extern u8 D_sc03_053_801F0934;
extern u8 D_sc03_053_801F0A6C;
extern u8 D_sc03_053_801F0A9C;

void func_sc03_053_801EF734(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    PlaceObject((s32) arg0, (s32) &D_sc03_053_801F0900);
    ShowModel((s32) arg0);
    func_80187344((s32) arg0);
    if (GetFlag(0xDF) & 0xFF) {
        AF(arg0, s16, 0x34) = 0;
        RunScript((s32) arg0, (s32) &D_sc03_053_801F0A6C);
    } else if (GetFlag(0xE0) & 0xFF) {
        AF(arg0, s16, 0x34) = 1;
        RunScript((s32) arg0, (s32) &D_sc03_053_801F0A9C);
    } else {
        AF(arg0, s16, 0x34) = 2;
        RunScript((s32) arg0, (s32) &D_sc03_053_801F0934);
    }
}

extern u8 D_sc03_053_801F099C;
extern u8 D_sc03_053_801F09D4;
extern u8 D_sc03_053_801F0A0C;
extern u8 D_sc03_053_801F0A3C;
extern void func_80185874();

void func_sc03_053_801EF7E4(u8 *arg0) {
    s32 temp_v0;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
    case 3:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            func_80185874((s32) arg0);
        }
        break;
    case 1:
    case 2:
        temp_v0 = UpdateScript((s32) arg0);
        if (temp_v0 != 0) {
            if (temp_v0 == 1) {
                SetFlag(0xDF, 1);
                if (AF(arg0, u16, 0x34) == 1) {
                    RunScript((s32) arg0, (s32) &D_sc03_053_801F09D4);
                } else {
                    RunScript((s32) arg0, (s32) &D_sc03_053_801F099C);
                }
            } else {
                SetFlag(0xE0, 1);
                if (AF(arg0, u16, 0x34) == 1) {
                    RunScript((s32) arg0, (s32) &D_sc03_053_801F0A3C);
                } else {
                    RunScript((s32) arg0, (s32) &D_sc03_053_801F0A0C);
                }
            }
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    }
}

extern u8 D_sc03_053_801F0ACC;

void func_sc03_053_801EF904(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    PlaceObject((s32) arg0, (s32) &D_sc03_053_801F0900);
    ShowModel((s32) arg0);
    func_80187344((s32) arg0);
    RunScript((s32) arg0, (s32) &D_sc03_053_801F0ACC);
}

extern void func_80185924();

void func_sc03_053_801EF95C(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        SetFlag(0xE0, 1);
        SetProgress(0x1E);
        EndEvent(arg0);
        func_80185924(arg0);
    }
}

extern s32 FindActorByKind();

void func_sc03_053_801EF9AC(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x157);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 1;
    }
}

void func_sc03_053_801EF9DC(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x157);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 2;
    }
}

void func_sc03_053_801EFA0C(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x157);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 3;
    }
}
