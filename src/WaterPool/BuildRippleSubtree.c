/* WaterPool__BuildRippleSubtree @ 0x8029D2A8 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 WaterPool__BuildRippleChildNode(void *arg0, s32 arg1, s32 arg2);

void WaterPool__BuildRippleSubtree(void *arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 off = arg2 * 31;

    if (*(u8 *)((char *)M2C_FIELD(arg0, char **, 324) + off + 2) > arg1) {
        return;
    }
    v = WaterPool__BuildRippleChildNode(arg0, arg2, 0);
    if (v != 255) {
        WaterPool__BuildRippleSubtree(arg0, arg1, v);
    }
    v = WaterPool__BuildRippleChildNode(arg0, arg2, 1);
    if (v != 255) {
        WaterPool__BuildRippleSubtree(arg0, arg1, v);
    }
    v = WaterPool__BuildRippleChildNode(arg0, arg2, 2);
    if (v != 255) {
        WaterPool__BuildRippleSubtree(arg0, arg1, v);
    }
    v = WaterPool__BuildRippleChildNode(arg0, arg2, 3);
    if (v != 255) {
        WaterPool__BuildRippleSubtree(arg0, arg1, v);
    }
}
