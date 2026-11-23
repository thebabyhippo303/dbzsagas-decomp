/* Bink__ConvertYUY2Row @ 0x802F6AF8 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16; typedef int s32; typedef unsigned int u32;
typedef struct { u32 *dst0; u32 p4; u8 *src8; u32 p12; u8 *src16; u8 *src20; } BinkRow;
extern BinkRow lbl_80389240 __attribute__((section(".data")));
void Bink__ConvertYUY2Row(void *a, s32 n) {
    u8 *s1;
    u8 *s2;
    u8 *s3;
    u32 *dst;
    u32 b10;
    u32 b20;
    u32 b21;
    u32 b30;
    u32 pix;
    n -= 2;
    if (n < 0) {
        return;
    }
    do {
        s1 = lbl_80389240.src16;
        n -= 2;
        s2 = lbl_80389240.src8;
        b10 = *s1;
        s3 = lbl_80389240.src20;
        b20 = *s2;
        b10 <<= 8;
        b21 = *(s2 + 1);
        s1++;
        b30 = *s3;
        pix = b20 | b10;
        b21 <<= 16;
        dst = lbl_80389240.dst0;
        b30 <<= 24;
        pix |= b21;
        s3++;
        lbl_80389240.src16 = s1;
        lbl_80389240.src20 = s3;
        pix |= b30;
        lbl_80389240.src8 = (s2 + 2);
        *dst = pix;
        lbl_80389240.dst0 = lbl_80389240.dst0 + 1;
    } while (n >= 0);
}