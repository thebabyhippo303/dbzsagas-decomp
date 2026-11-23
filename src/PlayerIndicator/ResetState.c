/* PlayerIndicator__ResetState @ 0x8011EF00 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803DC6A4;
extern s32 lbl_803DC6A8;

void PlayerIndicator__ResetState(void) {
    lbl_803DC6A8 = 0;
    lbl_803DC6A4 = 0;
}
