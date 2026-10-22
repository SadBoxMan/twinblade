#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_016_8017BE9C(void) {
}

void func_sc02_016_8017BEA4(void) {
}

void func_sc02_016_8017BEAC(void) {
}

void func_sc02_016_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_016_80187E80[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_016_80187E68;
extern void (*D_sc02_016_80187E88[])();
extern u8 D_sc02_016_80187E74;
extern void (*D_sc02_016_80187FA0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern u8 D_80126B58;
extern void func_8014BCEC();
extern void func_8014BD24();
extern void func_8002D4C8();
extern void func_sc02_016_8017C294();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_80178B18();
extern s32 func_80178970();
extern void func_80178D18();
extern void func_800291A0();
extern void func_8002955C();
extern s32 func_8002953C();
extern void func_8002AC00();
extern void func_8012C218();
extern void (*D_sc02_016_80187FF8[])();
extern void func_80147324();
extern void func_sc02_016_8017D408();
extern void (*D_sc02_016_8018800C[])();
extern void func_80147084();
extern void func_801472B4();
extern void (*D_sc02_016_80188020[])();
extern void func_800D22E4();
extern void func_sc02_016_8017DB00();
extern void (*D_sc02_016_80188078[])();
void func_sc02_016_8017ED30(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_016_80188080[])();
void func_sc02_016_8017ED58(void);
extern void func_800D1EBC();
extern u8 D_sc02_016_8018808C;
extern void func_8016EE40();
extern u8 D_sc02_016_80188098;
extern void func_sc02_016_8017EE24();
extern void (*D_sc02_016_801880AC[])();
extern void (*D_sc02_016_801880FC[])();
extern void (*D_sc02_016_801884B0[])();
extern void func_8012AD50();
extern void (*D_sc02_016_801886F0[])();
extern void (*D_sc02_016_80188728[])();
extern void func_sc02_016_80182E34();
extern void (*D_sc02_016_801A41D4[])();
extern void (*D_sc02_016_801A41D8[])();
extern void (*D_sc02_016_801A4514[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc02_016_801847A8;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc02_016_801A4204;
extern void func_sc02_016_801839A0();
extern s32 D_sc02_016_801A426C[];
extern s32 func_8012C658();
extern void func_80029124();
extern void func_80178CBC();
extern s32 D_sc02_016_801A4438;
extern s32 D_sc02_016_801A443C;
extern s32 D_sc02_016_801A4450;
extern s32 D_sc02_016_801A4464;
extern s32 D_sc02_016_801A44D0;
extern s32 D_sc02_016_801A43B4[];
extern s32 D_sc02_016_801A4330[];
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc02_016_80183748();
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc02_016_801A453C[])();
extern u8 D_sc02_016_801A4238;
extern u8 D_sc02_016_801A49DC;
extern u8 D_sc02_016_801A4BFC;
extern u8 D_sc02_016_801A49EC;
extern u8 D_sc02_016_801A4AF4;
extern void (*D_sc02_016_801B0758[])();
extern void (*D_sc02_016_801B076C[])();
extern void (*D_sc02_016_801B0A68[])();

void func_sc02_016_8017BEBC(u8 *arg0) {
    D_sc02_016_80187E80[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc02_016_80187E68, 0xFD);
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

void func_sc02_016_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc02_016_8017C150(u8 *arg0) {
    D_sc02_016_80187E88[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_016_80187E74, 0x18);
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

void func_sc02_016_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8014708C();
extern void func_801472C8();

extern u8 D_sc02_016_801886BC;
extern void (*D_sc02_016_801886E4[])();
extern void func_80019064();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern s32 func_sc02_016_80182274();
extern void func_80146CA0();
extern void func_80147364();
extern void func_8014BC44();
extern s32 func_80151664();
extern s8 D_sc02_016_801B42EB;
extern void func_80146E90();
extern void func_801495C4();
extern s32 func_80146E98();
extern void func_sc02_016_80182874();
extern s32 D_sc02_016_801B4960;
extern s32 func_8012C588();

extern u8 D_sc02_016_80188450;
extern u8 D_sc02_016_801AF9CC;
extern u8 D_sc02_016_801AFD14;
extern s32 func_sc02_016_80181054();
extern u8 D_sc02_016_801B03E4;
extern u8 D_sc02_016_801B02EC;
extern s32 func_8012CBF4();
extern void func_sc02_016_80180728();
extern s32 D_sc02_016_80188630;
extern s32 func_8012BCCC();
extern void func_sc02_016_8018140C();
extern s32 func_8012A4BC();
extern s32 func_sc02_016_80182E14();
extern void func_8012B14C();
extern s32 func_8012BEE8();
extern u8 D_800D3918;
extern s32 func_8012D5E4();
extern s32 D_80126D50;
extern u8 D_sc02_016_801B0744;
extern u8 D_sc02_016_801B0750;
extern s32 func_80132EF4();
extern u8 D_sc02_016_801B0A14;

extern s32 D_sc02_016_8018861C;
extern u8 D_sc02_016_801B062C;
extern s32 D_sc02_016_801B42D0;
extern u8 D_sc02_016_80188620;
extern s32 func_8012BD3C();
extern void func_sc02_016_801804F8();
extern void func_80131E00();

extern u8 D_sc02_016_801B42D8[];

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
extern void func_8012A018();
extern void func_8012A094();
extern void func_8012B200();
extern s32 func_8012AD44();
extern void (*D_sc02_016_801880EC[])();
extern void func_sc02_016_8017F33C();
extern void func_sc02_016_8017F630();
extern void func_8013CB84();
extern void func_sc02_016_8017FB54();
extern void (*D_sc02_016_80188514[])();
extern void func_8012C0EC();
extern u8 D_sc02_016_801AF924;
extern s32 func_80172688();
extern void func_sc02_016_80182D54();
extern void func_8012BF4C();

extern void func_8001BFD0();
extern void func_800D0C74();
extern void func_800D1E28();

extern s16 D_80126B96;
extern s16 D_80126B98;
extern s32 func_sc02_016_8017F264();

void func_sc02_016_8017F228(s32 arg0);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017C294);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017C3C4);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017C750);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017C9C8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017CB10);

void func_sc02_016_8017CC90(u8 *arg0) {
    D_sc02_016_80187FA0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017CCCC(void) {
    func_8014BCEC((s32) &D_80126B58, 5);
    func_8014BD24((s32) &D_80126B58, 0x270F);
    func_8002D4C8(0xBFE, 0);
}

void func_sc02_016_8017CD18(u8 *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xDC);
    temp_s2 = AF(arg0, s16 *, 0xCC);
    temp_s1 = AF(arg0, void *, 0xD0);
    if ((AF(temp_v1, u8, 1) != 0) && (AF(arg0, s16, 0x108) == 0)) {
        AF(arg0, s16, 0x108) = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc02_016_8017C294((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    func_8002D4C8(0x62E, 0);
    *temp_s2 = 0;
    AF(arg0, s32, 0x1C) = 0x28;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017CE0C);

void func_sc02_016_8017CE8C(u8 *arg0) {
    SV8 sp10;
    SV8 sp18;
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0xDC);
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s32, 0x58) = 0;
        sp10.x = AF(arg0, u16, 6);
        sp10.y = AF(arg0, u16, 0xA);
        sp10.z = AF(arg0, u16, 0xE);
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (sp18.y + 0x800);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_016_8017CF40(u8 *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = AF(arg0, u8 *, 0xD0);
    d = AF(arg0, u8 *, 0xDC);
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        func_80178B18((s32) arg0, AF(d, s32, 0xC));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_016_8017CFAC(u8 *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0xDC);
    if (func_80178970((s32) arg0, arg1) != 0) {
        func_80178D18((s32) arg0);
        func_800291A0(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            func_8002AC00(0x25);
        }
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_016_8017D038(s32 arg0, s32 arg1) {
    func_8012C218(arg0, arg1);
}

void func_sc02_016_8017D058(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_016_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_8017D0AC(s32 arg0) {
    func_80146A6C(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_016_8017D0E8(u8 *arg0) {
    D_sc02_016_80187FF8[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        func_80147324((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D1D0(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D254(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017D408);

void func_sc02_016_8017D714(u8 *arg0) {
    D_sc02_016_8018800C[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017D750(u8 *arg0) {
    func_80147324((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_8017D790(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D800(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D88C(u8 *arg0) {
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
    func_sc02_016_8017D408((s32) arg0);
}

void func_sc02_016_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_016_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    func_80146C3C((s32) arg0);
}

void func_sc02_016_8017D9B4(u8 *arg0) {
    D_sc02_016_80188020[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017D9F0);

void func_sc02_016_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_016_8017DB00((s32) arg0);
        return;
    }
    func_80146C3C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017DB00);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017DC70);

void func_sc02_016_8017EB50(u8 *arg0) {
    D_sc02_016_80188078[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EB8C(u8 *arg0) {
    func_sc02_016_8017ED30();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_016_8017EBD0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_016_8017EBF4(u8 *arg0) {
    D_sc02_016_80188080[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_016_8017EC30(u8 *arg0) {
    func_sc02_016_8017ED58();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_016_8017EC70(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C74(1);
        func_8002D4C8(4, 0x579);
        func_8002D4C8(4, 0x578);
        func_8002D4C8(4, 0x57A);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_016_8017ED10(void) {
    func_800D1EBC();
}

void func_sc02_016_8017ED30(void) {
    func_8016EE40((s32) &D_sc02_016_8018808C, 0x01000000);
}

void func_sc02_016_8017ED58(void) {
    func_8016EE40((s32) &D_sc02_016_80188098, 0x01000000);
}

void func_sc02_016_8017ED80(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0xAA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    func_8012A018((s32) func_sc02_016_8017EE24, 0);
    func_8012A094((s32) &D_80126948);
    func_sc02_016_8017EE24((s32) &D_80126948);
}

void func_sc02_016_8017EE24(s32 arg0) {
    D_sc02_016_801880AC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017EE60);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017EF84);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F11C);

s32 func_sc02_016_8017F154(s32 arg0) {
    func_8012B200(arg0);
    AF(arg0, s32, 0x1C) = 0x20;
    return func_8012AD44(arg0, 2);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F190);

void func_sc02_016_8017F1C8(u8 *arg0) {
    D_sc02_016_801880EC[AF(arg0, u16, 2)]();
    if (AF(arg0, u8, 0x70) == 0) {
        func_sc02_016_8017F33C((s32) arg0);
    }
}

void func_sc02_016_8017F228(s32 arg0) {
    if (func_sc02_016_8017F264() != 0) {
        D_80126B96 = 0x4018;
        D_80126B98 = 0x10;
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F264);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F33C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F434);

void func_sc02_016_8017F4A0(u8 *arg0) {
    D_sc02_016_801880FC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F4DC);

void func_sc02_016_8017F600(u8 *arg0) {
    if (AF(arg0, u16, 2) == 0) {
        func_sc02_016_8017F630();
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F630);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F6A4);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F78C);

void func_sc02_016_8017F880(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        func_8012AD44(arg0, 1);
    }
    func_sc02_016_8017F228(arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F8C0);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017F9F4);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017FABC);

void func_sc02_016_8017FB2C(void) {
    func_8013CB84();
    func_sc02_016_8017FB54();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017FB54);

void func_sc02_016_8017FBE0(u8 *arg0) {
    D_sc02_016_801884B0[AF(arg0, u16, 2)]();
}

void func_sc02_016_8017FC1C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_016_80188450;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8017FCD0);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018003C);

void func_sc02_016_801800E4(u8 *arg0) {
    D_sc02_016_80188514[AF(arg0, u16, 2)]();
    func_8012C0EC((s32) arg0);
}

void func_sc02_016_80180134(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180154);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801802C8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018035C);

void func_sc02_016_801804D4(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801804F8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801805D8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801806DC);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180728);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180828);

s32 func_sc02_016_8018096C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc02_016_801AF9CC);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018099C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180B30);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180BD8);

s32 func_sc02_016_80180F6C(s32 arg0) {
    return func_sc02_016_80181054(arg0, 0, 0x14, (s32) &D_sc02_016_801AFD14);
}

void func_sc02_016_80180F98(s32 arg0) {
    func_sc02_016_80181054(arg0, 3, 0x28, (s32) &D_sc02_016_801B062C);
    D_sc02_016_801B42D0 = D_sc02_016_8018861C;
    func_8002D4C8(0x660, 0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80180FE0);

s32 func_sc02_016_80181028(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = 8;
    return SetScript(arg0, (s32) &D_sc02_016_801B03E4);
}

s32 func_sc02_016_80181054(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    AF(arg0, s16, 0x34) = (s16) arg1;
    AF(arg0, s16, 2) = 4;
    temp_v0 = SetScript(arg0, arg3);
    AF(arg0, s32, 0x1C) = arg2;
    return temp_v0;
}

s32 func_sc02_016_8018109C(s32 arg0, s32 arg1) {
    return func_8012D5E4(arg0, (s32) &D_sc02_016_80188620, (s32) (&D_sc02_016_80188620 + 8), arg1);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801810C8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018140C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801814A8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801815DC);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181714);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801818F8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181AE8);

void func_sc02_016_80181CB8(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x100) = 3;
        if (func_8012BD3C((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_016_80181054((s32) arg0, 5, 0x1E, (s32) &D_sc02_016_801B02EC);
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
    }
}

void func_sc02_016_80181D3C(u8 *arg0) {
    AF(arg0, s16, 2) = 0xA;
    SetScript((s32) arg0, (s32) &D_sc02_016_801AF9CC);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181D68);

void func_sc02_016_80181DEC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B03E4);
}

void func_sc02_016_80181E18(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 9;
        AF(arg0, s16, 0x100) = 3;
    }
}

void func_sc02_016_80181E40(u8 *arg0) {
    AF(arg0, s16, 2) = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_016_801B02EC);
    AF(arg0, s32, 0x1C) = 0x1E;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181E80);

void func_sc02_016_80181F54(s32 arg0) {
    void *temp_a0;

    SetScript(arg0, (s32) &D_sc02_016_801AF924);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc02_016_80181FB0(void) {
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80181FB8);

void func_sc02_016_801820C0(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc02_016_801804F8();
        return;
    }
    temp_v0 = func_8012CBF4((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
            return;
        }
        func_sc02_016_80180728((s32) arg0);
    }
}

void func_sc02_016_80182140(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc02_016_80180728(arg0);
    }
}

void func_sc02_016_80182184(s32 arg0) {
    if (func_8012BCCC(arg0) < D_sc02_016_80188630) {
        func_sc02_016_8018140C(arg0);
    }
}

void func_sc02_016_801821CC(u8 *arg0) {
    func_80019064((s32) &D_sc02_016_801886BC);
    D_sc02_016_801886E4[AF(arg0, u16, 2)](arg0);
}

void func_sc02_016_80182224(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc02_016_80182274(arg0);
    func_80147324(0x92F);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182274);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801822E0);

s32 func_sc02_016_80182434(s32 arg0) {
    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc02_016_80182488(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc02_016_801B42EB;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801824AC);

void func_sc02_016_801824F0(u8 *arg0) {
    D_sc02_016_801886F0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_8018252C);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182678);

void func_sc02_016_801826F0(s32 arg0) {
    D_sc02_016_801B42D8[AF(arg0, s32, 0x2C)] = 0;
    func_80146C3C(arg0);
}

void func_sc02_016_80182720(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182734);

void func_sc02_016_8018279C(u8 *arg0) {
    D_sc02_016_80188728[AF(arg0, u16, 2)]();
}

void func_sc02_016_801827D8(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    func_80146E90((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_016_80182824(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_sc02_016_80182874(arg0);
}

void func_sc02_016_8018286C(void) {
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182874);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801829D8);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182D54);

s32 func_sc02_016_80182E14(void) {
    return func_8012A4BC();
}

void func_sc02_016_80182E34(s32 arg0) {
    D_sc02_016_801A41D4[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182E70);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80182FE8);

void func_sc02_016_80183194(u8 *arg0) {
    D_sc02_016_801A41D8[AF(arg0, u16, 2)]();
}

void func_sc02_016_801831D0(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc02_016_801831F0(s32 arg0) {
    if (func_80172688((s32) &D_80126B58) != 0) {
        func_sc02_016_80182D54(arg0);
        func_8012BF4C(arg0, 0x20);
        func_8012AD50(arg0);
    }
}

void func_sc02_016_80183248(s32 arg0) {
    if (func_80172688((s32) &D_80126B58) == 0) {
        if (func_8012BEE8(arg0) != 0) {
            func_sc02_016_80182E14();
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        }
    } else {
        func_8012BF4C(arg0, 0x20);
    }
}

void func_sc02_016_801832B8(u8 *arg0) {
    D_sc02_016_801A4514[AF(arg0, u16, 2)]();
}

void func_sc02_016_801832F4(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc02_016_801A4204) != 0) {
        if (!(func_80029178(D_sc02_016_801A426C[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc02_016_801839A0);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_016_801847A8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_801833C8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc02_016_801833F0(void) {
}

void func_sc02_016_801833F8(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_016_801A443C = 0;
            func_80029124(D_sc02_016_801A43B4[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_016_801A4438 = 2;
        } else {
            D_sc02_016_801A4450 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_016_801A4330[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_016_801A4438 = 0;
            D_sc02_016_801A443C = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc02_016_801A4464);
    } else {
        var_a1 = &D_sc02_016_801A44D0;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc02_016_80183544(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_016_801A426C[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc02_016_80183748() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_016_80183664(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc02_016_80183690(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_016_801836A0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_016_801836B0(u8 *arg0) {
    func_80029124(D_sc02_016_801A426C[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_016_801836F0(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_016_80183724(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183748);

void func_sc02_016_801837AC(u8 *arg0) {
    D_sc02_016_801A453C[AF(arg0, u16, 2)]();
}

void func_sc02_016_801837E8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc02_016_801A4238) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_016_801A4BFC);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_016_801A49DC);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_016_80183870(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A49EC);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_016_801A4AF4);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc02_016_80183930(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A4BFC);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_016_801A49DC);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_801839A0);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183A98);

void func_sc02_016_80183C10(u8 *arg0) {
    D_sc02_016_801B0758[AF(arg0, u16, 2)]();
}

void func_sc02_016_80183C4C(u8 *arg0) {
    D_sc02_016_801B076C[AF(arg0, u16, 2)]();
}

void func_sc02_016_80183C88(s32 arg0) {
    s32 temp_v0;

    func_8012B14C(arg0, (s32) &D_sc02_016_801B0744);
    if (func_8012CBF4(arg0) != 0) {
        func_80146A6C(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = func_80132EF4(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((func_8012D5E4(arg0, (s32) &D_sc02_016_801B0750, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (D_80126D50 != 0)) || (func_8012BEE8(arg0) != 0)) {
block_7:
        func_8012C218(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183D68);

void func_sc02_016_80183E84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc02_016_801B0A14);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
}

s32 func_sc02_016_80183EE0(s32 arg0, s32 arg1, s32 arg2) {
    D_sc02_016_801B4960 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80183F10);

INCLUDE_ASM("asm/stg/sc02_016/nonmatchings/sc02_016", func_sc02_016_80184154);

void func_sc02_016_801843F4(u8 *arg0) {
    D_sc02_016_801B0A68[AF(arg0, u16, 2)]();
}
