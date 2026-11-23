/* MatrixStack__Translate @ 0x802492B0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
void MatrixStack__MultMatrix(float *);
extern float lbl_803478D8 __attribute__((section(".rodata")));
extern float lbl_803478DC __attribute__((section(".rodata")));
void MatrixStack__Translate(float tx, float ty, float tz) {
    float m[16];
    float *p;
    float one;
    float zero;
    one = lbl_803478D8;
    zero = lbl_803478DC;
    p = m;
    m[0] = one;
    p[1] = zero; p[2] = zero; p[3] = zero; p[4] = zero;
    p[5] = one; p[6] = zero; p[7] = zero; p[8] = zero;
    p[9] = zero; p[10] = one; p[11] = zero; p[12] = zero;
    p[13] = zero; p[14] = zero; p[15] = one;
    m[12] = tx; m[13] = ty; m[14] = tz;
    MatrixStack__MultMatrix(m);
}
