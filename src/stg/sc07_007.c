#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_007_8017BE9C(void) {
}

void func_sc07_007_8017BEA4(void) {
}

void func_sc07_007_8017BEAC(void) {
}

void func_sc07_007_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_007_801882B8[])();
extern void (*D_sc07_007_80186990[])();
extern s32 FadeStep();
extern void (*D_sc07_007_80186998[])();
extern void (*D_sc07_007_801869A4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_sc07_007_801869B0;
extern void StartPlayerActionScript();
extern u8 D_sc07_007_801869BC;
extern void func_sc07_007_8017D648();
extern void (*D_sc07_007_801869E0[])();
extern void (*D_sc07_007_801886E8[])();
extern void func_sc07_007_80181140();
extern void (*D_sc07_007_801886FC[])();
extern void (*D_sc07_007_801A359C[])();
extern void (*D_sc07_007_801A35AC[])();



extern void StartFade();
extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();

extern u8 g_Camera;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 D_sc07_007_801C7800;
extern s32 D_sc07_007_801C7804;
extern void SetCameraUpdate();
extern void SnapCamera();
extern u8 D_sc07_007_80186A10;
extern u8 D_sc07_007_80186A18;
extern void func_sc07_007_8017DF04();
extern void func_sc07_007_8017DC20();
extern s32 ZeroFill();

extern void func_sc07_007_8017D288();
extern u8 D_sc07_007_80187E48;

extern void (*D_sc07_007_80188554[])();
extern s32 func_sc07_007_80180F84();
extern void DespawnActor();
extern u8 D_sc07_007_80187C98;
extern u8 D_sc07_007_801A9B78;
extern s32 ClearScriptSignals();
extern s32 AllocActorModel();
extern void InitModel();
extern s32 func_sc07_007_80181048();
extern void func_80143994();
extern void func_sc07_007_801813EC();
extern void SetMoverTimer();
extern void NextState();
extern u8 D_sc07_007_801888BC;
extern s32 TickTimer();
extern void func_sc07_007_8017D158();
extern void func_sc07_007_80180F94();
extern void func_sc07_007_8018122C();
extern u8 D_sc07_007_80186EA0;
extern u8 D_sc07_007_80187C80;
extern s32 func_sc07_007_80180FA4();
extern void func_sc07_007_80181494();
extern u8 D_sc07_007_80186DB0;
extern u8 D_sc07_007_80188C4C;
extern u8 D_sc07_007_80186F98;
extern s32 func_sc07_007_80181280();
extern s32 func_sc07_007_8018141C();
extern u8 D_sc07_007_80187020;
extern u8 D_sc07_007_80187D18;
extern void func_sc07_007_801815B8();
extern void (*D_sc07_007_801885B8[])();
extern u8 D_sc07_007_80187088;
extern u8 D_sc07_007_801AFCBC;
extern void SpawnShadow();

extern u8 D_sc07_007_80187440;
extern u8 D_sc07_007_80187EE0;
extern u8 D_sc07_007_801874E8;
extern s32 func_sc07_007_80180FF4();
extern u8 D_sc07_007_80188B18;
extern u8 D_sc07_007_80187F30;
extern u8 D_sc07_007_80187E80;
extern void (*D_sc07_007_80188604[])();
extern u8 D_sc07_007_80187610;
extern u8 D_sc07_007_801B5C84;
extern u8 D_sc07_007_801877C8;
extern u8 D_sc07_007_80187858;
extern u8 D_sc07_007_801878B8;
extern u8 D_sc07_007_80188030;
extern u8 D_sc07_007_80188008;
extern u8 D_sc07_007_80188B5C;
extern u8 D_sc07_007_80187F68;
extern s32 func_sc07_007_801813CC();
extern u8 D_sc07_007_80187740;
extern u8 D_sc07_007_80188C00;
extern u8 D_sc07_007_801B54FC;
extern u8 D_sc07_007_801B5CB0;
extern u8 D_sc07_007_801B6438;
extern void MimeRebuild();
extern u8 D_sc07_007_801876B8;
extern u8 D_sc07_007_80188E4C;
extern void func_sc07_007_8017D4E4();
extern void (*D_sc07_007_80188654[])();
extern u8 D_sc07_007_80188098;
extern u8 D_sc07_007_801BA63C;
extern u8 D_sc07_007_80187AE8;
extern s32 func_sc07_007_80181614();
extern u8 D_sc07_007_80187B90;

extern u8 D_sc07_007_80188CA4;
extern void SpawnActor();
extern s32 func_sc07_007_8018152C();
extern s32 func_sc07_007_80181334();
extern void (*D_sc07_007_801886A4[])();
extern u8 D_sc07_007_801880A8;
extern u8 D_sc07_007_801C1E00;
extern void PartHide();
extern void func_sc07_007_8017D5B0();
extern s32 TurnStep();
extern u8 D_sc07_007_801C4C44;
extern s32 func_sc07_007_80180F38();
extern s32 D_sc07_007_801C7A08;
extern s32 D_sc07_007_801C79CC;
extern void PosToSVec();
extern s32 ProjectPoint();
extern s32 OpenMessageEx();
extern s32 SetFlag();
extern s32 GetFlag();
extern s32 SpawnHeadMarker();
extern s32 func_sc07_007_8017DF74();
extern u8 D_sc07_007_801886F0;
extern s32 AllocActorSprite();
extern void InitSpriteKind0();
extern void func_sc07_007_801827E0();
extern void func_sc07_007_80181960();
extern s8 D_800B9A11;
extern s16 D_800B9AAC;
extern s16 D_800B9B00;
extern s16 D_801270C0;
extern void SetPropsActive();
extern void StartSeqPlayer();
extern void FreezeClockTint();
extern s32 D_800B9A18;
extern u8 D_sc07_007_80186940;
extern s32 func_sc07_007_80181B8C();
extern void SetScreenMode2();
extern void func_800D1724();
extern s32 D_sc07_007_801C7870;
extern s32 D_sc07_007_801C7994[];
extern void (*D_sc07_007_801882C4[])();
extern void (*D_sc07_007_801882CC[])();
extern void (*D_sc07_007_801882D4[])();
extern void (*D_sc07_007_801882DC[])();
extern void (*D_sc07_007_801882E4[])();
extern void (*D_sc07_007_801882EC[])();
extern void (*D_sc07_007_801882F4[])();
extern void (*D_sc07_007_801882FC[])();
extern void (*D_sc07_007_80188544[])();
extern u8 g_ArchiveFileLoc;
extern s16 D_sc07_007_801887C4[];
extern s32 RequestLoad();
extern void NextPlayerActionHandler();
extern void BumpSub2Copy();
extern s32 func_sc07_007_80182B50();
extern u8 D_sc07_007_801A35A4;
extern void SetActionTimer();
extern s32 StepTowardSpeed();
extern s32 TickActionTimer();
extern void TakeActionArgs();
extern void func_sc07_007_80182C78();
extern u8 D_sc07_007_801A3198;
extern void SetPlayerMotion();
extern u8 D_sc07_007_801A31B8;
extern u8 D_sc07_007_801A3228;
extern u8 D_sc07_007_801A325C;
extern u8 D_sc07_007_801A3300;
extern u8 D_sc07_007_801A333C;
extern u8 D_sc07_007_801A3394;
extern u8 D_sc07_007_801A3424;
extern u8 D_sc07_007_801A34B8;
extern void SetPlayerActionScriptPass();

extern s32 FindActorByKind();
extern s32 D_sc07_007_801C7868;
extern s32 D_sc07_007_801C786C;
extern s32 g_ActionArgs;

extern u8 D_sc07_007_80188150;

extern u8 D_sc07_007_80186B50;
extern u8 D_sc07_007_80187E28;
extern s32 func_sc07_007_801810CC();
extern u8 D_sc07_007_80187240;
extern u8 D_sc07_007_80187C88;
s32 func_sc07_007_80181470(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_sc07_007_80187BD8;

extern s8 D_80078EC6;
extern void SetProgress();
extern void RequestClearSave();


extern void *g_ActiveCamera;
extern u8 D_sc07_007_80186C38;
extern u8 D_sc07_007_80187CA8;
extern u8 D_sc07_007_80187D88;
extern u8 D_sc07_007_80187DA8;
extern u8 D_sc07_007_80187E08;
extern s32 GetScriptSignal();
extern s32 func_sc07_007_8018107C();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

void func_sc07_007_8017BEBC(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc07_007_8017CD9C(u8 *arg0) {
    D_sc07_007_80186990[AF(arg0, u8, 0x15)]();
}



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
extern void func_sc07_007_8017DD6C();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

typedef struct { PTag tag; u32 tpage; u8 r0, g0, b0, code; s16 x0, y0; u8 u0, v0; u16 clut; s16 w, h; } SprtT;
extern SprtT D_sc07_007_801C78D4[][2];
extern SprtT D_sc07_007_801C7934[][2];

extern s32 D_sc07_007_801C79A0;
extern s32 D_sc07_007_801C79A4;
extern s32 D_sc07_007_801C799C;
extern s32 D_sc07_007_801C79AC;
extern s32 D_sc07_007_801C79B0;
extern V3 D_sc07_007_80188710[];
extern s32 func_sc07_007_80181E50();
extern s32 func_sc07_007_80181ED4();
extern SprtT D_sc07_007_801C7874[][2];

extern u8 g_Lights;
extern s32 D_800A5E8C;
extern s32 D_800A5E90;
extern s32 D_800A5E9C;
extern s32 D_800A5EA0;
extern s32 D_800A5EAC;
extern s32 D_800A5EB0;
extern u8 D_sc07_007_80186964;
extern u8 D_sc07_007_80187C60;
extern s32 func_8002AE60();
extern s32 TestPadAll();
extern s32 func_800CF8B4();
extern s32 GetCameraHeading();
extern void RotateSVectorY();
extern void ApplyLight();


extern SV8 g_CameraFocus;
extern SV8 D_801274F8;
extern s32 ApproachValue();

extern u8 D_sc07_007_80187298;
extern u8 D_sc07_007_801C7808;
extern u8 D_sc07_007_801879C0;
extern u8 D_sc07_007_80187900;
extern u8 D_sc07_007_8018864C;

extern u8 D_801274F0;


void func_sc07_007_8017DAE8(s32 a0, s16 *p);
s32 ClearScriptSignal(s32 arg0, s32 arg1);


extern void SetFlag12F();
extern void func_sc07_007_80182EBC(void);
s32 func_sc07_007_8017CDD8(u8 *o) {
    SetFlag12F();
    func_sc07_007_80182EBC();
    StartFade(0);
    AF(o, u8, 0x15)++;
    return 0;
}

s32 func_sc07_007_8017CE24(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc07_007_8017CE48(u8 *arg0) {
    D_sc07_007_80186998[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_007_8017CE84(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_007_8017CEA0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_007_8017CEF4(void) {
    return (FadeStep(4) & 0xFFFF) != 0;
}

void func_sc07_007_8017CF18(u8 *arg0) {
    D_sc07_007_801869A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_007_8017CF54(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_007_8017CF70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 RoomSetClearState(void) {
    if (FadeStep(4) & 0xFFFF) {
        SetScreenMode2(1);
        D_800B9A18 = 2;
        SetProgress(0x6A4);
        SetFlag(0x11D, 1);
        SetFlag(0x123, 1);
        D_80078EC6 = 1;
        RequestClearSave();
        return 1;
    }
    return 0;
}

void func_sc07_007_8017D064(void) {
    StartPlayerActionScript((s32) &D_sc07_007_801869B0, 0x01000000);
}

void func_sc07_007_8017D08C(void) {
    StartPlayerActionScript((s32) &D_sc07_007_801869BC, 0x01000000);
}

void func_sc07_007_8017D0B4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x190;
    D_8012696A = 0x1C7;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 0);
    D_sc07_007_801C7804 = 0;
    D_sc07_007_801C7800 = 0;
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

void func_sc07_007_8017D158(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    D_8012696A = 0x155;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 1);
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

void func_sc07_007_8017D1F0(arg0)
    s32 arg0;
{
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    D_8012696A = 0x800;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 2);
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

extern u8 D_sc07_007_801869C0;
void func_sc07_007_8017D288(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    D_8012696A = 0x800;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 3);
    *(B8 *)&D_801274F0 = *(B8 *)&D_sc07_007_801869C0;
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

extern s16 D_801274E8;
extern u8 D_sc07_007_801869C8;
void func_sc07_007_8017D350(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    g_CameraAngleTarget = -0x38;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 4);
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc07_007_801869C8;
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

extern u8 D_sc07_007_801869D0;
void func_sc07_007_8017D41C(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    g_CameraAngleTarget = -0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 5);
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc07_007_801869D0;
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

extern u8 D_sc07_007_801869D8;
void func_sc07_007_8017D4E4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x15E;
    g_CameraAngleTarget = -0x38;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = -0x140;
    D_80126978 = -0x60;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 6);
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc07_007_801869D8;
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

void func_sc07_007_8017D5B0(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x414;
    g_CameraAngleTarget = -0x38;
    D_8012696A = 0x155;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc07_007_8017D648, 7);
    SnapCamera((s32) &g_Camera);
    func_sc07_007_8017D648((s32) &g_Camera);
}

void func_sc07_007_8017D648(s32 arg0) {
    D_sc07_007_801869E0[AF(arg0, u8, 4)]();
}

extern u8 D_sc07_007_80186A00;
void func_sc07_007_8017D684(s32 arg0) {
    B8 v;

    *(B8 *)&D_801274E8 = *(B8 *)&D_sc07_007_80186A00;
    v = *(B8 *)((u8 *)&D_801274E8 + 8);
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)((u8 *)&D_801274E8 + 8) = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DC20(arg0, &D_801274E8, (u8 *)&D_801274E8 + 8);
}

void func_sc07_007_8017D744(s32 arg0) {
    u8 unused[8];
    B8 v;

    v = *(B8 *)&D_801274F0;
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)&D_801274F0 = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DD6C(arg0, &D_801274F0);
}

void func_sc07_007_8017D7D8(s32 arg0) {
    u8 unused[8];
    B8 v;

    v = *(B8 *)&D_801274F0;
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)&D_801274F0 = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DD6C(arg0, &D_801274F0);
}

extern u8 D_sc07_007_80186A08;
void func_sc07_007_8017D86C(u8 *o) {
    *(B8 *)&D_801274E8 = *(B8 *)&D_sc07_007_80186A08;
    func_sc07_007_8017DF04(o);
    func_sc07_007_8017DC20(o, &D_801274E8, (u8 *)&D_801274E8 + 8);
}

void func_sc07_007_8017D8E0(s32 arg0) {
    u8 unused[8];
    B8 v;

    v = *(B8 *)&D_801274F0;
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)&D_801274F0 = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DC20(arg0, &D_801274F0 - 8, &D_801274F0);
}

void func_sc07_007_8017D978(s32 arg0) {
    u8 unused[8];
    B8 v;

    v = *(B8 *)&D_801274F0;
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)&D_801274F0 = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DC20(arg0, &D_801274F0 - 8, &D_801274F0);
}

void func_sc07_007_8017DA10(s32 arg0) {
    u8 unused[8];
    B8 v;

    v = *(B8 *)&D_801274F0;
    func_sc07_007_8017DAE8(arg0, (s16 *)&v);
    *(B8 *)&D_801274F0 = v;
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DC20(arg0, &D_801274F0 - 8, &D_801274F0);
}

void func_sc07_007_8017DAA8(s32 arg0) {
    func_sc07_007_8017DF04(arg0);
    func_sc07_007_8017DC20(arg0, (s32) &D_sc07_007_80186A10, (s32) &D_sc07_007_80186A18);
}

void func_sc07_007_8017DAE8(s32 a0, s16 *p) {
    SV8 v;
    s32 n;
    s32 m;
    s32 r;
    s16 k;

    n = D_sc07_007_801C7800;
    if (n != -1) {
        if (n == 0) {
            v = g_CameraFocus;
        } else {
            r = FindActorByKind(n);
            if (r != 0) {
                PosToSVec(r + 4, &v);
            }
        }
    } else {
        v = D_801274F8;
    }
    m = D_sc07_007_801C7804;
    if (m == -1) {
        *(SV8 *)p = v;
    } else {
        k = m;
        p[0] = ApproachValue(p[0], v.x, k);
        p[1] = ApproachValue(p[1], v.y, k);
        p[2] = ApproachValue(p[2], v.z, k);
    }
}

void func_sc07_007_8017DC20(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 unused[0x30];
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
    AF(arg0, s32, 0x3C) = AF(arg1, s16, 0);
    AF(arg0, s32, 0x40) = AF(arg1, s16, 2);
    AF(arg0, s32, 0x44) = AF(arg1, s16, 4);
}

void func_sc07_007_8017DD6C(u8 *arg0, u8 *arg1) {
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

extern u16 D_800B9AB8;
extern u16 D_800B9ABA;
void func_sc07_007_8017DF04(void) {
    s16 id = GetCameraHeading();
    D_800B9AB8 = id * 320 / 512;
    D_800B9ABA = 0xF0;
}

s32 func_sc07_007_8017DF5C(s32 arg0, s32 arg1) {
    D_sc07_007_801C7800 = arg0;
    D_sc07_007_801C7804 = arg1;
}

s32 func_sc07_007_8017DF74(SV8 *v, s32 n) {
    D_sc07_007_801C7800 = -1;
    D_sc07_007_801C7804 = n;
    D_801274F8 = *v;
}

void func_sc07_007_8017DFB8(StageActor *o) {
    SV8 v;
    s16 id;
    if ((GetFlag(0x123) & 0xFF) != 0 && (s16)func_8002AE60() == 0
        && ((s16)TestPadAll(0, 0, 0x800) != 0 || (s16)TestPadAll(0, 0, 0x40) != 0)
        && func_800CF8B4() != 0) {
        D_sc07_007_801C79CC = 1;
        func_800D1724(&D_sc07_007_80186964);
        return;
    }
    D_sc07_007_801882B8[o->state](o);
    id = GetCameraHeading();
    RotateSVectorY(id, &D_sc07_007_80187C60, &v);
    AF(&g_Lights, s32, 0) = v.x;
    D_800A5E8C = v.y;
    D_800A5E90 = v.z;
    RotateSVectorY(id, &D_sc07_007_80187C60 + 8, &v);
    AF(&g_Lights, s32, 0x10) = v.x;
    D_800A5E9C = v.y;
    D_800A5EA0 = v.z;
    RotateSVectorY(id, &D_sc07_007_80187C60 + 0x10, &v);
    AF(&g_Lights, s32, 0x20) = v.x;
    D_800A5EAC = v.y;
    D_800A5EB0 = v.z;
    ApplyLight(0, &g_Lights);
    ApplyLight(1, &g_Lights + 0x10);
    ApplyLight(2, &g_Lights + 0x20);
}

extern s32 D_sc07_007_801C7AC4;
extern void func_80175494();
extern void SetState();
void func_sc07_007_8017E170(StageActor *o) {
    u16 f = o->animFlags;
    D_sc07_007_801C7AC4 = 0;
    D_sc07_007_801C79CC = 0;
    o->animFlags = f | 0x1000;
    func_80175494();
    ZeroFill(&D_sc07_007_801C7808, 0x18);
    SetState(o, 2);
}

void func_sc07_007_8017E1D0(void) {
}

void func_sc07_007_8017E1D8(void) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (((Ent *)&D_sc07_007_801C7808)[i].fn != 0) {
            ((Ent *)&D_sc07_007_801C7808)[i].fn(&((Ent *)&D_sc07_007_801C7808)[i]);
        }
    }
}

s32 func_sc07_007_8017E234(s32 arg0) {
    return ZeroFill(arg0, 0x18);
}

void func_sc07_007_8017E254(u8 *arg0) {
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E268(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(g_ActiveCamera, s32, 0x14) - 1;
    AF(g_ActiveCamera, s32, 0x14) = temp_v0;
    AF(g_ActiveCamera, s32, 0x10) = temp_v0;
    if (temp_v0 < 0x190) {
        AF(g_ActiveCamera, s32, 0x10) = 0x190;
        AF(g_ActiveCamera, s32, 0x14) = 0x190;
        ZeroFill(arg0, 0x18);
    }
}

void func_sc07_007_8017E2B8(u8 *arg0) {
    func_sc07_007_8017D288();
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E2F0(s32 arg0) {
    *(s16 *)&D_801274F0 += 4;
    if (*(s16 *)&D_801274F0 > 0x80) {
        ZeroFill(arg0, 0x18);
    }
}

void func_sc07_007_8017E33C(u8 *arg0) {
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

extern s16 D_801274EC;
void func_sc07_007_8017E350(u8 *o) {
    s16 *p;
    s16 *q;
    u16 t;

    if ((AF(o, u16, 8) & 3) == 0) {
        (&D_801274E8)[1]++;
    }
    t = AF(o, u16, 8);
    AF(o, u16, 8) = t + 1;
    if (t & 1) {
        p = &D_801274EC;
        (*p)--;
    }
    q = &D_801274E8;
    if (--*q < *(s16 *)&D_801274F0) {
        ZeroFill(o, 0x18);
    }
}

void func_sc07_007_8017E400(u8 *arg0) {
    AF(arg0, s32 *, 0x10) = &D_sc07_007_80187E48;
    AF(arg0, s16, 8) = 0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E424(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    void *temp_s1;

    temp_v0 = AF(arg0, s16, 8);
    if (temp_v0 == 0) {
        temp_s1 = AF(arg0, void *, 0x10);
        temp_a1 = AF(temp_s1, s32, 0);
        if (temp_a1 != 0) {
            func_sc07_007_80181120(0, temp_a1);
            AF(arg0, s16, 8) = (s16) AF(temp_s1, s32, 4);
            AF(arg0, void *, 0x10) = (void *) (AF(arg0, void *, 0x10) + 8);
            return;
        }
        ZeroFill((s32) arg0, 0x18);
        return;
    }
    AF(arg0, s16, 8) = (s16) (temp_v0 - 1);
}

void func_sc07_007_8017E4B0(u8 *arg0) {
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E4C4(s32 arg0) {
    s32 temp_v1;

    temp_v1 = AF(g_ActiveCamera, s32, 0x10) - 2;
    AF(g_ActiveCamera, s32, 0x10) = temp_v1;
    AF(g_ActiveCamera, s32, 0x14) = temp_v1;
    if (AF(g_ActiveCamera, s32, 0x10) < 0x12C) {
        AF(g_ActiveCamera, s32, 0x10) = 0x12C;
        AF(g_ActiveCamera, s32, 0x14) = 0x12C;
        ZeroFill(arg0, 0x18);
    }
}

void func_sc07_007_8017E51C(u8 *arg0) {
    AF(g_ActiveCamera, s16, 0x1A) = 0xE00;
    AF(g_ActiveCamera, s16, 0x22) = 0xE00;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E544(void) {
    u16 temp_v0;

    temp_v0 = AF(g_ActiveCamera, u16, 0x1A) - 2;
    AF(g_ActiveCamera, u16, 0x1A) = temp_v0;
    AF(g_ActiveCamera, u16, 0x22) = temp_v0;
}

void func_sc07_007_8017E568(u8 *arg0) {
    AF(g_ActiveCamera, s32, 0x10) = 0x190;
    AF(g_ActiveCamera, s32, 0x14) = 0x190;
    AF(g_ActiveCamera, s16, 0x1A) = 0x200;
    AF(g_ActiveCamera, s16, 0x22) = 0x200;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E59C(void) {
    u16 temp_v0;

    temp_v0 = AF(g_ActiveCamera, u16, 0x1A) + 2;
    AF(g_ActiveCamera, u16, 0x1A) = temp_v0;
    AF(g_ActiveCamera, u16, 0x22) = temp_v0;
}

void func_sc07_007_8017E5C0(u8 *arg0) {
    AF(arg0, s16, 8) = 0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

void func_sc07_007_8017E5D8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 8) + 1;
    AF(arg0, u16, 8) = temp_v0;
    if ((s16) temp_v0 >= 0x13) {
        AF(arg0, u16, 8) = 0U;
    }
}

void func_sc07_007_8017E608(u8 *arg0) {
    AF(arg0, s32, 0x10) = -1;
    AF(arg0, s16, 8) = 0;
    AF(arg0, s16, 0xA) = -1;
    AF(arg0, s16, 0xC) = 0;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + 1);
}

extern s32 *D_sc07_007_801884EC[];
void func_sc07_007_8017E634(u8 *o) {
    s32 *e;

    if (func_sc07_007_80181334(0, 7) != 0) {
        AF(o, s16, 8) = 0;
        AF(o, s16, 0xA) = 0;
        AF(o, s16, 0xC) = 0;
        AF(o, s32, 0x10)++;
    }
    switch (AF(o, s16, 0xA)) {
    case 0:
        e = D_sc07_007_801884EC[AF(o, s32, 0x10)] + AF(o, s16, 8) * 2;
        AF(o, s16, 0xE) = e[1];
        if (AF(o, s16, 0xE) == 0) {
            AF(o, s16, 0xA) = -1;
            break;
        }
        func_sc07_007_80181120(0, e[0]);
        AF(o, s16, 0xA)++;
        break;
    case 1:
        if (--AF(o, s16, 0xE) == 0) {
            AF(o, s16, 0xA) = 0;
            AF(o, s16, 8)++;
        }
        break;
    }
}

void func_sc07_007_8017E730(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x1A) {
        DespawnActor(arg0);
        return;
    }
    D_sc07_007_80188554[arg0->state](arg0);
}

void func_sc07_007_8017E798(u8 *arg0) {
    s32 temp_v0;

    ClearScriptSignals();
    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801A9B78);
        AF(temp_v0, s32, 0x28) = 0x7FFF7FFF;
        AF(arg0, s16, 0x52) = 4;
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187C98);
        func_80143994((s32) arg0, 0x4000);
        func_sc07_007_801813EC((s32) arg0);
        SetMoverTimer((s32) arg0, 0xA);
        NextState((s32) arg0);
    }
}

void func_sc07_007_8017E838(u8 *o) {
    if (TickTimer(o) != 0) {
        func_sc07_007_80181048(o, &D_sc07_007_80186B50);
        func_sc07_007_80181120(o, &D_sc07_007_80187E28);
        SetMoverTimer(o, 0x1E);
        func_sc07_007_801813CC(o);
        NextState(o);
    }
}

extern void func_sc07_007_80181524();
extern void func_sc07_007_80182768();
extern u8 D_sc07_007_80186AA8;
extern u8 D_sc07_007_8018854C;
void func_sc07_007_8017E8A4(u8 *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    void (*f)();

    if (TickTimer(o) != 0) {
        func_sc07_007_80181048(o, &D_sc07_007_80186AA8);
        func_sc07_007_80181120(o, &D_sc07_007_80187D88);
        func_sc07_007_80181524(o, &D_sc07_007_8018854C);
        func_sc07_007_80180F94(2);
        f = func_sc07_007_80182768;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[i].fn = f;
                break;
            }
        }
        NextState(o);
    }
}

void func_sc07_007_8017E94C(u8 *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;

    if (func_sc07_007_8018152C(o) != 0) {
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == func_sc07_007_80182768) {
                func_sc07_007_8017E234(&((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        func_sc07_007_80181048(o, &D_sc07_007_80187C98);
        SetMoverTimer(o, 0x1E);
        NextState(o);
    }
}

void func_sc07_007_8017E9F0(s32 arg0, s32 arg1, s32 arg2) {
    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc07_007_8017D158();
        func_sc07_007_80180F94(3);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_801888BC);
        NextState(arg0);
    }
}

void func_sc07_007_8017EA48(StageActor *arg0) {
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186C38, 0);
    if (GetScriptSignal(arg0, 3) != 0) {
        AF(temp_s1, s32, 0x14) = (s32) (AF(temp_s1, s32, 0x14) - 0x64);
    }
    func_sc07_007_8018107C(arg0, (s32) &D_sc07_007_80187E08, 3);
    func_sc07_007_801810CC(arg0, (s32) &D_sc07_007_80187DA8, 1);
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186B50, 1);
    func_sc07_007_801810CC(arg0, (s32) &D_sc07_007_80187D88, 5);
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187CA8, 5);
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80180F94(4);
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80186BC8;
extern u8 D_sc07_007_80188AA8;
void func_sc07_007_8017EB34(StageActor *arg0) {
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (func_sc07_007_80180F84() == 6) {
        func_sc07_007_8017D158();
        AF(temp_s1, s16, 0x1A) = 0x11C;
        AF(temp_s1, s16, 0x22) = 0x11C;
        func_sc07_007_801813EC(arg0);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188AA8);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80186BC8);
        func_sc07_007_80181120(arg0, (s32) &D_sc07_007_80187DA8);
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80186E88;
void func_sc07_007_8017EBCC(StageActor *arg0) {
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186E88, 4);
    func_sc07_007_801810CC(arg0, (s32) &D_sc07_007_80187E08, 2);
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186C38, 2);
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187C98);
        func_sc07_007_80181120(arg0, (s32) &D_sc07_007_80187D88);
        func_sc07_007_80180F94(7);
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80188BA8;
extern void func_sc07_007_8018263C();
void func_sc07_007_8017EC68(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    void *p;
    s32 i;
    void (*f)();

    p = g_ActiveCamera;
    if (func_sc07_007_80180F84() == 0xA) {
        func_sc07_007_8018122C(o, &D_sc07_007_80188BA8);
        func_sc07_007_8017D41C();
        func_sc07_007_801813EC(o);
        AF(p, s32, 0x10) = AF(p, s32, 0x14) = 0x190;
        f = func_sc07_007_8018263C;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[i].fn = f;
                break;
            }
        }
        NextState(o);
    }
}

void func_sc07_007_8017ED18(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186EA0, 0) != 0) {
        func_sc07_007_80181494(0, (s32) &D_sc07_007_80187C80, 1);
        NextState(arg0);
    }
}

void func_sc07_007_8017ED6C(StageActor *arg0) {
    func_sc07_007_801810CC(arg0, (s32) &D_sc07_007_80187E28, 0);
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186B50, 0);
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80180F94(0xB);
        NextState(arg0);
    }
}

extern void func_sc07_007_80182678();
void func_sc07_007_8017EDD4(s32 arg0) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    void *s;
    s32 j;
    void (*f)();

    s = g_ActiveCamera;
    if (func_sc07_007_80180F84() == 0xE) {
        func_sc07_007_8017D158();
        func_sc07_007_801813EC(arg0);
        AF(s, s32, 0x10) = AF(s, s32, 0x14) = 0x190;
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187C98);
        SetMoverTimer(arg0, 0x3C);
        f = func_sc07_007_80182678;
        for (j = 0; j < 4; j++) {
            if (((Ent *)&D_sc07_007_801C7808)[j].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[j].fn = f;
                break;
            }
        }
        NextState(arg0);
    }
}

void func_sc07_007_8017EE90(s32 arg0, s32 arg1, s32 arg2) {
    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0xF);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188C4C);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80186DB0);
        NextState(arg0);
    }
}

void func_sc07_007_8017EEF0(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80186F98, 0) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_8017EF34(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc07_007_80180F94(0x10);
        NextState((s32) arg0);
    }
}

void func_sc07_007_8017EF78(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0x11);
        NextState(arg0);
    }
}

void func_sc07_007_8017EFB8(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x12) {
        func_sc07_007_8018141C(arg0, 1);
        SetMoverTimer(arg0, 0xA);
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80186E28;
extern u8 D_sc07_007_80188D50;
void func_sc07_007_8017F008(u8 *o) {
    if (TickTimer(o) != 0) {
        func_sc07_007_8018122C(o, &D_sc07_007_80188D50);
        func_sc07_007_80181120(o, &D_sc07_007_80187E28);
        func_sc07_007_80181048(o, &D_sc07_007_80186E28);
        NextState(o);
    }
}

void func_sc07_007_8017F070(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187020);
        NextState((s32) arg0);
    }
}

void func_sc07_007_8017F0BC(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187D18);
    }
    if (func_sc07_007_80181280((s32) arg0) != 0) {
        SetMoverTimer((s32) arg0, 0x1E);
        NextState((s32) arg0);
    }
}

extern u8 D_sc07_007_80187C90;
extern u8 D_sc07_007_80188D68;
extern void func_sc07_007_801826B4();
void func_sc07_007_8017F120(s32 arg0, s32 arg1, s32 arg2) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    void (*f)();

    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0x13);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188D68);
        func_sc07_007_80181470(arg0, (s32) &D_sc07_007_80187C90, 1);
        f = func_sc07_007_801826B4;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[i].fn = f;
                break;
            }
        }
        NextState(arg0);
    }
}

extern void func_sc07_007_801826F0();
void func_sc07_007_8017F1BC(StageActor *arg0) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    void (*f)();

    if (func_sc07_007_80181334(arg0, 0) != 0) {
        func_sc07_007_80181120(arg0, (s32) &D_sc07_007_80187D88);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187C98);
        f = func_sc07_007_801826F0;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[i].fn = f;
                break;
            }
        }
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80188DCC;
extern void func_sc07_007_801826F0();
extern void func_sc07_007_8018272C();
void func_sc07_007_8017F250(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    s32 j;
    void (*f)();
    void (*g)();

    func_sc07_007_801815B8(o, 0);
    if (func_sc07_007_80181280(o) != 0) {
        func_sc07_007_8018122C(o, &D_sc07_007_80188DCC);
        g = func_sc07_007_801826F0;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == g) {
                func_sc07_007_8017E234(&((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        f = func_sc07_007_8018272C;
        for (j = 0; j < 4; j++) {
            if (((Ent *)&D_sc07_007_801C7808)[j].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[j].fn = f;
                break;
            }
        }
        NextState(o);
    }
}

void func_sc07_007_8017F330(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0x14);
        NextState(arg0);
    }
}

void func_sc07_007_8017F370(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, 0);
}

void func_sc07_007_8017F390(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x1A) {
        DespawnActor(arg0);
        return;
    }
    D_sc07_007_801885B8[arg0->state](arg0);
}

void func_sc07_007_8017F3F8(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801AFCBC);
        temp_v0->colour = 0x7FFF7FFF;
        arg0->ofs[1] = 4;
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187088);
        SpawnShadow((s32) arg0);
        NextState((s32) arg0);
    }
}

extern s32 func_sc07_007_8018144C(s32 arg0, s32 arg1);
extern void func_sc07_007_801825C4();
extern u8 D_sc07_007_80188970;
extern u8 D_sc07_007_80187C78;
extern u8 D_sc07_007_801870A0;
void func_sc07_007_8017F478(StageActor *arg0) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    void *s;
    s32 j;
    void (*f)();

    s = g_ActiveCamera;
    if (func_sc07_007_80180F84() == 4) {
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188970);
        func_sc07_007_8017D1F0();
        func_sc07_007_8018144C(arg0, (s32) &D_sc07_007_80187C78);
        AF(s, s32, 0x10) = AF(s, s32, 0x14) = 0x320;
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_801870A0);
        f = func_sc07_007_801825C4;
        for (j = 0; j < 4; j++) {
            if (((Ent *)&D_sc07_007_801C7808)[j].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[j].fn = f;
                break;
            }
        }
        NextState(arg0);
    }
}

void func_sc07_007_8017F540(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->animTimer != 0) {
        arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i - 1);
        return;
    }
    NextState((s32) arg0, arg1, arg2, arg3);
}

extern void func_sc07_007_801825C4();
extern void func_sc07_007_80182600();
extern s32 func_sc07_007_8017E234();
void func_sc07_007_8017F584(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    s32 j;
    void (*f)();

    func_sc07_007_80180FA4(o, &D_sc07_007_80187298, 1);
    if (func_sc07_007_80181334(o, 0) != 0) {
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == func_sc07_007_801825C4) {
                func_sc07_007_8017E234(&((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        f = func_sc07_007_80182600;
        for (j = 0; j < 4; j++) {
            if (((Ent *)&D_sc07_007_801C7808)[j].fn == 0) {
                ((Ent *)&D_sc07_007_801C7808)[j].fn = f;
                break;
            }
        }
    }
    if (func_sc07_007_80181280(o) != 0) {
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == func_sc07_007_80182600) {
                func_sc07_007_8017E234(&((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        func_sc07_007_80181048(o, &D_sc07_007_80187E80);
        func_sc07_007_80180F94(5);
        NextState(o);
    }
}

void func_sc07_007_8017F6BC(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187440, 0) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_8017F700(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187EE0, 2) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_8017F744(StageActor *arg0) {
    if (func_sc07_007_80180FF4(arg0, (s32) &D_sc07_007_801874E8, 3) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_8017F788(u8 *o) {
    u8 *p = g_ActiveCamera;

    if (func_sc07_007_80180F84() == 7) {
        func_sc07_007_8017D350();
        func_sc07_007_8018144C(o, &D_sc07_007_80187C78);
        AF(p, s32, 0x10) = AF(p, s32, 0x14) = 0x190;
        func_sc07_007_80181048(o, &D_sc07_007_80187440);
        SetMoverTimer(o, 0x1E);
        NextState(o);
    }
}

void func_sc07_007_8017F814(s32 arg0, s32 arg1, s32 arg2) {
    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(8);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188B18);
        NextState(arg0);
    }
}

void func_sc07_007_8017F864(StageActor *arg0) {
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187240, 0);
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187E80);
        func_sc07_007_80180F94(9);
        NextState(arg0);
    }
}

void func_sc07_007_8017F8C8(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187F30, 0) != 0) {
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80187C78;
extern u8 D_sc07_007_80188BDC;
extern void func_sc07_007_8018263C();
extern void func_sc07_007_8017D350();
extern s32 func_sc07_007_8018144C();
void func_sc07_007_8017F90C(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    u8 *p = g_ActiveCamera;
    s32 i;

    if (func_sc07_007_80180F84() == 0xB) {
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == func_sc07_007_8018263C) {
                func_sc07_007_8017E234(&((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        func_sc07_007_8018122C(o, &D_sc07_007_80188BDC);
        func_sc07_007_80181048(o, &D_sc07_007_80187298);
        func_sc07_007_8017D350();
        func_sc07_007_8018144C(o, &D_sc07_007_80187C78);
        AF(p, s32, 0x10) = AF(p, s32, 0x14) = 0x190;
        NextState(o);
    }
}

void func_sc07_007_8017F9EC(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0xC);
        NextState(arg0);
    }
}

void func_sc07_007_8017FA2C(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0xD) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187440);
        NextState(arg0);
    }
}

void func_sc07_007_8017FA78(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x13) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187E80);
        NextState(arg0);
    }
}

extern u8 D_sc07_007_80188DFC;
extern u8 D_sc07_007_80187318;
void func_sc07_007_8017FAC4(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    u8 *p = g_ActiveCamera;
    void (*f)();
    s32 i;

    if (func_sc07_007_80180F84() == 0x14) {
        func_sc07_007_8018122C(o, &D_sc07_007_80188DFC);
        func_sc07_007_80181048(o, &D_sc07_007_80187318);
        f = func_sc07_007_8018272C;
        for (i = 0; i < 4; i++) {
            if (((Ent *)&D_sc07_007_801C7808)[i].fn == f) {
                func_sc07_007_8017E234((s32) &((Ent *)&D_sc07_007_801C7808)[i]);
            }
        }
        func_sc07_007_8017D1F0();
        func_sc07_007_801813EC(o);
        AF(p, s32, 0x10) = AF(p, s32, 0x14) = 0x190;
        NextState(o);
    }
}

void func_sc07_007_8017FBA0(StageActor *arg0) {
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    func_sc07_007_801815B8(arg0, 0);
    if (func_sc07_007_80181334(arg0, 0) != 0) {
        AF(temp_s1, s32, 0x14) = 0x12C;
        NextState(arg0);
    }
}

void func_sc07_007_8017FBFC(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0x15);
        NextState(arg0);
    }
}

void func_sc07_007_8017FC3C(void) {
}

void func_sc07_007_8017FC44(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x1A) {
        DespawnActor(arg0);
        return;
    }
    D_sc07_007_80188604[arg0->state](arg0);
}

void func_sc07_007_8017FCAC(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801B5C84);
        temp_v0->colour = 0x7FFF7FFF;
        arg0->ofs[1] = 4;
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187610);
        SpawnShadow((s32) arg0);
        NextState((s32) arg0);
    }
}

extern u8 D_sc07_007_80188A34;
extern u8 D_sc07_007_80187628;
void func_sc07_007_8017FD2C(StageActor *o) {
    u8 *p = g_ActiveCamera;

    if (func_sc07_007_80180F84() == 5) {
        func_sc07_007_8017D350();
        func_sc07_007_8018144C(o, &D_sc07_007_80187C78);
        AF(p, s32, 0x10) = AF(p, s32, 0x14) = 0x190;
        func_sc07_007_8018122C(o, &D_sc07_007_80188A34);
        func_sc07_007_80181048(o, &D_sc07_007_80187628);
        NextState(o);
    }
}

void func_sc07_007_8017FDBC(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181334(arg0, 1, arg2) != 0) {
        func_sc07_007_8018141C(arg0, 1);
    }
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187610);
        func_sc07_007_80180F94(6);
        NextState(arg0);
    }
}

void func_sc07_007_8017FE28(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 7) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_801877C8);
        NextState(arg0);
    }
}

void func_sc07_007_8017FE74(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 8) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187858);
        NextState(arg0);
    }
}

void func_sc07_007_8017FEC0(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_801878B8);
    }
    if (func_sc07_007_80180FA4((s32) arg0, (s32) &D_sc07_007_80188030, 1) != 0) {
        NextState((s32) arg0);
    }
}

void func_sc07_007_8017FF28(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 9) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188008);
        NextState(arg0);
    }
}

void func_sc07_007_8017FF74(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc07_007_8018122C((s32) arg0, (s32) &D_sc07_007_80188B5C);
        NextState((s32) arg0);
    }
}

void func_sc07_007_8017FFC0(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0xA);
        NextState(arg0);
    }
}

void func_sc07_007_80180000(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0xB) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_801877C8);
        NextState(arg0);
    }
}

void func_sc07_007_8018004C(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187F68, 0) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187F68);
        NextState(arg0);
    }
}

void func_sc07_007_801800A4(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0xC) {
        func_sc07_007_801813CC(arg0);
        SetMoverTimer(arg0, 0x1E);
        NextState(arg0);
    }
}

void func_sc07_007_801800F4(s32 arg0, s32 arg1, s32 arg2) {
    if (TickTimer(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0xD);
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188C00);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187740);
        SetMoverTimer(arg0, 0);
        MimeRebuild((s32) &D_sc07_007_801B54FC, (s32) &D_sc07_007_801B5CB0, (s32) &D_sc07_007_801B6438, 0, /* extra? */ 0x1000);
        NextState(arg0);
    }
}

void func_sc07_007_80180188(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;

    temp_v1 = arg0->timer + 0x100;
    arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i - 1);
    arg0->timer = temp_v1;
    if (temp_v1 == 0x1000) {
        NextState((s32) arg0, arg1, arg2, arg3);
    }
}

void func_sc07_007_801801C8(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0xE);
        NextState(arg0);
    }
}

void func_sc07_007_80180208(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x15) {
        func_sc07_007_801813EC(0);
        func_sc07_007_8017D4E4();
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188E4C);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_801876B8);
        NextState(arg0);
    }
}

void func_sc07_007_80180274(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181280(arg0, arg1, arg2) != 0) {
        func_sc07_007_80180F94(0x17);
        NextState(arg0);
    }
}

void func_sc07_007_801802B4(void) {
}

void func_sc07_007_801802BC(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x1A) {
        DespawnActor(arg0);
        return;
    }
    D_sc07_007_80188654[arg0->state](arg0);
}

void func_sc07_007_80180324(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801BA63C);
        temp_v0->colour = 0x7FFF7FFF;
        arg0->ofs[1] = 4;
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80188098);
        func_80143994((s32) arg0, 0x3000);
        NextState((s32) arg0);
    }
}

void func_sc07_007_801803A8(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x357));
    if (func_sc07_007_80180F84() == 3) {
        NextState(arg0);
    }
}

void func_sc07_007_801803FC(StageActor *arg0) {
    func_sc07_007_80181614(arg0, 0xA00);
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187AE8, 4) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_8018044C(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x357));
    if (arg0->animTimer == 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187B90);
    }
    if (func_sc07_007_80180F84() == 4) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        NextState(arg0);
    }
}

void func_sc07_007_801804D0(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x358));
    if (func_sc07_007_80181334(arg0, 0) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_80180524(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x357));
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187AE8, 1) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_80180580(StageActor *arg0) {
    if (func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187AE8, 3) != 0) {
        NextState(arg0);
    }
}

void func_sc07_007_801805C4(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_80187B90);
        NextState((s32) arg0);
    }
}

void func_sc07_007_80180610(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 8) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        NextState(arg0);
    }
}

void func_sc07_007_8018065C(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x358));
    if (func_sc07_007_80180F84() == 0xE) {
        NextState(arg0);
    }
}

void func_sc07_007_801806B0(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x357));
    if ((func_sc07_007_80180F84() == 0xF) && (func_sc07_007_80181334(arg0, 1) != 0)) {
        func_sc07_007_801813CC(arg0);
        func_sc07_007_80181470(arg0, (s32) &D_sc07_007_80187C88, 1);
        NextState(arg0);
    }
}

void func_sc07_007_80180730(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x11) {
        func_sc07_007_8018122C(arg0, (s32) &D_sc07_007_80188CA4);
        SpawnActor(0x388, arg0);
        arg0->unkFC = 0;
        NextState(arg0);
    }
}

extern void func_sc07_007_80180F54();
extern void func_sc07_007_80181524();
void func_sc07_007_8018078C(StageActor *o) {
    switch (o->unkFC) {
    case 0:
        if (func_sc07_007_80180FA4(o, &D_sc07_007_801879C0, 0) != 0) {
            o->unkFC++;
        }
        break;
    case 1:
        func_sc07_007_801815B8(o, FindActorByKind(0x358));
        if (func_sc07_007_80181334(o, 1) != 0) {
            func_sc07_007_80181048(o, &D_sc07_007_80188098);
            func_sc07_007_80181048(o, &D_sc07_007_801879C0);
            o->unkFC++;
        }
        break;
    case 2:
        func_sc07_007_801815B8(o, FindActorByKind(0x357));
        if (func_sc07_007_80180FA4(o, &D_sc07_007_80187900, 2) != 0) {
            o->unkFC++;
            func_sc07_007_80180F54();
            func_sc07_007_80181524(o, &D_sc07_007_8018864C);
            NextState(o);
        }
        break;
    }
}

void func_sc07_007_801808C4(StageActor *arg0) {
    if (func_sc07_007_8018152C() != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        NextState(arg0);
    }
}

void func_sc07_007_8018090C(StageActor *arg0) {
    func_sc07_007_80180FA4(arg0, (s32) &D_sc07_007_80187BD8, 3);
    if (func_sc07_007_80181334(arg0, 4) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187BD8);
    }
    if (func_sc07_007_80181334(arg0, 5) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187BD8);
    }
    if (func_sc07_007_80181334(arg0, 6) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188098);
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80187BD8);
    }
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80180F94(0x12);
        NextState(arg0);
    }
}

void func_sc07_007_801809FC(StageActor *arg0, s32 arg1) {
    if ((func_sc07_007_80180F84(arg0, arg1) == 0x13) && (func_sc07_007_80181334(arg0, 1) != 0)) {
        NextState(arg0);
    }
}

void func_sc07_007_80180A48(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, 0);
    if (func_sc07_007_80180F84() == 0x14) {
        NextState(arg0);
    }
}

void func_sc07_007_80180A90(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x358));
    if (func_sc07_007_80180F84() == 0x15) {
        NextState(arg0);
    }
}

void func_sc07_007_80180AE4(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, FindActorByKind(0x359));
    if (func_sc07_007_80180F84() == 0x16) {
        NextState(arg0);
    }
}

void func_sc07_007_80180B38(StageActor *arg0) {
    func_sc07_007_801815B8(arg0, 0);
}

void func_sc07_007_80180B58(StageActor *arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x1A) {
        DespawnActor(arg0);
        return;
    }
    D_sc07_007_801886A4[arg0->state](arg0);
}

void func_sc07_007_80180BC0(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801C1E00);
        temp_v0->colour = 0x7FFF7FFF;
        arg0->ofs[1] = 4;
        func_sc07_007_80181048((s32) arg0, (s32) &D_sc07_007_801880A8);
        PartHide((s32) &D_sc07_007_801C1E00, 0x19);
        PartHide((s32) &D_sc07_007_801C1E00, 0x16);
        temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
        NextState((s32) arg0);
    }
}

void func_sc07_007_80180C6C(StageActor *arg0, s32 arg1) {
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    if (func_sc07_007_80180F84((s32) arg0, arg1) == 0x18) {
        temp_s0->rot.vy = 0xC00;
        temp_s0->unk04 = (s32) ((s32)temp_s0->unk04 & 0x7FFFFFFF);
        temp_s0->flags = (u16) (temp_s0->flags | 0x10);
        func_sc07_007_8017D5B0();
        func_sc07_007_801813EC((s32) arg0);
        NextState((s32) arg0);
    }
}

void func_sc07_007_80180CE8(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_s0;

    temp_s0 = arg0->model;
    temp_v0 = TurnStep((s32) temp_s0->rot.vy, 0x940, 4);
    temp_s0->scale.vz = 0xB33;
    temp_s0->scale.vy = 0xB33;
    temp_s0->scale.vx = 0xB33;
    temp_s0->rot.vy = (s16) (((u16) temp_s0->rot.vy + temp_v0) & 0xFFF);
    if ((temp_v0 << 0x10) == 0) {
        NextState((s32) arg0);
    }
}

extern u8 D_sc07_007_80188EB0;
extern void func_sc07_007_801827A4();
void func_sc07_007_80180D5C(StageActor *o) {
    typedef struct { void (*fn)(); u8 pad[0x14]; } Ent;
    s32 i;
    void (*f)();

    func_sc07_007_8018122C(o, &D_sc07_007_80188EB0);
    f = func_sc07_007_801827A4;
    for (i = 0; i < 4; i++) {
        if (((Ent *)&D_sc07_007_801C7808)[i].fn == 0) {
            ((Ent *)&D_sc07_007_801C7808)[i].fn = f;
            break;
        }
    }
    NextState(o);
}

void func_sc07_007_80180DCC(StageActor *arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80181334(arg0, 0, arg2) != 0) {
        func_sc07_007_80181048(arg0, (s32) &D_sc07_007_80188150);
    }
    if (func_sc07_007_80181280(arg0) != 0) {
        func_sc07_007_80180F94(0x19);
        NextState(arg0);
    }
}

void func_sc07_007_80180E30(void) {
}

void func_sc07_007_80180E38(StageActor *arg0) {
    D_sc07_007_801886E8[arg0->state]();
}

void func_sc07_007_80180E74(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc07_007_801C4C44);
        arg0->unkFC = 0;
        func_sc07_007_80180F38((s32) arg0);
        NextState((s32) arg0);
    }
}

extern s32 D_sc07_007_801886C8[];
extern void QueueImage();
void func_sc07_007_80180EC8(StageActor *o) {
    s16 i;
    s32 p;

    i = o->unkFC;
    o->unkFC = i + 1;
    p = D_sc07_007_801886C8[i];
    if (p == 0) {
        o->unkFC = 1;
        p = D_sc07_007_801886C8[0];
    }
    QueueImage(p);
    func_sc07_007_80180F38((s32)o);
}

s32 func_sc07_007_80180F38(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_sc07_007_80180F54(void) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x388);
    if (temp_v0 != 0) {
        DespawnActor(temp_v0);
    }
}

s32 func_sc07_007_80180F84(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return D_sc07_007_801C7A08;
}

void func_sc07_007_80180F94(s32 arg0) {
    D_sc07_007_801C7A08 = arg0;
}

s32 func_sc07_007_80180FA4(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_80180FF4(arg0, arg1, arg2) != 0) {
        ClearScriptSignal(arg0, arg2);
        return 1;
    }
    return 0;
}

s32 func_sc07_007_80180FF4(s32 arg0, s32 arg1, s32 arg2) {
    if (GetScriptSignal(arg0, arg2) != 0) {
        func_sc07_007_80181048(arg0, arg1);
        return 1;
    }
    return 0;
}

s32 func_sc07_007_80181048(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0x90) != arg1) {
        SetScript();
        return 1;
    }
    return 0;
}

s32 func_sc07_007_8018107C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc07_007_801810CC(arg0, arg1, arg2) != 0) {
        ClearScriptSignal(arg0, arg2);
        return 1;
    }
    return 0;
}

s32 func_sc07_007_801810CC(s32 arg0, s32 arg1, s32 arg2) {
    if (GetScriptSignal(arg0, arg2) != 0) {
        func_sc07_007_80181120(arg0, arg1);
        return 1;
    }
    return 0;
}

void func_sc07_007_80181120(s32 arg0) {
    func_sc07_007_80181140(arg0);
}

extern void MoveImage();
void func_sc07_007_80181140(s32 arg0, u8 *p) {
    while (AF(p, s32, 0xC) != 0) {
        MoveImage(p, AF(p, s32, 8), AF(p, s32, 0xC));
        p += 0x10;
    }
}

void func_sc07_007_801811A0(u8 *arg0, s32 arg1, s32 arg2) {
    s16 sp10;

    ClearScriptSignals();
    if (D_sc07_007_801C79CC == 0) {
        PosToSVec(arg0 + 4, (s32) &sp10);
        if (ProjectPoint((s32) &sp10, (s32) &sp10) & ~0x1000) {
            sp10 = 0;
        }
        AF(arg0, s32, 0xCC) = OpenMessageEx(arg1, (s32) sp10, arg2 & 0xFFFF);
    }
}

extern s32 OpenMessage();
void func_sc07_007_8018122C(u8 *o, s32 a) {
    ClearScriptSignals(o);
    if (D_sc07_007_801C79CC == 0) {
        AF(o, s32, 0xCC) = OpenMessage(a);
    }
}

extern s32 GetMessageAnswer();
s32 func_sc07_007_80181280(u8 *o) {
    if (D_sc07_007_801C79CC == 0) {
        return GetMessageAnswer(AF(o, s32, 0xCC)) != 0;
    }
    return 0;
}

s32 ClearScriptSignals(void) {
    SetFlag(0x125, 0);
    SetFlag(0x126, 0);
    SetFlag(0x127, 0);
    SetFlag(0x128, 0);
    SetFlag(0x129, 0);
    SetFlag(0x12A, 0);
    SetFlag(0x12B, 0);
    return SetFlag(0x12C, 0);
}

s32 func_sc07_007_80181334(s32 arg0, s32 arg1) {
    if (GetScriptSignal(arg0, arg1) != 0) {
        ClearScriptSignal(arg0, arg1);
        return 1;
    }
    return 0;
}

s32 GetScriptSignal(s32 arg0, s32 arg1, s32 arg2) {
    return (GetFlag(arg1 + 0x125) & 0xFF) != 0;
}

s32 ClearScriptSignal(s32 arg0, s32 arg1) {
    return SetFlag(arg1 + 0x125, 0);
}

s32 func_sc07_007_801813CC(StageActor *arg0, s32 arg1) {
    return SpawnHeadMarker(arg0, -0x8C);
}

void func_sc07_007_801813EC(u16 *p) {
    s32 v;
    if (p == 0) {
        v = 0;
    } else {
        v = *p;
    }
    func_sc07_007_8017DF5C(v, -1);
}

s32 func_sc07_007_8018141C(s32 arg0, s32 arg1) {
    s32 var_a0;

    if (arg0 == 0) {
        var_a0 = 0;
    } else {
        var_a0 = AF(arg0, u16, 0);
    }
    return func_sc07_007_8017DF5C((s32) var_a0, arg1);
}

s32 func_sc07_007_8018144C(s32 arg0, s32 arg1) {
    return func_sc07_007_8017DF74(arg1, -1);
}

s32 func_sc07_007_80181470(s32 arg0, s32 arg1, s32 arg2) {
    return func_sc07_007_8017DF74(arg1, arg2);
}

void func_sc07_007_80181494(u8 *o, SV8 *d, s32 n) {
    SV8 v;
    Player *b = &g_Player;
    u8 *p;

    if (o == 0) {
        p = (u8 *)b + 4;
    } else {
        p = o + 4;
    }
    PosToSVec(p, &v);
    v.x += d->x;
    v.y += d->y;
    v.z += d->z;
    func_sc07_007_8017DF74(&v, n);
}

void func_sc07_007_80181524(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xF4) = arg1;
}

extern s32 GroundDistSqTo();
extern s32 HeadingToPoint();
extern void SetForwardVelocity();
extern void MoveObject();
extern void SnapToGround();
s32 func_sc07_007_8018152C(u8 *o) {
    u8 *t = AF(o, u8 *, 0xF4);

    if (GroundDistSqTo(o, t) > 0x100) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, t);
        SetForwardVelocity(o, AF(t, s16, 6) << 16);
        MoveObject(o);
        AF(o, s16, 0xA) -= 8;
        SnapToGround(o);
        return 0;
    }
    return 1;
}

extern s32 HeadingTo();
void func_sc07_007_801815B8(u8 *o, u8 *t) {
    Player *b = &g_Player;
    s16 r;

    if (t == 0) {
        r = HeadingTo(o + 4, (u8 *)b + 4);
    } else {
        r = HeadingTo(o + 4, t + 4);
    }
    func_sc07_007_80181614((s32)o, r);
}

s32 func_sc07_007_80181614(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = TurnStep((s32) AF(temp_s0, s16, 0x12), (s32) (s16) arg1, 4);
    AF(temp_s0, s16, 0x12) = (s16) (((u16) AF(temp_s0, s16, 0x12) + temp_v0) & 0xFFF);
    return (temp_v0 << 0x10) == 0;
}

void func_sc07_007_80181668(StageActor *arg0) {
    D_sc07_007_801886FC[arg0->state]();
}

void func_sc07_007_801816A4(StageActor *arg0) {
    ModelObj *temp_v0;

    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    temp_v0 = AllocActorSprite();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitSpriteKind0(temp_v0, (s32) &D_sc07_007_801886F0, 0x300, 0x100);
        AF(temp_v0, u8, 0x27) = 0x33;
        temp_v0->flags = 1;
        temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
        NextState((s32) arg0);
    }
}

void func_sc07_007_80181730(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (D_sc07_007_801C7A08 == 0x19) {
        func_sc07_007_801827E0();
        AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
        AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) & 0x7FFFFFFF);
        func_sc07_007_80181960(0xFFFFFF, 2, 0);
        SetMoverTimer((s32) arg0, 0x3C);
        D_sc07_007_801C7A08 = 0x1A;
        NextState((s32) arg0);
    }
}

void func_sc07_007_801817D0(s32 arg0) {
    func_sc07_007_80181960(0xFFFFFF, 2, 0);
    if (TickTimer(arg0) != 0) {
        SetMoverTimer(arg0, 0x1E);
        NextState(arg0);
    }
}

void func_sc07_007_80181828(s32 arg0, s32 arg1, s32 arg2) {
    if (TickTimer(arg0, arg1, arg2) != 0) {
        AF(arg0, s16, 0xFC) = 0;
        NextState(arg0);
    }
    func_sc07_007_80181960(0xFFFFFF, 2, 0);
}

void func_sc07_007_80181878(StageActor *arg0) {
    u16 temp_v0;

    func_sc07_007_80181960(0xFFFFFF, 2, 0);
    temp_v0 = (u16)arg0->unkFC + 4;
    arg0->unkFC = temp_v0;
    if ((s16) temp_v0 < 0x100) {
        func_sc07_007_80181960((s16) temp_v0 | (((s16) temp_v0 << 0x10) | ((s16) temp_v0 << 8)), 0, 0x60000000);
        return;
    }
    func_sc07_007_80181960(0xFFFFFF, 0, 0x60000000);
    D_sc07_007_801C7A08 = 0x1B;
    DespawnActor((s32) arg0);
    D_800B9AAC = 0x7FFF;
    D_800B9B00 = 0x7FFF;
    D_801270C0 = 3;
    SetPropsActive(0);
    StartSeqPlayer();
    FreezeClockTint();
    D_800B9A11 = 1;
}

extern void DrawPrimF4Screen();
void func_sc07_007_80181960(s32 a, s32 b, s32 c) {
    struct { s32 w0; s16 z; s16 pad0; s32 w1; s32 pad1; s32 w2; s32 pad2; s32 w3; s32 pad3; s32 a; s32 c; } s;
    s.a = a;
    s.w0 = 0xFF10FEC0;
    s.w1 = 0xFF100140;
    s.w2 = 0xF0FEC0;
    s.w3 = 0xF00140;
    s.z = b;
    s.c = c;
    DrawPrimF4Screen(&s);
}

extern void (*D_sc07_007_801887B8[])();
extern s32 func_sc07_007_8018283C();
void func_sc07_007_801819BC(StageActor *o) {
    D_sc07_007_801887B8[o->state]();
    if (D_sc07_007_801C7A08 >= 0x1A) {
        D_sc07_007_801C799C++;
    }
    switch (D_sc07_007_801C7868) {
    case 0:
        break;
    case 1:
        D_sc07_007_801C7870 = 0;
        if (D_sc07_007_801C79CC != 0) {
            break;
        }
        if (func_sc07_007_8018283C(D_sc07_007_801C786C) == 0) {
            break;
        }
        D_sc07_007_801C7868++;
    case 2:
        D_sc07_007_801C7870 = 1;
        break;
    }
}

void func_sc07_007_80181AA8(StageActor *o) {
    typedef struct { u8 pad[0x72]; u16 f72; } ObjS;

    D_sc07_007_801C7870 = 1;
    ((ObjS *)o)->f72 |= 0x1000;
    D_sc07_007_801C7868 = 0;
    D_sc07_007_801C79A4 = 0;
    D_sc07_007_801C79B0 = 0;
    if (D_sc07_007_801C7A08 == 0x1B) {
        SetScreenMode2(7);
        D_800B9A18 = 0;
        NextState(o);
    }
}

void EndingExit(StageActor *arg0) {
    if (func_sc07_007_80181B8C() != 0) {
        SetScreenMode2(1);
        D_800B9A18 = 2;
        func_800D1724((s32) &D_sc07_007_80186940);
        NextState(arg0);
    }
}

void func_sc07_007_80181B84(void) {
}

s32 func_sc07_007_80181B8C(void) {
    V3 *p;
    s32 a;
    s32 b;

    p = &D_sc07_007_80188710[D_sc07_007_801C79A4];
    switch (D_sc07_007_801C79A0) {
    case 0:
        func_sc07_007_80181DFC(D_sc07_007_801C79A4);
        D_sc07_007_801C79A0++;
        break;
    case 1:
        if (func_sc07_007_80181E28() == 0) {
            return 0;
        }
        if (p->x > D_sc07_007_801C799C) {
            break;
        }
        D_sc07_007_801C79AC = p->y;
        func_sc07_007_80181E38(0, D_sc07_007_801C79B0);
        func_sc07_007_80181E38(1, D_sc07_007_801C79B0);
        D_sc07_007_801C79A0++;
        break;
    case 2:
        a = func_sc07_007_80181E50(0, D_sc07_007_801C79B0);
        b = func_sc07_007_80181E50(1, D_sc07_007_801C79B0);
        if (a == 0) {
            break;
        }
        if (b == 0) {
            return 0;
        }
        D_sc07_007_801C79A4++;
        D_sc07_007_801C79A0++;
        break;
    case 3:
        func_sc07_007_80181E50(0, D_sc07_007_801C79B0);
        func_sc07_007_80181E50(1, D_sc07_007_801C79B0);
        if (D_sc07_007_801C79A4 < 13) {
            func_sc07_007_80181DFC(D_sc07_007_801C79A4);
        }
        D_sc07_007_801C79A0++;
        break;
    case 4:
        func_sc07_007_80181E50(0, D_sc07_007_801C79B0);
        func_sc07_007_80181E50(1, D_sc07_007_801C79B0);
        if (func_sc07_007_80181E28() == 0) {
            return 0;
        }
        if (D_sc07_007_801C79AC > D_sc07_007_801C799C) {
            break;
        }
        D_sc07_007_801C79A0++;
        break;
    case 5:
        a = func_sc07_007_80181ED4(0, D_sc07_007_801C79B0);
        b = func_sc07_007_80181ED4(1, D_sc07_007_801C79B0);
        if (a == 0) {
            break;
        }
        if (b == 0) {
            return 0;
        }
        D_sc07_007_801C79B0 ^= 1;
        if (D_sc07_007_801C79A4 >= 13) {
            return 1;
        }
        D_sc07_007_801C79A0 = 1;
        break;
    }
    return 0;
}

void func_sc07_007_80181DFC(s32 arg0) {
    if (D_sc07_007_801C7870 != 0) {
        D_sc07_007_801C7868 = 1;
        D_sc07_007_801C786C = arg0;
    }
}

s32 func_sc07_007_80181E28(s32 arg0) {
    return D_sc07_007_801C7870;
}

void func_sc07_007_80181E38(s32 arg0, s32 arg1) {
    D_sc07_007_801C7994[arg0] = 0;
}

extern void func_sc07_007_80181F4C(s32 c, s32 n0);
extern void func_sc07_007_80182184(s32 c, s32 n0);
s32 func_sc07_007_80181E50(s32 i, s32 n) {
    s32 r = 0;

    if (++D_sc07_007_801C7994[i] >= 0x80) {
        D_sc07_007_801C7994[i] = 0x80;
        r = 1;
    }
    if (i == 0) {
        func_sc07_007_80181F4C((u8)D_sc07_007_801C7994[0], (u8)n);
    } else {
        func_sc07_007_80182184((u8)D_sc07_007_801C7994[i], (u8)n);
    }
    return r;
}

s32 func_sc07_007_80181ED4(s32 i, s32 n) {
    s32 r = 0;

    if (--D_sc07_007_801C7994[i] <= 0) {
        D_sc07_007_801C7994[i] = 0;
        r = 1;
    }
    if (i == 0) {
        func_sc07_007_80181F4C((u8)D_sc07_007_801C7994[0], (u8)n);
    } else {
        func_sc07_007_80182184((u8)D_sc07_007_801C7994[i], (u8)n);
    }
    return r;
}

void func_sc07_007_80181F4C(s32 c, s32 n0) {
    u8 n = n0;

    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->tag.len = 5;
    ((u32 *)&D_sc07_007_801C7874[n][D_800B9A02[0]])[1] = 0xE1000000 | ((n * 16 + 0x8E) & 0x9FF);
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->code = 0x64;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->r0 = (&D_sc07_007_801C7874[n][D_800B9A02[0]])->g0 = (&D_sc07_007_801C7874[n][D_800B9A02[0]])->b0 = c;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->x0 = 0;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->y0 = -0x70;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->u0 = 0;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->v0 = 0;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->clut = (((n << 8) >> 4) & 0x3F) | 0x7800;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->w = 0x100;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->h = 0xC0;
    (&D_sc07_007_801C7874[n][D_800B9A02[0]])->tag.addr = ((PTag *)&g_WorldOtTable[D_800B9A02[0]][3])->addr;
    ((PTag *)&g_WorldOtTable[D_800B9A02[0]][3])->addr = (u32)(&D_sc07_007_801C7874[n][D_800B9A02[0]]);
}

void func_sc07_007_80182184(s32 c, s32 n0) {
    u8 n = n0;

    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->tag.len = 5;
    ((u32 *)&D_sc07_007_801C78D4[n][D_800B9A02[0]])[1] = 0xE1000000 | ((n * 2 + 0x8A) & 0x9FF);
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->code = 0x64;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->r0 = (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->g0 = (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->b0 = c;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->x0 = -0x118;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->y0 = -0xF0;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->u0 = 0;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->v0 = 0;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->clut = (((n << 8) >> 4) & 0x3F) | 0x7880;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->w = 0x100;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->h = 0x100;
    (&D_sc07_007_801C78D4[n][D_800B9A02[0]])->tag.addr = ((PTag *)&g_WorldOtTable[D_800B9A02[0]][2])->addr;
    ((PTag *)&g_WorldOtTable[D_800B9A02[0]][2])->addr = (u32)(&D_sc07_007_801C78D4[n][D_800B9A02[0]]);
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->tag.len = 5;
    ((u32 *)&D_sc07_007_801C7934[n][D_800B9A02[0]])[1] = 0xE1000000 | ((n * 2 + 0x9A) & 0x9FF);
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->code = 0x64;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->r0 = (&D_sc07_007_801C7934[n][D_800B9A02[0]])->g0 = (&D_sc07_007_801C7934[n][D_800B9A02[0]])->b0 = c;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->x0 = -0x118;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->y0 = 0x10;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->u0 = 0;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->v0 = 0;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->clut = (((n << 8) >> 4) & 0x3F) | 0x7880;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->w = 0x100;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->h = 0xE0;
    (&D_sc07_007_801C7934[n][D_800B9A02[0]])->tag.addr = ((PTag *)&g_WorldOtTable[D_800B9A02[0]][2])->addr;
    ((PTag *)&g_WorldOtTable[D_800B9A02[0]][2])->addr = (u32)(&D_sc07_007_801C7934[n][D_800B9A02[0]]);
}

void func_sc07_007_801825C4(u8 *arg0) {
    D_sc07_007_801882C4[AF(arg0, u16, 4)]();
}

void func_sc07_007_80182600(u8 *arg0) {
    D_sc07_007_801882CC[AF(arg0, u16, 4)]();
}

void func_sc07_007_8018263C(u8 *arg0) {
    D_sc07_007_801882D4[AF(arg0, u16, 4)]();
}

void func_sc07_007_80182678(u8 *arg0) {
    D_sc07_007_801882DC[AF(arg0, u16, 4)]();
}

void func_sc07_007_801826B4(u8 *arg0) {
    D_sc07_007_801882E4[AF(arg0, u16, 4)]();
}

void func_sc07_007_801826F0(u8 *arg0) {
    D_sc07_007_801882EC[AF(arg0, u16, 4)]();
}

void func_sc07_007_8018272C(u8 *arg0) {
    D_sc07_007_801882F4[AF(arg0, u16, 4)]();
}

void func_sc07_007_80182768(u8 *arg0) {
    D_sc07_007_801882FC[AF(arg0, u16, 4)]();
}

void func_sc07_007_801827A4(u8 *arg0) {
    D_sc07_007_80188544[AF(arg0, u16, 4)]();
}

extern void SetCustomBgmData();
extern u8 D_sc07_007_80199D4C[];

void func_sc07_007_801827E0(void) {
    s32 i;
    for (i = 0; i < 0x944B; i++) {
        ((u8 *)0x801F0000)[i] = D_sc07_007_80199D4C[i];
    }
    SetCustomBgmData(0x801F0000);
    PlaySoundId(0x18E, 0);
}

s32 func_sc07_007_8018283C(s32 arg0) {
    return RequestLoad(0, 0, (s32) ((D_sc07_007_801887C4[arg0] * 8) + &g_ArchiveFileLoc), 0, /* extra? */ 0);
}

void func_sc07_007_80182888(s32 arg0, s32 arg1) {
    NextPlayerActionHandler(arg0, arg1);
}

void func_sc07_007_801828A8(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 2) {
        BeginScene(arg0);
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_801828EC(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 3) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182928(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 4) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182964(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 6) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_801829A0(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0xA) {
        BeginScene(arg0);
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_801829E4(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0xF) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182A20(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x12) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182A5C(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x13) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182A98(s32 arg0, s32 arg1) {
    if (func_sc07_007_80180F84(arg0, arg1) == 0x15) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182AD4(u8 *arg0) {
    D_sc07_007_801A359C[AF(arg0, u8, 0x216)]();
}

void func_sc07_007_80182B10(s32 arg0) {
    BeginScene(arg0);
    func_sc07_007_80180F94(0x16);
    BumpSub2Copy(arg0);
    func_sc07_007_80182B50(arg0);
}

s32 func_sc07_007_80182B50(s32 arg0) {
    if (func_sc07_007_80180F84(arg0) == 0x17) {
        SetActionTimer(arg0, 0xA);
        NextPlayerActionHandler(arg0);
    }
    return StepTowardSpeed(arg0, (s32) &D_sc07_007_801A35A4, 0x50);
}

void func_sc07_007_80182BA8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) - 0x2D);
    if (TickActionTimer() != 0) {
        func_sc07_007_80180F94(0x18);
        NextPlayerActionHandler((s32) arg0);
    }
}

void func_sc07_007_80182C00(u8 *arg0) {
    D_sc07_007_801A35AC[AF(arg0, u8, 0x216)]();
}

void func_sc07_007_80182C3C(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_sc07_007_80182C78(arg0);
}

void func_sc07_007_80182C78(s32 arg0) {
    if (func_sc07_007_80181334(0, g_ActionArgs) != 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc07_007_80182CBC(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A3198);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182CFC(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A31B8);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182D3C(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A3228);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182D7C(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A325C);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182DBC(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A3300);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182DFC(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A333C);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182E3C(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A3394);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182E7C(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc07_007_801A3424);
    NextPlayerActionHandler(arg0);
}

void func_sc07_007_80182EBC(void) {
    SetPlayerActionScriptPass((s32) &D_sc07_007_801A34B8, 0x01000000);
}
