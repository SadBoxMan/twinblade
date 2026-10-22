#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_074_80182138[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_074_8017D3FC(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_074_80182140[])();
extern void func_800D1EBC();
extern void (*D_sc01_074_8018214C[])();
extern void (*D_sc01_074_80182158[])();
void func_sc01_074_8017D6D4(void);
extern void (*D_sc01_074_80182160[])();
void func_sc01_074_8017D964(void);
extern u8 D_sc01_074_80182194;
extern void func_8016EE40();
extern u8 D_sc01_074_801821A0;
extern u8 D_sc01_074_801821B4;
extern void (*D_sc01_074_801821E8[])();
extern u8 D_sc01_074_801821D0;
extern void (*D_sc01_074_80182210[])();
extern u8 D_sc01_074_80182208;
extern void func_sc01_074_8017DD1C();
extern void (*D_sc01_074_8018222C[])();
extern void (*D_sc01_074_8018223C[])();
extern void (*D_sc01_074_80182254[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void (*D_sc01_074_801821BC[])();
extern void func_sc01_074_8017D2F8();
extern void func_8014708C();
extern void func_801472C8();
extern void func_sc01_074_8017D98C();
extern void func_80171990();
extern void func_sc01_074_8017DB04();
extern void func_8012AD50();

extern void func_80171928();
extern u8 D_sc01_074_80182050;
extern void func_800D1724();

extern u8 D_sc01_074_80182168;
extern void func_80154274();
extern void func_80146DE8();
extern void func_80147324();
extern u8 D_sc01_074_8018202C;
extern void func_80147AD4();
extern void func_801473EC();
extern void func_sc01_074_8017D364();
extern u8 D_sc01_074_80182200[];
extern s32 func_sc01_074_8017D918();
extern u8 D_sc01_074_801821D8;
extern s32 func_8012E544();
extern s32 func_80015954();
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
extern u8 D_sc01_074_80195D14;
extern s32 func_8012C1B8();
extern void func_8001C214();

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017BE9C);

void func_sc01_074_8017CD7C(u8 *arg0) {
    D_sc01_074_80182138[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CDB8(u8 *arg0) {
    func_sc01_074_8017D3FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CDFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_074_8017CE20(u8 *arg0) {
    D_sc01_074_80182140[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CE5C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_074_8017CE78(u8 *arg0) {
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

void func_sc01_074_8017CEF4(void) {
    func_800D1EBC();
}

void func_sc01_074_8017CF14(u8 *arg0) {
    D_sc01_074_8018214C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017CF50(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017CFC4);

void func_sc01_074_8017D034(u8 *arg0) {
    D_sc01_074_80182158[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D070(u8 *arg0) {
    func_sc01_074_8017D6D4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D0B4(u8 *arg0) {
    D_sc01_074_80182160[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_074_8017D0F0(u8 *arg0) {
    func_sc01_074_8017D964();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc01_074_8017D134(void) {
    func_8016EE40((s32) &D_sc01_074_80182194, 0x01000000);
}

void func_sc01_074_8017D15C(void) {
    func_8016EE40((s32) &D_sc01_074_801821A0, 0x01000000);
}

void func_sc01_074_8017D184(u8 *arg0) {
    D_sc01_074_801821BC[AF(arg0, u8, 0x216)]();
    func_sc01_074_8017D2F8((s32) arg0, (s32) AF(arg0, s16, 0x20C));
}

void func_sc01_074_8017D1D8(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc01_074_80182168);
    func_80146DE8(arg0, 0, 0x20000, 0);
    AF(arg0, s32, 0x200) = 0x40;
    AF(arg0, s16, 0x20C) = 1;
    func_80147324(0xBCA);
    func_80171990(arg0);
}

void func_sc01_074_8017D244(s32 arg0) {
    s32 temp_v0;

    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_074_8018202C);
        func_80171990(arg0);
    }
    func_sc01_074_8017D364(arg0);
}

void func_sc01_074_8017D2B4(s32 arg0) {
    func_80147AD4(arg0, 0, 0, -0x8000);
    func_801473EC(arg0);
    func_sc01_074_8017D364(arg0);
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017D2F8);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017D364);

void func_sc01_074_8017D3FC(void) {
    func_8016EE40((s32) &D_sc01_074_801821B4, 0x01000000);
}

void func_sc01_074_8017D424(u8 *arg0) {
    D_sc01_074_801821E8[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D460(s32 arg0) {
    EndScene(arg0);
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x316;
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    AF(arg0, s16, 0x20E) = 0x1E;
    func_80171990(arg0);
}

void func_sc01_074_8017D4D0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) - 1;
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 == -1) {
        func_8002D4C8(0xBE8, 0);
        AF(arg0, u16, 0x20E) = 0U;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D528(u8 *arg0) {
    u16 temp_v0;
    u8 temp_s1;

    temp_v0 = AF(arg0, u16, 0x20E);
    AF(arg0, u16, 0x20E) = (u16) (temp_v0 + 1);
    temp_s1 = D_sc01_074_80182200[(s16) temp_v0];
    if (temp_s1 == 0) {
        func_8002D4C8(0xBE7, 0);
        func_80171990((s32) arg0);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), (s32) temp_s1);
}

void func_sc01_074_8017D5A8(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) + 0x4000;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 > 0xA0000) {
        AF(arg0, s32, 0x204) = 0xA0000;
    }
    temp_v0_2 = AF(arg0, s32, 0x200) - AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0_2;
    if (temp_v0_2 < 0x259) {
        func_80171990((s32) arg0, arg1);
    }
    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017D634);

void func_sc01_074_8017D6CC(void) {
}

void func_sc01_074_8017D6D4(void) {
    func_8016EE40((s32) &D_sc01_074_801821D0, 0x01000000);
}

void func_sc01_074_8017D6FC(u8 *arg0) {
    D_sc01_074_80182210[AF(arg0, u8, 0x216)]();
}

void func_sc01_074_8017D738(s32 arg0) {
    EndScene();
    func_8014708C(arg0);
    func_801472C8(arg0);
    AF(arg0, s32, 0x200) = 0x190;
    AF(arg0, s16, 0x20C) = 1;
    func_sc01_074_8017D98C(arg0, 1, AF(arg0, s32, 0x200), 0);
    func_80147324(0xC26);
    func_80171990(arg0);
}

void func_sc01_074_8017D7A4(u8 *arg0) {
    s32 temp_v0;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v0 = AF(arg0, s32, 0x200) + 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x258) {
        AF(arg0, s32, 0x204) = 0xA0000;
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D80C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_sc01_074_8017D98C((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc01_074_8017DB04((s32) arg0, 0);
    temp_v1 = AF(arg0, s32, 0x204) - 0x4000;
    AF(arg0, s32, 0x204) = temp_v1;
    if (temp_v1 <= 0xFFFF) {
        AF(arg0, s32, 0x204) = 0x10000;
    }
    temp_v0 = AF(arg0, s32, 0x200) + AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x316) {
        AF(arg0, s32, 0x200) = 0x1E;
        func_sc01_074_8017D918((s32) arg0);
        func_80147324(0xC25);
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8A8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

void func_sc01_074_8017D8DC(s32 arg0) {
    func_800D1724((s32) &D_sc01_074_80182050);
    func_80171928(arg0);
}

s32 func_sc01_074_8017D918(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8012E544(0x19C);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 0;
    }
    var_v0 = func_8012E544(0x29A);
    if (var_v0 != 0) {
        var_v0 = func_80015954((s32) &D_sc01_074_801821D8, var_v0 + 4);
    }
    return var_v0;
}

void func_sc01_074_8017D964(void) {
    func_8016EE40((s32) &D_sc01_074_80182208, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017D98C);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017DB04);

void func_sc01_074_8017DBA0(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x7D0;
    D_80126968 = 0x18E;
    D_8012696A = 0xDE0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x19;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_074_8017DD1C, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_074_8017DD1C((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017DC3C);

void func_sc01_074_8017DD1C(s32 arg0) {
    D_sc01_074_8018222C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017DD58);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017DE0C);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017DE88);

void func_sc01_074_8017E020(u8 *arg0) {
    D_sc01_074_8018223C[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E05C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017E07C);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017E158);

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017E3E0);

void func_sc01_074_8017E4C8(u8 *arg0) {
    D_sc01_074_80182254[AF(arg0, u16, 2)]();
}

void func_sc01_074_8017E504(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_074_80195D14);
        func_8012AD50((s32) arg0);
    }
}

void func_sc01_074_8017E54C(void) {
}

INCLUDE_ASM("asm/stg/sc01_074/nonmatchings/sc01_074", func_sc01_074_8017E554);
