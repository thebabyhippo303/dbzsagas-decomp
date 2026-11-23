/* Avatar__AdvanceDebugMeleeFrame @ 0x800A3B94 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void AvatarInventory__SelectPreviousSpecialMove(void *item);
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int value, int flag);
extern char lbl_80320230[] __attribute__((section(".data")));
extern char *lbl_803DC3C0;

void Avatar__AdvanceDebugMeleeFrame(void **self) {
    char *avatar;
    char *bank;

    avatar = (char *)*self;
    bank = *(char **)(avatar + 0x84);
    if (*(short *)(*(char **)(bank + 0xF0) + 0xA) != 2304) {
        if (*(int *)(lbl_803DC3C0 + 0x1C64) != 0) {
            int id = *(int *)(*(char **)(lbl_803DC3C0 + 0x238) + 4);
            if (*(int *)(avatar + 0x7E4) == 0 || (unsigned)(id - 2) > 19u) {
                if (*(short *)(*(char **)(bank + 0xF4) + 0xA) == 256) {
                    AvatarInventory__SelectPreviousSpecialMove(*(void **)(avatar + 0x159C));
                }
            } else {
                return;
            }
        }
        Avatar__SetAnimScriptVarIntImpl(*self, lbl_80320230, 1, 1);
    }
}
