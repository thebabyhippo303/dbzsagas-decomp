/* MainMenu__ShowSaveGameConfirmation @ 0x8014BB78 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__InitializeChoiceWidgets(void *, s8 *);
void UIList__SelectByValue(void *, int);
void UI__SetColorRGBA(void *, float, double, double, float);
void fn_8026BF14(void *);
void fn_8026C508(void *, float, float);
void fn_8026C514(void *, float *, float *);
void fn_8026C634(void *, float, float);
f32 fn_80271C3C(void *);
f32 fn_80271C7C(void *);
M2C_UNK ConfirmationDialog__Show(void *);
extern s8 lbl_8032BE64 __attribute__((section(".data")));
extern f32 lbl_8032BE84 __attribute__((section(".data")));
extern f32 lbl_8032BE88 __attribute__((section(".data")));
extern f32 lbl_8032BE8C __attribute__((section(".data")));
extern f32 lbl_8032BE90 __attribute__((section(".data")));

void MainMenu__ShowSaveGameConfirmation(void *arg0) {
    f32 temp_f31;
    void *temp_r24;
    void *temp_r28;
    void *temp_r29;
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0xAE90) = 1;
    temp_r29 = arg0 + 0xAE94;
    temp_r28 = arg0 + 0xC28C;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r24 = arg0 + 0xC674;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, float, double, double, float), 0x134)((char *) arg0 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032BE84, lbl_8032BE84, lbl_8032BE84, lbl_8032BE84);
    UI__SetColorRGBA(temp_r29, lbl_8032BE84, lbl_8032BE84, lbl_8032BE84, lbl_8032BE84);
    ConfirmationDialog__InitializeChoiceWidgets(temp_r29, &lbl_8032BE64);
    M2C_FIELD(temp_r29, s32 *, 0x11CC) = 1;
    ConfirmationDialog__Show(temp_r29);
    UIList__SelectByValue((char *) arg0 + 0xC814, 0);
    fn_8026C514(temp_r28, (f32 *) ((char *) arg0 + 0xCBA0), (f32 *) ((char *) arg0 + 0xCBA4));
    fn_8026C508(temp_r24, M2C_FIELD(arg0, f32 *, 0xCBA0), M2C_FIELD(arg0, f32 *, 0xCBA4));
    temp_f31 = fn_80271C3C(temp_r28) + lbl_8032BE88;
    fn_8026C634(temp_r24, temp_f31, fn_80271C7C(temp_r28) + lbl_8032BE8C);
    M2C_FIELD(arg0, f32 *, 0xCBA8) = (f32) lbl_8032BE90;
    fn_8026BF14(arg0);
    M2C_FIELD(arg0, s32 *, 0xCBAC) = 1;
}
