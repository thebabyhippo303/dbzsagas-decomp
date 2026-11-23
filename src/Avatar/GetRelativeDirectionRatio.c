/* Avatar__GetRelativeDirectionRatio @ 0x8003A55C (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern float lbl_80311A14 __attribute__((section(".data")));
extern float lbl_80311A18 __attribute__((section(".data")));
extern float lbl_80311A1C __attribute__((section(".data")));
extern float lbl_803DE500;
extern float lbl_803DE504;
extern void *Script__PopInt(void *script, s32 context);
extern float atan2f(float y, float x);
extern void Script__PushFloat(void *script, s32 context, float v);

void Avatar__GetRelativeDirectionRatio(void *script, s32 context) {
    char *obj;
    s32 v[3];
    s32 *p;
    s32 *q;
    s32 ix;
    s32 iy;
    s32 iz;
    float dz;
    float dx;
    float a;
    float two_pi;
    float t1;
    float t2;
    float b;

    obj = (char *)Script__PopInt(script, context);
    p = v;
    ix = *(s32 *)(obj + 0x68);
    q = (s32 *)(obj + 0x68);
    iz = q[2];
    iy = q[1];
    v[0] = ix;
    p[2] = iz;
    dz = *(float *)&p[2];
    p[1] = iy;
    dx = *(float *)&v[0];
    if (dz == lbl_80311A14) {
        if (dx == lbl_80311A14) {
            a = lbl_80311A14;
        } else if (!(dx > lbl_80311A14)) {
            a = -lbl_803DE500 * lbl_80311A18;
        } else {
            a = lbl_803DE500 * lbl_80311A18;
        }
    } else {
        a = atan2f(dx, dz);
    }
    two_pi = lbl_803DE504;
    t1 = a / two_pi;
    if (t1 > lbl_80311A14 || !(t1 >= lbl_80311A14)) {
        t1 += lbl_80311A1C;
    }
    b = *(float *)(obj + 0x75C);
    t2 = b / two_pi;
    if (t2 > lbl_80311A14 || !(t2 >= lbl_80311A14)) {
        t2 += lbl_80311A1C;
    }
    a = t2 - t1;
    if (a > lbl_80311A14 || !(a >= lbl_80311A14)) {
        a += lbl_80311A1C;
    }
    Script__PushFloat(script, context, a);
}
