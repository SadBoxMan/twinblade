#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_105_8017BE9C(void) {
}

void func_sc03_105_8017BEA4(void) {
}

void func_sc03_105_8017BEAC(void) {
}

void func_sc03_105_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_105_8018DD88[])();
extern void (*D_sc03_105_8018DD90[])();
extern void (*D_sc03_105_8018DE2C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_105_8017E00C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_105_8018DE34[])();
void func_sc03_105_8017E034(void);
extern void func_800D1EBC();
extern u8 D_sc03_105_8018DE40;
extern void func_8016EE40();
extern u8 D_sc03_105_8018DE54;
extern void func_sc03_105_8017E134();
extern void (*D_sc03_105_8018DE58[])();
extern void (*D_sc03_105_8018DED0[])();
extern void (*D_sc03_105_8018E12C[])();
extern void (*D_sc03_105_8018E258[])();
extern void (*D_sc03_105_8018E270[])();
extern void (*D_sc03_105_8018E278[])();
extern void (*D_sc03_105_8018E280[])();
extern void (*D_sc03_105_8018E8DC[])();
extern void (*D_sc03_105_8018F114[])();
extern void func_sc03_105_80189718();
extern void func_sc03_105_8018774C();
extern void (*D_sc03_105_8018F148[])();
extern void (*D_sc03_105_8018F14C[])();
extern void (*D_sc03_105_8018F19C[])();
extern void (*D_sc03_105_8018F1A4[])();
extern void (*D_sc03_105_8018F1AC[])();
extern void (*D_sc03_105_8018F248[])();
extern void func_sc03_105_80189118();
extern void (*D_sc03_105_8018F314[])();
extern void (*D_sc03_105_8018F490[])();
extern s32 func_sc03_105_80189694();
extern void (*D_sc03_105_801B68D0[])();
extern void (*D_sc03_105_801B68E8[])();

extern s32 func_80128ED8();
extern void func_801292C8();
extern s32 D_sc03_105_8018F2F0[];
extern s32 func_8013B7F4();
extern void func_8012AD50();
extern s8 D_sc03_105_801BCBA4;
extern void func_sc03_105_80189E64();

extern s32 func_sc03_105_8017BF34();
extern void func_8012931C();
extern void (*D_sc03_105_8018F194[])();
extern void func_sc03_105_80187F7C();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc03_105_8018F304;

void func_sc03_105_8017BEBC(s32 arg0, s32 arg1) {
    func_sc03_105_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc03_105_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc03_105_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc03_105_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_105_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern u8 D_sc03_105_801BCA0C;
extern void func_sc03_105_8018842C();
extern void func_800233CC();
extern s32 func_8012BEE8();
extern void func_sc03_105_80188574();
extern void func_80016450();
extern void func_8012C218();
extern u8 D_sc03_105_801B6190;
extern s32 D_sc03_105_801BCA50;
extern s32 D_sc03_105_801BCA54;
extern s32 D_sc03_105_801BCA58;
extern s32 D_sc03_105_801BCA5C;
extern s32 D_sc03_105_801BCC94;
extern s32 D_sc03_105_8018F2B0[];
extern void func_sc03_105_80189254();
extern void func_800183E0();
extern void func_80146C3C();
extern s32 func_sc03_105_801896EC();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();

extern void func_sc03_105_8018854C();

extern s32 func_80029504();
extern s32 func_80029178();
extern void func_80029124();
extern void func_800D0C48();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D1E28();
extern void func_80147054();
extern void func_80171928();
extern s32 D_sc03_105_801BA588;
extern u8 D_sc03_105_8018DE68;
extern s32 func_8012913C();
extern void (*D_sc03_105_8018E048[])();
extern s32 func_sc03_105_8017EBA8();
extern void func_8012B2CC();
extern void func_8012B23C();
extern void func_8012B178();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void func_80128EA8();
extern u8 D_sc03_105_8018D398;
extern u8 D_sc03_105_8018D3D8;
extern u8 D_sc03_105_8018E2C8;
extern s32 D_sc03_105_8018E610;
extern s8 D_sc03_105_801BA6B0;
extern s32 func_8012C354();
extern void func_sc03_105_80184458();
extern void func_sc03_105_801824CC();
extern s16 D_sc03_105_801BA5A0;
extern s16 D_sc03_105_801BA5A2;
extern s16 D_sc03_105_801BA5A4;
extern void func_sc03_105_80184604();
extern s32 func_sc03_105_80185218();
extern s32 func_sc03_105_80185680();
extern void func_sc03_105_8018574C();
extern s32 func_sc03_105_8018526C();
extern void func_sc03_105_80185810();
extern s32 func_80016714();
extern u8 D_sc03_105_8018EEB4;
extern void func_80178B18();
extern s32 func_8016F1AC();
extern void func_8014704C();
extern u8 D_sc03_105_8018EFBC;
extern u16 D_sc03_105_8018EDFC;
extern u16 D_sc03_105_8018EDFE;
extern s32 D_sc03_105_801BCBBC;
extern s16 D_sc03_105_8018EE0C[];
extern u8 D_sc03_105_8018EA94;
extern u8 D_sc03_105_801B44A0;
extern void func_8001D0E8();
extern void func_sc03_105_80187A30();
extern u8 D_sc03_105_801B59D8;
extern u8 D_sc03_105_801B6188;
extern void func_8001C810();
extern void func_sc03_105_80188510();
extern u8 D_sc03_105_8018F2F4;
extern s32 func_sc03_105_80189308();

extern u8 D_801202A0;
extern u8 D_sc03_105_801B2A58;
extern u8 D_sc03_105_801B2C40;
extern s32 func_8012C658();
extern s32 func_8012C588();
extern u8 D_sc03_105_8018F398;
extern u8 D_sc03_105_8018F3C0;
extern void func_80017254();
extern void func_800176F0();

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
extern s32 func_8012AD44();

extern s32 func_80132EF4();

extern u8 D_sc03_105_801BA5A8;

extern void func_sc03_105_80183EE8();

extern s32 D_sc03_105_801BCA48;

extern s32 D_80126B64;
extern u8 D_sc03_105_8018E064;
extern u8 D_sc03_105_8018E0C4;
extern u8 D_sc03_105_8018E10C;
extern u8 D_sc03_105_8018E11C;
extern void func_8001CA1C();
s32 func_sc03_105_8017F0C8(s32 arg0, s32 arg1);
extern void func_8012B77C();

extern void func_sc03_105_8018373C();

extern u8 D_sc03_105_8018DE74;


extern u8 D_sc03_105_8018F71C;
extern u8 D_sc03_105_8018F7F8;
s32 func_sc03_105_801890C8(s32 arg0);
extern s32 *D_801274C8;
extern s32 *D_801274CC;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_105_801B67F0;
extern s16 D_sc03_105_801B67F2;
extern s16 D_sc03_105_801B67F4;
extern Blk30 D_sc03_105_801B67F8;
extern s16 D_sc03_105_801B6828;
extern s16 D_sc03_105_801B682A;
extern s16 D_sc03_105_801B682C;
extern Blk30 D_sc03_105_801B6830;
extern s16 D_sc03_105_801B6860;
extern s16 D_sc03_105_801B6862;
extern s16 D_sc03_105_801B6864;
extern Blk30 D_sc03_105_801B6868;
extern s16 D_sc03_105_801B6898;
extern s16 D_sc03_105_801B689A;
extern s16 D_sc03_105_801B689C;
extern Blk30 D_sc03_105_801B68A0;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern SV4 D_sc03_105_801B690C;
extern SV4 D_sc03_105_801B6914;
extern SV4 D_sc03_105_801B691C;
extern SV4 D_sc03_105_801B6924;
extern SV4 D_sc03_105_801B692C;
extern SV4 D_sc03_105_801B6934;
extern SV4 D_sc03_105_801B693C;
extern SV4 D_sc03_105_801B6944;
extern s32 func_8012A758();
extern void func_80015978();

extern u8 D_sc03_105_8018E158;
extern s32 D_sc03_105_8018E148[];
extern void func_8012E8A8();
extern void func_8012EC04();
extern void func_8012F14C();
extern s32 func_sc03_105_8017FA90();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_105_8017E33C();
extern s32 func_80012C6C();
extern s32 func_80012ABC();

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;

extern u8 D_sc03_105_8018DD58[];
extern s32 func_8012C750();

s32 func_sc03_105_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc03_105_8018DD58)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc03_105_8017BFBC(s32 arg0, s32 arg1) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc03_105_8017C010(s32 arg0, s32 arg1, s16 arg2) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s16, 0x70) = arg2;
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc03_105_8017C068(void) {
    s16 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            if (AF(p, s32, 0xCC) != 0) {
                func_80016714(AF(p, s32, 0xCC), 0x38);
            }
            if (AF(p, s32, 0xD0) != 0) {
                func_80016714(AF(p, s32, 0xD0), 0x38);
            }
            func_8012C218((s32) p);
            return;
        }
    }
}

void func_sc03_105_8017C114(u8 *arg0) {
    D_sc03_105_8018DD88[AF(arg0, u16, 2)]();
}

extern s32 func_8012CBF4();
extern s32 func_80013478();
extern s32 func_80013350();
extern void func_sc03_105_80184500();
extern void func_sc03_105_801829CC();
extern s32 func_sc03_105_8018388C();
extern s16 D_sc03_105_8018E81C;
extern s16 D_sc03_105_8018E81E;
extern s16 D_sc03_105_8018E820;
extern s16 D_sc03_105_801BA590;
extern u8 D_sc03_105_8018E7E0;
extern u8 D_sc03_105_8018E7C0;
typedef struct { s16 v[8]; s32 w; } Arg14ABC;
typedef union { s32 w; struct { u16 lo; s16 hi; } h; } FixABC;
typedef struct {
    u8 pad0[4];
    FixABC pos[3];
    u8 pad10[0xC];
    s32 count;
    u8 pad20[0x14];
    u16 sub;
    u8 pad36[0x1A];
    s16 c50;
    s16 s52;
    u8 pad54[0x40];
    s32 i94;
    u8 pad98[0x48];
    s32 fE0;
    s32 nE4;
    u8 padE8[0xC];
    s32 vF4;
} ActABC;
extern u16 D_800B99DA;
extern void func_8012C51C();
extern u8 D_sc03_105_801B1D08;
extern u8 D_sc03_105_8018E61C;
extern void func_sc03_105_80182BD8();
extern void func_sc03_105_80183DA0();
extern s32 func_8012B608();
extern void func_sc03_105_8018383C();
extern s32 func_sc03_105_801839A4();
extern s32 func_sc03_105_8018233C();
extern void func_8012AD80();
extern s32 func_sc03_105_80183A64();
extern void func_sc03_105_80182DCC();
extern u8 D_sc03_105_8018E298;
extern u8 D_sc03_105_8018E288;
extern u8 D_sc03_105_8018E824;
extern u8 D_sc03_105_8018E834;
extern int rand();
extern void func_8012E88C();
extern void func_8012B200();
extern void func_sc03_105_801831E0();
extern s32 func_sc03_105_80183CA4();
extern void func_sc03_105_80183174();
extern u8 D_sc03_105_8018E2A8;
extern s32 D_sc03_105_8018E844[];
extern u8 D_800D3918;
typedef struct { XY p[5]; } XY5;
extern XY5 D_sc03_105_801B822C;
typedef struct { s32 v; } S32R;
extern S32R D_sc03_105_8018E59C[];
extern s32 func_sc03_105_801850D8();
extern u8 D_800AF630;
extern u8 D_sc03_105_8018EDF4;
extern u8 D_sc03_105_801B1DC8;
extern u8 D_sc03_105_801B2410;
extern u8 D_sc03_105_8018EE54[];
extern u8 D_sc03_105_8018EE00;
extern void func_8013C9C4();
extern void func_8012A568();
extern s32 func_801789AC();
extern void func_80178D18();
typedef struct { SV v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrim105;
extern void func_80016ED4();
extern WMtx D_800AF648;

extern SV *D_sc03_105_801BA594;
extern SV D_sc03_105_8018E87C[];
extern V16 D_sc03_105_8018E84C[];
extern s32 func_sc03_105_80183C20();
extern s32 func_sc03_105_80183A98();
extern u8 * func_sc03_105_80183D38();
extern u8 D_sc03_105_8018E2B8;
extern u8 D_sc03_105_8018AAA4;
extern s16 D_sc03_105_8018E88C[];
extern void func_sc03_105_8018364C();
extern void func_sc03_105_801834A4();


typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
extern s16 D_sc03_105_8018DD54; extern s16 D_sc03_105_8018DD48; extern s16 D_sc03_105_8018DD3C; extern u8 D_sc03_105_801B9640; extern u8 *func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc03_105_801B9668; extern s16 D_sc03_105_801B9678; extern s16 D_sc03_105_801B9672; extern s16 D_sc03_105_801B966A; extern s16 D_sc03_105_801B9682; extern s16 D_sc03_105_801B967A; extern s16 D_sc03_105_801B96A6; extern s16 D_sc03_105_801B969E; extern s16 D_sc03_105_801B96B6; extern s16 D_sc03_105_801B96AE; extern s16 D_sc03_105_801B96D0; extern s16 D_sc03_105_801B96E0; extern s16 D_sc03_105_801B96DA; extern s16 D_sc03_105_801B96D2; extern s16 D_sc03_105_801B96EA; extern s16 D_sc03_105_801B96E2; extern s16 D_sc03_105_801B96D4; extern s16 D_sc03_105_801B96A0; extern s16 D_sc03_105_801B966C; extern u8 D_sc03_105_801B9690; extern u8 D_sc03_105_801B9688; extern u8 D_sc03_105_801B9694; extern u8 D_sc03_105_801B968C; extern u8 D_sc03_105_801B9691; extern u8 D_sc03_105_801B9689; extern u8 D_sc03_105_801B9696; extern u8 D_sc03_105_801B9692; extern u8 D_sc03_105_801B968E; extern u8 D_sc03_105_801B968A; extern u8 D_sc03_105_801B96C4; extern u8 D_sc03_105_801B96BC; extern u8 D_sc03_105_801B96C5; extern u8 D_sc03_105_801B96BD; extern u8 D_sc03_105_801B96C9; extern u8 D_sc03_105_801B96C1; extern u8 D_sc03_105_801B96FC; extern u8 D_sc03_105_801B96F8; extern u8 D_sc03_105_801B96F4; extern u8 D_sc03_105_801B96F0; extern u8 D_sc03_105_801B96FD; extern u8 D_sc03_105_801B96F9; extern u8 D_sc03_105_801B96F5; extern u8 D_sc03_105_801B96F1; extern u8 D_sc03_105_801B96FE; extern u8 D_sc03_105_801B96FA; extern u8 D_sc03_105_801B96F6; extern u8 D_sc03_105_801B96F2; extern u8 D_sc03_105_801B96CA; extern u8 D_sc03_105_801B96C6; extern u8 D_sc03_105_801B96C2; extern u8 D_sc03_105_801B96BE; extern s32 D_sc03_105_801B96CC; extern s32 D_sc03_105_801B9698; extern s32 D_sc03_105_801B9700;
extern u8 D_sc03_105_801B9708[];
extern void func_sc03_105_8017DB28();
extern SV8 D_sc03_105_8018DD98[];
extern void func_800139C8();
extern s32 func_8012EFB8();
extern void func_80017E30();
extern s32 func_801465C0();
extern XY D_sc03_105_8018F31C[];
extern u8 D_sc03_105_8018F348[];
extern B4 D_sc03_105_8018F354[];
extern u8 D_sc03_105_8018F380;
extern B4 D_sc03_105_8018F480, D_sc03_105_8018F47C, D_sc03_105_8018F44C, D_sc03_105_8018F448, D_sc03_105_8018F418, D_sc03_105_8018F414, D_sc03_105_8018F3E4, D_sc03_105_8018F3E0, D_sc03_105_8018F3B8;
extern void func_8001CBDC();

void func_sc03_105_8017C150(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc03_105_8018DD54 = 0;
    D_sc03_105_8018DD48 = 0;
    D_sc03_105_8018DD3C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc03_105_801B9640);
        func_8001CE28(m, &D_sc03_105_801B9640);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc03_105_801B9668 = x1;
    D_sc03_105_801B9678 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc03_105_801B966A = D_sc03_105_801B9672 = y1;
    D_sc03_105_801B967A = D_sc03_105_801B9682 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc03_105_801B969E = D_sc03_105_801B96A6 = y2;
    D_sc03_105_801B96AE = D_sc03_105_801B96B6 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc03_105_801B96D0 = x2 + 2;
    D_sc03_105_801B96E0 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc03_105_801B9688 = D_sc03_105_801B9690 = 0xFF;
    D_sc03_105_801B968C = D_sc03_105_801B9694 = 0xFF;
    D_sc03_105_801B9689 = D_sc03_105_801B9691 = 0;
    D_sc03_105_801B9692 = D_sc03_105_801B9696 = 0;
    D_sc03_105_801B968A = D_sc03_105_801B968E = 0;
    D_sc03_105_801B96BC = D_sc03_105_801B96C4 = 0xFF;
    D_sc03_105_801B96D2 = D_sc03_105_801B96DA = y + 4;
    D_sc03_105_801B96E2 = D_sc03_105_801B96EA = y + 0xB;
    D_sc03_105_801B96BD = D_sc03_105_801B96C5 = 0xFF;
    D_sc03_105_801B96C1 = D_sc03_105_801B96C9 = 0xFF;
    D_sc03_105_801B96F0 = D_sc03_105_801B96F4 = D_sc03_105_801B96F8 = D_sc03_105_801B96FC = 0x40;
    D_sc03_105_801B96F1 = D_sc03_105_801B96F5 = D_sc03_105_801B96F9 = D_sc03_105_801B96FD = 0x40;
    D_sc03_105_801B96F2 = D_sc03_105_801B96F6 = D_sc03_105_801B96FA = D_sc03_105_801B96FE = 0x40;
    D_sc03_105_801B96BE = D_sc03_105_801B96C2 = D_sc03_105_801B96C6 = D_sc03_105_801B96CA = 0;
    D_sc03_105_801B966C = D_sc03_105_801B96A0 = 2;
    D_sc03_105_801B96D4 = 4;
    D_sc03_105_801B9698 = D_sc03_105_801B96CC = 0;
    D_sc03_105_801B9700 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc03_105_8018DD54 = 2;
    AF(o, s16, 2)++;
}

typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
typedef struct { s32 a, b; } P8;
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
typedef struct { s32 a, b; } W2;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern u8 D_sc03_105_801B82E0;
extern u8 D_sc03_105_801B82E4;
extern u8 D_sc03_105_801BCA08;
extern void func_8001CD50();

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
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern V16 D_sc03_105_801B6818;
extern s32 D_800A5EB0;
extern V16 D_sc03_105_801B6850;
extern s32 D_800A5E90;
extern SV4 D_sc03_105_801B68F8;
extern void func_sc03_105_80189DAC();
extern s32 func_8012E778();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u8 D_sc03_105_801BCBA0[];
extern void func_sc03_105_8018A1F0();
extern s32 func_sc03_105_8018A278();

extern s32 func_sc03_105_801851E0();
extern void func_sc03_105_80185660();
extern void func_8013373C();
extern s32 SetScript();
extern s16 D_sc03_105_8018EE02;
extern u8 D_sc03_105_8018EE04;
extern u8 D_sc03_105_8019CD2C;
extern u8 D_sc03_105_8018E9AC;
extern u8 D_sc03_105_8018EAB4;
extern void func_sc03_105_80188BA8();

extern void *D_80126B78;
extern s32 D_80126B90;
extern u8 D_801152A8;
extern s32 func_80135888();
extern void func_8012F568();
extern void func_sc03_105_80185FB4();
extern SV8 D_sc03_105_801BC9E0;
extern s16 D_sc03_105_801BC9E2;
extern s16 D_sc03_105_801BC9E4;
extern SV8 D_sc03_105_801BC9D8;
extern s16 D_sc03_105_801BC9DA;
extern s16 D_sc03_105_801BC9DC;
extern SV8 D_sc03_105_8018ED84;
extern SV8 D_sc03_105_8018ED8C;
extern u8 D_8012694C[];
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern s32 func_80129CF8();
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s16 D_80126B66;
extern s32 func_8013361C();

extern s32 D_sc03_105_8018E894[];
extern s32 func_80174774();
extern s32 func_8012BE54();
extern void func_sc03_105_80188A94();
extern SV8 D_80126940;
extern s32 func_8012E544();

extern s32 func_8012CBA4();
extern s32 func_sc03_105_8017F018();
extern s32 func_8012C438();
extern u8 D_sc03_105_8018F1CC;
extern s16 D_sc03_105_8018F200;
extern s16 D_sc03_105_8018F202;
extern s16 D_sc03_105_8018F204;
extern u8 D_sc03_105_8018F208;
extern u8 D_sc03_105_8018F209;
extern u8 D_sc03_105_8018F20A;
extern void func_8001CD9C();
extern void func_8012B260();
extern void func_8012E9C0();
extern void FaceHelper();
extern s32 func_80135004();

extern u8 * func_sc03_105_8017E5C8();
extern s32 func_sc03_105_80185380();
extern u8 D_sc03_105_8018E47C;


extern u8 D_sc03_105_8018E4DC;
extern u8 D_sc03_105_8018E9BC;
extern u8 D_sc03_105_8018EAA4;
extern s32 D_80126B5C;
extern s32 D_sc03_105_8018E054[];
extern u8 D_sc03_105_8018DED8;
extern u8 D_sc03_105_8018DF98;
extern u8 D_sc03_105_8018DF38;
extern u8 D_sc03_105_8018DFE0;
extern u8 D_sc03_105_8018E028;

extern s32 func_8001AAA0();
extern void func_8002AC00();
extern u8 D_sc03_105_801B3158;
extern u8 D_sc03_105_801B3640;
extern void func_sc03_105_801874D0();
extern void func_sc03_105_80187434();
extern WMtx D_800AE620;
extern void RotTransSV();
extern void func_80020DA4();
extern void func_80020F34();
extern void func_80016EF8();
extern s16 D_sc03_105_801BA5E8;
extern s16 D_sc03_105_801BA5EA;
extern s16 D_sc03_105_801BA5EC;
extern SV8 D_sc03_105_801BA6A0;
extern s32 rcos();
extern void func_sc03_105_8017FAE8();
extern void RotMatrixZ();

extern u8 D_sc03_105_801B2E28;
extern u8 D_sc03_105_801B2FC0;
extern u8 D_sc03_105_8018EACC;
extern u8 D_sc03_105_8018EC24;


void func_sc03_105_8017C43C(u8 *arg0) {
    s16 cur = AF(arg0, s16, 0x108);
    s32 tgt = *AF(arg0, s16 *, 0xD4);
    s32 max = *AF(arg0, s16 *, 0xD8);
    s32 half;
    s16 n;

    if (cur != tgt) {
        if (tgt < cur) {
            AF(arg0, s16, 0x108) = cur - (max * 3) / AF(arg0, s16, 0x70);
            if (AF(arg0, s16, 0x108) < tgt) {
                AF(arg0, s16, 0x108) = tgt;
            }
            ((XY *)&D_sc03_105_8018DD3C)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((XY *)&D_sc03_105_8018DD3C)->x == 0 && tgt != 0) {
                ((XY *)&D_sc03_105_8018DD3C)->x = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((XY *)&D_sc03_105_8018DD3C)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc03_105_8018DD48 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc03_105_8018DD54 = D_sc03_105_8018DD48 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[2].g = c;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[0].g = c;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[3].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[2].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[1].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[0].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[3].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[2].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[1].b = c;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[0].b = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((XY *)&D_sc03_105_8018DD3C)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc03_105_801B9668)[0].p[1].x = ((QuadArg *)&D_sc03_105_801B9668)[0].p[0].x + n;
        ((QuadArg *)&D_sc03_105_801B9668)[0].p[3].x = ((QuadArg *)&D_sc03_105_801B9668)[0].p[1].x - 4;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[3].g = v;
        ((QuadArg *)&D_sc03_105_801B9668)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc03_105_801B9668)[0].c[1].g;
        *g = ((QuadArg *)&D_sc03_105_801B9668)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc03_105_801B9668)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc03_105_801B9668)[1].p[0].x = x;
        ((QuadArg *)&D_sc03_105_801B9668)[1].p[1].x = ((QuadArg *)&D_sc03_105_801B9668)[0].p[0].x + n;
        ((QuadArg *)&D_sc03_105_801B9668)[0].p[1].x = x;
        ((QuadArg *)&D_sc03_105_801B9668)[1].p[2].x = xm;
        ((QuadArg *)&D_sc03_105_801B9668)[0].p[3].x = xm;
        ((QuadArg *)&D_sc03_105_801B9668)[1].p[3].x = ((QuadArg *)&D_sc03_105_801B9668)[1].p[1].x - 4;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[3].r = -v;
        ((QuadArg *)&D_sc03_105_801B9668)[1].c[1].r = -v;
        func_800176F0(&((QuadArg *)&D_sc03_105_801B9668)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc03_105_801B9668)[2].p[3].x;
        ((QuadArg *)&D_sc03_105_801B9668)[2].p[1].x = ((QuadArg *)&D_sc03_105_801B9668)[2].p[0].x + D_sc03_105_8018DD48;
        *p = ((QuadArg *)&D_sc03_105_801B9668)[2].p[1].x - 4;
    }
    func_800176F0(&((QuadArg *)&D_sc03_105_801B9668)[0]);
    func_800176F0(&((QuadArg *)&D_sc03_105_801B9668)[2]);
}

void func_sc03_105_8017C8D0(u8 *obj) {
    s32 tmp[3];
    volatile SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 w2;
    u32 *t;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    c = AF(obj, ChunkDCM *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        y = c->y;
        xl = c->x;
        xh = c->x >> 16;
        yl = y;
        yh = y >> 16;
        x = c->z;
        y = x >> 16;
        box[0].x = xl; box[0].y = yl;
        box[1].x = xh; box[1].y = yl;
        box[2].x = xl; box[2].y = yl;
        box[3].x = xh; box[3].y = yl;
        box[4].x = xl; box[4].y = yh;
        box[5].x = xh; box[5].y = yh;
        box[6].x = xl; box[6].y = yh;
        box[7].x = xh; box[7].y = yh;
        box[0].z = x;
        box[1].z = x;
        box[4].z = x;
        box[5].z = x;
        box[2].z = y;
        box[3].z = y;
        box[6].z = y;
        box[7].z = y;
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
        gte_stszotz(&g.zbox);
        if (g.zbox > zlim) continue;

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
        if ((s16)h < -120 || (s16)l > 120) continue;

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
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
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
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m, m2;
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
                if (yh < -120 || yl > 120) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type == 7) g.z = m + 0x200;
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
            { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
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
                zc = zb;
                if (zc < za) zc = za;
                g.z = zc;
                otp = (u32 *)(((zc >> 2) << 2) + (u32)ot);
                AF(pk, u32, 4) = poly[0];
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x18;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb, zc;
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
                if (yh < -120 || yl > 120) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type == 3) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
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
    g_PrimNext = pk;
}

void func_sc03_105_8017D7B0(u8 *arg0) {
    D_sc03_105_8018DD90[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017D7EC(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc03_105_801B9708 + i * 0x1D0;
        AF(b, s16, 0) = 0;
        AF(b, s16, 2) = i << 9;
        AF(b, s32, 0xC) = (rand() & 0xF) << 16;
        AF(b, s32, 4) = ((rand() & 0xF) << 15) + 0x10000;
        AF(b, s32, 8) = ((rand() & 0xF) << 12) + 0x8000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            AF(e, s16, 0) = 0;
            AF(e, s16, 2) = (rand() & 3) + 4;
            AF(e, s16, 8) = (j << 8) + (rand() & 0xF) * 56;
            AF(e, s16, 0xA) = (rand() & 0xF) << 8;
            AF(e, s32, 0x14) = (rand() & 0xF) << 13;
            AF(e, s32, 0xC) = ((rand() & 0xF) << 14) + 0x10000;
            AF(e, s32, 0x10) = ((rand() & 0xF) << 12) + 0x8000;
            AF(e, s16, 4) = 0x200;
            AF(e, s16, 6) = (rand() & 0xF) << 4;
            AF(e, s32, 0x18) = ((rand() & 3) << 5) + 0x40;
        }
    }
    AF(o, s16, 2)++;
}

void func_sc03_105_8017D994(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc03_105_801B9708 + i * 0x1D0;
        if (AF(b, s16, 0) == 0) AF(b, s32, 0xC) += 0x10000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            switch (AF(e, s16, 0)) {
            case 0:
                AF(e, s32, 0xC) += AF(e, s32, 0x10);
                AF(e, s32, 0x14) += AF(e, s32, 0xC);
                AF(e, s16, 2)--;
                if (AF(e, s16, 2) == -1) AF(e, s16, 0)++;
                AF(e, s16, 4) += AF(e, s16, 6);
                AF(e, s16, 0xA) += 0x10;
                break;
            case 1:
                AF(e, s16, 4) += 0x80;
                AF(e, s32, 0x18) -= 8;
                if (AF(e, s32, 0x18) < 0) { AF(e, s32, 0x18) = 0; AF(e, s16, 0)++; }
                break;
            case 2:
                n++;
                break;
            }
        }
        func_sc03_105_8017DB28(o, b);
    }
    if (n == 0x80) func_80146C3C(o);
}

void func_sc03_105_8017DB28(u8 *o, u8 *b) {
    Q40 q;
    SMtx m;
    SV8 pos;
    SV8 rot;
    SV8 out;
    SV8 v[4];
    s32 k;
    u8 *e;
    s32 a;
    Q40 *qp;

    func_80015978(o + 4, &pos);
    rot.x = 0;
    rot.y = 0;
    rot.z = AF(b, s16, 0xE);
    func_800139C8(AF(b, s16, 2), &rot, &rot);
    if (func_8012EFB8(&pos, &pos) & ~0x1000) return;
    q.p[0].z = 3;
    q.flag = 0x12;
    q.code = 0x50000000;
    q.uv[0] = 0x870;
    q.uv[1] = 0x1A8;
    q.uv[2] = 0x88F;
    q.uv[3] = 0x1A8;
    q.uv[4] = 0x870;
    q.uv[5] = 0x1C7;
    q.uv[6] = 0x88F;
    q.uv[7] = 0x1C7;
    pos.x += rot.x;
    pos.y += rot.y;
    pos.z += rot.z;
    qp = &q;
    for (k = 0; k < 16; k++) {
        e = b + 0x10 + k * 0x1C;
        a = AF(e, s32, 0x18);
        qp->col = a | (a << 16 | a << 8);
        rot.x = rot.y = rot.z = AF(e, s16, 4);
        func_80017DC4(&rot, &m);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0xA);
        func_80017E30(&rot, &m);
        ApplyMatrixSV(&m, &D_sc03_105_8018DD98[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc03_105_8018DD98[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc03_105_8018DD98[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc03_105_8018DD98[3], &v[3]);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0x16);
        func_800139C8(AF(e, s16, 8), &rot, &out);
        out.x += pos.x;
        out.z += pos.y;
        qp->p[0].x = out.x + v[0].x;
        qp->p[0].y = out.z + v[0].y;
        qp->p[1].x = out.x + v[1].x;
        qp->p[1].y = out.z + v[1].y;
        qp->p[2].x = out.x + v[2].x;
        qp->p[2].y = out.z + v[2].y;
        qp->p[3].x = out.x + v[3].x;
        qp->p[3].y = out.z + v[3].y;
        func_80016ED4(qp);
    }
}

void func_sc03_105_8017DDE0(void) {
    D_801274C8 = &D_sc03_105_8018F71C;
    D_801274CC = &D_sc03_105_8018F7F8;
    func_sc03_105_801890C8(0);
}

void func_sc03_105_8017DE20(u8 *arg0) {
    D_sc03_105_8018DE2C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_105_8017DE5C(u8 *arg0) {
    func_sc03_105_8017E00C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_105_8017DEA0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_105_8017DEC4(u8 *arg0) {
    D_sc03_105_8018DE34[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_105_8017DF00(u8 *arg0) {
    func_sc03_105_8017E034();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_105_8017DF40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = func_80029504(arg0, arg1, arg2);
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        if (temp_a0 == 0x258) {
            if (!(func_80029178(0x132) & 0xFF)) {
                func_80029124(0x132, 1);
                func_800D0C48(1);
            }
        }
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_105_8017DFEC(void) {
    func_800D1EBC();
}

void func_sc03_105_8017E00C(void) {
    func_8016EE40((s32) &D_sc03_105_8018DE40, 0x01000000);
}

void func_sc03_105_8017E034(void) {
    func_8016EE40((s32) &D_sc03_105_8018DE54, 0x01000000);
}

void func_sc03_105_8017E05C(s32 arg0) {
    func_80147054(arg0);
    func_80171928(arg0);
}

void func_sc03_105_8017E08C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x320;
    D_8012696A = 0x800;
    D_sc03_105_801BA588 = 0;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0xB0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_105_8017E134, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_105_8017E134((s32) &D_80126948);
}

void func_sc03_105_8017E134(s32 arg0) {
    D_sc03_105_8018DE58[AF(arg0, u8, 4)]();
}

void func_sc03_105_8017E170(s32 arg0, s32 arg1) {
    D_sc03_105_801BA588 = arg0;
}

void func_sc03_105_8017E180(u8 *o) {
    SV8 a;
    SV8 b;
    s32 p;
    s32 d;

    a = D_80126940;
    p = func_8012E544(0x14B);
    if (p != 0) {
        func_80015978(p + 4, &b);
        if (b.x < -0x200) {
            b.x = -0x200;
        }
        if (b.x > 0x200) {
            b.x = 0x200;
        }
    } else {
        b = D_80126940;
    }
    if (a.x < -0x108) {
        a.x = -0x108;
    }
    if (a.x > 0x108) {
        a.x = 0x108;
    }
    a.y = -0x102;
    a.z = -0x200;
    d = a.x - b.x;
    if (d < 0) {
        d = b.x - a.x;
    }
    AF(o, s32, 0x14) = (d * 0x280) / 1024 + 0x320;
    a.x -= (a.x * (s16)(AF(o, s32, 0x10) - 0x320)) / 640;
    switch (D_sc03_105_801BA588) {
    case 0:
        AF(o, s16, 0x20) = 0;
        AF(o, s16, 0x30) = -0xB0;
        break;
    case 1:
        AF(o, s16, 0x20) = 0xE3;
        AF(o, s16, 0x30) = -0x40;
        break;
    }
    func_sc03_105_8017E33C(o, &a);
}

void func_sc03_105_8017E33C(u8 *arg0, u8 *arg1) {
    FeMtx m;
    FeSv v;
    FeSv o;

    AF(arg0, s32, 8) = (s16) func_80012C6C(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) func_80012C6C(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = func_80012ABC(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = func_80012ABC(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = func_80012ABC(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = func_80012C6C(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = func_80012C6C(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = func_80012C6C(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    RotMatrixZYX(arg0 + 0x18, &m);
    m.t[0] = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    m.t[1] = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    m.t[2] = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    v.x = 0;
    v.y = 0;
    v.z = AF(arg0, s32, 0x10);
    func_8012F14C(&m, &v, &o);
    AF(arg0, s32, 0x3C) = o.x;
    AF(arg0, s32, 0x40) = o.y;
    AF(arg0, s32, 0x44) = o.z;
}

s32 func_sc03_105_8017E4D4(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_a1;

    temp_v0 = func_8012913C(0x39);
    if (temp_v0 == 0) {
        return 0;
    }
    temp_a1 = AF(temp_v0, void *, 0x20);
    AF(temp_a1, s16, 2) = 2;
    AF(temp_a1, s32 *, 0x20) = &D_sc03_105_8018DE68;
    AF(temp_a1, u8, 0x27) = 0x74;
    AF(temp_a1, s16, 0x28) = 0x3C5;
    AF(temp_a1, s16, 0x2A) = 0x1E0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x0C000040);
    AF(temp_a1, s32, 0x34) = (s32) (AF(arg0, s32, 0x20) + 0x34);
    AF(temp_a1, u16, 0x2E) = (u16) AF(arg1, u16, 0);
    AF(temp_a1, u16, 0x30) = (u16) AF(arg1, u16, 2);
    AF(temp_a1, u16, 0x32) = (u16) AF(arg1, u16, 4);
    if (arg2 != 0) {
        AF(temp_a1, s16, 0x1A) = 0x800;
        AF(temp_a1, s16, 0x18) = 0x800;
    } else {
        AF(temp_a1, s16, 0x18) = -0x800;
        AF(temp_a1, s16, 0x1A) = 0x800;
    }
    AF(temp_v0, void *, 0x2C) = arg0;
    return temp_v0;
}

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s16 a; u16 b; } P4;
typedef struct { u8 pad[6]; u16 f6; } OH06;
typedef struct { u8 pad[0x12]; s16 f12; } OH12;
typedef struct { u8 pad[0x76]; s16 f76; } OH76;
typedef struct { SV8 a; u8 rest[12]; } E20;

extern u8 D_sc03_105_801BCA60[];

extern s16 D_sc03_105_801BA59A;
extern s16 D_sc03_105_801BA59C;
extern void func_sc03_105_80183768();

extern u8 D_801152B0;
extern s32 func_sc03_105_80183C6C();


extern u8 D_sc03_105_801BA734[];
void func_sc03_105_8017F140(s32 arg0);

extern u8 D_sc03_105_8018E680[];
extern u8 *D_sc03_105_801BA6A8;
extern u8 *D_sc03_105_801BA6AC;
extern s32 func_8012D5E4();
extern u8 D_sc03_105_8018E038;
extern s16 D_80126B96;
extern u16 D_sc03_105_801BA628[];
extern u16 D_sc03_105_801BA62A;
extern u16 D_sc03_105_801BA62C;
extern SV8 D_sc03_105_8018F140;

extern u8 D_sc03_105_8018F04C;
extern s32 D_sc03_105_8018F25C[];
extern s32 func_8012CEB0();
extern s32 func_8012B0B4();
extern WMtx D_sc03_105_801BC9B4;
extern s16 D_sc03_105_801BC9C4;

extern s32 rsin();
extern Arg8C51C D_sc03_105_8018F758[];
extern s32 func_8012BA10();
extern s32 func_sc03_105_8017EBF8();

extern u16 D_sc03_105_8018E7A0[];
extern SV6 D_sc03_105_801BA6B4[];
extern SV8 D_sc03_105_8018E138[];
extern s32 func_801290DC();
extern u8 D_sc03_105_8018DE5C;
extern u8 D_sc03_105_8018DE80;
extern SV8 D_sc03_105_8018E8AC[];
extern SV8 D_sc03_105_8018F254;
extern void func_8016B3F4();
void func_sc03_105_80188B64(s32 arg0);
extern u16 D_sc03_105_8018F154[];
extern u16 D_sc03_105_801BC9E8[];
extern u8 D_sc03_105_8018F174;

u8 *func_sc03_105_8017E5C8(s32 arg) {
    u8 *p;
    u8 *q;
    s16 r;

    p = (u8 *)func_801290DC(0x38, arg);
    if (p == 0) {
        return 0;
    }
    q = AF(p, u8 *, 0x20);
    AF(q, void *, 0x20) = &D_sc03_105_8018DE5C;
    AF(q, u8, 0x27) = 0x66;
    r = rand() % 4096 + 0x800;
    AF(q, s16, 0x18) = AF(q, s16, 0x1A) = r;
    AF(q, s32, 4) |= 0x50000000;
    func_80128EA8(q, p + 0x24, &D_sc03_105_8018DE80);
    AF(p, s32, 0x14) = 0xFFF80000;
    return p;
}

void func_sc03_105_8017E67C(s32 arg0, s32 arg1) {
    func_8012931C(arg0, arg1);
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_801292C8(arg0);
    }
}

void func_sc03_105_8017E6C0(u8 *o) {
    u8 *p;

    p = AF(o, u8 *, 0x2C);
    if (AF(p, u16, 0) == 0) {
        func_801292C8(o);
    }
    if (AF(AF(p, u8 *, 0x20), TB, 4).top) {
        AF(AF(o, u8 *, 0x20), TB, 4).top = 1;
    } else {
        AF(AF(o, u8 *, 0x20), TB, 4).top = 0;
    }
}

void func_sc03_105_8017E758(u8 *arg0) {
    D_sc03_105_8018DED0[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017E794(u8 *arg0) {
    if (func_sc03_105_8017EBA8() == 0) {
        D_sc03_105_8018E048[AF(arg0, u16, 2)](arg0);
    }
}

void func_sc03_105_8017E7E8(u8 *o) {
    s32 v[4];
    s32 r;
    u8 *m;
    s16 f;
    s16 k;
    s32 t;
    s32 rr;

    m = (u8 *)func_8012C1B8();
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0x20) = m;
    f = AF(o, s16, 0x70);
    if (!(f & 0x8000)) {
        if (f & 0xF) {
            func_8001CA1C(m, &D_sc03_105_8018DED8);
            SetScript(o, &D_sc03_105_8018DF98);
            t = rand();
            AF(o, s32, 0x1C) = 8;
            AF(o, s16, 0xFE) = t % 9 + 8;
            v[0] = D_80126B5C + D_sc03_105_8018E054[AF(o, u16, 0x70) & 0xF];
            v[1] = 0xFEFE0000;
            v[2] = D_80126B64;
            AF(&v[1], s16, 2) -= 0x40;
            func_8012B77C(&r, o + 4, v);
            rr = r;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = rr;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = rr >> 16;
            func_8012B2CC(o);
            func_8012B178(o, AF(o, s32, 0xDC));
            AF(m, s16, 0x1A) = 0x1800;
            AF(m, s16, 0x18) = 0x1800;
            AF(o, u16, 2) += 1;
        } else {
            func_8001CA1C(m, &D_sc03_105_8018DF38);
            SetScript(o, &D_sc03_105_8018DFE0);
            AF(o, s32, 0x48) = 0xC000;
            AF(o, s16, 0xAE) = -1;
            AF(m, s16, 0x1A) = 0x1800;
            AF(m, s16, 0x18) = 0x1800;
            AF(o, u16, 2) += 1;
        }
    } else {
        func_8001CA1C(m, &D_sc03_105_8018DF38);
        SetScript(o, &D_sc03_105_8018DFE0);
        AF(o, s16, 2) = 2;
        AF(o, s16, 0xAE) = -1;
        AF(o, s16, 0x100) = AF(o, s32, 0xDC);
        AF(m, s16, 0x1A) = 0x2000;
        AF(m, s16, 0x18) = 0x2000;
    }
    AF(m, s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(o, s32, 0x58) = ((s32)&D_sc03_105_8018E028 | 0x20000000) | 0x40000000;
    AF(o, u16, 0x5C) |= 0x8000;
}

void func_sc03_105_8017EA24(u8 *o) {
    if (AF(o, s16, 0xA) >= 0x10) {
        func_8012C218(o);
        return;
    }
    if (AF(o, u16, 0x70) & 0xF) {
        if (func_8012BEE8(o) != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012BA10(o, AF(o, s16, 0xFE));
            func_8012B178(o, AF(o, s32, 0xDC));
        }
        if (func_8012CBF4(o) != 0) {
            func_sc03_105_8017F140((s32)o);
        } else {
            func_sc03_105_8017EBF8(o, 0x18);
        }
    } else if (func_8012CBF4(o) & 0x2000) {
        func_sc03_105_8017F140((s32)o);
    } else {
        func_sc03_105_8017EBF8(o, 0x20);
    }
}

void func_sc03_105_8017EB08(u8 *o) {
    s32 w;
    s16 *q;

    func_8012B0B4(&w, (s16)(AF(o, u16, 0x100) += 0x40), AF(o, s16, 0xFC));
    AF(o, s16, 6) = AF(o, s16, 0x88) + w;
    AF(o, s16, 0xE) = AF(o, s16, 0x8C) + (w >> 16);
    if (func_8012D5E4(o, &D_sc03_105_8018E038, &D_sc03_105_8018E038 + 8, 0xA) == 1) {
        q = &D_80126B96;
        *q |= 0x4200;
    }
}

s32 func_sc03_105_8017EBA8(u8 *o) {
    if (!(AF(o, u16, 0x5C) & 1) || AF(o, u16, 0x5E) == 0x24) {
        return 0;
    }
    func_sc03_105_8017F140((s32)o);
    return 1;
}

s32 func_sc03_105_8017EBF8(u8 *o, s32 a1) {
    s16 *q;

    if (func_8012D5E4(o, (s32)&D_sc03_105_8018E038, (s32)(&D_sc03_105_8018E038 + 8), a1) == 1) {
        q = &D_80126B96;
        *q |= 0x4200;
        func_8012C218((s32)o);
        return 1;
    }
    return 0;
}

void func_sc03_105_8017EC5C(u8 *arg0) {
    D_sc03_105_8018E12C[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017EC98(s32 arg0) {
    s32 v[4];
    s16 rot[4];
    s32 w[4];
    s32 m[8];
    s32 r;
    s32 o;
    s16 k;
    u8 *p;

    o = func_8012C1B8(arg0);
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    func_8001CA1C(o, &D_sc03_105_8018E064);
    SetScript(arg0, &D_sc03_105_8018E0C4);
    k = -0x3000;
    if (AF(arg0, s16, 0xFC) < 0) {
        k = 0x3000;
    }
    AF(o, s16, 0x18) = k;
    AF(o, s16, 0x1A) = AF(arg0, s32, 0xDC);
    AF(o, s32, 4) |= 0x50000000;
    AF(o, u16, 0x2C) |= 0x10;
    AF(arg0, u16, 0x5C) = 0x8000;
    AF(arg0, s16, 0xAE) = -1;
    if (AF(arg0, u16, 0x70) & 1) {
        func_sc03_105_8017F0C8(arg0, -0xC0000);
        AF(arg0, u16, 0x34) += 1;
    } else {
        v[0] = AF(arg0, s32, 4);
        v[1] = 0xFEFE0000;
        v[2] = D_80126B64;
        func_8012B77C(&r, arg0 + 4, v, D_80126B64);
        rot[2] = 0;
        w[1] = 0;
        w[0] = 0;
        w[2] = -0x8000;
        rot[0] = r;
        rot[1] = r >> 16;
        RotMatrixZYX(rot, m);
        ApplyMatrixLV(m, w, arg0 + 0x44);
    }
    if (AF(arg0, s16, 0xFC) < 0) {
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_105_8018E10C | 0x40000000);
    } else {
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_105_8018E11C | 0x40000000);
    }
    AF(arg0, u16, 2) += 1;
}

void func_sc03_105_8017EE34(u8 *o) {
    Arg8C51C d;

    if (AF(o, u16, 0x34) == 0) {
        if (func_8012CBF4(o) & 0x2000) {
            func_sc03_105_8017F0C8((s32)o, -0xC0000);
            AF(o, s32, 0x1C) = 4;
            AF(o, s32, 0xE0) = 3;
            AF(o, s16, 0xFE) = AF(o, s16, 6);
            AF(o, s16, 0x100) = AF(o, s16, 0xA);
            AF(o, s16, 0x102) = AF(o, s16, 0xE);
            AF(o, u16, 0x34)++;
            if (AF(o, s16, 0xFC) < 0) {
                func_8002D4C8(0xC07, 0);
            }
        }
    } else {
        if (func_8012BEE8(o) == 1 && AF(o, s32, 0xE0) != 0) {
            AF(o, s32, 0xE0)--;
            AF(o, s32, 0x1C) = 3;
            d.x = AF(o, s16, 0xFE);
            d.y = AF(o, s16, 0x100);
            d.z = AF(o, s16, 0x102);
            d.a = 0x171;
            d.b = 1;
            d.c = 0;
            d.d = 0x7FFF;
            d.e = AF(o, s16, 0xFC);
            d.w = (AF(o, s32, 0xE0) << 11) + 0x1000;
            func_8012C51C(&d, o);
        }
        if (func_8012CBA4(o) & 0x8000) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, s16, 0x34) = 0;
            AF(o, u16, 2)++;
            return;
        }
    }
    func_sc03_105_8017F018(o);
}

void func_sc03_105_8017EF94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    if (AF(arg0, u16, 0x34) == 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) + 0x300);
        if (func_8012BEE8((s32) arg0, arg1, arg2, arg3) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (func_8012BEE8((s32) arg0, arg1, arg2, arg3) != 0) {
        func_8012C218((s32) arg0);
    }
}

s32 func_sc03_105_8017F018(u8 *o) {
    SV8 a;
    SV8 b;

    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_105_8018E138[0], &a);
    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_105_8018E138[1], &b);
    if (func_80135888(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 0x4201, 0, 0x30, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

s32 func_sc03_105_8017F0C8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
    func_8012B2CC(arg0, arg1);
    func_8012B23C(arg0);
    func_8012B178(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x10) / 24;
    AF(arg0, s32, 0x44) = temp_v0;
    return temp_v0;
}

void func_sc03_105_8017F140(s32 arg0) {
    s32 temp_ret;
    s32 temp_v0;

    temp_v0 = func_80132EF4(arg0, 0x22);
    if (temp_v0 != 0) {
        temp_ret = rand();
        AF(temp_v0, s16, 0x34) = (s16) ((((temp_ret % 3) << 0xC) + 0x2000) | 2);
        AF(temp_v0, s32, 0x14) = (s32) (0xFFFE0000 - ((rand() % 3) << 0x10));
    }
    func_8012C218(arg0);
}

void func_sc03_105_8017F1F8(u8 *arg0) {
    D_sc03_105_8018E258[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017F234(s32 arg0) {
    s32 buf[8];
    SV8 in;
    SV8 out;
    s32 o;
    s32 c;
    s16 r;
    s32 k;

    o = func_8012C1B8();
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(o, D_sc03_105_8018E148[AF(arg0, u16, 0x70) & 0xF]);
    AF(arg0, s32, 0x20) = o;
    if (!(AF(arg0, u16, 0x70) & 0x4000)) {
        AF(o, s32, 4) |= 0x40;
        if (AF(arg0, u16, 0x70) & 0x2000) {
            AF(arg0, s16, 2) = 4;
            return;
        }
        AF(o, u16, 0x2C) |= 0x10;
        AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = rand() % 1024 + 0x200;
        AF(arg0, s32, 0x48) = 0xC000;
        AF(arg0, s16, 2) = 1;
        if (!(AF(arg0, s16, 0x70) & 0x8000)) {
            AF(arg0, s32, 0x1C) = rand() % 16;
            func_8012E8A8(arg0);
            return;
        }
        func_8012EC04(AF(arg0, s32, 0x64), 6, buf);
        in.x = AF(arg0, u16, 6);
        in.y = AF(arg0, u16, 0xA);
        in.z = AF(arg0, u16, 0xE);
        func_8012F14C(buf, &in, &out);
        AF(arg0, u16, 6) = out.x;
        AF(arg0, u16, 0xA) = out.y;
        AF(arg0, u16, 0xE) = out.z;
        c = func_sc03_105_8017FA90(arg0, (s16)((rand() % 4 + 4) << 12), 0);
        if (c != 0) {
            AF(c, s32, 0x1C) = rand() % 5;
        }
        r = rand();
        k = (s16)(r % 896);
        if (!(r & 1)) {
            AF(o, s16, 0x12) = -k;
        } else {
            AF(o, s16, 0x12) = k;
        }
        func_8012B2CC(arg0);
        func_8012B178(arg0, 0xFFF80000 - ((r % 4) << 16));
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0xFC) = rand() & 0xF0;
        AF(arg0, s16, 0xFE) = rand() & 0x1F0;
        AF(arg0, s16, 0x100) = rand() & 0x30;
        return;
    }
    AF(arg0, s16, 2) = 3;
    AF(o, void *, 0x20) = &D_sc03_105_8018E158 + ((AF(arg0, u16, 0x70) & 0xFF0) >> 4) * 12;
    func_8012B2CC(arg0);
}

void func_sc03_105_8017F55C(u8 *o) {
    s32 buf[8];
    SV8 in;
    SV8 out;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o)) {
            func_8012EC04(AF(o, s32, 0x64), 0, buf);
            in.x = AF(o, u16, 6);
            in.y = AF(o, u16, 0xA);
            in.z = AF(o, u16, 0xE);
            func_8012F14C(buf, &in, &out);
            AF(o, u16, 6) = out.x;
            AF(o, u16, 0xA) = out.y;
            AF(o, u16, 0xE) = out.z;
            func_8012B260(o);
            func_8012E88C(o);
            AF(o, s32, 0x1C) = 0x80;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, s16, 0x70) & 0x8000) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0xFC);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s16, 0xFE);
            AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0x100);
        }
        r = func_8012CBF4(o);
        if ((r & 0xFF) == 0x19) {
            AF(o, s32, 0x1C) = 8;
            AF(o, u16, 0x34)++;
            func_sc03_105_8017FA90(o, (s16)((rand() % 3 + 3) << 12), 0xFFFA0000);
            func_sc03_105_8017FAE8(o);
        } else if (r & 0x2000) {
            AF(o, s32, 0x14) = 0xFFF80000;
            AF(o, s16, 0x34) = 4;
            AF(o, s32, 0x1C) = 0x20;
        } else if (func_8012BEE8(o)) {
            func_8012C218(o);
        }
        break;
    case 2:
        AF(o, s16, 0x52) = -((rcos((AF(o, s32, 0x1C) << 7) & 0x380) * 8) >> 12);
        if (func_8012BEE8(o)) {
            AF(o, s32, 0x1C) = 0x18;
            AF(o, s32, 0x48) = 0x2000;
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x14) = 0;
            AF(o, s32, 0x18) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        func_8012AD80(o);
        if (func_8012BEE8(o)) {
            func_8012C218(o);
        }
        break;
    case 4:
        if (AF(o, s16, 0x70) & 0x8000) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0xFC);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s16, 0xFE);
            AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0x100);
        }
        r = func_8012CBF4(o);
        if ((r & 0xFF) == 0x19) {
            AF(o, s32, 0x1C) = 8;
            AF(o, s16, 0x34) = 2;
            func_sc03_105_8017FA90(o, (s16)((rand() % 3 + 3) << 12), 0xFFFC0000);
            func_sc03_105_8017FAE8(o);
        } else if ((r & 0x2000) || func_8012BEE8(o)) {
            func_8012C218(o);
        }
        break;
    }
}

void func_sc03_105_8017F864(void) {
}

void func_sc03_105_8017F86C(void) {
}

void func_sc03_105_8017F874(u8 *o) {
    if (AF(o, u16, 0x34) != 0 && func_8012BEE8(o) != 0) {
        AF(o, s16, 2) = 5;
        AF(o, s32, 0x48) = 0x2000;
        AF(o, s32, 0x1C) = 0x40;
        func_8002D4C8(0x770, 0);
    }
}

void func_sc03_105_8017F8D8(u8 *o) {
    s32 i;
    u8 *p;
    u8 *q;
    s32 r;
    s32 k;
    s32 x;
    s32 y;

    func_8012AD80();
    if ((AF(o, s32, 0x1C) & 7) == 0) {
        for (i = 0; i < 2; i++) {
            p = (u8 *)func_80132EF4(o, 0x4D);
            if (p != 0) {
                r = rand() % 96;
                x = AF(p, s16, 6);
                AF(p, s16, 6) = (rand() & 1) ? x + r : x - r;
                r = rand() % 96;
                y = AF(p, s16, 0xE);
                AF(p, s16, 0xE) = (rand() & 1) ? y + r : y - r;
                AF(p, s32, 0x14) = 0xFFFA0000;
                AF(p, s16, 0xA) -= 0x40;
                k = rand();
                q = AF(p, u8 *, 0x20);
                AF(q, s16, 0x18) = AF(q, s16, 0x1A) = (k % 4 + 4) << 12;
                AF(p, s32, 0x1C) = rand() % 5;
            }
        }
    }
    if (func_8012BEE8(o) != 0) {
        func_8002D4C8(4, 0x770);
        func_8012C218(o);
    }
}

s32 func_sc03_105_8017FA90(s32 o, s32 a0, s32 b) {
    u8 *p;
    u8 *q;
    s16 a = a0;

    p = (u8 *)func_80132EF4(o, 0x4D);
    if (p != 0) {
        q = AF(p, u8 *, 0x20);
        AF(p, s32, 0x14) = b;
        AF(q, s16, 0x1A) = a;
        AF(q, s16, 0x18) = a;
    }
    return (s32)p;
}

extern s32 func_sc03_105_80185238();
extern u8 D_sc03_105_8018E8E4;
extern u8 D_sc03_105_8018E9CC;
void func_sc03_105_801871C0(u8 *o, s32 n1, s32 n2);
extern s32 func_80134510();
extern s32 ratan2();
extern s16 D_801152AA;
extern s16 D_801152AC;
extern void func_sc03_105_8017FEA8();

extern void func_8001F730();


void func_sc03_105_8017FAE8(u8 *o) {
    SV8 a;
    SV8 b;
    s32 k;
    s32 x;

    k = 0x40;
    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    func_8012EFB8(&a, &b);
    if (b.x < 0) x = -b.x; else x = b.x;
    if (x < 0xA1) {
        if (b.y < 0) x = -b.y; else x = b.y;
        if (x < 0x79) {
            do { func_8002D4C8(0x72B, (u16)((k + b.x * 63 / 160) | 0x2000)); } while (0); /* MATCH-TRICK: keeps k a register across the call */
        }
    }
}

void func_sc03_105_8017FBAC(u8 *arg0) {
    D_sc03_105_8018E270[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017FBE8(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(temp_s1, s32 *, 0x20) = &D_800D387C;
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_80128EA8((s32) temp_s1, arg0 + 0x24, (s32) &D_800D3888);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (AF(arg0, s32, 0x1C) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x80000000);
    }
}

void func_sc03_105_8017FC74(u8 *o) {
    s32 t;

    if (AF(o, s32, 0x1C) != 0) {
        t = AF(o, s32, 0x1C) - 1;
        AF(o, s32, 0x1C) = t;
        if (t == 0) {
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        }
    } else {
        func_8012931C((s32)o);
        if (func_80128ED8(AF(o, s32, 0x20), (s32)(o + 0x24)) != 0) {
            func_801292C8((s32)o);
        }
    }
}

void func_sc03_105_8017FCF0(u8 *arg0) {
    D_sc03_105_8018E278[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017FD2C(u8 *o) {
    u8 *m;
    s16 t;

    m = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = m;
    if (m == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(m, 0);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
    t = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, u16, 2)++;
    AF(o, s16, 0xFE) = t;
}

void func_sc03_105_8017FDB8(u8 *o) {
    u8 *p;
    SV8 v;

    p = AF(o, u8 *, 0x64);
    if (AF(p, s16, 0x36) != AF(o, s16, 0xFE)) {
        func_8012C218(o);
        return;
    }
    v.x = AF(p, u16, 6);
    v.y = AF(p, u16, 0xA) - 0x10;
    v.z = AF(p, u16, 0xE);
    if (func_80134510(&v) != 0) {
        AF(o, s16, 6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = ratan2(D_801152AC, D_801152AA) + 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = ratan2(*(s16 *)&D_801152A8, D_801152AA);
        func_sc03_105_8017FEA8(o);
    }
}

void func_sc03_105_8017FEA8(u8 *o) {
    Q40 q;

    q.col = 0x808080;
    q.code = 0x50000000;
    q.flag = 0x6E;
    q.p[0].x = -0x40;
    q.p[0].y = -0x40;
    q.p[1].x = 0x40;
    q.p[1].y = -0x40;
    q.p[2].x = -0x40;
    q.p[2].y = 0x40;
    q.p[3].x = 0x40;
    q.p[3].y = 0x40;
    q.p[0].z = q.p[1].z = q.p[2].z = q.p[3].z = 0;
    q.uv[0] = 0xF14;
    q.uv[1] = 0x100;
    q.uv[2] = 0xF53;
    q.uv[3] = 0x100;
    q.uv[4] = 0xF14;
    q.uv[5] = 0x13F;
    q.uv[6] = 0xF53;
    q.uv[7] = 0x13F;
    func_80016EF8(&q, AF(o, u8 *, 0x20) + 0x34);
}

void func_sc03_105_8017FF54(u8 *arg0) {
    D_sc03_105_8018E280[AF(arg0, u16, 2)]();
}

void func_sc03_105_8017FF90(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s32 *, 0x20) = &D_sc03_105_8018DE74;
    AF(temp_v1, u8, 0x27) = 0x6D;
    AF(temp_v1, s16, 0x28) = 0x3CD;
    AF(temp_v1, s16, 0x2A) = 0x1A0;
    AF(temp_v1, s16, 0x1A) = 0x1800;
    AF(temp_v1, s16, 0x18) = 0x1800;
    AF(temp_v1, u16, 0x2C) = 0xC010;
    AF(arg0, s32, 0x14) = 0x80000;
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_8017FFEC(s32 arg0) {
    s32 temp_v0;

    func_8012931C(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_801292C8(arg0);
    }
}

void func_sc03_105_80180030(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s32 *, 0x20) = &D_sc03_105_8018D3D8;
    AF(temp_v1, u8, 0x27) = 0x16;
    AF(temp_v1, s16, 0x1A) = 0x6000;
    AF(temp_v1, s16, 0x18) = 0x6000;
    AF(temp_v1, u8, 0x26) = 0x60;
    AF(temp_v1, u8, 0x25) = 0x60;
    AF(temp_v1, u8, 0x24) = 0x60;
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    func_80128EA8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc03_105_8018D398);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_801800C0(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

extern void (*D_sc03_105_8018E7E8[])();
void func_sc03_105_80183F84(u8 *o, u8 *b);
extern s16 D_sc03_105_8018EE06;
extern s16 D_sc03_105_8018EE08;
void func_sc03_105_80180100(u8 *o) {
    s16 t;

    D_sc03_105_8018E7E8[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0) {
        AF(o, u16, 0x5C) &= ~1;
        t = AF(o, s16, 0xAC);
        if (t != 0) {
            t--;
            AF(o, s16, 0xAC) = t;
            *(s16 *)&D_sc03_105_8018EE04 = ((rsin(t << 8) * 192) >> 12) + 0x40;
            D_sc03_105_8018EE08 = -0x40;
            D_sc03_105_8018EE06 = -0x40;
        } else {
            *(s16 *)&D_sc03_105_8018EE04 = D_sc03_105_8018EE06 = D_sc03_105_8018EE08 = 0x80;
        }
        func_sc03_105_80183F84(o, D_sc03_105_801BA6A8);
        func_sc03_105_80183F84(o, D_sc03_105_801BA6AC);
    }
}

void func_sc03_105_801801F8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc03_105_8018E2C8) != 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        func_8001C214(temp_v0, 0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 4) = 0xFFF80000;
        AF(arg0, s32, 8) = 0xFE5E0000;
        AF(arg0, s32, 0xC) = 0xFF360000;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xAE) = -9;
        D_sc03_105_801BA6B0 = 0;
        AF(arg0, s32, 0xCC) = (s32) D_sc03_105_8018E610;
        func_sc03_105_80184458();
    }
}

void func_sc03_105_801802B0(s32 arg0) {
    func_sc03_105_801824CC(arg0, 0x1000, 0, -0x20, /* extra? */ 0x800000);
}

void func_sc03_105_801802E0(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = 0x1800;
    AF(temp_v1, s16, 0x18) = 0x1800;
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 5;
    AF(arg0, s32, 0x1C) = 0x3F;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    func_sc03_105_801824CC((s32) arg0, 0x1800, 0, -0x20, /* extra? */ 0x800000);
    D_sc03_105_801BA5A0 = 0;
    D_sc03_105_801BA5A2 = 0;
    D_sc03_105_801BA5A4 = 0;
    func_sc03_105_8018373C((s32) arg0, -0x40000);
    func_sc03_105_80184604(0);
    AF(arg0, s32, 0xCC) = ((s32 *)&D_sc03_105_8018E610)[D_sc03_105_801BCBBC];
}

void func_sc03_105_801803A0(u8 *a) {
    u8 *pl;
    s32 i;
    s16 speed;
    u32 cmd;
    V3 unused;

    AF(a, s16, 0x50) = (u32)(rcos((AF(a, s32, 0xEC) << 5) & 0xFE0) * 3) >> 9;
    AF(a, s16, 0x52) = (u32)(rsin((AF(a, s32, 0xEC) << 5) & 0x7E0) * 3) >> 9;
    pl = &D_80126B58;
    switch (AF(a, u16, 0x34)) {
    case 0:
        speed = 0x1800;
        cmd = *AF(a, u32 *, 0xCC);
        switch (cmd) {
        case 0xFFFFFFFE:
            AF(a, s32, 0x1C) = 0x40;
            AF(a, s16, 0x34)++;
            {
                u8 *o = AF(a, u8 *, 0x20);
                AF(o, s16, 0x18) = AF(o, s16, 0x1A) = 0x2000;
            }
            break;
        case 0xFFFFFFFD:
            i = 0;
            AF(a, s16, 0x34) = 4;
            AF(a, s32, 0x1C) = 0x3C;
            for (i = 0; i < 3; i++) {
                func_sc03_105_80183D38(a, (s16)(i + 1), -0x40000 - ((rand() % 5) << 16));
            }
            break;
        case 0xFFFFFFFF:
            AF(a, s32, 0xCC) = ((s32 *)&D_sc03_105_8018E610)[D_sc03_105_801BCBBC];
            return;
        default:
            AF(a, s16, 2) = cmd;
            AF(a, s32, 0xCC) += 4;
            return;
        }
        AF(a, s32, 0xCC) += 4;
        break;
    case 1:
        speed = 0x2000;
        if (func_8012BEE8(a) != 0) {
            AF(a, s16, 0x34)++;
            D_sc03_105_801BA59A = AF(a, s16, 0xA);
            D_sc03_105_801BA59C = AF(a, s16, 0xE);
            AF(a, s16, 0xE8) = (AF(a, s16, 6) - AF(pl, s16, 6)) >> 1;
            AF(a, s16, 0xEA) = AF(a, s16, 0xA) + 0x102;
            AF(a, s32, 0x1C) = 1;
        }
        break;
    case 2:
        func_sc03_105_80183768(a, AF(a, s16, 0xE8), AF(a, s16, 0xEA));
        func_8012CBF4(a);
        speed = 0x2000;
        if (++AF(a, s32, 0x1C) > 0x40) {
            AF(a, s32, 0x1C) = 0x1E;
            AF(a, s16, 0x34) = 0;
            {
                u8 *o = AF(a, u8 *, 0x20);
                AF(o, s16, 0x18) = AF(o, s16, 0x1A) = 0x1800;
            }
            AF(a, s16, 0xA) = D_sc03_105_801BA59A;
            AF(a, s16, 0xE) = D_sc03_105_801BA59C;
        }
        break;
    case 3:
        break;
    case 4:
        speed = 0x1800;
        if (func_8012BEE8(a) != 0) {
            AF(a, s16, 0x34) = 0;
            AF(a, s32, 0x1C) = 0x1E;
        }
        break;
    case 5:
        func_8012AD80(a);
        speed = 0x1800;
        if (func_8012BEE8(a) != 0) {
            AF(a, s32, 0x1C) = 0x1E;
            AF(a, s16, 0x34) = 0;
            AF(a, s32, 0xC) = 0xFE380000;
        }
        break;
    }
    func_sc03_105_80183A64(a, 0x1800000, 0xFE800000);
    func_sc03_105_8018388C(a, 0x30);
    func_sc03_105_8018233C(a);
    func_sc03_105_80183DA0(a);
    func_sc03_105_801824CC(a, (s16)speed, 0, -0x20, 0x800000);
    AF(a, s32, 0xEC)++;
}

void func_sc03_105_801806F8(u8 *arg0) {
    u16 scale;
    s32 v[3];
    s32 r;
    u8 *p;
    s16 *t;
    s32 k;
    s16 d;

    scale = 0x2000;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        p = AF(arg0, u8 *, 0x20);
        AF(p, s16, 0x1A) = 0x2000;
        AF(p, s16, 0x18) = 0x2000;
        AF(arg0, s16, 0x34)++;
        AF(&v[0], s16, 2) = D_sc03_105_8018E81C;
        AF(&v[1], s16, 2) = D_sc03_105_8018E81E;
        AF(&v[2], s16, 2) = D_sc03_105_8018E820;
        func_8012B77C(&r, arg0 + 4, v);
        D_sc03_105_801BA5A0 = r;
        D_sc03_105_801BA5A2 = r >> 16;
        func_sc03_105_8018373C(arg0, -0x40000);
        d = (rand() & 1) ? 1 : -1;
        D_sc03_105_801BA6B0 = 0x6C;
        D_sc03_105_801BA590 = d;
        AF(arg0, s32, 0xF4) = 0;
        AF(arg0, s32, 0x1C) = 0x20;
        func_sc03_105_80184604(10);
        break;
    case 1:
        AF(arg0, s32, 0xF4) += 0x800;
        if (AF(arg0, s32, 0xF4) > 0x10000) {
            AF(arg0, s32, 0xF4) = 0x10000;
        }
        func_sc03_105_80184500(arg0);
        if (func_8012BEE8(arg0) == 0) {
            break;
        }
        AF(arg0, s16, 0x34)++;
    case 2:
        func_8012CBF4(arg0);
        t = &D_sc03_105_8018E81C;
        if (func_80013478(arg0 + 4, t) <= 0x100) {
            AF(arg0, s16, 6) = *t;
            AF(arg0, s16, 0xA) = D_sc03_105_8018E81E;
            AF(arg0, s16, 0xE) = D_sc03_105_8018E820;
            func_sc03_105_801829CC(arg0);
            AF(arg0, s32, 0x1C) = 0x3C;
            AF(arg0, s16, 0x34)++;
            ((void (*)())func_sc03_105_8017E170)(1);
        }
        break;
    case 3:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x12C;
            AF(arg0, s32, 0xE4) = 0;
            AF(arg0, s16, 0x34)++;
        }
        break;
    case 4:
        k = D_sc03_105_801BA590 << 4;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += k;
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x3C;
            AF(arg0, s32, 0xE0) |= 1;
            AF(arg0, s16, 0x34)++;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
        }
        break;
    case 5:
        if (func_8012BEE8(arg0) != 0) {
            v[0] = 0xFFF80000;
            v[1] = 0xFE5E0000;
            v[2] = 0xFE380000;
            func_8012B77C(&r, arg0 + 4, v);
            D_sc03_105_801BA5A0 = r;
            D_sc03_105_801BA5A2 = r >> 16;
            func_sc03_105_8018373C(arg0, -0x40000);
            AF(arg0, s32, 0xE0) &= ~1;
            AF(arg0, s16, 0x34)++;
            ((void (*)())func_sc03_105_8017E170)(0);
            AF(arg0, s32, 0x1C) = 0x20;
        }
        break;
    case 6:
        AF(arg0, s32, 0xF4) -= 0x800;
        if (AF(arg0, s32, 0xF4) < 0) {
            AF(arg0, s32, 0xF4) = 0;
        }
        func_sc03_105_80184500(arg0);
        if (func_8012BEE8(arg0) == 0) {
            break;
        }
        D_sc03_105_801BA6B0 = 0;
        ((struct { u8 pad[0x34]; s16 st; } *)arg0)->st++;
        LoadImage(&D_sc03_105_8018E7E0, &D_sc03_105_8018E7C0);
    case 7:
        func_8012CBF4(arg0);
        v[0] = 0xFFF80000;
        v[1] = 0xFE5E0000;
        v[2] = 0xFE380000;
        if (func_80013350(arg0 + 4, v) <= 0x100) {
            func_sc03_105_80183F0C((s32)arg0);
            AF(arg0, s32, 4) = 0xFFF80000;
            AF(arg0, s32, 8) = 0xFE5E0000;
            AF(arg0, s32, 0xC) = 0xFE380000;
        }
        break;
    }
    func_sc03_105_8018388C(arg0, 0x30);
    func_sc03_105_801824CC(arg0, (u32)(scale << 16) >> 16, 0, -0x20, 0x400000);
}

void func_sc03_105_80180ABC(ActABC *o) {
    s32 v[4];
    s32 r[2];
    Arg14ABC d;
    u16 spd;
    u16 t;

    spd = 0x2000;
    AF(o, s16, 0x50) = (u32)(rcos((D_800B99DA * 32) & 0xFE0) * 3) >> 9;
    AF(o, s16, 0x52) = (u32)(rsin((D_800B99DA * 32) & 0x7E0) * 3) >> 9;
    spd = 0x2000;
    switch (o->sub) {
    case 0:
        o->count = 0x20;
        D_sc03_105_801BA6B0 = 0x6C;
        o->vF4 = 0;
        o->sub += 1;
    case 1:
        o->vF4 += 0x800;
        if (o->vF4 > 0x10000) {
            o->vF4 = 0x10000;
        }
        func_sc03_105_80184500(o);
        if (func_8012BEE8(o) != 0) {
            v[0] = 0xFFF80000;
            v[1] = 0xFE5E0000;
            v[2] = 0xFE380000;
            func_8012B77C(r, &o->pos[0], v);
            D_sc03_105_801BA5A0 = r[0];
            D_sc03_105_801BA5A2 = r[0] >> 16;
            func_sc03_105_8018373C(o, 0xFFFC0000);
            o->sub += 1;
        }
        break;
    case 2:
        func_8012CBF4(o);
        v[0] = 0xFFF80000;
        v[1] = 0xFE5E0000;
        v[2] = 0xFE380000;
        if (func_80013350(&o->pos[0], v) <= 0x100) {
            SetScript(o, &D_sc03_105_801B1D08);
            t = o->sub + 1;
            o->count = 10;
            o->pos[0].w = 0xFFF80000;
            o->pos[1].w = 0xFE5E0000;
            o->pos[2].w = 0xFE380000;
            o->nE4 = D_sc03_105_801BCBBC + 1;
            o->sub = t;
            func_sc03_105_80182BD8(o, &D_sc03_105_8018E61C, 4, 0);
        }
        break;
    case 3:
        func_sc03_105_80182BD8(o, &D_sc03_105_8018E61C, 4, 1);
        if (func_8012BEE8(o) != 0) {
            o->count = 0x96;
            o->sub += 1;
        }
        if (o->i94 == 0) {
            func_8002D4C8(0x7A7, 0);
        }
        break;
    case 4:
        func_sc03_105_80182BD8(o, &D_sc03_105_8018E61C, 4, 1);
        if (o->count % 50 == 0 && o->nE4 != 0) {
            d.v[0] = o->pos[0].h.hi;
            d.v[1] = o->pos[1].h.hi;
            d.v[2] = o->pos[2].h.hi;
            d.v[3] = 0x171;
            d.v[4] = 0;
            d.v[5] = 0;
            d.v[6] = 0x7FFF;
            d.v[7] = 0x400;
            d.w = 0x4000;
            func_8012C51C(&d, o);
            d.v[7] = -0x400;
            func_8012C51C(&d, o);
            o->nE4 -= 1;
        }
        if (func_8012BEE8(o) != 0) {
            o->count = 0x20;
            o->sub += 1;
            o->fE0 |= 2;
        }
        if (o->i94 == 0) {
            func_8002D4C8(0x7A7, 0);
        }
        break;
    case 5:
        o->vF4 -= 0x800;
        if (o->vF4 < 0) {
            o->vF4 = 0;
        }
        func_sc03_105_80184500(o);
        if (func_8012BEE8(o) != 0) {
            func_sc03_105_80183F0C((s32)o);
            D_sc03_105_801BA6B0 = 0;
            o->fE0 &= ~2;
            LoadImage(&D_sc03_105_8018E7E0, &D_sc03_105_8018E7C0);
        }
        break;
    }
    func_sc03_105_80183DA0(o);
    func_sc03_105_8018388C(o, 0x30);
    func_sc03_105_801824CC(o, (u32)(spd << 16) >> 16, 0, -0x20, 0x800000);
}

void func_sc03_105_80180EC0(u8 *arg0) {
    s16 v[8];
    s32 r;
    u8 *p;
    s32 d;
    u8 *t;

    p = &D_80126B58;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, u16, 0x34)++;
        AF(arg0, s32, 0x1C) = 0x20;
    case 1:
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
        D_sc03_105_801BA5A0 = 0;
        D_sc03_105_801BA5A2 = 0;
        D_sc03_105_801BA5A4 = 0;
        AF(arg0, u16, 0x34)++;
        t = AF(arg0, u8 *, 0x20);
        AF(t, s16, 0x1A) = 0x1800;
        AF(t, s16, 0x18) = 0x1800;
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_105_8018E298 | 0x40000000);
        AF(arg0, s32, 4) = 0xFFF80000;
        AF(arg0, s32, 8) = 0xFE5E0000;
        AF(arg0, s32, 0xC) = AF(p, s32, 0xC);
        AF(arg0, s32, 0xE4) = 0;
        AF(arg0, s32, 0x1C) = 0x2D;
        func_sc03_105_80184604(2);
        break;
    case 2:
        AF(arg0, s16, 0x52) = (u32)(rsin((AF(arg0, s32, 0xEC) << 5) & 0x7E0) * 3) >> 9;
        AF(arg0, s32, 0xEC)++;
        if (--AF(arg0, s32, 0xE4) == -1) {
            if (AF(arg0, s32, 4) < AF(p, s32, 4)) {
                func_sc03_105_8018383C(arg0, &D_sc03_105_8018E824);
            } else {
                func_sc03_105_8018383C(arg0, &D_sc03_105_8018E834);
            }
            AF(arg0, s32, 0xE4) = 0x1E;
        }
        func_8012AD80(arg0);
        if (func_8012BEE8(arg0) != 0) {
            if (func_sc03_105_80183A64(arg0, 0xC00000, 0xFF400000) == 1
                || (AF(arg0, s16, 6) - AF(p, s16, 6) < 0 ? AF(p, s16, 6) - AF(arg0, s16, 6) : AF(arg0, s16, 6) - AF(p, s16, 6)) < 0x80) {
                AF(arg0, u16, 0x34) = (AF(arg0, s16, 6) < AF(p, s16, 6)) ? AF(arg0, u16, 0x34) + 1 : 6;
                AF(arg0, s32, 0x1C) = 0x10;
            }
        }
        break;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) -= 0x18;
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 5:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += AF(arg0, s32, 0x1C) * 12 + 0x10;
        AF(arg0, s32, 0x1C)++;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x14) > 0x500) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0x500;
            AF(arg0, u16, 0x34) = 9;
            AF(arg0, s32, 0x1C) = 0x20;
        }
        break;
    case 6:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 0x18;
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 4:
    case 7:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34)++;
            func_8002D4C8(0x725, 0);
        }
        break;
    case 8:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) -= AF(arg0, s32, 0x1C) * 12 + 0x10;
        AF(arg0, s32, 0x1C)++;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x14) < -0x500) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = -0x500;
            AF(arg0, s32, 0x1C) = 0x20;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 9:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 10:
        d = func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x14), 0, 8);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += d;
        if (d == 0) {
            AF(arg0, u16, 0x34)++;
            AF(v, s32, 0) = 0xFFF80000;
            AF(v, s32, 4) = 0xFE5E0000;
            AF(v, s32, 8) = 0xFE380000;
            func_8012B77C(&r, arg0 + 4, v);
            D_sc03_105_801BA5A0 = r;
            D_sc03_105_801BA5A2 = r >> 16;
            func_sc03_105_8018373C(arg0, 0xFFFC0000);
        }
        break;
    case 11:
        AF(arg0, s16, 0x52) = (u32)(rsin((AF(arg0, s32, 0xEC) << 5) & 0x7E0) * 3) >> 9;
        AF(arg0, s32, 0xEC)++;
        func_8012CBF4(arg0);
        AF(v, s32, 0) = 0xFFF80000;
        AF(v, s32, 4) = 0xFE5E0000;
        AF(v, s32, 8) = 0xFE380000;
        if (func_80013350(arg0 + 4, v) < 0x41) {
            func_sc03_105_80183F0C(arg0);
            AF(arg0, s32, 4) = 0xFFF80000;
            AF(arg0, s32, 8) = 0xFE5E0000;
            AF(arg0, s32, 0xC) = 0xFE380000;
            AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_105_8018E288 | 0x40000000);
        }
        break;
    }
    func_sc03_105_80183DA0(arg0);
    func_sc03_105_80182DCC(arg0);
    func_sc03_105_801839A4(arg0, 0x30);
    func_sc03_105_8018233C(arg0);
}

void func_sc03_105_801813BC(u8 *arg0) {
    u8 *p = &D_80126B58;
    s32 s;
    s32 r;
    S12 v;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, s32, 0x1C) = 0x20;
        func_8012E8A8(arg0);
        AF(arg0, s16, 0x34) = 10;
        AF(arg0, s32, 0x58) = (s32) &D_sc03_105_8018E2A8 | 0x40000000 | 0x20000000;
        func_sc03_105_80183EE8();
        func_sc03_105_80184604(8);
    case 10:
        if ((s = func_8012BEE8(arg0)) == 0) {
            break;
        }
        func_8012E88C(arg0);
        AF(arg0, s32, 0x1C) = 1;
        AF(arg0, s16, 0x34) = 1;
        r = rand() & 1;
        AF(arg0, s32, 0xE0) |= r << 2;
        AF(arg0, s32, 0x4) = D_sc03_105_8018E844[r];
        AF(arg0, s32, 0x8) = 0xFEFE0000;
        AF(arg0, s32, 0xC) = AF(p, s32, 0xC);
        func_8012B200(arg0);
        func_sc03_105_801831E0(arg0, 0);
        func_8002D4C8(0x729, 0);
        break;
    case 1:
        AF(arg0, s32, 0x14) = (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) - rsin(((AF(arg0, s32, 0x1C) - 1) << 5) & 0x7E0)) * -0xC00;
        func_sc03_105_80183CA4(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x21) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34)++;
        }
        func_sc03_105_801831E0(arg0, 3);
        break;
    case 2:
        if ((s = func_8012BEE8(arg0)) != 0) {
            AF(arg0, s32, 0x1C) = 0x20;
            AF(arg0, u16, 0x34)++;
        }
        func_sc03_105_801831E0(arg0, 2);
        break;
    case 3:
        AF(arg0, s32, 0x14) = (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) - rsin(((AF(arg0, s32, 0x1C) - 1) << 5) & 0x7E0)) * -0xC00;
        func_sc03_105_80183CA4(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x41) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34)++;
            func_8002D4C8(0x7A8, 0);
        }
        func_sc03_105_801831E0(arg0, 3);
        break;
    case 4:
        if ((s = func_8012BEE8(arg0)) != 0) {
            AF(arg0, s32, 0x1C) = 1;
            AF(arg0, u16, 0x34)++;
            if (AF(arg0, s32, 0xE0) & 4) {
                AF(arg0, s32, 0x10) = 0xFFF40000 - (D_sc03_105_801BCBBC << 17);
            } else {
                AF(arg0, s32, 0x10) = (D_sc03_105_801BCBBC << 17) + 0xC0000;
            }
            AF(arg0, s32, 0xE0) |= (rand() & 1) << 3;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
        }
        func_sc03_105_801831E0(arg0, 1);
        break;
    case 5:
        AF(arg0, s32, 0x14) = (rsin((AF(arg0, s32, 0x1C) << 6) & 0x7C0) - rsin(((AF(arg0, s32, 0x1C) - 1) << 6) & 0x7C0)) * -0xC00;
        v.v[0] = AF(arg0, s32, 0x10) >> 8;
        v.v[1] = AF(arg0, s32, 0x14) >> 8;
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = func_sc03_105_80185628((s32) &D_800D3918, (s32) &v);
        if ((s = func_sc03_105_80183CA4(arg0)) & 0x8000) {
            if (!(AF(arg0, s32, 0xE0) & 8)) {
                AF(arg0, s16, 0x34) = 7;
                func_8012B23C(arg0);
                AF(arg0, s16, 0x5C) = 0;
                break;
            }
            AF(arg0, s32, 0x10) = -AF(arg0, s32, 0x10);
            AF(arg0, s32, 0xE0) &= ~8;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x21) {
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, s16, 0x5C) = 0;
            AF(arg0, u16, 0x34)++;
            func_8002D4C8(0x7A8, 0);
        }
        func_sc03_105_80183174(arg0, 1);
        break;
    case 6:
        if ((s = func_8012BEE8(arg0)) != 0) {
            AF(arg0, s32, 0x1C) = 1;
            AF(arg0, s16, 0x34) = 5;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
        }
        func_sc03_105_80183174(arg0, 1);
        break;
    case 7:
        if ((s = func_sc03_105_80183CA4(arg0)) & 0x2000) {
            AF(arg0, s32, 0x1C) = 0x18;
            AF(arg0, u16, 0x34)++;
        }
        func_sc03_105_80183174(arg0, 1);
        break;
    case 8:
        if ((s = func_8012BEE8(arg0)) == 0) {
            func_sc03_105_80183174(arg0, 1);
            break;
        }
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, u16, 0x34)++;
        func_sc03_105_80184604(-1);
        break;
    case 9:
        if ((s = func_8012BEE8(arg0)) != 0) {
            func_sc03_105_80183F0C(arg0);
            AF(arg0, s32, 0x4) = 0xFFF80000;
            AF(arg0, s32, 0x8) = 0xFE5E0000;
            AF(arg0, s32, 0xC) = 0xFE380000;
            AF(arg0, s32, 0x58) = (s32) &D_sc03_105_8018E288 | 0x40000000 | 0x20000000;
            AF(arg0, s32, 0x48) = 0;
            AF(arg0, s32, 0xE0) &= ~4;
            return;
        }
        break;
    }
    func_sc03_105_8018233C(arg0);
}

void func_sc03_105_801818E8(u8 *arg0) {
    s16 v[8];
    s32 r;
    SV *p;
    u8 *t;
    s16 *q;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        D_sc03_105_801BA5A4 = 0;
        D_sc03_105_801BA594 = &D_sc03_105_8018E87C[rand() & 1];
        v[1] = D_sc03_105_801BA594->vx;
        v[3] = D_sc03_105_801BA594->vy;
        v[5] = D_sc03_105_801BA594->vz;
        func_8012B77C(&r, arg0 + 4, v);
        D_sc03_105_801BA5A0 = r;
        D_sc03_105_801BA5A2 = r >> 16;
        func_sc03_105_8018373C(arg0, 0xFFFC0000);
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        func_8012CBF4(arg0);
        if (func_80013478(arg0 + 4, D_sc03_105_801BA594) < 0x101) {
            p = D_sc03_105_801BA594;
            AF(arg0, s16, 6) = p->vx;
            AF(arg0, s16, 10) = p->vy;
            AF(arg0, s16, 14) = p->vz;
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = 0x10;
            D_sc03_105_801BA5A0 = 0;
            D_sc03_105_801BA5A2 = 0;
            D_sc03_105_801BA5A4 = AF(arg0, s32, 0xF0) = func_sc03_105_80183C20(arg0);
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x14), AF(arg0, s32, 0xF0), 8);
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x100;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 3:
        func_sc03_105_8018383C(arg0, &D_sc03_105_8018E84C[D_sc03_105_801BCBBC]);
        if (func_sc03_105_80183A98(arg0) == 1 && D_sc03_105_801BCBBC == 2) {
            t = func_sc03_105_80183D38(arg0, 0, 0);
            if (t != 0) {
                AF(t, s16, 0xA) += 0x20;
            }
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x14), AF(arg0, s32, 0xF0), 0x10);
        q = &D_sc03_105_801BA5A4;
        *q = AF(arg0, s32, 0xF0);
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, s32, 0xF0) = 0;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
            *q = 0;
            AF(v, s32, 0) = 0xFFF80000;
            AF(v, s32, 4) = 0xFE5E0000;
            AF(v, s32, 8) = 0xFE380000;
            func_8012B77C(&r, arg0 + 4, v);
            D_sc03_105_801BA5A0 = r;
            D_sc03_105_801BA5A2 = r >> 16;
            func_sc03_105_8018373C(arg0, 0xFFFC0000);
        }
        break;
    case 4:
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += func_8012B608(AF(AF(arg0, u8 *, 0x20), s16, 0x14), AF(arg0, s32, 0xF0), 8);
        func_8012CBF4(arg0);
        AF(v, s32, 0) = 0xFFF80000;
        AF(v, s32, 4) = 0xFE5E0000;
        AF(v, s32, 8) = 0xFE380000;
        if (func_80013350(arg0 + 4, v) < 0x41) {
            func_sc03_105_80183F0C(arg0);
            AF(arg0, s32, 4) = 0xFFF80000;
            AF(arg0, s32, 8) = 0xFE5E0000;
            AF(arg0, s32, 0xC) = 0xFE380000;
            return;
        }
        break;
    }
    func_sc03_105_80183DA0(arg0);
    func_sc03_105_801824CC(arg0, 0x1800, 0, -0x20, 0xA00000);
    func_sc03_105_801839A4(arg0, 0x30);
    func_sc03_105_8018233C(arg0);
}

void func_sc03_105_80181C84(u8 *arg0) {
    struct { s16 x, y, z, kind; u16 unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    s32 i;
    s32 n;
    u8 *o;
    u8 *g = &D_80126B58;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s32, 0xE0) &= ~0x10;
        AF(arg0, u16, 0x34)++;
    case 1:
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
        AF(arg0, s16, 0xA) = -0x102;
        AF(arg0, s16, 0xE) = -0x1C8;
        AF(arg0, s32, 0x1C) = 0x20;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s32, 0x58) = (s32)&D_sc03_105_8018E2B8 | 0x40000000 | 0x20000000;
        AF(arg0, u16, 0x34)++;
        func_sc03_105_80184604(AF(g, s16, 6) > 0 ? 4 : 6);
        d.x = AF(arg0, s16, 6);
        d.y = AF(arg0, s16, 0xA);
        d.z = AF(arg0, s16, 0xE);
        d.kind = 0x170;
        d.unk8 = 0x8000;
        d.flags = 0;
        d.unkC = 0x7FFF;
        d.unkE = 0x80;
        for (i = 0; i < 4; i++) {
            d.unk10 = i << 10;
            func_8012C51C(&d, arg0);
        }
        break;
    case 2:
        if (func_8012BEE8(arg0) != 0) {
            func_sc03_105_8018364C(arg0);
            if (AF(g, s16, 6) > 0) {
                AF(arg0, s16, 0x34) = 3;
            } else {
                AF(arg0, s16, 0x34) = 4;
            }
            func_8002D4C8(0xC2D, 0);
        }
        break;
    case 3:
        AF(arg0, s16, 0x102) += 0x20;
        if (AF(arg0, s16, 0x102) > 0x200) {
            AF(arg0, s16, 0x102) = 0x200;
            func_8013C9C4(&D_sc03_105_8018AAA4);
            AF(arg0, s16, 0x34) = 5;
            AF(arg0, s32, 0x1C) = 0x40;
            func_8002D4C8(0xC06, 0);
            n = D_sc03_105_8018E88C[D_sc03_105_801BCBBC];
            for (i = 0; i < n; i++) {
                o = func_sc03_105_80183D38(arg0, 0, 0);
                if (o != 0) {
                    AF(o, s16, 6) += 0x40 + (i * (0x1C0 / n) + rand() % (0x1C0 / n));
                    AF(o, s16, 0xA) -= 0xE0;
                }
            }
        }
        break;
    case 4:
        AF(arg0, s16, 0x102) -= 0x20;
        if (AF(arg0, s16, 0x102) < -0x200) {
            AF(arg0, s16, 0x102) = -0x200;
            func_8013C9C4(&D_sc03_105_8018AAA4);
            AF(arg0, s16, 0x34) = 6;
            AF(arg0, s32, 0x1C) = 0x40;
            func_8002D4C8(0xC06, 0);
            n = D_sc03_105_8018E88C[D_sc03_105_801BCBBC];
            for (i = 0; i < n; i++) {
                o = func_sc03_105_80183D38(arg0, 0, 0);
                if (o != 0) {
                    AF(o, s16, 6) -= 0x40 + (i * (0x1C0 / n) + rand() % (0x1C0 / n));
                    AF(o, s16, 0xA) -= 0xE0;
                }
            }
        }
        break;
    case 5:
    case 6:
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) += 2;
        }
        break;
    case 7:
        AF(arg0, s16, 0x102) -= 0x20;
        if (AF(arg0, s16, 0x102) < 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 0x102) = 0;
            AF(arg0, s32, 0xE0) |= 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 8:
        AF(arg0, s16, 0x102) += 0x20;
        if (AF(arg0, s16, 0x102) > 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 0x102) = 0;
            AF(arg0, s32, 0xE0) |= 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 9:
    case 10:
        if (func_8012BEE8(arg0) != 0) {
            func_sc03_105_801843DC(arg0);
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 11:
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
        func_sc03_105_80183F0C(arg0);
        AF(arg0, s32, 4) = 0xFFF80000;
        AF(arg0, s32, 8) = 0xFE5E0000;
        AF(arg0, s32, 0xC) = 0xFE380000;
        AF(arg0, s32, 0x58) = (s32)&D_sc03_105_8018E288 | 0x40000000 | 0x20000000;
        return;
    }
    func_sc03_105_80183DA0(arg0);
    func_sc03_105_801834A4(arg0);
    func_sc03_105_801839A4(arg0, 0x30);
    if (((s32 (*)())func_sc03_105_8018233C)(arg0) == 1) {
        func_sc03_105_801843DC(arg0);
        AF(arg0, s32, 0xE0) |= 0x10;
    }
}

void func_sc03_105_80182220(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s32, 0x1C) = 0x3C;
    AF(arg0, s16, 0x34) = 0;
    func_8002D4C8(0x72C, 0, arg2);
    func_sc03_105_80183EE8();
    func_sc03_105_80184604(-1);
}

void func_sc03_105_8018226C(u8 *o) {
    if (AF(o, u16, 0x34) != 0) {
        return;
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
    AF(o, s32, 4) = 0xFFF80000;
    AF(o, s32, 8) = 0xFE5E0000;
    AF(o, s32, 0xC) = 0xFF360000;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
    AF(o, s32, 0x58) = (s32)&D_sc03_105_8018E288 | 0x40000000 | 0x20000000;
    AF(o, s16, 0x34)++;
    func_8012B2CC(o);
    D_sc03_105_801BA6B0 = 0;
}

void func_sc03_105_80182334(void) {
}

s32 func_sc03_105_8018233C(u8 *o) {
    u16 f;
    s32 k;
    u16 *q;
    u8 *p;
    s32 r;

    f = AF(o, u16, 0x5C);
    if (!(f & 1)) {
        return 0;
    }
    k = 8;
    if (AF(o, u16, 0x5E) == 0x22) {
        AF(o, u16, 0x5C) = f & 0xFFFE;
        AF(o, s16, 0x5E) = 0;
        return 0;
    }
    AF(o, s16, 0x60) = k;
    func_8012E9C0(o);
    q = &D_sc03_105_8018EDFC;
    *q -= AF(o, u16, 0x60);
    if (AF(o, s16, 0xAC) == 0) {
        AF(o, s16, 0xAC) = k;
    }
    func_8002D4C8(0xC08, 0);
    p = (u8 *)func_80132EF4(o, 0x22);
    if (p != 0) {
        r = rand();
        AF(p, s16, 0x34) = (((r % 3) << 12) + 0x4000) | 2;
        AF(p, s32, 0x14) = 0xFFF80000 - ((rand() % 3) << 16);
        AF(p, s16, 6) = AF(o, s16, 0x7C);
        AF(p, s16, 0xA) = AF(o, s16, 0x7E);
        AF(p, s16, 0xE) = AF(o, s16, 0x80);
    }
    if ((s16)*q <= 0) {
        *q = 0;
        AF(AF(o, u8 *, 0x64), s16, 2) = 4;
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 2) = 0xA;
        return 1;
    }
    return 0;
}

void func_sc03_105_801824CC(s32 arg0, s32 p1, s32 p2, s32 p3, s32 arg4)
{
    s16 arg1 = p1;
    s16 arg2 = p2;
    s16 arg3 = p3;
    XY5 tbl;
    SV8 v;
    s32 s;
    s32 i;
    s32 o;

    tbl = D_sc03_105_801B822C;
    s = (rsin((D_800B99DA << 6) & 0x7C0) * 16) >> 12;
    if (D_800B99DA % 6 == 0) {
        v.z = 0;
        for (i = 0; i < 5; i++) {
            v.x = tbl.p[i].x + s;
            v.y = tbl.p[i].y;
            o = func_sc03_105_801850D8(1, (s16)(arg1 + rand() % (arg1 >> 1)), arg2, arg3, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0);
            if (o != 0) {
                AF(o, s32, 0x20) |= arg4;
            }
        }
    }
    if (D_800B99DA % 4 == 0) {
        v.x = s;
        v.y = 0;
        v.z = 0;
        o = func_sc03_105_801850D8(1, (s16)(arg1 + rand() % (arg1 >> 1)), arg2, arg3, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0xFFF80000);
        if (o != 0) {
            AF(o, s32, 0x20) |= arg4;
        }
    }
    if (D_800B99DA % 5 == 0) {
        v.y = -4;
        v.z = 0;
        for (i = 0; i < 2; i++) {
            { s32 u = i * 32; s32 t = s - 16; v.x = u + t; }
            o = func_sc03_105_801850D8(1, (s16)(arg1 + rand() % (arg1 >> 1)), arg2, arg3, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0xFFFA0000);
            if (o != 0) {
                AF(o, s32, 0x20) |= arg4;
            }
        }
    }
    if (D_800B99DA % 6 == 0) {
        v.y = -16;
        v.z = 0;
        for (i = 0; i < 2; i++) {
            { s32 u = i * 64; s32 t = s - 32; v.x = u + t; }
            o = func_sc03_105_801850D8(1, (s16)(arg1 + rand() % (arg1 >> 1)), arg2, arg3, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0xFFFA0000);
            if (o != 0) {
                AF(o, s32, 0x20) |= arg4;
            }
        }
    }
}

void func_sc03_105_801829CC(u8 *o) {
    SV8 rot;
    s32 w[4];
    s32 m[8];
    s32 i, j, k, n;
    u8 *p;
    u8 *q;

    rot.z = 0;
    rot.x = 0;
    w[1] = 0;
    w[0] = 0;
    w[2] = 0xFFEF0000;
    for (i = 0; i < 6; i++) {
        p = (u8 *)func_sc03_105_801850D8(2, 0x4000, 0, 0, &D_800D3918, o, &D_sc03_105_8018E4DC, 0);
        if (p != 0) {
            k = 0x1800;
            rot.y = i * 0x2AA;
            RotMatrixZYX(&rot, m);
            ApplyMatrixLV(m, w, p + 0x10);
            AF(p, s16, 0x3A) = -1;
            AF(p, s16, 0x50) = i;
            AF(p, s32, 0x20) |= 0x300000;
            AF(p, s16, 0x4C) = rand() % 8;
            AF(p, s16, 0xA) = -0x40;
            for (j = 0; j < 8; j++, k += 0x400) {
                q = (u8 *)func_sc03_105_801850D8(3, (s16)k, 0, 0, &D_800D3918, o, &D_sc03_105_8018E47C, 0);
                if (q != 0) {
                    AF(q, u8 *, 0x50) = p + 0x34;
                    AF(q, s16, 0x54) = j;
                    AF(q, s16, 0x56) = i;
                    AF(q, u16, 0x2C) += 0x2000;
                    AF(q, s32, 0x20) |= 0x300000;
                    AF(q, s16, 0x4C) = rand() % 8;
                }
            }
        }
        n = i * 8;
        AF(&D_sc03_105_801BA5A8, s16, n) = 0;
        AF(&D_sc03_105_801BA5A8, s16, n + 2) = 0;
        AF(&D_sc03_105_801BA5A8, s16, n + 4) = 0;
    }
}

void func_sc03_105_80182BD8(u8 *o, u8 *t, s32 n, s32 flag) {
    WMtx m1;
    WMtx m2;
    SV8 a;
    SV8 b;
    SV8 d;
    u8 *mdl;
    u8 *p;
    s32 r;
    s32 i;

    mdl = AF(AF(o, u8 *, 0x20), u8 *, 0x20);
    while (AF(t, s16, 0) != -1) {
        func_sc03_105_80184FBC(mdl, AF(t, s16, 0), &m1);
        func_sc03_105_80184FBC(mdl, AF(t, s16, 2), &m2);
        func_8012F14C(&m1, &D_800D3918, &a);
        func_8012F14C(&m2, &D_800D3918, &b);
        d.x = b.x - a.x;
        d.y = b.y - a.y;
        d.z = b.z - a.z;
        AF(t, s16, 4) = a.x;
        AF(t, s16, 6) = a.y;
        AF(t, s16, 8) = a.z;
        r = VectorNormalSS(&d, t + 0xC);
        if (flag == 0) {
            AF(t, s16, 0x12) = SquareRoot0(r);
            for (i = 0; i < n; i++) {
                p = (u8 *)func_sc03_105_801850D8(4, 0x3000, 0, 0, &d, o, &D_sc03_105_8018E47C, 0);
                if (p != 0) {
                    AF(p, u8 *, 0x50) = t;
                    AF(p, s16, 0x54) = i;
                    AF(p, s16, 0x56) = n;
                    AF(p, s16, 0x4C) = rand() % 8;
                    AF(p, s32, 0x20) |= 0x800000;
                }
            }
        }
        t += 0x14;
    }
}

void func_sc03_105_80182DCC(s32 arg0) {
    SV8 v;
    u8 *w;
    s32 i;
    s32 j;
    s32 off;
    s32 x1;
    s32 x2;
    s32 x3;
    u32 range;
    s32 p;
    s32 half;
    s32 half2;
    s32 half3;

    w = &D_800AF630;
    if (D_800B99DA % 7 == 0) {
        range = 0x1400;
        v.x = 0x30;
        v.y = 0;
        v.z = 0;
        for (i = 0, half = range >> 1; i < 7; i++) {
            x1 = range + rand() % half;
            p = func_sc03_105_801850D8(1, x1, 0, 0, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0);
            if (p != 0) {
                AF(p, s32, 0x20) |= 0xA00000;
            }
            v.x -= 0x10;
        }
    }
    if (AF(w, u16, 0xA3AA) % 9 == 0) {
        range = 0x2000;
        v.y = 8;
        v.z = 0;
        for (i = 0, half2 = range >> 1; i < 5; i++) {
            v.x = 8;
            v.y = -0x20 - i * 4 + v.y;
            for (j = 0; j < 3; j++) {
                x2 = (s16)(range + rand() % half2 + i * 0x600);
                p = func_sc03_105_801850D8(1, x2, 0, 0, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0);
                if (p != 0) {
                    AF(p, s32, 0x20) |= 0xA00000;
                }
                v.x -= 8;
            }
        }
        v.y = 0;
        for (i = 0, half3 = range >> 1, off = 0x800; i < 2; i++, off += 0x800) {
            v.x = 8;
            v.y += 0x14;
            for (j = 0; j < 3; j++) {
                x3 = (s16)(range + rand() % half3 - off);
                p = func_sc03_105_801850D8(1, x3, 0, 0, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0);
                if (p != 0) {
                    AF(p, s32, 0x20) |= 0xA00000;
                }
                v.x -= 8;
            }
        }
    }
}

void func_sc03_105_80183174(u8 *o, s32 a1) {
    SV8 a;
    SV8 b;

    a.x = D_sc03_105_801BA628[0];
    a.y = D_sc03_105_801BA62A;
    a.z = D_sc03_105_801BA62C;
    func_sc03_105_801831E0(o, a1);
    b.x = D_sc03_105_801BA628[0];
    b.y = D_sc03_105_801BA62A;
    b.z = D_sc03_105_801BA62C;
}

void func_sc03_105_801831E0(u8 *o, s32 n) {
    SV8 *p = &D_sc03_105_801BA6A0;
    s32 i;
    s32 r;
    s32 v;
    s32 nr;
    S32R *t;

    switch (n) {
    case 0:
        for (i = 0x17; i >= 0; i--) {
            p->x = AF(o, s16, 6);
            p->y = AF(o, s16, 0xA);
            p->z = AF(o, s16, 0xE);
            p--;
        }
        break;
    case 1:
    case 3:
        D_sc03_105_801BA5E8 = AF(o, s16, 6);
        D_sc03_105_801BA5EA = AF(o, s16, 0xA);
        D_sc03_105_801BA5EC = AF(o, s16, 0xE);
        for (i = 0x17; i > 0; i--, p--) {
            AF(p, s16, 0) = AF(p, s16, -8);
            AF(p, s16, 2) = AF(p, s16, -6);
            AF(p, s16, 4) = AF(p, s16, -4);
            if (!(D_800B99DA & 7) && (i & 1)) {
                r = rand() % 4096;
                if (!(rand() & 1)) {
                    nr = -r;
                    r = nr + 0x4000;
                } else {
                    r += 0x4000;
                }
                v = func_sc03_105_801850D8(5, (s16)r, 0, 0, p, 0, D_sc03_105_8018E59C[rand() & 1].v, 0);
                if (v != 0) {
                    AF(v, s32, 0x50) = (s32)p;
                    AF(v, s32, 0x54) = n - 1;
                    AF(v, s32, 0x20) |= 0x200000;
                }
            }
        }
        break;
    case 2:
        i = 0x17;
        t = D_sc03_105_8018E59C;
        for (; i > 0; i--, p--) {
            if (!(D_800B99DA & 7) && (i & 1)) {
                r = rand() % 4096;
                if (!(rand() & 1)) {
                    nr = -r;
                    r = nr + 0x4000;
                } else {
                    r += 0x4000;
                }
                v = func_sc03_105_801850D8(5, (s16)r, 0, 0, p, 0, t[rand() & 1].v, 0);
                if (v != 0) {
                    AF(v, s32, 0x50) = (s32)p;
                    AF(v, s32, 0x54) = n;
                    AF(v, s32, 0x20) |= 0x200000;
                }
            }
        }
        break;
    }
}

void func_sc03_105_801834A4(s32 arg0) {
    SV8 v;
    s32 i;
    s32 j;
    s16 range;
    s32 o;
    s32 n;

    if ((D_800B99DA & 7) == 0) {
        v.y = 0;
        v.z = 0;
        for (i = 0; i < 6; i++) {
            n = D_sc03_105_8018E894[i];
            range = n * 0x600 + 0x2000;
            v.x = n * 6 + 0x12;
            v.y -= 0x24;
            for (j = 0; j < 4; j++) {
                o = func_sc03_105_801850D8(1, (s16)(range + rand() % (range >> 2)), 0, 0, &v, arg0, D_sc03_105_8018E59C[rand() & 1].v, 0);
                if (o != 0) {
                    AF(o, s32, 0x20) |= 0x800000;
                }
                v.x -= ((n * 6 + 0x12) * 2) / 3;
            }
        }
    }
}

void func_sc03_105_8018364C(u8 *o) {
    SV8 v;
    u8 *p;
    s32 i;
    s32 a;
    s32 r;
    s32 m;

    v.z = 0;
    v.x = 0;
    v.y = -0x120;
    for (i = 0; i < 10; i++) {
        r = rand();
        a = i << 9;
        m = r % 1024 + 0x3000;
        p = (u8 *)func_sc03_105_801850D8(6, (s16)(a + m), 0, 0, &v, o, &D_sc03_105_8018E47C, 0);
        if (p != 0) {
            AF(p, s16, 0x52) = i;
            AF(p, s16, 0x4C) = rand() % 8;
        }
    }
}

void func_sc03_105_8018373C(s32 o, s32 z) {
    V3 v;

    v.z = z;
    v.y = 0;
    v.x = 0;
    func_sc03_105_8018383C(o, &v);
}

void func_sc03_105_80183768(u8 *o, s32 a, s32 b) {
    V3 v;

    v.x = (a * (rcos((AF(o, s32, 0x1C) << 5) & 0xFE0) - rcos(((AF(o, s32, 0x1C) - 1) << 5) & 0xFE0))) << 4;
    v.z = 0;
    v.y = -((b * (rsin((AF(o, s32, 0x1C) << 5) & 0x7E0) - rsin(((AF(o, s32, 0x1C) - 1) << 5) & 0x7E0))) << 4);
    func_sc03_105_8018383C(o, &v);
}

void func_sc03_105_8018383C(u8 *o, s32 v) {
    s32 m[8];

    RotMatrixZYX(&D_sc03_105_801BA5A0, m);
    ApplyMatrixLV(m, v, o + 0x10);
}

s32 func_sc03_105_8018388C(u8 *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;
    s32 x;
    s32 y;

    x = (D_80126B90 & 0x0FFFFFFF) | 0x80000000;
    y = (AF(o, s32, 0x58) & 0x0FFFFFFF) | 0x80000000;
    a.x = D_80126B5E;
    a.y = D_80126B62;
    a.z = D_80126B66;
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    if (func_8013361C(x, y, &a, &b) != 0) {
        c.x = a.x - b.x;
        c.y = a.y - b.y;
        c.z = a.z - b.z;
        VectorNormalSS(&c, &c);
        func_8012F568(1, 0x4201, 0, n, &b, &c);
        return 1;
    }
    return 0;
}

s32 func_sc03_105_801839A4(u8 *o, s32 n) {
    SV8 a;
    SV8 b;

    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_105_8018E8AC[0], &a);
    func_8012F14C((u8 *)D_80126B78 + 0x34, &D_sc03_105_8018E8AC[1], &b);
    if (func_80135888(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
        func_8012F568(1, 0x4201, AF(AF(o, u8 *, 0x20), s16, 0x12), n, &b, &D_801152A8);
        return 1;
    }
    return 0;
}

s32 func_sc03_105_80183A64(u8 *o, s32 hi, s32 lo) {
    s32 v;

    v = AF(o, s32, 4);
    if (hi < v) {
        AF(o, s32, 4) = hi;
        return 1;
    }
    if (v < lo) {
        AF(o, s32, 4) = lo;
        return 1;
    }
    return 0;
}

s32 func_sc03_105_80183A98(u8 *o) {
    XY v;
    s32 s, r, b, x;

    s = func_sc03_105_80183CA4(o);
    if (s & 0x2000) {
        if (rand() & 0xF) {
            v.x = AF(o, s32, 0x10) >> 8;
            v.y = AF(o, s32, 0x14) >> 8;
            AF(o, s32, 0xF0) = func_sc03_105_80183C6C(&D_800D3918, &D_801152A8) * 2 - func_sc03_105_80183C6C(&v, &D_800D3918);
        } else {
            r = rand() % 512;
            b = AF(o, s32, 0xF0) + 0x800;
            if (!(rand() & 1)) {
                x = b - r;
            } else {
                x = b + r;
            }
            AF(o, s32, 0xF0) = x;
        }
        return 1;
    }
    if (s & 0x8000) {
        if (rand() & 0xF) {
            v.x = AF(o, s32, 0x10) >> 8;
            v.y = AF(o, s32, 0x14) >> 8;
            AF(o, s32, 0xF0) = func_sc03_105_80183C6C(&D_800D3918, &D_801152B0) * 2 - func_sc03_105_80183C6C(&v, &D_800D3918);
        } else {
            r = rand() % 512;
            b = AF(o, s32, 0xF0) + 0x800;
            if (!(rand() & 1)) {
                x = b - r;
            } else {
                x = b + r;
            }
            AF(o, s32, 0xF0) = x;
        }
        return 1;
    }
    return 0;
}

s32 func_sc03_105_80183C20(u8 *o) {
    XY a;
    XY b;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    b.x = D_80126B5E;
    b.y = D_80126B62;
    return func_sc03_105_80183C6C(&a, &b);
}

s32 func_sc03_105_80183C6C(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg1, s16, 2);
    return (ratan2(temp_a2 - AF(arg0, s16, 2), AF(arg1, s16, 0) - AF(arg0, s16, 0), (s32) temp_a2) - 0x400) & 0xFFF;
}

s32 func_sc03_105_80183CA4(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;

    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    func_8012AD80(o);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    r = func_8012CEB0(&a, &b, 0x11);
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xA) = b.y;
    AF(o, s16, 0xE) = b.z;
    return r;
}

u8 *func_sc03_105_80183D38(u8 *o, s32 a1, s32 a2) {
    Arg14ABC d;

    d.v[0] = AF(o, s16, 6);
    d.v[1] = AF(o, s16, 0xA);
    d.v[2] = AF(o, s16, 0xE);
    d.v[3] = 0x170;
    d.v[4] = a1;
    d.v[5] = 0;
    d.v[6] = 0x7FFF;
    d.v[7] = 0;
    d.w = a2;
    return ((u8 *(*)())func_8012C51C)(&d, o);
}

void func_sc03_105_80183DA0(u8 *o) {
    SV8 a;
    SV8 b;
    s16 vol;
    s16 pan;

    vol = 0x7F;
    pan = 7;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    func_8012EFB8(&a, &b);
    if ((b.x < 0 ? -b.x : b.x) < 0x140) {
        vol -= b.x >= 0 ? b.x * 0x7F / 320 : -b.x * 0x7F / 320;
    } else {
        vol = 0;
    }
    pan += b.x / 20;
    if (pan < 0) {
        pan = 0;
    } else if (pan >= 0x10) {
        pan = 0xF;
    }
    func_8002D4C8(0x730, (u16)(vol | ((pan << 8) | 0x3000)));
}

void func_sc03_105_80183EE8(void) {
    func_8002D4C8(4, 0x730);
}

s32 func_sc03_105_80183F0C(s32 arg0) {
    void *temp_v0;
    void *temp_v1;

    D_sc03_105_801BA5A0 = 0;
    D_sc03_105_801BA5A2 = 0;
    D_sc03_105_801BA5A4 = 0;
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x1800;
    AF(temp_v1, s16, 0x18) = 0x1800;
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x12) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    return ((s32 (*)())func_sc03_105_80184604)(0);
}

void func_sc03_105_80183F84(u8 *o, u8 *b) {
    Q40 q;
    WMtx m;
    s32 flag;
    s32 i;
    s16 dx;
    s16 dy;
    s16 u0;
    s16 u1;
    s16 w;

    if (b == 0) return;
    q.code = 0x50000000;
    q.flag = 0x74;
    q.p[0].x = -0x20;
    q.p[0].y = -0x10;
    q.p[1].x = 0x20;
    q.p[1].y = -0x10;
    q.p[2].x = -0x20;
    q.p[2].y = 0x10;
    q.p[3].x = 0x20;
    q.p[3].y = 0x10;
    q.p[0].z = q.p[1].z = q.p[2].z = q.p[3].z = 0;
    dx = AF(b, s16, 4);
    dy = AF(b, s16, 6);
    q.col = 0x808080;
    m.t[0] = m.t[1] = m.t[2] = 0;
    func_80020DA4(b + 8, &m);
    func_80020F34(&m, b + 0x10);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    for (i = 0; i < 4; i++) {
        RotTransSV(&q.p[i], &q.p[i], &flag);
    }
    q.p[0].x += dx;
    q.p[0].y += dy;
    q.p[1].x += dx;
    q.p[1].y += dy;
    q.p[2].x += dx;
    q.p[2].y += dy;
    q.p[3].x += dx;
    q.p[3].y += dy;
    if (!(AF(b, s32, 0) & 1)) {
        u0 = 0xF14;
        w = 0x1E0;
        u1 = 0xF53;
    } else {
        u0 = 0xF53;
        w = 0x1E0;
        u1 = 0xF14;
    }
    q.uv[1] = w;
    q.uv[3] = w;
    q.uv[0] = u0;
    q.uv[2] = u1;
    q.uv[4] = u0;
    q.uv[5] = 0x1FF;
    q.uv[6] = u1;
    q.uv[7] = 0x1FF;
    if (!(AF(b, s32, 0) & 2)) {
        func_80016EF8(&q, AF(o, u8 *, 0x20) + 0x34);
    } else {
        m = D_800AE620;
        func_80020F34(&m, AF(o, u8 *, 0x20) + 0x18);
        m.t[0] = AF(AF(o, u8 *, 0x20), s32, 0x48);
        m.t[1] = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        m.t[2] = AF(AF(o, u8 *, 0x20), s32, 0x50);
        func_80016EF8(&q, &m);
    }
}

void func_sc03_105_8018423C(u8 *o) {
    SV8 a;
    SV8 b;
    u8 unused[8];
    SV8 c;
    s32 i, k, j;
    s32 r;
    S32R *t;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b.z = 0;
    b.x = 0;
    i = 0;
    for (; i < 3; i++) {
        b.y = -((i + 1) << 7);
        FaceHelper(o, &b, &b);
        t = D_sc03_105_8018E59C;
        if (func_80135004(1, &a, &b) != 0) {
            if (D_800B99DA & 7) {
                return;
            }
            k = -0x40;
            c = b;
            for (j = 0; j < 8; j++, k += 0x10) {
                c.x = b.x + k;
                r = (s16)(rand() % 4096 + 0x2000);
                func_sc03_105_801850D8(7, r, 0, 0, &c, 0, t[rand() & 1].v, 0);
            }
            return;
        }
        a = b;
    }
}

s32 func_sc03_105_801843DC(s32 arg0) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801202A0;
    do {
        if ((AF(var_s0, u16, 0) == 0x170) && (AF(var_s0, s16, 0x70) & 0x8000)) {
            func_8012C218((s32) var_s0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0x60;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_105_80184458(void) {
    u16 *a = D_sc03_105_8018E7A0;
    u16 *b = (u16 *)&D_sc03_105_8018E7C0;
    s32 i;

    for (i = 0; i < 16; i++) {
        D_sc03_105_801BA6B4[i].x = (*b & 0x1F) - (*a & 0x1F);
        D_sc03_105_801BA6B4[i].y = ((*b >> 5) & 0x1F) - ((*a >> 5) & 0x1F);
        D_sc03_105_801BA6B4[i].z = ((*b >> 10) & 0x1F) - ((*a >> 10) & 0x1F);
        a++;
        b++;
    }
}

extern u16 D_sc03_105_801BA714[];

void func_sc03_105_80184500(u8 *o) {
    u16 *d;
    u16 *s;
    s32 i;
    s32 f;
    s16 c;
    s32 r, g, b;
    s32 rr, gg, bb;
    s32 tx, ty, tz;

    d = D_sc03_105_801BA714;
    s = D_sc03_105_8018E7A0;
    f = AF(o, s32, 0xF4);
    for (i = 0; i < 16; i++, s++) {
        tx = D_sc03_105_801BA6B4[i].x;
        ty = D_sc03_105_801BA6B4[i].y;
        tz = D_sc03_105_801BA6B4[i].z;
        c = *s;
        r = c & 0x1F;
        rr = (r + ((tx * f) >> 16)) & 0x1F;
        g = (c >> 5) & 0x1F;
        gg = (g + ((ty * f) >> 16)) & 0x1F;
        b = (c >> 10) & 0x1F;
        bb = (b + ((tz * f) >> 16)) & 0x1F;
        *d++ = rr | ((bb << 10) | (gg << 5)) | 0x8000;
    }
    LoadImage((void *)&D_sc03_105_8018E7E0, (void *)D_sc03_105_801BA714);
}

void func_sc03_105_80184604(s32 n) {
    if (n != -1) {
        D_sc03_105_801BA6A8 = &D_sc03_105_8018E680[n * 0x18];
        D_sc03_105_801BA6AC = &D_sc03_105_8018E680[n * 0x18 + 0x18];
    } else {
        D_sc03_105_801BA6A8 = 0;
        D_sc03_105_801BA6AC = 0;
    }
}

void func_sc03_105_8018465C(u8 *arg0) {
    D_sc03_105_8018E8DC[AF(arg0, u16, 2)]();
}

void func_sc03_105_80184698(u8 *o) {
    func_80016714(D_sc03_105_801BA734, 0x2280);
    D_sc03_105_801BC9B4 = D_800AE620;
    D_sc03_105_801BC9C4 = 0x1000;
    AF(o, u16, 2)++;
}

extern void (*D_sc03_105_8018E8BC[])();
void func_sc03_105_80184738(void) {
    s32 i;
    u8 *p;

    p = D_sc03_105_801BA734;
    for (i = 0; i < 0x60; i++, p += 0x5C) {
        if (AF(p, u16, 0) != 0) {
            D_sc03_105_8018E8BC[AF(p, u16, 0)](p);
        }
    }
}

void func_sc03_105_801847B0(void) {
}

void func_sc03_105_801847B8(u8 *o) {
    u8 *p;
    u8 unused[16];

    if (AF(o, u16, 2) != 0) {
        if (AF(o, s32, 0x1C) == 0) {
            p = o + 0x20;
            if (func_sc03_105_80185680(p, o + 0x48) == 1) {
                if (rand() & 1) {
                    func_sc03_105_8018574C(p);
                }
                func_sc03_105_80185218(o);
            } else {
                func_sc03_105_80185238(o);
                AF(o, s16, 0x34) = AF(o, s16, 6);
                AF(o, s16, 0x36) = AF(o, s16, 0xA);
                AF(o, s16, 0x38) = AF(o, s16, 0xE);
                func_sc03_105_80185810(p);
            }
        } else {
            AF(o, s32, 0x1C)--;
        }
    } else {
        AF(o, u16, 2)++;
        AF(o, s32, 0x1C) = rand() % 4;
    }
}

void func_sc03_105_801848A4(u8 *o) {
    u8 *p;
    SV8 v;
    u16 s;

    p = o + 0x20;
    func_sc03_105_80185680(p, o + 0x48);
    s = AF(o, u16, 2);
    switch (s) {
    case 0:
        func_sc03_105_80185238(o);
        AF(o, s16, 0x34) = AF(o, s16, 6);
        AF(o, s16, 0x36) = AF(o, s16, 0xA);
        AF(o, s16, 0x38) = AF(o, s16, 0xE);
        if (++AF(o, s32, 0x1C) >= 0x1E) {
            AF(o, s16, 2)++;
        }
        break;
    case 1:
        if (AF(AF(o, u8 *, 0x40), s32, 0xE0) & 1) {
            AF(o, s16, 6) = AF(o, s16, 0x34);
            AF(o, s16, 0xA) = AF(o, s16, 0x36);
            AF(o, s16, 0xE) = AF(o, s16, 0x38);
            AF(o, s16, 2) = s + 1;
            AF(o, s32, 0x1C) = 0;
            AF(o, s32, 0x10) = -AF(o, s32, 0x10);
            AF(o, s32, 0x14) = -AF(o, s32, 0x14);
            AF(o, s32, 0x18) = -AF(o, s32, 0x18);
        }
        break;
    case 2:
        func_sc03_105_80185238(o);
        AF(o, s16, 0x34) = AF(o, s16, 6);
        AF(o, s16, 0x36) = AF(o, s16, 0xA);
        AF(o, s16, 0x38) = AF(o, s16, 0xE);
        if (++AF(o, s32, 0x1C) >= 0x1E) {
            func_sc03_105_80185218(o);
            return;
        }
        break;
    }
    v.x = AF(p, u16, 0x14);
    v.y = 0;
    v.z = AF(p, u16, 0x18);
    AF(p, s16, 0x1A) = SquareRoot0(VectorNormalSS(&v, &D_sc03_105_801BA5A8 + AF(o, s16, 0x50) * 8));
    func_sc03_105_80185480(o, 0x28);
    func_sc03_105_80185810(p);
}

void func_sc03_105_80184A60(u8 *arg0) {
    s32 temp_lo;
    void *temp_s1;
    void *temp_s2;
    void *temp_v1;

    temp_s1 = AF(arg0, void *, 0x50);
    temp_s2 = arg0 + 0x20;
    if (AF(temp_s1, s16, 6) == 0) {
        func_sc03_105_80185218((s32) arg0);
        return;
    }
    func_sc03_105_80185680((s32) temp_s2, (s32) (arg0 + 0x48));
    temp_lo = AF(arg0, s16, 0x54) * ((s16) AF(temp_s1, s16, 6) / 8);
    temp_v1 = (AF(arg0, s16, 0x56) * 8) + &D_sc03_105_801BA5A8;
    AF(arg0, s16, 0x34) = (s16) ((s32) (temp_lo * AF(temp_v1, s16, 0)) >> 0xC);
    AF(arg0, s16, 0x36) = (s16) (((s32) (temp_lo * AF(temp_v1, s16, 2)) >> 0xC) - 0x40);
    AF(arg0, s16, 0x38) = (s16) ((s32) (temp_lo * AF(temp_v1, s16, 4)) >> 0xC);
    func_sc03_105_80185810((s32) temp_s2);
}

void func_sc03_105_80184B50(u8 *arg0) {
    s32 temp_lo;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = AF(arg0, void *, 0x50);
    temp_s2 = arg0 + 0x20;
    if (AF(AF(arg0, void *, 0x40), s32, 0xE0) & 2) {
        func_sc03_105_80185218((s32) arg0);
        return;
    }
    if ((func_sc03_105_80185680((s32) temp_s2, (s32) (arg0 + 0x48)) == 1) && (rand() & 1)) {
        func_sc03_105_8018574C((s32) temp_s2);
    }
    temp_lo = AF(arg0, s16, 0x54) * ((s16) AF(temp_s1, s16, 0x12) / (s16) AF(arg0, s16, 0x56));
    AF(temp_s2, s16, 0x14) = (s16) (AF(temp_s1, u16, 4) + ((s32) (temp_lo * AF(temp_s1, s16, 0xC)) >> 0xC));
    AF(temp_s2, s16, 0x16) = (s16) (AF(temp_s1, u16, 6) + ((s32) (temp_lo * AF(temp_s1, s16, 0xE)) >> 0xC));
    AF(temp_s2, s16, 0x18) = (s16) (AF(temp_s1, u16, 8) + ((s32) (temp_lo * AF(temp_s1, s16, 0x10)) >> 0xC));
    func_sc03_105_8018526C((s32) arg0, -0x18, 0x18, 0x30);
    func_sc03_105_80185810((s32) temp_s2);
}

void func_sc03_105_80184CA8(u8 *o) {
    u8 *p;
    u8 *q;
    s16 b[8];
    SV8 r;
    s32 x;
    s16 t;
    s32 d;
    u16 s;

    q = AF(o, u8 *, 0x50);
    p = o + 0x20;
    if (AF(o, s32, 0x54) == 0) {
        AF(o, s16, 0x28) = func_sc03_105_80185628(o + 0x34, q);
    }
    s = AF(o, u16, 2);
    AF(o, s16, 0x34) = AF(q, s16, 0);
    AF(o, s16, 0x36) = AF(q, s16, 2);
    AF(o, s16, 0x38) = AF(q, s16, 4);
    if (s != 0) {
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
        } else if (func_sc03_105_80185680(p, o + 0x48) == 1) {
            d = rand() % (AF(o, s16, 0x2C) * 2 >> 8);
            x = AF(o, s16, 0x34);
            if (rand() & 1) {
                r.x = x + d;
            } else {
                r.x = x - d;
            }
            r.y = AF(p, u16, 0x16) + AF(p, u16, 0x1E);
            r.z = AF(p, u16, 0x18);
            func_sc03_105_8017E5C8(&r);
            func_sc03_105_80185218(o);
        } else {
            t = AF(o, s16, 0x2C) >> 9;
            b[2] = -t;
            b[3] = t;
            t = AF(o, s16, 0x2E) >> 9;
            b[4] = -t;
            b[5] = t;
            t = AF(o, s16, 0x30) >> 9;
            b[6] = -t;
            b[7] = t;
            func_sc03_105_80185380(o, b, 0x30);
            func_sc03_105_80185810(p);
        }
    } else {
        AF(o, s16, 2) = s + 1;
        AF(o, s32, 0x1C) = rand() % 4;
    }
}

void func_sc03_105_80184E74(u8 *o) {
    u8 *q;
    u8 *p;

    q = AF(o, u8 *, 0x40);
    p = o + 0x20;
    if (AF(q, s32, 0xE0) & 0x10) {
        func_sc03_105_80185218((s32)o);
        return;
    }
    if (func_sc03_105_80185680(p, o + 0x48) == 1 && (rand() & 1)) {
        func_sc03_105_8018574C(p);
    }
    AF(p, s16, 0x14) = AF(o, s16, 0x52) * ((s16)AF(q, u16, 0x102) / 10);
    func_sc03_105_8018526C(o, -0x18, 0x48, 0x30);
    func_sc03_105_80185810(p);
}

void func_sc03_105_80184F5C(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x20;
    if (func_sc03_105_80185680(temp_s1, arg0 + 0x48) == 1) {
        func_sc03_105_80185218(arg0);
        return;
    }
    func_sc03_105_80185810(temp_s1);
}

void func_sc03_105_80184FBC(u32 p, s32 i, u8 *m) {
    SV8 r;
    u8 unused[8];
    u8 *q;
    s32 w;

    if (p & 0x1000000) {
        q = (u8 *)(p & 0xFEFFFFFF) + i * 8;
        r.x = AF(q, u16, 6);
        w = AF(q, s32, 0);
        r.y = AF(q, u8, 1) | ((w & 0xF) << 8);
        r.z = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, m);
        AF(m, s32, 0x14) = AF(q, s8, 3);
        AF(m, s32, 0x18) = AF(q, s8, 4);
        AF(m, s32, 0x1C) = AF(q, s8, 5);
    } else {
        p += i * 12;
        r.x = AF(p, u16, 6);
        r.y = AF(p, u16, 8);
        r.z = AF(p, u16, 0xA);
        RotMatrixZYX(&r, m);
        AF(m, s32, 0x14) = AF(p, s16, 0);
        AF(m, s32, 0x18) = AF(p, s16, 2);
        AF(m, s32, 0x1C) = AF(p, s16, 4);
    }
}

s32 func_sc03_105_801850D8(s32 k, s32 a, s32 b, s32 c, SV8 *p, s32 e, s32 f, s32 g) {
    s32 o;

    o = func_sc03_105_801851E0();
    if (o == 0) {
        return 0;
    }
    AF(o, s32, 0x20) = 0x50000000;
    AF(o, s16, 0x2E) = a;
    AF(o, s16, 0x2C) = a;
    AF(o, s16, 0x30) = 0x1000;
    *(SV8 *)(o + 0x34) = *p;
    AF(o, s32, 0x40) = e;
    AF(o, s16, 0x3C) = b;
    AF(o, s16, 0x3E) = c;
    func_sc03_105_80185660(o + 0x20, o + 0x48, f);
    AF(o, s16, 0) = k;
    AF(o, s32, 0x14) = g;
    AF(o, s16, 6) = p->x;
    AF(o, s16, 0xA) = p->y;
    AF(o, s16, 0xE) = p->z;
    return o;
}

s32 func_sc03_105_801851E0(void) {
    u8 *p;
    s32 i;

    p = D_sc03_105_801BA734;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0) {
            return (s32)p;
        }
        p += 0x5C;
    }
    return 0;
}

s32 func_sc03_105_80185218(s32 arg0) {
    return func_80016714(arg0, 0x5C);
}

s32 func_sc03_105_80185238(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x14);
    AF(arg0, s32, 8) = temp_v0;
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    return temp_v0;
}

s32 func_sc03_105_8018526C(u8 *o, s32 dy1, s32 dy2, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    WMtx m;

    a.x = AF(o, s16, 0x34);
    a.y = AF(o, s16, 0x3E) + (AF(o, s16, 0x36) + dy1);
    a.z = AF(o, s16, 0x38);
    b.x = AF(o, s16, 0x34);
    b.y = AF(o, s16, 0x3E) + (AF(o, s16, 0x36) + dy2);
    b.z = AF(o, s16, 0x38);
    func_sc03_105_80185FB4(AF(AF(o, u8 *, 0x40), s32, 0x20), AF(o, s32, 0x20), &m);
    func_8012F14C(&m, &a, &c);
    func_8012F14C(&m, &b, &d);
    if (func_80135888(D_80126B78, D_80126B90, &c, &d) != 0) {
        func_8012F568(1, 0x4201, 0, n, &d, &D_801152A8);
        return 1;
    }
    return 0;
}

s32 func_sc03_105_80185380(u8 *o, s32 y, s32 n) {
    SV8 a;
    SV8 c;
    s32 x;

    x = (D_80126B90 & 0x0FFFFFFF) | 0x80000000;
    a.x = D_80126B5E;
    a.y = D_80126B62;
    a.z = D_80126B66;
    if (func_8013361C(x, y, &a, o + 0x34) != 0) {
        c.x = a.x - AF(o, s16, 0x34);
        c.y = a.y - AF(o, s16, 0x36);
        c.z = a.z - AF(o, s16, 0x38);
        VectorNormalSS(&c, &c);
        func_8012F568(1, 0x4201, 0, n, o + 0x34, &c);
        return 1;
    }
    return 0;
}

s32 func_sc03_105_80185480(u8 *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    WMtx m;
    UXY u[2];
    u8 *p;
    u8 *g;
    s32 i;

    p = o + 0x20;
    func_sc03_105_80185FB4(AF(AF(o, u8 *, 0x40), s32, 0x20), AF(o, s32, 0x20), &m);
    g = &D_80126B58;
    u[0].w = AF(o, s32, 0x10) * 2;
    u[1].w = AF(o, s32, 0x18) * 2;
    a.x = 0;
    b.x = (AF(o, s16, 0x34) + u[0].s.y) >> 1;
    a.z = 0;
    b.z = (AF(o, s16, 0x38) + u[1].s.y) >> 1;
    a.y = b.y = AF(o, u16, 0x36) + AF(o, u16, 0x3E) + 0x30;
    for (i = 0; i < 2; i++) {
        func_8012F14C(&m, &a, &c);
        func_8012F14C(&m, &b, &d);
        if (func_80135888(AF(g, s32, 0x20), AF(g, s32, 0x38), &c, &d) != 0) {
            func_8012F568(1, 0x4201, 0, n, &d, &D_801152A8);
            return 1;
        }
        a = b;
        b.x = AF(p, u16, 0x14) + u[0].s.y;
        b.z = AF(p, u16, 0x18) + u[1].s.y;
    }
    return 0;
}

s32 func_sc03_105_80185628(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg1, s16, 2);
    return (ratan2(temp_a2 - AF(arg0, s16, 2), AF(arg1, s16, 0) - AF(arg0, s16, 0), (s32) temp_a2) + 0x400) & 0xFFF;
}

void func_sc03_105_80185660(s32 o, s32 p, s32 q) {
    AF(p, s32, 0) = q;
    AF(o, s32, 0x24) = q;
    AF(p, s16, 4) = 0;
    AF(p, s16, 6) = AF(q, u8, 0) & 0x3F;
}

s32 func_sc03_105_80185680(u8 *o, u8 *p) {
    u8 *t;
    s32 r;
    s16 i;
    u8 f;

    t = AF(p, u8 *, 0);
    if (AF(p, s16, 6) == 0) {
        return 1;
    }
    r = 0;
    if (--AF(p, s16, 6) <= 0) {
        i = AF(p, s16, 4);
        f = t[i * 12];
        if (f & 0x40) {
            AF(p, s16, 6) = 0;
            return 1;
        }
        if (f & 0x80) {
            AF(p, s16, 4) = 0;
            r = 1;
        } else {
            AF(p, s16, 4) = i + 1;
        }
        AF(p, s16, 6) = t[AF(p, s16, 4) * 12] & 0x3F;
        AF(o, u8 *, 0x24) = t + AF(p, s16, 4) * 12;
    }
    return r;
}

void func_sc03_105_8018574C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;
    s32 x;

    r = rand() % (AF(o, s16, 0xC) * 2 >> 8);
    x = AF(o, s16, 0x14);
    if (rand() & 1) {
        a.x = x + r;
    } else {
        a.x = x - r;
    }
    a.y = AF(o, u16, 0x16) + AF(o, u16, 0x1E);
    a.z = AF(o, u16, 0x18);
    FaceHelper(AF(o, s32, 0x20), &a, &b);
    func_sc03_105_8017E5C8(&b);
}

void func_sc03_105_80185810(u8 *o) {
    SV8 s[3];
    SV8 v;
    SV8 w2;
    WMtx m;
    s32 sz;
    s32 flag;
    s32 otz;
    u8 *wk = &D_800AF630;
    u32 fl;
    u8 *a;
    u8 *e;
    u8 *p;
    u8 *pk;
    u32 *ot;
    s32 tp;
    s32 sh;
    u16 x;
    u16 y;
    u16 vv;
    s32 yy;
    u32 c;
    u32 t;
    u32 clut;

    fl = AF(o, u32, 0);
    a = AF(o, u8 *, 0x20);
    e = AF(o, u8 *, 0x24);
    if (a != 0) {
        if (fl & 0x800000) {
            gte_SetRotMatrix(wk + 0x18);
            gte_ldclmv(AF(a, u8 *, 0x20) + 0x34);
            gte_rtir();
            gte_stclmv(&m.m[0][0]);
            gte_ldclmv(AF(AF(o, u8 *, 0x20), u8 *, 0x20) + 0x36);
            gte_rtir();
            gte_stclmv(&m.m[0][1]);
            gte_ldclmv(AF(AF(o, u8 *, 0x20), u8 *, 0x20) + 0x38);
            gte_rtir();
            gte_stclmv(&m.m[0][2]);
            gte_SetTransMatrix(wk + 0x18);
            gte_ldlv0(AF(AF(o, u8 *, 0x20), u8 *, 0x20) + 0x48);
            gte_rtv0tr();
            gte_stlvnl(m.t);
        } else {
            func_sc03_105_80185FB4(AF(a, u8 *, 0x20), fl, &m);
            gte_SetRotMatrix(wk + 0x18);
            gte_ldclmv(&m.m[0][0]);
            gte_rtir();
            gte_stclmv(&m.m[0][0]);
            gte_ldclmv(&m.m[0][1]);
            gte_rtir();
            gte_stclmv(&m.m[0][1]);
            gte_ldclmv(&m.m[0][2]);
            gte_rtir();
            gte_stclmv(&m.m[0][2]);
            gte_SetTransMatrix(wk + 0x18);
            gte_ldlv0(m.t);
            gte_rtv0tr();
            gte_stlvnl(m.t);
        }
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        p = AF(AF(o, u8 *, 0x20), u8 *, 0x20) + 0x10;
    } else {
        gte_SetRotMatrix(wk + 0x18);
        gte_SetTransMatrix(wk + 0x18);
        p = o + 4;
    }
    gte_ldv0(o + 0x14);
    gte_rtps();
    gte_stsxy(&s[0]);
    gte_stsz(&sz);
    if ((s[0].x < 0 ? -s[0].x : s[0].x) > 200) {
        return;
    }
    if ((s[0].y < 0 ? -s[0].y : s[0].y) > 160) {
        return;
    }
    D_sc03_105_801BC9B4.m[0][0] = AF(o, s16, 0xC);
    D_sc03_105_801BC9B4.m[1][1] = AF(o, s16, 0xE);
    gte_SetRotMatrix(&D_sc03_105_801BC9B4);
    gte_SetTransMatrix(&D_sc03_105_801BC9B4);
    v.x = AF(e, u16, 8) + AF(o, u16, 0x1C);
    v.y = AF(e, u16, 0xA) + AF(o, u16, 0x1E);
    v.z = sz;
    w2.x = e[2];
    w2.y = e[3];
    w2.z = sz;
    gte_ldv3(&v, &w2, &w2);
    gte_rtpt();
    gte_stsxy0(&s[1]);
    gte_stsxy1(&s[2]);
    gte_stflg(&flag);
    gte_stszotz(&otz);
    if (flag & ~0x1000) {
        return;
    }
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    pk = g_PrimNext;
    g_PrimNext = pk + 0x28;
    pk[3] = 9;
    pk[7] = 0x2C;
    ot = g_WorldOtTable[AF(wk, u16, 0xA3D2)];
    x = AF(e, u16, 4);
    y = AF(e, u16, 6);
    pk[7] = 0x2E;
    AF(pk, u16, 0x16) = (tp << 7) | ((fl >> 23) & 0x60) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    pk[7] |= (fl & 0x40) >> 6;
    pk[0xC] = (x - ((AF(pk, u16, 0x16) & 0xF) << 6)) << sh;
    yy = y;
    if (AF(pk, u16, 0x16) & 0x10) {
        vv = yy - 0x100;
    } else {
        vv = yy;
    }
    pk[0xD] = vv;
    pk[0x14] = pk[0xC] + e[2] - 1;
    pk[0x15] = pk[0xD];
    pk[0x1C] = pk[0xC];
    pk[0x1D] = pk[0xD] + e[3] - 1;
    pk[4] = pk[5] = pk[6] = 0x80;
    pk[0x24] = pk[0x14];
    pk[0x25] = pk[0x1D];
    ((XY *)(pk + 8))->x = s[0].x + s[1].x;
    ((XY *)(pk + 8))->y = s[0].y + s[1].y;
    ((XY *)(pk + 0x10))->x = ((XY *)(pk + 8))->x + s[2].x;
    ((XY *)(pk + 0x18))->y = ((XY *)(pk + 8))->y + s[2].y;
    ((XY *)(pk + 0x10))->y = ((XY *)(pk + 8))->y;
    ((XY *)(pk + 0x18))->x = ((XY *)(pk + 8))->x;
    ((XY *)(pk + 0x20))->x = ((XY *)(pk + 0x10))->x;
    ((XY *)(pk + 0x20))->y = ((XY *)(pk + 0x18))->y;
    c = *(u8 *)&D_sc03_105_801BA6B0;
    if (c == 0) {
        t = (e[1] + 0x100) << 6;
        if (e[1] < 0xE0) {
            clut = t | 0x16;
        } else {
            clut = t | 0x10;
        }
    } else {
        t = (c + 0x100) << 6;
        if (c < 0xE0) {
            clut = t | 0x16;
        } else {
            clut = t | 0x10;
        }
    }
    AF(pk, u16, 0xE) = clut;
    if ((fl & 0x300000) == 0x200000) {
        func_8001F730(p, &s[0], pk);
    }
    addPrim((u32 *)((otz << 2) + (u32)ot) + 1, pk);
}

void func_sc03_105_80185FB4(u8 *a, s32 f, WMtx *m) {
    if (f & 0x200000) {
        func_80020DA4(a + 0x10, m);
    } else {
        *m = D_800AE620;
    }
    if (f & 0x400000) {
        func_80020F34(m, a + 0x18);
    }
    m->t[0] = AF(a, s16, 8);
    m->t[1] = AF(a, s16, 0xA);
    m->t[2] = AF(a, s16, 0xC);
}

void func_sc03_105_80186094(u8 *arg0) {
    D_sc03_105_8018F114[AF(arg0, u16, 2)]();
}

void func_sc03_105_801860D0(u8 *o) {
    s32 v;
    u8 *t;
    u16 h;

    v = func_8012C1B8();
    AF(o, s32, 0x20) = v;
    if (v == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(v, &D_sc03_105_8019CD2C);
    func_8001D0E8(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s16, 2) = 1;
    if ((u32)func_80029504() < 0x258) {
        func_8013373C(0);
        SetScript(o, &D_sc03_105_8018E9AC);
        AF(o, s32, 0x6C) = func_8012C588(0x1DE, o);
        func_8012C588(0x14D, o);
        t = AF(o, u8 *, 0x20);
        h = AF(t, u16, 0x2C);
        D_sc03_105_801BCBBC = 0;
        AF(t, u16, 0x2C) = h | 0x80;
        AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc03_105_8018EE04;
        *(s16 *)&D_sc03_105_8018EE00 = D_sc03_105_8018EE02 = 0xF0;
    } else {
        SetScript(o, &D_sc03_105_8018EAB4);
        func_sc03_105_80188BA8(o);
    }
}

void func_sc03_105_801861DC(s32 arg0, s32 arg1, s32 arg2) {
    if (func_80029504(arg0, arg1, arg2) < 0x258U) {
        AF(arg0, s16, 2) = 2;
        func_80178B18(arg0, (s32) &D_sc03_105_8018EEB4);
        return;
    }
    if (func_8016F1AC() == 0) {
        AF(arg0, s16, 2) = 0xA;
        func_8014704C((s32) &D_80126B58);
    }
}

void func_sc03_105_8018624C(s32 arg0) {
    u8 *w = &D_800AF630;
    s32 i;
    s32 j;
    s32 v;
    s32 off;
    s16 unused[4];

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (!(AF(w, u16, 0xA3AA) & 3)) {
            func_8013C9C4(&D_sc03_105_8018EDF4);
            func_sc03_105_801871C0(arg0, 1, 1);
        }
        break;
    case 3:
        SetScript(arg0, &D_sc03_105_801B1DC8);
        SetScript(AF(arg0, s32, 0x6C), &D_sc03_105_801B2410);
        func_sc03_105_801873C8(arg0);
        AF(arg0, u16, 0x34)++;
    case 4:
        if ((u32)AF(arg0, s32, 0x94) < 0x2C && !(AF(w, u16, 0xA3AA) & 3)) {
            func_8013C9C4(&D_sc03_105_8018EDF4);
            func_sc03_105_801871C0(arg0, 1, 1);
        }
        if (AF(arg0, s32, 0x94) == 0x2B) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    off = j * 0x14;
                    v = (rand() % 3 + 1) | -0x8000;
                    AF(D_sc03_105_8018EE54 + off, s16, 8) = v;
                    func_8012C51C(D_sc03_105_8018EE54 + off, arg0);
                }
            }
            func_sc03_105_801871C0(arg0, 10, 5);
            func_sc03_105_80187434(arg0);
            func_8002D4C8(0x726, 0);
            func_8002D4C8(4, 0x79F);
        }
        if (AF(arg0, s32, 0x94) == 0x4B) {
            func_8002D4C8(0x727, 0);
        }
        if (AF(arg0, s32, 0x94) == 0x84) {
            func_8002D4C8(0xC05, 0);
        }
        if (AF(arg0, s32, 0x94) == 0x5A) {
            func_sc03_105_801871C0(arg0, 15, 5);
        }
        if (AF(arg0, s32, 0x94) >= 0x79 && !(AF(w, u16, 0xA3AA) & 0xF)) {
            func_sc03_105_801871C0(arg0, rand() % 5 + 1, 2);
        }
        break;
    case 5:
        AF(arg0, s32, 0x1C) = 30;
        AF(arg0, u16, 0x34)++;
        func_8002D4C8(0x72D, 0);
        break;
    case 7:
        func_8012A568(func_sc03_105_8017E08C);
        AF(AF(arg0, s32, 0xD0), u16, 0x34)++;
        func_8002D4C8(4, 0x733);
        AF(arg0, u16, 0x34)++;
        break;
    case 9:
        v = func_8012C658(0x14B, 0, arg0);
        AF(arg0, s32, 0xCC) = v;
        func_8012C588(0x3BD, v);
        AF(arg0, u16, 0x34)++;
        func_8002D4C8(0x72F, 0);
        break;
    case 11:
        AF(arg0, u16, 0x34)++;
        func_sc03_105_801870B4();
        break;
    case 13:
        func_sc03_105_8017BF08((s32)&D_sc03_105_8018EE00, (s32)&D_sc03_105_8018EE00 + 2, 2, 0x96);
        AF(arg0, u16, 0x34)++;
        break;
    }
    if (AF(arg0, u16, 0x34) >= 5 && !(AF(w, u16, 0xA3AA) & 0x7F)) {
        func_sc03_105_801871C0(arg0, 5, 5);
    }
    if (func_801789AC(arg0) == 1) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        AF(AF(arg0, s32, 0xCC), s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x5A;
        func_80147054(&D_80126B58);
        func_8002D4C8(4, 0x72F);
    }
}

void func_sc03_105_80186680(u8 *o) {
    if ((rand() & 0xFF) == 0) {
        func_sc03_105_801871C0(o, rand() % 5 + 1, 2);
    }
    if (func_8012BEE8(o) != 0) {
        if (!(rand() & 1)) {
            SetScript(o, &D_sc03_105_8018E8E4);
            SetScript(AF(o, s32, 0x6C), &D_sc03_105_8018E9CC);
            AF(o, s32, 0x1C) = 0x72;
            func_sc03_105_801871C0(o, 7, 3);
            func_8002D4C8(0x728, 0);
        } else {
            AF(o, s32, 0x1C) = 0x5A;
        }
    }
}

void func_sc03_105_8018676C(s32 arg0, s32 arg1, s32 arg2) {
    SetScript(arg0, (s32) &D_sc03_105_801B2A58, arg2);
    SetScript(AF(arg0, s32, 0x6C), (s32) &D_sc03_105_801B2C40);
    func_8012C658(0x222, 0x8000, arg0);
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc03_105_801867D0(u8 *o) {
    u8 *p;
    u8 *p2;
    s32 t;
    s32 n;
    s32 m;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((u32)AF(o, s32, 0x94) < 0x1F && !(AF(o, s32, 0x1C) & 3)) {
            func_8013C9C4(&D_sc03_105_8018EDF4);
            func_sc03_105_801871C0(o, 2, 2);
        }
        if (AF(o, s32, 0x94) == 0x13) {
            func_8002D4C8(0xBC2, 0);
        }
        if (AF(o, s32, 0x94) == 0x24) {
            func_8002D4C8(0xBC3, 0);
        }
        if (AF(o, s32, 0x94) == 0x32) {
            func_8013C9C4(&D_sc03_105_8018AAA4);
            func_sc03_105_801871C0(o, 10, 5);
        }
        if (func_8012E544(0x222) == 0) {
            SetScript(o, &D_sc03_105_801B2E28);
            SetScript(AF(o, s32, 0x6C), &D_sc03_105_801B2FC0);
            n = AF(o, u16, 0x34) + 1;
            m = D_sc03_105_801BCBBC + 1;
            AF(o, u16, 0x34) = n;
            D_sc03_105_801BCBBC = m;
        } else {
            t = AF(o, s32, 0x1C) + 1;
            AF(o, s32, 0x1C) = t;
            if (t >= 300) {
                p = (u8 *)func_8012E544(0x222);
                if (p != 0) {
                    AF(p, s16, 0x100) = 1;
                }
                SetScript(o, &D_sc03_105_8018EACC);
                SetScript(AF(o, s32, 0x6C), &D_sc03_105_8018EC24);
                AF(o, s16, 0x34) = 2;
            }
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0x14) {
            func_8013C9C4(&D_sc03_105_8018AAA4);
            func_sc03_105_801871C0(o, 10, 5);
            func_sc03_105_80187434(o);
            func_8002D4C8(0xC8F, 0);
        }
        if (AF(o, s16, 0x98) == 0) {
            if (D_sc03_105_801BCBBC < 3) {
                AF(o, s16, 2) = 6;
            } else {
                AF(o, s16, 2) = 8;
            }
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc03_105_8018E9BC);
            SetScript(AF(o, s32, 0x6C), &D_sc03_105_8018EAA4);
            AF(AF(o, u8 *, 0xCC), s16, 2) = 1;
            func_8002D4C8(0x72F, 0);
            AF(o, s32, 0x1C) = 0xA0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (AF(o, s32, 0x1C) == 0x64) {
            p2 = AF(AF(o, u8 *, 0xCC), u8 *, 0x20);
            ((TB *)(p2 + 4))->top = 0;
            func_sc03_105_801870B4();
            AF(o, u16, 0x34)++;
        }
    case 4:
        if (func_8012BEE8(o)) {
            AF(o, s16, 2) = 3;
            AF(AF(o, u8 *, 0xCC), s16, 2) = 2;
            AF(o, s32, 0x1C) = 0x5A;
            func_8002D4C8(4, 0x72F);
        }
        break;
    }
}

void func_sc03_105_80186AE8(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_105_8018EFBC);
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_105_80186B24(u8 *o) {
    u8 *w = &D_800AF630;
    u8 *p;
    u8 unused[8];

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        SetScript(o, &D_sc03_105_8018E9BC);
        SetScript(AF(o, s32, 0x6C), &D_sc03_105_8018EAA4);
        func_8002D4C8(0x72D, 0);
        func_8002D4C8(0x79F, 0);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (!(AF(w, u16, 0xA3A8) & 3)) {
            func_8013C9C4(&D_sc03_105_8018EDF4);
        }
        if (!(AF(w, u16, 0xA3AA) & 0x1F)) {
            func_sc03_105_801871C0(o, 5, 5);
        }
        break;
    case 3:
        func_sc03_105_8017E08C();
        AF(o, u16, 0x34)++;
        AF(AF(o, u8 *, 0xD0), u16, 0x34)++;
        func_8002D4C8(4, 0x733);
        func_8002D4C8(4, 0x79F);
        break;
    case 5:
        AF(AF(o, u8 *, 0xCC), s16, 2) = 1;
        AF(o, u16, 0x34)++;
        func_8002D4C8(0x72F, 0);
        break;
    case 7:
        AF(o, u16, 0x34)++;
        p = AF(AF(o, u8 *, 0xCC), u8 *, 0x20);
        ((TB *)(p + 4))->top = 0;
        func_sc03_105_801870B4();
        break;
    case 9:
        AF(o, u16, 0x34)++;
        break;
    }
    if (AF(o, u16, 0x34) >= 3 && !(AF(w, u16, 0xA3AA) & 0x7F)) {
        func_sc03_105_801871C0(o, 5, 5);
    }
    if (func_801789AC(o) == 1) {
        func_80178D18(o);
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x5A;
        AF(AF(o, u8 *, 0xCC), s16, 2) = 2;
        func_8002D4C8(4, 0x72F);
    }
}

void func_sc03_105_80186D54(u8 *o) {
    u8 *p;

    p = AF(o, u8 *, 0xCC);
    func_80178B18(o, &D_sc03_105_8018F04C);
    AF(o, s16, 2) = 9;
    AF(o, s16, 0x34) = 0;
    AF(p, s16, 2) = 1;
    AF(AF(p, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
    func_sc03_105_8017C068();
    func_800D0C48(1);
    func_8014704C(&D_80126B58);
}

void func_sc03_105_80186DDC(u8 *o) {
    u8 *w = &D_800AF630;
    u8 *p;
    u8 *t;
    u8 unused[40];

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        SetScript(o, &D_sc03_105_801B3158);
        SetScript(AF(o, s32, 0x6C), &D_sc03_105_801B3640);
        AF(o, u16, 0x34)++;
        func_8002D4C8(0x79F, 0);
        break;
    case 2:
        func_sc03_105_801874D0(o);
        if ((u32)AF(o, s32, 0x94) < 0x35 && !(AF(w, u16, 0xA3AA) & 3)) {
            func_8013C9C4(&D_sc03_105_8018EDF4);
            func_sc03_105_801871C0(o, 2, 2);
        }
        if (AF(o, s32, 0x94) == 0x48) {
            func_8002D4C8(4, 0x79F);
            func_8002D4C8(0xC30, 0);
        }
        if (AF(o, s32, 0x94) == 0x85) {
            p = AF(o, u8 *, 0xCC);
            func_8013C9C4(&D_sc03_105_8018AAA4);
            func_sc03_105_80187434(o);
            AF(p, s16, 2) = 0xC;
            t = AF(p, u8 *, 0x20);
            AF(t, u32, 4) |= 0x80000000;
            func_8002D4C8(0xC2F, 0);
            AF(o, s16, 0xFE) = 1;
        }
        break;
    case 3:
        AF(o, s32, 0x1C) = 0;
        AF(o, u16, 0x34)++;
        break;
    case 5:
        func_8012C588(0x21E, o);
        func_80132EF4(o, 0x4A);
        func_8013373C(1);
        func_8014704C(&D_80126B58);
        AF(o, u16, 0x34)++;
        break;
    case 7:
        AF(o, s32, 0xD4) = func_8012C588(0x222, o);
        AF(o, u16, 0x34)++;
        break;
    case 9:
        if (func_80174774() != 0) {
            AF(o, u16, 0x34)++;
            func_8002AC00(0x12);
        }
        break;
    }
    if (AF(o, s16, 0xFE) == 1) {
        if (func_8001AAA0(0x66) != 0) {
            AF(o, s16, 0xFE) = 2;
        }
    }
    if (func_801789AC(o) == 1) {
        func_80178D18(o);
        AF(o, s16, 2) = 0xA;
    }
}

void func_sc03_105_80187038(void) {
}

void func_sc03_105_80187040(void) {
    func_sc03_105_801896EC(2);
}

void func_sc03_105_80187060(s32 arg0) {
    func_sc03_105_80189718(arg0);
}

void func_sc03_105_80187080(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xD0) = func_8012C588(0x217, arg0, arg2);
}

s32 func_sc03_105_801870B4(s32 arg0) {
    u16 temp_v0;

    temp_v0 = D_sc03_105_8018EE0C[D_sc03_105_801BCBBC];
    D_sc03_105_8018EDFE = temp_v0;
    D_sc03_105_8018EDFC = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc03_105_801870E8(u8 *o) {
    Arg8C51C d;
    s32 t;

    if ((D_800B99DA & 0xF) == 0) {
        t = AF(o, s32, 0x1C) * 128 - 0x1C0;
        d.x = AF(o, s16, 6) + t;
        d.y = AF(o, s16, 0xA) - 0x80;
        d.z = AF(o, s16, 0xE) - 0x100;
        d.a = 0x21F;
        d.b = 0;
        d.c = 0;
        d.e = AF(o, s32, 0x1C) * 0xC0 - 0x2A0;
        d.w = 0;
        d.d = 0x7FFF;
        func_8012C51C(&d, o);
        func_8002D4C8(0x774, 0);
        if (++AF(o, s32, 0x1C) >= 8) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_105_801871C0(u8 *o, s32 n1, s32 n2) {
    Arg8C51C d;
    s32 i;
    s32 s;
    s32 t;

    d.a = 0x1F3;
    d.c = 0;
    d.d = 0x7FFF;
    d.e = 0;
    d.w = 0;
    d.y = 0;
    for (i = 0; i < n1; i++) {
        s = rand() % 0x1F0;
        d.x = (rand() & 1) ? s : -s;
        d.z = rand() % 256 + 0x80;
        d.b = rand() % 3 + 1;
        func_8012C51C(&d, AF(o, s32, 0x6C));
    }
    for (i = 0; i < n2; i++) {
        t = rand() % 256;
        d.x = (rand() & 1) ? t : -t;
        t = rand() % 16;
        d.z = ((rand() & 1) ? t : -t) - 0xD0;
        d.b = rand() % 3 + 1;
        func_8012C51C(&d, AF(o, s32, 0x6C));
    }
}

void func_sc03_105_801873C8() {
    s32 i;
    s32 n;
    u8 *p;

    p = (u8 *)&D_801202A0;
    n = 0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (*(u16 *)p == 0x1F3 && (AF(p, u16, 0x70) & 0x2000)) {
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = n << 4;
            n++;
        }
    }
}

void func_sc03_105_80187434(u8 *o) {
    u8 *p;
    MAT3 m;
    SV8 v;

    p = (u8 *)func_80132EF4(o, 0x7A);
    if (p != 0) {
        v.x = 0;
        v.y = -0xC5;
        v.z = 0x40;
        func_8012EC04(o, 6, &m);
        func_8012F14C(&m, &v, &v);
        AF(p, s16, 6) = v.x;
        AF(p, s16, 0xA) = v.y;
        AF(p, s16, 0xE) = v.z;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC020;
    }
}

void func_sc03_105_801874D0(u8 *o) {
    s32 buf[8];
    SV8 out;
    u8 *p;

    func_8012EC04(o, 6, buf);
    func_8012F14C(buf, &D_sc03_105_8018F140, &out);
    p = AF(o, u8 *, 0xCC);
    AF(p, u16, 6) = out.x;
    AF(p, u16, 0xA) = out.y + 0x10;
    AF(p, u16, 0xE) = out.z;
}

s32 func_sc03_105_80187540(u8 *arg0) {
    return AF(arg0, s16, 0xFE) == 2;
}

void func_sc03_105_80187554(void) {
    D_sc03_105_801BC9E0 = D_sc03_105_8018ED84;
    D_sc03_105_801BC9D8 = D_sc03_105_8018ED8C;
    func_8012A018(func_sc03_105_8018774C, 0);
    D_8012694C[0] = 0;
    D_80126950 = D_80126954 = 0x708;
    D_80126990 = D_sc03_105_801BC9E0.x;
    D_80126994 = D_sc03_105_801BC9E2;
    D_80126998 = D_sc03_105_801BC9E4;
    D_80126984 = D_sc03_105_801BC9D8.x;
    D_80126988 = D_sc03_105_801BC9DA;
    D_8012698C = D_sc03_105_801BC9DC;
    func_80129CF8();
}

void func_sc03_105_80187668(u8 *o) {
    AF(o, s32, 0x48) = (s16)func_80012C6C(AF(o, s16, 0x48), D_sc03_105_801BC9E0.x, 0xC);
    AF(o, s32, 0x4C) = (s16)func_80012C6C(AF(o, s16, 0x4C), D_sc03_105_801BC9E2, 0xC);
    AF(o, s32, 0x50) = (s16)func_80012C6C(AF(o, s16, 0x50), D_sc03_105_801BC9E4, 0xC);
    AF(o, s32, 0x3C) = (s16)func_80012C6C(AF(o, s16, 0x3C), D_sc03_105_801BC9D8.x, 0xC);
    AF(o, s32, 0x40) = (s16)func_80012C6C(AF(o, s16, 0x40), D_sc03_105_801BC9DA, 0xC);
    AF(o, s32, 0x44) = (s16)func_80012C6C(AF(o, s16, 0x44), D_sc03_105_801BC9DC, 0xC);
}

void func_sc03_105_8018774C(s32 arg0) {
    D_sc03_105_8018F148[AF(arg0, u8, 4)]();
}

void func_sc03_105_80187788(u8 *arg0) {
    D_sc03_105_8018F14C[AF(arg0, u16, 2)]();
}

void func_sc03_105_801877C4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_105_801B44A0);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    SetScript(arg0, (s32) &D_sc03_105_8018EA94);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_80187844(void) {
}

void func_sc03_105_8018784C(u8 *arg0) {
    D_sc03_105_8018F194[AF(arg0, u16, 2)]();
    func_sc03_105_80187F7C();
}

void func_sc03_105_80187890(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 0x102) = -0x1AC;
    AF(arg0, s16, 0xFE) = -0x1AC;
    AF(arg0, s16, 0x104) = -0x1AC;
    AF(arg0, s16, 0x100) = -0x1AC;
    AF(arg0, s32, 0x1C) = 0x1F;
    var_a0 = 0x775;
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 9) {
        var_a0 = 0x733;
    }
    func_8002D4C8(var_a0, 0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_80187928(u8 *arg0) {
    u16 temp_v1;

    func_sc03_105_80187A30((s32) arg0, (s32) AF(arg0, s16, 0xFE), (s32) AF(arg0, s16, 0x100));
    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_8012BEE8((s32) arg0) == 0) {
            AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) + 8);
            AF(arg0, u16, 0x104) = (u16) (AF(arg0, u16, 0x104) + 8);
            return;
        }
        return;
    case 1:
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        return;
    case 2:
        if (func_8012BEE8((s32) arg0) == 0) {
            AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 8);
            AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + 8);
            return;
        }
        if (AF(AF(arg0, void *, 0x64), u16, 2) == 9) {
            func_8002D4C8(4, 0x775);
        }
        func_8012C218((s32) arg0);
        break;
    }
}

void func_sc03_105_80187A30(u8 *obj, s32 arg1, s32 arg2) {
    SPrim105 s;
    SV v[4];
    s32 flag;
    s32 flag2;
    s32 otz;
    s16 x;
    s16 y;
    s32 a;
    s32 i;
    s32 w;
    s32 h;
    s32 rad;
    s32 t;
    s32 r;
    u8 *o;
    u8 *p;
    WMtx *m;

    x = arg1;
    y = arg2;
    s.r = s.g = 0x80;
    s.b = 0x80;
    s.code = 0x40000000;
    s.tp = 0x6B;
    w = 0x10;
    h = 8;
    rad = 30;
    s.uv[0][1] = s.uv[1][1] = 0x100;
    s.uv[2][1] = s.uv[3][1] = 0x100;
    m = &D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    for (;;) {
        if (x >= AF(obj, s16, 0x102) || y >= AF(obj, s16, 0x104)) {
            break;
        }
        v[0].vy = x;
        x += 8;
        v[1].vy = y;
        y += 8;
        s.uv[0][0] = s.uv[2][0] = 0xF54;
        s.uv[1][0] = s.uv[3][0] = 0xF54 + w;
        a = 0;
        v[2].vy = x;
        v[3].vy = y;
        s.uv[2][1] += h;
        s.uv[3][1] += h;
        for (i = 0; i < 8; i++) {
            v[0].vx = v[2].vx = ((rad * rcos(a)) >> 12) - 5;
            v[0].vz = v[2].vz = (rsin(a) >> 8) - 0x96;
            a += 0x100;
            v[1].vx = v[3].vx = ((rad * rcos(a)) >> 12) - 5;
            v[1].vz = v[3].vz = (rsin(a) >> 8) - 0x96;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stflg(&flag);
            gte_stsxy3(&s.v[0], &s.v[1], &s.v[2]);
            gte_ldv0(&v[3]);
            gte_rtps();
            gte_stflg(&flag2);
            flag |= flag2;
            gte_stsxy(&s.v[3]);
            gte_avsz4();
            gte_stotz(&otz);
            if (!(flag & ~0x1000)) {
                s.v[0].vz = otz - 0x20;
                func_80016ED4(&s);
            }
            if (x - 8 == -0x1AC && !(rand() & 0xF)) {
                o = (u8 *) func_80132EF4(obj, 0x4D);
                if (o != NULL) {
                    AF(o, s16, 6) = (v[0].vx + v[1].vx) >> 1;
                    AF(o, s16, 0xA) = v[0].vy;
                    AF(o, s16, 0xE) = (v[0].vz + v[1].vz) >> 1;
                    AF(o, s32, 0x14) = 0x100000;
                    t = (rand() % 2 + 2) << 12;
                    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = t;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                    AF(o, s32, 0x1C) = rand() % 5;
                }
            }
            s.uv[0][0] += w;
            s.uv[1][0] += w;
            s.uv[2][0] += w;
            s.uv[3][0] += w;
        }
        s.uv[0][1] += h;
        s.uv[1][1] += h;
    }
    if (AF(obj, s16, 0x102) >= -0xBC && !(D_800B99DA & 7)) {
        for (i = 0; i < 4; i++) {
            p = (u8 *) func_80132EF4(obj, 0x4D);
            if (p != NULL) {
                AF(p, s32, 0x14) = 0xFFF80000 - ((rand() % 5) << 16);
                AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = (rand() % 4 + 2) << 12;
                r = rand() % 30;
                AF(p, s16, 6) = (rand() & 1) ? r : -r;
                AF(p, s16, 0xA) = -0xBC;
                AF(p, s16, 0xE) = -0x96;
                AF(p, s32, 0x1C) = rand() % 3;
            }
        }
    }
}

void func_sc03_105_80187F7C(void) {
    s16 *src = (s16 *)D_sc03_105_8018F154;
    s16 *dst;
    s32 n = D_800B99DA & 0xF;
    s32 i;

    dst = (s16 *)&D_sc03_105_801BC9E8[15 - n];
    for (i = 0; i <= n; i++) {
        *dst++ = *src++ | 0x8000;
    }
    dst = (s16 *)D_sc03_105_801BC9E8;
    for (i = 0; i < 15 - n; i++) {
        *dst++ = *src++ | 0x8000;
    }
    func_800183E0(&D_sc03_105_8018F174);
}

void func_sc03_105_80188040(u8 *arg0) {
    D_sc03_105_8018F19C[AF(arg0, u16, 2)]();
}

void func_sc03_105_8018807C(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(AF(arg0, s32, 0x20), u16, 0x14) = (u16) AF(arg0, u16, 0xFC);
    func_8012B2CC(arg0);
    temp_v0_2 = rand();
    var_v0 = temp_v0_2 / 32;
    AF(arg0, s16, 0xFE) = (s16) ((temp_v0_2 - (var_v0 << 5)) + 0x20);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_80188114(u8 *o) {
    QuadArg q;
    WMtx m;
    s32 z[4];
    s32 flag;
    SV4 *v;
    s32 i;
    s32 a;
    s32 b;
    u8 *p;
    s32 t;

    t = AF(o, s32, 0xE0) - 0x40;
    AF(o, s32, 0xE0) = t;
    if (t < -0x300) {
        AF(o, s32, 0xE0) = -0x300;
    }
    q.p[0].x = -0x10;
    q.p[1].x = 0x10;
    q.p[2].y = q.p[3].y = AF(o, s32, 0xE0);
    q.p[0].y = q.p[1].y = q.p[2].x = q.p[3].x = q.p[0].z = q.p[1].z = q.p[2].z = q.p[3].z = 0;
    m = D_800AE620;
    RotMatrixZ(-AF(o, s16, 0xFE), &m);
    func_8012F14C(&m, &q.p[2], &q.p[2]);
    m = D_800AE620;
    RotMatrixZ(AF(o, s16, 0xFE), &m);
    func_8012F14C(&m, &q.p[3], &q.p[3]);
    p = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(p);
    gte_SetTransMatrix(p);
    RotTransSV(&q.p[0], &q.p[0], &flag);
    RotTransSV(&q.p[1], &q.p[1], &flag);
    RotTransSV(&q.p[2], &q.p[2], &flag);
    RotTransSV(&q.p[3], &q.p[3], &flag);
    gte_SetRotMatrix(&D_800AF648);
    gte_SetTransMatrix(&D_800AF648);
    for (i = 0, v = q.p; i < 4; i++, v++) {
        gte_ldv0(v);
        gte_rtps();
        gte_stsxy(v);
        gte_stflg(&flag);
        gte_stszotz(&z[i]);
        if (flag & ~0x1000) {
            return;
        }
    }
    a = z[2];
    if (z[3] < a) {
        a = z[3];
    }
    b = z[0];
    if (z[1] < b) {
        b = z[1];
    }
    if (a < b) {
        b = a;
    }
    *(s32 *)&q.c[1] = *(s32 *)&q.c[0] = 0xC0C0C0;
    q.p[0].z = b;
    *(s32 *)&q.c[3] = *(s32 *)&q.c[2] = 0;
    q.code = 0x50000000;
    func_800176F0(&q);
}

void func_sc03_105_8018842C(u8 *p, s32 d0) {
    s8 d = d0;
    u8 lim;

    if (d == 0) return;
    if (d > 0) {
        lim = ~d;
        if (p[0] <= lim) p[0] += d;
        if (p[1] <= lim) p[1] += d;
        if (p[2] <= lim) p[2] += d;
    } else {
        lim = -d;
        if (p[0] >= lim) p[0] += d;
        if (p[1] >= lim) p[1] += d;
        if (p[2] >= lim) p[2] += d;
    }
}

void func_sc03_105_801884D4(u8 *arg0) {
    D_sc03_105_8018F1A4[AF(arg0, u16, 2)]();
}

void func_sc03_105_80188510(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    func_8012AD44(arg0, 1);
    func_8002D4C8(0x72E, 0);
}

void func_sc03_105_8018854C(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    func_8012AD44(arg0, 2);
}

void func_sc03_105_80188574(u8 *o) {
    Arg8C51C *p;
    u8 *q;
    s32 i;

    func_8012AD44(o, 3);
    SetScript(AF(o, s32, 0x64), &D_sc03_105_8018EAB4);
    func_8012C218(AF(AF(o, u8 *, 0x64), s32, 0x6C));
    func_sc03_105_80188BA8(AF(o, s32, 0x64));
    for (i = 3, p = D_sc03_105_8018F758; i < 5; i++) {
        func_8012C51C(p, AF(o, s32, 0x64));
        p++;
    }
    for (i = 0, q = &D_801202A0; i < 0x60; i++, q += 0x10C) {
        if (AF(q, u16, 0) == 0x21F) {
            func_8012C218(q);
        }
    }
    func_8002D4C8(0x732, 0);
}

void func_sc03_105_80188650(u8 *arg0) {
    D_sc03_105_8018F1AC[AF(arg0, u16, 2)]();
}

void func_sc03_105_8018868C(u8 *arg0) {
    D_sc03_105_8018F248[AF(arg0, u16, 2)]();
}

void func_sc03_105_801886C8(u8 *o) {
    u8 *m;
    s16 *q;
    u8 *z;

    if (func_8012C438(o, &D_sc03_105_8018F1CC) == 0) {
        return;
    }
    q = &D_sc03_105_8018F200;
    *q = 0x80;
    D_sc03_105_8018F202 = 0x80;
    D_sc03_105_8018F204 = 0x80;
    AF(AF(o, u8 *, 0x20), s16 *, 0x80) = q;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000;
    D_sc03_105_801BCA48 = (s32)func_8012C194();
    if (D_sc03_105_801BCA48 != 0) {
        z = &D_sc03_105_8018F208;
        func_8001CD9C(D_sc03_105_801BCA48, z);
        m = (u8 *)D_sc03_105_801BCA48;
        AF(m, u16, 0x2C) = 0xC010;
        AF(m, s16, 0x1A) = 0x800;
        AF(m, s16, 0x18) = 0x800;
        AF(m, s32, 4) |= 0x50000000;
        *z = 0;
        D_sc03_105_8018F209 = 0;
        D_sc03_105_8018F20A = 0;
    }
    if (!(AF(o, s16, 0x70) & 0x8000)) {
        AF(o, s32, 0x18) = 0xFFFE0000;
        AF(o, s32, 0x48) = 0x4000;
        AF(o, s16, 6) = -0x3D;
        AF(o, s16, 0xA) = -0x166;
        AF(o, s16, 0xE) = -0xB0;
        func_8012B260(o);
        AF(o, u16, 2)++;
    } else {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0xAE) = -3;
    }
}

void func_sc03_105_80188828(u8 *o) {
    func_8012AD80();
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u32, 8) > 0xFEEEFFFF) {
            AF(o, s32, 8) = 0xFEEF0000;
            AF(o, s32, 0x14) = -((AF(o, s32, 0x14) * 3) >> 2);
            if (++AF(o, s32, 0x1C) >= 7) {
                AF(o, s32, 0x14) = 0;
                AF(o, s32, 0x48) = 0;
                AF(o, s16, 0x34)++;
            }
            if (AF(o, s16, 0xE) < -0x1E9) {
                AF(o, s16, 0xE) = -0x1EA;
            }
            func_8002D4C8(0x773, 0);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), s16, 0x10) += 0x20;
        if (AF(o, s16, 0xE) < -0x1E9) {
            AF(o, s32, 0x18) = 0;
            AF(o, s16, 0xE) = -0x1EA;
            AF(o, s16, 0x34)++;
        }
        break;
    case 2:
        if (func_80174774() != 0) {
            func_sc03_105_80188B64(o);
            return;
        }
        break;
    }
    if (AF(o, s16, 0xFE) == 0 && func_8012BE54(o) < 0x7901 && AF(AF(o, u8 *, 0x64), s16, 0xFE) == 2) {
        func_8002D4C8(0x14C, 0);
        AF(o, s16, 0xFE)++;
    }
    func_sc03_105_80188A94(o);
}

void func_sc03_105_801889D4(u8 *o) {
    WMtx m;
    SV8 v;

    if (AF(o, s16, 0x100) != 0) {
        func_sc03_105_80188B64((s32)o);
        return;
    }
    func_8012EC04(AF(o, s32, 0x64), 6, &m);
    func_8012F14C(&m, &D_sc03_105_8018F254, &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    func_sc03_105_80188A94(o);
    if (AF(o, u16, 0x5C) & 1) {
        func_8002D4C8(0xBC1, 0);
        func_8016B3F4(o);
        *(u16 *)&D_sc03_105_8018EE00 -= 0x50;
        func_sc03_105_80188B64((s32)o);
    }
}

void func_sc03_105_80188A94(u8 *o) {
    u8 *s;
    u8 *a;
    s32 c;
    s16 v;
    u8 b;

    s = AF(AF(o, u8 *, 0x20), u8 *, 0x80);
    c = rsin((D_800B99DA << 6) & 0x7C0);
    v = ((c << 7) >> 12) + 0x80;
    a = (u8 *)D_sc03_105_801BCA48;
    AF(s, s16, 0) = AF(s, s16, 2) = AF(s, s16, 4) = v;
    if (a != 0) {
        v = ((c << 10) >> 12) + 0x800;
        AF(a, s16, 0x18) = AF(a, s16, 0x1A) = v;
        AF(a, s16, 8) = AF(o, s16, 6);
        AF(a, s16, 0xA) = AF(o, s16, 0xA);
        AF(a, s16, 0xC) = AF(o, s16, 0xE);
        b = ((c * 96) >> 12) + 0x60;
        D_sc03_105_8018F208 = D_sc03_105_8018F209 = D_sc03_105_8018F20A = b;
    }
}

void func_sc03_105_80188B64(s32 arg0) {
    if (D_sc03_105_801BCA48 != 0) {
        func_80016714(D_sc03_105_801BCA48, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc03_105_80188BA8(u8 *o) {
    s32 i;
    s32 t;

    for (i = 0; D_sc03_105_8018F25C[i] != -1; i++) {
        t = D_sc03_105_8018F25C[i] | 0x4000;
        func_8012C658(0x1F3, (i << 4) | t, o);
    }
}

void func_sc03_105_80188C34(u8 *arg0) {
    s32 temp_a2;

    func_8001CD50(AF(arg0, s32, 0x20), (s32) &D_sc03_105_801BCA08);
    temp_a2 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x50000000);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    func_800233CC((s32) &D_sc03_105_801BCA08, 0x10);
    *(B4 *) &D_sc03_105_801BCA08 = *(B4 *) &D_sc03_105_801B82E0;
    *(B4 *) &D_sc03_105_801BCA0C = *(B4 *) &D_sc03_105_801B82E4;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_80188D10(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc03_105_8018842C((s32) &D_sc03_105_801BCA0C, -4);
        func_800233CC((s32) (&D_sc03_105_801BCA0C - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc03_105_80188D88(s32 arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_105_801B59D8);
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012CAE4(arg0);
        AF(AF(arg0, s32, 0x20), s16, 0) = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc03_105_801B6188);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u8, 0xC0) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x90);
    temp_a1 = arg0 + 0xFC;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = temp_a1;
    temp_v1_3 = AF(arg0, s32, 0xCC);
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = AF(arg0, s32, 0xCC);
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x90);
    AF(AF(arg0, s32, 0xCC), s32, 0x80) = temp_a1;
    AF(arg0, s16, 0xFC) = 0x100;
    AF(arg0, s16, 0xFE) = 0x100;
    AF(arg0, s16, 0x100) = 0x100;
    AF(arg0, s16, 0x102) = -2;
    func_sc03_105_80188510(arg0);
}

void func_sc03_105_80188EAC(u8 *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_3;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, u16, 0x18);
    temp_a1 = AF(arg0, void *, 0xCC);
    if (temp_v1 < 0x5000U) {
        AF(temp_a2, u16, 0x18) = (u16) (temp_v1 + 0x100);
        temp_v0 = AF(arg0, void *, 0x20);
        temp_v1_2 = AF(temp_v0, u16, 0x18);
        AF(temp_v0, u16, 0x1C) = temp_v1_2;
        AF(temp_v0, u16, 0x1A) = temp_v1_2;
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x12) = (u16) (AF(temp_v1_3, u16, 0x12) + 0x100);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) - 0x100);
        AF(temp_a1, s16, 8) = (s16) (AF(arg0, u16, 6) + AF(arg0, u16, 0x50));
        AF(temp_a1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52));
        AF(temp_a1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) + AF(arg0, u16, 0x54));
        AF(temp_a1, u16, 0x18) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        AF(temp_a1, u16, 0x1A) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1A);
        AF(temp_a1, u16, 0x1C) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1C);
        return;
    }
    func_sc03_105_8018854C();
}

void func_sc03_105_80188FA4(u8 *arg0) {
    u16 temp_v1;
    u8 temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u8, 0xFC) + 0x10;
        AF(arg0, u8, 0xFC) = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 0xF1U) {
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x80000000);
            temp_v1_3 = AF(arg0, void *, 0xCC);
            AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x80000000);
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0) != 0) {
            func_sc03_105_80188574((s32) arg0);
        }
        break;
    }
    func_80016450((s32) AF(arg0, u8, 0xFC), 0);
}

void func_sc03_105_80189074(u8 *arg0, s32 arg1) {
    u32 temp_v1;
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0xFC) - 3;
    temp_v1 = temp_v0 & 0xFF;
    AF(arg0, u8, 0xFC) = temp_v0;
    if (temp_v1 >= 9U) {
        func_80016450((s32) temp_v1, 0);
        return;
    }
    func_8012C218((s32) arg0, arg1);
}

s32 func_sc03_105_801890C8(s32 arg0) {
    return func_8013B7F4(D_sc03_105_8018F2F0[arg0], 0);
}

void func_sc03_105_801890F8(s32 arg0) {
    func_sc03_105_80189118(arg0);
}

void func_sc03_105_80189118(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_105_801BCC94) {                  /* irregular */
    case 0:
        D_sc03_105_801BCA50 = 1;
        D_sc03_105_801BCA54 = 0;
        D_sc03_105_801BCA58 = 1;
        D_sc03_105_801BCA5C = 1;
        D_sc03_105_801BCC94 = 1;
        return;
    case 1:
        temp_v0 = D_sc03_105_801BCA50 - 1;
        D_sc03_105_801BCA50 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_105_801BCA50 = 2;
            func_sc03_105_80189254((s32) &D_sc03_105_801B6190, D_sc03_105_801BCA54 * 6);
            D_sc03_105_801BCA54 = (D_sc03_105_801BCA54 + 1) & 7;
        }
        temp_v0_2 = D_sc03_105_801BCA58 - 1;
        D_sc03_105_801BCA58 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_105_801BCA58 = 8;
            func_800183E0(D_sc03_105_8018F2B0[D_sc03_105_801BCA5C]);
            D_sc03_105_801BCA5C = (D_sc03_105_801BCA5C + 1) & 0xF;
        }
        return;
    }
}

void func_sc03_105_80189254(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

s32 func_sc03_105_801892B4(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x4B;
    if (arg0 < 0x258) {
        var_v0 = 0x2E;
    }
    return var_v0;
}

void func_sc03_105_801892CC(u8 *arg0) {
    D_sc03_105_8018F314[AF(arg0, u16, 2)]();
}

s32 func_sc03_105_80189308(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void func_sc03_105_80189350(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = &D_sc03_105_8018F304;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_105_801893BC(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_80029504(arg0, arg1, arg2) == 0x258) && !(func_80029178(0x132) & 0xFF)) {
        AF(arg0, s32, 0xDC) = func_sc03_105_80189308(arg0, (s32) &D_sc03_105_8018F2F4);
    }
}

void func_sc03_105_80189418(u8 *arg0) {
    D_sc03_105_8018F490[AF(arg0, u16, 2)]();
}

void func_sc03_105_80189454(u8 *o) {
    u8 *a;
    B4 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc03_105_8018F380, D_sc03_105_8018F31C[AF(o, s32, 0x2C)].x, D_sc03_105_8018F31C[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc03_105_8018F348[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc03_105_8018F480 = D_sc03_105_8018F354[AF(o, s32, 0x2C)];
        D_sc03_105_8018F47C = AF(&D_sc03_105_8018F47C, B4, 0x4);
        D_sc03_105_8018F44C = AF(&D_sc03_105_8018F44C, B4, 0x30);
        D_sc03_105_8018F448 = AF(&D_sc03_105_8018F448, B4, 0x4);
        D_sc03_105_8018F418 = AF(&D_sc03_105_8018F418, B4, 0x30);
        D_sc03_105_8018F414 = AF(&D_sc03_105_8018F414, B4, 0x4);
        D_sc03_105_8018F3E4 = AF(&D_sc03_105_8018F3E4, B4, 0x30);
        p = &D_sc03_105_8018F3E0;
        *p = D_sc03_105_8018F3E4;
        D_sc03_105_8018F3B8 = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc03_105_80189654(s32 arg0) {
    func_sc03_105_80189694(arg0);
}

void func_sc03_105_80189674(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc03_105_80189694(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc03_105_8018F398);
    var_s1 = 0;
    var_s0 = &D_sc03_105_8018F3C0;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc03_105_801896EC(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc03_105_80189718(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc03_105_8018975C(u8 *arg0) {
    D_sc03_105_801B68D0[AF(arg0, u16, 2)]();
}

void func_sc03_105_80189798(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_105_801B67F0, D_sc03_105_801B67F2, D_sc03_105_801B67F4);
        p = &D_sc03_105_801B67F8;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_105_801B6828, D_sc03_105_801B682A, D_sc03_105_801B682C);
        p = &D_sc03_105_801B6830;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_105_801B6860, D_sc03_105_801B6862, D_sc03_105_801B6864);
        p = &D_sc03_105_801B6868;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_105_801B67F0, D_sc03_105_801B67F2, D_sc03_105_801B67F4);
        p = &D_sc03_105_801B67F8;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_105_801B6898, D_sc03_105_801B689A, D_sc03_105_801B689C);
        p = &D_sc03_105_801B68A0;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.a = p->a;
    D_800A5E88.b = p->b;
    D_800A5E88.c = p->c;
    func_80028620(0, &D_800A5E88.a);
    func_80028620(1, &D_800A5E88.b);
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_105_8018998C(u8 *arg0) {
    D_800A5E88.c = D_sc03_105_801B6818;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 10 / 4096 - 5;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_105_80189A3C(u8 *arg0) {
    D_800A5E88.c = D_sc03_105_801B6850;
    D_800A5EB0 = rsin(AF(arg0, s16, 0xFE)) * 6 / 4096 - 3;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(2, &D_800A5E88.c);
}

void func_sc03_105_80189AEC(u8 *arg0) {
    D_800A5E88.a = D_sc03_105_801B6868.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) * 20 / 4096 - 10;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_105_80189B9C(void) {
}

void func_sc03_105_80189BA4(u8 *arg0) {
    D_800A5E88.a = D_sc03_105_801B68A0.a;
    D_800A5E90 = rsin(AF(arg0, s16, 0xFE)) / 512 + 8;
    AF(arg0, u16, 0xFE) = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    func_80028620(0, &D_800A5E88);
}

void func_sc03_105_80189C48(u8 *arg0) {
    D_sc03_105_801B68E8[AF(arg0, u16, 2)]();
}

void func_sc03_105_80189C84(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_105_80189E64();
        return;
    }
    var_v0 = &D_sc03_105_801BCBA4;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x7F) + 0x40);
    func_8012AD50((s32) arg0);
}

void func_sc03_105_80189CFC(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (func_8012BEE8(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc03_105_801B68F8.x = AF(arg0, u16, 6) + d;
        D_sc03_105_801B68F8.y = AF(arg0, u16, 0xA);
        D_sc03_105_801B68F8.z = AF(arg0, u16, 0xE) + d;
        func_sc03_105_80189DAC(arg0, &D_sc03_105_801B68F8);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc03_105_80189DAC(u8 *arg0, u8 *arg1) {
    s32 i;

    i = 0;

    if (func_8012E778(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc03_105_801BCBA0[i] == 0) {
                D_sc03_105_801BCBA0[i] = 1;
                AF(arg1, s32, 0x10) = i | 0x80000000;
                AF(arg1, u16, 8) = AF(arg0, u16, 0x70);
                func_8012C51C(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc03_105_80189E64(u8 *arg0) {
    s32 o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc03_105_801BCA60;
    AF(arg0, s16, 0xFC) = 0x7000;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x106) = 0;
    o = (s32)func_8012C194();
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD50(o, p);
        AF(o, s16, 0x10) = 0x400;
        AF(o, s32, 4) |= 0x60000000;
        func_800233CC(p, 0x40);
        AF(p, s32, 0) = 0x808080;
        AF(p, s32, 4) = 0x808080;
        func_sc03_105_8018A1F0(arg0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_105_80189F24(u8 *arg0) {
    void *a1;
    u16 t;
    s16 b;
    a1 = AF(arg0, void *, 0x20);
    if (a1 != NULL) {
        t = AF(a1, u16, 0x1A) - 0x100;
        AF(a1, u16, 0x1A) = t;
        AF(a1, u16, 0x18) = t;
        if (AF(a1, s16, 0x1A) < 0) {
            AF(a1, u16, 0x1A) = 0;
            AF(a1, u16, 0x18) = 0;
        }
    }
    if (AF(arg0, s16, 0xFE) >= 0x6000) {
        AF(arg0, s16, 0xFE) = 0x6000;
    } else {
        AF(arg0, u16, 0x106) += 0x400;
        AF(arg0, u16, 0xFE) += AF(arg0, u16, 0x106);
    }
    AF(arg0, u16, 0x104) -= 0x80;
    b = AF(arg0, u16, 0xFC) + AF(arg0, u16, 0x104);
    AF(arg0, s16, 0xFC) = b;
    if (b < 0) {
        D_sc03_105_801BCBA0[AF(arg0, s16, 0xDC)] = 0;
        func_8012C218(arg0);
        return;
    }
    func_sc03_105_80189FF0(arg0);
}

void func_sc03_105_80189FF0(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc03_105_801B690C;
    q.p[1] = D_sc03_105_801B6914;
    q.p[2] = D_sc03_105_801B691C;
    q.p[3] = D_sc03_105_801B6924;
    func_80017DC4(arg0 + 0xFC, &m);
    RotMatrixY((s16) func_8012A758(), &m);
    func_80015978(arg0 + 4, &r);
    func_80017E68(&r, &m);
    func_80017758(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc03_105_801B692C;
    q.p[1] = D_sc03_105_801B6934;
    q.p[2] = D_sc03_105_801B693C;
    q.p[3] = D_sc03_105_801B6944;
    func_80017758(&q, &m);
}

void func_sc03_105_8018A1F0(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8002D4C8(0x6D5, 0);
        break;
    case 1:
        func_8002D4C8(0x856, (func_sc03_105_8018A278() | 0x2000) & 0xFFFF);
        break;
    case 2:
        func_8002D4C8(0x857, (func_sc03_105_8018A278() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc03_105_8018A278(u8 *arg0) {
    SV r;
    s32 v;

    func_80015978(arg0 + 4, &r);
    if (func_8012EFB8(&r, &r) & ~0x1000) {
        v = 1;
    } else {
        v = (r.vx << 6) / 160 + 0x40;
    }
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x80) {
        v = 0x7F;
    }
    return v;
}
