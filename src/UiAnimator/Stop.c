/* UiAnimator__Stop @ 0x80260894 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern void *lbl_803DCE58;

void UiAnimator__Stop(void *arg0) {
    void *temp_r0;
    void *temp_r9;
    void *var_r9;
    s32 temp_clr;

    temp_r9 = M2C_FIELD(arg0, void **, 0x2C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0xF4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xF0)) != 0) {
        if (lbl_803DCE58 == arg0) {
            lbl_803DCE58 = M2C_FIELD(arg0, void **, 0x1C);
        } else {
            var_r9 = lbl_803DCE58;
            for (;;) {
                temp_r0 = M2C_FIELD(var_r9, void **, 0x1C);
                if (temp_r0 == NULL) {
                    break;
                }
                if (temp_r0 == arg0) {
                    M2C_FIELD(var_r9, void **, 0x1C) = M2C_FIELD(arg0, void **, 0x1C);
                    break;
                }
                var_r9 = M2C_FIELD(var_r9, void **, 0x1C);
            }
        }
        temp_clr = M2C_FIELD(arg0, u8 *, 0x10);
        temp_clr &= ~1;
        M2C_FIELD(arg0, u8 *, 0x10) = (u8)temp_clr;
    }
}
