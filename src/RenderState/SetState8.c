/* RenderState__SetState8 @ 0x8024AF98 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
float Gfx__BitsToFloat(s32);
int RenderState__Get(int);
float fn_8024AF38(float, float);
float RenderState__Set(s32, s32);
float RenderState__SetState8(s32 arg0) {
    float a = Gfx__BitsToFloat(arg0);
    float b = Gfx__BitsToFloat(RenderState__Get(7));
    fn_8024AF38(b, a);
    return RenderState__Set(7, arg0);
}
