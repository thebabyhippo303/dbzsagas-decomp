/* floor @ 0x80166EC0 (size: 0x174, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef double f64;
extern f64 lbl_8033CCC8 __attribute__((section(".data")));
extern f64 lbl_8033CCD0 __attribute__((section(".data")));
typedef union { f64 d; struct { s32 hi; u32 lo; } w; } DW;
#define EXTRACT_WORDS(a, b, d0) do { DW ew; ew.d = (d0); (a) = ew.w.hi; (b) = ew.w.lo; } while (0)
#define INSERT_WORDS(d0, a, b) do { DW iw; iw.w.hi = (a); iw.w.lo = (b); (d0) = iw.d; } while (0)

f64 floor(f64 x) {
    s32 i0;
    u32 i1;
    s32 j0;
    u32 i, j;

    EXTRACT_WORDS(i0, i1, x);
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (x + lbl_8033CCC8 > lbl_8033CCD0) {
                if (i0 >= 0) {
                    i1 = 0;
                    i0 = 0;
                } else if (((i0 & 0x7fffffff) | i1) != 0) {
                    i0 = 0xbff00000;
                    i1 = 0;
                }
            }
        } else {
            i = 0x000fffff >> j0;
            if (((i0 & i) | i1) == 0) return x;
            if (x + lbl_8033CCC8 > lbl_8033CCD0) {
                if (i0 < 0) i0 += 0x00100000 >> j0;
                i0 &= ~i;
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) return x + x;
        return x;
    } else {
        i = 0xffffffffU >> (j0 - 20);
        if ((i1 & i) == 0) return x;
        if (x + lbl_8033CCC8 > lbl_8033CCD0) {
            if (i0 < 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) i0 += 1;
                    i1 = j;
                }
            }
            i1 &= ~i;
        }
    }
    INSERT_WORDS(x, i0, i1);
    return x;
}
