/* Minimap__CreateActorMarkerWidget @ 0x80118B30 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*MarkerInitFn)(void *self, void *arg, int a, int b, int c, int d);
typedef void (*MarkerFloat4Fn)(void *self, float a, float b, float c, float d);
typedef void (*MarkerFloat2Fn)(void *self, float a, float b);
typedef void (*MarkerIntFn)(void *self, int value);

extern char lbl_8032DE80[];
extern void *lbl_803DC394 __attribute__((section(".sdata")));
extern float lbl_80326954 __attribute__((section(".data")));
extern float lbl_80326958 __attribute__((section(".data")));
extern float lbl_8032695C __attribute__((section(".data")));

void *fn_801842C4(int size);
void *fn_8026B590(void *widget);

void *Minimap__CreateActorMarkerWidget(char *self, int unused, int markerId) {
    char *widget;
    char *vtable;
    void *game;
    float a;
    float b;
    float c;
    float d;
    int adjustment;
    (void)unused;

    *(void **)(self + 8) = lbl_8032DE80;
    game = lbl_803DC394;
    widget = fn_8026B590(fn_801842C4(416));
    *(void **)self = widget;
    vtable = *(char **)(widget + 412);
    adjustment = *(short *)(vtable + 16);
    ((MarkerInitFn)(*(void **)(vtable + 20)))(
        widget + adjustment,
        *(void **)((char *)game + 8),
        0, 0, 1, 1);

    widget = *(char **)self;
    vtable = *(char **)(widget + 412);
    a = lbl_80326954;
    b = a;
    c = b;
    d = c;
    adjustment = *(short *)(vtable + 264);
    ((MarkerFloat4Fn)(*(void **)(vtable + 268)))(widget + adjustment, a, b, c, d);

    widget = *(char **)self;
    vtable = *(char **)(widget + 412);
    a = lbl_80326958;
    b = a;
    adjustment = *(short *)(vtable + 232);
    ((MarkerFloat2Fn)(*(void **)(vtable + 236)))(widget + adjustment, a, b);

    widget = *(char **)self;
    vtable = *(char **)(widget + 412);
    adjustment = *(short *)(vtable + 432);
    ((MarkerIntFn)(*(void **)(vtable + 436)))(widget + adjustment, 5);

    widget = *(char **)self;
    vtable = *(char **)(widget + 412);
    a = lbl_8032695C;
    b = a;
    adjustment = *(short *)(vtable + 136);
    ((MarkerFloat2Fn)(*(void **)(vtable + 140)))(widget + adjustment, a, b);

    *(int *)(self + 4) = markerId;
    return self;
}
