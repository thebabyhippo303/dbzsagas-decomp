/* BinkVideo__InitBundleSizes @ 0x802F9FE8 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

u32 BinkVideo__CalcBundleSize(u32, u32, u32, u32);
void BinkVideo__InitBundleSizes(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0) = BinkVideo__CalcBundleSize(0x200U, arg1, 4U, 1U);
    M2C_FIELD(arg0, u32 *, 4) = BinkVideo__CalcBundleSize(0x200U, arg1 >> 1U, 4U, 1U);
    M2C_FIELD(arg0, u32 *, 8) = BinkVideo__CalcBundleSize(0x200U, arg1, 8U, 0x40U);
    M2C_FIELD(arg0, u32 *, 0xC) = BinkVideo__CalcBundleSize(0x200U, arg1, 8U, 8U);
    M2C_FIELD(arg0, u32 *, 0x10) = BinkVideo__CalcBundleSize(0x200U, arg1, 5U, 1U);
    M2C_FIELD(arg0, u32 *, 0x14) = BinkVideo__CalcBundleSize(0x200U, arg1, 5U, 1U);
    M2C_FIELD(arg0, u32 *, 0x18) = BinkVideo__CalcBundleSize(0x200U, arg1, 0xBU, 1U);
    M2C_FIELD(arg0, u32 *, 0x1C) = BinkVideo__CalcBundleSize(0x200U, arg1, 0xBU, 1U);
    M2C_FIELD(arg0, u32 *, 0x20) = BinkVideo__CalcBundleSize(0x200U, arg1, 4U, 0x30U);
}
