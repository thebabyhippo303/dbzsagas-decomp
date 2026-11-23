/* HUD__DestroyTrackedWidgetSlots @ 0x8010994C (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void HUD__DestroyTrackedWidgetSlots(void *unused, void *arg1) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r11 = M2C_FIELD(arg1, void **, 0x2C4);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11_2 = M2C_FIELD(arg1, void **, 0x2C8);
    M2C_FIELD(arg1, void **, 0x2C4) = NULL;
    if (temp_r11_2 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
    }
    temp_r11_3 = M2C_FIELD(arg1, void **, 0x2CC);
    M2C_FIELD(arg1, void **, 0x2C8) = NULL;
    if (temp_r11_3 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    M2C_FIELD(arg1, void **, 0x2CC) = NULL;
}
