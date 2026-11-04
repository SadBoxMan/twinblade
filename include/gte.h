#ifndef GTE_H
#define GTE_H

#ifdef PC
#include "gte_pc.h"   /* the same macros in C, pc/gte_pc.h */
#else

/*
 * PsyQ inline GTE macros (the inline_c.h set), as the game's code uses them: register loads/stores through
 * lwc2/swc2/ctc2/mfc2, and commands as "nop; nop; .word <cop2 command>". Every command word below was taken from
 * the binary (14 distinct commands across the EXE and the stage engine, 2026-10-13); every one is preceded by two
 * nops there. GTE data registers: 0-5 VXY0/VZ0..VXY2/VZ2, 6 RGB, 7 OTZ, 8-11 IR0-IR3, 12-14 SXY0-SXY2,
 * 16-19 SZ0-SZ3, 20-22 RGB0-RGB2, 24 MAC0, 25-27 MAC1-MAC3. Control: 0-4 rotation, 5-7 translation, 31 FLAG.
 */

/* ---- loads ---- */
#define gte_ldv0(r0) __asm__ volatile("lwc2 $0, 0(%0)\n\tlwc2 $1, 4(%0)" : : "r"(r0))
/* r224 (func_80020A28, accepted 31 Oct): VXY0 / VZ0 from three signed bytes r0[0..2] (lb, x masked to 16 bits, y in
   the high half), as the original packs them in $12 / $13 before the mtc2s */
#define gte_ldv0_b(r0)                                                                                            \
    __asm__ volatile("lb $13, 1(%0)\n\tlb $12, 0(%0)\n\tsll $13, $13, 16\n\tsll $12, $12, 16\n\t"                  \
                     "srl $12, $12, 16\n\tor $12, $12, $13\n\tlb $13, 2(%0)\n\tmtc2 $12, $0\n\tmtc2 $13, $1"     \
                     : : "r"(r0) : "$12", "$13")
#define gte_ldv1(r0) __asm__ volatile("lwc2 $2, 0(%0)\n\tlwc2 $3, 4(%0)" : : "r"(r0))
#define gte_ldv2(r0) __asm__ volatile("lwc2 $4, 0(%0)\n\tlwc2 $5, 4(%0)" : : "r"(r0))
#define gte_ldv3(r0, r1, r2)                                                                                      \
    __asm__ volatile("lwc2 $0, 0(%0)\n\tlwc2 $1, 4(%0)\n\tlwc2 $2, 0(%1)\n\tlwc2 $3, 4(%1)\n\t"                  \
                     "lwc2 $4, 0(%2)\n\tlwc2 $5, 4(%2)"                                                           \
                     :                                                                                            \
                     : "r"(r0), "r"(r1), "r"(r2))
#define gte_ldlv0(r0)                                                                                                 __asm__ volatile("lhu $13, 4(%0)
	lhu $12, 0(%0)
	sll $13, $13, 16
	or $12, $12, $13
	"                                  "mtc2 $12, $0
	lwc2 $1, 8(%0)"                                                                                   :                                                                                                                 : "r"(r0)                                                                                                         : "$12", "$13")
#define gte_ldrgb(r0) __asm__ volatile("lwc2 $6, 0(%0)" : : "r"(r0))
/* r223 (func_8013D9B0, accepted 30 Oct): IR0 = 0, RGB from *r0 and IRGB (IR1-IR3 from a 5:5:5 colour) from *r1 in one
   asm, as the original loads them before DPCL */
#define gte_ldrgb_irgb(r0, r1) __asm__ volatile("mtc2 $0, $8
	lwc2 $6, 0(%0)
	lwc2 $28, 0(%1)" : : "r"(r0), "r"(r1))
#define gte_ldlvl(r0) __asm__ volatile("lwc2 $9, 0(%0)\n\tlwc2 $10, 4(%0)\n\tlwc2 $11, 8(%0)" : : "r"(r0))
#define gte_ldsv(r0)                                                                                              \
    __asm__ volatile("lhu $12, 0(%0)\n\tlhu $13, 2(%0)\n\tlhu $14, 4(%0)\n\t"                                     \
                     "mtc2 $12, $9\n\tmtc2 $13, $10\n\tmtc2 $14, $11"                                             \
                     :                                                                                            \
                     : "r"(r0)                                                                                    \
                     : "$12", "$13", "$14")

#define gte_ldclmv(r0)                                                                                                __asm__ volatile("lhu $12, 0(%0)
	lhu $13, 6(%0)
	lhu $14, 12(%0)
	"                                                        "mtc2 $12, $9
	mtc2 $13, $10
	mtc2 $14, $11"                                                                  :                                                                                                                 : "r"(r0)                                                                                                         : "$12", "$13", "$14")

/* ---- stores ---- */
#define gte_stsxy(r0) __asm__ volatile("swc2 $14, 0(%0)" : : "r"(r0) : "memory")
/* r162: single screen points SXY0 / SXY1 (PsyQ gte_stsxy0 / gte_stsxy1 / gte_stsxy01) */
#define gte_stsxy0(r0) __asm__ volatile("swc2 $12, 0(%0)" : : "r"(r0) : "memory")
#define gte_stsxy1(r0) __asm__ volatile("swc2 $13, 0(%0)" : : "r"(r0) : "memory")
#define gte_stsxy01(r0, r1) __asm__ volatile("swc2 $12, 0(%0)\n\tswc2 $13, 0(%1)" : : "r"(r0), "r"(r1) : "memory")
#define gte_stsxy3(r0, r1, r2)                                                                                    \
    __asm__ volatile("swc2 $12, 0(%0)\n\tswc2 $13, 0(%1)\n\tswc2 $14, 0(%2)" : : "r"(r0), "r"(r1), "r"(r2)        \
                     : "memory")
/* stsxy3 straight into a primitive (PsyQ gte_stsxy3_<prim>): screen points at the packet's xy offsets */
#define GTE_STSXY3_AT(r0, a, b, c)                                                                                    __asm__ volatile("swc2 $12, " #a "(%0)
	swc2 $13, " #b "(%0)
	swc2 $14, " #c "(%0)" : : "r"(r0) : "memory")
#define gte_stsxy3_f3(r0) GTE_STSXY3_AT(r0, 8, 12, 16)
#define gte_stsxy3_g3(r0) GTE_STSXY3_AT(r0, 8, 16, 24)
#define gte_stsxy3_ft3(r0) GTE_STSXY3_AT(r0, 8, 16, 24)
#define gte_stsxy3_gt3(r0) GTE_STSXY3_AT(r0, 8, 20, 32)
#define gte_stsxy3_f4(r0) GTE_STSXY3_AT(r0, 8, 12, 16)
#define gte_stsxy3_g4(r0) GTE_STSXY3_AT(r0, 8, 16, 24)
#define gte_stsxy3_ft4(r0) GTE_STSXY3_AT(r0, 8, 16, 24)
#define gte_stsxy3_gt4(r0) GTE_STSXY3_AT(r0, 8, 20, 32)
#define gte_stsz(r0) __asm__ volatile("swc2 $19, 0(%0)" : : "r"(r0) : "memory")
#define gte_ldv3c(r0)                                                                                             \
    __asm__ volatile("lwc2 $0, 0(%0)\n\tlwc2 $1, 4(%0)\n\tlwc2 $2, 8(%0)\n\tlwc2 $3, 12(%0)\n\t"                  \
                     "lwc2 $4, 16(%0)\n\tlwc2 $5, 20(%0)"                                                         \
                     :                                                                                            \
                     : "r"(r0))
#define gte_stsxy3c(r0)                                                                                           \
    __asm__ volatile("swc2 $12, 0(%0)\n\tswc2 $13, 4(%0)\n\tswc2 $14, 8(%0)" : : "r"(r0) : "memory")
#define gte_stsz3(r0, r1, r2)                                                                                     \
    __asm__ volatile("swc2 $17, 0(%0)\n\tswc2 $18, 0(%1)\n\tswc2 $19, 0(%2)" : : "r"(r0), "r"(r1), "r"(r2)        \
                     : "memory")
#define gte_stsz4(r0, r1, r2, r3)                                                                                 \
    __asm__ volatile("swc2 $16, 0(%0)\n\tswc2 $17, 0(%1)\n\tswc2 $18, 0(%2)\n\tswc2 $19, 0(%3)"                   \
                     : : "r"(r0), "r"(r1), "r"(r2), "r"(r3) : "memory")
#define gte_stotz(r0) __asm__ volatile("swc2 $7, 0(%0)" : : "r"(r0) : "memory")
#define gte_stopz(r0) __asm__ volatile("swc2 $24, 0(%0)" : : "r"(r0) : "memory")
#define gte_strgb(r0) __asm__ volatile("swc2 $22, 0(%0)" : : "r"(r0) : "memory")
/* r223 (func_8013D9B0, accepted 30 Oct): ORGB (IR1-IR3 as a 5:5:5 colour) to *r0, the address moved into $12 first */
#define gte_storgb(r0) __asm__ volatile("move $12, %0
	swc2 $29, 0($12)" : : "r"(r0) : "$12", "memory")
/* (r137) PSX side only so far: pc/gte_pc.h has no strgb3 (src/abil is not in the PC build) */
#define gte_strgb3(r0, r1, r2)                                                                                    \
    __asm__ volatile("swc2 $20, 0(%0)\n\tswc2 $21, 0(%1)\n\tswc2 $22, 0(%2)" : : "r"(r0), "r"(r1), "r"(r2)        \
                     : "memory")
/* strgb3 straight into a POLY_G3 / POLY_G4 (PsyQ gte_strgb3_g3): the colours at 4, 12, 20 */
#define gte_strgb3_g3(r0) __asm__ volatile("swc2 $20, 4(%0)\n\tswc2 $21, 12(%0)\n\tswc2 $22, 20(%0)" : : "r"(r0) : "memory")
#define gte_stdp(r0) __asm__ volatile("swc2 $8, 0(%0)" : : "r"(r0) : "memory")
#define gte_stlvnl(r0)                                                                                            \
    __asm__ volatile("swc2 $25, 0(%0)\n\tswc2 $26, 4(%0)\n\tswc2 $27, 8(%0)" : : "r"(r0) : "memory")
#define gte_stsv(r0)                                                                                              \
    __asm__ volatile("mfc2 $12, $9\n\tmfc2 $13, $10\n\tmfc2 $14, $11\n\t"                                         \
                     "sh $12, 0(%0)\n\tsh $13, 2(%0)\n\tsh $14, 4(%0)"                                            \
                     :                                                                                            \
                     : "r"(r0)                                                                                    \
                     : "$12", "$13", "$14", "memory")
#define gte_stclmv(r0)                                                                                                __asm__ volatile("mfc2 $12, $9
	mfc2 $13, $10
	mfc2 $14, $11
	"                                                              "sh $12, 0(%0)
	sh $13, 6(%0)
	sh $14, 12(%0)"                                                                :                                                                                                                 : "r"(r0)                                                                                                         : "$12", "$13", "$14", "memory")
#define gte_stszotz(r0)                                                                                               __asm__ volatile("mfc2 $12, $19
	.word 0x00000000
	sra $12, $12, 2
	sw $12, 0(%0)" : : "r"(r0)                                : "$12", "memory")
#define gte_stflg(r0) __asm__ volatile("cfc2 $12, $31\n\t.word 0x00000000\n\tsw $12, 0(%0)" : : "r"(r0) : "$12", "memory")

/* ---- matrices (control registers) ---- */
#define gte_SetRotMatrix(r0)                                                                                      \
    __asm__ volatile("lw $12, 0(%0)\n\tlw $13, 4(%0)\n\tctc2 $12, $0\n\tctc2 $13, $1\n\t"                         \
                     "lw $12, 8(%0)\n\tlw $13, 12(%0)\n\tlw $14, 16(%0)\n\t"                                      \
                     "ctc2 $12, $2\n\tctc2 $13, $3\n\tctc2 $14, $4"                                               \
                     :                                                                                            \
                     : "r"(r0)                                                                                    \
                     : "$12", "$13", "$14")
#define gte_SetTransMatrix(r0)                                                                                    \
    __asm__ volatile("lw $12, 20(%0)\n\tlw $13, 24(%0)\n\tctc2 $12, $5\n\tlw $14, 28(%0)\n\t"                     \
                     "ctc2 $13, $6\n\tctc2 $14, $7"                                                               \
                     :                                                                                            \
                     : "r"(r0)                                                                                    \
                     : "$12", "$13", "$14")

/* ---- commands (encodings from the binary) ---- */
#define GTE_CMD(w) __asm__ volatile(".word 0x00000000\n\t.word 0x00000000\n\t.word " #w)   /* the two nops as words: maspsx drops "nop" lines */
#define gte_rtps() GTE_CMD(0x4A180001)
#define gte_rtpt() GTE_CMD(0x4A280030)
#define gte_nclip() GTE_CMD(0x4B400006)
#define gte_avsz3() GTE_CMD(0x4B58002D)
#define gte_avsz4() GTE_CMD(0x4B68002E)
#define gte_nccs() GTE_CMD(0x4B08041B)
#define gte_ncct() GTE_CMD(0x4B18043F)
#define gte_dpcl() GTE_CMD(0x4A680029)
#define gte_sqr0() GTE_CMD(0x4AA00428)
#define gte_sqr12() GTE_CMD(0x4AA80428)
#define gte_gpf12() GTE_CMD(0x4B98003D)
#define gte_rtv0tr() GTE_CMD(0x4A480012)  /* mvmva 1,0,0,0,0: rotation x V0 + translation */
#define gte_rtv0() GTE_CMD(0x4A486012)    /* mvmva 1,0,0,3,0: rotation x V0 */
#define gte_rtir() GTE_CMD(0x4A49E012)    /* mvmva 1,0,3,3,0: rotation x IR */

/* ---- compound macros (PsyQ inline_c.h) ---- */
#define gte_RotTransPers3(r1, r2, r3, r4, r5, r6, r7, r8, r9)                                                           {                                                                                                                     gte_ldv3(r1, r2, r3);                                                                                             gte_rtpt();                                                                                                       gte_stsxy3(r4, r5, r6);                                                                                           gte_stdp(r7);                                                                                                     gte_stflg(r8);                                                                                                    gte_stszotz(r9);                                                                                              }

#endif /* PC */

#endif
