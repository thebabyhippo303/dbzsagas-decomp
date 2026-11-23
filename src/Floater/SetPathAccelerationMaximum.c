/* Floater__SetPathAccelerationMaximum @ 0x802B049C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetPathAccelerationMaximum @ 0x802B049C (0x34). ProDG -O2. */
typedef struct {
    char pad[0x448];
    float accelerationMaximum;
} FloaterPathAccel;

typedef struct {
    char pad[0xC8];
    FloaterPathAccel *inner;
} FloaterAccelScript;

extern float Script__PopFloat(void *script, void *context);

void Floater__SetPathAccelerationMaximum(FloaterAccelScript *script, void *context) {
    FloaterAccelScript *self;
    FloaterPathAccel *inner;
    float value;

    self = script;
    inner = self->inner;
    value = Script__PopFloat(self, context);
    inner->accelerationMaximum = value;
}
