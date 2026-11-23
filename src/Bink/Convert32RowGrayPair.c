/* Bink__Convert32RowGrayPair @ 0x802F29EC (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef struct {
    u32 *dst;
    u32 *dst2;
    u8 *src;
    u8 *src2;
    char pad[0x20 - 0x10];
    s32 stride;
} BinkDualState;
extern BinkDualState lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80388E40[] __attribute__((section(".data")));
s32 Bink__Convert32RowGrayPair(s32 arg0, s32 arg1) {
    u8 *src;
    u32 *dst;
    u8 *src2;
    u32 *dst2;
    s32 n = arg0;
    do {
        src = lbl_80389240.src;
        dst = lbl_80389240.dst;
        dst[0] = lbl_80388E40[src[0]];
        lbl_80389240.src = src + 1;
        src2 = lbl_80389240.src2;
        dst2 = lbl_80389240.dst2;
        dst2[0] = lbl_80388E40[src2[0]];
        lbl_80389240.src2 = src2 + 1;
        lbl_80389240.dst++;
        lbl_80389240.dst2++;
        n--;
    } while (n != 0);
    return arg1 + arg0;
}
