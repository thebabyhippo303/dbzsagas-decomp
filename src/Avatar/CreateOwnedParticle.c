/* Avatar__CreateOwnedParticle @ 0x8003BE8C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CreateOwnedParticle @ 0x8003BE8C (0xA4). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Avatar__CreateOwnedParticleImpl(void *owner, char *name, int a, int b);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Avatar__CreateOwnedParticle(void *script, void *context) {
    int owned;
    int avatar;
    char *name;
    int argA;
    int argB;
    int result;

    avatar = Script__PopInt(script, context);
    name = Script__PopString(script, context, &owned);
    argA = Script__PopInt(script, context);
    argB = Script__PopInt(script, context);
    result = Avatar__CreateOwnedParticleImpl((void *)(avatar + 1668), name, argA, argB);
    Script__PushInt(script, context, result);
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
