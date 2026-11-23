/* UI__SetIndexedWidgetPosition @ 0x8011E3E8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_803272AC __attribute__((section(".data")));

void UI__SetIndexedWidgetPosition(s32 arg0, s32 arg1, f32 farg0) {
    f32 temp_f12;
    f32 temp_f13;
    s32 temp_r29;
    s32 temp_r30;
    void *temp_r11;
    void *temp_r6;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9;

    temp_r29 = arg1 * 4;
    temp_r30 = arg0 + 0x48;
    temp_r6 = *(temp_r30 + temp_r29);
    temp_r8 = (arg1 * 8) + arg0;
    temp_r7 = M2C_FIELD(temp_r6, void **, 0x19C);
    temp_f13 = M2C_FIELD(temp_r8, f32 *, 0x34) * lbl_803272AC;
    temp_f12 = M2C_FIELD(temp_r8, f32 *, 0x10);
    M2C_FIELD(temp_r7, M2C_UNK (**)(void *, void *, void *, void *, void *, f32 *, void *, f32, f32, f32, f32, f32), 0xAC)(temp_r6 + M2C_FIELD(temp_r7, s16 *, 0xA8), temp_r8, temp_r6, temp_r7, temp_r8, &lbl_803272AC, temp_r8, (temp_f13 * farg0) + M2C_FIELD(temp_r8, f32 *, 0xC), (M2C_FIELD(temp_r8, f32 *, 0x38) * lbl_803272AC * farg0) + temp_f12, lbl_803272AC, temp_f12, temp_f13);
    temp_r11 = *(temp_r30 + temp_r29);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
}
