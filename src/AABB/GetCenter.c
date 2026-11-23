/* AABB__GetCenter @ 0x802008E0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct AABB { Vec3 mn, mx; } AABB;

void AABB__GetCenter(Vec3 *out, AABB *box) {
    Vec3 sum;

    sum.x = box->mn.x + box->mx.x;
    sum.y = box->mn.y + box->mx.y;
    sum.z = box->mn.z + box->mx.z;
    out->x = sum.x * 0.5f;
    out->y = sum.y * 0.5f;
    out->z = sum.z * 0.5f;
}
