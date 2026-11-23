/* Script__GetYAngleToTarget @ 0x802B1AFC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Script__PopFloat(void *, s32);
f32 atan2f(f32, f32);
void Script__PushFloat(void *, s32, f32);
extern f32 lbl_80351EA4 __attribute__((section(".data")));
extern f32 lbl_80351EA8 __attribute__((section(".data")));
extern f32 lbl_803DE500;

void Script__GetYAngleToTarget(void *arg0, s32 arg1) {
    f32 z;
    f32 x;
    f32 dz;
    f32 dx;
    f32 angle;
    f32 zero;
    void *obj;

    z = Script__PopFloat(arg0, arg1);
    x = Script__PopFloat(arg0, arg1);
    obj = M2C_FIELD(arg0, void **, 200);
    zero = lbl_80351EA4;
    dz = z - M2C_FIELD(obj, f32 *, 64);
    dx = x - M2C_FIELD(obj, f32 *, 56);
    if (dz == zero) {
        if (dx == zero) {
            angle = zero;
        } else if (!(dx <= zero)) {
            angle = lbl_803DE500 * lbl_80351EA8;
        } else {
            angle = -lbl_803DE500 * lbl_80351EA8;
        }
    } else {
        angle = atan2f(dx, dz);
    }
    Script__PushFloat(arg0, arg1, angle);
}
