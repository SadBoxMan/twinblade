#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl2c_800CCA28[];
extern u8 D_ovl2c_800CBC18[];
extern AbilStep D_ovl2c_800CBBA8[];
extern s32 func_80161104();
void func_ovl2c_800CAED0(s32 arg0);
extern void func_80162CCC();
extern void func_80146C3C();
void func_ovl2c_800CB780(u8 *arg0);
void func_ovl2c_800CBA0C(u8 *arg0);

void func_ovl2c_800CAE0C(void) {
    func_800183E0(D_ovl2c_800CCA28);
    func_800183E0(D_ovl2c_800CBC18);
}

void func_ovl2c_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2c_800CBBA8[AF(a, u8, 0x197)](a);
}

void func_ovl2c_800CAE88(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2c_800CAED0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_80154274();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 func_80161208();
extern void func_ovl2c_800CB4F8();
extern u8 D_80078EC1;
extern AbilStep D_ovl2c_800CBBC8[];
extern AbilStep D_ovl2c_800CBBE8[];
extern AbilStep D_ovl2c_800CBBF0[];
extern s32 func_801487F4();
extern s32 D_ovl2c_800CBB64;
extern s32 D_ovl2c_800CBB84;
extern s32 RotMatrixYXZ();
extern void func_8001CA1C();
extern s32 func_8014659C();
extern void func_80146CA0();
extern void func_80146DE8();
extern void func_80146E90();
extern void func_80149374();
extern s32 D_ovl2c_800CBBBC;

extern void func_80146A6C();
extern s32 MulMatrix0();
extern s32 RotMatrixZ();
extern s32 rand();
extern s32 func_80012ABC();
extern void func_801466F0();
extern void func_80147324();
extern void func_80148AFC();
extern s32 func_80148E54();
extern void func_801655E4();
extern s32 func_80165624();

extern void func_80154A74();

extern u8 D_ovl2c_800CBB44;

void func_ovl2c_800CAED0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl2c_800CBB44);
    func_80154A74(arg0, 0x15);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl2c_800CAF1C(u8 *arg0) {
    u8 var_v0;

    if ((func_80161208() == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        if (func_801487F4(arg0) & 0x20) {
            func_80154274(arg0, &D_ovl2c_800CBB84);
            var_v0 = AF(arg0, u8, 0x197) + 1;
        } else {
            func_80154274(arg0, &D_ovl2c_800CBB64);
            var_v0 = AF(arg0, u8, 0x197) + 2;
        }
        AF(arg0, u8, 0x197) = var_v0;
    }
}

void func_ovl2c_800CAFAC(u8 *arg0) {
    s16 temp_v0;
    u8 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80161208() == 0) {
        temp_v1 = AF(arg0, u8, 0xA9);
        switch (temp_v1) {                          /* irregular */
        case 0x41:
            temp_v0 = func_80148E54(arg0);
            if (temp_v0 > 0) {
                AF(temp_s0, s16, 0x12) = func_80012ABC(AF(temp_s0, s16, 0x12), temp_v0, 4);
            }
            break;
        case 0x53:
        case 0x73:
            func_80148AFC(arg0);
            break;
        }
        if (AF(arg0, u16, 0xB8) & 0x4000) {
            func_801466F0(0x1F, arg0, 0, -0x18, -0xF, 0, 0, 1);
            func_801466F0(0x1F, arg0, 0, -0x18, -0xF, 1, 0, 1);
            func_801466F0(0x1F, arg0, 0, -0x18, -0xF, 2, 0, 1);
            func_80146A6C(0x43, arg0, 0, -0x18, -0xF, 0, 0);
            func_80147324(0xA64);
            func_801655E4(arg0);
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            if ((func_80165624(arg0) == 0) && (func_801487F4(arg0) & 0x20)) {
                func_80154274(arg0, &D_ovl2c_800CBB84);
                return;
            }
            func_80154274(arg0, &D_ovl2c_800CBB64);
            AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
        }
    }
}

void func_ovl2c_800CB194(u8 *arg0) {
    if ((func_80161208() == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
}

void func_ovl2c_800CB1E4(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    func_80154A74((s32) arg0, 0x11);
}

void func_ovl2c_800CB214(u8 *arg0) {
    if (D_80078EC1 == 0x1B) {
        D_ovl2c_800CBBC8[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl2c_800CB4F8();
}

void func_ovl2c_800CB270(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001CA1C(temp_v0, &D_ovl2c_800CBBBC);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x58000000);
        func_80149374(temp_s2, arg0 + 4);
        AF(arg0, u16, 0x60) = (u16) AF(temp_s2, u16, 0x100);
        AF(arg0, u16, 0x62) = (u16) AF(temp_s2, u16, 0x104);
        AF(arg0, s16, 0x64) = (s16) (((AF(AF(temp_s2, void *, 0x20), u16, 0x12) + (AF(arg0, s32, 0x50) * 0xAA)) - 0xAA) & 0xFFF);
        func_80146DE8(arg0, 0, 0, 0xFFC00000);
        func_80146E90(arg0, 0x10);
        func_80146CA0(arg0);
        return;
    }
    func_80162CCC(arg0);
}

extern u8 D_800636C8;
extern u8 D_ovl2c_800CCA00;
extern s32 func_801465E4();
extern void func_8001C810();
extern void func_80149350();
extern void func_80017DC4();

extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80017E68();

extern s8 D_ovl2c_800CBBD4[];
extern void func_80017758();

extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern AVec D_80126B18;
extern s32 func_80146E98();
extern void func_80013F3C();
extern void func_800126C4();
extern void func_800123F0();
extern void func_80012558();
extern void func_80163194();
extern void func_80162FC0();
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_80013E94();

void func_ovl2c_800CB360(u8 *arg0) {
    s32 pad[8];
    AMtx m;
    s32 c;
    u8 *o;

    o = AF(arg0, u8 *, 0x20);
    AF(o, s16, 0x14) += 0x200;
    if (func_80146E98(arg0) != 0) {
        func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0x1C00);
        func_80146CA0(arg0);
        return;
    }
    func_80013F3C(&m);
    func_800126C4(&m, AF(arg0, s16, 0x60));
    func_800123F0(&m, AF(arg0, s16, 0x62));
    func_80012558(&m, AF(arg0, s16, 0x64));
    func_80163194(arg0, 0, 0, 0, &m);
    func_80162FC0(arg0);
    func_80163408(arg0, 0x2D, 0x80, 0x200);
    func_80163328(arg0);
    switch ((u32) func_801632F0(arg0)) {
    case 1:
        func_80013E94(&D_80114EB0, &c);
        c |= 0x80000000;
        func_80146A6C(0x1F, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        func_80146CA0(arg0);
        break;
    case 2:
    case 4:
        func_80013E94(&D_80114EC8, &c);
        c |= 0x80000000;
        func_80146A6C(7, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        func_80146CA0(arg0);
        break;
    }
}

void func_ovl2c_800CB4F8(void) {
    func_80162CCC();
}

void func_ovl2c_800CB518(u8 *arg0) {
    if (D_80078EC1 == 0x1B) {
        D_ovl2c_800CBBE8[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl2c_800CB574(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *s3;
    u8 *o;

    s3 = AF(arg0, u8 *, 0x34);
    o = (u8 *) func_801465E4();
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001C810(o, &D_ovl2c_800CCA00);
        AF(o, u8 *, 0x20) = &D_800636C8;
        AF(o, s32, 4) |= 0x50000040;
        v.vx = 0;
        v.vy = -6;
        v.vz = AF(arg0, u16, 0xE) - 0x24;
        func_80149350(s3, &v, &v);
        AF(arg0, AMtx, 0x38) = AF(AF(s3, u8 *, 0x20), AMtx, 0x34);
        AF(arg0, s32, 0x4C) = v.vx;
        AF(arg0, s32, 0x50) = v.vy;
        AF(arg0, s32, 0x54) = v.vz;
        func_80149374(s3, arg0 + 4);
        v.vx = v.vy = v.vz = 0x1800;
        func_80017DC4(&v, &m);
        RotMatrixZ(rand() & 0xFFF, &m);
        MulMatrix0(AF(s3, u8 *, 0x20) + 0x34, &m, o + 0x34);
        func_80146A6C(0x44, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
        AF(arg0, s32, 0x30) = 0x80;
        func_ovl2c_800CB780(arg0);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl2c_800CB728(u8 *a) {
    if (++AF(a, s32, 0x1C) < 2) {
        AF(a, u32, 0x30) >>= 1;
        func_ovl2c_800CB780(a);
    } else {
        func_80146C3C();
    }
}

void func_ovl2c_800CB780(u8 *arg0) {
    APrim s;
    s8 *p;
    s16 i;
    u8 t;

    p = D_ovl2c_800CBBD4;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    t = AF(arg0, u8, 0x30);
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].r = s.c[1].b = s.c[1].g = t;
    do {
        s.v[0].vx = *p++;
        s.v[0].vz = *p++;
        s.v[2].vx = *p++;
        s.v[2].vz = *p++;
        s.v[3].vx = *p++;
        s.v[3].vz = *p--;
        func_80017758(&s, arg0 + 0x38);
        i++;
    } while (i < 4);
}

void func_ovl2c_800CB8B4(u8 *arg0) {
    if (D_80078EC1 == 0x1B) {
        D_ovl2c_800CBBF0[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl2c_800CB910(u8 *arg0) {
    AVec v;
    AVec r;

    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    func_800D20C0(&v, &r, 7);
    func_800D23D0(&r);
    func_80017E68(&v, arg0 + 0x38);
    RotMatrixYXZ(&r, arg0 + 0x38);
    AF(arg0, s32, 0x30) = 0xC0;
    func_ovl2c_800CBA0C(arg0);
    AF(arg0, u16, 2)++;
}

void func_ovl2c_800CB9B4(u8 *a) {
    if (++AF(a, s32, 0x1C) < 2) {
        AF(a, u32, 0x30) >>= 1;
        func_ovl2c_800CBA0C(a);
    } else {
        func_80146C3C();
    }
}

void func_ovl2c_800CBA0C(u8 *arg0) {
    APrim s;
    s8 *p;
    s16 i;
    u8 t;

    p = D_ovl2c_800CBBD4;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    t = AF(arg0, u8, 0x30);
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].r = s.c[1].g = t;
    s.c[1].b = t >> 1;
    do {
        s.v[0].vx = *p++;
        s.v[0].vy = *p++;
        s.v[2].vx = *p++;
        s.v[2].vy = *p++;
        s.v[3].vx = *p++;
        s.v[3].vy = *p--;
        func_80017758(&s, arg0 + 0x38);
        i++;
    } while (i < 4);
}
