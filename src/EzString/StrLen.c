/* EzString__StrLen @ 0x8026FA98 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__StrLen(u8 *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if ((arg0 != NULL) && ((s32) *arg0 != 0)) {
        do {
            var_r9 += 1;
        } while ((s32) *(arg0 + var_r9) != 0);
    }
    return var_r9;
}