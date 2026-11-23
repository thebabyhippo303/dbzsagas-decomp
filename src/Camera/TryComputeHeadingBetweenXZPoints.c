/* Camera__TryComputeHeadingBetweenXZPoints @ 0x800C0B48 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
extern f32 lbl_80321880 __attribute__((section(".data")));
extern f32 lbl_80321884 __attribute__((section(".data")));
extern f32 lbl_80321888 __attribute__((section(".data")));
extern f32 lbl_8032188C __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;
extern f32 lbl_803DE524;
extern f32 atan2f(f32 y, f32 x);
s32 Camera__TryComputeHeadingBetweenXZPoints(f32 *p, f32 *out, f32 x, f32 z) {
    f32 dz, dx, a;
    if (p[0] == x) {
        if (p[2] == z) return 0;
    }
    dz = p[2] - z;
    dx = p[0] - x;
    if (dz == lbl_80321880) {
        f32 b;
        if (dx == lbl_80321880) b = lbl_80321880;
        else if (!(dx <= lbl_80321880)) b = lbl_803DE500 * lbl_80321884;
        else b = -lbl_803DE500 * lbl_80321884;
        a = b;
    } else {
        a = atan2f(dx, dz);
    }
    a = a + lbl_803DE500;
    if (a > lbl_80321888 || !(a >= lbl_8032188C))
        a = lbl_80321880;
    if (!(a >= -lbl_803DE500)) {
        do { a += lbl_803DE504; } while (a < -lbl_803DE500);
    }
    {
        f32 pi = lbl_803DE500;
        if (!(a <= pi)) {
            do { a -= lbl_803DE504; } while (a > pi);
        }
    }
    *out = a * lbl_803DE524;
    return 1;
}
