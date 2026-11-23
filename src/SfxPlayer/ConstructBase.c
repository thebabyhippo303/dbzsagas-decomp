/* SfxPlayer__ConstructBase @ 0x80198E30 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strncpy(char *, const char *, unsigned int);
extern f32 lbl_8033F788 __attribute__((section(".data")));
extern f32 lbl_8033F78C __attribute__((section(".data")));
extern M2C_UNK lbl_80340320 __attribute__((section(".data")));

s8 *SfxPlayer__ConstructBase(s8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 a;
    f32 b;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &lbl_80340320;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    strncpy(arg0, arg1, 0x1FU);
    a = lbl_8033F788;
    b = lbl_8033F78C;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = a;
    M2C_FIELD(arg0, f32 *, 0x30) = b;
    return arg0;
}
