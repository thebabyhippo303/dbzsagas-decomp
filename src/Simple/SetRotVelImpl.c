/* Simple__SetRotVelImpl @ 0x802C6CB4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetRotVelImpl @ 0x802C6CB4 (0x4C). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} RotVel;

extern void Simple__SetXRotVel(void *self, float x);
extern void Simple__SetYRotVel(void *self, float y);
extern void Simple__SetZRotVel(void *self, float z);

void Simple__SetRotVelImpl(void *self, RotVel *vel) {
    Simple__SetXRotVel(self, vel->x);
    Simple__SetYRotVel(self, vel->y);
    Simple__SetZRotVel(self, vel->z);
}
