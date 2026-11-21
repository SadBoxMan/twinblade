#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_006_8017BE9C(void) {
}

void func_sc04_006_8017BEA4(void) {
}

void func_sc04_006_8017BEAC(void) {
}

void func_sc04_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_006_801836B0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc04_006_8017D0AC(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc04_006_8017D0D4(void);
extern void func_800D1EBC();
extern void (*D_sc04_006_801836C4[])();
extern u8 D_sc04_006_801836D0;
extern void StartPlayerActionScript();
extern u8 D_sc04_006_801836D4;
extern void func_sc04_006_8017D22C();
extern void (*D_sc04_006_801836E0[])();
extern void (*D_sc04_006_80183708[])();
extern void (*D_sc04_006_80183744[])();
extern void (*D_sc04_006_80195020[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc04_006_8017FF00;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc04_006_80194D10;
extern s32 * func_sc04_006_8017E75C();
extern s32 D_sc04_006_80194D78[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc04_006_80194F44;
extern s32 D_sc04_006_80194F48;
extern s32 D_sc04_006_80194F5C;
extern s32 D_sc04_006_80194F70;
extern s32 D_sc04_006_80194FDC;
extern s32 D_sc04_006_80194EC0[];
extern s32 D_sc04_006_80194E3C[];
extern void EndEvent();
extern void GiveItem();
extern void FreeActor();
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc04_006_8017E504();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc04_006_80195048[])();
extern u8 D_sc04_006_80194D44;
extern u8 D_sc04_006_801954E8;
extern u8 D_sc04_006_80195708;
extern void PlaySoundId();
extern u8 D_sc04_006_801954F8;
extern u8 D_sc04_006_80195600;
extern void (*D_sc04_006_801957C4[])();
extern void (*D_sc04_006_8019B250[])();

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_006_801836F0[];
extern s32 func_8013B7F4();
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
extern void SetMoverTimer();
extern void NextState();
extern void SetObjTimer();
extern u8 D_sc04_006_80183738;
extern void CopyPosInt();
extern void InitSpriteKind3();
extern s32 TickObjTimer();
extern s32 TickTimer();
extern u16 D_sc04_006_8019572A;
extern u8 D_sc04_006_8019ADFC;
extern s32 DistSqToTarget();


extern u8 D_sc04_006_8019AE0C;
extern void StopWithGravity();
extern u8 D_sc04_006_8019AED4;
extern s32 func_sc04_006_8017EF74();
extern void DropItem();
extern void func_sc04_006_8017F354();

extern u8 D_sc04_006_801836F8;
extern s32 AllocActorModel();
extern void InitNullModel();
extern u8 D_sc04_006_80195728;
extern u8 D_sc04_006_8019575C;
extern s32 SpawnShadow();
extern s32 DistSqToPlayer();


extern s32 D_8011F9C4;
extern u8 D_sc04_006_8018390C;
extern u8 D_sc04_006_801839C0;
extern void SetVar32();
s32 func_sc04_006_8017D584(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc04_006_801839D4;
extern u8 D_sc04_006_80183A38;
extern s32 PlayerEvent08();
extern void func_sc04_006_8017D800();
extern void *g_PlayerModel;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc04_006_8017BEBC(u8 *obj) {
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

void func_sc04_006_8017CD9C(void) {
    D_8011F9C4 = 1;
    SetFlag(0xD0, 1);
    SetVar32(4, 0xD0);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_006_8018390C;
    g_SpawnListRanged = &D_sc04_006_801839C0;
    func_sc04_006_8017D584(0);
}

void func_sc04_006_8017CE0C(void) {
    D_8011F9C4 = 1;
    SetFlag(0xD1, 1);
    SetVar32(4, 0xD1);
    PlaySoundId(6, 0);
    g_SpawnListFixed = &D_sc04_006_801839D4;
    g_SpawnListRanged = &D_sc04_006_80183A38;
    func_sc04_006_8017D584(1);
}

void func_sc04_006_8017CE7C(u8 *arg0) {
    D_sc04_006_801836B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017CEB8(u8 *arg0) {
    func_sc04_006_8017D0AC();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CEFC(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc04_006_8017CF20(u8 *arg0) {
    func_sc04_006_8017D0D4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_006_8017CF60(u8 *arg0) {
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

void func_sc04_006_8017CFDC(void) {
    func_800D1EBC();
}

void func_sc04_006_8017CFFC(u8 *arg0) {
    D_sc04_006_801836C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_006_8017D038(u8 *arg0) {
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

void func_sc04_006_8017D0AC(void) {
    StartPlayerActionScript((s32) &D_sc04_006_801836D0, 0x01000000);
}

void func_sc04_006_8017D0D4(void) {
    StartPlayerActionScript((s32) &D_sc04_006_801836D4, 0x01000000);
}

void func_sc04_006_8017D0FC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_006_8017D22C, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_006_8017D22C((s32) &g_Camera);
}

void func_sc04_006_8017D194(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_006_8017D22C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc04_006_8017D22C((s32) &g_Camera);
}

void func_sc04_006_8017D22C(s32 arg0) {
    D_sc04_006_801836E0[AF(arg0, u8, 4)]();
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
extern s32 func_sc04_006_8017DFC8();
extern s32 func_sc04_006_8017DF0C();
extern void StepSpriteAnim();
extern s32 SpawnPropFrom();
extern void func_sc04_006_8017FA68();
extern u16 D_800B99DA;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc04_006_801836EC[];
extern s32 GetObjPadPressed();
extern void func_sc04_006_8017D3E4();

extern s32 FindActorByKind();
extern u16 g_Actors;
extern u8 D_sc04_006_80183710;
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
extern WMtx GsIDMATRIX;
extern u8 g_Daytime;
extern u8 g_Status[];
extern s32 HeadingToTarget();
extern s32 HeadingToSV();
extern u8 D_800D3918;
extern u8 g_WallNormal;

extern s32 EaseValue();
extern s32 EaseAngle();
extern void ApplyMatrixSV();

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
extern s32 MoveOnGround();
extern void SetReactionStep();
extern void RestorePrevPos();
extern s32 UndoMoveIntoObject();
extern s16 g_PlayerX;
extern s16 D_80126B66;
extern s16 D_80126B62;
extern s32 HitPlayer();

extern void SetIdentityRot();
extern s16 D_sc04_006_801944F0[];
extern void StartSpriteAnim();
extern u8 D_sc04_006_8019B204;
extern u8 D_sc04_006_8019B210;
extern s32 func_sc04_006_8017FA10();
extern s32 AllocActorSprite();
extern void LocalToWorld();
extern void GetPartWorldMatrix();
extern s32 SpawnActorFromDef();
void func_sc04_006_8017FB28(StageActor *o, s16 *v, s16 arg2);

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
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
extern void ResetScriptVM();
extern s32 TargetInFront();
extern s32 PathHitsModel();
extern void CallActionHandler();
extern SV8 D_sc04_006_80195038[];
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void func_sc04_006_8017F180();
extern s32 func_sc04_006_8017F43C();

extern void FreeProp();
extern void RotateSVectorY();
s32 func_sc04_006_8017EE34(u8 *o);
s32 func_sc04_006_8017EFF4(u8 *o);
extern s32 IsOnScreen();

extern u8 D_sc04_006_8019B094;
extern void ProjectPoint();
extern void DespawnActor();
extern void UpdateModelZYX();
extern void GainStat0FromActor();
extern void FreeShadow();

extern u8 D_sc04_006_801836E8[];

void func_sc04_006_8017D268(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_006_801836E8)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    AF(arg0, s16, 0x22) = AF(arg0, s16, 0x1A) = ((s16)(((s16 *)&v)[0] - 0x4C0) << 10) / 3648 + 0x600;
    func_sc04_006_8017D3E4((s32) arg0, (s32) &v);
}

void func_sc04_006_8017D344(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc04_006_801836EC)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc04_006_8017D3E4((s32) arg0, (s32) &v);
}

void func_sc04_006_8017D3E4(u8 *o, s16 *p) {
    WMtx m;
    SV8 v;
    UV4 r;
    AF(o, s32, 0x8) = (s16)EaseValue(AF(o, s16, 0x8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + p[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + p[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + p[2];
    func_sc04_006_8017DD28(o + 0x18, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &r);
    AF(o, s32, 0x3C) = ((s16)r.x >> 3) + AF(o, s16, 0x28) + p[0];
    AF(o, s32, 0x40) = ((s16)r.y >> 3) + AF(o, s16, 0x2A) + p[1];
    AF(o, s32, 0x44) = ((s16)r.z >> 3) + AF(o, s16, 0x2C) + p[2];
}

s32 func_sc04_006_8017D584(s32 arg0) {
    return func_8013B7F4(D_sc04_006_801836F0[arg0], 0);
}

void func_sc04_006_8017D5B4(StageActor *arg0) {
    ModelObj *temp_v0;

    if (arg0->state == 0) {
        temp_v0 = AllocActorModel();
        arg0->model = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn((s32) arg0);
            return;
        }
        InitNullModel(temp_v0);
        arg0->hitState = 0x40;
        AF(arg0, s32 *, 0x58) = &D_sc04_006_801836F8;
        arg0->targetClass = 2;
        arg0->state = (u16) (arg0->state + 1);
    }
}

s32 func_sc04_006_8017D638(void) {
    return 0x55;
}

void func_sc04_006_8017D640(StageActor *arg0) {
    D_sc04_006_80183708[arg0->state]();
}

void func_sc04_006_8017D67C(s32 arg0) {
    SetMoverTimer(arg0, 0);
    NextState(arg0);
}

void func_sc04_006_8017D6B0(s32 arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (TickTimer(arg0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(g_PlayerModel, s32, 4) >= 0) && (PlayerEvent08((s32) &g_Player) == 0)) {
            case 1:
                func_sc04_006_8017D800(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_006_8017D800(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_006_8017D800(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_006_8017D800(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_006_8017D800(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_006_8017D800(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        SetMoverTimer(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_006_8017D800(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_006_80183710;
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

void func_sc04_006_8017D8EC(u8 *arg0) {
    D_sc04_006_80183744[AF(arg0, u16, 2)]();
}

void func_sc04_006_8017D928(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    CopyPosInt(arg0 + 4, (s32) (arg0 + 0x10));
    InitSpriteKind3(temp_s1, (s32) &D_sc04_006_80183738, 0x270, 0x100);
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

void func_sc04_006_8017DA0C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        SetObjTimer((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_006_8017DA78(u8 *o) {
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

void func_sc04_006_8017DB64(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    SetIdentityRot(&m);
    func_sc04_006_8017DBC8((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc04_006_8017DBC8(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc04_006_8017DFC8(a);
    s = func_sc04_006_8017DF0C(a);
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

void func_sc04_006_8017DD28(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc04_006_8017DFC8(r[0] & 0xFFF);
    cx = func_sc04_006_8017DF0C(r[0] & 0xFFF);
    sy = func_sc04_006_8017DFC8(r[1] & 0xFFF);
    cy = func_sc04_006_8017DF0C(r[1] & 0xFFF);
    sz = func_sc04_006_8017DFC8(r[2] & 0xFFF);
    cz = func_sc04_006_8017DF0C(r[2] & 0xFFF);
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

s32 func_sc04_006_8017DF0C(u32 a) {
    if (a < 0x400) {
        return D_sc04_006_801944F0[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc04_006_801944F0[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc04_006_801944F0[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc04_006_801944F0[0xFFF - a];
    }
}

s32 func_sc04_006_8017DFC8(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc04_006_801944F0[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc04_006_801944F0[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc04_006_801944F0[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc04_006_801944F0[a - 0xC00];
    }
}

void func_sc04_006_8017E074(StageActor *arg0) {
    D_sc04_006_80195020[arg0->state]();
}

void func_sc04_006_8017E0B0(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc04_006_80194D10) != 0) {
        if (!(GetFlag(D_sc04_006_80194D78[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc04_006_8017E75C);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_006_8017FF00);
        arg0->state = 1;
    }
}

void func_sc04_006_8017E184(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc04_006_8017E1AC(void) {
}

void func_sc04_006_8017E1B4(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_006_80194F48 = 0;
            SetFlag(D_sc04_006_80194EC0[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_006_80194F44 = 2;
        } else {
            D_sc04_006_80194F5C = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_006_80194E3C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_006_80194F44 = 0;
            D_sc04_006_80194F48 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc04_006_80194F70);
    } else {
        var_a1 = &D_sc04_006_80194FDC;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc04_006_8017E300(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_006_80194D78[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc04_006_8017E504() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc04_006_8017E420(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc04_006_8017E44C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_006_8017E45C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_006_8017E46C(u8 *arg0) {
    SetFlag(D_sc04_006_80194D78[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_006_8017E4AC(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_006_8017E4E0(void) {
    return func_80174764() == 1;
}

s32 func_sc04_006_8017E504(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc04_006_80194D78[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc04_006_8017E568(StageActor *arg0) {
    D_sc04_006_80195048[arg0->state]();
}

void func_sc04_006_8017E5A4(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc04_006_80194D44) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_006_80195708);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_006_801954E8);
        }
        arg0->state = 1;
    }
}

void func_sc04_006_8017E62C(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_801954F8);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_006_80195600);
        arg0->hitState = 0x8C00;
    }
}

void func_sc04_006_8017E6EC(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_006_80195708);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_006_801954E8);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc04_006_8017E75C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc04_006_80195038[0], &a, &f);
    RotTransSV(&D_sc04_006_80195038[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc04_006_8017E854(StageActor *arg0) {
    D_sc04_006_801957C4[arg0->state]();
}

void func_sc04_006_8017E890(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc04_006_80195728) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc04_006_8019575C;
        arg0->reactMask = -0x2021;
        AF(arg0, s16, 0xDE) = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc04_006_8019ADFC);
        if ((u16)arg0->param & 1) {
            temp_a0 = arg0->model;
            arg0->state = 1;
            arg0->hitState = 0;
            temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
            return;
        }
        arg0->state = 3;
        arg0->ext0 = SpawnShadow(arg0);
    }
}

void func_sc04_006_8017E948(StageActor *arg0) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;
    ModelObj *temp_v1_3;

    if (DistSqToPlayer() > 0x18FFF) {
        temp_v1 = arg0->model;
        arg0->state = 2;
        arg0->timer = 0x10;
        temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 & 0x7FFFFFFF);
        temp_v1_2 = arg0->model;
        temp_v1_2->flags = (u16) (temp_v1_2->flags | 0x10);
        temp_v1_3 = arg0->model;
        temp_v1_3->scale.vz = 1;
        temp_v1_3->scale.vy = 1;
        temp_v1_3->scale.vx = 1;
        arg0->ext0 = SpawnShadow((s32) arg0);
        arg0->hp = (u16) *(u16 *)arg0->init;
    }
}

void func_sc04_006_8017E9EC(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc04_006_8019572A;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc04_006_8017EA74(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 4;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019ADFC, arg2);
}

void func_sc04_006_8017EAA0(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc04_006_8017EAE0(StageActor *arg0) {
    arg0->state = 6;
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AE0C);
    arg0->timer = 0x17;
}

void func_sc04_006_8017EB20(s32 arg0) {
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_006_8017EB54(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0);
    func_sc04_006_8017EF74((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_006_8019AED4);
    AF(arg0, s32, 0x1C) = 0x23;
    AF(arg0, s32, 0xE0) = 0;
}

void func_sc04_006_8017EBA8(u8 *o) {
    u8 *p;
    s32 r;

    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x12) -= 0x71;
    func_sc04_006_8017EFF4(o);
    if (AF(o, u16, 0x72) & 0x4000) {
        if (IsOnScreen(o, 0x8C00B4) == 1) {
            PlaySoundId(0x662, 0);
        }
    }
    r = func_sc04_006_8017EE34(o);
    if (r != -1 && TickTimer(o) != 0) {
        if (r != 0) {
            func_sc04_006_8017EF74((s32) o);
        }
        AF(o, s32, 0x1C) = 0x23;
    }
}

void func_sc04_006_8017EC64(StageActor *o) {
    SV8 a;
    SV8 b;
    s32 x;

    o->hitState = 0;
    o->timer = 0x37;
    o->model->rot.vx = 0;
    SetScript(o, &D_sc04_006_8019B094);
    o->stateCount = 0;
    a.x = o->pos[0].h.i;
    a.y = o->pos[1].h.i;
    a.z = o->pos[2].h.i;
    ProjectPoint(&a, &b);
    if ((b.x < 0 ? -b.x : b.x) < 0xB5 && (b.y < 0 ? -b.y : b.y) < 0xA1) {
        PlaySoundId(0x98A, 0);
    }
}

void func_sc04_006_8017ED40(u8 *arg0) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (TickTimer((s32) arg0) != 0) {
        if (!(rand() & 3)) {
            DropItem((s32) arg0);
        }
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc04_006_8017F354((s32) arg0);
    }
}

void func_sc04_006_8017EDD8(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc04_006_8017EDEC(void) {
}

void func_sc04_006_8017EDF4(StageActor *o) {
    s16 v[3];

    if (o->hitCode == 0x24) {
        v[2] = 0;
        v[0] = 0;
        v[1] = -8;
        func_sc04_006_8017FB28((s32) o, v, 0xB);
    }
}

s32 func_sc04_006_8017EE34(u8 *o) {
    s32 r;
    s32 v;
    u8 *q;
    s32 i;

    r = 1;
    v = MoveOnGround();
    if (v == 0) {
        RestorePrevPos(o);
        func_sc04_006_8017F180(o, 2);
        r = 0;
    } else if ((v & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
        return -1;
    } else if ((v & 0xFF) == 0x1A) {
        func_sc04_006_8017F354(o);
        return -1;
    } else if (v & 0x8000) {
        if (!(v & 0x2000)) {
            RestorePrevPos(o);
        }
        func_sc04_006_8017F180(o, 5);
        r = 0;
    } else if (v & 0x4000) {
        RestorePrevPos(o);
        func_sc04_006_8017F180(o, 2);
        r = 0;
    }
    q = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; i++) {
        if (AF(q, u16, 0) != 0 && AF(o, u16, 0) == AF(q, u16, 0) && o != q && UndoMoveIntoObject(o, q) != 0) {
            if (r != 0) {
                func_sc04_006_8017F180(o, 2);
            }
            return r;
        }
        q += 0x10C;
    }
    return r;
}

s32 func_sc04_006_8017EF74(s32 arg0) {
    if (AF(arg0, s16, 0xAA) > 0) {
        func_sc04_006_8017F180(arg0, 4);
        return 0;
    }
    if ((DistSqToTarget(arg0) > 0x24000) || (func_sc04_006_8017F43C(arg0) == 0)) {
        func_sc04_006_8017F180(arg0, 3);
        return 0;
    }
    func_sc04_006_8017F180(arg0, 0);
    return 1;
}

s32 func_sc04_006_8017EFF4(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 d;
    u8 *p;

    a.x = g_PlayerX;
    a.y = D_80126B62;
    a.z = D_80126B66;
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    a.y -= 0x2A;
    p = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    if (AF(p, s16, 4) + b.x > a.x || AF(p, s16, 6) + b.x < a.x) {
        return 0;
    }
    if (AF(p, s16, 0xC) + b.z > a.z || AF(p, s16, 0xE) + b.z < a.z) {
        return 0;
    }
    if (AF(p, s16, 8) + b.y > a.y || AF(p, s16, 0xA) + b.y < a.y) {
        return 0;
    }
    d.x = a.x - b.x;
    d.y = a.y - b.y;
    d.z = a.z - b.z;
    VectorNormalSS(&d, &d);
    HitPlayer(1, 0x2001, AF(o, s16, 0xDC), 0xE, &a, &d);
    return 1;
}

void func_sc04_006_8017F180(u8 *o, s32 mode) {
    V3 v;
    SV8 s;
    WMtx m;
    u8 *g;
    s32 a;
    s32 b;

    g = g_Status;
    v.x = v.y = 0;
    if (g_Daytime) {
        v.z = -0x60000;
    } else {
        v.z = -0x80000;
    }
    switch (mode) {
    case 0:
        if (g[0x36] != 0 && (rand() & 1)) {
            break;
        }
    case 1:
        AF(o, s16, 0xDC) = HeadingToTarget(o);
        break;
    case 2:
        AF(o, s16, 0xDC) += 0x800;
        break;
    case 3:
        while (AF(o, s16, 0xDC) == (s16)(rand() % 4096)) {
        }
        break;
    case 4:
        AF(o, s16, 0xDC) = (HeadingToTarget(o) + 0x800) & 0xFFF;
        break;
    case 5:
        s.x = AF(o, s32, 0x10) >> 8;
        s.z = AF(o, s32, 0x18) >> 8;
        a = HeadingToSV(&D_800D3918, &g_WallNormal);
        b = HeadingToSV(&s, &D_800D3918);
        AF(o, s16, 0xDC) = (a * 2 - b) & 0xFFF;
        break;
    }
    m = GsIDMATRIX;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc04_006_8017F354(u8 *o) {
    u8 *p;
    u8 *q;
    u8 *r;
    StageActor *t;

    AF(o, s16, 0x76) = 0;
    if (AF(o, s32, 0xE4) == 0) {
        p = AF(o, u8 *, 0x20);
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(p, s32, 4) |= 0x80000000;
        AF(o, s16, 0x5C) = AF(o, s16, 0x5E) = 0;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x10) = AF(q, s16, 0x12) = AF(q, s16, 0x14) = 0;
        r = AF(o, u8 *, 0x20);
        AF(r, s16, 0x18) = AF(r, s16, 0x1A) = AF(r, s16, 0x1C) = 0x1000;
        AF(o, s16, 0xAA) = AF(o, s16, 0xDE) = 0;
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        SetScript(o, &D_sc04_006_8019ADFC);
        UpdateModelZYX(o);
        GainStat0FromActor(o);
        t = AF(o, s32, 0xCC);
        if (t != 0) {
            FreeShadow(t);
        }
    } else {
        DespawnActor(o);
    }
}

s32 func_sc04_006_8017F43C(u8 *o) {
    V3 d;

    d.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    d.y = 0;
    d.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.z < 0x190000;
}

void func_sc04_006_8017F4B4(StageActor *arg0) {
    D_sc04_006_8019B250[arg0->state]();
}

void func_sc04_006_8017F4F0(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc04_006_8017FA10() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc04_006_8019B204, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc04_006_8019B210);
    func_sc04_006_8017FA68((s32) arg0);
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

void func_sc04_006_8017F5EC(u8 *arg0) {
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
            func_sc04_006_8017FA68(arg0);
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
    func_sc04_006_8017FAE4(arg0);
}

void func_sc04_006_8017F87C(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc04_006_8017FA68(arg0);
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
    func_sc04_006_8017FAE4(arg0);
}

s32 func_sc04_006_8017FA10(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_006_8017FA68(u8 *o) {
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

void func_sc04_006_8017FAE4(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc04_006_8017FB28(StageActor *o, s16 *v, s16 arg2) {
    SpawnDef d;

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
