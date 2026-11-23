/* Simple__GetYRotateToFaceTargetAngle @ 0x802AED10 (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern float Script__PopFloat(void *script, int context);
extern void Script__PushFloat(void *script, int context, float v);
extern float atan2f(float y, float x);
extern float lbl_80351DDC __attribute__((section(".data")));
extern float lbl_80351DE0 __attribute__((section(".data")));
extern float lbl_80351DE4 __attribute__((section(".data")));
extern float lbl_80351DE8 __attribute__((section(".data")));
extern float lbl_803DE500;
extern float lbl_803DE504;

void Simple__GetYRotateToFaceTargetAngle(void *script, int context) {
    float popped[3];
    float *p;
    char *obj;
    float dz;
    float dx;
    float a;

    p = popped;
    p[2] = Script__PopFloat(script, context);
    p[1] = Script__PopFloat(script, context);
    p[0] = Script__PopFloat(script, context);
    obj = *(char **)((char *)script + 0xC8);
    dz = p[2] - *(float *)(obj + 0x40);
    dx = p[0] - *(float *)(obj + 0x38);
    if (dz == lbl_80351DDC) {
        if (dx == lbl_80351DDC)
            a = lbl_80351DDC;
        else if (!(dx <= lbl_80351DDC))
            a = lbl_803DE500 * lbl_80351DE0;
        else
            a = -lbl_803DE500 * lbl_80351DE0;
    } else {
        a = atan2f(dx, dz);
    }
    a = a - *(float *)(obj + 0x2AC);
    if (a > lbl_80351DE4 || !(a >= lbl_80351DE8))
        a = lbl_80351DDC;
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
