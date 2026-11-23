/* Water__AddParticleRipple @ 0x80294204 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct Vec { void **data; int count; } Vec;
typedef struct WaterWrap { Vec *pools; } WaterWrap;
extern WaterWrap *lbl_803DD650;
extern void WaterPool__AddRipple(void *, int, int, int);

void Water__AddParticleRipple(void *arg0, int arg1, int arg2, int arg3, int arg4) {
    Vec *v;
    int idx;
    void **e;
    if (arg2 < 0) {
        return;
    }
    if (arg2 >= lbl_803DD650->pools->count) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    v = *(Vec **)((char *)arg0 + 0xC);
    if (arg1 >= v->count) {
        return;
    }
    idx = arg1;
    if (arg1 < 0) {
        idx = v->count - 1;
    }
    if ((idx >= v->count) || (v->count == 0)) {
        e = 0;
    } else {
        e = v->data + idx;
    }
    WaterPool__AddRipple(*e, arg2, arg3, arg4);
}
