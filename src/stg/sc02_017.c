#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_017_8017BE9C(void) {
}

void func_sc02_017_8017BEA4(void) {
}

void func_sc02_017_8017BEAC(void) {
}

void func_sc02_017_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_017_8018DED8[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_017_8018DEC0;
extern void (*D_sc02_017_8018DEE0[])();
extern u8 D_sc02_017_8018DECC;
extern void (*D_sc02_017_8018DFF8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc02_017_8017C294();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_80178B18();
extern s32 func_80178970();
extern s32 func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc02_017_8018E050[])();
extern void func_80147324();
extern void func_sc02_017_8017D408();
extern void (*D_sc02_017_8018E064[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_017_8018E078[])();
extern void func_800D22E4();
extern void func_sc02_017_8017DB00();
extern void (*D_sc02_017_8018E08C[])();
extern void (*D_sc02_017_8018E10C[])();
void func_sc02_017_8017F254(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_017_8018E114[])();
void func_sc02_017_8017F27C(void);
extern void (*D_sc02_017_8018E11C[])();
void func_sc02_017_8017F2A4(void);
extern void func_800D1EBC();
extern void (*D_sc02_017_8018E128[])();
void func_sc02_017_8017F2CC(void);
extern void (*D_sc02_017_8018E134[])();
extern u8 D_sc02_017_8018E148;
extern void func_8016EE40();
extern u8 D_sc02_017_8018E154;
extern u8 D_sc02_017_8018E158;
extern u8 D_sc02_017_8018E16C;
extern void (*D_sc02_017_8018E1B4[])();
extern u8 D_sc02_017_8018E17C;
extern void (*D_sc02_017_8018E1C4[])();
extern u8 D_sc02_017_8018E1BC;
extern void func_sc02_017_8017F72C();
extern void (*D_sc02_017_8018E1CC[])();
extern s32 func_80178CBC();
extern u8 D_sc02_017_8018E214;
extern void (*D_sc02_017_8018E310[])();
extern s32 func_sc02_017_801805D4();
extern s32 func_80174764();
extern void (*D_sc02_017_8018E368[])();
extern s32 func_sc02_017_8018096C();
extern void (*D_sc02_017_8018E52C[])();
extern void (*D_sc02_017_8018E534[])();
extern void (*D_sc02_017_8018E54C[])();
extern void (*D_sc02_017_8018E5C4[])();
extern void (*D_sc02_017_8018E5DC[])();
extern u8 D_sc02_017_8018E5CC;
extern void func_8012CAE4();
extern void func_sc02_017_8018287C();
extern void (*D_sc02_017_8018E780[])();
extern void (*D_sc02_017_8018E914[])();
extern void (*D_sc02_017_8018EE88[])();
extern void (*D_sc02_017_8018EEE0[])();
extern void (*D_sc02_017_801CC350[])();
extern void (*D_sc02_017_801CC3AC[])();
extern void (*D_sc02_017_801CC3CC[])();
extern s32 func_sc02_017_80185B5C();
extern void (*D_sc02_017_801E1D78[])();
extern void (*D_sc02_017_801E1D8C[])();
extern void (*D_sc02_017_801E2150[])();
extern void (*D_sc02_017_801E2198[])();
extern void (*D_sc02_017_801EAE7C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc02_017_8018A800;
extern s32 func_80029178();
extern u8 D_sc02_017_801EAB6C;
extern s32 * func_sc02_017_8018925C();
extern s32 D_sc02_017_801EABD4[];
extern s32 func_8012C658();
extern void func_80029124();
extern s32 D_sc02_017_801EADA0;
extern s32 D_sc02_017_801EADA4;
extern s32 D_sc02_017_801EADB8;
extern s32 D_sc02_017_801EADCC;
extern s32 D_sc02_017_801EAE38;
extern s32 D_sc02_017_801EAD1C[];
extern s32 D_sc02_017_801EAC98[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc02_017_80189004();
extern void func_8014ADA8();
extern void (*D_sc02_017_801EAEA4[])();
extern u8 D_sc02_017_801EABA0;
extern u8 D_sc02_017_801EB344;
extern u8 D_sc02_017_801EB564;
extern u8 D_sc02_017_801EB354;
extern u8 D_sc02_017_801EB45C;
extern void (*D_sc02_017_801EB5C0[])();
extern void (*D_sc02_017_801ECD34[])();

void func_sc02_017_8017BEBC(u8 *arg0) {
    D_sc02_017_8018DED8[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_017_8018DEC0, 0xFD);
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

void func_sc02_017_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_017_8017C150(u8 *arg0) {
    D_sc02_017_8018DEE0[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_017_8018DECC, 0x18);
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

void func_sc02_017_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8014708C();
extern void func_801472C8();

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 D_sc02_017_801EFBC0;
extern s32 func_8012C588();

extern s16 D_801270C0;
extern void (*D_sc02_017_8018E5FC[])();
extern void (*D_sc02_017_8018E60C[])();
extern u8 D_sc02_017_8018E768;
extern void (*D_sc02_017_8018E90C[])();
extern void func_8012AD50();
extern s32 D_sc02_017_801EFBDC;
extern s32 func_8012BEE8();
extern void func_sc02_017_8018372C();
extern u8 D_sc02_017_801D58EC;
extern u8 D_sc02_017_801E0FEC;
extern u8 D_sc02_017_801E1334;
extern s32 func_sc02_017_80186BF0();
extern u8 D_sc02_017_801E1A04;
extern u8 D_sc02_017_801E190C;
extern s32 func_8012CBF4();
extern void func_sc02_017_801862B8();
extern s32 D_sc02_017_801D61C0;
extern s32 func_8012BCCC();
extern void func_sc02_017_80186FA8();
extern void func_8012B14C();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_017_801E1D64;
extern u8 D_sc02_017_801E1D70;
extern s32 func_80132EF4();
extern u8 D_sc02_017_801E2034;
extern void func_8012C098();
extern s16 D_80126CE0;
extern u8 D_sc02_017_801E9CCC;
extern u8 D_sc02_017_801EA154;
extern u8 D_sc02_017_801EA0AC;
extern void func_sc02_017_80188330();
extern u8 D_sc02_017_801E9E6C;
extern void func_80142414();
extern void (*D_sc02_017_801E2130[])();
extern s32 func_8012C044();
extern u8 D_sc02_017_801E2158;
extern void func_8001CA88();
extern void func_80143994();
extern u8 D_sc02_017_801E21A4;
extern void func_sc02_017_801883A0();
extern void func_80016714();

extern u8 D_sc02_017_8018E194;
extern s32 func_8017209C();
extern void func_80171990();
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
extern u16 D_801274EA;
extern u16 D_sc02_017_801EF9F0;
extern void func_8012A018();
extern void func_8012A094();
extern void (*D_sc02_017_8018E234[])();
extern void func_sc02_017_8017FCFC();
extern s32 D_sc02_017_8018E204[];
extern void (*D_sc02_017_8018E39C[])();
extern void func_8012E88C();
extern s32 func_sc02_017_80180C90();
extern void func_8012B260();
extern void func_sc02_017_80180CCC();
extern s32 func_8012B178();
extern void (*D_sc02_017_8018E3D8[])();
extern void func_sc02_017_801842E0();
extern void (*D_sc02_017_8018E450[])();
extern u8 D_sc02_017_8018E410;
extern s32 func_8012E778();
extern s32 func_8014CB2C();
extern u8 D_sc02_017_8018E490;
extern void func_8001D0E8();
extern u8 D_sc02_017_8018E574;
extern u8 D_sc02_017_8018E5EC;
extern void func_80174784();
extern void func_8012BF4C();
extern void func_801747AC();
extern void func_8012AD44();
void func_sc02_017_8017F59C(void);
extern u8 D_sc02_017_801EAB44;
extern u8 D_sc02_017_8118E5E4;
extern s32 func_80029504();
extern s32 func_sc02_017_8018347C();
extern u8 D_sc02_017_8018EAF0;
extern u8 D_sc02_017_8018ECA8;
extern void func_8012E8E0();
extern u8 D_sc02_017_8018EE50;
extern s32 D_sc02_017_801EF9F8;
extern void func_800D0F4C();
extern void func_801472F0();
extern s32 func_8001AAA0();
extern s32 func_800D0F8C();
extern s32 D_801270C8;
void func_sc02_017_8017F644(void);
extern s32 func_sc02_017_801836A8();
extern s32 func_8012BD14();
extern void func_8014CB68();
extern u8 D_sc02_017_80192280;
extern s32 * func_sc02_017_80184084();
extern u16 D_sc02_017_8018EEC0;
extern u16 D_sc02_017_8018EEC2;
extern u16 D_sc02_017_8018EEC4;
extern void func_8012AD80();
extern void func_sc02_017_80183790();
extern u8 D_80126CAC;
extern s32 func_800132BC();
extern s32 func_80013478();
extern s32 D_sc02_017_801EFCAC;
extern s32 D_sc02_017_801EFCB0;
extern void func_8013CB84();
extern void func_sc02_017_80184208();
extern u8 D_sc02_017_801CC310;
extern u8 D_sc02_017_801D0BB4;
extern u8 D_sc02_017_801CC344;
extern s32 func_8012B23C();
extern void (*D_sc02_017_801D0D78[])();
extern void func_sc02_017_80185EE4();
extern u8 D_sc02_017_801D0C6C;
extern u8 D_sc02_017_801D0CA0;
extern void func_80143970();
extern void func_8012B2CC();
extern u8 D_sc02_017_801D29A8;
extern u8 D_sc02_017_801D5AD4;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern void func_sc02_017_801859C4();
extern u8 D_sc02_017_801D4358;
extern u8 D_sc02_017_801D5FBC;
extern void func_80130D48();
extern u8 D_sc02_017_801D61B0;
extern void (*D_sc02_017_801D61E4[])();
extern s32 func_8012BD3C();
extern void func_sc02_017_80186124();
extern void func_80131E00();


extern u8 D_sc02_017_801D5C84;
extern void func_sc02_017_80185CA4();
extern u8 D_sc02_017_801E0F44;

extern u8 D_sc02_017_8018EEB4;
extern void func_8002A04C();
extern s32 D_sc02_017_801D619C;
extern u8 D_sc02_017_801E1C4C;
extern s32 D_sc02_017_801EFA78;


extern s32 D_sc02_017_8018E338[];
extern S12 D_sc02_017_8018E344[];

extern u8 D_sc02_017_8018E3E8;
extern u8 D_sc02_017_801CAAA8;
extern u8 D_sc02_017_801E154C;


extern s32 D_sc02_017_8018E2B8;
extern s32 D_sc02_017_8018E2C0;
extern s32 D_sc02_017_8018E2CC;
extern u8 D_sc02_017_8018E2E0;
extern s32 D_sc02_017_8018E294[];
extern s32 D_sc02_017_8018E2A4[];
extern s32 func_sc02_017_80180610();
extern void *D_80126B78;

extern s16 D_sc02_017_8018EE98;
extern u8 D_sc02_017_8018EE9C;
extern u8 D_sc02_017_8018EEAC[];
extern void func_8012E8A8();
extern void *D_sc02_017_801EF9FC;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 func_800291B4();
extern s16 D_80126B62;
extern s32 D_80126B5C;
extern u16 D_801202A0;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc02_017_8018DFA8;
extern u8 D_sc02_017_8018DF44[];
extern s32 func_80013328();
extern void func_801746A4();
extern void func_800233CC();
extern u8 D_sc02_017_801EF7E0;
extern u8 D_sc02_017_801EF7E1;
extern u8 D_sc02_017_801EF7E2;
extern u8 D_sc02_017_801EF7E4;
extern u8 D_sc02_017_801EF7E5;
extern u8 D_sc02_017_801EF7E6;
extern s32 D_sc02_017_801EF9E4;
extern s32 D_sc02_017_801EF9E8;
extern s32 D_sc02_017_801EF9EC;
extern s32 func_8001D074();
extern void func_8001CD50();
extern u16 D_sc02_017_801ECC10;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc02_017_8018E024[];
extern void func_80017DC4();
extern void func_80017E68();
extern void func_80017758();
extern WMtx D_800AE620;
extern void func_80016A5C();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 func_sc02_017_80189D08();
extern s32 func_sc02_017_80189C4C();

extern u8 D_sc02_017_8018E080;
extern u8 *func_800D21C4();
extern void func_80128ED8();
extern void func_sc02_017_8018A368();

typedef struct { s32 x, y, z, pad; } V4;
extern u8 D_sc02_017_801E1F04;
extern u8 D_sc02_017_801E1CDC;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 func_8012B77C();
extern u8 D_sc02_017_801E1D80;

extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern s32 func_sc02_017_80185AF0();


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
extern u8 D_sc02_017_8018DF10;
extern u8 D_sc02_017_8018DF4C;
extern u8 D_sc02_017_801ECBE8;
extern u8 D_sc02_017_801EF770;
extern u8 D_sc02_017_801EF77C;
extern u8 D_sc02_017_801EF77D;
extern u8 D_sc02_017_801EF77E;
extern u8 D_sc02_017_801EF78C;
extern u8 D_sc02_017_801EF78D;
extern u8 D_sc02_017_801EF78E;
extern u8 D_sc02_017_801EF79D;
extern u8 D_sc02_017_801EF79E;
extern u8 D_sc02_017_801EF7A0;
extern u8 D_sc02_017_801EF7A1;
extern u8 D_sc02_017_801EF7A2;
extern u8 D_sc02_017_801EF7A4;
extern u8 D_sc02_017_801EF7A5;
extern u8 D_sc02_017_801EF7A6;
extern u8 D_sc02_017_801EF7AC;
extern u8 D_sc02_017_801EF820;
extern void func_8001C810();
extern u8 D_sc02_017_8018E63C;
extern void func_8001CC3C();
extern void func_80128EA8();
typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc02_017_801E13FC;
extern void func_80143B6C();
extern void func_8012ADE4();
extern s32 func_8012CBA4();
extern s32 func_sc02_017_80185F88();
extern void func_sc02_017_80187178();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 func_8012BC60();
extern s32 func_8012B6D4();
extern void func_8012B0B4();
extern s32 func_8012CEB0();

extern u8 D_sc02_017_801E1134;
extern u8 D_sc02_017_801E11DC;
extern u8 D_sc02_017_801E1264;
extern u8 D_sc02_017_801E1AFC;
extern s32 func_8012B744();
extern void func_sc02_017_80186B7C();

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_8012F14C();
extern u8 D_801152A8;
extern u8 D_sc02_017_801EB588;
extern WMtx *D_sc02_017_801EB5BC;
extern WMtx D_sc02_017_801EFBA0[];
extern s32 func_80134510();
extern s8 D_sc02_017_801EB574[];

extern u16 D_80126B5E;
extern u16 D_80126B66;
extern s32 func_8014CB0C();
extern void func_8012F568();

typedef struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } SpawnDef;
extern s16 D_80126B96;
extern u8 D_sc02_017_801E2118;
extern SV8 D_sc02_017_801E2128;
extern s32 func_8012C51C();
extern u8 D_sc02_017_801EA2A4;
extern u8 D_sc02_017_801E2148;

extern s32 func_sc02_017_80185D10();
extern void func_sc02_017_80185C68();
extern int rand();
extern s32 func_80135A4C();

extern void func_80015978();
extern s32 D_800AF648[];
extern u8 *D_sc02_017_8018E8DC[];
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void func_sc02_017_80183168();
extern void func_sc02_017_801831FC();

extern s32 D_sc02_017_801EF774;
extern s32 D_sc02_017_801EF778;
extern s32 D_sc02_017_801EF780;
extern s32 D_sc02_017_801EF784;
extern s32 D_sc02_017_801EF788;
extern s32 D_sc02_017_801EF790;
extern s32 D_sc02_017_801EF794;
extern s32 D_sc02_017_801EF798;

void func_sc02_017_8017C294(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc02_017_801EF770 = D_sc02_017_801EF780 = D_sc02_017_801EF790 = v.vx;
    D_sc02_017_801EF774 = D_sc02_017_801EF784 = D_sc02_017_801EF794 = v.vy;
    D_sc02_017_801EF778 = D_sc02_017_801EF788 = D_sc02_017_801EF798 = v.vz;
}

void func_sc02_017_8017C3C4(u8 *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (func_800291B4(*AF(arg0, u8 *, 0xDC) + 0x3A) & 0xFF) {
        func_8012CAE4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x20) == 0) {
        if (func_8012C354(arg0, &D_sc02_017_8018DF10) == 0) {
            return;
        }
        func_8001C810(AF(arg0, s32, 0x20), &D_sc02_017_801ECBE8);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_017_8018DF4C);
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(arg0, u8 *, 0x20), u8 *, 0x80) = &D_sc02_017_801EF770;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xCC) = o;
        p = &D_sc02_017_801EF7A0;
        func_8001CD50(o, p);
        D_sc02_017_801EF7A2 = 0x80;
        p[0] = 0x80;
        D_sc02_017_801EF7A1 = 0xE0;
        D_sc02_017_801EF7A5 = 0;
        D_sc02_017_801EF7A4 = 0;
        D_sc02_017_801EF7A6 = 0;
        func_800233CC(p, 0x38);
        s = (U12x9 *) &D_sc02_017_801ECC10;
        b = (U12x9 *) &D_sc02_017_801EF820;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = AF(arg0, u16, 6);
        AF(o, u16, 0xA) = AF(arg0, u16, 0xA) -= 4;
        AF(o, u16, 0xC) = AF(arg0, u16, 0xE);
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_017_801EF79E = 0xFF;
        D_sc02_017_801EF7AC = 0xFF;
        D_sc02_017_801EF78E = 0xFF;
        D_sc02_017_801EF78C = 0xFF;
        D_sc02_017_801EF77E = 0xFF;
        D_sc02_017_801EF77C = 0xFF;
        D_sc02_017_801EF79D = 0x80;
        D_sc02_017_801EF78D = 0x80;
        D_sc02_017_801EF77D = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_017_801EF820;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc02_017_8017C750(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &D_801202A0, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = func_80013328(arg0 + 4, &D_80126B5C);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc02_017_8017C294(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_017_8018DF44[(s16) i]) {
                func_801746A4();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (func_800291B4(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (func_8012BD14(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            func_80178B18(arg0, &D_sc02_017_8018DFA8);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_017_8017C9C8(u8 *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) func_8001D074(0x7E, 0x100);
    if (o != 0) {
        AF(arg0, u8 *, 0xD0) = o;
        p = &D_sc02_017_801EF7E0;
        func_8001CD50(o, p);
        D_sc02_017_801EF7E1 = 0xFF;
        D_sc02_017_801EF7E2 = 0xFF;
        p[0] = 0xFF;
        D_sc02_017_801EF7E6 = 8;
        D_sc02_017_801EF7E4 = 8;
        D_sc02_017_801EF7E5 = 0x18;
        func_800233CC(p, 0x100);
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA) - 0x38;
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_017_801EF9E4;
        q[0] = v.vx;
        D_sc02_017_801EF9E8 = v.vy;
        D_sc02_017_801EF9EC = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc02_017_8017CB10(u8 *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_017_801ECC10;
    r = AF(arg0, U12 *, 0xD8);
    p = AF(arg0, u8 *, 0xDC);
    o = AF(arg0, u8 *, 0xD0);
    s4 = AF(arg0, s16 *, 0x20);
    if (p[1] != 0 && AF(arg0, s16, 0x108) == 0) {
        AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--AF(arg0, s32, 0x1C) != -1) {
        func_sc02_017_8017C294(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        AF(arg0, u16, 2) += 1;
    }
}

void func_sc02_017_8017CC90(u8 *arg0) {
    D_sc02_017_8018DFF8[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017CCCC(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc02_017_8017CD18(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc02_017_8017C294((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern u8 D_sc02_017_801D29B8;
extern void func_sc02_017_8018A428();
extern u8 D_sc02_017_801D609C;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern s32 func_80012F74();
extern void func_sc02_017_8017F4AC();
extern void func_801292C8();
extern void func_8012931C();
extern void func_8012B200();
extern u8 D_sc02_017_801E205C;
extern u8 D_sc02_017_801E2090;
extern u8 D_sc02_017_801E3C4C;
extern void func_80013F3C();
extern s16 D_sc02_017_801EC008[];
extern u8 D_sc02_017_801ECCE8;
extern u8 D_sc02_017_801ECCF4;
extern s32 func_sc02_017_8018A310();
extern s32 func_8012C194();
extern void func_8012EC04();

void func_sc02_017_8017CE0C(u8 *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = AF(arg0, u8 *, 0xDC);
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (AF(arg0, s16, 0x108) == 0) {
            AF(arg0, s16, 0x108) = func_80128CFC(AF(p, u16, 2));
        }
        t = AF(arg0, s16, 0x108);
        v = t;
    }
    if (v != 0) {
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_017_8017CE8C(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_017_8017CF40(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_017_8017CFAC(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_017_8017D038(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_017_8017D058(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_017_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_8017D0AC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_017_8017D0E8(u8 *arg0) {
    D_sc02_017_8018E050[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_017_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D1D0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D254(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_017_8017D408((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_017_8017D408(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    func_80017DC4(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    func_80017E68(&r, &m);
    t = D_sc02_017_8018E024;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        func_80017758(&q, &m);
    }
    t = D_sc02_017_8018E024;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        func_80017758(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc02_017_8018E024;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            func_80017758(&q, &m);
        }
    }
}

void func_sc02_017_8017D714(u8 *arg0) {
    D_sc02_017_8018E064[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017D750(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_017_8017D790(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D800(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D88C(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_017_8017D408((s32) arg0);
}

void func_sc02_017_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_017_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_017_8017D9B4(u8 *arg0) {
    D_sc02_017_8018E078[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017D9F0(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc02_017_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_017_8017DB00((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc02_017_8017DB00(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = D_800AE620;
    l.code = 0x50000000;
    func_80016A5C(&l, &m);
}

void func_sc02_017_8017DC70(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc02_017_8017DD3C(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc02_017_8018E080, 0x2A);
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

void func_sc02_017_8017DE98(u8 *arg0) {
    D_sc02_017_8018E08C[AF(arg0, u16, 2)]();
}

void func_sc02_017_8017DED4(u8 *arg0) {
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

void func_sc02_017_8017DF34(u8 *obj) {
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

void func_sc02_017_8017EE14(u8 *arg0) {
    D_sc02_017_8018E10C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_017_8017EE50(u8 *arg0) {
    func_sc02_017_8017F254();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_017_8017EE94(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_017_8017EEB8(u8 *arg0) {
    D_sc02_017_8018E114[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_017_8017EEF4(u8 *arg0) {
    func_sc02_017_8017F27C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc02_017_8017EF38(u8 *arg0) {
    D_sc02_017_8018E11C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_017_8017EF74(u8 *arg0) {
    func_sc02_017_8017F2A4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_017_8017EFB4(u8 *arg0) {
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

void func_sc02_017_8017F030(void) {
    func_800D1EBC();
}

void func_sc02_017_8017F050(u8 *arg0) {
    D_sc02_017_8018E128[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_017_8017F08C(u8 *arg0) {
    func_sc02_017_8017F2CC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_017_8017F0CC(u8 *arg0) {
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

void func_sc02_017_8017F140(void) {
    func_800D1EBC();
}

void func_sc02_017_8017F160(u8 *arg0) {
    D_sc02_017_8018E134[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_017_8017F19C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_017_8017F1B8(u8 *arg0) {
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

void func_sc02_017_8017F234(void) {
    func_800D1EBC();
}

void func_sc02_017_8017F254(void) {
    func_8016EE40((s32) &D_sc02_017_8018E148, 0x01000000);
}

void func_sc02_017_8017F27C(void) {
    func_8016EE40((s32) &D_sc02_017_8018E154, 0x01000000);
}

void func_sc02_017_8017F2A4(void) {
    func_8016EE40((s32) &D_sc02_017_8018E158, 0x01000000);
}

void func_sc02_017_8017F2CC(void) {
    func_8016EE40((s32) &D_sc02_017_8018E16C, 0x01000000);
}

void func_sc02_017_8017F2F4(u8 *arg0) {
    D_sc02_017_8018E1B4[AF(arg0, u8, 0x216)]();
}

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

extern void func_8012F0BC();
extern void func_8012F1A4();
extern s32 func_80133784();
extern u8 D_sc02_017_801EFA68;
extern u8 D_sc02_017_801CC38C;
extern s32 D_sc02_017_801CCE84;
extern void func_80132288();
extern void func_8013240C();
extern SV8 D_sc02_017_8018E328[];
extern void RotTransSV();
extern s32 func_80135888();
extern void func_80178BF8();
extern void func_80172710();
extern SV8 D_sc02_017_8018EED4;
extern u8 D_sc02_017_8018E1F4;
extern void func_801746DC();

extern u8 D_sc02_017_8018EEA4;
extern s32 D_sc02_017_8018EEC8;
extern s32 D_sc02_017_8018EECC;
extern s32 D_sc02_017_8018EED0;
extern s32 FaceHelper();
extern u8 D_sc02_017_801C81C8;
extern u8 D_sc02_017_8018E1E4;
extern s32 SetScript();

extern void func_sc02_017_80180398();
extern u8 D_sc02_017_8018E264;
extern s32 *func_sc02_017_8018183C();
extern u8 D_sc02_017_8018E254;
extern s16 D_sc02_017_801D61DC;
extern s16 D_sc02_017_801D61DE;
extern s16 D_sc02_017_801D61E0;
extern s32 func_sc02_017_80189354();
extern void ApplyMatrixLV();
extern SV8 D_sc02_017_8018E564;
extern SV8 D_sc02_017_8018E56C;
extern s16 D_sc02_017_8018E40A;
extern void func_80143BDC();
extern s32 func_8012CBCC();

extern void func_sc02_017_801866C8();
extern SV8 D_sc02_017_801CC3BC[];
extern s16 D_80126940[];
extern s16 D_sc02_017_8018E1E0[];
extern u8 D_sc02_017_8018E1D0;
extern s32 func_80148800();
extern s32 func_80013294();
extern s32 ratan2();
extern s32 func_80012DBC();
extern R34 D_sc02_017_801D60BC[];
extern u8 D_sc02_017_801D6158;
extern void func_sc02_017_80180410();
extern s32 func_sc02_017_801804A8();
extern s32 func_8012CC40();
extern u8 D_sc02_017_8018E28C;

extern s32 func_sc02_017_80180CEC();
extern void func_sc02_017_80180C44();
extern s32 func_8012B608();
extern void Square0();
extern s32 D_sc02_017_801D6198;
extern s32 D_sc02_017_8018EF88;
extern s32 D_sc02_017_8018EF84;
extern u8 D_sc02_017_8018E920;
extern u8 D_sc02_017_8018E928;
extern s32 func_8012B8A4();
extern void func_800139C8();
extern s32 func_8016F1AC();


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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s32 func_8012BDBC();
extern SV8 D_sc02_017_801EAE94[];



extern u8 D_sc02_017_801D0DA8;

extern u8 D_sc02_017_801D5BC4;
extern u8 D_80078EAE;

typedef struct { s16 x, y, z, w, f, g, h, i; s32 j; } Arg15DC;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern s32 func_sc02_017_80186BC4();


extern u32 D_sc02_017_801EFA00;
extern u16 D_sc02_017_801EFA04[];
extern u16 D_sc02_017_801EFA44[];
extern u16 D_sc02_017_8018EF14[];
extern u16 D_sc02_017_8018EEF4[];
extern u8 D_sc02_017_8018EF54;
extern void func_800183E0();
extern u8 D_sc02_017_801D61C4;

extern void *D_sc02_017_801EFCBC;
extern s32 func_8012E57C();
extern u8 D_sc02_017_8018E408;
extern u8 D_sc02_017_8018E3F8;
extern void func_8013C9C4();

extern u8 D_sc02_017_8018E4C4;
extern s16 D_sc02_017_8018EEDC;
void func_sc02_017_80183800(u8 *o);
extern u8 D_sc02_017_8018E244;
extern u8 D_sc02_017_801EA648;
extern u8 D_sc02_017_801EA6E8;
extern void func_8014BF18();
extern void func_sc02_017_80182844();
extern SV8 D_sc02_017_801EE3F4;
extern void func_sc02_017_80182938();
void func_sc02_017_801829F4(s32 arg0, SV8 *arg1);

void func_sc02_017_8017F330(u8 *o) {
    s32 i;

    AF(o, s32, 0xB0) = (s32) &D_sc02_017_801EA648;
    AF(o, s32, 0xCC) = (s32) &D_sc02_017_801EA6E8;
    AF(o, s16, 0x20C) = 0;
    AF(o, s16, 0x20E) = 0;
    AF(o, s16, 0x210) = 0;
    func_8014BF18(4);
    for (i = 0; i < 4; i++) {
        func_sc02_017_80182844((s16) i);
    }
    func_80171990(o);
}

extern u8 D_sc02_017_8018EAA0;
extern u8 D_sc02_017_8018E9E4;

extern u8 D_sc02_017_8018E3B0;
extern s32 func_8012C438();
extern u8 D_sc02_017_8018E4F8;
extern u8 D_sc02_017_8018E540;
extern u8 D_sc02_017_801CA2D0;
extern u8 D_sc02_017_8018E38C;
extern u8 D_sc02_017_8018E374;
extern s32 D_sc02_017_801CC3B4[];
extern SV8 D_sc02_017_8018E61C[];
extern void StartRumbleScript();
s32 func_sc02_017_8017F474(s32 arg0);
extern s16 D_sc02_017_8018E19A[];
extern u8 D_sc02_017_8018E140;
extern u8 D_sc02_017_8018E0B8;
extern void func_800D1724();
extern void func_80171928();

void func_sc02_017_8017F3B0(u8 *o) {
    StartRumbleScript(&D_sc02_017_8018E140);
    func_sc02_017_8017F4AC(o);
    if (func_sc02_017_8017F474((s32)o) != 0) {
        switch (D_sc02_017_8018E19A[AF(o, s16, 0x210) * 4]) {
        case 0:
            break;
        case 1:
            func_800D1724(&D_sc02_017_8018E0B8);
            break;
        case 2:
            func_80171928(o);
            return;
        }
        AF(o, s16, 0x210)++;
        func_sc02_017_8017F474((s32)o);
    }
}

s32 func_sc02_017_8017F474(s32 arg0) {
    return func_8017209C(arg0, (s32) ((AF(arg0, s16, 0x210) * 8) + &D_sc02_017_8018E194), 0x80, 0xA);
}

void func_sc02_017_8017F4AC(u8 *arg0) {
    u16 *p = &D_800B99DA;
    AF(arg0, s16, 0x20E) = func_80012F74(AF(arg0, s16, 0x20E), 0, 10, 1);
    AF(arg0, s16, 0x12E) = 1;
    AF(arg0, s16, 0x128) = AF(arg0, u16, 0x20E) + rsin((*p & 0x3F) << 6) / 4;
    AF(arg0, s16, 0x12C) = rcos((*p & 0x3F) << 6) / 8;
    if (AF(arg0, s16, 0x13A) != 0) {
        AF(arg0, s16, 0x13A) += (s8)AF(arg0, u8, 0x20D);
        AF(arg0, s16, 0x20C) -= 0xE0;
        if (AF(arg0, s16, 0x13A) < 0) {
            AF(arg0, s16, 0x13A) = 0;
            AF(arg0, s16, 0x20C) = 0;
        }
    }
}

void func_sc02_017_8017F59C(void) {
    func_8016EE40((s32) &D_sc02_017_8018E17C, 0x01000000);
}

void func_sc02_017_8017F5C4(u8 *arg0) {
    D_sc02_017_8018E1C4[AF(arg0, u8, 0x216)]();
}

void func_sc02_017_8017F600(s32 arg0) {
    BeginScene();
    func_80029124(0x97, 1);
    func_80171990(arg0);
}

void func_sc02_017_8017F63C(void) {
}

void func_sc02_017_8017F644(void) {
    func_8016EE40((s32) &D_sc02_017_8018E1BC, 0x01000000);
}

void func_sc02_017_8017F66C(void) {
    D_80126954 = 0x1F4;
    D_80126950 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x1C7;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x10;
    D_8012697A = 0;
    D_sc02_017_801EF9F0 = 0;
    func_8012A018((s32) func_sc02_017_8017F72C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_017_8017F72C((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc02_017_801EF9F0 = D_801274EA;
}

void func_sc02_017_8017F72C(s32 arg0) {
    D_sc02_017_8018E1CC[AF(arg0, u8, 4)]();
}

void func_sc02_017_8017F768(u8 *o) {
    SV8 a;
    SV8 b;
    s32 d;
    s16 ang;
    s32 r;
    s32 t;

    if (func_80148800(&D_80126B58) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_017_8018E1E0[AF(o, u8, 5)];
    }
    a.x = D_80126940[0];
    a.y = 0;
    a.z = D_80126940[2];
    d = (s16)func_80013294(&D_sc02_017_8018E1D0, &a);
    if (d < 0x200) {
        ang = 0x800;
        AF(o, s16, 0x20) = 0x71;
        AF(o, s16, 0x22) = 0;
        AF(o, s16, 0x24) = 0;
        AF(o, s16, 0x2E) = 0;
        AF(o, s16, 0x30) = -0xC0;
        AF(o, s16, 0x32) = 0;
    } else {
        AF(o, s16, 0x22) = 0;
        t = ratan2(D_80126940[0] << 16, D_80126940[2] << 16) & 0xFFF;
        ang = t;
        AF(o, s16, 0x20) = 0x1C7;
        AF(o, s16, 0x30) = -0x10;
        AF(o, s16, 0x22) = 0;
        AF(o, s16, 0x24) = 0;
        AF(o, s16, 0x2E) = 0;
        AF(o, s16, 0x32) = 0;
        if (d > 0x800) {
            b.x = 0;
            b.y = D_80126940[1];
            b.z = 0x800;
            func_sc02_017_801898A4(t, &b, &b);
            D_80126940[0] = b.x >> 3;
            D_80126940[1] = b.y >> 3;
            D_80126940[2] = b.z >> 3;
        }
    }
    D_801274EA = ang;
    r = func_80012DBC((s16)D_sc02_017_801EF9F0, ang, 0x14, 1);
    D_sc02_017_801EF9F0 = r;
    func_sc02_017_8017F92C(o, (s16)r, D_80126940);
}

void func_sc02_017_8017F92C(s32 arg0, s32 arg1, s32 arg2) {
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
    func_sc02_017_80189A68(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

s32 func_sc02_017_8017FAF8(void) {
    return 0x18;
}

void func_sc02_017_8017FB00(u8 *arg0) {
    D_sc02_017_8018E234[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc02_017_8017FCFC((s32) arg0);
    }
}

void func_sc02_017_8017FB60(u8 *o) {
    u8 *p;
    s32 r;
    s32 v;

    AF(o, s16, 0x76) = 1;
    AF(o, u16, 0x5C) = 0x8800;
    p = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(p, &D_sc02_017_801C81C8);
    r = func_800291B4(D_sc02_017_8018E204[AF(o, u16, 0x70) & 0xF]) & 0xFF;
    if (r != 3) {
        v = func_8012C658(0xAF, AF(o, s16, 0x70), o);
        AF(o, s32, 0xCC) = v;
        if (v == 0) {
            func_8012CAE4(o);
            return;
        }
        if (r == 0) {
            AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E1E4 | 0x40000000) | 0x20000000;
        } else {
            AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E1F4 | 0x40000000) | 0x20000000;
            AF(o, u16, 0x5C) |= 0x400;
        }
    } else {
        AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E1F4 | 0x40000000) | 0x20000000;
        AF(o, u16, 0x5C) |= 0x400;
    }
    AF(o, u8, 0x75) = 4;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0xAE) = -4;
    SetScript(o, &D_sc02_017_8018A800);
}

void func_sc02_017_8017FC84(void) {
}

void func_sc02_017_8017FC8C(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_sc02_017_8018E214);
}

void func_sc02_017_8017FCB8(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0xDC) = 0;
    }
}

void func_sc02_017_8017FCFC(u8 *o) {
    s16 n;
    u16 f;
    u16 v;

    n = AF(o, s16, 0xFE);
    if (n != 0) {
        AF(o, s16, 0xFE) = n - 1;
        return;
    }
    f = AF(o, u16, 0x5C);
    if (!(f & 1)) {
        return;
    }
    AF(o, u16, 0x5C) = f & 0xFFFE;
    if (func_800291B4(D_sc02_017_8018E204[AF(o, u16, 0x70) & 0xF]) & 0xFF) {
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xFE) = 8;
        return;
    }
    v = AF(o, u16, 0x5E);
    if (v != 0xC) {
        AF(o, s16, 0xFE) = 8;
        if (v != 0x1D && AF(o, s32, 0xDC) == 0) {
            AF(o, s32, 0xDC) = 1;
            func_801746DC();
            func_80178BF8();
            AF(o, s16, 2) = 2;
            func_8002D4C8(0x59D, 0);
        }
    } else {
        AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E1F4 | 0x40000000) | 0x20000000;
        func_800291A0(D_sc02_017_8018E204[AF(o, u16, 0x70) & 0xF], 1);
        AF(o, u16, 0x5C) = 0x8C00;
    }
    AF(o, s16, 0x5E) = 0;
}

void func_sc02_017_8017FE3C(u8 *arg0) {
    D_sc02_017_8018E310[AF(arg0, u16, 2)]();
}

extern u8 D_sc02_017_801C8558;
extern s32 func_sc02_017_80181E5C(u8 *o);
extern s32 func_sc02_017_80181E98(u8 *o);
extern void func_8012E014();
extern B8 D_sc02_017_801EE3EC;
extern void func_8001C2C4();
extern SV8 D_sc02_017_8018E8EC[];

void func_sc02_017_8017FE78(u8 *o) {
    s32 t;

    AF(o, s16, 0x76) = 1;
    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc02_017_801C8558);
    AF(o, s16, 0xA) -= 0x42;
    func_8012C658(0x101, 0, o);
    func_8012C658(0x101, 1, o);
    AF(o, u8, 0x75) = 4;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x108) = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, u8 *, 0xE4) = o + 0xFC;
    AF(o, s16, 0xE8) = 1;
    AF(o, s32, 0xEC) = 0;
    AF(o, s16, 0xF0) = -2;
    SetScript(o, o + 0xE4);
    func_8012B2CC(o);
}

void func_sc02_017_8017FF48(u8 *o) {
    s32 r;

    if (func_sc02_017_801805D4() == 1) {
        return;
    }
    r = func_800291B4(D_sc02_017_8018E204[AF(o, u16, 0x70) & 0xF]) & 0xFF;
    if (r == 1) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x34) = 0;
        func_sc02_017_80180398(o);
        func_8012B23C(o);
        func_8012B14C(o, &D_sc02_017_8018E264);
        func_8002D4C8(0x59E, 0);
        func_8002D4C8(0x5C1, 0);
    } else if (r == 2) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0xA) += 0x42;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
        AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E254 | 0x40000000) | 0x20000000;
        AF(o, u16, 0x5C) = 0x8C00;
        AF(o, s32, 0xCC) = func_801788B8(o, func_sc02_017_8018183C);
        func_8012B2CC(o);
    }
}

void func_sc02_017_80180064(s32 arg0) {
    func_sc02_017_801805D4(arg0);
}

void func_sc02_017_80180084(u8 *o) {
    SV8 a;
    SV8 b;
    s32 one;
    u8 *p;

    one = 1;
    if (func_sc02_017_801805D4() == one) {
        return;
    }
    if (AF(o, u16, 0x34) == 0) {
        func_sc02_017_80180410(o, o + 0xEC, o + 0xF4);
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) == 0) {
            func_8002D4C8(0x5C1, 0);
        }
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x10) = (AF(p, u16, 0x10) + 0x100) & 0xFFF;
        if (func_8012CC40(o, &D_sc02_017_8018E28C) & 0x2000) {
            AF(o, s16, 2) = 2;
            return;
        }
        func_8012B2CC(o);
        func_sc02_017_80180410(o, &a, &b);
        if (func_sc02_017_801804A8(o, o + 0xEC, &a) == one || func_sc02_017_801804A8(o, o + 0xF4, &b) == one) {
            func_8002D4C8(0x5A6, 0);
            AF(o, u16, 0x34)++;
        }
    } else {
        AF(o, s32, 0xE0) += 0x40000;
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0xE2);
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) >= 0x400) {
            func_8002D4C8(0x5A7, 0);
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
            AF(o, s32, 0xE0) = -(AF(o, s32, 0xE0) >> 1);
            if (--AF(o, s32, 0x1C) == 0) {
                AF(o, s16, 2) = 2;
                AF(o, s32, 0xCC) = func_801788B8(o, func_sc02_017_8018183C);
                func_800291A0(D_sc02_017_8018E204[AF(o, u16, 0x70) & 0xF], 2);
            }
        }
    }
}

s32 func_sc02_017_80180270(u8 *arg0) {
    if (func_sc02_017_801805D4() != 1) {
        AF(arg0, s16, 2) = 5;
        D_sc02_017_8018E2B8 = D_sc02_017_8018E294[(AF(arg0, u16, 0x70) & 0xF)];
        D_sc02_017_8018E2C0 = (s32) (s16) AF(arg0, u16, 0x70);
        D_sc02_017_8018E2CC = D_sc02_017_8018E2A4[func_sc02_017_80180610()];
        func_80178CBC((s32) arg0, (s32) &D_sc02_017_8018E2E0);
    }
}

void func_sc02_017_80180304(s32 arg0) {
    if ((func_sc02_017_801805D4() != 1) && (func_801789AC(arg0) != 0)) {
        func_80178D18(arg0);
        if ((func_800291B4(D_sc02_017_8018E204[(AF(arg0, u16, 0x70) & 0xF)]) & 0xFF) == 3) {
            func_sc02_017_80180590(arg0);
            return;
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_017_80180398(u8 *o) {
    s32 x, y, z;

    AF(o, s16, 0xFE) = 0x83;
    AF(o, s16, 0xFC) = 0;
    AF(o, s16, 0x100) = 0;
    x = AF(o, s16, 6);
    y = AF(o, s16, 0xA) - 0x83;
    z = AF(o, s16, 0xE);
    AF(o, s16, 6) = x;
    AF(o, s16, 0xA) = y;
    AF(o, s16, 0xE) = z;
    func_8012B260(o);
    AF(o, u16, 0x5C) = 0x8C00;
    AF(o, s32, 0x58) = ((s32) &D_sc02_017_8018E244 | 0x40000000) | 0x20000000;
}

s32 func_sc02_017_8018209C(u8 *o);
extern u16 D_sc02_017_8018E55C[];
extern s16 D_sc02_017_8018E560[];
extern s32 func_801290DC();
extern SV8 D_sc02_017_8018E27C[];

void func_sc02_017_80180410(u8 *o, SV8 *a, SV8 *b) {
    u8 *m;
    s32 flag;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc02_017_8018E27C[0], a, &flag);
    RotTransSV(&D_sc02_017_8018E27C[1], b, &flag);
}

s32 func_sc02_017_801804A8(u8 *o, SV8 *a, SV8 *b) {
    if (func_8012CEB0(a, b, 1) & 0x2000) {
        AF(o, s16, 0xFE) = 0;
        AF(o, s32, 0x58) = ((s32)&D_sc02_017_8018E254 | 0x40000000) | 0x20000000;
        AF(o, s16, 0xA) += 0x83;
        func_8012B260(o);
        AF(o, s32, 0x1C) = 3;
        AF(o, s32, 0xE0) = 0;
        return 1;
    }
    return 0;
}

s32 func_sc02_017_80180530(void) {
    return func_80174764() == 1;
}

void func_sc02_017_80180554(u8 *arg0) {
    func_800291A0(D_sc02_017_8018E204[(AF(arg0, u16, 0x70) & 0xF)], 3);
}

void func_sc02_017_80180590(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_8012C218(temp_a0);
    }
    func_8012C218(arg0);
}

s32 func_sc02_017_801805D4(u8 *o) {
    if (AF(o, s16, 0x108) == AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        return 0;
    }
    func_8012C218(o);
    return 1;
}

s32 func_sc02_017_80180610(void) {
    s32 n = 0;
    s32 i;

    for (i = 0; i < 4; i++) {
        if ((func_800291B4(D_sc02_017_8018E204[i]) & 0xFF) == 3) {
            n++;
        }
    }
    return n;
}

void func_sc02_017_8018068C(u8 *arg0) {
    D_sc02_017_8018E368[AF(arg0, u16, 2)]();
}

void func_sc02_017_801806C8(s32 arg0) {
    s32 t;

    t = func_8012C1B8();
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(t, D_sc02_017_8018E338[AF(arg0, u16, 0x70) & 0xF]);
    AF(arg0, u16, 2) = 1;
    AF(arg0, S12, 0xFC) = D_sc02_017_8018E344[AF(arg0, u16, 0x70) & 0xF];
    AF(arg0, s32, 0xCC) = arg0 + 0xFC;
    AF(arg0, s16, 0xD0) = 1;
    AF(arg0, s32, 0xD4) = 0;
    AF(arg0, s16, 0xD8) = -2;
    AF(arg0, u16, 0x108) = AF(AF(arg0, s32, 0x64), u16, 0x36);
    SetScript(arg0, arg0 + 0xCC);
}

void func_sc02_017_801807DC(u8 *o) {
    u8 *p;
    S12 *e;
    u8 *q;
    s16 v;

    q = 0; /* MATCH-TRICK: an early set makes cse keep q (not o) as the 0x100 store base, so it shares a0 */
    p = AF(o, u8 *, 0x64);
    if (((s32 (*)())func_sc02_017_8018096C)() == 1) {
        return;
    }
    if (AF(p, u16, 2) == 2) {
        *(SV8 *)(AF(o, u8 *, 0x20) + 0x10) = *(SV8 *)(AF(p, u8 *, 0x20) + 0x10);
        AF(o, s32, 4) = AF(p, s32, 4);
        AF(o, s32, 8) = AF(p, s32, 8);
        AF(o, s32, 0xC) = AF(p, s32, 0xC);
        AF(o, s16, 0x34) = 2;
    }
    if (AF(p, u16, 2) == 3) {
        *(SV8 *)(AF(o, u8 *, 0x20) + 0x10) = *(SV8 *)(AF(p, u8 *, 0x20) + 0x10);
        AF(o, s32, 4) = AF(p, s32, 4);
        AF(o, s32, 8) = AF(p, s32, 8);
        AF(o, s32, 0xC) = AF(p, s32, 0xC);
        e = &D_sc02_017_8018E344[AF(o, u16, 0x70) & 0xF];
        AF(o, s16, 0xFC) = e->v[0] + AF(AF(o, u8 *, 0x64), s16, 0xFC);
        AF(o, s16, 0xFE) = e->v[1] + AF(AF(o, u8 *, 0x64), s16, 0xFE);
        v = e->v[2] + AF(AF(o, u8 *, 0x64), s16, 0x100);
        q = o;
        AF(q, s16, 0x100) = v;
        func_8012B2CC(q);
    }
}

void func_sc02_017_8018094C(s32 arg0) {
    func_sc02_017_8018096C(arg0);
}

s32 func_sc02_017_8018096C(u8 *o) {
    if (AF(o, s16, 0x108) == AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        return 0;
    }
    func_8012C218(o);
    return 1;
}

void func_sc02_017_801809A8(u8 *arg0) {
    D_sc02_017_8018E39C[AF(arg0, u16, 2)]();
    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_017_80180A10(u8 *o) {
    s32 t;

    AF(o, u16, 0x5C) = 0xCC00;
    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc02_017_801CA2D0);
    AF(o, s32, 0x58) = (s32)&D_sc02_017_8018E374 | 0x40000000 | 0x20000000;
    AF(o, u16, 0xFC) = AF(AF(o, u8 *, 0x64), u16, 0x36);
    AF(o, u8, 0x75) = 4;
    AF(o, s16, 2) = 1;
    SetScript(o, &D_sc02_017_8018E38C);
    func_8012E8A8(o);
}

void func_sc02_017_80180AB8(u8 *arg0) {
    if (AF(arg0, s32, 0xDC) != 0) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        func_8012E88C((s32) arg0);
        func_sc02_017_80180C90((s32) arg0);
    }
}

void func_sc02_017_80180B00(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (!(func_sc02_017_80180CEC(o, 0) & 0x2000)) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            func_sc02_017_80180CCC(o);
        }
        break;
    case 1:
        if (++AF(o, s32, 0x1C) >= 300) {
            AF(o, s16, 2) = 1;
            AF(o, s32, 0x1C) = 0;
            func_sc02_017_80180C44(o);
        } else if (func_sc02_017_80180CEC(o, 1) & 0x2000) {
            func_80146A6C(0x10, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x50), AF(o, s16, 0xE), 0, 0);
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        func_8012AD80(o);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 1;
            func_sc02_017_80180C44(o);
        }
        break;
    }
    func_sc02_017_80180D8C(o);
}

void func_sc02_017_80180C44(u8 *o) {
    AF(o, s32, 0xDC) = 0;
    AF(o, u16, 6) = AF(o, u16, 0x88);
    AF(o, u16, 0xA) = AF(o, u16, 0x8A);
    AF(o, u16, 0xE) = AF(o, u16, 0x8C);
    func_8012E8A8(o);
    func_sc02_017_80180C90((s32)o);
}

s32 func_sc02_017_80180C90(s32 arg0) {
    func_8012B260(arg0);
    func_sc02_017_80180CCC(arg0);
    return func_8012B178(arg0, 0x20000);
}

void func_sc02_017_80180CCC(s32 arg0) {
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x48) = 0x1000;
}

s32 func_sc02_017_80180CEC(u8 *o, s32 a1) {
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
    r = func_80133784((s16)a1, &a, &b);
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xA) = b.y;
    AF(o, s16, 0xE) = b.z;
    return r;
}

void func_sc02_017_80180D8C(u8 *o) {
    u8 *p;
    V4 a;
    V4 b;
    V4 c;
    SV8 v;

    p = &D_80126B58;
    if (AF(o, u8, 0x74) != 0) {
        a.x = D_80126B5C;
        a.y = D_80126B60;
        a.z = D_80126B64;
        func_8012F0BC(AF(o, u8 *, 0x20) + 0x34, &a, &c);
        func_8012B2CC(o);
        func_8012F1A4(AF(o, u8 *, 0x20) + 0x34, &c, &b);
        D_80126B5C = b.x;
        D_80126B60 = b.y;
        D_80126B64 = b.z;
        v.x = ((u16 *)&D_80126B5C)[1];
        v.y = ((u16 *)&D_80126B60)[1];
        v.z = ((u16 *)&D_80126B64)[1];
        if (func_80133784(1, p + 0x88, &v) & 0x8000) {
            D_80126B5C = a.x;
            D_80126B60 = a.y;
            D_80126B64 = a.z;
        }
    }
}

void func_sc02_017_80180EB0(u8 *arg0) {
    D_sc02_017_8018E3D8[AF(arg0, u16, 2)]();
    func_sc02_017_801842E0();
}

void func_sc02_017_80180EF4(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, 0);
    t = func_8012C51C(&D_sc02_017_8018E3B0, o);
    AF(o, s32, 0xCC) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    t = func_8012C51C(&D_sc02_017_8018E3B0 + 0x14, o);
    AF(o, s32, 0xD0) = t;
    if (t == 0) {
        func_8012C218(AF(o, s32, 0xCC));
        func_8012CAE4(o);
        return;
    }
    AF(o, s16, 2) = 1;
}

void func_sc02_017_80180F8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a0;
    void *temp_v1;

    temp_a0 = AF(arg0, void *, 0xCC);
    temp_v1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_a0, s32, 0xDC) == 0) && (AF(temp_v1, s32, 0xDC) == 0)) {
        if (AF(arg0, s16, 0xFC) == 0) {
            AF(temp_a0, s32, 0xDC) = 1;
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
        } else {
            AF(temp_v1, s32, 0xDC) = 1;
            AF(arg0, s16, 0xFC) = 0;
            AF(arg0, s16, 2) = 3;
        }
        AF(arg0, s32, 0x1C) = (s32) ((rand() % 5) + 0x10);
    }
}

void func_sc02_017_8018104C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(AF(arg0, void *, 0xD0), s32, 0xDC) = 1;
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_80181090(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xDC) = 1;
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_801810D4(u8 *arg0) {
    D_sc02_017_8018E450[AF(arg0, u16, 2)]();
    func_sc02_017_801842E0();
}

void func_sc02_017_80181118(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x5C) = 0xCC00;
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_017_801CAAA8);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_017_8018E3E8 | 0x40000000 | 0x20000000);
    AF(arg0, u8, 0x75) = 1;
    if (!(func_80029178(0xA0) & 0xFF)) {
        AF(arg0, s16, 2) = 1;
    } else {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xA) = -0xB73;
    }
    SetScript((s32) arg0, (s32) &D_sc02_017_8018A800);
}

void func_sc02_017_801811D0(s32 arg0) {
    if ((func_8012E778(arg0, 0x8200AA) == 1) && ((func_8014CB2C() & 0x7FFFFFFF) == 2)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0xFC) = 1;
        func_80178B18(arg0, (s32) &D_sc02_017_8018E410);
    }
}

void func_sc02_017_80181250(s32 arg0, s32 arg1, s32 arg2) {
    if (func_80178970(arg0, arg1, arg2) == 1) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
    }
}

s32 func_sc02_017_80181294(u8 *o) {
    SV v;
    u8 *p;
    u8 *q;
    s32 i;
    s32 r;
    s32 x;
    s32 y;
    s32 z;

    p = AF(o, u8 *, 0x20);
    q = p + 0x10;
    if (rand() & 1) {
        AF(p, s16, 0x14) += AF(o, s16, 0xFC) * (rand() % 8 + 1);
    }
    if (AF(q, s16, 4) > 0x38) {
        AF(o, s16, 0xFC) = -1;
        AF(q, s16, 4) = 0x38;
    } else if (AF(q, s16, 4) < -0x38) {
        AF(o, s16, 0xFC) = 1;
        AF(q, s16, 4) = -0x38;
    }
    if (AF(o, s32, 0x1C) % 10 == 0) {
        v.vy = D_sc02_017_8018E40A;
        for (i = 0; i < 5; i++) {
            r = rand() % 80;
            v.vx = (rand() & 1) ? r : -r;
            z = rand() % 16;
            v.vz = ((rand() & 1) ? z : -z) + 0x40;
            func_sc02_017_8017DC70((s32)o, &v, 1);
        }
        func_8002D4C8(0xBA0, 0);
        if (AF(o, s32, 0x1C) % 10 == 0) {
            v.vx = AF(o, s16, 6);
            v.vy = AF(o, s16, 0xA);
            v.vz = AF(o, s16, 0xE) + 0x50;
            for (i = 0; i < 10; i++) {
                r = rand() % 80;
                x = AF(o, s16, 6);
                v.vx = (rand() & 1) ? x + r : x - r;
                r = rand() % 56;
                y = AF(o, s16, 0xA);
                v.vy = (rand() & 1) ? y + r : y - r;
                func_80143BDC(&v);
            }
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(q, s16, 4) = 0;
        func_8012B23C(o);
        return 1;
    }
    return 0;
}

s32 func_sc02_017_80181594(u8 *o) {
    if (func_8012CC40(o, &D_sc02_017_8018E408) & 0x2000) {
        AF(o, s32, 0x1C) = 4;
        func_8013C9C4(&D_sc02_017_8018E3F8);
        func_80029124(0xA0, 1);
        func_8002D4C8(0xBA1, 0);
        return 1;
    }
    return 0;
}

void func_sc02_017_80181604(u8 *o) {
    SV8 v;
    SV8 p;
    V4 a;
    V4 b;
    V4 c;
    s32 i;
    s32 r;
    s32 x;
    s32 z;

    if (AF(o, s32, 0x1C) != 0) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE);
        v.y += D_sc02_017_8018E40A;
        p.y = v.y;
        for (i = 0; i < 10; i++) {
            r = rand() % 112;
            x = v.x;
            p.x = (rand() & 1) ? x + r : x - r;
            r = rand() % 112;
            z = v.z;
            p.z = (rand() & 1) ? z + r : z - r;
            func_80143BDC(&p);
        }
        AF(o, s32, 0x1C)--;
    }
    if (AF(o, u8, 0x74) != 0) {
        a.x = D_80126B5C;
        a.y = D_80126B60;
        a.z = D_80126B64;
        func_8012F0BC(AF(o, u8 *, 0x20) + 0x34, &a, &c);
        func_8012B2CC(o);
        func_8012F1A4(AF(o, u8 *, 0x20) + 0x34, &c, &b);
        D_80126B5C = b.x;
        D_80126B60 = b.y;
        D_80126B64 = b.z;
        v.x = ((u16 *)&D_80126B5C)[1];
        v.y = ((u16 *)&D_80126B60)[1];
        v.z = ((u16 *)&D_80126B64)[1];
        if (func_80133784(1, &D_80126B58 + 0x88, &v) & 0x8000) {
            D_80126B5C = a.x;
            D_80126B60 = a.y;
            D_80126B64 = a.z;
        }
    }
}

s32 *func_sc02_017_8018183C(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;

    m = AF(D_80126B78, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc02_017_8018E328[0], &a, &flag);
    RotTransSV(&D_sc02_017_8018E328[1], &b, &flag);
    if (func_80135888(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0) {
        AF(AF(o, u8 *, 0x64), s16, 2) = 4;
        func_80178BF8();
        return (s32 *)&func_80172710;
    }
    return 0;
}

void func_sc02_017_80181974(u8 *arg0) {
    D_sc02_017_8018E52C[AF(arg0, u16, 2)]();
}

void func_sc02_017_801819B0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_017_8018E490) != 0) {
        if ((func_8012C588(0xB4, arg0) == 0) || (func_8012C658(0xB5, (s32) AF(arg0, s16, 0x70), arg0) == 0)) {
            func_8012CAE4(arg0);
            return;
        }
        func_8001D0E8(AF(arg0, s32, 0x20), 0x1E0, 0x168);
        SetScript(arg0, (s32) &D_sc02_017_8018A800);
        AF(arg0, u8, 0x75) = 2;
        AF(arg0, s16, 2) = 1;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x70);
    }
}

void func_sc02_017_80181A54(void) {
}

void func_sc02_017_80181A5C(u8 *arg0) {
    D_sc02_017_8018E534[AF(arg0, u16, 2)]();
}

void func_sc02_017_80181A98(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_017_8018E4C4) != 0) {
        func_8001D0E8(AF(arg0, s32, 0x20), 0x1E0, 0x168);
        SetScript(arg0, (s32) &D_sc02_017_8018A800);
        AF(arg0, u16, 0xFC) = AF(AF(arg0, u8 *, 0x64), u16, 0x36);
        AF(arg0, u8, 0x75) = 2;
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_80181B0C(u8 *o) {
    *(SV8 *)(AF(o, u8 *, 0x20) + 0x10) = *(SV8 *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x10);
    AF(o, s16, 2) = 2;
}

void func_sc02_017_80181B48(u8 *arg0) {
    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C098((s32) arg0);
    }
}

void func_sc02_017_80181B80(u8 *arg0) {
    D_sc02_017_8018E54C[AF(arg0, u16, 2)]();
}

void func_sc02_017_80181BBC(u8 *o) {
    u8 *p;

    if (func_8012C438(o, &D_sc02_017_8018E4F8) != 0) {
        func_8001D0E8(AF(o, s32, 0x20), 0x1E0, 0x168);
        AF(AF(o, u8 *, 0x20), void *, 0x20) = &D_sc02_017_8018E540;
        AF(o, u16, 0xFE) = AF(AF(o, u8 *, 0x64), u16, 0x36);
        AF(o, u8, 0x75) = 4;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000;
        func_8001D0E8(AF(o, s32, 0x20), 0x1E0, 0x168);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xA) += 0x36;
    }
}

void func_sc02_017_80181C58(u8 *o) {
    *(B8 *)(AF(o, u8 *, 0x20) + 0x10) = *(B8 *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x10);
    AF(o, s16, 2) = 2;
    AF(o, s32, 0x1C) = rand() % 30 + 0x2D;
}

void func_sc02_017_80181CF0(u8 *o) {
    if (func_sc02_017_80181E5C(o) == 1) {
        return;
    }
    if (func_8012BEE8(o) == 0) {
        return;
    }
    AF(o, s16, 2) = 3;
    AF(o, u16, 0xDC) = D_sc02_017_8018E55C[AF(o, s16, 0xFC)];
    AF(o, u16, 0xFC) ^= 1;
    AF(o, s32, 0x1C) = D_sc02_017_8018E560[AF(o, u16, 0x70) & 1];
    func_sc02_017_8018209C(o);
}

void func_sc02_017_80181D80(u8 *o) {
    u8 unused[0x30];
    u8 *p;

    if (func_sc02_017_80181E5C(o) == 1) {
        return;
    }
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x12) += AF(o, s16, 0xDC);
    if (AF(o, u8, 0x74) != 0) {
        AF(D_80126B78, s16, 0x12) += AF(o, s16, 0xDC);
        func_8012E014(o);
    }
    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = rand() % 30 + 0x2D;
        func_sc02_017_80181E98(o);
    }
}

s32 func_sc02_017_80181E5C(u8 *o) {
    if (AF(o, s16, 0xFE) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        func_8012C098(o);
        return 1;
    }
    return 0;
}

s32 func_sc02_017_80181E98(u8 *o) {
    SV8 a;
    SV8 b;
    UXY s;
    s32 flag;

    FaceHelper(o, &D_sc02_017_8018E564, &a);
    gte_SetRotMatrix(D_800AF648);
    gte_SetTransMatrix(D_800AF648);
    gte_ldv0(&a);
    gte_rtps();
    gte_stsxy(&s);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 0;
    }
    if (!((s.s.x >= 0 ? s.s.x < 0xAB : -s.s.x < 0xAB) && (s.s.y >= 0 ? s.s.y < 0x83 : -s.s.y < 0x83))) {
        b.x = AF(o, s16, 6);
        b.y = AF(o, s16, 0xA);
        b.z = AF(o, s16, 0xE);
        gte_ldv0(&b);
        gte_rtps();
        gte_stsxy(&s);
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            return 0;
        }
        if (!((s.s.x >= 0 ? s.s.x < 0x105 : -s.s.x < 0x105) && (s.s.y >= 0 ? s.s.y < 0x8D : -s.s.y < 0x8D))) {
            return 0;
        }
    }
    func_8002D4C8(func_80013478(&D_80126B5C, &a) <= 0x41010 ? 0x59F : 0x5A0, 0);
    return 1;
}

s32 func_sc02_017_8018209C(u8 *o) {
    SV8 a;
    SV8 b;
    UXY s;
    s32 flag;

    FaceHelper(o, &D_sc02_017_8018E56C, &a);
    gte_SetRotMatrix(D_800AF648);
    gte_SetTransMatrix(D_800AF648);
    gte_ldv0(&a);
    gte_rtps();
    gte_stsxy(&s);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 0;
    }
    if (!((s.s.x >= 0 ? s.s.x < 0xAB : -s.s.x < 0xAB) && (s.s.y >= 0 ? s.s.y < 0x83 : -s.s.y < 0x83))) {
        b.x = AF(o, s16, 6);
        b.y = AF(o, s16, 0xA);
        b.z = AF(o, s16, 0xE);
        gte_ldv0(&b);
        gte_rtps();
        gte_stsxy(&s);
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            return 0;
        }
        if (!((s.s.x >= 0 ? s.s.x < 0x105 : -s.s.x < 0x105) && (s.s.y >= 0 ? s.s.y < 0x8D : -s.s.y < 0x8D))) {
            return 0;
        }
    }
    if (func_80013478(&D_80126B5C, &a) <= 0x41010) {
        func_8002D4C8(0xB67, 0);
    }
    return 1;
}

void func_sc02_017_801822A0(u8 *arg0) {
    D_sc02_017_8018E5C4[AF(arg0, u16, 2)]();
}

void func_sc02_017_801822DC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x40;
    AF(arg0, void *, 0x58) = (void *) (((AF(arg0, u16, 0x70) & 0xF) * 0x10) + &D_sc02_017_8018E574);
}

void func_sc02_017_80182354(void) {
}

void func_sc02_017_8018235C(u8 *arg0) {
    D_sc02_017_8018E5DC[AF(arg0, u16, 2)]();
}

void func_sc02_017_80182398(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x20;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_017_8018E5CC | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc02_017_80182414(void) {
}

void func_sc02_017_8018241C(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_sc02_017_8018E5FC[AF(arg0, u16, 2)]();
    }
}

void func_sc02_017_80182468(u8 *o) {
    B8 tmp;
    u8 *p;
    u8 i;

    tmp = D_sc02_017_801EE3EC;
    AF(o, u16, 0x72) |= 0x1000;
    if ((u32)func_80029504() >= 0xC8) {
        func_8012CAE4(o);
        return;
    }
    p = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        return;
    }
    func_8001C2C4(p);
    AF(p, B8, 0x10) = tmp;
    for (i = 0; i < 4; i++) {
        func_8012C658(0x118, i, o);
    }
    func_8012AD50(o);
}

void func_sc02_017_80182558(u8 *arg0) {
    if (func_80029178(0x96) & 0xFF) {
        AF(arg0, s32 *, 0x58) = &D_sc02_017_8018E5EC;
        AF(arg0, u8, 0x75) = 0x18;
        AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xC00);
        if ((func_80029178(0x97) & 0xFF) && (AF(arg0, u8, 0x74) != 0)) {
            func_80147324(0x433);
            func_80174784();
            func_8012BF4C((s32) arg0, 0x10);
            func_8012AD50((s32) arg0);
        }
    }
}

void func_sc02_017_801825F4(u8 *arg0, s32 arg1) {
    if (AF(arg0, u8, 0x74) == 0) {
        func_801747AC();
        func_8012AD44((s32) arg0, 1);
        return;
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_sc02_017_8017F59C();
        AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xF3FF);
        func_8012AD50((s32) arg0);
    }
}

void func_sc02_017_80182670(void) {
}

void func_sc02_017_80182678(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_sc02_017_8018E60C[AF(arg0, u16, 2)]();
    }
}

void func_sc02_017_801826C4(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc02_017_801EAB44);
        AF(temp_v0, s32 *, 0x20) = &D_sc02_017_8118E5E4;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        func_8012AD50((s32) arg0);
    }
}

void func_sc02_017_80182744(u8 *o) {
    if (func_80029178(0x96) & 0xFF) {
        func_sc02_017_8018287C(o);
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_8012AD50(o);
    }
}

void func_sc02_017_801827A4(s32 arg0) {
    func_sc02_017_8018287C(arg0);
}

void func_sc02_017_801827C4(u8 *o) {
    SV8 v;

    v = D_sc02_017_801EE3F4;
    func_sc02_017_80182938(o);
    if ((D_800B99DA & 3) == 0) {
        func_sc02_017_801829F4((s32) o, &v);
    }
}

void func_sc02_017_80182844(s32 arg0) {
    s32 p = func_8012E57C(0x118, (s16)arg0);
    if (p != 0) {
        AF(p, s16, 2) = 3;
    }
}

void func_sc02_017_8018287C(u8 *o) {
    SV8 v;

    *(WMtx *)(AF(o, u8 *, 0x20) + 0x34) = *(WMtx *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    FaceHelper(o, &D_sc02_017_8018E61C[AF(o, s16, 0x70)], &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    func_8012B260(o);
}

void func_sc02_017_80182938(u8 *o) {
    SV8 v;

    *(WMtx *)(AF(o, u8 *, 0x20) + 0x34) = *(WMtx *)((u8 *)D_80126B78 + 0x34);
    FaceHelper(o, &D_sc02_017_8018E61C[AF(o, s16, 0x70)], &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    func_8012B260(o);
}

void func_sc02_017_801829F4(s32 arg0, SV8 *arg1) {
    SV8 v;

    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    v.x += arg1->x;
    v.y += arg1->y;
    v.z += arg1->z;
}

void func_sc02_017_80182A54(u8 *arg0) {
    D_sc02_017_8018E780[AF(arg0, u16, 2)]();
}

void func_sc02_017_80182A90(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_017_8018E768;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_017_80182B44(u8 *arg0) {
    u8 *obj;
    u8 *ent;
    V4F20 range;
    V4F20 off;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        func_8001CC3C(obj, &D_sc02_017_8018E63C, 0, 0);
        AF(obj, u8, 0x27) = 0x9C;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_017_8018E768;
        func_80128EA8(obj, arg0 + 0x24, AF(ent, s32, 0));
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x10);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x10) = AF(AF(ent, u8 *, 8), s32, 0) + off.vx;
        AF(arg0, s32, 0x14) = AF(AF(ent, u8 *, 8), s32, 4) + off.vy;
        AF(arg0, s32, 0x18) = AF(AF(ent, u8 *, 8), s32, 8) + off.vz;
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x30);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x2C) = AF(AF(ent, u8 *, 8), s32, 0x20) + off.vx;
        AF(arg0, s32, 0x30) = AF(AF(ent, u8 *, 8), s32, 0x24) + off.vy;
        AF(arg0, s32, 0x34) = AF(AF(ent, u8 *, 8), s32, 0x28) + off.vz;
        AF(arg0, s32, 0x1C) = AF(ent, u16, 4);
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_017_80182EB0(u8 *arg0) {
    u8 *p;

    p = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x10) += AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x18) += AF(arg0, s32, 0x34);
    func_8012931C(arg0);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) -= 0x100;
    if (((s32 (*)())func_80128ED8)(p, arg0 + 0x24) != 0 || (AF(arg0, s32, 0x1C) != 0 && --AF(arg0, s32, 0x1C) == 0)) {
        func_801292C8(arg0);
    }
}

void func_sc02_017_80182F58(u8 *arg0) {
    if (D_801270C0 != 3) {
        D_sc02_017_8018E90C[AF(arg0, u16, 2)]();
    }
}

void func_sc02_017_80182FA4(u8 *arg0, s32 arg1) {
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

void func_sc02_017_80182FD0(u8 *o) {
    SV8 sv;
    s32 flag;
    u8 *p;
    s32 h;
    s32 h2;
    s32 *m;

    p = D_sc02_017_8018E8DC[AF(o, s16, 0xFC)];
    m = D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    func_80015978(o + 4, &sv);
    gte_ldv0(&sv);
    gte_rtps();
    gte_stsxy(&sv);
    gte_stflg(&flag);
    h = (D_800AF7BC >> 1) + 0x20;
    if (-h < sv.x && sv.x < h) {
        h2 = (D_800AF7BE >> 1) + 0x20;
        if (-h2 < sv.y && sv.y < h2 && flag >= 0) {
            if (AF(o, s32, 0x1C) == 0) {
                while (AF(p, s16, 6) != 0xFF) {
                    func_sc02_017_80183168(o, p);
                    p += 8;
                }
                AF(o, s32, 0x1C) = AF(o, s32, 0xDC);
            }
            AF(o, s32, 0x1C)--;
        }
    }
    func_sc02_017_801831FC(o);
}

void func_sc02_017_80183168(u8 *o, u8 *p) {
    SV8 a;
    u8 *q;

    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    a.x += AF(p, u16, 0);
    a.y += AF(p, u16, 2);
    a.z += AF(p, u16, 4);
    q = (u8 *)func_801290DC(0x3F, &a);
    if (q != 0) {
        AF(q, s32, 0x2C) = AF(p, s16, 6);
    }
}

void func_sc02_017_801831FC(u8 *o) {
    SV8 v;
    SV8 *e;
    u8 *q;
    s32 d;
    s32 t;
    s16 vol;

    q = &D_80126B58;
    e = &D_sc02_017_8018E8EC[AF(o, s16, 0xFC)];
    if (e->pad == 0) {
        return;
    }
    func_80015978(q + 4, &v);
    if (AF(o, s16, 0xFC) == 3) {
        if (v.y < -0xB00) {
            return;
        }
        v.y = e->y;
    }
    d = (s16)func_80013294(&v, e);
    if (d < 0x800) {
        t = (0x800 - d) * 127 / 2048;
        if (t < 0) {
            vol = 0;
        } else {
            vol = t;
        }
        if (vol >= 0x80) {
            vol = 0x7F;
        }
        func_8002D4C8(AF(e, u16, 6), (u16)(vol | 0x1000));
    }
}

void func_sc02_017_801832F4(u8 *arg0) {
    D_sc02_017_8018E914[AF(arg0, u16, 2)]();
}

void func_sc02_017_80183330(s32 arg0) {
    if (func_80029504() >= 0x104) {
        func_8012AD50(arg0);
        return;
    }
    func_8012CAE4(arg0);
}

void func_sc02_017_8018337C(u8 *o) {
    s32 t = func_80029504();
    if (func_sc02_017_8018347C(o, 0x190, 0x200) != 0) {
        if (t >= 0x10E) {
            func_80178B18(o, &D_sc02_017_8018EAA0);
        } else {
            func_80178B18(o, &D_sc02_017_8018E9E4);
        }
        func_8012AD50(o);
    }
}

void func_sc02_017_801833FC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_80029504();
    func_sc02_017_8018347C(arg0, 0x190, 0);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        if (temp_s1 < 0x10E) {
            func_80029514(0x10E);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

s32 func_sc02_017_8018347C(u8 *o, s32 a1, s32 a2) {
    u8 *q;
    SV8 v;
    s16 d;
    s16 x;

    q = &D_80126B58;
    if (AF(q, u16, 0) == 0x19) {
        return 0;
    }
    func_80015978(q + 4, &v);
    v.y = 0;
    d = func_80013294(&D_sc02_017_8018E920, &v);
    if ((s16)a1 != 0 && d < (s16)a1) {
        func_800139C8((s16)func_8012B8A4(o), &D_sc02_017_8018E928, &v);
        D_80126B5E = v.x;
        D_80126B66 = v.z;
    }
    if (AF(q, s16, 0xA) < -0xD00 && AF(q, s16, 0xE) < 0) {
        x = AF(q, s16, 6);
        if (x >= 0) {
            if (x < 0x160) {
                AF(q, s16, 6) = 0x160;
            }
        } else if (x >= -0x15F) {
            AF(q, s16, 6) = -0x160;
        }
    }
    if ((s16)a2 != 0 && d < (s16)a2 && func_8016F1AC() == 0) {
        return 1;
    }
    return 0;
}

void func_sc02_017_801835F4(void) {
    if ((s16)D_80126B5E < 0) {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0xFE40;
    } else {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0x1C0;
    }
}

void func_sc02_017_80183628(void) {
    if ((s16)D_80126B5E < 0) {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0xFE70;
    } else {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0x190;
    }
}

void func_sc02_017_8018365C(void) {
    if ((s16)D_80126B5E < 0) {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0xFD80;
    } else {
        AF(D_sc02_017_801EFCBC, s32, 4) = 0x280;
    }
}

s32 func_sc02_017_80183690(void) {
    return D_sc02_017_801EFBDC == 1;
}

s32 func_sc02_017_801836A8(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AF(arg0, s16, 2) = 1;
    func_8012E8E0(arg0, (s32) &D_sc02_017_8018ECA8);
    return SetScript(arg0, (s32) &D_sc02_017_8018EAF0);
}

void func_sc02_017_801836F0(u8 *arg0) {
    D_sc02_017_8018EE88[AF(arg0, u16, 2)]();
}

void func_sc02_017_8018372C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_017_8018EEB4);
    AF(arg0, s32, 0x1C) = 0x16;
    func_8002D4C8(0x5D8, 0);
}

void func_sc02_017_80183790(u8 *o) {
    u8 *p;
    s16 n;
    AF(o, s16, 2) = 3;
    func_8012E8E0(o, &D_sc02_017_8018EEA4);
    func_8012E8A8(o);
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x12) = 0;
    AF(p, s16, 0x10) = 0;
    func_8012B2CC(o);
    n = D_sc02_017_8018EE98;
    AF(o, s16, 0x34) = 0;
    D_sc02_017_8018EE98 = n + 1;
}

void func_sc02_017_80183800(u8 *o) {
    SV8 a;
    SV8 b;

    AF(o, s16, 2) = 4;
    func_8012E8E0(o, &D_sc02_017_8018EEA4);
    func_8012E88C(o);
    func_8012B2CC(o);
    func_8012B23C(o);
    AF(o, s32, 0x10) = D_sc02_017_8018EEC8;
    AF(o, s32, 0x14) = D_sc02_017_8018EECC;
    AF(o, s32, 0x18) = D_sc02_017_8018EED0;
    AF(o, s32, 0x1C) = 0x3C;
    if (AF(o, s16, 0x70) != 0) {
        a.x = AF(o, s16, 0x70) * 16;
        a.y = 0;
        a.z = 0;
        FaceHelper(D_sc02_017_801EF9FC, &a, &b);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
        *(B8 *)(AF(o, u8 *, 0x20) + 0x10) = *(B8 *)(AF(D_sc02_017_801EF9FC, u8 *, 0x20) + 0x10);
    }
}

void func_sc02_017_80183904(u8 *arg0) {
    D_sc02_017_8018EEE0[AF(arg0, u16, 2)]();
}

void func_sc02_017_80183940(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_sc02_017_8018EE50);
    D_sc02_017_801EF9F8 = 0;
    func_8002D4C8(0x12, 0);
}

s32 func_sc02_017_80183984(void) {
    return (func_80029178(0xE8) & 0xFF) != 0;
}

void func_sc02_017_801839A8(s32 arg0) {
    func_8012C658(0x121, 0, arg0);
    func_8012C658(0x121, 1, arg0);
    func_8012C658(0x121, 2, arg0);
    func_8012C658(0x121, 3, arg0);
    func_800D0F4C(0x4E);
    func_800D0F4C(0x50);
    func_800D0F4C(0x51);
    func_800D0F4C(0x52);
    func_80029514(0x50);
    AF(arg0, s32, 0x1C) = 0x5A;
}

s32 func_sc02_017_80183A3C(u8 *o) {
    if (func_8012BEE8(o) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x806;
        return 1;
    }
    if ((AF(o, s32, 0x1C) & 7) >= 4) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x5E0, 2);
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x9E0, 2);
    }
    return 0;
}

void func_sc02_017_80183AD0(void) {
    func_80029124(0x96, 1);
    func_801472F0(0x430);
}

void func_sc02_017_80183AFC(void) {
    AF(D_80126B78, s16, 0x12) = 0xC00;
}

s32 func_sc02_017_80183B10(void) {
    return func_8001AAA0(0x2C) != 0;
}

s32 func_sc02_017_80183B30(void) {
    if ((func_800D0F8C(0x4E) != 0) && (func_800D0F8C(0x50) != 0) && (func_800D0F8C(0x51) != 0)) {
        if (func_800D0F8C(0x52) != 0) {
            D_sc02_017_801EF9F8 = 1;
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc02_017_80183B9C(u8 *arg0, s32 arg1, s32 arg2) {
    D_801270C8 = 1;
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80178970((s32) arg0, arg1, arg2) != 0) {
            func_80178D18((s32) arg0);
            if (D_sc02_017_801EF9F8 != 0) {
                func_sc02_017_8017F644();
            }
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        func_8002D4C8(0x13, 0, arg2);
        func_sc02_017_801836A8((s32) arg0);
    }
}

void func_sc02_017_80183C30(s32 arg0) {
    D_801270C8 = 0;
    if (func_8012BD14(arg0) < 0x5100) {
        func_8014CB68();
    }
}

void func_sc02_017_80183C6C(u8 *arg0) {
    s32 temp_v0;

    if ((func_80029504() >= 0x50U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_017_80192280);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    SetScript((s32) arg0, (s32) &D_sc02_017_8018EAF0);
    AF(arg0, s32, 0xD4) = func_801788B8((s32) arg0, (s32) &func_sc02_017_80184084);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc02_017_8018ECA8);
    SetScript((s32) arg0, (s32) &D_sc02_017_8018EAF0);
}

void func_sc02_017_80183D30(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_017_8018372C(arg0);
    }
}

void func_sc02_017_80183D68(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + D_sc02_017_8018EEC0);
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + D_sc02_017_8018EEC2);
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + D_sc02_017_8018EEC4);
    func_8012AD80((s32) arg0, (s32) temp_a1);
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc02_017_80183790((s32) arg0);
    }
}

void func_sc02_017_80183DFC(u8 *o) {
    u16 t = AF(o, u16, 0x34);
    if (t == 0) {
        if (D_sc02_017_8018EE98 == 4) {
            AF(o, s32, 0x1C) = D_sc02_017_8018EEDC;
            AF(o, s16, 0x34) = t + 1;
        }
    } else if (func_8012BEE8(o) != 0) {
        func_sc02_017_80183800(o);
    }
}

void func_sc02_017_80183E70(u8 *o) {
    SV8 a;
    SV8 b;

    if (func_8012BEE8(o) != 0) {
        func_8002D4C8(0x5D7, 0);
        func_8012C218(o);
        return;
    }
    if (AF(o, s16, 0x70) != 0) {
        a.x = AF(o, s16, 0x70) * 16;
        a.y = 0;
        a.z = 0;
        FaceHelper(D_sc02_017_801EF9FC, &a, &b);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
        AF(AF(o, u8 *, 0x20), B8, 0x10) = AF(AF(D_sc02_017_801EF9FC, u8 *, 0x20), B8, 0x10);
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x10) += D_sc02_017_8018EED4.x;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += D_sc02_017_8018EED4.y;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += D_sc02_017_8018EED4.z;
        func_8012AD80(o);
        func_8012B2CC(o);
    }
}

void func_sc02_017_80183FA8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_017_801EAB44);
    func_8012E8E0((s32) arg0, (s32) &D_sc02_017_8018EE9C);
    func_8012E8A8((s32) arg0);
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_sc02_017_8018EE9C);
    func_8012E8A8((s32) arg0);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (*(s16 *)&D_sc02_017_8018EEAC[(AF(arg0, s16, 0x70) * 2)]);
    AF(temp_v0_2, s16, 0x14) = 0;
    AF(temp_v0_2, s16, 0x12) = 0;
    AF(temp_v0_2, s16, 0x10) = 0;
    if (AF(arg0, s16, 0x70) == 0) {
        D_sc02_017_8018EE98 = 0;
        D_sc02_017_801EF9FC = arg0;
    }
}

s32 *func_sc02_017_80184084(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) == 1 && func_8012BD14(o) < 0x5100) {
        AF(AF(o, u8 *, 0x64), s16, 2)++;
        func_80178BF8();
        return (s32 *) &func_80172710;
    }
    return 0;
}

s32 func_sc02_017_801840F8(s32 arg0) {
    return (u32) (func_800132BC((s32) &D_80126CAC, arg0) + 0xFFF9BFFF) <= 0x14FFEU;
}

s32 func_sc02_017_8018413C(s32 arg0) {
    return func_80013478(arg0 + 4, (s32) &D_80126CAC) > 0xA8FFF;
}

void func_sc02_017_8018416C(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    func_8013CB84();
    func_sc02_017_80184208();
    if (D_sc02_017_801EFCB0 != 1) {
        if (D_sc02_017_801EFCB0 < 2) {
            var_a0 = 0x618;
            if (D_sc02_017_801EFCB0 == 0) {
                var_a1 = 0;
                goto block_6;
            }
        }
    } else {
        temp_v0 = D_sc02_017_801EFCAC + 1;
        D_sc02_017_801EFCAC = temp_v0;
        var_a0 = 0xD;
        if (temp_v0 >= 0x97) {
            var_a1 = 0x618;
block_6:
            func_8002D4C8(var_a0, var_a1);
            D_sc02_017_801EFCB0 += 1;
        }
    }
}

void func_sc02_017_80184208(void) {
    u32 i;

    for (i = 0; i < 0x20; i++) {
        D_sc02_017_801EFA04[i] = D_sc02_017_8018EF14[((D_sc02_017_801EFA00 >> 8) + i) & 0x1F] | 0x8000;
    }
    for (i = 0; i < 0x10; i++) {
        D_sc02_017_801EFA44[i] = D_sc02_017_8018EEF4[((D_sc02_017_801EFA00 >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_sc02_017_8018EF54);
    D_sc02_017_801EFA00 += 0x100;
}

void func_sc02_017_801842E0(void) {
    SV8 a;
    SV8 b;
    s32 d;
    s32 v;

    if (D_800B99DA != D_sc02_017_8018EF88) {
        D_sc02_017_8018EF88 = D_800B99DA;
        if (D_80126B62 >= -0x7FF) {
            d = D_sc02_017_8018EF84;
        } else if (D_80126B62 < -0xC00) {
            d = D_sc02_017_8018EF84;
        } else {
            a.x = D_80126B5E;
            a.y = 0;
            a.z = D_80126B66;
            b.x = 0x11;
            b.z = -0x3AA;
            b.y = 0;
            d = func_800132BC(&a, &b);
        }
        if (d >= D_sc02_017_8018EF84) {
            func_8002D4C8(4, 0x5E5);
        } else {
            v = D_sc02_017_8018EF84 - d - 0x10000;
            if (v < 0) {
                v = -v;
            }
            v = v * 127 / D_sc02_017_8018EF84;
            if (v <= 0) {
                v = 0;
            } else if (v >= 0x80) {
                v = 0x7F;
            }
            if (D_801270C8 != 0) {
                v /= 2;
            }
            func_8002D4C8(0x5E5, (v | 0x1000) & 0xFFFF);
        }
    }
}

void func_sc02_017_80184438(u8 *arg0) {
    D_sc02_017_801CC350[AF(arg0, u16, 2)]();
}

void func_sc02_017_80184474(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_017_801CC310) != 0) {
        if ((func_8012C588(0xF3, arg0) == 0) || (func_8012C658(0xFC, 0, arg0) == 0) || (func_8012C658(0xFC, 1, arg0) == 0)) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc02_017_801D0BB4);
    }
}

void func_sc02_017_80184510(void) {
}

void func_sc02_017_80184518(s32 arg0) {
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc02_017_801CC344);
    SetScript(arg0, (s32) &D_sc02_017_801D0BB4);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = -0x400;
    AF(arg0, s16, 2) = 3;
    AF(arg0, s32, 0x1C) = 0x28;
}

void func_sc02_017_8018457C(u8 *o) {
    u8 *p;

    AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x40;
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x10) > 0x400) {
        AF(p, s16, 0x10) = 0x400;
    }
    func_8012AD80(o);
    if (func_8012BEE8(o) != 0) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        func_8012B2CC(o);
    }
}

void func_sc02_017_8018461C(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x10;
}

void func_sc02_017_80184630(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x80);
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_017_8018467C(u8 *arg0) {
    D_sc02_017_801CC3AC[AF(arg0, u16, 2)]();
}

void func_sc02_017_801846B8(u8 *o) {
    s32 t;
    s32 *p;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    p = &D_sc02_017_801CCE84;
    func_8001C214(t, p);
    AF(o, u16, 0xFC) = AF(AF(o, u8 *, 0x64), u16, 0x36);
    AF(o, s16, 2) = 1;
    SetScript(o, &D_sc02_017_8018A800);
    func_80132288(&D_sc02_017_801EFA68, &D_sc02_017_801CC38C, *p);
}

void func_sc02_017_80184754(u8 *o) {
    u8 *t;

    t = AF(o, u8 *, 0x64);
    if (AF(o, s16, 0xFC) != AF(t, s16, 0x36)) {
        func_8012C218(o);
    } else if (AF(t, s32, 0x1C) == 0) {
        func_80132288(&D_sc02_017_801EFA68, &D_sc02_017_801CC38C, D_sc02_017_801CCE84);
    } else {
        AF(o, s32, 4) = AF(t, s32, 4);
        AF(o, s32, 8) = AF(t, s32, 8);
        AF(o, s32, 0xC) = AF(t, s32, 0xC);
        AF(AF(o, u8 *, 0x20), B8, 0x10) = AF(AF(t, u8 *, 0x20), B8, 0x10);
        AF(AF(o, u8 *, 0x20), B8, 0x18) = AF(AF(t, u8 *, 0x20), B8, 0x18);
        AF(AF(o, u8 *, 0x20), s16, 0x2C) = AF(AF(t, u8 *, 0x20), s16, 0x2C);
        AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(t, u8 *, 0x20), s32, 4);
        func_8013240C(&D_sc02_017_801EFA68);
    }
}

void func_sc02_017_80184878(u8 *arg0) {
    D_sc02_017_801CC3CC[AF(arg0, u16, 2)]();
}

void func_sc02_017_801848B4(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, D_sc02_017_801CC3B4[AF(o, u16, 0x70) & 1]);
    AF(o, u16, 0xFC) = AF(AF(o, u8 *, 0x64), u16, 0x36);
    AF(o, s16, 2) = 1;
    SetScript(o, &D_sc02_017_8018A800);
    if (AF(o, u16, 0x70) & 1) {
        AF(o, s16, 0xFE) = 1000;
    } else {
        AF(o, s16, 0xFE) = -250;
    }
}

void func_sc02_017_8018495C(u8 *o) {
    u8 *p;
    SV8 sv;

    p = AF(o, u8 *, 0x64);
    if (AF(o, s16, 0xFC) != AF(p, s16, 0x36)) {
        func_8012C218(o);
        return;
    }
    *(B8 *)(AF(o, u8 *, 0x20) + 0x10) = *(B8 *)(AF(p, u8 *, 0x20) + 0x10);
    if (AF(o, u16, 0x70) & 1) {
        if (AF(p, s32, 0x1C) == 0) {
            AF(o, s16, 0xFE) = 0x400;
        }
        if (AF(p, s32, 0x1C) >= 0x18 && AF(p, s32, 0x1C) <= 0x28) {
            AF(o, s16, 0xFE) -= 0x40;
        }
    } else {
        if (AF(p, s32, 0x1C) == 0) {
            AF(o, s16, 0xFE) = -0xFA;
        }
        if (AF(p, s32, 0x1C) >= 0x18 && AF(p, s32, 0x1C) <= 0x22) {
            AF(o, s16, 0xFE) += 0x19;
        }
    }
    AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0xFE);
    FaceHelper(AF(o, u8 *, 0x64), &D_sc02_017_801CC3BC[AF(o, u16, 0x70) & 1], &sv);
    AF(o, s16, 6) = sv.x;
    AF(o, s16, 0xA) = sv.y;
    AF(o, s16, 0xE) = sv.z;
    *(B8 *)(AF(o, u8 *, 0x20) + 0x18) = *(B8 *)(AF(p, u8 *, 0x20) + 0x18);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = AF(AF(p, u8 *, 0x20), u16, 0x2C);
    AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(p, u8 *, 0x20), s32, 4);
}

void func_sc02_017_80184B18(u8 *arg0) {
    void *temp_v0;

    D_sc02_017_801D0D78[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc02_017_80185EE4((s32) arg0);
        }
    }
}

void func_sc02_017_80184BA4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_017_801D0C6C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_017_801D0CA0;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012B2CC(arg0);
    }
}

s32 func_sc02_017_80184C28(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc02_017_801D58EC);
}

void func_sc02_017_80184C58(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc02_017_801D29A8);
            SetScript((s32) arg0, (s32) &D_sc02_017_801D5AD4);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = func_8012B8E4((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((func_8012BEE8((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

void func_sc02_017_80184D28(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript((s32) arg0, (s32) &D_sc02_017_801D5AD4);
    AF(arg0, s32, 0x1C) = (rand() % 17) + 0x28;
    AF(arg0, s16, 0x52) = 0;
}

void func_sc02_017_80184D9C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc02_017_80184DD0(u8 *o) {
    func_8012B23C(o);
    func_8012B178(o, -0x20000);
    SetScript(o, &D_sc02_017_801D5BC4);
    AF(o, s32, 0x1C) = 0x96;
    if (D_80078EAE == 0) {
        AF(o, s16, 2) = 7;
    } else {
        AF(o, s16, 2) = 6;
    }
}

void func_sc02_017_80184E38(u8 *o) {
    if (func_8012BD3C(o, 0x400, 0x10000) == 1) {
        if (func_8012BCCC(o) < 0x3001) {
            AF(o, s16, 2) = 8;
            return;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, (s16) (rand() % 11 + 10));
        func_8012B178(o, -0x20000);
        if (func_sc02_017_80185D10(o) == 0) {
            return;
        }
    } else {
        if (func_sc02_017_80185D10(o) == 0) {
            AF(o, s16, 2) = 10;
            AF(o, s32, 0xDC) |= 0x40;
            return;
        }
    }
    if (func_8012BEE8(o) != 0) {
        func_sc02_017_80185C68(o);
    }
}

void func_sc02_017_80184F4C(u8 *o) {
    if (func_8012BDBC(o, 0x400) == 1) {
        if (func_8012BCCC(o) > 0x3000) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += func_8012B8E4(o, (s16)(rand() % 5 + 4));
            func_8012B178(o, -0x40000);
            func_sc02_017_80185D10(o);
        } else {
            AF(o, s16, 2) = 8;
        }
    } else if (func_sc02_017_80185D10(o) == 0) {
        AF(o, s16, 2) = 10;
    }
}

void func_sc02_017_8018501C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc02_017_801D5C84, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc02_017_80185CA4((s32) arg0);
}

void func_sc02_017_80185064(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += func_8012B8E4(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc02_017_80185AF0(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc02_017_801859C4(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc02_017_80185B5C(arg0);
        }
    }
    if (func_8012BEE8(arg0) != 0) {
        f = AF(arg0, s32, 0xDC);
        if (f & 1) {
            m = ~1;
        } else if (f & 0x10) {
            m = ~0x10;
        } else {
            goto other;
        }
        AF(arg0, s32, 0xDC) = f & m;
        AF(arg0, s16, 2) = 3;
        return;
other:
        if (func_8012BD3C(arg0, 0x400, 0x4000) == 0) {
            AF(arg0, s16, 2) = 5;
        } else {
            AF(arg0, s32, 0x1C) = 0x1E;
            func_sc02_017_80185CA4(arg0);
        }
    }
}

void func_sc02_017_8018518C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc02_017_801D5AD4, arg2);
    temp_v0 = AF(arg0, s32, 0xDC);
    temp_v1 = temp_v0 & ~8;
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v0 & 0x40) {
        AF(arg0, s32, 0xDC) = (s32) (temp_v1 & ~0x40);
        var_v0 = 0x1E;
    } else {
        temp_v0_2 = rand();
        var_v0_2 = temp_v0_2 / 16;
        var_v0 = (temp_v0_2 - (var_v0_2 * 0x10)) + 0xF;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    if (func_8012BD3C((s32) arg0, 0x400, 0x8000) == 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 8);
    }
}

void func_sc02_017_80185244(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = func_8012B8E4((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (func_8012BEE8((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc02_017_801852D4(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc02_017_801859C4((s32) arg0);
}

void func_sc02_017_80185300(s32 arg0) {
    func_sc02_017_80185B5C(arg0);
}

void func_sc02_017_80185320(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc02_017_80185338(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc02_017_80185364(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc02_017_801859C4((s32) arg0);
    }
    if (AF(arg0, s32, 0x1C) >= 0xB) {
        func_sc02_017_80185B5C((s32) arg0);
    }
}

void func_sc02_017_801853DC(u8 *arg0) {
    s16 sp[3];
    u8 *temp_a0;

    temp_a0 = AF(arg0, u8 *, 0x20);
    if (AF(temp_a0, s32, 0x24) == (s32) &D_sc02_017_801D29B8) {
        func_8001C924(temp_a0, &D_sc02_017_801D29A8);
    }
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, s32, 0xDC) &= ~0x10;
    if (AF(arg0, u16, 0x5E) == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (AF(arg0, u16, 0x5E) == 0x24) {
        sp[0] = 0;
        sp[1] = 0x10;
        sp[2] = 0;
        func_sc02_017_8018A428(arg0, sp, 0);
    }
}

void func_sc02_017_80185494(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0xE) {
        func_sc02_017_801859C4((s32) arg0);
    }
    if ((u32) (AF(arg0, s32, 0x1C) - 4) < 8U) {
        func_sc02_017_80185B5C((s32) arg0);
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc02_017_80185574(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) &= ~0x80;
    } else {
        AF(arg0, u16, 0x104) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) |= 0x80;
    }
}

void func_sc02_017_801855CC(u8 *arg0) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8));
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc02_017_80185670(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_017_80185680(u8 *arg0, s32 arg1) {
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (AF(arg0, s32, 0xDC) & 0x80) {
            p1 = AF(arg0, u8 *, 0x20);
            AF(p1, s16, 0x18) = AF(p1, s16, 0x1C) = 0x1000;
            AF(arg0, s32, 0xDC) &= ~0x80;
        } else {
            p2 = AF(arg0, u8 *, 0x20);
            AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        }
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        func_80131E00((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc02_017_80185768(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc02_017_801D4358);
    SetScript((s32) arg0, (s32) &D_sc02_017_801D5FBC);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc02_017_801857C4(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_8002AC00(0xB);
        func_80130D48((s32) arg0);
        func_sc02_017_80185EE4((s32) arg0);
    }
}

void func_sc02_017_8018583C(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc02_017_801D609C);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        func_8001C924((s32) AF(arg0, void *, 0x20), (s32) &D_sc02_017_801D4358);
        SetScript((s32) arg0, (s32) &D_sc02_017_801D5FBC);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    func_8002D4C8(func_8012BCCC((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc02_017_8018590C(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x28);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_8002AC00(0xB);
        func_80130D48((s32) arg0);
        func_sc02_017_80185EE4((s32) arg0);
    }
}

void func_sc02_017_801859C4(u8 *o) {
    UXY w;
    s32 a;
    u8 *p;
    s32 i;
    s32 t;

    if (AF(o, s16, 0xAA) > 0) {
        return;
    }
    for (i = 0; i < 10; i++) {
        p = (u8 *) func_80132EF4(o, 0x22);
        if (p != 0) {
            func_8012B0B4(&w, rand() % 4096, rand() % 64);
            t = w.w;
            AF(p, u16, 6) += t;
            AF(p, u16, 0xA) -= 0x60;
            AF(p, u16, 0xE) += t >> 16;
            AF(p, s16, 0x34) = (rand() % 3 << 12) + 0x3000;
        }
    }
    func_8002D4C8(0x521, 0);
}

s32 func_sc02_017_80185AF0(u8 *o) {
    if (AF(o, s32, 0xDC) & 1) {
        return 0;
    }
    if (func_8012D5E4(o, (s32)&D_sc02_017_801D0DA8, (s32)(&D_sc02_017_801D0DA8 + 8), 0xB) != 1) {
        return 0;
    }
    AF(o, s32, 0xDC) |= 1;
    return 1;
}

s32 func_sc02_017_80185B5C(u8 *arg0) {
    SV4 d;
    SV4 p;
    u16 x;
    u16 y;
    u16 z;

    if (AF(arg0, u16, 0x5E) == 0x1E) {
        return 0;
    }
    if (func_8014CB0C() != 0) {
        return 0;
    }
    if (AF(arg0, s32, 0xDC) & 0x10) {
        return 0;
    }
    if (func_8012BD14(arg0) < 0x2401) {
        x = D_80126B5E;
        y = D_80126B62;
        z = D_80126B66;
        p.x = x;
        p.y = y;
        p.z = z;
        d.x = x - AF(arg0, u16, 6);
        d.y = y - AF(arg0, u16, 0xA);
        d.z = z - AF(arg0, u16, 0xE);
        VectorNormalSS(&d, &d);
        p.y -= 0x20;
        func_8012F568(1, 6, 0, 0, &p, &d);
        AF(arg0, s32, 0xDC) |= 0x10;
        return 1;
    }
    return 0;
}

void func_sc02_017_80185C68(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc02_017_80185CA4(u8 *o) {
    if (func_8014CB0C(o) != 0) {
        AF(o, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(o, s32, 0xDC) |= 0x20;
    } else {
        AF(o, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc02_017_80185D10(u8 *o) {
    SV8 a;
    SV8 b;
    s32 ret;
    s32 f;
    s32 i;
    u8 *p;

    ret = 1;
    f = func_8012CBA4(o);
    if ((f & 0xFF) == 2) {
        func_80131E00(o, 0x12);
        return 0;
    }
    if (f & 0x8000) {
        if (!(f & 0x2000)) {
            func_8012ADE4(o);
        }
        ret = 0;
    }
    if ((f & 0x6000) != 0x2000) {
        func_8012ADE4(o);
        ret = 0;
    }
    AF(o, s32, 0xDC) &= ~0x40;
    for (p = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0xAF || AF(p, u16, 0) == 0x6F || AF(p, u16, 0) == 0x100) {
            if (AF(p, s32, 0x58) != 0 && o != p) {
                a.x = AF(o, u16, 0x3A);
                a.y = AF(o, u16, 0x3E);
                a.z = AF(o, u16, 0x42);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                if (func_80135A4C(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0) {
                    if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                        func_8012ADE4(o);
                        return ret;
                    }
                    AF(o, u16, 6) = b.x;
                    AF(o, u16, 0xA) = b.y;
                    AF(o, u16, 0xE) = b.z;
                    break;
                }
            }
        }
    }
    return ret;
}

void func_sc02_017_80185EE4(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C();
        if (AF(arg0, u8, 0xC1) == 0xE) {
            func_8002AC00(0xB);
        }
    }
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

s32 func_sc02_017_80185F88(u8 *p) {
    SV4 a;
    SV4 b;
    UXY w;
    UXY x;
    UXY *wp;
    s32 t;
    u16 c;
    u8 *q;
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(p, u16, 0) == AF(o, u16, 0) && p != o) {
            if (func_8012BC60(p + 4, o + 4) < 0x1000) {
                wp = &w;
                func_8012B0B4(wp, func_8012B6D4(p + 4, o + 4), 0x41);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                x = w;
                b.x += x.s.x;
                b.z += x.s.y;
                a.x = AF(p, u16, 0x3A);
                a.y = AF(p, u16, 0x3E);
                a.z = AF(p, u16, 0x42);
                if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                    func_8012ADE4(p);
                } else {
                    AF(p, u16, 6) = b.x;
                    AF(p, u16, 0xA) = b.y;
                    AF(p, u16, 0xE) = b.z;
                }
                return 1;
            }
        }
    }
    return 0;
}

void func_sc02_017_80186100(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

void func_sc02_017_80186124(o)
    u8 *o;
{
    if (AF(o, s16, 0x100) == 0) {
        func_8002A04C();
    }
    func_8012C098(o);
}

void func_sc02_017_80186168(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *t;
    s32 r;

    AF(AF(o, u8 *, 0x20), u16, 0x2C) &= ~0x10;
    t = AF(o, u8 *, 0x20);
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = AF(t, s16, 0x1C) = 0x1000;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b = a;
    b.y += 8;
    if (func_80133784(1, &a, &b) & 0x6000) {
        r = 1;
    } else {
        func_8012B23C(o);
        r = 0;
    }
    if (r == 0) {
        AF(o, s16, 2) = 0x11;
        AF(o, s16, 0x98) = 0;
    } else if (AF(o, s32, 0xC4) & 4) {
        func_sc02_017_8018626C(o);
    } else {
        func_sc02_017_801862B8(o);
    }
}

s32 func_sc02_017_8018626C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc02_017_801E154C);
    return func_8012B23C(arg0);
}

void func_sc02_017_801862B8(u8 *o) {
    V3 v;
    s32 t;
    u8 *q;

    q = o + 0x88;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z >= 0x90000) {
        AF(o, s16, 0xFC) = func_8012B744(o + 4, q);
    } else {
        t = (rand() & 0x3FF) - 0x200;
        if (t < 0) t -= 0x300; else t += 0x300;
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + t) & 0xFFF;
    }
    SetScript(o, &D_sc02_017_801E1134);
}

void func_sc02_017_801863B8(u8 *o) {
    s32 v[3];
    s32 f;

    if (AF(o, s32, 0x1C) >= 8) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    v[0] = AF(o, s16, 6) - AF(o, s16, 0x88);
    v[1] = 0;
    v[2] = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(v, v);
    if (v[0] + v[2] <= 0x8FFFF && func_8012BD3C(o, 0x300, 0x24000) != 0) {
        func_sc02_017_801866C8(o);
        return;
    }
    func_8012B178(o, D_sc02_017_801D6198);
    f = func_8012CBA4(o);
    if (f & 0x1000) {
        func_80131E00(o, 0x12);
    } else if (f != 0x2000) {
        func_8012ADE4(o);
    }
    func_sc02_017_80185F88(o);
    if (func_8012BEE8(o) != 0) {
        func_sc02_017_80186500(o);
    }
}

s32 func_sc02_017_80186500(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc02_017_801E0FEC);
}

void func_sc02_017_80186530(u8 *o) {
    s32 v[3];
    s32 a;
    u8 *t;

    if (AF(o, u16, 0x34) == 0 && (AF(o, u16, 0x72) & 0x4000)) {
        v[0] = AF(o, s16, 6) - AF(o, s16, 0x88);
        v[1] = 0;
        v[2] = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
        Square0(v, v);
        if (v[0] + v[2] <= 0x8FFFF && func_8012BD3C(o, 0x600, 0x24000) != 0) {
            func_sc02_017_801866C8(o);
            return;
        }
        t = o + 0x88;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
        v[0] = AF(o, s16, 6) - AF(o, s16, 0x88);
        v[1] = 0;
        v[2] = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
        Square0(v, v);
        if (v[0] + v[2] > 0x8FFFF) {
            AF(o, s16, 0xFC) = func_8012B744(o + 4, t);
        } else {
            a = (rand() & 0x3FF) - 0x200;
            if (a < 0) {
                a -= 0x300;
            } else {
                a += 0x300;
            }
            AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
        }
        SetScript(o, &D_sc02_017_801E1134);
    }
}

void func_sc02_017_801866C8(u8 *o) {
    AF(o, s16, 2) = 3;
    if (AF(o, u16, 0x86) & 2) {
        AF(o, s16, 0x34) = 1;
        AF(o, s32, 0x1C) = 0x28;
        if (AF(o, u16, 0x70) & 0x200) {
            SetScript(o, &D_sc02_017_801E1AFC);
        } else {
            SetScript(o, &D_sc02_017_801E11DC);
        }
        AF(o, s16, 0xFE) = 0;
    } else {
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc02_017_801E1264);
        AF(o, s32, 0x1C) = 0x19;
        AF(o, u16, 0x86) |= 2;
    }
}

void func_sc02_017_80186770(u8 *arg0) {
    s32 v[3];
    s32 r;
    s32 a;
    u8 *p;
    s32 p2;
    s32 d;
    u8 *t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4((s32) arg0, 4);
        if (AF(arg0, s32, 0x1C) == 0xF) {
            func_80142414((s32) arg0, -0x78);
            func_8002D4C8(0x6A9, 0);
        }
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 3;
            if (AF(arg0, u16, 0x86) & 2) {
                AF(arg0, s16, 0x34) = 1;
                AF(arg0, s32, 0x1C) = 0x28;
                if (AF(arg0, u16, 0x70) & 0x200) {
                    SetScript((s32) arg0, (s32) &D_sc02_017_801E1AFC);
                } else {
                    SetScript((s32) arg0, (s32) &D_sc02_017_801E11DC);
                }
                AF(arg0, s16, 0xFE) = 0;
                return;
            }
            AF(arg0, s16, 0x34) = 0;
            SetScript((s32) arg0, (s32) &D_sc02_017_801E1264);
            AF(arg0, s32, 0x1C) = 0x19;
            AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        }
        break;
    case 1:
        r = func_8012B8E4((s32) arg0, 6);
        p = AF(arg0, u8 *, 0x20);
        p2 = AF(p, u16, 0x12) + r;
        d = D_sc02_017_801D619C;
        AF(p, u16, 0x12) = p2;
        func_8012B178((s32) arg0, d, p2);
        r = func_8012CBA4((s32) arg0);
        if (r & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
        } else if (r != 0x2000) {
            func_8012ADE4((s32) arg0);
        }
        func_sc02_017_80185F88((s32) arg0);
        if (--AF(arg0, s16, 0xFE) <= 0) {
            func_80143B6C((s32) arg0, 0);
            AF(arg0, s16, 0xFE) = 8;
        }
        if (AF(arg0, u16, 0x70) & 0x200) {
            func_sc02_017_80186C38((s32) arg0, 0x11);
        }
        v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
        v[1] = 0;
        v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
        Square0(v, v);
        t = arg0 + 0x88;
        if (v[0] + v[2] > 0x8FFFF || func_8012BCCC((s32) arg0) > 0x24000) {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 0;
            AF(arg0, u16, 0x5C) = 0xAA10;
            AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x28;
            v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
            v[1] = 0;
            v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
            Square0(v, v);
            if (v[0] + v[2] > 0x8FFFF) {
                AF(arg0, s16, 0xFC) = func_8012B744(arg0 + 4, t);
            } else {
                a = (rand() & 0x3FF) - 0x200;
                if (a < 0) {
                    a -= 0x300;
                } else {
                    a += 0x300;
                }
                AF(arg0, s16, 0xFC) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
            }
            SetScript((s32) arg0, (s32) &D_sc02_017_801E1134);
        }
        if (!(AF(arg0, u16, 0x70) & 0x100)) {
            if (func_8012BD3C((s32) arg0, 0x400, 0x1000) != 0) {
                if (!(AF(arg0, u16, 0x70) & 0xF00)) {
                    func_sc02_017_80186B08((s32) arg0);
                } else {
                    func_sc02_017_80186B34((s32) arg0);
                }
            }
        } else if (func_8012BD3C((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_017_80186B7C((s32) arg0);
        }
        break;
    }
}

s32 func_sc02_017_80186B08(s32 arg0) {
    return func_sc02_017_80186BF0(arg0, 0, 0x14, (s32) &D_sc02_017_801E1334);
}

void func_sc02_017_80186B34(s32 arg0) {
    func_sc02_017_80186BF0(arg0, 3, 0x28, (s32) &D_sc02_017_801E1C4C);
    D_sc02_017_801EFA78 = D_sc02_017_801D619C;
    func_8002D4C8(0x660, 0);
}

void func_sc02_017_80186B7C(s32 arg0) {
    if (AF(arg0, s16, 0x100) == 0) {
        func_sc02_017_80186BC4(arg0);
    } else {
        func_sc02_017_80186BF0(arg0, 5, 0x1E, (s32) &D_sc02_017_801E190C);
    }
}

s32 func_sc02_017_80186BC4(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 8;
    return SetScript(arg0, (s32) &D_sc02_017_801E1A04);
}

s32 func_sc02_017_80186BF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    AF(arg0, s16, 0x34) = (s16) arg1;
    AF(arg0, s16, 2) = 4;
    temp_v0 = SetScript(arg0, arg3);
    AF(arg0, s32, 0x1C) = arg2;
    return temp_v0;
}

s32 func_sc02_017_80186C38(s32 arg0, s32 arg1) {
    return func_8012D5E4(arg0, (s32) &D_sc02_017_801D61B0, (s32) (&D_sc02_017_801D61B0 + 8), arg1);
}

void func_sc02_017_80186C64(u8 *arg0) {
    s32 flags;
    s32 go;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            func_8012D5E4(arg0, &D_sc02_017_801D61B0, &D_sc02_017_801D61B0 + 8, 0xB);
        }
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 6);
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            func_8012D5E4(arg0, &D_sc02_017_801D61B0, &D_sc02_017_801D61B0 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) % 10 == 0) {
            D_sc02_017_801EFA78 += 0x10000;
        }
        func_8012B178(arg0, D_sc02_017_801EFA78);
        flags = func_8012CBA4(arg0);
        if (flags & 0x1000) {
            func_80131E00(arg0, 0x12);
            go = 0;
        } else {
            if (flags != 0x2000) {
                func_8012ADE4(arg0);
            }
            go = 1;
        }
        func_sc02_017_80185F88(arg0);
        func_8012D5E4(arg0, &D_sc02_017_801D61B0, &D_sc02_017_801D61B0 + 8, 0x11);
        if (--AF(arg0, s16, 0xFE) <= 0) {
            func_80143B6C(arg0, 0);
            AF(arg0, s16, 0xFE) = -(D_sc02_017_801EFA78 / 0x10000);
        }
        if (go == 1) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_017_801E0FEC);
        }
        break;
    case 4:
        break;
    case 5:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += func_8012B8E4(arg0, 6);
        if (AF(arg0, s32, 0x1C) == 0xC) {
            func_sc02_017_80187178(arg0);
        }
        break;
    }
    if (func_8012BEE8(arg0) != 0) {
        switch (AF(arg0, u16, 0x34)) {
        case 0:
            if (func_8012BD3C(arg0, 0x400, 0x4000) != 0) {
                AF(arg0, s16, 0x34)++;
                SetScript(arg0, &D_sc02_017_801E0F44);
                AF(arg0, s32, 0x1C) = 0xA;
                break;
            }
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_017_801E0FEC);
            break;
        case 1:
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s32, 0x1C) = 0x18;
            SetScript(arg0, &D_sc02_017_801E13FC);
            break;
        case 2:
        case 4:
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_017_801E0FEC);
            break;
        case 3:
            AF(arg0, s32, 0x1C) = 0xA;
            AF(arg0, s16, 0x34)++;
            break;
        case 5:
            if (--AF(arg0, s16, 0x100) == 0) {
                AF(arg0, s16, 2) = 8;
                SetScript(arg0, &D_sc02_017_801E1A04);
            } else {
                AF(arg0, s32, 0x1C) = 0x1E;
            }
            break;
        }
    }
}

void func_sc02_017_80186FA8(u8 *o) {
    s32 *p;

    p = (s32 *) &D_sc02_017_801D61C4;
    if (!(AF(o, u16, 0x70) & 0x2000)) {
        p += 3;
    }
    AF(o, s16, 2) = 7;
    if (AF(o, u16, 0x70) & 0x200) {
        SetScript(o, &D_sc02_017_801E1AFC);
    } else {
        SetScript(o, p[0]);
    }
    func_8012B200(o);
    func_8012B178(o, p[1]);
    AF(o, s32, 0x1C) = p[2];
}

void func_sc02_017_80187044(u8 *o) {
    s16 t;

    func_8012AD80(o);
    if (AF(o, u16, 0x70) & 0x2000) {
        t = AF(o, s16, 0xFE) - 1;
        AF(o, s16, 0xFE) = t;
        if (t <= 0) {
            func_80143B6C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (AF(o, u16, 0x70) & 0x200) {
            func_8012D5E4(o, &D_sc02_017_801D61B0, &D_sc02_017_801D61B0 + 8, 0x11);
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, u16, 0x86) |= 2;
        AF(o, s16, 2) = 3;
        if (AF(o, u16, 0x86) & 2) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x28;
            if (AF(o, u16, 0x70) & 0x200) {
                SetScript(o, &D_sc02_017_801E1AFC);
            } else {
                SetScript(o, &D_sc02_017_801E11DC);
            }
            AF(o, s16, 0xFE) = 0;
        } else {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc02_017_801E1264);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
    }
}

void func_sc02_017_80187178(u8 *o) {
    SpawnDef d;
    V4 m;
    V4 r;
    s16 *q;

    q = &D_sc02_017_801D61DC;
    ((void (*)())func_sc02_017_80189354)(o, q);
    m.x = *q << 8;
    m.y = D_sc02_017_801D61DE << 8;
    m.z = D_sc02_017_801D61E0 << 8;
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &m, &r);
    r.x += AF(o, s16, 6) << 8;
    r.y += AF(o, s16, 0xA) << 8;
    r.z += AF(o, s16, 0xE) << 8;
    d.x = r.x / 256;
    d.y = r.y / 256;
    d.z = r.z / 256;
    d.kind = 0x20;
    d.unk8 = 3;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    func_8012C51C(&d, o);
}

void func_sc02_017_80187298(u8 *o) {
    SV8 sv;
    s32 v[3];
    s32 s;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        sv.x = D_80126B5E;
        sv.z = D_80126B66;
        v[0] = AF(o, s16, 6) - sv.x;
        v[1] = 0;
        v[2] = AF(o, s16, 0xE) - sv.z;
        Square0(v, v);
        if (v[0] + v[2] > 0x10000) {
            break;
        }
        if (func_8012E778(o, 0xA000C8) != 0) {
            break;
        }
        AF(o, u16, 0x34)++;
        func_8012B23C(o);
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        func_80143970(o);
        break;
    case 1:
        if (!(func_8012CBCC(o) & 0x2000)) {
            break;
        }
        func_80143B6C(o, 1);
        AF(o, u16, 0x34)++;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s32, 0x1C) = 0x10;
    case 2:
        s = rsin((AF(o, s32, 0x1C) << 7) & 0x780);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1C) = ((s << 9) >> 12) + 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000 - ((s << 10) >> 12);
        if (func_8012BEE8(o) != 0) {
            AF(o, s16, 2) = 3;
            if (AF(o, u16, 0x86) & 2) {
                AF(o, s16, 0x34) = 1;
                AF(o, s32, 0x1C) = 0x28;
                if (AF(o, u16, 0x70) & 0x200) {
                    SetScript(o, &D_sc02_017_801E1AFC);
                } else {
                    SetScript(o, &D_sc02_017_801E11DC);
                }
                AF(o, s16, 0xFE) = 0;
            } else {
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc02_017_801E1264);
                AF(o, s32, 0x1C) = 0x19;
                AF(o, u16, 0x86) |= 2;
            }
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= ~0x10;
        }
        break;
    }
}

void func_sc02_017_801874E8(u8 *o) {
    u16 f;
    s32 v[3];
    s32 a;
    u8 *t;

    if (func_8012C354(o, &D_sc02_017_801D60BC[(AF(o, u16, 0x70) & 0xF00) >> 8]) == 0) {
        return;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -1;
    AF(o, u8, 0xC1) = 0;
    AF(o, u8 *, 0xBC) = &D_sc02_017_801D6158;
    f = AF(o, u16, 0x70);
    if (f & 0x6000) {
        AF(o, s16, 2) = 6;
        SetScript(o, &D_sc02_017_801E0FEC);
    } else if (f & 1) {
        AF(o, s16, 2) = 0xF;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        return;
    } else if (f & 0x100) {
        AF(o, s16, 2) = 9;
    } else {
        t = o + 0x88;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
        v[0] = AF(o, s16, 6) - AF(o, s16, 0x88);
        v[1] = 0;
        v[2] = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
        Square0(v, v);
        if (v[0] + v[2] > 0x8FFFF) {
            AF(o, s16, 0xFC) = func_8012B744(o + 4, t);
        } else {
            a = (rand() & 0x3FF) - 0x200;
            if (a < 0) {
                a -= 0x300;
            } else {
                a += 0x300;
            }
            AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
        }
        SetScript(o, &D_sc02_017_801E1134);
    }
    func_80143970(o);
}

void func_sc02_017_801876AC(u8 *arg0) {
    D_sc02_017_801D61E4[AF(arg0, u16, 2)]();
    if (func_8012C044((s32) arg0) != 0) {
        AF(arg0, s16, 0x100) = 1;
        func_8012C098((s32) arg0);
    }
}

void func_sc02_017_80187710(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x100) = 3;
        if (func_8012BD3C((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_017_80186BF0((s32) arg0, 5, 0x1E, (s32) &D_sc02_017_801E190C);
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        SetScript((s32) arg0, (s32) &D_sc02_017_801E0FEC);
    }
}

void func_sc02_017_80187794(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    SetScript((s32) arg0, (s32) &D_sc02_017_801E0FEC);
}

void func_sc02_017_801877C0(u8 *o) {
    if (AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 0xB;
    } else if (func_8012BD3C(o, 0x400, 0x40000) != 0) {
        AF(o, s16, 2) = 0xD;
    }
}

void func_sc02_017_80187814(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    SetScript((s32) arg0, (s32) &D_sc02_017_801E1A04);
}

void func_sc02_017_80187840(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 9;
        AF(arg0, s16, 0x100) = 3;
    }
}

void func_sc02_017_80187868(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_017_801E190C);
    AF(arg0, s32, 0x1C) = 0x1E;
}

void func_sc02_017_801878A8(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_8012B8E4(o, 6);
    if (AF(o, s32, 0x1C) == 0xC) {
        func_sc02_017_80187178(o);
    }
    if (func_8012BEE8(o) != 0) {
        if (--AF(o, s16, 0x100) == 0) {
            AF(o, s16, 2) = 0xB;
        } else {
            AF(o, s32, 0x1C) = 0x1E;
        }
    }
}

void func_sc02_017_80187940(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_v1;

    SetScript(arg0, (s32) &D_sc02_017_801E0F44, arg2);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 2) = 0x10;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x34) = 0;
    AF(temp_v1, s16, 0x1C) = 0x1000;
    AF(temp_v1, s16, 0x1A) = 0x1000;
    AF(temp_v1, s16, 0x18) = 0x1000;
}

void func_sc02_017_801879A4(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc02_017_80186124();
        return;
    }
    temp_v0 = func_8012CBF4((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
            return;
        }
        func_sc02_017_801862B8((s32) arg0);
    }
}

void func_sc02_017_80187A24(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc02_017_801862B8(arg0);
    }
}

void func_sc02_017_80187A68(s32 arg0) {
    if (func_8012BCCC(arg0) < D_sc02_017_801D61C0) {
        func_sc02_017_80186FA8(arg0);
    }
}

void func_sc02_017_80187AB0(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = func_8012C1B8(arg0)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(AF(arg0, u8 *, 0x20), &D_sc02_017_801E1F04);
    func_8002D4C8(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc02_017_801E1CDC);
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

void func_sc02_017_80187C28(u8 *arg0) {
    D_sc02_017_801E1D78[AF(arg0, u16, 2)]();
}

void func_sc02_017_80187C64(u8 *arg0) {
    D_sc02_017_801E1D8C[AF(arg0, u16, 2)]();
}

void func_sc02_017_80187CA0(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_017_801E1D64);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_017_801E1D70, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

void func_sc02_017_80187D80(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        func_8012B2CC(arg0);
        func_8012B23C(arg0);
        func_8012B14C(arg0, &D_sc02_017_801E1D80);
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

void func_sc02_017_80187E9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_017_801E2034);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_017_80187EF8(s32 arg0) {
    func_8012C098(arg0);
}

void func_sc02_017_80187F18(u8 *arg0) {
    s16 v[3];
    u16 t;

    t = AF(arg0, u16, 0x5E);
    if (t == 0x23) {
        AF(arg0, s16, 0xFE) = 1;
        func_8002D4C8(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc02_017_8018A428((s32) arg0, v, 0xD);
    }
}

void func_sc02_017_80187F84(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc02_017_8018800C(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        return;
    }
    AF(arg0, u16, 0x102) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
}

void func_sc02_017_80188050(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x102);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc02_017_801880F4(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_017_80188104(u8 *arg0) {
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (func_8012BEE8((s32) arg0) != 0) {
        p2 = AF(arg0, u8 *, 0x20);
        AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        func_80131E00((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc02_017_801881B0(u8 *arg0) {
    if ((AF(arg0, u8, 0xC3) & 1) && (AF(arg0, s32, 0x90) != &D_sc02_017_801E9CCC)) {
        SetScript((s32) arg0, (s32) &D_sc02_017_801E9CCC);
    }
}

void func_sc02_017_801881F8(u8 *arg0) {
    s32 var_a0;

    func_8002AC00(8);
    var_a0 = 0x43F;
    if (AF(arg0, u16, 0x5E) == 0x1D) {
        var_a0 = 0x440;
    }
    func_8002D4C8(var_a0, 0);
}

void func_sc02_017_80188240(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    SetScript(arg0, (s32) &D_sc02_017_801EA154);
    AF(arg0, s32, 0x1C) = 0x14;
}

s32 func_sc02_017_80188280(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = func_8012BCCC(arg0);
    if (arg1 >= temp_v0) {
        func_sc02_017_80188330(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc02_017_801EA0AC);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc02_017_80188330(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript(arg0, (s32) &D_sc02_017_801E9E6C);
    AF(arg0, s32, 0x1C) = 0x1E;
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_80142414(arg0, -0x96);
    }
}

s32 func_sc02_017_8018838C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc02_017_801883A0(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    SetScript(arg0, &D_sc02_017_801E9CCC);
    AF(arg0, s16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, s32, 0x1C) = 0x3C;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc02_017_801883FC(u8 *arg0) {
    void *temp_v1;

    D_sc02_017_801E2130[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) != 0) {
            func_8012C098((s32) arg0);
        }
    }
}

void func_sc02_017_80188480(u8 *arg0) {
    D_sc02_017_801E2150[AF(arg0, u16, 2)]();
}

void func_sc02_017_801884BC(u8 *arg0) {
    D_sc02_017_801E2198[AF(arg0, u16, 2)]();
}

void func_sc02_017_801884F8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s16, 2) = 1;
    func_8001CA88(AF(arg0, s32, 0x20), (s32) &D_sc02_017_801E2158);
    func_80143994(arg0, 0x1000);
}

void func_sc02_017_8018855C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, -0xE0000);
}

void func_sc02_017_801885B4(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc02_017_801E21A4, (s32) &D_800D3918, 0xA) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
    }
}

void func_sc02_017_80188620(u8 *o) {
    SV8 c;
    SpawnDef d;

    if (AF(o, s32, 0x1C) == 9) {
        if (func_8012D5E4(o, &D_sc02_017_801E2118, &D_sc02_017_801E2118 + 8, 10) != 0) {
            D_80126B96 |= 0x800;
        }
        if (AF(o, s16, 0x70) & 0x8000) {
            FaceHelper(o, &D_sc02_017_801E2128, &c);
            d.kind = 0x126;
            d.flags = 0;
            d.unkC = 0x7FFF;
            d.x = c.x;
            d.y = c.y;
            d.z = c.z;
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
            func_8012C51C(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            func_8012C51C(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            func_8012C51C(&d, o);
        }
        func_8002D4C8(0x43E, 0);
    }
    if (func_8012BEE8(o) != 0) {
        func_sc02_017_801883A0(o);
    }
}

void func_sc02_017_8018875C(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (func_8012BCCC(arg0) <= 0x90000) {
            func_sc02_017_80188240((s32) arg0);
        }
    } else {
        if (func_8012BCCC(arg0) <= 0x24000) {
            func_sc02_017_80188240((s32) arg0);
        }
    }
}

void func_sc02_017_801887C8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_017_801883A0(arg0);
    }
}

void func_sc02_017_80188800(s32 arg0) {
    if (func_8012BEE8(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc02_017_80188280(arg0, 0x40000, 0xC4000);
        } else {
            func_sc02_017_80188280(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc02_017_80188864(s32 arg0) {
    s32 v;
    void *p;

    v = func_8012B8E4(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_017_8018838C(arg0);
    }
}

void func_sc02_017_801888BC(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, &D_sc02_017_801E205C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 0xFFFBFFFD;
        AF(arg0, s32 *, 0xBC) = (s32 *)&D_sc02_017_801E2090;
        AF(arg0, s32, 0xC4) = 1;
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(arg0, u16, 0x100) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        temp_v0 = func_8012C658(0x125, AF(arg0, s16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, &D_sc02_017_801EA0AC);
    }
}

void func_sc02_017_80188974(u8 *arg0) {
    s32 temp_v0;
    u16 t;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_017_801E3C4C);
    t = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xFE) = 0x7FFF;
    AF(arg0, u16, 0xFC) = t;
}

void func_sc02_017_801889E4(u8 *o) {
    u8 *p;
    SV8 c;

    p = AF(o, u8 *, 0x64);
    if (AF(o, s16, 0xFE) == 0x7FFF) {
        AF(o, s16, 0xFE) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    }
    if (AF(o, s16, 0xFC) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        func_8012C218(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    if (AF(AF(o, u8 *, 0x64), u8 *, 0x90) != &D_sc02_017_801EA2A4) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFE);
        AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
        AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8);
        AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    } else {
        FaceHelper(AF(o, u8 *, 0x64), &D_sc02_017_801E2148, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
    AF(AF(o, u8 *, 0x20), SV8, 0x18) = AF(AF(p, u8 *, 0x20), SV8, 0x18);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= AF(AF(p, u8 *, 0x20), u16, 0x2C) & 0x10;
    AF(AF(o, u8 *, 0x20), s32, 4) = AF(AF(p, u8 *, 0x20), s32, 4);
}

void func_sc02_017_80188B74(u8 *arg0) {
    D_sc02_017_801EAE7C[AF(arg0, u16, 2)]();
}

void func_sc02_017_80188BB0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc02_017_801EAB6C) != 0) {
        if (!(func_80029178(D_sc02_017_801EABD4[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc02_017_8018925C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_017_8018A800);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_80188C84(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc02_017_80188CAC(void) {
}

void func_sc02_017_80188CB4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc02_017_801EADB8 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_017_801EAD1C[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_017_801EADA4 = 0;
            func_80029124(D_sc02_017_801EAD1C[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_017_801EADA0 = 2;
        } else {
            D_sc02_017_801EADB8 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_017_801EAC98[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_017_801EADA0 = 0;
            D_sc02_017_801EADA4 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc02_017_801EADCC);
    } else {
        var_a1 = &D_sc02_017_801EAE38;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc02_017_80188E00(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc02_017_801EABD4[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_017_801EABD4[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc02_017_80189004() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_017_80188F20(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc02_017_80188F4C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_017_80188F5C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_017_80188F6C(u8 *arg0) {
    func_80029124(D_sc02_017_801EABD4[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_017_80188FAC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_017_80188FE0(void) {
    return func_80174764() == 1;
}

s32 func_sc02_017_80189004(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(func_80029178(D_sc02_017_801EABD4[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_017_80189068(u8 *arg0) {
    D_sc02_017_801EAEA4[AF(arg0, u16, 2)]();
}

void func_sc02_017_801890A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_017_801EABA0) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_017_801EB564);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_017_801EB344);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_017_8018912C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_017_801EB354);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_017_801EB45C);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc02_017_801891EC(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_017_801EB564);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_017_801EB344);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

s32 *func_sc02_017_8018925C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) D_80126B78 + 0x34);
    gte_SetTransMatrix((u8 *) D_80126B78 + 0x34);
    RotTransSV(&D_sc02_017_801EAE94[0], &a, &f);
    RotTransSV(&D_sc02_017_801EAE94[1], &b, &f);
    if (func_80135888(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0 && func_8012BDBC(p, 0x300) != 0) {
        AF(p, s16, 2) = 3;
        func_80178BF8();
        r = (s32 *) &func_80172710;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc02_017_80189354(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_017_801EFBC0 = arg1;
    return func_8012C588(0x85, arg0);
}

void func_sc02_017_80189384(u8 *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    u8 *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (func_8012C354(o, &D_sc02_017_801EB588) == 0) {
        func_8012C218(o);
    }
    SetScript(o, &D_sc02_017_8018A800);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 0x70) = 0x80;
    AF(p, s32, 4) |= 0x50000040;
    AF(p, u16, 0x2C) |= 1;
    m = AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34;
    func_8012F14C(m, D_sc02_017_801EFBC0, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    func_80017DC4(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, p + 0x34);
    func_80017E68(&b, p + 0x34);
    q = D_sc02_017_801EB5BC++;
    AF(o, WMtx *, 0xCC) = q;
    if (D_sc02_017_801EB5BC > D_sc02_017_801EFBA0) {
        D_sc02_017_801EB5BC = D_sc02_017_801EFBA0 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    func_80017E68(&a, q);
    y = b.y;
    if (func_80134510(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc02_017_801EB5BC++;
        AF(o, WMtx *, 0xD0) = q;
        if (D_sc02_017_801EB5BC > D_sc02_017_801EFBA0) {
            D_sc02_017_801EB5BC = D_sc02_017_801EFBA0 - 9;
        }
        func_800D23D0(&D_801152A8);
        RotMatrixYXZ(&D_801152A8, q);
        func_80017E68(&b, q);
    }
    AF(o, s16, 2)++;
}

void func_sc02_017_801895C8(u8 *o) {
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
        t = D_sc02_017_801EB574;
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
            t = D_sc02_017_801EB574;
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

void func_sc02_017_80189868(u8 *arg0) {
    D_sc02_017_801EB5C0[AF(arg0, u16, 2)]();
}

void func_sc02_017_801898A4(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    func_80013F3C(&m);
    func_sc02_017_80189908((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc02_017_80189908(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc02_017_80189D08(a);
    s = func_sc02_017_80189C4C(a);
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

void func_sc02_017_80189A68(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc02_017_80189D08(r[0] & 0xFFF);
    cx = func_sc02_017_80189C4C(r[0] & 0xFFF);
    sy = func_sc02_017_80189D08(r[1] & 0xFFF);
    cy = func_sc02_017_80189C4C(r[1] & 0xFFF);
    sz = func_sc02_017_80189D08(r[2] & 0xFFF);
    cz = func_sc02_017_80189C4C(r[2] & 0xFFF);
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

s32 func_sc02_017_80189C4C(u32 a) {
    if (a < 0x400) {
        return D_sc02_017_801EC008[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc02_017_801EC008[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc02_017_801EC008[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc02_017_801EC008[0xFFF - a];
    }
}

s32 func_sc02_017_80189D08(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc02_017_801EC008[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc02_017_801EC008[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc02_017_801EC008[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc02_017_801EC008[a - 0xC00];
    }
}

void func_sc02_017_80189DB4(u8 *arg0) {
    D_sc02_017_801ECD34[AF(arg0, u16, 2)]();
}

void func_sc02_017_80189DF0(u8 *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc02_017_8018A310() == 1) || (temp_v0 = func_8012C194(), (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc02_017_801ECCE8, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    func_80128EA8(temp_v0, (s32) (arg0 + 0xDC), (s32) &D_sc02_017_801ECCF4);
    func_sc02_017_8018A368((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = AF(arg0, u16, 2);
    x++;
    temp_a2 = AF(AF(arg0, void *, 0x64), u16, 0x36);
    AF(arg0, s32, 0x1C) = 0x180;
    AF(arg0, u16, 2) = x;
    AF(arg0, u16, 0x10A) = temp_a2;
    func_8002D4C8(0xAA0, 0, temp_a2);
}

void func_sc02_017_80189EEC(u8 *arg0) {
    u8 *q;
    u8 *o;
    u8 *p;
    s32 t;

    q = AF(arg0, u8 *, 0x64);
    if (AF(arg0, s16, 0x10A) == AF(q, s16, 0x36) && AF(q, s16, 0x76) > 0) {
        if (AF(arg0, s32, 0x1C) % 48 == 0 && AF(q, u8, 0xC1) == 0) {
            AF(q, s16, 0x60) = 0xA;
            AF(q, u16, 0x5C) |= 1;
            AF(q, s16, 0x62) = AF(AF(q, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(q, s16, 0x5E) = 1;
            AF(q, s16, 0x7C) = AF(arg0, s16, 6);
            AF(q, s16, 0x7E) = AF(arg0, s16, 0xA);
            AF(q, s16, 0x80) = AF(arg0, s16, 0xE);
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            o = func_80132EF4(arg0, 0x22);
            if (o != 0) {
                AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xA) -= 0x20;
                AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 3) << 16);
                t = rand();
                AF(o, s16, 0x34) = ((t % 6144 + 0x1000) & ~0xF) | (rand() & 1);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
        }
        p = AF(arg0, u8 *, 0xCC);
        if (p != 0) {
            func_80128ED8(p, arg0 + 0xDC);
            func_sc02_017_8018A368(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (func_8012BEE8(arg0) == 0) {
            return;
        }
    }
    func_sc02_017_8018A3E4(arg0);
}

void func_sc02_017_8018A17C(u8 *arg0) {
    u8 *p;
    u8 *o;

    p = AF(arg0, u8 *, 0xCC);
    if (p != 0) {
        func_80128ED8(p, arg0 + 0xDC);
        func_sc02_017_8018A368(arg0);
        AF(p, s16, 8) = AF(arg0, s16, 6);
        AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
        AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = func_80132EF4(arg0, 0x22);
                if (o != 0) {
                    AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xA) -= 0x20;
                    AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 4) << 16);
                    AF(o, s16, 0x34) = rand() % 6144 + 0x2000;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                }
            }
            return;
        }
    }
    func_sc02_017_8018A3E4(arg0);
}

s32 func_sc02_017_8018A310(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &D_801202A0, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc02_017_8018A368(u8 *o) {
    SMtx m;
    SV8 c;
    u8 *p;

    p = AF(o, u8 *, 0x64);
    if (AF(p, s16, 0x36) == AF(o, s16, 0x10A)) {
        func_8012EC04(p, AF(o, s16, 0xFC), &m);
        func_8012F14C(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc02_017_8018A3E4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

void func_sc02_017_8018A428(s32 o, s16 *v, s32 arg2) {
    SpawnDef d;

    d.x = v[0];
    d.y = v[1];
    d.z = v[2];
    d.kind = 0x35C;
    d.flags = 0;
    d.unk8 = 0;
    d.unkE = arg2;
    d.unk10 = 0;
    d.unkC = 0x7FFF;
    func_8012C51C(&d, o);
}
