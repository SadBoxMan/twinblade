#include "common.h"
#include "abil.h"
#include "gte.h"

extern s32 D_ovl20_800CBB40;
extern s32 D_ovl20_800CBB38;
extern void func_80146EC0();
extern void QueueImage();
extern u8 D_ovl20_800CBBB8[];
extern u8 D_ovl20_800CBB78[];
extern AbilStep Firefly_Steps[];
void func_ovl20_800CAEC0(u8 *a);
extern void func_80162CCC();

void func_ovl20_800CAE0C(void) {
    QueueImage(D_ovl20_800CBBB8);
    QueueImage(D_ovl20_800CBB78);
}

void Firefly_Update(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    Firefly_Steps[AF(a, u8, 0x197)](a);
}

void func_ovl20_800CAE88(u8 *a) {
    func_ovl20_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_80147324();
extern void func_801655E4();
extern s32 func_80165910();
extern void func_801466F0();
extern void func_ovl20_800CB5D4();
extern u8 D_80078EC1;
extern AbilStep D_ovl20_800CBB24[];
extern void func_ovl20_800CB8A4();
extern AbilStep D_ovl20_800CBB48[];
extern s32 rand();

void func_ovl20_800CAEC0(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
        func_80147324(0x7B8);
    }
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl20_800CAF10(u8 *arg0) {
    func_801466F0(0xB, arg0, 0, 0, 0, 0, 0, 0);
    AF(arg0, s8, 0xBE) = 0;
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern s32 Firefly_ClearLightTarget();
extern s32 RotMatrixZ();
extern s32 SetRotMatrix();
extern s32 SetTransMatrix();

extern s32 func_8014C168();
extern void PosToSVec();
extern s32 func_8012EFB8();
extern s32 func_8014C088();
extern void func_80165A20();
extern s32 func_ovl20_800CB8C4();

extern void Firefly_SetLightTarget();

extern void func_80146CA0();
extern void Firefly_DrawRay();
extern s32 EaseValueFrac();

extern u8 g_Status;

void Firefly_StepActive(u8 *arg0) {
    u8 *p;

    p = &g_Status;
    if (func_8014C088(arg0, 0xB) == 0 || AF(arg0, u8, 0xBE) != 0) {
        Firefly_SetLightTarget(arg0);
    }
    if (AF(p, s32, 0x50) == 0) {
        func_801466F0(0xB, arg0, 0, 0, 0, 1, 0, 0);
        func_80147324(0x7DE);
        AF(arg0, u8, 0xBE) = 0;
        AF(arg0, u8, 0x197)++;
    }
}

void Firefly_StepEnd(s32 arg0) {
    if (func_8014C088(arg0, 0xB) == 0) {
        AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
        func_80165A20(arg0);
        return;
    }
    if (AF(arg0, u8, 0xBE) != 0) {
        Firefly_ClearLightTarget(arg0);
    }
}

void func_ovl20_800CB078(void) {
    Firefly_ClearLightTarget();
}

void Firefly_SetLightTarget(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8014C168(arg0, 0x15C);
    if (temp_v0 != 0) {
        temp_v0_2 = func_8014C088(arg0, 1);
        if ((temp_v0_2 != 0) && (AF(temp_v0_2, u16, 2) != 0)) {
            AF(temp_v0, s32, 0xCC) = temp_v0_2;
            return;
        }
        AF(temp_v0, s32, 0xCC) = arg0;
    }
}

s32 Firefly_ClearLightTarget(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014C168(arg0, 0x15C);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0xCC) = 0;
    }
    return temp_v0;
}

void Firefly_GlowUpdate(u8 *arg0) {
    if (D_80078EC1 == 0x16) {
        D_ovl20_800CBB24[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl20_800CB5D4();
}

extern u16 D_800B99DA;
extern void SetIdentityRot();
extern void DrawPrimGT3Screen();
/* a textured triangle on the stack for DrawPrimGT3Screen: three points, three UV pairs, three colours, the code, the page */
typedef struct { AVec p[3]; u16 uv[6]; s32 c[3]; s32 code; u8 tp; } AFT3;

extern void Firefly_FollowMusashi();

extern void func_80146E90();

void func_ovl20_800CB190(u8 *arg0) {
    s32 temp_s0;
    s32 t;

    Firefly_FollowMusashi();
    if (AF(arg0, s32, 0x50) == 0) {
        temp_s0 = (rand() & 0xF) << 8;
        func_801466F0(0xC, arg0, 0, 0, 0, temp_s0, 0, 0);
        t = temp_s0 + 0x555;
        func_801466F0(0xC, arg0, 0, 0, 0, t, 0, 0);
        t = temp_s0 + 0xAAA;
        func_801466F0(0xC, arg0, 0, 0, 0, t, 0, 0);
        func_80146E90(arg0, 8);
    } else {
        func_80146E90(arg0, 0);
    }
    func_80146CA0(arg0);
}

extern u8 D_ovl20_800CBBD8[];
extern u8 D_ovl20_800CBBD9;
extern u8 D_ovl20_800CBBDA;
extern u8 D_ovl20_800CBBDB;
extern u8 D_ovl20_800CBBDC;
extern u8 D_ovl20_800CBBDD;
extern u8 D_ovl20_800CBBDE;
extern u8 D_ovl20_800CBBDF;
extern s32 func_80146E98();
extern s32 func_80146578();
extern void func_8001CD9C();
extern void SetShapeCircle();

static inline void func_ovl20_800CB278_inline(u8 *arg0, u8 *p, u8 *m) {
    if (AF(arg0, s32, 0x50) == 0) {
        p[0] = 0xFF;
        D_ovl20_800CBBD9 = 0xFF;
        D_ovl20_800CBBDA = 0xFF;
        D_ovl20_800CBBDC = 0;
        D_ovl20_800CBBDD = 0;
        D_ovl20_800CBBDE = 0xFF;
        AF(m, s32, 4) |= 0x50000000;
        return;
    }
    p[0] = 0;
    D_ovl20_800CBBDA = 0xC0;
    D_ovl20_800CBBD9 = 0;
    D_ovl20_800CBBDC = 0;
    D_ovl20_800CBBDD = 0;
    D_ovl20_800CBBDE = 0x80;
    AF(m, s32, 4) |= 0x50000000;
}

void func_ovl20_800CB278(u8 *arg0) {
    u8 *p;
    u8 *o;
    u8 *t;

    p = D_ovl20_800CBBD8;
    if (func_80146E98(arg0) != 0) {
        t = (u8 *) func_80146578();
        o = t;
        AF(arg0, u8 *, 0x20) = t;
        if (o != 0) {
            func_8001CD9C(o, p);
            SetShapeCircle(p, 0x80);
            AF(o, s16, 0x18) = 0;
            AF(o, s16, 0x1A) = 0;
            AF(arg0, s16, 0x60) = 0;
            D_ovl20_800CBBDB = 0;
            D_ovl20_800CBBDF = 0;
            func_ovl20_800CB278_inline(arg0, p, o);
            func_80146CA0(arg0);
            return;
        }
        func_80162CCC(arg0);
    }
}

void func_ovl20_800CB3C0(u8 *arg0) {
    s16 temp_v1;
    u16 temp_v0;
    void *temp_s0;
    u8 *p;

    temp_s0 = AF(arg0, void *, 0x20);
    Firefly_FollowMusashi(arg0);
    if (AF(arg0, s32, 0x50) != 0) {
        AF(temp_s0, u16, 0x1E) = (u16) (AF(temp_s0, u16, 0x1E) + 0x100);
    }
    temp_v0 = AF(arg0, u16, 0x60) + 0x40;
    AF(arg0, u16, 0x60) = temp_v0;
    temp_v1 = AF(temp_s0, u16, 0x1A) + temp_v0;
    AF(temp_s0, u16, 0x1A) = (u16) temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    if (temp_v1 >= 0x1001) {
        AF(temp_s0, u16, 0x1A) = 0x1000U;
        AF(temp_s0, s16, 0x18) = 0x1000;
        p = arg0;
        AF(AF(p, void *, 0x4C), u8, 0xBE) = 1;
        func_80146CA0(p);
    }
}

void func_ovl20_800CB470(u8 *arg0) {
    u8 *p;
    u8 *m;
    u16 t;

    p = D_ovl20_800CBBD8;
    m = AF(arg0, u8 *, 0x20);
    Firefly_FollowMusashi(arg0);
    p[0] = EaseValueFrac(p[0], 0, 0xA, 1);
    D_ovl20_800CBBD9 = EaseValueFrac(D_ovl20_800CBBD9, 0, 0xA, 1);
    D_ovl20_800CBBDA = EaseValueFrac(D_ovl20_800CBBDA, 0, 0xA, 1);
    D_ovl20_800CBBDC = EaseValueFrac(D_ovl20_800CBBDC, 0, 0xA, 1);
    D_ovl20_800CBBDD = EaseValueFrac(D_ovl20_800CBBDD, 0, 0xA, 1);
    D_ovl20_800CBBDE = EaseValueFrac(D_ovl20_800CBBDE, 0, 0xA, 1);
    if (AF(arg0, s32, 0x50) != 0) {
        t = AF(m, u16, 0x1E) + 0x20;
        AF(m, u16, 0x1E) = t;
        if ((s16) t > 0x1000) {
            AF(m, u16, 0x1E) = 0x1000;
        }
    }
    if (AF(p, s32, 0) == 0 && AF(&D_ovl20_800CBBDC, s32, 0) == 0) {
        func_80146CA0(arg0);
    }
}

void func_ovl20_800CB5D4(void) {
    func_80162CCC();
}

void Firefly_FollowMusashi(u8 *a) {
    func_80146EC0(*(s32 *)(a + 0x4c), (a + 0x4), &D_ovl20_800CBB40, &D_ovl20_800CBB38);
}

void Firefly_RayUpdate(u8 *arg0) {
    if (D_80078EC1 == 0x16) {
        D_ovl20_800CBB48[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl20_800CB8A4();
}

void func_ovl20_800CB688(u8 *arg0) {
    s32 t;

    t = -0x100;
    AF(arg0, s16, 0x12) = t;
    AF(arg0, s16, 0x16) = t;
    t = AF(arg0, s32, 0x50);
    AF(arg0, s16, 0x14) = 8;
    AF(arg0, s16, 0x10) = 0;
    AF(arg0, u8, 0x58) = 0xFF;
    AF(arg0, u8, 0x59) = 0xFF;
    AF(arg0, u8, 0x5A) = 0xFF;
    AF(arg0, u8, 0x5B) = 0;
    AF(arg0, u8, 0x5C) = 0;
    AF(arg0, u8, 0x5D) = 0;
    AF(arg0, u8, 0x5E) = 0xFF;
    AF(arg0, u8, 0x5F) = 0;
    AF(arg0, s16, 0x18) = t;
    func_80146CA0(arg0);
}

void func_ovl20_800CB6E8(u8 *arg0) {
    s32 sp20;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) + 0x18;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((s16) temp_v0 >= -7) {
        AF(arg0, s16, 0x12) = -8;
        func_80146CA0(arg0);
    }
    AF(arg0, u16, 0x18) += 0xB;
    func_ovl20_800CB8C4(arg0, &sp20);
    Firefly_DrawRay(arg0, &sp20, arg0 + 0x10, arg0 + 0x14, arg0 + 0x58, arg0 + 0x5C, arg0 + 0x18);
}

void func_ovl20_800CB77C(u8 *arg0) {
    s32 sp20;

    AF(arg0, u16, 0x14) = (u16) (AF(arg0, u16, 0x14) + 8);
    AF(arg0, u8, 0x58) = EaseValueFrac((s32) AF(arg0, u8, 0x58), 0, 0xA, 1);
    AF(arg0, u8, 0x59) = EaseValueFrac((s32) AF(arg0, u8, 0x59), 0, 0xA, 1);
    AF(arg0, u8, 0x5A) = EaseValueFrac((s32) AF(arg0, u8, 0x5A), 0, 0xA, 1);
    AF(arg0, u8, 0x5C) = EaseValueFrac((s32) AF(arg0, u8, 0x5C), 0, 0xA, 1);
    AF(arg0, u8, 0x5D) = EaseValueFrac((s32) AF(arg0, u8, 0x5D), 0, 0xA, 1);
    AF(arg0, u8, 0x5E) = EaseValueFrac((s32) AF(arg0, u8, 0x5E), 0, 0xA, 1);
    if (AF(arg0, s32, 0x58) == 0) {
        if (AF(arg0, s32, 0x5C) == 0) {
            func_80146CA0((s32) arg0);
        }
    }
    AF(arg0, u16, 0x18) = (u16) (AF(arg0, u16, 0x18) + 0x2D);
    func_ovl20_800CB8C4((s32) arg0, (s32) &sp20);
    Firefly_DrawRay((s32) arg0, (s32) &sp20, (s32) (arg0 + 0x10), (s32) (arg0 + 0x14), /* extra? */ (arg0 + 0x58), /* extra? */ (arg0 + 0x5C), /* extra? */ (arg0 + 0x18));
}

void func_ovl20_800CB8A4(void) {
    func_80162CCC();
}

s32 func_ovl20_800CB8C4(s32 arg0, s32 arg1) {
    PosToSVec(AF(arg0, s32, 0x4C) + 4, arg1);
    return func_8012EFB8(arg1, arg1);
}

void Firefly_DrawRay(u8 *arg0, s16 *pos, u16 *a, u16 *b, s32 *c1, s32 *c2, s16 *ang) {
    AFT3 s;
    AVec v[3];
    AMtx m;
    AFT3 *ps;
    s32 x;
    s32 w;
    s32 y;

    SetIdentityRot(&m);
    RotMatrixZ(*ang, &m);
    m.t[0] = pos[0];
    m.t[1] = pos[1];
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    s.code = 0x50000000;
    s.c[0] = *c1;
    s.c[1] = *c2;
    w = *c2;
    v[0].vx = a[0];
    v[0].vy = a[1];
    v[0].vz = 0;
    v[1].vx = a[0] - b[0];
    v[1].vy = b[1];
    v[1].vz = 0;
    v[2].vx = a[0] + b[0];
    v[2].vy = b[1];
    v[2].vz = 0;
    s.c[2] = w;
    ps = &s;
    gte_ldv0(&v[0]);
    gte_rtv0tr();
    gte_stsv(ps);
    gte_ldv0(&v[1]);
    gte_rtv0tr();
    gte_stsv(&s.p[1]);
    gte_ldv0(&v[2]);
    gte_rtv0tr();
    gte_stsv(&s.p[2]);
    s.uv[1] = 0x13F;
    s.uv[3] = 0x100;
    s.uv[5] = 0x17F;
    s.tp = 0x19;
    s.p[0].vz = 1;
    x = (D_800B99DA << 2) & 0x3F;
    s.uv[0] = x | 0x680;
    y = x + 0x6BF;
    s.uv[2] = y;
    s.uv[4] = y;
    DrawPrimGT3Screen(ps);
}
