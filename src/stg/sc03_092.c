#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_092_8017BE9C(void) {
}

void func_sc03_092_8017BEA4(void) {
}

void func_sc03_092_8017BEAC(void) {
}

void func_sc03_092_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_092_80188718[])();
extern void func_80147324();
extern void func_sc03_092_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_092_8018872C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_092_80188740[])();
extern void func_800D22E4();
extern void func_sc03_092_8017C910();
extern void (*D_sc03_092_80188760[])();
extern void (*D_sc03_092_80188768[])();
extern u8 D_sc03_092_80188754;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void (*D_sc03_092_80188918[])();
void func_sc03_092_8017DCC8(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_092_80188920[])();
void func_sc03_092_8017DE4C(void);
extern void (*D_sc03_092_80188928[])();
void func_sc03_092_8017DCF0(void);
extern void func_800D1EBC();
extern void (*D_sc03_092_80188934[])();
void func_sc03_092_8017DE24(void);
extern u8 D_sc03_092_8018893C;
extern void func_8016EE40();
extern u8 D_sc03_092_80188940;
extern void (*D_sc03_092_80188954[])();
extern u8 D_sc03_092_8018894C;
extern u8 D_sc03_092_801889A4;
extern void func_sc03_092_8017E008();
extern void (*D_sc03_092_801889B4[])();
extern void (*D_sc03_092_80188C70[])();
extern void func_sc03_092_8017E6A0();
extern void (*D_sc03_092_80188E48[])();
extern void (*D_sc03_092_80188EE8[])();
extern void (*D_sc03_092_801893A0[])();
extern void (*D_sc03_092_8018944C[])();
extern void (*D_sc03_092_80189488[])();
extern void func_sc03_092_80180A10();
extern void (*D_sc03_092_80189518[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc03_092_80189508;
extern u8 D_sc03_092_801894F8;
extern u8 D_sc03_092_801894E8;
extern u8 D_sc03_092_801894D8;
extern s32 func_80029504();
extern s32 func_sc03_092_80180AE0();
extern void (*D_sc03_092_801AC67C[])();
extern void (*D_sc03_092_801AD7C8[])();
extern void (*D_sc03_092_801AD87C[])();
extern void (*D_sc03_092_801AFEA0[])();
extern void (*D_sc03_092_801B01E8[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_092_8018502C;
extern s32 func_80029178();
extern u8 D_sc03_092_801AFED8;
extern void func_sc03_092_801837D4();
extern s32 D_sc03_092_801AFF40[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_092_801B010C;
extern s32 D_sc03_092_801B0110;
extern s32 D_sc03_092_801B0124;
extern s32 D_sc03_092_801B0138;
extern s32 D_sc03_092_801B01A4;
extern s32 D_sc03_092_801B0088[];
extern s32 D_sc03_092_801B0004[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_092_8018357C();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_092_801B0210[])();
extern u8 D_sc03_092_801AFF0C;
extern u8 D_sc03_092_801AFB90;
extern u8 D_sc03_092_801AFDB0;
extern void func_8002D4C8();
extern u8 D_sc03_092_801AFBA0;
extern u8 D_sc03_092_801AFCA8;
extern void (*D_sc03_092_801B033C[])();
extern u8 D_sc03_092_801B02EC;
extern void (*D_sc03_092_801B0404[])();

void func_sc03_092_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_092_8017BEF8(u8 *arg0) {
    D_sc03_092_80188718[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_092_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017BFE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_80147324((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C064(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            func_8014708C((s32) temp_s0);
            func_801472C8((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_092_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012AD44();
extern s32 func_sc03_092_8017F088();
extern s32 D_sc03_092_801B2E70;
extern s32 func_8012BEE8();
extern void func_sc03_092_8018052C();
extern void (*D_sc03_092_801AC620[])();
extern void func_sc03_092_80180EC8();
extern s32 D_sc03_092_801AC5D8;
extern u8 D_sc03_092_801AD2DC;
extern u8 D_sc03_092_801AD2FC;
extern u8 D_sc03_092_801AD3C0;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern u8 D_sc03_092_801B023C;
extern void func_sc03_092_80183C04();
extern s32 D_sc03_092_801B2F2C;
extern void func_800296F8();
extern void func_sc03_092_80184040();
extern u8 D_sc03_092_801B0368;
extern void func_sc03_092_80184370();
extern s32 func_sc03_092_8018412C();
extern void func_sc03_092_80183FB0();
extern s32 func_80178970();
extern void func_800D1724();

extern void func_80171990();
extern s32 func_8014C050();
extern s32 func_80171928();
extern void func_8014BB0C();
extern void func_8014BDC8();

extern s32 func_sc03_092_8017F49C();

extern void func_80146994();
extern u8 D_sc03_092_801889F0;
extern s32 D_sc03_092_80188C58[];
extern s32 func_8012BE54();
extern u8 D_sc03_092_80188E00;
extern void func_80178B18();
extern s32 func_sc03_092_8017E754();
extern void func_8001C2C4();
s32 func_sc03_092_8017F29C(s32 arg0);
extern void func_sc03_092_8018074C();
extern s32 func_sc03_092_8017F4BC();
extern s16 D_sc03_092_801B3010;
extern u8 D_sc03_092_80188EF8;
extern void func_8012E8A8();
extern s32 func_8012E8E0();
extern s32 func_8012E57C();
extern void func_8012B200();
extern void func_80172710();
extern s32 func_sc03_092_8017F87C();
extern s32 func_8012BD14();
extern void func_80178BF8();
extern s32 D_80126B9C;
extern u8 D_sc03_092_801893D4;
extern void func_sc03_092_801804C0();

extern u8 D_sc03_092_801893B4;
extern void func_8012E88C();
extern s32 D_sc03_092_80189434[];
extern u16 D_sc03_092_80189444[];
extern u8 D_sc03_092_80189458;
extern u8 D_sc03_092_80189460;
extern s32 D_sc03_092_80189480[];


extern void func_8012B23C();
extern void func_8001CA1C();
extern SV8 D_sc03_092_801AD698[];
extern u8 D_sc03_092_801AD3FC;
extern u8 D_sc03_092_801AD4BC;
extern u8 D_sc03_092_801AD544;
extern u8 D_sc03_092_801AD604;
extern u8 D_sc03_092_801AD6E8;
extern u8 D_sc03_092_801AD70C;
extern u8 D_sc03_092_801AD6F8;
extern u8 D_sc03_092_801AD704;

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017C218);

void func_sc03_092_8017C524(u8 *arg0) {
    D_sc03_092_8018872C[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_092_8017C5A0(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C610(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        func_80147324((s32) AF(arg0, u16, 0x2C));
        func_80147084(temp_s1);
        func_801472B4(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C69C(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            func_80146A6C(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_092_8017C218((s32) arg0);
}

void func_sc03_092_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_092_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_092_8017C7C4(u8 *arg0) {
    D_sc03_092_80188740[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017C800);

void func_sc03_092_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_092_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017C910);

void func_sc03_092_8017CA80(u8 *arg0) {
    D_sc03_092_80188760[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017CABC);

void func_sc03_092_8017CC80(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc03_092_8017CD14(u8 *arg0) {
    D_sc03_092_80188768[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017CD50(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_092_80188754, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc03_092_8017CDF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017CE58);

void func_sc03_092_8017D9CC(u8 *arg0) {
    D_sc03_092_80188918[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DA08(u8 *arg0) {
    func_sc03_092_8017DCC8();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DA4C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_092_8017DA70(u8 *arg0) {
    D_sc03_092_80188920[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DAAC(u8 *arg0) {
    func_sc03_092_8017DE4C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_092_8017DAF0(u8 *arg0) {
    D_sc03_092_80188928[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DB2C(u8 *arg0) {
    func_sc03_092_8017DCF0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DB6C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_092_8017DBE8(void) {
    func_800D1EBC();
}

void func_sc03_092_8017DC08(u8 *arg0) {
    D_sc03_092_80188934[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_092_8017DC44(u8 *arg0) {
    func_sc03_092_8017DE24();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_092_8017DC88(void) {
    if (func_800167F0(0) & 0xFFFF) {
        func_80171990((s32) &D_80126B58);
        return 1;
    }
    return 0;
}

void func_sc03_092_8017DCC8(void) {
    func_8016EE40((s32) &D_sc03_092_8018893C, 0x01000000);
}

void func_sc03_092_8017DCF0(void) {
    func_8016EE40((s32) &D_sc03_092_80188940, 0x01000000);
}

void func_sc03_092_8017DD18(u8 *arg0) {
    D_sc03_092_80188954[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017DD54);

void func_sc03_092_8017DD9C(void) {
}

void func_sc03_092_8017DDA4(s32 arg0) {
    func_80146994(0x1A, arg0, 0x068E068F, 0);
    func_80171990(arg0);
}

void func_sc03_092_8017DDE8(s32 arg0) {
    if (func_8014C050(arg0, 0x1A) == 0) {
        func_80171928(arg0);
    }
}

void func_sc03_092_8017DE24(void) {
    func_8016EE40((s32) &D_sc03_092_8018894C, 0x01000000);
}

void func_sc03_092_8017DE4C(void) {
    func_8016EE40((s32) &D_sc03_092_801889A4, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017DE74);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017DF40);

void func_sc03_092_8017E008(s32 arg0) {
    D_sc03_092_801889B4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E044);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E2FC);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E524);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E580);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E60C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E6A0);

s32 func_sc03_092_8017E754(void) {
    return MoveImage((s32) &D_sc03_092_801889F0, 0x340, 0x100);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017E780);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017EAA0);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017EBD0);

void func_sc03_092_8017ECFC(u8 *arg0) {
    D_sc03_092_80188C70[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017ED38);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017EDDC);

void func_sc03_092_8017EE38(void) {
}

void func_sc03_092_8017EE40(u8 *arg0) {
    func_80178CBC((s32) arg0, D_sc03_092_80188C58[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 4;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017EE8C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017EF54);

void func_sc03_092_8017F01C(s32 arg0) {
    void *temp_a0;
    void *temp_v0;

    if (func_8012BE54(arg0) <= 0x400000) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
        return;
    }
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
}

s32 func_sc03_092_8017F088(s32 arg0) {
    return func_8012AD44(arg0, 1);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017F0A8);

s32 func_sc03_092_8017F214(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_092_80188E00);
    return func_8012AD44(arg0, 2);
}

void func_sc03_092_8017F250(void) {
    func_sc03_092_8017E754();
    func_8002D4C8(0xB16, 0);
}

void func_sc03_092_8017F27C(s32 arg0) {
    func_sc03_092_8017E6A0(arg0);
}

s32 func_sc03_092_8017F29C(s32 arg0) {
    return func_8012AD44(arg0, 3);
}

void func_sc03_092_8017F2BC(u8 *arg0) {
    D_sc03_092_80188E48[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017F2F8);

s32 func_sc03_092_8017F49C(s32 arg0) {
    return func_8012AD44(arg0, 2);
}

s32 func_sc03_092_8017F4BC(s32 arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    return func_8012AD44(arg0, 3);
}

s32 func_sc03_092_8017F4F4(u8 *arg0) {
    return AF(arg0, u16, 2) == 3;
}

void func_sc03_092_8017F508(u8 *arg0) {
    D_sc03_092_80188EE8[AF(arg0, u16, 2)]();
}

void func_sc03_092_8017F544(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    if (func_80029178(0xB3) & 0xFF) {
        func_sc03_092_8017F29C((s32) arg0);
        return;
    }
    func_sc03_092_8017F088((s32) arg0);
}

void func_sc03_092_8017F5B8(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_sc03_092_8017F29C(arg0);
    }
}

void func_sc03_092_8017F5F8(void) {
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017F600);

void func_sc03_092_8017F704(s32 arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if (AF(arg0, s16, 0x70) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            temp_v0 = AF(arg0, u16, 0xFE) + 4;
            AF(arg0, u16, 0xFE) = temp_v0;
            AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x100) - temp_v0);
            if ((s16) AF(arg0, u16, 0xFE) >= 0x90) {
                func_sc03_092_8017F4BC(arg0);
            } else {
                AF(arg0, s32, 0x1C) = 3;
            }
        }
        temp_v0_2 = AF(arg0, s16, 0x84);
        if (temp_v0_2 != 0) {
            temp_v0_3 = temp_v0_2 - 1;
            AF(arg0, s16, 0x84) = temp_v0_3;
            if ((temp_v0_3 << 0x10) == 0) {
                func_8002D4C8(0x757, 0);
            }
        }
        func_80178970(arg0);
        return;
    }
    AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x100) + AF(AF(arg0, void *, 0x64), u16, 0xFE));
    if ((s16) AF(AF(arg0, void *, 0x64), u16, 0xFE) >= 0x90) {
        func_sc03_092_8017F4BC(arg0);
    }
}

void func_sc03_092_8017F7FC(u8 *arg0) {
    if ((AF(arg0, s16, 0x70) == 0) && (AF(arg0, u16, 0x34) == 0) && (func_80178970((s32) arg0) != 0) && (D_sc03_092_801B3010 == 0)) {
        func_80178D18((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017F87C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017F8D8);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017FA74);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017FC44);

s32 func_sc03_092_8017FE04(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    func_8012E8A8(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    return func_8012E8E0(arg0, (s32) &D_sc03_092_80188EF8);
}

void func_sc03_092_8017FE4C(u8 *arg0) {
    D_sc03_092_801893A0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017FE88);

void func_sc03_092_8017FF34(void) {
    func_80029514(0x14A);
}

s32 func_sc03_092_8017FF54(s32 arg0, s32 arg1) {
    D_sc03_092_801B2E70 = 1;
    return 1;
}

void func_sc03_092_8017FF68(void) {
    D_sc03_092_801B2E70 = 2;
}

void func_sc03_092_8017FF7C(void) {
    D_sc03_092_801B2E70 = 3;
}

void func_sc03_092_8017FF90(void) {
    D_sc03_092_801B2E70 = 0;
}

void func_sc03_092_8017FFA0(void) {
    D_sc03_092_801B2E70 = 4;
}

void func_sc03_092_8017FFB4(void) {
    func_80029124(0x100, 1);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8017FFD8);

void func_sc03_092_80180074(void) {
    func_8014BB0C();
    func_8014BDC8();
    func_8002D4C8(0x45C, 0);
}

void func_sc03_092_801800A8(void) {
    s32 temp_v0;

    temp_v0 = func_8012E57C(0x1AF, 1);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 1;
    }
}

void func_sc03_092_801800DC(u8 *arg0) {
    func_8012B200();
    AF(arg0, s32, 0x10) = 0x40000;
}

void func_sc03_092_8018010C(void) {
    func_80029514(0x17C);
}

void func_sc03_092_8018012C(void) {
    func_80029124(0x105, 1);
}

s32 *func_sc03_092_80180150(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (func_sc03_092_8017F87C() != 3) && (func_sc03_092_8017F87C() != 4)) {
        if (func_8012BD14((s32) AF(arg0, void *, 0x64)) < 0x4001) {
            AF(AF(arg0, void *, 0x64), u16, 2) = 2U;
            func_80178BF8();
            return &func_80172710;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc03_092_801801EC(void) {
}

void func_sc03_092_801801F4(u8 *arg0) {
    D_sc03_092_8018944C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180230);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180298);

void func_sc03_092_801802EC(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if ((AF(arg0, s16, 0x70) < 2) && !(func_80029178(0x100) & 0xFF) && (D_80126B9C & 0x08000000) && (func_8012BD14(arg0) < 0x2401)) {
        AF(arg0, s16, 2) = 2;
        func_80178B18(arg0, (s32) &D_sc03_092_801893D4);
    }
}

void func_sc03_092_80180380(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        func_80029124(0x100, 1);
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        func_8012E8E0(arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 8) + &D_sc03_092_801893B4));
    }
}

void func_sc03_092_801803F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), D_sc03_092_80189434[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 2) = 1;
    func_8012E88C((s32) arg0);
    func_8012E8E0((s32) arg0, (s32) ((((u16) AF(arg0, s16, 0x70) & 0xF) * 8) + &D_sc03_092_801893B4));
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x400;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
    AF(AF(arg0, s32, 0x20), u16, 0x10) = D_sc03_092_80189444[AF(arg0, s16, 0x70)];
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void func_sc03_092_801804C0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012E8E0(arg0, (s32) &D_sc03_092_80189458);
    if (AF(arg0, s16, 0x70) != 0) {
        SetScript(arg0, (s32) &D_sc03_092_801AFBA0);
    }
    AF(arg0, s32, 0x1C) = 0x20;
    func_8002D4C8(0x5BF, 0);
}

void func_sc03_092_8018052C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    func_8012E8E0(arg0, (s32) &D_sc03_092_80189458);
    if (AF(arg0, s16, 0x70) != 0) {
        SetScript(arg0, (s32) &D_sc03_092_801AFDB0);
    }
}

void func_sc03_092_80180584(u8 *arg0) {
    D_sc03_092_80189488[AF(arg0, u16, 2)]();
}

void func_sc03_092_801805C0(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
    if ((AF(arg0, s16, 0x70) != 0) && (AF(arg0, s16, 0xFC) != 0)) {
        func_sc03_092_801804C0(arg0);
    }
}

void func_sc03_092_80180614(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc03_092_8018052C(arg0);
    }
}

void func_sc03_092_8018064C(s32 arg0) {
    func_sc03_092_8018074C(arg0, arg0 + 0x24);
}

void func_sc03_092_8018066C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
    }
    func_8001C214(AF(arg0, s32, 0x20), D_sc03_092_80189480[AF(arg0, s16, 0x70)]);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x58) = (s32) ((s32) ((AF(arg0, s16, 0x70) * 0x10) + &D_sc03_092_80189460) | 0x40000000);
    func_8012E8E0((s32) arg0, (s32) &D_sc03_092_80189458);
    if ((AF(arg0, s16, 0x70) != 0) || (AF(AF(arg0, s32, 0x20), s16, 0x12) = 0x800, (AF(arg0, s16, 0x70) != 0))) {
        SetScript((s32) arg0, (s32) &D_sc03_092_801AFB90);
    }
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018074C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180874);

void func_sc03_092_801809F0(s32 arg0) {
    func_sc03_092_80180A10(arg0);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180A10);

s32 func_sc03_092_80180A9C(void) {
    return 0x36;
}

void func_sc03_092_80180AA4(u8 *arg0) {
    D_sc03_092_80189518[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180AE0);

void func_sc03_092_80180B28(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_80029504();
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_092_80189508;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894F8);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894E8);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc03_092_80180AE0(arg0, &D_sc03_092_801894D8);
    }
}

void func_sc03_092_80180BF4(void) {
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180BFC);

void func_sc03_092_80180D80(u8 *arg0) {
    D_sc03_092_801AC620[AF(arg0, u16, 2)]();
    func_sc03_092_80180EC8((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180DD0);

s32 func_sc03_092_80180E50(s32 arg0) {
    s32 temp_s2;
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_s2 = AF(temp_v1, s32, 0x20);
    var_s0 = 0;
    AF(temp_v1, s32, 0x20) = (s32) D_sc03_092_801AC5D8;
    do {
        func_8012C658(0x150, var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 5);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 0x20) = temp_s2;
    return (s32) temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180EC8);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80180F08);

void func_sc03_092_80181124(u8 *arg0) {
    D_sc03_092_801AC67C[AF(arg0, u16, 2)]();
}

void func_sc03_092_80181160(void) {
}

void func_sc03_092_80181168(void) {
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80181170);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80181274);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018150C);

void func_sc03_092_80181694(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_092_801AD698[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        SetScript(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD544);
        SetScript(arg0, &D_sc03_092_801AD604);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_092_801AD6E8;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_092_801AD70C;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_092_801AD3C0;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        SetScript(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD544);
        SetScript(arg0, &D_sc03_092_801AD604);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD6F8);
        SetScript(arg0, &D_sc03_092_801AD704);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_092_801AD3FC);
        SetScript(arg0, &D_sc03_092_801AD4BC);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80181B40);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80181CD4);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182084);

void func_sc03_092_80182170(u8 *arg0) {
    D_sc03_092_801AD7C8[AF(arg0, u16, 2)]();
}

void func_sc03_092_801821AC(u8 *arg0) {
    D_sc03_092_801AD87C[AF(arg0, u16, 2)]();
}

void func_sc03_092_801821E8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_092_80182200(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_092_801AD2FC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_092_801AD2DC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_092_8018502C);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_092_801822A4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_092_801822C0(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_092_801AD3C0) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_092_801AD2DC;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_092_8018502C, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182344);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182380);

void func_sc03_092_801823B0(s32 arg0) {
    void *temp_a0;

    if (func_8012CBCC(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            func_8012E688(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182434);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801824F8);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801825D8);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182648);

void func_sc03_092_80182724(void) {
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018272C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801827E4);

void func_sc03_092_801828A8(s32 arg0) {
    s32 temp_v0;

    func_8012CBA4(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    func_8012DFD4(arg0);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801828FC);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182978);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182A5C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182B28);

void func_sc03_092_80182C00(u8 *arg0) {
    D_sc03_092_801AFEA0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182C3C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182E30);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182EE0);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80182F90);

void func_sc03_092_80183040(void) {
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80183048);

void func_sc03_092_801830EC(u8 *arg0) {
    D_sc03_092_801B01E8[AF(arg0, u16, 2)]();
}

void func_sc03_092_80183128(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_092_801AFED8) != 0) {
        if (!(func_80029178(D_sc03_092_801AFF40[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_092_801837D4);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_092_8018502C);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_092_801831FC(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_092_80183224(void) {
}

void func_sc03_092_8018322C(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_092_801B0124 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_092_801B0088[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_092_801B0110 = 0;
            func_80029124(D_sc03_092_801B0088[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_092_801B010C = 2;
        } else {
            D_sc03_092_801B0124 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_092_801B0004[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_092_801B010C = 0;
            D_sc03_092_801B0110 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_092_801B0138);
    } else {
        var_a1 = &D_sc03_092_801B01A4;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_092_80183378(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_092_801AFF40[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_092_801AFF40[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_092_8018357C() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_092_80183498(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_092_801834C4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_092_801834D4(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_092_801834E4(u8 *arg0) {
    func_80029124(D_sc03_092_801AFF40[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_092_80183524(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_092_80183558(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018357C);

void func_sc03_092_801835E0(u8 *arg0) {
    D_sc03_092_801B0210[AF(arg0, u16, 2)]();
}

void func_sc03_092_8018361C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_092_801AFF0C) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_092_801AFDB0);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_092_801836A4(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_092_801AFBA0);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_092_801AFCA8);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_092_80183764(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_092_801AFDB0);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801837D4);

void func_sc03_092_801838CC(u8 *arg0) {
    D_sc03_092_801B033C[AF(arg0, u16, 2)]();
}

void func_sc03_092_80183908(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc03_092_801B023C)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc03_092_80183C04);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc03_092_801AFB90);
    }
}

void func_sc03_092_801839E0(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_092_80183A08(void) {
}

void func_sc03_092_80183A10(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc03_092_801B02EC);
}

void func_sc03_092_80183A3C(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80183A7C);

void func_sc03_092_80183B3C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc03_092_801AFB90);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc03_092_80183BA8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_092_80183BB8(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc03_092_80183BC8(void) {
    return D_sc03_092_801B2F2C == 1;
}

void func_sc03_092_80183BE0(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80183C04);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80183D58);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80183FB0);

void func_sc03_092_80184004(u8 *arg0) {
    D_sc03_092_801B0404[AF(arg0, u16, 2)]();
}

void func_sc03_092_80184040(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_092_801B0368;
    func_sc03_092_80184370(temp_s1, (s32) temp_s2);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) - 4);
        temp_v0 = AF(temp_s2, u16, 4) + 1;
        AF(temp_s2, u16, 4) = temp_v0;
        if ((s16) temp_v0 >= 0x30) {
            AF(temp_s2, u16, 4) = 0x10U;
        }
    } else {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + 4);
        temp_v0_2 = AF(temp_s2, u16, 4) - 1;
        AF(temp_s2, u16, 4) = temp_v0_2;
        if ((s16) temp_v0_2 < 0x11) {
            AF(temp_s2, u16, 4) = 0x30U;
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018412C);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_801841EC);

void func_sc03_092_8018423C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s1;

    temp_v0 = AF(arg0, s16, 0x70);
    temp_s1 = AF(arg0, void *, 0x20);
    if (!(temp_v0 & 0x8000)) {
        if (temp_v0 & 0x2000) {
            if (temp_v0 & 0x1000) {
                AF(arg0, s16, 0x70) = (s16) (temp_v0 & 0xDFFF);
                func_8002D4C8(0x701, 0);
                goto block_4;
            }
        } else {
block_4:
            temp_v0_2 = AF(temp_s1, s16, 0x18);
            if (temp_v0_2 < 0x800) {
                AF(temp_s1, s16, 0x18) = (s16) (temp_v0_2 + 0x40);
                AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) + 0x40);
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_092_8018412C((s32) arg0, 0x30) != 0)) {
                func_sc03_092_80183FB0((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_092_80184040((s32) arg0);
        }
    }
}

void func_sc03_092_80184324(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_092_80184040(arg0);
}

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_80184370);

INCLUDE_ASM("asm/stg/sc03_092/nonmatchings/sc03_092", func_sc03_092_8018478C);

void func_sc03_092_80184CAC(void) {
}
