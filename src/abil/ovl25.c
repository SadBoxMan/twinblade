#include "common.h"
#include "abil.h"
#include "gte.h"

extern AbilStep D_ovl25_800CBFE4[];
extern s32 func_80161104();
void func_ovl25_800CAFE4(s32 arg0);
extern void func_80162CCC();

extern void func_800183E0();
extern void func_ovl25_800CAE74();
extern u8 D_ovl25_800CBF3C;
extern u8 D_ovl25_800CBF5C;
extern s32 D_ovl25_800CBF7C[];
extern s32 D_ovl25_800CBFA8[];
extern s32 D_ovl25_800CC05C;
extern s32 D_ovl25_800CC09C;
extern s32 D_ovl25_800CC0DC;

void func_ovl25_800CAE0C(void) {
    func_ovl25_800CAE74(&D_ovl25_800CC09C, &D_ovl25_800CBF3C, &D_ovl25_800CBF7C);
    func_ovl25_800CAE74(&D_ovl25_800CC0DC, &D_ovl25_800CBF5C, &D_ovl25_800CBFA8);
    func_800183E0(&D_ovl25_800CC05C);
}

extern void func_ovl25_800CBEB8();
extern u8 D_80078EC1;
extern AbilStep D_ovl25_800CC030[];
extern s32 rand();

extern s16 D_801270C0;
extern void func_80147324();
extern u8 D_ovl25_800CC00C;
extern s32 func_80146578();
extern void func_8001CB00();
extern void func_80146DE8();
extern void func_80146CA0();
extern void func_80154150();
extern void func_801655E4();
extern void func_80146E90();

extern s32 func_80148800();
extern void func_ovl25_800CB428();
extern void func_ovl25_800CB6A0();
extern void func_ovl25_800CB964();

extern AObj68 D_8011F9D0[];

extern s32 func_80029178();

void func_ovl25_800CAE74(u8 *arg0, u8 *arg1, s32 *arg2) {
    u8 *d;
    u8 *p;
    u8 *s;
    s32 *q;
    u8 *r;
    s32 w;

    d = AF(arg1, u8 *, 0xC);
    AF(arg1, u16, 2) = AF(arg0, u16, 2);
    AF(arg1, u16, 4) = AF(arg0, u16, 4);
    AF(arg1, u16, 6) = AF(arg0, u16, 6);
    AF(arg1, u16, 8) = AF(arg0, u16, 8);
    AF(arg1, u16, 0xA) = AF(arg0, u16, 0xA);
    p = d;
    s = AF(arg0, u8 *, 0xC);
    do {
        *p = *s;
        p++;
        s++;
    } while ((s32) p < (s32) (d + 0x1F));
    w = *arg2;
    if (w != 0) {
        q = arg2;
        r = d;
        do {
            if ((u8) func_80029178(w) == 0) {
                r[0] = 0;
                r[1] = 0;
            }
            q++;
            w = *q;
            r += 2;
        } while (w != 0);
    }
    func_800183E0(arg1);
}

void func_ovl25_800CAF58(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl25_800CBFE4[AF(a, u8, 0x197)](a);
}

void func_ovl25_800CAF9C(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl25_800CAFE4(a);
        AF(a, u8, 0x197)++;
    }
}

void func_ovl25_800CAFE4(s32 arg0) {
    D_801270C0 = 2;
    func_80154150(arg0, 3);
    func_801655E4(arg0);
    func_ovl25_800CAE74((s32) &D_ovl25_800CC09C, (s32) &D_ovl25_800CBF3C, (s32) &D_ovl25_800CBF7C);
    func_ovl25_800CAE74((s32) &D_ovl25_800CC0DC, (s32) &D_ovl25_800CBF5C, (s32) &D_ovl25_800CBFA8);
    func_800183E0((s32) &D_ovl25_800CC05C);
    AF(arg0, s16, 0x234) = 0;
    AF(arg0, s16, 0x236) = 0x10;
    AF(arg0, s32, 0x238) = 0;
    AF(arg0, u8, 0xBE) = 0;
    AF(arg0, u8, 0xBF) = 0;
    func_80146E90(arg0, 0x10);
    func_80147324(0x8EA);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern u16 D_ovl25_800CC0FC[];
extern u16 D_ovl25_800CC11C[];
extern s32 func_80029204();
extern void func_ovl25_800CB5C8(s16 *a, u8 *b);

extern AVec D_ovl25_800CC13C[];
extern s32 func_80012ABC();
extern void func_80162F08();
extern void func_80013B64();
extern void func_80162FC0();
extern s32 func_ovl25_800CBED8();

extern void func_80017DC4();
extern void func_80017714();

extern void func_80016ED4();
extern u16 D_ovl25_800CBFF8[];
extern u16 D_ovl25_800CBFFC[][4];
/* a textured stack primitive for func_80016ED4: four vertices, four UV pairs, a colour, the code, the page */
typedef struct { AVec v[4]; u16 uv[8]; ACol c; s32 code; u8 tp; } ATPrim;

extern s32 func_80146E98();
extern void func_80165A78();
extern void func_80159B3C();

void func_ovl25_800CB0B0(u8 *arg0) {
    AVec v;
    AVec b;
    u16 t;
    u16 u;

    v.vx = 0;
    v.vy = 0;
    v.vz = 0;
    b.vx = AF(arg0, s16, 0x234);
    b.vy = b.vz = AF(arg0, s16, 0x236);
    func_ovl25_800CB428(arg0, &v, &b);
    func_ovl25_800CB6A0(arg0, &v, &b, 1);
    func_ovl25_800CB6A0(arg0, &v, &b, 0);
    func_ovl25_800CB964(arg0, &v, &b);
    if (AF(arg0, s16, 0x234) != 0x2000) {
        t = AF(arg0, u16, 0x238) + 0x100;
        AF(arg0, s16, 0x238) = t;
        u = AF(arg0, u16, 0x234) + t;
        AF(arg0, s16, 0x234) = u;
        if ((s16) u > 0x2000) {
            func_80147324(0x8EB);
            AF(arg0, s16, 0x234) = 0x2000;
        }
    } else {
        t = AF(arg0, u16, 0x23A) + 0x200;
        AF(arg0, s16, 0x23A) = t;
        u = AF(arg0, u16, 0x236) + t;
        AF(arg0, s16, 0x236) = u;
        if ((s16) u > 0x2000) {
            AF(arg0, s16, 0x236) = 0x2000;
            AF(arg0, u8, 0x197)++;
        }
    }
}

void func_ovl25_800CB1CC(u8 *arg0) {
    AVec a;
    AVec b;

    if (func_80148800(arg0) & 0x20) {
        AF(arg0, s32, 0x238) = 0;
        AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
        func_80147324(0x991);
    }
    a.vx = 0;
    a.vy = 0;
    a.vz = 0;
    b.vx = AF(arg0, u16, 0x234);
    b.vy = b.vz = AF(arg0, u16, 0x236);
    func_ovl25_800CB428(arg0, &a, &b);
    func_ovl25_800CB6A0(arg0, &a, &b, 1);
    func_ovl25_800CB6A0(arg0, &a, &b, 0);
    func_ovl25_800CB964(arg0, &a, &b);
}

void func_ovl25_800CB288(u8 *arg0) {
    AVec v;
    AVec b;
    u16 t;
    u16 u;

    if (func_80146E98(arg0) == 0 || !(func_80148800(arg0) & 0x20)) {
        v.vx = 0;
        v.vy = 0;
        v.vz = 0;
        b.vx = AF(arg0, s16, 0x234);
        b.vy = b.vz = AF(arg0, s16, 0x236);
        func_ovl25_800CB428(arg0, &v, &b);
        func_ovl25_800CB6A0(arg0, &v, &b, 1);
        func_ovl25_800CB6A0(arg0, &v, &b, 0);
        func_ovl25_800CB964(arg0, &v, &b);
        if (AF(arg0, s16, 0x236) != 0x10) {
            t = AF(arg0, u16, 0x23A) + 0x100;
            AF(arg0, s16, 0x23A) = t;
            u = AF(arg0, u16, 0x236) - t;
            AF(arg0, s16, 0x236) = u;
            if ((s16) u < 0x10) {
                AF(arg0, s16, 0x236) = 0x10;
            }
        } else {
            t = AF(arg0, u16, 0x238) + 0x200;
            AF(arg0, s16, 0x238) = t;
            u = AF(arg0, u16, 0x234) - t;
            AF(arg0, s16, 0x234) = u;
            if ((s16) u < 0) {
                AF(arg0, s16, 0x234) = 0;
                goto end;
            }
        }
    } else {
end:
        func_80165A78(arg0);
        func_80159B3C(arg0);
    }
}

void func_ovl25_800CB3B4(void) {
    s32 i;
    AObj68 *p;

    D_801270C0 = 1;
    p = D_8011F9D0;
    for (i = 0; i < 0x14; i++) {
        if (p[i].type == 0x17) {
            func_80162CCC(&p[i]);
        }
    }
}

void func_ovl25_800CB428(u8 *arg0) {
    AVec v;
    s32 k;
    s32 f;
    s32 *p;
    u16 *c;

    k = func_80029204(4);
    f = 0;
    c = D_ovl25_800CC0FC;
    p = D_ovl25_800CBF7C;
loop1:
    if (*p != 0) {
        if (k == *p) {
            v.vx = *c & 0x1F;
            v.vy = (*c >> 5) & 0x1F;
            v.vz = (*c >> 10) & 0x1F;
            func_ovl25_800CB5C8(&v.vx, arg0 + 0xBE);
            f = 1;
            *c = v.vx | ((v.vz << 10) | (v.vy << 5)) | 0x8000;
        }
        c++;
        p++;
        if (f == 0) goto loop1;
    }
    f = 0;
    c = D_ovl25_800CC11C;
    p = D_ovl25_800CBFA8;
loop2:
    if (*p != 0) {
        if (k == *p) {
            v.vx = *c & 0x1F;
            v.vy = (*c >> 5) & 0x1F;
            v.vz = (*c >> 10) & 0x1F;
            func_ovl25_800CB5C8(&v.vx, arg0 + 0xBF);
            f = 1;
            *c = v.vx | ((v.vz << 10) | (v.vy << 5)) | 0x8000;
        }
        c++;
        p++;
        if (f == 0) goto loop2;
    }
    func_800183E0(&D_ovl25_800CBF3C);
    func_800183E0(&D_ovl25_800CBF5C);
}

void func_ovl25_800CB5C8(s16 *a, u8 *b) {
    s32 n = 0;

    if (*b == 0) {
        a[0]++;
        a[1]++;
        n = a[0] == 0x1F;
        a[2]++;
        if (a[1] == 0x1F) n++;
        if (a[2] == 0x1F) n++;
    } else {
        a[0]--;
        a[1]--;
        a[2]--;
        if (a[0] == 0) n = 1;
        if (a[1] == 0) n++;
        if (a[2] == 0) n++;
    }
    if (n != 0) *b ^= 1;
}

void func_ovl25_800CB6A0(u8 *arg0, u16 *p, AVec *rot, s32 k) {
    AMtx m;
    AVec v;
    ATPrim s;
    ATPrim *ps;
    u16 *t;
    u16 tp;

    t = D_ovl25_800CBFFC[k];
    func_80017DC4(rot, &m);
    ps = &s;
    v.vz = 0;
    v.vx = p[0] - 0x30;
    v.vy = p[1] - 0x20;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(ps);
    v.vx = p[0] + 0x30;
    v.vy = p[1] - 0x20;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[1]);
    v.vx = p[0] - 0x30;
    v.vy = p[1] + 0x20;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[2]);
    v.vx = p[0] + 0x30;
    v.vy = p[1] + 0x20;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[3]);
    s.uv[0] = t[0];
    s.uv[1] = t[1];
    s.uv[2] = t[2];
    s.uv[3] = t[1];
    s.uv[4] = t[0];
    s.uv[5] = t[3];
    s.uv[6] = t[2];
    s.uv[7] = t[3];
    tp = D_ovl25_800CBFF8[k];
    s.c.r = s.c.g = s.c.b = 0x80;
    s.code = 0x40000000;
    s.tp = tp;
    func_80016ED4(ps);
}

void func_ovl25_800CB964(u8 *arg0, u16 *p, AVec *rot) {
    AMtx m;
    AVec v;
    APrim s;
    APrim *ps;

    func_80017DC4(rot, &m);
    ps = &s;
    v.vz = 0;
    v.vx = p[0] - 0x38;
    v.vy = p[1] - 0x28;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(ps);
    v.vx = p[0] + 0x38;
    v.vy = p[1] - 0x28;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[1]);
    v.vx = p[0] - 0x38;
    v.vy = p[1] + 0x28;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[2]);
    v.vx = p[0] + 0x38;
    v.vy = p[1] + 0x28;
    gte_SetRotMatrix(&m);
    gte_ldv0(&v);
    gte_rtv0();
    gte_stsv(&s.v[3]);
    s.c[3].r = s.c[3].g = s.c[3].b = 0x80;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[1].r = s.c[1].g = s.c[1].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.code = 0x40000000;
    func_80017714(ps);
}

void func_ovl25_800CBBB8(u8 *arg0) {
    if (D_80078EC1 == 0x1A) {
        D_ovl25_800CC030[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl25_800CBEB8();
}

void func_ovl25_800CBC14(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_80146578(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CB00(temp_v0, (s32) ((AF(arg0, s32, 0x50) * 0xC) + &D_ovl25_800CC00C), 0x200, 0x100);
        AF(temp_v0, s16, 0x2C) = 1;
        AF(temp_v0, u8, 0x27) = 8;
        AF(temp_v0, u8, 0x25) = 0x20;
        AF(temp_v0, u8, 0x24) = 0x20;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x40000000);
        func_80146DE8(arg0, 0, -0x40000, 0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl25_800CBEB8(arg0);
}

void func_ovl25_800CBCD4(u8 *arg0) {
    s32 v[3];
    u8 *m;
    s32 n;
    s32 i;
    s32 c;
    s32 d;

    n = AF(arg0, s32, 0x54);
    m = AF(arg0, u8 *, 0x20);
    if (n == 0) {
        AF(m, s16, 0x14) = func_80012ABC(AF(m, s16, 0x14), AF(arg0, s16, 0x60), 0xA);
        func_80162F08(arg0, 0, 0xC00, 0);
        func_80013B64(AF(m, s16, 0x14), arg0 + 0x24, v);
        AF(arg0, s32, 0x10) = v[0];
        AF(arg0, s32, 0x14) = v[1];
        AF(arg0, s32, 0x18) = v[2];
        func_80162FC0(arg0);
        func_ovl25_800CBED8(arg0);
        c = AF(arg0, s32, 0x28) >= -0x20000;
        if (c) {
            func_80146DE8(arg0, 0, -0x40000, 0);
            d = ((rand() & 0x1F) << 6) - 0xC00;
            AF(arg0, u16, 0x60) = (AF(arg0, u16, 0x60) - d) & 0xFFF;
        }
        for (i = 15; i > 0; i--) {
            D_ovl25_800CC13C[i] = D_ovl25_800CC13C[i - 1];
        }
        D_ovl25_800CC13C[0].vx = AF(arg0, u16, 6);
        D_ovl25_800CC13C[0].vy = AF(arg0, u16, 0xA);
        D_ovl25_800CC13C[0].vz = AF(arg0, u16, 0xE);
        D_ovl25_800CC13C[0].pad = AF(m, u16, 0x14);
        return;
    }
    AF(arg0, u16, 6) = D_ovl25_800CC13C[(n - 1) * 2].vx;
    AF(arg0, u16, 0xA) = D_ovl25_800CC13C[(AF(arg0, s32, 0x54) - 1) * 2].vy;
    AF(arg0, u16, 0xE) = D_ovl25_800CC13C[(AF(arg0, s32, 0x54) - 1) * 2].vz;
    AF(m, u16, 0x14) = D_ovl25_800CC13C[(AF(arg0, s32, 0x54) - 1) * 2].pad;
}

void func_ovl25_800CBEB8(void) {
    func_80162CCC();
}

s32 func_ovl25_800CBED8(u8 *arg0) {
    s32 n = 0;
    s16 x;

    x = AF(arg0, s16, 6);
    if (x < -0x60) {
        AF(arg0, s16, 6) = -0x60;
        n++;
    } else if (x > 0x60) {
        AF(arg0, s16, 6) = 0x60;
        n++;
    }
    x = AF(arg0, s16, 0xA);
    if (x < -0x40) {
        AF(arg0, s16, 0xA) = -0x40;
        n++;
    } else if (x > 0x40) {
        AF(arg0, s16, 0xA) = 0x40;
        n++;
    }
    return n;
}
