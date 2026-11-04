#include "common.h"
#include "gte.h"
#include "psyq.h"
extern s32 *func_sc04_020_8018302C();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_020_8017BE9C(void) {
}

void func_sc04_020_8017BEA4(void) {
}

void func_sc04_020_8017BEAC(void) {
}

void func_sc04_020_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_020_80186D44[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc04_020_80186DE0[])();
extern void (*D_sc04_020_80186DE8[])();
extern void (*D_sc04_020_80186DF0[])();
extern u8 D_sc04_020_80186D4C;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern u8 D_sc04_020_80183678;
extern u8 D_sc04_020_80186DC8;
extern u8 D_sc04_020_80186DD0;
extern void func_8012B260();
extern void (*D_sc04_020_801870CC[])();
extern s32 func_80178970();
extern s32 func_80146A6C();
extern u8 D_sc04_020_80186E80;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc04_020_801870BC[];
extern void func_80029124();
extern s32 func_8012C658();
extern void func_80178B18();
extern u8 D_80078E78;
extern u8 D_sc04_020_8018709C;
extern s32 func_8012E778();
extern void func_801439C0();
extern void func_8016EDEC();
void func_sc04_020_8017E848(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_sc04_020_8017E8D0(u8 *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void (*D_sc04_020_801870F0[])();
extern void (*D_sc04_020_801870F8[])();
extern void (*D_sc04_020_80187104[])();
extern s32 D_80127050;
extern void (*D_sc04_020_801871E4[])();
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern void (*D_sc04_020_801871EC[])();
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
extern u8 D_801269E8;
extern void func_8012A018();
extern void func_sc04_020_8017EA04();
extern void func_8012A094();
extern void (*D_sc04_020_801871F4[])();
extern void (*D_sc04_020_801872A0[])();
extern void (*D_sc04_020_8018749C[])();
extern void (*D_sc04_020_801874AC[])();
extern void (*D_sc04_020_801874C4[])();
extern void (*D_sc04_020_80187580[])();
extern void (*D_sc04_020_80187598[])();
extern void (*D_sc04_020_801875D0[])();
extern u8 D_sc04_020_801BC580;
extern void func_sc04_020_80180380();
extern void (*D_sc04_020_80187694[])();
extern s32 func_sc04_020_80181388();
extern void func_sc04_020_801805E0();
extern void (*D_sc04_020_801AA3F4[])();
extern void (*D_sc04_020_801AA414[])();
s32 func_sc04_020_80181060(s32 arg0);
extern s32 func_sc04_020_8018113C();
extern void func_sc04_020_801812A0();
extern u8 D_80078EB1;
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern void (*D_sc04_020_801B5E94[])();
extern void func_sc04_020_8018146C();
extern u8 D_sc04_020_801B5E9C;
extern void func_sc04_020_80181494();
extern void func_8012E8E0();
extern void func_8012E8A8();
extern s32 func_80029504();
extern void func_80029514();
extern s32 func_sc04_020_80181780();
extern void func_8012AD80();
extern s32 func_8016F1AC();
extern s32 func_8012B608();
extern s32 func_8012B744();
extern s32 func_8014B12C();
extern void func_8012B178();
extern s32 func_8012B030();
extern s32 func_8012BE98();
extern void (*D_sc04_020_801B5EB4[])();
extern void func_80016714();
extern s32 D_sc04_020_801BC624;
extern u8 D_sc04_020_801BC710;
extern void func_8001C214();
extern void func_8001D0E8();
extern u8 D_sc04_020_801B5EAC;
extern u8 D_sc04_020_801A2AE4;
extern void func_sc04_020_801820E0();
extern void func_sc04_020_80182078();
extern void (*D_sc04_020_801B618C[])();
extern void func_sc04_020_80182154();
extern void func_sc04_020_801821B4();
extern void func_8001C97C();
extern s16 D_sc04_020_801B5EFC[];
extern u8 D_sc04_020_801B5EC0[];
extern u8 D_sc04_020_801B5EBC[];
extern S12 D_sc04_020_801B5EE4;
extern u8 D_sc04_020_801B5ED4;
extern u8 D_sc04_020_801B5EF0;
extern void * func_sc04_020_80182448();
extern s32 func_sc04_020_801826C8();
extern s32 func_sc04_020_80181948();
extern void func_8012E688();
extern s32 func_8012BEE8();
extern s32 func_8012E57C();
extern void func_sc04_020_80182730();
extern void func_sc04_020_80182794();
extern void (*D_sc04_020_801B61B0[])();
extern u8 D_sc04_020_801B61A0;
extern s32 func_sc04_020_80182A84();
s32 func_sc04_020_80182A38(s32 arg0);
extern void (*D_sc04_020_801B9514[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc04_020_801B9400;
extern s32 * func_sc04_020_80182D60();
extern void func_80178CBC();
extern s32 D_sc04_020_801B94F0[];
extern void (*D_sc04_020_801B990C[])();
extern u8 func_80172710;
extern void func_80178BF8();
extern s32 func_sc04_020_80182DBC();
extern void func_8002D4C8();
extern void func_800D0F4C();
extern s32 D_sc04_020_801BC628;
s32 func_sc04_020_80182E50(s32 arg0);

extern void func_8001BFD0();
extern s32 func_800291B4();
extern s32 func_80029524();
extern void func_800D0C48();
extern s32 func_sc04_020_80180F98();
extern u8 D_sc04_020_801B5D1C;

extern void func_sc04_020_8017EA7C();
extern void func_sc04_020_8017EBBC();
extern s32 func_sc04_020_801813AC();
extern void func_sc04_020_8017EDF4();
extern void func_sc04_020_8017EDB0();
extern u8 D_sc04_020_801871F8;
extern u8 D_sc04_020_80187238;
extern u8 D_sc04_020_80187208;
extern s32 *func_sc04_020_8017F24C();
extern u8 D_sc04_020_801872B0;
extern u8 D_sc04_020_801873B0;
extern u8 D_sc04_020_801B2938;
extern s32 * func_sc04_020_8017F56C();
extern s32 func_80029178();
extern u8 D_sc04_020_801873C0;
extern u8 D_sc04_020_8018740C;
extern u8 D_sc04_020_80187484;
extern void func_800291A0();
extern void func_8012AD50();
extern u8 D_800D387C;
extern void func_801292C8();
extern void func_8012931C();
extern u8 D_sc04_020_801874CC;
extern s32 func_8012913C();
extern u8 D_sc04_020_80187574;
extern s32 D_sc04_020_801BC724;
extern void func_800D06CC();
extern void func_8013CB84();
extern void func_800D06E8();
extern u8 D_sc04_020_801875D8;
extern u8 D_sc04_020_8018760C;
extern u8 D_sc04_020_801A8704;
extern u8 D_sc04_020_801A8A54;
extern void func_8012E88C();
extern s32 func_sc04_020_801816B0();
extern u8 D_sc04_020_801875E8;
extern u8 D_sc04_020_801875FC;
extern u8 D_sc04_020_801A81BC;
extern void * func_sc04_020_80180978();
extern s32 func_sc04_020_8018067C();
extern u8 D_sc04_020_801AA3EC;
extern u8 D_sc04_020_801AA3FC;
extern u16 D_sc04_020_801AA40C[];
extern u8 D_sc04_020_801AA41C;
extern s32 func_800183E0();
extern u8 D_sc04_020_801AA694;
extern s32 func_sc04_020_80180EA4();

extern u8 D_sc04_020_8018762C;
extern u8 D_sc04_020_801A8A0C;

extern u8 D_sc04_020_8019C0B4;

extern u8 D_sc04_020_8018768C;

extern void func_sc04_020_8018228C();
void func_sc04_020_80182808(s32 arg0, s32 arg1);

extern u8 D_sc04_020_80187588;
extern u8 D_sc04_020_8019BB08;

extern s32 D_sc04_020_8018721C[];
extern s32 func_sc04_020_801815AC();
extern void *D_sc04_020_801BC734;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
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
extern u8 D_sc04_020_80186D38;
extern u8 *func_800D21C4();
extern s32 D_sc04_020_801BC568;
extern s32 D_sc04_020_801BC574;
extern s32 D_sc04_020_801BC57C;
extern void func_sc04_020_8017CFE0();
extern void func_sc04_020_8017CF6C();
extern s32 func_8012BB3C();
extern s32 func_8012B8E4();
extern s32 func_8012CBF4();
extern s32 func_8012B200();
extern u8 D_sc04_020_80186DF8;
extern s32 func_8012CBA4();

extern s32 func_80143970();
extern u8 D_sc04_020_80186F90;
extern u8 D_sc04_020_80186FC4;
extern s32 D_sc04_020_801BC56C;
extern s32 D_sc04_020_801BC570;

extern u8 D_sc04_020_801B5F4C;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern s32 func_8012B864();
extern s32 func_8012BD14();
extern s32 D_sc04_020_80187060;
extern void func_8012ADE4();
extern void func_sc04_020_8017D0BC();
extern s32 func_8012BC60();
extern void func_80178B70();
extern s32 func_8012BDBC();
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
extern u8 D_800AF630;
extern void func_8012AD44();
extern void func_sc04_020_8018043C();



extern s32 func_sc04_020_801826FC();


extern s32 func_8016F1C4();
extern u16 D_801202A0;

typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_800D23D0();
extern u16 D_sc04_020_801BC560;
extern void *D_801151D4;
extern u16 D_80126B5E;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void func_8012F2E8();
extern s32 func_8012CB64();


extern s16 D_sc04_020_801B61B8;

extern s16 D_800B9A08;


typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc04_020_801BC360;
extern s32 func_8012C750();
extern u8 D_80126B58;
extern s16 D_sc04_020_80183668[];
extern s32 func_801487F4();
extern s32 func_80148800();
extern s32 func_80012A60();
extern void func_80017714();
extern s32 func_800D0F8C();
extern u8 D_sc04_020_801B984C;
extern u8 D_sc04_020_801B9864;

extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 func_80012B04();
extern s32 func_80012ABC();
extern s32 func_80012C6C();
extern void func_8012F14C();

extern u8 D_sc04_020_801B97C4;
extern u8 D_sc04_020_801B96D4;
extern u8 D_sc04_020_801B97CC[][8];
extern u8 D_sc04_020_801B97DC[][16];

extern u8 *D_sc04_020_801B6144[];
extern u8 D_sc04_020_801B6114;
extern u8 D_sc04_020_801B612C;

extern s32 func_sc04_020_801823BC();
extern u8 D_sc04_020_8019BB10;
extern u8 D_sc04_020_8019BB1C;
extern u8 D_sc04_020_80187270;
extern s32 func_801789AC();

typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
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
typedef union { s32 w; XY s; } UXY;
typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s32 func_8012EF70();
extern void func_sc04_020_8017F9EC();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void func_8012B0B4();
extern s32 D_80126B5C;
extern s32 func_8012B6D4();
extern u8 D_sc04_020_80186FF8[];
extern XY D_sc04_020_80187018[];
extern u8 D_sc04_020_80186EE8;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
extern u8 D_80078EAE;
extern u8 D_sc04_020_801BAFD8;
extern u8 D_sc04_020_801BAFE0;
extern void func_80015978();
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s32 D_sc04_020_801874B4;
extern s32 D_sc04_020_801874B8;
extern s32 D_sc04_020_801874BC;
extern s32 D_sc04_020_801874C0;
extern void func_80016ED4();
extern u8 D_sc04_020_801875A0;
extern u8 D_sc04_020_801AA148;
extern u8 D_sc04_020_801AA1C4;
extern u8 D_sc04_020_801AA264;

void func_sc04_020_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
    SV v;
    s16 i;
    s16 k;

    v.vx = arg1->vx;
    v.vy = arg1->vy - 20;
    v.vz = arg1->vz;
    func_8012F14C(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        func_80146A6C(0x25, arg0, v.vx, v.vy, v.vz, k, 0);
    }
}

void func_sc04_020_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc04_020_80186D38, 0x2A);
    if (o == 0) {
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = o;
    AF(o, s16, 0x2A) = 0x1F0;
    pm = (WMtx *)(AF(q, u8 *, 0x20) + 0x34);
    r = rand();
    if (AF(arg0, s32, 0x2C) == 0) {
        k = 0x1000;
        v.x = (r & 0xFF) + 0x240;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x18) = 0x1000;
    } else {
        k = 0x200;
        v.x = (r & 0xFF) * 4 + 0xD00;
        AF(o, s16, 0x28) = 0x244;
        AF(o, s16, 0x18) = 0x1800;
    }
    v.y = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    v.z = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(pm, &m);
    v.x = 0;
    v.y = 0;
    v.z = k;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.x << 8;
    AF(arg0, s32, 0x14) = v.y << 8;
    AF(arg0, s32, 0x18) = v.z << 8;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 2)++;
}

void func_sc04_020_8017C0E4(u8 *arg0) {
    D_sc04_020_80186D44[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017C120(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc04_020_8017C180(u8 *arg0) {
    D_sc04_020_80186DE0[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017C1BC(u8 *arg0) {
    D_sc04_020_80186DE8[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017C1F8(u8 *arg0) {
    D_sc04_020_80186DF0[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017C234(u8 *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = AF(o, u16 *, 0xDC);
    if (p != 0) {
        t = &D_sc04_020_801BC360;
        s.w = 0x158;
        s.a = s.b = 0;
        s.d = 0;
        s.e = 0;
        for (i = 0; i < 16; i++) {
            v = *p;
            if (v == 0x8000) break;
            if (AF(o, s16, 0x70) != 0) {
                p++;
                s.x = v;
                s.y = *p++;
                s.z = *p++;
                if (func_8012C750(&s) == 0) break;
            } else {
                r = func_8012913C(0x11);
                if (r == 0) break;
                AF(t, s32, 0x14) = *(s16 *)p; p++;
                AF(t, s32, 0x18) = *(s16 *)p; p++;
                AF(t, s32, 0x1C) = *(s16 *)p; p++;
                AF(r, u8 *, 0x30) = t;
                t += 0x20;
            }
        }
    }
    AF(o, s16, 0x2)++;
}

void func_sc04_020_8017C378(void) {
    FeSv v;
    u8 *p;

    p = D_801151D4;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc04_020_801BC560 = v.y;
}

void func_sc04_020_8017C3E4(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_sc04_020_80186D4C, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_sc04_020_80186D4C, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_8017C490(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc04_020_801BC560;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc04_020_8017C4D0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_020_80186DC8);
    SetScript(arg0, (s32) &D_sc04_020_80183678);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc04_020_80186DD0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s16 D_sc04_020_801B5E30[];
extern s16 D_sc04_020_801B5E64[];
extern s32 D_sc04_020_801B5D30[][8];
extern s32 D_sc04_020_801BC620[];

extern WMtx D_800AE620;
extern s16 D_801152B0;
extern s16 D_801152B4;
extern s32 func_80133784();
extern s32 ratan2();
extern void RotMatrixY();
extern void ApplyMatrixSV();
extern s32 func_8012CEB0();

typedef struct { s32 w[4]; } W16;


typedef void (*StepFn)(void);
extern void func_sc04_020_8018254C(u8 *o);

void func_sc04_020_8017C594(u8 *o) {
    u8 unused[8];
    u8 *m;
    s16 y;

    m = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xA) - (s16) D_80126B62 < 0x40) {
        AF(o, s16, 0x5C) = 0x800;
    } else {
        AF(o, s16, 0x5C) = 0x40;
    }
    y = D_sc04_020_801BC560;
    if (AF(m, s16, 0x12) != y) {
        AF(m, s16, 0x12) = y;
        RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, AF(o, u8 *, 0x20) + 0x34);
        AF(m, u16, 0x2C) |= 0x11;
    }
}

void func_sc04_020_8017C61C(u8 *arg0) {
    u8 *g;

    g = &D_80078E78;
    if ((func_80029178(D_sc04_020_801870BC[AF(arg0, s16, 0x70)]) & 0xFF) || (AF(arg0, s16, 0x70) == 4 && (u32)func_80029504() < 200)) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc04_020_80186F90) != 0) {
            AF(arg0, u16, 0x5C) |= 0x10;
            SetScript(arg0, &D_sc04_020_80186DF8);
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            D_sc04_020_801BC568 = AF(arg0, s16, 0x88) << 16;
            D_sc04_020_801BC56C = AF(arg0, s16, 0x8A) << 16;
            D_sc04_020_801BC570 = AF(arg0, s16, 0x8C) << 16;
            AF(arg0, s32, 0xCC) = func_80143970(arg0);
            AF(arg0, s16, 0xFC) = 0;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2)++;
        }
    } else if (AF(arg0, u8 *, 0x20) == 0 && func_8012C354(arg0, &D_sc04_020_80186FC4) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        AF(arg0, s32, 0xCC) = func_80143970(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_020_8017C7B8(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc04_020_80186E80);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc04_020_801BC574 = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc04_020_801BC57C = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc04_020_8017CFE0(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc04_020_801BC574)[i] = (&D_sc04_020_801BC568)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012BB3C(arg0 + 4, &D_sc04_020_801BC574, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc04_020_8017CF6C(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc04_020_8017C9BC(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = func_8012CBA4(a);
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(a);
        func_sc04_020_8017D0BC(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && func_8012BC60(a + 4, &D_sc04_020_801BC574) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += func_8012BB3C(a + 4, &D_sc04_020_801BC574, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc04_020_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc04_020_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        func_8012B200(a);
        SetScript(a, &D_sc04_020_80186DF8);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (func_8012BD14(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (func_8016F1AC() != 0) {
            p = &D_sc04_020_80187060;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            func_80178B70(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            func_8012B200(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc04_020_8017CF6C(a, -15, 0);
        func_sc04_020_8017CFE0(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = func_8012BD14(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (func_8012BDBC(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (func_8012BDBC(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc04_020_8017CFE0(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = func_8012B864(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc04_020_8017CF6C(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        func_80146A6C(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc04_020_8017CDB0(u8 *arg0) {
    s32 f;

    func_80178970(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = func_8012CBA4(arg0);
        } else {
            f = func_8012CBF4(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        func_8012AD80(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80146A6C(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        func_8002D4C8(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || func_8012E778(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        func_8012B200(arg0);
        SetScript(arg0, &D_sc04_020_80186DF8);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        func_801439C0(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc04_020_8017CF30(u8 *arg0) {
    D_sc04_020_801870CC[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017CF6C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    func_8012B0B4(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc04_020_8017CFE0(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (func_8012B6D4(&D_80126B5C, &D_sc04_020_801BC568) >> 7) & 0x18;
    i = D_sc04_020_80186FF8[a | ((func_8012B6D4(arg0 + 4, &D_sc04_020_801BC568) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc04_020_80187018[i].x - 0x100;
    D_sc04_020_801BC574 = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc04_020_80187018[i].y - 0x100;
    D_sc04_020_801BC57C = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc04_020_8017D0BC(u8 *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.x = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.y = AF(o, s16, 0xA) + 8;
    a.z = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA) + 8;
    b.z = AF(o, s16, 0xE);
    if (func_80133784(1, &a, &b) & 0xC000) {
        e = ratan2(D_801152B0, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        m = D_800AE620;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (func_8012CEB0(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc04_020_8017D2D0(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    func_80178970(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) func_8012C658(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            func_8002D4C8(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc04_020_80186EE8);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            func_8012B14C(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc04_020_8017D3A4(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc04_020_80186E80);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc04_020_8017D474(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc04_020_801870BC[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc04_020_8017D4CC(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc04_020_8018709C);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc04_020_8017D5C4(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_020_8017D604(u8 *obj) {
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

s32 func_sc04_020_8017E4E4(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_020_8017E848, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_020_8017E534(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc04_020_8017E558(u8 *arg0) {
    func_8016EDEC((s32) func_sc04_020_8017E8D0, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9A0A;
extern s32 func_800D1D94();

s32 func_sc04_020_8017E5C8(u8 *o) {
    s32 t;
    s16 s;

    t = AF(o, s32, 0x28) - 1;
    AF(o, s32, 0x28) = t;
    if (t == -1) {
        func_800D1E28();
        s = D_800B9A0A;
        if (s != 0x1000 || (s16)func_800D1D94() != s) {
            func_8002D4C8(0x1C, 0);
            func_8001BFD0();
            func_8002D4C8(0x1D, 0);
            func_800D0C48(1);
        }
        AF(o, u8, 0x15)++;
    }
    return 0;
}

void func_sc04_020_8017E678(void) {
    func_800D1EBC();
}

s32 func_sc04_020_8017E698(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc04_020_8017E6EC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        if (!(func_800291B4(0xCE) & 0xFF) && (func_80029524() == 0)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc04_020_8017E780(u8 *arg0) {
    D_sc04_020_801870F0[AF(arg0, u8, 0x15)]();
}

void func_sc04_020_8017E7BC(u8 *arg0) {
    D_sc04_020_801870F8[AF(arg0, u8, 0x15)]();
}

void func_sc04_020_8017E7F8(u8 *arg0) {
    D_sc04_020_80187104[AF(arg0, u8, 0x15)]();
}

void func_sc04_020_8017E834(void) {
    D_80127050 = 1;
}

void func_sc04_020_8017E848(u8 *arg0) {
    D_sc04_020_801871E4[AF(arg0, u8, 0x214)]();
}

void func_sc04_020_8017E884(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_020_8017E898(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc04_020_8017E8D0(u8 *arg0) {
    D_sc04_020_801871EC[AF(arg0, u8, 0x214)]();
}

void func_sc04_020_8017E90C(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc04_020_8017E920(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc04_020_8017E940(void) {
    u8 temp_s1;

    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x4B0;
    temp_s1 = D_801269E8;
    D_80126968 = 0x238;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc04_020_8017EA04, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_sc04_020_8017EA04((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_sc04_020_8017EA04((s32) &D_80126948);
}

void func_sc04_020_8017EA04(s32 arg0) {
    D_sc04_020_801871F4[AF(arg0, u8, 4)]();
}

void func_sc04_020_8017EA40(s32 arg0) {
    func_sc04_020_8017EA7C(arg0, arg0 + 0xA0);
    func_sc04_020_8017EBBC(arg0);
}

void func_sc04_020_8017EA74(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

void func_sc04_020_8017EA7C(u8 *o, u8 *a1) {
    s32 d;
    s32 s0;
    s32 s3;
    s32 b;
    s32 v;
    d = *a1;
    b = func_801487F4(&D_80126B58);
    v = func_80148800(&D_80126B58);
    AF(o, s16, 0x9C) = 0x5B;
    s0 = 0;
    if (v & 3) {
        s0 = 0x555;
        s3 = v;
        AF(o, s16, 0xA2) = 8;
    } else if (AF(o, s16, 0xA2) == 0) {
        if (b & 3) {
            s0 = 0x555;
            s3 = b;
            AF(o, s16, 0x9C) = 0x2D;
        }
    } else {
        AF(o, s16, 0xA2) = AF(o, s16, 0xA2) - 1;
    }
    if (s0 != 0) {
        if (s3 & 1) {
            d = (d - 1) & 7;
        } else if (s3 & 2) {
            d = (d + 1) & 7;
        }
        if ((s16)func_80012A60(AF(o, s16, 0x1A), D_sc04_020_80183668[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc04_020_80183668[*a1];
}

void func_sc04_020_8017EBBC(u8 *o) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 lim;
    s16 d;
    lim = AF(o, s16, 0x9C);
    d = func_80012B04(AF(o, s16, 0x1A), AF(o, s16, 0x22), 0x14);
    if (d > lim) d = lim;
    else if (d < -lim) d = -lim;
    AF(o, s16, 0x1A) = (AF(o, s16, 0x1A) + d) & 0xFFF;
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s32, 8) = (s16)func_80012C6C(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
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

void func_sc04_020_8017EDB0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8A8(arg0);
    func_8012E8E0(arg0, (s32) &D_sc04_020_801871F8);
}

void func_sc04_020_8017EDF4(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc04_020_801871F8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_020_8019C0B4);
    func_sc04_020_8018146C(arg0);
}

void func_sc04_020_8017EE50(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc04_020_801823BC(1)) {
            func_sc04_020_801816B0(o, &D_sc04_020_8019BB10, 0, 0x40);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        func_sc04_020_801823BC(1);
        if (func_sc04_020_80181780(o)) {
            func_sc04_020_801816B0(o, &D_sc04_020_8019BB1C, 1, 0x40);
            AF(o, u16, 0x34) = 2;
            AF(AF(o, u8 *, 0xCC), s16, 0x108) = 0;
            AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_sc04_020_80181780(o)) {
            AF(o, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc04_020_801823BC(1)) {
            AF(o, u16, 0x34) = 4;
            func_sc04_020_801816B0(o, &D_sc04_020_8019BB10, 1, 0x40);
        }
        break;
    case 4:
        func_sc04_020_801823BC(1);
        if (func_sc04_020_80181780(o)) {
            AF(o, u16, 0x2) = 1;
            func_sc04_020_80181494(o, &D_sc04_020_801871F8);
        }
        break;
    case 5:
        AF(o, u16, 0x34)++;
        func_80178CBC(o, &D_sc04_020_80187270);
        break;
    case 6:
        if (func_801789AC(o)) {
            func_80178D18(o);
            SetScript(o, &D_sc04_020_8019C0B4);
            func_sc04_020_8018146C(o);
            AF(o, u16, 0x34) = 2;
        }
        break;
    }
}

void func_sc04_020_8017EFF4(u8 *arg0) {
    D_sc04_020_801872A0[AF(arg0, u16, 2)]();
}

s32 func_sc04_020_8017F030(void) {
    AF(D_sc04_020_801BC734, s32, 4) = D_sc04_020_8018721C[func_sc04_020_801815AC()];
}

void func_sc04_020_8017F068(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_sc04_020_801813AC(5, 0, 5, 0x1E) != 0) {
        func_sc04_020_8017EDF4((s32) arg0);
        return;
    }
    if (func_sc04_020_80181388(7, 0x15) != 0) {
        func_sc04_020_8017EDB0((s32) arg0);
    }
}

void func_sc04_020_8017F0DC(u8 *arg0) {
    s32 temp_v1;
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0x34);
    temp_v1 = temp_a0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc04_020_80181388(7, 0x15) == 0) {
            AF(arg0, s16, 2) = 1;
            func_sc04_020_80181494((s32) arg0, (s32) &D_sc04_020_801871F8);
            return;
        }
        return;
    case 1:
        AF(arg0, u16, 0x34) = (u16) (temp_a0 + 1);
        func_80178CBC((s32) arg0, (s32) &D_sc04_020_80187238);
        return;
    case 2:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            AF(arg0, s16, 2) = 2;
            AF(arg0, u16, 0x34) = 0U;
            func_8012E8A8((s32) arg0);
            func_8012E8E0((s32) arg0, (s32) &D_sc04_020_801871F8);
        }
        break;
    }
}

void func_sc04_020_8017F1D4(s32 arg0) {
    if (func_sc04_020_80180F98(arg0, (s32) &D_sc04_020_80187208) != 0) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        func_8012E8A8(arg0);
        func_8012E8E0(arg0, (s32) &D_sc04_020_801871F8);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_020_8017F24C);
    }
}

s32 func_sc04_020_801810B8(u8 *arg0);
s32 *func_sc04_020_8017F24C(u8 *o) {
    u8 *p = AF(o, u8 *, 0x64);

    switch (AF(p, u16, 2)) {
    case 2:
        if (func_sc04_020_801810B8(o) == 0) {
            return NULL;
        }
        if (AF(AF(o, u8 *, 0x64), u16, 0x34) != 0) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 0x34)++;
        break;
    case 3:
        if (func_8012BD14(p) > 0x4000) {
            return NULL;
        }
        if (AF(AF(o, u8 *, 0x64), u16, 0x34) != 2) {
            return NULL;
        }
        AF(AF(o, u8 *, 0x64), u16, 0x34) = 5;
        break;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *)&func_80172710;
}

s32 func_sc04_020_8017F320(void) {
    s32 r;

    r = func_80029504();
    if ((u32)(r - 900) < 110) {
        return 0x65;
    }
    if ((u32)(r - 100) < 30) {
        return 0x28;
    }
    if (D_80078EAE == 1) {
        return 0xF;
    }
    return 0x10;
}

void func_sc04_020_8017F384(u8 *arg0) {
    D_sc04_020_8018749C[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017F3C0(s32 arg0) {
    s32 temp_v0;

    if (!(func_80029178(0xF0) & 0xFF)) {
        func_8012CAE4(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc04_020_801B2938);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0xE00;
        SetScript(arg0, (s32) &D_sc04_020_801872B0);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801873B0 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_020_8017F56C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_020_8017F48C(void) {
}

void func_sc04_020_8017F494(u8 *arg0) {
    s32 *var_a1;

    if ((func_800291B4(0x40) & 0xFF) == 1) {
        func_800291A0(0x40, 2);
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        var_a1 = &D_sc04_020_8018740C;
        AF(arg0, s16, 0x10A) = 1;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801873C0 | 0x40000000);
    } else {
        var_a1 = &D_sc04_020_80187484;
    }
    func_80178CBC((s32) arg0, (s32) var_a1);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_8017F52C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc04_020_8017F56C(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 1) {
        return NULL;
    }
    if (func_8012BD14(arg0) >= 0x4000) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_sc04_020_8017F5E0(u8 *arg0) {
    D_sc04_020_801874AC[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017F61C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

void func_sc04_020_8017F63C(u8 *arg0) {
    B8 a;
    B8 b;
    SV8 c;

    a = *(B8 *)&D_sc04_020_801BAFD8;
    b = *(B8 *)&D_sc04_020_801BAFE0;
    if (AF(arg0, s16, 0xFC) == 0) {
        func_sc04_020_8017F704((SV8 *)&a, (SV8 *)&b);
    } else {
        func_80015978(arg0 + 4, &c);
        func_sc04_020_8017F704((SV8 *)&a, &c);
        func_sc04_020_8017F704(&c, (SV8 *)&b);
    }
}

void func_sc04_020_8017F704(SV8 *a, SV8 *b) {
    SV8 prev;
    SV8 cur;
    SV8 p0;
    SV8 p1;
    SV8 r0;
    SV8 r1;
    SV8 r2;
    SV8 r3;
    s32 loop;

    loop = 1;
    cur = *a;
    do {
        prev = cur;
        cur.x += 0x40;
        cur.y = a->y + (b->y - a->y) * (cur.x - a->x) / (b->x - a->x);
        cur.z = a->z + (b->z - a->z) * (cur.x - a->x) / (b->x - a->x);
        if (cur.x >= b->x) {
            cur.x = b->x;
            loop = 0;
        }
        p0 = prev;
        p0.y -= 4;
        p1 = cur;
        p1.y -= 4;
        if (func_8012EF70(&p0, &r0) & ~0x1000) continue;
        if (func_8012EF70(&p1, &r1) & ~0x1000) continue;
        p0 = prev;
        p0.y += 4;
        p1 = cur;
        p1.y += 4;
        if (func_8012EF70(&p0, &r2) & ~0x1000) continue;
        if (func_8012EF70(&p1, &r3) & ~0x1000) continue;
        func_sc04_020_8017F9EC(&r0, &r1, &r2, &r3);
    } while (loop);
}

void func_sc04_020_8017F9EC(SV4 *a, SV4 *b, SV4 *c, SV4 *d) {
    Q74 q;

    q.p[0] = *a;
    q.p[1] = *b;
    q.p[2] = *c;
    q.p[3] = *d;
    q.col = 0x808080;
    q.code = 0;
    q.flag = 0x50;
    q.c[0] = D_sc04_020_801874B4;
    q.c[1] = D_sc04_020_801874B8;
    q.c[2] = D_sc04_020_801874BC;
    q.c[3] = D_sc04_020_801874C0;
    func_80016ED4(&q);
}

void func_sc04_020_8017FAD4(u16 *pos, SV4 *d, u16 yaw, s16 n) {
    SV4 v;
    WMtx m;
    s16 i;
    u8 *o;
    SV4 *e;

    for (i = 0; i < n; i++) {
        o = (u8 *) func_8012913C(0x46);
        if (o != 0) {
            v.x = ((rand() & 0x7F) << 3) + 0xF00;
            v.y = yaw + ((rand() & 0x7F00) >> 5);
            v.z = 0;
            RotMatrixYXZ(&v, &m);
            ApplyMatrixSV(&m, d, &v);
            AF(o, s16, 6) = pos[0] + v.x;
            AF(o, s16, 0xA) = pos[1] + v.y;
            AF(o, s16, 0xE) = pos[2] + v.z;
            AF(o, s32, 0x10) = v.x << 12;
            AF(o, s32, 0x14) = v.y << 12;
            AF(o, s32, 0x18) = v.z << 12;
        }
    }
}

void func_sc04_020_8017FC30(u8 *arg0) {
    D_sc04_020_801874C4[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017FC6C(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) &D_800D387C, 0x270, 0x120);
    AF(temp_s0, u8, 0x27) = 0x9C;
    AF(temp_s0, s16, 0x1A) = 0x7000;
    AF(temp_s0, s16, 0x18) = 0x7000;
    AF(temp_s0, u8, 0x26) = 0x90;
    AF(temp_s0, u8, 0x25) = 0x90;
    AF(temp_s0, u8, 0x24) = 0x90;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    AF(arg0, s16, 0x2C) = 0x20;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_8017FCFC(u8 *arg0) {
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_801292C8();
        return;
    }
    func_8012931C();
    temp_v0_2 = AF(temp_s0, u8, 0x26) - 2;
    AF(temp_s0, u8, 0x26) = temp_v0_2;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    AF(temp_s0, u8, 0x24) = temp_v0_2;
}

void func_sc04_020_8017FD70(s32 arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (arg0 * 0x1C) + &D_sc04_020_801874CC;
    temp_v0 = func_8012913C(0x48);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) AF(temp_s0, s32, 0);
        AF(temp_v0, s32, 8) = (s32) AF(temp_s0, s32, 4);
        AF(temp_v0, s32, 0xC) = (s32) AF(temp_s0, s32, 8);
        AF(temp_v0, s32, 0x10) = (s32) AF(temp_s0, s32, 0xC);
        AF(temp_v0, s32, 0x14) = (s32) AF(temp_s0, s32, 0x10);
        AF(temp_v0, s32, 0x18) = (s32) AF(temp_s0, s32, 0x14);
        AF(temp_v0, u16, 0x2C) = (u16) AF(temp_s0, u16, 0x18);
    }
}

void func_sc04_020_8017FE10(u8 *arg0) {
    D_sc04_020_80187580[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017FE4C(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) &D_sc04_020_80187574, 0x240, 0x1D0);
    AF(temp_s0, u8, 0x27) = 0x54;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x08000000);
    temp_v0 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    AF(arg0, u16, 0x2C) = 0x20U;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_8017FED0(u8 *arg0) {
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_801292C8();
        return;
    }
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + 0x155);
    func_8012931C((s32) arg0);
}

void func_sc04_020_8017FF30(u8 *arg0) {
    D_sc04_020_80187598[AF(arg0, u16, 2)]();
}

void func_sc04_020_8017FF6C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_80029504();
    if (((u32) (temp_v0 - 0x460) >= 0x28U) && (temp_v0 >= 0x3B6)) {
        temp_v0_2 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0_2;
        if (temp_v0_2 != 0) {
            func_8001C810(temp_v0_2, (s32) &D_sc04_020_8019BB08);
            AF(temp_v0_2, s32, 0x28) = 0xFA00FA;
            AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
            AF(arg0, u8, 0x75) = 2;
            AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_80187588 | 0x40000000);
            AF(arg0, u16, 0x5C) = 0xC800;
            func_8012AD50((s32) arg0);
        }
    }
}

void func_sc04_020_80180020(void) {
}

void func_sc04_020_80180028(u8 *arg0) {
    D_sc04_020_801875D0[AF(arg0, u16, 2)]();
}

void func_sc04_020_80180064(u8 *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (D_80078EB1 == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc04_020_801BC580)[i];
            AF(p, s16, 0x16) = i;
            func_sc04_020_80180380((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        func_8012AD50((s32) o);
    }
}

void func_sc04_020_801800F4(s32 arg0) {
    Fx24 *p;
    s32 i;
    s32 j;
    s32 n;
    s32 c;
    s16 a;
    u8 *w = (u8 *) &D_800AF630;
    u8 *g = &D_80078E78;

    if (D_80078EB1 >= 9) {
        n = 0;
        for (j = 0; j < 4; j++) {
            if (((Fx24 *) &D_sc04_020_801BC580)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            func_8012AD44(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc04_020_801BC580)[i];
        if (p->done == 0) {
            a = p->ang;
            if (a > 0x400 && p->t18 != 0) {
                p->t18--;
            } else {
                p->ang = a + 0xB;
            }
            if (p->ang > 0x800) {
                p->ang = 0;
            }
            c = (rsin(p->ang) / 64) & 0xFF;
            c |= (c << 16) | (c << 8);
            p->c4 = c;
            c = (rsin(p->ang) / 256) & 0xFF;
            c |= (c << 16) | (c << 8);
            p->c8 = c;
            if (!(AF(w, u16, 0xA3AA) & 1)) {
                if (++p->e >= 0x40) {
                    p->e = 0;
                }
            }
            if (p->ang == 0) {
                p->done = 1;
            } else if (p->ang >= 0x556 && p->f20 == 0) {
                p->f20 = 1;
                if (g[0x39] < 9) {
                    func_sc04_020_80180330((s32) p);
                }
            }
            func_sc04_020_8018043C(p);
        }
    }
}

void func_sc04_020_80180330(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc04_020_801BC580;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc04_020_80180380((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc04_020_80180380(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc04_020_801875A0;
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s16, 0xC) = 0;
    AF(arg0, s16, 0xE) = 0;
    AF(arg0, s16, 0x10) = 0;
    r = rand();
    AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) * 80 + (s16)((r & 7) * 5 - 160) + (rand() & 0xF);
    AF(arg0, s16, 0x14) = -((rand() & 0xF) * 2);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s32, 0x18) = (AF(arg0, u16, 0x16) & 2) * 30;
}

void func_sc04_020_8018043C(u8 *o) {
    Q q;
    Q *pq;
    XY *s;
    u16 dx, dy;
    s32 i;
    pq = &q;
    s = AF(o, XY *, 0);
    dx = AF(o, u16, 0x12);
    dy = AF(o, u16, 0x14);
    pq->v[0].z = 3;
    q.a = q.b = AF(o, s32, 4);
    q.c = AF(o, s32, 8);
    q.d = 0;
    q.e = 0x50000000;
    for (i = 0; i < 3; i++) {
        pq->v[0].x = s[0].x + dx;
        pq->v[0].y = s[0].y + dy;
        pq->v[1].x = s[1].x + dx;
        pq->v[1].y = s[1].y + dy;
        pq->v[2].x = s[2].x + dx;
        pq->v[2].y = s[2].y + dy;
        pq->v[3].x = s[3].x + dx;
        pq->v[3].y = s[3].y + dy;
        s += 4;
        func_80017714(pq);
    }
}

void func_sc04_020_80180554(void) {
    u32 temp_v0;

    temp_v0 = func_80029504() - 0x85;
    switch (D_sc04_020_801BC724) {                  /* irregular */
    case 0:
        if (temp_v0 < 2U) {
            func_800D06CC();
        }
        D_sc04_020_801BC724 += 1;
        return;
    case 1:
        func_8013CB84();
        func_800D06E8();
        return;
    }
}

void func_sc04_020_801805E0(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0(arg0, (s32) &D_sc04_020_8018768C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_020_801A8704);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_8018760C | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0x1C) = 0;
    func_sc04_020_801816B0(arg0, (s32) &D_sc04_020_801A8A54, 1, 0x60);
    func_8012B030(arg0);
    func_8012B2CC(arg0);
}

s32 func_sc04_020_8018067C(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_sc04_020_801A8704);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_8018760C | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    return func_sc04_020_801816B0(arg0, (s32) &D_sc04_020_801A8A54, 0, 0x60);
}

void func_sc04_020_80180708(s32 arg0) {
    s32 temp_s1;

    if ((func_80029178(0xF0) & 0xFF) || ((u32) (func_80029504() - 0x85) < 2U)) {
        func_8012CAE4(arg0);
        return;
    }
    if (func_sc04_020_80180F98(arg0, (s32) &D_sc04_020_801875E8) != 0) {
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        temp_s1 = (s32) &D_sc04_020_801875FC | 0x40000000;
        AF(arg0, s32, 0x58) = temp_s1;
        AF(arg0, s16, 0x5C) = 0x800;
        if (func_sc04_020_80181388(9, 0x12) != 0) {
            AF(arg0, s16, 2) = 2;
            SetScript(arg0, (s32) &D_sc04_020_801A81BC);
            func_8012E88C(arg0);
            func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0x800;
        } else {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x98) = 0;
            func_8012E8A8(arg0);
            func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0;
        }
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_sc04_020_80180978);
    }
}

void func_sc04_020_80180840(u8 *arg0) {
    D_sc04_020_80187694[AF(arg0, u16, 2)]();
}

void func_sc04_020_8018087C(u8 *arg0) {
    s32 n;

    n = (u8)func_800291B4(0xDC);
    func_80029124(0xDE, 1);
    if (n == 0) {
        AF(arg0, u8 *, 0xE4) = &D_sc04_020_801AA148;
    } else if (n & 1) {
        AF(arg0, u8 *, 0xE4) = &D_sc04_020_801AA1C4;
    } else {
        AF(arg0, u8 *, 0xE4) = &D_sc04_020_801AA264;
    }
    n++;
    if (!(n & 0xFF)) {
        n = 2;
    }
    func_800291A0(0xDC, n & 0xFF);
}

void func_sc04_020_80180918(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    func_8012E8E0((s32) arg0, (s32) &D_sc04_020_801875D8, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_020_801A8A0C);
    func_80178CBC((s32) arg0, (s32) &D_sc04_020_8018762C);
}

void *func_sc04_020_80180978(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) != 2) {
        return 0;
    }
    if (func_8012BD14(o) < 0x4000) {
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        func_80178BF8();
        return &func_80172710;
    }
    return 0;
}

void func_sc04_020_801809EC(s32 arg0) {
    if (func_sc04_020_80181388(9, 0x12) != 0) {
        func_sc04_020_801805E0(arg0);
    }
}

void func_sc04_020_80180A2C(s32 arg0) {
    if (func_sc04_020_80181388(9, 0x12) == 0) {
        func_sc04_020_8018067C(arg0);
    }
}

void func_sc04_020_80180A6C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc04_020_801A81BC);
        func_8012E88C(arg0);
        func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801875FC | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc04_020_80180AF0(s32 arg0) {
    if (func_sc04_020_80181780(arg0) != 0) {
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc04_020_801A81BC);
        func_8012E88C(arg0);
        func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801875FC | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc04_020_80180B68(s32 arg0) {
    if (func_sc04_020_80181780(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x98) = 0;
        func_8012E8A8(arg0);
        func_8012E8E0(arg0, (s32) &D_sc04_020_801875D8);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801875FC | 0x40000000);
        AF(arg0, s16, 0x5C) = 0;
    }
}

void func_sc04_020_80180BD0(u8 *p) {
    u16 t;

    switch (AF(p, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(p) != 0) {
            AF(p, u16, 0xFC) = 0;
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x1F) + 0x1E;
        }
        break;
    case 1:
        t = AF(p, u16, 0xFC) + 6;
        AF(p, u16, 0xFC) = t;
        AF(AF(p, u8 *, 0x20), u16, 0x12) += t;
        if (func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x3F) + 0x3C;
        }
        break;
    case 2:
        AF(AF(p, u8 *, 0x20), u16, 0x12) += AF(p, u16, 0xFC);
        if (func_8012BEE8(p) != 0) {
            AF(p, u16, 0x34)++;
        }
        break;
    case 3:
        t = AF(p, u16, 0xFC) - 3;
        AF(p, u16, 0xFC) = t;
        AF(AF(p, u8 *, 0x20), u16, 0x12) += t;
        if (AF(p, s16, 0xFC) < 9) {
            AF(p, u16, 0x34) = 0;
            AF(p, s32, 0x1C) = (rand() & 0x3F) + 0x3C;
        }
        break;
    }
    if ((u32) func_80029504() >= 0x492) {
        func_8012C218(p);
    }
}

void func_sc04_020_80180D48(u8 *arg0) {
    D_sc04_020_801AA3F4[AF(arg0, u16, 2)]();
}

void func_sc04_020_80180D84(u8 *arg0) {
    D_sc04_020_801AA414[AF(arg0, u16, 2)]();
}

void func_sc04_020_80180DC0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    func_8012E8E0((s32) arg0, (s32) &D_sc04_020_801AA3EC);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801AA3FC | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_80180E4C(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), u16, 0x12) = D_sc04_020_801AA40C[AF(arg0, s16, 0x70)];
    if (func_80029504() >= 0x492U) {
        func_8012C218((s32) arg0);
    }
}

s32 func_sc04_020_80180EA4(arg0)
    s32 arg0;
{
    s32 var_v0;

    var_v0 = func_80029504() < 0x492;
    if (var_v0 == 0) {
        var_v0 = func_800183E0((s32) &D_sc04_020_801AA41C);
    }
    return var_v0;
}

void func_sc04_020_80180EE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (func_8001C214(temp_v0, (s32) &D_sc04_020_801AA694), func_8012E8E0((s32) arg0, (s32) &D_sc04_020_801AA3EC), func_sc04_020_80180EA4(), ((func_80029504() < 0x492U) == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8012C658(0x3BF, 0, (s32) arg0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc04_020_80180F78(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc04_020_80180F88(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc04_020_80180F98(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc04_020_801B5D1C;
    }
    AF(arg0, s32, 0xD0) = var_s0;
    if (AF(var_s0, s32, 0) != 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return 0;
        }
        func_8001C214(temp_v0, AF(var_s0, s32, 0));
        goto block_6;
    }
block_6:
    temp_a1 = AF(var_s0, s16, 0x12);
    if (temp_a1 != -1) {
        AF(arg0, s32, 0xCC) = func_8012E57C(0x61, (s32) temp_a1);
    }
    return 1;
}

void func_sc04_020_80181034(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_sc04_020_80181060(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_sc04_020_8018108C(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

s32 func_sc04_020_801810B8(u8 *arg0) {
    s32 o[2];
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x64);
    if (AF(AF(p, void *, 0xCC), u16, 2) != 2) {
        return 0;
    }
    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8((s32) AF(p, void *, 0xCC), (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0xC0, 0x40, -0x60, 0);
}

s32 func_sc04_020_8018113C(o)
    u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, dd;
    g = &D_80078E78;
    k = D_sc04_020_801B5E30[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_sc04_020_801BC620[0] = 0;
        return 0;
    }
    n = func_sc04_020_801812E0();
    h = D_80078EB1;
    q = n / 24;
    r = n % 24;
    dd = D_80078EAC;
    if (n == 0) {
        i = D_sc04_020_801B5E64[h] - 1;
    } else if (dd - q >= 5) {
        i = 7;
    } else if (dd == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_sc04_020_801B5E64[i] - 1;
    }
    D_sc04_020_801BC620[0] = 1;
    return D_sc04_020_801B5D30[i][k];
}

void func_sc04_020_8018126C(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc04_020_8018113C();
    func_sc04_020_801812A0((s32) arg0);
}

void func_sc04_020_801812A0(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

s16 func_sc04_020_801812E0(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc04_020_80181308(u8 *arg0) {
    D_sc04_020_801B5E94[AF(arg0, u16, 2)]();
}

void func_sc04_020_80181344(void) {
}

void func_sc04_020_8018134C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) D_80078EB1 >= arg1 && (s32) D_80078EB1 < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc04_020_80181388(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

extern u8 D_80078EB0;

s32 func_sc04_020_801813AC(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 unused[0x20]; /* MATCH-TRICK: frame pad, the original reserves 0x20 bytes it never uses */
    s32 h0, m0, h1, m1;
    s32 lo;
    s32 hi;

    h0 = a0 & 0xFF;
    m0 = a1 & 0xFF;
    lo = (h0 << 8) | m0;
    h1 = a2 & 0xFF;
    m1 = a3 & 0xFF;
    hi = (h1 << 8) | m1;
    if ((s16)lo <= *(s16 *)&D_80078EB0) {
        if (*(s16 *)&D_80078EB0 < (s16)hi) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_020_80181404(u8 *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    b.x = 0;
    b.y = 0;
    b.z = -n;
    FaceHelper(o, &b, &c);
    func_8012CEB0(&a, &c, 0);
}

void func_sc04_020_8018146C(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801B5E9C | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc04_020_8018148C(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc04_020_80181494(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

s32 func_sc04_020_801814DC(void) {
    s32 r;

    r = func_80029504();
    if (r < 0x14) {
        return 0;
    }
    if (r < 0x46) {
        return 1;
    }
    if (r < 0x64) {
        return 2;
    }
    if (r < 0x82) {
        return 3;
    }
    return 4;
}

s32 func_sc04_020_80181538(void) {
    s32 r;

    r = func_80029504();
    if (r < 0xC8) {
        return 5;
    }
    if (r < 0x12C) {
        return 0;
    }
    if (r < 0x258) {
        return 1;
    }
    if (r < 0x2BC) {
        return 2;
    }
    if (r < 0x2E4) {
        return 3;
    }
    if (r < 0x384) {
        return 4;
    }
    return 6;
}

s32 func_sc04_020_801815AC(void) {
    s32 r;

    r = func_80029504();
    if (r < 0xC8) {
        return 5;
    }
    if (r < 0x12C) {
        return 0;
    }
    if (r < 0x258) {
        return 1;
    }
    if (r < 0x2B2) {
        return 2;
    }
    if (r < 0x2E4) {
        return 3;
    }
    if (r < 0x384) {
        return 4;
    }
    return 6;
}

s32 func_sc04_020_80181620(void) {
    s32 r;

    r = func_80029504();
    if (r < 0x3B6) {
        return 0;
    }
    if (r < 0x3E8) {
        return 1;
    }
    if (r < 0x44C) {
        return 2;
    }
    if (r < 0x4B0) {
        return 3;
    }
    return 4;
}

void func_sc04_020_8018167C(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

s32 func_sc04_020_801816B0(u8 *o, s16 *t, s32 mode, s32 b) {
    SV8 v;
    s32 n;
    s16 *q;
    AF(o, u8, 0x108) = mode;
    AF(o, s16 *, 0xE8) = t;
    AF(o, u8, 0x109) = b;
    n = t[0];
    if ((mode & 0xFF) == 0) {
        AF(o, s16, 0x106) = 2;
        AF(o, s16, 6) = t[2];
        AF(o, s16, 0xE) = t[3];
        v.x = t[4];
        v.z = t[5];
    } else {
        q = (s16 *)(n * 4 + (s32)t);
        AF(o, s16, 0x106) = n - 1;
        AF(o, s16, 6) = q[0];
        AF(o, s16, 0xE) = q[1];
        v.x = q[-2];
        v.z = q[-1];
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_8012B744(o + 4, &v);
    return func_8012B200(o);
}

s32 func_sc04_020_80181780(u8 *a) {
    SV8 t;
    s32 s;

    if (func_8016F1AC(a) != 0) {
        return 0;
    }
    if (AF(a, u8, 0x108) == 0) {
        if (*AF(a, s16 *, 0xE8) < AF(a, s16, 0x106)) {
            return 1;
        }
    } else if (AF(a, s16, 0x106) <= 0) {
        return 1;
    }
    t.x = AF(a, u16 *, 0xE8)[AF(a, s16, 0x106) * 2];
    t.z = AF(a, u16 *, 0xE8)[AF(a, s16, 0x106) * 2 + 1];
    s = AF(a, u8, 0x109);
    s <<= 12;
    if (func_8014B12C() != 0) {
        AF(AF(a, u8 *, 0x20), s16, 0x12) = func_8012B744(a + 4, &t);
        s *= 8;
    } else {
        AF(AF(a, u8 *, 0x20), s16, 0x12) += func_8012B608(AF(AF(a, u8 *, 0x20), s16, 0x12), func_8012B744(a + 4, &t), 4);
    }
    func_8012B178(a, -s);
    func_8012AD80(a);
    AF(a, u16, 0xA) -= 0x10;
    func_8012B030(a);
    if (func_8014B12C() != 0) {
        if (func_8012BE98(a, &t) <= 0x1000) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    } else {
        if (func_8012BE98(a, &t) <= 0x100) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    }
    return 0;
}

s32 func_sc04_020_80181948(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (func_8014B12C() != 0) {
        return 2;
    }
    return 1;
}

void func_sc04_020_80181990(u8 *arg0) {
    D_sc04_020_801B5EB4[AF(arg0, u16, 2)]();
}

void func_sc04_020_801819CC(void) {
}

void func_sc04_020_801819D4(void) {
}

void func_sc04_020_801819DC(void) {
}

void func_sc04_020_801819E4(void) {
}

void func_sc04_020_801819EC(void) {
}

void func_sc04_020_801819F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_sc04_020_801BC710, 0x14, arg2, arg3);
    D_sc04_020_801BC624 = 0;
    func_8012CAE4(arg0);
}

void func_sc04_020_80181A38(void) {
}

void func_sc04_020_80181A40(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc04_020_801A2AE4);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_sc04_020_801B5EAC);
    AF(arg0, s16, 2) = 1;
}

void func_sc04_020_80181AC8(u8 *a) {
    s16 v;
    s16 w;
    u32 k;

    v = AF(a, s16, 0x10A);
    if (v > 0) {
        AF(a, s16, 0x10A) = v - 1;
    }
    w = AF(a, s16, 0x108);
    if (w != 0) {
        AF(a, u32, 0xB0) = w;
        AF(a, s16, 0x108) = 0;
    }
    k = AF(a, u32, 0xB0);
    switch (k) {
    case 1:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc04_020_80182154(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_020_801820E0(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc04_020_801821B4(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc04_020_80182078(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_020_801820E0(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_sc04_020_80182078(a);
        }
        break;
    }
    D_sc04_020_801B618C[AF(a, u16, 2)](a);
}

void func_sc04_020_80181CA0(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_sc04_020_801B5EFC[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc04_020_801B5EBC + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_sc04_020_801B5EBC + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_sc04_020_801B5EC0 + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_sc04_020_801B5ED4 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_sc04_020_801B5EF0;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc04_020_801B5EE4;
    AF(a, s16, 0x10A) = 6;
    func_sc04_020_80182078(a);
    AF(a, void *, 0xDC) = func_sc04_020_80182448;
}

void func_sc04_020_80181E40(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        func_sc04_020_8018254C(o);
        AF(o, u16, 0x34) = 2;
        break;
    case 2:
        if (func_80178970((s32) o) != 0) {
            func_80178D18((s32) o);
            AF(o, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc04_020_80181EBC(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc04_020_80181948() == 2) {
        func_sc04_020_801820E0(arg0);
    }
    temp_v0 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((s16) temp_v0 == 8) {
        func_8012E688(arg0, 0x514, 0);
    }
    temp_v0_2 = AF(arg0, u16, 0x100) + AF(arg0, u16, 0x102);
    AF(arg0, u16, 0x100) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x50) {
        AF(arg0, u16, 0x100) = 0x50U;
    }
    temp_v0_3 = AF(arg0, u16, 0xFE) + AF(arg0, u16, 0x100);
    AF(arg0, u16, 0xFE) = temp_v0_3;
    if ((s16) temp_v0_3 >= 0x600) {
        func_sc04_020_801820E0(arg0);
    }
    func_sc04_020_801826C8(arg0);
}

void func_sc04_020_80181F88(s32 arg0) {
    func_sc04_020_801826C8(arg0);
}

void func_sc04_020_80181FA8(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc04_020_80181948() == 2) {
        func_sc04_020_80182078(arg0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            goto block_5;
        }
    } else {
block_5:
        temp_v0 = AF(arg0, u16, 0x100) + AF(arg0, u16, 0x102);
        AF(arg0, u16, 0x100) = temp_v0;
        if ((s16) temp_v0 >= 0x50) {
            AF(arg0, u16, 0x100) = 0x50U;
        }
        temp_v0_2 = AF(arg0, u16, 0xFE) - AF(arg0, u16, 0x100);
        AF(arg0, u16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            func_8012E688(arg0, 0x515, 0);
            func_sc04_020_80182078(arg0);
            return;
        }
        func_sc04_020_801826C8(arg0);
    }
}

void func_sc04_020_80182078(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_020_801B5EC0 + ((D_sc04_020_801B5EFC[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_020_801826C8(arg0);
}

void func_sc04_020_801820E0(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_020_801B5EBC + ((D_sc04_020_801B5EFC[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_020_801826C8(arg0);
}

void func_sc04_020_80182154(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_020_801B5EBC + ((D_sc04_020_801B5EFC[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc04_020_801821B4(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc04_020_801B5EBC + ((D_sc04_020_801B5EFC[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc04_020_801826C8(arg0);
}

void func_sc04_020_80182234(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *end;

    p = (u8 *)&D_801202A0;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (*(u16 *)p == 0x61 && AF(p, s16, 0x70) == arg0) {
            AF(p, s32, 0xB0) = arg1;
            return;
        }
    }
}

void func_sc04_020_8018228C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc04_020_80182808(arg0, 0x3C);
    }
}

void func_sc04_020_801822EC(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc04_020_80182334(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc04_020_80182808(arg0, 0x3C);
    }
}

void func_sc04_020_80182384(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_sc04_020_801823BC(s32 arg0) {
    s32 t;

    t = func_8012E57C(0x61, (s16) arg0);
    if (t == 0) {
        return 1;
    }
    switch (AF(t, u16, 2)) {
    case 1:
    case 2:
        AF(t, s16, 0x108) = 1;
        return 0;
    case 3:
        AF(t, s16, 0x108) = 1;
        return 0;
    case 4:
        AF(t, s16, 0x108) = 1;
        return 1;
    }
}

void *func_sc04_020_80182448(u8 *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (AF(o, u16, 2) != 2) return 0;
    if (AF(o, u16, 0x34) != 0) return 0;
    if (AF(o, s16, 0x10A) != 0) return 0;
    if (!func_sc04_020_801824EC(o)) return 0;
    if (func_sc04_020_80182A84(o)) return 0;
    AF(o, s16, 0x34) = 1;
    func_80178BF8();
    return &func_80172710;
}

s32 func_sc04_020_801824EC(s32 arg0) {
    s32 o[2];
    FeSv v;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc04_020_8018254C(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &D_80078E78;
    v = func_80029504();
    s0 = D_sc04_020_801B6144[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc04_020_801B6114;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc04_020_801B6114;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)func_80029178(0xFA) != 0) s0 = &D_sc04_020_801B612C;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc04_020_801B6114;
        if ((u32)(v - 100) < 500) s0 = &D_sc04_020_801B612C;
        if (func_sc04_020_80181620() == 1) s0 = &D_sc04_020_801B612C;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc04_020_801B6114;
        if (func_sc04_020_801814DC() == 3) s0 = &D_sc04_020_801B612C;
        if (func_sc04_020_80181620() == 1) s0 = &D_sc04_020_801B612C;
        break;
    }
    func_80178CBC(o, s0);
}

s32 func_sc04_020_801826C8(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc04_020_801826FC(arg0);
}

s32 func_sc04_020_801826FC(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc04_020_80182730(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc04_020_80182794(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc04_020_80182808(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc04_020_80182860(u8 *arg0) {
    D_sc04_020_801B61B0[AF(arg0, u16, 2)]();
}

void func_sc04_020_8018289C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_020_801B61A0 | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_020_80182918(u8 *o) {
    u8 *p;
    u8 *best;
    s32 min;
    s32 d;
    u8 *end;
    p = &D_801202A0;
    min = 0x7FFF;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0x61) {
            d = func_8012BD14(p);
            if (d < min) {
                min = d;
                best = p;
            }
        }
    }
    if (min == 0x7FFF) {
        AF(o, s16, 0x5C) = 0;
        return;
    }
    p = best;
    AF(o, s32, 4) = AF(p, s32, 4);
    AF(o, s32, 8) = AF(p, s32, 8);
    AF(o, s32, 0xC) = AF(p, s32, 0xC);
    AF(AF(o, u8 *, 0x20), SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) -= AF(p, u16, 0xFE);
    AF(o, s16, 0x5C) = 0x800;
}

s32 func_sc04_020_80182A38(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc04_020_80182A84((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_sc04_020_80182A84(u8 *o) {
    SV8 xy;
    SV8 v;
    u8 *p;
    u8 *q;
    u8 *end;
    p = &D_801202A0;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, u16, 0) == 0x61) continue;
        if (func_sc04_020_80182B90(p) == 0) continue;
        q = AF(p, u8 *, 0x20);
        if (q == 0) continue;
        if (AF(q, s32, 0x24) == 0) continue;
        if (AF(q, s32, 4) < 0) continue;
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        func_8012F2E8(o, &v, &xy);
        if (func_8012CB64(&xy, -0xA0, 0x80, -0xC0, 0x80)) return 1;
    }
    return 0;
}

s32 func_sc04_020_80182B90(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc04_020_801B61B8; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc04_020_80182BEC(s32 arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc04_020_801B5F4C, (s32) sp10);
    AF(D_sc04_020_801BC734, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

void func_sc04_020_80182C2C(u8 *arg0) {
    D_sc04_020_801B9514[AF(arg0, u16, 2)]();
}

void func_sc04_020_80182C68(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc04_020_801B9400) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc04_020_80183678);
        func_801788B8(arg0, (s32) &func_sc04_020_80182D60);
    }
}

void func_sc04_020_80182CCC(void) {
}

void func_sc04_020_80182CD4(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc04_020_801B94F0[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_sc04_020_80182D20(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 *func_sc04_020_80182D60(u8 *arg0) {
    s32 *r;

    if (func_8012BD14(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc04_020_80182DBC(void) {
    s32 r;

    if ((s16)D_80126B5E < 0x400) {
        r = 0;
    } else if ((s16)D_80126B5E >= 0x501) {
        r = 0;
    } else if ((s16)D_80126B66 < 0x580) {
        r = 0;
    } else if ((s16)D_80126B66 >= 0x601) {
        r = 0;
    } else {
        r = (s16)D_80126B62 >= -0x200;
    }
    return r;
}

void func_sc04_020_80182E20(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    func_8012B2CC(arg0);
}

s32 func_sc04_020_80182E50(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    func_8012B2CC(arg0);
}

void func_sc04_020_80182E80(u8 *o) {
    u8 *r;
    s32 s1;
    r = func_8012C1B8();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, AF(o, s16, 0x70) == 0 ? &D_sc04_020_801B96D4 : &D_sc04_020_801B97C4);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc04_020_801B97DC[AF(o, s16, 0x70)] | 0x40000000;
    func_8012E8E0(o, D_sc04_020_801B97CC[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = func_80029504();
    if ((u8)func_80029178(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            func_801788B8(o, func_sc04_020_8018302C);
        } else {
            AF(o, s16, 0x2) = 3;
            AF(o, s16, 0x34) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
            AF(o, s32, 0x1C) = 0x30;
        }
    } else {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 2;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = -0x600;
            func_8012B2CC(o);
        } else {
            AF(o, s16, 0x2) = 4;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
            func_8012B2CC(o);
        }
    }
}

void func_sc04_020_80182FF0(u8 *arg0) {
    D_sc04_020_801B990C[AF(arg0, u16, 2)]();
}

s32 *func_sc04_020_8018302C(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc04_020_80182DBC() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc04_020_801830A8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    func_8002D4C8(0x7A0, 0);
    func_80029124(0xF6, 1);
    func_800D0F4C(0x59);
    temp_v0 = func_8012E57C(0x1F2, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

s32 func_sc04_020_80183118(void) {
    return D_sc04_020_801BC628 == 2;
}

void func_sc04_020_80183130(void) {
    func_8002D4C8(0x7E0, 0);
}

void func_sc04_020_80183154(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            func_80178CBC(o, &D_sc04_020_801B984C);
            AF(o, s16, 0x34) = 2;
        } else {
            func_80178CBC(o, &D_sc04_020_801B9864);
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 2:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
        }
        break;
    case 3:
        func_80178970(o);
        AF(o, s32, 0x1C) = 0;
        break;
    case 4:
        func_80178970(o);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x12) -= 0x20;
        AF(o, s32, 0x1C)++;
        if (AF(o, s32, 0x1C) >= 0x30) {
            AF(o, s16, 0x34) = 5;
        }
        break;
    case 5:
        if (func_80178970(o) != 0) {
            func_80178D18(o);
            func_sc04_020_80182E20(o);
        }
        break;
    }
}

void func_sc04_020_80183288(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc04_020_80182E50((s32) arg0);
        }
    }
}

void func_sc04_020_801832F0(void) {
}

void func_sc04_020_801832F8(void) {
}
