/* tanf @ 0x801600E8 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
f32 __kernel_tanf(f32 x, f32 y, s32 iy);
s32 __ieee754_rem_pio2f(f32 x, f32 *y);
extern f32 lbl_803DC8CC;

f32 tanf(f32 xx) {
    f32 x = xx;
    f32 s[3];
    f32 z = lbl_803DC8CC;
    s32 ix;
    s32 n;

    s[2] = x;
    ix = *(s32 *)&s[2] & 0x7fffffff;
    if (ix <= 0x3f490fda) {
        return __kernel_tanf(x, z, 1);
    }
    if (ix > 0x7f7fffff) {
        return x - x;
    }
    n = __ieee754_rem_pio2f(x, s);
    return __kernel_tanf(s[0], s[1], 1 - ((n & 1) << 1));
}
