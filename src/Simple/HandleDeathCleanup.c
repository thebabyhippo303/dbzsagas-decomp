/* Simple__HandleDeathCleanup @ 0x802C96C4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void Actor__FadeAlphaImpl(void *, s32, f32, f32);
extern f32 lbl_803532E4 __attribute__((section(".data")));
s32 Simple__HandleDeathCleanup(void *self) {
    if (*(s32 *)((char *)self + 0x274) != 0) {
        Actor__FadeAlphaImpl(self, 1, lbl_803532E4, *(f32 *)((char *)self + 0x3F0));
        *(s32 *)((char *)self + 0x274) = 0;
        return 0;
    } else {
        return 1;
    }
}
