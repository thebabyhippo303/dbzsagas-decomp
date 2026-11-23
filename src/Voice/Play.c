/* Voice__Play @ 0x802B0D64 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Voice__Play @ 0x802B0D64 (0x78). ProDG -O2. */
typedef struct {
    char pad[0x48];
    short this_adjustment;
    void (*play)(void *self, char *name);
} VoiceVtable;

typedef struct {
    char pad[0xC];
    VoiceVtable *vtable;
} VoiceInner;

typedef struct {
    char pad[0xAC];
    VoiceInner *inner;
} VoiceState;

typedef struct {
    char pad[0xC8];
    VoiceState *state;
} VoiceObject;

extern char *Script__PopString(void *script, void *context, int *ok);
extern void fn_80184430(char *text);

void Voice__Play(VoiceObject *self, void *context) {
    VoiceState *state = self->state;
    int ok;
    char *name = Script__PopString(self, context, &ok);
    if (name != (char *)-1) {
        VoiceInner *inner = state->inner;
        VoiceVtable *vtable = inner->vtable;
        vtable->play((char *)inner + vtable->this_adjustment, name);
    }
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
