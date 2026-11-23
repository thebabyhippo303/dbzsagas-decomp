/* Sfx3DGroup__SetSuffixedVolume @ 0x8009CFAC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Sfx3DGroup__BuildSuffixedName();                /* extern */
M2C_UNK fn_801DED68(s32, s32, f32);                 /* extern */

void Sfx3DGroup__SetSuffixedVolume(s32 arg0, f32 farg0) {
    fn_801DED68(arg0, Sfx3DGroup__BuildSuffixedName(), farg0);
}
