/* HUD__DestroyWidgetGroupContents @ 0x8010FAAC (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void HUD__DestroyWidgetGroupContents(void *arg0, void *arg1) {
    char *temp_r30;
    s32 var_r29;
    void **var_r31;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    s32 var_r27;

    var_r29 = 0;
    var_r31 = arg1 + 0x2D0;
    var_r27 = 0x18;
    do {
        temp_r11 = *var_r31;
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
        }
        temp_r30 = arg1 + 0x2D4;
        *var_r31 = NULL;
        temp_r11_2 = *(void **)(temp_r30 + var_r29);
        if (temp_r11_2 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
        *(void **)(temp_r30 + var_r29) = NULL;
        var_r31 = (void **)((char *)var_r31 + 0x10);
        var_r29 += 0x10;
        var_r27 -= 1;
    } while (var_r27 != NULL);
    temp_r11_3 = M2C_FIELD(arg1, void **, 0x4D8);
    if (temp_r11_3 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        M2C_FIELD(arg1, void **, 0x4D8) = (void *)var_r27;
    }
    M2C_FIELD(arg1, s8 *, 0x508) = (s8) var_r27;
}
