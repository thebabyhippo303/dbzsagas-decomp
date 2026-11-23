/* PathFollower__GetAcceleratedSpeed @ 0x802BFEA4 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern f32 lbl_80352798 __attribute__((section(".data")));
extern f32 lbl_8035279C __attribute__((section(".data")));

f32 PathFollower__GetAcceleratedSpeed(void *arg0, f32 farg0) {
    f32 step;
    f32 cur;
    f32 dst;
    f32 lim;
    f32 v;

    if (*(s32 *)((char *)arg0 + 0xA0) != 0) {
        return *(f32 *)((char *)arg0 + 0x2C);
    }
    step = *(f32 *)((char *)arg0 + 0x34);
    if (!(__builtin_fabsf(step) >= lbl_80352798)) {
        return *(f32 *)((char *)arg0 + 0x30);
    }
    cur = *(f32 *)((char *)arg0 + 0x2C);
    dst = step * farg0;
    lim = *(f32 *)((char *)arg0 + 0x30);
    if (cur <= lbl_8035279C) {
        goto degen;
    }
    if (lim >= cur) {
        goto junction;
    }
    v = lim + dst;
    if (v <= cur) {
        return v;
    }
    return cur;
junction:
    if (lim <= cur) {
        return lim;
    }
decel:
    v = lim - dst;
    if (v >= cur) {
        return v;
    }
    return cur;
degen:
    if (lim > cur) {
        goto decel;
    }
    if (lim >= cur) {
        return lim;
    }
    return cur;
}
