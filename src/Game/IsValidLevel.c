/* Game__IsValidLevel @ 0x8002EEA4 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *Script__PopString(void *vm, void *arg, int *flag);
extern int Game__FindLevelIdByName(void *game, char *name);
extern void Script__PushInt(void *vm, void *arg, int value);
extern void fn_801843CC(void *ptr);
extern void *lbl_803DC368 __attribute__((section(".sdata")));

void Game__IsValidLevel(void *vm, void *arg) {
    int flag;
    char *name;

    name = Script__PopString(vm, arg, &flag);
    if (name != 0) {
        if (Game__FindLevelIdByName(lbl_803DC368, name) != -1) {
            Script__PushInt(vm, arg, 1);
        } else {
            Script__PushInt(vm, arg, 0);
        }
    } else {
        Script__PushInt(vm, arg, 0);
    }
    if (flag != 0) {
        fn_801843CC(name);
    }
}
