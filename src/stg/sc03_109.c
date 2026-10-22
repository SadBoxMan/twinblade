#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_109_8017BE9C(void) {
}

void func_sc03_109_8017BEA4(void) {
}

void func_sc03_109_8017BEAC(void) {
}

void func_sc03_109_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_109_80181D44[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc03_109_80181E10[])();
void func_sc03_109_8017D290(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_109_8017D2B8(void);
extern void func_800D1EBC();
extern void (*D_sc03_109_80181E24[])();
extern u8 D_sc03_109_80181E30;
extern void func_8016EE40();
extern u8 D_sc03_109_80181E3C;
extern void func_sc03_109_8017D384();
extern void (*D_sc03_109_80181E50[])();
extern void (*D_sc03_109_80181E94[])();
extern void (*D_sc03_109_80181F18[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_109_8017E678;
extern u8 D_sc03_109_80181EAC;
extern u8 func_sc03_109_8017DE18;
extern void func_80178CBC();
extern s32 D_sc03_109_80181F10[];
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc03_109_80197274[])();
extern u8 D_sc03_109_80197224;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc03_109_8017D624();
extern s32 func_8012C658();
extern void func_8012CAE4();
extern u8 D_sc03_109_80197734;
extern u8 D_sc03_109_80197174;
extern void func_sc03_109_8017E1AC();
extern s32 func_801789AC();
extern s32 D_sc03_109_8019A354;
extern void func_800296F8();


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
extern void func_8012A018();
extern void func_8012A094();
extern s32 func_sc03_109_8017D644();
extern s32 func_sc03_109_8017D66C();
extern s32 func_sc03_109_8017D72C();
extern u8 D_sc03_109_80181E54;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern s32 func_80029178();
extern s32 func_8012BEE8();

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017BF88);

void func_sc03_109_8017C0E4(u8 *arg0) {
    D_sc03_109_80181D44[AF(arg0, u16, 2)]();
}

void func_sc03_109_8017C120(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017C180);

void func_sc03_109_8017D060(u8 *arg0) {
    D_sc03_109_80181E10[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_109_8017D09C(u8 *arg0) {
    func_sc03_109_8017D290();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_109_8017D0E0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_109_8017D104(u8 *arg0) {
    func_sc03_109_8017D2B8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_109_8017D144(u8 *arg0) {
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

void func_sc03_109_8017D1C0(void) {
    func_800D1EBC();
}

void func_sc03_109_8017D1E0(u8 *arg0) {
    D_sc03_109_80181E24[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_109_8017D21C(u8 *arg0) {
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

void func_sc03_109_8017D290(void) {
    func_8016EE40((s32) &D_sc03_109_80181E30, 0x01000000);
}

void func_sc03_109_8017D2B8(void) {
    func_8016EE40((s32) &D_sc03_109_80181E3C, 0x01000000);
}

void func_sc03_109_8017D2E0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_109_8017D384, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_109_8017D384((s32) &D_80126948);
}

void func_sc03_109_8017D384(s32 arg0) {
    D_sc03_109_80181E50[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017D3C0);

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017D48C);

s32 func_sc03_109_8017D624(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

s32 func_sc03_109_8017D644(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    return func_8012AD44(arg0, 2);
}

s32 func_sc03_109_8017D66C(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0xC0;
    return func_8012AD44(arg0, 3);
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017D694);

s32 func_sc03_109_8017D72C(s32 arg0) {
    func_8012C658(0x191, 0, arg0);
    func_8012C658(0x191, 1, arg0);
    func_8012C658(0x191, 2, arg0);
    return func_8012C658(0x191, 3, arg0);
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017D790);

void func_sc03_109_8017D8A4(u8 *arg0) {
    D_sc03_109_80181E94[AF(arg0, u16, 2)]();
}

void func_sc03_109_8017D8E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, AF(arg0, s32, 0xDC));
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0x01800180;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_109_80181E54 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4C00;
    AF(arg0, u8, 0x75) = 8;
    if (AF(arg0, s16, 0x70) == 0) {
        func_sc03_109_8017D644(arg0);
    } else {
        func_sc03_109_8017D624(arg0);
    }
    func_sc03_109_8017D72C(arg0);
}

void func_sc03_109_8017D988(s32 arg0) {
    if (func_80029178(0xBA) & 0xFF) {
        func_sc03_109_8017D644(arg0);
        AF(arg0, s32, 0x1C) = 0;
        func_8002D4C8(0x720, 0);
    }
}

void func_sc03_109_8017D9D8(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (func_8012BEE8() != 0) {
        temp_v0 = AF(arg0, u16, 0xFC) + 4;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x11) {
            func_sc03_109_8017D66C((s32) arg0);
        }
    } else {
        temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 < 3) {
                if (((AF(AF(arg0, void *, 0x20), s16, 0x12) + 2) & 0x3FF) < 4) {
                    AF(arg0, u16, 0xFC) = 0U;
                }
            } else {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 - 2);
            }
        }
        if (AF(arg0, s32, 0x1C) == 1) {
            func_8002D4C8(0x720, 0);
        }
    }
}

void func_sc03_109_8017DAA0(u8 *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    if (AF(arg0, s16, 0x70) == 0) {
        if (func_8012BEE8() != 0) {
            temp_v0 = AF(arg0, u16, 0xFC) - 2;
            AF(arg0, u16, 0xFC) = temp_v0;
            if ((s16) temp_v0 < 0x10) {
                AF(arg0, s32, 0x1C) = 0x40;
                func_8012AD44((s32) arg0, 2);
            }
        } else {
            temp_v0_2 = (s16) AF(arg0, u16, 0xFC);
            if (temp_v0_2 < 0x100) {
                AF(arg0, u16, 0xFC) = (u16) (temp_v0_2 + 4);
            }
            if (AF(arg0, s32, 0x1C) == 1) {
                func_8002D4C8(0x721, 0);
                func_8002D4C8(4, 0x720);
            }
        }
    } else {
        temp_v0_3 = (s16) AF(arg0, u16, 0xFC);
        if (temp_v0_3 < 0x100) {
            AF(arg0, u16, 0xFC) = (u16) (temp_v0_3 + 4);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017DB84);

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017DC54);

s32 func_sc03_109_8017DCDC(void) {
    return 0x49;
}

void func_sc03_109_8017DCE4(u8 *arg0) {
    D_sc03_109_80181F18[AF(arg0, u16, 2)]();
}

void func_sc03_109_8017DD20(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_109_80181EAC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_109_8017E678);
        func_801788B8(arg0, (s32) &func_sc03_109_8017DE18);
    }
}

void func_sc03_109_8017DD84(void) {
}

void func_sc03_109_8017DD8C(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc03_109_80181F10[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc03_109_8017DDD8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017DE18);

void func_sc03_109_8017DE74(u8 *arg0) {
    D_sc03_109_80197274[AF(arg0, u16, 2)]();
}

void func_sc03_109_8017DEB0(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc03_109_80197174)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc03_109_8017E1AC);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc03_109_80197734);
    }
}

void func_sc03_109_8017DF88(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_109_8017DFB0(void) {
}

void func_sc03_109_8017DFB8(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc03_109_80197224);
}

void func_sc03_109_8017DFE4(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017E024);

void func_sc03_109_8017E0E4(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc03_109_80197734);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_109_8017E150(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_109_8017E160(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc03_109_8017E170(void) {
    return D_sc03_109_8019A354 == 1;
}

void func_sc03_109_8017E188(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc03_109/nonmatchings/sc03_109", func_sc03_109_8017E1AC);
