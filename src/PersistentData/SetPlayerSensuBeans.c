/* PersistentData__SetPlayerSensuBeans @ 0x801284C4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetPlayerSensuBeans @ 0x801284C4 (0x5C). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803277FC[];
extern char lbl_8032780C[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__SetPlayerSensuBeans(void *self, int player, int value) {
    if (player == 0)
        goto player1;
    if (player == 1)
        goto player2;
    goto done;
player1:
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803277FC, value);
    goto done;
player2:
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_8032780C, value);
done:
    return;
}
