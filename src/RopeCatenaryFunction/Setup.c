/* RopeCatenaryFunction__Setup @ 0x802C2130 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
f32 sqrtf(f32);
f32 logf(f32);
extern f32 lbl_80352974 __attribute__((section(".data")));
extern f32 lbl_80352978 __attribute__((section(".data")));
extern f32 lbl_8035297C __attribute__((section(".data")));
extern f32 lbl_803DD530;
s32 RopeCatenaryFunction__Setup(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 sqs, kps;
    f32 k;
    f32 c1;
    f32 c3;
    f32 s78;
    f32 t, sq, kp, res;
    u32 e1, e2;
    s32 r;
    if (farg0 <= __builtin_fabsf(farg2) || ((c1 = lbl_80352974), !(farg1 >= c1))) {
        return 0;
    }
    k = farg2 / farg0;
    s78 = lbl_80352978;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, f32 *, 8) = farg1 * s78;
    t = (c3 = lbl_8035297C) - k * k;
    if (t <= c1) {
        goto useSDA;
    }
    sq = sqrtf(t);
    sqs = sq;
    kp = k + c3;
    kps = kp;
    e1 = ((*(u32 *)&sqs) >> 23) & 0xFFU;
    if (e1 != 0) {
        e2 = ((*(u32 *)&kps) >> 23) & 0xFFU;
        r = (e2 >= e1 + 127);
    } else {
        r = 1;
    }
    if (r == 0) {
        goto doLog;
    }
useSDA:
    res = lbl_803DD530;
    goto done;
doLog:
    res = logf(kp / sq);
done:
    M2C_FIELD(arg0, f32 *, 12) = res;
    return 1;
}
