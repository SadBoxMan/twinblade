#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc04_000_8017BE9C(void) {
}

void func_sc04_000_8017BEA4(void) {
}

void func_sc04_000_8017BEAC(void) {
}

void func_sc04_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc04_000_80186D80[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc04_000_8017CD9C();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void func_800D20C0();
extern void func_800D23D0();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void SpawnEffect();
extern void (*D_sc04_000_80186DD8[])();
extern void PlaySe();
extern void func_sc04_000_8017DF10();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc04_000_80186DEC[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc04_000_80186E00[])();
extern void func_800D22E4();
extern void func_sc04_000_8017E608();
extern void (*D_sc04_000_80186F94[])();
extern s32 FadeStep();
extern void (*D_sc04_000_80186F9C[])();
void func_sc04_000_8017EB34(void);
extern void func_800D1EBC();
extern void (*D_sc04_000_80186FA8[])();
extern void (*D_sc04_000_80186FB4[])();
extern u8 D_sc04_000_80186FBC;
extern void StartPlayerActionScript();
extern u8 D_sc04_000_80186FC0;
extern void (*D_sc04_000_80186FD4[])();
extern u8 D_sc04_000_80186FCC;
extern void func_sc04_000_8017EE20();
extern void (*D_sc04_000_80186FE4[])();
extern void RunScript();
extern u8 D_sc04_000_80187040;
extern void (*D_sc04_000_801870F0[])();
extern void (*D_sc04_000_8018712C[])();
extern void (*D_sc04_000_80199760[])();
extern void (*D_sc04_000_8019977C[])();
extern void (*D_sc04_000_8019D328[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc04_000_801835B0;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc04_000_8019D018;
extern s32 * func_sc04_000_80180EC4();
extern s32 D_sc04_000_8019D080[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern s32 D_sc04_000_8019D24C;
extern s32 D_sc04_000_8019D250;
extern s32 D_sc04_000_8019D264;
extern s32 D_sc04_000_8019D278;
extern s32 D_sc04_000_8019D2E4;
extern s32 D_sc04_000_8019D1C8[];
extern s32 D_sc04_000_8019D144[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc04_000_80180C6C();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc04_000_8019D350[])();
extern u8 D_sc04_000_8019D04C;
extern u8 D_sc04_000_8019D7F0;
extern u8 D_sc04_000_8019DA10;
extern u8 D_sc04_000_8019D800;
extern u8 D_sc04_000_8019D908;
extern void (*D_sc04_000_801A1380[])();
extern void (*D_sc04_000_801A6E0C[])();
extern void (*D_sc04_000_801A700C[])();
extern u8 D_sc04_000_801A6FBC;

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern void ZeroFill();
extern u8 D_sc04_000_801A6F0C;
extern s32 * func_sc04_000_801830E4();
extern s32 D_sc04_000_801AAEFC;
extern void SaveContinuePoint();

extern void BumpSub2Copy();
extern void SetMoverTimer();
extern void NextState();
extern void SetObjTimer();
extern u8 D_sc04_000_80187120;
extern void CopyPosInt();
extern void InitSpriteKind3();
extern s32 TickObjTimer();
extern s32 TickTimer();
extern u16 D_sc04_000_801A12E6;
extern u8 D_sc04_000_801A69B8;
extern s32 DistSqToTarget();

extern void PosToSVec();
extern s32 func_sc04_000_80182800();
extern void func_sc04_000_80182D78();
extern void StartFadeWhite();
extern s32 FadeWhiteStep();

extern s32 D_8011F9C4;
extern void SetVar32();
void func_sc04_000_8017EB0C(void);
extern void StartFade();
void func_sc04_000_8017ECA0(void);
extern s32 FindActorByKind();
extern void NextPlayerActionHandler();
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
extern s8 D_8012694D;
extern s32 g_CameraDist;
extern s32 func_800D0F8C();
extern u8 D_sc04_000_80199468;
extern u8 D_sc04_000_8019976C;
extern u8 D_sc04_000_80199774;
extern u8 D_sc04_000_801997EC;
extern u8 D_sc04_000_80199820;
extern s32 * func_sc04_000_801806B8();
extern s32 GetProgress();
extern void SetModelCullBox();
extern u8 D_sc04_000_80199570;
extern u8 D_sc04_000_8019CF90;
extern s32 SpawnShadow();
extern void StopWithGravity();
extern u8 D_sc04_000_80199618;
extern void FreeProp();
extern s16 g_PlayerX;
extern s16 D_80126B66;
extern void CallActionHandler();
extern void ResetScriptVM();
extern u8 D_sc04_000_80199830;
extern u8 D_sc04_000_80199868;
extern u8 D_sc04_000_801A69C8;
extern u8 D_sc04_000_801A6A90;
extern s32 func_sc04_000_801816DC();
extern void DropItem();
extern void func_sc04_000_80181ABC();

extern u8 D_sc04_000_801A12E4;
extern u8 D_sc04_000_801A1318;
extern s32 DistSqToPlayer();

extern u8 D_sc04_000_8019979C;
extern u8 D_sc04_000_801A6E48[];
extern u8 D_sc04_000_801A6E4C[];
extern void DespawnActor();

extern s32 PlayerEvent08();
extern void func_sc04_000_8017F628();
extern void *g_PlayerModel;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc04_000_80186D30;
extern u8 D_sc04_000_80186CCC[];
extern s32 PosDist();
extern void TakePlayerControl();
extern void SetShapeCircle();
extern u8 D_sc04_000_801A9AD8;
extern u8 D_sc04_000_801A9AD9;
extern u8 D_sc04_000_801A9ADA;
extern u8 D_sc04_000_801A9ADC;
extern u8 D_sc04_000_801A9ADD;
extern u8 D_sc04_000_801A9ADE;
extern s32 D_sc04_000_801A9CDC;
extern s32 D_sc04_000_801A9CE0;
extern s32 D_sc04_000_801A9CE4;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc04_000_8019DFB8;

void func_sc04_000_8017BEBC(u8 *obj) {
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

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
extern s8 D_sc04_000_80186DAC[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern void StepSpriteAnim();
extern s32 SpawnPropFrom();
extern void func_sc04_000_801821D0();

extern u8 D_sc04_000_801A6E8C;
extern u8 D_sc04_000_801A9DA8;
extern void func_sc04_000_80182564();

extern u8 D_sc04_000_801870F8;
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
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern u8 D_sc04_000_80186C98;
extern u8 D_sc04_000_80186CD4;
extern u8 D_sc04_000_8019DF90;
extern u8 D_sc04_000_801A9A68;
extern u8 D_sc04_000_801A9A74;
extern u8 D_sc04_000_801A9A75;
extern u8 D_sc04_000_801A9A76;
extern u8 D_sc04_000_801A9A84;
extern u8 D_sc04_000_801A9A85;
extern u8 D_sc04_000_801A9A86;
extern u8 D_sc04_000_801A9A95;
extern u8 D_sc04_000_801A9A96;
extern u8 D_sc04_000_801A9A98;
extern u8 D_sc04_000_801A9A99;
extern u8 D_sc04_000_801A9A9A;
extern u8 D_sc04_000_801A9A9C;
extern u8 D_sc04_000_801A9A9D;
extern u8 D_sc04_000_801A9A9E;
extern u8 D_sc04_000_801A9AA4;
extern u8 D_sc04_000_801A9B18;
extern void func_8001C810();

extern u8 *SpawnProp();
extern void func_800D0F4C();
extern u8 D_sc04_000_801A9CE8;
extern u8 D_sc04_000_801A9CE9;
extern u8 D_sc04_000_801A9CEA;
extern u8 D_sc04_000_801A9CEC;
extern u8 D_sc04_000_801A9D68;
extern u8 D_sc04_000_801A9D69;
extern u8 D_sc04_000_801A9D6A;
extern u8 D_sc04_000_801A9D6C;
extern u8 D_sc04_000_801A9D28;
extern u8 D_sc04_000_801A9D29;
extern u8 D_sc04_000_801A9D2A;
extern u8 D_sc04_000_801A9D2C;

extern u8 g_Daytime;
extern u8 g_Status[];
extern s32 HeadingToTarget();
extern s32 HeadingToSV();
extern u8 D_800D3918;
extern u8 g_WallNormal;
extern s32 D_sc04_000_801A6E28[];
extern void RotateVectorX();
extern void RotateVectorY();

extern s32 GetObjPadPressed();
extern s16 D_sc04_000_80186FE8[];
extern SV8 g_CameraFocus;
extern void func_sc04_000_8017F000();
extern u8 D_sc04_000_801995A4;
extern u8 D_sc04_000_801995AC;
extern u8 D_sc04_000_8019CF08;
extern s32 HeadingToPoint();
extern s32 TurnStep();
extern void UpdateModelZYX();
extern s32 SetLocalVelocityXZ();
extern s32 MoveOnGround();
extern s32 TurnStepToPlayer();
extern s32 RequestBgmPack();
extern void BlendCameraThen();
extern s32 SpawnKind205();

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
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

extern void SetReactionStep();
extern void RestorePrevPos();
extern s32 UndoMoveIntoObject();
extern s32 HitPlayer();
extern void func_sc04_000_80182724();
extern SV4 D_sc04_000_801A6ECC;
extern SV4 D_sc04_000_801A6ED4;
extern SV4 D_sc04_000_801A6EDC;
extern SV4 D_sc04_000_801A6EE4;
extern s32 RotateMatrixByZYX();
extern s32 DrawPrimFT4Mtx();
extern SV8 D_sc04_000_801A7028[];
extern s32 PathHitsModel();
extern s32 TargetInFront();
extern s32 RotTransSV();

extern s32 D_sc04_000_801A9A6C;
extern s32 D_sc04_000_801A9A70;
extern s32 D_sc04_000_801A9A78;
extern s32 D_sc04_000_801A9A7C;
extern s32 D_sc04_000_801A9A80;
extern s32 D_sc04_000_801A9A88;
extern s32 D_sc04_000_801A9A8C;
extern s32 D_sc04_000_801A9A90;

void func_sc04_000_8017CD9C(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc04_000_801A9A68 = D_sc04_000_801A9A78 = D_sc04_000_801A9A88 = v.vx;
    D_sc04_000_801A9A6C = D_sc04_000_801A9A7C = D_sc04_000_801A9A8C = v.vy;
    D_sc04_000_801A9A70 = D_sc04_000_801A9A80 = D_sc04_000_801A9A90 = v.vz;
}

void func_sc04_000_8017CECC(StageActor *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (GetVar(*(u8 *)arg0->message + 0x3A) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    if ((s32)arg0->model == 0) {
        if (SetupActor(arg0, &D_sc04_000_80186C98) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc04_000_8019DF90);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc04_000_80186CD4);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc04_000_801A9A68;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc04_000_801A9A98;
        func_8001CD50(o, p);
        D_sc04_000_801A9A9A = 0x80;
        p[0] = 0x80;
        D_sc04_000_801A9A99 = 0xE0;
        D_sc04_000_801A9A9D = 0;
        D_sc04_000_801A9A9C = 0;
        D_sc04_000_801A9A9E = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc04_000_8019DFB8;
        b = (U12x9 *) &D_sc04_000_801A9B18;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc04_000_801A9A96 = 0xFF;
        D_sc04_000_801A9AA4 = 0xFF;
        D_sc04_000_801A9A86 = 0xFF;
        D_sc04_000_801A9A84 = 0xFF;
        D_sc04_000_801A9A76 = 0xFF;
        D_sc04_000_801A9A74 = 0xFF;
        D_sc04_000_801A9A95 = 0x80;
        D_sc04_000_801A9A85 = 0x80;
        D_sc04_000_801A9A75 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc04_000_801A9B18;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            arg0->work10A = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc04_000_8017D258(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &g_Actors, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = PosDist(arg0 + 4, &g_PlayerPosX);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc04_000_8017CD9C(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc04_000_80186CCC[(s16) i]) {
                TakePlayerControl();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (DistSqToPlayer(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            StartEvent(arg0, &D_sc04_000_80186D30);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc04_000_8017D4D0(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc04_000_801A9AD8;
        func_8001CD50(o, p);
        D_sc04_000_801A9AD9 = 0xFF;
        D_sc04_000_801A9ADA = 0xFF;
        p[0] = 0xFF;
        D_sc04_000_801A9ADE = 8;
        D_sc04_000_801A9ADC = 8;
        D_sc04_000_801A9ADD = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc04_000_801A9CDC;
        q[0] = v.vx;
        D_sc04_000_801A9CE0 = v.vy;
        D_sc04_000_801A9CE4 = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        arg0->state += 1;
    }
}

void func_sc04_000_8017D618(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc04_000_8019DFB8;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc04_000_8017CD9C(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        arg0->state += 1;
    }
}

void func_sc04_000_8017D798(StageActor *arg0) {
    D_sc04_000_80186D80[arg0->state]();
}

void func_sc04_000_8017D7D4(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc04_000_8017D820(StageActor *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg0->message;
    temp_s2 = (s16 *)arg0->ext0;
    temp_s1 = arg0->ext1;
    if ((AF(temp_v1, u8, 1) != 0) && (arg0->work108 == 0)) {
        arg0->work108 = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc04_000_8017CD9C((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

extern s32 GroundDistSqToPlayer();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void StartSpriteAnim();
extern u8 D_sc04_000_801A6DC0;
extern u8 D_sc04_000_801A6DCC;
extern s32 func_sc04_000_80182178();
extern s32 AllocActorSprite();
extern void GetPartWorldMatrix();
extern s32 SpawnActorFromDef();
void func_sc04_000_80182290(StageActor *o, s16 *v, s16 arg2);

void func_sc04_000_8017D914(StageActor *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = (u8 *)arg0->message;
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (arg0->work108 == 0) {
            arg0->work108 = func_80128CFC(AF(p, u16, 2));
        }
        t = arg0->work108;
        v = t;
    }
    if (v != 0) {
        arg0->state++;
    }
}

void func_sc04_000_8017D994(StageActor *arg0) {
    SV8 sp10;
    SV8 sp18;
    ModelObj *temp_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)arg0->message;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        arg0->hitState = 0;
        arg0->hitData = 0;
        sp10.x = (u16)arg0->pos[0].h.i;
        sp10.y = (u16)arg0->pos[1].h.i;
        sp10.z = (u16)arg0->pos[2].h.i;
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        arg0->model->rot.vy = (s16) (sp18.y + 0x800);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc04_000_8017DA48(StageActor *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = (u8 *)arg0->ext1;
    d = (u8 *)arg0->message;
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        StartEvent((s32) arg0, AF(d, s32, 0xC));
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc04_000_8017DAB4(StageActor *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = (u8 *)arg0->message;
    if (IsEventDone((s32) arg0, arg1) != 0) {
        EndEvent((s32) arg0);
        SetVar(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            GiveItem(0x25);
        }
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc04_000_8017DB40(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc04_000_8017DB60(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc04_000_8017CD9C(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc04_000_8017DBB4(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc04_000_8017DBF0(u8 *arg0) {
    D_sc04_000_80186DD8[AF(arg0, u16, 2)]();
}

void func_sc04_000_8017DC2C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_000_8017DC7C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017DCD8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            PlaySe((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017DD5C(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            HidePlayerScene((s32) temp_s0);
            SetPlayerFlag7E2((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017DEC4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_000_8017DF10((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_000_8017DF10(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    SetScaleMatrix(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    SetMatrixTrans(&r, &m);
    t = D_sc04_000_80186DAC;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc04_000_80186DAC;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc04_000_80186DAC;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            DrawPrimG4Mtx(&q, &m);
        }
    }
}

void func_sc04_000_8017E21C(u8 *arg0) {
    D_sc04_000_80186DEC[AF(arg0, u16, 2)]();
}

void func_sc04_000_8017E258(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc04_000_8017E298(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017E308(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        PlaySe((s32) AF(arg0, u16, 0x2C));
        ShowPlayerScene(temp_s1);
        ClearPlayerFlag7E2(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017E394(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc04_000_8017DF10((s32) arg0);
}

void func_sc04_000_8017E468(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc04_000_8017DF10((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc04_000_8017E4BC(u8 *arg0) {
    D_sc04_000_80186E00[AF(arg0, u16, 2)]();
}

void func_sc04_000_8017E4F8(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc04_000_8017E5AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc04_000_8017E608((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc04_000_8017E608(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = GsIDMATRIX;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &m);
}

void func_sc04_000_8017E778(u8 *arg0) {
    D_sc04_000_80186F94[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_000_8017E7B4(u8 *arg0) {
    D_8011F9C4 = 1;
    SetFlag(0xC7, 1);
    SetVar32(4, 0xC7);
    PlaySoundId(6, 0);
    func_sc04_000_8017EB0C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_000_8017E82C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc04_000_8017E850(u8 *arg0) {
    D_sc04_000_80186F9C[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_000_8017E88C(u8 *arg0) {
    func_sc04_000_8017EB34();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_000_8017E8CC(u8 *arg0) {
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

void func_sc04_000_8017E948(void) {
    func_800D1EBC();
}

void func_sc04_000_8017E968(u8 *arg0) {
    D_sc04_000_80186FA8[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_000_8017E9A4(u8 *arg0) {
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

void func_sc04_000_8017EA18(u8 *arg0) {
    D_sc04_000_80186FB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc04_000_8017EA54(u8 *arg0) {
    D_8011F9C4 = 1;
    SetFlag(0xC7, 1);
    SetVar32(4, 0xC7);
    PlaySoundId(6, 0);
    func_sc04_000_8017ECA0();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc04_000_8017EACC(void) {
    if (FadeStep(0) & 0xFFFF) {
        BumpSub2Copy((s32) &g_Player);
        return 1;
    }
    return 0;
}

void func_sc04_000_8017EB0C(void) {
    StartPlayerActionScript((s32) &D_sc04_000_80186FBC, 0x01000000);
}

void func_sc04_000_8017EB34(void) {
    StartPlayerActionScript((s32) &D_sc04_000_80186FC0, 0x01000000);
}

void func_sc04_000_8017EB5C(u8 *arg0) {
    D_sc04_000_80186FD4[AF(arg0, u8, 0x216)]();
}

void func_sc04_000_8017EB98(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    BumpSub2Copy(arg0, arg1, arg2, arg3);
    HidePlayerScene(arg0);
    SetPlayerFlag7E2(arg0);
    EndScene(arg0);
    func_sc04_000_8017EBE0(arg0);
}

void func_sc04_000_8017EBE0(void) {
}

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
extern SV8 D_sc04_000_8019D340[];
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void func_sc04_000_801818E8();
extern s32 func_sc04_000_80181BA4();

extern void RotateSVectorY();

s32 func_sc04_000_8018159C(u8 *o);
s32 func_sc04_000_8018175C(u8 *o);
extern s32 IsOnScreen();

extern u8 D_sc04_000_801A6C50;
extern void ProjectPoint();
extern void GainStat0FromActor();
extern void FreeShadow();
extern void func_8001CD9C();
extern u8 D_sc04_000_801AAEA8;
extern s32 D_sc04_000_801AAEAC;
extern s32 FindActorByKindArg();


void func_sc04_000_8017EBE8(u8 *o) {
    s32 i;
    StageActor *p;

    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&g_Actors + i * 0x10C;
        if (p->kind == 0x3AF) {
            NextState(p);
        }
    }
    BumpSub2Copy(o);
}

void func_sc04_000_8017EC64(s32 arg0) {
    if (FindActorByKind(0x3AF) == 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc04_000_8017ECA0(void) {
    StartPlayerActionScript((s32) &D_sc04_000_80186FCC, 0x01000000);
}

void RoomCameraInit(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_000_8017EE20, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_000_8017EE20((s32) &g_Camera);
}

void RoomCameraInitNear(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc04_000_8017EE20, 0);
    SnapCamera((s32) &g_Camera);
    func_sc04_000_8017EE20((s32) &g_Camera);
    D_8012694D = 1;
    g_CameraDist = 0x12C;
    g_CameraDistTarget = 0x12C;
}

void func_sc04_000_8017EE20(s32 arg0) {
    D_sc04_000_80186FE4[AF(arg0, u8, 4)]();
}

void func_sc04_000_8017EE5C(u8 *o) {
    SV8 a;
    SV8 b;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc04_000_80186FE8[AF(o, u8, 5)];
    }
    a = g_CameraFocus;
    b = g_CameraFocus;
    if (a.x < -0x140) a.x = -0x140;
    if (a.x > 0x140) a.x = 0x140;
    if (a.y < -0x260) a.y = -0x260;
    if (a.z > 0x300) a.z = 0x300;
    if (a.z < -0x100) a.z = -0x380;
    else a.z -= 0x280;
    if (b.x < -0x2B0) b.x = -0x2B0;
    if (b.x > 0x2B0) b.x = 0x2B0;
    if (b.y < -0x1D0) b.y = -0x1D0;
    if (b.z < -0x380) b.z = -0x380;
    func_sc04_000_8017F000(o, &a, &b);
}

void func_sc04_000_8017F000(u8 *arg0, u8 *arg1, u8 *arg2) {
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
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg2, s16, 4);
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

extern void (*D_sc04_000_801870E0[])();

void func_sc04_000_8017F1A4(u8 *o) {
    if (AF(o, u16, 2) != 0) {
        UpdateModelZYX(o);
    }
    D_sc04_000_801870E0[AF(o, u16, 2)](o);
}

s32 func_sc04_000_8017F204(void) {
    return func_800D0F8C(0x60) != 0;
}

extern u8 D_sc04_000_80186FFC;
extern s32 *func_sc04_000_8017F3F4();

void func_sc04_000_8017F224(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc04_000_80186FFC) != 0) {
        if ((u8)GetFlag(0xDA) != 0) {
            FreeActor(arg0);
            return;
        }
        arg0->reactive = 1;
        arg0->targetClass = 2;
        AF(arg0, s16, 0xAE) = -1;
        arg0->reactMask = 0;
        arg0->state = 1;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 3);
        SetScript(arg0, (s32) &D_sc04_000_801835B0);
        arg0->link = SpawnTalkMarker(arg0, (s32) &func_sc04_000_8017F3F4);
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x01000000);
    }
}

void func_sc04_000_8017F2E4(void) {
}

void func_sc04_000_8017F2EC(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc04_000_80187040);
    arg0->state = 3;
}

void func_sc04_000_8017F324(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
        if (arg0->stateCount != 0) {
            SetFlag(0xDA, 1);
            FreeActor(arg0->link);
            FreeActor(arg0);
            return;
        }
    }
    if (arg0->work10A != 0) {
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 2);
        arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i ^ 2);
        if ((arg0->origin[1] - (s16) (u16)arg0->pos[1].h.i) >= 0xE1) {
            temp_v0 = arg0->model;
            arg0->work10A = 0;
            temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
            PlaySoundId(4, 0xB1D, 0x80000000);
        }
    }
}

s32 *func_sc04_000_8017F3F4(u8 *arg0) {
    s32 *r;

    if (GroundDistSqToPlayer(AF(arg0, s32, 0x64)) < 0x2401) {
        AF(AF(arg0, s32, 0x64), s16, 2) = 2;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

s32 PickByProgress2F8(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x55;
    if (arg0 < 0x2F8) {
        var_v0 = 0x54;
    }
    return var_v0;
}

void func_sc04_000_8017F468(StageActor *arg0) {
    D_sc04_000_801870F0[arg0->state]();
}

void func_sc04_000_8017F4A4(s32 arg0) {
    SetMoverTimer(arg0, 0);
    NextState(arg0);
}

void func_sc04_000_8017F4D8(s32 arg0) {
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    if (TickTimer(arg0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((AF(g_PlayerModel, s32, 4) >= 0) && (PlayerEvent08((s32) &g_Player) == 0)) {
            case 1:
                func_sc04_000_8017F628(arg0);
                var_s0 = 0;
loop_7:
                if (!(rand() & 1)) {
                    func_sc04_000_8017F628(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_000_8017F628(arg0);
                }
                var_s0 += 1;
                if (var_s0 < 3) {
                    goto loop_7;
                }
            }
            break;
        default:
            func_sc04_000_8017F628(arg0);
            var_s0_2 = 0;
            do {
                if (!(rand() & 1)) {
                    func_sc04_000_8017F628(arg0);
                }
                if (!(rand() & 3)) {
                    func_sc04_000_8017F628(arg0);
                }
                var_s0_2 += 1;
            } while (var_s0_2 <= 0);
            break;
        }
        SetMoverTimer(arg0, (rand() & 0x1F) | 0x20);
    }
}

void func_sc04_000_8017F628(s32 arg0) {
    s32 sp10;
    s16 t;
    s32 i;
    s32 v;
    u8 *q;
    u8 *p;

    t = AF(arg0, s16, 0x70);
    p = (t * 8) + (u8 *)&D_sc04_000_801870F8;
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

void func_sc04_000_8017F714(u8 *arg0) {
    D_sc04_000_8018712C[AF(arg0, u16, 2)]();
}

void func_sc04_000_8017F750(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = AF(arg0, s32, 0x20);
    CopyPosInt(arg0 + 4, (s32) (arg0 + 0x10));
    InitSpriteKind3(temp_s1, (s32) &D_sc04_000_80187120, 0x270, 0x100);
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

void func_sc04_000_8017F834(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        SetObjTimer((s32) arg0, 0x10);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc04_000_8017F8A0(u8 *o) {
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

void func_sc04_000_8017F98C(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        v = HeadingToPoint(o + 4, &D_sc04_000_801995A4);
        v = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 4);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += v;
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34)++;
            UpdateModelZYX(o);
            SetLocalVelocityXZ(o, &D_sc04_000_801995AC);
            AF(o, s32, 0x1C) = 0xF;
            SetScript(o, &D_sc04_000_8019CF08);
        }
        break;
    case 2:
        MoveOnGround(o);
        break;
    case 3:
        MoveOnGround(o);
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0xF;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc04_000_8019CF90);
        }
        break;
    case 4:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToPlayer(o, 4);
        break;
    case 5:
        v = HeadingToPoint(o + 4, &D_sc04_000_801995A4);
        v = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 4);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += v;
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34)++;
            UpdateModelZYX(o);
            SetLocalVelocityXZ(o, &D_sc04_000_801995AC);
            SetScript(o, &D_sc04_000_8019CF08);
        }
        break;
    case 6:
        MoveOnGround(o);
        if (AF(o, s16, 0xE) < -0x398) {
            AF(o, s16, 0xE) = -0x600;
            AF(o, u16, 0x34)++;
            func_800D0C48(1);
            AF(o, s32, 0x1C) = 0x1E;
            GiveItem(0x17);
        }
        break;
    case 7:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34) = 0;
            RequestBgmPack(0x55);
            AF(o, u16, 0xFC) |= 1;
        }
        break;
    }
    if (AF(o, s16, 0xFC) < 2 && UpdateScript(o) != 0) {
        EndEvent(o);
        SetProgress(0x2F8);
        AF(o, u16, 0xFC) |= 2;
        BlendCameraThen(RoomCameraInit);
    }
    if (AF(o, s16, 0xFC) == 3) {
        FreeActor(o);
    }
}

void func_sc04_000_8017FC8C(StageActor *arg0) {
    D_sc04_000_80199760[arg0->state]();
}

void func_sc04_000_8017FCC8(u8 *arg0) {
    D_sc04_000_8019977C[AF(arg0, u16, 2)]();
}

s32 func_sc04_000_8017FD04(StageActor *o) {
    s32 i;
    u8 *e;
    u8 *m;

    if (o->workFE < 0x1F) {
        for (i = 0; i < 6; i++) {
            e = (u8 *)SpawnKind205(o, 0);
            if (e != 0) {
                m = AF(e, u8 *, 0xCC);
                AF(m, s16, 0x18) = rand() % 0x2000 + 0x3000;
                AF(m, s16, 0x1A) = rand() % 0x2000 + 0x3000;
                AF(e, s16, 6) += rand() % 0xF0;
                AF(e, s16, 0xE) -= 0x20;
                AF(e, s16, 0xA) += rand() % 0xF0 - 0xC0;
                AF(e, s16, 0x16) -= 8;
            }
        }
        o->workFE++;
        return 0;
    }
    MoveImage((s32) &D_sc04_000_8019976C, 0x300, 0x180);
    MoveImage((s32) &D_sc04_000_80199774, 0x100, 0x1E8);
    SetProgress(0x302);
    return 1;
}

void func_sc04_000_8017FEBC(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc04_000_801997EC) != 0) {
        if (GetProgress() >= 0x30CU) {
            FreeActor(arg0);
            return;
        }
        arg0->reactive = 1;
        arg0->params = &D_sc04_000_80199820;
        arg0->targetClass = 2;
        AF(arg0, s16, 0xAE) = -5;
        arg0->reactMask = 0;
        arg0->state = 1;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 3);
        SetScript(arg0, (s32) &D_sc04_000_801835B0);
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x01000000);
        if (arg0->param != 0) {
            InitModel((s32) arg0->model, (s32) &D_sc04_000_80199468);
            arg0->hitState = 0;
            arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i + 0x100);
        } else {
            arg0->link = SpawnTalkMarker(arg0, (s32) &func_sc04_000_801806B8);
            arg0->ext0 = SpawnActorArg(0x246, 1, arg0);
        }
        SetModelCullBox((s32) arg0->model, 0x258, 0xF0);
        if (GetProgress() >= 0x302U) {
            MoveImage((s32) &D_sc04_000_8019976C, 0x300, 0x180);
            MoveImage((s32) &D_sc04_000_80199774, 0x100, 0x1E8);
        }
    }
}

void func_sc04_000_80180020(StageActor *o) {
    u8 *p;
    u8 *q;
    u8 unused[8];

    switch (o->work10A) {
    case 0:
        break;
    case 1:
        p = SpawnProp(0x6D);
        if (p == 0) {
            break;
        }
        o->ext1 = p;
        {
        u8 *c = &D_sc04_000_801A9CE8;
        AF(p, u16, 6) = (u16)o->pos[0].h.i + 0x80;
        AF(p, u16, 0xA) = (u16)o->pos[1].h.i - 0x38;
        AF(p, u16, 0xE) = (u16)o->pos[2].h.i - 0x28;
        func_8001CD50(AF(p, s32, 0x20), c);
        D_sc04_000_801A9CE9 = 0;
        D_sc04_000_801A9CEA = 0;
        D_sc04_000_801A9CEC = 0;
        D_sc04_000_801A9CE9 = 0;
        D_sc04_000_801A9CEA = 0;
        c[0] = 0xFF;
        SetShapeCircle(c, 0x40);
        }
        o->work10A = 2;
        o->unkFC = 0x20;
        break;
    case 2:
        if (o->unkFC != 0) {
            o->unkFC--;
            break;
        }
        p = SpawnProp(0x6D);
        if (p == 0) {
            break;
        }
        AF(o, u8 *, 0xD8) = p;
        {
        u8 *c = &D_sc04_000_801A9D68;
        AF(p, u16, 6) = (u16)o->pos[0].h.i + 0x68;
        AF(p, u16, 0xA) = (u16)o->pos[1].h.i - 0x20;
        AF(p, u16, 0xE) = (u16)o->pos[2].h.i - 0x28;
        func_8001CD50(AF(p, s32, 0x20), c);
        D_sc04_000_801A9D69 = 0;
        D_sc04_000_801A9D6A = 0;
        D_sc04_000_801A9D6C = 0;
        c[0] = 0;
        D_sc04_000_801A9D69 = 0;
        D_sc04_000_801A9D6A = 0xFF;
        SetShapeCircle(c, 0x40);
        }
        o->work10A = 3;
        o->unkFC = 0x20;
        break;
    case 3:
        if (o->unkFC != 0) {
            o->unkFC--;
            break;
        }
        p = SpawnProp(0x6D);
        if (p == 0) {
            break;
        }
        AF(o, u8 *, 0xD4) = p;
        {
        u8 *c = &D_sc04_000_801A9D28;
        AF(p, u16, 6) = (u16)o->pos[0].h.i + 0x9C;
        AF(p, u16, 0xA) = (u16)o->pos[1].h.i - 0x20;
        AF(p, u16, 0xE) = (u16)o->pos[2].h.i - 0x28;
        func_8001CD50(AF(p, s32, 0x20), c);
        D_sc04_000_801A9D29 = 0;
        D_sc04_000_801A9D2A = 0;
        D_sc04_000_801A9D2C = 0;
        c[0] = 0;
        D_sc04_000_801A9D2A = 0;
        D_sc04_000_801A9D29 = 0xFF;
        SetShapeCircle(c, 0x40);
        }
        o->work10A = 4;
        o->unkFC = 0x20;
        break;
    case 4:
        if (o->unkFC != 0) {
            o->unkFC--;
            break;
        }
        AF(o->ext1, u16, 2) += 1;
        AF(AF(o, u8 *, 0xD4), u16, 2) += 1;
        AF(AF(o, u8 *, 0xD8), u16, 2) += 1;
        o->work10A = 5;
        o->unkFC = 0x20;
        break;
    case 5:
        if (o->unkFC != 0) {
            o->unkFC--;
            break;
        }
        o->work10A = 6;
        PlaySoundId(0xC1F, 0);
        break;
    case 6:
        o->pos[0].h.i -= 2;
        o->pos[1].h.i ^= 2;
        q = (u8 *)o->ext0;
        AF(q, u16, 6) += 2;
        AF(q, u16, 0xA) ^= 2;
        if (o->origin[0] - o->pos[0].h.i > 0x80) {
            o->work10A = 0;
            PlaySoundId(4, 0xC1F);
        }
        break;
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        o->state = 1;
        if (o->stateCount != 0) {
            SetProgress(0x30C);
            FreeActor(o->ext0);
            FreeActor(o->link);
            FreeActor(o);
            func_800D0F4C(0x60);
            func_800D0F4C(0x61);
            func_800D0F4C(0x62);
        }
    }
}

extern void (*D_sc04_000_801998F8[])();

void func_sc04_000_801803BC(StageActor *o) {
    s16 *p = &D_80126B66;

    if (*p >= 0x4FD) {
        *p = 0x4FD;
    }
    D_sc04_000_801998F8[o->state](o);
}

void func_sc04_000_80180418(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc04_000_80199570) != 0) {
        if (GetProgress() >= 0x2F8U) {
            FreeActor(arg0);
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc04_000_8019CF90);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        AF(arg0, s32, 0x1C) = 0xF;
    }
}

void BarrierStartEvent(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StartEvent((s32) arg0, (s32) &D_sc04_000_80199618);
        AF(arg0, s32, 0x1C) = 5;
    }
}

void func_sc04_000_8018050C(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x50000000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void PropScaleIn(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) + 0x20;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 >= 0x400) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v0_2 = rsin(AF(arg0, s32, 0x2C));
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}

void func_sc04_000_801805A8(void) {
}

void PropScaleOut(u8 *arg0) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x20;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        FreeProp((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}

void func_sc04_000_80180604(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u16, 0x5C) = 0x8800;
    AF(arg0, u8, 0xC1) = 0;
    if ((AF(arg0, u8, 0x5E) == 0x24) && (GetProgress((s32) arg0, arg1, arg2) < 0x302U)) {
        StartEvent((s32) arg0, (s32) &D_sc04_000_8019979C);
        AF(arg0, s16, 2) = 3;
    }
}

s32 func_sc04_000_8018066C(void) {
    if (func_800D0F8C(0x60) != 0 && func_800D0F8C(0x61) != 0 && func_800D0F8C(0x62) != 0) {
        return 1;
    }
    return 0;
}

s32 *func_sc04_000_801806B8(u8 *arg0) {
    if ((AF(arg0, s16, 0xE) - D_80126B66) < 0x50) {
        if ((u32) (g_PlayerX - AF(arg0, s16, 6)) < 0x101U) {
            AF(AF(arg0, void *, 0x64), s16, 2) = 2;
            ResetScriptVM();
            return &CallActionHandler;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc04_000_80180730(void) {
}

void ItemTakerTalk(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_v0;

    if (GetProgress(arg0, arg1, arg2) >= 0x302U) {
        RunScript(arg0, (s32) &D_sc04_000_80199868);
        var_v0 = 4;
    } else {
        RunScript(arg0, (s32) &D_sc04_000_80199830);
        var_v0 = 3;
    }
    AF(arg0, s16, 2) = var_v0;
}

void func_sc04_000_8018079C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc04_000_801807DC(StageActor *arg0) {
    D_sc04_000_8019D328[arg0->state]();
}

void func_sc04_000_80180818(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc04_000_8019D018) != 0) {
        if (!(GetFlag(D_sc04_000_8019D080[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc04_000_80180EC4);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc04_000_801835B0);
        arg0->state = 1;
    }
}

void func_sc04_000_801808EC(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc04_000_80180914(void) {
}

void func_sc04_000_8018091C(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc04_000_8019D264 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc04_000_8019D1C8[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc04_000_8019D250 = 0;
            SetFlag(D_sc04_000_8019D1C8[AF(temp_s0, u16, 0xC)], 1);
            D_sc04_000_8019D24C = 2;
        } else {
            D_sc04_000_8019D264 = AF(temp_s0, s32, 0);
            var_v0 = D_sc04_000_8019D144[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc04_000_8019D24C = 0;
            D_sc04_000_8019D250 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc04_000_8019D278);
    } else {
        var_a1 = &D_sc04_000_8019D2E4;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc04_000_80180A68(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc04_000_8019D080[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc04_000_8019D080[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc04_000_80180C6C() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc04_000_80180B88(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc04_000_80180BB4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_000_80180BC4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc04_000_80180BD4(u8 *arg0) {
    SetFlag(D_sc04_000_8019D080[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc04_000_80180C14(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc04_000_80180C48(void) {
    return func_80174764() == 1;
}

s32 func_sc04_000_80180C6C(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc04_000_8019D080[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc04_000_80180CD0(StageActor *arg0) {
    D_sc04_000_8019D350[arg0->state]();
}

void func_sc04_000_80180D0C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc04_000_8019D04C) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc04_000_8019DA10);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc04_000_8019D7F0);
        }
        arg0->state = 1;
    }
}

void func_sc04_000_80180D94(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_000_8019D800);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_000_8019D908);
        arg0->hitState = 0x8C00;
    }
}

void func_sc04_000_80180E54(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc04_000_8019DA10);
        } else {
            SetScript((s32) arg0, (s32) &D_sc04_000_8019D7F0);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc04_000_80180EC4(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc04_000_8019D340[0], &a, &f);
    RotTransSV(&D_sc04_000_8019D340[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc04_000_80180FBC(StageActor *arg0) {
    D_sc04_000_801A1380[arg0->state]();
}

void func_sc04_000_80180FF8(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc04_000_801A12E4) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc04_000_801A1318;
        arg0->reactMask = -0x2021;
        AF(arg0, s16, 0xDE) = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc04_000_801A69B8);
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

void func_sc04_000_801810B0(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (DistSqToPlayer(arg0) > 0x18FFF) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        AF(arg0, s32, 0xCC) = SpawnShadow(arg0);
        AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    }
}

void func_sc04_000_80181154(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc04_000_801A12E6;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc04_000_801811DC(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 4;
    SetScript((s32) arg0, (s32) &D_sc04_000_801A69B8, arg2);
}

void func_sc04_000_80181208(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc04_000_80181248(StageActor *arg0) {
    arg0->state = 6;
    SetScript((s32) arg0, (s32) &D_sc04_000_801A69C8);
    arg0->timer = 0x17;
}

void func_sc04_000_80181288(s32 arg0) {
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc04_000_801812BC(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0);
    func_sc04_000_801816DC((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc04_000_801A6A90);
    AF(arg0, s32, 0x1C) = 0x23;
    AF(arg0, s32, 0xE0) = 0;
}

void func_sc04_000_80181310(u8 *o) {
    u8 *p;
    s32 r;

    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x12) -= 0x71;
    func_sc04_000_8018175C(o);
    if (AF(o, u16, 0x72) & 0x4000) {
        if (IsOnScreen(o, 0x8C00B4) == 1) {
            PlaySoundId(0x662, 0);
        }
    }
    r = func_sc04_000_8018159C(o);
    if (r != -1 && TickTimer(o) != 0) {
        if (r != 0) {
            func_sc04_000_801816DC((s32) o);
        }
        AF(o, s32, 0x1C) = 0x23;
    }
}

void func_sc04_000_801813CC(StageActor *o) {
    SV8 a;
    SV8 b;
    s32 x;

    o->hitState = 0;
    o->timer = 0x37;
    o->model->rot.vx = 0;
    SetScript(o, &D_sc04_000_801A6C50);
    o->stateCount = 0;
    a.x = o->pos[0].h.i;
    a.y = o->pos[1].h.i;
    a.z = o->pos[2].h.i;
    ProjectPoint(&a, &b);
    if ((b.x < 0 ? -b.x : b.x) < 0xB5 && (b.y < 0 ? -b.y : b.y) < 0xA1) {
        PlaySoundId(0x98A, 0);
    }
}

void func_sc04_000_801814A8(u8 *arg0) {
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
        func_sc04_000_80181ABC((s32) arg0);
    }
}

void func_sc04_000_80181540(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, u16, 0x5C) = 0xAA10;
}

void func_sc04_000_80181554(void) {
}

void func_sc04_000_8018155C(StageActor *o) {
    s16 v[3];

    if (o->hitCode == 0x24) {
        v[2] = 0;
        v[0] = 0;
        v[1] = -8;
        func_sc04_000_80182290((s32) o, v, 0xB);
    }
}

s32 func_sc04_000_8018159C(u8 *o) {
    s32 r;
    s32 v;
    u8 *q;
    s32 i;

    r = 1;
    v = MoveOnGround();
    if (v == 0) {
        RestorePrevPos(o);
        func_sc04_000_801818E8(o, 2);
        r = 0;
    } else if ((v & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
        return -1;
    } else if ((v & 0xFF) == 0x1A) {
        func_sc04_000_80181ABC(o);
        return -1;
    } else if (v & 0x8000) {
        if (!(v & 0x2000)) {
            RestorePrevPos(o);
        }
        func_sc04_000_801818E8(o, 5);
        r = 0;
    } else if (v & 0x4000) {
        RestorePrevPos(o);
        func_sc04_000_801818E8(o, 2);
        r = 0;
    }
    q = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; i++) {
        if (AF(q, u16, 0) != 0 && AF(o, u16, 0) == AF(q, u16, 0) && o != q && UndoMoveIntoObject(o, q) != 0) {
            if (r != 0) {
                func_sc04_000_801818E8(o, 2);
            }
            return r;
        }
        q += 0x10C;
    }
    return r;
}

s32 func_sc04_000_801816DC(s32 arg0) {
    if (AF(arg0, s16, 0xAA) > 0) {
        func_sc04_000_801818E8(arg0, 4);
        return 0;
    }
    if ((DistSqToTarget(arg0) > 0x24000) || (func_sc04_000_80181BA4(arg0) == 0)) {
        func_sc04_000_801818E8(arg0, 3);
        return 0;
    }
    func_sc04_000_801818E8(arg0, 0);
    return 1;
}

s32 func_sc04_000_8018175C(u8 *o) {
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

void func_sc04_000_801818E8(u8 *o, s32 mode) {
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

void func_sc04_000_80181ABC(u8 *o) {
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
        SetScript(o, &D_sc04_000_801A69B8);
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

s32 func_sc04_000_80181BA4(u8 *o) {
    V3 d;

    d.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    d.y = 0;
    d.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.z < 0x190000;
}

void func_sc04_000_80181C1C(StageActor *arg0) {
    D_sc04_000_801A6E0C[arg0->state]();
}

void func_sc04_000_80181C58(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc04_000_80182178() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc04_000_801A6DC0, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc04_000_801A6DCC);
    func_sc04_000_801821D0((s32) arg0);
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

void func_sc04_000_80181D54(u8 *arg0) {
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
            func_sc04_000_801821D0(arg0);
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
    func_sc04_000_8018224C(arg0);
}

void func_sc04_000_80181FE4(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc04_000_801821D0(arg0);
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
    func_sc04_000_8018224C(arg0);
}

s32 func_sc04_000_80182178(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc04_000_801821D0(u8 *o) {
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

void func_sc04_000_8018224C(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc04_000_80182290(StageActor *o, s16 *v, s16 arg2) {
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

extern void (*D_sc04_000_801A6E58[])();
extern void (*D_sc04_000_801A6E68[])();

void func_sc04_000_801822F0(StageActor *o) {
    switch (o->param) {
    case 0:
        D_sc04_000_801A6E58[o->state](o);
        break;
    case 1:
        D_sc04_000_801A6E68[o->state](o);
        break;
    }
}

void func_sc04_000_8018236C(void) {
}

void func_sc04_000_80182374(u8 *arg0) {
    u8 *p;
    s32 i;

    p = (u8 *)&D_sc04_000_801A9DA8;
    ZeroFill((s32) &D_sc04_000_801A9DA8, 0x1100);
    AF(arg0, void *, 0xDC) = (void *) ((AF(arg0, s16, 0xFC) << 5) + &D_sc04_000_801A6E8C);
    for (i = 0; i < 0x40; i++) {
        func_sc04_000_80182564((s32) p, (s32) AF(arg0, void *, 0xDC));
        p += 0x44;
    }
    SetMoverTimer((s32) arg0, 0xA);
    NextState((s32) arg0);
}

void func_sc04_000_80182408(s32 arg0) {
    if (TickTimer(arg0) != 0) {
        PlaySoundId((s32) (*(u16 *)&D_sc04_000_801A6E48[(AF(arg0, s16, 0xFC) * 8)]), 0);
        NextState(arg0);
    }
}

void func_sc04_000_80182460(StageActor *o) {
    s32 i;
    u8 *p;

    for (i = 0; i < 0x40; i++) {
        p = (u8 *)&D_sc04_000_801A9DA8 + i * 0x44;
        switch (AF(p, s16, 0)) {
        case 0:
            if (--AF(p, s16, 2) == -1) {
                AF(p, s16, 2) = 10;
                AF(p, s16, 0)++;
            }
            break;
        case 1:
            if (--AF(p, s16, 2) == -1) {
                func_sc04_000_80182564(p, o->message);
            } else {
                func_sc04_000_801827B4(o, p);
                func_sc04_000_80182724(p);
            }
            break;
        }
    }
}

void func_sc04_000_80182564(u8 *p, u8 *q) {
    s32 r;
    s16 t;

    AF(p, s16, 6) = AF(p, s16, 4) = 0x100;
    AF(p, s16, 0) = 0;
    AF(p, s16, 2) = (rand() & 7) + 1;
    r = rand() % AF(p, s16, 4);
    t = r;
    if (rand() & 1) {
        t = -r;
    }
    AF(p, s16, 0x3C) = t;
    r = rand() % AF(p, s16, 6);
    t = r;
    if (rand() & 1) {
        t = -r;
    }
    AF(p, s16, 0x3E) = t;
    AF(p, s16, 0x40) = 0;
    AF(p, s16, 0xC) = -AF(p, s16, 0x3E);
    AF(p, s16, 0xE) = (0x800 - AF(p, s16, 0x3C)) & 0xFFF;
    AF(p, s32, 8) = D_sc04_000_801A6E28[rand() & 7];
    RotateVectorX(AF(p, s16, 0xC), q, p + 0x1C);
    RotateVectorY(AF(p, s16, 0xE), p + 0x1C, p + 0x1C);
    RotateVectorX(AF(p, s16, 0xC), q + 0x10, p + 0x2C);
    RotateVectorY(AF(p, s16, 0xE), p + 0x2C, p + 0x2C);
    AF(p, s16, 0x16) = 0x1000;
    if (rand() & 1) {
        AF(p, s16, 0x14) = 0x1000;
        AF(p, s16, 0x18) = 0x7000;
    } else {
        AF(p, s16, 0x14) = AF(p, s16, 0x18) = 0x2000;
    }
}

void func_sc04_000_80182724(u8 *p) {
    s32 t[3];

    t[0] = AF(p, s32, 0x1C) += AF(p, s32, 0x2C);
    t[1] = AF(p, s32, 0x20) += AF(p, s32, 0x30);
    t[2] = AF(p, s32, 0x24) += AF(p, s32, 0x34);
    AF(p, s16, 0x3C) += ((s16 *)t)[1];
    AF(p, s16, 0x3E) += ((s16 *)t)[3];
    AF(p, s16, 0x40) += ((s16 *)t)[5];
}

s32 func_sc04_000_801827B4(s32 arg0, s32 arg1) {
    s32 sp18;

    PosToSVec(arg0 + 4, (s32) &sp18);
    return func_sc04_000_80182800(arg1 + 0x14, arg1 + 0xC, (s32) &sp18, arg1 + 8, /* extra? */ (arg1 + 0x3C));
}

s32 func_sc04_000_80182800(s32 r, s32 t, s16 *a, s32 *c, s16 *b) {
    typedef struct { SV4 p[4]; s32 uv[4]; s32 col; s32 code; u8 n; } Arg;
    Arg g;
    WMtx m;
    s32 k;

    g.code = 0x50000000;
    g.n = 0x9B;
    g.p[0] = D_sc04_000_801A6ECC;
    g.p[1] = D_sc04_000_801A6ED4;
    g.p[2] = D_sc04_000_801A6EDC;
    g.p[3] = D_sc04_000_801A6EE4;
    k = *c;
    g.uv[0] = 0x10009C0;
    g.uv[1] = 0x10009DF;
    g.uv[2] = 0x11F09C0;
    g.uv[3] = 0x11F09DF;
    g.col = k;
    SetScaleMatrix(r, &m);
    RotateMatrixByZYX(t, &m);
    m.t[0] = a[0] + b[0];
    m.t[1] = a[1] + b[1];
    m.t[2] = a[2] + b[2];
    return DrawPrimFT4Mtx(&g, &m);
}

void func_sc04_000_80182984(void) {
}

void func_sc04_000_8018298C(StageActor *o) {
    u8 *d;
    u8 *p;

    d = &D_sc04_000_801AAEA8;
    o->model = p = (u8 *)AllocActorSprite();
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CD9C(p, d);
    AF(p, s16, 0x2C) = 3;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0;
    AF(p, s32, 4) |= 0x50000000;
    SetShapeCircle(d, 0x80);
    D_sc04_000_801AAEAC = 0;
    func_sc04_000_80182D78(o);
    NextState(o);
}

void func_sc04_000_80182A38(u8 *arg0) {
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc04_000_80182D78((s32) arg0);
    temp_v0 = AF(temp_s0, u16, 0x18) + 0x200;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x1001) {
        AF(temp_s0, u16, 0x18) = 0x1000U;
    }
    AF(temp_s0, u16, 0x1A) = (u16) AF(temp_s0, u16, 0x18);
    if ((s16) AF(temp_s0, u16, 0x18) == 0x1000) {
        SetMoverTimer((s32) arg0, 0x78);
        NextState((s32) arg0);
    }
}

void func_sc04_000_80182AC0(s32 arg0) {
    func_sc04_000_80182D78(arg0);
    if (TickTimer(arg0) != 0) {
        PlaySoundId((s32) (*(u16 *)&D_sc04_000_801A6E4C[(AF(arg0, s16, 0xFC) * 8)]), 0);
        NextState(arg0);
    }
}

void func_sc04_000_80182B20(StageActor *arg0) {
    u16 temp_v0;
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    func_sc04_000_80182D78((s32) arg0);
    temp_v0 = (u16)temp_s0->scale.vx + 0x200;
    temp_s0->scale.vx = temp_v0;
    if ((s16) temp_v0 >= 0x7001) {
        temp_s0->scale.vx = 0x7000U;
    }
    temp_s0->scale.vy = (u16) (u16)temp_s0->scale.vx;
    if ((s16) (u16)temp_s0->scale.vx == 0x7000) {
        StartFadeWhite(4);
        NextState((s32) arg0);
    }
}

void func_sc04_000_80182BA8(StageActor *o) {
    Player *p;
    StageActor *r;

    func_sc04_000_80182D78(o);
    p = &g_Player;
    if (FadeWhiteStep(4) & 0xFFFF) {
        r = FindActorByKindArg(0x3AF, 0);
        if (r != 0) {
            DespawnActor(r);
        }
        if (o->unkFC == 0) {
            HidePlayerScene((s32) p);
            SetPlayerFlag7E2((s32) p);
        } else {
            ShowPlayerScene((s32) p);
            ClearPlayerFlag7E2((s32) p);
        }
        NextState(o);
    }
}

void func_sc04_000_80182C4C(StageActor *arg0) {
    func_sc04_000_80182D78(arg0);
    if (FadeWhiteStep(0) & 0xFFFF) {
        NextState(arg0);
    }
}

void func_sc04_000_80182C90(StageActor *arg0) {
    u16 temp_v0;
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    func_sc04_000_80182D78((s32) arg0);
    temp_v0 = (u16)temp_s0->scale.vy - 0x800;
    temp_s0->scale.vy = temp_v0;
    if ((s16) temp_v0 < 0x100) {
        temp_s0->scale.vy = 0x100U;
    }
    if ((s16) (u16)temp_s0->scale.vy == 0x100) {
        NextState((s32) arg0);
    }
}

void func_sc04_000_80182D08(StageActor *arg0) {
    u16 temp_v0;
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    func_sc04_000_80182D78((s32) arg0);
    temp_v0 = (u16)temp_s0->scale.vx - 0x800;
    temp_s0->scale.vx = temp_v0;
    if ((s16) (temp_v0) < 0) {
        temp_s0->scale.vx = 0U;
    }
    if ((s16) temp_s0->scale.vx == 0) {
        DespawnActor((s32) arg0);
    }
}

void func_sc04_000_80182D78() {
    s32 *p = (s32 *)&D_sc04_000_801AAEA8;

    if (D_800B99DA & 1) {
        *p = 0xE0E0E0;
    } else {
        *p = 0xFFFFFF;
    }
}

void func_sc04_000_80182DAC(StageActor *arg0) {
    D_sc04_000_801A700C[arg0->state]();
}

void func_sc04_000_80182DE8(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor((s32) arg0, (s32) ((((u16)arg0->param & 0xF) * 0x34) + &D_sc04_000_801A6F0C)) != 0) {
        if (!((u16)arg0->param & 1)) {
            temp_v0 = SpawnActorArg(0x1E3, 1, (s32) arg0);
            arg0->link = temp_v0;
            if (temp_v0 == 0) {
                RejectSpawn((s32) arg0);
                return;
            }
            arg0->state = 1;
            arg0->ext0 = SpawnTalkMarker((s32) arg0, (s32) &func_sc04_000_801830E4);
            return;
        }
        arg0->state = 5;
        arg0->work100 = (u16) arg0->parent->id;
        SetScript((s32) arg0, (s32) &D_sc04_000_8019D7F0);
    }
}

void func_sc04_000_80182EC0(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc04_000_80182EE8(void) {
}

void func_sc04_000_80182EF0(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc04_000_801A6FBC);
}

void func_sc04_000_80182F1C(StageActor *arg0) {
    if (UpdateScript(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
    }
}

void func_sc04_000_80182F5C(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->work100 != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_000_8019D800);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc04_000_8019D908);
        arg0->hitState = 0x8C00;
    }
}

void func_sc04_000_8018301C(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animTimer == 0) {
        if (arg0->workFE == 2) {
            PlaySoundId(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc04_000_8019D7F0);
        }
        arg0->state = 5;
        arg0->workFE = 0;
    }
}

void func_sc04_000_80183088(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc04_000_80183098(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc04_000_801830A8(void) {
    return D_sc04_000_801AAEFC == 1;
}

void func_sc04_000_801830C0(u8 *arg0) {
    SaveContinuePoint(AF(arg0, s32, 0xDC));
}

s32 *func_sc04_000_801830E4(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    Mover *q;

    q = AF(o, u8 *, 0x64);
    m = AF(g_PlayerModel, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc04_000_801A7028[0], &a, &flag);
    RotTransSV(&D_sc04_000_801A7028[1], &b, &flag);
    if (PathHitsModel(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && TargetInFront(q, 0x300) != 0) {
        q->state = 3;
        ResetScriptVM();
        return (s32 *)&CallActionHandler;
    }
    return 0;
}
