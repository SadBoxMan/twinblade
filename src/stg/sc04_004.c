#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern void (*D_sc04_004_801A8C6C[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_004_8017BE9C(void) {
}

void func_sc04_004_8017BEA4(void) {
}

void func_sc04_004_8017BEAC(void) {
}

void func_sc04_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_004_801881BC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc04_004_8017CD9C();
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
extern void (*D_sc04_004_80188214[])();
extern void PlaySe();
extern void func_sc04_004_8017DF10();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc04_004_80188228[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc04_004_8018823C[])();
extern void func_800D22E4();
extern void func_sc04_004_8017E608();
extern void (*D_sc04_004_8018830C[])();
void func_sc04_004_8017EA88(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc04_004_8017EAB0(void);
extern void func_800D1EBC();
extern void (*D_sc04_004_80188320[])();
extern u8 D_sc04_004_8018832C;
extern void StartPlayerActionScript();
extern u8 D_sc04_004_80188330;
extern void func_sc04_004_8017EC08();
extern void (*D_sc04_004_8018833C[])();
extern void (*D_sc04_004_801883B0[])();
extern void (*D_sc04_004_801883E8[])();
extern void func_sc04_004_8017FA1C();
extern s32 func_sc04_004_8017F9F4();
extern u8 D_sc04_004_80188390;
extern void (*D_sc04_004_801886F8[])();
extern void (*D_sc04_004_80188734[])();
extern void (*D_sc04_004_80192E8C[])();
extern void (*D_sc04_004_8019A170[])();
extern void (*D_sc04_004_8019A184[])();
extern void (*D_sc04_004_801A8C90[])();
extern void (*D_sc04_004_801B0DF4[])();

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern u8 D_sc04_004_80188354;
extern void (*D_sc04_004_80188378[])();
extern void StartRumbleScript();

extern s32 D_sc04_004_8018834C[];
extern s32 func_8013B7F4();
extern void SetLocalVelocity();
extern s32 TickTimer();
extern s32 MoveCollidePassable();
extern u8 D_800D3918;
extern s32 ActorSegmentDamagesPlayer();
extern s32 g_PlayerAction;
extern u8 D_sc04_004_8019A15C;
extern u8 D_sc04_004_8019A168;
extern s32 SpawnPropFrom();
extern void RejectSpawn();
extern u8 D_sc04_004_8019A42C;
extern u8 D_sc04_004_801B0750;
extern u8 D_sc04_004_801B0BD8;
extern s32 DistSqToTarget();
extern u8 D_sc04_004_801B0B30;
extern void func_sc04_004_8018352C();
extern u8 D_sc04_004_801B08F0;
extern void SpawnHeadMarker();
extern void func_sc04_004_8018342C();
extern void ZeroFill();

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
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern void func_sc04_004_8017EFF4();
extern void NextObjState();
extern void ClearPlayerHittable();
extern s32 func_sc04_004_8017F0E0();
extern void EnterPlayerStanding();
extern void func_80165718();
extern void SetPlayerEvent100();
extern u8 D_80062C04;
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern void func_sc04_004_8017FB78();
extern s32 TickObjTimer();
extern void SetMoverTimer();
extern void NextState();
extern u8 D_sc04_004_80188728;
extern void CopyPosInt();
extern void InitSpriteKind3();
extern void SetObjTimer();
extern u8 D_sc04_004_8019972C;
extern s32 D_sc04_004_801997A4;
extern void SetScriptCopy();
extern s32 StopWithGravity();
extern s32 SetState();
extern s32 D_sc04_004_8019979C;
extern u8 D_sc04_004_80199904;
extern u8 D_sc04_004_80199E1C;
extern u8 D_sc04_004_80199644;
extern u8 D_sc04_004_801999AC;
extern void (*D_sc04_004_80192E38[])();
extern s32 func_sc04_004_80180C74();
extern void func_sc04_004_80181248();
extern u8 D_sc04_004_80199BA4;
extern void TakeDamageAndRecoil();
extern void UpdateModelZYX();
extern void SetForwardVelocity();
extern void PlayDistanceSound32();
extern void FinishEnemy();
extern void RestorePrevPos();
extern void SetReactionStep();
extern void EndReaction();
extern s32 func_sc04_004_80180BA4();
extern s32 func_sc04_004_8018056C();
extern void func_sc04_004_80181130();
extern s32 func_sc04_004_80180750();
extern s32 func_sc04_004_80180878();
extern void StopWithHalfGravity();
extern u8 D_sc04_004_80192E94;
extern void (*D_sc04_004_80192EA4[])();
extern void CarryPlayerExact();
extern void func_sc04_004_80182014();
extern void (*D_sc04_004_8019DC44[])();
extern void IncStageCount811C();
extern void GainStat0FromActor();
extern u8 D_sc04_004_8019DB0C;
extern u8 D_sc04_004_8019DB40;
extern u8 D_sc04_004_8019DBA8;
extern u8 D_sc04_004_801A82F8;
extern s32 SetupActor();
extern void SpawnShadow();
extern u8 D_sc04_004_801A8380;
extern s16 g_PlayerHitKind;
extern u8 D_sc04_004_8019DAFC;
extern u8 D_sc04_004_8019DC18;
extern u8 D_sc04_004_8019DC34;
extern u8 D_sc04_004_8019DC3C;
extern void SetLocalVelocityXZ();
extern u8 D_sc04_004_8019DAEC;
extern u8 D_sc04_004_8019DC24;
extern u8 D_sc04_004_8019DC2C;
extern u8 D_sc04_004_801A8428;
extern s32 MoveCollide();
extern void (*D_sc04_004_801A8CA4[])();
extern u8 D_sc04_004_801A8CB0;
extern void func_sc04_004_80183B64();
extern u8 D_sc04_004_801A8B80;
extern u8 D_sc04_004_801A8BB4;
extern s32 SpawnActorArg();
extern s32 FindOtherActorByKind();



extern s32 HeadingTo();

extern s32 func_sc04_004_80180AF0();
extern s32 func_sc04_004_80180D94();
s32 func_sc04_004_80180274(s32 arg0, s32 arg1);
extern void func_sc04_004_80181BD4();

extern u8 D_sc04_004_8018835C;
extern void ShowQueuedDamageNumber();
extern void SetPlayerMotion();
extern u8 D_sc04_004_80199824;
s32 func_sc04_004_801804CC(StageActor *arg0);

extern s32 func_sc04_004_80180274();
extern void func_sc04_004_80180208();

extern u8 D_sc04_004_801B3BDC;
extern void func_8001C810();
extern s32 func_sc04_004_80181BA0();
extern s32 func_sc04_004_80181B6C();
extern s32 func_80143994();
extern u8 D_sc04_004_801A8898;
extern u8 D_sc04_004_801A8A58;

extern s32 D_8011F9C4;
extern u8 D_sc04_004_801888A8;
extern u8 D_sc04_004_80188970;
extern void SetFlag();
extern void SetVar32();
s32 func_sc04_004_8017EF1C(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc04_004_80188984;
extern u8 D_sc04_004_80188A38;
extern s32 PlayerEvent08();
extern void func_sc04_004_8017FE48();
extern void *g_PlayerModel;
extern s32 MoveOnGround();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc04_004_801883A8;
extern s32 D_sc04_004_801883C0[];
extern void func_sc04_004_8017F5E0();
extern void QueueImage();
extern void func_sc04_004_8017FBEC();
extern s32 func_sc04_004_8017FBFC();
extern void ClearEffectKind();

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
extern u8 D_sc04_004_8018816C;
extern u8 D_sc04_004_80188108[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern void SetShapeCircle();
extern u8 D_sc04_004_801B3850;
extern u8 D_sc04_004_801B3851;
extern u8 D_sc04_004_801B3852;
extern u8 D_sc04_004_801B3854;
extern u8 D_sc04_004_801B3855;
extern u8 D_sc04_004_801B3856;
extern s32 D_sc04_004_801B3A54;
extern s32 D_sc04_004_801B3A58;
extern s32 D_sc04_004_801B3A5C;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc04_004_8019A9DC;

void func_sc04_004_8017BEBC(u8 *obj) {
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

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc04_004_801881E8[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
extern s32 SpawnActor();
extern u8 D_sc04_004_8019A2FC;
extern u8 D_sc04_004_8019A0D4;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s32 HeadingPitchTo();
extern void MoveObject();
extern u8 D_sc04_004_8019A178;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern void StepSpriteAnim();
extern void func_sc04_004_80184554();


typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc04_004_80188344[];
extern s32 GetObjPadPressed();
extern void func_sc04_004_8017ED84();
extern u8 D_sc04_004_80188348[];
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

extern s32 FindActorByKind();
extern u8 D_sc04_004_80188700;
extern s32 SpawnPropAt();
extern void ObjLocalToWorld();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern u8 D_sc04_004_801880D4;
extern u8 D_sc04_004_80188110;
extern u8 D_sc04_004_8019A9B4;
extern u8 D_sc04_004_801B37E0;
extern u8 D_sc04_004_801B37EC;
extern u8 D_sc04_004_801B37ED;
extern u8 D_sc04_004_801B37EE;
extern u8 D_sc04_004_801B37FC;
extern u8 D_sc04_004_801B37FD;
extern u8 D_sc04_004_801B37FE;
extern u8 D_sc04_004_801B380D;
extern u8 D_sc04_004_801B380E;
extern u8 D_sc04_004_801B3810;
extern u8 D_sc04_004_801B3811;
extern u8 D_sc04_004_801B3812;
extern u8 D_sc04_004_801B3814;
extern u8 D_sc04_004_801B3815;
extern u8 D_sc04_004_801B3816;
extern u8 D_sc04_004_801B381C;
extern u8 D_sc04_004_801B3890;

extern s32 TraceMap();

extern s32 AllocSprite16To3E();
extern void InitNullSprite();
extern void PosToSVec();
extern void SVecToPos();
extern u16 D_sc04_004_80188434[];
extern V4 D_sc04_004_80188424;
extern SV8 D_sc04_004_801883F4[];

extern void GetPartWorldMatrix();
extern s32 SpawnActorFromDef();
extern void ProjectPoint();
extern u8 D_sc04_004_801A8C54;
extern SV8 D_sc04_004_801A8C64;

extern void RotateMatrixBy();
extern void DrawPrimF3();
extern void func_80020F34();
extern s32 GroundDistSqTo();
extern s16 D_sc04_004_80192E64;
extern s16 D_sc04_004_80192E66;
extern s16 D_sc04_004_80192E68;
extern s32 D_sc04_004_80195254;
extern s32 D_sc04_004_80195264;
extern s32 D_sc04_004_801B3AA0[];
extern s32 D_sc04_004_801B3AB0;
extern s32 D_sc04_004_801B3ABC;
extern u8 D_sc04_004_80192D8C;
extern s32 D_sc04_004_801B3A60[];
extern u8 D_sc04_004_80192DC0;
extern s32 SnapToGround();
extern u8 g_GroundNormal;
extern s32 HeadingToPlayer();
extern s32 HitPlayer();
extern SV8 D_sc04_004_80192EB4;
extern V3 D_sc04_004_80192EBC;
extern u8 D_sc04_004_801A8C88;
extern u8 D_sc04_004_801B0D28;

extern s32 DespawnActor();
extern s32 IsActorFar();
extern void HideModel();
extern u16 D_sc04_004_801A8C14[];
extern u16 D_sc04_004_801B3AC0[];
extern u8 D_sc04_004_801A8C34;

extern void PlaySoundFor();
extern u8 D_sc04_004_8019A00C;
extern u8 D_sc04_004_80199AF4;

extern void func_sc04_004_80180F74();

extern s32 HeadingToTarget();
extern u8 D_sc04_004_801A84D0;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 D_sc04_004_801B37E4;
extern s32 D_sc04_004_801B37E8;
extern s32 D_sc04_004_801B37F0;
extern s32 D_sc04_004_801B37F4;
extern s32 D_sc04_004_801B37F8;
extern s32 D_sc04_004_801B3800;
extern s32 D_sc04_004_801B3804;
extern s32 D_sc04_004_801B3808;

void func_sc04_004_8017CD9C(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc04_004_801B37E0 = D_sc04_004_801B37F0 = D_sc04_004_801B3800 = v.vx;
    D_sc04_004_801B37E4 = D_sc04_004_801B37F4 = D_sc04_004_801B3804 = v.vy;
    D_sc04_004_801B37E8 = D_sc04_004_801B37F8 = D_sc04_004_801B3808 = v.vz;
}

void func_sc04_004_8017CECC(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc04_004_801880D4) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc04_004_8019A9B4);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc04_004_80188110);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc04_004_801B37E0;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc04_004_801B3810;
        func_8001CD50(o, p);
        D_sc04_004_801B3812 = 0x80;
        p[0] = 0x80;
        D_sc04_004_801B3811 = 0xE0;
        D_sc04_004_801B3815 = 0;
        D_sc04_004_801B3814 = 0;
        D_sc04_004_801B3816 = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc04_004_8019A9DC;
        b = (U12x9 *) &D_sc04_004_801B3890;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc04_004_801B380E = 0xFF;
        D_sc04_004_801B381C = 0xFF;
        D_sc04_004_801B37FE = 0xFF;
        D_sc04_004_801B37FC = 0xFF;
        D_sc04_004_801B37EE = 0xFF;
        D_sc04_004_801B37EC = 0xFF;
        D_sc04_004_801B380D = 0x80;
        D_sc04_004_801B37FD = 0x80;
        D_sc04_004_801B37ED = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc04_004_801B3890;
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

void func_sc04_004_8017D258(u8 *arg0) {
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
    func_sc04_004_8017CD9C(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc04_004_80188108[(s16) i]) {
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
            StartEvent(arg0, &D_sc04_004_8018816C);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc04_004_8017D4D0(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc04_004_801B3850;
        func_8001CD50(o, p);
        D_sc04_004_801B3851 = 0xFF;
        D_sc04_004_801B3852 = 0xFF;
        p[0] = 0xFF;
        D_sc04_004_801B3856 = 8;
        D_sc04_004_801B3854 = 8;
        D_sc04_004_801B3855 = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc04_004_801B3A54;
        q[0] = v.vx;
        D_sc04_004_801B3A58 = v.vy;
        D_sc04_004_801B3A5C = v.vz;
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

void func_sc04_004_8017D618(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc04_004_8019A9DC;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc04_004_8017CD9C(arg0, 0);
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

void func_sc04_004_8017D798(StageActor *arg0) {
    D_sc04_004_801881BC[arg0->state]();
}

void func_sc04_004_8017D7D4(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc04_004_8017D820(StageActor *arg0) {
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
        func_sc04_004_8017CD9C((s32) arg0, rand() & 1);
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
extern u16 g_PlayerX;
extern u16 D_80126B66;


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc04_004_80188384;
extern s32 func_800D21C4();
extern void func_sc04_004_8017F5C4();
extern void ObjLocalToWorld16();
extern s32 GroundDistSqToFocus();
extern s32 D_sc04_004_801B3A90;
extern s32 D_sc04_004_801B3A80[];
extern s32 ActorSegmentHitsPlayer();
extern s16 g_PlayerHitDamage;
extern SV8 D_sc04_004_80192E6C[];
extern u8 D_sc04_004_80192E84;
extern void EmitProp23();
s32 func_sc04_004_80181E90(s32 arg0, s32 arg1, u16 arg2);
extern s32 func_sc04_004_80181D1C();
extern s32 func_sc04_004_80181DAC();
void func_sc04_004_80182170(s32 arg0, s32 arg1);
extern void FreeShadow();
extern void func_sc04_004_80184614();
extern void StopMotion();
extern s32 TurnStepToTarget();
extern u8 D_sc04_004_801AA6D0;
extern void StartSpriteAnim();
extern u8 D_sc04_004_801B0DA8;
extern u8 D_sc04_004_801B0DB4;
extern s32 func_sc04_004_801844FC();
extern s32 AllocActorSprite();

void func_sc04_004_8017D914(StageActor *arg0) {
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

void func_sc04_004_8017D994(StageActor *arg0) {
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

void func_sc04_004_8017DA48(StageActor *arg0) {
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

void func_sc04_004_8017DAB4(StageActor *arg0, s32 arg1) {
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

void func_sc04_004_8017DB40(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc04_004_8017DB60(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc04_004_8017CD9C(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc04_004_8017DBB4(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc04_004_8017DBF0(u8 *arg0) {
    D_sc04_004_80188214[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017DC2C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_004_8017DC7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DCD8(u8 *arg0) {
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
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DD5C(u8 *arg0) {
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
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017DEC4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_004_8017DF10((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_004_8017DF10(u8 *arg0) {
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
    t = D_sc04_004_801881E8;
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
    t = D_sc04_004_801881E8;
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
        t = D_sc04_004_801881E8;
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

void func_sc04_004_8017E21C(u8 *arg0) {
    D_sc04_004_80188228[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017E258(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_004_8017E298(u8 *arg0) {
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
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E308(u8 *arg0) {
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
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E394(u8 *arg0) {
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
    func_sc04_004_8017DF10((s32) arg0);
}

void func_sc04_004_8017E468(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_004_8017DF10((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc04_004_8017E4BC(u8 *arg0) {
    D_sc04_004_8018823C[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017E4F8(u8 *arg0) {
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

void func_sc04_004_8017E5AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc04_004_8017E608((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_004_8017E608(u8 *arg0) {
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

void func_sc04_004_8017E778(void) {
    D_8011F9C4 = 1;
    SetFlag(0xCC, 1);
    SetVar32(4, 0xCC);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_004_801888A8;
    g_SpawnListRanged = &D_sc04_004_80188970;
    func_sc04_004_8017EF1C(0);
}

void func_sc04_004_8017E7E8(void) {
    D_8011F9C4 = 1;
    SetFlag(0xCD, 1);
    SetVar32(4, 0xCD);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_004_80188984;
    g_SpawnListRanged = &D_sc04_004_80188A38;
    func_sc04_004_8017EF1C(1);
}

void func_sc04_004_8017E858(u8 *arg0) {
    D_sc04_004_8018830C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_004_8017E894(u8 *arg0) {
    func_sc04_004_8017EA88();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_004_8017E8D8(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc04_004_8017E8FC(u8 *arg0) {
    func_sc04_004_8017EAB0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_004_8017E93C(u8 *arg0) {
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

void func_sc04_004_8017E9B8(void) {
    func_800D1EBC();
}

void func_sc04_004_8017E9D8(u8 *arg0) {
    D_sc04_004_80188320[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_004_8017EA14(u8 *arg0) {
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

void func_sc04_004_8017EA88(void) {
    StartPlayerActionScript((s32) &D_sc04_004_8018832C, 0x01000000);
}

void func_sc04_004_8017EAB0(void) {
    StartPlayerActionScript((s32) &D_sc04_004_80188330, 0x01000000);
}

void func_sc04_004_8017EAD8(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_004_8017EC08, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_004_8017EC08((s32) &g_Camera);
}

void func_sc04_004_8017EB70(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_004_8017EC08, 1);
    SnapCamera((s32) &g_Camera);
    func_sc04_004_8017EC08((s32) &g_Camera);
}

void func_sc04_004_8017EC08(s32 arg0) {
    D_sc04_004_8018833C[AF(arg0, u8, 4)]();
}

void func_sc04_004_8017EC44(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_004_80188344)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc04_004_8017ED84((s32) arg0, (s32) &v);
}

void func_sc04_004_8017ECE4(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_004_80188348)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc04_004_8017ED84((s32) arg0, (s32) &v);
}

void func_sc04_004_8017ED84(u8 *arg0, u8 *arg1) {
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

s32 func_sc04_004_8017EF1C(s32 arg0) {
    return func_8013B7F4(D_sc04_004_8018834C[arg0], 0);
}

s32 func_sc04_004_8017EF4C(void) {
    return 0x55;
}

void func_sc04_004_8017EF54(u8 *arg0) {
    StartRumbleScript((s32) &D_sc04_004_80188354);
    D_sc04_004_80188378[AF(arg0, u16, 2)](arg0);
}

void func_sc04_004_8017EFAC(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc04_004_8017EFF4(arg0);
    NextObjState(arg0);
}

void func_sc04_004_8017EFF4(s32 arg0) {
    ClearPlayerHittable();
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc04_004_8018835C);
    AF(arg0, u8, 0xDE) = 0x5A;
    PlaySe(0x7EB);
    SpawnEffect(0x3F, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
    SetPlayerEvent100(arg0);
    NextObjState(arg0);
}

void func_sc04_004_8017F07C(u8 *arg0) {
    u8 temp_v1;

    ClearPlayerHittable();
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_sc04_004_8017F0E0((s32) arg0);
        EnterPlayerStanding((s32) arg0);
        func_80165718((s32) arg0);
        return;
    }
    SetPlayerEvent100((s32) arg0);
}

s32 func_sc04_004_8017F0E0(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc04_004_8017F130(u8 *arg0) {
    D_sc04_004_801883B0[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017F16C(s32 arg0) {
    V4 v;
    WMtx m;
    u8 *o;

    o = (u8 *)func_800D21C4(arg0, &D_sc04_004_80188384, 0x2B);
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        AF(o, s16, 0x28) = 0x224;
        AF(o, s16, 0x2A) = 0x1A8;
        AF(o, s16, 0x1A) = 0x3000;
        AF(o, s16, 0x18) = 0x3000;
        AF(o, s16, 0x14) = -0x400;
        AF(o, u16, 0x2C) = 0xC080;
        AF(o, s32, 4) |= 0x48000000;
        func_sc04_004_8017F5C4(arg0);
        func_sc04_004_8017F5E0(arg0);
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x30) = 0;
        SetObjTimer(arg0, 0x5A);
        AF(arg0, u16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void func_sc04_004_8017F228(u8 *arg0) {
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s6;

    temp_s6 = AF(arg0, void *, 0x20);
    func_sc04_004_8017F5E0((s32) arg0);
    temp_v0 = AF(arg0, s32, 0x30);
    if (temp_v0 == 0) {
        var_a0 = D_sc04_004_801883C0[AF(arg0, s32, 0x2C)];
        if (var_a0 == 0) {
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x2C) = 0;
            var_a0 = D_sc04_004_801883C0[0];
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
        func_sc04_004_8017FBEC((s32) &D_sc04_004_801883A8);
        PlaySe(0x7F4);
        AF(temp_s6, s32, 4) = (s32) (AF(temp_s6, s32, 4) | 0x80000000);
    }
    if ((TickObjTimer((s32) arg0) != 0) && (func_sc04_004_8017FBFC((s32) &D_sc04_004_801883A8) != 0)) {
        ClearEffectKind(0x40);
        FreeEffect((s32) arg0);
    }
}

void func_sc04_004_8017F5C4(s32 *arg0) {
    arg0[4] = arg0[1];
    arg0[5] = arg0[2];
    arg0[6] = arg0[3];
}

void func_sc04_004_8017F5E0(s32 arg0) {
    s32 t = AF(arg0, s32, 0x34);
    AF(arg0, s32, 4) = AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) = AF(arg0, s32, 0x18);
    ObjLocalToWorld16(t, arg0 + 4);
}

void func_sc04_004_8017F620(u8 *arg0) {
    D_sc04_004_801883E8[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017F65C(u8 *o) {
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
        AF(w, u16, 0x18) = AF(w, u16, 0x1A) = AF(w, u16, 0x1C) = D_sc04_004_80188434[AF(o, s32, 0x30)];
        v = D_sc04_004_80188424;
        r = D_sc04_004_801883F4[AF(o, s32, 0x2C)];
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

void func_sc04_004_8017F930(s32 arg0) {
    func_sc04_004_8017F9F4(arg0);
    func_sc04_004_8017FB78(arg0);
    if (TickObjTimer(arg0) != 0) {
        AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 2);
        AF(arg0, s32, 0x14) = (s32) ((s32) AF(arg0, s32, 0x14) >> 2);
        AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 2);
        SetObjTimer(arg0, 0x40);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_004_8017F9AC(s32 arg0) {
    func_sc04_004_8017F9F4(arg0);
    func_sc04_004_8017FB78(arg0);
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
    }
}

s32 func_sc04_004_8017F9F4(s32 arg0) {
    func_sc04_004_8017FA1C(arg0, (s32) &D_sc04_004_80188390);
}

void func_sc04_004_8017FA1C(u8 *o, u8 *p) {
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

void func_sc04_004_8017FB78(u8 *arg0) {
    u8 *p;
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 8) += AF(arg0, s32, 0x14);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x10) += AF(arg0, s32, 0x4C);
    AF(p, s16, 0x12) += AF(arg0, s32, 0x50);
    AF(p, s16, 0x14) += AF(arg0, s32, 0x54);
}

void func_sc04_004_8017FBEC(u8 *arg0) {
    AF(arg0, s32, 0) = 0x80404080;
}

s32 func_sc04_004_8017FBFC(u8 *p) {
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

void func_sc04_004_8017FC88(StageActor *arg0) {
    D_sc04_004_801886F8[arg0->state]();
}

void func_sc04_004_8017FCC4(s32 arg0) {
    SetMoverTimer(arg0, 0);
    NextState(arg0);
}

void func_sc04_004_8017FCF8(s32 arg0, s32 arg1) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(g_PlayerModel, s32, 4) >= 0) && (PlayerEvent08((s32) &g_Player) == 0)) {
            case 1:
                func_sc04_004_8017FE48(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_004_8017FE48(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_004_8017FE48(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_004_8017FE48(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_004_8017FE48(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_004_8017FE48(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        SetMoverTimer(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_004_8017FE48(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_004_80188700;
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

void func_sc04_004_8017FF34(u8 *arg0) {
    D_sc04_004_80188734[AF(arg0, u16, 2)]();
}

void func_sc04_004_8017FF70(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    CopyPosInt(arg0 + 4, (s32) (arg0 + 0x10));
    InitSpriteKind3(temp_s1, (s32) &D_sc04_004_80188728, 0x270, 0x100);
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

void func_sc04_004_80180054(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        SetObjTimer((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}


extern u8 D_sc04_004_80199F24;

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
extern void FreeProp();
extern void RotateSVectorY();

void func_sc04_004_801800C0(u8 *o) {
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

s32 func_sc04_004_801801AC(s32 arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_004_8019972C);
    AF(arg0, s32, 0x94) = 0xF;
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_801997A4;
    StopWithGravity(arg0);
    return SetState(arg0, 2);
}

void func_sc04_004_80180208(StageActor *arg0) {
    if (arg0->unk86 & 1) {
        func_sc04_004_801804CC(arg0);
        return;
    }
    SetScriptCopy(arg0, (s32) &D_sc04_004_80199824);
    arg0->timer = 0x60;
    SetState(arg0, 3);
}

s32 func_sc04_004_80180274(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_8019979C;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) arg1;
    StopWithGravity(arg0);
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0x98) = 0;
    return SetState(arg0, 4);
}

void func_sc04_004_801802D0(u8 *o) {
    SV8 v;
    s32 sp18;
    s32 r;

    r = 0;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            SetScriptCopy(o, &D_sc04_004_8019A00C);
            UpdateModelZYX(o);
            SetForwardVelocity(o, -0x80000);
            AF(o, s32, 0x14) = -0xC0000;
        }
        func_sc04_004_80181130(o, 0);
        break;
    case 1:
        r = MoveCollidePassable(o);
        if (AF(o, s16, 0xA) > 0) {
            FreeActor(o);
            return;
        }
        if (func_sc04_004_80180C74(o) != 0) {
            AF(o, s32, 0x4) = AF(o, s32, 0x38);
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AF(o, s32, 0x18) = 0;
        }
        if (r & 0x2000) {
            StopWithGravity(o);
            UpdateModelZYX(o);
            SetForwardVelocity(o, -0xE0000);
            SetScriptCopy(o, &D_sc04_004_80199AF4);
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            PlaySoundFor(0x7E5, 0, AF(o, u16, 0x36));
        }
        func_sc04_004_80181130(o, 0);
        break;
    case 2:
        if (func_sc04_004_80180AF0(o, -0xE0000, &sp18) == 1) {
            RestorePrevPos(o);
            r = 1;
        } else if (TickTimer(o) != 0) {
            r = 1;
        }
        func_sc04_004_80181130(o, 2);
        if (r != 0) {
            func_sc04_004_80180530(o);
            PlaySoundFor(4, 0x7E5, AF(o, u16, 0x36));
        }
        break;
    }
}

s32 func_sc04_004_801804CC(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_004_80199904);
    arg0->work102 = 8;
    arg0->work104 = 3;
    arg0->work106 = (s16) ((rand() & 0x20) - 0x10);
    arg0->timer = 0x60;
    return SetState(arg0, 5);
}

s32 func_sc04_004_80180530(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_004_80199E1C);
    return SetState(arg0, 7);
}

s32 func_sc04_004_8018056C(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = (s16) (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x200);
    if (AF(arg0, u16, 2) != 1) {
        SetScriptCopy(arg0, (s32) &D_sc04_004_80199644);
    }
    return SetState(arg0, 8);
}

void func_sc04_004_801805D0(u8 *o) {
    s32 sp10;
    u8 *p;

    p = AF(o, u8 *, 0x20);
    if (AF(o, s16, 0xFE) == AF(p, s16, 0x12)) {
        if (func_sc04_004_80180BA4(o, &sp10) == 1) {
            if ((AF(o, u16, 0x86) & 1) || (rand() & 1)) {
                if (AF(o, u16, 0x86) & 1) {
                    func_sc04_004_801804CC((s32)o);
                } else {
                    SetScriptCopy(o, &D_sc04_004_80199824);
                    AF(o, s32, 0x1C) = 0x60;
                    SetState(o, 3);
                }
            } else {
                SetScriptCopy(o, &D_sc04_004_8019972C);
                AF(o, s32, 0x94) = 0xF;
                AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_004_801997A4;
                StopWithGravity(o);
                SetState(o, 2);
            }
        } else {
            AF(o, u16, 0xFE) += 0x200;
        }
        AF(o, u16, 0x100)++;
    } else {
        func_sc04_004_80180F74(AF(o, s16, 0xFE), p + 0x12, 0x20);
    }
}

s32 func_sc04_004_8018070C(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_004_80199644);
    arg0->timer = 0x40;
    return SetState(arg0, 9);
}

s32 func_sc04_004_80180750(StageActor *o) {
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

s32 func_sc04_004_80180878(StageActor *arg0) {
    SetScriptCopy(arg0, (s32) &D_sc04_004_801999AC);
    return SetState(arg0, 0xA);
}

void func_sc04_004_801808B4(StageActor *arg0) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    D_sc04_004_80192E38[arg0->state]();
    if ((arg0->kind == 0x1FC) && (arg0->shrinkTimer == 0)) {
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        temp_v1_2 = arg0->model;
        temp_v1_2->scale.vz = 0x1800;
        temp_v1_2->scale.vy = 0x1800;
        temp_v1_2->scale.vx = 0x1800;
    }
}

void func_sc04_004_80180948(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u8, 0xC2) == 2) {
        AF(arg0, s16, 0x52) = -0x18;
    }
    temp_v0 = func_sc04_004_80180C74((s32) arg0);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 4) = (s32) AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = (s32) AF(arg0, s32, 0x40);
        func_sc04_004_80181248((s32) arg0, temp_v0);
    }
}

void func_sc04_004_801809B0(u8 *arg0) {
    TakeDamageAndRecoil();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetForwardVelocity((s32) arg0, 0x80000);
    SetScriptCopy((s32) arg0, (s32) &D_sc04_004_80199BA4);
    if (AF(arg0, s16, 0x76) <= 0) {
        PlayDistanceSound32((s32) arg0);
        GiveItem(0x13);
    }
}

void func_sc04_004_80180A30(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = MoveCollidePassable(arg0);
    if ((temp_v0 & 0xFF) == 0x1A) {
        FinishEnemy(arg0);
        return;
    }
    temp_v0_2 = func_sc04_004_80180C74(arg0);
    if (temp_v0_2 != 0) {
        func_sc04_004_80181248(arg0, temp_v0_2);
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

s32 func_sc04_004_80180AF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;

    UpdateModelZYX(arg0, arg1);
    SetForwardVelocity(arg0, arg1);
    temp_s0 = MoveOnGround(arg0);
    temp_v0 = func_sc04_004_80180C74(arg0);
    AF(arg2, s32, 0) = temp_v0;
    if ((temp_v0 != 0) || (temp_s0 != 0x2000)) {
        RestorePrevPos(arg0);
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy(arg0, (s32) &D_sc04_004_80199644);
        StopWithGravity(arg0);
        SetState(arg0, 1);
        return 1;
    }
    return 0;
}

s32 func_sc04_004_80180BA4(Mover *o, s32 *res) {
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
    *res = func_sc04_004_80180C74(o);
    RestorePrevPos(o);
    p = o->model;
    p->flags &= 0xFFFE;
    if (*res == 0) {
        return r == 0x2000;
    }
    return 0;
}

s32 func_sc04_004_80180C74(Mover *o) {
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

s32 func_sc04_004_80180D94(Mover *arg0) {
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

void func_sc04_004_80180E30(StageActor *o) {
    s32 i;

    if (!(o->unk86 & 1) && o->hp < 0xB5 && SpawnActor(0x22D, o) != 0) {
        o->unk86 |= 1;
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_004_801B3A80, s32, i) = AF(&D_sc04_004_80195254, s32, i);
        }
        D_sc04_004_801B3A80[0] = 0x1000000;
        D_sc04_004_801B3A90 = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3A80;
        PlaySoundId(0x83B, 0);
    }
}

void func_sc04_004_80180EEC(u8 *o) {
    AF(o, u16, 0x5C) = 0x8A10;
    AF(o, s16, 0x52) = 0;
    if (AF(o, s32, 0xC4) & 4) {
        SetScriptCopy(o, &D_sc04_004_80199F24);
        SetState(o, 6);
    } else {
        AF(o, s32, 0x1C) = 8;
        SetScriptCopy(o, &D_sc04_004_80199644);
        StopWithGravity(o);
        SetState(o, 1);
    }
}

void func_sc04_004_80180F74(s32 a, u16 *p, s32 n) {
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

void func_sc04_004_80180FF8(StageActor *o) {
    SpawnDef d;
    V3 a;
    V3 b;
    Mover *r;

    a.x = D_sc04_004_80192E64 << 8;
    a.y = D_sc04_004_80192E66 << 8;
    a.z = D_sc04_004_80192E68 << 8;
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

void func_sc04_004_80181130(StageActor *arg0, s32 arg1) {
    SV8 v;

    if (!(arg0->unk86 & 1)) {
        v.x = D_sc04_004_80192E6C[arg1].x;
        v.y = D_sc04_004_80192E6C[arg1].y;
        v.z = D_sc04_004_80192E6C[arg1].z - 20;
        if (ActorSegmentHitsPlayer(arg0, &D_sc04_004_80192E6C[arg1], &v)) {
            g_PlayerHitDamage = 20;
        }
    }
}

void func_sc04_004_801811BC(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x853, 0, arg2);
    GiveItem(0x13);
}

void func_sc04_004_801811E8(u8 *o) {
    SV8 v;

    if (AF(o, u16, 0) == 0x1FC) {
        v.x = AF(o, s16, 6);
        v.y = AF(o, s16, 0xA) - 0x20;
        v.z = AF(o, s16, 0xE);
        v.pad = 0x1800;
        EmitProp23(o + 0x102, &v, &D_sc04_004_80192E84, 0);
    }
}

void func_sc04_004_80181248(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0xA;
        AF(arg1, s16, 0x62) = HeadingTo(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_004_801812B8(u8 *o) {
    s32 r;
    s32 i;
    s32 k;

    if ((AF(o, s32, 0x20) = AllocActorModel(o)) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(AF(o, s32, 0x20), &D_sc04_004_80195254);
    k = 0x1000000;
    for (i = 0x18; i >= 0; i -= 4) {
        *(s32 *)((u8 *)D_sc04_004_801B3AA0 + i) = k;
    }
    D_sc04_004_801B3ABC = 0;
    D_sc04_004_801B3AA0[0] = D_sc04_004_80195254;
    D_sc04_004_801B3AB0 = D_sc04_004_80195264;
    AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3AA0;
    AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc04_004_8019979C;
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

void func_sc04_004_801813F0(StageActor *arg0) {
    D_sc04_004_80192E8C[arg0->state]();
}

void func_sc04_004_8018142C(u8 *o) {
    s32 i;

    if (SetupActor(o, &D_sc04_004_80192D8C) != 0) {
        for (i = 0; i < 0x20; i += 4) {
            AF(D_sc04_004_801B3A60, s32, i) = AF(&D_sc04_004_80195254, s32, i);
        }
        D_sc04_004_801B3A60[5] = 0x1000000;
        AF(AF(o, u8 *, 0x20), s32 *, 0x24) = D_sc04_004_801B3A60;
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x801;
        AF(o, u8 *, 0xBC) = &D_sc04_004_80192DC0;
        SpawnShadow(o);
        SnapToGround(o);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        if (AF(o, s16, 0x70) != 0) {
            func_sc04_004_8018070C(o);
        } else if (rand() & 1) {
            func_sc04_004_801801AC(o);
        } else {
            func_sc04_004_80180208(o);
        }
    }
}

void func_sc04_004_80181548(s32 arg0, s32 arg1) {
    s32 sp10;

    if (TickTimer(arg0, arg1) != 0) {
        func_sc04_004_80180BA4(arg0, (s32) &sp10);
        func_sc04_004_8018056C(arg0);
    }
    func_sc04_004_80181130(arg0, 0);
}

void func_sc04_004_80181594(u8 *arg0, s32 arg1) {
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
            temp_v0 = func_sc04_004_80180D94((s32) arg0);
            if ((temp_v0 != 0) && (func_sc04_004_80180BA4((s32) arg0, (s32) &sp10) != 0)) {
                func_sc04_004_80180274((s32) arg0, (s32) temp_v0);
            }
        }
        break;
    case 1:
        if (TickTimer((s32) arg0, arg1) != 0) {
            func_sc04_004_80180208((s32) arg0);
        }
        break;
    }
    func_sc04_004_80181130((s32) arg0, 0);
}

void func_sc04_004_80181678(s32 arg0) {
    s32 sp10;
    s16 temp_v0;

    if (func_sc04_004_80180AF0(arg0, -0x50000, (s32) &sp10) == 1) {
        RestorePrevPos(arg0);
        goto block_3;
    }
    if (TickTimer(arg0) != 0) {
block_3:
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy(arg0, (s32) &D_sc04_004_80199644);
        StopWithGravity(arg0);
        SetState(arg0, 1);
    } else if (!(AF(arg0, u16, 0x86) & 1)) {
        temp_v0 = func_sc04_004_80180D94(arg0);
        if (temp_v0 != 0) {
            func_sc04_004_80180274(arg0, (s32) temp_v0);
        }
    }
    func_sc04_004_80181130(arg0, 1);
}

void func_sc04_004_80181744(u8 *o) {
    SV8 sp10;
    u8 *p;

    if (func_sc04_004_80180AF0(o, -0x50000, &sp10) == 1) {
        RestorePrevPos(o);
        AF(o, s32, 0x1C) = 8;
        SetScriptCopy(o, &D_sc04_004_80199644);
        StopWithGravity(o);
        SetState(o, 1);
        return;
    }
    if (AF(o, s16, 0x102) != 0) {
        AF(o, s16, 0x102) = AF(o, s16, 0x102) - 1;
    } else {
        if (AF(o, s16, 0xAA) == 0) {
            func_sc04_004_80180FF8(o);
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

void func_sc04_004_80181850(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        AF(arg0, s32, 0x1C) = 8;
        SetScriptCopy((s32) arg0, (s32) &D_sc04_004_80199644);
        StopWithGravity((s32) arg0);
        SetState((s32) arg0, 1);
    }
}

void func_sc04_004_801818A8(u8 *arg0) {
    s32 sp10;

    if (AF(arg0, s16, 0x98) == 0) {
        if (!(AF(arg0, u16, 0x86) & 1) && (func_sc04_004_80180BA4((s32) arg0, (s32) &sp10) != 0)) {
            SetScriptCopy((s32) arg0, (s32) &D_sc04_004_8019972C);
            AF(arg0, s32, 0x94) = 0xF;
            AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) D_sc04_004_801997A4;
            StopWithGravity((s32) arg0);
            SetState((s32) arg0, 2);
        } else {
            AF(arg0, s32, 0x1C) = 8;
            SetScriptCopy((s32) arg0, (s32) &D_sc04_004_80199644);
            StopWithGravity((s32) arg0);
            SetState((s32) arg0, 1);
        }
    }
}

void func_sc04_004_80181968(u8 *arg0, s32 arg1) {
    u16 temp_v1;

    if (AF(arg0, s16, 0xAA) == 0) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (TickTimer((s32) arg0, arg1) != 0) {
                if (func_sc04_004_80180750((s32) arg0) != 0) {
                    AF(arg0, s32, 0x1C) = 0x30;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                } else {
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
            break;
        case 1:
            if (TickTimer((s32) arg0, arg1) != 0) {
                func_sc04_004_80180878((s32) arg0);
            }
            break;
        }
        func_sc04_004_80181130((s32) arg0, 0);
    }
}

void func_sc04_004_80181A20(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (arg0->index == 0x18) {
            func_sc04_004_80181BD4(arg0->ext0);
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    case 1:
        if (arg0->animTimer == 0) {
            SetScriptCopy((s32) arg0, (s32) &D_sc04_004_80199644);
            arg0->timer = 0x40;
            SetState((s32) arg0, 9);
        }
        break;
    }
    func_sc04_004_80181130((s32) arg0, 0);
}

void func_sc04_004_80181AD4(s32 arg0) {
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

s32 func_sc04_004_80181B6C(s32 arg0) {
    StopWithGravity(arg0);
    return SetState(arg0, 1);
}

s32 func_sc04_004_80181BA0(StageActor *arg0) {
    StopWithHalfGravity();
    return SetState(arg0, 2);
}

void func_sc04_004_80181BD4(StageActor *o) {
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

void func_sc04_004_80181C9C(StageActor *arg0) {
    D_sc04_004_80192EA4[arg0->state]();
    if ((arg0->kind != 0) && (arg0->unk74 != 0)) {
        CarryPlayerExact((s32) arg0);
        func_sc04_004_80182014((s32) arg0, (s32) &D_sc04_004_80192E94);
    }
}

s32 func_sc04_004_80181D1C(s32 arg0) {
    Player *p = &g_Player;
    s16 lim;
    s16 y;
    s32 t;

    if (AF(arg0, u8, 0x74) != 0) {
        return 0;
    }
    lim = D_80126B62 - 0x20;
    if (func_sc04_004_80181E90(arg0, (s32) ((u8 *)p + 4), 0x48) != 0) {
        y = AF(arg0, s16, 0xA);
        if (y >= lim && lim >= y - 0x48) {
            return 1;
        }
    }
    return 0;
}

s32 func_sc04_004_80181DAC(u8 *o) {
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
            if (func_sc04_004_80181E90(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        case 0x239:
            h = (AF(AF(o, u8 *, 0x20), s16, 0x18) + AF(AF(p, u8 *, 0x20), s16, 0x18)) >> 6;
            if (func_sc04_004_80181E90(o, p + 4, h) != 0) {
                return (s32)p;
            }
            break;
        }
    }
    return 0;
}

s32 func_sc04_004_80181E90(s32 arg0, s32 arg1, u16 arg2) {
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

void func_sc04_004_80181EE8(Mover *o) {
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

void func_sc04_004_80182014(u8 *o, u8 *p) {
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

void func_sc04_004_80182170(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = AF(arg1, u16, 0x5C);
    if ((temp_a0 & 0x8000) && (AF(arg1, u16, 0x5E) != 0x1D)) {
        AF(arg1, u16, 0x5C) = (u16) (temp_a0 | 1);
        AF(arg1, s16, 0x60) = 0x14;
        AF(arg1, s16, 0x62) = HeadingTo(arg1 + 4, arg0 + 4);
        AF(arg1, u16, 0x5E) = 0x1DU;
    }
}

void func_sc04_004_801821E0(u8 *o) {
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
            RotTransSV(&D_sc04_004_80192EB4, &v, &flag);
            AF(e, s16, 6) = v.x;
            AF(e, s16, 0xA) = v.y;
            AF(e, s16, 0xE) = v.z;
            ApplyRotMatrixLV(&D_sc04_004_80192EBC, o + 0x10);
            AF(e, s32, 0x34) = 0x4000;
        }
    }
}

void func_sc04_004_80182320(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc04_004_801B3BDC);
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    temp_v1_2 = arg0->model;
    temp_v1_2->unk04 = (s32) ((s32)temp_v1_2->unk04 | 0x8040);
    arg0->hitState = 0xCC00;
    arg0->targetClass = 2;
    arg0->hitData = (s32) ((s32) &D_sc04_004_80192E94 | 0x20000000);
    if (arg0->param != 0) {
        func_sc04_004_80181BA0((s32) arg0);
        return;
    }
    func_sc04_004_80181B6C((s32) arg0);
    arg0->ext1 = func_80143994((s32) arg0, 0x3000);
}

void func_sc04_004_801823F4(u8 *arg0) {
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
        func_sc04_004_801821E0(arg0);
        func_sc04_004_80181BA0((s32) arg0);
        PlaySoundId(0xBCB, 0);
    }
    if (func_sc04_004_80181D1C((s32) arg0) != 0) {
        func_sc04_004_80181EE8(arg0);
    }
}

void func_sc04_004_801824A8(void) {
}

void func_sc04_004_801824B0(u8 *arg0) {
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
            if (func_sc04_004_80181D1C((s32) arg0) != 0) {
                func_sc04_004_80181EE8(arg0);
                return;
            }
            p = func_sc04_004_80181DAC((s32) arg0);
            if (p != 0 && AF(p, u16, 0) == 0x1FC) {
                func_sc04_004_80182170((s32) arg0, p);
            }
        }
    }
}

void func_sc04_004_80182574(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = AllocActorModel(arg0)) == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(AF(arg0, u8 *, 0x20), &D_sc04_004_8019A2FC);
    PlaySoundId(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc04_004_8019A0D4);
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

void func_sc04_004_801826EC(StageActor *arg0) {
    D_sc04_004_8019A170[arg0->state]();
}

void func_sc04_004_80182728(StageActor *arg0) {
    D_sc04_004_8019A184[arg0->state]();
}

void func_sc04_004_80182764(s32 arg0) {
    s32 temp_v0;

    SetLocalVelocity(arg0, (s32) &D_sc04_004_8019A15C);
    if (MoveCollidePassable(arg0) != 0) {
        SpawnEffect(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((ActorSegmentDamagesPlayer(arg0, (s32) &D_sc04_004_8019A168, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (g_PlayerAction != 0)) || (TickTimer(arg0) != 0)) {
block_7:
        FreeActor(arg0);
    }
}

void func_sc04_004_80182844(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX(arg0);
        StopWithGravity(arg0);
        SetLocalVelocity(arg0, &D_sc04_004_8019A178);
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

void func_sc04_004_80182960(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc04_004_8019A42C);
    arg0->state = 1;
    arg0->stateCount = 0;
}

s32 func_sc04_004_801829BC(u8 *o, s32 n0) {
    s16 n = n0;
    SV8 a;
    SV8 b;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    b.y = a.y;
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    if (TraceMap(1, &a, &b) & 0x8000) {
        AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        return 1;
    }
    a.x = AF(o, s16, 6) - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    a.y = AF(o, s16, 0xA) - 0x10;
    b.z = a.z = AF(o, s16, 0xE) - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
    b.x = a.x;
    b.y = a.y + 0x20;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * n) >> 12);
        return 1;
    }
    return 0;
}

void func_sc04_004_80182B9C(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = -(rsin(AF(o, s16, 0xFC)) << 6);
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) + 0xCC) & 0x7FF;
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_004_801A8380);
        AF(o, s16, 0xFC) = 0;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
    SetLocalVelocityXZ(o, &v);
    MoveOnGround(o);
    AF(o, s16, 0x52) = -(rsin(AF(o, s16, 0xFC)) >> 7);
    func_sc04_004_801829BC(o, 0x30);
    if (DistSqToTarget(o) <= 0x9000) {
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc04_004_801A84D0);
        AF(o, s16, 0x52) = 0;
    }
    if (AF(o, s16, 0xFE) != 0) {
        AF(o, s16, 2) = 5;
        SetScript(o, &D_sc04_004_801A8428);
        AF(o, s16, 0xFC) = 0;
    }
}

void func_sc04_004_80182CAC(u8 *o) {
    V3 v;

    v.x = 0;
    v.y = 0;
    v.z = rsin(AF(o, s16, 0xFC)) * 96;
    AF(o, s16, 0xFC) = (AF(o, u16, 0xFC) + 0xCC) & 0x7FF;
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc04_004_801A8428);
        AF(o, s16, 0xFC) = 0;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
    SetLocalVelocityXZ(o, &v);
    MoveOnGround(o);
    AF(o, s16, 0x52) = -(rsin(AF(o, s16, 0xFC)) >> 7);
    if (DistSqToTarget(o) > 0x8FFF) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc04_004_801A82F8);
        AF(o, s16, 0xFC) = 0;
        AF(o, s16, 0x52) = 0;
    }
    if (func_sc04_004_801829BC(o, -0x30) != 0) {
        AF(o, s16, 2) = 1;
        SetScript(o, &D_sc04_004_801A82F8);
        AF(o, s16, 0xFC) = 0xF;
        AF(o, s16, 0x52) = 0;
    }
}

void func_sc04_004_80182DC4(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->work10A;
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        arg0->work10A = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            arg0->reactOpts = (s32) ((s32)arg0->reactOpts & ~1);
        }
    }
    D_sc04_004_8019DC44[arg0->state]();
}

void func_sc04_004_80182E34(StageActor *arg0) {
    if ((s32)arg0->script == &D_sc04_004_801A8898) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8A58);
    } else {
        arg0->animTimer = 0;
    }
    arg0->hitState = 0xAA10;
    arg0->state = 1;
    arg0->unkFC = 0xF;
}

void func_sc04_004_80182E9C(u8 *arg0) {
    AF(arg0, s16, 0x52) = 0;
    if ((AF(arg0, u8, 0x5E) == 0x1D) && (AF(arg0, s16, 0x10A) == 0)) {
        AF(arg0, s16, 0x10A) = 0x3C;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
    }
}

void func_sc04_004_80182ED4(u8 *arg0) {
    UV4 a;
    UV4 b;
    s16 t;
    s16 r;
    u16 x, y, z;

    if (AF(arg0, u8, 0xC2) < 3) {
        t = AF(arg0, s16, 0x84);
        if (t == 0) {
            x = AF(arg0, u16, 6);
            a.x = x;
            y = AF(arg0, u16, 0xA);
            a.y = y - 0x10;
            z = AF(arg0, u16, 0xE);
            b.x = x;
            b.y = y + 0x10;
            a.z = z;
            b.z = z;
            if (TraceMap(1, &a, &b) & 0x6000) {
                PlaySoundId(0x83C, 0);
                r = 0x1E;
                goto store;
            }
        } else {
            r = t - 1;
store:
            AF(arg0, s16, 0x84) = r;
        }
    }
}

void func_sc04_004_80182F7C(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0xA9E, 0, arg2);
    GiveItem(0x14);
}

void func_sc04_004_80182FA8(StageActor *arg0) {
    IncStageCount811C();
    if ((s32)arg0->init != 0) {
        GainStat0FromActor((s32) arg0);
    }
    FreeActor((s32) arg0);
}

void func_sc04_004_80182FF0(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc04_004_8019DB0C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc04_004_801A82F8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        if (AF(arg0, s16, 0x70) == 3) {
            AF(arg0, s32 *, 0xBC) = &D_sc04_004_8019DBA8;
            return;
        }
        AF(arg0, s32 *, 0xBC) = &D_sc04_004_8019DB40;
    }
}

void func_sc04_004_8018308C(u8 *arg0) {
    s16 temp_v0;

    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A82F8);
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        AF(arg0, s16, 0xFE) = 0;
        return;
    }
    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (DistSqToTarget((s32) arg0) <= 0x40000) {
        AF(arg0, s16, 2) = 2;
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8380);
    }
}

void func_sc04_004_80183130(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8380);
        AF(arg0, s16, 0xFC) = 0;
    }
    if (AF(arg0, s32, 0x94) == 0xF) {
        SetLocalVelocityXZ((s32) arg0, (s32) &D_sc04_004_8019DC18);
        AF(arg0, s32, 0x14) = 0xFFF60000;
        AF(arg0, s16, 2) = 4;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_004_8019DAFC | 0x40000000 | 0x20000000);
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc04_004_8019DC34, (s32) &D_sc04_004_8019DC3C, 0x20) == 1) {
            g_PlayerHitKind = 4;
        }
        PlaySoundId(0xA9D, 0);
    }
}

void func_sc04_004_801831FC(u8 *arg0) {
    if ((AF(arg0, s32, 0x94) < 0x3D) && (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc04_004_8019DC24, (s32) &D_sc04_004_8019DC2C, 0x20) == 1)) {
        g_PlayerHitKind = 4;
    }
    if (MoveCollide((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 5;
        SetScript((s32) arg0, (s32) &D_sc04_004_801A8428);
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc04_004_8019DAEC | 0x40000000 | 0x20000000);
    }
}

void func_sc04_004_801832A8(StageActor *arg0) {
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

void func_sc04_004_80183318(StageActor *arg0) {
    if ((arg0->reactBits & 1) && ((s32)arg0->script != &D_sc04_004_801B0750)) {
        SetScript((s32) arg0, (s32) &D_sc04_004_801B0750);
    }
}

void func_sc04_004_80183360(u8 *o) {
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

void func_sc04_004_801833EC(StageActor *arg0) {
    arg0->state = 2;
    SetScript(arg0, (s32) &D_sc04_004_801B0BD8);
    arg0->timer = 0x14;
}

void func_sc04_004_8018342C(StageActor *arg0) {
    arg0->state = 3;
    SetScript(arg0, (s32) &D_sc04_004_801B0750);
    arg0->hitState = 0xAA10;
    arg0->hitCode = 0;
    AF(arg0, s16, 0xDC) = 0;
    arg0->timer = 0x2D;
}

s32 func_sc04_004_8018347C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = DistSqToTarget(arg0);
    if (arg1 >= temp_v0) {
        func_sc04_004_8018352C(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc04_004_801B0B30);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc04_004_8018352C(StageActor *arg0) {
    arg0->state = 4;
    SetScript(arg0, (s32) &D_sc04_004_801B08F0);
    arg0->timer = 0x1E;
    if (arg0->unkFC == 0) {
        arg0->unkFC = 1;
        SpawnHeadMarker(arg0, -0x96);
    }
}

s32 func_sc04_004_80183588(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc04_004_8018359C(u8 *o) {
    SV8 c;
    SpawnDef d;
    WMtx m;
    SV8 a;
    SV8 b;
    s32 t;

    if (AF(o, s32, 0x1C) == 9) {
        ActorSegmentDamagesPlayer(o, &D_sc04_004_801A8C54, &D_sc04_004_801A8C54 + 8, 0x10);
        if (AF(o, s16, 0x70) & 0x8000) {
            GetPartWorldMatrix(o, 0, &m);
            LocalToWorld(&m, &D_sc04_004_801A8C64, &c);
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
        SetScript(o, &D_sc04_004_801B0750);
        AF(o, u16, 0x5C) = 0xAA10;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s32, 0x1C) = 0x2D;
    }
}

void func_sc04_004_80183750(StageActor *arg0) {
    s16 v[3];

    if (arg0->hitCode == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc04_004_80184614((s32) arg0, (s32) v, 0xD);
    }
}

void func_sc04_004_80183798(u8 *o) {
    u16 *s;
    u16 *d;
    s32 i;
    s32 n;

    D_sc04_004_801A8C6C[AF(o, u16, 2)]();
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
        s = D_sc04_004_801A8C14;
        n = D_800B99DA & 0xF;
        d = &D_sc04_004_801B3AC0[n];
        for (i = 0; i < 15 - n; i++) {
            *d++ = *s++;
        }
        d = D_sc04_004_801B3AC0;
        for (i = 0; i < n; i++) {
            *d++ = *s++;
        }
        QueueImage(&D_sc04_004_801A8C34);
    }
}

void func_sc04_004_801838E4(StageActor *arg0) {
    D_sc04_004_801A8C90[arg0->state]();
}

void func_sc04_004_80183920(StageActor *arg0) {
    D_sc04_004_801A8CA4[arg0->state]();
    if (arg0->kind != 0) {
        AF(arg0->ext0, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
        AF(arg0->ext0, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
        AF(arg0->ext0, u16, 0xC) = (u16) (u16)arg0->pos[2].h.i;
    }
}

extern void InitSpriteKind2();
extern u8 D_sc04_004_801A8C98;

void func_sc04_004_801839A8(StageActor *o) {
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
    InitSpriteKind2(p, &D_sc04_004_801A8C98, 0x2E0, 0x100);
    AF(p, u8, 0x27) = 0x37;
    AF(p, s16, 0x10) = 0x400;
    AF(p, s32, 4) |= 0x50000000;
    AF(p, s16, 0x14) = o->unkFC;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x1800;
    o->state = 1;
    func_80143994(o, 0x1000);
}

void func_sc04_004_80183A80(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0x100000);
}

void func_sc04_004_80183AD8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x80);
    if (MoveCollidePassable((s32) arg0) == 0) {
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc04_004_801A8CB0, (s32) (&D_sc04_004_801A8CB0 + 8), 0x10) == 0) {
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
        func_sc04_004_80183B64((s32) arg0);
    }
}

void func_sc04_004_80183B64(StageActor *arg0) {
    ZeroFill(arg0->ext0, 0x38);
    FreeActor(arg0);
}

void func_sc04_004_80183B9C(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (DistSqToTarget(arg0) <= 0x90000) {
            func_sc04_004_801833EC((s32) arg0);
        }
    } else {
        if (DistSqToTarget(arg0) <= 0x24000) {
            func_sc04_004_801833EC((s32) arg0);
        }
    }
}

void func_sc04_004_80183C08(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc04_004_8018342C(arg0);
    }
}

void func_sc04_004_80183C40(s32 arg0) {
    if (TickTimer(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc04_004_8018347C(arg0, 0x40000, 0xC4000);
        } else {
            func_sc04_004_8018347C(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc04_004_80183CA4(s32 arg0) {
    s32 v;
    void *p;

    v = TurnStepToTarget(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (TickTimer(arg0) != 0) {
        func_sc04_004_80183588(arg0);
    }
}

void func_sc04_004_80183CFC(void) {
}

void func_sc04_004_80183D04(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc04_004_801A8B80) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        arg0->params = &D_sc04_004_801A8BB4;
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
        SetScript(arg0, (s32) &D_sc04_004_801B0B30);
    }
}

void func_sc04_004_80183DBC(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 t;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc04_004_801AA6D0);
    t = arg0->parent->id;
    arg0->state = 1;
    arg0->workFE = 0x7FFF;
    arg0->unkFC = t;
}

void func_sc04_004_80183E2C(StageActor *o) {
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
    if ((u8 *)p->script != &D_sc04_004_801B0D28) {
        o->model->rot.vy = o->workFE;
        o->pos[0].w = p->pos[0].w;
        o->pos[1].w = p->pos[1].w;
        o->pos[2].w = p->pos[2].w;
    } else {
        FaceHelper(p, &D_sc04_004_801A8C88, &v);
        o->pos[0].h.i = v.x;
        o->pos[1].h.i = v.y;
        o->pos[2].h.i = v.z;
    }
    AF(o->model, SV8, 0x18) = AF(p->model, SV8, 0x18);
    o->model->flags = (s16)p->model->flags;
    o->model->unk04 = (s32)p->model->unk04;
}

void func_sc04_004_80183FA0(StageActor *arg0) {
    D_sc04_004_801B0DF4[arg0->state]();
}

void func_sc04_004_80183FDC(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc04_004_801844FC() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc04_004_801B0DA8, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc04_004_801B0DB4);
    func_sc04_004_80184554((s32) arg0);
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

void func_sc04_004_801840D8(u8 *arg0) {
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
            func_sc04_004_80184554(arg0);
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
    func_sc04_004_801845D0(arg0);
}

void func_sc04_004_80184368(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc04_004_80184554(arg0);
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
    func_sc04_004_801845D0(arg0);
}

s32 func_sc04_004_801844FC(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_004_80184554(u8 *o) {
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

void func_sc04_004_801845D0(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc04_004_80184614(StageActor *o, s16 *v, s32 arg2_0) {
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
