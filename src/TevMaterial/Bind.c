/* TevMaterial__Bind @ 0x8024CCBC (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void GXCallDisplayList(s32, s32);
extern f32 lbl_80347960 __attribute__((section(".data")));

void TevMaterial__Bind(void *arg0, s32 arg1) {
    if (arg1 & 2) {
        f32 f = lbl_80347960;
        s32 zero = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = zero;
        M2C_FIELD(arg0, f32 *, 0x1C) = f;
        M2C_FIELD(arg0, s32 *, 0x20) = zero;
    }
    if (arg1 & 1) {
        s32 neg = -1;
        s32 zero = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = zero;
        M2C_FIELD(arg0, s32 *, 0x28) = neg;
        M2C_FIELD(arg0, s32 *, 0x30) = neg;
    }
    if (arg1 & 8) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        M2C_FIELD(arg0, s8 *, 0x2D) = 0;
        M2C_FIELD(arg0, s8 *, 0x2E) = 0;
        M2C_FIELD(arg0, s8 *, 0x2F) = 0;
    }
    if (arg1 & 4) {
        GXCallDisplayList(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40));
    }
}
