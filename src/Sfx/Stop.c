/* Sfx__Stop @ 0x802B0B40 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sfx__Stop @ 0x802B0B40 (0x78). ProDG -O2. */
typedef struct {
    char pad[0x28];
    short this_adjustment;
    void (*stop)(void *self, char *name);
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
} SfxObject;

extern char *Script__PopString(void *script, void *context, int *ok);
extern void fn_80184430(char *text);

void Sfx__Stop(SfxObject *self, void *context) {
    SfxState *state = self->state;
    int ok;
    char *name = Script__PopString(self, context, &ok);
    if (name != (char *)-1) {
        SfxInner *inner = state->inner;
        SfxVtable *vtable = inner->vtable;
        vtable->stop((char *)inner + vtable->this_adjustment, name);
    }
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
