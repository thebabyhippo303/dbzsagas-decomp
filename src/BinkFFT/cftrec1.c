/* BinkFFT__cftrec1 @ 0x80301588 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkFFT__cftmdl1(int, char *, char *);
void BinkFFT__cftrec1(int, char *, int, char *);
void BinkFFT__cftrec2(int, char *, int, char *);
void BinkFFT__cftexp1(int, char *, int, char *);

void BinkFFT__cftrec1(int n, char *a, int nw, char *w) {
    int m;

    m = n >> 2;
    BinkFFT__cftmdl1(n, a, w + (nw - (m + m)) * 4);
    if (n > 512) {
        BinkFFT__cftrec1(m, a, nw, w);
        BinkFFT__cftrec2(m, a + (m * 4), nw, w);
        BinkFFT__cftrec1(m, a + (m * 8), nw, w);
        BinkFFT__cftrec1(m, a + (m * 12), nw, w);
    } else {
        BinkFFT__cftexp1(n, a, nw, w);
    }
}
