/* ProtectMeter__HideDisplayWidgetsIfActive @ 0x80120114 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803DC6B4;

void ProtectMeter__HideDisplayWidgetsIfActive(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if ((s32) lbl_803DC6B4 != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 4);
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
        temp_r11_2 = M2C_FIELD(arg0, void **, 8);
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
        temp_r11_3 = M2C_FIELD(arg0, void **, 0xC);
        temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
    }
}
