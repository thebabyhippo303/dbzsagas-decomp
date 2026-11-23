/* Simple__YRotateToFaceTargetImpl @ 0x802C6B40 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__YRotateToFaceTargetImpl @ 0x802C6B40 (0xC0). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

typedef struct {
    char pad[0x38];
    float x;
    char pad2[4];
    float z;
} SimpleActor;

extern float lbl_80353218 __attribute__((section(".rodata")));
extern float lbl_8035321C __attribute__((section(".rodata")));
extern float lbl_803DE500 __attribute__((section(".sdata2")));

extern float atan2f(float y, float x);
extern void Simple__RotateToYAngleImpl(SimpleActor *self, float angle, float rate, float speed);

void Simple__YRotateToFaceTargetImpl(SimpleActor *self, Vec3f *target, float rate, float speed) {
    float dz;
    float dx;
    float angle;
    float zero;

    zero = lbl_80353218;
    dx = target->x - self->x;
    dz = target->z - self->z;
    if (dz == zero) {
        if (dx == zero) {
            angle = zero;
        } else if (!(dx <= zero)) {
            angle = lbl_803DE500 * lbl_8035321C;
        } else {
            angle = -lbl_803DE500 * lbl_8035321C;
        }
    } else {
        angle = atan2f(dx, dz);
    }
    Simple__RotateToYAngleImpl(self, angle, rate, speed);
}
