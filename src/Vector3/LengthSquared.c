/* Vector3__LengthSquared @ 0x80031214 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void Script__PushFloat(void *, void *, float);
extern float Script__PopFloat(void *, void *);

void Vector3__LengthSquared(void *script, void *ctx) {
    float v[3];
    float sq[3];
    float *p = v;
    float a;
    float *q;
    a = Script__PopFloat(script, ctx);
    p[2] = a;
    p[1] = Script__PopFloat(script, ctx);
    a = Script__PopFloat(script, ctx);
    p[0] = a;
    q = sq;
    {
    float y = p[1]; float z = p[2];
    a = a * a;
    sq[0] = a; sq[2] = z * z; sq[1] = y * y;
    }
    Script__PushFloat(script, ctx, a + q[1] + q[2]);
}
