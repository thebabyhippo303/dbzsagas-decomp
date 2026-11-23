/* Sphere__AnimatePosition @ 0x8026D2A4 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80349F70 __attribute__((section(".data")));
void UiAnimator__ClearKeys(void *);
void UiAnimator__SetKey(void *, f32, f32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void Sphere__AnimatePosition(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    char *vt;
    if (*(void **)((char *)arg0 + 356) == NULL) {
        vt = *(char **)((char *)arg0 + 412);
        ((void (*)(void *, s32))*(void **)(vt + 492))((char *)arg0 + *(s16 *)(vt + 488), 0);
    }
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 52);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 52, lbl_80349F70, *(f32 *)((char *)arg0 + 36));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 52, arg1, arg2);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 52, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 52, 0);
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 100);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 100, lbl_80349F70, *(f32 *)((char *)arg0 + 40));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 100, arg1, arg3);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 100, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 100, 0);
}
