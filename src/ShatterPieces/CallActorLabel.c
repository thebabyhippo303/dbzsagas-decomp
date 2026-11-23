/* ShatterPieces__CallActorLabel @ 0x800F0614 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AnimScript__CallActorLabel(void *, s32, s32, s32, s32);
void ShatterPieces__CallActorLabel(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AnimScript__CallActorLabel(arg0 + 0x1C, 1, arg1, arg2, arg3);
}
