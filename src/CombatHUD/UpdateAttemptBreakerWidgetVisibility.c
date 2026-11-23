/* CombatHUD__UpdateAttemptBreakerWidgetVisibility @ 0x80112ABC (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern void *lbl_803DC70C;

void CombatHUD__UpdateAttemptBreakerWidgetVisibility(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r11 = M2C_FIELD(lbl_803DC70C, void **, 0x19C);
    if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r11, s16 *, 0x3A0)) != 0) {
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x2F08);
        temp_r9 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9, s16 *, 0x1D8));
        temp_r11_3 = M2C_FIELD(arg0, void **, 0x2F04);
        temp_r9_2 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_3 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
    } else {
        temp_r11_4 = M2C_FIELD(arg0, void **, 0x2F08);
        temp_r9_3 = M2C_FIELD(temp_r11_4, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1CC)(temp_r11_4 + M2C_FIELD(temp_r9_3, s16 *, 0x1C8));
        temp_r11_5 = M2C_FIELD(arg0, void **, 0x2F04);
        temp_r9_4 = M2C_FIELD(temp_r11_5, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1CC)(temp_r11_5 + M2C_FIELD(temp_r9_4, s16 *, 0x1C8));
    }
    temp_r11_6 = M2C_FIELD(arg0, void **, 0x2F04);
    if (temp_r11_6 != NULL) {
        temp_r9_5 = M2C_FIELD(temp_r11_6, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C)(temp_r11_6 + M2C_FIELD(temp_r9_5, s16 *, 0x38));
    }
    temp_r11_7 = M2C_FIELD(arg0, void **, 0x2F08);
    if (temp_r11_7 != NULL) {
        temp_r9_6 = M2C_FIELD(temp_r11_7, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x3C)(temp_r11_7 + M2C_FIELD(temp_r9_6, s16 *, 0x38));
    }
}

