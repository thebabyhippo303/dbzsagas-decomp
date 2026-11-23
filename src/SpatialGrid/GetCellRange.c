/* SpatialGrid__GetCellRange @ 0x8025FAF8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
s32 SpatialGrid__GetClampedCell(void *, s32, s32, f32, f32);
s32 SpatialGrid__GetCellRange(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 *p = arg1;
    SpatialGrid__GetClampedCell(arg0, arg2, arg3, p[0], p[1]);
    return SpatialGrid__GetClampedCell(arg0, arg4, arg5, p[2], p[3]);
}
