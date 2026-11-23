/* SphereText__GetCharBounds @ 0x80272454 (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SphereText__GetCharQuad(s32, s32, f32 *);
extern f32 lbl_8034A004 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Quad;

s32 SphereText__GetCharBounds(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 buf[12];
    s32 i;
    Quad *a;
    f32 *b;
    f32 t;
    f32 k;
    f32 qx, qy;
    for (i = 0; i < 4; i++) ;
    if (SphereText__GetCharQuad(arg0, arg1, buf) == 0) {
        k = lbl_8034A004;
        *arg3 = k;
        *arg2 = k;
        *arg5 = k;
        *arg4 = k;
        return 0;
    }
    *arg2 = buf[0];
    *arg3 = buf[1];
    *arg4 = *arg2;
    *arg5 = *arg3;
    b = &buf[3];
    a = (Quad *)b;
    for (i = 0; i < 3; i++, b += 3, a++) {
        qx = a->x;
        if (!(*arg2 <= qx))
            *arg2 = b[0];
        qy = b[1];
        if (!(*arg3 <= qy))
            *arg3 = qy;
        qx = b[0];
        if (!(*arg4 >= qx))
            *arg4 = qx;
        qy = b[1];
        if (!(*arg5 >= qy))
            *arg5 = qy;
    }
    return 1;
}
