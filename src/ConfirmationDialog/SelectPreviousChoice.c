/* ConfirmationDialog__SelectPreviousChoice @ 0x8001849C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ConfirmationDialog__SelectPreviousChoice @ 0x8001849C (0x38). ProDG -O2. */
typedef struct {
    char pad0[0x11CC];
    int choiceFlag;
} ConfirmationDialog;

extern void ConfirmationDialog__RefreshChoiceLayout(void);

void ConfirmationDialog__SelectPreviousChoice(ConfirmationDialog *dialog) {
    if (dialog->choiceFlag != 0) {
        dialog->choiceFlag = 0;
    } else {
        dialog->choiceFlag = 1;
    }
    ConfirmationDialog__RefreshChoiceLayout();
}
