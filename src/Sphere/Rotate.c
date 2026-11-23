/* Sphere__Rotate @ 0x8026C790 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef void (*RotateFn)(void *, f32);
void Sphere__Rotate(void *self, f32 arg) {
    void *itable = M2C_FIELD(self, void **, 0x19C);
    f32 base = M2C_FIELD(self, f32 *, 0x4C);
    s32 adj = M2C_FIELD(itable, s16 *, 0xD8);
    RotateFn fn = M2C_FIELD(itable, RotateFn *, 0xDC);

    fn((char *)self + adj, base + arg);
}
