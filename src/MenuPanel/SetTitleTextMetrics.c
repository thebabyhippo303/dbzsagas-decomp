/* MenuPanel__SetTitleTextMetrics @ 0x80267650 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);
void fn_80272294(void *, f32);
void MenuPanel__SetTitleTextMetrics(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    void *t = (char *)arg0 + 11652;
    SphereText__SetSize(t, farg0);
    SphereText__SetSpacing(t, farg1);
    fn_80272294(t, farg2);
}
