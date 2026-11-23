/* EnvSoundSource__Construct @ 0x8019A14C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strncpy(char *, char *, u32);
extern M2C_UNK lbl_80340110 __attribute__((section(".data")));

s8 *EnvSoundSource__Construct(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_80340110;
    strncpy(arg0, arg1, 0x1FU);
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    return arg0;
}
