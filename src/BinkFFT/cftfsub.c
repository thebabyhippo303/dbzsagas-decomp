/* BinkFFT__cftfsub @ 0x802FFAB4 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void BinkFFT__bitrv2(int, char *, char *);
void BinkFFT__cftrec1(int, char *, int, char *);
void BinkFFT__cftrec2(int, char *, int, char *);
void BinkFFT__cftexp1(int, char *, int, char *);
void BinkFFT__cftfx41(int, char *, int, char *);
void BinkFFT__cftf1st(int, int, char *);
void BinkFFT__cftf161(void *, void *);
void BinkFFT__bitrv216(char *);
void BinkFFT__cftf081(void *, void *);
void BinkFFT__bitrv208(void *);
void BinkFFT__cftf040(char *);
void BinkFFT__cftx020(void *);

void BinkFFT__cftfsub(int n, char *a, int ip, int nw, char *w) {
    int m;

    if (n > 32) {
        m = n >> 2;
        BinkFFT__bitrv2(n, a, w + (nw - m) * 4);
        if (n > 512) {
            BinkFFT__cftrec1(m, a, nw, w);
            BinkFFT__cftrec2(m, a + (m * 4), nw, w);
            BinkFFT__cftrec1(m, a + (m * 8), nw, w);
            BinkFFT__cftrec1(m, a + (m * 12), nw, w);
        } else if (m > 32) {
            BinkFFT__cftexp1(n, a, nw, w);
        } else {
            BinkFFT__cftfx41(n, a, nw, w);
        }
        BinkFFT__cftf1st(n, ip, a);
    } else if (n > 8) {
        if (n == 32) {
            BinkFFT__cftf161(a, w + (nw * 4 - 32));
            BinkFFT__bitrv216(a);
        } else {
            BinkFFT__cftf081(a, w);
            BinkFFT__bitrv208(a);
        }
    } else if (n == 8) {
        BinkFFT__cftf040(a);
    } else if (n == 4) {
        BinkFFT__cftx020(a);
    }
}
