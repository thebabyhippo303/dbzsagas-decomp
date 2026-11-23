/* AABB__IncludeTransformedPoint @ 0x800F4290 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
void AABB__IncludeTransformedPoint(f32 *m, Vec3 *mn, Vec3 *mx, f32 x, f32 y, f32 z) {
    Vec3 a, b;
    Vec3 *pa = &a;
    Vec3 *pb = &b;
    f32 ax;
    a.x = x;
    pa->y = y;
    pa->z = z;
    ax = a.x;
    b.x = ax * m[0] + y * m[3] + z * m[6];
    b.y = ax * m[1] + y * m[4] + z * m[7];
    b.z = ax * m[2] + y * m[5] + z * m[8];
    *pa = *pb;
    if (!(a.x >= mn->x)) mn->x = a.x;
    if (!(a.x <= mx->x)) mx->x = a.x;
    if (!(pa->y >= mn->y)) mn->y = pa->y;
    if (!(pa->y <= mx->y)) mx->y = pa->y;
    if (!(pa->z >= mn->z)) mn->z = pa->z;
    if (!(pa->z <= mx->z)) mx->z = pa->z;
}
