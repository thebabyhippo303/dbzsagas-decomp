/* Game__ShatterEffect @ 0x8004380C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__ShatterEffect @ 0x8004380C (0xF4). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void *fn_802ABF24(char *name);
extern void fn_80251650(void *event, int code, int a, int b, void *obj);
extern void fn_80184430(char *text);
extern char lbl_803B1DDC[] __attribute__((section(".data")));

void Game__ShatterEffect(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    float x = Script__PopFloat(script, context);
    float y = Script__PopFloat(script, context);
    float z = Script__PopFloat(script, context);
    void *obj = fn_802ABF24(name);

    if (obj != 0) {
        char *vt;
        volatile float *pos = (volatile float *)((char *)obj + 56);
        pos[0] = x;
        pos[2] = z;
        pos[1] = y;
        vt = *(char **)((char *)obj + 52);
        ((void (*)(void *))(*(void **)(vt + 172)))((char *)obj + *(short *)(vt + 168));
        fn_80251650(lbl_803B1DDC, 0x2000C, 0, 0, obj);
    }
    if (ok != 0 && name != 0) {
        fn_80184430(name);
    }
}
