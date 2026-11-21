#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_109_8017BE9C(void) {
}

void func_sc03_109_8017BEA4(void) {
}

void func_sc03_109_8017BEAC(void) {
}

void func_sc03_109_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_109_80181D44[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc03_109_80181E10[])();
void func_sc03_109_8017D290(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_109_8017D2B8(void);
extern void func_800D1EBC();
extern void (*D_sc03_109_80181E24[])();
extern u8 D_sc03_109_80181E30;
extern void StartPlayerActionScript();
extern u8 D_sc03_109_80181E3C;
extern void func_sc03_109_8017D384();
extern void (*D_sc03_109_80181E50[])();
extern void (*D_sc03_109_80181E94[])();
extern void (*D_sc03_109_80181F18[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_109_8017E678;
extern u8 D_sc03_109_80181EAC;
extern s32 * func_sc03_109_8017DE18();
extern void RunScript();
extern s32 D_sc03_109_80181F10[];
extern s32 IsEventDone();
extern void EndEvent();
extern void (*D_sc03_109_80197274[])();
extern u8 D_sc03_109_80197224;

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 SetState();
extern s32 func_sc03_109_8017D624();
extern s32 SpawnActorArg();
extern void RejectSpawn();
extern u8 D_sc03_109_80197734;
extern u8 D_sc03_109_80197174;
extern s32 * func_sc03_109_8017E1AC();
extern s32 UpdateScript();
extern s32 D_sc03_109_8019A354;
extern void SaveContinuePoint();


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
extern s32 func_sc03_109_8017D644();
extern s32 func_sc03_109_8017D66C();
extern s32 func_sc03_109_8017D72C();
extern u8 D_sc03_109_80181E54;
extern s32 AllocActorModel();
extern void InitModel();
extern s32 GetFlag();
extern s32 TickTimer();

extern void (*D_sc03_109_80181E64[])();
extern void CarryPlayer();
extern void func_sc03_109_8017D790();
extern void *g_PlayerModel;
extern u8 D_sc03_109_80181E74;
extern u8 D_sc03_109_80181E84;
extern void InitNullModel();
extern void NextState();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

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
extern u8 D_sc03_109_80181D38;
extern u8 *func_800D21C4();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_109_8017D48C();
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
extern void CallActionHandler();
extern void ResetScriptVM();
extern SV8 D_sc03_109_80197290[];
extern s32 PathHitsModel();
extern s32 TargetInFront();

extern s32 SpawnEffect();
extern void FreeActor();
extern u8 D_sc03_109_80197744;
extern u8 D_sc03_109_8019784C;

void func_sc03_109_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc03_109_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc03_109_80181D38, 0x2A);
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

void func_sc03_109_8017C0E4(u8 *arg0) {
    D_sc03_109_80181D44[AF(arg0, u16, 2)]();
}

void func_sc03_109_8017C120(u8 *arg0) {
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

void func_sc03_109_8017C180(u8 *obj) {
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

void func_sc03_109_8017D060(u8 *arg0) {
    D_sc03_109_80181E10[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_109_8017D09C(u8 *arg0) {
    func_sc03_109_8017D290();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_109_8017D0E0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc03_109_8017D104(u8 *arg0) {
    func_sc03_109_8017D2B8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_109_8017D144(u8 *arg0) {
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

void func_sc03_109_8017D1C0(void) {
    func_800D1EBC();
}

void func_sc03_109_8017D1E0(u8 *arg0) {
    D_sc03_109_80181E24[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_109_8017D21C(u8 *arg0) {
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

void func_sc03_109_8017D290(void) {
    StartPlayerActionScript((s32) &D_sc03_109_80181E30, 0x01000000);
}

void func_sc03_109_8017D2B8(void) {
    StartPlayerActionScript((s32) &D_sc03_109_80181E3C, 0x01000000);
}

void func_sc03_109_8017D2E0(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_109_8017D384, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_109_8017D384((s32) &g_Camera);
}

void func_sc03_109_8017D384(s32 arg0) {
    D_sc03_109_80181E50[AF(arg0, u8, 4)]();
}

extern s32 D_80126B8C;
extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s16 D_80126B66;

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s32 w[4]; } W16;
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
typedef void (*StepFn)(void);
extern s32 DistSqToPlayer();

extern SV8 g_CameraFocus;

void CameraClampByHeight(u8 *o) {
    SV8 v;

    v = g_CameraFocus;
    if (v.y < -0x680) {
        if (v.x < -0x2E0) {
            v.x = -0x2E0;
        }
        if (v.x > 0x2C0) {
            v.x = 0x2C0;
        }
    } else {
        if (v.x < -0x240) {
            v.x = -0x240;
        }
        if (v.x > 0x240) {
            v.x = 0x240;
        }
    }
    func_sc03_109_8017D48C(o, &v);
}

void func_sc03_109_8017D48C(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_109_8017D624(StageActor *arg0) {
    return SetState(arg0, 1);
}

s32 func_sc03_109_8017D644(StageActor *arg0) {
    arg0->timer = 0x40;
    return SetState(arg0, 2);
}

s32 func_sc03_109_8017D66C(StageActor *arg0) {
    arg0->timer = 0xC0;
    return SetState(arg0, 3);
}

void func_sc03_109_8017D694(StageActor *arg0) {
    ModelObj *temp_a1;

    D_sc03_109_80181E64[arg0->state]();
    temp_a1 = arg0->model;
    temp_a1->rot.vy = (u16) ((u16)temp_a1->rot.vy + (u16)arg0->unkFC);
    CarryPlayer((s32) arg0, (s32) temp_a1);
    if (arg0->unk74 != 0) {
        AF(g_PlayerModel, u16, 0x12) = (u16) (AF(g_PlayerModel, u16, 0x12) + (u16)arg0->unkFC);
    }
    func_sc03_109_8017D790((s32) arg0);
}

s32 func_sc03_109_8017D72C(StageActor *arg0) {
    SpawnActorArg(0x191, 0, arg0);
    SpawnActorArg(0x191, 1, arg0);
    SpawnActorArg(0x191, 2, arg0);
    return SpawnActorArg(0x191, 3, arg0);
}

void func_sc03_109_8017D790(u8 *o) {
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

void func_sc03_109_8017D8A4(StageActor *arg0) {
    D_sc03_109_80181E94[arg0->state]();
}

void func_sc03_109_8017D8E0(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, arg0->message);
    arg0->model->colour = 0x01800180;
    arg0->hitData = (s32) ((s32) &D_sc03_109_80181E54 | 0x40000000);
    arg0->hitState = 0x4C00;
    arg0->targetClass = 8;
    if (arg0->param == 0) {
        func_sc03_109_8017D644(arg0);
    } else {
        func_sc03_109_8017D624(arg0);
    }
    func_sc03_109_8017D72C(arg0);
}

void func_sc03_109_8017D988(StageActor *arg0) {
    if (GetFlag(0xBA) & 0xFF) {
        func_sc03_109_8017D644(arg0);
        arg0->timer = 0;
        PlaySoundId(0x720, 0);
    }
}

void func_sc03_109_8017D9D8(StageActor *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (TickTimer() != 0) {
        temp_v0 = (u16)arg0->unkFC + 4;
        arg0->unkFC = temp_v0;
        if ((s16) temp_v0 >= 0x11) {
            func_sc03_109_8017D66C((s32) arg0);
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

void func_sc03_109_8017DAA0(StageActor *arg0) {
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

void SpinArmInit(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 temp_a0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitNullModel(temp_v0);
    arg0->workFE = (s16) ((u16)arg0->param & 0x100);
    temp_a0 = (u16)arg0->param & 3;
    arg0->param = temp_a0;
    if (arg0->workFE == 0) {
        arg0->model->rot.vy = (s16) ((u16)arg0->parent->model->rot.vy + (temp_a0 << 0xA));
        arg0->hitData = (s32) ((s32) &D_sc03_109_80181E74 | 0x40000000);
        arg0->hitState = 0x4C00;
        arg0->targetClass = 8;
    } else {
        arg0->hitData = (s32) &D_sc03_109_80181E84;
        arg0->hitState = 0x4800;
    }
    NextState((s32) arg0);
}

void func_sc03_109_8017DC54(StageActor *arg0, s32 arg1) {
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

s32 func_sc03_109_8017DCDC(void) {
    return 0x49;
}

void func_sc03_109_8017DCE4(StageActor *arg0) {
    D_sc03_109_80181F18[arg0->state]();
}

void func_sc03_109_8017DD20(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_109_80181EAC) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc03_109_8017E678);
        SpawnTalkMarker(arg0, (s32) &func_sc03_109_8017DE18);
    }
}

void func_sc03_109_8017DD84(void) {
}

void func_sc03_109_8017DD8C(StageActor *arg0) {
    RunScript((s32) arg0, D_sc03_109_80181F10[arg0->param]);
    arg0->state = 3;
}

void func_sc03_109_8017DDD8(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_109_8017DE18(u8 *arg0) {
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

void func_sc03_109_8017DE74(StageActor *arg0) {
    D_sc03_109_80197274[arg0->state]();
}

void func_sc03_109_8017DEB0(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor((s32) arg0, (s32) ((((u16)arg0->param & 0xF) * 0x34) + &D_sc03_109_80197174)) != 0) {
        if (!((u16)arg0->param & 1)) {
            temp_v0 = SpawnActorArg(0x1E3, 1, (s32) arg0);
            arg0->link = temp_v0;
            if (temp_v0 == 0) {
                RejectSpawn((s32) arg0);
                return;
            }
            arg0->state = 1;
            arg0->ext0 = SpawnTalkMarker((s32) arg0, (s32) &func_sc03_109_8017E1AC);
            return;
        }
        arg0->state = 5;
        arg0->work100 = (u16) arg0->parent->id;
        SetScript((s32) arg0, (s32) &D_sc03_109_80197734);
    }
}

void func_sc03_109_8017DF88(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_109_8017DFB0(void) {
}

void func_sc03_109_8017DFB8(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc03_109_80197224);
}

void func_sc03_109_8017DFE4(StageActor *arg0) {
    if (UpdateScript(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
    }
}

void func_sc03_109_8017E024(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->work100 != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_109_80197744);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_109_8019784C);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_109_8017E0E4(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animTimer == 0) {
        if (arg0->workFE == 2) {
            PlaySoundId(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc03_109_80197734);
        }
        arg0->state = 5;
        arg0->workFE = 0;
    }
}

void func_sc03_109_8017E150(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_109_8017E160(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc03_109_8017E170(void) {
    return D_sc03_109_8019A354 == 1;
}

void func_sc03_109_8017E188(u8 *arg0) {
    SaveContinuePoint(AF(arg0, s32, 0xDC));
}

s32 *func_sc03_109_8017E1AC(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    Mover *q;

    q = AF(o, u8 *, 0x64);
    m = AF(g_PlayerModel, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc03_109_80197290[0], &a, &flag);
    RotTransSV(&D_sc03_109_80197290[1], &b, &flag);
    if (PathHitsModel(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && TargetInFront(q, 0x300) != 0) {
        q->state = 3;
        ResetScriptVM();
        return (s32 *)&CallActionHandler;
    }
    return 0;
}
