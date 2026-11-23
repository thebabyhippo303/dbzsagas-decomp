/* Actor__ParticleEmitter @ 0x802ADBA0 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ParticleEmitter @ 0x802ADBA0 (0x104). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Script__PushInt(void *script, void *context, int value);
extern void *Emitter__CreateFromAsset(void *asset, void *a, void *b, int c, int d, int e, int f, int g, int h);
extern void fn_80184430(char *text);

void Actor__ParticleEmitter(void *script, void *context) {
    int flagA;
    int valueB;
    int flagC;
    int valueD;
    int valueE;
    int valueF;
    int owned;
    char *name;
    void *emitter;

    flagA = 1;
    if (Script__PopInt(script, context) == 0) {
        flagA = 0;
    }
    flagC = 1;
    valueB = Script__PopInt(script, context);
    if (Script__PopInt(script, context) == 0) {
        flagC = 0;
    }
    valueD = Script__PopInt(script, context);
    valueE = Script__PopInt(script, context);
    valueF = Script__PopInt(script, context);
    name = Script__PopString(script, context, &owned);
    emitter = Emitter__CreateFromAsset(name, (void *)valueF, (void *)valueE, valueD, flagC, valueB, flagA, 0, -1);
    Script__PushInt(script, context, (int)emitter);
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
