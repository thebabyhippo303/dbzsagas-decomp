/* SList__LinkArray @ 0x801844B8 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void SList__LinkArray(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r8;
    s32 var_r10;
    s32 var_r11;
    void *var_r4;

    var_r4 = arg1;
    var_r10 = 0;
    if (var_r10 < arg2) {
        temp_r8 = arg2 - 1;
        do {
            if (0 == var_r10) {
                M2C_FIELD(arg0, u32 *, 0) = var_r4;
                if (var_r10 == temp_r8) {
                    var_r11 = var_r4 + arg3;
                    *(s32 *)(var_r4 + M2C_FIELD(arg0, s32 *, 4)) = var_r10;
                } else {
                    goto block_7;
                }
            } else if (var_r10 == temp_r8) {
                var_r11 = var_r4 + arg3;
                *(s32 *)(var_r4 + M2C_FIELD(arg0, s32 *, 4)) = 0;
                M2C_FIELD(arg0, u32 *, 8) = var_r4;
            } else {
block_7:
                temp_r0 = var_r4 + arg3;
                *(s32 *)(var_r4 + M2C_FIELD(arg0, s32 *, 4)) = temp_r0;
                var_r11 = temp_r0;
            }
            var_r10 += 1;
            var_r4 = var_r11;
        } while (var_r10 < arg2);
    }
}
