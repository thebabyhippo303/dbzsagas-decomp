/* MainMenu__ExitPauseScreen @ 0x801499D0 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ConfirmationDialog__Hide(void *);
void UI__SetColorRGBA(void *, f64, f32, f32, f64);
void fn_80267318(void *, int, float);
void fn_8026BF14(void *);
M2C_UNK DisplayInfo__DeactivateOverlay(void *);
M2C_UNK MainMenu__ResetScreenContents(void *);
M2C_UNK UIList__ClearEntries(void *);
M2C_UNK UIList__ResetEntryVisuals(void *);
M2C_UNK UIList__Update(void *);
extern f32 lbl_8032BD0C __attribute__((section(".data")));
extern f32 lbl_8032BD10 __attribute__((section(".data")));
extern void *lbl_803DC3A0;

void MainMenu__ExitPauseScreen(void *arg0, f32 farg0) {
    char *p_19c;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r3;
    void *temp_r9;

    temp_r11 = M2C_FIELD(lbl_803DC3A0, void **, 0x19C);
    if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x3A4)((char *)lbl_803DC3A0 + M2C_FIELD(temp_r11, s16 *, 0x3A0)) != 0) {
        DisplayInfo__DeactivateOverlay(lbl_803DC3A0);
    }
    temp_r3 = (char *)arg0 + 0x17E94;
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0xA40) == 2) {
        UI__SetColorRGBA(temp_r3, lbl_8032BD0C, lbl_8032BD0C, lbl_8032BD0C, lbl_8032BD10);
    }
    temp_r30 = (char *)arg0 + 0x117A0;
    ConfirmationDialog__Hide(temp_r30);
    fn_8026BF14(temp_r30);
    p_19c = (char *)arg0 + 0x19c;
    temp_r9 = M2C_FIELD(p_19c, void **, 0x0);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        MainMenu__ResetScreenContents((char *)arg0 + 0x1AB18);
        temp_r30_2 = (char *)arg0 + 0x19A8C;
        fn_80267318(arg0, 0, farg0);
        UIList__ResetEntryVisuals(temp_r30_2);
        UIList__ClearEntries(temp_r30_2);
        UIList__Update(temp_r30_2);
        temp_r11_2 = M2C_FIELD(p_19c, void **, 0x0);
        M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32, f64, f64, f32), 0x134)((char *)arg0 + M2C_FIELD(temp_r11_2, s16 *, 0x130), lbl_8032BD0C, lbl_8032BD0C, lbl_8032BD0C, lbl_8032BD10);
    }
}
