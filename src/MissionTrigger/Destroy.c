/* MissionTrigger__Destroy @ 0x8011A484 (size: 0x220, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80184430(char *);
M2C_UNK PointerArray__Remove(s32, void *, M2C_UNK *); /* extern */
M2C_UNK fn_80267A1C(void *, s32);                   /* extern */
extern M2C_UNK lbl_8032CDF0 __attribute__((section(".data")));
extern s32 lbl_803DC630 __attribute__((section(".sdata")));

void MissionTrigger__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r31;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032CDF0;
    PointerArray__Remove(lbl_803DC630, arg0, &lbl_8032CDF0);
    temp_r9 = M2C_FIELD(arg0, void **, 0xAE9C);
    if (temp_r9 != NULL) {
        var_r31 = temp_r9 + (M2C_FIELD(temp_r9, s32 *, -8) * 0x1F4);
        if (temp_r9 != var_r31) {
            do {
                var_r31 -= 0x1F4;
                temp_r9_2 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0xAE9C) != var_r31);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 0xAE9C) - 8);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xAED0);
    if (temp_r11 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0xAECC);
    if (temp_r11_2 != NULL) {
        temp_r9_4 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
    }
    temp_r11_3 = M2C_FIELD(arg0, void **, 0xAEC8);
    if (temp_r11_3 != NULL) {
        temp_r9_5 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_5, s16 *, 8), 3);
    }
    temp_r11_4 = M2C_FIELD(arg0, void **, 0xAEC4);
    if (temp_r11_4 != NULL) {
        temp_r9_6 = M2C_FIELD(temp_r11_4, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_4 + M2C_FIELD(temp_r9_6, s16 *, 8), 3);
    }
    temp_r11_5 = M2C_FIELD(arg0, void **, 0xAEC0);
    if (temp_r11_5 != NULL) {
        temp_r9_7 = M2C_FIELD(temp_r11_5, void **, 0x19C);
        M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_5 + M2C_FIELD(temp_r9_7, s16 *, 8), 3);
    }
    temp_r11_6 = M2C_FIELD(arg0, void **, 0xAEBC);
    if (temp_r11_6 != NULL) {
        temp_r9_8 = M2C_FIELD(temp_r11_6, void **, 0x19C);
        M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_6 + M2C_FIELD(temp_r9_8, s16 *, 8), 3);
    }
    temp_r11_7 = M2C_FIELD(arg0, void **, 0xAEB8);
    if (temp_r11_7 != NULL) {
        temp_r9_9 = M2C_FIELD(temp_r11_7, void **, 0x19C);
        M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_7 + M2C_FIELD(temp_r9_9, s16 *, 8), 3);
    }
    temp_r11_8 = M2C_FIELD(arg0, void **, 0xAEB4);
    if (temp_r11_8 != NULL) {
        temp_r9_10 = M2C_FIELD(temp_r11_8, void **, 0x19C);
        M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_8 + M2C_FIELD(temp_r9_10, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void **, 0xAEB4) = NULL;
    M2C_FIELD(arg0, void **, 0xAEB8) = NULL;
    M2C_FIELD(arg0, void **, 0xAEBC) = NULL;
    M2C_FIELD(arg0, void **, 0xAEC0) = NULL;
    M2C_FIELD(arg0, void **, 0xAEC4) = NULL;
    M2C_FIELD(arg0, void **, 0xAEC8) = NULL;
    M2C_FIELD(arg0, void **, 0xAECC) = NULL;
    M2C_FIELD(arg0, void **, 0xAED0) = NULL;
    M2C_FIELD(arg0, s32 *, 0xAE90) = 0;
    fn_80267A1C(arg0, arg1);
}

