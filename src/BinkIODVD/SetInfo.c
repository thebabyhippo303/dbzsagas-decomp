/* BinkIODVD__SetInfo @ 0x802EFC34 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
#define NULL 0
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void BinkIODVD__SetInfo(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    register s32 a1 = arg1;
    register s32 a2 = arg2;
    s32 level;
    s32 aligned;
    s32 sum;
    level = OSDisableInterrupts();
    aligned = a2 & 0xFFFFF000;
    sum = a1 + aligned;
    M2C_FIELD(arg0, s32 *, 0x98) = aligned;
    M2C_FIELD(arg0, s32 *, 0x3C) = aligned;
    M2C_FIELD(arg0, s32 *, 0xB0) = arg3;
    M2C_FIELD(arg0, s32 *, 0xB4) = arg4;
    M2C_FIELD(arg0, void **, 0xC8) = arg0;
    M2C_FIELD(arg0, s32 *, 0x9C) = a1;
    M2C_FIELD(arg0, s32 *, 0x94) = a1;
    M2C_FIELD(arg0, s32 *, 0xA4) = a1;
    M2C_FIELD(arg0, s32 *, 0xA0) = sum;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    OSRestoreInterrupts(level);
}
