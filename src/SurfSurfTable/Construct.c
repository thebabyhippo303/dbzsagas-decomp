/* SurfSurfTable__Construct @ 0x801A8F68 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
extern int lbl_80340EB0 __attribute__((section(".data")));
typedef struct { void *vt; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; } SurfSurfTable;
SurfSurfTable *SurfSurfTable__Construct(SurfSurfTable *self) {
    self->vt = &lbl_80340EB0;
    self->f4 = 0;
    self->f8 = 0;
    self->fC = 0;
    self->f10 = 0;
    self->f14 = 0;
    self->f18 = 0;
    self->f1C = 0;
    return self;
}
