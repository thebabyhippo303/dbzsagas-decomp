/* Floater__MoveToPos @ 0x802B0164 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__MoveToPos @ 0x802B0164 (0x80). ProDG -O2. */
typedef struct {
    char pad[0x1C8];
    short adjust;
    char pad2[2];
    void (*move)(void *self, float *pos, float speed);
} FloaterVtable;

typedef struct {
    char pad[0x34];
    FloaterVtable *vtable;
} FloaterComponent;

typedef struct {
    char pad[0xC8];
    FloaterComponent *component;
} FloaterObject;

extern float Script__PopFloat(void *self, void *context);
extern float lbl_80351E2C __attribute__((section(".data")));

void Floater__MoveToPos(FloaterObject *self, void *context) {
    float pos[3];
    float *p = pos;
    FloaterComponent *component;
    FloaterVtable *vtable;

    p[2] = Script__PopFloat(self, context);
    p[1] = Script__PopFloat(self, context);
    p[0] = Script__PopFloat(self, context);
    component = self->component;
    vtable = component->vtable;
    vtable->move((char *)component + vtable->adjust, pos, lbl_80351E2C);
}
