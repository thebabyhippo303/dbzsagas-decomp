/* MatrixStack__Scale @ 0x8024922C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
void MatrixStack__MultMatrix(float *);
extern float lbl_803478D0 __attribute__((section(".rodata")));
extern float lbl_803478D4 __attribute__((section(".rodata")));
void MatrixStack__Scale(float sx, float sy, float sz) {
    float m[16];
    float *p;
    float one;
    float zero;
    one = lbl_803478D0;
    zero = lbl_803478D4;
    p = m;
    m[0] = one;
    p[1] = zero; p[2] = zero; p[3] = zero; p[4] = zero;
    p[5] = one; p[6] = zero; p[7] = zero; p[8] = zero;
    p[9] = zero; p[10] = one; p[11] = zero; p[12] = zero;
    p[13] = zero; p[14] = zero; p[15] = one;
    m[0] = sx; m[5] = sy; m[10] = sz;
    MatrixStack__MultMatrix(m);
}
