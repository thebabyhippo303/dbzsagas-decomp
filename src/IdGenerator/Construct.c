/* IdGenerator__Construct @ 0x80233FB0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct IdGenerator { int f0; int f4; int f8; int fC; } IdGenerator;
IdGenerator *IdGenerator__Construct(IdGenerator *self) {
    int cap = 256;
    int one = 1;
    int zero = 0;
    self->f0 = cap;
    self->f4 = cap;
    self->f8 = one;
    self->fC = zero;
    return self;
}
