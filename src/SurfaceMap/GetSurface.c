/* SurfaceMap__GetSurface @ 0x801FBCD0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: SurfaceMap__GetSurface @ 0x801FBCD0 (0x60). ProDG -O2. */
typedef struct SurfaceMap {
    char pad[4];
    void *defSurf;
    char pad8[4];
    int defIdx;
    int minIdx;
    int maxIdx;
    int useMax;
    void *table[64];
} SurfaceMap;

void *SurfaceMap__GetSurface(SurfaceMap *self, int a, int b, int idx) {
    if (idx >= 0)
        goto cont;
    idx = self->defIdx;
    if (idx >= 0)
        goto cont;
def:
    return self->defSurf;
cont:
    if (self->useMax) {
        if (idx < self->maxIdx)
            goto def;
    } else {
        if (idx >= self->maxIdx)
            goto lookup;
    }
    if (idx > self->minIdx)
        goto def;
lookup:
    return self->table[idx & 0x3F];
}
