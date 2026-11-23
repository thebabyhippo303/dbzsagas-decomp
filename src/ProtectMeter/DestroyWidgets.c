/* ProtectMeter__DestroyWidgets @ 0x8011FD8C (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803DC6B4;

void ProtectMeter__DestroyWidgets(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if ((s32) lbl_803DC6B4 != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 4);
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
        }
        temp_r11_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_r11_2 != NULL) {
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
        temp_r11_3 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r11_3 != NULL) {
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        }
        *(volatile void **)((char *)arg0 + 4) = 0;
        *(volatile void **)((char *)arg0 + 8) = 0;
        *(volatile void **)((char *)arg0 + 0xC) = 0;
    }
}
