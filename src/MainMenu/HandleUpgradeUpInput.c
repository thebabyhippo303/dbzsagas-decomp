/* MainMenu__HandleUpgradeUpInput @ 0x8014DF98 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__HandleUpgradeUpInput @ 0x8014DF98 (0x7C). ProDG -O2. */
typedef signed char s8;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void MenuList__MoveSelectionUp(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
void ConfirmationDialog__SelectPreviousChoice(void *);
void fn_80188B64(char *, int);
extern s8 lbl_803251CC __attribute__((section(".data")));

void MainMenu__HandleUpgradeUpInput(void *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0xAE90)) {
    case 3:
        fn_80188B64(&lbl_803251CC, 0);
        MenuList__MoveSelectionUp(arg0 + 0xCAD4);
        UpgradeMenu__RefreshSelectedUpgradeDisplay(arg0 + 0xC934);
        break;
    case 4:
        fn_80188B64(&lbl_803251CC, 0);
        ConfirmationDialog__SelectPreviousChoice(arg0 + 0x10680);
        break;
    }
}
