/* ConfirmationDialog__SetChoiceLayoutPosition @ 0x800184D4 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct ConfirmationDialog {
    char pad[0x11C4];
    f32 choiceX;
    f32 choiceY;
} ConfirmationDialog;

extern void ConfirmationDialog__RefreshChoiceLayout(ConfirmationDialog *self);

void ConfirmationDialog__SetChoiceLayoutPosition(ConfirmationDialog *self, f32 x, f32 y) {
    self->choiceX = x;
    self->choiceY = y;
    ConfirmationDialog__RefreshChoiceLayout(self);
}
