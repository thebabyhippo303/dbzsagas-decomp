/* Game__CheckLevelAllowed @ 0x8002F224 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__CheckLevelAllowed @ 0x8002F224 (0x6C). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Script__PushInt(void *script, void *context, int value);
extern void Mem__DeleteArray(void *ptr);

void Game__CheckLevelAllowed(void *script, void *context) {
    int owned = 0;
    char *name = Script__PopString(script, context, &owned);

    Script__PushInt(script, context, 1);
    if (owned != 0 && name != 0)
        Mem__DeleteArray(name);
}
