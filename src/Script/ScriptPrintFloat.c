/* Script__ScriptPrintFloat @ 0x802B1124 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

float Script__PopFloat(void *, void *);
char *Script__PopString(void *, void *, int *);
void Mem__DeleteArray(void *);

void Script__ScriptPrintFloat(void *script, void *context) {
    int owned;
    char *name;

    Script__PopFloat(script, context);
    name = Script__PopString(script, context, &owned);
    if (owned != 0) {
        if (name != 0) {
            Mem__DeleteArray(name);
        }
    }
}
