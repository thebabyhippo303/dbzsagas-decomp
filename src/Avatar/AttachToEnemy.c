/* Avatar__AttachToEnemy @ 0x8003AD30 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AttachToEnemy @ 0x8003AD30 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void *Game__FindNearestEligibleAvatar(void *actor);

void *Avatar__AttachToEnemy(void *script, void *context) {
	void *actor = Script__PopInt(script, context);
	Script__PopInt(script, context);
	return Game__FindNearestEligibleAvatar(actor);
}
