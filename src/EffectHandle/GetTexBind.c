/* EffectHandle__GetTexBind @ 0x8022F3E8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern s32 lbl_803ADD8C __attribute__((section(".data")));

u16 EffectHandle__GetTexBind(u32 arg0) {
    void *temp_r11;

    temp_r11 = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if ((s32) M2C_FIELD(temp_r11, s32 *, 0x18) == (s32) arg0) {
        return M2C_FIELD(temp_r11, u16 *, 0x10);
    }
    return 0U;
}
