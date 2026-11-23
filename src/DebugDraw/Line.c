/* DebugDraw__Line @ 0x8018671C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK DebugDraw__ColorFromIndex(s32, s32);
M2C_UNK fn_80244F44(s32, s32, s32);
void DebugDraw__Line(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp8;

    DebugDraw__ColorFromIndex(arg2, (s32) &sp8);
    fn_80244F44(arg0, arg1, (s32) &sp8);
}
