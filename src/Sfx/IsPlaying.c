/* Sfx__IsPlaying @ 0x802B0CD0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sfx__IsPlaying @ 0x802B0CD0 (0x94). ProDG -O2. */
typedef struct {
    char pad[0x40];
    short adjust;
    char pad2[2];
    int (*isPlaying)(void *self, char *name);
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
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Sfx__IsPlaying(SfxScript *script, void *context) {
    int ok;
    SfxState *state = script->state;
    char *name = Script__PopString(script, context, &ok);
    int playing = 0;
    if (name != (char *)-1) {
        SfxInner *inner = state->inner;
        SfxVtable *vtable = inner->vtable;
        playing = vtable->isPlaying((char *)inner + vtable->adjust, name);
    }
    Script__PushInt(script, context, playing);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
