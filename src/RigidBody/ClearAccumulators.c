/* RigidBody__ClearAccumulators @ 0x801A3AC8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;
typedef struct { f32 x, y, z; } Vec3;

extern f32 lbl_80340CE4 __attribute__((section(".data")));

void RigidBody__ClearAccumulators(char *body) {
    f32 zero = lbl_80340CE4;
    Vec3 *a = (Vec3 *)(body + 0x314);
    Vec3 *b = (Vec3 *)(body + 0x320);
    Vec3 *c = (Vec3 *)(body + 0x32C);
    Vec3 *d = (Vec3 *)(body + 0x338);
    a->x = zero;
    a->y = zero;
    a->z = zero;
    b->x = zero;
    b->y = zero;
    b->z = zero;
    c->x = zero;
    c->y = zero;
    c->z = zero;
    d->x = zero;
    d->y = zero;
    d->z = zero;
    *(s32 *)(body + 0x34C) = 0;
    *(f32 *)(body + 0x348) = zero;
}
