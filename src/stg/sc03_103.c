#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_103_8017BE9C(void) {
}

void func_sc03_103_8017BEA4(void) {
}

void func_sc03_103_8017BEAC(void) {
}

void func_sc03_103_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_103_80187B34[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_103_80187B1C;
extern void (*D_sc03_103_80187B3C[])();
extern u8 D_sc03_103_80187B28;
extern void (*D_sc03_103_80188034[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_103_8017E110(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_103_8018803C[])();
void func_sc03_103_8017E138(void);
extern void func_800D1EBC();
extern void (*D_sc03_103_80188048[])();
extern u8 D_sc03_103_80188054;
extern void func_8016EE40();
extern u8 D_sc03_103_80188058;
extern void func_sc03_103_8017E290();
extern void (*D_sc03_103_8018805C[])();
extern void (*D_sc03_103_801880B8[])();
extern void (*D_sc03_103_801880C0[])();
extern void (*D_sc03_103_801A0444[])();
extern void (*D_sc03_103_801A04F8[])();
extern void (*D_sc03_103_801C1F98[])();
extern void (*D_sc03_103_801C20DC[])();

void func_sc03_103_8017BEBC(u8 *arg0) {
    D_sc03_103_80187B34[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_103_80187B1C, 0xFD);
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

void func_sc03_103_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_103_8017C150(u8 *arg0) {
    D_sc03_103_80187B3C[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_103_80187B28, 0x18);
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

void func_sc03_103_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8002D4C8();
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

extern s32 D_sc03_103_801880AC[];
extern s32 func_8013B7F4();
extern s32 func_8012C658();
extern u8 D_sc03_103_8018445C;
extern u8 D_sc03_103_8019FF58;
extern u8 D_sc03_103_8019FF78;
extern s32 func_8012C354();
extern u8 D_sc03_103_801A003C;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_103_801A4A44;
extern void func_8012B14C();
extern u8 D_sc03_103_801B0F40;
extern void func_8012C588();
extern u8 D_sc03_103_801A4A60;
extern u8 D_sc03_103_801B0D28;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_103_801A4CF8;
extern u8 D_sc03_103_801A4D00;
extern u8 D_sc03_103_801B17E8;
extern u8 D_sc03_103_801B1F68;
extern s32 func_8012DEB8();
extern u8 D_sc03_103_801B1B28;
extern u8 D_sc03_103_801B23D8;
extern void func_8012C218();
extern void func_8012AD50();
extern s8 D_sc03_103_801C4C64;
extern void func_sc03_103_80183760();

extern void (*D_sc03_103_801A23F4[])();
extern void func_sc03_103_80180FD4();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_103_801A48E4;
extern u8 D_sc03_103_801A2414;
extern s32 func_8012D5E4();
extern s32 func_sc03_103_80180FBC();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern u8 D_sc03_103_80197F1C;
extern void func_8013C0F8();
extern u8 D_sc03_103_801C4D68;
extern void func_sc03_103_8017D174();
extern u8 D_sc03_103_80199260;
extern s32 D_sc03_103_8018806C[];
extern void func_sc03_103_8017E8F4();
extern void func_800183E0();

extern void func_8012CAE4();
extern s32 func_8012C1B8();
extern void func_8001CA1C();
extern SV8 D_sc03_103_801A0314[];
extern u8 D_sc03_103_801A0078;
extern u8 D_sc03_103_801A0138;
extern u8 D_sc03_103_801A01C0;
extern u8 D_sc03_103_801A0280;
extern u8 D_sc03_103_801A0364;
extern u8 D_sc03_103_801A0388;
extern u8 D_sc03_103_801A0374;
extern u8 D_sc03_103_801A0380;
extern void func_8012B2CC();
extern void func_8012C098();

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017C294);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017D174);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017DDD8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017DE18);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017DE58);

void func_sc03_103_8017DEA4(u8 *arg0) {
    D_sc03_103_80188034[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017DEE0(u8 *arg0) {
    func_sc03_103_8017E110();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_103_8017DF24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_103_8017DF48(u8 *arg0) {
    D_sc03_103_8018803C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017DF84(u8 *arg0) {
    func_sc03_103_8017E138();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_103_8017DFC4(u8 *arg0) {
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

void func_sc03_103_8017E040(void) {
    func_800D1EBC();
}

void func_sc03_103_8017E060(u8 *arg0) {
    D_sc03_103_80188048[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_103_8017E09C(u8 *arg0) {
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

void func_sc03_103_8017E110(void) {
    func_8016EE40((s32) &D_sc03_103_80188054, 0x01000000);
}

void func_sc03_103_8017E138(void) {
    func_8016EE40((s32) &D_sc03_103_80188058, 0x01000000);
}

void func_sc03_103_8017E160(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_103_8017E290, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_103_8017E290((s32) &D_80126948);
}

void func_sc03_103_8017E1F8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_103_8017E290, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_103_8017E290((s32) &D_80126948);
}

void func_sc03_103_8017E290(s32 arg0) {
    D_sc03_103_8018805C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E2CC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E36C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E40C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E5A4);

s32 func_sc03_103_8017E6D0(s32 arg0) {
    return func_8013B7F4(D_sc03_103_801880AC[arg0], 0);
}

void func_sc03_103_8017E700(u8 *arg0) {
    D_sc03_103_801880B8[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017E73C(u8 *arg0) {
    func_8013C0F8((s32) &D_sc03_103_80197F1C);
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_103_8017E780(u8 *arg0) {
    func_sc03_103_8017D174((s32) &D_sc03_103_801C4D68, (s32) &D_sc03_103_80197F1C, (s32) AF(arg0, s16, 0xDC), 0);
    AF(arg0, s16, 0xDC) = (s16) ((u16) AF(arg0, s16, 0xDC) + 0xA);
}

void func_sc03_103_8017E7D0(u8 *arg0) {
    D_sc03_103_801880C0[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017E80C(u8 *arg0) {
    AF(arg0, s16, 0xDC) = 1;
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s16, 0xE0) = 1;
    AF(arg0, s16, 0xE2) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_103_8017E830(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    temp_v0 = AF(arg0, u16, 0xDC) - 1;
    AF(arg0, u16, 0xDC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xDC) = 2U;
        func_sc03_103_8017E8F4((s32) &D_sc03_103_80199260, AF(arg0, s16, 0xDE) * 6);
        AF(arg0, s16, 0xDE) = (s16) (((u16) AF(arg0, s16, 0xDE) + 1) & 7);
    }
    temp_v0_2 = AF(arg0, u16, 0xE0) - 1;
    AF(arg0, u16, 0xE0) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 0xE0) = 8U;
        func_800183E0(D_sc03_103_8018806C[AF(arg0, s16, 0xE2)]);
        AF(arg0, s16, 0xE2) = (s16) (((u16) AF(arg0, s16, 0xE2) + 1) & 0xF);
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E8F4);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E954);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017E974);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017EC0C);

void func_sc03_103_8017ED94(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_103_801A0314[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A01C0);
        SetScript(arg0, &D_sc03_103_801A0280);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_103_801A0364;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_103_801A0388;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_103_801A003C;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A01C0);
        SetScript(arg0, &D_sc03_103_801A0280);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0374);
        SetScript(arg0, &D_sc03_103_801A0380);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_103_801A0078);
        SetScript(arg0, &D_sc03_103_801A0138);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017F240);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017F3D4);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017F784);

void func_sc03_103_8017F870(u8 *arg0) {
    D_sc03_103_801A0444[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017F8AC(u8 *arg0) {
    D_sc03_103_801A04F8[AF(arg0, u16, 2)]();
}

void func_sc03_103_8017F8E8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_103_8017F900(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_103_8019FF78) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_103_8019FF58;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_103_8018445C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_103_8017F9A4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_103_8017F9C0(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_103_801A003C) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_103_8019FF58;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_103_8018445C, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FA44);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FA80);

void func_sc03_103_8017FAB0(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FB34);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FBF8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FCD8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FD48);

void func_sc03_103_8017FE24(void) {
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FE2C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FEE4);

void func_sc03_103_8017FFA8(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8017FFFC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180078);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018015C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180228);

void func_sc03_103_80180300(u8 *arg0) {
    s32 temp_v0;

    D_sc03_103_801A23F4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_103_80180FD4((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018037C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018043C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180564);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801806D4);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180868);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180ABC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180BC8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180D64);

void func_sc03_103_80180E20(s32 arg0) {
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

void func_sc03_103_80180EAC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_103_801A48E4);
}

s32 func_sc03_103_80180EE4(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_103_801A2414, (s32) (&D_sc03_103_801A2414 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80180F10);

s32 func_sc03_103_80180FBC(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_103_80180FD4(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80181040);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801811C4);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801813E8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018179C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801819DC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80181C44);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80181DEC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182038);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182184);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018223C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182390);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018243C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801824EC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801825D4);

void func_sc03_103_801826F0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) == 4) {
            temp_v0 = func_8012C658(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0x88) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, u16, 0x8C) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0x8A) - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) AF(arg0, u16, 0x8A);
                func_8012B2CC(temp_v0);
            }
        }
        if (func_80153BD8((s32) arg0) != 0) {
            func_80153BF0((s32) arg0);
        }
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801827D0);

void func_sc03_103_801828A8(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_103_80182910(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_8018294C);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801829F0);

void func_sc03_103_80182AB0(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_103_801A4A44);
}

void func_sc03_103_80182AE4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_103_80182B40(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_103_80182B78(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0F40, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182BD4);

void func_sc03_103_80182CAC(u8 *arg0) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0x17) {
        if (AF(arg0, s16, 0x70) == 2) {
            var_a0 = 0x1A7;
        } else {
            func_8002D4C8(0xCB3, 0);
            var_a0 = 0x19F;
        }
        func_8012C588(var_a0, (s32) arg0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0F40);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182D40);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80182E0C);

void func_sc03_103_80182EE4(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_103_801B0D28);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_103_801A4A60 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_103_80182F80(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_103_80182FD8(void) {
}

void func_sc03_103_80182FE0(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_103_801B17E8);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_103_801B1F68);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_103_80183080(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_103_801B1F68);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_103_801830D4(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_103_801A4CF8, (s32) &D_sc03_103_801A4D00) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_103_801B1B28);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_103_801B23D8);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183168);

void func_sc03_103_801831B0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_103_801831D8(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183224);

void func_sc03_103_80183310(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_8012CBCC(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        func_8002D4C8(0xCB4, 0);
    }
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183394);

void func_sc03_103_801834A0(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_103_801834D8(u8 *arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x200);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) < 0x401) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_103_80183544(u8 *arg0) {
    D_sc03_103_801C1F98[AF(arg0, u16, 2)]();
}

void func_sc03_103_80183580(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_103_80183760();
        return;
    }
    var_v0 = &D_sc03_103_801C4C64;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801835F8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801836A8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183760);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183820);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_801838EC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183AEC);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183B74);

void func_sc03_103_80183BF8(u8 *arg0) {
    D_sc03_103_801C20DC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183C34);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183E28);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183ED8);

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80183F88);

void func_sc03_103_80184038(void) {
}

INCLUDE_ASM("asm/stg/sc03_103/nonmatchings/sc03_103", func_sc03_103_80184040);
