/* PersistentData__GetUnavailablePickupCountForLevel @ 0x801293E0 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetUnavailablePickupCountForLevel @ 0x801293E0 (0x7C). ProDG -O2. */
extern int PersistentData__GetPickupCountForLevel(void *self, int level, int type);
extern int PersistentData__IsPickupAvailableForLevel(void *self, int level, int type, int index);

int PersistentData__GetUnavailablePickupCountForLevel(void *self, int level, int type) {
	int count = 0;
	int i;
	for (i = 0; i < PersistentData__GetPickupCountForLevel(self, level, type); i++) {
		if (PersistentData__IsPickupAvailableForLevel(self, level, type, i) == 0)
			count++;
	}
	return count;
}
