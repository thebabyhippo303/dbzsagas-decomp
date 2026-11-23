/* Avatar__GetProximityToPath @ 0x80024CB0 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetProximityToPath @ 0x80024CB0 (0x88). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} ProximityVec;

typedef struct {
    char pad[32];
    short adjust;
    char pad2[2];
    float (*proximity)(void *self, ProximityVec *pos);
} ProximityVtable;

typedef struct {
    char pad[20];
    ProximityVtable *vtable;
} ProximityObject;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Avatar__GetProximityToPath(void *self, void *context) {
    char *path = Script__PopInt(self, context);
    ProximityObject *object = Script__PopInt(self, context);
    ProximityVec pos = *(ProximityVec *)(path + 56);
    ProximityVtable *vtable = object->vtable;

    Script__PushFloat(self, context, vtable->proximity((char *)object + vtable->adjust, &pos));
}
