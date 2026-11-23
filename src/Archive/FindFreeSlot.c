/* Archive__FindFreeSlot @ 0x8017F3CC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Archive__FindFreeSlot @ 0x8017F3CC (0x3C). ProDG -O2. */
typedef struct {
	char pad[0x1C];
	int used;
	char pad2[4];
} ArchiveSlot;

extern ArchiveSlot *lbl_archiveSlots;
extern int lbl_archiveSlotCount;

ArchiveSlot *Archive__FindFreeSlot(void) {
	int i;
	for (i = 0; i < lbl_archiveSlotCount; i++) {
		if (lbl_archiveSlots[i].used == 0)
			return &lbl_archiveSlots[i];
	}
	return 0;
}
