/* DebugMenu__Destroy @ 0x80264EB0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_8034C120[];
extern void *lbl_803DCE68;
void GameMenu__Destroy(void *, s32);

void DebugMenu__Destroy(void *arg0, s32 arg1) {
    void *cur = lbl_803DCE68;

    M2C_FIELD(arg0, void **, 0x10) = lbl_8034C120;
    if (cur == arg0) {
        lbl_803DCE68 = NULL;
    }
    GameMenu__Destroy(arg0, arg1);
}
