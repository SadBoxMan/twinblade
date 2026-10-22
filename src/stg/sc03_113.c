#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_113_8017BE9C(void) {
}

void func_sc03_113_8017BEA4(void) {
}

void func_sc03_113_8017BEAC(void) {
}

void func_sc03_113_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_113_801867DC[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_113_801867C4;
extern void (*D_sc03_113_801867E4[])();
extern u8 D_sc03_113_801867D0;
extern void (*D_sc03_113_80186EC0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 func_80178970();
extern void func_80178D18();
extern void func_8012C218();
extern u8 D_sc03_113_80186EB0[];
extern void func_80029124();
extern s32 func_8012C658();
extern void func_80178B18();
extern u8 D_80078E78;
extern u8 D_sc03_113_80186E90;
extern s32 func_8012E778();
extern void func_801439C0();
extern void (*D_sc03_113_80186F5C[])();
void func_sc03_113_8017F02C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_113_80186F64[])();
void func_sc03_113_8017F054(void);
extern void func_800D1EBC();
extern void (*D_sc03_113_80186F70[])();
extern u8 D_sc03_113_80186F7C;
extern void func_8016EE40();
extern u8 D_sc03_113_80186F88;
extern void func_sc03_113_8017F120();
extern void (*D_sc03_113_80186F9C[])();
extern void (*D_sc03_113_80187174[])();
extern void (*D_sc03_113_801871A8[])();
extern void (*D_sc03_113_8019F340[])();

void func_sc03_113_8017BEBC(u8 *arg0) {
    D_sc03_113_801867DC[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_113_801867C4, 0xFD);
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

void func_sc03_113_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_113_8017C150(u8 *arg0) {
    D_sc03_113_801867E4[AF(arg0, u16, 2)]();
}

void func_sc03_113_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_113_801867D0, 0x18);
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

void func_sc03_113_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern u8 D_sc03_113_80186C74;
extern s32 func_8012CBCC();
extern void func_8012B2CC();
extern void func_8012B14C();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc03_113_8019CB9C[])();
extern void func_sc03_113_80180910();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc03_113_8019F08C;
extern u8 D_sc03_113_8019CBBC;
extern s32 func_8012D5E4();
extern s32 func_sc03_113_801808F8();
extern u8 D_80078EC1;
extern s32 func_8012BD14();
extern void (*D_sc03_113_8019F2F0[])();
extern void func_8012B260();
extern void func_sc03_113_80182038();
extern void func_8001CD50();
extern u8 D_sc03_113_801A5A40;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern s32 func_8012BCCC();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_113_80181F18();
extern u8 D_sc03_113_8019F2B0;
extern u8 D_sc03_113_8019F2B8;
extern s32 func_8012CBF4();
extern s32 func_8012BE54();
extern void func_sc03_113_80181C24();
extern u8 D_sc03_113_801A5A80;
extern void func_800233CC();
extern void func_801292C8();

extern u8 D_sc03_113_801994F4;
extern s32 D_sc03_113_801A59F8;
extern s32 D_sc03_113_801A5C64;
extern u8 D_sc03_113_801A5C80;
extern void func_8013C0F8();
extern void func_sc03_113_8017D174();

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
extern u8 D_sc03_113_80187198;
extern u8 D_sc03_113_8019CB18;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();
extern s32 func_80029178();
extern void func_8012AD44();
extern void func_8012AD50();

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017C294);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017D174);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017DDD8);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017DF74);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E178);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E56C);

void func_sc03_113_8017E6EC(u8 *arg0) {
    D_sc03_113_80186EC0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E728);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E79C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017E878);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017EA8C);

void func_sc03_113_8017EB60(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    func_80178970(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (func_8012CBCC(arg0) & 0x2000)) {
        func_80146A6C(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_113_80186C74);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        func_8012B2CC(arg0);
        func_8012B14C(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_113_8017EC30(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        func_80029124((s32) D_sc03_113_80186EB0[AF(arg0, s16, 0x70)], 1);
        func_8012C218(arg0);
    }
}

void func_sc03_113_8017EC88(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &D_80078E78;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        func_80178B18((s32) arg0, (s32) &D_sc03_113_80186E90);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (func_8012E778((s32) arg0, 0x9000B8) == 0)) {
        if (func_8012C658(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            func_801439C0(AF(arg0, s32, 0xCC));
            func_8012C218((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc03_113_8017ED80(s32 arg0, s32 arg1) {
    if (func_80178970(arg0, arg1) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_113_8017EDC0(u8 *arg0) {
    D_sc03_113_80186F5C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EDFC(u8 *arg0) {
    func_sc03_113_8017F02C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_113_8017EE40(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_113_8017EE64(u8 *arg0) {
    D_sc03_113_80186F64[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EEA0(u8 *arg0) {
    func_sc03_113_8017F054();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_113_8017EEE0(u8 *arg0) {
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

void func_sc03_113_8017EF5C(void) {
    func_800D1EBC();
}

void func_sc03_113_8017EF7C(u8 *arg0) {
    D_sc03_113_80186F70[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_113_8017EFB8(u8 *arg0) {
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

void func_sc03_113_8017F02C(void) {
    func_8016EE40((s32) &D_sc03_113_80186F7C, 0x01000000);
}

void func_sc03_113_8017F054(void) {
    func_8016EE40((s32) &D_sc03_113_80186F88, 0x01000000);
}

void func_sc03_113_8017F07C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_113_8017F120, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_113_8017F120((s32) &D_80126948);
}

void func_sc03_113_8017F120(s32 arg0) {
    D_sc03_113_80186F9C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F15C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F1FC);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F394);

void func_sc03_113_8017F4A0(u8 *arg0) {
    D_sc03_113_80187174[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F4DC);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F6CC);

void func_sc03_113_8017F8C8(u8 *arg0) {
    D_sc03_113_801871A8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017F904);

void func_sc03_113_8017F9F4(void) {
}

void func_sc03_113_8017F9FC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_8012C1B8(arg0, arg1, arg2);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_113_8019CB18);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_113_80187198 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x4400;
    AF(arg0, u8, 0x75) = 8;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - 0x18);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8040);
    if ((AF(AF(arg0, void *, 0x64), s16, 0xFE) != 0) && !(func_80029178(0xBA) & 0xFF)) {
        func_8012AD44(arg0, 2);
        return;
    }
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FAD4);

void func_sc03_113_8017FB88(void) {
}

s32 func_sc03_113_8017FB90(void) {
    return 0x49;
}

void func_sc03_113_8017FB98(void) {
    switch (D_sc03_113_801A5C64) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc03_113_801994F4);
        D_sc03_113_801A59F8 = 0;
        D_sc03_113_801A5C64 += 1;
        return;
    case 1:
        func_sc03_113_8017D174((s32) &D_sc03_113_801A5C80, (s32) &D_sc03_113_801994F4, D_sc03_113_801A59F8, 0);
        D_sc03_113_801A59F8 += 0x14;
        return;
    }
}

void func_sc03_113_8017FC3C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_113_8019CB9C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc03_113_80180910((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FCB8);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FD78);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8017FEA0);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80180010);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801801A4);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801803F8);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80180504);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801806A0);

void func_sc03_113_8018075C(s32 arg0) {
    void *temp_v1;

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
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc03_113_801807E8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_113_8019F08C);
}

s32 func_sc03_113_80180820(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc03_113_8019CBBC, (s32) (&D_sc03_113_8019CBBC + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018084C);

s32 func_sc03_113_801808F8(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc03_113_80180910(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018097C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181128);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181730);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181864);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181C24);

void func_sc03_113_80181E68(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_113_8019F2F0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        func_8012B260((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80181F18);

void func_sc03_113_80181FFC(u8 *arg0) {
    D_sc03_113_8019F340[AF(arg0, u16, 2)]();
}

void func_sc03_113_80182038(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_113_801A5A40);
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_8018209C);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80182130);

void func_sc03_113_80182258(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_113_80182288(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_113_801822B4(void) {
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801822BC);

void func_sc03_113_801823A8(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80182428);

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801824DC);

void func_sc03_113_801825BC(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_113_80182624(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_113_80182684(u8 *arg0) {
    s32 sp10;
    u16 temp_v0;

    func_8012B77C((s32) &sp10, arg0 + 4, (s32) &D_80126B5C);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (sp10 >> 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) sp10;
    temp_v0 = AF(arg0, u16, 0xA) - 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) >= 0x81) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0xFC) = 0xC;
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_80182714(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xB;
    }
    if ((s16) AF(arg0, u16, 0xFC) == 6) {
        func_8012C658(0x1EA, 0xE, (s32) arg0);
        func_8002D4C8(0xC5D, 0);
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_80182788(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_113_80181F18((s32) arg0);
}

void func_sc03_113_801827D8(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_113_8019F2B0, (s32) &D_sc03_113_8019F2B8, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_113_80182038(arg0);
}

void func_sc03_113_80182858(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (func_8012BE54() <= 0x23FFFF) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = func_8012C658(0x1EA, 0xF, (s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x1F) + 0x2D);
            if ((AF(arg0, s16, 0x70) == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_801828F8);

void func_sc03_113_801829C8(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    AF(arg0, s16, 2) = 0x11;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = temp_v0_2;
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 0x11) << 9);
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc03_113_80181C24((s32) arg0);
}

void func_sc03_113_80182A5C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc03_113/nonmatchings/sc03_113", func_sc03_113_80182A98);

void func_sc03_113_80182B80(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_113_801A5A80;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_113_80182C44(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_113_801A5A80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc03_113_80182CF8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_113_80182D38(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}
