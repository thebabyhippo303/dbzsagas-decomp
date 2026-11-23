/* MainMenu__ShowAlreadySelectedCharacterMessage @ 0x80012728 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct MainMenu {
    char pad0[8368];
    char msgBuf[8724 - 8368];
    char *widget;
} MainMenu;
extern char lbl_8030D8FC[] __attribute__((section(".data")));
extern float lbl_8030D914 __attribute__((section(".data")));
extern float lbl_8030D918 __attribute__((section(".data")));
extern float lbl_8030D91C __attribute__((section(".data")));
extern char *lbl_8035EB9C[] __attribute__((section(".data")));
extern char *fn_8026F9CC(const char *fmt, ...);
extern void fn_80270784(void *dst, char *text);
extern void fn_8026B420(void *widget);
extern void fn_80260304(void *widget, float x, float y);
extern void fn_8026B0C8(void *widget, int flag);

void MainMenu__ShowAlreadySelectedCharacterMessage(MainMenu *self, int index) {
    char *buf = self->msgBuf;
    char *msg = fn_8026F9CC(lbl_8030D8FC, lbl_8035EB9C[index]);

    fn_80270784(buf, msg);
    fn_8026B420(self->widget);
    fn_80260304(self->widget + 772, lbl_8030D914, lbl_8030D918);
    fn_80260304(self->widget + 772, lbl_8030D918, lbl_8030D918);
    fn_80260304(self->widget + 772, lbl_8030D91C, lbl_8030D914);
    fn_8026B0C8(self->widget, 0);
}
