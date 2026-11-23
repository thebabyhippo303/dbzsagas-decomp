/* MatrixStack__LoadIdentity @ 0x80248D9C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

extern s32 lbl_803B1D5C __attribute__((section(".data")));
extern s32 lbl_803DCDE8;
extern f32 lbl_803478C8[4];
extern f32 lbl_803478CC[4];
void MatrixStack__Upload(void);
void MatrixStack__LoadIdentity(void) {
    register s32 mode = lbl_803DCDE8;
    register s32 *base = &lbl_803B1D5C;
    register s32 idx = mode * 24;
    register s32 *p4 = (s32 *)((char *)base + 4);
    volatile f32 *m = *(volatile f32 **)((char *)p4 + idx);
    f32 one = lbl_803478C8[0];
    f32 zero;
    m[0] = one;
    zero = lbl_803478CC[0];
    m[15] = one;
    m[14] = zero;
    m[1] = zero;
    m[2] = zero;
    m[3] = zero;
    m[4] = zero;
    m[5] = one;
    m[6] = zero;
    m[7] = zero;
    m[8] = zero;
    m[9] = zero;
    m[10] = one;
    m[11] = zero;
    m[12] = zero;
    m[13] = zero;
    MatrixStack__Upload();
}
