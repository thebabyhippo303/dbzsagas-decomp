/* CCameraFighter__SetTrackedActors @ 0x800BE628 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


typedef struct { s32 x, y, z; } CcfVec3;
void Camera__GetActorsMidpoint(s32 *, void *, s32, s32);
s32 CCameraFighter__Initialize(void *arg0, s32 arg1, s32 arg2) {
    CcfVec3 mid;

    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg2;
    Camera__GetActorsMidpoint(&mid, arg0, arg1, arg2);
    M2C_FIELD(arg0, CcfVec3 *, 0x80) = mid;
    return 1;
}
