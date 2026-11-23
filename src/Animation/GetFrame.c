/* Animation__GetFrame @ 0x8023E88C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

extern f32 lbl_80347008 __attribute__((section(".data")));

u16 Animation__GetFrame(void *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 arg6) {
    s32 frame = arg6;
    u16 v;
    f32 f;

    (void)a1;
    (void)a2;
    (void)a3;
    (void)a4;
    (void)a5;
    v = *(u16 *)arg0;
    f = (f32)(f64)v * lbl_80347008;
    return (u16)frame;
}
