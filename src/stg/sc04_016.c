#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_016_8017BE9C(void) {
}

void func_sc04_016_8017BEA4(void) {
}

void func_sc04_016_8017BEAC(void) {
}

void func_sc04_016_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_016_80183A38[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_016_8017CF70(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc04_016_80183A40[])();
void func_sc04_016_8017CF98(void);
extern u8 D_sc04_016_80183A4C;
extern void func_8016EE40();
extern u8 D_sc04_016_80183A58;
extern void func_sc04_016_8017D010();
extern void (*D_sc04_016_80183A5C[])();
extern void (*D_sc04_016_80184C34[])();
extern void (*D_sc04_016_801A35AC[])();
extern void (*D_sc04_016_801A35BC[])();

extern void func_8012931C();
extern void func_801292C8();
extern void func_sc04_016_8017F82C();
extern void func_sc04_016_8017F8A8();
extern s32 func_sc04_016_8017FF08();
extern s32 func_801290DC();

extern u8 D_sc04_016_80183A64;
extern u8 D_sc04_016_80183FF4;
extern u8 D_sc04_016_80183DFC;
extern u8 D_sc04_016_801840EC;

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_800CFBCC();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_80126958;
extern s32 D_8012695C;
extern u8 D_sc04_016_80183C54;
extern u8 D_sc04_016_80183EAC;
extern u8 D_sc04_016_8018458C;
extern u8 D_sc04_016_8018492C;
extern s32 func_800149E0();
extern s32 func_800CF8B4();
extern s32 func_80029178();
extern void func_8017B368();
extern void func_80029124();
extern s32 func_801789AC();
extern void func_80178D18();
extern u8 D_sc04_016_80183B5C;
extern u8 D_sc04_016_801946E4;
extern u8 D_sc04_016_80194934;
extern u8 D_sc04_016_80194B84;
extern u8 D_sc04_016_80194DD4;
extern u8 D_sc04_016_80195024;
extern u8 D_sc04_016_80195274;
extern u8 D_sc04_016_801954C4;
extern void func_sc04_016_8017DD18();
extern void func_800183E0();
extern void func_8012C218();
extern u8 D_sc04_016_801844E4;
extern u8 D_sc04_016_801849BC;
extern u8 D_sc04_016_80184174;
extern u8 D_sc04_016_8018430C;
extern u8 D_sc04_016_801849AC;
extern u8 D_sc04_016_8018435C;
extern u8 D_sc04_016_801849B4;
extern u8 D_sc04_016_801849CC;
extern u8 D_sc04_016_80184A0C;
extern void func_80178B18();
extern u8 D_sc04_016_80183A0C;
extern void func_800D1724();
extern u8 D_sc04_016_80184404;
extern void func_sc04_016_8017DDA0();
extern s32 func_sc04_016_8017E6E0();
extern void func_sc04_016_8017DF8C();
extern void func_sc04_016_8017E26C();
extern void func_sc04_016_8017EA74();
extern s32 D_sc04_016_801A35B4[];
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012AD50();
extern void func_8012C098();

extern s32 func_80012ABC();

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017BEBC);

void func_sc04_016_8017CD9C(u8 *arg0) {
    D_sc04_016_80183A38[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_016_8017CDD8(u8 *arg0) {
    func_sc04_016_8017CF70();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_016_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc04_016_8017CE40(u8 *arg0) {
    D_sc04_016_80183A40[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_016_8017CE7C(u8 *arg0) {
    func_sc04_016_8017CF98();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_016_8017CEBC(u8 *arg0) {
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

s32 func_sc04_016_8017CF38(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(3);
        return 1;
    }
    return 0;
}

void func_sc04_016_8017CF70(void) {
    func_8016EE40((s32) &D_sc04_016_80183A4C, 0x01000000);
}

void func_sc04_016_8017CF98(void) {
    func_8016EE40((s32) &D_sc04_016_80183A58, 0x01000000);
}

void func_sc04_016_8017CFC0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126958 = 0x4B0;
    func_sc04_016_8017D010((s32) &D_80126948);
}

void func_sc04_016_8017D010(s32 arg0) {
    D_sc04_016_80183A5C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017D04C);

void func_sc04_016_8017D0EC(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x3C) = 0x18C;
    AF(arg0, s32, 0x40) = -0x610;
    AF(arg0, s32, 0x48) = -0xCD;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x4C) = -0x202;
    AF(arg0, s32, 0x50) = 0;
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017D118);

void func_sc04_016_8017D588(s32 arg0) {
    if (!(func_800149E0(0) & 0x840) || (func_800CF8B4() == 0)) {
        if (func_80029178(0x125) & 0xFF) {
            func_8017B368(arg0, (s32) &D_sc04_016_8018492C);
        }
        if (func_80029178(0x126) & 0xFF) {
            func_80029124(0x126, 0);
            SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183C54);
        }
        if (func_80029178(0x131) & 0xFF) {
            func_80029124(0x131, 0);
            SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183EAC);
        }
        if (func_80029178(0x127) & 0xFF) {
            AF(AF(arg0, void *, 0xD4), s16, 0x10A) = -0x7300;
        } else {
            AF(AF(arg0, void *, 0xD4), s16, 0x10A) = -0x7100;
        }
        if (func_80029178(0x133) & 0xFF) {
            func_80029124(0x133, 0);
            SetScript((s32) AF(arg0, void *, 0xD4), (s32) &D_sc04_016_8018458C);
        }
        if (func_801789AC(arg0) != 0) {
            func_80178D18(arg0);
            goto block_15;
        }
    } else {
block_15:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_016_8017D6D8(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    if ((AF(arg0, s32, 0x90) == &D_sc04_016_80183A64) && (AF(arg0, s16, 0x98) == 0)) {
        SetScript((s32) arg0, (s32) &D_sc04_016_80183B5C);
    }
    temp_s1 = AF(arg0, s32, 0x90);
    if (temp_s1 == &D_sc04_016_80183C54) {
        if (AF(arg0, s16, 0x98) == 0) {
            SetScript((s32) arg0, (s32) &D_sc04_016_80183DFC);
        }
        if ((AF(arg0, s32, 0x90) == temp_s1) && (AF(arg0, s16, 0x98) == 0)) {
            SetScript((s32) arg0, (s32) &D_sc04_016_80183DFC);
        }
    }
    func_sc04_016_8017DD18((s32) arg0);
    if (func_80029178(0x128) & 0xFF) {
        func_80029124(0x128, 0);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x129) & 0xFF) {
        temp_v1 = AF(arg0, s32, 0x1C);
        if (temp_v1 == 0) {
            func_800183E0((s32) &D_sc04_016_80195274);
            var_v0 = (rand() & 0x1F) + 0x1E;
        } else {
            if (temp_v1 == 2) {
                func_800183E0((s32) &D_sc04_016_801954C4);
            }
            var_v0 = AF(arg0, s32, 0x1C) - 1;
        }
        AF(arg0, s32, 0x1C) = var_v0;
    }
    if (func_80029178(0x12A) & 0xFF) {
        temp_v1_2 = AF(arg0, s32, 0x1C);
        if (temp_v1_2 == 0) {
            func_800183E0((s32) &D_sc04_016_801946E4);
            var_v0_2 = (rand() & 0x1F) + 0x23;
        } else {
            if (temp_v1_2 == 2) {
                func_800183E0((s32) &D_sc04_016_80194934);
            }
            var_v0_2 = AF(arg0, s32, 0x1C) - 1;
        }
        AF(arg0, s32, 0x1C) = var_v0_2;
    }
    if (func_80029178(0x12B) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80194B84);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x12C) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80194DD4);
        AF(arg0, s32, 0x1C) = 0;
    }
    if (func_80029178(0x130) & 0xFF) {
        func_800183E0((s32) &D_sc04_016_80195024);
        AF(arg0, s32, 0x1C) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017D924);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017DA50);

void func_sc04_016_8017DCDC(u8 *arg0) {
    D_sc04_016_80184C34[AF(arg0, u16, 2)]();
}

void func_sc04_016_8017DD18(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017DDA0);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017DE80);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017DF68);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017DF8C);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017E26C);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017E6A0);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017E6E0);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017E960);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017EA74);

void func_sc04_016_8017EB30(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183A64);
}

void func_sc04_016_8017EB5C(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183FF4);
}

void func_sc04_016_8017EB88(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc04_016_80183DFC);
}

void func_sc04_016_8017EBB4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7500;
}

void func_sc04_016_8017EBC4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7400;
}

void func_sc04_016_8017EBD4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7300;
}

void func_sc04_016_8017EBE4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0x10A) = -0x7200;
}

void func_sc04_016_8017EBF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0xD4), s16, 0xA) = -0x202;
    func_8012C218(AF(arg0, s32, 0xD8), arg1, arg2, arg3);
    func_8012C218(AF(arg0, s32, 0xF8));
    AF(AF(arg0, void *, 0xF4), s16, 0xFC) = 1;
}

void func_sc04_016_8017EC48(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD4);
    SetScript(temp_s0, (s32) &D_sc04_016_801844E4);
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849BC;
    AF(temp_s0, s32, 0xEC) = 0;
}

void func_sc04_016_8017EC90(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD0);
    SetScript(temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849AC;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_8018430C;
}

void func_sc04_016_8017ECE0(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xD0);
    AF(temp_s0, s16, 6) = 0xE0;
    AF(temp_s0, s16, 0xE) = 0;
    AF(AF(temp_s0, void *, 0x20), s16, 0x12) = 0x400;
    SetScript((s32) temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849B4;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_8018435C;
}

void func_sc04_016_8017ED48(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0xD0);
    SetScript(temp_s0, (s32) &D_sc04_016_80184174);
    AF(temp_s0, s32 *, 0xDC) = &D_sc04_016_801849CC;
    AF(temp_s0, s32, 0x1C) = 0;
    AF(temp_s0, s32 *, 0xEC) = &D_sc04_016_801840EC;
}

void func_sc04_016_8017ED98(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc04_016_801840EC);
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017EDC4);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017EE20);

void func_sc04_016_8017EE78(u8 *arg0) {
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
    func_80029124(0x131, 0);
    func_80029124(0x133, 0);
    func_80178B18((s32) arg0, (s32) &D_sc04_016_80184A0C);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_016_8017EF58(u8 *arg0) {
    func_800D1724((s32) &D_sc04_016_80183A0C);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_016_8017EF9C(void) {
}

void func_sc04_016_8017EFA4(u8 *arg0) {
    s32 temp_v1;

    if ((AF(arg0, s32, 0x90) == &D_sc04_016_8018435C) && (AF(arg0, s16, 0x98) == 0)) {
        SetScript((s32) arg0, (s32) &D_sc04_016_80184404);
    }
    if ((AF(arg0, s32, 0x90) == &D_sc04_016_80184174) && ((temp_v1 = AF(arg0, s32, 0x94), (temp_v1 == 0)) || (temp_v1 == 8))) {
        func_8002D4C8(0xB8F, 0);
    }
    func_sc04_016_8017DDA0((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F03C);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F140);

void func_sc04_016_8017F1BC(void) {
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F1C4);

void func_sc04_016_8017F2AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x78) {
        if (func_sc04_016_8017E6E0() == 0) {
            func_sc04_016_8017DF8C((s32) arg0);
        }
        func_sc04_016_8017E26C((s32) arg0);
        return;
    }
    func_sc04_016_8017EA74();
    func_8012C218((s32) arg0);
}

void func_sc04_016_8017F320(u8 *arg0) {
    D_sc04_016_801A35AC[AF(arg0, u16, 2)]();
}

void func_sc04_016_8017F35C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, D_sc04_016_801A35B4[AF(arg0, s16, 0x70)]);
        func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x14) = (s32) AF(arg0, s32, 8);
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc04_016_8017F3EC(u8 *arg0) {
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

void func_sc04_016_8017F464(u8 *arg0) {
    D_sc04_016_801A35BC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F4A0);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F544);

s32 func_sc04_016_8017F5D0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0_2 = AF(arg0, u16, 0xFC) + 0x2D;
    AF(arg0, u16, 0xFC) = temp_v0_2;
    temp_v0 = ((rsin((s32) (s16) temp_v0_2) / 64) + 0x80) << 8;
    AF(arg1, s32, 0) = temp_v0;
    AF(arg1, s32, 4) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F62C);

void func_sc04_016_8017F72C(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc04_016_8017F82C();
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
    func_sc04_016_8017F8A8((s32) AF(arg0, void *, 0x20));
}

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F82C);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017F8A8);

INCLUDE_ASM("asm/stg/sc04_016/nonmatchings/sc04_016", func_sc04_016_8017FD48);

s32 func_sc04_016_8017FED4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc04_016_8017FF08(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc04_016_8017FF08(s32 arg0, s32 arg1, s32 arg2) {
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
