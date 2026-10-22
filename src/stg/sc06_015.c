#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_015_8017BE9C(void) {
}

void func_sc06_015_8017BEA4(void) {
}

void func_sc06_015_8017BEAC(void) {
}

void func_sc06_015_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_015_8018248C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_015_80182474;
extern void (*D_sc06_015_80182494[])();
extern u8 D_sc06_015_80182480;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_015_8017D46C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_015_80182544[])();
void func_sc06_015_8017E554(void);
extern void (*D_sc06_015_8018254C[])();
void func_sc06_015_8017D494(void);
extern void func_800D1EBC();
extern void (*D_sc06_015_80182558[])();
extern u8 D_sc06_015_80182564;
extern void func_8016EE40();
extern u8 D_sc06_015_80182568;
extern void func_sc06_015_8017D554();
extern void (*D_sc06_015_80182570[])();
extern void func_sc06_015_8017D818();
extern void (*D_sc06_015_8018F8A4[])();
extern void (*D_sc06_015_8018F920[])();
extern void (*D_sc06_015_8018F95C[])();
extern u8 D_sc06_015_80191E34;
extern void (*D_sc06_015_80191E4C[])();
extern u8 D_sc06_015_80191E54;
extern void (*D_sc06_015_80191E60[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_015_801825B8[];
extern s32 func_8013B7F4();

extern s32 func_8012C354();
extern u8 D_sc06_015_8017EDB4;
extern u8 D_sc06_015_8018F870;
extern u8 D_sc06_015_8018F928;
extern void func_sc06_015_8017D8AC();

extern s32 func_sc06_015_8017E9A8();
extern void func_80171928();
extern void func_80171990();

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

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017BEBC);

void func_sc06_015_8017CD9C(u8 *arg0) {
    D_sc06_015_8018248C[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017CDD8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc06_015_80182474, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc06_015_8017CF9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc06_015_8017D030(u8 *arg0) {
    D_sc06_015_80182494[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017D06C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_015_80182480, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc06_015_8017D110(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017D174);

s32 func_sc06_015_8017D1BC(u8 *arg0) {
    func_sc06_015_8017D46C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_015_8017D200(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_015_8017D224(u8 *arg0) {
    D_sc06_015_80182544[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D260(u8 *arg0) {
    func_sc06_015_8017E554();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_015_8017D2A4(u8 *arg0) {
    D_sc06_015_8018254C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D2E0(u8 *arg0) {
    func_sc06_015_8017D494();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_015_8017D320(u8 *arg0) {
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

void func_sc06_015_8017D39C(void) {
    func_800D1EBC();
}

void func_sc06_015_8017D3BC(u8 *arg0) {
    D_sc06_015_80182558[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_015_8017D3F8(u8 *arg0) {
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

void func_sc06_015_8017D46C(void) {
    func_8016EE40((s32) &D_sc06_015_80182564, 0x01000000);
}

void func_sc06_015_8017D494(void) {
    func_8016EE40((s32) &D_sc06_015_80182568, 0x01000000);
}

void func_sc06_015_8017D4BC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_015_8017D554, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_015_8017D554((s32) &D_80126948);
}

void func_sc06_015_8017D554(s32 arg0) {
    D_sc06_015_80182570[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017D590);

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017D630);

s32 func_sc06_015_8017D7C8(s32 arg0) {
    return func_8013B7F4(D_sc06_015_801825B8[arg0], 0);
}

void func_sc06_015_8017D7F8(s32 arg0) {
    func_sc06_015_8017D818(arg0);
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017D818);

s32 func_sc06_015_8017D8A4(void) {
    return 0x6E;
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017D8AC);

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017DCD0);

void func_sc06_015_8017E044(u8 *arg0) {
    D_sc06_015_8018F8A4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E080);

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E1C8);

void func_sc06_015_8017E378(u8 *arg0) {
    D_sc06_015_8018F920[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017E3B4(u8 *arg0) {
    D_sc06_015_8018F95C[AF(arg0, u16, 2)]();
}

void func_sc06_015_8017E3F0(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_015_8018F870) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_015_8017EDB4);
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

void func_sc06_015_8017E498(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_015_8018F928) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_015_8017EDB4);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_015_8017E51C(u8 *arg0) {
    func_sc06_015_8017D8AC();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_015_8017E554(void) {
    func_8016EE40((s32) &D_sc06_015_80191E34, 0x01000000);
}

void func_sc06_015_8017E57C(u8 *arg0) {
    D_sc06_015_80191E4C[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E5B8);

void func_sc06_015_8017E600(s32 arg0) {
    if (func_sc06_015_8017E9A8() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_015_8017E640(void) {
    func_8016EE40((s32) &D_sc06_015_80191E54, 0x01000000);
}

void func_sc06_015_8017E668(u8 *arg0) {
    D_sc06_015_80191E60[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E6A4);

void func_sc06_015_8017E7AC(s32 arg0) {
    if (func_sc06_015_8017E9A8() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E7EC);

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E8CC);

INCLUDE_ASM("asm/stg/sc06_015/nonmatchings/sc06_015", func_sc06_015_8017E9A8);
