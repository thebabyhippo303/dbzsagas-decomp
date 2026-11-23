/* ItemSelector__AnimateOpen @ 0x8026650C (size: 0x264, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SphereAnimSet__ClearAll(void *);
void UiAnimator__SetSmoothStep(void *, s32);
void UiAnimator__Restart(void *, s32);
void UiAnimator__SetKey(void *, f32, f32);
extern f32 lbl_80349CF8 __attribute__((section(".data")));
extern f32 lbl_80349CFC __attribute__((section(".data")));
extern f32 lbl_80349D00 __attribute__((section(".data")));
extern f32 lbl_80349D04 __attribute__((section(".data")));
extern f32 lbl_80349D08 __attribute__((section(".data")));
extern f32 lbl_80349D0C __attribute__((section(".data")));
extern f32 lbl_80349D10 __attribute__((section(".data")));
extern f32 lbl_80349D14 __attribute__((section(".data")));
extern f32 lbl_80349D18 __attribute__((section(".data")));
extern f32 lbl_80349D1C __attribute__((section(".data")));
extern f32 lbl_80349D20 __attribute__((section(".data")));
extern f32 lbl_80349D24 __attribute__((section(".data")));
extern f32 lbl_80349D28 __attribute__((section(".data")));

void ItemSelector__AnimateOpen(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x6B60) = 1;
    SphereAnimSet__ClearAll(M2C_FIELD(arg0, void **, 0x178));
    if (arg1 == 0) {
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x178) + 0x124, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x124, lbl_80349CF8, lbl_80349CF8);
        temp_f30 = farg0 * lbl_80349CFC;
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x124, temp_f30, lbl_80349D00);
        temp_f31 = farg0 * lbl_80349D04;
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x124, temp_f31, lbl_80349D08);
        temp_f29 = lbl_80349D0C;
        temp_f28 = farg0 * temp_f29;
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x124, temp_f28, lbl_80349D10);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x124, farg0, lbl_80349D14);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x178) + 0x124, 0);
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x178) + 0xF4, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0xF4, lbl_80349CF8, lbl_80349CF8);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0xF4, temp_f30, temp_f29);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0xF4, temp_f31, lbl_80349D18);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0xF4, temp_f28, lbl_80349D1C);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0xF4, farg0, lbl_80349D14);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x178) + 0xF4, 0);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x304, lbl_80349CF8, lbl_80349CF8);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x304, farg0 * lbl_80349D20, lbl_80349D14);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x178) + 0x304, 0);
        UiAnimator__SetSmoothStep(M2C_FIELD(arg0, void **, 0x178) + 0x214, 1);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x214, lbl_80349CF8, lbl_80349D24);
        UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0x178) + 0x214, farg0 * lbl_80349D28, lbl_80349CF8);
        UiAnimator__Restart(M2C_FIELD(arg0, void **, 0x178) + 0x214, 0);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x124)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x120));
}
