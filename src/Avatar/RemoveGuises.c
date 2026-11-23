/* Avatar__RemoveGuises @ 0x8002D4F4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__RemoveGuises @ 0x8002D4F4 (0x58). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__RemoveGuisesImpl(void *actor, int enabled);

void Avatar__RemoveGuises(void *script, void *context) {
	void *actor = Script__PopInt(script, context);
	int enabled = Script__PopInt(script, context) != 0;
	Avatar__RemoveGuisesImpl(actor, enabled);
}
