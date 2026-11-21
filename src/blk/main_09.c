#include "common.h"
#include "psyq.h"
#include "work.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern u16 D_800BAE04;
extern void (*D_main_09_800CDD08[])();

void func_main_09_800CD37C(void) {
    D_main_09_800CDD08[D_800BAE04]();
}

extern u8 D_main_09_800CD34C;
extern s32 D_main_09_800CDD2C;
extern s32 D_main_09_800CDD34;
extern s32 func_8001B244();
extern void func_8001AD38();
extern void func_800116A0();

void func_main_09_800CD3B8(void) {
    if (func_8001B244(0x8E) != 0) {
        func_8001AD38((s32) &D_main_09_800CD34C);
        D_main_09_800CDD2C = 0;
        D_main_09_800CDD34 = 0;
        func_800116A0();
    }
}

extern void func_main_09_800CD674();

void func_main_09_800CD408(void) {
    s32 temp_v0;

    func_main_09_800CD674(0, D_main_09_800CDD2C, D_main_09_800CDD34);
    temp_v0 = D_main_09_800CDD34 + 8;
    D_main_09_800CDD34 = temp_v0;
    if (temp_v0 >= 0x80) {
        func_800116A0();
    }
}

void func_main_09_800CD464(void) {
    s32 temp_v0;

    func_main_09_800CD674(0, D_main_09_800CDD2C, D_main_09_800CDD34);
    temp_v0 = D_main_09_800CDD2C - 1;
    D_main_09_800CDD2C = temp_v0;
    if (temp_v0 < -0x10F) {
        D_main_09_800CDD2C = -0x110;
        func_800116A0();
    }
}

void func_main_09_800CD4C8(void) {
    s32 temp_v0;

    func_main_09_800CD674(0, D_main_09_800CDD2C, D_main_09_800CDD34);
    temp_v0 = D_main_09_800CDD34 - 8;
    D_main_09_800CDD34 = temp_v0;
    if (temp_v0 <= 0) {
        func_800116A0();
    }
}

extern u8 D_main_09_800CD364;

void func_main_09_800CD520(void) {
    func_8001AD38((s32) &D_main_09_800CD364);
    D_main_09_800CDD34 = 0;
    func_800116A0();
}

extern s32 D_main_09_800CDD30;
extern void func_main_09_800CD92C();

void func_main_09_800CD558(void) {
    s32 temp_v0;

    func_main_09_800CD92C(-0x400, 0, D_main_09_800CDD34);
    D_main_09_800CDD30 = -0x340;
    temp_v0 = D_main_09_800CDD34 + 8;
    D_main_09_800CDD34 = temp_v0;
    if (temp_v0 >= 0x80) {
        func_800116A0();
    }
}

void func_main_09_800CD5B8(void) {
    s32 temp_v0;

    func_main_09_800CD92C(D_main_09_800CDD30, 0, D_main_09_800CDD34);
    temp_v0 = D_main_09_800CDD30 + 1;
    D_main_09_800CDD30 = temp_v0;
    if (temp_v0 >= 0x141) {
        func_800116A0();
    }
}

void func_main_09_800CD614(void) {
    s32 temp_v0;

    func_main_09_800CD92C(D_main_09_800CDD30, 0, D_main_09_800CDD34);
    temp_v0 = D_main_09_800CDD34 - 8;
    D_main_09_800CDD34 = temp_v0;
    if (temp_v0 <= 0) {
        func_800116A0();
    }
}

void func_main_09_800CD66C(void) {
}

typedef struct {
    u32 field_0;
    u32 field_4;
    u8 field_8, field_9, field_A, field_B;
    s16 field_C, field_E;
    u8 field_10, field_11;
    u16 field_12;
    s16 field_14, field_16;
} struct_18;
extern struct_18 *D_800A71D0;
extern u32 D_800ABA24[][0x1000];
extern Work D_800B0A50;         /* this older EXE's work block (D_800AF630 in the retail one): same field offsets */

void func_main_09_800CD674(s32 a, s32 b, s32 c) {
    register Work *w = &D_800B0A50;
    struct_18 *p;

    a -= 160;
    b -= 120;

    p = D_800A71D0;
    setlen(p, 5);
    p->field_4 = 0xE1000086;
    p->field_B = 0x64;
    p->field_12 = 0x7800;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000087;
    p->field_B = 0x64;
    p->field_12 = 0x7800;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a + 160;
    p->field_E = b;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000096;
    p->field_B = 0x64;
    p->field_12 = 0x7800;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a;
    p->field_E = b + 256;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000097;
    p->field_B = 0x64;
    p->field_12 = 0x7800;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a + 160;
    p->field_E = b + 256;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    D_800A71D0 = p;
}

void func_main_09_800CD92C(s32 a, s32 b, s32 c) {
    register Work *w = &D_800B0A50;
    struct_18 *p;

    a -= 160;
    b -= 120;

    p = D_800A71D0;
    setlen(p, 5);
    p->field_4 = 0xE1000089;
    p->field_B = 0x64;
    p->field_12 = 0x7840;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008B;
    p->field_B = 0x64;
    p->field_12 = 0x7840;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a + 256;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008D;
    p->field_B = 0x64;
    p->field_12 = 0x7840;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a + 512;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 256;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE100008F;
    p->field_B = 0x64;
    p->field_12 = 0x7840;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = a + 768;
    p->field_E = b;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 64;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000086;
    p->field_B = 0x64;
    p->field_12 = 0x7880;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = -160;
    p->field_E = -120;
    p->field_10 = 0;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    setlen(p, 5);
    p->field_4 = 0xE1000087;
    p->field_B = 0x64;
    p->field_12 = 0x7880;
    p->field_8 = p->field_9 = p->field_A = c;
    p->field_C = 0;
    p->field_E = -120;
    p->field_10 = 0x20;
    p->field_11 = 0;
    p->field_14 = 160;
    p->field_16 = 256;
    addPrim(D_800ABA24[w->frame], p);
    p++;
    D_800A71D0 = p;
}
