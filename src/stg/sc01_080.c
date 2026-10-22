#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_080_8017BE9C(void) {
}

void func_sc01_080_8017BEA4(void) {
}

void func_sc01_080_8017BEAC(void) {
}

void func_sc01_080_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_080_80187050[])();
extern void func_sc01_080_8017E578();
extern void (*D_sc01_080_80189458[])();
extern void (*D_sc01_080_801894B8[])();
extern void func_8016EDEC();
void func_sc01_080_8017EEE0(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_080_801894C0[])();
extern void func_800D1EBC();
extern void (*D_sc01_080_80189638[])();
extern void (*D_sc01_080_80189648[])();
void func_sc01_080_8017F184(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc01_080_80189654[])();
void func_sc01_080_8017F268(u8 *arg0);
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_sc01_080_80189684;
extern void func_8016EE40();
extern void (*D_sc01_080_8018A05C[])();
extern void (*D_sc01_080_8018A1F8[])();
extern void (*D_sc01_080_8018A20C[])();
extern void (*D_sc01_080_8018A214[])();
extern void (*D_sc01_080_8018A22C[])();
extern void (*D_sc01_080_8018A240[])();
extern void (*D_sc01_080_8018A248[])();
extern void (*D_sc01_080_8018A250[])();
extern void (*D_sc01_080_8018A258[])();
extern void (*D_sc01_080_8018A264[])();
extern void (*D_sc01_080_8018A26C[])();
extern void (*D_sc01_080_8018A2F4[])();
extern void (*D_sc01_080_8018A32C[])();
extern void (*D_sc01_080_8018A40C[])();
extern void func_8012AD50();
extern void (*D_sc01_080_8018A488[])();

extern void func_80165770();
extern void func_80175414();
extern void func_80171B44();
extern void func_sc01_080_8017F204();
extern s32 D_sc01_080_801C7EC0;
extern void (*D_sc01_080_8018A454[])();
extern void func_sc01_080_80182EF8();

extern void func_8001C214();
extern u8 D_sc01_080_80183884;
extern u8 D_sc01_080_801891AC;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001D0E8();
extern u8 D_sc01_080_80186F5C;
extern u8 D_sc01_080_80186F6C;
extern u8 D_sc01_080_80186FC4;
extern u8 D_sc01_080_80188970;
extern s32 D_sc01_080_80186FB0[];
extern void (*D_sc01_080_80187028[])();
extern void func_sc01_080_8017D72C();
extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_801399F0();
extern void func_80139914();

extern s32 func_80171B4C();

extern void func_8012AD80();
extern s32 func_8012BEE8();
extern void func_8012C218();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126970;
extern s16 D_80126972;
extern s16 D_80126974;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern void func_8016F398();
extern u8 D_800D5A34;
extern s32 func_800CF854();
extern void func_80154274();
extern s32 func_8013767C();
extern u8 D_sc01_080_8018A6A8;
extern s32 func_80012B04();
extern void (*D_sc01_080_80189690[])();
extern u8 D_sc01_080_80189694;
extern void func_80171928();
extern s32 func_8001AAA0();
extern s8 D_sc01_080_80189974;
extern s32 D_80127190;
extern void func_801292C8();
extern s16 D_80126B62;
extern void func_sc01_080_80181D98();
extern void func_8016ED8C();
extern void func_8012B200();
extern s16 D_sc01_080_8018A2A4[];
extern void func_sc01_080_80181FAC();
extern void func_8002D59C();
extern u16 D_sc01_080_8018A408;
extern s32 func_8012C658();
extern u8 D_sc01_080_8018A338;
extern u8 D_sc01_080_8018A3B0;
extern void func_8001CA1C();
extern s32 func_sc01_080_80183278();

extern u8 D_sc01_080_80189D04;
extern u8 D_sc01_080_801ACC1C;
extern void func_8001C810();



typedef struct { s16 x, y, z, pad; } SV4;

extern s32 D_80127188;
extern u8 D_sc01_080_801C5D40;
extern void func_8012913C();
extern s32 func_801291C0();

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc01_080_8017C294();

void func_sc01_080_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc01_080_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc01_080_8017C294(&v[i], &w4[i]);
        if (func_sc01_080_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc01_080_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc01_080_8017C294(&v[i], &w4[i]);
            func_sc01_080_8017C338(&c, &w4[i], &p[i], arg2);
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

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017C294);

s32 func_sc01_080_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc01_080_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017C59C);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017D468);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017D72C);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017D93C);

void func_sc01_080_8017DBF4(s32 arg0) {
    s32 temp_v1;

    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc01_080_801891AC);
    SetScript(arg0, (s32) &D_sc01_080_80183884);
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x77FF);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017DC78);

void func_sc01_080_8017DCF8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1, arg2)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_080_80188970);
    func_8001D0E8(temp_v0, 0x104, 0x190);
    AF(temp_v0, s16, 0x1C) = 0x1C00;
    AF(temp_v0, s16, 0x1A) = 0x1C00;
    AF(temp_v0, s16, 0x18) = 0x1C00;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x76) = 4;
    AF(arg0, s32 *, 0x78) = &D_sc01_080_80186FC4;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
    SetScript(arg0, D_sc01_080_80186FB0[AF(arg0, s16, 0x76)]);
    AF(arg0, s16, 2) = 1;
    if (AF(arg0, s16, 0x70) == 4) {
        AF(arg0, s32 *, 0x58) = &D_sc01_080_80186F6C;
    } else {
        AF(arg0, s32 *, 0x58) = &D_sc01_080_80186F5C;
    }
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s32 *, 0x58) = (s32 *) ((s32) AF(arg0, s32 *, 0x58) | 0x60000000);
    AF(temp_v1, s16, 0x1C) = 0x1C00;
    AF(temp_v1, s16, 0x1A) = 0x1C00;
    AF(temp_v1, s16, 0x18) = 0x1C00;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x8800);
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
}

void func_sc01_080_8017DE38(u8 *arg0) {
    if (((u32) (AF(arg0, u16, 2) - 1) < 2U) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_080_8017D72C();
        return;
    }
    D_sc01_080_80187028[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017DEB0);

void func_sc01_080_8017E0A4(u8 *arg0) {
    D_sc01_080_80187050[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E0E0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E124);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E1FC);

void func_sc01_080_8017E2C8(s32 arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    func_8012AD80(arg0);
    if (AF(arg0, s32, 0x1C) >= 0x30) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    } else {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x17);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x43);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x14) = (u16) (AF(temp_v1_3, u16, 0x14) + 0x58);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc01_080_8017E394(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x2BC;
    D_80126968 = 0x38;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x8C;
    D_80126972 = -0x8C;
    D_8012697A = 0;
    D_80126970 = 0;
    D_80126974 = 0;
    func_8012A018((s32) func_sc01_080_8017E578, 0);
    func_sc01_080_8017E578((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E448);

void func_sc01_080_8017E4F4(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x190;
    D_80126968 = 0;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_080_8017E578, 2);
    func_sc01_080_8017E578((s32) &D_80126948);
}

void func_sc01_080_8017E578(s32 arg0) {
    D_sc01_080_80189458[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E5B4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E630);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E724);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017E8A0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017EA68);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017EB64);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017EC48);

void func_sc01_080_8017ED0C(u8 *arg0) {
    D_sc01_080_801894B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_080_8017ED48(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_080_8017EEE0, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_080_8017ED98(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_080_8017EDBC(u8 *arg0) {
    D_sc01_080_801894C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_080_8017EDF8(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_080_8017F184, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_080_8017EE44(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc01_080_8017EEC0(void) {
    func_800D1EBC();
}

void func_sc01_080_8017EEE0(u8 *arg0) {
    D_sc01_080_80189638[AF(arg0, u8, 0x214)]();
}

void func_sc01_080_8017EF1C(u8 *arg0) {
    func_8016F398();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_80171B44((s32) arg0);
}

void func_sc01_080_8017EF58(s32 arg0) {
    if (func_80171B4C(arg0, 0x1E) != 0) {
        if (func_800CF854() != 0) {
            AF(arg0, u8, 0x214) = 3U;
            return;
        }
        func_80154274(arg0, (s32) &D_800D5A34);
        EndScene(arg0);
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, s16, 0x20C) = 0;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017EFDC);

void func_sc01_080_8017F14C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc01_080_8017F184(u8 *arg0) {
    D_sc01_080_80189648[AF(arg0, u8, 0x214)]();
}

void func_sc01_080_8017F1C0(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
    func_sc01_080_8017F204((s32) arg0);
}

void func_sc01_080_8017F204(s32 arg0) {
    if (func_80171B4C(arg0, 2) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F248(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc01_080_8017F268(u8 *arg0) {
    D_sc01_080_80189654[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F2A4);

void func_sc01_080_8017F344(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) AF(arg0, s16, 0x20C), 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_080_8018A6A8);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F3C0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_080_8017F414(s32 arg0) {
    func_80175414(arg0);
    D_80126968 = AF(arg0, u16, 0x20E);
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_080_8017F458(void) {
    func_8016EE40((s32) &D_sc01_080_80189684, 0x01000000);
}

void func_sc01_080_8017F480(u8 *arg0) {
    D_sc01_080_80189690[AF(arg0, u8, 0x215)]();
}

void func_sc01_080_8017F4BC(s32 arg0) {
    if ((ActionHelper_1AB0(arg0, (s32) &D_sc01_080_80189694) << 0x10) == 0) {
        func_80171928(arg0);
    }
}

void func_sc01_080_8017F500(u8 *arg0) {
    D_sc01_080_8018A05C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F53C);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F638);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F710);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F7D0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017F8C0);

void func_sc01_080_8017FB5C(u8 *arg0) {
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0xFE);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_8001AAA0(0x11) != 0) {
            AF(arg0, s16, 0xFE) = 1;
            return;
        }
        return;
    case 1:
        func_8002D4C8(0x102, 0);
        AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 1);
        return;
    case 2:
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        break;
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017FC04);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017FCC0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017FCFC);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017FD64);

void func_sc01_080_8017FF78(u8 *arg0) {
    D_sc01_080_8018A1F8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8017FFB4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801800F4);

s32 func_sc01_080_80180174(s32 arg0, s32 arg1) {
    D_sc01_080_801C7EC0 = 1;
    return 1;
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180188);

void func_sc01_080_801802D8(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xF4);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0xD0000040);
    temp_v1_2 = AF(arg0, void *, 0xF8);
    AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0xD0000040);
    AF(arg0, s32, 0xE4) = 0x80;
    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180320);

void func_sc01_080_801803AC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0xE4);
    if (temp_v0 == 0) {
        temp_v0_2 = AF(arg0, s32, 0xE8) - 0x40;
        AF(arg0, s32, 0xE8) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            AF(arg0, s32, 0xE8) = 0;
        }
        D_sc01_080_80189974 = (s8) AF(arg0, s32, 0xE8);
        if (AF(arg0, s32, 0xE8) == 0) {
            AF(AF(arg0, void *, 0xF4), s32, 4) = 0xD0000040;
            AF(AF(arg0, void *, 0xF8), s32, 4) = 0xD0000040;
            AF(arg0, s16, 0x34) = 1;
        }
    } else {
        AF(arg0, s32, 0xE4) = (s32) (temp_v0 - 1);
    }
}

void func_sc01_080_80180420(u8 *arg0) {
    D_sc01_080_8018A20C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8018045C);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180528);

void func_sc01_080_8018055C(u8 *arg0) {
    D_sc01_080_8018A214[AF(arg0, u16, 2)]();
}

void func_sc01_080_80180598(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc01_080_801ACC1C);
    func_8001D0E8(temp_v0, 0x800, 0x800);
    SetScript((s32) arg0, (s32) &D_sc01_080_80189D04);
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 4) = 0;
    D_80127190 = (s32) AF(arg0, s16, 0xA);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x40000040);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_080_80180654(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u8, 0xFC) != 0) {
        AF(arg0, s32, 0xDC) = 0x60;
        D_80127190 = (s32) AF(arg0, s16, 0xA);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_080_80180694(u8 *arg0, s32 arg1) {
    s32 temp_v1;

    D_80127190 = (s32) AF(arg0, s16, 0xA);
    temp_v1 = AF(arg0, s32, 0xDC) - 1;
    AF(arg0, s16, 0xA) = (s16) ((u16) AF(arg0, s16, 0xA) + 8);
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v1 == 0) {
        func_8012C218((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801806DC);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180728);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801808B8);

void func_sc01_080_801809E4(u8 *arg0) {
    s16 i;
    u8 *p;

    if (AF(arg0, s32, 0x1C) != 0) {
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            func_8012913C(0x1A);
        }
        AF(arg0, s32, 0x1C)--;
        for (i = 0; i < 1; i++) {
            p = (u8 *)func_801291C0();
            if (p != 0) {
                AF(p, s16, 0) = 0x19;
                AF(p, s16, 0x2C) = 0;
                AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                    AF(arg0, s16, 0xDC) = 0;
                }
            }
        }
        {
            s16 c = 0xFF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        {
            s16 c = 0x1FF;
            for (i = 0; i < 1; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        {
            s16 c = 0x3FF;
            for (i = 0; i < 2; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
    } else {
        {
            s16 c = 0x3FF;
            for (i = 0; i < 2; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
    }
    if (D_80127188 == 3) {
        {
            s16 c = -0x7C01;
            for (i = 0; i < 0x80; i++) {
                p = (u8 *)func_801291C0();
                if (p != 0) {
                    AF(p, s16, 0) = 0x19;
                    AF(p, s16, 0x2C) = c;
                    AF(p, u8 *, 0x34) = &D_sc01_080_801C5D40 + (AF(arg0, s16, 0xDC) << 5);
                    if (++AF(arg0, s16, 0xDC) >= 0xC0) {
                        AF(arg0, s16, 0xDC) = 0;
                    }
                }
            }
        }
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2)++;
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180D54);

void func_sc01_080_80180F30(u8 *arg0) {
    D_sc01_080_8018A22C[AF(arg0, u16, 2)]();
}

void func_sc01_080_80180F6C(u8 *arg0) {
    D_sc01_080_8018A240[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80180FA8);

void func_sc01_080_80181040(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0xA) = (s16) (D_80127190 - 0x150);
    temp_v0 = AF(temp_v1, u16, 0x18) + 0x80;
    AF(temp_v1, u16, 0x18) = temp_v0;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    temp_v0_2 = AF(arg0, u16, 0x2E) - 1;
    AF(arg0, u16, 0x2E) = temp_v0_2;
    if ((s16) temp_v0_2 == -1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_080_801810A8(u8 *arg0) {
    D_sc01_080_8018A248[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801810E4);

void func_sc01_080_801813D4(u8 *arg0) {
    D_sc01_080_8018A250[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181410);

void func_sc01_080_8018155C(u8 *arg0) {
    D_sc01_080_8018A258[AF(arg0, u16, 2)]();
}

void func_sc01_080_80181598(u8 *arg0) {
    D_sc01_080_8018A264[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801815D4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801816E4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181770);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801817CC);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181854);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181918);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801819D0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181A70);

void func_sc01_080_80181B80(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
}

void func_sc01_080_80181B8C(u8 *arg0) {
    if (D_80126B62 < -0x282) {
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181BB0);

void func_sc01_080_80181C68(u8 *arg0) {
    D_sc01_080_8018A26C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181CA4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181D98);

void func_sc01_080_80181F5C(u8 *arg0) {
    func_sc01_080_80181D98();
    if (AF(arg0, s16, 0xFC) == 1) {
        func_8016ED8C((s32) func_sc01_080_8017F268, 0x01000000, (s32) AF(arg0, s16, 0xFE));
        AF(arg0, s16, 0xFC) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80181FAC);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801820AC);

s32 func_sc01_080_80182290(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012B200();
    AF(arg0, s32, 0x18) = 0xFFF20000;
    AF(arg0, s32, 0x1C) = 0x3C;
    return 0x3C;
}

void func_sc01_080_801822D0(u8 *arg0) {
    D_sc01_080_8018A2F4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8018230C);

s32 func_sc01_080_801824D0(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x10;
    temp_v0 = AF(temp_v1, s32, 4) & 0x7FFFFFFF;
    AF(temp_v1, s32, 4) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801824FC);

void func_sc01_080_80182670(u8 *arg0) {
    D_sc01_080_8018A32C[AF(arg0, u16, 2)]();
}

void func_sc01_080_801826AC(u8 *arg0) {
    D_sc01_080_8018A40C[AF(arg0, u16, 2)]();
}

void func_sc01_080_801826E8(u8 *arg0) {
    s32 var_a1;
    void *temp_a1;
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x14) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    func_8012AD80((s32) arg0);
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x10) = (u16) (AF(temp_a1, u16, 0x10) + D_sc01_080_8018A2A4[AF(arg0, s16, 0x70)]);
    func_sc01_080_80181FAC((s32) arg0);
    if (func_8012BEE8((s32) arg0) != 0) {
        if (AF(arg0, s32, 0xDC) != 0) {
            var_a1 = 0x4A4;
            if (AF(arg0, s16, 0x70) == 2) {
                var_a1 = 0x4A5;
            }
            func_8002D59C(4, var_a1, (s32) AF(arg0, u16, 0x36));
        }
        func_8012C218((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801827B4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8018287C);

void func_sc01_080_80182990(s32 arg0) {
    void *temp_v1;

    func_8012C658(0x24, 1, arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x1C) = (u16) D_sc01_080_8018A408;
    AF(temp_v1, u16, 0x1A) = (u16) D_sc01_080_8018A408;
    AF(temp_v1, u16, 0x18) = (u16) D_sc01_080_8018A408;
}

void func_sc01_080_80182A00(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc01_080_8018A338);
    SetScript((s32) arg0, (s32) &D_sc01_080_8018A3B0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0xA;
}

s32 func_sc01_080_80182A70(void) {
    return 2;
}

void func_sc01_080_80182A78(u8 *arg0) {
    func_sc01_080_80182EF8();
    D_sc01_080_8018A454[AF(arg0, u16, 2)](arg0);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182AC4);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182B30);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182B90);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182CB8);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182EF8);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80182F64);

void func_sc01_080_80183034(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80183054);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801831A0);

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_801831E8);

s32 func_sc01_080_80183258(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0xFE) = 0;
    return func_sc01_080_80183278();
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_80183278);

void func_sc01_080_801832C0(u8 *arg0) {
    D_sc01_080_8018A488[AF(arg0, u16, 2)]();
}

void func_sc01_080_801832FC(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc01_080/nonmatchings/sc01_080", func_sc01_080_8018331C);
