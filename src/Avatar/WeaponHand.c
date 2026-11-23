/* Avatar__WeaponHand @ 0x800267B4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__WeaponHand @ 0x800267B4 (0x54). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);

void Avatar__WeaponHand(void *script, void *context) {
	char *avatar = Script__PopInt(script, context);
	int hand = (int)Script__PopInt(script, context);
	char *fighter = *(char **)(avatar + 0x19D8);
	if (*(int *)(fighter + 0x0C) != 53)
		*(int *)(avatar + 0x18D4) = hand;
}
