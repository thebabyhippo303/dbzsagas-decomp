/* DebugMenu__AddMethodWithArgItem @ 0x8026536C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void BaseMenu__AddMethodWithArgItem(s32, s32, s32, void *, s32);

typedef struct { s32 a; s32 b; } Pair;

void DebugMenu__AddMethodWithArgItem(s32 arg0, s32 arg1, s32 arg2, Pair *arg3, s32 arg4) {
    Pair tmp;

    tmp = *arg3;
    BaseMenu__AddMethodWithArgItem(arg0, arg1, arg2, &tmp, arg4);
}
