/* Script__GetEnvActorFromInstanceName @ 0x802B173C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Script__PopString(void *, s32, void *);
void Mem__DeleteArray(void *);
void Script__PushInt(void *, s32, s32);
int String__CompareIgnoreCase(const char *, const char *);
M2C_UNK Cast__FindActorByInstanceName(s32);
extern s8 lbl_80351D24 __attribute__((section(".data")));

void Script__GetEnvActorFromInstanceName(void *arg0, s32 arg1) {
    s32 sp8;
    s32 var_r30;
    s8 *temp_r3;

    temp_r3 = Script__PopString(arg0, arg1, &sp8);
    if ((temp_r3 == NULL) || (String__CompareIgnoreCase(temp_r3, &lbl_80351D24) == 0)) {
        var_r30 = 0;
    } else {
        var_r30 = Cast__FindActorByInstanceName((s32) temp_r3);
        if (sp8 != 0) {
            Mem__DeleteArray(temp_r3);
        }
    }
    Script__PushInt(arg0, arg1, var_r30);
}
