/* Game__GetDifficultyLevelImpl @ 0x80128D40 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_8032789C[];
int PersistentData__GetGlobalImpl(void *p, char *key);

int Game__GetDifficultyLevelImpl(void) {
    return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_8032789C);
}
