/* SplinePath__FindNearestControlPoint @ 0x801FEDE4 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


f32 fn_801FC8BC(s32, s32, s32);
extern f32 lbl_803454D0 __attribute__((section(".data")));

s32 SplinePath__FindNearestControlPoint(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 var_f31;
    s32 var_r28;
    s32 var_r29;
    s32 var_r30;

    var_r28 = 0;
    var_f31 = lbl_803454D0;
    var_r30 = 0;
    if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
        var_r29 = 0;
        do {
            temp_f1 = fn_801FC8BC((s32) arg0, M2C_FIELD(arg0, s32 *, 0x1C) + var_r29, arg1);
            if (!(temp_f1 >= var_f31)) {
                var_f31 = temp_f1;
                var_r28 = var_r30;
            }
            var_r30 += 1;
            var_r29 += 0xC;
        } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x18));
    }
    return var_r28;
}
