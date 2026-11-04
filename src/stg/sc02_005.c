#include "common.h"
#include "gte.h"
#include "psyq.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_005_80194320[])();
extern void func_sc02_005_8017E97C();
extern void (*D_sc02_005_80194328[])();
extern void func_sc02_005_8017EDF8();
extern s32 func_sc02_005_8017EA74();
extern u8 D_sc02_005_801E4C50;
extern void (*D_sc02_005_8019439C[])();
extern void func_8016EDEC();
void func_sc02_005_8017F428(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_005_801943A4[])();
extern void (*D_sc02_005_80194454[])();
void func_sc02_005_8017F1DC(u8 *arg0);
extern void (*D_sc02_005_80194464[])();
void func_sc02_005_8017F358(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_005_80194470[])();
extern void (*D_sc02_005_801944E8[])();
void func_sc02_005_80180380(u8 *arg0);
extern void (*D_sc02_005_8019452C[])();
void func_sc02_005_801804D4(u8 *arg0);
extern void (*D_sc02_005_80194544[])();
void func_sc02_005_80180AA4(u8 *arg0);
extern void (*D_sc02_005_8019455C[])();
void func_sc02_005_80180C64(u8 *arg0);
extern void (*D_sc02_005_8019458C[])();
void func_sc02_005_801812DC(u8 *arg0);
extern void (*D_sc02_005_80196320[])();
extern void (*D_sc02_005_801963E8[])();
extern void (*D_sc02_005_80196470[])();
extern s32 func_sc02_005_80185D84();
extern void func_sc02_005_80181F70();
extern void (*D_sc02_005_801964BC[])();
extern void (*D_sc02_005_801964FC[])();
extern void (*D_sc02_005_801965B0[])();
extern void (*D_sc02_005_801965C0[])();
extern void (*D_sc02_005_801965D4[])();
extern void (*D_sc02_005_8019660C[])();
extern void (*D_sc02_005_801966A0[])();
extern void (*D_sc02_005_801966B8[])();
extern void (*D_sc02_005_80196760[])();
extern void (*D_sc02_005_801967C4[])();
extern void (*D_sc02_005_801967CC[])();
extern void (*D_sc02_005_80196814[])();
extern void (*D_sc02_005_80196868[])();
extern void (*D_sc02_005_801968F4[])();
extern void (*D_sc02_005_80196B80[])();
extern void (*D_sc02_005_80196B8C[])();
extern void (*D_sc02_005_80196B98[])();
extern void (*D_sc02_005_80196BA0[])();
extern void (*D_sc02_005_80196BB0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_8012C218();
extern void (*D_sc02_005_80196C9C[])();
extern void (*D_sc02_005_80196CB0[])();
extern void (*D_sc02_005_80196CC0[])();
extern void (*D_sc02_005_80196CD4[])();
extern void (*D_sc02_005_80196CDC[])();
extern void (*D_sc02_005_80196CE8[])();
extern void (*D_sc02_005_80196CF4[])();
extern void (*D_sc02_005_80196CFC[])();
extern void (*D_sc02_005_80196EA4[])();
extern s32 func_sc02_005_80190384();
extern void (*D_sc02_005_80196F00[])();

extern void func_sc02_005_80181FA8();

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern s32 func_801399F0();
extern void func_80139914();
extern void func_80165770();
extern void func_80175414();
extern s32 func_8012BEE8();
extern void func_sc02_005_80182098();
extern s32 func_sc02_005_80183174();
extern s32 func_8012AD44();
extern s32 func_sc02_005_80188A5C();
extern s32 func_80128ED8();
extern void func_801292C8();

extern s32 func_sc02_005_8017BF14();
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
extern void func_8012931C();

void func_sc02_005_8017BE9C(s32 arg0, s32 arg1) {
    func_sc02_005_8017BF14(arg0, arg1, 0xC, 0);
}

void func_sc02_005_8017BEC0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc02_005_8017BF14(arg0, arg1, (s32) arg2, 0);
}

void func_sc02_005_8017BEE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_005_8017BF14(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern s32 func_sc02_005_8018C394();
extern u8 D_sc02_005_801E491C;
extern void func_sc02_005_8018C2B0();
extern void func_800233CC();
extern u8 D_sc02_005_8019AA5C;
extern u8 D_sc02_005_801D91D4;
extern s32 func_8013C414();
extern u8 D_sc02_005_801DA5FC;
extern u8 D_sc02_005_801DB658;
extern u8 D_sc02_005_801DC180;
extern u8 D_sc02_005_801DCD04;
extern u8 D_sc02_005_801DD2D4;
extern u8 D_sc02_005_801DDD30;
extern u8 D_sc02_005_801DE674;
extern u8 D_sc02_005_801DF3B4;
extern s32 func_8013C360();
extern void func_80146C3C();
extern s32 func_sc02_005_801903DC();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();
extern void func_sc02_005_801904B8();
extern void func_80146CA0();
extern void func_8014BC44();
extern s32 func_80151664();

extern u8 D_80126FA8;
extern void func_8012A048();
extern u8 D_80126E60;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern s16 D_80126F00;
extern s32 func_8012A100();
extern void func_8012A0E0();
extern u8 D_801274E8;
extern void func_sc02_005_8017EFB4();
extern void func_80171B44();
extern u8 D_800D5A34;
extern s32 func_80171B4C();
extern s32 func_800CF854();
extern void func_80154274();
extern s32 func_8013767C();
extern s32 D_801270C8;
extern s32 func_sc02_005_8017F6A4();
extern s32 D_80126CF0;
extern u8 D_80126D6C;
extern u8 D_sc02_005_8019718C;
extern u8 D_sc02_005_801943B0;
extern u8 D_sc02_005_8019727C;
extern void func_sc02_005_8017E26C();
extern s32 func_sc02_005_8017FA3C();
extern u8 D_sc02_005_801972DC;
extern void func_sc02_005_8017E190();
extern s32 func_80012B04();
extern u8 D_sc02_005_80197540;
extern u8 D_800D5C6C;
extern u8 D_sc02_005_80197570;
extern u8 D_sc02_005_801975AC;
extern s32 GetStreamState();
extern s32 func_8001AAA0();
extern s32 func_sc02_005_8017E4F8();
extern void func_sc02_005_8017DE5C();
extern s16 D_800B9AAC;
extern void func_8014C6AC();
extern s32 func_8016EE94();
extern void func_8014C6C0();
extern s32 D_80126958;
extern s16 D_80126960;
extern s16 D_80126962;
extern s16 D_sc02_005_80194556;
extern s32 func_8014C168();
extern void func_sc02_005_8017E798();
extern s16 D_80126970;
extern void func_sc02_005_8017E898();
extern void func_sc02_005_80181270();
extern void func_sc02_005_801812B4();
extern u8 D_sc02_005_80197628;
extern void func_sc02_005_8017E8E4();
extern u8 D_800D5C00;
extern u8 D_800D6004;
extern u8 D_sc02_005_80194370;
extern s32 func_sc02_005_801816CC();
extern void func_800D1724();
extern void func_8012B23C();
extern void func_sc02_005_8017DF50();
extern s32 func_sc02_005_801838A8();
extern s32 func_sc02_005_80186F14();
extern u8 D_sc02_005_80191060;
extern s32 func_8012CBA4();
extern void func_8013C9C4();
extern s32 func_sc02_005_8018655C();
extern void func_sc02_005_80186178();
extern void func_sc02_005_80186304();
extern s32 func_8012B200();
extern s32 func_sc02_005_801862E0();
extern void func_sc02_005_80189FC4();
extern u8 D_sc02_005_80196288;
extern s32 func_8012C588();
extern s32 func_sc02_005_80189FA4();
extern void StartRumbleScript();
extern s32 func_8002AB64();
extern void (*D_sc02_005_801962C0[])();
extern void func_sc02_005_80186600();
extern void func_sc02_005_80183218();
extern void func_sc02_005_80186DE8();
extern void func_sc02_005_8018B058();
extern void func_sc02_005_8018AF58();
extern u8 D_sc02_005_80196414;
extern u16 D_sc02_005_801E43BC;
extern void func_sc02_005_80186B08();
extern void func_sc02_005_80186424();
extern u16 D_800B99D8;
extern u16 D_sc02_005_801E4BBC;
extern void (*D_sc02_005_801964A8[])();
extern void func_80132F40();
extern void func_sc02_005_80186F60();
extern void func_sc02_005_801865D0();
extern void func_sc02_005_80189E34();
extern void func_sc02_005_8018A0E4();
extern void func_sc02_005_80185DD0();
extern u8 D_sc02_005_80196208;
extern void func_sc02_005_80181900();
extern void func_sc02_005_80181F04();
extern void func_sc02_005_8017DF00();
extern void func_sc02_005_8017DF28();
extern void func_sc02_005_80181FE8();
extern s32 func_8012CBCC();
extern void func_sc02_005_801820E4();
extern void func_sc02_005_801821C8();
extern void func_sc02_005_80182284();
extern void func_sc02_005_8018415C();
extern void (*D_sc02_005_80196250[])();
extern s32 func_sc02_005_80184CA4();
extern void func_sc02_005_801856E4();
extern s32 func_8012CBF4();
extern s32 func_sc02_005_80182E04();
extern void func_sc02_005_80182EB0();
extern void (*D_sc02_005_80196274[])();
extern void func_8012AD80();
extern void func_sc02_005_80182FAC();
extern u8 D_sc02_005_8019103C;
extern s32 func_sc02_005_8018300C();
extern void func_sc02_005_801830F4();
extern s32 func_sc02_005_80183060();
extern s16 D_sc02_005_801E4398;
extern s32 func_sc02_005_80183074();
extern u8 D_80062BC0;
extern s32 D_sc02_005_801E43A4;
extern void func_sc02_005_80183160();
extern void (*D_sc02_005_801962A0[])();
extern u8 D_sc02_005_80196184;
extern u8 D_sc02_005_801961E0;
extern s32 D_sc02_005_801E448C;
extern s32 D_sc02_005_801E4490;
extern s32 func_8012C354();
extern u8 D_sc02_005_801E44E0;
extern void func_8013240C();
extern s32 func_80132784();
extern s32 func_sc02_005_80184D24();
extern s32 D_sc02_005_801E43A0;
extern void func_sc02_005_80185060();
extern void func_sc02_005_80185214();
extern void func_sc02_005_801870BC();
extern void func_sc02_005_80189F84();
extern s32 func_sc02_005_801853CC();
extern s32 func_sc02_005_801822B4();
extern s32 func_80143994();
extern void func_sc02_005_80188F38();
extern s32 func_80132EF4();
extern s32 func_8012913C();
extern s32 func_sc02_005_8018A30C();
extern void func_80129350();
extern s32 D_sc02_005_801E4A58[];
extern void func_sc02_005_8018A4C4();
extern u8 D_sc02_005_801964D4;
extern void func_8001C924();
extern s32 func_8012C658();
extern s8 D_sc02_005_801E44F7;
extern void func_sc02_005_8018AC10();
extern void func_sc02_005_80189504();
extern u8 D_sc02_005_801965C8;
extern void func_8001CC3C();
extern void func_sc02_005_801895E0();
extern u8 D_sc02_005_801921F8;
extern void func_8001CB6C();
extern u8 D_sc02_005_801967D4;
extern void func_80128D60();
extern void func_80128DB4();
extern u8 D_sc02_005_8019681C;
extern u8 D_sc02_005_80196828;
extern void func_80128EA8();
extern u8 D_sc02_005_80196B30;
extern u8 D_sc02_005_80196AE8;
extern s32 func_sc02_005_80189F44();
extern s32 func_sc02_005_8018BFBC();
extern s32 func_sc02_005_8018BFDC();
extern u8 D_sc02_005_801E4958;
extern u8 D_sc02_005_801F1988;
extern u8 D_sc02_005_801F2138;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern void func_sc02_005_8018C3C4();
extern void func_sc02_005_8017C048();
extern s32 func_sc02_005_8018C3EC();
extern void func_80016450();
extern void func_sc02_005_8018EA04();
s32 func_sc02_005_8018F414(void);
extern void func_sc02_005_80180A7C();
s32 func_sc02_005_8018F704(void);
extern u8 D_sc02_005_80196C14;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern u8 D_sc02_005_801D9044;
extern s32 func_8012D714();
extern void func_8001C97C();
extern void func_801439C0();
extern u8 D_800D387C;
extern s32 D_sc02_005_801E4C40;

extern s32 D_sc02_005_8019640C[];
extern u8 D_sc02_005_80196448;
extern s32 D_sc02_005_801BB8F4;
extern void func_8001C214();
extern s32 func_sc02_005_80184480();
extern u8 D_sc02_005_80190C0C;
extern s32 D_sc02_005_801964C4[];
extern u8 D_sc02_005_801964DC;
extern s32 D_sc02_005_801BB8F8;
extern u8 D_sc02_005_801966A8;
extern u8 D_sc02_005_801966B0;

extern void func_80029514();
extern void func_8002AED0();
extern void func_800CFBCC();
extern u8 D_sc02_005_801963D0;
extern s32 D_sc02_005_801D6D94;
extern void func_sc02_005_80185A04();
extern void func_sc02_005_801858C4();
extern void func_80132288();
extern void func_sc02_005_80186F58();
extern u8 D_sc02_005_80196DAC;
extern u8 D_sc02_005_80196DD4;
extern void func_80017254();
extern void func_800176F0();

extern s32 D_80126950;
extern void func_sc02_005_8018622C();
extern void func_sc02_005_80186F9C();

extern u8 D_sc02_005_80197300;
void func_sc02_005_80190408(void);
extern void func_sc02_005_8018A1D8();
extern s32 func_8012CE2C();
extern s32 func_sc02_005_80182998();
s32 func_sc02_005_80182918(s32 arg0);
extern s32 func_sc02_005_8018687C();
extern s32 func_sc02_005_8018675C();


void func_sc02_005_801862F0(s32 arg0);

extern s32 D_sc02_005_801E43CC;
extern s32 D_sc02_005_801E4400;

extern s16 D_80126CB6;

extern u16 D_sc02_005_801E4C52;
extern u16 D_sc02_005_801E4C54;
extern u8 D_sc02_005_801963FC;

extern s32 func_sc02_005_8018A174();
extern void func_sc02_005_8018203C();
extern s32 D_sc02_005_801E4A84;

extern s32 func_sc02_005_80184C20();
extern s32 func_sc02_005_8018AAAC();
extern u8 D_sc02_005_801961B8;
extern void *D_sc02_005_801E43DC;
extern void *D_sc02_005_801E43E0;
extern void *D_sc02_005_801E43E4;
extern void *D_sc02_005_801E43E8;
extern void *D_80126B78[];


typedef struct { s16 x, y, z, pad; } SV4;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc02_005_8017CC88();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern u16 D_801202A0;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern void func_80016714();

extern u8 D_sc02_005_801942F0[];
extern s32 func_8012C750();

s32 func_sc02_005_8017BF14(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc02_005_801942F0)[(s16) arg2];
    r = func_8012C750((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc02_005_8017BF9C(s32 arg0, s32 arg1) {
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

void func_sc02_005_8017BFF0(s32 arg0, s32 arg1, s16 arg2) {
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

void func_sc02_005_8017C048(void) {
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

void func_sc02_005_8017C0F4(u8 *arg0) {
    D_sc02_005_80194320[AF(arg0, u16, 2)]();
}

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
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
extern s16 D_sc02_005_801942EC; extern s16 D_sc02_005_801942E0; extern s16 D_sc02_005_801942D4; extern u8 D_sc02_005_801E42D0; extern u8 *func_8012C194(); extern void func_80024054(); extern void func_8001CE28(); extern s16 D_sc02_005_801E42F8; extern s16 D_sc02_005_801E4308; extern s16 D_sc02_005_801E4302; extern s16 D_sc02_005_801E42FA; extern s16 D_sc02_005_801E4312; extern s16 D_sc02_005_801E430A; extern s16 D_sc02_005_801E4336; extern s16 D_sc02_005_801E432E; extern s16 D_sc02_005_801E4346; extern s16 D_sc02_005_801E433E; extern s16 D_sc02_005_801E4360; extern s16 D_sc02_005_801E4370; extern s16 D_sc02_005_801E436A; extern s16 D_sc02_005_801E4362; extern s16 D_sc02_005_801E437A; extern s16 D_sc02_005_801E4372; extern s16 D_sc02_005_801E4364; extern s16 D_sc02_005_801E4330; extern s16 D_sc02_005_801E42FC; extern u8 D_sc02_005_801E4320; extern u8 D_sc02_005_801E4318; extern u8 D_sc02_005_801E4324; extern u8 D_sc02_005_801E431C; extern u8 D_sc02_005_801E4321; extern u8 D_sc02_005_801E4319; extern u8 D_sc02_005_801E4326; extern u8 D_sc02_005_801E4322; extern u8 D_sc02_005_801E431E; extern u8 D_sc02_005_801E431A; extern u8 D_sc02_005_801E4354; extern u8 D_sc02_005_801E434C; extern u8 D_sc02_005_801E4355; extern u8 D_sc02_005_801E434D; extern u8 D_sc02_005_801E4359; extern u8 D_sc02_005_801E4351; extern u8 D_sc02_005_801E438C; extern u8 D_sc02_005_801E4388; extern u8 D_sc02_005_801E4384; extern u8 D_sc02_005_801E4380; extern u8 D_sc02_005_801E438D; extern u8 D_sc02_005_801E4389; extern u8 D_sc02_005_801E4385; extern u8 D_sc02_005_801E4381; extern u8 D_sc02_005_801E438E; extern u8 D_sc02_005_801E438A; extern u8 D_sc02_005_801E4386; extern u8 D_sc02_005_801E4382; extern u8 D_sc02_005_801E435A; extern u8 D_sc02_005_801E4356; extern u8 D_sc02_005_801E4352; extern u8 D_sc02_005_801E434E; extern s32 D_sc02_005_801E435C; extern s32 D_sc02_005_801E4328; extern s32 D_sc02_005_801E4390;
extern s32 func_801465C0();
extern XY D_sc02_005_80196D30[];
extern u8 D_sc02_005_80196D5C[];
extern B4 D_sc02_005_80196D68[];
extern u8 D_sc02_005_80196D94;
extern B4 D_sc02_005_80196E94, D_sc02_005_80196E90, D_sc02_005_80196E60, D_sc02_005_80196E5C, D_sc02_005_80196E2C, D_sc02_005_80196E28, D_sc02_005_80196DF8, D_sc02_005_80196DF4, D_sc02_005_80196DCC;
extern void func_8001CBDC();

void func_sc02_005_8017C130(u8 *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc02_005_801942EC = 0;
    D_sc02_005_801942E0 = 0;
    D_sc02_005_801942D4 = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = func_8012C194();
        if (m == 0) return;
        func_80024054(AF(o, s32, 0xDC), &D_sc02_005_801E42D0);
        func_8001CE28(m, &D_sc02_005_801E42D0);
        AF(m, s16, 8) = AF(o, s16, 6) + 6;
        AF(m, s16, 0xA) = AF(o, s16, 0xA) + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        AF(o, u8 *, 0xD0) = m;
    }
    x1 = AF(o, s16, 6);
    D_sc02_005_801E42F8 = x1;
    D_sc02_005_801E4308 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc02_005_801E42FA = D_sc02_005_801E4302 = y1;
    D_sc02_005_801E430A = D_sc02_005_801E4312 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc02_005_801E432E = D_sc02_005_801E4336 = y2;
    D_sc02_005_801E433E = D_sc02_005_801E4346 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc02_005_801E4360 = x2 + 2;
    D_sc02_005_801E4370 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc02_005_801E4318 = D_sc02_005_801E4320 = 0xFF;
    D_sc02_005_801E431C = D_sc02_005_801E4324 = 0xFF;
    D_sc02_005_801E4319 = D_sc02_005_801E4321 = 0;
    D_sc02_005_801E4322 = D_sc02_005_801E4326 = 0;
    D_sc02_005_801E431A = D_sc02_005_801E431E = 0;
    D_sc02_005_801E434C = D_sc02_005_801E4354 = 0xFF;
    D_sc02_005_801E4362 = D_sc02_005_801E436A = y + 4;
    D_sc02_005_801E4372 = D_sc02_005_801E437A = y + 0xB;
    D_sc02_005_801E434D = D_sc02_005_801E4355 = 0xFF;
    D_sc02_005_801E4351 = D_sc02_005_801E4359 = 0xFF;
    D_sc02_005_801E4380 = D_sc02_005_801E4384 = D_sc02_005_801E4388 = D_sc02_005_801E438C = 0x40;
    D_sc02_005_801E4381 = D_sc02_005_801E4385 = D_sc02_005_801E4389 = D_sc02_005_801E438D = 0x40;
    D_sc02_005_801E4382 = D_sc02_005_801E4386 = D_sc02_005_801E438A = D_sc02_005_801E438E = 0x40;
    D_sc02_005_801E434E = D_sc02_005_801E4352 = D_sc02_005_801E4356 = D_sc02_005_801E435A = 0;
    D_sc02_005_801E42FC = D_sc02_005_801E4330 = 2;
    D_sc02_005_801E4364 = 4;
    D_sc02_005_801E4328 = D_sc02_005_801E435C = 0;
    D_sc02_005_801E4390 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) AF(o, s16, 0x70) = 0x100;
    D_sc02_005_801942EC = 2;
    AF(o, s16, 2)++;
}

extern s32 func_8012DF34();
extern s32 func_8012DEB8();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void RotTransSV();
extern u16 D_800B99DC;
extern void RotMatrix();
extern void ApplyMatrixLV();
extern SV8 D_sc02_005_801E2F00;
extern u8 D_sc02_005_80196870[];
extern s32 func_8001D074();
extern void func_8001CD9C();
extern u8 D_sc02_005_801F12E8;
extern u8 D_sc02_005_801D3230;
extern s16 D_sc02_005_801D323A;
extern B4 D_sc02_005_801E44A0;
extern B4 D_sc02_005_801E44A4;
extern B4 D_sc02_005_801E2E70;
extern B4 D_sc02_005_801E2E74;
extern s32 func_80012F74();
extern s32 D_8011506C;
extern s32 D_80115070;
extern s32 D_80115074;
extern s32 D_80115078;
extern s32 D_8011507C;
extern s32 D_80115080;
extern s32 D_80114F24;
extern s32 D_80114F28;
extern s32 D_80114F2C;
extern s32 D_80114F30;
extern s32 D_80114F34;
extern s32 D_80114F38;

extern V16 D_sc02_005_801E2F08;
extern WMtx D_800AE620;
extern void RotMatrixY();
extern u16 D_sc02_005_80195AD6[];
extern u16 D_sc02_005_80195AC6;
extern s32 func_8012C51C();
typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
extern L16 D_800A5E88[];
extern void func_80028620();
extern s16 D_sc02_005_80195B78[];
extern s16 D_sc02_005_80195B7A[];
extern s16 D_sc02_005_80195B7C[];
extern s16 D_sc02_005_80195B7E[];
extern void func_sc02_005_8018A7D8();

typedef struct { s32 a, b; } P8;
extern s32 D_sc02_005_801959EC[];
extern s32 D_sc02_005_801959F0[];
extern s32 func_80132EC4();
extern s32 func_8012A860();
extern s32 SetScript();

extern u8 D_sc02_005_80196544;
extern u8 D_sc02_005_80196578;
extern s32 D_sc02_005_80196514[];
extern s32 D_sc02_005_80196518[];
extern u16 D_sc02_005_80196534[];
extern u16 D_sc02_005_80196536[];
extern s32 func_80143970();
extern void func_8012AD50();
extern void func_8012B2CC();
extern V16 D_sc02_005_801E2F18;
extern s32 D_800A5E8C;
extern s32 D_800A5E90;
extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern s32 D_800A5EA0;
extern u8 D_800A5EA5;
extern s32 D_800A5EAC;
extern s32 D_800A5EB0;
extern u8 D_800A5EB4;
extern u8 D_800A5EB5;
extern u8 D_800A5EB6;
extern s32 rand();
extern s32 D_80126B5C;
extern s32 D_80126B60;
extern s16 D_80126B62;
extern s32 D_80126B64;
extern s16 D_80126B66;
extern void func_8012F0BC();
extern void func_8012F1A4();
extern void func_sc02_005_8018A658();
extern s16 D_80126CB8;

extern u8 *D_801270CC;
extern u8 D_sc02_005_80196C34;
extern s32 func_sc02_005_80185D6C();
extern SV8 D_sc02_005_801E2E08;
extern s32 func_80012CB8();
extern s32 func_80172358();
extern s32 func_801723C4();

extern void RotMatrixYXZ();
extern void ApplyMatrixSV();
extern u16 D_80126CB4;
extern u8 * func_sc02_005_8018ABE0();
extern SV8 D_sc02_005_80195AF4[];
extern SV8 D_sc02_005_80195AF6[];
extern void func_80132DC4();
extern s16 D_sc02_005_801E43B8;
extern s32 func_8012B864();
extern s32 func_8012B608();


extern s16 D_80126B5E;
extern SV8 D_80126C38;
extern SV8 D_80126C40;
extern s16 D_80126B9A;
extern u16 D_80126B94;

extern s32 D_800A5E9C;
extern u8 D_800A5EA4;
extern u8 D_800A5EA6;
extern u8 *D_sc02_005_801E43EC[];
extern u8 *D_sc02_005_801E43F0[];
extern u8 *D_sc02_005_801E43F4[];
extern u8 *D_sc02_005_801E43F8[];
extern u16 D_sc02_005_80195E44;
extern u16 D_sc02_005_80195E78;
extern u16 D_sc02_005_80195EAC;
extern u16 D_sc02_005_80195EE0;
extern void func_sc02_005_80187348();
extern void func_sc02_005_80187280();
extern V16 D_sc02_005_80196874[];
extern V16 D_sc02_005_80196880[];

extern void func_sc02_005_80180C3C();
extern void func_sc02_005_8018DEB8();
extern u16 D_sc02_005_801944F8[];
extern u8 D_sc02_005_801944F2[];
extern u16 D_sc02_005_8019451C;
extern u8 *D_sc02_005_801E43D0[];
extern void func_sc02_005_801876B0();
extern void func_sc02_005_80187664();
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
extern S20 D_sc02_005_801944FC[];
extern s16 D_80126974;

extern u16 D_sc02_005_801E43C8;
extern s16 D_sc02_005_8019633C;
extern s16 D_sc02_005_8019633E;
extern s16 D_sc02_005_80196340;
extern s16 D_sc02_005_80196342;
extern s16 D_sc02_005_80196344;
extern s16 D_sc02_005_80196346;

extern SV8 D_sc02_005_801E2F30;
extern V16 D_sc02_005_801E2F38;
extern void func_8001C1E4();
extern u8 D_800636C8;
extern u8 D_sc02_005_801D852C;
extern u8 D_sc02_005_801D8B8C;
extern s16 D_80126B6A;
extern s16 D_80126B72;

extern void func_8012B14C();
extern u8 *D_sc02_005_80196BBC;
extern u8 D_sc02_005_801D91CC;

extern void func_sc02_005_8018A47C();
extern u16 D_sc02_005_801964F4;
extern u16 D_sc02_005_801964F6;
extern s32 func_80135260();
extern void FaceHelper();
extern WMtx D_sc02_005_801E44F8[][4];
extern u8 D_sc02_005_801E44F0[];

extern s32 func_80012C6C();
extern s32 func_80012ABC();
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern void func_8012F14C();
extern void func_8001C2C4();
extern u16 D_sc02_005_80195B4C[];
extern u16 D_sc02_005_80195B68[];
extern u8 D_sc02_005_80195D74[];
extern u8 D_sc02_005_80196490;
typedef struct { s32 a, b; } W2;
extern s32 D_sc02_005_801E4474[];
extern s32 D_sc02_005_801E4418[];
extern W2 D_sc02_005_801E4AA0[];
extern W2 D_sc02_005_801E4AA4[];
extern u8 D_80063548;
extern void func_8012B21C();

extern s32 D_sc02_005_801B82F4[];
extern s32 D_sc02_005_801BB8DC[];
extern u8 D_sc02_005_80196150;
extern u8 D_sc02_005_80196218;
extern s16 D_sc02_005_801E43B4;
extern u16 D_sc02_005_80195B24;
extern s16 D_sc02_005_801E439C;
extern s32 func_sc02_005_80183C7C();
extern void func_sc02_005_801871E4();
extern void func_sc02_005_80185E54();
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_8012BE54();
extern void VectorNormalSS();

extern void func_sc02_005_80186C70();
extern u8 D_80062BDC;
extern u8 D_sc02_005_80195B2C;
extern void func_sc02_005_80186C0C();

extern u16 D_sc02_005_80195ACC;
extern u16 D_sc02_005_801E43A8;
extern u16 D_sc02_005_801E43B0;
extern void func_sc02_005_80184A34();

extern SV8 D_sc02_005_801965DC[];
extern SV8 D_sc02_005_801965DE[];
extern SV8 D_sc02_005_801965E0[];
extern SV8 D_sc02_005_801965E2[];
extern s32 func_sc02_005_8018B300();
extern s32 D_sc02_005_801E7ECC[];
extern s32 D_sc02_005_801EA378[];
extern s32 D_sc02_005_801EC6FC[];
extern s32 D_sc02_005_801EEA80[];
extern U12 D_sc02_005_801E7F24[];
extern U12 D_sc02_005_801EEAAC[];
extern u8 D_sc02_005_80196C00;
extern s32 D_sc02_005_801E4998[][2];
extern s32 D_sc02_005_801E499C[][2];
extern void func_8001D0E8();

extern void (*D_sc02_005_801962F8[])();
extern s16 D_sc02_005_80195AD2;
extern XY D_sc02_005_80195AD0[];
extern s32 func_sc02_005_80185E80();
extern void func_sc02_005_80182810();
extern void func_sc02_005_80182740();
extern void func_sc02_005_801827A8();
extern s32 func_sc02_005_801828D8();
extern u8 D_sc02_005_801E2F60;
extern u8 D_sc02_005_801E2F64;
extern u8 D_sc02_005_801E4918;
extern void func_8001CD50();
extern u8 D_sc02_005_801E2F28;

typedef struct { s32 w[4]; } W16;

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
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
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
extern u8 D_sc02_005_801E2F48;

extern void func_80149020();
extern void func_80146DE8();
extern void func_80147F50();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
extern s32 func_801535F4();
extern void func_80159B3C();
extern void func_8015BF48();
extern void func_80146A6C();
extern void func_80165718();

extern void func_sc02_005_8018A3B4();
extern s32 func_sc02_005_8018ACB4();
extern u8 D_sc02_005_80195B3C;
extern void func_sc02_005_80186BB8();
typedef struct { s16 a; u16 b; } P4;
extern P4 *D_sc02_005_801959E0[];
extern s32 func_sc02_005_801860F4();
extern s32 func_sc02_005_8018AD20();
extern s32 func_sc02_005_8018AC48();
extern s32 func_sc02_005_80186144();
extern s32 D_sc02_005_801F01D4[];
extern U12 D_sc02_005_801F0220[];

extern s16 D_sc02_005_80195AEC;
extern s16 D_sc02_005_80195AE0[];
extern u16 D_sc02_005_80195ADC[];
extern s32 D_sc02_005_80195B1C[];
extern u16 D_sc02_005_801E43AC;
extern void func_sc02_005_8018592C();
typedef struct { u8 pad[6]; u16 f6; } OH06;
typedef struct { u8 pad[0x12]; s16 f12; } OH12;
typedef struct { u8 pad[0x76]; s16 f76; } OH76;

extern void func_80175454();
typedef struct { SV8 a; u8 rest[12]; } E20;
extern E20 D_sc02_005_801944F4[];
extern s32 func_sc02_005_80187508();
extern s16 D_sc02_005_80195ACE;
extern s16 D_sc02_005_80195AC4[];

typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

void func_sc02_005_8017C41C(u8 *arg0) {
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
            ((XY *)&D_sc02_005_801942D4)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            if (((XY *)&D_sc02_005_801942D4)->x == 0 && tgt != 0) {
                ((XY *)&D_sc02_005_801942D4)->x = 1;
            }
        } else {
            s16 t = AF(arg0, s16, 0x10A);
            if (cur < t) {
                AF(arg0, s16, 0x108) = cur + (max * 3) / AF(arg0, s16, 0x70);
                if (tgt < AF(arg0, s16, 0x108)) {
                    AF(arg0, s16, 0x108) = max;
                }
                ((XY *)&D_sc02_005_801942D4)->x = (AF(arg0, s16, 0x108) * AF(arg0, s16, 0x70)) / max;
            } else if (t < max) {
                AF(arg0, s16, 0x10A) = t + (max * 3) / AF(arg0, s16, 0x70);
                if (max < AF(arg0, s16, 0x10A)) {
                    AF(arg0, s16, 0x10A) = max;
                }
                D_sc02_005_801942E0 = (AF(arg0, s16, 0x10A) * AF(arg0, s16, 0x70)) / max;
                D_sc02_005_801942EC = D_sc02_005_801942E0 + 2;
            }
        }
    }
    if (AF(arg0, s16, 0xFC) == 0xB) {
        u8 c = (AF(arg0, s32, 0x1C)++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[2].g = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[0].g = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[3].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[2].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[1].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[0].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[3].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[2].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[1].b = c;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[0].b = c;
    }
    half = AF(arg0, s16, 0x70) >> 1;
    n = ((XY *)&D_sc02_005_801942D4)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].p[1].x = ((QuadArg *)&D_sc02_005_801E42F8)[0].p[0].x + n;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].p[3].x = ((QuadArg *)&D_sc02_005_801E42F8)[0].p[1].x - 4;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[3].g = v;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc02_005_801E42F8)[0].c[1].g;
        *g = ((QuadArg *)&D_sc02_005_801E42F8)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc02_005_801E42F8)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].p[0].x = x;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].p[1].x = ((QuadArg *)&D_sc02_005_801E42F8)[0].p[0].x + n;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].p[1].x = x;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].p[2].x = xm;
        ((QuadArg *)&D_sc02_005_801E42F8)[0].p[3].x = xm;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].p[3].x = ((QuadArg *)&D_sc02_005_801E42F8)[1].p[1].x - 4;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[3].r = -v;
        ((QuadArg *)&D_sc02_005_801E42F8)[1].c[1].r = -v;
        func_800176F0(&((QuadArg *)&D_sc02_005_801E42F8)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc02_005_801E42F8)[2].p[3].x;
        ((QuadArg *)&D_sc02_005_801E42F8)[2].p[1].x = ((QuadArg *)&D_sc02_005_801E42F8)[2].p[0].x + D_sc02_005_801942E0;
        *p = ((QuadArg *)&D_sc02_005_801E42F8)[2].p[1].x - 4;
    }
    func_800176F0(&((QuadArg *)&D_sc02_005_801E42F8)[0]);
    func_800176F0(&((QuadArg *)&D_sc02_005_801E42F8)[2]);
}

void func_sc02_005_8017C8B0(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc02_005_8017CC88(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc02_005_8017CC88(&v[i], &w4[i]);
        if (func_sc02_005_8017CD2C(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc02_005_8017CF24(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc02_005_8017CC88(&v[i], &w4[i]);
            func_sc02_005_8017CD2C(&c, &w4[i], &p[i], arg2);
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

void func_sc02_005_8017CC88(SV8 *zero, SV8 *out) {
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

s32 func_sc02_005_8017CD2C(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc02_005_8017CF24(s32 arg0, s32 arg1) {
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

typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

extern u8 D_sc02_005_801E2DC8;
extern s32 func_80171D78();
extern u8 D_sc02_005_80196FE8;

extern void func_801439FC();

extern u8 D_sc02_005_801E2E10;
extern u8 D_sc02_005_801975FC;

extern s16 D_sc02_005_80195AF8[];

extern u8 D_sc02_005_80196328;
extern u8 D_sc02_005_801E2EF0;
void func_sc02_005_8018B16C(u8 *o, s32 n, u16 *v);
extern s32 func_80132E6C();
extern s8 D_sc02_005_80195ABC[];

s32 func_sc02_005_80187560(u8 *o, u8 *p, s32 h);
extern s16 D_801274EC;
void func_sc02_005_80185B38(u8 *o);
s32 func_sc02_005_801804AC(s32 arg0, s32 arg1);
extern void func_sc02_005_80182E78();
void func_sc02_005_80182DCC(s32 arg0);

extern u8 D_sc02_005_801E2DE8;
extern s32 func_80012DBC();
extern u16 D_sc02_005_80196B60;
extern u16 D_sc02_005_80196B62;
extern u8 D_sc02_005_801E2E00;
extern u8 D_sc02_005_80194554;
void func_sc02_005_8017E6FC(void);

extern s16 D_801274EA;
extern SV8 D_sc02_005_801E2E9C;
extern SV8 D_sc02_005_801E2EA4;
extern void func_sc02_005_80185858();
extern u8 D_80062C14;
extern void func_801511E0();
extern u8 D_sc02_005_80196EB0;
extern void func_801477E8();
extern void func_80147324();

void func_sc02_005_80181F68(s32 arg0, s32 arg1);
extern s32 D_sc02_005_801E43C0[];
extern s32 D_sc02_005_801E43C4;
extern void func_sc02_005_8018C598();

extern u8 D_sc02_005_801E2DD0;
extern void func_80142454();
void func_sc02_005_801844D4(u8 *o);
extern s32 func_sc02_005_80185A88();
extern void func_8016AA50();
s32 func_sc02_005_801869E0(s32 arg0);

extern u8 D_sc02_005_801E2DE0;
extern s32 func_801289F0();
extern u8 D_800D5D4C;
extern u8 D_sc02_005_801E2DF0;
extern u8 D_sc02_005_801975C8;
extern u8 D_sc02_005_801E2DF8;
extern void func_sc02_005_8018D488();
extern u8 D_sc02_005_801E2E18;
extern u8 D_800D488C;
extern s16 D_sc02_005_801944F0[];
extern u16 D_80126614;
extern s32 func_8012C890();
extern s32 D_sc02_005_801BD9D4[];
extern SV8 D_sc02_005_801961BE[];
extern SV8 D_sc02_005_801961E6[];
extern void func_sc02_005_80186A04();

extern u8 D_sc02_005_801BDCD0;
extern u8 D_sc02_005_80196768;
extern u8 D_sc02_005_80196774;

void func_sc02_005_8018C204(u8 *o);
void func_sc02_005_8018C454(u8 *o);
s32 func_sc02_005_8018C0C8(s32 arg0);
extern u8 D_sc02_005_80197244;
void func_sc02_005_8018A968(u8 *o);
s32 func_sc02_005_8018F444(void);
s32 func_sc02_005_8018F474(void);
s32 func_sc02_005_8018F4A4(void);
s32 func_sc02_005_8018F4D4(void);
s32 func_sc02_005_8018F504(void);
s32 func_sc02_005_8018F534(void);
s32 func_sc02_005_8018F564(void);
s32 func_sc02_005_8018F594(void);
extern u8 D_sc02_005_80196C24;
void func_sc02_005_8018F2C4(u8 *o);

extern u8 D_sc02_005_801E2F50;
extern u8 D_sc02_005_801E2F54;
extern u8 D_sc02_005_80196BEC;
extern void func_80015978();
extern s32 func_80013294();
extern u8 D_800D5904;
extern u8 D_sc02_005_80196614;
extern u8 D_sc02_005_80196660;
extern u8 D_sc02_005_80196620;
extern u8 D_sc02_005_80196348;
extern u8 D_sc02_005_8019637C;
extern u8 D_sc02_005_801963B8;
void func_sc02_005_80183D54(u8 *o);

extern s32 D_sc02_005_801E44EC;
void func_sc02_005_80183FCC(u8 *o);
extern u8 D_sc02_005_80196338;
extern void func_8001CA88();
extern void func_sc02_005_8018BDD0();
void func_sc02_005_8018C008(u8 *o);
extern u16 D_sc02_005_80195B4A[];
extern u8 D_sc02_005_80195B64[];
extern u8 D_sc02_005_801E2EF8;
extern V4 D_sc02_005_801965A0;

extern u8 D_sc02_005_80195CA4[];
extern u8 D_sc02_005_801E2DC0;
extern void func_8016F094();
void func_sc02_005_8017E014(void);
void func_sc02_005_8018D43C(void);
extern u8 D_sc02_005_801E2DD8;
void func_sc02_005_8017E5CC(void);
extern void func_sc02_005_8017E0B4();
extern u8 D_sc02_005_801E495C;
extern u8 D_sc02_005_801E2F58;
extern u8 D_sc02_005_801E2F5C;
extern u8 D_sc02_005_80196710;
extern u8 D_sc02_005_801966C0;

extern u8 D_sc02_005_801D9134;
extern SV8 D_sc02_005_801E2EAC;
extern SV8 D_sc02_005_801E2EB4;
extern SV8 D_sc02_005_801E2EBC;
extern SV8 D_sc02_005_801E2EC4;
extern void func_sc02_005_8018BE88();
extern void func_8001CA1C();
extern u8 D_sc02_005_80196910;
extern u8 D_sc02_005_80196B68;
extern u8 D_sc02_005_80196B58;
extern u8 D_sc02_005_80196A60;
extern B8 D_sc02_005_801E2DB0;
extern B8 D_sc02_005_801E2DB8;

s32 func_sc02_005_801900E0(s32 arg0, s32 arg1);
s32 func_sc02_005_8018AB84(void);
extern u8 D_sc02_005_801E2D70;
extern u8 D_sc02_005_801E2D78;
extern s32 D_80126E9C;
extern s32 D_80126EA0;
extern s32 D_80126EA4;
extern s32 D_80126EA8;
extern s32 D_80126EAC;
extern s32 D_80126EB0;
extern void func_80129FF4();
extern u8 D_sc02_005_801E2D80;
extern u8 D_sc02_005_801E2D88;
extern s32 D_80126F10;
extern s32 D_80126F40;
extern s32 D_80126F44;
extern s32 D_80126F48;
extern s32 D_80126F4C;
extern s32 D_80126F50;
extern s32 D_80126F54;
extern u8 D_80126F04;
extern u8 D_sc02_005_801E2D90;
extern u8 D_sc02_005_801E2D98;
extern s32 D_80126FB4;
extern s32 D_80126FE4;
extern s32 D_80126FE8;
extern s32 D_80126FEC;
extern s32 D_80126FF0;
extern s32 D_80126FF4;
extern s32 D_80126FF8;
extern u8 D_sc02_005_801E2DA0;
extern u8 D_sc02_005_801E2DA8;
extern void func_8016F288();
extern s32 func_80172658();
extern void func_sc02_005_8017E348();
extern u8 D_sc02_005_801973D8;
extern u8 D_800D5360;
extern SV8 D_sc02_005_80195AFA[];
s32 func_sc02_005_801873FC(u8 *o);


typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u16 D_800B9A02;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc02_005_801E4A48;

void func_sc02_005_8017CF90(u8 *o) {
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
    func_sc02_005_8017C8B0(&D_sc02_005_801E4A48, &r, AF(o, s32, 0x60));
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

void func_sc02_005_8017DE5C(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x28A;
    D_80126968 = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = -0x80;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc02_005_8017E97C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017DF00(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 2);
}

void func_sc02_005_8017DF28(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 3);
}

void func_sc02_005_8017DF50(void) {
    func_8012A018((s32) func_sc02_005_8017E97C, 8);
}

void func_sc02_005_8017DF78(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x28A;
    D_80126968 = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = -0x80;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc02_005_8017E97C, 8);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E014(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x1A4;
    D_80126968 = 0x71;
    D_8012696A = -0xE3;
    D_80126976 = -0x40;
    D_8012696C = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E0B4(void) {
    SV8 a;
    SV8 b;

    *(B8 *) &a = *(B8 *) &D_sc02_005_801E2D70;
    *(B8 *) &b = *(B8 *) &D_sc02_005_801E2D78;
    D_80126E6C = 0x1F4;
    D_80126E9C = a.x;
    D_80126EA0 = a.y;
    D_80126EA4 = a.z;
    D_80126EA8 = b.x;
    D_80126EAC = b.y;
    D_80126EB0 = b.z;
    func_80129FF4();
    func_8012A094(&D_80126E60);
    func_8012A100(1);
}

void func_sc02_005_8017E190(void) {
    SV8 a;
    SV8 b;

    *(B8 *) &a = *(B8 *) &D_sc02_005_801E2D80;
    *(B8 *) &b = *(B8 *) &D_sc02_005_801E2D88;
    D_80126F10 = 0x1F4;
    D_80126F40 = a.x;
    D_80126F44 = a.y;
    D_80126F48 = a.z;
    D_80126F4C = b.x;
    D_80126F50 = b.y;
    D_80126F54 = b.z;
    func_80129FF4();
    func_8012A094(&D_80126F04);
    func_8012A100(2);
}

void func_sc02_005_8017E26C(void) {
    SV8 a;
    SV8 b;

    *(B8 *) &a = *(B8 *) &D_sc02_005_801E2D90;
    *(B8 *) &b = *(B8 *) &D_sc02_005_801E2D98;
    D_80126FB4 = 0x1F4;
    D_80126FE4 = a.x;
    D_80126FE8 = a.y;
    D_80126FEC = a.z;
    D_80126FF0 = b.x;
    D_80126FF4 = b.y;
    D_80126FF8 = b.z;
    func_80129FF4();
    func_8012A094(&D_80126FA8);
    func_8012A100(3);
}

void func_sc02_005_8017E348(void) {
    SV8 a;
    SV8 b;

    *(B8 *) &a = *(B8 *) &D_sc02_005_801E2DA0;
    *(B8 *) &b = *(B8 *) &D_sc02_005_801E2DA8;
    D_80126F10 = 0x1CC;
    D_80126F40 = a.x;
    D_80126F44 = a.y;
    D_80126F48 = a.z;
    D_80126F4C = b.x;
    D_80126F50 = b.y;
    D_80126F54 = b.z;
    func_80129FF4();
    func_8012A094(&D_80126F04);
    func_8012A100(2);
}

void func_sc02_005_8017E424(void) {
    func_8012A048((s32) &D_80126FA8, (s32) func_sc02_005_8017E97C, 6);
}

void func_sc02_005_8017E454(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_80126954 = 0x224;
    D_8012695C = 0x3A0;
    D_80126968 = 0x75;
    D_8012696A = 0x800;
    (*(s16 *)&D_8012696C) = 0;
    D_80126976 = 0;
    D_80126978 = -0x35;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1, arg2, arg3);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
    func_8012A0E0();
}

s32 func_sc02_005_8017E4F8(arg0)
    s32 arg0;
{
    D_80126E6C = 0x12C;
    D_80126E74 = 0x21C;
    D_80126E80 = -0x71;
    D_80126E82 = 0xA00;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = -0xA0;
    D_80126E92 = 0;
    func_8012A048((s32) &D_80126E60, (s32) func_sc02_005_8017E97C, 7);
    D_80126F00 = -5;
    func_8012A094((s32) &D_80126E60);
    func_sc02_005_8017E97C((s32) &D_80126E60);
    return func_8012A100(1);
}

void func_sc02_005_8017E5AC(s32 arg0) {
    func_8012A0E0(arg0);
}

void func_sc02_005_8017E5CC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E664(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x11C;
    D_8012696A = 0x71C;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E6FC(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = -0x271;
    D_8012696A = 0xC00;
    D_8012696C = 0;
    D_80126976 = 0x20;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 1);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E798(void) {
    typedef struct { s32 w[0x29]; } BlkA4;
    B8 a;
    B8 b;
    u8 *p;

    a = D_sc02_005_801E2DB0;
    b = D_sc02_005_801E2DB8;
    p = &D_80126948;
    *(BlkA4 *)&D_80126E60 = *(BlkA4 *)p;
    func_8012A018((s32)func_sc02_005_8017E97C, 4);
    AF(p, s32, 0x3C) = AF(&a, s16, 0);
    AF(p, s32, 0x40) = AF(&a, s16, 2);
    AF(p, s32, 0x44) = AF(&a, s16, 4);
    AF(p, s32, 0x48) = AF(&b, s16, 0);
    AF(p, s32, 0x4C) = AF(&b, s16, 2);
    AF(p, s32, 0x50) = AF(&b, s16, 4);
}

void func_sc02_005_8017E898(void) {
    typedef struct { s32 w[0x29]; } BlkA4;

    *(BlkA4 *)&D_80126948 = *(BlkA4 *)&D_80126E60;
}

void func_sc02_005_8017E8E4(void) {
    D_80126954 = 0x118;
    D_8012695C = 0x258;
    D_80126968 = 0x31C;
    D_8012696A = 0x400;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_005_8017E97C, 5);
    func_8012A094((s32) &D_80126948);
    func_sc02_005_8017E97C((s32) &D_80126948);
}

void func_sc02_005_8017E97C(s32 arg0) {
    D_sc02_005_80194328[AF(arg0, u8, 4)]();
}

void func_sc02_005_8017E9B8(u8 *o) {
    SV8 a;
    SV8 b;
    s32 v;

    func_80015978(func_8014C168(&D_80126B58, 0x3D) + 4, &a);
    func_80015978(&D_80126B58 + 4, &b);
    if (func_80013294(&a, &b) < 0x100) {
        v = func_80013294(&a, &b) + 0x28A;
    } else {
        v = 0x38A;
    }
    AF(o, s32, 0x14) = v;
    *(SV8 *)&D_801274E8 = a;
    func_sc02_005_8017EDF8(o, (s16 *)&D_801274E8);
}

s32 func_sc02_005_8017EA74(s32 arg0) {
    func_sc02_005_8017EDF8(arg0, (s32) &D_sc02_005_801E4C50);
}

void func_sc02_005_8017EA9C(s32 arg0) {
    func_sc02_005_8017EFB4();
    func_sc02_005_8017EDF8(arg0, (s32) &D_801274E8);
}

void func_sc02_005_8017EAD4(u8 *o) {
    u8 *p;
    func_sc02_005_8017EFB4(o);
    p = (u8 *)func_8014C168(&D_80126B58, 0x3D);
    *(u16 *)&D_801274E8 = AF(p, u16, 6);
    D_801274EC = AF(p, u16, 0xE);
    func_sc02_005_8017EDF8(o, &D_801274E8);
}

void func_sc02_005_8017EB30(void) {
}

void func_sc02_005_8017EB38(u8 *o) {
    *(s16 *)&D_sc02_005_801E4C50 = D_80126B5E;
    D_sc02_005_801E4C52 = D_80126B62;
    D_sc02_005_801E4C54 = D_80126B66;
    func_sc02_005_8017EDF8(o, &D_sc02_005_801E4C50);
}

void func_sc02_005_8017EB8C(void) {
    D_8011506C = (s16)func_80012F74((s16)D_8011506C, (s16)D_80114F24, 10, 1);
    D_80115070 = (s16)func_80012F74((s16)D_80115070, (s16)D_80114F28, 10, 1);
    D_80115074 = (s16)func_80012F74((s16)D_80115074, (s16)D_80114F2C, 10, 1);
    D_80115078 = (s16)func_80012F74((s16)D_80115078, (s16)D_80114F30, 10, 1);
    D_8011507C = (s16)func_80012F74((s16)D_8011507C, (s16)D_80114F34, 10, 1);
    D_80115080 = (s16)func_80012F74((s16)D_80115080, (s16)D_80114F38, 10, 1);
}

void func_sc02_005_8017ECAC(u8 *o) {
    s32 r;
    AF(o, u16, 0x22) = AF(o, u16, 0x1A) = (AF(o, u16, 0x1A) + AF(o, u16, 0xA0)) & 0xFFF;
    r = func_8014C168(&D_80126B58, 0x3D);
    AF(&D_801274E8, s16, 0) = AF(r, s16, 6);
    D_801274EA = AF(r, s16, 0xA);
    D_801274EC = AF(r, s16, 0xE);
    func_sc02_005_8017EDF8(o, &D_801274E8);
}

void func_sc02_005_8017ED28(u8 *o) {
    B8 a;
    B8 b;
    s32 d;
    s32 v;

    func_80015978(func_8014C168(&D_80126B58, 0x3D) + 4, &a);
    func_80015978(&D_80126B58 + 4, &b);
    d = (s16)func_80013294(&a, &b);
    if (d < 0x200) {
        v = 0x48A;
    } else if (d < 0x300) {
        v = func_80013294(&a, &b) + 0x28A;
    } else {
        v = 0x58A;
    }
    AF(o, s32, 0x14) = v;
    *(B8 *)&D_801274E8 = a;
    func_sc02_005_8017EDF8(o, &D_801274E8);
}

void func_sc02_005_8017EDF8(u8 *o, s16 *pos) {
    WMtx m;
    SV8 r;
    SV8 out;

    AF(o, s32, 0x8) = (s16)func_80012C6C(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)func_80012C6C(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = func_80012ABC(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = func_80012ABC(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = func_80012ABC(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = func_80012C6C(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = func_80012C6C(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = func_80012C6C(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + pos[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + pos[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + pos[2];
    func_80013F3C(&m);
    func_800123F0(&m, AF(o, s16, 0x1C));
    func_80012558(&m, AF(o, s16, 0x1A));
    func_800126C4(&m, AF(o, s16, 0x18));
    m.t[0] = AF(o, s16, 0x28) + pos[0];
    m.t[1] = AF(o, s16, 0x2A) + pos[1];
    m.t[2] = AF(o, s16, 0x2C) + pos[2];
    r.x = 0;
    r.y = 0;
    r.z = AF(o, s32, 0x10);
    func_8012F14C(&m, &r, &out);
    AF(o, s32, 0x3C) = out.x;
    AF(o, s32, 0x40) = out.y;
    AF(o, s32, 0x44) = out.z;
}

void func_sc02_005_8017EFB4(u8 *o) {
    u8 *p;
    s32 d;
    p = (u8 *)func_8014C168(&D_80126B58, 0x3D);
    d = (s16)(-0x802 - AF(p, s16, 0xA));
    if (d < 0) {
        d = -d;
    }
    AF(o, s32, 0x14) = d + 0x28A;
}

void func_sc02_005_8017F010(u8 *arg0) {
    D_sc02_005_8019439C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_005_8017F04C(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_005_8017F428, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_005_8017F09C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_005_8017F0C0(u8 *arg0) {
    D_sc02_005_801943A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_005_8017F0FC(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0x14;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_005_8017F118(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc02_005_8017F194(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_80029514(2);
        func_8002AED0();
        func_800CFBCC(1);
        return 1;
    }
    return 0;
}

void func_sc02_005_8017F1DC(u8 *arg0) {
    D_sc02_005_80194454[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_8017F218(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_80171B44();
}

void func_sc02_005_8017F244(s32 arg0) {
    if (func_80171B4C(arg0, 0x1E) != 0) {
        if (func_800CF854() != 0) {
            AF(arg0, u8, 0x214) = 3U;
            return;
        }
        func_80154274(arg0, (s32) &D_800D5A34);
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
        AF(arg0, s32, 0x198) = func_8013767C(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F2C4(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F320(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc02_005_8017F358(u8 *arg0) {
    D_sc02_005_80194464[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_8017F394(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
    func_80171B44();
}

void func_sc02_005_8017F3C4(s32 arg0) {
    if (func_80171B4C(arg0, 2) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F408(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_005_8017F428(u8 *arg0) {
    D_sc02_005_80194470[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_8017F464(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2DC0;
    if (func_800CF854() != 0) {
        func_8016F0E4(o);
        func_8016EDEC((s32) func_sc02_005_80180380, 0x01000000);
    } else {
        func_8016F094(o);
        *(B8 *)&D_sc02_005_801E4C50 = v;
        func_sc02_005_8017E014();
        func_sc02_005_8018D43C();
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8017F530(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2DC8;
    if (func_80171D78(o, &v) != 0) {
        AF(o, s32, 0x198) = func_8013767C(&D_sc02_005_80196FE8);
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8017F5B0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x204) = 0x20;
        D_80126968 = 0xE3;
        D_8012696A = -0x71C;
        D_80126976 = -0x20;
        D_80126978 = -0x60;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F63C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        D_801270C8 = 3;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F674(void) {
    if (D_801270C8 == 6) {
        func_sc02_005_8017F6A4();
    }
}

s32 func_sc02_005_8017F6A4(void) {
    s32 temp_v0;

    temp_v0 = func_8013767C((s32) &D_sc02_005_8019718C);
    D_80126CF0 = temp_v0;
    D_80126D6C += 1;
    return temp_v0;
}

void func_sc02_005_8017F6E8(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        D_801270C8 = 7;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F748(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2DD0;
    if (func_80171D78(o, &v) != 0) {
        D_801270C8 = 8;
        func_80142454(-0x80);
        AF(o, s32, 0x204) = 0x20;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8017F7CC(u8 *o) {
    XY a = {0, -0x40};
    B8 v;
    s32 t;

    v = *(B8 *)&D_sc02_005_801E2DD8;
    t = AF(o, s32, 0x204) - 1;
    AF(o, s32, 0x204) = t;
    if (t == -1) {
        *(B8 *)&D_sc02_005_801E4C50 = v;
        func_sc02_005_8017E5CC();
        func_sc02_005_8017E0B4();
        func_8002D4C8(0x510, 0x103F);
        D_801270C8 = 9;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8017F898(u8 *o) {
    XY v = { 0, -0x40 };

    if (D_801270C8 == 0xA) {
        func_sc02_005_8017E190();
        func_8002D4C8(0x510, 0x107F);
        func_80154274((s32) o, (s32) &D_800D5C6C);
        EndScene((s32) o);
        AF(o, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197244);
        AF(o, u8, 0x214) = (u8) (AF(o, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F924(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80154274((s32) arg0, (s32) &D_sc02_005_801943B0);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_8019727C);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017F998(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E26C();
        func_8002D4C8(0x510, 0x103F);
        D_801270C8 = 0xB;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FA0C(void) {
    if (D_801270C8 == 0xC) {
        func_sc02_005_8017FA3C();
    }
}

s32 func_sc02_005_8017FA3C(void) {
    s32 temp_v0;

    func_sc02_005_8017E190();
    func_8002D4C8(0x510, 0x107F);
    temp_v0 = func_8013767C((s32) &D_sc02_005_801972DC);
    D_80126CF0 = temp_v0;
    D_80126D6C += 1;
    return temp_v0;
}

void func_sc02_005_8017FA94(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80175414();
        func_8012A100(0);
        func_8002D4C8(0x510, 0x102F);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197300);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FB14(u8 *o) {
    if (func_801399F0(AF(o, s32, 0x198)) != 0) {
        func_80139914(AF(o, s32, 0x198));
        BeginScene((s32) o);
        AF(o, s32, 0x1F8) &= ~0x01000000;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8017FB80(u8 *o) {
    s32 *g;
    s32 s;

    g = &D_801270C8;
    s = *g;
    if (s == 0xD) {
        func_8016F288();
        if (*g == s && func_80172658(o) != 0) {
            func_sc02_005_8017E348();
            func_8002D4C8(4, 0x510);
            AF(o, s32, 0x1F8) |= 0x1000000;
            AF(o, s32, 0x198) = func_8013767C(&D_sc02_005_801973D8);
            func_80154274(o, &D_800D5360);
            AF(o, s16, 0x20C) = AF(AF(o, u8 *, 0x20), u16, 0x12);
            AF(o, s16, 0x20E) = 0;
            AF(o, s16, 0x210) = 0x100;
            EndScene(o);
            AF(o, u8, 0x214)++;
        }
    }
}

void func_sc02_005_8017FC64(u8 *o) {
    if (AF(o, u16, 0xB8) & 0x8000) {
        if (AF(o, s16, 0x20E) < 0x1000) {
            AF(o, u16, 0x210) += 10;
            AF(o, u16, 0x20E) += AF(o, u16, 0x210);
            AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0x20C) + AF(o, u16, 0x20E);
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0x20C);
            func_80175454();
            AF(o, u8, 0x214)++;
        }
    }
}

void func_sc02_005_8017FCFC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x800, 4);
    if (((temp_v0 << 0x10) == 0) && (func_801399F0(AF(arg0, s32, 0x198)) != 0)) {
        BeginScene((s32) arg0);
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E26C();
        D_801270C8 = 0xE;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc02_005_8017FDB4(u8 *arg0, s32 arg1) {
    if (D_801270C8 == 0x11) {
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197540, arg1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FE08(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2DE0;
    if (func_80171D78(o, &v) != 0) {
        if (func_801289F0() != 0) {
            func_80154274(o, &D_800D5D4C);
            EndScene(o);
            AF(o, u8, 0x214)++;
        }
    }
}

void func_sc02_005_8017FEA0(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        D_801270C8 = 0x12;
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197570);
        func_80154274((s32) arg0, (s32) &D_800D5C6C);
        EndScene((s32) arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FF2C(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene((s32) arg0);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FF8C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x204) = 0x40;
        D_8012695C = 0x190;
        D_80126968 = -0x155;
        D_80126978 = 0x20;
        D_801270C8 = 0x13;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8017FFF0(u8 *o) {
    B8 v;
    s32 t;

    v = *(B8 *)&D_sc02_005_801E2DE8;
    t = AF(o, s32, 0x204) - 1;
    AF(o, s32, 0x204) = t;
    if (t == -1) {
        D_801270C8 = 0x14;
        AF(o, s32, 0x204) = 0x40;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80180060(s32 arg0) {
    if (D_801270C8 == 0x15) {
        func_80154274(arg0, (s32) &D_800D5A34);
        EndScene(arg0);
        D_80126968 = -0x71;
        AF(arg0, s32, 0x204) = 0x12;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801800CC(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s32, 0x204) != 0) {
        if (GetStreamState() == 0) {
            temp_v0 = AF(arg0, s32, 0x204) - 1;
            AF(arg0, s32, 0x204) = temp_v0;
            if (temp_v0 == 0xE) {
                AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_801975AC);
                func_8002D4C8(0x50E, 0);
            }
        }
    } else if (func_8001AAA0(0x14) != 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018016C(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene((s32) arg0);
        func_sc02_005_801903DC(0);
        func_sc02_005_8017E4F8();
        AF(arg0, s32, 0x204) = 0xA0;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801801DC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_005_80190408();
        func_8012A100(0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180234(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2DF0;
    if (func_80171D78(o, &v) != 0) {
        D_80126974 = D_8012697A = D_8012697A; /* MATCH-TRICK: the original reloads D_8012697A and stores it back before the copy */
        AF(o, s32, 0x198) = func_8013767C(&D_sc02_005_801975C8);
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_801802CC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017DE5C();
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180328(s32 arg0) {
    func_80175414(arg0);
    D_801270C8 = 0x16;
    D_800B9AAC = 0x7FFF;
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180380(u8 *arg0) {
    D_sc02_005_801944E8[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_801803BC(u8 *o) {
    SV8 v;

    v = *(SV8 *)&D_sc02_005_801E2DF8;
    AF(o, s16, 0x6) = AF(o, s16, 0x88) = v.x;
    AF(o, s16, 0xA) = AF(o, s16, 0x8A) = v.y;
    AF(o, s16, 0xE) = AF(o, s16, 0x8C) = v.z;
    func_sc02_005_8017DE5C();
    func_sc02_005_8018D488();
    AF(o, u8, 0x214)++;
}

void func_sc02_005_80180454(s32 arg0) {
    D_801270C8 = 0x16;
    D_800B9AAC = 0x7FFF;
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

s32 func_sc02_005_801804AC(s32 arg0, s32 arg1) {
    return func_8016EE94((s32) func_sc02_005_801804D4, 0x01000000);
}

void func_sc02_005_801804D4(u8 *arg0) {
    D_sc02_005_8019452C[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80180510(u8 *o) {
    s32 *p = &D_801270C8;
    if (*p == 0x16) {
        *p = 0x17;
        AF(o, s16, 0x20C) = 0;
    } else if (*p == 0x17) {
        *p = 0x18;
        AF(o, s16, 0x20C) = 1;
    } else if (*p >= 0x18) {
        *p = 0x1E;
        AF(o, s16, 0x20C) = 2;
    }
    AF(o, u8, 0x214)++;
}

void func_sc02_005_80180574(u8 *o) {
    s16 d;
    u8 *p;

    d = func_80012B04(AF(AF(o, u8 *, 0x20), s16, 0x12), D_sc02_005_801944F0[AF(o, s16, 0x20C) * 10], 4);
    if (d == 0) {
        AF(o, u32, 0x1F8) &= ~0x01000000;
        AF(o, u8, 0x214)++;
    }
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x12) = (AF(p, u16, 0x12) + d) & 0xFFF;
}

void func_sc02_005_80180610(u8 *o) {
    u16 t;

    AF(o, u16, 0xAE) = 0x8080;
    AF(o, u16, 0xAA) &= 0x90;
    AF(o, u16, 0xAC) &= 0x90;
    if (AF(o, u16, 0) != 0xD) {
        func_80175454();
        AF(o, s32, 0x1F8) |= 0x1000000;
        func_sc02_005_8017E664();
        t = D_sc02_005_801944F4[AF(o, s16, 0x20C)].a.pad;
        ((struct { s16 v; } *)&D_80126970)->v = ((struct { s16 v; } *)&D_80126976)->v = -0x60;
        ((struct { s16 v; } *)&D_80126974)->v = ((struct { s16 v; } *)&D_8012697A)->v = -0x80;
        D_80126962 = D_8012696A = t;
        *(SV8 *)&D_sc02_005_801E4C50 = D_sc02_005_801944F4[AF(o, s16, 0x20C)].a;
        func_8014C6C0();
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_8018074C(u8 *o) {
    u8 *s = &D_80126948;
    u8 *q;
    s16 d;
    u16 a;

    q = (u8 *)func_8014C168(o, 0x3D);
    switch (AF(o, s16, 0x20C)) {
    case 0:
    case 1:
        d = D_sc02_005_801944F8[AF(o, s16, 0x20C) * 10] - AF(q, u16, 0xE);
        break;
    case 2:
        d = D_sc02_005_8019451C - AF(q, u16, 6);
        break;
    }
    if ((d < 0 ? -d : d) < 0x80) {
        func_sc02_005_8018DEB8(D_sc02_005_801944F2[AF(o, s16, 0x20C) * 20]);
        if (AF(o, s16, 0x20C) == 2) {
            func_8014C6C0();
            func_8016F0E4(o);
            func_sc02_005_80180C3C();
        } else {
            AF(s, s32, 0x10) = AF(s, s32, 0x14) = 0x640;
            a = (AF(s, u16, 0x1A) - 0x6AA) & 0xFFF;
            AF(s, u16, 0x1A) = a;
            AF(s, u16, 0x22) = a;
            AF(o, s32, 0x204) = 0x20;
            AF(o, u8, 0x214)++;
        }
    }
}

void func_sc02_005_801808B0(u8 *o) {
    if (--AF(o, s32, 0x204) == -1) {
        switch (AF(o, s16, 0x20C)) {
        case 0:
            func_sc02_005_8017DE5C();
            break;
        case 1:
            func_sc02_005_8017DF78();
            D_80126962 = D_8012696A = 0x800;
            D_80126974 = D_8012697A = D_80126970 = D_80126976 = 0;
            break;
        case 2:
            func_sc02_005_8017DE5C();
            D_80126962 = D_8012696A = 0x200;
            break;
        }
        AF(o, s16, 0x6) = AF(o, s16, 0x88) = D_sc02_005_801944FC[AF(o, s16, 0x20C)].a;
        AF(o, s16, 0xA) = AF(o, s16, 0x8A) = D_sc02_005_801944FC[AF(o, s16, 0x20C)].b;
        AF(o, s16, 0xE) = AF(o, s16, 0x8C) = D_sc02_005_801944FC[AF(o, s16, 0x20C)].c;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = D_sc02_005_801944FC[AF(o, s16, 0x20C)].d;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80180A3C(s32 arg0) {
    func_80175414(arg0);
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180A7C(void) {
    func_8016EDEC((s32) func_sc02_005_80180AA4, 0x01000000);
}

void func_sc02_005_80180AA4(u8 *arg0) {
    D_sc02_005_80194544[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80180AE0(s32 arg0) {
    func_8014C6C0(arg0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_005_80180B18(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2E00;
    if (func_80171D78(o, &v) != 0) {
        D_8012696A = 0x400;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80180B90(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400, 4);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_sc02_005_80180C04(s32 arg0) {
    func_8014C6AC();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc02_005_80180C3C(s32 arg0) {
    func_8016EDEC((s32) func_sc02_005_80180C64, 0x01000000);
}

void func_sc02_005_80180C64(u8 *arg0) {
    D_sc02_005_8019455C[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80180CA0(u8 *o) {
    *(B8 *)&D_sc02_005_801E4C50 = *(B8 *)&D_sc02_005_80194554;
    D_800B9AAC = 0xFFE;
    func_sc02_005_8017E6FC();
    AF(o, u8, 0x214)++;
}

void func_sc02_005_80180D18(s32 arg0) {
    if ((AF(func_8014C168(arg0, 0x3D), s16, 0xA) - D_sc02_005_80194556) > 0) {
        D_801270C8 = 0x1F;
        D_80126958 = 0x708;
        D_8012695C = 0x708;
        D_80126960 = 0x31C;
        D_80126968 = 0x31C;
        D_80126962 = 0x400;
        D_8012696A = 0x400;
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180DB8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_800D0C48(2, arg1);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180E08(u8 *o) {
    SV8 v;
    s32 a;
    s32 b;
    s32 c;
    s32 r;
    v = D_sc02_005_801E2E08;
    a = (s16)func_80012CB8((s16)D_80126950, 0x118, 0xA);
    b = (s16)func_80012CB8((s16)D_80126958, 0x708, 0xA);
    c = (s16)func_80012CB8(D_80126970, 0x1B8, 0xA);
    D_80126954 = D_80126950 += a;
    D_8012695C = D_80126958 += b;
    D_80126976 = D_80126970 += c;
    if ((a | b | c) == 0) {
        r = func_8014C168(o, 0x42);
        func_80172358(o, &v);
        func_801723C4(o, r);
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80180F5C(u8 *arg0) {
    if (func_8001AAA0(0x15) != 0) {
        func_8002D4C8(0x10A, 0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80180FA8(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2E10;
    if (func_80171D78(o, &v) != 0) {
        AF(o, s32, 0x198) = func_8013767C(&D_sc02_005_801975FC);
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80181028(u8 *arg0) {
    func_sc02_005_8017E798();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_005_80181060(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_sc02_005_8017E898();
        AF(arg0, s32, 0x204) = 0x30;
        func_sc02_005_80181270((s32) arg0);
        D_80126970 = 0;
        D_80126976 = 0;
        D_80126958 = 0x190;
        D_8012695C = 0x190;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801810F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        D_800B9AAC = 0x7FFF;
        AF(arg0, s16, 0xAC) = 0x80;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018112C(s32 arg0) {
    if (func_8014C168(arg0, 0x42) != 0) {
        func_sc02_005_80181270(arg0);
    }
    if (D_801270C8 == 0x20) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018118C(u8 *o) {
    u8 *s;

    s = &D_80126948;
    if (D_80126958 < 0x514) {
        D_8012695C = D_80126958 = (s16) func_80012F74((s16) D_80126958, 0x578, 4, 1);
    } else {
        D_8012695C = D_80126958 = (s16) func_80012F74((s16) D_80126958, 0x708, 10, 1);
    }
    if (AF(s, s32, 0x10) >= 0x6A4) {
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80181238(s32 arg0) {
    if (D_801270C8 == 0x22) {
        func_8016F0E4(arg0);
        func_sc02_005_801812B4();
    }
}

void func_sc02_005_80181270(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_8014C168(arg0, 0x42);
    (*(s16 *)&D_sc02_005_801E4C50) = AF(temp_v0, u16, 6);
    D_sc02_005_801E4C52 = AF(temp_v0, u16, 0xA);
    D_sc02_005_801E4C54 = AF(temp_v0, u16, 0xE);
}

void func_sc02_005_801812B4(void) {
    func_8016EDEC((s32) func_sc02_005_801812DC, 0x01000000);
}

void func_sc02_005_801812DC(u8 *arg0) {
    D_sc02_005_8019458C[AF(arg0, u8, 0x214)]();
}

void func_sc02_005_80181318(u8 *arg0) {
    AF(arg0, s32, 0x204) = 0x20;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_005_80181330(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x10B, 0);
        AF(arg0, s32, 0x204) = 0x10;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_80181388(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc02_005_8017E8E4();
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc02_005_80197628);
        AF(arg0, s32, 0x200) = 0xDC;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801813F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_8018141C(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2E18;
    AF(o, s32, 0x208) = 0x160000;
    AF(o, u8, 0x20C) = 8;
    AF(o, s32, 0x204) = -0xC000;
    AF(o, u8, 0x20D) = 3;
    func_80154274(o, &D_800D488C);
    EndScene(o);
    AF(o, u8, 0x214)++;
}

void func_sc02_005_801814B4(u8 *o) {
    u8 c;

    c = AF(o, u8, 0x20C);
    AF(o, u8, 0x20C) = c + 0xFF;
    if (c == 0) {
        AF(o, u8, 0x20C) = 0x20;
        if (AF(o, u8, 0x20D) & 1) {
            AF(o, s32, 0x204) = -0xC000;
        } else {
            AF(o, s32, 0x204) = 0xC000;
        }
        AF(o, u8, 0x20D)--;
    }
    func_sc02_005_801816CC((s32) o, AF(o, s32, 0x204));
    if (AF(o, u8, 0x20D) == 0) {
        func_80154274(o, &D_800D5904);
        StartFace(o, 2);
        AF(o, s32, 0x208) = 0x160000;
        AF(o, u8, 0x214)++;
    }
}

void func_sc02_005_80181570(s32 arg0) {
    void *temp_v1;

    func_sc02_005_801816CC(arg0, 0xC000);
    temp_v1 = AF(arg0, void *, 0x20);
    if (AF(temp_v1, s16, 0x10) < 0xC00) {
        AF(temp_v1, s16, 0x10) = 0xC00;
        func_80154274(arg0, (s32) &D_800D5C00);
        StartFaceScript(arg0, (s32) &D_800D6004);
        func_800D1724((s32) &D_sc02_005_80194370);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc02_005_801815FC(void) {
    D_80126968 = D_80126960 = func_80012DBC(D_80126960, 0x3F4, 10, 1);
    D_8012695C = D_80126958 = (s16)func_80012F74((s16)D_80126958, 0x12C, 10, 1);
}

void func_sc02_005_8018166C(s32 arg0) {
    BeginScene(arg0);
    func_8016F0E4(arg0);
}

void func_sc02_005_8018169C(u8 *arg0, s32 arg1) {
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x12) = (u16) ((AF(temp_a2, u16, 0x12) + AF(arg0, u16, 0x206)) & 0xFFF);
    AF(arg0, s32, 0x204) = (s32) (AF(arg0, s32, 0x204) - arg1);
}

s32 func_sc02_005_801816CC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x10) = (u16) ((AF(temp_a2, u16, 0x10) - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x208) + arg1;
    AF(arg0, s32, 0x208) = temp_v0;
    return temp_v0;
}

void func_sc02_005_801816FC(u8 *o) {
    s32 i;
    s32 v;
    u8 *t;
    u16 h;

    for (i = 0; i < 0x17; i++) {
        D_sc02_005_801E4418[i] = D_sc02_005_801B82F4[i];
    }
    for (i = 0; i < 0xB; i++) {
        D_sc02_005_801E4474[i] = D_sc02_005_801BB8DC[i];
    }
    if (func_8012C354(o, &D_sc02_005_80196150) == 0) {
        return;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, u8 *, 0xBC) = &D_sc02_005_80196218;
    AF(o, u8, 0x75) = 8;
    AF(o, u8, 0xC1) = 0;
    AF(o, s32, 0xB4) = 0;
    AF(o, s32, 0xC4) |= 2;
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0xE000E0;
    t = AF(o, u8 *, 0x20);
    h = AF(t, u16, 0x2C);
    D_sc02_005_801E4BBC = 0;
    D_sc02_005_801E43B4 = 0;
    D_sc02_005_801E43B8 = 0;
    D_sc02_005_801E43BC = 0;
    AF(t, u16, 0x2C) = h | 0x80;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc02_005_801961B8;
    AF(o, s16, 0xFE) = 0;
    AF(o, s32, 0xE8) = 1;
    h = D_sc02_005_80195B24;
    AF(o, s16, 0x60) = 0;
    AF(o, s16, 0xFC) = 0;
    D_sc02_005_801E4398 = D_sc02_005_801E439C = AF(o, u16, 0x76) = h;
    D_801270CC = o;
    v = func_sc02_005_80183C7C(o);
    if (v == 0) goto fail;
    AF(o, s32, 0xCC) = v;
    v = func_8012C588(0x4E, o);
    if (v == 0) goto fail;
    AF(o, s32, 0xD4) = v;
    D_sc02_005_801E4418[0] = 0x1000000;
    v = func_8012C588(0x42, o);
    if (v == 0) goto fail;
    AF(o, s32, 0xD0) = v;
    func_sc02_005_801871E4();
    D_sc02_005_801E43A0 = 0;
    if (func_sc02_005_8018692C(o) != 0) {
fail:
        func_8012CAE4(o);
        return;
    }
    D_sc02_005_801E43A4 = func_sc02_005_80188A10(o);
    func_sc02_005_8018B2DC();
    func_sc02_005_8018AA88();
    func_sc02_005_80185E54(o);
    func_sc02_005_80182D80(o);
    func_8002D4C8(0x10, 0);
}

void func_sc02_005_80181900(o)
    u8 *o;
{
    func_8012AD44(o, 3);
    func_sc02_005_80186304(o, 7, 2);
    if (AF(o, s16, 0xE0) < 0) {
        AF(o, s32, 0x1C) = 0x2F;
    } else {
        AF(o, s32, 0x1C) = 0x1F;
    }
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) -= 0x10;
    }
    func_sc02_005_801844D4(AF(o, u8 *, 0xD0));
}

void func_sc02_005_80181984(u8 *o) {
    u8 *s;
    u8 *q;
    u16 t;

    q = &D_80126B58;
    s = AF(o, u8 *, 0xD0);
    if (AF(o, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998();
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0xE0) >= 0) {
            func_sc02_005_80185D84(o);
        }
        if (AF(o, s32, 0x94) == 4 && AF(o, s16, 0x98) == 1) {
            func_8002D4C8(0x4F8, 0);
        }
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_sc02_005_80186304(o, 8, 2);
            AF(o, s32, 0xE8) &= ~1;
            func_sc02_005_80186F58(o);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 3 && AF(o, s16, 0x98) == 1) {
            AF(o, u16, 0x34)++;
            func_sc02_005_801846CC(s);
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_80186F9C(o, 0x1C);
            func_8002D4C8(0x4F0, 0);
            AF(o, u16, 0x34)++;
        }
    case 3:
        if (AF(s, u16, 2) == 4) {
            if (AF(o, s32, 0xE8) & 0x2000) {
                AF(o, s32, 0x1C) = 0x20;
            } else {
                AF(o, s32, 0x1C) = 0x40;
            }
            t = D_sc02_005_801E4BBC;
            AF(o, u16, 0x34) = 4;
            if (t == 0 && !(AF(o, s32, 0xE8) & 0x80)
                && (u16)(AF(q, u16, 6) + 0xBF) < 0x8F) {
                func_8012C588(0x5E, 0);
                AF(o, s32, 0xE8) |= 0x80;
            }
        }
        break;
    case 4:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_sc02_005_80186304(o, 9, 2);
            func_sc02_005_80184A34(s);
        }
        break;
    case 5:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_801838A8(o);
        }
        break;
    }
}

void func_sc02_005_80181BE8(u8 *o) {
    s32 t;
    if (AF(o, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            AF(o, u16, 0x34)++;
            func_sc02_005_80187070(o);
            t = AF(o, s32, 0xE8);
            AF(o, s32, 0xE8) = t & ~1;
            if (t & 0x2000) {
                AF(o, s32, 0x1C) = 0x80;
            } else {
                AF(o, s32, 0x1C) = 0x90;
            }
        } else if (AF(o, s32, 0x94) == 8 && AF(o, s16, 0x98) == 1) {
            func_8002D4C8(0x4FD, 0);
        }
        break;
    case 1:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x34)++;
            func_sc02_005_80186304(o, 0xF, 2);
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_801838A8(o);
        }
        break;
    }
}

void func_sc02_005_80181D30(u8 *o) {
    if (AF(o, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc02_005_80185D84(o) != 0) {
            func_sc02_005_80186304(o, 4, 2);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 3) {
            func_sc02_005_8018AD8C(AF(o, s16, 0xE0), 7);
            func_sc02_005_801862E0(o);
            AF(o, s32, 0x1C) = 4;
            AF(o, u16, 0x34)++;
            func_8002D4C8(0x4F5, 0);
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            func_sc02_005_801862F0((s32) o);
            AF(o, u16, 0x34)++;
            func_8002D4C8(0x4F6, 0);
        }
        break;
    case 3:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_80186304(o, 5, 2);
            AF(o, s32, 0x1C) = 0x1A;
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        if (func_8012BEE8(o) != 0) {
            func_sc02_005_80186304(o, 6, 2);
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        if (AF(o, s32, 0x94) == 9) {
            func_sc02_005_801862E0(o);
            func_sc02_005_8018ADF0(AF(o, s16, 0xE0));
            AF(o, s32, 0x1C) = 0x10;
            AF(o, u16, 0x34)++;
        }
        break;
    case 6:
        if (func_8012BEE8(o) != 0) {
            func_sc02_005_801862F0((s32) o);
            AF(o, u16, 0x34)++;
        }
        break;
    case 7:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_801838A8(o);
        }
        break;
    }
}

void func_sc02_005_80181F04(o)
    u8 *o;
{
    func_8012B200(o);
    ((P8 *)(o + 0xE8))->a &= ~1;
    {
        u16 x = AF(o, u16, 6);
        u16 z = AF(o, u16, 0xE);
        D_sc02_005_801E43A8 = x;
        D_sc02_005_801E43B0 = z;
    }
    func_8012AD44(o, 6);
    ((void (*)())func_sc02_005_80181F68)(o);
}

void func_sc02_005_80181F68(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_005_80181F70(s32 arg0) {
    func_sc02_005_80186304(arg0, 0x10, 0);
    AF(arg0, s16, 0x34) = 1;
}

void func_sc02_005_80181FA8(o)
    u8 *o;
{
    func_sc02_005_80186304(o, 0x11, 0);
    func_sc02_005_80186C70(o);
    AF(o, s16, 0x34) = 2;
}

void func_sc02_005_80181FE8(o)
    u8 *o;
{
    if (AF(o, s16, 0xE0) >= 0) {
        D_801270C8 = 0x1B;
    }
    AF(o, s32, 0x14) = 0xFFC80000;
    AF(o, s16, 0x34) = 3;
    AF(o, s32, 0x1C) = 8;
    func_8002D4C8(0x508, 0);
}

void func_sc02_005_8018203C(u8 *o) {
    func_8012B21C(o);
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = 0x10;
    } else {
        AF(o, s32, 0x1C) = 0x20;
    }
    AF(o, s16, 0x34) = 4;
    func_sc02_005_80186178(o);
    func_sc02_005_80185B38(o);
}

void func_sc02_005_80182098(s32 arg0) {
    func_sc02_005_8018622C();
    if (AF(arg0, s16, 0xE0) >= 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x400;
    }
    AF(arg0, s16, 0x34) = 5;
}

void func_sc02_005_801820E4(u8 *o) {
    s32 i;

    i = AF(o, s16, 0xE0);
    if (i >= 0) {
        D_801270C8 = D_sc02_005_80195AFA[i].x;
        D_sc02_005_801E43B4++;
        AF(o, s32, 0xE8) = (AF(o, s32, 0xE8) & ~0x400) | 0x800;
    }
    func_sc02_005_8018A1D8(o);
    func_8012B23C(o);
    func_8013C9C4(&D_sc02_005_8019103C);
    func_sc02_005_80186304(o, 0x12, 0);
    AF(o, s16, 0x34) = 6;
    AF(o, s32, 0xE8) |= 0x20;
    if (func_sc02_005_801873FC(o) != 0) {
        D_80126B96 = 0x4002;
        D_80126B98 = 10;
    }
    func_8002D4C8(0x501, 0);
}

extern void func_sc02_005_801840E8();
void func_sc02_005_801821C8(o)
    u8 *o;
{
    u32 n;

    func_sc02_005_801862E0(o);
    func_sc02_005_80186CA8(o);  /* no declaration: the file calls it with one arg before its two-arg definition */
    AF(o, s16, 0xDC)--;
    if (!(AF(o, s32, 0xE8) & 0x800) && AF(o, s16, 0x76) < 0x81) {
        if (AF(o, s16, 0xDC) != 0) {
            n = 0x10;
        } else {
            n = 0x20;
        }
    } else {
        if (AF(o, s16, 0xDC) != 0) {
            n = 0x30;
        } else {
            n = 0x60;
        }
        func_sc02_005_801840E8(AF(o, s32, 0xD4));
    }
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = n >> 1;
    } else {
        AF(o, s32, 0x1C) = n;
    }
    AF(o, s16, 0x34) = 7;
}

void func_sc02_005_80182284(s32 arg0) {
    func_sc02_005_801862F0(arg0);
    AF(arg0, s16, 0x34) = 8;
}

s32 func_sc02_005_801822B4(s32 arg0) {
    func_8012B23C(arg0);
    func_sc02_005_8017DF50();
    return func_sc02_005_801838A8(arg0);
}

void func_sc02_005_801822EC(u8 *o) {
    s32 flag;
    u8 *t;

    flag = 0;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            if (D_sc02_005_801E4BBC == 1) {
                func_sc02_005_80186304(o, 0x14, 1);
                func_sc02_005_80186C70(o);
                AF(o, u16, 0x34)++;
            } else {
                flag = 1;
            }
        }
        break;
    case 1:
        t = AF(AF(o, u8 *, 0xCC), u8 *, 0x20);
        AF(t, u16, 0x12) -= 0x55;
        AF(o, s32, 0xE8) &= ~0x20;
        if ((AF(o, s32, 0x94) & 3) == 0 && AF(o, s16, 0x98) == 1) {
            StartRumbleScript(&D_80062BDC);
            func_8002D4C8(0x4F1, 0);
            AF(o, s32, 0xE8) |= 0x20;
        }
        if (AF(o, s16, 0x98) == 0) {
            flag = 1;
            func_sc02_005_80183B0C();
            func_sc02_005_80186CA8(o);
            AF(o, s32, 0xE8) &= ~0x20;
        }
        break;
    }
    if (flag) {
        func_8012B23C(o);
        AF(o, s32, 0xE8) |= 1;
        func_sc02_005_80186304(o, 0, 0);
        if (AF(o, s32, 0xE8) & 0x2000) {
            AF(o, s32, 0x1C) = 0x10;
        } else {
            AF(o, s32, 0x1C) = 0x20;
        }
        AF(o, s32, 0x58) = (s32) &D_sc02_005_80195B2C | 0x40000000;
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 0xAE) = -1;
        func_8012AD44(o, 1);
        func_sc02_005_80186F14(o);
        AF(o, s32, 0xE8) &= ~4;
        func_sc02_005_80186C0C(o);
        func_sc02_005_80186D74();
    }
}

void func_sc02_005_801824D0(u8 *o) {
    s32 t;
    s32 n;

    if ((AF(o, s32, 0xE8) & 0x408) == 0) {
        if (AF(o, s16, 0xDC) != 0) {
            if (func_8012CBCC() != 0) {
                if (AF(o, s16, 0xDC) != 1) {
                    if (AF(o, s16, 0xDC) == 2) {
                        AF(o, s32, 0x14) = 0xFFF80000;
                    }
                } else {
                    AF(o, s32, 0x14) = 0;
                    AF(o, s32, 0x1C) = 0;
                }
                AF(o, s16, 0xDC)--;
                func_sc02_005_8018A3B4(o);
            }
        } else {
            func_8012CBCC(o);
            if ((AF(o, s32, 0x1C) & 3) == 0) {
                func_sc02_005_8018A3B4(o);
            }
            AF(o, s32, 0x1C)++;
        }
        if (D_sc02_005_801E4BBC == 1) {
            n = func_sc02_005_8018ACB4(o);
            if (n > 0) {
                func_sc02_005_8018AEB4(n, 1);
            }
        }
        if (func_sc02_005_8018675C(o) != 0) {
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
        }
    } else if (func_8012CBCC(o) != 0) {
        t = AF(o, s32, 0xE8);
        if (t & 0x400) {
            AF(o, s32, 0xE8) = t & ~1;
            func_sc02_005_80186304(o, 0xD, 2);
            func_8012AD44(o, 9);
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0xFE) = 0;
            func_sc02_005_80186CA8(o);
            AF(o, s16, 0x102) = 0xD;
        } else {
            func_8012B23C(o);
            AF(o, s32, 0xE8) &= ~1;
            func_sc02_005_80186F58(o);
            AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), s16, 0x12) = 0;
            func_sc02_005_80184C20(AF(o, s32, 0xD0));
            AF(o, s32, 0x58) = (s32) &D_sc02_005_80195B3C | 0x40000000;
            AF(o, s16, 0x5C) = 0xA00;
            AF(o, s32, 0xE8) |= 4;
            func_8012AD44(o, 8);
            func_sc02_005_80186304(o, 0x13, 2);
            func_sc02_005_80186BB8(o);
            func_sc02_005_80186D00();
            switch (D_sc02_005_801E4BBC) {
            case 1:
                func_sc02_005_801900F4();
                break;
            case 2:
                func_sc02_005_80184184(AF(o, s32, 0xD4));
                AF(o, s16, 0x5C) = 0x800;
                break;
            }
        }
        func_8002D4C8(4, 0x50F);
        func_8002D4C8(0x507, 0);
    }
}

void func_sc02_005_80182740(u8 *o) {
    AF(o, s32, 0x18) = 0;
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x10) = 0x38000;
    } else {
        AF(o, s32, 0x10) = 0x1C000;
    }
    func_sc02_005_80186304(o, 1, 0);
    AF(o, s16, 0xE0) = -1;
}

void func_sc02_005_801827A8(u8 *o) {
    AF(o, s32, 0x18) = 0;
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x10) = -0x38000;
    } else {
        AF(o, s32, 0x10) = -0x1C000;
    }
    func_sc02_005_80186304(o, 2, 0);
    AF(o, s16, 0xE0) = -1;
}

void func_sc02_005_80182810(u8 *o) {
    s32 f = AF(o, s32, 0xE8);
    s32 k;

    if (f & 0x800) {
        if (f & 0x2000) {
            AF(o, s32, 0x10) = -0x38000;
        } else {
            AF(o, s32, 0x10) = -0x1C000;
        }
        AF(o, s32, 0x18) = 0;
        AF(o, s16, 0xE0) = func_sc02_005_80186144(o, 5);
    } else {
        if (f & 0x2000) {
            AF(o, s32, 0x18) = 0x38000;
        } else {
            AF(o, s32, 0x18) = 0x1C000;
        }
        AF(o, s32, 0x10) = 0;
        AF(o, s16, 0xE0) = -1;
    }
    k = D_sc02_005_801E4BBC;
    AF(o, s32, 0xE8) |= 0x1000;
    if (k == 1) {
        func_sc02_005_80186304(o, -3, 0);
    } else {
        func_sc02_005_80186304(o, 3, 0);
    }
}

s32 func_sc02_005_801828D8(s32 arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_8012AD44(arg0, 2);
    return func_sc02_005_80186F14(arg0);
}

s32 func_sc02_005_80182918(s32 arg0) {
    s32 temp_v1;

    func_8012CBA4(arg0);
    temp_v1 = AF(arg0, s32, 0x94);
    if (((temp_v1 == 1) || (temp_v1 == 0xD)) && (AF(arg0, s16, 0x98) == 1)) {
        func_8013C9C4((s32) &D_sc02_005_80191060);
        func_8002D4C8(0x4F1, 0);
        func_8002D4C8(0x50B, 0);
    }
    return func_sc02_005_8018655C(arg0);
}

s32 func_sc02_005_80182998(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    s16 var_v0;
    s32 temp_a0;
    s32 temp_v0;

    func_8012B23C(arg0, arg1);
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_sc02_005_80186F58(arg0);
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s16, 0x12) = 0;
    func_sc02_005_80184C20(AF(arg0, s32, 0xD0));
    func_sc02_005_8018AAAC();
    func_8012AD44(arg0, 0xB);
    if (AF(arg0, s32, 0xE8) & 0x1000) {
        AF(arg0, s16, 0x104) = (s16) AF(arg0, s32, 0x1C);
    }
    temp_a0 = AF(arg0, s32, 0xE8);
    if ((temp_a0 & 0x60000) == 0x60000) {
        func_sc02_005_80186304(arg0, 0x19, 2);
        var_v0 = 2;
        goto block_7;
    }
    if (temp_a0 & 0x20000) {
        temp_v0 = ((s32 (*)())func_sc02_005_80186304)(arg0, 0x15, 2);
        AF(arg0, s16, 0x34) = 0;
        return temp_v0;
    }
    func_sc02_005_80186304(arg0, 0x17, 2);
    var_v0 = 1;
block_7:
    AF(arg0, s16, 0x34) = var_v0;
    return (s32) var_v0;
}

void func_sc02_005_80182A8C(u8 *o) {
    s32 e;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_80186BB8(o);
            AF(o, s16, 0x34) = 3;
            if (AF(o, s32, 0xE8) & 0x40000) {
                func_sc02_005_80186304(o, 0x16, 2);
                AF(o, s16, 0x34) = 2;
            }
        }
        break;
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_80186BB8(o);
            AF(o, s16, 0x34) = 3;
            if (AF(o, s32, 0xE8) & 0x20000) {
                func_sc02_005_80186304(o, 0x18, 2);
                AF(o, s16, 0x34) = 2;
            }
        }
        break;
    case 2:
        if (AF(o, s16, 0x98) == 0) {
            func_sc02_005_80186BB8(o);
            AF(o, s16, 0x34) = 3;
            AF(o, s32, 0xE8) |= 0x80000;
        }
        break;
    case 3:
        func_sc02_005_801840E8(AF(o, s32, 0xD4));
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x34) = 4;
        break;
    case 4:
        if (func_8012BEE8(o) && D_sc02_005_801E4BBC == 0 && AF(o, s16, 0x76) == (s16)D_sc02_005_80195B24) {
            func_sc02_005_801856E4();
            AF(o, s32, 0x1C) = 0x180;
        }
        e = AF(o, s32, 0xE8);
        if (!(e & 0x80000) && AF(o, s16, 0x76) <= ((s16)AF(&D_sc02_005_80195B24, u16, D_sc02_005_801E4BBC * 2) >> 1)) {
            if (e & 0x20000) {
                func_sc02_005_80186304(o, -0x15, 1);
            } else {
                func_sc02_005_80186304(o, -0x17, 1);
            }
            AF(o, s32, 0xE8) = (AF(o, s32, 0xE8) & 0xFFF9FFFF) | 0x80000;
            func_sc02_005_8018415C(AF(o, s32, 0xD4));
            AF(o, s16, 0x34) = 5;
        }
        break;
    case 5:
        if (AF(o, s16, 0x98) == 0) {
            if (AF(o, s32, 0xE8) & 0x1000) {
                func_sc02_005_80182810(o);
                if (AF(o, s32, 0xE8) & 0x2000) {
                    AF(o, s32, 0x1C) = 0x18;
                } else {
                    AF(o, s32, 0x1C) = 0x30;
                }
                func_sc02_005_801828D8(o);
                AF(o, s32, 0xE8) &= ~0x80;
                AF(o, s32, 0x1C) = AF(o, s16, 0x104);
            } else {
                func_8012B23C(o);
                AF(o, s32, 0xE8) |= 1;
                func_sc02_005_80186304(o, 0, 0);
                if (AF(o, s32, 0xE8) & 0x2000) {
                    AF(o, s32, 0x1C) = 0x10;
                } else {
                    AF(o, s32, 0x1C) = 0x20;
                }
                AF(o, s32, 0x58) = (s32)&D_sc02_005_80195B2C | 0x40000000;
                AF(o, s16, 0x5C) = 0;
                AF(o, s16, 0xAE) = -1;
                func_8012AD44(o, 1);
                func_sc02_005_80186F14(o);
            }
            func_sc02_005_80186C0C(o);
        }
        break;
    }
}

s32 func_sc02_005_80182D80(s32 arg0) {
    func_sc02_005_80186178(arg0);
    func_8012B23C(arg0);
    func_8012AD44(arg0, 0xC);
    return ((s32 (*)())func_sc02_005_80186304)(arg0, 0, 2);
}

void func_sc02_005_80182DCC(s32 arg0) {
    func_sc02_005_8018622C();
    AF(arg0, s32, 0x14) = 0x100000;
    AF(arg0, s16, 0x34) = 1;
}

s32 func_sc02_005_80182E04(s32 arg0) {
    func_8012B23C(arg0);
    func_8013C9C4((s32) &D_sc02_005_8019103C);
    func_sc02_005_80186304(arg0, 0, 2);
    AF(arg0, s16, 0x34) = 2;
    D_801270C8 = 0x15;
    func_sc02_005_8018A1D8(arg0);
    return func_8002D4C8(0x4FB, 0);
}

void func_sc02_005_80182E78(u8 *o) {
    func_sc02_005_8018622C();
    AF(o, s16, 0xA) = -0x808;
    AF(o, s16, 0x34) = 4;
}

extern void func_sc02_005_80185764();
void func_sc02_005_80182EB0(u8 *o) {
    func_8012B23C(o);
    AF(o, s32, 0xE8) |= 1;
    func_sc02_005_80186304(o, 0, 0);
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = 0x10;
    } else {
        AF(o, s32, 0x1C) = 0x20;
    }
    AF(o, s32, 0x58) = (s32) &D_sc02_005_80195B2C | 0x40000000;
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0xAE) = -1;
    func_8012AD44(o, 1);
    func_sc02_005_80186F14((s32) o);
    func_sc02_005_8017BEE8((s32) &D_sc02_005_801E4398, (s32) &D_sc02_005_801E439C, 0, 0x60);
    D_sc02_005_801E43C0[0] = 0;
    D_sc02_005_801E43C4 = 0;
    func_sc02_005_80185764();
}

s32 func_sc02_005_80182F78(s32 arg0, s32 arg1) {
    func_8012B23C(arg0, arg1);
    AF(arg0, s32, 0x10) = 0xFFE80000;
    AF(arg0, s16, 0x34) = 0;
    return -0x180000;
}

void func_sc02_005_80182FAC(u8 *o) {
    u16 x = D_sc02_005_801E43A8;
    u16 y = D_sc02_005_801E43AC;
    u16 z = D_sc02_005_801E43B0;
    AF(o, u16, 6) = x;
    AF(o, u16, 0xA) = y;
    AF(o, u16, 0xE) = z;
    func_8012B23C(o);
    AF(o, s32, 0x10) = 0xFFE80000;
    AF(o, s16, 0x34) = 1;
}

s32 func_sc02_005_8018300C(s32 arg0) {
    func_8012B200(arg0);
    func_sc02_005_801862E0(arg0);
    AF(arg0, s16, 0x34) = 2;
    AF(arg0, s32, 0x1C) = 0x10;
    func_sc02_005_80189FC4(arg0);
    return func_8002D4C8(0x503, 0);
}

s32 func_sc02_005_80183060(s32 arg0) {
    AF(arg0, s16, 0x34) = 3;
    AF(arg0, s32, 0x1C) = 0x20;
    return 0x20;
}

s32 func_sc02_005_80183074(s32 arg0) {
    D_801270C8 = 0x20;
    AF(arg0, s16, 0x34) = 5;
    AF(arg0, s32, 0x1C) = 0x70;
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x4000);
    func_8012C588(0x75, arg0);
    func_sc02_005_80189FA4(arg0);
    StartRumbleScript((s32) &D_sc02_005_80196288);
    return func_8002D4C8(0x50D, 0);
}

void func_sc02_005_801830F4(u8 *o, s32 sh0) {
    SV8 a;
    SV8 b;

    a.x = AF(o, u16, 6) - 0x40;
    a.y = AF(o, u16, 0xA) - 0x80;
    a.z = AF(o, u16, 0xE);
    a.pad = 0x6000;
    b.x = b.z = 0x80;
    b.y = 0x40;
    func_sc02_005_8018A7D8(&D_sc02_005_801E43C8, &a, &b, (u16) sh0);
}

void func_sc02_005_80183160(s32 arg0) {
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x34) = 6;
}

s32 func_sc02_005_80183174(s32 arg0) {
    D_801270C8 = 0x22;
    AF(arg0, s16, 0x34) = 7;
    return func_8002AB64();
}

void func_sc02_005_801831A4(s32 arg0) {
    func_sc02_005_80186600();
    func_sc02_005_80183218(arg0);
    D_sc02_005_801962C0[AF(arg0, u16, 2)](arg0);
    func_sc02_005_80186DE8(arg0);
}

void func_sc02_005_80183200(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

void func_sc02_005_80183218(u8 *o) {
    s32 f;
    u16 v;

    if (AF(o, u16, 2) != 0) {
        f = AF(o, s32, 0xE8);
        if (f & 0x10) {
            v = AF(o, u16, 0x76) - AF(o, u16, 0x60);
            AF(o, u16, 0x76) = v;
            AF(o, s32, 0xE8) = f & ~0x10;
            D_sc02_005_801E4398 = v;
            if (((OH76 *)o)->f76 < 0) {
                D_sc02_005_801E4398 = 0;
                AF(o, s16, 0x76) = 0;
            }
            AF(o, s16, 0x60) = 0;
            func_8002D4C8(0x4F3, 0);
            if (AF(o, s16, 0x76) == 0) {
                AF(o, s32, 0xE8) &= 0xFFF1FFFF;
                func_sc02_005_8018415C(AF(o, s32, 0xD4));
                if (AF(o, s32, 0xE8) & 8) {
                    func_8012B23C(o);
                    AF(o, s32, 0xE8) &= ~1;
                    func_sc02_005_80186F58(o);
                    AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), s16, 0x12) = 0;
                    func_sc02_005_80184C20(AF(o, s32, 0xD0));
                    AF(o, s32, 0x58) = (s32)&D_sc02_005_80195B3C | 0x40000000;
                    AF(o, s16, 0x5C) = 0xA00;
                    AF(o, s32, 0xE8) |= 4;
                    func_8012AD44(o, 8);
                    func_sc02_005_80186304(o, 0xA, 2);
                    func_sc02_005_80186BB8(o);
                    func_sc02_005_80186D00();
                    switch (D_sc02_005_801E4BBC) {
                    case 1:
                        func_sc02_005_801900F4();
                        break;
                    case 2:
                        func_sc02_005_80184184(AF(o, s32, 0xD4));
                        AF(o, s16, 0x5C) = 0x800;
                        break;
                    }
                } else {
                    AF(o, s32, 0xE8) &= ~1;
                    AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), s16, 0x12) = 0;
                    func_sc02_005_80184C20(AF(o, s32, 0xD0));
                    func_sc02_005_8018AAAC();
                    func_sc02_005_80186F58(o);
                    func_8012B23C(o);
                    AF(o, s32, 0x18) = 0xA8000;
                    AF(o, s16, 0xDC) = 2;
                    AF(o, s32, 0x14) = 0xFFF40000;
                    func_sc02_005_80186304(o, 0xC, 3);
                    func_8012AD44(o, 0xA);
                    if (D_sc02_005_801E4BBC == 2) {
                        func_sc02_005_8017DF50();
                        if (AF(o, s32, 0xE8) & 0x800) {
                            AF(o, s32, 0x10) = -AF(o, s32, 0x18);
                            AF(o, s32, 0x18) = 0;
                            AF(o, s16, 0xE0) = func_sc02_005_80186144(o, 5);
                        }
                    }
                    func_sc02_005_80186BB8(o);
                    func_8002D4C8(0x50F, 0);
                }
            }
        }
    }
    if (AF(o, s16, 0xDE) != 0) {
        if (--AF(o, s16, 0xDE) == 0) {
            func_sc02_005_80186ADC(o);
        }
    }
}

void func_sc02_005_801834C8(u8 *o) {
    AF(o, u8, 0xC1) = 3;
    AF(o, s32, 0x1C) = 0x10;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x58) = 0;
    AF(o, u16, 0x5C) &= 0xF5FE;
    AF(o, s32, 0xE8) &= ~0x10000;
    ((s32 (*)())func_sc02_005_801804AC)(o);
    func_sc02_005_801858C4();
}

void func_sc02_005_80183524(s32 arg0, s32 arg1) {
    func_8012BEE8(arg0, arg1);
    if (AF(arg0, s32, 0x1C) == 1) {
        func_sc02_005_80186304(arg0, 0xB, 2);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_8002D4C8(0x4ED, 0);
    }
}

void func_sc02_005_80183584(u8 *o) {
    u16 k;

    func_sc02_005_80186304(o, 0xC, 2);
    func_8012B200(o);
    func_80132DC4(o, &D_sc02_005_80195ADC[D_sc02_005_801E4BBC * 4], 0x300);
    AF(o, u8, 0xC1) = 4;
    AF(o, u8, 0xC2) = 0;
    k = D_sc02_005_801E4BBC;
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (k == 0) {
        func_sc02_005_8018A968(AF(o, u8 *, 0xCC));
    }
}

void func_sc02_005_80183610(u8 *o) {
    s32 d;
    u16 t;
    s16 v;
    u8 *p;

    switch (AF(o, u8, 0xC2)) {
    case 0:
        func_8012CBF4(o);
        if (D_sc02_005_801E4BBC == 2) {
            if (AF(o, s16, 6) <= D_sc02_005_80195AEC) {
                AF(o, u8, 0xC1) = 0;
                AF(AF(o, u8 *, 0x20), s16, 0x12) = -0x400;
                func_8012AD44(o, 0xD);
                {
                    u16 x = AF(o, u16, 6);
                    u16 y = AF(o, u16, 0xA);
                    u16 z = AF(o, u16, 0xE);
                    D_sc02_005_801E43A8 = x;
                    D_sc02_005_801E43AC = y;
                    D_sc02_005_801E43B0 = z;
                }
                ((s32 (*)())func_sc02_005_80182F78)(o);
            }
        } else if (AF(o, s16, 0xE) >= D_sc02_005_80195AE0[D_sc02_005_801E4BBC * 4]) {
            func_8012B23C(o);
            d = D_sc02_005_801E4BBC;
            p = AF(o, u8 *, 0x20);
            t = D_sc02_005_80195ADC[d * 4];
            AF(o, s32, 0x18) = 0x180000;
            ((OH06 *)o)->f6 = t;
            ((OH12 *)p)->f12 = 0;
            D_sc02_005_801E43A0 |= D_sc02_005_80195B1C[d];
            AF(o, u8, 0xC2)++;
        }
        break;
    case 1:
        if (func_8012CBF4(o) & 0x2000) {
            AF(o, s32, 0x14) = 0;
            AF(o, s32, 0x4C) = -0x4000;
            AF(o, s16, 0x98) = 0;
            AF(o, s32, 0x1C) = 0;
            AF(o, u8, 0xC2)++;
            func_8002D4C8(0x507, 0);
        }
        break;
    case 2:
        func_8012CBA4(o);
        if (!(++AF(o, s32, 0x1C) & 1)) {
            func_sc02_005_8018A3B4(o);
        }
        v = AF(&D_sc02_005_80195AC6, s16, D_sc02_005_801E4BBC * 4);
        if (AF(o, s16, 0xE) >= v) {
            AF(o, s16, 0xE) = v;
            AF(o, s16, 6) = -0x80;
            AF(o, u8, 0xC2)++;
            func_8012B23C(o);
            AF(o, s32, 0x1C) = 0x10;
        }
        break;
    case 3:
        if (func_8012BEE8(o)) {
            AF(o, s32, 0xE8) &= ~1;
            func_sc02_005_80186304(o, 0xD, 2);
            func_8012AD44(o, 9);
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0xFE) = 0;
            func_sc02_005_80186CA8(o);
            func_sc02_005_8018592C(o);
        }
        break;
    }
}

s32 func_sc02_005_801838A8(u8 *o) {
    s16 n;
    s16 d;

    if (!(AF(o, s32, 0xE8) & 8) && AF(o, s16, 0xFE) != 0) {
        AF(o, s16, 0xFE)--;
        func_sc02_005_80182810(o);
        if (AF(o, s32, 0xE8) & 0x2000) {
            AF(o, s32, 0x1C) = 0x18;
        } else {
            AF(o, s32, 0x1C) = 0x30;
        }
        func_sc02_005_801828D8(o);
        AF(o, s32, 0xE8) &= ~0x80;
        return;
    }
    n = func_sc02_005_80185E80(o);
    if (n != 0) {
        D_sc02_005_801962F8[n](o);
        return;
    }
    if (D_sc02_005_801E4BBC == 0) {
        d = AF(o, u16, 6) - D_80126CB4;
        AF(o, s32, 0x10) = 0;
        if (d < -0x80 && AF(o, s16, 6) < D_sc02_005_80195AD2) {
            func_sc02_005_80182740(o);
            if (AF(o, s32, 0xE8) & 0x2000) {
                AF(o, s32, 0x1C) = 0x18;
            } else {
                AF(o, s32, 0x1C) = 0x30;
            }
            func_sc02_005_801828D8(o);
            return;
        }
        if (d > 0x80 && D_sc02_005_80195AD0[D_sc02_005_801E4BBC].x < AF(o, s16, 6)) {
            func_sc02_005_801827A8(o);
            if (AF(o, s32, 0xE8) & 0x2000) {
                AF(o, s32, 0x1C) = 0x18;
            } else {
                AF(o, s32, 0x1C) = 0x30;
            }
            func_sc02_005_801828D8(o);
            return;
        }
    }
    if (AF(o, u16, 2) == 1) {
        if (AF(o, s32, 0xE8) & 0x2000) {
            AF(o, s32, 0x1C) = 0x10;
        } else {
            AF(o, s32, 0x1C) = 0x20;
        }
        return;
    }
    func_8012B23C(o);
    AF(o, s32, 0xE8) |= 1;
    func_sc02_005_80186304(o, 0, 0);
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = 0x10;
    } else {
        AF(o, s32, 0x1C) = 0x20;
    }
    AF(o, s32, 0x58) = (s32)&D_sc02_005_80195B2C | 0x40000000;
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0xAE) = -1;
    func_8012AD44(o, 1);
    func_sc02_005_80186F14(o);
}

void func_sc02_005_80183B0C(void) {
    func_sc02_005_80187348(D_sc02_005_801E43EC[0], 9);
    func_sc02_005_80187348(D_sc02_005_801E43F0[0], 0xA);
    func_sc02_005_80187348(D_sc02_005_801E43F4[0], 0xB);
    func_sc02_005_80187348(D_sc02_005_801E43F8[0], 0xC);
    func_sc02_005_80187280(D_sc02_005_801E43DC, 5);
    func_sc02_005_80187280(D_sc02_005_801E43E0, 6);
    func_sc02_005_80187280(D_sc02_005_801E43E4, 7);
    func_sc02_005_80187280(D_sc02_005_801E43E8, 8);
    func_sc02_005_801851E0(D_sc02_005_801E43DC);
    func_sc02_005_801851E0(D_sc02_005_801E43E0);
    func_sc02_005_801851E0(D_sc02_005_801E43E4);
    func_sc02_005_801851E0(D_sc02_005_801E43E8);
    AF(D_sc02_005_801E43EC[0], u16, 0x76) = D_sc02_005_80195E44;
    AF(D_sc02_005_801E43F0[0], u16, 0x76) = D_sc02_005_80195E78;
    AF(D_sc02_005_801E43F4[0], u16, 0x76) = D_sc02_005_80195EAC;
    AF(D_sc02_005_801E43F8[0], u16, 0x76) = D_sc02_005_80195EE0;
    AF(D_sc02_005_801E43EC[0], u16, 0x5C) = 0x8400;
    AF(D_sc02_005_801E43F0[0], u16, 0x5C) = 0;
    AF(D_sc02_005_801E43F4[0], u16, 0x5C) = 0x8400;
    AF(D_sc02_005_801E43F8[0], u16, 0x5C) = 0;
}

s32 func_sc02_005_80183C7C(u8 *o) {
    SpawnDef d;
    u16 *p;
    s32 r;

    p = &D_80126614;
    if (*p != 0) {
        return 0;
    }
    d.x = d.y = d.z = 0;
    d.kind = 0x40;
    d.unk8 = d.flags = 0;
    d.unkE = 0;
    d.unk10 = 0;
    p = (u16 *)func_8012C890(&d, p, o);
    if (p != 0) {
        func_8001C1E4(AF(p, s32, 0x20), AF(o, s32, 0x20));
    }
    return (s32)p;
}

void func_sc02_005_80183D18(u8 *arg0) {
    D_sc02_005_80196320[AF(arg0, u16, 2)]();
}

void func_sc02_005_80183D54(u8 *o) {
    AF(o, u8, 0xC1) = 0;
    AF(o, s16, 0x5E) = 0;
    AF(o, s32, 0x58) = (s32) &D_sc02_005_80196328 | 0x40000000;
    func_8012AD44(o, 1);
}

void func_sc02_005_80183D90(u8 *o) {
    SV8 v;
    s32 flag;
    u8 *p;
    u16 f;
    s32 t;
    s32 a;
    s32 b;
    s32 e;

    D_sc02_005_801D323A += 0x40;
    func_80132784(o, AF(o, s32, 0x64), 0x15);
    f = AF(o, u16, 0xFC);
    if (f & 3) {
        if (f & 1) {
            if (AF(o, s16, 0xE) > 0) {
                AF(o, s16, 0xE) -= 4;
            } else {
                AF(o, u16, 0xFC) = f & 0xFFFE;
                AF(o, s16, 0xAE) = 0;
            }
        } else {
            if (AF(o, s16, 0xE) < 0x18) {
                AF(o, s16, 0xE) += 4;
            } else {
                AF(o, u16, 0xFC) = f & 0xFFFD;
            }
        }
    }
    p = AF(o, u8 *, 0xCC);
    if (p == 0) {
        return;
    }
    if (AF(o, s16, 0xE) >= 0x13 || AF(AF(o, u8 *, 0x20), s32, 4) < 0) {
        AF(p, s32, 4) |= 0x80000000;
        return;
    }
    AF(p, s32, 4) &= 0x7FFFFFFF;
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    v.x = 0;
    v.y = 0x18;
    v.z = -0x68;
    RotTransSV(&v, p + 8, &flag);
    e = AF(o, s16, 0xE);
    if (e < 8) {
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = (8 - e) * 0x240;
    } else {
        AF(p, s16, 0x1A) = 0;
        AF(p, s16, 0x18) = 0;
    }
    t = D_800B99D8;
    if (t & 0x20) {
        b = (t & 0x1F) | 0x20;
        a = (t & 0x1F) * 4 + 0x70;
    } else {
        b = 0x40 - (t & 0x1F);
        a = 0xF0 - (t & 0x1F) * 4;
    }
    if (D_sc02_005_801E4BBC == 2 && AF(AF(o, u8 *, 0x64), s16, 0x76) < 0x41) {
        if (AF(AF(o, u8 *, 0x64), s16, 0x76) < 0x19) {
            D_sc02_005_801E44A0.b[0] = a;
            D_sc02_005_801E44A0.b[1] = b;
        } else {
            D_sc02_005_801E44A0.b[0] = a;
            D_sc02_005_801E44A0.b[1] = a;
        }
    } else {
        D_sc02_005_801E44A0.b[0] = b;
        D_sc02_005_801E44A0.b[1] = a;
    }
}

void func_sc02_005_80183FCC(u8 *o) {
    u8 *p;
    func_8001C924(AF(o, u8 *, 0x20), &D_sc02_005_801F12E8);
    AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc02_005_801D3230;
    D_sc02_005_801D323A = 0;
    AF(o, s16, 0xE) = 0x18;
    if (AF(o, u16, 0xFC) & 1) {
        func_sc02_005_801840E8(o);
    }
    func_80132784(o, AF(o, s32, 0x64), 0x15);
    func_800233CC(&D_sc02_005_801E44A0, 0x28);
    D_sc02_005_801E44A0 = D_sc02_005_801E2E70;
    D_sc02_005_801E44A4 = D_sc02_005_801E2E74;
    p = (u8 *)func_8001D074(0x7E, 0x100);
    AF(o, u8 *, 0xCC) = p;
    if (p != 0) {
        func_8001CD9C(p, &D_sc02_005_801E44A0);
        AF(p, u16, 0x2C) = 0xC010;
        AF(p, u32, 4) |= 0xD0000000;
    }
}

void func_sc02_005_801840E8(s32 arg0) {
    if (AF(AF(arg0, void *, 0x64), s32, 0xE8) & 2) {
        if (AF(arg0, s16, 0xE) == 0x18) {
            AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 1);
            func_8002D4C8(0x50A, 0);
        }
    } else {
        AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 1);
    }
}

void func_sc02_005_8018415C(s32 arg0) {
    if (AF(arg0, s16, 0xE) == 0) {
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) | 2);
    }
}

s32 func_sc02_005_80184184(s32 arg0) {
    s16 *temp_v1;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s32, 0x1C) = 0x18;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    temp_v1 = AF(arg0, s16 *, 0xCC);
    AF(arg0, s16, 2) = 4;
    if (temp_v1 != NULL) {
        *temp_v1 = 0;
    }
    return func_8002D4C8(0x509, 0);
}

void func_sc02_005_801841E0(u8 *o) {
    SV8 a;
    SV8 b;

    if (AF(o, u16, 0x34) == 0) {
        if (func_8012BEE8() != 0) {
            AF(o, u16, 0x34)++;
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFFE;
            func_80132784(o, AF(o, s32, 0x64), 0x15);
            a.x = AF(AF(o, u8 *, 0x20), s32, 0x48) + 0x70;
            a.y = AF(AF(o, u8 *, 0x20), s32, 0x4C) - 0x10;
            a.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            a.pad = 0x3000;
            b.x = (D_sc02_005_8019633E - D_sc02_005_8019633C) >> 1;
            b.y = (D_sc02_005_80196342 - D_sc02_005_80196340) >> 1;
            b.z = (D_sc02_005_80196346 - D_sc02_005_80196344) >> 1;
            func_sc02_005_8018A7D8(&D_sc02_005_801E43C8, &a, &b, 0);
            if ((D_sc02_005_801E43C8 & 3) == 0) {
                func_8002D4C8(0x4F4, 0);
            }
        }
    }
}

void func_sc02_005_8018431C(u8 *arg0) {
    D_sc02_005_801963E8[AF(arg0, u16, 2)]();
}

void func_sc02_005_80184358(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    if (AF(AF(arg0, void *, 0x64), s32, 0xE8) & 2) {
        AF(arg0, u8, 0xC1) = 1;
        AF(arg0, s32, 0x1C) = 8;
        func_sc02_005_80185A04((s32) arg0, (s32) AF(arg0, void *, 0x64), (s32) AF(arg0, s16, 0x60));
        func_sc02_005_801858C4();
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0xAE) = -1;
    func_8012AD44((s32) arg0, 3, arg2);
    func_80132288((s32) &D_sc02_005_801E44E0, (s32) &D_sc02_005_801963D0, D_sc02_005_801D6D94);
    func_sc02_005_801858C4();
    func_8002D4C8(0x4F2, 0);
}

void func_sc02_005_80184404(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), s32, 0xE8) & 2) {
        func_80132784((s32) o, AF(o, s32, 0x64), 0x15);
    } else {
        func_8013240C((s32) &D_sc02_005_801E44E0, AF(o, s32, 0x64));
        func_80132784((s32) o, AF(o, s32, 0x64), 0);
    }
    if (func_8012BEE8(o) != 0) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
    }
}

s32 func_sc02_005_80184480(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32 *, 0x58) = &D_sc02_005_801963FC;
    AF(arg0, u16, 0x5C) = 0x8C00;
    func_8012AD44(arg0, 1);
    temp_v0 = func_8012B200(arg0);
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    return temp_v0;
}

void func_sc02_005_801844D4(u8 *o) {
    u8 *r;

    func_8012AD44(o, 2);
    AF(o, s16, 0xFC) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + 0x200;
    AF(o, s16, 0xFE) = 0x10;
    r = (u8 *)func_8012C658(0x53, 6, o);
    AF(o, u8 *, 0xCC) = r;
    if (r != 0) {
        AF(r, s32, 0xCC) = AF(AF(o, u8 *, 0x64), s32, 0xCC);
    }
}

void func_sc02_005_8018454C(u8 *o) {
    WMtx m;
    SV4 v;
    V4 r;

    m = D_800AE620;
    func_80132784(o, AF(AF(o, u8 *, 0x64), s32, 0xCC), 6);
    if (AF(o, u16, 0x34) == 0) {
        if (AF(o, s16, 0xFE) < 0xA0) {
            AF(o, s16, 0xFE) += 5;
        } else {
            AF(o, u16, 0x34)++;
        }
    }
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) - 0x100) & 0xFFF;
    RotMatrixY(AF(o, s16, 0xFC), &m);
    v.x = v.y = 0;
    v.z = AF(o, s16, 0xFE);
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stlvnl(&r);
    AF(AF(o, u8 *, 0x20), s32, 0x48) += r.x;
    AF(AF(o, u8 *, 0x20), s32, 0x4C) += r.y;
    AF(AF(o, u8 *, 0x20), s32, 0x50) += r.z;
}

void func_sc02_005_801846CC(u8 *o) {
    SV8 v;
    u8 unused[8];
    u8 *t;

    AF(o, s16, 0x100) = AF(AF(o, u8 *, 0x64), s16, 0xE0);
    AF(o, s16, 0x6) = AF(AF(o, u8 *, 0x20), s32, 0x48);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
    if (AF(o, s16, 0x100) < 0) {
        v.x = D_80126CB4;
        v.y = AF(AF(o, u8 *, 0x64), s16, 0xA);
        v.z = D_80126CB8;
    } else if (D_sc02_005_801E4BBC == 1) {
        t = func_sc02_005_8018ABE0();
        v.x = AF(t, s16, 0x6);
        v.y = AF(t, s16, 0xA) + 0x80;
        v.z = AF(t, s16, 0xE);
    } else {
        v.x = D_sc02_005_80195AF4[AF(o, s16, 0x100)].x;
        v.y = AF(AF(o, u8 *, 0x64), s16, 0xA);
        v.z = D_sc02_005_80195AF6[AF(o, s16, 0x100)].x;
    }
    if (AF(AF(o, u8 *, 0x64), s32, 0xE8) & 0x2000) {
        func_80132DC4(o, &v, 0x480);
    } else {
        func_80132DC4(o, &v, 0x400);
    }
    func_8012AD44(o, 3);
}

void func_sc02_005_80184828(u8 *o) {
    SV8 a;
    SV8 b;
    s32 hit;
    s32 moved;
    u8 *t;
    s16 y;
    s32 n;

    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    func_8012AD80(o);
    b.x = AF(o, s16, 0x6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    hit = 0;
    if (AF(o, s16, 0xA) >= -0x800) {
        hit = 1;
        AF(o, s16, 0xA) = -0x800;
        AF(o, s32, 0x14) = 0;
    }
    moved = 0;
    if (AF(o, s16, 0x100) < 0) {
        if (func_sc02_005_80187508(o) != 0) {
            s16 *q = &D_80126B96;
            D_80126B98 = 0xA;
            *q |= 0x4000;
        }
    } else if (D_sc02_005_801E4BBC == 1) {
        t = func_sc02_005_8018ABE0();
        if (AF(t, s16, 0xE) >= AF(o, s16, 0xE)) {
            moved = 1;
            AF(o, s16, 0xE) = AF(t, s16, 0xE);
            func_sc02_005_8018AEB4(AF(o, s16, 0x100), 0);
        }
    } else {
        SV8 *tbl = D_sc02_005_80195AF6;
        y = tbl[AF(o, s16, 0x100)].x;
        if (y >= AF(o, s16, 0xE)) {
            moved = 1;
            ((struct { u8 pad[0xE]; s16 fE; } *)o)->fE = y;
            n = -(AF(o, s16, 0x100) * 8);
            D_801270C8 = ((SV8 *)((u8 *)tbl - n))->z;
            D_sc02_005_801E43B4++;
        }
    }
    if (hit || moved) {
        func_sc02_005_801849E4(o);
        func_8013C9C4((s32) &D_sc02_005_80191060);
    }
    func_8012B2CC(o);
}

s32 func_sc02_005_801849E4(s32 arg0) {
    func_8012AD44(arg0, 4);
    func_sc02_005_8018B058(arg0);
    func_8012B200(arg0);
    func_sc02_005_8018AF58(arg0);
    return func_8002D4C8(0x4EE, 0);
}

void func_sc02_005_80184A34(u8 *o) {
    AF(o, s16, 0xDC) = AF(o, s16, 6);
    AF(o, s16, 0xDE) = AF(o, s16, 0xA);
    AF(o, s16, 0xE0) = AF(o, s16, 0xE);
    func_8012AD44(o, 5);
    AF(o, s16, 0x34) = 4;
    AF(o, s32, 0x1C) = 5;
}

void func_sc02_005_80184A8C(u8 *o) {
    s32 d[3];
    u8 *p;

    if (func_8012BEE8(o) != 0) {
        AF(o, s32, 4) = AF(o, s32, 8) = AF(o, s32, 0xC) = 0;
        func_80132784(o, AF(AF(o, u8 *, 0x64), s32, 0xCC), 6);
        if (AF(o, u16, 0x34) != 0) {
            AF(o, u16, 0x34) -= 1;
            d[0] = (AF(o, s16, 0xDC) - AF(AF(o, u8 *, 0x20), s32, 0x48)) >> 2;
            d[1] = (AF(o, s16, 0xDE) - AF(AF(o, u8 *, 0x20), s32, 0x4C)) >> 2;
            d[2] = (AF(o, s16, 0xE0) - AF(AF(o, u8 *, 0x20), s32, 0x50)) >> 2;
            AF(AF(o, u8 *, 0x20), s32, 0x48) += d[0] * AF(o, u16, 0x34);
            AF(AF(o, u8 *, 0x20), s32, 0x4C) += d[1] * AF(o, u16, 0x34);
            AF(AF(o, u8 *, 0x20), s32, 0x50) += d[2] * AF(o, u16, 0x34);
        } else {
            p = AF(o, u8 *, 0xCC);
            if (p != 0) {
                AF(p, s16, 0xFC) = 1;
                AF(o, u8 *, 0xCC) = 0;
            }
            AF(o, u8 *, 0x58) = &D_sc02_005_801963FC;
            AF(o, u16, 0x5C) = 0x8C00;
            func_8012AD44(o, 1);
            func_8012B200(o);
            AF(o, s32, 4) = AF(o, s32, 8) = AF(o, s32, 0xC) = 0;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 1;
    }
}

s32 func_sc02_005_80184C20(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
        AF(arg0, void *, 0xCC) = NULL;
    }
    AF(arg0, s32 *, 0x58) = &D_sc02_005_801963FC;
    AF(arg0, u16, 0x5C) = 0x8C00;
    func_8012AD44(arg0, 1);
    func_8012B200(arg0);
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    return func_80132784(arg0, AF(AF(arg0, void *, 0x64), s32, 0xCC), 6);
}

s32 func_sc02_005_80184CA4(s32 arg0) {
    AF(arg0, s16, 6) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x48);
    AF(arg0, s16, 0xA) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x4C);
    AF(arg0, s16, 0xE) = (s16) AF(AF(arg0, void *, 0x20), s32, 0x50);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x10) = 0x40000;
    AF(arg0, s32, 0x14) = 0xFFF80000;
    AF(arg0, s32, 0x18) = 0xFFFC0000;
    AF(arg0, s32 *, 0x78) = &D_sc02_005_80196414;
    return func_8012AD44(arg0, 6);
}

s32 func_sc02_005_80184D24(s32 arg0) {
    return func_8012AD44(arg0, 7);
}

void func_sc02_005_80184D44(u8 *arg0) {
    D_sc02_005_80196470[AF(arg0, u16, 2)]();
}

void func_sc02_005_80184D80(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

void func_sc02_005_80184D98(u8 *o) {
    SV8 v;

    func_8012B200(o);
    v.x = AF(AF(o, u8 *, 0x64), s16, 0x6) - 0x40;
    v.y = AF(o, s16, 0x100) = AF(AF(o, u8 *, 0x64), s16, 0xA) - 0x80;
    v.z = AF(AF(o, u8 *, 0x64), s16, 0xE);
    func_80132DC4(o, &v, 0x500);
    AF(o, u8, 0xC1) = 4;
    AF(o, u8, 0xC2) = 0;
    AF(o, u16, 0x5C) &= 0xFFFE;
    func_8002D4C8(0x505, 0);
}

void func_sc02_005_80184E30(u8 *o) {
    s16 v;
    u8 *p;

    func_8012CBF4(o);
    v = AF(o, s16, 0x100);
    if (v < AF(o, s16, 0xA)) {
        p = AF(o, u8 *, 0x64);
        AF(o, s16, 0xA) = v;
        D_sc02_005_801E4398 = 0;
        AF(p, s16, 0x34) = 4;
        AF(p, s32, 0x1C) = 0x30;
        AF(p, s16, 0x76) = 0;
        func_8013C9C4((s32) &D_sc02_005_8019103C);
        func_8012B200(o);
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
        func_sc02_005_8018AF58(o);
        func_8002D4C8(0x506, 0);
    }
}

void func_sc02_005_80184EC0(u8 *o) {
    u16 idx;
    u16 *tbl;
    u8 *p;
    u16 v;

    idx = AF(o, u16, 0x70);
    if (idx >= 0x13) {
        func_8012CAE4(o);
        return;
    }
    if ((s16)idx >= 0xD) {
        tbl = D_sc02_005_80195B68;
        idx -= 0xD;
    } else {
        tbl = D_sc02_005_80195B4C;
    }
    if (func_8012C354(o, &D_sc02_005_80195D74[AF(o, s16, 0x70) * 0x34]) == 0) {
        return;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, void *, 0xBC) = &D_sc02_005_80196490;
    AF(o, s32, 0xC) = 0;
    AF(o, s32, 0x8) = 0;
    AF(o, s32, 0x4) = 0;
    AF(o, s32, 0xB4) = 0;
    AF(o, u8, 0xC1) = 0;
    AF(o, u8, 0x75) = 8;
    AF(o, s32, 0xDC) = 0;
    AF(o, s16, 0x100) = 0;
    AF(o, s32, 0xC4) |= 2;
    p = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = p;
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(p);
    AF(o, s32, 0xCC) = AF(o, s32, 0x64);
    v = tbl[idx];
    if (v >= 0x16) {
        AF(o, s16, 0xFC) = v - 0x16;
        AF(o, s32, 0x64) = AF(AF(o, u8 *, 0x64), s32, 0xCC);
        AF(o, s16, 0xFE) = 1;
    } else {
        AF(o, s16, 0xFC) = v;
        AF(o, s16, 0xFE) = 0;
        if (v == 4 || v == 9 || v == 14 || v == 19) {
            AF(o, s16, 0xFE) = 2;
        }
    }
    func_8012AD50(o);
}

void func_sc02_005_80185060(u8 *o, s32 a1) {
    s32 flag;

    func_sc02_005_80187280(o, (u16)(AF(o, u16, 0x70) + 1));
    AF(o, u8, 0xC1) = 0;
    AF(o, s32, 0xDC) = 1;
    if (AF(o, s16, 0x104) == 0) {
        AF(o, s16, 0x104) = a1;
    }
    flag = 0;
    switch (AF(o, s16, 0x70)) {
    case 3:
        AF(AF(o, u8 *, 0xCC), s32, 0xE8) |= 0x2000;
        func_sc02_005_80189F64();
        flag = 1;
        break;
    case 8:
    case 10:
        AF(D_sc02_005_801E43D0[AF(o, s16, 0x70)], u16, 0x5C) = 0x8800;
        break;
    case 9:
        AF(AF(o, u8 *, 0x64), s32, 0xE8) |= 0x20000;
        break;
    case 11:
        AF(AF(o, u8 *, 0x64), s32, 0xE8) |= 0x40000;
        break;
    }
    if (flag) {
        AF(o, s16, 0x100) = 0x18;
        if (a1 != 0) {
            func_sc02_005_801876B0(o);
        }
    } else {
        AF(o, s16, 0x100) = 0x10;
        if (a1 != 0) {
            func_sc02_005_80187664(o);
        }
        if (D_sc02_005_801E4BBC == 0) {
            AF(AF(o, u8 *, 0xCC), s16, 0xFE)++;
        }
    }
    AF(o, s16, 0xAE) = -1;
    func_8012AD44(o, 2);
}

s32 func_sc02_005_801851E0(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xDC) = 1;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0xAE) = -1;
    return func_8012AD44(arg0, 2);
}

void func_sc02_005_80185214(u8 *o) {
    s32 n;
    s32 v;
    u8 *cc;

    n = AF(o, s16, 0x70);
    if (n < 0xC) {
        if (AF(o, s16, 0xFE) == 1) {
            v = D_sc02_005_801E4474[AF(o, s16, 0xFC)];
        } else {
            v = D_sc02_005_801E4418[AF(o, s16, 0xFC)];
        }
        D_sc02_005_801E4AA0[n].a = v;
        D_sc02_005_801E4AA4[AF(o, s16, 0x70)].a = 0;
        AF(AF(o, u8 *, 0x20), void *, 0x24) = &D_sc02_005_801E4AA0[AF(o, s16, 0x70)];
        AF(AF(o, u8 *, 0x20), void *, 0x20) = &D_80063548;
        func_80132784(o, AF(o, s32, 0x64), AF(o, u16, 0xFC));
        AF(o, s16, 0x6) = AF(AF(o, u8 *, 0x20), s32, 0x48);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
        AF(o, s16, 0x102) = AF(o, u16, 0xA);
        func_8012B21C(o);
        AF(o, s32, 0x14) = 0xFFE80000;
        AF(o, s32, 0x10) = ((AF(o, s16, 0x6) - AF(AF(o, u8 *, 0xCC), s16, 0x6)) << 12) + ((AF(o, u16, 0x70) & 7) << 16) + 0x40000;
        AF(o, s32, 0x18) = ((AF(o, s16, 0xE) - AF(AF(o, u8 *, 0xCC), s16, 0xE)) << 12) - ((AF(o, u16, 0x70) & 7) << 16) + 0x20000;
        AF(o, s16, 0x100) = AF(o, u16, 0x70);
        func_8012AD44(o, 3);
    } else {
        AF(AF(o, u8 *, 0x20), u32, 0x4) |= 0x80000000;
        func_sc02_005_801853CC(o);
    }
}

s32 func_sc02_005_801853CC(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return func_8012AD44(arg0, 4);
}

void func_sc02_005_801853EC(u8 *o) {
    AF(o, u16, 0x76) -= AF(o, u16, 0x60);
    AF(o, u16, 0x5C) &= 0xFFFE;
    func_8016AA50(o, AF(o, s16, 0x60));
    if (AF(o, s16, 0x76) <= 0) {
        AF(o, s16, 0x5E) = 0;
        func_sc02_005_80185060(o, 1);
        func_sc02_005_80186B08(o);
    } else {
        AF(o, u8, 0xC1) = 1;
        AF(o, s32, 0x1C) = 8;
        func_sc02_005_80186A04(o);
    }
    if (AF(o, u16, 0x5E) != 0x1D) {
        func_8002D4C8(0x4F3, 0);
    }
}

void func_sc02_005_8018548C(s32 arg0, s32 arg1) {
    u8 temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        func_sc02_005_80186B08(arg0);
    }
    func_sc02_005_80186424(arg0);
    temp_v1 = AF(arg0, u8, 0x74);
    if ((temp_v1 != 0) && (AF(arg0, u16, 0xFE) & 1)) {
        D_sc02_005_801E43BC |= temp_v1;
    }
}

void func_sc02_005_8018550C(u8 *arg0) {
    s32 temp_s1;
    u8 temp_v1;

    D_sc02_005_801964A8[AF(arg0, u16, 2)]();
    temp_s1 = AF(AF(arg0, void *, 0xCC), s32, 0xE8);
    if (!(temp_s1 & 0x8000)) {
        func_sc02_005_80186424((s32) arg0);
        temp_v1 = AF(arg0, u8, 0x74);
        if ((temp_v1 != 0) && (AF(arg0, u16, 0xFE) & 1)) {
            D_sc02_005_801E43BC |= temp_v1;
        }
        if ((AF(arg0, s16, 0x70) == 0x11) && (AF(arg0, u16, 0x5C) & 0x400)) {
            func_80132F40((s32) arg0);
        }
        if ((AF(arg0, u16, 0xFE) & 2) && (temp_s1 & 0x20)) {
            func_sc02_005_80186F60((s32) arg0);
        } else if (AF(arg0, u16, 0xFE) & 1) {
            if (temp_s1 & 0x100) {
                func_sc02_005_801865D0((s32) arg0);
            }
        }
        if (temp_s1 & 0x10000) {
            if (!(D_800B99D8 & 3) && ((rand() & 0x1F) == ((u16) AF(arg0, s16, 0x70) & 0x1F))) {
                func_sc02_005_80189E34((s32) arg0, (s32) D_sc02_005_801E4BBC);
            }
        } else if ((temp_s1 & 0x4000) && (((D_800B99D8 % 60) & 0xFFFF) == (AF(arg0, s16, 0x70) * 2))) {
            func_sc02_005_8018A0E4((s32) arg0);
        }
    }
}

void func_sc02_005_801856E4() {
    SV8 a;
    SV8 b;
    a = D_sc02_005_801E2E9C;
    b = D_sc02_005_801E2EA4;
    func_sc02_005_801858C4();
    func_sc02_005_80185858(0x11, &a, &b);
}

void func_sc02_005_80185764(void) {
    SV8 a;
    SV8 b;

    func_sc02_005_801858C4();
    a = D_sc02_005_801E2EAC;
    b = D_sc02_005_801E2EB4;
    func_sc02_005_80185858(8, (s32)&a, (s32)&b);
    a = D_sc02_005_801E2EBC;
    b = D_sc02_005_801E2EC4;
    func_sc02_005_80185858(0xA, (s32)&a, (s32)&b);
}

void func_sc02_005_80185858(s32 i0, s32 a1, s32 a2) {
    s32 *p;

    if (D_sc02_005_801E43C0[0] == 0) {
        p = &D_sc02_005_801E43C0[0];
    } else if (D_sc02_005_801E43C0[1] == 0) {
        p = &D_sc02_005_801E43C0[1];
    } else {
        return;
    }
    func_sc02_005_8018C598(((s32 *)&D_sc02_005_801E43CC)[(s16) i0], a1, a2, p, 0x20, 0x80);
}

void func_sc02_005_801858C4(void) {
    if (D_sc02_005_801E43C0[0] != 0) {
        func_8012C218(D_sc02_005_801E43C0[0]);
        D_sc02_005_801E43C0[0] = 0;
    }
    if (D_sc02_005_801E43C4 != 0) {
        func_8012C218(D_sc02_005_801E43C4);
        D_sc02_005_801E43C4 = 0;
    }
}

void func_sc02_005_8018592C(u8 *o) {
    ((s32 *) o)[0x3A] &= ~8;
    ((s16 *) o)[0x81] = 0;
    if (D_sc02_005_801E4BBC < 2) {
        D_sc02_005_801E4BBC++;
    }
    D_sc02_005_801E4398 = D_sc02_005_801E439C = AF(o, s16, 0x76) = (&D_sc02_005_80195B24)[D_sc02_005_801E4BBC];
    func_sc02_005_8017BFF0((s32) &D_sc02_005_801E4398, (s32) &D_sc02_005_801E439C, 0x60);
    switch (D_sc02_005_801E4BBC) {
    case 1:
        func_8002D4C8(0x11, 0);
        ((s32 (*)()) func_sc02_005_801900E0)();
        break;
    case 2:
        func_sc02_005_8018AB84();
        break;
    }
}

void func_sc02_005_80185A04(s32 a, u8 *o, s32 n0) {
    s32 r;

    if (!(AF(o, s32, 0xE8) & 4)) {
        AF(o, s32, 0xE8) |= 0x10;
        r = func_sc02_005_80185A88(o, (s16)n0);
        AF(o, s16, 0x60) += r;
        func_8016AA50(a, (s16)r);
        AF(o, s16, 0xDE) = 8;
        func_sc02_005_801869E0((s32)o);
    }
}

s32 func_sc02_005_80185A88(u8 *o, s32 n) {
    s32 t;
    s32 d;
    s32 r;
    s16 lim;
    s32 h;

    t = AF(o, u16, 0x76) - AF(o, u16, 0x60);
    r = t - n;
    d = t;
    lim = r;
    if (D_sc02_005_801E4BBC == 2) {
        if (!(AF(o, s32, 0xE8) & 0x800)) {
            if ((s16)r < 0x80) {
                lim = 0x80;
            }
        }
    } else {
        if (!(AF(o, s32, 0xE8) & 0x80000)) {
            h = (s16)AF(&D_sc02_005_80195B24, u16, D_sc02_005_801E4BBC * 2) >> 1;
            if ((s16)r < h) {
                lim = h;
            }
        }
    }
    return (s16)(d - lim);
}

void func_sc02_005_80185B38(u8 *o) {
    s16 n;
    s16 e;
    u16 x;
    u16 z;
    u8 unused[8];

    if (AF(o, s16, 0xE0) < 0) {
        if (AF(o, s16, 0xDC) != 1) {
            if (AF(o, s32, 0xE8) & 0x800) {
                n = ((s16)(D_80126CB4 - AF(o, u16, 0x6)) + 0x2A) / 0x54;
                e = D_80126CB8 - D_sc02_005_80195ACC;
                if (n > 3) {
                    n = 3;
                } else if (n < 0) {
                    n = 0;
                }
                AF(o, u16, 0x6) += n * 0x54;
                AF(o, u16, 0xE) = D_sc02_005_80195ACC;
                if (e < -0x2A) {
                    AF(o, u16, 0xE) = D_sc02_005_80195ACC - 0x54;
                } else if (e > 0x2A) {
                    AF(o, u16, 0xE) = D_sc02_005_80195ACC + 0x54;
                }
            } else {
                n = D_80126CB4 + 0x80;
                e = D_80126CB8 - AF(o, u16, 0xE);
                AF(o, s16, 0x6) = -0x80;
                if (n < -0x2A) {
                    AF(o, s16, 0x6) = -0xD4;
                } else if (n > 0x2A) {
                    AF(o, s16, 0x6) = -0x2C;
                }
                n = (e + 0x2A) / 0x54;
                if (n < -3) {
                    n = -3;
                } else if (n > 0) {
                    n = 0;
                }
                AF(o, u16, 0xE) += n * 0x54;
            }
        } else {
            x = D_sc02_005_801E43A8;
            z = D_sc02_005_801E43B0;
            AF(o, u16, 0x6) = x;
            AF(o, u16, 0xE) = z;
        }
    } else {
        AF(o, u16, 0x6) = D_sc02_005_80195AF4[AF(o, s16, 0xE0)].x;
        AF(o, u16, 0xE) = D_sc02_005_80195AF6[AF(o, s16, 0xE0)].x;
    }
}

s32 func_sc02_005_80185D6C(void) {
    return AF(D_801270CC, s32, 0xE8) & 4;
}

s32 func_sc02_005_80185D84(arg0)
    s32 arg0;
{
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xCC);
    func_sc02_005_80185DD0(0, AF(temp_s0, void *, 0x20) + 0x12, 0x100);
    return AF(AF(temp_s0, void *, 0x20), s16, 0x12) == 0;
}

void func_sc02_005_80185DD0(s32 a, u16 *p, s32 n) {
    s32 v;
    s16 d;
    s16 m;

    v = (a - *p) & 0xFFF;
    d = v >= 0x800 ? v | 0xF000 : v;
    if (d < 0) {
        m = -d;
    } else {
        m = d;
    }
    if (m > (u16)n) {
        if (d < 0) {
            *p -= n;
        } else {
            *p += n;
        }
    } else {
        *p = a;
    }
}

void func_sc02_005_80185E54(u8 *o) {
    u16 i = D_sc02_005_801E4BBC;
    AF(o, s16, 0x102) = 0;
    AF(o, u16, 0x100) = D_sc02_005_801959E0[i]->a;
}

s32 func_sc02_005_80185E80(u8 *o) {
    P4 *tbl;
    s16 r;
    s32 flag;
    s32 t;
    u16 k;
    s16 v;

    tbl = D_sc02_005_801959E0[D_sc02_005_801E4BBC];
    if (AF(o, s16, 0x100) == 0 && !(AF(o, s32, 0xE8) & 0x200)) {
        r = tbl[AF(o, s16, 0x102)].b;
        flag = r & 0x100;
        r &= 0xFF;
        switch (r) {
        case 2:
            if (func_sc02_005_801860F4(o, r) == 0 || (D_sc02_005_801E43A0 & 0x2000)) {
                r = 0;
            }
            break;
        case 3:
            if ((AF(o, s16, 0xE0) = func_sc02_005_8018AD20(o)) < 0) {
                r = 0;
            }
            break;
        case 4:
            if ((AF(o, s16, 0xE0) = func_sc02_005_8018AC48(o)) < 0) {
                r = 1;
            }
            break;
        case 9:
            if ((AF(o, s16, 0xE0) = func_sc02_005_80186144(o, 9)) < 0) {
                r = 1;
            }
            break;
        case 5:
            if (AF(o, s32, 0xE8) & 0x408) {
                r = 0;
            }
            break;
        case 6:
        case 7:
            if (!(AF(o, s32, 0xE8) & 0x800) && AF(o, s16, 0x76) < 0x81) {
                r = 0;
            }
            break;
        case 8:
            t = AF(o, s32, 0xE8);
            if (t & 0x800) {
                r = 0;
            } else if (!(t & 0x400)) {
                if ((t & 0xA) == 2) {
                    AF(o, s16, 0xFE)++;
                }
                return 0;
            } else {
                if ((AF(o, s16, 0xE0) = func_sc02_005_80186144(o, 8)) < 0) {
                    r = 6;
                }
            }
            break;
        }
        AF(o, s16, 0x102)++;
        v = tbl[AF(o, s16, 0x102)].a;
        if (v == -1) {
            k = D_sc02_005_801E4BBC;
            AF(o, s16, 0x102) = 0;
            AF(o, s16, 0x100) = D_sc02_005_801959E0[k][0].a;
        } else {
            AF(o, s16, 0x100) = v;
        }
        if (flag && (AF(o, s32, 0xE8) & 0xA) == 2) {
            AF(o, s16, 0xFE)++;
        }
        return r;
    }
    return 0;
}

s32 func_sc02_005_801860F4(u8 *o) {
    s32 d = func_80132E6C(o);

    if (D_80126CB8 <= AF(o, s16, 0xE)) {
        return d >= 0x6400;
    }
    return 0;
}

s32 func_sc02_005_80186144(u8 *o, s32 a1) {
    s32 i = D_sc02_005_801E43B4;
    if (D_sc02_005_80195AF8[i * 4] == a1) {
        return i;
    }
    return -1;
}

void func_sc02_005_80186178(u8 *o) {
    AF(AF(o, u8 *, 0x20), TB, 0x4).top = 1;
    AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), TB, 0x4).top = 1;
    AF(AF(AF(o, u8 *, 0xD0), u8 *, 0x20), TB, 0x4).top = 1;
    AF(AF((u8 *)D_sc02_005_801E43A4, u8 *, 0xCC), TB, 0x4).top = 1;
    if (!(AF(o, s32, 0xE8) & 2)) {
        AF(AF(AF(o, u8 *, 0xD4), u8 *, 0x20), TB, 0x4).top = 1;
    }
}

void func_sc02_005_8018622C(u8 *o) {
    AF(AF(o, u8 *, 0x20), TB, 0x4).top = 0;
    AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), TB, 0x4).top = 0;
    AF(AF(AF(o, u8 *, 0xD0), u8 *, 0x20), TB, 0x4).top = 0;
    AF(AF((u8 *)D_sc02_005_801E43A4, u8 *, 0xCC), TB, 0x4).top = 0;
    if (!(AF(o, s32, 0xE8) & 2)) {
        AF(AF(AF(o, u8 *, 0xD4), u8 *, 0x20), TB, 0x4).top = 0;
    }
}

s32 func_sc02_005_801862E0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v0, s16, 0x98) = 0;
    return (s32) temp_v0;
}

void func_sc02_005_801862F0(s32 arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(AF(arg0, void *, 0xCC), s16, 0x98) = 1;
}

void func_sc02_005_80186304(u8 *o, s32 n, s32 k0) {
    s16 k = k0;
    s32 neg = 0;
    P8 *p;
    P8 *t1;
    P8 *t2;

    if (n < 0) {
        n = -n;
        neg = 1;
    }
    if (n < 26) {
        if (k == 0) {
            if (AF(o, s32, 0xE8) & 0x2000) {
                k = 1;
            } else {
                k = 2;
            }
        }
        t1 = (P8 *)D_sc02_005_801959EC;
        p = t1 + n;
        func_80132EC4(p->a, k);
        if (neg) {
            func_8012A860(o, p->a);
        } else {
            SetScript(o, p->a);
        }
        t2 = (P8 *)D_sc02_005_801959F0;
        p = t2 + n;
        func_80132EC4(p->a, k);
        if (neg) {
            func_8012A860(AF(o, u8 *, 0xCC), p->a);
        } else {
            SetScript(AF(o, u8 *, 0xCC), p->a);
        }
    }
}

void func_sc02_005_80186424(u8 *o) {
    V4 a;
    V4 b;
    V4 c;

    if (AF(o, u8, 0x74) != 0) {
        a.x = D_80126B5C;
        a.y = D_80126B60;
        a.z = D_80126B64;
        func_8012F0BC(AF(o, u8 *, 0x20) + 0x34, &a, &c);
        func_80132784(o, AF(o, u8 *, 0x64), AF(o, u16, 0xFC));
        func_8012F1A4(AF(o, u8 *, 0x20) + 0x34, &c, &b);
        D_80126B5C = b.x;
        D_80126B60 = b.y;
        D_80126B64 = b.z;
        AF(D_80126B78[0], s32, 0x48) = AF(D_80126B78[0], s16, 8) = ((s16 *)&D_80126B5C)[1];
        AF(D_80126B78[0], s32, 0x4C) = AF(D_80126B78[0], s16, 0xA) = D_80126B62;
        AF(D_80126B78[0], s32, 0x50) = AF(D_80126B78[0], s16, 0xC) = D_80126B66;
    } else {
        func_80132784(o, AF(o, u8 *, 0x64), AF(o, u16, 0xFC));
    }
}

s32 func_sc02_005_8018655C(s32 arg0) {
    if (!(AF(arg0, s32, 0xE8) & 0x200)) {
        if (D_80126CB6 < (AF(arg0, s16, 0xA) - 0x30)) {
            AF(arg0, u16, 0xE6) = (u16) (AF(arg0, u16, 0xE6) + 1);
        } else {
            AF(arg0, u16, 0xE6) = 0U;
        }
        if ((s16) AF(arg0, u16, 0xE6) >= 0x30) {
            AF(arg0, s16, 0xE4) = 0x10;
            AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x200);
        }
    }
}

void func_sc02_005_801865D0(s32 arg0) {
    if (func_8012D714(arg0, 5) != 0) {
        D_80126B96 = 0x4005;
    }
}

void func_sc02_005_80186600(u8 *o) {
    s32 fl = AF(o, s32, 0xE8);
    u8 *p = AF(o, u8 *, 0xCC);
    s16 d;
    u8 *t;
    s16 x;
    u16 e;

    D_sc02_005_801E43B8 = 0;
    if (fl & 1) {
        if (fl & 0x200) {
            if (AF(o, s16, 0xE6) >= 0x55) {
                if (AF(o, s16, 0xE4) != 0) {
                    AF(AF(p, u8 *, 0x20), s16, 0x12) += 0x100;
                    e = AF(o, u16, 0xE4);
                    D_sc02_005_801E43B8 = 0x100;
                    AF(o, s16, 0xE4) = e - 1;
                } else {
                    AF(o, s32, 0xE8) = fl & ~0x300;
                    AF(o, s16, 0xE6) = 0;
                }
            } else {
                if (AF(o, s16, 0xE6) < 0x48) {
                    if ((AF(o, s16, 0xE6) & 7) == 0) {
                        func_sc02_005_80186F9C(o, 0x16);
                        func_sc02_005_80186F9C(o, 0x19);
                        func_8002D4C8(0x4F0, 0);
                    }
                } else if (AF(o, s16, 0xE6) == 0x54) {
                    AF(o, s32, 0xE8) = fl | 0x100;
                    func_8002D4C8(0x4EC, 0);
                }
                AF(o, s16, 0xE6) += 1;
            }
        } else {
            d = func_8012B608(AF(AF(p, u8 *, 0x20), s16, 0x12) + AF(AF(o, u8 *, 0x20), s16, 0x12), func_8012B864(o), 8);
            t = AF(p, u8 *, 0x20);
            x = AF(t, s16, 0x12);
            D_sc02_005_801E43B8 = d;
            AF(t, s16, 0x12) = x + d;
        }
    }
}

s32 func_sc02_005_8018675C(u8 *o) {
    u32 f = AF(o, u32, 0xE8);
    SV8 *e;
    s16 i;
    u16 j;
    s32 n;
    u8 unused[8];

    if (f & 0x800) {
        i = AF(o, s16, 0xE0);
        if (i >= 0) {
            e = D_sc02_005_80195AF4;
            if (AF(o, s16, 6) < D_sc02_005_80195AF4[i].x) {
                D_sc02_005_801E43B4++;
                n = -(i * 8);
                D_801270C8 = ((SV8 *)((u8 *)e - n))->pad;
                AF(o, s16, 0xE0) = -1;
            }
        }
        if (AF(o, s32, 0x10) < 0) {
            if (AF(o, s16, 6) < D_sc02_005_80195ACE) {
                AF(o, u32, 0xE8) |= 8;
                AF(o, s16, 0xFE) = 0;
                return 1;
            }
            return 0;
        }
        return 0;
    }
    if (AF(o, s32, 0x18) > 0) {
        j = D_sc02_005_801E4BBC;
        e = (SV8 *)D_sc02_005_80195AC4;
        if (((s16 *)e)[j * 2] < AF(o, s16, 0xE)) {
            if (j == 2) {
                AF(o, u32, 0xE8) = f | 0x400;
            } else {
                AF(o, u32, 0xE8) = f | 8;
            }
            AF(o, s16, 0xFE) = 0;
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 func_sc02_005_8018687C(u8 *o) {
    s16 v;

    if (!(AF(o, s32, 0xE8) & 0x800)) {
        if (AF(o, s32, 0x10) > 0) {
            if (AF(&D_sc02_005_80195AD2, s16, D_sc02_005_801E4BBC * 4) < AF(o, s16, 0x6)) {
                v = AF(&D_sc02_005_80195AD2, s16, D_sc02_005_801E4BBC * 4);
                AF(o, s16, 0x6) = v;
                return 1;
            }
        }
        if (AF(o, s32, 0x10) < 0) {
            if (AF(o, s16, 0x6) < D_sc02_005_80195AD0[D_sc02_005_801E4BBC].x) {
                v = D_sc02_005_80195AD0[D_sc02_005_801E4BBC].x;
                AF(o, s16, 0x6) = v;
                return 1;
            }
        }
    }
    return 0;
}

s32 func_sc02_005_8018692C(s32 arg0) {
    s32 *var_s1;
    s32 *var_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;

    var_s2 = 0;
    var_s0 = 0;
    var_s1 = &D_sc02_005_801E43CC;
    do {
        temp_v0 = func_8012C658(0x49, var_s0, arg0);
        *var_s1 = temp_v0;
        if (temp_v0 == 0) {
            var_s2 += 1;
        }
        var_s0 += 1;
        var_s1 = (s32 *)((u8 *)var_s1 + 4);
    } while (var_s0 < 0xD);
    var_s0_2 = 0;
    var_s1_2 = &D_sc02_005_801E4400;
    do {
        temp_v0_2 = func_8012C658(0x49, var_s0_2 + 0xD, arg0);
        *var_s1_2 = temp_v0_2;
        if (temp_v0_2 == 0) {
            var_s2 += 1;
        }
        var_s0_2 += 1;
        var_s1_2 = (s32 *)((u8 *)var_s1_2 + 4);
    } while (var_s0_2 < 6);
    return var_s2;
}

s32 func_sc02_005_801869E0(s32 arg0) {
    void *temp_v0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc02_005_80196208;
    temp_v0 = AF(AF(arg0, void *, 0xCC), void *, 0x20);
    AF(temp_v0, s32 *, 0x80) = &D_sc02_005_80196208;
    return (s32) temp_v0;
}

void func_sc02_005_80186A04(u8 *o) {
    s32 i;
    s32 j;
    s32 n;
    u16 k;
    SV8 *t;
    s16 v;

    i = AF(o, s16, 0x70);
    if (i >= 14) return;
    if ((D_sc02_005_801E43A0 >> (i + 1)) & 1) return;
    k = D_sc02_005_80195B4C[i];
    if (k >= 0x16) {
        t = (SV8 *) &D_sc02_005_801961E0;
        k -= 0x16;
    } else {
        t = (SV8 *) &D_sc02_005_801961B8;
    }
    for (j = 0; j < 4; j++) {
        v = t[j].pad;
        if (v == -1) {
            t[j].pad = k;
            return;
        }
        if (v == k) return;
        if (k < v) {
            for (n = 3; j < n; n--) {
                t[n].pad = t[n - 1].pad;
            }
            t[j].pad = k;
            return;
        }
    }
}

s32 func_sc02_005_80186ADC(s32 arg0) {
    AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc02_005_801961B8;
    AF(AF(AF(arg0, void *, 0xCC), void *, 0x20), s32, 0x80) = &D_sc02_005_801961E0;
    return (s32) &D_sc02_005_801961E0;
}

void func_sc02_005_80186B08(u8 *o) {
    s32 n;
    u16 id;
    u8 *tbl;
    s32 i;
    s32 j;

    n = AF(o, s16, 0x70);
    if (n < 0xE) {
        id = D_sc02_005_80195B4C[n];
        if (id >= 0x16) {
            tbl = &D_sc02_005_801961E0;
            id -= 0x16;
        } else {
            tbl = &D_sc02_005_801961B8;
        }
        for (i = 0; i < 4; i++) {
            if (AF(tbl + i * 8, s16, 0x6) == id) {
                for (j = i; j < 4; j++) {
                    AF(tbl + j * 8, u16, 0x6) = AF(tbl + j * 8, u16, 0xE);
                }
                return;
            }
        }
    }
}

void func_sc02_005_80186BB8(void) {
    s32 i;
    s32 v;

    i = 0;
    while ((v = D_sc02_005_80195ABC[i]) >= 0) {
        AF(((s32 *)&D_sc02_005_801E43CC)[v], s16, 0xAE) = -1;
        i++;
    }
}

void func_sc02_005_80186C0C(void) {
    s32 i;
    s32 v;

    i = 0;
    while ((v = D_sc02_005_80195ABC[i]) >= 0) {
        u8 *p = ((u8 **)&D_sc02_005_801E43CC)[v];
        if (AF(p, s32, 0xDC) == 0) {
            AF(p, s16, 0xAE) = 0;
        }
        i++;
    }
}

void func_sc02_005_80186C70(void) {
    s32 i;
    u8 **p = (u8 **)&D_sc02_005_801E43CC;
    for (i = 0; i < 0x13; i++) {
        AF(p[i], u16, 0x5C) &= ~0x400;
    }
}

s32 func_sc02_005_80186CA8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    void **var_a0;
    void *temp_v1;

    var_a1 = 0;
    var_a0 = &D_sc02_005_801E43CC;
    do {
        temp_v1 = *var_a0;
        if (AF(AF(temp_v1, void *, 0x78), u16, 2) & 0x400) {
            AF(temp_v1, u16, 0x5C) = (u16) (AF(temp_v1, u16, 0x5C) | 0x400);
        }
        var_a1 += 1;
        temp_v0 = var_a1 < 0x13;
        var_a0 += 0x1;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc02_005_80186D00(s32 arg0) {
    u16 temp_v0;

    AF(D_sc02_005_801E43DC, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43DC, u16, 0x5C) & 0xF7FF);
    AF(D_sc02_005_801E43E0, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43E0, u16, 0x5C) & 0xF7FF);
    AF(D_sc02_005_801E43E4, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43E4, u16, 0x5C) & 0xF7FF);
    temp_v0 = AF(D_sc02_005_801E43E8, u16, 0x5C) & 0xF7FF;
    AF(D_sc02_005_801E43E8, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc02_005_80186D74(void) {
    u16 temp_v0;

    AF(D_sc02_005_801E43DC, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43DC, u16, 0x5C) | 0x800);
    AF(D_sc02_005_801E43E0, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43E0, u16, 0x5C) | 0x800);
    AF(D_sc02_005_801E43E4, u16, 0x5C) = (u16) (AF(D_sc02_005_801E43E4, u16, 0x5C) | 0x800);
    temp_v0 = AF(D_sc02_005_801E43E8, u16, 0x5C) | 0x800;
    AF(D_sc02_005_801E43E8, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

void func_sc02_005_80186DE8(s32 arg0) {
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, s32, 0xE8);
        temp_a0 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_a0;
        if (temp_a1 & 0x40) {
            if ((temp_a0 << 0x10) == 0) {
                AF(arg0, s32, 0xE8) = (s32) (temp_a1 & ~0x40);
                AF(arg0, s16, 0xFC) = 8;
            }
        } else {
            if ((temp_a1 & 0x200) || ((D_sc02_005_801E43A0 & 0x1540) == 0x1540)) {
                AF(arg0, s16, 0xFC) = 0;
                return;
            }
            if ((temp_a0 << 0x10) == 0) {
                AF(arg0, s32, 0xE8) = (s32) (temp_a1 | 0x40);
                AF(arg0, s16, 0xFC) = 0xC;
                if (!(D_sc02_005_801E43A0 & 0x40)) {
                    func_sc02_005_80186F9C(arg0, 5);
                }
                if (!(D_sc02_005_801E43A0 & 0x100)) {
                    func_sc02_005_80186F9C(arg0, 0xA);
                }
                if (!(D_sc02_005_801E43A0 & 0x400)) {
                    func_sc02_005_80186F9C(arg0, 0xF);
                }
                if (!(D_sc02_005_801E43A0 & 0x1000)) {
                    func_sc02_005_80186F9C(arg0, 0x14);
                }
                func_8002D4C8(0x4F0, 0);
            }
        }
    }
}

s32 func_sc02_005_80186F14(s32 arg0) {
    if ((AF(arg0, s16, 0xFC) == 0) && ((D_sc02_005_801E43A0 & 0x1540) != 0x1540)) {
        AF(arg0, s16, 0xFC) = 8;
        AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x40);
    }
}

void func_sc02_005_80186F58(s32 arg0) {
    AF(arg0, s16, 0xFC) = 0;
}

void func_sc02_005_80186F60(s32 arg0) {
    if (func_8012D714(arg0, 1) != 0) {
        D_80126B96 = 0x4002;
        D_80126B98 = 0xA;
    }
}

void func_sc02_005_80186F9C(s32 arg0, s32 arg1) {
    s32 temp_a1_2;
    s32 temp_v0;
    s32 var_a2;
    u32 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    if (temp_a1 < 0x20U) {
        if (temp_a1 < 0x16U) {
            func_8012C658(0x51, (s32) temp_a1, arg0);
            return;
        }
        temp_a1_2 = arg1 - 0x16;
        var_a2 = 0x100;
        if (!(temp_a1_2 & 0xFFFF)) {
            var_a2 = 0x200;
            if (D_sc02_005_801E43A0 & 2) {
                var_a2 = 0x300;
            }
        }
        if ((temp_a1_2 & 0xFFFF) == 3) {
            var_a2 = 0x400;
            if (D_sc02_005_801E43A0 & 8) {
                var_a2 = 0x500;
            }
        }
        temp_v0 = func_8012C658(0x51, var_a2 | (temp_a1_2 & 0xFFFF), 0);
        if (temp_v0 != 0) {
            AF(temp_v0, s32, 0x64) = (s32) AF(arg0, s32, 0xCC);
        }
    }
}

void func_sc02_005_80187070(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C658(0x56, 5, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0xCC) = (s32) AF(arg0, s32, 0xCC);
    }
}

void func_sc02_005_801870BC(o)
    u8 *o;
{
    SV8 a;
    SV8 b;
    s32 y;
    s32 z;

    a.x = AF(AF(o, u8 *, 0x20), s32, 0x48) + 0x10;
    y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    a.y = y;
    z = AF(AF(o, u8 *, 0x20), s32, 0x50);
    a.pad = 0x3000;
    a.z = z - 0x10;
    if (AF(o, s16, 0x70) == 3) {
        a.y = y - 0x60;
        a.z = z - 0x20;
    }
    b.x = (D_sc02_005_80195B7A[AF(o, s16, 0x70) * 8] - D_sc02_005_80195B78[AF(o, s16, 0x70) * 8]) >> 1;
    b.y = (D_sc02_005_80195B7E[AF(o, s16, 0x70) * 8] - D_sc02_005_80195B7C[AF(o, s16, 0x70) * 8]) >> 1;
    b.z = 0x20;
    func_sc02_005_8018A7D8(o + 0xE8, &a, &b, 0);
    if (AF(o, s16, 0x104) != 0 && !(AF(o, u16, 0xE8) & 3)) {
        func_8002D4C8(0x4F4, 0);
    }
}

void func_sc02_005_801871E4(void) {
    s32 *p;
    s32 i;

    p = D_sc02_005_801BD9D4;
    while (*p != 0) {
        GsMapModelingData((*p++ & 0x80FFFFFF) + 4);
    }
    for (i = 0; i < 4; i++) {
        D_sc02_005_801961BE[i].x = -1;
        D_sc02_005_801961E6[i].x = -1;
    }
}

void func_sc02_005_80187280(u8 *o, s32 a1) {
    u16 v;
    s32 *p;
    u16 n;
    u16 i;

    n = a1;
    if (n < 0xE) {
        if (n != 0) {
            v = D_sc02_005_80195B4A[n];
            p = D_sc02_005_801E4418;
            if (v >= 0x16) {
                p = D_sc02_005_801E4474;
                v -= 0x16;
            }
            i = n - 1;
            if (v == 5) {
                p[5] = 0x1000000;
            } else {
                p[v] = D_sc02_005_801BD9D4[(u16)i];
            }
            AF(o, s32, 0x58) = (s32)&D_sc02_005_80195CA4[(u16)i * 16] | 0x40000000;
        }
        D_sc02_005_801E43A0 |= 1 << n;
    }
}

void func_sc02_005_80187348(u8 *o, s32 n0) {
    u16 n;
    u16 id;
    s32 *dst;
    s32 *src;
    s32 t;

    n = n0;
    if (n < 0xE) {
        if (n != 0) {
            dst = D_sc02_005_801E4418;
            id = D_sc02_005_80195B4A[n];
            src = D_sc02_005_801B82F4;
            if (id >= 0x16) {
                dst = D_sc02_005_801E4474;
                src = D_sc02_005_801BB8DC;
                id -= 0x16;
            }
            dst[id] = src[id];
            AF(o, s32, 0x58) = (s32)&D_sc02_005_80195B64[n * 16] | 0x40000000;
        }
        t = D_sc02_005_801E43A0;
        AF(o, s32, 0xDC) = 0;
        D_sc02_005_801E43A0 = t & ~(1 << n0);
    }
}

s32 func_sc02_005_801873FC(u8 *o) {
    SV8 a, b;
    u8 *s;
    s32 i;
    u16 d;
    s = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    a.x = AF(s, s16, 4);
    a.z = AF(s, s16, 0xC);
    b.x = AF(s, s16, 4);
    b.z = AF(s, s16, 0xE);
    d = (AF(s, s16, 6) - AF(s, s16, 4)) >> 1;
    for (i = 0; i < 3; i++) {
        a.y = b.y = AF(s, s16, 8);
        if (func_8012DEB8(o, &a, &b)) return 1;
        a.y = b.y = AF(s, s16, 0xA);
        if (func_8012DEB8(o, &a, &b)) return 1;
        b.x = a.x = a.x + d;
    }
    return 0;
}

s32 func_sc02_005_80187508(u8 *o) {
    if (func_sc02_005_80187560(o, &D_sc02_005_801963FC, -8) != 0) {
        return 1;
    }
    return func_sc02_005_80187560(o, &D_sc02_005_801963FC, -0x28);
}

s32 func_sc02_005_80187560(u8 *o, u8 *p, s32 h) {
    SV8 a, b;
    a.x = AF(o, s16, 6) + AF(p, s16, 4);
    b.x = AF(o, s16, 6) + AF(p, s16, 6);
    a.y = b.y = h + (AF(o, s16, 0xA) + AF(p, s16, 0xA));
    a.z = b.z = AF(o, s16, 0xE) - 0x30;
    if (func_8012DF34(o, &a, &b)) return 1;
    a.z = b.z = AF(o, s16, 0xE) - 0x10;
    if (func_8012DF34(o, &a, &b)) return 1;
    a.z = b.z = AF(o, s16, 0xE) + 0x10;
    if (func_8012DF34(o, &a, &b)) return 1;
    a.z = b.z = AF(o, s16, 0xE) + 0x30;
    if (func_8012DF34(o, &a, &b)) return 1;
    return 0;
}

void func_sc02_005_80187664(u8 *o) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2EF0;
    func_sc02_005_8018B16C(o, 6, (u16 *)&v);
}

void func_sc02_005_801876B0(u8 *o) {
    B8 v;
    u8 *p;
    s32 i;

    v = *(B8 *)&D_sc02_005_801E2EF8;
    if (o == 0) {
        i = 0;
        p = (u8 *)&D_801202A0;
        for (; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x49 && AF(p, s16, 0x70) == 3) {
                o = p;
                AF(p, s16, 0x104) = 1;
            }
        }
        if (o == 0) {
            return;
        }
    }
    func_sc02_005_8018B16C(o, 8, (u16 *)&v);
}

void func_sc02_005_80187768(u8 *o) {
    func_8012B23C(o);
    AF(o, s32, 0xE8) |= 1;
    func_sc02_005_80186304(o, 0, 0);
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = 0x10;
    } else {
        AF(o, s32, 0x1C) = 0x20;
    }
    AF(o, s32, 0x58) = (s32) &D_sc02_005_80195B2C | 0x40000000;
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0xAE) = -1;
    func_8012AD44(o, 1);
    func_sc02_005_80186F14((s32) o);
}

void func_sc02_005_801877FC(s32 arg0) {
    s16 temp_v0;
    s32 temp_v1;

    if (func_8012CE2C() == 0) {
        func_8012CBCC(arg0);
    }
    if (AF(arg0, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998(arg0);
        return;
    }
    func_sc02_005_8018655C(arg0);
    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 > 0) {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
    }
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_801838A8(arg0);
    }
    temp_v1 = AF(arg0, s32, 0x94);
    if (((temp_v1 == 4) || (temp_v1 == 0xC)) && (AF(arg0, s16, 0x98) == 1)) {
        func_8002D4C8(0x4F7, 0);
    }
}

void func_sc02_005_801878C0(u8 *o) {
    func_sc02_005_80182810(o);
    if (AF(o, s32, 0xE8) & 0x2000) {
        AF(o, s32, 0x1C) = 0x18;
    } else {
        AF(o, s32, 0x1C) = 0x30;
    }
    func_sc02_005_801828D8((s32)o);
    AF(o, s32, 0xE8) &= ~0x80;
}

void func_sc02_005_8018791C(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;

    if (AF(arg0, s32, 0xE8) & 0x60000) {
        func_sc02_005_80182998((s32) arg0, arg1, arg2);
        return;
    }
    func_sc02_005_80182918((s32) arg0);
    if (!(AF(arg0, s32, 0xE8) & 0x1000)) {
        temp_v0 = AF(arg0, s16, 0x100);
        if (temp_v0 > 0) {
            AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
        }
    }
    if ((func_sc02_005_8018687C((s32) arg0) != 0) || (func_sc02_005_8018675C((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x1000);
        func_sc02_005_801838A8((s32) arg0);
    }
}

void func_sc02_005_801879DC(u8 *arg0) {
    AF(arg0, s16, 0xE0) = -1;
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_sc02_005_80181900();
}

void func_sc02_005_80187A0C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_sc02_005_80181900();
}

void func_sc02_005_80187A38(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 1);
    func_sc02_005_80186F58((s32) arg0);
    func_sc02_005_80186304((s32) arg0, 0xE, 2);
    func_8012AD44((s32) arg0, 4);
}

void func_sc02_005_80187A8C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_8012AD44((s32) arg0, 5, arg2);
    func_sc02_005_80186F58((s32) arg0);
}

void func_sc02_005_80187AD0(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 2;
    AF(arg0, s16, 0xE0) = -1;
    func_sc02_005_8017DF00();
}

void func_sc02_005_80187B0C(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 3;
    AF(arg0, s16, 0xE0) = -1;
    func_sc02_005_8017DF00();
}

void func_sc02_005_80187B48(u8 *arg0) {
    func_sc02_005_80181F04();
    AF(arg0, s16, 0xDC) = 1;
    func_sc02_005_8017DF28();
}

void func_sc02_005_80187B7C(s32 arg0) {
    if (func_sc02_005_80185D84() != 0) {
        func_sc02_005_80181F70(arg0);
    }
}

void func_sc02_005_80187BB4(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc02_005_80181FA8();
    }
}

void func_sc02_005_80187BE4(u8 *arg0) {
    if (AF(arg0, s32, 0x94) == 0xB) {
        func_sc02_005_80181FE8();
    }
}

void func_sc02_005_80187C14(s32 arg0, s32 arg1) {
    func_8012AD80(arg0);
    if ((func_8012BEE8(arg0) == 0) && (((AF(arg0, s32, 0x1C) / 3) * 3) == (AF(arg0, s32, 0x1C) - 1))) {
        func_sc02_005_8018A174(arg0);
    }
    if (AF(arg0, s16, 0xA) < -0xB00) {
        func_sc02_005_8018203C(arg0);
    }
}

void func_sc02_005_80187C9C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80182098(arg0);
    }
}

void func_sc02_005_80187CD4(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        func_sc02_005_801820E4(arg0);
    }
}

void func_sc02_005_80187D0C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~0x20);
    if (AF(arg0, s32, 0x94) == 6) {
        func_sc02_005_801821C8();
    }
}

void func_sc02_005_80187D4C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80182284(arg0);
        func_sc02_005_8018415C(AF(arg0, s32, 0xD4));
    }
}

void func_sc02_005_80187D90(u8 *arg0) {
    D_sc02_005_80196250[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80187DCC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = AF(arg0, s32, 0xE8);
    if (temp_v1 & 0x60000) {
        func_sc02_005_80182998((s32) arg0, arg1, arg2);
        return;
    }
    if (!(temp_v1 & 0x200)) {
        func_sc02_005_801838A8((s32) arg0);
    }
}

void func_sc02_005_80187E18(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (D_sc02_005_801E4BBC == 2) {
            if ((AF(arg0, s32, 0x94) == 0xC) && (AF(arg0, s16, 0x98) == 1)) {
                func_sc02_005_80184CA4(AF(arg0, s32, 0xD0));
                AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x200);
            }
        } else if ((AF(arg0, s32, 0x94) == 0xA) && (AF(arg0, s16, 0x98) == 1)) {
            func_8002D4C8(0xA2F, 0);
        }
        if (AF(arg0, s16, 0x98) == 0) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x10000);
        }
    } else if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_sc02_005_801856E4();
        AF(arg0, s32, 0x1C) = 0x180;
    }
}

void func_sc02_005_80187F1C(s32 arg0) {
    if (func_8012CBF4(arg0) & 0x2000) {
        func_sc02_005_80182E04(arg0);
    }
}

void func_sc02_005_80187F58(s32 arg0) {
    if (D_801270C8 == 0x16) {
        func_sc02_005_80182EB0(arg0);
    }
}

void func_sc02_005_80187F88(void) {
}

void func_sc02_005_80187F90(s32 arg0) {
    if (func_8012CBF4(arg0) & 0x2000) {
        func_sc02_005_80182EB0(arg0);
    }
}

void func_sc02_005_80187FCC(u8 *o) {
    s32 *p = &D_801270C8;
    if (*p == 0x16) {
        func_sc02_005_80182E78(o);
    }
    if (*p == 0x14) {
        func_sc02_005_80182DCC((s32)o);
    }
}

void func_sc02_005_8018802C(u8 *arg0) {
    D_sc02_005_80196274[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80188068(s32 arg0, s32 arg1) {
    func_8012AD80(arg0, arg1);
    if (D_801270C8 == 0x1F) {
        func_sc02_005_80182FAC(arg0);
    }
}

void func_sc02_005_801880AC(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x4000);
    func_8012AD80((s32) arg0, arg1);
    if (AF(arg0, s16, 0xA) >= 0) {
        AF(arg0, s16, 0xA) = 0;
        func_8013C9C4((s32) &D_sc02_005_8019103C);
        func_sc02_005_8018300C((s32) arg0);
    }
}

void func_sc02_005_8018810C(s32 arg0) {
    func_sc02_005_801830F4(arg0, 1);
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_80183060(arg0);
    }
}

void func_sc02_005_80188150(s32 arg0, s32 arg1) {
    func_8012BEE8(arg0, arg1);
    if (AF(arg0, s32, 0x1C) == 1) {
        AF(arg0, s16, 0x76) = 0x1E;
        D_sc02_005_801E4398 = 0x1E;
    }
}

void func_sc02_005_80188194(s32 arg0) {
    func_sc02_005_801830F4(arg0, 0);
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_8002D4C8(0x504, 0);
    }
    if (func_8012BEE8(arg0) != 0) {
        func_sc02_005_80183074(arg0);
    }
}

void func_sc02_005_801881F4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0x68) {
        AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) | 0x8000);
        func_sc02_005_80186178((s32) arg0);
        if (D_sc02_005_801E43A4 != 0) {
            func_8012C218(D_sc02_005_801E43A4);
        }
    }
    func_sc02_005_801830F4((s32) arg0, 0);
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc02_005_80183160((s32) arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        StartRumbleScript((s32) &D_80062BC0);
    }
}

void func_sc02_005_801882A8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_80183174(arg0);
    }
}

void func_sc02_005_801882E0(void) {
}

void func_sc02_005_801882E8(u8 *arg0) {
    D_sc02_005_801962A0[AF(arg0, u16, 0x34)]();
}

void func_sc02_005_80188324(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc02_005_80196184) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        func_8012AD44(arg0, 1);
        func_8012B200(arg0);
        AF(AF(arg0, void *, 0x20), s32, 0x28) = 0xE000E0;
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x80);
        AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_sc02_005_801961E0;
        AF(arg0, u8, 0x75) = 8;
        D_sc02_005_801E4490 = 0x01000000;
        D_sc02_005_801E448C = 0x01000000;
    }
}

void func_sc02_005_801883C4(void) {
    u8 *p;
    u16 t;

    if (*(s16 *)&D_sc02_005_801E43BC != 0) {
        p = D_80126B78[0];
        t = AF(p, u16, 0x12) + D_sc02_005_801E43B8;
        D_sc02_005_801E43BC = 0;
        AF(p, u16, 0x12) = t;
    }
}

void func_sc02_005_80188404(u8 *o) {
    if (func_8012C354(o, &D_sc02_005_80196348) == 0) {
        func_8012CAE4(o);
        return;
    }
    AF(o, s32, 4) = AF(o, s32, 8) = AF(o, s32, 0xC) = 0;
    func_80132784(o, AF(o, s32, 0x64), 0);
    AF(AF(o, u8 *, 0x20), s32, 0x28) = 0xE000E0;
    AF(o, u8, 0xC0) = 1;
    AF(o, u8 *, 0xBC) = &D_sc02_005_8019637C;
    AF(o, s32, 0xB4) = 0;
    AF(o, u8, 0x75) = 8;
    AF(o, s32, 0xC4) |= 2;
    func_sc02_005_80183D54(o);
    func_80132288(&D_sc02_005_801E44E0, &D_sc02_005_801963B8, D_sc02_005_801D6D94);
}

void func_sc02_005_801884C8(u8 *arg0, s32 arg1, s32 arg2) {
    func_8013240C((s32) &D_sc02_005_801E44E0, arg1, arg2);
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 0);
}

void func_sc02_005_8018850C(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 1;
    func_8013240C(&D_sc02_005_801E44E0);
    if (D_sc02_005_801E44EC & 0x4000) {
        AF(AF(o, u8 *, 0x64), s32, 0xE8) |= 2;
        func_sc02_005_80183FCC(o);
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
        func_8012AD44(o, 2);
        AF(o, s32, 0x58) = (s32)&D_sc02_005_80196338 | 0x40000000;
        func_80132784(o, AF(o, s32, 0x64), 0x15);
    }
}

void func_sc02_005_801885BC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    D_sc02_005_8019640C[0] = D_sc02_005_801BB8F4;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_005_8019640C);
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0xE000E0;
    func_sc02_005_80184480(arg0);
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = 4;
    AF(arg0, s32 *, 0xBC) = &D_sc02_005_80196448;
    AF(arg0, s16, 0xAE) = -1;
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    func_80132784(arg0, AF(AF(arg0, void *, 0x64), s32, 0xCC), 6);
}

void func_sc02_005_80188690(u8 *arg0) {
    func_80132784((s32) arg0, AF(AF(arg0, void *, 0x64), s32, 0xCC), 6);
}

void func_sc02_005_801886BC(void) {
}

void func_sc02_005_801886C4(s32 arg0) {
    if (func_8012CBCC(arg0) != 0) {
        func_sc02_005_8018AF58(arg0);
        func_8002D4C8(0x4EE, 0);
        func_8013C9C4((s32) &D_sc02_005_80191060);
        func_sc02_005_80184D24(arg0);
    }
}

void func_sc02_005_80188720(u8 *arg0) {
    if (D_801270C8 == 0x1F) {
        AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x200);
    }
}

void func_sc02_005_8018874C(u8 *arg0) {
    s16 temp_v1;

    temp_v1 = AF(arg0, s16, 0x70);
    if ((temp_v1 < 0xD) && (((s32) D_sc02_005_801E43A0 >> (temp_v1 + 1)) & 1)) {
        func_sc02_005_80185060((s32) arg0, 0);
    }
    if (AF(AF(arg0, void *, 0xCC), s32, 0xE8) & 0x8000) {
        func_sc02_005_80185214((s32) arg0);
    }
}

void func_sc02_005_801887CC(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
        func_sc02_005_801870BC();
    }
    if (AF(AF(arg0, void *, 0xCC), s32, 0xE8) & 0x8000) {
        func_sc02_005_80185214((s32) arg0);
    }
}

void func_sc02_005_80188830(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s16, 0x70) < 0xC) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x300);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x100);
        temp_v0 = AF(arg0, u16, 0x100) + 1;
        AF(arg0, u16, 0x100) = temp_v0;
        if (!(temp_v0 & 3)) {
            func_sc02_005_80189F84();
        }
        func_8012AD80((s32) arg0);
        if (AF(arg0, s16, 0xA) >= AF(arg0, s16, 0x102)) {
            func_8012B200((s32) arg0);
            func_sc02_005_801853CC((s32) arg0);
        }
    }
}

void func_sc02_005_801888EC(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x70);
    if ((temp_v0 < 0xC) && ((D_800B99D8 & 0xF) == (temp_v0 & 0xF))) {
        func_sc02_005_8018A0E4((s32) arg0);
    }
}

void func_sc02_005_8018893C(u8 *arg0) {
    AF(arg0, s32, 0xE8) = (s32) (AF(arg0, s32, 0xE8) & ~1);
    func_sc02_005_80181900();
}

void func_sc02_005_80188968(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_8012B23C((s32) arg0, arg1);
        if ((AF(arg0, s16, 0xE0) < 0) && (AF(arg0, s16, 0xDC) != 0)) {
            AF(arg0, s16, 0x34) = 0;
            return;
        }
        func_sc02_005_801822B4((s32) arg0);
    }
}

void func_sc02_005_801889D4(u8 *arg0) {
    D_sc02_005_801964BC[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_80188A10(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80143994(arg0, 0x7FFF);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0xCC);
        AF(temp_v0, s16, 0) = 0x69;
        if (temp_v1 != NULL) {
            AF(temp_v1, u8, 0x26) = 0xC8;
            AF(temp_v1, u8, 0x25) = 0xC8;
            AF(temp_v1, u8, 0x24) = 0xC8;
        }
    }
    return temp_v0;
}

s32 func_sc02_005_80188A5C(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

void func_sc02_005_80188A7C(u8 *o) {
    u8 *p;

    if (func_8012D714(o, 2) != 0) {
        s16 *q = &D_80126B96;
        D_80126B98 = 0xA;
        *q |= 0x4000;
    }
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x10) < 0x400) {
        AF(p, s16, 0x10) += 0x100;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x40;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012CBCC(o) != 0) {
            func_sc02_005_8018A658(o);
            func_8013C9C4(&D_sc02_005_8019103C);
            AF(o, s32, 0x48) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x14) = 0;
            AF(o, s32, 0x18) = 0xFFD80000;
            AF(o, s16, 0x34)++;
            func_8002D4C8(0x4FC, 0);
        }
        break;
    case 1:
        func_8012AD80(o);
        if (AF(o, s16, 0xE) - D_80126CB8 < -0x180) {
            func_sc02_005_8018AC10(o);
        }
        break;
    }
}

void func_sc02_005_80188BB4(u8 *arg0) {
    D_sc02_005_801964FC[AF(arg0, u16, 2)]();
}

void func_sc02_005_80188BF0(u8 *o) {
    u8 unused[16];
    s32 i;

    if (func_8012C354(o, &D_sc02_005_80196544) != 0) {
        if (AF(o, s16, 0x70) != 0) {
            AF(o, s16, 0x5C) = 0;
        } else {
            AF(o, u8, 0xC0) = 1;
            AF(o, void *, 0xBC) = &D_sc02_005_80196578;
            AF(o, s32, 0xB4) = 0;
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0xAE) = -1;
            AF(o, u8, 0x75) = 0;
            AF(o, s32, 0xC4) |= 2;
        }
        AF(AF(o, u8 *, 0x20), s32, 0x28) = 0xE000E0;
        func_8012B23C(o);
        AF(o, s32, 0x14) = 0xFFEC0000;
        i = (AF(AF(o, u8 *, 0x64), u16, 0x100) & 1) + (AF(o, u16, 0x70) & 1) * 2;
        AF(o, s32, 0x10) = D_sc02_005_80196514[i * 2];
        AF(o, s32, 0x18) = D_sc02_005_80196518[i * 2];
        AF(o, s16, 0xFC) = D_sc02_005_80196534[i * 2];
        AF(o, s16, 0xFE) = D_sc02_005_80196536[i * 2];
        AF(o, s32, 0xCC) = func_80143970(o);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = -0x200;
        func_8012AD50(o);
    }
}

void func_sc02_005_80188D1C(u8 *o) {
    u8 *p;
    u8 *s;
    s16 t;
    s16 v;

    p = AF(o, u8 *, 0x20);
    s = AF(o, u8 *, 0xCC);
    if (AF(p, s16, 0x14) != AF(o, s16, 0xFE)) {
        AF(p, s16, 0x14) = AF(p, s16, 0x14) + AF(o, u16, 0xFC);
    }
    if (s != 0) {
        v = AF(AF(o, u8 *, 0x20), s16, 0x14);
        if (v < 0) {
            t = -v;
        } else {
            t = v;
        }
        AF(AF(s, u8 *, 0xCC), s16, 0x18) = t * 24 + 0x2000;
    }
    if (AF(o, s16, 0x70) == 0 && s != 0 && t == 0x400 && func_8012D714(o, 2) != 0) {
        D_80126B96 = 0x4002;
        D_80126B98 = 10;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_8012CBCC(o) != 0) {
            AF(o, s32, 0x14) = 0xFFF80000;
            AF(o, u16, 0x34)++;
            func_sc02_005_8018A47C(o);
            func_8013C9C4((s32)&D_sc02_005_80191060);
            func_8002D4C8(0x4F9, 0);
            if (s != 0) {
                func_801439C0(s);
                AF(o, s32, 0xCC) = 0;
            }
        }
        break;
    case 1:
        if (func_8012CBCC(o) != 0) {
            AF(o, u16, 0x34)++;
            func_8012B200(o);
            if (AF(o, s16, 0x70) != 0) {
                AF(o, s32, 0x1C) = 0;
            } else {
                AF(o, s32, 0x1C) = 0x80;
            }
        }
        break;
    case 2:
        if (func_8012BEE8(o) != 0) {
            AF(o, u16, 0x5C) &= 0xFDFF;
            func_8012AD50(o);
            AF(o, s32, 0x1C) = 0x18;
        }
        break;
    }
}

void func_sc02_005_80188F08(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_sc02_005_80188F38();
}

void func_sc02_005_80188F38(u8 *o) {
    WMtx m;

    m = D_800AE620;
    AF(o, s16, 0x5C) = 0;
    func_8012B21C(o);
    RotMatrixY(AF(D_80126B78[0], s16, 0x12), &m);
    ApplyMatrixLV(&m, &D_sc02_005_801965A0, o + 0x10);
    func_8012AD44(o, 3);
}

void func_sc02_005_80188FF0(u8 *o) {
    s32 r;

    func_8012AD80(o);
    r = func_sc02_005_801892CC(o);
    if (AF(o, s16, 0x100) == 0 && r != 0) {
        AF(o, s16, 0x102) = 2;
        AF(o, s16, 0x100)++;
    } else if (AF(o, s16, 0x102) != 0) {
        if (--AF(o, s16, 0x102) == 0) {
            AF(o, s32, 0x1C) = 0x18;
            AF(o, s16, 0x34) = 3;
            AF(o, s16, 0x100) = -1;
            AF(o, s32, 0x10) = -(AF(o, s32, 0x10) >> 1);
            AF(o, s32, 0x18) = -(AF(o, s32, 0x18) >> 1);
            AF(o, s32, 0x14) += 0xFFF80000;
        }
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s16, 0xA) >= -0x7FF) {
            func_sc02_005_8018A47C(o);
            AF(o, s32, 0x14) = 0xFFF80000;
            AF(o, u16, 0x34)++;
            func_8002D4C8(0xA2E, 0);
        }
        break;
    case 1:
        if (AF(o, s16, 0xA) >= -0x7FF) {
            AF(o, s32, 0x48) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        if (func_8012BE54(o) > 0x100000) {
            func_8012C218(o);
        }
        break;
    case 3:
        if (AF(o, s16, 0xA) >= -0x7FF) {
            func_8012B200(o);
        }
        if (AF(o, s32, 0x1C) & 1) {
            AF(AF(o, u8 *, 0x20), TB, 4).top = 1;
        } else {
            AF(AF(o, u8 *, 0x20), TB, 4).top = 0;
        }
        if (func_8012BEE8(o) != 0) {
            func_8012C218(o);
        }
        break;
    }
}

void func_sc02_005_80189204(u8 *arg0) {
    D_sc02_005_801965B0[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189240(u8 *arg0) {
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    AF(arg0, u16, 0x104) = (u16) AF(D_80126B78[0], u16, 0x12);
}

void func_sc02_005_80189268(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
    if (AF(AF(o, u8 *, 0x64), u16, 0x100) & 1) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0x104) + AF(D_80126B78[0], u16, 0x12);
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0x104) - AF(D_80126B78[0], u16, 0x12);
    }
}

s32 func_sc02_005_801892CC(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 r0;
    SV8 r1;
    SV8 r2;
    SV8 r3;
    s32 i;
    s32 n;
    u8 *p;
    SV8 *q;

    if (AF(o, s16, 0x100) < 0) {
        return 0;
    }
    b.x = 0;
    a.x = 0;
    b.z = 0;
    a.z = 0;
    a.y = 0;
    b.y = D_sc02_005_801964F4;
    FaceHelper(o, &a, &r0);
    FaceHelper(o, &b, &r1);
    b.y = D_sc02_005_801964F6;
    FaceHelper(o, &a, &r2);
    FaceHelper(o, &b, &r3);
    n = 0;
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (*(u16 *)p == 0x49) {
            q = func_80135260(AF(p, s32, 0x20), AF(p, s32, 0x58), &r0, &r1) ? &r1 : 0;
            if (func_80135260(AF(p, s32, 0x20), AF(p, s32, 0x58), &r2, &r3) != 0) {
                q = &r3;
            }
            if (q != 0) {
                if (AF(p, s16, 0xAE) == 0 && AF(p, u16, 0x5E) != 0x1D && (AF(p, u16, 0x5C) & 0xC000) == 0x8000) {
                    AF(p, u16, 0x5C) |= 1;
                    AF(p, s16, 0x60) = 8;
                    AF(p, s16, 0x62) = 0;
                    AF(p, s16, 0x5E) = 0x1D;
                    AF(p, s16, 0x7C) = q->x;
                    AF(p, s16, 0x7E) = q->y;
                    AF(p, s16, 0x80) = q->z;
                }
                n++;
            }
        }
    }
    if (n != 0) {
        func_8002D4C8(0xA2D, 0);
    }
    return n;
}

void func_sc02_005_801894C8(u8 *arg0) {
    D_sc02_005_801965C0[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189504(o)
    u8 *o;
{
    func_80132784(o, AF(o, s32, 0xCC), AF(o, u16, 0x70));
    AF(o, s32, 0xDC) = (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x48) - AF(AF(o, u8 *, 0x20), s32, 0x48)) >> 4;
    AF(o, s32, 0xE0) = (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x4C) - AF(AF(o, u8 *, 0x20), s32, 0x4C)) >> 4;
    AF(o, s32, 0xE4) = (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 0x50) - AF(AF(o, u8 *, 0x20), s32, 0x50)) >> 4;
}

void func_sc02_005_801895A4(u8 *arg0) {
    D_sc02_005_801965D4[AF(arg0, u16, 2)]();
}

void func_sc02_005_801895E0(u8 *o) {
    u8 *p;
    s32 n;
    s32 v[3];

    p = AF(o, u8 *, 0x2C);
    n = AF(o, s16, 0x30) + 1;
    v[0] = AF(p, s32, 0xDC);
    v[1] = AF(p, s32, 0xE0);
    v[2] = AF(p, s32, 0xE4);
    AF(o, s16, 6) = v[0] * n + AF(AF(p, u8 *, 0x20), s32, 0x48) - (v[0] >> 1);
    AF(o, s16, 0xA) = v[1] * n + AF(AF(p, u8 *, 0x20), s32, 0x4C) - (v[1] >> 1);
    AF(o, s16, 0xE) = v[2] * n + AF(AF(p, u8 *, 0x20), s32, 0x50) - (v[2] >> 1);
}

void func_sc02_005_8018968C(u8 *o) {
    u8 *list[10];
    s32 err;
    s32 i;
    s32 kind;
    s32 k;
    s32 v;
    u8 *p;
    u8 *q;

    v = func_sc02_005_8018B300();
    err = 0;
    AF(o, s16, 0x102) = v;
    k = (s16)v;
    AF(o, s32, 0x4) = AF(o, s32, 0x8) = AF(o, s32, 0xC) = 0;
    AF(o, s16, 0x100) = AF(o, u16, 0x70) >> 8;
    AF(o, s16, 0x70) = AF(o, u8, 0x70);
    if (k < 0) {
        err = 1;
    } else {
        if (AF(o, s16, 0x100) < 2) {
            AF(o, s16, 0xFE) = 4;
            kind = 0;
        } else {
            AF(o, s16, 0xFE) = 1;
            kind = 1;
        }
        for (i = 0; i < AF(o, s16, 0xFE); i++) {
            p = (u8 *)func_8012913C(9);
            list[i] = p;
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s16, 0x1E) = kind;
            } else {
                err++;
            }
        }
    }
    q = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = q;
    if (q == 0) {
        err++;
    }
    if (err != 0) {
        for (i = 0; i < AF(o, s16, 0xFE); i++) {
            if (list[i] != 0) {
                func_801292C8(list[i]);
            }
        }
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(q);
    AF(o, s16, 0x6) = D_sc02_005_801965DC[AF(o, s16, 0x100)].x;
    AF(o, s16, 0xA) = D_sc02_005_801965DE[AF(o, s16, 0x100)].x;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = D_sc02_005_801965E0[AF(o, s16, 0x100)].x;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = D_sc02_005_801965E2[AF(o, s16, 0x100)].x;
    for (i = 0; i < AF(o, s16, 0xFE); i++) {
        if (i == 0) {
            AF(list[0], u8 *, 0x2C) = o;
        } else {
            AF(list[i], s32, 0x2C) = 0;
        }
        AF(list[i], WMtx *, 0x34) = &D_sc02_005_801E44F8[k][i];
    }
    AF(o, s16, 0xFC) = 0;
    AF(o, s16, 0x2)++;
}

void func_sc02_005_801898F4(u8 *o) {
    s32 i;

    if (AF(o, s16, 0xFC) == 0) {
        for (i = 0; i < AF(o, s16, 0xFE); i++) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFFE;
            switch (AF(o, s16, 0x100)) {
            case 0:
                AF(AF(o, u8 *, 0x20), s16, 0x12) = i << 10;
                break;
            case 1:
                AF(AF(o, u8 *, 0x20), s16, 0x12) = i << 10;
                AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x200;
                break;
            }
            func_80132784(o, AF(o, s32, 0x64), AF(o, u16, 0x70));
            D_sc02_005_801E44F8[AF(o, s16, 0x102)][i] = *(WMtx *)(AF(o, u8 *, 0x20) + 0x34);
        }
        if (AF(o, s16, 0x100) == 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x200;
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFFE;
            func_80132784(o, AF(o, s32, 0x64), AF(o, u16, 0x70));
            if (++AF(o, s16, 0x104) < 0xC && AF(AF(o, u8 *, 0x64), s16, 0xFC) != 0) {
                func_sc02_005_80189B30(o);
            }
        }
    } else {
        D_sc02_005_801E44F0[AF(o, s16, 0x102)] = 0;
        func_8012C218(o);
    }
}

void func_sc02_005_80189AF4(u8 *arg0) {
    D_sc02_005_8019660C[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189B30(u8 *o) {
    SV8 a;
    u8 *p;
    s16 d;
    s16 r;

    a = D_sc02_005_801E2F00;
    p = AF(o, u8 *, 0x20);
    d = D_80126B62 - AF(p, s32, 0x4C);
    if (d < -0x20) {
        return;
    }
    r = AF(o, s16, 0x104) * 8 + 0x10;
    d = D_80126B5E - AF(p, s32, 0x48);
    if (d < -r || r < d) {
        return;
    }
    d = D_80126B66 - AF(p, s32, 0x50);
    if (d < -r || r < d) {
        return;
    }
    D_80126C38 = a;
    D_80126C40 = a;
    D_80126B96 = 0x4005;
    D_80126B9A = 0;
    D_80126B98 = 5;
    D_80126B94 |= 1;
}

void func_sc02_005_80189C90(u8 *arg0) {
    D_sc02_005_801966A0[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189CCC(u8 *arg0) {
    D_sc02_005_801966B8[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D08(u8 *arg0) {
    D_sc02_005_80196760[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D44(u8 *arg0) {
    D_sc02_005_801967C4[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189D80(u8 *arg0) {
    D_sc02_005_801967CC[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189DBC(u8 *arg0) {
    D_sc02_005_80196814[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189DF8(u8 *arg0) {
    D_sc02_005_80196868[AF(arg0, u16, 2)]();
}

void func_sc02_005_80189E34(u8 *o) {
    u8 *s;
    u8 *q;
    u8 *m;
    SV8 v;
    s32 flag;
    s = 0;
    if (AF(o, u32, 0x58) != 0) {
        s = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    }
    q = (u8 *)func_8012913C(0x18);
    if (q != 0 && s != 0) {
        v.x = 0;
        v.y = AF(s, s16, 8);
        v.z = 0;
        SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
        SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
        RotTransSV(&v, &v, &flag);
        AF(q, s16, 6) = v.x;
        AF(q, s16, 0xA) = v.y;
        AF(q, s16, 0xE) = v.z;
        AF(AF(q, u8 *, 0x20), u16, 0x2C) = 0xC020;
        if (D_800B99DC & 1) {
            m = AF(q, u8 *, 0x20);
            AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = -0x2000;
        } else {
            m = AF(q, u8 *, 0x20);
            AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = 0x2000;
        }
    }
}

s32 func_sc02_005_80189F44(s32 arg0) {
    return func_80132EF4(arg0, 0x16);
}

s32 func_sc02_005_80189F64(void) {
    return func_8012913C(0x15);
}

void func_sc02_005_80189F84(s32 a0) {
    func_80132EF4(a0, 0xC);
}

s32 func_sc02_005_80189FA4(s32 arg0) {
    return func_80132EF4(arg0, 0x13);
}

void func_sc02_005_80189FC4(u8 *o) {
    WMtx m;
    V16 v;
    s32 i;
    u8 *p;

    v = D_sc02_005_801E2F08;
    for (i = 0; i < 8; i++) {
        p = (u8 *)func_8012913C(0xC);
        if (p != 0) {
            func_80129350(p, o);
            AF(p, s16, 0x34) = -1;
            AF(p, s16, 6) -= 0x40;
            AF(p, s16, 0xA) -= 0x40;
            m = D_800AE620;
            RotMatrixY(i << 9, &m);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
    }
}

void func_sc02_005_8018A0E4(u8 *o) {
    u8 *p;

    p = (u8 *) func_8012913C(0xC);
    if (p != 0) {
        AF(p, s16, 6) = AF(AF(o, u8 *, 0x20), s32, 0x48) + 0x50;
        AF(p, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C) - 0x40;
        AF(p, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
        AF(p, s32, 0x14) = 0xFFF00000;
        AF(p, s32, 0x18) = 0;
        AF(p, s32, 0x10) = 0;
        AF(p, s16, 0x34) = -0x5000;
    }
}

s32 func_sc02_005_8018A174(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_v0_2 = func_sc02_005_8018A30C(arg0, var_s0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, s16, 0x34) = 0x4000;
        }
        var_s0 += 1;
        temp_v0 = var_s0 < 4;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc02_005_8018A1D8(u8 *o) {
    V16 a;
    V4 r;
    WMtx m;
    s32 i;
    s32 j;
    s32 q;

    a = D_sc02_005_801E2F18;
    for (i = 0; i < 8; i++) {
        m = D_800AE620;
        RotMatrixY(i << 9, &m);
        ApplyMatrixLV(&m, &a, &r);
        for (j = 0; j < 4; j++) {
            q = func_sc02_005_8018A30C(o, j);
            if (q != 0) {
                AF(q, s32, 0x10) = r.x;
                AF(q, s32, 0x14) = r.y;
                AF(q, s32, 0x18) = r.z;
            }
        }
    }
}

s32 func_sc02_005_8018A30C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 var_v0;
    u16 var_v0_2;

    temp_v0 = func_8012913C(0xC);
    if (temp_v0 != 0) {
        func_80129350(temp_v0, arg0);
        if (arg1 & 1) {
            var_v0 = AF(temp_v0, u16, 6) + 0x68;
        } else {
            var_v0 = AF(temp_v0, u16, 6) - 0x68;
        }
        AF(temp_v0, u16, 6) = var_v0;
        if (arg1 & 2) {
            var_v0_2 = AF(temp_v0, u16, 0xE) + 0x68;
        } else {
            var_v0_2 = AF(temp_v0, u16, 0xE) - 0x68;
        }
        AF(temp_v0, u16, 0xE) = var_v0_2;
    }
    return temp_v0;
}

void func_sc02_005_8018A3B4(u8 *o) {
    s32 i;
    s32 j;
    u8 *p;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            p = (u8 *)func_80132EF4(o, 0xC);
            if (p != 0) {
                if (i != 0) {
                    AF(p, u16, 6) += 0x68;
                } else {
                    AF(p, u16, 6) -= 0x68;
                }
                if (j != 0) {
                    AF(p, u16, 0xE) += 0x82;
                } else {
                    AF(p, u16, 0xE) -= 0x1A;
                }
                AF(p, u16, 0xA) -= 0x10;
            }
        }
    }
}

void func_sc02_005_8018A47C(u8 *arg0) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2F28;
    func_sc02_005_8018A6A0(arg0, (s16 *) &v);
}

void func_sc02_005_8018A4C4(u8 *o) {
    WMtx m;
    u8 unused[16];
    SV8 a;
    V16 v;
    s32 i;
    u8 *p;

    a = D_sc02_005_801E2F30;
    v = D_sc02_005_801E2F38;
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    for (i = 0; i < 8; i++) {
        p = (u8 *)func_8012913C(0xC);
        if (p != 0) {
            AF(p, s16, 6) = a.x + AF(AF(o, u8 *, 0x20), s32, 0x48);
            AF(p, s16, 0xA) = a.y + AF(AF(o, u8 *, 0x20), s32, 0x4C);
            AF(p, s16, 0xE) = a.z + AF(AF(o, u8 *, 0x20), s32, 0x50);
            m = D_800AE620;
            RotMatrixY(i << 9, &m);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
    }
}

void func_sc02_005_8018A658(u8 *arg0) {
    B8 v;

    v = *(B8 *)&D_sc02_005_801E2F48;
    func_sc02_005_8018A6A0(arg0, (s16 *) &v);
}

void func_sc02_005_8018A6A0(u8 *o, s16 *a) {
    SV8 v;
    V4 r;
    s32 flag;
    u8 *p;
    s32 q;

    func_8012B2CC(o);
    p = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(p);
    gte_SetTransMatrix(p);
    v.z = 0;
    v.x = 0;
    for (v.y = a[0]; v.y < a[1]; v.y += a[2]) {
        q = func_8012913C(0xC);
        if (q != 0) {
            gte_ldv0(&v);
            gte_rtv0tr();
            gte_stlvnl(&r);
            gte_stflg(&flag);
            AF(q, s16, 6) = r.x;
            AF(q, s16, 0xA) = r.y;
            AF(q, s16, 0xE) = r.z - 8;
        }
    }
}

void func_sc02_005_8018A7D0(void) {
}

void func_sc02_005_8018A7D8(u16 *cnt, s16 *base, s16 *range, s32 sh) {
    u8 *p;

    if ((*cnt & (s16)((1 << sh) - 1)) == 0) {
        p = (u8 *)func_8012913C(0xD);
        if (p != 0) {
            AF(p, s16, 0x6) = base[0] + rand() % (range[0] * 2) - range[0];
            AF(p, s16, 0xA) = base[1] + rand() % (range[1] * 2) - range[1];
            AF(p, s16, 0xE) = base[2] + rand() % (range[2] * 2) - range[2];
            AF(p, s32, 0x10) = AF(p, s32, 0x14) = AF(p, s32, 0x18) = 0;
            AF(p, s16, 0x34) = base[3];
        }
    }
    (*cnt)++;
}

void func_sc02_005_8018A968(u8 *o) {
    SpawnDef d;
    s32 i;
    s16 z;
    u8 *r;

    d.y = -0x8C0;
    d.kind = 0x57;
    d.unk10 = d.unkE = d.unk8 = d.flags = 0;
    z = D_sc02_005_80195AC6 - 0xA8;
    for (i = 0; i < 6; i++) {
        d.z = z;
        d.x = D_sc02_005_80195AD6[0] + 0xE4;
        r = (u8 *)func_8012C51C(&d, 0);
        D_sc02_005_801E4A58[i * 2] = (s32)r;
        if (r != 0) {
            AF(r, u8 *, 0x64) = o;
            AF(r, s16, 0x100) = i * 2;
        }
        d.z = z;
        d.x = D_sc02_005_80195AD6[-1] - 0x114;
        r = (u8 *)func_8012C51C(&d, 0);
        D_sc02_005_801E4A58[i * 2 + 1] = (s32)r;
        if (r != 0) {
            AF(r, u8 *, 0x64) = o;
            AF(r, s16, 0x100) = i * 2 + 1;
        }
        z += 0x150;
    }
}

s32 func_sc02_005_8018AA88(void) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 0xB;
    var_v0 = &D_sc02_005_801E4A84;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 0x1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc02_005_8018AAAC(void) {
    s32 temp_v0;
    s32 var_s2;
    void **var_s1;
    void *temp_s0;

    var_s2 = 0;
    var_s1 = &D_sc02_005_801E4A58;
    do {
        temp_s0 = *var_s1;
        if ((temp_s0 != NULL) && (AF(temp_s0, u16, 2) == 2)) {
            func_80132784((s32) temp_s0, AF(temp_s0, s32, 0x64), (s32) AF(temp_s0, u16, 0xFE));
            AF(temp_s0, s16, 6) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x48);
            AF(temp_s0, s16, 0xA) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x4C);
            AF(temp_s0, s16, 0xE) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x50);
            func_8012B23C((s32) temp_s0);
            AF(temp_s0, s32, 0x10) = 0x100000;
            AF(temp_s0, s32, 0x14) = 0xFFE00000;
            AF(temp_s0, s32, 0x18) = 0xFFFC0000;
            AF(temp_s0, s32, 0x1C) = 0x20;
            func_8012AD44((s32) temp_s0, 5);
        }
        var_s2 += 1;
        temp_v0 = var_s2 < 0xC;
        var_s1 += 0x1;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc02_005_8018AB84(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_sc02_005_801E4A58;
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            *var_s0 = 0;
            func_8012C218(temp_a0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0xC;
        var_s0 = (s32 *)((u8 *)var_s0 + 4);
    } while (temp_v0 != 0);
    return temp_v0;
}

u8 *func_sc02_005_8018ABE0(s32 a0) {
    if ((u16)a0 < 12) {
        return (u8 *)D_sc02_005_801E4A58[(s16)a0];
    }
    return 0;
}

void func_sc02_005_8018AC10(s32 arg0) {
    D_sc02_005_801E4A58[AF(arg0, s16, 0x100)] = 0;
    func_8012C218(arg0);
}

s32 func_sc02_005_8018AC48(u8 *o) {
    s32 i;
    u8 *p;

    for (i = 0; i < 12; i++) {
        p = (u8 *)D_sc02_005_801E4A58[i];
        if (p != 0 && AF(p, s16, 0xFC) == 0 && (u16)(AF(o, u16, 0xE) - AF(p, u16, 0xE) - 0xC1) < 0xFF) {
            return i;
        }
    }
    return -1;
}

s32 func_sc02_005_8018ACB4(u8 *o) {
    s32 i;
    u8 *p;

    for (i = 0; i < 12; i++) {
        p = (u8 *)D_sc02_005_801E4A58[i];
        if (p != 0 && AF(p, s16, 0xFC) == 0 && (u16)(AF(p, u16, 0xE) - AF(o, u16, 0xE) - 0x81) < 0x1F) {
            return i;
        }
    }
    return -1;
}

s32 func_sc02_005_8018AD20(u8 *o) {
    s32 i;
    s32 j;
    u8 *p;

    for (i = 0; i < 6; i++) {
        j = i * 2;
        p = (u8 *)D_sc02_005_801E4A58[j];
        if (p != 0 && AF(p, s16, 0xFC) == 0 && (u16)(AF(o, u16, 0xE) - AF(p, u16, 0xE) + 3) < 7) {
            return j;
        }
    }
    return -1;
}

void func_sc02_005_8018AD8C(s32 arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        AF(temp_s0, s16, 0xFE) = (s16) arg1;
        AF(temp_s0, s32, 0xC) = 0;
        AF(temp_s0, s32, 8) = 0;
        AF(temp_s0, s32, 4) = 0;
        AF(temp_s0, s16, 0xFC) = 1;
        func_8012AD44((s32) temp_s0, 2);
        func_sc02_005_8018A4C4((s32) temp_s0);
    }
}

void func_sc02_005_8018ADF0(s32 arg0) {
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        func_80132784((s32) temp_s0, AF(temp_s0, s32, 0x64), (s32) AF(temp_s0, u16, 0xFE));
        AF(temp_s0, s16, 6) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x48);
        AF(temp_s0, s16, 0xA) = (s16) AF(AF(temp_s0, void *, 0x20), s32, 0x4C);
        AF(temp_s0, s16, 0xE) = (s16) (AF(AF(temp_s0, void *, 0x20), s32, 0x50) - 0x10);
        AF(AF(temp_s0, void *, 0x20), s16, 0x10) = 0x100;
        AF(AF(temp_s0, void *, 0x20), s16, 0x12) = 0x200;
        AF(AF(temp_s0, void *, 0x20), s16, 0x14) = 0;
        func_8012B200((s32) temp_s0);
        AF(temp_s0, s32, 0x18) = 0xFFE00000;
        AF(temp_s0, s32, 0x14) = 0x200000;
        AF(temp_s0, s32, 0x10) = 0xFFF00000;
        func_8012AD44((s32) temp_s0, 3);
    }
}

void func_sc02_005_8018AEB4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_sc02_005_801E4A58[arg0];
    if (temp_s0 != NULL) {
        AF(temp_s0, s16, 0xFC) = 1;
        func_8001C924(AF(temp_s0, s32, 0x20), (s32) &D_sc02_005_801964D4);
        func_8012AD44((s32) temp_s0, 4);
        func_8012C658(0x60, arg1, (s32) temp_s0);
        if (arg1 != 0) {
            temp_v0 = func_80132EF4((s32) temp_s0, 0xC);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + 0x60);
            }
        }
    }
}

void func_sc02_005_8018AF58(u8 *o) {
    WMtx m;
    V16 v;
    s32 i;
    u8 *p;

    v = D_sc02_005_801E2F08;
    for (i = 0; i < 8; i++) {
        p = (u8 *)func_8012913C(0xC);
        if (p != 0) {
            func_80129350(p, o);
            m = D_800AE620;
            RotMatrixY(i << 9, &m);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
    }
}

void func_sc02_005_8018B058(u8 *o) {
    SV8 a;
    V3 v;
    WMtx m;
    s32 i;
    u8 *p;
    a = D_sc02_005_801E2F00;
    v.x = AF(o, s32, 0x10) >> 2;
    v.y = 0xFFF40000;
    v.z = AF(o, s32, 0x18) >> 2;
    a.y = -0x100;
    for (i = 0; i < 4; i++) {
        p = (u8 *)func_8012C658(0x54, D_sc02_005_80196870[i], 0);
        if (p != 0) {
            AF(p, s32, 4) = AF(o, s32, 4);
            AF(p, s32, 8) = AF(o, s32, 8);
            AF(p, s32, 0xC) = AF(o, s32, 0xC);
            RotMatrix(&a, &m);
            func_8012B23C(p);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
        a.y += 0x200;
    }
}

void func_sc02_005_8018B16C(u8 *o, s32 n, u16 *v) {
    WMtx m;
    s32 i;
    u8 *e;
    u16 *q;

    m = D_800AE620;
    q = &D_800B99DC;
    RotMatrixY(*q, &m);
    *q += D_800B99D8;
    for (i = 0; i < n; i++) {
        e = (u8 *)func_8012C658(0x54, D_sc02_005_80196880[i].v[0], 0);
        if (e != 0) {
            AF(e, s16, 6) = v[0] + AF(AF(o, u8 *, 0x20), s32, 0x48);
            AF(e, s16, 0xA) = v[1] + AF(AF(o, u8 *, 0x20), s32, 0x4C);
            AF(e, s16, 0xE) = v[2] + AF(AF(o, u8 *, 0x20), s32, 0x50);
            func_8012B23C(e);
            ApplyMatrixLV(&m, &D_sc02_005_80196874[i], e + 0x10);
        }
    }
}

s32 func_sc02_005_8018B2DC(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 7;
    var_v0 = &D_sc02_005_801E44F7;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc02_005_8018B300(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_sc02_005_801E44F0[i] == 0) {
            D_sc02_005_801E44F0[i] = 1;
            return i;
        }
    }
    return -1;
}

void func_sc02_005_8018B344(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u8, 0x26) = 0xC8;
        AF(temp_v1, u8, 0x25) = 0xC8;
        AF(temp_v1, u8, 0x24) = 0xC8;
    }
}

void func_sc02_005_8018B368(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    D_sc02_005_801964C4[0] = D_sc02_005_801BB8F8;
    func_8001C214(AF(arg0, s32, 0x20), D_sc02_005_801964C4);
    AF(AF(arg0, s32, 0x20), s32, 0x28) = 0xB000D0;
    SetScript(arg0, (s32) &D_sc02_005_80190C0C);
    AF(arg0, s32 *, 0x58) = &D_sc02_005_801964DC;
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 0xFC) = 0;
    func_sc02_005_80188A5C(arg0);
}

void func_sc02_005_8018B408(void) {
}

void func_sc02_005_8018B410(u8 *arg0) {
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), (s32) AF(arg0, u16, 0xFE));
}

void func_sc02_005_8018B438(void) {
}

void func_sc02_005_8018B440(s32 arg0, s32 arg1) {
    void *temp_v1;

    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc02_005_8018AC10(arg0);
        return;
    }
    func_8012AD80(arg0);
    AF(AF(arg0, void *, 0x20), s32, 0x48) = (s32) AF(arg0, s16, 6);
    AF(AF(arg0, void *, 0x20), s32, 0x4C) = (s32) AF(arg0, s16, 0xA);
    AF(AF(arg0, void *, 0x20), s32, 0x50) = (s32) AF(arg0, s16, 0xE);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 1);
}

void func_sc02_005_8018B4D0(u8 *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) & 1) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    } else {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018B554(u8 *o) {
    s32 t;
    s32 i;
    u8 *p;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C2C4(t);
    for (i = 0; i < 0xF; i++) {
        p = (u8 *) func_8012913C(0xB);
        if (p != 0) {
            AF(p, u8 *, 0x2C) = o;
            AF(p, s16, 0x30) = i;
        }
    }
    AF(o, s16, 0x34) = 0;
    AF(o, s16, 2)++;
}

void func_sc02_005_8018B5E0(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    if (temp_v1 == 0) {
        if (AF(arg0, s16, 0xFC) == 0) {
            func_sc02_005_80189504();
            return;
        }
        AF(arg0, u16, 0x34) = (u16) (temp_v1 + 1);
        return;
    }
    func_8012C218((s32) arg0);
}

void func_sc02_005_8018B638(u8 *arg0) {
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s1, (s32) &D_sc02_005_801965C8, 0x2BC, 0x1B0);
    AF(temp_s1, u8, 0x27) = 0x59;
    func_sc02_005_801895E0((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018B6A0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x2C), s16, 0xFC) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc02_005_801895E0((s32) arg0);
}

void func_sc02_005_8018B6E8(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s32 t;

    func_8001CB6C(p, &D_sc02_005_80196614, 0x320, 0x100);
    t = AF(o, s32, 0x34);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x2800;
    AF(p, u8, 0x27) = 0x5F;
    AF(p, s32, 0x34) = t;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x1E) != 0) {
        func_80128EA8(p, o + 0x24, &D_sc02_005_80196660);
    } else {
        func_80128EA8(p, o + 0x24, &D_sc02_005_80196620);
    }
    AF(o, u16, 2)++;
}

void func_sc02_005_8018B7A4(u8 *arg0) {
    void *temp_v1;

    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        temp_v1 = AF(arg0, void *, 0x2C);
        if (temp_v1 != NULL) {
            AF(temp_v1, s16, 0xFC) = 1;
        }
        func_801292C8((s32) arg0);
    }
}

void func_sc02_005_8018B7F8(u8 *o) {
    u16 h;
    u8 *t;

    AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_800D387C;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x9C;
    h = AF(o, u16, 0x34) & 0x7FFF;
    if (h != 0) {
        t = AF(o, u8 *, 0x20);
        AF(t, u16, 0x1A) = h;
    } else {
        t = AF(o, u8 *, 0x20);
        AF(t, u16, 0x1A) = h = 0x6000;
    }
    AF(t, u16, 0x18) = h;
    if (AF(o, s16, 0x34) & 0x8000) {
        func_80128EA8(AF(o, s32, 0x20), o + 0x24, &D_sc02_005_80196710);
    } else {
        func_80128EA8(AF(o, s32, 0x20), o + 0x24, &D_sc02_005_801966C0);
    }
    AF(o, u16, 2)++;
}

void func_sc02_005_8018B8CC(u8 *arg0) {
    func_8001CB6C(AF(arg0, s32, 0x20), (s32) &D_sc02_005_801921F8, 0x250, 0x1A0);
    AF(AF(arg0, s32, 0x20), s32, 4) = 0x60000000;
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x14;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018B93C(s32 arg0) {
    if (D_801270C8 == 0x13) {
        func_801292C8(arg0);
    }
}

void func_sc02_005_8018B96C(u8 *o) {
    u8 *s;
    SV8 unused;
    s16 d;

    s = AF(o, u8 *, 0xCC);
    if (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 4) < 0) {
        AF(s, s32, 4) |= 0x80000000;
    } else {
        func_801439FC(o);
    }
    AF(s, s16, 0x14) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
    d = AF(s, u16, 0xA) - AF(AF(o, u8 *, 0x64), u16, 0xA);
    if (d < -0x20 || d > 0x400) {
        AF(s, s16, 0x1A) = 0;
        AF(s, s16, 0x18) = 0;
    } else {
        AF(s, s16, 0x18) = AF(s, s16, 0x1A) = -0x8000 - d * 32;
    }
}

void func_sc02_005_8018BA38(s32 arg0) {
    s32 pad[4];
    s32 *var_a1;
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    var_a1 = &D_sc02_005_801966A8;
    if (AF(arg0, u16, 0x70) & 1) {
        var_a1 = &D_sc02_005_801966B0;
    }
    func_8001C214(temp_v0, (s32) var_a1);
    SetScript(arg0, (s32) &D_sc02_005_80190C0C);
    AF(arg0, s16, 0xFC) = (s16) (rand() & 0x3F0);
    AF(arg0, s16, 0xFE) = (s16) (rand() & 0x3F0);
    AF(arg0, s32, 0x1C) = 0x60;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BAE4(u8 *arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + AF(arg0, u16, 0xFC));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x10) = (u16) (AF(temp_a1, u16, 0x10) + AF(arg0, u16, 0xFE));
    func_8012AD80((s32) arg0, (s32) temp_a1);
    if (AF(arg0, s16, 0xA) >= -0x7FF) {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018BB58(s32 arg0, s32 arg1) {
    func_8012931C(arg0, arg1);
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_801292C8(arg0);
    }
}

void func_sc02_005_8018BB9C(u8 *o) {
    u8 *t;
    s32 v;

    AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc02_005_80196768;
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x90;
    v = AF(o, u16, 0x34) & 0x7FFF;
    if (v != 0) {
        t = AF(o, u8 *, 0x20);
        AF(t, s16, 0x18) = AF(t, s16, 0x1A) = v;
    } else {
        t = AF(o, u8 *, 0x20);
        AF(t, s16, 0x18) = AF(t, s16, 0x1A) = 0x3000;
    }
    func_80128EA8(AF(o, u8 *, 0x20), o + 0x24, &D_sc02_005_80196774);
    AF(o, s16, 2)++;
}

void func_sc02_005_8018BC48(u8 *arg0) {
    func_8012931C();
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
        return;
    }
    AF(AF(arg0, s32, 0x20), u8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
}

void func_sc02_005_8018BCA4(u8 *arg0) {
    func_80128D60(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc02_005_801967D4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BCEC(u8 *arg0) {
    func_80128DB4(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24));
}

void func_sc02_005_8018BD14(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_sc02_005_8019681C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x65;
    func_80128EA8((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc02_005_80196828);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018BD90(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc02_005_8018BDD0(u8 *o) {
    func_800233CC(&D_sc02_005_801E4918, 0x50);
    *(B4 *)&D_sc02_005_801E4918 = *(B4 *)&D_sc02_005_801E2F50;
    *(B4 *)&D_sc02_005_801E491C = *(B4 *)&D_sc02_005_801E2F54;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0xD0000000;
    AF(o, s16, 0xA) = -0x20;
    AF(o, s16, 0xE) = -0x20;
    AF(o, s16, 6) = 0;
    AF(o, s32, 0x1C) = 10;
    func_8012AD44(o, 1);
}

void func_sc02_005_8018BE88(u8 *o) {
    s32 i;
    s32 d;
    s32 t;

    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = 0;
    AF(o, s16, 0xE) = -0x30;
    func_80132784(o, AF(o, s32, 0xCC), AF(o, u16, 0x70));
    AF(o, s16, 6) = AF(AF(o, u8 *, 0x20), s32, 0x48);
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x20), s32, 0x50);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
    for (i = 0; i < 8; i++) {
        func_8012C658(0x55, i, o);
    }
    func_8002D4C8(0x4EF, 0);
    AF(o, s32, 0x10) = (D_80126B5E - AF(o, s16, 6)) << 13;
    AF(o, s32, 0x14) = 0;
    d = D_80126B66;
    t = AF(o, s16, 0xE) + 0x20;
    AF(o, s32, 0x18) = (d - t) << 13;
    AF(o, s32, 0x1C) = 4;
    func_8012AD44(o, 2);
}

s32 func_sc02_005_8018BF88(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 2);
    return func_8012AD44(arg0, 3);
}

s32 func_sc02_005_8018BFBC(s32 arg0) {
    return func_8012AD44(arg0, 4);
}

s32 func_sc02_005_8018BFDC(s32 arg0) {
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 1);
    return func_8012AD44(arg0, 5);
}

void func_sc02_005_8018C008(u8 *o) {
    s32 i;

    AF(o, s16, 0x100) = 0;
    AF(o, s16, 0xE) -= 0x14;
    for (i = 0; i < 8; i++) {
        if (func_8012C658(0x55, i + 8, o) != 0) {
            AF(o, s16, 0x100)++;
        }
    }
    func_8012AD44(o, 6);
}

void func_sc02_005_8018C08C(u8 *arg0) {
    D_sc02_005_801968F4[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_8018C0C8(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    SetScript(arg0, (s32) &D_sc02_005_80196B30);
    return func_8012AD44(arg0, 2);
}

void func_sc02_005_8018C108(u8 *arg0) {
    D_sc02_005_80196B80[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018C144(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, u16, 0x5E) == 0xC) {
        SetScript((s32) arg0, (s32) &D_sc02_005_80196AE8);
        AF(arg0, u8, 0xC1) = 1;
        if (AF(arg0, u16, 0x70) & 8) {
            func_sc02_005_80189F44((s32) arg0);
        }
        func_8002D4C8(0x4FE, 0);
        return;
    }
    AF(arg0, u16, 0x5E) = 0U;
    AF(arg0, u8, 0xC1) = 0;
}

void func_sc02_005_8018C1C0(u8 *arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x98) == 0) {
        temp_v1 = AF(arg0, void *, 0x64);
        AF(temp_v1, u16, 0x100) = (u16) (AF(temp_v1, u16, 0x100) - 1);
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018C204(u8 *o) {
    SV8 a, b;

    a.x = a.z = 0;
    b.x = b.z = 0;
    a.y = D_sc02_005_80196B60;
    b.y = D_sc02_005_80196B62;
    if (func_8012DEB8(o, &a, &b)) {
        D_80126B98 = 5;
        D_80126B96 |= 0x4200;
    }
}

void func_sc02_005_8018C274(u8 *arg0) {
    D_sc02_005_80196B8C[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018C2B0(u8 *p, s32 d0) {
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

void func_sc02_005_8018C358(u8 *arg0) {
    D_sc02_005_80196B98[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_8018C394(s32 arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0;
    AF(temp_v0, s16, 0x1A) = 0;
    AF(temp_v0, s16, 0x18) = 0;
    return func_8012AD44(arg0, 1);
}

void func_sc02_005_8018C3C4(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    func_8012AD44(arg0, 2);
}

s32 func_sc02_005_8018C3EC(s32 arg0) {
    D_801270C8 = 0x21;
    return func_8012AD44(arg0, 3);
}

void func_sc02_005_8018C418(u8 *arg0) {
    D_sc02_005_80196BA0[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018C454(u8 *o) {
    WMtx m;
    SV8 r;
    SV8 v;
    s32 flag;

    r.x = r.z = 0;
    r.y = AF(AF(o, u8 *, 0x64), u16, 0xFE) + ((AF(o, u16, 0x70) & 7) << 9);
    v.x = v.y = 0;
    v.z = AF(AF(o, u8 *, 0x64), u16, 0xFC);
    m.t[0] = AF(AF(o, u8 *, 0x64), s16, 0x6);
    m.t[1] = AF(AF(o, u8 *, 0x64), s16, 0xA);
    m.t[2] = AF(AF(o, u8 *, 0x64), s16, 0xE);
    RotMatrix(&r, &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0tr();
    gte_stlvnl(o + 4);
    gte_stflg(&flag);
    AF(o, s32, 4) <<= 16;
    AF(o, s32, 8) <<= 16;
    AF(o, s32, 0xC) <<= 16;
}

void func_sc02_005_8018C598(s32 a0, u8 *a1, u8 *a2, s32 *p, s32 a4, s32 a5) {
    u16 n;
    u16 m;
    u8 *r;

    n = a4;
    m = a5;
    r = (u8 *)func_8012C588(0x7A, a0);
    if (r != 0) {
        *(B8 *)(r + 0x50) = *(B8 *)a1;
        *(B8 *)(AF(r, u8 *, 0x20) + 0x10) = *(B8 *)a2;
        AF(r, s32, 0x1C) = m;
        if (n != 0) {
            AF(r, s16, 0xFC) = n;
        } else {
            AF(r, s16, 0xFC) = 1;
        }
        AF(r, s32 *, 0xCC) = p;
    }
    *p = (s32)r;
}

void func_sc02_005_8018C66C(u8 *arg0) {
    D_sc02_005_80196BB0[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018C6A8(u8 *o) {
    u8 *p;

    AF(o, u8 *, 0x20) = p = (u8 *)func_8012C1B8();
    if (p == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CA88(p, &D_sc02_005_801E4918);
    if (AF(o, s16, 0x70) != 0) {
        AF(o, s16, 0xFC) = 0;
        AF(o, s16, 0xFE) = 0;
        AF(o, s16, 0x102) = 0;
        func_sc02_005_8018BDD0(o);
    } else {
        AF(p, s32, 0x4) |= 0x80000000;
        AF(o, s16, 0xFC) = 0x58;
        AF(o, s16, 0xFE) = 0x100;
        AF(o, s16, 0x102) = 2;
        func_sc02_005_8018C008(o);
    }
}

void func_sc02_005_8018C758(u8 *o) {
    u8 *p;

    p = AF(o, u8 *, 0x20);
    AF(p, u32, 4) &= 0x7FFFFFFF;
    if (func_sc02_005_80185D6C() != 0) {
        func_8012C218(o);
    } else if (func_8012BEE8(o) != 0) {
        func_sc02_005_8018BE88(o);
    } else {
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = AF(p, s16, 0x1C) - 0x180;
        ((CV4 *)&D_sc02_005_801E4918)->r += 0x10;
        ((CV4 *)&D_sc02_005_801E4918)->g += 0x10;
        D_sc02_005_801E491C += 0x10;
        ((CV4 *)&D_sc02_005_801E491C)->g += 8;
        func_80132784(o, AF(o, s32, 0xCC), AF(o, u16, 0x70));
    }
}

void func_sc02_005_8018C84C(u8 *o) {
    s16 v;
    s32 z;
    s32 d;

    func_8012AD80(o);
    v = AF(o, s16, 0xFC);
    if (v < 0x80) {
        AF(o, s16, 0xFC) = v + 0x10;
    }
    AF(o, u16, 0xFE) -= 0x40;
    if (func_8012BEE8(o) != 0) {
        if (AF(o, u16, 0x34) == 0) {
            AF(o, s32, 0x10) = (D_80126B5E - AF(o, s16, 6)) << 14;
            AF(o, s32, 0x14) = (AF(AF(o, u8 *, 0x64), s16, 0xA) - AF(o, s16, 0xA)) << 14;
            d = D_80126B66;
            AF(o, s32, 0x1C) = 4;
            AF(o, u16, 0x34)++;
            z = AF(o, s16, 0xE) + 0x20;
            AF(o, s32, 0x18) = (d - z) << 14;
        } else {
            func_sc02_005_8018BF88((s32) o);
        }
    }
}

void func_sc02_005_8018C928(u8 *arg0, s32 arg1) {
    AF(arg0, u16, 0x102) = (u16) (AF(arg0, u16, 0x102) | 4);
    AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) - 0x40);
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_sc02_005_8018BFBC((s32) arg0);
    }
}

void func_sc02_005_8018C978(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, s16, 0xFC);
        if (temp_v0 >= 0x51) {
            AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 2);
        } else {
            AF(arg0, s32, 0x1C) = 0xA0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc02_005_8018BFDC((s32) arg0);
        }
        break;
    }
    AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) - 0x40);
}

void func_sc02_005_8018CA1C(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018CA3C(u8 *arg0) {
    if (AF(arg0, s16, 0x100) == 0) {
        D_801270C8 = 0xD;
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018CA74(u8 *o) {
    u8 *p;
    s32 t;

    t = func_8012C1B8();
    p = (u8 *)t;
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001CA1C(p, &D_sc02_005_80196910);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x2800;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = 0;
    AF(o, u8 *, 0xBC) = &D_sc02_005_80196B68;
    AF(o, s32, 0x58) = (s32)&D_sc02_005_80196B58 | 0x20000000;
    AF(o, u8, 0x75) = 1;
    AF(o, u8, 0xC1) = 0;
    AF(o, s32, 0xC4) |= 2;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(o, s16, 0x5C) = 0;
    AF(o, u16, 0xAE) |= 0xFFFD;
    SetScript(o, &D_sc02_005_80196A60);
    AF(o, s16, 0x98) = 1;
    AF(o, s32, 0x94) = AF(o, u16, 0x70) & 7;
    func_8012AD50(o);
}

void func_sc02_005_8018CB70(u8 *o) {
    u16 f;

    f = AF(AF(o, u8 *, 0x64), u16, 0x102);
    if (f & 4) {
        func_sc02_005_8018C204(o);
    }
    if (f & 2) {
        AF(o, u16, 0x5C) |= 0x8000;
    }
    func_sc02_005_8018C454(o);
    if (f & 1) {
        func_sc02_005_8018C0C8((s32) o);
    }
}

void func_sc02_005_8018CBF8(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018CC28(u8 *o) {
    func_8001CD50(AF(o, s32, 0x20), &D_sc02_005_801E4958);
    AF(o, u16, 0xA) -= 0x100;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
    AF(o, s16, 0x2C) = 8;
    func_800233CC(&D_sc02_005_801E4958, 8);
    *(B4 *)&D_sc02_005_801E4958 = *(B4 *)&D_sc02_005_801E2F58;
    *(B4 *)&D_sc02_005_801E495C = *(B4 *)&D_sc02_005_801E2F5C;
    AF(o, u16, 2)++;
}

void func_sc02_005_8018CCF8(u8 *arg0) {
    AF(arg0, u16, 0x2C) = (u16) (AF(arg0, u16, 0x2C) + 0x20);
    func_sc02_005_8018C2B0((s32) &D_sc02_005_801E4958, -4);
    func_sc02_005_8018C2B0((s32) (&D_sc02_005_801E4958 + 4), -4);
    func_800233CC((s32) &D_sc02_005_801E4958, (s32) AF(arg0, u16, 0x2C));
    if ((s16) AF(arg0, u16, 0x2C) >= 0x380) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018CD80(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x2C) - 0x20;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc02_005_8018C2B0((s32) &D_sc02_005_801E4958, -4);
    func_sc02_005_8018C2B0((s32) (&D_sc02_005_801E4958 + 4), -4);
    func_800233CC((s32) &D_sc02_005_801E4958, (s32) AF(arg0, u16, 0x2C));
}

void func_sc02_005_8018CE04(u8 *arg0) {
    s32 temp_a2;

    func_8001CD50(AF(arg0, s32, 0x20), (s32) &D_sc02_005_801E4918);
    temp_a2 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x50000000);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    func_800233CC((s32) &D_sc02_005_801E4918, 0x10);
    *(B4 *) &D_sc02_005_801E4918 = *(B4 *) &D_sc02_005_801E2F60;
    *(B4 *) &D_sc02_005_801E491C = *(B4 *) &D_sc02_005_801E2F64;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018CEE0(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc02_005_8018C2B0((s32) &D_sc02_005_801E491C, -4);
        func_800233CC((s32) (&D_sc02_005_801E491C - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc02_005_8018CF58(s32 arg0) {
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
    func_8001C810(temp_v0, (s32) &D_sc02_005_801F1988);
    temp_v0_2 = func_8012C1B8();
    AF(arg0, s32, 0xCC) = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_8012CAE4(arg0);
        AF(AF(arg0, s32, 0x20), s16, 0) = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc02_005_801F2138);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u8, 0xC0) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    temp_v1_3 = AF(arg0, s32, 0xCC);
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = AF(arg0, s32, 0xCC);
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x10);
    func_sc02_005_8018C394(arg0);
}

void func_sc02_005_8018D04C(u8 *arg0) {
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
    func_sc02_005_8018C3C4();
}

void func_sc02_005_8018D144(u8 *arg0, s32 arg1) {
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
            func_sc02_005_8017C048();
        }
        break;
    case 1:
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            func_sc02_005_8018C3EC((s32) arg0);
        }
        break;
    }
    func_80016450((s32) AF(arg0, u8, 0xFC), 1);
}

void func_sc02_005_8018D21C(u8 *arg0) {
    u32 temp_v1;
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0xFC) - 3;
    temp_v1 = temp_v0 & 0xFF;
    AF(arg0, u8, 0xFC) = temp_v0;
    if (temp_v1 >= 9U) {
        func_80016450((s32) temp_v1, 1);
        return;
    }
    func_8012C218((s32) arg0);
}

void func_sc02_005_8018D270(u8 *o) {
    s32 t;
    s32 m;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    func_8001C214(t, &D_sc02_005_801BDCD0);
    AF(AF(o, u8 *, 0x20), u8 *, 0x20) = o + 0xDC;
    m = AF(AF(o, u8 *, 0x64), s32, 0x20);
    if (m != 0) {
        func_8001C1E4(AF(o, s32, 0x20), m);
        AF(o, s16, 6) = AF(o, s16, 0xA) = AF(o, s16, 0xE) = 0;
    }
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
    func_8012AD50(o);
}

void func_sc02_005_8018D318(u8 *arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 *temp_v0_3;
    u16 *temp_v1_2;
    u16 temp_v0_4;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            temp_a0 = AF(arg0, void *, 0x20);
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        }
    } else {
        if (func_8012BEE8((s32) arg0, arg1) != 0) {
            temp_v0_3 = AF(arg0, s32 *, 0xCC);
            if (temp_v0_3 != NULL) {
                *temp_v0_3 = 0;
            }
            func_8012C218((s32) arg0);
            return;
        }
        temp_v1 = AF(arg0, void *, 0x64);
        if (AF(temp_v1, s32, 0x20) == 0) {
            AF(arg0, u16, 6) = (u16) AF(temp_v1, u16, 6);
            AF(arg0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
            AF(arg0, u16, 0xE) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
        }
        temp_v1_2 = AF(AF(arg0, void *, 0x20), u16 *, 0x20);
        temp_v0_4 = *temp_v1_2 - 2;
        *temp_v1_2 = temp_v0_4;
        if ((s16) temp_v0_4 < -0x20) {
            *temp_v1_2 = 0;
        }
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x10) = (u16) (AF(temp_v1_3, u16, 0x10) + 0x40);
    }
}

void func_sc02_005_8018D43C(void) {
    FeS14s s;

    D_801270C8 = 0;
    s.a = 0x52;
    s.z = 0;
    s.y = 0;
    s.x = 0;
    s.c = 0;
    s.b = 0;
    s.e = 0;
    s.f = 0;
    func_8012C750((s32) &s);
}

void func_sc02_005_8018D488(void) {
    FeS14s s;

    D_801270C8 = 0;
    s.a = 0x52;
    s.z = 0;
    s.y = 0;
    s.x = 0;
    s.b = 1;
    s.c = 0;
    s.e = 0;
    s.f = 0;
    func_8012C750((s32) &s);
}

extern void (*D_sc02_005_80196C64[])();
extern u8 D_sc02_005_80196C44;
extern u16 D_800B99DA;
void func_sc02_005_8018D4D8(u8 *o) {
    s16 r[4];
    u16 *q;

    D_sc02_005_80196C64[AF(o, u16, 2)](o);
    if (D_801270C8 < 0x17) {
        q = (u16 *)&D_sc02_005_80196C44 + (D_800B99DA & 7) * 2;
        r[0] = q[0];
        r[1] = q[1];
        r[2] = 6;
        r[3] = 0x28;
        MoveImage(r, 0x298, 0x1C0);
    }
}

void func_sc02_005_8018D574(u8 *o) {
    u8 unused[0x28];

    func_sc02_005_8018F414();
    func_sc02_005_8018F444();
    func_sc02_005_8018F474();
    func_sc02_005_8018F4A4();
    func_sc02_005_8018F4D4();
    func_sc02_005_8018F504();
    func_sc02_005_8018F534();
    func_sc02_005_8018F564();
    func_sc02_005_8018F594();
    if (AF(o, s16, 0x70) != 0) {
        AF(o, s16, 2) = 9;
    } else {
        func_sc02_005_8018EA04(0);
        AF(o, s32, 0x1C) = 0x30;
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018D608(u8 *o) {
    FeS14s s;
    s32 r;

    if (--AF(o, s32, 0x1C) == 0) {
        s.a = 0x58;
        s.x = -0x50;
        s.y = -0x802;
        s.z = -0xF80;
        s.c = 0;
        s.b = 0;
        s.d = 0;
        r = func_8012C750((s32) &s);
        s.a = 0x59;
        s.x = -0x70;
        s.z = 0;
        s.y = 0;
        s.e = 0;
        s.f = 0;
        func_8012C51C(&s, r);
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018D6B0(u8 *o) {
    FeS14s s;

    if (D_801270C8 == 8) {
        s.a = 0x5A;
        s.y = -0x940;
        s.d = 0xC0;
        s.c = 0;
        s.b = 0;
        s.e = 0;
        s.f = 0;
        s.x = D_80126B5E;
        s.z = D_80126B66;
        func_8012C750((s32) &s);
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018D73C(u8 *o) {
    FeS14s s;

    if (D_801270C8 == 0x12) {
        s.a = 0x5E;
        s.z = 0;
        s.y = 0;
        s.x = 0;
        s.c = 0;
        s.d = 0;
        AF(&s, u16, 8) = 0xF5C0;
        s.e = 0;
        s.f = 0;
        func_8012C750((s32) &s);
        AF(&s, u16, 8) = 0xF7C0;
        func_8012C750((s32) &s);
        func_8002D4C8(8, 2);
        func_8002D4C8(0x50C, 0);
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018D7DC(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018D7F0(u8 *o) {
    FeS14s s;
    s32 t;

    if (D_801270C8 != 0x14) {
        t = AF(o, s32, 0x1C);
        AF(o, s32, 0x1C) = t - 1;
        if ((t & 7) == 0) {
            func_8013C9C4(&D_sc02_005_80196BEC);
        }
    } else {
        s.a = 0x5C;
        s.x = 0;
        s.y = 0;
        s.z = 0;
        s.c = 0;
        s.b = 0;
        s.d = 0;
        s.e = 0;
        s.f = 0;
        func_8012C750((s32) &s);
        func_sc02_005_8018EA04(1);
        func_8002D4C8(0x4FA, 0);
        AF(o, u16, 2) = (u16) (AF(o, u16, 2) + 1);
    }
}

void func_sc02_005_8018D8A8(u8 *arg0) {
    if (D_801270C8 == 0x15) {
        func_sc02_005_8018EA04(2);
        func_8002D4C8(5, 0);
        AF(arg0, s32, 0x1C) = 0xE;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018D904(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018D918(u8 *arg0) {
    if (D_801270C8 >= 0x16) {
        func_sc02_005_8018F414();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018D964(s32 arg0) {
    func_8012C588(0x68, arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018D9A4(u8 *o) {
    FeS14s s;
    s16 i;

    if (D_801270C8 == 0x18) {
        s.a = 0x5D;
        s.z = 0;
        s.y = 0;
        s.x = 0;
        s.c = 0;
        s.d = 0;
        s.e = 0;
        s.f = 0;
        for (i = 0; i < 4; i++) {
            s.b = i;
            func_8012C750((s32) &s);
        }
        AF(o, u16, 2)++;
    }
}

void func_sc02_005_8018DA40(u8 *arg0) {
    if (D_801270C8 == 0x1B) {
        func_sc02_005_80180A7C();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018DA8C(u8 *arg0) {
    if (D_801270C8 == 0x21) {
        func_sc02_005_8018F704();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018DAD8(void) {
}

void func_sc02_005_8018DAE0(u8 *arg0) {
    D_sc02_005_80196C9C[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018DB1C(u8 *arg0) {
    AF(arg0, s32 *, 0x58) = &D_sc02_005_80196C14;
    AF(arg0, s32, 0x1C) = 0x18;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018DB40(u8 *o) {
    u8 *p;
    u16 a;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C) -= 1;
        return;
    }
    if (p == 0) {
        D_sc02_005_80196BB0[3] = (void (*)())&D_sc02_005_801D852C;
        if (func_8012C354(o, &D_sc02_005_80196BB0[2]) == 0) {
            return;
        }
    }
    p = (u8 *)func_8012C1B8();
    if (p == 0) {
        return;
    }
    func_8001C97C(&D_sc02_005_801D8B8C);
    func_8001C214(p, &D_sc02_005_801D8B8C);
    AF(p, s16, 0x12) = -0x200;
    func_8001C1E4(p, AF(o, s32, 0x20));
    AF(p, u8 *, 0x20) = &D_800636C8;
    AF(p, s16, 0xA) = -0x38;
    AF(o, u8 *, 0xD0) = p;
    SetScript(o, &D_sc02_005_80190C0C);
    if (AF(o, s16, 0x70) != 0) {
        AF(o, s16, 6) = -0x80;
        AF(o, s16, 0xA) = -0xA40;
        a = AF(o, u16, 2) + 2;
        AF(o, s16, 0xE) = AF(o, s16, 0x70);
        AF(o, u16, 2) = a;
    } else {
        AF(o, s16, 6) = D_80126B5E;
        AF(o, s16, 0xA) = D_80126B62 - 0x200;
        AF(o, s16, 0xE) = D_80126B66;
        AF(o, s16, 0x12) = D_80126B6A >> 1;
        AF(o, s16, 0x16) = 4;
        AF(o, s16, 0x1A) = D_80126B72 >> 1;
        AF(o, s32, 0xCC) = func_80143994(o, 0x3000);
    }
    AF(o, s16, 2) += 1;
}

void func_sc02_005_8018DCD8(u8 *arg0) {
    s16 temp_v0;
    s16 var_s2;
    void *temp_s3;

    temp_s3 = AF(arg0, void *, 0x20);
    if (func_8012D714((s32) arg0, 2) != 0) {
        D_80126B96 = 0x4001;
        D_80126B98 = 5;
    }
    func_8012AD80((s32) arg0);
    if (AF(arg0, s16, 0xA) >= -0x802) {
        var_s2 = 0;
        AF(arg0, s16, 0xA) = -0x802;
        *AF(arg0, s16 *, 0xD0) = 0;
        do {
            func_8012C658(0x63, (s32) var_s2, (s32) arg0);
            func_8012C658(0x64, (s32) var_s2, (s32) arg0);
            temp_v0 = var_s2 + 1;
            var_s2 = temp_v0;
        } while (temp_v0 < 8);
        func_8001C97C((s32) &D_sc02_005_801D9044);
        AF(temp_s3, s32 *, 0x24) = &D_sc02_005_801D9044;
        AF(arg0, s32, 0x1C) = 0x10;
        func_8002D4C8(0x4FF, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1C000);
}

void func_sc02_005_8018DDFC(u8 *arg0) {
    s16 *temp_v0_2;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        temp_v0_2 = AF(arg0, s16 *, 0xD0);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = 0;
        }
        func_801439C0(AF(arg0, s32, 0xCC));
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018DE5C(u8 *arg0) {
    s16 *temp_v0;

    if (D_801270C8 >= 0x16) {
        temp_v0 = AF(arg0, s16 *, 0xD0);
        if (temp_v0 != NULL) {
            *temp_v0 = 0;
        }
        func_801439C0(AF(arg0, s32, 0xCC));
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018DEB8(s32 arg0) {
    FeS14s s;
    s16 k;

    k = arg0;
    s.c = 0;
    s.d = 0;
    s.z = 0;
    s.y = 0;
    s.x = 0;
    s.e = 0;
    s.f = 0;
    switch (k) {
    case 0:
        func_sc02_005_8018EA04(3);
        break;
    case 1:
        func_sc02_005_8018EA04(4);
        s.z = 0xB80;
        break;
    case 2:
        func_sc02_005_8018EA04(5);
        s.x = -0xC00;
        s.z = 0xC00;
        break;
    }
    s.a = 0x5C;
    s.b = k + 1;
    func_8012C750((s32) &s);
}

void func_sc02_005_8018DF88(u8 *arg0) {
    D_sc02_005_80196CB0[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018DFC4(u8 *o) {
    s32 a[10];
    SV8 sv;
    u8 unused[0x20];
    s32 *tbl;
    U12 *src;
    s32 n;
    s16 i;
    s16 m;
    u8 *q;

    switch (AF(o, s16, 0x70)) {
    case 0:
        func_sc02_005_8018F5C4();
        tbl = D_sc02_005_801E7ECC;
        break;
    case 1:
        func_sc02_005_8018F5EC();
        tbl = D_sc02_005_801EA378;
        break;
    case 2:
        func_sc02_005_8018F614();
        tbl = D_sc02_005_801EC6FC;
        break;
    case 3:
        func_sc02_005_8018F6DC();
        tbl = D_sc02_005_801EEA80;
        break;
    }
    if (AF(o, s16, 0x70) == 0) {
        n = 0x15;
        src = D_sc02_005_801E7F24;
        sv.x = -0x80;
        sv.y = -0xDE0;
        sv.z = -0xC50;
    } else {
        n = 0xA;
        src = D_sc02_005_801EEAAC;
        sv.x = -0x64;
        sv.y = -0x884;
        sv.z = -0x8B0;
    }
    if (AF(o, s16, 0x70) < 4) {
        func_8013C9C4(&D_sc02_005_80196C00);
        func_8002D4C8(0x500, 0);
        m = n;
        for (i = 0; i < m; i++) {
            D_sc02_005_801E4998[i][0] = tbl[i];
            D_sc02_005_801E499C[i][0] = 0;
        }
        AF(a, s16, 0xA) = AF(a, s16, 0xC) = 0;
        if (AF(o, s16, 0x70) == 3) {
            AF(a, s16, 0xC) = -0x400;
        } else {
            AF(a, s16, 0xC) = 0;
        }
        AF(a, s32, 0x10) = 0;
        AF(a, s16, 0x6) = 0x5C;
        AF(a, s16, 0x8) = AF(o, u16, 0x70) + 4;
        func_sc02_005_8018E7E4(o, a, src, &sv, n);
        func_8012C218(o);
        return;
    }
    q = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = q;
    if (q == 0) {
        func_8012C218(o);
        return;
    }
    func_8001C214(q, D_sc02_005_801E4998[AF(o, s16, 0xFC)]);
    func_8001D0E8(AF(o, u8 *, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s16, 0x2) = 3;
}

void func_sc02_005_8018E22C(void) {
}

void func_sc02_005_8018E234(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        if (temp_v0 < 0x10) {
            AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018E288(u8 *o) {
    s32 t;

    t = AF(o, s32, 0x1C);
    if (t < 0x24) {
        t++;
        AF(o, s32, 0x1C) = t;
        if (t == 1) {
            return;
        }
        if (AF(o, s16, 0x70) == 4) {
            if (AF(o, s16, 0xA) < -0x800) {
                AF(o, s32, 0x48) = 0x1C000;
                func_8012AD80(o);
                AF(AF(o, u8 *, 0x20), s16, 0x10) -= AF(o, s32, 0x18) << 4 >> 16;
                AF(AF(o, u8 *, 0x20), s16, 0x14) -= AF(o, s32, 0x10) << 4 >> 16;
            }
        } else if (AF(o, s16, 6) < -0x5FF || AF(o, s16, 0xA) < -0x7FF) {
            if (AF(o, s16, 0xA) >= -0x3FF) {
                func_8012C218(o);
            } else {
                AF(o, s32, 0x48) = 0x1C000;
                func_8012AD80(o);
                AF(AF(o, u8 *, 0x20), s16, 0x10) -= AF(o, s32, 0xDC) << 4 >> 16;
                if (AF(o, s16, 0x70) != 7) {
                    AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s32, 0x10) << 4 >> 16;
                } else {
                    AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s32, 0x18) << 4 >> 16;
                }
            }
        }
    } else {
        AF(o, s32, 0x1C) = 0x20;
        AF(o, s16, 2)--;
    }
}

void func_sc02_005_8018E400(u8 *arg0) {
    D_sc02_005_80196CC0[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018E43C(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018E450(u8 *o) {
    s32 a[6];
    SV8 sv;
    s32 n;
    s16 i;
    s16 m;
    u8 *q;
    s32 *p;

    switch (AF(o, s16, 0x70)) {
    case 0:
        if (D_801270C8 != 0x19) {
            return;
        }
        func_sc02_005_8018F63C();
        func_sc02_005_8018EA04(6);
        break;
    case 1:
        if (D_801270C8 != 0x1A) {
            return;
        }
        func_sc02_005_8018F664();
        func_sc02_005_8018EA04(7);
        AF(o, s16, 6) = -0x600;
        AF(o, s16, 0xE) = 0x700;
        break;
    case 2:
        if (D_801270C8 != 0x1C) {
            return;
        }
        func_sc02_005_8018F68C();
        func_sc02_005_8018EA04(8);
        AF(o, s16, 0xE) = 0x400;
        break;
    case 3:
        if (D_801270C8 != 0x1D) {
            return;
        }
        func_sc02_005_8018F6B4();
        func_sc02_005_8018EA04(9);
        AF(o, s16, 6) = -0x180;
        AF(o, s16, 0xE) = 0x400;
        break;
    }
    if (AF(o, s16, 0x70) < 4) {
        func_8013C9C4(&D_sc02_005_80196C00);
        func_8002D4C8(0x502, 0);
        n = 0x12;
        p = D_sc02_005_801F01D4;
        sv.x = -0x204;
        sv.y = -0x804;
        sv.z = 0x73E;
        m = n;
        for (i = 0; i < m; i++) {
            D_sc02_005_801E4998[i][0] = p[i];
            D_sc02_005_801E499C[i][0] = 0;
        }
        AF(a, s16, 0xA) = AF(a, s16, 0xC) = 0;
        if (AF(o, s16, 0x70) == 1) {
            AF(a, s16, 0xC) = 0x400;
        } else {
            AF(a, s16, 0xC) = 0;
        }
        AF(a, s32, 0x10) = 0;
        AF(a, s16, 0x6) = 0x5D;
        AF(a, s16, 0x8) = AF(o, u16, 0x70) + 4;
        func_sc02_005_8018E7E4(o, a, D_sc02_005_801F0220, &sv, n);
        func_8012C218(o);
        return;
    }
    q = (u8 *)func_8012C1B8();
    AF(o, u8 *, 0x20) = q;
    if (q == 0) {
        func_8012C218(o);
        return;
    }
    func_8001C214(q, D_sc02_005_801E4998[AF(o, s16, 0xFC)]);
    func_8001D0E8(AF(o, u8 *, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s16, 0x2) = 4;
}

void func_sc02_005_8018E6D4(void) {
}

void func_sc02_005_8018E6DC(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        if (temp_v0 < 0x10) {
            AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}

void func_sc02_005_8018E730(u8 *o) {
    s32 t;

    t = AF(o, s32, 0x1C);
    if (t < 0x28) {
        t++;
        AF(o, s32, 0x1C) = t;
        if (t != 1 && AF(o, s16, 0xA) < -0x800) {
            AF(o, s32, 0x48) = 0x38000;
            func_8012AD80(o);
            AF(AF(o, u8 *, 0x20), s16, 0x10) -= (AF(o, s32, 0x18) << 4) >> 16;
            AF(AF(o, u8 *, 0x20), s16, 0x14) -= (AF(o, s32, 0x10) << 4) >> 16;
        }
    } else {
        AF(o, s32, 0x1C) = 0x20;
        AF(o, s16, 0x2)--;
    }
}

void func_sc02_005_8018E7E4(u8 *base, u8 *e, U12 *tbl, SV8 *ref, s32 n0) {
    WMtx m;
    SV8 a;
    SV8 b;
    s16 n = n0;
    s16 i;
    u8 *r;

    m = D_800AE620;
    RotMatrixY(AF(e, s16, 0xC), &m);
    for (i = 0; i < n; i++) {
        a.x = tbl[i].v[0];
        a.y = tbl[i].v[1];
        a.z = tbl[i].v[2];
        ApplyMatrixSV(&m, &a, &b);
        AF(e, s16, 0) = AF(base, s16, 6) + b.x;
        AF(e, s16, 2) = AF(base, s16, 0xA) + b.y;
        AF(e, s16, 4) = AF(base, s16, 0xE) + b.z;
        AF(e, s16, 0xE) = i;
        r = (u8 *)func_8012C750(e);
        if (r != 0) {
            b.x = a.x - ref->x;
            b.y = a.y - ref->y;
            b.z = a.z - ref->z;
            VectorNormalSS(&b, &b);
            ApplyMatrixSV(&m, &b, &b);
            AF(r, s32, 0x10) = (b.x << 9) + (b.x << 8);
            AF(r, s32, 0x14) = AF(r, s32, 0xDC) = (b.y << 9) + (b.y << 8);
            AF(r, s32, 0x18) = (b.z << 9) + (b.z << 8);
        }
    }
}

void func_sc02_005_8018EA04(s32 x0) {
    SV8 a;
    SV8 b;
    s16 i = x0;
    s32 n = 0x1C;
    s32 c = 0xE00;

    a.x = -0x80;
    a.y = -0x880;
    b.x = 0;
    b.y = 0;
    switch (i) {
    case 0:
        a.y = -0x8C0;
        a.z = -0x12C0;
        b.z = 0x60;
        break;
    case 1:
        n = 0xA;
        a.y = -0xAC0;
        a.z = -0xBC0;
        b.y = 0xA0;
        b.z = -0xC0;
        break;
    case 2:
        n = 0x14;
        a.y = -0x7C0;
        a.z = -0xBC0;
        b.y = -0x80;
        b.z = -0x80;
        break;
    case 3:
        a.z = -0x680;
        b.z = 0xE0;
        break;
    case 4:
        a.z = 0x500;
        b.z = 0xE0;
        break;
    case 5:
        c = 0xA00;
        a.x = -0x500;
        a.z = 0xB40;
        b.z = 0xE0;
        break;
    case 6:
        c = 0x200;
        a.x = -0x200;
        a.z = 0x740;
        b.z = 0xC0;
        break;
    case 7:
        c = 0xA00;
        a.x = 0x100;
        a.z = 0x900;
        b.z = 0xC0;
        break;
    case 8:
        c = 0x200;
        a.x = -0x200;
        a.z = 0xB40;
        b.z = 0xC0;
        break;
    case 9:
        c = 0x200;
        a.x = -0x380;
        a.z = 0xB40;
        b.z = 0xC0;
        break;
    }
    func_sc02_005_8018EB60(n, &a, &b, c);
}

void func_sc02_005_8018EB60(s32 n0, s16 *pos, void *dir, s32 ang0) {
    s16 n = n0;
    s16 i;
    s32 ang = ang0;
    SV8 v;
    u8 m[0x20];
    u8 *p;
    u32 r;

    for (i = 0; i < n; i++) {
        p = (u8 *)func_8012913C(10);
        if (p != 0) {
            r = rand();
            v.x = (r & 0x7F) * 8 + 0xF40;
            v.y = ang + ((r & 0x7F00) >> 5);
            v.z = 0;
            RotMatrixYXZ(&v, m);
            ApplyMatrixSV(m, dir, &v);
            AF(p, s16, 0x6) = pos[0] + v.x;
            AF(p, s16, 0xA) = pos[1] + v.y;
            AF(p, s16, 0xE) = pos[2] + v.z;
            AF(p, s32, 0x10) = v.x << 11;
            AF(p, s32, 0x14) = v.y << 11;
            AF(p, s32, 0x18) = v.z << 11;
        }
    }
}

void func_sc02_005_8018ECB8(u8 *arg0) {
    D_sc02_005_80196CD4[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018ECF4(u8 *arg0) {
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
    AF(arg0, s16, 0x2C) = 0x46;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_005_8018ED84(u8 *arg0) {
    s32 pad[4];
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_801292C8((s32) arg0);
        return;
    }
    func_8012931C();
    temp_v0_2 = AF(temp_s0, u8, 0x26) - 2;
    AF(temp_s0, u8, 0x26) = temp_v0_2;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    AF(temp_s0, u8, 0x24) = temp_v0_2;
}

void func_sc02_005_8018EDF8(u8 *arg0) {
    D_sc02_005_80196CDC[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018EE34(u8 *o) {
    V3 v;
    u8 **q;

    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    q = &D_sc02_005_80196BBC;
    *q = &D_sc02_005_801D9134;
    if (func_8012C354(o, (u8 *)q - 4) != 0) {
        SetScript(o, &D_sc02_005_80190C0C);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0x70) << 9;
        func_8012B2CC(o);
        v.x = 0;
        v.y = 0xFFF20000;
        v.z = -(((rand() & 0xF) + 0x28) << 12);
        func_8012B14C(o, &v);
        AF(o, s32, 0x48) = 0x1C000;
        AF(o, s16, 0xDC) = (rand() & 0x7F) - 0x40;
        AF(o, s32, 0x1C) = 0x12;
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018EF20(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8012AD80((s32) arg0, arg1);
    AF(temp_s0, u16, 0x14) = (u16) (AF(temp_s0, u16, 0x14) + AF(arg0, u16, 0xDC));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018EF90(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018EFB0(u8 *arg0) {
    D_sc02_005_80196CE8[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018EFEC(u8 *o) {
    V3 v;
    u8 **q;

    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    q = &D_sc02_005_80196BBC;
    *q = &D_sc02_005_801D91CC;
    if (func_8012C354(o, (u8 *)q - 4) != 0) {
        SetScript(o, &D_sc02_005_80190C0C);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0x70) << 9;
        func_8012B2CC(o);
        v.x = 0;
        v.y = 0xFFF00000;
        v.z = ((rand() & 0xF) + 0x58) << 16;
        func_8012B14C(o, &v);
        func_8012AD80(o);
        AF(AF(o, u8 *, 0x20), s32, 0x48) = AF(AF(o, u8 *, 0x20), s16, 8) = AF(o, s16, 6);
        AF(AF(o, u8 *, 0x20), s32, 0x4C) = AF(AF(o, u8 *, 0x20), s16, 0xA) = AF(o, s16, 0xA);
        AF(AF(o, u8 *, 0x20), s32, 0x50) = AF(AF(o, u8 *, 0x20), s16, 0xC) = AF(o, s16, 0xE);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 1;
        AF(o, s32, 0x14) = 0xFFEE0000;
        AF(o, s32, 0x48) = 0x1C000;
        AF(o, s32, 0x10) >>= 4;
        AF(o, s32, 0x18) >>= 4;
        AF(o, s16, 0xDC) = (rand() & 0x1FF) - 0x100;
        AF(o, s32, 0x1C) = 0x14;
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018F164(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_8012AD80((s32) arg0, arg1);
    AF(temp_s0, u16, 0x10) = (u16) (AF(temp_s0, u16, 0x10) + AF(arg0, u16, 0xDC));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_005_8018F1D4(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_005_8018F1F4(u8 *arg0) {
    D_sc02_005_80196CF4[AF(arg0, u16, 2)]();
}

void func_sc02_005_8018F230(u8 *o) {
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t != 0) {
        func_8001C2C4(t);
        AF(o, s32, 0x58) = (s32) &D_sc02_005_80196C24 | 0x10000000;
        AF(o, s16, 0x5C) = 0x800;
        func_sc02_005_8018F2C4(o);
        AF(o, s16, 0xDE) = AF(D_801270CC, s16, 6);
        AF(o, s16, 0xA) = -0x880;
        AF(o, s16, 0xDC) = AF(((UXY *) &D_801270CC)->w, s16, 0xE);
        AF(o, s16, 2)++;
    }
}

void func_sc02_005_8018F2C4(u8 *o) {
    u8 *p;
    s32 add;
    s32 *q;
    p = D_801270CC;
    add = 0;
    if (AF(p, u16, 0) != 0x3D) {
        func_8012C218(o);
        return;
    }
    if (AF(p, u8, 0xC1) == 3 || AF(p, u8, 0xC1) == 4) {
        AF(o, s16, 0x5C) = 0;
        return;
    }
    q = &D_801270C8;
    if (*q == 0x1B) {
        AF(o, u8 *, 0x58) = &D_sc02_005_80196C34;
        AF(o, s16, 0x5C) = 0;
        return;
    }
    if (func_sc02_005_80185D6C() != 0) {
        add = 0x80;
    }
    AF(o, s16, 0x5C) = 0x800;
    if (*q < 0x1B) {
        if (AF(o, s16, 0xE) < AF(D_801270CC, s16, 0xE)) {
            AF(o, s16, 0xDC) = AF(D_801270CC, s16, 0xE);
        }
        AF(o, s16, 0x6) = AF(o, s16, 0xDE);
        AF(o, s16, 0xE) = AF(o, s16, 0xDC) + add;
    } else {
        if (AF(D_801270CC, s16, 0x6) < AF(o, s16, 0x6)) {
            AF(o, s16, 0xDE) = AF(D_801270CC, s16, 0x6);
        }
        AF(o, s16, 0x6) = AF(o, s16, 0xDE) - add;
        AF(o, s16, 0xE) = AF(o, s16, 0xDC);
    }
}

s32 func_sc02_005_8018F414(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801D91D4);
}

s32 func_sc02_005_8018F444(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DA5FC);
}

s32 func_sc02_005_8018F474(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DB658);
}

s32 func_sc02_005_8018F4A4(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DC180);
}

s32 func_sc02_005_8018F4D4(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DCD04);
}

s32 func_sc02_005_8018F504(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DD2D4);
}

s32 func_sc02_005_8018F534(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DDD30);
}

s32 func_sc02_005_8018F564(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DE674);
}

s32 func_sc02_005_8018F594(void) {
    return func_8013C414((s32) &D_sc02_005_8019AA5C, (s32) &D_sc02_005_801DF3B4);
}

s32 func_sc02_005_8018F5C4(void) {
    return func_8013C360((s32) &D_sc02_005_801D91D4);
}

s32 func_sc02_005_8018F5EC(void) {
    return func_8013C360((s32) &D_sc02_005_801DA5FC);
}

s32 func_sc02_005_8018F614(void) {
    return func_8013C360((s32) &D_sc02_005_801DB658);
}

s32 func_sc02_005_8018F63C(void) {
    return func_8013C360((s32) &D_sc02_005_801DC180);
}

s32 func_sc02_005_8018F664(void) {
    return func_8013C360((s32) &D_sc02_005_801DCD04);
}

s32 func_sc02_005_8018F68C(void) {
    return func_8013C360((s32) &D_sc02_005_801DD2D4);
}

s32 func_sc02_005_8018F6B4(void) {
    return func_8013C360((s32) &D_sc02_005_801DDD30);
}

s32 func_sc02_005_8018F6DC(void) {
    return func_8013C360((s32) &D_sc02_005_801DE674);
}

s32 func_sc02_005_8018F704(void) {
    return func_8013C360((s32) &D_sc02_005_801DF3B4);
}

void func_sc02_005_8018F72C(u8 *o) {
    s32 *p;
    s32 *q;
    s32 t;

    t = func_8012C1B8();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        func_8012CAE4(o);
        return;
    }
    p = (s32 *)&D_800A5E88;
    AF(o, s16, 2) = 1;
    AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
    *p = 0;
    D_800A5E8C = 0xA;
    D_800A5E90 = -0xA;
    D_800A5E94 = 0xCC;
    D_800A5E95 = 0x99;
    D_800A5E96 = 0x99;
    func_80028620(0, p);
    q = p + 4;
    *q = 0;
    D_800A5E9C = -0xE;
    D_800A5EA0 = -8;
    D_800A5EA4 = 0x33;
    D_800A5EA5 = 0x19;
    D_800A5EA6 = 0x4C;
    func_80028620(1, q);
    q = p + 8;
    *q = 0;
    D_800A5EAC = 0x14;
    D_800A5EB0 = 0xF;
    D_800A5EB4 = 0x4C;
    D_800A5EB5 = 0x33;
    D_800A5EB6 = 0x7F;
    func_80028620(2, q);
    if (func_800CF854() != 0) {
        AF(o, s16, 2) = 0xA;
    }
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc02_005_8018F894(u8 *o) {
    s32 *p;

    if (D_80126D6C == 3) {
        p = &D_800A5E90;
        AF(o, s16, 2) = 2;
        *p = 0xA;
        func_80028620(0, p - 2);
        D_800A5EA0 = 8;
        func_80028620(1, p + 2);
        D_800A5EB0 = -0xF;
        func_80028620(2, p + 6);
    }
}

void func_sc02_005_8018F91C(u8 *arg0) {
    if (D_801270C8 == 8) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0x1C) = 0x12;
    }
}

void func_sc02_005_8018F944(u8 *o) {
    s32 *p;
    s32 *q;

    if (--AF(o, s32, 0x1C) == 0) {
        p = (s32 *)&D_800A5E88;
        AF(o, s16, 2) = 4;
        *p = 0;
        D_800A5E8C = -4;
        D_800A5E90 = -4;
        D_800A5E94 = 0xFF;
        D_800A5E95 = 0x4C;
        D_800A5E96 = 0;
        func_80028620(0, p);
        D_800A5EA0 = -0xE;
        D_800A5EA5 = 0;
        func_80028620(1, p + 4);
        q = p + 8;
        *q = 0;
        D_800A5EAC = 0xA;
        D_800A5EB0 = 0xA;
        D_800A5EB4 = 0xCC;
        D_800A5EB5 = 0x99;
        D_800A5EB6 = 0x99;
        func_80028620(2, q);
    }
}

void func_sc02_005_8018FA34(u8 *o) {
    s32 *p;

    p = (s32 *)&D_800A5E88;
    *p = (rand() & 0x1F) - 0x10;
    D_800A5E90 = (rand() & 0x1F) - 0x14;
    func_80028620(0, p);
    if (D_801270C8 == 0xA) {
        AF(o, s16, 2) = 5;
        D_800A5EA0 = 0xE;
        func_80028620(1, p + 4);
        D_800A5EB0 = -0xA;
        func_80028620(2, p + 8);
    }
}

void func_sc02_005_8018FAE0(u8 *o) {
    s32 *p;

    p = (s32 *)&D_800A5E88;
    *p = (rand() & 0x1F) - 0x10;
    D_800A5E90 = (rand() & 0x1F) - 0xC;
    func_80028620(0, p);
    if (D_801270C8 == 0xB) {
        AF(o, s16, 2) = 6;
        D_800A5EA0 = -0xE;
        func_80028620(1, p + 4);
        D_800A5EB0 = 0xA;
        func_80028620(2, p + 8);
    }
}

void func_sc02_005_8018FB8C(u8 *o) {
    s32 *p;

    p = (s32 *)&D_800A5E88;
    *p = (rand() & 0x1F) - 0x10;
    D_800A5E90 = (rand() & 0x1F) - 0x14;
    func_80028620(0, p);
    if (D_801270C8 == 0xC) {
        AF(o, s16, 2) = 7;
        D_800A5EA0 = 0xE;
        func_80028620(1, p + 4);
        D_800A5EB0 = -0xA;
        func_80028620(2, p + 8);
    }
}

void func_sc02_005_8018FC38(u8 *o) {
    s32 *p;

    p = (s32 *)&D_800A5E88;
    *p = (rand() & 0x1F) - 0x10;
    D_800A5E90 = (rand() & 0x1F) - 0xC;
    func_80028620(0, p);
    if (D_80126D6C == 0xD) {
        AF(o, s16, 2) = 8;
        D_800A5EA0 = -0xE;
        func_80028620(1, p + 4);
        D_800A5EB0 = 0xA;
        func_80028620(2, p + 8);
    }
}

void func_sc02_005_8018FCE4(u8 *o) {
    s32 *p;
    s32 *q;

    p = (s32 *)&D_800A5E88;
    *p = (rand() & 0x1F) - 0x10;
    D_800A5E90 = (rand() & 0x1F) - 0x14;
    func_80028620(0, p);
    if (D_801270C8 == 0xD) {
        AF(o, s16, 2) = 9;
        *p = 0;
        D_800A5E8C = 0xA;
        D_800A5E90 = -0xA;
        D_800A5E94 = 0xCC;
        D_800A5E95 = 0x99;
        D_800A5E96 = 0x99;
        func_80028620(0, p);
        D_800A5EA0 = -8;
        D_800A5EA5 = 0x19;
        func_80028620(1, p + 4);
        q = p + 8;
        *q = 0;
        D_800A5EAC = 0x14;
        D_800A5EB0 = 0xF;
        D_800A5EB4 = 0x4C;
        D_800A5EB5 = 0x33;
        D_800A5EB6 = 0x7F;
        func_80028620(2, q);
    }
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc02_005_8018FE18(u8 *o) {
    s32 *p;

    if (D_80126D6C == 0x11) {
        p = &D_800A5E90;
        AF(o, s16, 2) = 0xA;
        *p = 0xA;
        func_80028620(0, p - 2);
        D_800A5EA0 = 8;
        func_80028620(1, p + 2);
        D_800A5EB0 = -0xF;
        func_80028620(2, p + 6);
    }
}

void func_sc02_005_8018FEA0(u8 *o) {
    if (D_801270C8 >= 20) {
        AF(o, s16, 2) = 0xB;
        D_800A5E88[0].x = 0;
        D_800A5E88[0].y = 0x16;
        D_800A5E88[0].z = 0;
        D_800A5E88[0].r = 0xB2;
        D_800A5E88[0].g = 0x66;
        D_800A5E88[0].b = 0x33;
        func_80028620(0, &D_800A5E88[0]);
        D_800A5E88[1].x = 0;
        D_800A5E88[1].y = -0xE;
        D_800A5E88[1].z = -0xE;
        D_800A5E88[1].r = 0x33;
        D_800A5E88[1].g = 0;
        D_800A5E88[1].b = 0x4C;
        func_80028620(1, &D_800A5E88[1]);
        D_800A5E88[2].x = 0;
        D_800A5E88[2].y = 0x16;
        D_800A5E88[2].z = 0xF;
        D_800A5E88[2].r = 0x4C;
        D_800A5E88[2].g = 0x33;
        D_800A5E88[2].b = 0x7F;
        func_80028620(2, &D_800A5E88[2]);
    }
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc02_005_8018FFC4(u8 *o) {
    u8 *p;

    if (D_801270C8 == 0x1B) {
        p = &D_800A5E94;
        AF(o, s16, 2) = 0xC;
        *p = 0xFF;
        D_800A5E96 = 0;
        func_80028620(0, p - 0xC);
        D_800A5E9C = 0;
        D_800A5EA0 = -0x18;
        func_80028620(1, p + 4);
        D_800A5EAC = 0xB;
        D_800A5EB0 = 0x1C;
        func_80028620(2, p + 0x14);
    }
}

void func_sc02_005_80190068(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
}

void func_sc02_005_80190074(u8 *arg0) {
    D_sc02_005_80196CFC[AF(arg0, u16, 2)]();
}

s32 func_sc02_005_801900B0(void) {
    if (func_800CF854() == 0) {
        return 8;
    }
    return 9;
}

s32 func_sc02_005_801900E0(s32 arg0, s32 arg1) {
    D_sc02_005_801E4C40 = 0x500;
    return 0x500;
}

s32 func_sc02_005_801900F4(void) {
    D_sc02_005_801E4C40 = 0xED4;
    return 0xED4;
}

void func_sc02_005_80190108(u8 *arg0) {
    D_sc02_005_80196EA4[AF(arg0, u16, 2)]();
}

void func_sc02_005_80190144(u8 *o) {
    u8 *a;
    B4 *p;

    a = func_801465C0();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        func_8001CBDC(a, &D_sc02_005_80196D94, D_sc02_005_80196D30[AF(o, s32, 0x2C)].x, D_sc02_005_80196D30[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc02_005_80196D5C[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc02_005_80196E94 = D_sc02_005_80196D68[AF(o, s32, 0x2C)];
        D_sc02_005_80196E90 = AF(&D_sc02_005_80196E90, B4, 0x4);
        D_sc02_005_80196E60 = AF(&D_sc02_005_80196E60, B4, 0x30);
        D_sc02_005_80196E5C = AF(&D_sc02_005_80196E5C, B4, 0x4);
        D_sc02_005_80196E2C = AF(&D_sc02_005_80196E2C, B4, 0x30);
        D_sc02_005_80196E28 = AF(&D_sc02_005_80196E28, B4, 0x4);
        D_sc02_005_80196DF8 = AF(&D_sc02_005_80196DF8, B4, 0x30);
        p = &D_sc02_005_80196DF4;
        *p = D_sc02_005_80196DF8;
        D_sc02_005_80196DCC = *p;
        AF(o, s16, 2)++;
    } else {
        func_80146C3C(o);
    }
}

void func_sc02_005_80190344(s32 arg0) {
    func_sc02_005_80190384(arg0);
}

void func_sc02_005_80190364(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc02_005_80190384(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc02_005_80196DAC);
    var_s1 = 0;
    var_s0 = &D_sc02_005_80196DD4;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc02_005_801903DC(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc02_005_80190408(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc02_005_8019044C(u8 *arg0) {
    D_sc02_005_80196F00[AF(arg0, u16, 2)]();
}

void func_sc02_005_80190488(s32 arg0) {
    func_sc02_005_801904B8();
    func_80146CA0(arg0);
}

void func_sc02_005_801904B8(u8 *o) {
    StartRumbleScript(&D_80062C14);
    func_801511E0(o);
    func_80154274(o, &D_sc02_005_80196EB0);
    AF(o, s32, 0x234) = 0;
    StartFace(o, 0x1C);
    func_801477E8(o, 0xFFE00000);
    func_80149020(o);
    func_80147324(0x451);
    func_80146CA0(o);
}

void func_sc02_005_80190538(u8 *o) {
    V3 v;
    V3 d;
    u8 *p;
    u8 *q;
    s32 t;

    func_80149020(o);
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x12) = (AF(p, u16, 0x12) + 0x5B) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x10) = (AF(p, u16, 0x10) - 0x16) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x10) < 0xC00) {
        AF(p, s16, 0x10) = -0x400;
    }
    q = (u8 *)func_8014C168(o, 0x3D);
    if (D_801270C8 < 0x1B) {
        v.x = d.x = AF(q, s16, 6) - AF(o, s16, 6);
        t = AF(o, s16, 0xE) + 0x180;
        v.z = d.z = AF(q, s16, 0xE) - t;
        if (d.x < 0) d.x = -d.x;
        if (d.z < 0) d.z = -d.z;
        if (d.x > 0x20) {
            if (v.x < 0) v.x = -0x80000; else v.x = 0x80000;
        } else {
            v.x = 0;
        }
        if (d.z > 0x20) {
            if (v.z < 0) v.z = -0x80000; else v.z = 0x80000;
        } else {
            v.z = 0;
        }
        v.y = 0;
    } else {
        v.z = d.z = AF(q, s16, 0xE) - AF(o, s16, 0xE);
        t = AF(o, s16, 6) - 0x180;
        v.x = d.x = AF(q, s16, 6) - t;
        if (d.x < 0) d.x = -d.x;
        if (d.z < 0) d.z = -d.z;
        if (d.x > 0x20) {
            if (v.x < 0) v.x = -0x80000; else v.x = 0x80000;
        } else {
            v.x = 0;
        }
        if (d.z > 0x20) {
            if (v.z < 0) v.z = -0x80000; else v.z = 0x80000;
        } else {
            v.z = 0;
        }
        v.y = 0;
    }
    func_80146DE8(o, v);
    func_80147F50(o);
    func_801473EC(o);
    func_80148038(o, 0x18000);
    func_80147460(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, s16, 0xB8) = AF(o, s16, 0xBA);
        AF(o, s32, 0x234)++;
    }
    switch (func_801535F4(o)) {
    case 0:
        break;
    case 1:
        func_sc02_005_8019084C(o);
        func_80159B3C(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc02_005_8019084C(o);
        func_8015BF48(o);
        func_80146A6C(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    }
}

s32 func_sc02_005_8019084C(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}
