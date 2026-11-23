/* Actor__SetParticleEmitterEjectVel @ 0x802ADF1C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetParticleEmitterEjectVel @ 0x802ADF1C (0x88). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void fn_802244AC(void *emitter, float *velocity);

void Actor__SetParticleEmitterEjectVel(void *script, void *context) {
    float velocity[3];
    void *emitter = Script__PopInt(script, context);
    float x = Script__PopFloat(script, context);
    float y = Script__PopFloat(script, context);
    float z = Script__PopFloat(script, context);
    float *base;
    velocity[0] = x;
    base = velocity;
    base[1] = y;
    base[2] = z;
    fn_802244AC(emitter, base);
}
