#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_002_8017BE9C(void) {
}

void func_sc05_002_8017BEA4(void) {
}

void func_sc05_002_8017BEAC(void) {
}

void func_sc05_002_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_002_8018402C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc05_002_80184014;
extern void (*D_sc05_002_80184034[])();
extern u8 D_sc05_002_80184020;
extern void (*D_sc05_002_801840DC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_002_8017E088(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc05_002_801840E4[])();
void func_sc05_002_8017E0D8(void);
void func_sc05_002_8017E0B0(void);
extern void func_800D1EBC();
extern void (*D_sc05_002_801840F8[])();
extern u8 D_sc05_002_80184104;
extern void StartPlayerActionScript();
extern u8 D_sc05_002_80184110;
extern u8 D_sc05_002_80184124;
extern void func_sc05_002_8017E1A0();
extern void (*D_sc05_002_80184128[])();
extern void (*D_sc05_002_8019C7E4[])();
extern void (*D_sc05_002_8019C818[])();
extern void (*D_sc05_002_8019CD64[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc05_002_80180554;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc05_002_8019CA54;
extern s32 * func_sc05_002_801800E4();
extern s32 D_sc05_002_8019CABC[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc05_002_8019CC88;
extern s32 D_sc05_002_8019CC8C;
extern s32 D_sc05_002_8019CCA0;
extern s32 D_sc05_002_8019CCB4;
extern s32 D_sc05_002_8019CD20;
extern s32 D_sc05_002_8019CC04[];
extern s32 D_sc05_002_8019CB80[];
extern void EndEvent();
extern void GiveItem();
extern void FreeActor();
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc05_002_8017FE8C();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc05_002_8019CD8C[])();
extern u8 D_sc05_002_8019CA88;
extern u8 D_sc05_002_8019D22C;
extern u8 D_sc05_002_8019D44C;
extern s32 PlaySoundId();
extern u8 D_sc05_002_8019D23C;
extern u8 D_sc05_002_8019D344;

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc05_002_80199FD4[])();
extern void func_sc05_002_8017F194();
extern void GainStat0FromActor();
extern void HideModel();
extern u8 D_sc05_002_8019C4C4;
extern u8 D_sc05_002_80199FF4;
extern s32 ActorSegmentDamagesPlayer();
extern s32 func_sc05_002_8017F17C();
extern u8 D_80078EC1;
extern s32 DistSqToPlayer();

extern u8 D_sc05_002_80196B4C;
extern s32 D_sc05_002_8019FE48;
extern s32 D_sc05_002_8019FF34;
extern u8 D_sc05_002_8019FF50;
extern void func_8013C0F8();
extern void func_sc05_002_8017CD9C();

extern u8 D_sc05_002_8019C808;
extern u8 D_sc05_002_8019CA2C;
extern s32 AllocActorModel();
extern void func_8001C810();
extern void SetState();
extern void NextState();

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

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

void func_sc05_002_8017BEBC(u8 *obj) {
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
typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
extern void StopMotion();
extern s32 TickTimer();
extern void SetForwardVelocity();
extern s32 TurnStep();
extern s32 func_sc05_002_8017F0D0();
extern s32 MoveCollidePassable();
extern void AngleToVec2();
extern void HeadingPitchTo();
extern s16 D_80126B62;
extern void UpdateModelZYX();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u16 v[6]; } U12;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
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
extern u8 g_CameraFocus;
extern u8 D_sc05_002_8018412C[];
extern s32 GetObjPadPressed();
extern void func_sc05_002_8017E27C();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

typedef struct { u16 a, b, c, d; } U16x4;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 TurnStepToTarget();
extern u8 D_sc05_002_80199FA4;

extern u8 D_sc05_002_80199F68;
extern u8 D_sc05_002_80199FAC;
extern void func_80143994();
extern void ShowModel();
extern s32 IsOnScreen();
extern s16 g_PlayerTargetOff;
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

extern s16 D_sc05_002_8019C7D4[];
extern s16 D_sc05_002_8019C7CC[];
extern u16 D_sc05_002_8019C7DC[];
extern s32 SpawnActor();
extern void UpdateColumnSound();
extern s16 D_sc05_002_8019C7C4[];
extern s16 D_sc05_002_8019C800[];

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
extern void *g_PlayerModel;
extern void CallActionHandler();
extern SV8 D_sc05_002_8019CD7C[];

extern u8 g_Actors[];
extern s16 D_sc05_002_8019C7F0[];
extern s16 D_sc05_002_8019C7F4[];
extern s16 D_sc05_002_8019C7F8[];
extern s16 D_sc05_002_8019C7FC[];

extern s32 AllocActorSprite();
extern u8 D_sc05_002_8019C614;
extern void InitSpriteKind2();
void ColumnSpawnRow(StageActor *o);
extern void CarryPlayerExact();

typedef struct { s16 v; } S16R;
extern u16 D_sc05_002_80183C14[];

void func_sc05_002_8017CD9C(u8 *obj, u8 *hdr, s32 ph, s32 dy) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    SV8 v[4];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 yo;
    s32 i;
    u8 *pk;
    u32 *ot;
    s32 n;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y, z;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl, zh, zl;
    s32 type;
    s32 half;
    s32 p;
    u8 *d;
    u8 *a, *b, *d3;
    u32 *t;

    if (AF(obj, s32, 0) != 0) return;
    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    c = (ChunkDCM *)(hdr + 0x14);
    p = ph;
    yo = dy;
    half = p / 2;
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        x = c->x;
        y = c->y;
        z = c->z;
        xl = x; xh = x >> 16;
        yl = y + yo; yh = (y >> 16) + yo;
        zl = z; zh = z >> 16;
        box[0].x = xl; box[0].y = yl; box[0].z = zl;
        box[1].x = xh; box[1].y = yl; box[1].z = zl;
        box[2].x = xl; box[2].y = yl; box[2].z = zh;
        box[3].x = xh; box[3].y = yl; box[3].z = zh;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        box[4].x = xl; box[4].y = yh; box[4].z = zl;
        box[5].x = xh; box[5].y = yh; box[5].z = zl;
        box[6].x = xl; box[6].y = yh; box[6].z = zh;
        box[7].x = xh; box[7].y = yh; box[7].z = zh;
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
        if ((s16)h < -110 || (s16)l > 110) continue;

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = verts + (w & 0xFFFF);
            b = verts + (w >> 16);
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            v[0] = *(SV8 *)a;
            v[1] = *(SV8 *)b;
            v[2] = *(SV8 *)d3;
            v[0].y += D_sc05_002_80183C14[(v[0].z + p) & 0x1FF] + D_sc05_002_80183C14[(v[0].x + half) & 0x1FF];
            v[1].y += D_sc05_002_80183C14[(v[1].z + p) & 0x1FF] + D_sc05_002_80183C14[(v[1].x + half) & 0x1FF];
            v[2].y += D_sc05_002_80183C14[(v[2].z + p) & 0x1FF] + D_sc05_002_80183C14[(v[2].x + half) & 0x1FF];
            gte_ldv3c(&v[0]);
            gte_rtpt();
            gte_stflg(&g.flag);
            if (g.flag & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
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
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type == 7) g.z = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v[3] = *(SV8 *)d;
                v[3].y += D_sc05_002_80183C14[(v[3].z + p) & 0x1FF] + D_sc05_002_80183C14[(v[3].x + half) & 0x1FF];
                gte_ldv0(&v[3]);
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
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type == 3) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0] | 0x2000000;
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

void func_sc05_002_8017DA00(u8 *arg0) {
    D_sc05_002_8018402C[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DA3C(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    SpawnEffect(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = SpawnEffect(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc05_002_80184014, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        FreeEffect(a);
    }
}

void func_sc05_002_8017DC00(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        FreeEffect((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc05_002_8017DC94(u8 *arg0) {
    D_sc05_002_80184034[AF(arg0, u16, 2)]();
}

void func_sc05_002_8017DCD0(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc05_002_80184020, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect(arg0);
}

void func_sc05_002_8017DD74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        FreeEffect((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

void func_sc05_002_8017DDD8(u8 *arg0) {
    D_sc05_002_801840DC[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DE14(u8 *arg0) {
    func_sc05_002_8017E088();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DE58(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc05_002_8017DE7C(u8 *arg0) {
    D_sc05_002_801840E4[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017DEB8(u8 *arg0) {
    func_sc05_002_8017E0D8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DEFC(u8 *arg0) {
    func_sc05_002_8017E0B0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_002_8017DF3C(u8 *arg0) {
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

void func_sc05_002_8017DFB8(void) {
    func_800D1EBC();
}

void func_sc05_002_8017DFD8(u8 *arg0) {
    D_sc05_002_801840F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_002_8017E014(u8 *arg0) {
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

void func_sc05_002_8017E088(void) {
    StartPlayerActionScript((s32) &D_sc05_002_80184104, 0x01000000);
}

void func_sc05_002_8017E0B0(void) {
    StartPlayerActionScript((s32) &D_sc05_002_80184110, 0x01000000);
}

void func_sc05_002_8017E0D8(void) {
    StartPlayerActionScript((s32) &D_sc05_002_80184124, 0x01000000);
}

void RoomInitCamera(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_002_8017E1A0, 0);
    SnapCamera((s32) &g_Camera);
    func_sc05_002_8017E1A0((s32) &g_Camera);
}

void func_sc05_002_8017E1A0(s32 arg0) {
    D_sc05_002_80184128[AF(arg0, u8, 4)]();
}

void func_sc05_002_8017E1DC(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_002_8018412C)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc05_002_8017E27C((s32) arg0, (s32) &v);
}

void func_sc05_002_8017E27C(u8 *arg0, u8 *arg1) {
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

s32 func_sc05_002_8017E414(void) {
    return 0x5F;
}

void func_sc05_002_8017E41C(void) {
    switch (D_sc05_002_8019FF34) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc05_002_80196B4C);
        D_sc05_002_8019FE48 = 0;
        D_sc05_002_8019FF34 += 1;
        return;
    case 1:
        func_sc05_002_8017CD9C((s32) &D_sc05_002_8019FF50, (s32) &D_sc05_002_80196B4C, D_sc05_002_8019FE48, 0);
        D_sc05_002_8019FE48 += 0x14;
        return;
    }
}

void func_sc05_002_8017E4C0(StageActor *arg0) {
    s32 temp_v0;

    D_sc05_002_80199FD4[arg0->state]();
    if (arg0->kind != 0) {
        temp_v0 = arg0->workE8 + 1;
        arg0->workE8 = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc05_002_8017F194((s32) arg0);
        }
    }
}

void func_sc05_002_8017E53C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_002_80199F68) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = -1;
        arg0->params = (s32 *) &D_sc05_002_80199FAC;
        arg0->reactOpts |= 1;
        arg0->workE4 = -((rand() % 8 + 12) << 16);
        SetScript(arg0, (s32) &D_sc05_002_8019C4C4);
        func_80143994(arg0, 0x1000);
        if ((u16)arg0->param & 0x10) {
            arg0->state = 3;
        } else {
            arg0->state = 1;
        }
    }
}

void func_sc05_002_8017E5FC(u8 *arg0) {
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

void func_sc05_002_8017E724(u8 *arg0) {
    s32 v;
    s32 w;

    func_sc05_002_8017F0D0(&v, arg0, arg0 + 0x102);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), v >> 16, AF(arg0, s16, 0xFE));
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4));
    MoveCollidePassable(arg0);
    if (!(AF(arg0, u16, 0x70) & 2) && TickTimer(arg0) != 0) {
        if (AF(arg0, s32, 0xE0) == 0) { if (func_sc05_002_8017F17C(arg0) != 0) { if (AF(arg0, u16, 0x70) & 1) { AF(arg0, s32, 0x1C) = rand() % 1800 + 0xE10; } else { AF(arg0, s32, 0x1C) = rand() % 60 + 0x78; } return; } AF(arg0, s16, 2) = 5; } else { AF(arg0, s16, 2) = 1; }
    }
}

void func_sc05_002_8017E894(u8 *arg0) {
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

void func_sc05_002_8017EA28(u8 *arg0) {
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

void func_sc05_002_8017EC7C(u8 *arg0) {
    SV4 a;
    s32 v;
    s32 w;
    s16 r;

    r = rand();
    AngleToVec2(&v, (s16)(r % 4095), (s16)(r % 128) + 0xC0);
    a.y = -0x30;
    a.x = v;
    a.z = v >> 16;
    func_sc05_002_8017F0D0(&v, arg0, &a);
    w = v;
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
    StopMotion(arg0);
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) - 0x20000);
    AF(arg0, s16, 2) = 6;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc05_002_8017ED88(u8 *arg0) {
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
        func_sc05_002_8017F0D0(&sp10, arg0, &D_sc05_002_80199FA4);
        w = sp10;
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        SetForwardVelocity(arg0, AF(arg0, s32, 0xE4) + 0xFFF80000);
        MoveCollidePassable(arg0);
        if (func_sc05_002_8017F0A4(arg0) != one && TickTimer(arg0) == 0) {
            return;
        }
        break;
    }
    AF(arg0, s16, 2) = 1;
}

void func_sc05_002_8017EF24(s32 arg0) {
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
        SetScript(arg0, (s32) &D_sc05_002_8019C4C4);
    }
}

void func_sc05_002_8017EFE0(StageActor *arg0) {
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

void func_sc05_002_8017F06C(StageActor *arg0) {
    arg0->state = 1;
    arg0->hitState = (u16) arg0->init->hitState;
    SetScript((s32) arg0, (s32) &D_sc05_002_8019C4C4);
}

s32 func_sc05_002_8017F0A4(StageActor *arg0) {
    return ActorSegmentDamagesPlayer(arg0, (s32) &D_sc05_002_80199FF4, (s32) (&D_sc05_002_80199FF4 + 8), 5) != 0;
}

s32 func_sc05_002_8017F0D0(s32 *arg0, u8 *arg1, u16 *arg2) {
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

s32 func_sc05_002_8017F17C(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc05_002_8017F194(Mover *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = DistSqToPlayer(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    PlaySoundId(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void ColumnScrollAndSpawn(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s16 d = D_sc05_002_8019C7D4[AF(o, s16, 0x70)];
    AF(p, s16, 0x30) += d;
    if (d < 0) {
        if (AF(p, s16, 0x30) <= D_sc05_002_8019C7CC[AF(o, s16, 0x70)] - 0x30) {
            AF(p, s16, 0x30) = D_sc05_002_8019C7CC[AF(o, s16, 0x70)];
        }
    } else {
        if (AF(p, s16, 0x30) >= D_sc05_002_8019C7CC[AF(o, s16, 0x70)] + 0x30) {
            AF(p, s16, 0x30) = D_sc05_002_8019C7CC[AF(o, s16, 0x70)];
        }
    }
    if (TickTimer(o) != 0) {
        AF(o, s32, 0x1C) = D_sc05_002_8019C7DC[AF(o, s16, 0x70)];
        SpawnActor(0x1A4, o);
    }
    if (AF(o, s16, 0x70) == 0) {
        UpdateColumnSound(o);
    }
}

void func_sc05_002_8017F30C(StageActor *arg0) {
    D_sc05_002_8019C7E4[arg0->state]();
}

void UpdateColumnSound(u8 *o) {
    s32 p = (s32)g_Actors;
    u8 *best = 0;
    Player *pl = &g_Player;
    s16 min = 0x7FFF;
    s32 i;
    s16 d, a;
    s16 *ta, *tb;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0x1A3) {
            d = AF(p, s16, 6) - pl->pos[0].h.i;
            a = d;
            if (d < 0) a = -d;
            if (min > a) {
                min = a;
                best = (u8 *)p;
            }
        }
        do { p += 0x10C; } while (0); /* MATCH-TRICK: loop-depth weight raises p's refs so it outranks i and y for a1 */
    }
    if (AF(o, s16, 0xFE) != 0) {
        p = 0xBAA;
        ta = D_sc05_002_8019C7F8;
        tb = D_sc05_002_8019C7FC;
    } else {
        p = 0x704;
        ta = D_sc05_002_8019C7F0;
        tb = D_sc05_002_8019C7F4;
    }
    if (best != 0) {
        s16 k = AF(best, s16, 0x70);
        s16 e, dist, dy, h, y;
        s32 sum;
        e = ta[k >> 1] - pl->pos[0].h.i;
        dist = e;
        if (e < 0) dist = -e;
        dist -= 0x80;
        if (dist < 0) dist = 0;
        dy = 0;
        h = tb[k >> 1];
        y = pl->pos[1].h.i;
        if (h > y) {
            dy = h - y;
        } else {
            h += D_sc05_002_8019C7C4[k];
            if (h < y) {
                dy = y - h;
            }
        }
        sum = dist + dy;
        if (sum < 0x200) {
            PlaySoundId(p, ((0x7F - (sum >> 2)) | 0x1000) & 0xFFFF);
            AF(o, s16, 0x84) = 1;
            return;
        }
    }
    if (AF(o, s16, 0x84) != 0) {
        PlaySoundId(4);
        AF(o, s16, 0x84) = 0;
    }
}

void ColumnSpawnRow(StageActor *o) {
    s16 n;
    u8 *q;
    if (o->workFE != 0 && (GetFlag(0xBA) & 0xFF) == 0) {
        for (n = D_sc05_002_8019C800[o->param]; n < D_sc05_002_8019C7C4[o->param]; n += 0x100) {
            q = (u8 *)SpawnActor(0x1A4, o);
            if (q != 0) {
                if (D_sc05_002_8019C7D4[o->param] < 0) {
                    AF(q, u16, 0xA) -= n;
                } else {
                    AF(q, u16, 0xA) += n;
                }
            }
        }
        return;
    }
    for (n = 0; n < D_sc05_002_8019C7C4[o->param]; n += 0x180) {
        q = (u8 *)SpawnActor(0x1A4, o);
        if (q != 0) {
            if (D_sc05_002_8019C7D4[o->param] < 0) {
                AF(q, u16, 0xA) -= n;
            } else {
                AF(q, u16, 0xA) += n;
            }
        }
    }
    o->timer = D_sc05_002_8019C7DC[o->param];
}

void func_sc05_002_8017F734(StageActor *arg0) {
    D_sc05_002_8019C818[arg0->state]();
}

void ColumnInit(StageActor *o) {
    ModelObj *p;
    o->workFE = (u16)o->param & 0x8000;
    o->param = (u16)o->param & 3;
    p = (u8 *)AllocActorSprite(o);
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    o->model = p;
    InitSpriteKind2(p, &D_sc05_002_8019C614, 0x300, 0x100);
    AF(p, u8, 0x27) = 0x64;
    AF(p, u16, 0x30) = D_sc05_002_8019C7CC[o->param];
    AF(p, s16, 0x32) = -0x20;
    p->flags = 0x8004;
    ColumnSpawnRow(o);
    if (o->workFE != 0 && (GetFlag(0xBA) & 0xFF) == 0) {
        SetState(o, 2);
        return;
    }
    NextState(o);
}

void func_sc05_002_8017F860(void) {
}

void ColumnPlatformInit(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_002_8019CA2C);
    arg0->hitData = (s32) ((s32) &D_sc05_002_8019C808 | 0x40000000);
    arg0->hitState = 0x4400;
    arg0->targetClass = 8;
    temp_v1 = arg0->model;
    arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i - 0x18);
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8040);
    if ((arg0->parent->workFE != 0) && !(GetFlag(0xBA) & 0xFF)) {
        SetState(arg0, 2);
        return;
    }
    NextState(arg0);
}

void ColumnPlatformMove(u8 *o) {
    u8 *p;
    s16 d;
    u16 a;
    s16 t;
    t = D_sc05_002_8019C7D4[AF(AF(o, u8 *, 0x64), s16, 0x70)];
    a = AF(o, u16, 0xA) + t;
    AF(o, u16, 0xA) = a;
    p = AF(o, u8 *, 0x64);
    d = a - AF(p, u16, 0xA);
    if (d < 0) d = -d;
    if (d >= D_sc05_002_8019C7C4[AF(p, s16, 0x70)]) {
        FreeActor();
        return;
    }
    if (AF(o, u8, 0x74) != 0) CarryPlayerExact();
}

void func_sc05_002_8017F9F4(void) {
}

void func_sc05_002_8017F9FC(StageActor *arg0) {
    D_sc05_002_8019CD64[arg0->state]();
}

void func_sc05_002_8017FA38(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc05_002_8019CA54) != 0) {
        if (!(GetFlag(D_sc05_002_8019CABC[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc05_002_801800E4);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc05_002_80180554);
        arg0->state = 1;
    }
}

void func_sc05_002_8017FB0C(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc05_002_8017FB34(void) {
}

void func_sc05_002_8017FB3C(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc05_002_8019CC8C = 0;
            SetFlag(D_sc05_002_8019CC04[AF(temp_s0, u16, 0xC)], 1);
            D_sc05_002_8019CC88 = 2;
        } else {
            D_sc05_002_8019CCA0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc05_002_8019CB80[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc05_002_8019CC88 = 0;
            D_sc05_002_8019CC8C = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc05_002_8019CCB4);
    } else {
        var_a1 = &D_sc05_002_8019CD20;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc05_002_8017FC88(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc05_002_8019CABC[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc05_002_8017FE8C() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc05_002_8017FDA8(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc05_002_8017FDD4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc05_002_8017FDE4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc05_002_8017FDF4(u8 *arg0) {
    SetFlag(D_sc05_002_8019CABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc05_002_8017FE34(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc05_002_8017FE68(void) {
    return func_80174764() == 1;
}

s32 func_sc05_002_8017FE8C(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc05_002_8019CABC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc05_002_8017FEF0(StageActor *arg0) {
    D_sc05_002_8019CD8C[arg0->state]();
}

void func_sc05_002_8017FF2C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_002_8019CA88) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc05_002_8019D44C);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc05_002_8019D22C);
        }
        arg0->state = 1;
    }
}

void func_sc05_002_8017FFB4(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_002_8019D23C);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc05_002_8019D344);
        arg0->hitState = 0x8C00;
    }
}

void func_sc05_002_80180074(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc05_002_8019D44C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc05_002_8019D22C);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc05_002_801800E4(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc05_002_8019CD7C[0], &a, &f);
    RotTransSV(&D_sc05_002_8019CD7C[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
