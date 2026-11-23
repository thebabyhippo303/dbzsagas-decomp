/* Simple__SetAndLockEnvActive @ 0x802AF528 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetAndLockEnvActive @ 0x802AF528 (0x64). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void *Script__PopActor(void *script, void *context, int mode);
extern void fn_802CB514(void *actor);

void Simple__SetAndLockEnvActive(void *script, void *context) {
	int value;
	int active;
	char *actor;
	value = (int)Script__PopInt(script, context);
	active = value != 0;
	actor = Script__PopActor(script, context, 0);
	*(int *)(actor + 600) = active;
	*(int *)(actor + 596) = 1;
	fn_802CB514(actor);
}
