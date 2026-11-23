/* Bink__ConvertYUY2RowGray @ 0x802F6A18 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    u32 *dst;
    s32 unk4;
    u8 *src;
} BinkRowState;

extern BinkRowState lbl_80389240 __attribute__((section(".data")));

void Bink__ConvertYUY2RowGray(void *arg0, s32 arg1) {
    s32 n = arg1 - 2;
    u8 *src;
    u32 *dst;
    u8 *next;
    u32 u;
    u32 y;

    if (n < 0) {
        return;
    }
    do {
        src = lbl_80389240.src;
        n -= 2;
        dst = lbl_80389240.dst;
        u = src[1];
        next = src + 2;
        y = src[0];
        u <<= 16;
        lbl_80389240.src = next;
        u |= 0x80008000u;
        dst[0] = y | u;
        lbl_80389240.dst++;
    } while (n >= 0);
}
