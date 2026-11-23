/* AvatarControls__ReleaseActionTargetAndClearHologram @ 0x8009EF6C (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__AdjustHealth(void *, float);
void Instance__SetHolographic(void *, int);
void fn_80251510(void *, int, void *, void *, int);
M2C_UNK Avatar__PlayAcidDeathEffects(void *);       /* extern */
M2C_UNK fn_801F1AC0(void *, M2C_UNK);               /* extern */
extern f32 lbl_8031FF34 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void AvatarControls__ReleaseActionTargetAndClearHologram(void *arg0) {
    s32 sp18;
    s32 sp8;
    s32 temp_r7_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r3;
    void *temp_r6;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4);
    if (temp_r7 != NULL) {
        fn_80251510(&lbl_803B1DDC, 0x20014, NULL, arg0, temp_r7 + 0x19C);
        temp_r6 = M2C_FIELD(arg0, void **, 0x7C);
        temp_r9 = M2C_FIELD(temp_r6, void **, 0x2A4);
        temp_r9_2 = temp_r9 + 0x68;
        temp_r7_2 = M2C_FIELD(temp_r9_2, s32 *, 8);
        sp8 = M2C_FIELD(temp_r9, s32 *, 0x68);
        M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9_2, f32 *, 4);
        M2C_FIELD(&sp8, s32 *, 8) = temp_r7_2;
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_FIELD(&sp8, f32 *, 4) = (f32) lbl_8031FF34;
            temp_r11 = M2C_FIELD(temp_r6, void **, 0x2A4);
            temp_r9_3 = temp_r11 + 0x68;
            M2C_FIELD(temp_r11, s32 *, 0x68) = sp8;
            M2C_FIELD(temp_r9_3, s32 *, 8) = temp_r7_2;
            M2C_FIELD(temp_r9_3, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
        }
        temp_r8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D8);
        temp_r11_2 = M2C_FIELD(temp_r8, void **, 4);
        sp18 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4), s32 *, 0x9C);
        M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, s32 *), 0xC)(temp_r8 + M2C_FIELD(temp_r11_2, s16 *, 8), &sp18);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4), s32 *, 0x66C) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x2A4) = NULL;
        fn_801F1AC0(M2C_FIELD(arg0, void **, 0), 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x28) = 0;
        Instance__SetHolographic(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
            temp_r3 = M2C_FIELD(arg0, void **, 0);
            Avatar__AdjustHealth(temp_r3, -M2C_FIELD(temp_r3, f32 *, 0x28C));
            Avatar__PlayAcidDeathEffects(arg0);
        }
    }
}
