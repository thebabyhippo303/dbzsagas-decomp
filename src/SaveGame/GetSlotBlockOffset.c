/* SaveGame__GetSlotBlockOffset @ 0x80150C00 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__GetSlotBlockOffset @ 0x80150C00 (0x50). ProDG -O2. */
typedef struct SlotOps {
    char pad[0xF0];
    signed short offset;
    char pad2[2];
    int (*fn)(void *storage, int slot, int slotSize);
} SlotOps;

typedef struct SlotStorage {
    char pad[0xC];
    SlotOps *ops;
} SlotStorage;

extern SlotStorage *lbl_803DCC70;
extern int SaveGame__GetSlotSize(void *self);

int SaveGame__GetSlotBlockOffset(void *self, int slot) {
    int slotSize = SaveGame__GetSlotSize(self);
    SlotStorage *storage = lbl_803DCC70;
    SlotOps *ops = storage->ops;
    signed short off = ops->offset;
    return ops->fn((char *)storage + off, slot, slotSize);
}
