/* ButtonPromptBar__SetSlotIcon @ 0x80262114 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);

void ButtonPromptBar__SetSlotIcon(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg1 <= 11) {
        Sphere__SetTexture(arg1 * 1360 + arg0 + 848, arg2, arg3, 0, 1, 1);
    }
}
