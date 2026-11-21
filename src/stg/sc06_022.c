#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern void func_sc06_022_801804BC();
extern s32 func_sc06_022_801800AC();
extern void (*D_sc06_022_801D5BC8[])();
extern void (*D_sc06_022_801D5B50[])();
extern void (*D_sc06_022_801D5AC8[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_022_8017BE9C(void) {
}

void func_sc06_022_8017BEA4(void) {
}

void func_sc06_022_8017BEAC(void) {
}

void func_sc06_022_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_022_80190DDC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_022_8017D224(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_022_80190DE4[])();
void func_sc06_022_8017D24C(void);
extern void (*D_sc06_022_80190DEC[])();
void func_sc06_022_8017D274(void);
extern void func_800D1EBC();
extern void (*D_sc06_022_80190DF8[])();
extern u8 D_sc06_022_80190E04;
extern void StartPlayerActionScript();
extern u8 D_sc06_022_80190E08;
extern u8 D_sc06_022_80190E0C;
extern void func_sc06_022_8017D59C();
extern void (*D_sc06_022_80190E20[])();
extern void (*D_sc06_022_80190F7C[])();
extern s32 StepSpriteAnim();
extern void FreeProp();
extern void (*D_sc06_022_80190F84[])();
extern void (*D_sc06_022_80191058[])();
extern void func_sc06_022_8017F0D4();
extern void (*D_sc06_022_80191070[])();
extern u8 D_sc06_022_80191060;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern void (*D_sc06_022_801AD3B4[])();
extern void (*D_sc06_022_801AD420[])();
extern void (*D_sc06_022_801AD44C[])();
extern void (*D_sc06_022_801BD34C[])();
extern void (*D_sc06_022_801BD4A4[])();
extern void (*D_sc06_022_801BD4D8[])();
extern void (*D_sc06_022_801BD4F8[])();
extern void (*D_sc06_022_801BD504[])();
extern void (*D_sc06_022_801D5344[])();
extern void (*D_sc06_022_801DD6B4[])();
extern void (*D_sc06_022_801DD6D4[])();

extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 TickTimer();
extern s32 FreeActor();
extern s32 MoveCollidePassable();
extern void DrawPrimF4Mtx();
extern void (*D_sc06_022_801BD214[])();
extern s32 func_sc06_022_801852E4();
extern void func_sc06_022_801853B4();
extern void DespawnIfFar();
extern void SpawnHeadMarker();
extern u8 D_sc06_022_801D4140;
extern u8 D_sc06_022_801D40D8;
extern u8 D_sc06_022_801D41E8;
extern u8 D_sc06_022_801D4B00;
extern u16 D_800B99DA;
extern s16 g_PlayerHitKind;
extern s32 func_sc06_022_801851C4();
extern s32 func_sc06_022_801856F0();
extern s32 SpawnKind1C();
extern s32 func_sc06_022_80187EF4();
extern u8 D_sc06_022_801D4430;
extern s32 g_PlayerFlags;
extern u8 D_sc06_022_801BD0BC;
extern s32 func_sc06_022_80187318();
extern s32 HeadingToTarget();
extern s32 TurnStep();
extern s32 TargetInFront();
extern u8 D_sc06_022_801D47C0;
extern u8 D_sc06_022_801D4488;
extern u8 D_sc06_022_801D42B0;
extern u8 D_sc06_022_801D4640;
extern void func_sc06_022_801850CC();
extern void TakeDamageAndRecoil();
extern void SetLocalVelocity();
extern u8 D_sc06_022_801BD134;
extern u8 D_sc06_022_801D4CC0;
extern s32 func_sc06_022_80185578();
extern s32 D_sc06_022_801BD2B4[];
extern void UpdateModelYXZ();
extern s32 D_sc06_022_801BD174[];
extern void HideModel();
extern void func_sc06_022_80187094();
extern s32 func_sc06_022_801874E0();
extern void DropItem();
extern s32 func_sc06_022_80184F88();
extern void GiveItem();
extern void GainStat0FromActor();
extern s32 DespawnActor();
extern u8 D_sc06_022_801BD43C;
extern s32 DistSqToPlayer();
extern s32 MoveCollidePassableAt();
extern s32 ActorTouchesPlayer();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void StartSpriteAnim();
extern void MoveProp();
extern s32 D_sc06_022_801E20F8;
extern s32 SpawnActor();
extern u8 D_sc06_022_801DCF74;
extern u8 D_sc06_022_801DD074;
extern u8 D_sc06_022_801DD174;
extern void StopWithGravity();
extern u8 D_sc06_022_801D5AFC;
extern u8 D_sc06_022_801D5B30;
extern u8 D_sc06_022_801DAA34;
extern s32 SetupActor();
extern void SnapToGround();
extern u8 D_sc06_022_801D5B74;
extern u8 D_sc06_022_801D5BA8;
extern u8 D_sc06_022_801DB7A0;
extern void ZeroFill();
extern void func_sc06_022_8018BBBC();
extern void (*D_sc06_022_801DD688[])();
extern s32 IsActorFar();
extern void func_sc06_022_8018B9E8();
extern void SetReactionStep();
extern s32 SpawnKind205();
extern void FinishEnemy();
extern void EndReaction();
extern void MoveObject();
extern u8 D_800D3918;
extern u8 D_sc06_022_801DD6A0;
extern u8 D_sc06_022_801DD6AC;
extern s32 ActorSegmentDamagesPlayer();

extern s32 D_sc06_022_80190E40[];
extern s32 func_8013B7F4();
extern s32 SetState();
extern s32 func_sc06_022_8017F9FC();

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
extern void func_8014C6AC();
extern void func_8014C6C0();
extern u8 D_sc06_022_801E1F98;
extern void (*D_sc06_022_80190F04[])();
extern void StepImageAnim();
extern u8 D_sc06_022_80190E58;
extern u8 D_sc06_022_80190E8C;
extern u8 D_sc06_022_801AAD00;
extern u8 D_sc06_022_801AAD08;
extern s32 FindOtherActorByKind();
extern void StartImageAnim();
extern void MapPartsTmd();
extern u8 D_sc06_022_80190F30;
extern u8 D_sc06_022_80190F3C;
extern void InitSpriteKind2();
extern u8 D_sc06_022_801E1FA0;
extern u8 D_sc06_022_801E1FA8;
extern void (*D_sc06_022_80191038[])();
extern u8 D_sc06_022_80190F8C;
extern u8 D_sc06_022_80190F9C;
extern u8 D_sc06_022_80190FD0;
extern u8 D_sc06_022_80191000;
extern u8 D_sc06_022_801ABA44;
extern u8 D_sc06_022_801ABA4C;
extern void (*D_sc06_022_801910F0[])();
extern void CarryPlayer();
extern u8 D_sc06_022_80191088;
extern u8 D_sc06_022_801910C8;
extern void SetModelCullBox();
extern u16 g_PlayerX;
extern s16 D_80126B62;
extern u16 D_80126B66;
extern u8 D_sc06_022_801910D0;
extern void StartEvent();
extern s16 D_80126CB0;
extern u8 D_sc06_022_801AD394;
extern u8 D_sc06_022_801B1D64;
extern void SetModelParts();
extern void (*D_sc06_022_801AD508[])();
extern void UpdateModelRot();
extern s32 SpawnActorArg();
s32 func_sc06_022_801809D4(StageActor *arg0);
extern u8 D_sc06_022_801AD444;
extern s32 MoveCollide();
extern void SpawnEffect();
extern s32 SpawnPropFrom();
extern s32 func_sc06_022_80181468();

extern s32 IsEventDone();
extern void EndEvent();


s32 func_sc06_022_80181394(StageActor *arg0);

extern s32 D_sc06_022_801E1FB0;
extern s32 TurnStepToTarget();
extern s32 SetForwardVelocity();
extern s32 DistSqToTarget();
extern s32 func_sc06_022_801858D8();


extern void func_sc06_022_80180EE0();
extern void UpdateModelZYX();
extern s32 D_sc06_022_8018D644[];
extern u8 D_sc06_022_801DF374;

extern u8 D_sc06_022_801911DC;
extern u8 D_sc06_022_801912F4;
extern void SetClock();
s32 func_sc06_022_8017DB74(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern void DamageActorsNear();
extern s32 MoveOnGround();

extern u8 D_sc06_022_801BD2E4;
extern void func_sc06_022_80184E14();
extern u8 g_PlayerPosX;
extern u8 D_sc06_022_801BD444;
extern u8 D_sc06_022_801BD44C;
extern u8 D_sc06_022_801D51D0;
extern s32 func_sc06_022_80187414();
extern s32 PosDist();
extern u8 D_sc06_022_801BD4E0;

typedef struct { u8 r, g, b, cd; } CV;
extern u8 D_sc06_022_801BCEB4;
extern u8 D_sc06_022_801D44F0;
extern u8 D_sc06_022_801D4878;
extern u8 D_sc06_022_801BD0CC;
extern s32 IsOnScreen();
extern void GetPartLocalMatrix();
extern s32 LocalToWorld();
extern s32 func_sc06_022_80188204();
extern s32 func_sc06_022_801873B0();
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 SpawnProp();
extern void *g_ActiveCamera;
extern u8 D_sc06_022_801DCDDC;
extern u8 D_sc06_022_801DCE64;
extern u8 D_sc06_022_801DCEEC;
extern s32 D_sc06_022_801D591C[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_022_8017BEBC(u8 *obj) {
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

void func_sc06_022_8017CD9C(void) {
    SetClock(0x03C00000);
    g_SpawnListFixed = &D_sc06_022_801911DC;
    g_SpawnListRanged = &D_sc06_022_801912F4;
    func_sc06_022_8017DB74(0);
}

extern s32 HeadingTo();
extern void *g_PlayerModel;


typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc06_022_8017D9C0();
extern s32 EaseValue();
extern s32 EaseAngle();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern void func_sc06_022_801849BC();

extern void GetPartWorldMatrix();

extern void func_sc06_022_80185750();
extern void RestorePrevPos();


extern s32 HeadingToSV();

extern s32 SyncModelPos();

extern u8 D_sc06_022_801D46F8;

extern u8 D_sc06_022_801D4BF8;
extern u8 D_sc06_022_801BD2C4;
extern u8 D_sc06_022_801BD2D4;
extern u8 D_sc06_022_801D50C8;
extern s32 D_sc06_022_801BD154[];
extern s32 D_sc06_022_801BD164[];
extern u8 D_sc06_022_801D4E18;
extern u8 D_sc06_022_801BD30C;
extern s32 CollidePath();
extern s32 SVecDistSq();
extern u8 GsIDMATRIX;
extern void DrawPrimG4Mtx();

extern u8 D_sc06_022_801D5AB8;
extern u8 D_sc06_022_801DD274;
extern u8 D_sc06_022_801DD364;
extern u8 D_sc06_022_801DD454;
extern s32 SetLocalVelocityXZ();
extern s32 func_sc06_022_80188754();
extern s32 TraceMap();
extern s32 func_sc06_022_8018B8B0();
extern s32 D_80126B60;
extern u8 D_sc06_022_801DF434;

extern u8 D_sc06_022_801DD554;
extern u8 D_sc06_022_801DD588;
extern u8 D_sc06_022_801DEFA4;
extern u8 D_sc06_022_801DF27C;
extern u8 D_sc06_022_801DF294;
extern void SpawnShadow();
extern void StopMotion();

extern void StartRumbleScript();
extern u8 D_sc06_022_801D5A38;
extern void ShowDamage();
extern void ShowDefeat();
extern void GainStat3FromActor();
extern void GainStat2FromActor();
extern u8 D_sc06_022_801D595C;
extern u8 D_sc06_022_801D597C;
extern u8 D_sc06_022_801D599C;
extern u8 D_sc06_022_801D59A4;
extern u8 D_sc06_022_801D5A58;
extern u8 D_sc06_022_801D5A98;
extern u8 D_sc06_022_801D9CC4;
extern u8 D_sc06_022_801DD6BC;


typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
typedef struct { SV8 v[4]; CV4 c[4]; s32 code; } Q34;
extern s32 HeadingToPlayer();
extern s32 PathHitsModel();
extern void HitPlayer();
extern SV8 D_sc06_022_801BD2EC[];
extern s32 g_PlayerHitData;
extern u8 g_GroundNormal;
extern void func_80143994();
extern void func_8001CA1C();
extern u8 D_sc06_022_801BD3B4;
extern u8 D_sc06_022_801BD3E8;
extern u8 D_sc06_022_801BD388;
extern SV8 D_sc06_022_801BD42C[];
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_022_801D530C;
extern WMtx *D_sc06_022_801D5340;
extern WMtx D_sc06_022_801E20D8[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern s32 FindGround();
extern s8 D_sc06_022_801D52F8[];
extern s32 GroundDistSqTo();
extern s32 HeadingToPoint();
extern s32 GroundDistSqToPlayer();
extern s16 D_801270C0;
extern u8 D_sc06_022_801D59AC;
extern u8 D_sc06_022_801D59B8;
extern s32 PointHitsPlayer();


typedef struct { u8 b[0x34]; } T34;
extern T34 D_sc06_022_801BCFEC[];
extern u8 D_sc06_022_801BD184;
extern u8 D_sc06_022_801BD10C;
extern s16 D_sc06_022_801D45CC;
extern s16 D_sc06_022_801D4424;
extern s32 PosDistSq();
extern u8 D_sc06_022_801D5040;
extern u8 D_sc06_022_801C3FE8;
extern u8 D_sc06_022_801C3BD0;
extern u8 D_sc06_022_801C43EC;
extern void ProjectPoint();
extern s32 SpawnEffectLimited();
extern u8 g_Actors;
extern s32 AngleToVec2();

typedef struct { s16 m[3][3]; s32 t[3]; } MTX;
typedef struct { s32 vx, vy, vz, pad; } VEC;
extern u8 D_sc06_022_801BFE10;
extern u8 D_sc06_022_801C35D4;
extern u8 D_sc06_022_801BD0D4;
extern u8 D_sc06_022_801BD0E4;
extern u8 D_sc06_022_801D4328;
extern SV8 D_sc06_022_801BD358[];
extern s32 MoveCollideAt();
extern void ToggleModel();
extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern u8 D_sc06_022_801BD41C[];
extern u8 D_sc06_022_801BD4D0;

extern u8 D_sc06_022_801BD0DC;
extern s32 PosSVecDistSq();
extern u8 D_sc06_022_801BCFDC;
extern u8 D_sc06_022_801BD144;
extern u8 *D_sc06_022_801BD2A4[];
extern u8 D_sc06_022_801BD124;
extern u8 D_sc06_022_801BD114;
extern void TakeDamage();

extern u8 D_sc06_022_801BD0C4;
extern s32 D_sc06_022_801BD2FC[];
extern u8 D_sc06_022_801DD650;
extern u8 D_sc06_022_801DD658;
extern u8 D_sc06_022_801DD660;


extern u8 D_sc06_022_8018DA98;
extern u8 D_sc06_022_801B174C;
extern u8 D_sc06_022_801BCE84;
extern void func_sc06_022_80180CD0();
extern void QueueImage();
extern s32 func_sc06_022_8017FED0();
extern void StartCameraShake();
extern void func_sc06_022_80180680();


extern void InitNullModel();
extern u8 g_DefaultPose;
extern SV8 D_sc06_022_801AD2DC[];
extern void EmitProp23();
extern void EmitProp22();
extern u8 D_sc06_022_801AD3A4;
extern u8 D_sc06_022_801AD3AC;
extern u8 D_sc06_022_801AD318[];
extern u8 D_sc06_022_801AD348;
extern u8 D_sc06_022_801AD360;
extern u8 *D_sc06_022_801AD3F8[];
extern void SetModelParent();
extern u8 *D_sc06_022_801AD3DC[];

extern void func_sc06_022_8017EFE0();
extern u8 D_sc06_022_80190F28;
extern s32 D_80126B64;
extern s16 D_sc06_022_801AD414[];
extern s16 D_sc06_022_801AD416[];
extern void HeadingPitchTo();
extern void func_sc06_022_80180F30();
extern void func_sc06_022_80180FB4();
extern void func_sc06_022_801810C0();

extern void RotMatrixY();
extern void ApplyMatrixLV();

extern V3 D_sc06_022_801AD3CC;
extern u8 D_sc06_022_801AD438;
extern void NextState();

extern s32 D_sc06_022_801AD454[];
extern u16 D_sc06_022_801AD468[];
extern u16 D_sc06_022_801AD46A[];
extern u16 D_sc06_022_801AD46C[];
extern u16 D_sc06_022_801AD46E[];

typedef struct { SV8 v[4]; CV c; s32 code; } Quad28;
typedef struct { u8 pad[0x20]; u8 *m; } ObjM;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern s32 DistSq();

extern s16 D_sc06_022_80190DA4;
extern s16 D_sc06_022_80190DA6;
extern s16 D_sc06_022_80190DA8;
extern u8 g_Lights;
extern u8 D_sc06_022_80190DAC;
extern u8 D_sc06_022_80190DBC;
extern u8 D_sc06_022_80190DCC;
extern void SetAmbientColor();
extern void ApplyLight();
extern s16 D_800B9AAC;
extern s16 D_800B9B00;
extern u8 D_sc06_022_80191434;
extern u8 D_sc06_022_80191628;
extern s32 GetObjPadPressed();
extern u8 g_CameraFocus;
extern s16 D_sc06_022_80190E30[];
extern void func_sc06_022_8017DB58();
extern s16 D_sc06_022_80190E38[];
extern s32 D_sc06_022_80191030[];
extern s32 D_sc06_022_801BD324[];
extern u8 D_sc06_022_811BD33C;

void func_sc06_022_8017CDE4(void) {
    typedef struct { s32 w[4]; } W16;
    W16 *p;

    SetAmbientColor(D_sc06_022_80190DA4, D_sc06_022_80190DA6, D_sc06_022_80190DA8);
    p = (W16 *)&g_Lights;
    p[0] = *(W16 *)&D_sc06_022_80190DAC;
    ApplyLight(0, &p[0]);
    p[1] = *(W16 *)&D_sc06_022_80190DBC;
    ApplyLight(1, &p[1]);
    p[2] = *(W16 *)&D_sc06_022_80190DCC;
    ApplyLight(2, &p[2]);
    SetClock(0x3C00000);
    D_800B9B00 = D_800B9AAC = 0x7FFF;
    g_SpawnListFixed = (s32 *)&D_sc06_022_80191434;
    g_SpawnListRanged = (s32 *)&D_sc06_022_80191628;
    func_sc06_022_8017DB74(1);
}

void func_sc06_022_8017CF14(u8 *arg0) {
    D_sc06_022_80190DDC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_022_8017CF50(u8 *arg0) {
    func_sc06_022_8017D224();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_022_8017CF94(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_022_8017CFB8(u8 *arg0) {
    D_sc06_022_80190DE4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_022_8017CFF4(u8 *arg0) {
    func_sc06_022_8017D24C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_022_8017D038(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_022_8017D05C(u8 *arg0) {
    D_sc06_022_80190DEC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_022_8017D098(u8 *arg0) {
    func_sc06_022_8017D274();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_022_8017D0D8(u8 *arg0) {
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

void func_sc06_022_8017D154(void) {
    func_800D1EBC();
}

void func_sc06_022_8017D174(u8 *arg0) {
    D_sc06_022_80190DF8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_022_8017D1B0(u8 *arg0) {
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

void func_sc06_022_8017D224(void) {
    StartPlayerActionScript((s32) &D_sc06_022_80190E04, 0x01000000);
}

void func_sc06_022_8017D24C(void) {
    StartPlayerActionScript((s32) &D_sc06_022_80190E08, 0x01000000);
}

void func_sc06_022_8017D274(void) {
    StartPlayerActionScript((s32) &D_sc06_022_80190E0C, 0x01000000);
}

void func_sc06_022_8017D29C(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_022_8017D59C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc06_022_8017D59C((s32) &g_Camera);
}



extern s32 ActorSegmentHitsPlayer();
extern u16 D_sc06_022_8019104C;
extern u16 D_sc06_022_8019104E;
extern u16 D_sc06_022_80191050;
extern u16 D_sc06_022_80191052;
extern u16 D_sc06_022_80191054;
extern u16 D_sc06_022_80191056;


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
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
typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { SV8 v[4]; CV4 c; s32 code; } Q1C;
extern s32 func_sc06_022_80187460();
extern s32 SpawnActorFromDef();

extern void func_sc06_022_801800CC(StageActor *o);

extern u8 D_sc06_022_8018DA74;
extern u8 D_sc06_022_801AD39C;
s32 func_sc06_022_80180CB0(StageActor *arg0);

void func_sc06_022_80180700(StageActor *o, s16 *p, s32 a0, s32 b0);
void func_sc06_022_8017FA1C(StageActor *o);
extern s32 *D_sc06_022_801AD304[];
extern void func_sc06_022_8017FAFC();

extern u8 D_801274E8;
void func_sc06_022_8017D348(void) {
    typedef struct { u8 b[8]; } B8;
    *(B8 *)&D_801274E8 = *(B8 *)&g_CameraFocus;
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc06_022_8017D59C((s32) &g_Camera);
}

void func_sc06_022_8017D414(void) {
    func_8014C6AC();
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 2);
    func_sc06_022_8017D59C((s32) &g_Camera);
}

void func_sc06_022_8017D454(void) {
    func_8014C6C0();
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 0);
}

void func_sc06_022_8017D4D8(void) {
    func_8014C6AC();
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 3);
    func_sc06_022_8017D59C((s32) &g_Camera);
}

void func_sc06_022_8017D518(void) {
    func_8014C6C0();
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_022_8017D59C, 1);
}

void func_sc06_022_8017D59C(s32 arg0) {
    D_sc06_022_80190E20[AF(arg0, u8, 4)]();
}

void func_sc06_022_8017D5D8(u8 *o) {
    typedef struct { u8 b[8]; } B8;
    B8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc06_022_80190E30[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 0) < -0xFC) {
        AF(&v, s16, 0) = -0xFC;
    } else if (AF(&v, s16, 0) > 0xFC) {
        AF(&v, s16, 0) = 0xFC;
    }
    if (AF(&v, s16, 2) < -0x402) {
        AF(&v, s16, 2) = -0x402;
    }
    if (AF(&v, s16, 4) < -0x19E0) {
        AF(&v, s16, 4) = -0x19E0;
    } else if (AF(&v, s16, 4) > -0x900) {
        AF(&v, s16, 4) = -0x900;
    }
    func_sc06_022_8017D9C0(o, &v);
    func_sc06_022_8017DB58(o);
}

extern s16 D_sc06_022_80190E34[];
void func_sc06_022_8017D6E0(u8 *o) {
    typedef struct { u8 b[8]; } B8;
    B8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc06_022_80190E34[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 0) < -0xC0) {
        AF(&v, s16, 0) = -0xC0;
    } else if (AF(&v, s16, 0) > 0xC0) {
        AF(&v, s16, 0) = 0xC0;
    }
    if (AF(&v, s16, 4) < -0x580) {
        AF(&v, s16, 4) = -0x580;
    } else if (AF(&v, s16, 4) > 0x700) {
        AF(&v, s16, 4) = 0x700;
    }
    func_sc06_022_8017D9C0(o, &v);
}

void func_sc06_022_8017D7CC(u8 *o) {
    typedef struct { u8 b[8]; } B8;
    B8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc06_022_80190E38[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 0) < -0xFC) {
        AF(&v, s16, 0) = -0xFC;
    } else if (AF(&v, s16, 0) > 0xFC) {
        AF(&v, s16, 0) = 0xFC;
    }
    if (AF(&v, s16, 2) < -0x402) {
        AF(&v, s16, 2) = -0x402;
    }
    if (AF(&v, s16, 4) < -0x942) {
        AF(&v, s16, 4) = -0x942;
    } else if (AF(&v, s16, 4) > -0x900) {
        AF(&v, s16, 4) = -0x900;
    }
    func_sc06_022_8017D9C0(o, &v);
    func_sc06_022_8017DB58(o);
}

extern s16 D_sc06_022_80190E3C[];
void func_sc06_022_8017D8D4(u8 *o) {
    typedef struct { u8 b[8]; } B8;
    B8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc06_022_80190E3C[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 0) < -0xC0) {
        AF(&v, s16, 0) = -0xC0;
    } else if (AF(&v, s16, 0) > 0xC0) {
        AF(&v, s16, 0) = 0xC0;
    }
    if (AF(&v, s16, 4) < 0x6BE) {
        AF(&v, s16, 4) = 0x6BE;
    } else if (AF(&v, s16, 4) > 0x700) {
        AF(&v, s16, 4) = 0x700;
    }
    func_sc06_022_8017D9C0(o, &v);
}

void func_sc06_022_8017D9C0(u8 *arg0, u8 *arg1) {
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

extern u16 D_800B9AB8;
void func_sc06_022_8017DB58(u8 *o) {
    u16 *p = &D_800B9AB8;
    *p += 1;
}

s32 func_sc06_022_8017DB74(s32 arg0) {
    return func_8013B7F4(D_sc06_022_80190E40[arg0], 0);
}

void func_sc06_022_8017DBA4(StageActor *arg0) {
    D_sc06_022_80190F04[arg0->state]();
    if (arg0->workE0 != 0) {
        StepImageAnim(0, (s32) &D_sc06_022_801E1F98);
    }
}

void func_sc06_022_8017DC0C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_022_80190E58) != 0) {
        if (FindOtherActorByKind(arg0, 0x2F0) == 0) {
            arg0->workE0 = 1;
            StartImageAnim(0, (s32) &D_sc06_022_801E1F98, (s32) &D_sc06_022_80190E8C);
            MapPartsTmd((s32) &D_sc06_022_801AAD00);
            MapPartsTmd((s32) &D_sc06_022_801AAD08);
        }
        arg0->hitMask = 0x2000;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void BreakableHit(u8 *o) {
    s32 i;
    u8 *p;
    u8 *q;
    s32 d;

    func_sc06_022_8017EFE0();
    if (TickTimer(o) == 0 || AF(o, u16, 0x5E) == 0x22) {
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) &= ~1;
        return;
    }
    if (AF(o, u16, 0x5C) & 1) {
        TakeDamage(o);
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0x76) -= AF(o, s16, 0x60);
        AF(o, u16, 0x5C) &= ~1;
        if (AF(o, s16, 0x76) <= 0) {
            q = (u8 *)SpawnPropFrom(o, 0x63);
            if (q != 0) {
                AF(q, s16, 0xA) -= 0xB0;
            }
            for (i = 0; i < 8; i++) {
                SpawnActorArg(0x2F1, 0, o);
            }
            switch (AF(o, s16, 0x70)) {
            case 0:
                SpawnActorArg(0x27A, 0x8000, o);
                break;
            case 1:
                for (i = 0; i < 4; i++) {
                    p = (u8 *)SpawnActorArg(0x32, 1, o);
                    if (p != 0) {
                        AngleToVec2(&d, rand() % 0x1000, 0x40);
                        AF(p, s16, 6) += d;
                        AF(p, s16, 0xE) += d >> 16;
                        AF(p, s16, 0xA) -= 0x80;
                    }
                }
                break;
            case 2:
                for (i = 0; i < 4; i++) {
                    p = (u8 *)SpawnActorArg(0x33, 1, o);
                    if (p != 0) {
                        AngleToVec2(&d, rand() % 0x1000, 0x40);
                        AF(p, s16, 6) += d;
                        AF(p, s16, 0xE) += d >> 16;
                        AF(p, s16, 0xA) -= 0x80;
                    }
                }
                break;
            }
            AF(o, u16, 2)++;
        } else {
            PlaySoundId(0x9D8, 0);
        }
    }
}

void func_sc06_022_8017DF28(u8 *o) {
    WMtx m;
    V3 v;
    u8 *c;

    m = *(WMtx *)&GsIDMATRIX;
    c = (u8 *)AllocActorModel();
    if (c == 0) {
        FreeActor(o);
        return;
    }
    InitModel(c, &D_sc06_022_801AAD08);
    *(B8 *)(c + 8) = *(B8 *)(AF(o, u8 *, 0x20) + 8);
    *(B8 *)(c + 0x10) = *(B8 *)(AF(o, u8 *, 0x20) + 0x10);
    *(B8 *)(c + 0x18) = *(B8 *)(AF(o, u8 *, 0x20) + 0x18);
    AF(c, s32, 4) = AF(AF(o, u8 *, 0x20), s32, 4);
    AF(c, u16, 0x2C) = AF(AF(o, u8 *, 0x20), u16, 0x2C);
    AF(o, u8 *, 0xCC) = c;
    AF(AF(o, u8 *, 0x20), u8 *, 0x24) = &D_sc06_022_801AAD00;
    AF(o, s32, 0x48) = 0xC000;
    AF(o, s16, 0xA) -= 0xB0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x62);
    UpdateModelZYX(o);
    AF(o, s16, 0xAE) = 0x2000;
    v.x = 0;
    v.y = -0xC0000;
    v.z = -0x80000;
    RotMatrixY(AF(o, s16, 0x62), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    PlaySoundId(0x955, 0);
    AF(o, u16, 2)++;
}

void func_sc06_022_8017E104(u8 *o) {
    if (AF(o, s16, 0xA) >= 0x10) {
        func_sc06_022_8017E2B0((s32)o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x10) += 0x30;
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) > 0x800) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x800;
        }
        if (MoveCollidePassableAt(o, &D_sc06_022_80190F28) & 0x2000) {
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (TickTimer(o) != 0) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), s32, 4) ^= 0x80000000;
        AF(AF(o, u8 *, 0xCC), s32, 4) ^= 0x80000000;
        if (TickTimer(o) != 0) {
            if (AF(o, s32, 0xE0) == 0) {
                func_sc06_022_8017E2B0((s32)o);
            } else {
                AF(o, s16, 0x5C) = 0;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
                AF(AF(o, u8 *, 0xCC), s32, 4) |= 0x80000000;
                AF(o, u16, 0x34)++;
            }
        }
        break;
    }
}

void func_sc06_022_8017E2A8(void) {
}

void func_sc06_022_8017E2B0(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x84);
    }
    FreeActor(arg0);
}

void func_sc06_022_8017E2F4(u8 *arg0) {
    D_sc06_022_80190F7C[AF(arg0, u16, 2)]();
}

void func_sc06_022_8017E330(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind2(temp_s0, (s32) &D_sc06_022_80190F30, 0x2E0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x4F;
    AF(temp_s0, s16, 0x1A) = -0x8000;
    AF(temp_s0, s16, 0x18) = -0x8000;
    AF(temp_s0, s16, 0x10) = 0x400;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    StartSpriteAnim(temp_s0, (s32) (arg0 + 0x24), (s32) &D_sc06_022_80190F3C);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_022_8017E3C8(u8 *arg0) {
    if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) == 1) {
        FreeProp((s32) arg0);
    }
}

void func_sc06_022_8017E40C(StageActor *arg0) {
    D_sc06_022_80190F84[arg0->state]();
}

void func_sc06_022_8017E448(u8 *arg0) {
    s32 o;
    s32 r;
    s32 t;
    u8 unused[8];
    s32 d;
    s32 sign;
    s32 v;
    u8 *q;

    o = AllocActorModel();
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    InitModel(o, 0);
    t = rand();
    r = (s16) t;
    AF(o, u16, 0x2C) |= 0x10;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = r % 0x300 + 0x400;
    sign = -1;
    if (t & 1) {
        sign = 1;
    }
    AF(o, s16, 0x10) = sign * (r % 0x80) - 0x300;
    AF(o, s16, 0x12) = r % 0x1000;
    AngleToVec2(&d, (s16)(r % 0x1000) + 0x800, 0x60);
    AF(arg0, s16, 6) += d;
    AF(arg0, s16, 0xE) += d >> 16;
    AF(arg0, s16, 0xA) -= rand() % 64 + 0x50;
    AF(arg0, s32, 0x48) = 0xC000;
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, -0x80000 - ((r % 8) << 0x10));
    AF(arg0, s32, 0x1C) = 0x3C;
    AF(arg0, s16, 0xFE) = rand() & 0xF0;
    AF(arg0, s16, 0x100) = rand() & 0x1F0;
    AF(arg0, s16, 0x102) = rand() & 0x30;
    q = (u8 *) arg0 + 0xDC;
    v = rand() % 16;
    AF(q, s16, 0) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 2) = 0;
    v = rand() % 16;
    AF(q, s16, 4) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 16;
    AF(q, s16, 8) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0xA) = 0;
    v = rand() % 16;
    AF(q, s16, 0xC) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 16;
    AF(q, s16, 0x10) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 0x12) = 0;
    v = rand() % 16;
    AF(q, s16, 0x14) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    v = rand() % 16;
    AF(q, s16, 0x18) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0x1A) = 0;
    v = rand() % 16;
    AF(q, s16, 0x1C) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    if (AF(arg0, s16, 0x70) == 0) {
        AF(q, u8, 0x20) = AF(q, u8, 0x21) = AF(q, u8, 0x22) = 0x40;
        AF(q, s32, 0x24) = 0x50000000;
    } else {
        AF(q, u8, 0x20) = AF(q, u8, 0x21) = AF(q, u8, 0x22) = 0x40;
    }
    AF(arg0, u16, 2)++;
}

void func_sc06_022_8017E87C(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x102));
    if ((MoveCollidePassable((s32) arg0, (s32) temp_a1, arg2) != 0) || (TickTimer((s32) arg0) != 0)) {
        FreeActor((s32) arg0);
        return;
    }
    DrawPrimF4Mtx((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc06_022_8017E920(StageActor *arg0) {
    D_sc06_022_80191038[arg0->state]();
    if (arg0->workE0 != 0) {
        StepImageAnim(0, (s32) &D_sc06_022_801E1FA0);
        StepImageAnim(0, (s32) &D_sc06_022_801E1FA8);
    }
}

void func_sc06_022_8017E998(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_022_80190F9C) != 0) {
        if (FindOtherActorByKind(arg0, 0x302) == 0) {
            arg0->workE0 = 1;
            StartImageAnim(0, (s32) &D_sc06_022_801E1FA0, (s32) &D_sc06_022_80190FD0);
            StartImageAnim(0, (s32) &D_sc06_022_801E1FA8, (s32) &D_sc06_022_80191000);
            MapPartsTmd((s32) &D_sc06_022_801ABA44);
            MapPartsTmd((s32) &D_sc06_022_801ABA4C);
        }
        arg0->hitData = (s32) ((s32) &D_sc06_022_80190F8C | 0x10000000 | 0x40000000);
        arg0->hitMask = 0x2000;
        arg0->targetClass = 8;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc06_022_8017EA6C(u8 *o) {
    u8 *c;
    s32 i;
    s16 n;

    func_sc06_022_8017EFE0();
    if (TickTimer(o) == 0 || AF(o, u16, 0x5E) == 0x22) {
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) &= 0xFFFE;
        return;
    }
    if (AF(o, u16, 0x5C) & 1) {
        TakeDamage(o);
        AF(o, s32, 0x1C) = 8;
        AF(o, s16, 0x5E) = 0;
        AF(o, u16, 0x5C) &= 0xFFFE;
        AF(o, s16, 0x76) -= AF(o, s16, 0x60);
        PlaySoundId(0x9D5, 0);
        if (AF(o, s16, 0x76) <= 0) {
            n = AF(o, s16, 0xFE);
            AF(o, s16, 0xFE) = n + 1;
            AF(AF(o, u8 *, 0x20), s32, 0x24) = D_sc06_022_80191030[n];
            AF(o, s16, 0x76) = 5;
            if (AF(o, s16, 0xFE) >= 2) {
                AF(o, s32, 0x1C) = 0x3C;
                AF(o, s16, 2)++;
                c = (u8 *)SpawnPropFrom(o, 0x22);
                if (c != 0) {
                    AF(c, s16, 0x34) = 0x7FF2;
                    AF(c, s16, 0xA) -= 0x80;
                    AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC004;
                    AF(c, s32, 0x14) = 0xFFFC0000;
                    for (i = 0; i < 8; i++) {
                        SpawnActorArg(0x2F1, 1, o);
                    }
                }
            }
        }
    }
}

void func_sc06_022_8017EBE8(u8 *o) {
    s32 i;
    s16 n;
    u8 *p;
    u8 *q;
    s32 r;
    s32 x;

    if (AF(o, u16, 0x34) == 0) {
        if (AF(o, s32, 0x1C) >= 0x1F) {
            n = rand() % 4;
            for (i = 0; i < n; i++) {
                p = (u8 *)SpawnPropFrom(o, 0x23);
                if (p != 0) {
                    r = rand();
                    AF(p, s16, 0x34) = ((r % 0x4000 + 0x2000) & ~0xF) | (rand() & 1);
                    AF(p, s16, 0xA) -= 0x70;
                    r = rand() % 80;
                    x = AF(p, s16, 6);
                    AF(p, s16, 6) = (rand() & 1) ? x + r : x - r;
                    r = rand() % 144;
                    x = AF(p, s16, 0xE);
                    AF(p, s16, 0xE) = (rand() & 1) ? x + r : x - r;
                }
            }
            n = rand() % 2;
            for (i = 0; i < n; i++) {
                p = (u8 *)SpawnPropFrom(o, 0x22);
                if (p != 0) {
                    AF(p, s16, 0x34) = rand() % 0x4000 + 0x2000;
                    r = rand() % 80;
                    x = AF(p, s16, 6);
                    AF(p, s16, 6) = (rand() & 1) ? x + r : x - r;
                    r = rand() % 144;
                    x = AF(p, s16, 0xE);
                    AF(p, s16, 0xE) = (rand() & 1) ? x + r : x - r;
                    AF(p, s16, 0xA) -= 0x80;
                    AF(p, s32, 0x14) = -((rand() % 3) << 16);
                    AF(AF(p, u8 *, 0x20), s32, 4) |= 0x40000000;
                }
            }
            PlaySoundId(0x9D6, 0);
        }
        if (TickTimer(o) != 0) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        }
    } else {
        ToggleModel(o);
        if (TickTimer(o) != 0) {
            q = (u8 *)SpawnActorArg(0x32, 1, o);
            if (q != 0) {
                AF(q, s16, 0xE) += 0x30;
            }
            q = (u8 *)SpawnActorArg(0x33, 1, o);
            if (q != 0) {
                AF(q, s16, 0xE) -= 0x30;
            }
            if (AF(o, s32, 0xE0) != 0) {
                AF(o, u16, 2)++;
                HideModel(o);
                AF(o, s16, 0x5C) = 0;
            } else {
                FreeActor(o);
            }
        }
    }
}

void func_sc06_022_8017EFD8(void) {
}

extern s32 func_80135A4C();
void func_sc06_022_8017EFE0(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *p;
    s32 i;

    for (i = 0, p = &g_Actors; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x27A) {
            a.x = AF(p, u16, 0x3A);
            a.y = AF(p, u16, 0x3E);
            a.z = AF(p, u16, 0x42);
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            if (func_80135A4C(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
                AF(p, u16, 6) = b.x;
                AF(p, u16, 0xA) = b.y;
                AF(p, u16, 0xE) = b.z;
            }
        }
    }
}

extern void UpdateHumVolume();
extern void CopyPropVel();
extern s32 func_sc06_022_8017F30C();
extern s16 g_PlayerHitDamage;
void func_sc06_022_8017F0D4(StageActor *o) {
    s16 d;
    u8 *c;

    o->timer++;
    if (o->param == 0) {
        UpdateHumVolume(o);
    }
    d = D_80126B66 - (u16)o->pos[2].h.i;
    if (d < 0) {
        d = -d;
    }
    if (d <= 0x400) {
        if (o->timer & 1) {
            c = (u8 *)SpawnPropFrom(o, 0x22);
            if (c != 0) {
                CopyPropVel(c, o);
                AF(AF(c, u8 *, 0x20), s16, 0x18) = AF(AF(c, u8 *, 0x20), s16, 0x1A) = 0x4000;
            }
        }
        if (func_sc06_022_8017F30C(o)) {
            s16 *q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0xC;
            *q |= 0x4000;
        }
    }
}

void UpdateHumVolume(u8 *o) {
    s32 min;
    u8 *p;
    s32 i;
    s32 d;
    s32 r;

    min = 0x7FFFFFFF;
    p = &g_Actors;
    i = 0;
    for (; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x2E5) {
            d = GroundDistSqToPlayer(p);
            if (d < min) {
                min = d;
            }
        }
    }
    if (min <= 0x14400) {
        d = SquareRoot0(min);
        PlaySoundId(0x9D3, (u16)((0x7F - d / 3) | 0x1000));
        AF(o, s16, 0x102) = 1;
    } else if (AF(o, s16, 0x102) != 0) {
        PlaySoundId(4, 0x9D3);
        AF(o, s16, 0x102) = 0;
    }
}

void func_sc06_022_8017F2D0(StageActor *arg0) {
    D_sc06_022_80191058[arg0->state]();
}

s32 func_sc06_022_8017F30C(StageActor *o) {
    SV8 a, b;
    a.z = D_sc06_022_80191054;
    b.z = D_sc06_022_80191056;
    a.y = b.y = D_sc06_022_80191050;
    a.x = b.x = (s16)D_sc06_022_8019104C >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.x = b.x = (s16)D_sc06_022_8019104E >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = D_sc06_022_80191052;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.x = b.x = (s16)D_sc06_022_8019104C >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    return 0;
}

extern u8 D_sc06_022_80191048;
void func_sc06_022_8017F414(u8 *o) {
    u8 *m;
    V3 v;

    m = (u8 *)AllocActorModel();
    AF(o, u8 *, 0x20) = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(m);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
    UpdateModelZYX(o);
    v.x = v.y = 0;
    v.z = 0xC0000;
    SetLocalVelocity(o, &v);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, s32, 0x58) = (s32)&D_sc06_022_80191048 | 0x40000000;
    NextState(o);
}

void func_sc06_022_8017F4B0(StageActor *arg0) {
    func_sc06_022_8017F0D4(arg0);
}

void func_sc06_022_8017F4D0(StageActor *arg0) {
    D_sc06_022_80191070[arg0->state]();
}

void func_sc06_022_8017F50C(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->state = 1;
    arg0->hitState = 0x20;
    arg0->hitData = (s32) ((s32) &D_sc06_022_80191060 | 0x40000000);
    arg0->model->rot.vy = (u16) (u16)arg0->unkFC;
}

void func_sc06_022_8017F588(void) {
}

s32 func_sc06_022_8017F590(void) {
    return 0x7F;
}

void func_sc06_022_8017F598(StageActor *arg0) {
    D_sc06_022_801910F0[arg0->state]();
    if (arg0->kind != 0) {
        CarryPlayer((s32) arg0);
    }
}

s32 func_sc06_022_8017F5F8(u8 *arg0) {
    return AF(arg0, s16, 0xFC) != 0;
}

void func_sc06_022_8017F604(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_022_80191088) != 0) {
        SetModelCullBox(arg0->model, 0xC8, 0x340);
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->state = 1;
        arg0->targetClass = 0;
        SetScript(arg0, (s32) &D_sc06_022_801910C8);
        arg0->timer = 5;
    }
}

void EventObjStart(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        g_PlayerX = AF(arg0, u16, 6);
        D_80126B62 = AF(arg0, u16, 0xA) - 0x30;
        D_80126B66 = AF(arg0, u16, 0xE);
        StartEvent((s32) arg0, (s32) &D_sc06_022_801910D0);
        PlaySoundId(0xB01, 0);
    }
}

void func_sc06_022_8017F704(StageActor *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = (u16)arg0->pos[1].h.i + 8;
        arg0->pos[1].h.i = temp_v0;
        if ((s16) temp_v0 >= -0x420) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
            PlaySoundId(0xB02, 0, arg2);
        }
        break;
    case 1:
        temp_v0_2 = (u16)arg0->workFE + 0x40;
        arg0->workFE = (u16) temp_v0_2;
        arg0->pos[1].h.i = (u16) ((rsin((s32) temp_v0_2) >> 6) - 0x420);
        if ((s16) (u16)arg0->workFE >= 0x400) {
            arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    }
    if (IsEventDone((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc06_022_8017F7FC(void) {
}

s32 func_sc06_022_8017F804(u8 *arg0) {
    s16 temp_v1;
    s32 var_v0;

    temp_v1 = AF(arg0, s16, 4);
    var_v0 = D_80126CB0 - temp_v1;
    if (var_v0 < 0) {
        var_v0 = temp_v1 - D_80126CB0;
    }
    return (u32) (var_v0 - 0x3C1) < 0x3FU;
}

s32 func_sc06_022_8017F830(u8 *arg0) {
    s16 temp_v1;
    s32 var_v0;

    temp_v1 = AF(arg0, s16, 0xE);
    var_v0 = D_80126CB0 - temp_v1;
    if (var_v0 < 0) {
        var_v0 = temp_v1 - D_80126CB0;
    }
    return var_v0 >= 0x440;
}

void func_sc06_022_8017F85C(StageActor *o) {
    ModelObj *m;

    m = (u8 *)AllocActorModel();
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(m);
    o->model->pose = &g_DefaultPose;
    switch (o->param) {
    case 0:
        o->pos[0].h.i += D_sc06_022_801AD2DC[o->param].x;
        o->pos[1].h.i += D_sc06_022_801AD2DC[o->param].y;
        o->pos[2].h.i += D_sc06_022_801AD2DC[o->param].z;
        o->model->colour = 0x2000100;
        o->model->flags |= 0x90;
        o->model->unk80 = &D_sc06_022_801AD394;
        o->model->scale.vx = 0x1040;
        o->ext0 = SpawnActorArg(0x2F4, 1, o);
        o->ext1 = SpawnActorArg(0x2F4, 2, o);
        o->workD4 = SpawnActorArg(0x2F4, 3, o);
        o->workD8 = SpawnActorArg(0x2F4, 4, o);
        func_sc06_022_8017F9FC(o);
        break;
    case 1:
    case 2:
        do {
            o->ext0 = SpawnActorArg(0x2F9, o->param - 1, o);
        } while (0);
        func_sc06_022_801800AC(o);
        break;
    case 3:
    case 4:
        break;
    }
}

s32 func_sc06_022_8017F9FC(StageActor *arg0) {
    return SetState(arg0, 1);
}

void func_sc06_022_8017FA1C(StageActor *o) {
    o->workFE = 0;
    o->timer = D_sc06_022_801AD2DC[o->param].pad;
    if (o->param == 0) {
        if ((u8 *)o->ext0 != 0) {
            func_sc06_022_801800CC(o->ext0);
        }
        if ((u8 *)o->ext1 != 0) {
            func_sc06_022_801800CC(o->ext1);
        }
        if (AF(o, u8 *, 0xD4) != 0) {
            func_sc06_022_801800CC(AF(o, u8 *, 0xD4));
        }
        if (AF(o, u8 *, 0xD8) != 0) {
            func_sc06_022_801800CC(AF(o, u8 *, 0xD8));
        }
        AF(o, u8 *, 0x58) = D_sc06_022_801AD318;
        o->hitState = 0x800;
        o->targetClass = 8;
        o->work106 = 0;
        PlaySoundId(0x94F, 0);
    }
    SetState(o, 2);
}

void func_sc06_022_8017FAFC(StageActor *o) {
    switch (o->param) {
    case 0:
        o->timer = 0x1A;
        break;
    case 1:
        StartCameraShake(&D_sc06_022_8018DA74);
        PlaySoundId(0x950, 0);
    case 2:
        o->hitMask = 0x6918;
        o->hitState = 0x8000;
        o->timer = 2;
        break;
    }
    SetState(o, 3);
}

void func_sc06_022_8017FB9C(u8 *o) {
    switch (AF(o, s16, 0x70)) {
    case 0:
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (TickTimer(o) == 0) {
                return;
            }
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            QueueImage(&D_sc06_022_801BCE84);
            AF(o, u16, 0x34)++;
            break;
        case 1:
            if (AF(o, s16, 0x106) != 2) {
                return;
            }
            if (AF(o, u8 *, 0xCC) != 0) {
                func_sc06_022_8017FED0(AF(o, u8 *, 0xCC));
            }
            if (AF(o, u8 *, 0xD0) != 0) {
                func_sc06_022_8017FED0(AF(o, u8 *, 0xD0));
            }
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
            PlaySoundId(0x952, 0);
            break;
        case 2:
            if ((AF(o, s32, 0x1C) & 0xF) == 0) {
                StartCameraShake(&D_sc06_022_8018DA98);
            }
            if ((AF(o, u16, 0x102) & 3) == 0) {
                PlaySoundId(0x951, 0);
            }
            if (TickTimer(o) != 0) {
                if (AF(o, u8 *, 0xCC) != 0) {
                    FreeActor(AF(o, u8 *, 0xCC));
                }
                if (AF(o, u8 *, 0xD0) != 0) {
                    FreeActor(AF(o, u8 *, 0xD0));
                }
                if (AF(o, u8 *, 0xD4) != 0) {
                    FreeActor(AF(o, u8 *, 0xD4));
                }
                if (AF(o, u8 *, 0xD8) != 0) {
                    FreeActor(AF(o, u8 *, 0xD8));
                }
                if (AF(o, u8 *, 0xDC) != 0 && *(void (**)())(AF(o, u8 *, 0xDC) + 4) != 0) {
                    (*(void (**)())(AF(o, u8 *, 0xDC) + 4))();
                }
                func_sc06_022_80180680(o);
                FreeActor(o);
            } else if (AF(o, s32, 0x1C) == 0x18) {
                if (AF(o, u8 *, 0xCC) != 0) {
                    AF(AF(AF(o, u8 *, 0xCC), u8 *, 0x20), s32, 4) |= 0x80000000;
                }
                if (AF(o, u8 *, 0xD0) != 0) {
                    AF(AF(AF(o, u8 *, 0xD0), u8 *, 0x20), s32, 4) |= 0x80000000;
                }
                if (AF(o, u8 *, 0xD4) != 0) {
                    AF(AF(AF(o, u8 *, 0xD4), u8 *, 0x20), s32, 4) |= 0x80000000;
                }
                if (AF(o, u8 *, 0xD8) != 0) {
                    AF(AF(AF(o, u8 *, 0xD8), u8 *, 0x20), s32, 4) |= 0x80000000;
                }
                func_sc06_022_80181418(o);
            }
            break;
        }
        break;
    case 1:
    case 2:
        if (AF(o, u16, 0x34) == 0 && TickTimer(o) != 0) {
            SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801B174C);
            if (AF(o, u8 *, 0xCC) != 0) {
                func_sc06_022_80180CD0(AF(o, u8 *, 0xCC));
            }
            AF(o, u16, 0x34)++;
        }
        break;
    }
}

s32 func_sc06_022_8017FED0(StageActor *arg0) {
    arg0->timer = 0x20;
    return SetState(arg0, 4);
}

void func_sc06_022_8017FEF8(u8 *o) {
    SV8 v;
    s32 w[4];

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(AF(o, u8 *, 0x64), s16, 0x106) < 2 && (AF(o, u16, 0x102) & 3) == 0) {
            PlaySoundId(0x951, 0);
        }
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE) - 0x30;
        v.pad = 0x4001;
        if (AF(o, s16, 0x70) == 1) {
            v.x = AF(o, s16, 6) + 0x88;
        } else {
            v.x = AF(o, s16, 6) - 0x88;
        }
        EmitProp23(o + 0x102, &v, &D_sc06_022_801AD3A4, 0);
        EmitProp22(o + 0x104, &v, &D_sc06_022_801AD3A4, 0);
        if (TickTimer(o) != 0) {
            AF(AF(o, u8 *, 0x64), s16, 0x106)++;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        v.y = AF(o, s16, 0xA);
        v.z = AF(o, s16, 0xE) - 0x30;
        v.pad = 0x3001;
        if (AF(o, s16, 0x70) == 1) {
            v.x = AF(o, s16, 6) + 0x88;
        } else {
            v.x = AF(o, s16, 6) - 0x88;
        }
        w[1] = 0xFFFC0000;
        w[2] = 0;
        w[0] = 0;
        w[3] = 3;
        func_sc06_022_801804BC(o + 0x104, &v, &D_sc06_022_801AD3AC, w);
        break;
    }
}

s32 func_sc06_022_801800AC(StageActor *arg0, s32 arg1) {
    return SetState(arg0, 5);
}

void func_sc06_022_801800CC(StageActor *o) {
    o->pos[0].h.i += D_sc06_022_801AD2DC[o->param].x;
    o->pos[1].h.i += D_sc06_022_801AD2DC[o->param].y;
    o->pos[2].h.i += D_sc06_022_801AD2DC[o->param].z;
    o->model->colour = 0x2000100;
    o->model->flags |= 0x90;
    o->model->unk80 = &D_sc06_022_801AD394;
    o->model->scale.vx = 0x1040;
    switch (o->param) {
    case 1:
    case 2:
        o->init = &D_sc06_022_801AD360;
        o->reactive = 1;
        o->params = &D_sc06_022_801AD348;
        o->targetClass = 8;
        o->hp = 0x708;
        o->reactMask = 0;
        o->react = 0;
        o->hitState = 0;
        o->reactOpts |= 2;
        AF(o, u8 *, 0x58) = D_sc06_022_801AD318 + o->param * 16;
        if (o->param == 1) {
            o->model->rot.vy = 0x800;
        }
    case 3:
    case 4:
        if (o->param == 4) {
            o->model->rot.vx = 0x800;
        }
        o->workFE = 0;
        o->timer = D_sc06_022_801AD2DC[o->param].pad;
        if (o->param == 0) {
            if ((u8 *)o->ext0 != 0) {
                func_sc06_022_801800CC(o->ext0);
            }
            if ((u8 *)o->ext1 != 0) {
                func_sc06_022_801800CC(o->ext1);
            }
            if (AF(o, u8 *, 0xD4) != 0) {
                func_sc06_022_801800CC(AF(o, u8 *, 0xD4));
            }
            if (AF(o, u8 *, 0xD8) != 0) {
                func_sc06_022_801800CC(AF(o, u8 *, 0xD8));
            }
            AF(o, u8 *, 0x58) = D_sc06_022_801AD318;
            o->hitState = 0x800;
            o->targetClass = 8;
            o->work106 = 0;
            PlaySoundId(0x94F, 0);
        }
        SetState(o, 2);
        break;
    }
}

void func_sc06_022_80180310(StageActor *arg0) {
    D_sc06_022_801AD3B4[arg0->state]();
}

void func_sc06_022_8018034C(StageActor *o) {
    ActorInit *p;
    s32 d;

    o->react = 1;
    o->hitState &= 0xFFFE;
    o->model->unk80 = &D_sc06_022_801AD39C;
    o->work100 = 8;
    p = o->init;
    if (p != 0) {
        d = (o->hitDamage * p->damageScale) >> 12;
        if (d <= 0) {
            d = 1;
        }
    }
    if (o->hp != 0) {
        ShowDamage(o, d);
        o->hp -= d;
        if (o->hp < 0) {
            o->hp = 0;
        }
        PlaySoundId(0x9D4, 0);
        if (o->hp != 0) {
            return;
        }
    }
    o->hitState = 0;
}

void func_sc06_022_80180424(StageActor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->work100;
    if (temp_v0 != 0) {
        arg0->work100 = (s16) (temp_v0 - 1);
        return;
    }
    arg0->react = 0;
    arg0->hitCode = 0;
    arg0->model->unk80 = &D_sc06_022_801AD394;
    if (arg0->hp == 0) {
        SetModelParts((s32) arg0->model, (s32) &D_sc06_022_801B1D64);
        AF(arg0, s16, 0xAE) = -1;
        arg0->timer = 0x20;
        SetState((s32) arg0, 4);
    }
}

void func_sc06_022_801804BC(u16 *cnt, SV8 *pos, SV8 *rng, u8 *prm) {
    u8 *p;

    if ((*cnt & (s16)((1 << AF(prm, s16, 0xC)) - 1)) == 0) {
        p = (u8 *)SpawnProp(0x22);
        if (p != 0) {
            AF(p, s16, 6) = pos->x + rand() % (rng->x * 2) - rng->x;
            AF(p, s16, 0xA) = pos->y + rand() % (rng->y * 2) - rng->y;
            AF(p, s16, 0xE) = pos->z + rand() % (rng->z * 2) - rng->z;
            AF(p, s32, 0x10) = AF(prm, s32, 0);
            AF(p, s32, 0x14) = AF(prm, s32, 4);
            AF(p, s32, 0x18) = AF(prm, s32, 8);
            AF(p, s16, 0x34) = pos->pad;
            AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC010;
        }
    }
    (*cnt)++;
}

void func_sc06_022_80180680(StageActor *o) {
    s16 v[4];

    v[1] = 0x100;
    v[2] = 0;
    v[3] = 0;
    v[0] = 0;
    func_sc06_022_80180700(o, v, 0x32, 2);
    v[0] = -0xC0;
    func_sc06_022_80180700(o, v, 0x33, 3);
    v[0] = 0xC0;
    func_sc06_022_80180700(o, v, 0x33, 2);
}

void func_sc06_022_80180700(StageActor *o, s16 *p, s32 a0, s32 b0) {
    WMtx m;
    V3 v;
    u8 *r;
    s16 a = a0;
    s16 b = b0;

    m = *(WMtx *)&GsIDMATRIX;
    r = (u8 *)SpawnActorArg(a, b, o);
    if (r != 0) {
        AF(r, s16, 6) += p[0] + (rand() & 0x3F) - 0x1F;
        AF(r, s16, 0xA) += p[1] + (rand() & 0x3F) - 0x1F;
        AF(r, s16, 0xE) += p[2];
        RotMatrixY(p[3], &m);
        ApplyMatrixLV(&m, &D_sc06_022_801AD3CC, &v);
        AF(r, s32, 0x10) = v.x;
        AF(r, s32, 0x14) = 0xFFF00000;
        AF(r, s32, 0x18) = v.z;
    }
}

void func_sc06_022_80180838(u8 *o) {
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) == 0) {
            return;
        }
        AF(o, s32, 0x1C) = 2;
        if (AF(o, s16, 0x70) == 0) {
            QueueImage(D_sc06_022_801AD3F8[AF(o, s16, 0x100)]);
        }
        if (++AF(o, s16, 0x100) == 7) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        p = AF(o, u8 *, 0x6C);
        if (p != 0) {
            if (AF(o, s16, 0x70) == 0) {
                AF(p, s16, 6) = AF(AF(o, u8 *, 0x64), s16, 6) + 0x90;
            } else {
                AF(p, s16, 6) = AF(AF(o, u8 *, 0x64), s16, 6) - 0x90;
            }
            AF(AF(o, u8 *, 0x6C), s16, 6) += 4;
            AF(AF(o, u8 *, 0x6C), s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA);
            AF(AF(o, u8 *, 0x6C), s16, 0xE) = AF(AF(o, u8 *, 0x64), s16, 0xE);
            func_sc06_022_80180CD0(AF(o, u8 *, 0x6C));
        }
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s32, 4) < 0) {
            FreeActor(o);
        }
        break;
    }
}

s32 func_sc06_022_801809D4(StageActor *arg0) {
    return SetState(arg0, 3);
}

void func_sc06_022_801809F4(u8 *o) {
    u8 *s;
    V3 v;
    s32 r[2];
    u8 *t;

    s = AF(o, u8 *, 0xCC);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x100) = -1;
            AF(o, s16, 0xFE) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s16, 0xFE);
        if (TickTimer(o) != 0) {
            if (AF(o, s16, 0x100) >= 0 && (D_sc06_022_801AD416[AF(o, s16, 0x100) * 2] & 0x8000)) {
                if (AF(o, s16, 0x70) == 5) {
                    AF(o, s16, 0x102) = 0x20;
                } else {
                    AF(o, s16, 0x102) = 0x70;
                }
                AF(o, u16, 0x34)++;
            } else {
                AF(o, s16, 0xFE) = D_sc06_022_801AD414[++AF(o, s16, 0x100) * 2];
                AF(o, s32, 0x1C) = ((u8 *)D_sc06_022_801AD416)[AF(o, s16, 0x100) * 4];
                if (AF(o, s16, 0x70) == 5) {
                    AF(o, s16, 0xFE) = -AF(o, s16, 0xFE);
                }
            }
        }
        break;
    case 2:
        v.x = *(s32 *)&g_PlayerPosX;
        v.y = D_80126B60 - 0x480000;
        v.z = D_80126B64;
        HeadingPitchTo(r, AF(o, u8 *, 0x64) + 4, &v);
        AF(o, s32, 0xE0) = r[0];
        func_sc06_022_80180F30(AF(o, s16, 0xE0), AF(o, u8 *, 0x20) + 0x10, 0x20);
        func_sc06_022_80180F30(AF(o, s16, 0xE2), AF(o, u8 *, 0x20) + 0x12, 0x20);
        if (AF(o, s16, 0x102) != 0) {
            AF(o, s16, 0x102)--;
        } else {
            func_sc06_022_80180FB4(o);
            t = AF(o, u8 *, 0xD0);
            if (t != 0) {
                AF(t, s16, 0x54) = 0x10;
            }
            AF(o, s32, 0x1C) = 3;
            AF(o, u16, 0x34)++;
        }
        if (AF(s, s16, 0x76) == 0) {
            func_sc06_022_801810C0(o);
            if (AF(o, u8 *, 0xD0) != 0) {
                FreeActor(AF(o, u8 *, 0xD0));
            }
            FreeActor(o);
            return;
        }
        break;
    case 3:
        if (TickTimer(o) != 0) {
            t = AF(o, u8 *, 0xD0);
            if (t != 0) {
                AF(t, s16, 0x54) = 0;
            }
            AF(o, s16, 0x102) = 0xA0;
            AF(o, u16, 0x34)--;
        }
        break;
    }
    func_sc06_022_80180EE0(o);
}

s32 func_sc06_022_80180CB0(StageActor *arg0) {
    return SetState(arg0, 5);
}

void func_sc06_022_80180CD0(StageActor *o) {
    InitModel(o->model, D_sc06_022_801AD3DC[o->param]);
    o->model->flags |= 0x90;
    o->model->unk80 = &D_sc06_022_801AD394;
    o->model->scale.vx = 0x1040;
    switch (o->param) {
    case 0:
    case 1:
        o->pos[0].h.i = -0x88;
        o->pos[1].h.i = 0;
        if (o->param == 0) {
            o->pos[2].h.i = 0x20;
        } else {
            o->pos[2].h.i = -0x20;
        }
        SetModelParent(o->model, o->parent->model);
        o->work100 = 0;
        o->timer = 0;
        SetState(o, 1);
        break;
    case 2:
    case 3:
        o->model->scale.vx = 0x1300;
        o->model->scale.vy = 0x1300;
        o->ext0 = (u8 *)o->parent;
        o->pos[2].h.i -= 0x20;
        if ((u8 *)o->link != 0) {
            func_sc06_022_80180CD0(o->link);
        }
        o->ofs[2] = 0x80;
        SetState(o, 2);
        break;
    case 4:
    case 5:
        o->ext0 = (u8 *)o->parent->ext0;
        SetModelParent(o->model, o->parent->model);
        o->pos[0].h.i = o->pos[1].h.i = o->pos[2].h.i = 0;
        if ((u8 *)o->ext1 != 0) {
            func_sc06_022_80180CD0(o->ext1);
        }
        o->timer = 9;
        SetState(o, 4);
        break;
    case 6:
        o->ext0 = (u8 *)o->parent->ext0;
        o->pos[0].h.i = o->pos[1].h.i = o->pos[2].h.i = 0;
        SetModelParent(o->model, o->parent->model);
        SetState(o, 3);
        break;
    }
}

void func_sc06_022_80180EA4(StageActor *arg0) {
    D_sc06_022_801AD420[arg0->state]();
}

void func_sc06_022_80180EE0(u8 *o) {
    u8 *s = AF(o, u8 *, 0xCC);

    if (AF(o, s16, 0x70) >= 2) {
        if (AF(s, s16, 0x100) != 0) {
            AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc06_022_801AD39C;
        } else {
            AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc06_022_801AD394;
        }
    }
}

void func_sc06_022_80180F30(s32 a, u16 *p, s32 n) {
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

void func_sc06_022_80180FB4(StageActor *o) {
    SV8 s;
    s32 flag;
    u8 *p;
    u8 *q;
    s32 i;

    SetRotMatrix((u8 *)o->model + 0x54);
    SetTransMatrix((u8 *)o->model + 0x54);
    s.x = s.y = 0;
    s.z = -0x60;
    RotTransSV(&s, &s, &flag);
    p = (u8 *)SpawnPropFrom(o, 0x22);
    if (p != 0) {
        AF(p, s16, 6) = s.x;
        AF(p, s16, 0xA) = s.y;
        AF(p, s16, 0xE) = s.z;
        AF(p, s16, 0x34) = 0x4000;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
    }
    for (i = 0; i < 7; i++) {
        q = (u8 *)SpawnActorArg(0x2FE, i, o);
        if (q != 0) {
            AF(q, s16, 6) = s.x;
            AF(q, s16, 0xA) = s.y;
            AF(q, s16, 0xE) = s.z;
        }
    }
    PlaySoundId(0xAE6, 0);
}

void func_sc06_022_801810C0(u8 *o) {
    SV8 s;
    s32 flag;
    u8 *p;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x54);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x54);
    s.x = s.y = 0;
    s.z = -0x40;
    RotTransSV(&s, &s, &flag);
    p = (u8 *)SpawnPropFrom(o, 0x23);
    if (p != 0) {
        AF(p, s16, 6) = s.x;
        AF(p, s16, 0xA) = s.y;
        AF(p, s16, 0xE) = s.z;
        AF(p, s16, 0x34) = 0x4001;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
    }
}

void func_sc06_022_80181168(StageActor *arg0) {
    D_sc06_022_801AD44C[arg0->state]();
}

void func_sc06_022_801811A4(StageActor *o) {
    ModelObj *m;
    s32 v;
    ModelObj *p;
    s32 n;

    m = (u8 *)AllocActorModel();
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(m, D_sc06_022_801AD454[D_sc06_022_801AD46E[o->param * 4] & 7]);
    o->model->flags |= 0x10;
    n = o->param * 8;
    v = *(u16 *)((u8 *)D_sc06_022_801AD46E + n) & 0xFFF0;
    p = o->model;
    p->scale.vy = v;
    p->scale.vx = v;
    o->model->scale.vz = 0x400;
    o->pos[0].h.i = o->parent->pos[0].h.i + D_sc06_022_801AD468[o->param * 4];
    o->pos[1].h.i = o->parent->pos[1].h.i + D_sc06_022_801AD46A[o->param * 4];
    o->pos[2].h.i = o->parent->pos[2].h.i + D_sc06_022_801AD46C[o->param * 4];
    AF(o, s16, 0xE0) = o->parent->pos[1].h.i + 0x140;
    func_sc06_022_801812F8(o);
}

s32 func_sc06_022_801812F8(s32 arg0) {
    StopWithGravity(arg0);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x7F) - 0x40) << 0xB);
    AF(arg0, s32, 0x14) = (s32) -((rand() & 0x7F) << 0xD);
    AF(arg0, s32, 0x18) = (s32) ((rand() & 0x7F) << 0xD);
    AF(arg0, s16, 0x106) = (s16) (rand() & 0x1F0);
    AF(arg0, s16, 0x108) = (s16) (rand() & 0x1F0);
    AF(arg0, s16, 0xE6) = 8;
    AF(arg0, s16, 0xE4) = (s16) (AF(arg0, s16, 0x70) * 2);
    return SetState(arg0, 1);
}

s32 func_sc06_022_80181394(StageActor *arg0) {
    AF(arg0, s16, 0xE6) = 0xC;
    AF(arg0, s16, 0xE4) = (s16) (arg0->param * 2);
    return SetState(arg0, 2);
}

void func_sc06_022_801813C8(u8 *arg0) {
    D_sc06_022_801AD508[AF(arg0, u16, 2)]();
    UpdateModelRot((s32) arg0);
}

s32 func_sc06_022_80181418(StageActor *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        SpawnActorArg(0x311, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x14;
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc06_022_80181468(u8 *o, s32 a1) {
    u8 *c;
    s16 t;

    if (AF(AF(o, u8 *, 0x20), s16, 0x18) >= 0x800) {
        t = AF(o, s16, 0xE4);
        if (t == 0) {
            AF(o, s16, 0xE4) = AF(o, s16, 0xE6);
            c = (u8 *)SpawnPropFrom(o, 0x22);
            if (c != 0) {
                AF(c, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(c, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(c, s32, 0x14) = 0xFFFC0000;
                AF(c, s16, 0x34) = a1;
                AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(c, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
            return 1;
        }
        AF(o, s16, 0xE4) = t - 1;
    }
    return 0;
}

void func_sc06_022_80181550(StageActor *o) {
    u8 *t;

    if ((s16)((u16)o->pos[2].h.i - D_80126B66) < 0x140) {
        t = (u8 *)o->message;
        if (t != 0 && *(void (**)())t != 0) {
            (*(void (**)())t)();
        }
        func_sc06_022_8017FA1C(o);
    }
}

void func_sc06_022_801815CC(u8 *o) {
    if (TickTimer(o) != 0) {
        AF(o, s32, 0x1C) = 2;
        SetModelParts(AF(o, u8 *, 0x20), D_sc06_022_801AD304[AF(o, s16, 0x70)][AF(o, s16, 0xFE)]);
        AF(o, s16, 0xFE)++;
        if (AF(o, s16, 0xFE) >= 8) {
            func_sc06_022_8017FAFC(o);
        }
    }
}

void func_sc06_022_8018165C(void) {
}

void func_sc06_022_80181664(StageActor *o) {
    ModelObj *m;

    m = (u8 *)AllocActorModel();
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    m->type = 1;
    o->model->kind = 9;
    switch (o->param) {
    case 0:
        o->link = SpawnActorArg(0x2F9, 2, o->parent);
        break;
    case 1:
        o->link = SpawnActorArg(0x2F9, 3, o->parent);
        break;
    case 2:
    case 3:
        o->link = SpawnActorArg(0x2F9, o->param + 2, o);
        break;
    case 4:
    case 5:
        o->ext1 = SpawnActorArg(0x2F9, 6, o);
        break;
    case 6:
        break;
    }
    func_sc06_022_80180CB0((s32)o);
}

void func_sc06_022_80181744(StageActor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->ofs[2];
    if (temp_v0 != 0) {
        arg0->ofs[2] = (s16) (temp_v0 - 0x10);
        return;
    }
    func_sc06_022_801809D4((s32) arg0);
}

void func_sc06_022_80181780(StageActor *arg0, s32 arg1) {
    if (AF(AF(arg0->ext0, void *, 0x20), s32, 4) < 0) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    func_sc06_022_80180EE0((s32) arg0);
}

void func_sc06_022_801817D0(void) {
}

void func_sc06_022_801817D8(StageActor *o) {
    WMtx m;
    V3 v;
    ModelObj *c;
    s16 ang;

    c = (u8 *)AllocActorModel();
    o->model = c;
    if (c == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(c, &D_sc06_022_801AD438);
    o->model->unk04 |= 0x50000000;
    ang = (o->param - 3) * 0xE0;
    m = *(WMtx *)((u8 *)o->parent->model + 0x54);
    RotMatrixY(ang, &m);
    v.x = v.y = 0;
    v.z = -0xA0000;
    ApplyMatrixLV(&m, &v, (u8 *)o + 0x10);
    o->timer = 0x80;
    NextState(o);
}

void func_sc06_022_801818E4(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = MoveCollide(arg0);
    if (ActorSegmentDamagesPlayer(arg0, (s32) &D_sc06_022_801AD444, (s32) &D_800D3918, 0x40) == 0) {
        if (temp_s1 != 0) {
            SpawnEffect(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
            temp_v0 = SpawnPropFrom(arg0, 0x22);
            if (temp_v0 != 0) {
                AF(temp_v0, s16, 0x34) = 0x2000;
            }
            goto block_5;
        }
        if (TickTimer(arg0) != 0) {
            goto block_5;
        }
    } else {
block_5:
        FreeActor(arg0);
    }
}

void func_sc06_022_8018199C(u8 *arg0) {
    s16 temp_v1;
    void *temp_a0;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x108));
    MoveObject((s32) arg0, (s32) temp_a1);
    temp_v1 = AF(arg0, s16, 0xE0);
    if (AF(arg0, s16, 0xA) >= temp_v1) {
        AF(arg0, s16, 0xA) = temp_v1;
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0x400U;
        if (rand() & 1) {
            AF(AF(arg0, void *, 0x20), u16, 0x10) = 0xC00U;
        }
        func_sc06_022_80181394((s32) arg0);
    }
    func_sc06_022_80181468((s32) arg0, 0x4001);
}

void func_sc06_022_80181A4C(StageActor *arg0) {
    if (func_sc06_022_80181468(arg0, 0x2001) != 0) {
        AF(arg0, s16, 0xE6) = (s16) ((rand() & 0x7F) + 0x10);
    }
}

void func_sc06_022_80181A94(StageActor *arg0) {
    D_sc06_022_801BD214[arg0->state]();
    if (arg0->kind != 0) {
        func_sc06_022_801852E4((s32) arg0);
        func_sc06_022_801853B4((s32) arg0);
        DespawnIfFar((s32) arg0);
    }
}

void func_sc06_022_80181B04(u8 *o) {
    if (SetupActor(o, &D_sc06_022_801BCFEC[AF(o, u16, 0x70) & 0xF]) == 0) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, u8 *, 0xBC) = &D_sc06_022_801BD184;
    AF(o, s32, 0xB4) = -0x8AD;
    AF(o, s32, 0xC4) |= 2;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc06_022_801BD10C;
    func_80143994(o, 0x4000);
    AF(o, s32, 0x48) = 0x18000;
    switch (AF(o, u16, 0x70) & 0xF) {
    case 0:
        AF(o, s32, 0xE0) |= 1;
        AF(o, s16, 0xFE) = AF(AF(o, s16 *, 0x78), s16, 0) / 2;
        if (!(AF(o, s16, 0x70) & 0x8000)) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_sc06_022_801D40D8);
        }
        break;
    case 1:
        AF(o, s16, 2) = 0x13;
        D_sc06_022_801D45CC = 0x28;
        if (AF(o, s16, 0x70) & 0x8000) AF(o, s32, 0xE0) |= 0x400;
        break;
    case 2:
        AF(o, s16, 2) = 0x18;
        D_sc06_022_801D4424 = 0x28;
        break;
    case 3:
        AF(o, s16, 2) = 0x1F;
        if (!SpawnActorArg(0x27F, 5, o)) {
            RejectSpawn(o);
            return;
        }
        break;
    }
    SnapToGround(o);
    AF(o, s32, 0x38) = AF(o, s32, 4);
    AF(o, s32, 0x3C) = AF(o, s32, 8);
    AF(o, s32, 0x40) = AF(o, s32, 0xC);
    UpdateModelZYX(o);
}

void func_sc06_022_80181D20(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0xF) {
        SpawnHeadMarker((s32) arg0, -0x90);
    }
    if (TickTimer((s32) arg0) != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_022_80181D70(StageActor *o) {
    s32 r, e;
    o->timer = rand() % 64 + 0x80;
    o->accel[1] = 0x4650;
    r = rand() % 1024;
    e = o->workE8;
    o->workE8 = (rand() & 1) ? e + r : e - r;
    SetScript(o, &D_sc06_022_801D4BF8);
    o->state = 3;
    o->workE0 &= ~0x40;
}

void func_sc06_022_80181E38(u8 *o) {
    s32 r;
    s32 e;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    SetForwardVelocity(o, 0xFFFB0000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_022_801856F0(o) == 0) {
        func_sc06_022_80185878(o);
    }
    if (TargetInFront(o, 0x300) != 0) {
        if (DistSqToTarget(o) < 0x100000) {
            AF(o, s16, 2) = 4;
            return;
        }
    } else {
        if (DistSqToTarget(o) < 0x4000) {
            AF(o, s16, 2) = 0xF;
            return;
        }
    }
    if (AF(o, s32, 0xE0) & 0x40) return;
    if (TickTimer(o) == 0) return;
    r = rand() % 1024;
    e = AF(o, s32, 0xE8);
    AF(o, s32, 0xE8) = (rand() & 1) ? e + r : e - r;
    AF(o, s32, 0x1C) = rand() % 64 + 0x80;
}

void func_sc06_022_80181FA4(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D4140);
    arg0->accel[1] = 0x4650;
    arg0->state = 5;
}

void func_sc06_022_80181FE4(s32 arg0) {
    s32 t;
    s32 o;
    s32 d;

    o = TurnStepToTarget(arg0, 8);
    t = AF(arg0, s32, 0x20);
    AF(t, u16, 0x12) += o;
    SetForwardVelocity(arg0, -0x70000, t);
    if ((u16)(D_800B99DA % 10) == 0) {
        o = SpawnKind1C(arg0, 0);
        if (o != 0) {
            AF(AF(o, s32, 0xCC), s16, 0x18) = 0x5000;
            AF(AF(o, s32, 0xCC), s16, 0x1A) = 0x5000;
        }
    }
    func_sc06_022_801856F0(arg0);
    if (TargetInFront(arg0, 0x300) != 0) {
        d = DistSqToTarget(arg0);
        if (d <= 0xFFFFF) {
            if (d < 0x6400) {
                if (func_sc06_022_801858D8(arg0, 0) == 0 || d < D_sc06_022_801E1FB0) {
                    AF(arg0, s16, 2) = 8;
                }
            } else if ((u32)(d - 0x10001) <= 0x13FFE && TargetInFront(arg0, 0x100) != 0) {
                if (func_sc06_022_801858D8(arg0, 0) == 0) {
                    AF(arg0, s16, 2) = 0xA;
                } else if (d < D_sc06_022_801E1FB0) {
                    AF(arg0, s16, 2) = 8;
                }
            }
            return;
        }
    }
    AF(arg0, s16, 2) = 6;
}

void func_sc06_022_8018216C(StageActor *arg0) {
    arg0->timer = 0x20;
    arg0->state = 7;
    SetScript((s32) arg0, (s32) &D_sc06_022_801D40D8);
}

void func_sc06_022_801821A0(s32 arg0) {
    s32 d;

    if (TargetInFront(arg0, 0x300) != 0) {
        d = DistSqToTarget(arg0);
        if (d < 0x100000) {
            if (d < 0x6400) {
                AF(arg0, s16, 2) = 8;
                return;
            }
            AF(arg0, s16, 2) = 4;
            return;
        }
    } else if (DistSqToTarget(arg0) < 0x4000) {
        AF(arg0, s16, 2) = 15;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_022_80182228(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D41E8);
    arg0->state = 9;
    arg0->workE0 = (s32) ((arg0->workE0 | 2) & ~0x10);
}

void func_sc06_022_80182274(u8 *o) {
    s32 d;
    if (func_sc06_022_801851C4(o, 100) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
    }
    if (AF(o, u8 *, 0x90) == &D_sc06_022_801D41E8) {
        if (AF(o, s32, 0x94) == 0xB) {
            func_sc06_022_80187EF4(o, 0x8C0);
        }
    } else if (AF(o, s32, 0x94) == 8) {
        func_sc06_022_80187EF4(o, 0x8C0);
    }
    if (AF(o, u16, 0x72) & 0x4000) {
        if (TargetInFront(o, 0x300) != 0) {
            d = DistSqToTarget(o);
            if (d <= 0xFFFFF) {
                if (d < 0x4000) {
                    SetScript(o, &D_sc06_022_801D4B00);
                    AF(o, s32, 0xE0) &= ~0x10;
                } else if (d < 0x6400) {
                    if (!(AF(o, s32, 0xE0) & 0x10)) {
                        SetScript(o, &D_sc06_022_801D4B00);
                    } else {
                        SetScript(o, &D_sc06_022_801D41E8);
                        AF(o, s32, 0xE0) &= ~0x10;
                    }
                } else {
                    AF(o, s16, 2) = 4;
                }
            } else {
                AF(o, s16, 2) = 2;
            }
        } else {
            AF(o, s16, 2) = 6;
        }
    }
}

void func_sc06_022_801823B0(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D4B00);
    arg0->state = 0xB;
    arg0->stateCount = 0;
    arg0->vel[0] = (s32) (arg0->vel[0] * 2);
    arg0->vel[2] = (s32) (arg0->vel[2] * 2);
}

void func_sc06_022_80182404(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (func_sc06_022_801851C4(arg0, 0x64) == 1) {
        g_PlayerHitKind = 4;
    }
    var_v1 = AF(arg0, s32, 0x10) * 0x1F;
    if (var_v1 < 0) {
        var_v1 += 0x1F;
    }
    AF(arg0, s32, 0x10) = (s32) (var_v1 >> 5);
    var_v0 = AF(arg0, s32, 0x18) * 0x1F;
    if (var_v0 < 0) {
        var_v0 += 0x1F;
    }
    AF(arg0, s32, 0x18) = (s32) (var_v0 >> 5);
    func_sc06_022_801856F0(arg0);
    if (!((D_800B99DA % 6) & 0xFFFF)) {
        temp_v0 = SpawnKind1C(arg0, 0);
        if (temp_v0 != 0) {
            AF(AF(temp_v0, void *, 0xCC), s16, 0x18) = 0x5000;
            AF(AF(temp_v0, void *, 0xCC), s16, 0x1A) = 0x5000;
        }
    }
    if (AF(arg0, s32, 0x94) == 8) {
        func_sc06_022_80187EF4(arg0, 0x8C0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, s32, 0x94) == 0xE) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc06_022_80182554(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D4430);
    arg0->state = 0xD;
    arg0->timer = 0x28;
}

void func_sc06_022_80182594(s32 arg0) {
    s32 sp10;

    FaceHelper(arg0, (s32) &D_sc06_022_801BD0BC, (s32) &sp10);
    if (((TickTimer(arg0) != 0) && !(g_PlayerFlags & 2)) || (func_sc06_022_80187318((s32) &sp10, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400) == 0)) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc06_022_80182610(u8 *o) {
    u8 *t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer(o) != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        AF(o, s32, 0xE8) = HeadingTo(o + 4, t + 4);
        break;
    case 1:
        if (AF(o, s16, 0x98) != 0) return;
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801C35D4);
        SetScript(o, &D_sc06_022_801D4140);
        AF(o, s32, 0x1C) = 0x200;
        AF(o, s32, 0xE0) &= ~4;
        AF(o, s16, 0x34)++;
        return;
    case 2:
        t = AF(o, u8 *, 0xD0);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEE) || TickTimer(o) != 0) {
            AF(o, s16, 2) = 4;
            AF(o, s32, 0xE0) &= ~1;
            return;
        }
        AF(o, s32, 0xE8) = HeadingTo(o + 4, t + 4);
        break;
    case 3:
        FreeActor(AF(o, u8 *, 0xD0));
        AF(o, u8 *, 0xD0) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801BFE10);
        SetScript(o, &D_sc06_022_801D4140);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s16, 2) = 5;
        AF(o, s32, 0xE0) |= 1;
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    if (AF(o, u16, 0x34) == 0) SetForwardVelocity(o, 0xFFF8D000);
    else SetForwardVelocity(o, 0xFFF90000);
    func_sc06_022_801856F0(o);
    if (PosDistSq(o + 4, t + 4) < 0x900) {
        if (AF(o, u16, 0x34) == 0) SetScript(o, &D_sc06_022_801D5040);
        AF(o, s16, 0x34)++;
    }
}

void func_sc06_022_80182890(s32 arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D40D8);
    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE8) = HeadingToTarget(arg0);
}

void func_sc06_022_801828D8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_a2;

    if (AF(arg0, u16, 0x34) == 0) {
        temp_v0 = TurnStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE8), 4);
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s16, 0x12) = (s16) ((u16) AF(temp_a2, s16, 0x12) + temp_v0);
        if (TargetInFront((s32) arg0, 0x200, (s32) temp_a2) != 0) {
            AF(arg0, s32, 0x1C) = 0xF;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            SpawnHeadMarker((s32) arg0, -0x90);
            return;
        }
        if (temp_v0 == 0) {
            AF(arg0, s16, 2) = 2;
        }
    } else if (TickTimer((s32) arg0, arg1, arg2) != 0) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc06_022_80182998(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_022_801D47C0);
    arg0->accel[1] = 0x4650;
    arg0->state = 0x12;
}

void func_sc06_022_801829D8(u8 *o) {
    s32 d = DistSqToTarget();
    if (d > 0x144000) {
        AF(o, s16, 2) = 0x13;
        return;
    }
    if (d > 0xC4000) {
        if (!(AF(o, s32, 0xE0) & 0x40)) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 8);
        }
    } else if ((u32)(d - 0x24000) <= 0xA0000) {
        AF(o, s16, 2) = 0x15;
        return;
    } else {
        if (!(AF(o, s32, 0xE0) & 0x40) && TickTimer(o) != 0) {
            AF(o, s32, 0xE8) = (HeadingToPlayer(o) + 0x800) & 0xFFF;
            AF(o, s32, 0x1C) = rand() % 64 + 0x40;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    }
    SetForwardVelocity(o, 0xFFF9C000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_022_801856F0(o) == 0) {
        func_sc06_022_80185878(o);
    }
}

void func_sc06_022_80182B3C(StageActor *arg0) {
    s32 *var_a1;

    arg0->state = 0x14;
    if (!(arg0->workE0 & 0x400)) {
        arg0->stateCount = 1;
        var_a1 = &D_sc06_022_801D4488;
    } else {
        arg0->stateCount = 0;
        var_a1 = &D_sc06_022_801BCEB4;
    }
    SetScript((s32) arg0, (s32) var_a1);
}

void func_sc06_022_80182B90(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc06_022_801D4488);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (DistSqToTarget(o) <= 0x24000) {
            if (!(AF(o, s32, 0xE0) & 0x400)) {
                AF(o, s16, 2) = 0x15;
            } else {
                SetScript(o, &D_sc06_022_801D4878);
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc06_022_801D47C0);
            AF(o, s32, 0x48) = 0x4650;
            AF(o, s16, 2) = 0x12;
        }
        break;
    }
}

void func_sc06_022_80182CA0(StageActor *arg0) {
    arg0->state = 0x16;
    if (!(arg0->workE0 & 0x400)) {
        SetScript((s32) arg0, (s32) &D_sc06_022_801D4488);
        arg0->stateCount = 4;
        arg0->timer = 0xF;
        return;
    }
    arg0->timer = 0x1E;
    arg0->stateCount = 0;
}

void func_sc06_022_80182D08(s32 arg0) {
    SV8 p;
    SMtx m;
    s32 d;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = TurnStepToTarget(arg0, 8);
        t = AF(arg0, s32, 0x20);
        AF(t, u16, 0x12) += d;
        if (TickTimer(arg0) == 0 && d != 0) {
            break;
        }
        SetScript(arg0, &D_sc06_022_801BCEB4);
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc06_022_801D44F0);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            if (IsOnScreen(arg0, 0xA000C8) == 0) {
                AF(arg0, s16, 2) = 0x14;
if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                    AF(arg0, u16, 0x34) = 1;
                    SetScript(arg0, &D_sc06_022_801D4488);
                } else {
                    AF(arg0, u16, 0x34) = 0;
                    SetScript(arg0, &D_sc06_022_801BCEB4);
                }
                break;
            }
            d = DistSqToTarget(arg0);
            if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                if (d >= 0x64000) {
                    AF(arg0, s16, 2) = 0x14;
if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                        AF(arg0, u16, 0x34) = 1;
                        SetScript(arg0, &D_sc06_022_801D4488);
                    } else {
                        AF(arg0, u16, 0x34) = 0;
                        SetScript(arg0, &D_sc06_022_801BCEB4);
                    }
                    break;
                }
            } else if ((u32) (d - 0x24000) > 0xA0000) {
                SetScript(arg0, &D_sc06_022_801D4878);
                AF(arg0, u16, 0x34)++;
                break;
            }
        }
        if (AF(arg0, s32, 0x94) < 8) {
            d = TurnStepToTarget(arg0, 8);
            AF(AF(arg0, s32, 0x20), u16, 0x12) += d;
        }
        if (AF(arg0, s32, 0x94) == 7) {
            GetPartLocalMatrix(arg0, 0xB, &m);
            LocalToWorld(&m, &D_sc06_022_801BD0CC, &p);
            func_sc06_022_80188204(arg0, &p);
            gte_SetRotMatrix((SMtx *) (AF(arg0, s32, 0x20) + 0x34));
            gte_ldclmv(&m);
            gte_rtir();
            gte_stclmv(&m);
            gte_ldclmv((u8 *) &m + 2);
            gte_rtir();
            gte_stclmv((u8 *) &m + 2);
            gte_ldclmv((u8 *) &m + 4);
            gte_rtir();
            gte_stclmv((u8 *) &m + 4);
            gte_SetTransMatrix((SMtx *) (AF(arg0, s32, 0x20) + 0x34));
            gte_ldlv0(m.t);
            gte_rtv0tr();
            gte_stlvnl(m.t);
            LocalToWorld(&m, &D_sc06_022_801BD0CC, &p);
            func_sc06_022_801873B0(arg0, &p, 0x282, 2, -0x120, 0);
            func_sc06_022_801873B0(arg0, &p, 0x282, 2, 0, 0);
            func_sc06_022_801873B0(arg0, &p, 0x282, 2, 0x120, 0);
            func_sc06_022_80187EF4(arg0, 0x8BD);
        }
        break;
    case 3:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc06_022_801D47C0);
            AF(arg0, s32, 0x48) = 0x4650;
            AF(arg0, s16, 2) = 0x12;
        }
        break;
    case 4:
        if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc06_022_801D44F0);
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    }
}

void func_sc06_022_80183188(u8 *o) {
    u8 *t;
    s32 v;
    if (AF(o, u16, 0x34) == 0) {
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer() != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        v = HeadingTo(o + 4, t + 4);
        AF(o, s32, 0xE8) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(o, 0xFFF8D000);
        func_sc06_022_801856F0(o);
        if (PosDistSq(o + 4, t + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_022_801D5040);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801C3FE8);
        SetScript(o, &D_sc06_022_801D47C0);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s16, 2) = 0x12;
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_022_801832FC(StageActor *arg0) {
    s32 r;
    s32 e;

    arg0->state = 0x19;
    SetScript((s32) arg0, (s32) &D_sc06_022_801D46F8);
    arg0->timer = rand() % 64 + 0x80;
    r = rand() % 1024;
    e = arg0->workE8;
    arg0->workE8 = (rand() & 1) ? e + r : e - r;
    arg0->accel[1] = 0x4650;
}

void func_sc06_022_801833B4(u8 *o) {
    s32 sp10[2];
    s32 t;
    t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    SetForwardVelocity(o, -0x43000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (!func_sc06_022_801856F0(o)) func_sc06_022_80185878(o);
    FaceHelper(o, &D_sc06_022_801BD0BC, sp10);
    if (func_sc06_022_80187318(sp10, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) && DistSqToTarget(o) < 0x64000) {
        AF(o, s16, 2) = 0x1C;
    } else if (TickTimer(o)) {
        AF(o, s16, 2) = 0x1A;
    }
}

void func_sc06_022_80183494(StageActor *arg0) {
    arg0->state = 0x1B;
    SetScript((s32) arg0, (s32) &D_sc06_022_801D42B0);
    arg0->timer = 0x20;
}

void func_sc06_022_801834D4(s32 arg0) {
    s32 sp10[2];

    FaceHelper(arg0, (s32) &D_sc06_022_801BD0BC, (s32) sp10);
    if (func_sc06_022_80187318((s32) sp10, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x380) != 0 && DistSqToTarget(arg0) <= 0x63FFF) {
        AF(arg0, s16, 2) = 0x1C;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 0x18;
    }
}

void func_sc06_022_80183554(StageActor *arg0) {
    arg0->state = 0x1D;
    arg0->stateCount = 0;
    arg0->timer = 0xF;
    SetScript((s32) arg0, (s32) &D_sc06_022_801D42B0);
}

void func_sc06_022_8018358C(u8 *o) {
    MTX m;
    V3 vec;
    SV8 rot;
    SV8 pos;
    SV8 face;
    u8 *c;
    s32 i;
    if (AF(o, u16, 0x34) == 0) {
        if (!TickTimer()) {
            return;
        }
        SetScript(o, &D_sc06_022_801D4328);
        AF(o, s16, 0x34)++;
    }
    if (AF(o, s32, 0x94) < 0xE) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 8);
    }
    if (AF(o, s32, 0x94) == 0xE) {
        func_sc06_022_80187414(o, &D_sc06_022_801BD0D4, &pos, 0xB);
        func_sc06_022_801873B0(o, &pos, 0x282, 0, 0, 0);
        c = SpawnPropFrom(o, 0x22);
        if (c != 0) {
            AF(c, s16, 0x34) = 0x7002;
            AF(c, s16, 6) = pos.x;
            AF(c, s16, 0xA) = pos.y;
            AF(c, s16, 0xE) = pos.z;
            AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC006;
        }
        rot.x = 0x40;
        rot.y = AF(AF(o, u8 *, 0x20), s16, 0x12);
        rot.z = 0;
        RotMatrixZYX(&rot, &m);
        for (i = 0; i < 5; i++) {
            c = SpawnPropFrom(o, 0x22);
            if (c != 0) {
                vec.x = vec.y = 0;
                vec.z = (rand() % 5 + 4) << 16;
                ApplyMatrixLV(&m, &vec, c + 0x10);
                AF(c, s16, 0x34) = ((rand() % 2 + 2) << 12) | 1;
                AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC006;
                func_sc06_022_80187414(o, &D_sc06_022_801BD0E4 + i * 8, &pos, 0xB);
                AF(c, s16, 6) = pos.x;
                AF(c, s16, 0xA) = pos.y;
                AF(c, s16, 0xE) = pos.z;
            }
        }
        func_sc06_022_80187EF4(o, 0x8BE);
    }
    if (AF(o, u16, 0x72) & 0x4000) {
        FaceHelper(o, &D_sc06_022_801BD0BC, &face);
        if (DistSqToTarget(o) > 0x63FFF || func_sc06_022_80187318(&face, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) == 0) {
            AF(o, s16, 2) = 0x1B;
            SetScript(o, &D_sc06_022_801D42B0);
            AF(o, s32, 0x1C) = 0x20;
        }
    }
}

void func_sc06_022_80183860(u8 *o) {
    u8 *t;
    s32 v;
    if (AF(o, u16, 0x34) == 0) {
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer() != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        v = HeadingTo(o + 4, t + 4);
        AF(o, s32, 0xE8) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(o, 0xFFF8D000);
        func_sc06_022_801856F0(o);
        if (PosDistSq(o + 4, t + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_022_801D5040);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801C3BD0);
        AF(o, s16, 2) = 0x1D;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0xF;
        SetScript(o, &D_sc06_022_801D42B0);
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_022_801839D8(StageActor *arg0) {
    arg0->state = 0x20;
    SetScript((s32) arg0, (s32) &D_sc06_022_801D4640);
    arg0->timer = 0;
    arg0->workE4 = 0;
    arg0->accel[1] = 0x4650;
}

void func_sc06_022_80183A20(u8 *o) {
    SV8 x;
    SV8 w;
    s32 v;
    s32 *vp;
    s32 t;
    s32 r;
    s32 n;
    u8 *p;
    Player *q;
    s32 a;
    s32 base;
    q = &g_Player;
    p = o + 0xEC;
    if (TickTimer(o)) {
        vp = &v;
        a = rand() % 1024;
        base = AF(g_PlayerModel, s16, 0x12) + 0x800;
        if (!(rand() & 1)) {
            n = base - a;
        } else {
            n = base + a;
        }
        AngleToVec2(vp, n, rand() % 512 + 0x200);
        t = v;
        AF(p, s16, 0) = q->pos[0].h.i + t;
        AF(p, s16, 2) = q->pos[1].h.i;
        AF(p, s16, 4) = q->pos[2].h.i + (t >> 16);
        r = rand();
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x100) = r % 9 + 8;
    }
    if (!(AF(o, s32, 0xE0) & 0x40)) {
        AF(o, s32, 0xE8) = HeadingToPoint(o + 4, p);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), AF(o, s16, 0x100));
    SetForwardVelocity(o, 0xFFFA0000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_022_801856F0(o) == 0) {
        func_sc06_022_80185878(o);
        w.x = w.y = 0;
        w.z = -0x100;
        LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &w, p);
    }
    if (D_800B99DA % 40 == 0) {
        if (!(AF(o, s32, 0xE0) & 0x80)) {
            func_sc06_022_80187414(o, &D_sc06_022_801BD0DC, &x, 0xB);
            func_sc06_022_801873B0(o, &x, 0x282, 1, 0, 0);
            AF(o, s32, 0xE0) |= 0x80;
        }
    }
    if (PosSVecDistSq(o + 4, p) < 0x400) {
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_022_80183CC0(u8 *o) {
    u8 *p;
    s32 e;
    s32 t;

    if (AF(o, u16, 0x34) == 0) {
        p = AF(o, u8 *, 0xCC);
        if (p == 0 || AF(p, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer(o)) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        e = HeadingTo(o + 4, p + 4);
        AF(o, s32, 0xE8) = e;
        t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), e, 8);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
        SetForwardVelocity(o, -0x73000);
        func_sc06_022_801856F0(o);
        if (PosDistSq(o + 4, p + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_022_801D5040);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, s32, 0x20), &D_sc06_022_801C43EC);
        AF(o, s16, 2) = 0x20;
        SetScript(o, &D_sc06_022_801D4640);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s32, 0x1C) = 0;
        AF(o, s32, 0xE4) = 0;
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_022_80183E3C(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc06_022_801850CC();
    }
}

void func_sc06_022_80183E6C(u8 *o) {
    SV8 p;
    SV8 q;
    s32 t;

    if (!(AF(o, s32, 0xE0) & 0x40)) {
        if (GroundDistSqToPlayer() <= 0x63FFF && TickTimer(o)) {
            AF(o, s32, 0xE8) = (HeadingToPlayer(o) + 0x800) & 0xFFF;
            AF(o, s32, 0x1C) = rand() % 64 + 0x40;
        }
    }
    t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    AF(o, s32, 0xE0) &= ~0x40;
    SetForwardVelocity(o, -0x73000);
    if (!func_sc06_022_801856F0(o)) func_sc06_022_80185878(o);
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    ProjectPoint(&p, &q);
    if ((q.x < 0 ? -q.x : q.x) > 0x104 || (q.y < 0 ? -q.y : q.y) > 0xC8) {
        DespawnActor(o);
    }
}

void func_sc06_022_80183FEC(u8 *o) {
    SV8 v;
    s16 d;
    u8 *p;
    TakeDamage();
    AF(o, s32, 0x1C) = 0;
    AF(o, u16, 0x5C) &= ~1;
    StopWithGravity(o);
    d = (AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30)) >> 12;
    if (d <= 0) {
        d = 1;
    }
    if (AF(o, s32, 0xE0) & 1) {
        FaceHelper(o, &D_sc06_022_801BD0BC, &v);
        if (func_sc06_022_80187318(&v, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x400)) {
            SpawnEffect(6, o, AF(o, s16, 0x7C), AF(o, s16, 0x7E), AF(o, s16, 0x80), 0, 0);
            AF(o, s16, 0xFE) -= d;
            if (AF(o, s16, 0xFE) <= 0) {
                func_sc06_022_80187414(o, &D_sc06_022_801BD0BC + 8, &v, 0xC);
                func_sc06_022_801873B0(o, &v, 0x27F, 0, 0, 0);
                AF(o, s32, 0x58) = (s32)&D_sc06_022_801BCFDC | 0x40000000 | 0x20000000;
                AF(o, s32, 0xE0) &= ~1;
                SetModelParts(AF(o, u8 *, 0x20), &D_sc06_022_801C35D4);
            }
            SetLocalVelocity(o, &D_sc06_022_801BD144);
            AF(o, s16, 0x34) = 3;
            return;
        }
    }
    if (AF(o, u16, 0x5E) != 0x1D) {
        if (AF(o, u8, 0xC8)) {
            GainStat3FromActor(o);
        }
        if (AF(o, u8, 0xC9)) {
            GainStat2FromActor(o);
        }
    }
    AF(o, s16, 0x76) -= d;
    if (AF(o, s16, 0x76) <= 0) {
        SetReactionStep(o, 0xC);
        return;
    }
    AF(o, s16, 0x98) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
    UpdateModelZYX(o);
    func_sc06_022_80187EF4(o, 0x9B7);
    switch (AF(o, u16, 0x5E)) {
    case 1: case 2: case 3: case 4: case 6: case 7: case 11: case 12: case 16:
    case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26:
    case 35: case 36: case 37: case 40:
    case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50:
        AF(o, s16, 0x34) = 4;
        SetScript(o, D_sc06_022_801BD2A4[AF(o, u16, 0x70) & 0xF]);
        return;
    case 8:
        SetScript(o, D_sc06_022_801BD2A4[AF(o, u16, 0x70) & 0xF]);
        p = &D_sc06_022_801BD124;
        break;
    case 5: case 29: case 32: case 38: case 42:
        p = &D_sc06_022_801BD134;
        SetScript(o, &D_sc06_022_801D4CC0);
        AF(o, s32, 0xE0) |= 8;
        AF(o, u16, 0xAE) |= 1;
        func_sc06_022_80185578(o, -0x8000);
        break;
    default:
        p = &D_sc06_022_801BD114;
        break;
    }
    SetLocalVelocity(o, p);
    AF(o, s16, 0x34) = 0;
}

void func_sc06_022_80184304(s32 arg0) {
    s32 f;
    s32 e;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc06_022_80184F88(arg0);
        return;
    }
    if ((AF(arg0, s32, 0xE0) & 8) && (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0)) {
        DamageActorsNear(arg0, 0x50, AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        f = MoveCollidePassable(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            AF(arg0, u16, 0x34)++;
            if (AF(arg0, s32, 0x90) == (s32) &D_sc06_022_801D4CC0) {
                func_sc06_022_80187EF4(arg0, 0x9B8);
            }
            break;
        }
        if (f & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 2;
        }
        if (AF(arg0, u8, 0xC1) == 0xB && AF(arg0, s32, 0x14) >= 0) {
            SetReactionStep(arg0, 6);
        }
        break;
    case 1:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 2;
            break;
        }
        if (!(f & 0x6000)) {
            goto tail_d;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 0x11) {
            break;
        }
        if (AF(arg0, s32, 0x90) == (s32) &D_sc06_022_801D4CC0) {
            func_sc06_022_80187EF4(arg0, 0x9B8);
        }
tail76:
        if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { EndReaction(arg0); }
        break;
    case 2:
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            goto tail76;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 0x3D) {
            break;
        }
        goto tail_d;
    case 3:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x6000) {
            goto x3;
        }
tail_d:
        SetReactionStep(arg0, 0xD);
        break;
x3:
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 5) {
            break;
        }
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5C) = AF(AF(arg0, s32, 0x78), s16, 2);
        AF(arg0, s16, 0x5E) = 0;
        if (AF(arg0, u16, 2) != 0xD) {
            AF(arg0, s16, 2) = 2;
        }
        break;
    case 4:
        f = MoveCollidePassable(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if ((f & 0x2000) && AF(arg0, s16, 0x98) == 0) {
            if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { EndReaction(arg0); }
        }
        break;
    case 5:
        break;
    }
}

void func_sc06_022_80184768(s32 arg0) {
    s32 pad[2];
    TakeDamageAndRecoil();
    SetLocalVelocity(arg0, (s32) &D_sc06_022_801BD134);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) | 8);
    SetScript(arg0, (s32) &D_sc06_022_801D4CC0);
    func_sc06_022_80185578(arg0, 0);
}

void func_sc06_022_801847CC(StageActor *arg0) {
    SetScript((s32) arg0, D_sc06_022_801BD2B4[((u16)arg0->param & 0xF)]);
    arg0->workE4 = 0;
}

void func_sc06_022_80184818(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, u8, 0xC1) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) (rcos(AF(arg0, s32, 0xE4) << 7, arg1, arg2, arg3) >> 5);
        AF(AF(arg0, void *, 0x20), s16, 0x14) = (s16) (rsin(AF(arg0, s32, 0xE4) << 7) >> 4);
        UpdateModelYXZ((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
    }
}

void func_sc06_022_80184894(StageActor *arg0) {
    TakeDamageAndRecoil();
    arg0->ofs[1] = -0x30;
    SetScript((s32) arg0, D_sc06_022_801BD174[((u16)arg0->param & 0xF)]);
}

void func_sc06_022_801848E4(u8 *arg0) {
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s32, 0xE0) |= 0x28;
    AF(arg0, u16, 0xAE) |= 1;
    AF(arg0, s32, 0xC4) |= 4;
    func_sc06_022_801849BC();
}

void func_sc06_022_80184928(StageActor *arg0) {
    arg0->hitState = 0;
    HideModel((s32) arg0);
    arg0->timer = 0xA;
    func_sc06_022_80187094((s32) arg0, ((u16)arg0->param & 0xF) + 2);
}

void func_sc06_022_80184970(StageActor *arg0) {
    if (func_sc06_022_801874E0(arg0, 0x60, 0xA) == 1) {
        DropItem(arg0);
        func_sc06_022_80184F88(arg0);
    }
}

void func_sc06_022_801849BC(u8 *o) {
    AF(o, u8, 0xC2) = 0;
    AF(o, u8, 0xC3) = 0;
    AF(o, s32, 0x1C) = 0;
    TakeDamageAndRecoil();
    if (AF(o, u16, 0x5E) == 9 || AF(o, u16, 0x5E) == 0x1C) {
        SetLocalVelocity(o, &D_sc06_022_801BD2C4);
    } else {
        SetLocalVelocity(o, &D_sc06_022_801BD2D4);
    }
}

void func_sc06_022_80184A28(s32 arg0) {
    s32 f;
    u8 unused[8];
    s32 s;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc06_022_80184F88(arg0);
        return;
    }
    if (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0) {
        DamageActorsNear(arg0, 0x50, AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        func_sc06_022_80184E14(arg0, &D_sc06_022_801BD2E4);
        AF(arg0, u8, 0xC2)++;
    case 1:
        AF(AF(arg0, s32, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            goto tail_d;
        }
        f = MoveCollidePassableAt(arg0, &D_sc06_022_801BD2E4);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            goto tail_b;
        }
        if (f & 0x2000) {
            AF(arg0, u8, 0xC2) = 2;
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = -0xD0000;
            AF(arg0, s32, 0x1C) = 0;
            func_sc06_022_80187EF4(arg0, 0x9B8);
        }
        break;
    case 2:
        AF(AF(arg0, s32, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            goto tail_d;
        }
        s = AF(arg0, s32, 0x14);
        f = MoveCollidePassableAt(arg0, &D_sc06_022_801BD2E4);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            goto tail_b;
        }
        if (f & 0x2000) {
            SpawnKind1C(arg0, 1);
            AF(arg0, u8, 0xC2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0x14) = -s / 3;
            AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        if (AF(arg0, u8, 0xC3) & 1) {
            f = MoveOnGround(arg0);
            if (f & 0x8000) {
                AF(arg0, s32, 0x18) = 0;
                AF(arg0, s32, 0x10) = 0;
            }
            if (f & 0x6000) {
                goto c78;
            }
            goto tail_d;
        } else {
            f = MoveCollidePassable(arg0);
            if (f & 0x8000) {
                AF(arg0, s32, 0x18) = 0;
                AF(arg0, s32, 0x10) = 0;
            }
            if (f & 0x4000) {
            tail_b:
                StopWithGravity(arg0);
                AF(arg0, u8, 0xC2) = 4;
                break;
            }
            if (f & 0x2000) {
                AF(arg0, u8, 0xC3) |= 1;
                func_sc06_022_80187EF4(arg0, 0x9B8);
            }
        }
    c78:
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x11) {
            break;
        }
        if (!(f & 0x6000)) {
            goto tail_d;
        }
        if (AF(arg0, s16, 0x76) > 0) {
            goto tail_c;
        }
        SetReactionStep(arg0, 6); break;
    case 4:
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { tail_c: EndReaction(arg0); } break;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x3D) {
            break;
        }
    tail_d:
        SetReactionStep(arg0, 0xD);
        break;
    }
}

void func_sc06_022_80184E14(u8 *o, SV8 *v) {
    SV8 a;
    SV8 b;
    SV8 c;
    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    b = a;
    b.x += v->x;
    b.y += v->y;
    b.z += v->z;
    c = b;
    CollidePath(&a, &b, 1);
    b.x -= v->x;
    b.y -= v->y;
    b.z -= v->z;
    AF(o, s16, 0x3A) = b.x;
    AF(o, s16, 0x3E) = b.y;
    AF(o, s16, 0x42) = b.z;
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xA) = b.y;
    AF(o, s16, 0xE) = b.z;
}

void func_sc06_022_80184F68(s32 arg0) {
    func_sc06_022_80187EF4(arg0, 0x9B7);
}

s32 func_sc06_022_80184F88(StageActor *arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = (u16)arg0->param & 0xF;
    if (temp_v1 != 1) {
        if (temp_v1 < 2) {
            var_a0 = 0x1F;
            if (temp_v1 != 0) {

            } else {
                goto block_7;
            }
        } else {
            var_a0 = 0x21;
            if (temp_v1 != 2) {

            } else {
                goto block_7;
            }
        }
    } else {
        var_a0 = 0x20;
block_7:
        GiveItem(var_a0);
    }
    GainStat0FromActor(arg0);
    return DespawnActor(arg0);
}

void func_sc06_022_8018500C(StageActor *arg0) {
    s32 temp_v1;
    ModelObj *temp_v0;
    u16 t;

    temp_v1 = arg0->workE0;
    arg0->stateCount = 0;
    if (!(temp_v1 & 8)) {
        func_sc06_022_801850CC();
    } else {
        if (temp_v1 & 0x20) {
            func_sc06_022_80185578((s32) arg0, -0x8000);
        }
        arg0->state = 0x22;
        SetScript((s32) arg0, (s32) &D_sc06_022_801D50C8);
    }
    temp_v0 = arg0->model;
    temp_v0->rot.vz = 0;
    temp_v0->rot.vx = 0;
    t = arg0->init->hitState;
    arg0->workE0 = (s32) ((arg0->workE0 & ~0x2A) | 0x400);
    arg0->hitCode = 0;
    arg0->hitMask = (u16) (arg0->hitMask & 0xFFFE);
    arg0->reactOpts = (s32) ((s32)arg0->reactOpts & ~4);
    arg0->hitState = t;
}

void func_sc06_022_801850CC(StageActor *o) {
    s32 e = o->workE0;
    if (!(e & 4)) {
        if (e & 0x800) {
            o->state = 0xE;
            SetScript(o, &D_sc06_022_801D4E18);
        } else if (!(e & 1) && (s32)o->ext1 != 0) {
            o->state = 0xE;
            o->stateCount = 2;
            o->timer = 0x200;
            SetScript(o, &D_sc06_022_801D4140);
        } else {
            o->state = D_sc06_022_801BD154[(u16)o->param & 0xF];
        }
    } else {
        o->state = D_sc06_022_801BD164[(u16)o->param & 0xF];
        SetScript(o, &D_sc06_022_801D4E18);
        o->timer = 0x200;
    }
}

s32 func_sc06_022_801851C4(StageActor *o, s32 k) {
    s32 m[8];
    SV8 a;
    SV8 b;
    u8 unused[8];
    s32 flag;
    GetPartWorldMatrix(o, 0xB, m);
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc06_022_801BD2EC[0], &a, &flag);
    RotTransSV(&D_sc06_022_801BD2EC[1], &b, &flag);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
        HitPlayer(1, 1, o->model->rot.vy, k, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

s32 func_sc06_022_801852E4(u8 *o) {
    s32 sp10[2];
    s32 r;
    if (!(AF(o, s32, 0xE0) & 1)) return 0;
    if (AF(o, u16, 2) == 1) return 0;
    if (AF(o, u16, 2) == 0xD) return 0;
    if (!(g_PlayerFlags & 2)) return 0;
    if (DistSqToTarget(o) > 0x10000) return 0;
    if ((r = func_sc06_022_80187460(o, 0x380)) != 0) {
        FaceHelper(o, &D_sc06_022_801BD0BC, sp10);
        if (func_sc06_022_80187318(sp10, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) == 0) return 0;
        AF(o, u16, 2) = 0xC;
        r = 1;
    }
    return r;
}

void func_sc06_022_801853B4(u8 *o) {
    typedef struct { s32 v; } W;
    SV8 b;
    SV8 a;
    W d;
    u8 *p;
    s32 i;
    s32 z;
    s32 w;
    s32 y;
    p = &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (o == p) continue;
        switch (AF(p, u16, 0)) {
        case 0x27A:
            if (DistSq(o + 4, p + 4) < 0x6400) {
                d = ((W (*)())AngleToVec2)(HeadingTo(o + 4, p + 4), 0xA1);
                a.x = AF(p, s16, 6);
                a.y = AF(p, s16, 0xA);
                a.z = AF(p, s16, 0xE);
                a.x += d.v;
                a.z += d.v >> 16;
                a.y = AF(o, s16, 0xA);
                b.x = AF(o, s16, 0x3A);
                b.y = AF(o, s16, 0x3E);
                b.z = AF(o, s16, 0x42);
                if (!(CollidePath(&b, &a, 0) & 0x2000)) {
                    RestorePrevPos(o);
                } else {
                    AF(o, s16, 6) = a.x;
                    AF(o, s16, 0xA) = a.y;
                    AF(o, s16, 0xE) = a.z;
                }
                return;
            }
            break;
        case 0x2F4: {
            u8 unused[8];
            z = AF(p, s16, 0xE);
            w = (s16)z;
            do {
                y = AF(o, s16, 0xE);
                if (z + 0x10 < y) {
                    DespawnActor(o, w);
                    return;
                }
            } while (0);
            if (z - 0x60 < y) {
                AF(o, s16, 0xE) = w - 0x60;
            }
            }
            break;
        }
    }
}

s32 func_sc06_022_80185578(StageActor *o, s32 a1) {
    s16 arg1 = a1;
    SV8 buf;
    s16 n;
    s32 flags;
    u8 *r;

    n = (u16)o->param & 0xF;
    flags = o->workE0;
    if (flags & 4) return 0;
    switch (n) {
    case 0:
        if (flags & 1) {
            func_sc06_022_80187414(o, &D_sc06_022_801BD0C4, &buf, 0xC);
            r = func_sc06_022_801873B0(o, &buf, 0x27F, (s16)arg1, 0, 0);
            o->ext1 = r;
            o->workE0 &= ~1;
            if (r) AF(o, s16, 0xEE) = AF(r, s16, 0x36);
        }
    case 1:
    case 2:
    case 3:
        func_sc06_022_80187414(o, &D_800D3918, &buf, 0xB);
        r = func_sc06_022_801873B0(o, &buf, 0x27F, (s16)(arg1 | (n + 1)), 0, 0);
        o->ext0 = r;
        o->workE0 |= 4;
        SetModelParts(o->model, D_sc06_022_801BD2FC[n]);
        if (r) AF(o, s16, 0xEC) = AF(r, s16, 0x36);
        break;
    }
    return 1;
}

s32 func_sc06_022_801856F0(Mover *arg0, s32 arg1) {
    s32 t;
    s32 m;

    t = MoveOnGround(arg0);
    func_sc06_022_80185750(arg0, t);
    if (t & 0x2000) {
        m = t & 0x8000;
        return m == 0;
    }
    RestorePrevPos(arg0);
    return 0;
}

void func_sc06_022_80185750(u8 *o, s32 k0) {
    u8 k = k0;
    if ((AF(o, s16, 0x70) & 0x8000) && k == 0x24) {
        if (AF(o, u8 *, 0x90) == &D_sc06_022_801D4140) {
            if (D_800B99DA % 3 == 0) { SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14); }
        } else if (AF(o, u8 *, 0x90) == &D_sc06_022_801D4B00 && AF(o, u16, 2) == 0xB) {
            SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14);
        } else if ((AF(o, u8 *, 0x90) == &D_sc06_022_801D4BF8 || AF(o, u8 *, 0x90) == &D_sc06_022_801D47C0) && D_800B99DA % 6 == 0) {
            SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14);
        }
    }
}

void func_sc06_022_80185878(s32 arg0) {
    if (func_sc06_022_801858D8(arg0, 2) == 0) {
        AF(arg0, s32, 0xE8) += 0x40;
    } else {
        AF(arg0, s32, 0xE8) -= 0x40;
    }
    AF(arg0, s32, 0xE0) |= 0x40;
}

s32 func_sc06_022_801858D8(u8 *o, s32 i) {
    SV8 d;
    SV8 a;
    SV8 b;
    s32 r;
    ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, (SV8 *)&D_sc06_022_801BD30C + i, &d);
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    b.x += d.x;
    b.y += d.y;
    b.z += d.z;
    r = CollidePath(&a, &b, 0);
    D_sc06_022_801E1FB0 = SVecDistSq(&a, &b);
    return r != 0x2000;
}

void func_sc06_022_801859B8(StageActor *arg0) {
    D_sc06_022_801BD34C[arg0->state]();
}

void func_sc06_022_801859F4(StageActor *o) {
    MTX m;
    SV8 r;
    V3 v;
    ModelObj *a;
    s32 s;

    a = AllocActorModel();
    o->model = a;
    if (a == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(a, D_sc06_022_801BD324[(u16)o->param & 0xF]);
    o->work10A = (s16)o->parent->id;
    if (((u16)o->param & 0xF) == 4) {
        o->model->pose = &D_sc06_022_811BD33C;
    }
    if (((u16)o->param & 0xF) == 5) {
        o->state = 2;
        return;
    }
    v.x = v.y = 0;
    v.z = -0x180000;
    s = rand() % 128;
    if (!(rand() & 1)) {
        r.x = s - 0x380;
    } else {
        r.x = -0x380 - s;
    }
    r.y = (u16)o->parent->model->rot.vy + 0x800;
    r.z = 0;
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &v, (u8 *)o + 0x10);
    o->accel[1] = 0x18000;
    o->unkFC = rand() & 0xF0;
    o->workFE = rand() & 0x7F;
    o->work100 = rand() & 0x30;
    o->timer = 0;
    o->state++;
}

void func_sc06_022_80185B80(u8 *o) {
    s32 t;
    if (AF(o, s16, 0xA) >= 0x10) {
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0xFC);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0xFE);
        if (MoveCollideAt(o, &D_sc06_022_801BD358[AF(o, u16, 0x70) & 0xF]) & 0x2000) {
            if (++AF(o, s32, 0x1C) >= 4) {
                if ((AF(AF(o, u8 *, 0x20), u16, 0x10) & 0xFFF) > 0x800) {
                    AF(o, s16, 0x102) = 0xC00;
                } else {
                    AF(o, s16, 0x102) = 0x400;
                }
                t = AF(o, u16, 0x70) & 0xF;
                if (t < 4 && t != 0) {
                    AF(o, s16, 0x102) += 0x400;
                }
                AF(o, s32, 0x1C) = 0x1E;
                AF(o, s16, 0x34)++;
            } else {
                AF(o, s32, 0x14) = -(0x80000 / AF(o, s32, 0x1C));
                SpawnKind1C(o, 1);
            }
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x10), AF(o, s16, 0x102), 4);
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34)++;
            if (AF(o, s16, 0x70) & 0x8000) {
                AF(o, s16, 0x34)++;
            } else if ((AF(o, s16, 0x70) & 0xF) == 4) {
                AF(o, s16, 0x34) = 4;
                AF(o, s32, 0x1C) = 0x1E;
            }
        }
        break;
    case 2:
        ToggleModel(o);
        if (TickTimer(o) == 1) {
            FreeActor(o);
        }
        break;
    case 3:
        if (AF(AF(o, u8 *, 0x64), s16, 0x36) != AF(o, s16, 0x10A) && AF(o, s32, 0xE0) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34) = ((AF(o, u16, 0x70) & 0xF) == 4) ? 4 : 2;
            AF(o, s32, 0xE0) = 1;
        }
        break;
    case 4:
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 10;
            AF(o, s16, 0x34)++;
            HideModel(o);
            func_sc06_022_80187094(o, 1);
        }
        break;
    case 5:
        if (func_sc06_022_801874E0(o, 0x60, 0xA0) == 1) {
            FreeActor(o);
        }
        break;
    }
}

void func_sc06_022_80185E64(StageActor *o) {
    StageActor *par;
    u8 *d;
    u8 *s;
    s32 v;
    par = o->parent;
    if ((s16)par->id != o->work10A) {
        FreeActor();
        return;
    }
    if (par->workE0 & 4) {
        HideModel(o);
        return;
    }
    s = (u8 *)par->model->pose;
    d = (u8 *)o + 0xFC;
    if (s != 0) {
        if ((u32)s & 0x1000000) {
            o->work102 = AF(((u8 *)((u32)s & ~0x1000000)), u16, 0x66);
            v = AF(((u8 *)((u32)s & ~0x1000000)), s32, 0x60);
            o->work104 = (u8)(v >> 8) | ((v & 0xF) << 8);
            o->work106 = ((v >> 16) & 0xFF) | ((v & 0xF0) << 4);
            o->unkFC = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x63);
            o->workFE = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x64);
            o->work100 = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x65);
        } else {
            AF(o, S12, 0xFC) = AF(s, S12, 0x90);
        }
        o->model->pose = d;
    }
    if (par->workE0 & 0x80) {
        if (o->stateCount == 0) {
            o->work108 += 0x40;
            if (o->work108 > 0x200) {
                o->work108 = 0x200;
                o->stateCount++;
            }
        } else {
            o->work108 -= 0x80;
            if (o->work108 < 0) {
                o->work108 = 0;
                o->stateCount = 0;
                par->workE0 &= ~0x80;
            }
        }
    }
    AF(d, s16, 6) += o->work108;
    o->pos[0].w = par->pos[0].w;
    o->pos[1].w = par->pos[1].w;
    o->pos[2].w = par->pos[2].w;
    AF(o, SV8, 0x50) = AF(par, SV8, 0x50);
    AF(o->model, SV8, 0x10) = AF(par->model, SV8, 0x10);
    AF(o->model, SV8, 0x18) = AF(par->model, SV8, 0x18);
    o->model->unk04 = (s32)par->model->unk04;
    o->model->flags = (s16)par->model->flags;
}

void func_sc06_022_8018611C(StageActor *arg0) {
    D_sc06_022_801BD4A4[arg0->state]();
}

void func_sc06_022_80186158(StageActor *o) {
    ModelObj *v;
    switch ((u16)o->param & 0xF) {
    case 0:
        if (SetupActor(o, &D_sc06_022_801BD3B4) == 0) {
            return;
        }
        o->model->pose = (u8 *)o + 0xE8;
        o->work104 = 0x78;
        func_sc06_022_801862C8(o);
        func_80143994(o, 0x1800);
        break;
    case 1:
        if (SetupActor(o, &D_sc06_022_801BD3E8) == 0) {
            return;
        }
        o->work104 = 0xA0;
        if (!(o->param & 0x8000)) {
            o->state = 3;
            break;
        }
        o->state = 5;
        func_80143994(o, 0x1800);
        break;
    case 2:
        v = AllocActorModel();
        o->model = v;
        if (v == 0) {
            RejectSpawn(o);
            break;
        }
        func_8001CA1C(v, &D_sc06_022_801BD388);
        o->model->scale.vx = 0x14CC;
        o->model->scale.vy = 0x1199;
        o->model->unk04 |= 0x58000000;
        o->model->flags |= 0x10;
        func_sc06_022_80186B94(o);
        break;
    }
}

void func_sc06_022_801862C8(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x18;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x80;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, -0x100000);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_022_80186330(u8 *o) {
    u8 *p;
    SV8 v;
    if (AF(o, s16, 0xA) >= 0x10) {
        FreeActor(o);
        return;
    }
    if (ActorSegmentDamagesPlayer(o, D_sc06_022_801BD41C, D_sc06_022_801BD41C + 8, 0x78) == 1 || (AF(o, u16, 0x5C) & 1)) {
        func_sc06_022_80187094(o, 1);
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x10) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x10), 0, 0x18);
        if (MoveCollidePassable(o) != 0) {
            AF(o, s16, 2) = 9;
            func_sc06_022_80187094(o, 1);
            return;
        }
        if (TickTimer(o)) {
            AF(o, u16, 0xF4) = g_PlayerTarget;
            AF(o, u16, 0xF6) = D_80126CB6;
            AF(o, u16, 0xF8) = D_80126CB8;
            AF(o, s16, 0x34)++;
            AF(o, s32, 0x1C) = 0x3C;
        }
        return;
    case 1:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x20);
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 0x5A;
            AF(o, s16, 0x34)++;
        }
    case 2:
        AF(o, s16, 0xF2) -= 0x100;
        SetForwardVelocity(o, 0xFFEC0000);
        if (MoveCollidePassable(o) != 0 || (AF(o, u16, 0x34) == 2 && TickTimer(o) == 1)) {
            AF(o, s16, 2) = 9;
            func_sc06_022_80187094(o, 1);
            return;
        }
        p = SpawnProp(0x80);
        if (p != 0) {
            FaceHelper(o, &D_sc06_022_801BD4D0, &v);
            AF(p, s16, 6) = v.x;
            AF(p, s16, 0xA) = v.y;
            AF(p, s16, 0xE) = v.z;
        }
        break;
    }
}

void func_sc06_022_80186588(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x48) = 0xC000;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX((s32) arg0, arg1);
    SetForwardVelocity((s32) arg0, 0x20000);
    AF(arg0, s16, 2) = 4;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc06_022_801865E8(u8 *arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    if (DistSqToPlayer((s32) arg0) >= 0x1001) {
        if (AF(arg0, u16, 0x34) == 0) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) - 0x40);
            if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_022_801BD43C) & 0x2000) {
                temp_v1 = AF(arg0, s32, 0x1C) + 1;
                AF(arg0, s32, 0x1C) = temp_v1;
                if (temp_v1 >= 4) {
                    AF(arg0, s32, 0x1C) = 0xA;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                    return;
                }
                AF(arg0, s32, 0x14) = (s32) -(0x80000 / temp_v1);
                SpawnKind1C((s32) arg0, 1);
            }
        } else if (TickTimer((s32) arg0) == 1) {
            goto block_9;
        }
    } else {
block_9:
        AF(arg0, s16, 2) = 9;
        func_sc06_022_80187094((s32) arg0, 0);
    }
}

void func_sc06_022_80186720(StageActor *arg0) {
    arg0->state = 6;
    arg0->stateCount = 0;
    arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
}

void func_sc06_022_80186744(u8 *arg0, s32 arg1) {
    SV8 a;
    SV8 b;
    V3 c;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_v0;
    u16 temp_v1;
    void *temp_a0;
    StageActor *temp_s2;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s2 = AF(arg0, void *, 0x64);
        if ((temp_s2->kind == 0) || ((s32)temp_s2->script != (s32) &D_sc06_022_801D51D0)) {
            FreeActor((s32) arg0, arg1);
            return;
        }
        if (temp_s2->index < 0x11) {
            func_sc06_022_80187414((s32) temp_s2, (s32) &D_sc06_022_801BD444, (s32) &a, 5);
            AF(arg0, s16, 6) = a.x;
            AF(arg0, s16, 0xA) = a.y;
            AF(arg0, s16, 0xE) = a.z;
            return;
        }
        func_sc06_022_80187414((s32) temp_s2, (s32) &D_sc06_022_801BD44C, (s32) &a, 4);
        func_sc06_022_80187414((s32) temp_s2, (s32) &D_sc06_022_801BD44C, (s32) &b, 5);
        AF(arg0, s16, 6) = (a.x + b.x) >> 1;
        AF(arg0, s16, 0xA) = (a.y + b.y) >> 1;
        AF(arg0, s16, 0xE) = (a.z + b.z) >> 1;
        if (temp_s2->index == 0x19) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            c.x = 0;
            c.y = -0xC0000;
            c.z = -((PosDist((s32) &g_PlayerPosX, arg0 + 4) << 0x10) / 34);
            SetLocalVelocity((s32) arg0, (s32) &c);
            AF(arg0, s32, 0x48) = 0xC000;
            return;
        }
        return;
    case 1:
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x80);
        if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_022_801BD43C) != 0) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        break;
    case 2:
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) + 0x40);
        if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_022_801BD43C) & 0x2000) {
            temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0_2;
            if (temp_v0_2 >= 4) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                return;
            }
            var_v0 = AF(arg0, s32, 0x10) * 0xC;
            if (var_v0 < 0) {
                var_v0 += 0xF;
            }
            AF(arg0, s32, 0x10) = (s32) (var_v0 >> 4);
            var_a2 = AF(arg0, s32, 0x18) * 0xC;
            if (var_a2 < 0) {
                var_a2 += 0xF;
            }
            AF(arg0, s32, 0x18) = (s32) (var_a2 >> 4);
            AF(arg0, s32, 0x14) = (s32) -(0x80000 / (s32) AF(arg0, s32, 0x1C));
            SpawnKind1C((s32) arg0, 1);
            return;
        }
        break;
    case 3:
        temp_v1_3 = AF(arg0, s32, 0x1C);
        if ((u32) (temp_v1_3 - 0xE) < 0xBU) {
            if (!(temp_v1_3 & 1)) {
                SpawnActorArg(0x2A8, (s32) AF(arg0, s16, 0x104), (s32) arg0);
                AF(arg0, s16, 0x104) = (s16) ((u16) AF(arg0, s16, 0x104) + 1);
            }
        }
        if (AF(arg0, s32, 0x1C) == 9) {
            temp_a0 = AF(arg0, void *, 0xCC);
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
            AF(AF(arg0, void *, 0xCC), u16, 8) = (u16) AF(arg0, u16, 6);
            AF(AF(arg0, void *, 0xCC), s16, 0xA) = (s16) ((u16) AF(arg0, s16, 0xA) - 0x24);
            AF(AF(arg0, void *, 0xCC), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        }
        if ((u32) (AF(arg0, s32, 0x1C) - 4) < 6U) {
            temp_v1_4 = AF(arg0, void *, 0xCC);
            AF(temp_v1_4, u16, 0x18) = (u16) (AF(temp_v1_4, u16, 0x18) + 0x200);
            temp_v1_5 = AF(arg0, void *, 0xCC);
            AF(temp_v1_5, u16, 0x1A) = (u16) (AF(temp_v1_5, u16, 0x1A) + 0x200);
        }
        if (TickTimer((s32) arg0) == 1) {
            ZeroFill((s32) AF(arg0, void *, 0xCC), 0x38);
            AF(arg0, s16, 2) = 9;
            func_sc06_022_80187094((s32) arg0, 0);
        }
        break;
    }
}

void func_sc06_022_80186B94(s32 arg0) {
    s32 v[4];
    FeSv a;
    FeMtx m;
    s16 t;

    v[2] = 0xFFF00000;
    v[1] = 0;
    v[0] = 0;
    a.x = 0x10;
    t = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0xFC);
    a.y = t;
    AF(arg0, s16, 0xFE) = t;
    a.z = 0;
    RotMatrixZYX((s32) &a, (s32) &m);
    ApplyMatrixLV((s32) &m, (s32) v, arg0 + 0x10);
    AF(arg0, s16, 2) = 8;
    AF(arg0, s32, 0x1C) = 0x40;
    SyncModelPos(arg0);
}

void func_sc06_022_80186C30(u8 *o) {
    s32 m[8];
    SV8 r;
    SV8 a;
    SV8 b;
    s32 flag[2];
    u8 *p;

    r.x = AF(AF(o, u8 *, 0x20), s16, 0x10);
    r.y = AF(AF(o, u8 *, 0x20), s16, 0x12);
    r.z = 0;
    RotMatrixZYX(&r, m);
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc06_022_801BD42C[0], &a, flag);
    RotTransSV(&D_sc06_022_801BD42C[1], &b, flag);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b)) {
        HitPlayer(1, 1, AF(o, s16, 0xFE), 0x50, &b, &g_GroundNormal);
        FreeActor(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x14) -= 0x100;
    if (MoveCollidePassable(o)) {
        SpawnEffect(6, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), 0, 0);
        p = SpawnPropFrom(o, 0x22);
        if (p) AF(p, s16, 0x34) = 0x2000;
        FreeActor(o);
        return;
    }
    if (TickTimer(o)) FreeActor(o);
}

void func_sc06_022_80186DE8(StageActor *arg0) {
    HideModel(arg0);
    arg0->timer = 0xA;
    arg0->hitState = 0;
    arg0->state = 0xA;
}

void func_sc06_022_80186E24(u8 *arg0) {
    if (AF(arg0, u16, 0x70) & 1) {
        if (ActorTouchesPlayer((s32) arg0, 0x60, (s32) AF(arg0, s16, 0x104)) == 1) {
            g_PlayerHitKind = 0x4001;
        }
    }
    if (func_sc06_022_801874E0((s32) arg0, 0x60, (s32) AF(arg0, s16, 0x104)) == 1) {
        FreeActor((s32) arg0);
    }
}

s32 func_sc06_022_80186EA4(StageActor *o, u8 *a1, u8 *a2, s32 a3, s32 k0) {
    u16 k = k0;
    SV8 s;
    SV8 t;
    SV8 u;
    u8 *p;
    s32 i;
    FaceHelper(o, a1, &s);
    FaceHelper(o, a2, &t);
    u = t;
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &s, &t)) {
        HitPlayer(1, 1, o->model->rot.vy, a3, &t, &g_GroundNormal);
        return 1;
    }
    p = &g_Actors;
    if (k != 0xFFFF) {
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x282 && (AF(p, s16, 0x70) == k || AF(p, s16, 0x70) == o->param) && p != o
                && PathHitsModel(AF(p, s32, 0x20), AF(p, s32, 0x58), &s, &u)) {
                AF(p, s16, 2) = 9;
                func_sc06_022_80187094(p, 0);
                return 1;
            }
        }
        return 0;
    } else {
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x282 && AF(p, s16, 0x70) == o->param && p != o
                && PathHitsModel(AF(p, s32, 0x20), AF(p, s32, 0x58), &s, &u)) {
                AF(p, s16, 2) = 9;
                func_sc06_022_80187094(p, 0);
                return 1;
            }
        }
        return 0;
    }
}

void func_sc06_022_80187094(StageActor *o, s32 n) {
    MTX m;
    VEC v;
    SV8 r;
    s32 xy[2];
    s32 *q;
    s32 t;
    s32 i;
    s32 a;
    s32 k;
    s32 k2;
    u8 *p;
    i = 0;
    q = xy;
    a = 0x100;
    for (; i < 8; i++) {
        p = SpawnPropFrom(o, 0x23);
        if (p != 0) {
            AF(p, s16, 0x34) = rand() % 0x4000 + 0x1000;
            AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
            AngleToVec2(q, rand() % 0x1000, rand() % 88);
            t = xy[0];
            AF(p, s16, 6) += t;
            AF(p, s16, 0xE) += t >> 16;
            k = rand() % 0x80;
            r.x = ((rand() & 1) ? k : -k) + 0x400;
            k2 = rand() % 192;
            r.y = (rand() & 1) ? a + k2 : a - k2;
            r.z = 0;
            v.vy = 0;
            v.vx = 0;
            v.vz = (rand() % 4 + 3) << 16;
            RotMatrixZYX(&r, &m);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
        a += 0x200;
    }
    p = SpawnPropFrom(o, 0x23);
    if (p != 0) {
        AF(p, s16, 0x34) = 0x7FF1;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC004;
        AF(p, s32, 0x14) = 0xFFFB0000;
    }
    for (i = 0; i < 4; i++) SpawnActorArg(0x29D, n & 0xFFFF, o);
    func_sc06_022_80187EF4(o, 0x95E);
}

s32 func_sc06_022_80187318(s32 arg0, s32 arg1, s32 arg2) {
    FeSv v;
    s32 d;

    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    d = (HeadingToSV(arg0, (s32) &v) - (s16) arg1) & 0xFFF;
    if (d < 0x800) {
        return d < (s16) arg2;
    }
    return (0x1000 - d) < (s16) arg2;
}

s32 func_sc06_022_801873B0(StageActor *o, SV8 *p, s32 a, s32 b, s32 e0, s32 f) {
    typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } S14;
    S14 s;
    s16 e = e0;
    s.x = p->x;
    s.y = p->y;
    s.z = p->z;
    s.a = a;
    s.b = b;
    s.c = 0;
    s.e = e;
    s.f = f;
    s.d = 0x7FFF;
    return SpawnActorFromDef(&s, o);
}

s32 func_sc06_022_80187414(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 m[8];

    GetPartWorldMatrix(arg0, arg3, (s32) m);
    return LocalToWorld((s32) m, arg1, arg2);
}

s32 func_sc06_022_80187460(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (HeadingTo((s32) &g_PlayerPosX, arg0 + 4) - AF(g_PlayerModel, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

s32 func_sc06_022_801874E0(Mover *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x7FFF;
            AF(AF(temp_v0, void *, 0x20), u16, 0x2C) = 0xC006;
            AF(temp_v0, s32, 0x14) = 0xFFFE0000;
        }
        return 1;
    }
    return 0;
}

void func_sc06_022_80187548(StageActor *arg0) {
    D_sc06_022_801BD4D8[arg0->state]();
}

void func_sc06_022_80187584(s32 arg0) {
    s32 o;
    s32 r;
    s32 t;
    u8 unused[8];
    s32 sign;
    s32 v;
    u8 *c;
    u8 *q;

    o = AllocActorModel();
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    InitModel(o, 0);
    t = rand();
    r = (s16) t;
    AF(o, u16, 0x2C) |= 0x10;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = r % 0x180 + 0x400;
    sign = -1;
    if (t & 1) {
        sign = 1;
    }
    AF(o, s16, 0x10) = sign * (r % 0x80) - 0x300;
    AF(o, s16, 0x12) = r % 0x1000;
    AF(arg0, s32, 0x48) = 0xC000;
    AF(arg0, u16, 0xA) -= 0x19;
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, -0xC0000 - ((r % 8) << 0x10));
    AF(arg0, s32, 0x1C) = 0x3C;
    AF(arg0, s16, 0xFE) = rand() & 0xF0;
    AF(arg0, s16, 0x100) = rand() & 0x1F0;
    AF(arg0, s16, 0x102) = rand() & 0x30;
    c = &D_sc06_022_801BD4E0 + (AF(arg0, u16, 0x70) & 0xF) * 4;
    v = rand() % 12;
    q = (u8 *) arg0 + 0xDC;
    AF(q, s16, 0) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 2) = 0;
    v = rand() % 12;
    AF(q, s16, 4) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 12;
    AF(q, s16, 8) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0xA) = 0;
    v = rand() % 12;
    AF(q, s16, 0xC) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 12;
    AF(q, s16, 0x10) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 0x12) = 0;
    v = rand() % 12;
    AF(q, s16, 0x14) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    v = rand() % 12;
    AF(q, s16, 0x18) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0x1A) = 0;
    v = rand() % 12;
    AF(q, s16, 0x1C) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, u8, 0x20) = c[0];
    AF(q, u8, 0x21) = c[1];
    AF(q, u8, 0x22) = c[2];
    AF(arg0, u16, 2)++;
}

void func_sc06_022_801879E8(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x102));
    if ((MoveCollidePassable((s32) arg0, (s32) temp_a1, arg2) != 0) || (TickTimer((s32) arg0) != 0)) {
        FreeActor((s32) arg0);
        return;
    }
    DrawPrimF4Mtx((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc06_022_80187A8C(StageActor *arg0) {
    D_sc06_022_801BD4F8[arg0->state]();
}

void func_sc06_022_80187AC8(u8 *o) {
    s32 d;
    u8 *t;
    u8 *m;
    s32 r;
    s32 base;
    t = (u8 *)AllocActorModel();
    AF(o, u8 *, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(AF(o, u8 *, 0x20), 0);
    if (!(AF(o, s16, 0x70) & 0x8000)) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x80 - rand() % 0x300;
        m = AF(o, u8 *, 0x20);
        r = rand() % 0xC0;
        base = AF(o, s16, 0x70) * 0x300 + 0x180;
        AF(m, s16, 0x12) = (rand() & 1) ? base + r : base - r;
        AngleToVec2(&d, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, rand() % 16 + 8);
        AF(o, s16, 6) += d;
        AF(o, s16, 0xE) += d >> 16;
        AF(o, s16, 0xA) -= 0x10;
        UpdateModelZYX(o);
        AF(o, s32, 0x1C) = 4;
        AF(o, s16, 2)++;
    } else {
        AF(o, s16, 0xDC) = AF(AF(o, u8 *, 0x64), s16, 0xCC);
        AF(o, s16, 0xDE) = AF(AF(o, u8 *, 0x64), s16, 0xCE);
        AF(o, s16, 0xE0) = AF(AF(o, u8 *, 0x64), s16, 0xD0);
        AF(o, s16, 0xE4) = AF(AF(o, u8 *, 0x64), s16, 0xD4);
        AF(o, s16, 0xE6) = AF(AF(o, u8 *, 0x64), s16, 0xD6);
        AF(o, s16, 0xE8) = AF(AF(o, u8 *, 0x64), s16, 0xD8);
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = 8;
    }
}

void func_sc06_022_80187CBC(StageActor *o) {
    Q34 q;
    StageActor *p;
    if (o->stateCount == 0) {
        o->workE0 -= 0x14;
        if (TickTimer() != 0) {
            o->stateCount++;
        }
    } else {
        p = o->parent;
        if ((s32)p->model->unk04 < 0 || p->kind == 0) {
            FreeActor(o);
            return;
        }
    }
    q.v[0].x = 4;
    q.v[0].y = 0;
    q.v[0].z = 0;
    q.v[1].x = -4;
    q.v[1].y = 0;
    q.v[1].z = 0;
    q.v[2].x = 0xC;
    q.v[2].y = 0;
    q.v[2].z = o->workE0;
    q.v[3].x = -0xC;
    q.v[3].y = 0;
    q.v[3].z = o->workE0;
    q.code = 0x50000000;
    q.c[0].r = q.c[0].g = q.c[0].b = 0x80;
    q.c[1].r = q.c[1].g = q.c[1].b = 0x80;
    q.c[2].r = q.c[2].g = q.c[2].b = 0x30;
    q.c[3].r = q.c[3].g = q.c[3].b = 0x30;
    DrawPrimG4Mtx(&q, (u8 *)o->model + 0x34);
}

void func_sc06_022_80187DF8(StageActor *o) {
    u8 *p = (u8 *)o + 0xCC;
    u8 c;
    if (o->stateCount == 0) {
        AF(o, u16, 0xCC) = AF(o->parent, u16, 0xCC);
        AF(o, u16, 0xCE) = AF(o->parent, u16, 0xCE);
        AF(o, u16, 0xD0) = AF(o->parent, u16, 0xD0);
        AF(o, u16, 0xD4) = AF(o->parent, u16, 0xD4);
        AF(o, u16, 0xD6) = AF(o->parent, u16, 0xD6);
        AF(o, u16, 0xD8) = AF(o->parent, u16, 0xD8);
        o->stateCount++;
    }
    AF(o, s32, 0xFC) = 0x50000000;
    c = o->timer * 30;
    AF(o, u8, 0xFA) = c;
    AF(o, u8, 0xF9) = c;
    AF(o, u8, 0xF8) = c;
    AF(o, u8, 0xF6) = c;
    AF(o, u8, 0xF5) = c;
    AF(o, u8, 0xF4) = c;
    AF(o, u8, 0xF2) = c;
    AF(o, u8, 0xF1) = c;
    AF(o, u8, 0xF0) = c;
    AF(o, u8, 0xEE) = c;
    AF(o, u8, 0xED) = c;
    AF(o, u8, 0xEC) = c;
    DrawPrimG4Mtx(p, &GsIDMATRIX);
    if (--o->timer == 0) FreeActor(o);
}

s32 func_sc06_022_80187EF4(u8 *o, s32 snd0) {
    u16 snd = snd0;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 vol;
    s16 pan;
    s32 dist;
    Player *p;
    s32 x;
    vol = 0x7F;
    p = &g_Player;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    ProjectPoint(&a, &b);
    b.z = 0;
    pan = b.x / 25 + 7;
    if (pan < 0) {
        pan = 0;
    } else if (pan >= 16) {
        pan = 15;
    }
    c.x = p->pos[0].h.i;
    c.y = p->pos[1].h.i;
    c.z = p->pos[2].h.i;
    ProjectPoint(&c, &d);
    d.z = 0;
    dist = SVecDistSq(&b, &d) - 0x400;
    if (dist > 0) {
        if (dist < 0x6E40) {
            vol -= dist * 95 / 0x6E40;
        } else {
            vol = 0x2F;
        }
    }
    PlaySoundId((u16)snd, (u16)(vol | ((pan << 8) | 0x3000)));
    return 1;
}

void func_sc06_022_80188060(u8 *arg0) {
    D_sc06_022_801BD504[AF(arg0, u16, 2)]();
}

void func_sc06_022_8018809C(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(AF(arg0, void *, 0x20), u8, 0x24) = 0xFF;
    AF(AF(arg0, void *, 0x20), u8, 0x25) = 0;
    AF(AF(arg0, void *, 0x20), u8, 0x26) = 0;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_022_8018814C(u8 *arg0) {
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_s0, u8, 0x24) - 0x20;
    AF(temp_s0, u8, 0x24) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) < 0x80U) {
        AF(temp_s0, u8, 0x24) = 0x80U;
    }
    temp_v0_2 = AF(temp_s0, u8, 0x25) + 0x20;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    if ((u32) (temp_v0_2 & 0xFF) >= 0x81U) {
        AF(temp_s0, u8, 0x25) = 0x80U;
    }
    temp_v0_3 = AF(temp_s0, u16, 0x1A) + 0x400;
    AF(temp_s0, u8, 0x26) = (u8) AF(temp_s0, u8, 0x25);
    AF(temp_s0, u16, 0x1A) = temp_v0_3;
    AF(temp_s0, u16, 0x18) = temp_v0_3;
    MoveProp((s32) arg0);
    if (StepSpriteAnim((s32) temp_s0, (s32) (arg0 + 0x24)) != 0) {
        FreeProp((s32) arg0);
    }
}

s32 func_sc06_022_80188204(arg0, arg1, arg2)
StageActor *arg0;
s32 arg1;
s32 arg2;
{
    D_sc06_022_801E20F8 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc06_022_80188234(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc06_022_801D530C) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc06_022_8018D644);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc06_022_801E20F8, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc06_022_801D5340++;
    o->ext0 = q;
    if (D_sc06_022_801D5340 > D_sc06_022_801E20D8) {
        D_sc06_022_801D5340 = D_sc06_022_801E20D8 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc06_022_801D5340++;
        o->ext1 = q;
        if (D_sc06_022_801D5340 > D_sc06_022_801E20D8) {
            D_sc06_022_801D5340 = D_sc06_022_801E20D8 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc06_022_80188478(StageActor *o) {
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
        t = D_sc06_022_801D52F8;
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
            t = D_sc06_022_801D52F8;
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

void func_sc06_022_80188718(StageActor *arg0) {
    D_sc06_022_801D5344[arg0->state]();
}

s32 func_sc06_022_80188754(u8 *o, s32 r0) {
    s16 r = r0;
    SV8 a;
    SV8 b;

    if (AF(o, s32, 0xDC) != 0) {
        return 0;
    }
    a.x = AF(o, s16, 0x6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.y = a.y;
    b.z = a.z - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    if (TraceMap(1, &a, &b) & 0x8000) {
        AF(o, s16, 0x6) = b.x + (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        AF(o, s16, 0xE) = b.z + (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        return 1;
    }
    a.x = AF(o, s16, 0x6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    a.y = AF(o, s16, 0xA) - 0x10;
    b.z = a.z = AF(o, s16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.x = a.x;
    b.y = a.y + 0x20;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(o, s32, 0x4) = AF(o, s32, 0x38);
        AF(o, s32, 0x8) = AF(o, s32, 0x3C);
        AF(o, s32, 0xC) = AF(o, s32, 0x40);
        return 1;
    }
    return 0;
}

void func_sc06_022_80188964(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC == 0) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        var_s1 = 0;
        temp_v0 = (s32)arg0->ext0;
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        temp_v0 = (s32)arg0->ext1;
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, s32, 0x1C) = 2;
                AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x30);
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        AF(temp_v0, u16, 0xA) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0xE0);
        AF(temp_v0, u16, 0xE) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        AF(temp_v0, s16, 0x34) = 0x1800;
        AF(temp_v0, s32, 0x18) = 0;
        AF(temp_v0, s32, 0x14) = 0;
        AF(temp_v0, s32, 0x10) = 0;
        v.x = AF(temp_s1, s32, 0x5C) - AF(temp_v0, u16, 6);
        v.y = AF(temp_s1, s32, 0x60) - AF(temp_v0, u16, 0xA);
        v.z = AF(temp_s1, s32, 0x64) - AF(temp_v0, u16, 0xE);
        VectorNormalSS(&v, &v);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + (v.x >> 6));
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + (v.y >> 6));
        AF(temp_v0, u16, 0xE) = (u16) (AF(temp_v0, u16, 0xE) + (v.z >> 6)); AF(temp_v0, s16, 0x34) = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC - 1);
}

void func_sc06_022_80188D68(StageActor *o) {
    s32 st;
    s32 d;
    st = AF(o, u8, 0x5E);
    o->react = 0;
    o->hitCode = 0;
    o->hitState &= 0xFFFE;
    if (AF(o, s16, 0xE2) != 0) return;
    AF(o, s16, 0xE2) = 0xA;
    o->hitState |= 0x4000;
    PlaySoundId(0x9B7, 0);
    if (o->hitDamage != 0) {
        if (st == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = o->pos[0].h.i;
            o->hitPos[1] = o->pos[1].h.i;
            o->hitPos[2] = o->pos[2].h.i;
        }
        if ((u8 *)o->init != 0) {
            d = (o->hitDamage * o->init->damageScale) >> 12;
            if (d <= 0) d = 1;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_022_801D5A38);
        }
    }
    if (st != 0x1D) {
        if (o->hitFx[0]) GainStat3FromActor(o);
        if (o->hitFx[1]) GainStat2FromActor(o);
    }
    if (o->hp <= 0) {
        o->hitState = 0;
        SetReactionStep(o, 6);
    }
}

void func_sc06_022_80188EDC(u8 *o) {
    s32 c;
    if (!SetupActor(o, &D_sc06_022_801D5A58)) return;
    if (AF(o, s16, 0x70) != 0) {
        LoadImage(&D_sc06_022_801D599C, &D_sc06_022_801D595C);
        LoadImage(&D_sc06_022_801D59A4, &D_sc06_022_801D597C);
        InitModel(AF(o, u8 *, 0x20), &D_sc06_022_801D9CC4);
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x2022;
    SpawnShadow(o);
    SnapToGround(o);
    AF(o, s16, 0xAE) = 0x2100;
    SetScript(o, &D_sc06_022_801DCF74);
    AF(o, s16, 2)++;
    StopWithGravity(o);
    AF(o, s32, 0xC4) |= 2;
    c = SpawnActorArg(0x26F, AF(o, s16, 0x70), o);
    if (c == 0) {
        RejectSpawn(o);
        return;
    }
    AF(o, s32, 0xCC) = c;
    c = SpawnActorArg(0x270, AF(o, s16, 0x70), o);
    if (c == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        RejectSpawn(o);
        return;
    }
    AF(o, s32, 0xD0) = c;
    AF(o, u8 *, 0xBC) = &D_sc06_022_801D5A98;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2400;
    AF(o, s16, 2) = 8;
    SetScript(o, &D_sc06_022_801DCDDC);
    SetScript(AF(o, u8 *, 0xCC), &D_sc06_022_801DCE64);
    SetScript(AF(o, u8 *, 0xD0), &D_sc06_022_801DCEEC);
}

void func_sc06_022_8018908C(u8 *o) {
    s32 d;
    s32 r;

    SetLocalVelocityXZ(o, &D_sc06_022_801D5AB8);
    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_sc06_022_80188754(o, 0x48)) != 0 || (d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF) {
            r = HeadingToPoint(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            SetLocalVelocityXZ(o, &D_sc06_022_801D5AB8);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        if ((d = func_sc06_022_80188754(o, 0x48)) != 0 || (d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = HeadingToPoint(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_sc06_022_80188754(o, 0x48);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = GroundDistSqTo(o, o + 0x88);
        if (func_sc06_022_80188754(o, 0x48) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = HeadingToPoint(o + 4, o + 0x88);
            r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = GroundDistSqToPlayer(o)) <= 0x24000) {
        AF(o, s16, 2) = 5;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_022_80189318(StageActor *arg0) {
    u8 unused[8];
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 e;
    s32 ang;
    s16 c;
    s32 r;
    StageActor *q;

    if (arg0->animTimer == 0) {
        e = SpawnProp(0x7F);
        if (e != 0) {
            ang = arg0->model->rot.vy + (rsin(arg0->work104) >> 3);
            AF(e, s16, 6) = (u16)arg0->pos[0].h.i - (rsin(ang) * 0x6C) / 4096;
            AF(e, s16, 0xA) = (u16)arg0->pos[1].h.i - 0x34;
            AF(e, s16, 0xE) = (u16)arg0->pos[2].h.i - (rcos(ang) * 0x6C) / 4096; AF(e, s32, 0x14) = 0x40000;
            AF(e, s32, 0x10) = -(rsin(ang) * 0xC0);
            AF(e, s32, 0x18) = -(rcos(ang) * 0xC0);
        }
        c = arg0->work104 + 0x100;
        arg0->work104 = c;
        ang = (c / 256) % 16;
        if (c == 0x100) {
            pos.x = (s16) AF(arg0->model, s32, 0x48);
            pos.y = (s16) AF(arg0->model, s32, 0x4C);
            pos.z = (s16) AF(arg0->model, s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                PlaySoundId(0x95F, (a | (x | 0x3000)) & 0xFFFF);
            }        } else if (ang == 0) {
            pos.x = (s16) AF(arg0->model, s32, 0x48);
            pos.y = (s16) AF(arg0->model, s32, 0x4C);
            pos.z = (s16) AF(arg0->model, s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                PlaySoundId(0x960, (a | (x | 0x3000)) & 0xFFFF);
            }        }
        arg0->model->pose = D_sc06_022_801D591C[ang];
        if (--arg0->work100 == 0) {
            q = (s32)arg0->ext0; arg0->animTimer = 1; if (q != 0) { q->animTimer = 1; } q = (s32)arg0->ext1; if (q != 0) { q->animTimer = 1; }
        }
    } else if (arg0->animFlags & 0x4000) {
        arg0->state = 7;
        arg0->work100 = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_022_801DCDDC);
        q = (s32)arg0->ext0;
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_022_801DCE64);
        }
        q = (s32)arg0->ext1;
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_022_801DCEEC);
        }
    }
}

void func_sc06_022_801897DC(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b;
    u8 *c;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x301) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xD0);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    UpdateModelYXZ(o);
}

void func_sc06_022_801899AC(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b, h;
    u8 *c;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xD00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xCC);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    UpdateModelYXZ(o);
}

void func_sc06_022_80189B9C(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    D_sc06_022_801D5AC8[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (AF(o, s16, 0x70) == 0 && IsActorFar(o)) {
        if (AF(o, u8 *, 0xCC)) FreeActor(AF(o, u8 *, 0xCC));
        if (AF(o, u8 *, 0xD0)) FreeActor(AF(o, u8 *, 0xD0));
        DespawnActor(o);
        return;
    }
    v = AF(o, s16, 0xE2);
    if (v != 0) {
        v--;
        AF(o, s16, 0xE2) = v;
        if (v == 0) {
            AF(o, u16, 0x5C) &= 0xBFFF;
        }
    }
    if (AF(o, s16, 0x76) < 5 && (rand() & 3) == 0) {
        q = (u8 *)SpawnKind205(o, 0);
        if (q) {
            AF(q, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s32, 0x14) = 0xFFF00000;
            AF(q, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s16, 6) += (rand() & 0x3F) - 0x20;
            AF(q, s16, 0xA) -= 0xC0;
            AF(q, s16, 0xE) += (rand() & 0x3F) - 0x20;
        }
    }
    if (AF(o, u16, 2) != 1 && AF(o, u16, 2) != 5) {
        AF(o, s16, 0x84) = 0xE;
        return;
    }
    v = AF(o, s16, 0x84);
    if (v != 0) {
        AF(o, s16, 0x84) = v - 1;
        return;
    }
    AF(o, s16, 0x84) = 0xE;
    pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
    pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF648);
    RotTransPers(&pos, &sxy, &p, &flag);
    if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
        s32 x = ((s16 *)&sxy)[0];
        s32 a;
        if (x >= 0) { a = x; } else { a = -x; }
        a = ((0xF0 - a) * 0x7F) / 240;
        x = (x + 0xF0) / 30;
        if (x == 0x10) {
            x = 0xF;
        }
        x <<= 8; PlaySoundId(0x8BF, (a | (x | 0x3000)) & 0xFFFF);
    }
}

void func_sc06_022_80189EB4(StageActor *o) {
    s32 st;
    s32 n;

    st = AF(o, u8, 0x5E);
    o->react = 0;
    o->hitCode = 0;
    o->hitState &= ~1;
    if (o->unkFC == 0) {
        o->pos[0].w = o->parent->pos[0].w;
        o->pos[1].w = o->parent->pos[1].w;
        o->pos[2].w = o->parent->pos[2].w;
        o->model->rot.vx = o->parent->model->rot.vx;
        o->model->rot.vy = o->parent->model->rot.vy;
        o->model->rot.vz = o->parent->model->rot.vz;
    }
    if (o->work102 == 0) {
        o->work102 = 10;
        o->hitState |= 0x4000;
        PlaySoundId(0x9B7, 0);
        if (o->hitDamage != 0) {
            if (st == 0x1D) {
                o->hitFlags = 0;
                o->hitPos[0] = o->pos[0].h.i;
                o->hitPos[1] = o->pos[1].h.i;
                o->hitPos[2] = o->pos[2].h.i;
            }
            if ((u8 *)o->init != 0) {
                n = o->hitDamage * o->init->damageScale >> 12;
                if (n <= 0) {
                    n = 1;
                }
            }
            o->hp -= n;
            ShowDamage(o, n);
            if (o->hitFlags & 1) {
                ShowDefeat(o);
                StartRumbleScript(&D_sc06_022_801D5A38);
            }
        }
        if (st != 0x1D) {
            if (o->hitFx[0] != 0) {
                GainStat3FromActor(o);
            }
            if (o->hitFx[1] != 0) {
                GainStat2FromActor(o);
            }
        }
        if (o->hp <= 0) {
            o->hitState = 0;
            SetReactionStep(o, 6);
        }
    }
}

void func_sc06_022_8018A0AC(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    StageActor *temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC >= 0x1F) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        temp_v0 = arg0->parent;
        temp_v0->state = 2;
        var_s1 = 0;
        temp_v0 = (s32)arg0->parent->ext1;
        temp_v0->state = 4;
        arg0->parent->ext0 = 0;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                temp_v0->timer = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        temp_v0->pos[0].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        temp_v0->pos[1].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0x80);
        temp_v0->pos[2].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        temp_v0->pos[0].w = (s32) (temp_v0->pos[0].w + (rcos((s32) arg0->model->rot.vy) << 0xA));
        temp_v0_6 = rsin((s32) arg0->model->rot.vy);
        temp_v0->stateCount = 0x1800;
        temp_v0->vel[2] = 0;
        temp_v0->vel[1] = 0;
        temp_v0->vel[0] = 0;
        temp_v0->pos[2].w = (s32) (temp_v0->pos[2].w - (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - (u16)temp_v0->pos[0].h.i;
        v.y = AF(temp_s1, s32, 0x60) - (u16)temp_v0->pos[1].h.i;
        v.z = AF(temp_s1, s32, 0x64) - (u16)temp_v0->pos[2].h.i;
        VectorNormalSS(&v, &v);
        temp_v0->pos[0].h.i = (u16) ((u16)temp_v0->pos[0].h.i + (v.x >> 6));
        temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i + (v.y >> 6));
        temp_v0->pos[2].h.i = (u16) ((u16)temp_v0->pos[2].h.i + (v.z >> 6)); temp_v0->stateCount = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC + 1);
}

void func_sc06_022_8018A4F4(StageActor *o) {
    u8 *p;

    if (o->work102 != 0) {
        if (--o->work102 == 0) {
            o->hitState &= ~0x4000;
        }
    }
    D_sc06_022_801D5B50[o->state](o);
    if (o->kind != 0) {
        if (o->unkFC == 0) {
            o->pos[0].w = o->parent->pos[0].w;
            o->pos[1].w = o->parent->pos[1].w;
            o->pos[2].w = o->parent->pos[2].w;
            o->model->rot.vx = o->parent->model->rot.vx;
            o->model->rot.vy = o->parent->model->rot.vy;
            o->model->rot.vz = o->parent->model->rot.vz;
        }
        if (o->hp < 5 && (rand() & 3) == 0) {
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x4) += rcos(o->model->rot.vy) << 10;
                AF(p, s32, 0xC) -= rsin(o->model->rot.vy) << 10;
                AF(p, s16, 0x6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_022_8018A704(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    StageActor *temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC >= 0x1F) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        temp_v0 = arg0->parent;
        temp_v0->state = 4;
        var_s1 = 0;
        temp_v0 = (s32)arg0->parent->ext0;
        temp_v0->state = 4;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                temp_v0->timer = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        arg0->parent->ext1 = 0;
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        temp_v0->pos[0].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        temp_v0->pos[1].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0x80);
        temp_v0->pos[2].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        temp_v0->pos[0].w = (s32) (temp_v0->pos[0].w - (rcos((s32) arg0->model->rot.vy) << 0xA));
        temp_v0_6 = rsin((s32) arg0->model->rot.vy);
        temp_v0->stateCount = 0x1800;
        temp_v0->vel[2] = 0;
        temp_v0->vel[1] = 0;
        temp_v0->vel[0] = 0;
        temp_v0->pos[2].w = (s32) (temp_v0->pos[2].w + (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - (u16)temp_v0->pos[0].h.i;
        v.y = AF(temp_s1, s32, 0x60) - (u16)temp_v0->pos[1].h.i;
        v.z = AF(temp_s1, s32, 0x64) - (u16)temp_v0->pos[2].h.i;
        VectorNormalSS(&v, &v);
        temp_v0->pos[0].h.i = (u16) ((u16)temp_v0->pos[0].h.i + (v.x >> 6));
        temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i + (v.y >> 6));
        temp_v0->pos[2].h.i = (u16) ((u16)temp_v0->pos[2].h.i + (v.z >> 6)); temp_v0->stateCount = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC + 1);
}

void func_sc06_022_8018AB48(StageActor *o) {
    u8 *p;

    if (o->work102 != 0) {
        if (--o->work102 == 0) {
            o->hitState &= 0xBFFF;
        }
    }
    D_sc06_022_801D5BC8[o->state](o);
    if (o->kind != 0) {
        if (o->unkFC == 0) {
            o->pos[0].w = o->parent->pos[0].w;
            o->pos[1].w = o->parent->pos[1].w;
            o->pos[2].w = o->parent->pos[2].w;
            o->model->rot.vx = o->parent->model->rot.vx;
            o->model->rot.vy = o->parent->model->rot.vy;
            o->model->rot.vz = o->parent->model->rot.vz;
        }
        if (o->hp < 5 && (rand() & 3) == 0) {
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 4) -= rcos(o->model->rot.vy) << 10;
                AF(p, s32, 0xC) += rsin(o->model->rot.vy) << 10;
                AF(p, s16, 6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_022_8018AD58(u8 *o) {
    SV8 v;
    u8 *p;
    u16 *q;

    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_022_801D59AC;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x59;
        StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_022_801D59B8);
        AF(o, s16, 0x28) = rand() % 15;
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s32, 0x2C) = 0x200;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1200;
        AF(o, u16, 2)++;
    } else if (D_801270C0 == 1) {
        MoveProp(o);
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C)--;
        if ((rand() & 7) == 0) {
            p = (u8 *)SpawnProp(0x22);
            if (p != 0) {
                AF(p, s16, 6) = AF(o, s16, 6);
                AF(p, s16, 0xA) = AF(o, s16, 0xA);
                AF(p, s16, 0xE) = AF(o, s16, 0xE);
                AF(p, s32, 0x10) = AF(o, s32, 0x10) >> 3;
                AF(p, s32, 0x14) = AF(o, s32, 0x14) >> 3;
                AF(p, s32, 0x18) = AF(o, s32, 0x18) >> 3;
                AF(p, s16, 0x34) = AF(AF(o, u8 *, 0x20), s16, 0x18) + 1;
                AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
            }
        }
        if (AF(o, s32, 0x1C) == 0) {
            FreeProp(o);
        } else {
            AF(o, s32, 0x14) = 0xFFFF0000;
            AF(o, s32, 0x2C) += 0x80;
            AF(AF(o, u8 *, 0x20), s16, 0x18) += AF(o, s32, 0x2C);
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += AF(o, s32, 0x2C);
            AF(o, s16, 0xA) -= 0x20;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            if (PointHitsPlayer(&v, 0x10, 0xB4) == 1) {
                q = &g_PlayerHitKind;
                *q |= 0x4200;
            }
            AF(o, s16, 0xA) += 0x20;
        }
    }
}

void func_sc06_022_8018AFDC(u8 *arg0) {
    u8 *p;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xFC) = 0x1E;
    p = AF(arg0, u8 *, 0xCC);
    AF(p, s16, 0x5C) = 0;
    p = AF(arg0, u8 *, 0xD0);
    AF(p, s16, 0x5C) = 0;
}

void func_sc06_022_8018AFFC(u8 *o) {
    u8 unused[0x10];
    SetLocalVelocityXZ(o, &D_sc06_022_801D5AB8);
    MoveCollide(o);
    func_sc06_022_80188754(o, 0x48);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x100) = 0x2D;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0;
        SetScript(o, &D_sc06_022_801DD274);
        if (AF(o, u8 *, 0xCC)) SetScript(AF(o, u8 *, 0xCC), &D_sc06_022_801DD364);
        if (AF(o, u8 *, 0xD0)) SetScript(AF(o, u8 *, 0xD0), &D_sc06_022_801DD454);
    }
}

void func_sc06_022_8018B0FC(StageActor *arg0) {
    s16 temp_v0;
    StageActor *temp_a0;
    StageActor *temp_a0_2;

    temp_v0 = arg0->work100;
    if (temp_v0 == 0) {
        arg0->state = 1;
        arg0->work100 = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_022_801DCF74);
        temp_a0 = (s32)arg0->ext0;
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_022_801DD074);
        }
        temp_a0_2 = (s32)arg0->ext1;
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_022_801DD174);
        }
    } else {
        arg0->work100 = (s16) (temp_v0 - 1);
    }
}

void func_sc06_022_8018B19C(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_022_8018B25C(StageActor *arg0) {
    s16 temp_v0;
    StageActor *temp_a0;
    StageActor *temp_a0_2;

    temp_v0 = arg0->unkFC;
    if (temp_v0 == 0) {
        arg0->state = 1;
        SetScript((s32) arg0, (s32) &D_sc06_022_801DCF74);
        temp_a0 = (s32)arg0->ext0;
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_022_801DD074);
        }
        temp_a0_2 = (s32)arg0->ext1;
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_022_801DD174);
        }
    } else {
        arg0->unkFC = (s16) (temp_v0 - 1);
    }
}

void func_sc06_022_8018B2F4(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD0), s16, 0x5C) = 0;
}

void func_sc06_022_8018B314(s32 arg0) {
    s32 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_022_801D5AFC) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            InitModel(AF(arg0, s32, 0x20), (s32) &D_sc06_022_801DAA34);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        SnapToGround(arg0);
        AF(arg0, s16, 0xAE) = 0x2100;
        SetScript(arg0, (s32) &D_sc06_022_801DD074);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_022_801D5B30;
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_022_8018B404(void) {
}

void func_sc06_022_8018B40C(u8 *o) {
    s16 a, b;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x401) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
        AF(o, s16, 0xA) -= 4;
        AF(o, s32, 4) += rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
        AF(o, s32, 0xC) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    UpdateModelYXZ(o);
}

void func_sc06_022_8018B4E0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_022_8018B5A0(s32 arg0, s32 arg1) {
    UpdateModelYXZ(arg0, arg1);
}

void func_sc06_022_8018B5C0(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xCC), s16, 0x5C) = 0;
}

void func_sc06_022_8018B5E0(s32 arg0) {
    s32 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_022_801D5B74) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            InitModel(AF(arg0, s32, 0x20), (s32) &D_sc06_022_801DB7A0);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        SnapToGround(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_022_801D5BA8;
        AF(arg0, s16, 0xAE) = 0x2100;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_022_801DD174);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_022_8018B6D4(void) {
}

void func_sc06_022_8018B6DC(u8 *o) {
    s16 a, b, h;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xC00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
        AF(o, s16, 0xA) -= 8;
        AF(o, s32, 4) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
        AF(o, s32, 0xC) += rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    UpdateModelYXZ(o);
}

void func_sc06_022_8018B7D0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_022_8018B890(s32 arg0, s32 arg1) {
    UpdateModelYXZ(arg0, arg1);
}

s32 func_sc06_022_8018B8B0(u8 *o, s32 d0) {
    s16 d = d0;
    SV8 a;
    SV8 b;
    s32 s;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    s = rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF);
    b.y = a.y;
    b.x = a.x - ((s * d) >> 12);
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    if (!(TraceMap(1, &a, &b) & 0x8000)) return 0;
    AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    return 1;
}

void func_sc06_022_8018B9E8(o)
    u8 *o;
{
    u8 *c;
    if (AF(o, u16, 0) == 0) return;
    c = AF(o, u8 *, 0xCC);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
    c = AF(o, u8 *, 0xD0);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_022_8018BBBC(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    if (AF(o, u16, 0) == 0) return;
    v = AF(o, s16, 0x84);
    if (v == 0) {
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x849, (a | (x | 0x3000)) & 0xFFFF);
        }
        AF(o, s16, 0x84) = 10;
    } else {
        AF(o, s16, 0x84) = v - 1;
    }
    AF(o, s16, 0xFC) += 0x280;
    AF(o, s16, 0xFE) -= 0x280;
    func_sc06_022_8018B9E8(o);
}

void func_sc06_022_8018BD68(StageActor *o) {
    SV8 v;
    u8 *pl = g_ActiveCamera;
    u8 *c;
    if (o->kind == 0) return;
    switch (o->timer & 3) {
    case 0:
        c = (u8 *)SpawnActor(0x281, o);
        if (c != 0) {
            AF(c, s32, 0x1C) = 2;
            AF(c, s16, 0x12) = (rand() & 0x1F) - 0x10;
            AF(c, s16, 0x16) = -((rand() & 0xF) + 0x10);
            AF(c, s16, 0x1A) = (rand() & 0x1F) - 0x10;
        }
        break;
    case 1:
        break;
    case 2:
    case 3:
        c = (u8 *)SpawnProp(0x23);
        if (c != 0) {
            AF(c, s16, 6) = o->pos[0].h.i + (rand() & 0x3F) - 0x20;
            AF(c, s16, 0xA) = o->pos[1].h.i + (rand() & 0x3F) - 0x30;
            AF(c, s16, 0xE) = o->pos[2].h.i + (rand() & 0x3F) - 0x20;
            AF(c, s32, 0x10) = AF(c, s32, 0x14) = AF(c, s32, 0x18) = 0;
            AF(c, s16, 0x34) = (rand() & 0x17FF) + 0x800;
            v.x = AF(pl, s32, 0x5C) - AF(c, s16, 6);
            v.y = AF(pl, s32, 0x60) - AF(c, s16, 0xA);
            v.z = AF(pl, s32, 0x64) - AF(c, s16, 0xE);
            VectorNormalSS(&v, &v);
            AF(c, s16, 6) += v.x >> 6;
            AF(c, s16, 0xA) += v.y >> 6;
            AF(c, s16, 0xE) += v.z >> 6;
        }
        break;
    }
    func_sc06_022_8018B9E8(o);
}

void func_sc06_022_8018BF50(u8 *o) {
    V3 v;
    s32 d;
    s32 r;
    s16 h;
    s16 y;

    h = AF(o, s16, 0x8A);
    y = AF(o, s16, 0xA);
    if (y >= h - 8) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (h + 8 >= y && AF(o, s32, 0x48) <= 0) {
        AF(o, s32, 0x48) = 0x8000;
        AF(o, s32, 0x14) >>= 1;
    }
    if (AF(o, s32, 0xDC) < -0x40000) {
        AF(o, s32, 0xDC) = -0x40000;
    }
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0xDC);
    SetLocalVelocityXZ(o, &v);
    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF || func_sc06_022_8018B8B0(o, 0x51) != 0) {
            r = HeadingToPoint(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            SetLocalVelocityXZ(o, &v);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        AF(o, s32, 0xDC) *= 2;
        if ((d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF || func_sc06_022_8018B8B0(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = HeadingToPoint(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(o, s32, 0xDC) >>= 1;
        func_sc06_022_8018B8B0(o, 0x51);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = GroundDistSqTo(o, o + 0x88);
        AF(o, s32, 0xDC) *= 2;
        if (func_sc06_022_8018B8B0(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = HeadingToPoint(o + 4, o + 0x88);
            r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = GroundDistSqToPlayer(o)) <= 0x24000) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_022_8018C28C(StageActor *o) {
    SV8 tmp;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    s32 t;
    t = o->timer;
    if (t == 0) {
        v = o->work100 - 1;
        o->work100 = v;
        if (v == 0) {
            o->state = 1;
            o->work100 = 0x3C;
            o->origin[1] = o->pos[1].h.i - 0x140;
            return;
        }
        if (v == 1) {
            o->timer = 0x3C;
        } else {
            o->timer = 3;
        }
        func_sc06_022_80188204(o, &D_sc06_022_801DD650);
        q = SpawnActor(0x260, o);
        if (q) {
            LocalToWorld((u8 *)o->model + 0x34, &D_sc06_022_801DD658, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            UpdateModelYXZ(q);
            SpawnActorArg(0x261, 0, q);
        }
        q = SpawnActor(0x260, o);
        if (q) {
            LocalToWorld((u8 *)o->model + 0x34, &D_sc06_022_801DD660, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            UpdateModelYXZ(q);
            SpawnActorArg(0x261, 1, q);
        }
        pos.x = AF(o->model, s32, 0x48);
        pos.y = AF(o->model, s32, 0x4C);
        pos.z = AF(o->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x84A, (a | (x | 0x3000)) & 0xFFFF);
        }
    } else {
        o->timer = t - 1;
    }
}

extern u8 D_sc06_022_801DD668;

void func_sc06_022_8018C534(StageActor *o) {
    s16 *t;
    switch (o->stateCount) {
    case 0:
        t = (s16 *)&D_sc06_022_801DD668 + (o->param - 1) * 4;
        if (*t++ < *(s16 *)((u8 *)&g_PlayerPosX + 2) && *(s16 *)((u8 *)&g_PlayerPosX + 2) < *t++ && *t < *(s16 *)((u8 *)&g_PlayerPosX + 10) && *(s16 *)((u8 *)&g_PlayerPosX + 10) < t[1]) {
            AF(o->model, s32, 4) &= 0x7FFFFFFF;
            AF(o, s16, 6) = AF(o, s16, 0x88) = *(s32 *)&g_PlayerPosX >> 16;
            AF(o, s16, 0x8A) = *(s16 *)((u8 *)&D_80126B60 + 2) - 0x80;
            o->pos[2].h.i = o->origin[2] = *(s32 *)((u8 *)&g_PlayerPosX + 8) >> 16;
            o->stateCount++;
        }
        break;
    case 1:
        if ((o->pos[1].h.i += 8) >= o->origin[1]) {
            o->state = 1;
            o->stateCount = 0;
        }
        break;
    }
}

void func_sc06_022_8018C664(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    D_sc06_022_801DD688[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_sc06_022_8018BBBC((s32) arg0), (IsActorFar((s32) arg0) != 0))) {
        if (AF(arg0, s16, 0x70) == 0) {
            temp_a0 = AF(arg0, s32, 0xCC);
            if (temp_a0 != 0) {
                ZeroFill(temp_a0, 0x84);
            }
            temp_a0_2 = AF(arg0, s32, 0xD0);
            if (temp_a0_2 != 0) {
                ZeroFill(temp_a0_2, 0x84);
            }
            DespawnActor((s32) arg0);
            return;
        }
        if ((u16) AF(arg0, u16, 2) < 4U) {
            AF(arg0, u16, 2) = 4U;
        }
    }
}

void func_sc06_022_8018C73C(StageActor *arg0) {
    D_sc06_022_801DD6B4[arg0->state]();
}

void func_sc06_022_8018C778(u8 *o) {
    SV8 a;
    SV8 b;
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX();
        StopWithGravity(o);
        SetLocalVelocity(o, (u8 *)&D_sc06_022_801DD6BC + AF(o, s16, 0x70) * 12);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(o, &a, &b);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
        AF(o, s32, 0x1C) = 0x5A;
        AF(o, s16, 0x34) = 1;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    if (MoveCollide(o) & 0x6000) {
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC);
        if (--AF(o, s16, 0xAC) == 0) FreeActor(o);
    }
    if (--AF(o, s32, 0x1C) == 0) FreeActor(o);
}

void func_sc06_022_8018C8EC(StageActor *arg0) {
    D_sc06_022_801DD6D4[arg0->state]();
}

void func_sc06_022_8018C928(StageActor *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (arg0->param != 0) {
        arg0->state = 4;
        arg0->hitState = 0;
        arg0->hitCode = 0;
        arg0->react = 0;
        return;
    }
    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x84);
    }
    temp_a0_2 = (s32)arg0->ext1;
    if (temp_a0_2 != 0) {
        ZeroFill(temp_a0_2, 0x84);
    }
    GainStat0FromActor((s32) arg0);
    FreeActor((s32) arg0);
}

void func_sc06_022_8018C9B0(s32 arg0) {
    PlaySoundId(0xB32, 0);
    func_sc06_022_8018B9E8(arg0);
}

void func_sc06_022_8018C9E8(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_022_8018BBBC((s32) arg0);
}

void func_sc06_022_8018CA10(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_022_8018BBBC((s32) arg0);
}

void func_sc06_022_8018CA44(StageActor *arg0) {
    if (arg0->hp < 0) {
        SetReactionStep((s32) arg0, 6);
        return;
    }
    arg0->state = 1;
    arg0->work100 = 0x3C;
    arg0->stateCount = 0;
    func_sc06_022_8018BBBC((s32) arg0);
}

void func_sc06_022_8018CA90(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg0->kind != 0) {
        temp_v0 = SpawnKind205((s32) arg0, 0, arg2);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) (((u16)arg0->pos[0].h.i + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s16, 0xA) = (s16) (((u16)arg0->pos[1].h.i + (rand() & 0x3F)) - 0x30);
            AF(temp_v0, s16, 0xE) = (s16) (((u16)arg0->pos[2].h.i + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s32, 0x10) = (s32) -arg0->vel[0];
            AF(temp_v0, s32, 0x14) = (s32) -arg0->vel[1];
            AF(temp_v0, s32, 0x18) = (s32) -arg0->vel[2];
            AF(AF(temp_v0, void *, 0x20), s16, 0x18) = 0x800;
            AF(AF(temp_v0, void *, 0x20), s16, 0x1A) = 0x800;
        }
        func_sc06_022_8018BBBC((s32) arg0);
    }
}

void func_sc06_022_8018CB7C(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 1);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_sc06_022_8018B9E8((s32) arg0, arg1);
}

void func_sc06_022_8018CBB0(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0xC1) = 0xC;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_sc06_022_8018B9E8((s32) arg0, arg1);
}

void func_sc06_022_8018CBDC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0xA) >= 0x10) {
        FinishEnemy();
        return;
    }
    if (TickTimer((s32) arg0, arg1, arg2) != 0) {
        SetReactionStep((s32) arg0, 6);
        return;
    }
    if (MoveCollidePassable((s32) arg0) & 0x2000) {
        EndReaction((s32) arg0);
    }
    func_sc06_022_8018B9E8((s32) arg0);
}

void func_sc06_022_8018CC68(u8 *o) {
    u8 *c;
    s32 t;
    if (!SetupActor(o, &D_sc06_022_801DD554)) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x1001;
    SpawnShadow(o);
    SetScript(o, &D_sc06_022_801DF294);
    AF(o, s16, 2)++;
    StopMotion(o);
    AF(o, u8 *, 0xBC) = &D_sc06_022_801DD588;
    c = (u8 *)AllocActorModel();
    if (c == 0) goto fail;
    AF(o, u8 *, 0xCC) = c;
    InitModel(c, &D_sc06_022_801DEFA4);
    t = D_sc06_022_8018D644[0];
    AF(c, s32, 0x20) = t;
    AF(c, u16, 0x2C) |= 0x10;
    c = (u8 *)AllocActorModel();
    if (c == 0) {
        ZeroFill(AF(o, u8 *, 0xCC), 0x84);
fail:
        RejectSpawn(o);
        return;
    }
    AF(o, u8 *, 0xD0) = c;
    InitModel(c, &D_sc06_022_801DF27C);
    t = D_sc06_022_8018D644[0];
    AF(c, u16, 0x2C) |= 0x10;
    AF(c, s32, 0x20) = t;
    AF(o, s16, 0x100) = 0x3C;
    AF(o, s32, 0xDC) = 0xFFFC0000;
}

void func_sc06_022_8018CD90(u8 *o) {
    s32 v[3];
    s32 g = D_80126B60;
    s32 x = AF(o, s32, 8);
    if (x >= g - 0x200000) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (x <= g - 0x180000) {
        if (AF(o, s32, 0x48) <= 0) {
            AF(o, s32, 0x48) = 0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    }
    AF(o, s32, 0xDC) >>= 1;
    v[0] = 0;
    v[1] = 0;
    v[2] = AF(o, s32, 0xDC);
    SetLocalVelocityXZ(o, v);
    MoveCollide(o);
    func_sc06_022_8018B8B0(o, 0x51);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x100) = 5;
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_022_8018CEC4(StageActor *arg0) {
    ModelObj *temp_a1;
    ModelObj *temp_v1;

    temp_a1 = arg0->model;
    arg0->pos[0].h.i = 0x7FFF;
    arg0->pos[1].h.i = -0x1000;
    arg0->state = 5;
    arg0->stateCount = 0;
    arg0->timer = 0x12C;
    temp_a1->unk04 = (s32) ((s32)temp_a1->unk04 | 0x80000000);
    temp_v1 = arg0->model;
    temp_v1->scale.vz = 0x1000;
    temp_v1->scale.vy = 0x1000;
    temp_v1->scale.vx = 0x1000;
    arg0->hp = 0x1E0;
    arg0->hitState = 0x8810;
}

void func_sc06_022_8018CF24(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc06_022_801DF374);
    SetScript((s32) arg0, (s32) &D_sc06_022_8018D644);
    arg0->state = 1;
    arg0->timer = 0x40;
    arg0->model->rot.vx = (u16) (u16)arg0->parent->model->rot.vx;
    arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
    arg0->model->rot.vz = (u16) (u16)arg0->parent->model->rot.vz;
}

void func_sc06_022_8018CFE4(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s16, 6) == AF(arg0, s16, 0xDE)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0xE2))) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    AF(arg0, s32, 0xDC) = (s32) AF(arg0, s32, 4);
    AF(arg0, s32, 0xE0) = (s32) AF(arg0, s32, 0xC);
    SetLocalVelocity((s32) arg0, (s32) &D_sc06_022_801DD6A0);
    MoveObject((s32) arg0);
    if ((ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc06_022_801DD6AC, (s32) &D_800D3918, 0x30) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor((s32) arg0);
        return;
    }
    UpdateModelYXZ((s32) arg0);
}

void func_sc06_022_8018D0B8(StageActor *o) {
    ModelObj *p;
    p = AllocActorModel(o);
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, &D_sc06_022_801DF434);
    o->state = 1;
    o->stateCount = 0;
    o->pos[2].w += rcos(o->parent->model->rot.vy) << 8;
    o->pos[0].w += rsin(o->parent->model->rot.vy) << 8;
    o->model->flags |= 0x10;
    o->model->scale.vx = 0x1800;
    o->model->scale.vy = 0x1800;
    o->model->scale.vz = 0x1800;
    o->heightAdd = 2;
    o->unkFC = rand() & 0xFF;
}

void func_sc06_022_8018D1B0(u8 *o) {
    s32 r;
    s32 v;
    u8 *q;
    if (AF(o, u16, 2) == 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u16, 2)++;
        StopWithGravity(o);
        AF(o, s32, 0x1C) = 1;
        return;
    }
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    r = MoveCollide(o);
    if (r && (r & 0x6000)) {
        v = AF(o, s32, 0x1C) - 1;
        AF(o, s32, 0x1C) = v;
        if (v == 0) goto kill;
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC) >> 2;
    }
    if (++AF(o, u16, 0xFC) & 1) {
        q = SpawnProp(0x23);
        if (q) {
            AF(q, s16, 6) = AF(o, s16, 6);
            AF(q, s16, 0xA) = AF(o, s16, 0xA);
            AF(q, s16, 0xE) = AF(o, s16, 0xE);
            AF(q, s32, 0x10) = AF(q, s32, 0x14) = AF(q, s32, 0x18) = 0;
            AF(q, s16, 0x34) = 0x3000;
        }
    }
    if (AF(o, s16, 0xA) < 0x20) return;
kill:
    FreeActor(o);
}
