/* Partition__BuildFileName @ 0x80252B54 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void sprintf(char *, char *, ...);
char * strcat(char *, char *);
char * strcpy(char *, const char *);
extern s8 lbl_80347E34 __attribute__((section(".data")));
extern s8 lbl_80347E3C __attribute__((section(".data")));

s8 *Partition__BuildFileName(s32 arg0, s8 *arg1, s32 arg2) {
    union { s8 value; unsigned char bytes[12]; } sp8;

    strcpy(arg1, arg0 + 0x14);
    if (arg2 == 0) {
        sprintf(((s8 *)sp8.bytes), &lbl_80347E34);
    } else {
        sprintf(((s8 *)sp8.bytes), &lbl_80347E3C, arg2);
    }
    strcat(arg1, ((s8 *)sp8.bytes));
    return arg1;
}
