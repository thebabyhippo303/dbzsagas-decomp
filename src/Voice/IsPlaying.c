/* Voice__IsPlaying @ 0x802B0E18 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int (*PlayFn)(void *self);
typedef struct {
    char pad[88];
    short adjust;
    short unused;
    PlayFn fn;
} PlayVtable;

extern void Script__PushInt(void *script, void *context, int value);

void Voice__IsPlaying(void *script, void *context) {
    char *obj = *(char **)((char *)script + 200);
    char *inner = *(char **)(obj + 172);
    PlayVtable *vt = *(PlayVtable **)(inner + 12);
    Script__PushInt(script, context, vt->fn(inner + vt->adjust));
}
