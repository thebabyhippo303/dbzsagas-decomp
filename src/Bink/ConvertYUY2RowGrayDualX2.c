/* Bink__ConvertYUY2RowGrayDualX2 @ 0x802F6144 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    u32 *dst;
    s32 unk4;
    u8 *src;
    char pad[0x20 - 0x0C];
    s32 stride;
} BinkRowState;

extern BinkRowState lbl_80389240 __attribute__((section(".data")));

void Bink__ConvertYUY2RowGrayDualX2(void *arg0, s32 arg1) {
    s32 n = arg1 - 2;
    u8 *src;
    u32 *dst;
    u32 y0;
    u32 u;
    u32 t0;
    u32 t1;
    u32 pix0;
    u32 pix1;

    if (n < 0) {
        return;
    }
    do {
        src = lbl_80389240.src;
        n -= 2;
        dst = lbl_80389240.dst;
        y0 = src[0];
        u = src[1];
        t0 = y0 << 16;
        t0 |= 0x80000000u;
        t1 = u << 16;
        t0 |= 0x8000u;
        t1 |= 0x80000000u;
        pix0 = y0 | t0;
        t1 |= 0x8000u;
        dst[0] = pix0;
        pix1 = u | t1;
        lbl_80389240.dst[1] = pix1;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = pix0;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride + 4) = pix1;
        lbl_80389240.src += 2;
        lbl_80389240.dst += 2;
    } while (n >= 0);
}
