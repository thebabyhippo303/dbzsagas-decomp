/* RopeCatenaryFunction__Construct @ 0x802C2108 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct RopeCatenaryFunction {
    void *vtbl;
    f32 x;
    f32 y;
    f32 z;
} RopeCatenaryFunction;

extern char lbl_80353400[] __attribute__((section(".data")));
extern f32 lbl_80352970 __attribute__((section(".data")));

RopeCatenaryFunction *RopeCatenaryFunction__Construct(RopeCatenaryFunction *self) {
    RopeCatenaryFunction *p = self;
    f32 v = lbl_80352970;
    p->vtbl = lbl_80353400;
    p->x = v;
    p->y = v;
    p->z = v;
    return self;
}
