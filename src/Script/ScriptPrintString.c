/* Script__ScriptPrintString @ 0x802B117C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Script__PopString(void *, s32, void *);
void Mem__DeleteArray(void *);
void Script__ScriptPrintString(void *arg0, s32 arg1) {
    s32 sp8;
    s8 *temp_r31;
    s8 *temp_r3;

    temp_r31 = Script__PopString(arg0, arg1, &sp8);
    temp_r3 = Script__PopString(arg0, arg1, &sp8);
    if (sp8 != 0) {
        if (temp_r3 != NULL) {
            Mem__DeleteArray(temp_r3);
        }
        if (temp_r31 != NULL) {
            Mem__DeleteArray(temp_r31);
        }
    }
}
