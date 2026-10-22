#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_008_801831CC[])();
extern void (*D_sc01_008_801831D4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_008_8017D02C(void);
extern void func_800167B8();
void func_sc01_008_8017D054(void);
extern s32 func_800167F0();
void func_sc01_008_8017D07C(void);
extern void func_800D1EBC();
extern void (*D_sc01_008_801831E8[])();
extern u8 D_sc01_008_801831F4;
extern void func_8016EE40();
extern u8 D_sc01_008_80183200;
extern u8 D_sc01_008_8018320C;
extern void func_sc01_008_8017D22C();
extern void (*D_sc01_008_80183220[])();
extern s16 D_sc01_008_801A3320;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_008_8019F01C[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 D_801274E8;
extern void func_sc01_008_8017D290();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_008_801A3328;
extern s32 D_sc01_008_801A3458;
extern s32 D_sc01_008_801A3460;
extern void func_800D24A0();
extern void func_sc01_008_8017D5DC();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern s32 func_8016F1AC();
extern void func_80178B18();
extern u8 D_sc01_008_8019F498;
extern void func_800D1724();
extern u8 D_sc01_008_8018317C;
extern u8 D_sc01_008_8019F204;
extern s32 D_sc01_008_801A3484;

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void func_8012A018();
extern void func_8012A094();
extern s32 D_sc01_008_8019F2C4[];
extern s32 D_sc01_008_8019F2E4[];
extern s32 func_801789AC();
extern void func_80178D18();
extern void func_801746A4();
extern void func_sc01_008_8017D440();
extern s32 D_sc01_008_8019F278;
extern s32 D_sc01_008_8019F1A4[];
extern u8 D_sc01_008_8019E198;
extern u8 D_sc01_008_8019F034;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_80143994();
extern s32 func_80029504();
extern u8 D_sc01_008_8019F23C;
extern u8 D_sc01_008_8019F2A4;
extern void func_80178CBC();

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017BE9C);

void func_sc01_008_8017CD7C(u8 *arg0) {
    D_sc01_008_801831CC[AF(arg0, u8, 0x15)]();
}

void func_sc01_008_8017CDB8(u8 *arg0) {
    D_sc01_008_801831D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_008_8017CDF4(u8 *arg0) {
    func_sc01_008_8017D02C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CE38(u8 *arg0) {
    func_sc01_008_8017D054();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CE7C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_008_8017CEA0(u8 *arg0) {
    func_sc01_008_8017D07C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_008_8017CEE0(u8 *arg0) {
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

void func_sc01_008_8017CF5C(void) {
    func_800D1EBC();
}

void func_sc01_008_8017CF7C(u8 *arg0) {
    D_sc01_008_801831E8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_008_8017CFB8(u8 *arg0) {
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

void func_sc01_008_8017D02C(void) {
    func_8016EE40((s32) &D_sc01_008_801831F4, 0x01000000);
}

void func_sc01_008_8017D054(void) {
    func_8016EE40((s32) &D_sc01_008_80183200, 0x01000000);
}

void func_sc01_008_8017D07C(void) {
    func_8016EE40((s32) &D_sc01_008_8018320C, 0x01000000);
}

void func_sc01_008_8017D0A4(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x2BC;
    D_80126968 = 0xA8;
    D_8012696A = 0x8D8;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x91;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_008_8017D22C, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -2;
    func_sc01_008_8017D22C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_008_8017D168(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0xA8;
    D_8012696A = 0x8D8;
    D_80126978 = -0x91;
    D_8012696C = 0;
    D_80126976 = 0;
    D_8012697A = -0x180;
    func_8012A018((s32) func_sc01_008_8017D22C, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -2;
    func_sc01_008_8017D22C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_008_8017D22C(s32 arg0) {
    D_sc01_008_80183220[AF(arg0, u8, 4)]();
}

void func_sc01_008_8017D268(s32 arg0) {
    func_sc01_008_8017D290(arg0, (s32) &D_801274E8);
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017D290);

s32 func_sc01_008_8017D428(void) {
    return 0x3D;
}

s16 func_sc01_008_8017D430(void) {
    return D_sc01_008_801A3320;
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017D440);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017D494);

void func_sc01_008_8017D4E4(void) {
    func_80029444();
    func_801754A8();
    D_sc01_008_8019F01C[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_008_8017D554(void) {
    func_800D24A0(4);
    func_sc01_008_8017D5DC();
    if (D_sc01_008_801A3328 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_008_801A3328;
    }
    D_sc01_008_801A3460 = 0;
    D_sc01_008_801A3458 = 0;
    D_80115130 = 0;
    D_sc01_008_801A3328 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017D5DC);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017D890);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017DA80);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017DA9C);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017DBEC);

void func_sc01_008_8017DD18(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017DD70);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017E050);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017E30C);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017E4D8);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017E6F0);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017E93C);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017EC68);

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017F0C4);

void func_sc01_008_8017F124(u8 *arg0) {
    s32 (*var_v0)();

    if (AF(arg0, s16, 0x70) == 0) {
        var_v0 = D_sc01_008_8019F2C4[AF(arg0, u16, 2)];
    } else {
        var_v0 = D_sc01_008_8019F2E4[AF(arg0, u16, 2)];
    }
    var_v0();
}

void func_sc01_008_8017F190(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_008_8019F498);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_008_8017F1FC(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_008_8017F250(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_008_8018317C);
    }
}

void func_sc01_008_8017F28C(void) {
}

void func_sc01_008_8017F294(void) {
    func_sc01_008_8017D440(2, 0);
}

void func_sc01_008_8017F2B8(void) {
    func_sc01_008_8017D440(2, 2);
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017F2DC);

void func_sc01_008_8017F358(u8 *arg0) {
    D_sc01_008_8019F278 = D_sc01_008_8019F1A4[AF(arg0, s16, 0x108)];
}

void func_sc01_008_8017F380(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_008_8019E198);
        SetScript((s32) arg0, (s32) &D_sc01_008_8019F034);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        if (func_80029504() < 5U) {
            AF(arg0, s16, 0x70) = 1;
        }
    }
}

void func_sc01_008_8017F404(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_008_8019F204);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017F470);

void func_sc01_008_8017F560(u8 *arg0) {
    if (func_801789AC() != 0) {
        if (AF(arg0, s16, 0x10A) == 0) {
            func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F2A4);
            AF(arg0, s16, 2) = 2;
            return;
        }
        func_sc01_008_8017D440(2, 2);
        func_80178CBC((s32) arg0, (s32) &D_sc01_008_8019F23C);
    }
}

void func_sc01_008_8017F5D4(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178CBC(arg0, (s32) &D_sc01_008_8019F2A4);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_008_8017F61C(s32 arg0) {
    if (func_801789AC() != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc01_008_8017F66C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_008_8018317C);
    }
}

void func_sc01_008_8017F6A8(void) {
}

s32 func_sc01_008_8017F6B0(void) {
    return D_sc01_008_801A3484 != 1;
}

INCLUDE_ASM("asm/stg/sc01_008/nonmatchings/sc01_008", func_sc01_008_8017F6C8);
