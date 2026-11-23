/* Gfx__FlipFrameBuffer @ 0x802432C4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u32 lbl_803DD604;
extern void *lbl_803DCD70;
extern u32 lbl_803DCD74;
void VISetNextFrameBuffer(void *);
void VIFlush(void);
void Gfx__FlipFrameBuffer(void) {
    lbl_803DD604++;
    lbl_803DCD74++;
    if (lbl_803DCD70 == NULL) return;
    VISetNextFrameBuffer(lbl_803DCD70);
    lbl_803DCD70 = NULL;
    VIFlush();
}
