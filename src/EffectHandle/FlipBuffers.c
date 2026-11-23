/* EffectHandle__FlipBuffers @ 0x8022E7D8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803ADD88 __attribute__((section(".data")));

void EffectHandle__FlipBuffers(void) {
    s32 *p;
    s32 n;
    s32 cur;
    s32 nxt;

    p = &lbl_803ADD88;
    n = lbl_803ADD88;
    cur = p[0x10];
    nxt = (cur << 2) * n;
    p[0x10] = cur ^ 1;
    p[0x11] = nxt;
}
