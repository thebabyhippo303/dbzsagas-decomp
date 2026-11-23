/* Sphere__SetSize @ 0x8026C634 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef void (*SetSizeFnA)(void *);
typedef void (*SetSizeFnB)(void *, f32);

void Sphere__SetSize(void *self, f32 arg1, f32 size) {
    char *t;
    SetSizeFnA fn;
    SetSizeFnB fn2;

    t = *(char **)((char *)self + 412);
    fn = *(SetSizeFnA *)(t + 148);
    fn((char *)self + *(s16 *)(t + 144));
    t = *(char **)((char *)self + 412);
    fn2 = *(SetSizeFnB *)(t + 156);
    fn2((char *)self + *(s16 *)(t + 152), size);
}
