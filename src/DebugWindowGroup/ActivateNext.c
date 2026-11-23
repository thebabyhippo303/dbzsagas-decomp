/* DebugWindowGroup__ActivateNext @ 0x802CCC58 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK DebugWindowGroup__Activate(s32);
extern s32 lbl_803BEFF4 __attribute__((section(".data")));
extern void *lbl_803DCF38;

void DebugWindowGroup__ActivateNext(void) {
    void *v;
    s32 w;

    v = lbl_803DCF38;
    if (v == NULL || (w = M2C_FIELD(v, s32 *, 0x14)) == 0) {
        w = lbl_803BEFF4;
    }
    DebugWindowGroup__Activate(w);
}
