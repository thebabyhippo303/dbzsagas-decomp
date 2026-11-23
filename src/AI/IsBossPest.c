/* AI__IsBossPest @ 0x80041B0C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__IsBossPest @ 0x80041B0C (0x5C). ProDG -O2. */
typedef int (*PestFn)(void *self);

typedef struct {
    char pad[0x60];
    short adjust;
    PestFn fn;
} PestVtable;

extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void AI__IsBossPest(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    void *obj = *(void **)((char *)avatar + 2956);
    PestVtable *vt = *(PestVtable **)((char *)obj + 1404);
    int result = vt->fn((char *)obj + vt->adjust);
    Script__PushInt(script, context, result);
}
