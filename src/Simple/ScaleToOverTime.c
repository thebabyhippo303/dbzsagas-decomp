/* Simple__ScaleToOverTime @ 0x802C6FBC (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Simple__ScaleXToOverTime(void *, f32, f32, f32, s32);
void Simple__ScaleYToOverTime(void *, f32, f32, f32, s32);
void Simple__ScaleZToOverTime(void *, f32, f32, f32, s32);

void Simple__ScaleToOverTime(void *self, f32 *vec, s32 dur, f32 rate0, f32 rate1) {
    void *v = (void *)vec;
    f32 r0 = rate0;
    s32 d = dur;
    f32 r1 = rate1;
    void *s = self;

    Simple__ScaleXToOverTime(self, vec[0], r0, r1, d);
    Simple__ScaleYToOverTime(s, vec[1], r0, r1, d);
    Simple__ScaleZToOverTime(s, vec[2], r0, r1, d);
}
