/* Target__GetIndexByName @ 0x8011867C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
extern char lbl_8036BCD0[16] __attribute__((section(".data")));
extern int String__CompareIgnoreCase(const char *, const char *);

s32 Target__GetIndexByName(const char *name) {
    s32 result = 0;
    char *base = lbl_8036BCD0;
    char *keys = base - 4;
    s32 count = 0;
    s32 off = 0;

    for (;;) {
        if (count > 4) break;
        if (String__CompareIgnoreCase(*(char **)(keys + off), name) == 0) {
            result = *(s32 *)((s32)off + (s32)base);
            break;
        }
        off += 8;
        count++;
    }
    return result;
}