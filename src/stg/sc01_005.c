#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_005_80185E08[])();
void func_sc01_005_8017BEC4(u8 *arg0);
extern void (*D_sc01_005_80185E18[])();
void func_sc01_005_8017C078(u8 *arg0);
extern void (*D_sc01_005_80185E20[])();
void func_sc01_005_8017C150(u8 *arg0);
extern void (*D_sc01_005_80185E2C[])();
void func_sc01_005_8017C268(u8 *arg0);
extern void (*D_sc01_005_80185EAC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_005_8017D5D4(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc01_005_80185EB4[])();
void func_sc01_005_8017D5FC(void);
extern void func_800D1EBC();
extern void (*D_sc01_005_80185EC0[])();
extern void (*D_sc01_005_80185ECC[])();
extern u8 D_sc01_005_80185ED8;
extern void StartPlayerActionScript();
extern u8 D_sc01_005_80185EE4;
extern void func_sc01_005_8017D7A4();
extern void (*D_sc01_005_80185EF8[])();
extern s16 D_sc01_005_801CD870;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_005_801BBA40[])();
extern void TickPlayTime();
extern void func_801754A8();
extern void StageModeNop();
extern void (*D_sc01_005_801BC7A4[])();
extern void (*D_sc01_005_801BC7B4[])();
extern void (*D_sc01_005_801C3A5C[])();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc01_005_8017BE9C();
extern s32 func_sc01_005_8017C050();
extern s32 func_sc01_005_8017C128();
extern s32 func_sc01_005_8017C240();

s32 func_sc01_005_8017BE9C()
{
    return SetActionHandler((s32) func_sc01_005_8017BEC4);
}

void func_sc01_005_8017BEC4(u8 *arg0) {
    D_sc01_005_80185E08[AF(arg0, u8, 0x214)]();
}

extern void SetPlayerMotionIndex();
extern void func_sc01_005_8017BF70();
extern void PlaySe();
extern void SetPlayerMotion();
extern u8 D_sc01_005_80185D9C;
extern s32 func_sc01_005_8017C1E8();

void func_sc01_005_8017BF00(Player *arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    SetPlayerMotionIndex(arg0, 0x26);
    StartFace(arg0, 0x1E);
    arg0->model->rot.vx = 0xFE9;
    arg0->action208 = 0;
    NextPhase(arg0);
    func_sc01_005_8017BF70(arg0);
}

void func_sc01_005_8017BF70(Player *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v1;

    temp_a0 = arg0->model;
    arg0->action208 = (s32) (arg0->action208 + 0x1C000);
    temp_a0->rot.vx = (u16) (((u16)temp_a0->rot.vx - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v1 = arg0->model;
    if ((s16) (u16)temp_v1->rot.vx < 0xC00) {
        temp_v1->rot.vx = 0xC00U;
        arg0->animStatus = 1;
        NextPhase(arg0, arg0);
    }
}

void func_sc01_005_8017BFEC(Player *arg0) {
    if (arg0->animStatus & 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x27);
        StartFace((s32) arg0, 0x1F);
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_sc01_005_8017C048(void) {
}

s32 func_sc01_005_8017C050()
{
    return SetActionHandler((s32) func_sc01_005_8017C078);
}

void func_sc01_005_8017C078(u8 *arg0) {
    D_sc01_005_80185E18[AF(arg0, u8, 0x214)]();
}

void func_sc01_005_8017C0B4(Player *arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    arg0->model->rot.vx = 0xC00;
    SetPlayerMotionIndex(arg0, 0x27);
    StartFace(arg0, 0x1F);
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_sc01_005_8017C120(void) {
}

s32 func_sc01_005_8017C128()
{
    return SetActionHandler((s32) func_sc01_005_8017C150);
}

void func_sc01_005_8017C150(u8 *arg0) {
    D_sc01_005_80185E20[AF(arg0, u8, 0x214)]();
}

void func_sc01_005_8017C18C(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc01_005_80185D9C);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    PlaySe(0xA05);
    NextPhase(arg0);
    func_sc01_005_8017C1E8(arg0);
}

s32 func_sc01_005_8017C1E8(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene();
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc01_005_8017C238(void) {
}

s32 func_sc01_005_8017C240()
{
    return SetActionHandler((s32) func_sc01_005_8017C268);
}

void func_sc01_005_8017C268(u8 *arg0) {
    D_sc01_005_80185E2C[AF(arg0, u8, 0x214)]();
}

extern s32 GetProgress();
extern void SetBp();
extern void FillHp();
extern void SetFlag12F();
extern u8 g_Camera;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void SetCameraUpdate();
extern void SnapCamera();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_005_801CD878;
extern s32 D_sc01_005_801CD9A8;
extern s32 D_sc01_005_801CD9B0;
extern void func_800D24A0();
extern void func_sc01_005_8017DC48();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern u8 D_sc01_005_801BBE98;
extern void func_sc01_005_8017FD50();
extern s32 GetPlayerAction();
extern void SetProgress();
extern void SetFlag();
extern void StartEvent();
extern u8 D_sc01_005_80185E5C;
extern void func_800D1724();
extern u8 D_sc01_005_801BC348;
extern u8 D_sc01_005_80185E38;
extern void func_sc01_005_8017DAAC();
s16 func_sc01_005_8017DA9C(void);
extern u8 D_sc01_005_801BBC4C;
extern void RestRestoreFade();
extern s32 UpdateScript();
extern void EndEvent();
extern void TakePlayerControl();
extern s32 D_sc01_005_801CDED4;
extern u8 D_sc01_005_801BC4A0;
extern u8 D_sc01_005_801C6B18;
extern s32 AllocActorModel();
extern void InitModel();
extern void func_80143994();
extern u8 D_sc01_005_801BC6C8;
extern u8 D_sc01_005_801BC508;
extern s32 func_sc01_005_80180BDC();
extern s32 D_sc01_005_801BC78C[];
extern u8 D_sc01_005_801BC578;
extern u8 D_sc01_005_801C97C0;
extern u8 D_sc01_005_801BC718;
extern u8 D_sc01_005_801BC5E0;
extern s32 D_sc01_005_801BC798[];
extern u8 D_sc01_005_801BC764;
extern u8 D_sc01_005_801BC5F8;
extern u8 D_sc01_005_801BC680;
extern u8 D_sc01_005_801BC778;
extern void CloseMessage();
extern void FreeActor();
extern s16 D_80126B30;
extern u8 D_sc01_005_801CA6EC;
extern void StartPlayerMotionAction();


extern void func_sc01_005_8017D808();

extern void func_sc01_005_80181B00();
extern void func_sc01_005_801820F8();

extern void *g_PlayerModel;

void func_sc01_005_8017C338();

void func_sc01_005_8017C2A4(Player *arg0) {
    EndScene();
    SetPlayerMotionIndex(arg0, 0x24);
    StartFace(arg0, 0x1D);
    NextPhase(arg0);
    func_sc01_005_8017C338(arg0);
}

void func_sc01_005_8017C2F4(Player *arg0) {
    if (arg0->animStatus == 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x25);
        NextPhase((s32) arg0);
    }
}

void func_sc01_005_8017C338(void) {
}

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { u16 a; u16 b; u8 pad[28]; } R8017D4A4;
typedef struct {
    s16 f0; u8 p2[0xC]; s16 fE; u8 p10[0xC];
    u8 p1C[0x24]; s16 f40[3];
} W80115118;
typedef struct { s16 v; } S16R;
typedef struct { u8 v; } U8R;
extern W80115118 D_80115118;
extern R8017D4A4 *D_80115134;
extern u8 D_80115138[];
extern U8R D_80115140[];
extern S16R D_80115148[];
extern R8017D4A4 *D_sc01_005_801BB8B0[];
extern u8 *D_sc01_005_801BB904[];
extern u8 D_sc01_005_801BB8FC[];
extern u8 D_sc01_005_801CD9B4[];
extern s16 D_sc01_005_801CD874;
extern u16 D_sc01_005_801CD87C;
extern u16 D_sc01_005_801CD880;
extern s32 GetVar();
extern void func_sc01_005_8017DEFC();

void func_sc01_005_8017C340(u8 *obj) {
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

void func_sc01_005_8017D220(s32 arg0) {
    if (GetProgress(arg0) < 0xA) {
        SetBp((s32) &g_Player, 0x64);
        FillHp();
        SetFlag12F();
    }
}

void func_sc01_005_8017D26C(u8 *arg0) {
    D_sc01_005_80185EAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_005_8017D2A8(u8 *arg0) {
    func_sc01_005_8017D5D4();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_005_8017D2EC(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc01_005_8017D310(u8 *arg0) {
    D_sc01_005_80185EB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_005_8017D34C(u8 *arg0) {
    func_sc01_005_8017D5FC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_005_8017D38C(u8 *arg0) {
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

void func_sc01_005_8017D408(void) {
    func_800D1EBC();
}

void func_sc01_005_8017D428(u8 *arg0) {
    D_sc01_005_80185EC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_005_8017D464(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_005_8017D480(u8 *arg0) {
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

void func_sc01_005_8017D4FC(void) {
    func_800D1EBC();
}

void func_sc01_005_8017D51C(u8 *arg0) {
    D_sc01_005_80185ECC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_005_8017D558(u8 *arg0) {
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

s32 func_sc01_005_8017D5CC(void) {
    return 1;
}

void func_sc01_005_8017D5D4(void) {
    StartPlayerActionScript((s32) &D_sc01_005_80185ED8, 0x01000000);
}

void func_sc01_005_8017D5FC(void) {
    StartPlayerActionScript((s32) &D_sc01_005_80185EE4, 0x01000000);
}

void func_sc01_005_8017D624(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x2BC;
    g_CameraAngleTarget = 0;
    D_8012696A = 0x850;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x82;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc01_005_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_005_8017D7A4((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
}

void func_sc01_005_8017D6E4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x190;
    D_8012696A = 0x850;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x82;
    D_8012697A = -0x180;
    SetCameraUpdate((s32) func_sc01_005_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_005_8017D7A4((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
}

void func_sc01_005_8017D7A4(s32 arg0) {
    D_sc01_005_80185EF8[AF(arg0, u8, 4)]();
}

void func_sc01_005_8017D7E0(s32 arg0) {
    func_sc01_005_8017D808(arg0, (s32) &D_801274E8);
}

extern s8 D_800B9A15;
extern s32 D_801151D0;
extern s32 D_sc01_005_801CD9AC;
extern s32 D_801151C8[];
extern s32 func_8014168C();
extern void CloseMessage0();
extern void func_sc01_005_8017E6BC();
extern void UpdateMessage0();
extern s16 D_80115126;
extern u8 D_sc01_005_801BBA3C;
extern s32 func_sc01_005_8017E3DC();
extern s32 func_sc01_005_8017ED5C();
extern s32 OpenMessageAt();
extern s32 GetMessageAnswer();
extern s32 GetPadPressedDirWide();
extern s32 func_sc01_005_8017F2D4();

typedef struct { s8 lo; u8 hi; } S8PE804;
extern S8PE804 D_80115158[];
extern u8 D_80115141;
extern u8 D_80115142;
extern u8 D_sc01_005_80183478[];
extern s32 D_8010F3C4[];
extern u8 *D_sc01_005_801CD9A4;

extern u8 D_800B9ABF;
extern u8 D_800B9AC0;
extern u8 D_800B9AC1;
extern u8 D_800B9B10;
extern u8 D_800B9B11;
extern u8 D_800B9B12;
extern u8 D_800B9B13;
extern u8 D_800B9B14;
extern u8 D_800B9B15;
extern u8 D_sc01_005_801B91B4;
extern u8 D_sc01_005_801B9C74;
extern u8 D_sc01_005_801C3708;
extern u8 D_sc01_005_801C39E0;
extern u8 D_sc01_005_801C3A30;
extern u8 D_sc01_005_801CD9C0;
extern u8 D_sc01_005_801CDA10;
extern u16 D_sc01_005_801C3930[];
extern s32 D_sc01_005_801C3728[];
extern s32 D_sc01_005_801C339C[];
extern u8 D_sc01_005_801C3A04[];
extern void func_sc01_005_8018203C();
extern s32 AllocSpriteInRange();
extern void InitSpriteKind0();
extern void func_8001C810();
extern void SetModelParent();
extern void QueueImage();
extern s16 D_sc01_005_801C3880[];
extern s16 D_sc01_005_801C38D8[];
extern s32 GetPadPressedDir();
extern s32 GetPadHeldDir();
extern void SyncModelPos();

typedef struct { u32 *ot; u8 pad4[8]; u32 *otLast; u8 pad10[4]; } OtE804;
typedef struct { u16 v; } U16RE804;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } SprtE804;
extern u16 D_sc01_005_801BB61E;
extern u16 D_sc01_005_801BB632;
extern OtE804 g_FrontOtOrg[];

extern s16 D_8011515A;
extern u16 D_8011514A;
extern u16 D_8011514C;
extern u8 D_sc01_005_801C3A8C[];
extern u8 D_sc01_005_801C3AB4[];
extern u8 D_sc01_005_801C3AF0[];
extern u8 D_sc01_005_801C3B80[];
extern u8 D_sc01_005_801C3BA8[];
extern u8 D_sc01_005_801C3C00[];
extern u8 D_sc01_005_801C3C70[];
extern u8 D_sc01_005_801C3C94[];
extern u8 D_sc01_005_801C3CD4[];
extern u8 D_sc01_005_801C3D20[];
extern u8 D_sc01_005_801C3DCC[];

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern void RotMatrixZYX();

void func_sc01_005_8017D808(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;

    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 0xA);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 0xA);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 0xA);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 0xA);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 0xA);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0xA);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0xA);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0xA);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

extern s32 D_sc01_005_801C37D4[];
extern s32 OpenMessage();
extern s32 D_sc01_005_801C36F8[];
extern S12 D_sc01_005_801CDD30[];
extern SV8 D_sc01_005_801CDE20[];
extern void AddHp();
extern void AddWakeGauge();
extern void AdvanceClockHours();
extern void UpdateClockPhase();
extern void AddBp();
extern s32 GetDeadline8Passed();
extern void ExpireDeadline8();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern Blk30 g_Lights;
extern V16 D_sc01_005_801CE030;
extern V16 D_sc01_005_801CE040;
extern V16 D_sc01_005_801CE050;
extern s32 func_sc01_005_8017D9A0();
extern void StopSeqPlayer();
extern void ApplyLight();
extern s32 RequestBgmPack();
extern void func_8001B710();
extern u8 *AllocPrim();

extern void SetVar();
extern s32 SetScript();
extern u16 D_sc01_005_801C3988[];
extern void DrawFadeWhite();
extern s32 func_800CF8B4();
extern u8 D_sc01_005_80185E80;
extern s32 GetFlag();
extern void EndPlayerMotionAction();
extern void FacePoint();
extern void func_80172B14();
extern void StartPlayerMotionAction599C();

extern u8 D_sc01_005_801BBA7F[];
extern s32 func_sc01_005_8017D9F4();
extern void StartSeqPlayer();
extern s32 SpawnActorFromDef();
extern void MoveLightDir();
extern void SetLightColor();

typedef struct { s16 a, b; } S16x2;
typedef struct { char *name; s32 x; } NameEnt;
extern u8 D_80115139;
extern u16 D_8011515C;
extern char *D_sc01_005_801BB750[];
extern s32 D_sc01_005_801BB82C;
extern char D_sc01_005_801CC494[];
extern char D_sc01_005_801CD884[][0x24];
extern u16 D_sc01_005_801BB730[];
extern NameEnt D_8010F468[];
extern s32 D_sc01_005_801BB73C[];
extern u8 D_801117EC;
extern u8 D_80112B58;
extern u8 D_80112B90;
extern u8 D_80112BA8;
extern u8 D_sc01_005_801BB920[];
extern S16x2 D_sc01_005_801BB948[];
extern s32 D_sc01_005_801BB968[];
extern u8 *D_sc01_005_801BB984[];
extern u8 D_sc01_005_801C3A74;
extern u8 D_sc01_005_801C3B38;
extern u8 D_sc01_005_801C3B54;
extern u8 D_sc01_005_801C3BC4;
extern u8 D_sc01_005_801C3C50;
extern u8 D_sc01_005_801C3D48;
extern u8 D_sc01_005_801C3D80;
extern u8 D_sc01_005_801C3DA8;
extern s32 func_sc01_005_8017F730();
extern void SetMessageText();

extern u16 D_80115122;
extern u16 D_80115120;
extern s32 GetPadHeldDirWide();

extern u8 D_800B9A13;
extern void *g_SubscreenHook;
extern void func_sc01_005_8017DB00();
void SubscreenFrame(void);
extern u8 D_sc01_005_8018347E;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
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
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
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
typedef union { s32 w; XY s; } UXY;
typedef struct { s32 w[4]; } W16;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef void (*StepFn)(void);
extern u8 *func_800D27DC();
extern u8 * func_sc01_005_8017E978();
extern void SjisToGlyphs();
extern u8 *func_800D2650();
extern u8 *func_800D29F8();

extern OtE804 g_FrontOt[];
extern s32 DrawMessage0();
extern s32 DrawChoiceCursor();
extern u8 D_sc01_005_801BB2DC;
extern u8 D_sc01_005_801BB2F0;
extern u8 D_sc01_005_801BBA34;


extern s32 g_SoundLoadTable;
extern u8 *D_800C7C64;
extern u8 g_SoundLoadBuf[];
extern u8 D_800AE9F0;
extern s32 RequestLoad();

s32 func_sc01_005_8017D9A0(void) {
    s32 *p = &g_SoundLoadTable;
    *p = 0x3E;
    D_800C7C64 = g_SoundLoadBuf;
    return RequestLoad(0, 0, (s32) &D_800AE9F0, 0, (s32) p);
}



extern u8 g_ArchiveFileLoc;
extern u16 D_sc01_005_80185EFC[];
extern s16 D_sc01_005_80185EFE[];
extern s32 D_sc01_005_801CAE4C;

s32 func_sc01_005_8017D9F4(s32 i) {
    s32 *p = &g_SoundLoadTable;
    s16 n;

    n = AF(D_sc01_005_80185EFC, u16, i * 4);
    *p = AF(D_sc01_005_80185EFE, s16, i * 4);
    D_800C7C64 = g_SoundLoadBuf;
    if (n <= 0) {
        return 1;
    }
    return RequestLoad(0, 0, (s32)(n * 8 + &g_ArchiveFileLoc), D_sc01_005_801CAE4C, (s32)p);
}

s32 func_sc01_005_8017DA84(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x57;
    if (arg0 >= 5) {
        var_v0 = 0x3D;
    }
    return var_v0;
}

s16 func_sc01_005_8017DA9C(void) {
    return D_sc01_005_801CD870;
}

void func_sc01_005_8017DAAC(s32 arg0, s32 arg1) {
    extern void func_sc01_005_8017DB50(void);

    D_800B9A15 = 1;
    D_800B9A13 = 4;
    g_Subscreen.unk0 = 3;
    D_80115112 = 0;
    D_80115126 = arg0;
    D_sc01_005_801CD878 = arg1;
    g_SubscreenHook = (void *)func_sc01_005_8017DB50;
}

void func_sc01_005_8017DB00(s32 arg0) {
    D_800B9A15 = 1;
    D_80115112 = 7;
    D_800B9A13 = 1;
    g_Subscreen.unk0 = 0;
    D_80115126 = arg0;
    D_sc01_005_801CD878 = 0;
    g_SubscreenHook = (void *)SubscreenFrame;
}

void func_sc01_005_8017DB50(void) {
    TickPlayTime();
    func_801754A8();
    D_sc01_005_801BBA40[D_80115112]();
    StageModeNop();
    D_80115116 += 1;
}

void func_sc01_005_8017DBC0(void) {
    func_800D24A0(4);
    func_sc01_005_8017DC48();
    if (D_sc01_005_801CD878 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_005_801CD878;
    }
    D_sc01_005_801CD9B0 = 0;
    D_sc01_005_801CD9A8 = 0;
    D_80115130 = 0;
    D_sc01_005_801CD878 = 0;
    D_80115112 += 1;
}

void func_sc01_005_8017DC48(void) {
    s16 i;
    s16 j;
    s16 count;
    s16 found;
    u8 *p;

    D_80115118.f0 = 0;
    D_sc01_005_801CD870 = 0;
    D_80115134 = D_sc01_005_801BB8B0[D_80115118.fE];
    for (i = 0; i < 3; i++) {
        D_80115138[i] = D_80115134[i].a;
        D_80115118.f40[i] = D_80115134[i].b;
        if (D_sc01_005_801CD878 == 0) {
            D_80115148[i].v = 0;
            if (D_80115118.fE == 0) {
                D_80115140[i].v = 0;
            }
        }
    }
    if (D_80115118.fE == 0 && GetProgress() >= 0x3B6U) {
        D_80115118.f40[0] = 0x106;
    }
    count = 0;
    if (D_80115118.fE == 3) {
        for (i = 0; i < 7; i++) {
            D_sc01_005_801CD9B4[i] = 0;
        }
        for (i = 0; i < 7; i++) {
            found = 0;
            p = D_sc01_005_801BB904[i];
            j = 0;
            if (D_sc01_005_801BB8FC[i] != 0) {
                do {
                    if (GetVar(*p++ + 0x62) & 0x40) {
                        found = 1;
                        break;
                    }
                    j++;
                } while (j < D_sc01_005_801BB8FC[i]);
            }
            if (found) {
                D_sc01_005_801CD9B4[count++] = i;
            }
        }
        D_80115118.f40[1] = count | 0x100;
        if (D_sc01_005_801CD878 != 0) {
            D_80115148[0].v = 1;
            D_80115148[1].v = D_sc01_005_801CD87C;
            D_80115148[2].v = D_sc01_005_801CD880;
        }
        D_sc01_005_801CD874 = 0;
    }
    func_sc01_005_8017DEFC();
}

void func_sc01_005_8017DEFC(void) {
    char *e = D_sc01_005_801CC494;
    char *b;
    s16 i;
    s16 n;
    u8 k;
    u8 c;
    u8 *names;
    char *dst;

    switch (D_80115139) {
    case 7:
        D_8011515C = AF(D_sc01_005_801BB730, u16, *(u8 *) &D_8011514A * 2);
        D_sc01_005_801BB82C = AF(D_sc01_005_801BB73C, s32, *(u8 *) &D_8011514A * 4);
        if (D_sc01_005_801CD878 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    case 9:
        b = D_sc01_005_801CD884[0];
        for (i = 0; i < 7; i++) {
            strcpy((char *) (i * 0x24 + (s32) b), e);
        }
        k = D_sc01_005_801CD9B4[*(u8 *) &D_8011514A];
        n = D_sc01_005_801BB8FC[k];
        names = D_sc01_005_801BB904[k];
        D_sc01_005_801CD9A4 = names;
        D_8011515C = n | 0x100;
        for (i = 0; i < n; i++) {
            c = names[i];
            e = D_sc01_005_801BB750[i];
            b = D_8010F468[c].name;
            if (GetVar(c + 0x62) & 0x40) {
                strcpy(e, b);
            }
        }
        if (D_sc01_005_801CD878 == 0) {
            *(u8 *) &D_8011514C = 0;
        }
        break;
    }
}

void func_sc01_005_8017E0EC(void) {
    u16 *h;

    h = &D_80115112;
    *h += 1;
}

void func_sc01_005_8017E108(void) {
    u8 unused[8];
    s32 st;
    s32 r;
    u8 c;
    s32 s;
    s32 t;
    s32 *q;
    u16 *h;
    s16 x;

    D_801151D0 = D_801151C8[D_800B9A02];
    st = func_sc01_005_8017E3DC();
    func_sc01_005_8017E6BC();
    r = func_8014168C(D_8011511A);
    c = D_80115138[(u16) D_8011511A];
    if (D_80115126 != 4) {
        if (D_sc01_005_801CD9A8 != 0) {
            s = D_sc01_005_801CD9A8;
        } else {
            s = func_sc01_005_8017ED5C(c, (s16) r);
        }
        if (s != 0) {
            q = &D_80115130;
            if (s != *q) {
                *q = s;
                CloseMessage0();
                D_sc01_005_801CD9AC = OpenMessageAt(s, &D_sc01_005_801BBA3C);
            }
        }
        UpdateMessage0();
    }
    x = st;
    if (x < 0) {
        CloseMessage0();
        D_800B9A15 = 0;
        if (x == -1) {
            PlaySoundId(0x474, 0);
        }
        h = &D_80115112;
        *h += 2;
    }
}

void func_sc01_005_8017E258(void) {
    u8 unused[8];
    u16 k;

    D_801151D0 = D_801151C8[D_800B9A02];
    if (D_sc01_005_801CD9A8 != 0) {
        if (GetMessageAnswer(D_sc01_005_801CD9AC) != 0) {
            D_sc01_005_801CD9A8 = 0;
        }
    } else if (GetPadPressedDirWide(0) & 0x50) {
        k = D_8011511A;
        if (D_80115138[k] == 8) {
            func_sc01_005_8017F2D4(0xF, (s16) func_8014168C((s16) k));
        }
        if (D_sc01_005_801CD870 != 0) {
            CloseMessage0();
            D_800B9A15 = 0;
            PlaySoundId(0x474, 0);
            D_80115112++;
        } else {
            D_80115112--;
        }
    }
    func_sc01_005_8017E6BC();
    UpdateMessage0();
}

void func_sc01_005_8017E384(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

s32 func_sc01_005_8017E3DC(void) {
    s32 btn;
    s32 rep;
    s32 r;
    s16 kind;
    u16 cur;
    u8 *a;
    u8 *b;
    u8 v;
    u8 old;
    s16 d;
    s16 x;
    s16 ret;

    ret = 0;
    btn = GetPadPressedDirWide(0);
    if (btn & 0xFFFF) {
        D_sc01_005_801CD9A8 = 0;
    }
    rep = GetPadHeldDirWide(0);
    r = func_8014168C(*(s16 *)D_80115118.p2);
    cur = *(u16 *)D_80115118.p2;
    kind = D_80115138[cur];
    if (btn & 0x40) {
        x = func_sc01_005_8017F2D4(kind, (s16)r);
        return x != 0 ? x : ret;
    }
    if (btn & 0x10) {
        if (kind < 6) {
            if (kind != 1) {
                return -1;
            }
        } else {
            PlaySoundId(0x473, 0);
            (*(u16 *)D_80115118.p2)--;
        }
        return 0;
    }
    a = &D_80115118.p1C[0x14 + cur * 2];
    b = (u8 *)&D_80115118.f40[cur];
    if ((u16)rep != 0) {
        if ((u16)rep == D_80115120) {
            if (--D_80115122 == 0) {
                btn = rep & 0xF000;
                D_80115122 = 3;
            }
        } else {
            D_80115120 = rep;
            D_80115122 = 8;
        }
    } else {
        D_80115120 = 0;
        D_80115122 = 12;
    }
    if (btn & 0x1000) {
        (*a)--;
        ret = 1;
        if (*a >= 0x80) {
            if (kind < 6) {
                *a = *b - 1;
            } else {
                *a = 0;
                ret = 0;
            }
        }
    }
    if (btn & 0x4000) {
        old = *a;
        *a = old + 1;
        ret = 1;
        if (*a >= *b) {
            if (kind < 6) {
                *a = 0;
            } else {
                *a = old;
                ret = 0;
            }
        }
    }
    v = *a;
    cur = D_8011511A;
    d = (s8)v - (s8)D_80115140[cur].v;
    if (d >= 6) {
        D_80115140[cur].v = v - 5;
    } else if (d < 0) {
        D_80115140[cur].v = v;
    }
    if (ret) {
        PlaySoundId(0x45A, 0);
        if ((u16)D_8011511A == 1) {
            if (kind == 9) {
                D_80115142 = 0;
            }
            func_sc01_005_8017DEFC();
        }
    }
    return 0;
}

void func_sc01_005_8017E6BC(void) {
    s32 p;
    R8017D4A4 *r;
    u8 *tbl;
    u16 n;
    s32 c;
    s16 i;

    p = D_801151D0;
    r = D_80115134;
    if (D_80115126 != 4) {
        p = DrawMessage0(p, &g_FrontOt[D_800B9A02], 2);
        if (D_80115126 == 0 || D_80115126 == 3) {
            tbl = &D_sc01_005_801BB2F0;
        } else {
            tbl = &D_sc01_005_801BB2DC;
            if (D_80115126 == 1 && *(u16 *)&D_8011511A != 0
                && D_sc01_005_801CD9A8 != (s32)D_sc01_005_801C3C70
                && D_sc01_005_801CD9A8 != (s32)D_sc01_005_801C3C94
                && D_sc01_005_801CD9A8 != (s32)D_sc01_005_801C3CD4
                && D_sc01_005_801CD9A8 != (s32)D_sc01_005_801C3D20
                && (s16)func_sc01_005_8017F730() == 0) {
                tbl = &D_sc01_005_801BB2F0;
            }
        }
        p = (s32)func_800D27DC(2, p, tbl, 1, 0);
        p = DrawChoiceCursor(p, g_FrontOtOrg[D_800B9A02].ot + 2, &D_sc01_005_801BBA34, 0);
    }
    c = *(u16 *)&D_8011511A == 0 ? 1 : (D_80115126 == 2 || D_80115126 == 3) ? 3 : 2;
    n = c;
    for (i = 0; i < n; i++, r++) {
        if (*(s16 *)((u8 *)D_80115158 + (i << 1)) != 0) {
            p = (s32)func_sc01_005_8017E978(p, r, i);
        }
    }
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(u32 *)p = 0x2000000;
    addPrim(&g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p += 0x28;
    ((S32R *)&D_801151D0)->v = p;
}

u8 *func_sc01_005_8017E978(u8 *p, u8 *t, s32 id0) {
    s16 id = id0;
    u8 buf[0x48];
    u32 col;
    s32 a;
    s16 f;
    s32 c;
    u8 d;
    s16 *xy;
    s16 i;
    s32 r;

    a = (u8)-((u16)D_8011511A != id);
    
    SjisToGlyphs(AF(t, s32, 0x14), buf);
    f = a;
    p = func_800D2650(p, buf, AF(t, s16, 0x10), AF(t, s16, 0x12), 1, (u8)a ? 0x585858 : 0x808080);
    
    p = (u8 *)func_sc01_005_8017EFA8((Sprt *)p, AF(t, u16 *, 0x18), id, AF(t, u8 *, 8), f ? 0x585858 : 0x808080);
    i = 0; c = f; xy = AF(t, s16 *, 0x18);
    for (; ; xy += 2) {
        r = func_sc01_005_8017EB44(AF(t, s32 *, 0x1C), AF(t, s16, 0), id, i++, &col);
        if (r == 0) break;
        if (r < 0) {
            SjisToGlyphs(r, buf);
            if (c) col -= 0x282828;
            p = func_800D2650(p, buf, xy[0], xy[1], 1, col);
        }
    }
    d = f;
    p = func_800D27DC(d != 0, p, AF(t, u8 *, 4), AF(t, s16, 0xC), 0);
    return func_800D29F8(d, p, AF(t, u8 *, 8), AF(t, s16, 0xE), 0);
}

s32 func_sc01_005_8017EB44(s32 *tbl, s16 kind, s16 id, s16 i, s32 *col) {
    s32 r;
    s16 n;
    s16 j;
    s32 k;

    *col = 0x808080;
    n = D_80115158[id].hi * *(u8 *) &D_80115158[id].lo;
    r = 0;
    switch (kind) {
    case 6:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (!(GetVar(D_sc01_005_80183478[j]) & 0xFF)) {
            *col = 0x804040;
        }
        k = j + 1;
        r = D_8010F3C4[k];
        break;
    case 10:
        j = i + D_80115142;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            return r;
        }
        if (GetVar(D_sc01_005_801CD9A4[j] + 0x62) & 0x20) {
            *col = 0x804040;
        }
        r = tbl[j];
        break;
    case 9:
        j = i + D_80115141;
        if (i >= 6) {
            break;
        }
        if (j >= n) {
            break;
        }
        r = tbl[D_sc01_005_801CD9B4[j]];
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    default:
        if (i >= n) {
            break;
        }
        r = tbl[i];
        break;
    }
    return r;
}

s32 func_sc01_005_8017ED5C(s32 kind, s32 id) {
    u8 unused[8];
    u8 *r;
    s16 j;
    s32 v;
    s32 t;
    s32 n;
    s32 x;
    s32 p;
    u8 c;

    r = &D_801117EC;
    switch ((s16) kind) {
    case 6:
        if ((s16) func_sc01_005_8017F730() != 0) {
            v = GetProgress();
            j = D_sc01_005_801BB920[(s16) id];
            t = (s32) D_sc01_005_801BB948; x = D_sc01_005_801BB948[j].a; if (v < x && (n = -(j * 4), (t = ((S16x2 *) (t - n))->b) == 0 || !(GetFlag(t) & 0xFF))) {

                j = -1;
            }
            if (j >= 0) {
                p = D_sc01_005_801BB968[j];
                SetMessageText(p, 0);
                if (p != D_sc01_005_801CD9B0) {
                    D_sc01_005_801CD9B0 = p;
                    D_80115130 = 0;
                }
                r = &D_sc01_005_801C3D48;
            } else {
                r = &D_sc01_005_801C3D80;
            }
        } else {
            c = GetVar(D_sc01_005_80183478[(s16) id]);
            if (c == 0) {
                r = &D_80112B58;
            } else if (c == 1) {
                r = &D_80112B90;
            } else {
                r = &D_sc01_005_801C3DA8;
                if ((s16) id != 0) {
                    r = &D_80112BA8;
                }
            }
        }
        break;
    case 1:
        r = &D_sc01_005_801C3A74;
        break;
    case 2:
        r = &D_sc01_005_801C3C50;
        break;
    case 4:
        r = &D_sc01_005_801C3B38;
        break;
    case 3:
    case 7:
    case 8:
        r = &D_sc01_005_801C3BC4;
        break;
    case 9:
        r = &D_sc01_005_801C3B54;
        break;
    case 10:
        c = D_sc01_005_801CD9A4[(s16) id];
        if (GetVar(c + 0x62) & 0x40) {
            r = D_sc01_005_801BB984[c];
        }
        break;
    case 5:
        break;
    }
    return (s32) r;
}

SprtE804 *func_sc01_005_8017EFA8(SprtE804 *p, u16 *tbl, s16 id, u8 *obj, s32 col) {
    s32 kind;
    s16 k;
    u16 *uv;
    u16 cur;
    s16 i;

    kind = D_80115138[id];
    p->tag = 0x04000000;
    p->u = 0x30;
    p->v = 0x48;
    p->clut = 0x4056;
    p->code = col | 0x64000000;
    if (kind < 6) {
        k = func_8014168C(id) * 2;
    } else {
        k = (*(u8 *)&D_80115148[id] - D_80115140[id].v) * 2;
    }
    uv = (u16 *)(k * 2 + (s32)tbl);
    p->x = uv[0] - 8;
    p->y = uv[1];
    p->h = 8;
    p->w = 8;
    addPrim(&g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
    p++;
    if (kind >= 6) {
        cur = D_8011511A;
        if (cur == id && (D_80115116 & 8)) {
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    if (D_80115140[cur].v == 0) {
                        continue;
                    }
                    p->v = 0x30;
                    p->y = D_sc01_005_801BB61E - 2;
                } else {
                    if (D_80115158[cur].lo - *(s8 *)&D_80115140[cur] < 7) {
                        continue;
                    }
                    p->v = 0x38;
                    p->y = D_sc01_005_801BB632 + 1;
                }
                p->tag = 0x04000000;
                p->u = 0x78;
                p->code = 0x64808080;
                p->clut = 0x4056;
                p->x = *(s32 *)(obj + 8) + *(s32 *)(obj + 0xC) - 13;
                p->w = 8;
                p->h = 8;
                addPrim(&g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot[2], p);
                p++;
            }
        }
    }
    return p;
}

s32 func_sc01_005_8017F2D4(s32 arg0, s32 arg1) {
    s32 v;
    s32 t;
    s32 u;
    u8 *p;
    s16 *q;
    s16 *q2;

    v = GetProgress();
    switch ((s16)arg0) {
    case 2:
    case 3:
        if ((s16)arg1 != 0) {
            return -1;
        }
        q2 = &D_8011511A;
        (*q2)++;
        PlaySoundId(0x45D, 0);
        return 0;
    case 4:
        u = (s16)arg1;
        if (u == 2) {
            return -1;
        }
        if (u != 0) {
            if (v < 10 || D_8011515A == 0x100) {
                p = D_sc01_005_801C3BA8;
                goto set;
            }
            D_8011511A++;
            PlaySoundId(0x45D, 0);
            return 0;
        }
        if (v < 10) {
            p = D_sc01_005_801C3B80;
            goto set;
        }
        D_sc01_005_801CD870 = 1;
        return -1;
    case 5:
        u = (s16)arg1;
        if (u == 0) {
            D_sc01_005_801CD870 = 1;
        }
        if (u == 1) {
            if (GetVar(D_sc01_005_801CD874 + 0x62) & 0x20) {
                goto call;
            }
            D_sc01_005_801CD870 = 2;
        }
        return -1;
    case 6:
        t = (s16)arg1;
        if (t == 0) {
            p = D_sc01_005_801C3C70;
            goto set;
        }
        if (t == 3 || t == 5) {
            if ((s16)arg1 == 3) {
                p = D_sc01_005_801C3C94;
                goto set;
            }
            if ((u8)GetVar(0x40) == 0) {
                goto call;
            }
            p = D_sc01_005_801C3CD4;
            goto set;
        }
        if ((u8)GetVar(D_sc01_005_80183478[t]) == 0) {
            goto call;
        }
        if (v >= 0x294 && v < 0x384 && (t == 12 || t == 17 || t == 26)) {
            p = D_sc01_005_801C3D20;
            goto set;
        }
        if (v >= 0xA0 && v < 0xC8 && (u16)(arg1 - 10) < 4) {
            p = D_sc01_005_801C3DCC;
            goto set;
        }
        D_sc01_005_801CD870 = arg1 + 1;
        return -1;
    case 7:
        if ((s16)arg1 >= 3 && (u8)GetVar(0x62) == 0) {
            p = D_sc01_005_801C3C00;
            goto set;
        }
    case 9:
        PlaySoundId(0x45D, 0);
        q = &D_8011511A;
        (*q)++;
        break;
    case 8:
        t = func_8014168C(1);
        if ((s16)t == 0) {
            SetFlag(0xE8, 1);
        }
        D_sc01_005_801CD870 = ((t + 1) << 8) | (arg1 + 1);
        return -1;
    case 10:
        t = D_sc01_005_801CD9A4[(s16)arg1];
        if (GetVar(t + 0x62) & 0x40) {
            D_sc01_005_801CD870 = t | 0x100;
            D_sc01_005_801CD874 = t;
            D_sc01_005_801CD87C = D_8011514A;
            D_sc01_005_801CD880 = D_8011514C;
            return -1;
        }
        goto call;
    case 1:
        if (v == 0x294) {
            u = (s16)arg1;
            if (u < 4) {
                if (u == 3) {
                    goto ret2;
                }
                p = D_sc01_005_801C3A8C;
                goto set;
            }
        }
        if (v == 0x3B6) {
            u = (s16)arg1;
            if (u < 5) {
                if (u == 3) {
                ret2:
                    D_sc01_005_801CD870 = arg1;
                    return -2;
                }
                p = D_sc01_005_801C3AB4;
                goto set;
            }
        }
        if (v >= 0x44C && v < 0x47E && (s16)arg1 == 5) {
            p = D_sc01_005_801C3AF0;
        set:
            D_sc01_005_801CD9A8 = (s32)p;
        call:
            PlaySoundId(0x45F, 0);
            return 0;
        }
        D_sc01_005_801CD870 = arg1;
        if ((s16)arg1 == 3) {
            return -2;
        }
        return -1;
    }
    return 0;
}

s32 func_sc01_005_8017F730(void) {
    s32 r;
    if (GetVar(D_sc01_005_8018347E) & 0xFF) {
        r = !(GetVar(D_sc01_005_80183478[(s16) func_8014168C(1)]) & 0xFF);
        return r;
    }
    r = 0;
    return r;
}

s32 func_sc01_005_8017F790(StageActor *o) {
    struct { s16 x, y, z, kind, unk8; u16 flags; s16 unkC, unkE; s32 unk10; } d;
    u8 c;
    s16 v;

    if (o->workFE == 0) {
        c = D_sc01_005_801BBA7F[o->work100];
        if (c >= 0x2C) {
            o->workFE = 1;
        } else if (func_sc01_005_8017D9F4(c) != 0) {
            o->workFE = 1;
            if (o->work100 == 0x1C && (GetVar(0x7E) & 0x20)) {
                func_800D0C48(1);
            }
        }
    }
    if (o->work10A > 0x30) {
        v = (u16)o->work106 + 0x10;
        o->work106 = v;
        o->work108 = v;
        if (v >= 0x100) {
            o->work108 = o->work106 = 0xFF;
        }
        o->work10A -= 3;
        return 0;
    }
    if (o->workFE == 0) {
        return 0;
    }
    StartSeqPlayer();
    d.kind = 0x1ED;
    d.unk8 = (u16)o->work100;
    d.flags = 0;
    d.unkC = 0;
    d.unkE = 0;
    d.unk10 = 0;
    d.x = 0;
    d.y = -0x400;
    d.z = 0;
    o->workD4 = SpawnActorFromDef(&d, o);
    o->work104 = 0;
    D_sc01_005_801CE030 = g_Lights.a;
    D_sc01_005_801CE040 = g_Lights.b;
    D_sc01_005_801CE050 = g_Lights.c;
    MoveLightDir(0, 0, 0x14, 0x13);
    SetLightColor(0, 0x96, 0x96, 0xAA);
    MoveLightDir(1, 0, 0xA, 0x14);
    SetLightColor(1, 0x66, 0x66, 0x66);
    MoveLightDir(2, 0, -0xA, 0);
    SetLightColor(2, 0x4D, 0x33, 0x80);
    return 1;
}

s32 func_sc01_005_8017F9F8(u8 *o) {
    s16 v;

    AF(AF(o, u8 *, 0xD4), s16, 0xFC) = 0;
    if (AF(o, s16, 0xFE) == 0 && func_sc01_005_8017D9A0() != 0) {
        AF(o, s16, 0xFE) = 1;
    }
    if (AF(o, s16, 0x10A) > 0x30) {
        v = AF(o, u16, 0x106) + 0x10;
        AF(o, s16, 0x106) = v;
        AF(o, s16, 0x108) = v;
        if (v >= 0x100) {
            AF(o, s16, 0x108) = AF(o, s16, 0x106) = 0xFF;
        }
        AF(o, u16, 0x10A) -= 3;
        return 0;
    }
    if (AF(o, s16, 0xFE) == 0) {
        return 0;
    }
    StopSeqPlayer();
    AF(AF(o, u8 *, 0xD4), s16, 0x108) = 2;
    g_Lights.a = D_sc01_005_801CE030;
    g_Lights.b = D_sc01_005_801CE040;
    g_Lights.c = D_sc01_005_801CE050;
    ApplyLight(0, &g_Lights.a);
    ApplyLight(1, &g_Lights.b);
    ApplyLight(2, &g_Lights.c);
    if (AF(o, s16, 0x100) == 0x1C && (GetVar(0x7E) & 0x20)) {
        RequestBgmPack(0x3D);
        func_8001B710();
    }
    return 1;
}

void RestRestoreFade(u8 *o) {
    Player *snd;
    s16 t;
    s16 v;

    snd = &g_Player;
    if (AF(o, s16, 0x10A) != 0) {
        t = AF(o, s16, 0x10A) - 1;
        AF(o, s16, 0x10A) = t;
        if (t >= 0x40) {
            if (AF(o, s16, 0x108) != 0xFF) {
                v = AF(o, s16, 0x108) + 0x11;
                AF(o, s16, 0x108) = v;
                if (v >= 0x100) {
                    AF(o, s16, 0x108) = 0xFF;
                }
            } else {
                v = AF(o, u16, 0x106) + 0x11;
                AF(o, u16, 0x106) = v;
                if (v >= 0x100) {
                    AF(o, s16, 0x106) = 0xFF;
                }
            }
        } else if (t < 0x20) {
            if (AF(o, s16, 0x106) != 0) {
                v = AF(o, s16, 0x106) - 0x11;
                AF(o, s16, 0x106) = v;
                if (v < 0) {
                    AF(o, s16, 0x106) = 0;
                }
            } else {
                v = AF(o, u16, 0x108) - 0x11;
                AF(o, u16, 0x108) = v;
                if (v < 0) {
                    AF(o, u16, 0x108) = 0;
                }
            }
        } else if (t == 0x30) {
            AddHp(snd, 0x3E7, 1);
            AddWakeGauge(snd, 0x1000000, 1);
            AdvanceClockHours(8);
            UpdateClockPhase();
            AddBp(snd, 0x3E7);
        }
        func_sc01_005_8017FD50(o);
        if (AF(o, s16, 0x10A) == 0 && GetDeadline8Passed(8) != 0) {
            ExpireDeadline8();
        }
    }
}

void func_sc01_005_8017FD50(u8 *o) {
    u8 *p;
    u8 *q;
    u8 c;
    u8 d;

    p = AllocPrim(0x34);
    setlen(p, 1);
    AF(p, u32, 4) = 0xE1000015;
    addPrim(g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot, p);
    p += 8;
    AF(p, u32, 0) = 0x08000000;
    AF(p, u8, 7) = 0x3A;
    c = AF(o, u8, 0x108);
    AF(p, u8, 4) = AF(p, u8, 0xC) = AF(p, u8, 5) = AF(p, u8, 0xD) = AF(p, u8, 6) = AF(p, u8, 0xE) = c;
    d = AF(o, u8, 0x106);
    AF(p, s16, 0x8) = AF(p, s16, 0x18) = -0xA0;
    AF(p, s16, 0x10) = AF(p, s16, 0x20) = 0xA0;
    AF(p, s16, 0xA) = AF(p, s16, 0x12) = -0x78;
    AF(p, u8, 0x14) = AF(p, u8, 0x1C) = AF(p, u8, 0x15) = AF(p, u8, 0x1D) = AF(p, u8, 0x16) = AF(p, u8, 0x1E) = d;
    AF(p, s16, 0x1A) = AF(p, s16, 0x22) = 0x78;
    addPrim(g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot, p);
    p = q = p + 0x24;
    setlen(q, 1);
    AF(q, u32, 4) = 0xE1000240;
    addPrim(g_FrontOtOrg[((U16RE804 *)&D_800B9A02)->v].ot, q);
}

extern void (*D_sc01_005_801BBCAC[])();
extern void (*D_sc01_005_801BBCC0[])();
extern void (*D_sc01_005_801BBCD4[])();

void func_sc01_005_8017FF74(StageActor *o) {
    switch (o->param) {
    case 0:
    default:
        D_sc01_005_801BBCAC[o->state]();
        break;
    case 1:
        D_sc01_005_801BBCC0[o->state]();
        break;
    case 2:
        D_sc01_005_801BBCD4[o->state]();
        break;
    }
}

void func_sc01_005_80180010(s32 arg0) {
    s32 temp_v0;

    func_sc01_005_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (GetPlayerAction() == 0) {
        SetProgress(0xA);
        SetFlag(0x125, 0);
        SetFlag(0x126, 0);
        SetFlag(0x127, 0);
        SetFlag(0x128, 0);
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xDC) = 0;
        StartEvent(arg0, (s32) &D_sc01_005_801BBE98);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_005_801800C0(u8 *o) {
    SV8 sv;
    s32 r;
    s16 v;
    s16 sp;

    AF(o, s32, 0x1C)++;
    if (AF(o, s16, 0x10A) != 0) {
        v = AF(o, s16, 0x10A) - 1;
        AF(o, s16, 0x10A) = v;
        if (v < 0x40) {
            if (AF(o, s16, 0x106) != 0) {
                v = AF(o, s16, 0x106) - 8;
                AF(o, s16, 0x106) = v;
                if (v < 0) {
                    AF(o, s16, 0x106) = 0;
                }
            } else {
                v = AF(o, u16, 0x108) - 8;
                AF(o, u16, 0x108) = v;
                if (v < 0) {
                    AF(o, u16, 0x108) = 0;
                }
            }
        }
        func_sc01_005_8017FD50(o);
        r = 1;
    } else {
        r = 0;
    }
    if (r == 0 && (GetPadPressedDir(0) & 0x800) && func_800CF8B4() != 0) {
        if (AF(o, s32, 0x1C) == 0x8E) {
            AF(g_PlayerModel, s16, 0x10) = 0;
        }
        AF(o, s16, 2) += 2;
        SetProgress(2);
        func_800D1724(&D_sc01_005_80185E80);
        return;
    }
    if ((u8)GetFlag(0x125) != 0) {
        SetFlag(0x125, 0);
        EndPlayerMotionAction();
    }
    if ((u8)GetFlag(0x129) != 0) {
        SetFlag(0x129, 0);
        SetFlag(0x126, 0);
        sv.x = 0x20;
        sv.y = 0;
        sv.z = -0x80;
        FacePoint(&g_Player, &sv);
    }
    if ((u8)GetFlag(0x126) != 0) {
        switch (AF(o, s16, 0xDC)) {
        case 0:
            sp = 0xE00;
            break;
        case 1:
            sp = 0x180;
            break;
        case 2:
            sp = 0xFC0;
            break;
        case 3:
            sp = -1;
            SetFlag(0x126, 0);
            break;
        }
        if (sp > 0) {
            v = AF(o, u16, 0xDE) + 1;
            AF(o, s16, 0xDE) = v;
            if (v >= 0x10) {
                AF(o, s16, 0xDE) = 0;
                AF(o, s16, 0xDC)++;
            }
            func_80172B14(sp);
        }
    }
    if ((u8)GetFlag(0x127) != 0) {
        SetFlag(0x127, 0);
        StartPlayerMotionAction599C();
    }
    if ((u8)GetFlag(0x128) != 0) {
        SetFlag(0x128, 0);
        func_sc01_005_80182324();
    }
    if (UpdateScript(o) != 0) {
        EndEvent(o);
        TakePlayerControl();
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s16, 2)++;
    }
}

void func_sc01_005_801803AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetProgress(2);
        func_800D1724((s32) &D_sc01_005_80185E5C);
    }
}

void func_sc01_005_801803F0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0x8E) {
        AF(g_PlayerModel, s16, 0x10) = 0;
    }
}

void func_sc01_005_8018041C(s32 arg0) {
    s32 temp_v0;

    func_sc01_005_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (GetPlayerAction() == 0) {
        StartEvent(arg0, (s32) &D_sc01_005_801BC348);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_005_8018048C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u16 temp_v0_5;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0x10A) = temp_v0_2;
        if (temp_v0_2 < 0x40) {
            temp_v0_3 = AF(arg0, s16, 0x106);
            if (temp_v0_3 != 0) {
                temp_v0_4 = temp_v0_3 - 8;
                AF(arg0, s16, 0x106) = temp_v0_4;
                if ((s16) (temp_v0_4) < 0) {
                    AF(arg0, s16, 0x106) = 0;
                }
            } else {
                temp_v0_5 = AF(arg0, u16, 0x108) - 8;
                AF(arg0, u16, 0x108) = temp_v0_5;
                if ((s16) (temp_v0_5) < 0) {
                    AF(arg0, u16, 0x108) = 0U;
                }
            }
        }
        func_sc01_005_8017FD50(arg0);
    }
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        TakePlayerControl();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_005_80180564(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_005_80185E38);
    }
}

void func_sc01_005_801805A0(void) {
}

void func_sc01_005_801805A8(void) {
    func_sc01_005_8017DAAC(3, 0);
}

void func_sc01_005_801805CC(void) {
    func_sc01_005_8017DAAC(3, 2);
}

void func_sc01_005_801805F0(void) {
    func_sc01_005_8017DAAC(4, 0);
}

s32 func_sc01_005_80180614(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(AF(arg0, void *, 0xD4), s16, 0xFC) = 1;
    return 1;
}

s16 func_sc01_005_80180674(u8 *arg0) {
    s16 temp_s0;

    temp_s0 = AF(arg0, s16, 0x104);
    if (temp_s0 != 0) {
        AF(arg0, s16, 0x104) = 0;
        PlaySoundId(0x45F, 0);
    }
    return temp_s0;
}

s32 func_sc01_005_801806B8(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(arg0, s16, 0x100) = 0;
    return 1;
}

s32 func_sc01_005_80180710(void) {
    return (func_sc01_005_8017DA9C() << 0x10) == 0;
}

s32 func_sc01_005_80180734(u8 *o) {
    if (func_sc01_005_8017DA9C() < 0x100) {
        return 1;
    }
    AF(o, s16, 0x100) = func_sc01_005_8017DA9C() & 0xFF;
    return 0;
}

s32 func_sc01_005_8018078C(u8 *o) {
    s16 v = func_sc01_005_8017DA9C();

    if (v != 0) {
        AF(AF(o, u8 *, 0xD4), s16, 0x108) = v - 1;
        return 0;
    }
    return 1;
}

void func_sc01_005_801807D8(void) {
    AF(g_PlayerModel, s16, 0x10) = 0;
}

void func_sc01_005_801807E8(u8 *arg0) {
    AF(arg0, s16, 0x10A) = 0x60;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc01_005_80180800(void) {
}

extern void StopMotion();
extern void UpdateModelZYX();
extern void SetLocalVelocityXZ();
extern void MoveObject();

extern void InitNullModel();
extern s16 g_ClockMinutes;
extern void AdvanceClockMinutes();

void func_sc01_005_80180808(StageActor *o) {
    Player *snd;
    ModelObj *r;
    s32 v;
    s32 t;

    snd = &g_Player;
    r = AllocActorModel();
    o->model = r;
    if (r != 0) {
        InitNullModel(r);
        v = GetProgress();
        if (v < 5 || v == 0x294) {
            if (v < 5) {
                o->param = 1;
            } else {
                o->param = 2;
                t = 0xAC8 - g_ClockMinutes;
                AddHp(snd, 0x3E7, 1);
                AddWakeGauge(snd, 0x1000000, 1);
                AdvanceClockMinutes(t);
                UpdateClockPhase();
                AddBp(snd, 0x3E7);
            }
            o->work10A = 0x60;
            o->work106 = 0xFF;
            o->work108 = 0xFF;
            func_sc01_005_8017FD50(o);
        }
        o->state = o->state + 1;
    }
}

void func_sc01_005_80180908(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        return;
    }
    if (GetPlayerAction() == 0) {
        StartEvent((s32) arg0, (s32) &D_sc01_005_801BBC4C);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80180974(StageActor *arg0) {
    if (arg0->work100 == 0) {
        RestRestoreFade(arg0);
    } else {
        func_sc01_005_8017FD50(arg0);
    }
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        TakePlayerControl();
        arg0->timer = 0x10;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_801809F4(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_005_80185E38);
    }
}

void func_sc01_005_80180A30(void) {
}

void func_sc01_005_80180A38(StageActor *o) {
    SpawnDef d;
    d.kind = 0x1D9;
    d.flags = 0;
    d.unk8 = 0;
    d.unkC = 0x800;
    d.unk10 = 0;
    d.unkE = 0;
    d.x = 0;
    d.y = -0x82;
    d.z = -0x140;
    o->ext0 = SpawnActorFromDef(&d, o);
    d.kind = 0x1DA;
    d.z = -0x180;
    o->ext1 = SpawnActorFromDef(&d, o);
    o->pos[0].h.i = 0x88;
    o->pos[2].h.i = 0x60;
}

s32 func_sc01_005_80180AD0(void) {
    return D_sc01_005_801CDED4 != 1;
}

void func_sc01_005_80180AE8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xD0);
    AF(temp_v1, u16, 2) = (u16) (AF(temp_v1, u16, 2) + 1);
}

void func_sc01_005_80180B04(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 1;
}

void func_sc01_005_80180B14(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 2;
}

void func_sc01_005_80180B24(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 1;
}

void func_sc01_005_80180B34(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 2;
}

void func_sc01_005_80180B44(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_005_80180B64(StageActor *arg0) {
    D_sc01_005_801BC7A4[arg0->state]();
}

void func_sc01_005_80180BA0(StageActor *arg0) {
    D_sc01_005_801BC7B4[arg0->state]();
}

s32 func_sc01_005_80180BDC(o)
    u8 *o;
{
    s16 *p;
    s32 t;

    p = AF(o, s16 *, 0xCC);
    if (p != 0) {
        if (AF(o, s32, 0x1C) == 0) {
            t = *p++;
            if (t == 0) {
                StopMotion(o);
                return 0;
            }
            AF(o, s32, 0x1C) = t;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = *p++;
            AF(o, s16, 0xE6) = *p++;
            UpdateModelZYX(o);
            AF(o, s16 *, 0xCC) = p;
        }
        AF(o, s32, 0x1C) -= 1;
        SetLocalVelocityXZ(o, o + 0xDC);
        MoveObject(o);
        return 1;
    }
    return 0;
}

void func_sc01_005_80180C98(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc01_005_801C6B18);
        arg0->model->rot.vy = 0;
        SetScript((s32) arg0, (s32) &D_sc01_005_801BC4A0);
        func_80143994((s32) arg0, 0x3000);
        arg0->timer = 1;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80180D10(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        return;
    }
    arg0->ext0 = &D_sc01_005_801BC6C8;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc01_005_80180D48(StageActor *arg0) {
    if ((func_sc01_005_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_005_801BC508);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80180D9C(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0->unkFC != 0) {
        temp_v0 = arg0->workFE;
        if (temp_v0 == 0) {
            arg0->workFE = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        arg0->workFE = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_005_801BC78C[arg0->unkFC]);
            arg0->unkFC = 0;
        }
    }
}

void func_sc01_005_80180E24(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc01_005_801C97C0);
        arg0->model->rot.vy = 0;
        SetScript((s32) arg0, (s32) &D_sc01_005_801BC578);
        func_80143994((s32) arg0, 0x3000);
        arg0->timer = 1;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80180E9C(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        return;
    }
    arg0->ext0 = &D_sc01_005_801BC718;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc01_005_80180ED4(StageActor *arg0) {
    if ((func_sc01_005_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_005_801BC5E0);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80180F28(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0->unkFC != 0) {
        temp_v0 = arg0->workFE;
        if (temp_v0 == 0) {
            arg0->workFE = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        arg0->workFE = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_005_801BC798[arg0->unkFC]);
            arg0->unkFC = 0;
        }
    }
}

void func_sc01_005_80180FB0(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc01_005_801BC578);
    arg0->ext0 = &D_sc01_005_801BC764;
    arg0->timer = 0;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc01_005_80180FFC(StageActor *arg0) {
    if ((func_sc01_005_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_005_801BC5F8);
        arg0->timer = 0x28;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80181054(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_005_801BC680);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_801810AC(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_005_801BC5E0);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80181100(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0->unkFC != 0) {
        temp_v0 = arg0->workFE;
        if (temp_v0 == 0) {
            arg0->workFE = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        arg0->workFE = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_005_801BC798[arg0->unkFC]);
            arg0->unkFC = 0;
        }
    }
}

void func_sc01_005_80181188(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc01_005_801BC578);
    arg0->ext0 = &D_sc01_005_801BC778;
    arg0->timer = 0;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc01_005_801811D4(StageActor *arg0) {
    if ((func_sc01_005_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_005_801BC5E0);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80181228(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0->unkFC != 0) {
        temp_v0 = arg0->workFE;
        if (temp_v0 == 0) {
            arg0->workFE = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        arg0->workFE = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_005_801BC798[arg0->unkFC]);
            arg0->unkFC = 0;
        }
    }
}

void func_sc01_005_801812B0(StageActor *arg0) {
    s16 r[4];
    s32 obj;
    s32 obj2;
    u8 *p;
    u16 *q;
    u8 t;
    u8 idx;

    if ((s32)arg0->model == 0) {
        arg0->model = AllocActorModel();
        if ((s32)arg0->model == 0) {
            return;
        }
        InitModel(arg0->model, D_sc01_005_801C339C[--arg0->param]);
        arg0->work10A = GetVar(arg0->param + 0x63) & 0x20;
        arg0->model->parts = &D_sc01_005_801CD9C0;
        func_sc01_005_8018203C(arg0, arg0->work10A != 0);
        SetScript(arg0, &D_sc01_005_801CDA10);
        func_sc01_005_801820F8(arg0);
        arg0->model->flags |= 0x10;
    }
    if (arg0->workD8 == 0) {
        obj = AllocSpriteInRange(0x7E, 0x100);
        arg0->workD8 = obj;
        if (obj == 0) {
            return;
        }
        InitSpriteKind0(obj, &D_sc01_005_801C39E0, 0x3E0, 0x100);
        AF(obj, u8, 0x27) = 0x8C;
        AF(obj, s16, 8) = -1;
        AF(obj, s16, 0xA) = 0x59;
    }
    if (arg0->work10A == 0) {
        if ((s32)arg0->ext1 == 0) {
            arg0->ext1 = AllocActorModel();
            if ((s32)arg0->ext1 == 0) {
                return;
            }
            obj2 = (s32)arg0->ext1;
            func_8001C810(obj2, &D_sc01_005_801B91B4);
            SetModelParent(obj2, arg0->model);
            AF(obj2, u16, 0x2C) |= 0x10;
            AF(obj2, s16, 0xA) = 0;
            AF(obj2, s16, 0xC) = -8;
            AF(obj2, s32, 4) |= 0x70000000;
        }
        if (arg0->workD4 == 0) {
            obj = AllocActorModel();
            arg0->workD4 = obj;
            if (obj == 0) {
                return;
            }
            func_8001C810(obj, &D_sc01_005_801B9C74);
            SetModelParent(obj, arg0->model);
            AF(obj, u16, 0x2C) |= 0x10;
            AF(obj, s32, 4) |= 0x8040;
            AF(obj2, s16, 0xA) = 0;
            AF(obj, s16, 0xC) = -4;
        }
        arg0->work102 = 0;
        AF(AF(arg0, void *, 0xD8), s32, 4) |= 0x80000000;
    } else {
        ModelObj *m = arg0->model;
        arg0->work102 = D_sc01_005_801C3930[arg0->param];
        m->scale.vx = 0x1800;
        m->scale.vz = 0x1800;
        m->scale.vy = 0x1800;
    }
    idx = D_sc01_005_801C3A04[arg0->param];
    arg0->work100 = idx;
    p = &D_sc01_005_801C3A30 + idx * 6;
    t = *p++;
    D_800B9ABF = t;
    D_800B9B10 = t;
    t = *p++;
    D_800B9AC0 = t;
    D_800B9B11 = t;
    t = *p++;
    D_800B9AC1 = t;
    D_800B9B12 = t;
    D_800B9B13 = *p++;
    D_800B9B14 = *p++;
    D_800B9B15 = *p++;
    q = (u16 *)&D_sc01_005_801C3708 + (AF(arg0, u16, 0x100) & 6) * 2;
    r[0] = *q++;
    r[1] = *q++;
    r[2] = 0x50;
    r[3] = 0xC8;
    MoveImage(r, 0x380, 0x100);
    r[0] = *q++;
    r[1] = *q++;
    r[2] = 0x100;
    r[3] = 1;
    MoveImage(r, 0x100, 0x1E0);
    QueueImage(D_sc01_005_801C3728[arg0->param]);
    arg0->state++;
}

void func_sc01_005_8018165C(StageActor *o) {
    s32 pad;

    pad = 0;
    if (o->unkFC != 0) {
        pad = GetPadPressedDir(0);
        GetPadHeldDir(0);
    }
    func_sc01_005_80181B00(o);
    func_sc01_005_801820F8(o);
    if (o->work108 == 0) {
        if (o->step == 0) {
            if (pad & 0x10) {
                o->parent->work104 = 1;
            } else if (pad & 0x20) {
                o->step = OpenMessage(D_sc01_005_801C37D4[o->param]);
            }
        } else if (GetMessageAnswer(o->step) != 0) {
            CloseMessage(o->step);
            o->step = 0;
        }
    }
    switch (o->work108) {
    case 1:
        o->work108 = 0;
        if (o->step != 0) {
            CloseMessage(o->step);
        }
        o->state = 2;
        break;
    case 2:
        o->state = 5;
        break;
    }
}

void func_sc01_005_80181784(StageActor *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    ModelObj *temp_v1;

    func_sc01_005_80181B00(arg0);
    func_sc01_005_801820F8(arg0);
    temp_v1 = arg0->model;
    temp_a0 = temp_v1->rot.vx;
    if (temp_a0 != 0) {
        if (temp_a0 < 0) {
            temp_v0 = temp_a0 + 0x80;
            temp_v1->rot.vx = temp_v0;
            if ((temp_v0 << 0x10) > 0) {
                goto block_5;
            }
        } else {
            temp_v0_2 = temp_a0 - 0x80;
            temp_v1->rot.vx = temp_v0_2;
            if ((s16) (temp_v0_2) < 0) {
block_5:
                arg0->model->rot.vx = 0;
            }
        }
    }
    temp_a0_2 = arg0->model->rot.vy;
    if (temp_a0_2 != 0) {
        if (temp_a0_2 < 0) {
            temp_v0_3 = temp_a0_2 + 0x80;
            arg0->model->rot.vy = temp_v0_3;
            if ((temp_v0_3 << 0x10) > 0) {
                goto block_12;
            }
        } else {
            temp_v0_4 = temp_a0_2 - 0x80;
            arg0->model->rot.vy = temp_v0_4;
            if ((s16) (temp_v0_4) < 0) {
block_12:
                arg0->model->rot.vy = 0;
            }
        }
    }
    if ((s32) AF(arg0->model, s32, 0x10) == 0) {
        arg0->timer = 0x50;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc01_005_80181894(StageActor *o) {
    u8 *a;
    u8 *b;
    ModelObj *p;
    s32 t;
    s16 v;

    a = (u8 *)o->ext1;
    b = AF(o, u8 *, 0xD4);
    func_sc01_005_801820F8(o);
    t = o->timer - 1;
    o->timer = t;
    if (t != 0) {
        if (t == 0x40) {
            PlaySoundId(0xC86, 0);
        }
        if (o->timer < 0x40) {
            AF(a, s16, 8) += 0xC;
            AF(a, s16, 0xC) -= 0x10;
            AF(a, s16, 0x12) += 0x60;
            AF(a, s16, 0x10) += 0x20;
            if (o->timer < 0x30) {
                AF(b, s16, 8) -= 0x18;
                AF(a, s16, 0xC) += 0x18;
                AF(b, s16, 0x14) += 0x80;
                if (o->timer < 0x20) {
                    v = (u16)o->model->scale.vx + 0x80;
                    o->model->scale.vx = v;
                    if (v > 0x1800) {
                        o->model->scale.vx = 0x1800;
                    }
                    p = o->model;
                    p->scale.vy = p->scale.vz = p->scale.vx;
                }
            }
        }
    } else {
        AF(a, s16, 0) = 0;
        AF(b, s16, 0) = 0;
        SetVar(o->param + 0x63, (u8)(GetVar(o->param + 0x63) | 0x20));
        if (o->param == 0x1B) {
            func_800D0C48(1);
        }
        func_sc01_005_8018203C(o, 1);
        SetScript(o, &D_sc01_005_801CDA10);
        func_sc01_005_801820F8(o);
        o->work10A = 1;
        o->work102 = D_sc01_005_801C3930[o->param];
        AF(o, u16, 0xFA) = D_sc01_005_801C3988[o->param];
        func_sc01_005_80181B00(o);
        AF(AF(o, u8 *, 0xD8), s32, 4) &= 0x7FFFFFFF;
        o->state++;
    }
    if (o->timer < 0x14) {
        v = (0x13 - o->timer) * 0x10;
        if (v > 0xFF) {
            v = 0xFF;
        }
        DrawFadeWhite((u8)v, 0);
    }
}

void func_sc01_005_80181B00(s32 arg0) {
    MtxDCM m;
    SV8 v;
    s32 trig;
    s32 held;
    s32 snd;

    if (AF(arg0, s16, 0xFC) != 0 && AF(arg0, u16, 2) == 1) {
        trig = GetPadPressedDir(0);
        held = GetPadHeldDir(0);
    } else {
        trig = 0;
        held = 0;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        if (held & 0x1000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x40) > 0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
            }
        }
        if (held & 0x4000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) -= 0x40) < -0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = -0x300;
            }
        }
        if (held & 0x8000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x12) -= 0x40) < -0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x12) = -0x300;
            }
        }
        if (held & 0x2000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x12) += 0x40) > 0x300) {
                AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x300;
            }
        }
    } else {
        if (AF(arg0, s16, 0x106) != 0) {
            if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
                func_sc01_005_8018203C(arg0, 1);
                SetScript(arg0, (s32) &D_sc01_005_801CDA10);
                func_sc01_005_801820F8(arg0);
                AF(arg0, s16, 0x106) = 0;
            }
        }
        if (held & 0x1000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) += 0x40) > 0x380) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x380;
            }
        }
        if (held & 0x4000) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x10) -= 0x40) < -0x380) {
                AF(AF(arg0, void *, 0x20), s16, 0x10) = -0x380;
            }
        }
        if (held & 0x8000) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) -= 0x40;
        }
        if (held & 0x2000) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) += 0x40;
        }
        if (held & 0xC) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x18) += 0x80) > 0x1800) {
                AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1800;
            }
        }
        if (held & 3) {
            if ((AF(AF(arg0, void *, 0x20), s16, 0x18) -= 0x80) < 0x1000) {
                AF(AF(arg0, void *, 0x20), s16, 0x18) = 0x1000;
            }
        }
        if ((trig & 0x80) && AF(arg0, s16, 0x106) == 0) {
            func_sc01_005_8018203C(arg0, 2);
            SetScript(arg0, (s32) &D_sc01_005_801CDA10);
            func_sc01_005_801820F8(arg0);
            AF(arg0, s16, 0x106) = 1;
            {
                s16 id = D_sc01_005_801C3880[AF(arg0, s16, 0x70)];
                if (id != 0) {
                    PlaySoundId((u16) id, 0);
                }
            }
        }
        if ((trig & 0x40) && AF(arg0, s16, 0x106) == 0) {
            func_sc01_005_8018203C(arg0, 3);
            SetScript(arg0, (s32) &D_sc01_005_801CDA10);
            func_sc01_005_801820F8(arg0);
            AF(arg0, s16, 0x106) = 1;
            {
                s16 id = D_sc01_005_801C38D8[AF(arg0, s16, 0x70)];
                if (id != 0) {
                    PlaySoundId((u16) id, 0);
                }
            }
        }
        if (trig & 0x100) {
            AF(AF(arg0, void *, 0xD8), s32, 4) ^= 0x80000000;
        }
    }
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = AF(AF(arg0, void *, 0x20), s16, 0x1C) = AF(AF(arg0, void *, 0x20), s16, 0x18);
    RotMatrixYXZ(AF(arg0, u8 *, 0x20) + 0x10, &m);
    TransposeMatrix(&m, AF(arg0, u8 *, 0x20) + 0x34);
    v.x = 0;
    v.y = (AF(arg0, s16, 0x102) * AF(AF(arg0, void *, 0x20), s16, 0x18)) >> 12;
    v.z = 0;
    ApplyMatrixSV(AF(arg0, u8 *, 0x20) + 0x34, &v, &v);
    AF(arg0, s16, 6) = -v.x;
    snd = AF(arg0, u16, 0xFA) - 0x400;
    AF(arg0, s16, 0xA) = snd - v.y;
    AF(arg0, s16, 0xE) = -v.z;
    SyncModelPos(arg0);
}

void func_sc01_005_80182000(StageActor *arg0) {
    D_sc01_005_801C3A5C[arg0->state]();
}

void func_sc01_005_8018203C(u8 *o, s32 arg1) {
    s16 n;
    u8 *s;
    u8 *d;

    AF(o, s16, 0xFE) = arg1;
    n = arg1;
    s = (u8 *)((s32 *)D_sc01_005_801C36F8[n])[AF(o, s16, 0x70)];
    d = &D_sc01_005_801CDA10;
    while (AF(s, s32, 0) != 0) {
        if (!(AF(s, s32, 0) & 0x1000000)) {
            AF(d, s32, 0) = (s32)D_sc01_005_801CDD30;
        } else {
            AF(d, s32, 0) = (s32)D_sc01_005_801CDE20 + 0x1000000; /* the source table with the flag bit set */
        }
        AF(d, s16, 4) = AF(s, s16, 4);
        AF(d, s16, 6) = AF(s, s16, 6);
        d += 8;
        s += 8;
    }
    AF(d, s32, 0) = 0;
    AF(d, s16, 4) = -1;
    AF(d, s16, 6) = 0;
}

void func_sc01_005_801820F8(u8 *o) {
    s32 *dst;
    s32 *ids;
    u32 w;
    s32 n;
    s32 big;
    S12 *a;
    S12 *ad;
    SV8 *b;
    SV8 *bd;

    dst = (s32 *)&D_sc01_005_801CD9C0;
    ids = (s32 *)D_sc01_005_801C339C[AF(o, s16, 0x70)];
    n = AF(o, s32, 0x94) * 8;
    w = *(u32 *)(((s32 *)D_sc01_005_801C36F8[AF(o, s16, 0xFE)])[AF(o, s16, 0x70)] + n);
    big = w & 0x1000000;
    if (big == 0) {
        ad = D_sc01_005_801CDD30;
        a = (S12 *)w;
    } else {
        bd = D_sc01_005_801CDE20;
        b = (SV8 *)(w & 0xFEFFFFFF);
    }
    while (*ids != 0) {
        if (big == 0) {
            if ((u16)(a->v[1] + 0x1FF) < 0x3FF) {
                *dst++ = *ids;
                *ad++ = *a;
            }
        } else {
            *dst++ = *ids;
            *bd++ = *b;
        }
        ids++;
        a++;
        b++;
    }
    *dst = 0;
}

void func_sc01_005_80182240(StageActor *o) {
    s16 v;

    if (++o->timer < 0x13) {
        v = (0x13 - o->timer) * 0x10;
        if (v > 0xFF) {
            v = 0xFF;
        }
        DrawFadeWhite((u8)v, 0);
    } else {
        o->state = 1;
    }
}

void func_sc01_005_801822B0(StageActor *arg0) {
    s16 *temp_a0;
    s16 *temp_v0;
    s16 *temp_v1;
    s32 temp_a0_2;

    temp_v0 = (s16 *)arg0->ext1;
    temp_v1 = AF(arg0, s16 *, 0xD4);
    temp_a0 = AF(arg0, s16 *, 0xD8);
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
    }
    if (temp_v1 != NULL) {
        *temp_v1 = 0;
    }
    if (temp_a0 != NULL) {
        *temp_a0 = 0;
    }
    temp_a0_2 = arg0->step;
    if (temp_a0_2 != 0) {
        CloseMessage(temp_a0_2);
    }
    FreeActor((s32) arg0);
}

s32 func_sc01_005_80182324(s32 arg0, s32 arg1) {
    StartPlayerMotionAction((s32) &D_sc01_005_801CA6EC);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}
