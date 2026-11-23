/* Game__InitializeNewGameState @ 0x80023368 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__InitializeNewGameState @ 0x80023368 (0x6C). ProDG -O2. */
typedef struct { char pad[0x238]; char *level; } NGGame;
extern char *lbl_803DC368;
extern int lbl_803946C8 __attribute__((section(".data")));
extern void Options__ClearSerializedSettings(void *);
extern void SaveGame__InitializeState(void *);
extern void SimLoop__RequestLevelTransition(void *, int, int);

void Game__InitializeNewGameState(void *game, int startLevel) {
    char *cfg = lbl_803DC368;
    *(int *)(((NGGame *)game)->level + 0x1C) = 5;
    Options__ClearSerializedSettings(cfg + 0x12C);
    SaveGame__InitializeState(*(void **)(lbl_803DC368 + 0x5388));
    if (startLevel != 0)
        SimLoop__RequestLevelTransition(game, lbl_803946C8, -1);
}
