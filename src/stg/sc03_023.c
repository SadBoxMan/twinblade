#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_023_8017BE9C(void) {
}

void func_sc03_023_8017BEA4(void) {
}

void func_sc03_023_8017BEAC(void) {
}

void func_sc03_023_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_023_801828FC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_023_8017D670(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_023_80182904[])();
void func_sc03_023_8017D698(void);
extern void func_800D1EBC();
extern u8 D_sc03_023_80182910;
extern void func_8016EE40();
extern u8 D_sc03_023_8018291C;
extern u8 D_sc03_023_80182930;
extern void (*D_sc03_023_801829DC[])();
extern void (*D_sc03_023_801829E4[])();
extern u8 D_sc03_023_801829CC;
extern void func_sc03_023_8017DB48();
extern void (*D_sc03_023_801829EC[])();
extern void (*D_sc03_023_80182A64[])();
extern void (*D_sc03_023_80182B04[])();
extern void (*D_sc03_023_80182C3C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern s32 func_800291B4();
extern void func_800291A0();
extern void func_8013CB84();

extern void func_80171990();
extern void func_sc03_023_8017D774();
extern s32 func_sc03_023_8017D828();
extern void func_sc03_023_8017DBC4();

extern u8 D_sc03_023_80182AE8;
extern u8 D_sc03_023_80182AF4;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001CA1C();

extern s32 func_8016F250();
extern void func_800D0F0C();
extern s32 func_800D0EC4();
extern void func_80029514();
extern void func_80029124();
extern s32 func_80171928();
extern void func_8016F0AC();
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
extern u8 D_sc03_023_8017F214;
extern u8 D_sc03_023_80182A08;
extern u8 D_sc03_023_80182A3C;
extern s32 func_8012C354();
extern u8 D_sc03_023_80182AB8;
extern void func_8012B1B4();
extern s32 func_8012CBCC();
extern u8 D_sc03_023_801933C0;
extern s32 D_801270C8;
extern u8 D_sc03_023_80193608;
extern s32 func_8016F1AC();
extern s32 func_8012BD14();
void func_sc03_023_8017D884(void);
extern void func_8012C218();



s32 func_sc03_023_8017D6E8(void);
extern s32 func_80143B6C();

extern void func_80171A04();
extern void func_80171A10();


typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_023_8017C294();

void func_sc03_023_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc03_023_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_023_8017C294(&v[i], &w4[i]);
        if (func_sc03_023_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_023_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_023_8017C294(&v[i], &w4[i]);
            func_sc03_023_8017C338(&c, &w4[i], &p[i], arg2);
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

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017C294);

s32 func_sc03_023_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc03_023_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017C59C);

void func_sc03_023_8017D468(u8 *arg0) {
    D_sc03_023_801828FC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_023_8017D4A4(u8 *arg0) {
    func_sc03_023_8017D670();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_023_8017D4E8(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_023_8017D50C(u8 *arg0) {
    D_sc03_023_80182904[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_023_8017D548(u8 *arg0) {
    func_sc03_023_8017D698();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_023_8017D588(u8 *arg0) {
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

void func_sc03_023_8017D604(void) {
    func_800D1EBC();
}

void func_sc03_023_8017D624(void) {
    if (((u32) (func_800291B4(0xCC) & 0xFF) < 0xFU) && (func_800291B4(0xCC) & 0xFF)) {
        func_800291A0(0xCC, 1);
    }
}

void func_sc03_023_8017D670(void) {
    func_8016EE40((s32) &D_sc03_023_80182910, 0x01000000);
}

void func_sc03_023_8017D698(void) {
    func_8016EE40((s32) &D_sc03_023_8018291C, 0x01000000);
}

void func_sc03_023_8017D6C0(void) {
    func_8016EE40((s32) &D_sc03_023_80182930, 0x01000000);
}

s32 func_sc03_023_8017D6E8(void) {
    return func_8016F250();
}

void func_sc03_023_8017D708(u8 *arg0) {
    D_sc03_023_801829DC[AF(arg0, u8, 0x216)]();
}

void func_sc03_023_8017D744(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_023_8017D774(arg0);
}

void func_sc03_023_8017D774(s32 arg0) {
    if (func_800D0EC4() != 0) {
        func_80171A04(arg0);
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_023_8017D7BC(u8 *arg0) {
    D_sc03_023_801829E4[AF(arg0, u8, 0x216)]();
}

void func_sc03_023_8017D7F8(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_023_8017D828(arg0);
}

s32 func_sc03_023_8017D828(s32 arg0) {
    func_800D0F0C(func_800D0EC4(), 0x4D);
    func_800291A0(0xCC, 0xF);
    func_80029514(0x3C);
    func_80029124(0xE6, 1);
    return func_80171928(arg0);
}

void func_sc03_023_8017D884(void) {
    func_8016EE40((s32) &D_sc03_023_801829CC, 0x01000000);
}

void func_sc03_023_8017D8AC(void) {
    func_8016F0AC();
}

void func_sc03_023_8017D8CC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x5DC;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_023_8017DB48, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_023_8017DB48((s32) &D_80126948);
}

void func_sc03_023_8017D964(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x258;
    D_80126968 = 0x238;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_023_8017DB48, 1);
}

void func_sc03_023_8017D9DC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x5DC;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_023_8017DB48, 0);
}

void func_sc03_023_8017DA54(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x258;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0x40;
    func_8012A018((s32) func_sc03_023_8017DB48, 1);
}

void func_sc03_023_8017DAD0(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x5DC;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_023_8017DB48, 0);
}

void func_sc03_023_8017DB48(s32 arg0) {
    D_sc03_023_801829EC[AF(arg0, u8, 4)]();
}

void func_sc03_023_8017DB84(s32 arg0) {
    func_sc03_023_8017DBC4(arg0, 0);
}

void func_sc03_023_8017DBA4(s32 arg0) {
    func_sc03_023_8017DBC4(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017DBC4);

void func_sc03_023_8017DDBC(u8 *arg0) {
    D_sc03_023_80182A64[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017DDF8);

void func_sc03_023_8017DECC(u8 *arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 0x5C) = 0x8810;
    AF(arg0, s32, 0xB4) = (s32) (AF(arg0, s32, 0xB4) & ~1);
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    if (AF(arg0, s16, 0x76) < 0x370) {
        AF(arg0, s16, 0x76) = 0x2BC;
    }
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017DF1C);

void func_sc03_023_8017DFA0(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    AF(arg0, s16, 0xAA) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1800;
    AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0x1800;
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x98) = 0;
    func_8002D4C8(0x526, 0, arg2);
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017E014);

void func_sc03_023_8017E1F4(u8 *arg0) {
    D_sc03_023_80182B04[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017E230);

void func_sc03_023_8017E36C(u8 *arg0) {
    D_sc03_023_80182C3C[AF(arg0, u16, 2)]();
}

void func_sc03_023_8017E3A8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_023_80182A08) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 1;
        SetScript(arg0, (s32) &D_sc03_023_8017F214);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_023_80182A3C;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017E414);

void func_sc03_023_8017E524(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((s16) temp_v0 >= 0x10) {
        func_8002D4C8(0x529, 0, arg2);
        AF(arg0, u16, 0x84) = 0U;
    }
    if ((AF(arg0, s32, 0x1C) = temp_v0_2 = AF(arg0, s32, 0x1C) - 1) == 0) {
        AF(arg0, s16, 2) = 3;
        func_sc03_023_8017D6E8();
        func_80029124(0x8F, 1);
    }
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + 2);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) ^ 2);
    temp_v0_3 = func_80143B6C((s32) arg0, 1);
    if (temp_v0_3 != 0) {
        AF(temp_v0_3, u16, 6) = (u16) (AF(temp_v0_3, u16, 6) - 0x20);
        AF(temp_v0_3, u16, 6) = (u16) (AF(temp_v0_3, u16, 6) + (rand() & 0x3F));
        AF(temp_v0_3, u16, 0xE) = (u16) (AF(temp_v0_3, u16, 0xE) - (rand() & 0x1F));
    }
}

void func_sc03_023_8017E60C(void) {
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017E614);

void func_sc03_023_8017E70C(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xE) >= 0x2FC) {
        AF(arg0, s16, 2) = 2;
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x800;
    func_8012B1B4((s32) arg0, (s32) &D_sc03_023_80182AB8);
    temp_v0 = func_8012CBCC((s32) arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s16, 0x16) = -0xA;
    }
}

void func_sc03_023_8017E79C(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 6) < -0xA9) {
        AF(arg0, s16, 2) = 3;
        SetScript((s32) arg0, (s32) &D_sc03_023_801933C0);
        AF(arg0, s32, 0x1C) = 0xF;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    func_8012B1B4((s32) arg0, (s32) &D_sc03_023_80182AB8);
    temp_v0 = func_8012CBCC((s32) arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s16, 0x16) = -0xA;
    }
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017E834);

void func_sc03_023_8017E8E4(u8 *arg0) {
    s32 temp_v1;

    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 3);
    temp_v1 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + 1);
    if (temp_v1 == 0) {
        SetScript((s32) arg0, (s32) &D_sc03_023_801933C0);
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_023_8017E948(u8 *arg0) {
    if ((func_800291B4(0xCC) & 0xFF) == 0xF) {
        AF(arg0, s16, 0x76) = 0x1F4;
    }
}

void func_sc03_023_8017E988(s32 arg0) {
    s32 temp_v1;

    SetScript(arg0, (s32) &D_sc03_023_80193608);
    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x61) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    }
    AF(arg0, s16, 0x84) = 0xA;
    AF(arg0, s16, 0x102) = 1;
    AF(arg0, s16, 0x5C) = 0;
    if ((func_800291B4(0xCC) & 0xFF) != 0xF) {
        func_800291A0(0xCC, 1);
    }
    D_801270C8 = 0;
}

void func_sc03_023_8017EA40(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_v0_2;

    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x61) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        AF(arg0, s16, 0x102) = 2;
    }
    func_8012B1B4((s32) arg0, (s32) &D_sc03_023_80182AB8);
    temp_v0 = func_8012CBCC((s32) arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 4);
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s16, 0x16) = -8;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 8);
    }
    temp_v0_2 = AF(arg0, u16, 0x84) - 1;
    AF(arg0, u16, 0x84) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        func_8002D4C8(0x526, 0);
        AF(arg0, u16, 0x84) = 0xAU;
    }
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017EB2C);

void func_sc03_023_8017EC30(s32 arg0) {
    if ((func_8016F1AC() == 0) && (func_8012BD14(arg0) < 0x401)) {
        func_sc03_023_8017D884();
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_023_8017EC84(s32 arg0) {
    if ((u32) (func_800291B4(0xCC) & 0xFF) >= 0xFU) {
        func_8012C218(arg0);
    }
}

void func_sc03_023_8017ECC8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_023_80182AE8);
    SetScript((s32) arg0, (s32) &D_sc03_023_80182AF4);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_023_8017ED30(s32 arg0) {
    func_8012CBCC(arg0);
    if (((u32) ((AF(arg0, u16, 6) + 0x300) & 0xFFFF) >= 0x601U) || (AF(arg0, s16, 0xA) < -0x400) || ((u32) ((AF(arg0, u16, 0xE) + 0x100) & 0xFFFF) >= 0x701U)) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_023/nonmatchings/sc03_023", func_sc03_023_8017EDAC);

s32 func_sc03_023_8017EE74(void) {
    return 0xC;
}

void func_sc03_023_8017EE7C(void) {
    func_8013CB84();
}
