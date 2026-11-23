/* Xml__SkipProcessingInstruction @ 0x803061E0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned int u32; typedef int s32;
s32 Xml__SkipProcessingInstruction(u8 *arg0, u32 arg1) {
    register u8 *p = arg0;
    p += 2;
    if (arg1 > 2) {
        while (1) {
            if (p[0] == 0x3F && p[1] == 0x3E) {
                p += 2;
                return p - arg0;
            }
            p += 1;
            if ((u32)(p - arg0) >= arg1) break;
        }
    }
    return 0;
}