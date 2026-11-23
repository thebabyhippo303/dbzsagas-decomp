/* Gfx__Initialize @ 0x8024358C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void RenderState__Initialize(void);
void Gfx__SetFullscreenViewport(void);
void MatrixStack__SetMode(s32);
void MatrixStack__LoadIdentity(void);
s32 Gfx__InitDisplay(void);
void fn_802430D0(void);
void fn_80248D98(void);
extern s32 lbl_803742F0 __attribute__((section(".data")));

s32 Gfx__Initialize(void) {
    lbl_803742F0 = 0x87654321;
    if (Gfx__InitDisplay() == 0) {
        return 0;
    }
    fn_80248D98();
    fn_802430D0();
    RenderState__Initialize();
    Gfx__SetFullscreenViewport();
    MatrixStack__SetMode(0);
    MatrixStack__LoadIdentity();
    return 1;
}
