/* Sphere__AnimateSecondaryColor @ 0x8026D004 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
extern f32 lbl_80349F68 __attribute__((section(".data")));
void UiAnimator__ClearKeys(void *);
void UiAnimator__SetKey(void *, f32, f32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void Sphere__AnimateSecondaryColor(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    char *vt;
    if (*(void **)((char *)arg0 + 356) == NULL) {
        vt = *(char **)((char *)arg0 + 412);
        ((void (*)(void *, s32))*(void **)(vt + 492))((char *)arg0 + *(s16 *)(vt + 488), 0);
    }
    UiAnimator__ClearKeys(*(char **)((char *)arg0 + 356) + 820);
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 820, lbl_80349F68, *(f32 *)((char *)arg0 + 100));
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 820, arg1, arg2);
    UiAnimator__SetSmoothStep(*(char **)((char *)arg0 + 356) + 820, 1);
    UiAnimator__Restart(*(char **)((char *)arg0 + 356) + 820, 0);
    UiAnimator__ClearKeys(*(char **)((char *)arg0 + 356) + 868);
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 868, lbl_80349F68, *(f32 *)((char *)arg0 + 104));
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 868, arg1, arg3);
    UiAnimator__SetSmoothStep(*(char **)((char *)arg0 + 356) + 868, 1);
    UiAnimator__Restart(*(char **)((char *)arg0 + 356) + 868, 0);
    UiAnimator__ClearKeys(*(char **)((char *)arg0 + 356) + 916);
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 916, lbl_80349F68, *(f32 *)((char *)arg0 + 108));
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 916, arg1, arg4);
    UiAnimator__SetSmoothStep(*(char **)((char *)arg0 + 356) + 916, 1);
    UiAnimator__Restart(*(char **)((char *)arg0 + 356) + 916, 0);
    UiAnimator__ClearKeys(*(char **)((char *)arg0 + 356) + 772);
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 772, lbl_80349F68, *(f32 *)((char *)arg0 + 96));
    UiAnimator__SetKey(*(char **)((char *)arg0 + 356) + 772, arg1, arg5);
    UiAnimator__SetSmoothStep(*(char **)((char *)arg0 + 356) + 772, 1);
    UiAnimator__Restart(*(char **)((char *)arg0 + 356) + 772, 0);
}
