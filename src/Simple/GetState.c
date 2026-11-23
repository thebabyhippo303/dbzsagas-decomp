/* Simple__GetState @ 0x802CB5DC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Simple__GetState(s32 *arg0) {
    s32 flag;
    if (arg0[128] != -1) {
        return arg0[128];
    }
    if (arg0[150] == 0) {
        return 0;
    }
    flag = (arg0[240] != 0);
    if (flag != 0) {
        return 0;
    }
    return 5;
}
