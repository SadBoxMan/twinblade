#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern void func_8013CB84();
extern void func_8017E408();
extern void func_800D06E8();
extern s32 func_800167F0();
extern void func_800D1EBC();
extern s32 D_80127050;
extern void func_80175414();
extern void func_8016F0E4();
extern void func_80165770();
extern s32 func_800D0EC4();
extern s32 func_80180AC4();
extern s32 func_80180B5C();
extern s32 func_8014CB1C();
extern void func_8014B2A8();
extern void func_8002D4C8();
extern s32 func_80181948();
extern s32 func_801818E0();
extern s32 func_8018766C();
extern s32 func_80181D04();
extern s32 D_801D6014;
extern s32 D_801EEAF8;
extern s32 func_801824DC();
extern s32 func_801825A8();
extern void func_80182638();
extern void func_801826B8();
extern s32 func_80183948();
extern s32 func_80183A14();
extern s32 func_80187A64();
extern s32 func_80184840();
extern s32 func_80128C98();
extern void func_801EF734();
extern void func_801EF904();
extern void func_801EF46C();
extern void func_801EF58C();
extern void func_801EF624();
extern s32 func_80186288();
extern s32 func_80029504();
extern s32 func_80186890();
extern s32 D_801EF2E0;
extern void func_80029514();
extern s32 func_801889AC();

extern u8 D_801913D4;
extern void func_80187778();
extern u8 D_80191438;
extern s32 func_80178CBC();
extern void func_8012B414();
extern u8 D_801C3B38;
extern void func_80188A78();
extern s32 func_80180D34();
extern u8 D_801919AC;
extern u8 D_80191B3C;
extern u8 D_80191BC0;
extern u8 D_80191C28;
extern u8 D_80191CA4;
extern u8 D_80191CDC;
extern u8 D_80191D14;
extern u8 D_80191D6C;
extern u8 D_801DD064;
extern void func_8001C97C();
extern u8 D_80191E38;
extern u8 D_80191E70;
extern u8 D_801922C8;
extern s32 D_801DAAAC;
extern u8 D_801DD950;
extern s32 D_801EEB08;
extern u8 D_80192434;
extern u8 D_8019246C;
extern u8 D_801924B8;
extern s32 func_8012E57C();
extern u8 D_801925AC;
extern u8 D_80192640;
extern u8 D_801926F8;
extern u8 D_80192740;
extern u8 D_80192748;
extern u8 D_801927B8;
extern u8 D_80192864;
extern u8 D_801C37E8;
extern u8 D_80192888;
extern u8 D_80192970;
extern u8 D_8019299C;
extern u8 D_801929E8;
extern u8 D_80192A18;
extern u8 D_80192AC8;
extern s32 func_8012B2CC();
extern s32 func_80187420();
extern void func_80187584();
extern u8 D_80078EB1;
extern s16 D_801EEB10;
extern s32 func_80178970();
extern void func_80178D18();

extern void (*D_80190F8C[])();
extern void (*D_80190F94[])();
extern void (*D_80190F9C[])();
extern u8 D_80190EF8;
extern void func_8001CB6C();
extern void func_8001CC3C();
extern void (*D_80190FBC[])();
extern void (*D_80190FC4[])();
extern u8 D_80190FDC;
extern u8 D_801BE2F0;
extern s32 func_8012C354();
extern s32 func_80029178();
extern void func_8012C218();
extern void func_80143970();
extern void func_8012B23C();
extern s32 func_8012CBCC();
extern void (*D_8019106C[])();
extern u8 D_8019105C;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void (*D_801910A4[])();
extern void func_800D1E28();
extern void func_8001BFD0();
extern s32 func_800291B4();
extern void func_800D0C48();
extern void (*D_801910EC[])();
extern void (*D_801910F4[])();
extern void (*D_80191100[])();
extern void (*D_8019110C[])();
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
extern void func_8017E9E0();
extern void func_8012A094();
extern void (*D_801914A8[])();
extern void (*D_801918FC[])();
extern void (*D_80191928[])();
extern void (*D_80191930[])();
extern void (*D_80191940[])();
extern void (*D_80191950[])();
extern void (*D_80191960[])();
extern void func_8012C588();
extern void func_8017F13C();
extern void func_8012AD80();
extern void func_80128ED8();
extern s32 func_8012BEE8();
extern void func_80016714();
extern u8 D_80191938;
extern u8 D_801BECE0;
extern void func_8001D0E8();
extern s32 func_8012E8E0();
extern u8 D_80191948;
extern u8 D_801BE978;
extern void func_8001C810();
extern u8 D_80191958;
extern u8 D_801BEE78;
extern void (*D_80191978[])();
extern s32 func_80180634();
extern void func_801805EC();
extern void (*D_8019198C[])();
extern u8 D_80078EBA;
extern void func_80180770();
extern void (*D_801919A0[])();
extern s32 func_80180938();
extern void func_801808F0();
extern void (*D_80191B0C[])();
extern u8 D_801B92FC;
extern s32 func_8012E88C();
extern void func_80187750();
extern s32 func_80187994();
extern u8 D_80191A0C;
extern u8 D_80191A74;
extern s32 func_801877C0();
extern u8 D_801B92EC;
extern void func_80188A14();
extern s32 func_801886A0();
extern s32 func_80180BCC();
s32 func_80180B1C(s32 arg0);
extern u8 D_801919BC;
extern s32 * func_80181078();
extern s32 func_8018727C();
extern s32 func_801788B8();
extern void (*D_80191B30[])();
extern void func_801810EC();
extern void (*D_80191C08[])();
extern void (*D_80191C20[])();
extern s8 D_801EF3D6;
extern s32 func_801816D8();
extern void (*D_80191C90[])();
extern u8 D_80191C58;
extern u8 D_801E4340;
extern u8 D_801F1370;
extern u8 D_801B9348;
extern void (*D_80191D3C[])();
s32 func_80181D8C(s32 arg0);
extern s32 func_80181C38();
extern u8 D_80191CAC;
extern u8 D_801C3890;
extern u16 D_801EEAF0;
extern u16 D_801EEAF2;
extern u8 D_80191D74;
extern u8 D_801CAA80;
extern s32 func_80182898();
extern void (*D_80191E0C[])();
extern u8 D_801B9400;
extern u8 D_80191E40;
extern u8 D_801B940C;
extern void (*D_801922F0[])();
s32 func_801831F0(s32 arg0);
extern s32 func_80182E70();
extern s32 func_80183168();
extern u16 D_801EEB00;
extern u16 D_801EEB02;
extern void (*D_80192418[])();
extern u8 D_80192328;
extern u8 D_80192320;
extern u8 D_80192330;
extern s32 * func_80183EE4();
s32 func_80183AC4(void);
extern void func_80183AFC();
extern u8 D_801B9464;
extern u8 D_801B9470;
extern void (*D_80192510[])();
extern u8 func_80172710;
extern s32 func_8012BD14();
extern void func_80178BF8();
s32 func_80183F58(s32 arg0);
extern s32 func_80183F84();
extern s32 func_80183FF4();
extern s32 func_80184054();
s32 func_801840B8(s32 arg0);
extern void (*D_80192544[])();
extern u8 D_8019254C;
extern u8 D_801B94FC;
extern u8 D_801C3990;
extern void (*D_80192624[])();
extern void (*D_80192828[])();
extern void func_80184F18();
s32 func_80184D64(s32 arg0);
extern void func_80184D90();
extern u8 D_801C36E8;
extern void (*D_801928D8[])();
extern void (*D_80192968[])();
extern s32 func_8016F1AC();
extern s32 func_80187690();
extern void func_80185950();
extern u8 D_801E6640;
s32 func_80185C9C(s32 arg0);
extern void (*D_801929D4[])();
extern void (*D_80192A50[])();
s32 func_801865E0(s32 arg0);
extern void (*D_80192AE8[])();
extern void (*D_80192B10[])();
extern void func_801EF558();
extern u8 D_80192A64;
extern u8 D_801C3C90;
extern u8 D_801C3CE8;
extern u8 D_801CDAD8;
extern void (*D_801C063C[])();
extern s32 func_80186D18();
extern void func_80029124();
extern void func_800D0F4C();
s32 func_80186DAC(s32 arg0);
extern void (*D_801C0B00[])();
extern void (*D_801C0B20[])();
extern u8 D_801C0B18;
extern u8 D_801CA118;
extern s32 func_80187C2C();
extern void func_801883C4();
extern void func_8012E688();
extern void func_8018835C();
extern void (*D_801C0E1C[])();
extern u8 D_801C0E0C;
extern s32 func_80188D68();
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_801C1890[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s32 D_801EF1E0;
extern void func_800D24A0();
extern void func_80189030();
extern s16 D_80115126;
extern s32 D_801C16C4[];
extern void (*D_801EB364[])();
extern void (*D_801EB378[])();
extern u8 D_801EB36C;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_801EB48C[])();
extern s32 D_801EB468[];

extern u8 D_8018D838;
extern u8 D_80190F74;
extern u8 D_80190F7C;
extern void func_8012B260();
extern s32 D_801919D0[];
s32 func_80180CD4(s32 arg0);
extern s32 D_80191C44[];
extern s32 D_80191CC8[];
extern u8 D_801B9354;
extern void func_80181CAC();
extern s32 D_80191D90[];
extern u8 D_801B936C;
s32 func_80182548(s32 arg0);
extern u8 D_801B9360;
s32 func_8018260C(s32 arg0);
extern s32 D_80191E5C[];
extern void func_80182EE4();
extern s32 D_80192344[];
extern u8 D_801B9434;
extern s32 D_80192458[];
extern s32 D_801924A4[];
extern s32 D_80192664[];
extern s32 D_80192678[];
extern s32 D_8019268C[];
extern s32 D_80192A04[];
extern u8 D_801EB390;
extern s32 * func_8018D088();

extern u8 D_801B9440;
extern u8 D_801B9510;

extern void (*D_801913C0[])();
extern void (*D_801913C8[])();
extern void (*D_801913D0[])();
extern u8 D_801C0B08;

extern void func_8016EDEC();
void func_8017E824(u8 *arg0);
extern void func_800167B8();
extern s32 D_80126B9C;
extern s16 D_801270C0;
void func_8017E8AC(u8 *arg0);

extern u8 D_80190FB0;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern void func_8017EA58();
extern void func_8017EB98();



extern s32 func_80187904();
s32 func_8017ED8C(s32 arg0);
extern u8 D_80193E78;
extern s32 D_80192570[];
extern void func_800291A0();

extern void func_8012E8A8();

extern s32 D_801EE950[];
extern u8 D_801EE968[];
extern u16 D_80078EAC;
extern s32 D_800BA2BA[];
extern s16 D_801C0B68[];
extern u8 D_801C0B2C[];
extern u8 D_801C0B28[];

extern u8 D_801EE888;
extern void func_8017E204();

extern u16 D_800B99DA;

extern u8 D_80191904;
extern u8 D_80191DA4;
extern u8 D_801C3790;
extern u8 D_80192398;
extern u8 D_8019286C;
s32 func_80187344(s32 arg0);
extern void func_8014CB68();
extern s32 D_801EF2DC;
extern u8 D_801EF3C8;



extern u8 D_80191020;
extern u8 D_801BE398;
typedef struct { s16 x, y, z, pad; } SV8;
extern SV8 D_80191018;
extern s16 D_8019101C;
extern u8 D_80191010;
extern void func_8012B1B4();
extern s32 func_8012E544();
extern s32 func_8017D5F0();
extern s32 func_8012B608();
extern s32 func_8012B744();

typedef struct { s16 v[6]; } S12;
extern S12 D_801C0B50;
extern u8 D_801C0B40;
extern u8 D_801C0B5C;
extern s32 *func_8018872C();

extern void (*D_801C0DF8[])();
extern void func_80188438();
extern void func_80188498();

s32 func_801858A0(s32 arg0);
s32 func_801858CC(s32 arg0);
s32 func_801858F8(s32 arg0);
s32 func_80185924(s32 arg0);
s32 func_80185874(s32 arg0);
extern u8 D_801B9608;
extern u8 D_801B9614;

extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_80190FA4;

extern s32 func_8014B12C();
extern void func_8012B178();
extern s32 func_8012B030();
extern s32 func_8012BE98();

extern s32 func_8018739C();
s32 func_80188D1C(s32 arg0);

extern u8 D_801B93A4;
extern u8 D_801B93F4;
s32 func_8018268C(s32 arg0);

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

extern s16 D_800B9A08;
extern s32 func_801887D0();

void func_8017BE9C(u8 *arg0) {
    D_80190F8C[AF(arg0, u16, 2)]();
}

void func_8017BED8(u8 *arg0) {
    D_80190F94[AF(arg0, u16, 2)]();
}

void func_8017BF14(u8 *arg0) {
    D_80190F9C[AF(arg0, u16, 2)]();
}

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
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
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s32 x, y, z, pad; } V4;
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
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
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
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { s32 w[4]; } W16;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef void (*StepFn)(void);
extern s32 func_8012913C();
extern u8 D_801EE680;
extern s32 func_8012C750();

void func_8017BF50(u8 *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = AF(o, u16 *, 0xDC);
    if (p != 0) {
        t = &D_801EE680;
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

extern u16 D_801EE880;
extern void *D_801151D4;

void func_8017C094(void) {
    FeSv v;
    u8 *p;

    p = D_801151D4;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_801EE880 = v.y;
}

void func_8017C100(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        func_8001CB6C(temp_s0, (s32) &D_80190EF8, 0x3C0, 0xA0);
    } else {
        func_8001CC3C(temp_s0, (s32) &D_80190EF8, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_8017C1AC(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_801EE880;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_8017C1EC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_80190F74);
    SetScript(arg0, (s32) &D_8018D838);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    func_8012B260(arg0);
    AF(arg0, s32 *, 0x58) = &D_80190F7C;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern u16 D_80126B62;

void func_8017C2B0(u8 *o) {
    u8 unused[8];
    u8 *m;
    s16 y;

    m = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xA) - (s16) D_80126B62 < 0x40) {
        AF(o, s16, 0x5C) = 0x800;
    } else {
        AF(o, s16, 0x5C) = 0x40;
    }
    y = D_801EE880;
    if (AF(m, s16, 0x12) != y) {
        AF(m, s16, 0x12) = y;
        RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, AF(o, u8 *, 0x20) + 0x34);
        AF(m, u16, 0x2C) |= 0x11;
    }
}

void func_8017C338(u8 *arg0) {
    D_80190FBC[AF(arg0, u16, 2)]();
}

void func_8017C374(u8 *a) {
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
    o = func_800D222C(a, &D_80190FA4, 0xFD);
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

void func_8017C538(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_8017C5CC(u8 *arg0) {
    D_80190FC4[AF(arg0, u16, 2)]();
}

void func_8017C608(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_80190FB0, 0x18);
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

void func_8017C6AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void DrawChunkedMesh(u8 *obj) {
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
                if (type != 4) g.z = m + 0x20;
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
                if (type == 7) g.z = m + 0x20;
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
                if (type == 3) g.z = zb + 0x20;
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

extern s32 func_80135888();
extern void func_8012ADE4();

s32 func_8017D5F0(u8 *o, u8 *e) {
    SV8 a;
    SV8 b;
    SV8 c;
    u8 *h;

    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    c = b;
    if (func_80135888(AF(e, s32, 0x20), AF(e, s32, 0x58), &a, &c) == 0) {
        return 0;
    }
    func_8012ADE4(o);
    if (AF(e, s32, 0x58) != 0) {
        h = AF(AF(e, u8 *, 0x78), u8 *, 8);
        if (AF(o, s16, 6) < AF(e, s16, 6) + AF(h, s16, 6) && AF(e, s16, 6) + AF(h, s16, 4) < AF(o, s16, 6)
            && AF(o, s16, 0xE) < AF(e, s16, 0xE) + AF(h, s16, 0xE) && AF(e, s16, 0xE) + AF(h, s16, 0xC) < AF(o, s16, 0xE)) {
            AF(o, s16, 0xE) += 0x40;
        }
    }
    return 1;
}

extern u8 D_801BE3F0;
extern u8 D_801BE498;
extern u8 D_8019102C;

void func_8017D734(u8 *o) {
    s32 n;

    if (AF(o, s16, 0x100) > 0) {
        if (func_8012CBCC(o) & 0x6000) {
            AF(o, s16, 0x16) = -4;
        }
        n = func_8012E544(0xAD);
        if (n != 0) {
            func_8017D5F0(o, (u8 *)n);
        }
        if (AF(o, s16, 0xA) < AF(o, s16, 0x8A) - 0x30) {
            AF(o, s16, 0xE) += 0x40;
        }
    }
    if (--AF(o, s32, 0x1C) == 0) {
        n = (AF(o, u16, 0x100) + 1) & 3;
        AF(o, u16, 0x100) = n;
        switch (n) {
        case 0:
            AF(o, s32, 0x1C) = 0x14;
            SetScript(o, &D_801BE3F0);
            break;
        case 1:
        case 2:
        case 3:
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_801BE498);
            if (func_8012BE98(o, &D_80191010) < 0x4000) {
                AF(AF(o, u8 *, 0x20), u16, 0x12) += rand() & 0x1FF;
            } else {
                AF(AF(o, u8 *, 0x20), u16, 0x12) = func_8012B744(o + 4, &D_80191010);
            }
            func_8012B2CC(o);
            func_8012B1B4(o, &D_8019102C);
            break;
        }
    }
}

void func_8017D8A8(u8 *a) {
    s32 f;
    s32 e;
    s32 dx;
    s32 dz;
    s32 n;

    func_8012B1B4(a, &D_80191020);
    f = func_8012CBCC(a);
    if (f & 0x6000) {
        AF(a, s16, 0x16) = -4;
    }
    e = func_8012E544(0xAD);
    if (e != 0 && func_8017D5F0(a, e) != 0) {
        f |= 0x8000;
    }
    if (f & 0x8000) {
        n = (AF(a, u16, 0x104) + 1) & 0x3F;
        AF(a, u16, 0x104) = n;
        if (n < 0x1F) {
            AF(AF(a, u8 *, 0x20), u16, 0x12) += 0x200;
        } else {
            AF(AF(a, u8 *, 0x20), u16, 0x12) -= 0x200;
        }
    } else {
        AF(a, u16, 0x104) = 0;
    }
    AF(AF(a, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(a, u8 *, 0x20), s16, 0x12), func_8012B744(a + 4, &D_80191018), 4);
    dx = AF(a, s16, 6) - D_80191018.x;
    dz = AF(a, s16, 0xE) - D_8019101C;
    if (dx * dx + dz * dz < 0x400) {
        AF(a, s16, 2) = 3;
        SetScript(a, &D_801BE398);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = func_8012B744(a + 4, &D_80191010);
    }
}

extern u8 D_801BE5E0;
extern u8 D_80191038;
extern void (*D_80191044[])();

void func_8017DA48(u8 *o) {
    if (AF(o, s16, 0xFC) != AF(o, s16, 0xFE)) {
        AF(o, s16, 0xFE) = AF(o, s16, 0xFC);
        switch (AF(o, s16, 0xFC)) {
        case 0:
            AF(o, s32, 0x1C) = 1;
            AF(o, s16, 2) = 1;
            break;
        case 1:
            SetScript(o, &D_801BE2F0);
            AF(o, s16, 2) = 2;
            break;
        case 2:
            SetScript(o, &D_801BE5E0);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xC00;
            func_8012B2CC(o);
            func_8012B1B4(o, &D_80191038);
            AF(o, s16, 2) = 4;
            AF(o, s32, 0x1C) = 0x78;
            break;
        case 3:
            SetScript(o, &D_801BE2F0);
            AF(o, s16, 2) = 5;
            break;
        }
    }
    D_80191044[AF(o, u16, 2)](o);
}

void func_8017DB6C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_80190FDC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0xC4) = 1;
        if ((func_80029504() < 0x14U) || (func_80029504() >= 0x46U) || ((func_80029178(0xE5) & 0xFF) && (func_80029504() != 0x3C))) {
            func_8012C218(arg0);
            return;
        }
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012B23C(arg0);
        SetScript(arg0, (s32) &D_801BE2F0);
        AF(arg0, s32, 0x1C) = 1;
    }
}

void func_8017DC48(void) {
}

void func_8017DC50(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012CBCC(arg0);
    if (temp_v0 & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
        AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    }
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012C218(arg0);
    }
}

void func_8017DCE4(u8 *a) {
    SV8 t;
    u8 *e;
    s32 f;

    e = (u8 *)func_8012E544(0xAD);
    if (e == 0) {
        func_8012C218(a);
        return;
    }
    func_8012B1B4(a, &D_80191020);
    f = func_8012CBCC(a);
    if (f & 0x6000) {
        AF(a, s16, 0x16) = -6;
    }
    if (f & 0x8000) {
        AF(a, s32, 4) += AF(a, s32, 0x10);
        AF(a, s32, 8) += AF(a, s32, 0x14);
        AF(a, s32, 0xC) += AF(a, s32, 0x18);
    }
    t.x = AF(e, u16, 6) + 0x20;
    t.z = AF(e, u16, 0xE) + 0x20;
    AF(AF(a, u8 *, 0x20), u16, 0x12) += func_8012B608(AF(AF(a, u8 *, 0x20), s16, 0x12), func_8012B744(a + 4, &t), 4);
}

void func_8017DDEC(u8 *arg0) {
    D_8019106C[AF(arg0, u16, 2)]();
}

void func_8017DE28(s32 arg0, s32 arg1) {
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
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_8019105C | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_8017DEA4(void) {
}

void func_8017DEAC(u8 *arg0) {
    D_801910A4[AF(arg0, u16, 2)]();
}

extern void func_8012AD50();

void func_8017DEE8(u8 *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (D_80078EB1 == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_801EE888)[i];
            AF(p, s16, 0x16) = i;
            func_8017E204((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        func_8012AD50((s32) o);
    }
}

extern u8 D_80078E78;
extern u8 D_800AF630;
extern void func_8012AD44();
extern void func_8017E2C0();

void func_8017DF78(s32 arg0) {
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
            if (((Fx24 *) &D_801EE888)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            func_8012AD44(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_801EE888)[i];
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
                    func_8017E1B4((s32) p);
                }
            }
            func_8017E2C0(p);
        }
    }
}

void func_8017E1B4(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_801EE888;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_8017E204((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

extern u8 D_80191074;

void func_8017E204(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_80191074;
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

extern void func_80017714();

void func_8017E2C0(u8 *o) {
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

void func_8017E3D8(void) {
    func_8013CB84();
    func_8017E408();
    func_800D06E8();
}

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u16 D_801910AC[];
extern u8 D_801910CC;
extern u32 D_801EE918;
extern u16 D_801EE91C[];
extern void func_800183E0();

void func_8017E408(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_801EE91C[i] = D_801910AC[((D_801EE918 >> 8) + i) & 0xF] | 0x8000;
    }
    func_800183E0(&D_801910CC);
    D_801EE918 += 0x100;
}

s32 func_8017E494(u8 *arg0) {
    func_8016EDEC((s32) func_8017E824, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_8017E4E4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_8017E508(u8 *arg0) {
    func_8016EDEC((s32) func_8017E8AC, 0x01000000);
    D_801270C0 = 2;
    D_80126B9C |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9A0A;
extern s32 func_800D1D94();

s32 func_8017E578(u8 *o) {
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

void func_8017E628(void) {
    func_800D1EBC();
}

s32 func_8017E648(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_8017E69C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        if (!(func_800291B4(0xCE) & 0xFF)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_8017E720(u8 *arg0) {
    D_801910EC[AF(arg0, u8, 0x15)]();
}

void func_8017E75C(u8 *arg0) {
    D_801910F4[AF(arg0, u8, 0x15)]();
}

void func_8017E798(u8 *arg0) {
    D_80191100[AF(arg0, u8, 0x15)]();
}

void func_8017E7D4(u8 *arg0) {
    D_8019110C[AF(arg0, u8, 0x15)]();
}

void func_8017E810(void) {
    D_80127050 = 1;
}

void func_8017E824(u8 *arg0) {
    D_801913C0[AF(arg0, u8, 0x214)]();
}

void func_8017E860(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017E874(s32 arg0) {
    func_80175414();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_8017E8AC(u8 *arg0) {
    D_801913C8[AF(arg0, u8, 0x214)]();
}

void func_8017E8E8(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017E8FC(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_8017E91C(void) {
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
    func_8012A018((s32) func_8017E9E0, 0);
    D_801269E8 = temp_s1;
    func_8012A094((s32) &D_80126948);
    func_8017E9E0((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    func_8017E9E0((s32) &D_80126948);
}

void func_8017E9E0(s32 arg0) {
    D_801913D0[AF(arg0, u8, 4)]();
}

void func_8017EA1C(s32 arg0) {
    s32 pad[2];
    func_8017EA58(arg0, arg0 + 0xA0);
    func_8017EB98(arg0);
}

void func_8017EA50(u8 *arg0) {
    AF(arg0, u8, 0xA0) = 0;
}

extern u8 D_80126B58;
extern s16 D_8018D828[];
extern s32 func_801487F4();
extern s32 func_80148800();
extern s32 func_80012A60();

void func_8017EA58(u8 *o, u8 *a1) {
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
        if ((s16)func_80012A60(AF(o, s16, 0x1A), D_8018D828[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_8018D828[*a1];
}

extern s16 D_80126940[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 func_80012B04();
extern s32 func_80012ABC();
extern s32 func_80012C6C();
extern void func_8012F14C();

void func_8017EB98(u8 *o) {
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

s32 func_8017ED8C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_801913D4);
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
typedef struct {
    s16 f0; u8 p2[0xC]; s16 fE; u8 p10[0x20];
    S16R f30[8];
    union { s16 h[8]; S16R r[8]; } f40;
} W80115118;

void func_8017EDB8(u8 *arg0) {
    extern s32 *func_8017EF30();
    s32 t;
    s32 r;

    t = func_8012C1B8();
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), 0);
    r = func_80029504();
    if (r < 0xC8) {
        if (func_801877C0() == 3) {
            AF(arg0, s16, 2) = 2;
        } else if (func_8018766C(0xA, 0x10) != 0) {
            AF(arg0, s16, 2) = 1;
        } else {
            AF(arg0, s16, 2) = 2;
        }
    } else if (r < 0x258) {
        func_8012CAE4(arg0);
        return;
    } else if (r < 0x384) {
        if (r < 0x276) {
            func_8012CAE4(arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
    } else {
        AF(arg0, s16, 2) = 1;
    }
    func_80187778(arg0, &D_801913D4);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, func_8017EF30);
}

void func_8017EEA8(u8 *arg0) {
    D_801914A8[AF(arg0, u16, 2)]();
}

void func_8017EEE4(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_80191438);
}

s32 func_8017EF10(void) {
    return func_800D0EC4() == 0;
}

extern u16 D_80126B5E;
extern u16 D_80126B66;

s32 *func_8017EF30(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x6401) {
        return NULL;
    }
    if ((s16) D_80126B5E >= 0x281) {
        return NULL;
    }
    if ((s16) D_80126B66 < -0x380) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_8017EFD4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_801877C0();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_80187904();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
            goto block_7;
        }
block_6:
        if (func_8018766C(0xA, 0x10) == 0) {
block_7:
            func_8017ED8C(arg0);
        }
    }
}

void func_8017F058(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_80029504(arg0, arg1);
    if (temp_v0 < 0xC8) {
        var_v0 = func_801877C0();
        var_v1 = 3;
        goto block_5;
    }
    if (temp_v0 >= 0x258) {
        if (temp_v0 >= 0x384) {
            var_v0 = func_80187904();
            var_v1 = 1;
block_5:
            if (var_v0 != var_v1) {
                goto block_6;
            }
        } else {
block_6:
            if (func_8018766C(0xA, 0x10) != 0) {
                goto block_7;
            }
        }
    } else {
block_7:
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_801913D4);
    }
}

void func_8017F0EC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_801913D4);
    }
}

extern s32 func_8001D074();
extern void func_800233CC();
extern void func_8001CD50();

void func_8017F13C(void) {
    s32 i;

    for (i = 0; i < 6; i++) {
        D_801EE950[i] = func_8001D074(0x3E, 0x7D);
        AF(D_801EE968 + i * 0x40, s32, 4) = 0;
        func_800233CC(D_801EE968 + i * 0x40, 0x30);
        func_8001CD50(D_801EE950[i], D_801EE968 + i * 0x40);
        AF(D_801EE950[i], s32, 4) |= 0xD0000040;
    }
}

extern s32 D_801EEAEC;

s32 func_8017F1F0(s32 arg0, s32 arg1) {
    s32 v1 = D_801EEAEC;

    if (arg1 < arg0) {
        if (v1 < arg1) {
            v1 += 0x5A0;
        }
        arg1 += 0x5A0;
    }
    if (arg0 >= v1 || v1 >= arg1) {
        return -1;
    }
    arg0 = v1 - arg0;
    if (arg0 < 0x10) {
        return arg0 * 2;
    }
    arg0 = arg1 - v1;
    if (arg0 < 0x10) {
        return arg0 * 2;
    }
    return 0x1F;
}

extern s32 *D_801EEAE8;
extern s32 (*D_801918A4[])();
extern void func_8017F2AC();

void func_8017F258(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_801918A4[arg0]();
    if (temp_v0 != -1) {
        func_8017F2AC(D_801EEAE8, temp_v0);
    }
}

extern u8 D_801918EC[];
extern void func_8017F368();

void func_8017F2AC(SV *arg0, s32 arg1) {
    CV4 c;
    s32 m;
    s32 t;
    s32 b;

    b = D_801918EC[D_800B99DA & 0xF];
    if (b == 0) {
        m = 0x60;
    } else {
        m = 0x50;
    }
    arg1++;
    t = (m * arg1) / 32;
    b = t / 2;
    c.r = t;
    c.g = t;
    c.b = b;
    c.cd = 0;
    while (arg0->pad != -1) {
        func_8017F368(arg0, *(s32 *)&c);
        arg0++;
    }
}

extern OtRef D_800A651C[];
extern u8 *AllocPrim();
extern SV8 D_801914BC[][4];
extern SV8 D_8019153C[][4];
extern SV8 D_801915DC[];
extern void func_8012E32C();
extern void func_8012E28C();

void func_8017F368(u8 *o, s32 col) {
    u8 unused[0x20];
    SV8 v[4];
    SV8 w[4];
    s32 sxy[8];
    SV8 idx;
    s32 p;
    s32 otz;
    s32 flag;
    u8 n;
    s32 k;
    s32 i;
    s32 j;
    u8 *prim;
    SV8 *t;
    SV8 *u;

    func_8012E32C();
    k = AF(o, u16, 6) & 0xFF;
    if ((AF(o, u16, 6) & 0xF00) == 0x200) {
        func_8017F750(o, col);
        return;
    }
    n = k;
    t = D_801914BC[k];
    for (j = 0; j < 4; j++, t++) {
        v[j].x = AF(o, s16, 0) + t->x;
        v[j].y = AF(o, s16, 2) + t->y;
        v[j].z = AF(o, s16, 4) + t->z;
    }
    if (RotNclip4(&v[0], &v[1], &v[2], &v[3], &sxy[0], &sxy[1], &sxy[2], &sxy[3], &p, &otz, &flag) <= 0) {
        return;
    }
    otz -= 0x10;
    if (otz < 0) {
        return;
    }
    if (otz >= 0x1000) {
        return;
    }
    u = D_8019153C[n];
    for (j = 0; j < 4; j++, u++) {
        w[j].x = AF(o, s16, 0) + u->x;
        w[j].y = AF(o, s16, 2) + u->y;
        w[j].z = AF(o, s16, 4) + u->z;
    }
    RotTransPers4(&w[0], &w[1], &w[2], &w[3], &sxy[4], &sxy[5], &sxy[6], &sxy[7], &p, &flag);
    prim = AllocPrim(0xA8);
    for (i = 0; i < 4; i++) {
        idx.x = D_801915DC[i].x;
        idx.y = D_801915DC[i].y;
        idx.z = D_801915DC[i].z;
        idx.pad = D_801915DC[i].pad;
        AF(prim, s32, 4) = idx.x < 4 ? col : 0;
        AF(prim, s32, 0xC) = idx.y < 4 ? col : 0;
        AF(prim, s32, 0x14) = idx.z < 4 ? col : 0;
        AF(prim, s32, 0x1C) = idx.pad < 4 ? col : 0;
        AF(prim, u8, 7) = 0x3A;
        AF(prim, s32, 0) = 0x08000000;
        AF(prim, s32, 8) = sxy[idx.x];
        AF(prim, s32, 0x10) = sxy[idx.y];
        AF(prim, s32, 0x18) = sxy[idx.z];
        AF(prim, s32, 0x20) = sxy[idx.pad];
        AddPrim(D_800A651C[D_800B9A02].ot + otz, prim);
        prim += 0x24;
    }
    AF(prim, s32, 4) = col;
    AF(prim, u8, 7) = 0x2A;
    AF(prim, s32, 0) = 0x05000000;
    AF(prim, s32, 8) = sxy[0];
    AF(prim, s32, 0xC) = sxy[1];
    AF(prim, s32, 0x10) = sxy[2];
    AF(prim, s32, 0x14) = sxy[3];
    AddPrim(D_800A651C[D_800B9A02].ot + otz, prim);
    func_8012E28C(otz, 1);
}

void func_8017F750(s32 arg0, s32 arg1) {
    u32 temp_v1;
    void *temp_a2;

    temp_v1 = (u16) AF(arg0, u16, 6) >> 0xC;
    temp_a2 = D_801EE950[temp_v1];
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) & 0x7FFFFFFF);
    (*(s32 *)((u8 *)D_801EE968 + ((temp_v1 << 6)) * 1)) = arg1;
    AF(temp_a2, u16, 8) = (u16) AF(arg0, u16, 0);
    AF(temp_a2, u16, 0xA) = (u16) AF(arg0, u16, 2);
    AF(temp_a2, u16, 0xC) = (u16) AF(arg0, u16, 4);
    AF(temp_a2, s16, 0x12) = (s16) ((AF(arg0, u16, 6) & 0xF) << 0xA);
}

void func_8017F7C8(u8 *arg0) {
    D_801918FC[AF(arg0, u16, 2)]();
}

extern s32 func_8012C658();
extern u8 D_8019190C[][4];

void func_8017F804(u8 *o) {
    s32 i;

    if (func_8018766C(7, 0x13) == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        if (D_8019190C[AF(o, s16, 0x100)][i] == AF(o, s32, 0x1C)) {
            func_8012C658(0x140, AF(o, u8, 0xFC) | ((AF(o, s16, 0xFE) << 8) & 0xFF00), o);
            break;
        }
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 0x1C) = 0x50;
        AF(o, u16, 0xFE) = (AF(o, u16, 0xFE) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, u16, 0xFC) = (AF(o, u16, 0xFC) + (rand() & 0xF) - 7) & 0xFF;
        AF(o, s16, 0x100) = rand() % 7;
    }
}

void func_8017F920(u8 *arg0) {
    D_80191928[AF(arg0, u16, 2)]();
}

void func_8017F95C(u8 *arg0) {
    D_80191930[AF(arg0, u16, 2)]();
}

void func_8017F998(u8 *arg0) {
    D_80191940[AF(arg0, u16, 2)]();
}

void func_8017F9D4(u8 *arg0) {
    D_80191950[AF(arg0, u16, 2)]();
}

void func_8017FA10(void) {
}

void func_8017FA18(u8 *a) {
    s32 v;
    u8 *m;

    switch (AF(a, u16, 0x34)) {
    case 0:
        if (func_8012BEE8(a) != 0) {
            AF(a, s32, 0x1C) = 0x40;
            AF(a, u16, 0x34)++;
            do {
                v = rand() & 0x3FFF;
                v += 0x7800;
                if (!(rand() & 1)) {
                    v = -v;
                }
            } while (0);
            AF(a, s32, 0xE0) = v;
            AF(a, s32, 0xE4) = 0;
        }
        break;
    case 1:
        m = AF(a, u8 *, 0x20);
        AF(a, s32, 0xE4) += AF(a, s32, 0xE0);
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(m, u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, u16, 0x34)++;
            AF(a, s32, 0x1C) = (rand() & 0x3F) + 0x40;
        }
        break;
    case 2:
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, s32, 0x1C) = 0x40;
            AF(a, u16, 0x34)++;
            AF(a, s32, 0xE0) = -AF(a, s32, 0xE0);
        }
        break;
    case 3:
        AF(a, s32, 0xE4) += AF(a, s32, 0xE0);
        AF(a, s32, 0xDC) += AF(a, s32, 0xE4);
        AF(AF(a, u8 *, 0x20), u16, 0x12) = AF(a, u16, 0xDE);
        if (func_8012BEE8(a) != 0) {
            AF(a, u16, 0x34) = 0;
            AF(a, s32, 0x1C) = (rand() & 0xFF) + 0x40;
        }
        break;
    }
}

void func_8017FBC4(u8 *arg0) {
    D_80191960[AF(arg0, u16, 2)]();
}

extern WMtx D_800AF648;
extern SV8 D_80191968;
extern s32 func_80013450();

void func_8017FC00(void) {
    u8 *b = &D_80126B58;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 d;
    s32 a;
    s32 y;

    if (D_800B99DA & 1) {
        return;
    }
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    if (RotTransPers(&D_80191968, &sxy, &p, &flag) <= 0 || flag < 0) {
        func_8002D4C8(4, 0x7E6);
        return;
    }
    ((s16 *)&sxy)[0] += 0xA0;
    if (((s16 *)&sxy)[0] < 0) {
        ((s16 *)&sxy)[0] = 0;
    } else if (((s16 *)&sxy)[0] > 0x140) {
        ((s16 *)&sxy)[0] = 0x140;
    }
    x = ((s16 *)&sxy)[0] * 15 / 320;
    d = func_80013450(b + 4, &D_80191968);
    if (d >= 0x240) {
        d = 0x23F;
    }
    a = ((0x23F - d) * 0x7F / 0x240) & 0x7F;
    y = ((x << 8) & 0xF00) | 0x3000;
    func_8002D4C8(0x7E6, y | a);
}

extern u8 D_801915FC;

void func_8017FD5C(void) {
    D_801EEAE8 = &D_801915FC;
    func_8017F1F0(0x474, 0x4B0);
}

extern u8 D_80191634;

void func_8017FD90(void) {
    D_801EEAE8 = &D_80191634;
    func_8017F1F0(0x474, 0x4EC);
}

extern u8 D_8019166C;

void func_8017FDC4(void) {
    D_801EEAE8 = &D_8019166C;
    func_8017F1F0(0x474, 0x4B0);
}

extern u8 D_80191694;

void func_8017FDF8(void) {
    D_801EEAE8 = &D_80191694;
    func_8017F1F0(0x474, 0x4B0);
}

extern u8 D_801916CC;

void func_8017FE2C(void) {
    D_801EEAE8 = &D_801916CC;
    func_8017F1F0(0x474, 0x528);
}

extern u8 D_80191704;

s32 func_8017FE60(void) {
    s32 ret;

    D_801EEAE8 = &D_80191704;
    ret = func_8017F1F0(0x168, 0x1A4);
    if (ret == -1) {
        ret = func_8017F1F0(0x474, 0x4EC);
    }
    if ((u32) (func_80029504() - 0xC8) < 0xDCU) {
        return -1;
    }
    return ret;
}

extern u8 D_80191744;

void func_8017FED4(void) {
    D_801EEAE8 = &D_80191744;
    func_8017F1F0(0x474, 0x1A4);
}

extern u8 D_8019177C;

s32 func_8017FF08(s32 arg0) {
    D_801EEAE8 = (s32 *) &D_8019177C;
    if ((u32) (func_80029504(arg0) - 0x64) < 0x1F4U) {
        return -1;
    }
    return ((s32 (*)()) func_8017F1F0)(0x96, 0xF0);
}

extern u8 D_8019179C;

void func_8017FF54(void) {
    D_801EEAE8 = &D_8019179C;
    func_8017F1F0(0x12C, 0x1A4);
}

extern u8 D_801917EC;

void func_8017FF88(void) {
    D_801EEAE8 = &D_801917EC;
    func_8017F1F0(0x474, 0x4B0);
}

extern u8 D_8019184C;

void func_8017FFBC(void) {
    D_801EEAE8 = &D_8019184C;
    func_8017F1F0(0x474, 0x4B0);
}

extern u8 D_8019187C;

s32 func_8017FFF0(void) {
    D_801EEAE8 = &D_8019187C;
    if ((u32) (func_80029504() - 0x64) < 0x1F4U) {
        return -1;
    }
    return ((s32 (*)())func_8017F1F0)(0x474, 0x78);
}

extern u8 D_80191894;

void func_8018003C(void) {
    D_801EEAE8 = &D_80191894;
    func_8017F1F0(0x564, 0x1A4);
}

s32 func_80180070(void) {
    return -1;
}

extern u8 D_80078EB0;

void func_80180078(void) {
    s32 i;

    D_801EEAEC = (D_80078EB1 * 0x3C) + D_80078EB0;
    for (i = 0; i < 6; i++) {
        AF(((void **)&D_801EE950)[i], s32, 4) |= 0x80000000;
    }
    for (i = 2; i < 0x12; i++) {
        func_8017F258(i);
    }
    func_8017FC00();
    if (D_801EF2DC != 0) {
        D_801EF2DC -= 1;
    }
}

void func_80180134(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    func_8012C588(0x13F, 0);
    func_8012C588(0x66, 0);
    func_8012C588(0x65, 0);
    func_8012C588(0x14C, 0);
    func_8012C588(0x335, 0);
    func_8012C588(0x3D9, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8017F13C();
}

void func_801801E0(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 1;
    func_8012E8E0((s32) arg0, (s32) &D_80191904, arg2);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0x80;
}

extern s32 func_8012C194();
extern void func_80128EA8();
extern void func_8012B0B4();
extern u8 D_800D387C;
extern u8 D_800D3888;

void func_80180224(u8 *o) {
    s32 v;
    u8 *w;
    u8 *p;
    s32 t;

    w = (u8 *)func_8012C194();
    if (w == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, u8 *, 0xCC) = w;
    func_8001CC3C(w, 0, 0, 0);
    AF(w, u8 *, 0x20) = &D_800D387C;
    AF(w, u8, 0x27) = 0x9C;
    AF(w, s16, 0x18) = AF(w, s16, 0x1A) = 0x3000;
    AF(w, s32, 4) |= 0x50000000;
    func_80128EA8(w, o + 0xD0, &D_800D3888);
    p = AF(o, u8 *, 0xCC);
    AF(p, s16, 8) = AF(o, s16, 6);
    AF(p, s16, 0xA) = AF(o, s16, 0xA);
    AF(p, s16, 0xC) = AF(o, s16, 0xE);
    t = AF(o, s16, 0x70);
    AF(o, s32, 0x1C) = 0x5A;
    AF(o, s16, 2) = 1;
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x14) = 0xFFF80000;
    AF(o, s32, 0x18) = 0;
    func_8012B0B4(&v, (t & 0xFF00) >> 4, (t & 0xFF) << 6);
    AF(o, s32, 0x44) = (s16)v;
    AF(o, s32, 0x48) = 0;
    AF(o, s32, 0x4C) = v >> 16;
    {
        u8 unused[8];
    }
}

void func_80180340(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;
    void *temp_v1;

    temp_s1 = AF(arg0, void *, 0xCC);
    func_8012AD80((s32) arg0, arg1, arg2);
    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        func_80128ED8((s32) temp_s1, (s32) (arg0 + 0xD0));
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_80016714((s32) temp_s1, 0x38);
        func_8012C218((s32) arg0);
    }
}

void func_801803DC(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 8);
    func_8012B414();
}

void func_80180410(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801BECE0);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_80191938);
    AF(arg0, s16, 2) = 1;
}

void func_80180488(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) ((u32) rsin(D_800B99DA * 0x30, arg1, arg2, arg3) >> 5);
}

void func_801804D0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (((u32) (func_80029504(arg0, arg1) - 0x181) < 0x55U) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_801BE978);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    func_8012E8E0(arg0, (s32) &D_80191948);
    AF(arg0, s16, 2) = 1;
}

void func_80180574(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801BEE78);
    func_8012E8E0(arg0, (s32) &D_80191958);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s32, 0xE0) = 0;
    AF(arg0, s32, 0xE4) = 0;
}

void func_801805EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801805F8(u8 *arg0) {
    D_80191978[AF(arg0, u16, 2)]();
}

s32 func_80180634()
{
    if (func_801877C0() == 3) {
        return 1;
    }
    if (func_80187904() == 1 || D_80078EBA == 2) {
        return 1;
    }
    return func_8018766C(0xC, 0x14) == 0;
}

void func_8018069C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_80180634((s32) arg0, arg1) == 1) {
        func_801805EC((s32) arg0);
    }
}

void func_801806E8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80180634() == 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80180728(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xD);
    v = func_80180634();
    if (v != 0) {
        v = 2;
    } else {
        v = 1;
    }
    AF(arg0, s16, 2) = v;
}

void func_80180770(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_8018077C(u8 *arg0) {
    D_8019198C[AF(arg0, u16, 2)]();
}

void func_801807B8(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(7, 0x13) != 0;
    }
    if (var_v0 == 0) {
        func_80180770((s32) arg0);
    }
}

void func_80180820(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 3) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(7, 0x13) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80180884(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 8);
    if (D_80078EBA == 3) {
        v = 0;
    } else {
        v = func_8018766C(7, 0x13) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

void func_801808F0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801808FC(u8 *arg0) {
    D_801919A0[AF(arg0, u16, 2)]();
}

s32 func_80180938()
{
    if ((u32)(func_80029504() - 0x12C) < 0x12CU && (u8)func_80029178(0xFA)) {
        return 0;
    }
    return func_8018766C(0xA, 0x14) != 0;
}

void func_8018098C(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_80180938((s32) arg0, arg1) == 0) {
        func_801808F0((s32) arg0);
    }
}

void func_801809D0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80180938() != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80180A10(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xC);
    v = func_80180938();
    if (v != 0) {
        v = 1;
    } else {
        v = 2;
    }
    AF(arg0, s16, 2) = v;
}

void func_80180A58(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x34) = 0;
    SetScript((s32) arg0, (s32) &D_801C3B38);
}

void func_80180A88(u8 *arg0) {
    D_80191B0C[AF(arg0, u16, 2)]();
}

s32 func_80180AC4(void) {
    switch (func_801877C0()) {
    case 0:
        return func_8018766C(7, 0x13) != 0;
    case 3:
        return 0;
    default:
        return func_8018766C(9, 0x11) != 0;
    }
}

s32 func_80180B1C(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_80188A78(arg0, 0xC, 1);
    return func_80180D34(arg0);
}

s32 func_80180B5C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_801919AC);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B92EC, 0, 0x60);
}

s32 func_80180BCC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    func_80188A78(arg0, 0xC, 1);
    return func_80187994(arg0, (s32) &D_801B92FC, 0, 0x40);
}

s32 func_80180C3C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    return SetScript(arg0, (s32) &D_801C3B38);
}

void func_80180C68(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    if (func_801877C0((s32) arg0) != 1) {
        func_80178CBC((s32) arg0, (s32) &D_80191A0C);
        AF(arg0, s16, 0x34) = 0;
        return;
    }
    func_80178CBC((s32) arg0, (s32) &D_80191A74);
    AF(arg0, s16, 0x34) = 1;
}

s32 func_80180CD4(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3B38);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B92EC, 1, 0x60);
}

s32 func_80180D34(s32 arg0) {
    func_80187778(arg0, (s32) &D_801919AC);
}

void func_80180D5C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_801919D0[func_801877C0(arg0)];
}

s32 func_80180D9C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x110, arg1) & 0xFF)) {
        func_80029124(0x110, 1);
        return 1;
    }
    return 0;
}

void func_80180DD8(s32 arg0) {
    if (func_80180AC4() != 0) {
        func_80180B5C(arg0);
    }
}

void func_80180E10(s32 arg0) {
    func_80188A14(arg0, 0xC, 1);
    if ((func_801886A0(0xC) != 0) && (func_80187A64(arg0) != 0)) {
        func_80180BCC(arg0);
    }
}

void func_80180E68(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        if (func_80180AC4() == 0) {
            func_80180CD4(arg0);
            return;
        }
        func_80187994(arg0, (s32) &D_801B92FC, 0, 0x40);
    }
}

extern s32 func_801789AC();
extern u8 D_80191AC4;
extern u8 D_80191AEC;

void func_80180ECC(u8 *arg0) {
    s32 v;

    switch (AF(arg0, u16, 0x34)) {
    case 1:
        v = func_801789AC(arg0);
        if (v != 0) {
            if (v == 1) {
                func_80178CBC(arg0, (s32) &D_80191AC4);
            } else {
                func_80178CBC(arg0, (s32) &D_80191AEC);
            }
            AF(arg0, s16, 0x34)++;
        }
        break;
    case 0:
    case 2:
        if (func_80178970(arg0) != 0) {
            func_80178D18(arg0);
            func_80180C3C(arg0);
        }
        break;
    }
}

void func_80180FA0(s32 arg0) {
    func_80188A14(arg0, 0xC, 1);
    if ((func_801886A0(0xC) != 0) && (func_80187A64(arg0) != 0)) {
        func_80180B1C(arg0);
    }
}

void func_80180FF8(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_801919BC) != 0) {
        if (func_80180AC4() != 0) {
            func_80180BCC(arg0);
        } else {
            func_80180B1C(arg0);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80181078);
    }
}

s32 *func_80181078(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

void func_801810EC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_801810F8(u8 *arg0) {
    D_80191B30[AF(arg0, u16, 2)]();
}

void func_80181134(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(0xB, 0x10) != 0;
    }
    if (var_v0 == 0) {
        func_801810EC((s32) arg0);
    }
}

void func_8018119C(u8 *arg0) {
    s32 var_v0;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (D_80078EBA == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_8018766C(0xB, 0x10) != 0;
    }
    if (var_v0 != 0) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_80181200(u8 *arg0) {
    s32 v;

    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 9);
    if (D_80078EBA == 0) {
        v = 0;
    } else {
        v = func_8018766C(0xB, 0x10) != 0;
    }
    AF(arg0, s16, 2) = v ? 1 : 2;
}

s32 func_8018126C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80191B3C);
}

s32 func_80181298(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_80187778(arg0, (s32) &D_80191B3C);
}

void func_801812C4(u8 *arg0) {
    D_80191C08[AF(arg0, u16, 2)]();
}

extern s32 func_80187890();
extern s32 D_80191B58[];
extern s32 D_80191B6C[];

void func_80181300(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) < 0xC8) {
        AF(arg0, s32, 0xE4) = D_80191B58[func_801877C0()];
        return;
    }
    AF(arg0, s32, 0xE4) = D_80191B6C[func_80187890()];
}

s32 func_80181374(void) {
    return func_8014CB1C() != 0;
}

void func_80181394(void) {
    func_8014B2A8();
    func_8002D4C8(0x464, 0);
}

void func_801813C0(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80191BC0);
}

void func_801813F0(u8 *arg0) {
    s32 v;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_8018766C(0x12, 0x15) != 0) * 2;
    }
    if (v != 0) {
        func_8018126C((s32) arg0);
    }
}

void func_80181458(u8 *arg0) {
    s32 v;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    if (func_8018766C(6, 0x12) != 0) {
        v = 1;
    } else {
        v = (func_8018766C(0x12, 0x15) != 0) * 2;
    }
    if (v != 1) {
        func_80181298((s32) arg0);
    }
}

void func_801814C4(u8 *arg0) {
    s32 var_v1;

    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 0x12) != 0) {
        var_v1 = 1;
    } else if (func_8018766C(0x12, 0x15) != 0) {
        var_v1 = 2;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 2) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80191B3C);
    }
}

void func_8018153C(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, s16, 2) = 3;
        func_80187778((s32) arg0, (s32) &D_80191B3C);
    }
}

extern u8 D_80191B44;

void func_801815A0(u8 *arg0) {
    extern s32 *func_8018166C();
    s32 v;

    if (func_8018727C(arg0, (s32) &D_80191B44) != 0) {
        if (func_8018766C(6, 0x12) != 0) {
            v = 1;
        } else {
            v = (func_8018766C(0x12, 0x15) != 0) * 2;
        }
        switch (v) {
        case 0:
            AF(arg0, s16, 2) = 1;
            func_80187778(arg0, (s32) &D_80191B3C);
            break;
        case 1:
            AF(arg0, s16, 2) = 2;
            func_80187778(arg0, (s32) &D_80191B3C);
            break;
        case 2:
            AF(arg0, s16, 2) = 3;
            func_80187778(arg0, (s32) &D_80191B3C);
            break;
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) func_8018166C);
    }
}

s32 *func_8018166C(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) == 3) {
    } else {
        return NULL;
    }
    if (func_8018739C(arg0) == 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 4;
    func_80178BF8();
    return &func_80172710;
}

s32 func_801816D8(void) {
    s32 t;

    if (D_80078EBA == 6) {
        if (func_8018766C(0, 0xC) == 0) {
            return 0;
        }
    } else if (D_80078EBA == 0) {
        if (func_8018766C(0, 0xC) != 0) {
            return 0;
        }
    }
    t = func_80029504();
    if (t < 0xC8) {
        switch (func_801877C0()) {
        case 0:
        case 1:
        case 2:
            return func_8018766C(2, 0x12) == 0;
        case 3:
        case 4:
            return 0;
        }
    } else if (t < 0x258) {
        return 0;
    } else if (t < 0x384) {
        return func_8018766C(2, 0x12) == 0;
    } else {
        if (func_8018766C(2, 0x12) != 0) {
            return 0;
        }
        return func_80187904() != 1;
    }
}

void func_801817C4(u8 *arg0) {
    D_80191C20[AF(arg0, u16, 2)]();
}

void func_80181800(u8 *arg0) {
    if (func_801816D8() != 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
        D_801EF3D6 = 1;
        return;
    }
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    D_801EF3D6 = 0;
}

void func_80181864(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xE);
    if (func_801816D8() != 0) {
        AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 1;
        D_801EF3D6 = 1;
        return;
    }
    AF(AF(arg0, s32, 0xCC), s32, 0xB0) = 2;
    D_801EF3D6 = 0;
}

s32 func_801818E0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80191C28);
}

void func_8018190C(u8 *arg0) {
    D_80191C90[AF(arg0, u16, 2)]();
}

s32 func_80181948(void) {
    u8 *p = (u8 *)func_8012E544(0xA2);
    if (p != 0) return AF(p, u16, 2) == 3;
    return 0;
}

void func_80181988(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0x3C;
}

void func_801819A0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191C44[func_801877C0(arg0)];
}

void func_801819E0(s32 arg0) {
    if (func_80181948() != 0) {
        func_801818E0(arg0);
    }
}

void func_80181A18(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80181948() == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80191C28);
    }
}

void func_80181A68(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_80128C98(4) != 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_8001C97C((s32) &D_801F1370);
            AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_801F1370;
            func_80178CBC((s32) arg0, (s32) &D_80191C58);
            return;
        }
        return;
    case 1:
        if (func_80178970((s32) arg0) != 0) {
            func_80178D18((s32) arg0);
            AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_801E4340;
            AF(arg0, s16, 2) = 2;
            func_80187778((s32) arg0, (s32) &D_80191C28);
        }
        break;
    }
}

extern u8 D_80191C30;
extern s32 *func_80181BC0();

void func_80181B40(u8 *arg0) {
    if (func_8018727C(arg0, (s32) &D_80191C30) != 0) {
        if (func_80181948() != 0) {
            AF(arg0, s16, 2) = 2;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_80187778(arg0, (s32) &D_80191C28);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80181BC0);
    }
}

s32 *func_80181BC0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_8018739C() == 0) {
        return NULL;
    }
    if (func_80188D1C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 3;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_80181C38(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_80191CA4);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9348, 0, 0x60);
}

void func_80181CAC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191CAC);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3890);
    func_80187750(arg0);
}

s32 func_80181D04(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80191CAC);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9354, 1, 0x40);
}

s32 func_80181D8C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_80187778(arg0, (s32) &D_80191CA4);
}

extern u8 D_80191CB4;
extern s32 *func_80181FE0();
extern s32 *func_80182058();

void func_80181DB8(u8 *arg0) {
    if (func_8018727C(arg0, (s32) &D_80191CB4) != 0) {
        func_80187778(arg0, (s32) &D_80191CA4);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80181FE0);
        AF(arg0, s32, 0xD8) = func_801788B8(arg0, (s32) &func_80182058);
        if (func_801877C0() == 3) {
            if (func_8018766C(0xA, 0x16) != 0) {
                AF(arg0, s16, 2) = 5;
            } else {
                AF(arg0, s16, 2) = 1;
            }
        } else if (func_8018766C(0xA, 0x10) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_80191CAC);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801C3890);
            func_80187750(arg0);
            return;
        } else if (func_8018766C(0x10, 0x16) != 0) {
            AF(arg0, s16, 2) = 5;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_80187778(arg0, (s32) &D_80191CA4);
    }
}

void func_80181ED4(u8 *arg0) {
    D_80191D3C[AF(arg0, u16, 2)]();
}

extern s32 func_80182F3C();

void func_80181F10(u8 *arg0) {
    AF(arg0, s16, 2) = 9;
    func_8012E8E0((s32) arg0, (s32) &D_80191CAC);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3890);
    func_80178CBC((s32) arg0, func_80182F3C((s32) arg0));
}

void func_80181F74(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_80191CDC);
}

void func_80181FA0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191CC8[func_801877C0(arg0)];
}

s32 *func_80181FE0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_8018739C() == 0) {
        return NULL;
    }
    if (func_80188D1C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_80182058(u8 *o) {
    u8 *p;
    u16 s;

    if (func_8012BD14(AF(o, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    p = AF(o, u8 *, 0x64);
    s = AF(p, u16, 2);
    switch (s) {
    case 3:
        AF(p, u16, 2) = 8;
        break;
    case 2:
        if (AF(p, u16, 0x34) == 1) {
            D_801EEAF0 = s;
            D_801EEAF2 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_801EEAF0 = s;
            D_801EEAF2 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *)&func_80172710;
}

void func_80182148(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(0xA, 0x16) != 0) {
            func_80181D8C((s32) arg0);
        }
    } else if (func_8018766C(0xA, 0x10) != 0) {
        func_80181C38((s32) arg0);
    }
}

void func_801821C0(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(6, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B9354, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64((s32) arg0) != 0) {
            func_80181CAC((s32) arg0);
        }
    }
}

void func_80182254(s32 arg0) {
    if (func_8018766C(0xA, 0x10) == 0) {
        func_80181D04(arg0);
    }
}

void func_80182294(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191CAC);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C3890);
        func_80187750(arg0);
    }
}

void func_80182304(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9348, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else if ((func_801886A0(6, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_80181D8C((s32) arg0);
    }
}

void func_80182398(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(func_801877C0() == 3 ? 0xA : 0x10, 0x16) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_80191CA4);
    }
}

void func_80182400(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_80187778(arg0, (s32) &D_80191CA4);
    }
}

void func_80182450(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_80191D14);
}

void func_8018247C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_801EEAF0;
        AF(arg0, u16, 0x34) = (u16) D_801EEAF2;
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

s32 func_801824DC(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    func_80187994(arg0, (s32) &D_801B9360, 0, 0x80);
    return func_80182898();
}

s32 func_80182548(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191D74);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801CAA80);
    func_80187750(arg0);
    return func_80182898();
}

s32 func_801825A8(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B936C, 1, 0x80);
}

s32 func_8018260C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_80187778(arg0, (s32) &D_80191D6C);
}

extern s32 func_801828B0();

void func_80182638(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    func_801828B0();
    AF(arg0, s16, 0x34) = 0;
}

s32 func_8018268C(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    func_80187778(arg0, (s32) &D_80191D6C);
}

void func_801826B8(s32 arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
}

void func_80182704(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_801886A0(0xD) != 0) {
            AF(o, u16, 0x34) = 1;
            func_80187994(o, &D_801B93F4, 1, 0x80);
        }
        break;
    case 1:
        func_801886A0(0xD);
        if (func_80187A64(o) != 0) {
            AF(o, u16, 0x34) = 2;
            func_80187994(o, &D_801B93A4, 1, 0x80);
        }
        break;
    case 2:
        if (func_80187A64(o) != 0) {
            AF(o, u16, 0x34) = 3;
            AF(o, s32, 0x1C) = 0x20;
        }
        break;
    case 3:
        if (func_801886A0(3) != 0) {
            AF(o, u16, 0x34) = 4;
            func_80187994(o, &D_801B9360, 1, 0x80);
        }
        break;
    case 4:
        func_801886A0(3);
        if (func_80187A64(o) != 0) {
            AF(o, s16, 2) = 1;
            func_80187778(o, &D_80191D6C);
        }
        break;
    }
}

void func_80182824(u8 *arg0) {
    D_80191E0C[AF(arg0, u16, 2)]();
}

s32 func_80182860(void) {
    func_8001C97C((s32) &D_801DD064);
    D_801EEAF8 = D_801D6014;
    return D_801D6014;
}

s32 func_80182898(arg0)
    s32 arg0;
{
    D_801D6014 = (*(s32 *)&D_801DD064);
    return (*(s32 *)&D_801DD064);
}

s32 func_801828B0(s32 arg0) {
    D_801D6014 = D_801EEAF8;
    return D_801EEAF8;
}

void func_801828C8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_80191D74, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3790);
    func_80178CBC((s32) arg0, (s32) &D_80191DA4);
}

void func_80182928(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191D90[func_801877C0(arg0)];
}

void func_80182968(s32 arg0) {
    if (func_8018766C(9, 0x12) != 0) {
        func_801824DC(arg0);
    }
}

void func_801829A8(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B936C, 0, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if (func_80187A64((s32) arg0) != 0) {
        func_80182548((s32) arg0);
    }
}

void func_80182A34(s32 arg0) {
    if (func_8018766C(9, 0xF) == 0) {
        func_801825A8(arg0);
    }
}

void func_80182A74(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191D74);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801CAA80);
        func_80187750(arg0);
        func_80182898();
    }
}

void func_80182AEC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9360, 1, 0x80);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_8018260C((s32) arg0);
    }
}

void func_80182B78(s32 arg0) {
    if (func_8018766C(0xF, 0x11) == 0) {
        func_80182638(arg0);
    }
}

void func_80182BB8(s32 arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (func_801886A0(3) != 0) {
            AF(arg0, u16, 0x34) = 1;
            func_80187994(arg0, &D_801B9360, 0, 0x80);
        }
        break;
    case 1:
        func_801886A0(3);
        if (func_80187A64(arg0) != 0) {
            AF(arg0, u16, 0x34) = 2;
            func_80187994(arg0, &D_801B93A4, 0, 0x80);
        }
        break;
    case 2:
        if (func_80187A64(arg0) != 0) {
            AF(arg0, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(0xD) != 0) {
            AF(arg0, u16, 0x34) = 4;
            func_80187994(arg0, &D_801B93F4, 0, 0x80);
        }
        break;
    case 4:
        func_801886A0(0xD);
        if (func_80187A64(arg0) != 0) {
            func_8018268C(arg0);
        }
        break;
    }
}

void func_80182CC4(s32 arg0) {
    if (func_8018766C(0x11, 0x12) == 0) {
        func_801826B8(arg0);
    }
}

extern s32 * func_80182DFC();
extern u8 D_80191D7C;

void func_80182D04(u8 *o) {
    if (func_8018727C(o, &D_80191D7C) != 0) {
        func_80182860();
        if (func_8018766C(9, 0xF) != 0) {
            AF(o, s16, 2) = 3;
            func_8012E8E0(o, &D_80191D74);
            func_8012E88C(o);
            SetScript(o, &D_801CAA80);
            func_80187750(o);
            func_80182898();
        } else if (func_8018766C(0xF, 0x11) != 0) {
            AF(o, s16, 2) = 7;
            func_80187778(o, &D_80191D6C);
        } else if (func_8018766C(0x11, 0x12) != 0) {
            AF(o, s16, 2) = 9;
            func_80187778(o, &D_80191D6C);
        } else {
            AF(o, s16, 2) = 1;
            func_80187778(o, &D_80191D6C);
        }
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = func_801788B8(o, func_80182DFC);
    }
}

s32 *func_80182DFC(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_80182E70(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_80191E38);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9400, 0, 0x40);
}

void func_80182EE4(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80191E40);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3890);
    func_80187750(arg0);
}

extern u8 D_80191F00;
extern u8 D_80191F40;
extern u8 D_80191F80;
extern u8 D_80191FC0;
extern u8 D_80192000;
extern u8 D_80192070;
extern u8 D_801920C8;
extern u8 D_80192120;
extern u8 D_80192190;
extern u8 D_801921E8;
extern u8 D_80192278;
extern u8 D_801922A0;

static inline s32 chk(s32 id) {
    u8 *p = (u8 *)func_8012E544(id);
    if (p == 0) return 0;
    return AF(p, u16, 2) == 3;
}

s32 func_80182F3C(u8 *a) {
    s32 ok;
    u8 *r;
    s32 n;

    if (AF(a, u16, 0) == 0xA2) {
        ok = chk(0xA4);
    } else {
        ok = chk(0xA2);
    }
    if (!ok) {
        if (AF(a, u16, 0) == 0xA2) {
            return (s32)&D_80192278;
        }
        return (s32)&D_801922A0;
    }
    r = &D_80191F00;
    switch (func_801877C0()) {
    case 0:
        n = (u8)func_800291B4(0xD6);
        if (n != 0) {
            r = &D_80191F80;
            if (n & 1) {
                r = &D_80191F40;
            }
        }
        n++;
        if ((u8)n == 0) {
            n = 2;
        }
        func_800291A0(0xD6, (u8)n);
        break;
    case 1:
        n = (u8)func_800291B4(0xD7);
        switch (n % 3) {
        case 0:
            r = &D_80191FC0;
            break;
        case 1:
            r = &D_80192000;
            break;
        default:
            r = &D_80192070;
            break;
        }
        n++;
        func_800291A0(0xD7, (u8)n);
        break;
    case 2:
        n = (u8)func_800291B4(0xD9);
        r = &D_80192190;
        if (n & 1) {
            r = &D_801921E8;
        }
        n++;
        func_800291A0(0xD9, (u8)n);
        break;
    case 3:
        break;
    default:
        n = (u8)func_800291B4(0xD8);
        r = &D_801920C8;
        if (n & 1) {
            r = &D_80192120;
        }
        n++;
        func_800291A0(0xD8, (u8)n);
        break;
    }
    return (s32)r;
}

s32 func_80183168(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80191E40);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x800);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B940C, 1, 0x40);
}

s32 func_801831F0(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_80187778(arg0, (s32) &D_80191E38);
}

extern u8 D_80191E48;
extern s32 *func_80183448();
extern s32 *func_801834C0();

void func_8018321C(u8 *arg0) {
    s32 t;

    if (func_8018727C(arg0, (s32) &D_80191E48) != 0) {
        if (func_801877C0() == 3) {
            if (func_8018766C(0xA, 0x15) != 0) {
                AF(arg0, s16, 2) = 5;
            } else {
                AF(arg0, s16, 2) = 1;
            }
            func_80187778(arg0, (s32) &D_80191E38);
        } else if (func_8018766C(0xA, 0x10) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_80191E40);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801C3890);
            func_80187750(arg0);
        } else {
            if (func_8018766C(0x10, 0x15) != 0) {
                AF(arg0, s16, 2) = 5;
            } else {
                AF(arg0, s16, 2) = 1;
            }
            func_80187778(arg0, (s32) &D_80191E38);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        t = func_801788B8(arg0, (s32) &func_80183448);
        AF(arg0, s32, 0xD4) = t;
        func_8012E8E0(t, (s32) &D_80191E38);
        AF(arg0, s32, 0xD8) = func_801788B8(arg0, (s32) &func_801834C0);
    }
}

void func_8018333C(u8 *arg0) {
    D_801922F0[AF(arg0, u16, 2)]();
}

void func_80183378(u8 *arg0) {
    AF(arg0, s16, 2) = 9;
    func_8012E8E0((s32) arg0, (s32) &D_80191E40);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3890);
    func_80178CBC((s32) arg0, func_80182F3C((s32) arg0));
}

void func_801833DC(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    func_80178CBC((s32) arg0, (s32) &D_80191E70);
}

void func_80183408(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80191E5C[func_801877C0(arg0)];
}

s32 *func_80183448(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 5) {
        return NULL;
    }
    if (func_8018739C() == 0) {
        return NULL;
    }
    if (func_80188D1C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 6;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_801834C0(u8 *o) {
    u8 *p;
    u16 s;

    if (func_8012BD14(AF(o, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    p = AF(o, u8 *, 0x64);
    s = AF(p, u16, 2);
    switch (s) {
    case 3:
        AF(p, u16, 2) = 8;
        break;
    case 2:
        if (AF(p, u16, 0x34) == 1) {
            D_801EEB00 = s;
            D_801EEB02 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    case 4:
        if (AF(p, u16, 0x34) == 0) {
            D_801EEB00 = s;
            D_801EEB02 = AF(p, u16, 0x34);
            AF(AF(o, u8 *, 0x64), u16, 2) = 0xA;
            break;
        }
        return NULL;
    default:
        return NULL;
    }
    func_80178BF8();
    return (s32 *)&func_80172710;
}

void func_801835B0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(0xA, 0x15) != 0) {
            func_801831F0((s32) arg0);
        }
    } else if (func_8018766C(0xA, 0x10) != 0) {
        func_80182E70((s32) arg0);
    }
}

void func_80183628(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            func_80187994((s32) arg0, (s32) &D_801B940C, 0, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64((s32) arg0) != 0) {
            func_80182EE4((s32) arg0);
        }
    }
}

void func_801836BC(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xA, 0x10) == 0) {
        func_80183168((s32) arg0);
    }
}

void func_80183708(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80191E40);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C3890);
        func_80187750(arg0);
    }
}

void func_80183778(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            func_80187994((s32) arg0, (s32) &D_801B9400, 1, 0x40);
            AF(arg0, u16, 0x34) = 1U;
        }
    } else if ((func_801886A0(3, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        func_801831F0((s32) arg0);
    }
}

void func_80183804(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(func_801877C0() == 3 ? 0xA : 0x10, 0x15) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_80191E38);
    }
}

void func_8018386C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 5;
        func_80187778(arg0, (s32) &D_80191E38);
    }
}

void func_801838BC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    func_80178CBC((s32) arg0, (s32) &D_801922C8);
}

void func_801838E8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) D_801EEB00;
        AF(arg0, u16, 0x34) = (u16) D_801EEB02;
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

s32 func_80183948(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_80192320);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9434, 0, 0x60);
}

void func_801839BC(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_80192328);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801CAA80);
    func_80187750(arg0);
}

s32 func_80183A14(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E8E0(arg0, (s32) &D_80192328);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9440, 1, 0x60);
}

void func_80183A88(u8 *arg0) {
    D_80192418[AF(arg0, u16, 2)]();
}

s32 func_80183AC4(void) {
    func_8001C97C((s32) &D_801DD950);
    D_801EEB08 = D_801DAAAC;
    return D_801DAAAC;
}

void func_80183AFC(void) {
    D_801DAAAC = *(s32 *)&D_801DD950;
}

void func_80183B14(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0((s32) arg0, (s32) &D_80192328, arg2);
    func_8012E88C((s32) arg0);
    SetScript((s32) arg0, (s32) &D_801C3790);
    func_80178CBC((s32) arg0, (s32) &D_80192398);
}

void func_80183B74(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192344[func_801877C0(arg0)];
}

s32 func_80183BB4(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x113, arg1) & 0xFF)) {
        func_80029124(0x113, 1);
        return 1;
    }
    return 0;
}

void func_80183BF0(s32 arg0) {
    if (func_8018766C(7, 0xE) != 0) {
        func_80183948(arg0);
    }
}

void func_80183C30(u8 *arg0) {
    if (AF(arg0, u16, 0x34) == 0) {
        if ((func_801886A0(2) != 0) && (func_80187A64((s32) arg0) != 0)) {
            AF(arg0, u16, 0x34) = 1U;
            func_80187994((s32) arg0, (s32) &D_801B9440, 0, 0x60);
            AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        }
    } else if (func_80187A64((s32) arg0) != 0) {
        func_801839BC((s32) arg0);
    }
}

void func_80183CC8(s32 arg0) {
    if (func_8018766C(7, 0xE) == 0) {
        func_80183A14(arg0);
    }
}

void func_80183D08(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        func_8012E8E0(arg0, (s32) &D_80192328);
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801CAA80);
        func_80187750(arg0);
    }
}

void func_80183D78(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (func_80187A64((s32) arg0) != 0) {
            AF(arg0, u16, 0x34) = 1U;
            func_80187994((s32) arg0, (s32) &D_801B9434, 1, 0x60);
        }
    } else if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192320);
    }
}

void func_80183E14(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_80192330) != 0) {
        func_80183AC4();
        func_80183AFC();
        if (func_8018766C(7, 0xE) != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E8E0(arg0, (s32) &D_80192328);
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801CAA80);
            func_80187750(arg0);
        } else {
            AF(arg0, s16, 2) = 1;
            func_80187778(arg0, (s32) &D_80192320);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80183EE4);
    }
}

s32 *func_80183EE4(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_80183F58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192434);
}

s32 func_80183F84(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    func_8012E8E0(arg0, (s32) &D_80192434);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9464, 0, 0x40);
}

s32 func_80183FF4(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9470, 0, 0x40);
}

s32 func_80184054(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C37E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
    return func_80187994(arg0, (s32) &D_801B9464, 1, 0x40);
}

s32 func_801840B8(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    func_80187778(arg0, (s32) &D_80192434);
}

extern u8 D_80192444;
extern s32 *func_80184350();
extern s32 *func_801843DC();

void func_801840E4(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_80192444) != 0) {
        if (func_801877C0() == 3) {
            if (func_8018766C(7, 0x14) != 0) {
                AF(arg0, s16, 2) = 2;
                func_80187778(arg0, (s32) &D_80192434);
            } else {
                AF(arg0, s16, 2) = 1;
                func_80187778(arg0, (s32) &D_80192434);
            }
        } else if (func_8018766C(7, 0xA) != 0) {
            AF(arg0, s16, 2) = 2;
            func_80187778(arg0, (s32) &D_80192434);
        } else if (func_8018766C(0xA, 0xC) != 0) {
            AF(arg0, s16, 2) = 6;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801C37E8);
            func_80187750(arg0);
            func_80187994(arg0, (s32) &D_801B9470, 0, 0x40);
        } else if (func_8018766C(0xC, 0x14) != 0) {
            AF(arg0, s16, 2) = 8;
            func_80187778(arg0, (s32) &D_80192434);
        } else {
            AF(arg0, s16, 2) = 1;
            func_80187778(arg0, (s32) &D_80192434);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80184350);
        AF(arg0, s32, 0xD8) = func_801788B8(arg0, (s32) &func_801843DC);
    }
}

void func_80184210(u8 *arg0) {
    D_80192510[AF(arg0, u16, 2)]();
}

void func_8018424C(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_8019246C);
}

void func_80184278(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    func_80178CBC((s32) arg0, (s32) &D_8019246C);
}

void func_801842A4(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    func_80178CBC((s32) arg0, (s32) &D_801924B8);
}

void func_801842D0(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192458[func_801877C0(arg0)];
}

void func_80184310(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_801924A4[func_801877C0(arg0)];
}

s32 *func_80184350(u8 *arg0);

s32 *func_80184350(u8 *arg0) {
    u16 v;

    v = AF(AF(arg0, void *, 0x64), u16, 2);
    if (v != 2 && v != 8) {
        return NULL;
    }
    if (func_8018739C(arg0) == 0) {
        return NULL;
    }
    if (func_80188D1C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 *func_801843DC(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 2) == 6) {
        if (func_8012BD14((s32) temp_a0) < 0x2401) {
            AF(AF(arg0, void *, 0x64), u16, 2) = 0xBU;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_8018444C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(7, 0x14) != 0) {
        func_80183F58((s32) arg0);
    }
}

void func_80184498(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_801877C0((s32) arg0) == 3) {
        if (func_8018766C(7, 0x14) == 0) {
            AF(arg0, s16, 2) = 1;
            func_80187778((s32) arg0, (s32) &D_80192434);
        }
    } else if (func_8018766C(7, 0xA) == 0) {
        func_80183F84((s32) arg0);
    }
}

void func_8018451C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_80192434);
    }
}

void func_8018456C(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64(arg0) != 0)) {
        func_80183FF4(arg0);
    }
}

void func_801845B8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_80187A64((s32) arg0) != 0) {
        func_80184054((s32) arg0);
    }
}

void func_801845FC(s32 arg0, s32 arg1, s32 arg2) {
    if ((func_801886A0(2, arg1, arg2) != 0) && (func_80187A64(arg0) != 0)) {
        func_801840B8(arg0);
    }
}

void func_80184648(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xC, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192434);
    }
}

void func_801846A0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 8;
        func_80187778(arg0, (s32) &D_80192434);
    }
}

void func_801846F0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_8012E88C(arg0);
        SetScript(arg0, (s32) &D_801C37E8);
    }
}

void func_80184748(u8 *arg0) {
    D_80192544[AF(arg0, u16, 2)]();
}

void func_80184784(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_80184794(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0xCC) = func_8012E57C(0x61, 0xA);
}

s32 func_801847D0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_8019254C);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B94FC, 0, 0x60);
}

s32 func_80184840(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B9510, 0, 0x40);
}

s32 func_801848A0(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C3990);
    func_80187750(arg0);
    return func_80187994(arg0, (s32) &D_801B94FC, 1, 0x60);
}

void func_80184900(u8 *arg0) {
    D_80192624[AF(arg0, u16, 2)]();
}

void func_8018493C(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    func_80178CBC((s32) arg0, (s32) &D_801925AC);
}

void func_80184968(s32 arg0) {
    AF(arg0, s32 *, 0xE4) = (s32 *) D_80192570[func_801877C0(arg0)];
    if ((func_800291B4(0xDA) & 0xFF) && (func_801877C0() == 1)) {
        AF(arg0, s32 *, 0xE4) = &D_80193E78;
    }
    func_800291A0(0xDA, 1);
}

s32 func_801849E0(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x115, arg1) & 0xFF)) {
        func_80029124(0x115, 1);
        return 1;
    }
    return 0;
}

void func_80184A1C(s32 arg0) {
    s32 v;

    switch (func_801877C0()) {
    case 0:
        v = func_8018766C(7, 0x13) != 0;
        break;
    case 3:
        v = 0;
        break;
    default:
        v = func_8018766C(9, 0x11) != 0;
        break;
    }
    if (v != 0) {
        func_801847D0(arg0);
    }
}

void func_80184A8C(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        func_80184840(arg0);
    }
}

void func_80184AC4(s32 arg0) {
    s32 v;

    if (func_80187A64(arg0) != 0) {
        switch (func_801877C0()) {
        case 0:
            v = func_8018766C(7, 0x13) != 0;
            break;
        case 3:
            v = 0;
            break;
        default:
            v = func_8018766C(9, 0x11) != 0;
            break;
        }
        if (v == 0) {
            func_801848A0(arg0);
        } else {
            func_80187994(arg0, (s32) &D_801B9510, 0, 0x40);
        }
    }
}

void func_80184B60(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 3;
        SetScript(arg0, (s32) &D_801C3990);
    }
}

void func_80184BB0(s32 arg0) {
    if (func_80187A64(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778(arg0, (s32) &D_8019254C);
    }
}

extern u8 D_8019255C;
extern s32 *func_80184CF0();

void func_80184BF4(s32 arg0) {
    s32 v;

    if (func_8018727C(arg0, (s32) &D_8019255C) != 0) {
        switch (func_801877C0()) {
        case 0:
            v = func_8018766C(7, 0x13) != 0;
            break;
        case 3:
            v = 0;
            break;
        default:
            v = func_8018766C(9, 0x11) != 0;
            break;
        }
        if (v != 0) {
            AF(arg0, s16, 2) = 3;
            func_8012E88C(arg0);
            SetScript(arg0, (s32) &D_801C3990);
            func_80187750(arg0);
            func_80187994(arg0, (s32) &D_801B9510, 0, 0x40);
        } else {
            AF(arg0, s16, 2) = 1;
            func_80187778(arg0, (s32) &D_8019254C);
        }
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80184CF0);
    }
}

s32 *func_80184CF0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 3) {
        return NULL;
    }
    if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_80184D64(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    func_80187778(arg0, (s32) &D_80192640);
}

void func_80184D90(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
    AF(arg0, s16, 0x34) = 0;
}

extern u8 D_801B9544;
extern u8 D_801B9550;

void func_80184DDC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_801886A0(4) != 0) {
            func_80187994(o, &D_801B9544, 0, 0x40);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        func_801886A0(4);
        if (func_80187A64(o) != 0) {
            func_80187994(o, &D_801B9550, 0, 0x40);
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64(o) != 0) {
            AF(o, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(4) != 0) {
            AF(o, u16, 0x34) = 4;
            func_80187994(o, &D_801B9544, 1, 0x40);
        }
        break;
    case 4:
        func_801886A0(4);
        if (func_80187A64(o) != 0) {
            AF(o, s16, 2) = 5;
            func_80187778(o, &D_80192640);
        }
        break;
    }
}

void func_80184F18(s32 arg0) {
    AF(arg0, s16, 2) = 9;
    AF(arg0, s16, 0x34) = 0;
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
}

void func_80184F64(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_801886A0(4) != 0) {
            func_80187994(o, &D_801B9544, 0, 0x40);
            AF(o, u16, 0x34) = 1;
        }
        break;
    case 1:
        func_801886A0(4);
        if (func_80187A64(o) != 0) {
            func_80187994(o, &D_801B9550, 1, 0x40);
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        if (func_80187A64(o) != 0) {
            AF(o, u16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(4) != 0) {
            AF(o, u16, 0x34) = 4;
            func_80187994(o, &D_801B9544, 1, 0x40);
        }
        break;
    case 4:
        func_801886A0(4);
        if (func_80187A64(o) != 0) {
            AF(o, s16, 2) = 0xC;
            func_80187778(o, &D_80192640);
        }
        break;
    }
}

void func_801850A0(u8 *arg0) {
    D_80192828[AF(arg0, u16, 2)]();
}

void func_801850DC(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192664[func_801877C0(arg0)];
}

void func_8018511C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192678[func_801877C0(arg0)];
}

void func_8018515C(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_8019268C[func_801877C0(arg0)];
}

s32 func_8018519C(s32 arg0, s32 arg1) {
    if (!(func_80029178(0x116, arg1) & 0xFF)) {
        func_80029124(0x116, 1);
        return 1;
    }
    return 0;
}

void func_801851D8(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_801926F8);
}

void func_80185208(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80192740);
}

void func_80185238(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_80192748);
}

void func_80185268(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 0;
    func_80178CBC((s32) arg0, (s32) &D_801927B8);
}

void func_80185298(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(7, 0x10) == 0) {
        func_80184F18((s32) arg0);
    }
}

void func_801852E4(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 6;
        func_80187778(arg0, (s32) &D_80192640);
    }
}

void func_80185334(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0x10, 0x14) == 0) {
        func_80184D64((s32) arg0);
    }
}

void func_80185380(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0xC;
        func_80187778(arg0, (s32) &D_80192640);
    }
}

void func_801853D0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 0x14) != 0) {
        func_80184D90((s32) arg0);
    }
}

void func_8018541C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(6, 7) == 0) {
        AF(arg0, s16, 2) = 6;
        func_80187778((s32) arg0, (s32) &D_80192640);
    }
}

void func_80185474(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_801C36E8);
        AF(arg0, s16, 0x34) = 2;
    }
}

void func_801854D0(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 9;
        SetScript(arg0, (s32) &D_801C36E8);
        AF(arg0, s16, 0x34) = 2;
    }
}

extern u8 D_80192650;
extern s32 * func_801855CC();

void func_80185528(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_80192650) != 0) {
        if (func_8018766C(6, 7) != 0) {
            AF(arg0, s16, 2) = 5;
        } else if (func_8018766C(7, 0x10) != 0) {
            AF(arg0, s16, 2) = 6;
        } else if (func_8018766C(0x10, 0x14) != 0) {
            AF(arg0, s16, 2) = 0xC;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_80187778(arg0, (s32) &D_80192640);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        func_801788B8(arg0, (s32) &func_801855CC);
    }
}

s32 *func_801855CC(u8 *arg0) {
    switch (AF(AF(arg0, void *, 0x64), u16, 2)) {
    case 6:
    case 12:
        if (func_8018739C(arg0) == 0) {
            func_80188D1C(AF(arg0, s32, 0x64));
            return NULL;
        }
        break;
    case 2:
    case 9:
        if (AF(AF(arg0, void *, 0x64), u16, 0x34) != 2) {
            return NULL;
        }
        if (func_8012BD14(AF(arg0, void *, 0x64)) >= 0x4001) {
            return NULL;
        }
        break;
    default:
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_801856A8(u8 *a) {
    switch (AF(AF(a, u8 *, 0x64), u16, 2)) {
    case 2:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 3;
        goto found;
    case 7:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 8;
        goto found;
    case 12:
        AF(AF(a, u8 *, 0x64), s16, 2) = 0xD;
        goto found;
    case 18:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x13;
        goto found;
    case 23:
        if (func_8018739C(a) == 0) {
            break;
        }
        if (func_8018766C(8, 0x14) == 0) {
            return 0;
        }
        if (func_80188D1C(AF(a, s32, 0x64)) != 0) {
            return 0;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x18;
        goto found;
    case 27:
        if (AF(AF(a, u8 *, 0x64), u16, 0x34) != 2) {
            return 0;
        }
        if (func_8012BD14(AF(a, u8 *, 0x64)) > 0x4000) {
            break;
        }
        AF(AF(a, u8 *, 0x64), s16, 2) = 0x1C;
        goto found;
    }
    return 0;
found:
    func_80178BF8();
    return (s32)&func_80172710;
}

s32 func_80185874(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858A0(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858CC(s32 arg0) {
    AF(arg0, s16, 2) = 0x12;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_801858F8(s32 arg0) {
    AF(arg0, s16, 2) = 0x17;
    func_80187778(arg0, (s32) &D_80192864);
}

s32 func_80185924(s32 arg0) {
    AF(arg0, s16, 2) = 0x1F;
    func_80187778(arg0, (s32) &D_80192864);
}

void func_80185950(s32 arg0) {
    AF(arg0, s16, 2) = 0x1B;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_80192864);
    func_8012E88C(arg0);
    SetScript(arg0, (s32) &D_801C36E8);
    func_80187750(arg0);
}

void func_801859AC(u8 *a) {
    switch (AF(a, u16, 0x34)) {
    case 0:
        if (func_801886A0(5) != 0) {
            func_80187994(a, &D_801B9608, 0, 0x70);
            AF(a, s16, 0x34) = 1;
        }
        break;
    case 1:
        func_801886A0(5);
        if (func_80187A64(a) != 0) {
            func_80187994(a, &D_801B9614, 1, 0x70);
            AF(a, s16, 0x34) = 2;
            AF(AF(a, u8 *, 0xCC), s16, 0x108) = 0;
            AF(AF(a, u8 *, 0xCC), s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_80187A64(a) != 0) {
            AF(a, s16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_801886A0(5) != 0) {
            AF(a, s16, 0x34) = 4;
            func_80187994(a, &D_801B9608, 1, 0x70);
        }
        break;
    case 4:
        func_801886A0(5);
        if (func_80187A64(a) != 0) {
            switch (AF(a, u8, 0x105)) {
            case 7:
                func_801858A0((s32)a);
                break;
            case 18:
                func_801858CC((s32)a);
                break;
            case 23:
                func_801858F8((s32)a);
                break;
            case 31:
                func_80185924((s32)a);
                break;
            case 2:
            default:
                func_80185874((s32)a);
                break;
            }
        }
        break;
    }
}

extern u8 D_80192874;

void func_80185B54(u8 *o) {
    s32 r;
    s32 t;

    if (func_8018727C((s32) o, (s32) &D_80192874) == 0) {
        return;
    }
    r = func_80029504();
    if (r < 0x14) {
        AF(o, s16, 2) = 2;
        func_80187778((s32) o, (s32) &D_80192864);
    } else if (r < 0x1E) {
        AF(o, s16, 2) = 7;
        func_80187778((s32) o, (s32) &D_80192864);
    } else if (r < 0x64) {
        AF(o, s16, 2) = 0x1F;
        func_80187778((s32) o, (s32) &D_80192864);
    } else if (r < 0x6E) {
        AF(o, s16, 2) = 0xC;
        AF(o, s16, 0x34) = 0;
        func_8012E8E0((s32) o, (s32) &D_8019286C);
        func_8012E88C((s32) o);
        func_80187344((s32) o);
        func_8014CB68();
        func_8012C588(0x157, (s32) o);
    } else if (r < 0x82) {
        AF(o, s16, 2) = 0x12;
        func_80187778((s32) o, (s32) &D_80192864);
    } else {
        AF(o, s16, 2) = 0x17;
        func_80187778((s32) o, (s32) &D_80192864);
    }
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    t = func_801788B8((s32) o, (s32) func_801856A8);
    AF(o, s32, 0xD4) = t;
    func_8012E8E0(t, (s32) &D_80192864);
}

void func_80185C60(u8 *arg0) {
    D_801928D8[AF(arg0, u16, 2)]();
}

s32 func_80185C9C(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 1;
    temp_v0 = SetScript(arg0, (s32) &D_801C37E8);
    AF(arg0, s16, 0x34) = 0;
    return temp_v0;
}

void func_80185CD8(u8 *arg0) {
    D_80192968[AF(arg0, u16, 2)]();
}

void func_80185D14(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF734(arg0);
    }
}

void func_80185D50(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF904(arg0);
    }
}

void func_80185D8C(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF46C(arg0);
    }
}

void func_80185DC8(s32 arg0) {
    if (func_8016F1AC(arg0) == 0) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950(arg0);
    }
}

void func_80185E44(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80029178(0xDF, arg1) & 0xFF) && ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0))) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80185EC8(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80185F3C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0((s32) arg0, (s32) &D_8019286C, arg2);
    func_8012E88C((s32) arg0);
    func_80187344((s32) arg0);
    func_8014CB68();
    func_8012C588(0x157, (s32) arg0);
}

void func_80185F9C(void) {
}

void func_80185FA4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

void func_80185FB4(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF58C(arg0);
    }
}

void func_80185FF0(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if ((func_80187690(0xA, 0, 0xA, 0x1E) != 0) || (func_80187690(0xF, 0, 0xF, 0x1E) != 0)) {
        AF(arg0, u8, 0x105) = (s8) AF(arg0, u16, 2);
        func_80185950((s32) arg0);
    }
}

void func_80186064(s32 arg0) {
    if (func_80128C98(1) != 0) {
        func_801EF624(arg0);
    }
}

void func_801860A0(u8 *arg0) {
    AF(arg0, s16, 2) = 0x1D;
    func_80178CBC((s32) arg0, (s32) &D_80192888);
}

void func_801860CC(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 0x1B;
        AF(arg0, s16, 0x34) = 2;
        SetScript(arg0, (s32) &D_801C36E8);
    }
}

void func_80186124(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801E6640);
    func_80185C9C(arg0);
}

void func_8018617C(u8 *o) {
    u8 *p;

    if (AF(o, u8 *, 0xCC) == 0) {
        AF(o, s32, 0xCC) = func_8012E544(0xAA);
        return;
    }
    p = AF(o, u8 *, 0xCC);
    switch (AF(o, s16, 0xFC)) {
    case 0:
        break;
    case 1:
        SetScript(o, (s32) &D_801C37E8);
        break;
    case 2:
        SetScript(o, (s32) &D_801C3890);
        break;
    case 3:
        func_8012C218(o);
        return;
    }
    AF(o, s16, 0xFC) = 0;
    if (AF(o, u16, 0x34) == 0) {
        AF(o, s16, 6) = AF(p, s16, 6) - 0x40;
        AF(o, s16, 0xA) = AF(p, s16, 0xA);
        AF(o, s16, 0xE) = AF(p, s16, 0xE) + 0x40;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(p, u8 *, 0x20), s16, 0x12);
    }
}

s32 func_80186288(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_80192970);
}

void func_801862B4(u8 *arg0) {
    D_801929D4[AF(arg0, u16, 2)]();
}

void func_801862F0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_8019299C);
}

extern u8 D_80195268;
extern u8 D_80195114;
extern u8 D_8019515C;
extern u8 D_801951A8;
extern u8 D_801953B4;
extern u8 D_80195214;

void func_8018631C(u8 *o) {
    switch (func_801877C0()) {
    case 0:
        AF(o, void *, 0xE4) = &D_80195268;
        break;
    case 1:
        if ((func_800291B4(0xDB) & 0xFF) == 0) {
            AF(o, void *, 0xE4) = &D_80195114;
            func_800291A0(0xDB, 1);
        } else {
            AF(o, void *, 0xE4) = &D_8019515C;
        }
        break;
    case 2:
        AF(o, void *, 0xE4) = &D_801951A8;
        break;
    case 3:
        AF(o, void *, 0xE4) = &D_801953B4;
        break;
    case 4:
        if ((u32)func_80029504() < 0x87) {
            AF(o, void *, 0xE4) = &D_801953B4;
        } else {
            AF(o, void *, 0xE4) = &D_80195214;
        }
        break;
    }
}

void func_8018640C(s32 arg0) {
    if (func_8018766C(8, 0x14) != 0) {
        func_80186288(arg0);
    }
}

void func_8018644C(u8 *arg0) {
    if (func_8018766C(8, 0x14) == 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_80192970);
    }
}

void func_80186498(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_80192970);
    }
}

extern u8 D_80192978;
extern s32 * func_80186568();

void func_801864E8(s32 arg0) {
    if (func_8018727C(arg0, (s32) &D_80192978) != 0) {
        if (func_8018766C(8, 0x14) != 0) {
            AF(arg0, s16, 2) = 2;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        func_80187778(arg0, (s32) &D_80192970);
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, (s32) &func_80186568);
    }
}

s32 *func_80186568(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 2) {
        return NULL;
    }
    if (func_8018739C() == 0) {
        return NULL;
    }
    if (func_80188D1C((s32) AF(arg0, void *, 0x64)) != 0) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2) = 3;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

s32 func_801865E0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_80187778(arg0, (s32) &D_801929E8);
}

void func_8018660C(u8 *arg0) {
    D_80192A50[AF(arg0, u16, 2)]();
}

void func_80186648(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_80192A18);
}

void func_80186674(s32 arg0) {
    AF(arg0, s32, 0xE4) = D_80192A04[func_801877C0(arg0)];
}

void func_801866B4(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xB, 0x17) == 0) {
        func_801865E0((s32) arg0);
    }
}

void func_80186700(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    if (func_8018766C(0xB, 0x17) != 0) {
        AF(arg0, s16, 2) = 1;
        func_80187778((s32) arg0, (s32) &D_801929E8);
    }
}

void func_80186758(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
        func_80187778(arg0, (s32) &D_801929E8);
    }
}

extern u8 D_801929F0;
u8 *func_80186828(u8 *arg0);

void func_801867A8(u8 *arg0) {
    if (func_8018727C((s32) arg0, (s32) &D_801929F0) != 0) {
        if (func_8018766C(0xB, 0x17) != 0) {
            AF(arg0, s16, 2) = 1;
        } else {
            AF(arg0, s16, 2) = 2;
        }
        func_80187778((s32) arg0, (s32) &D_801929E8);
        AF(AF(arg0, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = func_801788B8(arg0, func_80186828);
    }
}

u8 *func_80186828(u8 *arg0) {
    if (AF(AF(arg0, u8 *, 0x64), u16, 2) != 2) {
        return 0;
    }
    if (((s32 (*)()) func_8018739C)() != 0) {
        AF(AF(arg0, u8 *, 0x64), s16, 2) = 3;
        func_80178BF8();
        return &func_80172710;
    }
    return 0;
}

s32 func_80186890(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    func_8012E8E0(arg0, (s32) &D_80192A64);
    func_80187750(arg0);
    return SetScript(arg0, (s32) &D_801C3C90);
}

void func_801868E0(u8 *arg0) {
    D_80192AE8[AF(arg0, u16, 2)]();
}

void func_8018691C(u8 *arg0) {
    D_80192B10[AF(arg0, u16, 2)]();
}

void func_80186958(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    func_80178CBC((s32) arg0, (s32) &D_80192AC8);
}

void func_80186984(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    if (func_80128C98(2) != 0) {
        func_801EF558((s32) arg0);
    }
}

void func_801869C8(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) >= 0x1EU) {
        func_80186890(arg0);
    }
}

void func_80186A04(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
        func_8012E8E0(arg0, (s32) &D_80192A64);
        func_80187750(arg0);
        SetScript(arg0, (s32) &D_801C3C90);
    }
}

void func_80186A6C(void) {
}

void func_80186A74(void) {
}

void func_80186A7C(void) {
}

void func_80186A84(void) {
}

extern u8 D_80192A6C;
extern u8 D_801EB318;
extern s32 * func_80186C54();

void func_80186A8C(u8 *arg0) {
    s32 r;

    if (func_8018727C(arg0, &D_80192A6C) == 0) {
        return;
    }
    r = func_80029504();
    if (r < 0x1E) {
        AF(arg0, s16, 2) = 1;
    } else if (r < 0x46) {
        AF(arg0, s16, 2) = 4;
    } else {
        func_8012CAE4(arg0);
        return;
    }
    func_8012E8E0(arg0, &D_80192A64);
    func_80187750(arg0);
    SetScript(arg0, (s32) &D_801C3C90);
    func_8001C97C(&D_801EB318);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s32, 0xD4) = func_801788B8(arg0, func_80186C54);
}

void func_80186B54(u8 *arg0) {
    s32 c;

    AF(AF(arg0, void *, 0x20), B8, 0x10) = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), B8, 0x10);
    c = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = c;
    if (c >= 0x5A) {
        func_8012C218(arg0);
        return;
    }
    if (c >= 0x3C) {
        AF(AF(arg0, void *, 0x20), s32, 4) ^= 0x80000000;
    }
}

void func_80186BEC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801CDAD8);
    SetScript(arg0, (s32) &D_801C3CE8);
    AF(arg0, s16, 2) = 1;
}

s32 *func_80186C54(u8 *arg0) {
    u8 *p = AF(arg0, void *, 0x64);

    if (AF(p, u16, 2) != 1 && AF(p, u16, 2) != 4) {
        return NULL;
    }
    if (func_8012BD14(p) >= 0x4001) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    func_80178BF8();
    return (s32 *) &func_80172710;
}

extern u8 D_80078EAE;

s32 func_80186CD0(s32 a) {
    if ((u32)(a - 0x384) < 0x6E) return 0x65;
    if ((u32)(a - 0x64) < 0x1E) return 0x28;
    if (D_80078EAE == 1) return 0xF;
    return 0x10;
}

s32 func_80186D18(void) {
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

s32 func_80186D7C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x600;
    return func_8012B2CC(arg0);
}

s32 func_80186DAC(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x600;
    return func_8012B2CC(arg0);
}

extern s32 *func_80186F88();
extern u8 D_801C04F4;
extern u8 D_801C0404;
extern u8 D_801C04FC[][8];
extern u8 D_801C050C[][16];

void func_80186DDC(u8 *o) {
    u8 *r;
    s32 s1;
    r = func_8012C1B8();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(r, AF(o, s16, 0x70) == 0 ? &D_801C0404 : &D_801C04F4);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_801C050C[AF(o, s16, 0x70)] | 0x40000000;
    func_8012E8E0(o, D_801C04FC[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = func_80029504();
    if ((u8)func_80029178(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            func_801788B8(o, func_80186F88);
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

void func_80186F4C(u8 *arg0) {
    D_801C063C[AF(arg0, u16, 2)]();
}

s32 *func_80186F88(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_80186D18() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_80187004(u8 *arg0) {
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

s32 func_80187074(void) {
    return D_801EF2E0 == 2;
}

void func_8018708C(void) {
    func_8002D4C8(0x7E0, 0);
}

extern s32 func_800D0F8C();
extern u8 D_801C057C;
extern u8 D_801C0594;

void func_801870B0(u8 *o) {
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            func_80178CBC(o, &D_801C057C);
            AF(o, s16, 0x34) = 2;
        } else {
            func_80178CBC(o, &D_801C0594);
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
            func_80186D7C(o);
        }
        break;
    }
}

void func_801871E4(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_80186DAC((s32) arg0);
        }
    }
}

void func_8018724C(void) {
}

void func_80187254(void) {
}

void func_8018725C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_8018726C(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

extern u8 D_801C0988;

s32 func_8018727C(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_801C0988;
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

void func_80187318(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 4));
}

s32 func_80187344(s32 arg0) {
    return SetScript(arg0, AF(AF(arg0, void *, 0xD0), s32, 8));
}

void func_80187370(u8 *arg0) {
    SetScript((s32) arg0, AF(AF(arg0, void *, 0xD0), s32, 0xC));
}

extern void func_8012F2E8();
extern s32 func_8012CB64();

s32 func_8018739C(u8 *arg0) {
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

extern s16 D_801C0A9C[];
extern s16 D_801C0AD0[];
extern s32 D_801C099C[][8];
extern s32 D_801EF2D8[];
extern s16 func_801875C4();

s32 func_80187420(o)
    u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, d;
    g = &D_80078E78;
    k = D_801C0A9C[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_801EF2D8[0] = 0;
        return 0;
    }
    n = ((s32 (*)())func_801875C4)();
    h = D_80078EB1;
    q = n / 24;
    r = n % 24;
    d = D_80078EAC;
    if (n == 0) {
        i = D_801C0AD0[h] - 1;
    } else if (d - q >= 5) {
        i = 7;
    } else if (d == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_801C0AD0[i] - 1;
    }
    D_801EF2D8[0] = 1;
    return D_801C099C[i][k];
}

void func_80187550(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_80187420();
    func_80187584((s32) arg0);
}

void func_80187584(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = D_80078EB1 + (D_80078EAC * 0x18);
}

s16 func_801875C4(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_801875EC(u8 *arg0) {
    D_801C0B00[AF(arg0, u16, 2)]();
}

void func_80187628(void) {
}

void func_80187630(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) D_80078EB1 >= arg1 && (s32) D_80078EB1 < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_8018766C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_80078EB1 >= arg0) {
        var_v0 = (s32) D_80078EB1 < arg1;
    }
    return var_v0;
}

s32 func_80187690(s32 a0, s32 a1, s32 a2, s32 a3) {
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

extern s32 func_8012CEB0();

void func_801876E8(u8 *o, s32 n) {
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

void func_80187750(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_801C0B08 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_80187770(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_80187778(s32 arg0, s32 arg1) {
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    func_8012E8E0(arg0, arg1);
}

s32 func_801877C0(void) {
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

s32 func_8018781C(void) {
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

s32 func_80187890(void) {
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

s32 func_80187904(void) {
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

void func_80187960(s32 arg0, s32 arg1) {
    if (func_80029504(arg0, arg1) == 0x3A2) {
        func_80029514(0x3AC);
    }
}

extern s32 func_8012B200();

s32 func_80187994(u8 *o, s16 *t, s32 mode, s32 b) {
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

s32 func_80187A64(u8 *a) {
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

extern s32 func_8016F1C4();

s32 func_80187C2C(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (func_8014B12C() != 0) {
        return 2;
    }
    return 1;
}

void func_80187C74(u8 *arg0) {
    D_801C0B20[AF(arg0, u16, 2)]();
}

void func_80187CB0(void) {
}

void func_80187CB8(void) {
}

void func_80187CC0(void) {
}

void func_80187CC8(void) {
}

void func_80187CD0(void) {
}

void func_80187CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_80016714((s32) &D_801EF3C8, 0x14, arg2, arg3);
    D_801EF2DC = 0;
    func_8012CAE4(arg0);
}

void func_80187D1C(void) {
}

void func_80187D24(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_801CA118);
    func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    func_8012E8E0(arg0, (s32) &D_801C0B18);
    AF(arg0, s16, 2) = 1;
}

void func_80187DAC(u8 *a) {
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
                func_80188438(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_801883C4(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_80188498(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_8018835C(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_801883C4(a);
        }
        break;
    case 4:
        if (AF(a, u16, 2) != 2 || AF(a, u16, 0x34) == 0) {
            func_8018835C(a);
        }
        break;
    }
    D_801C0DF8[AF(a, u16, 2)](a);
}

void func_80187F84(u8 *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    AF(a, s32, 0x20) = m = func_8012C1B8(a, arg1);
    if (m == 0) {
        func_8012CAE4(a);
        return;
    }
    k = AF(a, s16, 0x70);
    p = &D_801C0B68[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_801C0B28 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        func_8001C214(m, *(s32 *)((u8 *)D_801C0B28 + *p * 8));
        break;
    }
    func_8001C97C(*(s32 *)((u8 *)D_801C0B2C + *p * 8));
    func_8001D0E8(AF(a, s32, 0x20), 0xC8, 0xB4);
    AF(a, u32, 0x58) = (u32)&D_801C0B40 | 0x40000000;
    AF(a, s16, 0x5C) = 0x800;
    AF(AF(a, u8 *, 0x20), u8 *, 0x20) = &D_801C0B5C;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_801C0B50;
    AF(a, s16, 0x10A) = 6;
    func_8018835C(a);
    AF(a, void *, 0xDC) = func_8018872C;
}

extern void func_80188830();

void func_80188124(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        func_80188830(o);
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

void func_801881A0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_80187C2C() == 2) {
        func_801883C4(arg0);
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
        func_801883C4(arg0);
    }
    func_801889AC(arg0);
}

void func_8018826C(s32 arg0) {
    func_801889AC(arg0);
}

void func_8018828C(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_80187C2C() == 2) {
        func_8018835C(arg0);
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
            func_8018835C(arg0);
            return;
        }
        func_801889AC(arg0);
    }
}

void func_8018835C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B2C + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

void func_801883C4(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

void func_80188438(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_80188498(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_801C0B28 + ((D_801C0B68[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_801889AC(arg0);
}

extern u16 D_801202A0;

void func_80188518(s32 arg0, s32 arg1) {
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

void func_80188AEC(s32 arg0, s32 arg1);

void func_80188570(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_80188AEC(arg0, 0x3C);
    }
}

void func_801885D0(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_80188618(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_80188AEC(arg0, 0x3C);
    }
}

void func_80188668(s16 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_801886A0(s32 arg0) {
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

s32 *func_8018872C(u8 *arg0) {
    if (D_800B9A08 == 0x3069) {
        return NULL;
    }
    if ((AF(arg0, u16, 2) == 2) && (AF(arg0, u16, 0x34) == 0) && (AF(arg0, s16, 0x10A) == 0)) {} else { return NULL; }
    if ((func_801887D0(arg0) != 0) && (func_80188D68(arg0) == 0)) {
        AF(arg0, u16, 0x34) = 1;
        func_80178BF8();
        return &func_80172710;
    }
    return NULL;
}

s32 func_801887D0(s32 arg0) {
    s32 o[2];
    FeSv v;

    v.x = D_80126B5E;
    v.y = D_80126B62;
    v.z = D_80126B66;
    func_8012F2E8(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

extern u8 *D_801C0DB0[];
extern u8 D_801C0D80;
extern u8 D_801C0D98;

void func_80188830(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &D_80078E78;
    v = func_80029504();
    s0 = D_801C0DB0[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_801C0D80;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_801C0D80;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)func_80029178(0xFA) != 0) s0 = &D_801C0D98;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_801C0D80;
        if ((u32)(v - 100) < 500) s0 = &D_801C0D98;
        if (func_80187904() == 1) s0 = &D_801C0D98;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_801C0D80;
        if (func_801877C0() == 3) s0 = &D_801C0D98;
        if (func_80187904() == 1) s0 = &D_801C0D98;
        break;
    }
    func_80178CBC(o, s0);
}

extern s32 func_801889E0();

s32 func_801889AC(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_801889E0(arg0);
}

s32 func_801889E0(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_80188A14(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_80188A78(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_80188AEC(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_80188B44(u8 *arg0) {
    D_801C0E1C[AF(arg0, u16, 2)]();
}

void func_80188B80(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_801C0E0C | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80188BFC(u8 *o) {
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

s32 func_80188D1C(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_80188D68((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_80188D68(u8 *o) {
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
        if (func_80188E74(p) == 0) continue;
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

extern s16 D_801C0E24;

s32 func_80188E74(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_801C0E24; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

extern u8 D_801C0BB8;
extern void *D_801EF3EC;

void func_80188ED0(s32 arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_801C0BB8, (s32) sp10);
    AF(D_801EF3EC, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

s16 func_80188F10(void) {
    return D_801EEB10;
}

extern s8 D_800B9A15;
extern u8 D_800B9A13;
extern s16 D_80115110;
void func_80188F6C(void); extern StepFn D_8011DB24;

void func_80188F20(s32 arg0) {
    D_800B9A15 = 1;
    D_800B9A13 = 4;
    D_80115110 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_8011DB24 = func_80188F6C;
}

void func_80188F6C(void) {
    func_80029444();
    func_801754A8();
    D_801C1890[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_80188FDC(void) {
    func_800D24A0(3);
    D_8011511A = 0;
    func_80189030();
    D_80115130 = 0;
    D_801EF1E0 = 0;
    D_80115112 += 1;
}

extern s32 *D_801EF254[];
extern u8 D_80115138[];
extern u8 D_80115140[];
extern void func_801898E4();
extern s32 D_80115134;
extern s16 D_801EF274;
extern u8 D_801EF290[];
extern s32 D_80078E8C;
extern u8 D_801F1374;
extern s16 D_801EF26C;
extern u8 *D_801EB574[];
extern u8 D_801EB56C[];
extern W80115118 D_80115118;
extern s32 D_801C1648[];
extern void func_8002AC00();
extern s32 func_80029FE4();
extern s16 D_801C1830[];
extern s32 *func_801F2690();
extern u8 D_801EF1F4[];
extern u8 D_801F0CC0;
extern u8 D_801F0CEC;
extern u8 D_801F10B0;
extern u16 D_800B99D8[];
extern s32 D_801C1808[];
extern s32 D_801C181C[];
extern s32 D_801C1838[];
extern s16 D_80078E92;
extern u8 D_801C1662;
extern u8 D_801C1664;
extern u8 D_801C166E;
extern u8 D_801C1670;
extern u8 D_801C167A;
extern u8 D_801C167C;
extern u8 D_801C1686;
extern u8 D_801C1688;

void func_80189030(void) {
    s16 i;
    s16 j;
    s16 lim;
    s16 m;
    s16 n;
    s32 v;
    s16 found;
    u8 *p;
    s32 *rec;
    s32 t;
    s32 x;

    D_801EEB10 = 0;
    D_80115118.f0 = 0;
    D_801EF274 = 0;
    v = func_80029504();
    D_80115134 = D_801C1648[D_80115126];
    if (D_80115126 != 3) {
        lim = 3;
    } else {
        lim = 4;
    }
    for (i = 0; i < 8; i++) {
        if (i < lim) {
            D_80115138[i] = *(u16 *)(D_80115134 + i * 32);
            D_80115118.f40.h[i] = *(u16 *)(D_80115134 + i * 32 + 2);
        } else {
            D_80115118.f40.r[i].v = 0;
            D_80115138[i] = 0;
        }
        D_80115118.f30[i].v = 0;
        D_80115140[i] = 0;
    }
    if (D_80115126 == 3) {
        if (func_80029178(0x11D) & 0xFF) {
            func_8002AC00(0x23);
            if ((func_80029178(0x1D) & 0xFF) && (func_80029178(0x1E) & 0xFF) && (func_80029178(0x1F) & 0xFF)
                && (func_80029178(0x20) & 0xFF) && (func_80029178(0x21) & 0xFF)
                && ((func_80029178(0x1B) & 0xFF) || (func_80029178(0x1C) & 0xFF))) {
                func_8002AC00(0x29);
            }
            if (func_80029FE4() >= 0x1B) {
                func_8002AC00(0x2A);
            }
            i = 0;
            j = 0;
            for (; i < 0x2A; i++) {
                if (func_800291B4(i + 0x63) & 0x40) {
                    j++;
                }
            }
            if (j >= 0x2A) {
                func_8002AC00(0x2B);
            }
        }
        n = 0;
        for (i = 0; i < 7; i++) {
            D_801EF290[i] = 0;
        }
        for (j = 0; j < 4; j++) {
            if (v < D_801C1830[j]) {
                break;
            }
        }
        m = j + 2;
        if (func_80029178(0x11D) & 0xFF) {
            m = 6;
        }
        for (i = 0; i < m; i++) {
            found = 0;
            p = D_801EB574[i];
            j = 0;
            if (D_801EB56C[i] != 0) {
                do {
                    if (func_800291B4(*p++ + 0x62) & 0x80) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_801EB56C[i]);
            }
            if (found) {
                D_801EF290[n++] = i;
            }
        }
        found = 0;
        p = D_801EB574[6];
        j = 0;
        if (D_801EB56C[6] != 0) {
            do {
                if (func_800291B4(*p++ + 0x62) & 0x80) {
                    found = 1;
                    break;
                }
                j++;
            } while (j < D_801EB56C[6]);
        }
        if (found) {
            D_801EF290[n++] = 6;
        }
        D_80115118.f40.h[1] = n | 0x100;
    }
    for (i = 0; i < 6; i++) {
        D_801EF254[i] = 0;
    }
    if (D_80115126 == 4) {
        rec = func_801F2690();
        if (rec != 0) {
            i = 0;
            do {
                t = rec[2];
                if ((u32)(t - 10) < 2) {
                    D_801EF254[t - 6] = rec;
                } else {
                    D_801EF254[i++] = rec;
                }
                rec += 4;
            } while (rec[-4] != 0);
        }
    }
    if (D_80115126 == 5) {
        rec = (s32 *)D_801EF1F4;
        for (i = 0; i < 6; i++) {
            switch (i) {
            case 0:
                rec[2] = 9;
                if (v < 600) {
                    rec[1] = (s32)&D_801F0CC0;
                } else {
                    rec[1] = (s32)&D_801F0CEC;
                }
                D_801EF254[0] = rec;
                break;
            case 1:
                rec[2] = 0xB;
                if ((func_80029178(0x11A) & 0xFF) && D_80078E8C >= 0x32U) {
                    rec[1] = (s32)&D_801F1374;
                } else {
                    func_80029124(0x11A, 0);
                    rec[1] = (s32)&D_801F10B0;
                }
                D_801EF254[1] = rec;
                break;
            case 2:
                rec[2] = 3;
                rec[1] = D_801C1808[D_800B99D8[0] % 5];
                D_801EF254[2] = rec;
                break;
            case 3:
                rec[2] = 0x19;
                for (j = 0; j < 4; j++) {
                    if (v < D_801C1830[j]) {
                        break;
                    }
                }
                x = D_801C1838[j];
                if (x != 0) {
                    rec[1] = x;
                    D_801EF254[3] = rec;
                }
                break;
            case 4:
                if (v < 0x3B6) {
                    rec[2] = 0xC;
                    /* MATCH-TRICK: struct view of D_800B99DA keeps the rec[2] store before this load */
                    rec[1] = D_801C181C[((U16R *)&D_800B99DA)->v % 5];
                    D_801EF254[4] = rec;
                }
                break;
            }
            rec += 4;
        }
    }
    D_801EF26C = 0;
    if (D_80115126 == 0) {
        if (D_80078EBA == 4) {
            D_801EF26C = 0x14;
        }
        if (v < 600) {
            D_801C1662 = D_801C166E = D_801C167A = D_801C1686 = 6;
            D_801C1664 = D_801C1670 = D_801C167C = D_801C1688 = 8;
        } else {
            D_801C1662 = D_801C166E = D_801C167A = D_801C1686 = 7;
            D_801C1664 = D_801C1670 = D_801C167C = D_801C1688 = 0x6D;
        }
    }
    if (D_80115126 == 1 && D_80078E92 >= 0x438) {
        D_801EF26C = 3;
    }
    func_801898E4();
}

extern s16 D_800A6586[];
extern u8 *D_801EF1D4;
extern u8 *D_801EF1DC;
extern u8 D_801EF298[];
extern E12w D_8010EDE8[];
extern E8w D_8010F468[];
extern E12s D_8010EDEC[];
extern s32 func_801783D0();
extern u8 D_8011514A;
extern u8 D_8011514C;
extern s16 D_8011515A[];
extern s16 D_8011515C;
extern s16 D_8011515E;
extern u8 D_801ED214[];
extern u8 D_801ED234[];
extern u8 D_801ED254[];
extern u8 D_801ED034[];
extern u8 D_801ED278[];
extern u8 D_801EEB14[][0x24];
extern u8 D_801EEB2F[][0x24];
extern u8 D_801EEB94[];
extern u8 D_801EED54[][0x24];
extern u8 D_801EED6A[][0x24];
extern u8 D_801EED6F[][0x24];
extern u8 D_801EEF94[][0x24];
extern u8 D_801EEF98[][0x24];
extern u8 D_801EEFA0[][0x24];
extern u8 D_801C16AC[];
extern u8 *D_801C168C[];
extern u8 D_801C16B4[];
extern u8 D_801C16BC[];
extern u8 *D_801C12EC;
extern u8 *D_801C12F0[];
extern u8 *D_801C12F4[];
extern u8 *D_801C1324;
extern u8 *D_801C1264[];

void func_801898E4(void) {
    u8 *a = D_801ED214;
    u8 *bb = D_801ED234;
    s16 i;
    s16 j;
    s16 m;
    s16 n;
    s16 f;
    s16 price;
    s16 disc;
    s32 r;
    s32 k;
    u8 id;
    u8 w;
    u8 *p;
    u8 *s;
    u8 *d;
    u8 *list;
    s32 *e;

    if (D_80115126 == 4) {
        p = D_801ED254;
    } else if (D_80115126 == 5) {
        p = D_801ED278;
    } else {
        p = D_801ED034;
    }
    for (i = 0; i < 16; i++) {
        strcpy(D_801EEB14[i], a);
        strcpy(D_801EED54[i], bb);
        strcpy(D_801EEF94[i], p);
    }
    switch (D_80115126) {
    case 0:
        if (func_80029178(0xFB) & 0xFF) {
            i = 1;
        } else {
            i = (u32)func_80029504() >= 600;
        }
        if (func_80029178(0x9B) & 0xFF) {
            i |= 2;
        }
        if ((u8)func_800291B4(0x5B) >= 3) {
            i |= 4;
        }
        n = D_801C16AC[i];
        D_8011515A[0] = n | 0x100;
        list = D_801C168C[i];
        D_801EF1D4 = list;
        break;
    case 1:
        n = 7;
        if ((u32)func_80029504() < 600) {
            n = 5;
        }
        list = D_801C16B4;
        D_8011515A[0] = n | 0x100;
        D_801EF1D4 = list;
        break;
    case 5:
        list = D_801C16BC;
        D_801EF1D4 = list;
        n = 7;
        break;
    default:
        n = 0;
        break;
    }
    for (i = 0; i < n; i++) {
        k = list[i];
        s = (u8 *)D_8010EDE8[k].v;
        d = D_801EEB14[i];
        while (*s != 0) {
            *d++ = *s++;
            *d++ = *s++;
        }
        disc = D_801EF26C;
        if (disc != 0) {
            if (D_80115126 == 0) {
                price = D_8010EDEC[k].v * (100 - disc) / 100;
            } else {
                price = D_8010EDEC[k].v - disc;
            }
        } else {
            price = D_8010EDEC[k].v;
        }
        r = func_801783D0(price, 0);
        m = -0x1000;
        for (j = 3; j >= 0; j--) {
            if ((u16)r & m) {
                break;
            }
            m >>= 4;
        }
        d = D_801EEB2F[i];
        for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
            *d-- = (r & 0xF) + 0x4F;
            *d-- = 0x82;
        }
        d[0] = 0x46;
        d[-1] = 0x81;
    }
    w = D_801EF290[D_8011514A];
    list = D_801EB574[w];
    n = D_801EB56C[w];
    D_801EF1DC = list;
    D_8011515E = n | 0x100;
    if (D_80115126 == 0 && func_800D0F8C(0xA) != 0) {
        strcpy(D_801EEB94, D_801C12EC);
    }
    if (D_80115126 == 3) {
        for (i = 0; i < n; i++) {
            k = list[i];
            s = (u8 *)D_8010F468[k].v;
            d = D_801EED54[i];
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            id = k;
            j = (u8)func_800291B4(id + 0x62);
            if (j & 0x80) {
                if (!(j & 0x40)) {
                    r = func_801783D0(D_800A6586[id], 0);
                    m = -0x1000;
                    for (j = 3; j >= 0; j--) {
                        if ((u16)r & m) {
                            break;
                        }
                        m >>= 4;
                    }
                    d = D_801EED6F[i];
                    for (m = 0; m < j + 1; m++, r = (u16)r >> 4) {
                        *d-- = (r & 0xF) + 0x4F;
                        *d-- = 0x82;
                    }
                    d[0] = 0x46;
                    d[-1] = 0x81;
                } else {
                    strcpy(D_801EED6A[i], D_801C12EC + 2);
                }
            } else {
                strcpy(D_801EED54[i], D_801C12F0[0]);
            }
        }
        if ((u16)D_8011511A != 1 && (u16)D_8011511A != 2) {
            for (i = 0, j = 0; i < 64; i++) {
                if (func_800291B4(i + 0x63) & 0x40) {
                    D_801EF298[j++] = i;
                }
            }
            D_8011515C = j | 0x100;
            if (D_8011514C >= j) {
                if (j != 0) {
                    D_8011514C = j - 1;
                } else {
                    D_8011514C = 0;
                }
            }
        }
    }
    if (D_80115126 == 4) {
        for (i = 0; i < 6; i++) {
            s = D_801C12F4[i];
            d = D_801EEF98[i];
            d[0] = s[0];
            d[1] = s[1];
            d = D_801EEF98[i] + 4;
            e = D_801EF254[i];
            if (e != 0) {
                s = D_801C1264[e[2]];
                while (*s != 0) {
                    *d++ = *s++;
                    *d++ = *s++;
                }
            } else {
                strcpy(D_801EEF98[i] + 0x16, D_801C12F4[i + 6]);
            }
        }
    }
    if (D_80115126 == 5) {
        for (i = 0; i < 6; i++) {
            d = D_801EEF94[i];
            if (i == 0) {
                s = D_801C1324;
            } else {
                s = D_801C12F0[i];
                d += 8;
            }
            while (*s != 0) {
                *d++ = *s++;
                *d++ = *s++;
            }
            if (D_801EF254[i] != 0) {
                strcpy(D_801EEFA0[i], D_801C1264[D_801EF254[i][2]]);
            }
        }
    }
}

extern s32 D_801151C8[];
extern s32 D_801151D0;
extern s32 func_8014168C();
extern void func_80139954();
extern s32 func_801376E8();
extern void func_80137B80();
extern s32 D_801EF1E4;
extern u8 D_801C17F0;
extern void func_8018B238();

void func_8018A270(void) {
    u8 unused[8];
    s16 r;
    s32 p;
    s32 t;
    s32 a;
    u8 k;
    s32 *q;
    u16 *w;

    D_801151D0 = D_801151C8[D_800B9A02];
    r = func_8018AEE8();
    func_8018B238();
    a = func_8014168C(D_8011511A);
    k = D_80115138[(u16)D_8011511A];
    t = D_801EF1E0;
    if (t != 0) {
        p = t;
    } else {
        p = func_8018B8DC(k, (s16)a);
    }
    if (p != 0) {
        q = &D_80115130;
        if (p != *q) {
            *q = p;
            func_80139954();
            D_801EF1E4 = func_801376E8(p, &D_801C17F0);
        }
    }
    func_80137B80();
    if (r < 0) {
        func_80139954();
        D_800B9A15 = 0;
        if (D_801EEB10 == 0) {
            func_8002D4C8(0x474, 0);
        }
        w = &D_80115112;
        *w += 2;
    }
}

extern void func_8001AAA0();
extern s32 func_801399F0();
extern s16 D_801EF1E8;
extern s16 D_801EF1EC;
extern s16 D_801EF1F0;
extern s16 D_801EF270;
extern u8 D_80115148[];
extern s32 func_80139A68();
extern s32 func_8018C000();
extern s32 D_800A654C;
extern s16 D_801EF278;
extern s16 D_801EF27C;
extern s16 D_801EF280;
extern s16 D_801EF284;
extern s16 D_801EF288;
extern s16 D_801EF28C;
extern s32 *D_801EF258;
extern u8 D_801F0D18;
extern u8 D_801F4334;
extern s32 D_801C184C[];
extern u8 D_801C1884[];
extern void func_8017ADE8();
extern s32 GetPadPressedDir();
extern s32 func_8018C914();

void func_8018A3A8(void) {
    u8 unused[8];
    s16 v;
    s16 a;
    s16 b;
    u8 s;
    u16 *w;
    s32 n;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_80115126 == 4) {
        if (func_801399F0(D_801EF1E4) == 0) {
            goto end;
        }
        if (D_80115148[0] == 0) {
            if (D_801EF1E0 == (s32)&D_801F4334) {
                D_801EF1E8 = 0x60;
                D_801EF1F0 = 0;
                D_801EF1EC = 0;
                D_801EF1E0 = 0;
                if (D_800A654C == 0x16) {
                    D_801EF270 = 1;
                    func_8001AAA0(0x35);
                } else {
                    D_801EF270 = 0;
                }
                n = 6;
            } else {
                n = D_80115112 - 1;
            }
        } else {
            D_801EF1E0 = 0;
            func_8017ADE8(0x12);
            func_8002D4C8(0x46F, 0);
            D_8011511A = 0;
            n = D_80115112 - 1;
        }
        D_80115112 = n;
        goto block;
    } else if (D_80115126 == 5) {
        if (D_801EF1E0 != 0) {
            D_801EF28C = func_801399F0(D_801EF1E4);
            if (D_801EF28C != 0) {
                D_801EF1E0 = 0;
            }
            goto end;
        }
        if (!(GetPadPressedDir(0) & 0x50) && D_801EF28C <= 0) {
            goto end;
        }
        switch (D_801EF274) {
        case 0:
            D_801EF274 = -1;
            break;
        case 1:
            if (D_801EF28C < 0) {
                D_801EF1E0 = (s32)&D_801F0D18;
            } else if (D_801EF28C == 1) {
                D_801EEB10 = 1;
                func_80139954();
                w = &D_80115112;
                n = *w;
                D_800B9A15 = 0;
                *w = n + 1;
            } else {
                D_801EF274 = -2;
            }
            break;
        case 2:
            D_801EF288 = 0;
            D_801EF278 = 0;
        case 5:
        case 6:
            D_801EF274 = (D_801EF274 + 1) | 0x100;
            break;
        case 3:
            if (D_801EF28C == 1) {
                D_801EF274++;
                if (D_801EF288 == 0) {
                    if ((s16)func_8018C914(-10) != 0) {
                        func_8002D4C8(0x472, 0);
                        D_801EF274 = 0x10C;
                        break;
                    }
                    func_8002D4C8(0x5EE, 0);
                    D_801EF278 = 0;
                    D_801EF288 = 0;
                    v = rand() % 9 + 3;
                    D_801EF27C = v;
                    func_80139A68(v, 0);
                } else {
                    func_80139A68(D_801EF27C, 0);
                    D_801EF274 = 0x106;
                    break;
                }
            }
            D_801EF274 = (D_801EF274 + 1) | 0x100;
            break;
        case 4:
        case 12:
        case 13:
            if (D_801EF278 != 0) {
                func_8018C914(D_801EF278);
                func_8002D4C8(0x5EE, 0);
            }
            D_801EF274 = -1;
            break;
        case 7:
            D_801EF284 = D_801EF28C - 1;
            v = rand() % 13 + 1;
            D_801EF280 = v;
            func_80139A68(v, 0);
            D_801EF274 = (D_801EF274 + 1) | 0x100;
            break;
        case 8:
        case 9:
            a = D_801EF27C;
            b = D_801EF280;
            if (a == b) {
                v = rand() % 13 + 1;
                D_801EF280 = v;
                func_80139A68(v, 0);
                D_801EF274 = 0x109;
                break;
            }
            if ((D_801EF284 == 0 && a < b) || (D_801EF284 != 0 && b < a)) {
                if (D_801EF278 == 0) {
                    D_801EF278 = 10;
                }
                D_801EF278 <<= 1;
                func_80139A68(D_801EF278, 0);
                func_8002D4C8(0x5EE, 0);
                if (D_801EF278 >= 0x2800) {
                    func_80029124(0x11A, 1);
                    D_801EF274 = 0x10D;
                    D_801EF258[1] = (s32)&D_801F1374;
                } else {
                    D_801EF288++;
                    s = D_801C1884[D_801EF288];
                    D_801EF27C = rand() % (9 - s * 2) + (s + 3);
                    func_80139A68(D_801EF278, 0);
                    D_801EF274 = 0x10A;
                }
            } else {
                D_801EF278 = 0;
                D_801EF288 = 0;
                D_801EF274 = 0x10B;
                func_8002D4C8(0xC62, 0);
            }
            break;
        case 10:
        case 11:
            D_801EF274 = 0x103;
            break;
        }
        if (D_801EF274 < 0) {
            func_8017ADE8(10);
            if (D_801EF274 == -1) {
                func_8002D4C8(0x46F, 0);
            }
            w = &D_80115112;
            n = *w;
            D_801EF274 = 0;
            *w = n - 1;
        }
        if (D_801EF274 >= 0x100) {
            D_801EF274 &= 0xFF;
            D_801EF1E0 = D_801C184C[D_801EF274];
        }
    block:
        if (D_801EF1E0 != 0) {
            D_80115130 = D_801EF1E0;
            func_80139954();
            D_801EF1E4 = func_801376E8(D_801EF1E0, &D_801C17F0);
        }
    } else {
        if (D_801EF1E0 != 0) {
            if (func_801399F0(D_801EF1E4) != 0) {
                D_801EF1E0 = 0;
            }
        } else if (GetPadPressedDir(0) & 0x50) {
            if (D_80115138[(u16)D_8011511A] == 8) {
                func_8018C000(0xF, (s16)func_8014168C(D_8011511A));
            }
            if (D_801EEB10 != 0) {
                func_80139954();
                D_800B9A15 = 0;
                func_8002D4C8(0x474, 0);
                n = D_80115112 + 1;
            } else {
                func_8002D4C8(0x46F, 0);
                n = D_80115112 - 1;
            }
            D_80115112 = n;
        }
    }
end:
    func_8018B238();
    func_80137B80();
}

extern void func_8014BB24();
extern void func_8014B944();
extern void func_8014BD24();
extern s32 func_801621CC();
extern void func_801622C4();
extern s16 D_801C17F4[];
extern u8 D_801F437C;
extern void func_801F1A24();
extern void func_8018C960();

void func_8018ABAC(void) {
    u8 unused[8];
    s32 r;
    s32 n;
    s32 t;
    s16 c;
    u8 *m;

    D_801151D0 = D_801151C8[D_800B9A02];
    m = &D_80126B58;
    if (D_801EF1E8 != 0) {
        D_801EF1E8--;
        r = func_8014168C(D_8011511A);
        if ((s16)r != 3) {
            n = 8;
            t = 0x3E7;
        } else {
            n = 3;
            t = 0x18;
        }
        c = D_801EF1E8;
        if (c >= 0x3F) {
            if (D_801EF1EC != 0xFF) {
                D_801EF1EC += 0x10;
                if (D_801EF1EC >= 0x100) {
                    D_801EF1EC = 0xFF;
                }
            } else {
                D_801EF1F0 += 0x10;
                if (D_801EF1F0 >= 0x100) {
                    D_801EF1F0 = 0xFF;
                }
            }
        } else if (c < 0x20) {
            if (D_801EF1F0 != 0) {
                D_801EF1F0 -= 0x10;
                if (D_801EF1F0 < 0) {
                    D_801EF1F0 = 0;
                }
            } else {
                D_801EF1EC -= 0x10;
                if (D_801EF1EC < 0) {
                    D_801EF1EC = 0;
                }
            }
        } else if (c == 0x30) {
            func_8014BB24(m, D_801C17F4[(s16)r], 1);
            func_8014B944(m, 0x1000000, 1);
            if ((s16)r == 2) {
                func_8014B2A8();
            }
            func_801F1A24(n);
            func_8014BD24(m, t);
        }
        func_8018C960();
        if (D_801EF1E8 == 0 && func_801621CC(n) != 0) {
            func_801622C4();
            func_80139954();
            D_800B9A15 = 0;
            D_80115112 = 4;
            return;
        }
    } else if (D_801EF1E0 == 0) {
        D_80115130 = D_801EF1E0 = (s32)&D_801F437C;
        func_80139954();
        D_801EF1E4 = func_801376E8(D_801EF1E0, &D_801C17F0);
        if (D_801EF270 != 0) {
            func_8001AAA0(0x16);
        }
    } else if (func_801399F0(D_801EF1E4) != 0) {
        D_801EF1E0 = 0;
        func_8002D4C8(0x46F, 0);
        D_8011511A = 0;
        D_80115112 = 2;
    }
    func_8018B238();
    func_80137B80();
}

extern s32 GetPadPressedDirWide();
extern s32 GetPadHeldDirWide();
extern u16 D_80115122;
extern u16 D_80115120;
extern u8 D_8011514E;
extern u8 D_80115143;

s32 func_8018AEE8(void) {
    s32 pad;
    s32 rep;
    s16 *q;
    s32 r;
    s32 idx;
    s16 kind;
    s16 moved;
    u8 *a;
    u8 *b;
    u8 c;
    u8 e;
    s16 d;
    s32 m;

    moved = 0;
    pad = GetPadPressedDirWide(0);
    if ((u16)pad != 0) {
        D_801EF1E0 = 0;
    }
    rep = GetPadHeldDirWide(0);
    q = &D_8011511A;
    r = func_8014168C(*q);
    idx = (u16)*q;
    kind = D_80115138[idx];
    if (pad & 0x40) {
        d = func_8018C000(kind, (s16)r);
        if (d != 0) {
            return d;
        }
        return 0;
    }
    if (pad & 0x10) {
        
        if (kind < 7) {
            return -1;
        }
        func_8002D4C8(0x473, 0);
        if (kind != 13) {
            *q = 0;
        } else {
            *q = 1;
        }
        return 0;
    }
    a = (u8 *)&D_8011511A + 0x2E + idx * 2;
    b = (u8 *)&D_8011511A + 0x3E + idx * 2;
    if ((u16)rep != 0) {
        if ((u16)rep == D_80115120) {
            if (--D_80115122 == 0) {
                pad = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            D_80115120 = rep;
            D_80115122 = 8;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    if (pad & 0x1000) {
        a[0]--;
        moved = 1;
        if (a[0] >= 0x80) {
            if (kind < 10) {
                a[0] = b[0] - 1;
            } else {
                a[0] = 0;
                moved = 0;
            }
        }
    }
    if (pad & 0x4000) {
        c = a[0];
        a[0] = c + 1;
        moved = 1;
        if (a[0] >= b[0]) {
            if (kind < 10) {
                a[0] = 0;
            } else {
                a[0] = c;
                moved = 0;
            }
        }
    }
    if (kind == 7 || kind == 8) {
        if (pad & 0x8000) {
            a[1]--;
            moved = 1;
            if (a[1] >= 0x80) {
                a[1] = b[1] - 1;
            }
        }
        if (pad & 0x2000) {
            a[1]++;
            moved = 1;
            if (a[1] >= b[1]) {
                a[1] = 0;
            }
        }
    } else {
        e = a[0];
        m = (u16)D_8011511A;
        d = (s8)e - (s8)D_80115140[m];
        if (d >= 6) {
            D_80115140[m] = e - 5;
        } else if (d < 0) {
            D_80115140[m] = e;
        }
    }
    if (moved) {
        func_8002D4C8(0x45A, 0);
        if (kind == 12) {
            D_8011514E = 0;
            D_80115143 = 0;
            func_801898E4();
        }
    }
    return 0;
}

extern OtRef D_800AE7BC[];
extern S8P D_80115158[];
extern Ot14 D_800AE7B8[];
extern u8 D_801C0E80;
extern u8 D_801C0E94;
extern u8 D_801C1568;
extern u8 D_801C17E8;
extern u8 *func_80137D08();
extern u8 *func_800D27DC();
extern u8 *func_8013AB54();
extern u8 * func_8018B478();

void func_8018B238(void) {
    typedef struct { s32 w; } W1;
    u8 *q;
    u8 *p;
    s16 i;
    s16 n;
    s16 m;

    q = (u8 *)D_80115134;
    p = func_80137D08(D_801151D0, &D_800AE7B8[D_800B9A02], 2);
    if (D_801EF274 == 3 || D_801EF274 == 7) {
        p = func_800D27DC(2, p, &D_801C0E94, 1, 0);
    } else {
        p = func_800D27DC(2, p, &D_801C0E80, 1, 0);
    }
    p = func_8013AB54(p, D_800AE7BC[D_800B9A02].ot + 2, &D_801C17E8, 0);
    if (D_80115126 == 3) {
        if ((u16)D_8011511A == 3) {
            p = func_8018B478(p, &D_801C1568, 3);
            n = 3;
        } else {
            n = 4;
        }
    } else {
        n = 3;
    }
    i = 0;
    if (n != 0) {
        m = n;
    top:
        if (((s16 *)D_80115158)[i] == 0) goto skip;
        p = func_8018B478(p, q, i);
        do {
        skip:
            i++;
            q += 0x20;
        } while (0);
        if (i < m) goto top;
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x02000000;
    ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
    p += 0x28;
    ((W1 *)&D_801151D0)->w = (s32)p;
}

typedef struct { u16 a; u16 b; u8 pad[28]; } R8017D4A4;
typedef struct { u8 v; } U8R;
typedef struct { s8 lo; u8 hi; } S8PE804;
typedef struct { u32 *ot; u8 pad4[8]; u32 *otLast; u8 pad10[4]; } OtE804;
typedef struct { u16 v; } U16RE804;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } SprtE804;
typedef struct { s16 a, b; } S16x2;
typedef struct { char *name; s32 x; } NameEnt;
extern void func_80024054();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

u8 *func_8018B478(u8 *p, u8 *t, s32 id0) {
    s16 id = id0;
    u8 buf[0x48];
    u32 col;
    s32 a;
    s16 f;
    s32 c;
    u8 d;
    s16 *xy;
    s16 i;
    s32 r;

    a = (u8)-((u16)D_8011511A != id);
    
    func_80024054(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_8018BCD4((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_8018B644(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            func_80024054(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

extern u8 D_8018E5C0[];
extern s32 D_801C12E8;

s32 func_8018B644(s32 *tbl, s16 kind, s16 id, s16 idx, u32 *col) {
    s32 ret;
    s16 cnt;
    s16 j;
    s32 v;
    s32 a;
    u8 k;
    s32 ok;
    s32 t;

    *col = 0x808080;
    cnt = D_80115158[id].hi * (u8)D_80115158[id].lo;
    ret = 0;
    switch (kind) {
    case 10:
    case 11:
    case 13:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            ret = tbl[j];
        }
        break;
    case 12:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            ret = tbl[D_801EF290[j]];
        }
        break;
    case 7:
    case 8:
        if (idx < 12) {
            k = func_800291B4(D_8018E5C0[idx]);
            if (k == 0) {
                return 1;
            }
            ret = D_8010EDE8[k].v;
        }
        break;
    case 14:
        j = idx + D_80115140[id];
        if (idx < 6 && j < cnt) {
            v = D_801EF298[j];
            a = v + 0x63;
            if (v < 0 || !(func_800291B4(a) & 0x40)) {
                ret = D_801C12E8;
            } else {
                ret = D_8010F468[v + 1].v;
                if (func_800291B4(a) & 0x20) {
                    *col = 0x804040;
                }
            }
        }
        break;
    default:
        t = idx;
        if (kind == 5) {
            ok = t < 4;
        } else {
            ok = t < 3;
        }
        if (ok) {
            ret = tbl[idx];
        }
        break;
    }
    return ret;
}

extern u8 D_801117EC;
extern E12s D_8010EDEE[];
extern E12b D_8010EDF2[];
extern s32 D_801C17B4[];
extern s32 D_801C17D0[];
extern s32 D_8018E680[];
extern s32 D_801EB58C[];
extern u8 D_801F0700;
extern u8 D_801F44B4;
extern u8 D_801F4524;
extern u8 D_801F44F8;
extern u8 D_801F44E0;
extern u8 D_801F0B80;

s32 func_8018B8DC(s16 kind, s16 i) {
    s32 ret;
    u8 v;
    s32 n;
    s32 *p;

    ret = (s32)&D_801117EC;
    switch (kind) {
    case 10:
        if (D_80115126 != 5) {
            v = D_801EF1D4[i];
            ret = D_8018E680[v];
        } else {
            ret = D_801C17B4[i];
        }
        break;
    case 7:
        v = func_800291B4(D_8018E5C0[i]) ;
        if (v == 0) {
            break;
        }
        if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
            ret = func_8018C89C((i & 3) + 6);
            func_80139A68(D_8010EDEE[v].v, 0);
        } else {
            ret = func_8018C89C(5);
        }
        break;
    case 8:
        if (D_80115148[0] != 0) {
            v = func_800291B4(D_8018E5C0[i]) ;
            if (v == 0) {
                break;
            }
            if (D_8010EDEE[v].v != 0 && D_80115126 == D_8010EDF2[v].v) {
                ret = func_8018C89C((i & 3) + 6);
                func_80139A68(D_8010EDEE[v].v, 0);
            } else {
                ret = func_8018C89C(5);
            }
        } else {
            v = func_800291B4(D_8018E5C0[i]) ;
            if (v != 0) {
                ret = D_8018E680[v];
            }
        }
        break;
    case 13:
        v = D_801EF1DC[i];
        if (func_800291B4(v + 0x62) & 0x80) {
            ret = D_801EB58C[v];
        }
        break;
    case 14:
        v = D_801EF298[i];
        if (v == 0xFF) {
            break;
        }
        v++;
        if ((func_800291B4(v + 0x62) & 0xF0) == 0xC0) {
            ret = func_8018C89C((i & 1) | 6);
            func_80139A68((s16)(D_800A6586[v] * 9 / 10), 0);
        } else if ((func_800291B4(v + 0x62) & 0xF0) == 0xE0) {
            ret = (s32)&D_801F0700;
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                ret = (s32)&D_801F44B4;
                if (D_801EF254[i] == 0) {
                    ret = D_801C17D0[i];
                }
            } else {
                p = D_801EF254[i];
                if (p != 0) {
                    ret = (s32)&D_801F4524;
                    if (p[1] != 0) {
                        ret = (s32)&D_801F44F8;
                    }
                } else {
                    ret = (s32)&D_801F44E0;
                }
            }
        } else if (D_801EF254[i] != 0) {
            ret = (s32)&D_801F0B80;
        }
        break;
    default:
        ret = func_8018C89C(0);
        break;
    }
    return ret;
}

extern u16 D_801C11BA;
extern u16 D_801C11CE;

Sprt *func_8018BCD4(Sprt *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
    s32 kind;
    s16 k;
    u16 *uv;
    u16 cur;
    s16 i;

    kind = D_80115138[id];
    p->tag = 0x04000000;
    p->u = 0x30;
    p->v = 0x48;
    p->clut = 0x4056;
    p->code = col | 0x64000000;
    if (kind < 10) {
        k = func_8014168C(id) * 2;
    } else {
        k = (D_80115148[id * 2] - D_80115140[id]) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->x = uv[0] - 8;
    p->y = uv[1];
    p->h = 8;
    p->w = 8;
    ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
    ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
    p++;
    if (kind >= 10) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur] == 0) {
                        continue;
                    }
                    p->v = 0x30;
                    p->y = D_801C11BA - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_801C11CE + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 12;
                p->w = 8;
                p->h = 8;
                ((PTag *)p)->addr = ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr;
                ((PTag *)&D_800AE7BC[((U16R *)&D_800B9A02)->v].ot[2])->addr = (u32)p;
                p++;
            }
        }
    }
    return p;
}

extern void func_800D0F0C();
extern E12b D_8010EDF1[];
extern void func_800D0FE0();
extern s32 func_8018C8D4(s32 arg0);
extern void func_800D128C();
extern u8 D_801F10F4;
extern s32 D_801EB520[];
extern s32 D_801EB650[];
extern u8 D_801F1090;
extern void func_80139A44();
extern s8 D_801C1800[];

s32 func_8018C000(s32 a, s32 b) {
    u16 x;
    s16 kind;
    s16 id;
    s32 st;
    s32 i;
    s32 n;
    s32 k;
    s32 m;
    s32 c;
    s32 g;
    s32 e;
    s32 t;
    s16 tt;
    s16 j;
    s16 d;
    s16 v;
    s16 r;
    s32 *q;
    s32 *h;
    u16 *w;

    switch ((s16)a) {
    case 1:
    case 2:
    case 4:
    case 6:
        if ((s16)b == 2) {
            return -1;
        }
        func_8002D4C8(0x46F, 0);
        D_8011511A = b + 1;
        break;
    case 3:
        if ((s16)b == 2) {
            return -1;
        }
        D_8011511A = 2;
        func_8002D4C8(0x46F, 0);
        break;
    case 5:
        c = (s16)b;
        if (c == 1) {
            D_801EEB10 = 1;
            func_8002D4C8(0x474, 0);
            return -1;
        }
        if (c == 3) {
            return -1;
        }
        func_8002D4C8(0x46F, 0);
        if (c != 0) {
            D_8011511A = b;
        } else {
            D_8011511A = 2;
        }
        break;
    case 12:
        D_8011511A = 3;
        *(s16 *)&D_8011514E = 0;
        func_8002D4C8(0x46F, 0);
        break;
    case 13:
        i = D_801EF1DC[(s16)b];
        n = i + 0x62;
        st = (u8)func_800291B4(n);
        if ((st & 0xF0) != 0x80) {
            func_8002D4C8(0x472, 0);
            break;
        }
        if ((s16)func_8018C914(-D_800A6586[i]) != 0) {
            func_8018C8D4(3);
            func_8002D4C8(0x472, 0);
            break;
        }
        func_800291A0(n, st | 0x40);
        func_801898E4();
        d = (s8)D_80115140[12] - (s8)D_80115140[2];
        if (d >= 6) {
            D_80115140[2] = D_80115140[12] - 5;
        } else if (d < 0) {
            D_80115140[2] = D_80115140[12];
        }
        func_8018C8D4(1);
        func_8002D4C8(0x5EE, 0);
        break;
    case 14:
        k = (s16)b;
        i = (s16)(D_801EF298[k] + 1);
        n = i + 0x62;
        x = (u8)func_800291B4(n);
        if ((x & 0xF0) != 0xC0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        func_8018C914(D_800A6586[i] * 9 / 10);
        func_800291A0(n, x & 0xBF);
        func_801898E4();
        D_801EF298[k] = 0xFF;
        func_8018C8D4(4);
        func_8002D4C8(0x5EE, 0);
        break;
    case 10:
        i = D_801EF1D4[(s16)b];
        j = i;
        if (j < 0x6F) {
            if (j == 10 && func_800D0F8C(10) != 0) {
                func_8002D4C8(0x472, 0);
                break;
            }
            r = func_800D0EC4();
            if (r == 0) {
                func_8018C8D4(2);
                func_8002D4C8(0x45F, 0);
                break;
            }
            tt = D_801EF26C;
            if (tt != 0) {
                if (D_80115126 == 0) {
                    v = D_8010EDEC[i].v * (100 - tt) / 100;
                } else {
                    v = D_8010EDEC[i].v - tt;
                }
            } else {
                v = D_8010EDEC[i].v;
            }
            if ((s16)func_8018C914(-v) != 0) {
                func_8018C8D4(3);
                func_8002D4C8(0x472, 3);
                break;
            }
            func_8002D4C8(0x5EE, 0);
            x = i;
            func_800D0F0C(r, x);
            if (x == 10) {
                func_801898E4();
            }
        } else {
            if ((s16)func_8018C914(-D_8010EDEC[j].v) != 0) {
                func_8018C8D4(3);
                func_8002D4C8(0x472, 0);
                break;
            }
            func_800D128C(i, 0);
        }
        func_8018C8D4(1);
        break;
    case 7:
    use_item:
        g = (s16)b + 0x2F;
        x = (u8)func_800291B4(g);
        if (x == 0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        t = D_8010EDEE[x].v;
        if (t == 0 || D_80115126 != D_8010EDF2[x].v) {
            func_8018C8D4(5);
            func_8002D4C8(0x472, 0);
            break;
        }
        func_8018C914(t);
        func_800D0FE0(g);
        if (x == 10) {
            func_801898E4();
        }
        func_8018C8D4(4);
        func_8002D4C8(0x5EE, 0);
        break;
    case 8:
        if (D_80115148[0] != 0) {
            goto use_item; /* backward into case 7, as the original branches (LuciDin's ruling, 27 Oct: accepted) */
        }
        m = (u8)func_800291B4((s16)b + 0x2F);
        if (m == 0) {
            func_8002D4C8(0x472, 0);
            break;
        }
        x = D_8010EDEC[m].v;
        if ((s16)x >= 0) {
            D_801EF1E0 = (s32)&D_801F10F4;
            func_8002D4C8(0x472, 0);
            break;
        }
        if (x & 0x4000) {
            t = D_801EB520[m];
        } else {
            t = D_801EB650[(D_8010EDF1[m].v - 0x14) >> 1];
        }
        D_801EF1E0 = (s32)&D_801F1090;
        func_80139A44(t, 0);
        w = &D_80115112;
        *w += 1;
        break;
    case 15:
        n = (s16)b + 0x2F;
        e = (u8)func_800291B4(n);
        x = D_8010EDEC[e].v;
        kind = D_8010EDF1[e].v;
        if (x & 0x4000) {
            id = kind;
            func_80029124(id, 1);
            func_800D0FE0(n);
            D_801EEB10 = kind - 0x1C;
            if (id == 0x1F) {
                func_80029514(100);
                func_80029124(0xEB, 1);
                func_80029124(0x91, 1);
                func_800291A0(0xCE, 1);
            }
        } else {
            func_800D0F0C(n, kind);
        }
        break;
    case 11:
        if (D_80115126 == 4) {
            if (D_80115148[0] == 0) {
                m = (s16)b;
                if (D_801EF254[m] != 0) {
                    func_8002D4C8(0x472, 0);
                    break;
                }
                if ((s16)func_8018C914(D_801C1800[m]) != 0) {
                    func_8018C8D4(3);
                    func_8002D4C8(0x472, 0);
                    break;
                }
                D_801EF1E0 = (s32)&D_801F4334;
                D_80115112++;
                func_80139A68((s16)(b + 1), 0);
                func_8002D4C8(0x5EE, 0);
                break;
            }
            h = D_801EF254[(s16)b];
            if (h == 0 || h[1] == 0) {
                func_8002D4C8(0x472, 0);
                break;
            }
            D_801EF1E0 = h[1];
            if (h[3] != 0) {
                ((void (*)())h[3])();
            }
            func_8017ADE8(D_801EF254[(s16)b][2]);
            func_8002D4C8(0x45D, 0);
            D_80115112++;
            break;
        }
        q = D_801EF254[(s16)b];
        if (q != 0) {
            D_801EF1E0 = q[1];
            func_8017ADE8(D_801EF254[(s16)b][2]);
            D_801EF274 = 0;
            if (D_801EF1E0 == (s32)&D_801F0CEC) {
                D_801EF274 = 1;
            }
            if (D_801EF1E0 == (s32)&D_801F10B0) {
                D_801EF274 = 2;
            }
            func_8002D4C8(0x45D, 0);
            D_80115112++;
            break;
        }
        func_8002D4C8(0x472, 0);
        break;
    }
    return 0;
}

s32 func_8018C89C(s32 arg0) {
    return D_801C16C4[((D_80115126 * 0xA) + (s16) arg0)];
}

s32 func_8018C8D4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_801C16C4[((D_80115126 * 0xA) + (s16) arg0)];
    D_801EF1E0 = temp_v0;
    return temp_v0;
}

s32 func_8018C914(s32 arg0) {
    s32 v;
    s32 ret;

    v = D_80078E8C + arg0;
    if (v > 99999) {
        v = 99999;
    }
    if (v >= 0) {
        D_80078E8C = v;
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

void func_8018C960(void) {
    u8 *p;
    u8 *q;

    p = (u8 *)((S32R *)&D_801151D0)->v;
    ((PTag *)p)->len = 1;
    AF(p, u32, 4) = 0xE1000015;
    ((PTag *)p)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p += 8;
    ((PolyG4 *)p)->tag = 0x08000000;
    ((PolyG4 *)p)->code = 0x3A;
    ((PolyG4 *)p)->x0 = ((PolyG4 *)p)->x2 = -0xA0;
    ((PolyG4 *)p)->x1 = ((PolyG4 *)p)->x3 = 0xA0;
    ((PolyG4 *)p)->r0 = ((PolyG4 *)p)->r1 = ((PolyG4 *)p)->g0 = ((PolyG4 *)p)->g1 = ((PolyG4 *)p)->b0 = ((PolyG4 *)p)->b1 = D_801EF1EC;
    ((PolyG4 *)p)->r2 = ((PolyG4 *)p)->r3 = ((PolyG4 *)p)->g2 = ((PolyG4 *)p)->g3 = ((PolyG4 *)p)->b2 = ((PolyG4 *)p)->b3 = D_801EF1F0;
    ((PolyG4 *)p)->y0 = ((PolyG4 *)p)->y1 = -0x78;
    ((PolyG4 *)p)->y2 = ((PolyG4 *)p)->y3 = 0x78;
    ((PTag *)p)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)p;
    p = q = p + 0x24;
    ((PTag *)q)->len = 1;
    AF(q, u32, 4) = 0xE1000240;
    ((PTag *)q)->addr = ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr;
    ((PTag *)D_800AE7BC[((U16R *)&D_800B9A02)->v].ot)->addr = (u32)q;
    p += 8;
    ((S32R *)&D_801151D0)->v = (s32)p;
}

void func_8018CB74(u8 *arg0) {
    D_801EB364[AF(arg0, u16, 2)]();
}

extern s16 D_801EB344[];

void func_8018CBB0(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_801EB344[AF(arg0, s16, 0xFC)];
    if (D_801EB344[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_801EB344[0];
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

void func_8018CC74(u8 *arg0) {
    D_801EB378[AF(arg0, u16, 2)]();
}

void func_8018CCB0(u8 *arg0) {
    s16 n;

    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 1;
    n = AF(arg0, u16, 0x70) & 7;
    AF(arg0, s16, 0xFE) = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_8018CBB0(arg0, -0x80);
        func_8018CBB0(arg0, -0x30);
        func_8018CBB0(arg0, 0x20);
        func_8018CBB0(arg0, 0x70);
        func_8018CBB0(arg0, 0xC0);
    }
    if (n >= 2) {
        func_8018CBB0(arg0, -0x58);
        func_8018CBB0(arg0, -8);
        func_8018CBB0(arg0, 0x48);
        func_8018CBB0(arg0, 0x98);
        func_8018CBB0(arg0, 0xE8);
    }
    func_8012AD50(arg0);
}

void func_8018CD98(u8 *arg0) {
    u8 *b = arg0;

    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = AF(arg0, s16, 0xFE);
        func_8018CBB0(b, 0x110);
    }
}

void func_8018CDD8(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_801EB36C, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_8018CE60(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

void func_8018CEA8(u8 *arg0) {
    s32 r;
    s32 flag;
    u16 t;

    r = func_80029504();
    flag = 0;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if ((u32)(r - 100) < 30) {
            flag = 1;
        }
        break;
    case 1:
        if ((u32)(r - 950) < 50) {
            flag = 1;
        }
        break;
    }
    if (flag != 0) {
        func_8012C658(0x21, 1 - AF(arg0, u16, 2), arg0);
        func_8012C218(arg0);
        return;
    }
    t = AF(arg0, u16, 2);
    if (t == 0) {
        AF(arg0, u16, 2) = t + 1;
    }
}

void func_8018CF54(u8 *arg0) {
    D_801EB48C[AF(arg0, u16, 2)]();
}

void func_8018CF90(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_801EB390) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_8018D838);
        func_801788B8(arg0, (s32) &func_8018D088);
    }
}

void func_8018CFF4(void) {
}

void func_8018CFFC(u8 *arg0) {
    func_80178CBC((s32) arg0, D_801EB468[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 3;
}

void func_8018D048(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

s32 *func_8018D088(u8 *arg0) {
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

extern void func_800D0F0C();
extern s32 D_801EF318[];
extern E12b D_8010EDF1[];
extern s32 D_801EB594[];
extern s32 D_801EB5A8[];
extern s32 D_801EB6D8[];
extern void func_800D0FE0();

void func_8018D0E4(void) {
    s16 i;
    s32 id;
    u8 k;
    s16 v;
    s32 t;
    u16 b;

    AF(D_801EF318, s16, 0) = 0;
    for (i = 0; i < 12; i++) {
        id = i + 0x2F;
        t = func_800291B4(id);
        k = t;
        if (k != 0) {
            v = D_8010EDEC[k].v;
            if (v < 0) {
                t = D_8010EDF1[k].v;
                b = (u8)t;
                if (v & 0x4000) {
                    AF(D_801EF318, s32, 8) = D_801EB594[k];
                    AF(D_801EF318, s32, 0xC) = D_801EB5A8[k];
                    func_80029124(b, 1);
                    func_800D0FE0(id);
                    AF(D_801EF318, s16, 0) = 2;
                    return;
                } else {
                    AF(D_801EF318, s32, 4) = D_801EB6D8[(t - 0x14) >> 1];
                    func_800D0F0C(id, b);
                    AF(D_801EF318, s16, 0) = 1;
                    return;
                }
            }
        }
    }
}
