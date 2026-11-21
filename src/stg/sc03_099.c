#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_099_8017BE9C(void) {
}

void func_sc03_099_8017BEA4(void) {
}

void func_sc03_099_8017BEAC(void) {
}

void func_sc03_099_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_099_80186EAC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_099_8017D04C(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_099_8017D074(void);
extern void func_800D1EBC();
extern void (*D_sc03_099_80186EC0[])();
extern u8 D_sc03_099_80186ECC;
extern void StartPlayerActionScript();
extern u8 D_sc03_099_80186ED0;
extern void func_sc03_099_8017D1D0();
extern void (*D_sc03_099_80186ED4[])();
extern void func_sc03_099_8017D54C();
extern void (*D_sc03_099_801989D8[])();
extern void (*D_sc03_099_80198A8C[])();
extern void (*D_sc03_099_8019A980[])();
extern void (*D_sc03_099_801BC61C[])();
extern void (*D_sc03_099_801BC760[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_099_80186F24[];
extern s32 func_8013B7F4();
extern s32 SpawnActorArg();
extern u8 D_sc03_099_8018374C;
extern u8 D_sc03_099_801984EC;
extern u8 D_sc03_099_8019850C;
extern s32 SetupActor();
extern u8 D_sc03_099_801985D0;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();
extern void TakeDamageAndRecoil();
extern void StopWithGravity();
extern void PlayParamScript();
extern s32 IsPlayerHitBy();
extern void ClearPlayerHitBy();
extern u8 D_sc03_099_8019F0C8;
extern void SetLocalVelocity();
extern u8 D_sc03_099_801AB5C4;
extern void SpawnActor();
extern u8 D_sc03_099_8019F0E4;
extern u8 D_sc03_099_801AB3AC;
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s32 g_PlayerAttacker;
extern u8 D_sc03_099_8019F37C;
extern u8 D_sc03_099_8019F384;
extern u8 D_sc03_099_801ABE6C;
extern u8 D_sc03_099_801AC5EC;
extern s32 ActorSegmentHitsPlayer();
extern u8 D_sc03_099_801AC1AC;
extern u8 D_sc03_099_801ACA5C;
extern void FreeActor();
extern void NextState();
extern s8 D_sc03_099_801BF2EC;
extern void func_sc03_099_80182A50();

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
extern void (*D_sc03_099_8019CA78[])();
extern void func_sc03_099_801802C4();
extern void GainStat0FromActor();
extern void HideModel();
extern u8 D_sc03_099_8019EF68;
extern u8 D_sc03_099_8019CA98;
extern s32 ActorSegmentDamagesPlayer();
extern s32 func_sc03_099_801802AC();
extern u8 D_80078EC1;
extern s32 DistSqToPlayer();

extern void (*D_sc03_099_8019AB1C[])();
extern u8 D_sc03_099_8019A91C;
extern void SetModelCullBox();

extern u8 D_sc03_099_8019808C;
extern s32 D_sc03_099_801BF198;
extern s32 D_sc03_099_801BF19C;
extern s32 D_sc03_099_801BF1A0;
extern s32 D_sc03_099_801BF1A4;
extern s32 D_sc03_099_801BF3D4;
extern s32 D_sc03_099_80186EE4[];
extern void func_sc03_099_8017D688();
extern void QueueImage();

extern void RejectSpawn();
extern s32 AllocActorModel();
extern void func_8001CA1C();
extern SV8 D_sc03_099_801988A8[];
extern u8 D_sc03_099_8019860C;
extern u8 D_sc03_099_801986CC;
extern u8 D_sc03_099_80198754;
extern u8 D_sc03_099_80198814;
extern u8 D_sc03_099_801988F8;
extern u8 D_sc03_099_8019891C;
extern u8 D_sc03_099_80198908;
extern u8 D_sc03_099_80198914;
extern void UpdateModelZYX();
extern void DespawnActor();


extern void (*D_sc03_099_8019F450[])();
extern s32 ActorTouchesPlayer();
extern void UpdateModelYXZ();

extern u8 D_sc03_099_80187008;
extern u8 D_sc03_099_801871D4;
s32 func_sc03_099_8017D4FC(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc03_099_801871E8;
extern u8 D_sc03_099_80187328;
extern void *g_PlayerModel;
extern u8 D_sc03_099_8019F414;
extern u8 D_sc03_099_8019F42C;
extern u8 D_sc03_099_8019F444;
extern u8 D_sc03_099_8019F45C;
extern u8 D_sc03_099_8019F51C;
extern u8 D_sc03_099_8019F5A4;

typedef struct { s16 vx, vy, vz, pad; } SV;
extern void HeadingPitchTo();
extern s32 SpawnKind205();
extern u8 *g_ActiveCamera;
extern u8 D_sc03_099_801AAD24;
extern u8 D_sc03_099_801AAF2C;
extern u8 D_sc03_099_801ABAE4;
extern s32 CollidePath();
extern void SetReactionStep();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_099_8017BEBC(u8 *obj) {
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

void func_sc03_099_8017CD9C(void) {
    g_SpawnListFixed = &D_sc03_099_80187008;
    g_SpawnListRanged = &D_sc03_099_801871D4;
    func_sc03_099_8017D4FC(0);
}

void func_sc03_099_8017CDDC(void) {
    g_SpawnListFixed = &D_sc03_099_801871E8;
    g_SpawnListRanged = &D_sc03_099_80187328;
    func_sc03_099_8017D4FC(1);
}

void func_sc03_099_8017CE1C(u8 *arg0) {
    D_sc03_099_80186EAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_099_8017CE58(u8 *arg0) {
    func_sc03_099_8017D04C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_099_8017CE9C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc03_099_8017CEC0(u8 *arg0) {
    func_sc03_099_8017D074();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_099_8017CF00(u8 *arg0) {
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

void func_sc03_099_8017CF7C(void) {
    func_800D1EBC();
}

void func_sc03_099_8017CF9C(u8 *arg0) {
    D_sc03_099_80186EC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_099_8017CFD8(u8 *arg0) {
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

void func_sc03_099_8017D04C(void) {
    StartPlayerActionScript((s32) &D_sc03_099_80186ECC, 0x01000000);
}

void func_sc03_099_8017D074(void) {
    StartPlayerActionScript((s32) &D_sc03_099_80186ED0, 0x01000000);
}

void func_sc03_099_8017D09C(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_099_8017D1D0, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_099_8017D1D0((s32) &g_Camera);
}

void func_sc03_099_8017D134(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_099_8017D1D0, 1);
    SnapCamera((s32) &g_Camera);
    func_sc03_099_8017D1D0((s32) &g_Camera);
}

void func_sc03_099_8017D1D0(s32 arg0) {
    D_sc03_099_80186ED4[AF(arg0, u8, 4)]();
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 g_Actors;
extern VoidFn D_sc03_099_80198604[];
extern s32 HeadingTo();
extern s32 PathHitsModel();
extern void GiveItem();
extern void SnapToGround();
extern u8 D_sc03_099_801A5498;
extern u8 D_sc03_099_801ACBDC;
extern void InitModel();
extern s32 TurnStepToTarget();
extern s32 SetLocalVelocityXZ();
extern u8 D_sc03_099_8019F39C;
extern u8 D_sc03_099_801AC0A4;
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
extern u8 D_sc03_099_8019F0D4;
extern u8 D_sc03_099_8019F3A8;
extern u8 D_sc03_099_801ACBF4;
extern s16 D_sc03_099_801BC680;
extern s16 D_sc03_099_801BC682;
extern s16 D_sc03_099_801BC684;
extern Blk30 D_sc03_099_801BC688;
extern s16 D_sc03_099_801BC6B8;
extern s16 D_sc03_099_801BC6BA;
extern s16 D_sc03_099_801BC6BC;
extern Blk30 D_sc03_099_801BC6C0;
extern s16 D_sc03_099_801BC6F0;
extern s16 D_sc03_099_801BC6F2;
extern s16 D_sc03_099_801BC6F4;
extern Blk30 D_sc03_099_801BC6F8;
extern s16 D_sc03_099_801BC728;
extern s16 D_sc03_099_801BC72A;
extern s16 D_sc03_099_801BC72C;
extern Blk30 D_sc03_099_801BC730;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void SetState();
extern void ApplyLight();

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc03_099_80198540[];
extern u16 D_sc03_099_80198568[];
extern u16 D_sc03_099_80198590[];
extern VoidFn D_sc03_099_801985B8[];
extern void PlaySoundFor();
extern R34 D_sc03_099_8019F104[];
extern u8 D_sc03_099_8019F23C;
extern u8 D_sc03_099_8019F2DC;
extern u8 D_sc03_099_8019F324;
extern u8 D_sc03_099_801AC8DC;
extern void SpawnShadow();

extern s32 TickTimer();
extern void SetForwardVelocity();
extern s32 func_sc03_099_80180200();
extern s32 MoveCollidePassable();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void StopMotion();
extern void AngleToVec2();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_099_801ABD64;
extern u8 D_sc03_099_801AC3E4;

extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern SV4 D_sc03_099_801BC640;
extern SV4 D_sc03_099_801BC648;
extern SV4 D_sc03_099_801BC650;
extern SV4 D_sc03_099_801BC658;
extern SV4 D_sc03_099_801BC660;
extern SV4 D_sc03_099_801BC668;
extern SV4 D_sc03_099_801BC670;
extern SV4 D_sc03_099_801BC678;
extern s32 GetCameraHeading();
extern void PosToSVec();

typedef struct { u16 a, b, c, d; } U16x4;
extern u8 D_sc03_099_8019A9C8;
extern U16x4 D_sc03_099_8019AACC[];
extern s32 SetupActorTrans();

extern void SpawnKind1C();
extern u8 D_sc03_099_801AB454;

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
extern u8 D_sc03_099_80186EDC[];
extern s32 GetObjPadPressed();
extern void func_sc03_099_8017D364();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

void func_sc03_099_8017D20C(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_099_80186EDC)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc03_099_8017D364((s32) arg0, (s32) &v);
}

extern u8 D_sc03_099_8019CA48;

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
typedef struct { s32 a; s32 b; } P8;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 D_8012704C;
extern VoidFn D_sc03_099_8019892C[];
extern s16 D_80126CB6;
extern u8 D_sc03_099_8019889C;
extern s32 HeadingToTarget();
extern s32 HeadingToSV();
extern s16 D_sc03_099_8019899E[];
extern u8 D_sc03_099_80198964;
extern u16 D_sc03_099_80198998[];
extern u16 D_sc03_099_8019899A[];
extern u16 D_sc03_099_8019899C[];
extern u8 D_sc03_099_801989E4;
extern u8 D_sc03_099_80198A44;
extern u8 D_sc03_099_8019A950;
extern void UpdateModelRot();
extern u8 D_sc03_099_8019CA0C;
extern u8 D_sc03_099_8019CA50;
extern void func_80143994();
extern void ShowModel();
extern s32 IsOnScreen();
extern s16 g_PlayerTargetOff;
extern VoidFn D_sc03_099_8019F3C0[];
extern VoidFn D_sc03_099_8019F5B0[];
extern u8 D_sc03_099_801AC974;
extern u8 D_sc03_099_8019F0B8;
extern void func_80153C74();
extern u8 D_sc03_099_801AC2DC;
extern u8 D_sc03_099_8019F38C;
extern u8 D_sc03_099_8019F394;
extern u8 D_sc03_099_8019F3B4;
extern SV4 D_sc03_099_801BC62C;
extern void func_sc03_099_80182998();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void SpawnActorFromDef();
extern u8 D_sc03_099_801BF2E8[];
extern void SetShapeCircle();
extern void func_8001CD50();
extern s32 AllocActorSprite();
extern void func_sc03_099_80182DDC();
extern u8 D_sc03_099_801BF1A8[];
extern s32 func_sc03_099_80182E64();
extern s32 ProjectPoint();
extern V16 D_sc03_099_801BC6A8;
extern s32 D_800A5EB0;
extern V16 D_sc03_099_801BC6E0;
extern s32 D_800A5E90;

extern s16 D_sc03_099_80186EE0[];

void func_sc03_099_8017D2AC(u8 *arg0) {
    B8 v;
    u8 t;
    s16 lim;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_099_80186EE0[t];
    }
    v = *(B8 *)&g_CameraFocus;
    lim = -0x180; if (AF(&v, s16, 2) > lim) AF(&v, s16, 2) = lim;
    func_sc03_099_8017D364((s32) arg0, (s32) &v);
}

void func_sc03_099_8017D364(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_099_8017D4FC(s32 arg0) {
    return func_8013B7F4(D_sc03_099_80186F24[arg0], 0);
}

void func_sc03_099_8017D52C(s32 arg0) {
    func_sc03_099_8017D54C(arg0);
}

void func_sc03_099_8017D54C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_099_801BF3D4) {                  /* irregular */
    case 0:
        D_sc03_099_801BF198 = 1;
        D_sc03_099_801BF19C = 0;
        D_sc03_099_801BF1A0 = 1;
        D_sc03_099_801BF1A4 = 1;
        D_sc03_099_801BF3D4 = 1;
        return;
    case 1:
        temp_v0 = D_sc03_099_801BF198 - 1;
        D_sc03_099_801BF198 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_099_801BF198 = 2;
            func_sc03_099_8017D688((s32) &D_sc03_099_8019808C, D_sc03_099_801BF19C * 6);
            D_sc03_099_801BF19C = (D_sc03_099_801BF19C + 1) & 7;
        }
        temp_v0_2 = D_sc03_099_801BF1A0 - 1;
        D_sc03_099_801BF1A0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_099_801BF1A0 = 8;
            QueueImage(D_sc03_099_80186EE4[D_sc03_099_801BF1A4]);
            D_sc03_099_801BF1A4 = (D_sc03_099_801BF1A4 + 1) & 0xF;
        }
        return;
    }
}

void func_sc03_099_8017D688(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

s32 func_sc03_099_8017D6E8(void) {
    if (D_8012704C == 0) {
        return 0x34;
    }
    return 0x46;
}

void func_sc03_099_8017D708(u8 *arg0) {
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
        a.x = D_sc03_099_80198540[i];
        a.z = D_sc03_099_80198540[i + 1];
        b.x = D_sc03_099_80198540[i + 2];
        b.z = D_sc03_099_80198540[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_099_80198568[i];
        a.z = D_sc03_099_80198568[i + 1];
        b.x = D_sc03_099_80198568[i + 2];
        b.z = D_sc03_099_80198568[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_099_80198590[i];
        a.z = D_sc03_099_80198590[i + 1];
        b.x = D_sc03_099_80198590[i + 2];
        b.z = D_sc03_099_80198590[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc03_099_801985B8[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_099_8017D9A0(StageActor *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc03_099_80198604[arg0->state]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = HeadingTo((u8 *)arg0 + 4, p + 4);
            if (arg0->parent->unkFC < 0) {
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
            if (PathHitsModel(arg0->model, arg0->hitData, &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_099_8017DB28(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198754);
        SetScript(arg0, &D_sc03_099_80198814);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_099_801988F8;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019891C;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_099_801985D0;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198754);
        SetScript(arg0, &D_sc03_099_80198814);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_80198908);
        SetScript(arg0, &D_sc03_099_80198914);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_099_8019860C);
        SetScript(arg0, &D_sc03_099_801986CC);
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

void func_sc03_099_8017DFD4(StageActor *arg0) {
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

void func_sc03_099_8017E168(StageActor *arg0) {
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

void func_sc03_099_8017E518(u8 *arg0) {
    s32 temp_v0;

    D_sc03_099_8019892C[AF(arg0, u16, 2)]();
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

void func_sc03_099_8017E604(u8 *arg0) {
    D_sc03_099_801989D8[AF(arg0, u16, 2)]();
}

void func_sc03_099_8017E640(u8 *arg0) {
    D_sc03_099_80198A8C[AF(arg0, u16, 2)]();
}

void func_sc03_099_8017E67C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_099_8017E694(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_099_8019850C) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_099_801984EC;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_099_8018374C);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc03_099_8017E738(StageActor *arg0) {
    ModelObj *temp_a1;

    temp_a1 = arg0->model;
    temp_a1->rot.vy = (u16) ((u16)temp_a1->rot.vy + (u16)arg0->unkFC);
}

void func_sc03_099_8017E754(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc03_099_801985D0) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc03_099_801984EC;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_099_8018374C, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc03_099_8017E7D8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc03_099_8017E814(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_099_8017E844(s32 arg0) {
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

void func_sc03_099_8017E8C8(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc03_099_8019889C);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_099_8017E98C(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_099_801988A8[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_099_8017EA6C(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_099_8017EADC(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc03_099_8019889C);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_099_8017EBB8(void) {
}

void func_sc03_099_8017EBC0(StageActor *arg0) {
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

void func_sc03_099_8017EC78(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_099_80198964) != 0) {
        SetScript(arg0, (s32) &D_sc03_099_8018374C);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc03_099_80198998[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc03_099_8019899A[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc03_099_8019899C[arg0->unkFC * 4];
        arg0->timer = D_sc03_099_8019899E[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc03_099_8017ED3C(s32 arg0) {
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

void func_sc03_099_8017ED90(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_099_8019899E[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc03_099_8017EE0C(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_099_801989E4);
    SetScript(arg0, &D_sc03_099_80198A44);
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

void func_sc03_099_8017EEF0(u8 *arg0) {
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

void func_sc03_099_8017EFBC(u8 *o) {
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

void func_sc03_099_8017F094(u8 *arg0) {
    D_sc03_099_8019A980[AF(arg0, u16, 2)]();
}

void func_sc03_099_8017F0D0(StageActor *arg0) {
    if (SetupActorTrans(arg0, &D_sc03_099_8019A9C8 + ((u16)arg0->param & 0xF) * 0x34) != 0) {
        SetScript(arg0, &D_sc03_099_8018374C);
        arg0->targetClass = 0;
        arg0->model->unk04 |= 0x8040;
        arg0->workFE = D_sc03_099_8019AACC[arg0->unkFC].a;
        arg0->work100 = D_sc03_099_8019AACC[arg0->unkFC].b;
        arg0->work102 = D_sc03_099_8019AACC[arg0->unkFC].c;
        arg0->work104 = D_sc03_099_8019AACC[arg0->unkFC].d;
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

void func_sc03_099_8017F224(StageActor *arg0) {
    D_sc03_099_8019AB1C[arg0->state]();
    CarryPlayer((s32) arg0);
}

void func_sc03_099_8017F274(StageActor *arg0) {
    u16 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_099_8019A91C) != 0) {
        SetScript(arg0, (s32) &D_sc03_099_8018374C);
        arg0->state = 1;
        arg0->targetClass = 8;
        SetModelCullBox(arg0->model, 0x104, 0xDC);
        temp_v1 = (u16)arg0->unkFC;
        arg0->unkFC = 0x60U;
        arg0->workFE = temp_v1;
    }
}

void func_sc03_099_8017F2EC(u8 *arg0) {
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
        if (ActorSegmentDamagesPlayer(arg0, &D_sc03_099_8019A950 + i * 8, &D_sc03_099_8019A950 + i * 8 + 8, 0x30) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
}

void func_sc03_099_8017F3EC(StageActor *arg0) {
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

void func_sc03_099_8017F480(StageActor *arg0) {
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

void func_sc03_099_8017F538(StageActor *arg0) {
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

void func_sc03_099_8017F5F0(StageActor *arg0) {
    s32 temp_v0;

    D_sc03_099_8019CA78[arg0->state]();
    if (arg0->kind != 0) {
        temp_v0 = arg0->workE8 + 1;
        arg0->workE8 = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_099_801802C4((s32) arg0);
        }
    }
}

void func_sc03_099_8017F66C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_099_8019CA0C) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        arg0->params = (s32 *) &D_sc03_099_8019CA50;
        arg0->reactOpts |= 1;
        arg0->workE4 = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc03_099_8019EF68);
        func_80143994(arg0, 0x1000);
        if ((u16)arg0->param & 0x10) {
            arg0->state = 3;
        } else {
            arg0->state = 1;
        }
    }
}

void func_sc03_099_8017F72C(u8 *arg0) {
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

void func_sc03_099_8017F854(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc03_099_80180200(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4));
    MoveCollidePassable(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && TickTimer(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc03_099_801802AC(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc03_099_8017F9C4(u8 *arg0) {
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

void func_sc03_099_8017FB58(u8 *arg0) {
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

void func_sc03_099_8017FDAC(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    AngleToVec2(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc03_099_80180200(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    StopMotion(arg0);
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc03_099_8017FEB8(u8 *arg0) {
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
        func_sc03_099_80180200(&sp10, arg0, &D_sc03_099_8019CA48);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        MoveCollidePassable(arg0);
        if (func_sc03_099_801801D4(arg0) != one && TickTimer(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc03_099_80180054(s32 arg0) {
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
        SetScript(arg0, (s32) &D_sc03_099_8019EF68);
    }
}

void func_sc03_099_80180110(StageActor *arg0) {
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

void func_sc03_099_8018019C(StageActor *arg0) {
    arg0->state = 1;
    arg0->hitState = (u16) arg0->init->hitState;
    SetScript((s32) arg0, (s32) &D_sc03_099_8019EF68);
}

s32 func_sc03_099_801801D4(StageActor *arg0) {
    return ActorSegmentDamagesPlayer(arg0, (s32) &D_sc03_099_8019CA98, (s32) (&D_sc03_099_8019CA98 + 8), 5) != 0;
}

s32 func_sc03_099_80180200(s32 *arg0, u8 *arg1, u16 *arg2) {
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

s32 func_sc03_099_801802AC(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_099_801802C4(Mover *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = DistSqToPlayer(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    PlaySoundId(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc03_099_80180330(StageActor *arg0) {
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
            InitModel(arg0->model, &D_sc03_099_801A5498);
            SetScript(arg0, &D_sc03_099_801ACBDC);
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

void func_sc03_099_801804B4(u8 *arg0) {
    s16 t;

    if (SetupActor(arg0, &D_sc03_099_8019F104[AF(arg0, s16, 0x70)]) == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    SpawnShadow(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc03_099_801ABAE4);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019F23C;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc03_099_801AB3AC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019F2DC;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc03_099_801ACA5C);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019F324;
        break;
    case 4:
        SetScript(arg0, &D_sc03_099_801ABAE4);
        AF(arg0, s16, 2) = 0xD;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019F23C;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc03_099_801AC8DC);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc03_099_801ABAE4);
            AF(arg0, s16, 2) = 1;
        }
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc03_099_8019F23C;
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

void func_sc03_099_801806D8(u8 *arg0) {
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
        SetScript(arg0, &D_sc03_099_801ABAE4);
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
        SetScript(arg0, &D_sc03_099_801AB454);
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

void func_sc03_099_80180A8C(u8 *arg0) {
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
            SetScript(arg0, &D_sc03_099_801AC3E4);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc03_099_801ABD64);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc03_099_801AC5EC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_099_80180CCC(u8 *arg0) {
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
    SetLocalVelocityXZ(arg0, &D_sc03_099_8019F39C);
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

void func_sc03_099_80180F34(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    SetLocalVelocityXZ(arg0, &D_sc03_099_8019F39C);
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
        SetScript(arg0, &D_sc03_099_801AC0A4);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_099_801810DC(u8 *arg0) {
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
                SetScript(arg0, &D_sc03_099_801ACBF4);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc03_099_8019F0D4 | 0x40000000 | 0x20000000;
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
    SetLocalVelocityXZ(arg0, &D_sc03_099_8019F3A8);
    MoveCollide(arg0);
}

void func_sc03_099_80181328(u8 *arg0) {
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

void func_sc03_099_80181474(StageActor *arg0) {
    u8 *p;
    s32 i;

    D_sc03_099_8019F3C0[arg0->state]();
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

void func_sc03_099_8018152C(StageActor *arg0) {
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

void func_sc03_099_80181680(u8 *arg0) {
    D_sc03_099_8019F450[AF(arg0, u16, 2)]();
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

void func_sc03_099_8018172C(u8 *arg0) {
    D_sc03_099_8019F5B0[AF(arg0, u16, 2)]();
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

void func_sc03_099_801817DC(StageActor *arg0) {
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
    SetScript(arg0, &D_sc03_099_801AC974);
    arg0->state = 1;
    arg0->hitState = 0xAA10;
    arg0->params = &D_sc03_099_8019F23C;
    arg0->unkFC = 0;
    arg0->hitData = (s32)&D_sc03_099_8019F0D4 | 0x40000000 | 0x20000000;
    arg0->origin[0] = (u16)arg0->pos[0].h.i;
    arg0->origin[1] = (u16)arg0->pos[1].h.i;
    arg0->origin[2] = (u16)arg0->pos[2].h.i;
}

void func_sc03_099_801818C4(StageActor *arg0) {
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
    if ((u8 *)arg0->script == &D_sc03_099_801AAF2C) {
        SetScript(arg0, &D_sc03_099_801AAD24);
        arg0->state = 0x14;
        arg0->stateCount = 1;
        arg0->workFE = 0;
        arg0->ext0 = &D_sc03_099_801ABAE4;
    } else {
        if (arg0->workFE != 0) {
            SetScript(arg0, &D_sc03_099_801AC5EC);
        } else {
            SetScript(arg0, &D_sc03_099_801ABAE4);
        }
        arg0->state = 1;
    }
    arg0->unkFC = 0;
    arg0->hitState = 0xAA10;
}

void func_sc03_099_801819E0(StageActor *arg0) {
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

void func_sc03_099_80181AC0(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        SetLocalVelocityXZ(arg0, &D_sc03_099_8019F0B8);
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

void func_sc03_099_80181B98(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    TakeDamageAndRecoil();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    StopWithGravity((s32) arg0);
    PlayParamScript((s32) arg0, 8);
    PlaySoundId(0xA74, 0);
}

void func_sc03_099_80181C00(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc03_099_80181C3C(StageActor *arg0) {
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
    SetScript(arg0, &D_sc03_099_801ACA5C);
    arg0->state = 6;
    arg0->hitState = 0xA810;
}

void func_sc03_099_80181CE0(Mover *arg0) {
    UV4 a;
    UV4 b;

    SetLocalVelocityXZ(arg0, &D_sc03_099_8019F0B8);
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

void func_sc03_099_80181DA0(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_099_8019F0C8);
}

void func_sc03_099_80181DD4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc03_099_80181E30(s32 arg0) {
    if (IsPlayerHitBy(arg0) != 0) {
        ClearPlayerHitBy(arg0);
    }
}

void func_sc03_099_80181E68(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB5C4, arg2);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 1;
    }
}

void func_sc03_099_80181EC4(StageActor *arg0) {
    s32 temp_v1;

    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc03_099_801AB5C4);
        arg0->state = 0x13;
        arg0->stateCount = 3;
        arg0->unkFC = 0;
        arg0->timer = 0x1E;
    }
    temp_v1 = arg0->index;
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && ActorSegmentHitsPlayer(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_099_80181F9C(StageActor *arg0) {
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
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB5C4);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 0;
    }
}

void func_sc03_099_80182030(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc03_099_801AC2DC);
        arg0->stateCount = 7;
        arg0->state = 0x13;
        arg0->timer = 0x1E;
    }
    if (arg0->index == 0x17 && ActorSegmentHitsPlayer(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc03_099_801820FC(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        SetLocalVelocityXZ((s32) arg0, (s32) &D_sc03_099_8019F3B4);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB3AC);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_099_8019F38C, (s32) &D_sc03_099_8019F394, 0x14) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc03_099_801821D4(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        PlaySoundId(0x702, 0x107F);
    }
    MoveCollide((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_099_801AB3AC);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_099_8019F0E4 | 0x40000000 | 0x20000000);
    }
}

void func_sc03_099_80182270(u8 *arg0) {
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

void func_sc03_099_801822C8(void) {
}

void func_sc03_099_801822D0(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x10;
        SetScript(arg0, (s32) &D_sc03_099_801ABE6C);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_099_801AC5EC);
    arg0->state = 3;
    arg0->unkFC = 0;
    arg0->workFE = 1;
}

void func_sc03_099_80182370(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_099_801AC5EC);
        arg0->state = 3;
        arg0->unkFC = 0;
        return;
    }
    arg0->state = 4;
}

void func_sc03_099_801823C4(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc03_099_8019F37C, (s32) &D_sc03_099_8019F384) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x12;
        SetScript(arg0, (s32) &D_sc03_099_801AC1AC);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_099_801ACA5C);
    arg0->state = 6;
}

void func_sc03_099_80182458(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_099_801AC2DC);
        arg0->state = 6;
    } else {
        arg0->state = 8;
    }
}

void func_sc03_099_801824A0(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->state = (u16) arg0->stateCount;
    }
}

void func_sc03_099_801824C8(StageActor *arg0, s32 arg1, s32 arg2) {
    if ((arg0->animFlags & 0x4000) || (arg0->animTimer == 0)) {
        arg0->state = (u16) arg0->stateCount;
        SetScript((s32) arg0, arg0->ext0, arg2);
    }
}

void func_sc03_099_80182514(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_099_8019F414);
    SetScript((s32) arg0, (s32) &D_sc03_099_8019F42C);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_099_8019F444);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_099_80182600(s32 arg0) {
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

void func_sc03_099_80182684(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_099_8019F45C);
    SetScript((s32) arg0, (s32) &D_sc03_099_8019F51C);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity((s32) arg0);
    UpdateModelZYX((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_099_8019F5A4);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc03_099_80182790(s32 arg0) {
    if (MoveCollide(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_099_801827C8(StageActor *arg0, s32 arg1) {
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

void func_sc03_099_80182834(StageActor *arg0) {
    D_sc03_099_801BC61C[arg0->state]();
}

void func_sc03_099_80182870(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_099_80182A50();
        return;
    }
    var_v0 = &D_sc03_099_801BF2EC;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    arg0->timer = (s32) ((rand() & 0x7F) + 0x40);
    NextState((s32) arg0);
}

void func_sc03_099_801828E8(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (TickTimer(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc03_099_801BC62C.x = AF(arg0, u16, 6) + d;
        D_sc03_099_801BC62C.y = AF(arg0, u16, 0xA);
        D_sc03_099_801BC62C.z = AF(arg0, u16, 0xE) + d;
        func_sc03_099_80182998(arg0, &D_sc03_099_801BC62C);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc03_099_80182998(u8 *arg0, SpawnDef *arg1) {
    s32 i;

    i = 0;

    if (IsOnScreen(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc03_099_801BF2E8[i] == 0) {
                D_sc03_099_801BF2E8[i] = 1;
                arg1->unk10 = i | 0x80000000;
                arg1->unk8 = AF(arg0, u16, 0x70);
                SpawnActorFromDef(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc03_099_80182A50(StageActor *arg0) {
    ModelObj *o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc03_099_801BF1A8;
    arg0->unkFC = 0x7000;
    arg0->work100 = 0;
    arg0->workFE = 0;
    arg0->work104 = 0;
    arg0->work106 = 0;
    o = AllocActorSprite();
    arg0->model = o;
    if (o != 0) {
        func_8001CD50(o, p);
        o->rot.vx = 0x400;
        o->unk04 |= 0x60000000;
        SetShapeCircle(p, 0x40);
        AF(p, s32, 0) = 0x808080;
        AF(p, s32, 4) = 0x808080;
        func_sc03_099_80182DDC(arg0);
        arg0->state = 3;
    }
}

void func_sc03_099_80182B10(StageActor *arg0) {
    ModelObj *a1;
    u16 t;
    s16 b;
    a1 = arg0->model;
    if (a1 != NULL) {
        t = (u16)a1->scale.vy - 0x100;
        a1->scale.vy = t;
        a1->scale.vx = t;
        if (a1->scale.vy < 0) {
            a1->scale.vy = 0;
            a1->scale.vx = 0;
        }
    }
    if (arg0->workFE >= 0x6000) {
        arg0->workFE = 0x6000;
    } else {
        arg0->work106 += 0x400;
        arg0->workFE += (u16)arg0->work106;
    }
    arg0->work104 -= 0x80;
    b = (u16)arg0->unkFC + (u16)arg0->work104;
    arg0->unkFC = b;
    if (b < 0) {
        D_sc03_099_801BF2E8[AF(arg0, s16, 0xDC)] = 0;
        FreeActor(arg0);
        return;
    }
    func_sc03_099_80182BDC(arg0);
}

void func_sc03_099_80182BDC(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc03_099_801BC640;
    q.p[1] = D_sc03_099_801BC648;
    q.p[2] = D_sc03_099_801BC650;
    q.p[3] = D_sc03_099_801BC658;
    SetScaleMatrix(arg0 + 0xFC, &m);
    RotMatrixY((s16) GetCameraHeading(), &m);
    PosToSVec(arg0 + 4, &r);
    SetMatrixTrans(&r, &m);
    DrawPrimG4Mtx(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc03_099_801BC660;
    q.p[1] = D_sc03_099_801BC668;
    q.p[2] = D_sc03_099_801BC670;
    q.p[3] = D_sc03_099_801BC678;
    DrawPrimG4Mtx(&q, &m);
}

void func_sc03_099_80182DDC(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        PlaySoundId(0x6D5, 0);
        break;
    case 1:
        PlaySoundId(0x856, (func_sc03_099_80182E64() | 0x2000) & 0xFFFF);
        break;
    case 2:
        PlaySoundId(0x857, (func_sc03_099_80182E64() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc03_099_80182E64(u8 *arg0) {
    SV r;
    s32 v;

    PosToSVec(arg0 + 4, &r);
    if (ProjectPoint(&r, &r) & ~0x1000) {
        v = 1;
    } else {
        v = (r.vx << 6) / 160 + 0x40;
    }
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x80) {
        v = 0x7F;
    }
    return v;
}

void func_sc03_099_80182EE8(StageActor *arg0) {
    D_sc03_099_801BC760[arg0->state]();
}

void func_sc03_099_80182F24(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc03_099_801BC680, D_sc03_099_801BC682, D_sc03_099_801BC684);
        p = &D_sc03_099_801BC688;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc03_099_801BC6B8, D_sc03_099_801BC6BA, D_sc03_099_801BC6BC);
        p = &D_sc03_099_801BC6C0;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc03_099_801BC6F0, D_sc03_099_801BC6F2, D_sc03_099_801BC6F4);
        p = &D_sc03_099_801BC6F8;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc03_099_801BC680, D_sc03_099_801BC682, D_sc03_099_801BC684);
        p = &D_sc03_099_801BC688;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc03_099_801BC728, D_sc03_099_801BC72A, D_sc03_099_801BC72C);
        p = &D_sc03_099_801BC730;
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

void func_sc03_099_80183118(StageActor *arg0) {
    g_Lights.c = D_sc03_099_801BC6A8;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_099_801831C8(StageActor *arg0) {
    g_Lights.c = D_sc03_099_801BC6E0;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_099_80183278(StageActor *arg0) {
    g_Lights.a = D_sc03_099_801BC6F8.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_099_80183328(void) {
}

void func_sc03_099_80183330(StageActor *arg0) {
    g_Lights.a = D_sc03_099_801BC730.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}
