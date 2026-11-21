#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_000_8017BE9C(void) {
}

void func_sc05_000_8017BEA4(void) {
}

void func_sc05_000_8017BEAC(void) {
}

void func_sc05_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_000_80181C84[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc05_000_80181D70[])();
void func_sc05_000_8017D348(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc05_000_80181D78[])();
void func_sc05_000_8017D370(void);
extern void func_800D1EBC();
extern void (*D_sc05_000_80181D84[])();
extern void (*D_sc05_000_80181D90[])();
void func_sc05_000_8017D398(void);
extern u8 D_sc05_000_80181D9C;
extern void StartPlayerActionScript();
extern u8 D_sc05_000_80181DA8;
extern u8 D_sc05_000_80181DBC;
extern void func_sc05_000_8017D464();
extern void (*D_sc05_000_80181DCC[])();
extern void (*D_sc05_000_80181E10[])();
extern void InitModel();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern u8 D_sc05_000_80181E00;
extern u8 D_sc05_000_80181DF0;
extern u8 D_sc05_000_80181DE0;
extern u8 D_sc05_000_80181DD0;
extern s32 GetProgress();
extern s32 LookupPairTable();
extern void (*D_sc05_000_80181E5C[])();
extern void (*D_sc05_000_80181ED8[])();
extern void (*D_sc05_000_80181F54[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc05_000_8017E5B8;
extern u8 D_sc05_000_80181E74;
extern s32 * func_sc05_000_8017DE70();
extern void RunScript();
extern u8 D_sc05_000_80181EA8;
extern s32 IsEventDone();
extern void EndEvent();
extern void (*D_sc05_000_80181FD0[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern void ThrownHurtStart();
extern void NextObjState();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();

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
extern u8 D_sc05_000_80181E28;
extern s32 D_sc05_000_80198064;
extern void SetModelCullBox();
extern u8 D_sc05_000_80181EE8;
extern u8 D_sc05_000_80181F24;
extern void StopMotion();
extern void func_8001CA1C();
extern s32 SpawnEffect();

extern u16 D_800B99DA;
extern u8 D_sc05_000_80181FB4;
extern void ClearPlayerHittable();
extern void SetVelFromPushKeepAxes();
extern void MoveObjByVel();
extern void AddFallSpeedLimited();
extern void ApplyFallSpeed();
s32 func_sc05_000_8017E1E8(s32 arg0);
extern s32 func_801535F4();
extern void StartCameraShake();
extern s32 TickObjTimer();
extern void SetFallSpeed();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_000_8017BEBC(u8 *obj) {
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
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern u8 D_sc05_000_80181C78;
extern u8 *func_800D21C4();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc05_000_8017D538();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

extern s32 GetFlag();
extern u8 *SpawnActor();
extern s16 g_PlayerX;
extern s16 D_80126B66;
extern u8 D_sc05_000_80181EC0;
extern void StartEvent();

extern void EnterPlayerStanding();
extern void StartPlayerSlide();
extern void func_80165718();

extern u8 g_GroundNormal;
extern s16 D_80126B62;
extern void *g_PlayerModel;
extern s32 g_PlayerHitData;
extern s32 func_800CF8B4();
extern void FreeActor();
extern void HitPlayer();
extern s32 PathHitsModel();
extern s32 PlayerFlag1000();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

void func_sc05_000_8017CD9C(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc05_000_8017CE68(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc05_000_80181C78, 0x2A);
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

void func_sc05_000_8017CFC4(u8 *arg0) {
    D_sc05_000_80181C84[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D000(u8 *arg0) {
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

void func_sc05_000_8017D060(u8 *arg0) {
    D_sc05_000_80181D70[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D09C(u8 *arg0) {
    func_sc05_000_8017D348();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D0E0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc05_000_8017D104(u8 *arg0) {
    D_sc05_000_80181D78[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D140(u8 *arg0) {
    func_sc05_000_8017D370();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D180(u8 *arg0) {
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

void func_sc05_000_8017D1FC(void) {
    func_800D1EBC();
}

void func_sc05_000_8017D21C(u8 *arg0) {
    D_sc05_000_80181D84[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D258(u8 *arg0) {
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

void func_sc05_000_8017D2CC(u8 *arg0) {
    D_sc05_000_80181D90[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D308(u8 *arg0) {
    func_sc05_000_8017D398();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc05_000_8017D348(void) {
    StartPlayerActionScript((s32) &D_sc05_000_80181D9C, 0x01000000);
}

void func_sc05_000_8017D370(void) {
    StartPlayerActionScript((s32) &D_sc05_000_80181DA8, 0x01000000);
}

void func_sc05_000_8017D398(void) {
    StartPlayerActionScript((s32) &D_sc05_000_80181DBC, 0x01000000);
}

void RoomInitCamera(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x320;
    g_CameraAngleTarget = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_000_8017D464, 0);
    SnapCamera((s32) &g_Camera);
    func_sc05_000_8017D464((s32) &g_Camera);
}

void func_sc05_000_8017D464(s32 arg0) {
    D_sc05_000_80181DCC[AF(arg0, u8, 4)]();
}

extern s32 DistSqToPlayer();
extern void ResetScriptVM();
extern u8 CallActionHandler;


extern SV8 g_CameraFocus;
void CameraClampFocus(u8 *o) {
    SV8 v;

    v = g_CameraFocus;
    if (v.y < -0x4E0) {
        v.y = -0x4E0;
    }
    if (v.x < -0x2D0) {
        v.x = -0x2D0;
    }
    if (v.x > 0x2D0) {
        v.x = 0x2D0;
    }
    func_sc05_000_8017D538(o, (u8 *)&v);
}

void func_sc05_000_8017D538(u8 *arg0, u8 *arg1) {
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

void func_sc05_000_8017D6D0(StageActor *arg0) {
    D_sc05_000_80181E10[arg0->state]();
}

s32 LookupPairTable(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void StoryPropInit(StageActor *arg0) {
    s32 temp_s1;
    ModelObj *temp_v0;

    temp_s1 = GetProgress();
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc05_000_80181E00;
    arg0->hitState = 0x80;
    arg0->state = (u16) (arg0->state + 1);
    if (temp_s1 >= 0x384) {
        arg0->message = LookupPairTable(arg0, &D_sc05_000_80181DF0);
    } else if (temp_s1 >= 0x258) {
        arg0->message = LookupPairTable(arg0, &D_sc05_000_80181DE0);
    } else if (temp_s1 >= 0xC8) {
        arg0->message = LookupPairTable(arg0, &D_sc05_000_80181DD0);
    }
}

void func_sc05_000_8017D820(void) {
}

void func_sc05_000_8017D828(StageActor *arg0) {
    D_sc05_000_80181E5C[arg0->state]();
}

void func_sc05_000_8017D864(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_000_80181E28) != 0) {
        SetModelCullBox(arg0->model, 0x7FFF, 0x7FFF);
        arg0->model->pose = (s32) D_sc05_000_80198064;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc05_000_8017D8CC(void) {
}

s32 func_sc05_000_8017D8D4(void) {
    return 0x5F;
}

void func_sc05_000_8017D8DC(StageActor *arg0) {
    D_sc05_000_80181ED8[arg0->state]();
}

void SwarmSpawnAndEvent(StageActor *o) {
    u8 *p;
    s32 i;

    switch (o->state) {
    case 0:
        if ((u8)GetFlag(0x137) != 0) {
            RejectSpawn(o);
            return;
        }
        for (i = 0; i < 0x30; i++) {
            p = SpawnActor(0x3C0, o);
            if (p != 0) {
                AF(p, s16, 0x88) = rand() % 0x180 + 0x200;
                AF(p, s16, 0x8A) = rand() % 0xA0 - 0x1B0;
                AF(p, s16, 0xE) = -0x60;
                AF(p, s16, 0xFC) = rand();
                AF(p, s16, 0xFE) = (rand() & 0x3F) + 0x20;
                AF(p, s16, 0x6) = AF(p, s16, 0x88) + (rsin(AF(p, s16, 0xFC)) >> 8);
                AF(p, s16, 0xA) = AF(p, s16, 0x8A) + (rcos(AF(p, s16, 0xFC)) >> 8);
            }
        }
        o->state = 1;
        break;
    case 1:
        if (g_PlayerX >= 0x181) {
            if (D_80126B66 > -0x80 || D_80126B66 < 0x80) {
                StartEvent(o, &D_sc05_000_80181EC0);
                o->state = 2;
            }
        }
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->state = 3;
        }
        break;
    }
}

void func_sc05_000_8017DB10(StageActor *o) {
    SV8 a;
    SV8 b;
    s16 v;
    s32 d;
    s16 *py = &D_80126B62;

    v = (u16)o->unkFC + (u16)o->workFE;
    o->unkFC = v;
    o->pos[0].h.i = (u16)o->origin[0] + (rsin(v) >> 8);
    o->pos[1].h.i = (u16)o->origin[1] + (rcos(o->unkFC) >> 8);
    d = *py - o->pos[1].h.i;
    if (d >= -0xF && d <= 0x6F) {
        d = o->pos[0].h.i - g_PlayerX;
        if (d >= -0x1F && d <= 0x1F) {
            if (PlayerFlag1000() != 0) {
                FreeActor(o);
                return;
            }
            if (func_800CF8B4() == 1) {
                if (o->work100 != 0) {
                    HitPlayer(1, 0x201D, 0x400, 0x10, &b, &g_GroundNormal);
                    o->work100 = 0;
                } else {
                    a.x = b.x = g_PlayerX;
                    a.y = *py - 0x10;
                    b.y = *py + 0x10;
                    a.z = b.z = D_80126B66;
                    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
                        o->work100 = 1;
                    }
                }
            }
        }
    }
}

void func_sc05_000_8017DC9C(StageActor *arg0) {
    D_sc05_000_80181F54[arg0->state]();
}

void func_sc05_000_8017DCD8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_000_80181E74) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_000_8017E5B8);
        SpawnTalkMarker(arg0, (s32) &func_sc05_000_8017DE70);
    }
}

void func_sc05_000_8017DD3C(void) {
}

void func_sc05_000_8017DD44(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc05_000_80181EA8);
    arg0->state = 3;
}

void func_sc05_000_8017DD7C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc05_000_8017DDBC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    StopMotion((s32) arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_000_80181EE8);
    SetScript((s32) arg0, (s32) &D_sc05_000_80181F24);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1A) = 0x4000;
    AF(temp_v1_2, s16, 0x18) = 0x4000;
    AF(arg0, s16, 0x100) = 0;
}

s32 *func_sc05_000_8017DE70(u8 *arg0) {
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

void func_sc05_000_8017DECC(u8 *arg0) {
    D_sc05_000_80181FD0[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017DF08(s32 arg0) {
    ThrownHurtStart();
    NextObjState(arg0);
}

extern u8 D_80062C14;
extern u8 D_sc05_000_80181F5C;
extern void StartRumbleScript();
extern void ShowQueuedDamageNumber();
extern void SetPlayerMotion();
extern void SetObjTimer();
extern void SetObjPush();
extern void PlaySe();
void ThrownHurtStart(u8 *o) {
    StartRumbleScript(&D_80062C14);
    ShowQueuedDamageNumber(o);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x42) + 0x800) & 0xFFF;
    SetPlayerMotion(o, &D_sc05_000_80181F5C);
    SetObjTimer(o, 0x20);
    SetObjPush(o, 0, 0xFFFF0000, 0x180000);
    SetFallSpeed(o, 0xFFF00000);
    ClearPlayerHittable(o);
    PlaySe(0x451);
    NextObjState(o);
}

void ThrownHurtFly(s32 arg0, s32 arg1) {
    s32 pad[8];
    ClearPlayerHittable(arg0, arg1);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x18000);
    ApplyFallSpeed(arg0);
    if (!(D_800B99DA & 1)) {
        func_sc05_000_8017E1E8(arg0);
    }
    if (func_801535F4(arg0) == 4) {
        StartCameraShake((s32) &D_sc05_000_80181FB4);
        goto block_5;
    }
    if (TickObjTimer(arg0) != 0) {
block_5:
        SetFallSpeed(arg0, 0x40000);
        NextObjState(arg0);
    }
}

void func_sc05_000_8017E098(u8 *o) {
    s32 pad[8];
    ClearPlayerHittable(o);
    AddFallSpeedLimited(o, 0x18000);
    ApplyFallSpeed(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    switch (func_801535F4(o)) {
    case 1:
        func_sc05_000_8017E1A0(o);
        EnterPlayerStanding(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc05_000_8017E1A0(o);
        StartPlayerSlide(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
        break;
    }
}

s32 func_sc05_000_8017E1A0(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc05_000_8017E1E8(s32 arg0) {
    return SpawnEffect(3, arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x080FFFF8, /* extra? */ 0xE000B000);
}
