#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern void func_80154A74();
extern void func_800183E0();
extern u8 D_ovl15_800CBB88[];
extern AbilStep D_ovl15_800CBB24[];
extern s32 func_80161104();
void func_ovl15_800CAEC0(s32 arg0);
extern void func_80146C3C();
void func_ovl15_800CB6FC(u8 *arg0);
void func_ovl15_800CB988(u8 *arg0);

void func_ovl15_800CAE0C(void) {
    func_800183E0(D_ovl15_800CBB88);
}

void func_ovl15_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl15_800CBB24[AF(a, u8, 0x197)](a);
}

void func_ovl15_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl15_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_80154274();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 func_80161208();
extern void func_ovl15_800CB474();
extern u8 D_80078EC1;
extern AbilStep D_ovl15_800CBB38[];
extern AbilStep D_ovl15_800CBB58[];
extern AbilStep D_ovl15_800CBB60[];
extern s32 func_801487F4();
extern s32 D_ovl15_800CBAE0;
extern s32 D_ovl15_800CBB00;
extern s32 RotMatrixYXZ();
extern void func_8001C2C4();
extern s32 func_8014659C();
extern void func_80146CA0();
extern void func_80146DE8();
extern void func_80146E90();
extern void func_80149374();

extern void func_80146A6C();
extern s32 func_80012ABC();
extern void StartRumbleScript();
extern void func_801466F0();
extern void func_80147324();
extern void func_80148AFC();
extern s32 func_80148E54();
extern void func_801655E4();
extern s32 func_80165624();
extern s32 D_80062BD0;
extern s32 MulMatrix0();
extern s32 RotMatrixZ();
extern s32 rand();

extern u8 D_ovl15_800CBAC0;

void func_ovl15_800CAEC0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl15_800CBAC0);
    func_80154A74(arg0, 0x15);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl15_800CAF0C(u8 *arg0) {
    u8 var_v0;

    if ((func_80161208() == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        if (func_801487F4(arg0) & 0x20) {
            func_80154274(arg0, &D_ovl15_800CBB00);
            var_v0 = AF(arg0, u8, 0x197) + 1;
        } else {
            func_80154274(arg0, &D_ovl15_800CBAE0);
            var_v0 = AF(arg0, u8, 0x197) + 2;
        }
        AF(arg0, u8, 0x197) = var_v0;
    }
}

void func_ovl15_800CAF9C(u8 *arg0) {
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
            func_801466F0(2, arg0, 0, -0x18, -0xF, 0, 0, 1);
            func_80146A6C(0xF, arg0, 0, -0x18, -0xF, 0, 0);
            func_80147324(0x476);
            func_801655E4(arg0);
            StartRumbleScript(&D_80062BD0);
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            if ((func_80165624(arg0) == 0) && (func_801487F4(arg0) & 0x20)) {
                func_80154274(arg0, &D_ovl15_800CBB00);
                return;
            }
            func_80154274(arg0, &D_ovl15_800CBAE0);
            AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
        }
    }
}

void func_ovl15_800CB140(u8 *arg0) {
    if ((func_80161208() == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
    }
}

void func_ovl15_800CB190(u8 *a) {
    *(s32 *)(a + 0x44) = (*(s32 *)(a + 0x44) & -3);
    func_80154A74(a, 0x11);
}

void func_ovl15_800CB1C0(u8 *arg0) {
    if (D_80078EC1 == 8) {
        D_ovl15_800CBB38[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl15_800CB474();
}

void func_ovl15_800CB21C(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C2C4(temp_v0);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        func_80149374(temp_s2, arg0 + 4);
        AF(temp_v0, u16, 0x10) = (u16) AF(temp_s2, u16, 0x100);
        AF(temp_v0, u16, 0x14) = (u16) AF(temp_s2, u16, 0x104);
        AF(temp_v0, u16, 0x12) = (u16) AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80146DE8(arg0, 0, 0, 0xFFC00000);
        func_80146E90(arg0, 0x10);
        func_80146CA0(arg0);
        return;
    }
    func_80162CCC(arg0);
}

extern u8 D_800636C8;
extern u8 D_ovl15_800CC870;
extern s32 func_801465E4();
extern void func_8001C810();
extern void func_80149350();
extern void func_80017DC4();

extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80017E68();

extern s8 D_ovl15_800CBB44[];
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

void func_ovl15_800CB2E0(u8 *arg0) {
    s32 pad[8];
    AMtx m;
    s32 c;
    u8 *o;

    o = AF(arg0, u8 *, 0x20);
    if (func_80146E98(arg0) != 0) {
        func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0x80001C00);
        func_80146CA0(arg0);
        return;
    }
    func_80013F3C(&m);
    func_800126C4(&m, AF(o, s16, 0x10));
    func_800123F0(&m, AF(o, s16, 0x14));
    func_80012558(&m, AF(o, s16, 0x12));
    func_80163194(arg0, 0, 0, 0, &m);
    func_80162FC0(arg0);
    func_80163408(arg0, 0x10, 0x80, 0x200);
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

void func_ovl15_800CB474(void) {
    func_80162CCC();
}

void func_ovl15_800CB494(u8 *arg0) {
    if (D_80078EC1 == 8) {
        D_ovl15_800CBB58[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl15_800CB4F0(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *s3;
    u8 *o;

    s3 = AF(arg0, u8 *, 0x34);
    o = (u8 *) func_801465E4();
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001C810(o, &D_ovl15_800CC870);
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
        func_80146A6C(0x13, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
        AF(arg0, s32, 0x30) = 0x80;
        func_ovl15_800CB6FC(arg0);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl15_800CB6A4(u8 *a) {
    if (++AF(a, s32, 0x1C) < 2) {
        AF(a, u32, 0x30) >>= 1;
        func_ovl15_800CB6FC(a);
    } else {
        func_80146C3C();
    }
}

void func_ovl15_800CB6FC(u8 *arg0) {
    APrim s;
    s8 *p;
    s16 i;
    u8 t;

    p = D_ovl15_800CBB44;
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

void func_ovl15_800CB830(u8 *arg0) {
    if (D_80078EC1 == 8) {
        D_ovl15_800CBB60[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl15_800CB88C(u8 *arg0) {
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
    func_ovl15_800CB988(arg0);
    AF(arg0, u16, 2)++;
}

void func_ovl15_800CB930(u8 *a) {
    if (++AF(a, s32, 0x1C) < 2) {
        AF(a, u32, 0x30) >>= 1;
        func_ovl15_800CB988(a);
    } else {
        func_80146C3C();
    }
}

void func_ovl15_800CB988(u8 *arg0) {
    APrim s;
    s8 *p;
    s16 i;
    u8 t;

    p = D_ovl15_800CBB44;
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
