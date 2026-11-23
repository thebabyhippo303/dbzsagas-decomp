/* PropertyStream__Construct @ 0x802B2E14 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct PropertyStream { volatile int f0; volatile int f4; volatile int f8; volatile int fC; } PropertyStream;
PropertyStream *PropertyStream__Construct(PropertyStream *self) {
    int zero = 0;
    self->fC = zero;
    self->f0 = zero;
    self->f4 = zero;
    self->f8 = zero;
    return self;
}
