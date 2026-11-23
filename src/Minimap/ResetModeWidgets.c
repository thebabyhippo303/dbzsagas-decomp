/* Minimap__ResetModeWidgets @ 0x801177F0 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern volatile s32 lbl_803DC63C;
extern void * volatile lbl_803DC640;
extern void *lbl_803DC644;
extern void *lbl_803DC648;
extern void *lbl_803DC64C;
extern void *lbl_803DC650;
extern void *lbl_803DC654;
extern void *lbl_803DC658;
extern s32 lbl_803DC670;

void Minimap__ResetModeWidgets(void) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    if ((void *) lbl_803DC648 != NULL) {
        void *widget = lbl_803DC640;
        lbl_803DC63C = 0;
        temp_r9 = M2C_FIELD(widget, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1DC)(widget + M2C_FIELD(temp_r9, s16 *, 0x1D8));
        temp_r9_2 = M2C_FIELD(lbl_803DC648, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC648 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
        temp_r9_3 = M2C_FIELD(lbl_803DC64C, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC64C + M2C_FIELD(temp_r9_3, s16 *, 0x1D8));
        temp_r9_4 = M2C_FIELD(lbl_803DC644, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC644 + M2C_FIELD(temp_r9_4, s16 *, 0x1D8));
        temp_r9_5 = M2C_FIELD(lbl_803DC650, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC650 + M2C_FIELD(temp_r9_5, s16 *, 0x1D8));
        temp_r9_6 = M2C_FIELD(lbl_803DC654, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC654 + M2C_FIELD(temp_r9_6, s16 *, 0x1D8));
        temp_r9_7 = M2C_FIELD(lbl_803DC658, void **, 0x19C);
        M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC658 + M2C_FIELD(temp_r9_7, s16 *, 0x1D8));
        lbl_803DC670 = 0;
    }
}

