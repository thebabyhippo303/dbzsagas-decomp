/* RigidBody__StorePreviousTransform @ 0x801A2EE8 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Mat3 { f32 m[9]; } Mat3;

typedef struct RigidBody {
    char pad[0x224];
    Vec3 pos;
    Mat3 rot;
    Vec3 v1;
    Vec3 v2;
    Vec3 prevPos;
    Mat3 prevRot;
    Vec3 prevV1;
    Vec3 prevV2;
} RigidBody;

void RigidBody__StorePreviousTransform(RigidBody *b) {
    b->prevPos = b->pos;
    {
        f32 *s = b->rot.m;
        f32 *d = b->prevRot.m;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        d[4] = s[4];
        d[5] = s[5];
        d[6] = s[6];
        d[7] = s[7];
        d[8] = s[8];
    }
    b->prevV1 = b->v1;
    b->prevV2 = b->v2;
}
