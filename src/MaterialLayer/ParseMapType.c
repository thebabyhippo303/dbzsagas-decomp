/* MaterialLayer__ParseMapType @ 0x802781D4 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
extern char lbl_8034F0A4[];
extern char lbl_8034F0B0[];
extern char lbl_8034F0BC[];
extern char lbl_8034F0C4[];
extern char lbl_8034F0D0[];
extern char lbl_8034F0DC[];
extern char lbl_8034F0E8[];

s32 MaterialLayer__ParseMapType(void *a0, const char *str) {
    if (String__CompareIgnoreCase(str, lbl_8034F0A4) == 0) {
        return 1;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0B0) == 0) {
        return 2;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0BC) == 0) {
        return 3;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0C4) == 0) {
        return 4;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0D0) == 0) {
        return 5;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0DC) == 0) {
        return 6;
    }
    if (String__CompareIgnoreCase(str, lbl_8034F0E8) == 0) {
        return 7;
    }
    return 0;
}
