/* MultiMessagePanel__SetIconAnchor @ 0x8026A71C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MultiMessagePanel__SetIconAnchor(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r9)(s32, s32);
    s32 temp_r4;
    s32 temp_r4_2;
    void *temp_r11;

    temp_r4 = arg1 * 0x550;
    temp_r11 = M2C_FIELD((temp_r4 + arg0), void **, 0x6EA8);
    temp_r4_2 = temp_r4 + 0x6D0C;
    temp_r9 = M2C_FIELD(temp_r11, M2C_UNK (**)(s32, s32, M2C_UNK), 0xEC);
    temp_r9(arg0 + temp_r4_2 + M2C_FIELD(temp_r11, s16 *, 0xE8), temp_r4_2);
}
