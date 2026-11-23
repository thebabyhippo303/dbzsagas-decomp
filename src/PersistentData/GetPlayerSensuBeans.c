/* PersistentData__GetPlayerSensuBeans @ 0x80128520 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_803277FC[];
extern char lbl_8032780C[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetPlayerSensuBeans(void *self, int player) {
    int value = (int)self;
    if (player == 0)
        goto player_zero;
    if (player == 1)
        goto player_one;
    goto done;

player_zero:
    value = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803277FC);
    goto done;

player_one:
    value = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_8032780C);

done:
    return value;
}
