#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_001_8017BE9C(void) {
}

void func_sc07_001_8017BEA4(void) {
}

void func_sc07_001_8017BEAC(void) {
}

void func_sc07_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc07_001_80184F68[])();
void func_sc07_001_8017DA7C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_001_80184F70[])();
extern void func_800D1EBC();
extern u8 D_sc07_001_80184F7C;
extern void func_8016EE40();
extern u8 D_sc07_001_80184F80;
extern void func_sc07_001_8017DC40();
extern void (*D_sc07_001_80184F84[])();
extern void (*D_sc07_001_80185380[])();
extern void (*D_sc07_001_80185388[])();
extern void (*D_sc07_001_801853E0[])();
extern void (*D_sc07_001_801853FC[])();
extern void (*D_sc07_001_80185470[])();
extern void (*D_sc07_001_80185690[])();
extern void (*D_sc07_001_8018569C[])();
extern void func_8012AD50();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void func_8002931C();
extern s32 func_8013373C();
extern u16 D_sc07_001_801AAD8C;


extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 D_sc07_001_801AABA0;
extern void func_8012A018();
extern void func_8012A094();
extern u16 D_800B9AB8;
extern s32 D_80126950;
extern s16 D_80126960;
extern u16 D_80126B5E;
extern u16 D_80126B66;
extern u16 D_sc07_001_801AAD64;
extern u16 D_sc07_001_801AAD68;
extern void (*D_sc07_001_8018533C[])();
extern s32 func_sc07_001_8017ED50();
extern void func_8012E8A8();
extern s16 D_80126B62;
extern s32 func_8012E544();
extern void func_8012E88C();
extern s32 func_8012BEE8();
extern u8 D_80126B58;
extern u8 D_sc07_001_801851F4;
extern s32 func_80172658();
extern s32 func_8012BE54();
extern void func_80178B18();
extern s32 func_8012C588();
extern s32 func_sc07_001_8017EDC0();
extern u8 D_sc07_001_80185368;
extern s32 func_8012CC64();
extern void func_8012C218();
extern void func_8012AD80();
extern void func_sc07_001_8017FE38();
extern s32 func_sc07_001_80180570();
extern void func_8012E014();
extern u8 D_sc07_001_801853EC;
extern u8 D_sc07_001_8019E510;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern u8 D_sc07_001_80184FD0;
extern u8 D_sc07_001_80185440;
extern u8 D_sc07_001_801A1BC0;
extern s32 D_sc07_001_801A1BDC;
extern u8 D_sc07_001_801AAD90;
extern void func_8012B2CC();
extern void func_80132288();
extern s16 D_80126944;
extern void func_sc07_001_8017DB70();
extern void func_8012A568();

extern void func_sc07_001_8017F4E4();
extern void func_sc07_001_8017F668();

extern u16 D_800B9ABA;
extern u16 D_80126BE0;
extern u16 D_80126BE2;
extern u16 D_80126BE4;

extern u8 D_800AE620;
extern s32 func_80135004();
typedef struct { s16 m[3][3]; s32 t[3]; } MX;

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017BEBC);

s32 func_sc07_001_8017CD9C(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017CDF0);

void func_sc07_001_8017D8C4(void) {
    func_8002931C(0x04740000);
}

void func_sc07_001_8017D8E4(u8 *arg0) {
    D_sc07_001_80184F68[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D920(u8 *arg0) {
    func_sc07_001_8017DA7C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D964(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_001_8017D988(u8 *arg0) {
    D_sc07_001_80184F70[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_001_8017D9C4(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_001_8017D9E0(u8 *arg0) {
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

void func_sc07_001_8017DA5C(void) {
    func_800D1EBC();
}

void func_sc07_001_8017DA7C(void) {
    func_8016EE40((s32) &D_sc07_001_80184F7C, 0x01000000);
}

void func_sc07_001_8017DAA4(void) {
    func_8016EE40((s32) &D_sc07_001_80184F80, 0x01000000);
}

void func_sc07_001_8017DACC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x71;
    D_8012696A = 0x800;
    D_sc07_001_801AABA0 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_001_8017DC40, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DB70(void) {
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x40;
    D_8012697A = 0;
    D_sc07_001_801AABA0 = (s32) D_800B9AB8;
    func_8012A018((s32) func_sc07_001_8017DC40, 1);
    func_8012A094((s32) &D_80126948);
    D_80126960 = 0x71;
    D_80126950 = 0x190;
    D_80126968 = 0x155;
    D_80126954 = 0x12C;
    func_sc07_001_8017DC40((s32) &D_80126948);
}

void func_sc07_001_8017DC40(s32 arg0) {
    D_sc07_001_80184F84[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017DC7C);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017DDD4);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017DF14);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E0AC);

s32 func_sc07_001_8017E278(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_800B9AB8 = AF(arg1, u16, 0) + D_sc07_001_801AABA0;
    temp_v0 = AF(arg1, u16, 2);
    D_800B9ABA = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_001_8017E2A8(void) {
    return 0x86;
}

s32 func_sc07_001_8017E2B0(s32 arg0, s32 arg1) {
    return func_8013373C(0);
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E2D0);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E3E8);

void func_sc07_001_8017E448(u8 *arg0) {
    D_sc07_001_8018533C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc07_001_8017ED50((s32) arg0);
        if (AF(arg0, s32, 0xE0) & 0x10) {
            D_80126B5E = D_sc07_001_801AAD64;
            D_80126B66 = D_sc07_001_801AAD68;
        }
    }
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E4DC);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E64C);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E6EC);

void func_sc07_001_8017E734(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, s16, 2) = 4;
    func_8012E8A8((s32) arg0);
}

void func_sc07_001_8017E760(u8 *arg0) {
    s32 temp_v0;

    if (D_80126B62 < -0xC23) {
        AF(arg0, s16, 2) = 9;
        temp_v0 = func_8012E544(0x3BC);
        if (temp_v0 != 0) {
            func_8012E88C(temp_v0);
        }
    } else if ((func_8012BEE8((s32) arg0) != 0) && (D_80126B62 < -0x624)) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E7E8);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017E8DC);

void func_sc07_001_8017EA6C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2) = 8;
    AF(arg0, s16, 0x34) = 0;
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017EA84);

void func_sc07_001_8017EBE8(s32 arg0) {
    s32 temp_v0;

    if ((D_80126B62 == -0xE82) && (func_80172658((s32) &D_80126B58) != 0) && ((temp_v0 = func_8012E544(0x3BC), (temp_v0 == 0)) || (func_8012BE54(temp_v0) <= 0x10000))) {
        func_80178B18(arg0, (s32) &D_sc07_001_801851F4);
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0xD8) = func_8012C588(0x3A8, arg0);
        func_8012E8A8(arg0);
        AF(arg0, s32, 0x1C) = 0x1F;
        func_800D0C48(1);
    }
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017ECA0);

s32 func_sc07_001_8017ED50(s32 arg0) {
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE4, 1, 0);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xE8, 2, 1);
    func_sc07_001_8017EDC0(arg0, arg0 + 0xEC, 4, 2);
    return func_sc07_001_8017EDC0(arg0, arg0 + 0xF0, 8, 3);
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017EDC0);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017EF30);

void func_sc07_001_8017F0EC(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xD8);
    if ((AF(temp_s0, u16, 0x34) == 0) && (func_8012CC64((s32) temp_s0, (s32) &D_sc07_001_80185368) & 0x2000)) {
        AF(temp_s0, s32, 0x18) = 0xFFFA0000;
        AF(temp_s0, u16, 0x34) = (u16) (AF(temp_s0, u16, 0x34) + 1);
        func_8002D4C8(4, 0xC04);
    }
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017F15C);

s32 func_sc07_001_8017F258(u8 *arg0) {
    return AF(arg0, u16, 0x34) == 2;
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017F26C);

void func_sc07_001_8017F32C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x3BC);
    if (temp_v0 != 0) {
        SetScript(temp_v0, AF(arg0, s32, 0xF8));
    }
}

void func_sc07_001_8017F36C(void) {
    D_sc07_001_801AAD8C += 1;
}

s32 func_sc07_001_8017F38C(u8 *arg0) {
    return AF(arg0, s16, 0x10A) == D_sc07_001_801AAD8C;
}

void func_sc07_001_8017F3A8(u8 *arg0) {
    D_sc07_001_80185380[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017F3E4);

void func_sc07_001_8017F470(u8 *arg0) {
    s32 pad[2];
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x64);
    if (AF(temp_s1, s16, 0x36) != AF(arg0, s16, 0xFE)) {
        func_8012C218((s32) arg0);
        return;
    }
    func_sc07_001_8017F4E4((s32) arg0);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(temp_s1, void *, 0x20), u16, 0x12);
    func_sc07_001_8017F668((s32) arg0);
}

void func_sc07_001_8017F4E4(s32 arg0) {
    SV8 a;
    SV8 b;
    SV8 d;
    MX m;
    s32 p;
    s32 i;
    s32 n;

    m = *(MX *)&D_800AE620;
    p = AF(arg0, s32, 0x64);
    RotMatrixY(AF(AF(p, s32, 0x20), s16, 0x12), &m);
    i = 0;
    d.z = 0;
    d.y = 0;
    d.x = 0;
    do {
        a.x = AF(p, u16, 6) + d.x;
        a.y = AF(p, u16, 0xA) + d.y;
        n = i + 1;
        a.z = AF(p, u16, 0xE) + d.z;
        d.y = 0;
        d.x = 0;
        d.z = -(n << 7);
        ApplyMatrixSV(&m, &d, &d);
        b.x = AF(p, u16, 6) + d.x;
        b.y = AF(p, u16, 0xA) + d.y;
        b.z = AF(p, u16, 0xE) + d.z;
        if (func_80135004(1, &a, &b) != 0) {
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y - 0x80;
            AF(arg0, u16, 0xE) = b.z;
            return;
        }
        i = n;
    } while (i < 10);
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017F668);

void func_sc07_001_8017F7F8(u8 *arg0) {
    D_sc07_001_80185388[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017F834);

void func_sc07_001_8017FD88(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
        temp_a0_2 = AF(arg0, void *, 0x20);
        AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
        temp_a0_3 = AF(arg0, void *, 0x20);
        AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x102));
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012AD80((s32) arg0);
    func_sc07_001_8017FE38((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8017FE38);

void func_sc07_001_801801F4(u8 *arg0) {
    D_sc07_001_801853E0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180230);

void func_sc07_001_80180350(u8 *arg0) {
    if (func_sc07_001_80180570() == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x48) = 0x18000;
        return;
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, u8, 0x74) != 0) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            goto block_7;
        }
    } else {
        if (func_8012BEE8((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 2;
            AF(arg0, s32, 0x48) = 0x18000;
        }
block_7:
        if (AF(arg0, u8, 0x74) != 0) {
            func_8012E014((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180404);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180570);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180754);

void func_sc07_001_80180814(u8 *arg0) {
    D_sc07_001_801853FC[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180850(u8 *arg0) {
    D_sc07_001_80185470[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_8018088C);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180A2C);

void func_sc07_001_80180B54(u8 *arg0) {
    D_sc07_001_80185690[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180B90(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_8019E510);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc07_001_801853EC | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, s16, 0xA) = -0x1100;
    AF(arg0, s16, 0xE) = -0x240;
    AF(arg0, s32, 0x14) = 0x60000;
    AF(arg0, s16, 6) = 0;
    AF(arg0, u8, 0x75) = 2;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc07_001_80180C2C(u8 *arg0) {
    if ((D_sc07_001_801AAD8C & 0xFFFF) == 3) {
        AF(arg0, s16, 0x34) = 0;
        D_sc07_001_801AAD8C += 1;
    }
    if (AF(arg0, u8, 0x74) != 0) {
        func_8012E014((s32) arg0);
        D_80126BE0 = D_80126B5E;
        D_80126BE2 = D_80126B62;
        D_80126BE4 = D_80126B66;
    }
}

void func_sc07_001_80180CB0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc07_001_801A1BC0);
    AF(arg0, s16, 6) = -0x134;
    AF(arg0, s16, 0xA) = -0xE82;
    AF(arg0, s16, 0xE) = -0x1D9;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0xD00;
    func_8012B2CC((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc07_001_80184FD0);
    func_80132288((s32) &D_sc07_001_801AAD90, (s32) &D_sc07_001_80185440, D_sc07_001_801A1BDC);
    func_8012E8A8((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180D74);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180E78);

void func_sc07_001_80180F18(void) {
}

void func_sc07_001_80180F20(u8 *arg0) {
    D_sc07_001_8018569C[AF(arg0, u16, 2)]();
}

void func_sc07_001_80180F5C(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc07_001_80180F7C(s32 arg0) {
    if (D_80126944 >= -0x3FF) {
        func_8012A568((s32) &func_sc07_001_8017DB70);
        func_8012AD50(arg0);
    }
}

void func_sc07_001_80180FC8(void) {
}

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80180FD0);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80181034);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80181194);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80181378);

INCLUDE_ASM("asm/stg/sc07_001/nonmatchings/sc07_001", func_sc07_001_80181434);
