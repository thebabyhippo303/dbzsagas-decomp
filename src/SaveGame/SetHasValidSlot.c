/* SaveGame__SetHasValidSlot @ 0x800577E4 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__SetHasValidSlot @ 0x800577E4 (0x8). ProDG -O2. */
typedef struct {
    char pad[0x5C];
    int has_valid_slot;
} SaveGame;

void SaveGame__SetHasValidSlot(SaveGame *self, int has_valid_slot) {
    self->has_valid_slot = has_valid_slot;
}
