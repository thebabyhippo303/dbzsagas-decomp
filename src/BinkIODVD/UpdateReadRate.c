/* BinkIODVD__UpdateReadRate @ 0x802EF50C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 _0[45]; s32 f180; s32 f184; } BinkIODVDState;
s32 mult64anddiv(s32, s32, s32);
u32 RADTimerRead(void);
void BinkIODVD__UpdateReadRate(BinkIODVDState *st, s32 arg1, s32 arg2) {
    s32 ease = arg2;
    s32 m;
    u32 t;
    s32 v;
    s32 b;
    s32 e;
    s32 left;
    m = mult64anddiv(arg1, 1000, st->f180);
    t = RADTimerRead();
    v = st->f184 + (m - (t - ease));
    st->f184 = v;
    if (v > 0) {
        do {
loop_1:
            m = RADTimerRead();
            b = st->f184;
            e = m - t;
            if (e < b) {
                goto loop_1;
            }
            left = b - e;
            t = m;
            st->f184 = left;
        } while (left > 0);
    }
}
