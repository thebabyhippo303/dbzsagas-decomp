/* Fighter__LobWeaponAtTarget @ 0x8002B848 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__LobWeaponAtTarget @ 0x8002B848 (0x74). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float Script__PopFloat(void *script, void *context);
extern void Fighter__QueueWeaponFire(void *weapon, Vec3 *pos, int flag, float speed);

void Fighter__LobWeaponAtTarget(void *script, void *context) {
    Vec3 pos;
    Vec3 *p = &pos;
    float speed;

    p->x = Script__PopFloat(script, context);
    p->y = Script__PopFloat(script, context);
    p->z = Script__PopFloat(script, context);
    speed = Script__PopFloat(script, context);
    Fighter__QueueWeaponFire(*(void **)((char *)script + 0xC8), p, 1, speed);
}
