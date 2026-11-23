/* CameraLOD__Initialize @ 0x80253CB0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void CameraLOD__SetCamera(void *, s32, s32);
s32 CameraLOD__LoadSettings(void *, s32); /* extern */

s32 CameraLOD__Initialize(void *arg0, s32 p1, s32 p2) {
    CameraLOD__SetCamera(arg0, 0, p1);
    return CameraLOD__LoadSettings(arg0, p2);
}
