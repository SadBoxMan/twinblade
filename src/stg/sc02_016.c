#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_016_8017BE9C(void) {
}

void func_sc02_016_8017BEA4(void) {
}

void func_sc02_016_8017BEAC(void) {
}

void func_sc02_016_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_016_80187E80[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_016_80187E68;
extern void (*D_sc02_016_80187E88[])();
extern u8 D_sc02_016_80187E74;
extern void (*D_sc02_016_80187FA0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc02_016_8017C294();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void (*D_sc02_016_80187FF8[])();
extern s32 PlaySe();
extern void func_sc02_016_8017D408();
extern void (*D_sc02_016_8018800C[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc02_016_80188020[])();
extern void func_800D22E4();
extern void func_sc02_016_8017DB00();
extern void (*D_sc02_016_80188078[])();
void func_sc02_016_8017ED30(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc02_016_80188080[])();
void func_sc02_016_8017ED58(void);
extern void func_800D1EBC();
extern u8 D_sc02_016_8018808C;
extern void StartPlayerActionScript();
extern u8 D_sc02_016_80188098;
extern void func_sc02_016_8017EE24();
extern void (*D_sc02_016_801880AC[])();
extern void (*D_sc02_016_801880FC[])();
extern void (*D_sc02_016_801884B0[])();
extern void NextState();
extern void (*D_sc02_016_801886F0[])();
extern void (*D_sc02_016_80188728[])();
extern void func_sc02_016_80182E34();
extern void (*D_sc02_016_801A41D4[])();
extern void (*D_sc02_016_801A41D8[])();
extern void (*D_sc02_016_801A4514[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc02_016_801847A8;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc02_016_801A4204;
extern s32 * func_sc02_016_801839A0();
extern s32 D_sc02_016_801A426C[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc02_016_801A4438;
extern s32 D_sc02_016_801A443C;
extern s32 D_sc02_016_801A4450;
extern s32 D_sc02_016_801A4464;
extern s32 D_sc02_016_801A44D0;
extern s32 D_sc02_016_801A43B4[];
extern s32 D_sc02_016_801A4330[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc02_016_80183748();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc02_016_801A453C[])();
extern u8 D_sc02_016_801A4238;
extern u8 D_sc02_016_801A49DC;
extern u8 D_sc02_016_801A4BFC;
extern u8 D_sc02_016_801A49EC;
extern u8 D_sc02_016_801A4AF4;
extern void (*D_sc02_016_801B0758[])();
extern void (*D_sc02_016_801B076C[])();
extern void (*D_sc02_016_801B0A68[])();

void func_sc02_016_8017BEBC(u8 *arg0) {
    D_sc02_016_80187E80[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017BEF8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    SpawnEffect(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
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
        m = SpawnEffect(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc02_016_80187E68, 0xFD);
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
        FreeEffect(a);
    }
}

void func_sc02_016_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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
        FreeEffect((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc02_016_8017C150(u8 *arg0) {
    D_sc02_016_80187E88[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_016_80187E74, 0x18);
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
    FreeEffect(arg0);
}

void func_sc02_016_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        FreeEffect((s32) arg0, temp_a1, arg2, arg3);
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

extern void HidePlayerScene();
extern void SetPlayerFlag7E2();

extern u8 D_sc02_016_801886BC;
extern void (*D_sc02_016_801886E4[])();
extern void StartRumbleScript();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern s32 func_sc02_016_80182274();
extern s32 NextObjState();
extern void PlaySePositional();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern s8 D_sc02_016_801B42EB;
extern void SetObjTimer();
extern void func_801495C4();
extern s32 TickObjTimer();
extern void func_sc02_016_80182874();
extern s32 D_sc02_016_801B4960;
extern s32 SpawnActor();

extern u8 D_sc02_016_80188450;
extern u8 D_sc02_016_801AF9CC;
extern u8 D_sc02_016_801AFD14;
extern s32 func_sc02_016_80181054();
extern u8 D_sc02_016_801B03E4;
extern u8 D_sc02_016_801B02EC;
extern s32 MoveCollidePassable();
extern void func_sc02_016_80180728();
extern s32 D_sc02_016_80188630;
extern s32 DistSqToTarget();
extern void func_sc02_016_8018140C();
extern s32 RestoreSavedCamera();
extern s32 func_sc02_016_80182E14();
extern void SetLocalVelocity();
extern s32 TickTimer();
extern u8 D_800D3918;
extern s32 ActorSegmentDamagesPlayer();
extern s32 g_PlayerAction;
extern u8 D_sc02_016_801B0744;
extern u8 D_sc02_016_801B0750;
extern s32 SpawnPropFrom();
extern u8 D_sc02_016_801B0A14;

extern s32 D_sc02_016_8018861C;
extern u8 D_sc02_016_801B062C;
extern s32 D_sc02_016_801B42D0;
extern u8 D_sc02_016_80188620;
extern s32 TargetInSight();
extern void func_sc02_016_801804F8();
extern void SetReactionStep();

extern u8 D_sc02_016_801B42D8[];

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
extern void StopMotion();
extern s32 SetState();
extern void (*D_sc02_016_801880EC[])();
extern void func_sc02_016_8017F33C();
extern void func_sc02_016_8017F630();
extern void UpdateClockTint();
extern void func_sc02_016_8017FB54();
extern void (*D_sc02_016_80188514[])();
extern void DespawnIfFar();
extern u8 D_sc02_016_801AF924;
extern s32 PlayerEvent10();
extern void func_sc02_016_80182D54();
extern void SetMoverTimer();

extern void ClearTimeChime();
extern void func_800D0C74();
extern void func_800D1E28();

extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s32 func_sc02_016_8017F264();

void func_sc02_016_8017F228(s32 arg0);

extern u8 D_sc02_016_801AFF2C;
extern s32 StopWithGravity();

extern u8 D_sc02_016_801886C4;
extern s32 ShowQueuedDamageNumber();
extern s32 SetPlayerMotion();
extern s32 ClearPlayerHittable();
s32 func_sc02_016_80182488();
extern s32 SetPlayerEvent100();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc02_016_80187F50;
extern u8 D_sc02_016_80187EEC[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern void SetShapeCircle();
extern u8 D_sc02_016_801B3FB8;
extern u8 D_sc02_016_801B3FB9;
extern u8 D_sc02_016_801B3FBA;
extern u8 D_sc02_016_801B3FBC;
extern u8 D_sc02_016_801B3FBD;
extern u8 D_sc02_016_801B3FBE;
extern s32 D_sc02_016_801B41BC;
extern s32 D_sc02_016_801B41C0;
extern s32 D_sc02_016_801B41C4;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc02_016_801B1448;

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
extern s8 D_sc02_016_80187FCC[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

typedef struct { s32 x, y, z, pad; } V4;
extern void UpdateModelZYX();
extern u8 D_sc02_016_801B08E4;
extern u8 D_sc02_016_801B06BC;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 HeadingPitchTo();
extern void MoveObject();
extern u8 D_sc02_016_801B0760;

extern u8 D_sc02_016_801881A4;
extern void InitSpriteKind3();
extern void StartSpriteAnim();
extern u8 D_sc02_016_801AFDDC;
extern s32 TurnStepToTarget();
extern void SpawnKind1C();
extern void RestorePrevPos();
extern s32 MoveOnGround();
extern void SetForwardVelocity();
extern s32 func_sc02_016_8018035C();
extern void func_sc02_016_801815DC();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
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
extern u8 D_sc02_016_80187EB8;
extern u8 D_sc02_016_80187EF4;
extern u8 D_sc02_016_801B1420;
extern u8 D_sc02_016_801B3F48;
extern u8 D_sc02_016_801B3F54;
extern u8 D_sc02_016_801B3F55;
extern u8 D_sc02_016_801B3F56;
extern u8 D_sc02_016_801B3F64;
extern u8 D_sc02_016_801B3F65;
extern u8 D_sc02_016_801B3F66;
extern u8 D_sc02_016_801B3F75;
extern u8 D_sc02_016_801B3F76;
extern u8 D_sc02_016_801B3F78;
extern u8 D_sc02_016_801B3F79;
extern u8 D_sc02_016_801B3F7A;
extern u8 D_sc02_016_801B3F7C;
extern u8 D_sc02_016_801B3F7D;
extern u8 D_sc02_016_801B3F7E;
extern u8 D_sc02_016_801B3F84;
extern u8 D_sc02_016_801B3FF8;
extern void func_8001C810();

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc02_016_8017EF84();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern u8 D_sc02_016_801B42EC;
extern s32 func_sc02_016_80182734();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;

extern s32 DistSq();
extern s32 HeadingTo();
extern void AngleToVec2();
extern s32 CollidePath();

extern u8 D_sc02_016_801AFB14;
extern u8 D_sc02_016_801AFBBC;
extern u8 D_sc02_016_801AFC44;
extern u8 D_sc02_016_801B04DC;
extern void SpawnHeadMarker();
extern s32 HeadingToPoint();
extern void func_sc02_016_80180FE0();

extern u8 g_GroundNormal;
extern u8 D_sc02_016_801B0A30;
extern WMtx *D_sc02_016_801B0A64;
extern WMtx D_sc02_016_801B4940[];
extern s32 FindGround();
extern s8 D_sc02_016_801B0A1C[];

extern s32 SetScript();


extern s32 D_sc02_016_801B3F4C;
extern s32 D_sc02_016_801B3F50;
extern s32 D_sc02_016_801B3F58;
extern s32 D_sc02_016_801B3F5C;
extern s32 D_sc02_016_801B3F60;
extern s32 D_sc02_016_801B3F68;
extern s32 D_sc02_016_801B3F6C;
extern s32 D_sc02_016_801B3F70;

void func_sc02_016_8017C294(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc02_016_801B3F48 = D_sc02_016_801B3F58 = D_sc02_016_801B3F68 = v.vx;
    D_sc02_016_801B3F4C = D_sc02_016_801B3F5C = D_sc02_016_801B3F6C = v.vy;
    D_sc02_016_801B3F50 = D_sc02_016_801B3F60 = D_sc02_016_801B3F70 = v.vz;
}

void func_sc02_016_8017C3C4(StageActor *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (GetVar(*(u8 *)arg0->message + 0x3A) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    if ((s32)arg0->model == 0) {
        if (SetupActor(arg0, &D_sc02_016_80187EB8) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc02_016_801B1420);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_016_80187EF4);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc02_016_801B3F48;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc02_016_801B3F78;
        func_8001CD50(o, p);
        D_sc02_016_801B3F7A = 0x80;
        p[0] = 0x80;
        D_sc02_016_801B3F79 = 0xE0;
        D_sc02_016_801B3F7D = 0;
        D_sc02_016_801B3F7C = 0;
        D_sc02_016_801B3F7E = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc02_016_801B1448;
        b = (U12x9 *) &D_sc02_016_801B3FF8;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_016_801B3F76 = 0xFF;
        D_sc02_016_801B3F84 = 0xFF;
        D_sc02_016_801B3F66 = 0xFF;
        D_sc02_016_801B3F64 = 0xFF;
        D_sc02_016_801B3F56 = 0xFF;
        D_sc02_016_801B3F54 = 0xFF;
        D_sc02_016_801B3F75 = 0x80;
        D_sc02_016_801B3F65 = 0x80;
        D_sc02_016_801B3F55 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_016_801B3FF8;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            arg0->work10A = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc02_016_8017C750(u8 *arg0) {
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
        for (p = (u8 *) &g_Actors, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = PosDist(arg0 + 4, &g_PlayerPosX);
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
    func_sc02_016_8017C294(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_016_80187EEC[(s16) i]) {
                TakePlayerControl();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (DistSqToPlayer(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            StartEvent(arg0, &D_sc02_016_80187F50);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_016_8017C9C8(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc02_016_801B3FB8;
        func_8001CD50(o, p);
        D_sc02_016_801B3FB9 = 0xFF;
        D_sc02_016_801B3FBA = 0xFF;
        p[0] = 0xFF;
        D_sc02_016_801B3FBE = 8;
        D_sc02_016_801B3FBC = 8;
        D_sc02_016_801B3FBD = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_016_801B41BC;
        q[0] = v.vx;
        D_sc02_016_801B41C0 = v.vy;
        D_sc02_016_801B41C4 = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        arg0->state += 1;
    }
}

void func_sc02_016_8017CB10(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_016_801B1448;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc02_016_8017C294(arg0, 0);
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
        arg0->state += 1;
    }
}

void func_sc02_016_8017CC90(StageActor *arg0) {
    D_sc02_016_80187FA0[arg0->state]();
}

void func_sc02_016_8017CCCC(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc02_016_8017CD18(StageActor *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg0->message;
    temp_s2 = (s16 *)arg0->ext0;
    temp_s1 = arg0->ext1;
    if ((AF(temp_v1, u8, 1) != 0) && (arg0->work108 == 0)) {
        arg0->work108 = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc02_016_8017C294((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
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
extern void EnterPlayerStanding();
extern void func_80165718();
extern void PosToSVec();
extern s32 AllocSprite16To3E();
extern void func_8001CD9C();

typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc02_016_8018873C[];
extern CV *D_sc02_016_80188720[];

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern s32 StepSpriteAnim();
extern void FreeProp();
extern void MoveProp();

void func_sc02_016_8017CE0C(StageActor *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = (u8 *)arg0->message;
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (arg0->work108 == 0) {
            arg0->work108 = func_80128CFC(AF(p, u16, 2));
        }
        t = arg0->work108;
        v = t;
    }
    if (v != 0) {
        arg0->state++;
    }
}

void func_sc02_016_8017CE8C(StageActor *arg0) {
    SV8 sp10;
    SV8 sp18;
    ModelObj *temp_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)arg0->message;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        arg0->hitState = 0;
        arg0->hitData = 0;
        sp10.x = (u16)arg0->pos[0].h.i;
        sp10.y = (u16)arg0->pos[1].h.i;
        sp10.z = (u16)arg0->pos[2].h.i;
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        arg0->model->rot.vy = (s16) (sp18.y + 0x800);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_016_8017CF40(StageActor *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = (u8 *)arg0->ext1;
    d = (u8 *)arg0->message;
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        StartEvent((s32) arg0, AF(d, s32, 0xC));
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_016_8017CFAC(StageActor *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = (u8 *)arg0->message;
    if (IsEventDone((s32) arg0, arg1) != 0) {
        EndEvent((s32) arg0);
        SetVar(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            GiveItem(0x25);
        }
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_016_8017D038(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc02_016_8017D058(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_016_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc02_016_8017D0AC(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_016_8017D0E8(u8 *arg0) {
    D_sc02_016_80187FF8[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D1D0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            PlaySe((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D254(u8 *arg0) {
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
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            HidePlayerScene((s32) temp_s0);
            SetPlayerFlag7E2((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_016_8017D408(u8 *arg0) {
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
    SetScaleMatrix(&r, &m);
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
    SetMatrixTrans(&r, &m);
    t = D_sc02_016_80187FCC;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc02_016_80187FCC;
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
        DrawPrimG4Mtx(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc02_016_80187FCC;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            DrawPrimG4Mtx(&q, &m);
        }
    }
}

void func_sc02_016_8017D714(u8 *arg0) {
    D_sc02_016_8018800C[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D750(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D790(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D800(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        PlaySe((s32) AF(arg0, u16, 0x2C));
        ShowPlayerScene(temp_s1);
        ClearPlayerFlag7E2(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D88C(u8 *arg0) {
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
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc02_016_8017D9B4(u8 *arg0) {
    D_sc02_016_80188020[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D9F0(u8 *arg0) {
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

void func_sc02_016_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_016_8017DB00((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_016_8017DB00(u8 *arg0) {
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
    m = GsIDMATRIX;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &m);
}

void func_sc02_016_8017DC70(u8 *obj) {
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

void func_sc02_016_8017EB50(u8 *arg0) {
    D_sc02_016_80188078[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EB8C(u8 *arg0) {
    func_sc02_016_8017ED30();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_016_8017EBD0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc02_016_8017EBF4(u8 *arg0) {
    D_sc02_016_80188080[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EC30(u8 *arg0) {
    func_sc02_016_8017ED58();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 RoomExitStep(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0, arg2);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C74(1);
        PlaySoundId(4, 0x579);
        PlaySoundId(4, 0x578);
        PlaySoundId(4, 0x57A);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_016_8017ED10(void) {
    func_800D1EBC();
}

void func_sc02_016_8017ED30(void) {
    StartPlayerActionScript((s32) &D_sc02_016_8018808C, 0x01000000);
}

void func_sc02_016_8017ED58(void) {
    StartPlayerActionScript((s32) &D_sc02_016_80188098, 0x01000000);
}

void func_sc02_016_8017ED80(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x320;
    g_CameraAngleTarget = 0xAA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_016_8017EE24, 0);
    SnapCamera((s32) &g_Camera);
    func_sc02_016_8017EE24((s32) &g_Camera);
}

void func_sc02_016_8017EE24(s32 arg0) {
    D_sc02_016_801880AC[AF(arg0, u8, 4)]();
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
typedef struct { s32 v; } S32R;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern void ResetScriptVM();
extern s32 TargetInFront();
extern s32 PathHitsModel();
extern void *g_PlayerModel;
extern void CallActionHandler();
extern SV8 D_sc02_016_801A452C[];

extern s32 TraceMap();
extern s32 func_sc02_016_801806DC(s32 arg0);

extern s32 TurnStep();
extern void HideModel();
extern u8 D_sc02_016_80188654;
extern u8 D_sc02_016_80188660;
extern s32 GetObjPadPressed();
extern s16 D_sc02_016_801880B0[];
typedef struct { s16 x, y, z, w, f, g, h, i; s32 j; } Arg15DC;
extern s16 D_sc02_016_8018864C;
extern s16 D_sc02_016_8018864E;
extern s16 D_sc02_016_80188650;
extern s32 func_sc02_016_80183EE0();
extern void SpawnActorFromDef();
extern s32 D_sc02_016_80188618;
extern void func_sc02_016_80180B30();
s32 func_sc02_016_8018096C(StageActor *arg0);

void func_sc02_016_8017EE60(u8 *o) {
    FeSv v;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_016_801880B0[AF(o, u8, 5)];
    }
    if (D_80126942 < -0x200) { AF(o, s16, 0x20) = 0xAA; } else { AF(o, s16, 0x20) = 0x18D; }
    if (g_CameraFocus[0] < -0x380) {
        v.x = -0x380;
    } else if (g_CameraFocus[0] > 0x2A0) {
        v.x = 0x2A0;
    } else {
        v.x = g_CameraFocus[0];
    }
    if (D_80126942 < -0x460) {
        v.y = -0x460;
    } else {
        v.y = D_80126942;
    }
    if (D_80126944 > -0x140) {
        v.z = -0x140;
    } else {
        v.z = D_80126944;
    }
    func_sc02_016_8017EF84(o, &v);
}

void func_sc02_016_8017EF84(u8 *arg0, u8 *arg1) {
    FeMtx m;
    FeSv v;
    FeSv o;

    AF(arg0, s32, 8) = (s16) EaseValue(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) EaseValue(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = EaseAngle(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = EaseAngle(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = EaseAngle(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = EaseValue(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = EaseValue(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = EaseValue(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
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
    LocalToWorld(&m, &v, &o);
    AF(arg0, s32, 0x3C) = o.x;
    AF(arg0, s32, 0x40) = o.y;
    AF(arg0, s32, 0x44) = o.z;
}

extern s32 D_800AF648[];
extern u16 D_800AF7BE;
extern u8 *D_sc02_016_8018850C[];
extern void func_sc02_016_801802C8();
extern s32 MoveCollide();
extern s32 rsin();

extern void (*D_sc02_016_8018866C[])();
extern u8 g_ClockHour;
extern void ShowModel();
extern void GainStat0FromActor();
extern void DespawnActor();
extern u8 D_sc02_016_8018852C;
extern u8 D_sc02_016_801885C8;
extern void SpawnShadow();

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

extern s32 func_sc02_016_80181028();

extern u8 D_sc02_016_80188634;


extern void SaveCamera();
extern void StartCameraBlend();
extern s32 D_801269E4;

extern s16 g_PlayerX;
extern s16 D_80126B66;
extern s32 SVecDistSq();
extern u8 D_sc02_016_801B41C8[];
extern void CopyPropPos();
extern void InitNullModel();
extern u8 D_sc02_016_80188104[];

void func_sc02_016_8017F11C(StageActor *o) {
    if (o->unkFC == 0) {
        o->vel[1] = 0x80000;
    } else {
        o->vel[1] = -0x80000;
    }
    SetState(o, 1);
}

s32 func_sc02_016_8017F154(s32 arg0) {
    StopMotion(arg0);
    AF(arg0, s32, 0x1C) = 0x20;
    return SetState(arg0, 2);
}

void func_sc02_016_8017F190(StageActor *o) {
    o->workFE = (u16)o->pos[0].h.i;
    o->work100 = (u16)o->pos[1].h.i;
    o->work102 = (u16)o->pos[2].h.i;
    SetState(o, 3);
}

void func_sc02_016_8017F1C8(StageActor *arg0) {
    D_sc02_016_801880EC[arg0->state]();
    if (AF(arg0, u8, 0x70) == 0) {
        func_sc02_016_8017F33C((s32) arg0);
    }
}

void func_sc02_016_8017F228(s32 arg0) {
    if (func_sc02_016_8017F264() != 0) {
        g_PlayerHitKind = 0x4018;
        g_PlayerHitDamage = 0x10;
    }
}

extern u32 D_sc02_016_801B4288;
extern u16 D_sc02_016_80188144[];
extern u16 D_sc02_016_801B428C[];
extern u8 D_sc02_016_80188184;
extern void QueueImage();
extern s32 SpawnPropAt();
typedef struct { u8 b[4]; } B4;
extern B4 D_sc02_016_801B2BCC;
extern B4 D_sc02_016_801B2BD0;

extern s32 ActorSegmentHitsPlayer();
extern u16 D_sc02_016_801880E0;
extern u16 D_sc02_016_801880E2;
extern u16 D_sc02_016_801880E4;
extern u16 D_sc02_016_801880E6;
extern u16 D_sc02_016_801880E8;
extern u16 D_sc02_016_801880EA;
extern void SetScriptCopy();
extern u8 D_sc02_016_801A2D40;
extern u8 D_sc02_016_801A2EC4;
s32 func_sc02_016_8017F434(u8 *o);

s32 func_sc02_016_8017F264(StageActor *o) {
    SV8 a, b;

    a.y = b.y = 0;
    a.z = b.z = 0;
    a.x = D_sc02_016_801880E0;
    b.x = D_sc02_016_801880E2;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.x = b.x = 0;
    a.y = D_sc02_016_801880E4;
    b.y = D_sc02_016_801880E6;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = 0;
    a.z = D_sc02_016_801880E8;
    b.z = D_sc02_016_801880EA;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    return 0;
}

void func_sc02_016_8017F33C(u8 *o) {
    u8 *p;
    s32 i;
    s32 min;
    s32 d;

    p = (u8 *)&g_Actors;
    min = 0x7FFFFFFF;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0xF4) {
            d = func_sc02_016_8017F434(p);
            if (d < min) {
                min = d;
            }
        }
    }
    if (min > 0x1FFFF) {
        if (AF(o, s16, 0x84) != 0) {
            PlaySoundId(4, 0x6DF);
            AF(o, s16, 0x84) = 0;
        }
    } else {
        PlaySoundId(0x6DF, (u16)((0x7F - min / 1024) | 0x1000));
        AF(o, s16, 0x84) = 1;
    }
}

s32 func_sc02_016_8017F434(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = g_PlayerX;
    a.y = D_80126B62;
    a.z = D_80126B66;
    b.x = AF(o, u16, 6);
    b.y = AF(o, u16, 0xA);
    b.z = 0;
    c.x = a.x;
    c.y = a.y;
    c.z = 0;
    return SVecDistSq(&b, &c);
}

void func_sc02_016_8017F4A0(u8 *arg0) {
    D_sc02_016_801880FC[AF(arg0, u16, 2)]();
}

void AmbienceByHeight(StageActor *o) {
    s16 y;

    if (o->state == 0) {
        PlaySoundId(0x578, 0);
        NextState(o);
        return;
    }
    y = D_80126B62;
    if (y < -0x480) {
        PlaySoundId(0x57A, 0x102F);
        PlaySoundId(0x579, 0x107F);
    } else if (y >= -0xDF) {
        PlaySoundId(0x57A, 0x107F);
        PlaySoundId(0x579, 0x1000);
    } else {
        PlaySoundId(0x57A, (u16)((((y + 0x480) * 80) / 0x3A0 + 0x2F) | 0x1000));
        PlaySoundId(0x579, (u16)((((D_80126B62 + 0x480) * -127) / 0x3A0 + 0x7F) | 0x1000));
    }
}

void func_sc02_016_8017F600(StageActor *arg0) {
    if (arg0->state == 0) {
        func_sc02_016_8017F630();
    }
}

void func_sc02_016_8017F630(StageActor *o) {
    ModelObj *t;

    t = AllocActorModel();
    o->model = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(t);
    o->hitState = 0x40;
    o->state++;
    AF(o, u8 *, 0x58) = D_sc02_016_80188104 + o->param * 16;
}

void LiftInit(StageActor *o) {
    u8 *p;
    u8 *q;

    if ((o->model = p = (u8 *)AllocActorModel()) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, &D_sc02_016_801A2D40);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x800;
    AF(p, u16, 0x2C) |= 0x10;
    SetScriptCopy(o, &D_sc02_016_801A2EC4);
    o->unk84 = 0;
    q = (u8 *)SpawnPropFrom(o, 0x2A);
    o->ext0 = q;
    if (q != 0) {
        AF(q, u16, 0x2C) = AF(o, u8, 0x70);
        AF(q, u16, 0x2E) = o->id;
        AF(q, u8 *, 0x30) = o;
    }
    if (o->param & 0x8000) {
        func_sc02_016_8017F190(o);
    } else {
        func_sc02_016_8017F11C(o);
    }
}

void LiftMove(u8 *o) {
    MoveObject(o);
    if (AF(o, s16, 0xFC) != 0) {
        if (AF(o, s16, 0xA) < AF(o, s16, 0xDC)) {
            if ((AF(o, s32, 0x14) += 0x8000) == 0) {
                AF(o, s16, 0xFC) = 0;
                func_sc02_016_8017F154((s32)o);
            }
        } else if (AF(o, s32, 0x14) > -0x80000) {
            AF(o, s32, 0x14) -= 0x8000;
        }
    } else {
        if (AF(o, s16, 0xA) > AF(o, s16, 0xDE)) {
            if ((AF(o, s32, 0x14) -= 0x8000) == 0) {
                AF(o, s16, 0xFC) = 1;
                func_sc02_016_8017F154((s32)o);
            }
        } else if (AF(o, s32, 0x14) < 0x80000) {
            AF(o, s32, 0x14) += 0x8000;
        }
    }
    func_sc02_016_8017F228((s32)o);
}

void func_sc02_016_8017F880(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        SetState(arg0, 1);
    }
    func_sc02_016_8017F228(arg0);
}

void func_sc02_016_8017F8C0(StageActor *o) {
    MATRIX m;
    SV8 r;
    SV8 v;
    s32 flag;

    r.z = 0;
    r.x = 0;
    r.y = (u16)o->unkFC;
    v.y = 0;
    v.x = 0;
    v.z = AF(o, u16, 0xDC);
    m.t[0] = o->workFE;
    m.t[1] = o->work100;
    m.t[2] = o->work102;
    RotMatrix(&r, &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0tr();
    gte_stlvnl((u8 *)o + 4);
    gte_stflg(&flag);
    o->pos[0].w <<= 16;
    o->pos[1].w <<= 16;
    o->pos[2].w <<= 16;
    o->model->rot.vy = (u16)o->unkFC - 0x400;
    o->unkFC += 0x40;
    func_sc02_016_8017F228((s32) o);
}

void func_sc02_016_8017F9F4(u8 *o) {
    u8 *p;

    p = D_sc02_016_801B41C8 + AF(o, s16, 0x2C) * 64;
    SetShapeCircle(p, 0x20);
    *(B4 *) p = D_sc02_016_801B2BCC;
    *(B4 *) (p + 4) = D_sc02_016_801B2BD0;
    func_8001CD9C(AF(o, s32, 0x20), p);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC020;
    AF(o, s32, 0x1C) = AF(o, s16, 0x2C);
    AF(o, s16, 2)++;
}

void func_sc02_016_8017FABC(u8 *o) {
    u8 unused[0x20];
    u8 *p;
    s32 v;

    p = D_sc02_016_801B41C8 + AF(o, s16, 0x2C) * 64;
    CopyPropPos(o, AF(o, s32, 0x30));
    v = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = v;
    if (v & 1) {
        p[0] = p[1] = 0x40;
    } else {
        p[0] = p[1] = 0xFF;
    }
}

void func_sc02_016_8017FB2C(void) {
    UpdateClockTint();
    func_sc02_016_8017FB54();
}

void func_sc02_016_8017FB54(void) {
    u32 i;
    u32 b = D_sc02_016_801B4288 >> 8;

    for (i = 0; i < 32; i++) {
        D_sc02_016_801B428C[i] = D_sc02_016_80188144[(b + i) & 0xF] | 0x8000;
    }
    QueueImage(&D_sc02_016_80188184);
    D_sc02_016_801B4288 += 0x100;
}

void func_sc02_016_8017FBE0(u8 *arg0) {
    D_sc02_016_801884B0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017FC1C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_016_80188450;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017FCD0(u8 *arg0) {
    struct { s32 x, y, z, w; } range;
    struct { s32 x, y, z, w; } off;
    u8 *obj;
    u8 *ent;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        InitSpriteKind3(obj, &D_sc02_016_801881A4, 0, 0);
        AF(obj, u8, 0x27) = 0x88;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = AF(arg0, s32, 0x2C) * 0xC + &D_sc02_016_80188450;
        StartSpriteAnim(obj, arg0 + 0x24, AF(ent, s32, 0));
        range = AF(AF(ent, u8 *, 8), typeof(range), 0x10);
        r = rand();
        off.x = r % (range.x + 1);
        if (r & 1) off.x = -off.x;
        off.y = r % (range.y + 1);
        if (r & 1) off.y = -off.y;
        off.z = r % (range.z + 1);
        if (r & 1) off.z = -off.z;
        AF(arg0, s32, 0x10) = AF(AF(ent, u8 *, 8), s32, 0) + off.x;
        AF(arg0, s32, 0x14) = AF(AF(ent, u8 *, 8), s32, 4) + off.y;
        AF(arg0, s32, 0x18) = AF(AF(ent, u8 *, 8), s32, 8) + off.z;
        range = AF(AF(ent, u8 *, 8), typeof(range), 0x30);
        r = rand();
        off.x = r % (range.x + 1);
        if (r & 1) off.x = -off.x;
        off.y = r % (range.y + 1);
        if (r & 1) off.y = -off.y;
        off.z = r % (range.z + 1);
        if (r & 1) off.z = -off.z;
        AF(arg0, s32, 0x2C) = AF(AF(ent, u8 *, 8), s32, 0x20) + off.x;
        AF(arg0, s32, 0x30) = AF(AF(ent, u8 *, 8), s32, 0x24) + off.y;
        AF(arg0, s32, 0x34) = AF(AF(ent, u8 *, 8), s32, 0x28) + off.z;
        AF(arg0, s32, 0x1C) = AF(ent, u16, 4);
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_016_8018003C(u8 *arg0) {
    u8 *p;

    p = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x10) += AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x18) += AF(arg0, s32, 0x34);
    MoveProp(arg0);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) -= 0x100;
    if (StepSpriteAnim(p, arg0 + 0x24) != 0 || (AF(arg0, s32, 0x1C) != 0 && --AF(arg0, s32, 0x1C) == 0)) {
        FreeProp(arg0);
    }
}

void func_sc02_016_801800E4(StageActor *arg0) {
    D_sc02_016_80188514[arg0->state]();
    DespawnIfFar((s32) arg0);
}

void func_sc02_016_80180134(StageActor *arg0, s32 arg1) {
    NextState(arg0, arg1);
}

void func_sc02_016_80180154(StageActor *o) {
    SV8 sv;
    s32 flag;
    u8 *p;
    s32 *m;

    p = D_sc02_016_8018850C[o->unkFC];
    m = D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    PosToSVec((u8 *)o + 4, &sv);
    gte_ldv0(&sv);
    gte_rtps();
    gte_stsxy(&sv);
    gte_stflg(&flag);
    if (-D_800AF7BE / 2 < sv.y && sv.y < (D_800AF7BE >> 1) + 0x20 && flag >= 0) {
        if (o->timer == 0) {
            while (AF(p, s16, 6) != 0xFF) {
                func_sc02_016_801802C8(o, p);
                p += 8;
            }
            o->timer = (s32)o->message;
        }
        o->timer--;
    }
}

void func_sc02_016_801802C8(u8 *o, u8 *p) {
    SV8 v;
    s32 r;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    v.x += AF(p, s16, 0);
    v.y += AF(p, s16, 2);
    v.z += AF(p, s16, 4);
    r = SpawnPropAt(0x36, &v);
    if (r != 0) AF(r, s32, 0x2C) = AF(p, s16, 6);
}

s32 func_sc02_016_8018035C(Mover *p) {
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

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (p->kind == AF(o, u16, 0) && p != o) {
            if (DistSq((u8 *)p + 4, o + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)p + 4, o + 4), 0x41);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                x = w;
                b.x += x.s.x;
                b.z += x.s.y;
                a.x = (u16)p->prev[0].h.i;
                a.y = (u16)p->prev[1].h.i;
                a.z = (u16)p->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(p);
                } else {
                    p->pos[0].h.i = b.x;
                    p->pos[1].h.i = b.y;
                    p->pos[2].h.i = b.z;
                }
                return 1;
            }
        }
    }
    return 0;
}

void func_sc02_016_801804D4(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x6AA, 0, arg2);
}

void func_sc02_016_801804F8(o)
    u8 *o;
{
    u8 *p;
    u16 t;

    if (AF(o, s16, 0x106) == 0) {
        GainStat0FromActor();
    }
    if (AF(o, u16, 0x70) & 1) {
        t = *AF(o, u16 *, 0x78);
        p = AF(o, u8 *, 0x20);
        AF(o, s16, 2) = 0xF;
        AF(o, u16, 0x76) = t;
        AF(p, s16, 0x14) = 0;
        AF(p, s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(o, u8 *, 0x68), u16, 0xC);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) &= ~0x10;
        AF(o, u16, 6) = AF(o, u16, 0x88);
        AF(o, u16, 0xA) = AF(o, u16, 0x8A);
        AF(o, u16, 0xE) = AF(o, u16, 0x8C);
        UpdateModelZYX(o);
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xAA) = 0;
        AF(o, u16, 0x5C) &= ~1;
    } else {
        DespawnActor(o);
    }
}

void func_sc02_016_801805D8(u8 *o) {
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
    if (TraceMap(1, &a, &b) & 0x6000) {
        r = 1;
    } else {
        StopWithGravity(o);
        r = 0;
    }
    if (r == 0) {
        AF(o, s16, 2) = 0x13;
        AF(o, s16, 0x98) = 0;
    } else if (AF(o, s32, 0xC4) & 4) {
        func_sc02_016_801806DC((s32)o);
    } else {
        func_sc02_016_80180728(o);
    }
}

s32 func_sc02_016_801806DC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc02_016_801AFF2C);
    return StopWithGravity(arg0);
}

void func_sc02_016_80180728(StageActor *o) {
    V3 v;
    s32 t;
    u8 *q;

    q = (u8 *)o + 0x88;
    o->state = 1;
    o->stateCount = 0;
    o->hitState = 0xAA10;
    o->timer = (rand() & 0x1F) + 0x28;
    v.x = o->pos[0].h.i - o->origin[0];
    v.y = 0;
    v.z = o->pos[2].h.i - o->origin[2];
    Square0(&v, &v);
    if (v.x + v.z >= 0x90000) {
        o->unkFC = HeadingToPoint((u8 *)o + 4, q);
    } else {
        t = (rand() & 0x3FF) - 0x200;
        if (t < 0) t -= 0x300; else t += 0x300;
        o->unkFC = ((u16)o->model->rot.vy + t) & 0xFFF;
    }
    SetScript(o, &D_sc02_016_801AFB14);
}

void func_sc02_016_80180828(u8 *o) {
    V3 v;
    s32 t;
    u8 *p;

    if (AF(o, s32, 0x1C) >= 8) {
        t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x12) += t;
    }
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z < 0x90000 && TargetInSight(o, 0x300, 0x10000) != 0) {
        func_sc02_016_80180B30(o);
        return;
    }
    SetForwardVelocity(o, D_sc02_016_80188618);
    t = MoveOnGround(o);
    if (t & 0x1000) {
        SetReactionStep(o, 0x12);
    } else if (t != 0x2000) {
        RestorePrevPos(o);
    }
    func_sc02_016_8018035C(o);
    if (TickTimer(o) != 0) {
        func_sc02_016_8018096C((s32) o);
    }
}

s32 func_sc02_016_8018096C(StageActor *arg0) {
    arg0->state = 2;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc02_016_801AF9CC);
}

void func_sc02_016_8018099C(u8 *o) {
    V3 v;
    s32 t;
    u8 *q;

    if (AF(o, u16, 0x34) != 0) return;
    if (!(AF(o, u16, 0x72) & 0x4000)) return;
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z < 0x90000 && DistSqToTarget(o) <= 0x10000) {
        func_sc02_016_80180B30(o);
        return;
    }
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
        AF(o, s16, 0xFC) = HeadingToPoint(o + 4, q);
    } else {
        t = (rand() & 0x3FF) - 0x200;
        if (t < 0) t -= 0x300; else t += 0x300;
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + t) & 0xFFF;
    }
    SetScript(o, &D_sc02_016_801AFB14);
}

void func_sc02_016_80180B30(StageActor *o) {
    o->state = 3;
    if (o->unk86 & 2) {
        o->stateCount = 1;
        o->timer = 0x28;
        if ((u16)o->param & 0x200) {
            SetScript(o, &D_sc02_016_801B04DC);
        } else {
            SetScript(o, &D_sc02_016_801AFBBC);
        }
        o->workFE = 0;
    } else {
        o->stateCount = 0;
        SetScript(o, &D_sc02_016_801AFC44);
        o->timer = 0x19;
        o->unk86 |= 2;
    }
}

void func_sc02_016_80180BD8(u8 *arg0) {
    s32 v[3];
    s32 r;
    s32 a;
    u8 *p;
    s32 p2;
    s32 d;
    u8 *t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget((s32) arg0, 4);
        if (AF(arg0, s32, 0x1C) == 0xF) {
            SpawnHeadMarker((s32) arg0, -0x78);
            PlaySoundId(0x6A9, 0);
        }
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 3;
            if (AF(arg0, u16, 0x86) & 2) {
                AF(arg0, s16, 0x34) = 1;
                AF(arg0, s32, 0x1C) = 0x28;
                if (AF(arg0, u16, 0x70) & 0x200) {
                    SetScript((s32) arg0, (s32) &D_sc02_016_801B04DC);
                } else {
                    SetScript((s32) arg0, (s32) &D_sc02_016_801AFBBC);
                }
                AF(arg0, s16, 0xFE) = 0;
                return;
            }
            AF(arg0, s16, 0x34) = 0;
            SetScript((s32) arg0, (s32) &D_sc02_016_801AFC44);
            AF(arg0, s32, 0x1C) = 0x19;
            AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        }
        break;
    case 1:
        r = TurnStepToTarget((s32) arg0, 6);
        p = AF(arg0, u8 *, 0x20);
        p2 = AF(p, u16, 0x12) + r;
        d = D_sc02_016_8018861C;
        AF(p, u16, 0x12) = p2;
        SetForwardVelocity((s32) arg0, d, p2);
        r = MoveOnGround((s32) arg0);
        if (r & 0x1000) {
            SetReactionStep((s32) arg0, 0x12);
        } else if (r != 0x2000) {
            RestorePrevPos((s32) arg0);
        }
        func_sc02_016_8018035C((s32) arg0);
        if (--AF(arg0, s16, 0xFE) <= 0) {
            SpawnKind1C((s32) arg0, 0);
            AF(arg0, s16, 0xFE) = 8;
        }
        if (AF(arg0, u16, 0x70) & 0x200) {
            func_sc02_016_8018109C((s32) arg0, 0x11);
        }
        v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
        v[1] = 0;
        v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
        Square0(v, v);
        t = arg0 + 0x88;
        if (v[0] + v[2] > 0x8FFFF || DistSqToTarget((s32) arg0) > 0x10000) {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 0;
            AF(arg0, u16, 0x5C) = 0xAA10;
            AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x28;
            v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
            v[1] = 0;
            v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
            Square0(v, v);
            if (v[0] + v[2] > 0x8FFFF) {
                AF(arg0, s16, 0xFC) = HeadingToPoint(arg0 + 4, t);
            } else {
                a = (rand() & 0x3FF) - 0x200;
                if (a < 0) {
                    a -= 0x300;
                } else {
                    a += 0x300;
                }
                AF(arg0, s16, 0xFC) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
            }
            SetScript((s32) arg0, (s32) &D_sc02_016_801AFB14);
        }
        if (!(AF(arg0, u16, 0x70) & 0x100)) {
            if (TargetInSight((s32) arg0, 0x200, 0x1000) != 0) {
                if (!(AF(arg0, u16, 0x70) & 0xF00)) {
                    func_sc02_016_80180F6C((s32) arg0);
                } else {
                    func_sc02_016_80180F98((s32) arg0);
                }
            }
        } else if (TargetInSight((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_016_80180FE0((s32) arg0);
        }
        break;
    }
}

s32 func_sc02_016_80180F6C(StageActor *arg0) {
    return func_sc02_016_80181054(arg0, 0, 0x14, (s32) &D_sc02_016_801AFD14);
}

void func_sc02_016_80180F98(StageActor *arg0) {
    func_sc02_016_80181054(arg0, 3, 0x28, (s32) &D_sc02_016_801B062C);
    D_sc02_016_801B42D0 = D_sc02_016_8018861C;
    PlaySoundId(0x660, 0);
}

void func_sc02_016_80180FE0(StageActor *arg0) {
    if (arg0->work100 == 0) {
        func_sc02_016_80181028(arg0);
    } else {
        func_sc02_016_80181054(arg0, 5, 0x1E, (s32) &D_sc02_016_801B02EC);
    }
}

s32 func_sc02_016_80181028(StageActor *arg0, s32 arg1) {
    arg0->state = 8;
    return SetScript(arg0, (s32) &D_sc02_016_801B03E4);
}

s32 func_sc02_016_80181054(StageActor *arg0, s32 arg1, s32 arg2, AnimEntry *arg3) {
    s32 temp_v0;

    arg0->stateCount = (s16) arg1;
    arg0->state = 4;
    temp_v0 = SetScript(arg0, arg3);
    arg0->timer = arg2;
    return temp_v0;
}

s32 func_sc02_016_8018109C(StageActor *arg0, s32 arg1) {
    return ActorSegmentDamagesPlayer(arg0, (s32) &D_sc02_016_80188620, (s32) (&D_sc02_016_80188620 + 8), arg1);
}

void func_sc02_016_801810C8(u8 *arg0) {
    s32 flags;
    s32 go;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) == 7) {
            ActorSegmentDamagesPlayer(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0xB);
        }
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 6);
        break;
    case 2:
        if (AF(arg0, s32, 0x1C) == 10) {
            ActorSegmentDamagesPlayer(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x1C) % 10 == 0) {
            D_sc02_016_801B42D0 += 0x10000;
        }
        SetForwardVelocity(arg0, D_sc02_016_801B42D0);
        flags = MoveOnGround(arg0);
        if (flags & 0x1000) {
            SetReactionStep(arg0, 0x12);
            go = 0;
        } else {
            if (flags != 0x2000) {
                RestorePrevPos(arg0);
            }
            go = 1;
        }
        func_sc02_016_8018035C(arg0);
        ActorSegmentDamagesPlayer(arg0, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0x11);
        if (--AF(arg0, s16, 0xFE) <= 0) {
            SpawnKind1C(arg0, 0);
            AF(arg0, s16, 0xFE) = -(D_sc02_016_801B42D0 / 0x10000);
        }
        if (go == 1) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
        }
        break;
    case 4:
        break;
    case 5:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 6);
        if (AF(arg0, s32, 0x1C) == 0xC) {
            func_sc02_016_801815DC(arg0);
        }
        break;
    }
    if (TickTimer(arg0) != 0) {
        switch (AF(arg0, u16, 0x34)) {
        case 0:
            if (TargetInSight(arg0, 0x400, 0x4000) != 0) {
                AF(arg0, s16, 0x34)++;
                SetScript(arg0, &D_sc02_016_801AF924);
                AF(arg0, s32, 0x1C) = 0xA;
                break;
            }
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
            break;
        case 1:
            AF(arg0, s16, 0x34) = 2;
            AF(arg0, s32, 0x1C) = 0x18;
            SetScript(arg0, &D_sc02_016_801AFDDC);
            break;
        case 2:
        case 4:
            AF(arg0, s16, 2) = 2;
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, &D_sc02_016_801AF9CC);
            break;
        case 3:
            AF(arg0, s32, 0x1C) = 0xA;
            AF(arg0, s16, 0x34)++;
            break;
        case 5:
            if (--AF(arg0, s16, 0x100) == 0) {
                AF(arg0, s16, 2) = 8;
                SetScript(arg0, &D_sc02_016_801B03E4);
            } else {
                AF(arg0, s32, 0x1C) = 0x1E;
            }
            break;
        }
    }
}

void func_sc02_016_8018140C(u8 *o) {
    s32 *p;

    p = (s32 *) &D_sc02_016_80188634;
    if (!(AF(o, u16, 0x70) & 0x2000)) {
        p += 3;
    }
    AF(o, s16, 2) = 7;
    if (AF(o, u16, 0x70) & 0x200) {
        SetScript(o, &D_sc02_016_801B04DC);
    } else {
        SetScript(o, p[0]);
    }
    StopMotion(o);
    SetForwardVelocity(o, p[1]);
    AF(o, s32, 0x1C) = p[2];
}

void func_sc02_016_801814A8(u8 *o) {
    s16 t;

    MoveObject(o);
    if (AF(o, u16, 0x70) & 0x2000) {
        t = AF(o, s16, 0xFE) - 1;
        AF(o, s16, 0xFE) = t;
        if (t <= 0) {
            SpawnKind1C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (AF(o, u16, 0x70) & 0x200) {
            ActorSegmentDamagesPlayer(o, &D_sc02_016_80188620, &D_sc02_016_80188620 + 8, 0x11);
        }
    }
    if (TickTimer(o) != 0) {
        AF(o, u16, 0x86) |= 2;
        AF(o, s16, 2) = 3;
        if (AF(o, u16, 0x86) & 2) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x28;
            if (AF(o, u16, 0x70) & 0x200) {
                SetScript(o, &D_sc02_016_801B04DC);
            } else {
                SetScript(o, &D_sc02_016_801AFBBC);
            }
            AF(o, s16, 0xFE) = 0;
        } else {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc02_016_801AFC44);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
    }
}

void func_sc02_016_801815DC(StageActor *o) {
    Arg15DC a;
    VECTOR in;
    VECTOR out;
    s16 *d = &D_sc02_016_8018864C;

    func_sc02_016_80183EE0((s32) o, (s32) d);
    in.vx = *d << 8;
    in.vy = D_sc02_016_8018864E << 8;
    in.vz = D_sc02_016_80188650 << 8;
    ApplyMatrixLV((u8 *)o->model + 0x34, &in, &out);
    out.vx += o->pos[0].h.i << 8;
    out.vy += o->pos[1].h.i << 8;
    out.vz += o->pos[2].h.i << 8;
    a.x = out.vx / 256;
    a.y = out.vy / 256;
    a.z = out.vz / 256;
    a.w = 0x20;
    if ((u16)o->param & 0x1000) {
        a.f = 0x1001;
    } else {
        a.f = 3;
    }
    a.g = 0;
    a.j = 0;
    a.i = 0;
    SpawnActorFromDef(&a, o);
}

void func_sc02_016_80181714(u8 *o) {
    s32 r;
    s32 s;
    u8 *t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            StopWithGravity(o);
            AF(AF(o, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
            AF(o, u16, 0x5C) = AF(AF(o, u8 *, 0x78), u16, 2);
        }
        break;
    case 1:
        if (!(MoveCollide(o) & 0x2000)) {
            break;
        }
        SpawnKind1C(o, 1);
        AF(o, u16, 0x34)++;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, s32, 0x1C) = 0x10;
    case 2:
        r = rsin((AF(o, s32, 0x1C) << 7) & 0x780);
        s = ((r << 9) >> 12) + 0x1000;
        t = AF(o, u8 *, 0x20);
        AF(t, s16, 0x18) = AF(t, s16, 0x1C) = s;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000 - ((r << 10) >> 12);
        if (TickTimer(o) != 0) {
            AF(o, s16, 2) = 3;
            if (AF(o, u16, 0x86) & 2) {
                AF(o, s16, 0x34) = 1;
                AF(o, s32, 0x1C) = 0x28;
                if (AF(o, u16, 0x70) & 0x200) {
                    SetScript((s32) o, (s32) &D_sc02_016_801B04DC);
                } else {
                    SetScript((s32) o, (s32) &D_sc02_016_801AFBBC);
                }
                AF(o, s16, 0xFE) = 0;
            } else {
                AF(o, s16, 0x34) = 0;
                SetScript((s32) o, (s32) &D_sc02_016_801AFC44);
                AF(o, s32, 0x1C) = 0x19;
                AF(o, u16, 0x86) |= 2;
            }
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
        }
        break;
    }
}

void func_sc02_016_801818F8(StageActor *o) {
    V3 v;
    s32 t;
    u8 *q;
    u16 f;

    if (SetupActor(o, &D_sc02_016_8018852C + (((u16)o->param & 0xF00) >> 8) * 0x34) == 0) return;
    o->reactive = 1;
    o->reactMask = -1;
    o->react = 0;
    o->params = &D_sc02_016_801885C8;
    SpawnShadow(o);
    f = (u16)o->param;
    if (f & 0x6000) {
        o->state = 6;
        SetScript(o, &D_sc02_016_801AF9CC);
    } else if (f & 1) {
        o->state = 0xF;
    } else if (f & 0x100) {
        if (f & 0x1000) {
            o->work102 = (u32)(g_ClockHour - 7) < 0xC;
            if (o->work102 == 0) {
                HideModel(o);
                o->state = 0x11;
                return;
            }
        }
        o->state = 9;
    } else {
        q = (u8 *)o + 0x88;
        o->state = 1;
        o->stateCount = 0;
        o->hitState = 0xAA10;
        o->timer = (rand() & 0x1F) + 0x28;
        v.x = o->pos[0].h.i - o->origin[0];
        v.y = 0;
        v.z = o->pos[2].h.i - o->origin[2];
        Square0(&v, &v);
        if (v.x + v.z >= 0x90000) {
            o->unkFC = HeadingToPoint((u8 *)o + 4, q);
        } else {
            t = (rand() & 0x3FF) - 0x200;
            if (t < 0) t -= 0x300; else t += 0x300;
            o->unkFC = ((u16)o->model->rot.vy + t) & 0xFFF;
        }
        SetScript(o, &D_sc02_016_801AFB14);
    }
}

void func_sc02_016_80181AE8(u8 *o) {
    s32 k;
    u8 *t;
    u8 *q;
    s32 a;

    D_sc02_016_8018866C[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) {
        return;
    }
    if (AF(o, u16, 0x70) & 0x1000) {
        k = g_ClockHour >= 7 && g_ClockHour < 0x13;
        if (AF(o, s16, 0x102) != k) {
            AF(o, s16, 6) = AF(o, u16, 0x88);
            AF(o, s16, 0xA) = AF(o, u16, 0x8A);
            AF(o, s16, 0xE) = AF(o, u16, 0x8C);
            if (k == 1) {
                AF(o, s16, 0xA) += 0x78;
                AF(o, s16, 0xE) += 0x78;
                ShowModel(o);
                AF(o, s16, 0xFC) = 0;
            } else {
                AF(o, s16, 0xFC) = 0x800;
            }
            AF(o, s16, 2) = 0x12;
            AF(o, s16, 0x34) = 0;
            SetScript((s32) o, (s32) &D_sc02_016_801AFB14);
            AF(o, s16, 0x102) = k;
        }
    }
    if (AF(o, s16, 0xA) < 0x10) {
        return;
    }
    if (AF(o, s16, 0x106) == 0) {
        GainStat0FromActor(o);
    }
    if (AF(o, u16, 0x70) & 1) {
        a = AF(AF(o, u8 *, 0x78), u16, 0);
        t = AF(o, u8 *, 0x20);
        AF(o, s16, 2) = 0xF;
        AF(o, s16, 0x76) = a;
        AF(t, s16, 0x10) = AF(t, s16, 0x14) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x68), u16, 0xC);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
        AF(o, s16, 6) = AF(o, u16, 0x88);
        AF(o, s16, 0xA) = AF(o, u16, 0x8A);
        AF(o, s16, 0xE) = AF(o, u16, 0x8C);
        UpdateModelZYX(o);
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xAA) = 0;
        AF(o, u16, 0x5C) &= 0xFFFE;
    } else {
        DespawnActor(o);
    }
}

void func_sc02_016_80181CB8(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x100) = 3;
        if (TargetInSight((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_016_80181054((s32) arg0, 5, 0x1E, (s32) &D_sc02_016_801B02EC);
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
    }
}

void func_sc02_016_80181D3C(StageActor *arg0) {
    arg0->state = 0xA;
    SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
}

void func_sc02_016_80181D68(u8 *o) {
    if (AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 0xB;
    } else if (!(AF(o, u16, 0x70) & 0x1000)) {
        if (DistSqToTarget(o) <= 0x40000) AF(o, s16, 2) = 0xD;
    } else if (D_80126B62 < -0x3BF) {
        AF(o, s16, 2) = 0xD;
    }
}

void func_sc02_016_80181DEC(StageActor *arg0) {
    arg0->state = 0xC;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B03E4);
}

void func_sc02_016_80181E18(StageActor *arg0) {
    if (arg0->animFlags & 0x4000) {
        arg0->state = 9;
        arg0->work100 = 3;
    }
}

void func_sc02_016_80181E40(StageActor *arg0) {
    arg0->state = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B02EC);
    arg0->timer = 0x1E;
}

void func_sc02_016_80181E80(u8 *o) {
    s32 v;

    if ((AF(o, u16, 0x70) & 0x1000) && D_80126B62 >= -0x3BF) {
        AF(o, s16, 2) = 9;
        return;
    }
    v = TurnStepToTarget(o, 6);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += v;
    if (AF(o, s32, 0x1C) == 0xC) func_sc02_016_801815DC(o);
    if (TickTimer(o) != 0) {
        if (--AF(o, s16, 0x100) == 0) {
            AF(o, s16, 2) = 0xB;
        } else {
            AF(o, s32, 0x1C) = 0x1E;
        }
    }
}

void func_sc02_016_80181F54(StageActor *arg0) {
    ModelObj *temp_a0;

    SetScript(arg0, (s32) &D_sc02_016_801AF924);
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
    arg0->state = 0x10;
    arg0->stateCount = 0;
    arg0->timer = 0xA;
}

void func_sc02_016_80181FB0(void) {
}

void func_sc02_016_80181FB8(u8 *o) {
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
        if (r == 0) {
            AF(o, u16, 0x34)++;
            StopMotion(o);
            AF(o, s32, 0x1C) = 30;
            if (AF(o, s16, 0x102) == 0) {
                SetLocalVelocity(o, &D_sc02_016_80188654);
            } else {
                SetLocalVelocity(o, &D_sc02_016_80188660);
            }
        }
        AF(AF(o, u8 *, 0x20), u16, 0x12) += r;
        break;
    case 1:
        MoveObject(o);
        if (TickTimer(o) != 0) {
            if (AF(o, s16, 0x102) == 0) {
                HideModel(o);
                AF(o, s16, 2) = 0x11;
            } else {
                AF(o, s16, 2) = 9;
            }
        }
        break;
    }
}

void func_sc02_016_801820C0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc02_016_801804F8();
        return;
    }
    temp_v0 = MoveCollidePassable((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            SetReactionStep((s32) arg0, 0x12);
            return;
        }
        func_sc02_016_80180728((s32) arg0);
    }
}

void func_sc02_016_80182140(s32 arg0) {
    MoveCollidePassable(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc02_016_80180728(arg0);
    }
}

void func_sc02_016_80182184(s32 arg0) {
    if (DistSqToTarget(arg0) < D_sc02_016_80188630) {
        func_sc02_016_8018140C(arg0);
    }
}

void func_sc02_016_801821CC(u8 *arg0) {
    StartRumbleScript((s32) &D_sc02_016_801886BC);
    D_sc02_016_801886E4[AF(arg0, u16, 2)](arg0);
}

void func_sc02_016_80182224(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc02_016_80182274(arg0);
    PlaySe(0x92F);
    NextObjState(arg0);
}

s32 func_sc02_016_80182274(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc02_016_801886C4);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc02_016_80182488();
    SetPlayerEvent100(arg0);
    return NextObjState(arg0);
}

void func_sc02_016_801822E0(u8 *o) {
    SV8 v;
    s32 i;
    s32 k;
    s32 r0;
    s32 r1;
    s32 r2;
    u8 t;

    PosToSVec(o + 4, &v);
    v.y -= 0x40;
    for (i = 0; i < 3; i++) {
        k = func_sc02_016_801824AC();
        if (k >= 0) {
            SpawnEffect(0x51, o, v.x, v.y, v.z, k, 0);
            r0 = rand();
            r1 = rand();
            r2 = rand();
            SpawnEffect(0x52, o, 0, -0x20, 0x10, (s16)((r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (r2 & 3) * 0x44), 0);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc02_016_80182434(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    } else {
        SetPlayerEvent100(o);
    }
}

s32 func_sc02_016_80182434(s32 arg0) {
    PlaySePositional(4, 0x92F);
    PlaySe(0x930);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc02_016_80182488(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc02_016_801B42EB;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc02_016_801824AC(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc02_016_801B42D8; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc02_016_801824F0(u8 *arg0) {
    D_sc02_016_801886F0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8018252C(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc02_016_801B42EC;
    e = (u8 *)AllocSprite16To3E();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        SetShapeCircle(p, 0x10);
        func_sc02_016_80182720(p);
        AF(e, s32, 4) |= 0x50000000;
        if (AF(o, s32, 0x2C) != 0) {
            AF(e, s16, 0x18) = AF(e, s16, 0x1A) = (rand() & 3) * 0x800 + 0x1000;
            AF(o, s16, 0x12) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x12) = -AF(o, s16, 0x12);
            }
            AF(o, s16, 0x1A) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x1A) = -AF(o, s16, 0x1A);
            }
        } else {
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x4000;
        }
        AF(o, u16, 2)++;
    } else {
        func_sc02_016_801826F0(o);
    }
}

void func_sc02_016_80182678(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc02_016_801B42EC;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc02_016_80182734((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc02_016_801826F0((s32) arg0);
}

void func_sc02_016_801826F0(s32 arg0) {
    D_sc02_016_801B42D8[AF(arg0, s32, 0x2C)] = 0;
    FreeEffect(arg0);
}

void func_sc02_016_80182720(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc02_016_80182734(u8 *o, u8 *p) {
    s32 v;

    if (AF(o, s32, 0x30) == 0) {
        v = p[1];
        v -= 0x20;
    } else {
        v = p[2];
        v -= 0x20;
    }
    if (v > 0) {
        if (AF(o, s32, 0x30) == 0) {
            v = 0xFF0000 | (v << 8) | v;
        } else {
            v = (v << 16) | 0xFFFF;
        }
        AF(p, s32, 0) = v;
        return 0;
    }
    return 1;
}

void func_sc02_016_8018279C(u8 *arg0) {
    D_sc02_016_80188728[AF(arg0, u16, 2)]();
}

void func_sc02_016_801827D8(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    SetObjTimer((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_80182824(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_sc02_016_80182874(arg0);
}

void func_sc02_016_8018286C(void) {
}

void func_sc02_016_80182874(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc02_016_80188720[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    PosToSVec(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc02_016_8018873C[i];
            AF(o, s16, 0x12) = i + j;
            func_sc02_016_801829D8(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern SV8 D_sc02_016_801B47EC[4];
extern CV D_sc02_016_801B480C;
extern CV D_sc02_016_801B4810;
extern u8 D_sc02_016_801B4814;
extern u8 D_sc02_016_801B4815;
extern u8 D_sc02_016_801B4816;
extern u8 D_sc02_016_801B4818;
extern u8 D_sc02_016_801B4819;
extern u8 D_sc02_016_801B481A;
extern s32 D_sc02_016_801B481C;
extern void SetIdentityRot();
extern void DrawPrimG4Screen();
void func_sc02_016_801829D8(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6, CV *arg7) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    SetIdentityRot(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc02_016_801B47EC;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc02_016_801B481C = 0x50000000;
        D_sc02_016_801B4814 = 0;
        D_sc02_016_801B4815 = 0;
        D_sc02_016_801B4816 = 0;
        D_sc02_016_801B4818 = 0;
        D_sc02_016_801B4819 = 0;
        D_sc02_016_801B481A = 0;
    }
    D_sc02_016_801B480C = arg7[0];
    D_sc02_016_801B4810 = arg7[1];
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    *arg2 = *arg5;
}

void func_sc02_016_80182D54(u8 *o) {
    u8 *p = AF(o, u8 *, 0xDC);

    SaveCamera();
    StartCameraBlend();
    g_CameraProjTarget = AF(p, s32, 0);
    g_CameraDistTarget = AF(p, s32, 4);
    *(B8 *)&g_CameraAngleTarget = AF(p, B8, 8);
    g_CameraOfsTarget = AF(p, s16, 0x10);
    D_80126978 = AF(p, s16, 0x12);
    D_8012697A = AF(p, s16, 0x14);
    SetCameraUpdate(func_sc02_016_80182E34, 0);
    D_801269E4 = AF(o, s32, 0xDC);
}

s32 func_sc02_016_80182E14(void) {
    return RestoreSavedCamera();
}

void func_sc02_016_80182E34(s32 arg0) {
    D_sc02_016_801A41D4[AF(arg0, u8, 4)]();
}

void func_sc02_016_80182E70(u8 *o) {
    u8 *p;
    s16 a, b, c, d, e, f;

    p = AF(o, u8 *, 0x9C);
    if (AF(p, u16, 0x1E) & 1) {
        a = AF(p, s16, 0x18);
        if (a < g_CameraFocus[0]) g_CameraFocus[0] = a;
    }
    if (AF(p, u16, 0x1E) & 2) {
        b = AF(p, s16, 0x1A);
        if (b < g_CameraFocus[1]) g_CameraFocus[1] = b;
    }
    if (AF(p, u16, 0x1E) & 4) {
        c = AF(p, s16, 0x1C);
        if (c < g_CameraFocus[2]) g_CameraFocus[2] = c;
    }
    if (AF(p, u16, 0x26) & 1) {
        d = AF(p, s16, 0x20);
        if (g_CameraFocus[0] < d) g_CameraFocus[0] = d;
    }
    if (AF(p, u16, 0x26) & 2) {
        e = AF(p, s16, 0x22);
        if (g_CameraFocus[1] < e) g_CameraFocus[1] = e;
    }
    if (AF(p, u16, 0x26) & 4) {
        f = AF(p, s16, 0x24);
        if (g_CameraFocus[2] < f) g_CameraFocus[2] = f;
    }
    func_sc02_016_80182FE8(o);
}

void func_sc02_016_80182FE8(u8 *p) {
    WMtx m;
    SV4 v;
    SV4 o;

    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + g_CameraFocus[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + D_80126942;
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + D_80126944;
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(p, s16, 0x2A) + D_80126942;
    m.t[2] = AF(p, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc02_016_80183194(StageActor *arg0) {
    D_sc02_016_801A41D8[arg0->state]();
}

void func_sc02_016_801831D0(StageActor *arg0, s32 arg1) {
    NextState(arg0, arg1);
}

void func_sc02_016_801831F0(s32 arg0) {
    if (PlayerEvent10((s32) &g_Player) != 0) {
        func_sc02_016_80182D54(arg0);
        SetMoverTimer(arg0, 0x20);
        NextState(arg0);
    }
}

void func_sc02_016_80183248(s32 arg0) {
    if (PlayerEvent10((s32) &g_Player) == 0) {
        if (TickTimer(arg0) != 0) {
            func_sc02_016_80182E14();
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        }
    } else {
        SetMoverTimer(arg0, 0x20);
    }
}

void func_sc02_016_801832B8(StageActor *arg0) {
    D_sc02_016_801A4514[arg0->state]();
}

void func_sc02_016_801832F4(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc02_016_801A4204) != 0) {
        if (!(GetFlag(D_sc02_016_801A426C[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc02_016_801839A0);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_016_801847A8);
        arg0->state = 1;
    }
}

void func_sc02_016_801833C8(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc02_016_801833F0(void) {
}

void func_sc02_016_801833F8(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_016_801A443C = 0;
            SetFlag(D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_016_801A4438 = 2;
        } else {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_016_801A4330[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_016_801A4438 = 0;
            D_sc02_016_801A443C = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc02_016_801A4464);
    } else {
        var_a1 = &D_sc02_016_801A44D0;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc02_016_80183544(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc02_016_80183748() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc02_016_80183664(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc02_016_80183690(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_016_801836A0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_016_801836B0(u8 *arg0) {
    SetFlag(D_sc02_016_801A426C[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_016_801836F0(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_016_80183724(void) {
    return func_80174764() == 1;
}

s32 func_sc02_016_80183748(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc02_016_801A426C[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_016_801837AC(StageActor *arg0) {
    D_sc02_016_801A453C[arg0->state]();
}

void func_sc02_016_801837E8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_016_801A4238) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_016_801A4BFC);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_016_801A49DC);
        }
        arg0->state = 1;
    }
}

void func_sc02_016_80183870(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A49EC);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A4AF4);
        arg0->hitState = 0x8C00;
    }
}

void func_sc02_016_80183930(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A4BFC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A49DC);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc02_016_801839A0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc02_016_801A452C[0], &a, &f);
    RotTransSV(&D_sc02_016_801A452C[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc02_016_80183A98(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = AllocActorModel(arg0)) == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(AF(arg0, u8 *, 0x20), &D_sc02_016_801B08E4);
    PlaySoundId(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc02_016_801B06BC);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.x = g_PlayerPosX;
    p.y = D_80126B60;
    p.z = D_80126B64;
    ((s16 *)&p.y)[1] -= 0x20;
    HeadingPitchTo(&v, arg0 + 4, &p);
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
    UpdateModelZYX(arg0);
    SpawnActor(0xBC, arg0);
}

void func_sc02_016_80183C10(StageActor *arg0) {
    D_sc02_016_801B0758[arg0->state]();
}

void func_sc02_016_80183C4C(StageActor *arg0) {
    D_sc02_016_801B076C[arg0->state]();
}

void func_sc02_016_80183C88(s32 arg0) {
    s32 temp_v0;

    SetLocalVelocity(arg0, (s32) &D_sc02_016_801B0744);
    if (MoveCollidePassable(arg0) != 0) {
        SpawnEffect(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((ActorSegmentDamagesPlayer(arg0, (s32) &D_sc02_016_801B0750, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (g_PlayerAction != 0)) || (TickTimer(arg0) != 0)) {
block_7:
        FreeActor(arg0);
    }
}

void func_sc02_016_80183D68(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX(arg0);
        StopWithGravity(arg0);
        SetLocalVelocity(arg0, &D_sc02_016_801B0760);
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
    MoveObject(arg0);
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc02_016_80183E84(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_016_801B0A14);
    arg0->state = 1;
    arg0->stateCount = 0;
}

s32 func_sc02_016_80183EE0(StageActor *arg0, s32 arg1, s32 arg2) {
    D_sc02_016_801B4960 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc02_016_80183F10(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc02_016_801B0A30) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc02_016_801847A8);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc02_016_801B4960, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc02_016_801B0A64++;
    o->ext0 = q;
    if (D_sc02_016_801B0A64 > D_sc02_016_801B4940) {
        D_sc02_016_801B0A64 = D_sc02_016_801B4940 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc02_016_801B0A64++;
        o->ext1 = q;
        if (D_sc02_016_801B0A64 > D_sc02_016_801B4940) {
            D_sc02_016_801B0A64 = D_sc02_016_801B4940 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc02_016_80184154(StageActor *o) {
    QuadArg q;
    ModelObj *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = o->model;
    if (o->timer++ < 2) {
        t = D_sc02_016_801B0A1C;
        i = 0;
        m = (u8 *)o->ext0;
        v = (u16)o->param;
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
            DrawPrimG4Mtx(&q, m);
        }
        mm = (u8 *)o->ext1;
        if (mm != 0) {
            m = mm;
            t = D_sc02_016_801B0A1C;
            j = 0;
            v = (u16)o->param;
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
            DrawPrimG4Mtx(&q, m);
        }
        }
        o->param >>= 1;
        p->flags |= 1;
    } else {
        FreeActor(o);
    }
}

void func_sc02_016_801843F4(StageActor *arg0) {
    D_sc02_016_801B0A68[arg0->state]();
}
