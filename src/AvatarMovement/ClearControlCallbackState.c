/* AvatarMovement__ClearControlCallbackState @ 0x800B6BC8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_800B6FEC(void *, int);
void AvatarMovement__ClearControlCallbackState(void **arg0) {
    s32 sp8;
    void *temp_r11;
    void *temp_r9;

    fn_800B6FEC(arg0 + 8, 7);
    temp_r11 = M2C_FIELD(*arg0, void **, 0x7D8);
    sp8 = 0;
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32 *), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), &sp8);
    M2C_FIELD(*arg0, s32 *, 0x28) = 0;
}
