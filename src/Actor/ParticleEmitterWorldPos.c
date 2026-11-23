/* Actor__ParticleEmitterWorldPos @ 0x802ADAB0 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Actor__ParticleEmitterWorldPos @ 0x802ADAB0 (0xF0). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Script__PushInt(void *script, void *context, int value);
extern void *Emitter__CreateFromAsset(void *asset, void *a, void *b, int c, int d, int e, int f, int g, int h);
extern void fn_80184430(char *text);

void Actor__ParticleEmitterWorldPos(void *script, void *context) {
    float pos[3];
    float dir[3];
    float *p;
    int owned;
    char *name;
    void *emitter;

    p = pos;
    dir[2] = Script__PopFloat(script, context);
    dir[1] = Script__PopFloat(script, context);
    dir[0] = Script__PopFloat(script, context);
    p[2] = Script__PopFloat(script, context);
    p[1] = Script__PopFloat(script, context);
    p[0] = Script__PopFloat(script, context);
    name = Script__PopString(script, context, &owned);
    emitter = Emitter__CreateFromAsset(name, p, dir, 0, 0, 0, 1, 0, -1);
    Script__PushInt(script, context, (int)emitter);
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
