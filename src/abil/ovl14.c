#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl14_800CB610[];
extern AbilStep D_ovl14_800CB5BC[];
extern AbilStep D_ovl14_800CB5DC[];
void func_ovl14_800CAEB0(u8 *a);
extern void func_80165A20();
extern s32 D_80078EC8;

void func_ovl14_800CAE0C(void) {
    func_800183E0(D_ovl14_800CB610);
}

void func_ovl14_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl14_800CB5BC[AF(a, u8, 0x197)](a);
}

void func_ovl14_800CAE78(u8 *a) {
    func_ovl14_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern void func_80146A6C();
extern void func_80147324();
extern void func_801655E4();
extern s32 func_80165910();

void func_ovl14_800CAEB0(u8 *arg0) {
    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    func_80146A6C(0xA, arg0, 0, 0, 0, 0, 0);
    func_80147324(0x475);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl14_800CAF20(void) {
    if (D_80078EC8 == 0) {
        func_80165A20();
    }
}

void func_ovl14_800CAF4C(void) {
}

void func_ovl14_800CAF54(u8 *a) {
    D_ovl14_800CB5DC[AF(a, u16, 2)](a);
}

extern void func_80146C3C();
extern s32 func_ovl14_800CAF90();
extern u8 D_80078EC1;
extern s32 rand();
extern s32 MulMatrix();
extern s32 RotMatrixYXZ();

extern s8 D_ovl14_800CB5C8[];
extern void func_80017DC4();
extern void func_8012F14C();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80017E68();
extern void func_80017758();

s32 func_ovl14_800CAF90(arg0) u8 *arg0; {
    s8 *p;
    s16 i;
    AVec v;
    AVec r;
    APrim s;
    AMtx a;
    AMtx b;

    v.vx = v.vy = v.vz = AF(arg0, u16, 0x28);
    func_80017DC4(&v, &a);
    v.vx = v.vz = 0;
    v.vy = -0x2C;
    func_8012F14C(arg0 + 0x38, &v, &v);
    func_800D20C0(&v, &r, 5);
    func_800D23D0(&r);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[1].r = s.c[1].b = (AF(arg0, s16, 0x28) >> 6) + 0x70;
    s.c[1].g = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    func_80017E68(&v, &a);
    RotMatrixYXZ(&r, &b);
    MulMatrix(&a, &b);
    p = D_ovl14_800CB5C8;
    i = 0;
    do {
        s.v[0].vx = *p++;
        s.v[0].vy = *p++;
        s.v[2].vx = *p++;
        s.v[2].vy = *p++;
        s.v[3].vx = *p++;
        s.v[3].vy = *p--;
        func_80017758(&s, &a);
        i++;
    } while (i < 4);
}

void func_ovl14_800CB164(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    if (D_80078EC1 == 5) {
        if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
            n = AF(arg0, s32, 0x1C);
            AF(arg0, s32, 0x1C) = n + 1;
            if (n < 8) {
                AF(arg0, u16, 0x28) += 0x120;
            } else {
                AF(arg0, s32, 0x1C) = 0;
                AF(arg0, u16, 2) = 4;
            }
            AF(arg0, AMtx, 0x38) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);
            func_ovl14_800CAF90(arg0);
            return;
        }
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl14_800CB254(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    if (D_80078EC1 == 5) {
        n = AF(arg0, s32, 0x1C);
        AF(arg0, s32, 0x1C) = n + 1;
        if (n < 0xA) {
            AF(arg0, u16, 0x28) += 0x120;
        } else {
            AF(arg0, s16, 0x12) = AF(s, s16, 0x12) >> 1;
            AF(arg0, s16, 0x1A) = AF(s, s16, 0x1A) >> 1;
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x1C) = -0xC0;
            AF(arg0, s16, 0x2A) = 0x500;
            AF(arg0, u16, 2)++;
        }
        AF(arg0, AMtx, 0x38) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);        func_ovl14_800CAF90(arg0);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl14_800CB358(u8 *arg0) {
    s32 r;
    s32 t2;
    s32 t;

    if (D_80078EC1 == 5) {
        if (AF(arg0, s16, 0x28) > AF(arg0, s16, 0x2A)) {
            if (AF(arg0, s32, 0x1C) > 0) {
                AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x400;
                AF(arg0, s32, 0x1C) = -0xA0;
            }
        } else if (AF(arg0, s32, 0x1C) < 0) {
            AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x700;
            AF(arg0, s32, 0x1C) = 0xA0;
        }
        AF(arg0, s16, 0x28) += AF(arg0, s32, 0x1C);
        r = AF(arg0, s16, 0x12);
        AF(arg0, s32, 0x4C) += r;
        AF(arg0, s32, 0x50) -= 3;
        t2 = AF(arg0, s16, 0x1A);
        AF(arg0, s32, 0x54) += t2;
        func_ovl14_800CAF90(arg0, t2, r);
        t = AF(arg0, s32, 0x30);
        AF(arg0, s32, 0x30) = t - 1;
        if (t == 0) {
            AF(arg0, u16, 2)++;
        }
    } else {
        func_80146C3C(arg0);
    }
}

void func_ovl14_800CB470(u8 *arg0) {
    u16 temp_v0;

    if (D_80078EC1 == 5) {
        temp_v0 = AF(arg0, u16, 0x28) - 0x100;
        AF(arg0, u16, 0x28) = temp_v0;
        if ((temp_v0 << 0x10) > 0) {
            AF(arg0, s32, 0x50) = (s32) (AF(arg0, s32, 0x50) - 3);
            func_ovl14_800CAF90();
            return;
        }
    }
    func_80146C3C();
}

void func_ovl14_800CB4D8(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(temp_s1, void *, 0x20);
    AF(arg0, AMtx, 0x38) = AF(temp_v0, AMtx, 0x34);
    func_ovl14_800CAF90((s32) arg0);
    if (D_80078EC1 == 5) {
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == -1) {
            func_80146A6C(0xA, (s32) temp_s1, 0, 0, /* extra? */ 0, /* extra? */ 0x8000, /* extra? */ 0);
            AF(arg0, s32, 0x1C) = 0x18;
        }
    } else {
        func_80146C3C((s32) arg0);
    }
}
