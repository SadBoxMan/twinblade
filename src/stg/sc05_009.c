#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_009_8017BE9C(void) {
}

void func_sc05_009_8017BEA4(void) {
}

void func_sc05_009_8017BEAC(void) {
}

void func_sc05_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_009_80182524[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_009_8017CFA0(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_009_8018252C[])();
void func_sc05_009_8017CFC8(void);
extern void func_800D1EBC();
extern u8 D_sc05_009_80182538;
extern void func_8016EE40();
extern u8 D_sc05_009_8018253C;
extern void func_sc05_009_8017D1D4();
extern void (*D_sc05_009_80182544[])();
extern void (*D_sc05_009_80182580[])();
extern void (*D_sc05_009_801825DC[])();
extern void (*D_sc05_009_80191A7C[])();
void func_sc05_009_8017DD50(u8 *arg0);
extern void (*D_sc05_009_80193894[])();
extern void (*D_sc05_009_8019389C[])();
extern void (*D_sc05_009_801939C4[])();
extern u8 D_sc05_009_80193974;
extern void func_80178CBC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc05_009_8017DD28();
extern s32 func_8012C658();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern void func_8012CAE4();
extern u8 D_sc05_009_80193E84;
extern u8 D_sc05_009_801938C4;
extern void func_sc05_009_8017E894();
extern void func_80178D18();
extern s32 func_801789AC();
extern s32 D_sc05_009_80196AEC;
extern void func_800296F8();

extern void func_sc05_009_8017CFF0();
extern s32 D_sc05_009_80196A90;
extern u8 D_sc05_009_80191A54;
extern void func_80154274();
extern void func_801477E8();
extern void func_80146DE8();
extern void func_80147814();
extern void func_80147460();
extern void func_80147B18();
extern void func_801473EC();
extern void func_80147AD4();
extern void func_8014C010();
extern void func_8001AAA0();
extern void func_80154150();
extern u8 D_80126B58;

extern void func_sc05_009_8017CFF0();
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
extern u8 D_sc05_009_80182594;
extern s32 func_8016F1AC();
extern void func_80178B18();
extern void func_8012AD50();
extern s32 func_80178970();
extern void func_80146E90();
extern s32 func_8012BEE8();
extern void func_8012C098();
extern void func_80147324();

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017BEBC);

void func_sc05_009_8017CD9C(void) {
    func_sc05_009_8017CFF0(1);
}

void func_sc05_009_8017CDBC(void) {
    func_8001AAA0(0x6B);
    func_sc05_009_8017CFF0(0);
}

void func_sc05_009_8017CDE4(u8 *arg0) {
    D_sc05_009_80182524[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CE20(u8 *arg0) {
    func_sc05_009_8017CFA0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CE64(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_009_8017CE88(u8 *arg0) {
    D_sc05_009_8018252C[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_009_8017CEC4(u8 *arg0) {
    func_sc05_009_8017CFC8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_009_8017CF04(u8 *arg0) {
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

void func_sc05_009_8017CF80(void) {
    func_800D1EBC();
}

void func_sc05_009_8017CFA0(void) {
    func_8016EE40((s32) &D_sc05_009_80182538, 0x01000000);
}

void func_sc05_009_8017CFC8(void) {
    func_8016EE40((s32) &D_sc05_009_8018253C, 0x01000000);
}

void func_sc05_009_8017CFF0(s32 arg0) {
    D_sc05_009_80196A90 = arg0;
}

s32 func_sc05_009_8017D000(s32 arg0) {
    return D_sc05_009_80196A90;
}

void func_sc05_009_8017D010(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D0AC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x244;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 1);
    func_8012A094((s32) &D_80126948);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D148(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0xE3;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_009_8017D1D4, 2);
    func_sc05_009_8017D1D4((s32) &D_80126948);
}

void func_sc05_009_8017D1D4(s32 arg0) {
    D_sc05_009_80182544[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D210);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D2B0);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D2F8);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D340);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D4D8);

void func_sc05_009_8017D670(u8 *arg0) {
    D_sc05_009_80182580[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D6AC);

void func_sc05_009_8017D840(s32 arg0) {
    if (func_8016F1AC() == 0) {
        func_80178B18(arg0, (s32) &D_sc05_009_80182594);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D888(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_80146E90(arg0, 1);
        func_8012AD50(arg0);
    }
}

void func_sc05_009_8017D8D4(s32 arg0) {
    if (func_8012BEE8() != 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_009_8017D90C(void) {
}

void func_sc05_009_8017D914(u8 *arg0) {
    func_80147324(0x9D2);
    AF(arg0, s32, 0xDC) = 0x200000;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 6);
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D950);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017D9F0);

void func_sc05_009_8017DAB8(u8 *arg0) {
    D_sc05_009_801825DC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017DAF4);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017DCB0);

s32 func_sc05_009_8017DD20(void) {
    return 0x6A;
}

s32 func_sc05_009_8017DD28()
{
    return SetActionHandler((s32) func_sc05_009_8017DD50);
}

void func_sc05_009_8017DD50(u8 *arg0) {
    D_sc05_009_80191A7C[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017DD8C);

void func_sc05_009_8017DDE0(void) {
}

void func_sc05_009_8017DDE8(s32 arg0) {
    func_80154274(arg0, (s32) &D_sc05_009_80191A54);
    func_801477E8(arg0, -0x20000);
    func_80146DE8(arg0, 0, 0, -0x400000);
    NextPhase(arg0);
}

void func_sc05_009_8017DE40(s32 arg0) {
    func_80147814(arg0, 0x10000);
    func_80147460(arg0);
    func_80147B18(arg0, 0, 0, 0x10000);
    func_801473EC(arg0);
    if (AF(arg0, s16, 0xA) >= -0x2C1) {
        AF(arg0, s16, 0xA) = -0x2C2;
        NextPhase(arg0);
    }
}

void func_sc05_009_8017DEB0(s32 arg0) {
    func_80147AD4(arg0, 0, 0, 0x20000);
    func_801473EC(arg0);
    func_8014C010(arg0, 2);
    if (AF(arg0, s32, 0x2C) > 0) {
        func_8001AAA0(0x6B);
        func_80154150(arg0, 1);
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_sc05_009_8017DF2C(void) {
}

void func_sc05_009_8017DF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    NextPhase((s32) &D_80126B58, arg1, arg2, arg3);
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017DF5C);

void func_sc05_009_8017E0B8(u8 *arg0) {
    D_sc05_009_80193894[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E0F4);

void func_sc05_009_8017E280(u8 *arg0) {
    D_sc05_009_8019389C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E2BC);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E3AC);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E4A4);

void func_sc05_009_8017E55C(u8 *arg0) {
    D_sc05_009_801939C4[AF(arg0, u16, 2)]();
}

void func_sc05_009_8017E598(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc05_009_801938C4)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc05_009_8017E894);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc05_009_80193E84);
    }
}

void func_sc05_009_8017E670(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_009_8017E698(void) {
}

void func_sc05_009_8017E6A0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc05_009_80193974);
}

void func_sc05_009_8017E6CC(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E70C);

void func_sc05_009_8017E7CC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc05_009_80193E84);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc05_009_8017E838(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_009_8017E848(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc05_009_8017E858(void) {
    return D_sc05_009_80196AEC == 1;
}

void func_sc05_009_8017E870(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E894);

INCLUDE_ASM("asm/stg/sc05_009/nonmatchings/sc05_009", func_sc05_009_8017E9E8);
