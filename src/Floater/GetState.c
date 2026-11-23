/* Floater__GetState @ 0x802B4F14 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Floater__GetState(void *self) {
    s32 a = M2C_FIELD(self, s32 *, 512);
    s32 flag;

    if (a != -1) {
        return a;
    }
    if (M2C_FIELD(self, s32 *, 600) == 0) {
        return 0;
    }
    flag = 1;
    if (M2C_FIELD(self, s32 *, 960) == 0) {
        flag = 0;
    }
    if (flag != 0) {
        return 0;
    }
    return 5;
}
