/* Simple__ApplyStateFlags @ 0x802CB514 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
/* WIP 92% (4-insn tail schedule): Simple__ApplyStateFlags @ 0x802CB514. Volatile acc + 2 volatile dead-stores (m1->24, m2->16) + 2 dummy words (decl order = layout: acc,_p1,m2,_p2,m1) give exact frame/length/layout. Bare small-data externs (no attr) for exact r13 offsets. OPEN: tail order (or;m1;obj;m2;acc) vs ours (m1;or;m2;obj;acc) — stable across 3 source orders + brute_force(40s, 0 improv). Retry: different t/masked formulation to pin or-first. */
extern s32 lbl_803DD18C;
extern s32 lbl_803DD1A8;
extern s32 lbl_803DD1B8;
void Simple__ApplyStateFlags(void *arg0) {
    volatile s32 acc;
    volatile s32 _p1;
    volatile s32 m2;
    volatile s32 _p2;
    volatile s32 m1;
    s32 flags;
    s32 masked;
    s32 t;
    void *ops;
    ops = M2C_FIELD(arg0, void **, 0x34);
    flags = M2C_FIELD(ops, s32 (**)(void *), 0x1C4)(arg0 + M2C_FIELD(ops, s16 *, 0x1C0));
    acc = 0;
    if (flags & 1) {
        acc = M2C_FIELD(arg0, s32 *, 0x384);
    }
    if (flags & 2) {
        acc |= lbl_803DD1B8;
    }
    if (flags & 4) {
        acc |= lbl_803DD18C;
    }
    if (M2C_FIELD(arg0, s32 *, 0x260) != 0) {
        acc |= lbl_803DD18C;
    }
    masked = M2C_FIELD(arg0, s32 *, 0x384) & lbl_803DD1A8;
    t = acc | masked;
    M2C_FIELD(arg0, s32 *, 0x14) = t;
    m1 = masked;
    m2 = masked;
    acc = t;
}
