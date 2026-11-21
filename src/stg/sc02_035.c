#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_035_8017BE9C(void) {
}

void func_sc02_035_8017BEA4(void) {
}

void func_sc02_035_8017BEAC(void) {
}

void func_sc02_035_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_035_80187F0C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc02_035_8017D00C(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc02_035_8017D034(void);
extern void func_800D1EBC();
extern void (*D_sc02_035_80187F20[])();
extern u8 D_sc02_035_80187F2C;
extern void StartPlayerActionScript();
extern u8 D_sc02_035_80187F30;
extern void func_sc02_035_8017D0F4();
extern void (*D_sc02_035_80187F34[])();
extern void (*D_sc02_035_80194854[])();
extern void (*D_sc02_035_80196DBC[])();
extern void (*D_sc02_035_80196E70[])();
extern void (*D_sc02_035_80198E30[])();
extern void (*D_sc02_035_80198EC4[])();
extern void (*D_sc02_035_801BBE9C[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc02_035_80187F3C[];
extern s32 func_8013B7F4();
extern s32 SpawnActorArg();
extern u8 D_sc02_035_801847FC;
extern u8 D_sc02_035_801968D0;
extern u8 D_sc02_035_801968F0;
extern s32 SetupActor();
extern u8 D_sc02_035_801969B4;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();
extern void TakeDamageAndRecoil();
extern void StopWithGravity();
extern void PlayParamScript();
extern s32 IsPlayerHitBy();
extern void ClearPlayerHitBy();
extern u8 D_sc02_035_8019C1AC;
extern void SetLocalVelocity();
extern u8 D_sc02_035_801A86A8;
extern void SpawnActor();
extern u8 D_sc02_035_8019C1C8;
extern u8 D_sc02_035_801A8490;
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s32 g_PlayerAttacker;
extern u8 D_sc02_035_8019C460;
extern u8 D_sc02_035_8019C468;
extern u8 D_sc02_035_801A8F50;
extern u8 D_sc02_035_801A96D0;
extern s32 ActorSegmentHitsPlayer();
extern u8 D_sc02_035_801A9290;
extern u8 D_sc02_035_801A9B40;
extern void FreeActor();

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
extern void (*D_sc02_035_80198DE0[])();
extern void DespawnIfFar();
extern void SnapToGround();
extern s32 TickTimer();
extern u8 g_Actors;
extern u8 D_800D3918;
extern s32 func_sc02_035_801809E4();
extern void FreeProp();
extern void func_sc02_035_80180C10();
extern void (*D_sc02_035_801B977C[])();
extern void func_sc02_035_80183F2C();
extern void GainStat0FromActor();
extern void HideModel();
extern u8 D_sc02_035_801BBC6C;
extern u8 D_sc02_035_801B979C;
extern s32 ActorSegmentDamagesPlayer();
extern s32 func_sc02_035_80183F14();
extern u8 D_80078EC1;
extern s32 DistSqToPlayer();

extern void (*D_sc02_035_801949F0[])();
extern u8 D_sc02_035_801947F0;
extern void SetModelCullBox();

extern void RejectSpawn();
extern s32 AllocActorModel();
extern void func_8001CA1C();
extern SV8 D_sc02_035_80196C8C[];
extern u8 D_sc02_035_801969F0;
extern u8 D_sc02_035_80196AB0;
extern u8 D_sc02_035_80196B38;
extern u8 D_sc02_035_80196BF8;
extern u8 D_sc02_035_80196CDC;
extern u8 D_sc02_035_80196D00;
extern u8 D_sc02_035_80196CEC;
extern u8 D_sc02_035_80196CF8;
extern void UpdateModelZYX();
extern void DespawnActor();


extern void (*D_sc02_035_8019C534[])();
extern s32 ActorTouchesPlayer();
extern void UpdateModelYXZ();

extern s32 func_sc02_035_801803F8();
extern void SetForwardVelocity();

extern u8 D_sc02_035_8018801C;
extern u8 D_sc02_035_801882B0;
s32 func_sc02_035_8017D368(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern void *g_PlayerModel;
extern u8 D_sc02_035_8019C4F8;
extern u8 D_sc02_035_8019C510;
extern u8 D_sc02_035_8019C528;
extern u8 D_sc02_035_8019C540;
extern u8 D_sc02_035_8019C600;
extern u8 D_sc02_035_8019C688;

extern u8 D_sc02_035_80198D00;
extern u8 D_sc02_035_80198DA0;
s32 func_sc02_035_801803A4(void);

typedef struct { s16 vx, vy, vz, pad; } SV;
extern void HeadingPitchTo();
extern s32 SpawnKind205();
extern u8 *g_ActiveCamera;
extern u8 D_sc02_035_801A7E08;
extern u8 D_sc02_035_801A8010;
extern u8 D_sc02_035_801A8BC8;
extern s32 CollidePath();
extern void SetReactionStep();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc02_035_8017BEBC(u8 *obj) {
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

void func_sc02_035_8017CD9C(void) {
    g_SpawnListFixed = &D_sc02_035_8018801C;
    g_SpawnListRanged = &D_sc02_035_801882B0;
    func_sc02_035_8017D368(0);
}

void func_sc02_035_8017CDDC(u8 *arg0) {
    D_sc02_035_80187F0C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_035_8017CE18(u8 *arg0) {
    func_sc02_035_8017D00C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_035_8017CE5C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc02_035_8017CE80(u8 *arg0) {
    func_sc02_035_8017D034();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_035_8017CEC0(u8 *arg0) {
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

void func_sc02_035_8017CF3C(void) {
    func_800D1EBC();
}

void func_sc02_035_8017CF5C(u8 *arg0) {
    D_sc02_035_80187F20[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_035_8017CF98(u8 *arg0) {
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

void func_sc02_035_8017D00C(void) {
    StartPlayerActionScript((s32) &D_sc02_035_80187F2C, 0x01000000);
}

void func_sc02_035_8017D034(void) {
    StartPlayerActionScript((s32) &D_sc02_035_80187F30, 0x01000000);
}

void func_sc02_035_8017D05C(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_035_8017D0F4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc02_035_8017D0F4((s32) &g_Camera);
}

void func_sc02_035_8017D0F4(s32 arg0) {
    D_sc02_035_80187F34[AF(arg0, u8, 4)]();
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern VoidFn D_sc02_035_801969E8[];
extern s32 HeadingTo();
extern s32 PathHitsModel();
extern void GiveItem();
extern u8 D_sc02_035_801A257C;
extern u8 D_sc02_035_801A9CC0;
extern void InitModel();
extern s32 TurnStepToTarget();
extern s32 SetLocalVelocityXZ();
extern u8 D_sc02_035_8019C480;
extern u8 D_sc02_035_801A9188;
extern s32 TraceMap();
extern s32 DistSqToTarget();
extern s32 TargetInFront();
extern s32 g_PlayerPosX;
extern s16 D_80126B62;
extern s32 D_80126B64;

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s32 TargetInSight();
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 GroundDistSqTo();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern u8 D_sc02_035_8019C1B8;
extern u8 D_sc02_035_8019C48C;
extern u8 D_sc02_035_801A9CD8;
extern s16 D_sc02_035_801BBDBC;
extern s16 D_sc02_035_801BBDBE;
extern s16 D_sc02_035_801BBDC0;
extern Blk30 D_sc02_035_801BBDC4;
extern s16 D_sc02_035_801BBDF4;
extern s16 D_sc02_035_801BBDF6;
extern s16 D_sc02_035_801BBDF8;
extern Blk30 D_sc02_035_801BBDFC;
extern s16 D_sc02_035_801BBE2C;
extern s16 D_sc02_035_801BBE2E;
extern s16 D_sc02_035_801BBE30;
extern Blk30 D_sc02_035_801BBE34;
extern s16 D_sc02_035_801BBE64;
extern s16 D_sc02_035_801BBE66;
extern s16 D_sc02_035_801BBE68;
extern Blk30 D_sc02_035_801BBE6C;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void SetState();
extern void ApplyLight();

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc02_035_80196924[];
extern u16 D_sc02_035_8019694C[];
extern u16 D_sc02_035_80196974[];
extern VoidFn D_sc02_035_8019699C[];
extern void PlaySoundFor();
extern R34 D_sc02_035_8019C1E8[];
extern u8 D_sc02_035_8019C320;
extern u8 D_sc02_035_8019C3C0;
extern u8 D_sc02_035_8019C408;
extern u8 D_sc02_035_801A99C0;
extern void SpawnShadow();

extern s32 func_sc02_035_80183E68();
extern s32 MoveCollidePassable();
extern s32 rand();

extern void AngleToVec2();
extern void StopMotion();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern void MoveProp();
extern u8 D_sc02_035_801A8E48;
extern u8 D_sc02_035_801A94C8;

extern s32 GroundDistSqToPlayer();
extern void ShowModel();
extern void StopWithHalfGravity();
extern void SpawnKind1C();
extern void EndReaction();
extern void func_sc02_035_801800C0();
extern s32 DistSq();
extern void RestorePrevPos();
extern s32 func_sc02_035_80180B38();
extern s32 SVecDistSq();

extern u8 D_sc02_035_8019489C;
typedef struct { u16 a, b, c, d; } U16x4;
extern U16x4 D_sc02_035_801949A0[];
extern s32 SetupActorTrans();

extern s32 D_sc02_035_80198DFC[];
extern s32 func_sc02_035_8018016C();
extern u8 D_sc02_035_801A8538;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc02_035_80187F38[];
extern s32 GetObjPadPressed();
extern void func_sc02_035_8017D1D0();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

void func_sc02_035_8017D130(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc02_035_80187F38)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc02_035_8017D1D0((s32) arg0, (s32) &v);
}

void func_sc02_035_8017D1D0(u8 *arg0, u8 *arg1) {
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

s32 func_sc02_035_8017D368(s32 arg0) {
    return func_8013B7F4(D_sc02_035_80187F3C[arg0], 0);
}

extern u8 D_sc02_035_801B974C;

typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern u8 D_sc02_035_80198E14;
extern Rec801AC2F0 D_sc02_035_80198E20[];
extern s32 SpawnPropAt();

extern s16 g_PlayerTargetOff;
extern s32 IsOnScreen();
extern u8 D_sc02_035_801B9710;
extern u8 D_sc02_035_801B9754;
extern void func_80143994();
extern s32 D_8012704C;
extern u8 D_sc02_035_80194824;
extern void UpdateModelRot();

s32 func_sc02_035_8017D398(void) {
    if (D_8012704C == 0) {
        return 0x34;
    }
    return 0x46;
}

void func_sc02_035_8017D3B8(u8 *arg0) {
    D_sc02_035_80194854[AF(arg0, u16, 2)]();
}

void func_sc02_035_8017D3F4(StageActor *arg0) {
    if (SetupActorTrans(arg0, &D_sc02_035_8019489C + ((u16)arg0->param & 0xF) * 0x34) != 0) {
        SetScript(arg0, &D_sc02_035_801847FC);
        arg0->targetClass = 0;
        arg0->model->unk04 |= 0x8040;
        arg0->workFE = D_sc02_035_801949A0[arg0->unkFC].a;
        arg0->work100 = D_sc02_035_801949A0[arg0->unkFC].b;
        arg0->work102 = D_sc02_035_801949A0[arg0->unkFC].c;
        arg0->work104 = D_sc02_035_801949A0[arg0->unkFC].d;
        SetModelCullBox(arg0->model, 0x104, 0xDC);
        switch ((u16)arg0->param & 0xF0) {
        case 0:
            arg0->state = 1;
            break;
        case 0x10:
            arg0->state = 2;
            break;
        case 0x20:
            arg0->state = 3;
            break;
        }
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc02_035_8017D548(StageActor *arg0) {
    D_sc02_035_801949F0[arg0->state]();
    CarryPlayer((s32) arg0);
}

void func_sc02_035_8017D598(StageActor *arg0) {
    u16 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc02_035_801947F0) != 0) {
        SetScript(arg0, (s32) &D_sc02_035_801847FC);
        arg0->state = 1;
        arg0->targetClass = 8;
        SetModelCullBox(arg0->model, 0x104, 0xDC);
        temp_v1 = (u16)arg0->unkFC;
        arg0->unkFC = 0x60U;
        arg0->workFE = temp_v1;
    }
}

void func_sc02_035_8017D610(u8 *arg0) {
    s32 t;
    s32 i;
    u8 *a;
    u8 *b;

    t = AF(arg0, u16, 0xFE) + AF(arg0, u16, 0xFC);
    AF(arg0, u16, 0xFE) = t & 0xFFF;
    if ((t & 0x7FF) < 0x61) {
        PlaySoundId(0x6A5, 0);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rcos(AF(arg0, s16, 0xFE)) >> 3;
    if (AF(arg0, s16, 0x70) != 0) {
        UpdateModelRot(arg0);
    }
    for (i = 0; i < 5; i++) {
        if (ActorSegmentDamagesPlayer(arg0, &D_sc02_035_80194824 + i * 8, &D_sc02_035_80194824 + i * 8 + 8, 0x30) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
}

void func_sc02_035_8017D710(StageActor *arg0) {
    s16 temp_v0;
    ModelObj *temp_a0;
    ModelObj *temp_a0_2;
    ModelObj *temp_a0_3;

    temp_a0 = arg0->model;
    temp_a0->rot.vx = (u16) ((u16)temp_a0->rot.vx + (u16)arg0->workFE);
    temp_a0_2 = arg0->model;
    temp_a0_2->rot.vy = (u16) ((u16)temp_a0_2->rot.vy + (u16)arg0->work100);
    temp_a0_3 = arg0->model;
    temp_a0_3->rot.vz = (u16) ((u16)temp_a0_3->rot.vz + (u16)arg0->work102);
    temp_v0 = (s16) (u16)arg0->work100;
    if ((temp_v0 != 0) && (arg0->unk74 != 0)) {
        AF(g_PlayerModel, u16, 0x12) = (u16) (AF(g_PlayerModel, u16, 0x12) + temp_v0);
    }
}

void func_sc02_035_8017D7A4(StageActor *arg0) {
    if (arg0->work108 != 0) {
        arg0->work108--;
        return;
    }
    arg0->work106 += arg0->workFE;
    arg0->pos[2].h.i = arg0->origin[2] + ((rsin(arg0->work106) * arg0->work104) >> 12);
    arg0->pos[1].h.i = arg0->origin[1] + ((rcos(arg0->work106) * arg0->work104) >> 12);
    if ((arg0->work106 & 0x7FF) == 0) {
        arg0->work108 = 0xF;
    }
}

void func_sc02_035_8017D85C(StageActor *arg0) {
    if (arg0->work108 != 0) {
        arg0->work108--;
        return;
    }
    arg0->work106 += arg0->workFE;
    arg0->pos[0].h.i = arg0->origin[0] + ((rsin(arg0->work106) * arg0->work104) >> 12);
    arg0->pos[1].h.i = arg0->origin[1] + ((rcos(arg0->work106) * arg0->work104) >> 12);
    if ((arg0->work106 & 0x7FF) == 0) {
        arg0->work108 = 0xF;
    }
}

void func_sc02_035_8017D914(u8 *arg0) {
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_035_80196924[i];
        a.z = D_sc02_035_80196924[i + 1];
        b.x = D_sc02_035_80196924[i + 2];
        b.z = D_sc02_035_80196924[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_035_8019694C[i];
        a.z = D_sc02_035_8019694C[i + 1];
        b.x = D_sc02_035_8019694C[i + 2];
        b.z = D_sc02_035_8019694C[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_035_80196974[i];
        a.z = D_sc02_035_80196974[i + 1];
        b.x = D_sc02_035_80196974[i + 2];
        b.z = D_sc02_035_80196974[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc02_035_8019699C[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc02_035_8017DBAC(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc02_035_801969E8[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = HeadingTo(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.x -= rsin(ang) >> 8;
            a.z -= rcos(ang) >> 8;
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            c = b;
            if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc02_035_8017DD34(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196B38);
        SetScript(arg0, &D_sc02_035_80196BF8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc02_035_80196CDC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_80196D00;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc02_035_801969B4;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196B38);
        SetScript(arg0, &D_sc02_035_80196BF8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_80196CEC);
        SetScript(arg0, &D_sc02_035_80196CF8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_035_801969F0);
        SetScript(arg0, &D_sc02_035_80196AB0);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc02_035_8017E1E0(StageActor *arg0) {
    arg0->model->unk04 = (s32)arg0->parent->model->unk04;
    arg0->model->unk04 &= 0xEFFFFFFF;
    arg0->model->unk04 |= 0x08000000;
    arg0->model->unk04 |= 0x60000000;
    arg0->model->rot.vy = (u16)arg0->parent->model->rot.vy;
    arg0->pos[0].w = arg0->parent->pos[0].w - (rsin((u16)arg0->model->rot.vy & 0xFFF) << 8);
    arg0->pos[1].w = arg0->parent->pos[1].w;
    arg0->pos[2].w = arg0->parent->pos[2].w - (rcos((u16)arg0->model->rot.vy & 0xFFF) << 8);
    arg0->model->scale.vx = (s16) (u16)arg0->parent->model->scale.vx / 2;
    arg0->model->scale.vy = (s16) (u16)arg0->parent->model->scale.vy / 2;
    arg0->model->scale.vz = (s16) (u16)arg0->parent->model->scale.vz / 2;
}

void func_sc02_035_8017E374(StageActor *arg0) {
    SV in;
    SV out;
    s32 flag;
    u8 *m;
    s32 n;

    if (arg0->workFE != (s16)arg0->parent->id) {
        FreeActor(arg0);
        return;
    }
    if ((u16)arg0->parent->work100 & 0x4000) {
        arg0->model->scale.vx -= 0x200;
        arg0->model->scale.vy -= 0x200;
        if (arg0->model->scale.vx < 0x200) {
            SpawnKind1C(arg0, 0);
            FreeActor(arg0);
            return;
        }
    } else {
        if (--arg0->work100 < 9) {
            arg0->work100 = 0x18;
            if (arg0->parent->param == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (arg0->parent->param == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = arg0->work100;
        if (n < 0x10) {
            arg0->model->scale.vx = arg0->model->scale.vy = n * 0x300;
        } else {
            arg0->model->scale.vx = arg0->model->scale.vy = (0x20 - n) * 0x300;
        }
    }
    if ((s32)arg0->parent->model->unk04 & 0x80000000) {
        arg0->model->unk04 |= 0x80000000;
    } else {
        arg0->model->unk04 &= 0x7FFFFFFF;
    }
    arg0->pos[0].w = arg0->parent->pos[0].w;
    arg0->pos[1].w = arg0->parent->pos[1].w;
    arg0->pos[2].w = arg0->parent->pos[2].w;
    in.vx = AF(arg0, s16, 0x12);
    in.vy = AF(arg0, s16, 0x16);
    in.vz = AF(arg0, s16, 0x1A);
    m = (u8 *)arg0->parent->model + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    arg0->pos[0].h.i = out.vx;
    arg0->pos[1].h.i = out.vy;
    arg0->pos[2].h.i = out.vz;
}

extern VoidFn D_sc02_035_80196D10[];
extern s16 D_80126CB6;
extern u8 D_sc02_035_80196C80;
extern s32 HeadingToTarget();
extern s32 HeadingToSV();
extern s16 D_sc02_035_80196D82[];
extern u8 D_sc02_035_80196D48;
extern u16 D_sc02_035_80196D7C[];
extern u16 D_sc02_035_80196D7E[];
extern u16 D_sc02_035_80196D80[];
extern u8 D_sc02_035_80196DC8;
extern u8 D_sc02_035_80196E28;
extern s32 SpawnActorFromDef();
extern WMtx GsIDMATRIX;
extern s32 D_sc02_035_80198E4C;
extern void QueueImage();
extern VoidFn D_sc02_035_8019C4A4[];
extern VoidFn D_sc02_035_8019C694[];
extern u8 D_sc02_035_801A9A58;
extern u8 D_sc02_035_8019C19C;
extern void func_80153C74();
extern u8 D_sc02_035_801A93C0;
extern u8 D_sc02_035_8019C470;
extern u8 D_sc02_035_8019C478;
extern u8 D_sc02_035_8019C498;
extern V16 D_sc02_035_801BBDE4;
extern s32 D_800A5EB0;
extern V16 D_sc02_035_801BBE1C;
extern s32 D_800A5E90;

void func_sc02_035_8017E724(u8 *arg0) {
    s32 temp_v0;

    D_sc02_035_80196D10[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &g_PlayerHitKind;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                SpawnActorArg(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc02_035_8017E810(u8 *arg0) {
    D_sc02_035_80196DBC[AF(arg0, u16, 2)]();
}

void func_sc02_035_8017E84C(u8 *arg0) {
    D_sc02_035_80196E70[AF(arg0, u16, 2)]();
}

void func_sc02_035_8017E888(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc02_035_8017E8A0(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_035_801968F0) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc02_035_801968D0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc02_035_801847FC);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc02_035_8017E944(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc02_035_8017E960(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc02_035_801969B4) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc02_035_801968D0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc02_035_801847FC, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc02_035_8017E9E4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc02_035_8017EA20(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc02_035_8017EA50(s32 arg0) {
    void *temp_a0;

    if (MoveCollide(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            PlaySoundAtActor(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc02_035_8017EAD4(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc02_035_80196C80);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_035_8017EB98(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        PlaySoundAtActor(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, u16, 0x12) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc02_035_80196C8C[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc02_035_8017EC78(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_035_8017ECE8(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc02_035_80196C80);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_035_8017EDC4(void) {
}

void func_sc02_035_8017EDCC(StageActor *arg0) {
    StageActor *t;

    if (arg0->timer != 0) {
        arg0->timer--;
    }
    arg0->model->scale.vx -= 0x100;
    arg0->model->scale.vy -= 0x100;
    if (arg0->model->scale.vy <= 0x80) {
        if (arg0->param == 1) {
            t = (s32)arg0->ext0;
            if (arg0 != NULL) {
                FreeActor(t);
            }
        }
        GainStat0FromActor(arg0);
        FreeActor(arg0);
    }
}

void func_sc02_035_8017EE84(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_035_80196D48) != 0) {
        SetScript(arg0, (s32) &D_sc02_035_801847FC);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc02_035_80196D7C[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc02_035_80196D7E[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc02_035_80196D80[arg0->unkFC * 4];
        arg0->timer = D_sc02_035_80196D82[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc02_035_8017EF48(s32 arg0) {
    s32 temp_v0;

    MoveOnGround(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    CarryPlayer(arg0);
}

void func_sc02_035_8017EF9C(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc02_035_80196D82[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc02_035_8017F018(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc02_035_80196DC8);
    SetScript(arg0, &D_sc02_035_80196E28);
    arg0->model->scale.vx = 0x10;
    arg0->model->scale.vy = 0x10;
    arg0->index = rand() & 7;
    arg0->model->unk04 |= 0x50000000;
    arg0->model->flags |= 0x10;
    if ((u16)((u16)arg0->param - 1) >= 0x6FFF) {
        arg0->param = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    arg0->state = st;
}

void func_sc02_035_8017F0FC(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc02_035_8017F1C8(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc02_035_8017F2A0(StageActor *arg0) {
    ModelObj *temp_v0;

    D_sc02_035_80198DE0[arg0->state]();
    if (arg0->kind != 0) {
        temp_v0 = arg0->model;
        temp_v0->flags = (u16) (temp_v0->flags | 0x10);
        if (!((u16)arg0->param & 0x20)) {
            DespawnIfFar((s32) arg0);
        }
    }
}

void func_sc02_035_8017F32C(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (!(AF(arg0, u16, 0x70) & 0xF) && (func_sc02_035_801803A4() == 0)) {
        RejectSpawn((s32) arg0);
        return;
    }
    if (SetupActor((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc02_035_80198D00)) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc02_035_80198DA0;
        AF(arg0, s32, 0xB4) = -2;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        temp_v0 = rand();
        var_v0 = temp_v0 / 16;
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 0xFE) = (s16) ((temp_v0 - (var_v0 * 0x10)) + 8);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_v0_2 = (s16) AF(arg0, u16, 0x70);
        if (!(temp_v0_2 & 0x8000)) {
            if (temp_v0_2 & 0x800) {
                AF(arg0, s16, 2) = 5;
                HideModel((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0x5C) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 1;
        AF(temp_v1_2, s16, 0x1A) = 1;
        AF(temp_v1_2, s16, 0x18) = 1;
        UpdateModelZYX((s32) arg0);
    }
}

void func_sc02_035_8017F498(s32 arg0, s32 arg1, s32 arg2) {
    StopWithGravity(arg0, arg1, arg2);
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s32, 0xE8) = 0x40;
}

void func_sc02_035_8017F4DC(u8 *arg0) {
    s32 sn;
    register u8 *w;
    s32 r;
    s32 m;
    s32 y;
    s32 t;
    s32 unused[4];

    w = &D_800AF630;
    sn = rsin(AF(arg0, s32, 0xE4));
    
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (sn >> 2) + 0x1000;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x1000 - (sn >> 1);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (sn >> 1) + 0x1000;
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x18) = (sn >> 3) + 0x700;
        AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x700 - (sn >> 2);
        AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = (sn >> 2) + 0x700;
    }
    if (AF(w, u16, 0xA3AA) % AF(arg0, s16, 0xFE) == 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x20);
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        t = sn * 16;
        SetForwardVelocity(arg0, (sn >= 0 ? -t : t) - 0x4000);
        r = MoveOnGround(arg0);
        if (r & 0x8000) {
            goto state2;
        }
        if (!(r & 0x2000)) {
            goto fail;
        }
        if (--AF(arg0, s32, 0xE8) != 0) {
            break;
        }
        if (rand() & 1) {
            AF(arg0, u16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x20;
            m = rand() % 1024;
            y = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
            AF(arg0, s32, 0xE0) = (rand() & 1) ? y + m : y - m;
        } else {
            AF(arg0, s32, 0xE8) = 0x40;
        }
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        SetForwardVelocity(arg0, (sn >= 0 ? -(sn * 16) : sn * 16) - 0x4000);
        if (!(MoveOnGround(arg0) & 0x2000)) {
        fail:
            RestorePrevPos(arg0);
        state2:
            AF(arg0, u16, 0x34) = 2;
            AF(arg0, s32, 0xE0) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(arg0, s32, 0x1C) = rand() % 10 + 20;
            break;
        }
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
            AF(arg0, s32, 0xE8) = 0x40;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s32, 0xE0), 0x14);
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
            SnapToGround(arg0);
        }
        break;
    }
    func_sc02_035_8018023C(arg0);
    func_sc02_035_8018016C(arg0, D_sc02_035_80198DFC[AF(arg0, u16, 0x70) & 0xF]);
    AF(arg0, s32, 0xE4) = (AF(arg0, s32, 0xE4) + 0x40) & 0x7FF;
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc02_035_8017F874(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, s16, 2) = 4;
    SnapToGround((s32) arg0);
}

void func_sc02_035_8017F8A0(StageActor *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    temp_v0 = rsin(arg0->timer << 6);
    temp_s0->scale.vz = temp_v0;
    temp_s0->scale.vy = temp_v0;
    temp_s0->scale.vx = temp_v0;
    temp_v0_2 = arg0->timer + 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 >= 0x11) {
        arg0->state = 1;
        arg0->hitState = (u16) arg0->init->hitState;
    }
}

void func_sc02_035_8017F918(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s16, 0x34) = 0;
        AF(temp_v1, s16, 0x1C) = 0x400;
        AF(temp_v1, s16, 0x18) = 0x400;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x3000;
    }
}

void func_sc02_035_8017F96C(u8 *arg0) {
    u16 st;
    s32 v;
    s16 h;

    switch (st = AF(arg0, u16, 0x34)) {
    case 0:
        if (GroundDistSqToPlayer(arg0) <= 0x10000) {
            AF(arg0, u16, 0x34)++;
            ShowModel(arg0);
            StopWithHalfGravity(arg0);
        }
        break;
    case 1:
        if (!(MoveCollide(arg0) & 0x2000)) {
            break;
        }
        AF(arg0, s32, 0x1C) = st;
        AF(arg0, u16, 0x34)++;
        PlaySoundId(0x703, 0);
    case 2:
        {
        u8 *p;
        p = AF(arg0, u8 *, 0x20);
        v = rsin(AF(arg0, s32, 0x1C) << 7);
        h = ((v * 0x1C00) >> 12) + 0x400;
        AF(p, s16, 0x1C) = h;
        AF(p, s16, 0x18) = h;
        AF(p, s16, 0x1A) = 0x3000 - ((v * 0x2800) >> 12);
        if (++AF(arg0, s32, 0x1C) >= 9) {
            AF(arg0, s32, 0x1C) = 1;
            AF(arg0, u16, 0x34)++;
        }
        }
        break;
    case 3:
        {
        u8 *p;
        s16 h;
        p = AF(arg0, u8 *, 0x20);
        v = rsin(AF(arg0, s32, 0x1C) << 7);
        h = 0x2000 - ((v * 0x1000) >> 12);
        AF(p, s16, 0x1C) = h;
        AF(p, s16, 0x18) = h;
        AF(p, s16, 0x1A) = ((v * 0x800) >> 12) + 0x800;
        if (++AF(arg0, s32, 0x1C) >= 9) {
            AF(arg0, s16, 2) = 1;
        }
        }
        break;
    }
}

void func_sc02_035_8017FB1C(u8 *arg0) {
    s32 temp_s2;
    s32 var_s1;
    temp_s2 = ((AF(arg0, u16, 0x70) & 0xF) | ~0x7FFF) << 0x10;
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        func_sc02_035_801803F8((s32) (arg0 + 0x7C), (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0xFFFC0000 - ((rand() % 4) << 0x10), temp_s2 >> 0x10);
    }
    AF(arg0, s32, 0xEC) = 0x40000;
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, AF(arg0, s32, 0xEC));
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_035_8017FBE8(u8 *arg0) {
    s32 d;
    s32 r;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = rcos((AF(arg0, s32, 0x1C) - 1) << 6);
        d -= rcos(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) += d;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= d >> 3;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1C) += d;
        r = MoveOnGround(arg0);
        if (r & 0x1000) {
            SetReactionStep(arg0, 0x12);
        } else if (!(r & 0x2000)) {
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 2;
            AF(arg0, s32, 0x1C) = 0x3C;
        } else {
            if (AF(arg0, s32, 0x1C) % 3 == 0) {
                SpawnKind1C(arg0, 1);
            }
            if (TickTimer(arg0) != 0) {
                AF(arg0, u16, 0x34) = 1;
            }
        }
        break;
    case 1:
        d = rcos((AF(arg0, s32, 0x1C) + 1) << 6);
        d -= rcos(AF(arg0, s32, 0x1C) << 6);
        AF(AF(arg0, u8 *, 0x20), u16, 0x18) += d;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1A) -= d >> 3;
        AF(AF(arg0, u8 *, 0x20), u16, 0x1C) += d;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            EndReaction(arg0);
        }
        break;
    case 2:
        r = MoveCollidePassable(arg0);
        if (r & 0xFF) {
            func_sc02_035_801800C0(arg0);
        } else if (r & 0x2000) {
            EndReaction(arg0);
        } else if (TickTimer(arg0) != 0) {
            SetReactionStep(arg0, 0xD);
        }
        break;
    }
    if (AF(arg0, s32, 0x14) > 0x100000) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
}

void func_sc02_035_8017FE4C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = 0xA810;
}

void func_sc02_035_8017FE60(StageActor *arg0) {
    SV p;
    u8 *x;
    u8 *y;
    s16 a;
    s16 b;
    s8 k;
    s32 i;
    u8 *r0;
    u8 *r1;

    p.vx = arg0->pos[0].h.i;
    p.vy = arg0->pos[1].h.i;
    p.vz = arg0->pos[2].h.i;
    x = NULL;
    y = NULL;
    a = (u16)arg0->model->rot.vy + 0x400;
    b = (u16)arg0->model->rot.vy - 0x400;
    k = (u16)arg0->param & 0xF;
    if (!((u16)arg0->param & 1)) {
        for (i = 0; i < 4; i++) {
            func_sc02_035_801803F8(&p, a, -0x60000 - ((rand() % 4) << 16), k);
            func_sc02_035_801803F8(&p, b, -0x60000 - ((rand() % 4) << 16), k);
        }
    } else {
        for (i = 0; i < 4; i++) {
            r0 = (u8 *) func_sc02_035_801803F8(&p, a, -0x60000 - ((rand() % 4) << 16), k);
            r1 = (u8 *) func_sc02_035_801803F8(&p, b, -0x60000 - ((rand() % 4) << 16), k);
            if (r0 != NULL) {
                if (x != NULL) {
                    AF(r0, u8 *, 0x2C) = x;
                    AF(x, s32, 0x30)++;
                } else {
                    x = r0;
                    AF(r0, s32, 0x2C) = -1;
                    AF(x, u8 *, 0x24) = arg0;
                }
            }
            if (r1 != NULL) {
                if (y != NULL) {
                    AF(r1, u8 *, 0x2C) = y;
                    AF(y, s32, 0x30)++;
                } else {
                    y = r1;
                    AF(r1, s32, 0x2C) = -1;
                    AF(y, u8 *, 0x24) = arg0;
                }
            }
        }
    }
    HideModel(arg0);
    PlaySoundId(0xA65, 0);
}

void func_sc02_035_801800C0(u8 *arg0) {
    u16 v = AF(arg0, u16, 0x70);

    if (v & 0x800) {
        if (v & 0x10) {
            AF(arg0, s16, 2) = 5;
            AF(arg0, u8, 0xC1) = 0;
            AF(arg0, s16, 0x5E) = 0;
            AF(arg0, s32, 0x1C) = 0x5A;
            AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
            AF(arg0, u16, 0x76) = AF(AF(arg0, u8 *, 0x78), u16, 0);
            AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
            AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = 0;
            AF(arg0, s16, 0xAA) = 0;
            UpdateModelZYX(arg0);
            return;
        }
    }
    DespawnActor(arg0);
}

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
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern u8 g_GroundNormal;
extern void HitPlayer();
extern SV8 D_sc02_035_80198E04[];

s32 func_sc02_035_8018016C(u8 *arg0, s32 arg1) {
    SV8 a;
    SV8 b;

    LocalToWorld(g_PlayerModel + 0x34, &D_sc02_035_80198E04[0], &a);
    LocalToWorld(g_PlayerModel + 0x34, &D_sc02_035_80198E04[1], &b);
    if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) == 0) {
        return 0;
    }
    HitPlayer(1, (AF(arg0, u16, 0x70) & 0xF) ? 0x2001 : 1, AF(AF(arg0, u8 *, 0x20), s16, 0x12), arg1, &b, &g_GroundNormal);
    return 1;
}

void func_sc02_035_8018023C(Mover *arg0) {
    SV a;
    SV b;
    s32 w;
    s32 *wp;
    u8 *p;
    s32 i;

    for (p = &g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x17F && arg0 != p) {
            if (DistSq((u8 *)arg0 + 4, p + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)arg0 + 4, p + 4), 0x41);
                b.vx = AF(p, s16, 6);
                b.vy = AF(p, s16, 0xA);
                b.vz = AF(p, s16, 0xE);
                b.vx += w;
                b.vz += w >> 16;
                a.vx = arg0->prev[0].h.i;
                a.vy = arg0->prev[1].h.i;
                a.vz = arg0->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(arg0);
                    return;
                }
                arg0->pos[0].h.i = b.vx;
                arg0->pos[1].h.i = b.vy;
                arg0->pos[2].h.i = b.vz;
                return;
            }
        }
    }
}

s32 func_sc02_035_801803A4(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &g_Actors;
    do {
        if ((AF(var_v1, u16, 0) == 0x17F) && !(AF(var_v1, u16, 0x70) & 0xF)) {
            var_a1 += 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10C);
    } while (var_a0 < 0x60);
    return var_a1 < 0xB;
}

s32 func_sc02_035_801803F8(s32 pos, s32 ang0, s32 dist, s32 k) {
    SV r;
    wMtx m;
    V4 v;
    s32 o;
    u8 *a;
    Rec801AC2F0 *e;
    s16 t;
    s16 h;
    s32 s;
    s32 u;
    s32 w;
    s32 x;
    s32 an = ang0;

    o = SpawnPropAt(0x41, pos);
    if (o == 0) {
        return 0;
    }
    t = rand();
    
    a = AF(o, u8 *, 0x20);
    AF(a, s32 *, 0x20) = &D_sc02_035_80198E14;
    e = &D_sc02_035_80198E20[k & 0xF];
    AF(a, u8, 0x27) = e->c;
    AF(a, u16, 0x28) = e->a;
    AF(a, u16, 0x2A) = e->b;
    if (k & 0x8000) {
        h = t % 512 + 0x400;
        AF(a, s16, 0x1A) = h;
        AF(a, s16, 0x18) = h;
        AF(o, s32, 0x34) = h;
    } else {
        { s16 g = t % 3072 + 0x400; AF(a, s16, 0x1A) = g; AF(a, s16, 0x18) = g; AF(o, s32, 0x34) = g; }
    }
    s = -1;
    if (t & 1) {
        s = 1;
    }
    x = t; u = s * (x % 128); w = s * (x % 768);
    r.vz = 0; v.y = 0; v.x = 0; v.z = dist;
    r.vx = u - 0x300; r.vy = an + w;
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
    AF(o, s32, 0x1C) = 0x2D;
    return o;
}

void func_sc02_035_801805FC(u8 *arg0) {
    D_sc02_035_80198E30[AF(arg0, u16, 2)]();
}

void func_sc02_035_80180638(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = func_sc02_035_801809E4(arg0, (s32) &D_800D3918, 0x11);
    if (!(temp_v0 & 0xFF)) {
        if (temp_v0 & 0x2000) {
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, s16, 2) = 4;
                return;
            }
            goto block_11;
        }
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
            if (AF(arg0, void *, 0x2C) != NULL) {
                AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x62;
            }
        }
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_v1 = AF(arg0, void *, 0x2C);
        if ((temp_v1 != NULL) && (temp_v1 != (void *)-1)) {
            AF(temp_v1, s32, 0x30) = (s32) (AF(temp_v1, s32, 0x30) - 1);
        }
block_11:
        FreeProp(arg0);
    }
}

void func_sc02_035_8018071C(s32 arg0) {
    func_sc02_035_80180C10(arg0);
    if (AF(arg0, s32, 0x30) == 0) {
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc02_035_80180770(s32 arg0) {
    SV a;
    SV b;
    u8 unused[0x10];
    u8 *t;

    if (func_sc02_035_80180B38(arg0, -0x18000) == 0) {
        FreeProp(arg0);
        return;
    }
    t = AF(arg0, u8 *, 0x2C);
    AF(arg0, s32, 0x14) = 0x18000;
    if (AF(arg0, s32, 0x1C) >= 0x150) {
        AF(t, s32, 0x30)--;
        FreeProp(arg0);
        return;
    }
    func_sc02_035_80180C10(arg0);
    func_sc02_035_801809E4(arg0, &D_800D3918, 0);
    a.vx = AF(arg0, s16, 6);
    a.vy = 0;
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(t, s16, 6);
    b.vy = 0;
    b.vz = AF(t, s16, 0xE);
    if (SVecDistSq(&a, &b) < 0x41) {
        AF(t, s32, 0x30)--;
        AF(arg0, s16, 2) = 5;
    }
    AF(arg0, s32, 0x1C)++;
}

void func_sc02_035_8018087C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeProp((s32) arg0);
    }
}

void func_sc02_035_801808B0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x2C) == -1) {
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc02_035_801808F0(s32 arg0) {
    func_sc02_035_80180C10(arg0);
    if (*AF(arg0, u16 *, 0x2C) == 0) {
        FreeProp(arg0);
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc02_035_80180948(u8 *arg0) {
    SpawnDef d;

    func_sc02_035_80180C10(arg0);
    if (++AF(arg0, s32, 0x1C) >= 0x1F) {
        d.x = AF(arg0, s16, 6);
        d.y = AF(arg0, s16, 0xA);
        d.z = AF(arg0, s16, 0xE);
        d.kind = 0x17F;
        *(u16 *)&d.unk8 = 0x8000;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0;
        d.unkC = 0x7FFF;
        SpawnActorFromDef(&d, AF(arg0, s32, 0x24));
        FreeProp(arg0);
    }
}

s32 func_sc02_035_801809E4(s32 arg0, SV *d, s32 arg2) {
    SV a;
    SV b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    a.vx += d->vx;
    a.vy += d->vy;
    a.vz += d->vz;
    MoveProp(arg0);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    b.vx += d->vx;
    b.vy += d->vy;
    b.vz += d->vz;
    r = CollidePath(&a, &b, arg2);
    b.vx -= d->vx;
    b.vy -= d->vy;
    b.vz -= d->vz;
    AF(arg0, s16, 6) = b.vx;
    AF(arg0, s16, 0xA) = b.vy;
    AF(arg0, s16, 0xE) = b.vz;
    if (r & 0x6000) {
        AF(arg0, s32, 0x14) = 0;
    }
    return r;
}

s32 func_sc02_035_80180B38(u8 *arg0, s32 arg1) {
    u8 unused[0x10];
    WMtx m;
    V4 v;
    u8 *p;

    p = AF(arg0, u8 *, 0x2C);
    if (AF(p, u16, 0) == 0) {
        return 0;
    }
    m = GsIDMATRIX;
    RotMatrixY(HeadingTo(arg0 + 4, p + 4), &m);
    v.y = 0;
    v.x = 0;
    v.z = arg1;
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
    return 1;
}

void func_sc02_035_80180C10(u8 *arg0) {
    s32 v;
    s32 a;
    u8 *p;
    s16 h;

    v = rsin((AF(arg0, s32, 0x1C) << 7) & 0x780);
    a = AF(arg0, s32, 0x34);
    p = AF(arg0, u8 *, 0x20);
    h = a - (((a >> 2) * v) >> 12);
    AF(p, s16, 0x1A) = h;
    AF(p, s16, 0x18) = h;
}

void func_sc02_035_80180C70(StageActor *arg0) {
    D_sc02_035_80198EC4[arg0->state]();
}

void func_sc02_035_80180CAC(StageActor *arg0) {
    arg0->ext1 = &D_sc02_035_80198E4C;
    arg0->ext0 = &D_sc02_035_80198E4C;
    arg0->workE0 = *(s32 *)arg0->ext0;
    arg0->state++;
}

void func_sc02_035_80180CD4(StageActor *arg0) {
    s32 *p;
    s32 f;
    s32 t;

    if (arg0->workE0 != 0) {
        if (--arg0->workE0 <= 0) {
            p = (s32 *)arg0->ext1;
            p += 2;
            f = *p;
            if (!(f & 0x40000000)) {
                if (f < 0) {
                    arg0->workE0 = 0;
                    return;
                }
            } else {
                p = (s32 *)arg0->ext0;
            }
            t = *p;
            arg0->ext1 = p;
            arg0->workE0 = t;
            QueueImage(p[1]);
        }
    }
}

void func_sc02_035_80180D54(StageActor *arg0) {
    UV4 a;
    UV4 b;
    u16 s;
    u8 *o;
    s16 t;
    u16 v;

    GiveItem(0xD);
    if (arg0->kind != 0) {
        b.x = a.x = (u16)arg0->pos[0].h.i;
        b.y = a.y = (u16)arg0->pos[1].h.i;
        b.z = a.z = (u16)arg0->pos[2].h.i;
        a.y -= 8;
        b.y += 8;
        if (!(CollidePath(&a, &b, 0) & 0x1F) && !(arg0->work100 & 0x8000)) {
            s = (u16)arg0->model->rot.vy;
            InitModel(arg0->model, &D_sc02_035_801A257C);
            SetScript(arg0, &D_sc02_035_801A9CC0);
            arg0->model->rot.vy = s;
            o = (u8 *)SpawnActorArg(0x12C, 1, arg0);
            if (o != 0) {
                if (arg0->pos[1].h.i >= 0x10) {
                    FreeActor(o);
                    return;
                }
                AF(AF(o, u8 *, 0x20), u16, 0x12) = s;
                SnapToGround(o);
                if (arg0->param == 5) {
                    v = (u16)arg0->work100;
                    AF(o, s16, 0x70) = 6;
                    AF(o, s16, 0xFE) = 1;
                    AF(o, u16, 0x100) = v;
                    do {
                        SpawnActorArg(0x12F, 5, o);
                        t = AF(o, s16, 0xFE) + 3;
                        AF(o, s16, 0xFE) = t;
                    } while (t < 0x10);
                    AF(o, s16, 0xFE) = 0;
                }
            }
        }
    }
}

void func_sc02_035_80180ED8(u8 *arg0) {
    s16 t;

    if (SetupActor(arg0, &D_sc02_035_8019C1E8[AF(arg0, s16, 0x70)]) == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    SpawnShadow(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc02_035_801A8BC8);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_8019C320;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc02_035_801A8490);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_8019C3C0;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc02_035_801A9B40);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_8019C408;
        break;
    case 4:
        SetScript(arg0, &D_sc02_035_801A8BC8);
        AF(arg0, s16, 2) = 0xD;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_8019C320;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc02_035_801A99C0);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc02_035_801A8BC8);
            AF(arg0, s16, 2) = 1;
        }
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_035_8019C320;
        AF(arg0, s16, 0xFE) = 1;
        do {
            SpawnActorArg(0x12F, 5, arg0);
            t = AF(arg0, s16, 0xFE) + 1;
            AF(arg0, s16, 0xFE) = t;
        } while (t < 6);
        AF(arg0, s16, 0xFE) = 0;
        break;
    }
    UpdateModelZYX(arg0);
}

void func_sc02_035_801810FC(u8 *arg0) {
    s32 vec[8];
    SV a;
    SV b;
    SV c;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 ax;
    s32 r;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, &D_sc02_035_801A8BC8);
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, s16, 0xFC)++;
    if (GroundDistSqTo(arg0, arg0 + 0x88) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = -(AF(arg0, s16, 0xFC) << 17) / 24;
    SetLocalVelocityXZ(arg0, vec);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    r = 0x30;
    a.vx = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.vy = AF(arg0, s16, 0xA) - 0x20;
    a.vz = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.vx = a.vx;
    b.vy = a.vy + 0x60;
    b.vz = a.vz;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    if (AF(arg0, s16, 0xFE) == 0 && TargetInSight(arg0, 0x200, 0x40000) == 1) {
        SetScript(arg0, &D_sc02_035_801A8538);
        AF(arg0, s16, 2) = 2;
        c.vx = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        c.vy = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        c.vz = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&c, &sxy, &p, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            x = ((s16 *)&sxy)[0];
            ax = x;
            if (x < 0) {
                ax = -x;
            }
            ax = (0xA0 - ax) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 16) {
                x = 15;
            }
            x <<= 8;
            PlaySoundId(0xA9B, (u16)(ax | 0x3000 | x));
        }
    }
    if (AF(arg0, s16, 0xFC) == 0x18) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_035_801814B0(u8 *arg0) {
    s32 v[4];
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    AF(arg0, s16, 0xFC)++;
    v[0] = 0;
    v[1] = 0;
    v[2] = -(AF(arg0, s16, 0xFC) << 17) / 36;
    SetLocalVelocityXZ(arg0, v);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = DistSqToTarget(arg0);
    if (t < 0x1001 && TargetInFront(arg0, 0x200) == 1) {
        if (!(rand() & 3)) {
            SetScript(arg0, &D_sc02_035_801A94C8);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc02_035_801A8E48);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc02_035_801A96D0);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_035_801816F0(u8 *arg0) {
    u8 unused[0x10];
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    u8 *q;
    s32 x;
    s32 a;

    q = arg0 + 0x88;
    if (GroundDistSqTo(arg0, q) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    SetLocalVelocityXZ(arg0, &D_sc02_035_8019C480);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    if (TargetInSight(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 7;
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            a = x;
            if (x < 0) {
                a = -x;
            }
            a = (0xA0 - a) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            PlaySoundId(0xA9B, (u16)(a | 0x3000 | x));
        }
    }
}

void func_sc02_035_80181958(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    SetLocalVelocityXZ(arg0, &D_sc02_035_8019C480);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = DistSqToTarget(arg0);
    if (t < 0x2401 && TargetInFront(arg0, 0x200) == 1) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, &D_sc02_035_801A9188);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc02_035_80181B00(u8 *arg0) {
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    s32 x;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xD) {
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            PlaySoundId(0x702, (u16)(x | 0x1000));
        }
    }
    if (DistSqToTarget(arg0) <= 0x24000) {
        if (++AF(arg0, s16, 0x102) >= 0x78) {
            if (!(AF(arg0, u16, 0x100) & 0x2000)) {
                SetScript(arg0, &D_sc02_035_801A9CD8);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc02_035_8019C1B8 | 0x40000000 | 0x20000000;
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0x100) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62 - 0x80) {
        AF(arg0, s16, 0xA) = y - 8;
    }
    SetLocalVelocityXZ(arg0, &D_sc02_035_8019C48C);
    MoveCollide(arg0);
}

void func_sc02_035_80181D4C(u8 *arg0) {
    s32 v[4];
    s32 d;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    v[0] = 0;
    v[1] = 0;
    d = AF(arg0, s32, 4) - g_PlayerPosX;
    v[2] = d;
    if (d > 0) {
        v[2] = -d;
    }
    d = AF(arg0, s32, 0xC) - D_80126B64;
    v[3] = d;
    if (d > 0) {
        v[3] = -d;
    }
    v[2] = (v[2] + v[3]) >> 4;
    SetLocalVelocityXZ(arg0, v);
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0xA) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62) {
        AF(arg0, s16, 0xA) = y - 8;
    } else if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x98) = 1;
    }
    MoveCollide(arg0);
}

void func_sc02_035_80181E98(StageActor *arg0) {
    u8 *p;
    s32 i;

    D_sc02_035_8019C4A4[arg0->state]();
    if (arg0->kind != 0 && ((u16)arg0->work100 & 0x1000)) {
        for (p = &g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x15E) {
                if (arg0->pos[0].h.i < AF(p, s16, 6) + 0xF0) {
                    arg0->pos[0].h.i = AF(p, s16, 6) + 0xF0;
                }
                return;
            }
        }
    }
}

void func_sc02_035_80181F50(StageActor *arg0) {
    s16 v[8];
    s32 r[2];
    s32 t;
    u8 *o;
    u8 *g;

    g = g_ActiveCamera;
    arg0->timer -= 1;
    v[1] = AF(g, s32, 0x5C);
    v[3] = AF(g, s32, 0x60);
    v[5] = AF(g, s32, 0x64);
    HeadingPitchTo(r, (u8 *)arg0 + 4, v);
    arg0->model->rot.vx = (r[0] + 0x400) & 0xFFF;
    arg0->model->scale.vx += 0x55;
    arg0->model->scale.vy += 0x55;
    t = arg0->timer;
    if (t == 0xF) {
        PlaySoundId(0xCBA, 0);
        t = arg0->timer;
    }
    if (t < 0x10) {
        if (t == 0) {
            FreeActor(arg0);
            return;
        }
        o = (u8 *) SpawnKind205(arg0, 0);
        if (o != 0) {
            AF(o, s16, 0x16) = -4;
            AF(o, s16, 0x12) = (rand() & 7) - 4;
            AF(o, s16, 0x1A) = (rand() & 7) - 4;
            AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
        }
    }
}

void func_sc02_035_801820A4(u8 *arg0) {
    D_sc02_035_8019C534[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0x14) == 1) {
            FreeActor((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        UpdateModelYXZ(arg0);
    }
}

void func_sc02_035_80182150(u8 *arg0) {
    D_sc02_035_8019C694[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer(arg0, 0x10, 0x16) == 1) {
            s16 *q = &g_PlayerHitKind;
            *q |= 0x200;
            FreeActor(arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc02_035_80182200(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x1F) {
        SetReactionStep(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc02_035_801A9A58);
    arg0->state = 1;
    arg0->hitState = 0xAA10;
    arg0->params = &D_sc02_035_8019C320;
    arg0->unkFC = 0;
    arg0->hitData = (s32)&D_sc02_035_8019C1B8 | 0x40000000 | 0x20000000;
    arg0->origin[0] = (u16)arg0->pos[0].h.i;
    arg0->origin[1] = (u16)arg0->pos[1].h.i;
    arg0->origin[2] = (u16)arg0->pos[2].h.i;
}

void func_sc02_035_801822E8(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x1F) {
        arg0->work100 |= 0x8000;
        SetReactionStep(arg0, 6);
        return;
    }
    if ((u8 *)arg0->script == &D_sc02_035_801A8010) {
        SetScript(arg0, &D_sc02_035_801A7E08);
        arg0->state = 0x14;
        arg0->stateCount = 1;
        arg0->workFE = 0;
        arg0->ext0 = &D_sc02_035_801A8BC8;
    } else {
        if (arg0->workFE != 0) {
            SetScript(arg0, &D_sc02_035_801A96D0);
        } else {
            SetScript(arg0, &D_sc02_035_801A8BC8);
        }
        arg0->state = 1;
    }
    arg0->unkFC = 0;
    arg0->hitState = 0xAA10;
}

void func_sc02_035_80182404(StageActor *arg0) {
    s32 temp_v0;

    if (arg0->kind != 0) {
        if (arg0->param == 4) {
            temp_v0 = SpawnActorArg(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) (u16)arg0->origin[0];
                AF(temp_v0, u16, 0x88) = (u16) (u16)arg0->origin[0];
                AF(temp_v0, u16, 0xE) = (u16) (u16)arg0->origin[2];
                AF(temp_v0, u16, 0x8C) = (u16) (u16)arg0->origin[2];
                AF(temp_v0, s16, 0xA) = (s16) ((u16)arg0->origin[1] - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) (u16)arg0->origin[1];
                UpdateModelZYX(temp_v0);
            }
        }
        if (IsPlayerHitBy((s32) arg0) != 0) {
            ClearPlayerHitBy((s32) arg0);
        }
        if ((s32)arg0->init != 0) {
            GainStat0FromActor((s32) arg0);
        }
        DespawnActor((s32) arg0);
    }
}

void func_sc02_035_801824E4(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        SetLocalVelocityXZ(arg0, &D_sc02_035_8019C19C);
        if (!(MoveOnGround(arg0) & 0x6000)) {
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            b = a;
            b.y += 8;
            if (TraceMap(1, &a, &b) != 0) {
                AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
                AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
                AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            }
        }
    }
}

void func_sc02_035_801825BC(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    TakeDamageAndRecoil();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    StopWithGravity((s32) arg0);
    PlayParamScript((s32) arg0, 8);
    PlaySoundId(0xA74, 0);
}

void func_sc02_035_80182624(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc02_035_80182660(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x19) {
        SetReactionStep(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc02_035_801A9B40);
    arg0->state = 6;
    arg0->hitState = 0xA810;
}

void func_sc02_035_80182704(Mover *arg0) {
    UV4 a;
    UV4 b;

    SetLocalVelocityXZ(arg0, &D_sc02_035_8019C19C);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        a.x = (u16)arg0->prev[0].h.i;
        a.y = (u16)arg0->prev[1].h.i;
        a.z = (u16)arg0->prev[2].h.i;
        b = a;
        b.y += 8;
        if (TraceMap(1, &a, &b) != 0) {
            arg0->pos[0].w = arg0->prev[0].w;
            arg0->pos[1].w = arg0->prev[1].w;
            arg0->pos[2].w = arg0->prev[2].w;
        }
    }
}

void func_sc02_035_801827C4(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    SetLocalVelocity((s32) arg0, (s32) &D_sc02_035_8019C1AC);
}

void func_sc02_035_801827F8(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc02_035_80182854(s32 arg0) {
    if (IsPlayerHitBy(arg0) != 0) {
        ClearPlayerHitBy(arg0);
    }
}

void func_sc02_035_8018288C(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_035_801A86A8, arg2);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 1;
    }
}

void func_sc02_035_801828E8(StageActor *arg0) {
    s32 temp_v1;

    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc02_035_801A86A8);
        arg0->state = 0x13;
        arg0->stateCount = 3;
        arg0->unkFC = 0;
        arg0->timer = 0x1E;
    }
    temp_v1 = arg0->index;
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_035_801829C0(StageActor *arg0) {
    s32 var_a0;

    if (arg0->index == 0x17) {
        if (arg0->param == 2) {
            var_a0 = 0x1A7;
        } else {
            PlaySoundId(0xCB3, 0);
            var_a0 = 0x19F;
        }
        SpawnActor(var_a0, (s32) arg0);
    }
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_035_801A86A8);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 0;
    }
}

void func_sc02_035_80182A54(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc02_035_801A93C0);
        arg0->stateCount = 7;
        arg0->state = 0x13;
        arg0->timer = 0x1E;
    }
    if (arg0->index == 0x17 && ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_035_80182B20(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        SetLocalVelocityXZ((s32) arg0, (s32) &D_sc02_035_8019C498);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc02_035_801A8490);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc02_035_8019C470, (s32) &D_sc02_035_8019C478, 0x14) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc02_035_80182BF8(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        PlaySoundId(0x702, 0x107F);
    }
    MoveCollide((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc02_035_801A8490);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_035_8019C1C8 | 0x40000000 | 0x20000000);
    }
}

void func_sc02_035_80182C94(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (MoveCollide((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_035_80182CEC(void) {
}

void func_sc02_035_80182CF4(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x10;
        SetScript(arg0, (s32) &D_sc02_035_801A8F50);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_035_801A96D0);
    arg0->state = 3;
    arg0->unkFC = 0;
    arg0->workFE = 1;
}

void func_sc02_035_80182D94(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_035_801A96D0);
        arg0->state = 3;
        arg0->unkFC = 0;
        return;
    }
    arg0->state = 4;
}

void func_sc02_035_80182DE8(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_035_8019C460, (s32) &D_sc02_035_8019C468) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x12;
        SetScript(arg0, (s32) &D_sc02_035_801A9290);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_035_801A9B40);
    arg0->state = 6;
}

void func_sc02_035_80182E7C(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_035_801A93C0);
        arg0->state = 6;
    } else {
        arg0->state = 8;
    }
}

void func_sc02_035_80182EC4(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->state = (u16) arg0->stateCount;
    }
}

void func_sc02_035_80182EEC(StageActor *arg0, s32 arg1, s32 arg2) {
    if ((arg0->animFlags & 0x4000) || (arg0->animTimer == 0)) {
        arg0->state = (u16) arg0->stateCount;
        SetScript((s32) arg0, arg0->ext0, arg2);
    }
}

void func_sc02_035_80182F38(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_035_8019C4F8);
    SetScript((s32) arg0, (s32) &D_sc02_035_8019C510);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc02_035_8019C528);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_035_80183024(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (MoveCollide(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        PlaySoundId(0xCB4, 0);
    }
}

void func_sc02_035_801830A8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_035_8019C540);
    SetScript((s32) arg0, (s32) &D_sc02_035_8019C600);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc02_035_8019C688);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_035_801831B4(s32 arg0) {
    if (MoveCollide(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_035_801831EC(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v1 = arg0->model;
    temp_v1->scale.vx = (u16) ((u16)temp_v1->scale.vx + 0x200);
    temp_v1_2 = arg0->model;
    temp_v1_2->scale.vy = (u16) ((u16)temp_v1_2->scale.vy - 0x200);
    if ((s16) (u16)arg0->model->scale.vy < 0x401) {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc02_035_80183258(StageActor *arg0) {
    s32 temp_v0;

    D_sc02_035_801B977C[arg0->state]();
    if (arg0->kind != 0) {
        temp_v0 = arg0->workE8 + 1;
        arg0->workE8 = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc02_035_80183F2C((s32) arg0);
        }
    }
}

void func_sc02_035_801832D4(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_035_801B9710) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        arg0->params = (s32 *) &D_sc02_035_801B9754;
        arg0->reactOpts |= 1;
        arg0->workE4 = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc02_035_801BBC6C);
        func_80143994(arg0, 0x1000);
        if ((u16)arg0->param & 0x10) {
            arg0->state = 3;
        } else {
            arg0->state = 1;
        }
    }
}

void func_sc02_035_80183394(u8 *arg0) {
    s16 r;

    r = rand();
    AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC);
    StopMotion(arg0);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s32, 0x1C) = (s16)(r % 1800) + 0xE10;
    } else {
        AF(arg0, s32, 0x1C) = (s16)(r % 60) + 0x78;
    }
    AF(arg0, s16, 0xFE) = r % 32 + 10;
    AF(arg0, s16, 2) = 2;
}

void func_sc02_035_801834BC(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc02_035_80183E68(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4));
    MoveCollidePassable(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && TickTimer(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc02_035_80183F14(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc02_035_8018362C(u8 *arg0) {
    s32 v;
    s32 w;
    s32 t;
    s32 d;
    s32 c;

    StopMotion(arg0);
    AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
    AF(arg0, s16, 0xFE) = rand() % 32 + 10;
    AngleToVec2(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
    w = v;
    AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
    AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
    if (AF(arg0, u16, 0x70) & 0x20) {
        d = rand() % 256;
        c = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
    } else {
        AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc02_035_801837C0(u8 *arg0) {
    HV16 p;
    u8 gap[8];
    s32 v;
    s32 w;
    s32 d;
    s32 c;

    p.x = AF(arg0, s16, 0x102);
    p.z = AF(arg0, s16, 0x106);
    p.y = AF(arg0, s16, 0x104);
    if (!(AF(arg0, u16, 0x70) & 0x20)) {
        p.y += D_80126B62;
    } else {
        p.y += AF(arg0, s16, 0x8A);
    }
    HeadingPitchTo(&v, arg0 + 4, &p);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), w >> 16, AF(arg0, s16, 0xFE));
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4));
    MoveCollidePassable(arg0);
    if (TickTimer(arg0) != 0) {
        AF(arg0, s32, 0x1C) = rand() % 128 + 0x80;
        AF(arg0, s16, 0xFE) = rand() % 32 + 10;
        AngleToVec2(&v, rand() % 4096, rand() % AF(arg0, s32, 0xDC));
        w = v;
        AF(arg0, s16, 0x102) = AF(arg0, s16, 0x88) + w;
        AF(arg0, s16, 0x106) = AF(arg0, s16, 0x8C) + (w >> 16);
        if (AF(arg0, u16, 0x70) & 0x20) {
            d = rand() % 256;
            c = AF(arg0, s16, 0xFC);
            AF(arg0, s16, 0x104) = (rand() & 1) ? c + d : c - d;
        } else {
            AF(arg0, s16, 0x104) = AF(arg0, s16, 0xFC) - rand() % 256;
        }
    }
}

void func_sc02_035_80183A14(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    AngleToVec2(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc02_035_80183E68(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    StopMotion(arg0);
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_035_80183B20(u8 *arg0) {
    s32 sp10;
    s32 one;
    s32 w;
    s16 h;
    u8 *q;

    one = 1;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (MoveCollidePassable(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
            return;
        }
        h = AF(arg0, s16, 0x100);
        if (h < AF(arg0, s16, 0xA)) {
            AF(arg0, s16, 0xA) = h;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, u16, 0x34)++;
        }
        return;
    case 1:
        h = TurnStepToTarget(arg0, 6);
        q = AF(arg0, u8 *, 0x20);
        AF(q, u16, 0x12) += h;
        if (TickTimer(arg0, q) == 0) {
            return;
        }
        if (!(rand() & 1)) {
            AF(arg0, u16, 0x34)++;
            StopMotion(arg0);
            AF(arg0, s32, 0x1C) = 0x20;
            PlaySoundId(0x6FF, 0);
            return;
        }
        break;
    case 2:
        func_sc02_035_80183E68(&sp10, arg0, &D_sc02_035_801B974C);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        MoveCollidePassable(arg0);
        if (func_sc02_035_80183E3C(arg0) != one && TickTimer(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc02_035_80183CBC(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if ((TickTimer() != 0) && (IsOnScreen(arg0, 0xA000C8) == 0)) {
        if (AF(arg0, u16, 0x70) & 0x10) {
            AF(arg0, s16, 2) = 3;
        } else {
            AF(arg0, s16, 2) = 1;
        }
        AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 0x76) = (u16) AF(AF(arg0, void *, 0x78), u16, 0);
        AF(temp_v1, s16, 0x1C) = 0x1000;
        AF(temp_v1, s16, 0x1A) = 0x1000;
        AF(temp_v1, s16, 0x18) = 0x1000;
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0x10);
        ShowModel(arg0);
        SetScript(arg0, (s32) &D_sc02_035_801BBC6C);
    }
}

void func_sc02_035_80183D78(StageActor *arg0) {
    ModelObj *temp_v1;

    GainStat0FromActor(arg0);
    if (arg0->param & 0x8000) {
        temp_v1 = arg0->model;
        arg0->state = 7;
        arg0->react = 0;
        arg0->timer = 0x40;
        arg0->hitCode = 0;
        arg0->hitState = 0;
        temp_v1->rot.vy = 0;
        temp_v1->rot.vx = 0;
        HideModel(arg0);
        arg0->pos[0].h.i = (u16) (u16)arg0->origin[0];
        arg0->pos[1].h.i = (u16) (u16)arg0->origin[1];
        arg0->pos[2].h.i = (u16) (u16)arg0->origin[2];
        return;
    }
    FreeActor(arg0);
}

void func_sc02_035_80183E04(StageActor *arg0) {
    arg0->state = 1;
    arg0->hitState = (u16) arg0->init->hitState;
    SetScript((s32) arg0, (s32) &D_sc02_035_801BBC6C);
}

s32 func_sc02_035_80183E3C(StageActor *arg0) {
    return ActorSegmentDamagesPlayer(arg0, (s32) &D_sc02_035_801B979C, (s32) (&D_sc02_035_801B979C + 8), 5) != 0;
}

s32 func_sc02_035_80183E68(s32 *arg0, u8 *arg1, u16 *arg2) {
    s16 v[8];
    s32 r[2];
    u16 *p;
    s16 *g;

    g = &g_PlayerTargetOff;
    if (*g == 0) {
        p = (u16 *) (g - 3);
        AF(arg1, s32, 0xE0) = 0;
    } else {
        p = (u16 *) (arg1 + 0x88);
        AF(arg1, s32, 0xE0) = 1;
    }
    v[1] = p[0] + arg2[0];
    v[3] = p[1] + arg2[1];
    AF(arg1, s16, 0x100) = v[3];
    v[5] = p[2] + arg2[2];
    HeadingPitchTo(r, arg1 + 4, v);
    *arg0 = r[0];
    return (s32) arg0;
}

s32 func_sc02_035_80183F14(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc02_035_80183F2C(Mover *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = DistSqToPlayer(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    PlaySoundId(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc02_035_80183F98(StageActor *arg0) {
    D_sc02_035_801BBE9C[arg0->state]();
}

void func_sc02_035_80183FD4(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc02_035_801BBDBC, D_sc02_035_801BBDBE, D_sc02_035_801BBDC0);
        p = &D_sc02_035_801BBDC4;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc02_035_801BBDF4, D_sc02_035_801BBDF6, D_sc02_035_801BBDF8);
        p = &D_sc02_035_801BBDFC;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc02_035_801BBE2C, D_sc02_035_801BBE2E, D_sc02_035_801BBE30);
        p = &D_sc02_035_801BBE34;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc02_035_801BBDBC, D_sc02_035_801BBDBE, D_sc02_035_801BBDC0);
        p = &D_sc02_035_801BBDC4;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc02_035_801BBE64, D_sc02_035_801BBE66, D_sc02_035_801BBE68);
        p = &D_sc02_035_801BBE6C;
        SetState(arg0, 5);
        break;
    }
    g_Lights.a = p->a;
    g_Lights.b = p->b;
    g_Lights.c = p->c;
    ApplyLight(0, &g_Lights.a);
    ApplyLight(1, &g_Lights.b);
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_035_801841C8(StageActor *arg0) {
    g_Lights.c = D_sc02_035_801BBDE4;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_035_80184278(StageActor *arg0) {
    g_Lights.c = D_sc02_035_801BBE1C;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_035_80184328(StageActor *arg0) {
    g_Lights.a = D_sc02_035_801BBE34.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc02_035_801843D8(void) {
}

void func_sc02_035_801843E0(StageActor *arg0) {
    g_Lights.a = D_sc02_035_801BBE6C.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}
