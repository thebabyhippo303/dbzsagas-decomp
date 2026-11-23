/* Actor__SetParticleEmitterWorldPos @ 0x802ADE94 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetParticleEmitterWorldPos @ 0x802ADE94 (0x88). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Emitter__SetWorldPosition(void *emitter, float *position);

void Actor__SetParticleEmitterWorldPos(void *script, void *context) {
    float position[3];
    void *emitter = Script__PopInt(script, context);
    float x = Script__PopFloat(script, context);
    float y = Script__PopFloat(script, context);
    float z = Script__PopFloat(script, context);
    float *base;
    position[0] = x;
    base = position;
    base[1] = y;
    base[2] = z;
    Emitter__SetWorldPosition(emitter, base);
}
