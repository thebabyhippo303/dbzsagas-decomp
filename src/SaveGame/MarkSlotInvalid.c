/* SaveGame__MarkSlotInvalid @ 0x800577C0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__MarkSlotInvalid @ 0x800577C0 (0x24). ProDG -O2. */
extern void SaveGame__SetSlotInvalidFlag(void *self, int slot, int flag);

void SaveGame__MarkSlotInvalid(void *self, int slot) {
    SaveGame__SetSlotInvalidFlag(self, slot, 1);
}
