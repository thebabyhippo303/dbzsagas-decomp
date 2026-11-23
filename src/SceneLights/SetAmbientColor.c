/* SceneLights__SetAmbientColor @ 0x8021A644 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} SLColor;

extern SLColor lbl_803ACFFC __attribute__((section(".data")));

void SceneLights__ClampColor(SLColor *);
void Gfx__SetAmbientColor(SLColor *);

void SceneLights__SetAmbientColor(SLColor *arg) {
    SLColor tmp;
    lbl_803ACFFC = *arg;
    SceneLights__ClampColor(&lbl_803ACFFC);
    tmp = lbl_803ACFFC;
    Gfx__SetAmbientColor(&tmp);
}
