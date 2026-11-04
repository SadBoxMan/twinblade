#include "common.h"
#include "gte.h"
#include "psyq.h"
s32 func_sc05_010_80184934(s32 arg0);
void func_sc05_010_80184988(u8 *arg0);
extern void (*D_sc05_010_80192934[])();
extern void (*D_sc05_010_801929DC[])();
extern void (*D_sc05_010_801924E4[])();
extern void (*D_sc05_010_80192CB8[])();
extern void (*D_sc05_010_80192724[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_010_8017BE9C(void) {
}

void func_sc05_010_8017BEA4(void) {
}

void func_sc05_010_8017BEAC(void) {
}

void func_sc05_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_010_8018C3E0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc05_010_8018C498[])();
extern u8 D_sc05_010_8018C3E8;
extern void func_80154274();
extern void func_80171990();
extern void func_80147324();
extern void func_801466F0();
extern s32 func_8014C088();
extern void func_8014B5C4();
extern s32 func_8014CB58();
extern u8 D_sc05_010_8018C490;
extern void func_8016EE40();
extern s32 D_80126D54;
extern s16 D_80126B0C;
extern void (*D_sc05_010_8018C4E0[])();
extern void func_80162D28();
extern s16 D_sc05_010_8018C4D8;
extern s16 D_sc05_010_8018C4DA;
extern s16 D_sc05_010_8018C4DC;
extern u8 D_sc05_010_80191BA8;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80146CA0();
extern u8 D_sc05_010_8018C4A8;
extern u8 D_sc05_010_8018C4F0;
extern u8 D_sc05_010_80192200;
extern void func_8016325C();
extern void func_80162FC0();
extern void func_8013C9C4();
extern void func_8001C810();
extern void func_801466B4();
extern void func_80162CCC();
extern void (*D_sc05_010_8018C524[])();
extern void func_sc05_010_8017DFAC();
extern u8 D_800DF2E0;
extern u8 D_sc05_010_8018C504;
extern void func_80146E90();
extern s32 func_80146E98();
extern void (*D_sc05_010_8018C530[])();
extern void (*D_sc05_010_80192258[])();
void func_sc05_010_8017E7F4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_010_80192260[])();
void func_sc05_010_8017E81C(void);
extern u8 D_sc05_010_8019226C;
extern u8 D_sc05_010_80192274;
extern void func_sc05_010_8017E9D4();
extern void (*D_sc05_010_8019227C[])();
extern void (*D_sc05_010_80192568[])();
extern void (*D_sc05_010_801927B8[])();
extern void (*D_sc05_010_80192B68[])();
extern void (*D_sc05_010_80192DE0[])();
extern void (*D_sc05_010_80192DE8[])();
extern void (*D_sc05_010_80192DF8[])();
extern void (*D_sc05_010_80192E34[])();
extern void (*D_sc05_010_80192E50[])();
extern void (*D_sc05_010_80192E6C[])();
extern void (*D_sc05_010_8019426C[])();
extern u16 D_800B99DA;
extern s32 func_800183E0();
extern u8 D_sc05_010_801C4148;
extern u8 D_sc05_010_801941CC[];
extern u8 D_sc05_010_801C4048[];
extern void func_8001CB6C();
extern s32 func_8012C194();
extern s32 func_sc05_010_801849DC();
extern void (*D_sc05_010_801942B4[])();
extern void (*D_sc05_010_801942CC[])();
extern u8 D_sc05_010_80194290;
extern u8 D_sc05_010_801942C0;
extern void (*D_sc05_010_801C3CF0[])();
extern s32 func_sc05_010_80187B28();
extern void (*D_sc05_010_801C3CFC[])();
extern void (*D_sc05_010_801C3D18[])();
extern void (*D_sc05_010_801C3D3C[])();
extern void (*D_sc05_010_801C3DD8[])();
extern void (*D_sc05_010_801C3E40[])();

extern s32 func_8012AD44();

extern s32 func_sc05_010_8017BF34();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_sc05_010_80187C74();
extern void func_sc05_010_80188234();
extern void func_sc05_010_8018852C();

void func_sc05_010_8017BEBC(s32 arg0, s32 arg1) {
    func_sc05_010_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc05_010_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc05_010_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc05_010_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc05_010_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern s32 func_8012A100();
extern void func_801292C8();
extern u8 D_sc05_010_801C7E80;
extern void func_sc05_010_80184100();
extern void func_800233CC();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc05_010_801B5C84;
extern u8 D_sc05_010_801B6434;
extern s32 func_sc05_010_801841E4();
extern void func_sc05_010_80184214();
extern s32 func_8012C218();
extern void func_80016450();
extern void func_80146C3C();
extern s32 func_sc05_010_80187B80();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();
extern s32 func_sc05_010_80187E9C();
extern void func_8014BC44();
extern s32 func_80151664();
extern void func_sc05_010_80187F48();
extern s32 func_sc05_010_80188468();
extern u8 D_800D46E4;
extern u8 D_800D5880;
extern void func_80149020();
extern s32 func_sc05_010_801886F4();
extern void func_80159B3C();
extern void func_801542DC();
extern void func_80165718();
extern u8 D_sc05_010_801C3DE4;
extern u8 D_sc05_010_801C3DF0;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();
extern s32 func_sc05_010_8018890C();
extern s32 func_80128ED8();
extern s32 func_800D1FC8();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern s32 func_8013373C();

extern void func_80147054();
extern void func_80171928();
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
extern u8 D_80126E60;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern void func_8012A048();
extern u8 D_sc05_010_80192288;
extern void func_sc05_010_8017EAE4();
extern u8 D_sc05_010_80192A30;
extern u8 D_sc05_010_80192A9C;
extern void func_8012B23C();
extern void func_8001CA1C();
extern s16 D_80126B96;
extern s16 D_80126B98;
extern void (*D_sc05_010_80192AEC[])();
extern s32 func_8012D624();
extern void func_sc05_010_80183D5C();
void func_sc05_010_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_sc05_010_8017E910();
void func_sc05_010_80187BAC(void);
s32 func_sc05_010_8017E9B4(void);
extern s32 func_8012C658();
extern u8 D_sc05_010_80188CCC;
extern u8 D_sc05_010_8019257C;
extern s32 func_8012C354();
extern s32 func_8012C588();
extern u8 D_sc05_010_801922B0;
extern u8 D_sc05_010_801926E0;
extern u8 D_sc05_010_80192714;
extern u8 D_sc05_010_8019273C;
extern u8 D_sc05_010_80192778;
extern s16 D_sc05_010_801927AC[];
extern s32 func_sc05_010_8017ECE4();
extern void func_80131B14();
extern void func_80143CD4();
extern void func_800CB0E8();
extern s32 func_8012CBF4();
extern s32 func_8012BEE8();
extern u8 D_sc05_010_801928F0;
extern s32 D_sc05_010_801C7E54;
extern void func_8001D0E8();
extern u8 D_sc05_010_8019294C;
extern u8 D_sc05_010_801AB1A8;
extern u8 D_sc05_010_801929A8;
extern s32 D_sc05_010_801C7E5C;
extern u8 D_sc05_010_801929F4;
extern u8 D_sc05_010_801AB180;
extern s32 func_8012CBCC();
extern u8 D_sc05_010_80192AFC;
extern u8 D_sc05_010_80192B38;
extern void func_8012B200();
extern u8 D_sc05_010_80192B70;
extern u8 D_sc05_010_80192C30;
s32 func_sc05_010_8018423C(s32 arg0);
extern u8 D_sc05_010_80192D18;
extern u8 D_sc05_010_80192E3C;
extern u8 D_sc05_010_80192E48;
extern u8 *D_sc05_010_801C7E64[];
extern u8 D_sc05_010_801988EC;
extern u8 D_sc05_010_801C7FC0;
extern s32 func_8013C08C();
extern void func_80147A84();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
extern void func_801470B4();
s32 func_sc05_010_80188168(s32 arg0);
extern void func_80146A6C();

extern u8 D_sc05_010_80192480;
extern s32 D_sc05_010_801C39FC[];
extern s32 D_sc05_010_801C3A00[];
extern u8 D_sc05_010_801927D0;
extern u8 D_sc05_010_80192804;

extern void func_800CFBCC();
extern void (*D_sc05_010_801925B0[])();
extern s32 func_8001AAA0();
extern u8 D_sc05_010_801C3BF8;
extern u8 D_sc05_010_801C3C20;
extern void func_80017254();
extern void func_800176F0();

extern u8 D_80062C04;
extern void StartRumbleScript();
extern void func_801511E0();
extern void func_801472C8();
extern void func_801477E8();
extern void func_8014CBF8();
extern void func_801474EC();


extern u8 D_sc05_010_801928B8;
extern u8 D_sc05_010_801928C8;
extern u8 D_sc05_010_801A3E2C;
extern void func_8001C2C4();
extern void func_8012B2CC();
extern void func_sc05_010_80181670();

extern u8 D_sc05_010_80192924;
extern void (*D_sc05_010_80192990[])();
extern void func_8012F14C();
extern void func_8012B370();
extern void (*D_sc05_010_80192A28[])();
extern u8 D_sc05_010_80192980;
extern u8 D_sc05_010_80192988;
extern s32 func_8012DEB8();
extern void *D_80127078;
extern u8 *D_sc05_010_801C7E50[];
extern s32 D_sc05_010_801C7E34;
extern u8 *D_sc05_010_801C7E30[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

extern void func_sc05_010_801806A0();
extern s32 func_800CF8B4();
extern s32 func_8014CB8C();

extern u16 D_801202A0;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_80126940;
extern u8 D_sc05_010_80192284[];
extern s32 func_80148800();
extern s32 func_80012C6C();
extern s32 func_80012ABC();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc05_010_8018C3B0[];
extern s32 func_8012C750();

s32 func_sc05_010_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc05_010_8018C3B0)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc05_010_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc05_010_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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

extern void func_80016714();

void func_sc05_010_8017C068(void) {
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

void func_sc05_010_8017C114(u8 *arg0) {
    D_sc05_010_8018C3E0[AF(arg0, u16, 2)]();
}

extern s32 D_sc05_010_801C7E70;
extern s16 D_sc05_010_801C7E68;
extern s16 D_sc05_010_801C7E6A;
extern s16 D_80126B5E;
extern s16 D_80126B62;
extern s32 D_80126B6C;
extern u8 D_sc05_010_801A3AC4;
extern u8 D_sc05_010_801A3B2C;
extern u8 D_sc05_010_801A3B74;
extern u8 D_sc05_010_801A33AC;
extern u8 D_sc05_010_801A3BB4;
extern s32 func_80153BD8();
extern void func_80153BF0();
extern s32 func_8012B8E4();
extern s32 func_8012BCCC();
extern void func_8012B1B4();
extern s32 func_8012D5E4();
extern s32 func_8012B608();
extern u8 D_sc05_010_80192844;
extern u8 D_sc05_010_8019284C;
extern s16 D_sc05_010_801C7E28;
extern s16 D_sc05_010_801C7E2C;
extern u16 D_sc05_010_8019244C[];
extern OtRef D_800A651C[];
extern s32 D_80126950;
extern u8 D_800AF648;
extern u8 *AllocPrim(s32 n);
extern s32 GetTPage();
extern void SetDrawMode();
extern void AddPrim();
extern void RotTransSV();
extern SV8 D_sc05_010_801928B0;
extern s16 D_sc05_010_80192870;
extern s32 D_sc05_010_80192874[];
extern u8 D_sc05_010_80192880[];
extern u8 D_sc05_010_80192890[];
extern u8 D_sc05_010_801928A0[];
static inline s32 Size_80181670(u8 *o) {
    s32 s;
    s = D_sc05_010_80192870;
    AF(o, s16, 0xDE) += 0x100;
    return ((((rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) < 0 ? -(rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) : rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) * s) >> 12) + 8;
}
extern s16 D_sc05_010_80192CC0;
extern s32 D_sc05_010_80192CC4[];
extern u8 D_sc05_010_80192CD0[];
extern u8 D_sc05_010_80192CE0[];
extern u8 D_sc05_010_80192CF0[];
static inline s32 Size_8018340C(u8 *o) {
    s32 s;
    s = D_sc05_010_80192CC0;
    return ((((rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) < 0 ? -(rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) : rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) * s) >> 12) + 8;
}

extern u8 D_sc05_010_801A35FC;
extern u8 D_sc05_010_801A3C44;
extern s32 D_sc05_010_801C7E78;
extern s32 D_80126B78;
extern s32 D_80126B90;
extern s32 func_80135888();
extern u8 D_801152A8;
extern void func_8012F568();
extern u8 D_sc05_010_80192488;
extern u8 D_sc05_010_801A3D94;
extern u8 *D_sc05_010_801C7E60;
extern u16 D_80126B66;
static inline void LoadPair(u8 *o) {
    LoadImage(&D_sc05_010_80192480, D_sc05_010_801C39FC[AF(o, u8, 0xC2)]);
    LoadImage(&D_sc05_010_80192488, D_sc05_010_801C39FC[AF(o, u8, 0xC2) + 1]);
}
extern void func_80178B18();
extern void func_801746DC();
extern u8 *D_sc05_010_801C7E4C;
extern void func_80132EF4();
extern void func_8014704C();
extern s32 D_80126B60;
extern s32 D_sc05_010_80192D64[];
extern s32 func_80174774();
extern void func_8002AC00();
extern s32 func_80178970();
extern void func_80178D18();
extern u8 D_sc05_010_801923C4;
extern s32 RotTransPers3();
extern u8 *func_80143C74();
extern void SetLineF2();

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern u8 D_sc05_010_801C6FA8[];
extern void func_sc05_010_8017E368();
extern void func_80015978();
extern void func_80017DC4();
extern SV8 D_sc05_010_8018C538[];
extern void func_800139C8();
extern s32 func_8012EFB8();
extern void func_80017E30();
extern void func_80016ED4();

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
extern XY D_sc05_010_801C3B7C[];
extern u8 D_sc05_010_801C3BA8[];
extern B4 D_sc05_010_801C3BB4[];
extern u8 D_sc05_010_801C3BE0;
extern B4 D_sc05_010_801C3CE0, D_sc05_010_801C3CDC, D_sc05_010_801C3CAC, D_sc05_010_801C3CA8, D_sc05_010_801C3C78, D_sc05_010_801C3C74, D_sc05_010_801C3C44, D_sc05_010_801C3C40, D_sc05_010_801C3C18;
extern void func_8001CBDC();

typedef struct { u8 b[0x10C]; } O10C;
extern s16 D_sc05_010_8018C3AC; extern s16 D_sc05_010_8018C3A0; extern s16 D_sc05_010_8018C394; extern u8 D_sc05_010_801C6EE0; extern s32 func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc05_010_801C6F08; extern s16 D_sc05_010_801C6F18; extern s16 D_sc05_010_801C6F12; extern s16 D_sc05_010_801C6F0A; extern s16 D_sc05_010_801C6F22; extern s16 D_sc05_010_801C6F1A; extern s16 D_sc05_010_801C6F46; extern s16 D_sc05_010_801C6F3E; extern s16 D_sc05_010_801C6F56; extern s16 D_sc05_010_801C6F4E; extern s16 D_sc05_010_801C6F70; extern s16 D_sc05_010_801C6F80; extern s16 D_sc05_010_801C6F7A; extern s16 D_sc05_010_801C6F72; extern s16 D_sc05_010_801C6F8A; extern s16 D_sc05_010_801C6F82; extern s16 D_sc05_010_801C6F74; extern s16 D_sc05_010_801C6F40; extern s16 D_sc05_010_801C6F0C; extern u8 D_sc05_010_801C6F30; extern u8 D_sc05_010_801C6F28; extern u8 D_sc05_010_801C6F34; extern u8 D_sc05_010_801C6F2C; extern u8 D_sc05_010_801C6F31; extern u8 D_sc05_010_801C6F29; extern u8 D_sc05_010_801C6F36; extern u8 D_sc05_010_801C6F32; extern u8 D_sc05_010_801C6F2E; extern u8 D_sc05_010_801C6F2A; extern u8 D_sc05_010_801C6F64; extern u8 D_sc05_010_801C6F5C; extern u8 D_sc05_010_801C6F65; extern u8 D_sc05_010_801C6F5D; extern u8 D_sc05_010_801C6F69; extern u8 D_sc05_010_801C6F61; extern u8 D_sc05_010_801C6F9C; extern u8 D_sc05_010_801C6F98; extern u8 D_sc05_010_801C6F94; extern u8 D_sc05_010_801C6F90; extern u8 D_sc05_010_801C6F9D; extern u8 D_sc05_010_801C6F99; extern u8 D_sc05_010_801C6F95; extern u8 D_sc05_010_801C6F91; extern u8 D_sc05_010_801C6F9E; extern u8 D_sc05_010_801C6F9A; extern u8 D_sc05_010_801C6F96; extern u8 D_sc05_010_801C6F92; extern u8 D_sc05_010_801C6F6A; extern u8 D_sc05_010_801C6F66; extern u8 D_sc05_010_801C6F62; extern u8 D_sc05_010_801C6F5E; extern s32 D_sc05_010_801C6F6C; extern s32 D_sc05_010_801C6F38; extern s32 D_sc05_010_801C6FA0;
extern u8 D_sc05_010_801A3D5C;
extern s32 func_80172658();
extern s32 func_801726A0();
extern u8 *D_80126CC8;
extern void func_8012DFD4();
extern s32 func_8012BD14();
extern u8 D_sc05_010_80194234;
extern u8 D_sc05_010_80194244;
extern s32 func_801789AC();
extern void func_8014B598();
extern s32 func_8016F1AC();
extern void func_80175454();
extern s32 func_8014CB2C();
extern void func_8016F0AC();
extern void func_8002959C();

void func_sc05_010_8017C150(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc05_010_8018C3AC = 0;
    D_sc05_010_8018C3A0 = 0;
    D_sc05_010_8018C394 = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = (u8 *)func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc05_010_801C6EE0);
        func_8001CE28(m, &D_sc05_010_801C6EE0);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc05_010_801C6F08 = x1;
    D_sc05_010_801C6F18 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc05_010_801C6F0A = D_sc05_010_801C6F12 = y1;
    D_sc05_010_801C6F1A = D_sc05_010_801C6F22 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc05_010_801C6F3E = D_sc05_010_801C6F46 = y2;
    D_sc05_010_801C6F4E = D_sc05_010_801C6F56 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc05_010_801C6F70 = x2 + 2;
    D_sc05_010_801C6F80 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc05_010_801C6F28 = D_sc05_010_801C6F30 = 0xFF;
    D_sc05_010_801C6F2C = D_sc05_010_801C6F34 = 0xFF;
    D_sc05_010_801C6F29 = D_sc05_010_801C6F31 = 0;
    D_sc05_010_801C6F32 = D_sc05_010_801C6F36 = 0;
    D_sc05_010_801C6F2A = D_sc05_010_801C6F2E = 0;
    D_sc05_010_801C6F5C = D_sc05_010_801C6F64 = 0xFF;
    D_sc05_010_801C6F72 = D_sc05_010_801C6F7A = y + 4;
    D_sc05_010_801C6F82 = D_sc05_010_801C6F8A = y + 0xB;
    D_sc05_010_801C6F5D = D_sc05_010_801C6F65 = 0xFF;
    D_sc05_010_801C6F61 = D_sc05_010_801C6F69 = 0xFF;
    D_sc05_010_801C6F90 = D_sc05_010_801C6F94 = D_sc05_010_801C6F98 = D_sc05_010_801C6F9C = 0x40;
    D_sc05_010_801C6F91 = D_sc05_010_801C6F95 = D_sc05_010_801C6F99 = D_sc05_010_801C6F9D = 0x40;
    D_sc05_010_801C6F92 = D_sc05_010_801C6F96 = D_sc05_010_801C6F9A = D_sc05_010_801C6F9E = 0x40;
    D_sc05_010_801C6F5E = D_sc05_010_801C6F62 = D_sc05_010_801C6F66 = D_sc05_010_801C6F6A = 0;
    D_sc05_010_801C6F0C = D_sc05_010_801C6F40 = 2;
    D_sc05_010_801C6F74 = 4;
    D_sc05_010_801C6F38 = D_sc05_010_801C6F6C = 0;
    D_sc05_010_801C6FA0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc05_010_8018C3AC = 2;
    AF(o, s16, 2)++;
}

extern s16 D_sc05_010_80192470[];
extern u8 D_sc05_010_801A36FC;
extern void func_8016AA50();
extern void func_8016B428();
extern u8 D_sc05_010_80192860;
extern void func_8002A520();
extern void func_8002A790();
extern void func_800D1724();
extern s32 D_sc05_010_801941E8[];
extern u8 D_sc05_010_8019222C;

extern u32 D_sc05_010_801C7E74;
extern u8 D_sc05_010_801924D4[];
extern u8 D_sc05_010_801A34B4;
extern u8 D_sc05_010_801A3844;
extern u8 D_sc05_010_801A3A2C;
extern u8 D_sc05_010_801925C4[];
extern s16 D_sc05_010_801926D4[];
extern u8 D_sc05_010_80192614[];
extern s32 MoveImage();

extern void func_80153C74();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { u8 a, b; } B2;
typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;
extern u8 D_80062BF4;
extern s32 func_80012A60();
extern u8 D_800D58AC;

extern u8 D_sc05_010_801924A0;
extern u8 *D_sc05_010_801C7E58;
extern u8 D_sc05_010_80192478[];
extern u16 D_sc05_010_801922B8[];
extern u8 D_sc05_010_8019231C;



extern void func_8016B3F4();
extern s32 func_801535F4();
extern u8 D_sc05_010_801C3D28;
extern void func_8015BF48();
extern void func_8014C010();




extern u8 *func_8012913C();
extern void func_8012B0B4();
static inline s32 rsgn(s32 t) {
    return (rand() & 1) ? t : -t;
}

typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
typedef struct { s32 a, b; } P8;
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
typedef struct { s32 a, b; } W2;
extern u8 D_sc05_010_801C5B80;
extern u8 D_sc05_010_801C5B84;
extern u8 D_sc05_010_801C7E7C;
extern void func_8001CD50();


typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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

void func_sc05_010_8017C43C(u8 *arg0) {
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
            ((XY *)&D_sc05_010_8018C394)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((XY *)&D_sc05_010_8018C394)->x == 0 && tgt != 0) {
                ((XY *)&D_sc05_010_8018C394)->x = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((XY *)&D_sc05_010_8018C394)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc05_010_8018C3A0 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc05_010_8018C3AC = D_sc05_010_8018C3A0 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[2].g = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[0].g = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[3].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[2].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[1].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[0].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[2].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[0].b = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((XY *)&D_sc05_010_8018C394)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + n;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[3].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].g = v;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].g;
        *g = ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[0].x = x;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + n;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x = x;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[2].x = xm;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[3].x = xm;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[3].x = ((QuadArg *)&D_sc05_010_801C6F08)[1].p[1].x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[3].r = -v;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[1].r = -v;
        func_800176F0(&((QuadArg *)&D_sc05_010_801C6F08)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc05_010_801C6F08)[2].p[3].x;
        ((QuadArg *)&D_sc05_010_801C6F08)[2].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[2].p[0].x + D_sc05_010_8018C3A0;
        *p = ((QuadArg *)&D_sc05_010_801C6F08)[2].p[1].x - 4;
    }
    func_800176F0(&((QuadArg *)&D_sc05_010_801C6F08)[0]);
    func_800176F0(&((QuadArg *)&D_sc05_010_801C6F08)[2]);
}

void func_sc05_010_8017C8D0(u8 *obj) {
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

void func_sc05_010_8017D7B0(u8 *arg0) {
    D_sc05_010_8018C498[AF(arg0, u8, 0x216)]();
}

void func_sc05_010_8017D7EC(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc05_010_8018C3E8);
    func_80171990(arg0);
}

void func_sc05_010_8017D82C(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        func_801466F0(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        func_80147324(0x7BC);
        func_80171990((s32) arg0);
    }
}

void func_sc05_010_8017D8A8(s32 arg0) {
    if (func_8014C088(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        func_8014B5C4(arg0, func_8014CB58() & 0xFF, 0x80);
        func_80171990(arg0);
    }
}

void func_sc05_010_8017D908(void) {
}

void func_sc05_010_8017D910(void) {
    func_8016EE40((s32) &D_sc05_010_8018C490, 0x01000000);
}

s32 func_sc05_010_8017D938(void) {
    return D_80126D54 == (s32) &D_sc05_010_8018C490;
}

s16 func_sc05_010_8017D954(void) {
    return D_80126B0C;
}

void func_sc05_010_8017D964(u8 *arg0) {
    D_sc05_010_8018C4E0[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc05_010_8017D9C4(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc05_010_80191BA8);
        AF(temp_v0, s16, 0x10) = 0x800;
        AF(arg0, s16, 0x60) = 0;
        func_80149374(temp_s2, (s32) (arg0 + 4));
        func_80146DE8((s32) arg0, 0, -0x400000, 0);
        D_sc05_010_8018C4DC = 0x80;
        D_sc05_010_8018C4DA = 0x80;
        D_sc05_010_8018C4D8 = 0x80;
        func_80146CA0((s32) arg0);
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        }
    }
}

void func_sc05_010_8017DA90(u8 *arg0) {
    s16 temp_v0;
    s32 var_a0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    func_8016325C((s32) arg0, 0, 0x20000, 0);
    func_80162FC0((s32) arg0);
    if ((AF(arg0, s16, 0x60) == 0) && (AF(arg0, s32, 0x28) > 0)) {
        AF(temp_s0, s16, 0x10) = 0;
        AF(arg0, s16, 0x60) = (s16) ((u16) AF(arg0, s16, 0x60) + 1);
    }
    temp_v0 = AF(temp_s2, s16, 0xA);
    if (temp_v0 < AF(arg0, s16, 0xA)) {
        AF(arg0, s16, 0xA) = temp_v0;
        func_8013C9C4((s32) &D_sc05_010_8018C4F0);
        AF(arg0, s16, 0x60) = (s16) AF(temp_s0, u16, 0x18);
        func_8001C810((s32) temp_s0, (s32) &D_sc05_010_80192200);
        AF(temp_s0, s32 *, 0x80) = &D_sc05_010_8018C4A8;
        AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0xA0);
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
        temp_v0_2 = (u16) AF(arg0, s16, 0x60);
        AF(temp_s0, u16, 0x1C) = temp_v0_2;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0x10);
            func_801466B4(0x1B, (s32) arg0, 0, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 1, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 2, 0, /* extra? */ 1);
            func_801466B4(0x1B, (s32) arg0, 3, 0, /* extra? */ 1);
            var_a0 = 0x81D;
        } else {
            var_a0 = 0xC5E;
        }
        func_80147324(var_a0);
        func_80146CA0((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x60) != 0) {
        temp_v0_3 = AF(temp_s0, u16, 0x1C) + 0x100;
        AF(temp_s0, u16, 0x1C) = temp_v0_3;
        AF(temp_s0, u16, 0x1A) = temp_v0_3;
        AF(temp_s0, u16, 0x18) = temp_v0_3;
    }
}

void func_sc05_010_8017DC5C(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc05_010_8018C4DC + 8;
    D_sc05_010_8018C4DC = (u16) temp_v0;
    D_sc05_010_8018C4DA = temp_v0;
    D_sc05_010_8018C4D8 = temp_v0;
    if (temp_v0 >= 0x101) {
        func_80146CA0(arg0);
    }
}

void func_sc05_010_8017DCB8(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc05_010_8018C4DC - 8;
    D_sc05_010_8018C4DC = (u16) temp_v0;
    D_sc05_010_8018C4DA = temp_v0;
    D_sc05_010_8018C4D8 = temp_v0;
    if (temp_v0 < -0x80) {
        func_80162CCC(arg0);
    }
}

void func_sc05_010_8017DD14(u8 *arg0) {
    func_sc05_010_8017DFAC();
    D_sc05_010_8018C524[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s32, 0x20) != 0) {
        func_80162D28((s32) arg0);
    }
}

void func_sc05_010_8017DD78(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, (s32) &D_800DF2E0);
        AF(temp_v0, s32 *, 0x80) = &D_sc05_010_8018C4A8;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0xB0);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s32, 0x50) * 8) + &D_sc05_010_8018C504);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        func_80146CA0((s32) arg0);
        return;
    }
    func_80162CCC((s32) arg0);
}

void func_sc05_010_8017DE28(u8 *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x1C) + 0x800;
    AF(temp_a1, u16, 0x1C) = temp_v0;
    AF(temp_a1, u16, 0x18) = temp_v0;
    temp_v1 = AF(AF(arg0, void *, 0x58), s16, 0);
    if (temp_v1 < (s16) temp_v0) {
        AF(temp_a1, u16, 0x1C) = (u16) temp_v1;
        AF(temp_a1, u16, 0x18) = (u16) temp_v1;
        D_80126B0C = 1;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x800;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    temp_v1_2 = AF(AF(arg0, void *, 0x58), s16, 2);
    if (temp_v1_2 < (s16) temp_v0_2) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v1_2;
        func_80146E90((s32) arg0, (s32) AF(AF(arg0, void *, 0x58), s16, 4));
        func_80146CA0((s32) arg0);
    }
}

void func_sc05_010_8017DEEC(u8 *arg0) {
    s16 temp_v0;
    u16 *temp_s2;
    u16 temp_v0_2;
    void *temp_s0;

    temp_s2 = AF(arg0, u16 *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    if (func_80146E98() != 0) {
        temp_v0 = AF(temp_s0, u16, 0x1C) + 0x400;
        AF(temp_s0, u16, 0x1C) = (u16) temp_v0;
        AF(temp_s0, s16, 0x18) = temp_v0;
        if (temp_v0 >= 0x7001) {
            AF(temp_s0, u16, 0x1C) = 0x7000U;
            AF(temp_s0, s16, 0x18) = 0x7000;
        }
        temp_v0_2 = AF(temp_s0, u16, 0x1A) + 0x100;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x7001) {
            AF(temp_s0, u16, 0x1A) = 0x7000U;
        }
    }
    if (*temp_s2 != 0x16) {
        func_80162CCC((s32) arg0);
    }
}

void func_sc05_010_8017DFAC(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    AF(m, u16, 0x12) += AF(AF(arg0, u8 *, 0x58), u16, 6);
}

void func_sc05_010_8017DFF0(u8 *arg0) {
    D_sc05_010_8018C530[AF(arg0, u16, 2)]();
}

void func_sc05_010_8017E02C(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc05_010_801C6FA8 + i * 0x1D0;
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

void func_sc05_010_8017E1D4(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc05_010_801C6FA8 + i * 0x1D0;
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
        func_sc05_010_8017E368(o, b);
    }
    if (n == 0x80) func_80146C3C(o);
}

void func_sc05_010_8017E368(u8 *o, u8 *b) {
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
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[3], &v[3]);
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

void func_sc05_010_8017E620(u8 *arg0) {
    D_sc05_010_80192258[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_010_8017E65C(u8 *arg0) {
    func_sc05_010_8017E7F4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_010_8017E6A0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_010_8017E6C4(u8 *arg0) {
    D_sc05_010_80192260[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_010_8017E700(u8 *arg0) {
    func_sc05_010_8017E81C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_010_8017E740(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc05_010_8017E7BC(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(5);
        return 1;
    }
    return 0;
}

void func_sc05_010_8017E7F4(void) {
    func_8016EE40((s32) &D_sc05_010_8019226C, 0x01000000);
}

void func_sc05_010_8017E81C(void) {
    func_8016EE40((s32) &D_sc05_010_80192274, 0x01000000);
}

void func_sc05_010_8017E844(s32 arg0) {
    func_80147054();
    func_80171928(arg0);
}

void func_sc05_010_8017E874(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0xC0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_010_8017E9D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_010_8017E9D4((s32) &D_80126948);
}

s32 func_sc05_010_8017E910(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    D_80126E6C = 0xC8;
    D_80126E74 = 0x2BC;
    D_80126E80 = -0xE3;
    D_80126E82 = 0x400;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = 0;
    D_80126E92 = 0;
    func_8012A048((s32) &D_80126E60, (s32) func_sc05_010_8017E9D4, 1);
    func_8012A094((s32) &D_80126E60);
    func_sc05_010_8017E9D4((s32) &D_80126E60);
    return func_8012A100(1);
}

s32 func_sc05_010_8017E9B4(void) {
    return func_8012A100(0);
}

void func_sc05_010_8017E9D4(s32 arg0) {
    D_sc05_010_8019227C[AF(arg0, u8, 4)]();
}

void func_sc05_010_8017EA10(u8 *arg0) {
    B8 v;
    u8 t;

    if (func_80148800((s32) &D_80126B58) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_010_80192284)[t];
    }
    v = *(B8 *)&D_80126940;
    func_sc05_010_8017EAE4((s32) arg0, (s32) &v);
}

void func_sc05_010_8017EAB0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x22) + 0xB;
    AF(arg0, u16, 0x22) = temp_v0;
    AF(arg0, u16, 0x1A) = temp_v0;
    func_sc05_010_8017EAE4((s32) arg0, (s32) &D_sc05_010_80192288);
}

void func_sc05_010_8017EAE4(u8 *arg0, u8 *arg1) {
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

extern void func_8012931C();

typedef struct { s32 w[4]; } W16;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { s16 a; u16 b; } P4;
typedef struct { u8 pad[6]; u16 f6; } OH06;
typedef struct { u8 pad[0x12]; s16 f12; } OH12;
typedef struct { u8 pad[0x76]; s16 f76; } OH76;
typedef struct { SV8 a; u8 rest[12]; } E20;

s32 func_sc05_010_8017EC7C() {
    s32 i;
    u8 *p;
    for (i = 0; i < 6; i++) {
        p = D_sc05_010_801C7E30[D_sc05_010_80192478[i]];
        if (AF(AF(p, u8 *, 0x6C), s16, 0x76) > 0) {
            return AF(p, s32, 4);
        }
    }
    return 0;
}

s32 func_sc05_010_8017ECE4(o)
    u8 *o;
{
    s32 y;
    s32 z;
    if ((u16)(AF(o, u16, 6) + 0x100) > 0x300) return -1;
    if ((u16)(AF(o, u16, 0xE) + 0xA0) > 0x140) return -1;
    y = -(rcos(AF(o, s16, 6) * 2 - 0xC0) * 0x30) >> 12;
    y -= 0x90;
    z = AF(o, s16, 0xE);
    if (z >= 0) {
        y += (z << 6) / 160;
    } else {
        y -= (z * 0x30) / 160;
    }
    if (y >= AF(o, s16, 0xA)) {
        return 0;
    }
    AF(o, s16, 0xA) = y;
    return 1;
}

void func_sc05_010_8017EDEC(u8 *arg0) {
    s32 pad[2];
    u8 temp_v0;

    temp_v0 = (AF(arg0, u8, 0xC2) + 2) & 0xF;
    AF(arg0, u8, 0xC2) = temp_v0;
    LoadImage((s32) &D_sc05_010_80192480, D_sc05_010_801C39FC[temp_v0]);
    LoadImage((s32) (&D_sc05_010_80192480 + 8), D_sc05_010_801C3A00[AF(arg0, u8, 0xC2)]);
}

void func_sc05_010_8017EE68(u8 *o) {
    s32 i;

    if (func_8012C354(o, &D_sc05_010_801924A0) == 0) return;
    AF(o, s16, 2) = 0xA;
    SetScript(o, &D_sc05_010_801A33AC);
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -1;
    func_8012B23C(o);
    func_8001D0E8(AF(o, u8 *, 0x20), 0x400, 0x400);
    D_sc05_010_801C7E30[0] = o;
    D_sc05_010_801C7E34 = 0;
    D_sc05_010_801C7E64[0] = 0;
    for (i = 2; i < 7; i++) {
        D_sc05_010_801C7E30[i] = (u8 *)func_8012C658(0x25E, i - 2, o);
    }
    *(s32 *)&D_sc05_010_801C7E4C = func_8012C588(0x2B1, o);
    AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x10000000;
    AF(o, u8, 0x75) = 3;
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    D_sc05_010_801C7E50[0] = (u8 *)func_8012C588(0x28C, o);
    D_sc05_010_801C7E58 = (u8 *)func_8012C588(0x28E, o);
    AF(o, s16, 0x76) = 0x180;
    D_sc05_010_801C7E74 = 0;
    D_sc05_010_801C7E78 = 0;
    D_sc05_010_801C7E28 = 0;
    D_sc05_010_801C7E2C = 0;
}

void func_sc05_010_8017EFC8(u8 *o) {
    typedef struct { u8 pad[0x1C]; s32 t; } ObjS;
    u8 k;

    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    if (!(AF(o, u16, 0x72) & 0x4000)) return;
    k = D_sc05_010_801924D4[D_sc05_010_801C7E74];
    AF(o, s16, 0x34) = 0;
    D_sc05_010_801C7E74 = (D_sc05_010_801C7E74 + 1) % 6;
    switch (k) {
    case 0:
        AF(D_sc05_010_801C7E60, s16, 0xAE) = 0;
        SetScript(o, &D_sc05_010_801A34B4);
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x84) = 0x1E;
        break;
    case 1:
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 2) = 4;
        break;
    case 2:
        ((ObjS *)o)->t = 0;
        AF(o, s16, 0xFE) = D_sc05_010_801C7E78 + 7;
        AF(o, s16, 2) = 5;
        break;
    case 3:
    case 4:
    case 5:
        AF(o, s32, 0x1C) = D_sc05_010_801C7E78 * 18 + 0x25;
        SetScript(o, &D_sc05_010_801A3844);
        AF(o, s16, 2) = 6;
        break;
    case 6:
        AF(o, s16, 2) = 7;
        break;
    case 7:
        D_sc05_010_801C7E70 = 0;
        SetScript(o, &D_sc05_010_801A3A2C);
        AF(o, s16, 0xFE) = D_sc05_010_801C7E78 + 2;
        AF(o, s16, 2) = 2;
        break;
    case 8:
        break;
    }
}

void func_sc05_010_8017F15C(u8 *o) {
    u8 *p;

    if (D_sc05_010_801C7E70 != 0) {
        D_sc05_010_801C7E70--;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 1;
            AF(D_sc05_010_801C7E50[0], s16, 0x102) = 0x1E;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 1;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 1;
            SetScript(o, &D_sc05_010_801A3AC4);
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        if (AF(D_sc05_010_801C7E50[0], s16, 0x10A) >= 2) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x100) = 0x3C;
        }
        break;
    case 2:
        if (AF(o, s16, 0x100) == 0) {
            if (--AF(o, s16, 0xFE) != 0) {
                func_8002D4C8(0x89A, 0);
                AF(o, s16, 0x100) = 0x96;
                AF(D_sc05_010_801C7E50[0], s16, 0x102) = 0x5A;
                AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 1;
            } else {
                AF(o, s16, 0x34) = 3;
                AF(o, s32, 0x1C) = 0x3C;
                AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
                SetScript(o, &D_sc05_010_801A3B2C);
            }
        } else {
            AF(o, s16, 0x100)--;
        }
        if (func_80153BD8(D_sc05_010_801C7E54) != 0 || func_80153BD8(D_sc05_010_801C7E5C) != 0) {
            SetScript(o, &D_sc05_010_801A3B74);
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 5;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 0;
            AF(o, s16, 0x34) = 4;
            D_sc05_010_801C7E68 = D_80126B5E;
            D_sc05_010_801C7E6A = D_80126B62;
            AF(o, s32, 0x1C) = 0x100;
            AF(o, s16, 0xFC) = 0;
            func_8002D4C8(0x89A, 0);
        }
        break;
    case 3:
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 2) = 1;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 0;
            AF(o, s32, 0x1C) = 0x3C;
        }
        break;
    case 4:
        if (func_80153BD8(D_sc05_010_801C7E54) != 0 || func_80153BD8(D_sc05_010_801C7E5C) != 0) {
            AF(o, s16, 0xFC)++;
            AF(o, s32, 0x1C) -= AF(o, s16, 0xFC) >> 3;
            if (AF(o, s32, 0x1C) <= 0) {
                D_80126B5E = -0x100;
                D_80126B62 = -0xB0;
                AF(o, s16, 0x34) = 5;
                func_8002D4C8(0xAD4, 0);
            }
            D_80126B5E = (((D_sc05_010_801C7E68 + 0x100) * AF(o, s32, 0x1C)) >> 8) - 0x100;
            D_80126B62 = (((D_sc05_010_801C7E6A + 0xC0) * AF(o, s32, 0x1C)) >> 8) - 0xC0;
        } else {
            AF(o, s16, 0x34) = 3;
            AF(o, s32, 0x1C) = 0x3C;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
            SetScript(o, &D_sc05_010_801A3B2C);
            func_80153BF0(o);
        }
        break;
    case 5:
        D_80126B6C = 0;
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A3BB4);
        }
        if (func_80153BD8(D_sc05_010_801C7E54) == 0 && func_80153BD8(D_sc05_010_801C7E5C) == 0) {
            AF(o, s16, 0x34) = 3;
            AF(o, s32, 0x1C) = 0x3C;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
            SetScript(o, &D_sc05_010_801A3B2C);
            func_80153BF0(o);
        } else {
            p = (u8 *)func_8012C588(0x2D7, o);
            if (p != 0) {
                AF(p, s16, 6) = -0x100;
                AF(p, s16, 0xA) = -0x180;
            }
        }
        break;
    }
}

void func_sc05_010_8017F5B8(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *s;
    u8 *q;
    s32 x;
    s32 y;
    u8 c;
    s32 n;
    u16 z;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s16, 0x84) == 0) {
            func_8002D4C8(0x89B, 0);
        }
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A35FC);
            AF(o, s16, 0x34) = 1;
            D_sc05_010_801C7E64[0] = (u8 *)func_8012C588(0x2EC, o);
            if (D_sc05_010_801C7E64[0] != 0) {
                AF(D_sc05_010_801C7E64[0], s16, 6) = a.x + 0x10;
            }
            func_8002D4C8(0x89C, 0);
        }
        break;
    case 1:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc05_010_801A3C44);
            n = D_sc05_010_801C7E78;
            AF(o, s16, 0x34) = 2;
            AF(o, u8, 0xC2) = 0;
            AF(o, s32, 0x1C) = 3 - n;
            if (D_sc05_010_801C7E64[0] != 0) {
                func_8012C218(D_sc05_010_801C7E64[0]);
            }
            break;
        }
        s = AF(AF(o, u8 *, 0x20), u8 *, 0x20);
        s += 0x24;
        x = AF(o, u16, 6) + AF(s, u16, 0);
        z = D_80126B66;
        a.x = x + 0x20;
        y = AF(o, u16, 0xA) + AF(s, u16, 2);
        b.x = x + 0x10;
        a.z = b.z = z;
        b.y = a.y = y;
        if (D_sc05_010_801C7E64[0] != 0) {
            AF(D_sc05_010_801C7E64[0], s16, 6) = x + 0x30;
        }
        if ((++AF(o, s32, 0x1C) & 1) == 0) {
            q = (u8 *)func_8012C588(0x2EB, o);
            if (q != 0) {
                AF(q, s16, 6) = AF(o, s16, 6) + AF(s, s16, 0);
                AF(q, s16, 0xA) = AF(o, s16, 0xA) + AF(s, s16, 2);
                AF(q, s16, 0xE) = AF(o, s16, 0xE) + AF(s, s16, 4);
                AF(AF(q, u8 *, 0x20), s16, 0x10) = AF(s, s16, 6);
                AF(AF(q, u8 *, 0x20), s16, 0x12) = AF(s, s16, 8);
                AF(AF(q, u8 *, 0x20), s16, 0x14) = AF(s, s16, 0xA);
            }
        }
        if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
            func_8012F568(1, 0x4004, 0x400, 0x30, &b, &D_801152A8);
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A3E2C);
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        AF(o, u8, 0xC2) = (AF(o, u8, 0xC2) + 2) & 0xF;
        LoadPair(o);
        if ((AF(o, u16, 0x72) & 0x4000) && --AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 0x34) = 4;
            SetScript(o, &D_sc05_010_801A3D94);
            AF(o, u8, 0xC2) = 0;
            LoadPair(o);
        }
        break;
    case 4:
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
            AF(o, s16, 2) = 1;
            AF(o, s32, 0x1C) = 0x3C;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
        }
        break;
    }
}

void func_sc05_010_8017F9B4(u8 *o) {
    s32 n;
    s32 i;
    u8 *p;

    if (AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc05_010_801A33AC);
        AF(o, s32, 0x1C) = 0x5A;
        return;
    }
    n = AF(o, s32, 0x1C) - 1;
    AF(o, s32, 0x1C) = n;
    if (n % 19 == 0) {
        func_8012C588(0x29E, o);
        AF(AF(D_sc05_010_801C7E4C, u8 *, 0x20), s16, 0x1A) = 0xC00;
        for (i = 0; i < 8; i++) {
            p = (u8 *)func_8012C658(0x29E, 2, o);
            if (p != 0) {
                AF(p, s16, 6) += 0x25B;
                AF(p, s16, 0xA) += (rand() & 0x1F) - 0x70;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x12) = (rand() & 7) - 4;
                AF(p, s16, 0x1A) = -4 - (rand() & 7);
            }
        }
    }
}

void func_sc05_010_8017FAF4(u8 *o) {
    s32 i;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc05_010_801A3D5C);
            AF(o, s32, 0x1C) = 0x5A;
            p = (u8 *)&D_801202A0;
            for (i = 0; i < 0x60; i++, p += 0x10C) {
                if (*(u16 *)p == 0x2B5) {
                    AF(p, s16, 0x34) = 1;
                }
            }
            AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x78;
        }
        break;
    case 1:
        if (func_8014CB8C() == 0 && *(s32 *)(&D_80126B58 + 8) < 0) {
            if (func_80172658(&D_80126B58) != 0 || func_801726A0(&D_80126B58) != 0) {
                D_80126B5E += 4;
            } else {
                D_80126B5E += 0x18;
            }
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 0x34) = 2;
            SetScript(o, &D_sc05_010_801A3E2C);
            AF(o, u8, 0xC2) = 0;
            func_8002D4C8(4, 0x89F);
            AF(o, s32, 0x1C) = 7 - D_sc05_010_801C7E78 * 2;
        }
        break;
    case 2:
        AF(o, u8, 0xC2) = (AF(o, u8, 0xC2) + 2) & 0xF;
        LoadPair(o);
        if ((AF(o, u16, 0x72) & 0x4000) && --AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 0x34) = 3;
            SetScript(o, &D_sc05_010_801A3D94);
            AF(o, u8, 0xC2) = 0;
            LoadPair(o);
        }
        break;
    case 3:
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
            AF(o, s16, 2) = 1;
            AF(o, s32, 0x1C) = 0x5A;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
            AF(o, u16, 0x70) &= 0xFFFE;
        }
        break;
    }
}

void func_sc05_010_8017FDE0(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (10000 - D_sc05_010_80192470[D_sc05_010_801C7E78] >= AF(D_sc05_010_801C7E60, s16, 0x76)) {
            AF(D_sc05_010_801C7E60, s16, 0x76) = 10000;
            AF(D_sc05_010_801C7E50[4], s16, 0xAE) = -1;
            SetScript(o, &D_sc05_010_801A36FC);
            AF(o, s16, 0x34) = 1;
        } else {
            SetScript(o, &D_sc05_010_801A36FC);
            AF(o, s32, 0x1C) = D_sc05_010_801C7E78 * 16 + 0x19;
            AF(o, s16, 2) = 4;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
        }
        break;
    case 1:
        if (D_sc05_010_801C7E30[1] == 0) {
            D_sc05_010_801C7E30[1] = (u8 *)func_8012C588(0x2DB, o);
            AF(D_sc05_010_801C7E30[1], s16, 6) += 0x270;
            AF(D_sc05_010_801C7E30[1], s16, 0xA) -= 0xA0;
        }
        AF(o, s32, 0x1C) = 0;
        AF(o, u16, 0x34)++;
        break;
    case 2:
        break;
    case 3:
        SetScript(o, &D_sc05_010_801A3C44);
        AF(o, s16, 2) = 8;
        func_8002D4C8(0x89F, 0);
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x70) |= 1;
        AF(D_sc05_010_801C7E60, s16, 0xAE) = 0;
        break;
    }
}

void func_sc05_010_8017FFA8(u8 *o) {
    s32 i;
    s32 f;
    u8 *q;
    s16 *g;
    u8 **tb;
    s32 n;
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        f = 0;
        for (i = 0, tb = D_sc05_010_801C7E30, g = &D_80126B62; i < 6; i++) {
            q = AF(tb[D_sc05_010_80192478[i]], u8 *, 0x6C);
            if (AF(q, u8, 0x74) != 0) {
                f = 1;
                n = AF(q, s16, 0x70) * 16;
                v = AF(q, u16, 0xA) + *(u16 *)((u8 *)D_sc05_010_801922B8 + n);
                AF(g, s32, 0xA) = 0;
                *g = v;
            }
        }
        if (f == 0) break;
        func_80178B18(o, &D_sc05_010_8019231C);
        func_801746DC();
        goto next;
    case 4:
        D_sc05_010_801C7E60 = (u8 *)func_8012C588(0x27C, o);
    case 2:
    next:
        AF(o, s16, 0x34)++;
        break;
    case 1:
    case 3:
    case 5:
        break;
    }
    if (func_80178970(o) != 0) {
        func_80178D18(o);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0x1E;
        AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0;
    }
}

void func_sc05_010_80180108(u8 *o) {
    SV8 a;
    SV8 b;
    s16 *p = &D_80126B5E;
    if (*p < -0x120) {
        *p = -0x120;
        a.x = -0x130;
        b.x = -0x110;
        a.y = b.y = D_80126B62 - 0x40;
        a.z = b.z = D_80126B66;
        if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
            func_8012F568(1, 0x8004, 0xC00, 0xA, &b, &D_801152A8);
        }
    }
    if (D_sc05_010_801C7E28 != 0) {
        D_sc05_010_801C7E28--;
    }
    D_sc05_010_801924E4[AF(o, u16, 2)](o);
}

void func_sc05_010_80180214(u8 *o) {
    SV8 sv;
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s32, 0x1C) += 0x80;
        v = rsin(AF(o, s32, 0x1C)) >> 4;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v + 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v + 0x1000;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(o, s32, 0x1C) &= 0x7FF;
            if (--AF(o, s16, 0xFC) == 0) {
                AF(o, s16, 0x34)++;
                func_8002D4C8(0x905, 0);
                if (AF(AF(o, u8 *, 0x6C), u8, 0x74) != 0) {
                    func_8002D4C8(0x904, 0);
                    sv.x = D_80126B5E;
                    sv.y = D_80126B62;
                    sv.z = D_80126B66;
                    func_8012F568(1, 0x1E, 0x400, 0x20, &sv, &D_801152A8);
                    AF(o, s16, 0xFC) = D_80126B62;
                }
            } else {
                func_8002D4C8(0x903, 0);
            }
        }
        break;
    case 1:
        AF(o, s32, 0x1C) += 0x80;
        v = rsin(AF(o, s32, 0x1C)) >> 1;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v + 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v + 0x1000;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            if (AF(o, s16, 0xFC) != 0) {
                AF(o, s16, 0x34)++;
                AF(D_sc05_010_801C7E30[0], s32, 0x1C) += 0x28;
            } else {
                AF(o, s16, 2) = 1;
            }
        }
        break;
    case 2:
        AF(o, s32, 0x1C) += 0x80;
        if (AF(o, s32, 0x1C) >= 0x1C00) {
            func_8012C658(0x274, (s16)(AF(o, u16, 0x70) | 0x10), o);
            AF(o, s16, 2) = 1;
        }
        break;
    }
}

void func_sc05_010_80180450(u8 *o) {
    s32 v;
    u8 unused[8];

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s32, 0x1C) += 0x80;
        v = rsin(AF(o, s32, 0x1C)) >> 5;
        v += 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(o, s32, 0x1C) &= 0x7FF;
            if (--AF(o, s16, 0xFC) == 0) {
                AF(o, s16, 0x34)++;
                if (AF(AF(o, u8 *, 0x6C), u8, 0x74) != 0) {
                    func_8002D4C8(0x904, 0);
                    AF(o, s16, 0xFC) = D_80126B62;
                }
            }
        }
        break;
    case 1:
        AF(o, s32, 0x1C) += 0x80;
        v = rsin(AF(o, s32, 0x1C)) >> 2;
        v += 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(o, s16, 2) = 1;
        }
        if (AF(o, s16, 0xFC) != 0 && AF(o, s32, 0x1C) <= 0x400) {
            D_80126B62 = AF(o, s16, 0xFC) - (rsin(AF(o, s32, 0x1C)) >> 5);
        }
        break;
    }
}

void func_sc05_010_801805D0(u8 *arg0) {
    D_sc05_010_80192568[AF(arg0, u16, 2)]();
}

void func_sc05_010_8018060C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0xE0);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0xE0) = (s32) (temp_v0 - 1);
    } else if ((AF(arg0, s32, 0xDC) < 0x20) && (func_8012C588(0x2B5, (s32) arg0, arg2) != 0)) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) + 1);
    }
    D_sc05_010_801925B0[AF(arg0, u16, 2)](arg0);
}

void func_sc05_010_801806A0(u8 *o, s32 a1) {
    s32 i;
    s32 n;

    if (AF(o, s16, 0x76) > 0) {
        for (i = 0; i < 5; i++) {
            if (AF(o, s16, 0x76) >= D_sc05_010_801926D4[i]) {
                if (AF(o, s16, 0xFC) != i) {
                    MoveImage(D_sc05_010_801925C4 + i * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
                    MoveImage(D_sc05_010_801925C4 + i * 16 + 8, 0x160, AF(o, s16, 0x70) + 0x147);
                    AF(o, s16, 0xFC) = i;
                }
                return;
            }
        }
        return;
    }
    if (a1 != 0) {
        n = AF(o, s16, 0x76);
        if (n == 0) {
            AF(o, s16, 0x76) = 0x12C;
            MoveImage(D_sc05_010_801925C4, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
            MoveImage(D_sc05_010_801925C4 + 8, 0x160, AF(o, s16, 0x70) + 0x147);
            AF(o, s16, 0xFC) = 0;
            return;
        }
        if (n >= -4) {
            MoveImage((u8 *)D_sc05_010_801926D4 + n * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
            MoveImage((u8 *)D_sc05_010_801926D4 + 8 + AF(o, s16, 0x76) * 16, 0x160, AF(o, s16, 0x70) + 0x147);
            return;
        }
    }
    MoveImage(D_sc05_010_80192614 + (AF(o, u16, 0x76) & 7) * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
    MoveImage(D_sc05_010_80192614 + 8 + (AF(o, u16, 0x76) & 7) * 16, 0x160, AF(o, s16, 0x70) + 0x147);
}

void func_sc05_010_80180854(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *t;

    D_sc05_010_80192724[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (D_80126CC8 == o) {
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        D_80126B62 -= 0x40;
    }
    t = &D_sc05_010_801922B0 + AF(o, s16, 0x70) * 16;
    AF(o, s16, 0xA) = AF(o, u16, 0x8A) + (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x1A) * AF(t, s16, 8)) / 4096 - AF(t, s16, 8);
    func_8012DFD4(o);
    if (AF(D_sc05_010_801C7E30[0], u16, 2) < 10) {
        if (D_80126B5E >= AF(o, s16, 6) + AF(t, s16, 4) && AF(o, s16, 6) + AF(t, s16, 6) >= D_80126B5E) {
            if (AF(o, s16, 0xA) + AF(t, s16, 8) < D_80126B62) {
                D_80126B62 = AF(o, s16, 0xA) + AF(t, s16, 8);
                D_80126B6C = 0;
            }
        }
    }
    if (AF(o, s16, 0x76) < 300) {
        AF(o, s16, 0x76)++;
    }
    if (AF(o, u8, 0x74) != 0 && AF(o, s16, 0x76) < 0) {
        b.x = D_80126B5E;
        a.x = D_80126B5E;
        a.y = D_80126B62 + 0x10;
        b.y = D_80126B62 - 0x10;
        a.z = b.z = D_80126B66;
        if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
            func_8012F568(1, 0x4004, 0x400, 0x14, &b, &D_801152A8);
        }
    }
    func_sc05_010_801806A0(o, 1);
}

extern void (*D_sc05_010_80192770[])();
extern s16 D_sc05_010_80192734;
void func_sc05_010_80180AA0(u8 *o) {
    u8 unused[0x10]; /* MATCH-TRICK: unused padding gives the original frame size */

    D_sc05_010_80192770[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) == 0) return;
    AF(o, s16, 0xA) = AF(o, u16, 0x8A) + (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x1A) * D_sc05_010_80192734) / 4096 - D_sc05_010_80192734;
    func_8012DFD4(o);
}

void func_sc05_010_80180B44(u8 *o) {
    s16 fc;
    s32 i;
    u8 *p;
    s32 r;
    SV8 a;
    SV8 b;
    s16 x;
    s16 y;
    s32 t;
    u8 unused[8];
    s32 d;

    fc = AF(o, s16, 0xFC);
    if (fc != 0x800) {
        AF(o, s16, 0xFC) = fc + 0x100;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x900 - (rcos((s16)(fc + 0x100)) >> 1);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x900 - (rcos(AF(o, s16, 0xFC)) >> 1);
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x900 - (rcos(AF(o, s16, 0xFC)) >> 1);
        if (AF(o, s16, 0xFC) == 0x400) {
            func_8002D4C8(0x80B, 0);
            for (i = 0; i < 16; i++) {
                p = (u8 *)func_8012C588(0x2ED, o);
                if (p != 0) {
                    r = (rand() & 0x7F) - 0x40;
                    AF(p, s32, 0x10) = r << 12;
                    AF(p, s16, 6) += r;
                    r = (rand() & 0x7F) - 0x40;
                    AF(p, s32, 0x18) = r << 12;
                    AF(p, s16, 0xE) += r;
                    AF(p, s16, 0xA) -= 0x80;
                    AF(p, s16, 0x16) = -0x18 - (rand() & 7);
                }
            }
        }
    } else if (AF(o, s16, 0xFE) != 0) {
        AF(o, s16, 0xFE)--;
    } else {
        AF(o, s16, 0xFC) = fc + 0x100;
        func_8002D4C8(0x80C, 0);
    }
    if (AF(o, s16, 0xFC) >= 0x1000) {
        func_8012C218(o);
        return;
    }
    if (AF(o, u16, 0x70) & 0xF0) {
        if (AF(o, s16, 0xFC) == 0x7F0) {
            func_8002D4C8(0xC8E, 0);
        }
        return;
    }
    t = D_80126B5E;
    d = t - AF(o, s16, 6);
    x = t;
    if ((u32)(d + 0x5F) < 0xBF) {
        d = AF(o, s16, 0xA);
        d -= ((AF(AF(o, u8 *, 0x20), s16, 0x1A) * 11) >> 8);
        if (d < (y = D_80126B62)) {
            a.y = y + 0x10;
            b.x = x;
            a.x = x;
            b.y = y - 0x10;
            a.z = b.z = D_80126B66;
            if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
                func_8012F568(1, 0x4004, 0x400, 0x20, &b, &D_801152A8);
            }
        }
    }
}

void func_sc05_010_80180DEC(u8 *arg0) {
    D_sc05_010_801927B8[AF(arg0, u16, 2)]();
}

void func_sc05_010_80180E28(u8 *o) {
    typedef struct { u8 pad[2]; s16 s2; u8 pad2[0xF8]; s16 sFC; s16 sFE; } ObjS;

    AF(AF(o, u8 *, 0x20), s16, 0x14) -= 0x80;
    AF(o, s16, 0x100) += 0x40;
    AF(o, s32, 4) -= AF(o, s32, 0x10);
    AF(o, s32, 8) = 0xFF900000 - ((rsin(AF(o, s16, 0x100)) * AF(o, s16, 0xFE)) << 4);
    if (func_sc05_010_8017ECE4(o) > 0) {
        ((SV8 *)AF(o, u8 *, 0x20))[2].z = 0;
        ((ObjS *)o)->s2 = 2;
        ((ObjS *)o)->sFE = 0x1E;
        ((ObjS *)o)->sFC = 0x400;
        if (D_sc05_010_801C7E28 != 0) {
            if (++D_sc05_010_801C7E2C > 8) {
                D_sc05_010_801C7E2C = 8;
            }
            D_sc05_010_801C7E28 = 0x1E;
            func_8002D4C8(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
        } else {
            D_sc05_010_801C7E28 = 0x1E;
            D_sc05_010_801C7E2C = 0;
            func_8002D4C8(0x896, 0);
        }
    } else {
        func_8012D624(o, 0x20, 0xC);
    }
    func_8012B370(o);
}

void func_sc05_010_80180F84(u8 *o) {
    V3 sv;
    s32 v;
    s32 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s16, 0xFC) += 0x40;
        if (--AF(o, s16, 0xFE) <= 0) {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        AF(o, s16, 0xFC) -= 0x180;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x400;
        v = func_8012B8E4(o, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += v;
        if (v >= -8 && v <= 8) {
            if (func_8012BCCC(o) <= 0x4000) {
                AF(o, s16, 0x34) = 3;
                AF(o, s16, 0xFC) = 0;
                AF(o, s16, 0xFE) = 0x1E;
            } else {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0xFE) = 0x20;
            }
        }
        break;
    case 2:
        AF(o, s16, 0xFC) -= 0x80;
        v = rcos(AF(o, s16, 0xFC)) << 5;
        if (v > 0) {
            v = 0;
        }
        sv.x = v;
        sv.y = 0;
        sv.z = 0;
        func_8012B1B4(o, &sv);
        func_8012CBF4(o);
        if (AF(o, s16, 0x16) > 0x20) {
            AF(o, s16, 0x16) = 0x20;
        }
        if (func_sc05_010_8017ECE4(o) < 0) {
            func_8012C218(o);
        } else if (--AF(o, s16, 0xFE) == 0) {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 3:
        if (--AF(o, s16, 0xFE) == 0) {
            AF(o, s16, 0xFC) = 0x800;
            AF(o, s32, 0x14) = 0xFFF00000;
            sv.x = 0xFFF80000;
            sv.y = 0;
            sv.z = 0;
            func_8012B1B4(o, &sv);
            AF(o, s16, 0x34) = 4;
            func_8002D4C8(0x897, 0);
        }
        break;
    case 4:
        if (func_8012CBF4(o) & 0x6000) {
            func_8012C218(o);
        }
        if (func_8012D5E4(o, &D_sc05_010_80192844, &D_sc05_010_8019284C, 0xC) != 0) {
            AF(o, s16, 0x34) = 5;
            AF(o, s32, 0x10) = -AF(o, s32, 0x10);
            AF(o, s32, 0x18) = -AF(o, s32, 0x18);
        }
        if (func_sc05_010_8017ECE4(o) > 0) {
            t = D_sc05_010_801C7E28;
            AF(o, s16, 0x34) = 6;
            if (t != 0) {
                if (++D_sc05_010_801C7E2C > 8) {
                    D_sc05_010_801C7E2C = 8;
                }
                D_sc05_010_801C7E28 = 0x1E;
                func_8002D4C8(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
            } else {
                D_sc05_010_801C7E28 = 0x1E;
                D_sc05_010_801C7E2C = 0;
                func_8002D4C8(0x896, 0);
            }
        }
        break;
    case 5:
        if (func_8012CBF4(o) & 0x6000) {
            func_8012C218(o);
        }
        if (func_sc05_010_8017ECE4(o) > 0) {
            t = D_sc05_010_801C7E28;
            AF(o, s16, 0x34) = 6;
            if (t != 0) {
                if (++D_sc05_010_801C7E2C > 8) {
                    D_sc05_010_801C7E2C = 8;
                }
                D_sc05_010_801C7E28 = 0x1E;
                func_8002D4C8(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
            } else {
                D_sc05_010_801C7E28 = 0x1E;
                D_sc05_010_801C7E2C = 0;
                func_8002D4C8(0x896, 0);
            }
        }
        break;
    case 6:
        AF(o, s16, 0xFC) -= 0x80;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x400, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
        if (AF(AF(o, u8 *, 0x20), u16, 0x12) >= 0x3F0 && AF(AF(o, u8 *, 0x20), u16, 0x12) <= 0x410) {
            AF(o, s16, 0x34) = 7;
            AF(o, s16, 0x16) = -0x10;
            AF(o, s16, 0x1A) = 4;
            func_8002D4C8(0x897, 0);
        } else {
            v = rcos(AF(o, s16, 0xFC)) << 5;
            if (v > 0) {
                v = 0;
            }
            sv.x = v;
            sv.y = 0;
            sv.z = 0;
            func_8012B1B4(o, &sv);
            if (func_8012CBF4(o) & 0x6000) {
                func_8012C218(o);
            } else {
                if (AF(o, s16, 0x16) > 0x20) {
                    AF(o, s16, 0x16) = 0x20;
                }
                if (func_sc05_010_8017ECE4(o) < 0) {
                    func_8012C218(o);
                }
            }
        }
        break;
    case 7:
        if (func_8012CBF4(o) & 0x6000) {
            func_8012C218(o);
        }
        break;
    }
}

extern void (*D_sc05_010_80192854[])();
void func_sc05_010_801813F4(u8 *o) {
    s32 a;
    D_sc05_010_80192854[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0) {
        a = AF(o, u16, 0xFC) & 0xFFF;
        AF(o, u16, 0xFC) = a;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000 - (rcos(a) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = (rcos(AF(o, s16, 0xFC)) >> 3) + 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = (rcos(AF(o, s16, 0xFC)) >> 3) + 0x1000;
    }
}

void func_sc05_010_801814AC(u8 *o) {
    u8 *p;

    func_8016AA50(o, AF(o, s16, 0x60));
    if (AF(o, u16, 0x82) & 1) {
        func_8016B428(o);
        StartRumbleScript(&D_sc05_010_80192860);
    }
    AF(o, s32, 0x1C) = 10;
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x76) -= AF(o, s16, 0x60);
    AF(D_sc05_010_801C7E30[0], s16, 0x34) = 0;
    AF(D_sc05_010_801C7E30[0], s16, 2) = 9;
    AF(D_sc05_010_801C7E30[0], u8, 0xC2) = 0xE;
    p = D_sc05_010_801C7E30[0];
    AF(p, u8, 0xC2) = (AF(p, u8, 0xC2) + 2) & 0xF;
    LoadPair(p);
    if (D_sc05_010_801C7E64[0] != 0) {
        func_8012C218(D_sc05_010_801C7E64[0]);
    }
    if (AF(D_sc05_010_801C7E30[0], u16, 0x70) & 1) {
        func_8002D4C8(4, 0x89F);
        AF(D_sc05_010_801C7E30[0], u16, 0x70) &= 0xFFFE;
    }
    func_8002D4C8(0x8A0, 0);
    if (AF(o, u8, 0x5E) != 0x1D) {
        if (AF(o, u8, 0xC8) != 0) {
            func_8002A520(o);
        }
        if (AF(o, u8, 0xC9) != 0) {
            func_8002A790(o);
        }
    }
}

void func_sc05_010_80181670(u8 *o) {
    u8 *pp[4];
    SV8 sv;
    s16 xs[5];
    s16 ys[5];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    s32 otz;
    u32 *ot;
    s32 d;
    s32 e;
    s16 x;
    s16 y;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc05_010_801928B0, &sv, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = D_800A651C[D_800B9A02].ot + otz;
    d = (Size_80181670(o) * (D_80126950 + 500)) / (otz * 4);
    x = ((s16 *) &sxy)[0];
    y = ((s16 *) &sxy)[1];
    xs[2] = x;
    ys[2] = y;
    e = (d * 179) >> 8;
    xs[0] = x - d;
    xs[1] = x - e;
    xs[3] = x + e;
    xs[4] = x + d;
    ys[0] = y - d;
    ys[1] = y - e;
    ys[3] = y + e;
    ys[4] = y + d;
    prim = AllocPrim(0x9C);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 1, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (i = 0; i < 4; i++, q += 0x24) {
        j = i * 4;
        AF(q, s32, 4) = D_sc05_010_80192874[D_sc05_010_801928A0[j]];
        AF(q, s32, 0xC) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 1]];
        AF(q, s32, 0x14) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 2]];
        AF(q, s32, 0x1C) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = xs[D_sc05_010_80192880[j]];
        AF(q, s16, 0x10) = xs[D_sc05_010_80192880[j + 1]];
        AF(q, s16, 0x18) = xs[D_sc05_010_80192880[j + 2]];
        AF(q, s16, 0x20) = xs[D_sc05_010_80192880[j + 3]];
        AF(q, s16, 0xA) = ys[D_sc05_010_80192890[j]];
        AF(q, s16, 0x12) = ys[D_sc05_010_80192890[j + 1]];
        AF(q, s16, 0x1A) = ys[D_sc05_010_80192890[j + 2]];
        AF(q, s16, 0x22) = ys[D_sc05_010_80192890[j + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void func_sc05_010_80181B4C(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8((s32) arg0);
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_010_801928B8 | 0x40000000 | 0x20000000);
        AF(arg0, s16, 0x76) = 0x2710;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_010_801928C8;
        AF(arg0, s32, 4) = 0x025B0000;
        AF(arg0, s32, 8) = 0xFF900000;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 3);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x64);
    if (AF(temp_v1, u16, 0) != 0) {
        temp_a1 = AF(AF(temp_v1, void *, 0x20), void *, 0x20);
        AF(AF(arg0, s32, 0x20), u16, 0x10) = (u16) AF(temp_a1, u16, 6);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(temp_a1, u16, 8);
        AF(AF(arg0, s32, 0x20), s16, 0x14) = (s16) (AF(temp_a1, u16, 0xA) - 0x100);
        AF(arg0, s16, 6) = (s16) (AF(AF(arg0, void *, 0x64), u16, 6) + AF(temp_a1, u16, 0));
        AF(arg0, s16, 0xA) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xA) + AF(temp_a1, u16, 2));
        AF(arg0, s16, 0xE) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xE) + AF(temp_a1, u16, 4));
        func_8012B2CC((s32) arg0);
        if (AF(AF(arg0, void *, 0x64), s32, 0x90) == &D_sc05_010_801A3E2C) {
            func_sc05_010_80181670((s32) arg0);
        }
    }
}

extern u8 D_sc05_010_8019292C;
extern void Square0();
extern s32 ratan2();
extern s32 rcos();
extern s32 rsin();

static inline UXY Aim_80181CDC(u8 *o, SV8 *t) {
    UXY r;
    s32 ang;
    s32 dx, dy, dz, c;
    dz = t->z - AF(o, s16, 0xE);
    dx = t->x - AF(o, s16, 6);
    dy = t->y - AF(o, s16, 0xA);
    ang = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    r.s.y = ang;
    c = rcos(ang);
    dz = (dz * c + dx * rsin(ang)) >> 12;
    r.s.x = ratan2(dy, -dz);
    return r;
}

void func_sc05_010_80181CDC(u8 *o) {
    SV8 pos;
    SV8 tgt;
    V3 v;
    s32 d;
    UXY a;
    UXY b;

    switch (AF(o, s16, 0x10A)) {
    case 0:
        break;
    case 1:
        func_8012F14C(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        v.x = AF(o, s16, 6) - pos.x;
        v.y = AF(o, s16, 0xA) - pos.y;
        v.z = AF(o, s16, 0xE) - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = AF(o, s16, 6) - D_80126B5E;
        v.y = AF(o, s16, 0xA) - D_80126B62;
        v.z = AF(o, s16, 0xE) - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                AF(o, s16, 0xFC) += 0x20;
            } else {
                AF(o, s16, 0xFC) = AF(o, s16, 0xFC) + d / 512;
                AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
            }
            if (AF(o, s16, 0xFC) > 0x400) AF(o, s16, 0xFC) = 0x400;
        } else {
            if (d < 0) {
                if (d < -0x4000) {
                    AF(o, s16, 0xFC) -= 0x20;
                } else {
                    AF(o, s16, 0xFC) = AF(o, s16, 0xFC) + d / 512;
                    AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
                }
                if (AF(o, s16, 0xFC) < -0x400) AF(o, s16, 0xFC) = -0x400;
            }
            AF(o, s16, 0x102) -= 4;
        }
        tgt.x = D_80126B5E;
        tgt.y = -0xC0;
        tgt.z = -0x100;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        AF(AF(o, u8 *, 0x20), s16, 0x14) += func_8012B608(b.s.x, a.s.x, 4);
        AF(o, s16, 0x100) += func_8012B608(AF(o, s16, 0x100), AF(AF(o, u8 *, 0x20), s16, 0x14), 4);
        AF(o, s16, 0xFE) += func_8012B608(b.s.y, a.s.y, 8);
        if (AF(o, s16, 0x102) <= 0) {
            AF(o, s16, 0x10A) = 2;
            AF(o, s16, 0x102) = 0xF;
        }
        break;
    case 2:
        if (--AF(o, s16, 0x102) != 0) {
            AF(o, s16, 0xFE) += 0x18;
        } else {
            AF(o, s16, 0x10A) = 3;
            func_8002D4C8(0x89A, 0);
        }
        break;
    case 3:
        func_8012F14C(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        if (pos.z > 0 && AF(AF(o, u8 *, 0x64), u16, 0x34) < 4) {
            AF(o, s16, 0x10A) = 1;
            AF(AF(o, u8 *, 0x64), s16, 0x100) = 0;
        }
        v.x = AF(o, s16, 6) - pos.x;
        v.y = AF(o, s16, 0xA) - pos.y;
        v.z = AF(o, s16, 0xE) - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = AF(o, s16, 6) - D_80126B5E;
        v.y = AF(o, s16, 0xA) + 0xC0;
        v.z = AF(o, s16, 0xE) - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                AF(o, s16, 0xFC) += 0x20;
            } else {
                AF(o, s16, 0xFC) += d / 512;
            }
            if (AF(o, s16, 0xFC) > 0x400) AF(o, s16, 0xFC) = 0x400;
        } else if (d < 0) {
            if (d < -0x4000) {
                AF(o, s16, 0xFC) -= 0x20;
            } else {
                AF(o, s16, 0xFC) += d / 512;
            }
            if (AF(o, s16, 0xFC) < -0x400) AF(o, s16, 0xFC) = -0x400;
        }
        tgt.x = D_80126B5E;
        tgt.y = -0xC0;
        tgt.z = D_80126B66;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        AF(AF(o, u8 *, 0x20), s16, 0x14) += func_8012B608(b.s.x, a.s.x, 4);
        AF(o, s16, 0x100) += func_8012B608(AF(o, s16, 0x100), AF(AF(o, u8 *, 0x20), s16, 0x14), 4);
        AF(o, s16, 0xFE) += func_8012B608(b.s.y, a.s.y, 8);
        break;
    case 4:
        AF(AF(o, u8 *, 0x20), s16, 0x14) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x14), 0x180, 0x10);
        AF(o, s16, 0xFC) += func_8012B608(AF(o, s16, 0xFC), 0, 0x10);
        AF(o, s16, 0xFE) += func_8012B608(AF(o, s16, 0xFE), 0x400, 0x10);
        AF(o, s16, 0x100) += func_8012B608(AF(o, s16, 0x100), 0, 0x10);
        break;
    case 5:
        func_8012F14C(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        if (pos.z > 0 && AF(AF(o, u8 *, 0x64), u16, 0x34) < 4) {
            AF(o, s16, 0x10A) = 1;
            AF(AF(o, u8 *, 0x64), s16, 0x100) = 0;
        }
        v.x = AF(o, s16, 6) - pos.x;
        v.y = AF(o, s16, 0xA) - pos.y;
        v.z = AF(o, s16, 0xE) - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = AF(o, s16, 6) - D_80126B5E;
        v.y = AF(o, s16, 0xA) + 0xC0;
        v.z = AF(o, s16, 0xE) - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                AF(o, s16, 0xFC) += 0x40;
            } else {
                AF(o, s16, 0xFC) += d / 256;
            }
            if (AF(o, s16, 0xFC) > 0x400) AF(o, s16, 0xFC) = 0x400;
        } else if (d < 0) {
            if (d < -0x4000) {
                AF(o, s16, 0xFC) -= 0x40;
            } else {
                AF(o, s16, 0xFC) += d / 256;
            }
            if (AF(o, s16, 0xFC) < -0x400) AF(o, s16, 0xFC) = -0x400;
        }
        tgt.x = D_80126B5E;
        tgt.y = -0xC0;
        tgt.z = D_80126B66;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        AF(AF(o, u8 *, 0x20), s16, 0x14) += func_8012B608(b.s.x, a.s.x, 4);
        AF(o, s16, 0x100) += func_8012B608(AF(o, s16, 0x100), AF(AF(o, u8 *, 0x20), s16, 0x14), 4);
        AF(o, s16, 0xFE) += func_8012B608(b.s.y, a.s.y, 4);
        break;
    }
}

void func_sc05_010_801828E0(u8 *o) {
    u8 unused[8];
    u8 *p;
    u8 *q;
    D_sc05_010_80192934[AF(o, u16, 2)]();
    p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 0) != 0) {
        q = AF(AF(p, u8 *, 0x20), u8 *, 0x20);
        q += 0x60;
        AF(o, s16, 6) = AF(p, s16, 6) + AF(q, s16, 0);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) + AF(q, s16, 2);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), s16, 0xE) + AF(q, s16, 4);
        AF(o, s16, 6) -= (rsin(AF(q, s16, 8)) << 6) >> 12;
        AF(o, s16, 0xE) -= (rcos(AF(q, s16, 6)) << 6) >> 12;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFC) + AF(o, s16, 0xFE);
        func_8012B370(o);
    }
}

void func_sc05_010_801829F0(u8 *arg0) {
    u16 sp10[3];
    void *temp_a0;

    D_sc05_010_80192990[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 0) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (AF(AF(temp_a0, void *, 0x20), u16, 0x12) - (AF(temp_a0, u16, 0xFC) + 0x400));
        func_8012F14C((s32) (AF(AF(arg0, void *, 0x64), void *, 0x20) + 0x34), (s32) &D_sc05_010_80192924, (s32) sp10);
        AF(arg0, u16, 6) = sp10[0];
        AF(arg0, u16, 0xA) = sp10[1];
        AF(arg0, u16, 0xE) = sp10[2];
        AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x100);
        func_8012B370((s32) arg0);
    }
}

void func_sc05_010_80182AC0(u8 *o) {
    u8 *s;
    u8 *p;
    D_sc05_010_801929DC[AF(o, u16, 2)]();
    p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 0) != 0) {
        s = AF(AF(p, u8 *, 0x20), u8 *, 0x20);
        s += 0x60;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0xFC) + AF(o, u16, 0xFE);
        AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + AF(s, u16, 0);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) + AF(s, u16, 2);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + AF(s, u16, 4);
        AF(o, s16, 6) += (rsin(AF(s, s16, 8)) << 6) >> 12;
        AF(o, s16, 0xE) += (rcos(AF(s, s16, 6)) << 6) >> 12;
        func_8012B370(o);
    }
}

void func_sc05_010_80182BD0(u8 *arg0) {
    u16 sp10[3];
    void *temp_a0;

    D_sc05_010_80192A28[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 0) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (AF(AF(temp_a0, void *, 0x20), u16, 0x12) - (AF(temp_a0, u16, 0xFC) - 0x400));
        func_8012F14C((s32) (AF(AF(arg0, void *, 0x64), void *, 0x20) + 0x34), (s32) &D_sc05_010_80192924, (s32) sp10);
        AF(arg0, u16, 6) = sp10[0];
        AF(arg0, u16, 0xA) = sp10[1];
        AF(arg0, u16, 0xE) = sp10[2];
        AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x100);
        func_8012B370((s32) arg0);
    }
}

void func_sc05_010_80182CA0(s32 arg0) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    temp_v1 = AF(arg0, s16, 0x70);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s16, 6) = 0x25B;
        AF(arg0, s16, 0x12) = 0x5B;
        AF(arg0, s16, 0x16) = -0x70;
        AF(arg0, s16, 0xA) = -0x70;
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x6000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x6000;
        temp_a0 = AF(arg0, s32, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x600;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s32, 0x94) = (s32) (rand() & 7);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x4000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x4000;
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x48) = (s32) ((AF(arg0, s32, 0x48) * 2) / 3);
        break;
    default:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s32, 0x94) = (s32) (rand() & 7);
        AF(arg0, s16, 2) = 3;
        break;
    }
    temp_a0_2 = AF(arg0, s32, 0x20);
    AF(temp_a0_2, s32, 4) = (s32) (AF(temp_a0_2, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    func_8002D4C8(0x898, 0);
}

void func_sc05_010_80182E78(u8 *o) {
    u8 *p;
    s32 i;
    s32 a;

    if (func_8012CBCC() & 0x2000) {
        func_8012C218(o);
        return;
    }
    if (func_sc05_010_8017ECE4(o) > 0) {
        p = func_80143C74(o, 0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x5000;
            AF(p, s16, 0x16) = -8;
        }
        for (i = 0; i < 8; i++) {
            p = (u8 *)func_8012C658(0x29E, 2, o);
            if (p != 0) {
                a = (rand() & 0x1FF) + (i << 9);
                AF(p, s32, 0x10) = rsin(a) << 6;
                AF(p, s32, 0x18) = rcos(a) << 6;
                AF(p, s32, 0x14) = 0xFFF80000 - ((rand() & 0x3FF) << 8);
            }
        }
        func_8012C218(o);
        func_8002D4C8(0x899, 0);
    } else {
        AF(o, s32, 0x10) = AF(o, s32, 0x10) * 7 / 8;
    }
}

void func_sc05_010_80182FD4(u8 *arg0) {
    D_sc05_010_80192AEC[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, s16, 0x70) < 2)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (func_8012D624((s32) arg0, 0x30, 0x18) == 1) {
            D_80126B96 = 0x4014;
            D_80126B98 = 0x18;
            func_8012C218((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc05_010_80183098(u8 *o) {
    SV8 a;
    SV8 b;
    s32 d;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            func_8012C218(o);
            return;
        }
        break;
    case 1:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            func_8012C218(o);
            return;
        }
        AF(o, s32, 0x10) += 0xC000;
        break;
    default:
        AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
        func_8012C218(o);
        return;
    }
    AF(o, s32, 4) += AF(o, s32, 0x10);
    AF(o, s32, 8) += AF(o, s32, 0x14);

    if ((d = AF(o, s16, 6) - AF(&D_80126B58, s16, 6), (u32)(d + 0x1F) < 0x3F) && (d = AF(&D_80126B58, s16, 0xA) - AF(o, s16, 0xA), (u32)(d + 0xF) < 0x7F)) {
        if (func_8014CB8C() != 0) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            func_8012C218(o);
        } else {
            b.x = AF(&D_80126B58, s16, 6);
            a.x = AF(&D_80126B58, s16, 6);
            a.y = AF(&D_80126B58, s16, 0xA) - 0x10;
            b.y = AF(&D_80126B58, s16, 0xA) + 0x10;
            a.z = b.z = D_80126B66;
            if (func_80135888(D_80126B78, D_80126B90, &a, &b) != 0) {
                func_8012F568(1, 0x2020, 0x400, 0x10, &b, &D_801152A8);
            }
        }
    }
}

void func_sc05_010_80183238(u8 *arg0) {
    D_sc05_010_80192B68[AF(arg0, u16, 2)]();
}

void func_sc05_010_80183274(u8 *o) {
    u8 unused[16];
    u8 *e;
    s32 i;
    s32 a;

    D_sc05_010_80192CB8[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (func_80153BD8(D_sc05_010_801C7E54) != 0 || func_80153BD8(D_sc05_010_801C7E5C) != 0) {
        if (D_sc05_010_801C7E70 == 0) {
            func_80153C74(2, 0x28);
            D_sc05_010_801C7E70 = 0x1E;
            e = func_80143C74(o, 0);
            if (e != 0) {
                AF(AF(e, u8 *, 0x20), s16, 0x18) = 0x5000;
                AF(AF(e, u8 *, 0x20), s16, 0x1A) = 0x5000;
                AF(e, s16, 0x16) = -8;
            }
            for (i = 0; i < 8; i++) {
                e = (u8 *)func_8012C658(0x29E, 2, o);
                if (e != 0) {
                    a = (rand() & 0x1FF) + i * 0x200;
                    AF(e, s32, 0x10) = rsin(a) << 6;
                    AF(e, s32, 0x18) = rcos(a) << 6;
                    AF(e, s32, 0x14) = -0x80000 - ((rand() & 0x3FF) << 8);
                }
            }
            func_8012C218(o);
        }
    } else {
        func_8012D624(o, 0x10, 0x28);
    }
}

void func_sc05_010_8018340C(u8 *o) {
    u8 *pp[4];
    SV8 sv;
    s16 xs[5];
    s16 ys[5];
    s32 sxy;
    s32 p;
    s32 flag;
    s32 otz;
    u32 *ot;
    s32 d;
    s32 e;
    s16 x;
    s16 y;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;

    sv.x = AF(o, s16, 6);
    sv.y = AF(o, s16, 0xA);
    sv.z = AF(o, s16, 0xE);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = D_800A651C[D_800B9A02].ot + otz;
    d = (Size_8018340C(o) * (D_80126950 + 500)) / (otz * 4);
    x = ((s16 *) &sxy)[0];
    y = ((s16 *) &sxy)[1];
    xs[2] = x;
    ys[2] = y;
    e = (d * 179) >> 8;
    xs[0] = x - d;
    xs[1] = x - e;
    xs[3] = x + e;
    xs[4] = x + d;
    ys[0] = y - d;
    ys[1] = y - e;
    ys[3] = y + e;
    ys[4] = y + d;
    prim = AllocPrim(0x9C);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 1, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (i = 0; i < 4; i++, q += 0x24) {
        j = i * 4;
        AF(q, s32, 4) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j]];
        AF(q, s32, 0xC) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 1]];
        AF(q, s32, 0x14) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 2]];
        AF(q, s32, 0x1C) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = xs[D_sc05_010_80192CD0[j]];
        AF(q, s16, 0x10) = xs[D_sc05_010_80192CD0[j + 1]];
        AF(q, s16, 0x18) = xs[D_sc05_010_80192CD0[j + 2]];
        AF(q, s16, 0x20) = xs[D_sc05_010_80192CD0[j + 3]];
        AF(q, s16, 0xA) = ys[D_sc05_010_80192CE0[j]];
        AF(q, s16, 0x12) = ys[D_sc05_010_80192CE0[j + 1]];
        AF(q, s16, 0x1A) = ys[D_sc05_010_80192CE0[j + 2]];
        AF(q, s16, 0x22) = ys[D_sc05_010_80192CE0[j + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void func_sc05_010_8018388C(u8 *o) {
    s32 i;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        func_80178B18(o, &D_sc05_010_801923C4);
        func_801746DC();
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x34)++;
        func_800D0C48(4);
        p = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (*(u16 *)p == 0x2B5) {
                func_8012C218(p);
            }
        }
        AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x10000000;
        break;
    case 1:
        if ((--AF(o, s32, 0x1C) & 0xF) == 0) {
            p = (u8 *)func_8012C588(0x2DE, o);
            if (p != 0) {
                func_8002D4C8(0x8B8, 0);
                AF(p, s16, 0xA) += 0x20;
                if (AF(o, s32, 0x1C) & 0x40) {
                    AF(p, s16, 0xFC) = (AF(o, s32, 0x1C) & 0x30) << 6;
                } else {
                    AF(p, s16, 0xFC) = ((AF(o, s32, 0x1C) & 0x30) << 6) + 0x200;
                }
                AF(p, s16, 0xFC) += rand() & 0x1FF;
                AF(p, s16, 0xFE) = AF(o, s32, 0x1C) + 0x60;
            }
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, s16, 0x34)++;
        }
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34)++;
            func_8012C588(0x2DC, D_sc05_010_801C7E30[0]);
            func_80132EF4(D_sc05_010_801C7E30[0], 0x5F);
            func_8002D4C8(0x8B9, 0);
        } else {
            AF(o, s32, 0x1C)--;
        }
        break;
    case 3:
        if (AF(o, s16, 0x84) == 0) {
            AF(o, s16, 0x84) = func_8001AAA0(0x6D);
        }
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
            break;
        }
        func_8012C218(D_sc05_010_801C7E30[0]);
        D_sc05_010_801C7E30[0] = 0;
        for (i = 2; i < 8; i++) {
            func_8012C218(AF(D_sc05_010_801C7E30[i], u8 *, 0x6C));
            func_8012C218(D_sc05_010_801C7E30[i]);
            D_sc05_010_801C7E30[i] = 0;
        }
        for (i = 8; i < 12; i++) {
            func_8012C218(D_sc05_010_801C7E30[i]);
            D_sc05_010_801C7E30[i] = 0;
        }
        p = (u8 *)&D_801202A0;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (*(u16 *)p == 0x275) {
                func_8012C218(p);
            }
        }
        func_8014704C(&D_80126B58);
        func_8013373C(0);
        AF(o, s16, 0xA) = 0x77;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xE) = 0;
        D_80126B60 = 0x970000;
        D_80126B66 = 0x90;
        func_8012C588(0x2F7, o);
        for (i = 0; i < 0x18; i++) {
            p = (u8 *)func_8012C588(0x2E3, o);
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s32, 0x24) = D_sc05_010_80192D64[i];
            }
        }
        func_sc05_010_8017C068();
        func_sc05_010_80187874();
        AF(o, s16, 0x34)++;
        break;
    case 4:
        if (AF(o, s16, 0x84) == 0) {
            AF(o, s16, 0x84) = func_8001AAA0(0x6D);
        }
        break;
    case 5:
        if (func_80174774() != 0) {
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(o, s16, 0x34)++;
            func_8002AC00(0x1E);
        }
        break;
    case 6:
        break;
    }
    if (func_80178970(o) != 0) {
        func_80178D18(o);
        AF(o, s16, 2) = 6;
    }
}

extern s16 D_sc05_010_80192D4C;
extern s16 D_sc05_010_80192D4E;
extern s16 D_sc05_010_80192D50;
extern void (*D_sc05_010_80192DC4[])();
void func_sc05_010_80183C84(u8 *o) {
    s16 t;
    if (AF(AF(o, u8 *, 0x20), s32, 0x4) >= 0) {
        t = (AF(o, u16, 0xDC) + 0x88) & 0xFFF;
        AF(o, s16, 0xDC) = t;
        D_sc05_010_80192D4C = (rsin(t) >> 6) + 0xC0;
        D_sc05_010_80192D4E = (rsin(AF(o, s16, 0xDC)) >> 6) + 0xC0;
        D_sc05_010_80192D50 = (rsin(AF(o, s16, 0xDC)) >> 6) + 0xC0;
        AF(o, s16, 0xDE) = (AF(o, u16, 0xDE) - 0x88) & 0xFFF;
        func_sc05_010_8018340C(o);
    }
    D_sc05_010_80192DC4[AF(o, u16, 0x2)](o);
}

void func_sc05_010_80183D5C(o)
    u8 *o;
{
    SV8 v0;
    SV8 v1;
    SV8 v2;
    XY s[3];
    s32 p;
    s32 flag;
    s32 otz;
    u32 *ot;
    u8 *prim;
    u8 *q;
    XY *sp;
    s32 i;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    v0.x = AF(o, s16, 6);
    v0.y = AF(o, s16, 0xA);
    v0.z = AF(o, s16, 0xE);
    v1.x = AF(o, s16, 6) - ((rsin(AF(o, s16, 0xFC) + 0x40) * AF(o, s16, 0x100)) >> 7);
    v1.y = AF(o, s16, 0xA) - (AF(o, u16, 0x100) << 5);
    v1.z = AF(o, s16, 0xE) - ((rcos(AF(o, s16, 0xFC) + 0x40) * AF(o, s16, 0x100)) >> 7);
    v2.x = AF(o, s16, 6) - ((rsin(AF(o, s16, 0xFC) - 0x40) * AF(o, s16, 0x100)) >> 7);
    v2.y = AF(o, s16, 0xA) - (AF(o, u16, 0x100) << 5);
    v2.z = AF(o, s16, 0xE) - ((rcos(AF(o, s16, 0xFC) - 0x40) * AF(o, s16, 0x100)) >> 7);
    otz = RotTransPers3(&v0, &v1, &v2, &s[0], &s[1], &s[2], &p, &flag);
    if (otz <= 0 || flag < 0) {
        AF(o, s16, 0x102) = 0;
        AF(o, s16, 0x100)--;
        return;
    }
    otz -= 0x10;
    ot = D_800A651C[D_800B9A02].ot + otz;
    prim = AllocPrim(0x30);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    q = prim + 0xC;
    i = 0;
    sp = s;
    for (; i < 3; i++, sp++) {
        if ((u16)(sp->x + 0xA0) > 0x140 || (u16)(sp->y + 0x78) > 0xF0) {
            AF(o, s16, 0x102) = 0;
        }
    }
    AF(q, u8, 4) = 0xFF;
    AF(q, u8, 0xC) = 0xFF;
    AF(q, u8, 0x14) = 0xFF;
    AF(q, u8, 0x1C) = 0xFF;
    AF(q, u8, 5) = 0xFF;
    AF(q, u8, 0xD) = 0xFF;
    AF(q, u8, 0x15) = 0xFF;
    AF(q, u8, 0x1D) = 0xFF;
    AF(q, u8, 6) = 0xFF;
    AF(q, u8, 0xE) = 0xFF;
    AF(q, u8, 0x16) = 0xFF;
    AF(q, u8, 0x1E) = 0xFF;
    AF(q, u8, 3) = 8;
    AF(q, u8, 7) = 0x3A;
    AF(q, s16, 8) = s[0].x;
    AF(q, s16, 0x10) = s[0].x;
    AF(q, s16, 0x18) = s[1].x;
    AF(q, s16, 0x20) = s[2].x;
    AF(q, s16, 0xA) = s[0].y;
    AF(q, s16, 0x12) = s[0].y;
    AF(q, s16, 0x1A) = s[1].y;
    AF(q, s16, 0x22) = s[2].y;
    AddPrim(ot, q);
    AddPrim(ot, prim);
}

void func_sc05_010_80184084(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 2);
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (temp_v0 + 1);
        AF(arg0, u16, 0x102) = 1U;
        return;
    }
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= AF(arg0, s16, 0xFE)) {
        func_8012C218((s32) arg0);
        return;
    }
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) + AF(arg0, u16, 0x102));
    func_sc05_010_80183D5C();
}

void func_sc05_010_80184100(u8 *p, s32 d0) {
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

void func_sc05_010_801841A8(u8 *arg0) {
    D_sc05_010_80192DE0[AF(arg0, u16, 2)]();
}

s32 func_sc05_010_801841E4(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    return func_8012AD44(arg0, 1);
}

void func_sc05_010_80184214(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    func_8012AD44(arg0, 2);
}

s32 func_sc05_010_8018423C(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc05_010_8018425C(u8 *arg0) {
    D_sc05_010_80192DE8[AF(arg0, u16, 2)]();
}

void func_sc05_010_80184298(u8 *arg0) {
    D_sc05_010_80192DF8[AF(arg0, u16, 2)]();
}

void func_sc05_010_801842D4(u8 *arg0) {
    D_sc05_010_80192E34[AF(arg0, u16, 2)]();
}

void func_sc05_010_80184310(u8 *arg0) {
    D_sc05_010_80192E50[AF(arg0, u16, 2)]();
}

void func_sc05_010_8018434C(u8 *arg0) {
    D_sc05_010_80192E6C[AF(arg0, u16, 2)]();
}

void func_sc05_010_80184388(u8 *arg0) {
    D_sc05_010_8019426C[AF(arg0, u16, 2)]();
}

extern u8 D_sc05_010_80193EB4;
extern u8 D_sc05_010_80192E74;
extern u8 D_sc05_010_80193674;
extern u8 D_sc05_010_80193E74;
extern u8 D_sc05_010_80193ECC;
void func_sc05_010_801843C4(u8 *o) {
    LoadImage(&D_sc05_010_80193EB4, &D_sc05_010_80192E74);
    LoadImage(&D_sc05_010_80193EB4 + 8, &D_sc05_010_80193674);
    LoadImage(&D_sc05_010_80193EB4 + 0x10, &D_sc05_010_80193E74);
    AF(o, s16, 0xA) = 0x97;
    AF(o, s16, 0x6) = 0;
    AF(o, s16, 0xE) = 0;
    AF(o, s32, 0xCC) = func_sc05_010_801849DC((s32)o, (s32)&D_sc05_010_80193ECC, 0x300, 0x100, 0xA1);
    if (AF(o, s32, 0xCC) == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, s32, 0xD0) = func_sc05_010_801849DC((s32)o, (s32)&D_sc05_010_80193ECC, 0x310, 0x100, 0xA2);
    if (AF(o, s32, 0xD0) == 0) {
        func_80016714(AF(o, s32, 0xCC), 0x38);
        func_8012CAE4(o);
        return;
    }
    AF(o, s16, 0x2) = 1;
}

void func_sc05_010_801844AC(u8 *o) {
    if (func_8012BD14(o) <= 0x400 || (u32)(AF(o, u16, 0x34) - 1) < 2) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            func_801746DC();
            func_80178B18(o, &D_sc05_010_80194234);
            AF(o, s16, 0x34)++;
            break;
        case 1:
            if (func_801789AC(o) == 1) {
                func_80178D18(o);
                AF(o, s16, 0x34) = 3;
            }
            break;
        case 2:
            if (func_801789AC(o) == 1) {
                func_80178D18(o);
                AF(o, s16, 0x34) = 4;
            }
            break;
        case 3:
            if (func_8014CB58() == 5) {
                func_8014B598(5, &D_sc05_010_8018C490);
                if (func_8016F1AC() != 0 && !(AF(o, u16, 0x100) & 4)) {
                    AF(o, u16, 0x100) |= 4;
                    AF(o, s32, 0x1C) = 0;
                    func_80175454();
                }
                if (AF(o, u16, 0x100) & 4) {
                    AF(o, s32, 0x1C)++;
                }
                if (!(AF(o, u16, 0x100) & 2) && AF(o, s32, 0x1C) == 0x5A) {
                    AF(o, u16, 0x100) |= 2;
                    func_800D0C48(0);
                }
                if (!(AF(o, u16, 0x100) & 1) && (func_8014CB2C() & 0x8000007F) == 0x80000005) {
                    AF(o, u16, 0x100) |= 1;
                    AF(o, s16, 0x34)++;
                }
            }
            break;
        }
        func_sc05_010_80184934((s32)o);
        func_sc05_010_80184988(o);
    } else {
        AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0xA1;
        func_sc05_010_80184988(o);
    }
    if (AF(o, u16, 0x100) & 1) {
        AF(o, u16, 0x100) &= 0xFFFE;
        func_8016F0AC();
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x34) = 0;
        AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0xA1;
        AF(AF(o, u8 *, 0xD0), u8, 0x27) = 0xA2;
        func_80178B18(o, &D_sc05_010_80194244);
        AF(o, s16, 0x102) = 10;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0xAF;
        func_8002959C();
    }
}

void func_sc05_010_8018473C(u8 *o) {
    u8 *p = &D_80126B58;
    u8 *q;
    SV8 a;
    SV8 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_8002D4C8(0xC61, 0);
        }
        break;
    case 1:
        if (++AF(o, s32, 0x1C) > 10) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        } else {
            q = ((u8 *(*)())func_80132EF4)(o, 0x7D);
            if (q != 0) {
                AF(q, u16, 0xA) -= AF(o, s32, 0x1C) << 6;
                AF(q, s16, 0x34) = D_sc05_010_801941E8[AF(o, s32, 0x1C)];
                AF(q, s16, 0x36) = 10 - AF(o, s32, 0x1C);
            }
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        AF(p, s32, 8) -= 0x300000;
        a.x = AF(p, u16, 6);
        a.y = AF(p, u16, 0xA);
        a.z = AF(p, u16, 0xE);
        func_8012EFB8(&a, &r);
        if ((r.x < 0 ? -r.x : r.x) > 200 || (r.y < 0 ? -r.y : r.y) > 160) {
            func_800D1724(&D_sc05_010_8019222C);
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        AF(p, s32, 8) -= 0x300000;
        break;
    }
    if (func_801789AC(o) == 1) {
        func_80178D18(o);
    }
}

s32 func_sc05_010_80184934(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA3;
    return func_800183E0((s32) ((D_sc05_010_801941CC[(D_800B99DA & 0x1F)] * 0x10) + &D_sc05_010_801C4148));
}

void func_sc05_010_80184988(u8 *arg0) {
    AF(AF(arg0, u8 *, 0xD0), u8, 0x27) = 0xA4;
    func_800183E0(D_sc05_010_801C4048 + D_sc05_010_801941CC[D_800B99DA & 0x1F] * 0x10);
}

s32 func_sc05_010_801849DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        return 0;
    }
    func_8001CB6C(temp_v0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
    AF(temp_v0, s16, 0x10) = 0xC00;
    AF(temp_v0, u8, 0x27) = (s8) arg4;
    AF(temp_v0, s16, 0x1A) = 0x2D00;
    AF(temp_v0, s16, 0x18) = 0x2D00;
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    return temp_v0;
}

void func_sc05_010_80184AA4(u8 *o) {
    SV8 a;
    SV8 b;
    s32 p;
    s32 flag;
    u8 *prim;
    u8 *q;
    s32 r;
    s32 ang;
    s32 otz;
    s32 i;
    s32 t;

    if (AF(o, u16, 2) == 0) {
        AF(o, s16, 0xFC) = rand() & 0xFFF;
        AF(o, s16, 0x102) = (rand() & 0x1F) + 0x30;
        AF(o, s16, 0x104) = rand() & 0x3F;
        AF(o, s16, 0xFE) = AF(o, s16, 0x102) + 0x2C0;
        AF(o, s16, 2)++;
        return;
    }
    AF(o, s32, 8) -= 0x4000;
    if (AF(o, s32, 8) < (s32)0xFC000000) {
        func_8012C218(o);
        return;
    }
    prim = AllocPrim(0x80);
    if (prim == 0) return;
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    r = AF(o, s16, 0xFE);
    ang = AF(o, s16, 0xFC);
    AF(o, s16, 0x100) += 0x10;
    if (AF(o, s16, 0x100) > 0x400) {
        AF(o, s16, 0x100) = 0x400;
        AF(o, s16, 0xA) -= 4;
        AF(o, s16, 0xFC) = (AF(o, s16, 0xFC) + 0x200) & 0xFFF;
    } else {
        AF(o, s16, 0xFE) = AF(o, s16, 0x102) + ((rcos(AF(o, s16, 0x100)) * 0x2C0) >> 12);
        AF(o, s16, 0xFC) = (AF(o, s16, 0xFC) + (rsin(AF(o, s16, 0x100)) >> 4)) & 0xFFF;
    }
    a.x = AF(o, s16, 6) + ((r * rcos(ang)) >> 12);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE) + ((r * rsin(ang)) >> 12);
    b.y = a.y;
    if (AF(o, s16, 0x104) != 0) {
        AF(o, s16, 0x104)--;
    } else {
        AF(o, s16, 0x104) = rand() & 0x3F;
        q = func_80143C74(o, 0);
        if (q != 0) {
            AF(q, s16, 6) = a.x;
            AF(q, s16, 0xA) = a.y;
            AF(q, s16, 0xE) = a.z;
            AF(q, s32, 0x10) = -(rsin(ang) << 8);
            AF(q, s16, 0x16) = -2;
            AF(q, s32, 0x18) = -(rcos(ang) << 8);
        }
    }
    for (i = 0; i < 8; i++) {
        AF(prim, s32, 4) = 0xFFFFFF;
        SetLineF2(prim);
        ang += 0x80;
        if ((r -= 8) < AF(o, s16, 0x102)) {
            r = AF(o, s16, 0x102);
        }
        b.x = AF(o, s16, 6) + ((r * rcos(ang)) >> 12);
        b.z = AF(o, s16, 0xE) + ((r * rsin(ang)) >> 12);
        otz = RotTransPers(&a, prim + 8, &p, &flag);
        if (otz > 0 && flag >= 0 && RotTransPers(&b, prim + 0xC, &p, &flag) > 0 && flag >= 0) {
            AddPrim(D_800A651C[D_800B9A02].ot + otz, prim);
            prim += 0x10;
        }
        a.x = b.x;
        a.z = b.z;
    }
}

void func_sc05_010_80184E4C(u8 *o) {
    u8 *q;
    s32 w;
    s32 v;

    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x200;
    if ((++AF(o, s32, 0x1C) & 7) == 0) {
        q = func_8012913C(0x7E);
        if (q != 0) {
            func_8012B0B4(&w, rand() % 0x1000, rand() % ((AF(AF(o, u8 *, 0x20), s16, 0x18) * 3) >> 9));
            v = w;
            AF(q, s16, 6) = AF(o, u16, 6) + v;
            AF(q, s16, 0xA) = AF(o, u16, 0xA);
            AF(q, s16, 0xE) = AF(o, u16, 0xE) + (v >> 16);
            AF(q, s32, 0x10) = rsgn((rand() % 4) << 16);
            AF(q, s32, 0x18) = rsgn((rand() % 4) << 16);
            AF(q, s32, 0x14) = 0xFFF40000 - ((rand() % 9) << 16);
            AF(q, u8 *, 0x2C) = o;
        }
    }
}

void func_sc05_010_80185020(u8 *arg0) {
    D_sc05_010_801942B4[AF(arg0, u16, 2)]();
}

void func_sc05_010_8018505C(u8 *o) {
    SV8 a;
    SV8 r;
    V3 d;
    u8 *t = AF(o, u8 *, 0x2C);
    d.x = AF(o, s16, 6) - AF(t, s16, 6);
    d.y = 0;
    d.z = AF(o, s16, 0xE) - AF(t, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    if (AF(o, s16, 0x36) == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x30);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0x32);
        AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x34);
        if (d.x + d.z > 0x9000) {
            AF(o, s32, 0x14) = 0x18000;
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s16, 0x36)++;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x80;
        AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x80;
        if (d.x + d.z <= 0x4000) {
            s32 n = rand();
            AF(o, s16, 0x36) = 0;
            AF(o, s32, 0x14) = 0xFFF00000 - ((n % 9) << 16);
        }
    }
    func_8012931C(o);
    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    func_8012EFB8(&a, &r);
    if ((r.x < 0 ? -r.x : r.x) >= 0xB5 || (r.y < 0 ? -r.y : r.y) >= 0x8D || AF(o, s16, 0xA) >= 0x10) {
        func_801292C8(o);
    }
}

void func_sc05_010_80185288(u8 *arg0) {
    D_sc05_010_801942CC[AF(arg0, u16, 2)]();
}

void func_sc05_010_801852C4(s32 arg0) {
    s32 temp_s0;

    func_sc05_010_80187B80(4);
    temp_s0 = arg0 + 0x76;
    func_sc05_010_8017BF08(temp_s0, temp_s0, 5, 0xD2);
    func_sc05_010_8017E910();
    func_8002D4C8(0x89E, 0);
}

void func_sc05_010_8018531C(void) {
    func_sc05_010_80187BAC();
    func_sc05_010_8017E9B4();
}

s32 func_sc05_010_80185344(u8 *arg0) {
    if (AF(arg0, s16, 0x84) != 0) {
        func_8001AAA0(0x84);
        return 1;
    }
    return 0;
}

void func_sc05_010_80185378(void) {
    s16 *p = &D_80126B62;
    *p += 0xC;
}

void func_sc05_010_80185394(void) {
    s16 *p = &D_80126B62;
    *p -= 0xC;
}

void func_sc05_010_801853B0(u8 *o) {
    u8 *q;
    s32 i;
    if (AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc05_010_801A33AC);
        AF(o, s32, 0x1C) = 0xB4;
    } else if ((--AF(o, s32, 0x1C) & 7) == 0) {
        func_8012C588(0x275, o);
        AF(AF(D_sc05_010_801C7E4C, u8 *, 0x20), s16, 0x1A) = 0xC00;
        for (i = 0; i < 8; i++) {
            q = (u8 *)func_8012C588(0x2ED, o);
            if (q != 0) {
                AF(q, s16, 0x16) = -0x10;
                AF(q, s16, 6) += 0x25B;
                AF(q, s16, 0xA) -= 0x70;
                AF(q, s16, 0x12) = (rand() & 7) - 4;
                AF(q, s16, 0x1A) = -4 - (rand() & 7);
                func_8002D4C8(0x895, 0);
            }
        }
    }
}

extern s16 D_sc05_010_801924DC[];
extern u8 *D_sc05_010_801C7E38[];
void func_sc05_010_801854B8(u8 *o) {
    s32 i;
    u8 *q;
    s32 n;
    if (AF(o, s32, 0x1C) == 0) {
        if (--AF(o, s16, 0xFE) != 0) {
            for (i = 0; i < 4; i++) {
                if (D_80126B5E < D_sc05_010_801924DC[i]) {
                    break;
                }
            }
            q = D_sc05_010_801C7E38[i];
            n = D_sc05_010_801C7E78;
            AF(q, s16, 0x10A) = 1;
            AF(o, s32, 0x1C) = 0x3C - n * 15;
        } else {
            AF(o, s32, 0x1C) = 0x5A;
            AF(o, s16, 2) = 1;
        }
    } else {
        AF(o, s32, 0x1C)--;
    }
}

void func_sc05_010_80185570(u8 *o) {
    s32 i, n;
    u8 *e;
    for (i = 0; i < 0x14; i++) {
        n = rand() % 5 + 2;
        e = AF(D_sc05_010_801C7E30[n], u8 *, 0x6C);
        if (AF(e, s16, 0x76) > 0) {
            AF(AF(e, u8 *, 0x64), s16, 0x10A) = 2;
            if (n != 2) {
                n--; AF(D_sc05_010_801C7E30[n], s16, 0x10A) = 3; n++;
            }
            n++;
            AF(D_sc05_010_801C7E30[n], s16, 0x10A) = 3;
            AF(o, s32, 0x1C) = 0x5A;
            AF(o, s16, 2) = 1;
            return;
        }
    }
}

void func_sc05_010_80185684(void) {
}

extern u8 D_sc05_010_80192514;
extern s32 D_sc05_010_80192548[];
extern u16 D_sc05_010_8019255C[];
void func_sc05_010_8018568C(u8 *o) {
    if (func_8012C354(o, &D_sc05_010_80192514) == 0) return;
    func_8001C214(AF(o, u8 *, 0x20), D_sc05_010_80192548[AF(o, s16, 0x70)]);
    AF(o, s16, 6) += D_sc05_010_8019255C[AF(o, s16, 0x70)];
    AF(o, s16, 2) = 1;
    SetScript(o, &D_sc05_010_80188CCC);
    AF(o, u8, 0xC0) = 1;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(o, s32, 0x6C) = func_8012C588(0x28A, o);
}

void func_sc05_010_80185744(u8 *o) {
    switch (AF(o, s16, 0x10A)) {
    case 0:
        break;
    case 1:
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = 0xF;
        break;
    case 2:
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0xFC) = 3;
        func_8002D4C8(0x903, 0);
        break;
    case 3:
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0xFC) = 3;
        break;
    }
    AF(o, s16, 0x10A) = 0;
}

void func_sc05_010_801857EC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        AF(temp_v1, u16, 0x1A) = (u16) (AF(temp_v1, u16, 0x1A) ^ 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1C) = (u16) (AF(temp_v1_2, u16, 0x1C) ^ 0x100);
        if (AF(arg0, s32, 0x1C) & 1) {
            func_8002D4C8(0x902, 0);
        }
    } else {
        AF(AF(arg0, void *, 0x20), u16, 0x1A) = 0x1000U;
        AF(AF(arg0, void *, 0x20), u16, 0x1C) = 0x1000U;
        AF(arg0, s16, 2) = 1;
        func_8012C658(0x274, (s32) AF(arg0, s16, 0x70), (s32) arg0);
    }
}

void func_sc05_010_80185894(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc05_010_8019257C) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x205);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 1);
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u8, 0xC0) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, s32, 0x6C) = func_8012C588(0x2D4, arg0);
    }
}

void func_sc05_010_80185920(u8 *o) {
    u8 *p;
    switch (AF(o, s16, 0x10A)) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0xFC) = 3;
        break;
    }
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x10A) = 0;
    if (AF(p, s16, 0x1A) < 0x1000) {
        AF(p, s16, 0x1A) += 0x40;
    }
}

void func_sc05_010_80185990(u8 *o) {
    s32 v;
    switch (AF(o, u16, 0x34)) {
    case 0:
        v = rsin(AF(o, s32, 0x1C) += 0x80) >> 6;
        v += 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(o, s32, 0x1C) &= 0x7FF;
            if (--AF(o, s16, 0xFC) == 0) {
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 1:
        v = rsin(AF(o, s32, 0x1C) += 0x80) >> 3;
        v += 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        if (AF(o, s32, 0x1C) >= 0x800) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(o, s16, 2) = 1;
        }
        break;
    }
}

void func_sc05_010_80185AAC(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x76) = (u16) (AF(arg0, u16, 0x76) - 0xA);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    if ((s16) AF(arg0, u16, 0x76) < -0x12B) {
        AF(arg0, s16, 0x76) = -0x12C;
    }
    if ((u32) ((AF(arg0, u16, 0x76) + 0xA) & 0xFFFF) < 0xAU) {
        AF(arg0, s16, 0x76) = -0x12C;
    }
    func_sc05_010_801806A0((s32) arg0, 0);
}

void func_sc05_010_80185B20(s32 arg0) {
    u16 temp_v0;
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc05_010_801926E0) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC, (s32) temp_a2);
        AF(arg0, u8, 0x75) = 3;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_010_80192714;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        temp_v0 = AF(AF(arg0, void *, 0x64), u16, 0x70);
        AF(arg0, u16, 0x70) = temp_v0;
        AF(arg0, void *, 0x58) = (void *) (((s32) (temp_v0 << 0x10) >> 0xC) + &D_sc05_010_801922B0);
    }
}

void func_sc05_010_80185BD8(u8 *arg0) {
    u16 temp_v0;

    if ((AF(arg0, u8, 0x74) != 0) && (func_800CF8B4() != 0) && (func_8014CB8C() != 0)) {
        temp_v0 = AF(arg0, u16, 0x76) - 4;
        AF(arg0, u16, 0x76) = temp_v0;
        if ((s16) temp_v0 < -0x12B) {
            AF(arg0, s16, 0x76) = -0x12C;
        }
        if ((u32) ((AF(arg0, u16, 0x76) + 4) & 0xFFFF) < 4U) {
            AF(arg0, s16, 0x76) = -0x12C;
        }
        func_sc05_010_801806A0((s32) arg0, 0);
    }
}

void func_sc05_010_80185C80(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc05_010_8019273C) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC, (s32) temp_a2);
        AF(arg0, u8, 0x75) = 3;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
    }
}

void func_sc05_010_80185CF8(void) {
}

void func_sc05_010_80185D00(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc05_010_80192778) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xFE) = 0xF;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + D_sc05_010_801927AC[(AF(arg0, u16, 0x70) & 0xF)]);
    }
}

void func_sc05_010_80185D98(u8 *o) {
    V3 v;
    u8 *q;
    s32 i;
    AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x400;
    func_sc05_010_8017ECE4(o);
    v.x = 0;
    v.y = 0;
    v.z = 0x40000;
    func_8012B1B4(o, &v);
    AF(o, s32, 0x14) = 0xFFF80000;
    for (i = 0; i < 3; i++) {
        q = (u8 *)func_8012C588(0x2ED, o);
        if (q != 0) {
            AF(q, s16, 6) = AF(o, s16, 0x7C);
            AF(q, s16, 0xA) = AF(o, s16, 0x7E);
            AF(q, s16, 0xE) = AF(o, s16, 0x80);
            AF(q, s16, 0x12) = (AF(o, s16, 0x12) * (rand() & 0x3FF)) >> 8;
            AF(q, s16, 0x1A) = (AF(o, s16, 0x1A) * (rand() & 0x3FF)) >> 8;
            AF(q, s16, 0x16) = -0xC - (rand() & 3);
        }
    }
}

void func_sc05_010_80185EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if (!(rand(arg0, arg1, arg2, arg3) & 7)) {
        temp_v0 = func_8012C658(0x27B, 0, arg0);
        if (temp_v0 != 0) {
            func_8012B200(temp_v0);
            AF(temp_v0, s16, 0xE) = 0;
        }
    }
    func_8012C218(arg0);
}

void func_sc05_010_80185F08(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (*arg0 != 0) {
        func_sc05_010_8017ECE4((s32) arg0, arg1, arg2, arg3);
    }
}

void func_sc05_010_80185F38(u8 *arg0) {
    void *temp_v1;

    func_80131B14();
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) - 0x400);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4((s32) arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8((s32) arg0);
    func_sc05_010_8017ECE4((s32) arg0);
    func_8012B23C((s32) arg0);
}

void func_sc05_010_80185FB4(s32 arg0) {
    func_8012CBF4(arg0);
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
    }
    func_sc05_010_8017ECE4(arg0);
}

void func_sc05_010_80185FFC(s32 arg0) {
    s32 temp_ret;
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc05_010_801927D0) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2041;
        AF(arg0, s16, 0xAE) = 0x2000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_8012B23C(arg0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, s32 *, 0xBC) = &D_sc05_010_80192804;
        AF(arg0, s32, 4) = 0x025B0000;
        AF(arg0, s32, 8) = 0xFF900000;
        temp_ret = rand();
        AF(arg0, s32, 0x10) = (s32) (((temp_ret % 576) + 0x60) << 0xB);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0x1FF) + 0x100);
    }
}

void func_sc05_010_801860F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 == 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0x8000;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
}

void func_sc05_010_80186124(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_010_801928F0) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        AF(AF(arg0, void *, 0x20), s16, 0x14) = 0x180;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0x400;
        AF(arg0, s16, 0x100) = 0;
        func_8001D0E8((s32) AF(arg0, void *, 0x20), 0x400, 0x400);
        AF(arg0, u8, 0x75) = 3;
        D_sc05_010_801C7E54 = func_8012C588(0x28D, arg0);
    }
}

void func_sc05_010_801861D0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_010_8019294C) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_801AB1A8);
        AF(arg0, u8, 0x75) = 3;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
    }
}

void func_sc05_010_8018624C(u8 *arg0) {
    s16 temp_s1;

    if (AF(AF(arg0, void *, 0x64), s16, 0x10A) == 3) {
        temp_s1 = AF(arg0, s16, 0x10A);
        if ((temp_s1 == 1) && (func_8012DEB8((s32) arg0, (s32) &D_sc05_010_80192980, (s32) &D_sc05_010_80192988) == temp_s1)) {
            D_80126B96 = 0x400F;
            D_80126B98 = 0;
            D_80127078 = arg0;
        }
    }
}

void func_sc05_010_801862D8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_010_801929A8) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, u8, 0x75) = 3;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        AF(AF(arg0, void *, 0x20), s16, 0x14) = 0x180;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = -0x400;
        AF(arg0, s16, 0x100) = 0;
        func_8001D0E8((s32) AF(arg0, void *, 0x20), 0x400, 0x400);
        D_sc05_010_801C7E5C = func_8012C588(0x28F, arg0);
    }
}

void func_sc05_010_80186384(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(D_sc05_010_801C7E50[0], u8 *, 0x20), s16, 0x14);
    AF(o, s16, 0xFC) = -0x8000 - AF(D_sc05_010_801C7E50[0], s16, 0xFC);
    AF(o, s16, 0xFE) = -0x8000 - AF(D_sc05_010_801C7E50[0], s16, 0xFE);
}

void func_sc05_010_801863E0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_010_801929F4) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_801AB180);
        AF(arg0, u8, 0x75) = 3;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
    }
}

void func_sc05_010_8018645C(u8 *arg0) {
    s16 temp_s1;

    if (AF(D_sc05_010_801C7E50[0], s16, 0x10A) == 3) {
        temp_s1 = AF(arg0, s16, 0x10A);
        if ((temp_s1 == 1) && (func_8012DEB8((s32) arg0, (s32) &D_sc05_010_80192980, (s32) &D_sc05_010_80192988) == temp_s1)) {
            D_80126B96 = 0x400F;
            D_80126B98 = 0;
            D_80127078 = arg0;
        }
    }
}

void func_sc05_010_801864E4(u8 *o) {
    s32 s;
    s32 v;
    u8 *p;

    AF(o, s16, 0xFC) += 0x20;
    AF(o, s32, 4) = AF(o, s32, 0x10) + rcos(AF(o, s16, 0xFC)) * 0x2000;
    AF(o, s32, 8) = AF(o, s32, 0x14) - rsin(AF(o, s16, 0xFC)) * 0x2000;
    if (AF(o, s16, 0xFC) >= 0x400) {
        if (rand() & 1) {
            v = -0x255555;
        } else {
            v = -0x1D5555;
        }
        for (s = v; s <= 0x3AAAA9; s += 0x1AAAAA) {
            p = (u8 *)func_8012C658(0x29E, 1, o);
            if (p != 0) {
                AF(p, s32, 0x10) = s;
            }
        }
        func_8012C218(o);
    }
}

void func_sc05_010_801865E8(s32 arg0) {
    if (func_8012CBCC() & 0x2000) {
        func_8012C218(arg0);
    }
}

void func_sc05_010_80186624(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B200(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192AFC);
    SetScript(arg0, (s32) &D_sc05_010_80192B38);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1A) = 0x4000;
    AF(temp_v1_2, s16, 0x18) = 0x4000;
    AF(arg0, s32, 0x10) = (s32) (((rand(temp_a0) & 0x7FF) - 0x400) * 0x156);
    AF(arg0, s32, 0x14) = (s32) (((rand() & 0x7FF) - 0x400) << 7);
    AF(arg0, s16, 6) = 0x270;
    AF(arg0, s16, 0xA) = -0xC0;
    AF(arg0, s16, 0xE) = -0x40;
}

void func_sc05_010_8018672C(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192B70);
    SetScript(arg0, (s32) &D_sc05_010_80192C30);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
}

void func_sc05_010_801867E4(u8 *o) {
    u8 *q;
    s32 i;
    s32 a;
    func_8012CBCC();
    if (func_sc05_010_8017ECE4(o) > 0) {
        q = func_80143C74(o, 0);
        if (q != 0) {
            AF(AF(q, u8 *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(q, u8 *, 0x20), s16, 0x1A) = 0x5000;
            AF(q, s16, 0x16) = -8;
        }
        for (i = 0; i < 8; i++) {
            q = (u8 *)func_8012C658(0x29E, 2, o);
            if (q != 0) {
                a = (rand() & 0x1FF) + (i << 9);
                AF(q, s32, 0x10) = rsin(a) << 6;
                AF(q, s32, 0x18) = rcos(a) << 6;
                AF(q, s32, 0x14) = 0xFFF80000 - ((rand() & 0x3FF) << 8);
            }
        }
        func_8012C218(o);
    }
}

void func_sc05_010_801868EC(u8 *o) {
    s32 t;
    AF(D_sc05_010_801C7E30[0], s16, 0x76) -= 0x80;
    func_sc05_010_8017C010((s32)(AF(o, u8 *, 0x64) + 0x76), (s32)&D_sc05_010_801924A0, 0xD2);
    func_8016AA50(o, 0x80);
    func_8016B3F4(o);
    if (AF(D_sc05_010_801C7E30[0], s16, 0x76) <= 0) {
        AF(D_sc05_010_801C7E30[0], s16, 2) = 0xB;
        func_8012C218(D_sc05_010_801C7E60);
        SetScript(D_sc05_010_801C7E30[0], &D_sc05_010_801A36FC);
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 0;
    } else {
        AF(o, s16, 0x76) = 1000;
        AF(o, s32, 0x1C) = 0x1E;
        t = D_sc05_010_801C7E78;
        AF(o, s16, 2) = 5;
        D_sc05_010_801C7E78 = t + 1;
    }
    if (AF(o, u8, 0xC8) != 0) {
        func_8002A520(o);
    }
    AF(o, s16, 0x5C) = 0;
    AF(o, u8, 0xC1) = 0;
    func_8002D4C8(0x9CE, 0);
}

extern u8 D_sc05_010_80192D54;
void func_sc05_010_80186A00(u8 *o) {
    u8 *p;
    u16 t;

    if (func_8012C354(o, &D_sc05_010_80192D18) == 0) return;
    AF(o, s16, 2) = 1;
    SetScript(o, &D_sc05_010_80188CCC);
    p = AF(o, u8 *, 0x20);
    AF(o, u8, 0xC0) = 1;
    t = AF(p, u16, 0x2C);
    D_sc05_010_801C7E74 = 0;
    AF(p, u16, 0x2C) = t | 0x80;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = (u8 *)&D_sc05_010_80192D4C;
    AF(o, s16, 0xAE) = -0x13;
    AF(o, u8 *, 0xBC) = &D_sc05_010_80192D54;
    AF(o, s32, 0xB4) = 0;
    AF(o, s32, 0x1C) = 8;
    AF(o, s32, 0xC4) |= 3;
}

void func_sc05_010_80186AA8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 1);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 1);
        return;
    }
    AF(arg0, s32, 0x1C) = 0x12C;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_010_80186AF4(u8 *o) {
    s32 i;
    u8 *p;
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    AF(o, s32, 0x1C) = 2;
    AF(o, s16, 0x2)++;
    func_8002D4C8(0x89D, 0);
    for (i = 0; i < 8; i++) {
        p = (u8 *)func_8012C588(0x2ED, o);
        if (p != 0) {
            AF(p, s16, 0x16) = -0x10;
            AF(p, s16, 0xA) += 0x20;
            AF(p, s16, 0xE) -= 0x18;
            AF(p, s16, 0x12) = (rand() & 7) - 4;
            AF(p, s16, 0x1A) = -4 - (rand() & 7);
        }
    }
}

void func_sc05_010_80186BD8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 6);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 8);
        return;
    }
    D_sc05_010_801C7E34 = 0;
    AF(D_sc05_010_801C7E30[0], u16, 0x34) = (u16) (AF(D_sc05_010_801C7E30[0], u16, 0x34) + 1);
    func_8012C218((s32) arg0);
}

void func_sc05_010_80186C44(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 2;
        AF(arg0, s16, 2) = 3;
        func_8002D4C8(0x89D, 0);
        var_s2 = 0;
        do {
            temp_v0_2 = func_8012C588(0x2ED, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s16, 0x16) = -0x10;
                AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) + 0x20);
                AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) - 0x18);
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 7) - 4);
                AF(temp_v0_2, s16, 0x1A) = (s16) (-4 - (rand() & 7));
            }
            var_s2 += 1;
        } while (var_s2 < 8);
        return;
    }
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) ^ 4);
}

void func_sc05_010_80186D38(void) {
}

void func_sc05_010_80186D40(u8 *arg0) {
    s32 temp_a2;

    func_8001CD50(AF(arg0, s32, 0x20), (s32) &D_sc05_010_801C7E7C);
    temp_a2 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x50000000);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    func_800233CC((s32) &D_sc05_010_801C7E7C, 0x10);
    *(B4 *) &D_sc05_010_801C7E7C = *(B4 *) &D_sc05_010_801C5B80;
    *(B4 *) &D_sc05_010_801C7E80 = *(B4 *) &D_sc05_010_801C5B84;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_010_80186E1C(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc05_010_80184100((s32) &D_sc05_010_801C7E80, -4);
        func_800233CC((s32) (&D_sc05_010_801C7E80 - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc05_010_80186E94(s32 arg0) {
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
    func_8001C810(temp_v0, (s32) &D_sc05_010_801B5C84);
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012CAE4(arg0);
        AF(AF(arg0, s32, 0x20), s16, 0) = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc05_010_801B6434);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u8, 0xC0) = 0;
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    temp_v1_3 = AF(arg0, s32, 0xCC);
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = AF(arg0, s32, 0xCC);
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x10);
    func_sc05_010_801841E4(arg0);
}

void func_sc05_010_80186F7C(u8 *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_3;

    temp_a2 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a2, u16, 0x18);
    temp_a1 = AF(arg0, void *, 0xCC);
    if (temp_v1 < 0x3000U) {
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
    func_sc05_010_80184214();
}

void func_sc05_010_80187074(u8 *arg0) {
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
            func_sc05_010_8018423C((s32) arg0);
        }
        break;
    }
    func_80016450((s32) AF(arg0, u8, 0xFC), 0);
}

void func_sc05_010_80187144(u8 *arg0, s32 arg1) {
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

void func_sc05_010_80187198(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    temp_v0 = func_8012CBCC();
    if (temp_v0 != 0) {
        AF(arg0, u16, 0xFC) = (u16) -(s32) AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFE) = (u16) -(s32) AF(arg0, u16, 0xFE);
        AF(arg0, u16, 0x100) = (u16) -(s32) AF(arg0, u16, 0x100);
        if (temp_v0 & 0x8000) {
            AF(arg0, s32, 0x10) = (s32) -AF(arg0, s32, 0x10);
            AF(arg0, s32, 0x18) = (s32) -AF(arg0, s32, 0x18);
        } else {
            AF(arg0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14);
        }
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a0_3 = AF(arg0, void *, 0x20);
    AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x100));
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 < 0x10) {
        temp_a0_4 = AF(arg0, void *, 0x20);
        AF(temp_a0_4, s32, 4) = (s32) (AF(temp_a0_4, s32, 4) ^ 0x80000000);
        if (AF(arg0, s32, 0x1C) == 0) {
            func_8012C218((s32) arg0);
        }
    }
}

void func_sc05_010_801872BC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_010_80192D18) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0x5C) = 0;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x28);
        AF(arg0, s32, 0x1C) = 0x5A;
    }
}

extern u8 D_sc05_010_80192E00;
void func_sc05_010_8018738C(u8 *o) {
    if (func_8012C354(o, &D_sc05_010_80192E00) != 0) {
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000040;
        AF(o, u8, 0xC0) = 1;
        AF(o, s16, 0x5C) = 0;
        SetScript(o, &D_sc05_010_80188CCC);
        AF(o, s16, 2) = 1;
        AF(o, s32, 0x1C) = 6;
    }
}

void func_sc05_010_80187404(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc05_010_80187438(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192E3C);
    SetScript(arg0, (s32) &D_sc05_010_80192E48);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xE) = -0x30;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0xC00;
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc05_010_801874DC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
        D_sc05_010_801C7E64[0] = 0;
    }
    AF(arg0, u16, 0xA) = 0U;
    func_sc05_010_8017ECE4((s32) arg0);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x20);
}

extern u8 D_sc05_010_80192E58;
extern u8 D_sc05_010_80192E64;
void func_sc05_010_80187540(u8 *o) {
    s32 t;
    u8 *p;
    s32 r;
    t = func_8012C1B8(o);
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8012B23C(o);
    func_8001CA1C(AF(o, s32, 0x20), (s32) &D_sc05_010_80192E58);
    SetScript(o, (s32) &D_sc05_010_80192E64);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 2) = 1;
    AF(p, s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    r = (rand() & 0x3FF) + 0xA00;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = r;
    AF(o, s32, 0x1C) = 0x1E;
}

void func_sc05_010_80187600(s32 arg0) {
    s32 temp_v0;

    func_8012CBF4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218(arg0);
    }
}

void func_sc05_010_80187644(u8 *arg0) {
    s32 temp_a0;

    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80194290, 0x254, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x25;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC00;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = rand() % 0x1000;
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0x36);
}

void func_sc05_010_801876EC(u8 *arg0, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x100);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) (AF(temp_v1_2, u16, 0x18) + 0x400);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x400);
    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(arg0, s16, 0x34);
    if (temp_v0_2 < (s16) AF(temp_a1, u16, 0x18)) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v0_2;
        AF(temp_a1, u16, 0x18) = (u16) temp_v0_2;
        AF(arg0, s32, 0x1C) = rand();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_010_801877A8(u8 *arg0) {
    s32 r;
    s32 p;
    s16 t;

    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_801942C0, 0x234, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x26;
    AF(arg0, s16, 0x30) = (s16) (rand() & 0x1FF);
    AF(arg0, s16, 0x32) = (s16) (rand() & 0x1F);
    AF(arg0, s16, 0x34) = (s16) (rand() & 0x7F);
    r = rand();
    p = AF(arg0, s32, 0x20);
    t = (r % 0x1000) + 0x800;
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

s32 func_sc05_010_80187854(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

s32 func_sc05_010_80187874(void) {
    return func_8013C08C((s32) &D_sc05_010_801C7FC0, (s32) &D_sc05_010_801988EC);
}

s32 func_sc05_010_801878A4(void) {
    return 0x6C;
}

void func_sc05_010_801878AC(u8 *arg0) {
    D_sc05_010_801C3CF0[AF(arg0, u16, 2)]();
}

void func_sc05_010_801878E8(u8 *o) {
    u8 *a;
    B4 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc05_010_801C3BE0, D_sc05_010_801C3B7C[AF(o, s32, 0x2C)].x, D_sc05_010_801C3B7C[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc05_010_801C3BA8[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc05_010_801C3CE0 = D_sc05_010_801C3BB4[AF(o, s32, 0x2C)];
        D_sc05_010_801C3CDC = AF(&D_sc05_010_801C3CDC, B4, 0x4);
        D_sc05_010_801C3CAC = AF(&D_sc05_010_801C3CAC, B4, 0x30);
        D_sc05_010_801C3CA8 = AF(&D_sc05_010_801C3CA8, B4, 0x4);
        D_sc05_010_801C3C78 = AF(&D_sc05_010_801C3C78, B4, 0x30);
        D_sc05_010_801C3C74 = AF(&D_sc05_010_801C3C74, B4, 0x4);
        D_sc05_010_801C3C44 = AF(&D_sc05_010_801C3C44, B4, 0x30);
        p = &D_sc05_010_801C3C40;
        *p = D_sc05_010_801C3C44;
        D_sc05_010_801C3C18 = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc05_010_80187AE8(s32 arg0) {
    func_sc05_010_80187B28(arg0);
}

void func_sc05_010_80187B08(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc05_010_80187B28(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc05_010_801C3BF8);
    var_s1 = 0;
    var_s0 = &D_sc05_010_801C3C20;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc05_010_80187B80(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc05_010_80187BAC(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc05_010_80187BF0(u8 *arg0) {
    D_sc05_010_801C3CFC[AF(arg0, u16, 2)]();
}

void func_sc05_010_80187C2C(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_010_80187C74(arg0);
    func_80146CA0(arg0);
}

void func_sc05_010_80187C74(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    func_801511E0(arg0);
    func_80149020(arg0);
    func_801472C8(arg0);
    AF(arg0, u8, 0xDE) = 0x10;
    func_80146DE8(arg0, 0, 0, 0);
    func_801477E8(arg0, 0x40000);
    func_8014CBF8(arg0);
    func_801474EC(arg0);
    func_80146CA0(arg0);
}

void func_sc05_010_80187D00(s32 arg0, s32 arg1) {
    u8 temp_v1;

    func_80149020(arg0, arg1);
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x4000);
    func_80147460(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_801470B4(arg0);
        func_80146CA0(arg0);
    }
}

extern s16 D_sc05_010_801C3D10;
extern s16 D_sc05_010_801C3D12;
extern s16 D_sc05_010_801C3D14;
void func_sc05_010_80187D70(u8 *o) {
    s16 *p = &D_sc05_010_801C3D10;
    *p = func_sc05_010_8017EC7C(o);
    func_80149020(o);
    AF(o, s16, 6) = func_80012C6C(AF(o, s16, 6), *p, 8);
    AF(o, s16, 0xA) = func_80012C6C(AF(o, s16, 0xA), D_sc05_010_801C3D12, 8);
    AF(o, s16, 0xE) = func_80012C6C(AF(o, s16, 0xE), D_sc05_010_801C3D14, 8);
    if (AF(o, s16, 6) == *p && AF(o, s16, 0xA) == D_sc05_010_801C3D12
        && AF(o, s16, 0xE) == D_sc05_010_801C3D14) {
        o[0xDE] = 0;
        o[0xDF] = 0;
        func_80146CA0(o);
    }
}

void func_sc05_010_80187E48(s32 arg0, s32 arg1) {
    s32 pad[4];
    func_80149020(arg0, arg1);
    func_80146DE8(arg0, 0, 0, 0);
    func_sc05_010_80187E9C(arg0);
    func_80159B3C(arg0);
    func_80165718(arg0);
}

s32 func_sc05_010_80187E9C(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_010_80187EDC(u8 *arg0) {
    D_sc05_010_801C3D18[AF(arg0, u16, 2)]();
}

void func_sc05_010_80187F18(s32 arg0) {
    func_sc05_010_80187F48();
    func_80146CA0(arg0);
}

extern u8 D_80062C14;
extern u8 D_800D5904;
void func_sc05_010_80187F48(u8 *o) {
    StartRumbleScript(&D_80062C14);
    func_80154274(o, &D_800D5904);
    StartFace(o, 0x20);
    AF(o, s32, 0x234) = 0;
    func_801477E8(o, 0xFFC00000);
    func_80149020(o);
    func_80147324(0x451);
    func_80146E90(o, 0x12C);
    func_80146CA0(o);
}

void func_sc05_010_80187FCC(u8 *o) {
    u8 unused[0x20];
    s32 r;
    func_80149020();
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x5B) & 0xFFF;
    AF(AF(o, u8 *, 0x20), u16, 0x10) = (AF(AF(o, u8 *, 0x20), u16, 0x10) - 0x16) & 0xFFF;
    if (AF(AF(o, u8 *, 0x20), s16, 0x10) < 0xC00) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x400;
    }
    func_80148038(o, 0x10000);
    func_80147460(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    r = func_801535F4(o);
    if (r != 0) {
        if (r >= 0) {
            if (r < 3) goto body;
        }
    }
    if (func_80146E98(o) == 0) return;
body:
    func_801511E0(o);
    func_80146E90(o, 0x1E);
    func_8013C9C4(&D_sc05_010_801C3D28);
    func_80146CA0(o);
}

void func_sc05_010_801880FC(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_sc05_010_80188168(arg0);
        func_80159B3C(arg0);
        func_80146A6C(2, arg0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
        func_80165718(arg0);
    }
}

s32 func_sc05_010_80188168(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_010_801881B0(u8 *arg0) {
    D_sc05_010_801C3D3C[AF(arg0, u16, 2)]();
}

void func_sc05_010_801881EC(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_010_80188234(arg0);
    func_80146CA0(arg0);
}

extern u8 D_sc05_010_801C3D48;
extern void func_8001382C();
extern void func_80146DB8();
extern s32 D_sc05_010_801C3D54;
void func_sc05_010_80188234(u8 *o) {
    u8 unused[0x10]; /* MATCH-TRICK: unused padding gives the original 0x40 frame (v at sp+0x20) */
    V3 v;
    func_80146E90(o, 0x12);
    StartRumbleScript(&D_80062C04);
    func_801511E0(o);
    if ((s16)func_80012A60(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xF4)) > 0x400) {
        func_80154274(o, &D_800D5880);
    } else {
        func_80154274(o, &D_800D58AC);
    }
    StartFace(o, 0x16);
    func_80149020(o);
    func_8001382C((AF(o, u16, 0xF4) - AF(AF(o, u8 *, 0x20), u16, 0x12)) & 0xFFF, &D_sc05_010_801C3D48, &v);
    func_80146DB8(o, &v);
    func_801477E8(o, D_sc05_010_801C3D54);
    func_80147324(0x451);
    func_80146CA0(o);
}

void func_sc05_010_80188334(u8 *o) {
    func_80149020();
    if (AF(o, s32, 0x1C) == 0) {
        if (AF(o, u16, 0xB8) == 0x8000) {
            func_sc05_010_80188468(o);
            func_80159B3C(o);
            func_80165718(o);
            return;
        }
    } else {
        AF(o, s32, 0x1C)--;
    }
    func_80147A84(o);
    func_801473EC(o);
    func_80148038(o, 0x8000);
    func_80146A6C(3, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x10), AF(o, s16, 0xE), 0x80FFFF8, 0xE000B000);
    func_80147460(o);
    switch (func_801535F4(o)) {
    case 0:
        break;
    case 1:
        func_sc05_010_80188468(o);
        func_80159B3C(o);
        func_8014C010(o, 1);
        func_80165718(o);
        break;
    case 2:
        func_sc05_010_80188468(o);
        func_8015BF48(o);
        func_8014C010(o, 1);
        func_80165718(o);
        break;
    }
}

s32 func_sc05_010_80188468(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_010_801884A8(u8 *arg0) {
    D_sc05_010_801C3DD8[AF(arg0, u16, 2)]();
}

void func_sc05_010_801884E4(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_010_8018852C(arg0);
    func_80146CA0(arg0);
}

void func_sc05_010_8018852C(u8 *o) {
    StartRumbleScript(&D_80062BF4);
    func_80149020(o);
    func_80147324(0x451);
    func_801511E0(o);
    if ((s16) func_80012A60(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xF4)) > 0x400) {
        func_80154274(o, &D_800D5880);
    } else {
        func_80154274(o, &D_800D58AC);
    }
    StartFace(o, 0x16);
    func_80149020(o);
    func_80146994(0x42, o, 0, 0);
    func_80146A6C(0x42, o, 0x20, 0, 0, 1, 0);
    func_80146A6C(0x42, o, 0, 0, 0x20, 1, 0);
    func_80146A6C(0x42, o, -0x20, 0, 0, 1, 0);
    func_80146A6C(0x42, o, 0, 0, -0x20, 1, 0);
    func_80146CA0(o);
}

void func_sc05_010_80188680(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc05_010_801886F4(arg0);
        func_80159B3C(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            func_801542DC(arg0, (s32) &D_800D46E4, 0xE);
        }
        func_80165718(arg0);
    }
}

s32 func_sc05_010_801886F4(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_010_80188734(u8 *arg0) {
    D_sc05_010_801C3E40[AF(arg0, u16, 2)]();
}

void func_sc05_010_80188770(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_801465C0();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_010_801C3DE4, 0x270, 0x100);
    AF(temp_v0, u8, 0x27) = 0x9B;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    if (AF(arg0, s32, 0x2C) == 0) {
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
    }
    AF(temp_v0, u8, 0x25) = 0xC0;
    AF(temp_v0, u8, 0x26) = 0x40;
    AF(temp_v0, u8, 0x24) = 0x40;
    func_80128EA8(temp_v0, arg0 + 0x24, (s32) &D_sc05_010_801C3DF0);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    func_sc05_010_8018890C(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_010_80188848(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    u16 var_v0;
    u8 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0x20);
    if (func_80128ED8(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x14) - 0x8000;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) + 0x500);
    if (AF(arg0, s32, 0x2C) == 0) {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x300;
    } else {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x600;
    }
    AF(temp_s1, u16, 0x1A) = var_v0;
    temp_v0_2 = AF(temp_s1, u8, 0x26) - 4;
    AF(temp_s1, u8, 0x26) = temp_v0_2;
    AF(temp_s1, u8, 0x24) = temp_v0_2;
    AF(temp_s1, u8, 0x25) = (u8) (AF(temp_s1, u8, 0x25) - 8);
}

s32 func_sc05_010_8018890C(s32 arg0) {
    s32 var_v0;

    func_80149374(AF(arg0, s32, 0x34), arg0 + 4);
    var_v0 = AF(arg0, s32, 0x2C);
    if (var_v0 == 0) {
        var_v0 = func_800D1FC8(arg0, 5);
    }
    return var_v0;
}
