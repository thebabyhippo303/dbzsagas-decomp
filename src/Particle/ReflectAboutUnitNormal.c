/* Particle__ReflectAboutUnitNormal @ 0x80221598 (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
void Particle__ReflectAboutUnitNormal(void *arg0, void *arg1) {
    s32 a[3], b[3], t[3], ng[3], s[3];
    s32 *pa = a;
    s32 *pb = b;
    s32 *pt = t;
    f32 k;
    a[0] = ((s32 *)arg0)[0];
    pa[1] = ((s32 *)arg0)[1];
    pa[2] = ((s32 *)arg0)[2];
    b[0] = ((s32 *)arg1)[0];
    pb[1] = ((s32 *)arg1)[1];
    pb[2] = ((s32 *)arg1)[2];
    ((f32 *)ng)[0] = -((f32 *)a)[0];
    ((f32 *)ng)[1] = -((f32 *)pa)[1];
    ((f32 *)ng)[2] = -((f32 *)pa)[2];
    a[0] = ng[0];
    pa[1] = ng[1];
    pa[2] = ng[2];
    pt[0] = a[0];
    pt[1] = pa[1];
    pt[2] = pa[2];
    ((f32 *)t)[0] = ((f32 *)b)[0] * ((f32 *)a)[0];
    ((f32 *)pt)[1] = ((f32 *)b)[1] * ((f32 *)pa)[1];
    ((f32 *)pt)[2] = ((f32 *)b)[2] * ((f32 *)pa)[2];
    k = ((f32 *)t)[0] + ((f32 *)pt)[1] + ((f32 *)pt)[2];
    k += k;
    ((f32 *)s)[0] = ((f32 *)b)[0] * k;
    ((f32 *)s)[1] = ((f32 *)b)[1] * k;
    ((f32 *)s)[2] = ((f32 *)b)[2] * k;
    pt[0] = s[0];
    pt[1] = s[1];
    pt[2] = s[2];
    b[0] = s[0];
    pb[1] = s[1];
    pb[2] = s[2];
    ((f32 *)t)[0] = ((f32 *)b)[0] - ((f32 *)a)[0];
    ((f32 *)pt)[1] = ((f32 *)b)[1] - ((f32 *)pa)[1];
    ((f32 *)pt)[2] = ((f32 *)b)[2] - ((f32 *)pa)[2];
    ((s32 *)arg0)[0] = t[0];
    ((s32 *)arg0)[1] = pt[1];
    ((s32 *)arg0)[2] = pt[2];
}
