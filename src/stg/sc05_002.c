#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_002_8017BE9C(void) {
}

void func_sc05_002_8017BEA4(void) {
}

void func_sc05_002_8017BEAC(void) {
}

void func_sc05_002_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_002_8018402C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_002_80184014;
extern void (*D_sc05_002_80184034[])();
extern u8 D_sc05_002_80184020;
extern void (*D_sc05_002_801840DC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_002_8017E088(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_002_801840E4[])();
void func_sc05_002_8017E0D8(void);
void func_sc05_002_8017E0B0(void);
extern void func_800D1EBC();
extern void (*D_sc05_002_801840F8[])();
extern u8 D_sc05_002_80184104;
extern void func_8016EE40();
extern u8 D_sc05_002_80184110;
extern u8 D_sc05_002_80184124;
extern void func_sc05_002_8017E1A0();
extern void (*D_sc05_002_80184128[])();
extern void (*D_sc05_002_8019C7E4[])();
extern void (*D_sc05_002_8019C818[])();
extern void (*D_sc05_002_8019CD64[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_002_80180554;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc05_002_8019CA54;
extern void func_sc05_002_801800E4();
extern s32 D_sc05_002_8019CABC[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc05_002_8019CC88;
extern s32 D_sc05_002_8019CC8C;
extern s32 D_sc05_002_8019CCA0;
extern s32 D_sc05_002_8019CCB4;
extern s32 D_sc05_002_8019CD20;
extern s32 D_sc05_002_8019CC04[];
extern s32 D_sc05_002_8019CB80[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc05_002_8017FE8C();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc05_002_8019CD8C[])();
extern u8 D_sc05_002_8019CA88;
extern u8 D_sc05_002_8019D22C;
extern u8 D_sc05_002_8019D44C;
extern void func_8002D4C8();
extern u8 D_sc05_002_8019D23C;
extern u8 D_sc05_002_8019D344;

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc05_002_80199FD4[])();
extern void func_sc05_002_8017F194();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc05_002_8019C4C4;
extern u8 D_sc05_002_80199FF4;
extern s32 func_8012D5E4();
extern s32 func_sc05_002_8017F17C();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern u8 D_sc05_002_80196B4C;
extern s32 D_sc05_002_8019FE48;
extern s32 D_sc05_002_8019FF34;
extern u8 D_sc05_002_8019FF50;
extern void func_8013C0F8();
extern void func_sc05_002_8017CD9C();

extern u8 D_sc05_002_8019C808;
extern u8 D_sc05_002_8019CA2C;
extern s32 func_8012C1B8();
extern void func_8001C810();
extern void func_8012AD44();
extern void func_8012AD50();

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

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017BEBC);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017CD9C);

void func_sc05_002_8017DA00(u8 *arg0) {
    D_sc05_002_8018402C[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DA3C(u8 *a) {
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
    o = func_800D222C(a, &D_sc05_002_80184014, 0xFD);
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

void func_sc05_002_8017DC00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_002_8017DC94(u8 *arg0) {
    D_sc05_002_80184034[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DCD0(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_002_80184020, 0x18);
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

void func_sc05_002_8017DD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc05_002_8017DDD8(u8 *arg0) {
    D_sc05_002_801840DC[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DE14(u8 *arg0) {
    func_sc05_002_8017E088();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_002_8017DE7C(u8 *arg0) {
    D_sc05_002_801840E4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DEB8(u8 *arg0) {
    func_sc05_002_8017E0D8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DEFC(u8 *arg0) {
    func_sc05_002_8017E0B0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DF3C(u8 *arg0) {
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

void func_sc05_002_8017DFB8(void) {
    func_800D1EBC();
}

void func_sc05_002_8017DFD8(u8 *arg0) {
    D_sc05_002_801840F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017E014(u8 *arg0) {
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

void func_sc05_002_8017E088(void) {
    func_8016EE40((s32) &D_sc05_002_80184104, 0x01000000);
}

void func_sc05_002_8017E0B0(void) {
    func_8016EE40((s32) &D_sc05_002_80184110, 0x01000000);
}

void func_sc05_002_8017E0D8(void) {
    func_8016EE40((s32) &D_sc05_002_80184124, 0x01000000);
}

void func_sc05_002_8017E100(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_002_8017E1A0, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_002_8017E1A0((s32) &D_80126948);
}

void func_sc05_002_8017E1A0(s32 arg0) {
    D_sc05_002_80184128[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E1DC);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E27C);

s32 func_sc05_002_8017E414(void) {
    return 0x5F;
}

void func_sc05_002_8017E41C(void) {
    switch (D_sc05_002_8019FF34) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc05_002_80196B4C);
        D_sc05_002_8019FE48 = 0;
        D_sc05_002_8019FF34 += 1;
        return;
    case 1:
        func_sc05_002_8017CD9C((s32) &D_sc05_002_8019FF50, (s32) &D_sc05_002_80196B4C, D_sc05_002_8019FE48, 0);
        D_sc05_002_8019FE48 += 0x14;
        return;
    }
}

void func_sc05_002_8017E4C0(u8 *arg0) {
    s32 temp_v0;

    D_sc05_002_80199FD4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc05_002_8017F194((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E53C);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E5FC);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E724);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017E894);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017EA28);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017EC7C);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017ED88);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017EF24);

void func_sc05_002_8017EFE0(s32 arg0) {
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

void func_sc05_002_8017F06C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc05_002_8019C4C4);
}

s32 func_sc05_002_8017F0A4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc05_002_80199FF4, (s32) (&D_sc05_002_80199FF4 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F0D0);

s32 func_sc05_002_8017F17C(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc05_002_8017F194(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F200);

void func_sc05_002_8017F30C(u8 *arg0) {
    D_sc05_002_8019C7E4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F348);

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F538);

void func_sc05_002_8017F734(u8 *arg0) {
    D_sc05_002_8019C818[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F770);

void func_sc05_002_8017F860(void) {
}

void func_sc05_002_8017F868(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_002_8019CA2C);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_002_8019C808 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4400;
    AF(arg0, u8, 0x75) = 8;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - 0x18);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8040);
    if ((AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) && !(func_80029178(0xBA) & 0xFF)) {
        func_8012AD44(arg0, 2);
        return;
    }
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017F940);

void func_sc05_002_8017F9F4(void) {
}

void func_sc05_002_8017F9FC(u8 *arg0) {
    D_sc05_002_8019CD64[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017FA38(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc05_002_8019CA54) != 0) {
        if (!(func_80029178(D_sc05_002_8019CABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc05_002_801800E4);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc05_002_80180554);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_002_8017FB0C(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc05_002_8017FB34(void) {
}

void func_sc05_002_8017FB3C(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc05_002_8019CC8C = 0;
            func_80029124(D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)], 1);
            D_sc05_002_8019CC88 = 2;
        } else {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc05_002_8019CB80[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc05_002_8019CC88 = 0;
            D_sc05_002_8019CC8C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc05_002_8019CCB4);
    } else {
        var_a1 = &D_sc05_002_8019CD20;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc05_002_8017FC88(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc05_002_8017FE8C() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc05_002_8017FDA8(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc05_002_8017FDD4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_002_8017FDE4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc05_002_8017FDF4(u8 *arg0) {
    func_80029124(D_sc05_002_8019CABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc05_002_8017FE34(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc05_002_8017FE68(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_8017FE8C);

void func_sc05_002_8017FEF0(u8 *arg0) {
    D_sc05_002_8019CD8C[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017FF2C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_002_8019CA88) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc05_002_8019D44C);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc05_002_8019D22C);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_002_8017FFB4(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_002_8019D23C);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_002_8019D344);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc05_002_80180074(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc05_002_8019D44C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc05_002_8019D22C);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc05_002/nonmatchings/sc05_002", func_sc05_002_801800E4);
