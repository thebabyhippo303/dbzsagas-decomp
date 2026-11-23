/* Avatar__StartFlightOnNamedSplineImpl @ 0x800A13A8 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 atan2f(f32, f32);
extern f32 lbl_803200AC __attribute__((section(".data")));
extern f32 lbl_803200B0 __attribute__((section(".data")));
extern f32 lbl_803DE500 __attribute__((section(".sdata")));

typedef void (*M1Fn)(void *, void *, f32);
typedef void (*M2Fn)(void *, void *, f32);
typedef void (*M3Fn)(void *, void *, f32);

void Avatar__StartFlightOnNamedSplineImpl(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 farg0) {
    char sp8[16];
    char sp18[16];
    void *vt;
    s16 adj;
    M1Fn fn1;
    void *a1b;
    void *vt2;
    s16 adj2;
    M2Fn fn2;
    f32 c;
    f32 x;
    f32 y;
    f32 v;
    void *vt3;
    s16 adj3;
    M3Fn fn3;

    c = lbl_803200AC;
    M2C_FIELD(arg0, f32*, 0x8C) = farg0;
    M2C_FIELD(arg0, s32*, 0x98) = arg2;
    M2C_FIELD(arg0, s32*, 0x9C) = arg3;
    M2C_FIELD(arg0, void**, 0x88) = arg1;
    M2C_FIELD(arg0, s32*, 0x94) = 1;
    M2C_FIELD(arg0, f32*, 0x90) = c;
    vt = *(void **)arg1;
    adj = *(s16 *)((char *)vt + 16);
    fn1 = *(M1Fn *)((char *)vt + 20);
    fn1(sp8, (char *)arg1 + adj, c);
    a1b = M2C_FIELD(arg0, void**, 0x88);
    vt2 = *(void **)a1b;
    adj2 = *(s16 *)((char *)vt2 + 40);
    fn2 = *(M2Fn *)((char *)vt2 + 44);
    fn2(sp18, (char *)a1b + adj2, c);
    y = M2C_FIELD(sp18, f32*, 8);
    x = M2C_FIELD(sp18, f32*, 0);
    if (y == c) {
        if (x == c) {
            v = c;
        } else {
            if (!(x <= c)) {
                v = lbl_803DE500 * lbl_803200B0;
            } else {
                v = -lbl_803DE500 * lbl_803200B0;
            }
        }
    } else {
        v = atan2f(x, y);
    }
    vt3 = M2C_FIELD(arg0, void**, 4);
    adj3 = *(s16 *)((char *)vt3 + 32);
    fn3 = *(M3Fn *)((char *)vt3 + 36);
    fn3((char *)arg0 + adj3, sp8, v);
}
