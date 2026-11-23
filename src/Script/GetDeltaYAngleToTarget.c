/* Script__GetDeltaYAngleToTarget @ 0x802B1BBC (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern float Script__PopFloat(void *script, int context);
extern void Script__PushFloat(void *script, int context, float v);
extern float atan2f(float y, float x);
extern float lbl_80351EAC __attribute__((section(".data")));
extern float lbl_80351EB0 __attribute__((section(".data")));
extern float lbl_80351EB4 __attribute__((section(".data")));
extern float lbl_80351EB8 __attribute__((section(".data")));
extern float lbl_803DE500;
extern float lbl_803DE504;
void Script__GetDeltaYAngleToTarget(void *script, int context) {
    char *obj;
    float t;
    float dz;
    float dx;
    float a;
    t = Script__PopFloat(script, context);
    dx = Script__PopFloat(script, context);
    obj = *(char **)((char *)script + 0xC8);
    dz = t - *(float *)(obj + 0x40);
    dx = dx - *(float *)(obj + 0x38);
    if (dz == lbl_80351EAC) {
        if (dx == lbl_80351EAC)
            a = lbl_80351EAC;
        else if (!(dx <= lbl_80351EAC))
            a = lbl_803DE500 * lbl_80351EB0;
        else
            a = -lbl_803DE500 * lbl_80351EB0;
    } else {
        a = atan2f(dx, dz);
    }
    a = a - *(float *)(obj + 0x2AC);
    if (a > lbl_80351EB4 || !(a >= lbl_80351EB8))
        a = lbl_80351EAC;
    if (!(a >= -lbl_803DE500)) {
        do {
            a += lbl_803DE504;
        } while (a < -lbl_803DE500);
    }
    {
        float pi = lbl_803DE500;
        if (!(a <= pi)) {
            do {
                a -= lbl_803DE504;
            } while (a > pi);
        }
    }
    Script__PushFloat(script, context, a);
}
