/* ItemSelector__SetWobbleAnimation @ 0x80266368 (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__EnsureAnimSet(void *, s32);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__AppendKey(void *, f32);
typedef void (*AppendKey3Fn)(void *, f32, f32);
void UiAnimator__Restart(void *, s32);
void UiAnimator__SetRate(void *, f32);
void SphereAnimSet__ClearAll(void *);
void UiAnimator__SetKey(void *, f32, f32);
extern f32 lbl_80349CD8 __attribute__((section(".data")));
extern f32 lbl_80349CDC __attribute__((section(".data")));
extern f32 lbl_80349CE0 __attribute__((section(".data")));
extern f32 lbl_80349CE4 __attribute__((section(".data")));
extern f32 lbl_80349CE8 __attribute__((section(".data")));
extern f32 lbl_80349CEC __attribute__((section(".data")));
extern f32 lbl_80349CF0 __attribute__((section(".data")));
extern f32 lbl_80349CF4 __attribute__((section(".data")));

void ItemSelector__SetWobbleAnimation(void *arg0, s32 arg1) {
    Sphere__EnsureAnimSet(arg0 + 0x2F98, 0);
    if (arg1 != 0) {
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x30FC) + 0x214, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x30FC) + 0x214, lbl_80349CD8, lbl_80349CDC);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0x214, lbl_80349CE0, lbl_80349CE4);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0x214, lbl_80349CE8, lbl_80349CDC);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x30FC) + 0x214, 1);
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x30FC) + 0xF4, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x30FC) + 0xF4, lbl_80349CD8, lbl_80349CEC);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0xF4, lbl_80349CEC, lbl_80349CF0);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0xF4, lbl_80349CEC, lbl_80349CEC);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x30FC) + 0xF4, 1);
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, lbl_80349CD8, lbl_80349CEC);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, lbl_80349CF4, lbl_80349CEC);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, lbl_80349CEC, lbl_80349CF0);
        ((AppendKey3Fn)UiAnimator__AppendKey)(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, lbl_80349CEC, lbl_80349CEC);
        UiAnimator__SetRate(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, lbl_80349CF4);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x30FC) + 0x124, 1);
        return;
    }
    SphereAnimSet__ClearAll(M2C_FIELD(arg0, void **, 0x30FC));
}
