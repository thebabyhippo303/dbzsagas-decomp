/* Camera__GetSmoothTransitionWeight @ 0x800B9DD4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80321588 __attribute__((section(".data")));
extern f32 lbl_8032158C __attribute__((section(".data")));
extern f32 lbl_80321590 __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));

f32 Camera__GetSmoothTransitionWeight(void *arg0) {
    f32 lower = lbl_80321588;
    f32 upper = lbl_8032158C;
    register f32 value = (lbl_803A35C4 - M2C_FIELD(arg0, f32 *, 0x44)) /
                         M2C_FIELD(arg0, f32 *, 0x48);
    f32 weight;
    if (value < lower) {
        weight = lower;
    } else if (!(value <= upper)) {
        weight = upper;
    } else {
        weight = value;
    }
    return (lbl_80321590 - (2.0f * weight)) * weight * weight;
}
