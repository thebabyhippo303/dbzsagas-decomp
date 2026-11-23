/* CmdCon__PrintNotify @ 0x80189B8C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char gpr; char fpr; short pad; char *overflow; char *save; } va_s;
void CmdCon__VPrintAtLevel(void *, s32, s8 *, va_s);
void CmdCon__PrintNotify(void *arg0, s8 *arg1, ...) {
    CmdCon__VPrintAtLevel(arg0, 2, arg1, *(va_s *)__builtin_saveregs());
}
