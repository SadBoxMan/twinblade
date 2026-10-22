#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_015_8017BE9C(void) {
}

void func_sc02_015_8017BEA4(void) {
}

void func_sc02_015_8017BEAC(void) {
}

void func_sc02_015_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_015_80181C48[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_015_80181C30;
extern void (*D_sc02_015_80181C50[])();
extern u8 D_sc02_015_80181C3C;
extern void (*D_sc02_015_80181CA8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc02_015_8017D418(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_015_80181CB0[])();
void func_sc02_015_8017D440(void);
extern void func_800D1EBC();
extern void (*D_sc02_015_80181CBC[])();
extern u8 D_sc02_015_80181CC8;
extern void func_8016EE40();
extern u8 D_sc02_015_80181CD4;
extern void func_sc02_015_8017D500();
extern void (*D_sc02_015_80181CE8[])();
extern void (*D_sc02_015_80181D80[])();
extern void (*D_sc02_015_80181D88[])();
extern void func_8012AD50();
extern void (*D_sc02_015_80181D94[])();
extern void (*D_sc02_015_80181DB4[])();
extern void (*D_sc02_015_80181E64[])();

void func_sc02_015_8017BEBC(u8 *arg0) {
    D_sc02_015_80181C48[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_015_80181C30, 0xFD);
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

void func_sc02_015_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_015_8017C150(u8 *arg0) {
    D_sc02_015_80181C50[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_015_80181C3C, 0x18);
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

void func_sc02_015_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern u8 D_sc02_015_80190330;
extern void func_8001CD50();
extern void func_800233CC();
extern void func_801292C8();

extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc02_015_80181DBC;
extern u8 D_sc02_015_8018B074;
extern void func_8012E8E0();

extern s32 D_sc02_015_80181D7C[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc02_015_8017D878();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_800D0C74();
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
extern s32 D_sc02_015_80190618;
extern s16 D_80126B5E;
extern s32 D_80126B9C;
extern void func_sc02_015_8017E034();
extern u8 D_sc02_015_8018D924;
extern s32 func_80029504();
extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001C214();

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017C294);

void func_sc02_015_8017D174(u8 *arg0) {
    D_sc02_015_80181CA8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D1B0(u8 *arg0) {
    func_sc02_015_8017D418();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_015_8017D1F4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_015_8017D218(u8 *arg0) {
    D_sc02_015_80181CB0[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D254(u8 *arg0) {
    func_sc02_015_8017D440();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_015_8017D294(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_015_8017D328(void) {
    func_800D1EBC();
}

void func_sc02_015_8017D348(u8 *arg0) {
    D_sc02_015_80181CBC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_015_8017D384(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C74(1);
        func_8002D4C8(4, 0x574);
        func_8002D4C8(0x20, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_015_8017D418(void) {
    func_8016EE40((s32) &D_sc02_015_80181CC8, 0x01000000);
}

void func_sc02_015_8017D440(void) {
    func_8016EE40((s32) &D_sc02_015_80181CD4, 0x01000000);
}

void func_sc02_015_8017D468(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x384;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_015_8017D500, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_015_8017D500((s32) &D_80126948);
}

void func_sc02_015_8017D500(s32 arg0) {
    D_sc02_015_80181CE8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017D53C);

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017D5C8);

void func_sc02_015_8017D7A4(u8 *arg0) {
    D_sc02_015_80181D80[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017D7E0(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc02_015_80181D7C[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc02_015_8017D878((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017D878);

void func_sc02_015_8017D988(u8 *arg0) {
    D_sc02_015_80181D88[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017D9C4(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017D9E4);

void func_sc02_015_8017DB0C(u8 *arg0) {
    D_sc02_015_80181D94[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017DB48(u8 *arg0) {
    AF(arg0, s32, 0x14) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017DB60);

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017DC24);

void func_sc02_015_8017DE44(u8 *arg0) {
    D_sc02_015_80181DB4[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017DE80(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_015_80190330;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_015_8017DF44(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc02_015_80190330;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc02_015_8017DFF8(void) {
    if (D_sc02_015_80190618 == 0) {
        func_8002D4C8(0x1F, 0);
        D_sc02_015_80190618 = 1;
    }
}

INCLUDE_ASM("asm/stg/sc02_015/nonmatchings/sc02_015", func_sc02_015_8017E034);

void func_sc02_015_8017E060(u8 *arg0) {
    D_sc02_015_80181E64[AF(arg0, u16, 2)]();
}

void func_sc02_015_8017E09C(void) {
    if ((D_80126B9C & 0x08000000) && (D_80126B5E < 0x90)) {
        func_sc02_015_8017E034();
    }
}

void func_sc02_015_8017E0E8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_sc02_015_80181DBC);
        SetScript(arg0, (s32) &D_sc02_015_8018B074);
    }
}

void func_sc02_015_8017E148(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_80029504() - 0xE6) >= 0xAU) {
        func_8012CAE4(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc02_015_8018D924);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0(arg0, (s32) &D_sc02_015_80181DBC);
    SetScript(arg0, (s32) &D_sc02_015_8018B074);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

s32 func_sc02_015_8017E1F0(void) {
    return 0x19;
}
