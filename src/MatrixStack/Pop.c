/* MatrixStack__Pop @ 0x8024993C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803B1D5C __attribute__((section(".data")));
extern s32 lbl_803DCDE8;
extern s32 lbl_803DD61C;

void MatrixStack__Upload(void);

void MatrixStack__Pop(void) {
    register s32 depth = lbl_803DCDE8;
    register s32 *base = &lbl_803B1D5C;
    register s32 idx = depth * 24;
    register s32 *f20 = (s32 *)((char *)base + 20);
    register s32 *f4 = (s32 *)((char *)base + 4);
    *(s32 *)((char *)f20 + idx) -= 1;
    *(s32 *)((char *)f4 + idx) -= 64;
    if (depth == 0) {
        register s32 *f12 = (s32 *)((char *)base + 12);
        register s32 e = *(s32 *)((char *)f12 + depth);
        *(s32 *)((char *)f12 + depth) = e - 4;
        lbl_803DD61C = *(s32 *)(e - 4);
    }
    MatrixStack__Upload();
}
