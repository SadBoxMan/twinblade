#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_009_8017BE9C(void) {
}

void func_sc04_009_8017BEA4(void) {
}

void func_sc04_009_8017BEAC(void) {
}

void func_sc04_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_009_80182550[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_009_8017D078(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_009_80182558[])();
void func_sc04_009_8017D0A0(void);
extern void func_800D1EBC();
extern void (*D_sc04_009_80182564[])();
extern u8 D_sc04_009_80182570;
extern void func_8016EE40();
extern u8 D_sc04_009_80182574;
extern void func_sc04_009_8017D170();
extern void (*D_sc04_009_80182580[])();
extern void (*D_sc04_009_8018260C[])();
extern void (*D_sc04_009_8018278C[])();
extern void (*D_sc04_009_80182794[])();
extern void (*D_sc04_009_801827D0[])();
extern void (*D_sc04_009_80194ED0[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_009_8017EE1C;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_009_80194BC0;
extern void func_sc04_009_8017E520();
extern s32 D_sc04_009_80194C28[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc04_009_80194DF4;
extern s32 D_sc04_009_80194DF8;
extern s32 D_sc04_009_80194E0C;
extern s32 D_sc04_009_80194E20;
extern s32 D_sc04_009_80194E8C;
extern s32 D_sc04_009_80194D70[];
extern s32 D_sc04_009_80194CEC[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_009_8017E2C8();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_009_80194EF8[])();
extern u8 D_sc04_009_80194BF4;
extern u8 D_sc04_009_801954E4;
extern u8 D_sc04_009_80195704;
extern void func_8002D4C8();
extern u8 D_sc04_009_801954F4;
extern u8 D_sc04_009_801955FC;
extern void (*D_sc04_009_80195024[])();
extern u8 D_sc04_009_80194FD4;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_009_80182588[];
extern s32 func_8013B7F4();
extern u8 D_sc04_009_80194F24;
extern void func_sc04_009_8017E950();
extern s32 D_sc04_009_80198114;
extern void func_800296F8();

extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_009_801827C4;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();

extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc04_009_8017D5E4();
extern u8 D_sc04_009_8018259C;
extern void func_80178B18();
extern s32 func_80178970();

extern void func_sc04_009_8017D638();

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017BEBC);

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017CD9C);

void func_sc04_009_8017CE0C(u8 *arg0) {
    D_sc04_009_80182550[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CE48(u8 *arg0) {
    func_sc04_009_8017D078();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CE8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_009_8017CEB0(u8 *arg0) {
    D_sc04_009_80182558[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017CEEC(u8 *arg0) {
    func_sc04_009_8017D0A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_009_8017CF2C(u8 *arg0) {
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

void func_sc04_009_8017CFA8(void) {
    func_800D1EBC();
}

void func_sc04_009_8017CFC8(u8 *arg0) {
    D_sc04_009_80182564[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_009_8017D004(u8 *arg0) {
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

void func_sc04_009_8017D078(void) {
    func_8016EE40((s32) &D_sc04_009_80182570, 0x01000000);
}

void func_sc04_009_8017D0A0(void) {
    func_8016EE40((s32) &D_sc04_009_80182574, 0x01000000);
}

void func_sc04_009_8017D0C8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0x1C7;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_009_8017D170, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_009_8017D170((s32) &D_80126948);
}

void func_sc04_009_8017D170(s32 arg0) {
    D_sc04_009_80182580[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D1AC);

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D288);

s32 func_sc04_009_8017D420(s32 arg0) {
    return func_8013B7F4(D_sc04_009_80182588[arg0], 0);
}

void func_sc04_009_8017D450(u8 *arg0) {
    D_sc04_009_8018260C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D48C(u8 *arg0) {
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, u16, 0x102) = (u16) AF(arg0, u16, 0xE);
    AF(arg0, u16, 0x106) = (u16) AF(arg0, u16, 0xA);
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D4AC);

void func_sc04_009_8017D57C(u8 *arg0) {
    D_sc04_009_8018278C[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D5B8(s32 arg0) {
    func_sc04_009_8017D5E4(arg0);
    func_8002D4C8(0xC5F, 0);
}

void func_sc04_009_8017D5E4(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    func_sc04_009_8017D638();
    temp_v1 = AF(arg0, void *, 0x64);
    AF(temp_v1, u16, 0xFE) = (u16) (AF(temp_v1, u16, 0xFE) - 1);
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D638);

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D6A8);

void func_sc04_009_8017D768(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s16, 0xFE) == 0) {
            func_80029124(0xDD, 1);
            func_80178B18((s32) arg0, (s32) &D_sc04_009_8018259C);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            func_8012C218((s32) arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D808);

void func_sc04_009_8017D904(void) {
}

s32 func_sc04_009_8017D90C(void) {
    return 0x55;
}

void func_sc04_009_8017D914(u8 *arg0) {
    D_sc04_009_80182794[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017D950(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017D984);

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017DAD4);

void func_sc04_009_8017DBC0(u8 *arg0) {
    D_sc04_009_801827D0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DBFC(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_009_801827C4, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    func_80146E90((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_009_8017DCE0(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017DD4C);

void func_sc04_009_8017DE38(u8 *arg0) {
    D_sc04_009_80194ED0[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017DE74(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BC0) != 0) {
        if (!(func_80029178(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_009_8017E520);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_009_8017EE1C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017DF48(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017DF70(void) {
}

void func_sc04_009_8017DF78(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_009_80194DF8 = 0;
            func_80029124(D_sc04_009_80194D70[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_009_80194DF4 = 2;
        } else {
            D_sc04_009_80194E0C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_009_80194CEC[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_009_80194DF4 = 0;
            D_sc04_009_80194DF8 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194E20);
    } else {
        var_a1 = &D_sc04_009_80194E8C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_009_8017E0C4(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_009_80194C28[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_009_8017E2C8() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_009_8017E1E4(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_009_8017E210(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E220(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_009_8017E230(u8 *arg0) {
    func_80029124(D_sc04_009_80194C28[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_009_8017E270(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_009_8017E2A4(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E2C8);

void func_sc04_009_8017E32C(u8 *arg0) {
    D_sc04_009_80194EF8[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E368(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_009_80194BF4) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_009_80195704);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_009_8017E3F0(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_009_801954F4);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_009_801955FC);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_009_8017E4B0(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_009_80195704);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E520);

void func_sc04_009_8017E618(u8 *arg0) {
    D_sc04_009_80195024[AF(arg0, u16, 2)]();
}

void func_sc04_009_8017E654(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc04_009_80194F24)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc04_009_8017E950);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
    }
}

void func_sc04_009_8017E72C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_009_8017E754(void) {
}

void func_sc04_009_8017E75C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc04_009_80194FD4);
}

void func_sc04_009_8017E788(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E7C8);

void func_sc04_009_8017E888(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc04_009_801954E4);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc04_009_8017E8F4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_009_8017E904(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc04_009_8017E914(void) {
    return D_sc04_009_80198114 == 1;
}

void func_sc04_009_8017E92C(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc04_009/nonmatchings/sc04_009", func_sc04_009_8017E950);
