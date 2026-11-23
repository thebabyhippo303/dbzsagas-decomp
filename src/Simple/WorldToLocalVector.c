/* Simple__WorldToLocalVector @ 0x802CC2D8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

/* Byte-matched: Simple__WorldToLocalVector @ 0x802CC2D8 (0x6C). ProDG -O2. */
f32 *Simple__WorldToLocalVector(f32 *dst, f32 *mat, f32 *vec) {
    f32 *m = mat + 17;
    f32 x = vec[0];
    f32 y = vec[1];
    f32 z = vec[2];
    f32 rx = (x * m[0] + y * m[1]) + z * m[2];
    f32 ry = (x * m[3] + y * m[4]) + z * m[5];
    f32 rz = (x * m[6] + y * m[7]) + z * m[8];

    dst[0] = rx;
    dst[1] = ry;
    dst[2] = rz;
    return dst;
}
