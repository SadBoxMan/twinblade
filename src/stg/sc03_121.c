#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_121_8017BE9C(void) {
}

void func_sc03_121_8017BEA4(void) {
}

void func_sc03_121_8017BEAC(void) {
}

void func_sc03_121_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_121_80185C2C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_121_8017D374(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_121_80185C34[])();
extern void func_800D1EBC();
extern u8 D_sc03_121_80185C40;
extern void StartPlayerActionScript();
extern u8 D_sc03_121_80185C44;
extern void func_sc03_121_8017D460();
extern void (*D_sc03_121_80185C58[])();
extern void (*D_sc03_121_80185E7C[])();
extern void (*D_sc03_121_80185ED0[])();
extern void (*D_sc03_121_8019BC80[])();
extern void (*D_sc03_121_8019BCB4[])();
extern void (*D_sc03_121_8019BD84[])();
extern void (*D_sc03_121_801ABCB8[])();

extern u8 D_sc03_121_80185B70;
extern void (*D_sc03_121_80185B98[])();
extern void StartRumbleScript();
extern u8 D_sc03_121_80185BA4;
extern void (*D_sc03_121_80185BCC[])();
extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 D_sc03_121_801AEE38;
extern s32 SpawnActor();

extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern void NextObjState();
extern void func_sc03_121_8017CE3C();
extern void func_sc03_121_8017D104();
extern void SetReactionStep();

extern s32 func_sc03_121_8017D024();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern void FreeActor();
extern void MoveObject();

extern u8 D_sc03_121_801AB6F4;
extern u8 D_sc03_121_801AAFFC;

extern s32 TickObjTimer();
extern void EnterPlayerStanding();
extern void HitPlayerFatal();
extern u8 D_80078EC0;
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
extern u8 D_sc03_121_8018E84C;
extern void (*D_sc03_121_80185DCC[])();
extern void StopWithGravity();
extern s16 g_PlayerHitKind;
extern void (*D_sc03_121_80185E3C[])();
extern s32 ActorTouchesPlayer();
extern u8 D_sc03_121_801824B0;
extern u8 D_sc03_121_80185E48;
extern s32 SetupActor();
extern s32 MoveCollide();
extern void EndReaction();
extern u8 D_sc03_121_80185CB4;
extern u8 D_sc03_121_8018DF04;
extern void TakeDamageAndRecoil();
extern void SetLocalVelocity();
extern u8 D_sc03_121_80185CDC;
extern u8 D_sc03_121_80185D10;
extern u8 D_sc03_121_8018D8AC;
extern s32 D_sc03_121_801AECD4;
extern void SpawnShadow();
extern u8 D_sc03_121_8018E8EC;
extern u8 D_sc03_121_8018E3F4;
extern s32 SpawnKind205();
extern u8 D_sc03_121_80185BDC;
extern void SetProgress();
extern void func_800D1724();
extern void GiveItem();
extern s32 g_PlayerHitBy;
extern s32 g_PlayerAttacker;
extern u8 D_sc03_121_8019B8F4;
extern u8 D_sc03_121_801A007C;
extern s32 D_sc03_121_801AECEC;
extern s32 D_sc03_121_801AECF0;
extern s32 SpawnActorArg();
extern u8 D_sc03_121_8019B9B0;
extern void StartEvent();
extern void func_sc03_121_801813E8();

extern u8 D_sc03_121_80185C5C;
extern void func_sc03_121_8017D4C4();

extern u8 D_sc03_121_80185B78;
extern void PlaySe();
extern void ShowQueuedDamageNumber();
extern void SetPlayerMotion();
extern void ClearPlayerHittable();
extern void SetPlayerEvent80();
extern u8 D_sc03_121_80185BAC;
extern void SetPlayerFlag7E2();
extern void SetObjTimer();

extern u8 D_sc03_121_801828E0;
extern void StartCameraShake();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_121_8017BEBC(u8 *obj) {
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

void func_sc03_121_8017CD9C(u8 *arg0) {
    StartRumbleScript((s32) &D_sc03_121_80185B70);
    D_sc03_121_80185B98[AF(arg0, u16, 2)](arg0);
}

void func_sc03_121_8017CDF4(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc03_121_8017CE3C(arg0);
    NextObjState(arg0);
}

void func_sc03_121_8017CE3C(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc03_121_80185B78);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0xF0;
    AF(arg0, u8, 0xDF) = 0;
    SetPlayerEvent80(arg0);
    NextObjState(arg0);
}

extern s32 CollidePath();
extern s32 MoveCollidePassableAt();
extern void SpawnKind1C();
extern void DamageActorsNear();
extern s32 MoveCollidePassable();
extern s32 D_sc03_121_801AECD0;
extern u8 g_Status;
extern u8 D_sc03_121_8019BBD0;
extern s32 PlayerEvent80();
extern void SetVar();
extern s32 IsEventDone();
extern void EndEvent();
extern u8 *D_sc03_121_801AECD8[];
extern u8 D_sc03_121_8019BBF8;
extern s32 RequestBgmPack();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
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
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();


extern u8 D_sc03_121_80185DA4;
extern u8 D_sc03_121_8018D9F4;
extern u8 D_sc03_121_80185CAC;

typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 g_GroundNormal;
extern u8 D_sc03_121_801ABC80;
extern WMtx *D_sc03_121_801ABCB4;
extern WMtx D_sc03_121_801AEE18[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern s32 FindGround();
extern s8 D_sc03_121_801ABC6C[];
extern void DrawPrimG4Mtx();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
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
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001CA1C();
extern u8 D_sc03_121_8019BCA0;
extern u8 D_sc03_121_8019BCAC;

extern s32 SetScript();
extern void UpdateModelZYX();
extern s32 rsin();
extern s32 rcos();
extern u8 D_sc03_121_80185E00;
extern u8 D_sc03_121_80185E18;
extern u8 D_sc03_121_80185E30;
extern u16 g_PlayerTarget;
extern u16 D_80126CB8;
extern s32 TraceMap();

extern u8 D_sc03_121_801AAF54;
extern s32 func_sc03_121_8017D65C();
extern s32 TurnStepToPlayer();
extern s32 DistSqToPlayer();
extern s32 SetLocalVelocityXZ();
extern s32 TargetInFront();
extern u8 D_sc03_121_80185D98;
extern u8 D_sc03_121_8018E684;

extern s32 TraceMapTwoCells();
extern u8 D_sc03_121_801AB144;
extern u8 D_sc03_121_80185C64;
extern u8 D_sc03_121_80185EC8;
extern s32 func_sc03_121_80181BE8();

extern s32 rand();
extern void InitModel();
extern s32 D_sc03_121_80185CC0[];
extern s32 GetObjPadPressed();
extern s32 GetObjStickAngle();
extern s32 ObjUpHeld();
extern s32 ObjDownHeld();
extern s32 ObjLeftHeld();
extern s32 ObjRightHeld();
extern s32 FaceStickDir();
extern void func_80165718();
extern s32 D_sc03_121_80185C94[];
extern s32 HeadingToPoint();
extern u8 D_sc03_121_8018DB6C;

void GrabStruggle(u8 *o) {
    u8 *w = AF(o, u8 *, 0x20);
    u16 f;
    s32 t;
    u8 c;
    switch (AF(o, u8, 0xA9)) {
    case 0x41:
        f = GetObjPadPressed(o) & 0xF000;
        t = GetObjStickAngle(o);
        if ((s16)t > 0) {
            AF(w, s16, 0x12) = t;
        }
        break;
    case 0x53:
    case 0x73:
        f = (ObjUpHeld(o) != 0) << 12;
        if (ObjDownHeld(o)) {
            f |= 0x4000;
        }
        if (ObjLeftHeld(o)) {
            f |= 0x8000;
        }
        if (ObjRightHeld(o)) {
            f |= 0x2000;
        }
        FaceStickDir(o);
        break;
    }
    f = f >> 12;
    if (f != 0 && !(f & AF(o, u8, 0xDF))) {
        AF(o, u8, 0xDE) -= 8;
        if (AF(o, u8, 0xDE) > 0xF0) {
            AF(o, u8, 0xDE) = 0;
        }
    }
    c = AF(o, u8, 0xDE);
    AF(o, u8, 0xDF) = f;
    AF(o, u8, 0xDE) = c + 0xFF;
    if (c == 0) {
        func_sc03_121_8017D024(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    } else {
        SetPlayerEvent80(o);
    }
}

s32 func_sc03_121_8017D024(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc03_121_8017D064(u8 *arg0) {
    StartRumbleScript((s32) &D_sc03_121_80185BA4);
    D_sc03_121_80185BCC[AF(arg0, u16, 2)](arg0);
}

void func_sc03_121_8017D0BC(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc03_121_8017D104(arg0);
    NextObjState(arg0);
}

void func_sc03_121_8017D104(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc03_121_80185BAC);
    ClearPlayerHittable(arg0);
    SetPlayerFlag7E2(arg0);
    SetObjTimer(arg0, 0x5A);
    NextObjState(arg0);
}

void GrabTimeoutFatal(s32 arg0) {
    if (TickObjTimer() != 0) {
        EnterPlayerStanding(arg0);
        HitPlayerFatal();
        NextObjState(arg0);
    }
}

void func_sc03_121_8017D1B4(void) {
}

void func_sc03_121_8017D1BC(void) {
    D_80078EC0 &= 0x7F;
}

void func_sc03_121_8017D1DC(u8 *arg0) {
    D_sc03_121_80185C2C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_121_8017D218(u8 *arg0) {
    func_sc03_121_8017D374();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_121_8017D25C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_121_8017D280(u8 *arg0) {
    D_sc03_121_80185C34[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_121_8017D2BC(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_121_8017D2D8(u8 *arg0) {
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

void func_sc03_121_8017D354(void) {
    func_800D1EBC();
}

void func_sc03_121_8017D374(void) {
    StartPlayerActionScript((s32) &D_sc03_121_80185C40, 0x01000000);
}

void func_sc03_121_8017D39C(void) {
    StartPlayerActionScript((s32) &D_sc03_121_80185C44, 0x01000000);
}

void func_sc03_121_8017D3C4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_121_8017D460, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_121_8017D460((s32) &g_Camera);
}

void func_sc03_121_8017D460(s32 arg0) {
    D_sc03_121_80185C58[AF(arg0, u8, 4)]();
}

void func_sc03_121_8017D49C(s32 arg0) {
    s32 pad[2];
    func_sc03_121_8017D4C4(arg0, (s32) &D_sc03_121_80185C5C);
}

void func_sc03_121_8017D4C4(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_121_8017D65C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 hit;
    s32 i;
    s32 dx;
    s32 dz;

    hit = 0;
    a.y = AF(o, u16, 0xA) - 0x40;
    for (i = 0; i < 4; i++) {
        dx = AF(&D_sc03_121_80185CAC, s16, 0);
        dz = AF(&D_sc03_121_80185CAC, s16, 4);
        a.x = AF(o, s16, 6) + (((dx - AF(o, s16, 6)) * i) >> 2);
        a.z = AF(o, s16, 0xE) + (((dz - AF(o, s16, 0xE)) * i) >> 2);
        b.x = AF(o, s16, 6) + (((dx - AF(o, s16, 6)) * (i + 1)) >> 2);
        b.y = AF(&D_sc03_121_80185CAC, u16, 2);
        b.z = AF(o, s16, 0xE) + (((dz - AF(o, s16, 0xE)) * (i + 1)) >> 2);
        if (TraceMapTwoCells(1, &a, &b)) {
            hit = 1;
        }
    }
    if (AF(o, s16, 0xA) < -0x91) {
        return 1;
    }
    return hit;
}

s32 func_sc03_121_8017D788(u8 *o, s32 d0, s32 f0) {
    s16 d = d0;
    SV8 p;
    SV8 q;
    s32 r;
    p.x = AF(o, u16, 6) - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    p.y = AF(o, u16, 0xA) - 0x10;
    p.z = AF(o, u16, 0xE) - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    q.x = p.x;
    q.y = p.y + 0x20;
    q.z = p.z;
    r = TraceMap(1, &p, &q);
    if (!(r & 0x6000) && (s16)f0 != 0) {
        AF(o, u16, 6) = q.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
        AF(o, u16, 0xE) = q.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    }
    return r;
}

void func_sc03_121_8017D8D4(u8 *arg0) {
    SV8 ofs;
    SV8 p;
    SV8 q;
    SV8 r;

    if (AF(arg0, s32, 8) > 0) {
        AF(arg0, s16, 6) = -0x103;
        AF(arg0, s16, 0xA) = -0x182;
        AF(arg0, s16, 0xE) = 0xE8;
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x10A) = 0;
        StopWithGravity(arg0);
    }
    ofs.x = 0;
    ofs.y = 0x30;
    ofs.z = 0;
    DamageActorsNear(arg0, 0xA, AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(arg0, u8, 0xC2) = 1;
        p.x = AF(arg0, s16, 0x3A);
        p.y = AF(arg0, s16, 0x3E);
        p.z = AF(arg0, s16, 0x42);
        q = p;
        q.x += ofs.x;
        q.y += ofs.y;
        q.z += ofs.z;
        CollidePath(&p, &q, 1);
        q.x -= ofs.x;
        q.y -= ofs.y;
        q.z -= ofs.z;
        AF(arg0, s16, 0x3A) = q.x;
        AF(arg0, s16, 0x3E) = q.y;
        AF(arg0, s16, 0x42) = q.z;
        AF(arg0, s16, 6) = q.x;
        AF(arg0, s16, 0xA) = q.y;
        AF(arg0, s16, 0xE) = q.z;
    case 1:
        D_sc03_121_801AECD0 = MoveCollidePassableAt(arg0, &ofs);
        if (D_sc03_121_801AECD0 & 0x2000) {
            AF(arg0, u8, 0xC2) = 2;
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF30000;
        }
        if (D_sc03_121_801AECD0 & 0x8000) {
            AF(arg0, u8, 0xC2) = 3;
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        break;
    case 2:
        D_sc03_121_801AECD0 = MoveCollidePassableAt(arg0, &ofs);
        if (D_sc03_121_801AECD0 & 0x2000) {
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF60000;
            AF(arg0, u8, 0xC2) = 3;
        }
        if (D_sc03_121_801AECD0 & 0x8000) {
            AF(arg0, u8, 0xC2) = 3;
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        D_sc03_121_801AECD0 = MoveCollidePassable(arg0);
        if (D_sc03_121_801AECD0 & 0x2000) {
            AF(arg0, u8, 0xC2) = 4;
            AF(arg0, s32, 0x14) = 0;
            AF(arg0, s32, 0x1C) = 0;
            SpawnKind1C(arg0, 1);
        }
        break;
    case 4:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        MoveCollidePassable(arg0);
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x11) {
            EndReaction(arg0);
        }
        break;
    }
}

void func_sc03_121_8017DC24(u8 *o) {
    s16 i;
    MoveCollide();
    if (AF(o, u16, 0x72) & 0x4000) {
        i = (s16)(AF(o, u16, 0xFC) + 1) % 6;
        AF(o, s16, 0xFC) = i;
        SetScript(o, D_sc03_121_80185C94[i]);
        if (AF(o, u8 *, 0x90) != &D_sc03_121_8018D8AC) {
            PlaySoundId(0x715, 0);
        }
    }
    switch (AF(o, s16, 0x10A)) {
    case 1:
        AF(o, s16, 2) = 2;
        SetScript(o, &D_sc03_121_8018E3F4);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, &D_sc03_121_80185CAC);
        UpdateModelZYX(o);
        SetLocalVelocity(o, &D_sc03_121_80185D98);
        break;
    case 3:
        AF(o, s16, 2) = 5;
        SetScript(o, &D_sc03_121_8018E3F4);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, &D_sc03_121_80185CAC);
        UpdateModelZYX(o);
        SetLocalVelocity(o, &D_sc03_121_80185D98);
        break;
    case 2:
        AF(o, s16, 0x10A) = 0;
        break;
    case 4:
        if (PlayerEvent80(&g_Player)) {
            AF(o, s16, 0x10A) = 0;
            break;
        }
        AF(o, s16, 2) = 7;
        SetScript(o, &D_sc03_121_8018DB6C);
        PlaySoundId(0x713, 0);
        break;
    }
}

void func_sc03_121_8017DDB4(u8 *arg0) {
    SV8 p;
    SV8 q;

    if (MoveCollide(arg0) & 0x6000) {
        if (func_sc03_121_8017D65C(arg0) != 0) {
            SetScript(arg0, &D_sc03_121_8018E3F4);
            SetLocalVelocity(arg0, &D_sc03_121_80185D98);
        } else {
            AF(arg0, s16, 2) = 3;
            SetScript(arg0, &D_sc03_121_8018D9F4);
            AF(arg0, s16, 0x34) = 0;
            PlaySoundId(0x709, 0);
        }
    }
    p.x = AF(arg0, u16, 6);
    p.y = AF(arg0, u16, 0xA) - 0x20;
    p.z = AF(arg0, u16, 0xE);
    q.x = p.x - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    q.y = p.y;
    q.z = p.z - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    if (TraceMap(1, &p, &q) & 0x8000) {
        AF(arg0, u16, 6) = q.x + ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
        AF(arg0, u16, 0xE) = q.z + ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    }
}

typedef struct { SV8 a; SV8 b; } P16;
extern SV8 D_sc03_121_8019BCE4[];
extern u8 D_sc03_121_8019BCBC;
extern u8 D_sc03_121_8019BCD4;
extern s16 g_PlayerHitDamage;
extern u8 D_sc03_121_8018E58C;
extern u8 D_sc03_121_80185DBC;
extern u8 D_sc03_121_80185DC4;
extern s32 TurnStepToTarget();
extern s32 DistSqToTarget();
extern s32 ActorSegmentHitsPlayer();
extern u8 D_sc03_121_8019BBB0;

void func_sc03_121_8017DF2C(u8 *o) {
    V3 v;
    s32 d;
    s32 m;
    u16 s;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        m = AF(o, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        MoveCollide(o);
        d = DistSqToTarget(o);
        v.x = 0;
        v.z = -(d << 5);
        if (v.z < -0x20000) {
            v.z = -0x20000;
        }
        SetLocalVelocityXZ(o, &v);
        if (d <= 0x1000 && TargetInFront(o, 0x100) == 1) {
            SetScript(o, &D_sc03_121_8018E58C);
            AF(o, u16, 0x34)++;
            PlaySoundId(0x713, 0);
        }
        if (AF(o, s16, 0x10A) == 2) {
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0x16) {
            if (ActorSegmentHitsPlayer(o, &D_sc03_121_80185DBC, &D_sc03_121_80185DC4) == 1) {
                g_PlayerHitKind = 0x4010;
                g_PlayerHitDamage = 0;
                s = AF(o, u16, 0x34);
                g_PlayerAttacker = (s32)o;
                AF(o, u16, 0x34) = s + 2;
            } else {
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        break;
    case 3:
        if (g_PlayerHitBy != (s32)o) {
            AF(o, u16, 0x34)--;
        } else {
            SetScript(o, &D_sc03_121_8018E684);
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        if (g_PlayerHitBy != (s32)o) {
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        if (AF(o, s32, 0x94) == 0xD) {
            ActorSegmentHitsPlayer(o, &D_sc03_121_80185DBC, &D_sc03_121_80185DC4);
        }
        break;
    }
}

void func_sc03_121_8017E1D0(u8 *arg0) {
    V3 v;
    SV8 p;
    SV8 q;
    s32 r;
    s32 t;
    s32 m;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        t = TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 8);
        if (t != 0) {
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            break;
        }
        AF(arg0, u16, 0x34)++;
        SetLocalVelocityXZ(arg0, &D_sc03_121_80185DA4);
        SetScript(arg0, &D_sc03_121_8018D9F4);
        AF(arg0, s16, 0x10A) = 0;
        AF(arg0, s32, 0x1C) = 0x3C;
        break;
    case 1:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_121_8018D9F4);
            SetLocalVelocityXZ(arg0, &D_sc03_121_80185DA4);
        }
        m = AF(arg0, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        if (MoveCollidePassable(arg0) & 0x8000) {
            AF(arg0, u16, 0x34)++;
            SetScript(arg0, &D_sc03_121_8018E3F4);
            SetLocalVelocity(arg0, &D_sc03_121_80185DA4);
            break;
        }
        p.x = AF(arg0, u16, 6);
        p.y = AF(arg0, u16, 0xA) - 0x20;
        p.z = AF(arg0, u16, 0xE);
        q.x = p.x - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
        q.y = p.y;
        q.z = p.z - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
        r = TraceMap(1, &p, &q);
        if (r & 0x8000) {
            AF(arg0, u16, 6) = q.x + ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
            AF(arg0, u16, 0xE) = q.z + ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
        }
        if (r != 0) {
            AF(arg0, u16, 0x34)++;
            SetScript(arg0, &D_sc03_121_8018E3F4);
            SetLocalVelocity(arg0, &D_sc03_121_80185DA4);
            break;
        }
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
            break;
        }
        AF(arg0, u16, 0x34)++;
        SetScript(arg0, &D_sc03_121_8018E3F4);
        SetLocalVelocity(arg0, &D_sc03_121_80185DA4);
        break;
    case 2:
        if (MoveCollidePassable(arg0) & 0x6000) {
            if (func_sc03_121_8017D65C(arg0) == 0) {
                SetScript(arg0, &D_sc03_121_8018E3F4);
                SetLocalVelocity(arg0, &D_sc03_121_80185DA4);
            } else {
                AF(arg0, u16, 0x34)++;
                SetScript(arg0, &D_sc03_121_8018D9F4);
                AF(arg0, s32, 0x1C) = 0;
            }
        }
        break;
    case 3:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_121_8018D9F4);
        }
        m = AF(arg0, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        t = TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 8);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t;
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        if (MoveCollidePassable(arg0) & 0x8000) {
            if (++AF(arg0, s32, 0x1C) >= 0x1E) {
                SetScript(arg0, &D_sc03_121_8018E3F4);
                SetLocalVelocity(arg0, &D_sc03_121_80185DA4);
                AF(arg0, u16, 0x34)--;
                break;
            }
        }
        r = GroundDistSqTo(arg0, arg0 + 0x88);
        v.x = 0;
        v.z = -(r << 5);
        if (v.z < -0x20000) {
            v.z = -0x20000;
        }
        SetLocalVelocityXZ(arg0, &v);
        if (r < 0x401) {
            AF(arg0, u16, 0x34)++;
            SetScript(arg0, &D_sc03_121_8018D8AC);
            StopWithGravity(arg0);
        }
        break;
    case 4:
        t = TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, &D_sc03_121_80185CAC), 8);
        if (t != 0) {
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        } else {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 0;
        }
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_121_8018D8AC);
        }
        break;
    }
}

void func_sc03_121_8017E710(u8 *arg0) {
    V3 v;
    s32 t;
    s32 r;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (MoveCollide(arg0) & 0x6000) {
            if (func_sc03_121_8017D65C(arg0) != 0) {
                SetScript(arg0, &D_sc03_121_8018E3F4);
                SetLocalVelocity(arg0, &D_sc03_121_80185D98);
            } else {
                SetScript(arg0, &D_sc03_121_8018D9F4);
                AF(arg0, u16, 0x34)++;
            }
        }
        break;
    case 1:
        t = TurnStepToPlayer(arg0, 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += t;
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        MoveCollide(arg0);
        r = DistSqToPlayer(arg0);
        v.x = 0;
        v.z = -(r << 5);
        if (v.z < -0x20000) {
            v.z = -0x20000;
        }
        SetLocalVelocityXZ(arg0, &v);
        if (r < 0x10001) {
            if (TargetInFront(arg0, 0x200) == 1) {
                AF(arg0, u16, 0x34)++;
                SetScript(arg0, &D_sc03_121_8018E684);
            }
        }
        break;
    }
}

extern OtRef g_WorldOtOrg[];
extern u8 D_800AF648;
extern u8 *AllocPrim();


extern u8 D_sc03_121_80185E94;
extern u8 D_sc03_121_801AB1EC;
extern u8 D_sc03_121_8018DE2C;

extern u8 D_sc03_121_8019BB90;
extern SV8 D_sc03_121_8019B928[];

extern s32 TurnStep();
extern s32 GroundDistSqTo();

static inline s32 push_8017E880(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;
    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA) - 0x20;
    a.z = AF(o, u16, 0xE);
    b.x = a.x - ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    b.y = a.y;
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    r = TraceMap(1, &a, &b) & 0x8000;
    if (r != 0) {
        AF(o, u16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
        AF(o, u16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * 32) >> 12);
    }
    return r;
}

void func_sc03_121_8017E880(u8 *o) {
    SV8 p;
    SV8 q;
    s32 m;
    s32 t;
    s32 s;
    s32 r;

    if (AF(o, s32, 8) > 0) {
        AF(o, s16, 6) = -0x103;
        AF(o, s16, 0xA) = -0x182;
        AF(o, s16, 0xE) = 0xE8;
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x34) = 0;
        AF(o, s16, 0x10A) = 0;
        StopWithGravity(o);
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        m = AF(o, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        if (MoveCollidePassable(o) != 0) {
            if (++AF(o, s32, 0x1C) >= 0x1E) {
                AF(o, s32, 0x1C) = 0;
                if (func_sc03_121_8017D65C(o) == 0) {
                    AF(o, s32, 0x14) = 0xFFE80000;
                }
            }
        }
        SetLocalVelocityXZ(o, &D_sc03_121_80185DA4);
        if (AF(o, s16, 0xE) < -0xDF) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x800;
            m = (0x800 - HeadingToPoint(o + 4, &D_sc03_121_80185CAC)) & 0xFFF;
            if (m < 0x800) {
                AF(o, s16, 0xFE) = 0x400;
            } else {
                AF(o, s16, 0xFE) = -0x400;
            }
        } else {
            t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), HeadingToPoint(o + 4, o + 0x88), 4);
            AF(AF(o, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            s = HeadingToPoint(o + 4, &D_sc03_121_80185CAC);
            r = GroundDistSqTo(o, &D_sc03_121_80185CAC);
            if (r <= 0x1E400) {
                s += 0x800;
                s &= 0xFFF;
                r = 0x1E400 - r;
            } else {
                r = r - 0x1E400;
            }
            if (r < 0x101) {
                AF(o, u16, 0x34)++;
                m = (AF(AF(o, u8 *, 0x20), s16, 0x12) - HeadingToPoint(o + 4, &D_sc03_121_80185CAC)) & 0xFFF;
                AF(o, s16, 0xFE) = m < 0x800 ? 0x400 : -0x400;
            }
            t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), s, 4);
            AF(AF(o, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        }
        if (GroundDistSqTo(o, o + 0x88) < 0x2401) {
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x18) = 0;
            AF(o, u16, 0x34) += 2;
        }
        break;
    case 1:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        m = AF(o, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        if (MoveCollidePassable(o) != 0) {
            if (++AF(o, s32, 0x1C) >= 0x1E) {
                AF(o, s32, 0x1C) = 0;
                if (func_sc03_121_8017D65C(o) == 0) {
                    AF(o, s32, 0x14) = 0xFFE80000;
                }
            }
        }
        SetLocalVelocityXZ(o, &D_sc03_121_80185DA4);
        if (AF(o, s16, 0xE) < -0xDF) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x800;
            m = (0x800 - HeadingToPoint(o + 4, &D_sc03_121_80185CAC)) & 0xFFF;
            if (m < 0x800) {
                AF(o, s16, 0xFE) = 0x400;
            } else {
                AF(o, s16, 0xFE) = -0x400;
            }
        } else {
            t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), HeadingToPoint(o + 4, o + 0x88), 4);
            AF(AF(o, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            s = HeadingToPoint(o + 4, &D_sc03_121_80185CAC) + AF(o, s16, 0xFE);
            t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), s & 0xFFF, 4);
            AF(AF(o, u8 *, 0x20), u16, 0x12) += t;
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        }
        if (GroundDistSqTo(o, o + 0x88) < 0x2401) {
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x18) = 0;
        }
        break;
    case 2:
        MoveCollidePassable(o);
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_121_8018D8AC);
        }
        s = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), HeadingToPoint(o + 4, &D_sc03_121_80185CAC), 8);
        if (s != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += s;
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            break;
        }
        AF(o, u16, 0x34)++;
        SetLocalVelocityXZ(o, &D_sc03_121_80185DA4);
        SetScript(o, &D_sc03_121_8018D9F4);
        break;
    case 3:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetLocalVelocityXZ(o, &D_sc03_121_80185DA4);
            SetScript(o, &D_sc03_121_8018D9F4);
        }
        m = AF(o, s32, 0x94);
        if (m == 0 || m == 0x17) {
            PlaySoundId(0x70A, 0);
        }
        MoveCollidePassable(o);
        p.x = AF(o, u16, 6);
        p.y = AF(o, u16, 0xA);
        p.z = AF(o, u16, 0xE);
        q.x = AF(o, u16, 6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) >> 6);
        q.y = AF(o, u16, 0xA);
        q.z = AF(o, u16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) >> 6);
        if ((TraceMap(1, &p, &q) & 0x8000) || push_8017E880(o)) {
            AF(o, s16, 2) = 1;
            AF(o, s16, 0x34) = 0;
            AF(o, s16, 0x10A) = 0;
            StopWithGravity(o);
        }
        break;
    }
}

void func_sc03_121_8017EFFC(StageActor *o) {
    u8 *p;
    s32 i;
    if (++o->timer < 0x5B) {
        MoveCollide();
        p = (u8 *)SpawnKind205(o, 0);
        if (p != 0) {
            AF(p, s16, 0x16) = -0xC;
            AF(p, s16, 0x12) = (rand() & 7) - 4;
            AF(p, s16, 0x1A) = (rand() & 7) - 4;
            AF(p, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(p, s16, 0xE) += (rand() & 0x1F) - 0x10;
            AF(p, s16, 0xA) -= (rand() & 0x1F) + 0x50;
        }
    } else {
        o->animTimer = 0;
    }
    if (o->timer >= 0x78) {
        PlaySoundId(0x7C0, 0);
        for (i = 0; i < 0xF; i++) {
            if (SpawnActor(0x207, o)) {
                InitModel(o->model, D_sc03_121_80185CC0[i % 3]);
            }
        }
        FreeActor(o);
    }
}

void func_sc03_121_8017F174(u8 *arg0) {
    if (AF(arg0, s16, 0x10A) == 5) {
        AF(arg0, u16, 2) = 8U;
        AF(arg0, s16, 0x10A) = 0;
        SetScript((s32) arg0, (s32) &D_sc03_121_8018E84C);
        StopWithGravity((s32) arg0);
    }
    D_sc03_121_80185DCC[AF(arg0, u16, 2)](arg0);
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, s16, 0xA) > 0)) {
        AF(arg0, s16, 6) = -0x103;
        AF(arg0, s16, 0xA) = -0x182;
        AF(arg0, s16, 0xE) = 0xE8;
        AF(arg0, u16, 2) = 6U;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s16, 0x10A) = 0;
        StopWithGravity((s32) arg0);
    }
}

void func_sc03_121_8017F234(u8 *o) {
    s32 r;
    r = AllocActorModel(o);
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(r, &D_sc03_121_80185E00);
    SetScript(o, &D_sc03_121_80185E18);
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    StopWithGravity(o);
    UpdateModelZYX(o);
    SetLocalVelocity(o, &D_sc03_121_80185E30);
    AF(o, u16, 2) = 1;
    AF(o, u16, 0xA) -= 0xA0;
    AF(o, u16, 6) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) >> 7;
    AF(o, u16, 0xE) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) >> 7;
    AF(o, u16, 0x88) = AF(o, u16, 6);
    AF(o, u16, 0x8A) = AF(o, u16, 0xA);
    AF(o, u16, 0x8C) = AF(o, u16, 0xE);
    AF(o, u16, 0xFC) = g_PlayerTarget - AF(o, u16, 0x88);
    AF(o, u16, 0xFE) = -0x82 - AF(o, s16, 0x8A);
    AF(o, u16, 0x100) = D_80126CB8 - AF(o, u16, 0x8C);
}

void func_sc03_121_8017F374(StageActor *o) {
    SV8 a;
    SV8 b;
    o->work102++;
    o->work104 += 0x40;
    o->pos[0].h.i = (u16)o->origin[0] + ((o->unkFC * o->work102) >> 5);
    o->pos[1].h.i = (u16)o->origin[1] + ((o->workFE * o->work102) >> 5);
    o->pos[1].h.i -= rsin(o->work104) >> 5;
    o->pos[2].h.i = (u16)o->origin[2] + ((o->work100 * o->work102) >> 5);
    a.x = (u16)o->prev[0].h.i;
    a.y = (u16)o->prev[1].h.i;
    a.z = (u16)o->prev[2].h.i;
    b.x = (u16)o->pos[0].h.i;
    b.y = (u16)o->pos[1].h.i;
    b.z = (u16)o->pos[2].h.i;
    if (o->work102 >= 0x20 || TraceMap(1, &a, &b) != 0) {
        o->state = 2;
        o->timer = 0x3C;
        o->index++;
    }
    SpawnKind1C(o, 0);
}

void func_sc03_121_8017F4C8(u8 *arg0) {
    D_sc03_121_80185E3C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0xA) == 1) {
            g_PlayerHitKind = 0xE;
            FreeActor((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc03_121_8017F578(s32 arg0) {
    void *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_121_80185E48) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc03_121_801824B0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = (s16) ((rand() & 0x3FF) + 0x400);
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rand() & 0x3FF) + 0x400);
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = (s16) ((rand() & 0x3FF) + 0x400);
        StopWithGravity(arg0);
        AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x16) = (s16) -(rand() & 0x1F);
        AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x50);
    }
}

void func_sc03_121_8017F69C(StageActor *arg0) {
    D_sc03_121_80185E7C[arg0->state]();
}

void func_sc03_121_8017F6D8(StageActor *arg0) {
    s32 s;

    switch (arg0->stateCount) {
    case 0:
        SetScript(arg0, &D_sc03_121_801AAF54);
        arg0->animTimer = 0;
        arg0->stateCount++;
        break;
    case 1:
        arg0->model->rot.vx -= 0x40;
        arg0->model->rot.vx &= 0xFFF;
        arg0->model->rot.vy += 0x40;
        arg0->model->rot.vy &= 0xFFF;
        arg0->vel[1] -= 0x28000;
        if (arg0->model->rot.vx == 0xC00) {
            arg0->stateCount++;
            arg0->model->flags |= 0x10;
        }
        break;
    case 2:
        s = rsin(arg0->workFE);
        arg0->workFE = ((u16)arg0->workFE + 0x40) & 0xFFF;
        if (s > 0) {
            arg0->model->scale.vz = (s >> 3) + 0x1000;
        } else {
            arg0->model->scale.vz = 0x1000;
        }
        break;
    }
}

void func_sc03_121_8017F840(StageActor *arg0) {
    D_sc03_121_80185ED0[arg0->state]();
}

void func_sc03_121_8017F87C(u8 *o) {
    s32 a;
    AF(o, u16, 0x5C) = 0xAA00;
    AF(o, s16, 0x34) = 0;
    SetScript(o, &D_sc03_121_8018D9F4);
    StopWithGravity(o);
    if (func_sc03_121_8017D65C(o) != 0 && AF(o, s16, 0x10A) != 5) {
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x10A) = 0;
        if (AF(o, s16, 0xA) < -0x90) {
            a = HeadingToPoint(o + 4, &D_sc03_121_80185CAC);
            a += 0x800;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = a & 0xFFF;
            AF(o, s16, 0x16) = -8;
        }
    }
}

void func_sc03_121_8017F91C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u16, 0x5C) = 0xAA00;
    AF(arg0, s16, 6) = -0x103;
    AF(arg0, s16, 0xA) = -0x182;
    AF(arg0, s16, 0xE) = 0xE8;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x10A) = 0;
    StopWithGravity((s32) arg0);
}

void func_sc03_121_8017F978(StageActor *arg0) {
    SetReactionStep(arg0, 0x11);
}

void func_sc03_121_8017F998(StageActor *o) {
    s32 k;
    if (g_PlayerHitBy == (s32) o) {
        g_PlayerHitBy = 0;
    }
    k = AF(o, u8, 0x5E);
    switch (k) {
    case 5:
    case 8:
    case 0x20:
    case 0x26:
        goto stop;
    }
    if (o->state == 2 || (o->hp < 0x371 && k != 0x1D)) {
    stop:
        SetReactionStep(o, 3);
        o->hp = 0x3E8;
    } else {
        TakeDamageAndRecoil(o);
        SetScript(o, &D_sc03_121_8018DE2C);
        PlaySoundId(0xA99, 0);
    }
}

void func_sc03_121_8017FA64(StageActor *arg0) {
    SetReactionStep(arg0, 1);
}

void func_sc03_121_8017FA84(s32 arg0) {
    MoveCollide(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        EndReaction(arg0);
    }
}

void func_sc03_121_8017FAC8(s32 arg0) {
    TakeDamageAndRecoil(arg0);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    SetScript(arg0, (s32) &D_sc03_121_8018DF04);
    SetLocalVelocity(arg0, (s32) &D_sc03_121_80185CB4);
    PlaySoundId(0x714, 0);
}

void func_sc03_121_8017FB28(s32 arg0) {
    D_sc03_121_801AECD4 = 0;
    if (SetupActor(arg0, (s32) &D_sc03_121_80185CDC) != 0) {
        AF(arg0, s16, 0x76) = 0x3E8;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 0x40003;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc03_121_8018D8AC);
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s32, 0x1C) = (s32) (rand() & 7);
        StopWithGravity(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc03_121_80185D10;
        AF(arg0, s16, 0xFC) = (s16) (rand() & 0x3FFF);
    }
}

void func_sc03_121_8017FBD8(StageActor *arg0) {
    if (arg0->index == 0x12) {
        SpawnActor(0x203, (s32) arg0);
        PlaySoundId(0x7BF, 0);
    }
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018D8AC);
        arg0->state = 1;
        arg0->work10A = 0;
    }
}

void func_sc03_121_8017FC50(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018E8EC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, s32, 0x1C) = 0;
        PlaySoundId(0x776, 0);
    }
    MoveCollide((s32) arg0);
}

void func_sc03_121_8017FCB8(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        return;
    }
    arg0->state = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_121_8018E3F4);
    arg0->index = 0x2C;
}

void func_sc03_121_8017FD14(s32 arg0) {
    s32 temp_v1;

    if (MoveCollide(arg0) != 0) {
        PlaySoundId(0x709, 0);
        temp_v1 = D_sc03_121_801AECD4 + 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        D_sc03_121_801AECD4 = temp_v1;
        if (temp_v1 == 3) {
            StartCameraShake((s32) &D_sc03_121_801828E0);
        }
    }
}

void func_sc03_121_8017FD88(StageActor *arg0) {
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_121_8018D8AC);
    }
}

void func_sc03_121_8017FDC4(StageActor *arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    ModelObj *temp_v0;

    temp_v1 = arg0->timer - 1;
    arg0->timer = temp_v1;
    if (temp_v1 < 0x10) {
        if (temp_v1 == 0) {
            FreeActor((s32) arg0);
        } else {
            temp_v0 = arg0->model;
            temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 ^ 0x80000000);
        }
    }
    temp_v0_2 = SpawnKind205((s32) arg0, 0);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s16, 0x16) = -8;
        AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 7) - 4);
        AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 7) - 4);
    }
}

void func_sc03_121_8017FE6C(u8 *arg0) {
    s32 r;
    s32 t;

    r = MoveCollide(arg0);
    if (r != 0) {
        AF(arg0, u16, 0xFC) = -AF(arg0, u16, 0xFC);
        AF(arg0, u16, 0xFE) = -AF(arg0, u16, 0xFE);
        AF(arg0, u16, 0x100) = -AF(arg0, u16, 0x100);
        if (r & 0x8000) {
            AF(arg0, s32, 0x10) = -AF(arg0, s32, 0x10);
            AF(arg0, s32, 0x18) = -AF(arg0, s32, 0x18);
        }
        if (r & 0x6000) {
            AF(arg0, s32, 0x14) = -8;
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0xFC);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xFE);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x100);
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t < 0x10) {
        AF(AF(arg0, u8 *, 0x20), s32, 4) ^= 0x80000000;
        if (AF(arg0, s32, 0x1C) == 0) {
            FreeActor(arg0);
        }
    }
}

void func_sc03_121_8017FF8C(StageActor *o) {
    if (SetupActor(o, &D_sc03_121_80185E94) != 0) {
        SetScript(o, &D_sc03_121_801AB1EC);
        o->reactive = 1;
        o->reactMask = -1;
        SpawnShadow(o);
        o->unkFC = 0x20;
        o->state++;
        if (o->param == 1) {
            o->model->rot.vy = 0x400;
            AF(o, s16, 0x12) = -4;
        } else {
            o->model->rot.vy = 0xC00;
            AF(o, s16, 0x12) = 4;
        }
    }
}

void func_sc03_121_80180038(StageActor *o) {
    o->pos[0].h.i += AF(o, s16, 0x12);
    if (--o->unkFC == 0) {
        o->model->rot.vy = 0;
        SetScript(o, &D_sc03_121_801AAF54);
        o->state++;
    }
}

void func_sc03_121_801800A8(void) {
}

void func_sc03_121_801800B0(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        SetScript(o, &D_sc03_121_801AB144);
        o->unkFC = 8;
        o->stateCount++;
        break;
    case 1:
        if (o->unkFC != 0) {
            o->unkFC--;
            o->pos[2].h.i -= 3;
        } else {
            o->stateCount++;
            SetScript(o, &D_sc03_121_80185C64);
        }
    case 2:
        if (o->animFlags & 0x4000) {
            func_sc03_121_80181BE8(o, &D_sc03_121_80185EC8);
            PlaySoundId(0x717, 0);
        }
        break;
    case 3:
        SetScript(o, &D_sc03_121_801AAF54);
        o->stateCount = 0;
        o->state++;
        break;
    }
}

void func_sc03_121_801801DC(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc03_121_801AB6F4);
    arg0->state = 2;
}

void func_sc03_121_80180214(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc03_121_801AAFFC);
    arg0->state = 2;
}

s32 func_sc03_121_8018024C(void) {
    return 0x40;
}

void VambeeBattleStart(u8 *o) {
    s32 i;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        AF(D_sc03_121_801AECEC, u16, 2)++;
        AF(D_sc03_121_801AECF0, u16, 2)++;
        AF(o, u16, 0x34) = 0;
        break;
    case 2:
        RequestBgmPack(0x41);
        for (i = 0; i < 5; i++) {
            D_sc03_121_801AECD8[i] = (u8 *)SpawnActor(0x1C5, o);
            AF(D_sc03_121_801AECD8[i], s16, 6) = AF(D_sc03_121_801AECD8[i], s16, 0x88) = D_sc03_121_8019B928[i].x;
            AF(D_sc03_121_801AECD8[i], s16, 0xA) = -0x400;
            AF(D_sc03_121_801AECD8[i], s16, 0xE) = AF(D_sc03_121_801AECD8[i], s16, 0x8C) = D_sc03_121_8019B928[i].z;
            AF(AF(D_sc03_121_801AECD8[i], u8 *, 0x20), s16, 0x12) = D_sc03_121_8019B928[i].pad;
            AF(D_sc03_121_801AECD8[i], s16, 0x8A) = -0x92;
        }
        AF(o, u16, 0x34) = 0;
        break;
    case 3:
        AF(o, u16, 0x34) = 5;
        AF(o, s16, 0x16) = -0x14;
        PlaySoundId(0x716, 0);
        break;
    case 4:
        AF(D_sc03_121_801AECEC, u16, 0x34)++;
        AF(D_sc03_121_801AECF0, u16, 0x34)++;
        AF(o, u16, 0x34) = 0;
        break;
    case 5:
        MoveCollide(o);
        if (AF(o, s32, 0x14) > 0) {
            for (i = 1; i < 0x20; i++) {
                SpawnActorArg(0x21D, 1, o);
            }
            AF(o, u16, 0x34) = 0;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(o, s16, 0xA) = -0x10B;
            AF(o, s16, 6) = 0;
            AF(o, s16, 0xE) = 0x12F;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
            UpdateModelZYX(o);
        } else {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += 0x155;
            SpawnActorArg(0x21D, 0, o);
        }
        break;
    case 6:
        SpawnActorArg(0x220, AF(o, s16, 0xFE), o);
        AF(o, s16, 0xFE)++;
        if (AF(o, s16, 0xFE) >= 5) {
            AF(o, u16, 0x34) = 0;
        }
        break;
    case 7:
        SpawnActorArg(0x220, AF(o, s16, 0xFE), o);
        AF(o, s16, 0xFE)++;
        if (AF(o, s16, 0xFE) >= 10) {
            AF(o, u16, 0x34) = 0;
        }
        break;
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        AF(o, u16, 2)++;
        AF(o, u16, 0x34) = 0;
        SetVar(0xDD, 1);
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 2) = 1;
        }
    }
}

void VambeeBattleRound1(u8 *arg0) {
    s32 i;
    s32 j;
    s32 k;
    s16 n;
    s16 m;
    s32 t;
    u8 *p;
    u16 v;
    u8 *g = &g_Status;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s16, 0xFC) != 0) {
            AF(arg0, s16, 0xFC)--;
        } else {
            n = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    n++;
                }
            }
            if (n == 0) {
                if (AF(arg0, s32, 0x1C) != 0) {
                    AF(arg0, s32, 0x1C)--;
                } else {
                    i = rand() % 5;
                    p = D_sc03_121_801AECD8[i];
                    v = AF(p, u16, 2);
                    if (v == 1) {
                        AF(p, s16, 0x10A) = 1;
                        t = 0xB4 - AF(g, s16, 0x1A);
                        AF(arg0, s32, 0x1C) = t;
                        if (t <= 0) {
                            AF(arg0, s32, 0x1C) = v;
                        }
                    }
                }
            }
        }
        if (AF(g, u8, 0x39) >= 3) {
            if (PlayerEvent80(&g_Player) == 0) {
                AF(arg0, u16, 0x34)++;
                for (i = 0; i < 5; i++) {
                    AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 2;
                }
            }
        }
        break;
    case 1:
        m = 0;
        for (k = 0; k < 5; k++) {
            p = D_sc03_121_801AECD8[k];
            if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                m++;
            }
        }
        if (m == 0) {
            AF(arg0, u16, 0x34)++;
            StartEvent(arg0, &D_sc03_121_8019BB90);
        } else if (AF(g, s16, 0x1A) >= 0xD2) {
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 2);
            AF(arg0, u16, 0x34) = 0;
            AF(D_sc03_121_801AECEC, s16, 2) = 5;
        }
        break;
    case 2:
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 2);
            AF(arg0, u16, 0x34) = 0;
            AF(D_sc03_121_801AECEC, s16, 2) = 5;
        }
        break;
    }
    if (g_PlayerHitBy != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void VambeeBattleRound2(u8 *arg0) {
    s32 i;
    s32 j;
    s32 k;
    s16 n;
    s16 m;
    s32 t;
    u8 *p;
    u16 v;
    u8 *g = &g_Status;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
        } else {
            n = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    n++;
                }
            }
            if (n < 1) {
                i = rand() % 5;
                p = D_sc03_121_801AECD8[i];
                v = AF(p, u16, 2);
                if (v == 1) {
                    AF(p, s16, 0x10A) = 1;
                    t = 0x10E - AF(g, s16, 0x1A);
                    AF(arg0, s32, 0x1C) = t;
                    if (t <= 0) {
                        AF(arg0, s32, 0x1C) = v;
                    }
                }
            }
        }
        if (AF(g, s16, 0x1A) >= 0x10E) {
            if (PlayerEvent80(&g_Player) == 0) {
                AF(arg0, u16, 0x34)++;
                for (i = 0; i < 5; i++) {
                    AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 2;
                }
            }
        }
        break;
    case 1:
        m = 0;
        for (k = 0; k < 5; k++) {
            p = D_sc03_121_801AECD8[k];
            if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                m++;
            }
        }
        if (m == 0) {
            AF(arg0, u16, 0x34)++;
            StartEvent(arg0, &D_sc03_121_8019BBB0);
        } else if (AF(g, s16, 0x1A) >= 0x12C) {
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 3);
            AF(D_sc03_121_801AECEC, s16, 2) = 7;
        }
        break;
    case 2:
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 3);
            AF(D_sc03_121_801AECEC, s16, 2) = 7;
        }
        break;
    }
    if (g_PlayerHitBy != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void VambeeBattleRound3(u8 *arg0) {
    s32 i;
    s32 j;
    s32 k;
    s16 n;
    s16 m;
    s32 t;
    u8 *p;
    u16 v;
    u8 *g = &g_Status;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (!(rand() & 0x7F)) {
            i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
            if (AF(p, u16, 2) == 1) {
                AF(p, s16, 0x10A) = 4;
            }
        }
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
        } else {
            n = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    n++;
                }
            }
            if (n < 2) {
                i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
                v = AF(p, u16, 2);
                if (v == 1) {
                    AF(p, s16, 0x10A) = 1;
                    t = 0x168 - AF(g, s16, 0x1A);
                    AF(arg0, s32, 0x1C) = t;
                    if (t <= 0) {
                        AF(arg0, s32, 0x1C) = v;
                    }
                }
            }
        }
        if (AF(g, s16, 0x1A) >= 0x168) {
            if (PlayerEvent80(&g_Player) == 0) {
                AF(arg0, u16, 0x34)++;
                for (i = 0; i < 5; i++) {
                    AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 2;
                }
            }
        }
        break;
    case 1:
        m = 0;
        for (k = 0; k < 5; k++) {
            p = D_sc03_121_801AECD8[k];
            if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                m++;
            }
        }
        if (m == 0) {
            AF(arg0, u16, 0x34)++;
            StartEvent(arg0, &D_sc03_121_8019BBD0);
        } else if (AF(g, s16, 0x1A) >= 0x186) {
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 4);
            AF(D_sc03_121_801AECF0, s16, 2) = 5;
        }
        break;
    case 2:
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
            SetVar(0xDD, 4);
            AF(D_sc03_121_801AECF0, s16, 2) = 5;
        }
        break;
    }
    if (g_PlayerHitBy != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void VambeeBattleFinal(u8 *arg0) {
    u8 *g = &g_Status;
    u8 *p;
    s16 count;
    s32 i;
    s32 j;
    s16 found;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (!(rand() & 0x3F)) {
            i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
            if (AF(p, u16, 2) == 1) {
                AF(p, s16, 0x10A) = 4;
            }
        }
        if (AF(arg0, s32, 0x1C) != 0) {
            AF(arg0, s32, 0x1C)--;
        } else {
            count = 0;
            for (j = 0; j < 5; j++) {
                p = D_sc03_121_801AECD8[j];
                if (AF(p, s16, 0x10A) != 0 && AF(p, u8, 0xC1) != 3) {
                    count++;
                }
            }
            if (count < 3) {
                i = rand() % 5;
            p = D_sc03_121_801AECD8[i];
                if (AF(p, u16, 2) == 1) {
                    AF(p, s16, 0x10A) = 1;
                    t = 0x1A4 - AF(g, s16, 0x1A);
                    AF(arg0, s32, 0x1C) = t;
                    if (t <= 0) {
                        AF(arg0, s32, 0x1C) = 1;
                    }
                }
            }
        }
        if (AF(g, s16, 0x1A) >= 0x1A3) {
            func_800D0C48(1);
        }
        if (AF(g, s16, 0x1A) >= 0x1A4 && PlayerEvent80(&g_Player) == 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 1:
        found = 0;
        for (i = 0; i < 5; i++) {
            if (AF(D_sc03_121_801AECD8[i], u16, 2) == 5) {
                found = 1;
            }
        }
        if (g_PlayerHitBy == 0 && found != 1) {
            StartEvent(arg0, &D_sc03_121_8019BBF8);
            for (i = 0; i < 5; i++) {
                AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 5;
                AF(D_sc03_121_801AECD8[i], s16, 0x5C) = 0;
                AF(D_sc03_121_801AECD8[i], u8, 0xC1) = 0;
            }
            AF(arg0, u16, 0x34)++;
            AF(D_sc03_121_801AECF0, s16, 2) = 6;
            AF(arg0, s16, 0x100) = 1;
            RequestBgmPack(0x42);
        }
        break;
    case 2:
        g_PlayerHitBy = 0;
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, u16, 2)++;
        }
        break;
    }
    if (g_PlayerHitBy != 0) {
        for (i = 0; i < 5; i++) {
            AF(D_sc03_121_801AECD8[i], s16, 0x10A) = 3;
        }
    }
}

void func_sc03_121_801811DC(StageActor *arg0) {
    D_sc03_121_8019BC80[arg0->state]();
}

void func_sc03_121_80181218(StageActor *o) {
    ModelObj *r;

    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(r, &D_sc03_121_8019BCA0);
    SetScript(o, &D_sc03_121_8019BCAC);
    o->state++;
    if (o->param != 0) {
        AF(o, s16, 0x12) = (rand() & 0x1F) - 0x10;
        o->accel[0] = -(o->vel[0] >> 4);
        AF(o, s16, 0x16) = (rand() & 0x1F) - 0x10;
        o->accel[1] = -(o->vel[1] >> 4);
        AF(o, s16, 0x1A) = (rand() & 0x1F) - 0x10;
        o->accel[2] = -(o->vel[2] >> 4);
    } else {
        AF(o, s16, 0x12) = -rsin((u16)o->parent->model->rot.vy & 0xFFF) >> 8;
        o->accel[0] = -(o->vel[0] >> 4);
        AF(o, s16, 0x1A) = -rcos((u16)o->parent->model->rot.vy & 0xFFF) >> 8;
        o->accel[2] = -(o->vel[2] >> 4);
    }
    o->timer = 0x10;
    o->model->scale.vx = 0x1800;
    o->model->scale.vy = 0x1800;
    o->model->scale.vz = 0x1800;
    o->model->flags |= 0x10;
    o->pos[1].h.i -= 0x30;
}

void func_sc03_121_801813AC(StageActor *arg0) {
    D_sc03_121_8019BCB4[arg0->state]();
}

void func_sc03_121_801813E8(o)
    u8 *o;
{
    SV8 v;
    XY s[2];
    s32 p;
    s32 flag;
    s32 otz;
    u32 *ot;
    u8 *prim;
    u8 *poly;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    otz = RotTransPers(&v, &s[1], &p, &flag);
    if (otz > 0 && flag >= 0) {
        ot = g_WorldOtOrg[D_800B9A02].ot + otz;
        prim = AllocPrim(0x30);
        if (prim != 0) {
            poly = prim + 0xC;
            SetDrawMode(prim, 1, 0, (u16)GetTPage(0, 1, 0, 0), 0);
            v.x = 0;
            v.y = AF(o, s16, 0xA) + 0x80;
            v.z = AF(o, s16, 0xE);
            s[0].x = s[1].x;
            s[0].y = s[1].y;
            RotTransPers(&v, &s[1], &p, &flag);
            AF(prim, u8, 0x10) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x18) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x20) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0x28) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0x11) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x19) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x21) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0x29) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0x12) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x1A) = AF(o, s32, 0x1C);
            AF(prim, u8, 0x22) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0x2A) = AF(o, s32, 0x1C) / 8;
            AF(prim, u8, 0xF) = 8;
            AF(prim, u8, 0x13) = 0x3A;
            AF(prim, s16, 0x14) = s[0].x;
            AF(prim, s16, 0x1C) = s[0].x;
            AF(prim, s16, 0x24) = s[1].x - 4;
            AF(prim, s16, 0x2C) = s[1].x + 4;
            AF(prim, s16, 0x16) = s[0].y;
            AF(prim, s16, 0x1E) = s[0].y;
            AF(prim, s16, 0x26) = s[1].y - 8;
            AF(prim, s16, 0x2E) = s[1].y + 8;
            AddPrim(ot, poly);
            AddPrim(ot, prim);
        }
    }
}

void func_sc03_121_801816C0(StageActor *o) {
    SV8 p;
    SV8 q;
    ModelObj *r;

    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(r, &D_sc03_121_8019BCBC);
    SetScript(o, &D_sc03_121_8019BCD4);
    o->state++;
    p.x = D_sc03_121_8019BCE4[o->param * 2].x;
    p.y = D_sc03_121_8019BCE4[o->param * 2].y;
    p.z = D_sc03_121_8019BCE4[o->param * 2].z;
    q.x = D_sc03_121_8019BCE4[(o->param * 2) | 1].x;
    q.y = D_sc03_121_8019BCE4[(o->param * 2) | 1].y;
    q.z = D_sc03_121_8019BCE4[(o->param * 2) | 1].z;
    TraceMap(1, &p, &q);
    o->pos[0].h.i = q.x;
    o->pos[1].h.i = q.y;
    o->pos[2].h.i = q.z;
    PlaySoundId(0x718, 0);
    o->model->flags |= 0x10;
    o->model->scale.vx = 0x800;
    o->model->scale.vy = 0x800;
    o->model->unk04 |= 0x8040;
}

void func_sc03_121_80181868(StageActor *arg0) {
    D_sc03_121_8019BD84[arg0->state]();
}

void VambeeBattleExit(void) {
    SetProgress(0x1A4);
    func_800D1724((s32) &D_sc03_121_80185BDC);
    GiveItem(0xE);
    GiveItem(0x11);
}

void func_sc03_121_801818E4(void) {
    PlaySoundId(0x79E, 0);
}

void func_sc03_121_80181908(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_121_8019B8F4) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc03_121_801A007C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        D_sc03_121_801AECEC = SpawnActorArg(0x1F7, 0, arg0);
        D_sc03_121_801AECF0 = SpawnActorArg(0x1F7, 1, arg0);
        g_PlayerAttacker = 0;
        g_PlayerHitBy = 0;
    }
}

void func_sc03_121_801819B8(StageActor *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->unkFC + 1;
    arg0->unkFC = temp_v0;
    arg0->pos[2].h.i = (s16) (((s32) ((s16) temp_v0 * -0x47) >> 5) + 0x176);
    arg0->pos[1].h.i = (u16) (((s32) -((s16) (u16)arg0->unkFC * 0x6D) >> 5) - 0x9E);
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - (rsin((s16) (u16)arg0->unkFC << 6, arg1) >> 5));
    if ((s16) (u16)arg0->unkFC == 0x20) {
        arg0->stateCount = 0;
        arg0->state = (u16) (arg0->state + 1);
    }
    if ((s16) (u16)arg0->unkFC == 0xF) {
        StartEvent((s32) arg0, (s32) &D_sc03_121_8019B9B0);
    }
}

void func_sc03_121_80181A98(void) {
}

void func_sc03_121_80181AA0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        MoveObject((s32) arg0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x100);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) - 0x100);
        return;
    }
    FreeActor((s32) arg0, arg1);
}

void func_sc03_121_80181B34(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_a1;

    temp_a1 = arg0->stateCount;
    temp_v1 = temp_a1 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (arg0->parent->work100 != 0) {
            arg0->stateCount = (u16) (temp_a1 + 1);
            arg0->animTimer = 1;
            return;
        }
        return;
    case 1:
        temp_v0 = arg0->timer + 2;
        arg0->timer = temp_v0;
        if (temp_v0 >= 0x7F) {
            arg0->timer = 0x7F;
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        /* fallthrough */
    case 2:
        func_sc03_121_801813E8();
        break;
    }
}

s32 func_sc03_121_80181BE8(StageActor *arg0, s32 arg1, s32 arg2) {
    D_sc03_121_801AEE38 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc03_121_80181C18(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc03_121_801ABC80) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc03_121_801824B0);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc03_121_801AEE38, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc03_121_801ABCB4++;
    o->ext0 = q;
    if (D_sc03_121_801ABCB4 > D_sc03_121_801AEE18) {
        D_sc03_121_801ABCB4 = D_sc03_121_801AEE18 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc03_121_801ABCB4++;
        o->ext1 = q;
        if (D_sc03_121_801ABCB4 > D_sc03_121_801AEE18) {
            D_sc03_121_801ABCB4 = D_sc03_121_801AEE18 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc03_121_80181E5C(StageActor *o) {
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
        t = D_sc03_121_801ABC6C;
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
            t = D_sc03_121_801ABC6C;
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

void func_sc03_121_801820FC(StageActor *arg0) {
    D_sc03_121_801ABCB8[arg0->state]();
}
