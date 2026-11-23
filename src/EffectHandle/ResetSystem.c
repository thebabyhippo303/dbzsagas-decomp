/* EffectHandle__ResetSystem @ 0x8022E708 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void EffectHandle__ReleaseAll(void);
void EffectHandle__FreeAuxBuffer(void);
extern s32 lbl_803ADE78 __attribute__((section(".data")));
extern u8 lbl_803ADD88[] __attribute__((section(".data")));

void EffectHandle__ResetSystem(void) {
    u8 *b;
    u8 *var_r30;
    s32 var_ctr;

    EffectHandle__ReleaseAll();
    b = lbl_803ADD88;
    M2C_FIELD(b, volatile s32 *, 0x28) = 0;
    M2C_FIELD(b, volatile s32 *, 0x2C) = 0;
    EffectHandle__FreeAuxBuffer();
    var_ctr = 0x28;
    var_r30 = (s32 *)(b + 0xEC);
    do {
        *(s32 *)var_r30 = 0;
        var_r30 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    lbl_803ADE78 = 0;
}
