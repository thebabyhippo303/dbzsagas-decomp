/* ConfirmationDialog__SelectNextChoice @ 0x80018464 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ConfirmationDialog {
    char pad0[0x11CC];
    int choiceFlag;
} ConfirmationDialog;

extern void ConfirmationDialog__RefreshChoiceLayout(void);

void ConfirmationDialog__SelectNextChoice(ConfirmationDialog *dialog) {
    if (dialog->choiceFlag != 0) {
        dialog->choiceFlag = 0;
    } else {
        dialog->choiceFlag = 1;
    }
    ConfirmationDialog__RefreshChoiceLayout();
}
