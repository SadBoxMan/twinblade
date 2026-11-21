#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_004_8017BE9C(void) {
}

void func_sc05_004_8017BEA4(void) {
}

void func_sc05_004_8017BEAC(void) {
}

void func_sc05_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_004_80185064[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc05_004_80185340[])();
extern s32 IsEventDone();
extern s32 SpawnEffect();
extern u8 D_sc05_004_801850F4;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc05_004_80185330[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc05_004_80185310;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc05_004_801853B4[])();
void func_sc05_004_8017E278(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc05_004_8017E2A0(void);
extern void func_800D1EBC();
extern void (*D_sc05_004_801853C8[])();
extern u8 D_sc05_004_801853D4;
extern void StartPlayerActionScript();
extern u8 D_sc05_004_801853E0;
extern void func_sc05_004_8017E36C();
extern void (*D_sc05_004_801853F4[])();
extern void (*D_sc05_004_80185484[])();
extern void (*D_sc05_004_801854F8[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc05_004_80181998;
extern u8 D_sc05_004_801854AC;
extern s32 * func_sc05_004_8017EAFC();
extern void RunScript();
extern u8 D_sc05_004_801854E0;
extern void (*D_sc05_004_80198728[])();
extern void (*D_sc05_004_8019AF58[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 SetState();
extern s32 func_sc05_004_8017EB58();

extern void (*D_sc05_004_8019AF08[])();
extern void SyncModelPos();
extern void func_sc05_004_801808CC();
extern void func_8001CD50();
extern u8 D_sc05_004_8019F078;
extern s32 SpawnProp();
extern void PlaySoundAtActor();
extern void GiveItem();
extern s32 DistSqToTarget();
extern u8 g_PlayerPosX;
extern void HeadingPitchTo();
extern void func_sc05_004_801807AC();
extern u8 D_sc05_004_8019AEC8;
extern u8 D_sc05_004_8019AED0;
extern s32 MoveCollidePassable();
extern s32 ActorSegmentDamagesPlayer();
extern s32 GroundDistSqToPlayer();
extern void func_sc05_004_801804B8();
extern u8 D_sc05_004_8019F0B8;
extern void SetShapeCircle();
extern s32 FreeProp();


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
extern s32 FlowSwitchSetOn();
extern u8 D_sc05_004_8018548C;
extern s32 func_sc05_004_8017E808();
extern s32 D_80126B8C;
extern u8 D_sc05_004_801986E8;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern s32 func_sc05_004_8017EB78();
extern s32 func_sc05_004_8017EC60();
extern s32 GetFlag();
extern s32 TickTimer();
extern s32 func_sc05_004_8017EBA0();

extern void (*D_sc05_004_801986F8[])();
extern void CarryPlayer();
extern void func_sc05_004_8017ECC4();
extern void *g_PlayerModel;
extern u8 D_sc05_004_80198708;
extern u8 D_sc05_004_80198718;
extern void InitNullModel();
extern void NextState();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_004_8017BEBC(u8 *obj) {
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
extern u8 D_sc05_004_80185058;
extern u8 *func_800D21C4();
extern s32 SpawnShadow();
extern u8 D_sc05_004_8018506C;
extern u8 D_sc05_004_80185204;
extern u8 D_sc05_004_80185238;
extern s32 D_sc05_004_8019EFD0;
extern s32 D_sc05_004_8019EFD4;
extern s32 D_sc05_004_8019EFD8;
extern u32 GetProgress();
extern s32 D_sc05_004_8019EFDC;
extern s32 D_sc05_004_8019EFE4;
extern void func_sc05_004_8017DA24();
extern void func_sc05_004_8017D9B0();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern void MoveObject();
extern void StopMotion();
extern s32 MoveOnGround();
extern s32 CollidePath();
extern u8 D_sc05_004_8019AEA4;
extern void SetLocalVelocityXZ();
extern u8 D_sc05_004_8019AEC0;
extern s32 TargetInFront();
extern s32 MoveCollideAt();
extern void StopWithGravity();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc05_004_8017E440();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern s32 HeadingToTarget();
extern s32 DistSqToPlayer();
extern s32 D_sc05_004_801852D4;
extern void RestorePrevPos();
extern void func_sc05_004_8017DB00();
extern s32 DistSq();
extern s32 GetPlayerAction();
extern void StartEventKeepPlayer();
extern s32 MoveCollidePassableAt();
extern s32 TraceMap();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

extern s32 D_sc05_004_801955BC[];
extern s32 D_sc05_004_8019EFE8[];
extern s32 D_sc05_004_8019EFEC[];
extern u8 D_sc05_004_801853F8;
extern u8 D_sc05_004_80185408;
extern u8 D_sc05_004_80185450;
extern s32 AllocSpriteInRange();
extern void func_8001CD9C();
extern u8 D_sc05_004_8019DBF8;
extern u8 D_sc05_004_8019DBFC;
extern u8 D_sc05_004_8019EFF8;
extern u8 D_sc05_004_8019EFFC;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern void AngleToVec2();
extern s32 HeadingTo();
extern u8 D_sc05_004_8018526C[];
extern XY D_sc05_004_8018528C[];
extern u8 D_sc05_004_8018515C;
extern void *D_sc05_004_8019AF60[];
extern void *g_ActiveCamera;
extern s32 TargetInSight();
extern s32 GroundDistSqTo();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern void DespawnIfFar();
extern u8 D_sc05_004_8019AEB0;
extern u8 D_sc05_004_8019AEB8;
extern u16 g_Actors;

void func_sc05_004_8017CD9C(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc05_004_8017CE68(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc05_004_80185058, 0x2A);
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

void func_sc05_004_8017CFC4(u8 *arg0) {
    D_sc05_004_80185064[AF(arg0, u16, 2)]();
}

void func_sc05_004_8017D000(u8 *arg0) {
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

void DayNightNpcInit(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc05_004_80185330[arg0->param]) & 0xFF) || (arg0->param == 4 && GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc05_004_80185204) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc05_004_8018506C);
            arg0->model->flags |= 0x10;
            D_sc05_004_8019EFD0 = arg0->origin[0] << 16;
            D_sc05_004_8019EFD4 = AF(arg0, s16, 0x8A) << 16;
            D_sc05_004_8019EFD8 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc05_004_80185238) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc05_004_8017D1FC(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc05_004_801850F4);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc05_004_8019EFDC = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc05_004_8019EFE4 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc05_004_8017DA24(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc05_004_8019EFDC)[i] = (&D_sc05_004_8019EFD0)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc05_004_8019EFDC, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc05_004_8017D9B0(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc05_004_8017D400(s32 a) {
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
        func_sc05_004_8017DB00(a);
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
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc05_004_8019EFDC) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc05_004_8019EFDC, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc05_004_8017D9B0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc05_004_8017D9B0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
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
        SetScript(a, &D_sc05_004_8018506C);
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
            p = &D_sc05_004_801852D4;
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
        func_sc05_004_8017D9B0(a, -15, 0);
        func_sc05_004_8017DA24(a);
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
                func_sc05_004_8017DA24(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc05_004_8017D9B0(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc05_004_8017D7F4(u8 *arg0) {
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
        SetScript(arg0, &D_sc05_004_8018506C);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc05_004_8017D974(StageActor *arg0) {
    D_sc05_004_80185340[arg0->state]();
}

void func_sc05_004_8017D9B0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc05_004_8017DA24(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc05_004_8019EFD0) >> 7) & 0x18;
    i = D_sc05_004_8018526C[a | ((HeadingTo(arg0 + 4, &D_sc05_004_8019EFD0) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc05_004_8018528C[i].x - 0x100;
    D_sc05_004_8019EFDC = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc05_004_8018528C[i].y - 0x100;
    D_sc05_004_8019EFE4 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

extern WMtx GsIDMATRIX;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 ratan2();
extern void RotMatrixY();
extern void ApplyMatrixSV();

void func_sc05_004_8017DB00(u8 *o) {
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

void func_sc05_004_8017DD14(s32 arg0) {
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
            SetScript(arg0, (s32) &D_sc05_004_8018515C);
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

void func_sc05_004_8017DDE8(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc05_004_801850F4);
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

void func_sc05_004_8017DEB8(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc05_004_80185330[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc05_004_8017DF10(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc05_004_80185310);
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

void func_sc05_004_8017E008(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc05_004_8017E048(u8 *arg0) {
    D_sc05_004_801853B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E084(u8 *arg0) {
    func_sc05_004_8017E278();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E0C8(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc05_004_8017E0EC(u8 *arg0) {
    func_sc05_004_8017E2A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_004_8017E12C(u8 *arg0) {
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

void func_sc05_004_8017E1A8(void) {
    func_800D1EBC();
}

void func_sc05_004_8017E1C8(u8 *arg0) {
    D_sc05_004_801853C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_004_8017E204(u8 *arg0) {
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

void func_sc05_004_8017E278(void) {
    StartPlayerActionScript((s32) &D_sc05_004_801853D4, 0x01000000);
}

void func_sc05_004_8017E2A0(void) {
    StartPlayerActionScript((s32) &D_sc05_004_801853E0, 0x01000000);
}

void func_sc05_004_8017E2C8(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_004_8017E36C, 0);
    SnapCamera((s32) &g_Camera);
    func_sc05_004_8017E36C((s32) &g_Camera);
}

void func_sc05_004_8017E36C(s32 arg0) {
    D_sc05_004_801853F4[AF(arg0, u8, 4)]();
}

extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;

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
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

extern void ResetScriptVM();
extern u8 CallActionHandler;

extern SV8 g_CameraFocus;
void func_sc05_004_8017E3A8(u8 *o) {
    SV8 v;

    v = g_CameraFocus;
    if (v.y < -0x680) {
        if (v.x < -0x2E0) {
            v.x = -0x2E0;
        }
    } else {
        if (v.x < -0x240) {
            v.x = -0x240;
        }
    }
    func_sc05_004_8017E440(o, (u8 *)&v);
}

void func_sc05_004_8017E440(u8 *arg0, u8 *arg1) {
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

void FlowSwitchInit(StageActor *o) {
    s32 n;
    s32 v;
    ModelObj *p;
    s32 m;
    n = o->param;
    v = D_sc05_004_801955BC[n];
    m = n * 8;
    *(s32 *)((u8 *)D_sc05_004_8019EFEC + m) = 0;
    *(s32 *)((u8 *)D_sc05_004_8019EFE8 + m) = v;
    NextState(o);
    if (n == 0) {
        p = (u8 *)AllocActorModel();
        o->model = p;
        if (p == 0) {
            RejectSpawn(o);
            return;
        }
        InitModel(p, D_sc05_004_8019EFE8);
        SpawnActorArg(0x292, 1, o);
        AF(o, u8 *, 0x58) = &D_sc05_004_80185408;
        o->hitState = 0x800;
        o->targetClass = 8;
    } else if (SetupActor(o, &D_sc05_004_80185450) != 0) {
        o->reactive = 1;
        o->params = &D_sc05_004_801853F8;
        AF(o, s16, 0xAE) = -4;
        o->reactMask = 0;
        o->react = 0;
        o->targetClass = 8;
        o->reactOpts |= 2;
        o->pos[1].h.i += 0x20;
        o->pos[2].h.i -= 0x20;
        if (GetFlag(0xBA) & 0xFF) {
            FlowSwitchSetOn(o);
            o->stateCount = 2;
        }
    }
}

void func_sc05_004_8017E730(StageActor *arg0) {
    D_sc05_004_80185484[arg0->state]();
}

void FlowSwitchActivate(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    FlowSwitchSetOn((s32) arg0);
    SetFlag(0xBA, 1);
}

s32 FlowSwitchSetOn(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x30);
    MoveImage((s32) &D_sc05_004_8018548C, 0x2D0, 0x180);
    MoveImage((s32) (&D_sc05_004_8018548C + 8), 0x160, 0x155);
    return func_sc05_004_8017E808(arg0);
}

s32 func_sc05_004_8017E808(u8 *o) {
    typedef struct { u8 b[4]; } B4;
    u8 *q;
    q = (u8 *)AllocSpriteInRange(0x7E, 0x100);
    if (q == 0) return 0;
    SetShapeCircle(&D_sc05_004_8019EFF8, 0x40);
    *(B4 *)&D_sc05_004_8019EFF8 = *(B4 *)&D_sc05_004_8019DBF8;
    *(B4 *)&D_sc05_004_8019EFFC = *(B4 *)&D_sc05_004_8019DBFC;
    func_8001CD9C(q, &D_sc05_004_8019EFF8);
    AF(q, u16, 0x2C) = 0xC010;
    AF(q, u32, 4) |= 0x50000000;
    AF(q, s16, 8) = AF(AF(o, u8 *, 0x64), s16, 6);
    AF(q, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) - 0x48;
    AF(q, s16, 0xC) = AF(AF(o, u8 *, 0x64), s16, 0xE);
}

void func_sc05_004_8017E90C(void) {
    D_80126B8C = 0;
}

extern u8 D_sc05_004_80185428;
extern void TakePlayerControl();
void EventFlowStarted(u8 *o) {
    if (AF(o, s16, 0x70) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (GetFlag(0xBA) & 0xFF) {
                ResetScriptVM();
                TakePlayerControl();
                RunScript(o, &D_sc05_004_80185428);
                AF(o, u16, 0x34)++;
            }
            break;
        case 1:
            if (IsEventDone(o) != 0) {
                EndEvent(o);
                AF(o, u16, 0x34)++;
            }
            break;
        }
    }
}

s32 func_sc05_004_8017E9D4(void) {
    return 0x5F;
}

void func_sc05_004_8017E9DC(StageActor *arg0) {
    D_sc05_004_801854F8[arg0->state]();
}

void func_sc05_004_8017EA18(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_004_801854AC) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_004_80181998);
        SpawnTalkMarker(arg0, (s32) &func_sc05_004_8017EAFC);
    }
}

void func_sc05_004_8017EA7C(void) {
}

void func_sc05_004_8017EA84(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc05_004_801854E0);
    arg0->state = 3;
}

void func_sc05_004_8017EABC(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc05_004_8017EAFC(u8 *arg0) {
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

s32 func_sc05_004_8017EB58(StageActor *arg0) {
    return SetState(arg0, 1);
}

s32 func_sc05_004_8017EB78(StageActor *arg0) {
    arg0->timer = 0x40;
    return SetState(arg0, 2);
}

s32 func_sc05_004_8017EBA0(StageActor *arg0) {
    arg0->timer = 0xC0;
    return SetState(arg0, 3);
}

void func_sc05_004_8017EBC8(StageActor *arg0) {
    ModelObj *temp_a1;

    D_sc05_004_801986F8[arg0->state]();
    temp_a1 = arg0->model;
    temp_a1->rot.vy = (u16) ((u16)temp_a1->rot.vy + (u16)arg0->unkFC);
    CarryPlayer((s32) arg0, (s32) temp_a1);
    if (arg0->unk74 != 0) {
        AF(g_PlayerModel, u16, 0x12) = (u16) (AF(g_PlayerModel, u16, 0x12) + (u16)arg0->unkFC);
    }
    func_sc05_004_8017ECC4((s32) arg0);
}

s32 func_sc05_004_8017EC60(StageActor *arg0) {
    SpawnActorArg(0x191, 0, arg0);
    SpawnActorArg(0x191, 1, arg0);
    SpawnActorArg(0x191, 2, arg0);
    return SpawnActorArg(0x191, 3, arg0);
}

void func_sc05_004_8017ECC4(u8 *o) {
    V3 v;
    V3 r;
    Player *g = &g_Player;
    s32 n;
    s32 t;

    if (AF(o, s16, 0xFC) == 0) {
        return;
    }
    v.x = AF(o, s16, 6) - g_PlayerX;
    v.y = 0;
    v.z = AF(o, s16, 0xE) - D_80126B66;
    Square0(&v, &r);
    if (r.x + r.z > 0x3C100) {
        return;
    }
    r.y = AF(o, s16, 0xA) - D_80126B62;
    if ((u32)(r.y + 8) >= 0x1C9) {
        return;
    }
    if ((u32)(g->state - 2) >= 2) {
        D_80126B8C = 0;
        D_80126B62 -= 4;
    }
    n = AF(o, s16, 0xFC);
    if (n > 0x80) {
        t = -0x40000;
    } else {
        t = -(n << 11);
    }
    g->fallSpeed += t;
}

void func_sc05_004_8017EDD8(StageActor *arg0) {
    D_sc05_004_80198728[arg0->state]();
}

void func_sc05_004_8017EE14(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, arg0->message);
    arg0->model->colour = 0x01800180;
    arg0->hitData = (s32) ((s32) &D_sc05_004_801986E8 | 0x40000000);
    arg0->hitState = 0x4C00;
    arg0->targetClass = 8;
    if (arg0->param == 0) {
        func_sc05_004_8017EB78(arg0);
    } else {
        func_sc05_004_8017EB58(arg0);
    }
    func_sc05_004_8017EC60(arg0);
}

void func_sc05_004_8017EEBC(StageActor *arg0) {
    if (GetFlag(0xBA) & 0xFF) {
        func_sc05_004_8017EB78(arg0);
        arg0->timer = 0;
        PlaySoundId(0x720, 0);
    }
}

void func_sc05_004_8017EF0C(StageActor *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (TickTimer() != 0) {
        temp_v0 = (u16)arg0->unkFC + 4;
        arg0->unkFC = temp_v0;
        if ((s16) temp_v0 >= 0x11) {
            func_sc05_004_8017EBA0((s32) arg0);
        }
    } else {
        temp_v0_2 = (s16) (u16)arg0->unkFC;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 < 3) {
                if (((arg0->model->rot.vy + 2) & 0x3FF) < 4) {
                    arg0->unkFC = 0U;
                }
            } else {
                arg0->unkFC = (u16) (temp_v0_2 - 2);
            }
        }
        if (arg0->timer == 1) {
            PlaySoundId(0x720, 0);
        }
    }
}

void func_sc05_004_8017EFD4(StageActor *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    if (arg0->param == 0) {
        if (TickTimer() != 0) {
            temp_v0 = (u16)arg0->unkFC - 2;
            arg0->unkFC = temp_v0;
            if ((s16) temp_v0 < 0x10) {
                arg0->timer = 0x40;
                SetState((s32) arg0, 2);
            }
        } else {
            temp_v0_2 = (s16) (u16)arg0->unkFC;
            if (temp_v0_2 < 0x100) {
                arg0->unkFC = (u16) (temp_v0_2 + 4);
            }
            if (arg0->timer == 1) {
                PlaySoundId(0x721, 0);
                PlaySoundId(4, 0x720);
            }
        }
    } else {
        temp_v0_3 = (s16) (u16)arg0->unkFC;
        if (temp_v0_3 < 0x100) {
            arg0->unkFC = (u16) (temp_v0_3 + 4);
        }
    }
}

void func_sc05_004_8017F0B8(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_v0;
    u16 temp_a0;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(temp_v0);
    arg0->workFE = (s16) ((u16)arg0->param & 0x100);
    temp_a0 = (u16)arg0->param & 3;
    arg0->param = temp_a0;
    if (arg0->workFE == 0) {
        arg0->model->rot.vy = (s16) ((u16)arg0->parent->model->rot.vy + (temp_a0 << 0xA));
        arg0->hitData = (s32) ((s32) &D_sc05_004_80198708 | 0x40000000);
        arg0->hitState = 0x4C00;
        arg0->targetClass = 8;
    } else {
        arg0->hitData = (s32) &D_sc05_004_80198718;
        arg0->hitState = 0x4800;
    }
    NextState(arg0);
}

void func_sc05_004_8017F188(StageActor *arg0, s32 arg1) {
    ModelObj *temp_a0;

    if (arg0->workFE == 0) {
        temp_a0 = arg0->model;
        temp_a0->rot.vy = (u16) ((u16)temp_a0->rot.vy + (u16)arg0->parent->unkFC);
        CarryPlayer((s32) arg0, arg1);
        if (arg0->unk74 != 0) {
            AF(g_PlayerModel, u16, 0x12) = (u16) (AF(g_PlayerModel, u16, 0x12) + (u16)arg0->parent->unkFC);
        }
    }
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
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
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
extern u8 D_sc05_004_8019AE04;
extern u8 D_sc05_004_8019C234;
extern u8 D_sc05_004_8019AED8;
extern u8 D_sc05_004_8019F038[];
extern u8 D_sc05_004_8019AE38;
extern u8 D_sc05_004_8019AE44;
extern u8 D_sc05_004_8019AE4C;
extern u8 D_sc05_004_8019AE5C;
extern u16 D_sc05_004_8019AE60;
extern u8 D_sc05_004_8019AE64;
extern u8 D_sc05_004_8019AE70;
extern u8 D_sc05_004_8019AE78;
extern u8 D_sc05_004_8019AE9C;
extern u16 D_sc05_004_8019AEA0;
extern u8 D_sc05_004_8019AE88;
extern u8 D_sc05_004_8019AE94;
extern u8 D_sc05_004_8019F079[];
extern u8 D_sc05_004_8019F07A;
extern u8 D_sc05_004_8019F07C;
extern void func_8001CA1C();

void func_sc05_004_8017F210(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (SetupActor(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        SetScript(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        StopWithGravity(arg0);
        SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        q = SpawnActorArg(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        SetScript(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 2, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        SetScript(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        return;
    case 7:
        if (SetupActor(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        {
            u8 *q = D_sc05_004_8019F079;
            u8 *r = q - 1;
            D_sc05_004_8019F07A = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc05_004_8019F07A = 0;
            D_sc05_004_8019F07C = 0;
            SetShapeCircle(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        SetScript(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        StopWithGravity(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        AF(arg0, s16, 0xFC) = 0;
        q = SpawnActorArg(0x1EA, 8, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 8:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        SetScript(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 9, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        SetScript(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE88);
        SetScript(arg0, &D_sc05_004_8019AE94);
        AF(arg0, s16, 2) = 0xC;
        AF(AF(arg0, s32, 0x20), u16, 0x10) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x10);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x12);
        AF(arg0, s32, 0x14) = rsin(AF(AF(arg0, s32, 0x20), s16, 0x10)) << 9;
        AF(arg0, s32, 0x10) = -((rsin(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x18) = -((rcos(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 2 / 3;
        AF(arg0, s32, 0x14) = AF(arg0, s32, 0x14) * 2 / 3;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 2 / 3;
        AF(arg0, s32, 0x1C) = 0x12C;
        return;
    case 15:
        if (SetupActor(arg0, &D_sc05_004_8019AE04) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc05_004_8019AED8;
        SetScript(arg0, &D_sc05_004_8019C234);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        StopWithGravity(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc05_004_8019F038[AF(arg0, s16, 0xFC) * 8];
        q = SpawnActorArg(0x1EA, 0x11, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0xFC) = 0xA;
        return;
    case 16:
    case 24:
        AF(arg0, s16, 2) = 0xE;
        AF(arg0, s32, 0x1C) = 6;
        return;
    case 17:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE38);
        SetScript(arg0, &D_sc05_004_8019AE44);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE4C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE5C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AE60;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 0x12, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
        fail:
            RejectSpawn(arg0);
            return;
        }
        func_8001CA1C(t, &D_sc05_004_8019AE64);
        SetScript(arg0, &D_sc05_004_8019AE70);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc05_004_8019AE78 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc05_004_8019AE9C;
        AF(arg0, u16, 0xE) += D_sc05_004_8019AEA0;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 25:
        AF(arg0, s16, 2) = 0x13;
        return;
    }
}

void func_sc05_004_8017F9BC(StageActor *arg0) {
    SV8 out;
    SV8 sv;
    SV8 b;
    s32 t;
    u8 *p;
    ModelObj *m;
    s32 d;

    if ((s16)arg0->parent->id != arg0->workFE) {
        FreeActor(arg0);
        return;
    }
    if (arg0->param == 1 || arg0->param == 8) {
        p = (u8 *)arg0->ext0;
        {
            s32 a = ((u16)arg0->unkFC + 0x40) & 0xFFF;
            arg0->unkFC = a;
            AF(p, s16, 0) = AF(p, s16, 2) = AF(p, s16, 4) = (rsin(a) >> 6) + 0xBF;
        }
    }
    if ((s32)arg0->parent->model->unk04 & 0x80000000) {
        arg0->model->unk04 |= 0x80000000;
    } else {
        arg0->model->unk04 &= 0x7FFFFFFF;
    }
    arg0->model->scale.vx = (u16)arg0->parent->model->scale.vx;
    if (arg0->parent->param < 8) {
        arg0->work108 = ((u16)arg0->work108 + 0x40) & 0xFFF;
        arg0->model->rot.vy &= 0xFFF;
        arg0->parent->model->rot.vy &= 0xFFF;
        t = arg0->parent->model->rot.vy - arg0->model->rot.vy;
        if (t > 0x800) {
            t -= 0x1000;
        }
        if (t < -0x800) {
            t += 0x1000;
        }
        if (t > 0x200) {
            arg0->model->rot.vy += t - 0x200;
        } else if (t < -0x200) {
            arg0->model->rot.vy += t + 0x200;
        } else {
            arg0->model->rot.vy += t / 16;
        }
        arg0->model->rot.vy += rsin(arg0->work108) >> 6;
        m = arg0->model;
        RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
        gte_SetRotMatrix((u8 *)arg0->model + 0x34);
        gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
        p = (u8 *)arg0->ext1;
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
        RotTransSV(&sv, &out, &t);
        arg0->pos[0].h.i = out.x;
        arg0->pos[1].h.i = out.y;
        arg0->pos[2].h.i = out.z;
        {
            s32 pad[1];
        }
        out.y -= 0x40;
        b.x = (u16)arg0->pos[0].h.i;
        b.y = (u16)arg0->pos[1].h.i + 0x10;
        b.z = (u16)arg0->pos[2].h.i;
        t = CollidePath(&out, &b, 1);
        if (t & 0x1000) {
            return;
        }
        if (t != 0) {
            s32 y = b.y - 0x10;
            d = arg0->pos[1].h.i - y;
            if (d < 5) {
                return;
            }
            if (d > 0x40) {
                d = 0x40;
            }
            arg0->model->rot.vx += d << 4;
            m = arg0->model;
            RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
            gte_SetRotMatrix((u8 *)arg0->model + 0x34);
            gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
            p = (u8 *)arg0->ext1;
            sv.x = 0;
            sv.y = 0;
            sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
            RotTransSV(&sv, &out, &t);
            arg0->pos[0].h.i = out.x;
            arg0->pos[1].h.i = out.y;
            arg0->pos[2].h.i = out.z;
        } else {
            arg0->model->rot.vx -= 0x80;
            arg0->model->rot.vx &= 0xFFF;
            if ((u16)arg0->model->rot.vx > 0x800 && (u16)arg0->model->rot.vx < 0xC00) {
                arg0->model->rot.vx = 0xC00;
            }
        }
    } else {
        {
            s32 a = ((u16)arg0->work102 + (u16)arg0->work106) & 0xFFF;
            arg0->work102 = a;
            arg0->model->rot.vx = rcos(a) >> 6;
        }
        {
            s32 a = ((u16)arg0->work104 + (u16)arg0->work100) & 0xFFF;
            arg0->work104 = a;
            arg0->model->rot.vz = rcos(a) >> 6;
        }
        arg0->model->rot.vx += 0xC00;
        m = arg0->model;
        RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
        gte_SetRotMatrix((u8 *)arg0->model + 0x34);
        gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
        p = (u8 *)arg0->ext1;
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
        RotTransSV(&sv, &out, &t);
        arg0->pos[0].h.i = out.x;
        arg0->pos[1].h.i = out.y;
        arg0->pos[2].h.i = out.z;
    }
}

void func_sc05_004_8017FFC4(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
    a.x = b.x = AF(arg0, s16, 6);
    y = AF(arg0, s16, 0xA);
    a.y = b.y = y;
    a.z = b.z = AF(arg0, s16, 0xE);
    b.y = y + 0x40;
    s = CollidePath(&a, &b, 1);
    if (s & 0x6000) {
        if (!(s & 0x1000)) {
            s = DistSqToTarget(arg0);
            if (s < 0x4001 && TargetInFront(arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 4;
                AF(arg0, s16, 0xFC) = 0;
                AF(arg0, s16, 0x100) = AF(arg0, s16, 0xA);
            }
        }
    }
    if (s > 0x40000) {
        AF(arg0, s16, 2) = 1;
    }
    if (MoveCollideAt(arg0, &D_sc05_004_8019AEC0) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc05_004_801800F8(u8 *arg0) {
    s32 i;
    StageActor *p;
    StageActor *next;
    s32 r;
    s16 ang;
    SV8 a;
    SV8 b;

    i = 0;
    if (--AF(arg0, s16, 0xFC) == 0) {
        p = arg0;
        do {
            p = p->link;
            i++;
        } while (p != 0);
        if (i < 7) {
            if (arg0 == 0) {
                return;
            }
            p = arg0;
            for (;;) {
                next = p->link;
                FreeActor(p);
                p = next;
                if (p == 0) {
                    return;
                }
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x40;
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) &= 0xFFF;
    r = MoveCollidePassableAt(arg0, &D_sc05_004_8019AEC0);
    if (r & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
        return;
    }
    i = 0;
    if (r & 0xC000) {
        AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        a.x = AF(arg0, u16, 6) - 0x20;
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE) + 0x20;
        b.x = a.x + 0x40;
        b.y = a.y;
        b.z = a.z;
        if (TraceMap(1, &a, &b) != 0) {
            AF(arg0, s16, 0x12) = -(rand() & 3) - 4;
            i = 1;
        } else {
            b.x = a.x + 0x40;
            b.y = a.y;
            b.z = a.z;
            if (TraceMap(1, &b, &a) != 0) {
                AF(arg0, s16, 0x12) = (rand() & 3) + 4;
                i = 2;
            }
        }
        a.x = AF(arg0, u16, 6);
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE);
        b.x = a.x;
        b.y = a.y;
        b.z = a.z + 0x40;
        if (TraceMap(1, &a, &b) != 0) {
            AF(arg0, s16, 0x1A) = -(rand() & 3) - 4;
            i += 4;
        } else {
            b.x = a.x;
            b.y = a.y;
            b.z = a.z + 0x40;
            if (TraceMap(1, &b, &a) != 0) {
                AF(arg0, s16, 0x1A) = (rand() & 3) + 4;
                i += 8;
            }
        }
        switch (i) {
        case 1:
            ang = 0x800;
            break;
        case 2:
            ang = 0;
            break;
        case 4:
            ang = 0x400;
            break;
        case 5:
            ang = 0x600;
            break;
        case 6:
            ang = 0x200;
            break;
        case 8:
            ang = 0xC00;
            break;
        case 9:
            ang = 0xA00;
            break;
        case 10:
            ang = 0xE00;
            break;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ang;
    } else if (r & 0x2000) {
        PlaySoundAtActor(arg0, 0x833, 0);
        if ((rand() & 0xF) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s16, 0x70) = 0;
            AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
            AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
            StopWithGravity(arg0);
            SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
            for (p = AF(arg0, u8 *, 0x6C); p != 0; p = (u8 *)p->link) {
                p->state = 2;
                p->param -= 0x10;
                p->model->rot.vz = 0;
            }
            AF(arg0, s16, 0xFC) = 0;
        } else {
            AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        }
    }
    if (AF(arg0, s16, 0xA) > 0x64) {
        FreeActor(arg0);
    }
}

void func_sc05_004_801804B8(StageActor *arg0) {
    SV out;
    SV in;
    s32 pad[2];
        s32 flag[2];
    u8 *m;
    s16 v;
    s32 a;

    if ((s16)arg0->parent->id != arg0->workFE) {
        FreeActor(arg0);
        return;
    }
    if (arg0->param == 0x11) {
        m = (u8 *)arg0->ext0;
        arg0->unkFC = ((u16)arg0->unkFC + 0x40) & 0xFFF;
        a = (u16)arg0->unkFC;
        v = (rsin(a) >> 6) + 0xBF;
        AF(m, s16, 0) = AF(m, s16, 2) = AF(m, s16, 4) = v;
    }
    if (AF(arg0->parent->model, TB, 4).top) {
        AF(arg0->model, TB, 4).top = 1;
    } else {
        AF(arg0->model, TB, 4).top = 0;
    }
    arg0->model->scale.vx = (u16)arg0->parent->model->scale.vx;
    arg0->model->rot.vz = (u16)arg0->parent->model->rot.vz;
    arg0->work102 = ((u16)arg0->work102 + (u16)arg0->work106) & 0xFFF;
    a = (u16)arg0->work102;
    arg0->model->rot.vx = rcos(a) >> 3;
    arg0->work104 = ((u16)arg0->work104 + (u16)arg0->work100) & 0xFFF;
    a = (u16)arg0->work104;
    arg0->model->rot.vy = rcos(a) >> 3;
    RotMatrixZYX((u8 *)arg0->model + 0x10, (u8 *)arg0->model + 0x34);
    gte_SetRotMatrix((u8 *)arg0->model + 0x34);
    gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
    m = (u8 *)arg0->ext1;
    in.vx = 0;
    in.vy = 0;
    in.vz = (AF(m, s16, 4) * arg0->model->scale.vx) >> 12;
    RotTransSV(&in, &out, flag);
    arg0->pos[0].h.i = out.vx;
    arg0->pos[1].h.i = out.vy;
    arg0->pos[2].h.i = out.vz;
}

void func_sc05_004_801806FC(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc05_004_8019AF08[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        SyncModelPos((s32) arg0);
    }
}

void func_sc05_004_801807AC(u8 *arg0) {
    UV4 a;
    UV4 b;
    u8 *o;

    AF(arg0, u16, 0x10A)++;
    if ((AF(arg0, u16, 0x10A) & 7) == 0) {
        o = (u8 *)SpawnProp(0x7B);
        if (o != 0) {
            AF(o, s32, 0x2C) = (AF(arg0, u16, 0x10A) & 0x18) >> 3;
            a.x = AF(arg0, u16, 6);
            a.y = AF(arg0, u16, 0xA);
            a.z = AF(arg0, u16, 0xE);
            b.x = a.x;
            b.y = a.y + 0x80;
            b.z = a.z;
            TraceMap(1, &a, &b);
            if (AF(&b, u8, 6) != 0) {
                AF(o, u16, 6) = AF(arg0, u16, 6);
                AF(o, u16, 0xA) = b.y;
                AF(o, u16, 0xE) = AF(arg0, u16, 0xE);
            } else {
                FreeProp(o);
            }
        }
    }
}

void func_sc05_004_80180890(u8 *arg0) {
    D_sc05_004_8019AF58[AF(arg0, u16, 2)]();
}

void func_sc05_004_801808CC(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = SpawnProp(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc05_004_8019F078);
    }
}

void func_sc05_004_80180930(u8 *arg0) {
    s16 sp10[6];
    s32 sp20;
    s32 t;

    sp10[1] = AF(g_ActiveCamera, s32, 0x5C);
    sp10[3] = AF(g_ActiveCamera, s32, 0x60);
    sp10[5] = AF(g_ActiveCamera, s32, 0x64);
    HeadingPitchTo(&sp20, arg0 + 4, sp10);
    t = sp20;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = t;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = t >> 0x10;
    ((void (*)(u8 *)) D_sc05_004_8019AF60[AF(arg0, u16, 2)])(arg0);
}

void func_sc05_004_801809C4(u8 *arg0) {
    SV4 a;
    SV4 b;
    u8 *p;

    AF(arg0, u16, 0x5C) = 0xA810;
    AF(arg0, s16, 2) = AF(arg0, s16, 0x34);
    a.x = b.x = AF(arg0, s16, 6);
    b.y = AF(arg0, s16, 0xA);
    a.y = b.y - 0x18;
    a.z = b.z = AF(arg0, s16, 0xE);
    CollidePath(&a, &b, 1);
    AF(arg0, s16, 0xA) = b.y - 0x10;
    if (AF(arg0, s16, 0x70) == 0xF) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0x70) = 0;
        AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
        StopWithGravity(arg0);
        SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    StopWithGravity(arg0);
    SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
}

void func_sc05_004_80180AEC(StageActor *arg0) {
    if (arg0->hp > 0) {
        PlaySoundAtActor((s32) arg0, 0x8C6, 0);
    }
}

void func_sc05_004_80180B1C(StageActor *arg0) {
    PlaySoundAtActor(arg0, 0x8C7, 0);
    GiveItem(0x10);
}

void func_sc05_004_80180B48(void) {
}

void func_sc05_004_80180B50(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (GroundDistSqTo(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        SetLocalVelocityXZ(arg0, &D_sc05_004_8019AEA4);
    } else if (TargetInSight(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (MoveCollideAt(arg0, &D_sc05_004_8019AEC0) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        DespawnIfFar(arg0);
    }
}

void func_sc05_004_80180C3C(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 0x20);
    arg0->pos[1].h.i = (u16) (u16)arg0->work100;
    arg0->pos[1].w = (s32) (arg0->pos[1].w - (rsin((s32) (s16) (u16)arg0->unkFC) << 0xA));
    if ((s16) (u16)arg0->unkFC >= 0x400) {
        arg0->state = 5;
        arg0->workFE = 4;
        PlaySoundAtActor((s32) arg0, 0x98F, 0);
    }
}

void func_sc05_004_80180CBC(StageActor *arg0) {
    arg0->pos[1].w += 0x100000;
    arg0->pos[0].w -= rsin(arg0->model->rot.vy) << 8;
    arg0->pos[2].w -= rcos(arg0->model->rot.vy) << 8;
    if (--arg0->workFE == 0) {
        arg0->state = 6;
        ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc05_004_8019AEB0, (s32) &D_sc05_004_8019AEB8, 0xF);
        arg0->workFE = 8;
    }
}

void func_sc05_004_80180D70(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFF80000);
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + (rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7));
    AF(arg0, s32, 0xC) += rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7;
    if (--AF(arg0, s16, 0xFE) == 0) {
        if (DistSqToTarget((s32) arg0) < 0x4001) {
            if (TargetInFront((s32) arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 5;
                AF(arg0, u16, 0xFE) = 4U;
                PlaySoundAtActor((s32) arg0, 0x98F, 0);
                return;
            }
            goto block_5;
        }
block_5:
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc05_004_80180E50(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 0x20);
    arg0->pos[1].h.i = (u16) (u16)arg0->work100;
    arg0->pos[1].w = (s32) (arg0->pos[1].w - (rsin((s32) (s16) (u16)arg0->unkFC) << 0xA));
    if ((s16) (u16)arg0->unkFC >= 0x800) {
        arg0->state = 3;
    }
}

void func_sc05_004_80180EB8(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (DistSqToTarget((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc05_004_80180F18(StageActor *arg0) {
    s32 sp10;
    u16 temp_v0;

    HeadingPitchTo((s32) &sp10, (u8 *)arg0 + 4, (s32) &g_PlayerPosX);
    arg0->model->rot.vy = (s16) (sp10 >> 0x10);
    arg0->model->rot.vx = (s16) sp10;
    temp_v0 = (u16)arg0->pos[1].h.i - 8;
    arg0->pos[1].h.i = temp_v0;
    if ((arg0->origin[1] - (s16) temp_v0) >= 0x81) {
        arg0->state = 0xA;
        arg0->unkFC = 0xC;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_80180FA8(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->unkFC - 1;
    arg0->unkFC = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        arg0->state = 0xB;
    }
    if ((s16) (u16)arg0->unkFC == 6) {
        SpawnActorArg(0x1EA, 0xE, (s32) arg0);
        PlaySoundId(0xC5D, 0);
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018101C(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->pos[1].h.i + 8;
    arg0->pos[1].h.i = temp_v0;
    if ((arg0->origin[1] - (s16) temp_v0) <= 0) {
        arg0->state = 8;
        arg0->unkFC = 0x1E;
    }
    func_sc05_004_801807AC((s32) arg0);
}

void func_sc05_004_8018106C(s32 arg0) {
    s32 temp_v0;

    if ((MoveCollidePassable(arg0) != 0) || (ActorSegmentDamagesPlayer(arg0, (s32) &D_sc05_004_8019AEC8, (s32) &D_sc05_004_8019AED0, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor(arg0);
        return;
    }
    func_sc05_004_801808CC(arg0);
}

void func_sc05_004_801810EC(StageActor *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (GroundDistSqToPlayer() <= 0x23FFFF) {
        temp_v0 = arg0->timer - 1;
        arg0->timer = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = SpawnActorArg(0x1EA, 0xF, (s32) arg0);
            arg0->timer = (s32) ((rand() & 0x1F) + 0x2D);
            if ((arg0->param == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

void func_sc05_004_8018118C(StageActor *arg0) {
    s16 temp_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0;

    arg0->state = 2;
    temp_v0 = (u16)arg0->param + 1;
    arg0->param = temp_v0;
    if ((s16) temp_v0 < 7) {
        temp_v0_2 = SpawnActorArg(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) arg0->id;
            AF(temp_v0_2, s16, 0x108) = (s16) (((u16)arg0->param - 1) << 9);
        }
    }
    temp_a1 = arg0->param;
    if (temp_a1 >= 8) {
        if (temp_a1 < 0xE) {
            temp_v0_3 = SpawnActorArg(0x1EA, temp_a1, (s32) arg0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, u16, 0xFE) = (u16) arg0->id;
            }
        }
    }
    arg0->param = (u16) ((u16)arg0->param - 1);
    func_sc05_004_8017F9BC(arg0);
}

void func_sc05_004_8018125C(StageActor *arg0) {
    StageActor *temp_v0_2;
    u16 temp_v0;

    arg0->state = 0x11;
    temp_v0 = (u16)arg0->param + 1;
    arg0->param = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = SpawnActorArg(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            temp_v0_2->workFE = (u16) arg0->id;
            arg0->link = temp_v0_2;
            temp_v0_2->work108 = (s16) (((u16)arg0->param - 0x11) << 9);
        }
    }
    arg0->param = (u16) ((u16)arg0->param - 1);
    func_sc05_004_801804B8((s32) arg0);
}

void func_sc05_004_801812F0(StageActor *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->pos[1].w + 0x40000;
    arg0->pos[1].w = temp_v0;
    if (temp_v0 > 0x400000) {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc05_004_8018132C(StageActor *arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 t;

    p = (u8 *)&g_Actors;
    n = 0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1EA) {
            t = AF(p, s16, 0x70);
            if (t == 0 || t == 7 || t == 0xF) {
                n++;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
    if (n < 2) {
        p = (u8 *)SpawnActorArg(0x1EA, 0, arg0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
            AF(p, s16, 6) += (rand() & 0x7F) - 0x40;
            AF(p, s16, 0xE) += (rand() & 0x7F) - 0x40;
        }
    }
}

void func_sc05_004_80181414(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    SetShapeCircle((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801814D8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc05_004_8019F0B8;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    FreeProp((s32) arg0);
}

void func_sc05_004_8018158C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_004_801815CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        FreeProp((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}
