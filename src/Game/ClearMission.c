/* Game__ClearMission @ 0x8003DEAC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC69C;

typedef int (*GameCheckFn)(void *obj);
typedef void (*GameClearFn)(void *obj);

void Game__ClearMission(void) {
    char *obj = lbl_803DC69C;
    char *vtable = *(char **)(obj + 412);
    int adjustment = *(short *)(vtable + 928);
    GameCheckFn check = *(GameCheckFn *)(vtable + 932);

    if (check(obj + adjustment) != 0) {
        obj = lbl_803DC69C;
        vtable = *(char **)(obj + 412);
        adjustment = *(short *)(vtable + 1024);
        ((GameClearFn)(*(void **)(vtable + 1028)))(obj + adjustment);
    }
}
