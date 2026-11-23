/* WaterPool__AddRippleStrip @ 0x8029AC68 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 ProcModel__AddIndices(void *, u16 *, u16, s32); /* extern */

s32 WaterPool__AddRippleStrip(void *arg0, void *arg1, u16 *arg2, s32 arg3, s32 arg4) {
    u16 buf[12];
    u16 *dst = buf;
    u16 *src = arg2;
    s32 i;

    if (arg3 > 0) {
        for (i = 0; i < arg3; i++) {
            *dst++ = *src++ + arg4;
        }
    }
    return ProcModel__AddIndices(arg1, buf, (u16) arg3, arg3);
}
