/* CActor__PlayAnimationOnChannel @ 0x801DCCE0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_80234640(s32, s32, s32, s32);
M2C_UNK fn_80234740(s32, s32, s32);
s32 CActor__PlayAnimationOnChannel(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r3;
    void *temp_r9;
    void **arr;

    fn_80234640(M2C_FIELD(arg0, s32 *, 0x84), arg4, arg1, arg2);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x98) != 0) && (arg3 != 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x84);
        arr = (void **)(temp_r3 + 0xF0);
        temp_r9 = arr[arg4];
        if ((temp_r9 != NULL) && ((s32) M2C_FIELD(temp_r9, s32 *, 0xC) != 0)) {
            fn_80234740(temp_r3, arg4, 1);
        }
    }
    return 1;
}
