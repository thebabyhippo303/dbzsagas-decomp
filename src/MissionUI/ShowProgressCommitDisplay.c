/* MissionUI__ShowProgressCommitDisplay @ 0x8011C23C (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__ClearStatsWidgetGroup(char *);
void HUD__DeleteBossStatBar(void *);
s32 Mem__New(s32);
void SimLoop__ActivateControls(int, int);
void Sphere__AddChild(void *, void *);
void * UI__ConstructAnimatedTextEffect(void *, void *);
void fn_80266F24(void *, s32, f32);
M2C_UNK ConfirmationDialog__Show(void *);           /* extern */
extern f32 lbl_803271A4 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;
extern s8 *lbl_803DC654;

void MissionUI__CommitLevelProgress(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) == 0) {
        HUD__DeleteBossStatBar(lbl_803DC654);
        HUD__ClearStatsWidgetGroup(lbl_803DC654);
        temp_r29 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r30 = M2C_FIELD(temp_r29, void **, 0x19C);
        temp_r30_2 = temp_r30 + 0x380;
        temp_r29_2 = temp_r29 + M2C_FIELD(temp_r30, s16 *, 0x380);
        M2C_FIELD(temp_r30_2, M2C_UNK (**)(void *, void *), 4)(temp_r29_2, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8), M2C_FIELD(arg0, void **, 0xAE94)));
        temp_r11 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
        temp_r3 = M2C_FIELD(temp_r9_2, void *(**)(void *), 0x38C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x388));
        temp_r9_3 = M2C_FIELD(temp_r3, void **, 8);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1C)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x18));
        temp_r11_2 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r9_4 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r11_2 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
        temp_r9_5 = M2C_FIELD(arg0, void **, 0xAE98);
        if (temp_r9_5 != NULL) {
            temp_r30_3 = M2C_FIELD(temp_r9_5, void **, 0x19C);
            temp_r30_4 = temp_r30_3 + 0x380;
            temp_r29_3 = temp_r9_5 + M2C_FIELD(temp_r30_3, s16 *, 0x380);
            M2C_FIELD(temp_r30_4, M2C_UNK (**)(void *, void *), 4)(temp_r29_3, UI__ConstructAnimatedTextEffect(Mem__New(0x3C8), M2C_FIELD(arg0, void **, 0xAE98)));
            temp_r11_3 = M2C_FIELD(arg0, void **, 0xAE98);
            temp_r9_6 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            temp_r3_2 = M2C_FIELD(temp_r9_6, void *(**)(void *), 0x38C)(temp_r11_3 + M2C_FIELD(temp_r9_6, s16 *, 0x388));
            temp_r9_7 = M2C_FIELD(temp_r3_2, void **, 8);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9_7, s16 *, 0x18));
            temp_r11_4 = M2C_FIELD(arg0, void **, 0xAE98);
            temp_r9_8 = M2C_FIELD(temp_r11_4, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *), 0x3C)(temp_r11_4 + M2C_FIELD(temp_r9_8, s16 *, 0x38));
        }
        temp_r30_5 = arg0 + 0x344;
        ConfirmationDialog__Show(M2C_FIELD(arg0, void **, 0xAEA8));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAE94));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAE98));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAEA8));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAE9C));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAEA0));
        Sphere__AddChild(temp_r30_5, M2C_FIELD(arg0, void **, 0xAEA4));
        SimLoop__ActivateControls(lbl_803DC3C0, 0);
        fn_80266F24(arg0, 0, lbl_803271A4);
        temp_r9_9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9_9, s16 *, 0x1D0));
    }
}
