/* BoneChain__HasNameInSet @ 0x801DBFF8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 BoneChain__HasNameInChain(void *, char *);
s32 BoneChain__HasNameInSet(void *arg0, s8 *arg1) {
    s32 var_r31;
    void *temp_r11;
    void *temp_r9;

    if (BoneChain__HasNameInChain(arg0, arg1) != 0) {
        return 1;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x17C);
    var_r31 = 0;
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
        if (M2C_FIELD(temp_r9, s32 (**)(void *, s8 *), 0x34)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x30), arg1) != 0) {
            var_r31 = 1;
        }
    }
    return var_r31;
}
