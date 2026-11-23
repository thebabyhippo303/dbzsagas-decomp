/* DebugConsole__Fill @ 0x802CCD0C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void DebugConsole__Fill(void *arg0, s8 arg1, s8 arg2) {
    s32 var_ctr;
    s32 var_r10;

    if ((s32) M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_r10 = 0;
        var_ctr = 0xD70;
        do {
            *(s8 *)(M2C_FIELD(arg0, s32 *, 4) + var_r10) = arg1;
            M2C_FIELD((var_r10 + M2C_FIELD(arg0, s32 *, 4)), s8 *, 1) = arg2;
            var_r10 += 2;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}
