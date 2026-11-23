/* Bink__EndTimedSection @ 0x802EEA8C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Bink__EndTimedSection(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x27C);
    if (temp_r4 != 0) {
        M2C_FIELD(arg0, s32 *, 0x27C) = 0;
        M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x2B4) + (arg1 - temp_r4));
    }
}
