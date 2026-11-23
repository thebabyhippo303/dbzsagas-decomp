/* UiAnimator__Rewind @ 0x80260928 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct UiAnimator {
    f32 f0, f4, f8, f12;
    u8 b16; char p17; u8 b18, b19;
    u32 w20, w24;
    char g28[4];
    u32 w32, w36, w40;
    void *vt44;
} UiAnimator;

typedef void (*RewindFn)(void *, f32);

extern f32 lbl_80349B60 __attribute__((section(".rodata")));

void UiAnimator__Rewind(UiAnimator *self) {
    void *vt = self->vt44;
    s16 adjust;
    RewindFn fn;

    self->w20 = 0;
    self->w24 = 0;
    adjust = *(s16 *)((char *)vt + 232);
    fn = *(RewindFn *)((char *)vt + 236);
    fn((char *)self + adjust, lbl_80349B60);
}
