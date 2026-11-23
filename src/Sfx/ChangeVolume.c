/* Sfx__ChangeVolume @ 0x802B0BB8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sfx__ChangeVolume @ 0x802B0BB8 (0x8C). ProDG -O2. */
typedef struct {
    char pad[0x30];
    short adjust;
    char pad2[2];
    void (*changeVolume)(void *self, char *name, float volume);
} SfxVtable;

typedef struct {
    char pad[0xC];
    SfxVtable *vtable;
} SfxInner;

typedef struct {
    char pad[0xAC];
    SfxInner *inner;
} SfxState;

typedef struct {
    char pad[0xC8];
    SfxState *state;
} SfxScript;

extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80184430(char *text);

void Sfx__ChangeVolume(SfxScript *script, void *context) {
    int ok;
    SfxState *state = script->state;
    char *name = Script__PopString(script, context, &ok);
    float volume = Script__PopFloat(script, context);
    if (name != (char *)-1) {
        SfxInner *inner = state->inner;
        SfxVtable *vtable = inner->vtable;
        vtable->changeVolume((char *)inner + vtable->adjust, name, volume);
    }
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
