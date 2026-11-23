/* Sfx3DGroup__PlaySuffixedSound @ 0x8009CF34 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s8 * Sfx3DGroup__BuildSuffixedName(void *, s8 *);
M2C_UNK fn_801DEC0C(void *, s8 *, s32);             /* extern */

void Sfx3DGroup__PlaySuffixedSound(void *arg0, s8 *arg1, s32 arg2) {
    fn_801DEC0C(arg0, Sfx3DGroup__BuildSuffixedName(arg0, arg1), arg2);
}
