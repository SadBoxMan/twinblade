#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_104_8017BE9C(void) {
}

void func_sc03_104_8017BEA4(void) {
}

void func_sc03_104_8017BEAC(void) {
}

void func_sc03_104_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_80146A6C();
extern void (*D_sc03_104_8018E6D8[])();
extern void func_80147324();
extern void func_sc03_104_8017C218();
extern void func_8014708C();
extern void func_801472C8();
extern void func_80146C3C();
extern void (*D_sc03_104_8018E6EC[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc03_104_8018E700[])();
extern void func_800D22E4();
extern void func_sc03_104_8017C910();
extern void (*D_sc03_104_8018E7A4[])();
void func_sc03_104_80181188(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_104_8018E7AC[])();
void func_sc03_104_801811B0(void);
extern void func_800D1EBC();
extern void (*D_sc03_104_8018E7B8[])();
extern void (*D_sc03_104_8018E7C4[])();
extern u8 D_sc03_104_8018E7D4;
extern void func_8016EE40();
extern u8 D_sc03_104_8018E7D8;
extern void (*D_sc03_104_8018E7E4[])();
extern u8 D_sc03_104_8018E7DC;
extern void func_sc03_104_80181404();
extern void (*D_sc03_104_8018E7EC[])();
extern void (*D_sc03_104_80199DC0[])();
extern void (*D_sc03_104_80199EF8[])();
extern void (*D_sc03_104_8019A070[])();
extern void (*D_sc03_104_8019A080[])();
extern void (*D_sc03_104_8019CA70[])();
extern void (*D_sc03_104_8019CB14[])();
extern void (*D_sc03_104_8019D68C[])();
extern void (*D_sc03_104_8019D740[])();
extern void (*D_sc03_104_801BCC04[])();
extern void (*D_sc03_104_801BCF4C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_104_8018AFEC;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc03_104_801BCC3C;
extern void func_sc03_104_8018AB7C();
extern s32 D_sc03_104_801BCCA4[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc03_104_801BCE70;
extern s32 D_sc03_104_801BCE74;
extern s32 D_sc03_104_801BCE88;
extern s32 D_sc03_104_801BCE9C;
extern s32 D_sc03_104_801BCF08;
extern s32 D_sc03_104_801BCDEC[];
extern s32 D_sc03_104_801BCD68[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc03_104_8018A924();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc03_104_801BCF74[])();
extern u8 D_sc03_104_801BCC70;
extern u8 D_sc03_104_801BD414;
extern u8 D_sc03_104_801BD634;
extern void func_8002D4C8();
extern u8 D_sc03_104_801BD424;
extern u8 D_sc03_104_801BD52C;

void func_sc03_104_8017BEBC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_104_8017BEF8(u8 *arg0) {
    D_sc03_104_8018E6D8[AF(arg0, u16, 2)]();
}

void func_sc03_104_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017BFE0(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C064(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_104_8017C218((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_104_801812B0(void);
extern s32 func_sc03_104_8018125C();
extern u8 D_800AE6BD;
extern s32 func_8014C050();
extern s32 func_80171928();
extern s32 D_sc03_104_8018E7FC[];
extern s32 func_8013B7F4();
extern void (*D_sc03_104_8019CA44[])();
extern void func_sc03_104_80183D98();
extern void func_sc03_104_801853E4();
extern void func_8012B2CC();
extern void func_sc03_104_8018536C();
extern s32 func_sc03_104_801855B4();
extern s8 D_sc03_104_801C00B0;
extern s8 D_sc03_104_801C00B1;
extern s8 D_sc03_104_801C00B2;
extern void func_sc03_104_80183DEC();
extern s32 func_8012C1B8();
extern s32 D_sc03_104_8019CA14;
extern u8 D_sc03_104_8019CA60;
extern void func_8001C2C4();
extern void func_8012AD50();
extern void func_sc03_104_80184604();
extern u8 D_sc03_104_8019CA78;
extern void func_sc03_104_80184934();
extern s32 func_sc03_104_801846F0();
extern void func_sc03_104_80184574();
extern s32 func_80178970();
extern void func_800D1724();
extern u8 D_sc03_104_801C0244;
extern u16 D_sc03_104_801C023C;
extern u16 D_sc03_104_801C023E;
extern s16 D_sc03_104_801C0240;
extern s16 D_sc03_104_801C0242;
extern s32 func_sc03_104_8018552C();
extern void func_sc03_104_80185458();
extern void func_80015978();
extern s32 func_sc03_104_801859A0();
extern s32 func_sc03_104_80185CE4();
extern void func_sc03_104_80185BC8();
extern u8 D_sc03_104_8019D1A0;
extern u8 D_sc03_104_8019D1C0;
extern u8 D_sc03_104_8019D284;
extern s32 func_8012CBCC();
extern void func_8012E688();
extern void func_8012CBA4();
extern void func_8012DFD4();
extern void func_80131B14();
extern void func_8012B23C();
extern void func_80131A34();
extern s32 func_80153BD8();
extern void func_80153BF0();
extern u8 D_sc03_104_8019F5D0;
extern void func_8012B14C();
extern u8 D_sc03_104_801ABACC;
extern void func_8012C588();
extern u8 D_sc03_104_8019F5EC;
extern u8 D_sc03_104_801AB8B4;
extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 D_80127078;
extern u8 D_sc03_104_8019F884;
extern u8 D_sc03_104_8019F88C;
extern u8 D_sc03_104_801AC374;
extern u8 D_sc03_104_801ACAF4;
extern s32 func_8012DEB8();
extern u8 D_sc03_104_801AC6B4;
extern u8 D_sc03_104_801ACF64;

extern s16 D_sc03_104_801C013C;

extern void func_80171990();
extern void func_80146994();
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
extern void func_8013B7AC();
extern void (*D_sc03_104_80199E4C[])();
extern void func_sc03_104_8018282C();
extern void func_8012CBF4();
extern s32 func_80013478();
extern s16 D_80126CBA;
extern s32 func_8012BE54();
extern s32 func_sc03_104_80182898();
extern s32 func_8012BEE8();
extern void func_8012E88C();
extern void func_8002A04C();
extern void func_8012B200();
extern void func_8012E8A8();
extern u8 D_sc03_104_80199E78;
extern s32 func_8012D5E4();
extern u8 D_80078EC1;
extern void func_sc03_104_80182CB4();
extern void func_sc03_104_8018300C();
extern void func_sc03_104_80182FCC();
extern u8 D_sc03_104_80199F10;
extern void func_80017274();
extern s32 func_8012AD44();
extern u8 D_sc03_104_8019C9F8;
extern void func_80178B18();
extern s32 func_sc03_104_80183C30();
extern void func_8012C098();

extern s32 func_8012BD14();
extern void func_80016714();


extern void func_sc03_104_80185A94();

extern void func_8001CA1C();
extern SV8 D_sc03_104_8019D55C[];
extern u8 D_sc03_104_8019D2C0;
extern u8 D_sc03_104_8019D380;
extern u8 D_sc03_104_8019D408;
extern u8 D_sc03_104_8019D4C8;
extern u8 D_sc03_104_8019D5AC;
extern u8 D_sc03_104_8019D5D0;
extern u8 D_sc03_104_8019D5BC;
extern u8 D_sc03_104_8019D5C8;

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8017C218);

void func_sc03_104_8017C524(u8 *arg0) {
    D_sc03_104_8018E6EC[AF(arg0, u16, 2)]();
}

void func_sc03_104_8017C560(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_104_8017C5A0(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C610(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C69C(u8 *arg0) {
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
    func_sc03_104_8017C218((s32) arg0);
}

void func_sc03_104_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_104_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc03_104_8017C7C4(u8 *arg0) {
    D_sc03_104_8018E700[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8017C800);

void func_sc03_104_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_104_8017C910((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8017C910);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8017CA80);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8017D960);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80180D88);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80180DC8);

void func_sc03_104_80180E14(u8 *arg0) {
    D_sc03_104_8018E7A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_80180E50(u8 *arg0) {
    func_sc03_104_80181188();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_80180E94(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_104_80180EB8(u8 *arg0) {
    D_sc03_104_8018E7AC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_80180EF4(u8 *arg0) {
    func_sc03_104_801811B0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_80180F34(u8 *arg0) {
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

void func_sc03_104_80180FB0(void) {
    func_800D1EBC();
}

void func_sc03_104_80180FD0(u8 *arg0) {
    D_sc03_104_8018E7B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_8018100C(u8 *arg0) {
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

void func_sc03_104_80181080(u8 *arg0) {
    D_sc03_104_8018E7C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_104_801810BC(u8 *arg0) {
    func_sc03_104_801812B0();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_104_801810F8(void) {
    return 0;
}

s32 func_sc03_104_80181100(u8 *arg0) {
    func_8002D4C8(0x1C, 0);
    func_8001BFD0();
    func_8002D4C8(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_104_80181168(void) {
    func_800D1EBC();
}

void func_sc03_104_80181188(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7D4, 0x01000000);
}

void func_sc03_104_801811B0(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7D8, 0x01000000);
}

void func_sc03_104_801811D8(u8 *arg0) {
    D_sc03_104_8018E7E4[AF(arg0, u8, 0x216)]();
}

void func_sc03_104_80181214(s32 arg0) {
    func_80171990();
    func_80146994(0x19, arg0, 0x06920693, 0);
    func_sc03_104_8018125C(arg0);
}

s32 func_sc03_104_8018125C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = func_8014C050(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = func_80171928(arg0);
    }
    return var_v0;
}

void func_sc03_104_801812B0(void) {
    func_8016EE40((s32) &D_sc03_104_8018E7DC, 0x01000000);
}

void func_sc03_104_801812D8(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_104_80181404, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_104_80181404((s32) &D_80126948);
}

void func_sc03_104_8018136C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0x35;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x73;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_104_80181404, 1);
    func_8012A094((s32) &D_80126948);
    func_sc03_104_80181404((s32) &D_80126948);
}

void func_sc03_104_80181404(s32 arg0) {
    D_sc03_104_8018E7EC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181440);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181528);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801815DC);

s32 func_sc03_104_80181774(s32 arg0) {
    return func_8013B7F4(D_sc03_104_8018E7FC[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801817A4);

void func_sc03_104_801817C4(u8 *arg0) {
    D_sc03_104_80199DC0[AF(arg0, u16, 2)]();
}

void func_sc03_104_80181800(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8013B7AC(var_s0);
        var_s0 += 1;
    } while (var_s0 < 3);
    AF(arg0, s32, 0xCC) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181858);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181A2C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181A84);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181AD0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181B14);

void func_sc03_104_80181B58(void) {
}

void func_sc03_104_80181B60(u8 *arg0) {
    s32 temp_v0;

    D_sc03_104_80199E4C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE4) + 1;
        AF(arg0, s32, 0xE4) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_104_8018282C((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181BDC);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181CA8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181D58);

void func_sc03_104_80181EA0(s32 arg0, s32 arg1) {
    func_8012CBF4(arg0, arg1);
    if (func_80013478(arg0 + 4, arg0 + 0x88) < 0x101) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc03_104_80181EF4(s32 arg0) {
    if ((func_8012BE54(arg0) <= 0x40000) && (D_80126CBA == 0) && (func_sc03_104_80182898(arg0) == 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80181F54);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80182038);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801822A0);

void func_sc03_104_801823F0(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(arg0, s16, 2) = 9;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x34) = 0;
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018241C);

void func_sc03_104_80182578(s32 arg0, s32 arg1) {
    void *temp_a0;

    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C(arg0);
        temp_a0 = AF(arg0, void *, 0xCC);
        if (temp_a0 != NULL) {
            AF(temp_a0, s16, 0xFC) = 0;
        }
    }
}

void func_sc03_104_801825C8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, s16, 0xFC) = 1;
    }
}

void func_sc03_104_801825E4(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) & 0xFFEF);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 0x1000;
        AF(temp_v1_3, s16, 0x1A) = 0x1000;
        AF(temp_v1_3, s16, 0x18) = 0x1000;
        func_8012B200(arg0);
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801826A0);

s32 func_sc03_104_801826F0(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_104_80199E78, (s32) (&D_sc03_104_80199E78 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018271C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801827EC);

void func_sc03_104_8018282C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

s32 func_sc03_104_80182898(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_104_801828B0(u8 *arg0) {
    D_sc03_104_80199EF8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801828EC);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801829C4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80182B08);

void func_sc03_104_80182C08(u8 *arg0) {
    if (AF(arg0, s16, 0xFE) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_sc03_104_80182CB4((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 2) = 1;
        func_8012E88C((s32) arg0);
        func_sc03_104_8018300C(AF(arg0, s32, 0xCC));
        AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
        AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
        AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
        func_8012B2CC((s32) arg0);
        func_sc03_104_80182FCC((s32) arg0);
    }
}

void func_sc03_104_80182CB4(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xCC), 0x38);
    func_8012C218(arg0);
}

s32 func_sc03_104_80182CEC(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_104_80199F10, (s32) (&D_sc03_104_80199F10 + 8), 5);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80182D18);

void func_sc03_104_80182FCC(s32 arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0x19);
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    }
}

void func_sc03_104_8018300C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_104_8018302C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018304C);

void func_sc03_104_801830F0(u8 *arg0) {
    D_sc03_104_8019A070[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018312C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801831E8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183318);

void func_sc03_104_801833F0(u8 *arg0) {
    D_sc03_104_8019A080[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018342C);

void func_sc03_104_801837C8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x40);
    if ((func_8012CBCC((s32) arg0) != 0) || (func_8012BEE8((s32) arg0) != 0)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_80017274((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018383C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801839C0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183AF4);

s32 func_sc03_104_80183B90(s32 arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    AF(arg0, s16, 0xFC) = 0;
    return func_8012AD44(arg0, 3);
}

s32 func_sc03_104_80183BCC(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    return func_8012AD44(arg0, 4);
}

s32 func_sc03_104_80183BF4(s32 arg0) {
    func_80178B18(arg0, (s32) &D_sc03_104_8019C9F8);
    return func_8012AD44(arg0, 5);
}

s32 func_sc03_104_80183C30(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return func_8012AD44(arg0, 6);
}

void func_sc03_104_80183C50(u8 *arg0) {
    D_sc03_104_8019CA44[AF(arg0, u16, 2)]();
    func_sc03_104_80183D98((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183CA0);

s32 func_sc03_104_80183D54(s32 arg0) {
    func_sc03_104_801853E4(8);
    func_8012B2CC(arg0);
    func_sc03_104_8018536C(arg0 + 4);
    return func_sc03_104_801855B4();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183D98);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183DEC);

void func_sc03_104_80183F4C(u8 *arg0) {
    D_sc03_104_8019CA70[AF(arg0, u16, 2)]();
}

void func_sc03_104_80183F88(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0;

    temp_v1 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0 = (var_v0 & 0xFF) * 8;
    D_sc03_104_801C00B2 = temp_v0;
    D_sc03_104_801C00B1 = temp_v0;
    D_sc03_104_801C00B0 = temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80183FE8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801840F4);

void func_sc03_104_80184200(s32 arg0) {
    if (func_80178970() != 0) {
        func_80178D18(arg0);
        func_sc03_104_80183C30(arg0);
    }
}

void func_sc03_104_80184240(u8 *arg0) {
    if (AF(arg0, u16, 0x34) != 0) {
        func_sc03_104_80183DEC((s32) arg0, 0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) - 1);
    }
}

void func_sc03_104_8018428C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_104_8019CA60 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    D_sc03_104_8019CA14 = AF(arg0, s32, 0xDC);
    func_8012AD50(arg0);
}

void func_sc03_104_80184314(void) {
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018431C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80184574);

void func_sc03_104_801845C8(u8 *arg0) {
    D_sc03_104_8019CB14[AF(arg0, u16, 2)]();
}

void func_sc03_104_80184604(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_104_8019CA78;
    func_sc03_104_80184934(temp_s1, (s32) temp_s2);
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

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801846F0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801847B0);

void func_sc03_104_80184800(u8 *arg0) {
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
            } else if (!((u16) AF(arg0, s16, 0x70) & 1) && (func_sc03_104_801846F0((s32) arg0, 0x30) != 0)) {
                func_sc03_104_80184574((s32) arg0);
                func_80029124(0xAE, 0);
                func_80029124(0xAF, 0);
                func_80029124(0xB0, 0);
            }
            func_sc03_104_80184604((s32) arg0);
        }
    }
}

void func_sc03_104_801848E8(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_800D1724(AF(arg0, s32, 0xDC));
    }
    func_sc03_104_80184604(arg0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80184934);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80184D50);

void func_sc03_104_80185270(void) {
}

void func_sc03_104_80185278(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_104_801C0244;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018529C);

s32 func_sc03_104_8018533C(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_104_801C023C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_104_801C0240 = (s16) arg1;
    D_sc03_104_801C0242 = (s16) arg2;
    D_sc03_104_801C023E = temp_v0;
    return (s32) temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018536C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801853E4);

void func_sc03_104_80185400(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_104_8018552C();
    if (temp_v0 >= 0) {
        func_sc03_104_80185458(temp_v0, arg0, arg1, arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185458);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018552C);

void func_sc03_104_80185568(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_104_801C0244, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801855B4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185690);

s32 func_sc03_104_80185954(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_104_801C013C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_104_80185978(s32 arg0) {
    s32 sp10;

    func_80015978(arg0, (s32) &sp10);
    return func_sc03_104_801859A0((s32) &sp10);
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801859A0);

s32 func_sc03_104_80185A28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_104_80185A94(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_104_80185BC8(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185A94);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185B04);

void func_sc03_104_80185B7C(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_104_80185CE4();
    if (temp_v0 >= 0) {
        func_sc03_104_80185BC8(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185BC8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185CE4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185D20);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80185E34);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80186118);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801863B0);

void func_sc03_104_80186538(s32 arg0) {
    s32 o;

    o = func_8012C1B8();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8012B23C(arg0);
    AF(arg0, u16, 0x12) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_104_8019D55C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        SetScript(arg0, &D_sc03_104_8019D380);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D408);
        SetScript(arg0, &D_sc03_104_8019D4C8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_104_8019D5AC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_104_8019D5D0;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_104_8019D284;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = func_8012C658(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        SetScript(arg0, &D_sc03_104_8019D380);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D408);
        SetScript(arg0, &D_sc03_104_8019D4C8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D5BC);
        SetScript(arg0, &D_sc03_104_8019D5C8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_104_8019D2C0);
        SetScript(arg0, &D_sc03_104_8019D380);
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

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801869E4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80186B78);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80186F28);

void func_sc03_104_80187014(u8 *arg0) {
    D_sc03_104_8019D68C[AF(arg0, u16, 2)]();
}

void func_sc03_104_80187050(u8 *arg0) {
    D_sc03_104_8019D740[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018708C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_104_801870A4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_104_8019D1C0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_104_8019D1A0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_104_8018AFEC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        func_8012C658(0x164, 0x555, arg0);
        func_8012C658(0x164, 0xAAA, arg0);
        func_8012C658(0x164, 0x1000, arg0);
    }
}

void func_sc03_104_80187148(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_104_80187164(s32 arg0) {
    void *temp_a2;

    if (func_8012C354(arg0, (s32) &D_sc03_104_8019D284) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_104_8019D1A0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc03_104_8018AFEC, (s32) temp_a2);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801871E8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187224);

void func_sc03_104_80187254(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801872D8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018739C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018747C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801874EC);

void func_sc03_104_801875C8(void) {
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801875D0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187688);

void func_sc03_104_8018774C(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801877A0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018781C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187900);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801879CC);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187AA4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187C28);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80187E4C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188200);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188440);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801886A8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188850);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188A9C);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188BE8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188CA0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188DF4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188EA0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80188F50);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189038);

void func_sc03_104_80189154(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        if (AF(arg0, s16, 0x70) == 4) {
            temp_v0 = func_8012C658(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0x88) = (u16) AF(arg0, u16, 0x88);
                AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, u16, 0x8C) = (u16) AF(arg0, u16, 0x8C);
                AF(temp_v0, s16, 0xA) = (s16) (AF(arg0, u16, 0x8A) - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) AF(arg0, u16, 0x8A);
                func_8012B2CC(temp_v0);
            }
        }
        if (func_80153BD8((s32) arg0) != 0) {
            func_80153BF0((s32) arg0);
        }
        if (AF(arg0, s32, 0x78) != 0) {
            func_8002A04C((s32) arg0);
        }
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189234);

void func_sc03_104_8018930C(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    func_80131B14();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    func_8012B23C((s32) arg0);
    func_80131A34((s32) arg0, 8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_104_80189374(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801893B0);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189454);

void func_sc03_104_80189514(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    func_8012B14C((s32) arg0, (s32) &D_sc03_104_8019F5D0);
}

void func_sc03_104_80189548(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (func_80153BD8((s32) arg0) != 0) {
        func_80153BF0((s32) arg0);
    }
}

void func_sc03_104_801895A4(s32 arg0) {
    if (func_80153BD8(arg0) != 0) {
        func_80153BF0(arg0);
    }
}

void func_sc03_104_801895DC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_104_801ABACC, arg2);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189638);

void func_sc03_104_80189710(u8 *arg0) {
    s32 var_a0;

    if (AF(arg0, s32, 0x94) == 0x17) {
        if (AF(arg0, s16, 0x70) == 2) {
            var_a0 = 0x1A7;
        } else {
            func_8002D4C8(0xCB3, 0);
            var_a0 = 0x19F;
        }
        func_8012C588(var_a0, (s32) arg0);
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc03_104_801ABACC);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_801897A4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189870);

void func_sc03_104_80189948(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        func_8002D4C8(0x702, 0x107F);
    }
    func_8012CBCC((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc03_104_801AB8B4);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_104_8019F5EC | 0x40000000 | 0x20000000);
    }
}

void func_sc03_104_801899E4(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012CBCC((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_80189A3C(void) {
}

void func_sc03_104_80189A44(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_104_801AC374);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_104_801ACAF4);
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 1;
}

void func_sc03_104_80189AE4(s32 arg0) {
    if (func_80153BD8(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc03_104_801ACAF4);
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    AF(arg0, s16, 2) = 4;
}

void func_sc03_104_80189B38(s32 arg0) {
    if (func_8012DEB8(arg0, (s32) &D_sc03_104_8019F884, (s32) &D_sc03_104_8019F88C) == 1) {
        D_80126B96 = 0x400F;
        D_80126B98 = 0;
        D_80127078 = arg0;
        AF(arg0, s16, 2) = 0x12;
        SetScript(arg0, (s32) &D_sc03_104_801AC6B4);
        return;
    }
    SetScript(arg0, (s32) &D_sc03_104_801ACF64);
    AF(arg0, s16, 2) = 6;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189BCC);

void func_sc03_104_80189C14(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
}

void func_sc03_104_80189C3C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, u16, 0x72) & 0x4000) || (AF(arg0, s16, 0x98) == 0)) {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
        SetScript((s32) arg0, AF(arg0, s32, 0xCC), arg2);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189C88);

void func_sc03_104_80189D74(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_8012CBCC(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        func_8002D4C8(0xCB4, 0);
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189DF8);

void func_sc03_104_80189F04(s32 arg0) {
    if (func_8012CBCC(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_104_80189F3C(u8 *arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x200);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x200);
    if ((s16) AF(AF(arg0, void *, 0x20), u16, 0x1A) < 0x401) {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc03_104_80189FA8(u8 *arg0) {
    D_sc03_104_801BCC04[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_80189FE4);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018A1D8);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018A288);

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018A338);

void func_sc03_104_8018A3E8(void) {
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018A3F0);

void func_sc03_104_8018A494(u8 *arg0) {
    D_sc03_104_801BCF4C[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018A4D0(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc03_104_801BCC3C) != 0) {
        if (!(func_80029178(D_sc03_104_801BCCA4[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc03_104_8018AB7C);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_104_8018AFEC);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_8018A5A4(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc03_104_8018A5CC(void) {
}

void func_sc03_104_8018A5D4(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc03_104_801BCE88 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_104_801BCDEC[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_104_801BCE74 = 0;
            func_80029124(D_sc03_104_801BCDEC[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_104_801BCE70 = 2;
        } else {
            D_sc03_104_801BCE88 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_104_801BCD68[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_104_801BCE70 = 0;
            D_sc03_104_801BCE74 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc03_104_801BCE9C);
    } else {
        var_a1 = &D_sc03_104_801BCF08;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc03_104_8018A720(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc03_104_801BCCA4[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_104_801BCCA4[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc03_104_8018A924() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_104_8018A840(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc03_104_8018A86C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_104_8018A87C(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_104_8018A88C(u8 *arg0) {
    func_80029124(D_sc03_104_801BCCA4[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_104_8018A8CC(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_104_8018A900(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018A924);

void func_sc03_104_8018A988(u8 *arg0) {
    D_sc03_104_801BCF74[AF(arg0, u16, 2)]();
}

void func_sc03_104_8018A9C4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_104_801BCC70) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_104_801BD634);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_104_801BD414);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc03_104_8018AA4C(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_104_801BD424);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_104_801BD52C);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc03_104_8018AB0C(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_104_801BD634);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_104_801BD414);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc03_104/nonmatchings/sc03_104", func_sc03_104_8018AB7C);
