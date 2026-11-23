/* CActor__GetModulatedLightColor @ 0x801DDA50 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u32 *CActor__GetModulatedLightColor(void *arg0, void *arg1) {
    u32 *dst = arg0;
    u32 tmp[3];
    u32 *ip = tmp;
    f32 *c = M2C_FIELD(arg1, f32 **, 220);
    f32 m0 = M2C_FIELD(arg1, f32 *, 236);
    f32 m1 = M2C_FIELD(arg1, f32 *, 240);
    f32 m2 = M2C_FIELD(arg1, f32 *, 244);
    f32 c2v;

    ((f32 *)tmp)[0] = c[0] * m0;
    ((f32 *)tmp)[1] = c[1] * m1;
    c2v = c[2];
    dst[0] = tmp[0];
    ((f32 *)tmp)[2] = c2v * m2;
    dst[1] = ip[1];
    dst[2] = ip[2];
    return dst;
}
