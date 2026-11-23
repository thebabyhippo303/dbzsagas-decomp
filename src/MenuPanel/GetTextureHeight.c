/* MenuPanel__GetTextureHeight @ 0x80275E74 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__SetTexture(void *, void *, s32, s32, s32, s32);
extern f64 lbl_8034A140 __attribute__((section(".data")));

f32 MenuPanel__GetTextureHeight(void *arg0) {
    f64 d;

    Sphere__SetTexture((char *) arg0 + 0x340, M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x18) + 1, 0, 1, 1);
    ((u32 *) &d)[1] = (u32) (M2C_FIELD(arg0, s32 *, 0x360) ^ 0x80000000);
    ((u32 *) &d)[0] = 0x43300000u;
    return (f32) (d - lbl_8034A140);
}
