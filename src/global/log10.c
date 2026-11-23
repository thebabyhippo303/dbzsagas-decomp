/* log10 @ 0x8016768C (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
extern f64 log(f64);
extern f64 lbl_8033CD70 __attribute__((section(".rodata")));
extern f64 lbl_8033CD78 __attribute__((section(".rodata")));
extern f64 lbl_8033CD80 __attribute__((section(".rodata")));
extern f64 lbl_8033CD88 __attribute__((section(".rodata")));
extern f64 lbl_8033CD90 __attribute__((section(".rodata")));
extern f64 lbl_8033CD98 __attribute__((section(".rodata")));
extern f64 lbl_8033CDA0 __attribute__((section(".rodata")));
f64 log10(f64 x) {
    union { f64 d; int w[2]; } b;
    volatile union { f64 d; u32 u[2]; } c;
    register int hi;
    register int lo;
    register int k;
    register unsigned s;
    f64 dk, y;
    b.d = x;
    hi = b.w[0];
    lo = b.w[1];
    k = 0;
    if (hi <= 0x000fffff) {
        if (((hi & 0x7fffffff) | lo) == 0) return lbl_8033CD70;
        if (hi < 0) return (x - x) / lbl_8033CD78;
        k = -54;
        x = x * lbl_8033CD80;
        b.d = x;
        hi = b.w[0];
        lo = b.w[1];
    }
    if (hi > 0x7fefffff) return x + x;
    k = (k - 1023) + (hi >> 20);
    b.d = x;
    s = (unsigned)k >> 31;
    lo = b.w[1];
    hi = (hi & 0x000fffff) | (int)((1023u - s) << 20);
    c.u[1] = ((unsigned)k + s) ^ 0x80000000u;
    c.u[0] = 0x43300000u;
    b.w[0] = hi;
    b.w[1] = lo;
    y = b.d;
    dk = c.d - lbl_8033CD88;
    y = log(y);
    return dk * lbl_8033CDA0 + (dk * lbl_8033CD90 + y * lbl_8033CD98);
}
