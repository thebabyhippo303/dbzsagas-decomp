/* FmvBackground__Run @ 0x801DAE7C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Fmv__BackgroundThreadMain(s32, s32 *, M2C_UNK *, void *); /* extern */
extern M2C_UNK fn_801DAED0 __attribute__((section(".data")));
extern s32 lbl_803DCCA4;

void FmvBackground__Run(void *base) {
    s32 sp8;
    s32 *p = (s32 *)((char *)base + 0x8350);
    lbl_803DCCA4 = 0;
    p[0] = 0;
    Fmv__BackgroundThreadMain(p[1], &sp8, &fn_801DAED0, base);
    p[0] = sp8;
}
