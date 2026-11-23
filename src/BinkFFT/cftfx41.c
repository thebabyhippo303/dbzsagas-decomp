/* BinkFFT__cftfx41 @ 0x803023BC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkFFT__cftf081(void *, void *);
void BinkFFT__cftf082(void *, void *);
void BinkFFT__cftf161(void *, void *);
void BinkFFT__cftf162(void *, void *);

void BinkFFT__cftfx41(int n, char *a, int nw, char *w) {
    int t;
    char *w1;
    char *w2;
    if (n == 128) {
        t = nw * 4;
        w1 = w + (t - 32);
        BinkFFT__cftf161(a, w1);
        t = t - 128;
        BinkFFT__cftf162(a + 128, w + t);
        BinkFFT__cftf161(a + 256, w1);
        BinkFFT__cftf161(a + 384, w1);
    } else {
        w2 = w + (nw * 4 - 64);
        BinkFFT__cftf081(a, w2);
        BinkFFT__cftf082(a + 64, w2);
        BinkFFT__cftf081(a + 128, w2);
        BinkFFT__cftf081(a + 192, w2);
    }
}
