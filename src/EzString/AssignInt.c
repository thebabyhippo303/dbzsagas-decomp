/* EzString__AssignInt @ 0x8026FF70 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*StrSetFn)(void *, const char *);

char *String__FormatTemp(char *, ...);
extern char lbl_80349CB0[];
void EzString__AssignInt(void *self, s32 value) {
    void *obj = M2C_FIELD(self, void **, 8);
    char *q = (char *)obj + 48;
    char *dest = (char *)self + *(s16 *)q;
    char *tmp = String__FormatTemp(lbl_80349CB0, value);
    ((StrSetFn)*(void **)(q + 4))(dest, tmp);
}
