#include "common.h"
#include "gte.h"
#include "psyq.h"

/* Five slots with an SPU RAM address each (0x10000, 0x14000, ...) */
typedef struct {
    /* 0x00 */ u8 pad0[2];
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ u8 pad6[0xA];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 pad11[3];
    /* 0x14 */ s32 spuAddr;
} SoundSlot; /* size 0x18 */

/* Sound channels: 0-7 and 8-15 are initialised differently */
typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ u8 pad2[2];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 pad8[2];
    /* 0x0A */ s16 unkA;
    /* 0x0C */ u8 padC[0x34];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 pad44[0xA];
    /* 0x4E */ u8 unk4E;
    /* 0x4F */ u8 pad4F;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51;
    /* 0x52 */ u8 pad52[2];
} SoundChan; /* size 0x54 */

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 unk4;
    /* 0x5 */ u8 unk5;
    /* 0x6 */ u8 pad6[0x42];
} SoundUnk48; /* size 0x48 */

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 pad4[8];
} SoundUnkC; /* size 0xC */

extern SpuCommonAttr g_SpuCommonAttr;
extern s32 D_800A4638;
extern s32 D_800A463C;
extern SoundSlot g_SoundSlot[5];
extern SoundChan g_SoundChan[16];
extern SoundUnk48 D_800A4C68[8];
extern SoundUnkC D_800A64B0[8];

extern s32 D_800A4E68;
extern s16 D_800A4E6C;
extern s16 D_800A4E6E;
extern u8 D_800A4E70;
extern u8 D_800A4E7A;
extern u16 D_800A4E8E;
extern u16 D_800A4EA2;
extern u16 D_800A4EE0;
extern s16 D_800A4EE4;
extern u8 D_800A4EE6;
extern s32 D_800A4EE8;
extern s32 D_800A4EEC;
extern s16 D_800A4EF0;
extern s16 D_800A4EF6;
extern s16 D_800A4EF8;
extern s16 D_800A4EFA;
extern s16 D_800A4EFC;
extern u8 D_800A4F16;
extern u8 D_800A4F17;
extern u8 D_800A4F18;
extern u8 D_800A4F19;
extern u8 D_800A4F1B;
extern u8 D_800A4F1C;
extern u8 D_800A4F1D;
extern u8 D_800A4F1E;
extern s16 D_800A4F20;
extern s16 D_800A4F22;
extern s32 D_800A4F24;
extern u8 D_800A46BA;
extern u8 D_800A46E4;
extern s32 D_800A2B98;
extern s32 D_800A2BA0;
extern s32 D_800C7D20;
extern s32 D_800C7D2C;

extern void func_8003A424(void);
extern void func_8002D1F0(s16 mode);
extern void func_80037D98(void);
extern void func_8002CC4C(void);
extern void func_8002FAE0(void);
extern void func_80037CC8(void);
extern void func_80034C24(void);
extern void func_80037004(void);


extern s32 D_800A4E7C;
extern u16 D_8006A990;
extern s32 D_800BA0F8;
extern s32 D_8007623C;
extern s32 D_80078F10[];
extern s32 D_8006AEE8;
extern s32 func_80036EE8();
extern s32 func_8002D4C8();
extern u8 D_800B9CF0[];
extern void func_80037D74();
extern s32 func_8002DC68();
extern void func_80031D70();
extern s16 D_800A46CC;
extern void func_8002C8BC();
extern u8 D_800638FE[];
extern s32 D_80078EEC;
extern u8 D_80063900[];
extern s32 D_80078EFC;
extern u8 D_800638F8[];
extern s32 D_80078EE4;
extern u8 D_8006AEF4;
extern u8 D_80076251[];

extern u8 D_800BA1B8[];
extern u8 D_800B9E92[];
extern void func_8002EC10(void);
extern void func_80036EB4();
extern void SsSetSerialVol(s32 a, s32 b, s32 c);

extern s32 D_800760E0;
extern void _SpuInit(s32 n);
extern u8 D_80063904[];
extern s32 D_80078EF4;
extern void func_80016714(void *p, s32 size);
extern u8 D_800BA2B8[];
extern void func_80031B7C();
extern void func_80034844();
extern s16 D_800760E8;
extern s16 D_800760EC;
extern void func_8002FA3C();

extern u8 D_80063902[];
extern s32 func_8002A738();
extern s32 func_8002A748();
extern s32 func_8002A4C8();
extern s32 func_8002A4D8();
extern s32 func_8002A9A8();
extern s32 func_8002A9B8();
extern s32 func_8002A27C();
extern s32 func_8002A28C();
extern void func_80036F18();
extern u8 D_800A4F1A;
extern s32 D_800C6D28;
extern void func_8001CF48();

extern u8 D_800B9ED2[];
extern u8 D_800B9ED3[];
extern void func_80016224(s32 a, s32 b);
extern s16 D_800AF7CE;
extern void func_8001D1C4();
extern void func_8001F9F8();
extern u8 D_800B9A11;
extern s32 D_80078EF0;
extern s32 func_8002A088(s16 a);
extern void func_8001B26C();
extern s32 D_800C6D10;
extern s32 D_800C6D34;

extern void GsGetLw(void *c, void *m);
extern void GsInitCoordinate2(void *super, void *c);
extern void func_8001C9D0();
extern s32 SpuRead(s32 a, s32 n);
extern void SpuSetTransferStartAddr(s32 a);
extern s32 D_80076218;
extern s32 func_8002DC68(u32 a, s32 b);
extern void func_80038308(s32 n);
extern s16 D_800A4E86;

extern s32 D_80078F00;
extern s32 D_80078EF8;
extern void CdMix(u8 *v);

extern u8 D_80063138[];
extern u8 D_80076243;
extern void func_80038908(u8 *p);
extern u8 D_800B9CD8[];

extern s32 CdReadyCallback();
extern s32 D_8006AEF0;
extern u8 D_80076110;
extern s32 func_8002A2B0();
extern void MulMatrix2(void *a, void *b);
extern void RotMatrix(void *r, void *m);

extern s16 D_800760E4;
extern void SsSetSerialAttr(s32 a, s32 b, s32 c);

extern void func_800385C0(s32 n);
extern s16 D_800A4E9A;
extern u8 *D_800762B0;
extern u8 D_800762B4;

extern s32 func_80037CD8();
extern s32 func_800301A4();

extern s32 D_8006AEF8;
extern s32 D_8006AEFC;
extern u8 D_8007620C;
extern u8 D_8006ADD8[];
extern s16 D_800A4E74;
extern s32 D_800A4ECC;
extern u16 D_800A4ED4;
extern u16 D_800A4ED6;
extern void SpuSetReverbModeParam();

extern void func_80036D58(s32 n);

typedef struct { u8 b[0x1A]; } E1A;
typedef struct { u8 pad0[6]; s16 idx; u8 pad8[0x48]; E1A *list; u8 pad54[6]; u8 on; u8 pad5B[5]; } Ch60;
extern Ch60 D_800C6DD0[];

extern s32 SpuIsTransferCompleted(s32 n);

extern u16 D_8006A9C8[];
extern u16 D_800A4EE2;
typedef struct { u8 pad0[0x20]; s32 unk20; s32 unk24; s32 unk28; s32 unk2C; s16 unk30; u8 pad32[5]; u8 unk37; u8 unk38; u8 pad39[0x1B]; } Chan54;

extern void func_8003350C(s32 k, s16 n);

extern void func_80030D80(void *c, s16 n);
extern void func_80034DFC(s16 n);
extern void SpuNSetVoiceAttr(s32 n, void *a);
extern s32 D_800A63E8;
extern void func_80031CC8(void);

extern void func_800383A4(s16 n);

extern u16 D_8006A9EC[];
extern u16 D_800A4E8C;

extern s32 CdGetToc(void *p);
extern s8 D_8006AEF5;
extern s32 D_8006AF00;
extern s32 D_8007610C;
extern s32 D_80076114;
extern u8 D_80076214;
extern s32 D_80078F20;
extern s32 D_800A5BC8;
extern u8 D_800A63E4;
extern s32 D_800A6544;
extern u8 D_800C7D30[];

extern void func_8002EA10(void);
extern u16 D_8006A9D4[];

extern void func_8003324C(u16 a);

extern void func_8002D320(void);
extern void func_8002D904(u32 n);
extern void func_8002E138(u32 a, s32 b, s32 c);
extern void func_80030F80(void);
extern void func_80031BE0(void);

extern u8 D_8006A96E;
extern s8 D_800760D0;
extern s8 D_800760D4;
extern s8 D_800760D8;
extern s8 D_800760DC;
extern void func_8002F80C();

extern s32 D_80078E30;
extern s32 D_80078E88;
extern s32 D_800BA1B4;
extern s16 D_800B9ECA;
extern void func_80027C10(void);
extern s32 func_8002A544();
extern void GsGetLw(void *coord, void *m);

extern void func_8002F620(void);

extern u16 D_8006A9E0[];

typedef struct { u8 b0, b1, b2, b3, b4, b5, b6, b7; s32 w[10]; } Req;
extern Req D_80076118[];

extern s32 D_800747E8;
extern u8 D_800AE648[];
extern u8 D_800A6588[];
extern s32 func_80029178(s32 n);
extern s32 func_800291B4(s32 a);
extern s32 func_80013228();
extern s32 func_800132BC();
extern s32 func_800133E4();
extern s32 SquareRoot0(s32 a);
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern s32 func_80016F18(u8 *a, s32 m, s32 k);
extern s32 func_80017294(u8 *a, s32 m);
extern s32 func_80016A7C();
extern s32 func_80034B98(void);
extern void GsSetLightMode(s32 m);

extern s32 func_80017778();
extern s32 func_80017930();
extern s32 func_80029124();
extern s32 func_800291A0();
extern void func_80029344();
extern s32 func_80013350();
extern s32 func_80013478();
extern void func_80014070();
extern void func_800128EC();
extern s32 func_80013154(s32 a, s32 b, s32 c);
extern void func_8001ABBC(s32 a, void *b, s32 c, s32 d, s32 e);
extern void func_8001B3C4(void);
extern void func_80014998(void);
extern u16 D_80078DDA;
extern u16 D_80078DCA;
extern s32 D_80078E90;
extern s8 D_800AF7C2;
extern s8 D_800AF7C3;
extern s8 D_800AF7C4;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } Mtx;

/* Controller state, one per port (0x4C bytes) */
typedef struct {
    /* 0x00 */ u8 pad0[4];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 data[0x44]; /* receive buffer handed to PadInitDirect */
} Pad;
extern Pad D_80078D98[2];
extern s32 D_800A4ED0;
extern s32 func_800173DC();
extern s32 func_8001751C();
extern void func_80016450(u8 a, s32 b);
extern void RotMatrixZYX(void *r, void *m);
extern s32 D_80078EE8;
typedef struct { s16 lo; s16 hi; } Pair;
extern Pair D_800C5328[]; /* 0x79 pairs; D_800C532A is the hi half */
extern u8 D_800C532A[];
extern u8 D_80078F28[];
extern s32 func_8002AA3C(void);
extern void ApplyMatrixLV();
extern s32 D_800747C8;
extern u8 D_800B9A64;
extern s32 D_800747C0;
extern u8 D_800747C4;
extern u8 D_800747C5;
extern void func_80028620();
extern s16 func_80012CB8(s16 a, s16 b, s16 c);
extern s16 func_80012B58(s16 a, s16 b, s16 c, s16 *p);

void func_8002C8BC(void) {
    s16 v = -1;
    u32 i;
    for (i = 0; i < 0x1E4; i += 4) {
        *(s16 *)((u8 *)D_800C5328 + i) = v;
        *(s16 *)(D_800C532A + i) = v;
    }
}

/*
 * Sound init: SPU master/CD volume and reverb, then default state for the
 * sound driver (5 SPU RAM slots, 16 channels, misc. mixer variables).
 */
void InitSound(void)
{
    SpuEnv env;
    s32 i;
    s32 voice;
    SoundChan *ch;

    func_8003A424();
    SsInit();

    g_SpuCommonAttr.mask = 0x23CF;
    g_SpuCommonAttr.mvol.left = 0x3FFF;
    g_SpuCommonAttr.mvol.right = 0x3FFF;
    g_SpuCommonAttr.cd.volume.left = 0x3FFF;
    g_SpuCommonAttr.cd.volume.right = 0x3FFF;
    g_SpuCommonAttr.mvolmode.left = 0;
    g_SpuCommonAttr.mvolmode.right = 0;
    g_SpuCommonAttr.cd.reverb = 0;
    g_SpuCommonAttr.cd.mix = 1;
    g_SpuCommonAttr.ext.mix = 0;
    SpuSetCommonAttr(&g_SpuCommonAttr);
    SpuReserveReverbWorkArea(1);
    func_8002D1F0(4);
    SpuSetReverb(1);
    func_80037D98();

    D_800A4E68 = 0x3C;
    D_800A4E6C = 0x2F;
    D_800A4E6E = 0x2F;
    D_800A4E70 = 1;
    D_800A4F18 = 1;
    D_800A4F19 = 1;
    D_800A4EF6 = 1;
    D_800A463C = 0x1010;
    D_800A4638 = 0;
    D_800A4E7A = 0;
    D_800A46E4 = 0;
    g_SoundSlot[0].spuAddr = 0x10000;
    g_SoundSlot[1].spuAddr = 0x14000;
    g_SoundSlot[2].spuAddr = 0x18000;
    g_SoundSlot[3].spuAddr = 0x39F00;

    for (i = 0; i < 8; i++) {
        D_800A64B0[i].unk0 = 0;
    }
    for (i = 0; i < 5; i++) {
        g_SoundSlot[i].unk10 = 1;
        g_SoundSlot[i].unk4 = 0;
        g_SoundSlot[i].unk2 = -1;
    }
    for (i = 0; i < 8; i++) {
        g_SoundChan[i].unk0 = 0;
    }
    voice = 16;
    ch = &g_SoundChan[8];
    for (i = 0; i < 8; i++, voice++, ch++) {
        ch->unk51 = i;
        ch->unkA = voice;
        ch->unk4E = 0;
        ch->unk4 = 0;
        ch->unk40 = 0;
        ch->unk50 = 0;
        D_800A4C68[i].unk0 = voice;
        D_800A4C68[i].unk4 = 0;
        D_800A4C68[i].unk5 = 0;
    }
    func_8002CC4C();

    D_800A4EFA = 0x7F;
    D_800A4EF8 = 0x7F;
    D_800A4F1B = 1;
    D_800A46BA = 0;
    D_800A2B98 = 0;
    D_800C7D20 = 0;
    D_800C7D2C = 0;
    D_800A2BA0 = 0;
    D_800A4F17 = 0;
    D_800A4E8E = 0;
    D_800A4EA2 = 0;
    D_800A4EF0 = 0;
    D_800A4EE8 = 0;
    D_800A4EFC = 0;
    D_800A4F20 = 0;
    D_800A4F22 = 0;
    D_800A4F1D = 0;
    D_800A4EEC = 0;
    D_800A4EE6 = 0;
    D_800A4EE0 = 0x4000;
    D_800A4EE4 = 0x4000;
    D_800A4F24 = 0;
    D_800A4F16 = 0;
    func_8002FAE0();
    func_80037CC8();
    SpuSetReverbVoice(0, 0xFFFFFF);
    env.mask = 1;
    env.queueing = 0;
    SpuSetEnv(&env);
    D_800A4F1C = 0;
    D_800A4F1E = 0;
    func_80034C24();
    func_80037004();
}

typedef struct {
    s16 flag;
    u8 pad2[14];
} Ent10;
extern Ent10 D_800B97D8[];
extern s32 D_800747F4;
extern s32 D_800AE6F0;
extern s32 D_800AE6F8;
extern s32 D_800AE6FC;
extern s32 D_800AE700;
extern s32 D_800AE70C;
extern s32 D_800AE728;
extern s32 D_800AE748;
extern s32 D_800AE74C;
extern s8 D_800AE798;
extern s8 D_800AE799;
extern u8 *D_8006A970[];
extern s32 D_80065504[];
typedef struct { s32 w[9]; } Blk24;
extern Blk24 D_80079204;
extern s32 func_80028DBC(s32 a);
extern s32 func_80028E00(s32 a);
extern s32 func_80028FDC(s32 a);
extern s32 func_80029020(s32 a);
extern s32 func_8005C358();
extern u16 func_80014ED4(s32 n);
extern u16 func_80015018(s32 n);
extern void GsMapModelingData(s32 p);
extern void func_80018FC8(void);
extern void func_8001C9D0(u8 *a);
extern void func_8002906C(void);
extern void func_80029094(void);
extern void func_80029218(void);
extern void func_8001903C(void);
extern void func_8001B324(void);
extern void func_80029044(void);
extern s16 func_80012E6C(s32 a, s32 b, s16 n, s16 m, s16 *f);
extern s16 func_80012FC8(s16 a, s16 b, s16 c, s16 d);
extern s32 func_8001923C(s32 n);
extern s32 rand(void);
extern void func_8002992C(s32 a);

extern u8 D_800C6E2A[];
typedef struct { u8 flag; } Flag8;
extern Flag8 D_80076242;
extern void func_800373D0(void);

extern s32 D_80074808;
extern u16 D_800A4E8A;
extern s16 D_800A4EF4;
extern s16 D_800A46B8;
extern u8 D_80075AC0[];
extern s16 D_8006A9BC[];
extern u16 D_8006A9B0[];
extern Mtx D_800AF648;
extern s32 rsin(s32 a);
extern s32 rcos(s32 a);
extern s32 ratan2(s32 y, s32 x);
extern void SsVabClose(s32 id);
extern void SetBackColor(s32 r, s32 g, s32 b);
extern void CompMatrix();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern void func_8002EE90(void);
extern void func_8003819C(s32 i, s16 a, s16 b, s16 c);

extern s32 func_800381E4(s32 a, s32 b);

extern void func_80034650(u8 *a, s32 n);
extern void func_80034A54(u8 *p);

extern u8 D_800C6E2E[];
extern void SpuSetVoiceRR(s32 ch, s32 rr);

extern s32 func_8002FF0C(s32 a, s32 b);
extern void func_8002D240(s16 n);

void func_8002CC4C(void) {
    s32 i;
    s32 k;
    u8 **pp;
    u8 *q;
    pp = D_8006A970;
    for (i = 0; i < 4; i++, pp++) {
        q = *pp;
        for (k = 0; k < D_80065504[i]; ) {
            k++;
            q[0xA] = 0;
            q += 0xC;
        }
    }
}

s32 func_8002CCB4(void) {
    return func_8002D4C8(2, 0);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002CCD8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002CDD8);

void func_8002CFE4(void) {
    register s16 *p = &D_800A4EFC;
    if (*p != 0) {
        *p = *p - 1;
    }
    func_80030F80();
    func_8002D320();
    func_80031BE0();
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002D034);

void func_8002D1F0(s16 mode) {
    register s32 *r;
    r = &D_800A4ECC;
    *r = 1;
    D_800A4ED0 = mode;
    D_800A4ED4 = 0;
    D_800A4ED6 = 0;
    SpuSetReverbModeParam(r);
}

void func_8002D240(s16 n) {
    u16 v;
    register s32 *r;
    v = *(u16 *)(D_8006ADD8 + n * 2);
    r = &D_800A4ECC;
    *r = 6;
    D_800A4E74 = n;
    D_800A4ED4 = v;
    D_800A4ED6 = v;
    SpuSetReverbModeParam(r, r);
}

void func_8002D29C(void) {
    register s32 *p = &g_SoundSlot[4].spuAddr;
    s32 v = *p;
    SsSetSerialVol(0, (v * D_800A4EF4) >> 16, (v * D_800A4EF4) >> 16);
    v -= D_800A46B8;
    if (v <= 0) {
        D_800A46BA = 0;
        func_8002EE90();
        v = 0;
    }
    *p = v;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002D320);

u8 func_8002D4B8(void) {
    return D_800A46BA;
}

s32 func_8002D4C8(s32 id, s32 b) {
    u32 k = id & 0xFFFF;
    u8 *q;
    D_800A4F17 = 1;
    if (k < 0x80) {
        func_8002E138(k, b & 0xFFFF, 0);
    } else if (k >= 0x100) {
        if (k < 0x400) {
            func_8002D904(k);
        } else {
            func_8002DC68(k, b & 0xFFFF);
        }
    }
    q = &D_800A4F17;
    *q = D_800A4F18;
    if (D_800A4F18 != 0) {
        if (D_800A4EFC != 0) {
            D_800A4EFC -= 1;
        }
        func_80030F80();
        func_8002D320();
        func_80031BE0();
        D_800A4F18 = 0;
        *q = 0;
    }
}

void func_8002D59C(u16 id, u16 b, u16 c) {
    register u8 *f;
    u8 v;
    D_800A4F17 = 1;
    if (id < 0x80) {
        func_8002E138(id, b, c);
    } else if (id >= 0x100) {
        if (id < 0x400) {
            func_8002D904(id);
        } else {
            func_8002DC68(id | (c << 16), b);
        }
    }
    f = &D_800A4F17;
    v = D_800A4F18;
    *f = v;
    if (v != 0) {
        if (D_800A4EFC != 0) {
            D_800A4EFC = D_800A4EFC - 1;
        }
        func_80030F80();
        func_8002D320();
        func_80031BE0();
        D_800A4F18 = 0;
        *f = 0;
    }
}

s32 func_8002D678(s32 a, s32 b) {
    s32 r;
    u32 id = a & 0xFFFF;
    D_800A4F17 = 1;
    if (id >= 0x400) {
        r = func_8002DC68(id, b & 0xFFFF);
        if (r != 0) {
            r |= id << 16;
        }
        return r;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002D6D8);

void func_8002D7F4(void) {
}

void func_8002D7FC(s32 a) {
    D_800A4E7C = a;
}

u16 func_8002D80C(void) {
    if (D_800A4E8E & 1) {
        return D_8006A990;
    }
    return 0;
}

void func_8002D834(void) {
    D_8006A990 = 0;
}

s32 func_8002D844(s32 v) {
    return D_800760E0 = v;
}

s16 func_8002D858(void) {
    D_800760E4 = 0x64;
    SsSetSerialAttr(0, 1, 0);
    SsSetSerialVol(0, D_800760E4, D_800760E4);
    return D_800760E4;
}

s32 func_8002D8A8(void) {
    D_800760EC = 6;
    D_800A4F24 = (s32)func_8002FA3C;
    D_800760E8 = 0;
    return 0x10;
}

s32 func_8002D8D4(void) {
    D_800A4F24 = 0;
    SsSetSerialVol(0, 0, 0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002D904);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002DC68);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002DF80);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002E138);

void func_8002E5BC(void) {
    u8 v[4];
    v[0] = 0x5A;
    v[1] = 0x5A;
    v[2] = 0x5A;
    v[3] = 0x5A;
    CdMix(v);
    D_800A4F19 = 0;
}

void func_8002E5F8(void) {
    u8 v[4];
    v[0] = 0x80;
    v[1] = 0;
    v[2] = 0x80;
    v[3] = 0;
    CdMix(v);
    D_800A4F19 = 1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002E638);

void func_8002E700(u16 n) {
    if (D_800A4E8E & 4) {
        if ((func_8003836C(D_800A4E86) << 16) != 0) {
            u16 k = n;
            if (k >= 5) {
                k = 4;
            }
            func_8003819C(D_800A4E86, 0, 0, D_8006A9BC[k]);
            D_800A4E8A = D_8006A9B0[k];
        }
    }
}

void func_8002E79C(s32 n) {
    register u8 *p = &D_800A4EE6;
    u8 f = *p;
    u8 g;
    u16 t;
    if (!(f & 2)) {
        g = f | 2;
        *p = g;
        g &= 4; if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE0 = 0x4000;
            D_800A4EE4 = 0x2FFF;
            t = D_8006A9C8[n & 0xFFFF]; *p = f | 3; D_800A4EE2 = t;
        }
    }
}

void func_8002E818(s32 n) {
    register u8 *p;
    u8 f;
    u8 g;
    u16 t;
    if ((D_800A4E8E & 4) && D_800A4E8C == 0x3E) {
        func_8002EA10();
    }
    p = &D_800A4EE6;
    f = *p;
    if (!(f & 4)) {
        g = f | 4;
        *p = g;
        g &= 2;
        if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE0 = 0x4000;
            D_800A4EE4 = 0x2000;
            t = D_8006A9D4[n & 0xFFFF];
            *p = f | 5;
            D_800A4EE2 = t;
        }
    }
}

void func_8002E8DC(s32 n) {
    register u8 *p = &D_800A4EE6;
    u8 f = *p;
    u16 t;
    if (f & 2) {
        *p = f & 0xFD;
        if (!(f & 4)) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE4 = 0x4000;
            t = D_8006A9E0[n & 0xFFFF]; *p = (f & 0xFD) | 1; D_800A4EE2 = t;
        }
    }
}

void func_8002E94C(s32 n) {
    register u8 *p;
    u8 f;
    u8 g;
    u16 t;
    if ((D_800A4E8E & 4) && D_800A4E8C == 0x3E && (D_800A4E8E & 0x10)) {
        func_8002EAB0(D_800A4E8E);
    }
    p = &D_800A4EE6;
    f = *p;
    if (f & 4) {
        g = f & 0xFB;
        *p = g;
        g &= 2; if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE4 = 0x4000;
            t = D_8006A9EC[n & 0xFFFF]; *p = (f & 0xFB) | 1; D_800A4EE2 = t;
        }
    }
}

void func_8002EA10(void) {
    register u16 *f = &D_800A4E8E;
    if (*f & 4) {
        if ((func_8003836C(D_800A4E86) << 16) != 0) {
            if (func_800381E4(D_800A4E86, 0) != 0) {
                func_8002EC10();
            } else {
                func_800383A4(D_800A4E86);
                *f |= 0x10;
            }
        }
    }
}

void func_8002EAB0(u16 flags) {
    register u16 *f = &D_800A4E8E;
    if (*f & 0x10) {
        func_80038308(D_800A4E86);
        *f = (*f | 9) & 0xFFEF;
    }
}

void func_8002EB10(void) {
    if ((D_800A4E8E & 4) && (func_8003836C(D_800A4E86) << 16) != 0) {
        if (func_800381E4(D_800A4E86, 0) != 0) {
            func_8002EC10();
        } else {
            func_800383A4(D_800A4E86);
            D_800A4E8E |= 0x10;
        }
    }
    func_80036F18();
}

void func_8002EBAC(void) {
    func_80036D58(0);
    if (D_800A4E8E & 0x10) {
        func_80038308(D_800A4E86);
        D_800A4E8E = (D_800A4E8E | 9) & 0xFFEF;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002EC10);

void func_8002ED90(void) {
    register u16 *f = &D_800A4EA2;
    func_8002EC10();
    if (*f & 4) {
        func_800385C0(D_800A4E9A);
        *f = 0;
    }
}

void func_8002EDE4(void) {
    func_8002EE90();
    func_80031CC8();
    func_8002EC10();
    if (D_800A4EA2 & 4) {
        func_800385C0(D_800A4E9A);
        D_800A4EA2 = 0;
    }
    D_800A4EF6 = 1;
    D_800A4EE6 &= 0xF9;
}

void func_8002EE64(void) {
    u8 c = 0x88;
    u8 *q = &c;
    func_80036EB4();
    func_8002EC10();
}

void func_8002EE90(void) {
    func_80036EE8();
    func_8002EC10();
}

s32 func_8002EEB8(void) {
    return func_80036EE8();
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002EED8);

void func_8002EFD0(void) {
    func_80034844();
    func_80031B7C();
}

void func_8002EFF8(s32 mode, s32 bits) {
    if (mode == 1) {
        D_800A2B98 &= ~bits;
        D_800C7D20 |= bits;
        return;
    }
    D_800C7D20 &= ~bits;
    D_800A2B98 |= bits;
}

void func_8002F064(s32 which, u32 bits) {
    if (which == 1) {
        D_800A2BA0 &= ~bits;
        D_800C7D2C |= bits;
    } else {
        D_800C7D2C &= ~bits;
        D_800A2BA0 |= bits;
    }
}

void func_8002F0D0(void) {
    s32 i;
    for (i = 0x54; i >= 0; i -= 0xC) {
        *(s32 *)((u8 *)D_800A64B0 + i) = 0;
    }
}

SoundUnkC *func_8002F0F4(void) {
    s32 i;
    SoundUnkC *p = D_800A64B0;
    for (i = 0; i < 8; i++, p++) {
        if (p->unk0 == 0) {
            return p;
        }
    }
    return 0;
}

void func_8002F12C(u8 *a) {
    func_8002DC68(*(s32 *)(a + 0x4), 0);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002F150);

void func_8002F1CC(s32 n) {
    u8 *q = n * 0x54 + ((u8 *)g_SoundSlot + 0x54);
    s32 i = 0;
    Chan54 *arr = (Chan54 *)((u8 *)g_SoundSlot + 0x54 + 0x2F4);
    do {
        if ((q + i)[0xE] != 0) {
            arr[i].unk30 = 0; arr[i].unk38 = 0; arr[i].unk2C = 0x18; arr[i].unk28 = arr[i].unk20 + 0x100; arr[i].unk37 |= 1;
        }
        i++;
    } while (i < 8);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002F248);

s32 func_8002F4E4(u8 *p) {
    u8 *tbl;
    s32 n;
    s32 idx;
    u16 v;
    u8 *row;
    if (D_800A4EF0 == 0) {
        return 0;
    }
    tbl = (u8 *)D_800A4EE8;
    if (tbl == 0) {
        return 0;
    }
    n = *(s16 *)&g_SoundSlot[p[2]];
    if (n < *(s16 *)(tbl + 4)) {
        return 0;
    }
    n -= *(s16 *)(tbl + 4);
    if (n >= *(s16 *)(tbl + 2)) {
        return 0;
    }
    idx = *(s16 *)(*(u8 **)(tbl + 8) + n * 2);
    if (idx == 0) {
        return 0;
    }
    if (p[3] < *(s16 *)(tbl + 0xC)) {
        idx--;
        row = *(u8 **)(tbl + 0x10) + p[3] * (*(s16 *)(tbl + 0xE) << 1);
        v = *(u16 *)(idx * 2 + (s32)row);
        if (v == 0x7F) {
            return 0;
        }
        return v;
    }
    return 0;
}

void func_8002F5C8(u16 *p) {
    register s16 *f = &D_800A4EF0;
    if (*f) {
        func_8002F620();
    }
    *f = *p;
    D_800A4EE8 = (s32)p;
}

void func_8002F620(void) {
    D_800A4EF0 = 0;
    func_80031D70();
}

s32 func_8002F648(void) {
    return D_800A4EF0;
}

s16 func_8002F658(void) {
    if (((u8 *)g_SoundSlot)[0x58] != 0) {
        return -1;
    }
    return *(s16 *)((u8 *)g_SoundSlot + 0x48);
}

void func_8002F67C(void) {
    if (g_SoundSlot[3].unk10 == 0) {
        *(s16 *)((u8 *)D_800C5328 + *(s16 *)g_SoundSlot[3].pad0 * 4) = -1;
        g_SoundSlot[3].unk10 = 1;
    }
    if (g_SoundSlot[4].unk2 >= 0) {
        SsVabClose(g_SoundSlot[4].unk2);
        g_SoundSlot[4].unk2 = -1;
    }
    if (g_SoundSlot[4].unk10 == 0) {
        g_SoundSlot[4].unk10 = 1;
    }
}

void func_8002F714(s32 n, s32 v) {
    switch (n & 0xFFFF) {
    case 0:
        D_800760D0 = v & 0x7F;
        D_800A4F24 = (s32)func_8002F80C;
        D_8006A96E |= 1;
        break;
    case 1:
        D_800760D4 = v & 0x7F;
        D_800A4F24 = (s32)func_8002F80C;
        D_8006A96E |= 2;
        break;
    case 2:
        D_800760D8 = v & 0x7F;
        D_800A4F24 = (s32)func_8002F80C;
        D_8006A96E |= 4;
        break;
    case 3:
        D_800760DC = v & 0x7F;
        D_800A4F24 = (s32)func_8002F80C;
        D_8006A96E |= 8;
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002F80C);

void func_8002FA3C(void) {
    s16 v;
    D_800760E8++;
    if ((s16)D_800760E8 < 0x10) {
        if (D_800760E4 > D_800760EC) {
            v = D_800760E4 - D_800760EC;
            D_800760E4 = v;
            SsSetSerialVol(0, v, v);
            return;
        }
    }
    SsSetSerialVol(0, 0, 0);
    D_800A4F24 = 0;
}

void func_8002FAE0(void) {
    D_800A46CC = 0;
    func_8002C8BC();
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002FB08);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002FC64);

s32 func_8002FD14(s32 a, s32 b) {
    if (D_800A46CC == 0) {
        func_80037D74();
        if (SpuIsTransferCompleted(0) != 0) {
            D_8006AEF4 &= 0xFE;
            b = func_8002FF0C(a, b);
        } else {
            b = 0;
        }
    } else {
        b = func_8002FF0C(a, b);
    }
    if (b != 0) {
        if (a == 0x1A) {
            func_8002D240(0x28);
        }
        return b;
    }
    return 0;
}

void func_8002FDC8(void) {
    func_80037D74();
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002FDE8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8002FF0C);

s32 func_800301A4(void) {
    D_800A46CC = 0;
    D_8006AEF4 &= 0xFD;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800301C8);

s32 func_80030470(void) {
    u16 *c;
    if (func_80037CD8(func_800301A4) != 0) {
        c = (u16 *)&D_800A46CC;
        *c += 1;
        D_8006AEF4 |= 2;
    }
    return 0;
}

s32 func_800304C8(void) {
    u16 *c;
    if (D_8006AEF4 & 1) {
        if (SpuIsTransferCompleted(0) != 0) {
            D_8006AEF4 &= 0xFE;
        }
    } else {
        c = (u16 *)&D_800A46CC;
        *c += 1;
    }
    return 0;
}

extern s16 D_800A46CE;
extern s32 D_800A46C0;
extern s32 D_800A46C4;
extern s32 SsVabTransBodyPartly(void *addr, s32 size, s32 id);

s32 func_80030538(void) {
    s32 i = D_800A46CE;
    u16 *cnt;
    s16 r = SsVabTransBodyPartly((u8 *)D_800A46C0 + D_800A46C4, 0x8000, g_SoundSlot[i].unk2);
    switch (r) {
    case -2:
        D_800A46C4 += 0x8000;
        D_800A46CC++;
        break;
    case -1:
        g_SoundSlot[i].unk10 = 1;
        D_800A46CC += 2;
        return 1;
    default:
        cnt = (u16 *)&D_800A46CC;
        *cnt += 2;
        break;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80030634);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80030730);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80030A14);

s32 func_80030CA4(u16 prio) {
    struct { s32 idx; u8 *ch; u16 prio; u8 found; } b;
    u8 *ch = (u8 *)g_SoundChan + 0x2A0;
    s32 i;
    b.found = 0;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u8 *q = ch + 8;
        if (q[0x46] == 0) {
            return i + 1;
        }
        if (b.found == 0) {
            b.prio = *(u16 *)q;
            b.found = 1;
            b.idx = i;
            b.ch = ch;
        } else if (*(u16 *)q < b.prio) {
            b.prio = *(u16 *)q;
            b.idx = i;
            b.ch = ch;
        }
    }
    if (prio < b.prio) {
        return 0;
    }
    func_80030D80(b.ch, 1);
    ch[0x4E] = 0;
    return ++b.idx;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80030D80);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80030F80);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800314DC);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800316F8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80031988);

void func_80031A98(void) {
    s32 i;
    u8 *ch = (u8 *)g_SoundChan + 0x2A0;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u8 *q = ch + 0xE;
        s32 v;
        if (q[0x40] != 0) {
            if (q[0x28] != 0) {
                v = D_800C5328[*(u16 *)q].hi;
            } else if (*(u16 *)q & 0x80) {
                if (g_SoundSlot[4].unk10 == 0) {
                    continue;
                }
                func_80030D80(ch, 1);
                continue;
            } else {
                v = D_800C5328[*(u16 *)q].lo;
            }
            if (v < 0) {
                func_80030D80(ch, 1);
            }
        }
    }
}

void func_80031B7C(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *p = (u8 *)g_SoundChan + 0x2EA + i * 0x54;
        if (p[4] != 0 && p[2] == 0 && p[3] != 0) {
            p[2] = 1;
            *(s16 *)p = 0x7FFF;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80031BE0);

void func_80031CC8(void) {
    u8 *ch = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, ch += 0x54) {
        switch (*(u16 *)ch & 0x3F) {
        case 1:
            if (ch[0xA] != 0) {
                func_8003350C(i, 1);
            }
            break;
        case 5:
            func_80034650(ch, 0);
            break;
        }
    }
}

void func_80031D70(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if ((*(u16 *)c & 0x3F) == 1 && c[0xA] != 0) {
            func_8003350C(i, 0);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void func_80031DEC(void) {
    u8 *ch = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u16 t = *(u16 *)ch;
        switch (t & 0x3F) {
        case 1:
            if (!(t & 0x40)) {
                func_8003350C(i, 1);
            }
            break;
        case 5:
            func_80034A54(ch);
            break;
        }
    }
}

void func_80031E94(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    s32 t;
    do {
        t = *(u16 *)c & 0x3F;
        if (t != 1 && t == 5) {
            func_80034A9C(c);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void func_80031F14(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    u16 wv;
    u16 t;
    do {
        wv = *(u16 *)c;
        t = wv & 0x3F;
        switch (t) {
        case 1:
            if (c[0xA] != 0 && !(wv & 0x40)) { func_8003350C(i, 1); }
            break;
        case 5:
            func_80034AE0(c);
            break;
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void func_80031FC8(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    s32 t;
    do {
        t = *(u16 *)c & 0x3F;
        if (t != 1 && t == 5) {
            func_80034B0C(c);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80032048);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800322A8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800324A4);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80032774);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80032A74);

s32 func_8003310C(s32 prio) {
    struct { u8 found; s32 best; u16 min; } s;
    u8 *c; s32 i; c = g_SoundChan; i = 0;
    s.found = 0;
    do {
        if (*(u16 *)c == 0) {
            return i + 1;
        }
        if (s.found == 0) {
            s.found = 1;
            s.min = *(u16 *)(c + 2);
            s.best = i;
        } else if (*(u16 *)(c + 2) < s.min) {
            s.min = *(u16 *)(c + 2);
            s.best = i;
        }
        i++;
        c += 0x54;
    } while (i < 8);
    if ((u32)(prio & 0xFFFF) < s.min) {
        return 0;
    }
    func_8003324C(s.best);
    return s.best + 1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800331D4);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003324C);

void func_80033324(s32 k, s32 i) {
    u8 *c = (u8 *)&g_SoundChan[i];
    if ((*(u16 *)c & 0x3F) == 1) {
        (c + k)[0xE] = 0;
        if (--*(u16 *)(c + 0xC) == 0 && c[0xA] != 5) {
            c[0xA] = 0;
            *(u16 *)c = 0;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80033398);

void func_8003350C(s32 k, s16 n) {
    SoundChan *c = &g_SoundChan[k];
    s32 i = 0;
    do {
        SoundChan *v = &g_SoundChan[8] + i;
        if (((u8 *)c + i)[0xE] != 0) { ((u8 *)c + i)[0xE] = 0;
            v->unk40 = 0;
            if (v->unk4E != 0) {
                func_80030D80(v, n);
            }
        }
        i++;
    } while (i < 8);
    c->unk0 = 0;
}

void func_800335B8(s32 ch, u16 cmd) {
    u8 *c = (u8 *)g_SoundChan + ch * 0x54;
    u16 c0 = cmd;
    u8 *q;
    s32 n;
    s32 i;
    if ((*(u16 *)c & 0x3F) == 1) {
        if (cmd & 0x1000) {
            n = *(u16 *)(c + 0xC);
            for (i = 0; i < 8; i++) {
                if (n == 0) {
                    break;
                }
                if ((c + i)[0xE] != 0) {
                    q = (u8 *)&g_SoundChan[8 + i];
                    n--;
                    *(s16 *)(q + 0x48) = cmd & 0x7F;
                    q[0x4F] = 1;
                }
            }
        } else if (cmd & 0x2000) {
            n = *(u16 *)(c + 0xC);
            for (i = 0; i < 8; i++) {
                if (n == 0) {
                    break;
                }
                if ((c + i)[0xE] != 0) {
                    q = (u8 *)&g_SoundChan[8 + i];
                    if (q[0x35] != 0) {
                        q[0x53] = c0 & 0x7F;
                    }
                    n--;
                }
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800336A8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003388C);

void func_800342E8(s32 a, s32 b) {
    u8 *p = &((u8 *)g_SoundChan)[b * 0x54];
    p += a;
    p[0x3A] = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80034314);

void func_80034650(u8 *a, s32 n) {
    s32 i = 0;
    u8 v = n;
    Chan54 *arr = (Chan54 *)((u8 *)g_SoundChan + 0x2A0);
    do {
        if ((a + i)[0x3A] != 0) {
            func_80030D80((Chan54 *)((u8 *)g_SoundChan + 0x2A0) + i, v);
        }
        i++;
    } while (i < 8);
    *(s16 *)a = 0;
}

void func_800346D0(s32 a) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i;
    s32 j;
    for (i = 0; i < 8; i++, c += 0x54) {
        if (*(u16 *)c != 5) {
            continue;
        }
        if (*(u16 *)(c + 4) != (s16)a) {
            continue;
        }
        if ((a >> 16) != 0 && (a >> 16) != *(u16 *)(c + 6)) {
            continue;
        }
        for (j = 0; j < 8; j++) {
            if ((c + j)[0x3A] != 0) {
                func_80030D80(&g_SoundChan[8 + j], 0);
            }
        }
        *(u16 *)c = 0;
    }
}

void func_800347C8(s32 key) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if (*(u16 *)c == 5 && *(u16 *)(c + 4) == (s16)key && (!(key >> 16) || (key >> 16) == *(u16 *)(c + 6))) {
            c[0x16] = 1;
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void func_80034844(void) {
    u8 *s = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, s += 0x54) {
        if (*(u16 *)s == 5 && !(s[0x37] & 2)) {
            s[0x16] = 1;
            *(u16 *)(s + 0x1A) = 0x220;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800348A8);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003491C);

void func_80034A54(u8 *p) {
    u8 old;
    if (p[0x37] & 1) {
        u8 *q = &D_800A4F17;
        old = *q;
        *q = 1;
        p[0x32] = 1;
        *(s16 *)(p + 0x2E) = 0x3FF;
        *(s16 *)(p + 0x30) = 0xFFF;
        *q = old;
    }
}

void func_80034A9C(u8 *p) {
    u8 old;
    if (*(u16 *)(p + 0x30) != 0x3FFF) {
        u8 *q = &D_800A4F17;
        old = *q;
        *q = 1;
        p[0x32] = 1;
        *(s16 *)(p + 0x2E) = 0x3FF;
        *(u16 *)(p + 0x30) = 0x3FFF;
        *q = old;
    }
}

void func_80034AE0(u8 *p) {
    register u8 *q = &D_800A4F17;
    u8 old = *q;
    *q = 1;
    p[0x2A] = 1;
    *(s16 *)(p + 0x26) = 0x3FF;
    *(s16 *)(p + 0x28) = 0;
    *q = old;
}

void func_80034B0C(u8 *p) {
    register u8 *q = &D_800A4F17;
    u8 old = *q;
    *q = 1;
    p[0x2A] = 1;
    *(s16 *)(p + 0x26) = 0x3FF;
    *(s16 *)(p + 0x28) = 0x3FFF;
    *q = old;
}

s32 func_80034B3C(void) {
    s32 r = 0;
    if (D_8006AEF8 != D_8006AEFC) {
        if (D_8007620C & 0x80) {
            return 2;
        }
        r = 1;
        if (D_8007620C & 0x20) {
            return 4;
        }
        return r;
    }
    D_8007620C = 0;
    return r;
}

s32 func_80034B98(void) {
    s32 r = 0;
    if (D_8006AEF8 != D_8006AEFC) {
        if (D_80076214 == 0) {
            if (D_8007620C & 0x80) {
                return 2;
            }
            r = 1;
            if (D_8007620C & 0x20) {
                return 4;
            }
            return r;
        }
    } else {
        r = D_80076214;
        D_8007620C = 0;
        if (r == 0) {
            return r;
        }
    }
    D_80076214 = 0;
    return 8;
}

void func_80034C24(void) {
    s32 k = 4;
    s32 *p = &D_80078F20;
    D_8006AEF8 = 0;
    D_8006AEFC = 0;
    D_8006AEF4 = 0;
    D_800A63E4 = 0;
    D_8006AEF0 = 0;
    D_80076110 = 0;
    D_8006AF00 = 0;
    D_800A6544 = 0;
    D_8006AEE8 = 0;
    D_800A63E8 = 0;
    D_8007610C = 0;
    D_8006AEF5 = 0;
    D_8007620C = 0;
    D_80076114 = 0;
    D_80076214 = 0;
    do {
        *p = 0;
        k--;
        p--;
    } while (k >= 0);
    D_800A5BC8 = CdGetToc(D_800C7D30);
    D_800C6D28 = 0;
}

s32 func_80034CF0(Req *src) {
    s32 next;
    s8 old;
    s32 tail;
    s32 idx;
    Req *q;
    next = D_8006AEFC;
    next++;
    old = D_8006AEF5;
    tail = D_8006AEF8;
    D_8006AEF5 = 1;
    if (next >= 4) {
        next = 0;
    }
    if (next == tail) {
        D_8006AEF5 = old;
        return 0;
    }
    {
        q = &D_80076118[D_8006AEFC];
        q->w[0] = src->w[0];
        q->w[1] = src->w[1];
        q->w[2] = src->w[2];
        q->w[3] = src->w[3];
        q->w[4] = src->w[4];
        q->w[5] = src->w[5];
        q->w[6] = src->w[6];
        q->w[7] = src->w[7];
        q->w[8] = src->w[8];
        q->b0 = 1;
        q->b1 = 0;
        q->b2 = 0;
        q->b3 = 0;
        q->b7 = 1;
        idx = D_8006AEFC;
        D_8006AEFC = next;
        D_8006AEF5 = old;
        q->w[9] = idx;
        return idx + 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80034DFC);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003500C);

s32 func_800351E8(s32 a) {
    D_80076218 = a;
    return a & -((u32)(a - 0x1010) <= 0x7EFF0);
}

u32 func_80035210(s32 dst, s32 n) {
    s32 r;
    SpuSetTransferStartAddr(D_80076218);
    r = SpuRead(dst, n);
    D_80076218 += n;
    return r;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80035270);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800359B0);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80035C4C);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003602C);

void func_80036130(u8 a, u8 *b) {
    if (D_800A63E4 == 0xC && a == 1) {
        if (D_8007610C < 10) {
            D_8007610C++;
        } else if (!(b[4] & 0x80)) {
            s32 v = (b[1] >> 4) * 10 + (b[1] & 0xF);
            if (v != D_800A63E8) {
                D_800A63E4 = 0xD;
            }
        }
    }
}

void func_800361CC(void) {
    if (D_80076110 == 0) {
        D_8006AEF0 = CdReadyCallback();
    } else {
        CdReadyCallback();
    }
    D_80076110 = 1;
}

void func_8003621C(void) {
    if (D_80076110 != 0) {
        CdReadyCallback(D_8006AEF0);
        D_8006AEF0 = 0;
        D_80076110 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80036260);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800363CC);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80036AF8);

void func_80036D24(void) {
    D_80078F10[0] = 0;
    if (D_8006AEE8 < 2) {
        D_8006AEE8 = 0;
        D_800A4F1A = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80036D58);

void func_80036EB4(void) {
    if (D_800A4F1A == 0) {
        func_80036F18();
        D_800C6D28 = 0;
    }
}

s32 func_80036EE8(void) {
    func_80036F18();
    D_800C6D28 = 0;
    D_800A4F1A = 0;
}

void func_80036F18(void) {
    s32 i;
    s32 pad[2];
    if (D_8006AEE8 != 0) {
        D_800C6D28 = D_800A63E8;
        i = 0;
        if (D_8006AEE8 > 0) {
            do {
                func_80034DFC(D_80078F10[i]); D_80078F10[i] = 0; i++;
            } while (i < D_8006AEE8);
        }
        D_8006AEE8 = 0;
    }
}

void func_80036F98(void) {
    D_80078F10[0] = 0;
    D_8006AEE8 = 0;
}

void func_80036FB0(s32 from, s32 to) {
    s32 pad[1];
    s32 i;
    for (i = 0; i < D_8006AEE8; i++) {
        if (D_80078F10[i] == from) {
            D_80078F10[i] = to;
        }
    }
}

void func_80037004(void) {
    s32 i = 0x40;
    do {
        D_80076251[i] = 0;
        i -= 0x10;
    } while (i >= 0);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80037028);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80037144);

void func_80037334(void) {
    s32 i;
    for (i = 0x40; i >= 0; i -= 0x10) {
        D_80076251[i] = 0;
    }
}

void func_80037358(s32 a) {
    D_8007623C = a;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80037368);

typedef struct { u16 v; } U16R;
extern U16R D_80065438[];
extern s32 D_80076298[];
extern u8 D_80076250[];
extern s32 D_80076248[];
extern u16 D_800A4E88;
extern u8 D_800BA320[];
extern void func_8002FDE8(s32 a, void *b);

void func_800373D0(void) {
    register u8 *st = (u8 *)&D_800A4E88;
    register u8 *bank = D_800BA320;
    s32 *p = D_80076248;
    s32 off = 0;
    do {
        if (D_80076251[off] != 0 && D_80076250[off] != 0) {
            s32 a = *p;
            if (a & 0x3000) {
                *(u16 *)(st + 6) |= 0x20;
                *(u16 *)st = a & 0xFFF;
                func_8002D7FC((s32)bank);
                if (!(*p & 0x1000)) {
                    func_8002FDE8(D_80065438[*(s16 *)st].v, bank + 0x7000);
                }
            }
        }
        p += 4;
        off += 0x10;
    } while ((s32)p < (s32)D_80076298);
}

s32 func_800374CC(s32 *out) {
    if (D_80076243 != 4 && D_80076243 != 0 && D_80076243 != 5) {
        *out = D_8007623C;
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003750C);

s32 func_8003775C(void) {
    register Flag8 *f = &D_80076242;
    if (f->flag != 0) {
        if (SpuIsTransferCompleted(0) == 0) {
            return 0;
        }
        f->flag = 0;
        D_8006AEF4 &= 0xFC;
        func_800373D0();
        return 1;
    }
    D_8006AEF4 &= 0xFC;
    func_800373D0();
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800377D8);

void func_80037CC8(void) {
    D_800BA0F8 = 0;
}

s32 func_80037CD8(s32 fn) {
    if (D_8006AEF4 & 2) {
        register s32 *cb = &D_800BA0F8;
        if (*cb != 0) {
            if (((s32 (*)(void))*cb)() != 0) {
                *cb = fn;
                D_8006AEF4 &= 0xFD;
                return 1;
            }
            return 0;
        }
    }
    D_800BA0F8 = fn;
    D_8006AEF4 &= 0xFD;
    return 1;
}

void func_80037D74(void) {
    D_800BA0F8 = 0;
    D_8006AEF4 &= 0xFD;
}

extern u8 D_800A4EFE;
extern s32 D_80073140[];
extern u8 D_800C6E2B[];
extern u8 D_800C6E2C[];
extern u8 D_800C6E2D[];
extern u8 D_800C6DEC[];
extern u8 D_800C6DEE[];
extern u8 D_800C6DE4[];
extern u8 D_800C6DE0[];
extern u8 D_800B9EC8[];
extern u8 D_80079A68[];
extern void func_8003D424(void *p);

void func_80037D98(void) {
    s32 i;
    s32 off;
    s32 *src;
    D_800762B0 = &D_800A4EFE;
    for (i = 0, src = D_80073140, off = 0; i < 16; i++, off += 0x60) {
        s32 v = *src++;
        D_800C6E2A[off] = 0;
        D_800C6E2B[off] = 0;
        D_800C6E2C[off] = 0;
        D_800C6E2D[off] = 0;
        *(s16 *)(D_800C6DEC + off) = 0;
        *(s16 *)(D_800C6DEE + off) = 0;
        *(s32 *)(D_800C6DE4 + off) = 0;
        D_800C6E2E[off] = 0;
        *(s32 *)(D_800C6DE0 + off) = v;
    }
    for (i = 0, off = 0; i < 2; off += 0x1FC, i++) {
        D_800B9ED3[off] = 0;
        D_800B9ED2[off] = 0;
        *(s16 *)(D_800B9EC8 + off) = i;
    }
    func_8003D424(D_80079A68);
}

void func_80037EA0(void) {
    s32 i;
    for (i = 0; i < 16; i++) {
        u8 *q = D_800C6E2E + i * 0x60;
        if (q[-4] != 0 && q[-1] == 0 && q[0] != 0) {
            SpuSetVoiceRR(i, 8);
            *(u32 *)(q - 0x4A) &= 0xFFF9FFFF;
            q[0] = 0;
        }
    }
}

void func_80037F3C(void) {
    u8 *c = (u8 *)D_800C6DD0;
    s32 i = 0;
    do {
        if (c[0x5A] != 0 && c[0x5D] != 0) {
            SpuNSetVoiceAttr(i, c + 0x10);
            *(s32 *)(c + 0x14) = 0;
            c[0x5D] = 0;
            c[0x5E] = 0;
        }
        i++;
        c += 0x60;
    } while (i < 0x10);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80037FC4);

void func_8003819C(s32 i, s16 a, s16 b, s16 c) {
    u8 *p;
    u8 *q;
    if (a <= 0) {
        p = D_800B9CD8 + i * 0x1FC;
        q = p + a * 8;
        *(s16 *)(q + 0x16) = b;
        *(s16 *)(q + 0x14) = c;
        q[0x18] = 1;
        p[0x1F4] = 1;
    }
}

s32 func_800381E4(s32 a, s32 b) {
    return D_800B9CF0[(((s32)(b << 16) >> 13) + (((a << 7) - a) << 2))];
}

extern u8 *D_800A6428;
extern u8 D_800C1320[];

s32 func_80038210(s32 a, s16 b, s32 c) {
    s32 i;
    s32 j;
    u8 *s;
    u8 *f;
    u8 *q;
    for (s = D_800B9CD8, i = 0; i < 2; i++, s += 0x1FC) {
        f = s + 0x1FA;
        if (f[1] == 0) {
            D_800A6428 = s + 0x1BA;
            *(s32 *)s = a;
            *(s16 *)(f - 0xE) = b;
            *(s32 *)(f - 0x12) = c;
            *(u8 **)(f - 0x22) = D_800C1320;
            *(u8 **)(f - 0x1E) = D_800C1320 + 0x20;
            *(u8 **)(f - 0x1A) = D_800C1320 + 0x820;
            if (func_80038698(s) != 0) {
                return -1;
            }
            if (func_800387C0((u8 **)s) != 0) {
                return -1;
            }
            func_80038838(s);
            *(s32 *)(f - 0x1F6) = *(s32 *)s;
            f[1] = 1;
            f[0] = 0;
            for (j = 0xF, q = s + 0xF; j >= 0; j--, q--) {
                q[0x1BA] = 0;
            }
            return i;
        }
    }
    return -1;
}

void func_80038308(s32 i) {
    s32 o = i * 0x1FC;
    D_800B9ED2[o] = 1;
    func_80038908(D_800B9CD8 + o);
}

void func_8003834C(s32 i, s16 v) {
    *(s16 *)((u8 *)&D_800B9ECA + i * 0x1FC) = v;
}

u8 func_8003836C(s32 i) {
    s32 o = i * 0x1FC;
    return D_800B9ED3[o] != 0 ? D_800B9ED2[o] : 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800383A4);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800384A8);

void func_800385C0(s32 id) {
    s32 i;
    for (i = 0; i < 0x10; i++) {
        u8 *e = D_800C6E2A + i * 0x60;
        if (e[2] != 0) {
            u8 *o = *(u8 **)(e - 0xA);
            if (*(s16 *)(o + 0x1F0) == id) {
                e[2] = 0;
                e[0] = 0;
            }
        }
    }
    D_800B9ED2[id * 0x1FC] = 0;
    D_800B9ED3[id * 0x1FC] = 0;
}

void func_80038638(s32 a, s32 b) {
    u8 *p = &D_800B9E92[a * 0x1FC];
    p += b;
    *p |= 1;
}

void func_80038668(s32 i, s32 j) {
    u8 *p = D_800B9E92 + i * 0x1FC;
    p[j] &= 0xFE;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80038698);

s32 func_800387C0(u8 **pp) {
    u8 *p = *pp;
    u32 v;
    v = *(*pp)++;
    v |= *(*pp)++ << 8;
    v |= *(*pp)++ << 16;
    v |= *(*pp)++ << 24;
    if (v != 0x6B72544D) {
        return -1;
    }
    *pp = p + 8;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80038838);

s32 func_800388E8(u8 *a, s16 b) {
    return (b * *(s16 *)(a + 0x10) << 2) >> 16;
}

void func_80038908(u8 *p) {
    s32 v;
    u16 *q;
    s32 n;
    v = D_800A4EF8 << 7; v *= D_800A4EE0; v >>= 14;
    q = (u16 *)(p + 0x12);
    n = 0;
    do {
        v *= *q; v >>= 14;
        n--;
        q += 4;
    } while (n >= 0);
    *(s16 *)(p + 0x10) = v;
}

void func_80038958(void) {
    u8 *st = D_800762B0;
    u8 *fl = &D_800762B4;
    s32 i = 0;
    Ch60 *p = D_800C6DD0;
    do {
        u8 s = *st;
        if ((s == 0 || s == 3) && *fl == 0) {
            p->pad5B[0] = 0;
            if (p->on != 0) {
                u8 *q = (u8 *)&p->list[p->idx];
                q += i;
                q[0x23] = 0;
                p->on = 0;
            }
        }
        i++;
        p++;
        st++;
        fl++;
    } while (i < 0x10);
}

s32 func_80038A00(void) {
    u8 *a = D_800762B0;
    u8 *b = &D_800762B4;
    s32 i = 0;
    do {
        if (*a == 2 && *b == 0) {
            return i;
        }
        i++;
        a++;
        b++;
    } while (i < 0x10);
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80038A58);

s32 func_80038FC4(u8 **pp) {
    s32 acc = 0;
    u8 *q;
    u8 b;
    while (1) {
        q = *pp;
        b = *q;
        *pp = q + 1;
        acc += b & 0x7F;
        if (b & 0x80) {
            acc <<= 7;
            continue;
        }
        return acc;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80038FFC);

void func_8003916C(s16 n) {
    Ch60 *p = &D_800C6DD0[n];
    if (p->on != 0) {
        u8 *q = (u8 *)&p->list[p->idx]; q += n; q[0x23] = 0;
        p->on = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_800391D4);

void func_80039300(void) {
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80039308);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80039B20);

void func_80039C5C(u8 *a) {
    *(s32 *)a = (*(s32 *)a + 0x2);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80039C70);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80039DEC);

void func_80039F14(s32 a, s32 b, s32 c) {
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x20) = c;
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x22) = (c + 0x1);
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x21) = (*(u8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x21) | 0x2);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_80039F50);

void func_8003A098(u8 **p, s16 n) {
    u8 *q = *p;
    *p = q + 1;
    p = (u8 **)((u8 *)p + n * 0x1A);
    ((u8 *)p)[0x1A] = *q;
}

void func_8003A0D0(u8 *a) {
    *(s32 *)a = (*(s32 *)a + 0x1);
}

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003A0E4);

INCLUDE_ASM("asm/nonmatchings/code_8002C8BC", func_8003A234);

u32 func_8003A3D8(u32 x) {
    return ((x << 24) + (((x >> 8) & 0xFF) << 16) + ((x & 0xFF0000) >> 8)) | (x >> 24);
}

s16 func_8003A404(u32 x) {
    u8 hi = x >> 8;
    u8 lo = x;
    return (lo << 8) + hi;
}

void func_8003A424(void) {
    _SpuInit(0);
}
