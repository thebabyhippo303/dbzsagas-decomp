/* RenderState__Set @ 0x8024179C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { s32 force; s32 cur; s32 lock; } StateEntry;
M2C_UNK fn_80241798(void);
extern StateEntry lbl_803B1848[] __attribute__((section(".bss")));
void RenderState__Set(s32 arg0, void *arg1) {
    StateEntry *e = &lbl_803B1848[arg0];
    e->cur = (s32) arg1;
    (arg0 + lbl_803B1848)->force = 0;
    fn_80241798();
}