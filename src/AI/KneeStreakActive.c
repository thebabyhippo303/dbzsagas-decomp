/* AI__KneeStreakActive @ 0x80045268 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__KneeStreakActive @ 0x80045268 (0x54). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void AI__KneeStreakActive(void *script, void *context) {
	char *avatar;
	int value;

	avatar = (char *)Script__PopInt(script, context);
	value = Script__PopInt(script, context);
	if (*(int *)(avatar + 0x7E4) == 0) {
		*(int *)(*(char **)(avatar + 0xB8C) + 0x54C) = value;
	}
}
