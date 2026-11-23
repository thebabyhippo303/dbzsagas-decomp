/* Compress__InflateBuffer @ 0x802559F8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
M2C_UNK uncompress(s32, s32, s32, s32);
s32 Compress__InflateBuffer(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 len = arg3;
    s32 rc = uncompress(arg1, &len, arg0, arg2);
    s32 ret = 0;
    if (rc == 0) {
        ret = len;
    }
    return ret;
}
