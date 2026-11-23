/* Fighter__FireWeaponAtTarget @ 0x8002B570 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__FireWeaponAtTarget @ 0x8002B570 (0x74). ProDG -O2. */
typedef float f32;

extern void Fighter__QueueWeaponFire(char *self, int *src, int flag, float scale);
extern float Script__PopFloat(void *script, void *context);

void Fighter__FireWeaponAtTarget(void *arg0, void *arg1) {
    f32 vec[3];
    f32 *p;
    f32 scale;

    p = vec;
    p[0] = Script__PopFloat(arg0, arg1);
    p[1] = Script__PopFloat(arg0, arg1);
    p[2] = Script__PopFloat(arg0, arg1);
    scale = Script__PopFloat(arg0, arg1);
    Fighter__QueueWeaponFire(*(char **)((char *)arg0 + 0xC8), (int *)p, 0, scale);
}
