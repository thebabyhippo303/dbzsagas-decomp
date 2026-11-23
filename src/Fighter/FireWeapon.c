/* Fighter__FireWeapon @ 0x8002B304 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__FireWeapon @ 0x8002B304 (0x68). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    char *inner;
} FighterScript;

typedef struct {
    char pad[0x160];
    int *target;
} FireTarget;

extern FireTarget *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Fighter__QueueWeaponFire(char *self, int *src, int flag, float scale);

void Fighter__FireWeapon(FighterScript *script, void *context) {
    FireTarget *target = Script__PopInt(script, context);
    float scale = Script__PopFloat(script, context);
    char *inner = script->inner;
    if (target != 0)
        Fighter__QueueWeaponFire(inner, target->target, 0, scale);
    else
        Fighter__QueueWeaponFire(inner, 0, 0, scale);
}
