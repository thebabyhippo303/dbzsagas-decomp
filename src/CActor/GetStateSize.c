/* CActor__GetStateSize @ 0x801DE360 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_80234948(s32, s32);
M2C_UNK CActor__GetFixedStateSize(s32);
s32 CActor__GetStateSize(void *arg0) {
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = 0;
    temp_r29 = M2C_FIELD(arg0, s32 *, 0x84);
    var_r31 = 0;
    do {
        temp_r3 = fn_80234948(temp_r29, var_r31);
        var_r31 += 1;
        var_r30 += temp_r3;
    } while (var_r31 <= 3);
    return CActor__GetFixedStateSize((s32) arg0) + var_r30;
}
