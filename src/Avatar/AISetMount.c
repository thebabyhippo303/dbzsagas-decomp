/* Avatar__AISetMount @ 0x8003C6E0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AISetMount @ 0x8003C6E0 (0x90). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern int Game__FindNearestEligibleAvatar(void *actor);

void Avatar__AISetMount(void *script, void *context) {
	char *actor;
	int enable;
	char *state;
	char *eligible;

	actor = Script__PopInt(script, context);
	enable = Script__PopInt(script, context) != 0;
	if (*(int *)(actor + 2020) == 0) {
		state = *(char **)(actor + 2956);
		*(int *)(state + 1064) = 0;
		if (enable) {
			eligible = (char *)Game__FindNearestEligibleAvatar(actor);
			if (eligible != 0 && *(int *)(eligible + 1644) != 0)
				*(int *)(state + 1064) = 1;
		}
	}
}
