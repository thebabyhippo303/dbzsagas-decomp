/* BoneChainSet__SetupAll @ 0x801DB460 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_801EB030(s32);
void BoneChainSet__SetupAll(s32 *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = *arg0;
loop_1:
    if (var_r31 != 0) {
        fn_801EB030(var_r31);
        temp_r0 = M2C_FIELD(var_r31, s32 *, 0);
        if (temp_r0 != 0) {
            var_r31 = temp_r0;
        } else {
            var_r31 = M2C_FIELD(var_r31, s32 *, 0x17C);
        }
        goto loop_1;
    }
}
