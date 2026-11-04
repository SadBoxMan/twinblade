#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_010_8017BE9C(void) {
}

void func_sc03_010_8017BEA4(void) {
}

void func_sc03_010_8017BEAC(void) {
}

void func_sc03_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_010_80183A08[])();
extern void (*D_sc03_010_8019C820[])();
extern void func_sc03_010_8017C234();
extern void (*D_sc03_010_80183A88[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_010_8017DA84(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_010_80183A90[])();
void func_sc03_010_8017DAAC(void);
extern void func_800D1EBC();
extern void (*D_sc03_010_80183A9C[])();
extern void func_800D1E28();
extern u8 D_sc03_010_80183AA8;
extern void func_8016EE40();
extern u8 D_sc03_010_80183AB4;
extern void (*D_sc03_010_80183BD0[])();
extern u8 D_sc03_010_80183BD8;
extern void (*D_sc03_010_80183C00[])();
extern u8 D_sc03_010_80183BE4;
extern void func_sc03_010_8017E04C();
extern void (*D_sc03_010_80183C08[])();
extern void (*D_sc03_010_80183C88[])();
extern void (*D_sc03_010_80183CE8[])();
extern void (*D_sc03_010_80183D58[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern s32 func_sc03_010_8017DE84();

extern s32 func_80146994();
extern void (*D_sc03_010_80183A10[])();
extern void func_80148634();
extern u8 D_800D5DF4;
extern void func_80154274();
extern s32 func_sc03_010_8017BEBC();
extern void func_80171990();
extern void func_sc03_010_8017C4C4();
extern void func_sc03_010_8017BEE8();
extern void func_80171A04();
extern void func_80171A10();
extern u8 D_sc03_010_80183B84;
extern void func_80171928();
extern u8 D_sc03_010_80183BC5[];
extern s32 func_800291B4();
extern void func_8016216C();
extern void func_sc03_010_8017EDA8();
extern void func_sc03_010_8017EDD8();
extern void func_sc03_010_8017DD44();
extern s32 func_sc03_010_8017DE84();
extern u8 D_sc03_010_80183B64;
extern s32 func_8016EDBC();
extern s32 func_sc03_010_8017DF54();
extern u16 D_800B99DA;
extern u8 D_sc03_010_80183BEC;
extern s32 func_8013C9C4();
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
extern u16 D_800B99D8;
extern s8 D_sc03_010_8019FFA0;
extern void func_sc03_010_8017E934();
extern void (*D_sc03_010_80183D40[])();
extern s32 func_sc03_010_8017F01C();
extern void func_8012C098();
extern u8 D_sc03_010_80183D08;
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_8012BF4C();
extern void func_8012AD50();
extern s8 D_sc03_010_80183D14;
extern s32 func_8012BF10();
extern void func_8012AD44();
extern u8 D_80127058;
extern void func_8012B0B4();

s32 func_sc03_010_8017BEBC(s32 arg0, s32 arg1) {
    return func_80146994(0x29, 0, arg0, arg1);
}

extern u8 D_80126B58;
extern void func_80147364();
extern s32 func_8014C050();
extern void func_80016714();
extern void func_80146C3C();
extern s32 func_80148800();
extern void func_sc03_010_8017C6B8();
extern u8 D_sc03_010_80183A28[];
extern u8 D_sc03_010_80183A30[];
extern u8 D_sc03_010_80183A5C;
extern void func_sc03_010_8017EE30();
extern void func_800D1724();
extern s32 func_8012E544();
extern u16 D_sc03_010_80183CF4[];

void func_sc03_010_8017BEE8(arg0)
    s32 arg0;
{
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;

    func_80147364(4, 0x542);
    func_80147364(4, 0x543);
    func_80147364(4, 0x541);
    temp_v0 = func_8014C050((s32) &D_80126B58, 0x29);
    if (temp_v0 != 0) {
        temp_a0 = AF(temp_v0, s32, 0x34);
        if (temp_a0 != 0) {
            func_80016714(temp_a0, 0x38);
        }
        temp_a0_2 = AF(temp_v0, s32, 0x10);
        if (temp_a0_2 != 0) {
            func_80016714(temp_a0_2, 0x38);
        }
        temp_a0_3 = AF(temp_v0, s32, 0x14);
        if (temp_a0_3 != 0) {
            func_80016714(temp_a0_3, 0x38);
        }
        temp_a0_4 = AF(temp_v0, s32, 0x18);
        if (temp_a0_4 != 0) {
            func_80016714(temp_a0_4, 0x38);
        }
        temp_a0_5 = AF(temp_v0, s32, 0x1C);
        if (temp_a0_5 != 0) {
            func_80016714(temp_a0_5, 0x38);
        }
        func_80146C3C(temp_v0);
    }
}

void func_sc03_010_8017BFC8(u8 *arg0) {
    D_sc03_010_80183A08[AF(arg0, u16, 2)]();
}

extern s32 func_8012BEE8();

extern u8 D_800D5E18;
void func_sc03_010_8017C6F4(s32 arg0, s32 arg1);
extern void func_801542A4();
extern void func_80147324();
extern void func_80171A80();

extern u8 D_sc03_010_80183C68[];
extern void func_sc03_010_8017E3B8();
extern void func_8002D59C();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 func_sc03_010_8017F614();
extern s32 func_sc03_010_8017F558();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_80012C6C();
extern s32 func_80012ABC();

extern u8 D_sc03_010_801838E4;
extern u8 D_sc03_010_80183954;
extern u8 D_sc03_010_801839E0;
extern u8 D_sc03_010_801839EC;
extern u8 D_sc03_010_80183A00;
extern s16 D_sc03_010_8019FF38;
extern s16 D_sc03_010_8019FF3C;
extern s16 D_sc03_010_8019FF40;
extern u8 D_sc03_010_8019FF44;
extern u8 D_sc03_010_8019FF64;
extern u8 D_sc03_010_8019FF94;
extern s32 func_801465C0();
extern void func_80024054();
extern void func_8001CE28();

void func_sc03_010_8017C004(u8 *arg0, s32 arg1) {
    s32 o;

    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s32, 0x34) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    o = func_801465C0((s32) arg0, arg1);
    if (o != 0) {
        AF(arg0, s32, 0x34) = o;
        func_8001CEC0(o, (s32) &D_sc03_010_801838E4);
        AF(o, s16, 8) = 0x40;
        AF(o, s16, 0xA) = -0x20;
        AF(o, s16, 0x2C) = 1;
        AF(o, s32, 4) = (s32) (AF(o, s32, 4) | 0x40000000);
        o = func_801465C0();
        if (o != 0) {
            AF(arg0, s32, 0x10) = o;
            func_80024054((s32) &D_sc03_010_801839E0, (s32) &D_sc03_010_8019FF44);
            func_8001CE28(o, (s32) &D_sc03_010_8019FF44);
            AF(o, s16, 8) = 0x30;
            AF(o, s16, 0xA) = -0x2C;
            AF(o, s16, 0x2C) = 1;
            AF(o, u8, 0x27) = 1;
            o = func_801465C0();
            if (o != 0) {
                AF(arg0, s32, 0x14) = o;
                func_8001CEC0(o, (s32) &D_sc03_010_80183954);
                AF(o, s16, 8) = -0x40;
                AF(o, s16, 0xA) = -0x20;
                AF(o, s16, 0x2C) = 1;
                o = func_801465C0();
                if (o != 0) {
                    AF(arg0, s32, 0x18) = o;
                    func_80024054((s32) &D_sc03_010_801839EC, (s32) &D_sc03_010_8019FF64);
                    func_8001CE28(o, (s32) &D_sc03_010_8019FF64);
                    AF(o, s16, 8) = -0x58;
                    AF(o, s16, 0xA) = -0x2C;
                    AF(o, s16, 0x2C) = 1;
                    AF(o, u8, 0x27) = 1;
                    o = func_801465C0();
                    if (o != 0) {
                        AF(arg0, s32, 0x1C) = o;
                        func_80024054((s32) &D_sc03_010_80183A00, (s32) &D_sc03_010_8019FF94);
                        func_8001CE28(o, (s32) &D_sc03_010_8019FF94);
                        AF(o, s16, 8) = -0x68;
                        AF(o, s16, 0xA) = -0xC;
                        AF(o, s16, 0x2C) = 1;
                        AF(o, u8, 0x27) = 0xB6;
                        AF(arg0, s16, 0x2A) = 0;
                        AF(arg0, s16, 0x28) = 0;
                        D_sc03_010_8019FF40 = 0;
                        D_sc03_010_8019FF3C = 0;
                        D_sc03_010_8019FF38 = 0;
                        func_sc03_010_8017C234((s32) arg0);
                        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
                    }
                }
            }
        }
    }
}

void func_sc03_010_8017C214(s32 arg0) {
    func_sc03_010_8017C234(arg0);
}

extern s16 D_sc03_010_801838EA;
extern u16 D_sc03_010_801838EE;
extern s16 D_sc03_010_8018395A;
extern u16 D_sc03_010_8018395E;
extern s8 D_sc03_010_80183960;
extern s8 D_sc03_010_80183961;
extern s8 D_sc03_010_80183964;
extern s8 D_sc03_010_80183965;
extern s32 func_80012F74();

void func_sc03_010_8017C234(u8 *arg0) {
    u16 x;
    s16 d;
    u16 y;
    s16 t;
    s32 c;
    u8 b;
    u16 e;
    s32 w;

    x = *AF(arg0, u16 *, 0x2C);
    d = x - D_sc03_010_8019FF3C;
    y = *AF(arg0, u16 *, 0x30);
    if (D_sc03_010_8019FF40 == 0) {
        if (d != 0) {
            if (d > 0) {
                func_80147324(0x542);
            } else {
                func_80147324(0x543);
            }
        }
    } else if (d == 0) {
        func_80147364(4, 0x542);
        func_80147364(4, 0x543);
    }
    if (D_sc03_010_8019FF38 == 0) {
        func_80147324(0x541);
    }
    if ((s16) y == D_sc03_010_8019FF38) {
        func_80147364(4, 0x541);
    }
    w = AF(arg0, s16, 0x28); D_sc03_010_8019FF40 = d; D_sc03_010_8019FF38 = y; t = func_80012F74(w, (s16) x, 4, 1);
    AF(arg0, s16, 0x28) = t;
    D_sc03_010_8019FF3C = t;
    D_sc03_010_801838EA = 0x61 - AF(arg0, u16, 0x28);
    e = AF(arg0, u16, 0x28); D_sc03_010_8018395A = 0x61 - (u16) D_sc03_010_8019FF38;
    D_sc03_010_8018395E = D_sc03_010_8019FF38;
    D_sc03_010_801838EE = e;
    c = rsin((D_800B99DA & 0xF) << 8) / 64 + 0x40;
    b = c; D_sc03_010_80183961 = b; D_sc03_010_80183965 = b; c += (u8) D_sc03_010_8019FF38;
    D_sc03_010_80183960 = c;
    D_sc03_010_80183964 = c;
}

void func_sc03_010_8017C404(u8 *arg0) {
    D_sc03_010_80183A10[AF(arg0, u8, 0x216)]();
    func_80148634((s32) arg0);
}

void func_sc03_010_8017C454(u8 *arg0) {
    func_8002D4C8(0x1A, 0);
    AF(arg0, s32, 0x204) = 0;
    EndScene((s32) arg0);
    func_80154274((s32) arg0, (s32) &D_800D5DF4);
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    func_sc03_010_8017BEBC((s32) (arg0 + 0x20C), (s32) (arg0 + 0x20E));
    func_80171990((s32) arg0);
    func_sc03_010_8017C4C4((s32) arg0);
}

void func_sc03_010_8017C4C4(s32 arg0) {
    if (func_80148800(arg0) & 0x10) {
        AF(arg0, u8, 0x216) = 5;
        return;
    }
    func_sc03_010_8017C6B8(arg0, (s32) AF(arg0, u8, 0x218));
    if (func_80148800(arg0) & 0x40) {
        func_80171990(arg0);
    }
}

void func_sc03_010_8017C528(u8 *arg0) {
    u16 temp_v0;

    if ((u32) (AF(arg0, u16, 0x20E) - 0x44) < 0xDU) {
        func_sc03_010_8017C6F4((s32) arg0, (s32) AF(arg0, u8, 0x218));
        func_801542A4((s32) arg0, (s32) &D_800D5E18);
        D_80127058 = AF(arg0, u8, 0x218) + 1;
        func_80147324(0x544);
    } else {
        temp_v0 = AF(arg0, u16, 0x20C) - 0x10;
        AF(arg0, u16, 0x20C) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x20C) = 0U;
        }
    }
    func_80171A80((s32) arg0, 0x10);
    func_80171990((s32) arg0);
}

extern s32 D_sc03_010_801A005C;
extern s16 D_sc03_010_8019C7D0[];
typedef struct { s8 b[4]; } B4;
extern B4 D_sc03_010_8019FFA4;
extern B4 D_sc03_010_8019FFE0;
extern B4 D_sc03_010_8019FFE4;
extern B4 D_sc03_010_8019EBCC;
extern B4 D_sc03_010_8019EBD0;
extern B4 D_sc03_010_8019EBD4;
extern SV8 D_sc03_010_80183C90[];
extern void func_800233CC();
extern s32 func_801290DC();
extern s16 D_sc03_010_8019C7EC;
extern u16 D_sc03_010_8019C7EE;
extern s32 D_sc03_010_8019C7F0;
extern s32 D_sc03_010_8019C7F4;
extern u8 D_sc03_010_8019D200;
extern u8 D_80078EAE;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern s32 SetScript();
extern s16 D_80126B5E;
extern s16 D_80126B66;
extern SV8 D_80126940;
extern u16 D_80126942;
extern SV8 D_sc03_010_8019EBC4;
extern s32 ratan2();
extern s32 func_80013294();
extern void func_sc03_010_8017F1B0();
extern void func_800242D0();
extern void func_8001CE68();
extern u8 D_sc03_010_80183CD0;
extern u8 D_sc03_010_801A0020;
extern u8 D_sc03_010_801A0048;
extern u16 D_800AF7BC[];
extern u16 D_800AF7BE;

extern void func_8012DFD4();
extern s16 D_80126B62;
extern u8 D_80126B5C;
extern s32 D_sc03_010_801A0050;
extern s32 D_sc03_010_801A0058;
extern s32 func_8012B6D4();

extern s32 func_80171A88();

void func_sc03_010_8017C5D8(u8 *arg0) {
    s8 v;

    if (func_80171A88() != 0) {
        if (AF(arg0, s16, 0x20C) == 0x60) {
            v = 4;
        } else {
            v = 1;
            AF(arg0, s16, 0x20E) = 0;
        }
        AF(arg0, u8, 0x216) = v;
    }
}

void func_sc03_010_8017C628(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_010_8017BEE8();
    func_80171A04(arg0);
}

void func_sc03_010_8017C670(s32 arg0) {
    func_8002D4C8(0x1B, 0);
    BeginScene(arg0);
    func_sc03_010_8017BEE8();
    func_80171A10(arg0);
}

void func_sc03_010_8017C6B8(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) + D_sc03_010_80183A28[arg1];
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20E) = 0U;
    }
}

void func_sc03_010_8017C6F4(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20C) + D_sc03_010_80183A30[arg1];
    AF(arg0, u16, 0x20C) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20C) = 0x60U;
    }
}

typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_80013F3C();
extern s16 D_sc03_010_8019BFD0[];

extern void func_8001C2C4();
extern s16 D_sc03_010_80183C0C[];
extern s32 D_sc03_010_80183C5C[];
extern u8 D_sc03_010_80183C2C[];
extern void func_8012B2CC();
extern s32 func_8012B14C();
extern u8 *func_80132EF4();
extern void func_80129374();
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 func_sc03_010_8017E69C();


extern void func_8001CD9C();
extern s32 func_8016F1C4();
extern void func_800291A0();
extern void func_8016F0AC();
void func_sc03_010_8017DEB0(void);

extern u8 D_sc03_010_80183BC4[];

extern s32 func_8001AAA0();
void func_sc03_010_8017DF8C(void);
extern void func_8001CB6C();
extern u8 D_sc03_010_80183D4C;

extern s32 func_8012DEB8();

typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC730;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern void ReadRotMatrix();
extern void PushMatrix();
extern void PopMatrix();
extern void TransposeMatrix();
extern void ApplyMatrixSV();
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

static inline void rdpush(MtxDCM *p) {
    ReadRotMatrix(p);
    PushMatrix();
}

static inline void trans(MtxDCM *p, MtxDCM *q) {
    TransposeMatrix(p, q);
}

void func_sc03_010_8017C730(u8 *obj) {
    s32 tmp[3];
    volatile SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    SV8 zero;
    SV8 cam;
    MtxDCM m;
    MtxDCM mt;
    SV8 dv;
    GteC730 g;
    s32 zlim;
    s16 mid, ymid, yhi;
    u32 nf;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 j;
    u32 w;
    u32 x, y, z;
    s16 zl, zh;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    s32 zz;

    zlim = ReadGeomScreen();
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    rdpush(&m);
    dv.x = zero.x - m.t[0];
    dv.y = zero.y - m.t[1];
    dv.z = zero.z - m.t[2];
    trans(&m, &mt);
    ApplyMatrixSV(&mt, &dv, &cam);
    PopMatrix();
    pk = g_PrimNext;
    ymid = cam.y + 0x100;
    yhi = cam.y + 0x280;
    cam.y -= 0x180;
    c = AF(obj, ChunkDCM *, 0xC);
    ot = g_WorldOtTable[D_800B9A02];
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        y = c->y;
        z = c->z;
        xl = c->x;
        xh = c->x >> 16;
        yl = y;
        yh = y >> 16;
        zh = z >> 16;
        mid = (yl + yh) / 2;
        if (mid < cam.y) continue;
        if (mid > yhi) continue;
        box[0].x = xl; box[0].y = yl; box[0].z = z;
        box[1].x = xh; box[1].y = yl; box[1].z = z;
        box[2].x = xl; box[2].y = yl; box[2].z = zh;
        box[3].x = xh; box[3].y = yl; box[3].z = zh;
        box[4].x = xl; box[4].y = yh; box[4].z = z;
        box[5].x = xh; box[5].y = yh; box[5].z = z;
        box[6].x = xl; box[6].y = yh; box[6].z = zh;
        box[7].x = xh; box[7].y = yh; box[7].z = zh;
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

        if (scr[0].x > scr[1].x) { hi = scr[0].x; lo = scr[1].x; } else { lo = scr[0].x; hi = scr[1].x; }
        if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < lo) lo = scr[2].x;
        if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < lo) lo = scr[3].x;
        if (scr[4].x > scr[5].x) { hi2 = scr[4].x; lo2 = scr[5].x; } else { lo2 = scr[4].x; hi2 = scr[5].x; }
        if (scr[6].x > hi2) hi2 = scr[6].x; else if (scr[6].x < lo2) lo2 = scr[6].x;
        if (scr[7].x > hi2) hi2 = scr[7].x; else if (scr[7].x < lo2) lo2 = scr[7].x;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -160 || (s16)l > 160) continue;

        if (scr[0].y > scr[1].y) { hi = scr[0].y; lo = scr[1].y; } else { lo = scr[0].y; hi = scr[1].y; }
        if (scr[2].y > hi) hi = scr[2].y; else if (scr[2].y < lo) lo = scr[2].y;
        if (scr[3].y > hi) hi = scr[3].y; else if (scr[3].y < lo) lo = scr[3].y;
        if (scr[4].y > scr[5].y) { hi2 = scr[4].y; lo2 = scr[5].y; } else { lo2 = scr[4].y; hi2 = scr[5].y; }
        if (scr[6].y > hi2) hi2 = scr[6].y; else if (scr[6].y < lo2) lo2 = scr[6].y;
        if (scr[7].y > hi2) hi2 = scr[7].y; else if (scr[7].y < lo2) lo2 = scr[7].y;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -110 || (s16)l > 110) continue;
        type = mid > yhi || mid > ymid || mid == ymid; /* MATCH-TRICK: dead store (type is reset per poly); its tests keep the original's dead (s16)ymid sign-extension */

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
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
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 4:
            case 5:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 mm;
                gte_stsxy3_f3(pk);
                gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0xC);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x10);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0xE);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(pk, s16, 0x12);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 < zlim && g.sz1 < zlim && g.sz2 < zlim) continue;
                if (g.sz0 > g.sz1) { mm = g.sz0; if (mm < g.sz2) mm = g.sz2; } else { mm = g.sz1; if (mm < g.sz2) mm = g.sz2; }
                g.z = mm;
                if (type != 4) g.z = mm + 0x200;
                AF(pk, u32, 4) = poly[0];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x4000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x14;
                break;
            }
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 mm;
                gte_stsxy3_ft3(pk);
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
                if (yh < -110 || yl > 110) continue;
                gte_avsz3();
                if (g.sz0 > g.sz1) { mm = g.sz0; if (mm < g.sz2) mm = g.sz2; } else { mm = g.sz1; if (mm < g.sz2) mm = g.sz2; }
                g.z = mm;
                if (type != 6) g.z = mm + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                zz = g.z;
                AF(pk, u32, 0xC) = (t[1] & 0x3FC0FFFF) | (((zz - 0x174) / 128 + 0x30) << 16);
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
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
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 < zlim && g.sz1 < zlim && g.sz2 < zlim && g.sz3 < zlim) continue;
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
                p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(tmp, s16, 8);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(tmp, s16, 0xA);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.flag);
                if (g.flag & 0x7F85E000) continue;
                gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                gte_stsxy(pk + 0x20);
                p3 = AF(pk, s16, 0x20);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x22);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type != 2) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                zz = g.z;
                AF(pk, u32, 0xC) = (t[1] & 0x3FC0FFFF) | (((zz - 0x174) / 128 + 0x30) << 16);
                otp = (u32 *)(((zz >> 2) << 2) + (u32)ot);
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            }
        }
    }
    g_PrimNext = pk;
}

void func_sc03_010_8017D7C4(u8 *arg0) {
    D_sc03_010_80183A88[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_010_8017D800(u8 *arg0) {
    func_sc03_010_8017DA84();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_010_8017D844(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_010_8017D868(u8 *arg0) {
    D_sc03_010_80183A90[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_010_8017D8A4(u8 *arg0) {
    func_sc03_010_8017DAAC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_010_8017D8E4(u8 *arg0) {
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

void func_sc03_010_8017D960(void) {
    func_800D1EBC();
}

void func_sc03_010_8017D980(u8 *arg0) {
    D_sc03_010_80183A9C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_010_8017D9BC(u8 *o) {
    if (func_8001AAA0(0x2A) != 0) {
        func_sc03_010_8017DF8C();
        AF(o, s32, 0x28) = 0x80;
        AF(o, u8, 0x15)++;
        return 0;
    }
    return 0;
}

s32 func_sc03_010_8017DA10(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_010_8017DA64(void) {
    func_800D1EBC();
}

void func_sc03_010_8017DA84(void) {
    func_8016EE40((s32) &D_sc03_010_80183AA8, 0x01000000);
}

void func_sc03_010_8017DAAC(void) {
    func_8016EE40((s32) &D_sc03_010_80183AB4, 0x01000000);
}

void func_sc03_010_8017DAD4(u8 *arg0) {
    if (StepToward((s32) arg0, (s32) ((AF(arg0, u8, 0x218) * 8) + &D_sc03_010_80183B84)) != 0) {
        func_80171928((s32) arg0);
    }
}

void func_sc03_010_8017DB20(u8 *arg0) {
    if ((u32) (func_800291B4(0xCE) & 0xFF) < D_sc03_010_80183BC5[AF(arg0, u8, 0x218)]) {
        func_80171A04((s32) arg0);
        return;
    }
    func_80171A10((s32) arg0);
}

void func_sc03_010_8017DB84(u8 *arg0) {
    u8 v;
    u8 hi;

    v = func_800291B4(0xCE);
    hi = D_sc03_010_80183BC5[AF(arg0, u8, 0x218)];
    if (v < hi && v >= D_sc03_010_80183BC4[AF(arg0, u8, 0x218)]) {
        func_800291A0(0xCE, hi);
        func_80171A04((s32) arg0);
        return;
    }
    func_800291A0(0xCE, 1);
    func_sc03_010_8017EE30();
    func_80171A10((s32) arg0);
}

void func_sc03_010_8017DC20(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 9) {
        func_80171A04(arg0);
        func_8016216C();
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_010_8017DC7C(s32 arg0) {
    if ((func_800291B4(0xCE) & 0xFF) == 2) {
        func_sc03_010_8017EDA8();
    } else {
        func_sc03_010_8017EDD8();
    }
    func_80171928(arg0);
}

void func_sc03_010_8017DCD8(u8 *arg0) {
    D_sc03_010_80183BD0[AF(arg0, u8, 0x216)]();
}

void func_sc03_010_8017DD14(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_010_8017DD44(arg0);
}

void func_sc03_010_8017DD44(s32 arg0) {
    func_sc03_010_8017EE30(arg0);
    func_800D1724((s32) &D_sc03_010_80183A5C);
    func_80171928(arg0);
}

void func_sc03_010_8017DD84(void) {
    func_sc03_010_8017DE84(0);
}

void func_sc03_010_8017DDA4(void) {
    func_sc03_010_8017DE84(1);
}

void func_sc03_010_8017DDC4(void) {
    func_sc03_010_8017DE84(2);
}

void func_sc03_010_8017DDE4(void) {
    func_sc03_010_8017DE84(3);
}

void func_sc03_010_8017DE04(void) {
    func_sc03_010_8017DE84(4);
}

void func_sc03_010_8017DE24(void) {
    func_sc03_010_8017DE84(5);
}

void func_sc03_010_8017DE44(void) {
    func_sc03_010_8017DE84(6);
}

void func_sc03_010_8017DE64(void) {
    func_sc03_010_8017DE84(7);
}

s32 func_sc03_010_8017DE84(s32 arg0) {
    return func_8016EDBC((s32) &D_sc03_010_80183B64, 0x01000000, arg0);
}

void func_sc03_010_8017DEB0(void) {
    func_8016EE40((s32) &D_sc03_010_80183BD8, 0x01000000);
}

void func_sc03_010_8017DED8(u8 *arg0) {
    D_sc03_010_80183C00[AF(arg0, u8, 0x216)]();
}

void func_sc03_010_8017DF14(s32 arg0) {
    func_8002D4C8(0x540, 0);
    func_80171990(arg0);
    func_sc03_010_8017DF54(arg0);
}

s32 func_sc03_010_8017DF54(s32 arg0) {
    s32 var_v0;

    var_v0 = D_800B99DA & 7;
    if (var_v0 == 0) {
        var_v0 = func_8013C9C4((s32) &D_sc03_010_80183BEC);
    }
    return var_v0;
}

void func_sc03_010_8017DF8C(void) {
    func_8016EE40((s32) &D_sc03_010_80183BE4, 0x01000000);
}

void func_sc03_010_8017DFB4(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x2E8;
    D_80126968 = 0x71;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_010_8017E04C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_010_8017E04C((s32) &D_80126948);
}

void func_sc03_010_8017E04C(s32 arg0) {
    D_sc03_010_80183C08[AF(arg0, u8, 4)]();
}

void func_sc03_010_8017E088(u8 *o) {
    SV8 v;
    SV8 c;
    s16 ang;
    s16 r;

    c = D_sc03_010_8019EBC4;
    ang = ratan2(D_80126B5E, D_80126B66) & 0xFFF;
    v = D_80126940;
    c.y = D_80126942;
    r = func_80013294(&v, &c);
    if (r > 0x280) {
        v.x = 0;
        v.y = D_80126942;
        v.z = 0x280;
        func_sc03_010_8017F1B0(ang, &v, &v);
        v.x >>= 3;
        v.y >>= 3;
        v.z >>= 3;
    } else if (r < 0x1C0) {
        v.x = 0;
        v.y = D_80126942;
        v.z = 0x1C0;
        func_sc03_010_8017F1B0(ang, &v, &v);
        v.x >>= 3;
        v.y >>= 3;
        v.z >>= 3;
    }
    func_sc03_010_8017E1EC(o, ang, &v);
}

void func_sc03_010_8017E1EC(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;
    SV a;
    u16 o[4];
    SV r;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
    r.vx = AF(arg0, s16, 0x18);
    r.vy = AF(arg0, s16, 0x1A) + arg1;
    r.vz = AF(arg0, s16, 0x1C);
    func_sc03_010_8017F374(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

void func_sc03_010_8017E3B8(o)
    u8 *o;
{
    s16 d;
    s16 n;
    u8 *p;
    s32 a;
    s32 b;
    s32 c;
    s16 e;
    s32 v;
    s32 x;
    u16 m;
    u16 vol;
    s16 idx;
    u16 t;
    u8 unused[8];
    s16 *q;

    t = AF(o, u16, 0x100);
    AF(o, s16, 0x100) = 0;
    AF(o, u16, 0x102) = t;
    AF(o, s32, 0x1C) = AF(o, s32, 0x1C) + 1;
    d = D_80126B62 - AF(o, u16, 0xA);
    if (d < 0) {
        d = -d;
    }
    if (d > 0x180) {
        return;
    }
    n = AF(o, s16, 0xFC);
    if (n != 0) {
        if ((func_800291B4(0xCE) & 0xFF) >= n) {
            AF(o, u16, 0x5C) = 0;
            return;
        }
        AF(o, u16, 0x5C) = 0x800;
        if (AF(o, s16, 0xFC) != 0) {
            goto snd;
        }
    }
    if (AF(o, s32, 0x1C) & 0x20) {
        return;
    }
snd:
    if (AF(o, s32, 0x1C) & 1) {
        p = func_80132EF4(o, 0x22);
        if (p != 0) {
            func_80129374(p, o);
            if (AF(o, s16, 0xFE) == 0) {
                AF(AF(p, u8 *, 0x20), s16, 0x18) = 0x2C00;
                AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x2000;
            } else {
                AF(AF(p, u8 *, 0x20), s16, 0x18) = 0x4000;
                AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x4000;
            }
        }
    }
    x = ratan2(-D_80126B66, D_80126B5E) - 0x400;
    m = x & 0xFFF;
    a = m;
    if (x & 0x800) {
        a = m | 0xF000;
    }
    x = ratan2(-AF(o, s16, 0xE), AF(o, s16, 6)) - 0x400;
    m = x & 0xFFF;
    b = m;
    if (x & 0x800) {
        b = m | 0xF000;
    }
    x = b - a;
    m = x & 0xFFF;
    c = m;
    if (x & 0x800) {
        c = m | 0xF000;
    }
    if ((s16)c < 0) {
        c = -c;
    }
    e = c;
    if (e < 0x200 && ((u16 *)D_sc03_010_80183C68)[AF(o, s16, 0x70)] != 0) {
        v = ((0x200 - e) >> 2) - (d >> 2);
        if (v < 0) {
            vol = 0x1000;
        } else {
            vol = v | 0x1000;
        }
        idx = AF(o, s16, 0x70);
        func_8002D59C(((u16 *)D_sc03_010_80183C68)[idx], vol, idx & 0xFFFF);
        AF(o, s16, 0x100) = 1;
    }
    if (AF(o, s16, 0xFC) == 0 && (AF(o, s32, 0x1C) & 0x1F) < 8) {
        return;
    }
    if (func_sc03_010_8017E69C(o) != 0) {
        D_80126B98 = 0xC;
        q = &D_80126B96;
        *q |= 0x4000;
    }
}

void func_sc03_010_8017E660(u8 *arg0) {
    D_sc03_010_80183C88[AF(arg0, u16, 2)]();
}

s32 func_sc03_010_8017E69C(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *e;

    e = D_sc03_010_80183C2C + AF(o, s16, 0xFE) * 16;
    a.z = AF(e, u16, 0xC);
    b.z = AF(e, u16, 0xE);
    a.y = b.y = 0;
    a.x = b.x = AF(e, u16, 4);
    if (func_8012DEB8(o, &a, &b) == 0) {
        a.x = b.x = AF(e, u16, 6);
        return func_8012DEB8(o, &a, &b) != 0;
    }
    return 1;
}

void func_sc03_010_8017E744(u8 *o) {
    s32 t;
    s16 v;
    s32 sp[4];

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(t);
    v = D_sc03_010_80183C0C[AF(o, s16, 0x70)];
    AF(o, s16, 0xFC) = (v & 0xF000) >> 12;
    AF(o, s16, 0xFE) = v & 0xF;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = v & 0xFF0;
    if (AF(o, s16, 0xFE) == 2) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x100;
    }
    func_8012B2CC(o);
    sp[1] = 0;
    sp[0] = 0;
    sp[2] = D_sc03_010_80183C5C[AF(o, s16, 0xFE)];
    func_8012B14C(o, sp);
    AF(o, s32, 0x58) = (s32)(D_sc03_010_80183C2C + AF(o, s16, 0xFE) * 16) | 0x40000000;
    AF(o, s32, 0x1C) = AF(o, s16, 0x70);
    func_8012AD50(o);
}

void func_sc03_010_8017E848(u8 *arg0) {
    s32 pad[2];
    s16 temp_a2;

    func_sc03_010_8017E3B8();
    if ((AF(arg0, s16, 0x102) != 0) && (AF(arg0, s16, 0x100) == 0)) {
        temp_a2 = AF(arg0, s16, 0x70);
        func_8002D59C(4, (s32) (*(u16 *)&D_sc03_010_80183C68[(temp_a2 * 2)]), temp_a2 & 0xFFFF);
    }
}

void func_sc03_010_8017E8B0(u8 *arg0) {
    s8 var_v0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc03_010_8017E934();
        return;
    }
    if (D_800B99D8 & 4) {
        var_v0 = ((D_800B99D8 & 3) * 0x30) + 0x3F;
    } else {
        var_v0 = ~((D_800B99D8 & 3) * 0x30);
    }
    D_sc03_010_8019FFA0 = var_v0;
}

void func_sc03_010_8017E934(u8 *o) {
    s32 i;
    s32 q;

    func_800233CC(&D_sc03_010_8019FFA0, 0x20);
    *(B4 *)&D_sc03_010_8019FFA0 = D_sc03_010_8019EBCC;
    D_sc03_010_8019FFA4 = D_sc03_010_8019EBD0;
    func_800233CC(&D_sc03_010_8019FFE0, 0x20);
    D_sc03_010_8019FFE0 = D_sc03_010_8019EBD4;
    D_sc03_010_8019FFE4 = D_sc03_010_8019EBD0;
    for (i = 0; i < 8; i++) {
        q = func_801290DC(0x20, &D_sc03_010_80183C90[i]);
        if (q != 0) {
            AF(q, s16, 0x34) = i + 2;
        }
    }
    AF(o, u16, 0x72) |= 0x1000;
    AF(o, u16, 2)++;
}

void func_sc03_010_8017EA58(u8 *o) {
    if (AF(o, u16, 2) == 0) {
        func_8001CD9C(AF(o, s32, 0x20), &D_sc03_010_8019FFA0);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(o, u16, 2)++;
    } else {
        s32 n = AF(o, s16, 0x34);
        if ((func_800291B4(0xCE) & 0xFF) >= n) {
            AF(AF(o, u8 *, 0x20), void *, 0x20) = &D_sc03_010_8019FFE0;
        } else {
            AF(AF(o, u8 *, 0x20), void *, 0x20) = &D_sc03_010_8019FFA0;
        }
    }
}

void func_sc03_010_8017EB14(u8 *arg0) {
    D_sc03_010_80183CE8[AF(arg0, u16, 2)]();
}

void func_sc03_010_8017EB50(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
}

void func_sc03_010_8017EB58(u8 *o) {
    s32 p;

    func_sc03_010_8017EDD8();
    p = func_8012C194();
    if (p == 0) {
        return;
    }
    AF(o, s32, 0xE0) = p;
    func_80024054(&D_sc03_010_80183CD0, &D_sc03_010_801A0020);
    func_8001CE28(p, &D_sc03_010_801A0020);
    AF(p, s16, 8) = -D_800AF7BC[0] / 2 + 0x10;
    AF(p, s16, 0xA) = -D_800AF7BE / 2 + 0x18;
    AF(p, s16, 0x2C) = 1;
    AF(p, u8, 0x27) = 1;
    p = func_8012C194();
    if (p == 0) {
        return;
    }
    AF(o, s32, 0xDC) = p;
    func_800242D0((s16)(AF(o, s16, 0xFC) / 30), &D_sc03_010_801A0048, 2);
    func_8001CE68(p, &D_sc03_010_801A0048);
    AF(p, s16, 8) = -D_800AF7BC[0] / 2 + 0x18;
    AF(p, s16, 0xA) = -D_800AF7BE / 2 + 0x20;
    AF(p, s16, 0x2C) = 1;
    AF(o, u16, 2)++;
}

void func_sc03_010_8017ECE8(u8 *o) {
    s16 t;

    if (func_8016F1C4() != 0) {
        return;
    }
    t = --AF(o, s16, 0xFC);
    if (t != -1) {
        func_800242D0((s16)((t + 0x1D) / 30), &D_sc03_010_801A0048, 2);
    } else {
        func_800291A0(0xCE, 1);
        func_sc03_010_8017EE30();
        func_sc03_010_8017BEE8();
        func_8016F0AC();
        func_sc03_010_8017DEB0();
    }
}

void func_sc03_010_8017EDA8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0xC7);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 2) = 1;
    }
}

void func_sc03_010_8017EDD8(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_800291B4(0xCE);
    temp_v0 = func_8012E544(0xC7);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0xFC) = D_sc03_010_80183CF4[(temp_s0 & 0xFF)];
    }
}

void func_sc03_010_8017EE30(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;

    temp_v0 = func_8012E544(0xC7);
    if (temp_v0 != 0) {
        temp_a0 = AF(temp_v0, s32, 0xDC);
        if (temp_a0 != 0) {
            func_80016714(temp_a0, 0x38);
        }
        temp_a0_2 = AF(temp_v0, s32, 0xE0);
        if (temp_a0_2 != 0) {
            func_80016714(temp_a0_2, 0x38);
        }
        AF(temp_v0, s16, 2) = 0;
    }
}

void func_sc03_010_8017EE98(s32 arg0) {
    if (func_sc03_010_8017F01C() != 0) {
        func_8012C098(arg0);
        return;
    }
    D_sc03_010_80183D40[AF(arg0, u16, 2)](arg0);
}

void func_sc03_010_8017EEFC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, (s32) &D_sc03_010_80183D08);
        AF(temp_v0, s16, 0x2E) = 0xA0;
        AF(temp_v0, s16, 0x30) = 0x70;
        AF(temp_v0, s16, 8) = 0;
        AF(temp_v0, s16, 0xA) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_8012BF4C((s32) arg0, 0x40);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017EF7C(u8 *arg0) {
    s32 var_v0;

    var_v0 = rsin(AF(arg0, s32, 0x1C) << 5);
    if (var_v0 < 0) {
        var_v0 += 0x1F;
    }
    D_sc03_010_80183D14 = (s8) ((u32) var_v0 >> 5);
    if (func_8012BF10((s32) arg0, 0x40) != 0) {
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017EFE0(s32 arg0) {
    if (func_8012BF10(arg0, 0x40) != 0) {
        func_8012AD44(arg0, 1);
    }
}

s32 func_sc03_010_8017F01C(void) {
    u8 v = func_800291B4(0xCE);
    if (v == 0 || v >= 9) {
        return 1;
    }
    return 0;
}

void func_sc03_010_8017F054(u8 *arg0) {
    D_sc03_010_80183D58[AF(arg0, u16, 2)]();
}

void func_sc03_010_8017F090(u8 *o) {
    u8 *p = (u8 *) func_8012C194();
    u16 t;
    if (p != 0) {
        AF(o, u8 *, 0x20) = p;
        func_8001CB6C(p, &D_sc03_010_80183D4C, 0x2F0, 0x198);
        t = AF(AF(o, u8 *, 0x68), u16, 0xC);
        AF(p, u8, 0x27) = 0x3C;
        AF(p, u16, 0x12) = t;
        func_8012AD50((s32) o);
    }
}

void func_sc03_010_8017F100(u8 *arg0) {
    if (D_80127058 == AF(arg0, s16, 0xFC)) {
        func_8012BF4C((s32) arg0, 0x10);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_010_8017F14C(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) - 0x71) & 0xFFF);
    if (func_8012BEE8() != 0) {
        D_80127058 = 0;
        func_8012AD44((s32) arg0, 1);
    }
}

s32 func_sc03_010_8017F1A8(void) {
    return 0x1F;
}

void func_sc03_010_8017F1B0(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc03_010_8017F214((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc03_010_8017F214(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_010_8017F614(a);
    s = func_sc03_010_8017F558(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc03_010_8017F374(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_010_8017F614(r[0] & 0xFFF);
    cx = func_sc03_010_8017F558(r[0] & 0xFFF);
    sy = func_sc03_010_8017F614(r[1] & 0xFFF);
    cy = func_sc03_010_8017F558(r[1] & 0xFFF);
    sz = func_sc03_010_8017F614(r[2] & 0xFFF);
    cz = func_sc03_010_8017F558(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc03_010_8017F558(u32 a) {
    if (a < 0x400) {
        return D_sc03_010_8019BFD0[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc03_010_8019BFD0[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc03_010_8019BFD0[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc03_010_8019BFD0[0xFFF - a];
    }
}

s32 func_sc03_010_8017F614(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc03_010_8019BFD0[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc03_010_8019BFD0[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc03_010_8019BFD0[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc03_010_8019BFD0[a - 0xC00];
    }
}

void func_sc03_010_8017F6C0(u8 *o) {
    s32 i;

    if (--AF(o, s32, 0x1C) == 0) {
        D_sc03_010_801A005C = (D_sc03_010_801A005C + 1) % 6;
        switch (D_sc03_010_8019C7D0[D_sc03_010_801A005C]) {
        case 0:
            AF(o, s32, 0x1C) = 1;
            break;
        case 1:
            AF(o, s16, 2) = 2;
            AF(o, s32, 0xDC) = 0;
            AF(o, s16, 0xE2) = -0x16D;
            break;
        case 2:
            AF(o, s16, 2) = 3;
            AF(o, s32, 0xDC) = 0;
            AF(o, s16, 0xE2) = -0x361;
            break;
        case 3:
            AF(o, s16, 2) = 4;
            AF(o, s32, 0xDC) = 0;
            AF(o, s16, 0xE2) = -0x561;
            break;
        case 4:
            AF(o, s16, 2) = 7;
            AF(o, s32, 0xDC) = 0x800;
            AF(o, s16, 0xE2) = -0x16D;
            break;
        case 5:
            AF(o, s16, 2) = 6;
            AF(o, s32, 0xDC) = 0x800;
            AF(o, s16, 0xE2) = -0x361;
            break;
        case 6:
            AF(o, s16, 2) = 5;
            AF(o, s32, 0xDC) = 0x800;
            AF(o, s16, 0xE2) = -0x561;
            break;
        }
    }
}

void func_sc03_010_8017F7E0(u8 *o) {
    s32 d;
    s32 a;
    s32 *p;

    D_sc03_010_8019C820[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        func_8012DFD4(o);
    }
    if (AF(o, s32, 0x3C) != AF(o, s32, 8)) {
        d = D_80126B62 - AF(o, s16, 0xA);
        if (d < 0) {
            d = -d;
        }
        if (d < 0x100) {
            d = 0x100;
        } else if (d > 0x200) {
            d = 0;
        } else {
            d = 0x200 - d;
        }
        p = &D_sc03_010_801A0050;
        *p = 0;
        D_sc03_010_801A0058 = 0;
        a = func_8012B6D4(p, &D_80126B5C);
        if (a > 0x800) {
            a = 0x1000 - a;
        }
        if (a < 0x400) {
            a = 0x400 - a;
        } else {
            a = 0;
        }
        d = (d * a * 127) >> 18;
        func_8002D4C8(0x547, (u16)(d | 0x1000));
    } else {
        func_8002D4C8(4, 0x547);
    }
}

void func_sc03_010_8017F920(u8 *o) {
    s32 t;
    s16 *p;

    p = &D_sc03_010_8019C7EC;
    AF(o, s16 *, 0x78) = p;
    if (D_80078EAE == 0) {
        AF(o, s16, 0x76) = *p * 24 / 16;
    } else {
        AF(o, s16, 0x76) = *p;
    }
    AF(o, u16, 0x5C) = D_sc03_010_8019C7EE;
    if (D_sc03_010_8019C7F0 != 0) {
        t = func_8012C1B8();
        AF(o, s32, 0x20) = t;
        if (t == 0) {
            func_8012CAE4(o);
            return;
        }
        func_8001C810(t, D_sc03_010_8019C7F0);
    }
    if (D_sc03_010_8019C7F4 != 0) {
        AF(o, s32, 0x58) = D_sc03_010_8019C7F4 | 0x60000000;
    }
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8040;
    AF(o, u16, 0x5C) = 0xCC00;
    SetScript(o, &D_sc03_010_8019D200);
    AF(o, s16, 0x34) = 1;
    AF(o, s16, 2) = 0xB;
    AF(o, s32, 0x1C) = 0x3C;
    AF(o, u8, 0x75) = 9;
    D_sc03_010_801A005C = -1;
}

void func_sc03_010_8017FA5C(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_010_8017FAD4(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_010_8017FB4C(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x800) {
        AF(arg0, s16, 0x34) = 4;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_010_8017FBC4(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 3;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_010_8017FC3C(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void func_sc03_010_8017FCB4(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc03_010_8017FD28(u8 *arg0) {
    s32 sp10[2];
    s32 sp18[2];
    s32 sp20[2];
    s32 temp_v0;
    s32 t;

    func_8012B0B4((s32) sp10, AF(arg0, s32, 0xDC), 0x100);
    AF(arg0, s32, 8) = sp10[0];
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0xC00) {
        func_8012B0B4((s32) sp18, temp_v0, 0x100);
        AF(arg0, s32, 0x14) = sp18[0];
        func_8012B0B4((s32) sp20, AF(arg0, s32, 0xDC) - 0x18, 0x100);
        t = sp20[0];
        AF(arg0, s32, 0x14) -= t;
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_010_8017FDC8(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
    if (AF(arg0, s16, 0xA) >= (-0x16D - AF(arg0, s16, 0x16))) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s32, 0xDC) = 0xC00;
        AF(arg0, s16, 0xE2) = -0x16D;
    }
}

void func_sc03_010_8017FE14(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;

    func_8012B0B4((s32) &sp10, AF(arg0, s32, 0xDC), 0xF3);
    AF(arg0, s32, 8) = sp10;
    temp_v0 = AF(arg0, s32, 0xDC) + 0x18;
    AF(arg0, s32, 0xDC) = temp_v0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0xE2));
    if (temp_v0 >= 0x1000) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc03_010_8017FE88(u8 *arg0) {
    if (AF(arg0, u8, 0x74) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 1;
    }
}
