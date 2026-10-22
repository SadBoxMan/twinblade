#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_006_8017BE9C(void) {
}

void func_sc07_006_8017BEA4(void) {
}

void func_sc07_006_8017BEAC(void) {
}

void func_sc07_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_006_8018DE48[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc07_006_8017CF54(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_006_8018DE50[])();
extern void func_800D1EBC();
extern u8 D_sc07_006_8018DE5C;
extern void func_8016EE40();
extern u8 D_sc07_006_8018DE60;
extern void func_sc07_006_8017D0F4();
extern void (*D_sc07_006_8018DF04[])();
extern void (*D_sc07_006_8018E274[])();
extern void (*D_sc07_006_8018EB2C[])();
extern void (*D_sc07_006_8018EB44[])();
extern void (*D_sc07_006_8018EB54[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc07_006_8018DE1C;
extern void func_800D1724();

extern void func_8012AD50();

extern void func_8002931C();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A018();
extern void func_8012A094();
extern s32 func_sc07_006_8017D040();

extern u8 D_sc07_006_8018DF10;
extern s32 func_80143C74();
extern void func_80128EA8();
extern s32 func_8012CBCC();
extern void func_8012C218();

extern s32 D_sc07_006_801F61C0;
extern void (*D_sc07_006_8018E940[])();

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017BEBC);

void func_sc07_006_8017CD9C(void) {
    func_8002931C(0x04740000);
}

void func_sc07_006_8017CDBC(u8 *arg0) {
    D_sc07_006_8018DE48[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CDF8(u8 *arg0) {
    func_sc07_006_8017CF54();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CE3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_006_8017CE60(u8 *arg0) {
    D_sc07_006_8018DE50[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_006_8017CE9C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_006_8017CEB8(u8 *arg0) {
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

void func_sc07_006_8017CF34(void) {
    func_800D1EBC();
}

void func_sc07_006_8017CF54(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE5C, 0x01000000);
}

void func_sc07_006_8017CF7C(void) {
    func_8016EE40((s32) &D_sc07_006_8018DE60, 0x01000000);
}

void func_sc07_006_8017CFA4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_006_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_006_8017D0F4((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D040);

void func_sc07_006_8017D0F4(s32 arg0) {
    D_sc07_006_8018DF04[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D130);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D1D0);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D4E4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D67C);

void func_sc07_006_8017D868(u8 *arg0) {
    D_sc07_006_8018E274[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017D8A4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017DA30);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017DC1C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F3D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F5D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017F9AC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8017FDF8);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801802EC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801805D4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80180924);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80180CFC);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181148);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018163C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181924);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181C74);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80181E64);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182000);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182158);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182268);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801823F8);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801826E0);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801828A4);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182B8C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182D4C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80182F3C);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80183374);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80183814);

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018881C);

void func_sc07_006_80189098(u8 *arg0) {
    s32 *var_v1;
    s32 var_a0;

    D_sc07_006_8018E940[AF(arg0, u16, 2)]();
    var_a0 = 0;
    var_v1 = &D_sc07_006_801F61C0;
    do {
        var_a0 += 1;
        *var_v1 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 4);
    } while (var_a0 < 0x10);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_801890FC);

void func_sc07_006_80189708(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, s32, 0x1C);
        if (temp_v0 != 0) {
            AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
            temp_v0_2 = func_80143C74((s32) arg0, 0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x14);
                AF(temp_v0_2, s32, 0x10) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s32, 0x18) = (s32) (((rand() & 0xFF) - 0x80) << 0xA);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 3) + 4);
                func_80128EA8(AF(temp_v0_2, s32, 0x20), temp_v0_2 + 0xD0, (s32) &D_sc07_006_8018DF10);
            }
        }
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0xFC));
        if (func_8012CBCC((s32) arg0, (s32) temp_a1) & 0x2000) {
            AF(arg0, u16, 0x34) = 1U;
            AF(arg0, s32, 0x1C) = 0x1E;
            return;
        }
        return;
    case 1:
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) ^ 0x80000000);
        temp_v0_3 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_3;
        if (temp_v0_3 == 0) {
            func_8012C218((s32) arg0);
        }
        break;
    }
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018984C);

void func_sc07_006_80189AC8(u8 *arg0) {
    D_sc07_006_8018EB2C[AF(arg0, u16, 2)]();
}

void func_sc07_006_80189B04(u8 *arg0) {
    D_sc07_006_8018EB44[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80189B40);

s32 func_sc07_006_80189C00(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 3U;
}

s32 func_sc07_006_80189C14(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 6U;
}

s32 func_sc07_006_80189C28(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 8U;
}

s32 func_sc07_006_80189C3C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xBU;
}

s32 func_sc07_006_80189C50(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xDU;
}

s32 func_sc07_006_80189C64(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0xFU;
}

s32 func_sc07_006_80189C78(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x11U;
}

s32 func_sc07_006_80189C8C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x13U;
}

s32 func_sc07_006_80189CA0(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 0x14U;
}

s32 func_sc07_006_80189CB4(u8 *arg0) {
    return (u16) AF(arg0, u16, 2) >= 2U;
}

s32 func_sc07_006_80189CC8(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 4U;
}

s32 func_sc07_006_80189CDC(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 5U;
}

void func_sc07_006_80189CF0(void) {
    func_800D1724((s32) &D_sc07_006_8018DE1C);
}

void func_sc07_006_80189D18(void) {
    func_sc07_006_8017D040(0);
}

void func_sc07_006_80189D38(void) {
    func_sc07_006_8017D040(1);
}

void func_sc07_006_80189D58(void) {
    func_sc07_006_8017D040(2);
}

void func_sc07_006_80189D78(void) {
    func_sc07_006_8017D040(3);
}

void func_sc07_006_80189D98(void) {
    func_sc07_006_8017D040(4);
}

void func_sc07_006_80189DB8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    if (AF(arg0, s32, 0x1C) == 0x1E) {
        temp_v0 = func_80143C74((s32) arg0, 0);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) (AF(arg0, u16, 6) + (AF(arg0, u16, 0x12) * 4));
            AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + (AF(arg0, u16, 0x16) * 4));
            AF(temp_v0, s16, 0xE) = (s16) (AF(arg0, u16, 0xE) + (AF(arg0, u16, 0x1A) * 4));
        }
    }
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x88);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x88);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x10) = (u16) (AF(temp_v1_3, u16, 0x10) + 0x200);
    temp_v1_4 = AF(arg0, void *, 0x20);
    AF(temp_v1_4, u16, 0x12) = (u16) (AF(temp_v1_4, u16, 0x12) + 0x100);
    temp_v1_5 = AF(arg0, void *, 0x20);
    AF(temp_v1_5, u16, 0x14) = (u16) (AF(temp_v1_5, u16, 0x14) + 0x80);
}

void func_sc07_006_80189EF4(u8 *arg0, s32 arg1) {
    void *temp_v0;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if ((func_8012CBCC((s32) arg0, arg1) & 0x2000) || (AF(arg0, s32, 0x1C) == 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x14) = (u16) (AF(temp_v0, u16, 0x14) + AF(arg0, u16, 0xFC));
}

void func_sc07_006_80189F70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_8012C218((s32) arg0);
        return;
    }
    AF(arg0, s32, 8) = (s32) (AF(AF(arg0, void *, 0x64), s32, 8) + AF(arg0, s32, 0x14));
    AF(arg0, s32, 0xC) = (s32) (AF(AF(arg0, void *, 0x64), s32, 0xC) + AF(arg0, s32, 0x18));
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_80189FDC);

void func_sc07_006_8018A124(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018A150);

void func_sc07_006_8018A284(void) {
}

void func_sc07_006_8018A28C(u8 *arg0) {
    D_sc07_006_8018EB54[AF(arg0, u16, 2)]();
}

void func_sc07_006_8018A2C8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc07_006/nonmatchings/sc07_006", func_sc07_006_8018A2F4);
