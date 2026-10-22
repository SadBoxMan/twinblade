#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_110_8017BE9C(void) {
}

void func_sc03_110_8017BEA4(void) {
}

void func_sc03_110_8017BEAC(void) {
}

void func_sc03_110_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_110_80185868[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc03_110_8017BEBC();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void func_80146A6C();
extern void (*D_sc03_110_801858C0[])();
extern void func_80147324();
extern void func_sc03_110_8017D030();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_110_801858D4[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_110_801858E8[])();
extern void func_800D22E4();
extern void func_sc03_110_8017D728();
extern void (*D_sc03_110_80185940[])();
void func_sc03_110_8017E9E4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_110_80185948[])();
void func_sc03_110_8017EA0C(void);
extern void func_800D1EBC();
extern void (*D_sc03_110_80185954[])();
extern u8 D_sc03_110_80185960;
extern void func_8016EE40();
extern u8 D_sc03_110_8018596C;
extern void func_sc03_110_8017EAD8();
extern void (*D_sc03_110_80185980[])();
extern void func_sc03_110_8017F2F8();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc03_110_8019C7D0[])();
extern void func_sc03_110_80181CB4();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_110_8019ECC0;
extern u8 D_sc03_110_8019C7F0;
extern s32 func_8012D5E4();
extern s32 func_sc03_110_80181C9C();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern s32 func_8012C044();
extern void (*D_sc03_110_8019C0AC[])();
extern void func_sc03_110_80180D2C();
extern s32 func_sc03_110_80180CF4();
extern void func_8012B23C();
extern void func_8012B178();
extern s32 func_8012BEE8();
extern s16 D_80126B96;
extern u16 D_80126B9A;
extern void func_8012AD80();
extern s32 func_8012D624();
extern s32 func_8012BE54();
extern void func_8012B21C();
extern void func_8012E88C();
extern s32 func_80143994();
extern u8 D_sc03_110_8019BFAC;
extern void func_sc03_110_80180AF0();
extern u8 D_sc03_110_80182098;
extern void func_8012B030();
extern void func_8012E8C4();
extern void func_sc03_110_80180E10();
extern void func_sc03_110_80180C40();
extern void func_80016714();
extern s32 func_8012C098();

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
extern u8 D_sc03_110_8019BF28;
extern void func_8012CAE4();
extern void func_8001C810();

extern u8 D_sc03_110_8019BB90;
extern u8 D_sc03_110_8019BC50;
extern s32 D_sc03_110_801A2368;
extern s32 D_sc03_110_801A236C;
extern s32 D_sc03_110_801A2454;
extern void func_sc03_110_8017F3D4();

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017BFEC);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017C378);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017C5F0);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017C738);

void func_sc03_110_8017C8B8(u8 *arg0) {
    D_sc03_110_80185868[AF(arg0, u16, 2)]();
}

void func_sc03_110_8017C8F4(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc03_110_8017C940(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc03_110_8017BEBC((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017CA34);

void func_sc03_110_8017CAB4(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_110_8017CB68(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_110_8017CBD4(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_110_8017CC60(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc03_110_8017CC80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_110_8017BEBC(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_110_8017CCD4(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_110_8017CD10(u8 *arg0) {
    D_sc03_110_801858C0[AF(arg0, u16, 2)]();
}

void func_sc03_110_8017CD4C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_110_8017CD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017CDF8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017CE7C(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017CFE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_110_8017D030((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017D030);

void func_sc03_110_8017D33C(u8 *arg0) {
    D_sc03_110_801858D4[AF(arg0, u16, 2)]();
}

void func_sc03_110_8017D378(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_110_8017D3B8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017D428(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017D4B4(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_110_8017D030((s32) arg0);
}

void func_sc03_110_8017D588(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_110_8017D030((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_110_8017D5DC(u8 *arg0) {
    D_sc03_110_801858E8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017D618);

void func_sc03_110_8017D6CC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_110_8017D728((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017D728);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017D898);

void func_sc03_110_8017E778(u8 *arg0) {
    D_sc03_110_80185940[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_110_8017E7B4(u8 *arg0) {
    func_sc03_110_8017E9E4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_110_8017E7F8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_110_8017E81C(u8 *arg0) {
    D_sc03_110_80185948[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_110_8017E858(u8 *arg0) {
    func_sc03_110_8017EA0C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_110_8017E898(u8 *arg0) {
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

void func_sc03_110_8017E914(void) {
    func_800D1EBC();
}

void func_sc03_110_8017E934(u8 *arg0) {
    D_sc03_110_80185954[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_110_8017E970(u8 *arg0) {
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

void func_sc03_110_8017E9E4(void) {
    func_8016EE40((s32) &D_sc03_110_80185960, 0x01000000);
}

void func_sc03_110_8017EA0C(void) {
    func_8016EE40((s32) &D_sc03_110_8018596C, 0x01000000);
}

void func_sc03_110_8017EA34(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_110_8017EAD8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_110_8017EAD8((s32) &D_80126948);
}

void func_sc03_110_8017EAD8(s32 arg0) {
    D_sc03_110_80185980[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017EB14);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017EBFC);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017ED94);

void func_sc03_110_8017F234(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C810(temp_v0, (s32) &D_sc03_110_8019BF28);
        temp_a0 = AF(arg0, s32, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x60000000);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_110_8017F2D8(s32 arg0) {
    func_sc03_110_8017F2F8(arg0);
}

void func_sc03_110_8017F2F8(void) {
    s32 temp_s0;
    s32 temp_v0;

    switch (D_sc03_110_801A2454) {                  /* irregular */
    case 0:
        D_sc03_110_801A2368 = 1;
        D_sc03_110_801A236C = 0;
        D_sc03_110_801A2454 = 1;
        return;
    case 1:
        temp_v0 = D_sc03_110_801A2368 - 1;
        D_sc03_110_801A2368 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_110_801A2368 = D_sc03_110_801A2454;
            temp_s0 = D_sc03_110_801A236C * 6;
            func_sc03_110_8017F3D4((s32) &D_sc03_110_8019BB90, temp_s0);
            func_sc03_110_8017F3D4((s32) &D_sc03_110_8019BC50, temp_s0);
            D_sc03_110_801A236C = (D_sc03_110_801A236C + 1) & 0xF;
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017F3D4);

s32 func_sc03_110_8017F434(void) {
    return 0x49;
}

void func_sc03_110_8017F43C(u8 *arg0) {
    D_sc03_110_8019C0AC[AF(arg0, u16, 2)]();
    func_sc03_110_80180D2C((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (func_8012C044((s32) arg0) == 1)) {
        func_sc03_110_80180CF4((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017F4CC);

void func_sc03_110_8017F628(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    func_8012B178(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017F674);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017F9CC);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017FB14);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017FBC8);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8017FF64);

void func_sc03_110_8017FFC8(u8 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    temp_v1 = (temp_v0 >> 3) + 0xE00;
    AF(temp_s0, s16, 0x1C) = temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    AF(temp_s0, s16, 0x1A) = (s16) ((temp_v0 >> 1) + 0x800);
    func_8012AD80((s32) arg0);
    if (func_8012D624((s32) arg0, 0x20, 5) == 1) {
        D_80126B96 = 0x11;
        D_80126B9A = AF(AF(arg0, void *, 0x20), u16, 0x12);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_110_80180CF4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc03_110_80180094(u8 *arg0) {
    if (func_8012BE54() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        func_8012B21C((s32) arg0);
        func_8012E88C((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_801800F0);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180270);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8018035C);

void func_sc03_110_8018066C(s32 arg0) {
    func_sc03_110_80180AF0();
    func_sc03_110_80180D2C(arg0);
    SetScript(arg0, (s32) &D_sc03_110_8019BFAC);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_110_801806B8(s32 arg0) {
    func_sc03_110_80180AF0();
    func_sc03_110_80180D2C(arg0);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_801806E8);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8018076C);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180AF0);

void func_sc03_110_80180B54(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_110_80182098);
    func_8012B030((s32) arg0);
}

void func_sc03_110_80180BA0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc03_110_80180BB8(s32 arg0) {
    func_8012E8C4();
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_110_80180E10(arg0);
        func_8002A04C(arg0);
        func_sc03_110_80180C40(arg0);
    }
}

void func_sc03_110_80180C08(s32 arg0) {
    func_sc03_110_80180E10(arg0);
    func_8002A04C(arg0);
    func_sc03_110_80180C40(arg0);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180C40);

s32 func_sc03_110_80180CF4(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xD0), 0x38);
    return func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180D2C);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180E10);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80180F08);

void func_sc03_110_80180FE0(u8 *arg0) {
    s32 temp_v0;

    D_sc03_110_8019C7D0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_110_80181CB4((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8018105C);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8018111C);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80181244);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_801813B4);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80181548);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_8018179C);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_801818A8);

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80181A44);

void func_sc03_110_80181B00(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc03_110_80181B8C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_110_8019ECC0);
}

s32 func_sc03_110_80181BC4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_110_8019C7F0, (s32) (&D_sc03_110_8019C7F0 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_110/nonmatchings/sc03_110", func_sc03_110_80181BF0);

s32 func_sc03_110_80181C9C(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_110_80181CB4(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}
