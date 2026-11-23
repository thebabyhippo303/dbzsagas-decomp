/* VariableContext__FindVariable @ 0x8018E36C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK VariableContext__FindVariableIndex(s32, s32);
s32 VariableContext__FindVariable(s32 arg0, s32 arg1) {
    s32 *var_r3_2;
    s32 temp_r11;
    s32 temp_r3;
    s32 var_r3;
    void *temp_r3_2;

    temp_r3 = VariableContext__FindVariableIndex(arg0, arg1);
    var_r3 = 0;
    if (temp_r3 >= 0) {
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x28);
        temp_r11 = M2C_FIELD(temp_r3_2, s32 *, 4);
        if ((temp_r3 >= temp_r11) || (temp_r11 == 0)) {
            var_r3_2 = NULL;
        } else {
            var_r3_2 = M2C_FIELD(temp_r3_2, s32 *, 0) + (temp_r3 * 4);
        }
        var_r3 = *var_r3_2;
    }
    return var_r3;
}
