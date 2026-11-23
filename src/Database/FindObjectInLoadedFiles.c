/* Database__FindObjectInLoadedFiles @ 0x80205B38 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FindObjectInLoadedFiles @ 0x80205B38 (0x78). ProDG -O2. */
extern void *Database__BeginLoadedIteration(int type);
extern void *Database__NextLoaded(void);
extern void *Database__FindObjectByType(void *file, void *a, void *b, int z0, int z1, int z2, void *d, int z3);

void *Database__FindObjectInLoadedFiles(void *a, void *b, void *d) {
	void *file = Database__BeginLoadedIteration(12);
	while (file != 0) {
		void *object = Database__FindObjectByType(file, a, b, 0, 0, 0, d, 0);
		if (object != 0)
			return object;
		file = Database__NextLoaded();
	}
	return 0;
}
