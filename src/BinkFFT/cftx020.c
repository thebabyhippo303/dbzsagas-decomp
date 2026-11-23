/* BinkFFT__cftx020 @ 0x80303464 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkFFT__cftx020(f32 *arg0) {
    f32 b = arg0[2];
    f32 a = arg0[0];
    f32 c = arg0[1];
    f32 d = arg0[3];
    f32 d0 = a - b;
    f32 s0 = a + b;
    f32 d1 = c - d;
    f32 s1 = c + d;

    arg0[0] = s0;
    arg0[2] = d0;
    arg0[1] = s1;
    arg0[3] = d1;
}
