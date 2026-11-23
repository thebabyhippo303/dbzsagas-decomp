/* MenuController__HandleUpInput @ 0x8004B6B8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuController__HandleUpInput @ 0x8004B6B8 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xAE9C];
    void *activeMenu;
} MenuController;

extern char lbl_80316F60[];
extern void fn_80188B64(char *name, int flags);
extern void ConfirmationDialog__SelectNextChoice(void *dialog);

void MenuController__HandleUpInput(MenuController *self) {
    fn_80188B64(lbl_80316F60, 0);
    ConfirmationDialog__SelectNextChoice(self->activeMenu);
}
