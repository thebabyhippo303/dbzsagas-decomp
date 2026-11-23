/* Table__ReadFileData @ 0x801516FC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Table__ReadFileData @ 0x801516FC (0x2C). ProDG -O2. */
extern int File__Read(void *file, void *buffer, int length);

int Table__ReadFileData(void *self, void *file, void *buffer, int length) {
	return File__Read(file, buffer, length);
}
