/* Script__ScriptPrint @ 0x802B1090 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char *Script__PopString(void *, void *, int *);
void Mem__DeleteArray(void *);

void Script__ScriptPrint(void *arg0, void *arg1) {
    s32 owned;
    char *text;

    text = Script__PopString(arg0, arg1, &owned);
    if ((owned != 0) && (text != NULL)) {
        Mem__DeleteArray(text);
    }
}
