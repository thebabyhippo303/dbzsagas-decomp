/* MenuController__HandleDownInput @ 0x8004B6FC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_80188B64(const char *name, int flag);
void ConfirmationDialog__SelectPreviousChoice(void *dialog);

extern char lbl_80316F68[] __attribute__((section(".data")));

void MenuController__HandleDownInput(char *self) {
    fn_80188B64(lbl_80316F68, 0);
    ConfirmationDialog__SelectPreviousChoice(*(void **)(self + 0xAE9C));
}
