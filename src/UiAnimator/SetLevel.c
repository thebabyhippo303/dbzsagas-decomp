/* UiAnimator__SetLevel @ 0x802601CC (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void UiAnimator__SetLevel(void *self, u8 level) {
    M2C_FIELD(self, u8 *, 19) = level;
}
