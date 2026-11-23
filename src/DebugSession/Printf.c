/* DebugSession__Printf @ 0x802CC918 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_s;
void DebugSession__VPrintf(void *, const char *, va_s);
void DebugSession__Printf(void *arg0, const char *arg1, ...) {
    DebugSession__VPrintf(arg0, arg1, *(va_s *)__builtin_saveregs());
}
