/* Light__SetPointLightColor @ 0x8002DCE8 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef int s32;
extern s32 Script__PopInt(void *, s32);
extern f32 Script__PopFloat(void *, s32);
extern f32 lbl_80311674 __attribute__((section(".data")));

void Light__SetPointLightColor(void *script, s32 ctx) {
    f32 src[4];
    volatile s32 d[4];
    s32 t0, t1, t2, t3;
    f32 *p;
    f32 *obj;
    f32 a;
    f32 b;
    f32 c;
    f32 w;
    f32 x;

    obj = (f32 *)Script__PopInt(script, ctx);
    a = Script__PopFloat(script, ctx);
    b = Script__PopFloat(script, ctx);
    c = Script__PopFloat(script, ctx);
    w = lbl_80311674;
    p = src;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = w;
    x = src[0];
    obj[1] = b;
    obj[0] = x;
    obj[2] = c;
    obj[3] = w;
    t0 = ((s32 *)obj)[0];
    t1 = ((s32 *)obj)[1];
    t2 = ((s32 *)obj)[2];
    t3 = ((s32 *)obj)[3];
    d[0] = t0;
    d[1] = t1;
    d[2] = t2;
    d[3] = t3;
}
