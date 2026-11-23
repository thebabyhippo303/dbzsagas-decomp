/* BinkCopyToBuffer @ 0x802EDD58 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
void BinkCopyToBufferRect(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void BinkCopyToBuffer(void *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 o0 = ((s32 *)arg0)[0];
    s32 o1 = ((s32 *)arg0)[1];
    BinkCopyToBufferRect(arg0, a1, a2, a3, a4, a5, 0, 0, o0, o1, a6);
}
