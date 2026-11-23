/* Pickup__Create @ 0x8002BD68 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct PickupVtable {
    char pad[0x178];
    short adjust;
    char pad2[2];
    void (*reset)(void *self);
} PickupVtable;

typedef struct Pickup {
    char pad[0x34];
    PickupVtable *vtable;
    char pad2[0x5E8 - 0x38];
    int owner;
} Pickup;

typedef struct ScriptObj {
    char pad[0xC8];
    int fieldC8;
} ScriptObj;

extern float Script__PopFloat(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern void *fn_801842C4(unsigned int size);
extern void fn_80184430(char *text);
extern Pickup *Pickup__Construct(void *mem, char *name, Vec3 *pos);
extern void Pickup__SetStationaryImpl(void *self, int stationary);

void Pickup__Create(ScriptObj *script, void *context) {
    Vec3 pos;
    Vec3 copied;
    Vec3 *p;
    Vec3 *out;
    int owned;
    char *name;
    int linkOwner;
    int stationary;
    Pickup *pickup;
    PickupVtable *vtable;

    p = &pos;
    out = &copied;
    p->x = Script__PopFloat(script, context);
    p->y = Script__PopFloat(script, context);
    p->z = Script__PopFloat(script, context);
    name = Script__PopString(script, context, &owned);
    linkOwner = Script__PopInt(script, context);
    stationary = Script__PopInt(script, context);
    *out = *p;
    pickup = Pickup__Construct(fn_801842C4(0x654), name, out);
    Pickup__SetStationaryImpl(pickup, stationary != 0);
    vtable = pickup->vtable;
    vtable->reset((char *)pickup + vtable->adjust);
    if (linkOwner != 0) {
        pickup->owner = script->fieldC8;
    }
    Script__PushInt(script, context, (int)pickup);
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
