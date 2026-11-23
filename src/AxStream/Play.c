/* AxStream__Play @ 0x80197A58 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D4EC4(s32, s32);
s32 AxStream__Play(void *arg0) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C0);
    if (temp_r3 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C8) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1D0) = 1;
            fn_802D4EC4(temp_r3, 1);
            var_r0 = 0;
        } else {
            var_r0 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x1CC) = var_r0;
    }
    return 1;
}
