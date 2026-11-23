/* Oscillator__Evaluate @ 0x802174F8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
float sinf(float);
extern f32 lbl_80346514 __attribute__((section(".data")));
void Oscillator__Evaluate(void *arg0) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    if (M2C_FIELD(arg0, u16 *, 2) & 2) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x1C) * sinf(M2C_FIELD(arg0, f32 *, 0x14))) + M2C_FIELD(arg0, f32 *, 8));
    }
    if (!(M2C_FIELD(arg0, f32 *, 8) >= lbl_80346514)) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80346514;
    }
}
