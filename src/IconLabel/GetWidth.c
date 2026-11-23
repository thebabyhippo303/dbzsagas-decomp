/* IconLabel__GetWidth @ 0x80261888 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80349BB8 __attribute__((section(".data")));
s32 EzString__GetLength(void *);
f32 SphereText__GetTextWidth(void *);
f32 IconLabel__GetWidth(void *arg0) {
    f32 w = lbl_80349BB8;
    if (*(s32 *)((char *)arg0 + 452) != 0) {
        w = *(f32 *)((char *)arg0 + 476);
    }
    if (EzString__GetLength((char *)arg0 + 1268) > 0) {
        w += SphereText__GetTextWidth((char *)arg0 + 848);
    }
    return w;
}
