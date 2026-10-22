#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_006_8017BE9C(void) {
}

void func_sc05_006_8017BEA4(void) {
}

void func_sc05_006_8017BEAC(void) {
}

void func_sc05_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc05_006_80182E78[])();
extern void func_80147324();
extern void func_sc05_006_8017D0F8();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc05_006_80182E8C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc05_006_80182EA0[])();
extern void func_800D22E4();
extern void func_sc05_006_8017D7F0();
extern void (*D_sc05_006_80182FB8[])();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc05_006_8017D960();
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
extern void (*D_sc05_006_80183034[])();
void func_sc05_006_8017EA24(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_006_8017EA4C(void);
extern void func_800D1EBC();
extern void (*D_sc05_006_80183048[])();
extern void (*D_sc05_006_80183054[])();
void func_sc05_006_8017EA74(void);
extern u8 D_sc05_006_80183060;
extern void func_8016EE40();
extern u8 D_sc05_006_8018306C;
extern u8 D_sc05_006_80183080;
extern void func_sc05_006_8017EB38();
extern void (*D_sc05_006_80183088[])();
extern void (*D_sc05_006_801830B0[])();
extern void (*D_sc05_006_801830B8[])();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


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

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017BEBC);

void func_sc05_006_8017CD9C(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc05_006_8017CDD8(u8 *arg0) {
    D_sc05_006_80182E78[AF(arg0, u16, 2)]();
}

void func_sc05_006_8017CE14(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_006_8017CE64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017CEC0(u8 *arg0) {
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
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017CF44(u8 *arg0) {
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
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017D0AC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_006_8017D0F8((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017D0F8);

void func_sc05_006_8017D404(u8 *arg0) {
    D_sc05_006_80182E8C[AF(arg0, u16, 2)]();
}

void func_sc05_006_8017D440(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_006_8017D480(u8 *arg0) {
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
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017D4F0(u8 *arg0) {
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
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017D57C(u8 *arg0) {
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
    func_sc05_006_8017D0F8((s32) arg0);
}

void func_sc05_006_8017D650(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc05_006_8017D0F8((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc05_006_8017D6A4(u8 *arg0) {
    D_sc05_006_80182EA0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017D6E0);

void func_sc05_006_8017D794(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc05_006_8017D7F0((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017D7F0);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017D960);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017DA90);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017DE1C);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017E094);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017E1DC);

void func_sc05_006_8017E35C(u8 *arg0) {
    D_sc05_006_80182FB8[AF(arg0, u16, 2)]();
}

void func_sc05_006_8017E398(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc05_006_8017E3E4(u8 *arg0) {
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
        func_sc05_006_8017D960((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017E4D8);

void func_sc05_006_8017E558(u8 *arg0) {
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

void func_sc05_006_8017E60C(u8 *arg0) {
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

void func_sc05_006_8017E678(u8 *arg0, s32 arg1) {
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

void func_sc05_006_8017E704(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc05_006_8017E724(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc05_006_8017D960(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_006_8017E778(u8 *arg0) {
    D_sc05_006_80183034[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_006_8017E7B4(u8 *arg0) {
    func_sc05_006_8017EA24();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_006_8017E7F8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_006_8017E81C(u8 *arg0) {
    func_sc05_006_8017EA4C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_006_8017E85C(u8 *arg0) {
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

void func_sc05_006_8017E8D8(void) {
    func_800D1EBC();
}

void func_sc05_006_8017E8F8(u8 *arg0) {
    D_sc05_006_80183048[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_006_8017E934(u8 *arg0) {
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

void func_sc05_006_8017E9A8(u8 *arg0) {
    D_sc05_006_80183054[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_006_8017E9E4(u8 *arg0) {
    func_sc05_006_8017EA74();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc05_006_8017EA24(void) {
    func_8016EE40((s32) &D_sc05_006_80183060, 0x01000000);
}

void func_sc05_006_8017EA4C(void) {
    func_8016EE40((s32) &D_sc05_006_8018306C, 0x01000000);
}

void func_sc05_006_8017EA74(void) {
    func_8016EE40((s32) &D_sc05_006_80183080, 0x01000000);
}

void func_sc05_006_8017EA9C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_006_8017EB38, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_006_8017EB38((s32) &D_80126948);
}

void func_sc05_006_8017EB38(s32 arg0) {
    D_sc05_006_80183088[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017EB74);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017EC74);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017EE0C);

void func_sc05_006_8017EF68(u8 *arg0) {
    D_sc05_006_801830B0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017EFA4);

void func_sc05_006_8017F130(u8 *arg0) {
    D_sc05_006_801830B8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017F16C);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017F25C);

INCLUDE_ASM("asm/stg/sc05_006/nonmatchings/sc05_006", func_sc05_006_8017F354);

s32 func_sc05_006_8017F40C(void) {
    return 0x5F;
}
