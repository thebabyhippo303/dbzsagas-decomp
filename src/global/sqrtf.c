/* sqrtf @ 0x8015FA78 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef union { float f; int i; } FI;
#define GET_FLOAT_WORD(w, d) do { FI gf_u; gf_u.f = (d); (w) = gf_u.i; } while (0)
#define SET_FLOAT_WORD(d, w) do { FI sf_u; sf_u.i = (w); (d) = sf_u.f; } while (0)

float sqrtf(float x) {
    float z;
    int sign = 0x80000000;
    int ix, s, q, m, t, i;
    unsigned r;

    GET_FLOAT_WORD(ix, x);
    if ((ix & 0x7f800000) == 0x7f800000) {
        return x * x + x;
    }
    if (ix <= 0) {
        if ((ix & ~sign) == 0) {
            return x;
        } else if (ix < 0) {
            return (x - x) / (x - x);
        }
    }
    m = ix >> 23;
    if (m == 0) {
        for (i = 0; (ix & 0x00800000) == 0; i++) {
            ix <<= 1;
        }
        m -= i - 1;
    }
    m -= 127;
    ix = (ix & 0x007fffff) | 0x00800000;
    if (m & 1) {
        ix += ix;
    }
    m >>= 1;
    ix += ix;
    q = s = 0;
    r = 0x01000000;
    while (r != 0) {
        t = s + r;
        if (t <= ix) {
            s = t + r;
            ix -= t;
            q += r;
        }
        ix += ix;
        r >>= 1;
    }
    if (ix != 0) {
        q += q & 1;
    }
    ix = (q >> 1) + 0x3f000000;
    ix += (m << 23);
    SET_FLOAT_WORD(z, ix);
    return z;
}
