/* CmdCon__VPrintAtLevel @ 0x8018B3D8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 vsprintf(char *, char *, void *);
void CmdCon__OutputAtLevel(void *, s32, s32);
void CmdCon__VPrintAtLevel(void *arg0, s32 arg1, s8 *arg2, void *arg3) {
    union { s8 value; unsigned char bytes[1024]; } sp8;

    vsprintf(((s8 *)sp8.bytes), arg2, arg3);
    CmdCon__OutputAtLevel(arg0, arg1, (s32) ((s8 *)sp8.bytes));
}
