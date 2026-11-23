/* TuningTable__AddReal @ 0x80254444 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VarRealUnit__CreateWithUnits(char *, char *, s32, void *, void *, s32, s32, s32);
extern s8 *lbl_803DCC10;

void TuningTable__AddReal(void *arg0, f32 *arg1, s32 arg2, s32 arg3, f32 farg0) {
    s8 *temp_r4;

    *arg1 = farg0;
    temp_r4 = M2C_FIELD(arg0, s8 **, 0x1C);
    if (temp_r4 != NULL) {
        VarRealUnit__CreateWithUnits(lbl_803DCC10, temp_r4, arg2, arg1, NULL, 0, arg3, (s32) arg0);
    }
}
