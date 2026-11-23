/* SurfacePairMap__FindColumnIndex @ 0x801F8914 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EnumTable__FindByName(void *, char *, s32);

s32 SurfacePairMap__FindColumnIndex(void *arg0, char *arg1) {
    if (M2C_FIELD(arg0, void **, 0x14) == NULL) {
        return -1;
    }
    return EnumTable__FindByName(M2C_FIELD(arg0, void **, 0x14), arg1, -1);
}
