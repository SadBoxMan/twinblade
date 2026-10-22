#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_006_80185E08[])();
void func_sc01_006_8017BEC4(u8 *arg0);
extern void (*D_sc01_006_80185E18[])();
void func_sc01_006_8017C078(u8 *arg0);
extern void (*D_sc01_006_80185E20[])();
void func_sc01_006_8017C150(u8 *arg0);
extern void (*D_sc01_006_80185E2C[])();
void func_sc01_006_8017C268(u8 *arg0);
extern void (*D_sc01_006_80185EAC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_006_8017D5D4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_006_80185EB4[])();
void func_sc01_006_8017D5FC(void);
extern void func_800D1EBC();
extern void (*D_sc01_006_80185EC0[])();
extern void (*D_sc01_006_80185ECC[])();
extern u8 D_sc01_006_80185ED8;
extern void func_8016EE40();
extern u8 D_sc01_006_80185EE4;
extern void func_sc01_006_8017D7A4();
extern void (*D_sc01_006_80185EF8[])();
extern s16 D_sc01_006_801CD870;
extern u16 D_80115112;
extern u16 D_80115116;
extern void (*D_sc01_006_801BBA40[])();
extern void func_80029444();
extern void func_801754A8();
extern void func_80141C04();
extern void (*D_sc01_006_801BC7A4[])();
extern void (*D_sc01_006_801BC7B4[])();
extern void (*D_sc01_006_801C3A5C[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc01_006_8017BE9C();
extern s32 func_sc01_006_8017C050();
extern s32 func_sc01_006_8017C128();
extern s32 func_sc01_006_8017C240();

s32 func_sc01_006_8017BE9C()
{
    return SetActionHandler((s32) func_sc01_006_8017BEC4);
}

void func_sc01_006_8017BEC4(u8 *arg0) {
    D_sc01_006_80185E08[AF(arg0, u8, 0x214)]();
}

extern void func_80154150();
extern void func_sc01_006_8017BF70();
extern void func_80147324();
extern void func_80154274();
extern u8 D_sc01_006_80185D9C;
extern s32 func_sc01_006_8017C1E8();

void func_sc01_006_8017BF00(s32 arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    func_80154150(arg0, 0x26);
    StartFace(arg0, 0x1E);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xFE9;
    AF(arg0, s32, 0x208) = 0;
    NextPhase(arg0);
    func_sc01_006_8017BF70(arg0);
}

void func_sc01_006_8017BF70(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x208) = (s32) (AF(arg0, s32, 0x208) + 0x1C000);
    AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v1 = AF(arg0, void *, 0x20);
    if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
        AF(temp_v1, u16, 0x10) = 0xC00U;
        AF(arg0, s16, 0xB8) = 1;
        NextPhase(arg0, arg0);
    }
}

void func_sc01_006_8017BFEC(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        func_80154150((s32) arg0, 0x27);
        StartFace((s32) arg0, 0x1F);
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_sc01_006_8017C048(void) {
}

s32 func_sc01_006_8017C050()
{
    return SetActionHandler((s32) func_sc01_006_8017C078);
}

void func_sc01_006_8017C078(u8 *arg0) {
    D_sc01_006_80185E18[AF(arg0, u8, 0x214)]();
}

void func_sc01_006_8017C0B4(s32 arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    func_80154150(arg0, 0x27);
    StartFace(arg0, 0x1F);
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_sc01_006_8017C120(void) {
}

s32 func_sc01_006_8017C128()
{
    return SetActionHandler((s32) func_sc01_006_8017C150);
}

void func_sc01_006_8017C150(u8 *arg0) {
    D_sc01_006_80185E20[AF(arg0, u8, 0x214)]();
}

void func_sc01_006_8017C18C(s32 arg0) {
    EndScene();
    func_80154274(arg0, (s32) &D_sc01_006_80185D9C);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    func_80147324(0xA05);
    NextPhase(arg0);
    func_sc01_006_8017C1E8(arg0);
}

s32 func_sc01_006_8017C1E8(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene();
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc01_006_8017C238(void) {
}

s32 func_sc01_006_8017C240()
{
    return SetActionHandler((s32) func_sc01_006_8017C268);
}

void func_sc01_006_8017C268(u8 *arg0) {
    D_sc01_006_80185E2C[AF(arg0, u8, 0x214)]();
}

extern u8 D_80126B58;
extern s32 func_80029504();
extern void func_8014BD98();
extern void func_8014BB0C();
extern void func_8014BE78();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
extern void func_8012A018();
extern void func_8012A094();
extern void func_sc01_006_8017D808();
extern s16 D_8011511A;
extern s32 D_80115130;
extern s16 D_sc01_006_801CD878;
extern s32 D_sc01_006_801CD9A8;
extern s32 D_sc01_006_801CD9B0;
extern void func_800D24A0();
extern void func_sc01_006_8017DC48();
extern u16 D_800B9A02;
extern u16 D_80115114;
extern void func_800D2624();
extern u8 D_sc01_006_801BBE98;
extern void func_sc01_006_8017FD50();
extern s32 func_8016F1AC();
extern void func_80029514();
extern void func_80029124();
extern void func_80178B18();
extern u8 D_sc01_006_80185E5C;
extern void func_800D1724();
extern u8 D_sc01_006_801BC348;
extern s32 func_801789AC();
extern void func_80178D18();
extern void func_801746A4();
extern u8 D_sc01_006_80185E38;
extern void func_sc01_006_8017DAAC();
s16 func_sc01_006_8017DA9C(void);
extern u8 D_sc01_006_801BBC4C;
extern void func_sc01_006_8017FBCC();
extern s32 D_sc01_006_801CDED4;
extern u8 D_sc01_006_801BC4A0;
extern u8 D_sc01_006_801C6B18;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_80143994();
extern u8 D_sc01_006_801BC6C8;
extern u8 D_sc01_006_801BC508;
extern s32 func_sc01_006_80180BDC();
extern s32 D_sc01_006_801BC78C[];
extern u8 D_sc01_006_801BC578;
extern u8 D_sc01_006_801C97C0;
extern u8 D_sc01_006_801BC718;
extern u8 D_sc01_006_801BC5E0;
extern s32 D_sc01_006_801BC798[];
extern u8 D_sc01_006_801BC764;
extern u8 D_sc01_006_801BC5F8;
extern u8 D_sc01_006_801BC680;
extern u8 D_sc01_006_801BC778;
extern void func_80139914();
extern void func_8012C218();
extern s16 D_80126B30;
extern u8 D_sc01_006_801CA6EC;
extern void func_8017303C();

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017C2A4);

void func_sc01_006_8017C2F4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150((s32) arg0, 0x25);
        NextPhase((s32) arg0);
    }
}

void func_sc01_006_8017C338(void) {
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017C340);

void func_sc01_006_8017D220(s32 arg0) {
    if (func_80029504(arg0) < 0xA) {
        func_8014BD98((s32) &D_80126B58, 0x64);
        func_8014BB0C();
        func_8014BE78();
    }
}

void func_sc01_006_8017D26C(u8 *arg0) {
    D_sc01_006_80185EAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D2A8(u8 *arg0) {
    func_sc01_006_8017D5D4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D2EC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_006_8017D310(u8 *arg0) {
    D_sc01_006_80185EB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D34C(u8 *arg0) {
    func_sc01_006_8017D5FC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D38C(u8 *arg0) {
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

void func_sc01_006_8017D408(void) {
    func_800D1EBC();
}

void func_sc01_006_8017D428(u8 *arg0) {
    D_sc01_006_80185EC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D464(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_006_8017D480(u8 *arg0) {
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

void func_sc01_006_8017D4FC(void) {
    func_800D1EBC();
}

void func_sc01_006_8017D51C(u8 *arg0) {
    D_sc01_006_80185ECC[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_006_8017D558(u8 *arg0) {
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

s32 func_sc01_006_8017D5CC(void) {
    return 1;
}

void func_sc01_006_8017D5D4(void) {
    func_8016EE40((s32) &D_sc01_006_80185ED8, 0x01000000);
}

void func_sc01_006_8017D5FC(void) {
    func_8016EE40((s32) &D_sc01_006_80185EE4, 0x01000000);
}

void func_sc01_006_8017D624(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x2BC;
    D_80126968 = 0;
    D_8012696A = 0x850;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x82;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_006_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_006_8017D7A4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_006_8017D6E4(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x190;
    D_8012696A = 0x850;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x82;
    D_8012697A = -0x180;
    func_8012A018((s32) func_sc01_006_8017D7A4, 0);
    D_801274E8 = 0xD;
    D_801274EA = -0x82;
    D_801274EC = 0x8A;
    func_sc01_006_8017D7A4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_006_8017D7A4(s32 arg0) {
    D_sc01_006_80185EF8[AF(arg0, u8, 4)]();
}

void func_sc01_006_8017D7E0(s32 arg0) {
    func_sc01_006_8017D808(arg0, (s32) &D_801274E8);
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D808);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D9A0);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017D9F4);

s32 func_sc01_006_8017DA84(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x57;
    if (arg0 >= 5) {
        var_v0 = 0x3D;
    }
    return var_v0;
}

s16 func_sc01_006_8017DA9C(void) {
    return D_sc01_006_801CD870;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DAAC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DB00);

void func_sc01_006_8017DB50(void) {
    func_80029444();
    func_801754A8();
    D_sc01_006_801BBA40[D_80115112]();
    func_80141C04();
    D_80115116 += 1;
}

void func_sc01_006_8017DBC0(void) {
    func_800D24A0(4);
    func_sc01_006_8017DC48();
    if (D_sc01_006_801CD878 == 0) {
        D_8011511A = 0;
    } else {
        D_8011511A = D_sc01_006_801CD878;
    }
    D_sc01_006_801CD9B0 = 0;
    D_sc01_006_801CD9A8 = 0;
    D_80115130 = 0;
    D_sc01_006_801CD878 = 0;
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DC48);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017DEFC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E0EC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E108);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E258);

void func_sc01_006_8017E384(void) {
    if (D_80115114 == (D_800B9A02 ^ 1)) {
        func_800D2624();
        return;
    }
    D_80115112 += 1;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E3DC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E6BC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017E978);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017EB44);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017ED5C);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017EFA8);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F2D4);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F730);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F790);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017F9F8);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FBCC);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FD50);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8017FF74);

void func_sc01_006_80180010(s32 arg0) {
    s32 temp_v0;

    func_sc01_006_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80029514(0xA);
        func_80029124(0x125, 0);
        func_80029124(0x126, 0);
        func_80029124(0x127, 0);
        func_80029124(0x128, 0);
        AF(arg0, s16, 0xDE) = 0;
        AF(arg0, s16, 0xDC) = 0;
        func_80178B18(arg0, (s32) &D_sc01_006_801BBE98);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801800C0);

void func_sc01_006_801803AC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_80029514(2);
        func_800D1724((s32) &D_sc01_006_80185E5C);
    }
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801803F0);

void func_sc01_006_8018041C(s32 arg0) {
    s32 temp_v0;

    func_sc01_006_8017FD50(arg0);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18(arg0, (s32) &D_sc01_006_801BC348);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_8018048C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    u16 temp_v0_5;

    temp_v0 = AF(arg0, s16, 0x10A);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0x10A) = temp_v0_2;
        if (temp_v0_2 < 0x40) {
            temp_v0_3 = AF(arg0, s16, 0x106);
            if (temp_v0_3 != 0) {
                temp_v0_4 = temp_v0_3 - 8;
                AF(arg0, s16, 0x106) = temp_v0_4;
                if ((s16) (temp_v0_4) < 0) {
                    AF(arg0, s16, 0x106) = 0;
                }
            } else {
                temp_v0_5 = AF(arg0, u16, 0x108) - 8;
                AF(arg0, u16, 0x108) = temp_v0_5;
                if ((s16) (temp_v0_5) < 0) {
                    AF(arg0, u16, 0x108) = 0U;
                }
            }
        }
        func_sc01_006_8017FD50((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180564(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_006_80185E38);
    }
}

void func_sc01_006_801805A0(void) {
}

void func_sc01_006_801805A8(void) {
    func_sc01_006_8017DAAC(3, 0);
}

void func_sc01_006_801805CC(void) {
    func_sc01_006_8017DAAC(3, 2);
}

void func_sc01_006_801805F0(void) {
    func_sc01_006_8017DAAC(4, 0);
}

s32 func_sc01_006_80180614(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(AF(arg0, void *, 0xD4), s16, 0xFC) = 1;
    return 1;
}

s16 func_sc01_006_80180674(u8 *arg0) {
    s16 temp_s0;

    temp_s0 = AF(arg0, s16, 0x104);
    if (temp_s0 != 0) {
        AF(arg0, s16, 0x104) = 0;
        func_8002D4C8(0x45F, 0);
    }
    return temp_s0;
}

s32 func_sc01_006_801806B8(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s16, 0x10A) != 0) {
        temp_v0 = AF(arg0, u16, 0x106) - 0x10;
        AF(arg0, u16, 0x106) = temp_v0;
        AF(arg0, u16, 0x108) = temp_v0;
        if ((s16) (temp_v0) < 0) {
            AF(arg0, u16, 0x106) = 0U;
            AF(arg0, u16, 0x108) = 0U;
        }
        AF(arg0, s16, 0x10A) = (s16) ((u16) AF(arg0, s16, 0x10A) - 3);
        return 0;
    }
    AF(arg0, s16, 0x100) = 0;
    return 1;
}

s32 func_sc01_006_80180710(void) {
    return (func_sc01_006_8017DA9C() << 0x10) == 0;
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180734);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018078C);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801807D8);

void func_sc01_006_801807E8(u8 *arg0) {
    AF(arg0, s16, 0x10A) = 0x60;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc01_006_80180800(void) {
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180808);

void func_sc01_006_80180908(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    if (func_8016F1AC() == 0) {
        func_80178B18((s32) arg0, (s32) &D_sc01_006_801BBC4C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180974(u8 *arg0) {
    if (AF(arg0, s16, 0x100) == 0) {
        func_sc01_006_8017FBCC();
    } else {
        func_sc01_006_8017FD50((s32) arg0);
    }
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        func_801746A4();
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_801809F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc01_006_80185E38);
    }
}

void func_sc01_006_80180A30(void) {
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180A38);

s32 func_sc01_006_80180AD0(void) {
    return D_sc01_006_801CDED4 != 1;
}

void func_sc01_006_80180AE8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xD0);
    AF(temp_v1, u16, 2) = (u16) (AF(temp_v1, u16, 2) + 1);
}

void func_sc01_006_80180B04(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 1;
}

void func_sc01_006_80180B14(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s16, 0xFC) = 2;
}

void func_sc01_006_80180B24(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 1;
}

void func_sc01_006_80180B34(u8 *arg0) {
    AF(AF(arg0, void *, 0xD0), s16, 0xFC) = 2;
}

void func_sc01_006_80180B44(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

void func_sc01_006_80180B64(u8 *arg0) {
    D_sc01_006_801BC7A4[AF(arg0, u16, 2)]();
}

void func_sc01_006_80180BA0(u8 *arg0) {
    D_sc01_006_801BC7B4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80180BDC);

void func_sc01_006_80180C98(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_006_801C6B18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC4A0);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180D10(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC6C8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180D48(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC508);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180D9C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC78C[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80180E24(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc01_006_801C97C0);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC578);
        func_80143994((s32) arg0, 0x3000);
        AF(arg0, s32, 0x1C) = 1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180E9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC718;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180ED4(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80180F28(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80180FB0(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_006_801BC578);
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC764;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_80180FFC(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5F8);
        AF(arg0, s32, 0x1C) = 0x28;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181054(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC680);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_801810AC(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181100(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

void func_sc01_006_80181188(s32 arg0) {
    SetScript(arg0, (s32) &D_sc01_006_801BC578);
    AF(arg0, s32 *, 0xCC) = &D_sc01_006_801BC778;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_006_801811D4(s32 arg0) {
    if ((func_sc01_006_80180BDC() << 0x10) == 0) {
        SetScript(arg0, (s32) &D_sc01_006_801BC5E0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_006_80181228(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (AF(arg0, s16, 0xFC) != 0) {
        temp_v0 = AF(arg0, s16, 0xFE);
        if (temp_v0 == 0) {
            AF(arg0, s16, 0xFE) = 8;
            return;
        }
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFE) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            SetScript((s32) arg0, D_sc01_006_801BC798[AF(arg0, s16, 0xFC)]);
            AF(arg0, s16, 0xFC) = 0;
        }
    }
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801812B0);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018165C);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80181784);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80181894);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80181B00);

void func_sc01_006_80182000(u8 *arg0) {
    D_sc01_006_801C3A5C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_8018203C);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_801820F8);

INCLUDE_ASM("asm/stg/sc01_006/nonmatchings/sc01_006", func_sc01_006_80182240);

void func_sc01_006_801822B0(u8 *arg0) {
    s16 *temp_a0;
    s16 *temp_v0;
    s16 *temp_v1;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16 *, 0xD0);
    temp_v1 = AF(arg0, s16 *, 0xD4);
    temp_a0 = AF(arg0, s16 *, 0xD8);
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
    }
    if (temp_v1 != NULL) {
        *temp_v1 = 0;
    }
    if (temp_a0 != NULL) {
        *temp_a0 = 0;
    }
    temp_a0_2 = AF(arg0, s32, 0xB0);
    if (temp_a0_2 != 0) {
        func_80139914(temp_a0_2);
    }
    func_8012C218((s32) arg0);
}

s32 func_sc01_006_80182324(s32 arg0, s32 arg1) {
    func_8017303C((s32) &D_sc01_006_801CA6EC);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &D_80126B58);
}
