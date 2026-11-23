/* HUD__HideBossStatBarWidgetGroup @ 0x8012258C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int HUD__AreBossStatWidgetPairVisible(void *);
extern f32 lbl_80327408 __attribute__((section(".data")));
extern f32 lbl_8032740C __attribute__((section(".data")));

void HUD__HideBossStatBarWidgetGroup(void *arg0) {
    s32 temp_r3;
    f32 firstValue;
    f32 secondValue;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r3 = HUD__AreBossStatWidgetPairVisible(arg0);
    if (temp_r3 == 0) {
        firstValue = lbl_80327408;
        secondValue = lbl_8032740C;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r3;
        M2C_FIELD(arg0, f32 *, 0x10) = firstValue;
        M2C_FIELD(arg0, f32 *, 0x18) = secondValue;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1DC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x1D8));
    temp_r11_2 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
    temp_r11_3 = M2C_FIELD(arg0, void **, 8);
    temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1DC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x1D8));
}
