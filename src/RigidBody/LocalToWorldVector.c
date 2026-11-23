/* RigidBody__LocalToWorldVector @ 0x801A4CF0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

Vec3 *RigidBody__LocalToWorldVector(Vec3 *out, char *body, Vec3 *v) {
    f32 *m = (f32 *)(body + 0x44);
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;
    f32 rx = (x * m[0] + y * m[3]) + z * m[6];
    f32 ry = (x * m[1] + y * m[4]) + z * m[7];
    f32 rz = (x * m[2] + y * m[5]) + z * m[8];

    out->x = rx;
    out->y = ry;
    out->z = rz;
    return out;
}
