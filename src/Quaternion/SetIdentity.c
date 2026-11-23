/* Quaternion__SetIdentity @ 0x801AC580 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

extern f32 lbl_803413E4 __attribute__((section(".data")));
extern f32 lbl_803413E8 __attribute__((section(".data")));

void Quaternion__SetIdentity(f32 *q) {
    f32 zero = lbl_803413E4;
    f32 one = lbl_803413E8;
    q[0] = zero;
    q[1] = zero;
    q[3] = one;
    q[2] = zero;
}
