#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_006_8017BE9C(void) {
}

void func_sc04_006_8017BEA4(void) {
}

void func_sc04_006_8017BEAC(void) {
}

void func_sc04_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_006_801836B0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_006_8017D0AC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc04_006_8017D0D4(void);
extern void func_800D1EBC();
extern void (*D_sc04_006_801836C4[])();
extern u8 D_sc04_006_801836D0;
extern void func_8016EE40();
extern u8 D_sc04_006_801836D4;
extern void func_sc04_006_8017D22C();
extern void (*D_sc04_006_801836E0[])();
extern void (*D_sc04_006_80183708[])();
extern void (*D_sc04_006_80183744[])();
extern void (*D_sc04_006_80195020[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_006_8017FF00;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc04_006_80194D10;
extern void func_sc04_006_8017E75C();
extern s32 D_sc04_006_80194D78[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc04_006_80194F44;
extern s32 D_sc04_006_80194F48;
extern s32 D_sc04_006_80194F5C;
extern s32 D_sc04_006_80194F70;
extern s32 D_sc04_006_80194FDC;
extern s32 D_sc04_006_80194EC0[];
extern s32 D_sc04_006_80194E3C[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc04_006_8017E504();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc04_006_80195048[])();
extern u8 D_sc04_006_80194D44;
extern u8 D_sc04_006_801954E8;
extern u8 D_sc04_006_80195708;
extern void func_8002D4C8();
extern u8 D_sc04_006_801954F8;
extern u8 D_sc04_006_80195600;
extern void (*D_sc04_006_801957C4[])();
extern void (*D_sc04_006_8019B250[])();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_006_801836F0[];
extern s32 func_8013B7F4();
extern void func_80016714();

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
extern void func_8012BF4C();
extern void func_8012AD50();
extern void func_80146E90();
extern u8 D_sc04_006_80183738;
extern void func_800159E4();
extern void func_8001CC3C();
extern s32 func_80146E98();
extern s32 func_8012BEE8();
extern u16 D_sc04_006_8019572A;
extern u8 D_sc04_006_8019ADFC;
extern s32 func_8012BCCC();


extern u8 D_sc04_006_8019AE0C;
extern void func_8012B23C();
extern u8 D_sc04_006_8019AED4;
extern void func_sc04_006_8017EF74();
extern void func_80130D48();
extern void func_sc04_006_8017F354();

extern u8 D_sc04_006_801836F8;
extern s32 func_8012C1B8();
extern void func_8001C2C4();
extern u8 D_sc04_006_80195728;
extern u8 D_sc04_006_8019575C;
extern s32 func_80143970();
extern s32 func_8012BD14();

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017BEBC);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017CD9C);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017CE0C);

void func_sc04_006_8017CE7C(u8 *arg0) {
    D_sc04_006_801836B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017CEB8(u8 *arg0) {
    func_sc04_006_8017D0AC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CEFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_006_8017CF20(u8 *arg0) {
    func_sc04_006_8017D0D4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CF60(u8 *arg0) {
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

void func_sc04_006_8017CFDC(void) {
    func_800D1EBC();
}

void func_sc04_006_8017CFFC(u8 *arg0) {
    D_sc04_006_801836C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017D038(u8 *arg0) {
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

void func_sc04_006_8017D0AC(void) {
    func_8016EE40((s32) &D_sc04_006_801836D0, 0x01000000);
}

void func_sc04_006_8017D0D4(void) {
    func_8016EE40((s32) &D_sc04_006_801836D4, 0x01000000);
}

void func_sc04_006_8017D0FC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_006_8017D22C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc04_006_8017D22C((s32) &D_80126948);
}

void func_sc04_006_8017D194(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_006_8017D22C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc04_006_8017D22C((s32) &D_80126948);
}

void func_sc04_006_8017D22C(s32 arg0) {
    D_sc04_006_801836E0[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D268);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D344);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D3E4);

s32 func_sc04_006_8017D584(s32 arg0) {
    return func_8013B7F4(D_sc04_006_801836F0[arg0], 0);
}

void func_sc04_006_8017D5B4(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, s16, 0x5C) = 0x40;
        AF(arg0, s32 *, 0x58) = &D_sc04_006_801836F8;
        AF(arg0, u8, 0x75) = 2;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

s32 func_sc04_006_8017D638(void) {
    return 0x55;
}

void func_sc04_006_8017D640(u8 *arg0) {
    D_sc04_006_80183708[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017D67C(s32 arg0) {
    func_8012BF4C(arg0, 0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D6B0);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017D800);

void func_sc04_006_8017D8EC(u8 *arg0) {
    D_sc04_006_80183744[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017D928(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_800159E4(arg0 + 4, (s32) (arg0 + 0x10));
    func_8001CC3C(temp_s1, (s32) &D_sc04_006_80183738, 0x270, 0x100);
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

void func_sc04_006_8017DA0C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_80146E90((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DA78);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DB64);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DBC8);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DD28);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DF0C);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017DFC8);

void func_sc04_006_8017E074(u8 *arg0) {
    D_sc04_006_80195020[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E0B0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc04_006_80194D10) != 0) {
        if (!(func_80029178(D_sc04_006_80194D78[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc04_006_8017E75C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_006_8017FF00);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_006_8017E184(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc04_006_8017E1AC(void) {
}

void func_sc04_006_8017E1B4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_006_80194F48 = 0;
            func_80029124(D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_006_80194F44 = 2;
        } else {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_006_80194E3C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_006_80194F44 = 0;
            D_sc04_006_80194F48 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc04_006_80194F70);
    } else {
        var_a1 = &D_sc04_006_80194FDC;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc04_006_8017E300(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc04_006_8017E504() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc04_006_8017E420(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc04_006_8017E44C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_006_8017E45C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_006_8017E46C(u8 *arg0) {
    func_80029124(D_sc04_006_80194D78[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_006_8017E4AC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_006_8017E4E0(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017E504);

void func_sc04_006_8017E568(u8 *arg0) {
    D_sc04_006_80195048[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E5A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_006_80194D44) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_006_80195708);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_006_801954E8);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_006_8017E62C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_801954F8);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_80195600);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc04_006_8017E6EC(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_006_80195708);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_006_801954E8);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017E75C);

void func_sc04_006_8017E854(u8 *arg0) {
    D_sc04_006_801957C4[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017E890(s32 arg0) {
    void *temp_a0;

    if (func_8012C354(arg0, (s32) &D_sc04_006_80195728) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc04_006_8019575C;
        AF(arg0, s32, 0xB4) = -0x2021;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc04_006_8019ADFC);
        if (AF(arg0, u16, 0x70) & 1) {
            temp_a0 = AF(arg0, void *, 0x20);
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x5C) = 0;
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
            return;
        }
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
    }
}

void func_sc04_006_8017E948(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (func_8012BD14() > 0x18FFF) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        AF(arg0, s32, 0xCC) = func_80143970((s32) arg0);
        AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    }
}

void func_sc04_006_8017E9EC(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc04_006_8019572A;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc04_006_8017EA74(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019ADFC, arg2);
}

void func_sc04_006_8017EAA0(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc04_006_8017EAE0(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AE0C);
    AF(arg0, s32, 0x1C) = 0x17;
}

void func_sc04_006_8017EB20(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_006_8017EB54(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012B23C((s32) arg0);
    func_sc04_006_8017EF74((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AED4);
    AF(arg0, s32, 0x1C) = 0x23;
    AF(arg0, s32, 0xE0) = 0;
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EBA8);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EC64);

void func_sc04_006_8017ED40(u8 *arg0) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        if (!(rand() & 3)) {
            func_80130D48((s32) arg0);
        }
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc04_006_8017F354((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EDD8);

void func_sc04_006_8017EDEC(void) {
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EDF4);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EE34);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EF74);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017EFF4);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F180);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F354);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F43C);

void func_sc04_006_8017F4B4(u8 *arg0) {
    D_sc04_006_8019B250[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F4F0);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F5EC);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017F87C);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FA10);

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FA68);

void func_sc04_006_8017FAE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc04_006/nonmatchings/sc04_006", func_sc04_006_8017FB28);
