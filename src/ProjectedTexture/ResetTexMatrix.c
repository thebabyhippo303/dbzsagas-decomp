/* ProjectedTexture__ResetTexMatrix @ 0x80228988 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TextureStageState__SelectStage(s32);
void MatrixStack__SetMode(s32);
M2C_UNK MatrixStack__LoadIdentity(void);
extern s32 lbl_803ADA40 __attribute__((section(".data")));
extern void *lbl_803DCDF4;

void ProjectedTexture__ResetTexMatrix(void) {
    void *p;
    lbl_803ADA40 = 0;
    TextureStageState__SelectStage(0);
    MatrixStack__SetMode(2);
    MatrixStack__LoadIdentity();
    p = lbl_803DCDF4;
    *(volatile s32 *)((char *)p + 0x24) = 0;
    *(volatile s32 *)((char *)p + 0x20) = 0;
}