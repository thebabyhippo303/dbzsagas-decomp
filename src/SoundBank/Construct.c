/* SoundBank__Construct @ 0x80192758 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
extern char lbl_80340780 __attribute__((section(".data")));
typedef struct SBk { s32 a; s32 b; s32 c; void *vt; } SBk;

SBk *SoundBank__Construct(SBk *self, s32 arg1) {
    self->vt = &lbl_80340780;
    self->a = arg1;
    self->b = 0;
    self->c = 0;
    return self;
}
