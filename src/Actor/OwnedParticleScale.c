/* Actor__OwnedParticleScale @ 0x802ADD50 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__OwnedParticleScale @ 0x802ADD50 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Particle__SetOwnedScale(void *particle, float scale);

void Actor__OwnedParticleScale(void *script, void *context) {
	void *particle = Script__PopInt(script, context);
	float scale = Script__PopFloat(script, context);
	Particle__SetOwnedScale(particle, scale);
}
