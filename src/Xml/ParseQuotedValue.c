/* Xml__ParseQuotedValue @ 0x80305FAC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

char *Xml__FindClosingQuote(char *, s32);
char *Xml__InternSubstring(char *, u32);

s32 Xml__ParseQuotedValue(char *arg0, s32 arg1, char **arg2) {
    s32 quote;
    char *end;

    quote = (s32)Xml__FindClosingQuote(arg0, arg1);
    end = arg0 + (quote + 2);
    *arg2 = Xml__InternSubstring(arg0 + 1, quote);
    return end - arg0;
}
