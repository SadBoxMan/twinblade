#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_008_8017BE9C(void) {
}

void func_sc06_008_8017BEA4(void) {
}

void func_sc06_008_8017BEAC(void) {
}

void func_sc06_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_008_80189218[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_008_80189200;
extern void (*D_sc06_008_80189220[])();
extern u8 D_sc06_008_8018920C;
extern void (*D_sc06_008_8018929C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_008_8017D400(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_008_801892A4[])();
void func_sc06_008_8017D428(void);
extern void func_800D1EBC();
extern void (*D_sc06_008_801892B0[])();
extern u8 D_sc06_008_801892BC;
extern void func_8016EE40();
extern u8 D_sc06_008_801892C0;
extern void func_sc06_008_8017D4E8();
extern void (*D_sc06_008_801892CC[])();
extern void (*D_sc06_008_80189560[])();
extern void func_sc06_008_8017DFEC();
extern void (*D_sc06_008_801895AC[])();
extern void (*D_sc06_008_80189604[])();
extern void (*D_sc06_008_80189620[])();
extern void (*D_sc06_008_8019C968[])();
extern void (*D_sc06_008_8019C988[])();
extern void (*D_sc06_008_8019E73C[])();
extern void (*D_sc06_008_801A6970[])();
extern void (*D_sc06_008_801A69A8[])();
extern void (*D_sc06_008_801A6BB0[])();
extern u8 D_sc06_008_801A6B60;
extern void func_80178CBC();
extern void (*D_sc06_008_801A75D0[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc06_008_80185B40;
extern s32 func_80029178();
extern void func_8012CAE4();
extern u8 D_sc06_008_801A72C0;
extern void func_sc06_008_801856D0();
extern s32 D_sc06_008_801A7328[];
extern s32 func_8012C658();
extern void func_80029124();
extern s32 D_sc06_008_801A74F4;
extern s32 D_sc06_008_801A74F8;
extern s32 D_sc06_008_801A750C;
extern s32 D_sc06_008_801A7520;
extern s32 D_sc06_008_801A758C;
extern s32 D_sc06_008_801A7470[];
extern s32 D_sc06_008_801A73EC[];
extern void func_80178D18();
extern void func_8002AC00();
extern void func_8012C218();
extern s32 func_801789AC();
extern void func_80029514();
extern void func_80145EE8();
extern s32 func_sc06_008_80185478();
extern u8 D_80126B58;
extern void func_8014ADA8();
extern s32 func_80174764();
extern void (*D_sc06_008_801A75F8[])();
extern u8 D_sc06_008_801A72F4;
extern u8 D_sc06_008_801A7070;
extern u8 D_sc06_008_801A7290;
extern void func_8002D4C8();
extern u8 D_sc06_008_801A7080;
extern u8 D_sc06_008_801A7188;

void func_sc06_008_8017BEBC(u8 *arg0) {
    D_sc06_008_80189218[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc06_008_80189200, 0xFD);
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

void func_sc06_008_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc06_008_8017C150(u8 *arg0) {
    D_sc06_008_80189220[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_008_8018920C, 0x18);
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

void func_sc06_008_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_8012C098();
extern void func_80016714();
extern void func_sc06_008_8017EF54();
extern void (*D_sc06_008_8019C93C[])();
extern s32 func_8012C044();
extern void func_8002A04C();
extern void func_sc06_008_8017ED80();
extern void func_80131E00();
extern s32 func_80143C74();
extern s32 func_8012BEE8();
extern void func_801319E0();
extern s32 func_8012CBF4();
extern void func_80131C78();
extern void func_8012B370();
extern void func_8012AD80();
extern u8 D_800D3918;
extern u8 D_sc06_008_8019C954;
extern u8 D_sc06_008_8019C960;
extern void func_8012B14C();
extern s32 func_8012D5E4();
extern s32 D_sc06_008_801AA178;
extern s32 func_8012C588();
extern u8 D_sc06_008_801A636C;
extern u8 D_sc06_008_801A646C;
extern u8 D_sc06_008_801A656C;
extern void func_8001C214();
extern void func_8012B23C();
extern u8 D_sc06_008_8019EEF4;
extern u8 D_sc06_008_8019EF28;
extern u8 D_sc06_008_801A3E2C;
extern void func_8012B030();
extern u8 D_sc06_008_8019EF6C;
extern u8 D_sc06_008_8019EFA0;
extern u8 D_sc06_008_801A4B98;
extern u8 D_sc06_008_801A693C;
extern void (*D_sc06_008_801A6964[])();
extern void func_80019064();
extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern s32 func_sc06_008_80183DB8();
extern void func_80147324();
extern void func_80146CA0();
extern void func_80147364();
extern void func_8014BC44();
extern s32 func_80151664();
extern s8 D_sc06_008_801AA193;
extern void func_80146E90();
extern void func_801495C4();
extern s32 func_80146E98();
extern void func_sc06_008_801843B8();
extern u8 D_sc06_008_801A69DC;
extern void (*D_sc06_008_801A6A04[])();

extern u8 D_sc06_008_801A6AB0;
extern void func_sc06_008_80184E94();
extern s32 D_sc06_008_801AA6DC;
extern void func_800296F8();

extern void func_8002931C();

extern u8 D_sc06_008_801AA180[];

extern void func_8012AD50();

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
extern u8 D_sc06_008_801892D0;
extern u8 D_sc06_008_801892F0;
extern u8 D_sc06_008_801893B4;
extern u8 D_sc06_008_801895B8;
extern void func_8001CC3C();
extern void func_80015978();
extern void func_8012EF70();
extern void func_80015954();
extern void func_801292C8();
extern void func_sc06_008_8017E6F0();
extern void func_sc06_008_8018494C();
extern s32 func_8012F568();

extern void (*D_sc06_008_801893E8[])();
extern s32 func_sc06_008_8017E37C();

extern u8 D_sc06_008_8019A568;
extern u8 D_sc06_008_8019A61C;
extern s32 D_sc06_008_801A9FF0;
extern s32 D_sc06_008_801A9FF4;
extern s32 D_sc06_008_801A9FF8;
extern s32 D_sc06_008_801A9FFC;
extern s32 D_sc06_008_801AA7AC;
extern void func_sc06_008_8017E140();
extern s32 func_801290DC();

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017C294);

void func_sc06_008_8017D174(void) {
    func_8002931C(0x01A40000);
}

void func_sc06_008_8017D194(u8 *arg0) {
    D_sc06_008_8018929C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D1D0(u8 *arg0) {
    func_sc06_008_8017D400();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_008_8017D214(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_008_8017D238(u8 *arg0) {
    D_sc06_008_801892A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D274(u8 *arg0) {
    func_sc06_008_8017D428();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_008_8017D2B4(u8 *arg0) {
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

void func_sc06_008_8017D330(void) {
    func_800D1EBC();
}

void func_sc06_008_8017D350(u8 *arg0) {
    D_sc06_008_801892B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_008_8017D38C(u8 *arg0) {
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

void func_sc06_008_8017D400(void) {
    func_8016EE40((s32) &D_sc06_008_801892BC, 0x01000000);
}

void func_sc06_008_8017D428(void) {
    func_8016EE40((s32) &D_sc06_008_801892C0, 0x01000000);
}

void func_sc06_008_8017D450(void) {
    D_80126954 = 0x12C;
    D_8012695C = 0x384;
    D_80126968 = 0x3C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_008_8017D4E8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_008_8017D4E8((s32) &D_80126948);
}

void func_sc06_008_8017D4E8(s32 arg0) {
    D_sc06_008_801892CC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017D524);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017D5A4);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017D73C);

void func_sc06_008_8017DA00(u8 *arg0) {
    s32 pad[4];
    D_sc06_008_801893E8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017DA3C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017DBB0);

void func_sc06_008_8017DCD0(u8 *arg0) {
    D_sc06_008_80189560[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017DD0C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc06_008_8017DD24(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801892F0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_801892D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s16, 0xFE) = 1;
        if (AF(arg0, s16, 0x70) >= 2) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xD55;
            AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xD55;
        }
        func_8012C658(0x25C, 0x555, arg0);
        func_8012C658(0x25C, 0xAAA, arg0);
        func_8012C658(0x25C, 0x1000, arg0);
    }
}

void func_sc06_008_8017DE04(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc06_008_8017DE20(s32 arg0) {
    void *temp_a2;
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801893B4) != 0) {
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_801892D0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
        AF(arg0, u8, 0x75) = 0;
        if (AF(AF(arg0, void *, 0x64), s16, 0x70) >= 2) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xD55;
            AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xD55;
        }
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017DEEC);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017DF28);

void func_sc06_008_8017DFBC(void) {
}

s32 func_sc06_008_8017DFC4(void) {
    return 0x6F;
}

void func_sc06_008_8017DFCC(s32 arg0) {
    func_sc06_008_8017DFEC(arg0);
}

void func_sc06_008_8017DFEC(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    switch (D_sc06_008_801AA7AC) {                  /* irregular */
    case 0:
        D_sc06_008_801A9FF0 = 1;
        D_sc06_008_801A9FF4 = 0;
        D_sc06_008_801A9FF8 = 1;
        D_sc06_008_801A9FFC = 0;
        D_sc06_008_801AA7AC = 1;
        return;
    case 1:
        temp_v0 = D_sc06_008_801A9FF0 - 1;
        D_sc06_008_801A9FF0 = temp_v0;
        if (temp_v0 == 0) {
            D_sc06_008_801A9FF0 = D_sc06_008_801AA7AC;
            func_sc06_008_8017E140((s32) &D_sc06_008_8019A568, D_sc06_008_801A9FF4 * 6);
            temp_v0_2 = D_sc06_008_801A9FF4 + 1;
            D_sc06_008_801A9FF4 = temp_v0_2;
            if (temp_v0_2 >= 0xF) {
                D_sc06_008_801A9FF4 = 0;
            }
        }
        temp_v0_3 = D_sc06_008_801A9FF8 - 1;
        D_sc06_008_801A9FF8 = temp_v0_3;
        if (temp_v0_3 == 0) {
            D_sc06_008_801A9FF8 = 2;
            func_sc06_008_8017E140((s32) &D_sc06_008_8019A61C, D_sc06_008_801A9FFC * 6);
            temp_v0_4 = D_sc06_008_801A9FFC + 1;
            D_sc06_008_801A9FFC = temp_v0_4;
            if (temp_v0_4 >= 0x10) {
                D_sc06_008_801A9FFC = 0;
            }
        }
        return;
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017E140);

void func_sc06_008_8017E1A0(u8 *arg0) {
    D_sc06_008_801895AC[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E1DC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc06_008_8017E204(u8 *arg0) {
    s32 pad[2];
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    temp_v0 = AF(arg0, s16, 0xDC);
    if (temp_v0 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0xFC), 0) != 0) {
            AF(arg0, s16, 0xFC) = 0;
            temp_s0 = rand();
            AF(arg0, s16, 0xDC) = (s16) ((((temp_s0 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
        } else {
            AF(arg0, s16, 0xFC) = (s16) ((u16) AF(arg0, s16, 0xFC) + 1);
        }
    } else {
        AF(arg0, s16, 0xDC) = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = AF(arg0, s16, 0xDE);
    if (temp_v0_2 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0xFE), 0x80) != 0) {
            AF(arg0, s16, 0xFE) = 0;
            temp_s0_2 = rand();
            AF(arg0, s16, 0xDE) = (s16) ((((temp_s0_2 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
        } else {
            AF(arg0, s16, 0xFE) = (s16) ((u16) AF(arg0, s16, 0xFE) + 1);
        }
    } else {
        AF(arg0, s16, 0xDE) = (s16) (temp_v0_2 - 1);
    }
    temp_v0_3 = AF(arg0, s16, 0xE0);
    if (temp_v0_3 == 0) {
        if (func_sc06_008_8017E37C((s32) arg0, (s32) AF(arg0, s16, 0x100), 0x100) != 0) {
            AF(arg0, s16, 0x100) = 0;
            temp_s0_3 = rand();
            AF(arg0, s16, 0xE0) = (s16) ((((temp_s0_3 & 0xF) + (rand() & 0xF)) * 2) + 0x20);
            return;
        }
        AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + 1);
        return;
    }
    AF(arg0, s16, 0xE0) = (s16) (temp_v0_3 - 1);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017E37C);

void func_sc06_008_8017E4BC(u8 *arg0) {
    D_sc06_008_80189604[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E4F8(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s0, (s32) &D_sc06_008_801895B8, 0x2C0, 0x100);
    AF(temp_s0, u8, 0x27) = 0x46;
    AF(temp_s0, s16, 0x1A) = 0x1333;
    AF(temp_s0, s16, 0x18) = 0x1333;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x08000000);
    AF(temp_s0, u16, 0x14) = (u16) AF(arg0, u16, 0x2C);
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017E580);

void func_sc06_008_8017E5F0(u8 *arg0) {
    D_sc06_008_80189620[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017E62C(u8 *arg0) {
    s32 sp10;
    s32 temp_s1;

    temp_s1 = arg0 + 4;
    func_80015978(temp_s1, (s32) &sp10);
    func_8012EF70((s32) &sp10, (s32) &sp10);
    func_80015954((s32) &sp10, temp_s1);
    AF(arg0, s32, 0x1C) = 3;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_008_8017E694(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0) {
        func_801292C8((s32) arg0);
        return;
    }
    func_sc06_008_8017E6F0((s32) arg0);
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017E6F0);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017E830);

void func_sc06_008_8017EBAC(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = func_801290DC(0x69, arg0);
    if (temp_v0 != 0) {
        temp_s0 = rand();
        temp_s1 = rand();
        AF(temp_v0, s16, 0x10) = (s16) (((temp_s0 & 3) << 0xA) + ((temp_s1 & 3) * 0xFA) + ((rand() & 3) * 0x44));
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017EC48);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017ED80);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017EF54);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017F100);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017F2E8);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017F624);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017F8CC);

void func_sc06_008_8017F9FC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    D_sc06_008_8019C93C[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_sc06_008_8017EF54((s32) arg0), (func_8012C044((s32) arg0) != 0))) {
        if (AF(arg0, s16, 0x70) == 0) {
            temp_a0 = AF(arg0, s32, 0xCC);
            if (temp_a0 != 0) {
                func_80016714(temp_a0, 0x84);
            }
            temp_a0_2 = AF(arg0, s32, 0xD0);
            if (temp_a0_2 != 0) {
                func_80016714(temp_a0_2, 0x84);
            }
            func_8012C098((s32) arg0);
            return;
        }
        if ((u16) AF(arg0, u16, 2) < 4U) {
            AF(arg0, u16, 2) = 4U;
        }
    }
}

void func_sc06_008_8017FAD4(u8 *arg0) {
    D_sc06_008_8019C968[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8017FB10);

void func_sc06_008_8017FC84(u8 *arg0) {
    D_sc06_008_8019C988[AF(arg0, u16, 2)]();
}

void func_sc06_008_8017FCC0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (AF(arg0, s16, 0x70) != 0) {
        AF(arg0, s16, 2) = 4;
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u8, 0xC1) = 0;
        return;
    }
    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    temp_a0_2 = AF(arg0, s32, 0xD0);
    if (temp_a0_2 != 0) {
        func_80016714(temp_a0_2, 0x84);
    }
    func_8002A04C((s32) arg0);
    func_8012C218((s32) arg0);
}

void func_sc06_008_8017FD48(s32 arg0) {
    func_8002D4C8(0xB32, 0);
    func_sc06_008_8017ED80(arg0);
}

void func_sc06_008_8017FD80(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FDA8(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FDDC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) < 0) {
        func_80131E00((s32) arg0, 6);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x100) = 0x3C;
    AF(arg0, s16, 0x34) = 0;
    func_sc06_008_8017EF54((s32) arg0);
}

void func_sc06_008_8017FE28(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = func_80143C74((s32) arg0, 0, arg2);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) ((AF(arg0, u16, 6) + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s16, 0xA) = (s16) ((AF(arg0, u16, 0xA) + (rand() & 0x3F)) - 0x30);
            AF(temp_v0, s16, 0xE) = (s16) ((AF(arg0, u16, 0xE) + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s32, 0x10) = (s32) -AF(arg0, s32, 0x10);
            AF(temp_v0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14);
            AF(temp_v0, s32, 0x18) = (s32) -AF(arg0, s32, 0x18);
            AF(AF(temp_v0, void *, 0x20), s16, 0x18) = 0x800;
            AF(AF(temp_v0, void *, 0x20), s16, 0x1A) = 0x800;
        }
        func_sc06_008_8017EF54((s32) arg0);
    }
}

void func_sc06_008_8017FF14(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 1);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_sc06_008_8017ED80((s32) arg0, arg1);
}

void func_sc06_008_8017FF48(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0xC1) = 0xC;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_sc06_008_8017ED80((s32) arg0, arg1);
}

void func_sc06_008_8017FF74(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_801319E0();
        return;
    }
    if (func_8012BEE8((s32) arg0, arg1, arg2) != 0) {
        func_80131E00((s32) arg0, 6);
        return;
    }
    if (func_8012CBF4((s32) arg0) & 0x2000) {
        func_80131C78((s32) arg0);
    }
    func_sc06_008_8017ED80((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180000);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180128);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8018025C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801802BC);

void func_sc06_008_8018037C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s16, 6) == AF(arg0, s16, 0xDE)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0xE2))) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    AF(arg0, s32, 0xDC) = (s32) AF(arg0, s32, 4);
    AF(arg0, s32, 0xE0) = (s32) AF(arg0, s32, 0xC);
    func_8012B14C((s32) arg0, (s32) &D_sc06_008_8019C954);
    func_8012AD80((s32) arg0);
    if ((func_8012D5E4((s32) arg0, (s32) &D_sc06_008_8019C960, (s32) &D_800D3918, 0x30) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218((s32) arg0);
        return;
    }
    func_8012B370((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180450);

s32 func_sc06_008_80180548(s32 arg0, s32 arg1, s32 arg2) {
    D_sc06_008_801AA178 = arg1;
    return func_8012C588(0x85, arg0);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180578);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801807BC);

void func_sc06_008_80180A5C(u8 *arg0) {
    D_sc06_008_8019E73C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180A98);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80180CA8);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801810AC);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80181220);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801813D0);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8018165C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80181B20);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80181CF0);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80181EE0);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801821F8);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801823F0);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80182838);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80182A48);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80182E8C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8018309C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183320);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183340);

void func_sc06_008_80183440(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0x100);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x100) = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A636C);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_008_801A646C);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_008_801A656C);
        }
    } else {
        AF(arg0, s16, 0x100) = (s16) (temp_v0 - 1);
    }
}

void func_sc06_008_801834E0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_801835A0(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 == 0) {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A636C);
        temp_a0 = AF(arg0, s32, 0xCC);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_008_801A646C);
        }
        temp_a0_2 = AF(arg0, s32, 0xD0);
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_008_801A656C);
        }
    } else {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183638);

void func_sc06_008_80183658(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_8019EEF4) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_008_801A3E2C);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s16, 0xAE) = 0x2100;
        SetScript(arg0, (s32) &D_sc06_008_801A646C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_8019EF28;
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_008_80183748(void) {
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183750);

void func_sc06_008_80183824(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_801838E4(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183904);

void func_sc06_008_80183924(s32 arg0) {
    s32 temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_008_8019EF6C) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            func_8001C214(AF(arg0, s32, 0x20), (s32) &D_sc06_008_801A4B98);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        func_8012B030(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_008_8019EFA0;
        AF(arg0, s16, 0xAE) = 0x2100;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_008_801A656C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8012B23C(arg0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_008_80183A18(void) {
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183A20);

void func_sc06_008_80183B14(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        func_8012B370((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = func_8012C588(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        func_8012C218((s32) arg0, arg1);
    }
}

void func_sc06_008_80183BD4(s32 arg0, s32 arg1) {
    func_8012B370(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183BF4);

void func_sc06_008_80183D10(u8 *arg0) {
    func_80019064((s32) &D_sc06_008_801A693C);
    D_sc06_008_801A6964[AF(arg0, u16, 2)](arg0);
}

void func_sc06_008_80183D68(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc06_008_80183DB8(arg0);
    func_80147324(0x92F);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183DB8);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183E24);

s32 func_sc06_008_80183F78(s32 arg0) {
    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc06_008_80183FCC(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_008_801AA193;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80183FF0);

void func_sc06_008_80184034(u8 *arg0) {
    D_sc06_008_801A6970[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80184070);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801841BC);

void func_sc06_008_80184234(s32 arg0) {
    D_sc06_008_801AA180[AF(arg0, s32, 0x2C)] = 0;
    func_80146C3C(arg0);
}

void func_sc06_008_80184264(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80184278);

void func_sc06_008_801842E0(u8 *arg0) {
    D_sc06_008_801A69A8[AF(arg0, u16, 2)]();
}

void func_sc06_008_8018431C(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    func_80146E90((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_008_80184368(s32 arg0) {
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
        return;
    }
    func_sc06_008_801843B8(arg0);
}

void func_sc06_008_801843B0(void) {
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801843B8);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8018451C);

void func_sc06_008_80184898(u8 *arg0) {
    func_80019064((s32) &D_sc06_008_801A69DC);
    D_sc06_008_801A6A04[AF(arg0, u16, 2)](arg0);
}

void func_sc06_008_801848F0(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc06_008_8018494C(arg0);
    func_80147324(0x92F);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x10);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_8018494C);

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801849A8);

s32 func_sc06_008_80184AEC(s32 arg0) {
    s32 sp18;

    func_80147364(4, 0x92F);
    func_80147324(0x930);
    func_80151664(arg0);
    func_80015978(arg0 + 4, (s32) &sp18);
    return func_8012F568(1, 0xC003, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x10, /* extra? */ &sp18, /* extra? */ &sp18);
}

void func_sc06_008_80184B5C(u8 *arg0) {
    D_sc06_008_801A6BB0[AF(arg0, u16, 2)]();
}

void func_sc06_008_80184B98(u8 *arg0) {
    s32 temp_v0;

    if (func_8012C354((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 0x34) + &D_sc06_008_801A6AB0)) != 0) {
        if (!(AF(arg0, u16, 0x70) & 1)) {
            temp_v0 = func_8012C658(0x1E3, 1, (s32) arg0);
            AF(arg0, s32, 0x6C) = temp_v0;
            if (temp_v0 == 0) {
                func_8012CAE4((s32) arg0);
                return;
            }
            AF(arg0, s16, 2) = 1;
            AF(arg0, s32, 0xCC) = func_801788B8((s32) arg0, (s32) &func_sc06_008_80184E94);
            return;
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
    }
}

void func_sc06_008_80184C70(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_008_80184C98(void) {
}

void func_sc06_008_80184CA0(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    func_80178CBC((s32) arg0, (s32) &D_sc06_008_801A6B60);
}

void func_sc06_008_80184CCC(s32 arg0) {
    if (func_801789AC(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 2;
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80184D0C);

void func_sc06_008_80184DCC(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0x98) == 0) {
        if (AF(arg0, s16, 0xFE) == 2) {
            func_8002D4C8(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 0;
    }
}

void func_sc06_008_80184E38(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_008_80184E48(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc06_008_80184E58(void) {
    return D_sc06_008_801AA6DC == 1;
}

void func_sc06_008_80184E70(u8 *arg0) {
    func_800296F8(AF(arg0, s32, 0xDC));
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80184E94);

void func_sc06_008_80184FE8(u8 *arg0) {
    D_sc06_008_801A75D0[AF(arg0, u16, 2)]();
}

void func_sc06_008_80185024(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_008_801A72C0) != 0) {
        if (!(func_80029178(D_sc06_008_801A7328[AF(AF(arg0, void *, 0xDC), u16, 0xA)]) & 0xFF)) {
            AF(arg0, s32, 0xCC) = func_801788B8(arg0, (s32) &func_sc06_008_801856D0);
        } else {
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x4000);
        }
        temp_v0 = func_8012C658(0x8F, (s32) (s16) AF(arg0, u16, 0x70), arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc06_008_80185B40);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_008_801850F8(u8 *arg0) {
    AF(AF(AF(arg0, void *, 0x6C), void *, 0x20), s16, 0x12) = (s16) ((AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_008_80185120(void) {
}

void func_sc06_008_80185128(u8 *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0xDC);
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (func_80029178(0x1D) & 0xFF) {
            D_sc06_008_801A750C = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc06_008_801A7470[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc06_008_801A74F8 = 0;
            func_80029124(D_sc06_008_801A7470[AF(temp_s0, u16, 0xC)], 1);
            D_sc06_008_801A74F4 = 2;
        } else {
            D_sc06_008_801A750C = AF(temp_s0, s32, 0);
            var_v0 = D_sc06_008_801A73EC[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc06_008_801A74F4 = 0;
            D_sc06_008_801A74F8 = var_v0;
        }
        func_80178CBC((s32) arg0, (s32) &D_sc06_008_801A7520);
    } else {
        var_a1 = &D_sc06_008_801A758C;
        *var_a1 = AF(temp_s0, s32, 0);
        func_80178CBC((s32) arg0, (s32) (var_a1 - 7));
    }
    AF(arg0, s16, 2) = 4;
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) | 0x8000);
}

void func_sc06_008_80185274(u8 *arg0) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0xDC);
    if (func_801789AC((s32) arg0) != 0) {
        func_80178D18((s32) arg0);
        if (func_80029178(D_sc06_008_801A7328[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc06_008_801A7328[AF(temp_s2, u16, 0xA)] == 0x54) {
                func_80029514(0x5A);
                func_80029124(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (func_80029178(0x1D) & 0xFF)) {
                func_80145EE8(0);
            }
            if (func_sc06_008_80185478() == 1) {
                func_8002AC00(0x26);
            }
            AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) & 0x8000);
            func_8012C218(AF(arg0, s32, 0xCC));
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_008_80185394(u8 *arg0) {
    AF(arg0, s16, 2) = 2;
    func_8012C218(AF(arg0, s32, 0xCC));
}

void func_sc06_008_801853C0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc06_008_801853D0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc06_008_801853E0(u8 *arg0) {
    func_80029124(D_sc06_008_801A7328[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc06_008_80185420(u8 *arg0) {
    func_8014ADA8((s32) &D_80126B58, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc06_008_80185454(void) {
    return func_80174764() == 1;
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_80185478);

void func_sc06_008_801854DC(u8 *arg0) {
    D_sc06_008_801A75F8[AF(arg0, u16, 2)]();
}

void func_sc06_008_80185518(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_008_801A72F4) != 0) {
        AF(arg0, u16, 0xFC) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
        if (AF(arg0, u16, 0x70) & 0x4000) {
            SetScript(arg0, (s32) &D_sc06_008_801A7290);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            SetScript(arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc06_008_801855A0(u8 *arg0, s32 arg1) {
    s16 temp_v1;

    if (AF(arg0, s16, 0xFC) != AF(AF(arg0, void *, 0x64), s16, 0x36)) {
        func_8012C218((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, s16, 0xFE);
    if (temp_v1 == 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7080);
        AF(arg0, s16, 0x5C) = 0;
        func_8002D4C8(0x5BF, 0);
    } else if (temp_v1 == 2) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x20;
        SetScript((s32) arg0, (s32) &D_sc06_008_801A7188);
        AF(arg0, u16, 0x5C) = 0x8C00;
    }
}

void func_sc06_008_80185660(u8 *arg0) {
    s32 f;

    if (AF(arg0, s16, 0x98) == 0) {
        f = AF(arg0, s16, 0xFE);
        AF(arg0, s16, 2) = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7290);
        } else {
            SetScript((s32) arg0, (s32) &D_sc06_008_801A7070);
        }
        AF(arg0, s16, 0xFE) = 0;
    }
}

INCLUDE_ASM("asm/stg/sc06_008/nonmatchings/sc06_008", func_sc06_008_801856D0);
