#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_007_8017BE9C(void) {
}

void func_sc03_007_8017BEA4(void) {
}

void func_sc03_007_8017BEAC(void) {
}

void func_sc03_007_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_007_8018BBCC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_007_8017DBB4(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_007_8018BBD4[])();
extern void (*D_sc03_007_8018BBE0[])();
extern void (*D_sc03_007_8018BBEC[])();
void func_sc03_007_8017DBDC(void);
extern void func_800D1EBC();
extern u8 D_sc03_007_8018BBF8;
extern void StartPlayerActionScript();
extern u8 D_sc03_007_8018BC04;
extern void func_sc03_007_8017DDE4();
extern void (*D_sc03_007_8018BC38[])();
extern void func_sc03_007_8017DE40();
extern u8 D_sc03_007_801BB024;
extern void (*D_sc03_007_8018BEF0[])();
extern void (*D_sc03_007_8018BF50[])();
extern void (*D_sc03_007_8018BFC8[])();
extern void (*D_sc03_007_8018C0EC[])();
extern void (*D_sc03_007_8018C150[])();
extern void RunScript();
extern u8 D_sc03_007_8018C138;
extern s32 IsEventDone();
extern void EndEvent();
extern s32 * func_sc03_007_80181E30();
extern void ResetScriptVM();
extern void CallActionHandler();
extern s32 DistSqToPlayer();
extern void (*D_sc03_007_8018C230[])();
extern void (*D_sc03_007_8018C37C[])();
extern void (*D_sc03_007_8018C534[])();
extern void (*D_sc03_007_8018C574[])();
extern void (*D_sc03_007_8018C57C[])();
extern void (*D_sc03_007_8018C830[])();
extern void func_sc03_007_80185230();
extern void (*D_sc03_007_801E4D70[])();
extern void (*D_sc03_007_801E4D84[])();
extern u8 D_sc03_007_801E4D78;
extern void InitSpriteKind1();
extern void FreeProp();
extern void (*D_sc03_007_801E4DD8[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s16 g_PlayerAbsorbCounter;
extern void SetLocalVelocity();
extern void StopWithGravity();
extern u8 D_sc03_007_8018BF30;
extern u8 D_sc03_007_8018BF3C;
extern u8 D_sc03_007_801BEC20;
extern s32 TickTimer();
extern void func_sc03_007_80180A58();
extern u8 D_sc03_007_801CAB58;
extern u8 D_sc03_007_801CAFE0;
extern void func_sc03_007_801824FC();
extern u8 D_sc03_007_801CACF8;
extern void SpawnHeadMarker();
extern void func_sc03_007_801824A8();
extern s32 MoveCollidePassable();
extern void func_sc03_007_80183004();
extern void FreeActor();
extern void ZeroFill();

extern void GainStat0FromActor();
extern s32 DespawnActor();
extern void func_sc03_007_80182FB8();

extern s32 GetFlag();
extern void SetFlag();
extern s32 func_sc03_007_8017D4C4();
extern s32 GetVar();
extern void SetVar();
extern s32 func_sc03_007_80183F7C();
extern void (*D_sc03_007_8018BD14[])();
extern s32 func_sc03_007_8017EE50();
extern u8 D_sc03_007_801BB034;
extern u8 D_sc03_007_801BB0FC;
extern s32 func_sc03_007_8017EA04();
extern s32 func_sc03_007_8017EA48();
extern void func_sc03_007_8017EC90();
extern s32 func_sc03_007_8017E83C();
extern s32 IsOnScreen();
extern void DropItem();
s32 func_sc03_007_8017EE20(StageActor *arg0);
extern s32 func_sc03_007_801802A4();
extern u8 D_sc03_007_801BE488;
extern void SetForwardVelocity();
extern u8 D_800D3918;
extern s32 func_sc03_007_80180064();
extern void func_sc03_007_8018022C();
extern u8 D_sc03_007_801BE580;
extern u8 D_sc03_007_801BE658;
extern u8 D_sc03_007_801BE730;
extern void UpdateModelZYX();
extern s32 HeadingToTarget();
extern u8 D_sc03_007_8018BF48;
extern void DamageActorsNear();
extern void SetReactionStep();
extern s32 MoveCollidePassableAt();
extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern u8 D_sc03_007_8018C03C;
extern u8 D_sc03_007_801B0CFC;
extern void SetLocalVelocityXZ();
extern s32 MoveCollide();
extern u8 D_sc03_007_801B101C;
extern u8 D_sc03_007_8018C0A8;
extern u8 D_sc03_007_8018C0B8;
extern u8 D_sc03_007_801B35E8;
extern s32 SetupActor();
extern void InitModel();
extern u8 D_sc03_007_80187704;
extern u8 D_sc03_007_8018C104;
extern s32 GetProgress();
extern void RejectSpawn();
extern void SpawnTalkMarker();
extern void (*D_sc03_007_8018C350[])();
extern s32 DistSqToTarget();
void func_sc03_007_80182468(StageActor *arg0);
extern u8 D_sc03_007_801CAF38;
extern void GiveItem();
extern u8 D_sc03_007_801E3998;
extern s32 g_BgmPackPlaying;
extern s32 func_sc03_007_80183FB4();
extern void UpdateClockTint();
extern s16 g_PlayerX;
extern s16 D_80126B66;
extern s32 RequestBgmPack();
extern s32 func_sc03_007_80185B48();
extern s32 func_sc03_007_80185B20();
extern void SpawnEffect();
extern void StopMotion();
extern s32 func_sc03_007_80185E30();
extern void MoveObject();




extern u8 D_sc03_007_8018C588;

extern u8 g_Camera;
extern s32 g_CameraProj;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void SetCameraUpdate();
extern void SnapCamera();
extern s32 D_801270C8[];
extern s32 func_sc03_007_80180AF4();
extern s32 DistSq();

extern void func_sc03_007_80185E68();
extern void StartCameraShake();
extern s32 g_PlayerPosX;
extern s32 D_80126B64;
extern u8 D_sc03_007_8018C728;
extern u8 D_sc03_007_8018C7DC;
extern u8 D_sc03_007_8018C700;
extern void func_sc03_007_80185E3C();


extern void func_sc03_007_801869C0();

extern u8 D_sc03_007_8018CE04;
extern u8 D_sc03_007_8018CE90;
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc03_007_8018CEA4;
extern u8 D_sc03_007_8018CF1C;
extern u8 D_sc03_007_8018CF30;
extern u8 D_sc03_007_8018CF94;
extern u8 D_sc03_007_8018CFA8;
extern u8 D_sc03_007_8018D034;
extern u8 D_sc03_007_8018D048;
extern u8 D_sc03_007_8018D0AC;
extern u8 D_sc03_007_8018D0C0;
extern u8 D_sc03_007_8018D14C;
extern u8 D_sc03_007_8018D160;
extern u8 D_sc03_007_8018D1EC;
extern u8 D_sc03_007_8018D200;
extern u8 D_sc03_007_8018D2A0;
extern u8 D_sc03_007_8018D2B4;
extern u8 D_sc03_007_8018D32C;
extern u8 D_sc03_007_8018D340;
extern u8 D_sc03_007_8018D3B8;
extern u8 D_sc03_007_8018D3CC;
extern u8 D_sc03_007_8018D46C;
extern u8 D_sc03_007_8018D480;
extern u8 D_sc03_007_8018D4F8;
extern u8 D_sc03_007_8018D50C;
extern u8 D_sc03_007_8018D584;
extern u8 D_sc03_007_8018D598;
extern u8 D_sc03_007_8018D610;
extern u8 D_sc03_007_8018CAA8;
extern u8 D_sc03_007_8018CDC8;
extern u8 D_sc03_007_8018CB84;
extern u8 D_sc03_007_8018CDDC;
extern u8 D_sc03_007_8018CCC4;
extern u8 D_sc03_007_8018CDF0;
extern s32 TurnStep();
extern s32 func_sc03_007_801803DC();


typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern void StepSpriteAnim();
extern s32 SpawnPropFrom();
extern void func_sc03_007_8018726C();
extern u16 D_800B99DA;

typedef struct { s32 x, y, z, pad; } V4;
extern void func_sc03_007_8017C294();

void func_sc03_007_8017BEBC(SV8 *r, SV8 *out, s32 arg2) {
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
    func_sc03_007_8017C294(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_007_8017C294(&v[i], &w4[i]);
        if (func_sc03_007_8017C338(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_007_8017C530(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_007_8017C294(&v[i], &w4[i]);
            func_sc03_007_8017C338(&c, &w4[i], &p[i], arg2);
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

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_sc03_007_801E9D30;
extern void func_8001CD9C();
extern void SetShapeCircle();
extern void func_sc03_007_80184560();
extern void *D_sc03_007_801EB13C;

extern u8 D_sc03_007_8018C610;
extern u8 D_sc03_007_8018C750;
extern u8 D_sc03_007_801EB14C;
extern s32 func_sc03_007_80185DD8();
extern s16 func_sc03_007_80185A24();
extern s32 TurnStepToward();
extern void func_sc03_007_801858D4();
extern void func_sc03_007_80185948();
extern s32 TargetInFront();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
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
extern void NextState();
extern s32 SpawnPropAt();
extern u8 D_sc03_007_8018C554;
extern u8 D_sc03_007_8018C55C;
extern s8 D_sc03_007_801E9D2F;
extern s32 D_sc03_007_801EB130;
extern s16 D_sc03_007_801EB134;
extern u8 D_sc03_007_801E9CE0[];
extern void PosToSVec();
extern void *D_sc03_007_801EB138;
typedef union { s32 w; XY s; } UXY;
extern void RotateSVectorY();
static inline void clamp_DCB4(s16 *p, s16 x, s16 lim) {
    if (x > lim) {
        *p = x - lim;
    } else if (-lim > x) {
        *p = x + lim;
    }
}

extern u8 D_801274E8;
extern u8 D_sc03_007_8018BC18;
extern void func_sc03_007_801846EC();

typedef struct { s32 w[4]; } W16;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_sc03_007_801BB2BC;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 func_sc03_007_8017FD6C();
extern SV8 D_sc03_007_8018BE48;
extern SV8 D_sc03_007_8018BE50;
extern void func_sc03_007_8017FC6C();
extern s32 D_sc03_007_8018BFA8[];
extern s32 D_sc03_007_8018BD88[][16];
void func_sc03_007_8018732C(StageActor *o, s16 *v, s16 arg2);
extern s32 TurnStepToTarget();
extern void AngleToVec2();
extern s32 SpawnProp();
extern s16 D_sc03_007_801E4D50[];
extern void InitSpriteKind3();
extern void StartSpriteAnim();
extern u8 D_sc03_007_801E4D8C;
extern u8 D_sc03_007_801E4D98;
extern s32 func_sc03_007_80187214();
extern s32 AllocActorSprite();
extern u16 g_Actors;
extern void LocalToWorld();
extern void GetPartWorldMatrix();
extern s32 SpawnActorFromDef();

void func_sc03_007_8017C294(SV8 *zero, SV8 *out) {
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

s32 func_sc03_007_8017C338(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
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

s32 func_sc03_007_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern u16 g_SpawnRejected;
extern u8 D_sc03_007_8018C248;
extern u8 D_sc03_007_8018C2B0;
extern s32 SetScript();
extern u8 D_sc03_007_8018B928;
extern u8 D_sc03_007_8018B9B8;
extern u8 D_sc03_007_8018BA00;
extern u8 D_sc03_007_8018B5C8;
extern u8 D_sc03_007_8018B874;
extern u8 D_sc03_007_8018B970;
extern s16 D_801270C0;
extern s32 func_sc03_007_801806B8();
extern u8 D_sc03_007_8018BF58;
extern u8 D_sc03_007_8018BF60;
extern s16 D_80126B62;
extern void MoveProp();
extern s32 GroundDistSqToPlayer();
extern u16 g_PlayerHitFlags;
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s16 g_PlayerHitFacing;
extern s32 rand();

extern void func_sc03_007_801832B4();
extern s32 IsOnGround();
extern u8 D_sc03_007_801E3AE0;

extern R34 D_sc03_007_8018C394[][2];
extern u8 D_sc03_007_8018C4CC;
extern void SpawnShadow();
extern void SnapToGround();
extern s16 D_sc03_007_8018C7F0[];
extern u8 *SpawnActorArg();
extern void RotMatrixYXZ();
extern void ApplyMatrixSV();
extern SV8 D_sc03_007_8018BF68[];
extern void func_80020DA4();
extern void func_80020F34();
extern void RotTransSV();
extern s32 PathHitsModel();
extern s32 MoveOnGround();
extern u8 D_sc03_007_801B0ED4;
extern s32 HeadingTo();
extern s32 CollidePath();
extern void RestorePrevPos();

extern u8 D_sc03_007_801CB130;
extern u8 D_sc03_007_8018C374;
extern void FaceHelper();
extern u8 D_sc03_007_8018C778;
extern s32 D_sc03_007_801EB140;
extern s32 D_sc03_007_801EB144;
extern s32 D_sc03_007_801EB148;
extern s32 func_80143994();
extern void MoveImage();
extern s32 D_sc03_007_8018C50C;
extern s32 MoveOnGroundOfs();
extern s32 UndoMoveIntoObject();

extern s32 TargetInSight();
extern void ActorTouchesPlayer();
extern s32 func_sc03_007_8017EEA4();
extern WMtx GsIDMATRIX;
extern void RotMatrixY();
extern void ApplyMatrixLV();
extern u8 D_sc03_007_8018C048;
extern u16 D_sc03_007_8018C054[];
extern u16 D_sc03_007_8018C05C[];
extern s32 HeadingToPoint();

extern s32 PlayerFlag400();
extern s32 g_PlayerModel;
extern s32 g_PlayerHitData;
extern s32 func_sc03_007_80180838();
extern void VectorNormalSS();
extern void HitPlayer();
extern u8 D_sc03_007_8018C678;
extern void ShowDamage();
extern u8 *SpawnKind1CAt();
extern void func_sc03_007_8017FE04();
extern s32 rsin();
extern s32 rcos();
extern s32 D_sc03_007_801EB154;

extern u8 D_sc03_007_8018BFE0;
extern u8 D_sc03_007_8018C014;

extern s32 TraceMap();
extern s32 FindGround();

extern s32 SegmentHitsPlayer();
extern SV8 D_sc03_007_8018BD34[];
extern s32 func_sc03_007_8017EF68();
extern SV8 D_sc03_007_8018C340[];
extern u8 g_GroundNormal;
extern void SetRotMatrix();
extern void SetTransMatrix();
extern s16 D_801274EC;
extern s16 g_CameraFocus;
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 D_sc03_007_8018BC3C[];
extern s32 GetObjPadPressed();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void RotMatrixZYX();
extern s32 D_sc03_007_801E9CD8;
extern u8 D_sc03_007_801E38F0;
extern u8 D_sc03_007_801E3DA8;
extern void SpawnKind1C();
extern void func_sc03_007_801836B8();

extern u16 D_sc03_007_8018C064[];
extern u16 D_sc03_007_8018C06C[];
extern u8 D_sc03_007_801B0DD4;
extern u8 D_sc03_007_801E4B08;
extern u8 D_sc03_007_801E3B88;
extern u8 D_sc03_007_801E3C10;
extern s32 D_sc03_007_8018C510;
extern u8 D_sc03_007_8018C514;
extern u8 D_sc03_007_801E3CE0;

extern SV8 D_sc03_007_8018C524[];
extern s32 func_sc03_007_80185D3C();
extern u8 D_sc03_007_8018BC20;
extern u8 D_sc03_007_8018BC28;
extern u8 D_sc03_007_8018BC30;

extern u8 D_sc03_007_8018C7AC[];
extern s16 D_sc03_007_8018C7CC[];
extern s16 D_sc03_007_8018C7CE[];

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






typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
extern s32 AllocActorModel();
extern s32 D_sc03_007_8018C36C[];



extern u8 D_sc03_007_801E42B0;

extern s32 func_sc03_007_80180388();
s32 func_sc03_007_8018033C(Mover *arg0, s32 arg1);
extern s32 func_800D0CE0();

extern u8 D_sc03_007_8018C220;
extern s32 *D_sc03_007_8018C1F0[];
extern u8 D_sc03_007_801B0DA4;
s32 func_sc03_007_8017EF1C(void);
extern u8 D_sc03_007_8018BC50;
extern u8 D_sc03_007_8018BC84;
s32 func_sc03_007_80180454(void);
extern u8 D_sc03_007_8018BD54;
extern u8 D_sc03_007_8018BE58;

extern void func_8001CD50();


typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u16 D_800B9A02;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc03_007_801EB160;

void func_sc03_007_8017C59C(u8 *o) {
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
    func_sc03_007_8017BEBC(&D_sc03_007_801EB160, &r, AF(o, s32, 0x60));
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

void TouchFlag142(s32 arg0, s32 arg1) {
    if (GetFlag(0x142, arg1) & 0xFF) {
        PlaySoundId(0xC4D, 0);
    } else {
        SetFlag(0x142, 1);
    }
    func_sc03_007_8017D4C4(arg0);
}

s32 func_sc03_007_8017D4C4(s32 arg0) {
    g_SpawnListFixed = &D_sc03_007_8018CE04;
    g_SpawnListRanged = &D_sc03_007_8018CE90;
    return (s32) &D_sc03_007_8018CE90;
}

void func_sc03_007_8017D4EC(void) {
    g_SpawnListFixed = &D_sc03_007_8018CEA4;
    g_SpawnListRanged = &D_sc03_007_8018CF1C;
}

void func_sc03_007_8017D514(void) {
    g_SpawnListFixed = &D_sc03_007_8018CF30;
    g_SpawnListRanged = &D_sc03_007_8018CF94;
}

void func_sc03_007_8017D53C(void) {
    g_SpawnListFixed = &D_sc03_007_8018CFA8;
    g_SpawnListRanged = &D_sc03_007_8018D034;
}

void func_sc03_007_8017D564(void) {
    g_SpawnListFixed = &D_sc03_007_8018D048;
    g_SpawnListRanged = &D_sc03_007_8018D0AC;
}

void func_sc03_007_8017D58C(void) {
    g_SpawnListFixed = &D_sc03_007_8018D0C0;
    g_SpawnListRanged = &D_sc03_007_8018D14C;
}

void func_sc03_007_8017D5B4(void) {
    g_SpawnListFixed = &D_sc03_007_8018D160;
    g_SpawnListRanged = &D_sc03_007_8018D1EC;
}

void func_sc03_007_8017D5DC(void) {
    g_SpawnListFixed = &D_sc03_007_8018D200;
    g_SpawnListRanged = &D_sc03_007_8018D2A0;
}

void func_sc03_007_8017D604(void) {
    g_SpawnListFixed = &D_sc03_007_8018D2B4;
    g_SpawnListRanged = &D_sc03_007_8018D32C;
}

void func_sc03_007_8017D62C(void) {
    g_SpawnListFixed = &D_sc03_007_8018D340;
    g_SpawnListRanged = &D_sc03_007_8018D3B8;
}

void func_sc03_007_8017D654(void) {
    g_SpawnListFixed = &D_sc03_007_8018D3CC;
    g_SpawnListRanged = &D_sc03_007_8018D46C;
}

void func_sc03_007_8017D67C(void) {
    g_SpawnListFixed = &D_sc03_007_8018D480;
    g_SpawnListRanged = &D_sc03_007_8018D4F8;
}

void func_sc03_007_8017D6A4(void) {
    g_SpawnListFixed = &D_sc03_007_8018D50C;
    g_SpawnListRanged = &D_sc03_007_8018D584;
}

void func_sc03_007_8017D6CC(void) {
    g_SpawnListFixed = &D_sc03_007_8018D598;
    g_SpawnListRanged = &D_sc03_007_8018D610;
}

void func_sc03_007_8017D6F4(void) {
    if (((u32) (GetVar(0xCC) & 0xFF) < 0xFU) && (GetVar(0xCC) & 0xFF)) {
        SetVar(0xCC, 1);
    }
}

void ChaseNextLeg(void) {
    switch (GetVar(0xCC) & 0xFF) {
    case 3:
        SetVar(0xCC, 4);
        break;
    case 5:
        SetVar(0xCC, 6);
        break;
    case 7:
        SetVar(0xCC, 8);
        break;
    case 9:
        SetVar(0xCC, 0xA);
        break;
    case 11:
        SetVar(0xCC, 0xC);
        break;
    case 13:
        SetVar(0xCC, 0xE);
        break;
    case 14:
        SetVar(0xCC, 0xF);
        break;
    }
}

void func_sc03_007_8017D7E4(void) {
}

void func_sc03_007_8017D7EC(void) {
    g_SpawnListFixed = &D_sc03_007_8018CAA8;
    g_SpawnListRanged = &D_sc03_007_8018CDC8;
}

void func_sc03_007_8017D814(void) {
    g_SpawnListFixed = &D_sc03_007_8018CB84;
    g_SpawnListRanged = &D_sc03_007_8018CDDC;
}

void func_sc03_007_8017D83C(void) {
    g_SpawnListFixed = &D_sc03_007_8018CCC4;
    g_SpawnListRanged = &D_sc03_007_8018CDF0;
}

void func_sc03_007_8017D864(u8 *arg0) {
    D_sc03_007_8018BBCC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017D8A0(u8 *arg0) {
    func_sc03_007_8017DBB4();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_007_8017D8E4(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_007_8017D908(u8 *arg0) {
    D_sc03_007_8018BBD4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017D944(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28((s32) arg0);
        if (func_sc03_007_80183F7C() != 0) {
            PlaySoundId(0x1C, 0);
            ClearTimeChime();
            PlaySoundId(0x1D, 0);
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_007_8017D9D0(u8 *arg0) {
    D_sc03_007_8018BBE0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017DA0C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0, arg2);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (!(GetFlag(0x117) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_007_8017DA9C(u8 *arg0) {
    D_sc03_007_8018BBEC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_007_8017DAD8(u8 *arg0) {
    func_sc03_007_8017DBDC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_007_8017DB18(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_007_8017DB94(void) {
    func_800D1EBC();
}

void func_sc03_007_8017DBB4(void) {
    StartPlayerActionScript((s32) &D_sc03_007_8018BBF8, 0x01000000);
}

void func_sc03_007_8017DBDC(void) {
    StartPlayerActionScript((s32) &D_sc03_007_8018BC04, 0x01000000);
}

void func_sc03_007_8017DC04(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC18;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DC54(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC20;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DCA4(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC28;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DCF4(void) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc03_007_8018BC30;
    func_sc03_007_8017DD44();
}

void func_sc03_007_8017DD44(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_007_8017DDE4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_007_8017DDE4((s32) &g_Camera);
}

void func_sc03_007_8017DDE4(s32 arg0) {
    D_sc03_007_8018BC38[AF(arg0, u8, 4)]();
}

void func_sc03_007_8017DE20(s32 arg0) {
    func_sc03_007_8017DE40(arg0);
}

void func_sc03_007_8017DE40(u8 *o) {
    WMtx m;
    SV4 v;
    SV4 q;
    s16 *y;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc03_007_8018BC3C[t];
    }
    AF(o, s32, 8) = (s16) EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    {
        s16 g = g_CameraFocus;
        s16 p = *(s16 *)&D_801274E8;
        if (g < p - 0x280) {
            q.x = p - 0x280;
        } else if (p + 0x280 < g) {
            q.x = p + 0x280;
        } else {
            q.x = g;
        }
    }
    {
        s16 g = D_80126944;
        s16 p = D_801274EC;
        if (g < p - 0x280) {
            q.z = p - 0x280;
        } else if (p + 0x280 < g) {
            q.z = p + 0x280;
        } else {
            q.z = g;
        }
    }
    y = &D_80126942;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + q.x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + *y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + q.z;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + q.x;
    m.t[1] = AF(o, s16, 0x2A) + *y;
    m.t[2] = AF(o, s16, 0x2C) + q.z;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &q);
    AF(o, s32, 0x3C) = q.x;
    AF(o, s32, 0x40) = q.y;
    AF(o, s32, 0x44) = q.z;
}

void func_sc03_007_8017E0B4(StageActor *arg0) {
    ModelObj *temp_v1;

    D_sc03_007_8018BD14[arg0->state]();
    if (arg0->kind != 0) {
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    }
}

void func_sc03_007_8017E124(u8 *o) {
    u8 *p;
    s32 c;
    u16 *q;

    if (func_sc03_007_8017EF1C() == 0) {
        q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    if (SetupActor(o, &D_sc03_007_8018BC50) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018BC84;
        AF(o, s32, 0xB4) = 0xFFFBDFDD;
        AF(o, s16, 0xDE) = 0;
        AF(o, s32, 0xC4) |= 1;
        SpawnShadow(o);
        SetScript(o, &D_sc03_007_801BB024);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        c = rcos(0x380);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = c;
        AF(p, s16, 0x1A) = c;
        AF(p, s16, 0x18) = c;
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x86) = 1;
        UpdateModelZYX(o);
    }
}

void func_sc03_007_8017E218(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 2;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x1A) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
}

s32 func_sc03_007_8017E294(StageActor *arg0) {
    arg0->state = 3;
    return SetScript(arg0, (s32) &D_sc03_007_801BB024);
}

void func_sc03_007_8017E2C0(StageActor *arg0) {
    if (func_sc03_007_8017EE50() <= 0x10000) {
        arg0->state = 4;
    }
}

void func_sc03_007_8017E2FC(StageActor *arg0) {
    arg0->state = 5;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB034);
    arg0->timer = 0x17;
}

void func_sc03_007_8017E33C(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_007_8017E370(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    StopWithGravity((s32) arg0);
    func_sc03_007_8017EA04((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB0FC);
    AF(arg0, s32, 0x1C) = 0x23;
}

void func_sc03_007_8017E3C0(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) - 0x71);
    if (func_sc03_007_8017EA48() == 1) {
        func_sc03_007_8017EC90((s32) arg0, 2);
        goto block_7;
    }
    func_sc03_007_8017E83C((s32) arg0);
    if ((AF(arg0, u16, 0x72) & 0x4000) && (IsOnScreen((s32) arg0, 0x8C00B4) == 1)) {
        PlaySoundId(0x662, 0);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc03_007_8017EA04((s32) arg0);
block_7:
        AF(arg0, s32, 0x1C) = 0x23;
    }
}

void func_sc03_007_8017E47C(u8 *o) {
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0;
    if (AF(o, s16, 0xAA) == 0) {
        AF(o, u16, 0x100) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(o, s16, 0x104) = 0;
    } else {
        AF(o, u16, 0x102) = AF(AF(o, u8 *, 0x20), u16, 0x18);
        AF(o, s16, 0x104) = 1;
    }
}

void func_sc03_007_8017E4C8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
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

void func_sc03_007_8017E56C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_007_8017E57C(u8 *o) {
    StageActor *p;
    s32 v;

    if (TickTimer(o) != 0) {
        if (AF(o, s16, 0x104) != 0) {
            v = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
            AF(o, s16, 0x104) = 0;
        } else {
            v = AF(o, s16, 0x100);
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = v;
        }
        p = o;
        p->hitDamage = 0;
        p->hitState |= 1;
        p->hitAngle = p->model->rot.vy + 0x800;
        p->hitCode = 1;
        SetReactionStep(p, 1);
    } else {
        p = AF(o, u8 *, 0x20);
        v = AF(p, s16, 0x18) + (AF(o, s16, 0x100) - AF(p, s16, 0x18)) / 4;
        AF(p, s16, 0x1C) = v;
        AF(p, s16, 0x18) = v;
    }
}

void func_sc03_007_8017E654(u8 *arg0) {
    s32 t;
    s32 var_a0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x37;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BB2BC);
    AF(arg0, s16, 0x34) = 0;
    t = DistSqToTarget((s32) arg0);
    var_a0 = 0x52B;
    if (t <= 0x8FFF) {
        var_a0 = 0x52A;
    }
    PlaySoundId(var_a0, 0);
}

void func_sc03_007_8017E6C0(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        DropItem((s32) arg0);
        func_sc03_007_8017EE20((s32) arg0);
    }
}

void func_sc03_007_8017E730(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc03_007_8017E748(void) {
}

void func_sc03_007_8017E750(StageActor *arg0) {
    s16 v[3];
    u16 t;

    t = arg0->hitCode;
    if (t == 0x23) {
        arg0->workFE = 1;
        PlaySoundId(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = v[2] = 0;
        v[1] = -8;
        func_sc03_007_8018732C((s32) arg0, v, 0xB);
    }
}

void func_sc03_007_8017E7B4(u8 *arg0) {
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

s32 func_sc03_007_8017E83C(Mover *o) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;
    s32 ret = 1;
    s32 f;

    f = MoveOnGround(o);
    if (f == 0) {
        RestorePrevPos(o);
        func_sc03_007_8017EC90(o, 2);
        ret = 0;
    } else if (f & 0xC000) {
        if (!(f & 0x2000)) {
            RestorePrevPos(o);
        }
        func_sc03_007_8017EC90(o, 2);
        ret = 0;
    }
    for (p = (u8 *)&g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && o != p) {
            if (DistSq((u8 *)o + 4, p + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)o + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = o->prev[0].h.i;
                a.vy = o->prev[1].h.i;
                a.vz = o->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(o);
                    break;
                }
                o->pos[0].h.i = b.vx;
                o->pos[1].h.i = b.vy;
                o->pos[2].h.i = b.vz;
                break;
            }
        }
    }
    return ret;
}

s32 func_sc03_007_8017EA04(u8 *o) {
    if (AF(o, s16, 0xAA) > 0) {
        func_sc03_007_8017EC90(o, 4);
        return 0;
    }
    func_sc03_007_8017EC90(o, 0);
    return 1;
}

s32 func_sc03_007_8017EA48(StageActor *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 flag;
    s32 r;
    u16 h;

    r = 0;
    m = GsIDMATRIX;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix((u8 *)o->model + 0x34);
    RotTransSV(&D_sc03_007_8018BD34[0], &a, &flag);
    RotTransSV(&D_sc03_007_8018BD34[1], &b, &flag);
    if (func_sc03_007_8017EF68() == 1 && (AF(D_801270C8[0], u16, 0x5C) & 0x8000)
        && AF(D_801270C8[0], u16, 0x5E) != 1) {
        c = a;
        d = b;
        if (PathHitsModel(AF(D_801270C8[0], s32, 0x20), AF(D_801270C8[0], s32, 0x58), &c, &d) != 0) {
            AF(D_801270C8[0], u16, 0x5C) |= 1;
            AF(D_801270C8[0], s16, 0x60) = 0xD;
            r = 1;
            AF(D_801270C8[0], s16, 0x62) = AF(o, u16, 0xDC);
            AF(D_801270C8[0], s16, 0x5E) = 1;
        }
    }
    if (SegmentHitsPlayer(o, &a, &b) == 1) {
        r = 1;
        h = AF(o, u16, 0xDC);
        g_PlayerHitDamage = 0xD;
        g_PlayerHitFacing = h;
    }
    return r;
}

void func_sc03_007_8017EC90(u8 *o, s32 k) {
    V3 v;
    WMtx m;
    s32 a;
    s32 b;

    v.z = -0x40000;
    v.y = 0;
    v.x = 0;
    switch (k) {
    case 0:
        if (rand() & 1) {
            break;
        }
    case 1:
        AF(o, s16, 0xDC) = func_sc03_007_8017EEA4(o);
        break;
    case 2:
        b = rand() % 80;
        a = AF(o, s16, 0xDC);
        AF(o, s16, 0xDC) = ((rand() & 1) == 0) ? (s16)(a + 0x800) - b : (s16)(a + 0x800) + b;
        break;
    case 3:
        AF(o, s16, 0xDC) = rand() % 4096;
        break;
    case 4:
        AF(o, s16, 0xDC) = (func_sc03_007_8017EEA4(o) + 0x800) & 0xFFF;
        break;
    }
    m = GsIDMATRIX;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

s32 func_sc03_007_8017EE20(StageActor *arg0) {
    GainStat0FromActor(arg0);
    return DespawnActor(arg0);
}

s32 func_sc03_007_8017EE50(Mover *arg0) {
    if (func_sc03_007_8017EF68() == 1) {
        return DistSq((u8 *)arg0 + 4, D_801270C8[0] + 4);
    }
    return DistSqToTarget(arg0);
}

s32 func_sc03_007_8017EEA4(Mover *o) {
    SV8 v;
    u8 *p;

    if (func_sc03_007_8017EF68() == 1) {
        p = (u8 *)D_801270C8[0];
        v.x = AF(p, u16, 6);
        v.y = AF(p, u16, 0xA);
        v.z = AF(p, u16, 0xE);
        return HeadingToPoint((u8 *)o + 4, &v);
    }
    return HeadingToTarget(o);
}

s32 func_sc03_007_8017EF1C(void) {
    s32 v = GetVar(0xCC) & 0xFF;
    if (v == 10) return 1;
    if (v == 12) return 1;
    if (v != 11) return v == 13;
    return 1;
}

s32 func_sc03_007_8017EF68(s32 arg0, s32 arg1, s32 arg2) {
    if ((*(void * *)&D_801270C8) != NULL) {
        return AF((*(void * *)&D_801270C8), s16, 0x76) > 0;
    }
    return 0;
}

void func_sc03_007_8017EF98(StageActor *arg0) {
    D_sc03_007_8018BEF0[arg0->state]();
}

void func_sc03_007_8017EFD4(u8 *o) {
    u8 *p;
    s32 c;
    u16 *q;

    if (func_sc03_007_80180454() == 0) {
        q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    if (SetupActor(o, &D_sc03_007_8018BD54) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018BE58;
        AF(o, s32, 0xB4) = -0xA9;
        SpawnShadow(o);
        AF(o, s32, 0xE0) = 0;
        SetScript(o, &D_sc03_007_801BE488);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s32, 0x1C) = 8;
        c = rcos(0x380);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = c;
        AF(p, s16, 0x18) = c;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = rsin(0x380) * 2 + 0x1000;
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x86) = 1;
        UpdateModelZYX(o);
    }
}

void func_sc03_007_8017F0C8(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 2;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 2) + 0x1000);
}

void func_sc03_007_8017F164(StageActor *arg0) {
    arg0->state = 3;
    arg0->hitState = 0xAA10;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE488);
    arg0->timer = (s32) ((rand() % 10) + 0x18);
    if (arg0->workE0 != 0) {
        arg0->workE0 = 0;
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 0x30);
    }
}

void func_sc03_007_8017F1F8(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x40);
    if ((func_sc03_007_801802A4() != 1) && (TickTimer((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_007_8017F258(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x18000);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE488);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_007_8017F2B4(s32 arg0) {
    s32 temp_v0;

    if (func_sc03_007_801802A4() != 1) {
        temp_v0 = func_sc03_007_80180064(arg0, (s32) &D_800D3918);
        if (temp_v0 != 0) {
            if (temp_v0 == -1) {
                func_sc03_007_8018022C(arg0);
                return;
            }
            if (TickTimer(arg0) != 0) {
                goto block_5;
            }
        } else {
block_5:
            AF(arg0, s16, 2) = 2;
        }
    }
}

void func_sc03_007_8017F334(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
    AF(arg0, s32, 0x1C) = 0x24;
}

void func_sc03_007_8017F37C(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    if (AF(o, s32, 0x1C) < 0x19) {
        SetForwardVelocity(o, -0x40000);
        func_sc03_007_80180064((s32)o, (s32)&D_800D3918);
    }
    if (TickTimer(o) != 0 || func_sc03_007_80180388(o) < 0x2001) {
        AF(o, s16, 2) = 8;
    }
}

void func_sc03_007_8017F414(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    arg0->state = 9;
    arg0->hitState = 0;
    arg0->stateCount = 0;
    arg0->timer = 8;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_007_8017F444(u8 *o) {
    SV8 v;
    u8 *p;
    u8 *q;
    s16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            ((TB *)(AF(o, u8 *, 0x20) + 4))->top = 1;
            AF(o, s16, 0xE4) = 3;
            return;
        }
        t = rsin(AF(o, s32, 0x1C) << 10 >> 3);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = t;
        AF(p, s16, 0x18) = t;
        t = rcos(AF(o, s32, 0x1C) << 10 >> 3) * 2;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = t + 0x1000;
        break;
    case 1:
        if (--AF(o, s16, 0xE4) == 0) {
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA) - 0x38;
            v.z = AF(o, s16, 0xE);
            q = SpawnKind1CAt(&v);
            if (q != 0) {
                p = AF(q, u8 *, 0xCC);
                if (p != 0) {
                    AF(p, s16, 0x1A) = 0x5000;
                    AF(p, s16, 0x18) = 0x5000;
                }
            }
            AF(o, s16, 0x34) = 2;
        }
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 3;
            ((TB *)(AF(o, u8 *, 0x20) + 4))->top = 0;
            func_sc03_007_8017FE04(o);
            AF(o, s32, 0x1C) = 8;
            AF(o, u16, 0x5C) = 0xAA10;
        }
        break;
    case 3:
        if (TickTimer(o) != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(o, s16, 2) = 0xA;
            return;
        }
        t = rcos(AF(o, s32, 0x1C) << 10 >> 3);
        p = AF(o, u8 *, 0x20);
        AF(p, s16, 0x1C) = t;
        AF(p, s16, 0x18) = t;
        t = rsin(AF(o, s32, 0x1C) << 10 >> 3) * 2;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = t + 0x1000;
        break;
    }
}

void func_sc03_007_8017F658(u8 *arg0) {
    AF(arg0, s16, 2) = 0xB;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE658);
    AF(arg0, s32, 0x1C) = 0x1A;
    StopWithGravity((s32) arg0);
}

void func_sc03_007_8017F6A8(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    SetForwardVelocity(o, -0x40000);
    if (func_sc03_007_80180064(o, &D_800D3918) == 2) {
        AF(o, s16, 2) = 0xC;
    } else if (TickTimer(o) != 0) {
        if (func_sc03_007_80180388(o) > 0x7000) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 0xC;
        }
    } else if (func_sc03_007_80180388(o) <= 0x3800) {
        AF(o, s16, 2) = 0xC;
    }
}

void func_sc03_007_8017F750(StageActor *arg0) {
    arg0->state = 0xD;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE730);
    arg0->timer = 0x5A;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_007_8017F794(u8 *o) {
    if (AF(o, s32, 0x1C) >= 0x16) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += func_sc03_007_8018033C((s32)o, 8);
    }
    if (AF(o, s32, 0x1C) == 0x15) {
        PlaySoundId(0x522, 0);
    }
    if (AF(o, s32, 0x1C) == 0x15 || AF(o, s32, 0x1C) == 0xB || AF(o, s32, 0x1C) == 1) {
        func_sc03_007_8017FC6C(o);
    }
    if (TickTimer(o) != 0) {
        AF(o, s16, 2) = 2;
    }
}

void func_sc03_007_8017F850(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 2) = 0xF;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x30000);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
    AF(arg0, s32, 0x1C) = 0x1A;
}

void func_sc03_007_8017F8AC(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xAA) <= 0) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_007_801BE580);
        AF(arg0, s32, 0x1C) = 0x1A;
    }
    func_sc03_007_80180064((s32) arg0, (s32) &D_800D3918);
}

void func_sc03_007_8017F920(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, u16, 0x2C);
    if (temp_v1 & 0x10) {
        AF(temp_a1, u16, 0x2C) = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1000;
        AF(temp_v1_2, s16, 0x1A) = 0x1000;
        AF(temp_v1_2, s16, 0x18) = 0x1000;
    }
}

void func_sc03_007_8017F95C(Mover *arg0) {
    arg0->state = 0xE;
    arg0->model->rot.vy = (s16) ((HeadingToTarget((s32) arg0) + 0x800) & 0xFFF);
}

void func_sc03_007_8017F99C(u8 *arg0) {
    s16 var_v0;
    u16 temp_v1_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    StopWithGravity((s32) arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    temp_v1_3 = AF(arg0, u16, 0x5E);
    if ((temp_v1_3 == 9) || (temp_v1_3 == 0x1C)) {
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_007_8018BF30);
        var_v0 = 0xCC;
    } else {
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_007_8018BF3C);
        var_v0 = 0x100;
    }
    AF(arg0, s16, 0xDE) = var_v0;
    SetScript((s32) arg0, (s32) &D_sc03_007_801BEC20);
}

void func_sc03_007_8017FA84(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    DamageActorsNear((s32) arg0, 0xA, AF(AF(arg0, void *, 0x20), s16, 0x12) + 0x800, 0x1D);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0xDE));
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 >= 0x29) {
        SetReactionStep((s32) arg0, 0xD);
        return;
    }
    if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc03_007_8018BF48) & 0x2000) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0U;
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0xE0) = 1;
    }
}

void func_sc03_007_8017FB40(StageActor *arg0) {
    ModelObj *temp_v1;

    arg0->hitState = 0;
    arg0->timer = 0x10;
    arg0->model->rot.vx = 0;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->stateCount = 0;
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 0x3C);
    SetScript((s32) arg0, (s32) &D_sc03_007_801BEC20);
}

void func_sc03_007_8017FBA0(u8 *o) {
    SV8 v;
    s32 s;
    u8 *p;

    if (TickTimer(o) != 0) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE);
        SpawnKind1CAt(&v);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        DropItem(o);
        func_sc03_007_8018022C(o);
        return;
    }
    s = rsin((AF(o, s32, 0x1C) << 10) >> 4);
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x1C) = s;
    AF(p, s16, 0x1A) = s;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = rcos((AF(o, s32, 0x1C) << 10) >> 4) * 4 + 0x1000;
}

void func_sc03_007_8017FC6C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;

    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_007_8018BE48, &a, &f);
    RotTransSV(&D_sc03_007_8018BE50, &b, &f);
    func_sc03_007_8017FD6C(AF(AF(o, u8 *, 0x20), s16, 0x12), &a, AF(o, s16, 0xDC));
    func_sc03_007_8017FD6C(AF(AF(o, u8 *, 0x20), s16, 0x12), &b, AF(o, s16, 0xDC));
    if (++AF(o, s16, 0xDC) >= 3) {
        AF(o, s16, 0xDC) = 2;
    }
}

s32 func_sc03_007_8017FD6C(s32 arg0, s32 a1, s32 a2) {
    s16 a0 = arg0;
    s32 e;
    s32 *t;

    e = SpawnPropAt(0x1D);
    if (e == 0) {
        return 0;
    }
    t = D_sc03_007_8018BD88[a2];
    a2 = AF(e, s32, 0x20);
    func_8001CD50(a2, t);
    AF(a2, s16, 0x1E) = 0xC00;
    AF(a2, s16, 0x18) = AF(a2, s16, 0x1A) = 0x1000;
    AF(a2, s16, 0x12) = a0;
    AF(a2, s32, 4) |= 0x40000000;
    return e;
}

void func_sc03_007_8017FE04(u8 *o) {
    V4 dir;
    V4 out;
    SV8 s;
    SV8 t;
    u8 unused[8];
    WMtx m;
    UXY pos[3];

    StopWithGravity(o);
    s.x = AF(o, u16, 0x3A);
    s.y = AF(o, u16, 0x3E);
    s.z = AF(o, u16, 0x42);
    if (func_sc03_007_80180AF4() == 1) {
        AF(o, u16, 6) = AF(D_801270C8[0], u16, 6);
        AF(o, u16, 0xA) = AF(D_801270C8[0], u16, 0xA);
        AF(o, u16, 0xE) = AF(D_801270C8[0], u16, 0xE);
    } else {
        AF(o, u16, 6) = g_PlayerTarget;
        AF(o, u16, 0xA) = D_80126CB6;
        AF(o, u16, 0xE) = D_80126CB8;
    }
    dir.y = 0;
    dir.x = 0;
    dir.z = 0xFF600000;
    m = GsIDMATRIX;
    RotMatrixY(rand() % 4096, &m);
    pos[1].w = AF(o, s32, 8);
    do {
        pos[0].w = AF(o, s32, 4);
        pos[2].w = AF(o, s32, 0xC);
        ApplyMatrixLV(&m, &dir, &out);
        pos[0].w += out.x;
        pos[2].w += out.z;
        t.x = pos[0].s.y;
        t.y = pos[1].s.y;
        t.z = pos[2].s.y;
        if (!(TraceMap(1, &s, &t) & 0x8000)) {
            if (FindGround(&t) != 0) {
                AF(o, u16, 6) = t.x;
                AF(o, u16, 0xA) = t.y;
                AF(o, u16, 0xE) = t.z;
                AF(o, s32, 0x14) = 0;
                goto end;
            }
        }
        dir.z >>= 1;
    } while (-dir.z > 0xFFFF);
    AF(o, u16, 6) = AF(o, u16, 0x88);
    AF(o, u16, 0xA) = AF(o, u16, 0x8A);
    AF(o, u16, 0xE) = AF(o, u16, 0x8C);
end:
    AF(AF(o, u8 *, 0x20), s16, 0x12) = func_sc03_007_801803DC(o);
}

s32 func_sc03_007_80180064(Mover *o) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;
    s32 r;

    if (!(MoveOnGroundOfs(o) & 0x2000)) {
        RestorePrevPos(o);
    }
    for (p = (u8 *)&g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
        if (o->kind != 0 && o != p && o->kind == AF(p, u16, 0)) {
            if (DistSq((u8 *)o + 4, p + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)o + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = o->prev[0].h.i;
                a.vy = o->prev[1].h.i;
                a.vz = o->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(o);
                    break;
                }
                o->pos[0].h.i = b.vx;
                o->pos[1].h.i = b.vy;
                o->pos[2].h.i = b.vz;
                break;
            }
        }
    }
    r = func_sc03_007_80180AF4();
    if (r == 1 && UndoMoveIntoObject(o, D_801270C8[0]) == r) {
        return 2;
    }
    return 1;
}

void func_sc03_007_8018022C(StageActor *arg0) {
    SpawnDef *temp_v1;

    GainStat0FromActor(arg0);
    if (!(arg0->param & 0x8000)) {
        temp_v1 = arg0->def;
        if ((temp_v1 != NULL) && ((s16)arg0->animFlags & 0x8000)) {
            temp_v1->flags = (u16) (temp_v1->flags & 0x7FFF);
        }
    }
    FreeActor(arg0);
}

s32 func_sc03_007_801802A4(Mover *o) {
    s32 d;
    s32 a;
    s32 ok;

    d = func_sc03_007_80180388(o);
    if (d > 0x2000) {
        if (d > 0x10000) {
            return 0;
        }
        a = (func_sc03_007_801803DC(o) - o->model->rot.vy) & 0xFFF;
        if (a < 0x800) {
            ok = a < 0x400;
        } else {
            ok = 0x1000 - a < 0x400;
        }
        if (!ok) {
            return 0;
        }
    }
    o->state = 6;
    return 1;
}

s32 func_sc03_007_8018033C(Mover *arg0, s32 arg1) {
    return TurnStep((s32) arg0->model->rot.vy, func_sc03_007_801803DC(arg0), (s32) (s16) arg1);
}

s32 func_sc03_007_80180388(Mover *arg0) {
    if (func_sc03_007_80180AF4() == 1) {
        return DistSq((u8 *)arg0 + 4, D_801270C8[0] + 4);
    }
    return DistSqToTarget(arg0);
}

s32 func_sc03_007_801803DC(Mover *o) {
    SV8 v;
    u8 *p;

    if (func_sc03_007_80180AF4() == 1) {
        p = (u8 *)D_801270C8[0];
        v.x = AF(p, u16, 6);
        v.y = AF(p, u16, 0xA);
        v.z = AF(p, u16, 0xE);
        return HeadingToPoint((u8 *)o + 4, &v);
    }
    return HeadingToTarget(o);
}

s32 func_sc03_007_80180454(void) {
    s32 temp_v1;

    temp_v1 = GetVar(0xCC) & 0xFF;
    if ((temp_v1 == 8) || (temp_v1 == 0xC) || (temp_v1 == 9)) {
        return 1;
    }
    return temp_v1 == 0xD;
}

void func_sc03_007_801804A0(u8 *arg0) {
    D_sc03_007_8018BF50[AF(arg0, u16, 2)]();
}

void func_sc03_007_801804DC(u8 *o) {
    WMtx m;
    V3 v;

    v.y = 0;
    v.x = 0;
    v.z = -0x18000;
    m = GsIDMATRIX;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    AF(o, s16, 0x2C) = 0x3C;
    AF(o, s16, 2) = 1;
}

void func_sc03_007_80180598(u8 *o) {
    SV8 v;
    u16 c;
    if (D_801270C0 == 2) return;
    if (func_sc03_007_80180AF4() == 1) {
        v.x = AF(D_801270C8[0], s16, 6);
        v.y = AF(D_801270C8[0], s16, 0xA) - 0x10;
        v.z = AF(D_801270C8[0], s16, 0xE);
        func_sc03_007_801806B8(o, &v, &D_sc03_007_8018BF58, 0);
    }
    v.x = g_PlayerX;
    v.y = D_80126B62 - 0x30;
    v.z = D_80126B66;
    func_sc03_007_801806B8(o, &v, &D_sc03_007_8018BF60, 1);
    c = AF(o, u16, 0x2C);
    AF(o, u16, 0x2C) = c - 1;
    if ((s16)c < 0) {
        FreeProp(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x100;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x100;
    MoveProp(o);
}

s32 func_sc03_007_801806B8(u8 *o, s32 a1, s32 a2, s32 a3) {
    SV8 d;
    SV8 v;
    s32 p;

    if (a3 != 0) {
        if (PlayerFlag400() != 0) {
            return 0;
        }
        if (func_sc03_007_80180838(o, g_PlayerModel, g_PlayerHitData) == 0) {
            return 0;
        }
        v.x = g_PlayerX;
        v.y = D_80126B62;
        v.z = D_80126B66;
        d.x = v.x - AF(o, s16, 6);
        d.y = v.y - AF(o, s16, 0xA);
        d.z = v.z - AF(o, s16, 0xE);
        VectorNormalSS(&d, &d);
        v.y -= 0x20;
        HitPlayer(1, 0x5001, 0, 0, &v, &d);
        g_PlayerHitFacing = AF(AF(o, u8 *, 0x20), u16, 0x12);
    } else {
        p = D_801270C8[0];
        if (AF(p, s16, 0xAA) > 0) {
            return 0;
        }
        if (func_sc03_007_80180838(o, AF(p, s32, 0x20), AF(p, s32, 0x58)) == 0) {
            return 0;
        }
        AF(D_801270C8[0], u16, 0x5C) |= 1;
        AF(D_801270C8[0], s16, 0x5E) = 0x1E;
        AF(D_801270C8[0], s16, 0x62) = AF(AF(o, u8 *, 0x20), u16, 0x12);
    }
    return 1;
}

s32 func_sc03_007_80180838(u8 *o, ModelObj *a1, s32 a2) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 f;
    u8 *p;
    s32 i;

    p = AF(o, u8 *, 0x20);
    func_80020DA4(p + 0x10, &m);
    func_80020F34(&m, p + 0x18);
    m.t[0] = AF(p, s16, 8);
    m.t[1] = AF(p, s16, 0xA);
    m.t[2] = AF(p, s16, 0xC);
    for (i = 0; i < 4; i++) {
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc03_007_8018BF68[i], &a, &f);
        RotTransSV(&D_sc03_007_8018BF68[i + 4], &b, &f);
        if (PathHitsModel(a1, a2, &a, &b)) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_007_80180990(StageActor *arg0) {
    D_sc03_007_8018BFC8[arg0->state]();
}

void func_sc03_007_801809CC(StageActor *arg0) {
    arg0->state = 1;
    arg0->timer = 2;
    AF(arg0, u8, 0xFC) = 1;
    AF(arg0, u8, 0xFE) = 2;
    AF(arg0, u8, 0xFD) = 0;
    AF(arg0, u8, 0xFF) = 4;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_007_80180A00(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc03_007_80180A58(0, arg0 + 0xFD);
        func_sc03_007_80180A58(1, arg0 + 0xFE);
        func_sc03_007_80180A58(2, arg0 + 0xFF);
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc03_007_80180A58(s32 arg0, u8 *arg1) {
    s32 pad[1];
    s32 *p;

    if (*arg1 >= 7) {
        *arg1 = 0;
    }
    p = D_sc03_007_8018BD88[arg0];
    *p++ = D_sc03_007_8018BFA8[*arg1];
    if (*arg1 - 1 < 0) {
        *p = D_sc03_007_8018BFA8[6];
    } else {
        *p = D_sc03_007_8018BFA8[*arg1 - 1];
    }
    (*arg1)++;
}

inline s32 func_sc03_007_80180AF4(void) {
    if ((*(void * *)&D_801270C8) != NULL) {
        return AF((*(void * *)&D_801270C8), s16, 0x76) > 0;
    }
    return 0;
}

void func_sc03_007_80180B24(u8 *o) {
    s16 t;
    u8 *p;

    AF(o, s32, 0xB4) |= 1;
    AF(o, s32, 0xC4) &= ~2;
    if (AF(o, s16, 0x60) != 0) {
        AF(o, s16, 0x7C) = AF(o, s16, 0x6);
        AF(o, s16, 0x7E) = AF(o, s16, 0xA);
        AF(o, s16, 0x80) = AF(o, s16, 0xE);
        ShowDamage(o, AF(o, s16, 0x60));
    }
    t = AF(o, s16, 0x60);
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x60) = 0;
    AF(o, s16, 0x76) -= t;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, s16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    UpdateModelZYX(o);
    StopWithGravity(o);
    AF(o, u8, 0xC2) = 1;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0x3C;
    PlaySoundId(0x526, 0);
}

inline void func_sc03_007_80180BF8(u8 *arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 0x5C) = 0x8810;
    AF(arg0, s32, 0xB4) = (s32) (AF(arg0, s32, 0xB4) & ~1);
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
    if (AF(arg0, s16, 0x76) < 0x370) {
        AF(arg0, s16, 0x76) = 0x2BC;
    }
}

void func_sc03_007_80180C48(u8 *arg0) {
    g_PlayerTarget = AF(arg0, u16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void ChaseRunnerInit(u8 *o) {
    u8 f;
    u8 c;
    u8 r;
    if (SetupActor(o, &D_sc03_007_8018BFE0) == 0) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = 0x4000;
    AF(o, u8 *, 0xBC) = &D_sc03_007_8018C014;
    AF(o, u8, 0xC1) = 0;
    AF(o, s32, 0xC4) = 3;
    if (GetProgress() != 0x32) {
        f = 0;
    } else {
        c = GetVar(0xCC);
        if (c == 2 || c == 4 || c == 6 || c == 8 || c == 10 || c == 12) {
            f = 0;
        } else {
            f = 1;
        }
    }
    if (f) PlaySoundId(0xC4D, 0);
    c = GetVar(0xCC);
    if (c == 2) { AF(o, s32, 0xE0) = 0xB4; r = 2; }
    else if (c == 4) { AF(o, s32, 0xE0) = 0xD2; r = 2; }
    else if (c == 6) { AF(o, s32, 0xE0) = 0xF0; r = 0; }
    else if (c == 8) { AF(o, s32, 0xE0) = 0x10E; r = 3; }
    else if (c == 10) { AF(o, s32, 0xE0) = 0x12C; r = 0; }
    else if (c == 12) { AF(o, s32, 0xE0) = 0x14A; r = 0; }
    else r = 4;
    if (r == 4) {
        FreeActor(o);
        return;
    }
    AF(o, s16, 0x102) = 0;
    SpawnShadow(o);
    AF(o, s16, 2) = 1;
    StopWithGravity(o);
    SetScript(o, &D_sc03_007_801B101C);
    AF(o, s16, 0xDC) = AF(o, s16, 6);
    AF(o, s16, 0xDE) = AF(o, s16, 0xE);
    AF(o, s32, 4) = g_PlayerPosX;
    AF(o, s32, 0xC) = D_80126B64;
    D_801270C8[0] = (s32)o;
}

void func_sc03_007_80180E3C(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x190) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x191) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        temp_v1_2 = AF(arg0, s16, 0xE) - AF(arg0, s16, 0xDE);
        if (temp_v1_2 < -0x190) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x800;
        } else if (temp_v1_2 >= 0x191) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_007_801B0CFC);
            AF(arg0, s16, 2) = 5;
            AF(arg0, s32, 0x2C) = 0xFFF40000;
        }
    }
    SetLocalVelocityXZ((s32) arg0, (s32) &D_sc03_007_8018C03C);
    if (MoveCollide((s32) arg0) & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    g_PlayerTarget = (u16) AF(arg0, s16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = (u16) AF(arg0, s16, 0xE);
}

void func_sc03_007_80180F4C(u8 *o) {
    SV8 v;

    SetLocalVelocity(o, &D_sc03_007_8018C048);
    MoveOnGround(o);
    if (--AF(o, s16, 0x84) == 0) {
        AF(o, s16, 0x84) = 0xF;
        PlaySoundId(0x527, 0);
    }
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 0x100) = (rand() & 3) + 1;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += rand() & 0x1FF;
        AF(AF(o, u8 *, 0x20), u16, 0x12) -= 0x100;
        v.x = D_sc03_007_8018C054[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C05C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), HeadingToPoint(o + 4, &v), 8);
    }
    if (--AF(o, s32, 0xE0) == 0) {
        SetScript(o, &D_sc03_007_801B101C);
        AF(o, s16, 2) = 3;
        AF(o, s16, 0xFC) = 0;
    }
    g_PlayerTarget = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void ChaseRunnerRun(u8 *o) {
    SV8 v;
    s32 f;
    s32 n;

    SetLocalVelocityXZ(o, &D_sc03_007_8018C03C);
    f = MoveCollide(o);
    if (f & 0x6000) {
        AF(o, s16, 0x16) = -4;
    }
    if (f & 0x8000) {
        n = (AF(o, u16, 0x104) + 1) & 0x3F;
        AF(o, u16, 0x104) = n;
        if (n < 0x1F) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x200;
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x12) -= 0x200;
        }
    }
    if (AF(o, s16, 0xFC) != 0) {
        v.x = D_sc03_007_8018C064[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C06C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
    } else {
        v.x = D_sc03_007_8018C054[AF(o, u8, 0xFE)] + AF(o, u16, 0xDC);
        v.y = 0;
        v.z = D_sc03_007_8018C05C[AF(o, u8, 0xFE)] + AF(o, u16, 0xDE);
    }
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), HeadingToPoint(o + 4, &v), 4);
    if ((AF(o, s16, 6) - v.x) * (AF(o, s16, 6) - v.x) + (AF(o, s16, 0xE) - v.z) * (AF(o, s16, 0xE) - v.z) < 0x400) {
        if (AF(o, s16, 0xFC) != 0) {
            if (AF(o, u8, 0xFF) != 0) {
                AF(o, s16, 2) = 4;
                SetScript(o, &D_sc03_007_801B0DD4);
                AF(o, s32, 0x1C) = 0xF;
                switch (GetVar(0xCC) & 0xFF) {
                case 2:
                    SetVar(0xCC, 3);
                    break;
                case 4:
                    SetVar(0xCC, 5);
                    break;
                case 6:
                    SetVar(0xCC, 7);
                    break;
                case 8:
                    SetVar(0xCC, 9);
                    break;
                case 10:
                    SetVar(0xCC, 0xB);
                    break;
                case 12:
                    SetVar(0xCC, 0xD);
                    break;
                }
            } else {
                AF(o, s16, 2) = 1;
                SetScript(o, &D_sc03_007_801B101C);
            }
        } else {
            AF(o, s16, 0xFC)++;
        }
    }
    g_PlayerTarget = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_801813D0(u8 *o) {
    s32 r;
    s32 n;

    AF(o, s32, 0x2C) += 0x14000;
    SetLocalVelocity(o, o + 0x24);
    MoveOnGround(o);
    if (AF(o, s32, 0x2C) >= -0x20000) {
        AF(o, s16, 2) = 2;
        SetScript(o, &D_sc03_007_801B0ED4);
        AF(o, s16, 0x100) = (rand() & 3) + 1;
        AF(o, s32, 0xE0) = 0xB4;
        AF(o, s16, 0x84) = 1;
        if (rand() & 3) {
            r = GetVar(0xCC) & 0xFF;
            if (r == 2) {
                AF(o, s32, 0xE0) = 0xB4;
                n = 2;
            } else if (r == 4) {
                AF(o, s32, 0xE0) = 0xD2;
                n = 2;
            } else if (r == 6) {
                AF(o, s32, 0xE0) = 0xF0;
                n = 0;
            } else if (r == 8) {
                AF(o, s32, 0xE0) = 0x10E;
                n = 3;
            } else if (r == 0xA) {
                AF(o, s32, 0xE0) = 0x12C;
                n = 0;
            } else if (r == 0xC) {
                AF(o, s32, 0xE0) = 0x14A;
                n = 0;
            } else {
                n = 4;
            }
            AF(o, u8, 0xFE) = n;
            AF(o, u8, 0xFF) = 1;
        } else {
            AF(o, u8, 0xFE) = rand() & 3;
            AF(o, u8, 0xFF) = 0;
        }
    }
    g_PlayerTarget = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void func_sc03_007_80181544(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    u16 a = AF(p, u16, 0x12);
    s32 f;
    AF(p, u16, 0x12) = (a & 0x800) ? a + 0x80 : a - 0x80;
    SetLocalVelocityXZ(o, &D_sc03_007_8018C03C);
    f = MoveCollide(o);
    if (f & 0x6000) AF(o, s16, 0x16) = -4;
    if (f & 0x8000) {
        AF(o, s32, 4) += AF(o, s32, 0x10);
        AF(o, s32, 0xC) += AF(o, s32, 0x18);
    }
    if (AF(o, s16, 0xE) - AF(o, s16, 0xDE) < -0xFA0) {
        FreeActor(o);
        D_801270C8[0] = 0;
        return;
    }
    if (--AF(o, s16, 0x84) == 0) {
        PlaySoundId(0x526, 0);
        AF(o, s16, 0x84) = 10;
    }
    g_PlayerTarget = AF(o, u16, 6);
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

extern void (*D_sc03_007_8018C08C[])();
extern void (*D_sc03_007_8018C074[])();
void func_sc03_007_80181668(StageActor *o) {
    u16 s = o->state;

    if (s != 0) {
        if (o->hp < 800) {
            D_sc03_007_8018C08C[o->work102]();
        } else {
            D_sc03_007_8018C074[s]();
        }
    } else {
        D_sc03_007_8018C074[0]();
    }
}

void func_sc03_007_801816EC(StageActor *o) {
    o->shrinkTimer = 0;
    o->hitState = 0;
    o->model->scale.vx = 0x1800;
    o->model->scale.vz = 0x1800;
    o->model->scale.vy = 0x100;
    o->model->flags |= 0x10;
    o->stateCount = 0;
    o->timer = 0x1E;
    o->animTimer = 0;
    PlaySoundId(0x526, 0);
    o->hitPos[0] = o->pos[0].h.i;
    o->hitPos[1] = o->pos[1].h.i;
    o->hitPos[2] = o->pos[2].h.i;
    ShowDamage(o, 0xA);
}

void func_sc03_007_8018178C(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34)++;
        }
        break;
    case 1:
        if (--AF(o, s32, 0x1C) & 2) {
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
            AF(o, s16, 0x34)++;
            AF(o, s16, 0xA) -= 0x40;
            StopWithGravity(o);
        }
        break;
    case 2:
        if (MoveCollide(o)) {
            AF(o, s16, 0x76) -= 10;
            AF(o, u8, 0xC1) = 0;
            func_sc03_007_80180BF8(o);
        }
        break;
    }
}

void func_sc03_007_80181954(StageActor *o) {
    s32 a;
    u8 *p;

    a = HeadingTo((u8 *)o + 4, &g_PlayerPosX);
    a = TurnStep(o->model->rot.vy, a, 4);
    o->model->rot.vy += a;
    if (--o->timer == 0) {
        if ((AF(o, u8, 0xFF) ^= 1) != 0) {
            o->timer = 5;
            SetScript(o, &D_sc03_007_801B0DA4);
            PlaySoundId(0x525, 0);
        } else {
            o->timer = 0xF;
            SetScript(o, &D_sc03_007_801B0DD4);
        }
    }
    g_PlayerTarget = (u16)o->pos[0].h.i;
    D_80126CB6 = AF(o, u16, 0xA);
    D_80126CB8 = AF(o, u16, 0xE);
}

void ChaseStart(StageActor *arg0) {
    s32 temp_v1;

    SetScript(arg0, (s32) &D_sc03_007_801B101C);
    temp_v1 = arg0->pos[0].h.i - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        arg0->model->rot.vy = 0xC00;
    } else if (temp_v1 >= 0x61) {
        arg0->model->rot.vy = 0x400;
    } else {
        arg0->model->rot.vy = 0;
    }
    arg0->unk84 = 0xA;
    arg0->work102 = 1;
    SetVar(0xCC, 1);
    AF(arg0, s16, 0x5C) = 0;
    g_PlayerTarget = (u16) arg0->pos[0].h.i;
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void func_sc03_007_80181B04(u8 *arg0) {
    s32 temp_v1;
    u16 temp_v0;

    temp_v1 = AF(arg0, s16, 6) - AF(arg0, s16, 0xDC);
    if (temp_v1 < -0x60) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xC00;
    } else if (temp_v1 >= 0x61) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x400;
    } else {
        AF(arg0, s16, 0x102) = 2;
    }
    SetLocalVelocityXZ((s32) arg0, (s32) &D_sc03_007_8018C03C);
    if (MoveCollide((s32) arg0) & 0x6000) {
        AF(arg0, s16, 0x16) = -4;
    }
    temp_v0 = AF(arg0, u16, 0x84) - 1;
    AF(arg0, u16, 0x84) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        PlaySoundId(0x526, 0);
        AF(arg0, u16, 0x84) = 0xAU;
    }
    g_PlayerTarget = (u16) AF(arg0, s16, 6);
    D_80126CB6 = AF(arg0, u16, 0xA);
    D_80126CB8 = AF(arg0, u16, 0xE);
}

void func_sc03_007_80181BE8(StageActor *arg0) {
    D_sc03_007_8018C0EC[arg0->state]();
}

void func_sc03_007_80181C24(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_007_8018C0B8) != 0) {
        if (arg0->param != 0) {
            InitModel(arg0->model, (s32) &D_sc03_007_801B35E8);
            arg0->hitData = (s32) ((s32) &D_sc03_007_8018C0A8 | 0x40000000 | 0x20000000);
        }
        arg0->state = 1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->targetClass = 2;
    }
}

void func_sc03_007_80181CB4(void) {
}

void func_sc03_007_80181CBC(StageActor *arg0) {
    D_sc03_007_8018C150[arg0->state]();
}

void ChaseNpcInit(StageActor *arg0) {
    s32 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_007_8018C104) != 0) {
        if ((GetProgress() >= 0x384U) || ((arg0->param == 0) && ((temp_v1 = GetVar(0xCC) & 0xFF, ((temp_v1 < 3) == 0)) || (temp_v1 < 0xF)))) {
            RejectSpawn(arg0);
            return;
        }
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc03_007_80187704);
        SpawnTalkMarker(arg0, (s32) func_sc03_007_80181E30);
    }
}

void func_sc03_007_80181DB0(void) {
}

void func_sc03_007_80181DB8(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc03_007_8018C138);
    arg0->state = 3;
}

void func_sc03_007_80181DF0(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_007_80181E30(u8 *arg0) {
    s32 *r;

    if (DistSqToPlayer(AF(arg0, s32, 0x64)) < 0x1001) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_007_80181E8C(StageActor *arg0) {
    D_sc03_007_8018C230[arg0->state]();
}

void func_sc03_007_80181EC8(StageActor *o) {
    ModelObj *r;

    r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, 0);
    AF(o, u8 *, 0x58) = &D_sc03_007_8018C220;
    o->hitState = 0x80;
    o->state += 1;
    o->message = D_sc03_007_8018C1F0[(u16)o->param & 0xF][rand() % 3];
    o->unkFC = ((u16)o->param >> 12) << 9;
}

void func_sc03_007_80181F94(StageActor *o) {
    s32 r = GetVar(0xCC);
    switch (((u16)o->param >> 4) & 0xF) {
    case 2:
        if ((r & 0xFF) == 3) o->message = &D_sc03_007_8018B928;
        break;
    case 3:
        if ((r & 0xFF) == 5) o->message = &D_sc03_007_8018B9B8;
        break;
    case 4:
        if ((r & 0xFF) == 7) o->message = &D_sc03_007_8018BA00;
        else if ((r & 0xFF) == 0xD) o->message = &D_sc03_007_8018B5C8;
        break;
    case 5:
        if ((r & 0xFF) == 9) o->message = &D_sc03_007_8018B874;
        break;
    case 6:
        if ((r & 0xFF) == 0xB) o->message = &D_sc03_007_8018B970;
        break;
    }
}

s32 func_sc03_007_801820AC(StageActor *arg0) {
    GainStat0FromActor(arg0);
    return DespawnActor(arg0);
}

void func_sc03_007_801820DC(StageActor *arg0) {
    s16 v[3];
    u16 t;

    t = arg0->hitCode;
    if (t == 0x23) {
        arg0->workFE = 1;
        PlaySoundId(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc03_007_8018732C((s32) arg0, v, 0xD);
    }
}

void func_sc03_007_80182148(u8 *arg0) {
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

void func_sc03_007_801821D0(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        return;
    }
    AF(arg0, u16, 0x102) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
}

void func_sc03_007_80182214(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
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

void func_sc03_007_801822B8(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_007_801822C8(u8 *arg0) {
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (TickTimer((s32) arg0) != 0) {
        p2 = AF(arg0, u8 *, 0x20);
        AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        SetReactionStep((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_007_80182374(StageActor *arg0) {
    if ((arg0->reactBits & 1) && ((s32)arg0->script != &D_sc03_007_801CAB58)) {
        SetScript((s32) arg0, (s32) &D_sc03_007_801CAB58);
    }
}

void func_sc03_007_801823BC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;

    var_a0 = 0x43F;
    if (AF(arg0, u16, 0x5E) == 0x1D) {
        var_a0 = 0x440;
    }
    PlaySoundId(var_a0, 0, arg2);
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s32, 0xB4) = (s32) (AF(arg0, s32, 0xB4) & ~0x2000);
    GiveItem(2);
}

void func_sc03_007_80182420(StageActor *arg0) {
    if (arg0->animFlags & 0x4000) {
        arg0->animTimer = 0;
        GainStat0FromActor((s32) arg0);
        DespawnActor((s32) arg0);
    }
}

void func_sc03_007_80182468(StageActor *arg0) {
    arg0->state = 2;
    SetScript(arg0, (s32) &D_sc03_007_801CAFE0);
    arg0->timer = 0x14;
}

void func_sc03_007_801824A8(StageActor *arg0) {
    arg0->state = 3;
    SetScript(arg0, (s32) &D_sc03_007_801CAB58);
    arg0->hitState = 0xA810;
    arg0->hitCode = 0;
    AF(arg0, s16, 0xDC) = 0;
    arg0->timer = 0xA;
    arg0->workFE = 0;
}

void func_sc03_007_801824FC(StageActor *arg0) {
    arg0->state = 4;
    SetScript(arg0, (s32) &D_sc03_007_801CACF8);
    arg0->timer = 0x1E;
    if (arg0->unkFC == 0) {
        arg0->unkFC = 1;
        SpawnHeadMarker(arg0, -0x96);
    }
}

s32 func_sc03_007_80182558(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc03_007_8018256C(u8 *o) {
    u8 unused[32];
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 flag;
    Player *q;
    s32 r;

    q = &g_Player;
    if (AF(o, s32, 0x1C) == 9) {
        SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
        SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
        RotTransSV(&D_sc03_007_8018C340[0], &a, &flag);
        RotTransSV(&D_sc03_007_8018C340[1], &b, &flag);
        if ((AF(D_801270C8[0], u16, 0x5C) & 0x8000) && AF(D_801270C8[0], u16, 0x5E) != 1) {
            if (func_sc03_007_80180AF4() == 1) {
                c = a;
                d = b;
                if (PathHitsModel(AF(D_801270C8[0], s32, 0x20), AF(D_801270C8[0], s32, 0x58), &c, &d) != 0) {
                    AF(D_801270C8[0], u16, 0x5C) |= 1;
                    AF(D_801270C8[0], s16, 0x60) = 9;
                    AF(D_801270C8[0], s16, 0x62) = AF(AF(o, u8 *, 0x20), u16, 0x12);
                    AF(D_801270C8[0], s16, 0x5E) = 1;
                }
            }
        }
        r = SegmentHitsPlayer(o, &a, &b);
        if (r == 1) {
            HitPlayer(1, 1, AF(AF(o, u8 *, 0x20), s16, 0x12), 9, &b, &g_GroundNormal);
            if (AF(o, s16, 0x70) == r) {
                q->hitCode |= 0x800;
            }
        }
        PlaySoundId(0x43E, 0);
    }
    if (TickTimer(o) != 0) {
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc03_007_801CAB58);
        AF(o, u16, 0x5C) = 0xA810;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 10;
        AF(o, s16, 0xFE) = 0;
    }
}

void func_sc03_007_801827CC(StageActor *arg0) {
    ModelObj *temp_v1;

    D_sc03_007_8018C350[arg0->state]();
    if (arg0->kind != 0) {
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    }
}

void func_sc03_007_8018283C(StageActor *o) {
    SV8 v;
    StageActor *m = o->parent;

    if (o->workFE == 0x7FFF) {
        o->workFE = (u16)o->model->rot.vy;
    }
    if (o->unkFC != (s16)o->parent->id) {
        FreeActor(o);
        return;
    }
    *(B8 *)((u8 *)o->model + 0x10) = *(B8 *)((u8 *)m->model + 0x10);
    if ((u8 *)o->parent->script != &D_sc03_007_801CB130) {
        o->model->rot.vy = (u16)o->workFE;
        o->pos[0].w = o->parent->pos[0].w;
        o->pos[1].w = o->parent->pos[1].w;
        o->pos[2].w = o->parent->pos[2].w;
    } else {
        FaceHelper(o->parent, &D_sc03_007_8018C374, &v);
        o->pos[0].h.i = v.x;
        o->pos[1].h.i = v.y;
        o->pos[2].h.i = v.z;
    }
    *(B8 *)((u8 *)o->model + 0x18) = *(B8 *)((u8 *)m->model + 0x18);
    o->model->flags = m->model->flags;
    o->model->unk04 = (s32)m->model->unk04;
    o->model->unk04 &= 0x7FFFFFFF;
}

void func_sc03_007_801829DC(StageActor *arg0) {
    D_sc03_007_8018C37C[arg0->state]();
}

void func_sc03_007_80182A18(StageActor *arg0) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v1 = arg0->model;
    temp_v1->scale.vy = (u16) ((u16)temp_v1->scale.vy + 0x200);
    if ((s16) (u16)arg0->model->scale.vy >= 0x1001) {
        arg0->state = 1;
        arg0->model->scale.vy = 0x1000U;
        temp_v1_2 = arg0->model;
        arg0->hitState = 0xA810;
        temp_v1_2->flags = (u16) (temp_v1_2->flags & 0xFFEF);
    }
}

void func_sc03_007_80182A80(s32 arg0) {
    if (DistSqToTarget(arg0) <= 0x24000) {
        func_sc03_007_80182468(arg0);
    }
}

void func_sc03_007_80182AC4(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc03_007_801824A8(arg0);
    }
}

void func_sc03_007_80182AFC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_v0_2;

    if (TickTimer(arg0, arg1) == 1) {
        temp_v0 = DistSqToTarget(arg0);
        if (temp_v0 <= 0x9000) {
            func_sc03_007_801824FC(arg0);
            return;
        }
        temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
        AF(arg0, u16, 0xDC) = temp_v0_2;
        if (((s16) temp_v0_2 >= 0x79) && (temp_v0 > 0x24000)) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc03_007_801CAF38);
        }
    }
}

void func_sc03_007_80182BA4(s32 arg0) {
    s32 v;
    void *p;

    v = TurnStepToTarget(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (TickTimer(arg0) != 0) {
        func_sc03_007_80182558(arg0);
    }
}

void func_sc03_007_80182BFC(u8 *o) {
    s32 t = GetVar(0xCC) & 0xFF;
    s32 r;
    if (t == 4 || t == 0xC || t == 5) r = 1; else r = t == 0xD;
    if (r == 0) {
        u16 *q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    if (SetupActor(o, &D_sc03_007_8018C248 + AF(o, s16, 0x70) * 0x34)) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018C2B0;
        AF(o, s32, 0xC4) = 1;
        AF(o, s32, 0xB4) = 0xFFFBFFFD;
        AF(o, s16, 0x86) = 1;
        AF(o, s16, 0x52) = 0x28;
        UpdateModelZYX(o);
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc03_007_801CAF38);
    }
}

void func_sc03_007_80182D04(StageActor *o) {
    ModelObj *r;
    u16 v;

    r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, D_sc03_007_8018C36C[o->param]);
    v = o->parent->id;
    o->state = 1;
    o->workFE = 0x7FFF;
    o->unkFC = v;
}

void func_sc03_007_80182D88(Mover *o) {
    SV8 a;
    SV8 v;
    s32 w;
    u8 *p;
    s32 i;
    s32 t;
    s32 *wp;
    u8 *q;

    p = (u8 *)&g_Actors;
    i = 0;
    q = (u8 *)o + 4;
    wp = &w;
    for (; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, s32, 0x58) == 0) continue;
        if (o == p) continue;
        if (DistSq(q, p + 4) >= 0x1000) continue;
        t = HeadingTo(q, p + 4);
        AngleToVec2(wp, t, 0x41);
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        v.x += w;
        v.z += w >> 16;
        a.x = o->prev[0].h.i;
        a.y = o->prev[1].h.i;
        a.z = o->prev[2].h.i;
        if (!(CollidePath(&a, &v, 0) & 0x2000)) {
            RestorePrevPos(o);
        } else {
            o->pos[0].h.i = v.x;
            o->pos[1].h.i = v.y;
            o->pos[2].h.i = v.z;
        }
        return;
    }
}

void func_sc03_007_80182F00(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x6AA, 0, arg2);
}

void func_sc03_007_80182F24(StageActor *arg0) {
    s32 var_a0;

    GainStat0FromActor(arg0);
    var_a0 = 3;
    if ((u16)arg0->param & 0x200) {
        var_a0 = 7;
    }
    GiveItem(var_a0);
    DespawnActor(arg0);
}

void func_sc03_007_80182F74(u8 *arg0) {
    if (AF(arg0, s32, 0xC4) & 4) {
        func_sc03_007_80182FB8();
        return;
    }
    func_sc03_007_80183004((s32) arg0);
}

void func_sc03_007_80182FB8(u8 *o) {
    AF(o, s16, 2) = 7;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    SetScript((s32) o, (s32) &D_sc03_007_801E42B0);
    StopWithGravity(o);
}

void func_sc03_007_80183004(u8 *o) {
    s32 r;

    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    r = (rand() & 0x3FF) - 0x200;
    if (r >= 0) {
        r += 0x300;
    } else {
        r -= 0x300;
    }
    AF(o, u16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + r) & 0xFFF;
    StopWithGravity(o);
    if (IsOnGround(o) != 0) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

void func_sc03_007_801830C0(u8 *o) {
    s32 d;

    if (DistSqToTarget(o) <= 0x10000) {
        func_sc03_007_801832B4(o);
        return;
    }
    if (AF(o, s32, 0x1C) >= 8) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    SetForwardVelocity(o, D_sc03_007_8018C50C);
    if (AF(o, u16, 0x86) & 1) {
        if (!(MoveOnGround(o) & 0x2000)) {
            RestorePrevPos(o);
        }
    } else {
        if (MoveCollide(o) & 0x2000) {
            AF(o, u16, 0x86) |= 1;
        }
    }
    func_sc03_007_80182D88(o);
    if (TickTimer(o) == 0) {
        return;
    }
    if (AF(o, u16, 0x86) & 1) {
        func_sc03_007_80183284(o);
        return;
    }
    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    d = (rand() & 0x3FF) - 0x200;
    if (d >= 0) {
        d += 0x300;
    } else {
        d -= 0x300;
    }
    AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
    StopWithGravity(o);
    if (IsOnGround(o)) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

s32 func_sc03_007_80183284(StageActor *arg0) {
    arg0->state = 4;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc03_007_801E3998);
}

void func_sc03_007_801832B4(StageActor *o) {
    o->state = 5;
    if (o->unk86 & 2) {
        o->stateCount = 1;
        o->timer = 0x28;
        if ((u16)o->param & 0x200) {
            SetScript(o, &D_sc03_007_801E4B08);
        } else {
            SetScript(o, &D_sc03_007_801E3B88);
        }
        o->workFE = 0;
    } else {
        o->stateCount = 0;
        SetScript(o, &D_sc03_007_801E3C10);
        o->timer = 0x19;
        o->unk86 |= 2;
    }
}

void func_sc03_007_8018335C(u8 *o) {
    s32 d;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            SpawnHeadMarker(o, -0x78);
            PlaySoundId(0x6A9, 0);
        }
        if (TickTimer(o) == 0) {
            break;
        }
        AF(o, s16, 2) = 5;
        if (AF(o, u16, 0x86) & 2) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x28;
            if (AF(o, u16, 0x70) & 0x200) {
                SetScript(o, &D_sc03_007_801E4B08);
            } else {
                SetScript(o, &D_sc03_007_801E3B88);
            }
            AF(o, s16, 0xFE) = 0;
        } else {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3C10);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 6);
        }
        SetForwardVelocity(o, D_sc03_007_8018C510);
        if (AF(o, u16, 0x86) & 1) {
            if (!(MoveOnGround(o) & 0x2000)) {
                RestorePrevPos(o);
            }
        } else {
            if (MoveCollide(o) & 0x2000) {
                AF(o, u16, 0x86) |= 1;
            }
        }
        func_sc03_007_80182D88(o);
        if (--AF(o, s16, 0xFE) <= 0) {
            SpawnKind1C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (TickTimer(o) != 0) {
            AF(o, s16, 2) = 3;
            AF(o, s16, 0x34) = 0;
            AF(o, u16, 0x5C) = 0xAA10;
            AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
            d = (rand() & 0x3FF) - 0x200;
            if (d >= 0) {
                d += 0x300;
            } else {
                d -= 0x300;
            }
            AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
            StopWithGravity(o);
            if (IsOnGround(o)) {
                AF(o, u16, 0x86) |= 1;
            } else {
                AF(o, u16, 0x86) &= ~1;
            }
            SetScript(o, &D_sc03_007_801E3AE0);
        }
        if (TargetInSight(o, 0x200, 0x1440)) {
            if (AF(o, u16, 0x70) & 0x200) {
                func_sc03_007_80183670(o, 3, 0x28, &D_sc03_007_8018C514);
                D_sc03_007_801E9CD8 = D_sc03_007_8018C510;
                PlaySoundId(0x660, 0);
            } else {
                func_sc03_007_80183670(o, 0, 0x14, &D_sc03_007_801E3CE0);
            }
        }
        break;
    }
}

s32 func_sc03_007_80183670(StageActor *arg0, s32 arg1, s32 arg2, AnimEntry *arg3) {
    s32 temp_v0;

    arg0->stateCount = (s16) arg1;
    arg0->state = 6;
    temp_v0 = SetScript(arg0, arg3);
    arg0->timer = arg2;
    return temp_v0;
}

void func_sc03_007_801836B8(StageActor *o, s32 a1) {
    u8 unused[0x20];
    SV8 a;
    SV8 b;
    SV8 c[2];
    s32 f;
    SetRotMatrix((u8 *)o->model + 0x34);
    SetTransMatrix((u8 *)o->model + 0x34);
    RotTransSV(&D_sc03_007_8018C524[0], &a, &f);
    RotTransSV(&D_sc03_007_8018C524[1], &b, &f);
    if (func_sc03_007_80180AF4() == 1) {
        if ((AF(D_801270C8[0], u16, 0x5C) & 0x8000) && AF(D_801270C8[0], u16, 0x5E) != 1) {
            c[0] = a;
            c[1] = b;
            if (PathHitsModel(AF(D_801270C8[0], u8 *, 0x20), AF(D_801270C8[0], s32, 0x58), &c[0], &c[1])) {
                AF(D_801270C8[0], u16, 0x5C) |= 1;
                AF(D_801270C8[0], s16, 0x60) = a1;
                AF(D_801270C8[0], s16, 0x62) = (u16)o->model->rot.vy;
                AF(D_801270C8[0], s16, 0x5E) = 1;
            }
        }
    }
    if (SegmentHitsPlayer(o, &a, &b) == 1) {
        HitPlayer(1, 1, o->model->rot.vy, a1, &b, &g_GroundNormal);
    }
}

void func_sc03_007_80183894(u8 *o) {
    s32 f;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) == 7) {
            func_sc03_007_801836B8(o, 0xB);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 6);
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0xA) {
            func_sc03_007_801836B8(o, 0xB);
        }
        break;
    case 3:
        if (AF(o, s32, 0x1C) % 10 == 0) {
            D_sc03_007_801E9CD8 += 0x10000;
        }
        SetForwardVelocity(o, D_sc03_007_801E9CD8);
        if (AF(o, u16, 0x86) & 1) {
            if (MoveOnGround(o) & 0x2000) {
                f = 0;
            } else {
                RestorePrevPos(o);
                f = 1;
            }
        } else {
            if (MoveCollide(o) & 0x2000) {
                AF(o, u16, 0x86) |= 1;
            }
            f = 0;
        }
        func_sc03_007_80182D88(o);
        func_sc03_007_801836B8(o, 0x11);
        if (--AF(o, s16, 0xFE) <= 0) {
            SpawnKind1C(o, 0);
            AF(o, s16, 0xFE) = -(D_sc03_007_801E9CD8 / 0x10000);
        }
        if (f == 1) {
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3998);
        }
        break;
    case 4:
        break;
    }
    if (TickTimer(o) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (TargetInSight(o, 0x400, 0x4000)) {
                AF(o, s16, 0x34)++;
                SetScript(o, &D_sc03_007_801E38F0);
                AF(o, s32, 0x1C) = 0xA;
            } else {
                AF(o, s16, 2) = 4;
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc03_007_801E3998);
            }
            break;
        case 1:
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0x18;
            SetScript(o, &D_sc03_007_801E3DA8);
            break;
        case 2:
        case 4:
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_007_801E3998);
            break;
        case 3:
            AF(o, s32, 0x1C) = 0xA;
            AF(o, s16, 0x34)++;
            break;
        }
    }
}

void func_sc03_007_80183B58(u8 *o) {
    s32 r;
    s32 ok;
    s32 t;
    u16 *q;
    u16 f;
    s32 t2;
    s32 k;
    R34 *row;
    s32 i;
    s32 j;

    r = GetVar(0xCC) & 0xFF;
    if (r == 6) {
        ok = AF(o, u16, 0x70) & 1;
    } else if (r == 0xC) {
        t = AF(o, u16, 0x70) & 2;
        ok = t != 0;
    } else if (r == 7) {
        ok = AF(o, u16, 0x70) & 1;
    } else if (r == 0xD) {
        t = AF(o, u16, 0x70) & 2;
        ok = t != 0;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    f = AF(o, u16, 0x70);
    i = (f & 0xF00) >> 8;
    k = i * 0x68;
    t2 = f & 0x1000;
    j = t2 != 0;
    row = &D_sc03_007_8018C394[0][j];
    if (SetupActor(o, k + (s32)row)) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0xC1) = 0;
        AF(o, u8 *, 0xBC) = &D_sc03_007_8018C4CC;
        SpawnShadow(o);
        SnapToGround(o);
        AF(o, s16, 2) = AF(o, s16, 0x86) = 1;
    }
}

void func_sc03_007_80183C94(StageActor *arg0) {
    D_sc03_007_8018C534[arg0->state]();
}

void func_sc03_007_80183CD0(s32 arg0) {
    MoveCollidePassable(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc03_007_80183004(arg0);
    }
}

void func_sc03_007_80183D14(u8 *o) {
    s32 a;

    if (AF(o, u16, 0x34) != 0) {
        return;
    }
    if (!(AF(o, u16, 0x72) & 0x4000)) {
        return;
    }
    if (DistSqToTarget(o) <= 0x10000) {
        func_sc03_007_801832B4(o);
        return;
    }
    AF(o, s16, 2) = 3;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    a = (rand() & 0x3FF) - 0x200;
    if (a >= 0) {
        a += 0x300;
    } else {
        a -= 0x300;
    }
    AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
    StopWithGravity(o);
    if (IsOnGround(o) != 0) {
        AF(o, u16, 0x86) |= 1;
    } else {
        AF(o, u16, 0x86) &= ~1;
    }
    SetScript(o, &D_sc03_007_801E3AE0);
}

void func_sc03_007_80183E18(u8 *o) {
    AF(o, s16, 2) = 2;
    UpdateModelZYX(o);
    StopWithGravity(o);
    SetForwardVelocity(o, D_sc03_007_8018C510);
    if (AF(o, u16, 0x70) & 0x200) {
        SetScript(o, &D_sc03_007_801E4B08);
    } else {
        SetScript(o, &D_sc03_007_801E3B88);
    }
    AF(o, s32, 0x1C) = 0x88;
}

void func_sc03_007_80183E9C(u8 *o) {
    s32 r;

    MoveOnGround(o);
    if (TickTimer(o) != 0 || DistSqToTarget(o) <= 0x3000) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
        r = (rand() & 0x3FF) - 0x200;
        if (r < 0) {
            r -= 0x300;
        } else {
            r += 0x300;
        }
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + r) & 0xFFF;
        StopWithGravity(o);
        if (IsOnGround(o) != 0) {
            AF(o, u16, 0x86) |= 1;
        } else {
            AF(o, u16, 0x86) &= ~1;
        }
        SetScript(o, &D_sc03_007_801E3AE0);
    }
}

s32 func_sc03_007_80183F7C(void) {
    return func_sc03_007_80183FB4(GetProgress()) != g_BgmPackPlaying;
}

s32 func_sc03_007_80183FB4(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x74;
    if (arg0 < 0x2EE) {
        var_v0 = 0xB;
    }
    return var_v0;
}

void func_sc03_007_80183FCC(void) {
    UpdateClockTint();
}

void func_sc03_007_80183FEC(StageActor *arg0) {
    D_sc03_007_8018C574[arg0->state]();
}

void func_sc03_007_80184028(StageActor *o) {
    typedef struct { u8 p0[0x70]; s16 f70; u8 p1[0xDC - 0x72]; s32 fDC; u8 p2[0xFC - 0xE0]; s16 fFC; } ObjS;
    SV8 v;
    s32 i;
    u8 *e;
    s8 *p;

    D_sc03_007_801EB130 = ((ObjS *) o)->fFC;
    D_sc03_007_801EB134 = ((ObjS *) o)->fDC;
    D_sc03_007_801EB138 = &D_sc03_007_8018C554 + ((ObjS *) o)->f70 * 4;
    D_sc03_007_801EB13C = &D_sc03_007_8018C55C + ((ObjS *) o)->f70 * 8;
    PosToSVec(&g_PlayerPosX, &v);
    i = 0x4F;
    v.y = o->pos[1].h.i;
    p = &D_sc03_007_801E9D2F;
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);
    for (i = 0; i < D_sc03_007_801EB130; i++) {
        e = (u8 *) SpawnPropAt(0x61, &v);
        if (e != 0) {
            D_sc03_007_801E9CE0[i] = 1;
            AF(e, s32, 0x34) = i;
            func_sc03_007_80184560(e);
            AF(e, s16, 0xA) += (rand() & 0xF) * 0x30;
        }
    }
    NextState(o);
}

void func_sc03_007_80184170(StageActor *o) {
    SV8 v;
    s32 i;
    s32 idx;
    u8 *e;

    idx = -1;
    PosToSVec(&g_PlayerPosX, &v);
    v.y = o->pos[1].h.i;
    for (i = 0; i < D_sc03_007_801EB130; i++) {
        if (idx != -1) {
            break;
        }
        if (D_sc03_007_801E9CE0[i] == 0) {
            idx = i;
        }
    }
    if (idx != -1) {
        e = (u8 *) SpawnPropAt(0x61, &v);
        if (e != 0) {
            D_sc03_007_801E9CE0[idx] = 1;
            AF(e, s32, 0x34) = idx;
        }
    }
}

void func_sc03_007_8018423C(u8 *arg0) {
    D_sc03_007_8018C57C[AF(arg0, u16, 2)]();
}

void func_sc03_007_80184278(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    void *temp_s0;
    void *p;
    s32 t;


    temp_s4 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x34) << 6) + &D_sc03_007_801E9D30;
    func_8001CD9C(temp_s4, (s32) temp_s0);
    SetShapeCircle((s32) temp_s0, 0x10);
    temp_v0 = (rand() & 7) + 1;
    temp_a1 = (temp_v0 << 7) | ((temp_v0 << 0x17) | (temp_v0 << 0xF));
    AF(temp_s0, s32, 0) = temp_a1;
    AF(temp_s0, s32, 4) = 0;
    AF(temp_s4, s32, 4) = (s32) (AF(temp_s4, s32, 4) | 0x50000000);
    func_sc03_007_80184560((s32) arg0, temp_a1);
    temp_v1 = (rand() & 3) * 0x555;
    p = D_sc03_007_801EB13C;
    AF(temp_s4, s16, 0x1A) = temp_v1;
    AF(temp_s4, s16, 0x18) = temp_v1;
    AF(arg0, s16, 0x12) = (s16) (AF(arg0, u16, 6) + AF(p, u16, 2));
    t = AF(arg0, u16, 0xE) + AF(p, u16, 6);
    AF(arg0, s16, 0x10) = 0;
    AF(arg0, s16, 0x18) = 0;
    AF(arg0, s16, 0x1A) = t;
    temp_s0_2 = rand((s32) p);
    temp_s1 = rand();
    temp_s2 = rand();
    AF(temp_s4, s16, 0x12) = (s16) (((temp_s0_2 & 3) << 0xA) + ((temp_s1 & 0x1F) << 5) + ((temp_s2 & 3) << 8) + (rand() & 0xFF));
    AF(arg0, s16, 0x2E) = (s16) ((rand() & 7) * 0xB);
    AF(arg0, s16, 0x2C) = (s16) ((rand() & 0x1F) + 4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_007_80184410(u8 *o0) {
    typedef struct { u8 p0[2]; s16 f2; u8 p1[2]; s16 f6; u8 p2[2]; s16 fA; u8 p3[2]; s16 fE; s16 f10; s16 f12; u8 p4[2]; s16 f16; s16 f18; s16 f1A; u8 p5[4]; u8 *f20; u8 p6[8]; s16 f2C; s16 f2E; } ObjS;
    ObjS *o = (ObjS *)o0;
    u8 *e;
    u16 *p;
    SV8 v;

    e = o->f20;
    v.x = v.y = 0;
    v.z = o->f2C;
    AF(e, s16, 0x12) += o->f2E;
    RotateSVectorY(AF(e, s16, 0x12), &v, &v);
    o->f6 = o->f12 + v.x;
    o->fE = o->f1A + v.z;
    o->fA += o->f16;
    p = D_sc03_007_801EB13C;
    o->f10 += p[0];
    o->f12 -= o->f10;
    o->f18 += p[1];
    o->f1A -= o->f18;
    if (D_sc03_007_801EB134 < o->fA) {
        o->f2++;
    }
}

void func_sc03_007_80184500(s32 arg0) {
    s32 temp_a1;
    u8 *temp_a2;

    temp_a2 = (AF(arg0, s32, 0x34) << 6) + &D_sc03_007_801E9D30;
    temp_a1 = *temp_a2;
    temp_a1 -= 8;
    if (temp_a1 <= 0) {
        func_sc03_007_801846EC(arg0);
    } else {
        temp_a1 |= (temp_a1 << 0x10) | (temp_a1 << 8);
        AF(temp_a2, s32, 0) = temp_a1;
    }
}

void func_sc03_007_80184560(u8 *o) {
    SV8 v;
    s32 a;
    s32 b;
    s32 c;
    s32 e;
    s32 f;
    s32 g;
    s32 h;
    s32 x;
    s32 lim;

    a = rand();
    b = rand();
    c = rand();
    a &= 1;
    a <<= 8;
    b &= 0x1F;
    b <<= 3;
    a += b;
    a += c & 0x1F;
    v.x = a;
    v.z = 0;
    v.y = 0;
    e = rand();
    f = rand();
    g = rand();
    h = rand();
    e &= 3;
    e <<= 10;
    f &= 0x1F;
    f <<= 5;
    e += f;
    g &= 3;
    g <<= 8;
    e += g;
    RotateSVectorY(e + (h & 0xFF), &v, &v);
    clamp_DCB4(&v.x, v.x, ((s16 *) D_sc03_007_801EB138)[0]);
    clamp_DCB4(&v.z, v.z, ((s16 *) D_sc03_007_801EB138)[1]);
    AF(o, s16, 6) += v.x;
    AF(o, s16, 0xA) += v.y;
    AF(o, s16, 0xE) += v.z;
    AF(o, s16, 0x16) = (rand() & 7) + 8;
}

void func_sc03_007_801846EC(s32 arg0) {
    D_sc03_007_801E9CE0[AF(arg0, s32, 0x34)] = 0;
    FreeProp(arg0);
}

void RewardInit(StageActor *o) {
    RECT r;
    s16 i;
    ModelObj *t;
    u16 n;

    if (GetVar(0x89) & 0xFF) {
        RejectSpawn(o);
        return;
    }
    for (i = 0; i < 0xD; i++) {
        if (!(GetFlag(i + 0x40) & 0xFF)) {
            RejectSpawn(o);
            return;
        }
    }
    if ((s32)o->model != 0) {
        return;
    }
    if (SetupActor(o, &D_sc03_007_8018C778) == 0) {
        return;
    }
    SetScript(o, &D_sc03_007_8018C588);
    o->model->flags |= 0x10;
    t = o->model;
    t->scale.vx = t->scale.vy = t->scale.vz = 0x3800;
    D_sc03_007_801EB140 = o->origin[0] << 16;
    D_sc03_007_801EB144 = AF(o, s16, 0x8A) << 16;
    D_sc03_007_801EB148 = AF(o, s16, 0x8C) << 16;
    o->ext0 = func_80143994(o, 0x4000);
    AF(o, s16, 0xF8) = 3;
    r.x = 0x2A8;
    r.y = 0x188;
    r.w = 0xC;
    r.h = 0x28;
    MoveImage(&r, 0x2B4, 0x188);
    r.x = 0x248;
    r.y = 0x1C0;
    MoveImage(&r, 0x2A8, 0x188);
    n = o->state + 1;
    o->pos[1].h.i -= 0x400;
    o->state = n;
}

void func_sc03_007_801848BC(u8 *o) {
    s16 i;
    s32 r;
    s32 n;
    s32 a;
    s32 b;

    n = AF(o, s32, 0x1C) - 1;
    AF(o, s32, 0x1C) = n;
    if (n == -1) {
        SetScript(o, &D_sc03_007_8018C610);
        i = 0;
        if (++AF(o, u16, 0x10A) & 3) {
            if (AF(o, s16, 0x104) == 0) {
                r = rand();
                a = AF(o, s16, 0x88) - 0x200;
                *(s32 *)&D_sc03_007_801EB14C = (a + (r & 0x7F) * 8) << 16;
                b = AF(o, s16, 0x8C) - 0x200;
                D_sc03_007_801EB154 = (b + ((u32)(r & 0x7F00) >> 5)) << 16;
            } else {
                func_sc03_007_80185948(o);
                AF(AF(o, u8 *, 0x20), s16, 0x12) += 0xC00;
            }
        } else {
            for (; i < 2; i++) {
                ((s32 *)&D_sc03_007_801EB14C)[i] = (&D_sc03_007_801EB140)[i];
            }
        }
        i = 8;
        if (AF(o, s16, 0x108) >= 0xD) {
            i = 2;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToward(o + 4, &D_sc03_007_801EB14C, AF(AF(o, u8 *, 0x20), s16, 0x12), i);
        func_sc03_007_801858D4(o, (s16)(-6 - AF(o, s16, 0x104)), 0x50);
        if (AF(o, s16, 0x104) != 0) {
            SpawnEffect(2, o, 0, 0, 0, 3, (AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) | 0x30009000);
        }
        AF(o, s16, 0x108) = 0;
        if ((s16)func_sc03_007_80185DD8() == 0) {
            AF(o, u16, 0x5C) |= 0x200;
        }
        AF(o, s16, 2)++;
    } else if (AF(o, s16, 0x102) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, AF(o, s16, 0x102));
    }
}

void func_sc03_007_80184AFC(s32 arg0) {
    u8 unused[0x10];
    s32 t;
    s32 r;
    s32 d;
    s32 s1;
    s16 s2;
    s16 h;
    s16 h2;
    s16 k;
    s32 u;

    s2 = 0;
    if ((AF(arg0, u16, 0x5C) & 0x200) && (s16) func_sc03_007_80185DD8() != 0) {
        AF(arg0, u16, 0x5C) &= 0xFDFF;
    }
    func_sc03_007_80185A24(arg0);
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t != 0) {
        if (!(t & 3) && DistSq(arg0 + 4, &D_sc03_007_801EB14C) < 0x900) {
            AF(arg0, s32, 0x1C) = 1;
        }
        if (AF(arg0, s16, 0x106) == 0) {
            r = TurnStepToward(arg0 + 4, &D_sc03_007_801EB14C, AF(AF(arg0, s32, 0x20), s16, 0x12), 8);
            AF(AF(arg0, s32, 0x20), s16, 0x12) += r;
            func_sc03_007_801858D4(arg0, (s16) (-6 - AF(arg0, s16, 0x104)), 0);
        }
        if (AF(arg0, s16, 0x104) != 0) {
            if (AF(arg0, s32, 0x90) == (s32) &D_sc03_007_8018C610) {
                u32 c = AF(arg0, u32, 0x94);
                if (c < 11) {
                    AF(arg0, u32, 0x94) = c + 1;
                }
            }
            if (!(AF(arg0, s32, 0x1C) & 3)) {
                s2 = 1;
            }
        }
    } else {
        StopMotion(arg0);
        SetScript(arg0, &D_sc03_007_8018C588);
        AF(arg0, s32, 0x1C) = 0x14 - AF(arg0, s16, 0x104) * 2;
        if (DistSqToPlayer(arg0) <= 0x23FFF) {
            AF(arg0, s16, 0x102) = 0xA - AF(arg0, u16, 0x104);
        } else {
            AF(arg0, s16, 0x102) = 0;
        }
        h = AF(arg0, s16, 0x104);
        if (h != 0) {
            h2 = h - 4;
            AF(arg0, s16, 0x104) = h2;
            if (h2 < 0) {
                AF(arg0, s16, 0x104) = 0;
            }
        }
        AF(arg0, s16, 2) = 3;
    }
    k = func_sc03_007_80185B48(arg0);
    if (k != 0) {
        if (k < 0) {
            return;
        }
        if (AF(arg0, s16, 0xFE) == 0) {
            AF(AF(arg0, s32, 0x20), s16, 0x12) = -AF(arg0, u16, 0x62);
            func_sc03_007_801858D4(arg0, -0x1E, 0);
            s2 = 1;
            func_sc03_007_80185948(arg0);
            AF(arg0, s16, 0x104) = 10;
        } else {
            AF(arg0, u16, 0x5C) &= 0xFDFF;
            StopMotion(arg0);
            SetScript(arg0, &D_sc03_007_8018C750);
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, s16, 2) = 10;
            return;
        }
    } else {
        d = DistSqToPlayer(arg0);
        if (d <= 0xFFFF) {
            s1 = 0;
            if (d >= 0x6400) {
                s1 = (TargetInFront(arg0, 0x500) != 0) * 4;
            } else if (d >= 0x2400) {
                if (TargetInFront(arg0, 0x680) != 0) {
                    s1 = 7;
                }
            } else {
                s1 = 10;
            }
            if (s1 != 0) {
                func_sc03_007_80185948(arg0);
                r = HeadingToTarget(arg0);
                u = -0xE - s1;
                if (AF(arg0, s16, 0x104) == 0) {
                    s2 = 1;
                    AF(AF(arg0, s32, 0x20), s16, 0x12) = r - 0x800;
                }
                AF(arg0, s16, 0x104) = s1;
                func_sc03_007_801858D4(arg0, u, 0);
            }
        }
    }
    if (s2 != 0) {
        SpawnEffect(2, arg0, 0, 0, 0, 3, ((AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800) & 0xFFF) | 0x30009000);
    }
}

s32 func_sc03_007_80184E8C(u8 *o) {
    s16 r;
    u8 unused[0x20];

    if ((AF(o, u16, 0x5C) & 0x200) && (s16)func_sc03_007_80185DD8() != 0) {
        AF(o, u16, 0x5C) &= 0xFDFF;
    }
    r = func_sc03_007_80185B48(o);
    if (r != 0) {
        if (r >= 0) {
            AF(o, s16, 0xF4) = 1;
            AF(o, u16, 0x5C) &= 0xFDFF;
            SetScript(o, &D_sc03_007_8018C750);
            AF(o, s32, 0x1C) = 0x10;
            AF(o, s16, 2) = 0xA;
        }
        return;
    }
    if (AF(o, s16, 0x76) == 0) {
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 0x5E) = 0;
        SetScript(o, &D_sc03_007_8018C700);
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 0xF8) = 0x14;
        AF(o, s16, 2) = 0x11;
        return;
    }
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) < 0x1E) {
            if (AF(o, s16, 0xFE) >= 3 && TargetInSight(o, 0x400, 0x10000) == 1) {
            L:
                AF(o, s16, 0xF4) = 0;
                AF(o, u16, 0x5C) &= 0xFDFF;
                SetScript(o, &D_sc03_007_8018C700);
                AF(o, s32, 0x1C) = 8;
                AF(o, s16, 2) = 0xB;
                return;
            }
            if (TargetInSight(o, 0x2C0, 0x31000) == 1) {
                if ((s16)func_sc03_007_80185D3C(o, 1) != 0) {
                    goto L;
                }
                AF(o, s32, 0x1C) = 8;
                AF(o, s16, 0xF4) = 0;
                AF(o, s16, 2) = 0xE;
                AF(o, u16, 0x5C) &= 0xFDFF;
                return;
            }
            AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 0x10);
        }
        return --AF(o, s32, 0x1C);
    }
    if ((s16)func_sc03_007_80185D3C(o, 1) == 0) {
        SetForwardVelocity(o, -0x30000);
        MoveOnGround(o);
    }
    StopMotion(o);
    AF(o, s16, 0xF4) = 0;
    AF(o, s32, 0x1C) = 0x1D;
}

void func_sc03_007_801850B4(u8 *o) {
    u8 *p;
    s16 t;
    s16 r;
    s16 v;
    s32 one;
    u8 unused[16];

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        t = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = t - 0x480;
        r = TargetInSight(o, 0x100, 0x9000);
        if (r == 1) {
            ActorTouchesPlayer(o, 0xC0, 0x30);
        }
        one = 1;
        if (r != one) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x800;
            if (TargetInSight(o, 0x100, 0x9000) == one) {
                ActorTouchesPlayer(o, 0xC0, 0x30);
            }
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) = t;
        if (AF(o, s32, 0x1C) >= 5) {
            p = AF(o, u8 *, 0x20);
            v = AF(p, u16, 0x1C) + 0x200;
            AF(p, s16, 0x1C) = v;
            AF(p, s16, 0x18) = v;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) -= 0x100;
        } else {
            p = AF(o, u8 *, 0x20);
            v = AF(p, u16, 0x1C) - 0x600;
            AF(p, s16, 0x1C) = v;
            AF(p, s16, 0x18) = v;
            AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x300;
        }
        AF(o, s32, 0x1C) -= 1;
    } else {
        SetScript(o, &D_sc03_007_8018C588);
        AF(o, s32, 0x1C) = 0;
        func_sc03_007_80185E30(o);
    }
}

void func_sc03_007_80185230(s32 arg0) {
    s32 x;
    s32 z;
    s32 o;
    s16 i;
    s32 ang;

    if (AF(arg0, u16, 2) == 0xC) {
        x = g_PlayerPosX;
        z = D_80126B64;
    } else {
        x = 0;
        z = 0xFB000000;
    }
    func_sc03_007_80185B48(arg0);
    MoveObject(arg0);
    if (AF(arg0, s16, 0x16) > 0) {
        func_sc03_007_80185E68(arg0);
    }
    if (AF(arg0, s16, 0xA) < -2) {
        if (AF(arg0, s32, 0x1C) == 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 3, 0x30000000);
            o = AF(arg0, s32, 0x20);
            if (AF(o, s16, 0x1A) != 0x3800) {
                AF(o, s16, 0x1A) -= 0x400;
            }
            if (AF(arg0, s16, 0x16) > 0) {
                AF(arg0, s32, 0x1C) = 1;
                SetScript(arg0, &D_sc03_007_8018C728);
            }
            AF(arg0, s32, 0x10) = (x - AF(arg0, s32, 4)) >> 5;
            AF(arg0, s32, 0x18) = (z - AF(arg0, s32, 0xC)) >> 5;
        } else {
            if (AF(arg0, s32, 0x1C) < 0xD) {
                AF(AF(arg0, s32, 0x20), s16, 0x12) = HeadingToTarget(arg0);
                AF(arg0, s32, 0x10) = (x - AF(arg0, s32, 4)) / 11;
                AF(arg0, s32, 0x18) = (z - AF(arg0, s32, 0xC)) / 11;
            }
            AF(arg0, s32, 0x1C) += 1;
        }
    } else {
        PlaySoundId(0xB2D, 0);
        StartCameraShake(&D_sc03_007_8018C7DC);
        ang = AF(AF(arg0, s32, 0x20), u16, 0x12);
        for (i = 0; i < 8; i++) {
            SpawnEffect(2, arg0, 0, 0, 0, 3, (ang & 0xFFF) | 0x3000A000);
            ang += 0x200;
        }
        AF(arg0, s16, 0xA) = -2;
        StopMotion(arg0);
        SetScript(arg0, &D_sc03_007_8018C700);
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2) += 1;
    }
    func_sc03_007_80185E3C(arg0);
}

void func_sc03_007_801854A4(u8 *o) {
    u8 *p;
    u8 *q;
    u16 s;
    s16 v;

    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0xA0;
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x140;
        }
        p = AF(o, u8 *, 0x20);
        v = ((0x3800 - AF(p, s16, 0x1A)) >> 1) + 0x3800;
        AF(p, s16, 0x1C) = v;
        AF(p, s16, 0x18) = v;
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        AF(o, s32, 0x1C) -= 1;
    } else {
        q = AF(o, u8 *, 0x20);
        s = AF(q, u16, 0x10);
        AF(q, s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
        UpdateModelZYX(o);
        SetForwardVelocity(o, -0x1E0000);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = s;
        UpdateModelZYX(o);
        SetScript(o, &D_sc03_007_8018C700);
        func_sc03_007_80185B20(o);
        SpawnEffect(2, o, 0, 0, 0, 3, ((AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800) & 0xFFF) | 0x30009000);
        AF(o, s32, 0x1C) = 0xC;
        AF(o, u16, 2) += 1;
    }
}

void func_sc03_007_80185620(u8 *o) {
    s16 r;
    func_sc03_007_80185B48(o);
    r = func_sc03_007_80185B20(o);
    if (GroundDistSqToPlayer(o) < 0x4000) {
        g_PlayerHitKind = 0x4004;
        g_PlayerHitFlags |= 1;
        g_PlayerHitFacing = HeadingToTarget(o);
        g_PlayerHitDamage = 0x30;
    }
    if (r != 0 || --AF(o, s32, 0x1C) == -1 || AF(o, u16, 0x5E) != 0) {
        SetScript(o, &D_sc03_007_8018C588);
        AF(o, s32, 0x1C) = 4;
        AF(o, s16, 2)++;
    }
    SpawnEffect(2, o, 0, 0, 0, 3, ((AF(AF(o, u8 *, 0x20), u16, 0x12) + (s16)((rand() & 0xFF) + 0x780)) & 0xFFF) | 0x30009000);
}

void func_sc03_007_8018574C(StageActor *o) {
    SV8 a;
    WMtx m;
    ModelObj *p;
    s32 r;
    u8 *q;
    s16 *t;

    p = o->model;
    p->scale.vx = p->scale.vy = p->scale.vz = (u16)p->scale.vz - 0x100;
    r = rand();
    t = &D_sc03_007_8018C7F0[r & 0x1E];
    q = SpawnActorArg(t[0], t[1], o);
    if (q != 0) {
        AF(q, s16, 0xA) = AF(q, u16, 0xA) - 0x10 - o->timer * 4;
        a.x = (r & 0xFF) - 0x3FC;
        a.y = (s16)r >> 3;
        a.z = 0;
        RotMatrixYXZ(&a, &m);
        a.y = 0;
        a.x = 0;
        a.z = -0x1A;
        ApplyMatrixSV(&m, &a, &a);
        AF(q, s16, 0x12) = a.x;
        AF(q, s16, 0x16) = a.y;
        AF(q, s16, 0x1A) = a.z;
    }
    if (--o->timer == 0) {
        o->timer = 0x1E;
        func_800D0C48(1);
        o->state++;
    }
}

void func_sc03_007_80185898(StageActor *arg0) {
    D_sc03_007_8018C830[arg0->state]();
}

void func_sc03_007_801858D4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_007_80185948(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc03_007_801EB140) >> 7) & 0x18;
    i = D_sc03_007_8018C7AC[a | ((HeadingTo(arg0 + 4, &D_sc03_007_801EB140) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_007_8018C7CC[i * 2] - 0x100;
    *(s32 *)&D_sc03_007_801EB14C = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_007_8018C7CE[i * 2] - 0x100;
    D_sc03_007_801EB154 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

s16 func_sc03_007_80185A24(u8 *o) {
    s32 r = 0;
    s16 f;

    f = MoveOnGround(o);
    if ((f & 0x6000) != 0x2000) {
        RestorePrevPos(o);
        if (AF(o, s32, 0x1C) > 8) {
            AF(o, s32, 0x1C) -= 8;
        }
    }
    if ((f & 0x8000) || (f & 0x6000) != 0x2000) {
        if (AF(o, s16, 0x106) == 0) {
            AF(o, s16, 0x106) = f < 0 ? -0x100 : 0x100;
        }
        if (AF(o, s32, 0x1C) > 4) {
            AF(o, s32, 0x1C) -= 4;
        }
        AF(o, s16, 0x108)++;
        r = 1;
    } else {
        AF(o, s16, 0x106) = 0;
    }
    return r | func_sc03_007_80185D3C(o, 0);
}

s32 func_sc03_007_80185B20(Mover *o) {
    return (s16) (MoveOnGround(o) & 0x8000U);
}

s32 func_sc03_007_80185B48(u8 *o) {
    RECT r;
    s32 ret;
    s32 n;
    ret = 0;
    if (AF(o, u16, 0x5E) != 0) {
        n = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
        if (n <= 0) n = 1;
        if (AF(o, u16, 0x5E) == 10) {
            AF(o, s16, 0xF4) = 1;
            AF(o, s16, 0x5E) = 0;
            AF(o, s32, 0x1C) = 0x14;
            AF(o, u16, 0x5C) &= 0xFDFF;
            StopMotion(o);
            SetScript(o, &D_sc03_007_8018C678);
            AF(o, s16, 2) = 7;
            return -1;
        }
        if (n != 0) {
        if (AF(o, s16, 0xFA) == 0) {
            ShowDamage(o, n);
            AF(o, s16, 0x76) -= n;
            if (AF(o, s16, 0x76) < 0) AF(o, s16, 0x76) = 0;
            AF(o, s16, 0xFA) = 8;
            switch (AF(o, s16, 0xFE)) {
            case 0:
                if (AF(o, s16, 0x76) < 2000) {
                    AF(o, s16, 0xFE)++;
                    r.x = 0x2B4;
                    r.y = 0x188;
                    r.w = 0xC;
                    r.h = 0x28;
                    MoveImage(&r, 0x2A8, 0x188);
                }
                break;
            case 1:
                if (AF(o, s16, 0x76) < 1600) {
                    AF(o, s16, 0xFE)++;
                    AF(o, s16, 0xF8) = 5;
                    return -1;
                }
                break;
            case 2:
                if (AF(o, s16, 0x76) < 1000) {
                    AF(o, s16, 0xFE)++;
                }
                break;
            }
            ret = 1;
        } else {
            if (--AF(o, s16, 0xFA) == 0) {
                AF(o, s16, 0x60) = 0;
                AF(o, s16, 0x5E) = 0;
            }
        }
        }
    }
    return ret;
}

s32 func_sc03_007_80185D3C(u8 *o, s32 flag0) {
    s16 flag = flag0;
    s32 r = 0;

    if (AF(o, s16, 6) < -0x17D) {
        if (flag == 0) {
            AF(o, s16, 6) = -0x17D;
        }
        r = 1;
    } else if (AF(o, s16, 6) > 0x17D) {
        if (flag == 0) {
            AF(o, s16, 6) = 0x17D;
        }
        r = 1;
    }
    if (AF(o, s16, 0xE) < -0x67D) {
        if (flag == 0) {
            AF(o, s16, 0xE) = -0x67D;
        }
        r = 1;
    } else if (AF(o, s16, 0xE) > -0x383) {
        if (flag == 0) {
            AF(o, s16, 0xE) = -0x383;
        }
        r = 1;
    }
    return r;
}

s32 func_sc03_007_80185DD8(void) {
    s32 r = 0;
    if (g_PlayerX < -0x17D) {
        r = 1;
    } else if (g_PlayerX >= 0x17E) {
        r = 1;
    }
    if (D_80126B66 < -0x67D) {
        r = 1;
    } else if (D_80126B66 >= -0x382) {
        r = 1;
    }
    return r;
}

s32 func_sc03_007_80185E30(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xF8);
    AF(arg0, u16, 2) = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_007_80185E3C(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s16 temp_v0;
    void *temp_a0;

    temp_a0 = AF(AF(arg0, void *, 0xCC), void *, 0xCC);
    temp_v0 = 0x4000 - ((-2 - AF(arg0, u16, 0xA)) * 0x10);
    AF(temp_a0, s16, 0x1A) = temp_v0;
    AF(temp_a0, s16, 0x18) = temp_v0;
}

void func_sc03_007_80185E68(u8 *o) {
    if ((u16)(D_80126B62 - AF(o, u16, 0xA) + 0x2F) < 0x6F && GroundDistSqToPlayer() < 0x3840) {
        g_PlayerHitKind = 0x4002;
        g_PlayerHitFlags |= 1;
        g_PlayerHitFacing = AF((u8 *)g_PlayerModel, u16, 0x12);
        g_PlayerHitDamage = 0x40;
    }
}

void func_sc03_007_80185EF8(StageActor *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->pos[0].h.i - g_PlayerX;
    temp_v0_2 = arg0->pos[2].h.i - D_80126B66;
    if (((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2)) <= 0xFFFF) {
        arg0->timer = 0x19;
        func_800D0C48(1, arg1);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_007_80185F84(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == -1) {
        arg0->accel[1] = 0x38000;
        arg0->timer = 0x10;
        RequestBgmPack(0x9C);
        arg0->state = 0xC;
    }
}

void func_sc03_007_80185FE0(u8 *o) {
    if ((s16)func_sc03_007_80185DD8() == 0) {
        AF(o, u16, 0x5C) |= 0x200;
    }
    StopMotion(o);
    SetScript(o, &D_sc03_007_8018C588);
    if (AF(o, u16, 0x5E) == 0 && AF(o, s16, 0xF4) == 0) {
        AF(o, s32, 0x1C) = 0x3B;
    } else {
        AF(o, s32, 0x1C) = 0x1D;
    }
    AF(o, u16, 2) += 1;
}

void func_sc03_007_80186074(u8 *o) {
    V3 v;
    u16 k;

    k = AF(o, u16, 0x5E);
    if ((k == 9) | (k == 0x11)) {
        PlaySoundId(0x829, 0);
        AF(o, s16, 0x5E) = 0;
        v.y = -0x40000;
        v.x = 0;
        v.z = 0x30000;
        SetLocalVelocity(o, &v);
        AF(o, s32, 0x48) = 0x12000;
        AF(o, s16, 0x108) = 0;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 2) = 8;
    }
    func_sc03_007_80185D3C(o, 0);
    func_sc03_007_80185E3C(o);
}

void func_sc03_007_8018611C(u8 *o) {
    V3 v;
    s32 r;
    s32 t;

    if (MoveCollide(o) & 0x2000) {
        SpawnEffect(2, o, 0, 0, 0, 3, 0x30000000);
        r = AF(o, s32, 0x1C) + 1;
        AF(o, s32, 0x1C) = r;
        if (r == 1) {
            v.x = 0;
            v.y = -0x30000;
            v.z = 0x20000;
            SetLocalVelocity(o, &v);
            return;
        }
        StopMotion(o);
        SetScript(o, &D_sc03_007_8018C678);
        AF(o, s32, 0x1C) = 0x50;
        AF(o, s16, 0x98) = 0;
        AF(o, s16, 0xF6) = AF(o, s16, 0x76) - 8;
        AF(o, s16, 2)++;
    }
    func_sc03_007_80185D3C(o, 0);
    func_sc03_007_80185E3C(o);
}

void func_sc03_007_80186200(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    func_sc03_007_80185B48(arg0);
    if (AF(arg0, s32, 0x1C) != 0) {
        if (AF(arg0, s16, 0x98) == 0) {
            if (AF(arg0, s16, 0x76) < AF(arg0, s16, 0xF6)) {
                AF(arg0, s32, 0x1C) = 0x14;
            }
            if (AF(arg0, s32, 0x1C) == 0x14) {
                AF(arg0, s16, 0x98) = 1;
            }
        }
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_007_8018C588);
    AF(arg0, s32, 0x1C) = (s32) (0x14 - (AF(arg0, s16, 0x104) * 2));
    if (DistSqToPlayer(arg0) <= 0xFFFF) {
        AF(arg0, s16, 0x102) = (s16) (0xA - (u16) AF(arg0, s16, 0x104));
    } else {
        AF(arg0, s16, 0x102) = 0;
    }
    temp_v0 = AF(arg0, s16, 0x104);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 4;
        AF(arg0, s16, 0x104) = temp_v0_2;
        if ((s16) (temp_v0_2) < 0) {
            AF(arg0, s16, 0x104) = 0;
        }
    }
    func_sc03_007_80185E30(arg0);
}

void func_sc03_007_80186310(u8 *o) {
    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0xC00;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = ((0x3800 - AF(AF(o, u8 *, 0x20), s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        AF(o, s32, 0x14) = 0xFFB80000;
        AF(o, s32, 0x48) = 0x38000;
        SpawnEffect(2, o, 0, 0, 0, 3, 0x30000000);
        MoveObject(o);
        AF(o, s16, 2)++;
    }
}

void func_sc03_007_80186408(StageActor *o) {
    ModelObj *p;
    s16 v;

    func_sc03_007_80185B48(o);
    if (o->timer != 0) {
        func_sc03_007_80185E68(o);
        if (o->timer >= 5) {
            o->model->scale.vy -= 0x800;
        } else {
            o->model->scale.vy += 0x800;
        }
        p = o->model;
        p->scale.vx = p->scale.vz = ((0x3800 - p->scale.vy) >> 1) + 0x3800;
        o->timer--;
    } else {
        SetScript((s32) o, (s32) &D_sc03_007_8018C588);
        func_sc03_007_80185E30((s32) o);
    }
}

void func_sc03_007_801864D8(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    func_sc03_007_80185B48(arg0);
    func_sc03_007_80185B20(arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0xA0);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    SpawnEffect(2, arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ ((AF(AF(arg0, void *, 0x20), u16, 0x12) & 0xFFF) | 0x30009000));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        StopMotion(arg0);
        func_sc03_007_80185E30(arg0);
    }
}

void func_sc03_007_80186584(u8 *o) {
    func_sc03_007_80185B48(o);
    if (AF(o, s32, 0x1C) != 0) {
        if (AF(o, s32, 0x1C) >= 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x800;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0xC00;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = ((0x3800 - AF(AF(o, u8 *, 0x20), s16, 0x1A)) >> 1) + 0x3800;
        AF(o, s32, 0x1C)--;
    } else {
        AF(o, s32, 0x14) = 0xFFB80000;
        AF(o, s32, 0x48) = 0x38000;
        SpawnEffect(2, o, 0, 0, 0, 3, 0x30000000);
        MoveObject(o);
        AF(o, s16, 2)++;
    }
}

void func_sc03_007_8018667C(StageActor *arg0) {
    func_sc03_007_80185230(arg0);
}

void func_sc03_007_8018669C(StageActor *o) {
    ModelObj *p;
    s16 v;

    func_sc03_007_80185B48(o);
    if (o->timer != 0) {
        func_sc03_007_80185E68(o);
        if (o->timer >= 5) {
            o->model->scale.vy -= 0x800;
        } else {
            o->model->scale.vy += 0x800;
        }
        p = o->model;
        p->scale.vx = p->scale.vz = ((0x3800 - p->scale.vy) >> 1) + 0x3800;
        o->timer--;
    } else {
        SetScript((s32) o, (s32) &D_sc03_007_8018C588);
        func_sc03_007_80185E30((s32) o);
    }
}

void func_sc03_007_8018676C(StageActor *o) {
    RECT r;

    o->model->rot.vy += TurnStep(o->model->rot.vy, 0, 4);
    if (o->timer++ > 0x14) {
        r.x = 0x248;
        r.y = 0x1C0;
        r.w = 0xC;
        r.h = 0x28;
        MoveImage(&r, 0x2A8, 0x188);
        o->timer = 0x28;
        o->state += 1;
    }
}

void func_sc03_007_80186818(u8 *o) {
    if (AF(o, s32, 0x1C) < 0xF) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xA00, 4);
    }
    if (--AF(o, s32, 0x1C) == 0) {
        SetForwardVelocity(o, -0xC0000);
        SetScript(o, &D_sc03_007_8018C610);
        AF(o, s32, 0x1C) = 0x2D;
        func_800D0CE0();
        AF(o, u16, 2) += 1;
    }
}

void func_sc03_007_801868C8(u8 *arg0) {
    s32 temp_v0;
    u32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        MoveObject((s32) arg0);
        temp_v1 = AF(arg0, u32, 0x94);
        if (temp_v1 < 0xBU) {
            AF(arg0, u32, 0x94) = (u32) (temp_v1 + 1);
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            SpawnEffect(2, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ 0);
        }
    } else {
        GiveItem(0x27);
        if (AF(arg0, s32, 0x78) != 0) {
            GainStat0FromActor((s32) arg0);
        }
        FreeActor((s32) arg0);
    }
}

void func_sc03_007_80186984(StageActor *arg0) {
    D_sc03_007_801E4D70[arg0->state]();
}

void func_sc03_007_801869C0(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc03_007_801E4D50[AF(arg0, s16, 0xFC)];
    if (D_sc03_007_801E4D50[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc03_007_801E4D50[0];
    }
    AF(arg0, s16, 0xFC)++;
    r = ((rand() & 3) << 10) + 0x1800;
    s = (r - 0x1000) << 5;
    o = SpawnProp(4);
    if (o != 0) {
        AF(o, s16, 6) = arg1;
        AF(o, u16, 0xA) = val;
        AF(o, s16, 0xE) = 0;
        AF(o, s32, 0x10) = s;
        AF(o, s16, 0x2C) = r;
    }
}

void func_sc03_007_80186A84(u8 *arg0) {
    D_sc03_007_801E4D84[AF(arg0, u16, 2)]();
}

void func_sc03_007_80186AC0(StageActor *arg0) {
    s16 n;

    arg0->unkFC = 0;
    arg0->timer = 1;
    n = (u16)arg0->param & 7;
    arg0->workFE = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc03_007_801869C0(arg0, -0x80);
        func_sc03_007_801869C0(arg0, -0x30);
        func_sc03_007_801869C0(arg0, 0x20);
        func_sc03_007_801869C0(arg0, 0x70);
        func_sc03_007_801869C0(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc03_007_801869C0(arg0, -0x58);
        func_sc03_007_801869C0(arg0, -8);
        func_sc03_007_801869C0(arg0, 0x48);
        func_sc03_007_801869C0(arg0, 0x98);
        func_sc03_007_801869C0(arg0, 0xE8);
    }
    NextState(arg0);
}

void func_sc03_007_80186BA8(s32 arg0, s32 arg1) {
    if (TickTimer(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFE);
        func_sc03_007_801869C0(arg0, 0x110);
    }
}

void func_sc03_007_80186BE8(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind1(temp_s0, (s32) &D_sc03_007_801E4D78, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_007_80186C70(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        FreeProp((s32) arg0);
    }
}

void func_sc03_007_80186CB8(StageActor *arg0) {
    D_sc03_007_801E4DD8[arg0->state]();
}

void func_sc03_007_80186CF4(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_007_80187214() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc03_007_801E4D8C, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc03_007_801E4D98);
    func_sc03_007_8018726C((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
    AF(temp_v0, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
    AF(temp_v0, u16, 0xC) = (u16) (u16)arg0->pos[2].h.i;
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = arg0->state;
    x++;
    temp_a2 = arg0->parent->id;
    arg0->timer = 0x180;
    arg0->state = x;
    arg0->work10A = temp_a2;
    PlaySoundId(0xAA0, 0, temp_a2);
}

void func_sc03_007_80186DF0(u8 *arg0) {
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
            o = SpawnPropFrom(arg0, 0x22);
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
            StepSpriteAnim(p, arg0 + 0xDC);
            func_sc03_007_8018726C(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (TickTimer(arg0) == 0) {
            return;
        }
    }
    func_sc03_007_801872E8(arg0);
}

void func_sc03_007_80187080(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc03_007_8018726C(arg0);
        AF(p, s16, 8) = arg0->pos[0].h.i;
        AF(p, s16, 0xA) = arg0->pos[1].h.i;
        AF(p, s16, 0xC) = arg0->pos[2].h.i;
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = SpawnPropFrom(arg0, 0x22);
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
    func_sc03_007_801872E8(arg0);
}

s32 func_sc03_007_80187214(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_007_8018726C(u8 *o) {
    SMtx m;
    SV8 c;
    StageActor *p;

    p = AF(o, u8 *, 0x64);
    if ((s16)p->id == AF(o, s16, 0x10A)) {
        GetPartWorldMatrix(p, AF(o, s16, 0xFC), &m);
        LocalToWorld(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc03_007_801872E8(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc03_007_8018732C(StageActor *o, s16 *v, s16 arg2) {
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
    SpawnActorFromDef(&d, o);
}
