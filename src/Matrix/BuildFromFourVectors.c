/* Matrix__BuildFromFourVectors @ 0x80206BA0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
extern f32 lbl_80345CF8 __attribute__((section(".data")));
extern f32 lbl_80345CFC __attribute__((section(".data")));
void Matrix__BuildFromFourVectors(f32 *a, f32 *b, f32 *c, f32 *d, f32 *m) {
    f32 b2 = b[2];
    f32 c1 = c[1];
    f32 a1 = a[1];
    f32 d0 = d[0];
    f32 a0 = a[0];
    f32 b0 = b[0];
    f32 d2 = d[2];
    f32 c2 = c[2];
    f32 a2 = a[2];
    f32 zero = lbl_80345CF8;
    f32 one = lbl_80345CFC;
    f32 d1 = d[1];
    f32 b1 = b[1];
    f32 c0 = c[0];
    m[0] = a0;
    m[15] = one;
    m[1] = a1;
    m[2] = a2;
    m[4] = b0;
    m[5] = b1;
    m[6] = b2;
    m[8] = c0;
    m[9] = c1;
    m[10] = c2;
    m[11] = zero;
    m[12] = d0;
    m[13] = d1;
    m[14] = d2;
    m[3] = zero;
    m[7] = zero;
}
