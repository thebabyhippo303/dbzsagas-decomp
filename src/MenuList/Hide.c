/* MenuList__Hide @ 0x80014E44 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8026D520();                              /* extern */

void MenuList__Hide(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
    fn_8026D520();
}
