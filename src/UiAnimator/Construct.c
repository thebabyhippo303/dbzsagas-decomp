/* UiAnimator__Construct @ 0x8025FE00 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80349B4C __attribute__((section(".rodata")));
extern char lbl_8034E788[] __attribute__((section(".rodata")));
typedef struct UiAnimator {
    f32 f0, f4, f8, f12;
    u8 b16; char p17; u8 b18, b19;
    u32 w20, w24;
    char g28[4];
    u32 w32, w36, w40;
    void *vt44;
} UiAnimator;
void UiAnimator__Construct(UiAnimator *this) {
    UiAnimator *t = this;
    void *vt = (void *)lbl_8034E788;
    f32 c = lbl_80349B4C;
    t->vt44 = vt;
    t->f12 = c;
    t->b16 = 4;
    t->b19 = 0;
    t->w40 = 0;
    t->f0 = c;
    t->f4 = c;
    t->f8 = c;
    t->b18 = 0;
    t->w20 = 0;
    t->w24 = 0;
    t->w32 = 0;
    t->w36 = 0;
}
