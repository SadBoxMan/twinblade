#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl27_800CB964[];
extern u8 D_ovl27_800CB924[];
extern AbilStep D_ovl27_800CB8A4[];
extern s32 func_80161104();
void func_ovl27_800CAED0(s32 arg0);
extern void func_80162CCC();

void func_ovl27_800CAE0C(void) {
    func_800183E0(D_ovl27_800CB964);
    func_800183E0(D_ovl27_800CB924);
}

void func_ovl27_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl27_800CB8A4[AF(a, u8, 0x197)](a);
}

void func_ovl27_800CAE88(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl27_800CAED0(a);
        AF(a, u8, 0x197)++;
    }
}

extern s32 RotMatrixZYX();
extern void func_ovl27_800CB76C();
extern void func_80146C3C();
extern u8 D_80078EC1;
extern AbilStep D_ovl27_800CB8F0[];
extern void func_ovl27_800CB384();
extern void func_ovl27_800CB3A4();
extern AbilStep D_ovl27_800CB8BC[];
extern void func_80146608();
extern void func_80155FF8();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 func_80161208();

extern u8 D_ovl27_800CB858;
extern void func_80154274();
extern void func_801655E4();
extern void func_80156648();

void func_ovl27_800CAED0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl27_800CB858);
    func_801655E4(arg0);
    func_80156648(arg0);
    AF(arg0, u8, 0x1AA) = 1;
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl27_800CAF24(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (!(temp_v1 & 0x4000)) {
        if ((temp_v1 & 0xFFFF) == 0x8000) {
            func_801599A4(arg0);
            func_80159B3C(arg0);
            return;
        }
        goto block_4;
    }
    func_80146608(0x21, arg0, 0, -0x18, 0, 0, 0, 8, 1);
block_4:
    if (func_80161208(arg0) == 0) {
        func_80155FF8(arg0, AF(arg0, u8, 0x1AA));
    }
}

void func_ovl27_800CAFD4(u8 *a) {
    *(s32 *)(a + 0x44) = (*(s32 *)(a + 0x44) & -3);
}

void func_ovl27_800CAFE8(u8 *arg0) {
    if (D_80078EC1 == 0xB) {
        D_ovl27_800CB8BC[AF(arg0, u16, 2)]();
        func_ovl27_800CB3A4(arg0);
        return;
    }
    func_ovl27_800CB384(arg0);
}

extern u8 D_80114EB0;
extern AVec D_80126B18;
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_80013E94();
extern void func_80146A6C();

extern u8 D_ovl27_800CB8FC;
extern void func_800139C8();

extern void func_80015978();
extern void func_8012F14C();
extern s32 func_ovl27_800CB4EC();
extern void func_80015954();

extern void func_80146CA0();
extern s32 func_80012ABC();
extern void func_8001382C();
extern void func_80162FC0();
extern void func_80147324();
extern u8 D_ovl27_800CB8CC[];
extern s32 func_80146E98();
extern s32 func_ovl27_800CB3D8();

extern u8 D_ovl27_800CBA88;
extern u8 D_ovl27_800CBA89;
extern u8 D_ovl27_800CBA8A;
extern u8 D_ovl27_800CBA8C;
extern u8 D_ovl27_800CBA8D;
extern u8 D_ovl27_800CBA8E;
extern s32 func_801465C0();
extern void func_8001CD50();
extern void func_800233CC();

extern u8 D_ovl27_800CB8B0;
extern s32 D_ovl27_800CB984;
extern u8 D_ovl27_800CB988;
extern s32 func_80146578();
extern void func_8001CB6C();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80146E90();

void func_ovl27_800CB058(u8 *arg0) {
    u8 *s2;
    u8 *o;
    s32 n;
    u32 h;

    s2 = AF(arg0, u8 *, 0x4C);
    o = (u8 *) func_80146578();
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001CB6C(o, &D_ovl27_800CB8B0, 0x1A0, 0x100);
        AF(o, u8, 0x27) = 0x19;
        AF(o, s32, 4) = (AF(o, s32, 4) | 0x50001000) & ~0x40;
        n = D_ovl27_800CB984++;
        h = AF(((u8 **) s2)[8], u16, 0x12);
        AF(o, s16, 0x10) = 0x400;
        AF(o, u8 *, 0x34) = &D_ovl27_800CB988 + ((n & 7) << 5);
        AF(o, u16, 0x12) = h;
        func_80149374(s2, arg0 + 4, h);
        func_80146DE8(arg0, 0, 0, -0x100000);
        func_80146E90(arg0, 0x3C);
        func_80146CA0(arg0);
        func_80146A6C(0x4A, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
        func_80147324(0x8EF);
        return;
    }
    func_ovl27_800CB384(arg0);
}

void func_ovl27_800CB190(u8 *arg0) {
    s32 v[3];
    u8 *m;
    u8 *t;
    u8 *q;
    s32 i;
    s32 r;
    u8 c;
    u16 s;

    t = AF(arg0, u8 *, 0x4C);
    m = AF(arg0, u8 *, 0x20);
    c = 0x40;
    if (AF(arg0, s32, 0x1C) & 1) {
        c = 0x80;
    }
    s = AF(m, u16, 0x1A) + 0x100;
    AF(m, u16, 0x1A) = s;
    AF(m, u8, 0x26) = c;
    AF(m, u8, 0x25) = c;
    AF(m, u8, 0x24) = c;
    AF(m, u16, 0x18) = s;
    if (AF(m, s16, 0x1A) > 0x2000) {
        AF(m, u16, 0x1A) = 0x2000;
        AF(m, u16, 0x18) = 0x2000;
    }
    AF(m, s16, 0x12) = func_80012ABC(AF(m, s16, 0x12), AF(AF(t, u8 *, 0x20), s16, 0x12), 0x10);
    func_8001382C(AF(m, s16, 0x12), arg0 + 0x24, v);
    AF(arg0, s32, 0x10) = v[0];
    AF(arg0, s32, 0x14) = v[1];
    AF(arg0, s32, 0x18) = v[2];
    func_80162FC0(arg0);
    if (func_80146E98(arg0) == 0) {
        r = 0;
        i = 0;
        q = D_ovl27_800CB8CC;
        do {
            r |= func_ovl27_800CB3D8(arg0, q);
            i++;
            q += 8;
        } while (i < 3);
        if (r == 0) {
            return;
        }
        func_80147324(0x8F0);
    }
    func_80146CA0(arg0);
}

void func_ovl27_800CB2C8(u8 *arg0) {
    s32 sp10[3];
    s16 temp_v0_2;
    s16 v;
    void *temp_s1;
    void *o;

    temp_s1 = AF(arg0, void *, 0x20);
    o = AF(arg0, void *, 0x4C);
    v = AF(temp_s1, u8, 0x24);
    v -= 0x10;
    if (v < 0) {
        func_80146CA0(arg0);
        return;
    }
    AF(temp_s1, u8, 0x24) = AF(temp_s1, u8, 0x25) = AF(temp_s1, u8, 0x26) = v;
    temp_v0_2 = func_80012ABC(AF(temp_s1, s16, 0x12), AF(AF(o, void *, 0x20), s16, 0x12), 0x10);
    AF(temp_s1, s16, 0x12) = temp_v0_2;
    func_8001382C(temp_v0_2, arg0 + 0x24, sp10);
    AF(arg0, s32, 0x10) = sp10[0];
    AF(arg0, s32, 0x14) = sp10[1];
    AF(arg0, s32, 0x18) = sp10[2];
    func_80162FC0(arg0);
}

void func_ovl27_800CB384(void) {
    func_80162CCC();
}

void func_ovl27_800CB3A4(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    if (temp_a0 != NULL) {
        RotMatrixZYX(temp_a0 + 0x10, AF(temp_a0, s32, 0x34));
    }
}

s32 func_ovl27_800CB3D8(u8 *arg0, s32 arg1) {
    AMtx m;
    AVec k;
    AVec r;
    u8 *p;
    u8 *o;
    s32 ret;

    p = arg0 + 4;
    o = AF(arg0, u8 *, 0x20);
    func_80015978(p, &k);
    m = *AF(o, AMtx *, 0x34);
    m.t[0] = 0;
    m.t[1] = 0;
    m.t[2] = 0;
    func_8012F14C(&m, arg1, &r);
    AF(arg0, u16, 6) += r.vx;
    AF(arg0, u16, 0xA) += r.vy;
    AF(arg0, u16, 0xE) += r.vz;
    ret = func_ovl27_800CB4EC(arg0);
    func_80015954(&k, p);
    return ret;
}

s32 func_ovl27_800CB4EC(u8 *arg0) {
    s32 c;

    func_80163408(arg0, 0x28, 0, 0x1000);
    func_80163328(arg0);
    if (func_801632F0(arg0) != 0) {
        func_80013E94(&D_80114EB0, &c);
        func_80146A6C(0xB, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        return 1;
    }
    return 0;
}

void func_ovl27_800CB580(u8 *arg0) {
    if (D_80078EC1 == 0xB) {
        D_ovl27_800CB8F0[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl27_800CB5DC(u8 *arg0) {
    void *temp_v0;
    void *temp_s3;
    u8 *p;
    u16 h;

    temp_s3 = AF(arg0, void *, 0x34);
    temp_v0 = func_801465C0();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        p = &D_ovl27_800CBA88;
        func_8001CD50(temp_v0, p);
        func_800233CC(p, 0x20);
        *p = 0x20;
        D_ovl27_800CBA89 = 0x40;
        D_ovl27_800CBA8A = 0x80;
        D_ovl27_800CBA8E = 0;
        D_ovl27_800CBA8D = 0;
        D_ovl27_800CBA8C = 0;
        AF(temp_v0, s32, 4) |= 0x50000000;
        h = AF(AF(temp_s3, void *, 0x20), u16, 0x12);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, void *, 0x34) = arg0 + 0x38;
        AF(temp_v0, u16, 0x12) = h;
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl27_800CB6D4(u8 *arg0) {
    if (*AF(arg0, u16 *, 0x34) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_ovl27_800CB76C();
}

void func_ovl27_800CB720(u8 *arg0) {
    u16 temp_v1;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_v0, u16, 0x1A) - 0x300;
    AF(temp_v0, u16, 0x1A) = temp_v1;
    AF(temp_v0, u16, 0x18) = temp_v1;
    if ((s16) temp_v1 < 0) {
        func_80146C3C((s32) arg0);
    }
}

void func_ovl27_800CB76C(u8 *arg0) {
    AVec v;
    u8 *p;
    u8 *m;
    u8 *s;
    s16 t;

    p = AF(arg0, u8 *, 0x34);
    m = AF(arg0, u8 *, 0x20);
    s = AF(p, u8 *, 0x20);
    if (m != NULL) {
        AF(m, u16, 0x12) = AF(s, u16, 0x12);
        RotMatrixZYX(m + 0x10, AF(m, s32, 0x34));
        t = AF(s, s16, 0x1A) * 0xB4 / 100;
        AF(m, s16, 0x1A) = t;
        AF(m, s16, 0x18) = t;
        func_800139C8(AF(m, s16, 0x12), &D_ovl27_800CB8FC, &v);
        AF(arg0, s16, 6) = AF(p, u16, 6) + v.vx;
        AF(arg0, s16, 0xA) = AF(p, u16, 0xA) + v.vy;
        AF(arg0, s16, 0xE) = AF(p, u16, 0xE) + v.vz;
    }
}
