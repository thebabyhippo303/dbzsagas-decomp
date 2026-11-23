/* UiAnimator__UpdateAll @ 0x8025FEA4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *lbl_803DCE58;
extern u8 lbl_803DCE5C;
void UiAnimator__UpdateAll(f32 farg0) {
void *temp_r9;
void *var_r31;
var_r31 = lbl_803DCE58;
if (var_r31 != NULL) {
do {
if ((s8)M2C_FIELD(var_r31, u8 *, 0x13) >= (s8)lbl_803DCE5C) {
temp_r9 = M2C_FIELD(var_r31, void **, 0x2C);
M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x1C)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x18), farg0);
}
var_r31 = M2C_FIELD(var_r31, void **, 0x1C);
} while (var_r31 != NULL);
}
}
