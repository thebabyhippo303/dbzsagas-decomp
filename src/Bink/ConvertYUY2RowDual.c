/* Bink__ConvertYUY2RowDual @ 0x802F68A8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Bink__ConvertYUY2RowDual @ 0x802F68A8 (0x88). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct {
    u32 *dst;
    s32 unk4;
    u8 *src;
    u8 *srcb;
    u8 *src2;
    u8 *src2b;
    char pad[0x20 - 0x18];
    s32 stride;
} BinkRowDualState;

extern BinkRowDualState lbl_80389240 __attribute__((section(".data")));

void Bink__ConvertYUY2RowDual(void *arg0, s32 arg1) {
    s32 n = arg1 - 2;
    u8 *src; u8 *src2; u8 *src2b; u32 *dst;
    u32 y0; u32 y1; u32 u; u32 v; u32 pix;

    if (n < 0) {
        return;
    }
    do {
        src2 = lbl_80389240.src2;
        n -= 2;
        src = lbl_80389240.src;
        y1 = src2[0];
        src2b = lbl_80389240.src2b;
        y0 = src[0];
        y1 <<= 8;
        u = src[1];
        src2 += 1;
        v = src2b[0];
        pix = y0 | y1;
        u <<= 16;
        dst = lbl_80389240.dst;
        pix |= u;
        v <<= 24;
        src2b += 1;
        lbl_80389240.src2 = src2;
        lbl_80389240.src2b = src2b;
        pix |= v;
        lbl_80389240.src = src + 2;
        dst[0] = pix;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = pix;
        lbl_80389240.dst += 1;
    } while (n >= 0);
}
