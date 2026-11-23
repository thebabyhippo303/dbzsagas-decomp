/* WaterPool__UpdateRippleVertices @ 0x8029B1F4 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void WaterPool__UpdateRippleVertices(void *obj, s32 b, void *arg2, s32 arg3);
void WaterPool__ComputeRippleVertices(void *obj, u8 b);

void WaterPool__UpdateRippleVertices(void *obj, s32 b, void *arg2, s32 arg3) {
    u8 *p = *(u8 **)((char *)obj + 324) + b * 31;
    u8 *q = p + 3;
    s32 i = 0;

    do {
        u8 c = q[i];
        u8 j = (u8)i++;
        if (c != 255) {
            WaterPool__UpdateRippleVertices(obj, c, p, j);
        } else {
            WaterPool__ComputeRippleVertices(obj, (u8)b);
        }
    } while (i <= 3);
}
