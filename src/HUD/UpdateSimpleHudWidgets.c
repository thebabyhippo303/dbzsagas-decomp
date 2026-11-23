/* HUD__UpdateSimpleHudWidgets @ 0x8010D690 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void HUD__UpdateSimpleHudWidgets(void *arg0, void *arg1) {
    s32 var_r30;
    void **var_r31;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    var_r30 = 4;
    var_r31 = (void **)((char *)arg1 + 0x2B0);
    do {
        temp_r11 = *var_r31;
        var_r31 = (void **)((char *)var_r31 + 4);
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
        }
        var_r30 -= 1;
    } while (var_r30 != 0);
    temp_r3 = M2C_FIELD(arg1, void **, 0x2C0);
    temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
}
