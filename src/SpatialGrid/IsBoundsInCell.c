/* SpatialGrid__IsBoundsInCell @ 0x8025FB58 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_803498B0 __attribute__((section(".rodata")));

s32 SpatialGrid__IsBoundsInCell(f32 *a, f32 *b) {
    s32 e;
    s32 ret = 0;
    f32 areaA = (a[2] - a[0]) * (a[3] - a[1]);
    f32 areaB = (b[2] - b[0]) * (b[3] - b[1]);

    if (areaB >= areaA * lbl_803498B0) {
        goto succ;
    }
    e = 0;
    if (b[2] < a[0]) {
        goto etest;
    }
    if (b[0] > a[2]) {
        goto etest;
    }
    if (b[1] > a[3]) {
        goto etest;
    }
    e = (b[3] >= a[1]);
etest:
    if (e != 0) {
        goto fail;
    }
succ:
    ret = 1;
fail:
    return ret;
}
