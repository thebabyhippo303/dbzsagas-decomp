/* Bink__Convert32ARowGrayDual @ 0x802F2E1C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

typedef struct {
    u32 *dst;
    u32 pad4;
    u8 *src;
    u32 pad12[3];
    u8 *alpha;
    u32 pad28;
    s32 stride;
} GrayState;

extern GrayState lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80388E40[] __attribute__((section(".data")));

void Bink__Convert32ARowGrayDual(s32 unused, s32 count) {
    u8 *src;
    u8 *alpha;
    u32 pix;
    u8 v;
    u32 *gtab;

    count -= 1;
    if (count == -1) {
        return;
    }
    gtab = lbl_80388E40;
    do {
        count--;
        src = lbl_80389240.src;
        alpha = lbl_80389240.alpha;
        v = src[0];
        src++;
        pix = gtab[v] | ((u32)alpha[0] << 24);
        alpha++;
        lbl_80389240.src = src;
        lbl_80389240.alpha = alpha;
        lbl_80389240.dst[0] = pix;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = pix;
        lbl_80389240.dst++;
    } while (count != -1);
}
