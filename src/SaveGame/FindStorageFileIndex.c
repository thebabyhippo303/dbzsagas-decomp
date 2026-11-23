/* SaveGame__FindStorageFileIndex @ 0x801503A4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__FindStorageFileIndex @ 0x801503A4 (0x74). ProDG -O2. */
extern int strcmp(const char *a, const char *b);

int SaveGame__FindStorageFileIndex(char *self, const char *name, int *out_index) {
	int found;
	unsigned index;
	char *entry;
	found = 0;
	index = 0;
	entry = self + 172;
	while (index < *(unsigned *)(self + 16)) {
		if (strcmp(name, entry) == 0) {
			found = 1;
			break;
		}
		entry += 64;
		index += 1;
	}
	*out_index = (int)index;
	return found;
}
