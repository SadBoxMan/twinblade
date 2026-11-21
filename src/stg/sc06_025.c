#include "common.h"
#include "gte.h"
#include "game.h"
extern void func_sc06_025_80181B90();
extern void func_sc06_025_8017FF4C();
extern s32 TurnToFront();
extern s32 func_sc06_025_801822F0();
extern void func_sc06_025_80180D28();
extern void func_sc06_025_801823FC();
extern void func_sc06_025_80181668();
extern void func_sc06_025_80180B7C();
extern void func_sc06_025_801807F8();
extern void TopoDefeat();
extern void TopoTalk();
extern void func_sc06_025_801817A8();
extern s32 func_sc06_025_80180808();
extern s32 func_sc06_025_8017FD28();
extern s32 func_sc06_025_80182090();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_025_8017BE9C(void) {
}

void func_sc06_025_8017BEA4(void) {
}

void func_sc06_025_8017BEAC(void) {
}

void func_sc06_025_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_025_80188758[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_025_8017D2A0(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_025_80188760[])();
void func_sc06_025_8017D2C8(void);
extern void (*D_sc06_025_80188768[])();
void func_sc06_025_8017D2F0(void);
extern void func_800D1EBC();
extern void (*D_sc06_025_80188774[])();
void func_sc06_025_8017D350(void);
extern u8 D_sc06_025_80188780;
extern void StartPlayerActionScript();
extern u8 D_sc06_025_80188784;
extern u8 D_sc06_025_80188788;
extern u8 D_sc06_025_80188794;
extern void func_sc06_025_8017D4B4();
extern void (*D_sc06_025_8018879C[])();
extern void (*D_sc06_025_801887B0[])();
void func_sc06_025_8017DE9C(u8 *arg0);
extern s32 func_sc06_025_8017E05C();
extern void (*D_sc06_025_8018908C[])();
extern void (*D_sc06_025_801890CC[])();
extern void (*D_sc06_025_8018923C[])();
extern void (*D_sc06_025_801893F4[])();
extern void (*D_sc06_025_8018942C[])();
extern void (*D_sc06_025_801894F0[])();
extern void (*D_sc06_025_801ADA18[])();
extern void (*D_sc06_025_801ADA50[])();
extern void (*D_sc06_025_801ADAC8[])();
extern void (*D_sc06_025_801AE188[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc06_025_80184FC0;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc06_025_801ADE78;
extern s32 *func_sc06_025_80184B50();
extern s32 D_sc06_025_801ADEE0[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc06_025_801AE0AC;
extern s32 D_sc06_025_801AE0B0;
extern s32 D_sc06_025_801AE0C4;
extern s32 D_sc06_025_801AE0D8;
extern s32 D_sc06_025_801AE144;
extern s32 D_sc06_025_801AE028[];
extern s32 D_sc06_025_801ADFA4[];
extern void EndEvent();
extern void GiveItem();
extern void FreeActor();
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc06_025_801848F8();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc06_025_801AE1B0[])();
extern u8 D_sc06_025_801ADEAC;
extern u8 D_sc06_025_801AE650;
extern u8 D_sc06_025_801AE870;
extern void PlaySoundId();
extern u8 D_sc06_025_801AE660;
extern u8 D_sc06_025_801AE768;

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern u8 D_sc06_025_801AD9E4;
extern void (*D_sc06_025_801ADA0C[])();
extern void StartRumbleScript();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern s32 func_sc06_025_80183774();
extern s32 PlaySe();
extern s32 NextObjState();
extern void PlaySePositional();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern s8 D_sc06_025_801B1BE3;
extern u8 D_sc06_025_801B1BD0[];
extern s32 FreeEffect();
extern void SetObjTimer();
extern void func_801495C4();
extern s32 TickObjTimer();
extern void func_sc06_025_80183D74();

extern s32 D_sc06_025_801887A8[];
extern s32 func_8013B7F4();
extern s32 func_sc06_025_8017DE74();

extern s32 D_sc06_025_801B12E0;
extern void (*D_sc06_025_8018884C[])();
extern void CarryPlayer();
extern void (*D_sc06_025_8018939C[])();
extern u8 D_sc06_025_801886A4;
extern void func_800D1724();

extern void func_sc06_025_801842C0();


extern void SpawnActor();
extern void NextPlayerActionHandler();
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
extern u8 D_sc06_025_801AC714;
extern s32 D_sc06_025_801B21FC;
extern void func_sc06_025_8017DD80();
extern s32 func_sc06_025_8017DB98();
extern s32 D_sc06_025_801B12E4;
extern void func_sc06_025_8017E100();
extern s32 GetHeadingToPoint();
extern void func_sc06_025_8017E230();
extern void SetPlayerMotionIndex();
extern u8 D_sc06_025_80188804;
extern u8 D_sc06_025_80188844;
extern u8 D_sc06_025_801887C4;
extern void StartEvent();
extern s32 IsEventDone();
extern void func_sc06_025_8017E4E0();
extern s32 D_801270C8;
extern u8 D_sc06_025_801889F8;
extern u8 D_sc06_025_80188E84;
extern u8 D_sc06_025_801A08B4;
extern s16 D_sc06_025_801B1724;
extern s16 D_sc06_025_801B1744;
extern void PlaceObject();
extern s32 ClearWorkA3E7();
extern s32 D_sc06_025_801B1B50;
extern s16 D_sc06_025_801B1708;
extern s16 D_sc06_025_801B1710;
extern u8 D_sc06_025_80189408;
extern s32 TurnStep();
extern u8 D_sc06_025_801B1750;
extern s32 ZeroFill();
extern s16 g_PlayerHitFacing;
extern u8 D_sc06_025_8018950C;
extern u8 D_sc06_025_80189514;
extern s32 HitPlayer();
extern s32 ClearObjPush();
extern s16 D_80126B66;
extern void func_sc06_025_80180284();
extern void DrawRect();
extern u8 D_sc06_025_801A01A4;
extern s32 D_sc06_025_801889F4[];
extern s32 AllocActorModel();
extern void InitModel();
extern void ShowItemIcon();
extern u8 D_sc06_025_80189054;
extern s32 D_sc06_025_80189044[];
extern u8 D_sc06_025_801890A4;
extern s32 D_sc06_025_80189094[];
extern void func_8001C810();
extern s32 D_80126B60;
extern u8 D_sc06_025_801A538C;
extern s32 FindActorByKind();
extern u8 D_sc06_025_801A5CB4;
extern u8 D_sc06_025_801A6584;
extern u8 D_sc06_025_80189254;
extern u8 D_sc06_025_80189294;
extern u8 D_sc06_025_801892A4;
extern u8 D_sc06_025_8019A6B0;
extern u8 D_sc06_025_801892CC;
extern s32 GroundDistSqToPlayer();
extern u8 D_sc06_025_801893B4;
extern u8 D_sc06_025_801893C4;
extern s32 D_sc06_025_801893AC[];
extern s32 D_sc06_025_801893FC[];
extern s32 D_801270CC;
extern void ShowModel();
extern s32 func_sc06_025_8018233C();
extern void HideModel();
extern u8 D_sc06_025_80189438;
extern u8 D_sc06_025_80189498;
extern u8 D_sc06_025_801894E0;
extern void func_8001CA1C();
extern void func_sc06_025_80184410();
extern void EnterPlayerStanding();
extern void func_80165718();

extern u16 D_800B99DA;
extern s32 ClearPlayerHittable();
extern void SetVelFromPushKeepAxes();
extern void MoveObjByVel();
extern void AddFallSpeedLimited();
extern void ApplyFallSpeed();
extern void SpawnEffect2();
extern void func_801535F4();

extern void SetClock();
extern void RequestSave();

extern s32 D_sc06_025_801B12E8;
extern s32 GetObjPadPressed();
extern s32 func_sc06_025_80180ED4();
extern u8 D_sc06_025_80189BE4;
extern u8 D_sc06_025_801A1FDC;
extern u16 D_sc06_025_801B1714;
extern s32 D_sc06_025_801B1B54;
extern s32 OpenMessageEx();
extern void TakePlayerControl();
extern u8 D_sc06_025_801A0FBC;

extern s16 D_80126B62;
extern u8 D_sc06_025_8018951C;
extern u8 D_sc06_025_80189524;
extern s32 TickTimer();
extern u8 D_sc06_025_80188EDC;
extern s16 D_sc06_025_801B12F0;
extern s16 D_sc06_025_801B12F8;

extern u16 D_sc06_025_801894F8;
extern s16 D_sc06_025_801B1700;
extern u16 D_sc06_025_801B1704;
extern s16 D_sc06_025_801B170C;
extern s16 D_sc06_025_80189500[];
extern s32 func_8002D80C();

extern u8 D_sc06_025_80188F18;
extern u8 D_sc06_025_801A892C;
extern void GainStat0();
extern void ResetScriptVM();

extern s32 HeadingToPoint();
extern u8 D_sc06_025_801AD9EC;
extern s32 ShowQueuedDamageNumber();
extern s32 SetPlayerMotion();
s32 func_sc06_025_80183988();
extern s32 SetPlayerEvent100();

extern u8 D_sc06_025_80189E74;
extern u8 D_sc06_025_80189EC4;
s32 func_sc06_025_8017DAF0(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc06_025_801B20E4[4];
extern CV D_sc06_025_801B2104;
extern CV D_sc06_025_801B2108;
extern u8 D_sc06_025_801B210C;
extern u8 D_sc06_025_801B210D;
extern u8 D_sc06_025_801B210E;
extern u8 D_sc06_025_801B2110;
extern u8 D_sc06_025_801B2111;
extern u8 D_sc06_025_801B2112;
extern s32 D_sc06_025_801B2114;
extern void SetIdentityRot();
extern void DrawPrimG4Screen();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc06_025_8017BEBC(u8 *obj) {
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

void func_sc06_025_8017CD9C(void) {
    SetClock(0x03C00000);
    g_SpawnListFixed = &D_sc06_025_80189E74;
    g_SpawnListRanged = &D_sc06_025_80189EC4;
    func_sc06_025_8017DAF0(0);
}

extern void ClearPlayerActionFlag01();
extern void SetPlayerActionFlag02();
extern void SetPlayerActionFlag08();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
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
extern void func_sc06_025_8017D730();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

extern u8 D_sc06_025_801B1BE4;
extern s32 func_sc06_025_80183C34();

typedef struct { s16 x, y, w, h; s32 p[4]; } Spr;
extern Spr D_sc06_025_801B1B58;
extern s32 D_sc06_025_801B1B74;
extern SV8 D_sc06_025_8018890C[][4];
extern void ProjectPointOtz();
extern s32 func_sc06_025_8017F424();

extern s16 D_sc06_025_801B1720;
extern s16 D_sc06_025_801B1740;
extern s16 D_sc06_025_801B1738;
extern s16 D_sc06_025_801B171C;
extern s16 D_sc06_025_801B1718;
extern s16 D_sc06_025_801B1730;
extern s16 D_sc06_025_801B172C;
extern s16 D_sc06_025_801B1728;
extern s16 D_sc06_025_801B1734;
extern s16 D_sc06_025_801B173C;
extern s16 D_sc06_025_801B1748;
extern s16 D_sc06_025_801B174C;
extern void func_sc06_025_8017E95C();
extern void func_sc06_025_8017E9B8();
extern void func_sc06_025_8017EEC4();
extern void func_sc06_025_8017F580();
extern void func_sc06_025_8017F894();
extern void func_sc06_025_80181BC8();
typedef struct { SV8 a, b; } SV16;
extern s16 D_sc06_025_801B1B88;
extern s16 D_sc06_025_801B1B8C;
extern SV16 D_sc06_025_801B1B78;
extern SV16 D_sc06_025_80188D30;
extern SV16 D_sc06_025_80188D40;
extern void func_8002D834();
extern s32 D_sc06_025_80188E74[];
typedef struct { u8 *ot; u8 pad[0x10]; } OtRec;
extern OtRec g_WorldOtOrg[];
typedef union { s32 w; XY s; } UXY;
extern void LoadWorldScreenMatrix();
extern void AngleToVec2();
extern u8 *AllocPrim();
extern s32 RotTransPers();
extern void AddPrim();
extern void AddDrawModeAt();
extern s32 rsin();
extern s32 RotTransPers4();

typedef struct { s16 x, y, w, h; } LRect;
extern SV8 D_sc06_025_801889EC;
extern s32 D_sc06_025_80188D0C[];
extern s32 D_sc06_025_80188CBC[];
typedef struct { s16 *a; s16 *b; } PairTbl;
extern PairTbl D_sc06_025_80188CA4[];
extern void MoveObject();
extern u8 D_sc06_025_801897FC;
extern u8 D_sc06_025_801A249C;
extern s32 GetMessageAnswer();
extern void SetWorkA3E7();

extern u16 g_PlayerX;
extern u8 D_sc06_025_801AFF3C;
extern u16 D_sc06_025_801888CC[];
extern u16 D_sc06_025_801888CE[];
extern u16 D_sc06_025_801888D0[];
extern u16 D_sc06_025_801888EC[];
extern u16 D_sc06_025_801888EE[];
extern u16 D_sc06_025_801888F0[];
extern void func_sc06_025_80181CA4();
extern XY D_sc06_025_801891F4[];
extern u8 D_sc06_025_801B1B90[];
extern s32 D_sc06_025_8019AB90;
extern s32 D_sc06_025_8019B030;
extern u8 D_sc06_025_80189174;
extern u8 D_sc06_025_801891B4;
extern u8 D_sc06_025_80189194;
extern u8 D_sc06_025_801891D4;
extern void InitMime();
extern void StepMime();

extern s16 D_sc06_025_80189074;
extern s16 D_sc06_025_80189078;
extern u8 D_sc06_025_801A19BC;
extern u8 D_sc06_025_8018885C;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern void SpawnEffect();
extern void PosToSVec();
extern void SetShapeCircle();
extern s32 AllocSprite16To3E();
extern void func_8001CD9C();
extern SV8 D_sc06_025_801ADA64[];
extern CV *D_sc06_025_801ADA48[];

extern SV8 g_CameraFocus;
extern s32 GetTPage();
extern s32 GetClut();
extern s32 D_sc06_025_8018899C[];

extern s16 D_sc06_025_80188720;
extern s16 D_sc06_025_80188722;
extern s16 D_sc06_025_80188724;
extern u8 g_Lights;
extern u8 D_sc06_025_80188728;
extern u8 D_sc06_025_80188738;
extern u8 D_sc06_025_80188748;
extern u8 D_sc06_025_80189ED8;
extern u8 D_sc06_025_80189F28;
extern void SetAmbientColor();
extern void ApplyLight();
extern SV8 D_sc06_025_80188984[];
extern s16 D_sc06_025_80188994[];
extern void func_sc06_025_8017F788();
extern XY D_sc06_025_801889A8[];
extern void func_80174714();
extern u8 D_sc06_025_80188E40;

void func_sc06_025_8017CDE4(void) {
    typedef struct { s32 w[4]; } W16;
    W16 *d;

    SetAmbientColor(D_sc06_025_80188720, D_sc06_025_80188722, D_sc06_025_80188724);
    d = (W16 *)&g_Lights;
    d[0] = *(W16 *)&D_sc06_025_80188728;
    ApplyLight(0, &d[0]);
    d[1] = *(W16 *)&D_sc06_025_80188738;
    ApplyLight(1, &d[1]);
    d[2] = *(W16 *)&D_sc06_025_80188748;
    ApplyLight(2, &d[2]);
    SetClock(0x03C00000);
    g_SpawnListFixed = (s32 *)&D_sc06_025_80189ED8;
    g_SpawnListRanged = (s32 *)&D_sc06_025_80189F28;
    func_sc06_025_8017DAF0(1);
}

void func_sc06_025_8017CF00(u8 *arg0) {
    D_sc06_025_80188758[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_025_8017CF3C(u8 *arg0) {
    func_sc06_025_8017D2A0();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_025_8017CF80(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_025_8017CFA4(u8 *arg0) {
    D_sc06_025_80188760[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_025_8017CFE0(u8 *arg0) {
    func_sc06_025_8017D2C8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_025_8017D024(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_025_8017D048(u8 *arg0) {
    D_sc06_025_80188768[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_025_8017D084(u8 *arg0) {
    func_sc06_025_8017D2F0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_025_8017D0C4(u8 *arg0) {
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

void func_sc06_025_8017D140(void) {
    func_800D1EBC();
}

void func_sc06_025_8017D160(u8 *arg0) {
    D_sc06_025_80188774[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_025_8017D19C(u8 *arg0) {
    func_sc06_025_8017D350();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_025_8017D1DC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 RoomExitAfterBoss(void) {
    if (FadeStep(4) & 0xFFFF) {
        SetClock(0x041A0000);
        SetProgress(0x5DC);
        RequestSave();
        return 1;
    }
    return 0;
}

void func_sc06_025_8017D2A0(void) {
    StartPlayerActionScript((s32) &D_sc06_025_80188780, 0x01000000);
}

void func_sc06_025_8017D2C8(void) {
    StartPlayerActionScript((s32) &D_sc06_025_80188784, 0x01000000);
}

void func_sc06_025_8017D2F0(void) {
    StartPlayerActionScript((s32) &D_sc06_025_80188788, 0x01000000);
}

void func_sc06_025_8017D318(s32 arg0) {
    SpawnActor(0x3B9, 0);
    NextPlayerActionHandler(arg0);
}

void func_sc06_025_8017D350(void) {
    StartPlayerActionScript((s32) &D_sc06_025_80188794, 0x01000000);
}

void func_sc06_025_8017D378(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_80126978 = -0x20;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_8012697A = 0x100;
    SetCameraUpdate((s32) func_sc06_025_8017D4B4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_025_8017D4B4((s32) &g_Camera);
}

void func_sc06_025_8017D418(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x6A4;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_025_8017D4B4, 1);
    SnapCamera((s32) &g_Camera);
    func_sc06_025_8017D4B4((s32) &g_Camera);
}

void func_sc06_025_8017D4B4(s32 arg0) {
    D_sc06_025_8018879C[AF(arg0, u8, 4)]();
}

void func_sc06_025_8017D4F0(u8 *o) {
    SV8 v;

    v = g_CameraFocus;
    switch (D_801270C8) {
    case 0:
        v.x = 0;
        if (v.y < -0x300) {
            v.y = -0x300;
        }
        if (v.y > -0x180) {
            v.y = -0x180;
        }
        if (v.z < -0x3E0) {
            v.z = -0x3E0;
        } else if (v.z > 0x400) {
            v.z = 0x400;
        }
        AF(o, s32, 0x14) = 0x4B0;
        AF(o, s16, 0x30) = -0x20;
        func_sc06_025_8017D8C8(o, &v, 4);
        break;
    case 1:
        v.x = 0;
        v.y = -0x178;
        v.z = 0x1C9;
        AF(o, s32, 0x14) = 0x4B0;
        AF(o, s16, 0x30) = -0x20;
        func_sc06_025_8017D8C8(o, &v, 4);
        break;
    case 2:
        v.x = 0;
        v.y = -0x178;
        v.z = 0x280;
        AF(o, s32, 0x14) = 0x320;
        AF(o, s16, 0x30) = -0x80;
        func_sc06_025_8017D8C8(o, &v, 4);
        break;
    case 3:
        v.x = 0;
        v.y = -0x178;
        v.z = 0x280;
        AF(o, s32, 0x14) = 0x320;
        AF(o, s16, 0x30) = -0x80;
        func_sc06_025_8017D8C8(o, &v, 4);
        break;
    }
}

extern s32 D_sc06_025_801890D4[];
extern u8 D_sc06_025_801890E4;
extern u8 D_sc06_025_80189104;
extern s32 SpawnPropFrom();
extern s32 rand();
extern u8 D_sc06_025_80188D50;
extern void TopoNextRound();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;


typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s32 TargetInFront();
extern s32 PathHitsModel();
extern void *g_PlayerModel;
extern void CallActionHandler();
extern SV8 D_sc06_025_801AE1A0[];

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
typedef struct { u8 b[0x10C]; } O10C;
typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
typedef struct { s32 a, b; } P8;
extern void UpdateModelZYX();
extern void StopMotion();
extern void SetLocalVelocity();
extern u8 D_sc06_025_80188EE4;
extern s32 D_sc06_025_80188EF0;

extern s16 D_sc06_025_801887A4[];
void func_sc06_025_8017D654(u8 *o) {
    SV8 v;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc06_025_801887A4[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    if (v.x < -0x100) {
        v.x = -0x100;
    } else if (v.x > 0x100) {
        v.x = 0x100;
    }
    if (v.z < 0x9B0) {
        v.z = 0x9B0;
    }
    func_sc06_025_8017D730(o, &v);
}

void func_sc06_025_8017D730(u8 *arg0, u8 *arg1) {
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

void func_sc06_025_8017D8C8(u8 *arg0, u8 *arg1, s32 n0) {
    FeMtx m;
    FeSv v;
    FeSv o;
    s16 n = n0;

    AF(arg0, s32, 8) = (s16) EaseValue(AF(arg0, s16, 8), AF(arg0, s16, 0xC), n);
    AF(arg0, s32, 0x10) = (s16) EaseValue(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), n);
    AF(arg0, s16, 0x18) = EaseAngle(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), n);
    AF(arg0, s16, 0x1A) = EaseAngle(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), n);
    AF(arg0, s16, 0x1C) = EaseAngle(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), n);
    AF(arg0, s16, 0x28) = EaseValue(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), n);
    AF(arg0, s16, 0x2A) = EaseValue(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), n);
    AF(arg0, s16, 0x2C) = EaseValue(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), n);
    AF(arg0, s32, 0x48) = (s16) EaseValue(AF(arg0, s16, 0x48), (s16)(AF(arg0, s16, 0x28) + AF(arg1, s16, 0)), n);
    AF(arg0, s32, 0x4C) = (s16) EaseValue(AF(arg0, s16, 0x4C), (s16)(AF(arg0, s16, 0x2A) + AF(arg1, s16, 2)), n);
    AF(arg0, s32, 0x50) = (s16) EaseValue(AF(arg0, s16, 0x50), (s16)(AF(arg0, s16, 0x2C) + AF(arg1, s16, 4)), n);
    RotMatrixZYX(arg0 + 0x18, &m);
    m.t[0] = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    m.t[1] = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    m.t[2] = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    v.x = 0;
    v.y = 0;
    v.z = AF(arg0, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(arg0, s32, 0x3C) = (s16) EaseValue(AF(arg0, s16, 0x3C), o.x, n);
    AF(arg0, s32, 0x40) = (s16) EaseValue(AF(arg0, s16, 0x40), o.y, n);
    AF(arg0, s32, 0x44) = (s16) EaseValue(AF(arg0, s16, 0x44), o.z, n);
}

s32 func_sc06_025_8017DAF0(s32 arg0) {
    return func_8013B7F4(D_sc06_025_801887A8[arg0], 0);
}

void func_sc06_025_8017DB20(void) {
    if (D_sc06_025_801B21FC == 0) {
        func_sc06_025_8017DD80((s32) &D_sc06_025_801AC714);
        D_sc06_025_801B21FC += 1;
    }
}

s32 func_sc06_025_8017DB6C(s32 arg0) {
    return func_sc06_025_8017DB98((s32) &D_sc06_025_801AC714, arg0);
}

s32 func_sc06_025_8017DB98(u8 *p, s32 mode) {
    LRect r;
    s32 any;
    s32 ch;
    u16 *src;
    u16 *dst;
    u16 *start;
    s32 j;
    s32 c, t, cr, cg, cb, tr, tg, tb;

    any = 0;
    while (AF(p, u16, 0) != 0xFF) {
        if (AF(p, u16, 0) == 9) {
            r.x = AF(p, s16, 4);
            r.y = AF(p, s16, 6);
            r.w = AF(p, s16, 8);
            r.h = AF(p, s16, 0xA);
            if (mode != 0) {
                src = AF(p, u16 *, 0xC);
            } else {
                src = AF(p, u16 *, 0xC) + AF(p, s16, 8);
            }
            ch = 0;
            start = AF(p, u16 *, 0xC) + AF(p, s16, 8) * 2;
            dst = start;
            for (j = 0; j < AF(p, s16, 8); j++, src++) {
                c = *dst;
                t = *src;
                cr = c & 0x1F;
                cg = c & 0x3E0;
                cb = c & 0x7C00;
                tr = t & 0x1F;
                tg = t & 0x3E0;
                tb = t & 0x7C00;
                if (tr != cr) {
                    ch = 1;
                    if (cr < tr) {
                        cr++;
                    } else if (tr < cr) {
                        cr--;
                    }
                }
                if (tg != cg) {
                    ch = 1;
                    if (cg < tg) {
                        cg += 0x20;
                    } else if (tg < cg) {
                        cg -= 0x20;
                    }
                }
                if (tb != cb) {
                    ch = 1;
                    if (cb < tb) {
                        cb += 0x400;
                    } else if (tb < cb) {
                        cb -= 0x400;
                    }
                }
                c = cr | cg | cb | (t & 0x8000);
                if (c == 0 && t != 0) {
                    c = 0x8000;
                }
                *dst++ = c;
            }
            if (ch != 0) {
                LoadImage(&r, start);
            }
            any |= ch;
        }
        p += 0x10;
    }
    return any;
}

void func_sc06_025_8017DD80(u8 *p) {
    LRect r;
    u16 *src;
    u16 *dst;
    u16 *start;
    s32 j;

    if (p != 0) {
        while (AF(p, u16, 0) != 0xFF) {
            if (AF(p, u16, 0) == 9) {
                src = AF(p, u16 *, 0xC);
                start = src + AF(p, s16, 8) * 2;
                dst = start;
                j = 0;
                while (j < AF(p, s16, 8)) {
                    j++;
                    *dst++ = *src++;
                }
                r.x = AF(p, s16, 4);
                r.y = AF(p, s16, 6);
                r.w = AF(p, s16, 8);
                r.h = AF(p, s16, 0xA);
                LoadImage(&r, start);
            }
            p += 0x10;
        }
    }
}

s32 func_sc06_025_8017DE5C(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x9E;
    if (arg0 < 0x5DC) {
        var_v0 = 0x75;
    }
    return var_v0;
}

s32 func_sc06_025_8017DE74()
{
    return SetActionHandler((s32) func_sc06_025_8017DE9C);
}

void func_sc06_025_8017DE9C(u8 *arg0) {
    D_sc06_025_801887B0[AF(arg0, u8, 0x214)]();
}

void func_sc06_025_8017DED8(Player *arg0) {
    EndScene();
    ClearPlayerActionFlag01();
    SetPlayerActionFlag02();
    SetPlayerActionFlag08();
    func_sc06_025_8017E0F0(arg0);
    NextPhase(arg0);
    func_sc06_025_8017DF30(arg0);
}

void func_sc06_025_8017DF30(Player *arg0) {
    func_sc06_025_8017E05C(arg0);
}

void func_sc06_025_8017DF50(Player *arg0) {
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    func_sc06_025_8017E100();
    temp_s0->rot.vy = GetHeadingToPoint((s32) arg0, D_sc06_025_801B12E4);
    if (TickObjTimer((s32) arg0) != 0) {
        func_sc06_025_8017E230((s32) arg0);
        SetPlayerMotionIndex((s32) arg0, 0x10);
        NextPhase((s32) arg0);
        return;
    }
    func_sc06_025_8017E230((s32) arg0);
    if ((arg0->action20C == 0) && (arg0->animStatus & 0x8000)) {
        arg0->action20C = 1;
        arg0->animStatus = (u16) (u16)arg0->animTimer;
    }
}

s32 func_sc06_025_8017E008(u8 *arg0) {
    if ((func_sc06_025_8017E05C() == 0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        SetPhase((s32) arg0, 1);
    }
}

void func_sc06_025_8017E054(void) {
}

extern void func_sc06_025_8017E18C();
s32 func_sc06_025_8017E05C(Player *o) {
    func_sc06_025_8017E100();
    D_sc06_025_801B12E4 = D_sc06_025_801B12E8;
    if (D_sc06_025_801B12E0 != 0) {
        D_sc06_025_801B12E0 = 0;
        SetObjTimer(o, 4);
        func_sc06_025_8017E18C(o, D_sc06_025_801B12E4, 4);
        SetPlayerMotionIndex(o, 0xF);
        o->action20C = 0;
        SetPhase(o, 2);
        return 1;
    }
    return 0;
}

void func_sc06_025_8017E0F0(void) {
    D_sc06_025_801B12E0 = 0;
}

void func_sc06_025_8017E100(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = GetObjPadPressed();
    var_a0 = -1;
    if (temp_v0 & 0x10) {
        var_a0 = 0;
    } else if (temp_v0 & 0x40) {
        var_a0 = 1;
    } else if (temp_v0 & 0x80) {
        var_a0 = 2;
    } else if (temp_v0 & 0x20) {
        var_a0 = 3;
    }
    if (var_a0 >= 0) {
        D_sc06_025_801B12E8 = func_sc06_025_80180ED4();
        D_sc06_025_801B12E0 = 1;
    }
}

void func_sc06_025_8017E18C(Player *o, SV8 *p, s32 n) {
    s32 x;
    s32 z;

    if (n <= 0) {
        n = 1;
    }
    x = ((p->x - o->pos[0].h.i) << 16) / n;
    z = ((p->z - o->pos[2].h.i) << 16) / n;
    o->push[1] = -(n << 20);
    o->push[0] = x;
    o->push[2] = z;
}

void func_sc06_025_8017E230(Player *arg0) {
    arg0->push[1] = (s32) (arg0->push[1] + 0x200000);
    arg0->pos[0].w = (s32) (arg0->pos[0].w + arg0->push[0]);
    arg0->pos[1].w = (s32) (arg0->pos[1].w + arg0->push[1]);
    arg0->pos[2].w = (s32) (arg0->pos[2].w + arg0->push[2]);
    if (arg0->pos[1].h.i >= -0x177) {
        arg0->pos[1].h.i = -0x178;
    }
}

void func_sc06_025_8017E290(StageActor *arg0) {
    D_sc06_025_8018884C[arg0->state]();
    if (arg0->kind != 0) {
        CarryPlayer((s32) arg0);
    }
}

s32 func_sc06_025_8017E2F0(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0xFC) + 0x40;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x400) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - ((0x1000 - rcos((s32) (s16) AF(arg0, u16, 0xFC))) << 7));
block_9:
        return 0;
    case 1:
        temp_v0_2 = AF(arg0, s16, 0xA);
        if (temp_v0_2 < -0x156) {
            AF(arg0, s16, 0xA) = -0x156;
            return 1;
        }
        AF(arg0, s16, 0xA) = (s16) (temp_v0_2 - 8);
        goto block_9;
    default:
        return 0;
    }
}

void func_sc06_025_8017E3C0(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_025_80188804) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->state = 1;
        arg0->targetClass = 0;
        SetScript(arg0, (s32) &D_sc06_025_80188844);
        arg0->timer = 0xA;
    }
}

void EventOpening(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        StartEvent((s32) arg0, (s32) &D_sc06_025_801887C4);
        AF(arg0, s16, 2) = 2;
        PlaySoundId(0xC0C, 0);
    }
}

void func_sc06_025_8017E48C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 3;
        PlaySoundId(0xC11, 0);
    }
}

void func_sc06_025_8017E4D8(void) {
}

void func_sc06_025_8017E4E0(o)
    u8 *o;
{
    u32 *ot;
    u8 *p;

    ot = (u32 *) g_WorldOtOrg[D_800B9A02].ot;
    p = AllocPrim(0x30);
    if (p != 0) {
        SetDrawMode(p, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
        AF(p, u8, 0x10) = AF(o, s32, 0x1C);
        AF(p, u8, 0x18) = AF(o, s32, 0x1C);
        AF(p, u8, 0x20) = AF(o, s32, 0x1C);
        AF(p, u8, 0x28) = AF(o, s32, 0x1C);
        AF(p, u8, 0x11) = AF(o, s32, 0x1C);
        AF(p, u8, 0x19) = AF(o, s32, 0x1C);
        AF(p, u8, 0x21) = AF(o, s32, 0x1C);
        AF(p, u8, 0x29) = AF(o, s32, 0x1C);
        AF(p, u8, 0x12) = AF(o, s32, 0x1C);
        AF(p, u8, 0x1A) = AF(o, s32, 0x1C);
        AF(p, u8, 0x22) = AF(o, s32, 0x1C);
        AF(p, u8, 0x2A) = AF(o, s32, 0x1C);
        AF(p, u8, 0xF) = 8;
        AF(p, u8, 0x13) = 0x3A;
        AF(p, s16, 0x14) = -0xA0;
        AF(p, s16, 0x1C) = 0xA0;
        AF(p, s16, 0x24) = -0xA0;
        AF(p, s16, 0x2C) = 0xA0;
        AF(p, s16, 0x16) = -0x78;
        AF(p, s16, 0x1E) = -0x78;
        AF(p, s16, 0x26) = 0x78;
        AF(p, s16, 0x2E) = 0x78;
        AddPrim(ot, p + 0xC);
        AddPrim(ot, p);
    }
}

void func_sc06_025_8017E648(StageActor *arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = arg0->state;
    switch (temp_v1) {                              /* irregular */
    case 0:
        arg0->timer = 0x7F;
        arg0->state = 1U;
        return;
    case 1:
        temp_v0 = arg0->timer - 1;
        arg0->timer = temp_v0;
        if (temp_v0 > 0) {
            func_sc06_025_8017E4E0();
            return;
        }
        FreeActor((s32) arg0);
        return;
    }
}

void ArenaInit(u8 *o) {
    switch (AF(o, u16, 2)) {
    case 0:
        AF(o, s16, 2)++;
        D_sc06_025_801B1720 = -1;
        D_sc06_025_801B1740 = 4;
        D_801270C8 = 0;
        D_801270CC = 0;
        D_sc06_025_801B170C = 0;
        D_sc06_025_801B1708 = 0;
        D_sc06_025_801B1704 = 0;
        D_sc06_025_801B1700 = 0;
        D_sc06_025_801B1724 = 0;
        D_sc06_025_801B1738 = 0;
        D_sc06_025_801B171C = 0;
        D_sc06_025_801B1718 = 0;
        D_sc06_025_801B1710 = 0;
        D_sc06_025_801B1714 = 0;
        D_sc06_025_801B1B54 = 0;
        D_sc06_025_801B1730 = 0;
        D_sc06_025_801B172C = 0;
        D_sc06_025_801B1728 = 0;
        D_sc06_025_801B1734 = 0;
        D_sc06_025_801B173C = 0;
        D_sc06_025_801B1744 = 0;
        D_sc06_025_801B1748 = 0;
        D_sc06_025_801B174C = 0xFF;
        SpawnActorArg(0x2CD, 0, 0);
        SpawnActorArg(0x2C7, 0, 0);
        SpawnActorArg(0x2C7, 1, 0);
        SpawnActorArg(0x2C7, 2, 0);
        SpawnActorArg(0x2C7, 3, 0);
        SpawnActorArg(0x2C8, 0, 0);
        SpawnActorArg(0x2C8, 1, 0);
        SpawnActorArg(0x2C8, 2, 0);
        SpawnActorArg(0x2C8, 3, 0);
        SpawnActorArg(0x2CA, 0, 0);
        SpawnActorArg(0x2CA, 1, 0);
        SpawnActorArg(0x2CA, 2, 0);
        SpawnActorArg(0x2CA, 3, 0);
        SpawnActorArg(0x2CB, 0, 0);
        SpawnActorArg(0x2CB, 1, 0);
        SpawnActorArg(0x327, 0, 0);
        SpawnActorArg(0x327, 1, 0);
        SpawnActorArg(0x327, 2, 0);
        SpawnActorArg(0x2C9, 0, 0);
        SpawnActorArg(0x32F, 0, 0);
        SpawnActorArg(0x32F, 1, 0);
        func_sc06_025_8017E95C();
        break;
    case 1:
        func_sc06_025_8017E9B8();
        func_sc06_025_8017EEC4();
        func_sc06_025_8017F580();
        func_sc06_025_8017F894();
        func_sc06_025_80181BC8();
        func_sc06_025_801817A8();
        break;
    }
}

void func_sc06_025_8017E95C(void) {
    s32 i;
    s32 off;

    ZeroFill(&D_sc06_025_801B12F0, 0x410);
    for (i = 0; i < 4; i++) {
        off = i * 0x104;
        *(s16 *)((u8 *)&D_sc06_025_801B12F0 + off) = 1;
        *(s16 *)((u8 *)&D_sc06_025_801B12F8 + off) = i;
    }
}

extern void (*D_sc06_025_801888B8[])();
extern void func_sc06_025_80181E08(u8 *o);
void func_sc06_025_8017E9B8(void) {
    u8 *p;
    s32 i;

    p = (u8 *)&D_sc06_025_801B12F0;
    for (i = 0; i < 4; i++) {
        if (AF(p, s16, 0) != 0) {
            D_sc06_025_801888B8[AF(p, s16, 0)](p);
        }
        p += 0x104;
    }
    p = (u8 *)&D_sc06_025_801B12F0;
    for (i = 0; i < 4; i++) {
        if (AF(p, s16, 0) != 0 && AF(p, s32, 0xC) != 0) {
            func_sc06_025_80181E08(p);
        }
        p += 0x104;
    }
}

void func_sc06_025_8017EA74(u8 *o) {
    typedef struct { s16 v[4]; } S4;
    S4 t;
    SV8 a;
    SV8 r;
    union { s32 w; XY s; s16 pad[4]; } w;
    s32 v;
    u8 unused[0x18];
    u8 *p;
    s32 c;

    t = *(S4 *)&D_sc06_025_801AFF3C;
    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0 || AF(p, u16, 2) >= 8) {
        return;
    }
    switch (AF(o, s16, 2)) {
    case 0:
        if (AF(p, u16, 2) == 3) {
            AF(o, s16, 2)++;
        }
        break;
    case 1:
        AF(o, s16, 0x16) = D_sc06_025_801888CC[AF(o, s16, 8) * 4];
        AF(o, s16, 0x1A) = D_sc06_025_801888CE[AF(o, s16, 8) * 4];
        AF(o, s16, 0x1E) = D_sc06_025_801888D0[AF(o, s16, 8) * 4];
        AF(o, s16, 2)++;
        AF(o, s16, 0xA) = 0;
        break;
    case 2:
        if (AF(o, s16, 8) < 2) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            AF(o, s32, 0xC) = 1;
        } else {
            a.x = g_PlayerX;
            a.y = D_80126B62;
            a.z = D_80126B66;
            if (AF(p, u16, 2) == 4) {
                AF(o, s32, 0xC) = 1;
            } else {
                AF(o, s32, 0xC) = 0;
            }
        }
        a.y = D_sc06_025_801888EE[AF(o, s16, 8) * 4];
        a.x += D_sc06_025_801888EC[AF(o, s16, 8) * 4];
        a.z += D_sc06_025_801888F0[AF(o, s16, 8) * 4];
        r.x = AF(o, u16, 0x16);
        r.y = AF(o, u16, 0x1A);
        r.z = AF(o, u16, 0x1E);
        AngleToVec2(&w, AF(o, s16, 4), 0x50);
        v = w.w;
        a.x += w.s.x * 2;
        a.z += v >> 16;
        AF(o, s16, 4) += t.v[AF(o, s16, 8)];
        AF(o, s16, 0xA) += 0x200;
        if (AF(o, s16, 0xA) >= 0x1000) {
            AF(o, s16, 0xA) = 0x1000;
        }
        c = func_sc06_025_80182090(0x105050, AF(o, s16, 0xA));
        func_sc06_025_80181CA4(o, &a, 0x60, c, &r, 8, c, 3);
        break;
    }
}

void func_sc06_025_8017ED5C(u8 *o) {
    SV8 a;
    SV8 r;
    union { s32 w; XY s; s16 pad[4]; } w;
    u8 unused[8];
    s32 v;
    u8 *p;
    s32 c;
    s32 s;

    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0) {
        return;
    }
    switch (s = AF(o, s16, 2)) {
    case 0:
        AF(o, s32, 0x14) = AF(p, s32, 4);
        AF(o, s32, 0x18) = AF(p, s32, 8) - 0x1000000;
        AF(o, s32, 0x1C) = AF(p, s32, 0xC);
        AF(o, s16, 0xA) = 0;
        AF(o, s16, 2)++;
        break;
    case 1:
        a.x = AF(p, u16, 6);
        a.y = AF(p, u16, 0xA);
        a.z = AF(p, u16, 0xE);
        AF(o, s32, 0xC) = 1;
        r.x = AF(o, u16, 0x16);
        r.y = AF(o, u16, 0x1A);
        r.z = AF(o, u16, 0x1E);
        AngleToVec2(&w, 0, 0x50);
        v = w.w;
        a.x += w.s.x * 2;
        a.z += v >> 16;
        AF(o, s16, 0xA) = 0x1000;
        c = func_sc06_025_80182090(0x82828, 0x1000);
        a.z -= 0x20;
        r.z -= 0x20;
        func_sc06_025_80181CA4(o, &a, 0x60, c, &r, 8, c, 1);
        break;
    }
}

extern void func_sc06_025_8017EF94(SV8 *pos, s32 idx);
void func_sc06_025_8017EEC4(void) {
    SV8 v;
    u8 *p;

    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0) {
        return;
    }
    switch (AF(p, u16, 2)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        D_sc06_025_801B1738 = 1;
        break;
    case 1:
    case 7:
    case 8:
        D_sc06_025_801B1738 = 0;
        break;
    }
    if (D_sc06_025_801B1738 != 0) {
        v.x = AF(p, u16, 6);
        v.y = AF(p, u16, 0xA);
        v.z = AF(p, u16, 0xE);
        v.y -= 0x50;
        func_sc06_025_8017EF94(&v, 0);
        func_sc06_025_8017EF94(&v, 1);
        func_sc06_025_8017EF94(&v, 2);
    }
}

void func_sc06_025_8017EF94(SV8 *pos, s32 idx) {
    u8 unused[0x20];
    SV8 v;
    SV8 a, b, c, d;
    s32 p, flag;
    Spr *r, *q;
    s32 k, w;
    s32 ty;
    s32 x, y, n, sum, h, dy0, dy1;

    ProjectPointOtz(pos, &v);
    if ((u32)(v.x + 0x77) >= 0x13F || (u32)(v.x + 0xC7) >= 0x13F) {
        return;
    }
    ty = v.y;
    if ((u32)(ty + 0x63) >= 0xEF || (u32)(ty + 0x8B) >= 0xEF) {
        return;
    }
    v.x += 0x78;
    v.y = D_800B9A02 != 0 ? ty + 0x64 : ty + 0x154;
    if (v.y <= 0) {
        v.y = 0;
    }
    x = v.x;
    y = v.y;
    n = RotTransPers(&D_sc06_025_8018890C[idx][0], &a, &p, &flag);
    sum = n;
    r = &D_sc06_025_801B1B58;
    k = 40;
    w = 0x50;
    if (flag < 0 || n <= 0) return;
    n = RotTransPers(&D_sc06_025_8018890C[idx][1], &b, &p, &flag);
    sum += n;
    if (flag < 0 || n <= 0) return;
    n = RotTransPers(&D_sc06_025_8018890C[idx][2], &c, &p, &flag);
    sum += n;
    if (flag < 0 || n <= 0) return;
    n = RotTransPers(&D_sc06_025_8018890C[idx][3], &d, &p, &flag);
    sum += n;
    if (flag < 0 || n <= 0) return;
    D_sc06_025_801B1B74 = sum / 4;
    if (y < 0x100 && y + 0x28 >= 0x100) {
        h = 0xFF - y;
        if (h > 0) {
            AF(r, s16, 0) = x;
            AF(r, s16, 2) = y;
            AF(r, s16, 4) = w;
            AF(r, s16, 6) = h;
            AF(r, s16, 0x8) = a.x;
            AF(r, s16, 0xC) = b.x;
            AF(r, s16, 0x10) = c.x;
            AF(r, s16, 0x14) = d.x;
            AF(r, s16, 0xA) = a.y;
            AF(r, s16, 0xE) = b.y;
            AF(r, s16, 0x12) = a.y + (c.y - a.y) * h / k;
            AF(r, s16, 0x16) = b.y + (d.y - b.y) * h / k;
            func_sc06_025_8017F424(r);
        }
        dy0 = (c.y - a.y) * h / k;
        dy1 = (d.y - b.y) * h / k;
        q = r;
        AF(q, s16, 0) = x;
        AF(q, s16, 2) = 0x100;
        AF(q, s16, 4) = w;
        AF(q, s16, 6) = 0x28 - h;
        AF(q, s16, 0x8) = a.x;
        AF(q, s16, 0xC) = b.x;
        AF(q, s16, 0x10) = c.x;
        AF(q, s16, 0x14) = d.x;
        AF(q, s16, 0xA) = a.y + dy0;
        AF(q, s16, 0xE) = b.y + dy1;
        AF(q, s16, 0x12) = c.y;
        AF(q, s16, 0x16) = d.y;
        func_sc06_025_8017F424(q);
    } else {
        q = r;
        q->x = x;
        q->y = y;
        q->w = w;
        q->h = k;
        q->p[0] = AF(&a, s32, 0);
        q->p[1] = AF(&b, s32, 0);
        q->p[2] = AF(&c, s32, 0);
        q->p[3] = AF(&d, s32, 0);
        func_sc06_025_8017F424(q);
    }
}

s32 func_sc06_025_8017F424(Spr *r) {
    u8 unused[0x28];
    u8 *pk;
    u8 u, v;
    s32 z;

    pk = AllocPrim(0x28);
    AF(pk, u16, 0xE) = GetClut(0, 0x1F0);
    AF(pk, u16, 0x16) = GetTPage(2, 0, (s16)(r->x & 0xFFC0), (s16)(r->y & 0xFF00));
    AF(pk, u8, 3) = 9;
    AF(pk, s32, 4) = 0x606060;
    AF(pk, u8, 7) = 0x2C;
    u = AF(r, u8, 0) & 0x3F;
    v = AF(r, u8, 2);
    AF(pk, u8, 0xC) = u;
    AF(pk, u8, 0xD) = v;
    AF(pk, u8, 0x14) = u + AF(r, u8, 4);
    AF(pk, u8, 0x15) = v;
    AF(pk, u8, 0x1C) = u;
    AF(pk, u8, 0x1D) = v + AF(r, u8, 6);
    AF(pk, u8, 0x24) = u + AF(r, u8, 4);
    AF(pk, u8, 0x25) = v + AF(r, u8, 6);
    AF(pk, s32, 8) = r->p[0];
    AF(pk, s32, 0x10) = r->p[1];
    AF(pk, s32, 0x18) = r->p[2];
    AF(pk, s32, 0x20) = r->p[3];
    z = func_sc06_025_801823D4(AF(r, s32, 0x1C), -0x1A);
    AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pk);
}

extern s32 D_sc06_025_8018896C[];
extern void func_sc06_025_8017F664(s32 a, s32 b);
void func_sc06_025_8017F580(void) {
    u8 unused[8]; /* MATCH-TRICK: unused padding gives the original 0x28 frame */
    u8 *p;
    s32 i;
    s32 v;

    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0 || AF(p, u16, 2) != 4 || AF(p, u16, 0x34) != 2) {
        return;
    }
    if ((D_800B99DA & 0x1F) == 0) {
        D_sc06_025_801B1734 = rand() % 6;
    }
    v = D_sc06_025_8018896C[D_sc06_025_801B1734];
    for (i = 0; i < 6; i++) {
        func_sc06_025_8017F664(i, v);
    }
}

void func_sc06_025_8017F664(s32 a, s32 b) {
    SV8 v;
    SV8 w;
    s32 odd;

    odd = a & 1;
    v = D_sc06_025_80188984[odd];
    w = v;
    w.y = -0x178;
    w.z -= 0x100;
    if (odd) {
        w.x -= ((D_800B99DA & 7) - 3) * 48;
    } else {
        w.x += ((D_800B99DA & 7) - 3) * 48;
    }
    w.x += D_sc06_025_80188994[a];
    func_sc06_025_8017F788(&v, &w, b);
}

void func_sc06_025_8017F788(u8 *a, u8 *b, s32 col) {
    u8 *pr;
    s32 p;
    s32 flag;
    s32 z;

    pr = AllocPrim(0x10);
    AF(pr, s32, 4) = col;
    AF(pr, u8, 7) = 0x42;
    AF(pr, s32, 0) = 0x3000000;
    LoadWorldScreenMatrix();
    z = RotTransPers(a, pr + 8, &p, &flag);
    if (z > 0 && flag >= 0) {
        if (RotTransPers(b, pr + 0xC, &p, &flag) > 0 && flag >= 0) {
            z = func_sc06_025_801823D4(z, -0x1A);
            AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pr);
            AddDrawModeAt(z, 1);
        }
    }
}

void func_sc06_025_8017F894(void) {
    u8 *p;
    s32 i;

    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0) {
        return;
    }
    if (AF(p, u16, 2) != 4) {
        D_sc06_025_801B1730 = 0;
        return;
    }
    if (AF(p, u16, 0x34) != 2) {
        D_sc06_025_801B1730 = 0;
    }
    D_sc06_025_801B1730++;
    if (D_sc06_025_801B1730 >= 0x1F4) {
        D_sc06_025_801B1730 = 0;
    }
    for (i = 0; D_sc06_025_801889A8[i].x != -1; i++) {
        if (D_sc06_025_801889A8[i].x / 2 == D_sc06_025_801B1730) {
            func_sc06_025_8017F9D8(D_sc06_025_801889A8[i].y);
            break;
        }
    }
    if (D_sc06_025_801889A8[i].x == -1) {
        func_sc06_025_8017F9D8(0);
    }
}

void func_sc06_025_8017F9D8(s32 n) {
    u8 b[16];
    s32 i;
    s16 c;

    if (n < 0) {
        n = 0;
    } else if (n >= 8) {
        n = 7;
    }
    c = D_sc06_025_801B1728;
    if (c < n) {
        D_sc06_025_801B1728 = n;
        D_sc06_025_801B172C = 2;
    } else if (--D_sc06_025_801B172C <= 0) {
        D_sc06_025_801B172C = 2;
        if (--D_sc06_025_801B1728 <= 0) {
            D_sc06_025_801B1728 = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        b[7 - i] = b[8 + i] = i <= n;
    }
    if (D_sc06_025_801B1728 != 0) {
        b[8 + D_sc06_025_801B1728] = 2;
        b[7 - D_sc06_025_801B1728] = 2;
    }
    LoadWorldScreenMatrix();
    for (i = 0; i < 16; i++) {
        if (b[i] != 0) {
            func_sc06_025_8017FB50(i, D_sc06_025_8018899C[b[i]]);
        }
    }
}

void func_sc06_025_8017FB50(s32 idx, s32 col) {
    SV8 v[4];
    s32 p;
    s32 flag;
    u8 *pr;
    s32 i;
    s32 z;

    pr = AllocPrim(0x18);
    AF(pr, u8, 3) = 5;
    AF(pr, s32, 4) = col;
    AF(pr, u8, 7) = 0x28;
    v[0] = D_sc06_025_801889EC;
    v[0].x = v[0].x + idx * 40;
    v[0].y = v[0].y;
    v[0].z = v[0].z;
    for (i = 1; i < 4; i++) {
        v[i] = v[0];
    }
    v[1].x = v[1].x + 0x20;
    v[1].y = v[1].y;
    v[1].z = v[1].z;
    v[2].x = v[2].x;
    v[2].y = v[2].y + 0x10;
    v[2].z = v[2].z;
    v[3].x = v[3].x + 0x20;
    v[3].y = v[3].y + 0x10;
    v[3].z = v[3].z;
    z = RotTransPers(&v[0], pr + 8, &p, &flag);
    RotTransPers(&v[1], pr + 0xC, &p, &flag);
    RotTransPers(&v[2], pr + 0x10, &p, &flag);
    RotTransPers(&v[3], pr + 0x14, &p, &flag);
    z = func_sc06_025_801823D4(z, -0x1A);
    AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pr);
}

s32 func_sc06_025_8017FD28(u8 *o, s32 idx, s32 k) {
    PairTbl *e;
    s16 t;
    s32 d;
    SV8 *s;
    s16 *bv;
    s32 r;

    e = &D_sc06_025_80188CA4[idx];
    t = e->a[k];
    if (t <= 0) {
        if (D_sc06_025_801B1724 != 0) {
            return 2;
        }
        return 1;
    }
    bv = e->b;
    AF(o, s16, 0xDE) = bv[k];
    d = t / 2 - AF(o, s32, 0x1C);
    s = (SV8 *)&D_sc06_025_80189054 + bv[k];
    if (d >= 6) {
        if (D_sc06_025_801B1744 != 1) {
            D_sc06_025_801B1744 = 1;
            SetScript(o, D_sc06_025_80188D0C[D_sc06_025_801B1740]);
        }
        AF(o, s16, 0xA) = -0x1EE;
        AF(o, s16, 0x8) = 0;
    } else
    if (d == 5) {
        r = rand() % 3;
        D_sc06_025_801B1740 = r;
        SetScript(o, D_sc06_025_80188CBC[r]);
        D_sc06_025_801B1744 = 0;
        HeadingToPoint(o + 4, s);
        func_sc06_025_8017FF4C(o, s, 5);
    } else if (d > 0) {
        MoveObject(o);
        if (AF(o, s16, 0xA) > -0x1EE) {
            AF(o, s16, 0xA) = -0x1EE;
        }
    } else {
    MoveObject(o);
    if (AF(o, s16, 0xA) > -0x1EE) {
        AF(o, s16, 0xA) = -0x1EE;
    }
    AF(o, s16, 0xA) = -0x1EE;
    AF(o, s16, 0x8) = 0;
    func_sc06_025_80181B90(AF(o, s16, 0xDE));
    if (D_sc06_025_801B1724 != 0) {
        return 2;
    }
    AF(o, s16, 0xDC)++;
    }
    return 0;
}

extern s32 D_sc06_025_80188A00;
void func_sc06_025_8017FF4C(u8 *o, SV8 *v, s32 n) {
    s32 a;
    s32 b;
    s32 g;

    if (n <= 0) {
        n = 1;
    }
    a = ((v->x - AF(o, s16, 6)) << 16) / n;
    b = ((v->z - AF(o, s16, 0xE)) << 16) / n;
    g = D_sc06_025_80188A00;
    AF(o, s32, 0x44) = 0;
    AF(o, s32, 0x4C) = 0;
    AF(o, s32, 0x48) = g;
    AF(o, s32, 0x14) = (-g / 2) * n;
    AF(o, s32, 0x10) = a;
    AF(o, s32, 0x18) = b;
}

void func_sc06_025_80180020(void) {
    s16 st = D_sc06_025_801B1B8C;

    switch (st) {
    case 0:
        if (++D_sc06_025_801B1B88 >= 0x46) {
            D_sc06_025_801B1B88 = 0;
            D_sc06_025_801B1B8C = st + 1;
        }
        break;
    case 1:
        D_sc06_025_801B1B78.b.y = 0x380 - D_sc06_025_801B1B88 * 512 / 90;
        D_sc06_025_801B1B78.a.y = 0x20 - D_sc06_025_801B1B88 * 96 / 90;
        D_sc06_025_801B1B78.a.z = D_sc06_025_801B1B88 * 128 / 90 - 0x80;
        if (++D_sc06_025_801B1B88 >= 0x5A) {
            D_sc06_025_801B1B88 = 0;
            D_sc06_025_801B1B8C = st + 1;
        }
        break;
    case 2:
        if (++D_sc06_025_801B1B88 >= 0x46) {
            s16 next = st + 1;
            D_sc06_025_801B1B78 = D_sc06_025_80188D30;
            D_sc06_025_801B1B88 = 0;
            D_sc06_025_801B1B8C = next;
        }
        break;
    case 3:
        if (++D_sc06_025_801B1B88 >= 0x46) {
            D_sc06_025_801B1B78 = D_sc06_025_80188D40;
            D_sc06_025_801B1B88 = 0;
            D_sc06_025_801B1B8C = 2;
        }
        break;
    }
}

void func_sc06_025_80180284(o)
    u8 *o;
{
    AF(o, s16, 2) = 2;
    AF(o, s16, 0x34) = 0;
    PlaceObject(o, &D_sc06_025_801889F8);
    SetScript(o, &D_sc06_025_801A01A4);
    AF(o, s32, 0x1C) = 5;
    D_801270CC = 1;
    D_sc06_025_801B1710 = 0;
    D_sc06_025_801B1714 = 0;
    SetFlag(0x11E, 0);
}

void TopoNextRound(u8 *o) {
    u16 t;

    AF(o, s16, 2) = 3;
    PlaceObject(o, &D_sc06_025_801889F8);
    SetScript(o, &D_sc06_025_801A08B4);
    AF(o, s32, 0x1C) = 0x3C;
    t = D_sc06_025_801B1714;
    AF(o, s16, 0x34) = 0;
    AF(o, s16, 0xDC) = 0;
    AF(o, s16, 0xDE) = 0;
    D_sc06_025_801B1708 = 0;
    D_sc06_025_801B1724 = 0;
    D_sc06_025_801B1744 = 1;
    D_sc06_025_801B1710 = t + 1;
    if (D_sc06_025_801B1710 >= 4) {
        TopoDefeat(o);
    } else {
        StartEvent(o, &D_sc06_025_80188E40);
        ClearWorkA3E7();
        D_801270C8 = 2;
    }
}

void func_sc06_025_801803D4(u8 *o) {
    s16 h;
    s32 t;
    s32 k;

    UpdateScript();
    switch (AF(o, u16, 0x34)) {
    case 0:
        TurnToFront(o);
        if (TickTimer(o) != 0) {
            h = D_sc06_025_801B1710;
            AF(o, s16, 0x34)++;
            D_sc06_025_801B1708 = h;
        }
        break;
    case 1:
        if (D_sc06_025_801B1708 == D_sc06_025_801B170C) {
            AF(o, s16, 0x34)++;
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0xDC) = 0;
            func_sc06_025_80182148();
        }
        break;
    case 2:
        t = D_sc06_025_801B1710 - 1;
        k = AF(o, s16, 0xDC);
        AF(o, s32, 0x1C)++;
        if (func_sc06_025_8017FD28(o, t, k) == 1) {
            AF(o, s32, 0x1C) = 0x2D;
            AF(o, s16, 0xA) = -0x1EE;
            AF(o, s16, 0x8) = 0;
            AF(o, s16, 0x34)++;
        }
        break;
    case 3:
        if (TickTimer(o) != 0) {
            func_sc06_025_80180520(o);
        }
        break;
    }
}

s32 func_sc06_025_80180520(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    PlaceObject(arg0, (s32) &D_sc06_025_801889F8);
    SetScript(arg0, (s32) &D_sc06_025_801A08B4);
    AF(arg0, s32, 0x1C) = 0x1E;
    D_sc06_025_801B1744 = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, s16, 0xDE) = 0;
    D_sc06_025_801B1724 = 0;
    D_801270C8 = 1;
    UpdateScript(arg0);
    RunScript(arg0, (s32) &D_sc06_025_80188E84);
    return ClearWorkA3E7();
}

void func_sc06_025_801805BC(u8 *o) {
    s32 r;
    s32 t;
    s16 h;
    s32 i;
    s16 k;

    UpdateScript();
    switch (AF(o, u16, 0x34)) {
    case 0:
        TurnToFront(o);
        if (TickTimer(o) != 0) {
            h = D_sc06_025_801B1710;
            AF(o, s16, 0x34)++;
            D_sc06_025_801B1708 = h;
            func_8002D834();
            D_sc06_025_801B170C = 0;
        }
        break;
    case 1:
        if (D_sc06_025_801B1708 == D_sc06_025_801B170C) {
            i = D_sc06_025_801B1710;
            AF(o, s16, 0x34)++;
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0xDC) = 0;
            func_sc06_025_801807F8(D_sc06_025_80188E74[i]);
        }
        break;
    case 2:
        AF(o, s32, 0x1C)++;
        r = func_sc06_025_80180808();
        if (r == 2) {
            D_sc06_025_801B1724 = 1;
        }
        t = func_sc06_025_8017FD28(o, D_sc06_025_801B1710 - 1, AF(o, s16, 0xDC));
        switch (t) {
        case 0:
            break;
        case 1:
            if (r == 3) {
                k = AF(o, u16, 0x34);
                AF(o, s32, 0x1C) = 0;
                D_sc06_025_801B1708 = 0;
                AF(o, s16, 0xA) = -0x1EE;
                AF(o, s16, 0x8) = 0;
                AF(o, s16, 0x34) = k + 1;
            }
            break;
        case 2:
            EndEvent(o);
            func_sc06_025_80182448();
            ClearWorkA3E7();
            func_sc06_025_80180950(o);
            break;
        }
        break;
    case 3:
        if (D_sc06_025_801B170C == 0) {
            EndEvent(o);
            func_sc06_025_80182448();
            ClearWorkA3E7();
            if (D_sc06_025_801B1710 >= 3) {
                TopoDefeat(o);
            } else {
                TopoTalk(o);
            }
        }
        break;
    }
}

void func_sc06_025_801807F8(s32 arg0) {
    D_sc06_025_801B1B50 = arg0;
}

s32 func_sc06_025_80180808(void) {
    u8 *p = (u8 *)D_sc06_025_801B1B50;
    s32 t = (s16)D_sc06_025_801B1704 * 2;

    if (AF(p, s32, 0) == -1) {
        return 3;
    }
    if (D_sc06_025_801B1720 != -1) {
        if (D_sc06_025_801B1720 == AF(p, s32, 0) && t >= AF(p, s16, 4)) {
            if (AF(p, s16, 6) >= t) {
                D_sc06_025_801B1B50 = (s32)(p + 8);
                return 1;
            }
            return 2;
        }
        return 2;
    }
    return (AF(p, s16, 6) < t) * 2;
}

void TopoTalk(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc06_025_801889F8);
    SetScript(arg0, (s32) &D_sc06_025_801A1FDC);
    AF(arg0, s32, 0x1C) = 0;
    D_801270C8 = 2;
    D_sc06_025_801B1B54 = OpenMessageEx((s32) &D_sc06_025_80189BE4, 0, 0xC0);
    SetFlag(0x120, 0);
    TakePlayerControl();
    D_sc06_025_801B1714 += 1;
}

s32 func_sc06_025_80180950(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xDC) = 0;
    AF(arg0, s16, 0xDE) = 0;
    D_801270C8 = 3;
    D_sc06_025_801B1708 = 0;
    D_sc06_025_801B1710 = 0;
    AF(arg0, s32, 0x1C) = 0x16;
    return 0x16;
}

void TopoAsk(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_sc06_025_80180B7C(o);
        if (TickTimer(o) != 0) {
            SetScript(o, &D_sc06_025_801A0FBC);
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34)++;
            D_sc06_025_801B1B54 = OpenMessageEx(&D_sc06_025_801897FC, 0, 0xC0);
        }
        break;
    case 1:
        TurnToFront(o);
        if (TickTimer(o) != 0) {
            if (GetMessageAnswer(D_sc06_025_801B1B54) != 0) {
                func_sc06_025_801823FC(D_sc06_025_801B1B54);
                AF(o, s16, 0x34)++;
            }
        }
        break;
    case 2:
        TurnToFront(o);
        if (D_sc06_025_801B170C == D_sc06_025_801B1708) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34)++;
            D_801270C8 = 0;
        }
        break;
    case 3:
        TurnToFront(o);
        if (TickTimer(o) != 0) {
            SetWorkA3E7();
            SetScript(o, &D_sc06_025_801A249C);
            AF(o, s32, 0x1C) = 0x78;
            AF(o, s16, 0x34)++;
        }
        break;
    case 4:
        TurnToFront(o);
        if (--AF(o, s32, 0x1C) == 0x6C) {
            PlaySoundId(0x9DB, 0);
            func_sc06_025_80181668();
        }
        if (AF(o, s32, 0x1C) == 0x3C) {
            func_sc06_025_801822F0();
        }
        if (AF(o, s32, 0x1C) <= 0) {
            PlaySoundId(4, 0x9DB);
            func_sc06_025_80180D28(o);
        }
        break;
    }
}

void func_sc06_025_80180B7C(Mover *o) {
    s32 n = o->timer;
    s16 *p = &D_sc06_025_80189074;
    s32 a, b;

    if (n > 20) {
        func_sc06_025_80181750(o, p);
        func_sc06_025_80181C74(o, &D_sc06_025_801A19BC);
        return;
    }
    if (n == 20) {
        func_sc06_025_80181750(o, p);
        a = ((*p - o->pos[0].h.i) << 16) / n;
        b = ((D_sc06_025_80189078 - o->pos[2].h.i) << 16) / n;
        o->vel[1] = 0xFFE98000;
        o->accel[0] = 0;
        o->accel[1] = 0x24000;
        o->accel[2] = 0;
        o->vel[0] = a;
        o->vel[2] = b;
        MoveObject(o);
        if (o->pos[1].h.i >= -0x1ED) {
            o->pos[1].h.i = -0x1EE;
        }
    } else if (n > 6) {
        func_sc06_025_80181750(o, p);
        MoveObject(o);
        if (o->pos[1].h.i >= -0x1ED) {
            o->pos[1].h.i = -0x1EE;
        }
    } else if (n == 6) {
        func_sc06_025_80181C74(o, &D_sc06_025_8018885C);
        MoveObject(o);
        if (o->pos[1].h.i >= -0x1ED) {
            o->pos[1].h.i = -0x1EE;
        }
    } else if (n >= 3) {
        MoveObject(o);
        if (o->pos[1].h.i >= -0x1ED) {
            o->pos[1].h.i = -0x1EE;
        }
    } else {
        o->pos[1].h.i = -0x1EE;
        o->pos[1].h.frac = 0;
        TurnToFront(o);
    }
}

void func_sc06_025_80180D28(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc06_025_801889F8);
    SetScript(arg0, (s32) &D_sc06_025_801A0FBC);
    D_801270C8 = 0;
    AF(arg0, s32, 0x1C) = 0x3C;
}

void TopoDefeat(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc06_025_801889F8);
    SetScript(arg0, (s32) &D_sc06_025_801A892C);
    D_801270C8 = 0;
    AF(arg0, s32, 0x1C) = 0;
    GainStat0(0x190);
    PlaySoundId(0xA98, 0);
    SetProgress(0x5DC);
    func_800D0C48(1);
    ZeroFill((s32) &D_sc06_025_801B12F0, 0x410);
    ResetScriptVM();
    TakePlayerControl();
    RunScript(arg0, (s32) &D_sc06_025_80188F18);
}

extern void (*D_sc06_025_80189020[])();
extern void func_sc06_025_80182170(u8 *o);
void func_sc06_025_80180E30(StageActor *o) {
    u16 t;

    D_sc06_025_80189020[o->state]();
    t = o->kind;
    D_sc06_025_801B1720 = -1;
    if (t != 0) {
        func_sc06_025_80182170(o);
    }
}

void func_sc06_025_80180E98(StageActor *arg0) {
    D_sc06_025_8018908C[arg0->state]();
}

s32 func_sc06_025_80180ED4(s32 n) {
    return (s32)(&D_sc06_025_801890A4 + n * 8);
}

s32 func_sc06_025_80180EE8(void) {
    u8 *p;
    u16 t;

    p = (u8 *)FindActorByKind(0x2CD);
    if (p == 0) {
        return 1;
    }
    t = AF(p, u16, 2);
    if (t != 6) {
        return t != 7;
    }
    return 0;
}

void func_sc06_025_80180F34(StageActor *arg0) {
    D_sc06_025_801890CC[arg0->state]();
}

void func_sc06_025_80180F70(StageActor *o) {
    typedef struct { u8 pad[0xFC]; s16 fc; } ObjS;
    s32 i;
    s32 s;
    s32 t;

    if (o->workE8 == 0 && (o->hitState & 1)) {
        o->workE8 = 0x14;
    }
    if (o->workE8 != 0) {
        if (--o->workE8 == 0) {
            o->hitCode = 0;
            o->hitState &= ~1;
        }
    }
    for (i = 0; D_sc06_025_801891F4[i].y != -1; i++) {
        if ((s16)D_sc06_025_801B1704 * 2 == D_sc06_025_801891F4[i].x) {
            if (D_sc06_025_801891F4[i].y == 1) {
                ((ObjS *)o)->fc = 1;
            } else {
                ((ObjS *)o)->fc = 2;
            }
        }
    }
    s = o->param;
    if (s == 1 || s == 3) {
        return;
    }
    switch (o->unkFC) {
    case 1:
        if (s == 0) {
            InitMime(D_sc06_025_801B1B90 + s * 16, &D_sc06_025_80189174, D_sc06_025_8019AB90);
        } else {
            InitMime(D_sc06_025_801B1B90 + s * 16, &D_sc06_025_801891B4, D_sc06_025_8019B030);
        }
        o->unkFC = 0;
        break;
    case 2:
        if (s == 0) {
            InitMime(D_sc06_025_801B1B90 + s * 16, &D_sc06_025_80189194, D_sc06_025_8019AB90);
        } else {
            InitMime(D_sc06_025_801B1B90 + s * 16, &D_sc06_025_801891D4, D_sc06_025_8019B030);
        }
        o->unkFC = 0;
        break;
    }
    StepMime(D_sc06_025_801B1B90 + o->param * 16);
}

void func_sc06_025_80181148(u8 *o) {
    s32 m;
    s32 s;

    m = AllocActorModel();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(m, D_sc06_025_801890D4[AF(o, s16, 0x70)]);
    AF(o, u16, 0x5C) = 0xC800;
    AF(o, u8, 0x75) = 2;
    AF(o, s16, 2) = 1;
    AF(o, s32, 0xE8) = 0;
    AF(o, s32, 0x58) = (s32)(&D_sc06_025_80189104 + AF(o, s16, 0x70) * 16) | 0x40000000;
    PlaceObject(o, (AF(o, s16, 0x70) * 8) + &D_sc06_025_801890E4);
    AF(o, s16, 0xFC) = 0;
    s = AF(o, s16, 0x70);
    if (s == 0) {
        InitMime(D_sc06_025_801B1B90, &D_sc06_025_80189174, D_sc06_025_8019AB90);
    } else if (s == 2) {
        InitMime(D_sc06_025_801B1B90 + 0x20, &D_sc06_025_801891B4, D_sc06_025_8019B030);
    }
}

void func_sc06_025_80181260(StageActor *arg0) {
    D_sc06_025_8018923C[arg0->state]();
}

void func_sc06_025_8018129C(StageActor *arg0) {
    D_sc06_025_8018939C[arg0->state]();
    if (arg0->kind != 0) {
        CarryPlayer((s32) arg0);
    }
}

void func_sc06_025_801812FC(u8 *o) {
    s32 k;
    s32 t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        k = 0x1000;
        do { } while (0);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        t = D_sc06_025_801B173C;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = k;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = k;
        if (t != 0) {
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34) = 1;
            if (AF(o, s16, 0x70) == 0) {
                PlaySoundId(0xC0F, 0);
            }
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = ((0x3C - AF(o, s32, 0x1C)) << 12) / 60;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
        if (TickTimer(o) != 0) {
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x34) = 2;
            if (AF(o, s16, 0x70) == 0) {
                PlaySoundId(0xC10, 0);
            }
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
        break;
    }
}

void func_sc06_025_80181488(StageActor *arg0) {
    D_sc06_025_801893F4[arg0->state]();
}

s32 func_sc06_025_801814C4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    PlaceObject(arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_80189408));
    AF(arg0, s32, 0x1C) = 0x77;
    return 0x77;
}

void func_sc06_025_80181514(u8 *o) {
    u8 *p;
    u8 *m;
    s32 t;
    s32 n;

    if (AF(o, s32, 0x1C) & 1) {
        return;
    }
    p = (u8 *)SpawnPropFrom(o, 0x22);
    if (p == 0) {
        return;
    }
    m = AF(p, u8 *, 0x20);
    if (m != 0) {
        AF(m, u16, 0x2C) = 0xC040;
    }
    AF(p, u16, 0xE) -= rand() & 0x3F;
    n = AF(o, s32, 0x1C);
    t = n < 0x3D ? n : 0x78 - n;
    AF(p, s32, 0x18) = 0xFFF80000 - (t << 21) / 60;
    AF(p, s16, 0x34) = (((t * 3 << 13) / 60 + 0x1000) & ~3) | 1;
    AF(AF(p, u8 *, 0x20), s32, 4) |= 0x70000000;
}

void func_sc06_025_8018162C(StageActor *arg0) {
    D_sc06_025_8018942C[arg0->state]();
}

extern s32 FindActorByKindArg();
void func_sc06_025_80181668(void) {
    s32 i;
    u8 *p;

    for (i = 0; i < 3; i++) {
        p = (u8 *)FindActorByKindArg(0x327, (s16)i);
        if (p != 0) {
            AF(p, s16, 0xFC) = 1;
        }
    }
}

void func_sc06_025_801816C4(StageActor *arg0) {
    D_sc06_025_801894F0[arg0->state]();
}

s32 TurnToFront(s32 arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = TurnStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0, 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) ((u16) AF(temp_a0, s16, 0x12) + temp_v0);
    return temp_v0;
}

s32 func_sc06_025_80181750(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = TurnStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg1), 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) ((u16) AF(temp_a0, s16, 0x12) + temp_v0);
    return temp_v0;
}

void func_sc06_025_801817A8(void) {
    switch (D_sc06_025_801B1700) {                  /* irregular */
    case 0:
        D_sc06_025_801B1704 += 1;
        if (D_sc06_025_801B170C != D_sc06_025_801B1708) {
            PlaySoundId(0x27, (s32) (&D_sc06_025_801894F8)[D_sc06_025_801B1708]);
            D_sc06_025_801B1700 = 1;
        }
        if ((D_sc06_025_801B170C != 0) && ((s16) D_sc06_025_801B1704 >= D_sc06_025_80189500[D_sc06_025_801B170C])) {
            D_sc06_025_801B1708 = 0;
            PlaySoundId(0x27, (s32) D_sc06_025_801894F8);
            D_sc06_025_801B1700 = 1;
            return;
        }
        return;
    case 1:
        if ((func_8002D80C() & 0xFFFF) == (s16) (&D_sc06_025_801894F8)[D_sc06_025_801B1708]) {
            D_sc06_025_801B170C = D_sc06_025_801B1708;
            D_sc06_025_801B1700 = 0;
            D_sc06_025_801B1704 = 0;
        }
        break;
    }
}

void func_sc06_025_801818D8(SV8 *pos, s32 k, s32 n, s32 col) {
    SV8 v[4];
    union { s32 w; XY s; s16 pad[4]; } w;
    s32 p;
    s32 flag;
    UXY x;
    u8 *pr;
    s32 i;
    s32 ang;
    s32 s;
    s32 r;
    s32 h;
    s32 z;

    if (n > 0 && n < 10) {
        LoadWorldScreenMatrix();
        s = rsin((n << 11) / 10);
        h = (s * 0xC0) >> 12;
        r = s + 0x1000;
        for (i = 0, ang = 0; i < 16; i++, ang += 0x100) {
            AngleToVec2(&w, ang, k);
            x.w = w.w;
            v[0].x = pos->x + x.s.x;
            v[0].y = pos->y;
            v[0].z = pos->z + x.s.y;
            v[2].x = pos->x + ((x.s.x * r) >> 12);
            v[2].y = pos->y - h;
            v[2].z = pos->z + ((x.s.y * r) >> 12);
            AngleToVec2(&w, ang + 0x100, k);
            x.w = w.w;
            v[1].x = pos->x + x.s.x;
            v[1].y = pos->y;
            v[1].z = pos->z + x.s.y;
            v[3].x = pos->x + ((x.s.x * r) >> 12);
            v[3].y = pos->y - h;
            v[3].z = pos->z + ((x.s.y * r) >> 12);
            pr = AllocPrim(0x24);
            AF(pr, s32, 4) = col;
            AF(pr, s32, 0xC) = col;
            AF(pr, s32, 0x14) = AF(pr, s32, 0x1C) = 0;
            AF(pr, u8, 7) = 0x3A;
            AF(pr, s32, 0) = 0x8000000;
            z = RotTransPers(&v[0], pr + 8, &p, &flag);
            RotTransPers(&v[1], pr + 0x10, &p, &flag);
            RotTransPers(&v[2], pr + 0x18, &p, &flag);
            RotTransPers(&v[3], pr + 0x20, &p, &flag);
            z = func_sc06_025_801823D4(z, -0x1A);
            AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pr);
            AddDrawModeAt(z, 1);
        }
    }
}

void func_sc06_025_80181B90(s32 n0) {
    u8 *p;

    p = (u8 *)FindActorByKindArg(0x2C7, (s16)n0);
    if (p != 0) {
        AF(p, s32, 0x1C) = 10;
    }
}

void func_sc06_025_80181BC8(void) {
    s32 t;

    t = D_80126B62 == -0x178;
    if (D_sc06_025_801B1718 == 0 && t) {
        D_sc06_025_801B171C = 1;
    } else {
        D_sc06_025_801B171C = 0;
    }
    D_sc06_025_801B1718 = t;
}

extern void Square0();
s32 func_sc06_025_80181C1C(o)
    u8 *o;
{
    V3 in;
    V3 out;

    in.x = AF(o, s16, 6) - (s16)g_PlayerX;
    in.y = 0;
    in.z = AF(o, s16, 0xE) - D_80126B66;
    Square0(&in, &out);
    return out.x + out.z;
}

s32 func_sc06_025_80181C74(StageActor *arg0, AnimEntry *arg1) {
    AnimEntry *var_v0;

    var_v0 = arg0->script;
    if (var_v0 != arg1) {
        var_v0 = SetScript(arg0, arg1);
    }
    return var_v0;
}

void func_sc06_025_80181CA4(u8 *o, SV8 *a, s32 ra, s32 c, SV8 *r, s32 rb, s32 c2, s32 n) {
    typedef struct { u8 pad[0x2C]; SV8 v[12]; SV8 w[12]; } ObjS;
    union { s32 w; XY s; s16 pad[4]; } w1;
    union { s32 w; XY s; s16 pad[4]; } w2;
    s32 i;
    s32 ang;
    s32 v;

    for (i = 0, ang = 0; i < 12; i++, ang += 0x155) {
        AngleToVec2(&w1, ang, ra);
        v = w1.w;
        ((ObjS *)o)->v[i].x = a->x + (v >> 16);
        ((ObjS *)o)->v[i].y = a->y;
        ((ObjS *)o)->v[i].z = a->z + v;
        AngleToVec2(&w2, ang, rb);
        v = w2.w;
        ((ObjS *)o)->w[i].x = r->x + (v >> 16);
        ((ObjS *)o)->w[i].y = r->y;
        ((ObjS *)o)->w[i].z = r->z + v;
    }
    AF(o, s32, 0xEC) = c;
    AF(o, s32, 0xF0) = c2;
    AF(o, s16, 6) = n;
    *(SV8 *)(o + 0xF4) = *a;
    *(SV8 *)(o + 0xFC) = *r;
}

void func_sc06_025_80181E08(u8 *o) {
    s32 p;
    s32 flag;
    SV8 *v;
    SV8 *w;
    u8 *pr;
    u8 *pq;
    s32 i;
    s32 z;
    s32 col;
    s32 depth;

    LoadWorldScreenMatrix();
    depth = AF(o, s16, 6);
    v = (SV8 *)(o + 0x2C);
    w = (SV8 *)(o + 0x8C);
    for (i = 0; i < 12; i++, v++, w++) {
        pr = AllocPrim(0x24);
        AF(pr, s32, 4) = AF(pr, s32, 0xC) = AF(o, s32, 0xEC);
        AF(pr, s32, 0x14) = AF(pr, s32, 0x1C) = AF(o, s32, 0xF0);
        AF(pr, u8, 7) = 0x3A;
        AF(pr, s32, 0) = 0x8000000;
        if (i != 11) {
            z = RotTransPers4(v, v + 1, w, w + 1, pr + 8, pr + 0x10, pr + 0x18, pr + 0x20, &p, &flag);
        } else {
            z = RotTransPers4(o + 0x84, o + 0x2C, o + 0xE4, o + 0x8C, pr + 8, pr + 0x10, pr + 0x18, pr + 0x20, &p, &flag);
        }
        z = func_sc06_025_801823D4(z, -0x1A);
        AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pr);
        AddDrawModeAt(z, depth);
    }
    col = func_sc06_025_80182090(AF(o, s32, 0xEC), 0x2800);
    v = (SV8 *)(o + 0x2C);
    for (i = 0; i < 12; i++) {
        pq = AllocPrim(0x1C);
        AF(pq, s32, 4) = col;
        AF(pq, s32, 0x14) = col;
        AF(pq, s32, 0xC) = col;
        AF(pq, u8, 7) = 0x32;
        AF(pq, s32, 0) = 0x6000000;
        z = RotTransPers(&v[i], pq + 8, &p, &flag);
        RotTransPers(&v[(i + 1) % 12], pq + 0x10, &p, &flag);
        RotTransPers(o + 0xF4, pq + 0x18, &p, &flag);
        z = func_sc06_025_801823D4(z, -0x1A);
        AddPrim(g_WorldOtOrg[D_800B9A02].ot + z * 4, pq);
        AddDrawModeAt(z, depth);
    }
}

extern s32 func_sc06_025_80182118(s32 arg0, s32 arg1);
s32 func_sc06_025_80182090(u32 c, s32 s) {
    u32 r;
    u32 g;
    u32 b;

    r = c & 0xFF;
    g = (c >> 8) & 0xFF;
    b = (c >> 16) & 0xFF;
    r = func_sc06_025_80182118(r, s);
    g = func_sc06_025_80182118(g, s);
    b = func_sc06_025_80182118(b, s);
    return r | (g << 8) | (b << 16);
}

s32 func_sc06_025_80182118(s32 arg0, s32 arg1) {
    s32 var_a0;

    var_a0 = (s32) (arg0 * arg1) >> 0xC;
    if (var_a0 < 0) {
        var_a0 = 0;
    } else if (var_a0 >= 0x100) {
        var_a0 = 0xFF;
    }
    return var_a0;
}

s32 func_sc06_025_80182148(void) {
    return ZeroFill((s32) &D_sc06_025_801B1750, 0x400);
}

extern void func_sc06_025_80182268();
void func_sc06_025_80182170(u8 *o) {
    switch (AF(o, u16, 2)) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        func_sc06_025_8017DB6C(0);
        if (AF(o, u16, 0x34) < 2) {
            func_sc06_025_80182268(-0x7000, 0x7000, -0x39, 0x230);
        } else {
            func_sc06_025_80182268(-0x10, 0x10, 0x1B0, 0x1CA);
        }
        break;
    case 4:
        func_sc06_025_80182268(-0x7000, 0x7000, 0x140, 0x230);
        break;
    case 5:
        func_sc06_025_80182268(-0x7000, 0x7000, 0x140, 0x230);
        break;
    case 6:
        func_sc06_025_80182268(-0x7000, 0x7000, -0x39, 0x230);
        break;
    case 7:
        func_sc06_025_80182268(-0x7000, 0x7000, -0x39, 0x230);
        break;
    case 8:
        func_sc06_025_80182268(-0x7000, 0x7000, -0x39, 0x3D0);
        break;
    }
}

void func_sc06_025_80182268(s32 a, s32 b, s32 c, s32 d) {
    if ((s16)g_PlayerX < a) {
        g_PlayerX = a;
    }
    if (b < (s16)g_PlayerX) {
        g_PlayerX = b;
    }
    if (D_80126B66 < c) {
        D_80126B66 = c;
    }
    if (d < D_80126B66) {
        D_80126B66 = d;
    }
}

s32 func_sc06_025_801822F0(void) {
    s32 temp_v0;

    temp_v0 = HitPlayer(1, 0xC01A, 0, 0x5A, /* extra? */ &D_sc06_025_80189514, /* extra? */ &D_sc06_025_8018950C);
    g_PlayerHitFacing = 0;
    return temp_v0;
}

s32 func_sc06_025_8018233C(Mover *arg0) {
    s32 var_v0;

    var_v0 = TickTimer(arg0);
    if (var_v0 != 0) {
        var_v0 = D_80126B66 < -0x38;
        if (var_v0 != 0) {
            var_v0 = D_80126B62 < -0x1B8;
            if (var_v0 == 0) {
                HitPlayer(1, 0xC018, 0, 0x5A, /* extra? */ &D_sc06_025_80189524, /* extra? */ &D_sc06_025_8018951C);
                var_v0 = 0x5A;
                g_PlayerHitFacing = 0;
                arg0->timer = 0x5A;
            }
        }
    }
    return var_v0;
}

s32 func_sc06_025_801823D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;

    var_a0 = arg0 + arg1;
    if (var_a0 < 0) {
        var_a0 = 0;
    } else if (var_a0 >= 0x1000) {
        var_a0 = 0xFFF;
    }
    return var_a0;
}

extern void CloseMessage();
void func_sc06_025_801823FC(u8 *p) {
    if (p != 0 && AF(p, s32, 0) != 0 && AF(p, s16, 4) != 0 && AF(p, s16, 4) != 0xE) {
        CloseMessage(p);
    }
}

s32 func_sc06_025_80182448(s32 arg0) {
    return ClearObjPush((s32) &g_Player);
}

void func_sc06_025_80182470(void) {
    if (D_80126B66 >= 0xC0) {
        func_sc06_025_80180284();
    }
}

void func_sc06_025_801824A0(void) {
    D_801270C8 = 2;
}

void func_sc06_025_801824B4(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        StartEvent(o, &D_sc06_025_80188D50);
        ClearWorkA3E7();
        o->stateCount++;
        break;
    case 1:
        if (GetFlag(0x11E) & 0xFF) {
            SetFlag(0x11E, 0);
            func_sc06_025_80181C74(o, &D_sc06_025_801A249C);
        }
        if (IsEventDone(o) == 0) {
            break;
        }
        EndEvent(o);
        ClearWorkA3E7();
        o->stateCount++;
        break;
    case 2:
        D_801270CC = 2;
        TopoNextRound(o);
        break;
    case 3:
        if (D_80126B62 != -0x178) {
            o->stateCount = 0;
        }
        break;
    }
}

s32 func_sc06_025_801825C4(u8 *arg0) {
    return AF(arg0, u16, 2) != 3;
}

s32 func_sc06_025_801825D8(u8 *arg0) {
    return AF(arg0, u16, 2) != 4;
}

void func_sc06_025_801825EC(u8 *o) {
    s32 n;

    if (GetFlag(0x120) & 0xFF) {
        SetFlag(0x120, 0);
        SetScript(o, &D_sc06_025_801A249C);
    }
    if (GetMessageAnswer(D_sc06_025_801B1B54) != 0) {
        func_80174714();
        func_sc06_025_801823FC(D_sc06_025_801B1B54);
        AF(o, s16, 2) = 3;
        PlaceObject(o, &D_sc06_025_801889F8);
        SetScript(o, &D_sc06_025_801A08B4);
        AF(o, s32, 0x1C) = 0x3C;
        n = D_sc06_025_801B1714;
        AF(o, s16, 0x34) = 0;
        AF(o, s16, 0xDC) = 0;
        AF(o, s16, 0xDE) = 0;
        D_sc06_025_801B1708 = 0;
        D_sc06_025_801B1724 = 0;
        D_sc06_025_801B1744 = 1;
        D_sc06_025_801B1710 = n + 1;
        if (D_sc06_025_801B1710 >= 4) {
            TopoDefeat(o);
        } else {
            StartEvent(o, &D_sc06_025_80188E40);
            ClearWorkA3E7();
            D_801270C8 = 2;
        }
    }
}

void func_sc06_025_80182720(u8 *o) {
    s32 n;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34)++;
        }
        break;
    case 1:
        if (D_80126B66 >= 0xC0) {
            AF(o, s16, 2) = 3;
            PlaceObject(o, &D_sc06_025_801889F8);
            SetScript(o, &D_sc06_025_801A08B4);
            AF(o, s32, 0x1C) = 0x3C;
            n = D_sc06_025_801B1714;
            AF(o, s16, 0x34) = 0;
            AF(o, s16, 0xDC) = 0;
            AF(o, s16, 0xDE) = 0;
            D_sc06_025_801B1708 = 0;
            D_sc06_025_801B1724 = 0;
            D_sc06_025_801B1744 = 1;
            D_sc06_025_801B1710 = n + 1;
            if (D_sc06_025_801B1710 >= 4) {
                TopoDefeat(o);
            } else {
                StartEvent(o, &D_sc06_025_80188E40);
                ClearWorkA3E7();
                D_801270C8 = 2;
            }
        }
        break;
    }
}

void func_sc06_025_80182850(Mover *o) {
    UpdateModelZYX(o);
    StopMotion(o);
    SetLocalVelocity(o, &D_sc06_025_80188EE4);
    o->accel[1] = D_sc06_025_80188EF0;
    o->timer = 0;
}

extern s32 D_sc06_025_80188EF4;
void func_sc06_025_801828A0(Mover *o) {
    s32 v;
    s32 t;

    MoveObject(o);
    o->model->rot.vx += D_sc06_025_80188EF4;
    v = o->timer += 4;
    if (v >= 0x100) {
        v = 0xFF;
    }
    t = v & 0xFF;
    DrawRect(-0xA0, -0x78, 0x140, 0xF0, t, t, t, 0x20, 1);
}

void func_sc06_025_80182938(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s32, 0x1C) = 0xFF;
}

void func_sc06_025_80182950(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x1C) - 0x10;
    AF(arg0, s32, 0x1C) = var_v0;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    temp_v0 = var_v0 & 0xFF;
    DrawRect(-0xA0, -0x78, 0x140, 0xF0, /* extra? */ temp_v0, /* extra? */ temp_v0, /* extra? */ temp_v0, /* extra? */ 0x20, /* extra? */ 1);
}

void func_sc06_025_801829B4(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        o->stateCount++;
        break;
    case 1:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->stateCount++;
        }
        break;
    case 2:
        func_sc06_025_8017DB6C(1);
        o->stateCount++;
        break;
    case 3:
        func_sc06_025_8017DB6C(1);
        D_sc06_025_801B173C = 1;
        break;
    }
}

void func_sc06_025_80182A78(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc06_025_801889F4[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x1000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x1000;
    ShowItemIcon(1);
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) &D_sc06_025_801889F8);
    SetScript((s32) arg0, (s32) &D_sc06_025_801A01A4);
}

extern s32 D_sc06_025_8018907C[];
void func_sc06_025_80182B44(StageActor *o) {
    SV8 v;
    u8 *p;

    if (o->timer != 0) {
        o->timer--;
        v.x = o->pos[0].h.i;
        v.y = o->pos[1].h.i;
        v.z = o->pos[2].h.i;
        func_sc06_025_801818D8(&v, 0x28, o->timer, D_sc06_025_8018907C[o->param]);
    }
    p = (u8 *)FindActorByKind(0x2CD);
    if (p != 0 && AF(p, u16, 2) >= 8) {
        HideModel(o);
    }
}

void func_sc06_025_80182BE8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc06_025_80189044[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_80189054));
    AF(arg0, s32, 0x1C) = 0;
}

extern s32 func_sc06_025_80181C1C();
extern s32 func_sc06_025_80180EE8();
extern u16 D_sc06_025_801890C4[];
extern void PlaySoundAtActor();
extern s32 D_sc06_025_8018907C[];
void func_sc06_025_80182C74(StageActor *o) {
    SV8 v;

    if (D_sc06_025_801B171C != 0 && func_sc06_025_80181C1C() < 0xC41) {
        o->timer = 10;
        D_sc06_025_801B1720 = o->param;
        if (func_sc06_025_80180EE8() != 0) {
            PlaySoundAtActor(o, D_sc06_025_801890C4[o->param], 0);
        }
    }
    if (o->timer != 0) {
        o->timer--;
        v.x = o->pos[0].h.i;
        v.y = o->pos[1].h.i;
        v.z = o->pos[2].h.i;
        func_sc06_025_801818D8(&v, 0x30, o->timer, D_sc06_025_8018907C[o->param]);
    }
}

void func_sc06_025_80182D4C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, D_sc06_025_80189094[AF(arg0, s16, 0x70)]);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    temp_v1_3 = AF(arg0, s32, 0x20);
    AF(temp_v1_3, s16, 0x1C) = 0xC00;
    AF(temp_v1_3, s16, 0x1A) = 0xC00;
    AF(temp_v1_3, s16, 0x18) = 0xC00;
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_801890A4));
    AF(arg0, s32, 0x1C) = 0;
}

s32 func_sc06_025_80182E14(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0xFC) + 0x40;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x400) {
            D_80126B60 += 0xFFF80000;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - ((0x1000 - rcos((s32) (s16) AF(arg0, u16, 0xFC))) << 7));
block_9:
        return 0;
    case 1:
        temp_v0_2 = AF(arg0, s16, 0xA);
        if (temp_v0_2 < -0x300) {
            AF(arg0, s16, 0xA) = -0x300;
            return 1;
        }
        AF(arg0, s16, 0xA) = (s16) (temp_v0_2 - 8);
        goto block_9;
    default:
        return 0;
    }
}

void func_sc06_025_80182EFC(void) {
    PlaySoundId(0xC0E, 0);
}

void func_sc06_025_80182F20(void) {
    s32 v;
    s32 c;

    v = D_sc06_025_801B1748;
    v += 4;
    if (v >= 0x100) {
        v = 0xFF;
    }
    c = v & 0xFF;
    DrawRect(-0xA0, -0x78, 0x140, 0xF0, c, c, c, 0x20, 2);
    D_sc06_025_801B1748 = v;
}

void func_sc06_025_80182F98(void) {
    s32 v;
    s32 c;

    v = D_sc06_025_801B174C;
    v -= 3;
    if (v < 0) {
        v = 0;
    }
    c = v & 0xFF;
    DrawRect(-0xA0, -0x78, 0x140, 0xF0, c, c, c, 0x20, 2);
    D_sc06_025_801B174C = v;
}

void func_sc06_025_8018300C(void) {
    Mover *temp_v0;

    temp_v0 = FindActorByKind(0x2CD);
    if (temp_v0 != 0) {
        PlaceObject(temp_v0, (s32) &D_sc06_025_80188EDC);
        ZeroFill((s32) &D_sc06_025_801B12F0, 0x410);
        D_sc06_025_801B12F0 = 2;
        D_sc06_025_801B12F8 = 0;
    }
}

void RoomExit(void) {
    func_800D1724((s32) &D_sc06_025_801886A4);
}

void func_sc06_025_80183090(void) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x2CD);
    if (temp_v0 != 0) {
        SetScript(temp_v0, (s32) &D_sc06_025_801A538C);
    }
}

void func_sc06_025_801830C8(void) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x2CD);
    if (temp_v0 != 0) {
        SetScript(temp_v0, (s32) &D_sc06_025_801A5CB4);
    }
}

void func_sc06_025_80183100(void) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x2CD);
    if (temp_v0 != 0) {
        SetScript(temp_v0, (s32) &D_sc06_025_801A6584);
    }
}

void func_sc06_025_80183138(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    if (SetupActor((s32) arg0, (s32) &D_sc06_025_80189254) != 0) {
        func_8001C810(AF(arg0, s32, 0x20), (s32) &D_sc06_025_8019A6B0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_v1_2 = AF(arg0, s32, 0x20);
        AF(temp_v1_2, s32, 4) = (s32) (AF(temp_v1_2, s32, 4) | 0x8040);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 2) = 1;
        PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_801892A4));
        AF(arg0, u8, 0x75) = 8;
        SetScript((s32) arg0, (s32) &D_sc06_025_80189294);
        AF(arg0, s32, 0x1C) = 0xA;
    }
}

void EventObjStart(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x1C) = 0xC00;
    AF(temp_v0, s16, 0x1A) = 0xC00;
    AF(temp_v0, s16, 0x18) = 0xC00;
    if (GroundDistSqToPlayer() < 0x6401) {
        StartEvent((s32) arg0, (s32) &D_sc06_025_801892CC);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        PlaySoundId(0xB01, 0);
    }
}

void func_sc06_025_80183298(StageActor *arg0) {
    u16 temp_v1;

    if (FindActorByKind(0x2CD) != 0) {
        temp_v1 = arg0->stateCount;
        switch (temp_v1) {                          /* irregular */
        case 0:
            IsEventDone((s32) arg0);
            return;
        case 1:
            if (IsEventDone((s32) arg0) != 0) {
                EndEvent((s32) arg0);
                arg0->state = 3;
                PlaySoundId(0xB02, 0);
            }
            break;
        }
    }
}

void func_sc06_025_80183328(void) {
}

void func_sc06_025_80183330(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc06_025_801893AC[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc06_025_801893C4 | 0x40000000);
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_801893B4));
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x34) = 0;
}

extern s32 D_sc06_025_80189420[];
void func_sc06_025_801833E8(StageActor *o) {
    if ((s32)o->message < D_sc06_025_80189420[o->param]) {
        o->message += 0xC0000;
    }
    if ((s32)o->message > D_sc06_025_80189420[o->param]) {
        o->message = D_sc06_025_80189420[o->param];
    }
    o->model->rot.vz += AF(o, s16, 0xDE);
    if (o->unkFC != 0) {
        func_sc06_025_801814C4((s32)o);
    }
}

void func_sc06_025_80183490(u8 *o) {
    s32 v;

    v = AF(o, s32, 0xDC) - 0x80000;
    AF(o, s32, 0xDC) = v;
    if (v < -0x2800000) {
        AF(o, s32, 0xDC) = -0x2800000;
    }
    AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0xDE);
    func_sc06_025_80181514(o);
    if (TickTimer(o) != 0) {
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xFC) = 0;
        PlaceObject(o, AF(o, s16, 0x70) * 8 + &D_sc06_025_80189408);
    }
}

void func_sc06_025_80183528(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc06_025_801893FC[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_80189408));
}

void func_sc06_025_801835B0(StageActor *arg0) {
    if (D_801270CC == 2) {
        ShowModel();
        func_sc06_025_8018233C(arg0);
        return;
    }
    HideModel(arg0);
}

void func_sc06_025_80183604(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc06_025_80189438);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x6000;
    AF(temp_v1_2, s16, 0x1A) = 0x6000;
    AF(temp_v1_2, s16, 0x18) = 0x6000;
    temp_a1 = AF(arg0, s32, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x50000000);
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) ((AF(arg0, s16, 0x70) * 8) + &D_sc06_025_801894E0));
    SetScript((s32) arg0, (s32) &D_sc06_025_80189498);
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc06_025_801836CC(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_025_801AD9E4);
    D_sc06_025_801ADA0C[AF(arg0, u16, 2)](arg0);
}

void func_sc06_025_80183724(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc06_025_80183774(arg0);
    PlaySe(0x92F);
    NextObjState(arg0);
}

s32 func_sc06_025_80183774(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc06_025_801AD9EC);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc06_025_80183988();
    SetPlayerEvent100(arg0);
    return NextObjState(arg0);
}

void func_sc06_025_801837E0(u8 *o) {
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
        k = func_sc06_025_801839AC();
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
        func_sc06_025_80183934(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    } else {
        SetPlayerEvent100(o);
    }
}

s32 func_sc06_025_80183934(s32 arg0) {
    PlaySePositional(4, 0x92F);
    PlaySe(0x930);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc06_025_80183988(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_025_801B1BE3;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc06_025_801839AC(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc06_025_801B1BD0; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc06_025_801839F0(u8 *arg0) {
    D_sc06_025_801ADA18[AF(arg0, u16, 2)]();
}

void func_sc06_025_80183A2C(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc06_025_801B1BE4;
    e = (u8 *)AllocSprite16To3E();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        SetShapeCircle(p, 0x10);
        func_sc06_025_80183C20(p);
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
        func_sc06_025_80183BF0(o);
    }
}

void func_sc06_025_80183B78(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc06_025_801B1BE4;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc06_025_80183C34((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc06_025_80183BF0((s32) arg0);
}

s32 func_sc06_025_80183BF0(s32 arg0) {
    D_sc06_025_801B1BD0[AF(arg0, s32, 0x2C)] = 0;
    return FreeEffect(arg0);
}

void func_sc06_025_80183C20(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc06_025_80183C34(u8 *o, u8 *p) {
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

void func_sc06_025_80183C9C(u8 *arg0) {
    D_sc06_025_801ADA50[AF(arg0, u16, 2)]();
}

void func_sc06_025_80183CD8(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    SetObjTimer((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_025_80183D24(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_sc06_025_80183D74(arg0);
}

void func_sc06_025_80183D6C(void) {
}

void func_sc06_025_80183D74(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc06_025_801ADA48[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    PosToSVec(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc06_025_801ADA64[i];
            AF(o, s16, 0x12) = i + j;
            func_sc06_025_80183ED8(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc06_025_80183ED8(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
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
    d = D_sc06_025_801B20E4;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_025_801B2114 = 0x50000000;
        D_sc06_025_801B210C = 0;
        D_sc06_025_801B210D = 0;
        D_sc06_025_801B210E = 0;
        D_sc06_025_801B2110 = 0;
        D_sc06_025_801B2111 = 0;
        D_sc06_025_801B2112 = 0;
    }
    D_sc06_025_801B2104 = arg7[0];
    D_sc06_025_801B2108 = arg7[1];
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

void func_sc06_025_80184254(u8 *arg0) {
    D_sc06_025_801ADAC8[AF(arg0, u16, 2)]();
}

void func_sc06_025_80184290(s32 arg0) {
    func_sc06_025_801842C0();
    NextObjState(arg0);
}

extern u8 D_80062C14;
extern u8 D_sc06_025_801ADA84;
extern void SetObjPush();
extern void SetFallSpeed();
void func_sc06_025_801842C0(u8 *o) {
    StartRumbleScript(&D_80062C14);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x800;
    SetPlayerMotion(o, &D_sc06_025_801ADA84);
    SetObjPush(o, 0, 0, 0x180000);
    SetFallSpeed(o, 0);
    ClearPlayerHittable(o);
    NextObjState(o);
}

void func_sc06_025_80184340(s32 arg0, s32 arg1) {
    s32 pad[8];
    ClearPlayerHittable(arg0, arg1);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x18000);
    ApplyFallSpeed(arg0);
    if (!(D_800B99DA & 1)) {
        SpawnEffect2(arg0, 2);
    }
    func_801535F4(arg0);
    if (AF(arg0, s16, 0xE) < -0x38) {
        AF(arg0, s16, 0xE) = -0x38;
        NextObjState(arg0);
    }
}

void func_sc06_025_801843D8(s32 arg0) {
    func_sc06_025_80184410();
    EnterPlayerStanding(arg0);
    func_80165718(arg0);
}

void func_sc06_025_80184410(u8 *o) {
    SV8 v;

    ResetPlayerAfterHit(o);
    PosToSVec(o + 4, &v);
    HitPlayer(1, 0xC018, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x5A, &v, &v);
}

void func_sc06_025_80184468(StageActor *arg0) {
    D_sc06_025_801AE188[arg0->state]();
}

void func_sc06_025_801844A4(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc06_025_801ADE78) != 0) {
        if (!(GetFlag(D_sc06_025_801ADEE0[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc06_025_80184B50);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc06_025_80184FC0);
        arg0->state = 1;
    }
}

void func_sc06_025_80184578(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc06_025_801845A0(void) {
}

void func_sc06_025_801845A8(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc06_025_801AE0C4 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc06_025_801AE028[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc06_025_801AE0B0 = 0;
            SetFlag(D_sc06_025_801AE028[AF(temp_s0, u16, 0xC)], 1);
            D_sc06_025_801AE0AC = 2;
        } else {
            D_sc06_025_801AE0C4 = AF(temp_s0, s32, 0);
            var_v0 = D_sc06_025_801ADFA4[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc06_025_801AE0AC = 0;
            D_sc06_025_801AE0B0 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc06_025_801AE0D8);
    } else {
        var_a1 = &D_sc06_025_801AE144;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc06_025_801846F4(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc06_025_801ADEE0[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc06_025_801ADEE0[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc06_025_801848F8() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc06_025_80184814(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc06_025_80184840(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_025_80184850(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc06_025_80184860(u8 *arg0) {
    SetFlag(D_sc06_025_801ADEE0[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc06_025_801848A0(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc06_025_801848D4(void) {
    return func_80174764() == 1;
}

s32 func_sc06_025_801848F8(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc06_025_801ADEE0[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc06_025_8018495C(StageActor *arg0) {
    D_sc06_025_801AE1B0[arg0->state]();
}

void func_sc06_025_80184998(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_025_801ADEAC) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc06_025_801AE870);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc06_025_801AE650);
        }
        arg0->state = 1;
    }
}

void func_sc06_025_80184A20(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_025_801AE660);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_025_801AE768);
        arg0->hitState = 0x8C00;
    }
}

void func_sc06_025_80184AE0(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc06_025_801AE870);
        } else {
            SetScript((s32) arg0, (s32) &D_sc06_025_801AE650);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc06_025_80184B50(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc06_025_801AE1A0[0], &a, &f);
    RotTransSV(&D_sc06_025_801AE1A0[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
