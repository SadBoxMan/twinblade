#include "common.h"
#include "gte.h"
#include "psyq.h"
extern s32 D_sc07_002_8019F03C;
extern void func_sc07_002_80180F7C();
extern s32 func_sc07_002_8018059C();
extern s32 func_sc07_002_801808E0();
extern void func_sc07_002_801804D4();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_002_8017BE9C(void) {
}

void func_sc07_002_8017BEA4(void) {
}

void func_sc07_002_8017BEAC(void) {
}

void func_sc07_002_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_002_8018A228[])();
extern void (*D_sc07_002_8018A230[])();
extern void (*D_sc07_002_8018A2A8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc07_002_8017EFB4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_002_8018A2B0[])();
void func_sc07_002_8017EFDC(void);
extern void func_800D1EBC();
extern void (*D_sc07_002_8018A2BC[])();
void func_sc07_002_8017EFAC(void);
extern u8 D_sc07_002_8018A2C8;
extern void func_8016EE40();
extern u8 D_sc07_002_8018A2CC;
extern s32 func_sc07_002_8017F750();
extern s32 func_sc07_002_8017F7F8();
extern s32 func_sc07_002_8017F8A0();
extern s32 func_sc07_002_8017F948();
extern s32 func_sc07_002_8017F9EC();
extern void func_sc07_002_8017FA94();
extern void func_sc07_002_8017FB48();
extern void (*D_sc07_002_8018A2F8[])();
extern s32 func_sc07_002_8018094C();
extern s32 func_sc07_002_80180A2C();
extern s32 func_sc07_002_80180B0C();
extern s32 func_sc07_002_80180BEC();
extern s32 func_sc07_002_80180CCC();
extern void func_sc07_002_80180DAC();
extern void (*D_sc07_002_8018A428[])();
extern void (*D_sc07_002_8018A444[])();
extern void (*D_sc07_002_8018A484[])();
extern void (*D_sc07_002_8018A4A0[])();
extern void (*D_sc07_002_8018A528[])();
extern void (*D_sc07_002_8018A53C[])();
extern void (*D_sc07_002_8018A544[])();
extern void (*D_sc07_002_801987F8[])();
extern void (*D_sc07_002_80198BA0[])();
extern s32 func_sc07_002_801866D4();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc07_002_80181BD8();
extern u8 D_sc07_002_8019FE84;
extern u16 D_sc07_002_8019FE7C;
extern u16 D_sc07_002_8019FE7E;
extern s16 D_sc07_002_8019FE80;
extern s16 D_sc07_002_8019FE82;
extern s32 func_sc07_002_80184848();
extern void func_sc07_002_80184774();
extern void func_80015978();
extern s32 func_sc07_002_80184CBC();
extern s32 func_sc07_002_80185000();
extern void func_sc07_002_80184EE4();

extern s16 D_sc07_002_8019FD7C;

extern s32 func_sc07_002_8017BF34();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc07_002_80185F4C();

void func_sc07_002_8017BEBC(s32 arg0, s32 arg1) {
    func_sc07_002_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc07_002_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc07_002_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc07_002_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc07_002_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern void func_sc07_002_80181F98();
extern void func_8012AD50();
extern void func_sc07_002_80184DB0();
extern void func_sc07_002_80185C00();
extern void func_8014BC44();
extern s32 func_80151664();
extern void func_80146C3C();
extern s32 func_sc07_002_8018672C();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();

extern s32 func_sc07_002_8017D8D8();
extern void func_sc07_002_8017D920();
extern void func_80016940();
extern s32 func_80029504();
extern void func_sc07_002_8017F048();
extern void func_sc07_002_8017F0E8();
extern s32 func_sc07_002_8017F1C8();
extern s32 func_sc07_002_8017F250();
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_sc07_002_801817E0();
extern void func_8012A018();
extern s32 func_8012A62C();
extern void func_sc07_002_8017F31C();
extern void func_sc07_002_8017F39C();
extern void func_sc07_002_8017F45C();
extern void func_sc07_002_8017F4DC();
extern s32 D_sc07_002_8019F038;
extern void func_sc07_002_8017F5C4();
extern void func_sc07_002_8017F680();
extern void func_sc07_002_8017FBD0();
extern void func_sc07_002_8017FCA8();
extern void func_sc07_002_8017FEC4();
extern s32 func_sc07_002_8017FF84();
extern void func_sc07_002_80180090();
extern void func_sc07_002_80180248();
extern s32 D_sc07_002_8019F05C;
extern void func_80016224();
extern u8 D_800AF568;
extern void func_8001ABBC();
extern s16 D_sc07_002_8019F070;
extern void func_80128940();
extern void func_sc07_002_80182940();
extern s32 func_8012BEE8();
extern s32 func_sc07_002_80181CBC();
extern u8 D_sc07_002_80197494;
extern u8 D_sc07_002_80197B04;
extern s32 func_8012C1B8();
extern s32 func_8012CAE4();
extern void func_8001C214();
extern void func_sc07_002_80182264();
extern u16 D_800B99DA;
extern u16 D_sc07_002_8019FF8A;
extern void func_sc07_002_8018247C();
extern void func_sc07_002_80182270();
extern s32 func_sc07_002_8018241C();
extern void func_sc07_002_80182538();
extern s32 func_sc07_002_80181FE8();
extern s32 func_sc07_002_80182038();
extern s32 func_sc07_002_80182648();
extern void func_8012931C();
extern void func_801292C8();
extern u16 D_sc07_002_8018A4CC[];
extern s32 D_sc07_002_8019F0EC;
extern void func_8012C218();
extern s16 D_8011DB0C;
extern u8 D_sc07_002_80198818;
extern void (*D_sc07_002_80198988[])();
extern void StartRumbleScript();
extern void func_80149020();
extern void func_80147F50();
extern void func_801473EC();
extern void func_8014C010();
extern s32 func_801535F4();
extern s32 func_80146E98();
extern void func_sc07_002_8018637C();
extern void func_80159B3C();
extern void func_80146A6C();
extern void func_80165718();

extern s32 func_80016978();
extern void func_80029240();
extern u8 D_sc07_002_80198AA8;
extern u8 D_sc07_002_80198AD0;
extern void func_80017254();
extern void func_800176F0();

extern u8 D_80126948;
extern void func_8012A094();
extern s16 D_801269E8;

extern void func_80148038();
extern void func_80147460();
extern void func_801477E8();

extern u8 D_sc07_002_8019B7B8[];
extern u8 D_sc07_002_8018A3E4[];
extern u8 D_sc07_002_8018A438[];
extern void func_sc07_002_80182464();
extern u8 D_sc07_002_8018A464[];
extern s32 func_8012913C();
extern void func_800159E4();

extern u8 D_sc07_002_8018A728;
extern u8 D_sc07_002_8018A7C8;
extern u8 D_sc07_002_8018A7DC;
extern u8 D_sc07_002_8018A87C;
extern u8 D_sc07_002_801A64DC;
extern void func_8002931C();
extern s32 *D_8011DB10;
extern s32 *D_801274C8;
extern s32 *D_801274CC;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern PtSys D_sc07_002_8019FD70;
extern void func_sc07_002_8018503C();
extern s16 D_sc07_002_8019FD76;
extern void func_sc07_002_80185150();
extern s32 func_sc07_002_80185AE8();
extern s32 func_sc07_002_80185A2C();

extern WMtx D_800AE620;
extern OtRef D_800A651C[];
extern Ot14 D_800A6518[];
extern s32 func_80016638();
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern u8 D_sc07_002_8019FD78;
extern u8 D_sc07_002_8019FD79;
extern u8 D_sc07_002_8019FD7A;

extern u8 D_800AF648;


extern u16 D_801202A0;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc07_002_8018A1F8[];
extern s32 func_8012C750();

s32 func_sc07_002_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc07_002_8018A1F8)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc07_002_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc07_002_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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

void func_sc07_002_8017C068(void) {
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

void func_sc07_002_8017C114(u8 *arg0) {
    D_sc07_002_8018A228[AF(arg0, u16, 2)]();
}

extern u8 D_80126940;
extern s32 func_8012E544();
extern s32 func_sc07_002_80181394();
typedef struct { u8 b[8]; } B8;
typedef struct { s16 x, y, z, pad; } FeSv;

extern s16 D_sc07_002_8019F060[];
extern s16 D_sc07_002_8019F062;
extern s16 D_sc07_002_8019F064[];
extern u16 D_sc07_002_8019F066;
extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern s32 func_80012F74();
extern s32 func_80012DBC();
extern s32 func_800130D0();
extern void func_8012F14C();
extern u16 D_80126B5E;
extern s16 D_80126B62;
extern u16 D_80126B66;
extern u16 D_80126B94;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s16 D_80126B9A;
extern u8 D_sc07_002_8018A4DC;
extern u8 D_sc07_002_8019F0E0;
extern u8 *D_sc07_002_80197DCC;
extern void func_sc07_002_801831FC();
extern void func_8013C9C4();
extern void func_8013240C();
extern s32 func_80132EF4();
extern s32 func_8012C658();
extern void func_8012B2CC();
extern s32 func_8012B864();
extern void func_8012B178();


typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern u8 D_sc07_002_8019E1B8[];
extern void func_sc07_002_8017E97C();
extern void func_80017DC4();
extern SV8 D_sc07_002_8018A238[];
extern void func_800139C8();
extern s32 func_8012EFB8();
extern void func_80017E30();
extern void func_80016ED4();
extern u8 *AllocPrim();
extern void func_80017E8C();

typedef struct { s32 n; XY p; SV8 a; SV8 b; } Lerp;
extern s32 D_sc07_002_8019F03C;
extern Lerp *D_sc07_002_8019F040;
extern s16 D_sc07_002_8019F048;
extern s16 D_sc07_002_8019F04A;
extern s16 D_sc07_002_8019F04C;
extern s16 D_sc07_002_8019F04E;
extern s16 D_sc07_002_8019F050;
extern s16 D_sc07_002_8019F054;
extern s16 D_sc07_002_8019F056;
extern s16 D_sc07_002_8019F058;

typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
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
extern s16 D_sc07_002_8018A1F4; extern s16 D_sc07_002_8018A1E8; extern s16 D_sc07_002_8018A1DC; extern u8 D_sc07_002_8019B6F0; extern u8 *func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc07_002_8019B718; extern s16 D_sc07_002_8019B728; extern s16 D_sc07_002_8019B722; extern s16 D_sc07_002_8019B71A; extern s16 D_sc07_002_8019B732; extern s16 D_sc07_002_8019B72A; extern s16 D_sc07_002_8019B756; extern s16 D_sc07_002_8019B74E; extern s16 D_sc07_002_8019B766; extern s16 D_sc07_002_8019B75E; extern s16 D_sc07_002_8019B780; extern s16 D_sc07_002_8019B790; extern s16 D_sc07_002_8019B78A; extern s16 D_sc07_002_8019B782; extern s16 D_sc07_002_8019B79A; extern s16 D_sc07_002_8019B792; extern s16 D_sc07_002_8019B784; extern s16 D_sc07_002_8019B750; extern s16 D_sc07_002_8019B71C; extern u8 D_sc07_002_8019B740; extern u8 D_sc07_002_8019B738; extern u8 D_sc07_002_8019B744; extern u8 D_sc07_002_8019B73C; extern u8 D_sc07_002_8019B741; extern u8 D_sc07_002_8019B739; extern u8 D_sc07_002_8019B746; extern u8 D_sc07_002_8019B742; extern u8 D_sc07_002_8019B73E; extern u8 D_sc07_002_8019B73A; extern u8 D_sc07_002_8019B774; extern u8 D_sc07_002_8019B76C; extern u8 D_sc07_002_8019B775; extern u8 D_sc07_002_8019B76D; extern u8 D_sc07_002_8019B779; extern u8 D_sc07_002_8019B771; extern u8 D_sc07_002_8019B7AC; extern u8 D_sc07_002_8019B7A8; extern u8 D_sc07_002_8019B7A4; extern u8 D_sc07_002_8019B7A0; extern u8 D_sc07_002_8019B7AD; extern u8 D_sc07_002_8019B7A9; extern u8 D_sc07_002_8019B7A5; extern u8 D_sc07_002_8019B7A1; extern u8 D_sc07_002_8019B7AE; extern u8 D_sc07_002_8019B7AA; extern u8 D_sc07_002_8019B7A6; extern u8 D_sc07_002_8019B7A2; extern u8 D_sc07_002_8019B77A; extern u8 D_sc07_002_8019B776; extern u8 D_sc07_002_8019B772; extern u8 D_sc07_002_8019B76E; extern s32 D_sc07_002_8019B77C; extern s32 D_sc07_002_8019B748; extern s32 D_sc07_002_8019B7B0;
extern s32 func_801465C0();
extern XY D_sc07_002_80198A2C[];
extern u8 D_sc07_002_80198A58[];
extern B4 D_sc07_002_80198A64[];
extern u8 D_sc07_002_80198A90;
extern B4 D_sc07_002_80198B90, D_sc07_002_80198B8C, D_sc07_002_80198B5C, D_sc07_002_80198B58, D_sc07_002_80198B28, D_sc07_002_80198B24, D_sc07_002_80198AF4, D_sc07_002_80198AF0, D_sc07_002_80198AC8;
extern void func_8001CBDC();

void func_sc07_002_8017C150(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc07_002_8018A1F4 = 0;
    D_sc07_002_8018A1E8 = 0;
    D_sc07_002_8018A1DC = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc07_002_8019B6F0);
        func_8001CE28(m, &D_sc07_002_8019B6F0);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc07_002_8019B718 = x1;
    D_sc07_002_8019B728 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc07_002_8019B71A = D_sc07_002_8019B722 = y1;
    D_sc07_002_8019B72A = D_sc07_002_8019B732 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc07_002_8019B74E = D_sc07_002_8019B756 = y2;
    D_sc07_002_8019B75E = D_sc07_002_8019B766 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc07_002_8019B780 = x2 + 2;
    D_sc07_002_8019B790 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc07_002_8019B738 = D_sc07_002_8019B740 = 0xFF;
    D_sc07_002_8019B73C = D_sc07_002_8019B744 = 0xFF;
    D_sc07_002_8019B739 = D_sc07_002_8019B741 = 0;
    D_sc07_002_8019B742 = D_sc07_002_8019B746 = 0;
    D_sc07_002_8019B73A = D_sc07_002_8019B73E = 0;
    D_sc07_002_8019B76C = D_sc07_002_8019B774 = 0xFF;
    D_sc07_002_8019B782 = D_sc07_002_8019B78A = y + 4;
    D_sc07_002_8019B792 = D_sc07_002_8019B79A = y + 0xB;
    D_sc07_002_8019B76D = D_sc07_002_8019B775 = 0xFF;
    D_sc07_002_8019B771 = D_sc07_002_8019B779 = 0xFF;
    D_sc07_002_8019B7A0 = D_sc07_002_8019B7A4 = D_sc07_002_8019B7A8 = D_sc07_002_8019B7AC = 0x40;
    D_sc07_002_8019B7A1 = D_sc07_002_8019B7A5 = D_sc07_002_8019B7A9 = D_sc07_002_8019B7AD = 0x40;
    D_sc07_002_8019B7A2 = D_sc07_002_8019B7A6 = D_sc07_002_8019B7AA = D_sc07_002_8019B7AE = 0x40;
    D_sc07_002_8019B76E = D_sc07_002_8019B772 = D_sc07_002_8019B776 = D_sc07_002_8019B77A = 0;
    D_sc07_002_8019B71C = D_sc07_002_8019B750 = 2;
    D_sc07_002_8019B784 = 4;
    D_sc07_002_8019B748 = D_sc07_002_8019B77C = 0;
    D_sc07_002_8019B7B0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc07_002_8018A1F4 = 2;
    AF(o, s16, 2)++;
}

extern void func_sc07_002_801A2330();
extern u8 D_sc07_002_80186B14;
extern u8 D_sc07_002_8018A4B4;
extern u8 D_sc07_002_8019F0F0[];
extern u16 D_sc07_002_8019FD68;
extern void func_8012C51C();
extern void func_80132288();
extern void func_8001D0E8();
typedef struct { SV8 p; SV8 q; s32 n; } Spawn;

extern s32 D_sc07_002_8018A3AC[];
extern u8 D_sc07_002_8018A3D4;
extern u8 D_sc07_002_80196C04[];
extern u16 D_sc07_002_8018A3C0[];
extern u16 D_sc07_002_8018A3C2[];
extern s32 D_sc07_002_80196BEC[];
extern s32 D_sc07_002_8019F074[];
extern s32 D_sc07_002_8019F078[];
extern void func_sc07_002_801829F0();

extern void func_sc07_002_8017E5D4();
extern void func_sc07_002_8017DC80();
static inline u8 *find_slot_8017E1E8(void) {
    s32 i;
    s32 off;
    for (i = 0; i < 0xC0; i++) {
        off = i * 0x38;
        if (D_sc07_002_8019B7B8[off] == 0) {
            return &D_sc07_002_8019B7B8[off];
        }
    }
    return 0;
}
extern void MoveImage();

extern s32 func_80013294();

extern void func_8015BF48();

extern u8 D_sc07_002_801A00D6;
extern u8 D_sc07_002_801A0044;
extern u8 D_sc07_002_8019FF89;
extern u8 D_sc07_002_801A0062;
extern u8 D_sc07_002_8019FF8C;
extern u8 D_sc07_002_8019FF68;
extern s32 D_sc07_002_801A0048;
extern u8 D_sc07_002_8018A418;
extern void func_80016450();
extern s32 func_80178970();
extern void func_80178B18();
extern void func_80178D18();
extern void func_sc07_002_80181C18();
extern void func_sc07_002_80181ED8();
extern struct Blk_s { s32 w[14]; } D_sc07_002_8018A4F0;
extern s32 D_sc07_002_80198854[];
extern u8 D_sc07_002_80198934;
extern void func_80146C98();
extern void func_80146E90();
extern void func_80147324();
extern void func_801542A4();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern CV4 D_sc07_002_8019A3A8;
extern void func_80013F3C();
extern s16 D_sc07_002_80197F84[];

typedef struct { s32 a, b; } P8;
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

void func_sc07_002_8017C43C(u8 *arg0) {
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
            ((XY *)&D_sc07_002_8018A1DC)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((XY *)&D_sc07_002_8018A1DC)->x == 0 && tgt != 0) {
                ((XY *)&D_sc07_002_8018A1DC)->x = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((XY *)&D_sc07_002_8018A1DC)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc07_002_8018A1E8 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc07_002_8018A1F4 = D_sc07_002_8018A1E8 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[2].g = c;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[0].g = c;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[3].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[2].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[1].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[0].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[3].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[2].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[1].b = c;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[0].b = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((XY *)&D_sc07_002_8018A1DC)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc07_002_8019B718)[0].p[1].x = ((QuadArg *)&D_sc07_002_8019B718)[0].p[0].x + n;
        ((QuadArg *)&D_sc07_002_8019B718)[0].p[3].x = ((QuadArg *)&D_sc07_002_8019B718)[0].p[1].x - 4;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[3].g = v;
        ((QuadArg *)&D_sc07_002_8019B718)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc07_002_8019B718)[0].c[1].g;
        *g = ((QuadArg *)&D_sc07_002_8019B718)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc07_002_8019B718)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc07_002_8019B718)[1].p[0].x = x;
        ((QuadArg *)&D_sc07_002_8019B718)[1].p[1].x = ((QuadArg *)&D_sc07_002_8019B718)[0].p[0].x + n;
        ((QuadArg *)&D_sc07_002_8019B718)[0].p[1].x = x;
        ((QuadArg *)&D_sc07_002_8019B718)[1].p[2].x = xm;
        ((QuadArg *)&D_sc07_002_8019B718)[0].p[3].x = xm;
        ((QuadArg *)&D_sc07_002_8019B718)[1].p[3].x = ((QuadArg *)&D_sc07_002_8019B718)[1].p[1].x - 4;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[3].r = -v;
        ((QuadArg *)&D_sc07_002_8019B718)[1].c[1].r = -v;
        func_800176F0(&((QuadArg *)&D_sc07_002_8019B718)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc07_002_8019B718)[2].p[3].x;
        ((QuadArg *)&D_sc07_002_8019B718)[2].p[1].x = ((QuadArg *)&D_sc07_002_8019B718)[2].p[0].x + D_sc07_002_8018A1E8;
        *p = ((QuadArg *)&D_sc07_002_8019B718)[2].p[1].x - 4;
    }
    func_800176F0(&((QuadArg *)&D_sc07_002_8019B718)[0]);
    func_800176F0(&((QuadArg *)&D_sc07_002_8019B718)[2]);
}

void func_sc07_002_8017C8D0(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc07_002_8017D7B0(void) {
    s32 var_v0;

    var_v0 = 0x29C8;
    do {
        (*(s16 *)&D_sc07_002_8019B7B8[var_v0]) = 0;
        var_v0 -= 0x38;
    } while (var_v0 >= 0);
}

s32 func_sc07_002_8017D7D4(u8 *arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 temp_v0;

    AF(arg0, s16, 6) = 0;
    temp_v0 = func_sc07_002_8017D8D8();
    if (temp_v0 != 0) {
        func_sc07_002_8017D920(temp_v0, (s32) arg0, arg1, arg2, /* extra? */ (s32) arg3);
    }
    return temp_v0;
}

s32 func_sc07_002_8017D858(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 temp_v0;

    temp_v0 = func_sc07_002_8017D8D8();
    if (temp_v0 != 0) {
        func_sc07_002_8017D920(temp_v0, arg0, arg1, arg2, /* extra? */ (s32) arg3);
    }
    return temp_v0;
}




typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; } LineG2;

s32 func_sc07_002_8017D8D8(void) {
    s32 i;
    s32 off;

    for (i = 0; i < 0xC0; i++) {
        off = i * 0x38;
        if (D_sc07_002_8019B7B8[off] == 0) {
            return (s32)&D_sc07_002_8019B7B8[off];
        }
    }
    return 0;
}

void func_sc07_002_8017D920(u8 *o, u16 *p, u16 *q, u8 *c, s32 n0) {
    s8 n = n0;

    AF(o, u16, 0) = (c[3] << 8) + 1;
    AF(o, u16, 4) = p[0];
    AF(o, u16, 6) = p[1];
    AF(o, u16, 8) = p[2];
    AF(o, u16, 0xA) = p[3];
    if (q != 0) {
        AF(o, u16, 0xA) &= 0xEFFF;
        AF(o, u16, 0xC) = q[0];
        AF(o, u16, 0xE) = q[1];
        AF(o, u16, 0x10) = q[2];
    } else {
        AF(o, u16, 0xA) |= 0x1000;
    }
    AF(o, s16, 0x24) = c[0] << 8;
    AF(o, s16, 0x26) = c[1] << 8;
    AF(o, s16, 0x28) = c[2] << 8;
    if (n < 0) {
        n = -n;
        AF(o, s16, 0x2A) = AF(o, s16, 0x2C) = AF(o, s16, 0x2E) = 0;
    } else {
        AF(o, s16, 0x2A) = AF(o, u16, 0x24) / n;
        AF(o, s16, 0x2C) = AF(o, u16, 0x26) / n;
        AF(o, s16, 0x2E) = AF(o, u16, 0x28) / n;
        if (AF(o, u16, 0x2A) == 0) {
            AF(o, s16, 0x2A) = 1;
        }
        if (AF(o, u16, 0x2C) == 0) {
            AF(o, s16, 0x2C) = 1;
        }
        if (AF(o, u16, 0x2E) == 0) {
            AF(o, s16, 0x2E) = 1;
        }
    }
    AF(o, s16, 2) = n;
    AF(o, s32, 0x30) = AF(o, s32, 0x34) = 0;
}

void func_sc07_002_8017DAEC(void) {
    s32 i;
    s32 off;
    s32 st;
    u8 *e;
    s16 t;

    i = 0;
    off = 0;
loop:
    {
        st = D_sc07_002_8019B7B8[off];
        if (st >= 2 && *(s16 *)&D_sc07_002_8019B7B8[off + 2] != 0) {
            t = *(s16 *)&D_sc07_002_8019B7B8[off + 2] - 1;
            e = &D_sc07_002_8019B7B8[off];
            AF(e, s16, 2) = t;
            if (*(s16 *)&D_sc07_002_8019B7B8[off + 2] == 0) {
                func_sc07_002_8017E5D4(e);
                goto next;
            }
            if (*(u16 *)&D_sc07_002_8019B7B8[off + 0x24] < *(u16 *)&D_sc07_002_8019B7B8[off + 0x2A]) {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x24] = 0;
            } else {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x24] -= *(u16 *)&D_sc07_002_8019B7B8[off + 0x2A];
            }
            if (*(u16 *)&D_sc07_002_8019B7B8[off + 0x26] < *(u16 *)&D_sc07_002_8019B7B8[off + 0x2C]) {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x26] = 0;
            } else {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x26] -= *(u16 *)&D_sc07_002_8019B7B8[off + 0x2C];
            }
            if (*(u16 *)&D_sc07_002_8019B7B8[off + 0x28] < *(u16 *)&D_sc07_002_8019B7B8[off + 0x2E]) {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x28] = 0;
            } else {
                *(u16 *)&D_sc07_002_8019B7B8[off + 0x28] -= *(u16 *)&D_sc07_002_8019B7B8[off + 0x2E];
            }
        }
    next:
        off += 0x38;
        i++;
    }
    if (i < 0xC0) goto loop;
    func_sc07_002_8017DC80();
}

void func_sc07_002_8017DC80(void) {
    s32 flag;
    s32 sxy0;
    s32 sxy1;
    s32 sxy2;
    s32 flag2;
    s32 sxy3;
    s32 otz;
    u32 *ot;
    s32 i;
    u8 *e;
    u8 *p;
    u8 *q;
    s32 abr;
    s32 z;
    s32 k;
    s32 w;

    ot = g_WorldOtTable[D_800B9A02[0]];
    GsSetLsMatrix(&D_800AF648);
    e = D_sc07_002_8019B7B8;
    for (i = 0; i < 0xC0; i++, e += 0x38) {
        w = AF(e, u16, 0);
        if ((w & 0xFF) < 2) {
            continue;
        }
        abr = (u32)w >> 8;
        if (!(AF(e, u16, 0xA) & 0x1000)) {
            p = AllocPrim(0x24);
            p[3] = 8;
            p[7] = 0x38;
            gte_ldv3(e + 4, e + 0xC, e + 0x14);
            gte_rtpt();
            gte_stflg(&flag);
            gte_stsxy3(&sxy0, &sxy1, &sxy2);
            gte_ldv0(e + 0x1C);
            gte_rtps();
            gte_stflg(&flag2);
            flag |= flag2;
            gte_stsxy(&sxy3);
            gte_avsz4();
            gte_stotz(&otz);
            if (flag & ~0x1000) {
                continue;
            }
            {
                s16 h = AF(e, s16, 0xA);
                z = otz;
                switch (h & 0xC000) {
                case 0:
                    break;
                case 0xC000:
                    z -= h & 0xFFF;
                    if (z < 0) {
                        z = 0;
                    }
                    break;
                default:
                    z += h & 0xFFF;
                    break;
                }
            }
            if ((u32)z >= 0x1000) {
                continue;
            }
            ((PolyG4 *)p)->x0 = sxy0;
            ((PolyG4 *)p)->y0 = sxy0 >> 16;
            ((PolyG4 *)p)->x1 = sxy1;
            ((PolyG4 *)p)->y1 = sxy1 >> 16;
            ((PolyG4 *)p)->x2 = sxy2;
            ((PolyG4 *)p)->y2 = sxy2 >> 16;
            ((PolyG4 *)p)->x3 = sxy3;
            ((PolyG4 *)p)->y3 = sxy3 >> 16;
            if (AF(e, u8 *, 0x34) != 0) {
                p[4] = p[0xC] = e[0x25];
                p[5] = p[0xD] = e[0x27];
                p[6] = p[0xE] = e[0x29];
                p[0x14] = p[0x1C] = AF(e, u8 *, 0x34)[0x25];
                p[0x15] = p[0x1D] = AF(e, u8 *, 0x34)[0x27];
                p[0x16] = p[0x1E] = AF(e, u8 *, 0x34)[0x29];
            } else {
                p[4] = p[0xC] = p[0x14] = p[0x1C] = e[0x25];
                p[5] = p[0xD] = p[0x15] = p[0x1D] = e[0x27];
                p[6] = p[0xE] = p[0x16] = p[0x1E] = e[0x29];
            }
            if (abr < 4) {
                p[7] |= 2;
            }
            ((PTag *)p)->addr = ((PTag *)&ot[z])->addr;
            ((PTag *)&ot[z])->addr = (u32)p;
        } else {
            p = AllocPrim(0x14);
            p[3] = 4;
            p[7] = 0x50;
            gte_ldv3(e + 4, e + 0x14, e + 0x14);
            gte_rtpt();
            gte_stsxy0(&sxy0);
            gte_stsxy1(&sxy1);
            gte_stflg(&flag);
            gte_stszotz(&otz);
            if (flag & ~0x1000) {
                continue;
            }
            {
                s16 h = AF(e, s16, 0xA);
                z = otz;
                switch (h & 0xC000) {
                case 0:
                    break;
                case 0xC000:
                    z -= h & 0xFFF;
                    if (z < 0) {
                        z = 0;
                    }
                    break;
                default:
                    z += h & 0xFFF;
                    break;
                }
            }
            if ((u32)z >= 0x1000) {
                continue;
            }
            ((LineG2 *)p)->x0 = sxy0;
            ((LineG2 *)p)->y0 = sxy0 >> 16;
            ((LineG2 *)p)->x1 = sxy1;
            ((LineG2 *)p)->y1 = sxy1 >> 16;
            if (AF(e, u8 *, 0x34) != 0) {
                p[4] = e[0x25];
                p[5] = e[0x27];
                p[6] = e[0x29];
                p[0xC] = AF(e, u8 *, 0x34)[0x25];
                p[0xD] = AF(e, u8 *, 0x34)[0x27];
                p[0xE] = AF(e, u8 *, 0x34)[0x29];
            } else {
                p[4] = p[0xC] = e[0x25];
                p[5] = p[0xD] = e[0x27];
                p[6] = p[0xE] = e[0x29];
            }

            if (abr < 4) {
                p[7] |= 2;
            }
            ((PTag *)p)->addr = ((PTag *)&ot[z])->addr;
            ((PTag *)&ot[z])->addr = (u32)p;
        }
        {
        s16 a = abr;
        if (a < 4) {
            q = AllocPrim(8);
            q[3] = 1;
            AF(q, u32, 4) = 0xE1000000 | ((a << 5) & 0x9FF);
            ((PTag *)q)->addr = ((PTag *)&ot[z])->addr;
            ((PTag *)&ot[z])->addr = (u32)q;
        }
        }
    }
}

void func_sc07_002_8017E1E8(u8 *o, u16 *a, u16 *b) {
    u8 *e;

    if (o[0] == 1) {
        e = find_slot_8017E1E8();
        if (e != 0) {
            func_sc07_002_8017E37C(e, o, a, b);
            AF(o, u16, 4) = a[0];
            AF(o, u16, 6) = a[1];
            AF(o, u16, 8) = a[2];
            if (!(AF(o, u16, 0xA) & 0x1000) && b != 0) {
                AF(o, u16, 0xC) = b[0];
                AF(o, u16, 0xE) = b[1];
                AF(o, u16, 0x10) = b[2];
            }
            AF(o, u8 *, 0x34) = e;
        } else if (AF(o, u8 *, 0x34) != 0) {
            AF(AF(o, u8 *, 0x34), u16, 4) = a[0];
            AF(AF(o, u8 *, 0x34), u16, 6) = a[1];
            AF(AF(o, u8 *, 0x34), u16, 8) = a[2];
            if (!(AF(o, u16, 0xA) & 0x1000) && b != 0) {
                AF(AF(o, u8 *, 0x34), u16, 0xC) = b[0];
                AF(AF(o, u8 *, 0x34), u16, 0xE) = b[1];
                AF(AF(o, u8 *, 0x34), u16, 0x10) = b[2];
            }
        }
    }
}

void func_sc07_002_8017E37C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0) = (s16) ((AF(arg1, u16, 0) & 0xFF00) + 2);
    AF(arg0, u16, 2) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 4) = (u16) AF(arg2, u16, 0);
    AF(arg0, u16, 6) = (u16) AF(arg2, u16, 2);
    AF(arg0, u16, 8) = (u16) AF(arg2, u16, 4);
    AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 0xA);
    if (!(AF(arg1, u16, 0xA) & 0x1000) && (arg3 != 0)) {
        AF(arg0, u16, 0xC) = (u16) AF(arg3, u16, 0);
        AF(arg0, u16, 0xE) = (u16) AF(arg3, u16, 2);
        AF(arg0, u16, 0x10) = (u16) AF(arg3, u16, 4);
    }
    AF(arg0, u16, 0x14) = (u16) AF(arg1, u16, 4);
    AF(arg0, u16, 0x16) = (u16) AF(arg1, u16, 6);
    AF(arg0, u16, 0x18) = (u16) AF(arg1, u16, 8);
    AF(arg0, u16, 0x1A) = (u16) AF(arg1, u16, 0xA);
    if (!(AF(arg1, u16, 0xA) & 0x1000)) {
        AF(arg0, u16, 0x1C) = (u16) AF(arg1, u16, 0xC);
        AF(arg0, u16, 0x1E) = (u16) AF(arg1, u16, 0xE);
        AF(arg0, u16, 0x20) = (u16) AF(arg1, u16, 0x10);
    }
    AF(arg0, u16, 0x24) = (u16) AF(arg1, u16, 0x24);
    AF(arg0, u16, 0x26) = (u16) AF(arg1, u16, 0x26);
    AF(arg0, u16, 0x28) = (u16) AF(arg1, u16, 0x28);
    AF(arg0, u16, 0x2A) = (u16) AF(arg1, u16, 0x2A);
    AF(arg0, u16, 0x2C) = (u16) AF(arg1, u16, 0x2C);
    AF(arg0, u16, 0x2E) = (u16) AF(arg1, u16, 0x2E);
    AF(arg0, void *, 0x34) = (void *) AF(arg1, void *, 0x34);
    AF(arg0, s32, 0x30) = arg1;
    AF(AF(arg0, void *, 0x34), s32, 0x30) = arg0;
}

extern void RotMatrix();
extern void MulMatrix();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void RotTransSV();

void func_sc07_002_8017E4D8(u8 *o, u8 *a, u8 *b, u8 *c, u8 *d) {
    WMtx s;
    WMtx m;
    s32 flag;

    RotMatrix(o + 0x10, &m);
    s.m[0][0] = AF(o, u16, 0x18);
    s.m[0][1] = 0;
    s.m[0][2] = 0;
    s.m[1][0] = 0;
    s.m[1][1] = AF(o, u16, 0x1A);
    s.m[1][2] = 0;
    s.m[2][0] = 0;
    s.m[2][1] = 0;
    s.m[2][2] = AF(o, u16, 0x1C);
    MulMatrix(&m, &s);
    m.t[0] = AF(o, s16, 8);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xC);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(a, c, &flag);
    RotTransSV(b, d, &flag);
}

void func_sc07_002_8017E5D4(u8 *o) {
    AF(o, u16, 0) = 0;
    if (AF(o, u8 *, 0x34) != 0) {
        AF(AF(o, u8 *, 0x34), s32, 0x30) = 0;
    }
    if (AF(o, u8 *, 0x30) != 0) {
        AF(AF(o, u8 *, 0x30), s32, 0x34) = 0;
    }
}

void func_sc07_002_8017E604(u8 *arg0) {
    D_sc07_002_8018A230[AF(arg0, u16, 2)]();
}

void func_sc07_002_8017E640(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc07_002_8019E1B8 + i * 0x1D0;
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

void func_sc07_002_8017E7E8(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc07_002_8019E1B8 + i * 0x1D0;
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
        func_sc07_002_8017E97C(o, b);
    }
    if (n == 0x80) func_80146C3C(o);
}

void func_sc07_002_8017E97C(u8 *o, u8 *b) {
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
        ApplyMatrixSV(&m, &D_sc07_002_8018A238[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc07_002_8018A238[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc07_002_8018A238[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc07_002_8018A238[3], &v[3]);
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

void func_sc07_002_8017EC34(void) {
    s32 *var_v0;
    s32 temp_s0;

    temp_s0 = func_80029504();
    func_8002931C(0x04740000);
    if (temp_s0 < 0x640) {
        D_801274C8 = &D_sc07_002_8018A728;
        var_v0 = &D_sc07_002_8018A7C8;
    } else {
        D_801274C8 = &D_sc07_002_8018A7DC;
        var_v0 = &D_sc07_002_8018A87C;
    }
    D_801274CC = var_v0;
    D_8011DB10 = &D_sc07_002_801A64DC;
}

void func_sc07_002_8017ECC0(u8 *arg0) {
    D_sc07_002_8018A2A8[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_002_8017ECFC(u8 *arg0) {
    func_sc07_002_8017EFB4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_002_8017ED40(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_002_8017ED64(u8 *arg0) {
    D_sc07_002_8018A2B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_002_8017EDA0(u8 *arg0) {
    func_sc07_002_8017EFDC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_002_8017EDE0(u8 *arg0) {
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

void func_sc07_002_8017EE5C(void) {
    func_800D1EBC();
}

void func_sc07_002_8017EE7C(u8 *arg0) {
    D_sc07_002_8018A2BC[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_002_8017EEB8(u8 *arg0) {
    func_sc07_002_8017EFAC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_002_8017EEF8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_80016940(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_002_8017EF74(void) {
    if (func_80016978(4) & 0xFFFF) {
        func_80029240();
        return 1;
    }
    return 0;
}

void func_sc07_002_8017EFAC(void) {
}

void func_sc07_002_8017EFB4(void) {
    func_8016EE40((s32) &D_sc07_002_8018A2C8, 0x01000000);
}

void func_sc07_002_8017EFDC(void) {
    func_8016EE40((s32) &D_sc07_002_8018A2CC, 0x01000000);
}

void func_sc07_002_8017F004(void) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017F048();
        return;
    }
    func_sc07_002_8017F0E8();
}

void func_sc07_002_8017F048(void) {
    func_sc07_002_801817E0(0);
    D_80126954 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
}

void func_sc07_002_8017F0E8(void) {
    func_sc07_002_801817E0(0);
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -1;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
}

void func_sc07_002_8017F184(void) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017F1C8();
        return;
    }
    func_sc07_002_8017F250();
}

s32 func_sc07_002_8017F1C8(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 1);
    return func_8012A62C(0x1E);
}

s32 func_sc07_002_8017F250(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 1);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017F2D8(void) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017F31C();
        return;
    }
    func_sc07_002_8017F39C();
}

void func_sc07_002_8017F31C(void) {
    func_sc07_002_801817E0(1);
    D_80126954 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
}

void func_sc07_002_8017F39C(void) {
    func_sc07_002_801817E0(1);
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -1;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
}

void func_sc07_002_8017F418(void) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017F45C();
        return;
    }
    func_sc07_002_8017F4DC();
}

void func_sc07_002_8017F45C(void) {
    func_sc07_002_801817E0(1);
    D_80126954 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
}

void func_sc07_002_8017F4DC(void) {
    func_sc07_002_801817E0(1);
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -1;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 0);
}

void func_sc07_002_8017F558(void) {
    D_sc07_002_8019F038 += 1;
}

void func_sc07_002_8017F578(void) {
    s32 temp_v0;

    temp_v0 = func_80029504() < 0x640;
    D_sc07_002_8019F038 = 0;
    if (temp_v0 != 0) {
        func_sc07_002_8017F5C4();
        return;
    }
    func_sc07_002_8017F680();
}

void func_sc07_002_8017F5C4(void) {
    func_sc07_002_801817E0(0);
    D_80126954 = 0x12C;
    D_8012695C = 0x2BC;
    D_80126968 = 0x38;
    D_8012696A = 0x638;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 2);
    D_801269E8 = 0;
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
}

void func_sc07_002_8017F680(void) {
    func_sc07_002_801817E0(0);
    D_80126954 = 0xC8;
    D_8012695C = 0x300;
    D_80126968 = 0x100;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 2);
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc07_002_8017FB48((s32) &D_80126948);
}

void func_sc07_002_8017F730(s32 arg0) {
    func_sc07_002_8017F750(arg0);
}

s32 func_sc07_002_8017F750(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 3);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017F7D8(s32 arg0) {
    func_sc07_002_8017F7F8(arg0);
}

s32 func_sc07_002_8017F7F8(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 4);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017F880(s32 arg0) {
    func_sc07_002_8017F8A0(arg0);
}

s32 func_sc07_002_8017F8A0(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 5);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017F928(s32 arg0) {
    func_sc07_002_8017F948(arg0);
}

s32 func_sc07_002_8017F948(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 6);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017F9CC(s32 arg0) {
    func_sc07_002_8017F9EC(arg0);
}

s32 func_sc07_002_8017F9EC(void) {
    func_sc07_002_801817E0(2);
    D_80126954 = 0x12C;
    D_8012695C = 0x3E8;
    D_80126968 = 0x200;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x180;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 7);
    return func_8012A62C(0x1E);
}

void func_sc07_002_8017FA74(s32 arg0) {
    func_sc07_002_8017FA94(arg0);
}

extern s32 func_8014C59C();

void func_sc07_002_8017FA94(void) {
    u8 *w = &D_80126948;
    s32 p;

    func_sc07_002_801817E0(2);
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_80126968 = 0x11C;
    p = func_8012E544(0x306);
    if (p != 0) {
        D_8012696A = func_8014C59C(&D_80126B58, p);
    } else {
        D_8012696A = 0;
    }
    AF(w, s16, 0x24) = 0;
    AF(w, s16, 0x2E) = 0;
    AF(w, s16, 0x30) = -1;
    AF(w, s16, 0x32) = 0;
    func_8012A018((s32) func_sc07_002_8017FB48, 8);
    func_8012A62C(0x1E);
}

void func_sc07_002_8017FB48(s32 arg0) {
    D_sc07_002_8018A2F8[AF(arg0, u8, 4)]();
}

void func_sc07_002_8017FB84(s32 arg0) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017FBD0(arg0);
        return;
    }
    func_sc07_002_8017FCA8(arg0);
}

void func_sc07_002_8017FBD0(u8 *o) {
    FeSv a;
    FeSv b;
    s32 p;
    s32 r;

    *(B8 *)&a = *(B8 *)&D_80126940;
    p = func_8012E544(0x322);
    if (p != 0) {
        func_80015978(p + 4, &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    r = ratan2(a.x - b.x, a.z - b.z) & 0xFFF;
    if (a.y >= -0x1FF) {
        a.y = -0x200;
    }
    func_sc07_002_80181394(o, &a, r);
}

void func_sc07_002_8017FCA8(u8 *o) {
    FeSv a;
    FeSv b;
    s32 p;
    s16 t;
    s16 x;
    s16 y;
    s16 h;

    *(B8 *)&a = *(B8 *)&D_80126940;
    p = func_8012E544(0x306);
    if (p != 0) {
        func_80015978(p + 4, &b);
        if (a.y >= -0x1FF) {
            a.y = -0x200;
        }
        func_80015978(p + 4, &b);
        b.y = a.y;
        t = func_80013294(&a, &b);
        t -= 0x100;
        if (t < 0) {
            t = 0;
        }
        if (t > 0x300) {
            t = 0x300;
        }
        h = t * 800 / 768 + 0x190;
        x = (t << 9) / 768 + 0x38;
        y = t * 111 / 768 - 0x70;
        AF(o, s32, 0x14) = h;
        AF(o, s16, 0x20) = x;
        AF(o, s16, 0x30) = y;
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    func_sc07_002_80181394(o, &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_8017FE78(s32 arg0) {
    if (func_80029504() < 0x640) {
        func_sc07_002_8017FEC4(arg0);
        return;
    }
    func_sc07_002_8017FF84(arg0);
}

void func_sc07_002_8017FEC4(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x322);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

s32 func_sc07_002_8017FF84(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180044(s32 arg0) {
    if (func_80029504() < 0x640) {
        func_sc07_002_80180090(arg0);
        return;
    }
    func_sc07_002_80180248(arg0);
}

void func_sc07_002_80180090(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;
    s16 d;

    *(B8 *)&a = *(B8 *)&D_80126940;
    r = func_8012E544(0x322);
    if (r != 0) {
        func_80015978(r + 4, &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    ratan2(a.x - b.x, a.z - b.z);
    d = rsin((AF(o, s16, 0x1A) - 0x638) * 0x800 / 910) * 341 / 4096 - 0x71;
    if (d < 0) {
        d = 0;
    }
    AF(o, s16, 0x20) = 0x38 - d;
    d = rsin((AF(o, s16, 0x1A) - 0x638) * 0x800 / 910) * 288 / 4096 - 0x40;
    if (d < 0) {
        d = 0;
    }
    b.y -= d;
    AF(o, u16, 0x22) = AF(o, u16, 0x1A) += 4;
    func_sc07_002_80181394(o, &b, 0);
}

void func_sc07_002_80180248(u8 *o) {
    FeSv a;
    s32 p;

    p = func_8012E544(0x306);
    if (p != 0) {
        func_80015978(p + 4, &a);
    } else {
        *(B8 *)&a = *(B8 *)&D_80126940;
    }
    switch (D_sc07_002_8019F038) {
    case 0:
        break;
    case 1:
        D_sc07_002_8019F03C = 0x1E;
        D_sc07_002_8019F038++;
        break;
    case 2:
        if (--D_sc07_002_8019F03C == -1) {
            func_sc07_002_801804D4(o, 0);
            func_sc07_002_801804D4(o, 1);
            func_sc07_002_801808E0(o, 3);
            D_sc07_002_8019F038++;
        }
        break;
    case 3:
        func_sc07_002_801808E0(o, 3);
        if (func_sc07_002_8018059C(o) != 0) {
            D_sc07_002_8019F03C = 0xA;
            D_sc07_002_8019F038++;
        }
        break;
    case 4:
        if (--D_sc07_002_8019F03C == -1) {
            func_sc07_002_801804D4(o, 2);
            func_sc07_002_801804D4(o, 3);
            func_sc07_002_801808E0(o, 3);
            D_sc07_002_8019F038++;
        }
        break;
    case 5:
        func_sc07_002_801808E0(o, 3);
        if (func_sc07_002_8018059C(o) != 0) {
            D_sc07_002_8019F03C = 0xA;
            D_sc07_002_8019F038++;
        }
        break;
    case 6:
        if (--D_sc07_002_8019F03C == -1) {
            func_sc07_002_801804D4(o, 4);
            func_sc07_002_801804D4(o, 5);
            func_sc07_002_801808E0(o, 3);
            D_sc07_002_8019F038++;
        }
        break;
    case 7:
        func_sc07_002_801808E0(o, 3);
        if (func_sc07_002_8018059C(o) != 0) {
            func_sc07_002_8018672C(0xA);
            D_sc07_002_8019F03C = 0x5A;
            D_sc07_002_8019F038++;
        }
        break;
    case 8:
        if (--D_sc07_002_8019F03C == -1) {
            func_sc07_002_80186758();
            func_sc07_002_801A2330();
            D_sc07_002_8019F038++;
        }
        break;
    case 9:
        break;
    }
    func_sc07_002_80180F7C(o, &a);
}

extern Lerp D_sc07_002_8018A31C[];

void func_sc07_002_801804D4(u8 *o, s32 n) {
    Lerp *g;

    D_sc07_002_8019F048 = AF(o, s32, 8);
    D_sc07_002_8019F04A = AF(o, s32, 0x10);
    *(B8 *)&D_sc07_002_8019F04C = *(B8 *)(o + 0x18);
    D_sc07_002_8019F054 = AF(o, u16, 0x28);
    D_sc07_002_8019F056 = AF(o, u16, 0x2A);
    D_sc07_002_8019F03C = 0;
    D_sc07_002_8019F05C = 0;
    D_sc07_002_8019F058 = AF(o, u16, 0x2C);
    g = D_sc07_002_8019F040 = &D_sc07_002_8018A31C[n];
    if (AF(g, s32, 0) == 1) {
        func_sc07_002_8018059C(o);
    }
}

s32 func_sc07_002_8018059C(u8 *o) {
    Lerp *g = D_sc07_002_8019F040;
    s32 n = D_sc07_002_8019F03C + 1;
    s32 t = g->n;

    AF(o, s32, 8) = AF(o, s32, 0xC) = D_sc07_002_8019F048 + (g->p.x - D_sc07_002_8019F048) * n / t;
    AF(o, s32, 0x10) = AF(o, s32, 0x14) = D_sc07_002_8019F04A + (g->p.y - D_sc07_002_8019F04A) * n / t;
    AF(o, s16, 0x18) = AF(o, s16, 0x20) = D_sc07_002_8019F04C + (g->a.x - D_sc07_002_8019F04C) * n / t;
    AF(o, s16, 0x1A) = AF(o, s16, 0x22) = D_sc07_002_8019F04E + (g->a.y - D_sc07_002_8019F04E) * n / t;
    AF(o, s16, 0x1C) = AF(o, s16, 0x24) = D_sc07_002_8019F050 + (g->a.z - D_sc07_002_8019F050) * n / t;
    AF(o, s16, 0x28) = AF(o, s16, 0x2E) = D_sc07_002_8019F054 + (g->b.x - D_sc07_002_8019F054) * n / t;
    AF(o, s16, 0x2A) = AF(o, s16, 0x30) = D_sc07_002_8019F056 + (g->b.y - D_sc07_002_8019F056) * n / t;
    D_sc07_002_8019F03C = n;
    AF(o, s16, 0x2C) = AF(o, s16, 0x32) = D_sc07_002_8019F058 + (g->b.z - D_sc07_002_8019F058) * n / t;
    if (n == g->n) {
        D_sc07_002_8019F03C = t;
        return 1;
    }
    return 0;
}

s32 func_sc07_002_801808E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = D_sc07_002_8019F05C < arg1;
    if (var_v0 != 0) {
        func_80016224(0xFF, 0);
        var_v0 = D_sc07_002_8019F05C + 1;
        D_sc07_002_8019F05C = var_v0;
    }
    return var_v0;
}

void func_sc07_002_8018092C(s32 arg0) {
    func_sc07_002_8018094C(arg0);
}

s32 func_sc07_002_8018094C(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180A0C(s32 arg0) {
    func_sc07_002_80180A2C(arg0);
}

s32 func_sc07_002_80180A2C(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180AEC(s32 arg0) {
    func_sc07_002_80180B0C(arg0);
}

s32 func_sc07_002_80180B0C(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180BCC(s32 arg0) {
    func_sc07_002_80180BEC(arg0);
}

s32 func_sc07_002_80180BEC(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180CAC(s32 arg0) {
    func_sc07_002_80180CCC(arg0);
}

s32 func_sc07_002_80180CCC(s32 arg0) {
    FeSv a;
    FeSv b;
    s32 o;

    *(B8 *)&a = *(B8 *)&D_80126940;
    o = func_8012E544(0x306);
    if (o != 0) {
        func_80015978(o + 4, (s32) &b);
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    return func_sc07_002_80181394(arg0, (s32) &a, ratan2(a.x - b.x, a.z - b.z) & 0xFFF);
}

void func_sc07_002_80180D8C(s32 arg0) {
    func_sc07_002_80180DAC(arg0);
}

void func_sc07_002_80180DAC(u8 *o) {
    FeSv a;
    FeSv b;
    s32 p;
    s16 t;
    s16 y;
    s16 h;

    *(B8 *)&a = *(B8 *)&D_80126940;
    p = func_8012E544(0x306);
    if (p != 0) {
        func_80015978(p + 4, &b);
        if (a.y >= -0x1FF) {
            a.y = -0x200;
        }
        func_80015978(p + 4, &b);
        b.y = a.y;
        t = func_80013294(&a, &b);
        t -= 0x80;
        if (t < 0) {
            t = 0;
        }
        if (t > 0x380) {
            t = 0x380;
        }
        h = t * 1000 / 896 + 0x190;
        y = t * 111 / 896 - 0x70;
        AF(o, s32, 0x14) = h;
        AF(o, s16, 0x30) = y;
    } else {
        *(B8 *)&b = *(B8 *)&D_80126940;
    }
    a.x = (a.x + b.x) / 2;
    a.z = (a.z + b.z) / 2;
    func_sc07_002_80180F7C(o, &a);
}

void func_sc07_002_80180F7C(u8 *o, u8 *p) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 *q;

    if (D_sc07_002_8019F064[0] != 0) {
        if (--D_sc07_002_8019F064[0] == 0) {
            func_sc07_002_801817E0((D_sc07_002_8019F066 >> 4) & 0xF);
        }
    }
    q = D_sc07_002_8019F060;
    switch (D_sc07_002_8019F066 & 0xF) {
    case 0:
        AF(o, s32, 8) = (s16) func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), *q);
        AF(o, s32, 0x10) = (s16) func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), *q);
        AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), *q);
        AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), *q);
        AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), *q);
        AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), D_sc07_002_8019F062);
        AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), D_sc07_002_8019F062);
        AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), D_sc07_002_8019F062);
        break;
    case 1:
        AF(o, s32, 8) = (s16) func_80012F74(AF(o, s16, 8), AF(o, s16, 0xC), *q, 1);
        AF(o, s32, 0x10) = (s16) func_80012F74(AF(o, s16, 0x10), AF(o, s16, 0x14), *q, 1);
        AF(o, s16, 0x18) = func_80012DBC(AF(o, s16, 0x18), AF(o, s16, 0x20), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1A) = func_80012DBC(AF(o, s16, 0x1A), AF(o, s16, 0x22), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1C) = func_80012DBC(AF(o, s16, 0x1C), AF(o, s16, 0x24), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x28) = func_80012F74(AF(o, s16, 0x28), AF(o, s16, 0x2E), *q, 1);
        AF(o, s16, 0x2A) = func_80012F74(AF(o, s16, 0x2A), AF(o, s16, 0x30), *q, 1);
        AF(o, s16, 0x2C) = func_80012F74(AF(o, s16, 0x2C), AF(o, s16, 0x32), *q, 1);
        break;
    case 2:
        AF(o, s32, 8) = (s16) func_800130D0(AF(o, s16, 8), AF(o, s16, 0xC), *q);
        AF(o, s32, 0x10) = (s16) func_800130D0(AF(o, s16, 0x10), AF(o, s16, 0x14), *q);
        AF(o, s16, 0x18) = func_80012DBC(AF(o, s16, 0x18), AF(o, s16, 0x20), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1A) = func_80012DBC(AF(o, s16, 0x1A), AF(o, s16, 0x22), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1C) = func_80012DBC(AF(o, s16, 0x1C), AF(o, s16, 0x24), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x28) = func_800130D0(AF(o, s16, 0x28), AF(o, s16, 0x2E), *q);
        AF(o, s16, 0x2A) = func_800130D0(AF(o, s16, 0x2A), AF(o, s16, 0x30), *q);
        AF(o, s16, 0x2C) = func_800130D0(AF(o, s16, 0x2C), AF(o, s16, 0x32), *q);
        break;
    }
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + AF(p, s16, 0);
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + AF(p, s16, 2);
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + AF(p, s16, 4);
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + AF(p, s16, 0);
    m.t[1] = AF(o, s16, 0x2A) + AF(p, s16, 2);
    m.t[2] = AF(o, s16, 0x2C) + AF(p, s16, 4);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

s32 func_sc07_002_80181394(u8 *o, u8 *p, s32 n) {
    WMtx m;
    SV8 v;
    UV4 r;
    SV8 a;
    s16 *q;

    if (D_sc07_002_8019F064[0] != 0) {
        if (--D_sc07_002_8019F064[0] == 0) {
            func_sc07_002_801817E0((D_sc07_002_8019F066 >> 4) & 0xF);
        }
    }
    q = D_sc07_002_8019F060;
    switch (D_sc07_002_8019F066 & 0xF) {
    case 0:
        AF(o, s32, 8) = (s16) func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), *q);
        AF(o, s32, 0x10) = (s16) func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), *q);
        AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), *q);
        AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), *q);
        AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), *q);
        AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), D_sc07_002_8019F062);
        AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), D_sc07_002_8019F062);
        AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), D_sc07_002_8019F062);
        break;
    case 1:
        AF(o, s32, 8) = (s16) func_80012F74(AF(o, s16, 8), AF(o, s16, 0xC), *q, 1);
        AF(o, s32, 0x10) = (s16) func_80012F74(AF(o, s16, 0x10), AF(o, s16, 0x14), *q, 1);
        AF(o, s16, 0x18) = func_80012DBC(AF(o, s16, 0x18), AF(o, s16, 0x20), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1A) = func_80012DBC(AF(o, s16, 0x1A), AF(o, s16, 0x22), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1C) = func_80012DBC(AF(o, s16, 0x1C), AF(o, s16, 0x24), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x28) = func_80012F74(AF(o, s16, 0x28), AF(o, s16, 0x2E), *q, 1);
        AF(o, s16, 0x2A) = func_80012F74(AF(o, s16, 0x2A), AF(o, s16, 0x30), *q, 1);
        AF(o, s16, 0x2C) = func_80012F74(AF(o, s16, 0x2C), AF(o, s16, 0x32), *q, 1);
        break;
    case 2:
        AF(o, s32, 8) = (s16) func_800130D0(AF(o, s16, 8), AF(o, s16, 0xC), *q);
        AF(o, s32, 0x10) = (s16) func_800130D0(AF(o, s16, 0x10), AF(o, s16, 0x14), *q);
        AF(o, s16, 0x18) = func_80012DBC(AF(o, s16, 0x18), AF(o, s16, 0x20), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1A) = func_80012DBC(AF(o, s16, 0x1A), AF(o, s16, 0x22), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x1C) = func_80012DBC(AF(o, s16, 0x1C), AF(o, s16, 0x24), D_sc07_002_8019F062, 1);
        AF(o, s16, 0x28) = func_800130D0(AF(o, s16, 0x28), AF(o, s16, 0x2E), *q);
        AF(o, s16, 0x2A) = func_800130D0(AF(o, s16, 0x2A), AF(o, s16, 0x30), *q);
        AF(o, s16, 0x2C) = func_800130D0(AF(o, s16, 0x2C), AF(o, s16, 0x32), *q);
        break;
    }
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + AF(p, s16, 0);
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + AF(p, s16, 2);
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + AF(p, s16, 4);
    a.x = AF(o, s16, 0x18);
    a.y = AF(o, s16, 0x1A) + n;
    a.z = AF(o, s16, 0x1C);
    func_sc07_002_80185848(&a, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &r);
    AF(o, s32, 0x3C) = ((s16) r.x >> 3) + AF(o, s16, 0x28) + AF(p, s16, 0);
    AF(o, s32, 0x40) = ((s16) r.y >> 3) + AF(o, s16, 0x2A) + AF(p, s16, 2);
    AF(o, s32, 0x44) = ((s16) r.z >> 3) + AF(o, s16, 0x2C) + AF(p, s16, 4);
}

extern B8 D_sc07_002_8018A2E0[];

void func_sc07_002_801817E0(s32 i) {
    *(B8 *)D_sc07_002_8019F060 = D_sc07_002_8018A2E0[i];
}

s32 func_sc07_002_80181834(s32 arg0) {
    return -(arg0 < 0x640) & 0x98;
}

void func_sc07_002_80181844(void) {
}

s32 func_sc07_002_8018184C(s32 a) {
    s32 r = 0;

    switch (a) {
    case 1:
        D_sc07_002_801A00D6 = 0x10;
        D_sc07_002_801A0044 = 0x10;
        D_sc07_002_8019FF89 = 0x10;
        break;
    case 7:
        D_sc07_002_801A00D6 = 0x10;
        D_sc07_002_801A0044 = 4;
        D_sc07_002_8019FF89 = 2;
        break;
    case 8:
        D_sc07_002_801A00D6 = 2;
        D_sc07_002_801A0044 = 0xA;
        D_sc07_002_8019FF89 = 0x10;
        break;
    case 9:
        D_sc07_002_801A00D6 = 8;
        D_sc07_002_801A0044 = 7;
        D_sc07_002_8019FF89 = 7;
        break;
    }
    if (D_sc07_002_801A0062 != D_sc07_002_801A00D6) {
        if (D_sc07_002_801A0062 < D_sc07_002_801A00D6) {
            D_sc07_002_801A0062++;
        } else {
            D_sc07_002_801A0062--;
        }
        r = 1;
    }
    if (D_sc07_002_8019FF8C != D_sc07_002_801A0044) {
        if (D_sc07_002_8019FF8C < D_sc07_002_801A0044) {
            D_sc07_002_8019FF8C++;
        } else {
            D_sc07_002_8019FF8C--;
        }
        r = 1;
    }
    if (D_sc07_002_8019FF68 != D_sc07_002_8019FF89) {
        if (D_sc07_002_8019FF68 < D_sc07_002_8019FF89) {
            D_sc07_002_8019FF68++;
        } else {
            D_sc07_002_8019FF68--;
        }
        r = 1;
    }
    if (r) {
        D_sc07_002_801A0048 = 1;
    } else {
        D_sc07_002_801A0048 = 0;
    }
    return r;
}

void func_sc07_002_801819C4(void) {
}

void func_sc07_002_801819CC(void) {
    func_8001ABBC(0, 0, (s32) &D_800AF568, 0, /* extra? */ 0);
}

void func_sc07_002_80181A00(void) {
    D_sc07_002_8019F070 = 1;
}

void func_sc07_002_80181A14(u8 *o) {
    s32 r;
    u16 v;
    s32 i;
    s32 j;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    if (AF(o, s16, 0x70) == 0) {
        D_sc07_002_8019FF8A = 0;
        D_sc07_002_8019F070 = 0;
    }
    v = AF(o, u16, 0x70);
    if (!(v & 0x100)) {
        func_8001C214(AF(o, s32, 0x20), D_sc07_002_8018A3AC[(s16)v]);
        AF(AF(o, u8 *, 0x20), s32, 0x28) = 0xB000D0;
        AF(o, s32, 0x58) = (s32)&D_sc07_002_8018A3D4 | 0x40000000;
        AF(o, u16, 0x5C) = 0xC800;
        AF(o, u8, 0x75) = 0;
        func_sc07_002_80181F98(o, D_sc07_002_80196C04 + AF(o, s16, 0x70) * 12);
        AF(o, u16, 6) += D_sc07_002_8018A3C0[AF(o, s16, 0x70) * 2];
        AF(o, u16, 0xE) += D_sc07_002_8018A3C2[AF(o, s16, 0x70) * 2];
        if (AF(o, s16, 0x70) == 0) {
            for (i = 0, j = 0; i < 0x14; i += 4, j += 8) {
                *(s32 *)((u8 *)D_sc07_002_8019F078 + j) = 0;
                *(s32 *)((u8 *)D_sc07_002_8019F074 + j) = *(s32 *)((u8 *)D_sc07_002_80196BEC + i);
            }
        }
        func_sc07_002_80181BD8(o);
        func_8012C658(0x4A, AF(o, s16, 0x70), o);
        return;
    }
    v &= 0xFF;
    AF(o, u16, 0x70) = v;
    func_8001C214(AF(o, s32, 0x20), (u8 *)D_sc07_002_8019F074 + v * 8);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    func_sc07_002_80181C80(o);
}

s32 func_sc07_002_80181BD8(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

void func_sc07_002_80181BF8(void) {
    func_80128940();
}

extern s32 func_8012C2D0();
extern s32 func_8012C890();

void func_sc07_002_80181C18(u8 *o) {
    SpawnDef d;
    s32 a;

    d.x = d.y = d.z = 0;
    d.kind = 0x306;
    d.unk8 = d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    d.unkC = 0x7FFF;
    a = func_8012C2D0();
    if (a != 0) {
        func_8012C890(&d, a, o);
    }
}

s32 func_sc07_002_80181C80(s32 arg0) {
    AF(arg0, s32, 0x1C) = (s32) (*(u16 *)&D_sc07_002_8018A3E4[(AF(arg0, s16, 0x70) * 2)]);
    return func_8012AD44(arg0, 2);
}

s32 func_sc07_002_80181CBC(s32 arg0) {
    func_sc07_002_80182940();
    return func_8012AD44(arg0, 3);
}

void func_sc07_002_80181CF0(u8 *o) {
    u16 a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0x100) += 0x40;
        if (AF(o, s32, 0xE0) > 0x80) {
            AF(o, s32, 0xE0) -= 0x10;
        }
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) > 0x300) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x40;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) = AF(AF(o, u8 *, 0x20), u16, 0x18);
            AF(AF(o, u8 *, 0x20), u16, 0x1C) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        }
        if (AF(o, s16, 0x100) > 0x1800) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(o, u16, 0x100) += 0x80;
        AF(o, s32, 0xE0) -= 4;
        AF(AF(o, u8 *, 0x20), u16, 0x18) -= 0x10;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(AF(o, u8 *, 0x20), u16, 0x1C) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        if (AF(o, s32, 0xE0) <= 0) {
            func_8012C218(o);
            return;
        }
        break;
    }
    a = AF(o, u16, 0x104) + 0x30;
    AF(o, u16, 0x104) = a;
    AF(o, s16, 0x102) = rsin((s16)a) >> 4;
    func_sc07_002_801829F0(o);
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
}

void func_sc07_002_80181E9C(u8 *arg0) {
    D_sc07_002_8018A428[AF(arg0, u16, 2)]();
}

extern u8 D_sc07_002_81196E5C;
extern void func_80132784();

void func_sc07_002_80181ED8(u8 *o) {
    s32 i;
    u8 *e;

    AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc07_002_81196E5C;
    AF(AF(o, u8 *, 0x20), s32, 0x24) = 0;
    for (i = 0; i < 5; i++) {
        e = (u8 *)func_8012C658(0x4B, i + 0x100, o);
        if (e != 0) {
            AF(e, u16, 6) = 0;
            AF(e, u16, 0xA) = 0;
            AF(e, u16, 0xE) = 0;
            func_80132784(e, o, (u16)i);
            AF(e, u16, 6) = AF(AF(e, u8 *, 0x20), s32, 0x48);
            AF(e, u16, 0xA) = AF(AF(e, u8 *, 0x20), s32, 0x4C);
            AF(e, u16, 0xE) = AF(AF(e, u8 *, 0x20), s32, 0x50);
            AF(e, s32, 0x64) = 0;
        }
    }
}

void func_sc07_002_80181F98(s32 arg0, s32 arg1) {
    AF(arg0, u16, 6) = (u16) AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = (u16) AF(arg1, u16, 4);
    AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(arg1, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg1, u16, 8);
    AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(arg1, u16, 0xA);
}

s32 func_sc07_002_80181FE8(s32 arg0) {
    AF(arg0, s32, 0x1C) = (s32) (*(u16 *)&D_sc07_002_8018A438[(AF(arg0, s16, 0x70) * 2)]);
    func_sc07_002_80182464();
    return func_8012AD44(arg0, 2);
}

s32 func_sc07_002_80182038(s32 arg0) {
    func_sc07_002_80182940();
    return func_8012AD44(arg0, 3);
}

void func_sc07_002_8018206C(u8 *o) {
    u16 a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0x100) += 0x40;
        if (AF(o, s32, 0xE0) > 0x80) {
            AF(o, s32, 0xE0) -= 0x10;
        }
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) > 0x400) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) -= 0x80;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) = AF(AF(o, u8 *, 0x20), u16, 0x18);
            AF(AF(o, u8 *, 0x20), u16, 0x1C) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        }
        if (AF(o, s16, 0x100) > 0x1800) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(o, u16, 0x100) += 0x80;
        AF(o, s32, 0xE0) -= 4;
        AF(AF(o, u8 *, 0x20), u16, 0x18) -= 0x40;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(AF(o, u8 *, 0x20), u16, 0x1C) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        if (AF(o, s32, 0xE0) <= 0) {
            func_80016714(AF(o, s32, 0xD0), 0x84);
            func_8012C218(o);
            return;
        }
        break;
    }
    a = AF(o, u16, 0x104) + 0x30;
    AF(o, u16, 0x104) = a;
    AF(o, s16, 0x102) = rsin((s16)a) >> 4;
    func_sc07_002_801829F0(o);
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
    func_sc07_002_8018247C(o);
}

void func_sc07_002_80182228(u8 *arg0) {
    D_sc07_002_8018A444[AF(arg0, u16, 2)]();
}

void func_sc07_002_80182264(s32 arg0) {
    AF(arg0, s16, 0xE4) = 0;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc07_002_80182270(u8 *o) {
    typedef struct { s16 x, y, w, h; } RECT;
    RECT r;

    if (++AF(o, s16, 0xE4) >= 0x30) {
        AF(o, s16, 0xE4) = 0;
    }
    if (AF(o, s16, 0xE4) != 0) {
        r.x = AF(o, s16, 0xE4) + 0x340;
        r.y = 0;
        r.w = 0x30 - AF(o, s16, 0xE4);
        r.h = 0x80;
        MoveImage(&r, 0x340, 0x80);
        r.x = 0x340;
        r.w = AF(o, s16, 0xE4);
        MoveImage(&r, 0x370 - AF(o, s16, 0xE4), 0x80);
    } else {
        r.x = 0x340;
        r.w = 0x30;
        r.y = 0;
        r.h = 0x80;
        MoveImage(&r, 0x340, 0x80);
    }
    if (--AF(o, s16, 0xE6) < 0) {
        AF(o, s16, 0xE6) += 0x10;
    }
    if (AF(o, s16, 0xE6) != 0) {
        r.x = AF(o, s16, 0xE6) + 0x2F0;
        r.y = 0x100;
        r.w = 0x10 - AF(o, s16, 0xE6);
        r.h = 0x40;
        MoveImage(&r, 0x2F0, 0x140);
        r.x = 0x2F0;
        r.w = AF(o, s16, 0xE6);
        MoveImage(&r, 0x300 - AF(o, s16, 0xE6), 0x140);
    } else {
        r.x = 0x2F0;
        r.y = 0x100;
        r.w = 0x10;
        r.h = 0x40;
        MoveImage(&r, 0x2F0, 0x140);
    }
}

s32 func_sc07_002_8018241C(s32 arg0) {
    s32 temp_v0;
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xE8) + 0x30;
    AF(arg0, u16, 0xE8) = temp_a0;
    temp_v0 = rsin((s32) (s16) temp_a0) >> 8;
    AF(arg0, s16, 0x52) = (s16) temp_v0;
    return temp_v0;
}

extern s32 D_test;

void func_sc07_002_80182464(u8 *o) {
    AF(o, u16, 0xA) += AF(o, u16, 0x52);
    AF(o, u16, 0x52) = 0;
}

void func_sc07_002_8018247C(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0xD0);
    if (temp_a1 != NULL) {
        AF(temp_a1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_a1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(arg0, u16, 0x52));
        AF(temp_a1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        AF(temp_a1, u16, 0x10) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
        AF(temp_a1, u16, 0x12) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
        AF(temp_a1, u16, 0x14) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x14);
        AF(temp_a1, u16, 0x18) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        AF(temp_a1, u16, 0x1A) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1A);
        AF(temp_a1, u16, 0x1C) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x1C);
    }
}

void func_sc07_002_80182538(u8 *o) {
    s32 p;

    p = func_80132EF4(o, 0x72);
    if (p != 0) {
        AF(p, s16, 6) += rand() % 96 - 0x30;
        AF(p, s16, 0xA) += AF(o, s16, 0x52) + 0x80;
        AF(p, s16, 0xE) += rand() % 96 - 0x30;
    }
}

s32 func_sc07_002_8018260C(s32 arg0) {
    AF(arg0, s32, 0x1C) = (s32) (*(u16 *)&D_sc07_002_8018A464[(AF(arg0, s16, 0x70) * 2)]);
    return func_8012AD44(arg0, 2);
}

s32 func_sc07_002_80182648(s32 arg0) {
    func_sc07_002_80182940();
    return func_8012AD44(arg0, 3);
}

void func_sc07_002_8018267C(u8 *o) {
    u16 a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, u16, 0x100) += 0x40;
        if (AF(o, s32, 0xE0) > 0x80) {
            AF(o, s32, 0xE0) -= 0x10;
        }
        if (AF(o, s16, 0x100) > 0x1800) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(o, u16, 0x100) += 0x80;
        AF(o, s32, 0xE0) -= 4;
        AF(AF(o, u8 *, 0x20), u16, 0x18) -= 0x40;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(AF(o, u8 *, 0x20), u16, 0x1C) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        if (AF(o, s32, 0xE0) <= 0) {
            func_8012C218(o);
            return;
        }
        break;
    }
    a = AF(o, u16, 0x104) + 0x30;
    AF(o, u16, 0x104) = a;
    AF(o, s16, 0x102) = rsin((s16)a) >> 4;
    func_sc07_002_801829F0(o);
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
}

void func_sc07_002_801827DC(u8 *arg0) {
    D_sc07_002_8018A484[AF(arg0, u16, 2)]();
}

extern void RotMatrixZYX();

void func_sc07_002_80182818(u8 *o) {
    SV8 v;
    WMtx m;
    s32 flag;

    v.x = 0;
    v.y = AF(o, u16, 0xE4);
    v.z = AF(o, u16, 0xE6);
    RotMatrixZYX(&v, &m);
    m.t[0] = AF(AF(o, u8 *, 0x64), s16, 6);
    m.t[1] = AF(AF(o, u8 *, 0x64), s16, 0xA) + AF(AF(o, u8 *, 0x64), s16, 0x52);
    m.t[2] = AF(AF(o, u8 *, 0x64), s16, 0xE);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.x = v.y = 0;
    v.z = 0xA0;
    RotTransSV(&v, &v, &flag);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
}

void func_sc07_002_801828FC(void) {
}

void func_sc07_002_80182904(u8 *arg0) {
    D_sc07_002_8018A4A0[AF(arg0, u16, 2)]();
}

extern u8 * func_sc07_002_80182AD4();
extern s32 func_8012B6D4();
extern s32 func_8012BC60();
extern s32 SquareRoot0();
extern s32 rsin();
extern s32 rand();

void func_sc07_002_80182940(u8 *o) {
    u8 *p;
    s32 a;

    p = func_sc07_002_80182AD4(o);
    AF(o, u8 *, 0xCC) = p;
    if (p != 0) {
        AF(o, s16, 0x100) = func_8012B6D4(p + 4, o + 4);
        a = rand() & 0xFFF;
        AF(o, s16, 0x104) = a;
        AF(o, s16, 0x102) = rsin(a) >> 4;
        AF(o, s32, 0xE0) = SquareRoot0(func_8012BC60(p + 4, o + 4));
        AF(o, s16, 0xFE) = -(rand() & 0x1F);
        AF(o, s16, 0x106) = rand() & 0xF0;
        AF(o, s16, 0x108) = rand() & 0xF0;
    }
}

void func_sc07_002_801829F0(u8 *o) {
    WMtx m;
    SV8 v;
    s32 flag;
    u8 *p;

    p = AF(o, u8 *, 0xCC);
    if (p != 0) {
        v.x = 0;
        v.y = AF(o, u16, 0x100);
        v.z = AF(o, u16, 0x102);
        RotMatrixZYX(&v, &m);
        m.t[0] = AF(p, s16, 6);
        m.t[1] = AF(p, s16, 0xA);
        m.t[2] = AF(p, s16, 0xE);
        v.x = 0;
        v.y = AF(o, u16, 0xFE);
        v.z = -AF(o, s32, 0xE0);
        SetRotMatrix(&m);
        SetTransMatrix(&m);
        RotTransSV(&v, &v, &flag);
        AF(o, s16, 6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
    }
}

u8 *func_sc07_002_80182AD4(void) {
    s32 i;
    u8 *p;

    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x306) {
            return p;
        }
    }
    return 0;
}

void func_sc07_002_80182B10(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x70) == 0 && D_sc07_002_8019F070 != 0) {
            func_80178B18(o, &D_sc07_002_8018A418);
            AF(o, s16, 0xF6) = 0xFF;
            func_80016450(0xFF, 1);
            func_sc07_002_80184C70();
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, u16, 0x34)++;
            func_sc07_002_80181C18(o);
        }
        func_80016450(AF(o, u8, 0xF6), 1);
        break;
    case 2:
        break;
    }
    if (D_sc07_002_8019FF8A & 0x4000) {
        func_sc07_002_80181ED8(o);
        func_8012C218(o);
    }
}

void func_sc07_002_80182C18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0x52) = (s16) (((rand(arg0, arg1, arg2, arg3) & 3) * 2) - 3);
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_002_80181CBC(arg0);
    }
}

void func_sc07_002_80182C68(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_002_80197494);
    AF(temp_v0, s16, 0x1C) = 0x3000;
    AF(temp_v0, s16, 0x1A) = 0x3000;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0xA) = -0x340;
    if (AF(arg0, s16, 0x70) == 0) {
        func_sc07_002_80182264((s32) arg0);
    }
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xD0) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_8001C214(temp_v0_2, (s32) &D_sc07_002_80197B04);
        AF(temp_v0_2, u16, 0x2C) = (u16) (AF(temp_v0_2, u16, 0x2C) | 0x10);
        temp_v0_3 = AF(AF(arg0, s32, 0x20), u16, 0x18);
        AF(temp_v0_2, u16, 0x1C) = temp_v0_3;
        AF(temp_v0_2, u16, 0x1A) = temp_v0_3;
        AF(temp_v0_2, u16, 0x18) = temp_v0_3;
    }
    func_8012AD50((s32) arg0);
}

void func_sc07_002_80182D50(u8 *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 0x20);
    func_sc07_002_8018247C((s32) arg0, arg1);
    if (AF(arg0, s16, 0x70) == 0) {
        func_sc07_002_80182270((s32) arg0);
    }
    func_sc07_002_8018241C((s32) arg0);
    if (!(D_800B99DA & 3)) {
        func_sc07_002_80182538((s32) arg0);
    }
    if (D_sc07_002_8019FF8A & 0x4000) {
        func_sc07_002_80181FE8((s32) arg0);
    }
}

void func_sc07_002_80182DF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0x52) = (s16) (((rand(arg0, arg1, arg2, arg3) & 3) * 2) - 3);
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_002_80182038(arg0);
    }
    func_sc07_002_8018247C(arg0);
}

extern u8 D_sc07_002_80197C64;
extern u16 D_sc07_002_8018A454[];
extern u16 D_sc07_002_8018A45C[];

void func_sc07_002_80182E48(u8 *o) {
    s32 r;
    s16 i;
    u16 a;

    r = func_8012C1B8();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, &D_sc07_002_80197C64);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    i = (s16)AF(o, u16, 0x70) % 3;
    a = D_sc07_002_8018A454[i];
    AF(o, u16, 0xE6) = a;
    AF(o, u16, 0xE4) = a + AF(AF(o, u8 *, 0x64), s16, 0x70) * 0x300;
    AF(o, u16, 0xE8) = D_sc07_002_8018A45C[i];
    func_8012AD50(o);
}

void func_sc07_002_80182F2C(u8 *o) {
    func_sc07_002_80182818(o);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x80;
    ((u16 *)o)[0x72] += ((u16 *)o)[0x74];
    if (D_sc07_002_8019FF8A & 0x4000) {
        func_sc07_002_8018260C(o);
    }
}

void func_sc07_002_80182F94(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 0x52) = (s16) (((rand(arg0, arg1, arg2, arg3) & 3) * 2) - 3);
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_002_80182648(arg0);
    }
}

extern u8 D_sc07_002_8018A494[];
extern void func_8001CC3C();

void func_sc07_002_80182FE4(u8 *o) {
    func_8001CC3C(AF(o, u8 *, 0x20), D_sc07_002_8018A494, 0x240, 0xE0);
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x58000000;
    AF(AF(o, u8 *, 0x20), u16, 0x18) = AF(AF(o, u8 *, 0x20), u16, 0x1A) = (rand() & 0x3F0) + 0x600;
    AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x79;
    AF(o, s32, 0x14) = 0x80000;
    AF(o, s32, 0x1C) = 0xC;
    AF(o, u16, 2)++;
}

void func_sc07_002_80183078(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        func_8012931C();
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x40);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc07_002_801830D8(u8 *o) {
    Spawn s;
    s16 i;

    for (i = 0; i < 0x39; i++) {
        *(struct Blk_s *)&D_sc07_002_8019F0F0[i * 56] = D_sc07_002_8018A4F0;
    }
    s.p.pad = 0x352;
    D_sc07_002_8019FD68 = 0;
    *(u16 *)&s.q.x = 0xFFFF;
    s.q.y = 0;
    s.q.z = 0;
    if ((u32)func_80029504() < 0x640) {
        s.q.pad = 0;
        func_8002D4C8(0xBA7, 0);
    } else {
        s.q.pad = 1;
    }
    s.n = 0;
    s.p.x = AF(o, s16, 6);
    s.p.y = -0x208;
    s.p.z = AF(o, s16, 0xE);
    func_8012C51C(&s, o);
}

void func_sc07_002_801831FC(u8 *o) {
    Spawn s;
    s16 i;
    s16 *q;
    u8 *w;
    s32 f;
    u8 **dp;

    if (AF(o, s16, 0x70) < 0) {
        s.p.pad = 0x352;
        s.q.y = 0;
        s.q.z = 0;
        s.n = AF(o, s16, 0xFC);
        s.p.x = AF(o, s16, 6);
        s.p.y = -0x208;
        s.p.z = AF(o, s16, 0xE);
        for (i = 0; i < 0x13; i++) {
            s.q.x = i;
            s.q.pad = D_sc07_002_8019FD68++;
            func_8012C51C(&s, o);
        }
        if (AF(o, s16, 0x10A) == 0) {
            dp = &D_sc07_002_80197DCC;
            GsMapModelingData(*dp);
            func_80132288(&D_sc07_002_8019F0E0, &D_sc07_002_8018A4B4, *dp);
        }
        q = (s16 *)(o + 0xF0);
        if (AF(o, s16, 0xFC) == 0) {
            q[AF(o, s16, 0x10A) * 2 + 1] = 0x38;
            q[AF(o, s16, 0x10A) * 2] = 0x600;
        } else {
            q[AF(o, s16, 0x10A) * 2 + 1] = 0x38;
            q[AF(o, s16, 0x10A) * 2] = 0x200;
        }
        AF(o, s16, 2) = 1;
    } else {
        f = func_8012C1B8();
        AF(o, s32, 0x20) = f;
        if (f == 0) {
            func_8012CAE4(o);
            return;
        }
        func_8001C214(f, &D_sc07_002_80197DCC);
        func_8001D0E8(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
        SetScript(o, &D_sc07_002_80186B14);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0xA0;
        AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc07_002_8019F0F0[AF(o, s16, 0xFC) * 56];
        i = 0x200;
        if (AF(o, s32, 0xDC) == 0) {
            i = 0x600;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = i;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x70) * 227;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 2) = 2;
    }
}

void func_sc07_002_80183458(u8 *o) {
    SV8 v;
    SV8 n;
    WMtx m;
    s32 t;
    s16 c;
    s32 snd;
    u8 col;
    s16 *tp;
    s16 *ap;
    s32 e2;
    u8 *p;
    s16 *q;
    s16 i;
    s16 rr;
    s16 x;
    s16 z;
    s16 dx;
    s16 dz;
    s32 a;
    s32 b;
    s32 e;
    u8 *w;
    s16 h;

    t = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = t;
    if (t < 0x70) {
        if (t == 0x1C || t == 0x38) {
            c = AF(o, s16, 0x10A);
            if (c < 2) {
                AF(o, s16, 0x10A) = c + 1;
                func_sc07_002_801831FC(o);
                func_8013C9C4(&D_sc07_002_8018A4DC);
                if (AF(o, s16, 0xFC) == 0) {
                    AF(o, s16, 0x10A)++;
                    func_8002D4C8(0xBA8, 0);
                } else {
                    func_8002D4C8(0xBD0, 0);
                }
            }
        }
        q = (s16 *)(o + 0xF0);
        func_8013240C(&D_sc07_002_8019F0E0);
        col = 0x38 - (AF(o, s32, 0x1C) & 7) * 8;
        p = AF(D_sc07_002_80197DCC, u8 *, 0x1C);
        p[0x4] = p[0x8] = p[0x24] = p[0x2C] = p[0x84] = p[0x8C] = col + 0x40;
        p[0xC] = p[0x10] = p[0x28] = p[0x30] = p[0x44] = p[0x48] = p[0x64] = p[0x6C] = p[0x88] = p[0x90] = p[0xA4] = p[0xAC] = col + 0x20;
        p[0x4C] = p[0x50] = p[0x68] = p[0x70] = p[0xA8] = p[0xB0] = col;
        for (i = 0; i < 6; i += 2) {
            tp = &q[i + 1];
            ap = &q[i];
            if (*tp != 0) {
                if (--*tp >= 0x30) {
                    *ap += 0x20;
                } else {
                    *ap += 0x80;
                }
                rr = rand();
                m.m[0][0] = m.m[2][2] = *ap;
                m.m[1][1] = 0x1000;
                v.x = 0x9C;
                v.y = m.m[0][1] = m.m[0][2] = m.m[1][0] = m.m[1][2] = m.m[2][0] = m.m[2][1] = 0;
                v.z = 0x372;
                RotMatrixY(rr & 0xFFF, &m);
                ApplyMatrixSV(&m, &v, &v);
                x = v.x + AF(o, s16, 6);
                z = v.z + AF(o, s16, 0xE);
                if (x * x + z * z < 0xE1000) {
                    VectorNormalSS(&v, &n);
                    e = func_80132EF4(o, 0x22);
                    if (e != 0) {
                        AF(e, s16, 0xA) = -0x220;
                        AF(e, s16, 6) = x;
                        AF(e, s16, 0xE) = z;
                        w = AF(e, u8 *, 0x20);
                        AF(w, s16, 0x18) = AF(w, s16, 0x1A) = AF(w, s16, 0x1C) = 0x5000;
                        AF(e, s32, 0x10) = n.x << 7;
                        AF(e, s32, 0x18) = n.z << 7;
                        AF(e, s32, 0x14) = 0xFFF90000;
                    }
                    e2 = func_8012C658(0x376, 1, o);
                    if (e2 != 0) {
                        AF(e2, s16, 6) = x;
                        AF(e2, s16, 0xA) = -0x202;
                        AF(e2, s16, 0xE) = z;
                        func_8012B2CC(e2);
                        w = AF(e2, u8 *, 0x20);
                        h = (rr >> 4) + 0xC00;
                        AF(w, s16, 0x18) = AF(w, s16, 0x1A) = AF(w, s16, 0x1C) = h;
                        AF(e2, s32, 0x10) = n.x << 8;
                        AF(e2, s32, 0x18) = n.z << 8;
                        AF(e2, s32, 0x48) = 0xFFFE0000;
                        AF(e2, s32, 0x1C) = 0xF;
                    }
                }
                a = v.x * v.x + v.z * v.z;
                dx = D_80126B5E - AF(o, u16, 6);
                dz = D_80126B66 - AF(o, u16, 0xE);
                b = dx * dx + dz * dz;
                if (b < a) {
                    a = SquareRoot0(a);
                    b = SquareRoot0(b);
                    if (a - 0x60 < b && D_80126B62 >= -0x23F) {
                        D_80126B96 = 0x401B;
                        D_80126B94 |= 1;
                        D_80126B9A = func_8012B864(o);
                        D_80126B98 = 0x64;
                    }
                }
            }
        }
    } else {
        func_8012C218(o);
    }
}

void func_sc07_002_801838FC(u8 *o) {
    SV8 v;
    u8 *w;
    s32 d;
    s32 e;
    s16 n;
    u8 *p;

    AF(o, s32, 0x1C)--;
    w = AF(o, u8 *, 0x20);
    AF(w, s16, 0x18) = AF(w, s16, 0x1C) = AF(w, s16, 0x1C) + 0x80;
    if (AF(o, s16, 0x108) == 0) {
        v.x = 0x9C;
        v.y = 0;
        v.z = 0x372;
        ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, &v, &v);
        v.x += AF(o, s16, 6);
        v.z += AF(o, s16, 0xE);
        d = v.x * v.x + v.z * v.z;
        if (d > 0xD23FF) {
            e = SquareRoot0(d) - 0x3A0;
            if (e >= 0x80) {
                func_8012C218(o);
                return;
            }
            n = 0xFF - e * 2;
            p = &D_sc07_002_8019F0F0[AF(o, s16, 0xFC) * 56];
            AF(p, s16, 0x30) = AF(p, s16, 0x32) = AF(p, s16, 0x34) = n;
        }
    }
    if (AF(o, s32, 0x1C) == 0) {
        func_8012C218(o);
    }
}

void func_sc07_002_80183A34(u8 *arg0) {
    D_sc07_002_8018A528[AF(arg0, u16, 2)]();
}

void func_sc07_002_80183A70(u8 *arg0) {
    D_sc07_002_8018A53C[AF(arg0, u16, 2)]();
}

void func_sc07_002_80183AAC(u8 *o) {
    s32 f;
    s32 v;
    s32 r;
    s32 t;
    s32 s;
    s32 k;
    s16 *p;
    u8 unused[8];

    f = func_8012C1B8();
    if (f == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, s32, 0x20) = f;
    func_8001C214(f, 0);
    v = rand();
    r = (s16) v;
    AF(f, u16, 0x2C) |= 0x10;
    t = r % 0x180 + 0x400;
    AF(f, s16, 0x18) = AF(f, s16, 0x1A) = AF(f, s16, 0x1C) = t;
    s = -1;
    if (v & 1) {
        s = 1;
    }
    AF(f, s16, 0x10) = s * (r % 128) - 0x300;
    AF(f, s16, 0x12) = rand() % 4096;
    AF(o, s32, 0x48) = 0xC000;
    AF(o, s16, 0xA) -= 0x19;
    func_8012B2CC(o);
    func_8012B178(o, -0x80000 - ((r % 8) << 16));
    AF(o, s32, 0x1C) = 0x3C;
    AF(o, s16, 0xFE) = rand() & 0xF0;
    AF(o, s16, 0x100) = rand() & 0x1F0;
    AF(o, s16, 0x102) = rand() & 0x30;
    p = (s16 *)(o + 0xDC);
    k = rand() % 12;
    p[0] = ((rand() & 1) ? k : -k) - 0x18;
    p[1] = 0;
    k = rand() % 12;
    p[2] = ((rand() & 1) ? k : -k) - 0x18;
    p += 4;
    k = rand() % 12;
    p[0] = ((rand() & 1) ? k : -k) + 0x18;
    p[1] = 0;
    k = rand() % 12;
    p[2] = ((rand() & 1) ? k : -k) - 0x18;
    p += 4;
    k = rand() % 12;
    p[0] = ((rand() & 1) ? k : -k) - 0x18;
    p[1] = 0;
    k = rand() % 12;
    p[2] = ((rand() & 1) ? k : -k) + 0x18;
    p += 4;
    k = rand() % 12;
    p[0] = ((rand() & 1) ? k : -k) + 0x18;
    p[1] = 0;
    k = rand() % 12;
    p[2] = ((rand() & 1) ? k : -k) + 0x18;
    AF(o, s16, 0x104) = (rand() % 4) << 5;
    AF(o, s16, 0x106) = (rand() % 8) << 5;
    AF(o, u16, 2)++;
}

extern s32 func_8012CBF4();
extern void func_8012AD80();
void func_sc07_002_80183FE0(u8 *o);

void func_sc07_002_80183F28(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0xFE);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0x100);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x102);
    if (func_8012BEE8(o) != 0) {
        func_8012C218(o);
        return;
    }
    if (AF(o, s16, 0x70) == 0) {
        if (func_8012CBF4(o) != 0) {
            func_8012C218(o);
            return;
        }
    } else {
        func_8012AD80(o);
    }
    func_sc07_002_80183FE0(o);
}

void func_sc07_002_80183FE0(u8 *o) {
    WMtx m;
    s32 flag;
    s32 flag2;
    s32 otz;
    u8 *p;
    u32 *ot;
    WMtx *wm;
    u8 *vp;
    u32 x;
    u16 y;
    u32 ty;
    u16 tp;
    s32 t;
    s32 z;

    vp = o + 0xDC;
    ot = g_WorldOtTable[D_800B9A02[0]];
    p = g_PrimNext;
    g_PrimNext = p + 0x28;
    p[3] = 9;
    AF(p, s32, 4) = 0x808080;
    p[7] = 0x2C;
    wm = (WMtx *)&D_800AF648;
    gte_SetRotMatrix(wm);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x34);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x36);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(AF(o, u8 *, 0x20) + 0x38);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    gte_SetTransMatrix(wm);
    gte_ldlv0(AF(o, u8 *, 0x20) + 0x48);
    gte_rtv0tr();
    gte_stlvnl(&m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv3(vp, vp + 8, vp + 0x10);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(p + 8, p + 0x10, p + 0x18);
    gte_ldv0(vp + 0x18);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(p + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if ((flag & ~0x1000) == 0) {
        x = AF(o, u16, 0x104) + 0x140;
        y = AF(o, u16, 0x106);
        AF(p, u16, 0xE) = 0x7800;
        ty = y & 0x100;
        tp = 0x80 | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        t = tp;
        AF(p, u16, 0x16) = t;
        t = (t & 0xF) * 64;
        x -= t;
        x <<= 1;
        p[0xC] = x;
        t = y;
        if (tp & 0x10) {
            t -= 0x100;
        }
        p[0xD] = t;
        p[0x14] = p[0xC] + 0x1F;
        p[0x15] = p[0xD];
        p[0x1C] = p[0xC];
        p[0x1D] = p[0xD] + 0x1F;
        p[0x24] = p[0x14];
        p[0x25] = p[0x1D];
        z = otz + 1;
        if (z >= 0x1000) {
            z = 0x1000;
        }
        ((PTag *)p)->addr = ((PTag *)&ot[z])->addr;
        ((PTag *)&ot[z])->addr = (u32)p;
    }
}

void func_sc07_002_8018439C(u8 *arg0) {
    s32 temp_v1;
    u16 temp_v0;
    void *temp_v1_2;

    temp_v1 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    AF(AF(arg0, void *, 0x20), u16, 0x1A) = D_sc07_002_8018A4CC[(7 - temp_v1)];
    temp_v1_2 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1_2, u16, 0x1C) + 0x20;
    AF(temp_v1_2, u16, 0x1C) = temp_v0;
    AF(temp_v1_2, u16, 0x18) = temp_v0;
    if (AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, s32, 0x1C) = 0x30;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc07_002_80184410(u8 *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x94);
    if ((D_sc07_002_8019F0EC & 0x4000) && (AF(arg0, s32, 0x64) != 0)) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc07_002_80184470(u8 *arg0) {
    D_sc07_002_8018A544[AF(arg0, u16, 2)]();
}

void func_sc07_002_801844AC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

extern u16 D_800B9AB8;
extern s16 D_800B9ABA;
extern s32 func_8012A758();
extern s32 func_8012A68C();

void func_sc07_002_801844D8(void) {
    s32 t;
    s16 a;
    s16 b;
    s16 v;

    t = func_80029504();
    a = func_8012A758();
    b = func_8012A68C();
    if (t < 0x640) {
        D_800B9AB8 = a * 0x140 / 0x1000;
        v = -(b * 15) * 16 / 682;
        if (v < 0) {
            v = 0;
        }
        D_800B9ABA = v;
    }
}

void func_sc07_002_80184594(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc07_002_8019FE84;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc07_002_801845B8(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc07_002_80184658(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc07_002_80184774(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc07_002_80184658(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc07_002_8019FE7C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc07_002_8019FE80 = (s16) arg1;
    D_sc07_002_8019FE82 = (s16) arg2;
    D_sc07_002_8019FE7E = temp_v0;
    return (s32) temp_v0;
}

void func_sc07_002_80184688(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc07_002_8019FE7C = sp10[0];
    D_sc07_002_8019FE7E = sp10[1];
}

void func_sc07_002_80184700(s32 arg0) {
    s16 *p = &D_sc07_002_8019FE82;
    *p += arg0;
}

void func_sc07_002_8018471C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc07_002_80184848();
    if (temp_v0 >= 0) {
        func_sc07_002_80184774(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc07_002_80184774(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc07_002_8019FE84 + arg0 * 14);
    e->a = arg1[0];
    e->c0 = *(struct C8E8 *)arg2;
    e->c0.cd = 0;
    e->c1 = *(struct C8E8 *)arg3;
    e->c1.cd = 0;
    e->y = arg1[1] + (rand() & 0x3F) - 0x20;
    e->z = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->c0.cd = 1;
        e->c1.cd = e->z;
        e->z = 0;
    }
}

s32 func_sc07_002_80184848(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc07_002_8019FE84)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc07_002_80184884(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc07_002_8019FE84, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc07_002_801848D0(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc07_002_8019FE84, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc07_002_801849AC(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc07_002_801849AC(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = D_800AE620;
    p = g_PrimNext;
    g_PrimNext = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc07_002_8019FE84 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc07_002_8019FE7C;
    cy = D_sc07_002_8019FE7E;
    RotMatrixZ(D_sc07_002_8019FE82, &m);
    s.x = s.y = s.z = D_sc07_002_8019FE80;
    ScaleMatrix(&m, &s);
    v.x = AF(r, u16, 0);
    v.y = v.z = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cy + o.y;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.x;
    AF(p, u16, 0x1A) = cy + o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc07_002_80184C70(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc07_002_8019FD7C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc07_002_80184C94(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc07_002_80184CBC((s32) &sp10);
}

s32 func_sc07_002_80184CBC(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc07_002_8019A3A8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc07_002_80184D44((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc07_002_80184D44(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc07_002_80184DB0(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc07_002_80184EE4(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc07_002_80184DB0(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc07_002_8019FD70.a = p[0];
        D_sc07_002_8019FD70.b = p[1];
    } else {
        D_sc07_002_8019FD70.a = 0;
        D_sc07_002_8019FD70.b = 0;
    }
    D_sc07_002_8019FD78 = c[0];
    D_sc07_002_8019FD79 = c[1];
    D_sc07_002_8019FD7A = c[2];
    AF(&D_sc07_002_8019FD70, s32, 4) = g << 16;
}

void func_sc07_002_80184E20(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    func_80015978(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc07_002_8019FD70.a = sp10[0];
    D_sc07_002_8019FD70.b = sp10[1];
}

void func_sc07_002_80184E98(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc07_002_80185000();
    if (temp_v0 >= 0) {
        func_sc07_002_80184EE4(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc07_002_80184EE4(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc07_002_8019FD70.pts[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->ang = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->ang) * m) >> 12;
    vz = (rsin(p->ang) * m) >> 12;
    p->x = vx << 16;
    p->z = vz << 16;
    p->active = (rand() & 0xF) + 0x10;
    p->y = m << 6;
    gg = D_sc07_002_8019FD70.g;
    p->dy = gg << 6;
}

s32 func_sc07_002_80185000(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc07_002_8019FD7C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc07_002_8018503C(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc07_002_8019FD76;
    p = (Pt16 *)&D_sc07_002_8019FD7C;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc07_002_80185150(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc07_002_80185150(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    Pt16 *r;
    u16 cx;
    u16 cz;

    p = g_PrimNext;
    m = D_800AE620;
    g_PrimNext = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc07_002_8019FD78;
    AF(p, u8, 5) = D_sc07_002_8019FD79;
    AF(p, u8, 6) = D_sc07_002_8019FD7A;
    r = (Pt16 *)&D_sc07_002_8019FD7C + i;
    cx = AF(r, u16, 0xA) + D_sc07_002_8019FD70.a;
    cz = AF(r, u16, 0xE) + D_sc07_002_8019FD70.b;
    RotMatrixZ(r->ang, &m);
    s.x = r->y;
    s.y = r->y;
    s.z = r->y;
    ScaleMatrix(&m, &s);
    v.x = r->active;
    v.y = v.z = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.x >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.y >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.x >> 1);
    AF(p, u16, 0xE) = cz - (o.y >> 1);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cz + o.y;
    if (r->active & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.x = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.x;
    AF(p, u16, 0x12) += o.y;
    ((PTag *)p)->addr = ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&D_800A651C[D_800B9A02[0]].ot[16])->addr = (u32)p;
    func_80016638(&D_800A6518[D_800B9A02[0]], 0x10, 1);
}

void func_sc07_002_80185434(u8 *o) {
    SV8 v[4];
    SMtx m;
    s32 pp;
    s32 flag;
    u32 *ot;
    u8 *p;
    u8 *t;
    s32 z;
    u16 w;

    ot = g_WorldOtTable[D_800B9A02[0]];
    w = AF(o, u16, 6);
    if (w == 0) return;
    v[0].x = 0;
    v[0].y = -(AF(o, u16, 0x18) >> 1);
    v[0].z = 0;
    v[1].x = 0;
    v[1].y = AF(o, u16, 0x18) >> 1;
    v[1].z = 0;
    v[2].x = w;
    v[2].y = -(AF(o, u16, 0x1A) >> 1);
    v[2].z = 0;
    v[3].x = w;
    v[3].y = AF(o, u16, 0x1A) >> 1;
    v[3].z = 0;
    RotMatrixZYX(o + 8, &m);
    m.t[0] = AF(o, s16, 0);
    m.t[1] = AF(o, s16, 2);
    m.t[2] = AF(o, s16, 4);
    p = AllocPrim(0x24);
    AF(p, s32, 4) = AF(o, s32, 0x10);
    AF(p, s32, 0xC) = AF(o, s32, 0x10);
    AF(p, s32, 0x14) = AF(o, s32, 0x14);
    AF(p, s32, 0x1C) = AF(o, s32, 0x14);
    p[3] = 8;
    p[7] = 0x38;
    func_80017E8C(&m);
    z = RotTransPers4(&v[0], &v[1], &v[2], &v[3], p + 8, p + 0x10, p + 0x18, p + 0x20, &pp, &flag);
    if (flag & ~0x1000) return;
    z++;
    if ((u32)z >= 0x1000) return;
    ((PTAG *)p)->addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    if (AF(o, u32, 0x1C) & 0x40000000) {
        p[7] |= 2;
        t = AllocPrim(8);
        t[3] = 1;
        AF(t, u32, 4) = 0xE1000200 | ((AF(o, u32, 0x1C) >> 23) & 0x60);
        ((PTAG *)t)->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

void func_sc07_002_80185684(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc07_002_801856E8((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc07_002_801856E8(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc07_002_80185AE8(a);
    s = func_sc07_002_80185A2C(a);
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

void func_sc07_002_80185848(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc07_002_80185AE8(r[0] & 0xFFF);
    cx = func_sc07_002_80185A2C(r[0] & 0xFFF);
    sy = func_sc07_002_80185AE8(r[1] & 0xFFF);
    cy = func_sc07_002_80185A2C(r[1] & 0xFFF);
    sz = func_sc07_002_80185AE8(r[2] & 0xFFF);
    cz = func_sc07_002_80185A2C(r[2] & 0xFFF);
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

s32 func_sc07_002_80185A2C(u32 a) {
    if (a < 0x400) {
        return D_sc07_002_80197F84[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc07_002_80197F84[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc07_002_80197F84[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc07_002_80197F84[0xFFF - a];
    }
}

s32 func_sc07_002_80185AE8(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc07_002_80197F84[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc07_002_80197F84[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc07_002_80197F84[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc07_002_80197F84[a - 0xC00];
    }
}

void func_sc07_002_80185B94(u8 *arg0) {
    D_sc07_002_801987F8[AF(arg0, u16, 2)]();
}

void func_sc07_002_80185BD0(s32 arg0) {
    func_sc07_002_80185C00();
    func_80146CA0(arg0);
}

extern u8 D_80062C14[];
extern u8 D_sc07_002_80198784[];
extern u8 D_sc07_002_80198808[];
extern void func_801511E0();
extern void func_80154274();
extern void func_8001382C();
extern void func_80146DB8();

void func_sc07_002_80185C00(u8 *o) {
    V3 pos;

    StartRumbleScript(D_80062C14);
    func_801511E0(o);
    func_80154274(o, D_sc07_002_80198784);
    func_80146E90(o, 0x20);
    func_8001382C(AF(o, s16, 0x42), D_sc07_002_80198808, &pos);
    func_80146DB8(o, &pos);
    func_801477E8(o, 0xFFF00000);
    func_80149020(o);
    func_80147324(0x451);
    func_80146CA0(o);
}

void func_sc07_002_80185C9C(s32 arg0, s32 arg1) {
    s32 pad[8];
    func_80149020(arg0, arg1);
    func_80147F50(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x18000);
    func_80147460(arg0);
    if (!(D_800B99DA & 1)) {
        func_8014C010(arg0, 2);
    }
    if ((func_801535F4(arg0) == 4) || (func_80146E98(arg0) != 0)) {
        func_801477E8(arg0, 0x40000);
        func_80146CA0(arg0);
    }
}

void func_sc07_002_80185D40(u8 *o) {
    s32 pad[8];
    func_80149020(o);
    func_80148038(o, 0x18000);
    func_80147460(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    switch (func_801535F4(o)) {
    case 1:
        func_sc07_002_80185E48(o);
        func_80159B3C(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc07_002_80185E48(o);
        func_8015BF48(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
        break;
    }
}

s32 func_sc07_002_80185E48(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc07_002_80185E90(u8 *arg0) {
    if ((u16) AF(arg0, u16, 2) < 3U) {
        StartRumbleScript((s32) &D_sc07_002_80198818);
    }
    D_sc07_002_80198988[AF(arg0, u16, 2)](arg0);
    D_8011DB0C = 0;
}

void func_sc07_002_80185F04(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc07_002_80185F4C(arg0);
    func_80146CA0(arg0);
}

extern u8 D_sc07_002_80198864;

void func_sc07_002_80185F4C(u8 *o) {
    func_80147324(0x451);
    func_80154274(o, &D_sc07_002_80198864);
    func_80149020(o);
    AF(o, u16, 0x244) = AF(o, u16, 6);
    AF(o, u16, 0x246) = AF(o, u16, 0xA);
    AF(o, u16, 0x248) = AF(o, u16, 0xE);
    func_80146CA0(o);
}

extern s16 D_8011DB18;
extern s16 D_8011DB1A;
extern u8 D_sc07_002_801988FC;
extern u8 D_sc07_002_801989A0;
extern s32 func_80029D3C();
extern void func_80151204();

void func_sc07_002_80185FB0(u8 *o) {
    V3 v;
    s32 r;

    func_80149020(o);
    if (*(u16 *)&D_8011DB0C != 0) {
        r = func_80029D3C(D_8011DB1A);
        func_8014BC44(o, r);
        func_80151204(o, r);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0xC00;
        func_801542A4(o, &D_sc07_002_801988FC);
        func_8001382C(D_8011DB18, &D_sc07_002_801989A0, &v);
        func_80146DB8(o, &v);
        func_801477E8(o, 0x100000);
        D_8011DB0C = 0;
        AF(o, u8, 0xDE) = 3;
        func_80146E90(o, 0x20);
        func_80146CA0(o);
    }
}

void func_sc07_002_80186090(u8 *o) {
    s32 r;

    func_80149020(o);
    func_80147F50(o);
    func_801473EC(o);
    func_80148038(o, 0x40000);
    func_80147460(o);
    if (!(D_800B99DA & 1)) {
        func_8014C010(o, 2);
    }
    switch (func_801535F4(o)) {
    case 1:
        if (AF(o, u8, 0xDE) != 0) {
            func_sc07_002_801863B0((s32)o);
            func_80147324(0xC72);
            func_8013C9C4(D_sc07_002_80198854[AF(o, u8, 0xDE)]);
            func_801542A4(o, &D_sc07_002_80198934);
            AF(o, s32, 0x34) = -(AF(o, s32, 0x34) * 3 / 4);
            AF(o, u8, 0xDE)--;
            break;
        }
        func_80146E90(o, 0x10);
        func_80146CA0(o);
        return;
    case 4:
        goto hit;
    }
    if (func_80146E98(o) != 0) {
hit:
        func_801477E8(o, 0xC0000);
        func_80146C98(o, 5);
    }
}

void func_sc07_002_801861EC(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    func_80147F50(arg0);
    func_801473EC(arg0);
    if (!(D_800B99DA & 1)) {
        func_8014C010(arg0, 2);
    }
    func_801535F4(arg0);
    if (func_80146E98(arg0) != 0) {
        func_sc07_002_8018637C(arg0);
        func_80159B3C(arg0);
        func_80146A6C(2, arg0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
        func_80165718(arg0);
    }
}

void func_sc07_002_80186298(u8 *o) {
    func_80149020(o);
    func_80148038(o, 0x40000);
    func_80147460(o);
    if (!(D_800B99DA & 1)) {
        func_8014C010(o, 2);
    }
    switch (func_801535F4(o)) {
    case 1:
        func_sc07_002_8018637C(o);
        func_80159B3C(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc07_002_8018637C(o);
        func_8015BF48(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
        break;
    }
}

extern s32 D_80127518;

void func_sc07_002_8018637C(u8 *o) {
    u8 *p;

    p = AF(o, u8 *, 0x20);
    D_80127518 = 0;
    AF(p, u16, 0x10) = 0;
    AF(o, u8, 0xA8) = 0x20;
    func_80151664(o);
}

s32 func_sc07_002_801863B0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    var_s1 = 0;
    do {
        temp_v0_2 = func_8012913C(0x22);
        if (temp_v0_2 != 0) {
            func_800159E4(arg0 + 4, temp_v0_2 + 4);
            AF(temp_v0_2, s32, 0x10) = (s32) (rcos(var_s1) * 0x140);
            AF(temp_v0_2, s32, 0x18) = (s32) (rsin(var_s1) * 0x140);
            AF(temp_v0_2, s16, 0x34) = 0x3000;
            AF(AF(temp_v0_2, void *, 0x20), u16, 0x2C) = 0xC002;
        }
        var_s1 += 0x100;
        temp_v0 = var_s1 < 0x1000;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc07_002_80186458(u8 *arg0) {
    D_sc07_002_80198BA0[AF(arg0, u16, 2)]();
}

void func_sc07_002_80186494(u8 *o) {
    u8 *a;
    B4 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc07_002_80198A90, D_sc07_002_80198A2C[AF(o, s32, 0x2C)].x, D_sc07_002_80198A2C[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc07_002_80198A58[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc07_002_80198B90 = D_sc07_002_80198A64[AF(o, s32, 0x2C)];
        D_sc07_002_80198B8C = AF(&D_sc07_002_80198B8C, B4, 0x4);
        D_sc07_002_80198B5C = AF(&D_sc07_002_80198B5C, B4, 0x30);
        D_sc07_002_80198B58 = AF(&D_sc07_002_80198B58, B4, 0x4);
        D_sc07_002_80198B28 = AF(&D_sc07_002_80198B28, B4, 0x30);
        D_sc07_002_80198B24 = AF(&D_sc07_002_80198B24, B4, 0x4);
        D_sc07_002_80198AF4 = AF(&D_sc07_002_80198AF4, B4, 0x30);
        p = &D_sc07_002_80198AF0;
        *p = D_sc07_002_80198AF4;
        D_sc07_002_80198AC8 = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc07_002_80186694(s32 arg0) {
    func_sc07_002_801866D4(arg0);
}

void func_sc07_002_801866B4(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc07_002_801866D4(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc07_002_80198AA8);
    var_s1 = 0;
    var_s0 = &D_sc07_002_80198AD0;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc07_002_8018672C(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc07_002_80186758(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}
