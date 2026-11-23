/* Bink__ConvertYUY2RowGrayPair @ 0x802F6A6C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
/* WIP 71.4% (10-reg r10/r11 swap only): Bink__ConvertYUY2RowGrayPair @ 0x802F6A6C. Modeled on matched DualPair (same entry/exit/pixel idiom). Distinct y/t/pix temps per half fixed the r5-shift. OPEN: src+2-temp got r10, y0 got r11; target swaps them. Tried late-store, y-decl-first, compound y|=t, no-temps expr — same 10. Retry: u8 y-type or brute_force. */
typedef struct { u32 *dst1; u32 *dst2; u8 *src1; u8 *src2; } BinkRowGrayPair;
extern BinkRowGrayPair lbl_80389240 __attribute__((section(".data")));
s32 Bink__ConvertYUY2RowGrayPair(s32 arg0, s32 arg1) {
    s32 n = arg0;
    u8 *src;
    u32 *dst;
    u8 *src2;
    u32 *dst2;
    u32 y0;
    u32 t0;
    u32 pix0;
    u32 y1;
    u32 t1;
    u32 pix1;
    do {
        src = lbl_80389240.src1;
        n -= 2;
        dst = lbl_80389240.dst1;
        y0 = src[0];
        t0 = src[1] << 16;
        t0 |= 0x80000000u;
        t0 |= 0x8000u;
        pix0 = y0 | t0;
        lbl_80389240.src1 = src + 2;
        dst[0] = pix0;
        src2 = lbl_80389240.src2;
        dst2 = lbl_80389240.dst2;
        y1 = src2[0];
        t1 = src2[1] << 16;
        t1 |= 0x80000000u;
        t1 |= 0x8000u;
        pix1 = y1 | t1;
        lbl_80389240.src2 = src2 + 2;
        dst2[0] = pix1;
        lbl_80389240.dst1++;
        lbl_80389240.dst2++;
    } while (n > 0);
    return arg1 + arg0;
}
