/* Matrix__InvertOrthonormal @ 0x801ABFC4 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;

s32 Matrix__InvertOrthonormal(f32 *m, f32 *o) {
    f32 zero = 0.0f;
    o[0] = m[0];
    o[1] = m[4];
    o[2] = m[8];
    o[3] = zero;
    o[4] = m[1];
    o[5] = m[5];
    o[6] = m[9];
    o[7] = zero;
    o[8] = m[2];
    o[9] = m[6];
    o[10] = m[10];
    o[11] = zero;
    o[12] = (-m[12] * m[0]) - (m[13] * m[1]) - (m[14] * m[2]);
    o[13] = (-m[12] * m[4]) - (m[13] * m[5]) - (m[14] * m[6]);
    o[14] = (-m[12] * m[8]) - (m[13] * m[9]) - (m[14] * m[10]);
    o[15] = 1.0f;
    return 1;
}
