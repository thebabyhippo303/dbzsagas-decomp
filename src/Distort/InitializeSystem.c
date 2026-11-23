/* Distort__InitializeSystem @ 0x802A0CBC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
extern f32 lbl_80350C30 __attribute__((section(".data")));
extern f32 lbl_80350C2C __attribute__((section(".data")));
extern f32 lbl_803BEDC8[] __attribute__((section(".data")));
extern s32 lbl_803DD690 __attribute__((section(".sdata")));
void Distort__InitializeSystem(void) {
    f32 a = lbl_80350C30;
    f32 b = lbl_80350C2C;
    f32 *p = lbl_803BEDC8;
    p[0] = b;
    lbl_803DD690 = 1;
    p[1] = a;
    p[2] = a;
    p[3] = a;
    p[4] = a;
    p[5] = b;
    p[6] = a;
    p[7] = a;
    p[8] = a;
    p[9] = a;
    p[10] = b;
    p[11] = a;
    p[12] = a;
    p[13] = a;
    p[14] = a;
    p[15] = b;
}
