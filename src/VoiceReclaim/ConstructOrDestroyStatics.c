/* VoiceReclaim__ConstructOrDestroyStatics @ 0x8019FA9C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern M2C_UNK lbl_8033FE98 __attribute__((section(".data")));
extern M2C_UNK lbl_8033FEB0 __attribute__((section(".data")));
extern M2C_UNK lbl_8033FEC8 __attribute__((section(".data")));
extern M2C_UNK lbl_8033FEE0 __attribute__((section(".data")));
extern M2C_UNK lbl_8033FEF8 __attribute__((section(".data")));
extern M2C_UNK *lbl_803DD51C;
extern M2C_UNK *lbl_803DD520;
extern M2C_UNK *lbl_803DD524;
extern M2C_UNK *lbl_803DD528;
extern M2C_UNK *lbl_803DD52C;

void VoiceReclaim__ConstructOrDestroyStatics(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_803DD51C = &lbl_8033FEF8;
        lbl_803DD520 = &lbl_8033FEE0;
        lbl_803DD524 = &lbl_8033FEC8;
        lbl_803DD528 = &lbl_8033FEB0;
        lbl_803DD52C = &lbl_8033FE98;
    }
}
