/* Fmv__Exists @ 0x801D91D0 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Fmv__BuildPath(char *, char *);
M2C_UNK DVDConvertPathToEntrynum(s32);
s32 Fmv__Exists(s8 *arg0) {
    union { s8 value; unsigned char bytes[124]; } sp8;
    s32 var_r3;

    Fmv__BuildPath(arg0, ((s8 *)sp8.bytes));
    var_r3 = DVDConvertPathToEntrynum((s32) ((s8 *)sp8.bytes)) != -1;
    return var_r3;
}
