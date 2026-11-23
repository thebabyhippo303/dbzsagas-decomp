/* Water__Construct @ 0x80293D58 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define NULL 0

typedef struct { void *arr; s32 f4; s32 f8; s32 f12; s32 f16; s32 f20; } Pool;

void *Mem__New(u32 size);
u32 Mem__NewArray(u32 size);

void *Water__Construct(void *self) {
    Pool *pool;
    Pool *pool2;
    void *p12;
    s32 one = 1;
    s32 zero = 0;
    s32 eight;

    pool = Mem__New(24);
    eight = 8;
    p12 = (char *)self + 12;
    pool->arr = (void *)Mem__NewArray(32);
    *(Pool **)self = pool;
    ((s32 *)self)[1] = one;
    pool->f4 = zero;
    pool->f8 = eight;
    pool->f16 = zero;
    pool->f20 = zero;
    pool->f12 = eight;
    pool2 = Mem__New(24);
    pool2->arr = (void *)Mem__NewArray(4);
    *(Pool **)p12 = pool2;
    pool2->f8 = one;
    pool2->f12 = one;
    pool2->f16 = zero;
    pool2->f20 = zero;
    pool2->f4 = zero;
    ((s32 *)p12)[1] = one;
    ((s32 *)self)[2] = zero;
    return self;
}
