#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_114_8017BE9C(void) {
}

void func_sc03_114_8017BEA4(void) {
}

void func_sc03_114_8017BEAC(void) {
}

void func_sc03_114_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_114_8018247C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_114_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_114_80182484[])();
void func_sc03_114_8017CF98(void);
extern u8 D_sc03_114_80182490;
extern void func_8016EE40();
extern u8 D_sc03_114_8018249C;
extern void func_sc03_114_8017D008();
extern void (*D_sc03_114_801824A0[])();
extern void (*D_sc03_114_80183228[])();
extern void (*D_sc03_114_80183254[])();
extern void (*D_sc03_114_80183264[])();

extern void func_8012931C();
extern void func_801292C8();
extern void func_sc03_114_8017E270();
extern void func_sc03_114_8017E2EC();
extern s32 func_sc03_114_8017E94C();
extern s32 func_801290DC();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern u8 D_sc03_114_80183140;
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc03_114_80182450;
extern void func_800D1724();
extern u8 D_sc03_114_80182F88;
extern u8 D_sc03_114_80183050;
extern u8 D_sc03_114_801A5EFC;
extern u8 D_sc03_114_801A614C;
extern void func_800183E0();
extern void func_sc03_114_8017D740();
extern s32 D_sc03_114_8018325C[];
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012AD50();
extern void func_8012C098();

extern s32 func_80012ABC();

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017BEBC);

void func_sc03_114_8017CD9C(u8 *arg0) {
    D_sc03_114_8018247C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CDD8(u8 *arg0) {
    func_sc03_114_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_114_8017CE40(u8 *arg0) {
    D_sc03_114_80182484[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_114_8017CE7C(u8 *arg0) {
    func_sc03_114_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_114_8017CEBC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc03_114_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(2);
        return 1;
    }
    return 0;
}

void func_sc03_114_8017CF70(void) {
    func_8016EE40((s32) &D_sc03_114_80182490, 0x01000000);
}

void func_sc03_114_8017CF98(void) {
    func_8016EE40((s32) &D_sc03_114_8018249C, 0x01000000);
}

void func_sc03_114_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_80126958 = 0x4B0;
    func_sc03_114_8017D008((s32) &D_80126948);
}

void func_sc03_114_8017D008(s32 arg0) {
    D_sc03_114_801824A0[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D044);

void func_sc03_114_8017D0E4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x40) = -0x38D;
    AF(arg0, s32, 0x44) = -0x44E;
    AF(arg0, s32, 0x4C) = -0x2ED;
    AF(arg0, s32, 0x3C) = 0;
    AF(arg0, s32, 0x48) = 0;
    AF(arg0, s32, 0x50) = -0xD8;
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D110);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D518);

void func_sc03_114_8017D704(u8 *arg0) {
    D_sc03_114_80183228[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017D740(s32 arg0) {
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 & 0x8000) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), temp_v0 & 0xFFF, 4);
    }
    temp_a1 = AF(arg0, s32, 0xF8);
    if ((temp_a1 != 0) && (AF(arg0, s32, 0x90) != temp_a1)) {
        SetScript(arg0, temp_a1);
        AF(arg0, s32, 0xF8) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D7C8);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D7F8);

void func_sc03_114_8017D814(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    func_80029124(0x125, 0);
    func_80029124(0x126, 0);
    func_80029124(0x127, 0);
    func_80029124(0x128, 0);
    func_80029124(0x129, 0);
    func_80029124(0x12A, 0);
    func_80029124(0x12B, 0);
    func_80029124(0x12C, 0);
    func_80029124(0x130, 0);
    func_80178B18((s32) arg0, (s32) &D_sc03_114_80183140);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D8DC(u8 *arg0) {
    func_800D1724((s32) &D_sc03_114_80182450);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_114_8017D920(void) {
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017D928);

void func_sc03_114_8017DA28(void) {
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017DA30);

void func_sc03_114_8017DB74(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    if ((AF(arg0, s32, 0x90) == &D_sc03_114_80182F88) && (AF(arg0, s16, 0x98) == 0)) {
        SetScript((s32) arg0, (s32) &D_sc03_114_80183050);
        AF(arg0, s32, 0xF8) = 0;
    }
    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 == 0) {
        func_800183E0((s32) &D_sc03_114_801A5EFC);
        var_v0 = (rand() & 0x1F) + 0x14;
    } else {
        if (temp_v1 == 2) {
            func_800183E0((s32) &D_sc03_114_801A614C);
        }
        var_v0 = AF(arg0, s32, 0x1C) - 1;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    func_sc03_114_8017D740((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017DC38);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017DCC0);

void func_sc03_114_8017DD64(u8 *arg0) {
    D_sc03_114_80183254[AF(arg0, u16, 2)]();
}

void func_sc03_114_8017DDA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, D_sc03_114_8018325C[AF(arg0, s16, 0x70)]);
        func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x14) = (s32) AF(arg0, s32, 8);
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc03_114_8017DE30(u8 *arg0) {
    s32 var_v1;
    u16 temp_a0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_a0 = AF(arg0, u16, 0xFC) + 0x22;
    AF(arg0, u16, 0xFC) = temp_a0;
    var_v1 = rsin((s32) (s16) temp_a0);
    if (var_v1 < 0) {
        var_v1 += 0xFF;
    }
    AF(arg0, s16, 0xA) = (s16) (AF(arg0, u16, 0x16) + (var_v1 >> 8));
    AF(temp_s1, u16, 0x12) = (u16) (AF(temp_s1, u16, 0x12) + 8);
}

void func_sc03_114_8017DEA8(u8 *arg0) {
    D_sc03_114_80183264[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017DEE4);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017DF88);

s32 func_sc03_114_8017E014(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0xFC) + 0x2D;
    AF(arg0, u16, 0xFC) = temp_v0_2;
    temp_v0 = ((rsin((s32) (s16) temp_v0_2) / 64) + 0x80) << 8;
    AF(arg1, s32, 0) = temp_v0;
    AF(arg1, s32, 4) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017E070);

void func_sc03_114_8017E170(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_114_8017E270();
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    if ((temp_v0 == 0) || ((AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1), func_8012931C((s32) arg0), (AF(arg0, s16, 0x32) == 0)) && ((u32) ((AF(arg0, u16, 0xA) + 0x1000) & 0xFFFF) >= 0x1001U))) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + AF(arg0, s32, 0x34));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0x30));
    AF(AF(arg0, void *, 0x20), u16, 8) = (u16) AF(arg0, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(AF(arg0, void *, 0x20), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    func_sc03_114_8017E2EC((s32) AF(arg0, void *, 0x20));
}

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017E270);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017E2EC);

INCLUDE_ASM("asm/stg/sc03_114/nonmatchings/sc03_114", func_sc03_114_8017E78C);

s32 func_sc03_114_8017E918(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_114_8017E94C(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc03_114_8017E94C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_801290DC(0x55, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = (s32) AF(arg0, s16, 6);
        if (arg1 != 0) {
            AF(temp_v0, s32, 0x10) = (s32) AF(arg1, s32, 0);
            AF(temp_v0, s32, 0x14) = (s32) AF(arg1, s32, 4);
            AF(temp_v0, s32, 0x18) = (s32) AF(arg1, s32, 8);
            AF(temp_v0, s32, 0x34) = (s32) AF(arg1, s32, 0xC);
        }
        if (arg2 != 0) {
            AF(AF(temp_v0, void *, 0x20), s32, 0x24) = arg2;
        }
    }
    return temp_v0;
}
