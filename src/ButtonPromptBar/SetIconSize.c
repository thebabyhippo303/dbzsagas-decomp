/* ButtonPromptBar__SetIconSize @ 0x80262160 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__SetSize(void *);

void ButtonPromptBar__SetIconSize(s32 arg0, u32 arg1) {
    if (arg1 <= 11) {
        Sphere__SetSize(arg1 * 1360 + arg0 + 848);
    }
}
