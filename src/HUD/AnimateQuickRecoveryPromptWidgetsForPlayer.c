/* HUD__AnimateQuickRecoveryPromptWidgetsForPlayer @ 0x8010A874 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_803261D0 __attribute__((section(".data")));
extern f32 lbl_803261D4 __attribute__((section(".data")));
extern s32 lbl_803A35DC __attribute__((section(".data")));

void HUD__AnimateQuickRecoveryPromptWidgetsForPlayer(void *arg0, u8 *arg1) {
    f32 v1;
    f32 v2;
    f32 v3;
    void *temp_r4;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    if ((s32) lbl_803A35DC != 0) {
        temp_r11 = M2C_FIELD(arg1, void **, 0x290);
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x70), 0x2C, 0, 1, 1);
        }
        temp_r8 = M2C_FIELD(arg1, void **, 0x28C);
        if (temp_r8 != NULL) {
            temp_r11_2 = M2C_FIELD(temp_r8, void **, 0x19C);
            v1 = lbl_803261D0;
            v2 = v1;
            v3 = v2;
            M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32, double, float, double), 0x10C)(temp_r8 + M2C_FIELD(temp_r11_2, s16 *, 0x108), v1, v2, lbl_803261D4, v3);
        }
        temp_r11_3 = M2C_FIELD(arg1, void **, 0x2BC);
        if (temp_r11_3 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(temp_r11_3 + M2C_FIELD(temp_r9_2, s16 *, 0x70), 0x22, 0, 1, 1);
        }
        temp_r11_4 = M2C_FIELD(arg1, void **, 0x290);
        if (temp_r11_4 != NULL) {
            temp_r9_3 = M2C_FIELD(temp_r11_4, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(temp_r11_4 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
        }
        temp_r11_5 = M2C_FIELD(arg1, void **, 0x28C);
        if (temp_r11_5 != NULL) {
            temp_r9_4 = M2C_FIELD(temp_r11_5, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r11_5 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
        }
        temp_r4 = M2C_FIELD(arg1, void **, 0x2BC);
        if (temp_r4 != NULL) {
            temp_r9_5 = M2C_FIELD(temp_r4, void **, 0x19C);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C)(temp_r4 + M2C_FIELD(temp_r9_5, s16 *, 0x38));
        }
    }
}
