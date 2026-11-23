/* BinkFFT__bitrv208 @ 0x80300614 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void BinkFFT__bitrv208(f32 *a) {
    f32 t02 = a[2];
    f32 t03 = a[3];
    f32 t06 = a[6];
    f32 t07 = a[7];
    f32 t08 = a[8];
    f32 t09 = a[9];
    f32 t12 = a[12];
    f32 t13 = a[13];
    a[2] = t08;
    a[3] = t09;
    a[6] = t12;
    a[7] = t13;
    a[8] = t02;
    a[9] = t03;
    a[12] = t06;
    a[13] = t07;
}
