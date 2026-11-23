/* DisplayInfo__ClearCurrentEntry @ 0x8000A4F8 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SimLoop__PauseSimulation(int, int, int, int);
void Sphere__RemoveFromParent(void *);
void fn_801945FC(void *, float);
void fn_80267318(void *, int, float);
M2C_UNK Minimap__UpdateModeTransition();            /* extern */
M2C_UNK fn_80262088(void *);                        /* extern */
M2C_UNK fn_80272C1C(void *);                        /* extern */
extern volatile f32 lbl_8030CA0C __attribute__((section(".data")));
extern s32 lbl_803DC3C0;
extern s32 lbl_803DCC20;

void DisplayInfo__ClearCurrentEntry(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB090) != 0) {
            SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
        }
        fn_80267318(arg0, 0, lbl_8030CA0C);
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1E4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x1E0));
    }
    fn_80262088(arg0 + 0x5F60);
    temp_r11 = M2C_FIELD(arg0, void **, 0xB094);
    if (temp_r11 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0xB098);
    if (temp_r11_2 != NULL) {
        temp_r9_4 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
    }
    {
        void *base;
        f32 scale;
        void *slot;
        base = (void *)lbl_803DCC20;
        M2C_FIELD(arg0, void **, 0xB094) = NULL;
        scale = lbl_8030CA0C;
        slot = (char *)base + 0xCC;
        M2C_FIELD(arg0, void **, 0xB098) = NULL;
        fn_801945FC(slot, scale);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB088) == 0) {
        temp_r30 = arg0 + 0xAE94;
        Sphere__RemoveFromParent(temp_r30);
        fn_80272C1C(temp_r30);
        Minimap__UpdateModeTransition();
    }
    temp_r11_3 = M2C_FIELD(arg0, void **, 0xB074);
    if (temp_r11_3 != NULL) {
        temp_r9_5 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_5, s16 *, 8), 3);
    }
    M2C_FIELD(arg0, void **, 0xB074) = NULL;
    M2C_FIELD(arg0, s32 *, 0xAE90) = 0;
}
