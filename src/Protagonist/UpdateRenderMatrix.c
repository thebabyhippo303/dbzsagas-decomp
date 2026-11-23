/* Protagonist__UpdateRenderMatrix @ 0x801F1A8C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void CActor__UpdateRenderMatrix(s32);
void Protagonist__UpdateAttachedChildren(s32);

void Protagonist__UpdateRenderMatrix(s32 arg0) {
    CActor__UpdateRenderMatrix(arg0);
    Protagonist__UpdateAttachedChildren(arg0);
}
