#include "common.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_002_8017BE9C(void) {
}

void func_sc04_002_8017BEA4(void) {
}

void func_sc04_002_8017BEAC(void) {
}

void func_sc04_002_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_002_801A95E0[])();
extern void (*D_sc04_002_8018BF90[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc04_002_8017D0B8();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void func_800D20C0();
extern void func_800D23D0();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void SpawnEffect();
extern void (*D_sc04_002_8018BFE8[])();
extern s32 PlaySe();
extern void func_sc04_002_8017E22C();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc04_002_8018BFFC[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc04_002_8018C010[])();
extern void func_800D22E4();
extern void func_sc04_002_8017E924();
extern void (*D_sc04_002_8018C074[])();
extern void (*D_sc04_002_8018C0AC[])();
extern void func_sc04_002_8017F55C();
extern s32 func_sc04_002_8017F534();
extern u8 D_sc04_002_8018C054;
extern void (*D_sc04_002_8018C454[])();
void func_sc04_002_8017FAD8(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc04_002_8017FB00(void);
extern void func_800D1EBC();
extern void (*D_sc04_002_8018C468[])();
extern u8 D_sc04_002_8018C474;
extern void StartPlayerActionScript();
extern u8 D_sc04_002_8018C478;
extern void func_sc04_002_8017FC5C();
extern void (*D_sc04_002_8018C484[])();
extern void RunScript();
extern u8 D_sc04_002_8018C4F0;
extern void (*D_sc04_002_8018C570[])();
extern void (*D_sc04_002_8018C5AC[])();
extern void (*D_sc04_002_80198D20[])();
extern void (*D_sc04_002_80198D58[])();
extern void (*D_sc04_002_801A1F2C[])();
extern void (*D_sc04_002_801A9210[])();
extern void (*D_sc04_002_801A9224[])();
extern void (*D_sc04_002_801A9604[])();
extern void (*D_sc04_002_801B5108[])();
extern void (*D_sc04_002_801B5160[])();
extern void (*D_sc04_002_801BE37C[])();

extern u8 D_sc04_002_8018BE1C;
extern void (*D_sc04_002_8018BE74[])();
extern void StartRumbleScript();
extern u8 D_sc04_002_8018C018;
extern void (*D_sc04_002_8018C03C[])();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern u8 D_sc04_002_80198CEC;
extern void (*D_sc04_002_80198D14[])();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern s32 func_sc04_002_80180888();
extern s32 NextObjState();
extern void PlaySePositional();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern s8 D_sc04_002_801C100B;
extern void SetObjTimer();
extern void func_801495C4();
extern s32 TickObjTimer();
extern void func_sc04_002_80180E88();

extern s32 D_sc04_002_8018C494[];
extern s32 func_8013B7F4();
extern void SetLocalVelocity();
extern s32 TickTimer();
extern s32 MoveCollidePassable();
extern u8 D_800D3918;
extern s32 ActorSegmentDamagesPlayer();
extern s32 g_PlayerAction;
extern u8 D_sc04_002_801A91FC;
extern u8 D_sc04_002_801A9208;
extern s32 SpawnPropFrom();
extern void RejectSpawn();
extern u8 D_sc04_002_801A94CC;
extern u8 D_sc04_002_801B10C4;
extern u8 D_sc04_002_801B154C;
extern s32 DistSqToTarget();
extern u8 D_sc04_002_801B14A4;
extern void func_sc04_002_801846B4();
extern u8 D_sc04_002_801B1264;
extern void SpawnHeadMarker();
extern void func_sc04_002_801845B4();
extern s32 StepSpriteAnim();
extern void FreeProp();
extern void ZeroFill();

extern void func_sc04_002_8017CE3C();
extern void func_sc04_002_8017EB34();
extern s32 ClearPlayerHittable();
extern s32 func_sc04_002_8017EC20();
extern void EnterPlayerStanding();
extern void func_80165718();
extern s32 SetPlayerEvent100();
extern u8 D_80062C04;
extern void func_sc04_002_8017F6B8();
extern u8 g_Camera;
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
extern s32 func_800D0F8C();
extern void SetFlag();
extern void SetMoverTimer();
extern void NextState();
extern u8 D_sc04_002_8018C5A0;
extern void CopyPosInt();
extern void InitSpriteKind3();
extern void (*D_sc04_002_80198EE8[])();
extern s32 func_801659CC();
extern void IncStageCount811C();
extern void GainStat0FromActor();
extern u8 D_sc04_002_80198E1C;
extern u8 D_sc04_002_80198E50;
extern u8 D_sc04_002_80198E90;
extern u8 D_sc04_002_801A16C4;
extern s32 SetupActor();
extern void SpawnShadow();
extern s32 StopWithGravity();
extern u8 D_sc04_002_801A87CC;
extern s32 D_sc04_002_801A8844;
extern void SetScriptCopy();
extern s32 SetState();
extern s32 D_sc04_002_801A883C;
extern u8 D_sc04_002_801A89A4;
extern u8 D_sc04_002_801A8EBC;
extern u8 D_sc04_002_801A86E4;
extern u8 D_sc04_002_801A8A4C;
extern void (*D_sc04_002_801A1ED8[])();
extern s32 func_sc04_002_801826E8();
extern void func_sc04_002_80182CBC();
extern u8 D_sc04_002_801A8C44;
extern void TakeDamageAndRecoil();
extern void UpdateModelZYX();
extern s32 SetForwardVelocity();
extern void PlayDistanceSound32();
extern void FinishEnemy();
extern s32 RestorePrevPos();
extern void SetReactionStep();
extern void EndReaction();
extern s32 func_sc04_002_80182618();
extern s32 func_sc04_002_80181FE0();
extern void func_sc04_002_80182BA4();
extern s32 func_sc04_002_801821C4();
extern s32 func_sc04_002_801822EC();
extern void StopWithHalfGravity();
extern u8 D_sc04_002_801A1F34;
extern void (*D_sc04_002_801A1F44[])();
extern void CarryPlayerExact();
extern void func_sc04_002_80183A88();
extern void (*D_sc04_002_801A9618[])();
extern s16 g_PlayerHitKind;
extern u8 D_sc04_002_801A9624;
extern void func_sc04_002_80184CEC();
extern u8 D_sc04_002_801A94F4;
extern u8 D_sc04_002_801A9528;
extern s32 SpawnActorArg();
extern s32 FindOtherActorByKind();
extern u8 D_sc04_002_801B4F00;
extern u8 D_sc04_002_801B501C;
extern u8 D_sc04_002_801BD950;
extern s32 func_80143994();
extern s32 func_sc04_002_80186544();
extern u8 D_sc04_002_801BD9F8;
extern u8 D_sc04_002_801BDAA0;
extern s32 StopMotion();
extern u8 D_sc04_002_801BDD38;
extern u8 D_sc04_002_801BE120;
extern s32 MoveCollide();
extern u8 D_sc04_002_801B4F34;
extern u8 D_sc04_002_801BE018;
extern u8 D_sc04_002_801BDBB0;
extern u8 D_sc04_002_801BDC18;
extern u8 D_sc04_002_801BDCD0;
extern u8 D_sc04_002_801BE288;
extern void func_sc04_002_80186078();
extern s32 DespawnActor();
extern void func_sc04_002_80186DD4();
extern u8 D_sc04_002_801B4F44;
extern void (*D_sc04_002_801B511C[])();
extern void func_sc04_002_8018739C();
extern u8 D_sc04_002_801B7690;
extern u8 D_sc04_002_801B5124;
extern u8 D_sc04_002_801B5130;
extern void StartSpriteAnim();



extern u8 D_sc04_002_8018C020;
extern s32 ShowQueuedDamageNumber();
extern s32 SetPlayerMotion();
extern s32 HeadingTo();
extern u8 D_sc04_002_801B4F64;
extern void func_sc04_002_80187604();

extern s32 func_sc04_002_80182564();
extern s32 func_sc04_002_80182808();
s32 func_sc04_002_80181CE8(s32 arg0, s32 arg1);
extern void func_sc04_002_80183648();

extern u8 D_sc04_002_801C0FF8[];
extern u8 D_sc04_002_801A88C4;
s32 func_sc04_002_80181F40(StageActor *arg0);

extern u8 D_sc04_002_8018BDE4[];
extern void SetVelFromPushKeepAxes();
extern void MoveObjByVel();
extern void AddFallSpeedLimited();
extern void ApplyFallSpeed();
extern s32 func_801535F4();
s32 func_sc04_002_8017D098(s32 arg0);
extern void StartPlayerSlide();

extern s32 func_sc04_002_80181CE8();
extern void func_sc04_002_80181C7C();

extern u8 D_sc04_002_801A1C04;
extern u8 D_sc04_002_801A1D24;
extern u8 D_sc04_002_801C16BC;
extern void func_8001C810();
extern s32 func_sc04_002_80183614();
extern s32 func_sc04_002_801835E0();

extern void (*D_sc04_002_801B50A4[])();
extern void func_sc04_002_8018615C();
extern s32 func_sc04_002_801862F0();
extern void func_sc04_002_80186638();
extern u8 * func_sc04_002_801867A0();
extern s32 func_sc04_002_8018612C();
extern void DespawnIfFar();

extern s32 D_8011F9C4;
extern u8 D_sc04_002_8018C88C;
extern u8 D_sc04_002_8018C9CC;
extern void SetVar32();
s32 func_sc04_002_8017FFC0(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc04_002_8018C9E0;
extern u8 D_sc04_002_8018CA58;
extern s32 PlayerEvent08();
extern void func_sc04_002_8018047C();
extern void *g_PlayerModel;
extern u8 D_sc04_002_80198CF4;
s32 func_sc04_002_80180A9C();

extern s32 MoveOnGround();
extern s32 D_8011F730;
extern s32 func_sc04_002_801861D0();
extern s32 CalcPower02();

extern u8 D_sc04_002_8018C06C;
extern s32 D_sc04_002_8018C084[];
extern void func_sc04_002_8017F120();
extern void QueueImage();
extern void func_sc04_002_8017F72C();
extern s32 func_sc04_002_8017F73C();
extern void ClearEffectKind();

#include "gte.h"
#include "psyq.h"
extern s32 func_sc04_002_80181FA4();
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc04_002_801C150C[4];
extern CV D_sc04_002_801C152C;
extern CV D_sc04_002_801C1530;
extern u8 D_sc04_002_801C1534;
extern u8 D_sc04_002_801C1535;
extern u8 D_sc04_002_801C1536;
extern u8 D_sc04_002_801C1538;
extern u8 D_sc04_002_801C1539;
extern u8 D_sc04_002_801C153A;
extern s32 D_sc04_002_801C153C;
extern void SetIdentityRot();
extern void RotMatrixZ();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void DrawPrimG4Screen();
extern int rand();
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc04_002_8018BF40;
extern u8 D_sc04_002_8018BEDC[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern void SetShapeCircle();
extern u8 D_sc04_002_801C0DE8;
extern u8 D_sc04_002_801C0DE9;
extern u8 D_sc04_002_801C0DEA;
extern u8 D_sc04_002_801C0DEC;
extern u8 D_sc04_002_801C0DED;
extern u8 D_sc04_002_801C0DEE;
extern s32 D_sc04_002_801C0FEC;
extern s32 D_sc04_002_801C0FF0;
extern s32 D_sc04_002_801C0FF4;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc04_002_801B1CB4;

void func_sc04_002_8017BEBC(u8 *obj) {
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

void func_sc04_002_8017CD9C(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_002_8018BE1C);
    D_sc04_002_8018BE74[AF(arg0, u16, 2)](arg0);
}

void func_sc04_002_8017CDF4(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc04_002_8017CE3C(arg0);
    NextObjState(arg0);
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc04_002_8018BFBC[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
extern s32 SpawnActor();
extern u8 D_sc04_002_801A939C;
extern u8 D_sc04_002_801A9174;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 HeadingPitchTo();
extern void MoveObject();
extern u8 D_sc04_002_801A9218;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern void func_sc04_002_80188284();

extern u8 D_sc04_002_8018BE24;
extern u8 D_sc04_002_8018BDDC[];
extern u8 D_sc04_002_8018BDE0[];
extern void SetObjPush();
extern void SetFallSpeed();

void func_sc04_002_8017CE3C(s32 arg0) {
    s16 temp_v0;

    temp_v0 = (AF(arg0, u16, 0xF4) + 0x800) & 0xFFF;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = temp_v0;
    AF(arg0, s16, 0x244) = temp_v0;
    SetPlayerMotion(arg0, (s32) &D_sc04_002_8018BE24);
    AF(arg0, s32, 0x234) = 0;
    StartFace(arg0, 0x1C);
    SetObjPush(arg0, 0, 0, *(s32 *)&D_sc04_002_8018BDDC[(AF(arg0, s16, 0xF2) * 0x10)]);
    SetFallSpeed(arg0, *(s32 *)&D_sc04_002_8018BDE0[(AF(arg0, s16, 0xF2) * 0x10)]);
    ClearPlayerHittable(arg0);
    SetObjTimer(arg0, 0x96);
    NextObjState(arg0);
}

void func_sc04_002_8017CEF4(u8 *arg0) {
    u16 s;
    u8 *o;

    o = AF(arg0, u8 *, 0x20);
    ClearPlayerHittable(arg0);
    s = AF(o, u16, 0x12);
    AF(o, u16, 0x12) = AF(arg0, u16, 0x244);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, *(s32 *)(D_sc04_002_8018BDE4 + AF(arg0, s16, 0xF2) * 0x10));
    ApplyFallSpeed(arg0);
    AF(o, u16, 0x12) = s;
    if (AF(arg0, s32, 0x234) == 0 && AF(arg0, s32, 0x34) >= 0 && (AF(arg0, u16, 0xB8) & 0x8000)) {
        AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
        AF(arg0, s32, 0x234) += 1;
    }
    switch (func_801535F4(arg0)) {
    case 1:
        func_sc04_002_8017D098(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect(2, arg0, 0, 0, 0, 1, 0);
        func_80165718(arg0);
        break;
    case 2:
        func_sc04_002_8017D098(arg0);
        StartPlayerSlide(arg0);
        SpawnEffect(2, arg0, 0, 0, 0, 1, 0);
        func_80165718(arg0);
        break;
    case 0:
    default:
        if (TickObjTimer(arg0) != 0) {
            func_sc04_002_8017D098(arg0);
            EnterPlayerStanding(arg0);
            SpawnEffect(2, arg0, 0, 0, 0, 1, 0);
            func_80165718(arg0);
        }
        break;
    }
}

s32 func_sc04_002_8017D098(s32 arg0) {
    return ResetPlayerAfterHit(arg0);
}

extern u8 g_CameraFocus;
extern u8 D_sc04_002_8018C48C[];
extern s32 GetObjPadPressed();
extern void func_sc04_002_8017FE28();
typedef struct { u8 b[8]; } B8;
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;

extern s32 FindActorByKind();
extern u8 D_sc04_002_8018C578;
extern s32 SpawnPropAt();
extern void ObjLocalToWorld();

extern u8 D_sc04_002_801C100C;
extern s32 func_sc04_002_80180D48();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern u8 D_sc04_002_8018BEA8;
extern u8 D_sc04_002_8018BEE4;
extern u8 D_sc04_002_801B1C8C;
extern u8 D_sc04_002_801C0D78;
extern u8 D_sc04_002_801C0D84;
extern u8 D_sc04_002_801C0D85;
extern u8 D_sc04_002_801C0D86;
extern u8 D_sc04_002_801C0D94;
extern u8 D_sc04_002_801C0D95;
extern u8 D_sc04_002_801C0D96;
extern u8 D_sc04_002_801C0DA5;
extern u8 D_sc04_002_801C0DA6;
extern u8 D_sc04_002_801C0DA8;
extern u8 D_sc04_002_801C0DA9;
extern u8 D_sc04_002_801C0DAA;
extern u8 D_sc04_002_801C0DAC;
extern u8 D_sc04_002_801C0DAD;
extern u8 D_sc04_002_801C0DAE;
extern u8 D_sc04_002_801C0DB4;
extern u8 D_sc04_002_801C0E28;

extern s32 AllocSprite16To3E();
extern void InitNullSprite();
extern void PosToSVec();
extern void SVecToPos();
extern u16 D_sc04_002_8018C0F8[];
extern V4 D_sc04_002_8018C0E8;
extern SV8 D_sc04_002_8018C0B8[];
extern s32 D_80126B84;
extern u8 D_sc04_002_801BDF60;
extern u8 D_sc04_002_801BDB28;
extern void func_sc04_002_801863A4();
extern void AnimStepNow();
extern s32 TraceMap();
extern s16 D_sc04_002_801B5118[];
extern void func_sc04_002_801878B0();
extern s8 D_sc04_002_801B4F84[];
extern s8 D_sc04_002_801B4F98[];
extern s8 D_sc04_002_8018B4D8[];
extern s8 D_sc04_002_8018B4EC[];

extern u8 g_WallNormal;
extern s32 TurnStep();
extern s32 HeadingToSV();
extern u8 D_sc04_002_801B500C;
extern u8 D_sc04_002_801B7624;
extern u8 D_sc04_002_801B765C;
extern void GetPartWorldMatrix();
extern s32 SpawnActorFromDef();
extern void SetModelParts();
extern s32 PosDistSq();
extern s32 D_80126B68;
extern s32 D_80126B70;
extern u16 g_PlayerX;
extern u16 D_80126B66;
extern s32 CanGuard();
extern s32 PlayerEvent100();
extern void ProjectPoint();
extern s32 SVecDistSq();
extern s32 TargetInFront();

extern void PlaySoundFor();
extern u8 D_sc04_002_801A90AC;
extern u8 D_sc04_002_801A8B94;
extern u8 D_sc04_002_801A95C8;
extern SV8 D_sc04_002_801A95D8;

extern void func_8001CD9C();
extern SV8 D_sc04_002_80198D6C[];
extern CV *D_sc04_002_80198D50[];
extern u8 D_sc04_002_801BDE00;
extern s32 CalcPower03();

extern void RotateMatrixBy();
extern void DrawPrimF3();
extern SV8 D_sc04_002_801A1F54;
extern V3 D_sc04_002_801A1F5C;
extern void RotMatrixY();
extern void RotTransSV();
extern void ApplyRotMatrixLV();
extern s32 DistSq();
extern s32 AngleToVec2();
extern s32 CollidePath();
extern void *g_ActiveCamera;
extern void ApplyMatrixSV();
extern void RotMatrixYXZ();
extern void ApplyTransposeMatrixLV();
extern s32 ratan2();

extern u8 g_GroundNormal;
extern s32 HeadingToPlayer();
extern s32 HitPlayer();
extern u8 D_sc04_002_801A95FC;
extern u8 D_sc04_002_801B169C;
extern s32 g_PlayerHitData;
extern s32 PathHitsModel();

extern void func_sc04_002_801829E8();
extern void func_80020F34();
extern s16 D_sc04_002_801A1F04;
extern s16 D_sc04_002_801A1F06;
extern s16 D_sc04_002_801A1F08;
extern s32 D_sc04_002_801A42F4;
extern s32 D_sc04_002_801A4304;
extern s32 D_sc04_002_801C1580[];
extern s32 D_sc04_002_801C1590;
extern s32 D_sc04_002_801C159C;

extern s32 IsActorFar();
extern void HideModel();
extern u16 D_sc04_002_801A9588[];
extern u16 D_sc04_002_801C15A0[];
extern u8 D_sc04_002_801A95A8;

extern u8 D_sc04_002_801A176C;
extern u8 D_sc04_002_801A1874;
extern s32 TurnStepToTarget();
extern s32 SetLocalVelocityXZ();
extern u8 D_sc04_002_80198ED8;
extern u8 D_sc04_002_80198EE0;
extern s32 ActorSegmentHitsPlayer();
extern s16 g_PlayerHitFacing;
extern s16 g_PlayerHitDamage;
extern s32 GroundDistSqTo();
extern u8 D_sc04_002_801A1E2C;
extern s32 D_sc04_002_801C1540[];
extern s32 D_sc04_002_801C1554;
extern u8 D_sc04_002_801A1E60;
extern s32 SnapToGround();


typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 D_sc04_002_801C0D7C;
extern s32 D_sc04_002_801C0D80;
extern s32 D_sc04_002_801C0D88;
extern s32 D_sc04_002_801C0D8C;
extern s32 D_sc04_002_801C0D90;
extern s32 D_sc04_002_801C0D98;
extern s32 D_sc04_002_801C0D9C;
extern s32 D_sc04_002_801C0DA0;

void func_sc04_002_8017D0B8(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc04_002_801C0D78 = D_sc04_002_801C0D88 = D_sc04_002_801C0D98 = v.vx;
    D_sc04_002_801C0D7C = D_sc04_002_801C0D8C = D_sc04_002_801C0D9C = v.vy;
    D_sc04_002_801C0D80 = D_sc04_002_801C0D90 = D_sc04_002_801C0DA0 = v.vz;
}

void func_sc04_002_8017D1E8(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc04_002_8018BEA8) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc04_002_801B1C8C);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc04_002_8018BEE4);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc04_002_801C0D78;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc04_002_801C0DA8;
        func_8001CD50(o, p);
        D_sc04_002_801C0DAA = 0x80;
        p[0] = 0x80;
        D_sc04_002_801C0DA9 = 0xE0;
        D_sc04_002_801C0DAD = 0;
        D_sc04_002_801C0DAC = 0;
        D_sc04_002_801C0DAE = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc04_002_801B1CB4;
        b = (U12x9 *) &D_sc04_002_801C0E28;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc04_002_801C0DA6 = 0xFF;
        D_sc04_002_801C0DB4 = 0xFF;
        D_sc04_002_801C0D96 = 0xFF;
        D_sc04_002_801C0D94 = 0xFF;
        D_sc04_002_801C0D86 = 0xFF;
        D_sc04_002_801C0D84 = 0xFF;
        D_sc04_002_801C0DA5 = 0x80;
        D_sc04_002_801C0D95 = 0x80;
        D_sc04_002_801C0D85 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc04_002_801C0E28;
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

void func_sc04_002_8017D574(u8 *arg0) {
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
    func_sc04_002_8017D0B8(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc04_002_8018BEDC[(s16) i]) {
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
            StartEvent(arg0, &D_sc04_002_8018BF40);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc04_002_8017D7EC(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc04_002_801C0DE8;
        func_8001CD50(o, p);
        D_sc04_002_801C0DE9 = 0xFF;
        D_sc04_002_801C0DEA = 0xFF;
        p[0] = 0xFF;
        D_sc04_002_801C0DEE = 8;
        D_sc04_002_801C0DEC = 8;
        D_sc04_002_801C0DED = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc04_002_801C0FEC;
        q[0] = v.vx;
        D_sc04_002_801C0FF0 = v.vy;
        D_sc04_002_801C0FF4 = v.vz;
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

void func_sc04_002_8017D934(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc04_002_801B1CB4;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc04_002_8017D0B8(arg0, 0);
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

void func_sc04_002_8017DAB4(StageActor *arg0) {
    D_sc04_002_8018BF90[arg0->state]();
}

void func_sc04_002_8017DAF0(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc04_002_8017DB3C(StageActor *arg0) {
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
        func_sc04_002_8017D0B8((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

s32 func_sc04_002_80183904(s32 arg0, s32 arg1, u16 arg2);
extern void FreeShadow();
extern s32 func_sc04_002_80183790();
extern s32 func_sc04_002_80183820();
void func_sc04_002_80183BE4(s32 arg0, s32 arg1);
extern u8 D_sc04_002_801A1F24;
extern void EmitProp23();
extern u8 D_sc04_002_801A8FC4;
extern SV8 D_sc04_002_801A1F0C[];
extern s32 GroundDistSqToFocus();
extern s32 HeadingToTarget();
extern s32 D_sc04_002_801C1570;
extern s32 D_sc04_002_801C1560[];


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
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
extern u8 D_sc04_002_8018C048;
extern s32 func_800D21C4();
extern void func_sc04_002_8017F104();
extern void ObjLocalToWorld16();
extern void CallActionHandler();
extern void ResetScriptVM();
extern s32 GroundDistSqToPlayer();
extern void func_sc04_002_80188344();
extern u8 D_sc04_002_801AB044;
extern u8 D_sc04_002_801BE330;
extern u8 D_sc04_002_801BE33C;
extern s32 func_sc04_002_8018822C();
extern s32 AllocActorSprite();

void func_sc04_002_8017DC30(StageActor *arg0) {
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

void func_sc04_002_8017DCB0(StageActor *arg0) {
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

void func_sc04_002_8017DD64(StageActor *arg0) {
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

void func_sc04_002_8017DDD0(StageActor *arg0, s32 arg1) {
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

void func_sc04_002_8017DE5C(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc04_002_8017DE7C(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc04_002_8017D0B8(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc04_002_8017DED0(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc04_002_8017DF0C(u8 *arg0) {
    D_sc04_002_8018BFE8[AF(arg0, u16, 2)]();
}

void func_sc04_002_8017DF48(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_8017DF98(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017DFF4(u8 *arg0) {
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
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017E078(u8 *arg0) {
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
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017E1E0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_002_8017E22C((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_002_8017E22C(u8 *arg0) {
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
    t = D_sc04_002_8018BFBC;
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
    t = D_sc04_002_8018BFBC;
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
        t = D_sc04_002_8018BFBC;
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

void func_sc04_002_8017E538(u8 *arg0) {
    D_sc04_002_8018BFFC[AF(arg0, u16, 2)]();
}

void func_sc04_002_8017E574(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_8017E5B4(u8 *arg0) {
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
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017E624(u8 *arg0) {
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
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017E6B0(u8 *arg0) {
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
    func_sc04_002_8017E22C((s32) arg0);
}

void func_sc04_002_8017E784(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_002_8017E22C((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc04_002_8017E7D8(u8 *arg0) {
    D_sc04_002_8018C010[AF(arg0, u16, 2)]();
}

void func_sc04_002_8017E814(u8 *arg0) {
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

void func_sc04_002_8017E8C8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc04_002_8017E924((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_002_8017E924(u8 *arg0) {
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

void func_sc04_002_8017EA94(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_002_8018C018);
    D_sc04_002_8018C03C[AF(arg0, u16, 2)](arg0);
}

void func_sc04_002_8017EAEC(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc04_002_8017EB34(arg0);
    NextObjState(arg0);
}

void func_sc04_002_8017EB34(s32 arg0) {
    ClearPlayerHittable(arg0);
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc04_002_8018C020);
    AF(arg0, u8, 0xDE) = 0x5A;
    PlaySe(0x7EB);
    SpawnEffect(0x3F, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    SetPlayerEvent100(arg0);
    NextObjState(arg0);
}

void func_sc04_002_8017EBBC(s32 arg0) {
    u8 temp_v1;

    ClearPlayerHittable(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_sc04_002_8017EC20(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
        return;
    }
    SetPlayerEvent100(arg0);
}

s32 func_sc04_002_8017EC20(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc04_002_8017EC70(u8 *arg0) {
    D_sc04_002_8018C074[AF(arg0, u16, 2)]();
}

void func_sc04_002_8017ECAC(s32 arg0) {
    V4 v;
    WMtx m;
    u8 *o;

    o = (u8 *)func_800D21C4(arg0, &D_sc04_002_8018C048, 0x2B);
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        AF(o, s16, 0x28) = 0x224;
        AF(o, s16, 0x2A) = 0x1A8;
        AF(o, s16, 0x1A) = 0x3000;
        AF(o, s16, 0x18) = 0x3000;
        AF(o, s16, 0x14) = -0x400;
        AF(o, u16, 0x2C) = 0xC080;
        AF(o, s32, 4) |= 0x48000000;
        func_sc04_002_8017F104(arg0);
        func_sc04_002_8017F120(arg0);
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x30) = 0;
        SetObjTimer(arg0, 0x5A);
        AF(arg0, u16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void func_sc04_002_8017ED68(u8 *arg0) {
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s6;

    temp_s6 = AF(arg0, void *, 0x20);
    func_sc04_002_8017F120((s32) arg0);
    temp_v0 = AF(arg0, s32, 0x30);
    if (temp_v0 == 0) {
        var_a0 = D_sc04_002_8018C084[AF(arg0, s32, 0x2C)];
        if (var_a0 == 0) {
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x2C) = 0;
            var_a0 = D_sc04_002_8018C084[0];
        }
        QueueImage(var_a0);
        AF(arg0, s32, 0x2C) = (s32) (AF(arg0, s32, 0x2C) + 1);
    } else {
        AF(arg0, s32, 0x30) = temp_v0_2 = temp_v0 - 1; if ((temp_v0_2 == 0) && (AF(arg0, s32, 0x1C) != 0)) {
            PlaySe(0x7EC);
        }
    }
    temp_s5 = AF(arg0, s32, 0x1C);
    if (temp_s5 == 1) {
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ 0);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ temp_s5, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 2, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 3, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 4, /* extra? */ temp_s5);
        SpawnEffect(0x40, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 5, /* extra? */ temp_s5);
        func_sc04_002_8017F72C((s32) &D_sc04_002_8018C06C);
        PlaySe(0x7F4);
        AF(temp_s6, s32, 4) = (s32) (AF(temp_s6, s32, 4) | 0x80000000);
    }
    if ((TickObjTimer((s32) arg0) != 0) && (func_sc04_002_8017F73C((s32) &D_sc04_002_8018C06C) != 0)) {
        ClearEffectKind(0x40);
        FreeEffect((s32) arg0);
    }
}

void func_sc04_002_8017F104(s32 *arg0) {
    arg0[4] = arg0[1];
    arg0[5] = arg0[2];
    arg0[6] = arg0[3];
}

void func_sc04_002_8017F120(s32 arg0) {
    s32 t = AF(arg0, s32, 0x34);
    AF(arg0, s32, 4) = AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) = AF(arg0, s32, 0x18);
    ObjLocalToWorld16(t, arg0 + 4);
}

void func_sc04_002_8017F160(u8 *arg0) {
    D_sc04_002_8018C0AC[AF(arg0, u16, 2)]();
}

void func_sc04_002_8017F19C(u8 *o) {
    SV8 a;
    SV8 r;
    WMtx m;
    V4 v;
    u8 *p;
    u8 *w;
    s16 *q;
    s32 i;

    p = AF(o, u8 *, 0x34);
    w = (u8 *)AllocSprite16To3E();
    AF(o, u8 *, 0x20) = w;
    if (w != 0) {
        InitNullSprite(w);
        AF(w, s32, 4) |= 0x80000000;
        PosToSVec(p + 4, &a);
        SVecToPos(&a, o + 4);
        AF(w, u16, 0x18) = AF(w, u16, 0x1A) = AF(w, u16, 0x1C) = D_sc04_002_8018C0F8[AF(o, s32, 0x30)];
        v = D_sc04_002_8018C0E8;
        r = D_sc04_002_8018C0B8[AF(o, s32, 0x2C)];
        if (AF(o, s32, 0x30) != 0) {
            r.x += (rand() & 0x3F) * 16 - 0x200;
            r.y += (rand() & 0x3F) * 16 - 0x200;
            r.z += (rand() & 0x3F) * 16 - 0x200;
            v.x = ((rand() & 0x1F) - 0x10) << 16;
            v.y = ((rand() & 0x1F) - 0x10) << 16;
            v.z = ((rand() & 0x1F) - 0x10) << 16;
        }
        RotMatrixZYX(&r, &m);
        ApplyMatrixLV(&m, &v, &v);
        AF(o, s32, 0x10) = v.x;
        AF(o, s32, 0x14) = v.y;
        AF(o, s32, 0x18) = v.z;
        AF(o, s32, 0x4C) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x50) = ((rand() & 0x1F) - 0x10) * 11;
        AF(o, s32, 0x54) = ((rand() & 0x1F) - 0x10) * 11;
        q = (s16 *)(o + 0x38);
        for (i = 0; i < 3; i++) {
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
            *q++ = (rand() & 0x7F) - 0x40;
        }
        SetObjTimer(o, 2);
        AF(o, s16, 2)++;
    } else {
        FreeEffect(o);
    }
}

void func_sc04_002_8017F470(s32 arg0) {
    func_sc04_002_8017F534(arg0);
    func_sc04_002_8017F6B8(arg0);
    if (TickObjTimer(arg0) != 0) {
        AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 2);
        AF(arg0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 2);
        SetObjTimer(arg0, 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_002_8017F4EC(s32 arg0) {
    func_sc04_002_8017F534(arg0);
    func_sc04_002_8017F6B8(arg0);
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
    }
}

s32 func_sc04_002_8017F534(s32 arg0) {
    func_sc04_002_8017F55C(arg0, (s32) &D_sc04_002_8018C054);
}

void func_sc04_002_8017F55C(u8 *o, u8 *p) {
    WMtx m;
    SV8 v;
    u8 *q;

    q = AF(o, u8 *, 0x20);
    AF(p, s32, 0x1C) = 0x50000000;
    SetScaleMatrix(q + 0x18, &m);
    RotateMatrixBy(q + 0x10, &m);
    PosToSVec(o + 4, &v);
    SetMatrixTrans(&v, &m);
    DrawPrimF3(p, &m);
    m.t[0] += AF(o, s16, 0x38);
    m.t[1] += AF(o, s16, 0x3A);
    m.t[2] += AF(o, s16, 0x3C);
    DrawPrimF3(p, &m);
    SetMatrixTrans(&v, &m);
    m.t[0] += AF(o, s16, 0x3E);
    m.t[1] += AF(o, s16, 0x40);
    m.t[2] += AF(o, s16, 0x42);
    DrawPrimF3(p, &m);
    SetMatrixTrans(&v, &m);
    m.t[0] += AF(o, s16, 0x44);
    m.t[1] += AF(o, s16, 0x46);
    m.t[2] += AF(o, s16, 0x48);
    DrawPrimF3(p, &m);
}

void func_sc04_002_8017F6B8(u8 *arg0) {
    u8 *p;
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x10) += AF(arg0, s32, 0x4C);
    AF(p, s16, 0x12) += AF(arg0, s32, 0x50);
    AF(p, s16, 0x14) += AF(arg0, s32, 0x54);
}

void func_sc04_002_8017F72C(u8 *arg0) {
    AF(arg0, s32, 0) = 0x80404080;
}

s32 func_sc04_002_8017F73C(u8 *p) {
    s32 t;
    s16 v;

    t = p[3] - 2;
    p[3] = t;
    if (t & 0xFF) {
    if (D_800B99DA & 1) {
        v = (u8)t;
    } else {
        v = (u8)t + 0x40;
    }
    if (v > 0x100) {
        v = 0xFF;
    }
    p[2] = v;
    if (v < p[0]) {
        p[0] = v;
    }
    if (v < p[1]) {
        p[1] = v;
    }
    return 0;
    }
    return 1;
}

void func_sc04_002_8017F7C8(void) {
    D_8011F9C4 = 1;
    SetFlag(0xC8, 1);
    SetVar32(4, 0xC8);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_002_8018C88C;
    g_SpawnListRanged = &D_sc04_002_8018C9CC;
    func_sc04_002_8017FFC0(0);
}

void func_sc04_002_8017F838(void) {
    D_8011F9C4 = 1;
    SetFlag(0xC9, 1);
    SetVar32(4, 0xC9);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_002_8018C9E0;
    g_SpawnListRanged = &D_sc04_002_8018CA58;
    func_sc04_002_8017FFC0(1);
}

void func_sc04_002_8017F8A8(u8 *arg0) {
    D_sc04_002_8018C454[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_002_8017F8E4(u8 *arg0) {
    func_sc04_002_8017FAD8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_002_8017F928(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc04_002_8017F94C(u8 *arg0) {
    func_sc04_002_8017FB00();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_002_8017F98C(u8 *arg0) {
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

void func_sc04_002_8017FA08(void) {
    func_800D1EBC();
}

void func_sc04_002_8017FA28(u8 *arg0) {
    D_sc04_002_8018C468[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_002_8017FA64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc04_002_8017FAD8(void) {
    StartPlayerActionScript((s32) &D_sc04_002_8018C474, 0x01000000);
}

void func_sc04_002_8017FB00(void) {
    StartPlayerActionScript((s32) &D_sc04_002_8018C478, 0x01000000);
}

void RoomCameraInit(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_002_8017FC5C, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_002_8017FC5C((s32) &g_Camera);
}

void RoomCameraInitAlt(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_002_8017FC5C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc04_002_8017FC5C((s32) &g_Camera);
}

void func_sc04_002_8017FC5C(s32 arg0) {
    D_sc04_002_8018C484[AF(arg0, u8, 4)]();
}

void func_sc04_002_8017FC98(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_002_8018C48C)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc04_002_8017FE28((s32) arg0, (s32) &v);
}


extern WorkHead D_800AF630;

extern SV8 D_sc04_002_801B50F8[];



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
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void RotateSVectorY();

extern void InitSpriteKind2();
extern u8 D_sc04_002_801A960C;

extern u8 D_sc04_002_8018C490[];
extern u8 D_sc04_002_8018C4AC;
extern s32 GetFlag();
extern u8 D_sc04_002_8018C4E8;
extern s32 SpawnTalkMarker();
s32 *func_sc04_002_80180258(u8 *arg0);

void func_sc04_002_8017FD38(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_002_8018C490)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 2) >= -0x282) {
        AF(arg0, s16, 0x20) = (s16)(-0x82 - AF(&v, s16, 2)) * 0x1C7 / 512 + 0x1C7;
    }
    func_sc04_002_8017FE28((s32) arg0, (s32) &v);
}

void func_sc04_002_8017FE28(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_002_8017FFC0(s32 arg0) {
    return func_8013B7F4(D_sc04_002_8018C494[arg0], 0);
}

extern void (*D_sc04_002_8018C560[])();

void func_sc04_002_8017FFF0(u8 *o) {
    s16 *g;

    if (AF(o, u16, 2) != 0) {
        UpdateModelZYX(o);
    }
    g = (s16 *)&g_PlayerX;
    if (*g < -0x57F) {
        *g = -0x580;
    }
    D_sc04_002_8018C560[AF(o, u16, 2)](o);
}

s32 func_sc04_002_80180070(void) {
    return func_800D0F8C(0x61) != 0;
}

void func_sc04_002_80180090(StageActor *o) {
    if (SetupActor(o, &D_sc04_002_8018C4AC) != 0) {
        if (GetFlag(0xDB) & 0xFF) {
            FreeActor(o);
        } else {
            o->reactive = 1;
            o->targetClass = 2;
            AF(o, s16, 0xAE) = -1;
            o->reactMask = 0;
            o->state = 1;
            o->reactOpts |= 3;
            SetScript(o, &D_sc04_002_8018C4E8);
            o->link = SpawnTalkMarker(o, (s32) &func_sc04_002_80180258);
            o->model->unk04 |= 0x1000000;
        }
    }
}

void func_sc04_002_80180150(void) {
}

void func_sc04_002_80180158(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc04_002_8018C4F0);
    arg0->state = 3;
}

void func_sc04_002_80180190(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
        if (arg0->stateCount != 0) {
            SetFlag(0xDB, 1);
            PlaySoundId(4, 0xB1D);
            FreeActor(arg0->link);
            FreeActor(arg0);
            return;
        }
    }
    if (arg0->work10A != 0) {
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 2);
        arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i ^ 2);
        if ((arg0->origin[1] - (s16) (u16)arg0->pos[1].h.i) >= 0x121) {
            arg0->work10A = 0;
            PlaySoundId(4, 0xB1D);
        }
    }
}

s32 *func_sc04_002_80180258(u8 *arg0) {
    s32 *r;

    if (GroundDistSqToPlayer(AF(arg0, s32, 0x64)) < 0x2401) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc04_002_801802B4(void) {
    return 0x55;
}

void func_sc04_002_801802BC(StageActor *arg0) {
    D_sc04_002_8018C570[arg0->state]();
}

void func_sc04_002_801802F8(s32 arg0) {
    SetMoverTimer(arg0, 0);
    NextState(arg0);
}

void func_sc04_002_8018032C(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(g_PlayerModel, s32, 4) >= 0) && (PlayerEvent08((s32) &g_Player) == 0)) {
            case 1:
                func_sc04_002_8018047C(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_002_8018047C(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_002_8018047C(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_002_8018047C(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_002_8018047C(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_002_8018047C(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        SetMoverTimer(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_002_8018047C(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_002_8018C578;
    switch (t) {
    case 0:
        ObjLocalToWorld((s32) &g_Player, (s32) p, (s32) &sp10);
        SpawnPropAt(0x56, (s32) &sp10);
        break;
    case 1:
        v = FindActorByKind(0x245);
        if (v != 0) {
            FaceHelper(v, (s32) p, (s32) &sp10);
            SpawnPropAt(0x56, (s32) &sp10);
        }
        break;
    default:
        q = (u8 *)&g_Actors;
        for (i = 0; i < 0x60; i++, q += 0x10C) {
            if (*(u16 *)q == AF(p, s16, 6)) {
                FaceHelper((s32) q, (s32) p, (s32) &sp10);
                SpawnPropAt(0x56, (s32) &sp10);
            }
        }
        break;
    }
}

void func_sc04_002_80180568(u8 *arg0) {
    D_sc04_002_8018C5AC[AF(arg0, u16, 2)]();
}

void func_sc04_002_801805A4(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    CopyPosInt(arg0 + 4, (s32) (arg0 + 0x10));
    InitSpriteKind3(temp_s1, (s32) &D_sc04_002_8018C5A0, 0x270, 0x100);
    AF(temp_s1, u8, 0x27) = 0x9C;
    AF(temp_s1, u8, 0x26) = 0x40;
    AF(temp_s1, u8, 0x25) = 0x40;
    AF(temp_s1, u8, 0x24) = 0x40;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0xD0000000);
    AF(arg0, s32, 0x2C) = 0;
    AF(arg0, s16, 0x30) = (s16) ((rand() & 3) + 1);
    temp_s0 = rand();
    AF(temp_s1, s16, 0x12) = (s16) (((temp_s0 & 3) << 0xA) + ((rand() & 0xF) * 0x44));
    SetObjTimer((s32) arg0, rand() & 0xF);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_80180688(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        SetObjTimer((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_002_801806F4(u8 *o) {
    u8 *p;
    SV8 v;
    u16 a;

    p = AF(o, u8 *, 0x20);
    a = AF(o, u16, 0x2C) + 0x40;
    AF(o, u16, 0x2C) = a;
    v.z = rsin((s16)a) / 256;
    v.x = v.y = 0;
    RotateSVectorY(AF(p, s16, 0x12), &v, &v);
    AF(o, s16, 6) = AF(o, s16, 0x12) + v.x;
    AF(o, s16, 0xE) = AF(o, s16, 0x1A) + v.z;
    AF(o, s16, 0xA) -= AF(o, s16, 0x30);
    AF(o, s16, 0x2E) += 0x10;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + AF(o, s16, 0x2E);
    AF(p, u8, 0x24) = AF(p, u8, 0x25) = AF(p, u8, 0x26) = AF(p, u8, 0x26) - 4;
    if (TickObjTimer(o) != 0) {
        FreeProp(o);
    }
}

void func_sc04_002_801807E0(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_002_80198CEC);
    D_sc04_002_80198D14[AF(arg0, u16, 2)](arg0);
}

void func_sc04_002_80180838(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc04_002_80180888(arg0);
    PlaySe(0x92F);
    NextObjState(arg0);
}

s32 func_sc04_002_80180888(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc04_002_80198CF4);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc04_002_80180A9C();
    SetPlayerEvent100(arg0);
    return NextObjState(arg0);
}

void func_sc04_002_801808F4(u8 *o) {
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
        k = func_sc04_002_80180AC0();
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
        func_sc04_002_80180A48(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    } else {
        SetPlayerEvent100(o);
    }
}

s32 func_sc04_002_80180A48(s32 arg0) {
    PlaySePositional(4, 0x92F);
    PlaySe(0x930);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc04_002_80180A9C(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc04_002_801C100B;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc04_002_80180AC0(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc04_002_801C0FF8; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc04_002_80180B04(u8 *arg0) {
    D_sc04_002_80198D20[AF(arg0, u16, 2)]();
}

void func_sc04_002_80180B40(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc04_002_801C100C;
    e = (u8 *)AllocSprite16To3E();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        SetShapeCircle(p, 0x10);
        func_sc04_002_80180D34(p);
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
        func_sc04_002_80180D04(o);
    }
}

void func_sc04_002_80180C8C(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc04_002_801C100C;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc04_002_80180D48((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc04_002_80180D04((s32) arg0);
}

void func_sc04_002_80180D04(s32 arg0) {
    D_sc04_002_801C0FF8[AF(arg0, s32, 0x2C)] = 0;
    FreeEffect(arg0);
}

void func_sc04_002_80180D34(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc04_002_80180D48(u8 *o, u8 *p) {
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

void func_sc04_002_80180DB0(u8 *arg0) {
    D_sc04_002_80198D58[AF(arg0, u16, 2)]();
}

void func_sc04_002_80180DEC(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    SetObjTimer((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_80180E38(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_sc04_002_80180E88(arg0);
}

void func_sc04_002_80180E80(void) {
}

void func_sc04_002_80180E88(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc04_002_80198D50[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    PosToSVec(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc04_002_80198D6C[i];
            AF(o, s16, 0x12) = i + j;
            func_sc04_002_80180FEC(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc04_002_80180FEC(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
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
    d = D_sc04_002_801C150C;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc04_002_801C153C = 0x50000000;
        D_sc04_002_801C1534 = 0;
        D_sc04_002_801C1535 = 0;
        D_sc04_002_801C1536 = 0;
        D_sc04_002_801C1538 = 0;
        D_sc04_002_801C1539 = 0;
        D_sc04_002_801C153A = 0;
    }
    D_sc04_002_801C152C = arg7[0];
    D_sc04_002_801C1530 = arg7[1];
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


s32 func_sc04_002_80181368(u8 *o, s32 r0) {
    SV8 a;
    SV8 b;
    s16 r = r0;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.y = a.y;
    b.z = a.z - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    if (!(TraceMap(1, &a, &b) & 0x8000)) {
        a.x = AF(o, s16, 6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 8 >> 12);
        a.y = AF(o, s16, 0xA) - 0x10;
        a.z = AF(o, s16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 8 >> 12);
        b.x = a.x;
        b.y = a.y + 0x20;
        b.z = a.z;
        if (TraceMap(1, &a, &b) & 0x6000) {
            return 0;
        }
    }
    AF(o, s32, 4) = AF(o, s32, 0x38);
    AF(o, s32, 0xC) = AF(o, s32, 0x40);
    return 1;
}

s32 func_sc04_002_801814F4(u8 *o, s32 r0) {
    SV8 a;
    SV8 b;
    s16 r = r0;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.y = a.y;
    b.z = a.z - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    if (!(TraceMap(1, &a, &b) & 0x8000)) {
        a.x = AF(o, s16, 6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 8 >> 12);
        a.y = AF(o, s16, 0xA) - 0x10;
        a.z = AF(o, s16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 8 >> 12);
        b.x = a.x;
        b.y = a.y + 0x20;
        b.z = a.z;
        return (TraceMap(1, &a, &b) & 0x6000) == 0;
    }
    AF(o, s32, 4) = AF(o, s32, 0x38);
    AF(o, s32, 0xC) = AF(o, s32, 0x40);
    return 1;
}

void func_sc04_002_8018167C(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = -(rsin(AF(o, s16, 0xFC)) << 7);
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) + 0x80) & 0x7FF;
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_002_801A176C);
        AF(o, s16, 0xFC) = 0;
    }
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 8);
    AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    SetLocalVelocityXZ(o, &v);
    MoveOnGround(o);
    if (func_sc04_002_801814F4(o, 0x48) != 0) {
        SetScript(o, &D_sc04_002_801A16C4);
        AF(o, s16, 0xFC) = 1;
        AF(o, s16, 2) = 1;
        StopMotion(o);
    }
    if (DistSqToTarget(o) < 0x2401) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_002_801A1874);
    }
}

void func_sc04_002_80181794(StageActor *arg0) {
    D_sc04_002_80198EE8[arg0->state]();
    if ((arg0 != NULL) && (arg0->param == 3) && (func_801659CC() != 0)) {
        arg0->param = 0;
        PlaySoundId(0xB6B, 0);
    }
}

void func_sc04_002_80181810(StageActor *arg0) {
    if ((s32)arg0->script == &D_sc04_002_801A1C04) {
        SetScript((s32) arg0, (s32) &D_sc04_002_801A1D24);
    } else {
        arg0->animTimer = 0;
    }
    arg0->hitState = 0xAA10;
    arg0->state = 1;
    arg0->unkFC = 0x1E;
}

void func_sc04_002_80181878(u8 *arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0xA9C, 0, arg2);
    GiveItem(0x15);
    if ((AF(arg0, u8, 0x5E) != 0x33) && (AF(arg0, s16, 0x70) == 3)) {
        AF(arg0, s16, 0x70) = 0;
        PlaySoundId(0xB6B, 0);
    }
}

void func_sc04_002_801818DC(StageActor *arg0) {
    if ((AF(arg0, u8, 0x5E) == 0x33) && (arg0->param == 3)) {
        IncStageCount811C();
    }
    if ((s32)arg0->init != 0) {
        GainStat0FromActor((s32) arg0);
    }
    FreeActor((s32) arg0);
}

void func_sc04_002_80181948(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc04_002_80198E1C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc04_002_801A16C4);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        if (AF(arg0, s16, 0x70) == 3) {
            AF(arg0, s32 *, 0xBC) = &D_sc04_002_80198E90;
            AF(arg0, s16, 0x76) = 0x280;
            return;
        }
        AF(arg0, s32 *, 0xBC) = &D_sc04_002_80198E50;
    }
}

void func_sc04_002_801819EC(u8 *o) {
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_002_801A16C4);
    }
    if (MoveCollide(o) != 0) {
        StopMotion(o);
    }
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 8);
    AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (AF(o, s16, 0xFC) != 0) {
        AF(o, s16, 0xFC)--;
    } else if (DistSqToTarget(o) < 0x2401) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_002_801A1874);
    } else if (func_sc04_002_80181368(o, 0x48) == 0 && DistSqToTarget(o) <= 0x40000) {
        AF(o, s16, 2) = 2;
        SetScript(o, &D_sc04_002_801A176C);
    }
}

void func_sc04_002_80181B0C(u8 *o) {
    s32 s;

    s = AF(o, s32, 0x94);
    if (s >= 0xF && s < 0x15) {
        if (s == 0xF) {
            PlaySoundId(0x7E4, 0);
        }
        if (ActorSegmentHitsPlayer(o, &D_sc04_002_80198ED8, &D_sc04_002_80198EE0) == 1) {
            g_PlayerHitKind = 0x4012;
            g_PlayerHitFacing = AF(AF(o, u8 *, 0x20), u16, 0x12);
            switch (AF(o, s16, 0x70)) {
            case 0:
            case 1:
            case 3:
                g_PlayerHitDamage = 0;
                break;
            case 2:
                g_PlayerHitDamage = 1;
                break;
            }
        }
    }
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_002_801A16C4);
        AF(o, s16, 0xFC) = 0x1E;
        AF(o, s16, 2) = 1;
        StopMotion(o);
    }
}

s32 func_sc04_002_80181C20(s32 arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A87CC);
    AF(arg0, s32, 0x94) = 0xF;
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_002_801A8844;
    StopWithGravity(arg0);
    return SetState(arg0, 2);
}

void func_sc04_002_80181C7C(StageActor *arg0) {
    if (arg0->unk86 & 1) {
        func_sc04_002_80181F40(arg0);
        return;
    }
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A88C4);
    arg0->timer = 0x60;
    SetState(arg0, 3);
}

s32 func_sc04_002_80181CE8(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_002_801A883C;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) arg1;
    StopWithGravity(arg0);
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x98) = 0;
    return SetState(arg0, 4);
}

void func_sc04_002_80181D44(u8 *o) {
    SV8 v;
    s32 sp18;
    s32 r;

    r = 0;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            SetScriptCopy(o, &D_sc04_002_801A90AC);
            UpdateModelZYX(o);
            SetForwardVelocity(o, -0x80000);
            AF(o, s32, 0x14) = -0xC0000;
        }
        func_sc04_002_80182BA4(o, 0);
        break;
    case 1:
        r = MoveCollidePassable(o);
        if (AF(o, s16, 0xA) > 0) {
            FreeActor(o);
            return;
        }
        if (func_sc04_002_801826E8(o) != 0) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AF(o, s32, 0x18) = 0;
        }
        if (r & 0x2000) {
            StopWithGravity(o);
            UpdateModelZYX(o);
            SetForwardVelocity(o, -0xE0000);
            SetScriptCopy(o, &D_sc04_002_801A8B94);
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            PlaySoundFor(0x7E5, 0, AF(o, u16, 0x36));
        }
        func_sc04_002_80182BA4(o, 0);
        break;
    case 2:
        if (func_sc04_002_80182564(o, -0xE0000, &sp18) == 1) {
            RestorePrevPos(o);
            r = 1;
        } else if (TickTimer(o) != 0) {
            r = 1;
        }
        func_sc04_002_80182BA4(o, 2);
        if (r != 0) {
            func_sc04_002_80181FA4(o);
            PlaySoundFor(4, 0x7E5, AF(o, u16, 0x36));
        }
        break;
    }
}

s32 func_sc04_002_80181F40(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A89A4);
    arg0->work102 = 8;
    arg0->work104 = 3;
    arg0->work106 = (s16) ((rand() & 0x20) - 0x10);
    arg0->timer = 0x60;
    return SetState(arg0, 5);
}

s32 func_sc04_002_80181FA4(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A8EBC);
    return SetState(arg0, 7);
}

s32 func_sc04_002_80181FE0(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = (s16) (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x200);
    if (AF(arg0, u16, 2) != 1) {
        SetScriptCopy(arg0, (s32) &D_sc04_002_801A86E4);
    }
    return SetState(arg0, 8);
}

void func_sc04_002_80182044(u8 *o) {
    s32 sp10;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xFE) == AF(p, s16, 0x12)) {
        if (func_sc04_002_80182618(o, &sp10) == 1) {
            if ((AF(o, u16, 0x86) & 1) || (rand() & 1)) {
                if (AF(o, u16, 0x86) & 1) {
                    func_sc04_002_80181F40((s32)o);
                } else {
                    SetScriptCopy(o, &D_sc04_002_801A88C4);
                    AF(o, s32, 0x1C) = 0x60;
                    SetState(o, 3);
                }
            } else {
                SetScriptCopy(o, &D_sc04_002_801A87CC);
                AF(o, s32, 0x94) = 0xF;
                AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_002_801A8844;
                StopWithGravity(o);
                SetState(o, 2);
            }
        } else {
            AF(o, u16, 0xFE) += 0x200;
        }
        AF(o, u16, 0x100)++;
    } else {
        func_sc04_002_801829E8(AF(o, s16, 0xFE), p + 0x12, 0x20);
    }
}

s32 func_sc04_002_80182180(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A86E4);
    arg0->timer = 0x40;
    return SetState(arg0, 9);
}

s32 func_sc04_002_801821C4(StageActor *o) {
    SV8 v;
    SV8 s;
    WMtx m;
    s32 flag;
    u8 *r;

    r = (u8 *)SpawnActor(0x239, o);
    if (r != 0) {
        m = GsIDMATRIX;
        s.x = s.y = s.z = 0x1800;
        RotMatrixY(o->model->rot.vy, &m);
        func_80020F34(&m, &s);
        SetRotMatrix(&m);
        SetTransMatrix((u8 *)o->model + 0x34);
        v.x = 0;
        v.y = -0x200;
        v.z = -0x48;
        RotTransSV(&v, &v, &flag);
        AF(r, u16, 6) = v.x;
        AF(r, u16, 0xA) = v.y;
        AF(r, u16, 0xE) = v.z;
        o->ext0 = r;
    }
    return (s32)r;
}

s32 func_sc04_002_801822EC(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_002_801A8A4C);
    return SetState(arg0, 0xA);
}

void func_sc04_002_80182328(StageActor *arg0) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    D_sc04_002_801A1ED8[arg0->state]();
    if ((arg0->kind == 0x1FC) && (arg0->shrinkTimer == 0)) {
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        temp_v1_2 = arg0->model;
        temp_v1_2->scale.vz = 0x1800;
        temp_v1_2->scale.vy = 0x1800;
        temp_v1_2->scale.vx = 0x1800;
    }
}

void func_sc04_002_801823BC(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u8, 0xC2) == 2) {
        AF(arg0, s16, 0x52) = -0x18;
    }
    temp_v0 = func_sc04_002_801826E8((s32) arg0);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 4) = (s32) AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = (s32) AF(arg0, s32, 0x40);
        func_sc04_002_80182CBC((s32) arg0, temp_v0);
    }
}

void func_sc04_002_80182424(u8 *arg0) {
    TakeDamageAndRecoil();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetForwardVelocity((s32) arg0, 0x80000);
    SetScriptCopy((s32) arg0, (s32) &D_sc04_002_801A8C44);
    if (AF(arg0, s16, 0x76) <= 0) {
        PlayDistanceSound32((s32) arg0);
        GiveItem(0x13);
    }
}

void func_sc04_002_801824A4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = MoveCollidePassable(arg0);
    if ((temp_v0 & 0xFF) == 0x1A) {
        FinishEnemy(arg0);
        return;
    }
    temp_v0_2 = func_sc04_002_801826E8(arg0);
    if (temp_v0_2 != 0) {
        func_sc04_002_80182CBC(arg0, temp_v0_2);
        goto block_5;
    }
    if (temp_v0 != 0x2000) {
block_5:
        RestorePrevPos(arg0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0x76) <= 0) {
            SetReactionStep(arg0, 6);
            return;
        }
        EndReaction(arg0);
    }
}

s32 func_sc04_002_80182564(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;

    UpdateModelZYX(arg0, arg1);
    SetForwardVelocity(arg0, arg1);
    temp_s0 = MoveOnGround(arg0);
    temp_v0 = func_sc04_002_801826E8(arg0);
    AF(arg2, s32, 0) = temp_v0;
    if ((temp_v0 != 0) || (temp_s0 != 0x2000)) {
        RestorePrevPos(arg0);
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy(arg0, (s32) &D_sc04_002_801A86E4);
        StopWithGravity(arg0);
        SetState(arg0, 1);
        return 1;
    }
    return 0;
}

s32 func_sc04_002_80182618(Mover *o, s32 *res) {
    s32 sv[3];
    s32 r;
    ModelObj *p;

    sv[0] = o->vel[0];
    sv[1] = o->vel[1];
    sv[2] = o->vel[2];
    UpdateModelZYX(o);
    SetForwardVelocity(o, -0xF0000);
    r = MoveOnGround(o);
    o->vel[0] = sv[0];
    o->vel[1] = sv[1];
    o->vel[2] = sv[2];
    *res = func_sc04_002_801826E8(o);
    RestorePrevPos(o);
    p = o->model;
    p->flags &= 0xFFFE;
    if (*res == 0) {
        return r == 0x2000;
    }
    return 0;
}

s32 func_sc04_002_801826E8(Mover *o) {
    u8 *p;
    s32 i;
    s16 d;
    s32 e;
    SV8 v;

    p = (u8 *) &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (p == o) {
            continue;
        }
        switch (AF(p, u16, 0)) {
        case 0x1FC:
            v.x = AF(p, u16, 6);
            v.y = 0;
            v.z = AF(p, u16, 0xE);
            if (GroundDistSqTo(o, &v) < 0x900) {
                return (s32) p;
            }
            break;
        case 0x239:
            d = AF(AF(p, u8 *, 0x20), s16, 0x18) * 9 >> 9;
            e = AF(p, s16, 6) - o->pos[0].h.i;
            if (e < 0) e = -e;
            if (d < e) break;
            e = AF(p, s16, 0xE) - o->pos[2].h.i;
            if (e < 0) e = -e;
            if (d >= e) {
                return (s32) p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_002_80182808(Mover *arg0) {
    s16 a;
    s16 d;

    if (GroundDistSqToFocus(arg0) > 0x23FFF) {
        return 0;
    }
    a = HeadingToTarget(arg0);
    d = a - ((u16)arg0->model->rot.vy & 0xFFF);
    if (d < 0) {
        d = -d;
    }
    if (d < 0x180) {
        if (a == 0) {
            a++;
        }
        return a;
    }
    return 0;
}

void func_sc04_002_801828A4(StageActor *o) {
    s32 i;

    if (!(o->unk86 & 1) && o->hp < 0xB5 && SpawnActor(0x22D, o) != 0) {
        o->unk86 |= 1;
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_002_801C1560, s32, i) = AF(&D_sc04_002_801A42F4, s32, i);
        }
        D_sc04_002_801C1560[0] = 0x1000000;
        D_sc04_002_801C1570 = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_002_801C1560;
        PlaySoundId(0x83B, 0);
    }
}

void func_sc04_002_80182960(u8 *o) {
    AF(o, u16, 0x5C) = 0x8A10;
    AF(o, s16, 0x52) = 0;
    if (AF(o, s32, 0xC4) & 4) {
        SetScriptCopy(o, &D_sc04_002_801A8FC4);
        SetState(o, 6);
    } else {
        AF(o, s32, 0x1C) = 8;
        SetScriptCopy(o, &D_sc04_002_801A86E4);
        StopWithGravity(o);
        SetState(o, 1);
    }
}

void func_sc04_002_801829E8(s32 a, u16 *p, s32 n) {
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

void func_sc04_002_80182A6C(StageActor *o) {
    SpawnDef d;
    V3 a;
    V3 b;
    Mover *r;

    a.x = D_sc04_002_801A1F04 << 8;
    a.y = D_sc04_002_801A1F06 << 8;
    a.z = D_sc04_002_801A1F08 << 8;
    ApplyMatrixLV((u8 *)o->model + 0x34, &a, &b);
    b.x += o->pos[0].h.i << 8;
    b.y += o->pos[1].h.i << 8;
    b.z += o->pos[2].h.i << 8;
    d.x = b.x / 256;
    d.y = b.y / 256;
    d.z = b.z / 256;
    d.kind = 0x20;
    d.unk8 = 2;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    r = (u8 *)SpawnActorFromDef(&d, o);
    if (r != 0) {
        r->model->rot.vy = (u16)o->model->rot.vy;
        UpdateModelZYX(r);
        PlaySoundId(0x83A, 0);
    }
}

void func_sc04_002_80182BA4(StageActor *arg0, s32 arg1) {
    SV8 v;

    if (!(arg0->unk86 & 1)) {
        v.x = D_sc04_002_801A1F0C[arg1].x;
        v.y = D_sc04_002_801A1F0C[arg1].y;
        v.z = D_sc04_002_801A1F0C[arg1].z - 20;
        if (ActorSegmentHitsPlayer(arg0, &D_sc04_002_801A1F0C[arg1], &v)) {
            g_PlayerHitDamage = 20;
        }
    }
}

void func_sc04_002_80182C30(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x853, 0, arg2);
    GiveItem(0x13);
}

void func_sc04_002_80182C5C(u8 *o) {
    SV8 v;

    if (AF(o, u16, 0) == 0x1FC) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA) - 0x20;
        v.z = AF(o, s16, 0xE);
        v.pad = 0x1800;
        EmitProp23(o + 0x102, &v, &D_sc04_002_801A1F24, 0);
    }
}

void func_sc04_002_80182CBC(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0xA;
        AF(arg1, s16, 0x62) = HeadingTo(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_002_80182D2C(u8 *o) {
    s32 r;
    s32 i;
    s32 k;

    if ((AF(o, s32, 0x20) = AllocActorModel(o)) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(AF(o, s32, 0x20), &D_sc04_002_801A42F4);
    k = 0x1000000;
    for (i = 0x18; i >= 0; i -= 4) {
        *(s32 *)((u8 *)D_sc04_002_801C1580 + i) = k;
    }
    D_sc04_002_801C159C = 0;
    D_sc04_002_801C1580[0] = D_sc04_002_801A42F4;
    D_sc04_002_801C1590 = D_sc04_002_801A4304;
    AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_002_801C1580;
    AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_002_801A883C;
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    StopWithGravity(o);
    UpdateModelZYX(o);
    SetForwardVelocity(o, 0x80000);
    AF(o, s32, 0x14) = 0xFFE40000;
    AF(o, u16, 0xFE) = AF(o, u16, 0xA) + 0x30;
    AF(o, u16, 2)++;
    r = SpawnPropFrom(o, 0x23);
    if (r != 0) {
        AF(r, u16, 0x34) = 0x2001;
        AF(r, u16, 0xA) -= 0x38;
    }
}

void func_sc04_002_80182E64(StageActor *arg0) {
    D_sc04_002_801A1F2C[arg0->state]();
}

void func_sc04_002_80182EA0(u8 *o) {
    s32 i;

    if (SetupActor(o, &D_sc04_002_801A1E2C) != 0) {
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_002_801C1540, s32, i) = AF(&D_sc04_002_801A42F4, s32, i);
        }
        D_sc04_002_801C1540[5] = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_002_801C1540;
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x801;
        AF(o, u8 *, 0xBC) = &D_sc04_002_801A1E60;
        SpawnShadow(o);
        SnapToGround(o);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        if (AF(o, s16, 0x70) != 0) {
            func_sc04_002_80182180(o);
        } else if (rand() & 1) {
            func_sc04_002_80181C20(o);
        } else {
            func_sc04_002_80181C7C(o);
        }
    }
}

void func_sc04_002_80182FBC(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc04_002_80182618(arg0, (s32) &sp10);
        func_sc04_002_80181FE0(arg0);
    }
    func_sc04_002_80182BA4(arg0, 0);
}

void func_sc04_002_80183008(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((AF(arg0, s32, 0x94) == 0xE) && !(AF(arg0, u16, 0x72) & 0x400)) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, s32, 0x1C) = 8;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        } else {
            temp_v0 = func_sc04_002_80182808((s32) arg0);
            if ((temp_v0 != 0) && (func_sc04_002_80182618((s32) arg0, (s32) &sp10) != 0)) {
                func_sc04_002_80181CE8((s32) arg0, (s32) temp_v0);
            }
        }
        break;
    case 1:
        if (TickTimer((s32) arg0, arg1, arg2) != 0) {
            func_sc04_002_80181C7C((s32) arg0);
        }
        break;
    }
    func_sc04_002_80182BA4((s32) arg0, 0);
}

void func_sc04_002_801830EC(s32 arg0) {
    s32 sp10;
    s16 temp_v0;

    if (func_sc04_002_80182564(arg0, -0x50000, (s32) &sp10) == 1) {
        RestorePrevPos(arg0);
        goto block_3;
    }
    if (TickTimer(arg0) != 0) {
block_3:
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy(arg0, (s32) &D_sc04_002_801A86E4);
        StopWithGravity(arg0);
        SetState(arg0, 1);
    } else if (!(AF(arg0, u16, 0x86) & 1)) {
        temp_v0 = func_sc04_002_80182808(arg0);
        if (temp_v0 != 0) {
            func_sc04_002_80181CE8(arg0, (s32) temp_v0);
        }
    }
    func_sc04_002_80182BA4(arg0, 1);
}

void func_sc04_002_801831B8(u8 *o) {
    SV8 sp10;
    u8 *p;

    if (func_sc04_002_80182564(o, -0x50000, &sp10) == 1) {
        RestorePrevPos(o);
        AF(o, s32, 0x1C) = 8;
        SetScriptCopy(o, &D_sc04_002_801A86E4);
        StopWithGravity(o);
        SetState(o, 1);
        return;
    }
    if (AF(o, s16, 0x102) != 0) {
        AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
    } else {
        if (AF(o, s16, 0xAA) == 0) {
            func_sc04_002_80182A6C(o);
        }
        if (--AF(o, s16, 0x104) != 0) {
            AF(o, s16, 0x102) = 4;
        } else {
            AF(o, s16, 0x104) = 3;
            AF(o, s16, 0x102) = 0x20;
        }
    }
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x12) += AF(o, s16, 0x106);
    if (TickTimer(o) != 0) {
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x106) = (rand() & 0x20) - 0x10;
    }
}

void func_sc04_002_801832C4(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy((s32) arg0, (s32) &D_sc04_002_801A86E4);
        StopWithGravity((s32) arg0);
        SetState((s32) arg0, 1);
    }
}

void func_sc04_002_8018331C(u8 *arg0) {
    s32 sp10;

    if (AF(arg0, s16, 0x98) == 0) {
        if (!(AF(arg0, u16, 0x86) & 1) && (func_sc04_002_80182618((s32) arg0, (s32) &sp10) != 0)) {
            SetScriptCopy((s32) arg0, (s32) &D_sc04_002_801A87CC);
            AF(arg0, s32, 0x94) = 0xF;
            AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_002_801A8844;
            StopWithGravity((s32) arg0);
            SetState((s32) arg0, 2);
        } else {
            AF(arg0, s32, 0x1C) = 8;
            SetScriptCopy((s32) arg0, (s32) &D_sc04_002_801A86E4);
            StopWithGravity((s32) arg0);
            SetState((s32) arg0, 1);
        }
    }
}

void func_sc04_002_801833DC(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    if (AF(arg0, s16, 0xAA) == 0) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (TickTimer((s32) arg0, arg1, arg2) != 0) {
                if (func_sc04_002_801821C4((s32) arg0) != 0) {
                    AF(arg0, s32, 0x1C) = 0x30;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                } else {
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
            break;
        case 1:
            if (TickTimer((s32) arg0, arg1, arg2) != 0) {
                func_sc04_002_801822EC((s32) arg0);
            }
            break;
        }
        func_sc04_002_80182BA4((s32) arg0, 0);
    }
}

void func_sc04_002_80183494(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (arg0->index == 0x18) {
            func_sc04_002_80183648(arg0->ext0);
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    case 1:
        if (arg0->animTimer == 0) {
            SetScriptCopy((s32) arg0, (s32) &D_sc04_002_801A86E4);
            arg0->timer = 0x40;
            SetState((s32) arg0, 9);
        }
        break;
    }
    func_sc04_002_80182BA4((s32) arg0, 0);
}

void func_sc04_002_80183548(s32 arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    MoveObject(arg0);
    temp_v1 = AF(arg0, s16, 0xA);
    if ((temp_v1 > AF(arg0, s16, 0xFE)) || (temp_v1 > 0)) {
        FreeActor(arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (!(temp_v0 & 3)) {
        temp_v0_2 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, s16, 0x34) = 0x1000;
            AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x28);
        }
    }
}

s32 func_sc04_002_801835E0(s32 arg0) {
    StopWithGravity(arg0);
    return SetState(arg0, 1);
}

s32 func_sc04_002_80183614(StageActor *arg0) {
    StopWithHalfGravity();
    return SetState(arg0, 2);
}

void func_sc04_002_80183648(StageActor *o) {
    WMtx m;
    V4 v;

    m = GsIDMATRIX;
    v.x = v.y = 0;
    v.z = -0xE0000;
    RotMatrixY(o->parent->model->rot.vy, &m);
    ApplyMatrixLV(&m, &v, (u8 *)o + 0x10);
    PlaySoundId(0xB3F, 0);
    SetState(o, 3);
}

void func_sc04_002_80183710(StageActor *arg0) {
    D_sc04_002_801A1F44[arg0->state]();
    if ((arg0->kind != 0) && (arg0->unk74 != 0)) {
        CarryPlayerExact((s32) arg0);
        func_sc04_002_80183A88((s32) arg0, (s32) &D_sc04_002_801A1F34);
    }
}

s32 func_sc04_002_80183790(s32 arg0) {
    Player *p = &g_Player;
    s16 lim;
    s16 y;
    s32 t;

    if (AF(arg0, u8, 0x74) != 0) {
        return 0;
    }
    lim = D_80126B62 - 0x20;
    if (func_sc04_002_80183904(arg0, (s32) ((u8 *)p + 4), 0x48) != 0) {
        y = AF(arg0, s16, 0xA);
        if (y >= lim && lim >= y - 0x48) {
            return 1;
        }
    }
    return 0;
}

s32 func_sc04_002_80183820(u8 *o) {
    u8 *p;
    s32 i;
    u16 h;

    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (p == o) {
            continue;
        }
        switch (AF(p, u16, 0)) {
        case 0x1FC:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) * 9) >> 9;
            if (func_sc04_002_80183904(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        case 0x239:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) + AF(AF(p, u8 *, 0x20), s16, 0x18)) >> 6;
            if (func_sc04_002_80183904(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_002_80183904(s32 arg0, s32 arg1, u16 arg2) {
    s32 d;

    d = AF(arg1, s16, 2) - AF(arg0, s16, 6);
    if (d < 0) {
        d = -d;
    }
    if (arg2 < d) {
        return 0;
    }
    d = AF(arg1, s16, 0xA) - AF(arg0, s16, 0xE);
    if (d < 0) {
        d = -d;
    }
    return arg2 >= d;
}

void func_sc04_002_8018395C(Mover *o) {
    SV8 v;
    SV8 r;
    WMtx m;
    s32 h;

    m = GsIDMATRIX;
    h = o->model->scale.vx * 9 >> 9;
    r.x = r.y = 0;
    r.z = -h;
    RotMatrixY((s16)HeadingToPlayer(o), &m);
    ApplyMatrixSV(&m, &r, &v);
    v.x += o->pos[0].h.i;
    v.y += o->pos[1].h.i - h;
    v.z += o->pos[2].h.i;
    HitPlayer(1, 0x4002, 0, 0x14, &v, &g_GroundNormal);
}

void func_sc04_002_80183A88(u8 *o, u8 *p) {
    s16 d;
    s16 ax;
    s16 az;
    s16 oy;
    s16 py;
    s16 ph;

    if (*(u16 *)&g_Player != 0x1A) {
        d = g_PlayerX - AF(o, u16, 6);
        ax = d;
        if (d < 0) ax = -d;
        d = D_80126B66 - AF(o, u16, 0xE);
        az = d;
        if (d < 0) az = -d;
        oy = AF(o, s16, 0xA);
        py = AF(p, s16, 8);
        if (D_80126B62 < oy + py) return;
        ph = AF(p, s16, 0xA);
        if (oy + ph < D_80126B62) return;
        if (ax >= 0x49) return;
        if (az >= 0x49) return;
        if (D_80126B62 < oy + ((py + ph) >> 1)) {
            D_80126B62 = oy + py - 1;
        } else if (ax < az) {
            if ((s16)D_80126B66 > (s16)AF(o, u16, 0xE)) {
                D_80126B66 = AF(o, u16, 0xE) + 0x49;
            } else {
                D_80126B66 = AF(o, u16, 0xE) - 0x49;
            }
        } else {
            g_PlayerX = ((s16)g_PlayerX > (s16)AF(o, u16, 6)) ? AF(o, u16, 6) + 0x49 : AF(o, u16, 6) - 0x49;
        }
    }
}

void func_sc04_002_80183BE4(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0x14;
        AF(arg1, s16, 0x62) = HeadingTo(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_002_80183C54(u8 *o) {
    WMtx m;
    SV8 v;
    s32 flag;
    u8 *e;
    s16 i;

    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    SetTransMatrix(&m);
    for (i = 0; i < 0x1000; i += 0x200) {
        e = (u8 *)SpawnPropFrom(o, 0x22);
        if (e != 0) {
            m = GsIDMATRIX;
            RotMatrixY(i, &m);
            SetRotMatrix(&m);
            RotTransSV(&D_sc04_002_801A1F54, &v, &flag);
            AF(e, s16, 6) = v.x;
            AF(e, s16, 0xA) = v.y;
            AF(e, s16, 0xE) = v.z;
            ApplyRotMatrixLV(&D_sc04_002_801A1F5C, o + 0x10);
            AF(e, s32, 0x34) = 0x4000;
        }
    }
}

void func_sc04_002_80183D94(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_002_801C16BC);
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    temp_v1_2 = arg0->model;
    temp_v1_2->unk04 = (s32) ((s32)temp_v1_2->unk04 | 0x8040);
    arg0->hitState = 0xCC00;
    arg0->targetClass = 2;
    arg0->hitData = (s32) ((s32) &D_sc04_002_801A1F34 | 0x20000000);
    if (arg0->param != 0) {
        func_sc04_002_80183614((s32) arg0);
        return;
    }
    func_sc04_002_801835E0((s32) arg0);
    arg0->ext1 = func_80143994((s32) arg0, 0x3000);
}

void func_sc04_002_80183E68(u8 *arg0) {
    s32 flags;
    s32 y;
    StageActor *w;
    u8 *m;
    s16 v;

    flags = MoveCollidePassable(arg0);
    y = AF(arg0, s16, 0xA);
    w = AF(arg0, u8 *, 0xD0);
    if (y > 0x80) {
        if (w != NULL) {
            FreeShadow(w);
        }
        FreeActor(arg0);
        return;
    }
    m = (u8 *)w->ext0;
    v = (y << 4) + 0x5800;
    AF(m, s16, 0x18) = v;
    AF(m, s16, 0x1A) = v;
    if (flags & 0x2000) {
        func_sc04_002_80183C54(arg0);
        func_sc04_002_80183614((s32) arg0);
        PlaySoundId(0xBCB, 0);
    }
    if (func_sc04_002_80183790((s32) arg0) != 0) {
        func_sc04_002_8018395C(arg0);
    }
}

void func_sc04_002_80183F1C(void) {
}

void func_sc04_002_80183F24(u8 *arg0) {
    s32 flags;
    s32 p;

    flags = MoveCollidePassable(arg0);
    if (AF(arg0, s16, 0xA) > 0x80) {
        if (AF(arg0, u8 *, 0xD0) != NULL) {
            FreeShadow(AF(arg0, u8 *, 0xD0));
        }
        FreeActor(arg0);
        return;
    }
    if (flags & 0x2000) {
        if (!(flags & 0xC000)) {
            if (func_sc04_002_80183790((s32) arg0) != 0) {
                func_sc04_002_8018395C(arg0);
                return;
            }
            p = func_sc04_002_80183820((s32) arg0);
            if (p != 0 && AF(p, u16, 0) == 0x1FC) {
                func_sc04_002_80183BE4((s32) arg0, p);
            }
        }
    }
}

void func_sc04_002_80183FE8(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = AllocActorModel(arg0)) == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(AF(arg0, u8 *, 0x20), &D_sc04_002_801A939C);
    PlaySoundId(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc04_002_801A9174);
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

void func_sc04_002_80184160(StageActor *arg0) {
    D_sc04_002_801A9210[arg0->state]();
}

void func_sc04_002_8018419C(StageActor *arg0) {
    D_sc04_002_801A9224[arg0->state]();
}

void func_sc04_002_801841D8(s32 arg0) {
    s32 temp_v0;

    SetLocalVelocity(arg0, (s32) &D_sc04_002_801A91FC);
    if (MoveCollidePassable(arg0) != 0) {
        SpawnEffect(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((ActorSegmentDamagesPlayer(arg0, (s32) &D_sc04_002_801A9208, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (g_PlayerAction != 0)) || (TickTimer(arg0) != 0)) {
block_7:
        FreeActor(arg0);
    }
}

void func_sc04_002_801842B8(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX(arg0);
        StopWithGravity(arg0);
        SetLocalVelocity(arg0, &D_sc04_002_801A9218);
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

void func_sc04_002_801843D4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc04_002_801A94CC);
    arg0->state = 1;
    arg0->stateCount = 0;
}

void func_sc04_002_80184430(StageActor *arg0) {
    arg0->hp = 0;
    if (arg0->work100 == 0) {
        GainStat0FromActor((s32) arg0);
    }
    if (arg0->workFE == 0) {
        DespawnActor((s32) arg0);
        return;
    }
    arg0->state = 6;
    HideModel(arg0);
    arg0->hitState = 0;
    arg0->react = 0;
}

void func_sc04_002_801844A0(StageActor *arg0) {
    if ((arg0->reactBits & 1) && ((s32)arg0->script != &D_sc04_002_801B10C4)) {
        SetScript((s32) arg0, (s32) &D_sc04_002_801B10C4);
    }
}

void func_sc04_002_801844E8(u8 *o) {
    SV8 a;
    SV8 b;
    s32 t;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    ProjectPoint(&a, &b);
    t = b.x;
    if (t < 0) t = -t;
    if (t < 0xB5) {
        t = b.y;
        if (t < 0) t = -t;
        if (t < 0xA1) {
            PlaySoundId(0x98A, 0);
        }
    }
}

void func_sc04_002_80184574(StageActor *arg0) {
    arg0->state = 2;
    SetScript(arg0, (s32) &D_sc04_002_801B154C);
    arg0->timer = 0x14;
}

void func_sc04_002_801845B4(StageActor *arg0) {
    arg0->state = 3;
    SetScript(arg0, (s32) &D_sc04_002_801B10C4);
    arg0->hitState = 0xAA10;
    arg0->hitCode = 0;
    AF(arg0, s16, 0xDC) = 0;
    arg0->timer = 0x2D;
}

s32 func_sc04_002_80184604(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = DistSqToTarget(arg0);
    if (arg1 >= temp_v0) {
        func_sc04_002_801846B4(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc04_002_801B14A4);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc04_002_801846B4(StageActor *arg0) {
    arg0->state = 4;
    SetScript(arg0, (s32) &D_sc04_002_801B1264);
    arg0->timer = 0x1E;
    if (arg0->unkFC == 0) {
        arg0->unkFC = 1;
        SpawnHeadMarker(arg0, -0x96);
    }
}

s32 func_sc04_002_80184710(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc04_002_80184724(u8 *o) {
    SV8 c;
    SpawnDef d;
    WMtx m;
    SV8 a;
    SV8 b;
    s32 t;

    if (AF(o, s32, 0x1C) == 9) {
        ActorSegmentDamagesPlayer(o, &D_sc04_002_801A95C8, &D_sc04_002_801A95C8 + 8, 0x10);
        if (AF(o, s16, 0x70) & 0x8000) {
            GetPartWorldMatrix(o, 0, &m);
            LocalToWorld(&m, &D_sc04_002_801A95D8, &c);
            d.kind = 0x23E;
            d.flags = 0;
            d.unkC = 0x7FFF;
            d.x = c.x;
            d.y = c.y;
            d.z = c.z;
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            SpawnActorFromDef(&d, o);
        }
        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        ProjectPoint(&a, &b);
        t = b.x;
        if (t < 0) t = -t;
        if (t < 0xB5) {
            t = b.y;
            if (t < 0) t = -t;
            if (t < 0xA1) {
                PlaySoundId(0x98B, 0);
            }
        }
    }
    if (TickTimer(o) != 0) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_002_801B10C4);
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 0x2D;
    }
}

void func_sc04_002_801848D8(StageActor *arg0) {
    s16 v[3];

    if (arg0->hitCode == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc04_002_80188344((s32) arg0, (s32) v, 0xD);
    }
}

void func_sc04_002_80184920(u8 *o) {
    u16 *s;
    u16 *d;
    s32 i;
    s32 n;

    D_sc04_002_801A95E0[AF(o, u16, 2)]();
    if (IsActorFar(o) != 0) {
        AF(o, s16, 0x100) = 1;
        AF(o, s16, 0x76) = 0;
        if (AF(o, s16, 0x100) == 0) {
            GainStat0FromActor(o);
        }
        if (AF(o, s16, 0xFE) == 0) {
            DespawnActor(o);
        } else {
            AF(o, u16, 2) = 6;
            HideModel(o);
            AF(o, s16, 0x5C) = 0;
            AF(o, u8, 0xC1) = 0;
        }
    }
    if (AF(o, s16, 0xFE) != 0) {
        s = D_sc04_002_801A9588;
        n = D_800B99DA & 0xF;
        d = &D_sc04_002_801C15A0[n];
        for (i = 0; i < 15 - n; i++) {
            *d++ = *s++;
        }
        d = D_sc04_002_801C15A0;
        for (i = 0; i < n; i++) {
            *d++ = *s++;
        }
        QueueImage(&D_sc04_002_801A95A8);
    }
}

void func_sc04_002_80184A6C(StageActor *arg0) {
    D_sc04_002_801A9604[arg0->state]();
}

void func_sc04_002_80184AA8(StageActor *arg0) {
    D_sc04_002_801A9618[arg0->state]();
    if (arg0->kind != 0) {
        AF(arg0->ext0, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
        AF(arg0->ext0, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
        AF(arg0->ext0, u16, 0xC) = (u16) (u16)arg0->pos[2].h.i;
    }
}

void func_sc04_002_80184B30(StageActor *o) {
    u8 *p;

    if ((o->model = AllocActorModel(o)) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(o->model, 0);
    o->model->scale.vx = o->model->scale.vy = 0x1800;
    p = (u8 *)AllocActorSprite();
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    o->ext0 = p;
    InitSpriteKind2(p, &D_sc04_002_801A960C, 0x2E0, 0x100);
    AF(p, u8, 0x27) = 0x37;
    AF(p, s16, 0x10) = 0x400;
    AF(p, s32, 4) |= 0x50000000;
    AF(p, s16, 0x14) = o->unkFC;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1800;
    o->state = 1;
    func_80143994(o, 0x1000);
}

void func_sc04_002_80184C08(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0x100000);
}

void func_sc04_002_80184C60(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x80);
    if (MoveCollidePassable((s32) arg0) == 0) {
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc04_002_801A9624, (s32) (&D_sc04_002_801A9624 + 8), 0x10) == 0) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                goto block_4;
            }
        } else {
block_4:
            g_PlayerHitKind = 0x13;
            goto block_5;
        }
    } else {
block_5:
        func_sc04_002_80184CEC((s32) arg0);
    }
}

void func_sc04_002_80184CEC(StageActor *arg0) {
    ZeroFill(arg0->ext0, 0x38);
    FreeActor(arg0);
}

void func_sc04_002_80184D24(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (DistSqToTarget(arg0) <= 0x90000) {
            func_sc04_002_80184574((s32) arg0);
        }
    } else {
        if (DistSqToTarget(arg0) <= 0x24000) {
            func_sc04_002_80184574((s32) arg0);
        }
    }
}

void func_sc04_002_80184D90(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc04_002_801845B4(arg0);
    }
}

void func_sc04_002_80184DC8(s32 arg0) {
    if (TickTimer(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc04_002_80184604(arg0, 0x40000, 0xC4000);
        } else {
            func_sc04_002_80184604(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc04_002_80184E2C(s32 arg0) {
    s32 v;
    void *p;

    v = TurnStepToTarget(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (TickTimer(arg0) != 0) {
        func_sc04_002_80184710(arg0);
    }
}

void func_sc04_002_80184E84(void) {
}

void func_sc04_002_80184E8C(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc04_002_801A94F4) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        arg0->params = &D_sc04_002_801A9528;
        arg0->reactOpts = 1;
        arg0->hitMask = 8;
        temp_v0 = SpawnActorArg(0x23F, (s32) arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        if (FindOtherActorByKind(arg0, 0x23D) == 0) {
            arg0->workFE = 1;
        }
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc04_002_801B14A4);
    }
}

void func_sc04_002_80184F44(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 t;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc04_002_801AB044);
    t = arg0->parent->id;
    arg0->state = 1;
    arg0->workFE = 0x7FFF;
    arg0->unkFC = t;
}

void func_sc04_002_80184FB4(StageActor *o) {
    SV8 v;
    StageActor *p;

    p = o->parent;
    if (o->workFE == 0x7FFF) {
        o->workFE = o->model->rot.vy;
    }
    if (o->unkFC != (s16)p->id) {
        FreeActor(o);
        return;
    }
    AF(o->model, SV8, 0x10) = AF(p->model, SV8, 0x10);
    if ((u8 *)p->script != &D_sc04_002_801B169C) {
        o->model->rot.vy = o->workFE;
        o->pos[0].w = p->pos[0].w;
        o->pos[1].w = p->pos[1].w;
        o->pos[2].w = p->pos[2].w;
    } else {
        FaceHelper(p, &D_sc04_002_801A95FC, &v);
        o->pos[0].h.i = v.x;
        o->pos[1].h.i = v.y;
        o->pos[2].h.i = v.z;
    }
    AF(o->model, SV8, 0x18) = AF(p->model, SV8, 0x18);
    o->model->flags = (s16)p->model->flags;
    o->model->unk04 = (s32)p->model->unk04;
}

void func_sc04_002_80185128(StageActor *arg0) {
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    D_sc04_002_801B50A4[arg0->state]();
    if (arg0->kind != 0) {
        func_sc04_002_8018615C((s32) arg0);
        func_sc04_002_801862F0((s32) arg0);
        func_sc04_002_80186638((s32) arg0);
        temp_v1 = arg0->workEC + 1;
        temp_hi = temp_v1 % (s32) arg0->workF0;
        arg0->workEC = temp_v1;
        if ((temp_hi == 0) || !(rand(temp_hi) & 0xFFF)) {
            func_sc04_002_801867A0((s32) arg0);
            temp_v0 = rand();
            var_v0 = temp_v0 / 32;
            arg0->workF0 = (s32) ((temp_v0 - (var_v0 << 5)) + 0x10);
        }
        if (arg0->pos[1].h.i >= 0x10) {
            func_sc04_002_8018612C((s32) arg0);
            return;
        }
        if (arg0->param & 0x8000) {
            DespawnIfFar((s32) arg0);
        }
    }
}

void func_sc04_002_80185264(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    if (SetupActor(arg0, (s32) &D_sc04_002_801B4F00) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc04_002_801B501C;
        AF(arg0, s32, 0xB4) = -1;
        SetScript(arg0, (s32) &D_sc04_002_801BD950);
        func_80143994(arg0, 0x2000);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s32, 0xEC) = rand();
        var_v0 = rand();
        temp_v1 = var_v0;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 0x1F;
        }
        AF(arg0, s32, 0xF0) = (s32) ((temp_v1 - ((var_v0 >> 5) << 5)) + 0x10);
        AF(arg0, s32, 0xF4) = 2;
        UpdateModelZYX(arg0);
    }
}

void func_sc04_002_80185314(s32 arg0) {
    SetScript(arg0, (s32) &D_sc04_002_801BD950);
    AF(arg0, s16, 2) = 2;
    StopWithGravity(arg0);
    func_sc04_002_80186544(arg0);
}

void func_sc04_002_8018535C(u8 *arg0) {
    if (AF(arg0, s32, 0x14) == 0) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    MoveOnGround(arg0);
    if (DistSqToTarget(arg0) > 0x24000) {
        AF(arg0, s16, 2) = 3;
    } else if (func_sc04_002_80186544(arg0) != 1) {
        if (D_80126B68 != 0 || D_80126B70 != 0) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

void func_sc04_002_801853F8(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc04_002_801BD9F8);
    arg0->state = 4;
    arg0->timer = 0x5A;
    arg0->workE8 = 0;
}

void func_sc04_002_8018543C(u8 *o) {
    SV8 a;
    s32 r;
    s32 m;
    s32 h;
    s32 f;
    s32 t;
    s32 ang;

    if (DistSqToTarget(o) <= 0x24000) {
        AF(o, s16, 2) = 1;
        return;
    }
    if (AF(o, s32, 0x14) == 0) {
        AF(o, s32, 0x14) = 0x100000;
    }
    if (AF(o, u16, 0x34) == 0) {
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34)++;
            r = rand();
            m = r % 1024;
            h = AF(AF(o, u8 *, 0x20), s16, 0x12);
            AF(o, s32, 0xE4) = (rand() & 1) ? h + m : h - m;
        }
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE4), 8);
        if (TickTimer(o)) {
            AF(o, u16, 0x34) = 0;
            AF(o, s32, 0x1C) = 0x5A;
        }
    }
    SetForwardVelocity(o, 0xFFFC0000);
    f = MoveOnGround(o);
    if ((f & 0x8000) && AF(o, s32, 0xE8) == 0) {
        a.x = AF(o, s32, 0x10) >> 8;
        a.z = AF(o, s32, 0x18) >> 8;
        t = HeadingToSV(&D_800D3918, &g_WallNormal);
        ang = (t * 2 - HeadingToSV(&a, &D_800D3918)) & 0xFFF;
        AF(o, s32, 0xE4) = ang;
        AF(o, u16, 0x34) = 1;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s32, 0xE8) = 0x10;
    } else if (!(f & 0x2000)) {
        RestorePrevPos(o);
    }
    if (AF(o, s32, 0xE8) != 0) {
        AF(o, s32, 0xE8)--;
    }
}

void func_sc04_002_80185620(s32 arg0) {
    SetScript(arg0, (s32) &D_sc04_002_801BDAA0);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xD0) = 0;
    StopMotion(arg0);
}

void func_sc04_002_80185668(u8 *o) {
    Player *p;
    SV8 a;
    SV8 b;
    AnimEntry *t;
    s32 v;

    p = &g_Player;
    if (AF(o, u16, 0x34) == 0 && D_80126B84 < (s32)0xFFF6C000 && AF(o, s16, 0x98) != 0
        && AF(o, u8 *, 0x90) != &D_sc04_002_801BDF60) {
        SetScript(o, &D_sc04_002_801BDB28);
        AF(o, s16, 0x34)++;
    }
    func_sc04_002_801863A4(o);
    if (MoveOnGround(o) & 0x6000) {
        if (p->vel[0] == 0 && p->vel[2] == 0) {
            if (func_sc04_002_80186544(o) == 0) {
                AF(o, s16, 2) = 1;
            }
        } else if (AF(o, u8 *, 0x90) == &D_sc04_002_801BDF60) {
            t = AF(o, s32, 0xD0);
            if (t != 0) {
                SetScript(o, t);
                AF(o, s32, 0xD0) = 0;
            }
        } else if (AF(o, s16, 0x98) == 0) {
            AnimStepNow(o);
        }
    } else {
        v = D_8011F730;
        if (v == 2) {
            AF(o, s32, 0xD0) = AF(o, s32, 0x90);
            SetScript(o, &D_sc04_002_801BDF60);
        } else if (v == 1) {
            if (AF(o, s32, 0xD0) == 0) {
                AF(o, s16, 0x98) = 0;
            }
        } else if (AF(o, s16, 0x98) != 0 && p->fallSpeed == 0) {
            a.x = AF(o, s16, 6);
            a.y = AF(o, s16, 0xA);
            a.z = AF(o, s16, 0xE);
            b = a;
            b.y += 0x10;
            TraceMap(1, &a, &b);
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc04_002_801858A0(s32 arg0) {
    StopMotion(arg0);
    SetScript(arg0, (s32) &D_sc04_002_801BDD38);
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc04_002_801858E4(u8 *o) {
    func_sc04_002_801863A4(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_8011F730 == 2) {
            AF(o, u16, 0x34) = 3;
            SetScript(o, &D_sc04_002_801BDF60);
            return;
        }
        if (D_8011F730 == 3) {
            AF(o, u16, 0x34) = 1;
            SetScript(o, &D_sc04_002_801BDBB0);
            return;
        }
        if (D_8011F730 == 4) {
            AF(o, u16, 0x34) = 2;
            SetScript(o, &D_sc04_002_801BDC18);
            return;
        }
        break;
    case 1:
        func_sc04_002_801861D0(o, &D_sc04_002_801B4F44, 7, CalcPower02());
        SpawnActorArg(0x1EB, 0, o);
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc04_002_801BDE00);
        }
        break;
    case 2:
        func_sc04_002_801861D0(o, &D_sc04_002_801B4F64, 6, CalcPower03());
        SpawnActorArg(0x1EB, 1, o);
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc04_002_801BDE00);
        }
        break;
    case 3:
        break;
    default:
        return;
    }
    if (MoveCollide(o) & 0x2000) {
        AF(o, u16, 2) = 1;
    }
}

void func_sc04_002_80185A68(s32 arg0) {
    StopWithGravity(arg0);
    SetScript(arg0, (s32) &D_sc04_002_801BE120);
    AF(arg0, s16, 2) = 0xA;
}

void func_sc04_002_80185AA8(s32 arg0) {
    if (MoveCollide(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_002_80185AE0(s32 arg0) {
    StopMotion(arg0);
    AF(arg0, s32, 0x48) = 0xD000;
    SetLocalVelocity(arg0, (s32) &D_sc04_002_801B4F34);
    SetScript(arg0, (s32) &D_sc04_002_801BE018);
    AF(arg0, s16, 2) = 0xC;
}

void func_sc04_002_80185B38(u8 *arg0) {
    s32 temp_v1;

    temp_v1 = AF(arg0, s32, 0x94);
    if (temp_v1 == 0xA) {
        AF(arg0, s32, 0x48) = 0;
        AF(arg0, s32, 0x14) = 0;
    } else if (temp_v1 == 0x12) {
        AF(arg0, s32, 0x48) = 0x18000;
    }
    if (MoveCollide((s32) arg0) & 0x2000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc04_002_80185BA0(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc04_002_801BDBB0);
    arg0->state = 0xE;
}

s32 func_sc04_002_80185BD8(s32 arg0) {
    func_sc04_002_801861D0(arg0, (s32) &D_sc04_002_801B4F44, 7, CalcPower02());
    if (AF(arg0, s32, 0x94) < 9) {
        SpawnActorArg(0x1EB, 0, arg0);
    }
    if (D_8011F730 == 3) {
        AF(arg0, s16, 2) = 0xD;
        return;
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, (s32) &D_sc04_002_801BD950);
        AF(arg0, s16, 2) = 2;
        StopWithGravity(arg0);
        func_sc04_002_80186544(arg0);
    }
}

void func_sc04_002_80185C90(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc04_002_801BDC18);
    arg0->state = 0x10;
}

void func_sc04_002_80185CC8(u8 *o) {
    func_sc04_002_801861D0(o, &D_sc04_002_801B4F64, 6, CalcPower03(o));
    if ((u32) (AF(o, s32, 0x94) - 4) < 10) {
        SpawnActorArg(0x1EB, 1, o);
    }
    if ((AF(o, u16, 0x72) & 0x4000) && D_8011F730 != 4) {
        SetScript(o, &D_sc04_002_801BD950);
        AF(o, s16, 2) = 2;
        StopWithGravity(o);
        func_sc04_002_80186544(o);
    }
}

void func_sc04_002_80185D7C(StageActor *arg0) {
    arg0->state = 0x12;
    SetScript((s32) arg0, (s32) &D_sc04_002_801BDCD0);
}

void func_sc04_002_80185DA8(u8 *o) {
    SpawnDef d;
    WMtx m;
    SV8 c;
    SV8 e;
    s32 r;
    s32 f;

    if (AF(o, s32, 0x94) == 6) {
        e.y = 0;
        e.x = 0;
        e.z = 0x20;
        ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, &e, &e);
        GetPartWorldMatrix(o, 7, &m);
        LocalToWorld(&m, &D_800D3918, &c);
        d.kind = 0x1FA;
        d.unkC = 0x7FFF;
        d.unk8 = 0;
        d.flags = 0;
        d.x = c.x + e.x;
        d.y = c.y;
        d.z = c.z + e.z;
        d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
        d.unk10 = 0;
        r = SpawnActorFromDef(&d, o);
        AF(o, s32, 0xCC) = r;
        if (r != 0) {
            SetModelParts(AF(o, u8 *, 0x20), &D_sc04_002_801B765C);
            SetScript(o, &D_sc04_002_801B500C);
            AF(o, s32, 0xE0) |= 1;
        }
    }
    f = AF(o, s32, 0xE0);
    if (f & 1) {
        if (f & 2) {
            if (PosDistSq(o + 4, AF(o, u8 *, 0xCC) + 4) < 0x1801) {
                FreeActor(AF(o, u8 *, 0xCC));
                SetModelParts(AF(o, u8 *, 0x20), &D_sc04_002_801B7624);
                SetScript(o, &D_sc04_002_801BDCD0);
                AF(o, s32, 0x94) = 7;
                AF(o, s32, 0xCC) = 0;
                AF(o, s32, 0xE0) &= ~3;
            }
        }
    }
    if (AF(o, u8 *, 0x90) == &D_sc04_002_801BDCD0 && (AF(o, u16, 0x72) & 0x4000)) {
        SetScript(o, &D_sc04_002_801BD950);
        AF(o, s16, 2) = 2;
        StopWithGravity(o);
        func_sc04_002_80186544(o);
    }
}

void func_sc04_002_80185F98(u8 *arg0) {
    AF(arg0, s16, 2) = 0x14;
    SetScript((s32) arg0, (s32) &D_sc04_002_801BE288);
    StopWithGravity((s32) arg0);
}

void func_sc04_002_80185FD8(s32 arg0) {
    MoveCollide(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, (s32) &D_sc04_002_801BD950);
        AF(arg0, s16, 2) = 2;
        StopWithGravity(arg0);
        func_sc04_002_80186544(arg0);
    }
}

void func_sc04_002_8018603C(StageActor *arg0) {
    func_sc04_002_80186078();
    SetScript(arg0, (s32) &D_sc04_002_801BD950);
    arg0->animTimer = 0;
}

void func_sc04_002_80186078(u8 *arg0) {
    StageActor *t;

    if (AF(arg0, s32, 0xE0) & 1) {
        SetModelParts(AF(arg0, s32, 0x20), &D_sc04_002_801B7624);
        t = AF(arg0, s32, 0xCC);
        if (t != 0) {
            FreeActor(t);
            AF(arg0, s32, 0xCC) = 0;
        }
        AF(arg0, s32, 0xE0) &= ~3;
    }
    func_sc04_002_8018615C((s32) arg0);
}

void func_sc04_002_801860F8(u8 *arg0) {
    if (AF(arg0, s32, 0xC4) & 4) {
        AF(arg0, s16, 2) = 0x13;
    } else {
        AF(arg0, s16, 2) = 1;
    }
    AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    AF(arg0, s32, 0xE0) = 0;
}

s32 func_sc04_002_8018612C(StageActor *arg0) {
    GainStat0FromActor(arg0);
    return DespawnActor(arg0);
}

void func_sc04_002_8018615C(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->workF4;
    if (temp_v0 != 0) {
        arg0->workF4 = (s32) (temp_v0 - 1);
        return;
    }
    if (!(arg0->workE0 & 1)) {
        func_sc04_002_8018739C(arg0, (s32) &D_sc04_002_801B4F44, 7);
    }
    func_sc04_002_80187604(arg0, (s32) &D_sc04_002_801B4F64, 6);
}

s32 func_sc04_002_801861D0(StageActor *o, u8 *p, s32 n, s32 snd) {
    WMtx m;
    SV8 a;
    SV8 b;
    SV8 c;

    GetPartWorldMatrix(o, n, &m);
    LocalToWorld(&m, p, &a);
    LocalToWorld(&m, p + 8, &b);
    LocalToWorld(&m, p + 0x10, &c);
    AF(o, SV8, 0xFC) = c;
    AF(o, SV8, 0x104) = b;
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
        HitPlayer(1, 1, 0, snd, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

s32 func_sc04_002_801862F0(u8 *arg0) {
    SV8 a;
    SV8 b;

    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc04_002_801B50F8[0], &a);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc04_002_801B50F8[1], &b);
    if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
        HitPlayer(1, 0x18, AF(AF(arg0, u8 *, 0x20), s16, 0x12), 0x18, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

void func_sc04_002_801863A4(u8 *o) {
    SV8 a;
    SV8 b;
    V3 v;
    WMtx m;
    Player *p;
    s32 ang;
    s32 t;

    p = &g_Player;
    if (D_80126B68 != 0 || D_80126B70 != 0) {
        a.x = AF(o, u16, 6) - g_PlayerX;
        a.y = 0;
        a.z = AF(o, u16, 0xE) - D_80126B66;
        VectorNormalSS(&a, &a);
        b.x = D_80126B68 >> 8;
        b.y = 0;
        b.z = D_80126B70 >> 8;
        t = HeadingToSV(&D_800D3918, &a);
        ang = (t * 2 - HeadingToSV(&b, &D_800D3918)) & 0xFFF;
    } else {
        ang = AF(AF(o, u8 *, 0x20), s16, 0x12);
    }
    if (CanGuard(p)) {
        a.z = 0;
        a.x = 0;
        a.y = ang;
        v.y = 0;
        v.x = 0;
        v.z = 0xFFFC0000;
        RotMatrixZYX(&a, &m);
        ApplyMatrixLV(&m, &v, o + 0x10);
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = ang;
        a.z = 0;
        a.x = 0;
        a.y = ang - (u16)p->model->rot.vy;
        RotMatrixZYX(&a, &m);
        ApplyMatrixLV(&m, (u8 *)p + 0x10, o + 0x10);
    }
    if (PlayerEvent100(p)) {
        AF(o, s32, 0x14) = 0x100000;
    } else {
        AF(o, s32, 0x14) = p->fallSpeed;
    }
}

s32 func_sc04_002_80186544(s32 arg0) {
    s32 ret = 1;

    switch (D_8011F730) {
    case 1:
        StopMotion(arg0);
        SetScript(arg0, &D_sc04_002_801BDD38);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0;
        break;
    case 2:
        AF(arg0, s16, 2) = 0xB;
        break;
    case 3:
        SetScript(arg0, &D_sc04_002_801BDBB0);
        AF(arg0, s16, 2) = 0xE;
        break;
    case 4:
        SetScript(arg0, &D_sc04_002_801BDC18);
        AF(arg0, s16, 2) = 0x10;
        break;
    case 5:
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, &D_sc04_002_801BDCD0);
        break;
    default:
        ret = 0;
        break;
    }
    return ret;
}

void func_sc04_002_80186638(Mover *o) {
    SV8 b;
    SV8 a;
    s32 w;
    u8 *e;
    s32 i;
    u8 *p4;
    s32 *wp;

    i = 0;
    e = (u8 *)&g_Actors;
    p4 = (u8 *)o + 4;
    wp = &w;
    for (; i < 0x60; i++, e += 0x10C) {
        if (AF(e, u16, 0) == 0x1DC && o != e) {
            if (DistSq(p4, e + 4) < 0x900) {
                AngleToVec2(wp, HeadingTo(p4, e + 4), 0x31);
                a.x = AF(e, u16, 6);
                a.y = AF(e, u16, 0xA);
                a.z = AF(e, u16, 0xE);
                a.x += w;
                a.z += w >> 16;
                b.x = (u16)o->prev[0].h.i;
                b.y = (u16)o->prev[1].h.i;
                b.z = (u16)o->prev[2].h.i;
                if (CollidePath(&b, &a, 0) & 0x2000) {
                    o->pos[0].h.i = a.x;
                    o->pos[1].h.i = a.y;
                    o->pos[2].h.i = a.z;
                } else {
                    RestorePrevPos(o);
                }
                return;
            }
        }
    }
}

u8 *func_sc04_002_801867A0(u8 *o) {
    u8 *e;
    u8 *p;
    s32 b;
    s32 d;
    s32 d2;

    e = (u8 *)SpawnPropFrom(o, 0x4F);
    if (e == 0) {
        return 0;
    }
    AF(e, s16, 0xA) -= 0x28;
    d = rand() % 28;
    b = AF(e, s16, 6);
    AF(e, s16, 6) = (rand() & 1) ? b + d : b - d;
    d2 = rand() % 32;
    b = AF(e, s16, 0xA);
    AF(e, s16, 0xA) = (rand() & 1) ? b + d2 : b - d2;
    d = rand() % 28;
    b = AF(e, s16, 0xE);
    AF(e, s16, 0xE) = (rand() & 1) ? b + d : b - d;
    if (rand() & 1) {
        p = AF(e, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = -0x2000;
    } else {
        p = AF(e, u8 *, 0x20);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x2000;
    }
    func_sc04_002_8018691C(o, 0x7F3);
    return e;
}

s32 func_sc04_002_8018691C(u8 *o, s32 snd0) {
    u16 snd;
    Player *p;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s16 pan;
    s16 vol;
    s32 t;

    snd = snd0;
    p = &g_Player;
    pan = 7;
    vol = 0x7F;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    ProjectPoint(&a, &b);
    b.z = 0;
    if ((b.x < 0 ? -b.x : b.x) >= 0xA0) {
        return 0;
    }
    if (b.y >= 0 ? b.y >= 0x78 : -b.y >= 0x78) {
        return 0;
    }
    pan += b.x / 20;
    if (pan < 0) {
        pan = 0;
    } else if (pan >= 0x10) {
        pan = 0xF;
    }
    c.x = p->pos[0].h.i;
    c.y = p->pos[1].h.i;
    c.z = p->pos[2].h.i;
    ProjectPoint(&c, &d);
    d.z = 0;
    t = SVecDistSq(&b, &d) - 0x100;
    if (t > 0) {
        vol -= t * 0x7F / 25600;
        if (vol < 0) {
            vol = 0;
        }
    }
    PlaySoundId(snd, (u16)(vol | ((pan << 8) | 0x3000)));
    return 1;
}

void func_sc04_002_80186AD8(StageActor *arg0) {
    D_sc04_002_801B5108[arg0->state]();
}

void func_sc04_002_80186B14(StageActor *arg0) {
    u16 t;
    AF(arg0, u16, 0xDC) = (u16)arg0->parent->unkFC;
    AF(arg0, u16, 0xDE) = (u16)arg0->parent->workFE;
    AF(arg0, u16, 0xE0) = (u16)arg0->parent->work100;
    AF(arg0, u16, 0xE4) = (u16)arg0->parent->work104;
    AF(arg0, u16, 0xE6) = (u16)arg0->parent->work106;
    t = (u16)arg0->parent->work108;
    arg0->state++;
    AF(arg0, u16, 0xE8) = t;
}

void func_sc04_002_80186B70(StageActor *arg0) {
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc04_002_80186B84(StageActor *o) {
    s32 d;
    s32 x, y, z;

    o->unkFC = o->parent->unkFC;
    o->workFE = o->parent->workFE;
    o->work100 = o->parent->work100;
    o->work104 = o->parent->work104;
    o->work106 = o->parent->work106;
    o->work108 = o->parent->work108;
    AF(o, s16, 0xEC) = (o->unkFC + AF(o, s16, 0xDC)) >> 1;
    AF(o, s16, 0xEE) = (o->workFE + AF(o, s16, 0xDE)) >> 1;
    AF(o, s16, 0xF0) = (o->work100 + AF(o, s16, 0xE0)) >> 1;
    AF(o, s16, 0xF4) = (o->work104 + AF(o, s16, 0xE4)) >> 1;
    AF(o, s16, 0xF6) = (o->work106 + AF(o, s16, 0xE6)) >> 1;
    AF(o, s16, 0xF8) = (o->work108 + AF(o, s16, 0xE8)) >> 1;
    AF(o, s16, 0xEC) -= AF(o, s16, 0xF4);
    AF(o, s16, 0xEE) -= AF(o, s16, 0xF6);
    AF(o, s16, 0xF0) -= AF(o, s16, 0xF8);
    VectorNormalSS((u8 *)o + 0xEC, (u8 *)o + 0xEC);
    d = D_sc04_002_801B5118[(u16)o->param & 0xF];
    x = AF(o, s16, 0xEC) / d;
    y = AF(o, s16, 0xEE) / d;
    z = AF(o, s16, 0xF0) / d;
    o->timer = 0x10;
    o->state++;
    AF(o, s16, 0xEC) = AF(o, s16, 0xF4) + x;
    AF(o, s16, 0xEE) = AF(o, s16, 0xF6) + y;
    AF(o, s16, 0xF0) = AF(o, s16, 0xF8) + z;
}

void func_sc04_002_80186D94(s32 arg0) {
    func_sc04_002_80186DD4();
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc04_002_80186DD4(u8 *o) {
    QuadArg q;
    s32 flag;
    s32 flag2;
    s32 otz;
    WorkHead *w;
    s16 a;
    s32 b;
    s16 x;
    s16 y;

    a = AF(o, s32, 0x1C) * 15;
    x = a;
    w = &D_800AF630;
    b = a >> 1;
    y = b;
    if (!(AF(o, u16, 0x70) & 1)) {
        q.c[0].b = q.c[1].b = x;
        q.c[0].r = q.c[1].r = q.c[0].g = q.c[1].g = y;
        a -= 0x10;
        {
            s32 c = b - 0x10;
            x = a;
            y = c;
            if (a < 0) {
                x = 0;
            }
            if (c < 0) {
                y = 0;
            }
        }
        q.c[2].b = q.c[3].b = x;
        q.c[2].r = q.c[3].r = q.c[2].g = q.c[3].g = y;
    } else {
        q.c[0].r = q.c[1].r = x;
        q.c[0].g = q.c[1].g = q.c[0].b = q.c[1].b = y;
        a -= 0x10;
        {
            s32 c = b - 0x10;
            x = a;
            y = c;
            if (a < 0) {
                x = 0;
            }
            if (c < 0) {
                y = 0;
            }
        }
        q.c[2].r = q.c[3].r = x;
        q.c[2].g = q.c[3].g = q.c[2].b = q.c[3].b = y;
    }
    q.code = 0x50000000;
    gte_SetRotMatrix(&w->wsm);
    gte_SetTransMatrix(&w->wsm);
    gte_ldv3(o + 0xFC, o + 0x104, o + 0xEC);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(&q.p[0], &q.p[1], &q.p[2]);
    gte_ldv0(o + 0xF4);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(&q.p[3]);
    gte_avsz4();
    gte_stotz(&otz);
    if (!(flag & ~0x1000)) {
        q.p[0].z = otz;
        DrawPrimG4Screen(&q);
    }
    gte_ldv3(o + 0xEC, o + 0xF4, o + 0xDC);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(&q.p[0], &q.p[1], &q.p[2]);
    gte_ldv0(o + 0xE4);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(&q.p[3]);
    gte_avsz4();
    gte_stotz(&otz);
    if (!(flag & ~0x1000)) {
        q.p[0].z = otz;
        DrawPrimG4Screen(&q);
    }
}

void func_sc04_002_8018710C(StageActor *arg0) {
    D_sc04_002_801B511C[arg0->state]();
    if (arg0->kind != 0) {
        func_sc04_002_8018739C((s32) arg0, (s32) &D_sc04_002_801B4F44, 0);
    }
}

void func_sc04_002_80187174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc04_002_801B7690);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
    UpdateModelZYX((s32) arg0);
    AF(arg0, s32, 0xE8) = 0xFFE00000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_801871EC(u8 *o) {
    SV8 a;
    s32 d;
    u8 *p;
    s32 f;

    if (!(AF(AF(o, u8 *, 0x64), s32, 0xE0) & 2)) {
        if (TargetInFront(AF(o, u8 *, 0x64), 0x200)) {
            d = HeadingTo(AF(o, u8 *, 0x64) + 4, &g_PlayerPosX);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), d, 1);
        }
    } else {
        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        d = HeadingToSV(o + 0x88, &a);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), d, 4);
    }
    SetForwardVelocity(o, AF(o, s32, 0xE8));
    AF(o, s32, 0xE8) += 0x18000;
    if (AF(o, u16, 0x34) == 0) {
        if (MoveCollide(o)) {
            if (!(AF(AF(o, u8 *, 0x64), s32, 0xE0) & 2)) {
                AF(o, s32, 0xE8) = 0;
                AF(AF(o, u8 *, 0x64), s32, 0xE0) |= 2;
                AF(o, u16, 0x34)++;
            }
        } else {
            p = AF(o, u8 *, 0x64);
            f = AF(p, s32, 0xE0);
            if (!(f & 2) && AF(o, s32, 0x1C) == 0x15) {
                AF(p, s32, 0xE0) = f | 2;
            }
        }
    } else {
        MoveObject(o);
    }
    ActorSegmentDamagesPlayer(o, &D_sc04_002_801B4F44, &D_sc04_002_801B4F44 + 8, 10);
    AF(o, s32, 0x1C)++;
}

void func_sc04_002_8018739C(StageActor *a0, s32 a1, s32 a2) {
    WMtx m;
    QuadArg q;
    s8 *t;
    s32 i;

    func_sc04_002_801878B0(a0, a1, a2, &m);
    if (D_800B99DA & 1) {
        q.c[1].b = 0x58;
    } else {
        q.c[1].b = 0x48;
    }
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    q.c[2].r = q.c[2].g = q.c[2].b = 0;
    q.c[3].r = q.c[3].g = q.c[3].b = 0;
    q.code = 0x50000000;
    q.p[1].x = q.p[1].y = q.p[1].z = q.p[0].z = q.p[2].z = q.p[3].z = 0;
    q.c[1].r = q.c[1].g = q.c[1].b >> 2;
    t = D_sc04_002_801B4F84;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].y = *t++;
        q.p[2].x = *t++;
        q.p[2].y = *t++;
        q.p[3].x = *t++;
        q.p[3].y = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc04_002_801B4F98;
    q.p[1].z = -0x12;
    q.p[1].x = q.p[1].y = q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].b <<= 1;
    q.c[1].r = q.c[1].g = q.c[1].g << 1;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        if (i == 2) {
            q.c[3].b = q.c[1].b;
            q.c[3].r = q.c[3].g = q.c[1].r;
        } else if (i == 3) {
            q.c[3].r = q.c[3].g = q.c[3].b = 0;
            q.c[0].b = q.c[1].b;
            q.c[0].r = q.c[0].g = q.c[1].r;
        }
        DrawPrimG4Mtx(&q, &m);
    }
}

void func_sc04_002_80187604(StageActor *a0, s32 a1, s32 a2) {
    WMtx m;
    QuadArg q;
    s8 *t;
    s32 i;

    func_sc04_002_801878B0(a0, a1, a2, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = q.p[0].z = q.p[2].z = q.p[3].z = 0;
    if (D_800B99DA & 1) {
        q.c[1].r = 0xA0;
    } else if (D_800B99DA & 2) {
        q.c[1].r = 0xC0;
    } else {
        q.c[1].r = 0x80;
    }
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    q.c[2].r = q.c[2].g = q.c[2].b = 0;
    q.c[3].r = q.c[3].g = q.c[3].b = 0;
    q.code = 0x50000000;
    q.c[1].g = q.c[1].b = q.c[1].r >> 2;
    t = D_sc04_002_8018B4D8;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].y = *t++;
        q.p[2].x = *t++;
        q.p[2].y = *t++;
        q.p[3].x = *t++;
        q.p[3].y = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc04_002_8018B4EC;
    q.p[1].x = q.p[1].y = q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.p[1].z = -0x20;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
        if (i == 1) {
            q.p[1].z = 0x20;
            t += 2;
        }
    }
    t += 2;
    q.p[0].x = 0;
    q.p[0].z = -0x20;
    q.c[0].r = q.c[1].r;
    q.c[0].g = q.c[0].b = q.c[1].g;
    for (i = 0; i < 2; i++) {
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        DrawPrimG4Mtx(&q, &m);
    }
}

void func_sc04_002_801878B0(StageActor *x, u8 *s, s32 y, WMtx *mo) {
    WMtx m;
    SV8 v;
    SV8 r;
    V3 l;
    u8 *c;

    c = g_ActiveCamera;
    GetPartWorldMatrix(x, y, &m);
    LocalToWorld(&m, s + 0x18, &v);
    func_800D20C0(&v, &r, 8);
    SetMatrixTrans(&v, mo);
    r.x = AF(s, u16, 8) - AF(s, u16, 0x10);
    r.y = AF(s, u16, 0xA) - AF(s, u16, 0x12);
    r.z = AF(s, u16, 0xC) - AF(s, u16, 0x14);
    ApplyMatrixSV(&m, &r, &r);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, mo);
    l.x = AF(c, s32, 0x5C) - v.x;
    l.y = AF(c, s32, 0x60) - v.y;
    l.z = AF(c, s32, 0x64) - v.z;
    ApplyTransposeMatrixLV(mo, &l, &l);
    r.z = -ratan2(l.x, l.y);
    RotMatrixYXZ(&r, mo);
}

void func_sc04_002_801879FC(u8 *v) {
    s32 flag[2];
    s32 otz;
    u8 *pk;
    u8 *pk2;
    PTag *ot;
    s32 z;
    u32 *base;

    pk = g_PrimNext;
    g_PrimNext = pk + 0x24;
    AF(pk, s32, 4) = AF(v, s32, 0x20);
    AF(pk, s32, 0xC) = AF(v, s32, 0x24);
    AF(pk, s32, 0x14) = AF(v, s32, 0x28);
    AF(pk, s32, 0x1C) = AF(v, s32, 0x2C);
    AF(pk, u8, 3) = 8;
    AF(pk, u8, 7) = 0x3A;
    gte_ldv3(v, v + 8, v + 0x10);
    gte_rtpt();
    gte_stflg(&flag[0]);
    gte_stsxy3(pk + 8, pk + 0x10, pk + 0x18);
    gte_ldv0(v + 0x18);
    gte_rtps();
    gte_stflg(&flag[1]);
    flag[0] |= flag[1];
    gte_stsxy(pk + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if ((flag[0] & ~0x1000) == 0) {
        base = g_WorldOtTable[D_800B9A02];
        z = otz + 1;
        if (z >= 0x1000) {
            z = 0xFFF;
        }
        ot = (PTag *)((z << 2) + (u32)base);
        ((PTag *)pk)->addr = ot->addr;
        pk2 = g_PrimNext;
        ot->addr = (u32)pk;
        g_PrimNext = pk2 + 8;
        AF(pk2, u8, 3) = 1;
        AF(pk2, u32, 4) = 0xE100002A;
        ((PTag *)pk2)->addr = ot->addr;
        ot->addr = (u32)pk2;
    }
}

void func_sc04_002_80187BD8(u8 *arg0) {
    D_sc04_002_801B5160[AF(arg0, u16, 2)]();
}

void func_sc04_002_80187C14(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_sc04_002_801B5124;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x5B;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_sc04_002_801B5130);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_002_80187C90(u8 *arg0) {
    if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        FreeProp((s32) arg0);
    }
}

void func_sc04_002_80187CD0(StageActor *arg0) {
    D_sc04_002_801BE37C[arg0->state]();
}

void func_sc04_002_80187D0C(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc04_002_8018822C() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc04_002_801BE330, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc04_002_801BE33C);
    func_sc04_002_80188284((s32) arg0);
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

void func_sc04_002_80187E08(u8 *arg0) {
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
            func_sc04_002_80188284(arg0);
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
    func_sc04_002_80188300(arg0);
}

void func_sc04_002_80188098(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc04_002_80188284(arg0);
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
    func_sc04_002_80188300(arg0);
}

s32 func_sc04_002_8018822C(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_002_80188284(u8 *o) {
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

void func_sc04_002_80188300(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc04_002_80188344(StageActor *o, s16 *v, s32 arg2_0) {
    SpawnDef d;
    s16 arg2 = arg2_0;

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
