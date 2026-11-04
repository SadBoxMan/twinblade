#include "common.h"
#include "abil.h"

extern u8 D_80126C16;
extern void func_ovl1f_800CBBF8();
extern void func_800183E0();
extern u8 D_ovl1f_800CC6A4[];
extern u8 D_ovl1f_800CC6E4[];
extern u8 D_ovl1f_800CBF64[];
extern AbilStep D_ovl1f_800CBE7C[];
void func_ovl1f_800CAED8(u8 *arg0);

void func_ovl1f_800CAE14(void) {
    func_800183E0(D_ovl1f_800CC6A4);
    func_800183E0(D_ovl1f_800CC6E4);
    func_800183E0(D_ovl1f_800CBF64);
}

void func_ovl1f_800CAE5C(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1f_800CBE7C[AF(a, u8, 0x197)](a);
}

void func_ovl1f_800CAEA0(u8 *a) {
    func_ovl1f_800CAED8(a);
    AF(a, u8, 0x197)++;
}

extern void func_80146CA0();
extern void func_80146E90();
extern void func_80147364();
extern void func_80162CCC();
extern void func_8016634C();
extern s32 func_80146E98();
extern void func_ovl1f_800CBBA0();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80147324();
extern u8 D_80078EC1;
extern AbilStep D_ovl1f_800CBF2C[];
extern void func_801466F0();
extern void func_8001CB00();
extern void func_ovl1f_800CBB50();
extern s32 D_ovl1f_800CBF20;
extern void func_ovl1f_800CB6CC();
extern void func_ovl1f_800CB028();
extern void func_8001CBDC();
extern void func_8001CA1C();
extern s32 func_8014659C();
extern void func_80146DE8();
extern void func_80149374();
extern void func_ovl1f_800CB758();
extern s32 D_ovl1f_800CBE98;
extern void func_8001CEC0();
extern s32 func_80146578();
extern s32 D_ovl1f_800CBECC;

extern void func_801466B4();
extern void func_ovl1f_800CBB70();

extern s32 func_80148800();

extern u8 D_8011F9D0[];

extern s32 func_8014C088();
extern void func_80146C98();

extern void func_80016714();

extern u8 D_ovl1f_800CBD2C;
extern void func_80154274();
extern void func_801655E4();

void func_ovl1f_800CAED8(u8 *arg0) {
    func_80154274(arg0, &D_ovl1f_800CBD2C);
    func_ovl1f_800CBB70(arg0);
    AF(arg0, u8, 0xBF) = 0;
    AF(arg0, u8, 0xBE) = 0;
    func_801655E4(arg0);
    func_80146E90(arg0, 0x12);
    AF(arg0, u8, 0x197)++;
}

void func_ovl1f_800CAF3C(u8 *arg0) {
    if (func_80146E98() != 0) {
        AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
    }
}

void func_ovl1f_800CAF7C(u8 *arg0) {
    if (func_80148800(arg0) & 0x20) {
        goto call;
    }
    switch (AF(arg0, u8, 0xBF)) {
    case 0:
        AF(arg0, u8, 0xBE) += 4;
        if (AF(arg0, u8, 0xBE) >= 0x50) {
            AF(arg0, u8, 0xBF)++;
        }
        break;
    case 1:
        if (AF(arg0, u8, 0xBE) == 0) {
    call:
            func_ovl1f_800CB028(arg0);
        } else {
            AF(arg0, u8, 0xBE) -= 4;
        }
        break;
    }
}

void func_ovl1f_800CB028(u8 *arg0) {
    AF(arg0, u16, 0xB8) = (u16) AF(arg0, u16, 0xBA);
    func_ovl1f_800CBBA0();
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl1f_800CB068(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x4000) {
        func_801466F0(0xA, arg0, 0, 0, 0, (s32) AF(arg0, u8, 0xBE), 0, 0);
        func_80147324(0x649);
        return;
    }
    if (temp_v1 & 0x8000) {
        AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
    }
}

void func_ovl1f_800CB0E4(u8 *arg0) {
    u8 *p;

    for (p = D_8011F9D0; p < D_8011F9D0 + 0x820; p += 0x68) {
        if (AF(p, u16, 0) == 0xA) {
            return;
        }
    }
    AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
    AF(arg0, u8, 0x197)++;
}

void func_ovl1f_800CB138(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_801599A4();
        func_80159B3C(arg0);
    }
}

void func_ovl1f_800CB180(void) {
    func_ovl1f_800CBBF8();
}

extern AbilStep D_ovl1f_800CBEBC[];
extern s32 func_ovl1f_800CB7B0();

void func_ovl1f_800CB1A0(u8 *arg0) {
    s32 pad[2];

    if (D_80078EC1 != 0xF) {
        func_ovl1f_800CB6CC(arg0);
        return;
    }
    D_ovl1f_800CBEBC[AF(arg0, u16, 2)](arg0);
    if ((AF(arg0, u16, 0) != 0) && (func_ovl1f_800CB7B0(arg0) != 0)) {
        func_80147364(4, 0x649);
    }
    if (AF(arg0, s16, 0xA) > 0x400) {
        func_ovl1f_800CB6CC(arg0);
    }
}

void func_ovl1f_800CB23C(u8 *arg0) {
    void *temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001CA1C(temp_v0, &D_ovl1f_800CBE98);
        func_80149374(temp_s1, arg0 + 4);
        AF(AF(arg0, void *, 0x20), u16, 0x10) = (u16) AF(temp_s1, u16, 0x100);
        AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(temp_s1, u16, 0x104);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(temp_s1, void *, 0x20), u16, 0x12);
        func_80146DE8(arg0, 0, 0x80000, 0xFFF00000);
        func_80146E90(arg0, 0x60);
        func_ovl1f_800CB758(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl1f_800CB6CC(arg0);
}

extern void func_80015978();
extern s32 func_8012EFB8();

extern AVec D_ovl1f_800CAE0C;
extern s16 D_ovl1f_800CBEA0;
extern s16 D_ovl1f_800CBEA2;
extern u8 D_ovl1f_800CBEB0;
extern u16 D_800B99DA;
extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern s16 D_80126B18;
extern s16 D_80126B1A;
extern s16 D_80126B1C;
extern s32 D_801151D8;
extern void func_80013F3C();
extern void func_800126C4();
extern void func_800123F0();
extern void func_80012558();
extern void func_80163194();
extern void func_80162FC0();
extern s32 func_80163950();
extern void func_8016345C();
extern void func_80163328();
extern s32 func_801633A8();
extern void StartRumbleScript();
extern void func_80013E94();
extern s32 func_80146A6C();
extern s32 func_801632E0();
extern void func_ovl1f_800CB760();
extern s32 func_8016380C();

void func_ovl1f_800CB300(u8 *arg0) {
    AMtx m;
    AVec k;
    AVec b;
    s32 w;
    u8 *mo;
    AVec *pk;
    u16 *o;
    u16 t;
    s32 r;
    s32 f;
    u32 u;

    mo = AF(arg0, u8 *, 0x20);
    k = D_ovl1f_800CAE0C;
    pk = &k;
    if (func_80146E98(arg0) != 0) {
        goto kill;
    }
    func_80013F3C(&m);
    func_800126C4(&m, AF(mo, s16, 0x10));
    func_800123F0(&m, AF(mo, s16, 0x14));
    func_80012558(&m, AF(mo, s16, 0x12));
    AF(mo, AMtx, 0x34) = m;
    AF(mo, u16, 0x2C) |= 1;
    func_80163194(arg0, -(((AF(arg0, s32, 0x50) - 0x28) << 14) / 40), 0, 0, &m);
    func_80162FC0(arg0);
    func_80163950(arg0);
    t = AF(mo, u16, 0x1A) + 0x200;
    AF(mo, u16, 0x1A) = t;
    AF(mo, u16, 0x18) = t;
    if ((s16) t > 0x2000) {
        AF(mo, u16, 0x18) = AF(mo, u16, 0x1A) = 0x2000;
    }
    r = D_800B99DA & 1;
    D_ovl1f_800CBEA0 = r - 0x10;
    D_ovl1f_800CBEA2 = -0x20 - r;
    func_8016345C(arg0, 0x26, 0, 0x8000, pk);
    func_80163328(arg0);
    u = func_801633A8(arg0);
    switch (u) {
    case 1:
        StartRumbleScript(&D_ovl1f_800CBEB0);
        func_80013E94(&D_80114EB0, &w);
        w |= 0x80000000;
        func_80146A6C(0x1F, arg0, D_80126B18, D_80126B1A, D_80126B1C, w, 0);
        o = (u16 *) func_801632E0(arg0);
        if (o == NULL) {
            break;
        }
        if (func_ovl1f_800CB7B0(arg0) != 0) {
            break;
        }
        if (*o == 0x151) {
            func_ovl1f_800CB760(arg0, 0x7B3);
        } else {
            func_ovl1f_800CB760(arg0, 0x648);
        }
        break;
    case 2:
        break;
    case 4:
        func_80013E94(&D_80114EC8, &w);
        w |= 0x80000000;
        func_80146A6C(7, arg0, D_80126B18, D_80126B1A, D_80126B1C, w, 0);
        goto kill;
    }
    f = func_8016380C(arg0, &b);
    if (f & 0x8000) {
        goto kill;
    }
    if (!(f & 0x2000)) {
        return;
    }
    if (AF(&b, u8, 6) == 0x19) {
        if (D_801151D8 != 0 && func_ovl1f_800CB7B0(arg0) == 0) {
            func_ovl1f_800CB760(arg0, 0x6DE);
        }
        goto kill;
    }
    if (AF(&b, u8, 6) != 2) {
        return;
    }
    func_80146A6C(0x10, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    func_80146E90(arg0, 0x1E);
    func_80147364(4, 0x649);
    func_80147324(0x441);
    func_80146CA0(arg0);
kill:
    func_80146CA0(arg0);
}

void func_ovl1f_800CB6CC(s32 arg0) {
    func_8016634C();
    func_80147364(4, 0x649);
    func_80162CCC(arg0);
}

void func_ovl1f_800CB708(u8 *arg0) {
    if (func_80146E98() != 0) {
        func_80162CCC(arg0);
        return;
    }
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 2);
}

void func_ovl1f_800CB758(u8 *a) {
    *(s16 *)(a + 0x60) = 0;
}

void func_ovl1f_800CB760(u8 *arg0, s32 arg1) {
    s16 t = arg1;

    if (AF(arg0, s16, 0x60) != t) {
        func_80147324((u16) t);
        AF(arg0, s16, 0x60) = t;
    }
}

s32 func_ovl1f_800CB7B0(u8 *arg0) {
    s16 v[4];
    s32 x;

    func_80015978(arg0 + 4, v);
    if (func_8012EFB8(v, v) & ~0x1000) {
        return 1;
    }
    x = v[0];
    if (x < 0) {
        x = -x;
    }
    if (x > 200) {
        return 1;
    }
    x = v[1];
    if (x >= 0) {
        if (x > 160) {
            x = 1;
            return x;
        }
        return 0;
    }
    if (-x < 161) {
        return 0;
    }
    x = 1;
    return x;
}

void func_ovl1f_800CB848(u8 *arg0) {
    if (D_80078EC1 != 0xF) {
        func_ovl1f_800CBBF8();
        return;
    }
    D_ovl1f_800CBF2C[AF(arg0, u16, 2)]();
}

void func_ovl1f_800CB8A4(u8 *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    AF(arg0, void *, 0x20) = NULL;
    AF(arg0, s32, 0x4C) = 0;
    temp_v0 = func_80146578();
    if (temp_v0 != NULL) {
        AF(arg0, void *, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, &D_ovl1f_800CBECC);
        AF(temp_v0, s16, 0x2C) = 1;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        AF(arg0, s16, 6) = -0x28;
        AF(arg0, s16, 0xA) = -0x40;
        temp_v0_2 = func_80146578();
        if (temp_v0_2 != NULL) {
            AF(arg0, void *, 0x10) = temp_v0_2;
            func_8001CB00(temp_v0_2, &D_ovl1f_800CBF20, 0x1A0, 0x170);
            func_ovl1f_800CBB50(temp_v0_2);
            AF(temp_v0_2, s16, 0x18) = 0;
            func_80146E90(arg0, 6);
            func_80146CA0(arg0);
        }
    }
}

void func_ovl1f_800CB968(u8 *arg0) {
    void *temp_s0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    temp_s0 = AF(arg0, void *, 0x10);
    if (func_80146E98() != 0) {
        if (temp_s0 != NULL) {
            func_8001CBDC(temp_s0, &D_ovl1f_800CBF20, 0x1A0, 0x170);
            func_ovl1f_800CBB50(temp_s0);
            AF(temp_s2, s32, 4) = (s32) (AF(temp_s2, s32, 4) & 0x7FFFFFFF);
        }
        func_80146CA0(arg0);
        return;
    }
    if (temp_s0 != NULL) {
        AF(temp_s0, u16, 0x18) = (u16) (AF(temp_s0, u16, 0x18) + 0x2AA);
    }
}

void func_ovl1f_800CBA14(u8 *a) {
    *(s16 *)(a + 0x6) = (D_80126C16 + -40);
}

void func_ovl1f_800CBA2C(u8 *arg0) {
    func_80146E90(arg0, 8);
    func_80146CA0(arg0);
}

void func_ovl1f_800CBA60(u8 *arg0) {
    s32 temp_s0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    temp_s0 = AF(arg0, s32, 0x10);
    if (func_80146E98() != 0) {
        if (temp_s0 != 0) {
            func_8001CB00(temp_s0, &D_ovl1f_800CBF20, 0x1A0, 0x170);
            func_ovl1f_800CBB50(temp_s0);
        }
        AF(temp_s2, s32, 4) = (s32) (AF(temp_s2, s32, 4) | 0x80000000);
        func_80146E90(arg0, 4);
        func_80146CA0(arg0);
    }
}

void func_ovl1f_800CBAF4(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x10);
    if (func_80146E98() != 0) {
        func_ovl1f_800CBBF8();
        return;
    }
    if (temp_s0 != NULL) {
        AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) - 0x400);
    }
}

void func_ovl1f_800CBB50(u8 *a) {
    *(s8 *)(a + 0x27) = 0x1a;
    *(s16 *)(a + 0x2c) = 1;
    *(s16 *)(a + 0x8) = 0;
    *(s16 *)(a + 0xa) = 0xffffffc0;
}

void func_ovl1f_800CBB70(s32 arg0) {
    func_801466B4(0x27, arg0, 0, 0, 0);
}

void func_ovl1f_800CBBA0(u8 *arg0) {
    u8 *v;

    v = func_8014C088(arg0, 0x27);
    if (v != 0) {
        if (AF(v, u16, 2) >= 2) {
            func_80146C98(v, 3);
        } else {
            func_ovl1f_800CBBF8(v);
        }
    }
}

void func_ovl1f_800CBBF8() {
    u8 *p;

    for (p = D_8011F9D0; p < D_8011F9D0 + 0x820; p += 0x68) {
        if (AF(p, u16, 0) == 0x27) {
            if (AF(p, s32, 0x10) != 0) {
                func_80016714(AF(p, s32, 0x10), 0x38);
            }
            func_80162CCC(p);
        }
    }
}
