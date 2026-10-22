#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_003_8017BE9C(void) {
}

void func_sc05_003_8017BEA4(void) {
}

void func_sc05_003_8017BEAC(void) {
}

void func_sc05_003_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_003_80186364[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_003_8018634C;
extern void (*D_sc05_003_8018636C[])();
extern u8 D_sc05_003_80186358;
extern void (*D_sc05_003_801863C4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_003_8017E008(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc05_003_8017E030(void);
extern void func_800D1EBC();
extern void (*D_sc05_003_801863D8[])();
extern u8 D_sc05_003_801863E4;
extern void func_8016EE40();
extern u8 D_sc05_003_801863F0;
extern void func_sc05_003_8017E0F4();
extern void (*D_sc05_003_80186404[])();
extern void (*D_sc05_003_801A4770[])();
extern void (*D_sc05_003_801A47C4[])();
extern void (*D_sc05_003_801A9F5C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_8012C218();
extern void func_80016714();

extern s32 func_8012C044();
extern void (*D_sc05_003_8019EAD4[])();
extern void func_sc05_003_8017F4FC();
extern s32 func_8012BD14();
extern u16 D_sc05_003_8019EA10;
extern s32 func_80143970();
extern s32 func_8012BEE8();
extern u16 D_sc05_003_8019EA12;
extern u8 D_sc05_003_801A410C;
extern s32 func_8012BCCC();
extern u8 D_sc05_003_801A411C;
extern u8 D_80078EAE;
extern void func_8012B23C();
extern u8 D_sc05_003_801A41E4;
extern void func_sc05_003_8017F12C();
extern s16 D_80126CE0;
extern void func_80130D48();
extern void (*D_sc05_003_801A47A8[])();
extern void func_sc05_003_80181720();

extern u8 D_sc05_003_8019B394;
extern s32 D_sc05_003_801AC958;
extern s32 D_sc05_003_801ACA44;
extern u8 D_sc05_003_801ACA60;
extern void func_8013C0F8();
extern void func_sc05_003_8017CD9C();

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
extern u8 D_sc05_003_8019EA44;
extern s32 func_8012C354();
extern u8 D_sc05_003_801A96A8;
extern u8 D_80126CB4;
extern s32 func_8012BE98();
extern u8 D_800D3918;
extern u8 D_801152A8;
extern u8 D_801152B0;
extern u8 D_sc05_003_801A45C4;
extern s32 func_sc05_003_80180B04();
extern s32 func_sc05_003_80180E34();
extern s32 func_sc05_003_801808E8();
extern s32 func_sc05_003_80180CE8();
extern void func_8012B178();
extern u8 D_sc05_003_801A4534;
extern u8 D_sc05_003_801A9620;
extern void func_8012B2CC();
extern void func_8012AD80();
extern u8 D_sc05_003_801A4524;
extern u8 D_sc05_003_801A45DC;
extern u8 D_sc05_003_801A96F0;
extern s32 D_sc05_003_801A45B4[];
extern void func_8012C588();
extern s32 func_8012CBCC();
extern void func_80131E00();
extern s32 func_sc05_003_801807F8();
extern void func_sc05_003_8018079C();
extern u8 D_sc05_003_801A9888;
extern void func_8002AC00();
extern void func_8002A04C();
extern s32 func_8012C098();
extern s32 func_80012C6C();
extern s32 func_sc05_003_80180D70();
extern u16 D_800B99DA;
extern s32 D_sc05_003_801A46B4[];
extern s32 D_sc05_003_801A46EC[];
extern s32 D_sc05_003_801A4724[];
extern void func_800183E0();
extern u8 D_sc05_003_801A4764;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();
extern void func_sc05_003_801814D8();
extern u8 D_sc05_003_801A97C8;
extern u8 D_sc05_003_801A9850;
extern void func_801292C8();
extern s32 func_sc05_003_80181AAC();

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017BEBC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017CD9C);

void func_sc05_003_8017DA00(u8 *arg0) {
    D_sc05_003_80186364[AF(arg0, u16, 2)]();
}

void func_sc05_003_8017DA3C(u8 *a) {
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
    o = func_800D222C(a, &D_sc05_003_8018634C, 0xFD);
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

void func_sc05_003_8017DC00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_003_8017DC94(u8 *arg0) {
    D_sc05_003_8018636C[AF(arg0, u16, 2)]();
}

void func_sc05_003_8017DCD0(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_003_80186358, 0x18);
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

void func_sc05_003_8017DD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_003_8017DDD8(u8 *arg0) {
    D_sc05_003_801863C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_003_8017DE14(u8 *arg0) {
    func_sc05_003_8017E008();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_003_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc05_003_8017DE7C(u8 *arg0) {
    func_sc05_003_8017E030();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_003_8017DEBC(u8 *arg0) {
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

void func_sc05_003_8017DF38(void) {
    func_800D1EBC();
}

void func_sc05_003_8017DF58(u8 *arg0) {
    D_sc05_003_801863D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_003_8017DF94(u8 *arg0) {
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

void func_sc05_003_8017E008(void) {
    func_8016EE40((s32) &D_sc05_003_801863E4, 0x01000000);
}

void func_sc05_003_8017E030(void) {
    func_8016EE40((s32) &D_sc05_003_801863F0, 0x01000000);
}

void func_sc05_003_8017E058(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_003_8017E0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_003_8017E0F4((s32) &D_80126948);
}

void func_sc05_003_8017E0F4(s32 arg0) {
    D_sc05_003_80186404[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017E130);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017E1E8);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017E380);

s32 func_sc05_003_8017E67C(void) {
    return 0x5F;
}

void func_sc05_003_8017E684(void) {
    switch (D_sc05_003_801ACA44) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc05_003_8019B394);
        D_sc05_003_801AC958 = 0;
        D_sc05_003_801ACA44 += 1;
        return;
    case 1:
        func_sc05_003_8017CD9C((s32) &D_sc05_003_801ACA60, (s32) &D_sc05_003_8019B394, D_sc05_003_801AC958, 0);
        D_sc05_003_801AC958 += 0x14;
        return;
    }
}

void func_sc05_003_8017E728(u8 *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    D_sc05_003_8019EAD4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x800)) {
            temp_v0_2 = func_8012C044((s32) arg0);
            if (temp_v0_2 == 1) {
                AF(arg0, s32, 0xE4) = temp_v0_2;
                func_sc05_003_8017F4FC((s32) arg0);
            }
        }
    }
}

void func_sc05_003_8017E7D0(s32 arg0) {
    void *temp_a0;

    if (func_8012C354(arg0, (s32) &D_sc05_003_8019EA10) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_003_8019EA44;
        AF(arg0, s32, 0xB4) = 0xFFFBDFDD;
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc05_003_801A410C);
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
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

void func_sc05_003_8017E89C(s32 arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (func_8012BD14(arg0, arg1) > 0x18FFF) {
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
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, u16, 0x76) = (u16) D_sc05_003_8019EA10;
    }
}

void func_sc05_003_8017E940(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (func_8012BEE8(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc05_003_8019EA12;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc05_003_8017E9C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc05_003_801A410C, arg2);
}

void func_sc05_003_8017E9F4(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_003_8017EA34(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 6;
    SetScript((s32) arg0, (s32) &D_sc05_003_801A411C, arg2);
    AF(arg0, s32, 0x1C) = 0x17;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_003_8017EA78(u8 *arg0, s32 arg1) {
    if (D_80078EAE != 0) {
        if ((AF(arg0, u16, 0x34) == 0) && (AF(arg0, s32, 0x94) == 0xA)) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (func_8012BEE8((s32) arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_003_8017EAF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 2) = 8;
    func_8012B23C((s32) arg0, arg1, arg2, arg3);
    func_sc05_003_8017F12C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_003_801A41E4);
    AF(arg0, s32, 0x1C) = 0x2D;
    AF(arg0, s32, 0xE0) = 0;
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017EB44);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017EC00);

void func_sc05_003_8017EC68(u8 *arg0) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8));
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc05_003_8017ED0C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017ED1C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017EDF4);

void func_sc05_003_8017EE60(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_80130D48((s32) arg0);
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc05_003_8017F4FC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017EEE4);

void func_sc05_003_8017EF04(void) {
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017EF0C);

void func_sc05_003_8017EF88(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F010);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F12C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F1AC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F338);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F4FC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F62C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F68C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F738);

void func_sc05_003_8017F880(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A96A8);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_003_8017F8B8(u8 *arg0) {
    if (!(AF(arg0, u16, 0x70) & 1) && (func_8012BE98((s32) arg0, (s32) &D_80126CB4) <= 0x240000)) {
        AF(arg0, s16, 2) = 0xC;
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F914);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017F9B4);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017FB9C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017FC3C);

void func_sc05_003_8017FD08(s32 arg0) {
    s32 sp10;
    s32 *var_a1;
    s32 var_v1;

    var_v1 = func_sc05_003_80180B04(arg0, (s32) &D_800D3918, 1);
    if (!(var_v1 & 0xE000)) {
        func_sc05_003_80180E34(arg0, (s32) &D_sc05_003_801A45C4, (s32) &sp10);
        var_v1 = func_sc05_003_801808E8(arg0, (s32) &sp10, 1, 1);
        if (!(var_v1 & 0xE000)) {
            func_8012C218(arg0);
            return;
        }
    }
    var_a1 = &D_801152A8;
    if (var_v1 & 0xC000) {
        var_a1 = &D_801152B0;
    }
    func_sc05_003_80180CE8(arg0, (s32) var_a1, 4);
    func_8012B178(arg0, -0x80000);
}

void func_sc05_003_8017FDC0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9620);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_003_801A4534 | 0x40000000 | 0x20000000);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 9;
}

void func_sc05_003_8017FE44(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_v0;
    s32 temp_v1;

    func_8012AD80(arg0, arg1);
    func_sc05_003_80180E34(arg0, (s32) &D_sc05_003_801A45C4, (s32) &sp10);
    temp_v0 = func_sc05_003_801808E8(arg0, (s32) &sp10, 1, 1);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v1 == 0x1A) || (temp_v1 == 0x1C) || (temp_v0 == 0)) {
        func_8012C218(arg0);
    }
}

void func_sc05_003_8017FEC0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9620);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg0, u16, 0xDC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_003_801A4524 | 0x40000000 | 0x20000000);
    AF(arg0, void *, 0xCC) = (void *) (((AF(arg0, u16, 0x70) & 0xF0) * 2) + &D_sc05_003_801A45DC);
    func_8012B2CC(arg0);
    func_8012B178(arg0, -0x80000);
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8017FF60);

void func_sc05_003_801801C0(u8 *arg0) {
    AF(arg0, s16, 2) = 0xD;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_8012C588(0x24F, (s32) arg0);
    AF(AF(arg0, void *, 0x20), s32, 0x24) = D_sc05_003_801A45B4[(AF(arg0, u16, 0x70) & 0xF)];
    SetScript((s32) arg0, (s32) &D_sc05_003_801A96F0);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180230);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801803B8);

void func_sc05_003_801804CC(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    temp_v1 = func_8012CBCC(arg0) & 0xFF;
    if (temp_v1 == 2) {
        func_80131E00(arg0, 0x12);
        return;
    }
    if (temp_v1 == 0x1A) {
        func_sc05_003_801807F8(arg0);
        return;
    }
    if (AF(arg0, u8, 0xC2) != 0) {
        var_v0 = func_8012BEE8(arg0);
    } else {
        var_v0 = AF(arg0, u16, 0x72) & 0x4000;
    }
    if (var_v0 != 0) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        func_sc05_003_8018079C(arg0);
    }
}

void func_sc05_003_80180584(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x5E) = 0;
}

void func_sc05_003_80180598(s32 arg0) {
    SetScript(arg0, (s32) &D_sc05_003_801A9888);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    func_8002D4C8(0x84D, 0);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801805E4);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8018079C);

s32 func_sc05_003_801807F8(s32 arg0) {
    func_8002AC00(0x19);
    func_8002A04C(arg0);
    return func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180834);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801808E8);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180B04);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180C44);

s32 func_sc05_003_80180CE8(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0xE8) = func_80012C6C((s32) AF(arg0, s16, 0xE8), (s32) AF(arg1, s16, 0), (s32) (s16) arg2);
    AF(arg0, s16, 0xEA) = func_80012C6C((s32) AF(arg0, s16, 0xEA), (s32) AF(arg1, s16, 2), (s32) (s16) arg2);
    AF(arg0, s16, 0xEC) = func_80012C6C((s32) AF(arg0, s16, 0xEC), (s32) AF(arg1, s16, 4), (s32) (s16) arg2);
    return func_sc05_003_80180D70(arg0, arg0 + 0xE8);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180D70);

s32 func_sc05_003_80180E34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ApplyMatrixSV(AF(arg0, s32, 0x20) + 0x34);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80180E58);

void func_sc05_003_80180F44(void) {
    func_800183E0(D_sc05_003_801A46B4[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_003_801A46EC[((D_800B99DA % 14) & 0xFFFF)]);
    func_800183E0(D_sc05_003_801A4724[(D_800B99DA & 0xF)]);
}

void func_sc05_003_80181020(u8 *arg0) {
    D_sc05_003_801A4770[AF(arg0, u16, 2)]();
}

void func_sc05_003_8018105C(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_v0 = func_8012C1B8();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CA1C(temp_v0, (s32) &D_sc05_003_801A4764);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) ((s32) (AF(temp_v1_2, u16, 0x18) << 0x10) >> 0x11);
    temp_v1_3 = AF(arg0, s32, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) ((s32) (AF(temp_v1_3, u16, 0x1A) << 0x10) >> 0x11);
    AF(arg0, u16, 0xFE) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    func_sc05_003_801814D8(arg0, 2);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_003_8018111C(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x64);
    temp_a1 = AF(arg0, void *, 0x20);
    if ((AF(arg0, s16, 0xFE) != AF(temp_a2, s16, 0x36)) || (AF(temp_a2, s32, 0x90) == &D_sc05_003_801A9850)) {
        AF(arg0, s32, 0x48) = 0xC000;
        AF(arg0, s16, 2) = 3;
        return;
    }
    AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) + 0x40);
    temp_v1 = AF(temp_a1, u16, 0x1A) + 0x40;
    AF(temp_a1, u16, 0x1A) = temp_v1;
    if (((s16) AF(temp_a1, u16, 0x18) >= 0x1801) || ((s16) temp_v1 >= 0x1801)) {
        AF(temp_a1, u16, 0x1A) = 0x1800U;
        AF(temp_a1, u16, 0x18) = 0x1800U;
    }
    temp_a1_2 = AF(arg0, void *, 0x64);
    if ((AF(temp_a1_2, s32, 0x90) == &D_sc05_003_801A97C8) && (AF(temp_a1_2, s32, 0x94) == 9)) {
        AF(arg0, s16, 2) = 2;
    }
    func_sc05_003_801814D8((s32) arg0, 2);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801811EC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801812AC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181438);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801814D8);

void func_sc05_003_80181540(u8 *arg0) {
    D_sc05_003_801A47A8[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc05_003_80181720((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801815A0);

void func_sc05_003_80181638(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x20);
    AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x80) {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_003_80181690(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x40) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_003_801816C4(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
    temp_v0 = AF(temp_v1, u16, 0x1A) - 0x100;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    if (((s16) AF(temp_v1, u16, 0x18) <= 0) || ((temp_v0 << 0x10) <= 0)) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181720);

void func_sc05_003_8018187C(u8 *arg0) {
    D_sc05_003_801A47C4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801818B8);

void func_sc05_003_80181A08(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_801292C8((s32) arg0);
        return;
    }
    if (func_sc05_003_80181AAC((s32) arg0, (s32) &D_800D3918, 0x11) & 0x6000) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 < 0x23) {
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
    }
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181AAC);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181C00);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181CDC);

void func_sc05_003_80181E40(u8 *arg0) {
    D_sc05_003_801A9F5C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181E7C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80181F78);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_80182208);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_8018239C);

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801823F4);

void func_sc05_003_80182470(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc05_003/nonmatchings/sc05_003", func_sc05_003_801824B4);
