/* MenuPanel__AnimateDeselectedOption @ 0x80269B68 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UiAnimator__SetEaseIn(void *, s32);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void UiAnimator__Restart(void *, s32);
void UiAnimator__SetKey(void *, f32, f32);
extern f32 lbl_80349E5C __attribute__((section(".data")));
extern f32 lbl_80349E60 __attribute__((section(".data")));

void MenuPanel__AnimateDeselectedOption(void *arg0) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0xADFC);
    if (temp_r31 != NULL) {
        UiAnimator__SetKey(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0xF4, lbl_80349E5C, M2C_FIELD(temp_r31, f32 *, 0x4C));
        UiAnimator__SetKey(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0xF4, lbl_80349E5C, lbl_80349E60);
        UiAnimator__SetEaseIn(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0xF4, 1);
        UiAnimator__Restart(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0xF4, 0);
        UiAnimator__SetKey(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0x124, lbl_80349E5C, M2C_FIELD(temp_r31, f32 *, 0x50));
        UiAnimator__SetKey(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0x124, lbl_80349E5C, lbl_80349E60);
        UiAnimator__SetEaseIn(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0x124, 1);
        UiAnimator__Restart(M2C_FIELD(temp_r31, s32 *, 0x17C) + 0x124, 0);
        Sphere__SetColor((char *)temp_r31 + 0x18, M2C_FIELD(arg0, f32 *, 0xAE00), M2C_FIELD(arg0, f32 *, 0xAE04), M2C_FIELD(arg0, f32 *, 0xAE08), M2C_FIELD(arg0, f32 *, 0xAE0C));
    }
}
