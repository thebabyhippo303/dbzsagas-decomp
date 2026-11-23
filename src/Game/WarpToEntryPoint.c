/* Game__WarpToEntryPoint @ 0x8002F15C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__WarpToEntryPoint @ 0x8002F15C (0xA4). ProDG -O2. */
typedef struct {
    char pad[564];
    void *levels;
} WarpGame;

extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern int Game__FindLevelIdByName(void *levels, const char *name);
extern int sprintf(char *dst, const char *fmt, ...);
extern void PersistentData__WarpToEntryPoint(void *self, int levelId, char *entryName);
extern void fn_80184430(char *text);
extern WarpGame *lbl_803DC3C0;
extern char *lbl_803DC368;

void Game__WarpToEntryPoint(void *script, void *context) {
    int owned;
    char buf[32];
    char *name;
    int entry;
    int level;

    name = Script__PopString(script, context, &owned);
    entry = Script__PopInt(script, context);
    level = Game__FindLevelIdByName(lbl_803DC3C0->levels, name);
    sprintf(buf, "EntryPoint%d", entry);
    PersistentData__WarpToEntryPoint(lbl_803DC368 + 300, level, buf);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
