/* Camera__TrackTarget @ 0x802AB628 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Camera__LookAt(void *, void *, void *, s32);
extern u8 lbl_803ACEF0[] __attribute__((section(".data")));

void Camera__TrackTarget(void *arg0, s32 arg1) {
    void *res;
    void *p1 = M2C_FIELD(arg0, void **, 16);
    void *p2 = M2C_FIELD(p1, void **, 52);
    void *(*fn)(void *) = M2C_FIELD(p2, void **, 92);
    s16 bias = M2C_FIELD(p2, s16 *, 88);
    s32 t0;
    s32 t1;
    s32 t2;
    s32 tmp[3];
    s32 *dp;

    res = fn((char *)p1 + bias);
    dp = tmp;
    t2 = M2C_FIELD(res, s32 *, 8);
    t1 = M2C_FIELD(res, s32 *, 4);
    t0 = M2C_FIELD(res, s32 *, 0);
    tmp[0] = t0;
    dp[1] = t1;
    dp[2] = t2;
    Camera__LookAt((char *)arg0 + 20, dp, lbl_803ACEF0, arg1);
}
