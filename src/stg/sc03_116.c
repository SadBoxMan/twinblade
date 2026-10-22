#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_116_8017BE9C(void) {
}

void func_sc03_116_8017BEA4(void) {
}

void func_sc03_116_8017BEAC(void) {
}

void func_sc03_116_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_116_801862EC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_116_80180C1C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_116_801862F4[])();
void func_sc03_116_80180C44(void);
extern void func_800D1EBC();
extern void (*D_sc03_116_80186300[])();
extern u8 D_sc03_116_8018630C;
extern void func_8016EE40();
extern u8 D_sc03_116_80186310;
extern void func_sc03_116_80180D04();
extern void (*D_sc03_116_80186314[])();
extern void (*D_sc03_116_80186324[])();
extern void (*D_sc03_116_80186344[])();
extern void (*D_sc03_116_80186578[])();
extern void func_sc03_116_80181954();
extern void func_sc03_116_801819A4();
extern void (*D_sc03_116_80195174[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_8012704C;

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

extern s32 func_80029504();
extern s16 D_sc03_116_80186320;
extern void func_8012AD50();
extern s32 func_8012C194();
extern void func_8001CF00();
extern void func_8012C098();
extern void func_8012AD44();
extern u8 D_sc03_116_80197B60;
extern void func_sc03_116_80181864();
extern s32 func_sc03_116_801818DC();
extern void func_8012BF4C();
extern s32 func_8012BEE8();
extern void (*D_sc03_116_801864BC[])();
extern void func_sc03_116_80181E28();
extern void func_sc03_116_80181C4C();
extern u8 D_sc03_116_80186500;
extern s32 func_8012E57C();
extern s32 func_8012E544();
extern void func_80178B18();
extern u8 D_sc03_116_80186588;
extern s32 D_sc03_116_80197CC4;
extern void func_8013B6A0();
extern s32 func_8013B7AC();

extern u8 D_sc03_116_801865A8;

extern void func_8001CD50();
extern void func_800233CC();
extern void func_sc03_116_80181844();
extern s32 func_sc03_116_801818B8();
extern s16 D_sc03_116_801864C8[];
extern s16 D_sc03_116_801864D4;
extern u8 D_sc03_116_801864E0;
extern u8 D_sc03_116_80194EE0;
extern s32 func_80029178();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C810();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_116_80195094;
extern s16 D_sc03_116_80195096;
extern s16 D_sc03_116_80195098;
extern Blk30 D_sc03_116_8019509C;
extern s16 D_sc03_116_801950CC;
extern s16 D_sc03_116_801950CE;
extern s16 D_sc03_116_801950D0;
extern Blk30 D_sc03_116_801950D4;
extern s16 D_sc03_116_80195104;
extern s16 D_sc03_116_80195106;
extern s16 D_sc03_116_80195108;
extern Blk30 D_sc03_116_8019510C;
extern s16 D_sc03_116_8019513C;
extern s16 D_sc03_116_8019513E;
extern s16 D_sc03_116_80195140;
extern Blk30 D_sc03_116_80195144;
extern Blk30 D_800A5E88;
extern void func_8002850C();
extern void func_80028620();

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_8017BEBC);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_8017BF14);

void func_sc03_116_80180980(void) {
    D_8012704C = 1;
}

void func_sc03_116_80180994(u8 *arg0) {
    D_sc03_116_801862EC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_116_801809D0(u8 *arg0) {
    func_sc03_116_80180C1C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_116_80180A14(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_116_80180A38(u8 *arg0) {
    D_sc03_116_801862F4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_116_80180A74(u8 *arg0) {
    func_sc03_116_80180C44();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_116_80180AB4(u8 *arg0) {
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

void func_sc03_116_80180B30(void) {
    func_800D1EBC();
}

void func_sc03_116_80180B50(u8 *arg0) {
    D_sc03_116_80186300[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_116_80180B8C(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = func_80029504();
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        if (temp_a0 < 0x258) {
            func_800D0C48(1);
        }
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_116_80180C1C(void) {
    func_8016EE40((s32) &D_sc03_116_8018630C, 0x01000000);
}

void func_sc03_116_80180C44(void) {
    func_8016EE40((s32) &D_sc03_116_80186310, 0x01000000);
}

void func_sc03_116_80180C6C(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_116_80180D04, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_116_80180D04((s32) &D_80126948);
}

void func_sc03_116_80180D04(s32 arg0) {
    D_sc03_116_80186314[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80180D40);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80180DE0);

void func_sc03_116_80180F78(void) {
    s32 temp_v0;

    temp_v0 = func_8012E544(0x334);
    if (temp_v0 != 0) {
        func_8002D4C8(0xA27, 0);
        func_8012AD50(temp_v0);
    }
}

void func_sc03_116_80180FBC(u8 *arg0) {
    D_sc03_116_80186324[AF(arg0, u16, 2)]();
}

void func_sc03_116_80180FF8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    D_sc03_116_80186320 = 1;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc03_116_80181028(void) {
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181030);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801810C8);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_8018117C);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181204);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801812AC);

void func_sc03_116_801814B0(u8 *arg0) {
    D_sc03_116_80186344[AF(arg0, u16, 2)]();
}

void func_sc03_116_801814EC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CF00(temp_v0);
        AF(arg0, s16, 0xA) = -0x100;
        AF(arg0, s16, 6) = 0;
        AF(arg0, s16, 0xE) = 0x1EC0;
        func_8012AD50((s32) arg0);
        return;
    }
    func_8012C098((s32) arg0);
}

void func_sc03_116_80181550(u8 *arg0) {
    if (AF(arg0, s16, 0x70) != 0) {
        func_8012AD44((s32) arg0, 6);
    }
}

void func_sc03_116_80181580(u8 *arg0) {
    s32 temp_s2;
    void *temp_s0;

    temp_s2 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60;
    func_8001CD50(temp_s2, (s32) temp_s0);
    func_800233CC((s32) temp_s0, 0x80);
    func_sc03_116_80181844((s32) arg0, (s32) temp_s0);
    AF(temp_s2, u16, 0x2C) = 0xC040;
    AF(temp_s2, s32, 4) = (s32) (AF(temp_s2, s32, 4) | 0x50000000);
    func_sc03_116_801818B8((s32) arg0);
    func_8012AD50((s32) arg0);
}

void func_sc03_116_80181618(u8 *arg0) {
    func_sc03_116_80181864((s32) arg0, (s32) ((AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60));
    if (func_sc03_116_801818DC((s32) arg0) != 0) {
        func_8012BF4C((s32) arg0, 0x1E);
        func_8012AD50((s32) arg0);
    }
}

void func_sc03_116_80181674(u8 *arg0, s32 arg1) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60;
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        func_8012AD50((s32) arg0);
        return;
    }
    func_sc03_116_80181864((s32) arg0, (s32) temp_s1);
}

void func_sc03_116_801816D8(u8 *arg0) {
    u8 *temp_a1;
    u8 temp_v1;

    temp_a1 = (AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60;
    temp_v1 = *temp_a1;
    if (temp_v1 < 5U) {
        func_8012C098((s32) arg0);
        return;
    }
    *temp_a1 = temp_v1 - 4;
}

void func_sc03_116_8018172C(u8 *arg0) {
    s32 temp_s2;
    void *temp_s0;

    temp_s2 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s16, 0x70) << 6) + &D_sc03_116_80197B60;
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + 0x40);
    func_8001CD50(temp_s2, (s32) temp_s0);
    func_800233CC((s32) temp_s0, 0x80);
    func_sc03_116_80181844((s32) arg0, (s32) temp_s0);
    AF(temp_s0, s32, 0) = 0xF0;
    AF(temp_s0, s32, 4) = 0;
    AF(temp_s2, u16, 0x2C) = 0x8040;
    AF(temp_s2, s32, 4) = (s32) (AF(temp_s2, s32, 4) | 0x50000000);
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801817D8);

void func_sc03_116_80181844(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_sc03_116_80181864(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181864);

s32 func_sc03_116_801818B8(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    return func_sc03_116_801818DC(arg0, arg1);
}

s32 func_sc03_116_801818DC(s32 arg0, s32 arg1) {
    s16 temp_v1;
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0xFE);
    AF(temp_a1, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 < 0x4000) {
        AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) + 0x80);
    } else {
        AF(temp_a1, u16, 0x18) = 0x4000U;
    }
    temp_v1 = (s16) AF(temp_a1, u16, 0x18);
    if (AF(temp_a1, s16, 0x1A) < temp_v1) {
        AF(temp_a1, s16, 0x1A) = temp_v1;
    }
    return (s16) AF(temp_a1, u16, 0x18) == 0x4000;
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181954);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801819A4);

void func_sc03_116_801819F4(u8 *arg0) {
    D_sc03_116_801864BC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        func_sc03_116_80181E28((s32) arg0);
        func_sc03_116_80181C4C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181A5C);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181B44);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181B88);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181C4C);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80181E28);

void func_sc03_116_80181F6C(u8 *arg0) {
    D_sc03_116_80186578[AF(arg0, u16, 2)]();
}

void func_sc03_116_80181FA8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    if ((func_80029178(0x11C) & 0xFF) || (temp_v0 = func_8012C1B8(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc03_116_80194EE0);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) | 0x8000);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_116_801864E0 | 0x40000000);
    AF(arg0, u16, 0x5C) = 0xC800;
    D_sc03_116_801864C8[0] = 0;
    D_sc03_116_801864D4 = 0;
    AF(AF(arg0, s32, 0x20), s16 *, 0x20) = D_sc03_116_801864C8;
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 0xE4) = 0x80;
    AF(arg0, s16, 0xE2) = 0x80;
    AF(arg0, s16, 0xE0) = 0x80;
    AF(arg0, s16, 0xE6) = -2;
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x80);
    AF(AF(arg0, s32, 0x20), void *, 0x80) = (void *) (arg0 + 0xE0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_116_801820AC(u8 *arg0) {
    void *temp_v1;

    if ((AF(arg0, s16, 0xFE) == 0) && (func_8012E57C(0x1C0, 2) == 0)) {
        AF(arg0, s16, 0xFE) = 1;
        temp_v1 = AF(AF(arg0, void *, 0x20), void *, 0x80);
        AF(temp_v1, s16, 4) = -0x20;
        AF(temp_v1, s16, 2) = -0x20;
        AF(temp_v1, s16, 0) = -0x20;
    }
    if (func_8012E544(0x1C0) == 0) {
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_80178B18((s32) arg0, (s32) &D_sc03_116_80186500);
    }
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_8018213C);

void func_sc03_116_80182238(void) {
}

void func_sc03_116_80182240(s32 arg0) {
    func_sc03_116_80181954(arg0);
}

void func_sc03_116_80182260(s32 arg0) {
    func_sc03_116_801819A4(arg0);
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80182280);

void func_sc03_116_801822A0(void) {
    if (D_sc03_116_80197CC4 == 0) {
        func_8013B6A0(0, (s32) &D_sc03_116_80186588, 0x2E0);
        func_8013B6A0(1, (s32) (&D_sc03_116_80186588 + 8), 0x2E0);
        func_8013B6A0(2, (s32) (&D_sc03_116_80186588 + 0x10), 0x2E0);
        func_8013B6A0(3, (s32) (&D_sc03_116_80186588 + 0x18), 0x2E0);
        D_sc03_116_80197CC4 += 1;
    }
}

s32 func_sc03_116_8018232C(s32 arg0) {
    return func_8013B7AC();
}

void func_sc03_116_8018234C(void) {
    func_8013B6A0(0, (s32) &D_sc03_116_801865A8, 0x3C0);
}

void func_sc03_116_80182378(u8 *arg0) {
    D_sc03_116_80195174[AF(arg0, u16, 2)]();
}

void func_sc03_116_801823B4(u8 *arg0) {
    Blk30 *p;

    AF(arg0, s16, 0xFE) = 0;
    switch (AF(arg0, s16, 0xFC)) {
    case 0:
        func_8002850C(D_sc03_116_80195094, D_sc03_116_80195096, D_sc03_116_80195098);
        p = &D_sc03_116_8019509C;
        func_8012AD44(arg0, 1);
        break;
    case 1:
        func_8002850C(D_sc03_116_801950CC, D_sc03_116_801950CE, D_sc03_116_801950D0);
        p = &D_sc03_116_801950D4;
        func_8012AD44(arg0, 2);
        break;
    case 2:
        func_8002850C(D_sc03_116_80195104, D_sc03_116_80195106, D_sc03_116_80195108);
        p = &D_sc03_116_8019510C;
        func_8012AD44(arg0, 3);
        break;
    case 3:
        func_8002850C(D_sc03_116_80195094, D_sc03_116_80195096, D_sc03_116_80195098);
        p = &D_sc03_116_8019509C;
        func_8012AD44(arg0, 4);
        break;
    case 4:
        func_8002850C(D_sc03_116_8019513C, D_sc03_116_8019513E, D_sc03_116_80195140);
        p = &D_sc03_116_80195144;
        func_8012AD44(arg0, 5);
        break;
    }
    D_800A5E88.a = p->a;
    D_800A5E88.b = p->b;
    D_800A5E88.c = p->c;
    func_80028620(0, &D_800A5E88.a);
    func_80028620(1, &D_800A5E88.b);
    func_80028620(2, &D_800A5E88.c);
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801825A8);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80182658);

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_80182708);

void func_sc03_116_801827B8(void) {
}

INCLUDE_ASM("asm/stg/sc03_116/nonmatchings/sc03_116", func_sc03_116_801827C0);
