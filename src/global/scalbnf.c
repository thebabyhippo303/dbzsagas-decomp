/* scalbnf @ 0x80160168 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef union { f32 f; int i; } FI;
f32 copysignf(f32, f32);
extern f32 lbl_803DC8F0;
extern f32 lbl_803DC8F4;
extern f32 lbl_803DC8F8;
extern f32 lbl_803DC8FC;

#define GET_FLOAT_WORD(w, d) do { FI gf_u; gf_u.f = (d); (w) = gf_u.i; } while (0)
#define SET_FLOAT_WORD(d, w) do { FI sf_u; sf_u.i = (w); (d) = sf_u.f; } while (0)

f32 scalbnf(f32 x, int n) {
    int k, ix;
    GET_FLOAT_WORD(ix, x);
    k = (ix & 0x7f800000) >> 23;
    if (k == 0) {
        if ((ix & 0x7fffffff) == 0) return x;
        x *= lbl_803DC8F0;
        GET_FLOAT_WORD(ix, x);
        k = ((ix & 0x7f800000) >> 23) - 25;
        if (n < -50000) return lbl_803DC8F4 * x;
    }
    if (k == 0xff) return x + x;
    k = k + n;
    if (k > 0xfe) return copysignf(lbl_803DC8F8, x) * lbl_803DC8F8;
    if (k > 0) {
        SET_FLOAT_WORD(x, (ix & 0x807fffff) | (k << 23));
        return x;
    }
    if (k <= -25) {
        if (n > 50000) return copysignf(lbl_803DC8F8, x) * lbl_803DC8F8;
        else return copysignf(lbl_803DC8F4, x) * lbl_803DC8F4;
    }
    k += 25;
    SET_FLOAT_WORD(x, (ix & 0x807fffff) | (k << 23));
    return x * lbl_803DC8FC;
}
