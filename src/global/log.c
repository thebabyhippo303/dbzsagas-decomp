/* log @ 0x80167390 (size: 0x2FC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* WIP: fdlibm/log10-derived structure (head/reduction/poly/gotos); OPEN: frame (ours 16 vs target 24) and int regs (ours r3/r4 vs target r5/r11/r4). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f64 lbl_8033CCE8 __attribute__((section(".rodata")));
extern f64 lbl_8033CCF0 __attribute__((section(".rodata")));
extern f64 lbl_8033CCF8 __attribute__((section(".rodata")));
extern f64 lbl_8033CD00 __attribute__((section(".rodata")));
extern f64 lbl_8033CD08 __attribute__((section(".rodata")));
extern f64 lbl_8033CD10 __attribute__((section(".rodata")));
extern f64 lbl_8033CD18 __attribute__((section(".rodata")));
extern f64 lbl_8033CD20 __attribute__((section(".rodata")));
extern f64 lbl_8033CD28 __attribute__((section(".rodata")));
extern f64 lbl_8033CD30 __attribute__((section(".rodata")));
extern f64 lbl_8033CD38 __attribute__((section(".rodata")));
extern f64 lbl_8033CD40 __attribute__((section(".rodata")));
extern f64 lbl_8033CD48 __attribute__((section(".rodata")));
extern f64 lbl_8033CD50 __attribute__((section(".rodata")));
extern f64 lbl_8033CD58 __attribute__((section(".rodata")));
extern f64 lbl_8033CD60 __attribute__((section(".rodata")));
extern f64 lbl_8033CD68 __attribute__((section(".rodata")));

f64 log(f64 x) {
    union { f64 d; int w[2]; } b;
    union { f64 d; u32 u[2]; } c;
    register int hx;
    register int lx;
    register int k;
    f64 f;
    f64 s;
    f64 z;
    f64 w;
    f64 t1;
    f64 t2;
    f64 R;
    f64 dk;
    f64 t;
    f64 h;

    b.d = x;
    hx = b.w[0];
    lx = b.w[1];
    k = 0;
    if (hx <= 0x000fffff) {
        if (((hx & 0x7fffffff) | lx) == 0) {
            return lbl_8033CCE8;
        }
        if (hx < 0) {
            return (x - x) / lbl_8033CCF0;
        }
        k = -54;
        x = x * lbl_8033CCF8;
        b.d = x;
        hx = b.w[0];
    }
    if (hx > 0x7fefffff) {
        return x + x;
    }
    k += (hx >> 20) - 1023;
    hx &= 0x000fffff;
    lx = (hx + 0x95f64) & 0x100000;
    b.d = x;
    hx = b.w[0];
    lx = b.w[1];
    b.w[0] = hx | (lx ^ 0x3ff00000);
    b.w[1] = lx;
    x = b.d;
    k += (lx >> 20);
    f = x - lbl_8033CD00;
    if (((hx + 2) & 0xfffff) <= 2) {
        t = lbl_8033CCF0;
        if (f == t) {
            if (k != 0) {
                c.u[1] = k ^ 0x80000000;
                c.u[0] = 0x43300000;
                dk = c.d - lbl_8033CD08;
                t = dk * lbl_8033CD18;
                return dk * lbl_8033CD10 + t;
            }
            return t;
        }
        R = f * f * (lbl_8033CD28 - f * lbl_8033CD20);
        if (k == 0) {
            return f - R;
        }
        c.u[1] = k ^ 0x80000000;
        c.u[0] = 0x43300000;
        dk = c.d - lbl_8033CD08;
        t = R - dk * lbl_8033CD18;
        goto tail;
    }
    s = f / (f + lbl_8033CD30);
    z = s * s;
    w = z * z;
    c.u[1] = k ^ 0x80000000;
    c.u[0] = 0x43300000;
    dk = c.d;
    t1 = lbl_8033CD50 * w + lbl_8033CD58;
    t1 = t1 * w + lbl_8033CD60;
    t2 = lbl_8033CD38 * w + lbl_8033CD40;
    t1 = t1 * w + lbl_8033CD68;
    t2 = t2 * w + lbl_8033CD48;
    z = z * t1;
    dk = dk - lbl_8033CD08;
    R = w * t2 + z;
    if ((((hx + 0xFFF9EB86) | (0x6B851 - hx))) > 0) {
        h = f * lbl_8033CD28 * f;
        if (k == 0) {
            t = h - s * (h + R);
            goto end1;
        }
        t = h + R;
        t = s * t + dk * lbl_8033CD18;
        t = h - t;
        goto tail;
    }
    if (k != 0) {
        t = s * (f - R) - dk * lbl_8033CD18;
    } else {
        t = s * (f - R);
end1:
        t = f - t;
        return t;
    }
tail:
    t = t - f;
    return dk * lbl_8033CD10 - t;
}
