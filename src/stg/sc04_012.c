#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_012_8017BE9C(void) {
}

void func_sc04_012_8017BEA4(void) {
}

void func_sc04_012_8017BEAC(void) {
}

void func_sc04_012_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_012_80182064[])();
extern s32 FadeStep();
extern void (*D_sc04_012_8018206C[])();
extern void func_800D1EBC();
extern void (*D_sc04_012_80182084[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_sc04_012_80182090;
extern void StartPlayerActionScript();
extern u8 D_sc04_012_8018209C;
extern void func_sc04_012_8017D154();
extern void (*D_sc04_012_801820A4[])();
extern void (*D_sc04_012_80182280[])();
extern void (*D_sc04_012_801822B0[])();
extern void (*D_sc04_012_801822B8[])();
extern void (*D_sc04_012_801822C4[])();
extern void (*D_sc04_012_80182300[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc04_012_801930E4;
extern u8 D_sc04_012_80182010;
extern void func_800D1724();
extern u8 D_sc04_012_80181FEC;
extern u8 D_sc04_012_80182034;
extern void SetMoverTimer();
extern void NextState();
extern void SetObjTimer();
extern u8 D_sc04_012_801822F4;
extern void CopyPosInt();
extern void InitSpriteKind3();
extern s32 TickObjTimer();

extern s32 GetFlag();
extern void UpdateClockTint();

extern s32 D_8011F9C4;
extern void SetFlag();
void func_sc04_012_8017D06C(void);
extern void StartFade();
extern void SetClock();
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
extern s16 D_80126B66;

extern s32 TickTimer();
extern s32 PlayerEvent08();
extern void func_sc04_012_8017E250();
extern void *g_PlayerModel;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc04_012_8017BEBC(u8 *obj) {
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

void func_sc04_012_8017CD9C(u8 *arg0) {
    D_sc04_012_80182064[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017CDD8(u8 *arg0) {
    D_8011F9C4 = 1;
    SetFlag(0x117, 1);
    PlaySoundId(7, 0);
    func_sc04_012_8017D06C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_012_8017CE44(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc04_012_8017CE68(u8 *arg0) {
    D_sc04_012_8018206C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017CEA4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_012_8017CEC0(u8 *arg0) {
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

void func_sc04_012_8017CF3C(void) {
    func_800D1EBC();
}

s32 func_sc04_012_8017CF5C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0, arg2);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (!(GetFlag(0x117) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc04_012_8017CFEC(u8 *arg0) {
    D_sc04_012_80182084[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_012_8017D028(u8 *arg0) {
    SetClock(0x030C0000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc04_012_8017D06C(void) {
    StartPlayerActionScript((s32) &D_sc04_012_80182090, 0x01000000);
}

void func_sc04_012_8017D094(void) {
    StartPlayerActionScript((s32) &D_sc04_012_8018209C, 0x01000000);
}

void func_sc04_012_8017D0BC(void) {
    g_CameraProjTarget = 0x21C;
    g_CameraDistTarget = 0x384;
    D_8012696A = 0x800;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_012_8017D154, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_012_8017D154((s32) &g_Camera);
}

void func_sc04_012_8017D154(s32 arg0) {
    D_sc04_012_801820A4[AF(arg0, u8, 4)]();
}

extern u8 D_sc04_012_80191CC0;
extern void func_8001CD9C();
extern void SetShapeCircle();
extern void func_sc04_012_8017DED4();
extern void *D_sc04_012_801930CC;

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
extern void func_sc04_012_8017D248();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

extern s32 FindActorByKind();
extern u16 g_Actors;
extern u8 D_sc04_012_801822CC;
extern s32 SpawnPropAt();
extern void ObjLocalToWorld();

extern s32 SetupActor();
extern void InitModel();
extern u32 GetProgress();
extern u8 D_sc04_012_8018224C;
extern u8 D_sc04_012_8018F198;
extern u8 D_sc04_012_8018F210;
extern u8 D_sc04_012_8018F288;
extern u8 D_sc04_012_8018222C;
extern u8 D_sc04_012_8018223C;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
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
extern u8 g_PlayerPosX;
extern u8 D_sc04_012_80182290;
extern u8 D_sc04_012_80182298;
extern s8 D_sc04_012_80191CBF;
extern s32 D_sc04_012_801930C0;
extern s16 D_sc04_012_801930C4;
extern u8 D_sc04_012_80191C70[];
extern void PosToSVec();
extern void *D_sc04_012_801930C8;

typedef union { s32 w; XY s; } UXY;
extern void RotateSVectorY();
static inline void clamp_DCB4(s16 *p, s16 x, s16 lim) {
    if (x > lim) {
        *p = x - lim;
    } else if (-lim > x) {
        *p = x + lim;
    }
}

extern void func_sc04_012_8017E060();
extern void FreeProp();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;


extern s32 GetObjPadPressed();
extern u8 g_CameraFocus;
extern s16 D_sc04_012_801820A8[];
void func_sc04_012_8017D190(u8 *o) {
    SV8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc04_012_801820A8[t];
    }
    v = *(SV8 *)&g_CameraFocus;
    v.x = 0;
    if (v.z < 0x180) {
        v.z = 0x180;
    }
    func_sc04_012_8017D248(o, &v);
}

void func_sc04_012_8017D248(u8 *arg0, u8 *arg1) {
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

extern u8 D_sc04_012_80182154;
extern u8 D_sc04_012_801821A4;
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void FreeActor();
void EventArrival(StageActor *o) {
    switch (o->state) {
    case 0:
        o->timer = 0x14;
        o->state++;
        break;
    case 1:
        if (--o->timer == 0) {
            if (D_80126B66 < 0x400) {
                StartEvent(o, &D_sc04_012_80182154);
            } else {
                StartEvent(o, &D_sc04_012_801821A4);
            }
            o->state++;
        }
        break;
    case 2:
        if (IsEventDone(o)) {
            EndEvent(o);
            FreeActor(o);
        }
        break;
    }
}

void func_sc04_012_8017D4CC(StageActor *o) {
    if (SetupActor(o, &D_sc04_012_8018224C) == 0) return;
    switch (o->param) {
    case 0:
        break;
    case 1:
        InitModel(o->model, &D_sc04_012_8018F198);
        o->hitData = (u32)&D_sc04_012_8018222C | 0x40000000 | 0x20000000;
        break;
    case 2:
        InitModel(o->model, &D_sc04_012_8018F210);
        o->hitData = (u32)&D_sc04_012_8018223C | 0x40000000 | 0x20000000;
        break;
    case 3:
        InitModel(o->model, &D_sc04_012_8018F288);
        o->hitData = (u32)&D_sc04_012_8018223C | 0x40000000 | 0x20000000;
        break;
    }
    o->reactive = 1;
    o->targetClass = 2;
    AF(o, s16, 0xAE) = -1;
    o->state = 1;
    if (GetProgress() >= 0x2F0) {
        if (o->param == 0) o->model->rot.vy = 0xD00;
        if (o->param == 1) o->model->rot.vy = 0xD00;
        if (o->param == 2) o->model->rot.vy = 0x300;
        if (o->param == 3) o->model->rot.vy = 0x300;
    } else {
        if ((u16)o->param < 2) {
            o->state = 2;
        } else {
            if (o->param == 2) o->model->rot.vy = 0x100;
            if (o->param == 3) o->model->rot.vy = 0x100;
            o->state = 3;
        }
    }
}

void func_sc04_012_8017D698(StageActor *arg0) {
    D_sc04_012_80182280[arg0->state]();
}

s32 func_sc04_012_8017D6D4(void) {
    return 2 - D_sc04_012_801930E4;
}

extern void SetProgress();
s32 SetProgressOnce2F0(void) {
    if (GetProgress() >= 0x2F0) {
        return 1;
    }
    SetProgress(0x2F0);
    return 0;
}

s32 CheckFlag99Late(void) {
    if (GetProgress() < 0x384) {
        return 0;
    }
    if (GetFlag(0x99) & 0xFF) {
        return 0;
    }
    SetFlag(0x99, 1);
    return 1;
}

void func_sc04_012_8017D770(void) {
    func_800D1724((s32) &D_sc04_012_80182010);
}

void func_sc04_012_8017D798(void) {
    func_800D1724((s32) &D_sc04_012_80181FEC);
}

void func_sc04_012_8017D7C0(void) {
    func_800D1724((s32) &D_sc04_012_80182034);
}

void func_sc04_012_8017D7E8(void) {
}

void func_sc04_012_8017D7F0(StageActor *arg0) {
    s16 temp_v0;

    if (D_80126B66 >= 0x6D0) {
        if (arg0->stateCount == 0) {
            PlaySoundId(0xB40, 0);
            arg0->stateCount = 1U;
        }
        arg0->model->rot.vy = (s16) -((s32) (rsin((s32) arg0->unkFC) * 0x300) >> 0xC);
        temp_v0 = (u16) arg0->unkFC + 0x10;
        arg0->unkFC = temp_v0;
        if (temp_v0 >= 0x400) {
            arg0->state = 1;
        }
    }
}

void func_sc04_012_8017D894(StageActor *arg0) {
    s16 temp_v0;

    if (D_80126B66 >= 0x710) {
        arg0->model->rot.vy = (s16) (((s32) (rsin((s32) arg0->unkFC) << 9) >> 0xC) + 0x100);
        temp_v0 = (u16) arg0->unkFC + 0x10;
        arg0->unkFC = temp_v0;
        if (temp_v0 >= 0x400) {
            arg0->state = 1;
        }
    }
}

void func_sc04_012_8017D910(void) {
    UpdateClockTint();
}

s32 PickByFlag117(void) {
    if (GetFlag(0x117) & 0xFF) {
        return 0x74;
    }
    return 0x53;
}

void func_sc04_012_8017D960(StageActor *arg0) {
    D_sc04_012_801822B0[arg0->state]();
}

void func_sc04_012_8017D99C(StageActor *o) {
    typedef struct { u8 p0[0x70]; s16 f70; u8 p1[0xDC - 0x72]; s32 fDC; u8 p2[0xFC - 0xE0]; s16 fFC; } ObjS;
    SV8 v;
    s32 i;
    u8 *e;
    s8 *p;

    D_sc04_012_801930C0 = ((ObjS *) o)->fFC;
    D_sc04_012_801930C4 = ((ObjS *) o)->fDC;
    D_sc04_012_801930C8 = &D_sc04_012_80182290 + ((ObjS *) o)->f70 * 4;
    D_sc04_012_801930CC = &D_sc04_012_80182298 + ((ObjS *) o)->f70 * 8;
    PosToSVec(&g_PlayerPosX, &v);
    i = 0x4F;
    v.y = o->pos[1].h.i;
    p = &D_sc04_012_80191CBF;
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);
    for (i = 0; i < D_sc04_012_801930C0; i++) {
        e = (u8 *) SpawnPropAt(0x61, &v);
        if (e != 0) {
            D_sc04_012_80191C70[i] = 1;
            AF(e, s32, 0x34) = i;
            func_sc04_012_8017DED4(e);
            AF(e, s16, 0xA) += (rand() & 0xF) * 0x30;
        }
    }
    NextState(o);
}

void func_sc04_012_8017DAE4(StageActor *o) {
    SV8 v;
    s32 i;
    s32 idx;
    u8 *e;

    idx = -1;
    PosToSVec(&g_PlayerPosX, &v);
    v.y = o->pos[1].h.i;
    for (i = 0; i < D_sc04_012_801930C0; i++) {
        if (idx != -1) {
            break;
        }
        if (D_sc04_012_80191C70[i] == 0) {
            idx = i;
        }
    }
    if (idx != -1) {
        e = (u8 *) SpawnPropAt(0x61, &v);
        if (e != 0) {
            D_sc04_012_80191C70[idx] = 1;
            AF(e, s32, 0x34) = idx;
        }
    }
}

void func_sc04_012_8017DBB0(u8 *arg0) {
    D_sc04_012_801822B8[AF(arg0, u16, 2)]();
}

void func_sc04_012_8017DBEC(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    void *temp_s0;
    void *p;
    s32 t;


    temp_s4 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x34) << 6) + &D_sc04_012_80191CC0;
    func_8001CD9C(temp_s4, (s32) temp_s0);
    SetShapeCircle((s32) temp_s0, 0x10);
    temp_v0 = (rand() & 7) + 1;
    temp_a1 = (temp_v0 << 7) | ((temp_v0 << 0x17) | (temp_v0 << 0xF));
    AF(temp_s0, s32, 0) = temp_a1;
    AF(temp_s0, s32, 4) = 0;
    AF(temp_s4, s32, 4) = (s32) (AF(temp_s4, s32, 4) | 0x50000000);
    func_sc04_012_8017DED4((s32) arg0, temp_a1);
    temp_v1 = (rand() & 3) * 0x555;
    p = D_sc04_012_801930CC;
    AF(temp_s4, s16, 0x1A) = temp_v1;
    AF(temp_s4, s16, 0x18) = temp_v1;
    AF(arg0, s16, 0x12) = (s16) (AF(arg0, u16, 6) + AF(p, u16, 2));
    t = AF(arg0, u16, 0xE) + AF(p, u16, 6);
    AF(arg0, s16, 0x10) = 0;
    AF(arg0, s16, 0x18) = 0;
    AF(arg0, s16, 0x1A) = t;
    temp_s0_2 = rand((s32) p);
    temp_s1 = rand();
    temp_s2 = rand();
    AF(temp_s4, s16, 0x12) = (s16) (((temp_s0_2 & 3) << 0xA) + ((temp_s1 & 0x1F) << 5) + ((temp_s2 & 3) << 8) + (rand() & 0xFF));
    AF(arg0, s16, 0x2E) = (s16) ((rand() & 7) * 0xB);
    AF(arg0, s16, 0x2C) = (s16) ((rand() & 0x1F) + 4);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_012_8017DD84(u8 *o0) {
    typedef struct { u8 p0[2]; s16 f2; u8 p1[2]; s16 f6; u8 p2[2]; s16 fA; u8 p3[2]; s16 fE; s16 f10; s16 f12; u8 p4[2]; s16 f16; s16 f18; s16 f1A; u8 p5[4]; u8 *f20; u8 p6[8]; s16 f2C; s16 f2E; } ObjS;
    ObjS *o = (ObjS *)o0;
    u8 *e;
    u16 *p;
    SV8 v;

    e = o->f20;
    v.x = v.y = 0;
    v.z = o->f2C;
    AF(e, s16, 0x12) += o->f2E;
    RotateSVectorY(AF(e, s16, 0x12), &v, &v);
    o->f6 = o->f12 + v.x;
    o->fE = o->f1A + v.z;
    o->fA += o->f16;
    p = D_sc04_012_801930CC;
    o->f10 += p[0];
    o->f12 -= o->f10;
    o->f18 += p[1];
    o->f1A -= o->f18;
    if (D_sc04_012_801930C4 < o->fA) {
        o->f2++;
    }
}

void func_sc04_012_8017DE74(s32 arg0) {
    s32 temp_a1;
    u8 *temp_a2;

    temp_a2 = (AF(arg0, s32, 0x34) << 6) + &D_sc04_012_80191CC0;
    temp_a1 = *temp_a2;
    temp_a1 -= 8;
    if (temp_a1 <= 0) {
        func_sc04_012_8017E060(arg0);
    } else {
        temp_a1 |= (temp_a1 << 0x10) | (temp_a1 << 8);
        AF(temp_a2, s32, 0) = temp_a1;
    }
}

void func_sc04_012_8017DED4(u8 *o) {
    SV8 v;
    s32 a;
    s32 b;
    s32 c;
    s32 e;
    s32 f;
    s32 g;
    s32 h;
    s32 x;
    s32 lim;

    a = rand();
    b = rand();
    c = rand();
    a &= 1;
    a <<= 8;
    b &= 0x1F;
    b <<= 3;
    a += b;
    a += c & 0x1F;
    v.x = a;
    v.z = 0;
    v.y = 0;
    e = rand();
    f = rand();
    g = rand();
    h = rand();
    e &= 3;
    e <<= 10;
    f &= 0x1F;
    f <<= 5;
    e += f;
    g &= 3;
    g <<= 8;
    e += g;
    RotateSVectorY(e + (h & 0xFF), &v, &v);
    clamp_DCB4(&v.x, v.x, ((s16 *) D_sc04_012_801930C8)[0]);
    clamp_DCB4(&v.z, v.z, ((s16 *) D_sc04_012_801930C8)[1]);
    AF(o, s16, 6) += v.x;
    AF(o, s16, 0xA) += v.y;
    AF(o, s16, 0xE) += v.z;
    AF(o, s16, 0x16) = (rand() & 7) + 8;
}

void func_sc04_012_8017E060(s32 arg0) {
    D_sc04_012_80191C70[AF(arg0, s32, 0x34)] = 0;
    FreeProp(arg0);
}

void func_sc04_012_8017E090(StageActor *arg0) {
    D_sc04_012_801822C4[arg0->state]();
}

void func_sc04_012_8017E0CC(s32 arg0) {
    SetMoverTimer(arg0, 0);
    NextState(arg0);
}

void func_sc04_012_8017E100(u8 *arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (TickTimer() != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(g_PlayerModel, s32, 4) >= 0) && (PlayerEvent08((s32) &g_Player) == 0)) {
            case 1:
                func_sc04_012_8017E250((s32) arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_012_8017E250((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_012_8017E250((s32) arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_012_8017E250((s32) arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_012_8017E250((s32) arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_012_8017E250((s32) arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        SetMoverTimer((s32) arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_012_8017E250(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_012_801822CC;
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

void func_sc04_012_8017E33C(u8 *arg0) {
    D_sc04_012_80182300[AF(arg0, u16, 2)]();
}

void func_sc04_012_8017E378(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    CopyPosInt(arg0 + 4, (s32) (arg0 + 0x10));
    InitSpriteKind3(temp_s1, (s32) &D_sc04_012_801822F4, 0x270, 0x100);
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

void func_sc04_012_8017E45C(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        SetObjTimer((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_012_8017E4C8(u8 *o) {
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
