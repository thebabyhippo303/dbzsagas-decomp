/* LeafSystem__SetFadeDistances @ 0x80288070 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_8034F3CC __attribute__((section(".data")));
void LeafSystem__SetFadeDistances(void *self, f32 a, f32 b, f32 c) {
    f32 d = a - b;
    f32 t = lbl_8034F3CC / d;
    M2C_FIELD(self, f32 *, 584) = t * t;
    M2C_FIELD(self, f32 *, 588) = b * b;
    M2C_FIELD(self, f32 *, 592) = c;
}
