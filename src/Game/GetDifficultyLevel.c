/* Game__GetDifficultyLevel @ 0x8004614C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__GetDifficultyLevel @ 0x8004614C (0x48). ProDG -O2. */
extern char *lbl_803D8008;
extern int Game__GetDifficultyLevelImpl(void *game);
extern void Script__PushInt(void *script, void *context, int value);

void Game__GetDifficultyLevel(void *script, void *context) {
    int difficulty = Game__GetDifficultyLevelImpl(lbl_803D8008 + 0x370);
    Script__PushInt(script, context, difficulty);
}
