/* EffectParamTable__Reset @ 0x8019F6F8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033FC58 __attribute__((section(".data")));
extern f32 lbl_8033FC5C __attribute__((section(".data")));

typedef struct { f32 a, b; } Entry;
void EffectParamTable__Reset(Entry *p) {
    s32 i;

    for (i = 0; i < 256; i++) {
        p[i].a = lbl_8033FC58;
        p[i].b = lbl_8033FC5C;
    }
}
