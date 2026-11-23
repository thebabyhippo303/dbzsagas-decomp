/* CActor__ResetSecondaryMotion @ 0x801DE310 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK BoneChainSet__ResetAll(s32);
M2C_UNK fn_80210C14(s32);
void CActor__ResetSecondaryMotion(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r3 != 0) {
        BoneChainSet__ResetAll(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_r3_2 != 0) {
        fn_80210C14(temp_r3_2);
    }
}
