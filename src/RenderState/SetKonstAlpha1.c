/* RenderState__SetKonstAlpha1 @ 0x8024B028 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
f32 Gfx__BitsToFloat(s32);
void GXSetTevKColor(s32, void *);
void RenderState__Set(s32, s32);
extern f32 lbl_8034794C __attribute__((section(".data")));
void RenderState__SetKonstAlpha1(s32 arg0) {
    u8 c[4];
    volatile u32 w;
    u8 *p;
    c[0] = -1;
    p = c;
    p[1] = 255;
    p[2] = 255;
    p[3] = (u8)(s32)(Gfx__BitsToFloat(arg0) * lbl_8034794C);
    w = *(u32 *)c;
    GXSetTevKColor(1, &w);
    RenderState__Set(26, arg0);
}
