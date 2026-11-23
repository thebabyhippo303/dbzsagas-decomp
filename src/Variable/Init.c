/* Variable__Init @ 0x8018C6C0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char *strncpy(char *, char *, u32);
extern char lbl_8033F1E8[];

void *Variable__Init(void *arg0, s32 arg1, s8 *arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, char **, 4) = lbl_8033F1E8;
    strncpy((char *)arg0 + 8, arg2, 0x2FU);
    M2C_FIELD(arg0, s32 *, 0x38) = arg3;
    M2C_FIELD(arg0, s8 *, 0x37) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
    return arg0;
}
