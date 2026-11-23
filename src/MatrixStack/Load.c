/* MatrixStack__Load @ 0x80248E24 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803DCDE8;
extern s32 lbl_803B1D5C[];
void MatrixStack__Upload(void);
void MatrixStack__Load(s32 *arg0) {
    s32 *base;
    s32 count;
    s32 idx;
    s32 *src;
    s32 *dst;
    s32 w;
    base = lbl_803B1D5C;
    count = 48;
    idx = lbl_803DCDE8 * 24;
    src = arg0;
    base = (s32 *)((char *)base + 4);
    dst = *(s32 **)((char *)base + idx);
    do {
        w = src[0];
        dst[0] = w;
        w = src[1];
        dst[1] = w;
        w = src[2];
        dst[2] = w;
        w = src[3];
        dst[3] = w;
        w = src[4];
        dst[4] = w;
        w = src[5];
        dst[5] = w;
        src += 6;
        dst += 6;
        count -= 24;
    } while (count != 0);
    w = src[0];
    dst[0] = w;
    w = src[1];
    dst[1] = w;
    w = src[2];
    dst[2] = w;
    w = src[3];
    dst[3] = w;
    MatrixStack__Upload();
}
