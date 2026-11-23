/* DVD__MapStatusToFileError @ 0x80180DD8 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 DVD__MapStatusToFileError(s32 arg0, s32 arg1) {
    s32 var_r4 = arg1;
    switch (arg0) {
    case -1:
        var_r4 = 17;
        break;
    case 0:
    case 1:
    case 2:
    case 7:
    case 9:
    case 10:
        var_r4 = 0;
        break;
    case 4:
        var_r4 = 14;
        break;
    case 5:
        var_r4 = 13;
        break;
    case 6:
        var_r4 = 15;
        break;
    case 11:
        var_r4 = 16;
        break;
    }
    return var_r4;
}
