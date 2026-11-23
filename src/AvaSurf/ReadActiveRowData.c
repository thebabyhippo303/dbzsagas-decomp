/* AvaSurf__ReadActiveRowData @ 0x800B8798 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { f32 f[8]; s32 i[2]; } Row;

s32 AvaSurf__ReadActiveRowData(void *arg0) {
    volatile Row r;
    void *t3;
    void *t9;
    s32 (*fn)(void *);
    s32 idx;
    void *base;
    Row *src;
    t3 = M2C_FIELD(arg0, void **, 0);
    t9 = M2C_FIELD(t3, void **, 0x10);
    fn = M2C_FIELD(t9, s32 (**)(void *), 0x2C);
    idx = fn((char *)t3 + M2C_FIELD(t9, s16 *, 0x28));
    if (idx >= 0) {
        base = M2C_FIELD(arg0, void **, 0x2C);
        r.f[0] = *(f32 *)((char *)base + idx * 0x28);
        src = (Row *)((char *)base + idx * 0x28);
        r.f[1] = src->f[1];
        r.f[2] = src->f[2];
        r.f[3] = src->f[3];
        r.f[4] = src->f[4];
        r.f[5] = src->f[5];
        r.f[6] = src->f[6];
        r.f[7] = src->f[7];
        r.i[0] = src->i[0];
        r.i[1] = src->i[1];
    }
    return idx;
}
