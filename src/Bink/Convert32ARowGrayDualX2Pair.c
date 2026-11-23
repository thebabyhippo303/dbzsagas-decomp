/* Bink__Convert32ARowGrayDualX2Pair @ 0x802F2FEC (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

typedef struct {
    u32 *dst;
    u32 *dst2;
    u8 *src;
    u8 *src2;
    char pad[8];
    u8 *alpha;
    u8 *alpha2;
    s32 stride;
} BinkGray32ADualX2State;

extern u32 lbl_80388E40[];
extern BinkGray32ADualX2State lbl_80389240;

s32 Bink__Convert32ARowGrayDualX2Pair(s32 arg0, s32 arg1) {
    u32 *gtab = lbl_80388E40;
    u8 *src;
    u32 *dst;
    u8 v0;
    u8 *alpha;
    u32 pix0;
    u8 *src2;
    u32 *dst2;
    u8 *alpha2;
    u8 v1;
    u32 pix1;
    s32 n = arg0;

    do {
        src = lbl_80389240.src;
        alpha = lbl_80389240.alpha;
        v0 = src[0];
        src++;
        pix0 = gtab[v0] | ((u32)alpha[0] << 24);
        alpha++;
        lbl_80389240.src = src;
        lbl_80389240.alpha = alpha;
        dst = lbl_80389240.dst;
        dst[0] = pix0;
        lbl_80389240.dst[1] = pix0;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = pix0;
        ((u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride))[1] = pix0;
        src2 = lbl_80389240.src2;
        alpha2 = lbl_80389240.alpha2;
        v1 = src2[0];
        src2++;
        pix1 = gtab[v1] | ((u32)alpha2[0] << 24);
        alpha2++;
        lbl_80389240.src2 = src2;
        lbl_80389240.alpha2 = alpha2;
        dst2 = lbl_80389240.dst2;
        dst2[0] = pix1;
        lbl_80389240.dst2[1] = pix1;
        *(u32 *)((u8 *)lbl_80389240.dst2 + lbl_80389240.stride) = pix1;
        ((u32 *)((u8 *)lbl_80389240.dst2 + lbl_80389240.stride))[1] = pix1;
        lbl_80389240.dst += 2;
        lbl_80389240.dst2 += 2;
        n--;
    } while (n != 0);
    return arg1 + arg0;
}
