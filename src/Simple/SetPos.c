/* Simple__SetPos @ 0x802AE634 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetPos @ 0x802AE634 (0x8C). ProDG -O2. */
typedef struct {
    char pad[0x90];
    short adjustA;
    char padA[2];
    void (*fnA)(void *self);
    char padB[0x10];
    short adjustB;
    char padC[2];
    void (*fnB)(void *self);
} SimpleVtable;

typedef struct {
    char pad[0x34];
    SimpleVtable *vtable;
    float pos[3];
} SimpleObject;

typedef struct {
    char pad[0xC8];
    SimpleObject *simple;
} SimpleScript;

extern float Script__PopFloat(void *script, void *context);

void Simple__SetPos(SimpleScript *script, void *context) {
    SimpleObject *simple = script->simple;
    float *pos = simple->pos;
    pos[2] = Script__PopFloat(script, context);
    pos[1] = Script__PopFloat(script, context);
    pos[0] = Script__PopFloat(script, context);
    simple->vtable->fnB((char *)simple + simple->vtable->adjustB);
    simple->vtable->fnA((char *)simple + simple->vtable->adjustA);
}
