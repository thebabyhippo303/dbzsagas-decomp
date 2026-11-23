/* ProjectedTexture__EndPass @ 0x80228AF0 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void RenderState__SetDefaults(void);
M2C_UNK RenderState__Unlock(s32);
void ProjectedTexture__EndPass(void) {
    RenderState__Unlock(3);
    RenderState__Unlock(0x19);
    RenderState__Unlock(0x17);
    RenderState__Unlock(0x16);
    RenderState__Unlock(5);
    RenderState__Unlock(6);
    RenderState__Unlock(4);
    RenderState__SetDefaults();
}
