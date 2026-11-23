/* BinkFFT__cftrec2 @ 0x80301650 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

void BinkFFT__cftmdl2(s32, s32, s32);
void BinkFFT__cftrec1(s32, s32, s32, s32);
void BinkFFT__cftrec2(s32, s32, s32, s32);
void BinkFFT__cftexp2(s32, s32, s32, s32);

void BinkFFT__cftrec2(s32 n, s32 a, s32 w, s32 out) {
    s32 m = n >> 2;
    BinkFFT__cftmdl2(n, a, out + (w - n) * 4);
    if (n > 512) {
        BinkFFT__cftrec1(m, a, w, out);
        BinkFFT__cftrec2(m, a + m * 4, w, out);
        BinkFFT__cftrec1(m, a + m * 8, w, out);
        BinkFFT__cftrec2(m, a + m * 12, w, out);
    } else {
        BinkFFT__cftexp2(n, a, w, out);
    }
}