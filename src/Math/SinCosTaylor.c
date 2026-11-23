/* Math__SinCosTaylor @ 0x801A5D18 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
extern f32 lbl_80340CF4 __attribute__((section(".data")));
extern f32 lbl_80340CF8 __attribute__((section(".data")));
extern f32 lbl_80340CFC __attribute__((section(".data")));
extern f32 lbl_80340D00 __attribute__((section(".data")));
extern f32 lbl_80340D04 __attribute__((section(".data")));
void Math__SinCosTaylor(void *arg0, f32 *arg1, f32 *arg2, f32 farg0) {
    f32 a, b, c, d, e, x2, sine, cosine;
    a = lbl_80340CF4;
    b = lbl_80340CF8;
    c = lbl_80340CFC;
    d = lbl_80340D00;
    e = lbl_80340D04;
    x2 = farg0 * farg0;
    sine = x2 * a + b;
    sine = sine * x2 + c;
    *arg1 = sine * farg0;
    cosine = x2 * d + e;
    cosine = cosine * x2 + c;
    *arg2 = cosine;
}
