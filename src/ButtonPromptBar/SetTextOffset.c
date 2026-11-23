/* ButtonPromptBar__SetTextOffset @ 0x80262334 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void Sphere__SetOffset(void *, f32, f32);
void ButtonPromptBar__SetTextOffset(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    Sphere__SetOffset((arg1 * 0x550) + arg0 + 0x4F0, farg0, farg1);
}
