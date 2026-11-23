/* SpatialGrid__GetCellRect @ 0x8025FA7C (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void SpatialGrid__GetCellRect(f32 *dst, f32 *src, s32 b, s32 c) {
    f32 fb = (f32) (f64) b;
    f32 fc = (f32) (f64) c;
    f32 f12 = src[4];
    f32 f11 = src[0];
    f32 f9 = src[1];
    f32 t1;
    f32 t0;
    t1 = fb * f12 + f11;
    dst[0] = t1;
    t0 = fc * f12 + f9;
    dst[1] = t0;
    dst[3] = t0 + f12;
    dst[2] = t1 + f12;
}
