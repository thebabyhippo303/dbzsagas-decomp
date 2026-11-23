/* TuningTable__AddString @ 0x80254520 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char *strncpy(char *, char *, s32);
int VarString__Create(void *, void *, void *, void *, void *, void *, void *, void *);
extern s32 lbl_803DCC10;
void TuningTable__AddString(void *arg0, char *arg1, void *arg2, char *arg3, s32 arg4, void *arg5) {
    strncpy(arg1, arg3, arg4);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        VarString__Create((void *)lbl_803DCC10, M2C_FIELD(arg0, void **, 0x1C), arg2, arg1, (void *)arg4, 0, arg5, arg0);
    }
}
