/* Avatar__SetParticleEmitterAlpha @ 0x80043E60 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetParticleEmitterAlpha @ 0x80043E60 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Emitter__SetAlpha(void *emitter, float alpha);

void Avatar__SetParticleEmitterAlpha(void *script, void *context) {
    void *emitter = Script__PopInt(script, context);
    Emitter__SetAlpha(emitter, Script__PopFloat(script, context));
}
