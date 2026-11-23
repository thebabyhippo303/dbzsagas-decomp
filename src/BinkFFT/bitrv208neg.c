/* BinkFFT__bitrv208neg @ 0x80300658 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkFFT__bitrv208neg(float *a) {
    float t03, t08, t04, t05, t07, t12, t09, t10, t11, t06, t13, t02, t14, t15;
    t02 = a[2]; t03 = a[3]; t04 = a[4]; t05 = a[5]; t06 = a[6]; t07 = a[7];
    t08 = a[8]; t09 = a[9]; t10 = a[10]; t11 = a[11]; t12 = a[12]; t13 = a[13];
    t14 = a[14]; t15 = a[15];
    a[2] = t14; a[3] = t15; a[4] = t06; a[5] = t07; a[6] = t10; a[7] = t11;
    a[8] = t02; a[9] = t03; a[10] = t12; a[11] = t13; a[12] = t04; a[13] = t05;
    a[14] = t08; a[15] = t09;
}
