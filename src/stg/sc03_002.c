#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_002_8017BE9C(void) {
}

void func_sc03_002_8017BEA4(void) {
}

void func_sc03_002_8017BEAC(void) {
}

void func_sc03_002_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_002_80188EF4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc03_002_80188F90[])();
extern void (*D_sc03_002_80188F98[])();
extern void (*D_sc03_002_80188FA0[])();
extern u8 D_sc03_002_80188EFC;
extern void InitSpriteKind2();
extern void InitSpriteKind3();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();
extern u8 D_sc03_002_80185828;
extern u8 D_sc03_002_80188F78;
extern u8 D_sc03_002_80188F80;
extern void SyncModelPos();
extern void (*D_sc03_002_8018927C[])();
extern s32 IsEventDone();
extern void SpawnEffect();
extern u8 D_sc03_002_80189030;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc03_002_8018926C[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc03_002_8018924C;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc03_002_801892B0[])();
extern void (*D_sc03_002_80189308[])();
extern void (*D_sc03_002_80189314[])();
extern void (*D_sc03_002_8018932C[])();
extern void (*D_sc03_002_801893E8[])();
extern void (*D_sc03_002_80189400[])();
extern void (*D_sc03_002_80189438[])();
extern u8 D_sc03_002_801CB920;
extern void func_sc03_002_8017F914();
extern void (*D_sc03_002_8018962C[])();
extern void StartPlayerAction();
void func_sc03_002_80180144(Player *arg0);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_002_80180748(void);
extern s32 g_PlayerFlags;
extern s16 D_801270C0;
void func_sc03_002_801801CC(Player *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void PlaySoundId();
extern void ClearTimeChime();
extern s32 GetVar();
extern void func_800D0C48();
extern void (*D_sc03_002_8018963C[])();
extern void (*D_sc03_002_80189644[])();
extern void (*D_sc03_002_8018964C[])();
extern void (*D_sc03_002_80189658[])();
extern s32 D_80127050;
extern void (*D_sc03_002_8018978C[])();
extern void func_80175414();
extern void EndPlayerActionOf();
extern void ResumeHopAbility();
extern void (*D_sc03_002_80189794[])();
extern void (*D_sc03_002_80189840[])();
extern u8 D_sc03_002_8018979C;
extern void StartPlayerActionScript();
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
extern u8 g_CameraVarA0;
extern void SetCameraUpdate();
extern void func_sc03_002_801809C8();
extern void SnapCamera();
extern void (*D_sc03_002_80189848[])();
extern void (*D_sc03_002_8018990C[])();
extern s32 func_sc03_002_80183158();
extern void func_sc03_002_80180DF4();
extern u8 D_sc03_002_80189928;
extern void func_sc03_002_80183264();
s32 func_sc03_002_801814F0(StageActor *arg0);
extern void (*D_sc03_002_801899F4[])();
extern void (*D_sc03_002_80189BEC[])();
extern void (*D_sc03_002_80189CF4[])();
extern void (*D_sc03_002_80189D04[])();
extern void (*D_sc03_002_80189D24[])();
extern void (*D_sc03_002_80189DA4[])();
s32 func_sc03_002_80182E30(StageActor *arg0);
extern s32 func_sc03_002_80182F0C();
extern void func_sc03_002_80183070();
extern u8 g_ClockHour;
extern u16 g_Day;
extern s32 D_800BA2BA[];
extern void (*D_sc03_002_801A84A4[])();
extern void func_sc03_002_8018323C();
extern u8 D_sc03_002_801A84AC;
extern void PlaceObject();
extern void HideModel();
extern s32 GetProgress();
extern void SetProgress();
extern s32 func_sc03_002_80183550();
extern void MoveObject();
extern s32 GetPlayerAction();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern s32 IsPlayerAsleep();
extern void SetForwardVelocity();
extern s32 SnapToGround();
extern s32 GroundDistSqTo();
extern void (*D_sc03_002_801A84C4[])();
extern void ZeroFill();
extern s32 D_sc03_002_801CB9C4;
extern u8 D_sc03_002_801CBAB0;
extern void InitModel();
extern void SetModelCullBox();
extern u8 D_sc03_002_801A84BC;
extern u8 D_sc03_002_801B1090;
extern void func_sc03_002_80183EB0();
extern void func_sc03_002_80183E48();
extern void (*D_sc03_002_801A879C[])();
extern void func_sc03_002_80183F24();
extern void func_sc03_002_80183F84();
extern void MapPartsTmd();
extern s16 D_sc03_002_801A850C[];
extern u8 D_sc03_002_801A84D0[];
extern u8 D_sc03_002_801A84CC[];
extern S12 D_sc03_002_801A84F4;
extern u8 D_sc03_002_801A84E4;
extern u8 D_sc03_002_801A8500;
extern void * func_sc03_002_80184218();
extern s32 func_sc03_002_80184498();
extern s32 func_sc03_002_80183718();
extern void PlaySoundAtActor();
extern s32 TickTimer();
extern s32 FindActorByKindArg();
extern void func_sc03_002_80184500();
extern void func_sc03_002_80184564();
extern void (*D_sc03_002_801A87C0[])();
extern u8 D_sc03_002_801A87B0;
extern s32 func_sc03_002_80184854();
s32 func_sc03_002_80184808(s32 arg0);
extern void (*D_sc03_002_801BDC58[])();
extern void (*D_sc03_002_801BDC6C[])();
extern u8 D_sc03_002_801BDC60;
extern void InitSpriteKind1();
extern void FreeProp();
extern void (*D_sc03_002_801C2E5C[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_002_801C2D70;
extern s32 * func_sc03_002_80184F10();
extern void RunScript();
extern s32 D_sc03_002_801C2E38[];
extern void (*D_sc03_002_801C8C74[])();
extern u8 CallActionHandler;
extern void ResetScriptVM();
extern s32 func_sc03_002_80184F6C();
extern void func_800D0F4C();
extern s32 D_sc03_002_801CB9C8;
s32 func_sc03_002_80185000(Mover *arg0);

extern s32 func_sc03_002_80182D68();
extern u8 D_sc03_002_801A832C;

extern s32 D_sc03_002_801CBAC4;
extern void func_800D06CC();
extern void UpdateClockTint();
extern void func_800D06E8();
extern void NextState();
extern u8 D_800D387C;
extern void MoveProp();
extern u8 D_sc03_002_801893DC;
extern u8 D_sc03_002_80189440;
extern u8 D_sc03_002_80189540;
extern u8 D_sc03_002_801BFCB4;
extern s32 * func_sc03_002_8017FCD0();
extern s32 GetFlag();
extern u8 D_sc03_002_80189550;
extern u8 D_sc03_002_8018959C;
extern u8 D_sc03_002_80189614;
extern void SetVar();
extern s32 D_8012704C;
extern void (*D_sc03_002_801897EC[])();
extern void PlaceMarker19C();
extern u8 D_sc03_002_80189760;
extern void SetPlayerMotion();
extern void SetObjPush();
extern void BumpSub2Copy();
extern void AddPushFacing();
extern void MoveObjByVel();
extern void SetVelFromPushKeepAxes();
extern void func_sc03_002_8018061C();
extern u8 D_sc03_002_80189830;
extern void PlaceObjAt();
extern void NextPlayerActionHandler();
extern s32 func_800D0CE0();
extern void func_sc03_002_80180AC0();
extern void func_sc03_002_80180C00();
extern u8 D_sc03_002_80189850;
extern u8 D_sc03_002_80189884;
extern u8 D_sc03_002_801BD8B0;
extern u8 D_sc03_002_801BDC00;
extern void ShowModel();
extern s32 func_sc03_002_80183480();
extern u8 D_sc03_002_80189860;
extern u8 D_sc03_002_80189874;
extern u8 D_sc03_002_801BD368;
extern void * func_sc03_002_8018118C();
extern s32 func_sc03_002_80180E90();
extern u8 D_sc03_002_801AB098;
extern u8 D_sc03_002_8018994C;
extern s32 func_80128C98();
extern void func_sc03_002_801CBB54();
extern void func_sc03_002_801CBBDC();
extern u8 D_sc03_002_801899A4;
extern u8 D_sc03_002_801AA660;
extern s32 func_sc03_002_8018317C();
extern void func_sc03_002_80181548();
extern s32 FindActorByKind();
extern u8 D_sc03_002_80189A6C;
extern u8 D_sc03_002_80189A40;
extern u8 D_sc03_002_80189A48;
extern void * func_sc03_002_80182498();
extern void RequestTalkCheck();
extern void SpawnActor();
extern u8 D_sc03_002_801C51E0;
extern u8 D_sc03_002_801C887C;
extern u8 D_sc03_002_80189CFC;
extern u8 D_sc03_002_80189D0C;
extern u16 D_sc03_002_80189D1C[];
extern u8 D_sc03_002_80189D2C;
extern s32 QueueImage();
extern u8 D_sc03_002_801A58A4;
extern s32 func_sc03_002_801827B0();
extern u8 D_sc03_002_80189D4C;

extern u8 D_sc03_002_801898A4;
extern u8 D_sc03_002_801BDBB8;

extern u8 D_sc03_002_80189334;
extern s32 SpawnProp();

extern u8 D_sc03_002_801A4304;
extern s32 DistSqToPlayer();

extern u8 D_sc03_002_80189904;

extern void func_sc03_002_8018405C();
void func_sc03_002_801845D8(s32 arg0, s32 arg1);

extern u8 D_sc03_002_801893F0;
extern u8 D_sc03_002_801A74D4;

extern void func_sc03_002_80184A38();


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
extern u8 D_sc03_002_80188EE8;
extern u8 *func_800D21C4();
extern s32 D_sc03_002_801CB908;
extern s32 D_sc03_002_801CB914;
extern s32 D_sc03_002_801CB91C;
extern void func_sc03_002_8017CFE0();
extern void func_sc03_002_8017CF6C();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern s32 MoveCollidePassable();
extern s32 StopMotion();
extern u8 D_sc03_002_80188FA8;
extern s32 MoveOnGround();

extern u8 D_800AF630;
extern void SetState();
extern void func_sc03_002_8017F9D0();
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
extern s32 HeadingToTarget();
extern s32 D_sc03_002_80189210;
extern void RestorePrevPos();
extern void func_sc03_002_8017D0BC();
extern s32 DistSq();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();

extern u8 D_sc03_002_801A855C;
extern void *D_sc03_002_801CBAD4;

extern s32 SpawnShadow();
extern u8 D_sc03_002_80189140;
extern u8 D_sc03_002_80189174;
extern s32 D_sc03_002_801CB90C;
extern s32 D_sc03_002_801CB910;


typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_800D23D0();
extern u16 D_sc03_002_801CB900;
extern void *g_ActiveCamera;
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void WorldToActorLocal();
extern s32 func_8012CB64();
extern s32 func_8016F1C4();
extern u16 g_Actors;

extern s32 func_sc03_002_801844CC();

extern s16 D_sc03_002_80189CD8;
extern u16 D_sc03_002_80189CDA;
extern u16 D_sc03_002_80189CDC;
extern s16 D_sc03_002_80189CDE;
extern s32 D_sc03_002_80189CE0;
extern s32 D_sc03_002_80189CE4;
extern s16 D_sc03_002_80189CE8;
extern u8 D_sc03_002_80189CEC;
extern u8 D_sc03_002_80189CA8;
extern u8 D_sc03_002_80189C00;
extern u8 D_sc03_002_801C855C;
extern u8 D_sc03_002_801C868C;
extern u8 D_sc03_002_801C8634;
void func_sc03_002_801821B4();

typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc03_002_801CB700;
extern s32 SpawnFromDef();
extern void DrawPrimG4Screen();
extern s16 D_sc03_002_80185818[];
extern s32 GetObjPadHeld();
extern s32 GetObjPadPressed();
extern s32 AngleDist();
extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 EaseAngleStep();
extern s32 EaseAngle();
extern s32 EaseValue();
extern void LocalToWorld();
extern s16 D_sc03_002_801A87C8;
extern s32 func_800D0F8C();
extern u8 D_sc03_002_801C8BB4;
extern u8 D_sc03_002_801C8BCC;

extern s16 D_800B9A08;

extern s32 *func_sc03_002_801851DC();

extern u8 D_sc03_002_801C8B2C;
extern u8 D_sc03_002_801C8A3C;
extern u8 D_sc03_002_801C8B34[][8];
extern u8 D_sc03_002_801C8B44[][16];

typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
extern u8 *D_sc03_002_801A8754[];
extern u8 D_sc03_002_801A8724;
extern u8 D_sc03_002_801A873C;

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
extern OtRef g_WorldOtOrg[];
extern s32 D_sc03_002_80189DAC[];
extern void AngleToVec2();
extern void LoadWorldScreenMatrix();
extern void AddDrawModeAt();
extern u8 *AllocPrim();

extern s32 ProjectPointOtz();
extern void func_sc03_002_8017EF80();

extern s32 SpawnPropFrom();
extern void CopyPropVel();
extern u8 D_sc03_002_801892A0;
extern s32 func_sc03_002_8017E708();
extern u16 g_PlayerHitKind[];
extern s16 g_PlayerHitDamage;

extern u8 D_sc03_002_80189408;
extern u8 D_sc03_002_801A9EE0;
extern u8 D_sc03_002_801A9F5C;
extern u8 D_sc03_002_801A9FFC;
extern u8 D_sc03_002_801CA324;
extern u8 D_sc03_002_801CA32C;
extern void PosToSVec();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 g_PlayerPosX;
extern s32 HeadingTo();
extern u8 D_sc03_002_801891A8[];
extern XY D_sc03_002_801891C8[];
extern u8 D_sc03_002_80189098;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s32 D_sc03_002_8018931C;
extern s32 D_sc03_002_80189320;
extern s32 D_sc03_002_80189324;
extern s32 D_sc03_002_80189328;
extern void DrawPrimFT4Screen();
typedef struct { s32 w[4]; } W16;
extern s16 D_sc03_002_801BDC38[];

void func_sc03_002_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
    SV v;
    s16 i;
    s16 k;

    v.vx = arg1->vx;
    v.vy = arg1->vy - 20;
    v.vz = arg1->vz;
    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        SpawnEffect(0x25, arg0, v.vx, v.vy, v.vz, k, 0);
    }
}

void func_sc03_002_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc03_002_80188EE8, 0x2A);
    if (o == 0) {
        FreeEffect(arg0);
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

void func_sc03_002_8017C0E4(u8 *arg0) {
    D_sc03_002_80188EF4[AF(arg0, u16, 2)]();
}

void func_sc03_002_8017C120(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_002_8017C180(StageActor *arg0) {
    D_sc03_002_80188F90[arg0->state]();
}

void func_sc03_002_8017C1BC(u8 *arg0) {
    D_sc03_002_80188F98[AF(arg0, u16, 2)]();
}

void func_sc03_002_8017C1F8(StageActor *arg0) {
    D_sc03_002_80188FA0[arg0->state]();
}

void func_sc03_002_8017C234(StageActor *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = (u16 *)o->message;
    if (p != 0) {
        t = &D_sc03_002_801CB700;
        s.w = 0x158;
        s.a = s.b = 0;
        s.d = 0;
        s.e = 0;
        for (i = 0; i < 16; i++) {
            v = *p;
            if (v == 0x8000) break;
            if (o->param != 0) {
                p++;
                s.x = v;
                s.y = *p++;
                s.z = *p++;
                if (SpawnFromDef(&s) == 0) break;
            } else {
                r = SpawnProp(0x11);
                if (r == 0) break;
                AF(t, s32, 0x14) = *(s16 *)p; p++;
                AF(t, s32, 0x18) = *(s16 *)p; p++;
                AF(t, s32, 0x1C) = *(s16 *)p; p++;
                AF(r, u8 *, 0x30) = t;
                t += 0x20;
            }
        }
    }
    o->state++;
}

void func_sc03_002_8017C378(void) {
    FeSv v;
    u8 *p;

    p = g_ActiveCamera;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc03_002_801CB900 = v.y;
}

void func_sc03_002_8017C3E4(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        InitSpriteKind2(temp_s0, (s32) &D_sc03_002_80188EFC, 0x3C0, 0xA0);
    } else {
        InitSpriteKind3(temp_s0, (s32) &D_sc03_002_80188EFC, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_002_8017C490(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc03_002_801CB900;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc03_002_8017C4D0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_002_80188F78);
    SetScript(arg0, (s32) &D_sc03_002_80185828);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    SyncModelPos(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc03_002_80188F80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
extern WMtx GsIDMATRIX;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 TraceMap();
extern s32 CollidePath();

extern s16 D_sc03_002_801A8440[];
extern s16 D_sc03_002_801A8474[];
extern s32 D_sc03_002_801A8340[][8];
extern s32 D_sc03_002_801CB9C0[];
extern s32 func_sc03_002_801830B0();
extern s32 SetScript();
extern u8 D_sc03_002_80189938;
extern u8 D_sc03_002_80189930;
extern void * func_sc03_002_80181990();
extern void * func_sc03_002_801813E4();
extern u8 D_sc03_002_801892C8;
extern s32 GetVar16();
extern void StopWithGravity();
extern u8 D_sc03_002_801A7F4C;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern void SetLocalVelocityXZ();
extern u8 D_sc03_002_801892FC;
extern void SetVar16();

extern s32 func_sc03_002_8018418C();
extern u8 D_sc03_002_801A4288;
extern u8 D_sc03_002_801A4294;
extern s32 UpdateScript();
extern u8 D_sc03_002_80189ADC;
extern void func_800D0CA0();
extern u8 D_sc03_002_80189804;
extern void StartCameraShake();
extern u8 D_sc03_002_801897FC;
extern SV4 D_sc03_002_80189828;
void func_sc03_002_8017F068(u16 *pos, SV4 *d, u16 yaw, s16 n);
void func_sc03_002_8017F304(s32 arg0);
extern void PlaySe();

typedef void (*StepFn)(void);
extern s16 D_800B9A0A;
extern s32 func_800D1D94();
extern void func_sc03_002_8018431C(u8 *o);

void func_sc03_002_8017C594(StageActor *o) {
    u8 unused[8];
    ModelObj *m;
    s16 y;

    m = o->model;
    if (o->pos[1].h.i - (s16) D_80126B62 < 0x40) {
        o->hitState = 0x800;
    } else {
        o->hitState = 0x40;
    }
    y = D_sc03_002_801CB900;
    if (m->rot.vy != y) {
        m->rot.vy = y;
        RotMatrixZYX((u8 *)o->model + 0x10, (u8 *)o->model + 0x34);
        m->flags |= 0x11;
    }
}

void func_sc03_002_8017C61C(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc03_002_8018926C[arg0->param]) & 0xFF) || (arg0->param == 4 && (u32) GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_002_80189140) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc03_002_80188FA8);
            arg0->model->flags |= 0x10;
            D_sc03_002_801CB908 = arg0->origin[0] << 16;
            D_sc03_002_801CB90C = AF(arg0, s16, 0x8A) << 16;
            D_sc03_002_801CB910 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_002_80189174) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc03_002_8017C7B8(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc03_002_80189030);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc03_002_801CB914 = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc03_002_801CB91C = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc03_002_8017CFE0(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc03_002_801CB914)[i] = (&D_sc03_002_801CB908)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc03_002_801CB914, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc03_002_8017CF6C(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc03_002_8017C9BC(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = MoveOnGround(a);
    if ((f & 0x6000) != 0x2000) {
        RestorePrevPos(a);
        func_sc03_002_8017D0BC(a);
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
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc03_002_801CB914) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc03_002_801CB914, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc03_002_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc03_002_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
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
        StopMotion(a);
        SetScript(a, &D_sc03_002_80188FA8);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (DistSqToPlayer(a) < 0x24000) {
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
        if (GetPlayerAction() != 0) {
            p = &D_sc03_002_80189210;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            StartEventKeepPlayer(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            StopMotion(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc03_002_8017CF6C(a, -15, 0);
        func_sc03_002_8017CFE0(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = DistSqToPlayer(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (TargetInFront(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (TargetInFront(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc03_002_8017CFE0(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc03_002_8017CF6C(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc03_002_8017CDB0(u8 *arg0) {
    s32 f;

    IsEventDone(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = MoveOnGround(arg0);
        } else {
            f = MoveCollidePassable(arg0);
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
        MoveObject(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        PlaySoundId(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || IsOnScreen(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        StopMotion(arg0);
        SetScript(arg0, &D_sc03_002_80188FA8);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_002_8017CF30(StageActor *arg0) {
    D_sc03_002_8018927C[arg0->state]();
}

void func_sc03_002_8017CF6C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_002_8017CFE0(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc03_002_801CB908) >> 7) & 0x18;
    i = D_sc03_002_801891A8[a | ((HeadingTo(arg0 + 4, &D_sc03_002_801CB908) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_002_801891C8[i].x - 0x100;
    D_sc03_002_801CB914 = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_002_801891C8[i].y - 0x100;
    D_sc03_002_801CB91C = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc03_002_8017D0BC(u8 *o) {
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
    if (TraceMap(1, &a, &b) & 0xC000) {
        e = ratan2(g_WallNormal, D_801152B4) & 0xFFF;

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
        m = GsIDMATRIX;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (CollidePath(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc03_002_8017D2D0(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    IsEventDone(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) SpawnActorArg(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            PlaySoundId(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc03_002_80189098);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            SetLocalVelocity(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc03_002_8017D3A4(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_002_80189030);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        UpdateModelZYX(arg0);
        SetLocalVelocity(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_002_8017D474(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc03_002_8018926C[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc03_002_8017D4CC(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc03_002_8018924C);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (IsOnScreen((s32) arg0, 0x9000B8) == 0)) {
        if (SpawnActorArg(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            FreeShadow(AF(arg0, s32, 0xCC));
            FreeActor((s32) arg0);
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

void func_sc03_002_8017D5C4(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc03_002_8017D604(u8 *obj) {
    s32 tmp[3];
    SV8 box[8];
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

void func_sc03_002_8017E4E4(StageActor *o) {
    s16 dx;
    s16 dz;
    u8 *r;
    s32 d;

    dx = g_PlayerX - (u16)o->pos[0].h.i;
    if (dx < 0) dx = -dx;
    dz = D_80126B66 - (u16)o->pos[2].h.i;
    if (dz < 0) dz = -dz;
    if (dx <= 0x200 && dz <= 0x200) {
        if (o->timer++ & 1) {
            r = (u8 *)SpawnPropFrom(o, 0x22);
            if (r != 0) {
                CopyPropVel(r, o);
                AF(r, s16, 0x34) = 0x4000;
            }
        }
        if (func_sc03_002_8017E708(o, &D_sc03_002_801892A0) != 0) {
            g_PlayerHitDamage = 0xC;
            g_PlayerHitKind[0] |= 0x4000;
        }
        if (o->timer & 3) return;
        d = dx * dx + dz * dz;
        if (d <= 0x30000) {
            PlaySoundId(0x644, (u16)(((0x30000 - d) * 127 / 0x30000) | 0x1000));
            o->unkFC = 1;
            return;
        }
    }
    func_sc03_002_8017E68C(o);
}

void func_sc03_002_8017E68C(s32 arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        PlaySoundId(4, 0x644);
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_002_8017E6CC(StageActor *arg0) {
    D_sc03_002_801892B0[arg0->state]();
}


extern void InitNullModel();

extern s32 ActorSegmentHitsPlayer();

s32 func_sc03_002_8017E708(StageActor *o, u8 *p) {
    SV8 a, b;

    a.z = 0;
    b.z = AF(p, s16, 0xE);
    a.x = b.x = AF(p, s16, 4);
    a.y = b.y = AF(p, s16, 8) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = AF(p, s16, 0xA) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.x = b.x = AF(p, s16, 6);
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = AF(p, s16, 8) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    return 0;
}

void func_sc03_002_8017E7FC(s32 arg0) {
    s32 v[4];
    s32 temp_v0;

    if (GetVar(0xCD) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(temp_v0);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    UpdateModelZYX(arg0);
    v[1] = 0;
    v[0] = 0;
    v[2] = 0xC0000;
    SetLocalVelocity(arg0, v);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_801892A0 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    NextState(arg0);
}

void FirstVisitWalkerInit(u8 *o) {
    if (SetupActor(o, &D_sc03_002_801892C8) != 0) {
        if (GetProgress() >= 0x14U || (u8)GetFlag(0xDF) == 0 || !(GetVar16(10) & 0x40)) {
            FreeActor(o);
        } else {
            AF(o, s16, 2) = 1;
            StopWithGravity(o);
            SetScript(o, &D_sc03_002_801A7F4C);
            AF(o, s32, 4) = g_PlayerPosX;
            AF(o, s32, 8) = D_80126B60;
            AF(o, s32, 0xC) = D_80126B64;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xF00;
            UpdateModelZYX(o);
            SetLocalVelocityXZ(o, &D_sc03_002_801892FC);
            AF(o, s32, 0x1C) = 6;
            AF(o, s32, 4) += AF(o, s32, 0x10);
            AF(o, s32, 0xC) += AF(o, s32, 0x18);
            SpawnShadow(o);
            SetVar16(10, 0x1011);
            SetProgress(0x14);
            SetFlag(0xE1, 1);
        }
    }
}

void func_sc03_002_8017E9EC(StageActor *arg0) {
    D_sc03_002_80189308[arg0->state]();
}

void func_sc03_002_8017EA28(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->timer = 0x50;
        arg0->state = 2;
    }
}

void func_sc03_002_8017EA54(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = MoveCollide(arg0);
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
        FreeActor(arg0);
    }
}

void func_sc03_002_8017EAE8(void) {
    u32 temp_v0;

    temp_v0 = GetProgress() - 0x85;
    switch (D_sc03_002_801CBAC4) {                  /* irregular */
    case 0:
        if (temp_v0 < 2U) {
            func_800D06CC();
        }
        D_sc03_002_801CBAC4 += 1;
        return;
    case 1:
        UpdateClockTint();
        func_800D06E8();
        return;
    }
}

void func_sc03_002_8017EB74(StageActor *arg0) {
    D_sc03_002_80189314[arg0->state]();
}

void func_sc03_002_8017EBB0(StageActor *arg0) {
    arg0->unkFC = 0;
    NextState((s32) arg0);
}

void func_sc03_002_8017EBD0(StageActor *arg0) {
    B8 a;
    B8 b;
    SV8 c;

    a = *(B8 *)&D_sc03_002_801CA324;
    b = *(B8 *)&D_sc03_002_801CA32C;
    if (arg0->unkFC == 0) {
        func_sc03_002_8017EC98((SV8 *)&a, (SV8 *)&b);
    } else {
        PosToSVec((u8 *)arg0 + 4, &c);
        func_sc03_002_8017EC98((SV8 *)&a, &c);
        func_sc03_002_8017EC98(&c, (SV8 *)&b);
    }
}

void func_sc03_002_8017EC98(SV8 *a, SV8 *b) {
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
        if (ProjectPointOtz(&p0, &r0) & ~0x1000) continue;
        if (ProjectPointOtz(&p1, &r1) & ~0x1000) continue;
        p0 = prev;
        p0.y += 4;
        p1 = cur;
        p1.y += 4;
        if (ProjectPointOtz(&p0, &r2) & ~0x1000) continue;
        if (ProjectPointOtz(&p1, &r3) & ~0x1000) continue;
        func_sc03_002_8017EF80(&r0, &r1, &r2, &r3);
    } while (loop);
}

void func_sc03_002_8017EF80(SV4 *a, SV4 *b, SV4 *c, SV4 *d) {
    Q74 q;

    q.p[0] = *a;
    q.p[1] = *b;
    q.p[2] = *c;
    q.p[3] = *d;
    q.col = 0x808080;
    q.code = 0;
    q.flag = 0x50;
    q.c[0] = D_sc03_002_8018931C;
    q.c[1] = D_sc03_002_80189320;
    q.c[2] = D_sc03_002_80189324;
    q.c[3] = D_sc03_002_80189328;
    DrawPrimFT4Screen(&q);
}

void func_sc03_002_8017F068(u16 *pos, SV4 *d, u16 yaw, s16 n) {
    SV4 v;
    WMtx m;
    s16 i;
    u8 *o;
    SV4 *e;

    for (i = 0; i < n; i++) {
        o = (u8 *) SpawnProp(0x46);
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

void func_sc03_002_8017F1C4(u8 *arg0) {
    D_sc03_002_8018932C[AF(arg0, u16, 2)]();
}

void func_sc03_002_8017F200(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind3(temp_s0, (s32) &D_800D387C, 0x270, 0x120);
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

void func_sc03_002_8017F290(u8 *arg0) {
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        FreeProp();
        return;
    }
    MoveProp();
    temp_v0_2 = AF(temp_s0, u8, 0x26) - 2;
    AF(temp_s0, u8, 0x26) = temp_v0_2;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    AF(temp_s0, u8, 0x24) = temp_v0_2;
}

void func_sc03_002_8017F304(s32 arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (arg0 * 0x1C) + &D_sc03_002_80189334;
    temp_v0 = SpawnProp(0x48);
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

void func_sc03_002_8017F3A4(u8 *arg0) {
    D_sc03_002_801893E8[AF(arg0, u16, 2)]();
}

void func_sc03_002_8017F3E0(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v0;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind3(temp_s0, (s32) &D_sc03_002_801893DC, 0x240, 0x1D0);
    AF(temp_s0, u8, 0x27) = 0x54;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x08000000);
    temp_v0 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    AF(arg0, u16, 0x2C) = 0x20U;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_002_8017F464(u8 *arg0) {
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        FreeProp();
        return;
    }
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + 0x155);
    MoveProp((s32) arg0);
}

void func_sc03_002_8017F4C4(u8 *arg0) {
    D_sc03_002_80189400[AF(arg0, u16, 2)]();
}

void func_sc03_002_8017F500(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_v0_2;

    temp_v0 = GetProgress();
    if (((u32) (temp_v0 - 0x460) >= 0x28U) && (temp_v0 >= 0x3B6)) {
        temp_v0_2 = AllocActorModel();
        arg0->model = temp_v0_2;
        if (temp_v0_2 != 0) {
            func_8001C810(temp_v0_2, (s32) &D_sc03_002_801A74D4);
            temp_v0_2->colour = 0xFA00FA;
            temp_v0_2->unk04 = (s32) ((s32)temp_v0_2->unk04 | 0x8000);
            arg0->targetClass = 2;
            arg0->hitData = (s32) ((s32) &D_sc03_002_801893F0 | 0x40000000);
            arg0->hitState = 0xC800;
            NextState((s32) arg0);
        }
    }
}

void func_sc03_002_8017F5B4(void) {
}

void func_sc03_002_8017F5BC(StageActor *arg0) {
    D_sc03_002_80189438[arg0->state]();
}

void func_sc03_002_8017F5F8(StageActor *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (g_ClockHour == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc03_002_801CB920)[i];
            AF(p, s16, 0x16) = i;
            func_sc03_002_8017F914((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        NextState((s32) o);
    }
}

void func_sc03_002_8017F688(StageActor *arg0) {
    Fx24 *p;
    s32 i;
    s32 j;
    s32 n;
    s32 c;
    s16 a;
    u8 *w = (u8 *) &D_800AF630;
    u8 *g = &g_Status;

    if (g_ClockHour >= 9) {
        n = 0;
        for (j = 0; j < 4; j++) {
            if (((Fx24 *) &D_sc03_002_801CB920)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            SetState(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc03_002_801CB920)[i];
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
                    func_sc03_002_8017F8C4((s32) p);
                }
            }
            func_sc03_002_8017F9D0(p);
        }
    }
}

void func_sc03_002_8017F8C4(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc03_002_801CB920;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc03_002_8017F914((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc03_002_8017F914(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc03_002_80189408;
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

void func_sc03_002_8017F9D0(u8 *o) {
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
        DrawPrimG4Screen(pq);
    }
}

void func_sc03_002_8017FAE8(StageActor *arg0) {
    D_sc03_002_8018962C[arg0->state]();
}

void func_sc03_002_8017FB24(StageActor *arg0) {
    ModelObj *temp_v0;

    if (!(GetFlag(0xF0) & 0xFF)) {
        RejectSpawn(arg0);
        return;
    }
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc03_002_801BFCB4);
        arg0->model->rot.vy = 0xE00;
        SetScript(arg0, (s32) &D_sc03_002_80189440);
        arg0->def->unkC = 0x7FFF;
        arg0->hitData = (s32) ((s32) &D_sc03_002_80189540 | 0x40000000);
        arg0->hitState = 0x800;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) &func_sc03_002_8017FCD0);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_002_8017FBF0(void) {
}

void func_sc03_002_8017FBF8(StageActor *arg0) {
    s32 *var_a1;

    if ((GetVar(0x40) & 0xFF) == 1) {
        SetVar(0x40, 2);
    }
    if (arg0->work10A == 0) {
        var_a1 = &D_sc03_002_8018959C;
        arg0->work10A = 1;
        arg0->hitData = (s32) ((s32) &D_sc03_002_80189550 | 0x40000000);
    } else {
        var_a1 = &D_sc03_002_80189614;
    }
    RunScript((s32) arg0, (s32) var_a1);
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_002_8017FC90(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_002_8017FCD0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 1) {
        return NULL;
    }
    if (DistSqToPlayer(arg0) >= 0x4000) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

s32 func_sc03_002_8017FD44(u8 *arg0) {
    StartPlayerAction((s32) func_sc03_002_80180144, 0x01000000);
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_002_8017FD94(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc03_002_8017FDB8(u8 *arg0) {
    func_sc03_002_80180748();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_002_8017FDFC(u8 *arg0) {
    StartPlayerAction((s32) func_sc03_002_801801CC, 0x01000000);
    D_801270C0 = 2;
    g_PlayerFlags |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_002_8017FE6C(u8 *o) {
    s32 t;
    s16 s;

    t = AF(o, s32, 0x28) - 1;
    AF(o, s32, 0x28) = t;
    if (t == -1) {
        func_800D1E28();
        s = D_800B9A0A;
        if (s != 0x1000 || (s16)func_800D1D94() != s) {
            PlaySoundId(0x1C, 0);
            ClearTimeChime();
            PlaySoundId(0x1D, 0);
            func_800D0C48(1);
        }
        AF(o, u8, 0x15)++;
    }
    return 0;
}

void func_sc03_002_8017FF1C(void) {
    func_800D1EBC();
}

s32 func_sc03_002_8017FF3C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc03_002_8017FF90(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        if (!(GetVar(0xCE) & 0xFF)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_002_80180014(void) {
    func_800D06CC();
    D_8012704C = 1;
}

void func_sc03_002_80180040(u8 *arg0) {
    D_sc03_002_8018963C[AF(arg0, u8, 0x15)]();
}

void func_sc03_002_8018007C(u8 *arg0) {
    D_sc03_002_80189644[AF(arg0, u8, 0x15)]();
}

void func_sc03_002_801800B8(u8 *arg0) {
    D_sc03_002_8018964C[AF(arg0, u8, 0x15)]();
}

void func_sc03_002_801800F4(u8 *arg0) {
    D_sc03_002_80189658[AF(arg0, u8, 0x15)]();
}

void func_sc03_002_80180130(void) {
    D_80127050 = 1;
}

void func_sc03_002_80180144(Player *arg0) {
    D_sc03_002_8018978C[arg0->phase]();
}

void func_sc03_002_80180180(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc03_002_80180194(s32 arg0) {
    func_80175414();
    EndPlayerActionOf(arg0);
    ResumeHopAbility(arg0);
}

void func_sc03_002_801801CC(Player *arg0) {
    D_sc03_002_80189794[arg0->phase]();
}

void func_sc03_002_80180208(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc03_002_8018021C(s32 arg0) {
    EndPlayerActionOf(arg0);
}

void func_sc03_002_8018023C(u8 *arg0) {
    D_sc03_002_801897EC[AF(arg0, u8, 0x216)]();
    PlaceMarker19C((s32) arg0, (s32) AF(arg0, s16, 0x20C));
}

void func_sc03_002_80180290(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc03_002_80189760);
    SetObjPush(arg0, 0, 0x60000, 0);
    AF(arg0, s16, 0x20C) = 1;
    AF(arg0, s32, 0x200) = 0x50;
    BumpSub2Copy(arg0);
}

void func_sc03_002_801802F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 != -1) {
        AddPushFacing((s32) arg0, 0, 0, -0x8000);
        MoveObjByVel((s32) arg0);
    } else {
        AF(arg0, s32, 0x200) = 6;
        AF(arg0, s16, 0x20C) = 0;
        AF(arg0, s32, 0x28) = 0xA0000;
        SetVelFromPushKeepAxes((s32) arg0);
        BumpSub2Copy((s32) arg0);
    }
    func_sc03_002_8018061C((s32) arg0);
}

void SceneCrashImpact(u8 *o) {
    SV4 v;

    if (--AF(o, s32, 0x200) != -1) {
        SetVelFromPushKeepAxes();
        MoveObjByVel(o);
        return;
    }
    StartCameraShake(&D_sc03_002_80189804);
    PlaceObjAt(o, &D_sc03_002_801897FC);
    PosToSVec(o + 4, &v);
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xD50, 8);
    v.y -= 0x60;
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xD50, 8);
    v.y -= 0x60;
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xF00, 8);
    v.z -= 0x60;
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xF00, 8);
    v.y += 0x60;
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xF00, 8);
    v.y += 0x60;
    D_sc03_002_80189828.x = (rand() & 0x3F) + 0x40;
    func_sc03_002_8017F068((u16 *) &v, &D_sc03_002_80189828, 0xF00, 8);
    func_sc03_002_8017F304(0);
    func_sc03_002_8017F304(1);
    func_sc03_002_8017F304(2);
    func_sc03_002_8017F304(3);
    func_sc03_002_8017F304(4);
    func_sc03_002_8017F304(5);
    PlaySe(0x842);
    BumpSub2Copy(o);
}

void SceneCrashBegin(s32 arg0) {
    BeginScene();
    PlaceObjAt(arg0, (s32) &D_sc03_002_80189830);
    NextPlayerActionHandler(arg0);
}

void PlaceMarker19C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x19C);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) AF(arg0, s32, 4);
        AF(temp_v0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFC00000);
        AF(temp_v0, s32, 0xC) = (s32) AF(arg0, s32, 0xC);
        AF(temp_v0, s16, 0xFC) = (s16) arg1;
    }
}

extern void RotateSVectorY();
extern void PackAngles10();
extern u16 D_800B99DA;
extern u8 D_sc03_002_80189838;

void func_sc03_002_8018061C(u8 *o) {
    SV8 v;
    u32 c;
    RotateSVectorY(AF(AF(o, u8 *, 0x20), s16, 0x12), &D_sc03_002_80189838, &v);
    PackAngles10(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        SpawnEffect(6, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x40), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc03_002_801806B4(u8 *arg0) {
    D_sc03_002_80189840[AF(arg0, u8, 0x216)]();
}

void func_sc03_002_801806F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    BumpSub2Copy(arg0, arg1, arg2, arg3);
}

void func_sc03_002_80180710(s32 arg0) {
    if (func_800D0CE0() != 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc03_002_80180748(void) {
    StartPlayerActionScript((s32) &D_sc03_002_8018979C, 0x01000000);
}

void func_sc03_002_80180770(void) {
    u8 temp_s1;

    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    temp_s1 = g_CameraVarA0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_002_801809C8, 0);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
}

void RoomInitCameraB(void) {
    u8 temp_s1;

    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x708;
    g_CameraAngleTarget = 0x38;
    D_8012696A = 0x868;
    temp_s1 = g_CameraVarA0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0xC0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_002_801809C8, 1);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
}

void RoomInitCameraC(void) {
    u8 temp_s1;

    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    temp_s1 = g_CameraVarA0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_002_801809C8, 0);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc03_002_801809C8((s32) &g_Camera);
    g_CameraVarA0 = 3;
}

void func_sc03_002_801809C8(s32 arg0) {
    D_sc03_002_80189848[AF(arg0, u8, 4)]();
}

void func_sc03_002_80180A04(s32 arg0) {
    func_sc03_002_80180AC0(arg0, arg0 + 0xA0);
    func_sc03_002_80180C00(arg0);
}


extern u8 g_Daytime;
extern s32 func_sc03_002_80182E88();


void func_sc03_002_80180A38(u8 *o) {
    s32 v;

    if (g_CameraFocus[0] < -0x130) {
        g_CameraFocus[0] = -0x130;
    }
    D_80126942 = -0x282;
    D_80126944 = 0x563;
    v = AF(o, s32, 0x14) - 0x10;
    AF(o, s32, 0x14) = v;
    AF(o, s32, 0x10) = v;
    if (AF(o, s32, 0x14) < 0x12C) {
        AF(o, s32, 0x10) = AF(o, s32, 0x14) = 0x12C;
    }
    func_sc03_002_80180C00(o);
}

void func_sc03_002_80180AC0(u8 *o, u8 *a1) {
    s32 d;
    s32 s0;
    s32 s3;
    s32 b;
    s32 v;
    d = *a1;
    b = GetObjPadHeld(&g_Player);
    v = GetObjPadPressed(&g_Player);
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
        if ((s16)AngleDist(AF(o, s16, 0x1A), D_sc03_002_80185818[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc03_002_80185818[*a1];
}

void func_sc03_002_80180C00(u8 *o) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 lim;
    s16 d;
    lim = AF(o, s16, 0x9C);
    d = EaseAngleStep(AF(o, s16, 0x1A), AF(o, s16, 0x22), 0x14);
    if (d > lim) d = lim;
    else if (d < -lim) d = -lim;
    AF(o, s16, 0x1A) = (AF(o, s16, 0x1A) + d) & 0xFFF;
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s32, 8) = (s16)EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + g_CameraFocus[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(o, s16, 0x2A) + D_80126942;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void func_sc03_002_80180DF4(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    PlaceObject(arg0, (s32) &D_sc03_002_80189904);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc03_002_801BD8B0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189884 | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_002_80183480(arg0, (s32) &D_sc03_002_801BDC00, 1, 0x60);
    SnapToGround(arg0);
    UpdateModelZYX(arg0);
}

s32 func_sc03_002_80180E90(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    PlaceObject(arg0, (s32) &D_sc03_002_80189850);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc03_002_801BD8B0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189884 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    return func_sc03_002_80183480(arg0, (s32) &D_sc03_002_801BDC00, 0, 0x60);
}

void func_sc03_002_80180F1C(s32 arg0) {
    s32 temp_s1;

    if ((GetFlag(0xF0) & 0xFF) || ((u32) (GetProgress() - 0x85) < 2U)) {
        RejectSpawn(arg0);
        return;
    }
    if (func_sc03_002_80182D68(arg0, (s32) &D_sc03_002_80189860) != 0) {
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        temp_s1 = (s32) &D_sc03_002_80189874 | 0x40000000;
        AF(arg0, s32, 0x58) = temp_s1;
        AF(arg0, s16, 0x5C) = 0x800;
        if (func_sc03_002_80183158(9, 0x12) != 0) {
            AF(arg0, s16, 2) = 2;
            SetScript(arg0, (s32) &D_sc03_002_801BD368);
            ShowModel(arg0);
            PlaceObject(arg0, (s32) &D_sc03_002_80189850);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0x800;
        } else {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x98) = 0;
            HideModel(arg0);
            PlaceObject(arg0, (s32) &D_sc03_002_80189850);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0;
        }
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc03_002_8018118C);
    }
}

void func_sc03_002_80181054(StageActor *arg0) {
    D_sc03_002_8018990C[arg0->state]();
}

void func_sc03_002_80181090(u8 *arg0) {
    s32 n;

    n = (u8)GetVar(0xDC);
    SetFlag(0xDE, 1);
    if (n == 0) {
        AF(arg0, u8 *, 0xE4) = &D_sc03_002_801A9EE0;
    } else if (n & 1) {
        AF(arg0, u8 *, 0xE4) = &D_sc03_002_801A9F5C;
    } else {
        AF(arg0, u8 *, 0xE4) = &D_sc03_002_801A9FFC;
    }
    n++;
    if (!(n & 0xFF)) {
        n = 2;
    }
    SetVar(0xDC, n & 0xFF);
}

void func_sc03_002_8018112C(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    PlaceObject((s32) arg0, (s32) &D_sc03_002_80189850, arg2);
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_002_801BDBB8);
    RunScript((s32) arg0, (s32) &D_sc03_002_801898A4);
}

void *func_sc03_002_8018118C(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) != 2) {
        return 0;
    }
    if (DistSqToPlayer(o) < 0x4000) {
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        ResetScriptVM();
        return &CallActionHandler;
    }
    return 0;
}

void func_sc03_002_80181200(StageActor *arg0) {
    if (func_sc03_002_80183158(9, 0x12) != 0) {
        func_sc03_002_80180DF4(arg0);
    }
}

void func_sc03_002_80181240(StageActor *arg0) {
    if (func_sc03_002_80183158(9, 0x12) == 0) {
        func_sc03_002_80180E90(arg0);
    }
}

void func_sc03_002_80181280(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc03_002_801BD368);
        ShowModel(arg0);
        PlaceObject(arg0, (s32) &D_sc03_002_80189850);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189874 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc03_002_80181304(s32 arg0) {
    if (func_sc03_002_80183550(arg0) != 0) {
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc03_002_801BD368);
        ShowModel(arg0);
        PlaceObject(arg0, (s32) &D_sc03_002_80189850);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189874 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc03_002_8018137C(s32 arg0) {
    if (func_sc03_002_80183550(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x98) = 0;
        HideModel(arg0);
        PlaceObject(arg0, (s32) &D_sc03_002_80189850);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189874 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0;
    }
}

void *func_sc03_002_801813E4(u8 *o) {
    Player *b = &g_Player;
    u8 *p = AF(o, u8 *, 0x64);
    switch (AF(p, u16, 2)) {
    case 7:
    case 0xB:
        if (b->pos[0].h.i < -0x580) {
            if ((u16)b->pos[2].h.i - 0x181U < 0x27F) {
                return 0;
            }
        }
        break;
    case 0x10:
        if (AF(p, u16, 0x34) != 2) {
            return 0;
        }
        if ((s16)g_PlayerX < -0x580) {
            if (D_80126B66 - 0x181U < 0x27F) {
                return 0;
            }
        }
        break;
    default:
        return 0;
    }
    if (DistSqToPlayer(AF(o, u8 *, 0x64)) <= 0x4000) {
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        ResetScriptVM();
        return &CallActionHandler;
    }
    return 0;
}

s32 func_sc03_002_801814F0(StageActor *arg0) {
    arg0->state = 2;
    func_sc03_002_80183264(arg0, (s32) &D_sc03_002_80189928);
}

void func_sc03_002_8018151C(StageActor *arg0) {
    arg0->state = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_002_801AB098);
}

void func_sc03_002_80181548(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 2);
    AF(arg0, u16, 2) = 0x10U;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u8, 0x105) = (s8) temp_v1;
    PlaceObject(arg0, (s32) &D_sc03_002_80189928);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc03_002_801AA660);
    func_sc03_002_8018323C(arg0);
}

void func_sc03_002_801815AC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (func_sc03_002_8018418C(1) != 0) {
            func_sc03_002_80183480(o, (s32) &D_sc03_002_801A4288, 0, 0x40);
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        func_sc03_002_8018418C(1);
        if (func_sc03_002_80183550(o) != 0) {
            func_sc03_002_80183480(o, (s32) &D_sc03_002_801A4294, 1, 0x40);
            AF(o, s16, 0x34) = 2;
            AF(AF(o, u8 *, 0xCC), s16, 0x108) = 0;
            AF(AF(o, u8 *, 0xCC), s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_sc03_002_80183550(o) != 0) {
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        if (func_sc03_002_8018418C(1) != 0) {
            AF(o, s16, 0x34) = 4;
            func_sc03_002_80183480(o, (s32) &D_sc03_002_801A4288, 1, 0x40);
        }
        break;
    case 4:
        func_sc03_002_8018418C(1);
        if (func_sc03_002_80183550(o) != 0) {
            AF(o, s16, 2) = 2;
            func_sc03_002_80183264(o, (s32) &D_sc03_002_80189928);
        }
        break;
    }
}

void func_sc03_002_801816F0(u8 *o) {
    s32 r;
    Mover *t;
    s16 s;
    if (func_sc03_002_80182D68(o, &D_sc03_002_80189938) != 0) {
        r = GetProgress();
        if (r < 100) {
            goto low;
        } else if (r < 0x78) {
            s = 7;
        } else if (r < 0x82) {
            s = 0xB;
        } else {
            goto low;
        }
        AF(o, s16, 2) = s;
        ShowModel(o);
        SetScript(o, &D_sc03_002_801AB098);
        func_sc03_002_8018323C(o);
        PlaceObject(o, &D_sc03_002_80189930);
        func_sc03_002_80183480(o, &D_sc03_002_801A4304, 1, 0x70);
        goto done;
    low:
        AF(o, s16, 2) = 2;
        func_sc03_002_80183264(o, &D_sc03_002_80189928);
    done:
        AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
        t = SpawnTalkMarker(o, func_sc03_002_80181990);
        AF(o, s32, 0xD4) = t;
        PlaceObject(t, &D_sc03_002_80189928);
        AF(o, s32, 0xD8) = SpawnTalkMarker(o, func_sc03_002_801813E4);
    }
}

void func_sc03_002_80181808(StageActor *arg0) {
    D_sc03_002_801899F4[arg0->state]();
}

void Villager15TalkEarly(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    if (GetProgress() < 0x82U) {
        RunScript((s32) arg0, (s32) &D_sc03_002_8018994C);
    }
}

void func_sc03_002_80181894(StageActor *arg0) {
    if (func_80128C98(3) != 0) {
        func_sc03_002_801CBB54(arg0);
    }
}

void func_sc03_002_801818D0(s32 arg0) {
    if (func_80128C98(3) != 0) {
        func_sc03_002_801CBBDC(arg0);
    }
}

void func_sc03_002_8018190C(u8 *arg0) {
    AF(arg0, s16, 2) = 0x12;
    RunScript((s32) arg0, (s32) &D_sc03_002_801899A4);
}

void func_sc03_002_80181938(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 0x10;
        arg0->stateCount = 2;
        SetScript(arg0, (s32) &D_sc03_002_801AA660);
    }
}

void *func_sc03_002_80181990(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) == 2 && func_sc03_002_80182E88() != 0
        && func_sc03_002_80183158(7, 0x15) != 0) {
        AF(AF(o, u8 *, 0x64), u16, 2) = 3;
    } else {
        return 0;
    }
    ResetScriptVM();
    return &CallActionHandler;
}

void func_sc03_002_80181A10(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc03_002_8018317C(5, 0, 5, 0x1E) != 0) {
        func_sc03_002_80181548((s32) arg0);
    }
}

extern u8 D_sc03_002_80189974;

void Villager15TalkLate(u8 *o) {
    if ((u32)GetProgress() >= 0x82) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (func_80128C98(3) != 0) {
                RunScript(o, (s32)&D_sc03_002_80189974);
                AF(o, s16, 0x34) = 1;
            }
            return;
        case 1:
            break;
        default:
            return;
        }
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        AF(o, s16, 2) = 2;
        func_sc03_002_80183264(o, (s32)&D_sc03_002_80189928);
    }
}

void func_sc03_002_80181B14(void) {
}

void func_sc03_002_80181B1C(void) {
}

void func_sc03_002_80181B24(StageActor *arg0) {
    if (func_sc03_002_80183550(arg0) != 0) {
        func_sc03_002_80183480(arg0, (s32) &D_sc03_002_801A4304, 1, 0x70);
    }
    if (DistSqToPlayer(arg0->parent) < 0x4001) {
        RequestTalkCheck();
    }
}

void func_sc03_002_80181B88(s32 arg0) {
    if (func_sc03_002_80183550(arg0) != 0) {
        func_sc03_002_80183480(arg0, (s32) &D_sc03_002_801A4304, 1, 0x70);
    }
}

void EventSetProgress87(Mover *o) {
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        UpdateScript(o);
        if (func_80128C98(3) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (UpdateScript(o) != 0) {
            AF(o, u16, 0x34)++;
            RunScript(o, (s32) &D_sc03_002_80189ADC);
        }
        break;
    case 2:
        IsEventDone(o);
        if (GetFlag(0x10A) & 0xFF) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        IsEventDone(o);
        o->model->rot.vy += TurnStep(o->model->rot.vy, 0x1E0, 8);
        break;
    case 4:
        if (IsEventDone(o) != 0) {
            SetProgress(0x87);
            func_800D0CA0(1);
            o->timer = 0x1E;
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 6:
        if (func_800D0CE0() == 1) {
            EndEvent(o);
            func_sc03_002_80183264(o, (s32) &D_sc03_002_80189A40);
            o->state = 4;
        }
        break;
    }
}

void func_sc03_002_80181D3C(StageActor *arg0) {
    D_sc03_002_80189BEC[arg0->state]();
}

void func_sc03_002_80181D78(u8 *a) {
    V3 t;
    s32 v;

    switch (AF(a, u16, 0x34)) {
    case 0:
        if (++AF(a, s32, 0x1C) > D_sc03_002_80189CD8) {
            AF(a, u16, 0x34)++;
        }
        break;
    case 1:
        t.x = AF(AF(a, u8 *, 0x64), s32, 4);
        AF(&t, u16, 2) += D_sc03_002_80189CDA;
        t.y = AF(AF(a, u8 *, 0x64), s32, 8);
        t.z = AF(AF(a, u8 *, 0x64), s32, 0xC);
        AF(&t, u16, 0xA) += D_sc03_002_80189CDC;
        AF(AF(a, u8 *, 0x20), s16, 0x12) = HeadingToPoint(a + 4, &D_sc03_002_80189CEC);
        UpdateModelZYX(a);
        SetForwardVelocity(a, D_sc03_002_80189CE4);
        MoveObject(a);
        AF(a, u16, 0xA) -= 8;
        SnapToGround(a);
        if (++AF(a, s32, 0x1C) >= D_sc03_002_80189CDE) {
            SetForwardVelocity(a, D_sc03_002_80189CE0);
            SetScript(a, &D_sc03_002_801C855C);
            AF(a, s32, 0x1C) = 0;
            AF(a, u16, 0x34)++;
        }
        break;
    case 2:
        SetForwardVelocity(a, D_sc03_002_80189CE0);
        MoveObject(a);
        AF(a, u16, 0xA) -= 8;
        SnapToGround(a);
        if (++AF(a, s32, 0x1C) >= D_sc03_002_80189CE8) {
            SetScript(a, &D_sc03_002_80189CA8);
            AF(a, s32, 0x1C) = 5;
            AF(a, u16, 0x34)++;
        }
        break;
    case 3:
        if (TickTimer(a) != 0) {
            AF(a, s32, 0x1C) = 0;
            AF(a, u16, 0x34)++;
        }
        break;
    case 4:
        if (TickTimer(a) != 0) {
            AF(a, s32, 0x1C) = (rand() & 0x1F) + 0xB4;
            SetScript(a, (rand() & 1) ? &D_sc03_002_801C8634 : &D_sc03_002_801C868C);
        }
        if (AF(a, s16, 0x102) == 1) {
            SetScript(a, &D_sc03_002_80189C00);
            AF(a, s32, 0x1C) = 6;
            AF(a, u16, 0x34)++;
        }
        break;
    case 5:
        TickTimer(a);
        if (AF(a, s32, 0x1C) == 1) {
            SetScript(a, &D_sc03_002_801C855C);
        }
        v = HeadingTo(a + 4, AF(a, u8 *, 0x64) + 4);
        AF(AF(a, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(a, u8 *, 0x20), s16, 0x12), v, 8);
        if (DistSq(a + 4, AF(a, u8 *, 0x64) + 4) >= 0x7900) {
            SetScript(a, &D_sc03_002_801C887C);
            AF(a, u16, 0x34)++;
            func_sc03_002_801821B4(a);
        }
        break;
    case 6:
        v = HeadingTo(a + 4, AF(a, u8 *, 0x64) + 4);
        AF(AF(a, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(a, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(a, 0xFFFA0000);
        MoveObject(a);
        AF(a, u16, 0xA) -= 8;
        SnapToGround(a);
        if (AF(a, s16, 0x102) == 2) {
            AF(a, s32, 0x1C) = 0x10;
            AF(a, u16, 0x34)++;
        }
        break;
    case 7:
        v = HeadingTo(a + 4, AF(a, u8 *, 0x64) + 4);
        AF(AF(a, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(a, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(a, 0xFFFA0000);
        MoveObject(a);
        AF(a, u16, 0xA) -= 8;
        SnapToGround(a);
        if (TickTimer(a) != 0) {
            HideModel(a);
            AF(a, u16, 0x34)++;
        }
        break;
    case 8:
        break;
    }
}

void func_sc03_002_801821B4(u8 *o) {
    u8 *r;
    s32 w;
    s32 a;

    r = (u8 *)SpawnPropFrom(o, 0x22);
    if (r != 0) {
        AF(r, s16, 0x34) = 0x1000;
        a = AF(AF(o, u8 *, 0x20), s16, 0x12);
        AngleToVec2(&w, a, 0x10);
        a = (a - 0x400) & 0xFFF;
        AF(r, s16, 6) += w;
        AF(r, s16, 0xE) += w >> 16;
        AF(r, s32, 0x10) = rcos(a) << 8;
        AF(r, s32, 0x18) = -(rsin(a) << 8);
    }
}

void func_sc03_002_8018225C(StageActor *arg0) {
    D_sc03_002_80189CF4[arg0->state]();
}

void func_sc03_002_80182298(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x266);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x102) = 1;
    }
}

void func_sc03_002_801822C8(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x266);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x102) = 2;
    }
}

void PlaySound525(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x525, 0, arg2);
}

void func_sc03_002_8018231C(void) {
}

void func_sc03_002_80182324(void) {
}

void func_sc03_002_8018232C(StageActor *arg0) {
    arg0->state = 3;
    arg0->stateCount = 0;
    RunScript((s32) arg0, (s32) &D_sc03_002_80189A6C);
}

void Visitor266Init(s32 arg0) {
    if (func_sc03_002_80182D68(arg0, (s32) &D_sc03_002_80189A48) != 0) {
        if ((u32) (GetProgress() - 0x85) >= 2U) {
            FreeActor(arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 0;
        PlaceObject(arg0, (s32) &D_sc03_002_80189A40);
        ShowModel(arg0);
        func_sc03_002_80182E30(arg0);
        RequestTalkCheck();
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc03_002_80182498);
        SpawnActor(0x266, arg0);
    }
}

void func_sc03_002_80182418(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_002_801C51E0);
    SetScript((s32) arg0, (s32) &D_sc03_002_801C887C);
    arg0->stateCount = 0;
    arg0->timer = 0;
    arg0->state = (u16) (arg0->state + 1);
    arg0->hitState = (u16) (arg0->hitState | 0x10);
}

void *func_sc03_002_80182498(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) != 1) {
        return 0;
    }
    AF(AF(o, u8 *, 0x64), u16, 2) = 2;
    ResetScriptVM();
    return &CallActionHandler;
}

void func_sc03_002_801824DC(u8 *p) {
    u16 t;

    switch (AF(p, u16, 0x34)) {
    case 0:
        if (TickTimer(p) != 0) {
            AF(p, u16, 0xFC) = 0;
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x1F) + 0x1E;
        }
        break;
    case 1:
        t = AF(p, u16, 0xFC) + 6;
        AF(p, u16, 0xFC) = t;
        AF(AF(p, u8 *, 0x20), u16, 0x12) += t;
        if (TickTimer(p) != 0) {
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x3F) + 0x3C;
        }
        break;
    case 2:
        AF(AF(p, u8 *, 0x20), u16, 0x12) += AF(p, u16, 0xFC);
        if (TickTimer(p) != 0) {
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
    if ((u32) GetProgress() >= 0x492) {
        FreeActor(p);
    }
}

void func_sc03_002_80182654(StageActor *arg0) {
    D_sc03_002_80189D04[arg0->state]();
}

void func_sc03_002_80182690(StageActor *arg0) {
    D_sc03_002_80189D24[arg0->state]();
}

void func_sc03_002_801826CC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    PlaceObject((s32) arg0, (s32) &D_sc03_002_80189CFC);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_80189D0C | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_002_80182758(StageActor *arg0) {
    arg0->model->rot.vy = D_sc03_002_80189D1C[arg0->param];
    if (GetProgress() >= 0x492U) {
        FreeActor((s32) arg0);
    }
}

s32 func_sc03_002_801827B0(arg0)
    s32 arg0;
{
    s32 var_v0;

    var_v0 = GetProgress() < 0x492;
    if (var_v0 == 0) {
        var_v0 = QueueImage((s32) &D_sc03_002_80189D2C);
    }
    return var_v0;
}

void func_sc03_002_801827EC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (InitModel(temp_v0, (s32) &D_sc03_002_801A58A4), PlaceObject((s32) arg0, (s32) &D_sc03_002_80189CFC), func_sc03_002_801827B0(), ((GetProgress() < 0x492U) == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    SpawnActorArg(0x3BF, 0, (s32) arg0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc03_002_80182884(StageActor *arg0) {
    D_sc03_002_80189DA4[arg0->state]();
}

void FlagEventRun(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (g_PlayerFlags & 0x08000000) {
            arg0->stateCount = 1U;
            StartEvent((s32) arg0, (s32) &D_sc03_002_80189D4C);
            return;
        }
        return;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            SetFlag(0x10B, 1);
            FreeActor((s32) arg0);
        }
        break;
    }
}

void FlagEventInit(StageActor *arg0) {
    if ((GetProgress() != 0x14) || (GetFlag(0x10B) & 0xFF)) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->state = 1;
    arg0->stateCount = 0;
}

s32 func_sc03_002_801829C4(s32 a0) {
    if (D_8012704C != 0) {
        return 0;
    }
    if (a0 >= 0x85 && a0 < 0x87) {
        return 0x93;
    }
    if (a0 >= 0x384 && a0 < 0x3F2) {
        return 0x65;
    }
    if (a0 >= 0x64 && a0 < 0x82) {
        return 0x28;
    }
    if (g_Daytime != 1) {
        return 0x10;
    }
    return 0xF;
}

void func_sc03_002_80182A30(u8 *arg0) {
    SV8 v;

    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    func_sc03_002_80182A78((u8 *)&v, AF(arg0, s32, 0x1C));
}

void func_sc03_002_80182A78(u8 *o, s32 n) {
    SV8 v[4];
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

    if ((u32)(n - 1) >= 0x1D) {
        return;
    }
    i = 0;
    LoadWorldScreenMatrix();
    r = rsin((n << 11) / 30);
    h = (r << 8) >> 12;
    a = n << 4;
    for (; i < 6; i++, a = b) {
        AngleToVec2(&w, a, 0x20);
        x = *(UXY *)&w;
        b = a + 0x2AA;
        v[0].x = AF(o, u16, 0) + x.s.x;
        v[0].y = AF(o, u16, 2);
        v[0].z = AF(o, u16, 4) + x.s.y;
        v[2].x = AF(o, u16, 0) + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[2].y = AF(o, u16, 2) - h;
        v[2].z = AF(o, u16, 4) + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        AngleToVec2(&w, b, 0x20);
        x = *(UXY *)&w;
        v[1].x = AF(o, u16, 0) + x.s.x;
        v[1].y = AF(o, u16, 2);
        v[1].z = AF(o, u16, 4) + x.s.y;
        v[3].x = AF(o, u16, 0) + ((x.s.x * (r * 3 + 0x1000)) >> 12);
        v[3].y = AF(o, u16, 2) - h;
        v[3].z = AF(o, u16, 4) + ((x.s.y * (r * 3 + 0x1000)) >> 12);
        p = AllocPrim(0x24);
        AF(p, s32, 4) = D_sc03_002_80189DAC[i];
        AF(p, s32, 0xC) = D_sc03_002_80189DAC[i + 1];
        p[7] = 0x3A;
        AF(p, s32, 0x1C) = 0;
        AF(p, s32, 0x14) = 0;
        AF(p, u32, 0) = 0x08000000;
        z = RotTransPers(&v[0], p + 8, &pp, &flag);
        RotTransPers(&v[1], p + 0x10, &pp, &flag);
        RotTransPers(&v[2], p + 0x18, &pp, &flag);
        RotTransPers(&v[3], p + 0x20, &pp, &flag);
        AddPrim(g_WorldOtOrg[D_800B9A02[0]].ot + z, p);
        AddDrawModeAt(z, 1);
    }
}

void func_sc03_002_80182D48(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc03_002_80182D58(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc03_002_80182D68(StageActor *arg0, s32 arg1) {
    s16 temp_a1;
    ModelObj *temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc03_002_801A832C;
    }
    arg0->ext1 = var_s0;
    if (AF(var_s0, s32, 0) != 0) {
        temp_v0 = AllocActorModel();
        arg0->model = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return 0;
        }
        InitModel(temp_v0, AF(var_s0, s32, 0));
        goto block_6;
    }
block_6:
    temp_a1 = AF(var_s0, s16, 0x12);
    if (temp_a1 != -1) {
        arg0->ext0 = FindActorByKindArg(0x61, (s32) temp_a1);
    }
    return 1;
}

void func_sc03_002_80182E04(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 4));
}

s32 func_sc03_002_80182E30(StageActor *arg0) {
    return SetScript(arg0, AF(arg0->ext1, s32, 8));
}

void func_sc03_002_80182E5C(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 0xC));
}

s32 func_sc03_002_80182E88(u8 *arg0) {
    s32 o[2];
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x64);
    if (AF(AF(p, void *, 0xCC), u16, 2) != 2) {
        return 0;
    }
    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    WorldToActorLocal((s32) AF(p, void *, 0xCC), (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0xC0, 0x40, -0x60, 0);
}

s32 func_sc03_002_80182F0C(o)
u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, d;
    g = &g_Status;
    k = D_sc03_002_801A8440[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_sc03_002_801CB9C0[0] = 0;
        return 0;
    }
    n = func_sc03_002_801830B0();
    h = g_ClockHour;
    q = n / 24;
    r = n % 24;
    d = g_Day;
    if (n == 0) {
        i = D_sc03_002_801A8474[h] - 1;
    } else if (d - q >= 5) {
        i = 7;
    } else if (d == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_sc03_002_801A8474[i] - 1;
    }
    D_sc03_002_801CB9C0[0] = 1;
    return D_sc03_002_801A8340[i][k];
}

void func_sc03_002_8018303C(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc03_002_80182F0C();
    func_sc03_002_80183070((s32) arg0);
}

void func_sc03_002_80183070(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = g_ClockHour + (g_Day * 0x18);
}

s32 func_sc03_002_801830B0(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc03_002_801830D8(StageActor *arg0) {
    D_sc03_002_801A84A4[arg0->state]();
}

void func_sc03_002_80183114(void) {
}

void func_sc03_002_8018311C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) g_ClockHour >= arg1 && (s32) g_ClockHour < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc03_002_80183158(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) g_ClockHour >= arg0) {
        var_v0 = (s32) g_ClockHour < arg1;
    }
    return var_v0;
}

extern u8 g_ClockMinute;

typedef union { s16 w; struct { u8 lo, hi; } b; } ClockDiff;

s32 func_sc03_002_8018317C(s32 a0, s32 a1, s32 a2, s32 a3) {
    ClockDiff lo;
    ClockDiff hi;

    lo.b.hi = a0;
    lo.b.lo = a1;
    hi.b.hi = a2;
    hi.b.lo = a3;
    if (lo.w <= *(s16 *)&g_ClockMinute) {
        if (*(s16 *)&g_ClockMinute < hi.w) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_002_801831D4(StageActor *o, s32 n) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = (u16)o->pos[0].h.i;
    a.y = (u16)o->pos[1].h.i;
    a.z = (u16)o->pos[2].h.i;
    b.x = 0;
    b.y = 0;
    b.z = -n;
    FaceHelper(o, &b, &c);
    CollidePath(&a, &c, 0);
}

void func_sc03_002_8018323C(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_002_801A84AC | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc03_002_8018325C(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_002_80183264(s32 arg0, s32 arg1) {
    HideModel(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    PlaceObject(arg0, arg1);
}

s32 func_sc03_002_801832AC(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc03_002_80183308(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc03_002_8018337C(void) {
    s32 r;

    r = GetProgress();
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

s32 func_sc03_002_801833F0(void) {
    s32 r;

    r = GetProgress();
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

void func_sc03_002_8018344C(s32 arg0, s32 arg1) {
    if (GetProgress(arg0, arg1) == 0x3A2) {
        SetProgress(0x3AC);
    }
}

s32 func_sc03_002_80183480(u8 *o, s16 *t, s32 mode, s32 b) {
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
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, &v);
    return StopMotion(o);
}

s32 func_sc03_002_80183550(u8 *a) {
    SV8 t;
    s32 s;

    if (GetPlayerAction(a) != 0) {
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
    if (IsPlayerAsleep() != 0) {
        AF(AF(a, u8 *, 0x20), s16, 0x12) = HeadingToPoint(a + 4, &t);
        s *= 8;
    } else {
        AF(AF(a, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(a, u8 *, 0x20), s16, 0x12), HeadingToPoint(a + 4, &t), 4);
    }
    SetForwardVelocity(a, -s);
    MoveObject(a);
    AF(a, u16, 0xA) -= 0x10;
    SnapToGround(a);
    if (IsPlayerAsleep() != 0) {
        if (GroundDistSqTo(a, &t) <= 0x1000) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    } else {
        if (GroundDistSqTo(a, &t) <= 0x100) {
            if (AF(a, u8, 0x108) == 0) {
                AF(a, s16, 0x106)++;
            } else {
                AF(a, s16, 0x106)--;
            }
        }
    }
    return 0;
}

s32 func_sc03_002_80183718(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (IsPlayerAsleep() != 0) {
        return 2;
    }
    return 1;
}

void func_sc03_002_80183760(u8 *arg0) {
    D_sc03_002_801A84C4[AF(arg0, u16, 2)]();
}

void func_sc03_002_8018379C(void) {
}

void func_sc03_002_801837A4(void) {
}

void func_sc03_002_801837AC(void) {
}

void func_sc03_002_801837B4(void) {
}

void func_sc03_002_801837BC(void) {
}

void func_sc03_002_801837C4(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ZeroFill((s32) &D_sc03_002_801CBAB0, 0x14, arg2, arg3);
    D_sc03_002_801CB9C4 = 0;
    RejectSpawn(arg0);
}

void func_sc03_002_80183808(void) {
}

void func_sc03_002_80183810(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_002_801B1090);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    PlaceObject(arg0, (s32) &D_sc03_002_801A84BC);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_002_80183898(StageActor *a) {
    s16 v;
    s16 w;
    u32 k;

    v = a->work10A;
    if (v > 0) {
        a->work10A = v - 1;
    }
    w = a->work108;
    if (w != 0) {
        a->step = w;
        a->work108 = 0;
    }
    k = (u32)a->step;
    switch (k) {
    case 1:
        if ((a->state != 2 || a->stateCount == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc03_002_80183F24(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc03_002_80183EB0(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((a->state != 2 || a->stateCount == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc03_002_80183F84(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc03_002_80183E48(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (a->state != 2 || a->stateCount == 0) {
            func_sc03_002_80183EB0(a);
        }
        break;
    case 4:
        if (a->state != 2 || a->stateCount == 0) {
            func_sc03_002_80183E48(a);
        }
        break;
    }
    D_sc03_002_801A879C[a->state](a);
}

void func_sc03_002_80183A70(StageActor *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    a->model = m = AllocActorModel(a, arg1);
    if (m == 0) {
        RejectSpawn(a);
        return;
    }
    k = a->param;
    p = &D_sc03_002_801A850C[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc03_002_801A84CC + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        InitModel(m, *(s32 *)((u8 *)D_sc03_002_801A84CC + *p * 8));
        break;
    }
    MapPartsTmd(*(s32 *)((u8 *)D_sc03_002_801A84D0 + *p * 8));
    SetModelCullBox(a->model, 0xC8, 0xB4);
    a->hitData = (u32)&D_sc03_002_801A84E4 | 0x40000000;
    a->hitState = 0x800;
    a->model->pose = &D_sc03_002_801A8500;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc03_002_801A84F4;
    a->work10A = 6;
    func_sc03_002_80183E48(a);
    a->message = func_sc03_002_80184218;
}

void func_sc03_002_80183C10(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        func_sc03_002_8018431C(o);
        o->stateCount = 2;
        break;
    case 2:
        if (IsEventDone((s32) o) != 0) {
            EndEvent((s32) o);
            o->stateCount = 0;
        }
        break;
    }
}

void func_sc03_002_80183C8C(StageActor *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc03_002_80183718() == 2) {
        func_sc03_002_80183EB0(arg0);
    }
    temp_v0 = (u16)arg0->unk84 + 1;
    arg0->unk84 = temp_v0;
    if ((s16) temp_v0 == 8) {
        PlaySoundAtActor(arg0, 0x514, 0);
    }
    temp_v0_2 = (u16)arg0->work100 + (u16)arg0->work102;
    arg0->work100 = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x50) {
        arg0->work100 = 0x50U;
    }
    temp_v0_3 = (u16)arg0->workFE + (u16)arg0->work100;
    arg0->workFE = temp_v0_3;
    if ((s16) temp_v0_3 >= 0x600) {
        func_sc03_002_80183EB0(arg0);
    }
    func_sc03_002_80184498(arg0);
}

void func_sc03_002_80183D58(StageActor *arg0) {
    func_sc03_002_80184498(arg0);
}

void func_sc03_002_80183D78(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc03_002_80183718() == 2) {
        func_sc03_002_80183E48(arg0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer(arg0) != 0) {
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
            PlaySoundAtActor(arg0, 0x515, 0);
            func_sc03_002_80183E48(arg0);
            return;
        }
        func_sc03_002_80184498(arg0);
    }
}

void func_sc03_002_80183E48(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_002_801A84D0 + ((D_sc03_002_801A850C[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_002_80184498(arg0);
}

void func_sc03_002_80183EB0(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_002_801A84CC + ((D_sc03_002_801A850C[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_002_80184498(arg0);
}

void func_sc03_002_80183F24(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_002_801A84CC + ((D_sc03_002_801A850C[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc03_002_80183F84(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc03_002_801A84CC + ((D_sc03_002_801A850C[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc03_002_80184498(arg0);
}

void func_sc03_002_80184004(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *end;

    p = (u8 *)&g_Actors;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (*(u16 *)p == 0x61 && AF(p, s16, 0x70) == arg0) {
            AF(p, s32, 0xB0) = arg1;
            return;
        }
    }
}

void func_sc03_002_8018405C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc03_002_801845D8(arg0, 0x3C);
    }
}

void func_sc03_002_801840BC(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc03_002_80184104(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc03_002_801845D8(arg0, 0x3C);
    }
}

void func_sc03_002_80184154(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_sc03_002_8018418C(s32 arg0) {
    s32 t;

    t = FindActorByKindArg(0x61, (s16) arg0);
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

void *func_sc03_002_80184218(StageActor *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (o->state != 2) return 0;
    if (o->stateCount != 0) return 0;
    if (o->work10A != 0) return 0;
    if (!func_sc03_002_801842BC(o)) return 0;
    if (func_sc03_002_80184854(o)) return 0;
    o->stateCount = 1;
    ResetScriptVM();
    return &CallActionHandler;
}

s32 func_sc03_002_801842BC(StageActor *arg0) {
    s32 o[2];
    FeSv v;

    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    WorldToActorLocal(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc03_002_8018431C(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &g_Status;
    v = GetProgress();
    s0 = D_sc03_002_801A8754[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc03_002_801A8724;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc03_002_801A8724;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)GetFlag(0xFA) != 0) s0 = &D_sc03_002_801A873C;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc03_002_801A8724;
        if ((u32)(v - 100) < 500) s0 = &D_sc03_002_801A873C;
        if (func_sc03_002_801833F0() == 1) s0 = &D_sc03_002_801A873C;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc03_002_801A8724;
        if (func_sc03_002_801832AC() == 3) s0 = &D_sc03_002_801A873C;
        if (func_sc03_002_801833F0() == 1) s0 = &D_sc03_002_801A873C;
        break;
    }
    RunScript(o, s0);
}

s32 func_sc03_002_80184498(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc03_002_801844CC(arg0);
}

s32 func_sc03_002_801844CC(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc03_002_80184500(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc03_002_80184564(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc03_002_801845D8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc03_002_80184630(StageActor *arg0) {
    D_sc03_002_801A87C0[arg0->state]();
}

void func_sc03_002_8018466C(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->hitData = (s32) ((s32) &D_sc03_002_801A87B0 | 0x40000000);
    arg0->stateCount = 0;
    arg0->timer = 0;
    arg0->hitState = 0x800;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_002_801846E8(StageActor *o) {
    u8 *p;
    u8 *best;
    s32 min;
    s32 d;
    u8 *end;
    p = &g_Actors;
    min = 0x7FFF;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0x61) {
            d = DistSqToPlayer(p);
            if (d < min) {
                min = d;
                best = p;
            }
        }
    }
    if (min == 0x7FFF) {
        o->hitState = 0;
        return;
    }
    p = best;
    o->pos[0].w = AF(p, s32, 4);
    o->pos[1].w = AF(p, s32, 8);
    o->pos[2].w = AF(p, s32, 0xC);
    AF(o->model, SV8, 0x10) = AF(AF(p, u8 *, 0x20), SV8, 0x10);
    o->model->rot.vy -= AF(p, u16, 0xFE);
    o->hitState = 0x800;
}

s32 func_sc03_002_80184808(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc03_002_80184854((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_sc03_002_80184854(StageActor *o) {
    SV8 xy;
    SV8 v;
    u8 *p;
    u8 *q;
    u8 *end;
    p = &g_Actors;
    end = p + 0x6480;
    for (; p != end; p += 0x10C) {
        if (AF(p, u16, 0) == 0) continue;
        if (AF(p, u16, 0) == 0x61) continue;
        if (func_sc03_002_80184960(p) == 0) continue;
        q = AF(p, u8 *, 0x20);
        if (q == 0) continue;
        if (AF(q, s32, 0x24) == 0) continue;
        if (AF(q, s32, 4) < 0) continue;
        v.x = AF(p, s16, 6);
        v.y = AF(p, s16, 0xA);
        v.z = AF(p, s16, 0xE);
        WorldToActorLocal(o, &v, &xy);
        if (func_8012CB64(&xy, -0xA0, 0x80, -0xC0, 0x80)) return 1;
    }
    return 0;
}

s32 func_sc03_002_80184960(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc03_002_801A87C8; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc03_002_801849BC(StageActor *arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc03_002_801A855C, (s32) sp10);
    AF(D_sc03_002_801CBAD4, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

void func_sc03_002_801849FC(StageActor *arg0) {
    D_sc03_002_801BDC58[arg0->state]();
}

void func_sc03_002_80184A38(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc03_002_801BDC38[AF(arg0, s16, 0xFC)];
    if (D_sc03_002_801BDC38[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc03_002_801BDC38[0];
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

void func_sc03_002_80184AFC(u8 *arg0) {
    D_sc03_002_801BDC6C[AF(arg0, u16, 2)]();
}

void func_sc03_002_80184B38(StageActor *arg0) {
    s16 n;

    arg0->unkFC = 0;
    arg0->timer = 1;
    n = (u16)arg0->param & 7;
    arg0->workFE = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc03_002_80184A38(arg0, -0x80);
        func_sc03_002_80184A38(arg0, -0x30);
        func_sc03_002_80184A38(arg0, 0x20);
        func_sc03_002_80184A38(arg0, 0x70);
        func_sc03_002_80184A38(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc03_002_80184A38(arg0, -0x58);
        func_sc03_002_80184A38(arg0, -8);
        func_sc03_002_80184A38(arg0, 0x48);
        func_sc03_002_80184A38(arg0, 0x98);
        func_sc03_002_80184A38(arg0, 0xE8);
    }
    NextState(arg0);
}

void func_sc03_002_80184C20(s32 arg0, s32 arg1) {
    
    if (TickTimer(arg0) != 0) {
        AF(arg0, s32, 0x1C) = AF(arg0, s16, 0xFE);
        func_sc03_002_80184A38(arg0, 0x110);
    }
}

void func_sc03_002_80184C60(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind1(temp_s0, (s32) &D_sc03_002_801BDC60, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_002_80184CE8(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        FreeProp((s32) arg0);
    }
}

void func_sc03_002_80184D30(StageActor *arg0) {
    s32 r;
    s32 flag;
    u16 t;

    r = GetProgress();
    flag = 0;
    switch (arg0->param) {
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
        SpawnActorArg(0x21, 1 - arg0->state, arg0);
        FreeActor(arg0);
        return;
    }
    t = arg0->state;
    if (t == 0) {
        arg0->state = t + 1;
    }
}

void func_sc03_002_80184DDC(StageActor *arg0) {
    D_sc03_002_801C2E5C[arg0->state]();
}

void func_sc03_002_80184E18(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_002_801C2D70) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc03_002_80185828);
        SpawnTalkMarker(arg0, (s32) &func_sc03_002_80184F10);
    }
}

void func_sc03_002_80184E7C(void) {
}

void func_sc03_002_80184E84(StageActor *arg0) {
    RunScript((s32) arg0, D_sc03_002_801C2E38[arg0->param]);
    arg0->state = 3;
}

void func_sc03_002_80184ED0(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_002_80184F10(u8 *arg0) {
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

s32 func_sc03_002_80184F6C(void) {
    s32 r;

    if ((s16)g_PlayerX < 0x400) {
        r = 0;
    } else if ((s16)g_PlayerX >= 0x501) {
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

void func_sc03_002_80184FD0(Mover *arg0) {
    arg0->state = 2;
    arg0->model->rot.vy = -0x600;
    UpdateModelZYX(arg0);
}

s32 func_sc03_002_80185000(Mover *arg0) {
    arg0->state = 4;
    arg0->model->rot.vy = 0x600;
    UpdateModelZYX(arg0);
}

void func_sc03_002_80185030(u8 *o) {
    u8 *r;
    s32 s1;
    r = AllocActorModel();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, AF(o, s16, 0x70) == 0 ? &D_sc03_002_801C8A3C : &D_sc03_002_801C8B2C);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc03_002_801C8B44[AF(o, s16, 0x70)] | 0x40000000;
    PlaceObject(o, D_sc03_002_801C8B34[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = GetProgress();
    if ((u8)GetFlag(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            SpawnTalkMarker(o, func_sc03_002_801851DC);
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
            UpdateModelZYX(o);
        } else {
            AF(o, s16, 0x2) = 4;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
            UpdateModelZYX(o);
        }
    }
}

void func_sc03_002_801851A0(StageActor *arg0) {
    D_sc03_002_801C8C74[arg0->state]();
}

s32 *func_sc03_002_801851DC(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc03_002_80184F6C() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            ResetScriptVM();
            return &CallActionHandler;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc03_002_80185258(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    PlaySoundId(0x7A0, 0);
    SetFlag(0xF6, 1);
    func_800D0F4C(0x59);
    temp_v0 = FindActorByKindArg(0x1F2, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

s32 func_sc03_002_801852C8(void) {
    return D_sc03_002_801CB9C8 == 2;
}

void func_sc03_002_801852E0(void) {
    PlaySoundId(0x7E0, 0);
}

void func_sc03_002_80185304(StageActor *o) {
    ModelObj *p;
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            RunScript(o, &D_sc03_002_801C8BB4);
            o->stateCount = 2;
        } else {
            RunScript(o, &D_sc03_002_801C8BCC);
            o->stateCount = 3;
        }
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->state = 1;
            o->stateCount = 0;
        }
        break;
    case 3:
        IsEventDone(o);
        o->timer = 0;
        break;
    case 4:
        IsEventDone(o);
        p = o->model;
        p->rot.vy -= 0x20;
        o->timer++;
        if (o->timer >= 0x30) {
            o->stateCount = 5;
        }
        break;
    case 5:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            func_sc03_002_80184FD0(o);
        }
        break;
    }
}

void func_sc03_002_80185438(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (TickTimer((s32) arg0, arg1) != 0) {
            func_sc03_002_80185000((s32) arg0);
        }
    }
}

void func_sc03_002_801854A0(void) {
}

void func_sc03_002_801854A8(void) {
}
