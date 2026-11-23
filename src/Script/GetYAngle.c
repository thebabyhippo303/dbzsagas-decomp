/* Script__GetYAngle @ 0x802B1CF4 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
f32 Script__PopFloat(void *, s32);
f32 atan2f(f32, f32);
void Script__PushFloat(void *, s32, f32);
extern f32 lbl_80351EBC __attribute__((section(".data")));
extern f32 lbl_80351EC0 __attribute__((section(".data")));
extern f32 lbl_803DE500;
void Script__GetYAngle(void *arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 dx;
    f32 dz;
    f32 angle;
    f32 zero;
    a = Script__PopFloat(arg0, arg1);
    b = Script__PopFloat(arg0, arg1);
    c = Script__PopFloat(arg0, arg1);
    d = Script__PopFloat(arg0, arg1);
    zero = lbl_80351EBC;
    dx = b - d;
    dz = a - c;
    if (dz == zero) {
        if (dx == zero) {
            angle = zero;
        } else if (!(dx <= zero)) {
            angle = lbl_803DE500 * lbl_80351EC0;
        } else {
            angle = -lbl_803DE500 * lbl_80351EC0;
        }
    } else {
        angle = atan2f(dx, dz);
    }
    Script__PushFloat(arg0, arg1, angle);
}
