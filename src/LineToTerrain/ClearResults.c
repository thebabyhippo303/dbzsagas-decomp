/* LineToTerrain__ClearResults @ 0x801896DC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { s32 f0; s32 pad; s32 a[8]; s32 rest[4]; } LTEntry;
void *LineToTerrain__ClearResults(void *arg0) {
    LTEntry *base;
    LTEntry *e;
    s32 *q;
    s32 i;
    s32 k;

    base = (LTEntry *)((char *)arg0 + 0x70);
    e = base;
    i = 31;
    do {
        e->f0 = 0;
        k = 8;
        do {
            e->a[k - 1] = 0;
        } while (--k != 0);
        e++;
    } while (--i != -1);
    q = (s32 *)((char *)arg0 + 0x774);
    *(s32 *)((char *)base + 0x700) = 0;
    q[0] = 0;
    q[5] = 0;
    q[3] = 0;
    q[4] = 0;
    return arg0;
}
