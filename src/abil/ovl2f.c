#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl2f_800CB85C[];
extern AbilStep D_ovl2f_800CB7D4[];
extern s32 func_80161104();
void func_ovl2f_800CAEC0(u8 *a);
extern void func_80154274();
extern void func_801655E4();
extern u8 D_800D57F4[];
extern void func_80162CCC();

void func_ovl2f_800CAE0C(void) {
    func_800183E0(D_ovl2f_800CB85C);
}

void func_ovl2f_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2f_800CB7D4[AF(a, u8, 0x197)](a);
}

void func_ovl2f_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2f_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

void func_ovl2f_800CAEC0(u8 *a) {
    func_80154274(a, D_800D57F4);
    func_801655E4(a);
    AF(a, u8, 0x197)++;
}

extern void func_801466F0();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80161208();
extern void func_80146CA0();
extern void func_80162D28();
extern void func_ovl2f_800CB338();
extern u8 D_80078EC1;
extern AbilStep D_ovl2f_800CB7EC[];
extern void func_8001C214();
extern s32 func_8014659C();
extern s32 func_80146A6C();
extern void func_80146DE8();
extern void func_80146E90();
extern void func_80147324();
extern void func_80149374();
extern s32 D_ovl2f_800CBE04;

void func_ovl2f_800CAF08(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_801466F0(0x26, arg0, 0, -0x40, 0, 0, 0, 0);
    }
    func_80161208(arg0);
}

void func_ovl2f_800CAF88(u8 *a) {
    *(s32 *)(a + 0x44) = (*(s32 *)(a + 0x44) & -3);
}

void func_ovl2f_800CAF9C(u8 *arg0) {
    if (D_80078EC1 == 0x1E) {
        D_ovl2f_800CB7EC[AF(arg0, u16, 2)]();
        if (AF(arg0, s32, 0x20) != 0) {
            func_80162D28(arg0);
        }
        if (AF(arg0, s16, 0xA) >= 0x401) {
            goto block_4;
        }
    } else {
block_4:
        func_ovl2f_800CB338(arg0);
    }
}

void func_ovl2f_800CB028(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C214(temp_v0, &D_ovl2f_800CBE04);
        AF(temp_v0, s16, 0x1C) = 0x2000;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        AF(temp_v0, u16, 0x12) = (u16) AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80149374(temp_s2, arg0 + 4);
        func_80146DE8(arg0, 0, 0, 0xFFE80000);
        func_80146E90(arg0, 0x3C);
        func_80146A6C(0x4F, arg0, 0, 0, 0, 0, 0);
        func_80147324(0x8E5);
        func_80146CA0(arg0);
        return;
    }
    func_ovl2f_800CB338(arg0);
}

extern void func_80146C3C();
extern AbilStep D_ovl2f_800CB834[];
extern s32 rand();
extern s32 RotMatrixYXZ();

extern s32 func_80146E98();

extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern AVec D_80126B18;
extern void func_80162FF4();
extern void func_80162FC0();
extern s32 func_801638A0();
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_80013E94();

void func_ovl2f_800CB118(u8 *arg0) {
    AVec v;
    s32 c;
    u32 t;

    func_80162FF4(arg0, 0, 0x4000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    t = func_801638A0(arg0, &v);
    if (t != 0) {
        if (!(t & 0x8000)) {
            func_80146E90(arg0, 0x20);
            func_80146CA0(arg0);
            return;
        }
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x24) = 0;
    }
    func_80163408(arg0, 0x2C, 0x80, 0x200);
    func_80163328(arg0);
    t = func_801632F0(arg0);
    switch (t) {
    case 1:
        func_80013E94(&D_80114EB0, &c);
        c |= 0x80000000;
        func_80146A6C(0x1F, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        func_80147324(0x8E6);
        break;
    case 2:
    case 4:
        func_80013E94(&D_80114EC8, &c);
        c |= 0x80000000;
        func_80146A6C(7, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        break;
    }
}

void func_ovl2f_800CB2B4(u8 *arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0, arg1) != 0) {
        func_80146CA0((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(temp_s1, u32, 4) |= 0x80000000;
    } else {
        AF(temp_s1, u32, 4) &= 0x7FFFFFFF;
    }
}

void func_ovl2f_800CB338(void) {
    func_80162CCC();
}

void func_ovl2f_800CB358(u8 *arg0) {
    if (*AF(arg0, u16 *, 0x34) == 0x26) {
        D_ovl2f_800CB834[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

extern s32 func_ovl2f_800CB3BC();

extern s8 D_ovl2f_800CB820[];
extern s16 D_ovl2f_800CB7FC[];
extern void func_80149350();
extern void func_800D20C0();
extern void func_80017E68();
extern void func_800D23D0();
extern void func_80017758();

s32 func_ovl2f_800CB3BC(u8 *arg0, s32 x, s32 y, s32 z) {
    AVec pos;
    AVec ang;
    s32 pad[4];
    APrim s;
    AMtx m;
    s32 pad2[8];
    s8 *p;
    s16 *q;
    s16 i;
    u8 t;
    u8 *o;
    s16 w;

    o = AF(arg0, u8 *, 0x34);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[1].b = 0x70;
    t = AF(arg0, u8, 0x12);
    pos.vx = x;
    pos.vy = y;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    pos.vz = z;
    s.c[1].r = s.c[1].g = t;
    func_80149350(o, &pos, &pos);
    AF(arg0, s16, 6) = w = pos.vx;
    AF(arg0, s32, 0x4C) = w;
    AF(arg0, s16, 0xA) = w = pos.vy;
    AF(arg0, s32, 0x50) = w;
    AF(arg0, s16, 0xE) = w = pos.vz;
    AF(arg0, s32, 0x54) = w;
    func_800D20C0(&pos, &ang, 8);
    func_80017E68(&pos, &m);
    func_800D23D0(&ang);
    RotMatrixYXZ(&ang, &m);
    p = D_ovl2f_800CB820;
    i = 0;
    do {
        s.v[0].vx = *p++;
        s.v[0].vy = *p++;
        s.v[2].vx = *p++;
        s.v[2].vy = *p++;
        s.v[3].vx = *p++;
        s.v[3].vy = *p--;
        func_80017758(&s, &m);
    } while (++i < 4);
    s.v[1].vz = 0x50;
    s.c[1].b = 0xA0;
    s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.c[1].r = s.c[1].g = 0x10;
    q = D_ovl2f_800CB7FC;
    i = 0;
    do {
        s.v[0].vx = *q++;
        s.v[0].vz = *q++;
        s.v[2].vx = *q++;
        s.v[2].vz = *q++;
        s.v[3].vx = *q++;
        s.v[3].vz = *q--;
        func_80017758(&s, arg0 + 0x38);
    } while (++i < 4);
}

void func_ovl2f_800CB634(u8 *a) {
    *(s32 *)(a + 0x1c) = 0x20;
    *(s16 *)(a + 0x12) = 0;
    *(s16 *)(a + 0x10) = 0x80;
    *(s16 *)(a + 0x2) = (*(u16 *)(a + 0x2) + 0x1);
}

void func_ovl2f_800CB658(u8 *arg0) {
    u8 *p;
    u8 *o;
    s32 v;

    p = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s16, 0x12) > AF(arg0, s16, 0x10)) {
        if (AF(arg0, s32, 0x1C) > 0) {
            AF(arg0, s16, 0x10) = rand() & 0x30;
            v = -0x30;
            goto set;
        }
    } else if (AF(arg0, s32, 0x1C) < 0) {
        AF(arg0, s16, 0x10) = (rand() & 0x30) + 0x40;
        v = 0x30;
    set:
        AF(arg0, s32, 0x1C) = v;
    }
    AF(arg0, u16, 0x12) += AF(arg0, s32, 0x1C);
    AF(arg0, AMtx, 0x38) = AF(AF(p, u8 *, 0x20), AMtx, 0x34);
    func_ovl2f_800CB3BC(arg0, 0, 0, -0x50);
    o = (u8 *) func_80146A6C(0xE, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    if (o != NULL) {
        AF(o, AMtx, 0x38) = AF(AF(p, u8 *, 0x20), AMtx, 0x34);
    }
}
