/* fabsf @ 0x8015FF20 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef union { float f; int i; } FI;
#define GET_FLOAT_WORD(w, d) do { FI gf_u; gf_u.f = (d); (w) = gf_u.i; } while (0)
#define SET_FLOAT_WORD(d, w) do { FI sf_u; sf_u.i = (w); (d) = sf_u.f; } while (0)

float fabsf(float x) {
    int ix;
    GET_FLOAT_WORD(ix, x);
    SET_FLOAT_WORD(x, ix & 0x7fffffff);
    return x;
}
