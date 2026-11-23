/* Game__WarpToShrine @ 0x8002F0B0 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

char *Script__PopString(void *, s32, s32 *);
s32 Game__FindLevelIdByName(void *, char *);
void PersistentData__WarpToLevel(void *, s32, char *, s32);
void Mem__DeleteArray(void *);

typedef struct {
    char pad[0x234];
    void *levels;
} GameState;

extern char *lbl_803DC348 __attribute__((section(".sdata")));
extern GameState *lbl_803DC3A0 __attribute__((section(".sdata")));

void Game__WarpToShrine(void *script, s32 context) {
    s32 freeB;
    s32 freeA;
    char *level;
    char *spawn;
    s32 levelId;

    level = Script__PopString(script, context, &freeA);
    spawn = Script__PopString(script, context, &freeB);
    levelId = Game__FindLevelIdByName(lbl_803DC3A0->levels, level);
    PersistentData__WarpToLevel(lbl_803DC348 + 300, levelId, spawn, 2);
    if (freeA != 0 && level != 0) {
        Mem__DeleteArray(level);
    }
    if (freeB != 0 && spawn != 0) {
        Mem__DeleteArray(spawn);
    }
}
