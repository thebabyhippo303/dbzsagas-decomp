/* DebugWindowGroup__Activate @ 0x802CCBF0 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugConsole__Fill(void *, u8, u8);
M2C_UNK DebugWindowGroup__SetVisible(s32, s32);
extern s32 lbl_803DCF38;
extern void *lbl_803DCF3C;

void DebugWindowGroup__Activate(s32 arg0) {
    if (arg0 != (s32) lbl_803DCF38) {
        DebugWindowGroup__SetVisible(lbl_803DCF38, 0);
        if ((void *) lbl_803DCF3C != NULL) {
            DebugConsole__Fill(lbl_803DCF3C, 0xB2, 7);
        }
        lbl_803DCF38 = arg0;
        DebugWindowGroup__SetVisible(arg0, 1);
    }
}
