/* WaterSurface__ResetLayer @ 0x802776F0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_8034ED0C __attribute__((section(".data")));
extern f32 lbl_8034ED10 __attribute__((section(".data")));
extern char lbl_8034EC84[] __attribute__((section(".data")));
void WaterSurface__ResetLayer(void *arg0, void *arg1) {
    char *d = lbl_8034EC84;
    char *sub = (char *)arg1 + 116;
    f32 a = lbl_8034ED0C;
    f32 b;
    s32 v84;
    u16 v88;
    *(f32 *)((char *)arg1 + 76) = a;
    *(f32 *)((char *)arg1 + 80) = a;
    b = lbl_8034ED10;
    v84 = *(s32 *)lbl_8034EC84;
    v88 = *(u16 *)(d + 4);
    *(s32 *)((char *)arg1 + 84) = v84;
    *(u16 *)((char *)arg1 + 88) = v88;
    *(f32 *)((char *)arg1 + 116) = b;
    *(f32 *)(sub + 4) = a;
    *(f32 *)(sub + 8) = b;
}
