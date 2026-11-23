/* Frustum__TestSphereAndAABBIn @ 0x80202CFC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Frustum__SetCurrent(void *);
s32 Frustum__TestSphereAndAABB(u32, u32, u32, u32, u32);
s32 Frustum__TestSphereAndAABBIn(void *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    Frustum__SetCurrent(arg0);
    return Frustum__TestSphereAndAABB(arg1, arg2, arg3, arg4, arg5);
}
