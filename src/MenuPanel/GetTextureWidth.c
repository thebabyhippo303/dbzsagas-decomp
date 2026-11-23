/* MenuPanel__GetTextureWidth @ 0x80275E04 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__SetTexture(void *, void *, s32, s32, s32, s32);
f32 MenuPanel__GetTextureWidth(void *arg0) {
    Sphere__SetTexture(arg0 + 0x340, M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 1, 0, 1, 1);
    return (f32) (f64) M2C_FIELD(arg0, s32 *, 0x35C);
}
