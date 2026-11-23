/* MemoryCard__TranslateCardResult @ 0x801D836C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 MemoryCard__TranslateCardResult(void *self_, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        return 0;
    case -3:
        return 1;
    case -2:
        return 0xA;
    case -5:
    case -128:
        return 6;
    case -6:
        return 3;
    case -13:
        return 9;
    case -4:
        return 2;
    default:
        return 1;
    }
}
