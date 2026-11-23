/* Bink__Convert32RowDualPair @ 0x802F25AC (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    u32 *dst;
    u32 *dst2;
    u8 *src;
    u8 *src2;
    u8 *src3;
    u8 *src4;
    char pad[8];
    s32 stride;
} Bink32DualState;
extern Bink32DualState lbl_80389240 __attribute__((section(".data")));
extern u32 lbl_80389280[] __attribute__((section(".data")));
extern u32 lbl_803804C0[] __attribute__((section(".data")));

s32 Bink__Convert32RowDualPair(s32 arg0, s32 arg1) {
    u32 *t0 = lbl_80389280;
    u32 *tA = t0 + 512;
    u32 *tB = t0 + 256;
    u32 *tC = t0 + 768;
    u8 *s3;
    u8 *s4;
    u8 *s;
    u8 *s2;
    u32 *dst;
    u32 *dst2;
    u32 d;
    u32 a;
    s32 n = arg0;

    do {
        u8 b3;
        u8 b4;
        u8 b;
        u32 bb;
        u32 c;
        u32 t;
        u32 p0;
        u32 p1;
        u32 p2;
        u32 pix;
        u32 q0;
        u32 q1;
        u32 q2;
        u32 pix2;

        arg1 += 1;
        s3 = lbl_80389240.src3;
        s4 = lbl_80389240.src4;
        b3 = *s3;
        b4 = *s4;
        s = lbl_80389240.src;
        b = *s;
        lbl_80389240.src = s + 1;
        a = tA[b3];
        bb = tB[b4];
        a += bb;
        c = tC[b4];
        d = t0[b3];
        t = lbl_803804C0[b];
        a *= 4;
        c *= 4;
        d *= 4;
        p0 = *(u32 *)(c + t);
        p1 = *(u32 *)(a + t);
        p2 = *(u32 *)(d + t);
        p0 <<= 16;
        p1 <<= 8;
        pix = p0 | p1 | p2;
        dst = lbl_80389240.dst;
        dst[0] = pix;
        *(u32 *)((u8 *)lbl_80389240.dst + lbl_80389240.stride) = pix;
        s2 = lbl_80389240.src2;
        dst2 = lbl_80389240.dst2;
        b = *s2;
        s2++;
        lbl_80389240.src2 = s2;
        t = lbl_803804C0[b];
        q0 = *(u32 *)(c + t);
        q1 = *(u32 *)(a + t);
        q2 = *(u32 *)(d + t);
        q0 <<= 16;
        q1 <<= 8;
        pix2 = q0 | q1 | q2;
        dst2[0] = pix2;
        *(u32 *)((u8 *)lbl_80389240.dst2 + lbl_80389240.stride) = pix2;
        lbl_80389240.dst++;
        lbl_80389240.dst2++;
        if (((arg1 ^ 1) & 1) != 0) {
            lbl_80389240.src3++;
            lbl_80389240.src4++;
        }
        n--;
    } while (n != 0);
    return arg1;
}
