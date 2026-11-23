/* UiSpriteResources__ConfigureOverlayRowWidgets @ 0x8000F918 (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_8030D768 __attribute__((section(".data")));
extern f32 lbl_8030D76C __attribute__((section(".data")));
extern s32 lbl_80360244 __attribute__((section(".data")));
extern void *lbl_803DC3B4;

void UiSpriteResources__ConfigureOverlayRowWidgets(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    M2C_UNK (*temp_lr)(void *);
    s32 *var_r29;
    s32 temp_r5;
    s32 var_r30;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *var_r31;

    var_r29 = &lbl_80360244;
    var_r31 = arg0 + 4;
    for (var_r30 = 0; var_r30 < 0xA; var_r30 += 1) {
        temp_r11 = M2C_FIELD(var_r31, void **, 0x19C);
        temp_r5 = *var_r29;
        M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x6C)(var_r31 + M2C_FIELD(temp_r11, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0x2C), temp_r5, 0, 1, 1);
        var_r29 += 4;
        temp_r9 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x108), farg1, farg2, farg3, farg4);
        temp_r9_2 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_8030D768, lbl_8030D768);
        temp_r9_3 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(var_r31 + M2C_FIELD(temp_r9_3, s16 *, 0xA8), lbl_8030D76C, lbl_8030D76C);
        temp_r9_4 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(var_r31 + M2C_FIELD(temp_r9_4, s16 *, 0x1B0), 0x70);
        temp_r9_5 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32), 0xCC)(var_r31 + M2C_FIELD(temp_r9_5, s16 *, 0xC8), farg0, farg0);
        temp_r9_6 = M2C_FIELD(var_r31, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(var_r31 + M2C_FIELD(temp_r9_6, s16 *, 0x1E8), 0);
        temp_r9_7 = M2C_FIELD(var_r31, void **, 0x19C);
        temp_r3 = var_r31 + M2C_FIELD(temp_r9_7, s16 *, 0x1E0);
        temp_lr = M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x1E4);
        var_r31 += 0x1A0;
        temp_lr(temp_r3);
    }
}
