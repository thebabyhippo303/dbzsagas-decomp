/* MainMenu__HandleUpgradeDownInput @ 0x8014E014 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__SelectNextChoice(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
void fn_80188B64(char *, int);
M2C_UNK MenuList__MoveSelectionDown(void *);        /* extern */
extern s8 lbl_803251DC __attribute__((section(".data")));

void MainMenu__HandleUpgradeDownInput(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAE90);
    switch (temp_r0) {                              /* irregular */
    case 3:
        fn_80188B64(&lbl_803251DC, 0);
        MenuList__MoveSelectionDown(arg0 + 0xCAD4);
        UpgradeMenu__RefreshSelectedUpgradeDisplay(arg0 + 0xC934);
        return;
    case 4:
        fn_80188B64(&lbl_803251DC, 0);
        ConfirmationDialog__SelectNextChoice(arg0 + 0x10680);
        return;
    }
}

