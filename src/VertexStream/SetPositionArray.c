/* VertexStream__SetPositionArray @ 0x80248554 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    u8 f14;
    u8 pad15[3];
    s32 f18;
} VXArray;

s32 VertexStream__GetComponentSize(s32);
M2C_UNK GXSetArray(s32, s32, s32);
extern VXArray lbl_80374410 __attribute__((section(".data")));

void VertexStream__SetPositionArray(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    VXArray *s = &lbl_80374410;
    s32 t;

    s->f4 = arg0;
    s->f8 = arg1;
    s->f18 = arg3;
    s->fC = arg2;
    s->f10 = arg0 * VertexStream__GetComponentSize(arg1);
    t = ((u8 *)&s->f10)[3] + arg2;
    s->f14 = (u8)t;
    GXSetArray(9, s->f18, t & 0xFF);
}
