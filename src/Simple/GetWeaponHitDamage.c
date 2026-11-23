/* Simple__GetWeaponHitDamage @ 0x8002AA9C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetWeaponHitDamage @ 0x8002AA9C (0x78). ProDG -O2. */
typedef struct WeaponHitVTable WeaponHitVTable;
typedef float (*WeaponHitDamageMethod)(void *subobject);

struct WeaponHitVTable {
    char pad[0x20];
    short thisAdjustment;
    WeaponHitDamageMethod getDamage;
};

typedef struct {
    char pad[0x64];
    WeaponHitVTable *vtable;
} WeaponHitObject;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_802C809C(void *record, void **value, void *unused_1,
                        void *unused_2, void *unused_3, void *unused_4,
                        void *unused_5, void *unused_6);

void Simple__GetWeaponHitDamage(void *script, void *context) {
    void *value;
    void *record = Script__PopInt(script, context);
    WeaponHitObject *object;
    WeaponHitVTable *vtable;
    float damage;

    fn_802C809C(record, &value, 0, 0, 0, 0, 0, 0);
    object = (WeaponHitObject *)value;
    vtable = object->vtable;
    damage = vtable->getDamage((char *)object + vtable->thisAdjustment);
    Script__PushFloat(script, context, damage);
}
