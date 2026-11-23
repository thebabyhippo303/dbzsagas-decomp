/* EaxEnvironment__FromName @ 0x80193D94 (size: 0x298, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
extern s8 lbl_8033F45C __attribute__((section(".data")));
extern s8 lbl_8033F468 __attribute__((section(".data")));
extern s8 lbl_8033F470 __attribute__((section(".data")));
extern s8 lbl_8033F47C __attribute__((section(".data")));
extern s8 lbl_8033F488 __attribute__((section(".data")));
extern s8 lbl_8033F494 __attribute__((section(".data")));
extern s8 lbl_8033F4A0 __attribute__((section(".data")));
extern s8 lbl_8033F4AC __attribute__((section(".data")));
extern s8 lbl_8033F4B4 __attribute__((section(".data")));
extern s8 lbl_8033F4BC __attribute__((section(".data")));
extern s8 lbl_8033F4C4 __attribute__((section(".data")));
extern s8 lbl_8033F4D4 __attribute__((section(".data")));
extern s8 lbl_8033F4DC __attribute__((section(".data")));
extern s8 lbl_8033F4EC __attribute__((section(".data")));
extern s8 lbl_8033F4F4 __attribute__((section(".data")));
extern s8 lbl_8033F4FC __attribute__((section(".data")));
extern s8 lbl_8033F504 __attribute__((section(".data")));
extern s8 lbl_8033F510 __attribute__((section(".data")));
extern s8 lbl_8033F518 __attribute__((section(".data")));
extern s8 lbl_8033F520 __attribute__((section(".data")));
extern s8 lbl_8033F52C __attribute__((section(".data")));
extern s8 lbl_8033F538 __attribute__((section(".data")));

s32 EaxEnvironment__FromName(s8 *arg0) {
    if (String__CompareIgnoreCase(&lbl_8033F45C, arg0) == 0) return 2;
    if (String__CompareIgnoreCase(&lbl_8033F468, arg0) == 0) return 3;
    if (String__CompareIgnoreCase(&lbl_8033F470, arg0) == 0) return 4;
    if (String__CompareIgnoreCase(&lbl_8033F47C, arg0) == 0) return 5;
    if (String__CompareIgnoreCase(&lbl_8033F488, arg0) == 0) return 6;
    if (String__CompareIgnoreCase(&lbl_8033F494, arg0) == 0) return 7;
    if (String__CompareIgnoreCase(&lbl_8033F4A0, arg0) == 0) return 8;
    if (String__CompareIgnoreCase(&lbl_8033F4AC, arg0) == 0) return 9;
    if (String__CompareIgnoreCase(&lbl_8033F4B4, arg0) == 0) return 10;
    if (String__CompareIgnoreCase(&lbl_8033F4BC, arg0) == 0) return 11;
    if (String__CompareIgnoreCase(&lbl_8033F4C4, arg0) == 0) return 12;
    if (String__CompareIgnoreCase(&lbl_8033F4D4, arg0) == 0) return 13;
    if (String__CompareIgnoreCase(&lbl_8033F4DC, arg0) == 0) return 14;
    if (String__CompareIgnoreCase(&lbl_8033F4EC, arg0) == 0) return 15;
    if (String__CompareIgnoreCase(&lbl_8033F4F4, arg0) == 0) return 16;
    if (String__CompareIgnoreCase(&lbl_8033F4FC, arg0) == 0) return 17;
    if (String__CompareIgnoreCase(&lbl_8033F504, arg0) == 0) return 18;
    if (String__CompareIgnoreCase(&lbl_8033F510, arg0) == 0) return 19;
    if (String__CompareIgnoreCase(&lbl_8033F518, arg0) == 0) return 20;
    if (String__CompareIgnoreCase(&lbl_8033F520, arg0) == 0) return 21;
    if (String__CompareIgnoreCase(&lbl_8033F52C, arg0) == 0) return 22;
    if (String__CompareIgnoreCase(&lbl_8033F538, arg0) == 0) return 23;
    return 0;
}
