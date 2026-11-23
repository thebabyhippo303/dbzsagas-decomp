/* Fade__ResetSystem @ 0x802286D4 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Fade__InitializeSystem(void);
M2C_UNK fn_802437F4(void);
extern s32 lbl_803ADA6C __attribute__((section(".data")));

void Fade__ResetSystem(void) {
    s32 temp_r29;

    temp_r29 = lbl_803ADA6C;
    Fade__InitializeSystem();
    lbl_803ADA6C = temp_r29;
    fn_802437F4();
}
