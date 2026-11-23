/* Water__FormatCellVarName @ 0x80296D6C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803BED44[];
int sprintf(char *dst, const char *fmt, ...);
char *Water__FormatCellVarName(char *a, int b, int c, char *d) {
    sprintf(lbl_803BED44, "%s%d_%d%s", a, b, c, d);
    return lbl_803BED44;
}
