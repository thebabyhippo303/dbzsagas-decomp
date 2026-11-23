/* PropertyStream__ReadInt @ 0x802B2FBC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

s32 PropertyStream__ReadInt(u32 **s) {
    u32 *v = *s;
    if (v != NULL) {
        s32 out = (s32)*v;
        *s = (u32 *)((char *)v + 4);
        return out;
    }
    return 0x7FFFFFFF;
}
