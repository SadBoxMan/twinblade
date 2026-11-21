#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_116_8017BE9C(void) {
}

void func_sc03_116_8017BEA4(void) {
}

void func_sc03_116_8017BEAC(void) {
}

void func_sc03_116_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_116_801862EC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_116_80180C1C(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_116_801862F4[])();
void func_sc03_116_80180C44(void);
extern void func_800D1EBC();
extern void (*D_sc03_116_80186300[])();
extern u8 D_sc03_116_8018630C;
extern void StartPlayerActionScript();
extern u8 D_sc03_116_80186310;
extern void func_sc03_116_80180D04();
extern void (*D_sc03_116_80186314[])();
extern void (*D_sc03_116_80186324[])();
extern void (*D_sc03_116_80186344[])();
extern void (*D_sc03_116_80186578[])();
extern void func_sc03_116_80181954();
extern s32 func_sc03_116_801819A4();
extern void (*D_sc03_116_80195174[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_8012704C;

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

extern s32 GetProgress();
extern s16 D_sc03_116_80186320;
extern void NextState();
extern s32 AllocActorSprite();
extern void InitNullSprite();
extern void DespawnActor();
extern void SetState();
extern u8 D_sc03_116_80197B60;
extern void func_sc03_116_80181864();
extern s32 func_sc03_116_801818DC();
extern void SetMoverTimer();
extern s32 TickTimer();
extern void (*D_sc03_116_801864BC[])();
extern s32 SwellingLoopSound();
extern s32 SwellingTakeHit();
extern u8 D_sc03_116_80186500;
extern s32 FindActorByKindArg();
extern s32 FindActorByKind();
extern void StartEvent();
extern u8 D_sc03_116_80186588;
extern s32 D_sc03_116_80197CC4;
extern void func_8013B6A0();
extern s32 func_8013B7AC();

extern u8 D_sc03_116_801865A8;

extern void func_8001CD50();
extern void SetShapeCircle();
extern void func_sc03_116_80181844();
extern s32 func_sc03_116_801818B8();
extern s16 D_sc03_116_801864C8[];
extern s16 D_sc03_116_801864D4;
extern u8 D_sc03_116_801864E0;
extern u8 D_sc03_116_80194EE0;
extern s32 GetFlag();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_116_80195094;
extern s16 D_sc03_116_80195096;
extern s16 D_sc03_116_80195098;
extern Blk30 D_sc03_116_8019509C;
extern s16 D_sc03_116_801950CC;
extern s16 D_sc03_116_801950CE;
extern s16 D_sc03_116_801950D0;
extern Blk30 D_sc03_116_801950D4;
extern s16 D_sc03_116_80195104;
extern s16 D_sc03_116_80195106;
extern s16 D_sc03_116_80195108;
extern Blk30 D_sc03_116_8019510C;
extern s16 D_sc03_116_8019513C;
extern s16 D_sc03_116_8019513E;
extern s16 D_sc03_116_80195140;
extern Blk30 D_sc03_116_80195144;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void ApplyLight();

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
extern u8 D_sc03_116_80186318[];
extern s32 GetObjPadPressed();
extern void func_sc03_116_80180DE0();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

typedef struct { u8 b[0x34]; } R34;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern V16 D_sc03_116_801950BC;
extern s32 D_800A5EB0;
extern V16 D_sc03_116_801950F4;
extern s32 D_800A5E90;

extern void ProjectPoint();
extern s32 SVecDistSq();
extern s32 SpawnPropFrom();
extern s32 rand();
extern s16 D_sc03_116_80194EEC[][3];
extern s16 D_sc03_116_80194FC0[][3];
extern u8 D_sc03_116_8018633C;
extern void SetScaleMatrix();
extern void DrawPrimG4Mtx();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
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
typedef struct { s16 v; } S16R;

extern s32 HitBoxEdgesHitPlayer();
extern s16 g_PlayerHitKind;
extern u16 g_Actors;

extern u16 D_800B99DA;
extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();
extern void func_sc03_116_8017BF14();

void func_sc03_116_8017BEBC(u8 *obj) {
    MtxDCM ls;
    s32 zlim;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    func_sc03_116_8017BF14(obj, zlim);
}

extern s16 D_sc03_116_8018631C[];
void func_sc03_116_801812AC(s32 a0, s16 *r, void *rot, s32 flag, s32 col);
extern void SpawnKind1CAt();
extern void FreeActor();
s32 func_sc03_116_8018232C(s32 arg0);
extern void func_8001CA1C();
extern u8 D_sc03_116_80186364;
extern u8 D_sc03_116_80186424;
extern u8 D_sc03_116_801864AC;
void func_sc03_116_80180F78(void);
void func_sc03_116_8018234C(void);
extern void SetFlag();
extern void HideModel();
extern s32 IsEventDone();
extern void EndEvent();

extern u8 D_800AF630;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_sc03_116_80197C28;
extern s16 D_sc03_116_80197C2C;
extern s16 D_sc03_116_80197C2E;
extern s16 D_sc03_116_80197C30;
extern s32 D_sc03_116_80197C34;
extern s32 D_sc03_116_80197C44;
extern s16 D_sc03_116_80197C48;
extern s16 D_sc03_116_80197C4A;
extern s16 D_sc03_116_80197C4C;
extern s32 D_sc03_116_80197C50;
extern s32 D_sc03_116_80197C60;
extern s16 D_sc03_116_80197C64;
extern s16 D_sc03_116_80197C66;
extern s16 D_sc03_116_80197C68;
extern s32 D_sc03_116_80197C6C;
extern s32 D_sc03_116_80197C7C;
extern s16 D_sc03_116_80197C80;
extern s16 D_sc03_116_80197C82;
extern s16 D_sc03_116_80197C84;
extern s32 D_sc03_116_80197C88;

void func_sc03_116_8017BF14(u8 *obj, s32 far) {
    s32 sxy[3];
    SV8 box[8];
    SV8 scr[8];
    s32 otz;
    s32 flag;
    s32 z;
    s32 sz0, sz1, sz2, sz3;
    s32 i;
    u32 j;
    u8 *p3;
    u32 *ot;
    u8 *pkt;
    s32 f0, f1, f2, f3;
    s16 vx3, vz3, vy3;
    u32 *face;
    u32 count;
    u8 *base;
    s32 n;
    u32 *bb;
    u8 *hdr;
    u8 *w;
    u32 wx, wy, wz;
    s16 bz0, bz1;
    s32 mx0, mn0, mx1, mn1, mx, mn;
    s32 v;
    u8 *p0, *p1, *p2;
    u32 hi;
    s32 t;
    s16 tmx, tmn, umx, umn;
    s32 zm, zb;
    u32 q0, q1;
    s16 vx0, vy0, vz0, vx1, vy1, vz1, vx2, vy2, vz2;
    s32 d;
    s32 b0, b1, b2, b3;
    s32 c0, c1, c2, c3;
    u32 *tex;
    u32 code;
    u32 cw3;
    s16 xl0, xh0, yl0, yh0, zl0, zh0;
    s16 xl1, xh1, yl1, yh1, zl1, zh1;
    s16 xl2, xh2, yl2, yh2, zl2, zh2;
    s16 xl3, xh3, yl3, yh3, zl3, zh3;
    s16 X0, Y0, Z0, X1, Y1, Z1, X2, Y2, Z2, X3, Y3, Z3;
    s16 R0, M0, R1, M1, R2, M2, R3, M3;

    w = &D_800AF630;
    R0 = R1 = R2 = M0 = M1 = M2 = 0;
    if (D_sc03_116_80197C28 != 0) {
        X0 = D_sc03_116_80197C2C;
        Y0 = D_sc03_116_80197C2E;
        Z0 = D_sc03_116_80197C30;
        R0 = D_sc03_116_80197C34;
        M0 = R0 - 0x200;
    } else {
        X0 = Y0 = Z0 = 0x6000;
    }
    if (D_sc03_116_80197C44 != 0) {
        X1 = D_sc03_116_80197C48;
        Y1 = D_sc03_116_80197C4A;
        Z1 = D_sc03_116_80197C4C;
        R1 = D_sc03_116_80197C50;
        M1 = R1 - 0x200;
    } else {
        X1 = Y1 = Z1 = 0x6000;
    }
    if (D_sc03_116_80197C60 != 0) {
        X2 = D_sc03_116_80197C64;
        Y2 = D_sc03_116_80197C66;
        Z2 = D_sc03_116_80197C68;
        R2 = D_sc03_116_80197C6C;
        M2 = R2 - 0x200;
    } else {
        X2 = Y2 = Z2 = 0x6000;
    }
    if (D_sc03_116_80197C7C != 0) {
        X3 = D_sc03_116_80197C80;
        Y3 = D_sc03_116_80197C82;
        Z3 = D_sc03_116_80197C84;
        R3 = D_sc03_116_80197C88;
        M3 = R2 - 0x200;
    } else {
        X3 = Y3 = Z3 = 0x6000;
    }
    xl0 = X0 - R0;
    xh0 = X0 + R0;
    yl0 = Y0 - R0;
    yh0 = Y0 + R0;
    zl0 = Z0 - R0;
    zh0 = Z0 + R0;
    xl1 = X1 - R1;
    xh1 = X1 + R1;
    yl1 = Y1 - R1;
    yh1 = Y1 + R1;
    zl1 = Z1 - R1;
    zh1 = Z1 + R1;
    xl2 = X2 - R2;
    xh2 = X2 + R2;
    yl2 = Y2 - R2;
    yh2 = Y2 + R2;
    zl2 = Z2 - R2;
    zh2 = Z2 + R2;
    xl3 = X3 - R3;
    xh3 = X3 + R3;
    yl3 = Y3 - R3;
    yh3 = Y3 + R3;
    zl3 = Z3 - R3;
    zh3 = Z3 + R3;
    pkt = g_PrimNext;
    bb = AF(obj, u32 *, 0xC);
    hdr = AF(obj, u8 *, 8);
    ot = g_WorldOtTable[AF(w, u16, 0xA3D2)];
    n = AF(hdr, s32, 8);
    base = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, bb += 5) {
        wx = bb[0];
        wy = bb[1];
        wz = bb[2];
        tmn = wx;
        tmx = wx >> 16;
        umn = wy;
        umx = wy >> 16;
        bz0 = wz;
        bz1 = wz >> 16;
        box[0].x = tmn; box[0].y = umn;
        box[1].x = tmx; box[1].y = umn;
        box[2].x = tmn; box[2].y = umn;
        box[3].x = tmx; box[3].y = umn;
        box[4].x = tmn; box[4].y = umx;
        box[5].x = tmx; box[5].y = umx;
        box[6].x = tmn; box[6].y = umx;
        box[7].x = tmx; box[7].y = umx;
        box[0].z = bz0; box[1].z = bz0; box[4].z = bz0; box[5].z = bz0;
        box[2].z = bz1; box[3].z = bz1; box[6].z = bz1; box[7].z = bz1;
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
        gte_stszotz(&otz);
        if (far < otz) continue;
        if (scr[0].x > scr[1].x) { mx0 = scr[0].x; mn0 = scr[1].x; } else { mn0 = scr[0].x; mx0 = scr[1].x; }
        v = scr[2].x; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        v = scr[3].x; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        if (scr[4].x > scr[5].x) { mx1 = scr[4].x; mn1 = scr[5].x; } else { mn1 = scr[4].x; mx1 = scr[5].x; }
        v = scr[6].x; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        v = scr[7].x; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        mn = mn0; if (mn1 < mn) mn = mn1;
        mx = mx0; if (mx < mx1) mx = mx1;
        if ((s16)mx < -0xA0 || (s16)mn > 0xA0) continue;
        if (scr[0].y > scr[1].y) { mx0 = scr[0].y; mn0 = scr[1].y; } else { mn0 = scr[0].y; mx0 = scr[1].y; }
        v = scr[2].y; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        v = scr[3].y; if (mx0 < v) mx0 = v; else if (v < mn0) mn0 = v;
        if (scr[4].y > scr[5].y) { mx1 = scr[4].y; mn1 = scr[5].y; } else { mn1 = scr[4].y; mx1 = scr[5].y; }
        v = scr[6].y; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        v = scr[7].y; if (mx1 < v) mx1 = v; else if (v < mn1) mn1 = v;
        mn = mn0; if (mn1 < mn) mn = mn1;
        mx = mx0; if (mx < mx1) mx = mx1;
        if ((s16)mx < -0x6E || (s16)mn > 0x6E) continue;
        face = (u32 *)bb[4];
        count = bb[3];
        for (j = 0; j < count; j++, face += 3) {
            hi = face[1];
            p0 = base + (hi & 0xFFFF);
            p1 = base + (hi >> 16);
            hi = face[2];
            p2 = base + (hi & 0xFFFF);
            hi = hi >> 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            gte_stflg(&flag);
            if (flag & 0x7F85E000) continue;
            gte_nclip();
            t = hi & 7;
            p3 = base + (hi & 0xFFF8);
            gte_stopz(&z);
            if (z <= 0) continue;
            switch (t) {
                case 6:
                case 7: {
                    gte_stsxy3c(sxy);
                    gte_stsz3(&sz0, &sz1, &sz2);
                    {
                        s16 pa, pb, pc;
                        pa = AF(sxy, s16, 0); pb = AF(sxy, s16, 4);
                        if (pa > pb) { tmx = pa; tmn = pb; } else { tmn = pa; tmx = pb; }
                        pc = AF(sxy, s16, 8);
                        if (pc > tmx) tmx = pc; else if (pc < tmn) tmn = pc;
                    }
                    if (tmx < -0xA0 || tmn > 0xA0) break;
                    {
                        s16 pa, pb, pc;
                        pa = AF(sxy, s16, 2); pb = AF(sxy, s16, 6);
                        if (pa > pb) { umx = pa; umn = pb; } else { umn = pa; umx = pb; }
                        pc = AF(sxy, s16, 10);
                        if (pc > umx) umx = pc; else if (pc < umn) umn = pc;
                    }
                    if (umx < -0x6E || umn > 0x6E) break;
                    if (sz0 > sz1) { zm = sz0; if (zm < sz2) zm = sz2; }
                    else { zm = sz1; if (zm < sz2) zm = sz2; }
                    z = zm;
                    f0 = f1 = f2 = f3 = 0;
                    q0 = AF(p0, u32, 0); q1 = AF(p0, u32, 4);
                    vx0 = q0; vy0 = q0 >> 16; vz0 = q1;
                    if (xl0 < vx0 && vx0 < xh0 && yl0 < vy0 && vy0 < yh0 && zl0 < vz0 && vz0 < zh0) f0 = 1;
                    if (xl1 < vx0 && vx0 < xh1 && yl1 < vy0 && vy0 < yh1 && zl1 < vz0 && vz0 < zh1) f1 = 1;
                    if (xl2 < vx0 && vx0 < xh2 && yl2 < vy0 && vy0 < yh2 && zl2 < vz0 && vz0 < zh2) f2 = 1;
                    if (xl3 < vx0 && vx0 < xh3 && yl3 < vy0 && vy0 < yh3 && zl3 < vz0 && vz0 < zh3) f3 = 1;
                    q0 = AF(p1, u32, 0); q1 = AF(p1, u32, 4);
                    vx1 = q0; vy1 = q0 >> 16; vz1 = q1;
                    if (xl0 < vx1 && vx1 < xh0 && yl0 < vy1 && vy1 < yh0 && zl0 < vz1 && vz1 < zh0) f0 = 1;
                    if (xl1 < vx1 && vx1 < xh1 && yl1 < vy1 && vy1 < yh1 && zl1 < vz1 && vz1 < zh1) f1 = 1;
                    if (xl2 < vx1 && vx1 < xh2 && yl2 < vy1 && vy1 < yh2 && zl2 < vz1 && vz1 < zh2) f2 = 1;
                    if (xl3 < vx1 && vx1 < xh3 && yl3 < vy1 && vy1 < yh3 && zl3 < vz1 && vz1 < zh3) f3 = 1;
                    q0 = AF(p2, u32, 0); q1 = AF(p2, u32, 4);
                    vx2 = q0; vy2 = q0 >> 16; vz2 = q1;
                    if (xl0 < vx2 && vx2 < xh0 && yl0 < vy2 && vy2 < yh0 && zl0 < vz2 && vz2 < zh0) f0 = 1;
                    if (xl1 < vx2 && vx2 < xh1 && yl1 < vy2 && vy2 < yh1 && zl1 < vz2 && vz2 < zh1) f1 = 1;
                    if (xl2 < vx2 && vx2 < xh2 && yl2 < vy2 && vy2 < yh2 && zl2 < vz2 && vz2 < zh2) f2 = 1;
                    if (xl3 < vx2 && vx2 < xh3 && yl3 < vy2 && vy2 < yh3 && zl3 < vz2 && vz2 < zh3) f3 = 1;
                    if (f0 | f1 | f2 | f3) {
                        b0 = 0;
                        if (f0) {
                            d = vx0 - X0; if (d < 0) d = X0 - vx0;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz0 - Z0; if (d < 0) d = Z0 - vz0;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy0 - Y0; if (d < 0) d = Y0 - vy0;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx0 - X1; if (d < 0) d = X1 - vx0;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz0 - Z1; if (d < 0) d = Z1 - vz0;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy0 - Y1; if (d < 0) d = Y1 - vy0;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx0 - X2; if (d < 0) d = X2 - vx0;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz0 - Z2; if (d < 0) d = Z2 - vz0;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy0 - Y2; if (d < 0) d = Y2 - vy0;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx0 - X3; if (d < 0) d = X3 - vx0;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz0 - Z3; if (d < 0) d = Z3 - vz0;
                            if (R2 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy0 - Y3; if (d < 0) d = Y3 - vy0;
                            if (R2 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c0 = b0 + b1 + b2 + b3 + 0x10;
                        if (c0 > 0x80) c0 = 0x80;
                        b0 = 0;
                        if (f0) {
                            d = vx1 - X0; if (d < 0) d = X0 - vx1;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz1 - Z0; if (d < 0) d = Z0 - vz1;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy1 - Y0; if (d < 0) d = Y0 - vy1;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx1 - X1; if (d < 0) d = X1 - vx1;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz1 - Z1; if (d < 0) d = Z1 - vz1;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy1 - Y1; if (d < 0) d = Y1 - vy1;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx1 - X2; if (d < 0) d = X2 - vx1;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz1 - Z2; if (d < 0) d = Z2 - vz1;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy1 - Y2; if (d < 0) d = Y2 - vy1;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx1 - X3; if (d < 0) d = X3 - vx1;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz1 - Z3; if (d < 0) d = Z3 - vz1;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy1 - Y3; if (d < 0) d = Y3 - vy1;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c1 = b0 + b1 + b2 + b3 + 0x10;
                        if (c1 > 0x80) c1 = 0x80;
                        b0 = 0;
                        if (f0) {
                            d = vx2 - X0; if (d < 0) d = X0 - vx2;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz2 - Z0; if (d < 0) d = Z0 - vz2;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy2 - Y0; if (d < 0) d = Y0 - vy2;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx2 - X1; if (d < 0) d = X1 - vx2;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz2 - Z1; if (d < 0) d = Z1 - vz2;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy2 - Y1; if (d < 0) d = Y1 - vy2;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx2 - X2; if (d < 0) d = X2 - vx2;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz2 - Z2; if (d < 0) d = Z2 - vz2;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy2 - Y2; if (d < 0) d = Y2 - vy2;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx2 - X3; if (d < 0) d = X3 - vx2;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz2 - Z3; if (d < 0) d = Z3 - vz2;
                            if (R2 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy2 - Y3; if (d < 0) d = Y3 - vy2;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c2 = b0 + b1 + b2 + b3 + 0x10;
                        if (c2 > 0x80) c2 = 0x80;
                        AF(pkt, s32, 0x08) = sxy[0];
                        AF(pkt, s32, 0x14) = sxy[1];
                        AF(pkt, s32, 0x20) = sxy[2];
                        code = 0x34000000;
                        tex = (u32 *)face[0];
                        cw3 = c0 | code | (c0 << 8) | (c0 << 16);
                        AF(pkt, u32, 0x04) = cw3;
                        cw3 = c1 | code | (c1 << 8) | (c1 << 16);
                        AF(pkt, u32, 0x10) = cw3;
                        cw3 = c2 | code | (c2 << 8) | (c2 << 16);
                        AF(pkt, u32, 0x1C) = cw3;
                        AF(pkt, u32, 0x0C) = tex[1];
                        AF(pkt, u32, 0x18) = tex[2];
                        AF(pkt, u16, 0x24) = tex[3];
                        {
                            u32 *o;
                            o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                            *(u32 *)pkt = (*o & 0xFFFFFF) | (9 << 24);
                            *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                        }
                        pkt += 0x28;
                    } else {
                        AF(pkt, s32, 0x08) = sxy[0];
                        AF(pkt, s32, 0x10) = sxy[1];
                        AF(pkt, s32, 0x18) = sxy[2];
                        tex = (u32 *)face[0];
                        code = tex[0] & 0xFF000000;
                        AF(pkt, u32, 0x04) = code | 0x101010;
                        AF(pkt, u32, 0x0C) = tex[1];
                        AF(pkt, u32, 0x14) = tex[2];
                        AF(pkt, u16, 0x1C) = tex[3];
                        {
                            u32 *o;
                            o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                            *(u32 *)pkt = (*o & 0xFFFFFF) | (7 << 24);
                            *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                        }
                        pkt += 0x20;
                    }
                    break;
                }
                case 2:
                case 3: {
                    gte_stsxy3c(sxy);
                    gte_ldv0(p3);
                    gte_rtps();
                    {
                        s16 pa, pb, pc;
                        pa = AF(sxy, s16, 0); pb = AF(sxy, s16, 4);
                        if (pa > pb) { tmx = pa; tmn = pb; } else { tmn = pa; tmx = pb; }
                        pc = AF(sxy, s16, 8);
                        if (pc > tmx) tmx = pc; else if (pc < tmn) tmn = pc;
                    }
                    {
                        s16 pa, pb, pc;
                        pa = AF(sxy, s16, 2); pb = AF(sxy, s16, 6);
                        if (pa > pb) { umx = pa; umn = pb; } else { umn = pa; umx = pb; }
                        pc = AF(sxy, s16, 10);
                        if (pc > umx) umx = pc; else if (pc < umn) umn = pc;
                    }
                    gte_stflg(&flag);
                    if (flag & 0x7F85E000) break;
                    gte_stsz4(&sz0, &sz1, &sz2, &sz3);
                    gte_stsxy(pkt + 0x20);
                    {
                        s16 pd;
                        pd = AF(pkt, s16, 32);
                        if (pd < tmn) tmn = pd; else if (tmx < pd) tmx = pd;
                    }
                    if (tmx < -0xA0 || tmn > 0xA0) break;
                    {
                        s16 pd;
                        pd = AF(pkt, s16, 34);
                        if (pd < umn) {
                            do { umn = pd; } while (0); /* MATCH-TRICK: one more loop-weighted ref of umn so it outranks umx in global alloc (box: umn a2, umx a3) */
                        } else if (umx < pd) umx = pd;
                    }
                    if (umx < -0x6E || umn > 0x6E) break;
                    { s32 zc; zb = sz2; if (zb < sz3) zb = sz3; zc = sz0; if (zc < sz1) zc = sz1; if (zc < zb) zc = zb; z = zc; }
                    f0 = f1 = f2 = f3 = 0;
                    q0 = AF(p0, u32, 0); q1 = AF(p0, u32, 4);
                    vx0 = q0; vy0 = q0 >> 16; vz0 = q1;
                    if (xl0 < vx0 && vx0 < xh0 && yl0 < vy0 && vy0 < yh0 && zl0 < vz0 && vz0 < zh0) f0 = 1;
                    if (xl1 < vx0 && vx0 < xh1 && yl1 < vy0 && vy0 < yh1 && zl1 < vz0 && vz0 < zh1) f1 = 1;
                    if (xl2 < vx0 && vx0 < xh2 && yl2 < vy0 && vy0 < yh2 && zl2 < vz0 && vz0 < zh2) f2 = 1;
                    if (xl3 < vx0 && vx0 < xh3 && yl3 < vy0 && vy0 < yh3 && zl3 < vz0 && vz0 < zh3) f3 = 1;
                    q0 = AF(p1, u32, 0); q1 = AF(p1, u32, 4);
                    vx1 = q0; vy1 = q0 >> 16; vz1 = q1;
                    if (xl0 < vx1 && vx1 < xh0 && yl0 < vy1 && vy1 < yh0 && zl0 < vz1 && vz1 < zh0) f0 = 1;
                    if (xl1 < vx1 && vx1 < xh1 && yl1 < vy1 && vy1 < yh1 && zl1 < vz1 && vz1 < zh1) f1 = 1;
                    if (xl2 < vx1 && vx1 < xh2 && yl2 < vy1 && vy1 < yh2 && zl2 < vz1 && vz1 < zh2) f2 = 1;
                    if (xl3 < vx1 && vx1 < xh3 && yl3 < vy1 && vy1 < yh3 && zl3 < vz1 && vz1 < zh3) f3 = 1;
                    q0 = AF(p2, u32, 0); q1 = AF(p2, u32, 4);
                    vx2 = q0; vy2 = q0 >> 16; vz2 = q1;
                    if (xl0 < vx2 && vx2 < xh0 && yl0 < vy2 && vy2 < yh0 && zl0 < vz2 && vz2 < zh0) f0 = 1;
                    if (xl1 < vx2 && vx2 < xh1 && yl1 < vy2 && vy2 < yh1 && zl1 < vz2 && vz2 < zh1) f1 = 1;
                    if (xl2 < vx2 && vx2 < xh2 && yl2 < vy2 && vy2 < yh2 && zl2 < vz2 && vz2 < zh2) f2 = 1;
                    if (xl3 < vx2 && vx2 < xh3 && yl3 < vy2 && vy2 < yh3 && zl3 < vz2 && vz2 < zh3) f3 = 1;
                    q0 = AF(p3, u32, 0); q1 = AF(p3, u32, 4);
                    vx3 = q0; vy3 = q0 >> 16; vz3 = q1;
                    if (xl0 < vx3 && vx3 < xh0 && yl0 < vy3 && vy3 < yh0 && zl0 < vz3 && vz3 < zh0) f0 = 1;
                    if (xl1 < vx3 && vx3 < xh1 && yl1 < vy3 && vy3 < yh1 && zl1 < vz3 && vz3 < zh1) f1 = 1;
                    if (xl2 < vx3 && vx3 < xh2 && yl2 < vy3 && vy3 < yh2 && zl2 < vz3 && vz3 < zh2) f2 = 1;
                    if (xl3 < vx3 && vx3 < xh3 && yl3 < vy3 && vy3 < yh3 && zl3 < vz3 && vz3 < zh3) f3 = 1;
                    if (f0 | f1 | f2 | f3) {
                        b0 = 0;
                        if (f0) {
                            d = vx0 - X0; if (d < 0) d = X0 - vx0;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz0 - Z0; if (d < 0) d = Z0 - vz0;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy0 - Y0; if (d < 0) d = Y0 - vy0;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx0 - X1; if (d < 0) d = X1 - vx0;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz0 - Z1; if (d < 0) d = Z1 - vz0;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy0 - Y1; if (d < 0) d = Y1 - vy0;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx0 - X2; if (d < 0) d = X2 - vx0;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz0 - Z2; if (d < 0) d = Z2 - vz0;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy0 - Y2; if (d < 0) d = Y2 - vy0;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx0 - X3; if (d < 0) d = X3 - vx0;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz0 - Z3; if (d < 0) d = Z3 - vz0;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy0 - Y3; if (d < 0) d = Y3 - vy0;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c0 = b0 + b1 + b2 + b3 + 0x10;
                        if (c0 > 0x80) c0 = 0x80;
                        b0 = 0;
                        if (f0) {
                            d = vx1 - X0; if (d < 0) d = X0 - vx1;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz1 - Z0; if (d < 0) d = Z0 - vz1;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy1 - Y0; if (d < 0) d = Y0 - vy1;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx1 - X1; if (d < 0) d = X1 - vx1;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz1 - Z1; if (d < 0) d = Z1 - vz1;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy1 - Y1; if (d < 0) d = Y1 - vy1;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx1 - X2; if (d < 0) d = X2 - vx1;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz1 - Z2; if (d < 0) d = Z2 - vz1;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy1 - Y2; if (d < 0) d = Y2 - vy1;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx1 - X3; if (d < 0) d = X3 - vx1;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz1 - Z3; if (d < 0) d = Z3 - vz1;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy1 - Y3; if (d < 0) d = Y3 - vy1;
                            if (R3 < d) b3 = 0; else if (M3 < d) b2 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c1 = b0 + b1 + b2 + b3 + 0x10;
                        if (c1 > 0x80) c1 = 0x80;
                        b0 = 0;
                        if (f0) {
                            d = vx2 - X0; if (d < 0) d = X0 - vx2;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz2 - Z0; if (d < 0) d = Z0 - vz2;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy2 - Y0; if (d < 0) d = Y0 - vy2;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx2 - X1; if (d < 0) d = X1 - vx2;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz2 - Z1; if (d < 0) d = Z1 - vz2;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy2 - Y1; if (d < 0) d = Y1 - vy2;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx2 - X2; if (d < 0) d = X2 - vx2;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz2 - Z2; if (d < 0) d = Z2 - vz2;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy2 - Y2; if (d < 0) d = Y2 - vy2;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx2 - X3; if (d < 0) d = X3 - vx2;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz2 - Z3; if (d < 0) d = Z3 - vz2;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy2 - Y3; if (d < 0) d = Y3 - vy2;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c2 = b0 + b1 + b2 + b3 + 0x10;
                        if (c2 > 0x80) c2 = 0x80;
                        b0 = 0;
                        if (f0) {
                            d = vx3 - X0; if (d < 0) d = X0 - vx3;
                            if (d < R0) { if (d < M0) b0 = 0x80; else b0 = (R0 - d) / 4; }
                            d = vz3 - Z0; if (d < 0) d = Z0 - vz3;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                            d = vy3 - Y0; if (d < 0) d = Y0 - vy3;
                            if (R0 < d) b0 = 0; else if (M0 < d) b0 = (b0 * ((R0 - d) / 4)) >> 7;
                        }
                        b1 = 0;
                        if (f1) {
                            d = vx3 - X1; if (d < 0) d = X1 - vx3;
                            if (d < R1) { if (d < M1) b1 = 0x80; else b1 = (R1 - d) / 4; }
                            d = vz3 - Z1; if (d < 0) d = Z1 - vz3;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                            d = vy3 - Y1; if (d < 0) d = Y1 - vy3;
                            if (R1 < d) b1 = 0; else if (M1 < d) b1 = (b1 * ((R1 - d) / 4)) >> 7;
                        }
                        b2 = 0;
                        if (f2) {
                            d = vx3 - X2; if (d < 0) d = X2 - vx3;
                            if (d < R2) { if (d < M2) b2 = 0x80; else b2 = (R2 - d) / 4; }
                            d = vz3 - Z2; if (d < 0) d = Z2 - vz3;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                            d = vy3 - Y2; if (d < 0) d = Y2 - vy3;
                            if (R2 < d) b2 = 0; else if (M2 < d) b2 = (b2 * ((R2 - d) / 4)) >> 7;
                        }
                        b3 = 0;
                        if (f3) {
                            d = vx3 - X3; if (d < 0) d = X3 - vx3;
                            if (d < R3) { if (d < M3) b3 = 0x80; else b3 = (R3 - d) / 4; }
                            d = vz3 - Z3; if (d < 0) d = Z3 - vz3;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                            d = vy3 - Y3; if (d < 0) d = Y3 - vy3;
                            if (R3 < d) b3 = 0; else if (M3 < d) b3 = (b3 * ((R3 - d) / 4)) >> 7;
                        }
                        c3 = b0 + b1 + b2 + b3 + 0x10;
                        if (c3 > 0x80) c3 = 0x80;
                        AF(pkt, s32, 0x08) = sxy[0];
                        AF(pkt, s32, 0x14) = sxy[1];
                        AF(pkt, s32, 0x20) = sxy[2];
                        gte_stsxy(pkt + 0x2C);
                        code = 0x3C000000;
                        tex = (u32 *)face[0];
                        t = c0 | code | (c0 << 8) | (c0 << 16);
                        AF(pkt, u32, 0x04) = t;
                        t = c1 | code | (c1 << 8) | (c1 << 16);
                        AF(pkt, u32, 0x10) = t;
                        t = c2 | code | (c2 << 8) | (c1 << 16);
                        AF(pkt, u32, 0x1C) = t;
                        t = c3 | code | (c3 << 8) | (c1 << 16);
                        AF(pkt, u32, 0x28) = t;
                        AF(pkt, u32, 0x0C) = tex[1];
                        AF(pkt, u32, 0x18) = tex[2];
                        q0 = tex[3];
                        AF(pkt, u16, 0x24) = q0;
                        AF(pkt, u16, 0x30) = q0 >> 16;
                        {
                            u32 *o;
                            o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                            *(u32 *)pkt = (*o & 0xFFFFFF) | (12 << 24);
                            *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                        }
                        pkt += 0x34;
                    } else {
                        AF(pkt, s32, 0x08) = sxy[0];
                        AF(pkt, s32, 0x10) = sxy[1];
                        AF(pkt, s32, 0x18) = sxy[2];
                        tex = (u32 *)face[0];
                        code = tex[0] & 0xFF000000;
                        AF(pkt, u32, 0x04) = code | 0x101010;
                        AF(pkt, u32, 0x0C) = tex[1];
                        AF(pkt, u32, 0x14) = tex[2];
                        q0 = tex[3];
                        AF(pkt, u16, 0x1C) = q0;
                        AF(pkt, u16, 0x24) = q0 >> 16;
                        {
                            u32 *o;
                            o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                            *(u32 *)pkt = (*o & 0xFFFFFF) | (9 << 24);
                            *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                        }
                        pkt += 0x28;
                    }
                    break;
                }
            }
        }
    }
    g_PrimNext = pkt;
}

void func_sc03_116_80180980(void) {
    D_8012704C = 1;
}

void func_sc03_116_80180994(u8 *arg0) {
    D_sc03_116_801862EC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_116_801809D0(u8 *arg0) {
    func_sc03_116_80180C1C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_116_80180A14(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_116_80180A38(u8 *arg0) {
    D_sc03_116_801862F4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_116_80180A74(u8 *arg0) {
    func_sc03_116_80180C44();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_116_80180AB4(u8 *arg0) {
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

void func_sc03_116_80180B30(void) {
    func_800D1EBC();
}

void func_sc03_116_80180B50(u8 *arg0) {
    D_sc03_116_80186300[AF(arg0, u8, 0x15)]();
}

s32 RoomExitStep(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = GetProgress();
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        if (temp_a0 < 0x258) {
            func_800D0C48(1);
        }
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_116_80180C1C(void) {
    StartPlayerActionScript((s32) &D_sc03_116_8018630C, 0x01000000);
}

void func_sc03_116_80180C44(void) {
    StartPlayerActionScript((s32) &D_sc03_116_80186310, 0x01000000);
}

void func_sc03_116_80180C6C(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_116_80180D04, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_116_80180D04((s32) &g_Camera);
}

void func_sc03_116_80180D04(s32 arg0) {
    D_sc03_116_80186314[AF(arg0, u8, 4)]();
}

void func_sc03_116_80180D40(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_116_80186318)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc03_116_80180DE0((s32) arg0, (s32) &v);
}

void func_sc03_116_80180DE0(u8 *arg0, u8 *arg1) {
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

void func_sc03_116_80180F78(void) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x334);
    if (temp_v0 != 0) {
        PlaySoundId(0xA27, 0);
        NextState(temp_v0);
    }
}

void func_sc03_116_80180FBC(StageActor *arg0) {
    D_sc03_116_80186324[arg0->state]();
}

void func_sc03_116_80180FF8(StageActor *arg0, s32 arg1) {
    arg0->unkFC = 0;
    D_sc03_116_80186320 = 1;
    NextState((s32) arg0, arg1);
}

void func_sc03_116_80181028(void) {
}

void func_sc03_116_80181030(StageActor *o) {
    s16 r[2];

    o->unkFC += 1;
    r[0] = 0;
    r[1] = o->unkFC;
    func_sc03_116_801812AC((s32) o, r, D_sc03_116_8018631C, 1, 0x4020F0);
    if (o->unkFC >= 0x20) {
        o->workFE = 1;
        o->work100 = 0;
        PlaySoundId(4, 0xA27);
        PlaySoundId(0xA28, 0);
        NextState(o);
    }
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc03_116_801810C8(u8 *o) {
    s16 r[2];
    u8 unused[8];
    s16 *p;
    s32 a;
    s32 b;

    p = &D_sc03_116_8018631C[2];
    a = AF(o, u16, 0x100) + 0x40;
    b = AF(o, u16, 0xFE) + a;
    AF(o, s16, 0x100) = a;
    AF(o, s16, 0xFE) = b;
    *p += b;
    if (*p > 0x2000) {
        *p = 0x2000;
        SetMoverTimer(o, 0xA);
        NextState(o);
    }
    r[0] = 0;
    r[1] = 0x20;
    func_sc03_116_801812AC((s32) o, r, p - 2, 0, 0x4020F0);
}

void func_sc03_116_8018117C(u8 *o) {
    s16 r[2];
    s32 col;

    if (TickTimer(o) != 0) {
        AF(o, s16, 0x100) = 0xF0;
        NextState(o);
    }
    col = 0x4020F0;
    if (D_800B99DA & 1) {
        col = 0x4020FF;
    }
    r[0] = 0;
    r[1] = 0x20;
    func_sc03_116_801812AC((s32) o, r, D_sc03_116_8018631C, 0, col);
}

/* PORT NOTE: reads a variable never set, as the original (undefined under cl) */
void func_sc03_116_80181204(StageActor *o) {
    s16 r[2];
    CV4 c;
    u8 v;

    v = o->work100 -= 8;
    c.r = v;
    if (v != 0) {
        if (v < 0x20) {
            c.g = v;
        } else {
            c.g = 0x20;
        }
        if (c.r < 0x40) {
            c.b = c.r;
        } else {
            c.b = 0x40;
        }
        r[0] = 0;
        r[1] = 0x20;
        func_sc03_116_801812AC((s32) o, r, D_sc03_116_8018631C, 0, *(s32 *) &c);
    } else {
        DespawnActor();
    }
}

void func_sc03_116_801812AC(s32 a0, s16 *r, void *rot, s32 flag, s32 col) {
    WMtx m;
    QuadArg q;
    u8 unused[0x10];
    QuadArg *p;
    s16 *a;
    s16 *b;
    s32 i;
    p = &q;
    a = D_sc03_116_80194EEC[r[0]];
    b = D_sc03_116_80194FC0[r[0]];
    if (flag != 0) {
        SetScaleMatrix(&D_sc03_116_8018633C, &m);
    } else {
        SetScaleMatrix(rot, &m);
    }
    m.t[1] = -0x100;
    m.t[2] = 0x1EC0;
    m.t[0] = 0;
    p->code = 0x50000000;
    *(s32 *)&p->c[1] = col;
    *(s32 *)&p->c[0] = col;
    *(s32 *)&p->c[3] = 0;
    *(s32 *)&p->c[2] = 0;
    for (i = r[0]; i < r[1]; i++) {
        p->p[0].x = a[0];
        p->p[0].y = a[1];
        p->p[0].z = a[2];
        p->p[1].x = a[3];
        p->p[1].y = a[4];
        p->p[1].z = a[5];
        if (flag == 0) {
            p->p[2].x = b[0];
            p->p[2].y = b[1];
            p->p[2].z = b[2];
            p->p[3].x = b[3];
            p->p[3].y = b[4];
            p->p[3].z = b[5];
        } else {
            p->p[2] = p->p[0];
            p->p[3] = p->p[1];
            p->p[2].z -= 8;
            p->p[3].z -= 8;
        }
        DrawPrimG4Mtx(p, &m);
        a += 3;
        b += 3;
    }
}

void func_sc03_116_801814B0(StageActor *arg0) {
    D_sc03_116_80186344[arg0->state]();
}

void func_sc03_116_801814EC(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorSprite();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitNullSprite(temp_v0);
        arg0->pos[1].h.i = -0x100;
        arg0->pos[0].h.i = 0;
        arg0->pos[2].h.i = 0x1EC0;
        NextState((s32) arg0);
        return;
    }
    DespawnActor((s32) arg0);
}

void func_sc03_116_80181550(StageActor *arg0) {
    if (arg0->param != 0) {
        SetState((s32) arg0, 6);
    }
}

void func_sc03_116_80181580(StageActor *arg0) {
    ModelObj *temp_s2;
    void *temp_s0;

    temp_s2 = arg0->model;
    temp_s0 = (arg0->param << 6) + &D_sc03_116_80197B60;
    func_8001CD50(temp_s2, (s32) temp_s0);
    SetShapeCircle((s32) temp_s0, 0x80);
    func_sc03_116_80181844((s32) arg0, (s32) temp_s0);
    temp_s2->flags = 0xC040;
    temp_s2->unk04 = (s32) ((s32)temp_s2->unk04 | 0x50000000);
    func_sc03_116_801818B8((s32) arg0);
    NextState((s32) arg0);
}

void func_sc03_116_80181618(u8 *arg0) {
    func_sc03_116_80181864((s32) arg0, (s32) ((AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60));
    if (func_sc03_116_801818DC((s32) arg0) != 0) {
        SetMoverTimer((s32) arg0, 0x1E);
        NextState((s32) arg0);
    }
}

void func_sc03_116_80181674(u8 *arg0, s32 arg1) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60;
    if (TickTimer((s32) arg0, arg1) != 0) {
        NextState((s32) arg0);
        return;
    }
    func_sc03_116_80181864((s32) arg0, (s32) temp_s1);
}

void func_sc03_116_801816D8(StageActor *arg0) {
    u8 *temp_a1;
    u8 temp_v1;

    temp_a1 = (arg0->param << 6) + &D_sc03_116_80197B60;
    temp_v1 = *temp_a1;
    if (temp_v1 < 5U) {
        DespawnActor((s32) arg0);
        return;
    }
    *temp_a1 = temp_v1 - 4;
}

void func_sc03_116_8018172C(StageActor *arg0) {
    ModelObj *temp_s2;
    void *temp_s0;

    temp_s2 = arg0->model;
    temp_s0 = (arg0->param << 6) + &D_sc03_116_80197B60;
    arg0->pos[2].h.i = (u16) ((u16)arg0->pos[2].h.i + 0x40);
    func_8001CD50(temp_s2, (s32) temp_s0);
    SetShapeCircle((s32) temp_s0, 0x80);
    func_sc03_116_80181844((s32) arg0, (s32) temp_s0);
    AF(temp_s0, s32, 0) = 0xF0;
    AF(temp_s0, s32, 4) = 0;
    temp_s2->flags = 0x8040;
    temp_s2->unk04 = (s32) ((s32)temp_s2->unk04 | 0x50000000);
    arg0->unkFC = 0;
    NextState((s32) arg0);
}

void func_sc03_116_801817D8(StageActor *o) {
    u8 *p;
    s16 a;

    p = &D_sc03_116_80197B60 + o->param * 64;
    a = o->unkFC + 0x5B;
    o->unkFC = a;
    AF(p, s32, 0) = rsin(a) * 63 / 4096 + 0xC0;
}

void func_sc03_116_80181844(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_sc03_116_80181864(arg0, arg1);
}

void func_sc03_116_80181864(u8 *o, s32 *out) {
    s32 v;

    v = AF(o, s16, 0xFC);
    if (D_800B99DA & 1) {
        v -= 4;
    }
    if (v < 0) {
        v = 0;
    } else if (v >= 0x100) {
        v = 0xFF;
    }
    out[0] = v;
    out[1] = 0;
    AF(o, s16, 0xFC) += 4;
}

s32 func_sc03_116_801818B8(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    return func_sc03_116_801818DC(arg0, arg1);
}

s32 func_sc03_116_801818DC(s32 arg0, s32 arg1) {
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0xFE);
    AF(temp_a1, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 < 0x4000) {
        AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) + 0x80);
    } else {
        AF(temp_a1, u16, 0x18) = 0x4000U;
    }
    temp_v1 = (s16) AF(temp_a1, u16, 0x18);
    if (AF(temp_a1, s16, 0x1A) < temp_v1) {
        AF(temp_a1, s16, 0x1A) = temp_v1;
    }
    return (s16) AF(temp_a1, u16, 0x18) == 0x4000;
}

void func_sc03_116_80181954() {
    s32 i;
    u8 *p;

    for (i = 0; i < 0x60; i++) {
        p = (u8 *) &g_Actors + i * 0x10C;
        if (AF(p, u16, 0) == 0x33A && AF(p, s16, 0x70) == 0) {
            AF(p, s16, 2) = 2;
        }
    }
}

s32 func_sc03_116_801819A4()
{
    s32 i;
    u8 *p;

    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&g_Actors + i * 0x10C;
        if (AF(p, s32, 0) == 0x5033A && AF(p, s16, 0x70) == 0) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_116_801819F4(StageActor *arg0) {
    D_sc03_116_801864BC[arg0->state]();
    if (arg0->kind != 0) {
        SwellingLoopSound((s32) arg0);
        SwellingTakeHit((s32) arg0);
    }
}

void SwellingInit(StageActor *o) {
    ModelObj *t;

    if ((u8) GetFlag(0x11C) != 0 || (t = (u8 *) AllocActorModel()) == 0) {
        RejectSpawn(o);
        return;
    }
    o->model = t;
    func_8001CA1C(t, &D_sc03_116_80186364);
    t->scale.vx = t->scale.vy = t->scale.vz = 0x4000;
    t->unk04 |= 0x50000000;
    t->flags |= 0x10;
    o->hitData = (s32) &D_sc03_116_801864AC | 0x40000000 | 0x20000000;
    o->hitState = 0x8000;
    o->state += 1;
    SetScript(o, &D_sc03_116_80186424);
    AF(o, s16, 0xAE) = -9;
}

void func_sc03_116_80181B44(StageActor *arg0) {
    if (HitBoxEdgesHitPlayer(arg0, 7) == 1) {
        ((u16 *) &g_PlayerHitKind)[0] |= 0x4200;
    }
}

void SwellingVanish(StageActor *o) {
    SV8 v;

    o->model->scale.vx -= 0x80;
    o->model->scale.vy -= 0x80;
    o->model->scale.vz -= 0x80;
    if (o->model->scale.vx <= 0) {
        v.x = o->pos[0].h.i;
        v.y = o->pos[1].h.i;
        v.z = o->pos[2].h.i;
        v.y -= 0x10;
        SpawnKind1CAt(&v);
        func_sc03_116_8018232C(o->param);
        FreeActor(o);
    }
}

s32 SwellingTakeHit(u8 *o) {
    u8 unused[8];
    u8 *q;
    if (AF(o, u16, 2) == 2) {
        return 0;
    }
    if (AF(o, s32, 0xE0) != 0) {
        AF(o, u16, 0x5C) &= 0xFFFE;
        AF(o, s16, 0x5E) = 0;
        AF(o, s32, 0xE0)--;
        AF(AF(o, u8 *, 0x20), u16, 0x18) -= 0x80;
        AF(AF(o, u8 *, 0x20), u16, 0x1A) -= 0x80;
        AF(AF(o, u8 *, 0x20), u16, 0x1C) -= 0x80;
        if (AF(AF(o, u8 *, 0x20), s16, 0x18) < 0x2001) {
            PlaySoundId(0xA25, 0);
            if (AF(o, s16, 0xFE) != 0) {
                PlaySoundId(4, 0xA2C);
                AF(o, s16, 0xFE) = -1;
            }
            AF(o, u16, 2)++;
        }
        return 0;
    }
    if (!(AF(o, u16, 0x5C) & 1)) {
        return 0;
    }
    AF(o, u16, 0x5C) &= 0xFFFE;
    if (AF(o, u16, 0x5E) == 0x22) {
        AF(o, s16, 0x5E) = 0;
        return 0;
    }
    AF(o, s32, 0xE0) = 8;
    AF(o, s16, 0x5E) = 0;
    PlaySoundId(0xA26, 0);
    q = (u8 *)SpawnPropFrom(o, 0x22);
    if (q != 0) {
        AF(q, u16, 0x34) = AF(AF(o, u8 *, 0x20), u16, 0x18) | 2;
        AF(q, s32, 0x14) = -0x80000 - ((rand() % 3) << 16);
        AF(q, u16, 6) = AF(o, u16, 0x7C);
        AF(q, u16, 0xA) = AF(o, u16, 0x7E);
        AF(q, u16, 0xE) = AF(o, u16, 0x80);
    }
    return 1;
}

s32 SwellingLoopSound(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 vol;
    s32 dist;
    Player *p;
    vol = 0x7F;
    if (AF(o, s16, 0xFE) == -1) {
        return 0;
    }
    p = &g_Player;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    ProjectPoint(&a, &b);
    b.z = 0;
    c.x = p->pos[0].h.i;
    c.y = p->pos[1].h.i;
    c.z = p->pos[2].h.i;
    ProjectPoint(&c, &d);
    d.z = 0;
    dist = SVecDistSq(&b, &d) - 0x400;
    if (dist > 0) {
        if (dist < 0x6E40) {
            vol -= dist * 111 / 0x6E40;
            AF(o, s16, 0xFE) = 1;
        } else {
            if (AF(o, s16, 0xFE) != 0) {
                PlaySoundId(4, 0xA2C);
                AF(o, s16, 0xFE) = 0;
            }
            return 0;
        }
        PlaySoundId(0xA2C, (u16)(vol | 0x1000));
    }
    return 1;
}

void func_sc03_116_80181F6C(StageActor *arg0) {
    D_sc03_116_80186578[arg0->state]();
}

void BarrierInit(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    if ((GetFlag(0x11C) & 0xFF) || (temp_v0 = AllocActorModel(), arg0->model = temp_v0, (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_116_80194EE0);
    temp_v1 = arg0->model;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8000);
    arg0->hitData = (s32) ((s32) &D_sc03_116_801864E0 | 0x40000000);
    AF(arg0, u16, 0x5C) = 0xC800;
    D_sc03_116_801864C8[0] = 0;
    D_sc03_116_801864D4 = 0;
    AF(AF(arg0, s32, 0x20), s16 *, 0x20) = D_sc03_116_801864C8;
    temp_v1_2 = arg0->model;
    AF(arg0, s16, 0xE4) = 0x80;
    AF(arg0, s16, 0xE2) = 0x80;
    AF(arg0, s16, 0xE0) = 0x80;
    AF(arg0, s16, 0xE6) = -2;
    temp_v1_2->flags = (u16) (temp_v1_2->flags | 0x80);
    arg0->model->unk80 = (void *) ((u8 *)arg0 + 0xE0);
    arg0->state = (u16) (arg0->state + 1);
}

void BarrierWaitCleared(u8 *arg0) {
    void *temp_v1;

    if ((AF(arg0, s16, 0xFE) == 0) && (FindActorByKindArg(0x1C0, 2) == 0)) {
        AF(arg0, s16, 0xFE) = 1;
        temp_v1 = AF(AF(arg0, void *, 0x20), void *, 0x80);
        AF(temp_v1, s16, 4) = -0x20;
        AF(temp_v1, s16, 2) = -0x20;
        AF(temp_v1, s16, 0) = -0x20;
    }
    if (FindActorByKind(0x1C0) == 0) {
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StartEvent((s32) arg0, (s32) &D_sc03_116_80186500);
    }
}

void BarrierEventCues(u8 *o) {
    u8 *a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        func_sc03_116_80180F78();
        AF(o, s16, 0x34) = 0;
        break;
    case 2:
        a = AF(AF(o, u8 *, 0x20), u8 *, 0x20);
        AF(a, s16, 0) -= 2;
        AF(a, s16, 0xC) += 2;
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 0;
            PlaySoundId(0xA2A, 0);
        }
        break;
    case 3:
        func_sc03_116_8018234C();
        SetFlag(0x11C, 1);
        AF(o, s16, 0x5C) = 0;
        AF(o, s16, 0x34) = 0;
        HideModel(o);
        break;
    }
    if (IsEventDone(o) == 1) {
        EndEvent(o);
        AF(o, s16, 2) += 1;
    }
}

void func_sc03_116_80182238(void) {
}

void func_sc03_116_80182240(s32 arg0) {
    func_sc03_116_80181954(arg0);
}

void func_sc03_116_80182260(s32 arg0) {
    func_sc03_116_801819A4(arg0);
}

s32 func_sc03_116_80182280(void) {
    if (D_8012704C == 0) {
        return 0x48;
    }
    return 0x4B;
}

void RoomSetSeqPoints(void) {
    if (D_sc03_116_80197CC4 == 0) {
        func_8013B6A0(0, (s32) &D_sc03_116_80186588, 0x2E0);
        func_8013B6A0(1, (s32) (&D_sc03_116_80186588 + 8), 0x2E0);
        func_8013B6A0(2, (s32) (&D_sc03_116_80186588 + 0x10), 0x2E0);
        func_8013B6A0(3, (s32) (&D_sc03_116_80186588 + 0x18), 0x2E0);
        D_sc03_116_80197CC4 += 1;
    }
}

s32 func_sc03_116_8018232C(s32 arg0) {
    return func_8013B7AC();
}

void func_sc03_116_8018234C(void) {
    func_8013B6A0(0, (s32) &D_sc03_116_801865A8, 0x3C0);
}

void func_sc03_116_80182378(StageActor *arg0) {
    D_sc03_116_80195174[arg0->state]();
}

void func_sc03_116_801823B4(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc03_116_80195094, D_sc03_116_80195096, D_sc03_116_80195098);
        p = &D_sc03_116_8019509C;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc03_116_801950CC, D_sc03_116_801950CE, D_sc03_116_801950D0);
        p = &D_sc03_116_801950D4;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc03_116_80195104, D_sc03_116_80195106, D_sc03_116_80195108);
        p = &D_sc03_116_8019510C;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc03_116_80195094, D_sc03_116_80195096, D_sc03_116_80195098);
        p = &D_sc03_116_8019509C;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc03_116_8019513C, D_sc03_116_8019513E, D_sc03_116_80195140);
        p = &D_sc03_116_80195144;
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

void func_sc03_116_801825A8(StageActor *arg0) {
    g_Lights.c = D_sc03_116_801950BC;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_116_80182658(StageActor *arg0) {
    g_Lights.c = D_sc03_116_801950F4;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_116_80182708(StageActor *arg0) {
    g_Lights.a = D_sc03_116_8019510C.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_116_801827B8(void) {
}

void func_sc03_116_801827C0(StageActor *arg0) {
    g_Lights.a = D_sc03_116_80195144.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}
