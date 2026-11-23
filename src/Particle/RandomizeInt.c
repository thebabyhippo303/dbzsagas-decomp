/* Particle__RandomizeInt @ 0x80221C90 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
f32 Rand__RangeFloat(void *, f32, f32);
extern s32 lbl_803DD6BC;
extern f32 lbl_80346758 __attribute__((section(".rodata")));
extern f32 lbl_8034675C __attribute__((section(".rodata")));
extern f32 lbl_80346768 __attribute__((section(".rodata")));
s32 Particle__RandomizeInt(s32 arg0, s32 arg1)
{
    f32 r;

    if (arg1 == 0) {
        return arg0;
    }
    r = Rand__RangeFloat(&lbl_803DD6BC, lbl_80346758, lbl_8034675C);
    if (arg1 == 255) {
        return (s32)((f32)arg0 * r);
    } else {
        s32 v = (s32)(((f32)arg0 * lbl_80346768) * (f32)arg1 * r);
        s32 s = arg0 + v;
        if (s < 0) {
            s = 0;
        }
        return s;
    }
}
