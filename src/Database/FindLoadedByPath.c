/* Database__FindLoadedByPath @ 0x802048E4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FindLoadedByPath @ 0x802048E4 (0x64). ProDG -O2. */
extern void *Database__BeginLoadedIteration(int type);
extern void *Database__NextLoaded(void);
extern int Database__PathSuffixMatches(const char *path, const char *name);

void *Database__FindLoadedByPath(const char *path) {
	char *entry = Database__BeginLoadedIteration(12);
	while (entry != 0) {
		if (Database__PathSuffixMatches(path, entry + 17) != 0)
			return entry;
		entry = Database__NextLoaded();
	}
	return 0;
}
