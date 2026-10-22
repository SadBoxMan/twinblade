#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_009_801863B4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_009_8017CFAC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc01_009_8017CFD4(void);
extern void func_800D1EBC();
extern void (*D_sc01_009_801863C8[])();
extern u8 D_sc01_009_801863D4;
extern void func_8016EE40();
extern u8 D_sc01_009_801863E0;
extern void func_sc01_009_8017D0BC();
extern void (*D_sc01_009_801863F4[])();
extern s16 D_sc01_009_801F3180;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_009_801E9070[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_009_801E9A18[])();
extern void (*D_sc01_009_801EEDBC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc01_009_801F3304;


extern s16 D_801274E8;
extern void func_sc01_009_8017D120();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_009_801F3188;
extern s32 D_sc01_009_801F32B8;
extern s32 D_sc01_009_801F32C0;
extern void func_800D24A0();
extern void func_sc01_009_8017D47C();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern u8 D_sc01_009_801E9088;
extern s32 func_sc01_009_8017F2A0();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc01_009_8017D2E0();
extern void func_80029514();
extern void func_800291A0();
extern s32 func_800291B4();
extern s32 D_sc01_009_801E97C4;
extern void func_8001AAA0();
extern void func_8001B710();
extern u8 D_sc01_009_801E90E0;
extern u8 D_sc01_009_801E9260;
extern u8 D_sc01_009_801E9968;
extern s32 func_801789AC();
extern void func_80178CBC();
extern void func_80178D18();
extern void func_801746A4();
extern u8 D_sc01_009_801E99D8;
extern u8 D_sc01_009_801E9178;
extern void func_sc01_009_80181724();
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8014B2A8();
extern void func_8014BB24();
extern void func_80029124();
extern s16 D_sc01_009_801F32D0;
extern void func_8012B200();
extern s32 func_8012C658();
extern void func_80146A6C();
extern u8 D_sc01_009_801EDA20;
extern s32 D_sc01_009_801F32E8;
extern u8 D_sc01_009_801ED890;
extern u8 D_sc01_009_801EDA68;
extern void func_8017B368();
extern void func_sc01_009_8018144C();
extern u8 D_sc01_009_801EB424;
extern u8 D_sc01_009_801EB314;
extern s32 func_80012ABC();
extern u8 D_sc01_009_801EB4AC;
extern u8 D_sc01_009_801EB534;
extern u8 D_sc01_009_801EB39C;
extern u8 D_sc01_009_801EE8EC;
extern s32 D_sc01_009_801ED72C[];
extern u8 D_sc01_009_801ED404;
extern void func_8012C218();


extern u8 D_sc01_009_80183A40[];

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017BE9C);

void func_sc01_009_8017CD7C(u8 *arg0) {
    D_sc01_009_801863B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_009_8017CDB8(u8 *arg0) {
    func_sc01_009_8017CFAC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_009_8017CDFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc01_009_8017CE20(u8 *arg0) {
    func_sc01_009_8017CFD4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_009_8017CE60(u8 *arg0) {
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

void func_sc01_009_8017CEDC(void) {
    func_800D1EBC();
}

void func_sc01_009_8017CEFC(u8 *arg0) {
    D_sc01_009_801863C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_009_8017CF38(u8 *arg0) {
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

void func_sc01_009_8017CFAC(void) {
    func_8016EE40((s32) &D_sc01_009_801863D4, 0x01000000);
}

void func_sc01_009_8017CFD4(void) {
    func_8016EE40((s32) &D_sc01_009_801863E0, 0x01000000);
}

void func_sc01_009_8017CFFC(void) {
    D_80126954 = 0x12C;
    D_80126950 = 0x12C;
    D_8012695C = 0x2BC;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x91;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_009_8017D0BC, 0);
    D_801274EA = -0x82;
    D_801274E8 = 0;
    D_801274EC = -0xB9;
    func_sc01_009_8017D0BC((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_009_8017D0BC(s32 arg0) {
    D_sc01_009_801863F4[AF(arg0, u8, 4)]();
}

void func_sc01_009_8017D0F8(s32 arg0) {
    func_sc01_009_8017D120(arg0, (s32) &D_801274E8);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D120);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D2B8);

s16 func_sc01_009_8017D2D0(void) {
    return D_sc01_009_801F3180;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D2E0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D334);

void func_sc01_009_8017D384(void) {
    func_80029444();
    func_801754A8();
    D_sc01_009_801E9070[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_009_8017D3F4(void) {
    func_800D24A0(4);
    func_sc01_009_8017D47C();
    if (D_sc01_009_801F3188 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_009_801F3188;
    }
    D_sc01_009_801F32C0 = 0;
    D_sc01_009_801F32B8 = 0;
    D_80115130 = 0;
    D_sc01_009_801F3188 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D47C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D730);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D920);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017D93C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017DA8C);

void func_sc01_009_8017DBB8(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017DC10);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017DEF0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E1AC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E378);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E590);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017E7DC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EB08);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EF64);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017EFC4);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F2A0);

void func_sc01_009_8017F360(u8 *arg0) {
    D_sc01_009_801E9A18[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F39C);

void func_sc01_009_8017F440(void) {
    func_sc01_009_8017D2E0(1, 0);
}

void func_sc01_009_8017F464(void) {
    func_sc01_009_8017D2E0(1, 1);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F488);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F4D0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F520);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F568);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F5B0);

s32 func_sc01_009_8017F5F8(u8 *arg0) {
    return AF(arg0, s16, 0x104) == 4;
}

s16 func_sc01_009_8017F60C(u8 *arg0) {
    return AF(arg0, s16, 0x104);
}

void func_sc01_009_8017F618(u8 *arg0, s32 arg1) {
    func_80029514(0x96, arg1);
    func_800291A0(0x3B, 5);
    AF(arg0, s16, 2) = 5;
}

void func_sc01_009_8017F658(void) {
    func_800291A0(0x3B, 7);
}

void func_sc01_009_8017F67C(u8 *arg0) {
    func_800291A0(0x3B, 8);
    AF(arg0, s16, 2) = 5;
}

void func_sc01_009_8017F6B4(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F6C0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F710);

s32 func_sc01_009_8017F758(u8 *arg0) {
    return AF(arg0, s16, 0x104) == 2;
}

s32 func_sc01_009_8017F76C(void) {
    return (func_800291B4(0x41) & 0xFF) == 0;
}

s32 func_sc01_009_8017F790(void) {
    return (func_800291B4(0x4C) & 0xFF) != 0;
}

s32 func_sc01_009_8017F7B4(void) {
    return (func_800291B4(0x55) & 0xFF) != 0;
}

s32 func_sc01_009_8017F7D8(void) {
    return D_sc01_009_801F3304 != 1;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F7F0);

void func_sc01_009_8017F8B4(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x1D00;
}

void func_sc01_009_8017F8C0(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x1A40;
}

void func_sc01_009_8017F8CC(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0x2000;
}

void func_sc01_009_8017F8D8(u8 *arg0) {
    AF(arg0, s16, 0xFA) = 0xA40;
}

void func_sc01_009_8017F8E4(u8 *arg0) {
    AF(arg0, s16, 0xFA) = -1;
    AF(arg0, s32, 0x1C) = 0;
    D_sc01_009_801E97C4 = 0;
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017F900);

void func_sc01_009_8017F9CC(void) {
    func_8001AAA0(0x3D);
    func_8001B710();
}

void func_sc01_009_8017F9F4(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FA14);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FAFC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FB98);

void func_sc01_009_8017FC44(s32 arg0) {
    s16 var_v0;

    if (func_801789AC(arg0) != 0) {
        if (AF(arg0, s16, 0x108) == 0) {
            func_80178CBC(arg0, (s32) &D_sc01_009_801E9260);
            var_v0 = 2;
        } else {
            AF(arg0, s32 *, 0xCC) = &D_sc01_009_801E9968;
            SetScript(arg0, (s32) &D_sc01_009_801E90E0);
            var_v0 = 6;
            AF(arg0, s32, 0x1C) = 0;
        }
        AF(arg0, s16, 2) = var_v0;
    }
}

void func_sc01_009_8017FCC0(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178CBC(arg0, (s32) &D_sc01_009_801E9260);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_009_8017FD08(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc01_009_8017FD58(s32 arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_009_801E9088);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_8017FDAC(u8 *arg0) {
    if (AF(arg0, s16, 0x106) != 0) {
        AF(arg0, s16, 0x106) = 0;
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s32, 0x1C) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_009_801E90E0);
        AF(arg0, s32 *, 0xCC) = &D_sc01_009_801E99D8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_8017FE10(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x100;
        AF(arg0, s16, 0x108) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_009_801E9088);
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801E9178);
        AF(arg0, s16, 2) = 3;
    }
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FE78);

void func_sc01_009_8017FED0(void) {
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FED8);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8017FFD0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801803E4);

void func_sc01_009_80180540(u8 *arg0) {
    D_sc01_009_801EEDBC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018057C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181380);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018144C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181600);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181688);

s32 func_sc01_009_801816FC(s32 arg0) {
    return func_800291B4((s16) arg0 + 0x3A) & 0xFF;
}

void func_sc01_009_80181724(s32 arg0, s32 arg1) {
    func_800291A0((s32) D_sc01_009_80183A40[(s16) arg0], arg1 & 0xFF);
}

void func_sc01_009_80181758(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x106) = 1;
}

void func_sc01_009_80181768(u8 *arg0) {
    AF(arg0, s16, 0x106) = 1;
}

void func_sc01_009_80181774(u8 *arg0) {
    AF(arg0, s16, 0x106) = 2;
}

void func_sc01_009_80181780(u8 *arg0) {
    AF(arg0, s16, 0x106) = 3;
}

void func_sc01_009_8018178C(u8 *arg0) {
    AF(arg0, s16, 0x106) = 0;
}

void func_sc01_009_80181794(u8 *arg0) {
    func_sc01_009_80181724((s32) AF(arg0, s16, 0x70), 0x2D);
}

void func_sc01_009_801817B8(u8 *arg0) {
    func_sc01_009_80181724((s32) AF(arg0, s16, 0x70), 0x3D);
}

s32 func_sc01_009_801817DC(void) {
    return D_sc01_009_801F3304 == 1;
}

void func_sc01_009_801817F4(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_80181840(void) {
    func_8014B2A8();
    func_8014BB24((s32) &D_80126B58, 0x3E7, 1);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_80181894(s32 arg0, s32 arg1, s32 arg2) {
    func_8014BD24((s32) &D_80126B58, 0xA, arg2);
    func_8002D4C8(0x45C, 0);
}

void func_sc01_009_801818C8(void) {
    func_80029124(0x81, 1);
}

void func_sc01_009_801818EC(s32 arg0) {
    if (D_sc01_009_801F32D0 != 0) {
        func_8001B710(arg0);
    }
}

void func_sc01_009_80181918(void) {
    func_8001AAA0(0x3D);
    func_8001B710();
}

void func_sc01_009_80181940(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_009_80181960(u8 *arg0) {
    AF(arg0, s16, 0x104) = 1;
    AF(arg0, s32, 0x1C) = 0;
    func_8012B200((s32) arg0);
}

void func_sc01_009_80181988(u8 *arg0) {
    AF(arg0, s16, 0x104) = 2;
    AF(arg0, s32, 0x1C) = 0;
    func_8012B200((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801819B0);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181A1C);

void func_sc01_009_80181A80(s32 arg0) {
    func_8012C658(0x1AB, 0x2D, arg0);
}

void func_sc01_009_80181AA8(u8 *arg0) {
    func_80146A6C(6, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) (s16) (AF(arg0, u16, 0xE) + 0x30), /* extra? */ 0x800FFC00, /* extra? */ 0);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181B04);

void func_sc01_009_80181BBC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801EDA20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181C14(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178CBC(arg0, D_sc01_009_801F32E8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181C64(u8 *arg0) {
    s16 temp_a1;

    temp_a1 = AF(arg0, s16, 0x106);
    if (temp_a1 != 0) {
        func_8017B368((s32) arg0, (s32) (((temp_a1 - 1) * 0x10) + &D_sc01_009_801ED890));
    }
    if (AF(arg0, s16, 0x104) != 0) {
        func_sc01_009_8018144C((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178CBC((s32) arg0, (s32) &D_sc01_009_801EDA68);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181CF8(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181D38);

void func_sc01_009_80181D7C(u8 *arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80181DC0);

void func_sc01_009_80181E58(s32 arg0) {
    if ((func_sc01_009_8017F2A0() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_009_801EB424);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181EB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181F0C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0xC00, 4);
        return;
    }
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_009_80181F78(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80181FD4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB4AC);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182030);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_8018210C);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801821E8);

void func_sc01_009_801822D8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        if ((AF(arg0, s32, 0x90) == &D_sc01_009_801EB534) && (AF(arg0, s32, 0x94) == 0xE)) {
            func_8002D4C8(0xBB0, 0);
        }
    } else {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB314);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_009_80182368(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = func_80012ABC((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0, 4);
        return;
    }
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_009_801823D0(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), s16, 0xE) >= 0x140) {
        SetScript((s32) arg0, (s32) &D_sc01_009_801EB39C);
        AF(arg0, s32 *, 0xCC) = &D_sc01_009_801EE8EC;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182438);

void func_sc01_009_8018248C(u8 *arg0) {
    void *temp_a0;

    SetScript((s32) arg0, D_sc01_009_801ED72C[AF(arg0, s16, 0xFC)]);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s32, 0x1C) = 0x30;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801824FC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182570);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182634);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182740);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_801827FC);

INCLUDE_ASM("asm/stg/sc01_009/nonmatchings/sc01_009", func_sc01_009_80182850);

void func_sc01_009_801828D0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0x98) != 0) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == -1) {
            SetScript((s32) arg0, (s32) &D_sc01_009_801ED404);
        }
    } else {
        func_8012C218((s32) arg0);
    }
}
