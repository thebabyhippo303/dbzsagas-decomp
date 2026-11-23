/* Fighter__QueueWeaponFire @ 0x800F0178 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct V3 { int x, y, z; } V3;
typedef struct V3f { float x, y, z; } V3f;
typedef struct Fi {
    char pad[0x76C];
    float spread;
    int mode;
    int flag;
    union { V3 v; V3f f; } target;
    int hasTarget;
} Fi;
extern float lbl_80323B94 __attribute__((section(".rodata")));

void Fighter__QueueWeaponFire(Fi *self, V3 *target, int mode, float spread) {
    if (target != 0) {
        self->target.v = *target;
        self->hasTarget = 1;
    } else {
        V3f *p = &self->target.f;
        float z = lbl_80323B94;
        p->x = z;
        p->y = z;
        p->z = z;
        self->hasTarget = 0;
    }
    self->spread = spread;
    self->flag = 1;
    self->mode = mode;
}
