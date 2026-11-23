/* RenderState__ApplyZMode @ 0x8024B178 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 RenderState__Get(s32);
void GXSetZMode(s32, s32, s32);
extern u32 lbl_80374530[] __attribute__((section(".data")));

void RenderState__ApplyZMode(void) {
    s32 enable = (RenderState__Get(5) == 1);
    s32 write = (RenderState__Get(6) == 1);
    u32 func = RenderState__Get(4);
    u32 mode;

    if (func <= 7) {
        mode = lbl_80374530[func];
    } else {
        mode = 0;
    }
    GXSetZMode(enable, mode, write);
}
