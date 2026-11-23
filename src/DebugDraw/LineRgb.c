/* DebugDraw__LineRgb @ 0x80186768 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void fn_80244F44(s32, s32, void *, s32, s32);
extern f32 lbl_8033DF80 __attribute__((section(".data")));

void DebugDraw__LineRgb(s32 a, s32 b, f32 *rgb, s32 c, s32 d, s32 e) {
    u8 col[4];

    col[3] = 0xFF;
    col[0] = (u8) (s32) (rgb[0] * lbl_8033DF80);
    col[1] = (u8) (s32) (rgb[1] * lbl_8033DF80);
    col[2] = (u8) (s32) (rgb[2] * lbl_8033DF80);
    fn_80244F44(a, b, col, c, d);
}
