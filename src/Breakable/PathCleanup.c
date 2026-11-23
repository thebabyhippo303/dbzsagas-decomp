/* Breakable__PathCleanup @ 0x8003B3BC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Breakable__PathCleanup @ 0x8003B3BC (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void fn_801843CC(void *allocation);

void Breakable__PathCleanup(void *script, void *context) {
	char *breakable = Script__PopInt(script, context);
	void *path = *(void **)(breakable + 0x540);
	if (path != 0) {
		void *data = *(void **)path;
		if (data != 0)
			fn_801843CC(data);
		fn_801843CC(path);
	}
}
