/* SoundGroup__Construct @ 0x8019D3A4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * strncpy(char *, char *, u32);
extern M2C_UNK lbl_80340358 __attribute__((section(".data")));

void *SoundGroup__Construct(void *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r9;

    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_80340358;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    temp_r9 = arg0 + 0x48;
    M2C_FIELD(arg0, s32 *, 0x44) = arg4;
    M2C_FIELD(temp_r9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r9, s32 *, 8) = 1;
    M2C_FIELD(temp_r9, s32 *, 0xC) = 0;
    strncpy(arg0 + 4, arg1, 0x3FU);
    M2C_FIELD(arg0, s32 *, 0x58) = arg3;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    return arg0;
}
