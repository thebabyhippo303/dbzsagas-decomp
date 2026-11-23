/* Animation__SampleToMatrix @ 0x8023BAAC (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 AnimationTrack__Sample(void *, s32, s32, s32);
void fn_8023B5AC(void *, s32, void *);
extern float lbl_80346F18 __attribute__((section(".rodata")));
extern float lbl_80346F28 __attribute__((section(".rodata")));

s32 Animation__SampleToMatrix(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5) {
    float buf[10];
    s32 vec[4];
    float xyz[4];
    s32 dst[10];
    void *a1 = arg1;
    s32 a2 = arg2;
    void *a5 = arg5;
    float *bp = buf;
    s32 res;
    s8 flag;
    float f10;
    f64 conv;
    float t;
    res = AnimationTrack__Sample(bp, arg0, arg3, arg4);
    flag = ((s8 *)a1)[223];
    if (flag != 0) {
        f10 = bp[1];
        if (f10 != lbl_80346F18) {
            s32 i0, i1, i2;
            conv = (f64)flag;
            t = (float)conv * lbl_80346F28;
            xyz[0] = buf[0] * t;
            xyz[2] = bp[2] * t;
            xyz[1] = f10 * t;
            i0 = *(s32 *)&xyz[0];
            i1 = *(s32 *)&xyz[1];
            i2 = *(s32 *)&xyz[2];
            ((s32 *)buf)[0] = i0;
            vec[1] = i1;
            vec[0] = i0;
            vec[2] = i2;
            ((s32 *)bp)[1] = i1;
            ((s32 *)bp)[2] = i2;
        }
    }
    if (a5 != NULL) {
        s32 *cp = (s32 *)&buf[3];
        ((s32 *)a5)[0] = cp[0];
        ((s32 *)a5)[1] = cp[1];
        ((s32 *)a5)[2] = cp[2];
    }
    {
        s32 *dp = dst;
        s32 *fp = dp;
        s32 n = 24;
        s32 w;
        do {
            w = ((s32 *)bp)[0];
            n -= 24;
            dp[0] = w;
            w = ((s32 *)bp)[1];
            dp[1] = w;
            w = ((s32 *)bp)[2];
            dp[2] = w;
            w = ((s32 *)bp)[3];
            dp[3] = w;
            w = ((s32 *)bp)[4];
            dp[4] = w;
            w = ((s32 *)bp)[5];
            bp += 6;
            dp[5] = w;
            dp += 6;
        } while (n != 0);
        w = ((s32 *)bp)[0];
        dp[0] = w;
        w = ((s32 *)bp)[1];
        dp[1] = w;
        w = ((s32 *)bp)[2];
        dp[2] = w;
        w = ((s32 *)bp)[3];
        dp[3] = w;
        fn_8023B5AC(a1, a2, fp);
    }
    return res;
}
