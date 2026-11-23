/* MainMenu__HandleRightChoiceInput @ 0x8014BE60 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__HandleRightChoiceInput @ 0x8014BE60 (0x4C). ProDG -O2. */
extern char lbl_803251FC[];
extern void fn_80188B64(char *name, int arg);
extern void ConfirmationDialog__SelectNextChoice(void *dialog);

void MainMenu__HandleRightChoiceInput(char *self) {
    if (*(int *)(self + 0xCBAC) == 2) {
        fn_80188B64(lbl_803251FC, 0);
        ConfirmationDialog__SelectNextChoice(self + 0xAE94);
    }
}
