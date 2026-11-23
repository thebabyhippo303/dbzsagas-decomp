/* RenderState__EndBatch @ 0x80241370 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_80249DEC(void);
M2C_UNK RenderState__MarkDirty(s32);
M2C_UNK fn_80241798(void);
extern s32 lbl_803B1948 __attribute__((section(".data")));
extern s32 lbl_803DCD58;

void RenderState__EndBatch(void) {
    if ((s32) lbl_803DCD58 != 0) {
        fn_80249DEC();
        lbl_803DCD58 = 0;
    }
    if ((u32) (lbl_803B1948 - 0xA) <= 1U) {
        RenderState__MarkDirty(0x16);
    }
    fn_80241798();
}
