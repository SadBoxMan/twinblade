#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_108_8017BE9C(void) {
}

void func_sc03_108_8017BEA4(void) {
}

void func_sc03_108_8017BEAC(void) {
}

void func_sc03_108_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_108_801846DC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_108_8017CFCC(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_108_8017CFF4(void);
extern void func_800D1EBC();
extern void (*D_sc03_108_801846F0[])();
extern u8 D_sc03_108_801846FC;
extern void StartPlayerActionScript();
extern u8 D_sc03_108_80184708;
extern void func_sc03_108_8017D0D4();
extern void (*D_sc03_108_8018471C[])();
extern void (*D_sc03_108_801847C0[])();
extern void (*D_sc03_108_801847D8[])();
extern void (*D_sc03_108_80184868[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc03_108_801847A8[])();
extern void UpdateModelZYX();
extern s32 IsActorFar();
extern void (*D_sc03_108_8019E7AC[])();
extern void func_sc03_108_801809A0();
extern s32 func_sc03_108_80180968();
extern void StopWithGravity();
extern void SetForwardVelocity();
extern s32 TickTimer();
extern s16 g_PlayerHitKind;
extern u16 g_PlayerHitFacing;
extern void MoveObject();
extern s32 ActorTouchesPlayer();
extern s32 GroundDistSqToPlayer();
extern void StopWithHalfGravity();
extern void ShowModel();
extern s32 func_80143994();
extern u8 D_sc03_108_8019E6AC;
extern void func_sc03_108_80180764();
extern u8 D_sc03_108_80180FCC;
extern void SnapToGround();
extern void ToggleModel();
extern void func_sc03_108_80180A84();
extern void GainStat0FromActor();
extern void func_sc03_108_801808B4();
extern void ZeroFill();
extern s32 DespawnActor();

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
extern u16 g_CameraVarA0;
extern u16 D_sc03_108_801A1930;
extern void SetCameraUpdate();
extern void SnapCamera();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitNullModel();
extern void NextState();

extern u16 g_PlayerHitDamage;
extern s32 D_sc03_108_8018484C[];
extern s32 func_sc03_108_8017EA44();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_108_8017BEBC(u8 *obj) {
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

void func_sc03_108_8017CD9C(u8 *arg0) {
    D_sc03_108_801846DC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_108_8017CDD8(u8 *arg0) {
    func_sc03_108_8017CFCC();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_108_8017CE1C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc03_108_8017CE40(u8 *arg0) {
    func_sc03_108_8017CFF4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_108_8017CE80(u8 *arg0) {
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

void func_sc03_108_8017CEFC(void) {
    func_800D1EBC();
}

void func_sc03_108_8017CF1C(u8 *arg0) {
    D_sc03_108_801846F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_108_8017CF58(u8 *arg0) {
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

void func_sc03_108_8017CFCC(void) {
    StartPlayerActionScript((s32) &D_sc03_108_801846FC, 0x01000000);
}

void func_sc03_108_8017CFF4(void) {
    StartPlayerActionScript((s32) &D_sc03_108_80184708, 0x01000000);
}

void func_sc03_108_8017D01C(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_108_8017D0D4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_108_8017D0D4((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    D_sc03_108_801A1930 = g_CameraVarA0;
}

void func_sc03_108_8017D0D4(s32 arg0) {
    D_sc03_108_8018471C[AF(arg0, u8, 4)]();
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
extern s32 func_sc03_108_8017F004();
extern s32 func_sc03_108_8017EF48();

typedef struct { s32 x, y, z, pad; } V4;
extern s32 EaseValue();
extern s32 EaseAngle();

extern s32 MoveOnGround();
extern void RestorePrevPos();
extern s32 TargetInSight();
extern s32 TurnStep();
extern void SpawnKind1C();
extern void SetReactionStep();
extern s32 MoveCollidePassable();
extern s32 MoveCollide();
extern u8 D_sc03_108_8019E704;
extern void DamageActorsNear();
extern s32 MoveCollidePassableAt();
extern s32 MoveOnGroundOfs();
extern void EndReaction();

extern s32 DistSqToTarget();
extern s32 TargetInFront();
extern s32 TurnStepToTarget();
extern u8 D_sc03_108_8019E640;
extern u8 D_sc03_108_8019E674;
extern u8 D_sc03_108_8019E6BC;
extern u8 D_sc03_108_8019E70C;
extern s32 SetupActor();
extern s32 AllocActorSprite();
extern void func_8001CD9C();
extern void HideModel();
extern void ProjectPoint();

extern u16 g_PlayerFocus;
extern s16 D_sc03_108_8018479C[];
extern void PlaySoundFor();


typedef struct { u8 a, b; } B2;
extern s32 SpawnActorArg();
extern u8 D_sc03_108_801847B0;
extern void func_8001C810();
extern void SetModelParent();
extern u8 D_sc03_108_8019C94C;
extern u8 D_sc03_108_8019D3AC;
extern s32 ActorSegmentHitsPlayer();
extern s32 func_sc03_108_8017DDDC();
extern void func_sc03_108_8017DD44();
extern void func_sc03_108_8017DB0C();
extern B2 D_sc03_108_801847C8[];
extern void func_sc03_108_8017E27C();
extern WMtx GsIDMATRIX;
extern SV8 D_sc03_108_801847E0;
extern void LoadWorldScreenMatrix();

typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;
extern void *g_PlayerModel;
extern SV8 g_CameraFocus;
extern s16 D_sc03_108_80184768[];
extern u8 D_sc03_108_80184720;
extern s32 GetObjPadPressed();
extern s32 func_sc03_108_8017D484();
extern s32 EaseAngleFrac();
extern s32 func_sc03_108_8017D5F4();
extern s32 func_sc03_108_8017D6AC();
extern s32 g_PlayerPosX;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern SV8 D_sc03_108_801A04F0;
extern s16 D_sc03_108_801847B8;
extern void WorldToLocal16();
extern void LocalToWorld16();
extern s32 func_80132784();
extern u8 g_Actors;
extern void InitModel();
extern u8 D_sc03_108_8019DE28;
extern V4 D_sc03_108_801847F4[];
extern SV8 D_sc03_108_8018481A[];
extern V4 D_sc03_108_801847E8[];
extern u8 D_sc03_108_80184858;

void func_sc03_108_8017D110(u8 *o) {
    SV8 v;
    SV8 w;
    s16 r;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_108_80184768[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    w.x = v.x - rsin(AF(g_PlayerModel, s16, 0x12)) / 128;
    w.z = v.z - rcos(AF(g_PlayerModel, s16, 0x12)) / 128;
    w.y = v.y;
    AF(o, s16, 0xA0) = func_sc03_108_8017D484(&D_sc03_108_80184720, &v, &w);
    if (v.y > 0) {
        v.y = 0;
    }
    if (v.z > -0x80) {
        v.z = -0x80;
    }
    if (AF(o, s16, 0xA0) > 0xB80) {
        AF(o, s16, 0xA0) = 0xB80;
    }
    if (AF(o, s16, 0xA0) < 0x480) {
        AF(o, s16, 0xA0) = 0x480;
    }
    r = EaseAngleFrac((s16)D_sc03_108_801A1930, AF(o, s16, 0xA0), 4, 1);
    D_sc03_108_801A1930 = r;
    func_sc03_108_8017D2B8(o, r, &v);
}

void func_sc03_108_8017D2B8(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;
    SV a;
    u16 o[4];
    SV r;

    AF(arg0, s32, 8) = (s16) EaseValue(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) EaseValue(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = EaseAngle(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = EaseAngle(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = EaseAngle(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = EaseValue(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = EaseValue(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = EaseValue(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
    r.vx = AF(arg0, s16, 0x18);
    r.vy = AF(arg0, s16, 0x1A) + arg1;
    r.vz = AF(arg0, s16, 0x1C);
    func_sc03_108_8017ED64(&r, &m);
    a.vx = 0;
    a.vy = 0;
    a.vz = AF(arg0, s32, 0x10);
    ApplyMatrixSV(&m, &a, o);
    AF(arg0, s32, 0x3C) = ((s16) o[0] >> 3) + AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x40) = ((s16) o[1] >> 3) + AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x44) = ((s16) o[2] >> 3) + AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
}

s32 func_sc03_108_8017D484(E14 *e, s32 arg1, s16 *w) {
    s32 r;

    for (;;) {
        switch (e->type) {
        case 0:
            r = func_sc03_108_8017D5F4(e->a, e->b, arg1);
            break;
        case 1:
            r = func_sc03_108_8017D6AC(e->a, e->b, arg1);
            break;
        case 0xFF:
            r = 0;
            break;
        }
        if (r == 0) {
            switch (e->kind) {
            case 0:
                return ratan2(w[0] - e->x, w[2] - e->z) & 0xFFF;
            case 1:
                return ratan2(e->x - w[0], e->z - w[2]) & 0xFFF;
            case 2:
                return 0x800;
            }
        }
        e++;
    }
}

extern SV8 D_sc03_108_80184818[];
extern s32 MoveCollideAt();
extern void FreeActor();
extern u8 *SpawnPropFrom();

extern void SetLocalVelocity();
extern u8 D_sc03_108_8019E804;
extern u8 D_sc03_108_8019E814;
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void HeadingPitchTo();
extern void StopMotion();
extern void FreeShadow();
extern u16 D_800B99DA;
extern u8 D_sc03_108_8019E682;
extern s8 D_sc03_108_8019E6BD;
extern s8 D_sc03_108_8019E6BE;
typedef struct { s16 h; u8 a, b, c; u8 pad[11]; } Col16;
extern u8 D_800AF630;
extern u8 D_sc03_108_8019E6FC;
extern void TakeDamage();
extern u8 D_sc03_108_8019E7D4;
extern u8 D_sc03_108_8019E7E4;
extern u8 D_sc03_108_8019E7F4;
extern void AngleToVec2();
extern s32 SpawnActorFromDef();

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
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void SetIdentityRot();
extern s16 D_sc03_108_8019DE30[];

s32 func_sc03_108_8017D5F4(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 x, y; } s; s32 l; } p0, p1, p2;

    cx = c[0];
    ax = a[0];
    if (cx < ax) {
        r = 0;
    } else {
        bx = b[0];
        if (bx < cx) {
            r = 1;
        } else {
            cz = c[2];
            by = b[1];
            if (cz < by) {
                r = 0;
            } else {
                ay = a[1];
                if (ay < cz) {
                    r = 1;
                } else {
                    p0.s.x = ax;
                    p0.s.y = ay;
                    p1.s.x = bx;
                    p1.s.y = by;
                    p2.s.x = cx;
                    p2.s.y = cz;
                    r = NormalClip(p0.l, p1.l, p2.l) >= 0;
                }
            }
        }
    }
    return r;
}

s32 func_sc03_108_8017D6AC(s16 *a, s16 *b, s16 *c) {
    s16 cx, cz, ax, ay, bx, by;
    s32 r;
    union { struct { s16 x, y; } s; s32 l; } p0, p1, p2;

    cx = c[0];
    bx = b[0];
    if (cx < bx) {
        r = 0;
    } else {
        ax = a[0];
        if (ax < cx) {
            r = 1;
        } else {
            cz = c[2];
            ay = a[1];
            if (cz > ay) {
                r = 0;
            } else {
                by = b[1];
                if (cz < by) {
                    r = 1;
                } else {
                    p0.s.x = ax;
                    p0.s.y = ay;
                    p1.s.x = bx;
                    p1.s.y = by;
                    p2.s.x = cx;
                    p2.s.y = cz;
                    r = NormalClip(p0.l, p1.l, p2.l) >= 0;
                }
            }
        }
    }
    return r;
}

void func_sc03_108_8017D764(StageActor *p) {
    s16 d;
    s16 t;
    s16 v;

    d = (u16)p->pos[0].h.i - g_PlayerFocus;
    if (d < 0) {
        d = -d;
    }
    if (d > 0x800) {
        p->model->unk04 |= 0x80000000;
    } else {
        p->model->unk04 &= 0x7FFFFFFF;
        p->model->rot.vz += D_sc03_108_8018479C[p->param];
    }
    t = d - 0x140;
    if (t < 0) {
        v = 0x7F;
    } else if (t >= 0x200) {
        v = 0;
    } else {
        v = 0x7F - (t >> 2);
    }
    if (v == 0) {
        if (p->unk84 != 0) {
            PlaySoundFor(4, 0x6DD, (u16)p->param);
            p->unk84 = 0;
        }
    } else {
        PlaySoundFor(0x6DD, (v | 0x1000) & 0xFFFF, (u16)p->param);
        p->unk84 = 1;
    }
}

void func_sc03_108_8017D898(u8 *arg0) {
    D_sc03_108_801847A8[AF(arg0, u16, 2)]();
    UpdateModelZYX((s32) arg0);
}

extern u16 D_sc03_108_8018476C[][4];
extern u8 D_sc03_108_8019C5FC;
extern u8 D_sc03_108_8019DA70;

void func_sc03_108_8017D8E8(StageActor *o) {
    s32 i;

    for (i = 0; i < 4; i++) {
        SpawnActorArg(0x199, (s16)((i << 10) + D_sc03_108_8018476C[o->param][i]), o);
    }
}

void func_sc03_108_8017D96C(StageActor *o) {
    ModelObj *r;
    s16 k;

    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    k = (u16)o->param & 3;
    o->workFE = k;
    switch (k) {
    case 0:
        func_8001C810(o->model, &D_sc03_108_8019C94C);
        o->model->unk04 |= 0x8040;
        SpawnActorArg(0x199, 2, o);
        break;
    case 1:
        func_8001C810(o->model, &D_sc03_108_8019D3AC);
        o->model->unk04 |= 0x8040;
        SpawnActorArg(0x199, 3, o);
        break;
    case 2:
    case 3:
        InitNullModel(o->model);
        SetModelParent(o->model, o->parent->model);
        o->pos[1].h.i = 0x90;
        o->hitData = (s32)&D_sc03_108_801847B0 | 0x40000000;
        o->hitState = 0x4400;
        o->pos[0].h.i = 0;
        o->pos[2].h.i = 0;
        o->targetClass = 4;
        break;
    }
    o->work100 = (u16)o->param & 0xFF0;
    o->model->unk04 |= 0x8000;
    NextState(o);
}

void func_sc03_108_8017DAD0(StageActor *arg0) {
    D_sc03_108_801847C0[arg0->state]();
}

void func_sc03_108_8017DB0C(u8 *o) {
    u8 unused[16];
    SV8 v;
    V4 a;
    V4 r;
    V4 b;
    WMtx m;
    s32 flag;
    Player *g;

    m = *(WMtx *)(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
    g = &g_Player;
    if (AF(o, u16, 0xFE) < 2) {
        v = D_sc03_108_801A04F0;
        RotMatrixZ(AF(o, s16, 0x100), &m);
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        gte_ldv0(&v);
        gte_rtv0tr();
        gte_stlvnl(&r);
        gte_stflg(&flag);
        AF(o, s16, 6) = r.x;
        AF(o, s16, 0xA) = r.y;
        AF(o, s16, 0xE) = r.z;
    } else {
        if (AF(o, u8, 0x74) != 0) {
            a.x = g_PlayerPosX;
            a.y = D_80126B60;
            a.z = D_80126B64;
            WorldToLocal16(AF(o, u8 *, 0x20) + 0x34, &a, &b);
            if (AF(o, u8, 0x102) == 0) {
                AF(AF(o, u8 *, 0x64), s32, 0xE0) += b.x >> 2;
            }
        }
        func_80132784(o, AF(o, u8 *, 0x64), 0);
        if (AF(o, u8, 0x74) != 0) {
            b.y = (D_sc03_108_801847B8 - 1) << 16;
            LocalToWorld16(AF(o, u8 *, 0x20) + 0x34, &b, &r);
            g->pos[0].w = r.x;
            g->pos[1].w = r.y;
            g->pos[2].w = r.z;
        }
    }
}

void func_sc03_108_8017DD44(u8 *o) {
    s16 v;
    s32 t;

    v = AF(o, s16, 0xDE);
    if (v < -2) {
        AF(o, s32, 0xE0) += 0x20000;
    } else if (v > 2) {
        AF(o, s32, 0xE0) += -0x20000;
    }
    if (AF(o, s32, 0xE0) < 0) {
        t = AF(o, s32, 0xE0) + 0x8000;
        AF(o, s32, 0xE0) = t;
        if (t > 0) {
            AF(o, s32, 0xE0) = 0;
        }
    } else if (AF(o, s32, 0xE0) > 0) {
        t = AF(o, s32, 0xE0) - 0x8000;
        AF(o, s32, 0xE0) = t;
        if (t < 0) {
            AF(o, s32, 0xE0) = 0;
        }
    }
    AF(o, s32, 0xDC) += AF(o, s32, 0xE0);
    AF(AF(o, u8 *, 0x20), u16, 0x14) = AF(o, u16, 0xDE);
}

s32 func_sc03_108_8017DDDC(StageActor *o, u8 *b) {
    SV8 p;
    SV8 q;
    s16 m;

    p.x = q.x = AF(b, u16, 4);
    p.y = q.y = AF(b, u16, 8) - 0x10;
    p.z = AF(b, u16, 0xC);
    q.z = AF(b, u16, 0xE);
    if (ActorSegmentHitsPlayer(o, &p, &q) != 0) {
        return 1;
    }
    m = (AF(b, s16, 4) + AF(b, s16, 6)) >> 1;
    p.x = q.x = m;
    if (ActorSegmentHitsPlayer(o, &p, &q) != 0) {
        return 1;
    }
    p.x = q.x = (AF(b, s16, 4) + m) >> 1;
    if (ActorSegmentHitsPlayer(o, &p, &q) != 0) {
        return 1;
    }
    p.x = q.x = (AF(b, s16, 6) + m) >> 1;
    if (ActorSegmentHitsPlayer(o, &p, &q) == 0) {
        p.x = q.x = AF(b, u16, 6);
        return ActorSegmentHitsPlayer(o, &p, &q) != 0;
    }
    return 1;
}

void func_sc03_108_8017DF10(StageActor *o) {
    u8 *p;
    ModelObj *r;

    r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001C810(r, &D_sc03_108_8019C5FC);
    o->model->unk04 |= 0x8040;
    o->model->colour = 0x1800180;
    p = (u8 *)AllocActorModel();
    if (p != 0) {
        InitModel(p, &D_sc03_108_8019DA70);
        AF(p, s16, 8) = (u16)o->pos[0].h.i;
        AF(p, s16, 0xA) = (u16)o->pos[1].h.i + 0xC0;
        AF(p, s16, 0xC) = (u16)o->pos[2].h.i - 0xB0;
    }
    func_sc03_108_8017D8E8(o);
    NextState(o);
}

void func_sc03_108_8017DFE8(StageActor *o) {
    s16 d;

    if ((u16)o->workFE < 2) {
        d = (u16)o->pos[0].h.i - g_PlayerFocus;
        if (d < 0) {
            d = -d;
        }
        if (d > 0x800) {
            o->model->unk04 |= 0x80000000;
        } else {
            func_sc03_108_8017DD44(o);
            o->model->unk04 &= 0x7FFFFFFF;
            func_sc03_108_8017DB0C(o);
        }
    } else {
        if ((s32)o->parent->model->unk04 < 0) {
            o->hitState = 0;
            return;
        }
        o->hitState |= 0x4400;
        func_sc03_108_8017DB0C(o);
        if (o->workFE == 3 && func_sc03_108_8017DDDC(o, &D_sc03_108_801847B0) != 0) {
            g_PlayerHitKind = 0x4007;
            g_PlayerHitDamage = 0x20;
        }
        AF(o, u8, 0x102) = o->unk74;
    }
}

void func_sc03_108_8017E128(u8 *o) {
    s32 a;
    s32 r;
    B2 *t;

    if (AF(o, s16, 0x70) == 0) {
        func_sc03_108_8017E27C();
    }
    if (TickTimer(o) != 0) {
        t = D_sc03_108_801847C8;
        if (t[AF(o, s16, 0xFE)].a == 0xFF) {
            AF(o, s16, 0xFE) = 0;
        }
        a = t[AF(o, s16, 0xFE)].a;
        if (a & 4) {
            r = rand() & 1;
            a = r | 0x40;
            if ((s16)r == 0) {
                a = r | 0x80;
            }
        }
        AF(o, s32, 0x1C) = D_sc03_108_801847C8[AF(o, s16, 0xFE)].b;
        if ((u16)(AF(o, u16, 0x100) + 0xFF) < 0x1FF && AF(o, s32, 0xE0) < 0x150) {
            SpawnActorArg(0x1A9, a, o);
        }
        AF(o, s16, 0xFE)++;
    }
}

void func_sc03_108_8017E240(StageActor *arg0) {
    D_sc03_108_801847D8[arg0->state]();
}

void func_sc03_108_8017E27C(u8 *o) {
    u8 *p;
    u8 *bp;
    s32 i;
    s16 best;
    s16 bx;
    s16 d;
    u16 c;
    s32 s;

    best = 0x7FFF;
    bx = 0x7FFF;
    bp = 0;
    p = &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x1A8) {
            func_sc03_108_8017E3F8(p);
            d = AF(p, s16, 0x100);
            if (d < 0) {
                d = -d;
            }
            if (best > d) {
                bx = AF(p, s16, 0x100);
                best = d;
                bp = p;
            }
        }
    }
    c = AF(o, u16, 0x84) + 1;
    AF(o, u16, 0x84) = c;
    if (best < 0xA0 && AF(bp, s32, 0xE0) < 0x150) {
        if ((c & 3) == 0) {
            s = (bx + 0xA0) / 20;
            PlaySoundId(0x6DA, (u16)((0x7F - (best >> 1)) | ((s << 8) | 0x3000)));
            AF(o, s16, 0x102) = 1;
        }
    } else if (AF(o, s16, 0x102) == 1) {
        PlaySoundId(4, 0x6DA);
        AF(o, s16, 0x102) = 0;
    }
}

void func_sc03_108_8017E3F8(u8 *o) {
    SV8 v;
    WMtx m;
    s32 flag;
    s32 sxy;
    s32 p;
    s32 f;

    m = GsIDMATRIX;
    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&D_sc03_108_801847E0, &v, &flag);
    LoadWorldScreenMatrix();
    AF(o, s32, 0xE0) = RotTransPers(&v, &sxy, &p, &flag);
    f = flag;
    AF(o, s16, 0x100) = ((s16 *)&sxy)[0];
    if (f < 0) {
        AF(o, s16, 0x100) = -999;
    }
}

void func_sc03_108_8017E508(u8 *o) {
    s32 r;
    s16 k;
    s16 v;
    s32 x;
    s32 t;

    r = AllocActorModel(o);
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, &D_sc03_108_8019DE28);
    k = AF(o, u16, 0x70) & 0xF;
    AF(o, s16, 0x102) = k;
    if (k != 0) {
        x = rand();
        t = D_sc03_108_801847F4[AF(o, s16, 0x102)].x;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = t + (x & 0xFF);
    }
    AF(o, s32, 0x48) = 0x18000;
    AF(o, s16, 0x100) = 0x1000 / D_sc03_108_8018481A[AF(o, s16, 0x102)].x;
    v = AF(AF(o, u8 *, 0x20), s16, 0x18);
    if (v >= 0x1000) {
        AF(o, s16, 0x100) = 0x40;
    } else {
        AF(o, s16, 0x100) = (0x1400 - v) >> 4;
    }
    if (AF(o, s16, 0x102) != 2) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + (rand() & 0xFF) - 0x80;
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + (rand() & 1) * 0x1C0 - 0xE0;
    }
    UpdateModelZYX(o);
    ApplyMatrixLV(AF(o, u8 *, 0x20) + 0x34, &D_sc03_108_801847E8[AF(o, s16, 0x102)], o + 0x10);
    x = rand();
    AF(o, s32, 0x58) = (s32)&D_sc03_108_80184858 | 0x20000000 | 0x40000000;
    AF(o, u16, 0x5C) = 0xC000;
    AF(o, u8, 0x75) = 0;
    AF(o, u16, 0xE) -= x & 0x1F;
    NextState(o);
}

void func_sc03_108_8017E71C(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 r;
    u16 s;
    u8 *q;
    s16 x;
    s16 pan;
    s16 vol;
    s16 t;

    if (AF(o, s16, 0x102) == 0) {
        r = MoveCollidePassableAt(o, D_sc03_108_80184818);
    } else {
        r = MoveCollideAt(o, &D_sc03_108_80184818[AF(o, s16, 0x102)]);
    }
    if (AF(o, s16, 0xA) >= -0x200) {
        FreeActor(o);
        return;
    }
    if (r != 0) {
        s = D_sc03_108_8018481A[AF(o, s16, 0x102)].z;
        r &= 0x2000;
        if (r != 0) {
            AF(o, s16, 0x16) = -AF(o, u16, 0x16);
            if (AF(o, s16, 0xFE) == 0) {
                AF(o, s16, 0xFE)++;
                AF(o, s16, 0x16) -= 8;
            }
        } else {
            AF(o, s16, 0xFE) = 0;
            AF(o, s16, 0x16) = -4;
            if (AF(o, s16, 0x102) < 2 && (rand() & 0x7FFF) < (s16)s) {
                SpawnActorArg(0x1A9, 2, o);
            }
        }
        if (s != 0) {
            q = SpawnPropFrom(o, 0x22);
            if (q != 0) {
                t = AF(q, u16, 0xA) + D_sc03_108_8018481A[AF(o, s16, 0x102)].x;
                AF(q, s16, 0x34) = s + 1;
                AF(q, s16, 0xA) = t;
            }
        }
        s = (AF(o, u16, 0x70) & 0x80) ? 0x6DC : 0;
        if (AF(o, u16, 0x70) & 0x40) {
            s = 0x6DB;
        }
        if (s != 0) {
            pos.x = AF(o, u16, 6);
            pos.y = AF(o, u16, 0xA);
            pos.z = AF(o, u16, 0xE);
            LoadWorldScreenMatrix();
            RotTransPers(&pos, &sxy, &p, &flag);
            x = ((s16 *)&sxy)[0];
            pan = (x + 0xA0) / 20;
            if (x < 0) {
                vol = (x >> 1) + 0x7F;
            } else {
                vol = 0x7F - (x >> 1);
            }
            if (pan >= 0 && pan < 0x10 && vol >= 0x2F && vol < 0x80) {
                PlaySoundId(s, (u16)(vol | ((pan << 8) | 0x3000)));
            }
        }
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, u16, 0x100);
    func_sc03_108_8017E9C0(o);
}

void func_sc03_108_8017E984(StageActor *arg0) {
    D_sc03_108_80184868[arg0->state]();
}

void func_sc03_108_8017E9C0(s32 arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = D_sc03_108_8018484C[AF(arg0, s16, 0x102)];
    if (temp_s1 != 0) {
        UpdateModelZYX(arg0, arg1);
        if (func_sc03_108_8017EA44(arg0, temp_s1) != 0) {
            g_PlayerHitKind = AF(temp_s1, u16, 4);
            g_PlayerHitDamage = AF(temp_s1, u16, 6);
        }
    }
}

s32 func_sc03_108_8017EA44(StageActor *o, u8 *p) {
    SV8 a, b;
    s32 i, j;

    b.x = AF(p, u16, 2) >> 1;
    a.x = -b.x;
    for (i = 0; i < AF(p, u16, 0); i++) {
        a.y = b.y = AF(p, s16, 8 + i * 2);
        for (j = 0; j < AF(p, u16, 0); j++) {
            a.z = b.z = AF(p, s16, 8 + j * 2);
            if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
        }
    }
    return 0;
}

void func_sc03_108_8017EB38(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(temp_v0);
    arg0->workFE = 0;
    arg0->work102 = 0;
    arg0->timer = (s32) arg0->unkFC;
    NextState(arg0);
}

s32 func_sc03_108_8017EB98(void) {
    return 0x49;
}

void func_sc03_108_8017EBA0(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    SetIdentityRot(&m);
    func_sc03_108_8017EC04((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc03_108_8017EC04(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_108_8017F004(a);
    s = func_sc03_108_8017EF48(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc03_108_8017ED64(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_108_8017F004(r[0] & 0xFFF);
    cx = func_sc03_108_8017EF48(r[0] & 0xFFF);
    sy = func_sc03_108_8017F004(r[1] & 0xFFF);
    cy = func_sc03_108_8017EF48(r[1] & 0xFFF);
    sz = func_sc03_108_8017F004(r[2] & 0xFFF);
    cz = func_sc03_108_8017EF48(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc03_108_8017EF48(u32 a) {
    if (a < 0x400) {
        return D_sc03_108_8019DE30[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc03_108_8019DE30[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc03_108_8019DE30[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc03_108_8019DE30[0xFFF - a];
    }
}

s32 func_sc03_108_8017F004(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc03_108_8019DE30[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc03_108_8019DE30[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc03_108_8019DE30[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc03_108_8019DE30[a - 0xC00];
    }
}

void func_sc03_108_8017F0B0(u8 *arg0) {
    D_sc03_108_8019E7AC[AF(arg0, u16, 2)]();
    func_sc03_108_801809A0((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (IsActorFar((s32) arg0) == 1)) {
        func_sc03_108_80180968((s32) arg0);
    }
}

void func_sc03_108_8017F140(StageActor *arg0) {
    s32 temp_v0;
    StageActor *q;
    u16 temp_v1_2;
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_108_8019E640) != 0) {
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x30);
        arg0->model->unk80 = &D_sc03_108_8019E674;
        arg0->workE8 = 0x40;
        temp_v0 = AllocActorSprite();
        if (temp_v0 != 0) {
            arg0->ext1 = temp_v0;
            func_8001CD9C(temp_v0, (s32) &D_sc03_108_8019E6BC);
            AF(temp_v0, s16, 0x18) = 0x555;
            AF(temp_v0, s16, 0x1A) = 0x555;
            AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        }
        temp_v1_2 = (u16)arg0->param;
        if (temp_v1_2 & 2) {
            q = arg0;
            q->state = 8;
            q->reactive = 1;
            q->params = &D_sc03_108_8019E70C;
            q->reactMask = -0x249D;
            q->reactOpts = (s32) ((s32)q->reactOpts | 2);
            HideModel(q);
            return;
        }
        if (temp_v1_2 & 1) {
            arg0->state = 6;
            arg0->hitState = (u16) (arg0->hitState & 0x5FFF);
        } else {
            arg0->reactive = 1;
            arg0->params = &D_sc03_108_8019E70C;
            arg0->reactMask = -0x249D;
            arg0->state = 1;
            arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        }
        arg0->ext0 = func_80143994(arg0, 0x1000);
    }
}

void func_sc03_108_8017F29C(s32 arg0, s32 arg1, s32 arg2) {
    StopWithGravity(arg0, arg1, arg2);
    SetForwardVelocity(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

void func_sc03_108_8017F2E8(u8 *arg0) {
    s32 s;
    s32 v;
    s32 d;
    s32 e;
    s32 r;
    s32 y;
    u8 *p;
    s32 unused[4];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_108_801808B4(arg0);
        return;
    }
    s = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s >> 1) + 0x800;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = 0x1000 - s;
        SetForwardVelocity(arg0, (d >= 0) ? -0x8000 - d * 16 : -0x8000 - (s - 0x1000) * 16);
        r = MoveOnGround(arg0);
        if ((r & 0xFF) == 0x1A) {
            goto kill;
        }
        if (!(r & 0x6000)) {
            goto idle;
        }
        if (--AF(arg0, s32, 0xE8) == 0) {
            AF(arg0, u16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x20;
            s = rand() % 1024;
            y = AF(AF(arg0, void *, 0x20), s16, 0x12);
            if (!(rand() & 1)) {
                v = y - s;
            } else {
                v = y + s;
            }
            goto store;
        }
        break;
    case 1:
        AF(AF(arg0, void *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        e = 0x1000 - s;
        SetForwardVelocity(arg0, -(((e < 0) ? s - 0x1000 : e) * 16) - 0x4000);
        r = MoveOnGround(arg0);
        if ((r & 0xFF) == 0x1A) {
            goto kill;
        }
        if (!(r & 0x6000)) {
        idle:
            RestorePrevPos(arg0);
            p = AF(arg0, u8 *, 0x20);
            AF(arg0, u16, 0x34) = 2;
            v = AF(p, s16, 0x12);
            v += 0x800;
        store:
            AF(arg0, s32, 0xE0) = v;
        } else {
            if (TickTimer(arg0) != 0) {
                AF(arg0, u16, 0x34) = 0;
                AF(arg0, s32, 0xE8) = 0x40;
            }
        }
        break;
    case 2:
        r = TurnStep(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0xA);
        if (r == 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        AF(AF(arg0, void *, 0x20), s16, 0x12) += r;
        break;
    case 3:
        r = MoveOnGround(arg0);
        if ((r & 0xFF) == 0x1A) {
        kill:
            func_sc03_108_801808B4(arg0);
            return;
        }
        if (r & 0x2000) {
            StopWithGravity(arg0);
            SetForwardVelocity(arg0, -0x28000);
            AF(arg0, u16, 0x34) = 0;
        } else {
            if (!(AF(arg0, s32, 0x1C) & 3)) {
                SpawnKind1C(arg0, 1);
            }
            if (++AF(arg0, s32, 0x1C) >= 0x3C) {
                SetReactionStep(arg0, 0xD);
            }
        }
        break;
    }
    if (TargetInSight(arg0, 0x400, 0x24000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    AF(arg0, s32, 0xE4)++;
}

void func_sc03_108_8017F640(u8 *p) {
    s32 d;
    s32 s;

    if (AF(p, s16, 0xA) >= 0x10) {
        func_sc03_108_801808B4();
        return;
    }
    d = DistSqToTarget(p);
    if (TargetInFront(p, 0x400) == 0 || d > 0x24000) {
        AF(p, s16, 2) = 1;
        return;
    }
    if (d < 0x4001) {
        AF(p, s16, 2) = 4;
        return;
    }
    s = rsin((AF(p, s32, 0xE4) << 7) & 0x780);
    AF(AF(p, u8 *, 0x20), s16, 0x1A) = (s >> 1) + 0x800;
    AF(AF(p, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(p, 0xA);
    SetForwardVelocity(p, -0x10000 - (((0x1000 - s) >= 0 ? (0x1000 - s) : -(0x1000 - s)) << 7));
    if (!(MoveOnGround(p) & 0x6000)) {
        RestorePrevPos(p);
    }
    AF(p, s32, 0xE4)++;
}

void func_sc03_108_8017F788(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    ((s16 *)&p.x)[1] = g_PlayerX;
    ((s16 *)&p.y)[1] = D_80126B62 - 0x30;
    ((s16 *)&p.z)[1] = D_80126B66;
    HeadingPitchTo(&v, arg0 + 4, &p);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0x100000);
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0xFE) = D_80126B62 - 0x60;
}

void func_sc03_108_8017F83C(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_108_801808B4(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        t = MoveCollidePassable(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x4000) goto stop;
        if (ActorTouchesPlayer(arg0, 0x20, 5) == 1) {
            g_PlayerHitKind = 0x11;
            g_PlayerHitFacing = AF(AF(arg0, void *, 0x20), u16, 0x12);
            AF(arg0, s32, 0x48) = 0x18000;
            AF(arg0, u16, 0x34)++;
            AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x800;
            UpdateModelZYX(arg0);
            SetForwardVelocity(arg0, 0xFFF00000);
            break;
        }
        if (AF(arg0, s32, 0x14) < 0) {
            if (AF(arg0, s16, 0xA) < AF(arg0, s16, 0xFE)) {
                AF(arg0, s32, 0x48) = 0x18000;
                AF(arg0, u16, 0x34)++;
            }
        } else if (AF(arg0, s16, 0xA) > AF(arg0, s16, 0xFE)) {
            AF(arg0, s32, 0x48) = 0x18000;
            AF(arg0, u16, 0x34)++;
        }
        AF(arg0, s32, 0x1C)++;
        break;
    case 1:
        t = MoveCollidePassable(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x2000) {
            AF(arg0, u16, 0x34)++;
            AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
            AF(arg0, s32, 0x1C) = 0;
            break;
        }
        if (t & 0x4000) goto stop;
        goto count;
    case 2:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        t = MoveOnGround(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (!(t & 0x6000)) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34)++;
            break;
        }
        if (AF(arg0, s32, 0x1C) % 3 == 0) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x10) break;
        goto done;
    case 3:
        t = MoveCollide(arg0);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x4000) {
stop:
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 4;
            AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
            break;
        }
        if (t & 0x2000) {
            AF(arg0, s16, 2) = 1;
            SpawnKind1C(arg0, 1);
            break;
        }
        goto count;
    case 4:
        if (AF(arg0, s32, 0x1C) % 3 == 0) {
            SpawnKind1C(arg0, 1);
        }
        t = MoveOnGround(arg0);
        if ((t & 0xFF) == 0x1A) {
kill:
            func_sc03_108_801808B4(arg0);
            return;
        }
        if (t & 0x2000) {
done:
            AF(arg0, s16, 2) = 1;
            break;
        }
count:
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            SetReactionStep(arg0, 0xD);
        }
        break;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc03_108_8017FBD8(StageActor *arg0) {
    arg0->accel[1] = 0x4000;
    arg0->state = 7;
    arg0->timer = 0x50;
    arg0->model->rot.vz = rand() % 4096;
}

void func_sc03_108_8017FC3C(u8 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    temp_v1 = (temp_v0 >> 3) + 0xE00;
    AF(temp_s0, s16, 0x1C) = temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    AF(temp_s0, s16, 0x1A) = (s16) ((temp_v0 >> 1) + 0x800);
    MoveObject((s32) arg0);
    if (ActorTouchesPlayer((s32) arg0, 0x20, 5) == 1) {
        g_PlayerHitKind = 0x11;
        g_PlayerHitFacing = AF(AF(arg0, void *, 0x20), u16, 0x12);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc03_108_80180968((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc03_108_8017FD08(u8 *arg0) {
    if (GroundDistSqToPlayer() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        StopWithHalfGravity((s32) arg0);
        ShowModel((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

void func_sc03_108_8017FD64(u8 *p) {
    SV4 in;
    s16 out[2];
    u8 *o;
    s32 s;
    s16 t;
    s16 v;

    o = AF(p, u8 *, 0x20);
    s = rsin((AF(p, s32, 0xE4) << 6) & 0x7C0);
    t = (s >> 3) + 0xE00;
    AF(o, s16, 0x1C) = t;
    AF(o, s16, 0x18) = t;
    AF(o, s16, 0x1A) = (s >> 1) + 0x800;
    if (MoveCollidePassable(p) & 0x2000) {
        AF(p, s16, 2) = 1;
        SpawnKind1C(p, 1);
        in.x = AF(p, u16, 6);
        in.y = AF(p, u16, 0xA);
        in.z = AF(p, u16, 0xE);
        ProjectPoint(&in, out);
        if ((out[0] >= 0 ? out[0] < 0xB5 : -out[0] < 0xB5) && (out[1] >= 0 ? out[1] < 0x8D : -out[1] < 0x8D)) {
            v = ((out[0] << 6) / 180) + 0x40;
            if (v < 0) {
                v = 0;
            } else if (v >= 0x80) {
                v = 0x7F;
            }
            PlaySoundId(0x832, (v | 0x2000) & 0xFFFF);
        }
    }
    AF(p, s32, 0xE4)++;
}

void func_sc03_108_8017FEE4(u8 *arg0) {
    u8 *p;
    func_sc03_108_80180764(arg0);
    switch (AF(arg0, u16, 0x5E)) {
    case 1:
        if (AF(arg0, s16, 0x60) != 0) {
            goto dflt;
        }
        AF(arg0, s16, 0x76) -= AF(arg0, s16, 0x60);
        if (AF(arg0, s16, 0x76) <= 0) {
            SetReactionStep(arg0, 0xE);
        }
        TakeDamage(arg0);
        AF(arg0, s16, 0x34) = 3;
        return;
    case 8:
        p = &D_sc03_108_8019E7E4;
        break;
    case 5:
    case 29:
    case 32:
        p = &D_sc03_108_8019E7F4;
        break;
    case 50:
    default:
    dflt:
        p = &D_sc03_108_8019E7D4;
        break;
    }
    SetLocalVelocity(arg0, p);
    SetScript(arg0, &D_sc03_108_8019E6AC);
    AF(arg0, s16, 0x34) = 0;
    func_sc03_108_801809A0(arg0);
}

void func_sc03_108_8017FFD0(u8 *arg0) {
    s32 t;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_108_801808B4(arg0);
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x100;
        t = MoveCollidePassableAt(arg0, &D_sc03_108_8019E704);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (t & 0x2000) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            break;
        }
        if (t & 0x4000) {
            AF(arg0, u16, 0x34) = 4;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            StopWithGravity(arg0);
            break;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    case 1:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        t = MoveOnGroundOfs(arg0, &D_sc03_108_8019E704);
        if ((t & 0xFF) == 0x1A) goto kill;
        if (!(t & 0x6000)) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34)++;
            StopWithGravity(arg0);
            break;
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            EndReaction(arg0);
        }
        break;
    case 2:
        t = MoveCollidePassableAt(arg0, &D_sc03_108_8019E704);
        if (t & 0x2000) {
            SpawnKind1C(arg0, 1);
            EndReaction(arg0);
            break;
        }
        if (t & 0x4000) {
            AF(arg0, u16, 0x34) = 4;
            SpawnKind1C(arg0, 1);
            StopWithGravity(arg0);
            break;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            SetReactionStep(arg0, 0xD);
        }
        break;
    case 3:
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            EndReaction(arg0);
        }
        break;
    case 4:
        t = MoveOnGroundOfs(arg0, &D_sc03_108_8019E704);
        if ((t & 0xFF) == 0x1A) {
kill:
            func_sc03_108_801808B4(arg0);
            return;
        }
        if (t & 0x2000) {
            EndReaction(arg0);
            break;
        }
        if (!(AF(arg0, s32, 0x1C) & 3)) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) >= 0x3C) {
            SetReactionStep(arg0, 0xD);
        }
        break;
    }
    func_sc03_108_801809A0(arg0);
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc03_108_801802E0(StageActor *arg0) {
    func_sc03_108_80180764();
    func_sc03_108_801809A0(arg0);
    SetScript(arg0, (s32) &D_sc03_108_8019E6AC);
    PlaySoundId(0xA74, 0);
}

void func_sc03_108_8018032C(StageActor *arg0) {
    func_sc03_108_80180764();
    func_sc03_108_801809A0(arg0);
}

void func_sc03_108_8018035C(u8 *arg0) {
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    func_sc03_108_80180764();
    if (AF(arg0, u16, 0x5E) == 9 || AF(arg0, u16, 0x5E) == 0x1C) {
        SetLocalVelocity(arg0, &D_sc03_108_8019E804);
    } else {
        SetLocalVelocity(arg0, &D_sc03_108_8019E814);
    }
    SetScript((s32) arg0, (s32) &D_sc03_108_8019E6AC);
    func_sc03_108_801809A0((s32) arg0);
}

void func_sc03_108_801803E0(u8 *arg0) {
    s32 ret;
    s32 saved;
    u8 unused[8];

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc03_108_801808B4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0) {
        DamageActorsNear(arg0, 0x50, AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            SetReactionStep(arg0, 0xD);
            return;
        }
        ret = MoveCollidePassableAt(arg0, &D_sc03_108_8019E704);
        if (ret & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc03_108_801808B4(arg0);
                return;
            }
            AF(arg0, u8, 0xC2) = 2;
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF30000;
            AF(arg0, s32, 0x1C) = 0;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) > 0x28) {
            SetReactionStep(arg0, 0xD);
            return;
        }
        saved = AF(arg0, s32, 0x14);
        ret = MoveCollidePassableAt(arg0, &D_sc03_108_8019E704);
        if (ret & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u8, 0xC2) = 4;
            break;
        }
        if (ret & 0x2000) {
            if ((ret & 0xFF) == 0x1A) {
                func_sc03_108_801808B4(arg0);
                return;
            }
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = saved;
            AF(arg0, u8, 0xC2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        if (AF(arg0, u8, 0xC3) & 1) {
            ret = MoveOnGroundOfs(arg0, &D_sc03_108_8019E704);
            if (!(ret & 0x6000)) {
                SetReactionStep(arg0, 0xD);
                return;
            }
        } else {
            ret = MoveCollidePassableAt(arg0, &D_sc03_108_8019E704);
            if (ret & 0x4000) {
                StopWithGravity(arg0);
                AF(arg0, u8, 0xC2) = 4;
                break;
            }
            if (ret & 0x2000) {
                if ((ret & 0xFF) == 0x1A) {
                    func_sc03_108_801808B4(arg0);
                    return;
                }
                AF(arg0, u8, 0xC3) |= 1;
            }
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) > 0x10) {
            if (!(ret & 0x6000)) {
                SetReactionStep(arg0, 0xD);
                return;
            }
            EndReaction(arg0);
            break;
        }
        break;
    case 4:
        ret = MoveOnGround(arg0);
        if (ret & 0x2000) {
            EndReaction(arg0);
            break;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) > 0x3C) {
            SetReactionStep(arg0, 0xD);
            return;
        }
        break;
    }
    func_sc03_108_801809A0(arg0);
}

void func_sc03_108_80180764(u8 *o) {
    u8 *p;
    AF(o, u16, 0x5C) &= ~1;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    AF(o, s32, 0x1C) = 0;
    UpdateModelZYX(o);
    StopWithGravity(o);
}

void func_sc03_108_801807C8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_108_80180FCC);
    SnapToGround((s32) arg0);
}

void func_sc03_108_80180814(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc03_108_8018082C(s32 arg0) {
    ToggleModel();
    if (TickTimer(arg0) != 0) {
        func_sc03_108_80180A84(arg0);
        GainStat0FromActor(arg0);
        func_sc03_108_801808B4(arg0);
    }
}

void func_sc03_108_8018087C(StageActor *arg0) {
    func_sc03_108_80180A84(arg0);
    GainStat0FromActor(arg0);
    func_sc03_108_801808B4(arg0);
}

void func_sc03_108_801808B4(u8 *arg0) {
    u16 fl = AF(arg0, u16, 0x70);

    if (fl & 2) {
        if (fl & 0x10) {
            AF(arg0, s16, 2) = 8;
            AF(arg0, u8, 0xC1) = 0;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
            HideModel();
            AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
            AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            UpdateModelZYX(arg0);
            if (AF(arg0, s32, 0xCC) != 0) {
                FreeShadow(AF(arg0, s32, 0xCC));
            }
            return;
        }
    }
    func_sc03_108_80180968((s32) arg0);
}

s32 func_sc03_108_80180968(StageActor *arg0) {
    ZeroFill(arg0->ext1, 0x38);
    return DespawnActor(arg0);
}

void func_sc03_108_801809A0(StageActor *arg0) {
    SV8 v;
    SV8 unused;
    u8 *w;
    u8 *e;
    u8 *p;
    s32 t;
    u32 m;

    w = (u8 *)&D_800AF630;
    p = (u8 *)arg0->ext1;
    if (p != NULL) {
        e = p;
        FaceHelper(arg0, &D_sc03_108_8019E6FC, &v);
        AF(e, SV8, 8) = v;
        m = 0x80000000;
        if ((s32)arg0->model->unk04 < 0) {
            AF(e, s32, 4) |= m;
        } else {
            AF(e, s32, 4) &= ~m;
        }
        t = (rsin((AF(w, u16, 0xA3AA) * 56) & 0x7F8) >> 4) + 0x455;
        AF(e, s16, 0x1A) = t;
        AF(e, s16, 0x18) = t;
    }
}

void func_sc03_108_80180A84(StageActor *arg0) {
    typedef struct { s32 v; } W;
    SpawnDef d;
    W w;
    s32 i;

    d.kind = 0x33;
    d.flags = 0;
    d.unk8 = 0;
    d.unk10 = 0;
    d.unkE = 0;
    d.unkC = 0x7FFF;
    for (i = 0; i < 5; i++) {
        w = ((W (*)())AngleToVec2)(rand() % 4096, rand() % 64);
        d.x = (u16)arg0->pos[0].h.i + w.v;
        d.y = (u16)arg0->pos[1].h.i - 0x60;
        d.z = (u16)arg0->pos[2].h.i + (w.v >> 16);
        SpawnActorFromDef(&d, arg0);
    }
}

void func_sc03_108_80180B7C(StageActor *arg0) {
    s32 s;
    s32 t;
    s32 a, b, c;
    s32 i;
    Col16 *q;

    s = rsin((D_800B99DA * 56) & 0x7F8);
    t = (s * 100) >> 12;
    a = t + 100;
    b = t - 126;
    c = ((s * 110) >> 12) + 100;
    q = (Col16 *)(&D_sc03_108_8019E682 - 4);
    i = 0;
    do {
        i++;
        q->a = a;
        q->b = b;
        q->c = c;
        q++;
    } while (i < 3);
    D_sc03_108_8019E6BC = a - 50;
    D_sc03_108_8019E6BD = b - 50;
    D_sc03_108_8019E6BE = c - 50;
    AF(arg0, s32, 0x1C)++;
}
