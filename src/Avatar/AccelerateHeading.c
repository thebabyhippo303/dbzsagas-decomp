/* Avatar__AccelerateHeading @ 0x800411C4 (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
f32 Script__PopFloat(void *, s32);
char *Script__PopInt(void *, s32);
void Script__PushFloat(void *, s32, f32);
void Script__PushInt(void *, s32, s32);
extern f32 lbl_80311C6C __attribute__((section(".data")));
extern f32 lbl_80311C70 __attribute__((section(".data")));
extern const f32 lbl_80311C74 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;

void Avatar__AccelerateHeading(void *script, s32 ctx) {
    char *obj;
    f32 acc, lim, v, old, nw, pi;
    s32 r5;

    obj = Script__PopInt(script, ctx);
    acc = Script__PopFloat(script, ctx);
    lim = Script__PopFloat(script, ctx);
    v = acc * lbl_803A35BC + Script__PopFloat(script, ctx);
    r5 = 0;
    if (!(v <= lim)) {
        v = lim;
    }
    if (!(v >= -lim)) {
        v = -lim;
    }
    old = *(f32 *)(obj + 0x75C);
    if (old > lbl_80311C6C || !(old >= lbl_80311C70)) {
        old = lbl_80311C74;
    }
    if (!(old >= -lbl_803DE500)) {
        do {
            old += lbl_803DE504;
        } while (old < -lbl_803DE500);
    }
    pi = lbl_803DE500;
    if (!(old <= pi)) {
        do {
            old -= lbl_803DE504;
        } while (old > pi);
    }
    nw = v * lbl_803A35BC + old;
    if (nw > lbl_80311C6C || !(nw >= lbl_80311C70)) {
        nw = lbl_80311C74;
    }
    if (!(nw >= -pi)) {
        do {
            nw += lbl_803DE504;
        } while (nw < -pi);
    }
    if (!(nw <= pi)) {
        do {
            nw -= lbl_803DE504;
        } while (nw > pi);
    }
    *(f32 *)(obj + 0x75C) = nw;
    if (!(old >= lbl_80311C74) && !(nw < lbl_80311C74)) {
        r5 = 1;
    }
    Script__PushInt(script, ctx, r5);
    Script__PushFloat(script, ctx, v);
}
