/* Pickup__ConsiderForNearestDistance @ 0x800F2434 (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */

typedef float f32;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { char pad[0x38]; Vec3 pos; char pad2[0x84-0x44]; unsigned short *bits; char pad3[0x90-0x88]; int field90; int field94; char pad4[0x61C-0x98]; int field61C; int field620; f32 field624; } Pickup;
typedef struct { f32 unk; Vec3 pos; f32 radius; } NearPoint;
extern f32 lbl_80324140 __attribute__((section(".data")));
f32 sqrtf(f32 x);
void fn_802CB62C(void);
void Pickup__ConsiderForNearestDistance(Pickup *self, int type, NearPoint *point) {
    int skip;
    Vec3 *selfPos; Vec3 *other; Vec3 delta; Vec3 squared; Vec3 *deltaPtr; Vec3 *squarePtr;
    f32 oz, sz, dz, sy, oy, ox, sx, dy, dx, dx2, dz2, dy2, rad, sum, dist;
    fn_802CB62C();
    if (type != 0x30016) return;
    if (self->field61C == 0) return;
    skip = 0;
    if ((self->field90 != 0) && (self->field94 <= 0)) skip = 1;
    if (skip != 0) return;
    if ((self->bits[1] & 1) != 0) return;

    selfPos = &self->pos; other = &point->pos; deltaPtr = &delta; squarePtr = &squared;
    sy = selfPos->y; oy = other->y; dy = sy - oy;
    sz = selfPos->z; oz = other->z; dz = sz - oz;
    sx = self->pos.x; ox = point->pos.x; dx = sx - ox;
    delta.y = dy; delta.z = dz; delta.x = dx;
    dx2 = delta.x * delta.x;
    dy2 = deltaPtr->y * deltaPtr->y;
    dz2 = deltaPtr->z * deltaPtr->z;
    squared.x = dx2; squared.y = dy2; squared.z = dz2;
    rad = point->radius * point->radius;
    sum = squarePtr->x + squarePtr->y + squarePtr->z;

    if (!(sum >= rad)) {
        dist = sqrtf(sum) * lbl_80324140;
        if (self->field620 != 0) {
            if (!(dist >= self->field624)) self->field624 = dist;
        } else {
            self->field624 = dist;
            self->field620 = 1;
        }
    }
}
