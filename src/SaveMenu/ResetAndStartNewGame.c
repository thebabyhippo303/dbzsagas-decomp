/* SaveMenu__ResetAndStartNewGame @ 0x80051010 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveMenu__ResetAndStartNewGame @ 0x80051010 (0x50). ProDG -O2. */
extern void fn_80267318(void *obj, int mode, float value);
extern void Game__InitializeNewGameState(void *game, int flag);
extern float lbl_80319D80 __attribute__((section(".data")));
extern char *lbl_803DC368;
extern void *lbl_803DC3C0;

void SaveMenu__ResetAndStartNewGame(void *self) {
    char *inner;

    void *game;
    int start;

    fn_80267318((char *)self + 0x18834, 0, lbl_80319D80);
    game = lbl_803DC3C0;
    start = 1;
    inner = *(char **)(lbl_803DC368 + 0x5388);
    *(int *)(inner + 0x5C) = 0;
    Game__InitializeNewGameState(game, start);
}
