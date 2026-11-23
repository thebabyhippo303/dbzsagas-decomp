/* CFilterCollide__ApplyFocus @ 0x800CFD4C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;

typedef struct {
    u32 first;
    u32 second;
    u32 third;
} FocusData;

FocusData *CFilterCollide__ApplyFocus(FocusData *dst, void *a1, void *a2, void *a3, void *a4, const FocusData *src) {
    u32 first = src->first;
    FocusData *d = dst;
    u32 second = src->second;
    u32 third = src->third;
    d->first = first;
    d->second = second;
    d->third = third;
    return dst;
}
