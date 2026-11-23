/* Sphere__AnimateColor @ 0x8026CE24 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef short s16;
typedef int s32;
#define NULL 0
extern f32 lbl_80349F64 __attribute__((section(".data")));
void UiAnimator__ClearKeys(void *);
void UiAnimator__SetKey(void *, f32, f32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void Sphere__AnimateColor(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    char *vt;
    if (*(void **)((char *)arg0 + 356) == NULL) {
        vt = *(char **)((char *)arg0 + 412);
        ((void (*)(void *, s32))*(void **)(vt + 492))((char *)arg0 + *(s16 *)(vt + 488), 0);
    }
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 628);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 628, lbl_80349F64, *(f32 *)((char *)arg0 + 84));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 628, arg1, arg2);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 628, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 628, 0);
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 676);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 676, lbl_80349F64, *(f32 *)((char *)arg0 + 88));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 676, arg1, arg3);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 676, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 676, 0);
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 724);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 724, lbl_80349F64, *(f32 *)((char *)arg0 + 92));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 724, arg1, arg4);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 724, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 724, 0);
    UiAnimator__ClearKeys((char *)*(char **)((char *)arg0 + 356) + 580);
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 580, lbl_80349F64, *(f32 *)((char *)arg0 + 80));
    UiAnimator__SetKey((char *)*(char **)((char *)arg0 + 356) + 580, arg1, arg5);
    UiAnimator__SetSmoothStep((char *)*(char **)((char *)arg0 + 356) + 580, 1);
    UiAnimator__Restart((char *)*(char **)((char *)arg0 + 356) + 580, 0);
}
