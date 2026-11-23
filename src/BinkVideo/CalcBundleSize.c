/* BinkVideo__CalcBundleSize @ 0x802F9FA4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 BinkVideo__CalcBundleSize(u32 a, u32 b, u32 c, u32 d) {
    u32 q = c;
    u32 t0;
    u32 t1;
    u32 t2;
    if (q <= 8) {
        q = 8;
        goto calc;
    }
    if (q <= 15) {
        q = 16;
    }
calc:
    t0 = b >> 3;
    t1 = a * q;
    t2 = t0 * d;
    t1 >>= 3;
    t2 = t2 * q;
    t2 >>= 3;
    return (t1 + t2 + 3) & ~3u;
}
