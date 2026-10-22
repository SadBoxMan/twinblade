#include "common.h"
#include "abil.h"

void func_ovl34_800CCB20(void) {
}

extern void func_ovl34_800CCD50();
extern void func_80162CCC();
extern AbilStep D_ovl34_800CE044[];

extern void func_ovl34_800CDBF4();
extern s32 func_ovl34_800CDCA8();
extern void func_801477E8();
extern void func_80154A74();
extern void func_801553A8();
extern void func_801553C0();
extern s32 func_80161A30();
extern void func_ovl34_800CDBD4();
extern AbilStep D_ovl34_800CE0AC[];
extern void func_ovl34_800CDF64();
extern AbilStep D_ovl34_800CE0C0[];
extern s32 rand();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern void func_80013F3C();
extern s32 MulMatrix();
extern s32 RotMatrixY();
extern void func_80020F34();
extern void func_8001C214();
extern s32 func_8014659C();
extern void func_80146CA0();
extern void func_ovl34_800CD94C();
extern void func_ovl34_800CD96C();
extern s32 D_ovl34_800CE8CC;
extern s16 D_ovl34_800CE8D4;
extern void func_ovl34_800CDF84();
extern s32 ApplyMatrixSV();
extern s32 RotMatrixZYX();
extern void func_80147460();
extern void func_80148038();
extern s32 func_8016151C();
extern void func_ovl34_800CCFA8();
extern s32 func_ovl34_800CD240();
extern void func_ovl34_800CD288();
s32 func_ovl34_800CD494(s32 arg0);
extern u8 * func_ovl34_800CD5CC();
extern void func_ovl34_800CD6A4();
extern void func_801483E8();
extern s32 func_801496D4();
extern s32 func_801612B8();
extern void func_ovl34_800CCEB8();

extern void func_801599A4();
extern void func_80159B3C();
extern void func_80147324();
extern void func_801466F0();
extern void func_8014B5C4();

extern void func_80147078();
extern void func_ovl34_800CCCF4();
extern s32 func_80146E98();
extern void func_80146E90();

extern s32 func_8014C088();
extern void func_ovl34_800CDA14();

extern AbilStep D_ovl34_800CE080[];
extern s32 func_80012ABC();
extern void func_8014ACC0();

extern s32 func_80148800();
extern s32 func_801487F4();

extern u8 D_ovl34_800CE068;
extern s32 func_80146578();
extern void func_8001CC3C();
extern s32 func_80146DE8();
extern void func_80149374();

extern AbilStep D_ovl34_800CE040[];
extern void func_80149020();

void func_ovl34_800CCB28(u8 *arg0) {
    s32 i;

    func_80149020(arg0);
    i = AF(arg0, u16, 2) - 2;
    D_ovl34_800CE040[i](arg0);
}

void func_ovl34_800CCB78(u8 *arg0) {
    func_80147324(0x8E3);
    func_8014B5C4(arg0, 5, 0);
    func_801466F0(0x13, arg0, 0, 0, 0, 0, 0, 0);
    func_801466F0(0x14, arg0, 0, 0, 0, 0, 0, 0);
    func_801466F0(0x14, arg0, 0, 0, 0, 1, 0, 0);
    func_801466F0(0x14, arg0, 0, 0, 0, 2, 0, 0);
    func_801466F0(0x14, arg0, 0, 0, 0, 3, 0, 0);
    AF(arg0, s16, 0x1C8) = 0xFF;
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl34_800CCC8C(s32 arg0) {
    func_80147078(arg0, 0x21);
    func_ovl34_800CCD50(arg0);
}

void func_ovl34_800CCCC0(s32 arg0) {
    func_80147078(arg0, 0x21);
    func_ovl34_800CCCF4(arg0);
}

void func_ovl34_800CCCF4(u8 *a) {
    D_ovl34_800CE044[AF(a, u16, 2)](a);
}

void func_ovl34_800CCD30(void) {
    func_ovl34_800CCD50();
}

extern void func_80163194();
extern void func_80162FC0();
extern void func_80163408();
extern void func_80163328();
extern void func_801632F0();

extern u8 D_ovl34_800CE010;
extern void func_80154274();
extern void func_80146D90();
extern void func_ovl34_800CCDB0();

void func_ovl34_800CCD50(u8 *arg0) {
    func_80154274(arg0, &D_ovl34_800CE010);
    AF(arg0, u16, 0x244) = AF(AF(arg0, void *, 0x20), u16, 0x12);
    AF(arg0, s16, 0x246) = 0x200;
    func_80146D90(arg0);
    func_ovl34_800CCDB0(arg0);
    AF(arg0, s16, 0x240) = 0;
    func_80147324(0x8E4);
}

void func_ovl34_800CCDB0(u8 *a) {
    *(s32 *)(a + 0x23c) = 0;
    *(s32 *)(a + 0x238) = 0;
    *(s32 *)(a + 0x234) = 0;
    *(s16 *)(a + 0x2) = 1;
}

void func_ovl34_800CCDC8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((func_ovl34_800CD240() == 0) && (func_ovl34_800CD288(arg0), (func_ovl34_800CD494(arg0) == 0))) {
        temp_v0 = func_ovl34_800CD5CC(arg0);
        if (temp_v0 != 0) {
            func_ovl34_800CD6A4(arg0, temp_v0);
        }
        temp_v0_2 = func_801612B8(arg0, 0);
        if (temp_v0_2 & 0x4000) {
            func_ovl34_800CCFA8(arg0);
            return;
        }
        if ((temp_v0_2 == 0) || (temp_v0_2 == 0x8000)) {
            func_801477E8(arg0, 0);
            func_80146CA0(arg0);
            return;
        }
        if (func_801496D4(arg0) != 0) {
            func_ovl34_800CCEB8(arg0);
            return;
        }
        func_801483E8(arg0);
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x1000);
    }
}

void func_ovl34_800CCEB8(s32 arg0) {
    func_801477E8(arg0, -0x160000);
    AF(arg0, s16, 2) = 2;
}

void func_ovl34_800CCEEC(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((func_ovl34_800CD240() == 0) && (func_ovl34_800CD288(arg0), (func_ovl34_800CD494(arg0) == 0))) {
        func_80148038(arg0, 0x1A000);
        func_80147460(arg0);
        temp_v0 = func_ovl34_800CD5CC(arg0);
        if (temp_v0 != 0) {
            func_ovl34_800CD6A4(arg0, temp_v0);
        }
        temp_v0_2 = func_8016151C(arg0);
        if (temp_v0_2 & 0x4000) {
            func_ovl34_800CCFA8(arg0);
            return;
        }
        if (temp_v0_2 != 0) {
            AF(arg0, s16, 2) = 1;
            return;
        }
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x1000);
    }
}

extern u8 D_ovl34_800CE058;
extern void func_8001382C();
extern s32 func_8014C59C();

extern AVec D_ovl34_800CE08C[];

extern AVec D_801152B0;
typedef struct { u16 id; s16 state; u8 pad4[0x230]; s32 v[3]; } Act;

void func_ovl34_800CCFA8(Act *arg0) {
    arg0->v[0] = D_801152B0.vx << 6;
    arg0->v[1] = 0x80000;
    arg0->v[2] = D_801152B0.vz << 6;
    arg0->state = 3;
}

extern void func_80147F50();
extern s32 func_801473EC();
extern s32 func_ovl34_800CD494();

void func_ovl34_800CCFDC(u8 *arg0) {
    s32 v;

    if (func_ovl34_800CD240(arg0) != 0) {
        return;
    }
    func_80146DE8(arg0, AF(arg0, s32, 0x234), AF(arg0, s32, 0x238), AF(arg0, s32, 0x23C));
    func_80147F50(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    if (func_ovl34_800CD494(arg0) != 0) {
        return;
    }
    func_ovl34_800CD5CC(arg0);
    v = func_8016151C(arg0);
    if (v & 0x4000) {
        AF(arg0, s32, 0x234) = D_801152B0.vx << 6;
        AF(arg0, s32, 0x238) = 0x80000;
        AF(arg0, s32, 0x23C) = D_801152B0.vz << 6;
        AF(arg0, s16, 2) = 3;
    } else if (v != 0) {
        func_80146E90(arg0, 8);
        func_80146CA0(arg0);
    } else {
        AF(arg0, s32, 0x44) |= 0x1000;
    }
}

void func_ovl34_800CD0DC(u8 *arg0) {
    s32 v;

    if (func_ovl34_800CD240(arg0) != 0) {
        return;
    }
    func_80146DE8(arg0, AF(arg0, s32, 0x234), AF(arg0, s32, 0x238), AF(arg0, s32, 0x23C));
    func_80147F50(arg0);
    func_801473EC(arg0);
    if (func_ovl34_800CD494(arg0) != 0) {
        return;
    }
    func_ovl34_800CD5CC(arg0);
    v = func_801612B8(arg0, 0);
    if (func_80146E98(arg0) != 0) {
        if (v & 0x4000) {
            AF(arg0, s32, 0x234) = D_801152B0.vx << 6;
            AF(arg0, s32, 0x238) = 0x80000;
            AF(arg0, s32, 0x23C) = D_801152B0.vz << 6;
            AF(arg0, s16, 2) = 3;
        } else if (v == 0 || v == 0x8000) {
            func_801477E8(arg0, -0x160000);
            AF(arg0, s16, 2) = 2;
        } else {
            AF(arg0, s32, 0x23C) = 0;
            AF(arg0, s32, 0x238) = 0;
            AF(arg0, s32, 0x234) = 0;
            AF(arg0, s16, 2) = 1;
        }
    } else {
        AF(arg0, s32, 0x44) |= 0x1000;
    }
}

void func_ovl34_800CD1F4(u8 *arg0) {
    func_801553C0();
    func_801553A8(arg0);
    func_80154A74(arg0, 0x11);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~0x1000);
}

extern s32 func_801488A8();
extern s32 func_80148D44();
extern void func_80147AD4();

extern u8 D_801202A0[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern void func_80015978();
extern void func_8014C3A4();

extern u8 D_ovl34_800CE0B8;
extern s32 func_80015954();

s32 func_ovl34_800CD240(u8 *arg0) {
    if (AF(arg0, s16, 0x1C8) == 0) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return 1;
    }
    return 0;
}

void func_ovl34_800CD288(u8 *arg0) {
    s32 pad[8];
    u8 *m;
    s32 moved;
    s32 x;
    s32 y;

    m = AF(arg0, u8 *, 0x20);
    if (func_801488A8(arg0) != 0) {
        func_80146D90(arg0);
        AF(m, s16, 0x12) = func_80148D44(arg0);
        func_80147AD4(arg0, 0, 0, -0xC000);
        AF(arg0, s32, 0x234) += AF(arg0, s32, 0x10);
        AF(arg0, s32, 0x238) += AF(arg0, s32, 0x14);
        AF(arg0, s32, 0x23C) += AF(arg0, s32, 0x18);
        if (AF(arg0, s32, 0x234) > 0xB0000) {
            AF(arg0, s32, 0x234) = 0xB0000;
        } else if (AF(arg0, s32, 0x234) < -0xB0000) {
            AF(arg0, s32, 0x234) = -0xB0000;
        }
        if (AF(arg0, s32, 0x238) > 0xB0000) {
            AF(arg0, s32, 0x238) = 0xB0000;
        } else if (AF(arg0, s32, 0x238) < -0xB0000) {
            AF(arg0, s32, 0x238) = -0xB0000;
        }
        if (AF(arg0, s32, 0x23C) > 0xB0000) {
            AF(arg0, s32, 0x23C) = 0xB0000;
        } else if (AF(arg0, s32, 0x23C) < -0xB0000) {
            AF(arg0, s32, 0x23C) = -0xB0000;
        }
        goto copy;
    }
    moved = 0;
    if ((x = AF(arg0, s32, 0x234)) != 0) {
        moved = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x234) = y;
            if (y < 0) {
                AF(arg0, s32, 0x234) = 0;
            }
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x234) = y;
            if (y >= 0) {
                AF(arg0, s32, 0x234) = 0;
            }
        }
    }
    if ((x = AF(arg0, s32, 0x238)) != 0) {
        moved = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x238) = y;
            if (y < 0) {
                AF(arg0, s32, 0x238) = 0;
            }
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x238) = y;
            if (y >= 0) {
                AF(arg0, s32, 0x238) = 0;
            }
        }
    }
    if ((x = AF(arg0, s32, 0x23C)) != 0) {
        moved = 1;
        if (x >= 0) {
            y = x - 0x8000;
            AF(arg0, s32, 0x23C) = y;
            if (y < 0) {
                AF(arg0, s32, 0x23C) = 0;
            }
        } else {
            y = x + 0x8000;
            AF(arg0, s32, 0x23C) = y;
            if (y >= 0) {
                AF(arg0, s32, 0x23C) = 0;
            }
        }
    }
    if (moved) {
copy:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x234);
        AF(arg0, s32, 0x14) = AF(arg0, s32, 0x238);
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x23C);
        func_801473EC(arg0);
    }
}

s32 func_ovl34_800CD494(s32 arg0) {
    s32 var_v0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80148800(arg0) & 0x90) {
        AF(arg0, u16, 0x240) = 0U;
        func_80147324(0x8E4);
    }
    if (func_801487F4(arg0) & 0x90) {
        func_ovl34_800CDA14(arg0);
        temp_v0 = AF(arg0, u16, 0x246) + 8;
        AF(arg0, u16, 0x246) = temp_v0;
        if ((s16) temp_v0 >= 0x201) {
            AF(arg0, u16, 0x246) = 0x200U;
        }
        temp_v0_2 = AF(arg0, u16, 0x240) + AF(arg0, u16, 0x246);
        AF(arg0, u16, 0x240) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x1000) {
            AF(arg0, u16, 0x240) = 0U;
            func_80147324(0x8E4);
        }
    } else {
        temp_v0_3 = AF(arg0, u16, 0x246) - 0x20;
        AF(arg0, u16, 0x246) = temp_v0_3;
        if ((temp_v0_3 << 0x10) <= 0) {
            AF(arg0, u16, 0x246) = 0U;
        }
    }
    temp_v0_4 = (AF(arg0, u16, 0x244) + AF(arg0, u16, 0x246)) & 0xFFF;
    AF(arg0, u16, 0x244) = temp_v0_4;
    AF(temp_s1, u16, 0x12) = temp_v0_4;
    if (AF(arg0, s16, 0x246) != 0) {
        return 0;
    }
    func_801599A4(arg0);
    func_80159B3C(arg0);
    return 1;
}

u8 *func_ovl34_800CD5CC(u8 *arg0) {
    AVec v;
    u8 *p;
    u8 *found;
    s32 k;

    found = NULL;
    k = 0x25;
    AF(arg0, u8, 0x1AB) ^= 1;
    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, k, 0x10) != 0 && func_8014C278(arg0, p, 0x40) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, p, k, &v);
            found = p;
        }
    }
    return found;
}

void func_ovl34_800CD6A4(u8 *arg0) {
    s32 sp10[3];

    func_8001382C((func_8014C59C(arg0) + 0x800) & 0xFFF, &D_ovl34_800CE058, sp10);
    AF(arg0, s32, 0x234) = sp10[0];
    AF(arg0, s32, 0x238) = sp10[1];
    AF(arg0, s32, 0x23C) = sp10[2];
}

void func_ovl34_800CD708(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x4C);
    D_ovl34_800CE080[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, s32, 4) = (s32) (AF(temp_a0_2, s32, 4) | (AF(AF(temp_s0, void *, 0x20), s32, 4) & 0x80000000));
    AF(arg0, s16, 0x60) = 0;
    D_ovl34_800CE8D4 = func_80012ABC((s32) D_ovl34_800CE8D4, (s32) AF(AF(temp_s0, void *, 0x20), s16, 0x12), 0xA);
    func_8014ACC0((s32) temp_s0, 1);
    if (func_80161A30((s32) temp_s0) == 0) {
        func_ovl34_800CD94C((s32) arg0);
    }
}

void func_ovl34_800CD7D8(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C214(temp_v0, &D_ovl34_800CE8CC);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_ovl34_800CD96C(arg0);
        D_ovl34_800CE8D4 = AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80146CA0(arg0);
        return;
    }
    func_ovl34_800CD94C(arg0);
}

void func_ovl34_800CD884(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    if (AF(arg0, s16, 0x60) != 0) {
        temp_v0 = AF(temp_s0, u16, 0x18) + 0x100;
        AF(temp_s0, u16, 0x18) = temp_v0;
        if ((s16) temp_v0 >= 0x1001) {
            if (rand() & 1) {
                AF(temp_s0, u16, 0x18) = 0x1000U;
            } else {
                AF(temp_s0, u16, 0x18) = 0x1333U;
            }
        }
    } else {
        temp_v0_2 = AF(temp_s0, u16, 0x18) - 0x100;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        if ((s16) temp_v0_2 < 0) {
            AF(temp_s0, u16, 0x18) = 0U;
        }
    }
    temp_v1 = AF(temp_s0, u16, 0x18);
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x12) = (u16) (AF(temp_s0, u16, 0x12) + 0x1C7);
    func_ovl34_800CD96C((s32) arg0);
}

void func_ovl34_800CD94C(void) {
    func_80162CCC();
}

void func_ovl34_800CD96C(u8 *arg0) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_a0 = AF(temp_s2, void *, 0x20);
    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 6) = (s16) AF(temp_a0, s32, 0x48);
    temp_s0 = temp_s1 + 0x34;
    AF(arg0, s16, 0xA) = (s16) (AF(temp_a0, s32, 0x4C) - 0x20);
    AF(arg0, s16, 0xE) = (s16) AF(temp_a0, s32, 0x50);
    func_80013F3C(temp_s0);
    RotMatrixY(AF(temp_s1, s16, 0x12), temp_s0);
    MulMatrix(temp_s0, AF(temp_s2, void *, 0x20) + 0x34);
    func_80020F34(temp_s0, temp_s1 + 0x18);
    AF(temp_s1, u16, 0x2C) = (u16) (AF(temp_s1, u16, 0x2C) | 1);
}

void func_ovl34_800CDA14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014C088(arg0, 0x13);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x60) = 1;
    }
}

void func_ovl34_800CDA44(u8 *arg0) {
    AF(arg0, s16, 0x1C8) = 0;
}

void func_ovl34_800CDA4C(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    D_ovl34_800CE0AC[AF(arg0, u16, 2)]();
    if (func_80161A30(temp_s0) == 0) {
        func_ovl34_800CDBD4(arg0);
    }
}

void func_ovl34_800CDAB4(u8 *arg0) {
    void *temp_v0;

    temp_v0 = func_80146578(arg0);
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, &D_ovl34_800CE068, 0x234, 0x1C0);
        AF(temp_v0, u8, 0x27) = 0x26;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, s32, 4) |= 0x08000000;
        AF(arg0, AVec, 0x60) = D_ovl34_800CE08C[AF(arg0, s32, 0x50)];
        func_80146E90(arg0, 0);
        func_ovl34_800CDBF4(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl34_800CDBD4(arg0);
}

void func_ovl34_800CDBA4(s32 arg0) {
    func_ovl34_800CDBF4();
    func_ovl34_800CDCA8(arg0);
}

void func_ovl34_800CDBD4(void) {
    func_80162CCC();
}

void func_ovl34_800CDBF4(u8 *arg0) {
    AVec v;
    AMtx m;
    u8 *s;
    u8 *o;

    s = AF(arg0, u8 *, 0x4C);
    AF(arg0, u16, 0x62) = (AF(arg0, u16, 0x62) + AF(arg0, u16, 0x66)) & 0xFFF;
    RotMatrixZYX(arg0 + 0x60, &m);
    ApplyMatrixSV(&m, &D_ovl34_800CE0B8, &v);
    o = AF(s, u8 *, 0x20);
    v.vx += AF(o, s32, 0x48);
    v.vy += AF(o, s32, 0x4C) - 0x20;
    v.vz += AF(o, s32, 0x50);
    func_80015954(&v, arg0 + 4);
}

s32 func_ovl34_800CDCA8(s32 arg0) {
    s32 var_v0;
    u16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98(arg0) != 0) {
        if (!(rand() & 0x1F)) {
            func_80146E90(arg0, (rand() & 0x1F) | 0x20);
        }
        var_v0 = AF(temp_s1, u16, 0x12) + 0x38;
    } else {
        var_v0 = AF(temp_s1, u16, 0x12) + 0x155;
    }
    temp_v0 = var_v0 & 0xFFF;
    AF(temp_s1, u16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_ovl34_800CDD34(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    D_ovl34_800CE0C0[AF(arg0, u16, 2)]();
    if (func_80161A30(temp_s0) == 0) {
        func_ovl34_800CDF64(arg0);
    }
}

void func_ovl34_800CDD9C(u8 *arg0, s32 arg1) {
    s32 temp_s2;
    AModel *temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = (AModel *) func_80146578((s32) arg0, arg1);
    AF(arg0, AModel *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, (s32) &D_ovl34_800CE068, 0x200, 0x100);
        AF(temp_v0, u8, 0x27) = 8;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_80149374(temp_s2, (s32) (arg0 + 4));
        temp_v0->rot.vx = AF(AF(temp_s2, void *, 0x20), u16, 0x10);
        temp_v0->rot.vy = D_ovl34_800CE8D4;
        temp_v0->rot.vz = AF(AF(temp_s2, void *, 0x20), u16, 0x14);
        AF(arg0, u16, 0x60) = (u16) AF(temp_s2, u16, 0x100);
        AF(arg0, u16, 0x62) = (u16) AF(temp_s2, u16, 0x102);
        AF(arg0, u16, 0x64) = (u16) AF(temp_s2, u16, 0x104);
        temp_v0->scale.vy = 0x1000;
        temp_v0->scale.vx = 0x1000;
        func_80146DE8((s32) arg0, 0, 0, -0x200000);
        func_80146E90((s32) arg0, 8);
        func_80146CA0((s32) arg0);
        func_8014ACC0(temp_s2, 1);
        return;
    }
    func_ovl34_800CDF64((s32) arg0);
}

void func_ovl34_800CDEB4(u8 *arg0) {
    s32 sp18[7];
    u16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    func_ovl34_800CDF84(arg0, sp18);
    func_80163194(arg0, 0, 0, 0, sp18);
    func_80162FC0(arg0);
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x100;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    func_80163408(arg0, 0x23, 0x80, 8);
    func_80163328(arg0);
    func_801632F0(arg0);
}

void func_ovl34_800CDF64(void) {
    func_80162CCC();
}

void func_ovl34_800CDF84(u8 *arg0, s32 arg1) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    func_80013F3C(arg1);
    func_800126C4(arg1, AF(arg0, s16, 0x60));
    func_800123F0(arg1, AF(arg0, s16, 0x64));
    func_80012558(arg1, AF(arg0, s16, 0x62));
    func_80012558(arg1, AF(temp_s2, s16, 0x12));
    func_800126C4(arg1, AF(temp_s2, s16, 0x10));
    func_800123F0(arg1, AF(temp_s2, s16, 0x14));
}
