/* Sphere__AnimateAlpha @ 0x8026D1E4 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80349F6C __attribute__((section(".data")));
void UiAnimator__ClearKeys(void *);
void UiAnimator__SetKey(void *, f32, f32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void Sphere__AnimateAlpha(void *arg0, f32 arg1, f32 arg2) {
    char *vt;
    if (*(void **)((char *)arg0 + 356) == NULL) {
        vt = *(char **)((char *)arg0 + 412);
        ((void (*)(void *, s32))*(void **)(vt + 492))((char *)arg0 + *(s16 *)(vt + 488), 0);
    }
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 580);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 580, lbl_80349F6C, *(f32 *)((char *)arg0 + 80));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 580, arg1, arg2);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 580, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 580, 0);
}
