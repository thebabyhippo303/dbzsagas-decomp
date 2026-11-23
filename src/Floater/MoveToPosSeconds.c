/* Floater__MoveToPosSeconds @ 0x802B01E4 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__MoveToPosSeconds @ 0x802B01E4. ProDG -O2. */
typedef struct {
    char pad[0x1C8];
    short adjust;
    char pad2[2];
    void (*move)(void *self, float *pos, float seconds);
} FloaterMoveVtable;

typedef struct {
    char pad[0x34];
    FloaterMoveVtable *vtable;
} FloaterActor;

extern void *Script__PopActor(void *script, void *context, int flags);
extern float Script__PopFloat(void *script, void *context);

void Floater__MoveToPosSeconds(void *script, void *context) {
    float pos[3];
    float *p;
    float seconds;
    FloaterActor *actor;
    FloaterMoveVtable *vtable;

    actor = Script__PopActor(script, context, 0);
    seconds = Script__PopFloat(script, context);
    p = pos;
    p[2] = Script__PopFloat(script, context);
    p[1] = Script__PopFloat(script, context);
    p[0] = Script__PopFloat(script, context);
    vtable = actor->vtable;
    vtable->move((char *)actor + vtable->adjust, p, seconds);
}
