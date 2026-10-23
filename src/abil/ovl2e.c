#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern void func_800183E0();
extern u8 D_ovl2e_800CB9F4[];
extern u8 D_ovl2e_800CB9B4[];
extern AbilStep D_ovl2e_800CB8C8[];
extern s32 func_80161104();
void func_ovl2e_800CAED0(u8 *a);
extern void func_80154274();
extern void func_801655E4();
extern u8 D_800D57F4[];

void func_ovl2e_800CAE0C(void) {
    func_800183E0(D_ovl2e_800CB9F4);
    func_800183E0(D_ovl2e_800CB9B4);
}

void func_ovl2e_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2e_800CB8C8[AF(a, u8, 0x197)](a);
}

void func_ovl2e_800CAE88(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2e_800CAED0(a);
        AF(a, u8, 0x197)++;
    }
}

void func_ovl2e_800CAED0(u8 *a) {
    func_80154274(a, D_800D57F4);
    func_801655E4(a);
    AF(a, u8, 0x197)++;
}

extern void func_80146C3C();
extern u8 D_80078EC1;
extern AbilStep D_ovl2e_800CB948[];
extern void func_ovl2e_800CB3BC();
extern AbilStep D_ovl2e_800CB8D4[];
extern s32 func_80128ED8();
extern s32 func_80146E98();
extern void func_ovl2e_800CB840();
extern void func_ovl2e_800CB874();
extern void func_ovl2e_800CB8A8();
extern void func_801466F0();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 func_80161208();

void func_ovl2e_800CAF18(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_801466F0(0x20, arg0, 0, -0x40, 0, 0, 0, 0);
    }
    if (func_80161208(arg0) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    }
}

void func_ovl2e_800CAFB0(u8 *a) {
    AF(a, s32, 0x44) &= ~2;
}

void func_ovl2e_800CAFC4(u8 *arg0) {
    if ((D_80078EC1 != 0x1D) || (D_ovl2e_800CB8D4[AF(arg0, u16, 2)](), ((AF(arg0, s16, 0xA) < 0x401) == 0))) {
        func_ovl2e_800CB3BC(arg0);
    }
}

extern s32 ApplyMatrixLV();
extern s32 RotMatrixZYX();
extern s32 rand();

extern void func_80146E90();
extern void func_80146CA0();
extern u8 D_ovl2e_800CBD74;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80149374();
extern void func_80146DE8();
extern void func_80147324();

void func_ovl2e_800CB038(u8 *arg0) {
    s32 temp_v0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C214(temp_v0, (s32) &D_ovl2e_800CBD74);
        AF(temp_v0, u16, 0x12) = (u16) AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80149374((s32) temp_s2, (s32) (arg0 + 4));
        func_80146DE8((s32) arg0, 0, -0xC0000, -0x100000);
        func_80146E90((s32) arg0, 0x64);
        AF(arg0, AVec, 0x58) = AF(temp_v0, AVec, 0x10);
        AF(arg0, s16, 0x60) = 2;
        func_80147324(0x8F3);
        func_80146CA0((s32) arg0);
        return;
    }
    func_ovl2e_800CB3BC((s32) arg0);
}

extern u8 D_801202A0[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern void func_80015978();
extern void func_8014C3A4();

extern void func_80146A6C();
extern void func_ovl2e_800CB3DC();

extern void func_80162FF4();
extern void func_80162FC0();
extern s32 func_80163950();
extern s32 func_801638A0();
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_80162D28();

void func_ovl2e_800CB114(u8 *arg0) {
    AVec b;
    AVec s;
    u8 *m;
    u32 f;

    m = AF(arg0, u8 *, 0x20);
    s = AF(m, AVec, 0x10);
    AF(m, AVec, 0x10) = AF(arg0, AVec, 0x58);
    func_80162FF4(arg0, 0, 0x20000, 0);
    func_80162FC0(arg0);
    s.vx += 0x71;
    s.vz += 0x71;
    AF(m, AVec, 0x10) = s;
    if (func_80146E98(arg0) != 0) {
        func_ovl2e_800CB3BC(arg0);
        return;
    }
    f = (func_80163950(arg0) != 0) << 13;
    f |= func_801638A0(arg0, &b);
    if (f != 0) {
        if (f & 0x6000) {
            if (--AF(arg0, s16, 0x60) != -1) {
                AF(arg0, s32, 0x28) = -(AF(arg0, s32, 0x28) / 2);
                goto tail;
            }
        }
        func_80146E90(arg0, 8);
        func_80147324(0x8E7);
        func_80146CA0(arg0);
        return;
    }
tail:
    func_80163408(arg0, 0x2A, 0, 0x20);
    func_80163328(arg0);
    f = func_801632F0(arg0);
    switch (f) {
    case 2:
        break;
    case 1:
    case 4:
        func_80146E90(arg0, 8);
        func_80147324(0x8E7);
        func_80146CA0(arg0);
        break;
    }
    func_80162D28(arg0);
}

void func_ovl2e_800CB304(u8 *arg0) {
    s32 pad[2];
    s32 i;
    u8 *m;
    u16 t;

    m = AF(arg0, u8 *, 0x20);
    for (i = 0; i < 6; i++) {
        func_80146A6C(0x4D, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), i, 1);
    }
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    t = AF(m, u16, 0x1C) - 0x80;
    AF(m, u16, 0x1C) = t;
    AF(m, u16, 0x1A) = t;
    AF(m, u16, 0x18) = t;
    func_ovl2e_800CB3DC(arg0);
}

void func_ovl2e_800CB3BC(void) {
    func_80162CCC();
}

void func_ovl2e_800CB3DC(u8 *arg0) {
    AVec v;
    u8 *p;

    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, 0x2A, 0x20) != 0 && func_8014C278(arg0, p, 0x80) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, p, 0x2A, &v);
        }
    }
}

void func_ovl2e_800CB488(u8 *arg0) {
    if (D_80078EC1 == 0x1D) {
        D_ovl2e_800CB948[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

typedef struct { s32 vx, vy, vz, pad; } ALVec;
extern u8 D_ovl2e_800CB8EC;
extern u8 D_ovl2e_800CB8F8;
extern AVec D_ovl2e_800CB954[];
extern ALVec D_ovl2e_800CB984;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();

void func_ovl2e_800CB4E4(u8 *arg0) {
    AVec r;
    AMtx m;
    ALVec w;
    u8 *o;
    s32 q;

    o = (u8 *) func_801465C0();
    AF(arg0, u8 *, 0x20) = o;
    if (o == NULL) {
        goto fail;
    }
    func_8001CC3C(o, &D_ovl2e_800CB8EC, 0, 0);
    AF(o, u8, 0x27) = 0x90;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = 0x3000;
    AF(o, s32, 4) |= 0x50000000;
    func_80128EA8(o, arg0 + 0x24, &D_ovl2e_800CB8F8);
    w = D_ovl2e_800CB984;
    r = D_ovl2e_800CB954[AF(arg0, s32, 0x2C)];
    if (AF(arg0, s32, 0x30) != 0) {
        r.vx += ((rand() & 0x3F) << 4) - 0x200;
        r.vy += ((rand() & 0x3F) << 4) - 0x200;
        r.vz += ((rand() & 0x3F) << 4) - 0x200;
        w.vx = ((rand() & 0x1F) - 0x10) * 0x18000;
        w.vy = ((rand() & 0x1F) - 0x10) * 0x18000;
        w.vz = ((rand() & 0x1F) - 0x10) * 0x18000;
    }
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &w, &w);
    AF(arg0, s32, 0x10) = w.vx;
    AF(arg0, s32, 0x14) = w.vy;
    AF(arg0, s32, 0x18) = w.vz;
    func_80146E90(arg0, 4);
    AF(arg0, u16, 2)++;
    return;
fail:
    func_80146C3C(arg0);
}

void func_ovl2e_800CB710(u8 *arg0) {
    u8 *o;

    o = AF(arg0, u8 *, 0x20);
    func_80128ED8(o, arg0 + 0x24);
    AF(o, u8, 0x27) = AF(arg0, u8, 0x28) - 0x70;
    func_ovl2e_800CB840(arg0);
    func_ovl2e_800CB8A8(arg0, 0x30);
    if (func_80146E98(arg0) != 0) {
        AF(arg0, s32, 0x10) >>= 2;
        AF(arg0, s32, 0x14) >>= 2;
        AF(arg0, s32, 0x18) >>= 2;
        func_80146E90(arg0, 8);
        AF(arg0, u16, 2)++;
    }
}

void func_ovl2e_800CB7B8(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_ovl2e_800CB874();
    func_80128ED8(temp_s0, arg0 + 0x24);
    AF(temp_s0, s8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
    func_ovl2e_800CB8A8(arg0, 0x40);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) - 0x4000);
    func_ovl2e_800CB840(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
    }
}

void func_ovl2e_800CB840(u8 *a) {
    *(s32 *)(a + 0x4) = (*(s32 *)(a + 0x4) + *(s32 *)(a + 0x10));
    *(s32 *)(a + 0x8) = (*(s32 *)(a + 0x8) + *(s32 *)(a + 0x14));
    *(s32 *)(a + 0xc) = (*(s32 *)(a + 0xc) + *(s32 *)(a + 0x18));
}

void func_ovl2e_800CB874(u8 *arg0) {
    u8 *m;
    s16 v;

    m = AF(arg0, u8 *, 0x20);
    v = AF(m, u8, 0x24);
    v -= 4;
    if (v < 0) {
        v = 0;
    }
    AF(m, u8, 0x24) = AF(m, u8, 0x25) = AF(m, u8, 0x26) = v;
}

void func_ovl2e_800CB8A8(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1, u16, 0x1A) - arg1;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
}
