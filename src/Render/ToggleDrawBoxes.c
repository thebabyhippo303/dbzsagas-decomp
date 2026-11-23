/* Render__ToggleDrawBoxes @ 0x80229934 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803AD9E4[];

void Render__ToggleDrawBoxes(void) {
    u8 *base = (u8 *) (s32) lbl_803AD9E4;
    int draw = 1;
    if (*(s32 *)(base + 0x30) == 1) {
        draw = 0;
    }
    *(s32 *)(base + 0x30) = draw;
}
