/* Script__GetIntermediatePoint @ 0x802B1DD4 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
f32 Script__PopFloat(void *, s32);
void Script__PushFloat(void *, s32, f32);
f32 sqrtf(f32);
extern f32 lbl_80351EC4 __attribute__((section(".data")));

void Script__GetIntermediatePoint(void *arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 zero;
    f32 dx;
    f32 dz;
    f32 dist;
    f32 scale;
    void *obj;

    a = Script__PopFloat(arg0, arg1);
    b = Script__PopFloat(arg0, arg1);
    c = Script__PopFloat(arg0, arg1);
    zero = lbl_80351EC4;
    if (a == zero) {
        Script__PushFloat(arg0, arg1, c);
        Script__PushFloat(arg0, arg1, b);
        return;
    }
    obj = M2C_FIELD(arg0, void **, 0xC8);
    dx = M2C_FIELD(obj, f32 *, 0x40) - b;
    dz = M2C_FIELD(obj, f32 *, 0x38) - c;
    dist = sqrtf((dz * dz) + (dx * dx));
    if (dist == zero) {
        dx = a;
        dist = dx;
    }
    scale = a / dist;
    Script__PushFloat(arg0, arg1, (dz * scale) + c);
    dx *= scale;
    Script__PushFloat(arg0, arg1, b + dx);
}
