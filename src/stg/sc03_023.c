#include "common.h"
#include "gte.h"
#include "psyq.h"
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
extern s32 D_801270C8[];
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

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef union { s32 w; XY s; } UXY;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s32 w[4]; } W16;

void func_sc03_023_8017C294(SV8 *zero, SV8 *out) {
    MtxDCM m;
    MtxDCM mt;
    SV8 d;
    ReadRotMatrix(&m);
    PushMatrix();
    d.x = zero->x - m.t[0];
    d.y = zero->y - m.t[1];
    d.z = zero->z - m.t[2];
    TransposeMatrix(&m, &mt);
    ApplyMatrixSV(&mt, &d, out);
    PopMatrix();
}

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

extern u8 D_sc03_023_80182BAC;
extern u8 D_sc03_023_80182BD4;
extern u8 D_sc03_023_80182BFC;
extern u8 D_sc03_023_80182C24;

extern void *D_80126B78;
extern u8 D_80126B58;
extern u8 D_sc03_023_801932E8;
extern s32 func_8012C658();
extern void func_8012B23C();
extern s32 func_80148800();
extern s16 D_sc03_023_801829F4[];
extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s32 func_80012ABC();
extern s32 func_80012C6C();
extern void func_8012F14C();
extern void RotMatrixZYX();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 pad[0x10]; XY pt[12]; } Pts80182FD4;
typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad1;
    s16 x3, y3;
    u8 u3, v3;
    u16 pad2;
} PFT4;
typedef struct { u32 tag; u32 code; } PMODE;
typedef struct { u8 pad[0x10]; XY t[13]; } FANUV;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern void func_8012B2CC();
extern void func_8016AA50();

extern s32 func_8012BA10();
extern u8 D_sc03_023_80193390;
extern u8 D_sc03_023_80182B10;
extern u8 D_sc03_023_80182A84;
extern void func_80143970();
extern s32 D_80126B5C;
extern s32 D_80126B64;

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

void func_sc03_023_8017DBC4(u8 *o, s32 a1) {
    WMtx m;
    SV8 v;
    SV8 r;
    u8 x;
    if (a1 == 0 && (func_80148800(&D_80126B58) & 3)) {
        x = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = x;
        AF(o, s32, 0x14) = D_sc03_023_801829F4[x];
    }
    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + D_80126940[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + D_80126940[0];
    m.t[1] = AF(o, s16, 0x2A) + D_80126942;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void func_sc03_023_8017DDBC(u8 *arg0) {
    D_sc03_023_80182A64[AF(arg0, u16, 2)]();
}

void func_sc03_023_8017DDF8(u8 *o) {
    s16 t;
    u8 *p;

    AF(o, s32, 0xB4) |= 1;
    AF(o, s32, 0xC4) &= ~2;
    if (AF(o, s16, 0x60) != 0) {
        AF(o, s16, 0x7C) = AF(o, s16, 0x6);
        AF(o, s16, 0x7E) = AF(o, s16, 0xA);
        AF(o, s16, 0x80) = AF(o, s16, 0xE);
        func_8016AA50(o, AF(o, s16, 0x60));
    }
    t = AF(o, s16, 0x60);
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x60) = 0;
    AF(o, s16, 0x76) -= t;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, s16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    func_8012B2CC(o);
    func_8012B23C(o);
    AF(o, u8, 0xC2) = 1;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0x3C;
    func_8002D4C8(0x526, 0);
}

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

extern void (*D_sc03_023_80182ADC[])();
extern void (*D_sc03_023_80182AC4[])();
void func_sc03_023_8017DF1C(u8 *o) {
    if (AF(o, u16, 2) != 0) {
        if (AF(o, s16, 0x76) < 0x3D4) {
            D_sc03_023_80182ADC[AF(o, s16, 0x102)]();
        } else {
            D_sc03_023_80182AC4[AF(o, u16, 2)]();
        }
    } else {
        D_sc03_023_80182AC4[0]();
    }
}

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

void func_sc03_023_8017E014(u8 *o) {
    s32 t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 30;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        t = --AF(o, s32, 0x1C);
        if (t & 2) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x400;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(o, u16, 0x34)++;
            AF(o, u16, 0xA) -= 0x40;
            func_8012B23C(o);
        }
        break;
    case 2:
        if (func_8012CBCC(o) != 0) {
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x76) -= 10;
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(o, s16, 0x98) = 1;
            AF(o, u16, 0x5C) = 0x8810;
            AF(o, s32, 0x1C) = 1;
            AF(o, s32, 0xB4) &= ~1;
            AF(o, s32, 0xC4) |= 2;
            if (AF(o, s16, 0x76) < 0x370) {
                AF(o, s16, 0x76) = 700;
            }
        }
        break;
    }
}

void func_sc03_023_8017E1F4(u8 *arg0) {
    D_sc03_023_80182B04[AF(arg0, u16, 2)]();
}

void func_sc03_023_8017E230(u8 *arg0) {
    u16 t;

    t = AF(arg0, u16, 0x70) - 1;
    AF(arg0, u16, 0x70) = t;
    if ((t << 0x10) == 0) {
        AF(arg0, s16, 0x12) = (rand() & 0xF) - 7;
        AF(arg0, u16, 0x16) = AF(arg0, u16, 0x16) - (rand() & 0xF) - 8;
        AF(arg0, u16, 0x1A) = AF(arg0, u16, 0x1A) - (rand() & 0xF);
        if (rand() & 1) {
            SetScript((s32) arg0, (s32) &D_sc03_023_80182BAC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_023_80182BD4);
        }
        AF(arg0, s16, 2) = 2;
        if (rand() % 3 == 0) {
            func_8002D4C8(0x532, 0);
        }
    } else if (AF(arg0, u16, 0x72) & 0x4000) {
        if (rand() & 1) {
            SetScript((s32) arg0, (s32) &D_sc03_023_80182BFC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_023_80182C24);
        }
    }
}

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

void func_sc03_023_8017E414(u8 *arg0) {
    u8 *g = &D_80126B58;

    if (D_801270C8[0] == 0) {
        AF(arg0, u16, 0x5C) &= 0xEFFF;
        return;
    }
    if (AF(D_80126B78, s16, 0x12) == 0x800) {
        AF(arg0, u16, 0x5C) |= 0x1000;
    } else {
        AF(arg0, u16, 0x5C) &= 0xEFFF;
    }
    if (arg0 == AF(g, u8 *, 0x170)) {
        AF(arg0, u16, 0x5C) &= 0xEFFF;
        func_sc03_023_8017D6C0();
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x28;
        AF(D_801270C8[0], s16, 2) = 4;
        AF(D_801270C8[0], s32, 0x1C) = 0x14;
        SetScript(D_801270C8[0], (s32) &D_sc03_023_801932E8);
        func_8012C658(0x88, 0, arg0);
        func_8002D4C8(0x529, 0);
        AF(arg0, s16, 0x84) = 0;
    }
}

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

static inline u8 flag_cc_is_0e(void) {
    if ((func_800291B4(0xCC) & 0xFF) == 0xE) {
        return 1;
    }
    return 0;
}

void func_sc03_023_8017E614(u8 *o) {
    if (func_8012C354((s32) o, (s32) &D_sc03_023_80182A84) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = 0x4000;
        AF(o, s32, 0xC4) = 3;
        AF(o, u8, 0xC1) = 0;
        AF(o, s32, 0xBC) = (s32) &D_sc03_023_80182A3C;
        if (flag_cc_is_0e() == 0) {
            func_8012C218(o);
            return;
        }
        AF(o, s16, 0x102) = 0;
        func_80143970(o);
        AF(o, s16, 2) = 1;
        func_8012B23C(o);
        SetScript((s32) o, (s32) &D_sc03_023_80193608);
        AF(o, s32, 4) = D_80126B5C;
        AF(o, u16, 6) -= 0x40;
        AF(o, s32, 0xC) = D_80126B64;
        AF(o, s16, 0xDC) = -0x40;
        D_801270C8[0] = (s32) o;
    }
}

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

void func_sc03_023_8017E834(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012BA10(o, 4);
    if (--AF(o, s32, 0x1C) == 0) {
        if ((AF(o, u8, 0xFF) ^= 1) != 0) {
            AF(o, s32, 0x1C) = 5;
            SetScript((s32) o, (s32) &D_sc03_023_80193390);
            func_8002D4C8(0x525, 0);
        } else {
            AF(o, s32, 0x1C) = 0xF;
            SetScript((s32) o, (s32) &D_sc03_023_801933C0);
        }
    }
}

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
    D_801270C8[0] = 0;
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

void func_sc03_023_8017EB2C(u8 *arg0) {
    s32 temp_v0;
    u8 *p;
    u16 t;

    p = AF(arg0, u8 *, 0x20);
    if (AF(p, u16, 0x12) & 0x800) {
        AF(p, u16, 0x12) = AF(p, u16, 0x12) + 0x80;
    } else {
        AF(p, u16, 0x12) = AF(p, u16, 0x12) - 0x80;
    }
    func_8012B1B4((s32) arg0, (s32) &D_sc03_023_80182AB8);
    temp_v0 = func_8012CBCC((s32) arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0xA) - 4;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
        AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    }
    if (AF(arg0, s16, 0xE) - AF(arg0, s16, 0xDE) < -0x320) {
        func_8012C218(arg0);
    } else {
        t = AF(arg0, u16, 0x84) - 1;
        AF(arg0, u16, 0x84) = t;
        if ((t << 0x10) == 0) {
            func_8002D4C8(0x526, 0);
            AF(arg0, u16, 0x84) = 0xA;
        }
    }
}

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

void func_sc03_023_8017EDAC(u8 *o) {
    s32 p;

    p = func_8012C1B8();
    AF(o, s32, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CA1C(p, &D_sc03_023_80182B10);
    if (rand() & 1) {
        SetScript((s32) o, (s32) &D_sc03_023_80182BFC);
    } else {
        SetScript((s32) o, (s32) &D_sc03_023_80182C24);
    }
    AF(o, s16, 2) = 1;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2000;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
}

s32 func_sc03_023_8017EE74(void) {
    return 0xC;
}

void func_sc03_023_8017EE7C(void) {
    func_8013CB84();
}
