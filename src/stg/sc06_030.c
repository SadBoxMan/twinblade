#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_030_8017BE9C(void) {
}

void func_sc06_030_8017BEA4(void) {
}

void func_sc06_030_8017BEAC(void) {
}

void func_sc06_030_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_030_80185898[])();
extern void (*D_sc06_030_801858F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_030_8017DA6C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_030_801858F8[])();
void func_sc06_030_8017DA94(void);
extern void func_800D1EBC();
extern void (*D_sc06_030_80185904[])();
extern u8 D_sc06_030_80185910;
extern void func_8016EE40();
extern u8 D_sc06_030_80185914;
extern void func_sc06_030_8017DB58();
extern void (*D_sc06_030_80185920[])();
extern void (*D_sc06_030_80185E2C[])();
extern u8 D_sc06_030_801B4C6C;
extern void (*D_sc06_030_801B4C84[])();
extern u8 D_sc06_030_801B4C8C;
extern void (*D_sc06_030_801B4C98[])();
extern void (*D_sc06_030_801B4D2C[])();
extern void (*D_sc06_030_801B4DA8[])();
extern void (*D_sc06_030_801B4DE4[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_sc06_030_8017BF34();
extern void func_8012C218();
extern s32 func_8012BEE8();
extern void func_sc06_030_80180228();
extern s32 func_sc06_030_80180C5C();

void func_sc06_030_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_030_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_030_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

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
extern s32 func_8012C354();
extern u8 D_sc06_030_80182184;
extern u8 D_sc06_030_801B4CF8;
extern u8 D_sc06_030_801B4DB0;
extern void func_sc06_030_80181164();


extern s16 D_80126B9A;
extern void (*D_sc06_030_80185E24[])();
extern s32 func_8012D624();
extern s32 func_8012B8A4();
extern s32 func_8001AAA0();
extern void func_80016714();
extern void func_8002A04C();
extern u8 D_sc06_030_80185DA0;
extern u8 D_sc06_030_80185DB8;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();
extern u8 D_sc06_030_8018F280;
extern void func_8001C214();
extern void func_80143970();
extern s32 func_8012CBCC();
extern u8 D_sc06_030_8018F000;
extern s32 func_sc06_030_801810D0();
extern void func_80171928();
extern void func_80171990();

extern void func_8002931C();
extern void func_80029514();
extern void func_8002AED0();
extern u8 D_sc06_030_80185C2C;
extern u8 D_sc06_030_8019FFA4;
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017BF34);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017BFBC);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C010);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C068);

void func_sc06_030_8017C114(u8 *arg0) {
    D_sc06_030_80185898[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C150);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C43C);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017C8D0);

void func_sc06_030_8017D7B0(u8 *arg0) {
    D_sc06_030_801858F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D7EC(u8 *arg0) {
    func_sc06_030_8017DA6C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D830(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_030_8017D854(u8 *arg0) {
    D_sc06_030_801858F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D890(u8 *arg0) {
    func_sc06_030_8017DA94();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D8D0(u8 *arg0) {
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

void func_sc06_030_8017D94C(void) {
    func_800D1EBC();
}

void func_sc06_030_8017D96C(u8 *arg0) {
    D_sc06_030_80185904[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D9A8(u8 *arg0) {
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

s32 func_sc06_030_8017DA24(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_8002931C(0x03390000);
        func_80029514(0x514);
        func_8002AED0();
        return 1;
    }
    return 0;
}

void func_sc06_030_8017DA6C(void) {
    func_8016EE40((s32) &D_sc06_030_80185910, 0x01000000);
}

void func_sc06_030_8017DA94(void) {
    func_8016EE40((s32) &D_sc06_030_80185914, 0x01000000);
}

void func_sc06_030_8017DABC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_030_8017DB58, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_030_8017DB58((s32) &D_80126948);
}

void func_sc06_030_8017DB58(s32 arg0) {
    D_sc06_030_80185920[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DB94);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DC70);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DE08);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017DF70);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017E120);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017EEF0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F0A0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F268);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F65C);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017F98C);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FBA4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FCF4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FDDC);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8017FE9C);

void func_sc06_030_80180058(u8 *arg0) {
    D_sc06_030_80185E24[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_8012D624((s32) arg0, 0x1E, 0x64) != 0)) {
        D_80126B9A = func_8012B8A4((s32) arg0);
    }
}

void func_sc06_030_801800D4(u8 *arg0) {
    D_sc06_030_80185E2C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180110);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8018017C);

void func_sc06_030_801801E8(s32 arg0) {
    func_sc06_030_80180228();
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180228);

s32 func_sc06_030_80180438(void) {
    return func_8001AAA0(0x7C) != 0;
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180458);

void func_sc06_030_8018047C(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

s32 func_sc06_030_8018049C(void) {
    return func_sc06_030_80180C5C() != 0;
}

void func_sc06_030_801804BC(u8 *arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    func_8002A04C((s32) arg0);
    func_8012C218((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180508);

void func_sc06_030_801805F8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((AF(arg0, s32, 0x1C) = temp_v0 = AF(arg0, s32, 0x1C) - 1) == 0) {
            func_80178B18((s32) arg0, (s32) &D_sc06_030_80185C2C, arg2);
            AF(arg0, u16, 0x34) = 1U;
            SetScript((s32) arg0, (s32) &D_sc06_030_8019FFA4);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            AF(arg0, s16, 2) = 2;
            temp_a0 = arg0 + 0x76;
            func_sc06_030_8017BF08((s32) temp_a0, (s32) temp_a0, 6, 0xD2);
            return;
        }
        if (AF(arg0, s32, 0x94) == 0x22) {
            func_8002D4C8(0xC7C, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801806D4);

void func_sc06_030_801807B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc06_030_80185DA0);
    SetScript((s32) arg0, (s32) &D_sc06_030_80185DB8);
    AF(arg0, s16, 2) = 1;
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_8018081C);

void func_sc06_030_801808F0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x1C) = temp_v0 = AF(arg0, s32, 0x1C) - 1) == 0) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 0x98) = 1;
        func_8002D4C8(0x940, 0, arg2);
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180940);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801809DC);

void func_sc06_030_80180ABC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_030_8018F280);
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s16, 2) = 1;
    func_80143970((s32) arg0);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x400;
    AF(arg0, s32, 0x1C) = 0x78;
}

void func_sc06_030_80180B50(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x300);
    if (func_8012CBCC((s32) arg0) != 0) {
        func_8012C218((s32) arg0);
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc06_030_80180BBC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc06_030_8018F000);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u8, 0xC0) = 1;
    func_80143970((s32) arg0);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(arg0, s32, 0x1C) = 0x78;
}

s32 func_sc06_030_80180C44(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x6F;
    if (arg0 < 0x514) {
        var_v0 = 0x8A;
    }
    return var_v0;
}

s32 func_sc06_030_80180C5C(void) {
    return func_8001AAA0(0x6F);
}

void func_sc06_030_80180C7C(void) {
    func_8016EE40((s32) &D_sc06_030_801B4C6C, 0x01000000);
}

void func_sc06_030_80180CA4(u8 *arg0) {
    D_sc06_030_801B4C84[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180CE0);

void func_sc06_030_80180D28(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_030_80180D68(void) {
    func_8016EE40((s32) &D_sc06_030_801B4C8C, 0x01000000);
}

void func_sc06_030_80180D90(u8 *arg0) {
    D_sc06_030_801B4C98[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180DCC);

void func_sc06_030_80180ED4(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180F14);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80180FF4);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_801810D0);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181164);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181588);

void func_sc06_030_801818FC(u8 *arg0) {
    D_sc06_030_801B4D2C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181938);

INCLUDE_ASM("asm/stg/sc06_030/nonmatchings/sc06_030", func_sc06_030_80181A80);

void func_sc06_030_80181C30(u8 *arg0) {
    D_sc06_030_801B4DA8[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181C6C(u8 *arg0) {
    D_sc06_030_801B4DE4[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181CA8(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_030_801B4CF8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_030_80181D50(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_030_801B4DB0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_030_80181DD4(u8 *arg0) {
    func_sc06_030_80181164();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}
