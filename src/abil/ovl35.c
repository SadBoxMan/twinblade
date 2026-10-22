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

INCLUDE_ASM("asm/abil/ovl35/nonmatchings/ovl35", func_ovl35_800CCDE8);

INCLUDE_ASM("asm/abil/ovl35/nonmatchings/ovl35", func_ovl35_800CD314);

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
