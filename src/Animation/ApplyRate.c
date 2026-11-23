/* Animation__ApplyRate @ 0x8023EAD8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
s16 Animation__ApplyRate(void *arg0, s32 arg1) {
    s32 v;
    v = (arg1 * *(s16 *)((char *)arg0 + 6)) >> 8;
    if (v > 0x7FFF) {
        v = 0x7FFF;
    }
    if (v < -0x8000) {
        v = -32768;
    }
    return (s16)v;
}
