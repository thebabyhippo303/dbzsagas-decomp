/* TuningTable__AddBool @ 0x802544D8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VarBool__Create(void *, void *, void *, void *, void *, void *, void *);
extern s8 *lbl_803DCC10;

void TuningTable__AddBool(void *arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4) {
    void *temp_r4;

    *(u32 *)arg1 = arg3;
    temp_r4 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r4 != NULL) {
        VarBool__Create(lbl_803DCC10, temp_r4, (void *)arg2, arg1, NULL, (void *)arg4, arg0);
    }
}
