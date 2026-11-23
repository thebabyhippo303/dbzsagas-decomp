/* Script__CheckIfNamedPointExists @ 0x802B205C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Script__PopString(void *, s32, void *);
s32 NamedPoint__FindByName(void *, s32, s32);
void Script__PushInt(void *, s32, s32);
void Mem__DeleteArray(void *);
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));

void Script__CheckIfNamedPointExists(void *arg0, s32 arg1) {
    union { s32 value; unsigned char bytes[8]; } sp8;
    s32 var_r3;
    s8 *temp_r3;

    temp_r3 = Script__PopString(arg0, arg1, ((s32 *)sp8.bytes));
    var_r3 = 0;
    if (temp_r3 != NULL) {
        var_r3 = NamedPoint__FindByName(&lbl_803B1E84, (s32) temp_r3, 0);
    }
    if (var_r3 != 0) {
        Script__PushInt(arg0, arg1, 1);
    } else {
        Script__PushInt(arg0, arg1, 0);
    }
    if ((sp8.value != 0) && (temp_r3 != NULL)) {
        Mem__DeleteArray(temp_r3);
    }
}
