#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_012_8017BE9C(void) {
}

void func_sc03_012_8017BEA4(void) {
}

void func_sc03_012_8017BEAC(void) {
}

void func_sc03_012_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_012_80181B84[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_012_8017D664(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_012_80181B8C[])();
extern void func_800D1EBC();
extern u8 D_sc03_012_80181B98;
extern void func_8016EE40();
extern u8 D_sc03_012_80181BA4;
extern void func_sc03_012_8017D84C();
extern void (*D_sc03_012_80181BB8[])();
extern void (*D_sc03_012_80181BBC[])();
extern void (*D_sc03_012_80181BE0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D1E28();


extern void func_801292C8();
extern void func_8012931C();
extern s32 func_80128ED8();

extern void func_8013CB84();

extern s32 func_80029504();
extern void func_80029514();
extern void func_80029124();
extern void func_800291A0();
extern s32 func_800291B4();
extern u16 D_800B99DC;
extern u8 D_sc03_012_8017E8A4;
extern void func_sc03_012_8017D780();
extern void func_8013C9C4();
extern u8 D_sc03_012_8018E418;
extern u8 D_sc03_012_8018F458;
extern void func_8001C214();
extern void func_sc03_012_8017DCB4();
extern u8 D_sc03_012_80181B58;
extern void func_800D1724();
extern void func_sc03_012_8017D6B4();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void func_80128EA8();

extern u8 D_sc03_012_8017E474;
extern u8 D_sc03_012_8018CC44;
extern u8 D_sc03_012_8018D3A0;
extern u8 D_sc03_012_8018FB4C;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001D0E8();
extern s32 func_8012C51C();

typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_012_8017C294();

void func_sc03_012_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
    SV8 v[4];
    SV8 w4[4];
    SV8 p[4];
    SV8 c0;
    SV8 c;
    s32 x, y, x2, y2, z, d;
    s16 w, h, m;
    s32 i;
    s16 a;
    s16 x0, x1, x2_, x3, z0, z1, z2, z3, cx, cz;
    s16 a1, b1, e1, a2, b2, e2, a3, b3, e3, a4, b4, e4;
    s16 ex, ez, fx, fz;
    s32 minx, miny, maxx, maxy;

    x = r->x;
    y = r->y;
    w = r->z;
    h = r->pad;
    x2 = x + w;
    y2 = y + h;
    m = w < h ? h : w;
    d = (s16)(m / 20);
    z = ReadGeomScreen();
    v[0].x = x;  v[0].y = y;  v[0].z = z;
    v[1].x = x2; v[1].y = y;  v[1].z = z;
    v[2].x = x;  v[2].y = y2; v[2].z = z;
    v[3].x = x2; v[3].y = y2; v[3].z = z;
    c0.x = 0;
    c0.y = 0;
    c0.z = 0;
    func_sc03_012_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_012_8017C294(&v[i], &w4[i]);
        if (func_sc03_012_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_012_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_012_8017C294(&v[i], &w4[i]);
            func_sc03_012_8017C338(&c, &w4[i], &p[i], arg2);
        }
    }
    ex = ((((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) < (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))));
    minx = ex; if (c.x < minx) minx = c.x;
    ez = ((((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) < (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))));
    miny = ez; if (c.z < miny) miny = c.z;
    fx = ((((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) > (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))));
    maxx = fx; if (c.x > maxx) maxx = c.x;
    fz = ((((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) > (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))));
    maxy = fz; if (c.z > maxy) maxy = c.z;
    out->z = maxx - minx;
    out->x = minx;
    out->y = miny;
    out->pad = maxy - miny;
}

INCLUDE_ASM("asm/stg/sc03_012/nonmatchings/sc03_012", func_sc03_012_8017C294);

s32 func_sc03_012_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
    s32 x;
    s32 z;
    s32 c;
    s32 r;

    r = 0;
    if (b->y <= a->y) {
        x = a->x - a->y * (b->x - a->x);
        z = a->z - a->y * (b->z - a->z);
    } else {
        x = b->x + b->y * (b->x - a->x) / (a->y - b->y);
        z = b->z + b->y * (b->z - a->z) / (a->y - b->y);
    }
    c = (x < -0x7FFF) ? -0x7FFF : (x > 0x7FFF) ? 0x7FFF : x;
    o->x = c;
    c = (z < -0x7FFF) ? -0x7FFF : (z > 0x7FFF) ? 0x7FFF : z;
    o->z = c;
    o->y = 0;
    if (o->x < a->x - lim) {
        r = -1;
        o->x = a->x - lim;
    }
    if (o->x > a->x + lim) {
        r = -1;
        o->x = a->x + lim;
    }
    if (o->z < a->z - lim) {
        r = -1;
        o->z = a->z - lim;
    }
    if (o->z > a->z + lim) {
        r = -1;
        o->z = a->z + lim;
    }
    return r;
}

s32 func_sc03_012_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc03_012/nonmatchings/sc03_012", func_sc03_012_8017C59C);

void func_sc03_012_8017D468(u8 *arg0) {
    D_sc03_012_80181B84[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_012_8017D4A4(u8 *arg0) {
    func_sc03_012_8017D664();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_012_8017D4E8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_012_8017D50C(u8 *arg0) {
    D_sc03_012_80181B8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_012_8017D548(u8 *arg0) {
    if (func_80029504() >= 0x3D4) {
        func_80029514(0x3E8);
    } else {
        func_80029514(0x82);
        func_80029124(0xEE, 1);
    }
    func_800291A0(0xCD, (func_800291B4(0xCD) + 1) & 0xFF);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_012_8017D5D0(u8 *arg0) {
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

void func_sc03_012_8017D644(void) {
    func_800D1EBC();
}

void func_sc03_012_8017D664(void) {
    func_8016EE40((s32) &D_sc03_012_80181B98, 0x01000000);
}

void func_sc03_012_8017D68C(void) {
    func_8016EE40((s32) &D_sc03_012_80181BA4, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc03_012/nonmatchings/sc03_012", func_sc03_012_8017D6B4);

INCLUDE_ASM("asm/stg/sc03_012/nonmatchings/sc03_012", func_sc03_012_8017D780);

void func_sc03_012_8017D84C(s32 arg0) {
    D_sc03_012_80181BB8[AF(arg0, u8, 4)]();
}

void func_sc03_012_8017D888(void) {
}

void func_sc03_012_8017D890(u8 *arg0) {
    D_sc03_012_80181BBC[AF(arg0, u16, 2)]();
}

void func_sc03_012_8017D8CC(u8 *arg0) {
    s16 s[12];
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001C214(o, &D_sc03_012_8018CC44);
        func_8001D0E8(o, 0x800, 0x800);
        s[3] = 0xBF;
        s[4] = 1;
        AF(arg0, s32, 0x6C) = func_8012C51C(s, arg0);
        s[4] = 2;
        func_8012C51C(s, arg0);
        AF(arg0, s16, 0xE4) = 3;
        AF(arg0, s16, 0xE6) = 4;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, s16, 0xE8) = 0x40;
        func_8002D4C8(0x556, 0);
        AF(arg0, u16, 2) += 1;
        break;
    case 1:
        func_8001C214(o, &D_sc03_012_8018D3A0);
        func_8001D0E8(o, 0x800, 0x800);
        AF(arg0, u16, 6) = AF(AF(arg0, u8 *, 0x64), u16, 6);
        AF(arg0, u16, 0xA) = AF(AF(arg0, u8 *, 0x64), u16, 0xA);
        AF(arg0, u16, 0xE) = AF(AF(arg0, u8 *, 0x64), u16, 0xE);
        AF(arg0, u16, 2) = 5;
        break;
    case 2:
        func_8001C214(o, &D_sc03_012_8018FB4C);
        func_8001D0E8(o, 0x800, 0x800);
        AF(arg0, s16, 0xA) = -0x478;
        AF(arg0, s16, 0xE) = -0x171;
        AF(arg0, s16, 6) = 0;
        AF(arg0, u16, 2) = 6;
        break;
    }
    SetScript(arg0, &D_sc03_012_8017E474);
}

void func_sc03_012_8017DA80(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    temp_v0 = AF(arg0, u16, 0xE8) - 1;
    AF(arg0, u16, 0xE8) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_sc03_012_8017D780();
        AF(arg0, s16, 0xE0) = 1;
        func_8002D4C8(0x555, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0_2 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
}

void func_sc03_012_8017DB28(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0xE0) == 2) {
        func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc03_012_8018E418);
        func_8001C214(AF(AF(arg0, void *, 0x6C), s32, 0x20), (s32) &D_sc03_012_8018F458);
        func_8002D4C8(0x557, 0);
        AF(arg0, s16, 0xE2) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
}

void func_sc03_012_8017DBE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) + 0x18000);
    if (AF(arg0, s16, 0xDE) >= 0x101) {
        AF(arg0, s32, 0xDC) = 0x01000000;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    AF(arg0, s16, 6) = (s16) -(s16) (u16) AF(arg0, s16, 0xDE);
    AF(arg0, s16, 0xA) = (s16) ((rsin(AF(arg0, s16, 0xDE) * 2) / 32) - 0x490);
    func_sc03_012_8017DCB4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_012/nonmatchings/sc03_012", func_sc03_012_8017DCB4);

void func_sc03_012_8017DE18(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xE6) - 1;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u16, 0xE6) = (u16) ((D_800B99DC & 7) + 1);
        func_8013C9C4((s32) &D_sc03_012_8017E8A4);
    }
    func_sc03_012_8017DCB4((s32) arg0);
    func_800D1724((s32) &D_sc03_012_80181B58);
}

void func_sc03_012_8017DE90(u8 *arg0) {
    AF(arg0, u16, 6) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xDE);
    AF(arg0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
}

void func_sc03_012_8017DEB0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xE0) != 0) {
        AF(arg0, s16, 0xE0) = 0x2A;
        AF(arg0, s16, 0xE2) = 0x18;
        AF(arg0, s16, 0xE4) = 0x26;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_012_8017DEF0(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;

    temp_v0 = AF(arg0, u16, 0xE4) - 1;
    AF(arg0, u16, 0xE4) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_sc03_012_8017D6B4();
    }
    temp_v0_2 = AF(arg0, u16, 0xE0) - 1;
    AF(arg0, u16, 0xE0) = temp_v0_2;
    if ((s16) temp_v0_2 < 4) {
        AF(arg0, u16, 0xE2) = 0x10U;
    }
    if ((s16) AF(arg0, u16, 0xE0) < 2) {
        AF(arg0, u16, 0xE2) = 8U;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xE2));
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x10) >= 0x401) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_012_8017DFBC(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0xE0) = 2;
}

void func_sc03_012_8017DFCC(u8 *arg0) {
    D_sc03_012_80181BE0[AF(arg0, u16, 2)]();
}

void func_sc03_012_8017E008(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    func_80128EA8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0xFFA40000;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_012_8017E090(s32 arg0, s32 arg1) {
    func_8012931C(arg0, arg1);
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_801292C8(arg0);
    }
}

void func_sc03_012_8017E0D4(void) {
    func_8013CB84();
}

s32 func_sc03_012_8017E0F4(void) {
    return 0x23;
}
