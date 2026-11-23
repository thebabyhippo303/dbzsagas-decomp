/* SphereText__ClearText @ 0x802707A8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;
extern char lbl_80349DF8[];
void SphereText__ClearText(void *self)
{
    void *v = *(void **)((char *)self + 412);
    void (*fn)(void *, void *) = *(void (**)(void *, void *))((char *)v + 876);
    fn((char *)self + *(s16 *)((char *)v + 872), (void *)lbl_80349DF8);
}
