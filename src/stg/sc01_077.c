#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_077_8017BE9C(void) {
}

void func_sc01_077_8017BEA4(void) {
}

void func_sc01_077_8017BEAC(void) {
}

void func_sc01_077_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_077_8018A520[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc01_077_8018A508;
extern void (*D_sc01_077_8018A528[])();
extern u8 D_sc01_077_8018A514;
extern void func_sc01_077_8017DA08();
extern void (*D_sc01_077_8018A530[])();
extern void func_sc01_077_8017DAEC();
extern void (*D_sc01_077_8018A588[])();
extern void func_8016EDEC();
void func_sc01_077_8017DE84(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_077_8018A590[])();
extern void func_800D1EBC();
extern void (*D_sc01_077_8018A740[])();
extern void (*D_sc01_077_8018A754[])();
void func_sc01_077_8017E0EC(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc01_077_8018A760[])();
void func_sc01_077_8017E1D4(u8 *arg0);
extern void (*D_sc01_077_8018A790[])();
void func_sc01_077_8017E748(u8 *arg0);
extern void (*D_sc01_077_8018A79C[])();
void func_sc01_077_8017E868(u8 *arg0);
extern void (*D_sc01_077_8018A7B0[])();
extern void (*D_sc01_077_8018A7B8[])();
extern void (*D_sc01_077_8018A7F0[])();
extern void (*D_sc01_077_8018A7F8[])();
extern void (*D_sc01_077_8018A87C[])();
extern void (*D_sc01_077_8018A89C[])();
extern void (*D_sc01_077_8018A904[])();
extern void (*D_sc01_077_8018AA1C[])();
extern void (*D_sc01_077_8018AA24[])();
extern void func_sc01_077_80180930();
extern void func_sc01_077_80182988();
extern void (*D_sc01_077_8018AF90[])();
extern void (*D_sc01_077_8018AFB8[])();
extern void (*D_sc01_077_8018B000[])();
extern void (*D_sc01_077_801991C4[])();
extern void (*D_sc01_077_801B12A4[])();
extern void (*D_sc01_077_801B12B8[])();
extern void (*D_sc01_077_801B1588[])();
extern void (*D_sc01_077_801B159C[])();
extern u8 D_sc01_077_801B1590;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_sc01_077_801D564C[])();

void func_sc01_077_8017BEBC(u8 *arg0) {
    D_sc01_077_8018A520[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc01_077_8018A508, 0xFD);
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

void func_sc01_077_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc01_077_8017C150(u8 *arg0) {
    D_sc01_077_8018A528[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc01_077_8018A514, 0x18);
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

void func_sc01_077_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 D_sc01_077_801DA908;
extern s32 func_8012C588();

extern void func_80165770();
extern void func_80175414();
extern void func_8012AD44();
extern u8 D_sc01_077_801B0118;
extern u8 D_sc01_077_801B0D50;
extern u8 D_sc01_077_8018AAEC;
extern u8 D_sc01_077_801B09D0;
extern void func_8012B2CC();
extern void func_8012B23C();
extern s32 func_8012B14C();
extern u8 D_sc01_077_8018AAF8;
extern s32 func_8002D4C8();
extern u8 D_sc01_077_8018AB04;
extern u8 D_sc01_077_801B0908;
extern void func_80143CD4();
extern void func_800CB0E8();
extern u8 D_sc01_077_801B0E48;
extern u8 D_sc01_077_8018AB8C;
extern void func_80130740();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern s32 func_8012BEE8();
extern void func_8012C098();
extern u8 D_sc01_077_80196F3C;
extern u8 D_sc01_077_801973C4;
extern s32 func_8012BCCC();
extern u8 D_sc01_077_8019731C;
extern void func_sc01_077_8018469C();
extern u8 D_sc01_077_801970DC;
extern void func_80142414();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc01_077_8018AFC0;
extern void func_8001CA88();
extern void func_80143994();
extern void func_8001C214();
extern u8 D_sc01_077_801B1560;

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
extern s8 D_8012694C;
extern s32 D_80126950;
extern u8 D_sc01_077_801B1DAC;
extern s32 func_80174E9C();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_8016F398();
extern s32 func_sc01_077_8017D900();
extern u16 D_80126980;
extern void func_sc01_077_8017D98C();
extern void func_80171B44();
extern u8 D_sc01_077_8018A62C;
extern u8 D_sc01_077_8018A69C;
extern u8 D_sc01_077_8018A6E4;
extern s32 func_8016F410();
extern void func_80154274();
extern s32 func_801399F0();
extern void func_80139914();
extern s32 func_sc01_077_8017E170();
extern s32 func_80171B4C();
extern s32 D_80126958;
extern u8 D_sc01_077_8018A59C;
extern u8 D_sc01_077_801B17AC;
extern s32 func_8013767C();
extern u8 D_sc01_077_8018A5E4;
extern void func_sc01_077_8017F240();
extern u8 D_sc01_077_801B17F0;
extern u8 D_sc01_077_801B1848;
extern void func_sc01_077_8017D8F0();
extern u8 D_sc01_077_801B19C0;
extern void func_sc01_077_8017D8DC();
extern s32 func_80012B04();
extern void func_8012AD50();
extern u8 D_sc01_077_8018A7C0;
extern void func_8001CC3C();
extern void func_sc01_077_8017EC7C();
extern void func_8001CB6C();
extern s32 func_sc01_077_8017ED88();
extern void (*D_sc01_077_8018A934[])();
extern void func_8012B4B8();
extern void func_8012C0EC();
extern s32 func_8012CE2C();
extern s32 func_8012CBCC();
extern u8 D_sc01_077_80186E48;
extern u8 D_sc01_077_8018A884;
extern u8 D_sc01_077_801D0B94;
extern void func_8001D0E8();
extern void func_8012B200();
extern s32 D_801270C8;
extern void func_sc01_077_8017F714();
extern void (*D_sc01_077_8018AE88[])();
extern u8 D_sc01_077_8018AE70;
extern u8 D_sc01_077_801D100C;
extern u8 D_800D3918;
extern u8 D_sc01_077_8018B00C;
extern void func_8012AD80();
extern s32 func_8012D5E4();
extern s32 func_8012C218();
extern u8 D_sc01_077_8018AEB8;
extern u8 D_sc01_077_8018AF20;
extern s32 func_8012C354();
extern s32 func_8012C658();
extern void (*D_sc01_077_801D5624[])();
extern void func_sc01_077_80185E68();

extern u8 D_sc01_077_801D5558;
extern u8 D_sc01_077_801D5568;
extern u8 D_sc01_077_801D55C0;
extern u8 D_sc01_077_801D6F6C;
extern s32 D_sc01_077_801D55AC[];

extern u8 D_sc01_077_801D77A8;

extern u16 D_80126970;
extern u16 D_80126974;

extern void func_sc01_077_80184594();
extern s32 func_8012CBF4();
extern s32 D_80126D50;
extern u8 D_sc01_077_801B1290;
extern u8 D_sc01_077_801B129C;
extern s32 func_80132EF4();

extern u8 D_sc01_077_801B06E8;

extern void func_sc01_077_801858AC();

extern void *D_80126B78;
extern void func_sc01_077_8017EB2C();
extern void func_sc01_077_8017F114();
extern void func_sc01_077_8017F290();

typedef struct { s16 x, y, z, pad; } SV4;

extern u8 D_sc01_077_801B12AC;
extern void FaceHelper();

typedef struct { s32 x, y, z, pad; } V4;
extern u8 D_sc01_077_801B1430;
extern u8 D_sc01_077_801B1208;
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 SetScript();
extern s32 func_8012B77C();

extern s32 ReadGeomScreen();
extern void func_sc01_077_8017C66C();
extern s32 func_8012B8E4();
extern s32 func_8012C51C();
extern u8 D_sc01_077_8018AAD4;
extern u8 D_sc01_077_8018AA6C;
extern u8 D_sc01_077_801AFD28;
extern u8 D_sc01_077_801B01E0;
extern u8 D_sc01_077_801AFFC0;
extern void func_80143970();
extern void func_8012B030();
extern u8 D_sc01_077_8018AD90;
extern s32 D_sc01_077_8018AD60[];
extern u8 D_sc01_077_8018ABC0[][52];
extern u8 D_sc01_077_8018AABC;
extern u8 D_sc01_077_8018AA8C;
extern u8 D_sc01_077_801AFF18;
extern u16 D_sc01_077_8018ABA8[][4];

void func_sc01_077_8017C294(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc01_077_8017C66C(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc01_077_8017C66C(&v[i], &w4[i]);
        if (func_sc01_077_8017C710(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc01_077_8017C908(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc01_077_8017C66C(&v[i], &w4[i]);
            func_sc01_077_8017C710(&c, &w4[i], &p[i], arg2);
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
extern s32 ratan2();
extern s32 func_8012BC60();
extern s32 func_8012B6D4();
extern void func_8012B0B4();
extern s32 func_8012CEB0();
extern void func_8012ADE4();
extern s16 D_sc01_077_8018AACC;
extern s16 D_sc01_077_8018AAD0;
extern s16 D_80126B5E;
extern s32 func_80013478();

extern u8 D_800AF648;
extern u16 D_800B9A02;
extern u32 D_sc01_077_8018A9E0[];
extern u8 D_800A651C[];
extern u8 D_sc01_077_8018A9EC[][4];
extern u8 D_sc01_077_8018A9FC[][4];
extern u8 D_sc01_077_8018AA0C[][4];
extern s32 func_sc01_077_8017F7E8();
extern u8 *AllocPrim();

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
extern void func_8012F14C();
extern u8 D_801152A8;
extern u8 D_sc01_077_8019918C;
extern WMtx *D_sc01_077_801991C0;
extern WMtx D_sc01_077_801DA8E8[];
extern void func_80017DC4();
extern void func_80017E68();
extern s32 func_80134510();
extern s8 D_sc01_077_80199178[];
extern void func_80017758();

extern s32 func_8012CBA4(); extern s32 D_801270D4;
extern s32 func_8012CBCC(); extern s32 func_8012CBF4(); extern void func_sc01_077_8018294C(); extern s32 func_80143B6C();

extern void func_8012B178();
extern u8 D_sc01_077_8018AB24;
extern s32 D_801270CC;
typedef struct { s32 w[4]; } W16;
extern W16 D_sc01_077_801D9204;
extern u8 D_80062BDC;
extern void StartRumbleScript();
extern void func_8012E9C0();
extern u8 D_sc01_077_801B02A8;
extern void func_sc01_077_80182268();
extern void func_sc01_077_80182254();
extern s32 func_sc01_077_801822E4();
extern void func_sc01_077_801822FC();
extern s32 func_sc01_077_80182338();
extern s32 func_sc01_077_801823A0();
extern s32 func_sc01_077_80182420();
extern void func_sc01_077_801827A4();
extern void func_sc01_077_80182968();
extern s32 func_sc01_077_8018301C();
extern void (*D_sc01_077_8018ADC4[])();
extern s16 D_80126B66;
extern u8 D_sc01_077_801B0AE0;
extern s32 func_8012B608();
extern u8 D_sc01_077_8018AAB0;
extern s32 D_sc01_077_801DA7C0;
extern u8 *func_8012E544();
extern u8 D_sc01_077_801AFDD0;

extern s32 D_801270D8;
extern u8 D_sc01_077_8018AB18;
extern u8 D_sc01_077_801B0330;
extern s32 func_8012C044();


extern u8 D_80126B58[];
extern s16 D_sc01_077_8018AB94;
extern s16 D_sc01_077_8018AB96;
extern void func_8012DBD0();
extern s32 func_8012CC64();
extern u8 D_sc01_077_8018AB10;

extern s32 D_sc01_077_801D5638[];
extern void func_8012B21C();
extern u8 D_80062C04;
extern void func_8016B428();
extern S12 D_sc01_077_801DA910[];
extern u8 D_sc01_077_801D5588[];
extern u8 D_sc01_077_801D5578;
extern S12 D_sc01_077_801D6F8C[];
extern s16 D_sc01_077_801DA98A[];
extern s16 D_sc01_077_801DA98E[];
extern s16 D_sc01_077_801DA992[];
extern s32 D_sc01_077_801DA988[];
extern s32 D_sc01_077_801DA98C[];
extern s32 D_sc01_077_801DA990[];
extern void func_8012E32C();
extern void func_8012E28C();
extern s32 D_sc01_077_801D55F4[];

extern void ReadRotMatrix();
extern void PushMatrix();
extern void PopMatrix();
extern void TransposeMatrix();
extern void ApplyMatrixSV();
extern u16 D_sc01_077_8018AA2C[];
extern u8 D_sc01_077_8018AA4C;
extern u32 D_sc01_077_801DA9AC;
extern u16 D_sc01_077_801DA9E8[];
extern void func_800183E0();
extern s32 func_8012913C();
extern s16 D_sc01_077_801B1568[];
extern void func_8012931C();
extern u16 D_801202A0;
extern void func_8012AE00();
extern void func_80130D48();

void func_sc01_077_8017C66C(SV8 *zero, SV8 *out) {
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

s32 func_sc01_077_8017C710(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc01_077_8017C908(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

extern s32 func_8012D714();
extern u16 D_80126B96;
extern s32 func_sc01_077_8017F694(s32 arg0);

extern u8 D_sc01_077_801D15C4;
extern u8 D_sc01_077_801D1CBC;
extern u8 D_sc01_077_8018A8A4;
extern u8 D_sc01_077_8018A8B4;
extern u8 D_sc01_077_8018A8C4;

extern s16 D_sc01_077_8018A8FC[];
extern s32 D_sc01_077_8018A8F8;
extern void func_sc01_077_8017F5BC();
extern u8 D_sc01_077_8018AE0C[];
extern u8 D_sc01_077_8018AE34[];
extern s32 func_sc01_077_80183F4C(s32 arg0);
extern u8 D_sc01_077_8018AF78[];
extern u8 D_sc01_077_8018AF88;

extern s32 rand();
extern u8 D_sc01_077_801D20B4;
extern u8 D_sc01_077_8018A800;
extern SV8 D_sc01_077_8018A940[][2];
extern u16 D_800B99DA;
extern SV8 D_sc01_077_8018A858[];
extern u8 D_80078EC1;

extern u8 D_sc01_077_80197514;
extern u8 D_sc01_077_8018AFB0;
extern s32 D_sc01_077_8018AE80;
extern s32 D_sc01_077_8018AE84;
extern void func_sc01_077_8018414C();
void func_sc01_077_80184238(s32 arg0);
s32 func_sc01_077_80184254(s32 arg0);
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern u16 D_80126B62;
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();

extern s16 D_sc01_077_8018A9B0[];
extern s16 D_sc01_077_8018A9B2[];
extern u8 D_sc01_077_8018A9D4;
extern void func_sc01_077_8017FD14(u8 *arg0);

extern s16 D_sc01_077_8018A9D0;
extern s16 D_sc01_077_8018A9D2;

extern B8 D_sc01_077_801D5610;

extern void func_80174784();
extern s32 D_sc01_077_8018AFA8[];



extern u8 D_sc01_077_801D7A4C;
extern void func_801747AC();
void func_sc01_077_80185BA4(u8 *o);

extern s32 D_801270DC[];
extern s32 func_8012BD14();
void func_sc01_077_801863B4(u8 *o);

extern s32 func_80172664();
extern s32 D_801270D0;
extern u8 D_sc01_077_8018A868;
extern void func_8002AC00();
extern s32 D_sc01_077_8018A928;
extern s32 func_80171D1C();
extern B8 D_sc01_077_801D90F0;

extern s32 func_800CF854();
extern u8 D_800D5A34;
extern s32 func_80172658();


void func_sc01_077_80184554(s32 arg0);
s32 func_sc01_077_801845EC(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_sc01_077_801B1720;
extern WMtx D_800AE620;
extern void RotMatrixY();
extern void ApplyMatrixLV();
extern s32 func_8012CC1C();
extern u8 D_sc01_077_8018A92C;
extern s32 D_sc01_077_8018A924;
extern u8 D_sc01_077_8018A914;
extern s32 func_8012DE2C();
extern s32 func_8012DDA4();

extern u8 D_sc01_077_8018AA98;
extern u8 D_sc01_077_8018AA80;
extern u8 D_sc01_077_801B0048;
extern s16 D_sc01_077_8018AAE4;
extern s16 D_sc01_077_8018AAE8;
extern s32 func_8012BD3C();
extern void func_sc01_077_80181B58();
extern void func_sc01_077_80181B9C();
s32 func_sc01_077_801809BC(u8 *p, u8 *o);
void func_sc01_077_80180B64(u8 *o);
void func_sc01_077_80180C90(u8 *o);
s32 func_sc01_077_80180F10(u8 *p, s32 k);

typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern void GsGetLs();
extern void GsSetLsMatrix();
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc01_077_801DA9A0;

void func_sc01_077_8017C974(u8 *o) {
    SV8 r;
    s32 tmp[4];
    SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteC77 g;
    s32 x0, x1, y0, y1;
    s32 xi, yi;
    CellC77 **row;
    CellC77 **cp;
    CellC77 *c;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    u32 *poly;
    u32 *end;
    u32 w;
    s32 hi;
    s32 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    u32 cx, cy, cz;
    u32 bxl, bxh, byl, byh, bzl, bzh;

    ReadGeomScreen();
    GsGetLs(o + 0x10, &ls);
    GsSetLsMatrix(&ls);
    func_sc01_077_8017C294(&D_sc01_077_801DA9A0, &r, AF(o, s32, 0x60));
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    x0 = (r.x + 0x4000) / 512;
    x1 = (r.x + r.z + 0x4000) / 512 + 2;
    x0 = x0 < 0 ? 0 : (x0 > 63 ? 63 : x0);
    x1 = x1 < 0 ? 0 : (x1 > 63 ? 63 : x1);
    y0 = (r.y + 0x4000) / 512 - 1;
    y1 = (r.y + r.pad + 0x4000) / 512 + 2;
    y0 = y0 < 0 ? 0 : (y0 > 63 ? 63 : y0);
    y1 = y1 < 0 ? 0 : (y1 > 63 ? 63 : y1);
    row = &AF(o, CellC77 **, 0xC)[y0 * 64 + x0];
    for (yi = y0; yi < y1; yi++, row += 64) {
        for (xi = x0, cp = row; xi < x1; xi++, cp++) {
            c = *cp;
            if (c == 0) continue;
            cx = c->x; cy = c->y; cz = c->z;
            bxl = cx & 0xFFFF; byl = cy & 0xFFFF; bzl = cz & 0xFFFF;
            bxh = cx >> 16; bzh = cz >> 16; byh = cy >> 16;
            box[0].x = bxl; box[0].y = byl; box[0].z = bzl;
            box[1].x = bxh; box[1].y = byl; box[1].z = bzl;
            box[2].x = bxl; box[2].y = byl; box[2].z = bzh;
            box[3].x = bxh; box[3].y = byl; box[3].z = bzh;
            box[4].x = bxl; box[4].y = byh; box[4].z = bzl;
            box[5].x = bxh; box[5].y = byh; box[5].z = bzl;
            box[6].x = bxl; box[6].y = byh; box[6].z = bzh;
            box[7].x = bxh; box[7].y = byh; box[7].z = bzh;
            gte_ldv3c(&box[0]);
            gte_rtpt();
            gte_stsxy3(&scr[0], &scr[1], &scr[2]);
            gte_ldv0(&box[3]);
            gte_rtps();
            gte_stsxy(&scr[3]);
            gte_ldv3c(&box[4]);
            gte_rtpt();
            gte_stsxy3(&scr[4], &scr[5], &scr[6]);
            gte_ldv0(&box[7]);
            gte_rtps();
            gte_stsxy(&scr[7]);

            if (scr[0].x > scr[1].x) { hi = scr[0].x; xh = scr[1].x; } else { xh = scr[0].x; hi = scr[1].x; }
            if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < xh) xh = scr[2].x;
            if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < xh) xh = scr[3].x;
            if (scr[4].x > scr[5].x) { yl = scr[4].x; yh = scr[5].x; } else { yh = scr[4].x; yl = scr[5].x; }
            if (scr[6].x > yl) yl = scr[6].x; else if (scr[6].x < yh) yh = scr[6].x;
            if (scr[7].x > yl) yl = scr[7].x; else if (scr[7].x < yh) yh = scr[7].x;
            xl = xh; if (yh < xl) xl = yh;
            xh = hi; if (xh < yl) xh = yl;
            if (xh < -160 || xl > 160) continue;

            if (scr[0].y > scr[1].y) { xl = scr[0].y; yl = scr[1].y; } else { yl = scr[0].y; xl = scr[1].y; }
            if (scr[2].y > xl) xl = scr[2].y; else if (scr[2].y < yl) yl = scr[2].y;
            if (scr[3].y > xl) xl = scr[3].y; else if (scr[3].y < yl) yl = scr[3].y;
            if (scr[4].y > scr[5].y) { xh = scr[4].y; yh = scr[5].y; } else { yh = scr[4].y; xh = scr[5].y; }
            if (scr[6].y > xh) xh = scr[6].y; else if (scr[6].y < yh) yh = scr[6].y;
            if (scr[7].y > xh) xh = scr[7].y; else if (scr[7].y < yh) yh = scr[7].y;
            if (yh < yl) yl = yh;
            yh = xl; if (yh < xh) yh = xh;
            if (yh < -120 || yl > 120) continue;

            poly = c->start;
            end = c->end;
            verts = c->verts;
            for (; poly < end; poly += 3) {
                w = poly[1];
                a = (s32)(verts + (w & 0xFFFF));
                b = (s32)(verts + (w >> 16));
                w = poly[2];
                d3 = verts + (w & 0xFFFF);
                w >>= 16;
                gte_ldv3(a, b, d3);
                gte_rtpt();
                gte_stflg(&g.flag);
                if (g.flag & 0x7F85E000) continue;
                gte_nclip();
                type = w & 0xF;
                d = verts + ((w & 0xFFF0) >> 1);
                gte_stopz(&g.z);
                if (g.z <= 0) continue;
                switch (type) {
                case 4:
                case 5:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3_f3(pk);
                    gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                    p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0x10);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(pk, s16, 0x18);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0x12);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(pk, s16, 0x1A);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    if (yh < -120 || yl > 120) continue;
                    if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                    g.z = m;
                    if (type != 4) g.z = m + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x4000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x14;
                    break;
                }
                case 6:
                case 7:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3c(tmp);
                    gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz3();
                    if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                    g.z = m;
                    if (type != 6) g.z = m + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    t = (u32 *)poly[0];
                    AF(pk, u32, 4) = t[0];
                    AF(pk, u32, 0xC) = t[1];
                    AF(pk, u32, 0x14) = t[2];
                    AF(pk, u16, 0x1C) = t[3];
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x20;
                    break;
                }
                case 0:
                case 1:
                { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                    gte_stsxy3_f4(pk);
                    gte_ldv0(d);
                    gte_rtps();
                    p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(pk, s16, 0x10);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(pk, s16, 0x12);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    gte_stflg(&g.flag);
                    if (g.flag & 0x7F85E000) continue;
                    gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                    gte_stsxy(pk + 0x14);
                    p3 = AF(pk, s16, 0x14);
                    if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                    if (xh < -160 || xl > 160) continue;
                    q3 = AF(pk, s16, 0x16);
                    if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                    if (yh < -120 || yl > 120) continue;
                    za = g.sz2; if (za < g.sz3) za = g.sz3;
                    zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 0) g.z = zb + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x18;
                    break;
                }
                case 2:
                case 3:
                { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                    gte_stsxy3c(tmp);
                    gte_ldv0(d);
                    gte_rtps();
                    gte_stflg(&g.flag);
                    if (g.flag & 0x7F85E000) continue;
                    gte_stsxy(&tmp[3]);
                    gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    p3 = AF(tmp, s16, 0xC);
                    if (p3 > xh) xh = p3; else if (p3 < xl) xl = p3;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    q3 = AF(tmp, s16, 0xC);
                    if (q3 > yh) yh = q3; else if (q3 < yl) yl = q3;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz4();
                    za = g.sz2; if (za < g.sz3) za = g.sz3;
                    zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 2) g.z = zb + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    AF(pk, s32, 0x20) = tmp[3];
                    t = (u32 *)poly[0];
                    AF(pk, u32, 4) = t[0];
                    AF(pk, u32, 0xC) = t[1];
                    AF(pk, u32, 0x14) = t[2];
                    tw = t[3];
                    AF(pk, u16, 0x1C) = tw;
                    tw >>= 16;
                    AF(pk, u16, 0x24) = tw;
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x28;
                    break;
                }
                }
            }
        }
    }
    g_PrimNext = pk;
}

void func_sc01_077_8017D840(void) {
    D_80126954 = 0x15E;
    D_8012695C = 0x258;
    D_80126968 = 0x1C2;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0x140;
    D_80126978 = 0;
    D_8012697A = 0x140;
    func_8012A018((s32) func_sc01_077_8017DA08, 0);
    func_sc01_077_8017DA08((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_077_8017D8DC(void) {
    D_8012694C = 1;
}

void func_sc01_077_8017D8F0(void) {
    D_8012694C = 0;
}

s32 func_sc01_077_8017D900(void) {
    D_80126950 = 0x1F4;
    D_80126954 = 0x1F4;
    D_8012695C = 0x320;
    D_80126968 = 0x60;
    D_8012696A = 0x800;
    D_80126976 = 0x18;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_8012697A = -0x7D;
    return func_80174E9C((s32) &D_sc01_077_801B1DAC);
}

void func_sc01_077_8017D98C(void) {
    D_80126954 = 0x15E;
    D_8012695C = 0x258;
    D_80126968 = 0x1C2;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0x140;
    D_80126978 = 0;
    D_8012697A = 0x140;
    func_8012A018((s32) func_sc01_077_8017DA08, 0);
}

void func_sc01_077_8017DA08(s32 arg0) {
    D_sc01_077_8018A530[AF(arg0, u8, 4)]();
}

void func_sc01_077_8017DA44(u8 *arg0) {
    AF(arg0, s16, 0x2E) = (s16) ((s32) -rsin((s32) AF(D_80126B78, s16, 0x12)) / 64);
    AF(arg0, s16, 0x32) = (s16) ((s32) -rcos((s32) AF(D_80126B78, s16, 0x12)) / 32);
    func_sc01_077_8017DAEC((s32) arg0);
}

void func_sc01_077_8017DACC(s32 arg0) {
    func_sc01_077_8017DAEC(arg0);
}

void func_sc01_077_8017DAEC(u8 *o) {
    WMtx m;
    SV8 r;
    SV8 out;
    s16 x;
    s16 z;

    AF(o, s32, 0x8) = (s16)func_80012C6C(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    x = D_80126B5E;
    z = D_80126B66;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + (s16)D_80126B62;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + z;
    func_80013F3C(&m);
    func_800123F0(&m, AF(o, s16, 0x1C));
    func_80012558(&m, AF(o, s16, 0x1A));
    func_800126C4(&m, AF(o, s16, 0x18));
    m.t[0] = AF(o, s16, 0x28) + x;
    m.t[1] = AF(o, s16, 0x2A) + (s16)D_80126B62;
    m.t[2] = AF(o, s16, 0x2C) + z;
    r.x = 0;
    r.y = 0;
    r.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &r, &out);
    AF(o, s32, 0x3C) = out.x;
    AF(o, s32, 0x40) = out.y;
    AF(o, s32, 0x44) = out.z;
}

void func_sc01_077_8017DCB0(u8 *arg0) {
    D_sc01_077_8018A588[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_077_8017DCEC(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_077_8017DE84, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_077_8017DD3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_077_8017DD60(u8 *arg0) {
    D_sc01_077_8018A590[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_077_8017DD9C(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_077_8017E0EC, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_077_8017DDE8(u8 *arg0) {
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

void func_sc01_077_8017DE64(void) {
    func_800D1EBC();
}

void func_sc01_077_8017DE84(u8 *arg0) {
    D_sc01_077_8018A740[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017DEC0(u8 *arg0) {
    func_8016F398();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_sc01_077_8017D900();
}

void func_sc01_077_8017DEFC(s32 arg0) {
    u16 temp_v0;

    temp_v0 = D_80126980 | 0x8000;
    D_80126980 = temp_v0;
    if (temp_v0 & 0x8000) {
        func_sc01_077_8017D98C();
        func_80171B44(arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017DF5C(u8 *o) {
    if (func_80171B4C(o, 0x1E) != 0) {
        if (func_800CF854() != 0) {
            AF(o, u8, 0x214) = 4;
            return;
        }
        AF(o, s32, 0x198) = func_8013767C(AF(o, s32, 0x198));
        func_80154274(o, &D_800D5A34);
        EndScene(o);
        AF(o, s16, 0x20C) = 0;
        AF(o, u8, 0x214) = AF(o, u8, 0x214) + 1;
    }
}

void func_sc01_077_8017DFD8(s32 arg0) {
    if (func_8016F410(0) != 0) {
        func_80154274(arg0, (s32) &D_sc01_077_8018A62C);
    }
    if (func_8016F410(1) != 0) {
        func_80154274(arg0, (s32) &D_sc01_077_8018A69C);
        AF(arg0, s16, 0x20C) = 1;
    }
    if ((AF(arg0, s16, 0x20C) == 1) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        AF(arg0, s16, 0x20C) = 2;
        func_80154274(arg0, (s32) &D_sc01_077_8018A6E4);
    }
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene(arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E0B4(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc01_077_8017E0EC(u8 *arg0) {
    D_sc01_077_8018A754[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E128(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x800;
    func_80171B44((s32) arg0);
    func_sc01_077_8017E170((s32) arg0);
}

s32 func_sc01_077_8017E170(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80171B4C(arg0, 0x1E);
    if (var_v0 != 0) {
        var_v0 = AF(arg0, u8, 0x214) + 1;
        AF(arg0, u8, 0x214) = (u8) var_v0;
    }
    return var_v0;
}

void func_sc01_077_8017E1B4(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc01_077_8017E1D4(u8 *arg0) {
    D_sc01_077_8018A760[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E210(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc01_077_8017E224(u8 *o) {
    B8 v = D_sc01_077_801D90F0;
    if (func_80171D1C(o, &v, 0x80) != 0) {
        AF(o, u8, 0x214)++;
    }
}

void func_sc01_077_8017E298(u8 *o) {
    s32 v;

    v = func_80012B04(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x800, 4);
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + v) & 0xFFF;
    if ((s16) v == 0) {
        if (D_80078EC1 == 8) {
            AF(o, s32, 0x198) = func_8013767C(&D_sc01_077_801B1720);
            AF(o, u8, 0x214) = 0xB;
        } else {
            func_sc01_077_8017D8DC();
            AF(o, s32, 0x208) = D_8012695C;
            AF(o, s32, 0x204) = 0x20;
            AF(o, u8, 0x214)++;
        }
    }
}

void func_sc01_077_8017E350(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 != -1) {
        temp_v0_2 = D_80126958 + 8;
        D_80126958 = temp_v0_2;
        D_8012695C = temp_v0_2;
        return;
    }
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B17AC);
    func_80154274((s32) arg0, (s32) &D_sc01_077_8018A59C);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc01_077_8017E3EC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80154274((s32) arg0, (s32) &D_sc01_077_8018A5E4);
        D_8012695C = AF(arg0, s32, 0x208);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E460(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc01_077_8017F240();
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E4B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B17F0);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E51C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400, 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((s16) temp_v0 == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v0_2 = AF(arg0, s32, 0x204);
    if (((temp_v0_2 == 0) || (AF(arg0, s32, 0x204) = (s32) (temp_v0_2 - 1), temp_v0_3 = D_80126970 - 4, temp_v1 = D_80126974 - 4, D_80126970 = temp_v0_3, D_80126976 = temp_v0_3, D_80126974 = temp_v1, D_8012697A = temp_v1, (AF(arg0, s32, 0x204) == 0))) && ((s16) temp_v0 == 0)) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E604(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B1848);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E668(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E6BC(s32 arg0) {
    func_sc01_077_8017D8F0();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017E6F4(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_8016F0E4((s32) arg0);
        func_80165770((s32) arg0);
    }
}

void func_sc01_077_8017E748(u8 *arg0) {
    D_sc01_077_8018A790[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E784(u8 *arg0) {
    func_sc01_077_8017D8DC();
    D_80126976 = 0;
    D_8012697A = 0;
    AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B19C0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc01_077_8017E7DC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E830(s32 arg0) {
    func_sc01_077_8017D8F0();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017E868(u8 *arg0) {
    D_sc01_077_8018A79C[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E8A4(u8 *o) {
    if (AF(o, u16, 0) == 0x19 || AF(o, u16, 0) == 0x1A) {
        return;
    }
    if (D_801270D4 >= 0x1E) {
        AF(o, u8, 0x214) = 4;
        return;
    }
    if (func_80172658(o) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        func_80171B44(o);
        AF(o, u8, 0x214) = AF(o, u8, 0x214) + 1;
    }
}

void func_sc01_077_8017E924(u8 *o) {
    if (func_80171B4C(o, 8) != 0) {
        AF(o, s32, 0x204) = 0x20;
        AF(o, u16, 0xAA) = AF(o, u16, 0xAC) = 0xC040;
        AF(o, u8, 0x214)++;
    }
}

void func_sc01_077_8017E974(u8 *o) {
    if (func_80172664(o) != 0) {
        AF(o, u16, 0xAA) = AF(o, u16, 0xAC) = 0xC040;
    } else {
        AF(o, u8, 0x214)++;
    }
}

void func_sc01_077_8017E9C0(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x800, 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017EA2C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017EA5C(u8 *arg0) {
    D_sc01_077_8018A7B0[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017EA98(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012AD44((s32) arg0, 1);
}

s32 func_sc01_077_8017EAC0(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        var_s0 += 1;
        func_sc01_077_8017EB2C(rand(), AF(arg0, s32, 0x1C));
    } while (var_s0 < 4);
    if (func_8012BEE8((s32) arg0) == 1) {
        func_8012C218((s32) arg0);
    }
}

void func_sc01_077_8017EB2C(s32 a0, s32 a1) {
    u8 *d = D_80126B58;
    s16 r;
    u8 *p;
    s32 t;
    s32 e;

    if (a0 & 1) {
        p = (u8 *)func_8012913C(2);
    } else {
        p = (u8 *)func_8012913C(1);
    }
    if (p != 0) {
        r = rand() % 256;
        e = rand();
        t = AF(d, u16, 0xE) - 0x140;
        AF(p, s16, 0xE) = t + e % 640;
        if (a1 & 1) {
            AF(p, s16, 6) = r + 0x7A;
            AF(p, s16, 0xA) = AF(d, u16, 0xA) - 0xE0;
        } else {
            AF(p, s16, 6) = r - 0xF8;
            AF(p, s16, 0xA) = AF(d, u16, 0xA) - 0xC0;
        }
        AF(p, s16, 0x36) = AF(d, u16, 0xA) - 0x50;
    }
}

void func_sc01_077_8017EC40(u8 *arg0) {
    D_sc01_077_8018A7B8[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017EC7C(u8 *o) {
    V3 v;
    WMtx m;
    s32 r;

    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = 0x10000;
    AF(o, s32, 0x18) = 0;
    r = rand();
    m = D_800AE620;
    RotMatrixY(r & 0xFFF, &m);
    v.x = 0x4000;
    v.z = 0;
    v.y = 0;
    ApplyMatrixLV(&m, &v, &v);
    AF(o, s32, 0x2C) = v.x;
    AF(o, s32, 0x30) = v.z;
    AF(o, s16, 0x34) = 0;
}

void func_sc01_077_8017ED4C(u8 *arg0) {
    D_sc01_077_8018A7F0[AF(arg0, u16, 2)]();
}

s32 func_sc01_077_8017ED88(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x14) = (s32) (rand(arg0) + 0xC000);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    temp_v0 = ((rand() & 0x3FFF) * 2) - 0x4000;
    AF(arg0, s32, 0x18) = temp_v0;
    return temp_v0;
}

void func_sc01_077_8017EDE4(u8 *arg0) {
    D_sc01_077_8018A7F8[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017EE20(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    func_8012AD50((s32) arg0);
}

void func_sc01_077_8017EE44(u8 *o) {
    s32 r;

    if ((AF(o, s32, 0x1C) & 0xF) == 0) {
        func_sc01_077_8017EB2C(rand(), AF(o, s32, 0x1C) & 1);
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x30;
        r = rand();
        func_sc01_077_8017EB2C(r, rand());
    }
}

void func_sc01_077_8017EEC0(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) (((rand((s32) arg0) & 3) * 0xC) + &D_sc01_077_8018A7C0), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    func_sc01_077_8017EC7C((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_077_8017EF50(u8 *o) {
    func_8012931C();
    AF(o, s32, 0x10) += AF(o, s32, 0x2C);
    AF(o, s32, 0x18) += AF(o, s32, 0x30);
    AF(o, u16, 0x34)++;
    AF(o, s32, 0x8) += 0x10000;
    if (AF(o, s16, 0xA) > AF(o, s16, 0x36)) {
        func_801292C8((s32)o);
    } else if (AF(o, s16, 0x34) == 8) {
        AF(o, s32, 0x2C) = -AF(o, s32, 0x2C);
        AF(o, s32, 0x30) = -AF(o, s32, 0x30);
        AF(o, s32, 0x14) = -AF(o, s32, 0x14);
    } else if (AF(o, s16, 0x34) == 0x10) {
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x14) = -AF(o, s32, 0x14);
    }
}

void func_sc01_077_8017F024(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) (((rand((s32) arg0) & 3) * 0xC) + &D_sc01_077_8018A7C0), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    func_sc01_077_8017ED88((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_077_8017F0B4(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x200);
    func_8012931C();
    if (AF(arg0, s16, 0xA) > AF(arg0, s16, 0x36)) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_077_8017F114(void) {
    s32 v;
    s32 i;
    s32 y;
    SV8 *p;

    v = 0;
    if (D_800B99DA & 4) {
        return;
    }
    y = D_80126B66;
    p = D_sc01_077_8018A858;
    for (i = 0; i < 2; i++, p++) {
        if (y < p->x) {
            continue;
        }
        if (y < p->y) {
            v = ((y - p->x) * 127) / (p->y - p->x);
            break;
        }
        if (y < p->z) {
            v = 0x7F;
            break;
        }
        if (y < p->pad) {
            v = ((p->pad - y) * 127) / (p->pad - p->z);
            break;
        }
    }
    if (v <= 0) {
        func_8002D4C8(4, 0x499);
    } else {
        if (v >= 0x80) {
            v = 0x7F;
        }
        func_8002D4C8(0x499, (u16)(v | 0x1000));
    }
}

void func_sc01_077_8017F240(void) {
    s32 *p = &D_801270D0;
    if (*p == 0) {
        func_8012C51C(&D_sc01_077_8018A868, 0);
        *p = 1;
    }
}

void func_sc01_077_8017F290(void) {
    s32 *st = &D_801270CC;

    switch (*st) {
    case 0:
        if (D_80126B66 < 0x600) {
            break;
        }
        if ((D_80078EC1 & 0x7F) == 8) {
            func_8016EDEC(func_sc01_077_8017E1D4, 0x1000000);
            *st = 2;
        } else {
            func_8016EDEC(func_sc01_077_8017E1D4, 0x1000000);
            *st = 1;
        }
        break;
    case 1:
        if ((D_80078EC1 & 0x7F) == 8) {
            func_8016EDEC(func_sc01_077_8017E748, 0x1000000);
            *st = 2;
        }
        break;
    case 2:
        if (D_801270D4 != 0) {
            *st = 3;
            D_801270D4++;
            func_8016EDEC(func_sc01_077_8017E868, 0x1000000);
        }
        break;
    case 3:
        if (D_801270D4 != 0) {
            D_801270D4++;
        }
        break;
    }
}

void func_sc01_077_8017F3E8(u8 *arg0) {
    D_sc01_077_8018A87C[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017F424(u8 *arg0) {
    D_sc01_077_8018A89C[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017F460(u8 *o) {
    s32 d;

    if (AF(o, u8, 0x70) == 4) {
        s32 *st = &D_801270CC;

        if (*st == 0 && (AF(o, u16, 0x5C) & 1)) {
            if (D_801270D4 == 0) {
                D_801270D4 = 1;
            }
            *st = 3;
            AF(o, s16, 0x5C) = 0;
        }
        if (D_801270CC >= 2) {
            if ((AF(o, u16, 0x5C) & 1) && D_801270D4 == 0) {
                D_801270D4 = 1;
            }
            if (D_801270D4 >= D_sc01_077_8018A8FC[(s16)AF(o, u16, 0x70) >> 8]) {
                func_sc01_077_8017F5BC();
                func_8002D4C8(0x495, 0);
            }
        }
    } else {
        d = D_80126B66 - AF(o, s16, 0xE);
        if (d < 0) {
            d = -d;
        }
        if (d < D_sc01_077_8018A8F8) {
            func_sc01_077_8017F5BC();
        }
    }
}

void func_sc01_077_8017F5BC(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s32 r;

    AF(o, s16, 2) = 2;
    AF(o, s16, 0x34) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
    AF(o, s32, 0xE0) = 0x100000;
    AF(o, s32, 0xE4) = 0x40000;
    AF(o, u16, 0x5C) &= 0x73FF;
    AF(o, s32, 0xDC) = 0;
    AF(o, s32, 0x1C) = 0x10;
    if (AF(o, u8, 0x70) != 4) {
        d.x = AF(o, u16, 6) + 0xF0;
        d.y = AF(o, u16, 0xA);
        d.z = AF(o, u16, 0xE) + 0x20;
        d.kind = 0x2F;
        d.unk8 = 0x600;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0;
        r = func_8012C51C(&d, o);
        if (r != 0) {
            AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(o, s32, 0x20), u16, 0x12);
        }
    }
}

s32 func_sc01_077_8017F694(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x400;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xCC00);
    return func_8012C588(0x25, 0);
}

void func_sc01_077_8017F6D8(u8 *arg0) {
    D_sc01_077_8018A904[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017F714(o)
    u8 *o;
{
    s32 v;
    SetScript(o, &D_sc01_077_80186E48);
    AF(o, s16, 2) = 2;
    AF(o, s16, 0x34) = 0;
    func_8012B23C(o);
    AF(o, s32, 0x44) = 0;
    AF(o, s32, 0x48) = 0;
    v = D_sc01_077_8018A928;
    AF(o, s16, 0x5C) = 0;
    AF(o, s32, 0x1C) = 0x100;
    AF(o, s16, 0x84) = 0;
    AF(o, s32, 0x4C) = -v;
}

void func_sc01_077_8017F780(u8 *arg0) {
    D_sc01_077_8018A934[AF(arg0, u16, 2)]();
    func_8012B4B8((s32) arg0);
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

s32 func_sc01_077_8017F7E8(u8 *o) {
    s32 t = AF(o, s16, 0xFC) & (D_sc01_077_8018A9D2 - 1);
    s32 amp = D_sc01_077_8018A9D0;
    return (((rcos(0x2000 / D_sc01_077_8018A9D2 * t) / 2 + rcos(0x4000 / D_sc01_077_8018A9D2 * t) * 3 / 8 - 0x800) < 0 ? -(rcos(0x2000 / D_sc01_077_8018A9D2 * t) / 2 + rcos(0x4000 / D_sc01_077_8018A9D2 * t) * 3 / 8 - 0x800) : (rcos(0x2000 / D_sc01_077_8018A9D2 * t) / 2 + rcos(0x4000 / D_sc01_077_8018A9D2 * t) * 3 / 8 - 0x800)) * amp >> 12) + 8;
}

void func_sc01_077_8017FAAC(u8 *o) {
    V3 p;
    s32 v;
    s32 w;
    s32 i;

    if (!(AF(o, u16, 0xFC) & 1)) {
        AF(o, s16, 0x50) = (rand() & 0xF) - 7;
        AF(o, s16, 0x52) = (rand() & 0xF) - 7;
        AF(o, s16, 0x54) = (rand() & 0xF) - 7;
    }
    if ((D_80078EC1 & 0x7F) == 5) {
        i = AF(o, u8, 0x70) * 4;
        p.x = D_80126B5C;
        p.y = D_80126B60;
        p.z = D_80126B64 + AF(D_sc01_077_8018A9B2, s16, i);
        ((s16 *)&p.x)[1] += AF(D_sc01_077_8018A9B0, s16, i);
        ((s16 *)&p.z)[1] += AF(D_sc01_077_8018A9B2, s16, i);
        ((s16 *)&p.y)[1] -= 0x40;
    } else {
        ((s16 *)&p.x)[1] = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 0);
        ((s16 *)&p.y)[1] = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 2);
        ((s16 *)&p.z)[1] = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 4);
    }
    if (func_8012BC60(o + 4, &p) > 0x400) {
        func_8012B77C(&v, o + 4, &p);
        w = v;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), w >> 16, 0x17);
        func_8012B2CC(o);
    } else {
        if (++AF(o, u8, 0x100) >= 2) {
            AF(o, u8, 0x100) = 0;
        }
    }
    func_8012B14C(o, &D_sc01_077_8018A9D4);
    AF(o, u16, 0xFC)++;
    func_sc01_077_8017FD14(o);
    func_8012AD80(o);
    func_8012C0EC(o);
}

void func_sc01_077_8017FD14(u8 *arg0) {
    u8 *polys[4];
    SV8 v;
    s16 xs[5];
    s16 ys[5];
    s32 sxy;
    s32 p;
    s32 flag;
    s32 otz;
    u8 *ot;
    s32 r;
    s32 r2;
    s32 sx;
    s32 sy;
    u8 *prim;
    u8 *poly;
    s32 i;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    otz = RotTransPers(&v, &sxy, &p, &flag);
    if (otz > 0 && flag >= 0) {
        otz *= 4;
        ot = *(u8 **)(D_800A651C + D_800B9A02 * 0x14) + otz;
        r = func_sc01_077_8017F7E8(arg0) * (D_80126950 + 500) / otz;
        sx = ((u16 *)&sxy)[0];
        sy = ((u16 *)&sxy)[1];
        r2 = (r * 179) >> 8;
        xs[0] = sx - r;
        xs[1] = sx - r2;
        xs[2] = sx;
        xs[3] = sx + r2;
        xs[4] = sx + r;
        ys[0] = sy - r;
        ys[1] = sy - r2;
        ys[2] = sy;
        ys[3] = sy + r2;
        ys[4] = sy + r;
        prim = AllocPrim(0x9C);
        SetDrawMode(prim, 0, 0, (u16)GetTPage(0, 1, 0, 0), 0);
        polys[0] = prim + 0xC;
        polys[1] = prim + 0x30;
        polys[2] = prim + 0x54;
        polys[3] = prim + 0x78;
        poly = prim + 0xC;
        for (i = 0; i < 4; i++) {
            AF(poly, u32, 4) = D_sc01_077_8018A9E0[D_sc01_077_8018AA0C[i][0]];
            AF(poly, u32, 0xC) = D_sc01_077_8018A9E0[D_sc01_077_8018AA0C[i][1]];
            AF(poly, u32, 0x14) = D_sc01_077_8018A9E0[D_sc01_077_8018AA0C[i][2]];
            AF(poly, u32, 0x1C) = D_sc01_077_8018A9E0[D_sc01_077_8018AA0C[i][3]];
            AF(poly, u8, 3) = 8;
            AF(poly, u8, 7) = 0x3A;
            AF(poly, s16, 8) = xs[D_sc01_077_8018A9EC[i][0]];
            AF(poly, s16, 0x10) = xs[D_sc01_077_8018A9EC[i][1]];
            AF(poly, s16, 0x18) = xs[D_sc01_077_8018A9EC[i][2]];
            AF(poly, s16, 0x20) = xs[D_sc01_077_8018A9EC[i][3]];
            AF(poly, s16, 0xA) = ys[D_sc01_077_8018A9FC[i][0]];
            AF(poly, s16, 0x12) = ys[D_sc01_077_8018A9FC[i][1]];
            AF(poly, s16, 0x1A) = ys[D_sc01_077_8018A9FC[i][2]];
            AF(poly, s16, 0x22) = ys[D_sc01_077_8018A9FC[i][3]];
            AddPrim(ot, poly);
            poly += 0x24;
        }
        AddPrim(ot, prim);
    }
}

void func_sc01_077_801800F8(u8 *o) {
    s32 t;

    if ((AF(o, s32, 0x20) = t = func_8012C1B8()) == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc01_077_801D20B4);
    SetScript(o, &D_sc01_077_8018A800);
    AF(o, u8, 0x100) = AF(o, u8, 0x70) & 1;
    AF(o, s16, 0xFE) = rand() & 0x3F;
    AF(o, s16, 0xFC) = rand() & 0x3F;
    AF(o, s16, 6) = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 0);
    AF(o, s16, 0xA) = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 2);
    AF(o, s16, 0xE) = AF(D_sc01_077_8018A940, s16, AF(o, u8, 0x100) * 8 + ((s16)AF(o, u16, 0x70) >> 8) * 16 + 4);
    AF(o, s16, 2) = 1;
    AF(o, s32, 0x1C) = 0x1E;
}

void func_sc01_077_8018021C(u8 *arg0) {
    D_sc01_077_8018AA1C[AF(arg0, u16, 2)]();
}

void func_sc01_077_80180258(u8 *arg0) {
    D_sc01_077_8018AA24[AF(arg0, u16, 2)]();
}

void func_sc01_077_80180294(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_8002D4C8(0x401, 0);
}

s32 func_sc01_077_801802CC(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) != 0) && (func_8012BEE8((s32) arg0, arg1, arg2) != 0)) {
        func_8002D4C8(0xD, 0x401);
    }
    func_sc01_077_8017F114();
    func_sc01_077_8017F290();
}

void func_sc01_077_8018031C(s32 arg0) {
    u16 temp_a1;

    if (func_8012CE2C() == 0) {
        func_8012CBCC(arg0);
    }
    temp_a1 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_a1;
    if ((AF(arg0, s16, 0xDC) != AF(arg0, s16, 6)) || (AF(arg0, s16, 0xDE) != AF(arg0, s16, 0xE))) {
        if ((s16) temp_a1 >= 0x10) {
            func_8002D4C8(0x485, 0);
            AF(arg0, u16, 0x84) = 0U;
        }
        AF(arg0, s16, 0xDC) = (s16) (u16) AF(arg0, s16, 6);
        AF(arg0, s16, 0xDE) = (s16) (u16) AF(arg0, s16, 0xE);
    }
}

void func_sc01_077_801803B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801D0B94);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xDC, 0xB8);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc01_077_8018A884 | 0x40000000);
    AF(arg0, u8, 0x75) = 0;
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xD010);
    func_8012B200(arg0);
    SetScript(arg0, (s32) &D_sc01_077_80186E48);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x84) = 0x10;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
}

void func_sc01_077_8018047C(u8 *o) {
    s32 t;
    u16 st;

    if (AF(o, u8, 0x70) != 4 && func_8012BEE8() == 0) {
        return;
    }
    t = AF(o, s32, 0xE0) + AF(o, s32, 0xE4);
    AF(o, s32, 0xDC) = AF(o, s32, 0xDC) + t;
    AF(o, s32, 0xE0) = t;
    AF(AF(o, u8 *, 0x20), u16, 0x10) = AF(o, u16, 0xDE);
    if (AF(o, s16, 0xDE) < 0x400) {
        return;
    }
    if (AF(o, u16, 0x34) == 0 && func_8012D714(o, 2) != 0) {
        D_80126B96 = 0x4002;
    }
    st = AF(o, u16, 0x34);
    if (st >= 2) {
        func_sc01_077_8017F694((s32)o);
        return;
    }
    if (st == 0) {
        func_8002D4C8(0x487, 0);
    }
    AF(o, s32, 0xDC) = 0x4000000;
    AF(o, u16, 0x5C) |= 0xCC00;
    AF(o, s32, 0xE0) = -(AF(o, s32, 0xE0) >> 1);
    AF(o, u16, 0x34)++;
}

void func_sc01_077_80180588(void) {
}

void func_sc01_077_80180590(u8 *o) {
    s32 w;

    w = func_8012C1B8(o);
    AF(o, s32, 0x20) = w;
    if (w == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(w, (AF(o, u8, 0x70) == 4) ? &D_sc01_077_801D1CBC : &D_sc01_077_801D15C4);
    if (AF(o, u8, 0x70) != 4) {
        AF(o, s32, 0x58) = (s32)&D_sc01_077_8018A8A4 | 0x40000000;
        func_8001D0E8(AF(o, s32, 0x20), 0x168, 0x140);
    } else {
        AF(o, s32, 0x58) = (s32)&D_sc01_077_8018A8B4 | 0x40000000;
        func_8001D0E8(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    }
    AF(o, s32, 0x78) = (s32)&D_sc01_077_8018A8C4;
    AF(o, u8, 0x75) = 4;
    SetScript(o, &D_sc01_077_80186E48);
    AF(o, s16, 2) = 1;
    if (AF(o, u8, 0x70) == 4) {
        AF(o, u16, 0x5C) |= 0x8000;
    } else {
        AF(o, u16, 0x5C) = 0xC800;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
    func_8012B2CC(o);
}

void func_sc01_077_801806A8(void) {
    if (D_801270C8 == 1) {
        func_sc01_077_8017F714();
    }
}

void func_sc01_077_801806D8(u8 *o) {
    s32 t;
    s32 m;
    u8 *p;

    func_8012CC1C(o, &D_sc01_077_8018A92C);
    t = -D_sc01_077_8018A924;
    if (AF(o, s32, 0x18) < t) {
        AF(o, s32, 0x18) = t;
    }
    if (AF(o, s32, 0x14) > 0x600000) {
        AF(o, s32, 0x14) = 0x600000;
    }
    p = AF(o, u8 *, 0x20);
    m = AF(o, s16, 0x1A);
    AF(p, u16, 0x10) -= m << 4;
    if (func_8012D714(o, 1) != 0) {
        *(s16 *)&D_80126B96 = 2;
        D_80126B96 |= 0x4000;
    }
    if (++AF(o, s16, 0x84) >= 0x10) {
        func_8002D4C8(0x48A, 0);
        AF(o, s16, 0x84) = 0;
    }
}

void func_sc01_077_801807B8(u8 *o) {
    s32 r;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, &D_sc01_077_801D100C);
    func_8001D0E8(AF(o, s32, 0x20), 0x140, 0xF0);
    AF(o, s32, 0x58) = (s32) &D_sc01_077_8018A914 | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    func_8012B030(o);
    AF(o, s32, 8) += -0x200000;
    AF(o, s32, 0xC) += -0x200000;
    SetScript(o, &D_sc01_077_80186E48);
    AF(o, s16, 2) = 1;
    AF(AF(o, s32, 0x20), s16, 0x10) = 0;
    AF(AF(o, s32, 0x20), s16, 0x12) = 0;
    AF(AF(o, s32, 0x20), s16, 0x14) = 0;
    D_801270C8 = 0;
}

void func_sc01_077_80180898(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            func_8002D4C8(0xD, 0x401);
        }
    }
}

void func_sc01_077_801808DC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xFC) = 0x96;
    func_8002D4C8(0x401, 0);
}

void func_sc01_077_80180910(s32 arg0) {
    func_sc01_077_80180930(arg0);
}

void func_sc01_077_80180930(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc01_077_801DA9E8[i] = D_sc01_077_8018AA2C[((D_sc01_077_801DA9AC >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_sc01_077_8018AA4C);
    D_sc01_077_801DA9AC += 0x100;
}

s32 func_sc01_077_801809BC(u8 *p, u8 *o) {
    SV4 a;
    SV4 b;
    UXY w;
    UXY x;

    if (func_8012BC60(p + 4, o + 4) < 0x1000) {
        func_8012B0B4(&w, (ratan2(AF(p, s16, 0xE) - AF(o, s16, 0xE), AF(o, s16, 6) - AF(p, s16, 6)) - 0x400) & 0xFFF, 0x41);
        b.x = AF(o, u16, 6);
        b.y = AF(o, u16, 0xA);
        b.z = AF(o, u16, 0xE);
        x = w;
        b.x += x.s.x;
        b.z += x.s.y;
        a.x = AF(p, u16, 0x3A);
        a.y = AF(p, u16, 0x3E);
        a.z = AF(p, u16, 0x42);
        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(p, u16, 6) = b.x;
            AF(p, u16, 0xA) = b.y;
            AF(p, u16, 0xE) = b.z;
            return 1;
        }
        func_8012ADE4(p);
        return 1;
    }
    return 0;
}

void func_sc01_077_80180AD4(u8 *arg0) {
    u8 *p;
    u8 *end;
    s32 key;

    key = *(u16 *)arg0;
    for (p = (u8 *)&D_801202A0, end = p + 0x6480; p != end; p += 0x10C) {
        if (p != arg0 && *(u16 *)p == key && func_sc01_077_801809BC(arg0, p)) {
            break;
        }
    }
    func_8012AE00(p);
}

void func_sc01_077_80180B64(u8 *o) {
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
    AF(o, s16, 0xE0) = 0;
    AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 3: case 7:
        if (AF(o, u16, 0xFE) & 2) {
            AF(o, s16, 0xE2) = 0;
        }
        break;
    case 5:
        func_sc01_077_80182968(o);
        goto tail;
    case 4: case 6:
        break;
    }
    AF(o, s16, 0xE4) = 0x1E;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    func_8012B2CC(o);
    func_8012B23C(o);
    func_8012B14C(o, &D_sc01_077_8018AA8C);
    SetScript(o, &D_sc01_077_801AFF18);
tail:
    AF(o, s16, 0x34) = 3;
    AF(o, u16, 0xE2) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x800) & 0xFFF;
    AF(o, s16, 0xE0) = 0;
    AF(o, s16, 0xE4) = (rand() & 0x1F) + 0x1E;
    AF(o, s32, 0x1C) = 0x16;
}

void func_sc01_077_80180C90(u8 *o) {
    s32 r;
    s32 a;
    if (AF(o, s16, 0x6) > 0x200) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(o);
            goto tail1;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc01_077_8018AA8C);
        SetScript(o, &D_sc01_077_801AFF18);
    tail1:
        AF(o, s16, 0x34) = 4;
        a = (ratan2(AF(o, s16, 0xE) - D_sc01_077_8018AAD0, D_sc01_077_8018AACC - AF(o, s16, 6)) - 0x400) & 0xFFF;
    } else {
        r = (rand() & 0x7FF) - 0x400;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(o);
            goto tail2;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc01_077_8018AA8C);
        SetScript(o, &D_sc01_077_801AFF18);
    tail2:
        AF(o, s16, 0x34) = 3;
        a = ((ratan2(AF(o, s16, 0xE) - D_sc01_077_8018AAD0, D_sc01_077_8018AACC - AF(o, s16, 6)) - 0x400) & 0xFFF) + r;
    }
    AF(o, s16, 0xE2) = a;
    AF(o, s16, 0xE0) = 0;
    AF(o, s16, 0xE4) = (rand() & 0x1F) + 0x1E;
    AF(o, s32, 0x1C) = 0x10;
}

s32 func_sc01_077_80180F10(u8 *p, s32 k) {
    s32 lim[2] = { 0x3C100, 0x51000 };
    s32 d;
    if (((s16) AF(p, u16, 0x70) >> 8) != 4) {
        return 0;
    }
    d = func_80013478(p + 4, &D_sc01_077_8018AACC);
    if (k == 1 && (u32) (((ratan2(AF(p, s16, 0xE) - D_sc01_077_8018AAD0, D_sc01_077_8018AACC - AF(p, s16, 6)) - 0x400) & 0xFFF) - 0x381) < 0xFF &&
        D_80126B5E >= 0x2E0 && d > 0x3C100) {
        return 1;
    }
    if (d > lim[k] && d > AF(p, s32, 0xE8)) {
        AF(p, s32, 0xE8) = d;
        return 1;
    }
    AF(p, s32, 0xE8) = d;
    return 0;
}

void func_sc01_077_8018103C(u8 *o) {
    u8 *p;
    u8 *end;
    s32 key;
    s32 v;
    s32 f;

    AF(o, s16, 0xE0)++;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc01_077_80180F10(o, 0)) {
            func_sc01_077_80180C90(o);
            break;
        }
        if (AF(o, s16, 0xE0) < 9) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xE2), 6);
        } else {
            func_8012B14C(o, (AF(o, u16, 0xFE) & 2) ? &D_sc01_077_8018AA98 : &D_sc01_077_8018AA8C);
        }
        v = D_sc01_077_801DA7C0 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            f = 1;
        } else {
            f = 0;
        }
        if (f) {
            func_sc01_077_80180B64(o);
            break;
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc01_077_801809BC(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (AF(o, s16, 0xE0) >= 0x3C) {
            AF(o, s16, 0xE0) = 0;
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            } else {
                AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12) + (rand() & 0x800) - 0x400;
            }
        }
        if (--AF(o, s16, 0xE4) > 0) {
            break;
        }
        if (AF(o, u16, 0xFE) & 2) {
            break;
        }
        if (func_8012BCCC(o) > 0x10000) {
            break;
        }
        if (((s16)AF(o, u16, 0x70) >> 8) == 4 && D_801270D4 != 0) {
            break;
        }
        if (AF(o, u16, 0xFE) & 1) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_sc01_077_801AFFC0);
            AF(o, s16, 0xFC) = 0;
            break;
        }
        SetScript(o, &D_sc01_077_801B0048);
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 1;
        AF(o, s32, 0x1C) = 0x19;
        AF(o, u16, 0xFE) |= 1;
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            func_8002D4C8(0x6A9, 0);
            func_80142414(o, -0x78);
        }
        if (func_8012BEE8(o)) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0xE0) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_sc01_077_801AFFC0);
            AF(o, s16, 0xFC) = 0;
        }
        break;
    case 2:
        if (func_sc01_077_80180F10(o, 1)) {
            func_sc01_077_80180C90(o);
            break;
        }
        v = D_sc01_077_801DA7C0 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            f = 1;
        } else {
            f = 0;
        }
        if (f) {
            func_sc01_077_80180B64(o);
            break;
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc01_077_801809BC(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (((s16)AF(o, u16, 0x70) >> 8) == 4 && D_80126B5E >= 0x220) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12),
                (ratan2(AF(o, s16, 0xE) - D_sc01_077_8018AAE8, D_sc01_077_8018AAE4 - AF(o, s16, 6)) - 0x400) & 0xFFF, 6);
        } else if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
        }
        func_8012B14C(o, &D_sc01_077_8018AA80);
        if (--AF(o, s16, 0xFC) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFC) = 8;
        }
        if (AF(o, s16, 0xE0) >= 0x5A) {
            AF(o, s16, 0xE0) = 0;
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc01_077_80182968(o);
                goto tail2;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc01_077_8018AA8C);
            SetScript(o, &D_sc01_077_801AFF18);
        }
    tail2:
        if (func_8012BEE8(o)) {
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_sc01_077_801AFFC0);
            AF(o, s16, 0xFC) = 0;
            break;
        }
        if (((s16)AF(o, u16, 0x70) >> 8) == 1) {
            if (func_8012BD3C(o, 0x200, 0x3100)) {
                func_sc01_077_80181B9C(o);
            }
        } else {
            if (func_8012BD3C(o, 0x400, 0x1000)) {
                func_sc01_077_80181B58(o);
            }
        }
        break;
    case 3:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xE2), 4);
        if (func_8012BEE8(o)) {
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc01_077_80182968(o);
                goto tail3;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc01_077_8018AA8C);
            SetScript(o, &D_sc01_077_801AFF18);
        }
    tail3:
        break;
    case 4:
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xE2);
        func_8012B2CC(o);
        func_8012B178(o, 0xFFF80000);
        v = D_sc01_077_801DA7C0 = func_8012CBA4(o);
        if (v == 0 || (v & 0x4000)) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
        }
        for (p = (u8 *)&D_801202A0, end = p + 0x6480, key = AF(o, u16, 0); p != end; p += 0x10C) {
            if (p != o && AF(p, u16, 0) == key && func_sc01_077_801809BC(o, p)) {
                break;
            }
        }
        func_8012AE00(p);
        if (AF(o, s16, 6) < 0x1F8) {
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc01_077_80182968(o);
                goto tail4;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc01_077_8018AA8C);
            SetScript(o, &D_sc01_077_801AFF18);
        tail4:
            AF(o, s16, 0xE4) = rand() & 0x1F;
            AF(o, s32, 0x1C) = rand() & 0x1F;
        }
        break;
    }
}

void func_sc01_077_80181948(u8 *o) {
    s32 d;
    s32 v;
    switch (AF(o, u16, 0x34)) {
    case 0:
        d = D_80126B66 - AF(o, s16, 0xE);
        if (d < 0) {
            d = -d;
        }
        if (d < 0x171) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc01_077_801B0AE0);
            AF(o, s32, 0x1C) = 0x1E;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) == 0x14) {
            D_801270C8 = 1;
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc01_077_801AFFC0);
            AF(o, s32, 0x1C) = 0;
        }
        break;
    case 2:
        AF(o, s32, 0x1C)++;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x800, 4);
        if (AF(o, s32, 0x1C) >= 8) {
            func_8012B14C(o, &D_sc01_077_8018AAB0);
            v = D_sc01_077_801DA7C0 = func_8012CBA4(o);
            if (v == 0 || (v & 0x4000)) {
                AF(o, s32, 0x4) = AF(o, s32, 0x38);
                AF(o, s32, 0x8) = AF(o, s32, 0x3C);
                AF(o, s32, 0xC) = AF(o, s32, 0x40);
            }
        }
        if (++AF(o, s32, 0x1C) >= 0x100) {
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 5: case 6:
                func_8012C098(o);
                break;
            case 3: case 7:
                func_8012C218(o);
                break;
            case 4:
                D_801270CC--;
                func_8012C218(o);
                break;
            }
        }
        break;
    }
}

void func_sc01_077_80181B58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc01_077_801B0118);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc01_077_80181B9C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 3;
    SetScript(arg0, (s32) &D_sc01_077_801B0D50);
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc01_077_80181BE4(s32 arg0) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s16 pos[4];
    s32 r;
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            func_8012D5E4(arg0, &D_sc01_077_8018AAD4, &D_sc01_077_8018AAD4 + 8, 0xB);
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc01_077_8018AAD4, &D_sc01_077_8018AAD4 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) >= 0x19) {
            AF(AF(arg0, s32, 0x20), u16, 0x12) += func_8012B8E4(arg0, 4);
        }
        if (AF(arg0, s32, 0x1C) == 0xC) {
            FaceHelper(arg0, &D_sc01_077_8018AA6C, pos);
            d.x = pos[0];
            d.y = pos[1];
            d.z = pos[2];
            d.kind = 0x20;
            d.unk8 = 2;
            d.flags = 0;
            d.unk10 = 0;
            d.unkE = 0;
            d.unkC = AF(AF(arg0, s32, 0x20), u16, 0x12);
            r = func_8012C51C(&d, arg0);
            if (r != 0) {
                AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(arg0, s32, 0x20), u16, 0x12);
                func_8012B2CC(r);
            }
        } else if (AF(arg0, s32, 0x1C) == 0xF) {
            func_sc01_077_80184ED8(arg0, &D_sc01_077_8018AA6C);
        }
        break;
    }
    if (func_8012BEE8(arg0) == 0) {
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        v = AF(arg0, s16, 0x70) >> 8;
        if (v == 0 || v == 3 || v == 4) {
            if (func_8012BCCC(arg0) <= 0x4000) {
                AF(arg0, s16, 2) = 2;
                AF(arg0, s16, 0x34) = 1;
                SetScript(arg0, &D_sc01_077_801AFD28);
                AF(arg0, s32, 0x1C) = 10;
                return;
            }
        }
        goto def;
    case 1:
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, &D_sc01_077_801B01E0);
        AF(arg0, s32, 0x1C) = 0x18;
        return;
    case 3:
        if (++AF(arg0, u8, 0x102) >= 3) {
            AF(arg0, u8, 0x102) = 0;
            AF(arg0, s16, 0x34) = AF(arg0, u16, 0x34) + 1;
            SetScript(arg0, &D_sc01_077_801B0E48);
        } else {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc01_077_801B0D50);
        }
        AF(arg0, s32, 0x1C) = 0x1E;
        return;
    case 4:
        if (func_8012BEE8(arg0) != 0 && func_8012BCCC(arg0) <= 0x40000) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc01_077_801B0D50);
            AF(arg0, s32, 0x1C) = 0x1E;
        }
    case 2:
    default:
    def:
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s32, 0x1C) = 0x1E;
        SetScript(arg0, &D_sc01_077_801AFFC0);
        AF(arg0, s16, 0xFC) = 0;
        break;
    }
}

void func_sc01_077_80181F08(u8 *o) {
    W16 t = D_sc01_077_801D9204;
    if (AF(o, u8, 0x5E) == 5) {
        StartRumbleScript(&D_80062BDC);
    }
    if (AF(o, u16, 0x5E) == 0x1F) {
        func_sc01_077_8018301C(o);
        return;
    }
    AF(o, u8, 0xC1) = 0;
    func_8012E9C0(o);
    AF(o, u16, 0x76) -= AF(o, u16, 0x60);
    AF(o, u16, 0x5C) &= 0xFFFE;
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    func_8012B2CC(o);
    func_8012B23C(o);
    AF(o, s16, 0x2) = 3;
    func_80143B6C(o, 0);
    switch (AF(o, u8, 0x5E)) {
    case 13:
        func_sc01_077_80182254(o);
        break;
    case 14:
        func_sc01_077_80182268(o);
        break;
    case 10:
        func_sc01_077_801822FC(o);
        break;
    case 9:
        func_sc01_077_80182338(o);
        break;
    case 17:
        func_sc01_077_801823A0(o);
        break;
    case 33:
        func_sc01_077_801822E4(o);
        break;
    case 15:
        if (AF(o, s16, 0x76) > 0) {
            func_sc01_077_801827A4(o);
        } else {
            func_sc01_077_80182420(o);
        }
        break;
    default:
        if (AF(o, s16, 0x76) > 0) {
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = 0x10;
            SetScript(o, &D_sc01_077_801B02A8);
        } else {
            func_sc01_077_80182420(o);
        }
        break;
    }
}

void func_sc01_077_801820DC(u8 *o) {
    s32 t;
    u8 unused[8];
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012CBCC(o);
        if (func_8012BEE8(o) == 0) {
            break;
        }
        AF(o, s16, 0x5E) = 0;
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(o);
            return;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc01_077_8018AA8C);
        SetScript(o, &D_sc01_077_801AFF18);
        break;
    case 1:
        func_8012CBF4(o);
        t = AF(o, s32, 0x1C);
        if (t == 0x1E || t == 0xD) {
            func_80143B6C(o, 0);
        }
        if (func_8012BEE8(o) != 0) {
            func_sc01_077_8018294C(o);
        }
        break;
    }
}

void func_sc01_077_80182254(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc01_077_80182268(s32 o) {
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 5: case 6:
        func_8012C098(o);
        break;
    case 3: case 7:
        func_8012C218(o);
        break;
    case 4:
        D_801270CC--;
        func_8012C218(o);
        break;
    }
}

s32 func_sc01_077_801822E4(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
    return 6;
}

void func_sc01_077_801822FC(s32 arg0) {
    u16 temp_a1;

    AF(arg0, s16, 2) = 5;
    temp_a1 = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    if (((s32) (temp_a1 << 0x10) >> 0x18) == 5) {
        AF(arg0, u16, 0x70) = (u16) ((temp_a1 & 0xFF) | 0x100);
    }
}

s32 func_sc01_077_80182338(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    temp_v0 = func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return temp_v0;
}

s32 func_sc01_077_801823A0(s32 arg0) {
    AF(arg0, u8, 0xC1) = 7;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return func_8012B14C(arg0, (s32) &D_sc01_077_8018AAF8);
}

s32 func_sc01_077_80182420(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFDC0000);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AB04);
    func_8012B2CC(arg0);
    return func_8002D4C8(0x6AA, 0);
}

void func_sc01_077_801824D0(u8 *o) {
    s32 ret;
    s32 cnt;
    func_8012DBD0(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    switch (AF(o, u8, 0xC2)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) > 0x28) {
            func_sc01_077_8018294C(o);
            break;
        }
        if (AF(o, s32, 0x14) <= 0) {
            ret = func_8012CBF4(o);
        } else {
            ret = func_8012CC64(o, &D_sc01_077_8018AB10);
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 2) {
                func_sc01_077_80182FD0(o);
                break;
            }
            AF(o, u8, 0xC2) = 1;
            func_80143B6C(o, 1);
            AF(o, s32, 0x14) = 0xFFF30000;
            AF(o, s32, 0x1C) = 0;
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) > 0x28) {
            func_sc01_077_8018294C(o);
            break;
        }
        cnt = AF(o, s32, 0x14);
        ret = func_8012CC64(o, &D_sc01_077_8018AB10);
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 2) {
                func_sc01_077_80182FD0(o);
                break;
            }
            func_80143B6C(o, 1);
            AF(o, s32, 0x14) = cnt;
            AF(o, u8, 0xC2) = 2;
            AF(o, s32, 0x1C) = 0;
            AF(AF(o, u8 *, 0x20), u16, 0x10) = 0;
        }
        break;
    case 2:
        AF(o, s32, 0x10) = AF(o, s32, 0x10) * 15 / 16;
        AF(o, s32, 0x18) = AF(o, s32, 0x18) * 15 / 16;
        if (AF(o, u8, 0xC3) & 1) {
            ret = func_8012CBA4(o);
            if (!(ret & 0x2000)) {
                func_sc01_077_8018294C(o);
                break;
            }
            if ((ret & 0xFF) == 2) {
                func_sc01_077_80182FD0(o);
                break;
            }
        } else {
            ret = func_8012CBF4(o);
            if (ret & 0x2000) {
                AF(o, u8, 0xC3) |= 1;
            }
        }
        if ((AF(o, s32, 0x1C) & 3) == 3) {
            func_80143B6C(o, 1);
        }
        if (++AF(o, s32, 0x1C) > 0x10) {
            if (!(ret & 0x2000)) {
                func_sc01_077_8018294C(o);
            } else if ((ret & 0xFF) == 2) {
                func_sc01_077_80182FD0(o);
            } else if (AF(o, s16, 0x76) > 0) {
                func_sc01_077_80182E30(o);
            } else {
                func_sc01_077_8018294C(o);
            }
        }
        break;
    }
}

void func_sc01_077_801827A4(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    SetScript(arg0, (s32) &D_sc01_077_801B0908);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

void func_sc01_077_8018281C(u8 *o) {
    func_8012CBA4(o);
    if ((s16)AF(o, u16, 0x70) >> 8 == 4 && D_801270D4 != 0) {
        return;
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
    AF(o, s16, 0xE0) = 0;
    AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    switch ((s16)AF(o, u16, 0x70) >> 8) {
    case 0: case 1: case 2: case 3: case 7:
        if (AF(o, u16, 0xFE) & 2) {
            AF(o, s16, 0xE2) = 0;
        }
        break;
    case 5:
        func_sc01_077_80182968(o);
        return;
    case 4: case 6:
        break;
    }
    AF(o, s16, 0xE4) = 0x1E;
    AF(o, s16, 0x5E) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    func_8012B2CC(o);
    func_8012B23C(o);
    func_8012B14C(o, &D_sc01_077_8018AA8C);
    SetScript(o, &D_sc01_077_801AFF18);
}

void func_sc01_077_8018294C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc01_077_80182968(s32 arg0) {
    func_sc01_077_80182988(arg0);
}

void func_sc01_077_80182988(s32 arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 1;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc01_077_801B0D50);
    AF(arg0, u8, 0x102) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
}

s32 func_sc01_077_801829E0(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 2;
    temp_v0 = SetScript(arg0, (s32) &D_sc01_077_801B0E48);
    AF(arg0, u8, 0x102) = 0;
    return temp_v0;
}

void func_sc01_077_80182A24(u8 *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s16 pos[4];
    s32 r;
    u8 *q;
    u16 m;
    s32 f;
    s32 near;
    s32 dz;
    s32 c;
    m = AF(o, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (!f) {
        near = 0;
    } else {
        q = func_8012E544(0x298);
        if (q != 0) {
            if (AF(q, u16, 0x2) != 2) {
                near = 0;
            } else {
                dz = AF(q, s16, 0xE) - AF(o, s16, 0xE);
                if (dz < 0) dz = -dz;
                near = dz < 0x20;
            }
        }
    }
    if (near) {
        func_sc01_077_8018301C(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            c = (u8)++AF(o, u8, 0x102);
            if ((rand() & 1) < c) {
                func_sc01_077_80182988(o);
            }
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) == 0xC) {
            FaceHelper(o, &D_sc01_077_8018AA6C, pos);
            d.x = pos[0];
            d.y = pos[1];
            d.z = pos[2];
            d.kind = 0x20;
            d.unk8 = 2;
            d.flags = 0;
            d.unk10 = 0;
            d.unkE = 0;
            d.unkC = AF(AF(o, s32, 0x20), u16, 0x12);
            r = func_8012C51C(&d, o);
            if (r != 0) {
                AF(AF(r, s32, 0x20), u16, 0x12) = AF(AF(o, s32, 0x20), u16, 0x12);
                func_8012B2CC(r);
            }
        } else if (AF(o, s32, 0x1C) == 0xF) {
            func_sc01_077_80184ED8(o, &D_sc01_077_8018AA6C);
        }
        if (func_8012BEE8(o) != 0) {
            if (++AF(o, u8, 0x102) >= 3) {
                func_sc01_077_801829E0(o);
            } else {
                AF(o, s32, 0x1C) = 0x1E;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x2) = 0xB;
            AF(o, s16, 0x34) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            SetScript(o, &D_sc01_077_801AFDD0);
            AF(o, u8, 0x102) = 0;
        }
        break;
    }
}

void func_sc01_077_80182C9C(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_8012B178(o, 0xFFF40000);
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc01_077_8018AB24);
        }
        break;
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 0x34) = 2;
            SetScript(o, &D_sc01_077_801AFFC0);
            AF(o, s32, 0x1C) = 4;
        }
        break;
    case 2:
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x12) -= 0x200;
        if (func_8012BEE8(o) != 0) {
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        func_8012B178(o, 0xFFF40000);
        func_8012AD80(o);
        if (func_8012BEE8(o) == 0) {
            break;
        }
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
        break;
    }
}

void func_sc01_077_80182E30(s32 arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc01_077_801B06E8);
    func_8012B23C(arg0);
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc01_077_80182E7C(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc01_077_801AFD28);
            AF(o, s32, 0x1C) = 0xA;
        }
        break;
    case 1:
        if (func_8012BEE8(o) == 0) {
            break;
        }
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(o, s16, 0xE0) = 0;
        AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(o, u16, 0xFE) & 2) {
                AF(o, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(o);
            return;
        case 4: case 6:
            break;
        }
        AF(o, s16, 0xE4) = 0x1E;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc01_077_8018AA8C);
        SetScript(o, &D_sc01_077_801AFF18);
        break;
    }
}

void func_sc01_077_80182FD0(s32 arg0) {
    func_80130740(arg0, (s32) &D_sc01_077_8018AB8C);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x5C) = 0;
}

s32 func_sc01_077_8018301C(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    return func_8002D4C8(0x436, 0);
}

void func_sc01_077_8018308C(u8 *o) {
    u16 m;
    s32 f;
    u8 *p;
    s32 d;
    s32 near;
    u8 *q;
    u8 *pl;
    pl = D_80126B58;
    m = AF(o, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (!f) {
        near = 0;
    } else {
        p = func_8012E544(0x298);
        if (p != 0) {
            if (AF(p, u16, 2) != 2) {
                near = 0;
            } else {
                d = AF(p, s16, 0xE) - AF(o, s16, 0xE);
                if (d < 0) d = -d;
                near = d < 0x20;
            }
        }
    }
    if (near) {
        AF(o, s16, 2) = 0x10;
        AF(o, s16, 0x34) = 0;
        AF(o, s16, 0x5C) = 0;
        AF(o, s32, 0x1C) = 0;
        SetScript(o, &D_sc01_077_801B09D0);
        q = AF(o, u8 *, 0x20);
        AF(o, s16, 0x98) = 0;
        AF(q, u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
        func_8002D4C8(0x436, 0);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(pl, s16, 0xE) > D_sc01_077_8018AB94) {
            AF(o, s16, 0x34) = 1;
            func_8012B178(o, 0xFFF60000);
        }
        break;
    case 1:
        if (--AF(o, s16, 0xFC) <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFC) = 8;
        }
        func_8012CBA4(o);
        if (AF(o, s16, 0xE) < D_sc01_077_8018AB96 || AF(o, s16, 0xE) - AF(pl, s16, 0xE) < 0x80) {
            AF(o, s16, 0x70) = 0;
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x46;
            AF(o, s16, 0xE0) = 0;
            AF(o, u16, 0xE2) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 3: case 7:
                if (AF(o, u16, 0xFE) & 2) {
                    AF(o, s16, 0xE2) = 0;
                }
                break;
            case 5:
                func_sc01_077_80182968(o);
                return;
            case 4: case 6:
                break;
            }
            AF(o, s16, 0xE4) = 0x1E;
            AF(o, s16, 0x5E) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            func_8012B2CC(o);
            func_8012B23C(o);
            func_8012B14C(o, &D_sc01_077_8018AA8C);
            SetScript(o, &D_sc01_077_801AFF18);
        }
        break;
    }
}

void func_sc01_077_80183324(s32 arg0) {
    s32 idx;
    u8 *p;
    u16 m;
    s32 f;
    s32 pad[4];

    if (func_8012C354(arg0, &D_sc01_077_8018AD90) == 0) {
        return;
    }
    idx = (s16)AF(arg0, u16, 0x70) >> 8;
    func_8001C214(AF(arg0, s32, 0x20), D_sc01_077_8018AD60[idx]);
    p = D_sc01_077_8018ABC0[idx];
    AF(arg0, u8 *, 0x78) = p;
    AF(arg0, u16, 0x76) = *(u16 *)p;
    func_80143970(arg0);
    func_8012B030(arg0);
    AF(arg0, s32, 0x38) = AF(arg0, s32, 0x4);
    AF(arg0, s32, 0x3C) = AF(arg0, s32, 0x8);
    AF(arg0, s32, 0x40) = AF(arg0, s32, 0xC);
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, u8 *, 0xBC) = &D_sc01_077_8018AABC;
    m = AF(arg0, u16, 0x70);
    f = 1;
    if (m != 0x505 && m != 0x506) f = (m & 0xFF00) == 0x700;
    if (f) {
        AF(arg0, s16, 0x86) = 0xB4;
    }
    switch ((s16)AF(arg0, u16, 0x70) >> 8) {
    case 0:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(arg0);
            goto skip0;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_077_8018AA8C);
        SetScript(arg0, &D_sc01_077_801AFF18);
    skip0:
        if (AF(arg0, u16, 0x70) & 0x80) {
            AF(arg0, u16, 0x5C) = 0xAA10;
            AF(arg0, s16, 0x2) = 1;
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 0x1E;
            SetScript(arg0, &D_sc01_077_801AFFC0);
            AF(arg0, s16, 0xFC) = 0;
        }
        break;
    case 1:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(arg0);
            goto skip1;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_077_8018AA8C);
        SetScript(arg0, &D_sc01_077_801AFF18);
    skip1:
        break;
    case 2:
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(arg0);
            goto skip2;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_077_8018AA8C);
        SetScript(arg0, &D_sc01_077_801AFF18);
    skip2:
        break;
    case 3:
        AF(arg0, u16, 0x6) = D_sc01_077_8018ABA8[AF(arg0, u8, 0x70)][0];
        AF(arg0, u16, 0xA) = D_sc01_077_8018ABA8[AF(arg0, u8, 0x70)][1];
        AF(arg0, u16, 0xE) = D_sc01_077_8018ABA8[AF(arg0, u8, 0x70)][2];
        AF(arg0, s16, 0x2) = 9;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        SetScript(arg0, &D_sc01_077_801AFD28);
        break;
    case 4:
        AF(AF(arg0, s32, 0x20), s16, 0x12) = rand() & 0xFFF;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x2) = 1;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x46;
        AF(arg0, s16, 0xE0) = 0;
        AF(arg0, u16, 0xE2) = AF(AF(arg0, s32, 0x20), u16, 0x12);
        switch ((s16)AF(arg0, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 3: case 7:
            if (AF(arg0, u16, 0xFE) & 2) {
                AF(arg0, s16, 0xE2) = 0;
            }
            break;
        case 5:
            func_sc01_077_80182968(arg0);
            goto skip4;
        case 4: case 6:
            break;
        }
        AF(arg0, s16, 0xE4) = 0x1E;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0xAA10;
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_077_8018AA8C);
        SetScript(arg0, &D_sc01_077_801AFF18);
    skip4:
        break;
    case 5:
        func_sc01_077_80182988(arg0);
        break;
    case 6:
        AF(arg0, s16, 0x2) = 0xD;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x1C) = 0x10;
        SetScript(arg0, &D_sc01_077_801AFFC0);
        break;
    case 7:
        AF(arg0, s16, 0x2) = 0x11;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x5C) = 0;
        SetScript(arg0, &D_sc01_077_801AFFC0);
        AF(arg0, s32, 0x1C) = 0;
        func_8012B2CC(arg0);
        break;
    }
    AF(arg0, s32, 0x24) = AF(arg0, s16, 0x6);
    AF(arg0, s32, 0x28) = AF(arg0, s16, 0xA);
    AF(arg0, s32, 0x2C) = AF(arg0, s16, 0xE);
}

void func_sc01_077_80183834(u8 *o) {
    u8 *p;
    s32 a;
    if (AF(o, u16, 0x5C) & 1) {
        func_sc01_077_80181F08(o);
    }
    if ((AF(o, u16, 0x70) & 0x400) && D_801270D8 != 0 && AF(o, u16, 0x2) != 10) {
        AF(o, s16, 0x2) = 10;
        AF(o, s16, 0x98) = 0;
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 0x5C) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x12) = (((ratan2(AF(o, s16, 0xE) - D_sc01_077_8018AAD0, D_sc01_077_8018AACC - AF(o, s16, 0x6)) - 0x400) & 0xFFF) + 0x800) & 0xFFF;
        if (AF(o, s16, 0x6) > 0x180) {
            p = AF(o, u8 *, 0x20);
            a = AF(p, s16, 0x12);
            AF(p, s16, 0x12) = (rand() & 1) ? a - 0x400 : a + 0x400;
        }
        func_8012B2CC(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc01_077_8018AB18);
        SetScript(o, &D_sc01_077_801B0330);
    }
    if (AF(o, u16, 0x0) == 0x2F) {
        D_sc01_077_8018ADC4[AF(o, u16, 0x2)](o);
        AF(o, u16, 0xDE)++;
        if (AF(o, u16, 0x86) != 0 && --AF(o, u16, 0x86) != 0) {
            return;
        }
        if (func_8012C044(o) != 0) {
            switch ((s16)AF(o, u16, 0x70) >> 8) {
            case 0: case 1: case 2: case 5: case 6:
                func_8012C098(o);
                break;
            case 3: case 7:
                func_8012C218(o);
                break;
            case 4:
                D_801270CC--;
                func_8012C218(o);
                break;
            }
        }
    }
}

void func_sc01_077_80183A50(void) {
    func_8012E364();
}

void func_sc01_077_80183A70(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc01_077_80183AA8(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    }
}

void func_sc01_077_80183AF0(s32 o) {
    AF(AF(o, u8 *, 0x20), u32, 4) ^= 0x80000000;
    if (func_8012BEE8(o) != 0) {
        func_80130D48(o);
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc01_077_80183BAC(s32 o) {
    func_8012AD80(o);
    if (func_8012BEE8(o) != 0) {
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc01_077_80183C50(s32 o) {
    func_8012AD80(o);
    if (func_8012BEE8(o) != 0) {
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0: case 1: case 2: case 5: case 6:
            func_8012C098(o);
            break;
        case 3: case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    }
}

void func_sc01_077_80183CF4(u8 *o) {
    s32 n = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = n;
    if (n >= 0x3D) {
        func_80130D48();
        switch ((s16)AF(o, u16, 0x70) >> 8) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
            func_8012C098(o);
            break;
        case 3:
        case 7:
            func_8012C218(o);
            break;
        case 4:
            D_801270CC--;
            func_8012C218(o);
            break;
        }
    } else if (n >= 0x1F) {
        AF(AF(o, u8 *, 0x20), s32, 4) ^= 0x80000000;
    }
}

void func_sc01_077_80183DD8(void) {
}

void func_sc01_077_80183DE0(u8 *o) {
    u8 *m = AF(o, u8 *, 0xCC);
    u8 *p;
    s32 i;
    s32 a;

    if (m != 0) {
        AF(m, s16, 0x18) = 0x1800;
        AF(m, u16, 0x2C) |= 0x10;
        AF(m, B8, 8) = AF(AF(o, u8 *, 0x20), B8, 8);
        AF(m, u16, 0xA) -= 0x10;
        a = AF(o, s16, 0x1A);
        AF(m, u16, 0x10) -= a << 4;
    }
    switch (AF(o, s16, 0xFE)) {
    case 0:
        if (D_80126B66 >= 0x6E0) {
            AF(o, s16, 0xFE) = 1;
            for (i = 0, p = D_sc01_077_8018AE0C; i < 2; i++, p += 0x14) {
                func_8012C51C(p, 0);
            }
        }
        break;
    case 1:
        if (D_80126B66 >= 0x900) {
            AF(o, s16, 0xFE) = 2;
            for (i = 2, p = D_sc01_077_8018AE34; i < 5; i++, p += 0x14) {
                func_8012C51C(p, 0);
            }
        }
        break;
    case 2:
        break;
    }
    if (AF(o, s16, 0xFC) != AF(o, s16, 0xE)) {
        func_sc01_077_80183F4C((s32)o);
    }
}

s32 func_sc01_077_80183F4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012B23C(arg0);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 0x84) = 0;
    if (AF(arg0, s16, 0xFC) < AF(arg0, s16, 0xE)) {
        AF(arg0, s16, 0x34) = 0;
    } else {
        AF(arg0, s16, 0x34) = 1;
    }
    AF(arg0, s32, 0x1C) = 0x100;
    AF(arg0, s32, 0xDC) = 0;
    return 0x100;
}

void func_sc01_077_80183FB8(u8 *o) {
    u8 *m;
    s32 a;

    func_8012CBA4(o);
    AF(o, s32, 0xDC) += D_sc01_077_8018AE84;
    if (AF(o, s32, 0xDC) > D_sc01_077_8018AE80) {
        AF(o, s32, 0xDC) = D_sc01_077_8018AE80;
    }
    if (AF(o, u16, 0x34) == 0) {
        AF(o, s32, 0x18) = AF(o, s32, 0xDC);
    } else {
        AF(o, s32, 0x18) = -AF(o, s32, 0xDC);
    }
    if (AF(o, s32, 0x14) > 0x600000) {
        AF(o, s32, 0x14) = 0x600000;
    }
    m = AF(o, u8 *, 0xCC);
    if (m != 0) {
        AF(m, s16, 0x18) = 0x1800;
        AF(m, u16, 0x2C) |= 0x10;
        AF(m, B8, 8) = AF(AF(o, u8 *, 0x20), B8, 8);
        AF(m, u16, 0xA) -= 0x10;
        a = AF(o, s16, 0x1A);
        AF(m, u16, 0x10) -= a << 4;
    }
    if (++AF(o, s16, 0x84) >= 0x10) {
        func_8002D4C8(0x48A, 0);
        AF(o, s16, 0x84) = 0;
    }
    if (AF(o, u16, 0x34) == 0) {
        if (AF(o, s16, 0xE) > 0xF00) {
            func_sc01_077_80184254((s32)o);
        }
    } else if (AF(o, s16, 0xE) < 0x830) {
        func_sc01_077_80184238((s32)o);
    }
    func_sc01_077_8018414C(o);
}

void func_sc01_077_8018414C(u8 *o) {
    u8 *e;
    u16 f;
    s32 d;
    s32 flag;
    s32 id;

    e = (u8 *) func_8012DE2C(o);
    if (e != 0) {
        id = 0x1F;
        flag = 1;
        do {
            if (AF(e, u16, 0) == 0x2F) {
                f = AF(e, u16, 0x5C);
                if (f & 0x8000) {
                    if (!(f & 0x4000) && AF(e, u16, 0x5E) != id && !(AF(e, u16, 0xAE) & 1)) {
                        d = AF(o, s16, 0xE) - AF(e, s16, 0xE);
                        if (d < 0) {
                            d = -d;
                        }
                        if (d < 0x21 && flag) {
                            AF(e, u16, 0x5C) = f | 1;
                            AF(e, s16, 0x60) = 0;
                            AF(e, s16, 0x62) = 0;
                            AF(e, u16, 0x5E) = id;
                        }
                    }
                }
            }
            e = (u8 *) func_8012DDA4();
        } while (e != 0);
    }
}

void func_sc01_077_80184238(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
}

s32 func_sc01_077_80184254(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 1;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0x1C) = 0x1B;
    return 0x1B;
}

void func_sc01_077_80184278(u8 *arg0) {
    D_sc01_077_8018AE88[AF(arg0, u16, 2)]();
    func_8012B4B8((s32) arg0);
}

void func_sc01_077_801842C8(u8 *o) {
    u8 *p;

    p = AF(o, u8 *, 0xCC);
    if (p != 0) {
        AF(p, s16, 0x18) = 0x1800;
        AF(p, u16, 0x2C) |= 0x10;
        AF(p, SV8, 8) = AF(AF(o, u8 *, 0x20), SV8, 8);
        AF(p, s16, 0xA) -= 0x10;
        AF(p, s16, 0x10) -= AF(o, s16, 0x1A) * 16;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (AF(o, s32, 0x1C) >= 6) {
            AF(o, s32, 0x18) -= 0x10000;
        }
        func_8012CBA4(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 3;
            AF(o, s16, 0x34) = 0;
            AF(o, s32, 0x18) = 0;
            AF(o, s16, 0x5C) = 0x800;
        }
        break;
    }
}

void func_sc01_077_801843C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (func_8001C214(temp_v0, 0), func_8001D0E8(AF(arg0, s32, 0x20), 0x140, 0xF0), temp_v0_2 = func_8012C1B8(), AF(arg0, s32, 0xCC) = temp_v0_2, (temp_v0_2 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0_2, (s32) &D_sc01_077_801D100C);
    AF(arg0, s32 *, 0x58) = &D_sc01_077_8018AE70;
    AF(arg0, s16, 0x5C) = 0x1800;
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 0xE);
}

s32 func_sc01_077_80184484(void) {
    return 1;
}

void func_sc01_077_8018448C(s32 arg0) {
    func_8012C098(arg0);
}

void func_sc01_077_801844AC(u8 *arg0) {
    if ((AF(arg0, u8, 0xC3) & 1) && (AF(arg0, s32, 0x90) != &D_sc01_077_80196F3C)) {
        SetScript((s32) arg0, (s32) &D_sc01_077_80196F3C);
    }
}

void func_sc01_077_801844F4(u8 *o) {
    func_8002AC00((AF(o, u16, 0x70) & 1) ? 8 : 2);
    func_8002D4C8((AF(o, u16, 0x5E) == 0x1D) ? 0x440 : 0x43F, 0);
}

void func_sc01_077_80184554(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    SetScript(arg0, (s32) &D_sc01_077_801973C4);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc01_077_80184594(u8 *o) {
    s16 v;
    AF(o, s16, 2) = 3;
    SetScript(o, &D_sc01_077_80196F3C);
    v = AF(AF(o, u8 *, 0x78), s16, 2);
    AF(o, s16, 0x5E) = 0;
    AF(o, s16, 0xDC) = 0;
    AF(o, s32, 0x1C) = 0x2D;
    AF(o, s16, 0x5C) = v;
}

s32 func_sc01_077_801845EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = func_8012BCCC(arg0);
    if (arg1 >= temp_v0) {
        func_sc01_077_8018469C(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc01_077_8019731C);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc01_077_8018469C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript(arg0, (s32) &D_sc01_077_801970DC);
    AF(arg0, s32, 0x1C) = 0x1E;
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_80142414(arg0, -0x96);
    }
}

s32 func_sc01_077_801846F8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc01_077_8018470C(u8 *o) {
    SV8 v;
    struct { SV8 p; s16 a, b, c, d; } q;
    u8 unused[8];
    u16 t;

    if (AF(o, s32, 0x1C) == 9) {
        if (func_8012D5E4(o, D_sc01_077_8018AF78, D_sc01_077_8018AF78 + 8, 9) != 0 && (AF(o, u16, 0x70) & 1)) {
            D_80126B96 |= 0x800;
        }
        if (AF(o, s16, 0x70) & 0x8000) {
            FaceHelper(o, &D_sc01_077_8018AF88, &v);
            q.p.pad = 0xDA;
            q.p.x = v.x;
            q.p.y = v.y;
            q.p.z = v.z;
            q.b = 0;
            q.c = 0x7FFF;
            q.d = AF(AF(o, u8 *, 0x20), u16, 0x12);
            func_8012C51C(&q, o);
            q.d = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            func_8012C51C(&q, o);
            q.d = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            func_8012C51C(&q, o);
        }
        func_8002D4C8(0x43E, 0);
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc01_077_80196F3C);
        t = AF(AF(o, u8 *, 0x78), u16, 2);
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 0x2D;
        AF(o, u16, 0x5C) = t;
    }
}

void func_sc01_077_80184890(u8 *arg0) {
    D_sc01_077_8018AF90[AF(arg0, u16, 2)]();
}

void func_sc01_077_801848CC(u8 *arg0) {
    D_sc01_077_8018AFB8[AF(arg0, u16, 2)]();
}

void func_sc01_077_80184908(u8 *arg0) {
    D_sc01_077_8018B000[AF(arg0, u16, 2)]();
}

void func_sc01_077_80184944(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s16, 2) = 1;
    func_8001CA88(AF(arg0, s32, 0x20), (s32) &D_sc01_077_8018AFC0);
    func_80143994(arg0, 0x1000);
}

void func_sc01_077_801849A8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, -0x100000);
}

void func_sc01_077_80184A00(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_8012AD80(arg0, arg1);
    if ((func_8012D5E4(arg0, (s32) &D_sc01_077_8018B00C, (s32) &D_800D3918, 0xA) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
    }
}

void func_sc01_077_80184A68(s32 o) {
    if (AF(o, s16, 0x70) & 0x8000) {
        if (func_8012BCCC() <= 0x90000) {
            func_sc01_077_80184554(o);
        }
    } else {
        if (func_8012BCCC(o) <= 0x24000) {
            func_sc01_077_80184554(o);
        }
    }
    if (func_8012C044(o) != 0) {
        func_8012C098(o);
    }
}

void func_sc01_077_80184AEC(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc01_077_80184594(arg0);
    }
}

void func_sc01_077_80184B24(s32 o) {
    s32 r;

    r = func_8012BEE8(o);
    if (r == 1) {
        if (AF(o, s16, 0x70) & 0x8000) {
            if (func_sc01_077_801845EC(o, 0x40000, 0xC4000) == r) {
                return;
            }
        } else {
            if (func_sc01_077_801845EC(o, 0x9000, 0x24000) == r) {
                return;
            }
        }
    }
    if (func_8012C044(o) != 0) {
        func_8012C098(o);
    }
}

void func_sc01_077_80184BB4(s32 arg0) {
    s32 v;
    void *p;

    v = func_8012B8E4(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (func_8012BEE8(arg0) != 0) {
        func_sc01_077_801846F8(arg0);
    }
}

void func_sc01_077_80184C0C(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 1) * 0x34) + &D_sc01_077_8018AEB8)) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc01_077_8018AF20;
        AF(arg0, s32, 0xC4) = 1;
        temp_v0 = func_8012C658(0x79, AF(arg0, u16, 0x70) & 1, (s32) arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc01_077_8019731C);
    }
}

void func_sc01_077_80184CCC(u8 *o) {
    s32 r;
    u16 v;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, D_sc01_077_8018AFA8[AF(o, s16, 0x70)]);
    v = AF(AF(o, u8 *, 0x64), u16, 0x36);
    AF(o, s16, 2) = 1;
    AF(o, s16, 0xFE) = 0x7FFF;
    AF(o, u16, 0xFC) = v;
}

void func_sc01_077_80184D50(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);
    SV8 pos;

    if (AF(o, s16, 0xFE) == 0x7FFF) {
        AF(o, u16, 0xFE) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    }
    if (AF(o, s16, 0xFC) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), B8, 0x10) = AF(AF(p, u8 *, 0x20), B8, 0x10);
    if (AF(AF(o, u8 *, 0x64), u8 *, 0x90) != &D_sc01_077_80197514) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(o, u16, 0xFE);
        AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
        AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8);
        AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    } else {
        FaceHelper(AF(o, u8 *, 0x64), &D_sc01_077_8018AFB0, &pos);
        AF(o, u16, 6) = pos.x;
        AF(o, u16, 0xA) = pos.y;
        AF(o, u16, 0xE) = pos.z;
    }
    AF(AF(o, u8 *, 0x20), B8, 0x18) = AF(AF(p, u8 *, 0x20), B8, 0x18);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = AF(AF(p, u8 *, 0x20), u16, 0x2C);
    AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(p, u8 *, 0x20), s32, 4);
}

s32 func_sc01_077_80184ED8(s32 arg0, s32 arg1, s32 arg2) {
    D_sc01_077_801DA908 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc01_077_80184F08(u8 *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    u8 *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (func_8012C354(o, &D_sc01_077_8019918C) == 0) {
        func_8012C218(o);
    }
    SetScript(o, &D_sc01_077_80186E48);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc01_077_801DA908, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc01_077_801991C0++;
    AF(o, WMtx *, 0xCC) = q;
    if (D_sc01_077_801991C0 > D_sc01_077_801DA8E8) {
        D_sc01_077_801991C0 = D_sc01_077_801DA8E8 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.y;
    if (func_80134510(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc01_077_801991C0++;
        AF(o, WMtx *, 0xD0) = q;
        if (D_sc01_077_801991C0 > D_sc01_077_801DA8E8) {
            D_sc01_077_801991C0 = D_sc01_077_801DA8E8 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc01_077_8018514C(u8 *o) {
    QuadArg q;
    u8 *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s32, 0x1C)++ < 2) {
        t = D_sc01_077_80199178;
        i = 0;
        m = AF(o, u8 *, 0xCC);
        v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; i < 4; i++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        mm = AF(o, u8 *, 0xD0);
        if (mm != 0) {
            m = mm;
            t = D_sc01_077_80199178;
            j = 0;
            v = AF(o, u16, 0x70);
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; j < 4; j++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            func_80017758(&q, m);
        }
        }
        AF(o, s16, 0x70) >>= 1;
        AF(p, u16, 0x2C) |= 1;
    } else {
        func_8012C218(o);
    }
}

void func_sc01_077_801853EC(u8 *arg0) {
    D_sc01_077_801991C4[AF(arg0, u16, 2)]();
}

void func_sc01_077_80185428(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc01_077_801B1430);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc01_077_801B1208);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.x = D_80126B5C;
    p.y = D_80126B60;
    p.z = D_80126B64;
    ((s16 *)&p.y)[1] -= 0x20;
    func_8012B77C(&v, arg0 + 4, &p);
    w = v;
    switch (AF(arg0, u16, 0x70) & 0xF) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        break;
    case 2:
        break;
    }
    if (AF(arg0, u16, 0x70) & 0x1000) {
        AF(arg0, s32, 0x1C) <<= 1;
    }
    func_8012B2CC(arg0);
    func_8012C588(0xBC, arg0);
}

void func_sc01_077_801855A0(u8 *arg0) {
    D_sc01_077_801B12A4[AF(arg0, u16, 2)]();
}

void func_sc01_077_801855DC(u8 *arg0) {
    D_sc01_077_801B12B8[AF(arg0, u16, 2)]();
}

void func_sc01_077_80185618(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc01_077_801B1290);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc01_077_801B129C, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc01_077_801856F8(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc01_077_801B12AC);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(arg0, &a, &b);
        AF(arg0, s16, 6) = b.x;
        AF(arg0, s16, 0xA) = b.y;
        AF(arg0, s16, 0xE) = b.z;
        AF(arg0, s32, 0x1C) = 0x5A;
        AF(arg0, s16, 0x34) = 1;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 5;
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

void func_sc01_077_80185814(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801B1560);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc01_077_80185870(u8 *arg0) {
    D_sc01_077_801B1588[AF(arg0, u16, 2)]();
}

void func_sc01_077_801858AC(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc01_077_801B1568[AF(arg0, s16, 0xFC)];
    if (D_sc01_077_801B1568[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc01_077_801B1568[0];
    }
    AF(arg0, s16, 0xFC)++;
    r = ((rand() & 3) << 10) + 0x1800;
    s = (r - 0x1000) << 5;
    o = func_8012913C(4);
    if (o != 0) {
        AF(o, s16, 6) = arg1;
        AF(o, u16, 0xA) = val;
        AF(o, s16, 0xE) = 0;
        AF(o, s32, 0x10) = s;
        AF(o, s16, 0x2C) = r;
    }
}

void func_sc01_077_80185970(u8 *arg0) {
    D_sc01_077_801B159C[AF(arg0, u16, 2)]();
}

void func_sc01_077_801859AC(u8 *arg0) {
    s16 n;

    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 1;
    n = AF(arg0, u16, 0x70) & 7;
    AF(arg0, s16, 0xFE) = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc01_077_801858AC(arg0, -0x80);
        func_sc01_077_801858AC(arg0, -0x30);
        func_sc01_077_801858AC(arg0, 0x20);
        func_sc01_077_801858AC(arg0, 0x70);
        func_sc01_077_801858AC(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc01_077_801858AC(arg0, -0x58);
        func_sc01_077_801858AC(arg0, -8);
        func_sc01_077_801858AC(arg0, 0x48);
        func_sc01_077_801858AC(arg0, 0x98);
        func_sc01_077_801858AC(arg0, 0xE8);
    }
    func_8012AD50(arg0);
}

void func_sc01_077_80185A94(s32 arg0, s32 arg1) {
    
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = AF(arg0, s16, 0xFE);
        func_sc01_077_801858AC(arg0, 0x110);
    }
}

void func_sc01_077_80185AD4(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_sc01_077_801B1590, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_077_80185B5C(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

void func_sc01_077_80185BA4(u8 *o) {
    SV8 v[4];
    SV8 c;
    SV8 w;
    s32 pp;
    s32 flag;
    UXY x;
    s32 r;
    s32 h;
    s32 a;
    s32 b;
    s32 i;
    s32 z;
    u8 *p;

    func_8012E32C();
    i = 0;
    r = rsin((AF(o, s32, 0x1C) << 11) / 30);
    h = (r << 8) >> 12;
    c.x = AF(o, u16, 6);
    c.y = AF(o, u16, 0xA);
    c.z = AF(o, u16, 0xE);
    a = AF(o, s32, 0x1C) << 4;
    for (; i < 6; i++, a = b) {
        func_8012B0B4(&w, a, 0x20);
        x = *(UXY *)&w;
        b = a + 0x2AA;
        v[0].x = c.x + x.s.x;
        v[0].y = c.y;
        v[0].z = c.z + x.s.y;
        v[2].x = c.x + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[2].y = c.y - h;
        v[2].z = c.z + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        func_8012B0B4(&w, b, 0x20);
        x = *(UXY *)&w;
        v[1].x = c.x + x.s.x;
        v[1].y = c.y;
        v[1].z = c.z + x.s.y;
        v[3].x = c.x + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[3].y = c.y - h;
        v[3].z = c.z + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        p = AllocPrim(0x24);
        AF(p, s32, 4) = D_sc01_077_801D55F4[i];
        AF(p, s32, 0xC) = D_sc01_077_801D55F4[i + 1];
        p[7] = 0x3A;
        AF(p, s32, 0x1C) = 0;
        AF(p, s32, 0x14) = 0;
        AF(p, u32, 0) = 0x08000000;
        z = RotTransPers(&v[0], p + 8, &pp, &flag);
        RotTransPers(&v[1], p + 0x10, &pp, &flag);
        RotTransPers(&v[2], p + 0x18, &pp, &flag);
        RotTransPers(&v[3], p + 0x20, &pp, &flag);
        AddPrim(*(u8 **)(D_800A651C + D_800B9A02 * 0x14) + z * 4, p);
        func_8012E28C(z, 1);
    }
}

void func_sc01_077_80185E68(o)
    u8 *o;
{
    s32 i;
    s32 k;
    s32 s;
    S12 *p;

    AF(o, s16, 2) = 2;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0x15;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, u8, 0x5E) == 5) {
        StartRumbleScript(&D_80062BDC);
    }
    if (AF(o, u16, 0x82) & 1) {
        func_8016B428(o);
        StartRumbleScript(&D_80062C04);
    }
    if (--AF(o, s16, 0x76) == 0) {
        AF(o, u16, 0x5C) &= 0x7FFF;
        func_8002D4C8(0x4A8, 0);
    } else {
        func_8002D4C8(0x4A9, 0);
    }
    k = AF(o, s16, 0xFC) = D_sc01_077_801D5588[AF(o, s16, 0x76)];
    for (i = 0; i < 10; i++) {
        D_sc01_077_801DA910[i] = (*(S12 **)D_sc01_077_801D55AC[AF(o, s16, 0x76)])[i];
    }
    SetScript(o, &D_sc01_077_801D5578);
    p = &D_sc01_077_801D6F8C[k];
    D_sc01_077_801DA98A[0] = p->v[0];
    D_sc01_077_801DA98E[0] = p->v[1];
    D_sc01_077_801DA992[0] = p->v[2];
    func_8012B21C(o);
    AF(o, s32, 0x48) = 0x18000;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x10) = s;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x18) = s;
    AF(o, s32, 0x14) = -0xC0000;
}

void func_sc01_077_80186078(u8 *o) {
    SV8 a;
    SV8 b;
    S12 *tbl;
    S12 *t;
    u8 *m;
    u8 *p;

    AF(AF(o, u8 *, 0x20), s32, 0x48) = AF(o, s16, 0xDC);
    AF(AF(o, u8 *, 0x20), s32, 0x50) = AF(o, s16, 0xDE);
    a.x = (AF(o, s32, 0x1C) & 1) << 2;
    a.y = a.z = 0;
    FaceHelper(o, &a, &b);
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xE) = b.z;
    AF(o, s16, 0x98) = 0;
    tbl = *AF(o, S12 **, 0x90);
    AF(o, s32, 0x10) += AF(o, s32, 0x44);
    AF(o, s32, 0x14) += AF(o, s32, 0x48);
    AF(o, s32, 0x18) += AF(o, s32, 0x4C);
    t = &tbl[AF(o, s16, 0xFC)];
    D_sc01_077_801DA988[0] += AF(o, s32, 0x10);
    D_sc01_077_801DA98C[0] += AF(o, s32, 0x14);
    D_sc01_077_801DA990[0] += AF(o, s32, 0x18);
    t->v[0] = D_sc01_077_801DA98A[0] - a.x;
    t->v[1] = D_sc01_077_801DA98E[0];
    t->v[2] = D_sc01_077_801DA992[0] - a.z;
    if (AF(o, s32, 0x1C) >= 11) {
        m = (u8 *)func_8012C588(0x24, o);
        if (m != 0) {
            a.x = t->v[0];
            a.y = t->v[1];
            a.z = t->v[2];
            FaceHelper(o, &a, &b);
            AF(m, s16, 6) = b.x;
            AF(m, s16, 0xA) = b.y;
            AF(m, s16, 0xE) = b.z;
        }
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    if (AF(o, s16, 0x76) <= 0) {
        if (AF(o, s16, 0x70) == 4) {
            func_8012C218(o);
        } else {
            func_sc01_077_80186330(o);
        }
        return;
    }
    SetScript(o, D_sc01_077_801D55AC[AF(o, s16, 0x76)]);
    AF(o, s16, 2) = 1;
    if (AF(o, s16, 0x70) == 4) {
        AF(o, u8 *, 0x58) = &D_sc01_077_801D5568;
    } else {
        AF(o, u8 *, 0x58) = &D_sc01_077_801D5558;
    }
    AF(o, s32, 0x58) |= 0x60000000;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x1C00;
    AF(o, u16, 0x5C) |= 0x8800;
    AF(o, s16, 0x5E) = 0;
    AF(o, s16, 6) = AF(o, s16, 0xDC);
    AF(o, s16, 0xE) = AF(o, s16, 0xDE);
}

void func_sc01_077_80186330(s32 arg0) {
    s32 temp_v1;

    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc01_077_801D77A8);
    SetScript(arg0, (s32) &D_sc01_077_80186E48);
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x77FF);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc01_077_801863B4(u8 *o) {
    SetScript(o, &D_sc01_077_80186E48);
    AF(o, s16, 2) = 4;
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0x1E;
    AF(o, u16, 0xEA) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    AF(o, s16, 0xE8) = 0;
    AF(o, s32, 0xE0) = 0x400000;
    AF(o, s32, 0xE4) = 0;
    func_8002D4C8(0x49E, 0);
    func_8002D4C8(0x4A2, 0);
    func_80174784();
}

void func_sc01_077_80186434(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1, arg2)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801D6F6C);
    func_8001D0E8(temp_v0, 0x104, 0x190);
    AF(temp_v0, s16, 0x1C) = 0x1C00;
    AF(temp_v0, s16, 0x1A) = 0x1C00;
    AF(temp_v0, s16, 0x18) = 0x1C00;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x76) = 4;
    AF(arg0, s32 *, 0x78) = &D_sc01_077_801D55C0;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
    SetScript(arg0, D_sc01_077_801D55AC[AF(arg0, s16, 0x76)]);
    AF(arg0, s16, 2) = 1;
    if (AF(arg0, s16, 0x70) == 4) {
        AF(arg0, s32 *, 0x58) = &D_sc01_077_801D5568;
    } else {
        AF(arg0, s32 *, 0x58) = &D_sc01_077_801D5558;
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

void func_sc01_077_80186574(u8 *arg0) {
    if (((u32) (AF(arg0, u16, 2) - 1) < 2U) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_077_80185E68();
        return;
    }
    D_sc01_077_801D5624[AF(arg0, u16, 2)]();
}

void func_sc01_077_801865EC(u8 *o) {
    s32 m;
    s32 a;
    s32 s;
    u8 *t;
    SV8 *v;

    m = func_8012C1B8(o);
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(AF(o, s32, 0x20), D_sc01_077_801D5638[rand() % 3]);
    if (AF(o, s16, 0x70) != 0) {
        v = (SV8 *)(o + 0x24);
        AF(o, s16, 0x2A) = -2;
        a = -AF(o, s16, 0xE) + 0x400;
        v->x = (a * 48) / 2048;
        v->y = (a * 96) / 2048;
        v->z = a / 64;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), SV8 *, 0x80) = v;
    }
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    t = AF(o, u8 *, 0x20);
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = AF(t, s16, 0x1C) = 0x2000;
    SetScript(o, &D_sc01_077_80186E48);
    AF(o, s16, 2) = 1;
    func_8012B21C(o);
    AF(o, s32, 0x48) = 0x18000;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x10) = s;
    s = rand() << 4;
    if (!(rand() & 1)) {
        s = -s;
    }
    AF(o, s32, 0x18) = s;
    if (AF(o, s16, 0x70) == 0) {
        AF(o, s32, 0x14) = -(rand() << 4);
    } else {
        AF(o, s32, 0x14) = -0x80000 - (rand() << 5);
    }
    AF(o, s32, 0x1C) = 0x32;
}

void func_sc01_077_801867E0(u8 *arg0) {
    D_sc01_077_801D564C[AF(arg0, u16, 2)]();
}

void func_sc01_077_8018681C(u8 *o) {
    if (AF(o, s16, 0x70) == 4) {
        AF(o, B8, 0x50) = D_sc01_077_801D5610;
    }
}

void func_sc01_077_80186860(u8 *o) {
    u8 *p;

    if (D_801270DC[0] == 0) {
        if (func_8012BD14() < 0x4001) {
            p = func_8012E544(0x161);
            if (p != 0) {
                AF(p, s16, 0xFC) = 1;
                AF(p, s16, 0xFE) = 3 - AF(o, u16, 0x70);
            }
            D_801270DC[0] = 1;
            AF(o, s32, 0x1C) = 0x1E;
        }
    } else {
        func_8012BEE8(o);
        if (AF(o, s32, 0x1C) == 0 && D_80126D50 == 0 && func_8012BD14(o) < 0x241) {
            func_sc01_077_801863B4(o);
        }
    }
}

void func_sc01_077_80186938(u8 *o) {
    s32 *p;

    if (AF(o, u16, 0x34) == 0) {
        AF(o, s32, 0xE4) += AF(o, s32, 0xE0);
        AF(o, s32, 0xE8) += AF(o, s32, 0xE4);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xEA);
        func_sc01_077_80185BA4(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34) = 1;
            func_8001C214(AF(o, s32, 0x20), &D_sc01_077_801D7A4C);
            SetScript(o, &D_sc01_077_80186E48);
            func_801747AC();
            p = &D_801270C8;
            if (++*p >= 4) {
                D_801270CC = 2;
            }
        }
    }
}

void func_sc01_077_80186A04(s32 arg0) {
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
