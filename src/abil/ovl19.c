#include "common.h"
#include "abil.h"
#include "gte.h"

extern void func_80162CCC();
extern void func_800183E0();
extern u8 D_ovl19_800CC160[];
extern AbilStep D_ovl19_800CC104[];
extern s32 func_80161104();
void func_ovl19_800CAEC0(s32 arg0);

void func_ovl19_800CAE0C(void) {
    func_800183E0(D_ovl19_800CC160);
}

void func_ovl19_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl19_800CC104[AF(a, u8, 0x197)](a);
}

void func_ovl19_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl19_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_ovl19_800CB4A8();
extern u8 D_80078EC1;
extern AbilStep D_ovl19_800CC124[];
extern AbilStep D_ovl19_800CC130[];
extern void func_80159B3C();
extern s32 func_80161208();
extern void func_80165A78();
extern s32 func_ovl19_800CB170();
void func_ovl19_800CB1A0(void);
extern s32 D_ovl19_800CC580;

extern u16 D_800B99DA;
extern s32 D_ovl19_800CC830;
extern void func_ovl19_800CBF80();
extern s32 rcos();
extern s32 rsin();
extern s32 RotMatrixZ();

extern s32 func_80154A74();

extern u8 D_ovl19_800CC01C;
extern void func_80154274();
extern void func_801655E4();

void func_ovl19_800CAEC0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl19_800CC01C);
    func_801655E4(arg0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern void func_80149374();
extern u8 D_ovl19_800CC5B0;
extern void func_80015978();
extern void func_ovl19_800CB4C8();

extern void func_80146CA0();
extern s32 func_80146E98();
extern s32 func_ovl19_800CB578();
extern s32 func_80015954();
extern void func_80146A6C();
extern void func_ovl19_800CBC0C();

extern u8 D_8011F9D0[];
extern u8 D_ovl19_800CC0D8;
extern void func_80147324();
extern void func_801466F0();

void func_ovl19_800CAF08(u8 *arg0) {
    u8 *p;

    if (func_80161208(arg0) != 0) {
        func_ovl19_800CB170(arg0);
        return;
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80147324(0x479);
        func_80154274(arg0, &D_ovl19_800CC0D8);
        AF(arg0, u8, 0xBE) = 0x10;
        AF(arg0, u8, 0x197)++;
        for (p = D_8011F9D0; p < D_8011F9D0 + 0x820; p += 0x68) {
            if (AF(p, u16, 0) == 4) {
                func_80162CCC(p);
            }
            if (AF(p, u16, 0) == 0xF) {
                func_80162CCC(p);
            }
        }
        func_801466F0(4, arg0, 0, -0x18, -0xF, 0, 0, 1);
        func_801466F0(4, arg0, 0, -0x18, -0xF, 1, 0, 1);
        func_801466F0(4, arg0, 0, -0x18, -0xF, 2, 0, 1);
        func_801466F0(4, arg0, 0, -0x18, -0xF, 3, 0, 1);
        func_801466F0(0xF, arg0, 0, -0x18, -0xF, 0, 0, 0);
    }
}

void func_ovl19_800CB0C8(u8 *arg0) {
    u8 temp_v1_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x20);
    AF(AF(arg0, void *, 0x20), s32 *, 0x80) = &D_ovl19_800CC580;
    func_ovl19_800CB1A0();
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80161208(arg0) != 0) {
        func_ovl19_800CB170(arg0);
        return;
    }
    temp_v1_2 = AF(arg0, u8, 0xBE);
    AF(arg0, u8, 0xBE) = (u8) (temp_v1_2 + 0xFF);
    if (temp_v1_2 == 0) {
        func_ovl19_800CB170(arg0);
        func_80165A78(arg0);
        func_80159B3C(arg0);
    }
}

s32 func_ovl19_800CB170(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    return func_80154A74(arg0, 0x11);
}

extern s32 D_ovl19_800CC834;
extern s32 func_80146578();
extern void func_8001CD9C();
extern void func_800233CC();
extern void func_800D1FC8();

extern void func_80146E90();
extern s32 func_8014659C();
extern void func_8001C2C4();

extern u8 D_801202A0[];
extern u8 D_80126720[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern void func_8014C3A4();

extern s32 D_ovl19_800CC584;
extern s32 D_ovl19_800CC588;
extern u8 D_ovl19_800CC58C;
extern u8 D_ovl19_800CC58D;
extern u8 D_ovl19_800CC58E;
extern s32 D_ovl19_800CC590;
extern s32 D_ovl19_800CC594;
extern s32 D_ovl19_800CC598;
extern u8 D_ovl19_800CC59C;
extern u8 D_ovl19_800CC59D;
extern u8 D_ovl19_800CC59E;
extern s32 D_ovl19_800CC5A0;
extern s32 D_ovl19_800CC5A4;
extern s32 D_ovl19_800CC5A8;
extern u8 D_ovl19_800CC5AC;
extern u8 D_ovl19_800CC5AD;
extern u8 D_ovl19_800CC5AE;

void func_ovl19_800CB1A0(void) {
    u16 *t;
    u8 c;

    t = &D_800B99DA;
    D_ovl19_800CC580 = rsin((*t & 7) << 9);
    D_ovl19_800CC584 = 0;
    D_ovl19_800CC588 = rcos((*t & 7) << 9);
    c = 0xFF;
    D_ovl19_800CC58C = c;
    D_ovl19_800CC58D = 0;
    D_ovl19_800CC58E = 0;
    D_ovl19_800CC590 = rsin((*t & 7) << 9);
    D_ovl19_800CC594 = rcos((*t & 7) << 9);
    D_ovl19_800CC598 = 0;
    D_ovl19_800CC59C = 0;
    D_ovl19_800CC59D = 0;
    D_ovl19_800CC59E = c;
    D_ovl19_800CC5A0 = 0;
    D_ovl19_800CC5A4 = rsin((*t & 7) << 9);
    D_ovl19_800CC5A8 = rcos((*t & 7) << 9);
    D_ovl19_800CC5AC = c;
    D_ovl19_800CC5AD = c;
    D_ovl19_800CC5AE = c;
}

void func_ovl19_800CB2C8(u8 *arg0) {
    if (D_80078EC1 == 0xD) {
        D_ovl19_800CC124[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl19_800CB4A8();
}

void func_ovl19_800CB324(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C2C4(temp_v0);
        AF(temp_v0, s32, 4) |= 0x80000000;
        AF(temp_v0, AMtx, 0x34) = AF(AF(temp_s2, void *, 0x20), AMtx, 0x34);
        func_ovl19_800CB4C8(arg0);
        func_80146E90(arg0, 0x40);
        func_80146CA0(arg0);
        return;
    }
    func_ovl19_800CB4A8(arg0);
}

void func_ovl19_800CB3FC(u8 *arg0) {
    s32 pad[8];
    void *temp_s0;

    AF(arg0, u16, 0x14) = (u16) (AF(arg0, u16, 0x14) - 6);
    func_ovl19_800CB578();
    if (func_80146E98((s32) arg0) != 0) {
        temp_s0 = arg0 + 4;
        func_80015954((s32) (arg0 + 0x10), (s32) temp_s0);
        func_80149374((s32) arg0, (s32) temp_s0);
        func_80146A6C(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0x80001C00);
        func_80146CA0((s32) arg0);
        return;
    }
    func_ovl19_800CBC0C((s32) arg0);
}

void func_ovl19_800CB4A8(void) {
    func_80162CCC();
}

void func_ovl19_800CB4C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s2;
    s32 var_a2;
    void *var_s0;

    temp_s2 = AF(arg0, s32, 0x4C);
    var_s0 = (AF(arg0, s32, 0x50) * 0xA0) + &D_ovl19_800CC5B0;
    func_80015978(arg0 + 4, arg0 + 0x10);
    var_a2 = 0;
    do {
        AF(var_s0, AVec, 0x0) = AF(arg0, AVec, 0x10);
        var_a2 += 1;
        var_s0 += 8;
    } while (var_a2 < 0x14);
    func_80149374(temp_s2, arg0 + 4, var_a2);
    AF(arg0, s16, 0x60) = 0;
    AF(arg0, s16, 0x64) = (s16) (AF(arg0, s32, 0x50) << 0xA);
}

extern void func_ovl19_800CBF60();

extern ACol D_ovl19_800CC114[];
extern void func_80013F3C();
extern s32 func_800130D0();
extern void func_ovl19_800CB9F8();

s32 func_ovl19_800CB578(u8 *arg0) {
    AVec pos;
    AMtx m;
    AVec sc;
    ACol c[2];
    u8 *mo;
    AVec *p;
    u16 *q;
    s16 r;
    s32 i;
    s32 k;

    mo = AF(arg0, u8 *, 0x20);
    func_80013F3C(&m);
    RotMatrixZ(AF(arg0, s16, 0x64), &m);
    gte_SetRotMatrix(mo + 0x34);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    q = (u16 *) &m + 1;
    gte_ldclmv(q);
    gte_rtir();
    gte_stclmv(q);
    q = (u16 *) &m + 2;
    gte_ldclmv(q);
    gte_rtir();
    gte_stclmv(q);
    m.t[0] = AF(mo, s32, 0x48);
    m.t[1] = AF(mo, s32, 0x4C);
    m.t[2] = AF(mo, s32, 0x50);
    AF(arg0, u16, 0x64) = (AF(arg0, u16, 0x64) + 0x71) & 0xFFF;
    pos = AF(arg0, AVec, 0x10);
    r = rsin(AF(arg0, s16, 0x62)) / 128;
    pos.vx += r * rcos(AF(arg0, s16, 0x60)) / 4096;
    pos.vy += r * rsin(AF(arg0, s16, 0x60)) / 4096;
    k = AF(arg0, s32, 0x50);
    AF(arg0, u16, 0x60) = (AF(arg0, u16, 0x60) + 0xE3) & 0xFFF;
    AF(arg0, u16, 0x62) = (AF(arg0, u16, 0x62) + 0x38) & 0xFFF;
    p = ((AVec (*)[20]) &D_ovl19_800CC5B0)[k];
    c[0] = D_ovl19_800CC114[k];
    c[1] = D_ovl19_800CC114[AF(arg0, s32, 0x50)];
    sc.vx = sc.vy = sc.vz = 0x1000;
    func_ovl19_800CB9F8(&pos, p, &m, c, &sc);
    p = ((AVec (*)[20]) &D_ovl19_800CC5B0)[AF(arg0, s32, 0x50)];
    for (i = 0; i < 0x12; i += 2) {
        c[0] = c[1];
        c[1].r = func_800130D0(c[1].r, 0, 0xC);
        c[1].g = func_800130D0(c[1].g, 0, 0xC);
        c[1].b = func_800130D0(c[1].b, 0, 0xC);
        sc.vx = sc.vy = sc.vz = sc.vz - 0x100;
        func_ovl19_800CB9F8(p, p + 2, &m, c, &sc);
        p += 2;
    }
    p = &((AVec (*)[20]) &D_ovl19_800CC5B0)[AF(arg0, s32, 0x50)][17];
    c[0] = c[1];
    c[1].r = func_800130D0(c[1].r, 0, 0xA);
    c[1].g = func_800130D0(c[1].g, 0, 0xA);
    c[1].b = func_800130D0(c[1].b, 0, 0xA);
    sc.vx = sc.vy = sc.vz = sc.vz - 0x100;
    func_ovl19_800CB9F8(p, p + 2, &m, c, &sc);
    p = &((AVec (*)[20]) &D_ovl19_800CC5B0)[AF(arg0, s32, 0x50)][19];
    for (i = 0; i < 0x13; i++) {
        p[0] = p[-1];
        p--;
    }
    *p = pos;
}

typedef struct { AVec v[4]; s32 c[4]; s32 code; } APrimW;
extern void func_80017DC4();
extern void func_80017758();

void func_ovl19_800CB9F8(u16 *a, u16 *b, AMtx *mt, s32 *c, AVec * volatile rot) {
    APrimW s;
    AMtx m;
    u16 *q;
    AVec *r;
    APrimW *ps;

    r = rot; /* MATCH-TRICK: rot is a volatile parameter, read once here: its entry load gets no REG_EQUIV, so combine cannot sink it past the stores into the a0 copy */
    s.v[0].vx = a[0] - 8;
    s.v[0].vy = a[1];
    s.v[0].vz = a[2];
    s.v[1].vx = a[0] + 8;
    s.v[1].vy = a[1];
    s.v[1].vz = a[2];
    s.v[2].vx = b[0] - 8;
    s.v[2].vy = b[1];
    s.v[2].vz = b[2];
    s.v[3].vx = b[0] + 8;
    s.v[3].vy = b[1];
    s.v[3].vz = b[2];
    s.c[0] = c[0];
    s.c[1] = c[0];
    s.c[2] = c[1];
    s.c[3] = c[1];
    s.code = 0x50000000;
    func_80017DC4(r, &m);
    ps = &s;
    gte_SetRotMatrix(mt);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    q = (u16 *) &m + 1;
    gte_ldclmv(q);
    gte_rtir();
    gte_stclmv(q);
    q = (u16 *) &m + 2;
    gte_ldclmv(q);
    gte_rtir();
    gte_stclmv(q);
    m.t[0] = mt->t[0];
    m.t[1] = mt->t[1];
    m.t[2] = mt->t[2];
    func_80017758(ps, &m);
}

void func_ovl19_800CBC0C(u8 *arg0) {
    AVec v;
    AVec w;
    u8 *p;

    func_80015978(arg0 + 4, &w);
    func_80015954(arg0 + 0x10, arg0 + 4);
    AF(arg0, s16, 0xA) = 0;
    func_80149374(arg0, arg0 + 4);
    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, 0x1E, 0x2000) != 0 && AF(p, s16, 0xAA) == 0 && func_8014C278(arg0, p, 0x40) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, p, 0x1E, &v);
        }
    }
    func_80015954(&w, arg0 + 4);
}

void func_ovl19_800CBD0C(u8 *arg0) {
    if (D_80078EC1 == 0xD) {
        D_ovl19_800CC130[AF(arg0, u16, 2)]();
        return;
    }
    func_80162CCC();
}

void func_ovl19_800CBD68(u8 *arg0) {
    void *temp_s3;
    void *temp_v0;
    u8 *p;

    temp_s3 = AF(arg0, void *, 0x4C);
    p = &D_ovl19_800CC830;
    temp_v0 = func_80146578(arg0);
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CD9C(temp_v0, p);
        func_800233CC(p, 0x60);
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
        D_ovl19_800CC834 = 0;
        func_ovl19_800CBF80(arg0);
        AF(temp_v0, s32, 4) |= 0x50000000;
        func_80149374(temp_s3, arg0 + 4);
        func_800D1FC8(arg0, 6);
        func_80146CA0(arg0);
        return;
    }
    func_80162CCC(arg0);
}

void func_ovl19_800CBE38(u8 *arg0) {
    s32 t;
    s16 v;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    func_ovl19_800CBF80(arg0);
    t = AF(temp_s1, u16, 0x18) - 0x600;
    v = t;
    if (v < 0x1000) {
        v = 0x1000;
        func_80146E90(arg0, 0x10);
        AF(arg0, s16, 0x60) = v;
        func_80146CA0(arg0);
    }
    AF(temp_s1, s16, 0x1A) = v;
    AF(temp_s1, s16, 0x18) = v;
}

void func_ovl19_800CBEC0(u8 *arg0) {
    s32 t;
    s16 v;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98(arg0) != 0) {
        func_ovl19_800CBF60(arg0);
        return;
    }
    func_ovl19_800CBF80(arg0);
    t = AF(arg0, u16, 0x60) - 0x100;
    AF(arg0, s16, 0x60) = t;
    if (D_800B99DA & 1) {
        v = (s16) t / 2;
    } else {
        v = t;
    }
    AF(temp_s1, s16, 0x1A) = v;
    AF(temp_s1, s16, 0x18) = v;
}

void func_ovl19_800CBF60(void) {
    func_80162CCC();
}

void func_ovl19_800CBF80(void) {
    s32 var_v1;

    var_v1 = 0xFF0000;
    if (!(D_800B99DA & 3)) {
        var_v1 = 0xFFFF;
    }
    D_ovl19_800CC830 = var_v1;
}
