/* Actor__OwnedParticle @ 0x802ADCA4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int fn_8021D108(char *name, int second, int first, int a, int b, int c, int d, float s, float t);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);
extern float lbl_80351D8C __attribute__((section(".rodata")));

void Actor__OwnedParticle(void *script, void *context) {
    int first;
    int second;
    int owned;
    char *name;
    int result;
    float scale;

    first = Script__PopInt(script, context);
    second = Script__PopInt(script, context);
    name = Script__PopString(script, context, &owned);
    scale = lbl_80351D8C;
    result = fn_8021D108(name, second, first, 0, 0, 0, 0, scale, scale);
    Script__PushInt(script, context, result);
    if ((owned != 0) && (name != 0)) {
        fn_80184430(name);
    }
}
