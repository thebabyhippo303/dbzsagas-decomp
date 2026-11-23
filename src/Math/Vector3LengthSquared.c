/* Math__Vector3LengthSquared @ 0x802B2808 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
extern void Script__PushFloat(void *, void *, float);
extern float Script__PopFloat(void *, void *);
void Math__Vector3LengthSquared(void *script, void *ctx) {
    float v[3];
    float sq[3];
    float *p = v;
    float a;
    float b;
    float *q;
    float y;
    float z;
    a = Script__PopFloat(script, ctx);
    v[0] = a;
    p[1] = Script__PopFloat(script, ctx);
    b = Script__PopFloat(script, ctx);
    p[2] = b;
    q = sq;
    y = p[1];
    sq[2] = b * b;
    z = v[0];
    sq[1] = y * y;
    a = z * z;
    sq[0] = a;
    Script__PushFloat(script, ctx, a + q[1] + q[2]);
}
