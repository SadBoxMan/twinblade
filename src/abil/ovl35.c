#include "common.h"
#include "abil.h"

void func_ovl35_800CCB20(void) {
}

extern AbilStep D_ovl35_800CD6C8[];
extern AbilStep D_ovl35_800CD6D0[];
extern AbilStep D_ovl35_800CD6D8[];

extern void func_80146994();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 RotTransSV();
extern s32 VectorNormalSS();

void func_ovl35_800CCB28(u8 *arg0) {
    func_80146994(0x3B, arg0, 0, 0);
    AF(arg0, s16, 0x1C8) = 0xBA;
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl35_800CCB78(u8 *a) {
    *(s32 *)(a + 0x2c) = 1;
}

void func_ovl35_800CCB84(u8 *a) {
    D_ovl35_800CD6C8[AF(a, u16, 2)](a);
}

extern u8 D_ovl35_800CD6E0[];
extern s32 func_ovl35_800CCDE8();
extern void func_80016714();
extern u8 D_8011D030[];
extern s32 func_80146C3C();

s16 func_ovl35_800CCBC0(void);

extern u8 D_ovl35_800CD7A4[];
extern s32 func_801465C0();
extern void func_8001CD50();
extern void func_ovl35_800CD314();

extern AMtx D_800AE620;
extern void func_80017758();

s16 func_ovl35_800CCBC0(void) {
    APrim s;
    AMtx m;
    s16 (*p)[6];
    s16 *e;
    s16 n;
    s16 i;
    s16 k;
    s32 b;
    s16 h;

    m = D_800AE620;
    s.code = 0x50000000;
    if (D_ovl35_800CD6E0[0] == 0) {
        return 0;
    }
    n = 0;
    p = (s16 (*)[6]) (D_ovl35_800CD6E0 + 4);
    i = D_ovl35_800CD6E0[1];
    b = D_ovl35_800CD6E0[3];
    k = D_ovl35_800CD6E0[2];
    h = b >> 1;
    while (--k != -1) {
        e = p[i];
        s.v[0].vx = e[0];
        s.v[0].vy = e[1];
        s.v[0].vz = e[2];
        s.v[1].vx = e[3];
        s.v[1].vy = e[4];
        n++;
        i--;
        s.v[1].vz = e[5];
        s.c[0].r = s.c[1].r = b;
        s.c[0].g = s.c[1].g = s.c[0].b = s.c[1].b = h;
        if (i < 0) {
            i = 0xF;
        }
        e = p[i];
        s.v[2].vx = e[0];
        s.v[2].vy = e[1];
        s.v[2].vz = e[2];
        s.v[3].vx = e[3];
        s.v[3].vy = e[4];
        b -= 0x10;
        h -= 0x10;
        s.v[3].vz = e[5];
        if (h < 0) {
            h = 0;
        }
        s.c[2].r = s.c[3].r = b;
        s.c[2].g = s.c[3].g = s.c[2].b = s.c[3].b = h;
        func_80017758(&s, &m);
    }
    return n;
}

extern void func_80148534();
extern void func_80165FA4();
extern void func_80149350();
typedef struct { u8 on, idx, cnt, alpha; s16 e[16][6]; } ARing;

s32 func_ovl35_800CCDE8(o, mode, n)
u8 *o;
s16 mode;
s16 n;
{
    AVec s;
    AVec t;
    AVec a;
    AVec b;
    s32 flag;
    u8 *m;
    ARing *r;

    r = (ARing *)D_ovl35_800CD6E0;
    m = AF(o, u8 *, 0x34);
    switch (mode) {
    case 0:
        r->on = 1;
        r->cnt = 0;
        r->idx = 0;
        r->alpha = 0xF4;
        break;
    case 1:
        a.vx = r->e[r->idx][0];
        a.vy = r->e[r->idx][1];
        a.vz = r->e[r->idx][2];
        b.vx = r->e[r->idx][3];
        b.vy = r->e[r->idx][4];
        b.vz = r->e[r->idx][5];
        if (++r->idx >= 0x10) {
            r->idx = 0;
        }
        if (r->cnt < 0xF) {
            r->cnt++;
        }
        break;
    case 2:
        r->alpha -= 0x10;
        if (r->alpha < 0x10) {
            r->on = 0;
            return 1;
        }
        if (r->cnt >= 2 && (r->alpha >> 4) < r->cnt) {
            r->cnt--;
        }
        return 0;
    }
    func_80148534(&s, &t);
    func_80165FA4(m, &s, &t);
    func_80149350(m, &s, &s);
    RotTransSV(&t, &t, &flag);
    if (mode != 0) {
        a.vx = (s.vx + a.vx) >> 1;
        a.vy = (s.vy + a.vy) >> 1;
        a.vz = (s.vz + a.vz) >> 1;
        b.vx = (t.vx + b.vx) >> 1;
        b.vy = (t.vy + b.vy) >> 1;
        b.vz = (t.vz + b.vz) >> 1;
        a.vx -= b.vx;
        a.vy -= b.vy;
        a.vz -= b.vz;
        VectorNormalSS(&a, &a);
        a.vx = b.vx + a.vx / n;
        a.vy = b.vy + a.vy / n;
        a.vz = b.vz + a.vz / n;
        r->e[r->idx][0] = a.vx;
        r->e[r->idx][1] = a.vy;
        r->e[r->idx][2] = a.vz;
        r->e[r->idx][3] = b.vx;
        r->e[r->idx][4] = b.vy;
        r->e[r->idx][5] = b.vz;
        if (++r->idx >= 0x10) {
            r->idx = 0;
        }
        if (r->cnt < 0xF) {
            r->cnt++;
        }
    }
    r->e[r->idx][0] = s.vx;
    r->e[r->idx][1] = s.vy;
    r->e[r->idx][2] = s.vz;
    r->e[r->idx][3] = t.vx;
    r->e[r->idx][4] = t.vy;
    r->e[r->idx][5] = t.vz;
    return 0;
}

extern AMtx D_8011F75C;
extern void func_80147324();
extern void func_800233CC();
extern AModel *D_8011F758[];

void func_ovl35_800CD314(u8 *arg0) {
    s32 t;
    AModel *m;

    t = AF(arg0, s32, 0x1C);
    m = AF(arg0, AModel *, 0x20);
    if (t < 0x20) {
        if (!(t & 7)) {
            AF(arg0, AMtx, 0x38) = D_8011F75C;
            m->unk04 = (m->unk04 & 0x7FFFFFFF) | (D_8011F758[0]->unk04 & 0x80000000);
            m->scale.vx = D_8011F758[0]->scale.vx;
            m->scale.vy = D_8011F758[0]->scale.vy;
            AF(arg0, s16, 6) = AF(arg0, s32, 0x4C);
            AF(arg0, s16, 0xA) = AF(arg0, s32, 0x50) - 8;
            AF(arg0, s32, 0x30) = 0;
            AF(arg0, s16, 0xE) = AF(arg0, s32, 0x54);
            func_80147324(0x8E2);
        }
        AF(arg0, s32, 0x30) += 0x10;
        func_800233CC(D_ovl35_800CD7A4, AF(arg0, s32, 0x30) & 0xFFFF);
        AF(arg0, s32, 0x1C)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl35_800CD458(u8 *a) {
    D_ovl35_800CD6D0[AF(a, u16, 2)](a);
}

void func_ovl35_800CD494(u8 *a) {
    D_ovl35_800CD6D8[AF(a, u16, 2)](a);
}

void func_ovl35_800CD4D0(u8 *arg0) {
    s16 i;
    u8 *p;

    AF(arg0, s32, 0x2C) = 0;
    for (i = 0, p = D_8011D030; i < 0x1E; i++, p += 0x58) {
        if (p != arg0 && AF(p, u16, 0) == 0x3B) {
            func_80146C3C(p);
        }
    }
    func_80016714(&D_ovl35_800CD6E0, 0xC4);
    func_ovl35_800CCDE8(arg0, 0, 0);
    AF(arg0, u16, 2)++;
}

void func_ovl35_800CD58C(u8 *arg0) {
    if (AF(arg0, s32, 0x2C) != 0) {
        func_ovl35_800CCDE8((s32) arg0, 1, 0x37);
        func_ovl35_800CCBC0();
        AF(arg0, s32, 0x2C) = 0;
        return;
    }
    func_80016714((s32) &D_ovl35_800CD6E0, 0xC4);
    func_ovl35_800CCDE8((s32) arg0, 0, 0);
}

void func_ovl35_800CD5F8(u8 *arg0) {
    u8 *o;
    u8 *p;

    o = (u8 *) func_801465C0();
    if (o != NULL) {
        p = D_ovl35_800CD7A4;
        func_8001CD50(o, p);
        AF(arg0, u8 *, 0x20) = o;
        AF(o, u8 *, 0x34) = arg0 + 0x38;
        AF(o, s16, 0x1E) = -0x7400;
        AF(o, s32, 4) |= 0x50000000;
        D_ovl35_800CD7A4[0] = D_ovl35_800CD7A4[1] = 0;
        D_ovl35_800CD7A4[4] = D_ovl35_800CD7A4[5] = 0x40;
        D_ovl35_800CD7A4[2] = 0;
        D_ovl35_800CD7A4[6] = 0x50;
        func_ovl35_800CD314(arg0);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}
