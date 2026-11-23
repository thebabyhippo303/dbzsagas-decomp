/* Avatar__AndroidSetSpawnerPointer @ 0x80040318 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AndroidSetSpawnerPointer @ 0x80040318 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);

void Avatar__AndroidSetSpawnerPointer(void *script, void *context) {
	char *avatar;
	void *spawner;

	avatar = Script__PopInt(script, context);
	spawner = Script__PopInt(script, context);
	*(void **)(*(char **)(avatar + 0xB8C) + 0x40) = spawner;
}
