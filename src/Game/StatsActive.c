/* Game__StatsActive @ 0x8002F04C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__StatsActive @ 0x8002F04C (0x64). ProDG -O2. */
typedef int (*StatsFn)(void *self);
typedef struct {
    char pad[928];
    short adjust;
    short unused;
    StatsFn fn;
} StatsVtable;

extern char *lbl_803DC6C4;
extern void Script__PushInt(void *script, void *context, int value);

void Game__StatsActive(void *script, void *context) {
    char *obj = lbl_803DC6C4;
    StatsVtable *vt = *(StatsVtable **)(obj + 412);
    int active = vt->fn(obj + vt->adjust);
    int value = 0;
    if (active != 0)
        value = 1;
    Script__PushInt(script, context, value);
}
