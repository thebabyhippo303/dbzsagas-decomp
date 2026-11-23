/* MatrixStack__Push @ 0x80249858 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803DCDE8;
extern s32 lbl_803DD61C;
extern s32 lbl_803B1D5C[];
void MatrixStack__Push(void) {
    s32 *base;
    s32 count;
    s32 idx;
    s32 *dst;
    s32 w;
    s32  w_b;
    s32 *f12;
    s32 *e;
    s32 *f20;
    s32 *f4;
    s32 *base2;
    s32 mode;
    base = lbl_803B1D5C;
    idx = lbl_803DCDE8 * 24;
    count = 48;
    base = (s32 *)((char *)base + 4);
    dst = *(s32 **)((char *)base + idx);
    base = dst;
    dst += 16;
    do {
        w = base[0];
        dst[0] = w;
        w = base[1];
        dst[1] = w;
        w = base[2];
        dst[2] = w;
        w = base[3];
        dst[3] = w;
        w = base[4];
        dst[4] = w;
        w = base[5];
        dst[5] = w;
        base += 6;
        count -= 24;
        dst += 6;
    } while (count != 0);
    w = base[0];
    mode = lbl_803DCDE8;
    dst[0] = w;
    w = base[1];
    dst[1] = w;
    w_b = base[2];
    dst[2] = w_b;
    w = base[3];
    dst[3] = w;
    if (mode == 0) {
        f12 = lbl_803B1D5C;
        f12 = (s32 *)((char *)f12 + 12);
        e = *(s32 **)((char *)f12 + mode);
        *(s32 **)((char *)f12 + mode) = e + 1;
        e[1] = lbl_803DD61C;
    }
    idx = lbl_803DCDE8 * 24;
    base2 = lbl_803B1D5C;
    f4 = (s32 *)((char *)base2 + 4);
    f20 = (s32 *)((char *)base2 + 20);
    *(s32 *)((char *)f4 + idx) += 64;
    *(s32 *)((char *)f20 + idx) += 1;
}
