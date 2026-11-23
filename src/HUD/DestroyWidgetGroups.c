/* HUD__DestroyWidgetGroups @ 0x8010BF44 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__ClearStarBeepWidgets(void *, void *);
void HUD__DestroyTrackedWidgetSlots(void *, void *);
void HUD__DestroyWidgetGroupContents(void *, void *);
void HUD__DestroyWidgetGroupStorage(void *, void *);
void HUD__DestroyWidgetGroups(void *arg0, void *arg1) {
    s32 *var_r9;
    s32 var_ctr;
    void **temp_r27;
    void **var_r31;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    HUD__DestroyWidgetGroupStorage(arg0, arg1 + 4);
    HUD__DestroyWidgetGroupStorage(arg0, arg1 + 0xE8);
    HUD__DestroyWidgetGroupStorage(arg0, arg1 + 0x1CC);
    temp_r11 = M2C_FIELD(arg1, void **, 0x2C0);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r27 = arg1 + 0x2B0;
    var_r31 = temp_r27;
    do {
        temp_r11_2 = *var_r31;
        var_r31 += 4;
        if (temp_r11_2 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
    } while ((s32) var_r31 <= (s32) (arg1 + 0x2BC));
    temp_r11_3 = M2C_FIELD(arg1, void **, 0x4D4);
    if (temp_r11_3 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    temp_r11_4 = M2C_FIELD(arg1, void **, 0x4D8);
    if (temp_r11_4 != NULL) {
        temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_4 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
    }
    HUD__DestroyTrackedWidgetSlots(arg0, arg1);
    HUD__ClearStarBeepWidgets(arg0, arg1);
    M2C_FIELD(arg1, void **, 0x2C0) = NULL;
    var_r9 = temp_r27 + 0xC;
    var_ctr = 4;
    do {
        *var_r9 = 0;
        var_r9 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg1, void **, 0x4D4) = NULL;
    M2C_FIELD(arg1, void **, 0x4D8) = NULL;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    HUD__DestroyWidgetGroupContents(arg0, arg1);
}
