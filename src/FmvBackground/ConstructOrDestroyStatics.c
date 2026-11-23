/* FmvBackground__ConstructOrDestroyStatics @ 0x801DAE20 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_80306BC4(M2C_UNK *);
extern M2C_UNK lbl_80343610 __attribute__((section(".data")));
extern M2C_UNK lbl_803A40A8 __attribute__((section(".data")));

void FmvBackground__ConstructOrDestroyStatics(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        char *base = (char *)&lbl_803A40A8;
        fn_80306BC4((M2C_UNK *)base);
        M2C_FIELD(base, M2C_UNK **, 0x834C) = &lbl_80343610;
    }
}
