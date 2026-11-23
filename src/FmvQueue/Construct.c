/* FmvQueue__Construct @ 0x801DA354 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 h, t, o, c; } H;
typedef struct { s32 pad; H q; } Q;

Q *FmvQueue__Construct(Q *self) {
    H *q = &self->q;
    q->t = 0;
    q->h = 0;
    q->o = 1;
    q->c = 0;
    self->pad = 0;
    return self;
}