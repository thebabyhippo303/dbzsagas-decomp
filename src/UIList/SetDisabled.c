/* UIList__SetDisabled @ 0x80136518 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UI__SetColorRGBA(void *, f32, f32, f32, f32);
extern f32 lbl_8032AC18 __attribute__((section(".data")));
extern f32 lbl_8032AC1C __attribute__((section(".data")));

void UIList__SetDisabled(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x368) = 0;
    UI__SetColorRGBA(arg0 + 0x1A0, lbl_8032AC18, lbl_8032AC18, lbl_8032AC18, lbl_8032AC1C);
}

