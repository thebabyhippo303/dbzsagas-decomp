/* TextureMgr__FreeRenderTarget @ 0x802483CC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern char lbl_803B1C6C[];

void TextureMgr__FreeRenderTarget(s32 arg0, s32 arg1) {
    s32 m = arg1 & 0x7FFF;
    char *base = lbl_803B1C6C;
    s32 o1 = m * 24;
    s32 o0 = arg0 * 4;
    char *t = base + 0xA0;
    *(s32 *)(*(char **)(t + o0) + o1 + 20) = 1;
}
