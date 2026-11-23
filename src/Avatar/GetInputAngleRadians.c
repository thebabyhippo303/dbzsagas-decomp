/* Avatar__GetInputAngleRadians @ 0x80099FA0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
f32 atan2f(f32, f32);
extern f32 lbl_8031FBE0 __attribute__((section(".data")));
extern f32 lbl_8031FBE4 __attribute__((section(".data")));
extern f32 lbl_803DE500;

f32 Avatar__GetInputAngleRadians(f32 x, f32 y) {
    f32 a = -x;
    f32 r;
    if (y == lbl_8031FBE0) {
        if (a == lbl_8031FBE0) {
            r = lbl_8031FBE0;
        } else if (!(a <= lbl_8031FBE0)) {
            r = lbl_803DE500 * lbl_8031FBE4;
        } else {
            r = -lbl_803DE500 * lbl_8031FBE4;
        }
    } else {
        r = atan2f(a, y);
    }
    return r;
}
