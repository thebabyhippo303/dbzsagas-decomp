/* Bink__Convert16RowGrayX2Pair @ 0x802F3E48 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    u16 *dst1;
    u16 *dst2;
    u8 *src1;
    u8 *src2;
} BinkRowGrayPair;

extern BinkRowGrayPair lbl_80389240 __attribute__((section(".data")));
extern u8 lbl_80388640[] __attribute__((section(".data")));

s32 Bink__Convert16RowGrayX2Pair(s32 arg0, s32 arg1) {
    u8 *gtab = lbl_80388640;
    u8 *s1;
    u8 b;
    u16 v;
    u8 *s2;
    u8 b2;
    u16 v2;
    s32 n = arg0;

    do {
        s1 = lbl_80389240.src1;
        b = *s1;
        s1 += 1;
        lbl_80389240.src1 = s1;
        v = *(u16 *)(gtab + b * 4 + 2);
        lbl_80389240.dst1[0] = v;
        lbl_80389240.dst1[1] = v;
        s2 = lbl_80389240.src2;
        b2 = *s2;
        s2 += 1;
        lbl_80389240.src2 = s2;
        v2 = *(u16 *)(gtab + b2 * 4 + 2);
        lbl_80389240.dst2[0] = v2;
        lbl_80389240.dst2[1] = v2;
        lbl_80389240.dst1 = lbl_80389240.dst1 + 2;
        lbl_80389240.dst2 = lbl_80389240.dst2 + 2;
        n -= 1;
    } while (n != 0);
    return arg1 + arg0;
}
