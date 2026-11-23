/* Sphere__SetCornerColor @ 0x8026CC78 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void Sphere__SetCornerColor(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 off;
    f32 *pr;
    f32 *pg;
    f32 *pb;
    f32 *pa;
    off = (arg1 & 3) << 5;
    pr = (f32 *)((char *)arg0 + 120);
    *(f32 *)((char *)pr + off) = arg2;
    pg = (f32 *)((char *)arg0 + 124);
    *(f32 *)((char *)pg + off) = arg3;
    pb = (f32 *)((char *)arg0 + 128);
    *(f32 *)((char *)pb + off) = arg4;
    pa = (f32 *)((char *)arg0 + 132);
    *(f32 *)((char *)pa + off) = arg5;
}
