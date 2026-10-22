#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_077_8017BE9C(void) {
}

void func_sc01_077_8017BEA4(void) {
}

void func_sc01_077_8017BEAC(void) {
}

void func_sc01_077_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_077_8018A520[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc01_077_8018A508;
extern void (*D_sc01_077_8018A528[])();
extern u8 D_sc01_077_8018A514;
extern void func_sc01_077_8017DA08();
extern void (*D_sc01_077_8018A530[])();
extern void func_sc01_077_8017DAEC();
extern void (*D_sc01_077_8018A588[])();
extern void func_8016EDEC();
void func_sc01_077_8017DE84(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc01_077_8018A590[])();
extern void func_800D1EBC();
extern void (*D_sc01_077_8018A740[])();
extern void (*D_sc01_077_8018A754[])();
void func_sc01_077_8017E0EC(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc01_077_8018A760[])();
void func_sc01_077_8017E1D4(u8 *arg0);
extern void (*D_sc01_077_8018A790[])();
void func_sc01_077_8017E748(u8 *arg0);
extern void (*D_sc01_077_8018A79C[])();
void func_sc01_077_8017E868(u8 *arg0);
extern void (*D_sc01_077_8018A7B0[])();
extern void (*D_sc01_077_8018A7B8[])();
extern void (*D_sc01_077_8018A7F0[])();
extern void (*D_sc01_077_8018A7F8[])();
extern void (*D_sc01_077_8018A87C[])();
extern void (*D_sc01_077_8018A89C[])();
extern void (*D_sc01_077_8018A904[])();
extern void (*D_sc01_077_8018AA1C[])();
extern void (*D_sc01_077_8018AA24[])();
extern void func_sc01_077_80180930();
extern void func_sc01_077_80182988();
extern void (*D_sc01_077_8018AF90[])();
extern void (*D_sc01_077_8018AFB8[])();
extern void (*D_sc01_077_8018B000[])();
extern void (*D_sc01_077_801991C4[])();
extern void (*D_sc01_077_801B12A4[])();
extern void (*D_sc01_077_801B12B8[])();
extern void (*D_sc01_077_801B1588[])();
extern void (*D_sc01_077_801B159C[])();
extern u8 D_sc01_077_801B1590;
extern void func_8001CB00();
extern void func_801292C8();
extern void (*D_sc01_077_801D564C[])();

void func_sc01_077_8017BEBC(u8 *arg0) {
    D_sc01_077_8018A520[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc01_077_8018A508, 0xFD);
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

void func_sc01_077_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc01_077_8017C150(u8 *arg0) {
    D_sc01_077_8018A528[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc01_077_8018A514, 0x18);
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

void func_sc01_077_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 D_sc01_077_801DA908;
extern s32 func_8012C588();

extern void func_80165770();
extern void func_80175414();
extern void func_8012AD44();
extern u8 D_sc01_077_801B0118;
extern u8 D_sc01_077_801B0D50;
extern u8 D_sc01_077_8018AAEC;
extern u8 D_sc01_077_801B09D0;
extern void func_8012B2CC();
extern void func_8012B23C();
extern s32 func_8012B14C();
extern u8 D_sc01_077_8018AAF8;
extern s32 func_8002D4C8();
extern u8 D_sc01_077_8018AB04;
extern u8 D_sc01_077_801B0908;
extern void func_80143CD4();
extern void func_800CB0E8();
extern u8 D_sc01_077_801B0E48;
extern u8 D_sc01_077_8018AB8C;
extern void func_80130740();
extern void func_8012E364();
extern s32 func_8012E470();
extern void func_8012E4C8();
extern s32 func_8012BEE8();
extern void func_8012C098();
extern u8 D_sc01_077_80196F3C;
extern u8 D_sc01_077_801973C4;
extern s32 func_8012BCCC();
extern u8 D_sc01_077_8019731C;
extern void func_sc01_077_8018469C();
extern u8 D_sc01_077_801970DC;
extern void func_80142414();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc01_077_8018AFC0;
extern void func_8001CA88();
extern void func_80143994();
extern void func_8001C214();
extern u8 D_sc01_077_801B1560;

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
extern s8 D_8012694C;
extern s32 D_80126950;
extern u8 D_sc01_077_801B1DAC;
extern s32 func_80174E9C();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_8016F398();
extern s32 func_sc01_077_8017D900();
extern u16 D_80126980;
extern void func_sc01_077_8017D98C();
extern void func_80171B44();
extern u8 D_sc01_077_8018A62C;
extern u8 D_sc01_077_8018A69C;
extern u8 D_sc01_077_8018A6E4;
extern s32 func_8016F410();
extern void func_80154274();
extern s32 func_801399F0();
extern void func_80139914();
extern s32 func_sc01_077_8017E170();
extern s32 func_80171B4C();
extern s32 D_80126958;
extern u8 D_sc01_077_8018A59C;
extern u8 D_sc01_077_801B17AC;
extern s32 func_8013767C();
extern u8 D_sc01_077_8018A5E4;
extern void func_sc01_077_8017F240();
extern u8 D_sc01_077_801B17F0;
extern u8 D_sc01_077_801B1848;
extern void func_sc01_077_8017D8F0();
extern u8 D_sc01_077_801B19C0;
extern void func_sc01_077_8017D8DC();
extern s32 func_80012B04();
extern void func_8012AD50();
extern u8 D_sc01_077_8018A7C0;
extern void func_8001CC3C();
extern void func_sc01_077_8017EC7C();
extern void func_8001CB6C();
extern s32 func_sc01_077_8017ED88();
extern void (*D_sc01_077_8018A934[])();
extern void func_8012B4B8();
extern void func_8012C0EC();
extern s32 func_8012CE2C();
extern s32 func_8012CBCC();
extern u8 D_sc01_077_80186E48;
extern u8 D_sc01_077_8018A884;
extern u8 D_sc01_077_801D0B94;
extern void func_8001D0E8();
extern void func_8012B200();
extern s32 D_801270C8;
extern void func_sc01_077_8017F714();
extern void (*D_sc01_077_8018AE88[])();
extern u8 D_sc01_077_8018AE70;
extern u8 D_sc01_077_801D100C;
extern u8 D_800D3918;
extern u8 D_sc01_077_8018B00C;
extern void func_8012AD80();
extern s32 func_8012D5E4();
extern void func_8012C218();
extern u8 D_sc01_077_8018AEB8;
extern u8 D_sc01_077_8018AF20;
extern s32 func_8012C354();
extern s32 func_8012C658();
extern void (*D_sc01_077_801D5624[])();
extern void func_sc01_077_80185E68();

extern u8 D_sc01_077_801D5558;
extern u8 D_sc01_077_801D5568;
extern u8 D_sc01_077_801D55C0;
extern u8 D_sc01_077_801D6F6C;
extern s32 D_sc01_077_801D55AC[];

extern u8 D_sc01_077_801D77A8;

extern u16 D_80126970;
extern u16 D_80126974;

extern s32 func_sc01_077_80184594();
extern s32 func_8012CBF4();
extern s32 D_80126D50;
extern u8 D_sc01_077_801B1290;
extern u8 D_sc01_077_801B129C;
extern s32 func_80132EF4();

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017C294);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017C66C);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017C710);

s32 func_sc01_077_8017C908(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017C974);

void func_sc01_077_8017D840(void) {
    D_80126954 = 0x15E;
    D_8012695C = 0x258;
    D_80126968 = 0x1C2;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0x140;
    D_80126978 = 0;
    D_8012697A = 0x140;
    func_8012A018((s32) func_sc01_077_8017DA08, 0);
    func_sc01_077_8017DA08((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
}

void func_sc01_077_8017D8DC(void) {
    D_8012694C = 1;
}

void func_sc01_077_8017D8F0(void) {
    D_8012694C = 0;
}

s32 func_sc01_077_8017D900(void) {
    D_80126950 = 0x1F4;
    D_80126954 = 0x1F4;
    D_8012695C = 0x320;
    D_80126968 = 0x60;
    D_8012696A = 0x800;
    D_80126976 = 0x18;
    D_80126978 = -0x80;
    D_8012696C = 0;
    D_8012697A = -0x7D;
    return func_80174E9C((s32) &D_sc01_077_801B1DAC);
}

void func_sc01_077_8017D98C(void) {
    D_80126954 = 0x15E;
    D_8012695C = 0x258;
    D_80126968 = 0x1C2;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0x140;
    D_80126978 = 0;
    D_8012697A = 0x140;
    func_8012A018((s32) func_sc01_077_8017DA08, 0);
}

void func_sc01_077_8017DA08(s32 arg0) {
    D_sc01_077_8018A530[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017DA44);

void func_sc01_077_8017DACC(s32 arg0) {
    func_sc01_077_8017DAEC(arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017DAEC);

void func_sc01_077_8017DCB0(u8 *arg0) {
    D_sc01_077_8018A588[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_077_8017DCEC(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_077_8017DE84, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_077_8017DD3C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_077_8017DD60(u8 *arg0) {
    D_sc01_077_8018A590[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_077_8017DD9C(u8 *arg0) {
    func_8016EDEC((s32) func_sc01_077_8017E0EC, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_077_8017DDE8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc01_077_8017DE64(void) {
    func_800D1EBC();
}

void func_sc01_077_8017DE84(u8 *arg0) {
    D_sc01_077_8018A740[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017DEC0(u8 *arg0) {
    func_8016F398();
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    func_sc01_077_8017D900();
}

void func_sc01_077_8017DEFC(s32 arg0) {
    u16 temp_v0;

    temp_v0 = D_80126980 | 0x8000;
    D_80126980 = temp_v0;
    if (temp_v0 & 0x8000) {
        func_sc01_077_8017D98C();
        func_80171B44(arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017DF5C);

void func_sc01_077_8017DFD8(s32 arg0) {
    if (func_8016F410(0) != 0) {
        func_80154274(arg0, (s32) &D_sc01_077_8018A62C);
    }
    if (func_8016F410(1) != 0) {
        func_80154274(arg0, (s32) &D_sc01_077_8018A69C);
        AF(arg0, s16, 0x20C) = 1;
    }
    if ((AF(arg0, s16, 0x20C) == 1) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        AF(arg0, s16, 0x20C) = 2;
        func_80154274(arg0, (s32) &D_sc01_077_8018A6E4);
    }
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        BeginScene(arg0);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E0B4(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
    func_80175414();
}

void func_sc01_077_8017E0EC(u8 *arg0) {
    D_sc01_077_8018A754[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E128(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0x800;
    func_80171B44((s32) arg0);
    func_sc01_077_8017E170((s32) arg0);
}

s32 func_sc01_077_8017E170(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80171B4C(arg0, 0x1E);
    if (var_v0 != 0) {
        var_v0 = AF(arg0, u8, 0x214) + 1;
        AF(arg0, u8, 0x214) = (u8) var_v0;
    }
    return var_v0;
}

void func_sc01_077_8017E1B4(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc01_077_8017E1D4(u8 *arg0) {
    D_sc01_077_8018A760[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E210(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017E224);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017E298);

void func_sc01_077_8017E350(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 != -1) {
        temp_v0_2 = D_80126958 + 8;
        D_80126958 = temp_v0_2;
        D_8012695C = temp_v0_2;
        return;
    }
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B17AC);
    func_80154274((s32) arg0, (s32) &D_sc01_077_8018A59C);
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc01_077_8017E3EC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_80154274((s32) arg0, (s32) &D_sc01_077_8018A5E4);
        D_8012695C = AF(arg0, s32, 0x208);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E460(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_sc01_077_8017F240();
        AF(arg0, s32, 0x204) = 0x40;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E4B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) - 1);
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B17F0);
        AF(arg0, s32, 0x204) = 0x20;
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E51C(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400, 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((s16) temp_v0 == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
    temp_v0_2 = AF(arg0, s32, 0x204);
    if (((temp_v0_2 == 0) || (AF(arg0, s32, 0x204) = (s32) (temp_v0_2 - 1), temp_v0_3 = D_80126970 - 4, temp_v1 = D_80126974 - 4, D_80126970 = temp_v0_3, D_80126976 = temp_v0_3, D_80126974 = temp_v1, D_8012697A = temp_v1, (AF(arg0, s32, 0x204) == 0))) && ((s16) temp_v0 == 0)) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E604(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B1848);
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E668(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E6BC(s32 arg0) {
    func_sc01_077_8017D8F0();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017E6F4(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        func_8016F0E4((s32) arg0);
        func_80165770((s32) arg0);
    }
}

void func_sc01_077_8017E748(u8 *arg0) {
    D_sc01_077_8018A790[AF(arg0, u8, 0x214)]();
}

void func_sc01_077_8017E784(u8 *arg0) {
    func_sc01_077_8017D8DC();
    D_80126976 = 0;
    D_8012697A = 0;
    AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc01_077_801B19C0);
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc01_077_8017E7DC(u8 *arg0) {
    if (func_801399F0(AF(arg0, s32, 0x198)) != 0) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017E830(s32 arg0) {
    func_sc01_077_8017D8F0();
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017E868(u8 *arg0) {
    D_sc01_077_8018A79C[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017E8A4);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017E924);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017E974);

void func_sc01_077_8017E9C0(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_v0 = func_80012B04((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x800, 4);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s16, 0x12) = (s16) (((u16) AF(temp_a0, s16, 0x12) + temp_v0) & 0xFFF);
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

void func_sc01_077_8017EA2C(s32 arg0) {
    func_8016F0E4(arg0);
    func_80165770(arg0);
}

void func_sc01_077_8017EA5C(u8 *arg0) {
    D_sc01_077_8018A7B0[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017EA98(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x10;
    func_8012AD44((s32) arg0, 1);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017EAC0);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017EB2C);

void func_sc01_077_8017EC40(u8 *arg0) {
    D_sc01_077_8018A7B8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017EC7C);

void func_sc01_077_8017ED4C(u8 *arg0) {
    D_sc01_077_8018A7F0[AF(arg0, u16, 2)]();
}

s32 func_sc01_077_8017ED88(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x14) = (s32) (rand(arg0) + 0xC000);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0x3FFF) * 2) - 0x4000);
    temp_v0 = ((rand() & 0x3FFF) * 2) - 0x4000;
    AF(arg0, s32, 0x18) = temp_v0;
    return temp_v0;
}

void func_sc01_077_8017EDE4(u8 *arg0) {
    D_sc01_077_8018A7F8[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017EE20(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 1;
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017EE44);

void func_sc01_077_8017EEC0(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) (((rand((s32) arg0) & 3) * 0xC) + &D_sc01_077_8018A7C0), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    func_sc01_077_8017EC7C((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017EF50);

void func_sc01_077_8017F024(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB6C(temp_s0, (s32) (((rand((s32) arg0) & 3) * 0xC) + &D_sc01_077_8018A7C0), 0x3F0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x9D;
    AF(temp_s0, s16, 0x1A) = 0x1000;
    AF(temp_s0, s16, 0x18) = 0x1000;
    func_sc01_077_8017ED88((s32) arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F0B4);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F114);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F240);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F290);

void func_sc01_077_8017F3E8(u8 *arg0) {
    D_sc01_077_8018A87C[AF(arg0, u16, 2)]();
}

void func_sc01_077_8017F424(u8 *arg0) {
    D_sc01_077_8018A89C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F460);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F5BC);

s32 func_sc01_077_8017F694(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x400;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xCC00);
    return func_8012C588(0x25, 0);
}

void func_sc01_077_8017F6D8(u8 *arg0) {
    D_sc01_077_8018A904[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F714);

void func_sc01_077_8017F780(u8 *arg0) {
    D_sc01_077_8018A934[AF(arg0, u16, 2)]();
    func_8012B4B8((s32) arg0);
    if (AF(arg0, u16, 0) != 0) {
        func_8012C0EC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017F7E8);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017FAAC);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8017FD14);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801800F8);

void func_sc01_077_8018021C(u8 *arg0) {
    D_sc01_077_8018AA1C[AF(arg0, u16, 2)]();
}

void func_sc01_077_80180258(u8 *arg0) {
    D_sc01_077_8018AA24[AF(arg0, u16, 2)]();
}

void func_sc01_077_80180294(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    func_8002D4C8(0x401, 0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801802CC);

void func_sc01_077_8018031C(s32 arg0) {
    u16 temp_a1;

    if (func_8012CE2C() == 0) {
        func_8012CBCC(arg0);
    }
    temp_a1 = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = temp_a1;
    if ((AF(arg0, s16, 0xDC) != AF(arg0, s16, 6)) || (AF(arg0, s16, 0xDE) != AF(arg0, s16, 0xE))) {
        if ((s16) temp_a1 >= 0x10) {
            func_8002D4C8(0x485, 0);
            AF(arg0, u16, 0x84) = 0U;
        }
        AF(arg0, s16, 0xDC) = (s16) (u16) AF(arg0, s16, 6);
        AF(arg0, s16, 0xDE) = (s16) (u16) AF(arg0, s16, 0xE);
    }
}

void func_sc01_077_801803B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801D0B94);
    func_8001D0E8(AF(arg0, s32, 0x20), 0xDC, 0xB8);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc01_077_8018A884 | 0x40000000);
    AF(arg0, u8, 0x75) = 0;
    AF(arg0, s32, 0x1C) = 0x80;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0xD010);
    func_8012B200(arg0);
    SetScript(arg0, (s32) &D_sc01_077_80186E48);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x84) = 0x10;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018047C);

void func_sc01_077_80180588(void) {
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180590);

void func_sc01_077_801806A8(void) {
    if (D_801270C8 == 1) {
        func_sc01_077_8017F714();
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801806D8);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801807B8);

void func_sc01_077_80180898(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        AF(arg0, s16, 0xFC) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            func_8002D4C8(0xD, 0x401);
        }
    }
}

void func_sc01_077_801808DC(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xFC) = 0x96;
    func_8002D4C8(0x401, 0);
}

void func_sc01_077_80180910(s32 arg0) {
    func_sc01_077_80180930(arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180930);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801809BC);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180AD4);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180B64);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180C90);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80180F10);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018103C);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80181948);

void func_sc01_077_80181B58(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc01_077_801B0118);
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc01_077_80181B9C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 3;
    SetScript(arg0, (s32) &D_sc01_077_801B0D50);
    AF(arg0, s32, 0x1C) = 0x1E;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80181BE4);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80181F08);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801820DC);

void func_sc01_077_80182254(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182268);

s32 func_sc01_077_801822E4(s32 arg0) {
    AF(arg0, s16, 2) = 0xC;
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
    return 6;
}

void func_sc01_077_801822FC(s32 arg0) {
    u16 temp_a1;

    AF(arg0, s16, 2) = 5;
    temp_a1 = AF(arg0, u16, 0x70);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x10;
    if (((s32) (temp_a1 << 0x10) >> 0x18) == 5) {
        AF(arg0, u16, 0x70) = (u16) ((temp_a1 & 0xFF) | 0x100);
    }
}

s32 func_sc01_077_80182338(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    temp_v0 = func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return temp_v0;
}

s32 func_sc01_077_801823A0(s32 arg0) {
    AF(arg0, u8, 0xC1) = 7;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    return func_8012B14C(arg0, (s32) &D_sc01_077_8018AAF8);
}

s32 func_sc01_077_80182420(s32 arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 2) = 6;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    func_8012B2CC(arg0);
    func_8012B23C(arg0);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AAEC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x300;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFDC0000);
    func_8012B14C(arg0, (s32) &D_sc01_077_8018AB04);
    func_8012B2CC(arg0);
    return func_8002D4C8(0x6AA, 0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801824D0);

void func_sc01_077_801827A4(s32 arg0) {
    AF(arg0, s16, 2) = 8;
    SetScript(arg0, (s32) &D_sc01_077_801B0908);
    func_8012B23C(arg0);
    AF(arg0, s32, 0x1C) = 0x78;
    func_80143CD4(arg0);
    func_8002D4C8(0x47B, 0);
    func_8002D4C8(0x478, 0);
    func_800CB0E8(arg0);
    AF(arg0, u8, 0xC1) = 6;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018281C);

void func_sc01_077_8018294C(s32 arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc01_077_80182968(s32 arg0) {
    func_sc01_077_80182988(arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182988);

s32 func_sc01_077_801829E0(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 0xB;
    AF(arg0, s16, 0x34) = 2;
    temp_v0 = SetScript(arg0, (s32) &D_sc01_077_801B0E48);
    AF(arg0, u8, 0x102) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182A24);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182C9C);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182E30);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80182E7C);

void func_sc01_077_80182FD0(s32 arg0) {
    func_80130740(arg0, (s32) &D_sc01_077_8018AB8C);
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s16, 2) = 0xF;
    AF(arg0, s16, 0x5C) = 0;
}

s32 func_sc01_077_8018301C(s32 arg0) {
    void *temp_v1;

    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 0x98) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0x100;
    return func_8002D4C8(0x436, 0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018308C);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183324);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183834);

void func_sc01_077_80183A50(void) {
    func_8012E364();
}

void func_sc01_077_80183A70(s32 arg0) {
    if (func_8012E470() != 0) {
        func_8012E4C8(arg0);
    }
}

void func_sc01_077_80183AA8(s32 arg0, s32 arg1, s32 arg2) {
    func_8012BEE8(arg0, arg1, arg2);
    if (AF(arg0, s32, 0x1C) == 1) {
        SetScript(arg0, (s32) &D_sc01_077_801B09D0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183AF0);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183BAC);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183C50);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183CF4);

void func_sc01_077_80183DD8(void) {
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183DE0);

s32 func_sc01_077_80183F4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    func_8012B23C(arg0);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 0x84) = 0;
    if (AF(arg0, s16, 0xFC) < AF(arg0, s16, 0xE)) {
        AF(arg0, s16, 0x34) = 0;
    } else {
        AF(arg0, s16, 0x34) = 1;
    }
    AF(arg0, s32, 0x1C) = 0x100;
    AF(arg0, s32, 0xDC) = 0;
    return 0x100;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80183FB8);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018414C);

void func_sc01_077_80184238(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
}

s32 func_sc01_077_80184254(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 1;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0x1C) = 0x1B;
    return 0x1B;
}

void func_sc01_077_80184278(u8 *arg0) {
    D_sc01_077_8018AE88[AF(arg0, u16, 2)]();
    func_8012B4B8((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801842C8);

void func_sc01_077_801843C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (func_8001C214(temp_v0, 0), func_8001D0E8(AF(arg0, s32, 0x20), 0x140, 0xF0), temp_v0_2 = func_8012C1B8(), AF(arg0, s32, 0xCC) = temp_v0_2, (temp_v0_2 == 0))) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0_2, (s32) &D_sc01_077_801D100C);
    AF(arg0, s32 *, 0x58) = &D_sc01_077_8018AE70;
    AF(arg0, s16, 0x5C) = 0x1800;
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = 0;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 0xE);
}

s32 func_sc01_077_80184484(void) {
    return 1;
}

void func_sc01_077_8018448C(s32 arg0) {
    func_8012C098(arg0);
}

void func_sc01_077_801844AC(u8 *arg0) {
    if ((AF(arg0, u8, 0xC3) & 1) && (AF(arg0, s32, 0x90) != &D_sc01_077_80196F3C)) {
        SetScript((s32) arg0, (s32) &D_sc01_077_80196F3C);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801844F4);

void func_sc01_077_80184554(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    SetScript(arg0, (s32) &D_sc01_077_801973C4);
    AF(arg0, s32, 0x1C) = 0x14;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184594);

s32 func_sc01_077_801845EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = func_8012BCCC(arg0);
    if (arg1 >= temp_v0) {
        func_sc01_077_8018469C(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc01_077_8019731C);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc01_077_8018469C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    SetScript(arg0, (s32) &D_sc01_077_801970DC);
    AF(arg0, s32, 0x1C) = 0x1E;
    if (AF(arg0, s16, 0xFC) == 0) {
        AF(arg0, s16, 0xFC) = 1;
        func_80142414(arg0, -0x96);
    }
}

s32 func_sc01_077_801846F8(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018470C);

void func_sc01_077_80184890(u8 *arg0) {
    D_sc01_077_8018AF90[AF(arg0, u16, 2)]();
}

void func_sc01_077_801848CC(u8 *arg0) {
    D_sc01_077_8018AFB8[AF(arg0, u16, 2)]();
}

void func_sc01_077_80184908(u8 *arg0) {
    D_sc01_077_8018B000[AF(arg0, u16, 2)]();
}

void func_sc01_077_80184944(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    AF(arg0, s16, 2) = 1;
    func_8001CA88(AF(arg0, s32, 0x20), (s32) &D_sc01_077_8018AFC0);
    func_80143994(arg0, 0x1000);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801849A8);

void func_sc01_077_80184A00(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_8012AD80(arg0, arg1);
    if ((func_8012D5E4(arg0, (s32) &D_sc01_077_8018B00C, (s32) &D_800D3918, 0xA) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184A68);

void func_sc01_077_80184AEC(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_sc01_077_80184594(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184B24);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184BB4);

void func_sc01_077_80184C0C(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 1) * 0x34) + &D_sc01_077_8018AEB8)) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc01_077_8018AF20;
        AF(arg0, s32, 0xC4) = 1;
        temp_v0 = func_8012C658(0x79, AF(arg0, u16, 0x70) & 1, (s32) arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc01_077_8019731C);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184CCC);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184D50);

s32 func_sc01_077_80184ED8(s32 arg0, s32 arg1, s32 arg2) {
    D_sc01_077_801DA908 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80184F08);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018514C);

void func_sc01_077_801853EC(u8 *arg0) {
    D_sc01_077_801991C4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80185428);

void func_sc01_077_801855A0(u8 *arg0) {
    D_sc01_077_801B12A4[AF(arg0, u16, 2)]();
}

void func_sc01_077_801855DC(u8 *arg0) {
    D_sc01_077_801B12B8[AF(arg0, u16, 2)]();
}

void func_sc01_077_80185618(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc01_077_801B1290);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc01_077_801B129C, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801856F8);

void func_sc01_077_80185814(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801B1560);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc01_077_80185870(u8 *arg0) {
    D_sc01_077_801B1588[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801858AC);

void func_sc01_077_80185970(u8 *arg0) {
    D_sc01_077_801B159C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801859AC);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80185A94);

void func_sc01_077_80185AD4(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CB00(temp_s0, (s32) &D_sc01_077_801B1590, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc01_077_80185B5C(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        func_801292C8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80185BA4);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80185E68);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80186078);

void func_sc01_077_80186330(s32 arg0) {
    s32 temp_v1;

    func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc01_077_801D77A8);
    SetScript(arg0, (s32) &D_sc01_077_80186E48);
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0x77FF);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    AF(arg0, s32, 0x1C) = 0;
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801863B4);

void func_sc01_077_80186434(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8(arg0, arg1, arg2)) == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_077_801D6F6C);
    func_8001D0E8(temp_v0, 0x104, 0x190);
    AF(temp_v0, s16, 0x1C) = 0x1C00;
    AF(temp_v0, s16, 0x1A) = 0x1C00;
    AF(temp_v0, s16, 0x18) = 0x1C00;
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    AF(arg0, s16, 0x76) = 4;
    AF(arg0, s32 *, 0x78) = &D_sc01_077_801D55C0;
    AF(arg0, u16, 0xDC) = (u16) AF(arg0, u16, 6);
    AF(arg0, u16, 0xDE) = (u16) AF(arg0, u16, 0xE);
    SetScript(arg0, D_sc01_077_801D55AC[AF(arg0, s16, 0x76)]);
    AF(arg0, s16, 2) = 1;
    if (AF(arg0, s16, 0x70) == 4) {
        AF(arg0, s32 *, 0x58) = &D_sc01_077_801D5568;
    } else {
        AF(arg0, s32 *, 0x58) = &D_sc01_077_801D5558;
    }
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s32 *, 0x58) = (s32 *) ((s32) AF(arg0, s32 *, 0x58) | 0x60000000);
    AF(temp_v1, s16, 0x1C) = 0x1C00;
    AF(temp_v1, s16, 0x1A) = 0x1C00;
    AF(temp_v1, s16, 0x18) = 0x1C00;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x8800);
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0xDC);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0xDE);
}

void func_sc01_077_80186574(u8 *arg0) {
    if (((u32) (AF(arg0, u16, 2) - 1) < 2U) && (AF(arg0, u16, 0x5C) & 1)) {
        func_sc01_077_80185E68();
        return;
    }
    D_sc01_077_801D5624[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_801865EC);

void func_sc01_077_801867E0(u8 *arg0) {
    D_sc01_077_801D564C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_8018681C);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80186860);

INCLUDE_ASM("asm/stg/sc01_077/nonmatchings/sc01_077", func_sc01_077_80186938);

void func_sc01_077_80186A04(s32 arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    func_8012AD80(arg0);
    if (AF(arg0, s32, 0x1C) >= 0x30) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
    } else {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x17);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x43);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x14) = (u16) (AF(temp_v1_3, u16, 0x14) + 0x58);
    if (func_8012BEE8(arg0) != 0) {
        func_8012C218(arg0);
    }
}
