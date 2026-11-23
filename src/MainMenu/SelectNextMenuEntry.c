/* MainMenu__SelectNextMenuEntry @ 0x80149D6C (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__SelectNextChoice(void *);
int UIList__GetSelectedEntryValue(void *);
int UIList__GetSelectedIndex(void *);
void UIList__SelectNext(char *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
void fn_80188B64(char *, int);
void fn_8026B420(void *);
M2C_UNK MainMenu__RefreshSelectedEntryHighlight(void *); /* extern */
M2C_UNK MenuList__MoveSelectionDown(void *);        /* extern */
M2C_UNK fn_80262308(void *, M2C_UNK, f32, f32, f32); /* extern */
M2C_UNK fn_8026238C(void *, M2C_UNK, f32);          /* extern */
extern s8 lbl_803251DC __attribute__((section(".data")));
extern f32 lbl_8032BD2C __attribute__((section(".data")));
extern f32 lbl_8032BD30 __attribute__((section(".data")));
extern f32 lbl_8032BD34 __attribute__((section(".data")));
extern f32 lbl_8032BD38 __attribute__((section(".data")));
extern f32 lbl_8032BD3C __attribute__((section(".data")));

void MainMenu__SelectNextMenuEntry(void *arg0) {
    f32 var_f4;
    s32 temp_r0;
    s8 *temp_r29;
    s8 *temp_r30_2;
    void *temp_r30;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r9;
    void *var_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xF260);
    switch (temp_r0) {                              /* irregular */
    case 0x29A:
        temp_r29 = arg0 + 0x19A8C;
        fn_8026B420(*(arg0 + 0x19F7C + (UIList__GetSelectedIndex(temp_r29) * 0x1A0)));
        temp_r30 = arg0 + 0x19E18 + (UIList__GetSelectedIndex(temp_r29) * 0x1A0);
        temp_r9 = M2C_FIELD(temp_r30, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032BD2C, lbl_8032BD2C, lbl_8032BD2C, lbl_8032BD30);
        fn_80188B64(&lbl_803251DC, 0);
        UIList__SelectNext(temp_r29);
        MainMenu__RefreshSelectedEntryHighlight(arg0);
        return;
    case 0x2A1:
        fn_80188B64(&lbl_803251DC, 0);
        temp_r30_2 = arg0 + 0x19A8C;
        UIList__SelectNext(temp_r30_2);
        if (UIList__GetSelectedEntryValue(temp_r30_2) != 7) {
            temp_r30_3 = arg0 + 0x5F60;
            fn_8026238C(temp_r30_3, 0, lbl_8032BD34);
            var_r3 = temp_r30_3;
            var_f4 = lbl_8032BD34;
        } else {
            temp_r30_4 = arg0 + 0x5F60;
            fn_8026238C(temp_r30_4, 0, lbl_8032BD2C);
            var_r3 = temp_r30_4;
            var_f4 = lbl_8032BD2C;
        }
        fn_80262308(var_r3, 0, lbl_8032BD3C, lbl_8032BD38, var_f4);
        return;
    case 0x29D:
        MenuList__MoveSelectionDown(arg0 + 0xB6B0);
        UpgradeMenu__RefreshSelectedUpgradeDisplay(arg0 + 0xB510);
        return;
    case 0x29F:
        fn_80188B64(&lbl_803251DC, 0);
        ConfirmationDialog__SelectNextChoice(arg0 + 0x117A0);
        return;
    }
}
