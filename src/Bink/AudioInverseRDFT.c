/* Bink__AudioInverseRDFT @ 0x802FF3B4 (size: 0x17C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void BinkFFT__cftfsub(s32, char *, s32, s32, char *);
void BinkFFT__cftbsub(s32, char *, s32, s32, char *);
void BinkFFT__makewt(s32, s32, s32);
void BinkFFT__makect(s32, s32, s32);
void BinkFFT__rftfsub(s32, s32, s32, s32);
void BinkFFT__rftbsub(s32, s32, s32, s32);
extern float lbl_80354C60 __attribute__((section(".data")));

void Bink__AudioInverseRDFT(s32 arg0, s32 arg1, char *arg2, void *arg3, char *arg4) {
    s32 n;
    s32 n2;
    float x;
    float y;
    float d;
    float s;

    n = M2C_FIELD(arg3, s32 *, 0);
    if (arg0 > n * 4) {
        n = arg0 >> 2;
        BinkFFT__makewt(n, (s32)arg3, (s32)arg4);
    }
    n2 = M2C_FIELD(arg3, s32 *, 4);
    if (arg0 > n2 * 4) {
        n2 = arg0 >> 2;
        BinkFFT__makect(n2, (s32)arg3, (s32)(arg4 + n * 4));
    }
    if (arg1 >= 0) {
        if (arg0 > 4) {
            BinkFFT__cftfsub(arg0, arg2, (s32)arg3 + 8, n, arg4);
            BinkFFT__rftfsub(arg0, (s32)arg2, n2, (s32)(arg4 + n * 4));
        } else if (arg0 == 4) {
            BinkFFT__cftfsub(4, arg2, (s32)arg3 + 8, n, arg4);
        }
        x = M2C_FIELD(arg2, float *, 0);
        y = M2C_FIELD(arg2, float *, 4);
        d = x - y;
        s = x + y;
        M2C_FIELD(arg2, float *, 0) = s;
        M2C_FIELD(arg2, float *, 4) = d;
        return;
    }
    M2C_FIELD(arg2, float *, 4) = (M2C_FIELD(arg2, float *, 0) - M2C_FIELD(arg2, float *, 4)) * lbl_80354C60;
    M2C_FIELD(arg2, float *, 0) = M2C_FIELD(arg2, float *, 0) - M2C_FIELD(arg2, float *, 4);
    if (arg0 > 4) {
        BinkFFT__rftbsub(arg0, (s32)arg2, n2, (s32)(arg4 + n * 4));
        BinkFFT__cftbsub(arg0, arg2, (s32)arg3 + 8, n, arg4);
        return;
    }
    if (arg0 == 4) {
        BinkFFT__cftbsub(4, arg2, (s32)arg3 + 8, n, arg4);
    }
}
