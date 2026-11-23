/* MaterialLayer__ParseTevMode @ 0x80278064 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
extern char lbl_8034F048[] __attribute__((section(".data")));
extern char lbl_8034F050[] __attribute__((section(".data")));
extern char lbl_8034EC84[] __attribute__((section(".data")));
extern char lbl_8034F05C[] __attribute__((section(".data")));
extern char lbl_8034F06C[] __attribute__((section(".data")));
extern char lbl_8034F078[] __attribute__((section(".data")));

s32 MaterialLayer__ParseTevMode(void *a0, const char *str) {
    if (String__CompareIgnoreCase(str, lbl_8034F048) == 0) {
        return 2;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F050) == 0) {
        return 3;
    }
    if (String__CompareIgnoreCase(str, lbl_8034EC84) == 0) {
        return 1;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F05C) == 0) {
        return 5;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F06C) == 0) {
        return 4;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F078) == 0) {
        return 6;
    }
    return -1;
}
