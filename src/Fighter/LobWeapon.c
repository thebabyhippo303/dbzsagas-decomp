/* Fighter__LobWeapon @ 0x8002B5E4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__LobWeapon @ 0x8002B5E4 (0x68). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    char *inner;
} FighterScript;

typedef struct {
    char pad[0x160];
    int *target;
} LobTarget;

extern LobTarget *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Fighter__QueueWeaponFire(char *self, int *src, int flag, float scale);

void Fighter__LobWeapon(FighterScript *script, void *context) {
    LobTarget *target = Script__PopInt(script, context);
    float scale = Script__PopFloat(script, context);
    char *inner = script->inner;
    if (target != 0)
        Fighter__QueueWeaponFire(inner, target->target, 1, scale);
    else
        Fighter__QueueWeaponFire(inner, 0, 1, scale);
}
