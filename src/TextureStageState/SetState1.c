/* TextureStageState__SetState1 @ 0x80250204 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void TextureStageState__Set(void *, s32, s32);
s32 TextureStageState__Get(void *, s32);
void TextureStageState__SetState1(void *arg0, s32 arg1) {
    TextureStageState__Get(arg0, 0);
    TextureStageState__Set(arg0, 1, arg1);
}
