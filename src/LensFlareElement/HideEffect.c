/* LensFlareElement__HideEffect @ 0x8028B798 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EffectHandle__Configure(u32, s16, s32, s32, void *, void *, void *);
extern f32 lbl_8034F4A0 __attribute__((section(".data")));

void LensFlareElement__HideEffect(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_8034F4A0;
    M2C_FIELD(arg0, s8 *, 0x97) = 0;
    M2C_FIELD(arg0, s8 *, 0x93) = 0;
    M2C_FIELD(arg0, s8 *, 0x8F) = 0;
    M2C_FIELD(arg0, s8 *, 0x8B) = 0;
    EffectHandle__Configure(M2C_FIELD(arg0, u32 *, 0x34), 0x44, 0x8000, 0x123, NULL, NULL, arg0 + 0x88);
}
