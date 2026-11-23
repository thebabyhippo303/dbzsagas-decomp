/* Math__IsValueBetween @ 0x802CC7B0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
s32 Math__IsValueBetween(f32 v, f32 f2, f32 f3) {
    s32 result = 0;
    if (v > f2) {
        goto checkHi;
    }
    if (v >= f3) {
        goto ret1;
    }
    if (v < f2) {
        goto done;
    }
checkHi:
    if (v > f3) {
        goto done;
    }
ret1:
    result = 1;
done:
    return result;
}
