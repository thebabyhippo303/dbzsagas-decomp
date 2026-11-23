/* CollPart__ParseRowField @ 0x80280FB8 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
s32 TableFile__ReadToken(void *, s32, s32);
int sscanf(const char *str, const char *fmt, ...);
extern char lbl_8034F264[] __attribute__((section(".data")));
extern char lbl_8034F270[] __attribute__((section(".data")));

s32 CollPart__ParseRowField(void *arg0, s8 *arg1, s32 arg2) {
    char buf[80];
    u32 value;

    if ((String__CompareIgnoreCase(arg1, lbl_8034F264) == 0) && (TableFile__ReadToken(M2C_FIELD(arg0, void **, 0), buf, 0x50) > 0) && (sscanf(buf, lbl_8034F270, &value) == 1)) {
        ((u16 *)M2C_FIELD(arg0, void **, 0x2C))[arg2] = (u16)value;
        return 1;
    }
    return 0;
}
