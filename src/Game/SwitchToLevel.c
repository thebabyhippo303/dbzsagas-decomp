/* Game__SwitchToLevel @ 0x8002EF40 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__SwitchToLevel @ 0x8002EF40 (0x8C). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Game__FindLevelIdByName(void *game, char *name);
extern void fn_801843CC(char *text);
extern int Game__IsPendulumModeImpl(void *state);
extern void Game__QuitGameImpl(void *game);
extern void SimLoop__RequestLevelTransition(void *game, int level, int flags);
extern char *lbl_803DC368;
extern void *lbl_803DC3C0;

void Game__SwitchToLevel(void *script, void *context) {
    int owned;
    char *name;
    int level;

    name = Script__PopString(script, context, &owned);
    level = Game__FindLevelIdByName(lbl_803DC368, name);
    if (owned != 0) {
        fn_801843CC(name);
    }
    if (Game__IsPendulumModeImpl(lbl_803DC368 + 380) != 0 || level == 0) {
        Game__QuitGameImpl(lbl_803DC3C0);
        return;
    }
    SimLoop__RequestLevelTransition(lbl_803DC3C0, level, 0);
}
