/* Stage__GetBoundsXZ @ 0x801B25FC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern f32 lbl_803417CC __attribute__((section(".data")));
extern f32 lbl_803417D0 __attribute__((section(".data")));
void Stage__GetBoundsXZ(f32 *dst, f32 **srcpp) {
    f32 *src = *srcpp;
    f32 tmp[4];
    f32 v0;
    f32 v1;
    f32 v2;
    f32 v3;
    f32 c0;
    f32 c1;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    if (src != NULL) {
        v0 = src[1];
        v1 = src[3];
        v2 = src[4];
        v3 = src[6];
        tmp[0] = v0;
        tmp[1] = v1;
        tmp[2] = v2;
        tmp[3] = v3;
        t0 = ((u32 *)tmp)[0];
        t1 = ((u32 *)tmp)[1];
        t2 = ((u32 *)tmp)[2];
        t3 = ((u32 *)tmp)[3];
        ((u32 *)dst)[1] = t1;
        ((u32 *)dst)[2] = t2;
        ((u32 *)dst)[3] = t3;
        ((u32 *)dst)[0] = t0;
    } else {
        c0 = lbl_803417CC;
        c1 = lbl_803417D0;
        dst[0] = c0;
        dst[2] = c1;
        dst[1] = c0;
        dst[3] = c1;
    }
}
