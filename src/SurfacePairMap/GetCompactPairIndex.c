/* SurfacePairMap__GetCompactPairIndex @ 0x801F8B5C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[0x18]; int limit; int count; int *table; } SurfacePairMap;
int SurfacePairMap__GetCompactPairIndex(SurfacePairMap *self, int a, int b) {
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a >= self->limit) {
        return -1;
    }
    return b + ((a * ((self->count << 1) - a - 1)) >> 1);
}
