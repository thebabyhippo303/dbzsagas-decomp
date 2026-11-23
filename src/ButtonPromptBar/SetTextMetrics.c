/* ButtonPromptBar__SetTextMetrics @ 0x8026221C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SphereText__SetAlignment(void *, f32);
void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);
void ButtonPromptBar__SetTextMetrics(s32 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    void *temp_r30;

    temp_r30 = (arg1 * 0x550) + arg0 + 0x4F0;
    SphereText__SetSize(temp_r30, farg0);
    SphereText__SetSpacing(temp_r30, farg1);
    SphereText__SetAlignment(temp_r30, farg2);
}
