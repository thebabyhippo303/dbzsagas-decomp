/* Bink__ConvertYUY2RowDualX2 @ 0x802F6504 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    u32 *dst;
    s32 unk4;
    u8 *srcb;
    u8 *x12;
    u8 *src;
    u8 *src2;
    char pad[32 - 24];
    s32 stride;
} BinkYUY2DualX2State;
extern BinkYUY2DualX2State lbl_80389240 __attribute__((section(".data")));

void Bink__ConvertYUY2RowDualX2(void *arg0, s32 arg1) {
    s32 n = arg1 - 2;
    u8 *src;
    u8 *srcb;
    u8 *src2;
    u32 y0;
    u32 y1;
    u32 u;
    u32 v;
    u32 pix;
    u32 t;

    if (n < 0) {
        return;
    }
    do {
        src = lbl_80389240.src;
        n -= 2;
        srcb = lbl_80389240.srcb;
        y1 = src[0];
        src2 = lbl_80389240.src2;
        src++;
        y0 = srcb[0];
        y1 <<= 8;
        u = src2[0];
        lbl_80389240.src = src;
        src2++;
        pix = y0 | y1;
        lbl_80389240.src2 = src2;
        y0 <<= 16;
        u <<= 24;
        pix |= y0;
        v = srcb[1];
        pix |= u;
        lbl_80389240.dst[0] = pix;
        t = pix & 0xFF00FF00u;
        t |= v;
        v <<= 16;
        t |= v;
        lbl_80389240.dst[1] = t;
        *(u32 *) ((u8 *) lbl_80389240.dst + lbl_80389240.stride) = pix;
        *(u32 *) ((u8 *) lbl_80389240.dst + lbl_80389240.stride + 4) = t;
        lbl_80389240.srcb += 2;
        lbl_80389240.dst += 2;
    } while (n >= 0);
}
