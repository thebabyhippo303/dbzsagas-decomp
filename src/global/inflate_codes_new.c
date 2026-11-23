/* inflate_codes_new @ 0x802582B4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void inflate_codes_new(s8 arg0, s8 arg1, s32 arg2, s32 arg3, void *arg4) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg4, void *(**)(s32, M2C_UNK, M2C_UNK), 0x20)(M2C_FIELD(arg4, s32 *, 0x28), 1, 0x1C);
    if (!temp_r3) {
        return;
    }
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x11) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x14) = arg2;
    M2C_FIELD(temp_r3, s32 *, 0x18) = arg3;
    M2C_FIELD(temp_r3, s8 *, 0x10) = arg0;
}
