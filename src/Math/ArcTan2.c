/* Math__ArcTan2 @ 0x802B2634 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
f32 Script__PopFloat(void *, s32);
f32 atan2f(f32, f32);
void Script__PushFloat(void *, s32, f32);
extern f32 lbl_80351EE0 __attribute__((section(".data")));
extern f32 lbl_80351EE4 __attribute__((section(".data")));
extern f32 lbl_803DE500 __attribute__((section(".sdata")));
void Math__ArcTan2(void *a, s32 b) {
    f32 x = Script__PopFloat(a, b);
    f32 y = Script__PopFloat(a, b);
    f32 r = lbl_80351EE0;
    if (x == r) {
        if (y != r) {
            if (!(y <= r)) { r = lbl_803DE500 * lbl_80351EE4; } else { r = -lbl_803DE500 * lbl_80351EE4; }
        }
    } else {
        r = atan2f(y, x);
    }
    Script__PushFloat(a, b, r);
}
