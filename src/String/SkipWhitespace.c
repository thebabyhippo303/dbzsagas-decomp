/* String__SkipWhitespace @ 0x8018C344 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void String__SkipWhitespace(u8 *arg0) {
    u8 *var_r3;
    u8 temp_r0;
    u8 temp_r0_2;

    var_r3 = arg0;
    temp_r0 = *var_r3;
    if (((s8) temp_r0 == 0x20) || ((s8) temp_r0 == 9)) {
        do {
loop_2:
            temp_r0_2 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
            if ((s8) temp_r0_2 == 0x20) {
                goto loop_2;
            }
        } while ((s8) temp_r0_2 == 9);
    }
}
