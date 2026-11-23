/* Bink__Convert32ARowGrayPair @ 0x802F3964 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef struct {
    volatile u32 *dst;
    u32 *dst2;
    u8 *src;
    u8 *src2;
    char pad[0x18 - 0x10];
    u8 *alpha;
    u8 *alpha2;
} BinkGray32APairState;
extern BinkGray32APairState lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80388E40[] __attribute__((section(".data")));
s32 Bink__Convert32ARowGrayPair(s32 arg0, s32 arg1) {
    u8 *src;
    u8 *alpha;
    u8 v;
    u8 a;
    u32 pix;
    u8 *src2;
    u8 *alpha2;
    u8 v2;
    u8 a2;
    u32 pix2;
    s32 n = arg0;
    do {
        src = lbl_80389240.src;
        alpha = lbl_80389240.alpha;
        v = src[0];
        a = alpha[0];
        src++;
        pix = lbl_80388E40[v];
        alpha++;
        pix |= (u32)a << 24;
        lbl_80389240.dst[0] = pix;
        lbl_80389240.alpha = alpha;
        lbl_80389240.src = src;
        src2 = lbl_80389240.src2;
        alpha2 = lbl_80389240.alpha2;
        v2 = src2[0];
        a2 = alpha2[0];
        src2++;
        pix2 = lbl_80388E40[v2];
        lbl_80389240.dst2[0] = pix2 | ((u32)a2 << 24);
        lbl_80389240.alpha2 = alpha2 + 1;
        lbl_80389240.src2 = src2;
        lbl_80389240.dst++;
        lbl_80389240.dst2++;
        n--;
    } while (n != 0);
    return arg1 + arg0;
}
