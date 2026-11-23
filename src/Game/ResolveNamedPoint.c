/* Game__ResolveNamedPoint @ 0x8003588C (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Game__ResolveNamedPoint @ 0x8003588C */

extern char *Script__PopString(void *script, void *context, int *owned);
extern void *NamedPoint__FindByName(void *table, char *name, int flags);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_80184430(void *ptr);
extern char lbl_803B1E84[];
extern char lbl_80310000[];

void Game__ResolveNamedPoint(void *script, void *context) {
    int owned;
    char *name;
    float *point;

    name = Script__PopString(script, context, &owned);
    point = NamedPoint__FindByName(lbl_803B1E84, name, 0);
    if (point == 0) {
        Script__PushFloat(script, context, *(float *)(lbl_80310000 + 6360));
        Script__PushFloat(script, context, *(float *)(lbl_80310000 + 6360));
        Script__PushFloat(script, context, *(float *)(lbl_80310000 + 6360));
    } else {
        Script__PushFloat(script, context, point[0]);
        Script__PushFloat(script, context, point[1]);
        Script__PushFloat(script, context, point[2]);
    }
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
