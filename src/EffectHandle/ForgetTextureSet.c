/* EffectHandle__ForgetTextureSet @ 0x8022EED8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct { char pad[0x28]; void *texSet; void *unk2C; } EffectTexState;
extern EffectTexState lbl_803ADD88;
void EffectHandle__ForgetTextureSet(void *arg0) {
    if (arg0 != lbl_803ADD88.texSet) { return; }
    lbl_803ADD88.texSet = 0;
    lbl_803ADD88.unk2C = 0;
}
