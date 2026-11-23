/* Avatar__CreateEffect @ 0x8003BE04 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CreateEffect @ 0x8003BE04 (0x88). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Avatar__CreateEffectImpl(void *target, char *name, void *owner, float scale, int a, int b);
extern void fn_80184430(char *text);
extern float lbl_80311A94 __attribute__((section(".data")));

void Avatar__CreateEffect(void *self, void *context) {
    char *base = Script__PopInt(self, context);
    int owned;
    char *name = Script__PopString(self, context, &owned);

    Avatar__CreateEffectImpl(base + 1668, name, *(char **)((char *)self + 200) + 56, lbl_80311A94, 0, 0);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
