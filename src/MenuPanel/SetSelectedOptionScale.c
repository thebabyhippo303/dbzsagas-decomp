/* MenuPanel__SetSelectedOptionScale @ 0x80268344 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void MenuPanel__SetSelectedOptionScale(void *arg0, f32 farg0, f32 farg1) {
    *(f32 *)((char *)arg0 + 44576) = farg0;
    *(f32 *)((char *)arg0 + 44580) = farg1;
}
