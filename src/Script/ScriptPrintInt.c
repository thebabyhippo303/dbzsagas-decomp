/* Script__ScriptPrintInt @ 0x802B10CC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Script__PopInt(void *script, int lane);
char *Script__PopString(void *script, int lane, int *owned);
void Mem__DeleteArray(void *p);
void Script__ScriptPrintInt(void *script, int lane) {
    int owned;
    char *str;
    Script__PopInt(script, lane);
    str = Script__PopString(script, lane, &owned);
    if (owned != 0 && str != 0) {
        Mem__DeleteArray(str);
    }
}
