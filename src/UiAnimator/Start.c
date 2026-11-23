/* UiAnimator__Start @ 0x802607E8 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *lbl_803DCE58;
extern f32 lbl_80349B5C __attribute__((section(".data")));

void UiAnimator__Start(void *arg0, s32 arg1) {
    void *vt;
    void *old;
    s32 tmp;
    void *vt2;

    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        vt = M2C_FIELD(arg0, void **, 0x2C);
        if (M2C_FIELD(vt, s32 (**)(void *, s32), 0xFC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xF8), arg1) != 0) {
            old = lbl_803DCE58;
            M2C_FIELD(arg0, void **, 0x1C) = old;
            lbl_803DCE58 = arg0;
            if (old == arg0) {
                return;
            }
        }
        tmp = M2C_FIELD(arg0, u8 *, 0x10) & ~2;
        M2C_FIELD(arg0, u8 *, 0x10) = (u8)(tmp | 1);
        if (arg1 != 0) {
            M2C_FIELD(arg0, u8 *, 0x10) = (u8)(tmp | 3);
        }
        vt2 = M2C_FIELD(arg0, void **, 0x2C);
        M2C_FIELD(vt2, void (**)(void *, f32), 0x1C)((char *)arg0 + M2C_FIELD(vt2, s16 *, 0x18), lbl_80349B5C);
    }
}
