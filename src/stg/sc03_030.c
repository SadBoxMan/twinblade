#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_030_8017BE9C(void) {
}

void func_sc03_030_8017BEA4(void) {
}

void func_sc03_030_8017BEAC(void) {
}

void func_sc03_030_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_030_80185850[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_030_80185838;
extern void (*D_sc03_030_80185858[])();
extern u8 D_sc03_030_80185844;
extern void (*D_sc03_030_801858D8[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_030_8017D9FC(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_030_801858E0[])();
void func_sc03_030_8017DA24(void);
extern void func_800D1EBC();
extern u8 D_sc03_030_80185918;
extern void func_8016EE40();
extern void func_sc03_030_8017E3F4();
extern void (*D_sc03_030_80185960[])();
extern void (*D_sc03_030_80185974[])();
extern void (*D_sc03_030_8018597C[])();
extern void (*D_sc03_030_80186160[])();
extern void func_8012AD50();
extern void (*D_sc03_030_8018686C[])();
extern u8 D_80126CB4;
extern s32 func_80013294();
extern void (*D_sc03_030_80186884[])();
extern void (*D_sc03_030_8018688C[])();
extern void (*D_sc03_030_801868A4[])();
extern void (*D_sc03_030_801869A4[])();
extern void (*D_sc03_030_801869F0[])();
extern void (*D_sc03_030_80186A44[])();

void func_sc03_030_8017BEBC(u8 *arg0) {
    D_sc03_030_80185850[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017BEF8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc03_030_80185838, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc03_030_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_030_8017C150(u8 *arg0) {
    D_sc03_030_80185858[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_030_80185844, 0x18);
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

void func_sc03_030_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_8012BEE8();
extern void func_8012AD80();
extern void func_8012C098();
extern u8 D_sc03_030_80186028;
extern s32 func_80128ED8();
extern void func_801292C8();

extern void func_8012C218();
extern void func_sc03_030_80181DC0();
extern void func_80016714();

extern void func_80171990();
extern void func_sc03_030_8017DD08();
extern void (*D_sc03_030_80186494[])();
extern void func_8012C0EC();
extern s32 D_sc03_030_80186694[];
extern s32 func_8012C194();
extern void func_8001CEC0();
extern void func_80015978();
extern void func_sc03_030_8017FB04();

extern void (*D_sc03_030_8018593C[])();
extern void func_8014C88C();
extern u8 D_sc03_030_801858EC;
extern void func_80019064();
extern void func_sc03_030_8017DFA0();
extern void func_sc03_030_8017E204();
extern void func_sc03_030_8017E090();
extern void func_sc03_030_8017E194();
extern s32 func_80172664();
extern void func_80171928();
extern s32 func_sc03_030_8017E240();
extern void func_sc03_030_8017DF1C();
extern void (*D_sc03_030_8018594C[])();
extern void (*D_sc03_030_80185958[])();
extern s32 func_sc03_030_8017E1E8();
extern s32 func_801489E8();
extern s32 func_80148A48();
extern u8 D_sc03_030_8018592C;
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
extern s32 D_801269E4;
extern void func_8012A094();
extern s32 D_sc03_030_801E1BB8;
extern void func_sc03_030_8017E7D4();
extern void func_8014BF18();
extern s32 func_8012C658();
extern u8 D_sc03_030_801DF018;
extern u8 D_sc03_030_8118596C;
extern s32 func_8012C1B8();
extern void func_8001C214();
extern void func_sc03_030_8017F018();
extern s16 D_80126CB0;
extern void (*D_sc03_030_8018689C[])();
extern u8 D_sc03_030_80182178;
extern s32 D_sc03_030_80186894[];
extern void func_8012CAE4();
extern u8 D_sc03_030_801B31B0;
extern void func_8012E8A8();
extern void (*D_sc03_030_80186934[])();
extern u8 D_sc03_030_801868CC;
extern s32 func_8012C354();
extern void func_8012B2CC();
extern u8 D_sc03_030_80186950;
extern s32 func_8012CC40();
extern void func_8012C588();
extern void func_sc03_030_80180B44();
extern u8 D_sc03_030_80186958;
extern u8 D_sc03_030_80186968;
extern u8 D_sc03_030_80186974;
extern void func_8001CB6C();
extern void func_80128EA8();
extern void (*D_sc03_030_801869C4[])();
extern void (*D_sc03_030_801869CC[])();
extern u8 D_sc03_030_801DD870;
extern u8 D_sc03_030_801DD8F0;
extern s32 func_8012BD14();
extern u8 D_sc03_030_801DD900;
extern u8 D_sc03_030_801DD860;
extern s32 func_sc03_030_80181C08();
extern void func_sc03_030_80181708();
extern u8 D_sc03_030_80186A14;
extern void func_8001CC3C();

extern u8 D_sc03_030_8018687C;
extern u16 D_sc03_030_80186880;

extern u8 D_sc03_030_80185904;
extern u8 D_sc03_030_801858F4;
extern s32 func_80012DBC();

s32 func_sc03_030_8017E1BC(s32 arg0);
extern void func_80146D90();
extern u8 D_sc03_030_801858FC;
extern void func_80147324();

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017C294);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017C66C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017C710);

s32 func_sc03_030_8017C908(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017C974);

void func_sc03_030_8017D840(u8 *arg0) {
    D_sc03_030_801858D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_030_8017D87C(u8 *arg0) {
    func_sc03_030_8017D9FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_030_8017D8C0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_030_8017D8E4(u8 *arg0) {
    D_sc03_030_801858E0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_030_8017D920(u8 *arg0) {
    func_sc03_030_8017DA24();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_030_8017D960(u8 *arg0) {
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

void func_sc03_030_8017D9DC(void) {
    func_800D1EBC();
}

void func_sc03_030_8017D9FC(void) {
    func_8016EE40((s32) &D_sc03_030_80185904, 0x0B000000);
}

void func_sc03_030_8017DA24(void) {
    func_8016EE40((s32) &D_sc03_030_80185918, 0x01000000);
}

void func_sc03_030_8017DA4C(u8 *arg0) {
    D_sc03_030_8018593C[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017DA9C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017DAFC);

void func_sc03_030_8017DB98(s32 arg0) {
    func_80019064((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) != 0) {
        func_80171990(arg0);
    }
    if (AF(arg0, s16, 0xE) < -0xE00) {
        func_80171928(arg0);
    }
}

void func_sc03_030_8017DC20(s32 arg0, s32 arg1) {
    func_sc03_030_8017DFA0(arg0, arg1);
    func_sc03_030_8017E240(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) == 0) {
        func_sc03_030_8017DF1C(arg0);
        AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) - 1);
    }
}

void func_sc03_030_8017DC88(u8 *arg0) {
    D_sc03_030_8018594C[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

void func_sc03_030_8017DCD8(s32 arg0, s32 arg1) {
    func_80171990(arg0, arg1);
    func_sc03_030_8017DD08(arg0);
}

void func_sc03_030_8017DD08(s32 arg0) {
    func_80019064((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E1BC(arg0);
    if (AF(arg0, s16, 0xE) < -0x1120) {
        func_80146D90(arg0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017DD80);

void func_sc03_030_8017DE60(u8 *arg0) {
    D_sc03_030_80185958[AF(arg0, u8, 0x216)]();
    func_8014C88C((s32) arg0);
}

void func_sc03_030_8017DEB0(s32 arg0) {
    func_80019064((s32) &D_sc03_030_801858EC);
    func_sc03_030_8017DFA0(arg0);
    func_sc03_030_8017E204(arg0);
    func_sc03_030_8017E090(arg0);
    func_sc03_030_8017E194(arg0);
    if (func_80172664(arg0) != 0) {
        func_80171990(arg0);
    }
}

void func_sc03_030_8017DF1C(s32 arg0) {
    AF(arg0, s16, 0x20C) = 0x800;
    AF(arg0, s16, 0x13A) = 1;
    func_80019064((s32) &D_sc03_030_801858F4);
}

void func_sc03_030_8017DF54(s32 arg0) {
    func_80019064((s32) &D_sc03_030_801858FC);
    func_80147324(0x57F);
    AF(arg0, s16, 0x20C) = 0x1000;
    AF(arg0, s16, 0x13A) = 1;
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017DFA0);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E090);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E194);

s32 func_sc03_030_8017E1BC(s32 arg0) {
    AF(arg0, u16, 0xAE) = (u16) (AF(arg0, u16, 0xAE) | 0xFF00);
    return func_sc03_030_8017E1E8(arg0);
}

s32 func_sc03_030_8017E1E8(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xAA) & 0xFF00;
    AF(arg0, u16, 0xAA) = temp_v0;
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) & 0xFF00);
    return (s32) temp_v0;
}

void func_sc03_030_8017E204(s32 arg0) {
    AF(arg0, s16, 0x132) = func_80012DBC((s32) AF(arg0, s16, 0x132), 0, 0xA, 1);
}

s32 func_sc03_030_8017E240(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (func_801489E8() != 0) {
        var_v0_2 = AF(arg0, u16, 0x132) + 0x71;
        goto block_4;
    }
    var_v0 = func_80148A48(arg0);
    if (var_v0 != 0) {
        var_v0_2 = AF(arg0, u16, 0x132) - 0x71;
block_4:
        var_v0 = var_v0_2 & 0xFFF;
        AF(arg0, u16, 0x132) = (u16) var_v0;
    }
    return var_v0;
}

void func_sc03_030_8017E2A0(void) {
    func_8016EE40((s32) &D_sc03_030_8018592C, 0x0A000000);
}

void func_sc03_030_8017E2C8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = -0x80;
    func_8012A018((s32) func_sc03_030_8017E3F4, 0);
    func_sc03_030_8017E3F4((s32) &D_80126948);
}

void func_sc03_030_8017E354(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x1F4;
    D_80126968 = 0x71;
    D_8012696A = 0xF1C;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_030_8017E3F4, 1);
    func_8012A094((s32) &D_80126948);
    D_801269E4 = 0x40;
    func_sc03_030_8017E3F4((s32) &D_80126948);
}

void func_sc03_030_8017E3F4(s32 arg0) {
    D_sc03_030_80185960[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E430);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E484);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E50C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E5F8);

void func_sc03_030_8017E790(void) {
    if (D_sc03_030_801E1BB8 == 0) {
        func_8002D4C8(0x5A2, 0);
        D_sc03_030_801E1BB8 = 1;
    }
    func_sc03_030_8017E7D4();
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017E7D4);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017EB98);

void func_sc03_030_8017EBF8(u8 *arg0) {
    D_sc03_030_80185974[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017EC34(s32 arg0) {
    func_8014BF18(4);
    func_8012C658(0xCA, 0, arg0);
    func_8012C658(0xCA, 1, arg0);
    func_8012C658(0xCA, 2, arg0);
    func_8012C658(0xCA, 3, arg0);
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017ECA8);

void func_sc03_030_8017ED30(u8 *arg0) {
    D_sc03_030_8018597C[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017ED6C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_sc03_030_801DF018);
        AF(temp_v0, s32 *, 0x20) = &D_sc03_030_8118596C;
        func_sc03_030_8017F018((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017EDD4);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017EEE0);

void func_sc03_030_8017EFD8(s32 arg0) {
    func_8012AD80(arg0);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C098(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F018);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F0E8);

void func_sc03_030_8017F17C(u8 *arg0) {
    D_sc03_030_80186160[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017F1B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc03_030_80186028;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F26C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F5D8);

void func_sc03_030_8017F670(u8 *arg0) {
    D_sc03_030_80186494[AF(arg0, u16, 2)]();
    func_8012C0EC((s32) arg0);
}

void func_sc03_030_8017F6C0(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F6E0);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017F8BC);

void func_sc03_030_8017FA6C(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = D_sc03_030_80186694[AF(arg0, s16, 0x70)];
    temp_v0 = func_8012C194();
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        func_8001CEC0(temp_v0, temp_s2);
        AF(temp_v0, s16, 0x2E) = 0;
        AF(temp_v0, s16, 0x30) = 0;
        AF(temp_v0, s16, 0x2C) = 1;
        func_80015978((s32) (arg0 + 4), (s32) (arg0 + 0xFC));
        func_sc03_030_8017FB04((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017FB04);

void func_sc03_030_8017FC50(u8 *arg0) {
    D_sc03_030_8018686C[AF(arg0, u16, 2)]();
}

void func_sc03_030_8017FC8C(s32 arg0, s32 arg1, s32 arg2) {
    if (D_80126CB0 < 0x2800) {
        func_8012AD50(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8017FCBC);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180054);

s32 func_sc03_030_801801E8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    var_s1 = 0xFFFF;
    if (AF(var_s0, s16, 6) == 0) {
        do {
            temp_v0 = func_80013294((s32) &D_80126CB4, var_s0);
            temp_v1 = temp_v0 & 0xFFFF;
            if ((temp_v1 < (s16) arg1) && ((u32) temp_v1 < (u32) (var_s1 & 0xFFFF))) {
                var_s1 = temp_v0;
            }
            var_s0 += 8;
        } while (AF(var_s0, s16, 6) == 0);
    }
    return var_s1 & 0xFFFF;
}

void func_sc03_030_80180280(u8 *arg0) {
    D_sc03_030_80186884[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_801802BC);

void func_sc03_030_80180398(u8 *arg0) {
    s32 pad[2];
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin(AF(arg0, s32, 0x1C) << 5) + 1;
    AF(temp_s0, s16, 0x1C) = temp_v0;
    AF(temp_s0, s16, 0x18) = temp_v0;
    AF(temp_s0, s16, 0x1A) = (s16) (rsin(AF(arg0, s32, 0x1C) << 6) + 1);
    AF(&D_sc03_030_8018687C, u16, 0) = (u16) (AF(&D_sc03_030_8018687C, u16, 0) - 4);
    AF(&D_sc03_030_8018687C, u16, 2) = (u16) (AF(&D_sc03_030_8018687C, u16, 2) - 4);
    D_sc03_030_80186880 -= 4;
    temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 >= 0x20) {
        func_8012C218((s32) arg0);
    }
}

void func_sc03_030_80180458(u8 *arg0) {
    D_sc03_030_8018688C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180494);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_801804F4);

void func_sc03_030_8018055C(u8 *arg0) {
    D_sc03_030_8018689C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_801805BC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, D_sc03_030_80186894[(AF(arg0, u16, 0x70) & 1)]);
    if ((s16) AF(arg0, u16, 0x70) & 0x8000) {
        AF(AF(arg0, s32, 0x20), u16, 0x14) = (u16) AF(arg0, u16, 0xFC);
    }
    AF(arg0, s16, 2) = 1;
    SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
}

void func_sc03_030_80180660(void) {
}

void func_sc03_030_80180668(u8 *arg0) {
    D_sc03_030_801868A4[AF(arg0, u16, 2)]();
}

void func_sc03_030_801806A4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc03_030_801B31B0);
    AF(arg0, s16, 2) = 1;
    func_8012E8A8((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180714);

void func_sc03_030_801807A0(u8 *arg0) {
    D_sc03_030_80186934[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

void func_sc03_030_80180800(u8 *arg0) {
    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 1) * 0x34) + &D_sc03_030_801868CC)) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc03_030_80182178);
        func_8012E8A8((s32) arg0);
        func_8012B2CC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180880);

void func_sc03_030_801808E8(void) {
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_801808F0);

void func_sc03_030_80180960(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    if (temp_v0 != NULL) {
        temp_a0 = AF(temp_v0, void *, 0xCC);
        AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x300);
        AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x300);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x3001) {
            AF(temp_a0, u16, 0x18) = 0x3000U;
        }
        if ((s16) AF(temp_a0, u16, 0x1A) >= 0x3001) {
            AF(temp_a0, u16, 0x1A) = 0x3000U;
        }
    }
    if (func_8012CC40((s32) arg0, (s32) &D_sc03_030_80186950) & 0x2000) {
        func_8002D4C8(0x581, 0);
        AF(arg0, s32, 0x1C) = 0xF;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s16, 2) = 6;
        func_8012C588(0xF0, (s32) arg0);
        return;
    }
    func_sc03_030_80180B44((s32) arg0);
}

void func_sc03_030_80180A3C(u8 *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0xCC);
    if (temp_v0 != NULL) {
        temp_a0 = AF(temp_v0, void *, 0xCC);
        AF(temp_a0, u16, 0x18) = (u16) (AF(temp_a0, u16, 0x18) + 0x700);
        AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0x700);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x7001) {
            AF(temp_a0, u16, 0x18) = 0x7000U;
        }
        if ((s16) AF(temp_a0, u16, 0x1A) >= 0x7001) {
            AF(temp_a0, u16, 0x1A) = 0x7000U;
        }
    }
    if (func_8012CC40((s32) arg0, (s32) &D_sc03_030_80186958) & 0x2000) {
        func_8002D4C8(0x582, 0);
        AF(arg0, s16, 2) = 2;
        func_8012C658(0xF0, 1, (s32) arg0);
    }
    func_sc03_030_80180B44((s32) arg0);
}

void func_sc03_030_80180B04(s32 arg0) {
    func_8012AD80();
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180B44);

void func_sc03_030_80180CA0(u8 *arg0) {
    D_sc03_030_801869A4[AF(arg0, u16, 2)]();
}

void func_sc03_030_80180CDC(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) &D_sc03_030_80186968, 0x320, 0x100);
    AF(temp_s0, u8, 0x27) = 0x35;
    AF(temp_s0, s16, 0x1A) = 0x3000;
    AF(temp_s0, s16, 0x18) = 0x3000;
    AF(temp_s0, s16, 0x10) = 0x400;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    func_80128EA8(temp_s0, (s32) (arg0 + 0x24), (s32) &D_sc03_030_80186974);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_030_80180D6C(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        func_801292C8((s32) arg0);
    }
}

void func_sc03_030_80180DAC(u8 *arg0) {
    D_sc03_030_801869C4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180E0C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80180F14);

void func_sc03_030_8018101C(u8 *arg0) {
    D_sc03_030_801869CC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8018107C);

void func_sc03_030_8018112C(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = 0xF;
        SetScript(arg0, (s32) &D_sc03_030_801DD870);
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_030_80181178(s32 arg0) {
    if ((func_8012BEE8(arg0) != 0) || (func_8012BD14(arg0) <= 0x40000)) {
        AF(arg0, s32, 0x1C) = (s32) ((rand() % 31) + 0x1E);
        SetScript(arg0, (s32) &D_sc03_030_801DD8F0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_030_80181214(s32 arg0) {
    if ((func_8012BEE8(arg0) != 0) || (func_8012BD14(arg0) <= 0x24000)) {
        AF(arg0, s32, 0x1C) = 0xF;
        SetScript(arg0, (s32) &D_sc03_030_801DD900);
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_030_8018127C(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) ((rand() % 31) + 0x3C);
        SetScript(arg0, (s32) &D_sc03_030_801DD860);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_030_80181300(u8 *arg0) {
    D_sc03_030_801869F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8018133C);

void func_sc03_030_801813BC(s32 arg0) {
    if (func_sc03_030_80181C08() != 1) {
        func_sc03_030_80181708(arg0);
        if (AF(AF(arg0, void *, 0x64), u16, 2) == 1) {
            AF(arg0, s16, 2) = 2;
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_8018141C);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_801814F4);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80181708);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80181824);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80181A60);

INCLUDE_ASM("asm/stg/sc03_030/nonmatchings/sc03_030", func_sc03_030_80181C08);

void func_sc03_030_80181C44(u8 *arg0) {
    D_sc03_030_80186A44[AF(arg0, u16, 2)]();
}

void func_sc03_030_80181C80(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s32, 0xCC) = temp_v0;
    AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    func_8001CC3C(temp_v0, (s32) &D_sc03_030_80186A14, 0x300, 0x1A0);
    AF(temp_v0, u8, 0x27) = 0x49;
    AF(temp_v0, s16, 0x1A) = 0x1000;
    AF(temp_v0, s16, 0x18) = 0x1000;
    AF(temp_v0, u16, 8) = (u16) AF(AF(arg0, void *, 0x64), u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
    AF(arg0, s16, 2) = 1;
}

void func_sc03_030_80181D48(u8 *arg0) {
    s32 pad[2];
    void *temp_a1;
    void *temp_v1;

    temp_a1 = AF(arg0, void *, 0x64);
    if (AF(arg0, s16, 0xFC) != AF(temp_a1, s16, 0x36)) {
        func_sc03_030_80181DC0((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(temp_a1, u16, 6);
    AF(temp_v1, u16, 0xA) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xA);
    AF(temp_v1, u16, 0xC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0xE);
}

void func_sc03_030_80181DC0(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_030_80181DF8(void) {
    return 0x1A;
}
