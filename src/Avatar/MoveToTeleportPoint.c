/* Avatar__MoveToTeleportPoint @ 0x80039958 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3f {
    float x;
    float y;
    float z;
} Vec3f;

extern void *Script__PopInt(void *self, void *ctx);
extern float Script__PopFloat(void *self, void *ctx);
extern void Avatar__MoveToTeleportPointImpl(void *id, Vec3f *a, Vec3f *b);

void Avatar__MoveToTeleportPoint(void *self, void *ctx) {
    Vec3f pos;
    Vec3f vel;
    Vec3f posCopy;
    Vec3f velCopy;
    float *py;
    void *id;

    id = Script__PopInt(self, ctx);
    py = &pos.x;
    pos.x = Script__PopFloat(self, ctx);
    py[1] = Script__PopFloat(self, ctx);
    py[2] = Script__PopFloat(self, ctx);
    vel.x = Script__PopFloat(self, ctx);
    vel.y = Script__PopFloat(self, ctx);
    vel.z = Script__PopFloat(self, ctx);
    posCopy = pos;
    velCopy = vel;
    Avatar__MoveToTeleportPointImpl(id, &posCopy, &velCopy);
}
