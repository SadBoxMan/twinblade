#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_095_8017BE9C(void) {
}

void func_sc03_095_8017BEA4(void) {
}

void func_sc03_095_8017BEAC(void) {
}

void func_sc03_095_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_095_801849C0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_095_8017D04C(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_095_8017D074(void);
extern void func_800D1EBC();
extern void (*D_sc03_095_801849D4[])();
extern u8 D_sc03_095_801849E0;
extern void StartPlayerActionScript();
extern u8 D_sc03_095_801849E4;
extern void func_sc03_095_8017D1CC();
extern void (*D_sc03_095_801849E8[])();
extern void (*D_sc03_095_80191B78[])();
extern void (*D_sc03_095_80191B90[])();
extern void (*D_sc03_095_80192F4C[])();
extern void (*D_sc03_095_80193000[])();
extern void (*D_sc03_095_801992E4[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc03_095_801849F8[];
extern s32 func_8013B7F4();
extern s32 D_sc03_095_8019BD18;
extern s32 SpawnActorArg();
extern u8 D_sc03_095_80181260;
extern u8 D_sc03_095_80192A60;
extern u8 D_sc03_095_80192A80;
extern s32 SetupActor();
extern u8 D_sc03_095_80192B44;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();

extern void SetState();
extern void DrawFadeBlack();
extern void InitModel();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void NextState();
extern s32 D_sc03_095_80191B84[];
extern u8 D_sc03_095_80194F64;
extern void (*D_sc03_095_80194FC4[])();
extern s32 func_sc03_095_801805C8();
extern s32 TickTimer();
extern s32 GroundDistSqToPlayer();
extern void func_sc03_095_80180654();
extern void func_sc03_095_8018070C();
extern void func_sc03_095_801806EC();
extern void GainStat0FromActor();
extern void HideModel();
extern void ZeroFill();
extern void DespawnActor();
extern void SyncModelPos();
extern u8 D_sc03_095_80194FF0;


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

extern void StopWithGravity();
extern void func_8001CA1C();
extern SV8 D_sc03_095_80192E1C[];
extern u8 D_sc03_095_80192B80;
extern u8 D_sc03_095_80192C40;
extern u8 D_sc03_095_80192CC8;
extern u8 D_sc03_095_80192D88;
extern u8 D_sc03_095_80192E6C;
extern u8 D_sc03_095_80192E90;
extern u8 D_sc03_095_80192E7C;
extern u8 D_sc03_095_80192E88;



extern u8 D_sc03_095_80184B44;
extern u8 D_sc03_095_80184C34;
s32 func_sc03_095_8017D528(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc03_095_80184C48;
extern u8 D_sc03_095_80184D88;
extern void UpdateModelZYX();

typedef struct { s16 vx, vy, vz, pad; } SV;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc03_095_8017BEBC(u8 *obj) {
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

void func_sc03_095_8017CD9C(void) {
    g_SpawnListFixed = &D_sc03_095_80184B44;
    g_SpawnListRanged = &D_sc03_095_80184C34;
    func_sc03_095_8017D528(0);
}

void func_sc03_095_8017CDDC(void) {
    g_SpawnListFixed = &D_sc03_095_80184C48;
    g_SpawnListRanged = &D_sc03_095_80184D88;
    func_sc03_095_8017D528(1);
}

void func_sc03_095_8017CE1C(u8 *arg0) {
    D_sc03_095_801849C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CE58(u8 *arg0) {
    func_sc03_095_8017D04C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CE9C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc03_095_8017CEC0(u8 *arg0) {
    func_sc03_095_8017D074();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_095_8017CF00(u8 *arg0) {
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

void func_sc03_095_8017CF7C(void) {
    func_800D1EBC();
}

void func_sc03_095_8017CF9C(u8 *arg0) {
    D_sc03_095_801849D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_095_8017CFD8(u8 *arg0) {
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

void func_sc03_095_8017D04C(void) {
    StartPlayerActionScript((s32) &D_sc03_095_801849E0, 0x01000000);
}

void func_sc03_095_8017D074(void) {
    StartPlayerActionScript((s32) &D_sc03_095_801849E4, 0x01000000);
}

void func_sc03_095_8017D09C(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x578;
    g_CameraAngleTarget = 0x31C;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_095_8017D1CC, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_095_8017D1CC((s32) &g_Camera);
}

void func_sc03_095_8017D134(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_095_8017D1CC, 1);
    SnapCamera((s32) &g_Camera);
    func_sc03_095_8017D1CC((s32) &g_Camera);
}

void func_sc03_095_8017D1CC(s32 arg0) {
    D_sc03_095_801849E8[AF(arg0, u8, 4)]();
}

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 g_Actors;
extern VoidFn D_sc03_095_80192B78[];
extern s32 HeadingTo();
extern s32 PathHitsModel();

typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_095_80199204;
extern s16 D_sc03_095_80199206;
extern s16 D_sc03_095_80199208;
extern Blk30 D_sc03_095_8019920C;
extern s16 D_sc03_095_8019923C;
extern s16 D_sc03_095_8019923E;
extern s16 D_sc03_095_80199240;
extern Blk30 D_sc03_095_80199244;
extern s16 D_sc03_095_80199274;
extern s16 D_sc03_095_80199276;
extern s16 D_sc03_095_80199278;
extern Blk30 D_sc03_095_8019927C;
extern s16 D_sc03_095_801992AC;
extern s16 D_sc03_095_801992AE;
extern s16 D_sc03_095_801992B0;
extern Blk30 D_sc03_095_801992B4;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void ApplyLight();

typedef struct { u8 b[0x34]; } R34;
extern s32 DistSqToPlayer();
extern s16 g_PlayerHitKind;
extern s32 ActorSegmentHitsPlayer();
extern s16 D_80126B62;
extern u16 D_sc03_095_80192AB4[];
extern u16 D_sc03_095_80192ADC[];
extern u16 D_sc03_095_80192B04[];
extern VoidFn D_sc03_095_80192B2C[];
extern void PlaySoundFor();

typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_095_80194E80;
extern u8 D_sc03_095_80194EA8;
extern s32 D_sc03_095_80194EDC;
extern u8 D_sc03_095_80194F7C;
extern s32 func_sc03_095_80180688();
extern s32 FindOtherActorByKind();
extern s32 PlayerFlag80();
extern void func_sc03_095_80180550();
extern s32 MoveCollidePassable();
extern s32 func_sc03_095_80180850();
extern s32 func_sc03_095_8018049C();
extern void FreeProp();

extern u16 D_800B99DA;
extern void AngleToVec2();
extern void SetForwardVelocity();
extern s32 func_sc03_095_8018072C();
extern s32 func_sc03_095_801807D0();

extern void FreeActor();
extern void SpawnKind1C();

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
extern u8 D_sc03_095_801849F0[];
extern s32 GetObjPadPressed();
extern void func_sc03_095_8017D390();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern u8 g_PlayerPosX;
extern void *g_PlayerModel;

void func_sc03_095_8017D208(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_095_801849F0)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc03_095_8017D390((s32) arg0, (s32) &v);
}

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern s16 D_80126B66;
extern s16 D_sc03_095_80191B6C[];
extern s16 D_sc03_095_80191B70;
extern s16 D_sc03_095_80191B72;
extern void func_sc03_095_8017DD98();
extern s16 g_PlayerX;
extern s16 D_sc03_095_80191B74;
extern void func_sc03_095_8017DDFC();

typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s16 D_sc03_095_80184A4A[];
extern s32 D_8012704C;
extern void func_sc03_095_8017D8A0();
extern s32 ActorTouchesPlayer();
extern VoidFn D_sc03_095_80192EA0[];
extern s32 SetLocalVelocityXZ();
extern s32 DistSqToTarget();
extern s32 TurnStep();
extern s16 D_80126CB6;
extern u8 D_sc03_095_80192E10;
extern s32 HeadingToTarget();
extern void SpawnShadow();
extern s32 HeadingToSV();
extern void SpawnActor();
extern s16 D_sc03_095_80192F12[];
extern u8 D_sc03_095_80192ED8;
extern u16 D_sc03_095_80192F0C[];
extern u16 D_sc03_095_80192F0E[];
extern u16 D_sc03_095_80192F10[];
extern u8 D_sc03_095_80192F58;
extern u8 D_sc03_095_80192FB8;
extern s16 g_PlayerAbsorbCounter;
extern s32 D_sc03_095_8019BD20;
extern s32 D_sc03_095_8019BD24;
extern u8 D_sc03_095_80194E8C;
extern s32 AllocActorSprite();
extern void InitSpriteKind2();
extern V16 D_sc03_095_8019922C;
extern s32 D_800A5EB0;
extern V16 D_sc03_095_80199264;
extern s32 D_800A5E90;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc03_095_80191B30;
extern u8 D_sc03_095_80191B44;
extern s32 D_sc03_095_80191B60[];
extern SV8 D_sc03_095_80194FE0[];
extern u8 g_GroundNormal;
extern void HitPlayer();
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
typedef struct { u16 x, y, z; } Pos3;
typedef struct { u8 r, g, b, cd; s32 pad[3]; } C16;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern void QueueImage();
extern u8 D_sc03_095_80194FF8;
extern s32 SpawnPropAt();



extern s16 D_sc03_095_801849F4[];
extern u8 D_sc03_095_80184A10;
extern s16 D_sc03_095_80184A44[];
extern s16 D_sc03_095_80184A46[];
extern s16 D_sc03_095_80184A48[];
extern u8 D_sc03_095_80184A4C;

void func_sc03_095_8017D2A8(u8 *arg0) {
    B8 v;
    u8 t;
    s16 lim;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_095_801849F4[t];
    }
    v = *(B8 *)&g_CameraFocus;
    lim = 0x5C0; if (AF(&v, s16, 0) < lim) AF(&v, s16, 0) = lim;
    lim = 0x940; if (AF(&v, s16, 0) > lim) AF(&v, s16, 0) = lim;
    lim = 0x1340; if (AF(&v, s16, 4) > lim) AF(&v, s16, 4) = lim;
    func_sc03_095_8017D390((s32) arg0, (s32) &v);
}

void func_sc03_095_8017D390(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_095_8017D528(s32 arg0) {
    return func_8013B7F4(D_sc03_095_801849F8[arg0], 0);
}

extern void (*D_sc03_095_80184A54[])();
extern s16 D_sc03_095_80184A4E;
extern s16 D_sc03_095_80184A50;
void func_sc03_095_8017D558(StageActor *o) {
    s16 v;
    s16 t;
    D_sc03_095_80184A54[o->state]();
    t = o->pos[1].h.i + 0x802;
    if (t <= 0) {
        v = 0x80;
    } else {
        v = ((o->workFE - o->pos[1].h.i) << 7) / (o->workFE + 0x802);
    }
    AF(&D_sc03_095_80184A4C, s16, 0) = D_sc03_095_80184A4E = D_sc03_095_80184A50 = v;
}

void func_sc03_095_8017D618(StageActor *arg0) {
    if (SetupActor(arg0, &D_sc03_095_80184A10)) {
        SetScript(arg0, (s32) &D_sc03_095_80181260);
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc03_095_80184A44[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc03_095_80184A46[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc03_095_80184A48[arg0->unkFC * 4];
        arg0->timer = D_sc03_095_80184A4A[arg0->unkFC * 4];
        arg0->state = 1;
        arg0->model->flags |= 0x80;
        arg0->model->unk80 = &D_sc03_095_80184A4C;
        arg0->workFE = (u16)arg0->pos[1].h.i;
    }
}

void func_sc03_095_8017D704(StageActor *arg0) {
    s32 temp_v0;

    MoveOnGround();
    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->timer = 0x1E;
        arg0->state = 4;
    }
    CarryPlayer((s32) arg0);
}

void func_sc03_095_8017D758(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_095_80184A4A[arg0->unkFC * 4];
        arg0->state = 3;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc03_095_8017D7B0(StageActor *arg0) {
    s32 temp_v0;

    MoveOnGround();
    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->timer = 0x1E;
        arg0->state = 4;
    }
    CarryPlayer((s32) arg0);
}

void func_sc03_095_8017D804(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_095_80184A4A[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

s32 func_sc03_095_8017D880(void) { if (D_8012704C == 0) return 0x38; return 0x44; }

void func_sc03_095_8017D8A0(StageActor *o, u8 *arg1, s32 n) {
    typedef struct { s16 x, y, z; } P6;
    P6 *p;
    u8 *r;
    s32 i;

    p = (P6 *)arg1;
    for (i = 0; p[i].x != 0; i++) {
        r = (u8 *)SpawnActorArg(0x167, (s16)n, o);
        if (r != 0) {
            AF(r, s16, 6) = p[i].x;
            AF(r, s16, 0xA) = p[i].y;
            AF(r, s16, 0xE) = p[i].z;
        }
    }
}

void func_sc03_095_8017D93C(StageActor *arg0) {
    arg0->unkFC = 0;
    SetState(arg0, 1);
}

void func_sc03_095_8017D960(StageActor *p) {
    s16 k;
    s16 z;
    s32 good;
    s16 t;
    s16 *c;

    c = (s16 *) &g_Player;
    k = p->param;
    good = 0;
    switch (k) {
    case 0:
    case 1:
        z = p->pos[2].h.i;
        if (D_80126B66 < z && z + D_sc03_095_80191B6C[k] < D_80126B66) {
            good = 1;
        }
        break;
    case 2:
        z = p->pos[2].h.i;
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_095_80191B70) {
            good = 1;
        }
        break;
    case 3:
        z = p->pos[1].h.i;
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_095_80191B72) {
            good = 1;
            break;
        }
        z = p->pos[0].h.i;
        if (c[3] < z && z + D_sc03_095_80191B6C[p->param + 1] < c[3]) {
            good = 1;
        }
        break;
    }
    if (good != 0 && D_sc03_095_8019BD18 == 0) {
        func_sc03_095_8017DD98(0x12F);
        func_sc03_095_8017DB10(p);
    } else {
        t = p->workFE;
        if (t != 0) {
            p->workFE = t - 0x10;
            if (p->workFE < 0) {
                p->workFE = 0;
            }
        }
    }
    func_sc03_095_8017DD30(p);
}

void func_sc03_095_8017DB10(StageActor *arg0) {
    arg0->unkFC = 1;
    SetState(arg0, 2);
}

void func_sc03_095_8017DB38(StageActor *p) {
    s16 k;
    s16 z;
    s32 bad;
    s16 t;

    k = p->param;
    bad = 0;
    switch (k) {
    case 0:
    case 1:
        z = p->pos[2].h.i;
        if (D_80126B66 < z && z + D_sc03_095_80191B6C[k] < D_80126B66) {
            break;
        }
        bad = 1;
        break;
    case 2:
        z = p->pos[2].h.i;
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_095_80191B70) {
            break;
        }
        bad = 1;
        break;
    case 3:
        z = p->pos[1].h.i;
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_095_80191B72) {
            break;
        }
        z = p->pos[0].h.i;
        if (g_PlayerX < z && z + D_sc03_095_80191B74 < g_PlayerX) {
            break;
        }
        bad = 1;
        break;
    }
    if (bad != 0 || D_sc03_095_8019BD18 != 0) {
        func_sc03_095_8017DDFC(0x12F);
        p->unkFC = 0;
        SetState(p, 1);
    } else {
        t = p->workFE;
        if (t < 0x70) {
            p->workFE = t + 0x10;
        }
    }
    func_sc03_095_8017DD30(p);
}

s32 func_sc03_095_8017DCD0(s32 arg0, s32 arg1) {
    D_sc03_095_8019BD18 = 1;
    return 1;
}

void func_sc03_095_8017DCE4(void) {
    D_sc03_095_8019BD18 = 0;
}

void func_sc03_095_8017DCF4(StageActor *arg0) {
    D_sc03_095_80191B78[arg0->state]();
}

void func_sc03_095_8017DD30(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 != 0) {
        DrawFadeBlack(temp_v0 & 0xFF, 4);
        AF(arg0, s16, 0x2A) = -2;
        temp_v0_2 = 0x80 - (AF(arg0, s16, 0xFE) * 3);
        AF(arg0, s16, 0x28) = temp_v0_2;
        AF(arg0, s16, 0x26) = temp_v0_2;
        AF(arg0, s16, 0x24) = temp_v0_2;
    }
}

void func_sc03_095_8017DD98(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Actors; p < (u8 *) &g_Actors + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), u32, 4) |= 0x80000000;
        }
    }
}

void func_sc03_095_8017DDFC(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Actors; p < (u8 *) &g_Actors + 0x6480; p += 0x10C) {
        if (*(u16 *) p == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        }
    }
}

void func_sc03_095_8017DE64(StageActor *arg0) {
    D_sc03_095_80191B90[arg0->state]();
}

void func_sc03_095_8017DEA0(StageActor *arg0) {
    s16 n;
    u16 t;
    StageActor *p;

    n = arg0->param;
    if (n < 3) {
        func_sc03_095_8017D8A0(arg0, D_sc03_095_80191B60[n], 0);
    } else {
        func_sc03_095_8017D8A0(arg0, &D_sc03_095_80191B30, 1);
        func_sc03_095_8017D8A0(arg0, &D_sc03_095_80191B44, 2);
    }
    t = arg0->animFlags;
    p = arg0;
    p->workFE = 0;
    D_sc03_095_8019BD18 = 0;
    p->animFlags = t | 0x1000;
    func_sc03_095_8017D93C((s32) p);
}

void func_sc03_095_8017DF38(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc03_095_80191B84[arg0->param]);
    temp_v1 = arg0->model;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8000);
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    NextState((s32) arg0);
}

void func_sc03_095_8017DFC8(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;

    if (arg0->parent->unkFC != 0) {
        temp_v0 = arg0->model;
        temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
        return;
    }
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 & 0x7FFFFFFF);
}

void func_sc03_095_8017E01C(u8 *arg0) {
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
        a.x = D_sc03_095_80192AB4[i];
        a.z = D_sc03_095_80192AB4[i + 1];
        b.x = D_sc03_095_80192AB4[i + 2];
        b.z = D_sc03_095_80192AB4[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_095_80192ADC[i];
        a.z = D_sc03_095_80192ADC[i + 1];
        b.x = D_sc03_095_80192ADC[i + 2];
        b.z = D_sc03_095_80192ADC[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_095_80192B04[i];
        a.z = D_sc03_095_80192B04[i + 1];
        b.x = D_sc03_095_80192B04[i + 2];
        b.z = D_sc03_095_80192B04[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc03_095_80192B2C[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_095_8017E2B4(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc03_095_80192B78[AF(arg0, u16, 2)]();
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

void func_sc03_095_8017E43C(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_095_80192E6C;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_095_80192E90;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_095_80192B44;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192CC8);
        SetScript(arg0, &D_sc03_095_80192D88);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192E7C);
        SetScript(arg0, &D_sc03_095_80192E88);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_095_80192B80);
        SetScript(arg0, &D_sc03_095_80192C40);
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

void func_sc03_095_8017E8E8(StageActor *arg0) {
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

void func_sc03_095_8017EA7C(StageActor *arg0) {
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

void func_sc03_095_8017EE2C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_095_80192EA0[AF(arg0, u16, 2)]();
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

void func_sc03_095_8017EF18(StageActor *arg0) {
    D_sc03_095_80192F4C[arg0->state]();
}

void func_sc03_095_8017EF54(u8 *arg0) {
    D_sc03_095_80193000[AF(arg0, u16, 2)]();
}

void func_sc03_095_8017EF90(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_095_8017EFA8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_095_80192A80) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_095_80192A60;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc03_095_8017F04C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_095_8017F068(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc03_095_80192B44) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc03_095_80192A60;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_095_80181260, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc03_095_8017F0EC(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc03_095_8017F128(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_095_8017F158(s32 arg0) {
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

void func_sc03_095_8017F1DC(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc03_095_80192E10);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_095_8017F2A0(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_095_80192E1C[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_095_8017F380(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_095_8017F3F0(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc03_095_80192E10);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_095_8017F4CC(void) {
}

void func_sc03_095_8017F4D4(StageActor *arg0) {
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

void func_sc03_095_8017F58C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_095_80192ED8) != 0) {
        SetScript(arg0, (s32) &D_sc03_095_80181260);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc03_095_80192F0C[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc03_095_80192F0E[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc03_095_80192F10[arg0->unkFC * 4];
        arg0->timer = D_sc03_095_80192F12[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc03_095_8017F650(s32 arg0) {
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

void func_sc03_095_8017F6A4(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_095_80192F12[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc03_095_8017F720(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_095_80192F58);
    SetScript(arg0, &D_sc03_095_80192FB8);
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

void func_sc03_095_8017F804(u8 *arg0) {
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

void func_sc03_095_8017F8D0(u8 *o) {
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

void func_sc03_095_8017F9A8(StageActor *arg0) {
    s32 temp_a2;

    D_sc03_095_80194FC4[arg0->state]();
    if (arg0->workE4 != 0) {
        func_sc03_095_801805C8((s32) arg0);
    }
    if (arg0->kind != 0) {
        temp_a2 = arg0->workD4;
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_095_80194F64, temp_a2 + 8);
        }
    }
}

void func_sc03_095_8017FA38(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 temp_v1;

    SetupActor(arg0, (s32) &D_sc03_095_80194EA8);
    temp_v0 = AllocActorModel();
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_095_80194E80);
    temp_v0->unk80 = (s32) ((u8 *)arg0 + 0xFC);
    temp_v0->scale.vy = 0x2000;
    temp_v0->scale.vx = 0x2000;
    temp_v0->unk04 |= 0x50000000;
    temp_v0->flags |= 0x90;
    arg0->model = temp_v0;
    arg0->workD4 = func_sc03_095_80180688(arg0);
    arg0->hitMask = 0x2000;
    arg0->unkFC = 0x80;
    arg0->workFE = 0x80;
    arg0->work100 = 0x80;
    arg0->hitState = 0;
    if ((u16)arg0->param & 1) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_095_80194F7C;
        arg0->reactMask = -0x2003;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
    }
    temp_v1 = (u16)arg0->param;
    if (temp_v1 & 0x4000) {
        arg0->state = 5;
        arg0->unkFC = 0;
        arg0->workFE = 0;
        arg0->work100 = 0;
    } else if (!(temp_v1 & 0x8000)) {
        arg0->state = 3;
    } else {
        arg0->state = 1;
        arg0->unkFC = 0;
        arg0->workFE = 0;
        arg0->work100 = 0;
        func_sc03_095_8018070C(arg0->workD4);
    }
    if (FindOtherActorByKind(arg0, 0x1A2) == 0) {
        arg0->workE4 = 1;
        arg0->ext1 = &D_sc03_095_80194EDC;
        arg0->ext0 = &D_sc03_095_80194EDC;
        arg0->workE0 = *(s32 *)arg0->ext0;
    }
}

void func_sc03_095_8017FBC4(s32 arg0, s32 arg1, s32 arg2) {
    if ((TickTimer(arg0, arg1, arg2) != 0) && (GroundDistSqToPlayer(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc03_095_8017FC14(StageActor *o) {
    s16 v;
    v = ((u32)rsin(o->timer << 4) >> 5) & 0xFF;
    o->unkFC = o->workFE = o->work100 = v;
    if (++o->timer > 0x40) {
        o->state = 3;
        o->hitState = o->init->hitState;
        o->timer = rand();
        func_sc03_095_801806EC(o->workD4);
    }
}

void func_sc03_095_8017FC90(StageActor *arg0) {
    s32 temp_v0;
    s32 var_v0;

    arg0->state = 4;
    temp_v0 = rand((s32) arg0);
    var_v0 = temp_v0 / 64;
    arg0->workE8 = (s32) ((temp_v0 - (var_v0 << 6)) + 0x40);
}

void func_sc03_095_8017FCE4(u8 *arg0) {
    SV p;
    u8 unused[8];

    if (!(AF(arg0, u16, 0x70) & 1)) {
        AF(arg0, s16, 0x52) = (u32) rsin(AF(arg0, s32, 0x1C) << 5) >> 8;
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(AF(arg0, u8 *, 0x20), s16, 8);
            p.vy = AF(AF(arg0, u8 *, 0x20), s16, 0xA) + 0x40;
            p.vz = AF(AF(arg0, u8 *, 0x20), s16, 0xC);
            func_sc03_095_80180850(&p, 0x60);
        }
    } else {
        if (AF(arg0, u8, 0x1C) == 0) {
            AF(arg0, s32, 0xE8) = rand() % 64 + 0x40;
        }
        if (PlayerFlag80() == 0) {
            func_sc03_095_80180550(arg0, -0x28000);
            MoveCollidePassable(arg0);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        }
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(arg0, s16, 6);
            p.vy = AF(arg0, s16, 0xA);
            p.vz = AF(arg0, s16, 0xE);
            p.vy += 0x38;
            func_sc03_095_80180850(&p, 0x80);
        }
    }
    func_sc03_095_8018049C(arg0);
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000 - (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) >> 1);
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_095_8017FEB8(u8 *arg0) {
    s32 w;
    s16 a;
    u8 c;

    AF(arg0, s16, 0x52) = (u32) rsin(D_800B99DA << 5) >> 8;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        a = rand() % 4096;
        AngleToVec2(&w, a, rand() % AF(arg0, s16, 0xDC));
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88) + w;
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C) + (w >> 16);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
        UpdateModelZYX(arg0);
        SetForwardVelocity(arg0, -0x20000);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_095_8018072C(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x41) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34)++;
            func_sc03_095_801806EC(AF(arg0, s32, 0xD4));
        }
        break;
    case 2:
        if (func_sc03_095_8018072C(arg0) == 0 || TickTimer(arg0) != 0 || func_sc03_095_801807D0(arg0, 0x400) != 0) {
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
            func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
        }
        break;
    case 3:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_095_8018072C(arg0);
        if (--AF(arg0, s32, 0x1C) < 0) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = rand() % 96;
        }
        break;
    case 4:
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc03_095_8018014C(void) {
}

void func_sc03_095_80180154(u8 *arg0) {
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_095_80180188(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

void func_sc03_095_801801B4(u8 *arg0) {
    typedef struct { u8 pad[0x18]; s16 x18; u8 pad2[0x12]; u16 x2C; } Sub;
    typedef struct { u8 pad[0x20]; Sub *x20; } Obj;
    s32 x;
    s32 d;
    s32 k;
    s32 t;
    s32 v;

    AF(arg0, s16, 0x5C) = 0;
    x = g_PlayerAbsorbCounter;
    if (x == 0) {
        D_sc03_095_8019BD20 = 0x2000;
        D_sc03_095_8019BD24 = 0x2000;
    }
    x = ((0x90 - x) << 13) / 144;
    k = 0x2000;
    d = D_sc03_095_8019BD20 - x;
    if (d > 0) {
        D_sc03_095_8019BD20 -= d >> 2;
    } else if (d < 0) {
        D_sc03_095_8019BD20 += -d / 4;
    }
    t = D_sc03_095_8019BD24;
    D_sc03_095_8019BD24 = k;
    v = D_sc03_095_8019BD20 - t + k;
    D_sc03_095_8019BD20 = v;
    ((Obj *)arg0)->x20->x2C |= 0x10;
    ((Obj *)arg0)->x20->x18 = v >= 0 ? v : -v;
}

void func_sc03_095_801802A0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_095_8018070C(AF(arg0, s32, 0xD4));
}

void func_sc03_095_801802CC(u8 *arg0) {
    u8 temp_v0;

    temp_v0 = (u32) rsin(AF(arg0, s32, 0x1C) << 4) >> 5;
    AF(arg0, s16, 0x100) = temp_v0;
    AF(arg0, s16, 0xFE) = temp_v0;
    AF(arg0, s16, 0xFC) = temp_v0;
    if (TickTimer((s32) arg0) != 0) {
        func_sc03_095_80180388((s32) arg0);
    }
}

void func_sc03_095_80180328(u8 *arg0) {
    void *temp_v1;

    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_095_801806EC(AF(arg0, s32, 0xD4));
}

void func_sc03_095_80180388(s32 arg0) {
    void *temp_v1;

    GainStat0FromActor(arg0);
    if ((AF(arg0, s32, 0xE4) == 0) && !(AF(arg0, u16, 0x70) & 0x800)) {
        ZeroFill(AF(arg0, s32, 0xD4), 0x38);
        DespawnActor(arg0);
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    if (!(AF(arg0, u16, 0x70) & 0x800)) {
        AF(arg0, s16, 2) = 6;
        HideModel(arg0);
        ZeroFill(AF(arg0, s32, 0xD4), 0x38);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
    func_sc03_095_80180654(AF(arg0, s32, 0xD4), 0);
    SyncModelPos(arg0);
}

s32 func_sc03_095_8018049C(u8 *arg0) {
    SV8 a;
    SV8 b;

    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc03_095_80194FE0[0], &a);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc03_095_80194FE0[1], &b);
    if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
        HitPlayer(1, 1, AF(AF(arg0, u8 *, 0x20), s16, 0x12), 9, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

void func_sc03_095_80180550(u8 *arg0, s32 arg1) {
    SMtx m;
    V4 v;

    AF(arg0, s16, 0x106) += TurnStep(AF(arg0, s16, 0x106), HeadingToTarget(arg0), AF(arg0, s32, 0xE8));
    v.y = 0;
    v.x = 0;
    v.z = arg1;
    RotMatrixZYX(arg0 + 0x104, &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

s32 func_sc03_095_801805C8(u8 *arg0) {
    s32 *p;
    s32 t;

    if (AF(arg0, s32, 0xE0) == 0) {
        return 1;
    }
    AF(arg0, s32, 0xE0)--;
    if (AF(arg0, s32, 0xE0) > 0) {
        return 0;
    }
    p = AF(arg0, s32 *, 0xD0);
    p += 2;
    t = *p;
    if (!(t & 0x40000000)) {
        if (t < 0) {
            AF(arg0, s32, 0xE0) = 0;
            return 1;
        }
    } else {
        p = AF(arg0, s32 *, 0xCC);
    }
    AF(arg0, s32, 0xE0) = p[0];
    AF(arg0, s32 *, 0xD0) = p;
    QueueImage(p[1]);
    return 0;
}

void func_sc03_095_80180654(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_095_80194FF0;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

s32 func_sc03_095_80180688(void) {
    s32 temp_v0;

    temp_v0 = AllocActorSprite();
    if (temp_v0 == 0) {
        return 0;
    }
    InitSpriteKind2(temp_v0, (s32) &D_sc03_095_80194E8C, 0x298, 0x1B0);
    AF(temp_v0, u8, 0x27) = 0x68;
    AF(temp_v0, s16, 0x1A) = 0x1800;
    AF(temp_v0, s16, 0x18) = 0x1800;
    return temp_v0;
}

void func_sc03_095_801806EC(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_095_8018070C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

s32 func_sc03_095_8018072C(u8 *arg0) {
    SV p;
    s32 r;
    u16 m;

    r = MoveCollidePassable(arg0);
    if (D_800B99DA % 24 == 0) {
        p.vx = AF(arg0, u16, 6);
        p.vy = AF(arg0, u16, 0xA);
        p.vz = AF(arg0, u16, 0xE);
        p.vy += 0x38;
        func_sc03_095_80180850(&p, AF(arg0, s16, 0xDE));
    }
    return r == 0;
}

s32 func_sc03_095_801807D0(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (HeadingTo((s32) &g_PlayerPosX, arg0 + 4) - AF(g_PlayerModel, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

s32 func_sc03_095_80180850(s32 arg0, s32 arg1) {
    u8 *o;
    u8 *t;

    o = (u8 *)SpawnPropAt(0x44, arg0);
    if (o == 0) {
        return 0;
    }
    t = AF(o, u8 *, 0x20);
    AF(t, s32 *, 0x20) = (s32 *)&D_sc03_095_80194FF8;
    AF(t, s16, 0x28) = 0x290;
    AF(t, s16, 0x2A) = 0x1A0;
    AF(t, u8, 0x27) = 0x70;
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = 1;
    AF(t, s32, 4) |= 0x50000000;
    AF(o, s32, 0x1C) = 1;
    AF(o, s32, 0x2C) = arg1;
    AF(t, u8, 0x24) = AF(t, u8, 0x25) = AF(t, u8, 0x26) = arg1;
    return (s32)o;
}

void func_sc03_095_801808F4(u8 *arg0) {
    u8 *o;
    s16 v;
    s16 h;
    u32 c;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u16, 2) == 0) {
        h = rsin(AF(arg0, s32, 0x1C) << 6) * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(arg0, u16, 2)++;
            AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) * 2 - 1;
        }
    } else {
        v = rsin(AF(arg0, s32, 0x1C) << 5);
        c = (u32) (AF(arg0, s32, 0x2C) * v) >> 12;
        h = v * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        AF(o, u8, 0x24) = c;
        AF(o, u8, 0x25) = c;
        AF(o, u8, 0x26) = c;
        if (--AF(arg0, s32, 0x1C) == 0) {
            FreeProp(arg0);
        }
    }
}

void func_sc03_095_801809FC(StageActor *arg0) {
    D_sc03_095_801992E4[arg0->state]();
}

void func_sc03_095_80180A38(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc03_095_80199204, D_sc03_095_80199206, D_sc03_095_80199208);
        p = &D_sc03_095_8019920C;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc03_095_8019923C, D_sc03_095_8019923E, D_sc03_095_80199240);
        p = &D_sc03_095_80199244;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc03_095_80199274, D_sc03_095_80199276, D_sc03_095_80199278);
        p = &D_sc03_095_8019927C;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc03_095_80199204, D_sc03_095_80199206, D_sc03_095_80199208);
        p = &D_sc03_095_8019920C;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc03_095_801992AC, D_sc03_095_801992AE, D_sc03_095_801992B0);
        p = &D_sc03_095_801992B4;
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

void func_sc03_095_80180C2C(StageActor *arg0) {
    g_Lights.c = D_sc03_095_8019922C;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_095_80180CDC(StageActor *arg0) {
    g_Lights.c = D_sc03_095_80199264;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_095_80180D8C(StageActor *arg0) {
    g_Lights.a = D_sc03_095_8019927C.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_095_80180E3C(void) {
}

void func_sc03_095_80180E44(StageActor *arg0) {
    g_Lights.a = D_sc03_095_801992B4.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}
