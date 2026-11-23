/* Bink__ConvertSamples16To8 @ 0x802EC674 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Bink__ConvertSamples16To8(s8 *arg0, s16 *arg1, u32 arg2) {
    s16 *var_r4;
    s16 temp_r0_2;
    s8 *var_r3;
    u32 temp_r0;
    u32 var_ctr;

    var_r3 = arg0;
    var_r4 = arg1;
    temp_r0 = arg2 >> 1U;
    var_ctr = temp_r0;
    if (temp_r0 != 0) {
        do {
            temp_r0_2 = *var_r4;
            var_r4 += 1;
            *var_r3 = (s8) (temp_r0_2 >> 8);
            var_r3 += 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}
