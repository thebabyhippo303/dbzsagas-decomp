/* Script__TriggerEventDataToActorArray @ 0x8002AF34 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__DispatchEventToNamedActors @ 0x8002AF34 (0x108). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void *fn_802ABF24(char *name);
extern void fn_80251650(void *a, int b, int c, void *d, void *e);
extern void fn_80184430(char *str);
extern int sprintf(char *dst, const char *fmt, ...);
extern char lbl_803115EC[] __attribute__((section(".data")));
extern char lbl_803B1DDC[] __attribute__((section(".data")));

void Script__DispatchEventToNamedActors(char *script, void *context) {
    char name[56];
    int owned;
    int done;
    int i;
    char *base;
    void *actor;
    void *other;

    Script__PopInt(script, context);
    done = 0;
    Script__PopInt(script, context);
    base = Script__PopString(script, context, &owned);
    actor = fn_802ABF24(base);
    if (actor != 0) {
        done = 1;
        fn_80251650(lbl_803B1DDC, 0x2000C, 0, *(void **)(script + 0xC8), actor);
    }
    i = 0;
    if (done == 0) {
        do {
            sprintf(name, lbl_803115EC, base, i);
            i++;
            other = fn_802ABF24(name);
            if (other != 0)
                fn_80251650(lbl_803B1DDC, 0x2000C, 0, *(void **)(script + 0xC8), other);
            else
                done = 1;
        } while (done == 0);
    }
    if (owned != 0 && base != 0)
        fn_80184430(base);
}
