/* AnimationTable__GetById @ 0x802125C4 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AnimationTable__GetById @ 0x802125C4 (0x28). ProDG -O2. */
typedef struct {
	char pad[4];
	void **entries;
} AnimationTable;

void *AnimationTable__GetById(AnimationTable *self, unsigned id) {
	if (id == 0xFFFFu)
		return 0;
	return self->entries[id & 0xFFFFu];
}
