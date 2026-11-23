/* MenuPanel__SetMessageDropShadow @ 0x80268440 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__SetDropShadow(void *, s32, s8, s8, s8);

void MenuPanel__SetMessageDropShadow(s32 arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4) {
    Sphere__SetDropShadow(arg0 + 0x5D6C, arg1, arg2, arg3, arg4);
}
