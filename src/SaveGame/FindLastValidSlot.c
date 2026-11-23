/* SaveGame__FindLastValidSlot @ 0x80150B34 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__FindLastValidSlot @ 0x80150B34 (0x60). ProDG -O2. */
extern void SaveGame__SelectStorageSlot(void *self, int slot);
extern int SaveGame__ValidateRecordTable(void *self);

int SaveGame__FindLastValidSlot(void *self) {
    int last;
    int slot;

    last = -1;
    for (slot = 0; slot <= 2; slot++) {
        SaveGame__SelectStorageSlot(self, slot);
        if (SaveGame__ValidateRecordTable(self) == 0)
            last = (signed char)slot;
    }
    return last;
}
