/* UI__GetScreenWidth @ 0x8026B86C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_80349EDC __attribute__((section(".data")));
extern s32 lbl_80374294 __attribute__((section(".data")));
extern f32 lbl_803DCE6C;
/* NOTE: plain (f32)(f64) cast is code-correct (78.9%, only the conversion-block
 * lfd differs) but strict-unresolved: the compiler-anonymous 2^52 bias double
 * has no exact .rodata placement (needs server-only MT5_LINK_LAYOUT).
 * Retry only via the shell layout path; do NOT add pool_pad (forbidden). */
f32 UI__GetScreenWidth(void) {
    f32 v;
    v = lbl_803DCE6C;
    if (v == lbl_80349EDC) {
        v = (f32)(f64)lbl_80374294;
    }
    return v;
}
