#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_004_80182CF8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_004_8017D13C(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc01_004_8017D164(void);
extern void func_800D1EBC();
extern void (*D_sc01_004_80182D0C[])();
extern void (*D_sc01_004_80182D18[])();
void func_sc01_004_8017D18C(void);
extern u8 D_sc01_004_80182DD8;
extern void func_8016EE40();
extern u8 D_sc01_004_80182DE4;
extern u8 D_sc01_004_80182DF8;
extern void func_sc01_004_8017D1F8();
extern void (*D_sc01_004_80182E0C[])();
extern void func_sc01_004_8017D254();
extern s16 D_sc01_004_80190110;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_004_8018C2BC[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_004_8018C2EC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_004_80190118;
extern s32 D_sc01_004_80190248;
extern s32 D_sc01_004_80190250;
extern void func_800D24A0();
extern void func_sc01_004_8017D4A4();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();


extern s32 func_80029504();
extern void func_80029514();
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern void func_8012A018();
extern s32 func_8016F1AC();
extern void func_801746A4();
extern void func_sc01_004_8017D308();
extern s32 D_sc01_004_8018C2D4[];
s16 func_sc01_004_8017D2F8(void);
extern void func_sc01_004_8017D35C();
extern s32 func_sc01_004_8017D060();
extern void func_800D1724();

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017BE9C);

void func_sc01_004_8017CD7C(void) {
    if ((u32) (func_80029504() - 0x47E) < 0x14U) {
        func_80029514(0x488);
    }
}

void func_sc01_004_8017CDB4(u8 *arg0) {
    D_sc01_004_80182CF8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017CDF0(u8 *arg0) {
    func_sc01_004_8017D13C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_004_8017CE34(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_004_8017CE58(u8 *arg0) {
    func_sc01_004_8017D164();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_004_8017CE98(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc01_004_8017CF14(void) {
    func_800D1EBC();
}

void func_sc01_004_8017CF34(u8 *arg0) {
    D_sc01_004_80182D0C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017CF70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc01_004_8017CFE4(u8 *arg0) {
    D_sc01_004_80182D18[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_004_8017D020(u8 *arg0) {
    func_sc01_004_8017D18C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D060);

void func_sc01_004_8017D13C(void) {
    func_8016EE40((s32) &D_sc01_004_80182DD8, 0x01000000);
}

void func_sc01_004_8017D164(void) {
    func_8016EE40((s32) &D_sc01_004_80182DE4, 0x01000000);
}

void func_sc01_004_8017D18C(void) {
    func_8016EE40((s32) &D_sc01_004_80182DF8, 0x01000000);
}

void func_sc01_004_8017D1B4(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_80126958 = 0x12C;
    func_8012A018((s32) func_sc01_004_8017D1F8, 0);
}

void func_sc01_004_8017D1F8(s32 arg0) {
    D_sc01_004_80182E0C[AF(arg0, u8, 4)]();
}

void func_sc01_004_8017D234(s32 arg0) {
    func_sc01_004_8017D254(arg0);
}

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D254);

s32 func_sc01_004_8017D2F0(void) {
    return 0x3D;
}

s16 func_sc01_004_8017D2F8(void) {
    return D_sc01_004_80190110;
}

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D308);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D35C);

void func_sc01_004_8017D3AC(void) {
    func_80029444();
    func_801754A8();
    D_sc01_004_8018C2BC[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_004_8017D41C(void) {
    func_800D24A0(4);
    func_sc01_004_8017D4A4();
    if (D_sc01_004_80190118 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_004_80190118;
    }
    D_sc01_004_80190250 = 0;
    D_sc01_004_80190248 = 0;
    D_80115130 = 0;
    D_sc01_004_80190118 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D4A4);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D758);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D948);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017D964);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017DAB4);

void func_sc01_004_8017DBE0(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017DC38);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017DF18);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017E1D4);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017E3A0);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017E5B8);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017E804);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017EB30);

INCLUDE_ASM("asm/stg/sc01_004/nonmatchings/sc01_004", func_sc01_004_8017EF8C);

void func_sc01_004_8017EFEC(u8 *arg0) {
    D_sc01_004_8018C2EC[AF(arg0, u16, 2)]();
}

void func_sc01_004_8017F028(u8 *arg0) {
    if (func_80029504() < 5U) {
        func_80029514(5);
    }
    AF(arg0, s32, 0x1C) = 4;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_004_8017F078(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0xC;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_004_8017F0E0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_sc01_004_8017D308(0, 0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_004_8017F138(u8 *arg0) {
    s16 temp_v0;
    s32 var_v0;
    u16 var_v0_2;

    temp_v0 = func_sc01_004_8017D2F8();
    var_v0 = D_sc01_004_8018C2D4[temp_v0];
    if (var_v0 == 0) {
        if (temp_v0 == 3) {
            func_sc01_004_8017D35C(0);
            AF(arg0, s32, 0x1C) = 0;
            var_v0_2 = AF(arg0, u16, 2) - 1;
        } else {
            var_v0 = func_sc01_004_8017D060();
            goto block_4;
        }
    } else {
block_4:
        func_800D1724(var_v0);
        var_v0_2 = AF(arg0, u16, 2) + 1;
    }
    AF(arg0, u16, 2) = var_v0_2;
}

void func_sc01_004_8017F1C8(void) {
}
